
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16xm2_t test_vwsmaccuvx_mask_uint16xm2_uint8xm1 (uint16xm2_t merge, unsigned char a, uint8xm1_t b, uint16xm2_t result, e8xm1_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint16xm2_uint8xm1 (merge, a, b, result, mask, gvl);
}


uint16xm4_t test_vwsmaccuvx_mask_uint16xm4_uint8xm2 (uint16xm4_t merge, unsigned char a, uint8xm2_t b, uint16xm4_t result, e8xm2_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint16xm4_uint8xm2 (merge, a, b, result, mask, gvl);
}


uint16xm8_t test_vwsmaccuvx_mask_uint16xm8_uint8xm4 (uint16xm8_t merge, unsigned char a, uint8xm4_t b, uint16xm8_t result, e8xm4_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint16xm8_uint8xm4 (merge, a, b, result, mask, gvl);
}


uint32xm2_t test_vwsmaccuvx_mask_uint32xm2_uint16xm1 (uint32xm2_t merge, unsigned short a, uint16xm1_t b, uint32xm2_t result, e16xm1_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint32xm2_uint16xm1 (merge, a, b, result, mask, gvl);
}


uint32xm4_t test_vwsmaccuvx_mask_uint32xm4_uint16xm2 (uint32xm4_t merge, unsigned short a, uint16xm2_t b, uint32xm4_t result, e16xm2_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint32xm4_uint16xm2 (merge, a, b, result, mask, gvl);
}


uint32xm8_t test_vwsmaccuvx_mask_uint32xm8_uint16xm4 (uint32xm8_t merge, unsigned short a, uint16xm4_t b, uint32xm8_t result, e16xm4_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint32xm8_uint16xm4 (merge, a, b, result, mask, gvl);
}


uint64xm2_t test_vwsmaccuvx_mask_uint64xm2_uint32xm1 (uint64xm2_t merge, unsigned int a, uint32xm1_t b, uint64xm2_t result, e32xm1_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint64xm2_uint32xm1 (merge, a, b, result, mask, gvl);
}


uint64xm4_t test_vwsmaccuvx_mask_uint64xm4_uint32xm2 (uint64xm4_t merge, unsigned int a, uint32xm2_t b, uint64xm4_t result, e32xm2_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint64xm4_uint32xm2 (merge, a, b, result, mask, gvl);
}


uint64xm8_t test_vwsmaccuvx_mask_uint64xm8_uint32xm4 (uint64xm8_t merge, unsigned int a, uint32xm4_t b, uint64xm8_t result, e32xm4_t mask, unsigned int gvl) {
    return vwsmaccuvx_mask_uint64xm8_uint32xm4 (merge, a, b, result, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2.*vwsmaccu\.vx" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4.*vwsmaccu\.vx" } }*/

/* { dg-final { cleanup-saved-temps } } */

