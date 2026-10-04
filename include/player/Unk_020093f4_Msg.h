#ifndef PLAYER_UNK_020093F4_MSG_H
#define PLAYER_UNK_020093F4_MSG_H

#include "types.h"
#include "player/Unk_0200944c.h"

// Player action request message (action, priority, net sequence, walk-to arguments), 0x20 bytes; built in
// src/main/unk_02004558.cpp (0x02008cc0 section; also declared by src/main/unk_02004558_extra.cpp).
struct Unk_020093f4_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u32 netSeq;
    /* 0x0c */ Unk_0200944c args;
    /* 0x1c */ u8 pad_1c[4];
};

#endif
