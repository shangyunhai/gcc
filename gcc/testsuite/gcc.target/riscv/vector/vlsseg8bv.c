
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x8xm1_t test_vlsseg8bv_int16x8xm1 (const short *address, long stride, unsigned int gvl) {
    return vlsseg8bv_int16x8xm1 (address, stride, gvl);
}


int32x8xm1_t test_vlsseg8bv_int32x8xm1 (const int *address, long stride, unsigned int gvl) {
    return vlsseg8bv_int32x8xm1 (address, stride, gvl);
}


int64x8xm1_t test_vlsseg8bv_int64x8xm1 (const long *address, long stride, unsigned int gvl) {
    return vlsseg8bv_int64x8xm1 (address, stride, gvl);
}


int8x8xm1_t test_vlsseg8bv_int8x8xm1 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg8bv_int8x8xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1.*vlsseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1.*vlsseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1.*vlsseg8b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1.*vlsseg8b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

