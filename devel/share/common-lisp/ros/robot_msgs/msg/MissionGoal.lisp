; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude MissionGoal.msg.html

(cl:defclass <MissionGoal> (roslisp-msg-protocol:ros-message)
  ((loop_number
    :reader loop_number
    :initarg :loop_number
    :type cl:fixnum
    :initform 0)
   (mission_id
    :reader mission_id
    :initarg :mission_id
    :type cl:string
    :initform "")
   (mission_list
    :reader mission_list
    :initarg :mission_list
    :type (cl:vector robot_msgs-msg:Task)
   :initform (cl:make-array 0 :element-type 'robot_msgs-msg:Task :initial-element (cl:make-instance 'robot_msgs-msg:Task))))
)

(cl:defclass MissionGoal (<MissionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MissionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MissionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<MissionGoal> is deprecated: use robot_msgs-msg:MissionGoal instead.")))

(cl:ensure-generic-function 'loop_number-val :lambda-list '(m))
(cl:defmethod loop_number-val ((m <MissionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:loop_number-val is deprecated.  Use robot_msgs-msg:loop_number instead.")
  (loop_number m))

(cl:ensure-generic-function 'mission_id-val :lambda-list '(m))
(cl:defmethod mission_id-val ((m <MissionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:mission_id-val is deprecated.  Use robot_msgs-msg:mission_id instead.")
  (mission_id m))

(cl:ensure-generic-function 'mission_list-val :lambda-list '(m))
(cl:defmethod mission_list-val ((m <MissionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:mission_list-val is deprecated.  Use robot_msgs-msg:mission_list instead.")
  (mission_list m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MissionGoal>) ostream)
  "Serializes a message object of type '<MissionGoal>"
  (cl:let* ((signed (cl:slot-value msg 'loop_number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'mission_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'mission_id))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'mission_list))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'mission_list))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MissionGoal>) istream)
  "Deserializes a message object of type '<MissionGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'loop_number) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mission_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'mission_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'mission_list) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'mission_list)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'robot_msgs-msg:Task))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MissionGoal>)))
  "Returns string type for a message object of type '<MissionGoal>"
  "robot_msgs/MissionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MissionGoal)))
  "Returns string type for a message object of type 'MissionGoal"
  "robot_msgs/MissionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MissionGoal>)))
  "Returns md5sum for a message object of type '<MissionGoal>"
  "d95490b428ca4f92d65c73fbf484a9ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MissionGoal)))
  "Returns md5sum for a message object of type 'MissionGoal"
  "d95490b428ca4f92d65c73fbf484a9ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MissionGoal>)))
  "Returns full string definition for message of type '<MissionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%int16 loop_number~%string mission_id~%robot_msgs/Task[] mission_list~%~%~%================================================================================~%MSG: robot_msgs/Task~%string index~%string coordinate_index~%int16 waypoint_index~%string map_name~%geometry_msgs/Pose coordinate~%int16 number~%bool activate~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MissionGoal)))
  "Returns full string definition for message of type 'MissionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%int16 loop_number~%string mission_id~%robot_msgs/Task[] mission_list~%~%~%================================================================================~%MSG: robot_msgs/Task~%string index~%string coordinate_index~%int16 waypoint_index~%string map_name~%geometry_msgs/Pose coordinate~%int16 number~%bool activate~%~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MissionGoal>))
  (cl:+ 0
     2
     4 (cl:length (cl:slot-value msg 'mission_id))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'mission_list) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MissionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'MissionGoal
    (cl:cons ':loop_number (loop_number msg))
    (cl:cons ':mission_id (mission_id msg))
    (cl:cons ':mission_list (mission_list msg))
))
