
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm2_t test_vwaddvx_int16xm2_int8xm1 (int8xm1_t a, signed char b, unsigned int gvl) {
    return vwaddvx_int16xm2_int8xm1 (a, b, gvl);
}


int16xm4_t test_vwaddvx_int16xm4_int8xm2 (int8xm2_t a, signed char b, unsigned int gvl) {
    return vwaddvx_int16xm4_int8xm2 (a, b, gvl);
}


int16xm8_t test_vwaddvx_int16xm8_int8xm4 (int8xm4_t a, signed char b, unsigned int gvl) {
    return vwaddvx_int16xm8_int8xm4 (a, b, gvl);
}


int32xm2_t test_vwaddvx_int32xm2_int16xm1 (int16xm1_t a, short b, unsigned int gvl) {
    return vwaddvx_int32xm2_int16xm1 (a, b, gvl);
}


int32xm4_t test_vwaddvx_int32xm4_int16xm2 (int16xm2_t a, short b, unsigned int gvl) {
    return vwaddvx_int32xm4_int16xm2 (a, b, gvl);
}


int32xm8_t test_vwaddvx_int32xm8_int16xm4 (int16xm4_t a, short b, unsigned int gvl) {
    return vwaddvx_int32xm8_int16xm4 (a, b, gvl);
}


int64xm2_t test_vwaddvx_int64xm2_int32xm1 (int32xm1_t a, int b, unsigned int gvl) {
    return vwaddvx_int64xm2_int32xm1 (a, b, gvl);
}


int64xm4_t test_vwaddvx_int64xm4_int32xm2 (int32xm2_t a, int b, unsigned int gvl) {
    return vwaddvx_int64xm4_int32xm2 (a, b, gvl);
}


int64xm8_t test_vwaddvx_int64xm8_int32xm4 (int32xm4_t a, int b, unsigned int gvl) {
    return vwaddvx_int64xm8_int32xm4 (a, b, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vwadd\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vwadd\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

