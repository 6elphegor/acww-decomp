#ifndef PLAYER_UNK_02006D14_7D0_H
#define PLAYER_UNK_02006D14_7D0_H

#include "types.h"

// Union view of the player action work area at 0x7d0 (0x18 bytes) used by the action handlers of
// src/main/unk_02004558.cpp / unk_02004558_extra.cpp (PlayerActor unit). See also player/Unk_02006d14_Sub7d0.h.
struct Unk_02006d14_7d0 {
    union {
        struct { s16 unk_00; u8 unk_02, unk_03, unk_04, unk_05, unk_06; };
        struct { s32 w0; s32 w4; s32 w8; s32 wc; s32 w10; s32 w14; };
        struct { u16 h0, h2; u16 h4; u8 b6; };
        struct { u8 c0, c1; u8 pad_02[2]; u8 b4, b5; };
    };
    void set_h2(s16 v) { h2 = v; }
};

#endif
