
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm1_t test_vslidedownvi_mask_float16xm1 (float16xm1_t merge, float16xm1_t a, const long b, e16xm1_t mask, unsigned int gvl) {
    return vslidedownvi_mask_float16xm1 (merge, a, 1, mask, gvl);
}


float16xm2_t test_vslidedownvi_mask_float16xm2 (float16xm2_t merge, float16xm2_t a, const long b, e16xm2_t mask, unsigned int gvl) {
    return vslidedownvi_mask_float16xm2 (merge, a, 1, mask, gvl);
}


float16xm4_t test_vslidedownvi_mask_float16xm4 (float16xm4_t merge, float16xm4_t a, const long b, e16xm4_t mask, unsigned int gvl) {
    return vslidedownvi_mask_float16xm4 (merge, a, 1, mask, gvl);
}


float16xm8_t test_vslidedownvi_mask_float16xm8 (float16xm8_t merge, float16xm8_t a, const long b, e16xm8_t mask, unsigned int gvl) {
    return vslidedownvi_mask_float16xm8 (merge, a, 1, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vslidedown\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vslidedown\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vslidedown\.vi" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8.*vslidedown\.vi" } }*/

/* { dg-final { cleanup-saved-temps } } */

