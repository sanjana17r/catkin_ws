// Generated by gencpp from file robot_msgs/WaitFeedback.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_WAITFEEDBACK_H
#define ROBOT_MSGS_MESSAGE_WAITFEEDBACK_H


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
struct WaitFeedback_
{
  typedef WaitFeedback_<ContainerAllocator> Type;

  WaitFeedback_()
    : wait_feedback(false)
    , time_elapsed(0)  {
    }
  WaitFeedback_(const ContainerAllocator& _alloc)
    : wait_feedback(false)
    , time_elapsed(0)  {
  (void)_alloc;
    }



   typedef uint8_t _wait_feedback_type;
  _wait_feedback_type wait_feedback;

   typedef int32_t _time_elapsed_type;
  _time_elapsed_type time_elapsed;





  typedef boost::shared_ptr< ::robot_msgs::WaitFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::WaitFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct WaitFeedback_

typedef ::robot_msgs::WaitFeedback_<std::allocator<void> > WaitFeedback;

typedef boost::shared_ptr< ::robot_msgs::WaitFeedback > WaitFeedbackPtr;
typedef boost::shared_ptr< ::robot_msgs::WaitFeedback const> WaitFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::WaitFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::WaitFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::WaitFeedback_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.wait_feedback == rhs.wait_feedback &&
    lhs.time_elapsed == rhs.time_elapsed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::WaitFeedback_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55ed0794bf6f75e25b8ccd5c919efb1e";
  }

  static const char* value(const ::robot_msgs::WaitFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55ed0794bf6f75e2ULL;
  static const uint64_t static_value2 = 0x5b8ccd5c919efb1eULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/WaitFeedback";
  }

  static const char* value(const ::robot_msgs::WaitFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"bool wait_feedback\n"
"int32 time_elapsed\n"
"\n"
;
  }

  static const char* value(const ::robot_msgs::WaitFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wait_feedback);
      stream.next(m.time_elapsed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaitFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::WaitFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::WaitFeedback_<ContainerAllocator>& v)
  {
    s << indent << "wait_feedback: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wait_feedback);
    s << indent << "time_elapsed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.time_elapsed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_WAITFEEDBACK_H
