#ifndef PLAYER_UNK_0200B76C_MSG_H
#define PLAYER_UNK_0200B76C_MSG_H

#include "types.h"
#include "player/Unk_0200b750.h"
#include "player/Unk_0200bda0.h"

// Player action request messages with arguments (pick-up reach, pick-up reach net, action 10)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_0200b76c_Msg {
    /* 0x00 */ u32 action, priority, netSeq;
    /* 0x0c */ Unk_0200b7bc args;
    /* 0x14 */ u8 pad_14[8];
};

struct Unk_0200ba8c_Msg {
    /* 0x00 */ u32 action, priority, netSeq;
    /* 0x0c */ Unk_0200b750 args;
    /* 0x14 */ u8 pad_14[0x8];
};

struct Unk_0200bd60_Msg {
    /* 0x00 */ u32 action, priority, netSeq;
    /* 0x0c */ Unk_0200bda0 args;
    /* 0x0e */ u8 pad_0e[0xe];
};

#endif
