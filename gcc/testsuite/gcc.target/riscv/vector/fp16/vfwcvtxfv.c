
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int32xm2_t test_vfwcvtxfv_int32xm2_float16xm1 (float16xm1_t a, unsigned int gvl) {
    return vfwcvtxfv_int32xm2_float16xm1 (a, gvl);
}


int32xm4_t test_vfwcvtxfv_int32xm4_float16xm2 (float16xm2_t a, unsigned int gvl) {
    return vfwcvtxfv_int32xm4_float16xm2 (a, gvl);
}


int32xm8_t test_vfwcvtxfv_int32xm8_float16xm4 (float16xm4_t a, unsigned int gvl) {
    return vfwcvtxfv_int32xm8_float16xm4 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vfwcvt\.x\.f\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vfwcvt\.x\.f\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

