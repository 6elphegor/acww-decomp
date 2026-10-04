#ifndef NPC_NPCANIMCTRL_H
#define NPC_NPCANIMCTRL_H

#include "types.h"

struct Unk_02015fe0_Obj;

// 0x1c-byte NPC animation controller (talk gesture, animation speed). Defined in main, unk_020119cc.cpp (the
// unk_02015fe0.cpp part; C1 0x02016350, D1 0x02016340); a by-value member of every NPC actor.
class NpcAnimCtrl {
public:
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 talkGestureVariant;
    /* 0x10 */ u8 talkGestureActive;
    /* 0x11 */ u8 pad_11[3];
    /* 0x14 */ s32 animSpeedScale;
    /* 0x18 */ u8 unk_18[4];

    NpcAnimCtrl();
    ~NpcAnimCtrl();
    void playHoldItemPose(Unk_02015fe0_Obj *o, u16 *p, void *q, u16 x);
    void playAnim(Unk_02015fe0_Obj *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode);
    BOOL isPlayingAnim(s32 mode, void *p);
    s32 resolveAnimId(s32 mode, void *p);
    void *getAnimResource(s32 a, s32 b);
    BOOL initForActor(Unk_02015fe0_Obj *o, s32 a);
};

#endif
