//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: circle1.cpp
//
// Code generated for Simulink model 'circle1'.
//
// Model version                  : 1.1
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Jan 10 17:44:42 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "circle1.h"
#include "circle1_types.h"
#include <string.h>
#include "rmw/qos_profiles.h"
#include "rtwtypes.h"
#include <stddef.h>

void circle1::circle1_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T *
  obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  static const char_T b_zeroDelimTopic[17] = "/turtle1/cmd_vel";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S2>/SinkBlock'
  deadline.sec = 0.0;
  deadline.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE, deadline, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 17; i++) {
    // Start for MATLABSystem: '<S2>/SinkBlock'
    circle1_B.b_zeroDelimTopic[i] = b_zeroDelimTopic[i];
  }

  Pub_untitled_3.createPublisher(&circle1_B.b_zeroDelimTopic[0], qos_profile);
}

// Model step function
void circle1::step()
{
  SL_Bus_geometry_msgs_Twist rtb_BusAssignment;

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant1'

  memset(&rtb_BusAssignment, 0, sizeof(SL_Bus_geometry_msgs_Twist));
  rtb_BusAssignment.linear.x = 2.0;
  rtb_BusAssignment.angular.z = 1.0;

  // MATLABSystem: '<S2>/SinkBlock'
  Pub_untitled_3.publish(&rtb_BusAssignment);
}

// Model initialize function
void circle1::initialize()
{
  // Start for MATLABSystem: '<S2>/SinkBlock'
  circle1_DW.obj.QOSAvoidROSNamespaceConventions = false;
  circle1_DW.obj.matlabCodegenIsDeleted = false;
  circle1_DW.obj.isSetupComplete = false;
  circle1_DW.obj.isInitialized = 1;
  circle1_Publisher_setupImpl(&circle1_DW.obj);
  circle1_DW.obj.isSetupComplete = true;
}

// Model terminate function
void circle1::terminate()
{
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!circle1_DW.obj.matlabCodegenIsDeleted) {
    circle1_DW.obj.matlabCodegenIsDeleted = true;
    if ((circle1_DW.obj.isInitialized == 1) && circle1_DW.obj.isSetupComplete) {
      Pub_untitled_3.resetPublisherPtr();//();
    }
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
}

// Constructor
circle1::circle1() :
  circle1_B(),
  circle1_DW(),
  circle1_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
circle1::~circle1()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_circle1_T * circle1::getRTM()
{
  return (&circle1_M);
}

const char_T* RT_MODEL_circle1_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_circle1_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
