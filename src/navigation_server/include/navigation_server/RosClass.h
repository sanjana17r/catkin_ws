#ifndef ROS_CLASS_H
#define ROS_CLASS_H

#include <ros/ros.h>
#include <ros/time.h>
#include <iostream>

#include <std_msgs/Bool.h>




class RosClass
{
public:
    /* Constructor for the Ros class */
    RosClass();

    /* Destructor for the Ros class */
    ~RosClass();

    // bool getPauseFeedback();
    // bool getErrorFeedback();
    // bool getEmergencyStopFeedback();
private:

    ros::NodeHandle nh;
    ros::NodeHandle nhp;

	// ros::ServiceServer pauseSrvc;
	// ros::Subscriber errorSub;
	// ros::Subscriber eStopSub;

    // /*Member functions*/
    // void initializeParameters();
	// void  errorCallback(const robot_msgs::KeyValues &msg);
	// void  eStopCallback(const std_msgs::Bool &msg);

	// bool pauseCallback(robot_msgs::PausingFeedback::Request &req, robot_msgs::PausingFeedback::Response &res);
    
    // /*Member variables*/
	// bool m_pauseFeedback = false;
	// bool m_errorFeedback = false;
	// bool m_eStopFeedback = false;

    // std::string m_criticalErrorTopic,m_eStopTopic,m_pauseMissionTopic;

};

#endif