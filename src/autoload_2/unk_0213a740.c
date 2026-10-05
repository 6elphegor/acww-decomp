// mwcc-flags: -nothumb -O4,p
// CodeWarrior C++ runtime (ptmf.c): __ptmf_null, the null pointer to member function (two zero words),
// autoload_2 .rodata 0x0213a740-0x0213a748, the last object of the module's .rodata (the runtime files are linked
// last). Code compiled by mwcc loads it to clear or compare a pointer to member function (main, many overlays).
// No function of the runtime's ptmf file is in the ROM (mwcc's ARM code does not call them), so this is a
// data-only unit.
typedef struct __ptmf {
    long w[2];
} __ptmf;

extern const __ptmf __ptmf_null;
const __ptmf __ptmf_null = {{0, 0}};
