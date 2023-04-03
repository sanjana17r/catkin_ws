#include "mission_control.h"

/**
* @brief  Constructor for the MissionControl
*/
MissionControl::MissionControl()
{

    p_waitingModule     = new WaitingModule("waiting");

    p_errorModule       = new ErrorModule("mission_error");


    ROS_INFO_NAMED("MissionControl","MissionControl Constructor called");
}

/**
* @brief  Destructor for the MissionControl
*/

MissionControl::~MissionControl()
{
}



/**
* @brief Main function
*/
int main(int argc, char **argv)
{

    ros::init(argc, argv, "mission_control");
    MissionControl missionControl;

    ros::Rate rate(10);

    while (ros::ok())
    {

        rate.sleep();
        ros::spinOnce();
    }
    ros::shutdown();
    return 0;
}
