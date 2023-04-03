#include "navigation_server/IdleState.h"

/**
* @brief  Constructor for the IdleState
*/
IdleState::IdleState(my_context ctx) : my_base(ctx)
{
    ROS_INFO_NAMED("IdleState","IdleState Constructor Called  ");
}


/*
* @brief  Destructor for the IdleState
*/

IdleState::~IdleState()
{
}


/**
* @brief  State transition for event of MovePose from Idle State
*/
sc::result IdleState::react(const MoveEvent &lm)
{
    ROS_INFO_NAMED("IdleState","IdleState->MoveEvent");
    context<NavigationServerMachine>().moveInfo(lm);
    return transit<MoveState>();
}
