
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uintXLEN_t test_ksll8(uintXLEN_t a, const uint32_t b) {
    return __rv__ksll8 (a, 1);
}

/* { dg-final { scan-assembler "\tkslli8" } }*/

/* { dg-final { cleanup-saved-temps } } */
