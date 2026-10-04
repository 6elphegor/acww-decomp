#ifndef PLAYER_HELDTOOLMODEL_H
#define PLAYER_HELDTOOLMODEL_H

#include "types.h"

struct Unk_0205dfa4;
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
    void func_02011b60(u32 v);
    Unk_0205dfa4 *func_02011b7c();
    void setAnimSpeed(u32 v);
    u32 getAnimSpeed();
    void draw(Unk_02006d14 *p);
    void update(Unk_02006d14 *p);
    void release();
    void func_02011c44(u32 a, u32 b);
    void func_02011c64(HeldToolModel *p, u32 a, u32 b);
    void func_02011c9c(u32 a, u32 b);
    void func_02011cbc(HeldToolModel *p, u32 a, u32 b);
    void func_02011cf4(u32 a, u32 b);
    void func_02011d14(HeldToolModel *p, u32 a, u32 b);
    void func_02011d4c(u32 a, u32 b);
    void func_02011d6c(HeldToolModel *p, u32 a, u32 b);
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
