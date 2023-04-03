#include "navigation_server/NavigationInterface.h"

#include <ros/ros.h>

using namespace std;

/**
 * @brief  Constructor for the NavigationInterface
 */
NavigationInterface::NavigationInterface(std::string name) : m_missionServer(nh, name, boost::bind(&NavigationInterface::missionCallback, this, _1), false), action_name(name),nhp("~")
{
    nsMachine = new NavigationServerMachine();
    nsMachine->initiate();

    initializeParameters();
    // feedbackPub   = nh.advertise<robot_msgs::Feedback>(m_missionFeedbackTopic.c_str(), 1);



    m_missionServer.start();

    /*Threads*/
    t_feedback          = std::thread(&NavigationInterface::feedbackUpdate, this);
    ROS_INFO_NAMED("NavigationInterface","Constructor NavigationInterface");

}

/**
 * @brief  Destructor for the NavigationInterface
 */

NavigationInterface::~NavigationInterface()
{
    t_feedback.join();
    ROS_INFO_NAMED("NavigationInterface","Destructor NavigationInterface");;
}




/**
 * @brief  Resets parameters from the parameter server
 */
void NavigationInterface::resetParameters()
{
    m_completionPercentage = 0.0;
    m_missionCancel        = false;
}


/**
 * @brief  Initialize parameters from the parameter server
 */
void NavigationInterface::initializeParameters()
{
    nhp.param<std::string>("navigation_index", m_navigationIndex,"MOVE");
    m_missionStatus = robot_msgs::Feedback::IDLE;
}


/**
 * @brief  Continuously publishing feedback for the mission in a different thread
*/
void NavigationInterface::feedbackUpdate()
{
    ros::Rate r(1.0);
    bool errorStateStatus = false;
    bool errorStateCompletion = false; 
    while (ros::ok())
    { 
        
        /*Updates the error status for mission feedback*/
        errorStateStatus = nsMachine->getErrorMissionStatus();
        if (errorStateStatus)
        {
            m_currentIndex   = "ERROR";
            bool resetErrorStatus = false;
            nsMachine->setErrorMissionStatus(resetErrorStatus);
        }

        errorStateCompletion = nsMachine->getErrorStateCompletion();
        if(errorStateCompletion)
        {
            m_currentIndex   = "IDLE";
            robot_msgs::Task mission;
            nsMachine->process_event(IdleEvent(mission));

            bool setErrorState = false;
            nsMachine->setErrorStateCompletion(setErrorState);
        }

        // robot_msgs::Feedback missionFeedback;
        // missionFeedback                       = nsMachine->getMissionFeedback();
        // missionFeedback.index                 = m_currentIndex;
        // missionFeedback.mission_id            = m_missionId;
        // missionFeedback.completion_percentage = m_completionPercentage;
        // missionFeedback.status                = m_missionStatus;
        // feedbackPub.publish(missionFeedback);
        r.sleep();
    }
}

   







void NavigationInterface::missionCallback(const robot_msgs::MissionGoalConstPtr &goal)
{
    /*Parameters can be resetted at the beginning of every mission call back*/
    resetParameters();

    m_missionList.clear();
    m_missionList.resize(0);

    m_numberOfLoops = goal->loop_number;
    m_missionId     = goal->mission_id;
    m_missionList   = goal->mission_list;   

    m_missionResult.mission_id = m_missionId;

    ros::Rate r(10.0);

    bool cancelMissionStatus = false;
    bool success = true;
    nsMachine->setCancelMissionStatus(cancelMissionStatus);
    m_currentTime = m_lastTime = seconds();




    /*Experimentally resetting m_chargeOverride after executing new goal */
    //ROS_ERROR_NAMED("NavigationInterface","Resetting charge override ..!!");
    
    t_missionExecution = std::thread(&NavigationInterface::missionExecution, this);
    m_entryCondition = (m_missionList.size() > 0);
    while (m_entryCondition && ros::ok())
    {

        // ROS_INFO("Test 1 m_entryCondition : %d   m_missionCancel : %d",m_entryCondition,m_missionCancel);

        m_currentTime = seconds();
        m_missionCancel = nsMachine->getCancelMissionStatus();
        if (m_missionServer.isPreemptRequested() || m_missionCancel || !ros::ok())
        {
            m_entryCondition                                         = false;
            cancelMissionStatus                                      = true;
            nsMachine->setCancelMissionStatus(cancelMissionStatus);
            m_missionFeedback.mission_feedback                       = nsMachine->getMissionFeedback();
            m_missionFeedback.mission_feedback.index                 = m_currentIndex;
            m_missionStatus                                          = robot_msgs::Feedback::ABORTED;
            m_missionFeedback.mission_feedback.status                = m_missionStatus;
            m_missionFeedback.mission_feedback.completion_percentage = m_completionPercentage;
            m_missionFeedback.mission_feedback.time_elapsed          = m_deltaTime;
            m_missionServer.publishFeedback(m_missionFeedback);                                                                                                                                                                         
            //m_missionServer.setPreempted();

            m_missionResult.is_success = false;
            m_missionServer.setPreempted(m_missionResult);
            success = false;
            ROS_ERROR_NAMED("NavigationInterface","Preempting Navigation Server.....!!!");

            break;
        }

        m_deltaTime     = m_currentTime - m_lastTime;




        m_missionFeedback.mission_feedback                       = nsMachine->getMissionFeedback();
        m_missionFeedback.mission_feedback.index                 = m_currentIndex;
        m_missionFeedback.mission_feedback.status                = robot_msgs::Feedback::ACTIVE;
        m_missionFeedback.mission_feedback.completion_percentage = m_completionPercentage;
        m_missionFeedback.mission_feedback.time_elapsed          = m_deltaTime;
        m_missionServer.publishFeedback(m_missionFeedback);

        r.sleep();
    }

    // ROS_INFO("Test 2 m_entryCondition : %d   m_missionCancel : %d",m_entryCondition,m_missionCancel);
    ROS_WARN_NAMED("NavigationInterface","NavigationInterface::Exiting mission callback");
    m_missionResult.mission_id = m_missionId;
    if (success)
    {
        m_missionResult.is_success                               = true;
        m_missionFeedback.mission_feedback                       = nsMachine->getMissionFeedback();
        m_missionFeedback.mission_feedback.index                 = m_currentIndex;
        m_missionFeedback.mission_feedback.status                = robot_msgs::Feedback::SUCCESS;
        m_missionFeedback.mission_feedback.completion_percentage = m_completionPercentage;
        m_missionFeedback.mission_feedback.time_elapsed          = m_deltaTime;
        m_missionServer.publishFeedback(m_missionFeedback);
        m_missionServer.setSucceeded(m_missionResult);
    }


    /*Resetting m_missionId once the entire cycle is over*/
    m_missionId = "";

    t_missionExecution.join();
}

/**
 * @brief  Cateogorizing the task according to the sequence received
 */
void NavigationInterface::missionExecution()
{

    robot_msgs::Task mission;
    int numberOfLoops = (m_numberOfLoops > 0) ? m_numberOfLoops : 1;

    /*As soon as this error state occurs it should stop*/
    bool errorStateStatus     = nsMachine->getErrorMissionStatus();
    bool errorStateCompletion = nsMachine->getErrorStateCompletion();

    /*Charging happens once the current mission gets completed*/
    for (int j = 0; ((j < numberOfLoops)  && m_entryCondition && !m_missionCancel); j++)
    {
        m_missionActive = true;
        for (int i = 0; (i < m_missionList.size() && m_entryCondition && !m_missionCancel && !errorStateCompletion); i++)
        {
            ROS_WARN_STREAM("Iteration number : "<< i << " with task   : "<< m_missionList[i].index  <<"   "  << "and total numbers: " << m_missionList.size());
            m_currentFeedback           = m_missionList[i].index + " " + m_missionList[i].coordinate_index;            
            m_currentIndex              = m_missionList[i].index;
            if (m_missionList[i].index  == m_navigationIndex)
            {
                mission = m_missionList[i];
                nsMachine->process_event(MoveEvent(mission));
            }

            else
            {
                ROS_WARN_NAMED("NavigationInterface","Default event triggered");
                mission = m_missionList[i];
                nsMachine->process_event(IdleEvent(mission));   
            }
            m_missionCancel = nsMachine->getCancelMissionStatus();
            if (!m_missionCancel)
            {
                m_completionPercentage = (((j * m_missionList.size()) + i + 1) * 100) / (m_missionList.size() * numberOfLoops);
            }
            std::cout << " Percentage Completion " << m_completionPercentage << "  Entry Condition   " << m_entryCondition << "  Mission Cancel : " << m_missionCancel << std::endl;
        
            // errorStateStatus = nsMachine->getErrorMissionStatus();
            // errorStateCompletion = nsMachine->getErrorStateCompletion();

            // ROS_ERROR("State status : %d  Completion  : %d",errorStateStatus,errorStateCompletion);
        }
    }


    if(m_missionCancel)
    {
        ROS_WARN_NAMED("NavigationInterface","Mission aborted,moving to ERROR state");
        m_currentIndex   = "ERROR";
        nsMachine->process_event(ErrorEvent(mission));
    }

    m_missionActive = false;
    if (!m_missionCancel)
    {
        m_entryCondition = false;
    }
}

/**
 * @brief Estimates time in seconds
 * @returns system time in seconds
 */
uint64_t NavigationInterface::seconds()
{
    uint64_t seconds = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
    return seconds;
}




/**
 * @brief  Main function
 */

int main(int argc, char **argv)
{
    ros::init(argc, argv, "navigation_server");
    NavigationInterface navInterface("navigation_server");
    ros::spin();
    return 0;
}
