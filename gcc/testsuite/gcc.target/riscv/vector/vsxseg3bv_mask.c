
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg3bv_mask_int16x3xm1 (short *address, int16xm1_t index, int16x3xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int16x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int16x3xm2 (short *address, int16xm2_t index, int16x3xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int16x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int32x3xm1 (int *address, int32xm1_t index, int32x3xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int32x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int32x3xm2 (int *address, int32xm2_t index, int32x3xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int32x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int64x3xm1 (long *address, int64xm1_t index, int64x3xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int64x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int64x3xm2 (long *address, int64xm2_t index, int64x3xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int64x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int8x3xm1 (signed char *address, int8xm1_t index, int8x3xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int8x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_int8x3xm2 (signed char *address, int8xm2_t index, int8x3xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_int8x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint16x3xm1 (unsigned short *address, uint16xm1_t index, uint16x3xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint16x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint16x3xm2 (unsigned short *address, uint16xm2_t index, uint16x3xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint16x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint32x3xm1 (unsigned int *address, uint32xm1_t index, uint32x3xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint32x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint32x3xm2 (unsigned int *address, uint32xm2_t index, uint32x3xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint32x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint64x3xm1 (unsigned long *address, uint64xm1_t index, uint64x3xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint64x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint64x3xm2 (unsigned long *address, uint64xm2_t index, uint64x3xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint64x3xm2 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint8x3xm1 (unsigned char *address, uint8xm1_t index, uint8x3xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint8x3xm1 (address, index, a, mask, gvl);
}


void test_vsxseg3bv_mask_uint8x3xm2 (unsigned char *address, uint8xm2_t index, uint8x3xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vsxseg3bv_mask_uint8x3xm2 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vsxseg3b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vsxseg3b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

