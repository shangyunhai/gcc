
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int32x6xm1_t test_vlseg6wv_mask_int32x6xm1 (int32x6xm1_t merge, const int *address, e32xm1_t mask, unsigned int gvl) {
    return vlseg6wv_mask_int32x6xm1 (merge, address, mask, gvl);
}


int64x6xm1_t test_vlseg6wv_mask_int64x6xm1 (int64x6xm1_t merge, const long *address, e64xm1_t mask, unsigned int gvl) {
    return vlseg6wv_mask_int64x6xm1 (merge, address, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlseg6w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlseg6w\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

