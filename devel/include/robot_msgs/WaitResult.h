// Generated by gencpp from file robot_msgs/WaitResult.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_WAITRESULT_H
#define ROBOT_MSGS_MESSAGE_WAITRESULT_H


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
struct WaitResult_
{
  typedef WaitResult_<ContainerAllocator> Type;

  WaitResult_()
    : is_success(false)  {
    }
  WaitResult_(const ContainerAllocator& _alloc)
    : is_success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_success_type;
  _is_success_type is_success;





  typedef boost::shared_ptr< ::robot_msgs::WaitResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::WaitResult_<ContainerAllocator> const> ConstPtr;

}; // struct WaitResult_

typedef ::robot_msgs::WaitResult_<std::allocator<void> > WaitResult;

typedef boost::shared_ptr< ::robot_msgs::WaitResult > WaitResultPtr;
typedef boost::shared_ptr< ::robot_msgs::WaitResult const> WaitResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::WaitResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::WaitResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::WaitResult_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitResult_<ContainerAllocator2> & rhs)
{
  return lhs.is_success == rhs.is_success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::WaitResult_<ContainerAllocator1> & lhs, const ::robot_msgs::WaitResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::WaitResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::WaitResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::WaitResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::WaitResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa3e942e5cfe76a6a46f20a0780b2cf3";
  }

  static const char* value(const ::robot_msgs::WaitResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa3e942e5cfe76a6ULL;
  static const uint64_t static_value2 = 0xa46f20a0780b2cf3ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::WaitResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/WaitResult";
  }

  static const char* value(const ::robot_msgs::WaitResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::WaitResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"bool is_success\n"
"\n"
;
  }

  static const char* value(const ::robot_msgs::WaitResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::WaitResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaitResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::WaitResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::WaitResult_<ContainerAllocator>& v)
  {
    s << indent << "is_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_WAITRESULT_H