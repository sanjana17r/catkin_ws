cmake_minimum_required(VERSION 2.8.3)
project(navigation_server)

## Compile as C++11, supported in ROS Kinetic and newer
 add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  std_msgs
  geometry_msgs
  sensor_msgs
  roscpp
  rospy
  robot_msgs
  actionlib
  move_base_msgs
)



catkin_package(CATKIN_DEPENDS  std_msgs robot_msgs actionlib move_base_msgs)

#Including .h files
include_directories(${catkin_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include/)



#Making executables and linking catkin libraries
add_executable(navigation_server
    src/ErrorState.cpp
    src/IdleState.cpp
    src/MoveState.cpp
    src/NavigationInterface.cpp
    src/NavigationServerMachine.cpp
    src/RosClass.cpp
    )

add_dependencies(navigation_server ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(navigation_server ${catkin_LIBRARIES})


