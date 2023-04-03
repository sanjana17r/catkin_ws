#include "waiting_module.h"
#include <ros/console.h>

/**
* @brief  Constructor for the WaitingModule
*/
WaitingModule::WaitingModule(std::string name) : m_wait(nh, name, boost::bind(&WaitingModule::waitCallback, this, _1), false), action_name(name)
{

    m_currentTime = m_lastTime = seconds();
    
    /*Service*/
    userSrvc = nh.advertiseService("/user_feedback", &WaitingModule::userFeedbackCallback, this);
    m_wait.start();
    ROS_INFO_NAMED("WaitingModule","WaitingModule Constructor called");
}

/**
* @brief  Destructor for the WaitingModule
*/

WaitingModule::~WaitingModule()
{
    ROS_ERROR_NAMED("WaitingModule","WaitingModule Destructor called");
}

/**
 * @brief  Action server call back 
 */
void WaitingModule::waitCallback(const robot_msgs::WaitGoalConstPtr &goal)
{

    robot_msgs::WaitFeedback feedback;
    robot_msgs::WaitResult result;
    feedback.wait_feedback = false;
    result.is_success = false;
    bool success = true;

    ros::Rate r(1.0);
    
    m_currentTime = m_lastTime = seconds();
    
    int waitTime        = goal->wait_time;
    bool waitActivate   = goal->wait_activate;
    bool entryCondition = ((waitTime > 0) || (waitActivate));
    m_userFeedback      = false;

    while (entryCondition && ros::ok())
    {
        bool raceCondition = waitTime && waitActivate;
        m_currentTime = seconds();
        uint64_t deltaTime = m_currentTime - m_lastTime;
        
        if (m_wait.isPreemptRequested() || !ros::ok() || raceCondition)
        {
            success = false;
            feedback.time_elapsed = deltaTime;
            feedback.wait_feedback = false;
            m_wait.publishFeedback(feedback);
            m_wait.setPreempted();
            break;
        }


        // ROS_INFO("Time         : %d",deltaTime);
        if((deltaTime > waitTime) && (waitTime > 0))
        {
            m_lastTime = m_currentTime; 
            entryCondition = false;
            ROS_WARN_NAMED("WaitingModule","WaitingModule reset after %d seconds", deltaTime);
        }

        if(m_userFeedback && waitActivate)
        {
            entryCondition = false;
            ROS_WARN_NAMED("WaitingModule","WaitingModule reset after User Feedback");
        }

        feedback.time_elapsed = deltaTime;
        feedback.wait_feedback = true;
        m_wait.publishFeedback(feedback);
        r.sleep();
    }

    if (success)
    {
        result.is_success = true;
        feedback.wait_feedback = true;
        ROS_INFO_NAMED("WaitingModule","WaitingModule %s: Succeeded", action_name.c_str());
        m_wait.setSucceeded(result);
    }
    else
    {
        result.is_success = false;
        feedback.wait_feedback = false;
        ROS_ERROR_NAMED("WaitingModule","WaitingModule %s: Aborted", action_name.c_str());
        m_wait.setAborted(result);        
    }
}


/**
 * @brief  Service call back for user feedback
 */
bool WaitingModule::userFeedbackCallback(robot_msgs::UserFeedback::Request &req, robot_msgs::UserFeedback::Response &res)
{
    m_userFeedback = req.user_feedback;
    res.status = false;
    if(m_userFeedback)
    {
        res.status = true;
    }
    return true;
}



/**
 * @brief Estimates time in seconds
 * @returns system time in seconds
 */
uint64_t WaitingModule::seconds()
{
    uint64_t seconds = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
    return seconds;
}


