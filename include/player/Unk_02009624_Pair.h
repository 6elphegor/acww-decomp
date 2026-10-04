#ifndef PLAYER_UNK_02009624_PAIR_H
#define PLAYER_UNK_02009624_PAIR_H

#include "types.h"

// Item pair passed between player actions (action 10 hand-off)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02009624_Pair {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u16 item;
    /* 0x6 */ u8 fromAct10;
};

#endif
