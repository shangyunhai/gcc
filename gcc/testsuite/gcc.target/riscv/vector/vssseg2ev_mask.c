
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg2ev_mask_float32x2xm1 (float *address, long stride, float32x2xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float32x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_float32x2xm2 (float *address, long stride, float32x2xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float32x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_float32x2xm4 (float *address, long stride, float32x2xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float32x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_float64x2xm1 (double *address, long stride, float64x2xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float64x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_float64x2xm2 (double *address, long stride, float64x2xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float64x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_float64x2xm4 (double *address, long stride, float64x2xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_float64x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int16x2xm1 (short *address, long stride, int16x2xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int16x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int16x2xm2 (short *address, long stride, int16x2xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int16x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int16x2xm4 (short *address, long stride, int16x2xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int16x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int32x2xm1 (int *address, long stride, int32x2xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int32x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int32x2xm2 (int *address, long stride, int32x2xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int32x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int32x2xm4 (int *address, long stride, int32x2xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int32x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int64x2xm1 (long *address, long stride, int64x2xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int64x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int64x2xm2 (long *address, long stride, int64x2xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int64x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int64x2xm4 (long *address, long stride, int64x2xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int64x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int8x2xm1 (signed char *address, long stride, int8x2xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int8x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int8x2xm2 (signed char *address, long stride, int8x2xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int8x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_int8x2xm4 (signed char *address, long stride, int8x2xm4_t a, e8xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_int8x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint16x2xm1 (unsigned short *address, long stride, uint16x2xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint16x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint16x2xm2 (unsigned short *address, long stride, uint16x2xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint16x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint16x2xm4 (unsigned short *address, long stride, uint16x2xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint16x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint32x2xm1 (unsigned int *address, long stride, uint32x2xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint32x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint32x2xm2 (unsigned int *address, long stride, uint32x2xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint32x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint32x2xm4 (unsigned int *address, long stride, uint32x2xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint32x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint64x2xm1 (unsigned long *address, long stride, uint64x2xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint64x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint64x2xm2 (unsigned long *address, long stride, uint64x2xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint64x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint64x2xm4 (unsigned long *address, long stride, uint64x2xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint64x2xm4 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint8x2xm1 (unsigned char *address, long stride, uint8x2xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint8x2xm1 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint8x2xm2 (unsigned char *address, long stride, uint8x2xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint8x2xm2 (address, stride, a, mask, gvl);
}


void test_vssseg2ev_mask_uint8x2xm4 (unsigned char *address, long stride, uint8x2xm4_t a, e8xm4_t mask, unsigned int gvl) {
    return vssseg2ev_mask_uint8x2xm4 (address, stride, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vssseg2e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vssseg2e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

