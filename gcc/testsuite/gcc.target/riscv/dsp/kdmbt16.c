
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uintXLEN_t test_kdmbt16(uintXLEN_t a, uintXLEN_t b) {
    return __rv__kdmbt16 (a, b);
}

/* { dg-final { scan-assembler "\tkdmbt16" } }*/

/* { dg-final { cleanup-saved-temps } } */
