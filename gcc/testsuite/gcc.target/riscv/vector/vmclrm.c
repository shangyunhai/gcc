
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmclrm_e16xm1 (unsigned int gvl) {
    return vmclrm_e16xm1 (gvl);
}


e16xm2_t test_vmclrm_e16xm2 (unsigned int gvl) {
    return vmclrm_e16xm2 (gvl);
}


e16xm4_t test_vmclrm_e16xm4 (unsigned int gvl) {
    return vmclrm_e16xm4 (gvl);
}


e16xm8_t test_vmclrm_e16xm8 (unsigned int gvl) {
    return vmclrm_e16xm8 (gvl);
}


e32xm1_t test_vmclrm_e32xm1 (unsigned int gvl) {
    return vmclrm_e32xm1 (gvl);
}


e32xm2_t test_vmclrm_e32xm2 (unsigned int gvl) {
    return vmclrm_e32xm2 (gvl);
}


e32xm4_t test_vmclrm_e32xm4 (unsigned int gvl) {
    return vmclrm_e32xm4 (gvl);
}


e32xm8_t test_vmclrm_e32xm8 (unsigned int gvl) {
    return vmclrm_e32xm8 (gvl);
}


e64xm1_t test_vmclrm_e64xm1 (unsigned int gvl) {
    return vmclrm_e64xm1 (gvl);
}


e64xm2_t test_vmclrm_e64xm2 (unsigned int gvl) {
    return vmclrm_e64xm2 (gvl);
}


e64xm4_t test_vmclrm_e64xm4 (unsigned int gvl) {
    return vmclrm_e64xm4 (gvl);
}


e64xm8_t test_vmclrm_e64xm8 (unsigned int gvl) {
    return vmclrm_e64xm8 (gvl);
}


e8xm1_t test_vmclrm_e8xm1 (unsigned int gvl) {
    return vmclrm_e8xm1 (gvl);
}


e8xm2_t test_vmclrm_e8xm2 (unsigned int gvl) {
    return vmclrm_e8xm2 (gvl);
}


e8xm4_t test_vmclrm_e8xm4 (unsigned int gvl) {
    return vmclrm_e8xm4 (gvl);
}


e8xm8_t test_vmclrm_e8xm8 (unsigned int gvl) {
    return vmclrm_e8xm8 (gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmclr\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmclr\.m" } }*/

/* { dg-final { cleanup-saved-temps } } */

