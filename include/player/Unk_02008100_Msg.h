#ifndef PLAYER_UNK_02008100_MSG_H
#define PLAYER_UNK_02008100_MSG_H

#include "types.h"

// Player action request messages (hold-up item, error message, lid closed)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02008100_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u16 netSeq;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u16 args;
    /* 0x0e */ u8 unk_0e[0x0e];
};

struct Unk_020082e4_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u16 netSeq;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 args;
    /* 0x0d */ u8 unk_0d[0x0f];
};

struct Unk_02008404_Msg {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u16 netSeq;
    /* 0x0a */ u8 unk_0a[0x12];
};

#endif
