
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x6xm1_t test_vlxseg6buv_uint16x6xm1 (const unsigned short *address, uint16xm1_t index, unsigned int gvl) {
    return vlxseg6buv_uint16x6xm1 (address, index, gvl);
}


uint32x6xm1_t test_vlxseg6buv_uint32x6xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg6buv_uint32x6xm1 (address, index, gvl);
}


uint64x6xm1_t test_vlxseg6buv_uint64x6xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg6buv_uint64x6xm1 (address, index, gvl);
}


uint8x6xm1_t test_vlxseg6buv_uint8x6xm1 (const unsigned char *address, uint8xm1_t index, unsigned int gvl) {
    return vlxseg6buv_uint8x6xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlxseg6bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlxseg6bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlxseg6bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vlxseg6bu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

