/*
 * Errror.h
 *
 *  Created on: 31-Jul-2022
 *  Author: Raj Mohan
 */
#ifndef ERROR_STATE_H
#define ERROR_STATE_H


#include "NavigationServerMachine.h"

#include "IdleState.h"

#include "MoveState.h"


#include "robot_msgs/ErrorAction.h"
#include "robot_msgs/ErrorActionFeedback.h"

struct ErrorState : sc::state<ErrorState, NavigationServerMachine>
{
public:
	ErrorState(my_context ctx);
	~ErrorState();

	typedef mpl::list<
		sc::custom_reaction<MoveEvent>,
		sc::custom_reaction<ErrorEvent>,
		sc::custom_reaction<IdleEvent>>
		reactions;

	sc::result react(const MoveEvent &lm);
	sc::result react(const ErrorEvent &lm);
	sc::result react(const IdleEvent &lm);

  typedef actionlib::SimpleActionClient<robot_msgs::ErrorAction> ErrorClient;
  ErrorClient errorClient;

private:

	ros::NodeHandle nh;

	/*Member functions*/

	void errorModule();




	/*Member variables*/


};

#endif
