
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x5xm1_t test_vlxseg5hv_int16x5xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg5hv_int16x5xm1 (address, index, gvl);
}


int32x5xm1_t test_vlxseg5hv_int32x5xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg5hv_int32x5xm1 (address, index, gvl);
}


int64x5xm1_t test_vlxseg5hv_int64x5xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg5hv_int64x5xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlxseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlxseg5h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlxseg5h\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

