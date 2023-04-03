; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude Task.msg.html

(cl:defclass <Task> (roslisp-msg-protocol:ros-message)
  ((index
    :reader index
    :initarg :index
    :type cl:string
    :initform "")
   (coordinate_index
    :reader coordinate_index
    :initarg :coordinate_index
    :type cl:string
    :initform "")
   (waypoint_index
    :reader waypoint_index
    :initarg :waypoint_index
    :type cl:fixnum
    :initform 0)
   (map_name
    :reader map_name
    :initarg :map_name
    :type cl:string
    :initform "")
   (coordinate
    :reader coordinate
    :initarg :coordinate
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (number
    :reader number
    :initarg :number
    :type cl:fixnum
    :initform 0)
   (activate
    :reader activate
    :initarg :activate
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Task (<Task>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Task>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Task)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<Task> is deprecated: use robot_msgs-msg:Task instead.")))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:index-val is deprecated.  Use robot_msgs-msg:index instead.")
  (index m))

(cl:ensure-generic-function 'coordinate_index-val :lambda-list '(m))
(cl:defmethod coordinate_index-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:coordinate_index-val is deprecated.  Use robot_msgs-msg:coordinate_index instead.")
  (coordinate_index m))

(cl:ensure-generic-function 'waypoint_index-val :lambda-list '(m))
(cl:defmethod waypoint_index-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:waypoint_index-val is deprecated.  Use robot_msgs-msg:waypoint_index instead.")
  (waypoint_index m))

(cl:ensure-generic-function 'map_name-val :lambda-list '(m))
(cl:defmethod map_name-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:map_name-val is deprecated.  Use robot_msgs-msg:map_name instead.")
  (map_name m))

(cl:ensure-generic-function 'coordinate-val :lambda-list '(m))
(cl:defmethod coordinate-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:coordinate-val is deprecated.  Use robot_msgs-msg:coordinate instead.")
  (coordinate m))

(cl:ensure-generic-function 'number-val :lambda-list '(m))
(cl:defmethod number-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:number-val is deprecated.  Use robot_msgs-msg:number instead.")
  (number m))

(cl:ensure-generic-function 'activate-val :lambda-list '(m))
(cl:defmethod activate-val ((m <Task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:activate-val is deprecated.  Use robot_msgs-msg:activate instead.")
  (activate m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Task>) ostream)
  "Serializes a message object of type '<Task>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'index))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'coordinate_index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'coordinate_index))
  (cl:let* ((signed (cl:slot-value msg 'waypoint_index)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'map_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'map_name))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'coordinate) ostream)
  (cl:let* ((signed (cl:slot-value msg 'number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'activate) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Task>) istream)
  "Deserializes a message object of type '<Task>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'coordinate_index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'coordinate_index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'waypoint_index) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'map_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'map_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'coordinate) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'number) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:slot-value msg 'activate) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Task>)))
  "Returns string type for a message object of type '<Task>"
  "robot_msgs/Task")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Task)))
  "Returns string type for a message object of type 'Task"
  "robot_msgs/Task")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Task>)))
  "Returns md5sum for a message object of type '<Task>"
  "6b471fe2edd3aa8f13fe189d792d154a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Task)))
  "Returns md5sum for a message object of type 'Task"
  "6b471fe2edd3aa8f13fe189d792d154a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Task>)))
  "Returns full string definition for message of type '<Task>"
  (cl:format cl:nil "string index~%string coordinate_index~%int16 waypoint_index~%string map_name~%geometry_msgs/Pose coordinate~%int16 number~%bool activate~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Task)))
  "Returns full string definition for message of type 'Task"
  (cl:format cl:nil "string index~%string coordinate_index~%int16 waypoint_index~%string map_name~%geometry_msgs/Pose coordinate~%int16 number~%bool activate~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Task>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'index))
     4 (cl:length (cl:slot-value msg 'coordinate_index))
     2
     4 (cl:length (cl:slot-value msg 'map_name))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'coordinate))
     2
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Task>))
  "Converts a ROS message object to a list"
  (cl:list 'Task
    (cl:cons ':index (index msg))
    (cl:cons ':coordinate_index (coordinate_index msg))
    (cl:cons ':waypoint_index (waypoint_index msg))
    (cl:cons ':map_name (map_name msg))
    (cl:cons ':coordinate (coordinate msg))
    (cl:cons ':number (number msg))
    (cl:cons ':activate (activate msg))
))
