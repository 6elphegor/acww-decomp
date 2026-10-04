#ifndef PLAYER_UNK_02006D14_ITEM_H
#define PLAYER_UNK_02006D14_ITEM_H

#include "types.h"

// Player action request passed to Unk_02006d14::changeAction and the setup* handlers.
// The 0x14-byte block at 0xc holds per-action arguments (viewed as Unk_02009d5c_Sub, Unk_02009f68_Bytes,
// Unk_0200b244_Out, ... by the handlers). Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Item {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ s16 netSeq;
    /* 0x0a */ u8 pad_0a[2];
    /* 0x0c */ u8 unk_0c[0x14];
};

#endif
