
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint64_t test_smulx8(uint32_t a, uint32_t b) {
    return __rv__smulx8 (a, b);
}

/* { dg-final { scan-assembler "\tsmulx8" } }*/

/* { dg-final { cleanup-saved-temps } } */
