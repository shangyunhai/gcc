
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint32x2xm1_t test_vlxseg2wuv_uint32x2xm1 (const unsigned int *address, uint32xm1_t index, unsigned int gvl) {
    return vlxseg2wuv_uint32x2xm1 (address, index, gvl);
}


uint32x2xm2_t test_vlxseg2wuv_uint32x2xm2 (const unsigned int *address, uint32xm2_t index, unsigned int gvl) {
    return vlxseg2wuv_uint32x2xm2 (address, index, gvl);
}


uint32x2xm4_t test_vlxseg2wuv_uint32x2xm4 (const unsigned int *address, uint32xm4_t index, unsigned int gvl) {
    return vlxseg2wuv_uint32x2xm4 (address, index, gvl);
}


uint64x2xm1_t test_vlxseg2wuv_uint64x2xm1 (const unsigned long *address, uint64xm1_t index, unsigned int gvl) {
    return vlxseg2wuv_uint64x2xm1 (address, index, gvl);
}


uint64x2xm2_t test_vlxseg2wuv_uint64x2xm2 (const unsigned long *address, uint64xm2_t index, unsigned int gvl) {
    return vlxseg2wuv_uint64x2xm2 (address, index, gvl);
}


uint64x2xm4_t test_vlxseg2wuv_uint64x2xm4 (const unsigned long *address, uint64xm4_t index, unsigned int gvl) {
    return vlxseg2wuv_uint64x2xm4 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlxseg2wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vlxseg2wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vlxseg2wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlxseg2wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vlxseg2wu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vlxseg2wu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

