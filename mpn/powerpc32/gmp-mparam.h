/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4


/* 350MHz 604e, gcc.

   Presumably these should be considerably different for the 603 and 750
   which have much slower multiply instructions.  */

/* Generated by tuneup.c, 2001-02-03. */

#define KARATSUBA_MUL_THRESHOLD       20
#define TOOM3_MUL_THRESHOLD          228

#define KARATSUBA_SQR_THRESHOLD       40
#define TOOM3_SQR_THRESHOLD          266

#define SB_PREINV_THRESHOLD            0
#define DC_THRESHOLD                  52
#define POWM_THRESHOLD               104

#define GCD_ACCEL_THRESHOLD            3
#define GCDEXT_THRESHOLD              49

#define DIVREM_1_NORM_THRESHOLD        0
#define DIVREM_1_UNNORM_THRESHOLD      0
#define MOD_1_NORM_THRESHOLD           0
#define MOD_1_UNNORM_THRESHOLD         0
#define USE_PREINV_MOD_1               1
#define DIVREM_2_THRESHOLD             0
#define DIVEXACT_1_THRESHOLD           0
#define MODEXACT_1_ODD_THRESHOLD       0

#define FFT_MUL_TABLE  { 560, 1184, 2176, 5632, 14336, 57344, 0 }
#define FFT_MODF_MUL_THRESHOLD       576
#define FFT_MUL_THRESHOLD           6912

#define FFT_SQR_TABLE  { 560, 1248, 2176, 5632, 14336, 40960, 0 }
#define FFT_MODF_SQR_THRESHOLD       576
#define FFT_SQR_THRESHOLD           5888
