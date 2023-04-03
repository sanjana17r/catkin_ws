/*
 * Navigation.h
 *
 *  Created on: 20-Sep-2021
 *      Author: ra-1
 */
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <std_srvs/Empty.h>
#include <geometry_msgs/Pose.h>
#include <move_base_msgs/MoveBaseAction.h>

#include "NavigationServerMachine.h"

#include "ErrorState.h"



struct MoveState : sc::state<MoveState, NavigationServerMachine>
{
public:
	MoveState(my_context ctx);
	~MoveState();

	typedef mpl::list<
		sc::custom_reaction<MoveEvent>,
		sc::custom_reaction<ErrorEvent>
		>
		reactions;



	sc::result react(const MoveEvent &lm);
	sc::result react(const ErrorEvent &lm);


  typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;
  MoveBaseClient mbClient;

private:

	ros::NodeHandle nh;
	ros::NodeHandle nhp;

	ros::ServiceClient clearSrvc;


	/*Member functions*/
	void  moveToTarget(const geometry_msgs::Pose &pose);
	void holdingCurrentState();
	void controlFlow();

	std::string m_globalFrame;

	std::thread t1;

	geometry_msgs::Pose m_targetPose;

	bool m_runningNavigation   = false;
	bool m_missionCancelStatus = false;
	bool m_actionServerAvailability = false;
	
	int m_retries =0;

	RosClass *p_rosClass;
};

#endif
