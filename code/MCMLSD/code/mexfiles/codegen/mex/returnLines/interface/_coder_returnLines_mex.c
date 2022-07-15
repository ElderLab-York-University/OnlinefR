/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_returnLines_mex.c
 *
 * Code generation for function '_coder_returnLines_mex'
 *
 */

/* Include files */
#include "_coder_returnLines_mex.h"
#include "_coder_returnLines_api.h"
#include "returnLines_data.h"
#include "returnLines_initialize.h"
#include "returnLines_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&returnLines_atexit);
  /* Module initialization. */
  returnLines_initialize();
  /* Dispatch the entry-point. */
  returnLines_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  returnLines_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void returnLines_mexFunction(int32_T nlhs, mxArray *plhs[5], int32_T nrhs,
                             const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[5];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        11, "returnLines");
  }
  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "returnLines");
  }
  /* Call the function. */
  returnLines_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_returnLines_mex.c) */
