;; Auto-generated. Do not edit!


(when (boundp 'robot_msgs::MissionResult)
  (if (not (find-package "ROBOT_MSGS"))
    (make-package "ROBOT_MSGS"))
  (shadow 'MissionResult (find-package "ROBOT_MSGS")))
(unless (find-package "ROBOT_MSGS::MISSIONRESULT")
  (make-package "ROBOT_MSGS::MISSIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude MissionResult.msg.html


(defclass robot_msgs::MissionResult
  :super ros::object
  :slots (_is_success _mission_id ))

(defmethod robot_msgs::MissionResult
  (:init
   (&key
    ((:is_success __is_success) nil)
    ((:mission_id __mission_id) "")
    )
   (send-super :init)
   (setq _is_success __is_success)
   (setq _mission_id (string __mission_id))
   self)
  (:is_success
   (&optional (__is_success :null))
   (if (not (eq __is_success :null)) (setq _is_success __is_success)) _is_success)
  (:mission_id
   (&optional __mission_id)
   (if __mission_id (setq _mission_id __mission_id)) _mission_id)
  (:serialization-length
   ()
   (+
    ;; bool _is_success
    1
    ;; string _mission_id
    4 (length _mission_id)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _is_success
       (if _is_success (write-byte -1 s) (write-byte 0 s))
     ;; string _mission_id
       (write-long (length _mission_id) s) (princ _mission_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _is_success
     (setq _is_success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _mission_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _mission_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get robot_msgs::MissionResult :md5sum-) "0de47fd5dc41691eaba9c72cee94140e")
(setf (get robot_msgs::MissionResult :datatype-) "robot_msgs/MissionResult")
(setf (get robot_msgs::MissionResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
bool is_success
string mission_id

")



(provide :robot_msgs/MissionResult "0de47fd5dc41691eaba9c72cee94140e")

