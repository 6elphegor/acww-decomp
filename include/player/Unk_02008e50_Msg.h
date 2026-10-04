#ifndef PLAYER_UNK_02008E50_MSG_H
#define PLAYER_UNK_02008E50_MSG_H

#include "types.h"
#include "player/Unk_02008e50_Pay.h"
#include "player/Unk_02008f5c.h"

// Player action request messages (action, priority, net sequence, action arguments) of actions 76/77 and of the
// turn-to action; built in src/main/unk_02004558.cpp / unk_02004558_extra.cpp.
struct Unk_02008e50_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u32 netSeq;
    /* 0x0c */ Unk_02008e50_Pay args;
};

struct Unk_02008f60_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u32 netSeq;
    /* 0x0c */ Unk_02008fa0 args;
    /* 0x0e */ u8 pad_0e[0xe];
};

#endif
