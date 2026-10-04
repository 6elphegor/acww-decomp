#ifndef GAME_UNK_OV068_02268214_H
#define GAME_UNK_OV068_02268214_H

#include "types.h"
#include "game/Unk_ov068_02268214_Flags.h"

// ov068 snowball / critter object view (snowball roll, insects, bees, spiders, dung beetle). Methods are defined in
// src/ov068/unk_ov068_02267584.cpp (snowball roll) and src/ov068/unk_ov068_022687c0.cpp (critters).
// src/ov003/unk_ov003_02212830.cpp keeps its own copy: there the class derives from ov003's Snowball, which its
// state tables need for the member-function-pointer casts.

class Unk_ov068_02268214 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ s32 position;
    /* 0x060 */ s32 positionY;
    /* 0x064 */ s32 positionZ;
    /* 0x068 */ u8 pad_068[8];
    /* 0x070 */ s32 prevPositionZ;
    /* 0x074 */ u8 pad_074[0x34];
    /* 0x0a8 */ s32 velocityY;
    /* 0x0ac */ u8 pad_0ac[0xf4 - 0xac];
    /* 0x0f4 */ s32 unk_f4;
    /* 0x0f8 */ u8 pad_0f8[0x130 - 0xf8];
    /* 0x130 */ u8 unk_130[0x204 - 0x130];
    /* 0x204 */ s32 unk_204[3];
    /* 0x210 */ s32 scale[3];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 targetHeight;
    /* 0x224 */ u8 pad_224[4];
    /* 0x228 */ s32 baseHeight;
    /* 0x22c */ u8 pad_22c[6];
    /* 0x232 */ s16 stateTimer;
    /* 0x234 */ u8 pad_234[6];
    /* 0x23a */ s16 heading;
    /* 0x23c */ u8 pad_23c[4];
    /* 0x240 */ u16 targetHeading;
    /* 0x242 */ u16 unk_242;
    /* 0x244 */ u16 unk_244;
    /* 0x246 */ u8 pad_246[4];
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 kind;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 frameCounter;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 behaviorState;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 alarm;
    /* 0x255 */ u8 alarmThreshold;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 moveSpeed;
    /* 0x258 */ u8 pad_258[0x268 - 0x258];
    /* 0x268 */ s32 radius;
    /* 0x26c */ s32 collisionRadius;
    /* 0x270 */ s32 collisionState;
    /* 0x274 */ u8 pad_274[8];
    /* 0x27c */ s16 unk_27c[2];
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 pad_281[0x2ec - 0x281];
    /* 0x2ec */ s32 rollVelX;
    /* 0x2f0 */ s32 rollVelZ;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u8 unk_304[0x324 - 0x304];
    /* 0x324 */ u8 seEmitter[0x368 - 0x324];
    /* 0x368 */ s32 unk_368;
    /* 0x36c */ s32 unk_36c;
    /* 0x370 */ u8 pad_370[4];
    /* 0x374 */ union {
        u16 snowballFlags;
        Unk_ov068_02268214_Flags fl_374;
    };
    /* 0x376 */ u8 pad_376[0x398 - 0x376];
    /* 0x398 */ s32 snowballState;
    /* 0x39c */ s32 talkAct;

    BOOL enterSnowballRoll();
    void spawnSnowballSplash();
    void spawnSnowballBreak();
    void applySnowballMotion();
    void execSnowballRoll();
    void antsAppear();
    void insectFleeFrom(s32 *p);
    BOOL insectFindFlowerTarget(s16 *out, s32 *dist, s32 *pos);
    void insectWanderSteer(s16 *p, s32 a, s32 b, u8 thr, s32 sc);
    void beeChasePlayer();
    void beeSwarmDescend();
    void beeEnterSwarm();
    void mosquitoChase(s16 *p);
    BOOL spiderSway();
    BOOL spiderCheckPlayerHit();
    void dungBeetlePushSnowball();
    void dungBeetleWalk();
    void hovererFly();
};

#endif
