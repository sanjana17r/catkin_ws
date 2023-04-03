
(cl:in-package :asdf)

(defsystem "robot_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "Location" :depends-on ("_package_Location"))
    (:file "_package_Location" :depends-on ("_package"))
    (:file "UserFeedback" :depends-on ("_package_UserFeedback"))
    (:file "_package_UserFeedback" :depends-on ("_package"))
  ))