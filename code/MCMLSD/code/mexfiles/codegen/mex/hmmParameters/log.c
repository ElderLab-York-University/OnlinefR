/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "hmmParameters.h"
#include "log.h"
#include "error.h"
#include "hmmParameters_data.h"

/* Function Definitions */
void b_log(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &l_emlrtRSI;
    b_error(&st);
  }

  *x = muDoubleScalarLog(*x);
}

/* End of code generation (log.c) */
