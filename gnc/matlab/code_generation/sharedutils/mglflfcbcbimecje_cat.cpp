//
// File: mglflfcbcbimecje_cat.cpp
//
// Code generated for Simulink model 'sim_model_lib0'.
//
// Model version                  : 1.1139
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Wed May 17 14:43:55 2017
//
#include "rtwtypes.h"
#include "mglflfcbcbimecje_cat.h"

// Function for MATLAB Function: '<S47>/generate_output'
void mglflfcbcbimecje_cat(const uint8_T varargin_2[750], uint8_T y[800])
{
  int32_T iy;
  int32_T j;
  iy = -1;
  for (j = 0; j < 50; j++) {
    iy++;
    y[iy] = 0U;
  }

  for (j = 0; j < 750; j++) {
    iy++;
    y[iy] = varargin_2[j];
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
