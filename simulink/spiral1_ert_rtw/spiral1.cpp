//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: spiral1.cpp
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
#include "spiral1.h"
#include "spiral1_types.h"
#include <string.h>
#include "spiral1_private.h"
#include <math.h>
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

void spiral1::spiral1_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/turtle1/pose";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S4>/SourceBlock'
  spiral1_B.deadline.sec = 0.0;
  spiral1_B.deadline.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE, spiral1_B.deadline,
                 lifespan, RMW_QOS_POLICY_LIVELINESS_AUTOMATIC,
                 liveliness_lease_duration, (bool)
                 obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S4>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_spiral1_4.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
}

void spiral1::spiral1_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T *
  obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  static const char_T b_zeroDelimTopic[17] = "/turtle1/cmd_vel";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S3>/SinkBlock'
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
    // Start for MATLABSystem: '<S3>/SinkBlock'
    spiral1_B.b_zeroDelimTopic[i] = b_zeroDelimTopic[i];
  }

  Pub_spiral1_9.createPublisher(&spiral1_B.b_zeroDelimTopic[0], qos_profile);
}

// Model step function
void spiral1::step()
{
  SL_Bus_geometry_msgs_Pose2D rtb_SourceBlock_o2_0;
  boolean_T b_varargout_1;

  // BusAssignment: '<Root>/Bus Assignment'
  memset(&spiral1_B.BusAssignment, 0, sizeof(SL_Bus_geometry_msgs_Twist));

  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_spiral1_4.getLatestMessage(&rtb_SourceBlock_o2_0);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  // Start for MATLABSystem: '<S4>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S5>/In1'
    spiral1_B.In1 = rtb_SourceBlock_o2_0;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/sampling time'
  //   Constant: '<Root>/x1'
  //   Constant: '<S2>/x0'
  //   Constant: '<S2>/y0'
  //   Fcn: '<S2>/Fcn'
  //   Product: '<Root>/Divide'
  //   Sum: '<Root>/Add'
  //   Sum: '<S2>/Add'
  //   Sum: '<S2>/Add1'

  spiral1_B.BusAssignment.linear.x = 2.0;
  spiral1_B.BusAssignment.angular.z = (sqrt(rt_powd_snf(5.54445 -
    spiral1_B.In1.x, 2.0) + rt_powd_snf(5.54445 - spiral1_B.In1.y, 2.0)) -
    spiral1_B.In1.theta) / 0.1;

  // MATLABSystem: '<S3>/SinkBlock'
  Pub_spiral1_9.publish(&spiral1_B.BusAssignment);
}

// Model initialize function
void spiral1::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // Start for MATLABSystem: '<S4>/SourceBlock'
  spiral1_DW.obj_m.QOSAvoidROSNamespaceConventions = false;
  spiral1_DW.obj_m.matlabCodegenIsDeleted = false;
  spiral1_DW.obj_m.isSetupComplete = false;
  spiral1_DW.obj_m.isInitialized = 1;
  spiral1_Subscriber_setupImpl(&spiral1_DW.obj_m);
  spiral1_DW.obj_m.isSetupComplete = true;

  // Start for MATLABSystem: '<S3>/SinkBlock'
  spiral1_DW.obj.QOSAvoidROSNamespaceConventions = false;
  spiral1_DW.obj.matlabCodegenIsDeleted = false;
  spiral1_DW.obj.isSetupComplete = false;
  spiral1_DW.obj.isInitialized = 1;
  spiral1_Publisher_setupImpl(&spiral1_DW.obj);
  spiral1_DW.obj.isSetupComplete = true;
}

// Model terminate function
void spiral1::terminate()
{
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!spiral1_DW.obj_m.matlabCodegenIsDeleted) {
    spiral1_DW.obj_m.matlabCodegenIsDeleted = true;
    if ((spiral1_DW.obj_m.isInitialized == 1) &&
        spiral1_DW.obj_m.isSetupComplete) {
      Sub_spiral1_4.resetSubscriberPtr();//();
    }
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'

  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!spiral1_DW.obj.matlabCodegenIsDeleted) {
    spiral1_DW.obj.matlabCodegenIsDeleted = true;
    if ((spiral1_DW.obj.isInitialized == 1) && spiral1_DW.obj.isSetupComplete) {
      Pub_spiral1_9.resetPublisherPtr();//();
    }
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
}

// Constructor
spiral1::spiral1() :
  spiral1_B(),
  spiral1_DW(),
  spiral1_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
spiral1::~spiral1()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_spiral1_T * spiral1::getRTM()
{
  return (&spiral1_M);
}

const char_T* RT_MODEL_spiral1_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_spiral1_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
