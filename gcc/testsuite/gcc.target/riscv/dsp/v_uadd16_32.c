
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv32*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint16x2_t test_v_uadd16(uint16x2_t a, uint16x2_t b) {
    return __rv__v_uadd16 (a, b);
}

/* { dg-final { scan-assembler "\tadd16" } }*/

/* { dg-final { cleanup-saved-temps } } */
