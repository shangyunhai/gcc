
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int16x4_t test_v_ksll16(int16x4_t a, const uint32_t b) {
    return __rv__v_ksll16 (a, 1);
}

/* { dg-final { scan-assembler "\tkslli16" } }*/

/* { dg-final { cleanup-saved-temps } } */
