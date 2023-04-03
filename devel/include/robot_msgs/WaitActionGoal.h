// Generated by gencpp from file robot_msgs/WaitActionGoal.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_WAITACTIONGOAL_H
#define ROBOT_MSGS_MESSAGE_WAITACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <robot_msgs/WaitGoal.h>

namespace robot_msgs
{
template <class ContainerAllocator>
struct WaitActionGoal_
{
  typedef WaitActionGoal_<ContainerAllocator> Type;

  WaitActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  WaitActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::robot_msgs::WaitGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::robot_msgs::WaitActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::WaitActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct WaitActionGoal_

typedef ::robot_msgs::WaitActionGoal_<std::allocator<void> > WaitActionGoal;

typedef boost::shared_ptr< ::robot_msgs::WaitActionGoal > WaitActionGoalPtr;
typedef boost::shared_ptr< ::robot_msgs::WaitActionGoal const> WaitActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::WaitActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::WaitActionGoal_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::WaitActionGoal_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55840851a74fd8ae93ff35a291776686";
  }

  static const char* value(const ::robot_msgs::WaitActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55840851a74fd8aeULL;
  static const uint64_t static_value2 = 0x93ff35a291776686ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/WaitActionGoal";
  }

  static const char* value(const ::robot_msgs::WaitActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"WaitGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: robot_msgs/WaitGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"int16 wait_time\n"
"bool wait_activate\n"
;
  }

  static const char* value(const ::robot_msgs::WaitActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaitActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::WaitActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::WaitActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::robot_msgs::WaitGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_WAITACTIONGOAL_H
