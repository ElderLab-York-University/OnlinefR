/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "hmmParameters.h"
#include "abs.h"

/* Function Definitions */
void b_abs(const real_T x[40], real_T y[40])
{
  int32_T k;
  for (k = 0; k < 40; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void c_abs(const real_T x[181], real_T y[181])
{
  int32_T k;
  for (k = 0; k < 181; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

/* End of code generation (abs.c) */
