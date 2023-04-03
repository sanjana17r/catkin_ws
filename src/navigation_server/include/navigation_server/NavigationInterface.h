/*
 * NavigationInterface.h
 *
 *  Created on: 20-Sep-2021
 *      Author: ra-1
 */
#ifndef NAVIGATION_INTERFACE_H
#define NAVIGATION_INTERFACE_H

#include <ros/ros.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>

#include <std_msgs/Float64.h>
#include <sensor_msgs/BatteryState.h>

#include <dynamic_reconfigure/server.h>


#include "IdleState.h"
#include "MoveState.h"




#include "robot_msgs/MissionAction.h"


// #include "robot_msgs/ChargingOverride.h"

#define DEFAULT_FOOTPRINT 1

#define IGNORE_FRONT 1
#define IGNORE_NONE 0

// constexpr int UNDOCK = 2;
constexpr int SUCCESS = 3;

using namespace std;

struct ComparePriority
{
	bool operator()(robot_msgs::Feedback const &p1, robot_msgs::Feedback const &p2)
	{
		return p1.priority_level > p2.priority_level;
	}
};

/*State Machine*/
class NavigationInterface // state_machine takes arg: its name,first state
{
public:
	NavigationInterface(std::string name);

	~NavigationInterface();

	typedef actionlib::SimpleActionServer<robot_msgs::MissionAction> missionServer;

	std::string action_name;

private:
	ros::NodeHandle nh;
	ros::NodeHandle nhp;


	missionServer m_missionServer; // Action server to manage docking.


	/*Member functions*/

	void missionCallback(const robot_msgs::MissionGoalConstPtr &goal);
	void feedbackUpdate();





	void initializeParameters();
	void resetParameters();
	void missionExecution();

	uint64_t seconds();

	/*Member variables*/


	robot_msgs::MissionFeedback m_missionFeedback;
	robot_msgs::MissionResult m_missionResult;

	geometry_msgs::Pose m_robotPose;

	bool m_entryCondition = false;
	bool m_missionActive = false;
	bool m_resetParameters = false;
	bool m_emergencyFeedback = false;
	bool m_missionCancel;
	bool m_activeCycle = false;



	int m_numberOfLoops = 1;
	int m_missionStatus;
	int m_completionPercentage = 0;

	uint64_t m_currentTime, m_lastTime, m_deltaTime;


	std::string m_currentFeedback;
	std::string m_currentIndex, m_missionId;
	std::string m_robotPoseTopic,m_missionFeedbackTopic;

	std::string m_navigationIndex;
	std::vector<robot_msgs::Task> m_missionList;
	std::vector<robot_msgs::Task> m_taskList;

	std::thread t_missionExecution;


	std::priority_queue<robot_msgs::Feedback, std::vector<robot_msgs::Feedback>, ComparePriority> m_feedbackQueue;

	NavigationServerMachine *nsMachine;
	NavigationServerMachine *chargeMachine;


	std::thread t_feedback;

	// RosClass *p_rosClass;
};

#endif
