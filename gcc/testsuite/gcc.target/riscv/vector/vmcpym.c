
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

e16xm1_t test_vmcpym_e16xm1 (e16xm1_t a, unsigned int gvl) {
    return vmcpym_e16xm1 (a, gvl);
}


e16xm2_t test_vmcpym_e16xm2 (e16xm2_t a, unsigned int gvl) {
    return vmcpym_e16xm2 (a, gvl);
}


e16xm4_t test_vmcpym_e16xm4 (e16xm4_t a, unsigned int gvl) {
    return vmcpym_e16xm4 (a, gvl);
}


e16xm8_t test_vmcpym_e16xm8 (e16xm8_t a, unsigned int gvl) {
    return vmcpym_e16xm8 (a, gvl);
}


e32xm1_t test_vmcpym_e32xm1 (e32xm1_t a, unsigned int gvl) {
    return vmcpym_e32xm1 (a, gvl);
}


e32xm2_t test_vmcpym_e32xm2 (e32xm2_t a, unsigned int gvl) {
    return vmcpym_e32xm2 (a, gvl);
}


e32xm4_t test_vmcpym_e32xm4 (e32xm4_t a, unsigned int gvl) {
    return vmcpym_e32xm4 (a, gvl);
}


e32xm8_t test_vmcpym_e32xm8 (e32xm8_t a, unsigned int gvl) {
    return vmcpym_e32xm8 (a, gvl);
}


e64xm1_t test_vmcpym_e64xm1 (e64xm1_t a, unsigned int gvl) {
    return vmcpym_e64xm1 (a, gvl);
}


e64xm2_t test_vmcpym_e64xm2 (e64xm2_t a, unsigned int gvl) {
    return vmcpym_e64xm2 (a, gvl);
}


e64xm4_t test_vmcpym_e64xm4 (e64xm4_t a, unsigned int gvl) {
    return vmcpym_e64xm4 (a, gvl);
}


e64xm8_t test_vmcpym_e64xm8 (e64xm8_t a, unsigned int gvl) {
    return vmcpym_e64xm8 (a, gvl);
}


e8xm1_t test_vmcpym_e8xm1 (e8xm1_t a, unsigned int gvl) {
    return vmcpym_e8xm1 (a, gvl);
}


e8xm2_t test_vmcpym_e8xm2 (e8xm2_t a, unsigned int gvl) {
    return vmcpym_e8xm2 (a, gvl);
}


e8xm4_t test_vmcpym_e8xm4 (e8xm4_t a, unsigned int gvl) {
    return vmcpym_e8xm4 (a, gvl);
}


e8xm8_t test_vmcpym_e8xm8 (e8xm8_t a, unsigned int gvl) {
    return vmcpym_e8xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4.*vmcpy\.m" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8.*vmcpy\.m" } }*/

/* { dg-final { cleanup-saved-temps } } */

