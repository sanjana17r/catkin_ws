; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude WaitFeedback.msg.html

(cl:defclass <WaitFeedback> (roslisp-msg-protocol:ros-message)
  ((wait_feedback
    :reader wait_feedback
    :initarg :wait_feedback
    :type cl:boolean
    :initform cl:nil)
   (time_elapsed
    :reader time_elapsed
    :initarg :time_elapsed
    :type cl:integer
    :initform 0))
)

(cl:defclass WaitFeedback (<WaitFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WaitFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WaitFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<WaitFeedback> is deprecated: use robot_msgs-msg:WaitFeedback instead.")))

(cl:ensure-generic-function 'wait_feedback-val :lambda-list '(m))
(cl:defmethod wait_feedback-val ((m <WaitFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:wait_feedback-val is deprecated.  Use robot_msgs-msg:wait_feedback instead.")
  (wait_feedback m))

(cl:ensure-generic-function 'time_elapsed-val :lambda-list '(m))
(cl:defmethod time_elapsed-val ((m <WaitFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:time_elapsed-val is deprecated.  Use robot_msgs-msg:time_elapsed instead.")
  (time_elapsed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WaitFeedback>) ostream)
  "Serializes a message object of type '<WaitFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'wait_feedback) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'time_elapsed)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WaitFeedback>) istream)
  "Deserializes a message object of type '<WaitFeedback>"
    (cl:setf (cl:slot-value msg 'wait_feedback) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'time_elapsed) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WaitFeedback>)))
  "Returns string type for a message object of type '<WaitFeedback>"
  "robot_msgs/WaitFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WaitFeedback)))
  "Returns string type for a message object of type 'WaitFeedback"
  "robot_msgs/WaitFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WaitFeedback>)))
  "Returns md5sum for a message object of type '<WaitFeedback>"
  "55ed0794bf6f75e25b8ccd5c919efb1e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WaitFeedback)))
  "Returns md5sum for a message object of type 'WaitFeedback"
  "55ed0794bf6f75e25b8ccd5c919efb1e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WaitFeedback>)))
  "Returns full string definition for message of type '<WaitFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool wait_feedback~%int32 time_elapsed~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WaitFeedback)))
  "Returns full string definition for message of type 'WaitFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool wait_feedback~%int32 time_elapsed~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WaitFeedback>))
  (cl:+ 0
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WaitFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'WaitFeedback
    (cl:cons ':wait_feedback (wait_feedback msg))
    (cl:cons ':time_elapsed (time_elapsed msg))
))
