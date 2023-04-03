#include "navigation_server/MoveState.h"

/**
* @brief  Constructor for the MoveState
*/
MoveState::MoveState(my_context ctx) : my_base(ctx), mbClient("move_base", true),nhp("~")
{

    p_rosClass = new RosClass();

    nhp.param<std::string>("global_frame",m_globalFrame,"map");

    ROS_INFO_NAMED("MoveState","MoveState Constructor called and waiting for move_base action server to start");

    ros::Duration timeout=ros::Duration(10.0);   /*If you need an infinite wait for server behaviour,replace 10.0 by 0.0*/
    m_actionServerAvailability = mbClient.waitForServer(timeout);

    robot_msgs::Task missionInfo = context<NavigationServerMachine>().getMissionInfo();
    m_targetPose= missionInfo.coordinate;
    clearSrvc   = nh.serviceClient<std_srvs::Empty>("/move_base/clear_costmaps");

    
    
    if(m_actionServerAvailability)
    {
        t1          = std::thread(&MoveState::controlFlow, this);
        moveToTarget(m_targetPose); 
    }
    else
    {
        bool cancelMission = true;
        context<NavigationServerMachine>().setCancelMissionStatus(cancelMission);
    }

}

/**
* @brief  Destructor for the Navigation
*/

MoveState::~MoveState()
{
   
    delete p_rosClass;
    if(m_actionServerAvailability)
    {
        t1.join();
    }
    ROS_INFO_NAMED("MoveState","MoveState Destructor called");
}

/**
* @brief  Monitors the pause/error feedback and executes the control flow for Navigation state
*/
void MoveState::controlFlow()
{
    ros::Rate r(1);
    bool cancelMission = false;
    bool executeCondition = ((mbClient.getState() != actionlib::SimpleClientGoalState::SUCCEEDED)&& (mbClient.getState() != actionlib::SimpleClientGoalState::ABORTED) && !cancelMission && m_actionServerAvailability);

    while (executeCondition && ros::ok())
    {
        executeCondition = ((mbClient.getState() != actionlib::SimpleClientGoalState::SUCCEEDED)&& (mbClient.getState() != actionlib::SimpleClientGoalState::PREEMPTED) && !cancelMission);

        m_missionCancelStatus = context<NavigationServerMachine>().getCancelMissionStatus();

        cancelMission = m_missionCancelStatus; /*TODO: If on e-stop cancel mission is not required comment it out*/
        // bool stopExecution = m_missionCancelStatus;
        // ROS_INFO_STREAM("Current state   : "<< m_missionCancelStatus);

        if (m_missionCancelStatus && m_runningNavigation)
        {
            ROS_INFO("MoveState","Cancelling all MoveState goals  %d ",mbClient.getState());
            mbClient.cancelAllGoals();
            m_runningNavigation = false;
        }

        r.sleep();
    }
    ROS_ERROR_NAMED("MoveState","MoveState::Exiting the control flow");
}

/**
* @brief  Executes robot motion to the given goal location
* @param the goal location coordinates in geometry_msgs::Pose
*/
void MoveState::moveToTarget(const geometry_msgs::Pose &pose)
{
    m_runningNavigation = true;
    move_base_msgs::MoveBaseGoal mbGoal;
    mbGoal.target_pose.header.frame_id = m_globalFrame;
    mbGoal.target_pose.header.stamp = ros::Time::now();
    mbGoal.target_pose.pose.position.x = pose.position.x;
    mbGoal.target_pose.pose.position.y = pose.position.y;
    mbGoal.target_pose.pose.orientation.z = pose.orientation.z;
    mbGoal.target_pose.pose.orientation.w = pose.orientation.w;



    mbClient.sendGoal(mbGoal);
    ROS_INFO_NAMED("MoveState","Goal sent to location : %f  %f  %f  %f",mbGoal.target_pose.pose.position.x, mbGoal.target_pose.pose.position.y, mbGoal.target_pose.pose.orientation.z, mbGoal.target_pose.pose.orientation.w);
    mbClient.waitForResult();

    if (mbClient.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    {
        ROS_INFO_NAMED("MoveState","MoveState goal succeeded");
    }
    else if (mbClient.getState() == actionlib::SimpleClientGoalState::PREEMPTED)
    {
        ROS_ERROR_NAMED("MoveState","MoveState goal preempted");
        bool cancelMission = true;
        context<NavigationServerMachine>().setCancelMissionStatus(cancelMission);


        // holdingCurrentState();
    }
    else if (mbClient.getState() == actionlib::SimpleClientGoalState::ABORTED)
    {
        ROS_ERROR_NAMED("MoveState","MoveState goal aborted");
        bool cancelMission = true;
        context<NavigationServerMachine>().setCancelMissionStatus(cancelMission);
    }
    else
    {
        ROS_ERROR_NAMED("MoveState","MoveState goal active");
    }
}

/**
* @brief  Holds the current state till the pause/error is not cleared
*/
// void MoveState::holdingCurrentState()
// {
//     bool entryCondition = ((mbClient.getState() == actionlib::SimpleClientGoalState::PREEMPTED) && (m_errorFeedback || m_pauseFeedback || m_eStopFeedback));
//     ros::Rate r(1);
//     bool missionCancelStatus = context<NavigationServerMachine>().getCancelMissionStatus();
//     while (entryCondition && !missionCancelStatus)
//     {
//         missionCancelStatus = context<NavigationServerMachine>().getCancelMissionStatus();
//         if (!m_pauseFeedback && !m_errorFeedback && !m_eStopFeedback) //(m_retries < 2)
//         {
//             entryCondition = false;
//             moveToTarget(m_targetPose);
//         }
//         r.sleep();
//     }
// }


/*Event Handlers*/

/**
* @brief  State transition for event of MovePose from Navigation State
*/
sc::result MoveState::react(const MoveEvent &lm)
{
    bool missionCancelStatus = context<NavigationServerMachine>().getCancelMissionStatus();
    if (!missionCancelStatus)
    {
        context<NavigationServerMachine>().moveInfo(lm);
        return transit<MoveState>();
    }
    else
    {
        ROS_ERROR_NAMED("MoveState","Mission cancelled from MoveState->MoveEvent");
    }
}

/**
 * @brief  State transition for event of Error from Navigation State
 */
sc::result MoveState::react(const ErrorEvent &lm)
{
    ROS_INFO_NAMED("MoveState", "MoveState->ErrorEvent");

    context<NavigationServerMachine>().errorInfo(lm);
    return transit<ErrorState>();
}
