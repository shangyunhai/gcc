
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg4ev_mask_float16x4xm1 (float16_t *address, long stride, float16x4xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg4ev_mask_float16x4xm1 (address, stride, a, mask, gvl);
}


void test_vssseg4ev_mask_float16x4xm2 (float16_t *address, long stride, float16x4xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vssseg4ev_mask_float16x4xm2 (address, stride, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vssseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vssseg4e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

