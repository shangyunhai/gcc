
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm1_t test_vnsravi_int16xm1_int32xm2 (int32xm2_t a, const unsigned short b, unsigned int gvl) {
    return vnsravi_int16xm1_int32xm2 ( a, 1, gvl);
}


int16xm2_t test_vnsravi_int16xm2_int32xm4 (int32xm4_t a, const unsigned short b, unsigned int gvl) {
    return vnsravi_int16xm2_int32xm4 ( a, 1, gvl);
}


int16xm4_t test_vnsravi_int16xm4_int32xm8 (int32xm8_t a, const unsigned short b, unsigned int gvl) {
    return vnsravi_int16xm4_int32xm8 ( a, 1, gvl);
}


int32xm1_t test_vnsravi_int32xm1_int64xm2 (int64xm2_t a, const unsigned int b, unsigned int gvl) {
    return vnsravi_int32xm1_int64xm2 ( a, 1, gvl);
}


int32xm2_t test_vnsravi_int32xm2_int64xm4 (int64xm4_t a, const unsigned int b, unsigned int gvl) {
    return vnsravi_int32xm2_int64xm4 ( a, 1, gvl);
}


int32xm4_t test_vnsravi_int32xm4_int64xm8 (int64xm8_t a, const unsigned int b, unsigned int gvl) {
    return vnsravi_int32xm4_int64xm8 ( a, 1, gvl);
}


int8xm1_t test_vnsravi_int8xm1_int16xm2 (int16xm2_t a, const unsigned char b, unsigned int gvl) {
    return vnsravi_int8xm1_int16xm2 ( a, 1, gvl);
}


int8xm2_t test_vnsravi_int8xm2_int16xm4 (int16xm4_t a, const unsigned char b, unsigned int gvl) {
    return vnsravi_int8xm2_int16xm4 ( a, 1, gvl);
}


int8xm4_t test_vnsravi_int8xm4_int16xm8 (int16xm8_t a, const unsigned char b, unsigned int gvl) {
    return vnsravi_int8xm4_int16xm8 ( a, 1, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vnsra\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vnsra\.vi" } }*/

/* { dg-final { cleanup-saved-temps } } */

