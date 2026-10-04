#ifndef PLAYER_HELDTOOLMODEL_H
#define PLAYER_HELDTOOLMODEL_H

#include "types.h"

class BlendAnimModel;
struct Unk_02006d14;

// 0x40-byte model of the tool held in the player's hand (item, model handle, hand matrix). Defined in main,
// unk_020119cc.cpp (the unk_02011580.cpp part); member at +0x9b0 of the ov068 player-like actor.
struct HeldToolModel {
    /* 0x00 */ u16 heldItem;
    /* 0x02 */ u8 unk_02[2];
    /* 0x04 */ u8 modelHandle[8];
    /* 0x0c */ u8 handMtx[0x30];
    /* 0x3c */ u8 visible;
    /* 0x3d */ u8 pad_3d[3];

    ~HeldToolModel();
    void setModelAnimSpeed(u32 v);
    BlendAnimModel *getModel();
    void setAnimSpeed(u32 v);
    u32 getAnimSpeed();
    void draw(Unk_02006d14 *p);
    void update(Unk_02006d14 *p);
    void release();
    void playPitfallClimbOutAnim(u32 a, u32 b);
    void playPitfallClimbOutAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playPitfallStuckAnim(u32 a, u32 b);
    void playPitfallStuckAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playPitfallHoleAnim(u32 a, u32 b);
    void playPitfallHoleAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playPitfallFallAnim(u32 a, u32 b);
    void playPitfallFallAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playWalkAnim(u32 a, u32 b);
    void playWalkAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playIdleAnim(u32 a, u32 b);
    void playIdleAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playAnim(u32 a, u32 b, u32 c);
    BOOL attach(u32 a, u16 *b, u32 c, u16 d);
    BOOL load(u32 a);
    HeldToolModel *destroy();
    HeldToolModel *init();
};

#endif
