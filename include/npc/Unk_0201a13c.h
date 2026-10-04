#ifndef NPC_UNK_0201A13C_H
#define NPC_UNK_0201A13C_H

#include "types.h"

// Symbol-name view (0x7c bytes) whose methods (isOnTarget, update, lookAtPoint, ...) run on NpcActor::lookAt; defined in
// src/main/unk_020119cc.cpp (unk_02019998 section). Its ctor/dtor 0x0201a13c / 0x0201a138 are NpcEmotionFx's, which is
// the real type of NpcActor::emotionFx (0x28 bytes, followed by NpcActor::jointMtx / jointPos). Only the kept NpcActor
// copy in src/main/unk_0201c050.cpp still uses it as a member type.

struct Unk_0201a1e0_Base;
struct Unk_0201a25c_Src;

struct Unk_0201a13c {
    /* 0x00 */ u8 lookType;
    /* 0x01 */ u8 pad_01[7];
    /* 0x08 */ u8 targetPos[0x10];
    /* 0x18 */ u8 disabled;
    /* 0x19 */ u8 pad_19;
    /* 0x1a */ s16 pitch;
    /* 0x1c */ s16 pitchStep;
    /* 0x1e */ s16 manualPitch;
    /* 0x20 */ u8 pad_20[2];
    /* 0x22 */ s16 yaw;
    /* 0x24 */ s16 yawStep;
    /* 0x26 */ s16 manualYaw;
    /* 0x28 */ s16 yawLimit;
    /* 0x2a */ u8 onTarget;
    /* 0x2b */ u8 pad_2b[0x58 - 0x2b];
    /* 0x58 */ u8 unk_58[4]; // address passed as an effect position by SpNpcKatie (src/main/unk_020c0324.cpp)
    /* 0x5c */ s32 maxDistance;
    /* 0x60 */ u8 useYawLimit;
    /* 0x61 */ u8 pad_61[0x7c - 0x61];

    Unk_0201a13c();
    ~Unk_0201a13c();
    BOOL isOnTarget();
    BOOL isWithinYawLimit(s32 v);
    void update(Unk_0201a1e0_Base *base);
    void approachManualAngles();
    void lookAtPoint(Unk_0201a25c_Src *o);
    s32 func_0201a53c(void *a, void *b, s32 c);
    s32 func_0201a578(void *a, void *b, s32 c);
    s32 func_0201a5b8(void *a, void *b, s32 c);
    BOOL NpcLookAt_GetHeadPos(void *a);
};

#endif
