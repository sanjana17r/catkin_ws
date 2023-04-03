/*
 * Navigation.h
 *
 *  Created on: 20-Sep-2021
 *  Author: Raj Mohan
 */
#ifndef NAVIGATION_MACHINE_H
#define NAVIGATION_MACHINE_H


#include <ros/ros.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <thread>  

#include "robot_msgs/Task.h"
#include "robot_msgs/Feedback.h"

#include <geometry_msgs/Pose.h>
#include <std_msgs/Bool.h>

#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>

#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/state.hpp>
#include <boost/statechart/event.hpp>
#include <boost/statechart/transition.hpp>
#include <boost/statechart/custom_reaction.hpp>
#include <boost/mpl/list.hpp>

#include "RosClass.h"



using namespace std;

namespace sc = boost::statechart;
namespace mpl = boost::mpl;




/*States*/

struct ErrorState;
struct IdleState;
struct MoveState;







/*Events*/

struct IdleEvent : sc::event<IdleEvent>
{
    IdleEvent(const robot_msgs::Task &missionInfo) 
    {
        m_missionInfo = missionInfo;
    }
    robot_msgs::Task m_missionInfo;
};




struct MoveEvent : sc::event<MoveEvent>
{
    MoveEvent(const robot_msgs::Task &missionInfo) 
    {
        m_missionInfo = missionInfo;
    }
    robot_msgs::Task m_missionInfo;
};



struct ErrorEvent : sc::event<ErrorEvent>
{
    ErrorEvent(const robot_msgs::Task &missionInfo)
    {
        m_missionInfo = missionInfo;
    }
    robot_msgs::Task m_missionInfo;
};

/*State Machine*/
struct NavigationServerMachine : sc::state_machine<NavigationServerMachine,IdleState> //state_machine takes arg: its name,first state
{
public:
    NavigationServerMachine();
    
    void idleInfo(const IdleEvent &lm);
    void moveInfo(const MoveEvent &lm);
    void errorInfo(const ErrorEvent &lm);


    void setCancelMissionStatus(const bool &status);
    void setErrorMissionStatus(const bool &status);
    void setErrorStateCompletion(const bool &status);
    void setMissionFeedback(const robot_msgs::Feedback &feedback);
    // void setPauseMissionStatus(const bool &status);


    bool getCancelMissionStatus();
    bool getErrorStateCompletion();
    bool getErrorMissionStatus();
    // bool getPauseMissionStatus();
    robot_msgs::Feedback getMissionFeedback();
    robot_msgs::Task getMissionInfo();




private:
	ros::NodeHandle nh;

    /*Member variables*/
    bool m_cancelMissionStatus = false;
    bool m_pauseMissionStatus  = false;
    bool m_errorStateStatus = false;   
    bool m_errorStateCompletion = false;
    // geometry_msgs::Pose m_targetPoseNSM;
    robot_msgs::Task m_missionInfoNSM;
    robot_msgs::Feedback m_missionFeedback;

};





#endif
