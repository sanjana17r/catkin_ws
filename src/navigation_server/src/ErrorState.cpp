#include "navigation_server/ErrorState.h"

/**
 * @brief  Constructor for the ErrorState
 */
ErrorState::ErrorState(my_context ctx) : my_base(ctx), errorClient("mission_error", true)
{
    ROS_INFO_NAMED("ErrorState", "ErrorState Constructor Called and waiting for mission_error action server to start ");
    errorClient.waitForServer();

    errorModule();
}

/*
 * @brief  Destructor for the ErrorState
 */

ErrorState::~ErrorState()
{
    ROS_INFO_NAMED("ErrorState", "ErrorState Destructor Called  ");
}

/**
 * @brief  Executes the wait functionality (time/user input )
 * @returns true if goal is acheived else false
 */
void ErrorState::errorModule()
{

    robot_msgs::ErrorGoal errorGoal;
    errorGoal.error_activate = true;
    errorClient.sendGoal(errorGoal);
    ROS_INFO_NAMED("ErrorState", " ErrorState goal send , Waiting for result");
    
    bool errorErrorStateCompletion = false;
    context<NavigationServerMachine>().setErrorStateCompletion(errorErrorStateCompletion);
    bool errorErrorMissionStatus = true;
    context<NavigationServerMachine>().setErrorMissionStatus(errorErrorMissionStatus);

    errorClient.waitForResult();

    if (errorClient.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    {
        errorErrorStateCompletion = true;
        context<NavigationServerMachine>().setErrorStateCompletion(errorErrorStateCompletion);
        ROS_INFO_NAMED("ErrorState", "Hooray, ErrorState Succeeded");
        // return true;
    }
    else
    {
        ROS_FATAL_NAMED("ErrorState", "ErrorState  failed");
        // return false;
    }
}




/**
 * @brief  State transition for event of MovePose from Error State
 */
sc::result ErrorState::react(const MoveEvent &lm)
{
    ROS_FATAL_NAMED("ErrorState", "ErrorState->MoveEvent");
    context<NavigationServerMachine>().moveInfo(lm);
    return transit<ErrorState>();
}





/**
 * @brief  State transition for event of Error from Error State
 */
sc::result ErrorState::react(const ErrorEvent &lm)
{
    ROS_FATAL_NAMED("ErrorState", "ErrorState->ErrorEvent");
    context<NavigationServerMachine>().errorInfo(lm);
    return transit<ErrorState>();
}

/**
 * @brief  State transition for event of Error from Error State
 */
sc::result ErrorState::react(const IdleEvent &lm)
{
    ROS_WARN_NAMED("ErrorState", "ErrorState->IdleEvent");
    context<NavigationServerMachine>().idleInfo(lm);
    return transit<IdleState>();
}
