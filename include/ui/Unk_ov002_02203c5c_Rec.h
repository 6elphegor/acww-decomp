#ifndef UI_UNK_OV002_02203C5C_REC_H
#define UI_UNK_OV002_02203C5C_REC_H

// 8-byte button-cell animation record of the ov002 menus (sButtonCells* tables).
#include "types.h"

struct Unk_ov002_02203c5c_Rec {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u32 charName : 10;
    u32 unk_04_hi : 22;
};

#endif
