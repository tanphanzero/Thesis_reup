#!/usr/bin/env python3

import rospy
import serial
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Header
def read_gps():
    with serial.Serial('/dev/ttyACM1', 9600, timeout=1) as ser:
        while not rospy.is_shutdown():
            line = ser.readline().decode('ISO-8859-1')
            header = Header()
            header.stamp = rospy.Time.now()
            header.frame_id = 'base_link' 
            #rospy.loginfo(line)
            if line.startswith('$GNGGA'): 
                data = line.split(',')
                lat = float(data[2][:2]) + float(data[2][2:])/60.0
                if data[3] == 'S':
                    lat = -lat
                lon = float(data[4][:3]) + float(data[4][3:])/60.0
                if data[5] == 'W':
                    lon = -lon
                alt = float(data[9])
                gps_msg = NavSatFix()
                gps_msg.header = header
                gps_msg.latitude = lat
                gps_msg.longitude = lon
                gps_msg.altitude = alt
                gps_pub.publish(gps_msg)

if __name__ == '__main__':
    rospy.init_node('gps_node')
    gps_pub = rospy.Publisher('gps/fix', NavSatFix, queue_size=100)
    try:
        read_gps()
    except rospy.ROSInterruptException:
        pass
