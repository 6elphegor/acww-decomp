#ifndef DS_SHIFT_H
#define DS_SHIFT_H

// Shifts by a variable count with the DS's results. ARM's register-specified shifts (and Thumb's LSL / LSR / ASR by
// register) use the count's bottom byte: a count of 32 or more gives 0 (LSL, LSR) or the sign in every bit (ASR).
// x86 masks the count to 5 bits (a shift by 33 shifts by 1), and C leaves counts of the width or more undefined. Where
// the game can shift by such a count (found by the sanitizer variant: UBSan's shift-exponent check), the shift goes
// through these.

#ifdef __cplusplus
extern "C++" {
#endif

static inline int DS_ASR(int v, unsigned int n) {
    n &= 0xff;
    return n >= 32 ? (v < 0 ? -1 : 0) : v >> n;
}
static inline unsigned int DS_LSR(unsigned int v, unsigned int n) {
    n &= 0xff;
    return n >= 32 ? 0 : v >> n;
}
static inline unsigned int DS_LSL(unsigned int v, unsigned int n) {
    n &= 0xff;
    return n >= 32 ? 0 : v << n;
}

#ifdef __cplusplus
}
#endif

#endif
