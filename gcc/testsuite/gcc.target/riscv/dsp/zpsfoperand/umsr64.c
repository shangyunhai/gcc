
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint64_t test_umsr64(uint64_t t, uintXLEN_t a, uintXLEN_t b) {
    return __rv__umsr64 (t, a, b);
}

/* { dg-final { scan-assembler "\tumsr64" } }*/

/* { dg-final { cleanup-saved-temps } } */
