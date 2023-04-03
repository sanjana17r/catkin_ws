#include "error_module.h"
#include <ros/console.h>

/**
* @brief  Constructor for the ErrorModule
*/
ErrorModule::ErrorModule(std::string name) : m_error(nh, name, boost::bind(&ErrorModule::errorCallback, this, _1), false), action_name(name)
{    
    /*Service*/
    userSrvc = nh.advertiseService("/mission_error_reset", &ErrorModule::errorResetCallback, this);
    m_error.start();
    ROS_INFO_NAMED("ErrorModule","ErrorModule Constructor called");
}

/**
* @brief  Destructor for the ErrorModule
*/

ErrorModule::~ErrorModule()
{
    ROS_INFO_NAMED("ErrorModule","ErrorModule Destructor called");
}

/**
 * @brief  Action server call back 
 */
void ErrorModule::errorCallback(const robot_msgs::ErrorGoalConstPtr &goal)
{

    robot_msgs::ErrorFeedback feedback;
    robot_msgs::ErrorResult result;
    feedback.error_feedback = false;
    result.is_success = false;
    bool success = true;

    ros::Rate r(1.0);
    
    bool entryCondition = true;
    m_userFeedback      = false;

    while (entryCondition && ros::ok())
    {

        
        if (m_error.isPreemptRequested() || !ros::ok())
        {
            success = false;
            feedback.error_feedback = false;
            m_error.publishFeedback(feedback);
            m_error.setPreempted();
            break;
        }


	/*TO DO: If it's in charging mode then direct reset to IDLE shouldnt be permitted as it can lead to MOVE,DOCK or ANY other state from IDLE*/

        if(m_userFeedback)
        {
            entryCondition = false;
            ROS_WARN_NAMED("ErrorModule","ErrorModule reset after User Feedback");
        }

        feedback.error_feedback = true;
        m_error.publishFeedback(feedback);
        r.sleep();
    }

    if (success)
    {
        result.is_success = true;
        feedback.error_feedback = true;
        ROS_INFO_NAMED("ErrorModule","ErrorModule %s: Succeeded", action_name.c_str());
        m_error.setSucceeded(result);
    }
    else
    {
        result.is_success = false;
        feedback.error_feedback = false;
        ROS_ERROR_NAMED("ErrorModule","ErrorModule %s: Aborted", action_name.c_str());
        m_error.setAborted(result);        
    }
}


/**
 * @brief  Service call back for user feedback
 */
bool ErrorModule::errorResetCallback(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res)
{
    m_userFeedback = true;
    return true;
}





