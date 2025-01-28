//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: spiral1.h
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
#ifndef spiral1_h_
#define spiral1_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros2_initialize.h"
#include "spiral1_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>

// Block signals (default storage)
struct B_spiral1_T {
  SL_Bus_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment'
  SL_Bus_geometry_msgs_Pose2D In1;     // '<S5>/In1'
  char_T b_zeroDelimTopic[17];
  sJ4ih70VmKcvCeguWN0mNVF deadline;
};

// Block states (default storage) for system '<Root>'
struct DW_spiral1_T {
  ros_slros2_internal_block_Pub_T obj; // '<S3>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_m;// '<S4>/SourceBlock'
};

// Real-time Model Data Structure
struct tag_RTM_spiral1_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Class declaration for model spiral1
class spiral1
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_spiral1_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  spiral1();

  // Destructor
  ~spiral1();

  // private data and function members
 private:
  // Block signals
  B_spiral1_T spiral1_B;

  // Block states
  DW_spiral1_T spiral1_DW;

  // private member function(s) for subsystem '<Root>'
  void spiral1_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T *obj);
  void spiral1_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_spiral1_T spiral1_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination


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
//  '<Root>' : 'spiral1'
//  '<S1>'   : 'spiral1/Blank Message'
//  '<S2>'   : 'spiral1/GetRadius'
//  '<S3>'   : 'spiral1/Publish'
//  '<S4>'   : 'spiral1/Subscribe'
//  '<S5>'   : 'spiral1/Subscribe/Enabled Subsystem'

#endif                                 // spiral1_h_

//
// File trailer for generated code.
//
// [EOF]
//
