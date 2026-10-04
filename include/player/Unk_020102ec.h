#ifndef PLAYER_UNK_020102EC_H
#define PLAYER_UNK_020102EC_H

// Player actor animation / collider / movement view (0x800 bytes); its methods (0x020102ec..) are defined in
// unk_02004558.cpp. Plus the small records its code passes around.
#include "types.h"

struct Unk_020107c8_Blk {
    /* 0x0 */ u32 x;
    /* 0x4 */ u32 y;
    /* 0x8 */ u32 z;
}; // size 0xc

struct Unk_02010924_Msg {
    /* 0x0 */ u8 scene;
    /* 0x2 */ s16 netAngle;
    /* 0x4 */ s16 curAngle;
}; // size 0x6

struct Unk_02010a58_Blk {
    /* 0x0 */ u16 rotX;
    /* 0x2 */ s16 rotY;
}; // size 0x4

struct Unk_02010b08_Time {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u32 unk_04;
}; // size 0x8

struct Unk_02010b08_Bits {
    /* 0x0 */ u16 unk_a : 7;
    u16 unk_b : 4;
    u16 unk_c : 5;
}; // size 0x2

struct Unk_0201065c_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
}; // size 0xc

class Unk_020102ec {
public:
    void replayAnim();
    void startAnimOnce(s32 a, u32 b, u16 c);
    void switchAnim(s32 a, u32 b, u16 c);
    void startAnim(s32 a, u32 b, u16 c);
    void playAnim(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g);
    void setMouthAnim(s32 *a, u8 *b);
    void setEyeAnim(s32 *a, u8 *b);
    void setMouthAnimForBody(s32 *a, u8 *b);
    void setEyeAnimForBody(s32 *a, u8 *b);
    void initFaceAnims();
    void submitSceneCollider();
    void updateCollidersAtDrawPos(u32 *a);
    void updateBodyCollider();
    void setSubCollider(u32 a, u32 b, u32 c);
    void setSubColliderBody(u32 *a);
    void setBodyColliderAtDrawPos(u32 *a);
    void setBodyCollider(u32 *a);
    void setBodyColliderAt(Unk_020107c8_Blk *a, u32 *b);
    u32 getBodyColliderFlags(u32 *a);
    void updateMouthAnim();
    void updateEyeAnim();
    void updateFaceAnims();
    void advanceAnim();
    BOOL netApproachTransform();
    void moveNoCollision();
    void moveWithCollision();
    void setSpeed(u32 *a);
    void approachRotX();
    void setRotX(u16 a);
    void setAngleY(s16 *a);
    u32 getAnimResIndex(u32 *a);
    u8 func_02007c50(u32 a);
    u32 calcTan(u32 a);
    u8 *P(u32 off) { return (u8 *)this + off; }

    /* 0x000 */ u8 pad_00[0x8];
    /* 0x008 */ u32 param;
    /* 0x00c */ u8 pad_0c[0x50];
    /* 0x05c */ s32 positionX;
    /* 0x060 */ u32 positionY;
    /* 0x064 */ s32 positionZ;
    /* 0x068 */ u8 pad_68[0x24];
    /* 0x08c */ u16 rotX;
    /* 0x08e */ s16 rotY;
    /* 0x090 */ u8 pad_90[0x4];
    /* 0x094 */ s16 moveAngleY;
    /* 0x096 */ u8 pad_96[0x2];
    /* 0x098 */ u32 speed;
    /* 0x09c */ u8 pad_9c[0x238];
    /* 0x2d4 */ u32 unk_2d4_lo : 12;
    u32 unk_2d4_mid : 16;
    u32 unk_2d4_hi : 4;
    /* 0x2d8 */ u8 pad_2d8[0x4];
    /* 0x2dc */ u32 bodyAnimFrameStep;
    /* 0x2e0 */ u8 bodyAnimPlayMode;
    /* 0x2e1 */ u8 pad_2e1[0x103];
    /* 0x3e4 */ s32 headResMdl;
    /* 0x3e8 */ u8 pad_3e8[0x308];
    /* 0x6f0 */ u32 bodyPosX;
    /* 0x6f4 */ u8 pad_6f4[0x4];
    /* 0x6f8 */ u32 bodyPosZ;
    /* 0x6fc */ u8 pad_6fc[0x4];
    /* 0x700 */ s32 animId;
    /* 0x704 */ u8 pad_704[0x4];
    /* 0x708 */ u8 animMode;
    /* 0x709 */ u8 pad_709[0xb];
    /* 0x714 */ s32 eyeAnimFrame;
    /* 0x718 */ u8 pad_718[0x28];
    /* 0x740 */ s32 mouthAnimFrame;
    /* 0x744 */ u8 pad_744[0x24];
    /* 0x768 */ s32 eyeAnimId;
    /* 0x76c */ s32 mouthAnimId;
    /* 0x770 */ u8 pad_770[0x7c];
    /* 0x7ec */ u32 action;
    /* 0x7f0 */ u8 pad_7f0[0xc];
    /* 0x7fc */ u32 sessionSlot;
}; // size 0x800

#endif // PLAYER_UNK_020102EC_H
