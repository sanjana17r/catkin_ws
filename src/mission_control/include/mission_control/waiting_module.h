#ifndef WAITING_MODULE_H
#define WAITING_MODULE_H

#include <iostream>
#include <ros/ros.h>
#include <string>
#include <chrono>

#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>

#include "robot_msgs/WaitAction.h"
#include "robot_msgs/WaitActionFeedback.h"
#include "robot_msgs/WaitActionResult.h"

#include "robot_msgs/UserFeedback.h"
using namespace std;
/**
   * @class WaitingModule
   */

class WaitingModule
{
public:
    /**
     * @brief  Constructor for the WaitingModule
     */

    WaitingModule(std::string name);
    /**
        * @brief  Destructor for the WaitingModule
        */
    ~WaitingModule();

    typedef actionlib::SimpleActionServer<robot_msgs::WaitAction> waitServer;
    std::string action_name;


private:
    ros::NodeHandle nh;

	ros::ServiceServer userSrvc;
    waitServer m_wait;  
    // ros::Subscriber robotPose;
    // ros::Publisher initialPosePub;
    // ros::ServiceClient clearSrvc;
    /*Member functions*/

    void waitCallback(const robot_msgs::WaitGoalConstPtr &goal);
	bool userFeedbackCallback(robot_msgs::UserFeedback::Request &req, robot_msgs::UserFeedback::Response &res);
    uint64_t seconds();
    // void robotPoseCallback(const geometry_msgs::Pose &robot_msg);


    /*Member variables*/

    bool m_userFeedback = false;

    uint64_t m_currentTime,m_lastTime;
    // geometry_msgs::Pose m_robotPose;

    // std::string filePath = ros::package::getPath("auto_localization");
    // std::mutex m_mutex;

    // double m_currentPose[4] = {1.0, 0.0, 0.0, 1.0};
    // double m_lastRobotPose[4] = {1.0, 1.0, 0.0, 1.0};
    
};
#endif
