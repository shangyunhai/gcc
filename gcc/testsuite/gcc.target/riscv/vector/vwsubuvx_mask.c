
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm2_t test_vwsubuvx_mask_uint16xm2_uint8xm1 (uint16xm2_t merge, uint8xm1_t a, unsigned char b, e8xm1_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint16xm2_uint8xm1 (merge, a, b, mask, gvl);
}


uint16xm4_t test_vwsubuvx_mask_uint16xm4_uint8xm2 (uint16xm4_t merge, uint8xm2_t a, unsigned char b, e8xm2_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint16xm4_uint8xm2 (merge, a, b, mask, gvl);
}


uint16xm8_t test_vwsubuvx_mask_uint16xm8_uint8xm4 (uint16xm8_t merge, uint8xm4_t a, unsigned char b, e8xm4_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint16xm8_uint8xm4 (merge, a, b, mask, gvl);
}


uint32xm2_t test_vwsubuvx_mask_uint32xm2_uint16xm1 (uint32xm2_t merge, uint16xm1_t a, unsigned short b, e16xm1_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint32xm2_uint16xm1 (merge, a, b, mask, gvl);
}


uint32xm4_t test_vwsubuvx_mask_uint32xm4_uint16xm2 (uint32xm4_t merge, uint16xm2_t a, unsigned short b, e16xm2_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint32xm4_uint16xm2 (merge, a, b, mask, gvl);
}


uint32xm8_t test_vwsubuvx_mask_uint32xm8_uint16xm4 (uint32xm8_t merge, uint16xm4_t a, unsigned short b, e16xm4_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint32xm8_uint16xm4 (merge, a, b, mask, gvl);
}


uint64xm2_t test_vwsubuvx_mask_uint64xm2_uint32xm1 (uint64xm2_t merge, uint32xm1_t a, unsigned int b, e32xm1_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint64xm2_uint32xm1 (merge, a, b, mask, gvl);
}


uint64xm4_t test_vwsubuvx_mask_uint64xm4_uint32xm2 (uint64xm4_t merge, uint32xm2_t a, unsigned int b, e32xm2_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint64xm4_uint32xm2 (merge, a, b, mask, gvl);
}


uint64xm8_t test_vwsubuvx_mask_uint64xm8_uint32xm4 (uint64xm8_t merge, uint32xm4_t a, unsigned int b, e32xm4_t mask, unsigned int gvl) {
    return vwsubuvx_mask_uint64xm8_uint32xm4 (merge, a, b, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vwsubu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vwsubu\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

