
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg6ev_mask_float16x6xm1 (float16_t *address, float16x6xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsseg6ev_mask_float16x6xm1 (address, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsseg6e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

