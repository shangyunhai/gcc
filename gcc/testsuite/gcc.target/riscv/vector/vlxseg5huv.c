
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x5xm1_t test_vlxseg5huv_uint16x5xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg5huv_uint16x5xm1 (address, index, gvl);
}


uint32x5xm1_t test_vlxseg5huv_uint32x5xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg5huv_uint32x5xm1 (address, index, gvl);
}


uint64x5xm1_t test_vlxseg5huv_uint64x5xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg5huv_uint64x5xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlxseg5hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlxseg5hu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlxseg5hu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

