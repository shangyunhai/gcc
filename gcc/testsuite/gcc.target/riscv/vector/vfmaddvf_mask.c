
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfmaddvf_mask_float32xm1 (float32xm1_t merge, float32xm1_t a, float b, float32xm1_t c, e32xm1_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float32xm1 (merge, a, b, c, mask, gvl);
}


float32xm2_t test_vfmaddvf_mask_float32xm2 (float32xm2_t merge, float32xm2_t a, float b, float32xm2_t c, e32xm2_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float32xm2 (merge, a, b, c, mask, gvl);
}


float32xm4_t test_vfmaddvf_mask_float32xm4 (float32xm4_t merge, float32xm4_t a, float b, float32xm4_t c, e32xm4_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float32xm4 (merge, a, b, c, mask, gvl);
}


float64xm1_t test_vfmaddvf_mask_float64xm1 (float64xm1_t merge, float64xm1_t a, double b, float64xm1_t c, e64xm1_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float64xm1 (merge, a, b, c, mask, gvl);
}


float64xm2_t test_vfmaddvf_mask_float64xm2 (float64xm2_t merge, float64xm2_t a, double b, float64xm2_t c, e64xm2_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float64xm2 (merge, a, b, c, mask, gvl);
}


float64xm4_t test_vfmaddvf_mask_float64xm4 (float64xm4_t merge, float64xm4_t a, double b, float64xm4_t c, e64xm4_t mask, unsigned int gvl) {
    return vfmaddvf_mask_float64xm4 (merge, a, b, c, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vfmadd\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vfmadd\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vfmadd\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vfmadd\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vfmadd\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vfmadd\.vf" } }*/

/* { dg-final { cleanup-saved-temps } } */

