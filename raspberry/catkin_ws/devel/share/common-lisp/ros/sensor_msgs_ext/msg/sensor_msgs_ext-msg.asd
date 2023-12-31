
(cl:in-package :asdf)

(defsystem "sensor_msgs_ext-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "accelerometer" :depends-on ("_package_accelerometer"))
    (:file "_package_accelerometer" :depends-on ("_package"))
    (:file "analog_voltage" :depends-on ("_package_analog_voltage"))
    (:file "_package_analog_voltage" :depends-on ("_package"))
    (:file "axis_state" :depends-on ("_package_axis_state"))
    (:file "_package_axis_state" :depends-on ("_package"))
    (:file "covariance" :depends-on ("_package_covariance"))
    (:file "_package_covariance" :depends-on ("_package"))
    (:file "gnss_fix" :depends-on ("_package_gnss_fix"))
    (:file "_package_gnss_fix" :depends-on ("_package"))
    (:file "gnss_position" :depends-on ("_package_gnss_position"))
    (:file "_package_gnss_position" :depends-on ("_package"))
    (:file "gnss_track" :depends-on ("_package_gnss_track"))
    (:file "_package_gnss_track" :depends-on ("_package"))
    (:file "gyroscope" :depends-on ("_package_gyroscope"))
    (:file "_package_gyroscope" :depends-on ("_package"))
    (:file "magnetometer" :depends-on ("_package_magnetometer"))
    (:file "_package_magnetometer" :depends-on ("_package"))
    (:file "proximity" :depends-on ("_package_proximity"))
    (:file "_package_proximity" :depends-on ("_package"))
    (:file "temperature" :depends-on ("_package_temperature"))
    (:file "_package_temperature" :depends-on ("_package"))
    (:file "time_reference" :depends-on ("_package_time_reference"))
    (:file "_package_time_reference" :depends-on ("_package"))
  ))