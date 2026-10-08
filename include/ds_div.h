#ifndef DS_DIV_H
#define DS_DIV_H

// Integer division with the DS's results. The ARM9 has no divide instruction. mwcc calls its runtime routines, and
// these never trap:
// - _s32_div_f / _u32_div_f (src/autoload_2/unk_02133150.s, unk_0213335c.s): a / 0 = a and a % 0 = 0.
//   INT_MIN / -1 = INT_MIN and INT_MIN % -1 = 0.
// - _ll_sdiv / _ll_udiv / _ll_mod / _ull_mod (src/autoload_2/unk_02132ef8.s): a / 0 = a and a % 0 = a.
// Host CPUs differ. x86 traps on both cases. arm64 gives a / 0 = 0. The game does divide by zero in places (e.g.
// spl_scl_in_out at the end of an animation), so every integer / and % with a divisor that isn't a constant goes
// through these helpers (tools/host_div_rewrite.py rewrites them). The operand type of the original expression picks
// the helper: DS_DIV / DS_MOD (int), DS_UDIV / DS_UMOD (unsigned int), and the 64-bit forms (long long).

#ifdef __cplusplus
extern "C++" {
#endif

static inline int DS_DIV(int a, int b) { return b == 0 ? a : b == -1 ? (int)(0u - (unsigned int)a) : a / b; }
static inline int DS_MOD(int a, int b) { return b == 0 || b == -1 ? 0 : a % b; }
static inline unsigned int DS_UDIV(unsigned int a, unsigned int b) { return b == 0 ? a : a / b; }
static inline unsigned int DS_UMOD(unsigned int a, unsigned int b) { return b == 0 ? 0 : a % b; }

static inline long long DS_DIV64(long long a, long long b) {
    return b == 0 ? a : b == -1 ? (long long)(0ull - (unsigned long long)a) : a / b;
}
static inline long long DS_MOD64(long long a, long long b) { return b == 0 ? a : b == -1 ? 0 : a % b; }
static inline unsigned long long DS_UDIV64(unsigned long long a, unsigned long long b) { return b == 0 ? a : a / b; }
static inline unsigned long long DS_UMOD64(unsigned long long a, unsigned long long b) { return b == 0 ? a : a % b; }

#ifdef __cplusplus
}
#endif

#endif
