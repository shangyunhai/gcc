
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv32*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int64_t test_v_smalbt(int64_t t, int16x2_t a, int16x2_t b) {
    return __rv__v_smalbt (t, a, b);
}

/* { dg-final { scan-assembler "\tsmalbt" } }*/

/* { dg-final { cleanup-saved-temps } } */
