#ifndef NPC_UNK_OV004_0221572C_SUB_H
#define NPC_UNK_OV004_0221572C_SUB_H

#include "types.h"

// 0x18-byte state block of the birthday host/guest villagers (ov004 unk_ov004_02214948, unk_ov004_02215f04).

struct Unk_ov004_0221572c_Sub {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[8];
    /* 0x14 */ s32 unk_14;
};

#endif // NPC_UNK_OV004_0221572C_SUB_H
