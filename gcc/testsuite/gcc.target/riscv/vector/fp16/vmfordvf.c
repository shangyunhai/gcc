
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmfordvf_e16xm1_float16xm1 (float16xm1_t a, float16_t b, unsigned int gvl) {
    return vmfordvf_e16xm1_float16xm1 (a, b, gvl);
}


e16xm2_t test_vmfordvf_e16xm2_float16xm2 (float16xm2_t a, float16_t b, unsigned int gvl) {
    return vmfordvf_e16xm2_float16xm2 (a, b, gvl);
}


e16xm4_t test_vmfordvf_e16xm4_float16xm4 (float16xm4_t a, float16_t b, unsigned int gvl) {
    return vmfordvf_e16xm4_float16xm4 (a, b, gvl);
}


e16xm8_t test_vmfordvf_e16xm8_float16xm8 (float16xm8_t a, float16_t b, unsigned int gvl) {
    return vmfordvf_e16xm8_float16xm8 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vmford\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vmford\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vmford\.vf" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8.*vmford\.vf" } }*/

/* { dg-final { cleanup-saved-temps } } */

