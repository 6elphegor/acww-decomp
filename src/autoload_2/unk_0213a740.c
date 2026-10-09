// mwcc-flags: -nothumb -O4,p
// CodeWarrior C++ runtime (ptmf.c): __ptmf_null, the null pointer to member function (two zero words),
// autoload_2 .rodata 0x0213a740-0x0213a748, the last object of the module's .rodata (the runtime files are linked
// last). Code compiled by mwcc loads it to clear or compare a pointer to member function (main, many overlays).
// No function of the runtime's ptmf file is in the ROM (mwcc's ARM code does not call them), so this is a
// data-only unit.
// (pointer-sized words: a pointer to member function is two of them - the DS's long, but on 64-bit Windows a
// long has 32 bits and the 16-byte member pointers read past an 8-byte object)
typedef struct __ptmf {
    __UINTPTR_TYPE__ w[2];
} __ptmf;

extern const __ptmf __ptmf_null;
const __ptmf __ptmf_null = {{0, 0}};
