
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float16xm2_t test_vfwcvtfxuv_mask_float16xm2_uint8xm1 (float16xm2_t merge, uint8xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float16xm2_uint8xm1 (merge, a, mask, gvl);
}


float16xm4_t test_vfwcvtfxuv_mask_float16xm4_uint8xm2 (float16xm4_t merge, uint8xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float16xm4_uint8xm2 (merge, a, mask, gvl);
}


float16xm8_t test_vfwcvtfxuv_mask_float16xm8_uint8xm4 (float16xm8_t merge, uint8xm4_t a, e8xm4_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float16xm8_uint8xm4 (merge, a, mask, gvl);
}


float32xm2_t test_vfwcvtfxuv_mask_float32xm2_uint16xm1 (float32xm2_t merge, uint16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float32xm2_uint16xm1 (merge, a, mask, gvl);
}


float32xm4_t test_vfwcvtfxuv_mask_float32xm4_uint16xm2 (float32xm4_t merge, uint16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float32xm4_uint16xm2 (merge, a, mask, gvl);
}


float32xm8_t test_vfwcvtfxuv_mask_float32xm8_uint16xm4 (float32xm8_t merge, uint16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float32xm8_uint16xm4 (merge, a, mask, gvl);
}


float64xm2_t test_vfwcvtfxuv_mask_float64xm2_uint32xm1 (float64xm2_t merge, uint32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float64xm2_uint32xm1 (merge, a, mask, gvl);
}


float64xm4_t test_vfwcvtfxuv_mask_float64xm4_uint32xm2 (float64xm4_t merge, uint32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float64xm4_uint32xm2 (merge, a, mask, gvl);
}


float64xm8_t test_vfwcvtfxuv_mask_float64xm8_uint32xm4 (float64xm8_t merge, uint32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vfwcvtfxuv_mask_float64xm8_uint32xm4 (merge, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vfwcvt\.f\.xu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vfwcvt\.f\.xu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

