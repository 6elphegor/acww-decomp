#ifndef FIELD_FISHSHADOW_H
#define FIELD_FISHSHADOW_H

#include "types.h"

class FishBobber;

// Fish-code block pair (spawnBlock) and s32 vector with an empty constructor (A01 vector-shape candidates).
struct Unk_ov003_02220128_Pos {
    s32 a, b;
};

struct Unk_ov003_02220a2c_V3 {
    s32 x, y, z;
    Unk_ov003_02220a2c_V3() {}
};

// Per-shadow croak state (frogs: FishCroak_Init / _Update / _Clear).
struct FishCroak {
    u8 b0, b1, b2, b3;
};

// One fish shadow (0x24c bytes, sFishShadows[6]; code in src/ov003/unk_ov003_0221ffb8.cpp, also the fish returned
// by FishBobber_getFish). The constructor builds the sub-objects by hand (raw storage here:
// typed members would add implicit constructor calls); the AnimModel members the fish code reads directly are named
// in the union, at their FishShadow offsets.
struct FishShadow {
    FishShadow();
    ~FishShadow();
    /* 0x000 */ u8 seEmitter[0x40];      // SndSeEmitter
    /* 0x040 */ u8 envChannel[0xc];      // SndEnvChannel (vtable 0x0213b954)
    /* 0x04c */ u8 collisionState[0x30]; // CollisionState
    /* 0x07c */ u8 modelSlot[2];         // ModelSlotHandle
    /* 0x07e */ s8 fishId;
    /* 0x07f */ u8 hasFin;
    /* 0x080 */ s32 state;
    /* 0x084 */ u8 cachedModel[0x9c];    // CachedModel
    /* 0x120 */ Unk_ov003_02220a2c_V3 position;
    /* 0x12c */ s32 spawnPos, spawnPosY, spawnPosZ;
    /* 0x138 */ s16 rotY;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 stateTimer;
    /* 0x140 */ u16 cruiseTimer;
    /* 0x142 */ s16 wobblePhase;
    union {
        /* 0x144 */ u8 model[0xb8];      // AnimModel
        struct {
            /* 0x144 */ u8 pad_144[0x5c];
            /* 0x1a0 */ void *modelResMdl;   // model.resMdl
            /* 0x1a4 */ u8 pad_1a4[0x3c];
            /* 0x1e0 */ u8 animFrameCtrl[4]; // model's AnimFrameCtrl base (vtable)
            /* 0x1e4 */ u32 animNumFrames;   // model.numFrames
            /* 0x1e8 */ s32 animFrame;       // model.curFrame
            /* 0x1ec */ u8 pad_1ec[4];
            /* 0x1f0 */ s32 animFrameStep;   // model.frameStep
            /* 0x1f4 */ u8 pad_1f4[8];
        };
    };
    /* 0x1fc */ u8 spawnState;
    /* 0x1fd */ u8 alpha;
    /* 0x1fe */ u8 habitat;
    /* 0x1ff */ u8 sizeClass;
    /* 0x200 */ u8 moveState;
    /* 0x201 */ u8 appearCount;
    /* 0x202 */ u8 pad_202[2];
    /* 0x204 */ s32 effectHandle;
    /* 0x208 */ Unk_ov003_02220128_Pos spawnBlock;
    /* 0x210 */ u8 turnDir;
    /* 0x211 */ u8 slotIndex;
    /* 0x212 */ u16 respawnTimer;
    /* 0x214 */ u8 scareDelay;
    /* 0x215 */ u8 pad_215[3];
    /* 0x218 */ Unk_ov003_02220a2c_V3 prevPosition;
    /* 0x224 */ u8 biteState;
    /* 0x225 */ u8 biteStep;
    /* 0x226 */ u8 pad_226;
    /* 0x227 */ s8 playerIdx;
    /* 0x228 */ u8 pad_228[4];
    /* 0x22c */ FishBobber *bobber;
    /* 0x230 */ Unk_ov003_02220a2c_V3 hookPos;
    /* 0x23c */ u8 aiMode;
    /* 0x23d */ u8 biteStepTimer;
    /* 0x23e */ u8 pullDir;
    /* 0x23f */ u8 reelGoal;
    /* 0x240 */ u8 biteDelay;
    /* 0x241 */ u8 pad_241[3];
    /* 0x244 */ s32 despawnTimer;
    /* 0x248 */ FishCroak croak;
};

#endif
