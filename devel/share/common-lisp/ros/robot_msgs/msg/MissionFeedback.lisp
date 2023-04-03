; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude MissionFeedback.msg.html

(cl:defclass <MissionFeedback> (roslisp-msg-protocol:ros-message)
  ((mission_feedback
    :reader mission_feedback
    :initarg :mission_feedback
    :type robot_msgs-msg:Feedback
    :initform (cl:make-instance 'robot_msgs-msg:Feedback)))
)

(cl:defclass MissionFeedback (<MissionFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<MissionFeedback> is deprecated: use robot_msgs-msg:MissionFeedback instead.")))

(cl:ensure-generic-function 'mission_feedback-val :lambda-list '(m))
(cl:defmethod mission_feedback-val ((m <MissionFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:mission_feedback-val is deprecated.  Use robot_msgs-msg:mission_feedback instead.")
  (mission_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionFeedback>) ostream)
  "Serializes a message object of type '<MissionFeedback>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'mission_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionFeedback>) istream)
  "Deserializes a message object of type '<MissionFeedback>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'mission_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionFeedback>)))
  "Returns string type for a message object of type '<MissionFeedback>"
  "robot_msgs/MissionFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionFeedback)))
  "Returns string type for a message object of type 'MissionFeedback"
  "robot_msgs/MissionFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionFeedback>)))
  "Returns md5sum for a message object of type '<MissionFeedback>"
  "8dede4bc6b199919896f29013dbd6378")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionFeedback)))
  "Returns md5sum for a message object of type 'MissionFeedback"
  "8dede4bc6b199919896f29013dbd6378")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionFeedback>)))
  "Returns full string definition for message of type '<MissionFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%robot_msgs/Feedback mission_feedback~%~%~%================================================================================~%MSG: robot_msgs/Feedback~%#mission status~%int32 IDLE =0~%int32 ACTIVE =1~%int32 SUCCESS =2~%int32 ABORTED =3~%int32 PAUSED =4~%~%~%string index~%string mission_id~%int16 number~%int16 status~%float32 completion_percentage~%int32 time_elapsed~%int32 priority_level~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionFeedback)))
  "Returns full string definition for message of type 'MissionFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%robot_msgs/Feedback mission_feedback~%~%~%================================================================================~%MSG: robot_msgs/Feedback~%#mission status~%int32 IDLE =0~%int32 ACTIVE =1~%int32 SUCCESS =2~%int32 ABORTED =3~%int32 PAUSED =4~%~%~%string index~%string mission_id~%int16 number~%int16 status~%float32 completion_percentage~%int32 time_elapsed~%int32 priority_level~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionFeedback>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'mission_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionFeedback
    (cl:cons ':mission_feedback (mission_feedback msg))
))