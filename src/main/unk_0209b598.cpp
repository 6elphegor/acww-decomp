#include "town/TownAcreGrid.h"
#include "types.h"

// TU178: 0x0209b598-0x0209b5d4. One setting word in .data (0x020e22cc) and the function that applies it to a
// temporary TownAcreGenerator grid.

extern "C" {
// TownAcreGenerator (0x140 bytes), called by its symbols.txt names
}

s32 sTownGenGateMode = 3;

extern "C" void Town_SetGenGateMode(s32 v) {
    sTownGenGateMode = v;
}

extern "C" void Town_GenerateAcres(u8 *acres) {
    u32 buf[HOST_SIZED(0x140, TownAcreGenerator) / 4] HOST_ALIGN8;
    new (buf) TownAcreGenerator();
    ((TownAcreGenerator *)(buf))->generate(sTownGenGateMode);
    ((TownAcreGenerator *)(buf))->writeAcreIds(acres);
    ((TownAcreGenerator *)(buf))->~TownAcreGenerator();
}
