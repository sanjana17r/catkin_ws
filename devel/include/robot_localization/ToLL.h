// Generated by gencpp from file robot_localization/ToLL.msg
// DO NOT EDIT!


#ifndef ROBOT_LOCALIZATION_MESSAGE_TOLL_H
#define ROBOT_LOCALIZATION_MESSAGE_TOLL_H

#include <ros/service_traits.h>


#include <robot_localization/ToLLRequest.h>
#include <robot_localization/ToLLResponse.h>


namespace robot_localization
{

struct ToLL
{

typedef ToLLRequest Request;
typedef ToLLResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ToLL
} // namespace robot_localization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_localization::ToLL > {
  static const char* value()
  {
    return "ad0cbea3b8423e9ccf1b2ebeefc50b92";
  }

  static const char* value(const ::robot_localization::ToLL&) { return value(); }
};

template<>
struct DataType< ::robot_localization::ToLL > {
  static const char* value()
  {
    return "robot_localization/ToLL";
  }

  static const char* value(const ::robot_localization::ToLL&) { return value(); }
};


// service_traits::MD5Sum< ::robot_localization::ToLLRequest> should match
// service_traits::MD5Sum< ::robot_localization::ToLL >
template<>
struct MD5Sum< ::robot_localization::ToLLRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_localization::ToLL >::value();
  }
  static const char* value(const ::robot_localization::ToLLRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_localization::ToLLRequest> should match
// service_traits::DataType< ::robot_localization::ToLL >
template<>
struct DataType< ::robot_localization::ToLLRequest>
{
  static const char* value()
  {
    return DataType< ::robot_localization::ToLL >::value();
  }
  static const char* value(const ::robot_localization::ToLLRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_localization::ToLLResponse> should match
// service_traits::MD5Sum< ::robot_localization::ToLL >
template<>
struct MD5Sum< ::robot_localization::ToLLResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_localization::ToLL >::value();
  }
  static const char* value(const ::robot_localization::ToLLResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_localization::ToLLResponse> should match
// service_traits::DataType< ::robot_localization::ToLL >
template<>
struct DataType< ::robot_localization::ToLLResponse>
{
  static const char* value()
  {
    return DataType< ::robot_localization::ToLL >::value();
  }
  static const char* value(const ::robot_localization::ToLLResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_LOCALIZATION_MESSAGE_TOLL_H