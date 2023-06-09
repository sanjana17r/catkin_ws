// Generated by gencpp from file robot_msgs/LocationRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_LOCATIONREQUEST_H
#define ROBOT_MSGS_MESSAGE_LOCATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_msgs
{
template <class ContainerAllocator>
struct LocationRequest_
{
  typedef LocationRequest_<ContainerAllocator> Type;

  LocationRequest_()
    : location_id(0)  {
    }
  LocationRequest_(const ContainerAllocator& _alloc)
    : location_id(0)  {
  (void)_alloc;
    }



   typedef int8_t _location_id_type;
  _location_id_type location_id;





  typedef boost::shared_ptr< ::robot_msgs::LocationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::LocationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LocationRequest_

typedef ::robot_msgs::LocationRequest_<std::allocator<void> > LocationRequest;

typedef boost::shared_ptr< ::robot_msgs::LocationRequest > LocationRequestPtr;
typedef boost::shared_ptr< ::robot_msgs::LocationRequest const> LocationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::LocationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::LocationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::LocationRequest_<ContainerAllocator1> & lhs, const ::robot_msgs::LocationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.location_id == rhs.location_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::LocationRequest_<ContainerAllocator1> & lhs, const ::robot_msgs::LocationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::LocationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::LocationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::LocationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::LocationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::LocationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::LocationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::LocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b71811cd42322889d6185db846b765e5";
  }

  static const char* value(const ::robot_msgs::LocationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb71811cd42322889ULL;
  static const uint64_t static_value2 = 0xd6185db846b765e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::LocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/LocationRequest";
  }

  static const char* value(const ::robot_msgs::LocationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::LocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 location_id\n"
;
  }

  static const char* value(const ::robot_msgs::LocationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::LocationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.location_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::LocationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::LocationRequest_<ContainerAllocator>& v)
  {
    s << indent << "location_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.location_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_LOCATIONREQUEST_H
