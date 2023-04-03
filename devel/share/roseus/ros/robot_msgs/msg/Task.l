;; Auto-generated. Do not edit!


(when (boundp 'robot_msgs::Task)
  (if (not (find-package "ROBOT_MSGS"))
    (make-package "ROBOT_MSGS"))
  (shadow 'Task (find-package "ROBOT_MSGS")))
(unless (find-package "ROBOT_MSGS::TASK")
  (make-package "ROBOT_MSGS::TASK"))

(in-package "ROS")
;;//! \htmlinclude Task.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass robot_msgs::Task
  :super ros::object
  :slots (_index _coordinate_index _waypoint_index _map_name _coordinate _number _activate ))

(defmethod robot_msgs::Task
  (:init
   (&key
    ((:index __index) "")
    ((:coordinate_index __coordinate_index) "")
    ((:waypoint_index __waypoint_index) 0)
    ((:map_name __map_name) "")
    ((:coordinate __coordinate) (instance geometry_msgs::Pose :init))
    ((:number __number) 0)
    ((:activate __activate) nil)
    )
   (send-super :init)
   (setq _index (string __index))
   (setq _coordinate_index (string __coordinate_index))
   (setq _waypoint_index (round __waypoint_index))
   (setq _map_name (string __map_name))
   (setq _coordinate __coordinate)
   (setq _number (round __number))
   (setq _activate __activate)
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:coordinate_index
   (&optional __coordinate_index)
   (if __coordinate_index (setq _coordinate_index __coordinate_index)) _coordinate_index)
  (:waypoint_index
   (&optional __waypoint_index)
   (if __waypoint_index (setq _waypoint_index __waypoint_index)) _waypoint_index)
  (:map_name
   (&optional __map_name)
   (if __map_name (setq _map_name __map_name)) _map_name)
  (:coordinate
   (&rest __coordinate)
   (if (keywordp (car __coordinate))
       (send* _coordinate __coordinate)
     (progn
       (if __coordinate (setq _coordinate (car __coordinate)))
       _coordinate)))
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:activate
   (&optional (__activate :null))
   (if (not (eq __activate :null)) (setq _activate __activate)) _activate)
  (:serialization-length
   ()
   (+
    ;; string _index
    4 (length _index)
    ;; string _coordinate_index
    4 (length _coordinate_index)
    ;; int16 _waypoint_index
    2
    ;; string _map_name
    4 (length _map_name)
    ;; geometry_msgs/Pose _coordinate
    (send _coordinate :serialization-length)
    ;; int16 _number
    2
    ;; bool _activate
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _index
       (write-long (length _index) s) (princ _index s)
     ;; string _coordinate_index
       (write-long (length _coordinate_index) s) (princ _coordinate_index s)
     ;; int16 _waypoint_index
       (write-word _waypoint_index s)
     ;; string _map_name
       (write-long (length _map_name) s) (princ _map_name s)
     ;; geometry_msgs/Pose _coordinate
       (send _coordinate :serialize s)
     ;; int16 _number
       (write-word _number s)
     ;; bool _activate
       (if _activate (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _index
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _index (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _coordinate_index
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _coordinate_index (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _waypoint_index
     (setq _waypoint_index (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _map_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _map_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; geometry_msgs/Pose _coordinate
     (send _coordinate :deserialize buf ptr-) (incf ptr- (send _coordinate :serialization-length))
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; bool _activate
     (setq _activate (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get robot_msgs::Task :md5sum-) "6b471fe2edd3aa8f13fe189d792d154a")
(setf (get robot_msgs::Task :datatype-) "robot_msgs/Task")
(setf (get robot_msgs::Task :definition-)
      "string index
string coordinate_index
int16 waypoint_index
string map_name
geometry_msgs/Pose coordinate
int16 number
bool activate


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :robot_msgs/Task "6b471fe2edd3aa8f13fe189d792d154a")


