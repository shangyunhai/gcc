
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float64xm2_t test_vfwsubwv_float64xm2_float32xm1 (float64xm2_t a, float32xm1_t b, unsigned int gvl) {
    return vfwsubwv_float64xm2_float32xm1 (a, b, gvl);
}


float64xm4_t test_vfwsubwv_float64xm4_float32xm2 (float64xm4_t a, float32xm2_t b, unsigned int gvl) {
    return vfwsubwv_float64xm4_float32xm2 (a, b, gvl);
}


float64xm8_t test_vfwsubwv_float64xm8_float32xm4 (float64xm8_t a, float32xm4_t b, unsigned int gvl) {
    return vfwsubwv_float64xm8_float32xm4 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vfwsub\.wv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vfwsub\.wv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vfwsub\.wv" } }*/

/* { dg-final { cleanup-saved-temps } } */

