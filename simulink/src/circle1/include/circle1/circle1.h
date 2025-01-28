//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: circle1.h
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
#ifndef circle1_h_
#define circle1_h_
#include "rtwtypes.h"
#include "slros2_initialize.h"
#include "circle1_types.h"
#include <stddef.h>

// Block signals (default storage)
struct B_circle1_T {
  char_T b_zeroDelimTopic[17];
};

// Block states (default storage) for system '<Root>'
struct DW_circle1_T {
  ros_slros2_internal_block_Pub_T obj; // '<S2>/SinkBlock'
};

// Real-time Model Data Structure
struct tag_RTM_circle1_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Class declaration for model circle1
class circle1
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_circle1_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  circle1();

  // Destructor
  ~circle1();

  // private data and function members
 private:
  // Block signals
  B_circle1_T circle1_B;

  // Block states
  DW_circle1_T circle1_DW;

  // private member function(s) for subsystem '<Root>'
  void circle1_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_circle1_T circle1_M;
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
//  '<Root>' : 'circle1'
//  '<S1>'   : 'circle1/Blank Message'
//  '<S2>'   : 'circle1/Publish'

#endif                                 // circle1_h_

//
// File trailer for generated code.
//
// [EOF]
//
