
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int32x2_t test_v_kstas32(int32x2_t a, int32x2_t b) {
    return __rv__v_kstas32 (a, b);
}

/* { dg-final { scan-assembler "\tkstas32" } }*/

/* { dg-final { cleanup-saved-temps } } */
