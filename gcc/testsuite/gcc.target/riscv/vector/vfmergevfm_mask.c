
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfmergevfm_mask_float32xm1 (float32xm1_t a, float b, e32xm1_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float32xm1 (a, b, mask, gvl);
}


float32xm2_t test_vfmergevfm_mask_float32xm2 (float32xm2_t a, float b, e32xm2_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float32xm2 (a, b, mask, gvl);
}


float32xm4_t test_vfmergevfm_mask_float32xm4 (float32xm4_t a, float b, e32xm4_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float32xm4 (a, b, mask, gvl);
}


float32xm8_t test_vfmergevfm_mask_float32xm8 (float32xm8_t a, float b, e32xm8_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float32xm8 (a, b, mask, gvl);
}


float64xm1_t test_vfmergevfm_mask_float64xm1 (float64xm1_t a, double b, e64xm1_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float64xm1 (a, b, mask, gvl);
}


float64xm2_t test_vfmergevfm_mask_float64xm2 (float64xm2_t a, double b, e64xm2_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float64xm2 (a, b, mask, gvl);
}


float64xm4_t test_vfmergevfm_mask_float64xm4 (float64xm4_t a, double b, e64xm4_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float64xm4 (a, b, mask, gvl);
}


float64xm8_t test_vfmergevfm_mask_float64xm8 (float64xm8_t a, double b, e64xm8_t mask, unsigned int gvl) {
    return vfmergevfm_mask_float64xm8 (a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vfmerge\.vfm" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8.*vfmerge\.vfm" } }*/

/* { dg-final { cleanup-saved-temps } } */

