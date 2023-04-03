cmake_minimum_required(VERSION 2.8.3)
project(mission_control)

add_compile_options(-std=c++11)


find_package(catkin REQUIRED COMPONENTS
  
  geometry_msgs
  roscpp
  rospy
  std_msgs
  robot_msgs
  actionlib
  nav_msgs
  roslib
)










catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS
    
    geometry_msgs
    roscpp
    rospy
    std_msgs
    nav_msgs
    robot_msgs
    roslib
)
###########
## Build ##
###########

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include/mission_control
)



add_executable(mission_control
  src/mission_control.cpp
  src/waiting_module.cpp

  src/error_module.cpp
)

add_dependencies(mission_control ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})


target_link_libraries(mission_control
  ${catkin_LIBRARIES} sqlite3
)
## Mark executables for installation

install(TARGETS mission_control 
   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
 )


## Mark other files for installation (e.g. launch and bag files, etc.)
install(DIRECTORY include  
   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
   PATTERN ".svn" EXCLUDE
 )
