
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vfsgnjxvv_float16xm1 (float16xm1_t a, float16xm1_t b, unsigned int gvl) {
    return vfsgnjxvv_float16xm1 (a, b, gvl);
}


float16xm2_t test_vfsgnjxvv_float16xm2 (float16xm2_t a, float16xm2_t b, unsigned int gvl) {
    return vfsgnjxvv_float16xm2 (a, b, gvl);
}


float16xm4_t test_vfsgnjxvv_float16xm4 (float16xm4_t a, float16xm4_t b, unsigned int gvl) {
    return vfsgnjxvv_float16xm4 (a, b, gvl);
}


float16xm8_t test_vfsgnjxvv_float16xm8 (float16xm8_t a, float16xm8_t b, unsigned int gvl) {
    return vfsgnjxvv_float16xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vfsgnjx\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vfsgnjx\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vfsgnjx\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8.*vfsgnjx\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

