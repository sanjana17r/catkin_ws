#include "navigation_server/NavigationServerMachine.h"

/**
* @brief  Constructor NavigationServerMachine
*/
NavigationServerMachine::NavigationServerMachine()
{
    ROS_INFO("NavigationServerMachine constructer called");
}


/**
* @brief  
*/
void NavigationServerMachine::idleInfo(const IdleEvent &lm)
{
    m_missionInfoNSM = lm.m_missionInfo;
}




/**
* @brief  Setter function for goal location
*/
void NavigationServerMachine::moveInfo(const MoveEvent &lm)
{
    m_missionInfoNSM = lm.m_missionInfo;
}



/**
* @brief  Setter function for error info
*/
void NavigationServerMachine::errorInfo(const ErrorEvent &lm)
{
    m_missionInfoNSM = lm.m_missionInfo;
}

/**
* @brief  Setter function for mission cancel status 
*/
void NavigationServerMachine::setCancelMissionStatus(const bool &status)
{
    m_cancelMissionStatus = status;
}

void NavigationServerMachine::setErrorMissionStatus(const bool &status)
{
    m_errorStateStatus = status;
}

void NavigationServerMachine::setErrorStateCompletion(const bool &status)
{
    m_errorStateCompletion = status;
}

void NavigationServerMachine::setMissionFeedback(const robot_msgs::Feedback &feedback)
{
    m_missionFeedback = feedback;
}





robot_msgs::Feedback NavigationServerMachine::getMissionFeedback()
{
    return m_missionFeedback;
}


/**
* @brief  Getter function for mission information
*/
robot_msgs::Task NavigationServerMachine::getMissionInfo()
{
    return m_missionInfoNSM;
}



/**
* @brief  Getter function for mission cancel status
*/
bool NavigationServerMachine::getCancelMissionStatus()
{
    return m_cancelMissionStatus;
}


/**
* @brief  Getter function for mission error status
*/
bool NavigationServerMachine::getErrorMissionStatus()
{
    return m_errorStateStatus;
}





bool NavigationServerMachine::getErrorStateCompletion()
{
    return m_errorStateCompletion;
}