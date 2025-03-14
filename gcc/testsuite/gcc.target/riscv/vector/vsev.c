
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsev_float32xm1 (float *address, float32xm1_t a, unsigned int gvl) {
    return vsev_float32xm1 (address, a, gvl);
}


void test_vsev_float32xm2 (float *address, float32xm2_t a, unsigned int gvl) {
    return vsev_float32xm2 (address, a, gvl);
}


void test_vsev_float32xm4 (float *address, float32xm4_t a, unsigned int gvl) {
    return vsev_float32xm4 (address, a, gvl);
}


void test_vsev_float32xm8 (float *address, float32xm8_t a, unsigned int gvl) {
    return vsev_float32xm8 (address, a, gvl);
}


void test_vsev_float64xm1 (double *address, float64xm1_t a, unsigned int gvl) {
    return vsev_float64xm1 (address, a, gvl);
}


void test_vsev_float64xm2 (double *address, float64xm2_t a, unsigned int gvl) {
    return vsev_float64xm2 (address, a, gvl);
}


void test_vsev_float64xm4 (double *address, float64xm4_t a, unsigned int gvl) {
    return vsev_float64xm4 (address, a, gvl);
}


void test_vsev_float64xm8 (double *address, float64xm8_t a, unsigned int gvl) {
    return vsev_float64xm8 (address, a, gvl);
}


void test_vsev_int16xm1 (short *address, int16xm1_t a, unsigned int gvl) {
    return vsev_int16xm1 (address, a, gvl);
}


void test_vsev_int16xm2 (short *address, int16xm2_t a, unsigned int gvl) {
    return vsev_int16xm2 (address, a, gvl);
}


void test_vsev_int16xm4 (short *address, int16xm4_t a, unsigned int gvl) {
    return vsev_int16xm4 (address, a, gvl);
}


void test_vsev_int16xm8 (short *address, int16xm8_t a, unsigned int gvl) {
    return vsev_int16xm8 (address, a, gvl);
}


void test_vsev_int32xm1 (int *address, int32xm1_t a, unsigned int gvl) {
    return vsev_int32xm1 (address, a, gvl);
}


void test_vsev_int32xm2 (int *address, int32xm2_t a, unsigned int gvl) {
    return vsev_int32xm2 (address, a, gvl);
}


void test_vsev_int32xm4 (int *address, int32xm4_t a, unsigned int gvl) {
    return vsev_int32xm4 (address, a, gvl);
}


void test_vsev_int32xm8 (int *address, int32xm8_t a, unsigned int gvl) {
    return vsev_int32xm8 (address, a, gvl);
}


void test_vsev_int64xm1 (long *address, int64xm1_t a, unsigned int gvl) {
    return vsev_int64xm1 (address, a, gvl);
}


void test_vsev_int64xm2 (long *address, int64xm2_t a, unsigned int gvl) {
    return vsev_int64xm2 (address, a, gvl);
}


void test_vsev_int64xm4 (long *address, int64xm4_t a, unsigned int gvl) {
    return vsev_int64xm4 (address, a, gvl);
}


void test_vsev_int64xm8 (long *address, int64xm8_t a, unsigned int gvl) {
    return vsev_int64xm8 (address, a, gvl);
}


void test_vsev_int8xm1 (signed char *address, int8xm1_t a, unsigned int gvl) {
    return vsev_int8xm1 (address, a, gvl);
}


void test_vsev_int8xm2 (signed char *address, int8xm2_t a, unsigned int gvl) {
    return vsev_int8xm2 (address, a, gvl);
}


void test_vsev_int8xm4 (signed char *address, int8xm4_t a, unsigned int gvl) {
    return vsev_int8xm4 (address, a, gvl);
}


void test_vsev_int8xm8 (signed char *address, int8xm8_t a, unsigned int gvl) {
    return vsev_int8xm8 (address, a, gvl);
}


void test_vsev_uint16xm1 (unsigned short *address, uint16xm1_t a, unsigned int gvl) {
    return vsev_uint16xm1 (address, a, gvl);
}


void test_vsev_uint16xm2 (unsigned short *address, uint16xm2_t a, unsigned int gvl) {
    return vsev_uint16xm2 (address, a, gvl);
}


void test_vsev_uint16xm4 (unsigned short *address, uint16xm4_t a, unsigned int gvl) {
    return vsev_uint16xm4 (address, a, gvl);
}


void test_vsev_uint16xm8 (unsigned short *address, uint16xm8_t a, unsigned int gvl) {
    return vsev_uint16xm8 (address, a, gvl);
}


void test_vsev_uint32xm1 (unsigned int *address, uint32xm1_t a, unsigned int gvl) {
    return vsev_uint32xm1 (address, a, gvl);
}


void test_vsev_uint32xm2 (unsigned int *address, uint32xm2_t a, unsigned int gvl) {
    return vsev_uint32xm2 (address, a, gvl);
}


void test_vsev_uint32xm4 (unsigned int *address, uint32xm4_t a, unsigned int gvl) {
    return vsev_uint32xm4 (address, a, gvl);
}


void test_vsev_uint32xm8 (unsigned int *address, uint32xm8_t a, unsigned int gvl) {
    return vsev_uint32xm8 (address, a, gvl);
}


void test_vsev_uint64xm1 (unsigned long *address, uint64xm1_t a, unsigned int gvl) {
    return vsev_uint64xm1 (address, a, gvl);
}


void test_vsev_uint64xm2 (unsigned long *address, uint64xm2_t a, unsigned int gvl) {
    return vsev_uint64xm2 (address, a, gvl);
}


void test_vsev_uint64xm4 (unsigned long *address, uint64xm4_t a, unsigned int gvl) {
    return vsev_uint64xm4 (address, a, gvl);
}


void test_vsev_uint64xm8 (unsigned long *address, uint64xm8_t a, unsigned int gvl) {
    return vsev_uint64xm8 (address, a, gvl);
}


void test_vsev_uint8xm1 (unsigned char *address, uint8xm1_t a, unsigned int gvl) {
    return vsev_uint8xm1 (address, a, gvl);
}


void test_vsev_uint8xm2 (unsigned char *address, uint8xm2_t a, unsigned int gvl) {
    return vsev_uint8xm2 (address, a, gvl);
}


void test_vsev_uint8xm4 (unsigned char *address, uint8xm4_t a, unsigned int gvl) {
    return vsev_uint8xm4 (address, a, gvl);
}


void test_vsev_uint8xm8 (unsigned char *address, uint8xm8_t a, unsigned int gvl) {
    return vsev_uint8xm8 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vse\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vse\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

