#ifndef NPC_NPCANIMCTRL_H
#define NPC_NPCANIMCTRL_H

#include "types.h"

class NpcActor;

// 0x1c-byte NPC animation controller (talk gesture, animation speed). Defined in main, unk_020119cc.cpp (the
// unk_02015fe0.cpp part; C1 0x02016350, D1 0x02016340); a by-value member of every NPC actor.
class NpcAnimCtrl {
public:
    /* 0x00 */ u8 unk_00[8];
    /* 0x08 */ s32 animSpeed;
    /* 0x0c */ s32 talkGestureVariant;
    /* 0x10 */ u8 talkGestureActive;
    /* 0x11 */ u8 pad_11[3];
    /* 0x14 */ s32 animSpeedScale;
    /* 0x18 */ u8 animSpeedFixed;
    /* 0x19 */ u8 pad_19[3];

    NpcAnimCtrl();
    ~NpcAnimCtrl();
    void playHoldItemPose(NpcActor *o, u16 *p, void *q, u16 x);
    void playAnim(NpcActor *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode);
    BOOL isPlayingAnim(s32 mode, void *p);
    s32 resolveAnimId(s32 mode, void *p);
    void *getAnimResource(s32 a, s32 b);
    BOOL initForActor(NpcActor *o, s32 a);
    // unk_020156ac part (0x02015b8c..0x02015fe0)
    void syncMouthType(NpcActor *scene);
    void update(NpcActor *scene);
    s32 getTalkGestureEnd(u32 k);
    s32 getTalkGestureStart(u32 k);
    void updateAnimSpeed(NpcActor *scene);
    s32 getAnimId(u32 idx);
    BOOL isAnimFinished(NpcActor *scene);
    void playAnimKeepFrame(NpcActor *scene, u32 c, u32 d, u32 e);
    void setAnimSpeedFixed(u8 v);
    void stopTalkGesture(NpcActor *scene);
    void playTalkGesture(NpcActor *scene, u32 a, u32 b);
    u32 getTalkGestureData();
    void loadTalkGesture();
    BOOL hasTalkGesture();
    s32 release();
};

#endif
