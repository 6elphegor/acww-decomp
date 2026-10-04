#ifndef GAME_UNK_02095774_ENT_H
#define GAME_UNK_02095774_ENT_H

#include "types.h"

// Scene/comm sync helpers shared by src/main/unk_02095794.cpp, unk_02095b1c.cpp and unk_02095cdc.cpp.

struct Unk_02095774_Ent {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
};

struct Unk_0209579c_Rec {
    /* 0x00 */ u8 pad_00[0xe];
    /* 0x0e */ u8 state;
};

struct Unk_02095dcc_Grid {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ s32 unitsX;
    /* 0x10 */ s32 unitsZ;
};

struct Unk_0209579c_Pos {
    s32 x, y, z;
    Unk_0209579c_Pos() {}
};

struct Unk_0209579c_L {
    /* 0x00 */ u8 a, b;
    /* 0x02 */ s16 c;
    /* 0x04 */ s16 r1[3];
    /* 0x0a */ s16 pad;
    /* 0x0c */ s32 v1, x1, y1;
    /* 0x18 */ s16 r2[3];
    /* 0x1e */ s16 r3[3];
    /* 0x24 */ s32 v2, x2, y2;
};

struct Unk_02095f38_G {
    /* 0x00 */ u8 pad_00[0x58];
    /* 0x58 */ u32 unk_58;
};

#endif // GAME_UNK_02095774_ENT_H
