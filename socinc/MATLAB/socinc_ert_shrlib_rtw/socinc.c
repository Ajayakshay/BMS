/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: socinc.c
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

#include "socinc.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void socinc_step(void)
{
  real_T rtb_ImpAsg_InsertedFor_SOC_at_i;

  /* Outputs for Iterator SubSystem: '<Root>/SOC Estimator (Coulomb Counting)' incorporates:
   *  ForEach: '<S1>/For Each'
   */
  /* DiscreteIntegrator: '<S3>/Integrator' incorporates:
   *  Constant: '<Root>/Constant'
   *  ForEachSliceSelector generated from: '<S1>/InitialSOC'
   */
  if (rtDW.CoreSubsys[0].Integrator_IC_LOADING != 0) {
    rtDW.CoreSubsys[0].Integrator_DSTATE = 1.0;
  }

  /* ForEachSliceAssignment generated from: '<S1>/SOC' incorporates:
   *  DiscreteIntegrator: '<S3>/Integrator'
   */
  rtb_ImpAsg_InsertedFor_SOC_at_i = rtDW.CoreSubsys[0].Integrator_DSTATE;

  /* Update for DiscreteIntegrator: '<S3>/Integrator' incorporates:
   *  Gain: '<Root>/Gain'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/Current Input'
   */
  rtDW.CoreSubsys[0].Integrator_IC_LOADING = 0U;
  rtDW.CoreSubsys[0].Integrator_DSTATE += 1.02880658436214E-5 *
    -rtU.CurrentInput;

  /* End of Outputs for SubSystem: '<Root>/SOC Estimator (Coulomb Counting)' */

  /* Outport: '<Root>/SoC output' incorporates:
   *  Gain: '<Root>/Gain1'
   */
  rtY.SoCoutput = 100.0 * rtb_ImpAsg_InsertedFor_SOC_at_i;
}

/* Model initialize function */
void socinc_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/SOC Estimator (Coulomb Counting)' */
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Integrator' */
  rtDW.CoreSubsys[0].Integrator_IC_LOADING = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/SOC Estimator (Coulomb Counting)' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
