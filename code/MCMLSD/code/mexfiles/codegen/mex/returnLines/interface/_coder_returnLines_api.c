/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_returnLines_api.c
 *
 * Code generation for function '_coder_returnLines_api'
 *
 */

/* Include files */
#include "_coder_returnLines_api.h"
#include "returnLines.h"
#include "returnLines_data.h"
#include "returnLines_emxutil.h"
#include "returnLines_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    1,                        /* lineNo */
    1,                        /* colNo */
    "_coder_returnLines_api", /* fName */
    ""                        /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T *u_size);

static void c_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *final_labels,
                               const char_T *identifier, emxArray_real_T *y);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *points_proj,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2]);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T *u_size)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *final_labels,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(final_labels), &thisId, y);
  emlrtDestroyArray(&final_labels);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, 2};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, false};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *points_proj,
                             const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(points_proj), &thisId, y);
  emlrtDestroyArray(&points_proj);
}

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2])
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u_size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void returnLines_api(const mxArray *const prhs[2], int32_T nlhs,
                     const mxArray *plhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *final_labels;
  emxArray_real_T *points_proj;
  real_T(*begin_points_data)[60];
  real_T(*end_points_data)[60];
  real_T(*endpositions_data)[30];
  real_T(*lslength_data)[30];
  real_T(*startpositions_data)[30];
  int32_T begin_points_size[2];
  int32_T end_points_size[2];
  int32_T endpositions_size;
  int32_T lslength_size;
  int32_T startpositions_size;
  st.tls = emlrtRootTLSGlobal;
  begin_points_data = (real_T(*)[60])mxMalloc(sizeof(real_T[60]));
  end_points_data = (real_T(*)[60])mxMalloc(sizeof(real_T[60]));
  lslength_data = (real_T(*)[30])mxMalloc(sizeof(real_T[30]));
  startpositions_data = (real_T(*)[30])mxMalloc(sizeof(real_T[30]));
  endpositions_data = (real_T(*)[30])mxMalloc(sizeof(real_T[30]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &points_proj, 2, &emlrtRTEI, true);
  emxInit_real_T(&st, &final_labels, 2, &emlrtRTEI, true);
  /* Marshall function inputs */
  points_proj->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "points_proj", points_proj);
  final_labels->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "final_labels", final_labels);
  /* Invoke the target function */
  returnLines(&st, points_proj, final_labels, *begin_points_data,
              begin_points_size, *end_points_data, end_points_size,
              *lslength_data, *(int32_T(*)[1]) & lslength_size,
              *startpositions_data, *(int32_T(*)[1]) & startpositions_size,
              *endpositions_data, *(int32_T(*)[1]) & endpositions_size);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*begin_points_data, begin_points_size);
  emxFree_real_T(&final_labels);
  emxFree_real_T(&points_proj);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*end_points_data, end_points_size);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(*lslength_data, &lslength_size);
  }
  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(*startpositions_data, &startpositions_size);
  }
  if (nlhs > 4) {
    plhs[4] = b_emlrt_marshallOut(*endpositions_data, &endpositions_size);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_returnLines_api.c) */
