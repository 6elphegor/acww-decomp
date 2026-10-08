#include "town/TownAcreGrid.h"
#include "types.h"
#include "proto/main/unk_0209b598.h"

// TU178: 0x0209b598-0x0209b5d4. One setting word in .data (0x020e22cc) and the function that applies it to a
// temporary TownAcreGenerator grid.

s32 sTownGenGateMode = 3;

extern "C" void Town_SetGenGateMode(s32 v) {
    sTownGenGateMode = v;
}

// acres: the town's 6x6 acre ids (TownMap::acres)
extern "C" void Town_GenerateAcres(u8 *acres) {
    TownAcreGenerator gen;
    gen.generate(sTownGenGateMode);
    gen.writeAcreIds(acres);
}
