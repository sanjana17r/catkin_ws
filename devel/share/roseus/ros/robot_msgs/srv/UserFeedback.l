;; Auto-generated. Do not edit!


(when (boundp 'robot_msgs::UserFeedback)
  (if (not (find-package "ROBOT_MSGS"))
    (make-package "ROBOT_MSGS"))
  (shadow 'UserFeedback (find-package "ROBOT_MSGS")))
(unless (find-package "ROBOT_MSGS::USERFEEDBACK")
  (make-package "ROBOT_MSGS::USERFEEDBACK"))
(unless (find-package "ROBOT_MSGS::USERFEEDBACKREQUEST")
  (make-package "ROBOT_MSGS::USERFEEDBACKREQUEST"))
(unless (find-package "ROBOT_MSGS::USERFEEDBACKRESPONSE")
  (make-package "ROBOT_MSGS::USERFEEDBACKRESPONSE"))

(in-package "ROS")





(defclass robot_msgs::UserFeedbackRequest
  :super ros::object
  :slots (_user_feedback ))

(defmethod robot_msgs::UserFeedbackRequest
  (:init
   (&key
    ((:user_feedback __user_feedback) nil)
    )
   (send-super :init)
   (setq _user_feedback __user_feedback)
   self)
  (:user_feedback
   (&optional (__user_feedback :null))
   (if (not (eq __user_feedback :null)) (setq _user_feedback __user_feedback)) _user_feedback)
  (:serialization-length
   ()
   (+
    ;; bool _user_feedback
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _user_feedback
       (if _user_feedback (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _user_feedback
     (setq _user_feedback (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass robot_msgs::UserFeedbackResponse
  :super ros::object
  :slots (_status ))

(defmethod robot_msgs::UserFeedbackResponse
  (:init
   (&key
    ((:status __status) nil)
    )
   (send-super :init)
   (setq _status __status)
   self)
  (:status
   (&optional (__status :null))
   (if (not (eq __status :null)) (setq _status __status)) _status)
  (:serialization-length
   ()
   (+
    ;; bool _status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _status
       (if _status (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _status
     (setq _status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass robot_msgs::UserFeedback
  :super ros::object
  :slots ())

(setf (get robot_msgs::UserFeedback :md5sum-) "0463a42b390cfbf0c6dd3fa4dc48abcf")
(setf (get robot_msgs::UserFeedback :datatype-) "robot_msgs/UserFeedback")
(setf (get robot_msgs::UserFeedback :request) robot_msgs::UserFeedbackRequest)
(setf (get robot_msgs::UserFeedback :response) robot_msgs::UserFeedbackResponse)

(defmethod robot_msgs::UserFeedbackRequest
  (:response () (instance robot_msgs::UserFeedbackResponse :init)))

(setf (get robot_msgs::UserFeedbackRequest :md5sum-) "0463a42b390cfbf0c6dd3fa4dc48abcf")
(setf (get robot_msgs::UserFeedbackRequest :datatype-) "robot_msgs/UserFeedbackRequest")
(setf (get robot_msgs::UserFeedbackRequest :definition-)
      "bool user_feedback
---
bool status


")

(setf (get robot_msgs::UserFeedbackResponse :md5sum-) "0463a42b390cfbf0c6dd3fa4dc48abcf")
(setf (get robot_msgs::UserFeedbackResponse :datatype-) "robot_msgs/UserFeedbackResponse")
(setf (get robot_msgs::UserFeedbackResponse :definition-)
      "bool user_feedback
---
bool status


")



(provide :robot_msgs/UserFeedback "0463a42b390cfbf0c6dd3fa4dc48abcf")


