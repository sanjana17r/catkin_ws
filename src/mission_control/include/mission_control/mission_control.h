#ifndef MISSION_CONTROL_H
#define MISSION_CONTROL_H


#include "waiting_module.h"


#include "error_module.h"


class MissionControl
{
public:


    MissionControl();

    ~MissionControl();



private:
    ros::NodeHandle nh;



    WaitingModule* p_waitingModule;

    ErrorModule* p_errorModule;


};
#endif
