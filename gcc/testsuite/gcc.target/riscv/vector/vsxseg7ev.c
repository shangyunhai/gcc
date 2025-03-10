
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg7ev_float32x7xm1 (float *address, int32xm1_t index, float32x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_float32x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_float64x7xm1 (double *address, int64xm1_t index, float64x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_float64x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_int16x7xm1 (short *address, int16xm1_t index, int16x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_int16x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_int32x7xm1 (int *address, int32xm1_t index, int32x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_int32x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_int64x7xm1 (long *address, int64xm1_t index, int64x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_int64x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_int8x7xm1 (signed char *address, int8xm1_t index, int8x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_int8x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_uint16x7xm1 (unsigned short *address, uint16xm1_t index, uint16x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_uint16x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_uint32x7xm1 (unsigned int *address, uint32xm1_t index, uint32x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_uint32x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_uint64x7xm1 (unsigned long *address, uint64xm1_t index, uint64x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_uint64x7xm1 (address, index, a, gvl);
}


void test_vsxseg7ev_uint8x7xm1 (unsigned char *address, uint8xm1_t index, uint8x7xm1_t a, unsigned int gvl) {
    return vsxseg7ev_uint8x7xm1 (address, index, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vsxseg7e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vsxseg7e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

