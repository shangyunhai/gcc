
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv32*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

int16x2_t test_v_kadd16(int16x2_t a, int16x2_t b) {
    return __rv__v_kadd16 (a, b);
}

/* { dg-final { scan-assembler "\tkadd16" } }*/

/* { dg-final { cleanup-saved-temps } } */
