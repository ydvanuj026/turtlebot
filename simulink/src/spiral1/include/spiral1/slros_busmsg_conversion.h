#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <geometry_msgs/msg/pose2_d.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include "spiral1_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::msg::Pose2D& msgPtr, SL_Bus_geometry_msgs_Pose2D const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Pose2D* busPtr, const geometry_msgs::msg::Pose2D& msgPtr);

void convertFromBus(geometry_msgs::msg::Twist& msgPtr, SL_Bus_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Twist* busPtr, const geometry_msgs::msg::Twist& msgPtr);

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr);


#endif
