
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm2_t test_vwmaccsuvx_int16xm2_uint8xm1 (signed char a, uint8xm1_t b, int16xm2_t result, unsigned int gvl) {
    return vwmaccsuvx_int16xm2_uint8xm1 (a, b, result, gvl);
}


int16xm4_t test_vwmaccsuvx_int16xm4_uint8xm2 (signed char a, uint8xm2_t b, int16xm4_t result, unsigned int gvl) {
    return vwmaccsuvx_int16xm4_uint8xm2 (a, b, result, gvl);
}


int16xm8_t test_vwmaccsuvx_int16xm8_uint8xm4 (signed char a, uint8xm4_t b, int16xm8_t result, unsigned int gvl) {
    return vwmaccsuvx_int16xm8_uint8xm4 (a, b, result, gvl);
}


int32xm2_t test_vwmaccsuvx_int32xm2_uint16xm1 (short a, uint16xm1_t b, int32xm2_t result, unsigned int gvl) {
    return vwmaccsuvx_int32xm2_uint16xm1 (a, b, result, gvl);
}


int32xm4_t test_vwmaccsuvx_int32xm4_uint16xm2 (short a, uint16xm2_t b, int32xm4_t result, unsigned int gvl) {
    return vwmaccsuvx_int32xm4_uint16xm2 (a, b, result, gvl);
}


int32xm8_t test_vwmaccsuvx_int32xm8_uint16xm4 (short a, uint16xm4_t b, int32xm8_t result, unsigned int gvl) {
    return vwmaccsuvx_int32xm8_uint16xm4 (a, b, result, gvl);
}


int64xm2_t test_vwmaccsuvx_int64xm2_uint32xm1 (int a, uint32xm1_t b, int64xm2_t result, unsigned int gvl) {
    return vwmaccsuvx_int64xm2_uint32xm1 (a, b, result, gvl);
}


int64xm4_t test_vwmaccsuvx_int64xm4_uint32xm2 (int a, uint32xm2_t b, int64xm4_t result, unsigned int gvl) {
    return vwmaccsuvx_int64xm4_uint32xm2 (a, b, result, gvl);
}


int64xm8_t test_vwmaccsuvx_int64xm8_uint32xm4 (int a, uint32xm4_t b, int64xm8_t result, unsigned int gvl) {
    return vwmaccsuvx_int64xm8_uint32xm4 (a, b, result, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vwmaccsu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vwmaccsu\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

