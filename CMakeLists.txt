cmake_minimum_required(VERSION 2.8.3)
project(ros_joystick_reading_data)
set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

find_package(catkin REQUIRED COMPONENTS  roscpp joy)

catkin_package()

add_executable(joystick_reader src/joystick_reader.cpp)
target_link_libraries(joystick_reader ${catkin_LIBRARIES}  )

