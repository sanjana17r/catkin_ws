// Generated by gencpp from file robot_msgs/UserFeedback.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_USERFEEDBACK_H
#define ROBOT_MSGS_MESSAGE_USERFEEDBACK_H

#include <ros/service_traits.h>


#include <robot_msgs/UserFeedbackRequest.h>
#include <robot_msgs/UserFeedbackResponse.h>


namespace robot_msgs
{

struct UserFeedback
{

typedef UserFeedbackRequest Request;
typedef UserFeedbackResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UserFeedback
} // namespace robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_msgs::UserFeedback > {
  static const char* value()
  {
    return "0463a42b390cfbf0c6dd3fa4dc48abcf";
  }

  static const char* value(const ::robot_msgs::UserFeedback&) { return value(); }
};

template<>
struct DataType< ::robot_msgs::UserFeedback > {
  static const char* value()
  {
    return "robot_msgs/UserFeedback";
  }

  static const char* value(const ::robot_msgs::UserFeedback&) { return value(); }
};


// service_traits::MD5Sum< ::robot_msgs::UserFeedbackRequest> should match
// service_traits::MD5Sum< ::robot_msgs::UserFeedback >
template<>
struct MD5Sum< ::robot_msgs::UserFeedbackRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_msgs::UserFeedback >::value();
  }
  static const char* value(const ::robot_msgs::UserFeedbackRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_msgs::UserFeedbackRequest> should match
// service_traits::DataType< ::robot_msgs::UserFeedback >
template<>
struct DataType< ::robot_msgs::UserFeedbackRequest>
{
  static const char* value()
  {
    return DataType< ::robot_msgs::UserFeedback >::value();
  }
  static const char* value(const ::robot_msgs::UserFeedbackRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_msgs::UserFeedbackResponse> should match
// service_traits::MD5Sum< ::robot_msgs::UserFeedback >
template<>
struct MD5Sum< ::robot_msgs::UserFeedbackResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_msgs::UserFeedback >::value();
  }
  static const char* value(const ::robot_msgs::UserFeedbackResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_msgs::UserFeedbackResponse> should match
// service_traits::DataType< ::robot_msgs::UserFeedback >
template<>
struct DataType< ::robot_msgs::UserFeedbackResponse>
{
  static const char* value()
  {
    return DataType< ::robot_msgs::UserFeedback >::value();
  }
  static const char* value(const ::robot_msgs::UserFeedbackResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_USERFEEDBACK_H
