#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_geometry_msgs_Twist and geometry_msgs::msg::Twist

void convertFromBus(geometry_msgs::msg::Twist& msgPtr, SL_Bus_geometry_msgs_Twist const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertFromBus(msgPtr.angular, &busPtr->angular);
  convertFromBus(msgPtr.linear, &busPtr->linear);
}

void convertToBus(SL_Bus_geometry_msgs_Twist* busPtr, const geometry_msgs::msg::Twist& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertToBus(&busPtr->angular, msgPtr.angular);
  convertToBus(&busPtr->linear, msgPtr.linear);
}


// Conversions between SL_Bus_geometry_msgs_Vector3 and geometry_msgs::msg::Vector3

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}

