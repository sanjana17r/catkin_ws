#ifndef ERROR_MODULE_H
#define ERROR_MODULE_H

#include <iostream>
#include <ros/ros.h>
#include <string>
#include <chrono>

#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>

#include "robot_msgs/ErrorAction.h"
#include "robot_msgs/ErrorActionFeedback.h"
#include "robot_msgs/ErrorActionResult.h"

#include <std_srvs/Empty.h>

using namespace std;
/**
 * @class ErrorModule
 */

class ErrorModule
{
public:
    /**
     * @brief  Constructor for the ErrorModule
     */

    ErrorModule(std::string name);
    /**
     * @brief  Destructor for the ErrorModule
     */
    ~ErrorModule();

    typedef actionlib::SimpleActionServer<robot_msgs::ErrorAction> errorServer;
    std::string action_name;

private:
    ros::NodeHandle nh;

    ros::ServiceServer userSrvc;
    errorServer m_error;

    /*Member functions*/

    void errorCallback(const robot_msgs::ErrorGoalConstPtr &goal);
    bool errorResetCallback(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res);

    /*Member variables*/

    bool m_userFeedback = false;
};
#endif
