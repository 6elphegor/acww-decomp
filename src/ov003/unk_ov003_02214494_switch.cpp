// mwcc-version: 1.2/base
// mwcc-flags: -O4,s
#include "types.h"
#include "field/Unk_ov003_02214494_Views.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "talk/TalkWindowState.h"
#include "game/ReddPassword.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"










class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd(u32 attr);
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getEntranceType();
    s32 getInteriorScene();
    BOOL getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x12e */ u16 unk_12e;    // in TalkMsgRequest's tail padding (door-close SE delay in ov009)
    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 entryPos;
    /* 0x2b0 */
};



extern "C" {
s32 Scene_GetCurrent();
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *p);
}

extern "C" {
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *);
s32 Scene_GetCurrent();
}

class ReddTent : public BuildingActor {
public:
    ReddTent();
    virtual ~ReddTent();
    virtual BOOL onExecute();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();
    virtual void onMessageEnd(u32 attr);
    virtual BOOL vfunc_8c();
    virtual void onMessageStart(u32 attr);
    virtual void onChoice(u32 attr);
    virtual s32 getVoiceType();

    void execTentIdle();
    void execTentCheck();
    void execTentTalkOpen();
    void execTentTalk();
    void execTentMenuWait();
    void execTentMenu();
    void execTentGoIn();
    void execTentEntry07();
    void execTentWalkIn();
    void execTentWarp();
    BOOL enterTentIdle();
    BOOL enterTentCheck();
    BOOL enterTentTalkOpen();
    BOOL enterTentTalk();
    BOOL enterTentMenuWait();
    BOOL enterTentMenu();
    BOOL enterTentGoIn();
    BOOL enterTentEntry07();
    BOOL enterTentWalkIn();
    BOOL enterTentWarp();
    void updateTentState();
    BOOL setTentState(s32 i);

    /* 0x2b0 */ s32 tentState;
    /* 0x2b4 */ u16 warpFrames; u8 doorEnterRequested;
    /* 0x2b7 */ u8 createHour;
};

void ReddTent::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        BuildingActor::vfunc_4c(a, b);
        break;
    case 0:
    case 1:
        setTentState(1);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        break;
    case 8:
        setTentState(0);
        break;
    }
}