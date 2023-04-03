; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude MissionResult.msg.html

(cl:defclass <MissionResult> (roslisp-msg-protocol:ros-message)
  ((is_success
    :reader is_success
    :initarg :is_success
    :type cl:boolean
    :initform cl:nil)
   (mission_id
    :reader mission_id
    :initarg :mission_id
    :type cl:string
    :initform ""))
)

(cl:defclass MissionResult (<MissionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<MissionResult> is deprecated: use robot_msgs-msg:MissionResult instead.")))

(cl:ensure-generic-function 'is_success-val :lambda-list '(m))
(cl:defmethod is_success-val ((m <MissionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:is_success-val is deprecated.  Use robot_msgs-msg:is_success instead.")
  (is_success m))

(cl:ensure-generic-function 'mission_id-val :lambda-list '(m))
(cl:defmethod mission_id-val ((m <MissionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:mission_id-val is deprecated.  Use robot_msgs-msg:mission_id instead.")
  (mission_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionResult>) ostream)
  "Serializes a message object of type '<MissionResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'mission_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'mission_id))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionResult>) istream)
  "Deserializes a message object of type '<MissionResult>"
    (cl:setf (cl:slot-value msg 'is_success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mission_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'mission_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionResult>)))
  "Returns string type for a message object of type '<MissionResult>"
  "robot_msgs/MissionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionResult)))
  "Returns string type for a message object of type 'MissionResult"
  "robot_msgs/MissionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionResult>)))
  "Returns md5sum for a message object of type '<MissionResult>"
  "0de47fd5dc41691eaba9c72cee94140e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionResult)))
  "Returns md5sum for a message object of type 'MissionResult"
  "0de47fd5dc41691eaba9c72cee94140e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionResult>)))
  "Returns full string definition for message of type '<MissionResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool is_success~%string mission_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionResult)))
  "Returns full string definition for message of type 'MissionResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool is_success~%string mission_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionResult>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'mission_id))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionResult
    (cl:cons ':is_success (is_success msg))
    (cl:cons ':mission_id (mission_id msg))
))
