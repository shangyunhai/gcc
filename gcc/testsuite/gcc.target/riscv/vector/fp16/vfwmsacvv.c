
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm2_t test_vfwmsacvv_float32xm2_float16xm1 (float32xm2_t a, float16xm1_t b, float16xm1_t c, unsigned int gvl) {
    return vfwmsacvv_float32xm2_float16xm1 (a, b, c, gvl);
}


float32xm4_t test_vfwmsacvv_float32xm4_float16xm2 (float32xm4_t a, float16xm2_t b, float16xm2_t c, unsigned int gvl) {
    return vfwmsacvv_float32xm4_float16xm2 (a, b, c, gvl);
}


float32xm8_t test_vfwmsacvv_float32xm8_float16xm4 (float32xm8_t a, float16xm4_t b, float16xm4_t c, unsigned int gvl) {
    return vfwmsacvv_float32xm8_float16xm4 (a, b, c, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vfwmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vfwmsac\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vfwmsac\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

