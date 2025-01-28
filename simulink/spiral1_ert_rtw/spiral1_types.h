//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: spiral1_types.h
//
// Code generated for Simulink model 'spiral1'.
//
// Model version                  : 1.1
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Jan 10 16:53:49 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef spiral1_types_h_
#define spiral1_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Pose2D_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Pose2D_

// MsgType=geometry_msgs/Pose2D
struct SL_Bus_geometry_msgs_Pose2D
{
  real_T x;
  real_T y;
  real_T theta;
};

#endif

// Custom Type definition for MATLABSystem: '<S4>/SourceBlock'
#include "rmw/qos_profiles.h"
#ifndef struct_sJ4ih70VmKcvCeguWN0mNVF
#define struct_sJ4ih70VmKcvCeguWN0mNVF

struct sJ4ih70VmKcvCeguWN0mNVF
{
  real_T sec;
  real_T nsec;
};

#endif                                 // struct_sJ4ih70VmKcvCeguWN0mNVF

#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // struct_ros_slros2_internal_block_Pub_T

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

// Forward declaration for rtModel
typedef struct tag_RTM_spiral1_T RT_MODEL_spiral1_T;

#endif                                 // spiral1_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
