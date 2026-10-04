#ifndef UI_OAMCELLENTRY_H
#define UI_OAMCELLENTRY_H

#include "types.h"

// 8-byte OAM attribute entry of a sprite cell, walked by Oam_DrawCell / Oam_DrawObjRotated (src/main/unk_02087e70.cpp):
// attr0 | attr1 << 16, then attr2's char name / priority / palette and the attr3 slot (0xffff = last entry of the
// cell). Also the ov002 menu button cell tables sButtonCells* (MenuTextButton::cells).
struct OamCellEntry {
    /* 0x0 */ u32 attr01;
    /* 0x4 */ u32 charName : 10;
    u32 priority : 2;
    u32 palette : 4;
    u32 attr3 : 16;
};

#endif
