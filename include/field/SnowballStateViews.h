#ifndef FIELD_SNOWBALLSTATEVIEWS_H
#define FIELD_SNOWBALLSTATEVIEWS_H

#include "types.h"

// Two flat views of the snowball field object (ov003 Snowball, 0x3a0 bytes) that own the snowball state functions of
// the ptmf state tables (ov003 unk_ov003_02212830.cpp). The methods are defined in src/ov068/unk_ov068_02267584.cpp.
class SnowballStateView1 {
public:
    void execSnowballCrumble2();
    BOOL enterSnowballCrumble2();
    void execSnowballCrumble();
    BOOL enterSnowballCrumble();
    void execSnowballSettle();
    BOOL enterSnowballSettle();
    void execSnowballStack();

    /* 0x000 */ u8 pad_00[0x5c];
    /* 0x05c */ s32 position;
    /* 0x060 */ s32 positionY;
    /* 0x064 */ s32 positionZ;
    /* 0x068 */ u8 pad_68[0xa8 - 0x68];
    /* 0x0a8 */ s32 velocityY;
    /* 0x0ac */ u8 pad_ac[0x268 - 0xac];
    /* 0x268 */ s32 radius;
    /* 0x26c */ s32 collisionRadius;
    /* 0x270 */ u8 pad_270[0x304 - 0x270];
    /* 0x304 */ s32 drawOffset;
    /* 0x308 */ s32 drawOffsetY;
    /* 0x30c */ s32 drawOffsetZ;
    /* 0x310 */ s32 stepX;
    /* 0x314 */ s32 stepZ;
    /* 0x318 */ u8 pad_318[0x374 - 0x318];
    /* 0x374 */ u16 snowballFlags;
    /* 0x376 */ u16 pad_376;
    /* 0x378 */ s32 targetPosX;
    /* 0x37c */ s32 targetPosY;
    /* 0x380 */ s32 targetPosZ;
    /* 0x384 */ u8 pad_384[0x392 - 0x384];
    /* 0x392 */ s16 wobblePhase;
    /* 0x394 */ u8 crumbleTimer;
    /* 0x395 */ u8 stepCount;
};

class SnowballStateView2 {
public:
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 param;
    /* 0x0c */ u8 pad_0c[0x50];
    /* 0x5c */ s32 position;
    /* 0x60 */ s32 positionY;
    /* 0x64 */ s32 positionZ;
    /* 0x68 */ s32 prevPosition;
    /* 0x6c */ u8 pad_6c[4];
    /* 0x70 */ s32 prevPositionZ;
    /* 0x74 */ u8 pad_74[0x34];
    /* 0xa8 */ s32 velocityY;
    /* 0xac */ u8 pad_ac[0x268 - 0xac];
    /* 0x268 */ s32 radius;
    /* 0x26c */ s32 collisionRadius;
    /* 0x270 */ s32 collisionState;
    /* 0x274 */ s32 collisionFlags;
    /* 0x278 */ u8 pad_278[0x2ec - 0x278];
    /* 0x2ec */ s32 rollVelX;
    /* 0x2f0 */ s32 rollVelZ;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u32 drawOffset;
    /* 0x308 */ s32 drawOffsetY;
    /* 0x30c */ u32 drawOffsetZ;
    /* 0x310 */ s32 stepX;
    /* 0x314 */ s32 stepZ;
    /* 0x318 */ u8 pad_318[0x324 - 0x318];
    /* 0x324 */ u8 seEmitter[0x364 - 0x324];
    /* 0x364 */ u8 fallFrames;
    /* 0x365 */ u8 pad_365[0x374 - 0x365];
    /* 0x374 */ u16 snowmanIndex : 2;
    u16 unk_374_b2 : 2;
    u16 unk_374_b4 : 1;
    u16 unk_374_b5 : 1;
    /* 0x376 */ u8 pad_376[2];
    /* 0x378 */ s32 targetPosX;
    /* 0x37c */ s32 targetPosY;
    /* 0x380 */ s32 targetPosZ;
    /* 0x384 */ s32 holePos[3];
    /* 0x390 */ u8 pad_390[2];
    /* 0x392 */ u16 wobblePhase;
    /* 0x394 */ u8 pad_394;
    /* 0x395 */ u8 stepCount;
    /* 0x396 */ u16 displacedItem;

    s32 enterSnowballStack();
    void execSnowballToSnowman();
    s32 enterSnowballToSnowman();
    void execSnowballSplash();
    s32 enterSnowballSplash();
    void execSnowball05();
    s32 enterSnowball05();
    void execSnowballHole();
    s32 enterSnowballHole();
    void execSnowballBreak();
    s32 enterSnowballBreak();
    void execSnowballSink();
    s32 enterSnowballSink();
    void execSnowballFall();
    s32 enterSnowballFall();
};

#endif
