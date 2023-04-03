/*
 * Idle.h
 *
 *  Created on: 20-Sep-2021
 *      Author: Raj Mohan
 */
#ifndef IDLE_STATE_H
#define IDLE_STATE_H


#include "NavigationServerMachine.h"

#include "MoveState.h"


struct IdleState : sc::state<IdleState, NavigationServerMachine>
{
public:
	IdleState(my_context ctx);
	~IdleState();

	typedef mpl::list<
		sc::custom_reaction<MoveEvent>>
		reactions;


	sc::result react(const MoveEvent &lm);


private:

	ros::NodeHandle nh;

	/*Member functions*/





	/*Member variables*/


};

#endif
