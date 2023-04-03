// Generated by gencpp from file robot_msgs/MissionResult.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_MISSIONRESULT_H
#define ROBOT_MSGS_MESSAGE_MISSIONRESULT_H


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
struct MissionResult_
{
  typedef MissionResult_<ContainerAllocator> Type;

  MissionResult_()
    : is_success(false)
    , mission_id()  {
    }
  MissionResult_(const ContainerAllocator& _alloc)
    : is_success(false)
    , mission_id(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _is_success_type;
  _is_success_type is_success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _mission_id_type;
  _mission_id_type mission_id;





  typedef boost::shared_ptr< ::robot_msgs::MissionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::MissionResult_<ContainerAllocator> const> ConstPtr;

}; // struct MissionResult_

typedef ::robot_msgs::MissionResult_<std::allocator<void> > MissionResult;

typedef boost::shared_ptr< ::robot_msgs::MissionResult > MissionResultPtr;
typedef boost::shared_ptr< ::robot_msgs::MissionResult const> MissionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::MissionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::MissionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::MissionResult_<ContainerAllocator1> & lhs, const ::robot_msgs::MissionResult_<ContainerAllocator2> & rhs)
{
  return lhs.is_success == rhs.is_success &&
    lhs.mission_id == rhs.mission_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::MissionResult_<ContainerAllocator1> & lhs, const ::robot_msgs::MissionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MissionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MissionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MissionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MissionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MissionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MissionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::MissionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0de47fd5dc41691eaba9c72cee94140e";
  }

  static const char* value(const ::robot_msgs::MissionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0de47fd5dc41691eULL;
  static const uint64_t static_value2 = 0xaba9c72cee94140eULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::MissionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/MissionResult";
  }

  static const char* value(const ::robot_msgs::MissionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::MissionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"bool is_success\n"
"string mission_id\n"
;
  }

  static const char* value(const ::robot_msgs::MissionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::MissionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_success);
      stream.next(m.mission_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::MissionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::MissionResult_<ContainerAllocator>& v)
  {
    s << indent << "is_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_success);
    s << indent << "mission_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.mission_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_MISSIONRESULT_H
