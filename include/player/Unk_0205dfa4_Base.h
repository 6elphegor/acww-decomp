#ifndef PLAYER_UNK_0205DFA4_BASE_H
#define PLAYER_UNK_0205DFA4_BASE_H

#include "types.h"

// Bases of Unk_0205dfa4 (src/main/unk_02004558.cpp, namespace nM copy): an opaque 0x9c-byte base and an
// animation-frame counter.

struct Unk_0205dfa4_Sub {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 numFrames;
    /* 0x08 */ s32 curFrame;
    /* 0x0c */ s32 prevFrame;
    /* 0x10 */ s32 frameStep;
};

struct Unk_0205dfa4_Base {
    /* 0x00 */ u8 pad_00[0x9c];
};

#endif
