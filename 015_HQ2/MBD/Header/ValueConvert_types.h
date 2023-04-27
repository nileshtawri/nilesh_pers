/*
 * File: ValueConvert_types.h
 *
 * Code generated for Simulink model 'ValueConvert'.
 *
 * Model version                  : 1.189
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu May 26 13:49:01 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ValueConvert_types_h_
#define RTW_HEADER_ValueConvert_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_ConversionParameter_
#define DEFINED_TYPEDEF_FOR_ConversionParameter_

typedef struct {
  uint16_T Conversion;
  real32_T Offset;
  real32_T Gain;
  real32_T CaliOffset;
  real32_T CaliGain;
  boolean_T FilterEnable;
  real32_T FilterA;
} ConversionParameter;

#endif
#endif                                 /* RTW_HEADER_ValueConvert_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */