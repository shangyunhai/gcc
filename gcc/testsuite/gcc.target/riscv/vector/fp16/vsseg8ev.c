
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg8ev_float16x8xm1 (float16_t *address, float16x8xm1_t a, unsigned int gvl) {
    return vsseg8ev_float16x8xm1 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsseg8e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

