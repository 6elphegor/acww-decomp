#ifndef NPC_NPCFACEANIM_H
#define NPC_NPCFACEANIM_H

#include "types.h"
#include "actor/BlinkTimer.h"
#include "npc/NpcResHandleView.h"
#include "gfx/MatTexPatAnim.h"

class NpcActor;

// NPC face animation (0x88 bytes): eye blink timer, face texture-pattern resource handles and the eye / mouth
// material texture animations. Defined in src/main/unk_020119cc.cpp (0x020198c4..0x02019dd8).
struct NpcFaceAnim : BlinkTimer {
    /* 0x04 */ NpcTexPatHeapHandle texPatHeap;
    /* 0x0c */ NpcTexPatBufRefHandle texPatBuf;
    /* 0x14 */ NpcFaceAnimHandle faceAnimRef;
    /* 0x1c */ MatTexPatAnim eyeTexAnim;
    /* 0x48 */ MatTexPatAnim mouthTexAnim;
    /* 0x74 */ s32 eyeAnimId;
    /* 0x78 */ s32 mouthAnimId;
    /* 0x7c */ s32 savedMouthAnimId;
    /* 0x80 */ s32 talkMouthVariant;
    /* 0x84 */ u8 loaded;

    NpcFaceAnim();
    ~NpcFaceAnim();
    void release();
    void blinkNow();
    void resumeMouthMaterial();
    BOOL setMouthTexture(u32 a);
    BOOL setMaterialTex(void *m, void *q, u32 r);
    void setFaceAnimsFrom(void *a, s32 b, s32 c);
    void setFaceAnims(s32 t, s32 u, s32 x, s32 mode);
    void restoreMouthAnim();
    void startTalkMouth(s32 i);
    void setMouthAnim(s32 v, u32 w);
    BOOL isMouthCycleDone();
    void randomizeTalkMouth();
    BOOL isTalkMouthCycleDone(s32 a, s32 b, s32 c);
    s32 getTalkMouthStartFrame(s32 v);
    void pickTalkMouthVariant();
    BOOL isTalkMouthAnim(s32 v);
    BOOL load(NpcActor *o);
    s32 getMouthAnim();
    BOOL isLoaded();
    void update(u8 *o);
};

#endif
