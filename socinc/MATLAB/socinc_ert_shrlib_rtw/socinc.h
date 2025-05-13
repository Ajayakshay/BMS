/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: socinc.h
 *
 * Code generated for Simulink model 'socinc'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 13 16:14:48 2025
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef socinc_h_
#define socinc_h_
#ifndef socinc_COMMON_INCLUDES_
#define socinc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* socinc_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>/SOC Estimator (Coulomb Counting)' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S3>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S3>/Integrator' */
} DW_CoreSubsys;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  DW_CoreSubsys CoreSubsys[1];   /* '<Root>/SOC Estimator (Coulomb Counting)' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T CurrentInput;                 /* '<Root>/Current Input' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T SoCoutput;                    /* '<Root>/SoC output' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void socinc_initialize(void);
extern void socinc_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'socinc'
 * '<S1>'   : 'socinc/SOC Estimator (Coulomb Counting)'
 * '<S2>'   : 'socinc/SOC Estimator (Coulomb Counting)/Integrator'
 * '<S3>'   : 'socinc/SOC Estimator (Coulomb Counting)/Integrator/Discrete'
 */
#endif                                 /* socinc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
