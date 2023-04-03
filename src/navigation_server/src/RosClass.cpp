#include <ros/console.h>
#include "navigation_server/RosClass.h"

/**
* @brief  Constructor for the RosClass
*/
RosClass::RosClass()
{
    // initializeParameters();
    // /*Subscribers*/
    // errorSub = nh.subscribe(m_criticalErrorTopic.c_str(), 1, &RosClass::errorCallback, this);
    // eStopSub = nh.subscribe(m_eStopTopic.c_str(), 1, &RosClass::eStopCallback, this);

    // /*Services*/
    // pauseSrvc = nh.advertiseService(m_pauseMissionTopic.c_str(), &RosClass::pauseCallback, this);
}

/**
* @brief  Destructor for the RosClass
*/

RosClass::~RosClass()
{
}

// /*
// * @brief  Initializing parameters from the parameter server
// */

// void RosClass::initializeParameters()
// {
//     nhp.param<std::string>("critical_error_topic",m_criticalErrorTopic,"/critical_error");
//     nhp.param<std::string>("e_stop_topic",m_eStopTopic,"ignore_safety");
//     nhp.param<std::string>("pause_mission_topic",m_pauseMissionTopic,"pause_mission");

// }



// /**
// * @brief  Pause/Resume service callback for resuming the currently executing action
// */
// bool RosClass::pauseCallback(robot_msgs::PausingFeedback::Request &req, robot_msgs::PausingFeedback::Response &res)
// {
//     m_pauseFeedback = req.pause_feedback;
//     //ROS_WARN("RosClass::pauseCallback   : %d",m_pauseFeedback);
//     res.status = true;
// }



// /**
// * @brief  Call back for aquiring the error feedback from the diagnostics module
// */
// void RosClass::errorCallback(const robot_msgs::KeyValues &msg)
// {
//     bool errorFeedback = (msg.keyvalue.size() > 0);
//     m_errorFeedback    = errorFeedback;
// }



// /**
// * @brief  Call back for aquiring the error feedback from the e-stop button/webapp etc
// */
// void RosClass::eStopCallback(const std_msgs::Bool &msg)
// {
//     m_eStopFeedback = msg.data;
// }


// /**
// * @brief  Getter function for error feedback
// */
// bool RosClass::getErrorFeedback()
// {
//     return m_errorFeedback;
// }

// /**
// * @brief  Getter function for pause mission feedback
// */
// bool RosClass::getPauseFeedback()
// {
//     return m_pauseFeedback;
// }


// /**
// * @brief  Getter function for emergency stop feedback
// */
// bool RosClass::getEmergencyStopFeedback()
// {
//     return m_eStopFeedback;
// }
