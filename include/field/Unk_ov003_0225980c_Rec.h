#ifndef FIELD_UNK_OV003_0225980C_REC_H
#define FIELD_UNK_OV003_0225980C_REC_H

#include "types.h"

// s32 vector of the ov003 insect code (namespaces s02/s03/s08 of unk_ov003_02225800.cpp typedef it as V3).
struct Unk_ov003_0225980c_V3 {
    /* 0x00 */ s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

// One 0x25c-byte insect entry of the tables at sSpecialInsects (2), 0225980c (4), 0225a17c (8).
// Merged from the s03 and s08 views in unk_ov003_02225800.cpp.
struct Unk_ov003_0225980c_Rec {
    /* 0x000 */ u8 pad_000[0x20];
    /* 0x020 */ u8 unk_20[0x50 - 0x20]; // collision state (Collision_Move)
    /* 0x050 */ u8 model[0x9c];
    /* 0x0ec */ u8 animFrameCtrl[4];
    /* 0x0f0 */ s32 animNumFrames;
    /* 0x0f4 */ u32 animFrame;
    /* 0x0f8 */ u8 unk_f8[8];
    /* 0x100 */ u8 unk_100;
    /* 0x101 */ u8 pad_101[0x130 - 0x101];
    /* 0x130 */ u8 pooledModel[0x174 - 0x130];
    /* 0x174 */ u8 seEmitter[0x1c8 - 0x174];
    /* 0x1c8 */ Unk_ov003_0225980c_V3 homePos;
    /* 0x1d4 */ Unk_ov003_0225980c_V3 targetPos;
    /* 0x1e0 */ u8 pad_1e0[0x204 - 0x1e0];
    /* 0x204 */ Unk_ov003_0225980c_V3 position;
    /* 0x210 */ s32 scaleX;
    /* 0x214 */ s32 scaleY;
    /* 0x218 */ s32 scaleZ;
    /* 0x21c */ s32 behaviorWork;
    /* 0x220 */ s32 targetHeight;
    /* 0x224 */ s32 disturbRadius;
    /* 0x228 */ s32 baseHeight;
    /* 0x22c */ s32 effectHandle;
    /* 0x230 */ u8 pad_230[2];
    /* 0x232 */ s16 auxTimer;
    /* 0x234 */ u8 pad_234[4];
    /* 0x238 */ s16 rotX;
    /* 0x23a */ s16 rotY;
    /* 0x23c */ s16 rotZ;
    /* 0x23e */ u8 pad_23e[4];
    /* 0x242 */ s16 stateTimer;
    /* 0x244 */ u8 pad_244[2];
    /* 0x246 */ u8 canSing;
    /* 0x247 */ u8 playerHoldsNet;
    /* 0x248 */ u8 inUse;
    /* 0x249 */ u8 inView;
    /* 0x24a */ u8 isAlarmed;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 kind;
    /* 0x24e */ u8 pad_24e[2];
    /* 0x250 */ u8 lifeState;
    /* 0x251 */ u8 state;
    /* 0x252 */ u8 cooldownTimer;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 alarm;
    /* 0x255 */ u8 pad_255[0x25c - 0x255];
};

#endif
