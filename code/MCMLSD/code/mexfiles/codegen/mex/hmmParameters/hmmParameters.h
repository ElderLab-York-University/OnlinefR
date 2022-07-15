/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hmmParameters.h
 *
 * Code generation for function 'hmmParameters'
 *
 */

#ifndef HMMPARAMETERS_H
#define HMMPARAMETERS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "hmmParameters_types.h"

/* Function Declarations */
extern void hmmParameters(const emlrtStack *sp, const real_T exist_edge_on[40],
  const real_T exist_edge_off[40], const real_T ang_dev_on[181], const real_T
  ang_dev_off[181], const emxArray_real_T *node_idx, const real_T Psi_t[4],
  const real_T pi_var[2], const emxArray_real_T *y_h, const emxArray_real_T
  *distances, const real_T range_dis[40], const real_T nexist_edge_on[40], const
  real_T nexist_edge_off[40], real_T prob_on, real_T prob_off, real_T
  prob_stay_on, real_T prob_leave_off, real_T prob_leave_on, real_T
  prob_stay_off, const emxArray_real_T *ang_dev, const real_T range_ang[181],
  emxArray_real_T *alpha_t, emxArray_real_T *obslik, real_T *T, emxArray_real_T *
  DP_table, emxArray_real_T *aux_table, emxArray_real_T *z);

#endif

/* End of code generation (hmmParameters.h) */
