
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16xm2_t test_vwaddwx_mask_int16xm2 (int16xm2_t merge, int16xm2_t a, signed char b, e8xm1_t mask, unsigned int gvl) {
    return vwaddwx_mask_int16xm2 (merge, a, b, mask, gvl);
}


int16xm4_t test_vwaddwx_mask_int16xm4 (int16xm4_t merge, int16xm4_t a, signed char b, e8xm2_t mask, unsigned int gvl) {
    return vwaddwx_mask_int16xm4 (merge, a, b, mask, gvl);
}


int16xm8_t test_vwaddwx_mask_int16xm8 (int16xm8_t merge, int16xm8_t a, signed char b, e8xm4_t mask, unsigned int gvl) {
    return vwaddwx_mask_int16xm8 (merge, a, b, mask, gvl);
}


int32xm2_t test_vwaddwx_mask_int32xm2 (int32xm2_t merge, int32xm2_t a, short b, e16xm1_t mask, unsigned int gvl) {
    return vwaddwx_mask_int32xm2 (merge, a, b, mask, gvl);
}


int32xm4_t test_vwaddwx_mask_int32xm4 (int32xm4_t merge, int32xm4_t a, short b, e16xm2_t mask, unsigned int gvl) {
    return vwaddwx_mask_int32xm4 (merge, a, b, mask, gvl);
}


int32xm8_t test_vwaddwx_mask_int32xm8 (int32xm8_t merge, int32xm8_t a, short b, e16xm4_t mask, unsigned int gvl) {
    return vwaddwx_mask_int32xm8 (merge, a, b, mask, gvl);
}


int64xm2_t test_vwaddwx_mask_int64xm2 (int64xm2_t merge, int64xm2_t a, int b, e32xm1_t mask, unsigned int gvl) {
    return vwaddwx_mask_int64xm2 (merge, a, b, mask, gvl);
}


int64xm4_t test_vwaddwx_mask_int64xm4 (int64xm4_t merge, int64xm4_t a, int b, e32xm2_t mask, unsigned int gvl) {
    return vwaddwx_mask_int64xm4 (merge, a, b, mask, gvl);
}


int64xm8_t test_vwaddwx_mask_int64xm8 (int64xm8_t merge, int64xm8_t a, int b, e32xm4_t mask, unsigned int gvl) {
    return vwaddwx_mask_int64xm8 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vwadd\.wx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vwadd\.wx" } }*/

/* { dg-final { cleanup-saved-temps } } */

