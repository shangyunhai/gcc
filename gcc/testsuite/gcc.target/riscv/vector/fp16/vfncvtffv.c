
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vfncvtffv_float16xm1_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vfncvtffv_float16xm1_float32xm2 (a, gvl);
}


float16xm2_t test_vfncvtffv_float16xm2_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vfncvtffv_float16xm2_float32xm4 (a, gvl);
}


float16xm4_t test_vfncvtffv_float16xm4_float32xm8 (float32xm8_t a, unsigned int gvl) {
    return vfncvtffv_float16xm4_float32xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vfncvt\.f\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vfncvt\.f\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vfncvt\.f\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

