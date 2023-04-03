;; Auto-generated. Do not edit!


(when (boundp 'robot_msgs::Location)
  (if (not (find-package "ROBOT_MSGS"))
    (make-package "ROBOT_MSGS"))
  (shadow 'Location (find-package "ROBOT_MSGS")))
(unless (find-package "ROBOT_MSGS::LOCATION")
  (make-package "ROBOT_MSGS::LOCATION"))
(unless (find-package "ROBOT_MSGS::LOCATIONREQUEST")
  (make-package "ROBOT_MSGS::LOCATIONREQUEST"))
(unless (find-package "ROBOT_MSGS::LOCATIONRESPONSE")
  (make-package "ROBOT_MSGS::LOCATIONRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass robot_msgs::LocationRequest
  :super ros::object
  :slots (_location_id ))

(defmethod robot_msgs::LocationRequest
  (:init
   (&key
    ((:location_id __location_id) 0)
    )
   (send-super :init)
   (setq _location_id (round __location_id))
   self)
  (:location_id
   (&optional __location_id)
   (if __location_id (setq _location_id __location_id)) _location_id)
  (:serialization-length
   ()
   (+
    ;; int8 _location_id
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _location_id
       (write-byte _location_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _location_id
     (setq _location_id (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _location_id 127) (setq _location_id (- _location_id 256)))
   ;;
   self)
  )

(defclass robot_msgs::LocationResponse
  :super ros::object
  :slots (_target_pose ))

(defmethod robot_msgs::LocationResponse
  (:init
   (&key
    ((:target_pose __target_pose) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _target_pose __target_pose)
   self)
  (:target_pose
   (&rest __target_pose)
   (if (keywordp (car __target_pose))
       (send* _target_pose __target_pose)
     (progn
       (if __target_pose (setq _target_pose (car __target_pose)))
       _target_pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose _target_pose
    (send _target_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose _target_pose
       (send _target_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose _target_pose
     (send _target_pose :deserialize buf ptr-) (incf ptr- (send _target_pose :serialization-length))
   ;;
   self)
  )

(defclass robot_msgs::Location
  :super ros::object
  :slots ())

(setf (get robot_msgs::Location :md5sum-) "7e5777edad1b26d8d53bfb68b780c64f")
(setf (get robot_msgs::Location :datatype-) "robot_msgs/Location")
(setf (get robot_msgs::Location :request) robot_msgs::LocationRequest)
(setf (get robot_msgs::Location :response) robot_msgs::LocationResponse)

(defmethod robot_msgs::LocationRequest
  (:response () (instance robot_msgs::LocationResponse :init)))

(setf (get robot_msgs::LocationRequest :md5sum-) "7e5777edad1b26d8d53bfb68b780c64f")
(setf (get robot_msgs::LocationRequest :datatype-) "robot_msgs/LocationRequest")
(setf (get robot_msgs::LocationRequest :definition-)
      "int8 location_id
---
geometry_msgs/Pose target_pose



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

(setf (get robot_msgs::LocationResponse :md5sum-) "7e5777edad1b26d8d53bfb68b780c64f")
(setf (get robot_msgs::LocationResponse :datatype-) "robot_msgs/LocationResponse")
(setf (get robot_msgs::LocationResponse :definition-)
      "int8 location_id
---
geometry_msgs/Pose target_pose



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



(provide :robot_msgs/Location "7e5777edad1b26d8d53bfb68b780c64f")


