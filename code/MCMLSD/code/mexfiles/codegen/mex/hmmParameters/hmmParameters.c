/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hmmParameters.c
 *
 * Code generation for function 'hmmParameters'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "hmmParameters.h"
#include "hmmParameters_emxutil.h"
#include "sum.h"
#include "error.h"
#include "abs.h"
#include "log.h"
#include "hmmParameters_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 24,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 25,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 46,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 47,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 69,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 80,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 81,  /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 109, /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 110, /* lineNo */
  "hmmParameters",                     /* fcnName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 12,  /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "D:\\Programs\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  8,                                   /* colNo */
  "y_h",                               /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  35,                                  /* colNo */
  "distances",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  33,                                  /* colNo */
  "ang_dev",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  14,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  25,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  7,                                   /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  69,                                  /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  35,                                  /* colNo */
  "distances",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  25,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  7,                                   /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  69,                                  /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  12,                                  /* colNo */
  "y_h",                               /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  16,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  16,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  16,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  16,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  18,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  15,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  15,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  37,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  29,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  73,                                  /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  18,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  37,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  29,                                  /* colNo */
  "obslik",                            /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  73,                                  /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  19,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  19,                                  /* colNo */
  "alpha_t",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  29,                                  /* colNo */
  "distances",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  48,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  100,                                 /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  10,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  25,                                  /* colNo */
  "aux_table",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  48,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  101,                                 /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  10,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  25,                                  /* colNo */
  "aux_table",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  9,                                   /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  29,                                  /* colNo */
  "distances",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  29,                                  /* colNo */
  "ang_dev",                           /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  48,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  100,                                 /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  10,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  25,                                  /* colNo */
  "aux_table",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  48,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  101,                                 /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  10,                                  /* colNo */
  "DP_table",                          /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  25,                                  /* colNo */
  "aux_table",                         /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  9,                                   /* colNo */
  "z",                                 /* aName */
  "hmmParameters",                     /* fName */
  "D:\\Dropbox\\Dropbox\\PhD\\Single View Image 3D Reconstruction\\BuildingDataset\\MCMLSD\\code\\mexfiles\\hmmParameters.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void hmmParameters(const emlrtStack *sp, const real_T exist_edge_on[40], const
                   real_T exist_edge_off[40], const real_T ang_dev_on[181],
                   const real_T ang_dev_off[181], const emxArray_real_T
                   *node_idx, const real_T Psi_t[4], const real_T pi_var[2],
                   const emxArray_real_T *y_h, const emxArray_real_T *distances,
                   const real_T range_dis[40], const real_T nexist_edge_on[40],
                   const real_T nexist_edge_off[40], real_T prob_on, real_T
                   prob_off, real_T prob_stay_on, real_T prob_leave_off, real_T
                   prob_leave_on, real_T prob_stay_off, const emxArray_real_T
                   *ang_dev, const real_T range_ang[181], emxArray_real_T
                   *alpha_t, emxArray_real_T *obslik, real_T *T, emxArray_real_T
                   *DP_table, emxArray_real_T *aux_table, emxArray_real_T *z)
{
  int32_T i0;
  int32_T loop_ub;
  real_T b_distances;
  real_T c_distances[40];
  real_T varargin_1[40];
  int32_T idx;
  boolean_T exitg1;
  int32_T b_idx;
  real_T b_ang_dev[181];
  real_T b_varargin_1[181];
  real_T loc_on;
  real_T loc_off;
  real_T d0;
  real_T b_obslik[2];
  int32_T i;
  real_T predict[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  i0 = DP_table->size[0] * DP_table->size[1];
  DP_table->size[0] = 2;
  DP_table->size[1] = node_idx->size[0];
  emxEnsureCapacity_real_T(sp, DP_table, i0, &emlrtRTEI);
  loop_ub = node_idx->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    DP_table->data[i0] = 0.0;
  }

  i0 = aux_table->size[0] * aux_table->size[1];
  aux_table->size[0] = 2;
  aux_table->size[1] = node_idx->size[0];
  emxEnsureCapacity_real_T(sp, aux_table, i0, &b_emlrtRTEI);
  loop_ub = node_idx->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    aux_table->data[i0] = 0.0;
  }

  /*  aux_table(1,1) = -Inf; */
  /*  aux_table(2,1) = -Inf; */
  i0 = z->size[0];
  z->size[0] = node_idx->size[0];
  emxEnsureCapacity_real_T1(sp, z, i0, &c_emlrtRTEI);
  loop_ub = node_idx->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    z->data[i0] = 0.0;
  }

  /*  E.A. List of log evidences: sum(log(z)) from 1:t. */
  i0 = alpha_t->size[0] * alpha_t->size[1];
  alpha_t->size[0] = 2;
  alpha_t->size[1] = node_idx->size[0];
  emxEnsureCapacity_real_T(sp, alpha_t, i0, &d_emlrtRTEI);
  loop_ub = node_idx->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    alpha_t->data[i0] = 0.0;
  }

  /* E.A. 2x1 vector (on/off) of posterior prob.: e.g. alpha_1 = [p(x=on|x); p(x=off|x)] */
  i0 = obslik->size[0] * obslik->size[1];
  obslik->size[0] = 2;
  obslik->size[1] = node_idx->size[0];
  emxEnsureCapacity_real_T(sp, obslik, i0, &e_emlrtRTEI);
  loop_ub = node_idx->size[0] << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    obslik->data[i0] = 0.0;
  }

  /* E.A. 2x1 observation likelihood */
  i0 = y_h->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
  }

  st.site = &emlrtRSI;
  if (muDoubleScalarIsNaN(y_h->data[0])) {
    b_st.site = &k_emlrtRSI;
    error(&b_st);
  }

  if (y_h->data[0] != 0.0) {
    i0 = distances->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &b_emlrtBCI, sp);
    }

    b_distances = distances->data[0];
    for (i0 = 0; i0 < 40; i0++) {
      c_distances[i0] = b_distances - range_dis[i0];
    }

    b_abs(c_distances, varargin_1);
    if (!muDoubleScalarIsNaN(varargin_1[0])) {
      idx = 1;
    } else {
      idx = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub < 41)) {
        if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }

    if (idx != 0) {
      b_distances = varargin_1[idx - 1];
      b_idx = idx - 1;
      while (idx + 1 < 41) {
        if (b_distances > varargin_1[idx]) {
          b_distances = varargin_1[idx];
          b_idx = idx;
        }

        idx++;
      }

      idx = b_idx;
    }

    i0 = ang_dev->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &c_emlrtBCI, sp);
    }

    b_distances = ang_dev->data[0];
    for (i0 = 0; i0 < 181; i0++) {
      b_ang_dev[i0] = b_distances - range_ang[i0];
    }

    c_abs(b_ang_dev, b_varargin_1);
    if (!muDoubleScalarIsNaN(b_varargin_1[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub < 182)) {
        if (!muDoubleScalarIsNaN(b_varargin_1[loop_ub - 1])) {
          b_idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }

    if (b_idx != 0) {
      b_distances = b_varargin_1[b_idx - 1];
      loop_ub = b_idx - 1;
      while (b_idx + 1 < 182) {
        if (b_distances > b_varargin_1[b_idx]) {
          b_distances = b_varargin_1[b_idx];
          loop_ub = b_idx;
        }

        b_idx++;
      }

      b_idx = loop_ub;
    }

    loc_on = exist_edge_on[idx] * ang_dev_on[b_idx];

    /* likelihood of y given x = on */
    loc_off = exist_edge_off[idx] * ang_dev_off[b_idx];

    /* likelihood of y given x = off */
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &n_emlrtBCI, sp);
    }

    b_distances = loc_on;
    st.site = &b_emlrtRSI;
    b_log(&st, &b_distances);
    d0 = prob_on;
    st.site = &b_emlrtRSI;
    b_log(&st, &d0);
    DP_table->data[0] = b_distances + d0;
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &o_emlrtBCI, sp);
    }

    b_distances = loc_off;
    st.site = &c_emlrtRSI;
    b_log(&st, &b_distances);
    d0 = prob_off;
    st.site = &c_emlrtRSI;
    b_log(&st, &d0);
    DP_table->data[1] = b_distances + d0;

    /* Compute prob. of the evidence. E.A. */
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &d_emlrtBCI, sp);
    }

    obslik->data[0] = loc_on;
    obslik->data[1] = loc_off;
    i0 = node_idx->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = obslik->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &e_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_obslik[i0] = obslik->data[i0] * pi_var[i0];
    }

    z->data[0] = sum(b_obslik);
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &s_emlrtBCI, sp);
    }

    i0 = node_idx->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &g_emlrtBCI, sp);
    }

    b_distances = z->data[0];
    alpha_t->data[0] = loc_on * pi_var[0] / b_distances;
    alpha_t->data[1] = loc_off * pi_var[1] / b_distances;

    /*      if (round(sum(alpha_t(:,1))) ~= 1) */
    /*          display('Error'); */
    /*      end */
    /*  Compute log likelihood ration and evidenct -- E.A              */
    /*              log_like_ratio_list(1) = log((p_y_on_1*p_t_on_1)/(p_y_off_1*p_t_off_1)); %E.A. log likelihood ratio (1st position, edge) */
    /*              evidence(1) = log(p_y_on_1*p_t_on_1*prob_on + p_y_off_1*p_t_off_1*prob_off); */
    /*        */
  } else {
    i0 = distances->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &h_emlrtBCI, sp);
    }

    b_distances = distances->data[0];
    for (i0 = 0; i0 < 40; i0++) {
      c_distances[i0] = b_distances - range_dis[i0];
    }

    b_abs(c_distances, varargin_1);
    if (!muDoubleScalarIsNaN(varargin_1[0])) {
      idx = 1;
    } else {
      idx = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub < 41)) {
        if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }

    if (idx != 0) {
      b_distances = varargin_1[idx - 1];
      b_idx = idx - 1;
      while (idx + 1 < 41) {
        if (b_distances > varargin_1[idx]) {
          b_distances = varargin_1[idx];
          b_idx = idx;
        }

        idx++;
      }

      idx = b_idx;
    }

    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &p_emlrtBCI, sp);
    }

    st.site = &d_emlrtRSI;
    if (prob_on < 0.0) {
      b_st.site = &l_emlrtRSI;
      b_error(&b_st);
    }

    b_distances = nexist_edge_on[idx];
    st.site = &d_emlrtRSI;
    b_log(&st, &b_distances);
    DP_table->data[0] = b_distances + muDoubleScalarLog(prob_on);
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &q_emlrtBCI, sp);
    }

    st.site = &e_emlrtRSI;
    if (nexist_edge_off[idx] < 0.0) {
      b_st.site = &l_emlrtRSI;
      b_error(&b_st);
    }

    st.site = &e_emlrtRSI;
    if (prob_off < 0.0) {
      b_st.site = &l_emlrtRSI;
      b_error(&b_st);
    }

    DP_table->data[1] = muDoubleScalarLog(nexist_edge_off[idx]) +
      muDoubleScalarLog(prob_off);

    /* Compute prob. of the evidence. E.A. */
    /* psi = [loc_on; loc_off]; */
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &i_emlrtBCI, sp);
    }

    obslik->data[0] = nexist_edge_on[idx];
    obslik->data[1] = nexist_edge_off[idx];
    i0 = node_idx->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &k_emlrtBCI, sp);
    }

    i0 = obslik->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &j_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_obslik[i0] = obslik->data[i0] * pi_var[i0];
    }

    z->data[0] = sum(b_obslik);
    loop_ub = node_idx->size[0];
    if (!(1 <= loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &t_emlrtBCI, sp);
    }

    i0 = node_idx->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &l_emlrtBCI, sp);
    }

    b_distances = z->data[0];
    alpha_t->data[0] = nexist_edge_on[idx] * pi_var[0] / b_distances;
    alpha_t->data[1] = nexist_edge_off[idx] * pi_var[1] / b_distances;

    /* obslik(:,1) = [loc_on; loc_off]; */
    /*      if (round(sum(alpha_t(:,1))) ~= 1) */
    /*          display('Error'); */
    /*      end            */
    /*               */
    /*  Compute log likelihood ration and evidenct -- E.A              */
    /*              log_like_ratio_list(1) = log(p_y_on_1/p_y_off_1); %E.A. log likelihood ratio (1st position, no edge)   */
    /*              evidence(1) = log(p_y_on_1*prob_on + p_y_off_1*prob_off); */
    /*        */
  }

  /*  LOOP THROUGH */
  i = 2;
  while (i - 2 <= node_idx->size[0] - 2) {
    i0 = y_h->size[0];
    loop_ub = (int32_T)(2.0 + (real_T)(i - 2));
    if (!((loop_ub >= 1) && (loop_ub <= i0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &m_emlrtBCI, sp);
    }

    st.site = &f_emlrtRSI;
    if (muDoubleScalarIsNaN(y_h->data[i - 1])) {
      b_st.site = &k_emlrtRSI;
      error(&b_st);
    }

    if (y_h->data[i - 1] != 0.0) {
      i0 = distances->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &ob_emlrtBCI, sp);
      }

      b_distances = distances->data[i - 1];
      for (i0 = 0; i0 < 40; i0++) {
        c_distances[i0] = b_distances - range_dis[i0];
      }

      b_abs(c_distances, varargin_1);
      if (!muDoubleScalarIsNaN(varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 41)) {
          if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
            idx = loop_ub;
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (idx != 0) {
        b_distances = varargin_1[idx - 1];
        b_idx = idx - 1;
        while (idx + 1 < 41) {
          if (b_distances > varargin_1[idx]) {
            b_distances = varargin_1[idx];
            b_idx = idx;
          }

          idx++;
        }

        idx = b_idx;
      }

      i0 = ang_dev->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &pb_emlrtBCI, sp);
      }

      b_distances = ang_dev->data[i - 1];
      for (i0 = 0; i0 < 181; i0++) {
        b_ang_dev[i0] = b_distances - range_ang[i0];
      }

      c_abs(b_ang_dev, b_varargin_1);
      if (!muDoubleScalarIsNaN(b_varargin_1[0])) {
        b_idx = 1;
      } else {
        b_idx = 0;
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 182)) {
          if (!muDoubleScalarIsNaN(b_varargin_1[loop_ub - 1])) {
            b_idx = loop_ub;
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (b_idx != 0) {
        b_distances = b_varargin_1[b_idx - 1];
        loop_ub = b_idx - 1;
        while (b_idx + 1 < 182) {
          if (b_distances > b_varargin_1[b_idx]) {
            b_distances = b_varargin_1[b_idx];
            loop_ub = b_idx;
          }

          b_idx++;
        }

        b_idx = loop_ub;
      }

      loc_on = exist_edge_on[idx] * ang_dev_on[b_idx];

      /* likelihood of y given x = on */
      loc_off = exist_edge_off[idx] * ang_dev_off[b_idx];

      /* likelihood of y given x = off */
      st.site = &g_emlrtRSI;
      if (loc_on < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &g_emlrtRSI;
      if (prob_stay_on < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &g_emlrtRSI;
      st.site = &g_emlrtRSI;
      if (prob_leave_off < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &qb_emlrtBCI, sp);
      }

      b_obslik[0] = (muDoubleScalarLog(loc_on) + muDoubleScalarLog(prob_stay_on))
        + DP_table->data[DP_table->size[0] * (loop_ub - 1)];
      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &rb_emlrtBCI, sp);
      }

      b_obslik[1] = (muDoubleScalarLog(loc_on) + muDoubleScalarLog
                     (prob_leave_off)) + DP_table->data[1 + DP_table->size[0] *
        (loop_ub - 1)];
      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = b_obslik[i0];
      }

      if ((predict[0] < predict[1]) || (muDoubleScalarIsNaN(predict[0]) &&
           (!muDoubleScalarIsNaN(predict[1])))) {
        b_distances = predict[1];
        idx = 2;
      } else {
        b_distances = predict[0];
        idx = 1;
      }

      i0 = DP_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &sb_emlrtBCI, sp);
      }

      DP_table->data[DP_table->size[0] * (i - 1)] = b_distances;
      i0 = aux_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &tb_emlrtBCI, sp);
      }

      aux_table->data[aux_table->size[0] * (i - 1)] = idx;
      st.site = &h_emlrtRSI;
      if (loc_off < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &h_emlrtRSI;
      if (prob_leave_on < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &h_emlrtRSI;
      st.site = &h_emlrtRSI;
      if (prob_stay_off < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &ub_emlrtBCI, sp);
      }

      b_obslik[0] = (muDoubleScalarLog(loc_off) + muDoubleScalarLog
                     (prob_leave_on)) + DP_table->data[DP_table->size[0] *
        (loop_ub - 1)];
      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &vb_emlrtBCI, sp);
      }

      b_obslik[1] = (muDoubleScalarLog(loc_off) + muDoubleScalarLog
                     (prob_stay_off)) + DP_table->data[1 + DP_table->size[0] *
        (loop_ub - 1)];
      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = b_obslik[i0];
      }

      if ((predict[0] < predict[1]) || (muDoubleScalarIsNaN(predict[0]) &&
           (!muDoubleScalarIsNaN(predict[1])))) {
        b_distances = predict[1];
        idx = 2;
      } else {
        b_distances = predict[0];
        idx = 1;
      }

      i0 = DP_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &wb_emlrtBCI, sp);
      }

      DP_table->data[1 + DP_table->size[0] * (i - 1)] = b_distances;
      i0 = aux_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &xb_emlrtBCI, sp);
      }

      aux_table->data[1 + aux_table->size[0] * (i - 1)] = idx;

      /* Compute prob. of the evidence. E.A.             */
      /* psi = [loc_on; loc_off]; */
      loop_ub = obslik->size[1];
      if (!((i >= 1) && (i <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &r_emlrtBCI, sp);
      }

      obslik->data[obslik->size[0] * (i - 1)] = loc_on;
      obslik->data[1 + obslik->size[0] * (i - 1)] = loc_off;
      i0 = alpha_t->size[1];
      loop_ub = (int32_T)((2.0 + (real_T)(i - 2)) - 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &u_emlrtBCI, sp);
      }

      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = 0.0;
        for (loop_ub = 0; loop_ub < 2; loop_ub++) {
          b_distances = predict[i0] + Psi_t[i0 + (loop_ub << 1)] * alpha_t->
            data[loop_ub + alpha_t->size[0] * (i - 2)];
          predict[i0] = b_distances;
        }
      }

      i0 = obslik->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &v_emlrtBCI, sp);
      }

      for (i0 = 0; i0 < 2; i0++) {
        b_obslik[i0] = obslik->data[i0 + obslik->size[0] * (i - 1)] * predict[i0];
      }

      i0 = z->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &yb_emlrtBCI, sp);
      }

      z->data[i - 1] = sum(b_obslik);
      i0 = z->size[0];
      loop_ub = (int32_T)(2.0 + (real_T)(i - 2));
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &w_emlrtBCI, sp);
      }

      b_distances = z->data[i - 1];
      loop_ub = alpha_t->size[1];
      if (!((i >= 1) && (i <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &db_emlrtBCI, sp);
      }

      alpha_t->data[alpha_t->size[0] * (i - 1)] = loc_on * predict[0] /
        b_distances;
      alpha_t->data[1 + alpha_t->size[0] * (i - 1)] = loc_off * predict[1] /
        b_distances;

      /* obslik(:,i) = [loc_on; loc_off]; */
      /*          if (round(sum(alpha_t(:,1))) ~= 1) */
      /*              display('Error'); */
      /*          end                 */
      /*  Compute log likelihood ration and evidenct -- E.A                  */
      /*                  log_like_ratio_list(i) = log((p_y_on_1*p_t_on_1)/(p_y_off_1*p_t_off_1)); %E.A. store likelihood               */
      /*                  evidence(i) = evidence(i-1) + log(p_y_on_1*p_t_on_1*prob_stay_on + p_y_on_1*p_t_on_1*prob_stay_off + ... */
      /*                      p_y_off_1*p_t_off_1*prob_leave_on +  p_y_off_1*p_t_off_1*prob_stay_off); %E.A. log evidence 1..i */
    } else {
      /*  */
      i0 = distances->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &eb_emlrtBCI, sp);
      }

      b_distances = distances->data[i - 1];
      for (i0 = 0; i0 < 40; i0++) {
        c_distances[i0] = b_distances - range_dis[i0];
      }

      b_abs(c_distances, varargin_1);
      if (!muDoubleScalarIsNaN(varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 41)) {
          if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
            idx = loop_ub;
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (idx != 0) {
        b_distances = varargin_1[idx - 1];
        b_idx = idx - 1;
        while (idx + 1 < 41) {
          if (b_distances > varargin_1[idx]) {
            b_distances = varargin_1[idx];
            b_idx = idx;
          }

          idx++;
        }

        idx = b_idx;
      }

      st.site = &i_emlrtRSI;
      if (nexist_edge_on[idx] < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &i_emlrtRSI;
      if (prob_stay_on < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &i_emlrtRSI;
      if (nexist_edge_on[idx] < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &i_emlrtRSI;
      if (prob_leave_off < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &fb_emlrtBCI, sp);
      }

      b_obslik[0] = (muDoubleScalarLog(nexist_edge_on[idx]) + muDoubleScalarLog
                     (prob_stay_on)) + DP_table->data[DP_table->size[0] *
        (loop_ub - 1)];
      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &gb_emlrtBCI, sp);
      }

      b_obslik[1] = (muDoubleScalarLog(nexist_edge_on[idx]) + muDoubleScalarLog
                     (prob_leave_off)) + DP_table->data[1 + DP_table->size[0] *
        (loop_ub - 1)];
      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = b_obslik[i0];
      }

      if ((predict[0] < predict[1]) || (muDoubleScalarIsNaN(predict[0]) &&
           (!muDoubleScalarIsNaN(predict[1])))) {
        b_distances = predict[1];
        b_idx = 2;
      } else {
        b_distances = predict[0];
        b_idx = 1;
      }

      i0 = DP_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &hb_emlrtBCI, sp);
      }

      DP_table->data[DP_table->size[0] * (i - 1)] = b_distances;
      i0 = aux_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &ib_emlrtBCI, sp);
      }

      aux_table->data[aux_table->size[0] * (i - 1)] = b_idx;
      st.site = &j_emlrtRSI;
      if (nexist_edge_off[idx] < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &j_emlrtRSI;
      if (prob_leave_on < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &j_emlrtRSI;
      if (nexist_edge_off[idx] < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      st.site = &j_emlrtRSI;
      if (prob_stay_off < 0.0) {
        b_st.site = &l_emlrtRSI;
        b_error(&b_st);
      }

      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &jb_emlrtBCI, sp);
      }

      b_obslik[0] = (muDoubleScalarLog(nexist_edge_off[idx]) + muDoubleScalarLog
                     (prob_leave_on)) + DP_table->data[DP_table->size[0] *
        (loop_ub - 1)];
      i0 = DP_table->size[1];
      loop_ub = i - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &kb_emlrtBCI, sp);
      }

      b_obslik[1] = (muDoubleScalarLog(nexist_edge_off[idx]) + muDoubleScalarLog
                     (prob_stay_off)) + DP_table->data[1 + DP_table->size[0] *
        (loop_ub - 1)];
      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = b_obslik[i0];
      }

      if ((predict[0] < predict[1]) || (muDoubleScalarIsNaN(predict[0]) &&
           (!muDoubleScalarIsNaN(predict[1])))) {
        b_distances = predict[1];
        b_idx = 2;
      } else {
        b_distances = predict[0];
        b_idx = 1;
      }

      i0 = DP_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &lb_emlrtBCI, sp);
      }

      DP_table->data[1 + DP_table->size[0] * (i - 1)] = b_distances;
      i0 = aux_table->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &mb_emlrtBCI, sp);
      }

      aux_table->data[1 + aux_table->size[0] * (i - 1)] = b_idx;

      /* Compute prob. of the evidence. E.A. */
      loop_ub = obslik->size[1];
      if (!((i >= 1) && (i <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &x_emlrtBCI, sp);
      }

      obslik->data[obslik->size[0] * (i - 1)] = nexist_edge_on[idx];
      obslik->data[1 + obslik->size[0] * (i - 1)] = nexist_edge_off[idx];
      i0 = alpha_t->size[1];
      loop_ub = (int32_T)((2.0 + (real_T)(i - 2)) - 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &y_emlrtBCI, sp);
      }

      for (i0 = 0; i0 < 2; i0++) {
        predict[i0] = 0.0;
        for (loop_ub = 0; loop_ub < 2; loop_ub++) {
          b_distances = predict[i0] + Psi_t[i0 + (loop_ub << 1)] * alpha_t->
            data[loop_ub + alpha_t->size[0] * (i - 2)];
          predict[i0] = b_distances;
        }
      }

      i0 = obslik->size[1];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &ab_emlrtBCI, sp);
      }

      for (i0 = 0; i0 < 2; i0++) {
        b_obslik[i0] = obslik->data[i0 + obslik->size[0] * (i - 1)] * predict[i0];
      }

      i0 = z->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &nb_emlrtBCI, sp);
      }

      z->data[i - 1] = sum(b_obslik);
      i0 = z->size[0];
      loop_ub = (int32_T)(2.0 + (real_T)(i - 2));
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &bb_emlrtBCI, sp);
      }

      b_distances = z->data[i - 1];
      loop_ub = alpha_t->size[1];
      if (!((i >= 1) && (i <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &cb_emlrtBCI, sp);
      }

      alpha_t->data[alpha_t->size[0] * (i - 1)] = nexist_edge_on[idx] * predict
        [0] / b_distances;
      alpha_t->data[1 + alpha_t->size[0] * (i - 1)] = nexist_edge_off[idx] *
        predict[1] / b_distances;

      /*          if (round(sum(alpha_t(:,1))) ~= 1) */
      /*              display('Error'); */
      /*          end */
      /*  Compute log likelihood ration and evidence --  E.A                  */
      /*                  log_like_ratio_list(i) = log(p_y_on_1/p_y_off_1); %E.A. store likelihood */
      /*                  evidence(i) = evidence(i-1) + log(p_y_on_1*prob_stay_on + p_y_on_1*prob_leave_off + ... */
      /*                      p_y_off_1*prob_leave_on + p_y_off_1*prob_stay_off); %E.A. log evidence 1..i */
      /*                  */
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  loop_ub = DP_table->size[1];
  *T = loop_ub;
}

/* End of code generation (hmmParameters.c) */
