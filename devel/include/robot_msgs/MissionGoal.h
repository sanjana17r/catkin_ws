// Generated by gencpp from file robot_msgs/MissionGoal.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_MISSIONGOAL_H
#define ROBOT_MSGS_MESSAGE_MISSIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robot_msgs/Task.h>

namespace robot_msgs
{
template <class ContainerAllocator>
struct MissionGoal_
{
  typedef MissionGoal_<ContainerAllocator> Type;

  MissionGoal_()
    : loop_number(0)
    , mission_id()
    , mission_list()  {
    }
  MissionGoal_(const ContainerAllocator& _alloc)
    : loop_number(0)
    , mission_id(_alloc)
    , mission_list(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _loop_number_type;
  _loop_number_type loop_number;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _mission_id_type;
  _mission_id_type mission_id;

   typedef std::vector< ::robot_msgs::Task_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::robot_msgs::Task_<ContainerAllocator> >> _mission_list_type;
  _mission_list_type mission_list;





  typedef boost::shared_ptr< ::robot_msgs::MissionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::MissionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MissionGoal_

typedef ::robot_msgs::MissionGoal_<std::allocator<void> > MissionGoal;

typedef boost::shared_ptr< ::robot_msgs::MissionGoal > MissionGoalPtr;
typedef boost::shared_ptr< ::robot_msgs::MissionGoal const> MissionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::MissionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::MissionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::MissionGoal_<ContainerAllocator1> & lhs, const ::robot_msgs::MissionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.loop_number == rhs.loop_number &&
    lhs.mission_id == rhs.mission_id &&
    lhs.mission_list == rhs.mission_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::MissionGoal_<ContainerAllocator1> & lhs, const ::robot_msgs::MissionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MissionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::MissionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MissionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::MissionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MissionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::MissionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::MissionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d95490b428ca4f92d65c73fbf484a9ab";
  }

  static const char* value(const ::robot_msgs::MissionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd95490b428ca4f92ULL;
  static const uint64_t static_value2 = 0xd65c73fbf484a9abULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::MissionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/MissionGoal";
  }

  static const char* value(const ::robot_msgs::MissionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::MissionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"int16 loop_number\n"
"string mission_id\n"
"robot_msgs/Task[] mission_list\n"
"\n"
"\n"
"================================================================================\n"
"MSG: robot_msgs/Task\n"
"string index\n"
"string coordinate_index\n"
"int16 waypoint_index\n"
"string map_name\n"
"geometry_msgs/Pose coordinate\n"
"int16 number\n"
"bool activate\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::robot_msgs::MissionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::MissionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loop_number);
      stream.next(m.mission_id);
      stream.next(m.mission_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MissionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::MissionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::MissionGoal_<ContainerAllocator>& v)
  {
    s << indent << "loop_number: ";
    Printer<int16_t>::stream(s, indent + "  ", v.loop_number);
    s << indent << "mission_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.mission_id);
    s << indent << "mission_list[]" << std::endl;
    for (size_t i = 0; i < v.mission_list.size(); ++i)
    {
      s << indent << "  mission_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::robot_msgs::Task_<ContainerAllocator> >::stream(s, indent + "    ", v.mission_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_MISSIONGOAL_H
