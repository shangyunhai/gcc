
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x2xm1_t test_vlxseg2hv_int16x2xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg2hv_int16x2xm1 (address, index, gvl);
}


int16x2xm2_t test_vlxseg2hv_int16x2xm2 (const short *address, int16xm2_t index, unsigned int gvl) {
    return vlxseg2hv_int16x2xm2 (address, index, gvl);
}


int16x2xm4_t test_vlxseg2hv_int16x2xm4 (const short *address, int16xm4_t index, unsigned int gvl) {
    return vlxseg2hv_int16x2xm4 (address, index, gvl);
}


int32x2xm1_t test_vlxseg2hv_int32x2xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg2hv_int32x2xm1 (address, index, gvl);
}


int32x2xm2_t test_vlxseg2hv_int32x2xm2 (const int *address, int32xm2_t index, unsigned int gvl) {
    return vlxseg2hv_int32x2xm2 (address, index, gvl);
}


int32x2xm4_t test_vlxseg2hv_int32x2xm4 (const int *address, int32xm4_t index, unsigned int gvl) {
    return vlxseg2hv_int32x2xm4 (address, index, gvl);
}


int64x2xm1_t test_vlxseg2hv_int64x2xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg2hv_int64x2xm1 (address, index, gvl);
}


int64x2xm2_t test_vlxseg2hv_int64x2xm2 (const long *address, int64xm2_t index, unsigned int gvl) {
    return vlxseg2hv_int64x2xm2 (address, index, gvl);
}


int64x2xm4_t test_vlxseg2hv_int64x2xm4 (const long *address, int64xm4_t index, unsigned int gvl) {
    return vlxseg2hv_int64x2xm4 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vlxseg2h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vlxseg2h\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

