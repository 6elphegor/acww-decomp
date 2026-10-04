#ifndef PLAYER_UNK_020050E0_H
#define PLAYER_UNK_020050E0_H

#include "types.h"

// Joint-callback context passed to PlayerActor_JointCbStart/Pre/Post (next callback at 0x24).
// Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_020050e0_P;
struct Unk_020050e0_Q;
struct Unk_020050e0_R;

struct Unk_020050e0 {
    /* 0x00 */ Unk_020050e0_P *c;
    /* 0x04 */ Unk_020050e0_Q *pRenderObj;
    /* 0x08 */ u8 unk_08[0x1c];
    /* 0x24 */ void (*unk_24)(Unk_020050e0 *);
    /* 0x28 */ u8 unk_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
    /* 0x93 */ u8 unk_93[0xb4 - 0x93];
    /* 0xb4 */ Unk_020050e0_R *pJntAnmResult;
};

#endif
