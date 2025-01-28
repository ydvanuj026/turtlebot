//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: trajectory1.h
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
#ifndef trajectory1_h_
#define trajectory1_h_
#include "rtwtypes.h"
#include "slros2_initialize.h"
#include "trajectory1_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>

// Block signals (default storage)
struct B_trajectory1_T {
  SL_Bus_nav_msgs_Odometry In1;        // '<S5>/In1'
  SL_Bus_nav_msgs_Odometry rtb_SourceBlock_o2_m;
  SL_Bus_geometry_msgs_Twist BusAssignment1;// '<S4>/Bus Assignment1'
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF deadline_c;
};

// Block states (default storage) for system '<Root>'
struct DW_trajectory1_T {
  ros_slros2_internal_block_Sub_T obj; // '<S3>/SourceBlock'
  ros_slros2_internal_block_Pub_T obj_g;// '<S7>/SinkBlock'
  real_T direction;                    // '<Root>/Conversion1'
};

// Real-time Model Data Structure
struct tag_RTM_trajectory1_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Class declaration for model trajectory1
class trajectory1
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_trajectory1_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  trajectory1();

  // Destructor
  ~trajectory1();

  // private data and function members
 private:
  // Block signals
  B_trajectory1_T trajectory1_B;

  // Block states
  DW_trajectory1_T trajectory1_DW;

  // private member function(s) for subsystem '<Root>'
  void trajectory1_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T
    *obj);
  void trajectory_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);

  // Real-Time Model
  RT_MODEL_trajectory1_T trajectory1_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'trajectory1'
//  '<S1>'   : 'trajectory1/Conversion'
//  '<S2>'   : 'trajectory1/Conversion1'
//  '<S3>'   : 'trajectory1/Subscribe1'
//  '<S4>'   : 'trajectory1/Subsystem'
//  '<S5>'   : 'trajectory1/Subscribe1/Enabled Subsystem'
//  '<S6>'   : 'trajectory1/Subsystem/Blank Message1'
//  '<S7>'   : 'trajectory1/Subsystem/Publish'

#endif                                 // trajectory1_h_

//
// File trailer for generated code.
//
// [EOF]
//
