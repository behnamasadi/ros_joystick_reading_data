# Reading Joystick Data in ROS 

## Installing Required Packages
First, install the necessary package:
```
sudo apt-get install ros-kinetic-joy
```

## Checking Your Joystick
make sure your joystick is working:
```
sudo jstest /dev/input/js0
```

make sure your controller has correct permissions:


```
ls -l /dev/input/js0
```

The permission on the last column must be rw, if it “–” like this:
```
crw-rw-r--+ 1 root root 13, 0 May 18 12:12 /dev/input/js0
```

then correct the permission:
```
sudo chmod a+rw /dev/input/js0
```

## Running the Code:

```
roscore
rosparam set joy_node/dev "/dev/input/js0"
rosrun joy joy_node
```

The joystick data are being published under /joy topic. To see the data:

```
rostopic echo joy
```
![alt text](https://img.shields.io/badge/license-BSD-blue.svg)
[![Build Status](https://travis-ci.org/behnamasadi/ros_joystick_reading_data.svg?branch=master)](https://travis-ci.org/behnamasadi/ros_joystick_reading_data)
