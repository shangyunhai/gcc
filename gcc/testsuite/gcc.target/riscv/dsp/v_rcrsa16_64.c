
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int16x4_t test_v_rcrsa16(int16x4_t a, int16x4_t b) {
    return __rv__v_rcrsa16 (a, b);
}

/* { dg-final { scan-assembler "\trcrsa16" } }*/

/* { dg-final { cleanup-saved-temps } } */
