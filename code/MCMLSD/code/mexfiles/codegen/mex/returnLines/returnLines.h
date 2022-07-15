/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * returnLines.h
 *
 * Code generation for function 'returnLines'
 *
 */

#pragma once

/* Include files */
#include "returnLines_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void returnLines(const emlrtStack *sp, const emxArray_real_T *points_proj,
                 const emxArray_real_T *final_labels,
                 real_T begin_points_data[], int32_T begin_points_size[2],
                 real_T end_points_data[], int32_T end_points_size[2],
                 real_T lslength_data[], int32_T lslength_size[1],
                 real_T startpositions_data[], int32_T startpositions_size[1],
                 real_T endpositions_data[], int32_T endpositions_size[1]);

/* End of code generation (returnLines.h) */
