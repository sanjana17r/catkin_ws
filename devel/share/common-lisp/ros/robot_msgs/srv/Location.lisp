; Auto-generated. Do not edit!


(cl:in-package robot_msgs-srv)


;//! \htmlinclude Location-request.msg.html

(cl:defclass <Location-request> (roslisp-msg-protocol:ros-message)
  ((location_id
    :reader location_id
    :initarg :location_id
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Location-request (<Location-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Location-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Location-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-srv:<Location-request> is deprecated: use robot_msgs-srv:Location-request instead.")))

(cl:ensure-generic-function 'location_id-val :lambda-list '(m))
(cl:defmethod location_id-val ((m <Location-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-srv:location_id-val is deprecated.  Use robot_msgs-srv:location_id instead.")
  (location_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Location-request>) ostream)
  "Serializes a message object of type '<Location-request>"
  (cl:let* ((signed (cl:slot-value msg 'location_id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Location-request>) istream)
  "Deserializes a message object of type '<Location-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'location_id) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Location-request>)))
  "Returns string type for a service object of type '<Location-request>"
  "robot_msgs/LocationRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Location-request)))
  "Returns string type for a service object of type 'Location-request"
  "robot_msgs/LocationRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Location-request>)))
  "Returns md5sum for a message object of type '<Location-request>"
  "7e5777edad1b26d8d53bfb68b780c64f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Location-request)))
  "Returns md5sum for a message object of type 'Location-request"
  "7e5777edad1b26d8d53bfb68b780c64f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Location-request>)))
  "Returns full string definition for message of type '<Location-request>"
  (cl:format cl:nil "int8 location_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Location-request)))
  "Returns full string definition for message of type 'Location-request"
  (cl:format cl:nil "int8 location_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Location-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Location-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Location-request
    (cl:cons ':location_id (location_id msg))
))
;//! \htmlinclude Location-response.msg.html

(cl:defclass <Location-response> (roslisp-msg-protocol:ros-message)
  ((target_pose
    :reader target_pose
    :initarg :target_pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass Location-response (<Location-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Location-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Location-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-srv:<Location-response> is deprecated: use robot_msgs-srv:Location-response instead.")))

(cl:ensure-generic-function 'target_pose-val :lambda-list '(m))
(cl:defmethod target_pose-val ((m <Location-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-srv:target_pose-val is deprecated.  Use robot_msgs-srv:target_pose instead.")
  (target_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Location-response>) ostream)
  "Serializes a message object of type '<Location-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'target_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Location-response>) istream)
  "Deserializes a message object of type '<Location-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'target_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Location-response>)))
  "Returns string type for a service object of type '<Location-response>"
  "robot_msgs/LocationResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Location-response)))
  "Returns string type for a service object of type 'Location-response"
  "robot_msgs/LocationResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Location-response>)))
  "Returns md5sum for a message object of type '<Location-response>"
  "7e5777edad1b26d8d53bfb68b780c64f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Location-response)))
  "Returns md5sum for a message object of type 'Location-response"
  "7e5777edad1b26d8d53bfb68b780c64f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Location-response>)))
  "Returns full string definition for message of type '<Location-response>"
  (cl:format cl:nil "geometry_msgs/Pose target_pose~%~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Location-response)))
  "Returns full string definition for message of type 'Location-response"
  (cl:format cl:nil "geometry_msgs/Pose target_pose~%~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Location-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'target_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Location-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Location-response
    (cl:cons ':target_pose (target_pose msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Location)))
  'Location-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Location)))
  'Location-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Location)))
  "Returns string type for a service object of type '<Location>"
  "robot_msgs/Location")