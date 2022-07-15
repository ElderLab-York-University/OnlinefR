/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hmmParameters_api.c
 *
 * Code generation for function '_coder_hmmParameters_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hmmParameters.h"
#include "_coder_hmmParameters_api.h"
#include "hmmParameters_emxutil.h"
#include "hmmParameters_data.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_hmmParameters_api",          /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[40];
static const mxArray *b_emlrt_marshallOut(const real_T u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ang_dev_on, const char_T *identifier))[181];
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[181];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *node_idx,
  const char_T *identifier, emxArray_real_T *y);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *exist_edge_on, const char_T *identifier))[40];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Psi_t,
  const char_T *identifier))[4];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *pi_var,
  const char_T *identifier))[2];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *prob_on,
  const char_T *identifier);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[181];
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[40]
{
  real_T (*y)[40];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ang_dev_on, const char_T *identifier))[181]
{
  real_T (*y)[181];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ang_dev_on), &thisId);
  emlrtDestroyArray(&ang_dev_on);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv1[1] = { 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(1, iv1, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m2, u->size, 1);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[181]
{
  real_T (*y)[181];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *node_idx,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(node_idx), &thisId, y);
  emlrtDestroyArray(&node_idx);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *exist_edge_on, const char_T *identifier))[40]
{
  real_T (*y)[40];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(exist_edge_on), &thisId);
  emlrtDestroyArray(&exist_edge_on);
  return y;
}
  static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Psi_t,
  const char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(Psi_t), &thisId);
  emlrtDestroyArray(&Psi_t);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *pi_var,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(pi_var), &thisId);
  emlrtDestroyArray(&pi_var);
  return y;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *prob_on,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(prob_on), &thisId);
  emlrtDestroyArray(&prob_on);
  return y;
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40]
{
  real_T (*ret)[40];
  static const int32_T dims[2] = { 1, 40 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[40])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[181]
{
  real_T (*ret)[181];
  static const int32_T dims[2] = { 1, 181 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[181])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv2[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  static const int32_T dims[2] = { 2, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void hmmParameters_api(const mxArray * const prhs[20], int32_T nlhs, const
  mxArray *plhs[6])
{
  emxArray_real_T *node_idx;
  emxArray_real_T *y_h;
  emxArray_real_T *distances;
  emxArray_real_T *ang_dev;
  emxArray_real_T *alpha_t;
  emxArray_real_T *obslik;
  emxArray_real_T *DP_table;
  emxArray_real_T *aux_table;
  emxArray_real_T *z;
  real_T (*exist_edge_on)[40];
  real_T (*exist_edge_off)[40];
  real_T (*ang_dev_on)[181];
  real_T (*ang_dev_off)[181];
  real_T (*Psi_t)[4];
  real_T (*pi_var)[2];
  real_T (*range_dis)[40];
  real_T (*nexist_edge_on)[40];
  real_T (*nexist_edge_off)[40];
  real_T prob_on;
  real_T prob_off;
  real_T prob_stay_on;
  real_T prob_leave_off;
  real_T prob_leave_on;
  real_T prob_stay_off;
  real_T (*range_ang)[181];
  real_T T;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &node_idx, 1, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &y_h, 1, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &distances, 1, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &ang_dev, 1, &f_emlrtRTEI, true);
  emxInit_real_T1(&st, &alpha_t, 2, &f_emlrtRTEI, true);
  emxInit_real_T1(&st, &obslik, 2, &f_emlrtRTEI, true);
  emxInit_real_T1(&st, &DP_table, 2, &f_emlrtRTEI, true);
  emxInit_real_T1(&st, &aux_table, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &z, 1, &f_emlrtRTEI, true);

  /* Marshall function inputs */
  exist_edge_on = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "exist_edge_on");
  exist_edge_off = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "exist_edge_off");
  ang_dev_on = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ang_dev_on");
  ang_dev_off = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "ang_dev_off");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "node_idx", node_idx);
  Psi_t = g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "Psi_t");
  pi_var = i_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "pi_var");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "y_h", y_h);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "distances", distances);
  range_dis = emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "range_dis");
  nexist_edge_on = emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "nexist_edge_on");
  nexist_edge_off = emlrt_marshallIn(&st, emlrtAlias(prhs[11]),
    "nexist_edge_off");
  prob_on = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "prob_on");
  prob_off = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "prob_off");
  prob_stay_on = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "prob_stay_on");
  prob_leave_off = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]),
    "prob_leave_off");
  prob_leave_on = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "prob_leave_on");
  prob_stay_off = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "prob_stay_off");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[18]), "ang_dev", ang_dev);
  range_ang = c_emlrt_marshallIn(&st, emlrtAlias(prhs[19]), "range_ang");

  /* Invoke the target function */
  hmmParameters(&st, *exist_edge_on, *exist_edge_off, *ang_dev_on, *ang_dev_off,
                node_idx, *Psi_t, *pi_var, y_h, distances, *range_dis,
                *nexist_edge_on, *nexist_edge_off, prob_on, prob_off,
                prob_stay_on, prob_leave_off, prob_leave_on, prob_stay_off,
                ang_dev, *range_ang, alpha_t, obslik, &T, DP_table, aux_table, z);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(alpha_t);
  alpha_t->canFreeData = false;
  emxFree_real_T(&st, &alpha_t);
  ang_dev->canFreeData = false;
  emxFree_real_T(&st, &ang_dev);
  distances->canFreeData = false;
  emxFree_real_T(&st, &distances);
  y_h->canFreeData = false;
  emxFree_real_T(&st, &y_h);
  node_idx->canFreeData = false;
  emxFree_real_T(&st, &node_idx);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(obslik);
  }

  obslik->canFreeData = false;
  emxFree_real_T(&st, &obslik);
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(T);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(DP_table);
  }

  DP_table->canFreeData = false;
  emxFree_real_T(&st, &DP_table);
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(aux_table);
  }

  aux_table->canFreeData = false;
  emxFree_real_T(&st, &aux_table);
  if (nlhs > 5) {
    plhs[5] = c_emlrt_marshallOut(z);
  }

  z->canFreeData = false;
  emxFree_real_T(&st, &z);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_hmmParameters_api.c) */
