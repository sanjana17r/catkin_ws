; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude MoveResult.msg.html

(cl:defclass <MoveResult> (roslisp-msg-protocol:ros-message)
  ((is_success
    :reader is_success
    :initarg :is_success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MoveResult (<MoveResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<MoveResult> is deprecated: use robot_msgs-msg:MoveResult instead.")))

(cl:ensure-generic-function 'is_success-val :lambda-list '(m))
(cl:defmethod is_success-val ((m <MoveResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:is_success-val is deprecated.  Use robot_msgs-msg:is_success instead.")
  (is_success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveResult>) ostream)
  "Serializes a message object of type '<MoveResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveResult>) istream)
  "Deserializes a message object of type '<MoveResult>"
    (cl:setf (cl:slot-value msg 'is_success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveResult>)))
  "Returns string type for a message object of type '<MoveResult>"
  "robot_msgs/MoveResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveResult)))
  "Returns string type for a message object of type 'MoveResult"
  "robot_msgs/MoveResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveResult>)))
  "Returns md5sum for a message object of type '<MoveResult>"
  "fa3e942e5cfe76a6a46f20a0780b2cf3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveResult)))
  "Returns md5sum for a message object of type 'MoveResult"
  "fa3e942e5cfe76a6a46f20a0780b2cf3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveResult>)))
  "Returns full string definition for message of type '<MoveResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool is_success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveResult)))
  "Returns full string definition for message of type 'MoveResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool is_success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveResult>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveResult>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveResult
    (cl:cons ':is_success (is_success msg))
))
