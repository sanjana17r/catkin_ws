cmake_minimum_required(VERSION 3.0.2)
project(start_jackal)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES start_anscer
#  CATKIN_DEPENDS roscpp rospy
#  DEPENDS system_lib
)


include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

## Mark other files for installation (e.g. launch and bag files, etc.)
install(DIRECTORY launch config
   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
   PATTERN ".svn" EXCLUDE
 )
