
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint64_t test_umulx8(uint32_t a, uint32_t b) {
    return __rv__umulx8 (a, b);
}

/* { dg-final { scan-assembler "\tumulx8" } }*/

/* { dg-final { cleanup-saved-temps } } */
