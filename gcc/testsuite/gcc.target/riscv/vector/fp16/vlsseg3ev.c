
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16x3xm1_t test_vlsseg3ev_float16x3xm1 (const float16_t *address, long stride, unsigned int gvl) {
    return vlsseg3ev_float16x3xm1 (address, stride, gvl);
}


float16x3xm2_t test_vlsseg3ev_float16x3xm2 (const float16_t *address, long stride, unsigned int gvl) {
    return vlsseg3ev_float16x3xm2 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlsseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vlsseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

