
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int32x2_t test_v_kmaxds(int32x2_t t, int16x4_t a, int16x4_t b) {
    return __rv__v_kmaxds (t, a, b);
}

/* { dg-final { scan-assembler "\tkmaxds" } }*/

/* { dg-final { cleanup-saved-temps } } */
