
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vssseg3ev_float32x3xm1 (float *address, long stride, float32x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_float32x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_float32x3xm2 (float *address, long stride, float32x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_float32x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_float64x3xm1 (double *address, long stride, float64x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_float64x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_float64x3xm2 (double *address, long stride, float64x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_float64x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_int16x3xm1 (short *address, long stride, int16x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_int16x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_int16x3xm2 (short *address, long stride, int16x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_int16x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_int32x3xm1 (int *address, long stride, int32x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_int32x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_int32x3xm2 (int *address, long stride, int32x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_int32x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_int64x3xm1 (long *address, long stride, int64x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_int64x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_int64x3xm2 (long *address, long stride, int64x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_int64x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_int8x3xm1 (signed char *address, long stride, int8x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_int8x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_int8x3xm2 (signed char *address, long stride, int8x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_int8x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_uint16x3xm1 (unsigned short *address, long stride, uint16x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_uint16x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_uint16x3xm2 (unsigned short *address, long stride, uint16x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_uint16x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_uint32x3xm1 (unsigned int *address, long stride, uint32x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_uint32x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_uint32x3xm2 (unsigned int *address, long stride, uint32x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_uint32x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_uint64x3xm1 (unsigned long *address, long stride, uint64x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_uint64x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_uint64x3xm2 (unsigned long *address, long stride, uint64x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_uint64x3xm2 (address, stride, a, gvl);
}


void test_vssseg3ev_uint8x3xm1 (unsigned char *address, long stride, uint8x3xm1_t a, unsigned int gvl) {
    return vssseg3ev_uint8x3xm1 (address, stride, a, gvl);
}


void test_vssseg3ev_uint8x3xm2 (unsigned char *address, long stride, uint8x3xm2_t a, unsigned int gvl) {
    return vssseg3ev_uint8x3xm2 (address, stride, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vssseg3e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vssseg3e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

