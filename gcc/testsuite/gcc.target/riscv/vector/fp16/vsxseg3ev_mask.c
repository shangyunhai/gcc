
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg3ev_mask_float16x3xm1 (float16_t *address, int16xm1_t index, float16x3xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg3ev_mask_float16x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3ev_mask_float16x3xm2 (float16_t *address, int16xm2_t index, float16x3xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsxseg3ev_mask_float16x3xm2 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsxseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vsxseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

