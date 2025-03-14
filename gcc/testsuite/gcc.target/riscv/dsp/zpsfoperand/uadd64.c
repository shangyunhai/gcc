
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv32*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint64_t test_uadd64(uint64_t a, uint64_t b) {
    return __rv__uadd64 (a, b);
}

/* { dg-final { scan-assembler "\tadd64" } }*/

/* { dg-final { cleanup-saved-temps } } */
