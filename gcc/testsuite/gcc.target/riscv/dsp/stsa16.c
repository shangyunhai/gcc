
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uintXLEN_t test_stsa16(uintXLEN_t a, uintXLEN_t b) {
    return __rv__stsa16 (a, b);
}

/* { dg-final { scan-assembler "\tstsa16" } }*/

/* { dg-final { cleanup-saved-temps } } */
