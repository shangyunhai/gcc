
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmsbfm_mask_e16xm1 (e16xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vmsbfm_mask_e16xm1 (a, mask, gvl);
}


e16xm2_t test_vmsbfm_mask_e16xm2 (e16xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vmsbfm_mask_e16xm2 (a, mask, gvl);
}


e16xm4_t test_vmsbfm_mask_e16xm4 (e16xm4_t a, e16xm4_t mask, unsigned int gvl) {
    return vmsbfm_mask_e16xm4 (a, mask, gvl);
}


e16xm8_t test_vmsbfm_mask_e16xm8 (e16xm8_t a, e16xm8_t mask, unsigned int gvl) {
    return vmsbfm_mask_e16xm8 (a, mask, gvl);
}


e32xm1_t test_vmsbfm_mask_e32xm1 (e32xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vmsbfm_mask_e32xm1 (a, mask, gvl);
}


e32xm2_t test_vmsbfm_mask_e32xm2 (e32xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vmsbfm_mask_e32xm2 (a, mask, gvl);
}


e32xm4_t test_vmsbfm_mask_e32xm4 (e32xm4_t a, e32xm4_t mask, unsigned int gvl) {
    return vmsbfm_mask_e32xm4 (a, mask, gvl);
}


e32xm8_t test_vmsbfm_mask_e32xm8 (e32xm8_t a, e32xm8_t mask, unsigned int gvl) {
    return vmsbfm_mask_e32xm8 (a, mask, gvl);
}


e64xm1_t test_vmsbfm_mask_e64xm1 (e64xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vmsbfm_mask_e64xm1 (a, mask, gvl);
}


e64xm2_t test_vmsbfm_mask_e64xm2 (e64xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vmsbfm_mask_e64xm2 (a, mask, gvl);
}


e64xm4_t test_vmsbfm_mask_e64xm4 (e64xm4_t a, e64xm4_t mask, unsigned int gvl) {
    return vmsbfm_mask_e64xm4 (a, mask, gvl);
}


e64xm8_t test_vmsbfm_mask_e64xm8 (e64xm8_t a, e64xm8_t mask, unsigned int gvl) {
    return vmsbfm_mask_e64xm8 (a, mask, gvl);
}


e8xm1_t test_vmsbfm_mask_e8xm1 (e8xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vmsbfm_mask_e8xm1 (a, mask, gvl);
}


e8xm2_t test_vmsbfm_mask_e8xm2 (e8xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vmsbfm_mask_e8xm2 (a, mask, gvl);
}


e8xm4_t test_vmsbfm_mask_e8xm4 (e8xm4_t a, e8xm4_t mask, unsigned int gvl) {
    return vmsbfm_mask_e8xm4 (a, mask, gvl);
}


e8xm8_t test_vmsbfm_mask_e8xm8 (e8xm8_t a, e8xm8_t mask, unsigned int gvl) {
    return vmsbfm_mask_e8xm8 (a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmsbf\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmsbf\.m" } }*/

/* { dg-final { cleanup-saved-temps } } */

