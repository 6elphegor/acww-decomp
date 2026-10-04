#ifndef PLAYER_UNK_0200B868_MSG_H
#define PLAYER_UNK_0200B868_MSG_H

#include "types.h"

// Player action request message without arguments (action 10 / emotion)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_0200b868_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u32 netSeq;
    /* 0x0c */ u8 pad_0c[0x14];
};

#endif
