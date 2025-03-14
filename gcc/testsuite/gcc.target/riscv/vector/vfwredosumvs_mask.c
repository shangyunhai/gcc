
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float64xm2_t test_vfwredosumvs_mask_float64xm2_float32xm1 (float32xm1_t a, float64xm2_t b, e32xm1_t mask, unsigned int gvl) {
    return vfwredosumvs_mask_float64xm2_float32xm1 (a, b, mask, gvl);
}


float64xm4_t test_vfwredosumvs_mask_float64xm4_float32xm2 (float32xm2_t a, float64xm4_t b, e32xm2_t mask, unsigned int gvl) {
    return vfwredosumvs_mask_float64xm4_float32xm2 (a, b, mask, gvl);
}


float64xm8_t test_vfwredosumvs_mask_float64xm8_float32xm4 (float32xm4_t a, float64xm8_t b, e32xm4_t mask, unsigned int gvl) {
    return vfwredosumvs_mask_float64xm8_float32xm4 (a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vfwredosum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vfwredosum\.vs" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vfwredosum\.vs" } }*/

/* { dg-final { cleanup-saved-temps } } */

