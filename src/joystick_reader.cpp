#include <ros/ros.h>
#include <sensor_msgs/Joy.h>

void joyCallback(const sensor_msgs::Joy::ConstPtr& joy)
{
    std::cout<<"axes: ["<< joy->axes[0] <<","<<joy->axes[1] <<","<<joy->axes[2] <<","<<joy->axes[3]<<","<< joy->axes[4]<<","<< joy->axes[5] <<","<<joy->axes[6]<<","<< joy->axes[7]   <<"]"<<std::endl;
    std::cout<<"buttons: ["<<  joy->buttons[0]  <<","<< joy->buttons[1] <<","<<joy->buttons[2] <<","<<joy->buttons[3]<<","<< joy->buttons[4] <<","<<joy->buttons[5] <<","<<joy->buttons[6] <<","<<joy->buttons[7] <<","<<joy->buttons[8] <<","<<joy->buttons[9]<<","<<joy->buttons[10]   <<"]"<<std::endl;
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "joystcik_reader");
  ros::NodeHandle nh;
  ros::Subscriber joy_sub = nh.subscribe<sensor_msgs::Joy>("joy", 10, &joyCallback);

  ros::spin();
}

