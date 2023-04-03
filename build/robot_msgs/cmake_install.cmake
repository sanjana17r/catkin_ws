# Install script for directory: /home/cards/catkin_ws/src/robot_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cards/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/msg" TYPE FILE FILES
    "/home/cards/catkin_ws/src/robot_msgs/msg/Feedback.msg"
    "/home/cards/catkin_ws/src/robot_msgs/msg/Task.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/srv" TYPE FILE FILES
    "/home/cards/catkin_ws/src/robot_msgs/srv/UserFeedback.srv"
    "/home/cards/catkin_ws/src/robot_msgs/srv/Location.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/action" TYPE FILE FILES
    "/home/cards/catkin_ws/src/robot_msgs/action/Mission.action"
    "/home/cards/catkin_ws/src/robot_msgs/action/Move.action"
    "/home/cards/catkin_ws/src/robot_msgs/action/Error.action"
    "/home/cards/catkin_ws/src/robot_msgs/action/Wait.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/msg" TYPE FILE FILES
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionAction.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionActionGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionActionResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionActionFeedback.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MissionFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/msg" TYPE FILE FILES
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveAction.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveActionGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveActionResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveActionFeedback.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/MoveFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/msg" TYPE FILE FILES
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorAction.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorActionGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorActionResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorActionFeedback.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/ErrorFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/msg" TYPE FILE FILES
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitAction.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitActionGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitActionResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitActionFeedback.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitGoal.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitResult.msg"
    "/home/cards/catkin_ws/devel/share/robot_msgs/msg/WaitFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/cmake" TYPE FILE FILES "/home/cards/catkin_ws/build/robot_msgs/catkin_generated/installspace/robot_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/cards/catkin_ws/devel/include/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/cards/catkin_ws/devel/share/roseus/ros/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/cards/catkin_ws/devel/share/common-lisp/ros/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/cards/catkin_ws/devel/share/gennodejs/ros/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/cards/catkin_ws/devel/lib/python3/dist-packages/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/cards/catkin_ws/devel/lib/python3/dist-packages/robot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cards/catkin_ws/build/robot_msgs/catkin_generated/installspace/robot_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/cmake" TYPE FILE FILES "/home/cards/catkin_ws/build/robot_msgs/catkin_generated/installspace/robot_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs/cmake" TYPE FILE FILES
    "/home/cards/catkin_ws/build/robot_msgs/catkin_generated/installspace/robot_msgsConfig.cmake"
    "/home/cards/catkin_ws/build/robot_msgs/catkin_generated/installspace/robot_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_msgs" TYPE FILE FILES "/home/cards/catkin_ws/src/robot_msgs/package.xml")
endif()

