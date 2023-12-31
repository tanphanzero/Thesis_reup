#!/usr/bin/env python

import numpy as np

import rospy
from std_msgs.msg import Header
from nav_msgs.msg import OccupancyGrid
from nav_msgs.msg import MapMetaData
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Point
from geometry_msgs.msg import Quaternion

rospy.init_node("global_map")

map_topic = "map/global_map"
OG_publisher = rospy.Publisher(map_topic, OccupancyGrid, queue_size=5, latch=True)

MAP_RESOLUTION = 0.1    #Unit: Meter
MAP_SIZE       = 20     #Unit: Meter, Shape: Square with center "base_link"

map_img = np.zeros([int(MAP_SIZE/MAP_RESOLUTION),int(MAP_SIZE/MAP_RESOLUTION),1], \
                    dtype=np.uint8)
occupancy_grid = map_img.flatten()
occupancy_grid = occupancy_grid.tolist()

map_msg = OccupancyGrid()

map_msg.header = Header()
map_msg.header.frame_id = "odom"
map_msg.header.stamp    = rospy.Time.now()

map_msg.info= MapMetaData()
map_msg.info.map_load_time = rospy.Time.now()
map_msg.info.height = int(MAP_SIZE/MAP_RESOLUTION)      #Unit: Pixel
map_msg.info.width  = int(MAP_SIZE/MAP_RESOLUTION)      #Unit: Pixel
map_msg.info.resolution = MAP_RESOLUTION

map_msg.info.origin = Pose()
map_msg.info.origin.position = Point()
map_msg.info.origin.position.x = -MAP_SIZE/2      #Unit: Meter
map_msg.info.origin.position.y = -MAP_SIZE/2      #Unit: Meter
map_msg.info.origin.position.z = 0
map_msg.info.origin.orientation = Quaternion()
map_msg.info.origin.orientation.x = 0
map_msg.info.origin.orientation.y = 0
map_msg.info.origin.orientation.z = 0
map_msg.info.origin.orientation.w = 1

map_msg.data.extend(occupancy_grid)

rate = rospy.Rate(10)      
while not rospy.is_shutdown():
    OG_publisher.publish(map_msg)
    rate.sleep()
