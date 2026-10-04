#ifndef TALK_UNK_0203E22C_STATE_H
#define TALK_UNK_0203E22C_STATE_H

#include "types.h"

// Current talk request (gTalkRequestCurrent; src/main/unk_0203e7d0.cpp, unk_0203e438.cpp).
// Same 0x18-byte shape as TalkRequestEntry.

struct Unk_0203e22c_State {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ void *unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
};

#endif
