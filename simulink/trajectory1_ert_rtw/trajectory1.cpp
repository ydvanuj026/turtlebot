//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: trajectory1.cpp
//
// Code generated for Simulink model 'trajectory1'.
//
// Model version                  : 1.7
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Jan 27 16:26:37 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "trajectory1.h"
#include "trajectory1_types.h"
#include <math.h>
#include "trajectory1_private.h"
#include <string.h>
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

void trajectory1::trajectory1_Publisher_setupImpl(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[9];
  static const char_T b_zeroDelimTopic_0[9] = "/cmd_vel";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S7>/SinkBlock'
  trajectory1_B.deadline.sec = 0.0;
  trajectory1_B.deadline.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE, trajectory1_B.deadline,
                 lifespan, RMW_QOS_POLICY_LIVELINESS_AUTOMATIC,
                 liveliness_lease_duration, (bool)
                 obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 9; i++) {
    // Start for MATLABSystem: '<S7>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_untitled_14.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

void trajectory1::trajectory_Subscriber_setupImpl(const
  ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[6];
  static const char_T b_zeroDelimTopic_0[6] = "/odom";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S3>/SourceBlock'
  trajectory1_B.deadline_c.sec = 0.0;
  trajectory1_B.deadline_c.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE, trajectory1_B.deadline_c,
                 lifespan, RMW_QOS_POLICY_LIVELINESS_AUTOMATIC,
                 liveliness_lease_duration, (bool)
                 obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 6; i++) {
    // Start for MATLABSystem: '<S3>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_trajectory1_5.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
}

// Model step function
void trajectory1::step()
{
  real_T a;
  real_T b_b;
  real_T b_tmp;
  real_T y_idx_1;
  real_T y_idx_2;
  boolean_T b_varargout_1;

  // MATLABSystem: '<S3>/SourceBlock'
  b_varargout_1 = Sub_trajectory1_5.getLatestMessage
    (&trajectory1_B.rtb_SourceBlock_o2_m);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  // Start for MATLABSystem: '<S3>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S5>/In1'
    trajectory1_B.In1 = trajectory1_B.rtb_SourceBlock_o2_m;
  }

  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'

  // MATLAB Function: '<Root>/Conversion'
  b_b = 1.0 / sqrt(((trajectory1_B.In1.pose.pose.orientation.w *
                     trajectory1_B.In1.pose.pose.orientation.w +
                     trajectory1_B.In1.pose.pose.orientation.x *
                     trajectory1_B.In1.pose.pose.orientation.x) +
                    trajectory1_B.In1.pose.pose.orientation.y *
                    trajectory1_B.In1.pose.pose.orientation.y) +
                   trajectory1_B.In1.pose.pose.orientation.z *
                   trajectory1_B.In1.pose.pose.orientation.z);
  a = trajectory1_B.In1.pose.pose.orientation.w * b_b;
  y_idx_1 = trajectory1_B.In1.pose.pose.orientation.x * b_b;
  y_idx_2 = trajectory1_B.In1.pose.pose.orientation.y * b_b;
  b_b *= trajectory1_B.In1.pose.pose.orientation.z;
  b_tmp = y_idx_1 * b_b * 2.0 - a * y_idx_2 * 2.0;
  if (b_tmp > 1.0) {
    b_tmp = 1.0;
  }

  if (b_tmp < -1.0) {
    b_tmp = -1.0;
  }

  if ((b_tmp < 0.0) && (fabs(b_tmp + 1.0) < 2.2204460492503131E-15)) {
    a = -2.0 * rt_atan2d_snf(y_idx_1, a);
  } else if (b_tmp > 0.0) {
    if (fabs(b_tmp - 1.0) < 2.2204460492503131E-15) {
      a = 2.0 * rt_atan2d_snf(y_idx_1, a);
    } else {
      a = rt_atan2d_snf(a * b_b * 2.0 + y_idx_1 * y_idx_2 * 2.0, (a * a * 2.0 -
        1.0) + y_idx_1 * y_idx_1 * 2.0);
    }
  } else {
    a = rt_atan2d_snf(a * b_b * 2.0 + y_idx_1 * y_idx_2 * 2.0, (a * a * 2.0 -
      1.0) + y_idx_1 * y_idx_1 * 2.0);
  }

  // MATLAB Function: '<Root>/Conversion1' incorporates:
  //   MATLAB Function: '<Root>/Conversion'

  if (a >= 3.0) {
    a = -0.5;
    trajectory1_DW.direction = -1.0;
  } else if (a <= -3.0) {
    a = 0.5;
    trajectory1_DW.direction = 1.0;
  } else {
    a = 0.5 * trajectory1_DW.direction;
  }

  // End of MATLAB Function: '<Root>/Conversion1'

  // Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Start for MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   BusAssignment: '<S4>/Bus Assignment1'

  if (b_varargout_1) {
    memset(&trajectory1_B.BusAssignment1, 0, sizeof(SL_Bus_geometry_msgs_Twist));

    // BusAssignment: '<S4>/Bus Assignment1' incorporates:
    //   Constant: '<S4>/Constant'

    trajectory1_B.BusAssignment1.linear.x = 1.0;
    trajectory1_B.BusAssignment1.angular.z = a;

    // MATLABSystem: '<S7>/SinkBlock'
    Pub_untitled_14.publish(&trajectory1_B.BusAssignment1);
  }

  // End of Outputs for SubSystem: '<Root>/Subsystem'
}

// Model initialize function
void trajectory1::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // SystemInitialize for MATLAB Function: '<Root>/Conversion1'
  trajectory1_DW.direction = 1.0;

  // SystemInitialize for Enabled SubSystem: '<Root>/Subsystem'
  // Start for MATLABSystem: '<S7>/SinkBlock'
  trajectory1_DW.obj_g.QOSAvoidROSNamespaceConventions = false;
  trajectory1_DW.obj_g.matlabCodegenIsDeleted = false;
  trajectory1_DW.obj_g.isSetupComplete = false;
  trajectory1_DW.obj_g.isInitialized = 1;
  trajectory1_Publisher_setupImpl(&trajectory1_DW.obj_g);
  trajectory1_DW.obj_g.isSetupComplete = true;

  // End of SystemInitialize for SubSystem: '<Root>/Subsystem'

  // Start for MATLABSystem: '<S3>/SourceBlock'
  trajectory1_DW.obj.QOSAvoidROSNamespaceConventions = false;
  trajectory1_DW.obj.matlabCodegenIsDeleted = false;
  trajectory1_DW.obj.isSetupComplete = false;
  trajectory1_DW.obj.isInitialized = 1;
  trajectory_Subscriber_setupImpl(&trajectory1_DW.obj);
  trajectory1_DW.obj.isSetupComplete = true;
}

// Model terminate function
void trajectory1::terminate()
{
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!trajectory1_DW.obj.matlabCodegenIsDeleted) {
    trajectory1_DW.obj.matlabCodegenIsDeleted = true;
    if ((trajectory1_DW.obj.isInitialized == 1) &&
        trajectory1_DW.obj.isSetupComplete) {
      Sub_trajectory1_5.resetSubscriberPtr();//();
    }
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'

  // Terminate for Enabled SubSystem: '<Root>/Subsystem'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!trajectory1_DW.obj_g.matlabCodegenIsDeleted) {
    trajectory1_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((trajectory1_DW.obj_g.isInitialized == 1) &&
        trajectory1_DW.obj_g.isSetupComplete) {
      Pub_untitled_14.resetPublisherPtr();//();
    }
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Subsystem'
}

// Constructor
trajectory1::trajectory1() :
  trajectory1_B(),
  trajectory1_DW(),
  trajectory1_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
trajectory1::~trajectory1()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_trajectory1_T * trajectory1::getRTM()
{
  return (&trajectory1_M);
}

const char_T* RT_MODEL_trajectory1_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_trajectory1_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
