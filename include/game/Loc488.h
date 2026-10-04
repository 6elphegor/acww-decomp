#ifndef GAME_LOC488_H
#define GAME_LOC488_H

#include "types.h"

// 4-byte local record {u8, pad, u16 item} passed to the letter senders (Snowman_SendLetter in unk_020af3f4,
// unk_020af258, unk_020ac750). No defining TU.
struct Loc488 {
    /* 0x0 */ u8 a;
    /* 0x1 */ u8 pad;
    /* 0x2 */ u16 b;
};

#endif
