#include "types.h"

// TU178: 0x0209b598-0x0209b5d4. One setting word in .data (0x020e22cc) and the function that applies it to a
// temporary TownAcreGenerator grid.

extern "C" {
// TownAcreGenerator (0x140 bytes), called by its symbols.txt names
void _ZN17TownAcreGeneratorC1Ev(void *self);
void _ZN17TownAcreGenerator8generateEi(void *self, s32 v);
void _ZN17TownAcreGenerator12writeAcreIdsEPh(void *self, s32 arg);
void _ZN17TownAcreGeneratorD1Ev(void *self);
}

s32 sTownGenGateMode = 3;

extern "C" void Town_SetGenGateMode(s32 v) {
    sTownGenGateMode = v;
}

extern "C" void Town_GenerateAcres(s32 arg) {
    u32 buf[0x50];
    _ZN17TownAcreGeneratorC1Ev(buf);
    _ZN17TownAcreGenerator8generateEi(buf, sTownGenGateMode);
    _ZN17TownAcreGenerator12writeAcreIdsEPh(buf, arg);
    _ZN17TownAcreGeneratorD1Ev(buf);
}
