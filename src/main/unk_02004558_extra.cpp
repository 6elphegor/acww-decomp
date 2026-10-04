// mwcc-version: 1.2/base
// The 14 functions of the translation unit 0x02004558-0x0201106c that only mwcc 1.2/base compiles
// to the original code (see unk_02004558.cpp; same declarations, nothing else is defined here).
#include "types.h"
#include "net/CommManager.h"
#include "player/Unk_02005294_Vec3.h"
#include "player/Unk_020050e0_P.h"
#include "player/Unk_020050e0_Q.h"
#include "player/Unk_020050e0_R.h"
#include "player/Unk_020050e0.h"
#include "player/Unk_02005f50_Flags.h"
#include "player/Unk_02005f50_V3.h"
#include "player/Unk_02005f50_Area.h"
#include "player/Unk_02005f50_Pkt.h"
#include "player/Unk_02006d14_Pair.h"
#include "player/Unk_02006d14_Vec.h"
#include "player/Unk_02006d14_Vec3.h"
#include "player/Unk_02006d14_V3.h"
#include "player/Unk_02006d14_Item.h"
#include "player/Unk_02006d14_Data.h"
#include "player/Unk_02006d14_Blk.h"
#include "player/Unk_02006d14_Blk30.h"
#include "player/Unk_02006d14_Trip.h"
#include "player/Unk_02006d14_St7d0.h"
#include "player/Unk_02006d14_Sub7d0.h"
#include "player/Unk_02006d14_Ptr.h"
#include "player/Unk_02006d14_Obj2cc.h"
#include "player/Unk_02006d14_Obj59c.h"
#include "player/Unk_02006d14_Objec.h"
#include "player/Unk_02007ebc_Mtx.h"
#include "player/Unk_02007c5c_Mtx.h"
#include "player/Unk_0200d560.h"
#include "player/Unk_0200e2c8.h"
#include "game/Unk_0200f6d4_V2.h"
#include "player/Unk_0200d64c_Xyz.h"
#include "game/Unk_0200dde0_Vec3.h"
#include "player/Unk_0200e7f4_T24.h"
#include "player/Unk_0200f070_V3.h"
#include "player/Unk_0200ff08_Obj.h"
#include "player/Unk_020102ec.h"
#include "player/Unk_02007ebc_Vec.h"
#include "player/Unk_02008074_Vec.h"
#include "player/Unk_020080e8.h"
#include "player/Unk_02008100_Msg.h"
#include "player/Unk_02008190_Ptr.h"
#include "player/Unk_02008858_Blk.h"
#include "player/Unk_02008e48.h"
#include "player/Unk_02008f5c.h"
#include "player/Unk_020092c8_Loc.h"
#include "player/Unk_02009624_Pair.h"
#include "player/Unk_02009a78_Locals.h"
#include "player/Unk_02009d5c_Sub.h"
#include "player/Unk_02009f68_Bytes.h"
#include "actor/BlinkTimer.h"
#include "player/PlayerGlassesModelRef.h"
#include "player/PlayerFaceTexRef.h"
#include "player/PlayerBodyWorkRef.h"
#include "player/PlayerBodyModelRef.h"
#include "actor/CharaFaceAnimWorkRef.h"
#include "actor/CharaFaceAnimRef.h"
#include "actor/CharaClothTexRef.h"
#include "player/Unk_0205ef98.h"
#include "player/Unk_0205dfa4_Base.h"
#include "player/Unk_0205c3a4.h"
#include "game/Unk_0203d820_Ptr.h"
#include "gfx/Unk_021cb69c.h"
#include "player/Unk_021c1b3c.h"
#include "player/Unk_020d6df4_7d0.h"
#include "player/PlayerHead.h"
#include "player/Unk_0200c2fc.h"
#include "player/Unk_0200bff8_Vec.h"
#include "player/Unk_0200bda0.h"
#include "player/Unk_0200bc78_Obj.h"
#include "player/Unk_0200b908_Obj.h"
#include "player/Unk_0200b868_Msg.h"
#include "player/Unk_0200b750.h"
#include "player/Unk_0200b144_Src.h"

class Unk_02006d14;
class Unk_02007694;
class PlayerActor;
struct Unk_02006d14_Item;
struct PlayerActionRequest;
struct Unk_02006d14_Vec;
struct Unk_02006d14_Pair;
struct Unk_0200b144_Pos;
struct Unk_0200b750_Pair;
struct Unk_0200d53c_Item;
struct Unk_02006d14_Vec3;
struct Unk_0200f6d4_V2;
struct Unk_020107c8_Blk;


// ---- member-function-pointer constants as named objects (see notes.txt)
struct PMRaw {
    void (*f)();
    s32 d;
};
typedef void (*PMF)();

// ---- library base class chain of the object (declarations only; vtables and code are in other units)
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc();
    virtual ~GameProc();

    /* 0x04 */ u8 unk_04[0x4c];
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xd4 - 0x50];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);

    /* 0xd4 */ u8 unk_d4[0xec - 0xd4];
};

// secondary base at +0xec. Its virtuals have the names symbols.txt gives them as second names (vfunc_sNN); the four
// slots the object overrides are named after the object's functions (slot 0x10, 0x14, 0x18, 0x70).
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual s32 onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    /* 0x20 */ u8 pad_20[0x60];
    /* 0x80 */ s32 unk_80;
};

// ---- member objects of PlayerActor (classes of other units; constructor / destructor only)
struct ActorPlacedCollider { ActorPlacedCollider(); ~ActorPlacedCollider(); };
struct TouchPickCylinder { TouchPickCylinder(); ~TouchPickCylinder(); };
struct TwoLayerAnimModel { TwoLayerAnimModel(); ~TwoLayerAnimModel(); };
struct CachedModel { CachedModel(); ~CachedModel(); };
struct HeldItemModel { HeldItemModel(); ~HeldItemModel(); };
struct MatTexPatAnim { MatTexPatAnim(); ~MatTexPatAnim(); };
struct MatTexVramTask { MatTexVramTask(); };
struct CollisionState { CollisionState(); ~CollisionState(); };
struct SndSeEmitterKind99 { SndSeEmitterKind99(); ~SndSeEmitterKind99(); };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); };

// library class with an inline virtual destructor: its vtable (0x020d6f4c) and destructors are emitted here
struct SndSeEmitter {
    virtual ~SndSeEmitter();
    virtual void init();
    virtual void update();
    virtual void stop();
};
struct SndSeEmitterKind1 : SndSeEmitter {
    u8 unk_04[0x4c];
    SndSeEmitterKind1();
    virtual ~SndSeEmitterKind1() {}
};



class Unk_02005e7c {
public:
    u8 pad_000[0x168];
    u8 toolHitKind;
    u8 pad_169[3];
    s32 inputMode;
    u8 pad_170[0x170];
    u8 bodyAnimPlayMode;
    u8 pad_2e1[0x40b];
    s32 shadowSize;
    u8 pad_6f0[0xe0];
    u8 actionWork[0x1c];
    s32 action;
    u8 pad_7f0[8];
    s32 actionPriority;
    s32 sessionSlot;
    u8 pad_800[0xe8];
    u8 netPickUpDelay;
    u8 pad_8e9[3];
    u8 netData[8];
    s32 lastNetAction;
    s32 pendingEventUnitX;
    s32 pendingEventUnitZ;
    Unk_02005f50_Flags pendingEvent;
    u8 pad_901[0x37f];
    s16 netSeq;
    u8 pad_c82[2];
    s32 netSeqAction;

    void func_02005e7c(u32 i);
    void syncInputMode(u32 i);
    void processRequests();
    void handleNetEvent();
    void followNetAction();
    s32 func_02006d14(void *p);
    void func_0200d538(s32 idx);
    void func_0200ceec(s32 idx);
    void func_0200ce28(s32 idx);
    void func_0200caf4(s32 idx);
    void func_0200c46c(s32 idx);
    void func_0200c328(s32 idx);
    void PlayerActor_NetReleaseCreature(s32 idx);
    void func_0200c180(s32 idx);
    void PlayerActor_NetLieInBed(s32 idx);
    void PlayerActor_NetGetOutOfBedCheck(s32 idx);
    void PlayerActor_NetGetOutOfBed(s32 idx);
    void PlayerActor_NetBedRollCheck(s32 idx);
    void PlayerActor_NetBedRollBlocked(s32 idx);
    void PlayerActor_NetBedRoll(s32 idx);
    void PlayerActor_NetBedApproach(s32 idx);
    void PlayerActor_NetGetIntoBed(s32 idx);
    void func_0200bd18(s32 idx);
    void PlayerActor_NetAct11(s32 idx);
    void WfcMove_StepMeasureChannel(s32 idx);
    void func_0200bb48(s32 idx);
    void func_0200b9cc(s32 idx);
    void func_0200b848(s32 idx);
    void PlayerActor_NetPluckReach(s32 idx);
    void PlayerActor_NetPluck(s32 idx);
    void func_0200b578(s32 idx);
    void func_0200ad64(s32 idx);
    void func_0200a484(s32 idx);
    void func_02009f68(s32 idx);
    void PlayerActor_NetPickUpItem(s32 idx);
    void PlayerActor_NetFtrGrabApproach(s32 idx);
    void PlayerActor_NetFtrHold(s32 idx);
    void PlayerActor_NetFtrRotate(s32 idx);
    void PlayerActor_NetFtrPush(s32 idx);
    void PlayerActor_NetFtrPull(s32 idx);
    void WfcMoveWh_StateInReset(s32 idx);
    void PlayerActor_NetFtrPullMove(s32 idx);
    void PlayerActor_NetSeatApproach(s32 idx);
    void PlayerActor_NetSitDownFront(s32 idx);
    void PlayerActor_NetSitDownSide2(s32 idx);
    void PlayerActor_NetSitDownSide1(s32 idx);
    void PlayerActor_NetSit(s32 idx);
    void PlayerActor_NetStandUpSide2(s32 idx);
    void PlayerActor_NetStandUpSide1(s32 idx);
    void PlayerActor_NetStandUpCheck(s32 idx);
    void PlayerActor_NetStandUpFront(s32 idx);
    void PlayerActor_NetStorageOpen(s32 idx);
    void PlayerActor_NetStorageHold(s32 idx);
    void PlayerActor_NetStorageClose(s32 idx);
    void func_02009d58(s32 idx);
    void func_02009c90(s32 idx);
    void func_02009bd0(s32 idx);
    void func_02009944(s32 idx);
    void func_02009884(s32 idx);
    void func_020097d4(s32 idx);
    void PlayerActor_NetAct36(s32 idx);
    void PlayerActor_NetAct37(s32 idx);
    void PlayerActor_NetDoorApproach(s32 idx);
    void PlayerActor_NetDoorEnter(s32 idx);
    void PlayerActor_NetDoorEntered(s32 idx);
    void PlayerActor_NetDoorExit(s32 idx);
    void PlayerActor_NetAct3C(s32 idx);
    void PlayerActor_NetStowItem(s32 idx);
    void PlayerActor_NetStowUmbrella(s32 idx);
    void func_020095f8(s32 idx);
    void PlayerActor_NetLeaveRoom(s32 idx);
    void PlayerActor_NetAct41(s32 idx);
    void PlayerActor_NetAct42(s32 idx);
    void PlayerActor_NetAct43(s32 idx);
    void FieldObjectManager_Create(s32 idx);
    void PlayerActor_NetUmbrellaSpin(s32 idx);
    void PlayerActor_NetAxeSwing(s32 idx);
    void PlayerActor_NetAxeFollowThrough(s32 idx);
    void PlayerActor_NetAct48(s32 idx);
    void PlayerActor_NetAxeStrike(s32 idx);
    void PlayerActor_NetAxeChop(s32 idx);
    void PlayerActor_NetAxeBreak(s32 idx);
    void PlayerActor_NetAxeBrokenMessage(s32 idx);
    void PlayerActor_NetFishCast(s32 idx);
    void PlayerActor_NetFishCastFail(s32 idx);
    void PlayerActor_NetFishWait(s32 idx);
    void PlayerActor_NetFishHook(s32 idx);
    void PlayerActor_NetFishReelIn(s32 idx);
    void PlayerActor_NetFishEscape(s32 idx);
    void PlayerActor_NetFishLand(s32 idx);
    void PlayerActor_NetFishShowCatch(s32 idx);
    void PlayerActor_NetFishStore(s32 idx);
    void PlayerActor_NetBugNetSwing(s32 idx);
    void PlayerActor_NetInsectShowCatch(s32 idx);
    void PlayerActor_NetInsectStore(s32 idx);
    void PlayerActor_NetShovelReady(s32 idx);
    void PlayerActor_NetShovelWait(s32 idx);
    void PlayerActor_NetAct5B(s32 idx);
    void PlayerActor_NetAct5C(s32 idx);
    void PlayerActor_NetShovelStrike(s32 idx);
    void PlayerActor_NetDig(s32 idx);
    void PlayerActor_NetDigUpItem(s32 idx);
    void PlayerActor_NetDugItemStore(s32 idx);
    void PlayerActor_NetBuryItem(s32 idx);
    void PlayerActor_NetFillHole(s32 idx);
    void PlayerActor_NetWateringCan(s32 idx);
    void PlayerActor_NetSlingshot(s32 idx);
    void PlayerActor_NetSlingshotWatch(s32 idx);
    void PlayerActor_NetAct66(s32 idx);
    void PlayerActor_NetAct67(s32 idx);
    void PlayerActor_NetTreeShake(s32 idx);
    void PlayerActor_NetTreeShakeRelease(s32 idx);
    void PlayerActor_NetMailboxOpen(s32 idx);
    void PlayerActor_NetMailboxWait(s32 idx);
    void PlayerActor_NetMailboxClose(s32 idx);
    void PlayerActor_NetFaint(s32 idx);
    void PlayerActor_NetAct6E(s32 idx);
    void func_020092c4(s32 idx);
    void func_02008f18(s32 idx);
    void PlayerActor_NetTrip(s32 idx);
    void PlayerActor_NetAct72(s32 idx);
    void PlayerActor_NetPitfallFall(s32 idx);
    void PlayerActor_NetPitfallStruggle(s32 idx);
    void PlayerActor_NetPitfallClimbOut(s32 idx);
    void func_02008cc0(s32 idx);
    void func_020086dc(s32 idx);
    void PlayerActor_NetBeeSting(s32 idx);
    void func_02008598(s32 idx);
    void PlayerActor_NetHaircutStart(s32 idx);
    void PlayerActor_NetHaircutCut(s32 idx);
    void PlayerActor_NetHaircutFinish(s32 idx);
    void PlayerActor_NetPhonePickUp(s32 idx);
    void PlayerActor_NetPhoneHold(s32 idx);
    void PlayerActor_NetPhoneHangUp(s32 idx);
    void PlayerActor_NetAct80(s32 idx);
    void PlayerActor_NetFirework(s32 idx);
    void PlayerActor_NetAct82(s32 idx);
    void func_020083dc(s32 idx);
    void func_020082ac(s32 idx);
    void func_02008040(s32 idx);
    void func_02007dc8(s32 idx);
    void func_ov068_0226a93c(s32 idx);
    void func_ov068_0226a838(s32 idx);
    void PlayerActor_NetThrowBottle(s32 idx);
    void PlayerActor_NetDrinkCoffee(s32 idx);
    void PlayerActor_NetDoorWalkIn(s32 idx);
    void PlayerActor_NetDoorWalkOut(s32 idx);
    void PlayerActor_NetExitWalkOut(s32 idx);
    void PlayerActor_NetExitWalkIn(s32 idx);
    void PlayerActor_NetFishRelease(s32 idx);
    void func_02007d00(s32 idx);
    void func_02007cac(s32 idx);
    void func_02007c9c(s32 idx);};





class Unk_02008040_Base {
public:
    virtual void vfunc_00();
      u8 unk_04[0x8a];
      s16 rotY;
      u8 unk_090[0x34];
      Unk_02008074_Vec drawPos;
      s16 drawTilt;
      u8 unk_d2[0x1a];
};

class Unk_02008040 : public Unk_02008040_Base, public MsgRequest {
public:
    void netHoldUpItem(void *arg);
    void setupHoldUpItem();
    BOOL requestHoldUpItem(u16 *v, u32 a, u32 b);
    void mainErrorMessage();
    void errorMessageUpdate();
    void func_020082a8();
    BOOL netErrorMessage(u32 b);
    void setupErrorMessage(u8 *msg);
    BOOL requestErrorMessage(u8 v, u32 a, u32 b);
    void mainLidClosed();
    void lidClosedCheckOpen();
    void lidClosedUpdateAnim();
    BOOL netLidClosed(u32 b);
    void setupLidClosed(u32 a, u32 flag);
    BOOL requestLidClosed(u32 a, u32 b);
    void mainAct79();
    void act79Update();
    BOOL netAct79(u32 b);
    void setupAct79();
    BOOL requestAct79(u32 a, u32 b);
    void mainAct77();
    void act77CheckEnd();
    void act77Turn();
    void netAct77(u32 b);
    void setupAct77(u8 *msg);
    BOOL requestAct77(s16 v, u32 a, u32 b);
    void mainAct76();
    void act76Update();

      u8 unk_10c[0x1c];
      Unk_02008190_Ptr *window;
      u8 unk_12c[0x168];
      Unk_02008858_Blk bodyBaseMtx;
      u8 unk_2c4[8];
      u8 bodyAnimCtrl[8];
      u32 bodyAnimFrame;
      u8 unk_2d8[0x2c4];
      u8 heldItemModel[0x28];
      u8 fishBobber[0xd0];
      Unk_02008858_Blk itemHandMtx;
      u8 footPosA[0x18];
      u8 headTopPos[0x24];
      s32 animId;
      u8 handPose[0xcc];
      u8 actionWork[0x1c];
      s32 action;
      u8 prevAction[8];
      s32 actionPriority;
      s32 sessionSlot;
      u8 exitIndex[0x1c];
      u16 actionItem;
      u16 shownItem;
      s32 shownItemPosX, shownItemPosY, shownItemPosZ, shownItemScaleX, shownItemScaleY, shownItemScaleZ;
      u8 seEmitterLocal[0xb4];
      Unk_020080e8 netData;
};





struct Unk_020093d4 {
    Unk_02006d14_Vec targetPos;
    s32 walkSpeed;
    s32 maxSpeed;
    s32 prevAction;
    void initWalkTo(Unk_02006d14_Vec v, s32 a, s32 b);
};

struct Unk_0200944c {
    Unk_02006d14_Vec targetPos;
    s32 maxSpeed;
    void setWalkToArgs(Unk_02006d14_Vec v, s32 a);
};
















class PlayerActionRequest : public Unk_0200e2c8 {
public:
    PlayerActionRequest();
    ~PlayerActionRequest();
    void assign(s32 a, s32 b, s16 c);

    s32 action;
    s32 priority;
    s16 netSeq;
    union {
        Unk_0200e248_Blob unk_0c;
        u16 unk_0c_h;
        Unk_0200c2fc unk_0c_c2fc;
        u8 unk_0c_b[0x10];
        Unk_0200d5b4 unk_0c_d5b4;
    };
};





// ---- unk_020044dc.cpp
namespace nA {
extern "C" {

void Melody_Update(void);
void Melody_Init(void);
void func_020f0e3c(void *a);
void func_020f0e68(void *a, void *b, u32 c, void *d, s32 e);
void Heap_Free(void *heap, void *p);
void *Heap_AllocAligned(void *heap, unsigned long size, s32 align);
s32 PlayerActor_GetObjectAlign(void);
void func_0212899c(void *p, s32 v, unsigned long n);
BOOL _ZN11PlayerActor8doCreateEv(void *self);
void _ZN11PlayerActor9doExecuteEv(void *self);
void Effect_End(s32 v);
void PlayerSession_ClearActor(s32 v);
void PlayerSession_ClearGfxSlot(s32 v);
void Bgm_Release(s32 v);
void FieldInfoBalloon_ClearNetMsg(void);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
void CommSyncVar_SetVar(s32 v, s32 a, s32 b, s32 c);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN14MatTexVramTask6cancelEv(void *p);
void _ZN13MatTexPatAnim7releaseEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *p);
void HeldItemModel_Release(void *p);
void PlayerGlassesModelRef_Release(void *p);
void PlayerHead_Release(void *p);
void _ZN16CharaClothTexRef7releaseEv(void *p);
void PlayerBodyModelRef_CancelTexUpload(void *p);
s32 Field_DrawItemModel(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
s32 RoomItemIcons_DrawItem(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
extern u8 gSndMgr[];
extern void *gPlayerActorHeap;
extern u8 gSndHeapBuffer[];
extern u8 data_020d5e20[];
extern s32 gCamera;
extern s32 gCameraDistance;
extern u8 gFieldSceneKind;
extern void *gCommManager;
void _ZN6ItemIdD1Ev();
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, s32 id);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, s32 id);
union PM_02004ce8 {
    PMRaw raw;
    void (PlayerActor::*fn)();
};
}
}

// ---- unk_02004e0c.cpp
namespace nB {
extern "C" {

class PlayerActor;
void WorldCurve_FromCurved(Unk_02005294_Vec3 *dst, Unk_02005294_Vec3 *src);
s32 WorldCurve_Apply(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
s32 WorldCurve_GetRadius();
s32 WorldCurve_ToCurved(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
void MTX_RotX33_(s32 *out, s32 a, s32 b);
void MTX_RotY33_(s32 *out, s32 a, s32 b);
void MTX_Concat33(s32 *a, s32 *b, s32 *out);
void _ZN5Model8setAlphaEj(void *obj, u8 v);
void _ZN17TwoLayerAnimModel11drawLayeredEj(void *obj, u32 v);
void Model_GetJointWorldMtx(void *obj, Unk_021cb69c *out, u32 idx);
void _ZN5Model10drawScaledEPi(void *obj, void *v);
s32 PlayerHead_GetModelId(void *obj, u32 v);
s32 PlayerGlassesModelRef_GetModelId(void *obj);
void HeldItemModel_Draw(void *a, void *b);
Unk_021cb69c HeldItemModel_GetJointMtx(void *obj, u32 mode);
void CharaShadow_DrawPlayer(Unk_02005294_Vec3 *pos, s32 a);
void HeldItemModel_Update(void *obj);
void PlayerActor_CheckSceneExit(s32 a);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
s32 Ground_GetDefaultY(s32 a);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN17TwoLayerAnimModel21onJointCalcPostLayer2EP16Unk_02053a54_Msg(void *a, Unk_020050e0 *b);
void JointCb_CalcCpuMatrix(void *a, Unk_020050e0 *b, u32 c);
void JointCb_UseRestTranslation(Unk_020050e0 *a, u32 b);
void _ZN17TwoLayerAnimModel20onJointCalcPreLayer2EP16Unk_02053a54_Msg(void *a, Unk_020050e0 *b);
void PlayerActor_JointCbStart(Unk_020050e0 *p);
void PlayerActor_JointCbPost(Unk_020050e0 *p);
void PlayerActor_JointCbPre(Unk_020050e0 *p);
void PlayerActor_FieldUpdateTan(void *);
void PlayerActor_FieldPollPitfall(void *);
void PlayerActor_FieldCheckStepUnit(void *);
void PlayerActor_FieldRunStep(void *);
void PlayerActor_FieldCheckUnitAhead(void *);
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern void *gCommManager;
extern Unk_021cb69c data_021cb69c;
extern s16 data_02135f44[];
enum Unk_020d6df4_State { Unk_020d6df4_State_0 = 0 };
class PlayerActor {
public:
    BOOL func_0200ec44(u32 n);
    s32 func_0200f5b0();
    void func_0200fdb4();
    void func_0200fb04();
    void readInput();
    BOOL getInputMagnitude();
    void func_020063a0();
    void func_02005f04();
    void func_02010900();
    void PlayerActor_LevelTiltForAction(s32 a, u32 b);
    void func_02005ea0(s32 a);
    void func_02007c5c();
    void func_0200fdf4();
    void func_0200fb30();
    void func_0200f8c0();
    s32 func_0200f870();
    void func_0200ea4c();

    s32 getJointGroundY(s32 x);
    void drawReady();
    void drawNotReady();
    void doExecute();

    void func_02007c98();
    void func_02007ca4();
    void func_02007cb4();
    void func_02007d6c();
    void func_02007e40();
    void func_02008150();
    void func_02008320();
    void func_0200843c();
    void func_0200863c();
    void func_020087ac();
    void func_02008e94();
    void func_02008fa4();
    void func_02009464();
    void func_02009724();
    void func_02009838();
    void func_020098dc();
    void func_02009994();
    void func_02009c3c();
    void func_02009ce8();
    void func_02009e68();
    void func_0200a0ac();
    void func_0200a73c();
    void func_0200b264();
    void func_0200b7c8();
    void func_0200b8a0();
    void func_0200bad0();
    void func_0200bbb0();
    void func_0200bda4();
    void func_0200c304();
    void func_0200c39c();
    void func_0200c5f4();
    void mainWait();
    void mainAct01();
    void mainInit();
    void func_02205c64();
    void func_02205e9c();
    void func_02206094();
    void func_022062b4();
    void func_022065ac();
    void func_022067a8();
    void func_02206a68();
    void func_02206be8();
    void func_02206fc4();
    void func_022072fc();
    void func_0220743c();
    void func_022077c8();
    void func_022079c4();
    void func_02207c44();
    void func_02207d40();
    void func_02207dd4();
    void func_02207f54();
    void func_02208190();
    void func_02208558();
    void func_022087c8();
    void func_02208ae4();
    void func_02208b50();
    void func_02208d50();
    void func_02209068();
    void func_02209408();
    void func_02209634();
    void func_02209964();
    void func_0220a3b4();
    void func_0220a774();
    void func_0220acd0();
    void func_0220ada8();
    void func_0220ae8c();
    void func_0220b24c();
    void func_0220b6d4();
    void func_0220bbd4();
    void func_0220c4f0();
    void func_0220d084();
    void func_0220d608();
    void func_0220dc48();
    void func_0220dd60();
    void func_0220de98();
    void func_0220e034();
    void func_0220e164();
    void func_0220e5c4();
    void func_0220e6e8();
    void func_0220e924();
    void func_0220eb28();
    void func_0220ee38();
    void func_0220f0c4();
    void func_0220f4e4();
    void func_0220f5c8();
    void func_0220f8b8();
    void func_0220fc90();
    void func_0220fe54();
    void func_0221027c();
    void func_02210704();
    void func_022107e0();
    void func_02210d94();
    void func_02210df8();
    void func_02211100();
    void func_022112ec();
    void func_022116b8();
    void func_022118e4();
    void func_022119bc();
    void func_0221ec64();
    void func_0221ee70();
    void func_0221eff8();
    void func_0221f258();
    void func_0221f648();
    void func_0221f714();
    void func_0221f7fc();
    void func_0221f878();
    void func_0221f9a4();
    void func_0221fb58();
    void func_0221fc1c();
    void func_0221fd30();
    void func_0221fe68();
    void func_0221ffa0();
    void func_02220194();
    void func_022203a0();
    void func_022208d0();
    void func_022209e4();
    void func_02220b38();
    void func_02220ccc();
    void func_02220dd8();
    void func_02221058();
    void func_02221250();
    void func_02221448();
    void func_02221514();
    void func_022215e0();
    void func_02221800();
    void func_02221a48();
    void func_02221c90();
    void func_02221ed8();
    void func_022221a0();
    void func_02222328();
    void func_02222444();
    void func_022225b4();
    void func_02222724();
    void func_02222928();
    void func_02222c54();
    void func_02222eac();
    void func_02223648();
    void func_022236f0();
    void func_02223998();
    void func_02223c50();
    void func_02223df4();
    void func_02223eec();
    void func_022240b4();
    void func_022243ec();
    void func_022245f0();
    void func_0226a794();
    void func_0226a890();

      u8 unk_000[0x5c];
      Unk_02005294_Vec3 position;
      u8 prevPosition[0xb0 - 0x68];
      u32 actorFlags;
      u8 unk_0b4[0x230 - 0xb4];
      u8 bodyModel[0x388 - 0x230];
      u8 headModel0[0x3ec - 0x388];
      Unk_021cb69c unk_3ec;
      u8 unk_41c[0x424 - 0x41c];
      u8 headRef[4];
      Unk_021cb69c headMtx;
      s16 headPitch;
      s16 headYaw;
      u8 unk_45c[4];
      u8 headModel1[0x4c4 - 0x460];
      Unk_021cb69c unk_4c4;
      u8 unk_4f4[0x4fc - 0x4f4];
      u8 faceItemModel[0x560 - 0x4fc];
      Unk_021cb69c unk_560;
      u8 unk_590[0x598 - 0x590];
      u8 faceItemRef[4];
      u8 heldItemModel[0x604 - 0x59c];
      Unk_021cb69c heldItemJointMtx;
      Unk_021cb69c heldItemJointMtx2;
      Unk_021cb69c toolHandMtx;
      Unk_021cb69c itemHandMtx;
      Unk_02005294_Vec3 footPosA;
      Unk_02005294_Vec3 footPosB;
      Unk_02005294_Vec3 headTopPos;
      s32 actionFlags;
      s32 shadowSize;
      Unk_02005294_Vec3 bodyPos;
      s32 bodyAnimSlot;
      s32 animId;
      u8 handPose[0x7ec - 0x704];
      Unk_020d6df4_State action;
      Unk_020d6df4_State prevAction;
      u8 drawStep[0x7fc - 0x7f4];
      s32 sessionSlot;
      u8 exitIndex[0x814 - 0x800];
      s32 fieldAnswer;
      u8 msgStep[0x838 - 0x818];
      u8 seEmitterLocal[0x87c - 0x838];
      u8 seEmitterRemote[0x8c0 - 0x87c];
      s32 sePosX;
      s32 sePosY;
      s32 sePosZ;
      u8 aheadUnitX[0x8e4 - 0x8cc];
      u8 tripCooldown;
      u8 alpha;
      u8 lastInputSide;
      u8 pendingAct76Kind;
      u8 netPickUpDelay;
};
void PlayerActor_JointCbStart(Unk_020050e0 *p);
void PlayerActor_JointCbPre(Unk_020050e0 *p);
void PlayerActor_JointCbPost(Unk_020050e0 *p);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, u32 n);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
s32 _ZN11PlayerActor15getJointGroundYEi(void *, s32 x);
void _ZN12Unk_02006d1416pollFaceItemLoadEv(void *);
void _ZN12Unk_02006d1411pollHatLoadEv(void *);
void _ZN11PlayerActor9readInputEv(void *);
BOOL _ZN11PlayerActor17getInputMagnitudeEv(void *);
void _ZN12Unk_02005e7c15followNetActionEv(void *);
void _ZN12Unk_02005e7c15processRequestsEv(void *);
void _ZN12Unk_020102ec15updateFaceAnimsEv(void *);
void PlayerActor_LevelTiltForAction(void *, s32 a, u32 b);
void _ZN12Unk_02005e7c13syncInputModeEj(void *, s32 a);
void _ZN12Unk_0200769421calcModelMatrixCurvedEv(void *);
void _ZN12Unk_02006d1419applyFaceItemChangeEv(void *);
void _ZN12Unk_02006d1414applyHatChangeEv(void *);
void _ZN12Unk_02006d1414pollStoreQueryEv(void *);
s32 _ZN12Unk_02006d1414pollFieldQueryEv(void *);
void _ZN12Unk_02006d1414updateHeadLookEv(void *);
union PM_02005294 {
    PMRaw raw;
    void (PlayerActor::*fn)();
};
}
}

// ---- unk_02005e7c.cpp
namespace nC {
extern "C" {

extern u8 data_020c64c8[];
extern u8 data_020c6434[];
extern u8 sPlayerActionLevelsTilt[];
void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force);
s32 FieldActionFx_Take(void *out, s32 v);
void FieldPos_FromUnitCenter(Unk_02005f50_V3 *out, s32 x, s32 y);
void FieldPos_ToUnit(s32 *x, s32 *y, Unk_02005f50_V3 *v);
s32 _ZN12Unk_02006d1414testActionFlagEj(void *p, s32 v);
void _ZN12Unk_02006d1415clearActionFlagEj(void *p, s32 v);
s32 _ZN12Unk_02006d1413setActionFlagEj(void *p, s32 v);
s32 _ZN11PlayerActor13clearRequestsEv(void *p);
s32 _ZN11PlayerActor18isLocomotionActionEj(void *p, s32 v);
void *_ZN11PlayerActor10getRequestEi(void *p, s32 i);
s32 _ZN12Unk_02006d1413loadInputModeEv();
s32 InputMode_SetTouch();
s32 InputMode_SetButtons();
s32 InputMode_Clear();
s32 _ZN12Unk_020102ec12approachRotXEv(void *p, s32 v);
s32 _ZN12Unk_02006d1415requestPickUpAtEP16Unk_0200b144_Posihis(void *p, void *v, s32 a, s32 b, s32 c, s32 d);
s32 _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(void *p, void *v, s32 a, s32 b, s32 c);
s32 _ZN11PlayerActor11requestWaitEjjj(void *p, s32 a, s32 b, s32 c);
s32 PlayerActor_GetSlotAction(s32 *out, s32 a, s32 b);
u8 *PlayerActor_GetNetStateVar(s32 v);
s32 NetBuf_ReadS16(void *p);
void MI_CpuCopy8(void *dst, void *src, s32 n);
void PlayerActor_RequestTreeShake(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void PlayerActor_RequestPluck(void *p, void *v, s32 a, s32 b);
void PlayerActor_RequestAxeBreak(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestAxeChop(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void PlayerActor_RequestDig(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestDigUpItem(void *p, void *v, s32 a, s32 b, s32 c);
void PlayerActor_RequestFillHole(void *p, s32 a, void *v, s32 b, s32 c, s32 d);
void PlayerActor_RequestAct66(void *p, void *v, s32 a, s32 b, s32 c);
void PlayerActor_RequestShovelStrike(void *p, s32 a, void *v, s32 b, s32 c);
void PlayerActor_RequestAxeStrike(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force);
s32 _ZN12Unk_02006d1412changeActionEP17Unk_02006d14_Item(void *, void *p);
union PM_020063a0 {
    PMRaw raw;
    void (Unk_02005e7c::*fn)(s32);
};
}
}

// ---- unk_02006d14.cpp
namespace nD {
extern "C" {

struct Unk_02006d14 {
    u8 pad_000[0x7ec];
    u32 action;
    u32 prevAction;
    u32 drawStep;
    u32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0xc80-0x800];
    s16 netSeq;
    u8 pad_c82[2];
    u32 netSeqAction;
    void changeAction(Unk_02006d14_Item* item);
    void func_020076f0(u32 a);
    void func_020076dc();
    void func_020076b0(u32 id);
    void func_02007c20(u32 id, u32 v);
    void func_02007694(u32 id);
    void func_02010800(u32* id);
    void func_02005e7c(u32 id);
    u32 func_02007c14(u32 id);
    void setActionFlag(u32 id);
    void clearActionFlag(u32 id);
    void func_02007ca0(Unk_02006d14_Item* item, u32 v);
    void func_02007cb0(Unk_02006d14_Item* item, u32 v);
    void func_02007d14(Unk_02006d14_Item* item, u32 v);
    void func_02007df4(Unk_02006d14_Item* item, u32 v);
    void func_02008074(Unk_02006d14_Item* item, u32 v);
    void func_020082c0(Unk_02006d14_Item* item, u32 v);
    void func_020083e8(Unk_02006d14_Item* item, u32 v);
    void func_020085a4(Unk_02006d14_Item* item, u32 v);
    void func_0200870c(Unk_02006d14_Item* item, u32 v);
    void setupAct76(Unk_02006d14_Item* item, u32 v);
    void setupTurnTo(Unk_02006d14_Item* item, u32 v);
    void setupWalkTo(Unk_02006d14_Item* item, u32 v);
    void setupChangeHeldItem(Unk_02006d14_Item* item, u32 v);
    void setupAct35(Unk_02006d14_Item* item, u32 v);
    void setupAct34(Unk_02006d14_Item* item, u32 v);
    void setupAct33(Unk_02006d14_Item* item, u32 v);
    void setupAct32(Unk_02006d14_Item* item, u32 v);
    void setupAct31(Unk_02006d14_Item* item, u32 v);
    void setupAct30(Unk_02006d14_Item* item, u32 v);
    void setupPickUpFanfareStow(Unk_02006d14_Item* item, u32 v);
    void setupPickUpFanfare(Unk_02006d14_Item* item, u32 v);
    void setupPickUp(Unk_02006d14_Item* item, u32 v);
    void setupPickUpReach(Unk_02006d14_Item* item, u32 v);
    void setupAct15(Unk_02006d14_Item* item, u32 v);
    void setupEmotion(Unk_02006d14_Item* item, u32 v);
    void setupAct13(Unk_02006d14_Item* item, u32 v);
    void setupAct10(Unk_02006d14_Item* item, u32 v);
    void func_0200c1bc(Unk_02006d14_Item* item, u32 v);
    void func_0200c33c(Unk_02006d14_Item* item, u32 v);
    void func_0200c470(Unk_02006d14_Item* item, u32 v);
    void func_0200caf8(Unk_02006d14_Item* item, u32 v);
    void func_0200ce3c(Unk_02006d14_Item* item, u32 v);
    void func_0200cef8(Unk_02006d14_Item* item, u32 v);
    void func_0200d53c(Unk_02006d14_Item* item, u32 v);
    void func_02205e04(Unk_02006d14_Item* item, u32 v);
    void func_02206040(Unk_02006d14_Item* item, u32 v);
    void func_02206240(Unk_02006d14_Item* item, u32 v);
    void func_0220650c(Unk_02006d14_Item* item, u32 v);
    void func_0220675c(Unk_02006d14_Item* item, u32 v);
    void func_022069c8(Unk_02006d14_Item* item, u32 v);
    void func_02206ae8(Unk_02006d14_Item* item, u32 v);
    void func_02206f0c(Unk_02006d14_Item* item, u32 v);
    void func_02207224(Unk_02006d14_Item* item, u32 v);
    void func_022073d4(Unk_02006d14_Item* item, u32 v);
    void func_022076f4(Unk_02006d14_Item* item, u32 v);
    void func_02207944(Unk_02006d14_Item* item, u32 v);
    void func_02207b44(Unk_02006d14_Item* item, u32 v);
    void func_02207cbc(Unk_02006d14_Item* item, u32 v);
    void func_02207d60(Unk_02006d14_Item* item, u32 v);
    void func_02207e6c(Unk_02006d14_Item* item, u32 v);
    void func_022080a0(Unk_02006d14_Item* item, u32 v);
    void func_02208420(Unk_02006d14_Item* item, u32 v);
    void func_022086c8(Unk_02006d14_Item* item, u32 v);
    void func_022089d4(Unk_02006d14_Item* item, u32 v);
    void func_02208b04(Unk_02006d14_Item* item, u32 v);
    void func_02208ca0(Unk_02006d14_Item* item, u32 v);
    void func_02209004(Unk_02006d14_Item* item, u32 v);
    void func_02209314(Unk_02006d14_Item* item, u32 v);
    void func_02209500(Unk_02006d14_Item* item, u32 v);
    void func_022098bc(Unk_02006d14_Item* item, u32 v);
    void func_02209fc8(Unk_02006d14_Item* item, u32 v);
    void func_0220a684(Unk_02006d14_Item* item, u32 v);
    void func_0220abd4(Unk_02006d14_Item* item, u32 v);
    void func_0220ad5c(Unk_02006d14_Item* item, u32 v);
    void func_0220ae40(Unk_02006d14_Item* item, u32 v);
    void func_0220b168(Unk_02006d14_Item* item, u32 v);
    void func_0220b4c4(Unk_02006d14_Item* item, u32 v);
    void func_0220badc(Unk_02006d14_Item* item, u32 v);
    void func_0220c350(Unk_02006d14_Item* item, u32 v);
    void func_0220cfcc(Unk_02006d14_Item* item, u32 v);
    void func_0220d590(Unk_02006d14_Item* item, u32 v);
    void func_0220db5c(Unk_02006d14_Item* item, u32 v);
    void func_0220dcc4(Unk_02006d14_Item* item, u32 v);
    void func_0220de2c(Unk_02006d14_Item* item, u32 v);
    void func_0220df3c(Unk_02006d14_Item* item, u32 v);
    void func_0220e0e4(Unk_02006d14_Item* item, u32 v);
    void func_0220e4bc(Unk_02006d14_Item* item, u32 v);
    void func_0220e688(Unk_02006d14_Item* item, u32 v);
    void func_0220e844(Unk_02006d14_Item* item, u32 v);
    void func_0220ea58(Unk_02006d14_Item* item, u32 v);
    void func_0220ed5c(Unk_02006d14_Item* item, u32 v);
    void func_0220f010(Unk_02006d14_Item* item, u32 v);
    void func_0220f3cc(Unk_02006d14_Item* item, u32 v);
    void func_0220f57c(Unk_02006d14_Item* item, u32 v);
    void func_0220f86c(Unk_02006d14_Item* item, u32 v);
    void func_0220fa70(Unk_02006d14_Item* item, u32 v);
    void func_0220fdd8(Unk_02006d14_Item* item, u32 v);
    void func_02210044(Unk_02006d14_Item* item, u32 v);
    void func_022104a8(Unk_02006d14_Item* item, u32 v);
    void func_0221072c(Unk_02006d14_Item* item, u32 v);
    void func_02210bdc(Unk_02006d14_Item* item, u32 v);
    void func_02210da4(Unk_02006d14_Item* item, u32 v);
    void func_02210f7c(Unk_02006d14_Item* item, u32 v);
    void func_02211210(Unk_02006d14_Item* item, u32 v);
    void func_022115f4(Unk_02006d14_Item* item, u32 v);
    void func_02211818(Unk_02006d14_Item* item, u32 v);
    void func_02211960(Unk_02006d14_Item* item, u32 v);
    void func_02211e74(Unk_02006d14_Item* item, u32 v);
    void func_0221ece4(Unk_02006d14_Item* item, u32 v);
    void func_0221ef14(Unk_02006d14_Item* item, u32 v);
    void func_0221f0e4(Unk_02006d14_Item* item, u32 v);
    void func_0221f474(Unk_02006d14_Item* item, u32 v);
    void func_0221f6c8(Unk_02006d14_Item* item, u32 v);
    void func_0221f77c(Unk_02006d14_Item* item, u32 v);
    void func_0221f824(Unk_02006d14_Item* item, u32 v);
    void func_0221f914(Unk_02006d14_Item* item, u32 v);
    void func_0221fae0(Unk_02006d14_Item* item, u32 v);
    void func_0221fba8(Unk_02006d14_Item* item, u32 v);
    void func_0221fcbc(Unk_02006d14_Item* item, u32 v);
    void func_0221fe10(Unk_02006d14_Item* item, u32 v);
    void func_0221ff48(Unk_02006d14_Item* item, u32 v);
    void func_0222012c(Unk_02006d14_Item* item, u32 v);
    void func_02220320(Unk_02006d14_Item* item, u32 v);
    void func_02220748(Unk_02006d14_Item* item, u32 v);
    void func_02220958(Unk_02006d14_Item* item, u32 v);
    void func_02220a78(Unk_02006d14_Item* item, u32 v);
    void func_02220bd4(Unk_02006d14_Item* item, u32 v);
    void func_02220d0c(Unk_02006d14_Item* item, u32 v);
    void func_02220f38(Unk_02006d14_Item* item, u32 v);
    void func_022211ac(Unk_02006d14_Item* item, u32 v);
    void func_02221380(Unk_02006d14_Item* item, u32 v);
    void func_022214a8(Unk_02006d14_Item* item, u32 v);
    void func_02221574(Unk_02006d14_Item* item, u32 v);
    void func_0222178c(Unk_02006d14_Item* item, u32 v);
    void func_022218f0(Unk_02006d14_Item* item, u32 v);
    void func_02221b38(Unk_02006d14_Item* item, u32 v);
    void func_02221d80(Unk_02006d14_Item* item, u32 v);
    void func_02222040(Unk_02006d14_Item* item, u32 v);
    void func_022222a8(Unk_02006d14_Item* item, u32 v);
    void func_022223c4(Unk_02006d14_Item* item, u32 v);
    void func_0222255c(Unk_02006d14_Item* item, u32 v);
    void func_022226cc(Unk_02006d14_Item* item, u32 v);
    void func_0222283c(Unk_02006d14_Item* item, u32 v);
    void func_02222b74(Unk_02006d14_Item* item, u32 v);
    void func_02222dcc(Unk_02006d14_Item* item, u32 v);
    void func_02223458(Unk_02006d14_Item* item, u32 v);
    void func_0222368c(Unk_02006d14_Item* item, u32 v);
    void func_0222386c(Unk_02006d14_Item* item, u32 v);
    void func_02223ac4(Unk_02006d14_Item* item, u32 v);
    void func_02223ce4(Unk_02006d14_Item* item, u32 v);
    void func_02223e5c(Unk_02006d14_Item* item, u32 v);
    void func_02223fa8(Unk_02006d14_Item* item, u32 v);
    void func_02224284(Unk_02006d14_Item* item, u32 v);
    void func_022244d4(Unk_02006d14_Item* item, u32 v);
    void func_02224734(Unk_02006d14_Item* item, u32 v);
    void func_0226a83c(Unk_02006d14_Item* item, u32 v);
    void func_0226a940(Unk_02006d14_Item* item, u32 v);
};
typedef void (Unk_02006d14::*Unk_02006d14_Fn)(Unk_02006d14_Item*, u32);
extern Unk_02006d14_Data* gCommManager;
extern u32 data_020c6a18[];
BOOL _ZN11CommManager12isSlotActiveEi(Unk_02006d14_Data* p, u32 v);
BOOL _ZN11CommManager11isLocalSlotEj(Unk_02006d14_Data* p, u32 v);
s32 _ZN11CommManager10getSendSeqEv(Unk_02006d14_Data* p);
void _ZN12Unk_020076949endActionEj(void *, u32 a);
void _ZN12Unk_0200769415clearActionWorkEv(void *);
void _ZN12Unk_0200769421stopMovementForActionEj(void *, u32 id);
void _ZN12Unk_0200769417updateBgCheckWorkEjj(void *, u32 id, u32 v);
void _ZN12Unk_0200769418resetRotXForActionEj(void *, u32 id);
void _ZN12Unk_020102ec15setBodyColliderEPj(void *, u32* id);
void _ZN12Unk_02005e7c13func_02005e7cEj(void *, u32 id);
u32 _ZN12Unk_0200769417getActionPriorityEj(void *, u32 id);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 id);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 id);
union PM_02006d14 {
    PMRaw raw;
    Unk_02006d14_Fn fn;
};
}
}

// ---- unk_02007694.cpp
namespace nE {
extern "C" {

class Unk_02007694;
void MI_CpuFill8(void *p, u32 v, u32 n);
void _ZN14CollisionState9beginStepEv(void *p);
u16 WorldCurve_ToCurved(void *a, void *b);
void _ZN12Unk_020102ec7setRotXEt(Unk_02007694 *o, u32 a);
void WorldCurve_FromCurved(Unk_02007ebc_Vec *out, Unk_02007ebc_Vec *in);
s32 FX_Div(s32 a, s32 b);
void MTX_MultVec43(Unk_02007ebc_Vec *v, Unk_02007ebc_Mtx *m, Unk_02007ebc_Vec *out);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *p);
BOOL MenuCtrl_IsFinished();
void TalkRequest_FinishPlayerMessage();
extern u8 sPlayerActionResetsRotX[];
extern u8 sPlayerActionStopsMovement[];
extern u8 sPlayerActionDonePriority[];
extern u8 sPlayerActionPriority[];
extern u8 sPlayerActionKeepsBgCheckWork[];
class Unk_02007694 {
public:
    
    void endAct91();
    void mainAct92();
    void netAct92();
    void setupAct92();
    void mainAct91();
    void netAct91();
    void setupAct91();
    void func_0200d3f0(u32 a);
    void func_0200cee0(u32 a);
    void func_0200cdfc(u32 a);
    void endSkidTurn(u32 a);
    void func_02211e04(u32 a);
    void endChangeClothes(u32 a);
    void func_022246bc(u32 a);
    void func_02224224(u32 a);
    void func_02223ca0(u32 a);
    void func_02223a70(u32 a);
    void func_022237fc(u32 a);
    void func_0200b9bc(u32 a);
    void func_022115bc(u32 a);
    void func_0200ad58(u32 a);
    void func_0200a450(u32 a);
    void func_02222d74(u32 a);
    void func_022223a8(u32 a);
    void func_02222280(u32 a);
    void func_02221fdc(u32 a);
    void func_02221d2c(u32 a);
    void func_02221ae4(u32 a);
    void func_0222189c(u32 a);
    void func_02221768(u32 a);
    void func_02221558(u32 a);
    void func_0222148c(u32 a);
    void func_0222113c(u32 a);
    void func_02210708(u32 a);
    void func_02210404(u32 a);
    void func_020095b8(u32 a);
    void func_0220fdac(u32 a);
    void func_0220f33c(u32 a);
    void func_0220efd8(u32 a);
    void func_0220ecb8(u32 a);
    void func_0220e970(u32 a);
    void func_0220e43c(u32 a);
    void func_0220c2dc(u32 a);
    void func_0220ba90(u32 a);
    void func_0220ab20(u32 a);
    void func_0220a5e4(u32 a);
    void func_02209ef4(u32 a);
    void func_02209284(u32 a);
    void func_02208fb0(u32 a);
    void func_02208904(u32 a);
    void func_02208358(u32 a);
    void func_0220714c(u32 a);
    void func_02206e94(u32 a);
    void func_0221fa98(u32 a);
    void func_02206710(u32 a);
    void func_0220646c(u32 a);
    void func_022061e0(u32 a);
    void func_0226a910(u32 a);
    void func_0226a80c(u32 a);

    
    void resetRotXForAction(u32 a);
    void stopMovementForAction(u32 a);
    void clearActionWork();
    void endAction(u32 a);
    u8 getActionDonePriority(u32 a);
    u8 getActionPriority(u32 a);
    void updateBgCheckWork(u32 a, u32 b);
    u8 keepsBgCheckWork(u32 a);
    void calcModelMatrixCurved();
    void mainWaitMenu();
    void waitMenuCheckEnd();
    void netWaitMenu(u32 a);
    void setupWaitMenu(PlayerActionRequest *p);
    u32 requestWaitMenu(u32 a, u32 b, u32 c);
    void mainLowerHeldUpItem();
    void lowerHeldUpItemCheckEnd();
    void netLowerHeldUpItem(u32 a);
    void setupLowerHeldUpItem();
    u32 requestLowerHeldUpItem(u32 a, u32 b);
    void mainHoldUpItem();
    void holdUpItemCheckEnd();
    void holdUpItemUpdate();

    
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_0201065c();
    void func_0200ce98(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_02010358(u32 a, u32 b, u32 c);
    u32 func_0200e248(PlayerActionRequest *p);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    BOOL func_0200f4c0(u32 a);
    void requestAct05(u32 a, u32 b, u32 c);
    void func_02002b84(Unk_02007c5c_Mtx *out);

    u8 unk_00[0x5c];
    u8 position[0x98 - 0x5c];
    u32 speed;
    u8 unk_9c[8];
    u32 velocity;
    u32 velocityY;
    u32 velocityZ;
    u8 actorFlags[0xc4 - 0xb0];
    u8 drawPos[0xd0 - 0xc4];
    u16 drawTilt;
    u8 unk_d2[0x294 - 0xd2];
    Unk_02007c5c_Mtx bodyBaseMtx;
    u8 unk_2c4[0x2cc - 0x2c4];
    u8 bodyAnimCtrl[8];
    u32 bodyAnimFrame;
    u8 unk_2d8[0x694 - 0x2d8];
    Unk_02007ebc_Mtx itemHandMtx;
    u8 footPosA[0x700 - 0x6c4];
    s32 animId;
    u8 handPose[0x7a0 - 0x704];
    u8 bgCheckWork[0x30];
    u8 actionWork[0x1c];
    u32 action;
    u8 prevAction[8];
    u32 actionPriority;
    u8 sessionSlot[0x820 - 0x7fc];
    s32 shownItemPosX;
    s32 shownItemPosY;
    s32 shownItemPosZ;
    s32 shownItemScaleX;
    s32 shownItemScaleY;
    s32 shownItemScaleZ;
    u8 seEmitterLocal[0xc80 - 0x838];
    u16 netSeq;
};
void PlayerActor_CalcHeldUpItemPos(Unk_02007ebc_Vec *out, Unk_02007694 *obj, s32 n);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 a);
void _ZN5Actor15calcModelMatrixEPv(void *, Unk_02007c5c_Mtx *out);
void _ZN12Unk_020102ec17moveWithCollisionEv(void *);
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_020102ec19submitSceneColliderEv(void *);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1417resetHeldToolAnimEv(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
void _ZN12Unk_0200769412requestAct05Etjj(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_02006d1412turnToCameraEi(void *, u32 a);
void _ZN12Unk_02006d146playSeEj(void *, u32 a);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 a);
union PM_020076f0 {
    PMRaw raw;
    void (Unk_02007694::*fn)(u32);
};
}
}

// ---- unk_02008040.cpp
namespace nF {
extern "C" {

extern void *gCommManager;
extern char sPlayerActorErrorMsgFile[];
extern char sPlayerActorMsgFile[];
extern char sPlayerActorGetInsectMsgFile[];
extern char sPlayerActorGetFishMsgFile[];
extern char gSndMgr[];
extern u8 gFieldSceneKind;
u16 NetBuf_ReadU16(void *);
void NetBuf_WriteU16(void *, u16);
s16 NetBuf_ReadS16B(void *);
void NetBuf_WriteS16B(void *, s16);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void _ZN12Unk_020102ec11advanceAnimEv(Unk_02008040 *);
void _ZN12Unk_020102ec18updateBodyColliderEv(Unk_02008040 *);
void _ZN12Unk_02006d1418netFollowTransformEv(Unk_02008040 *);
void PlayerActor_CalcHeldUpItemPos(Unk_02008074_Vec *, Unk_02008040 *, u32);
s32 _ZN12Unk_020102ec13startAnimOnceEijt(Unk_02008040 *, u32, u32, u32);
s32 _ZN12Unk_020102ec9startAnimEijt(Unk_02008040 *, u32, u32, u32);
s32 _ZN11PlayerActor11requestWaitEjjj(Unk_02008040 *, u32, u32, s32);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(Unk_02008040 *, s32);
void _ZN12Unk_02006d1411calcHandMtxEv(Unk_02008040 *);
void Insect_FinishCatch(u32);
void HeldInsect_Start(u32, u32);
void PlayerActor_ApplyHoldOffset(void *, void *);
void HeldInsect_SetHandMatrix(u32, void *, void *, u32);
void Fish_GetDisplayScale(void *, s32);
void FishCatch_SetDisplayPosScale(void *, void *, void *);
void PlayerActor_RequestFishShowCatch(Unk_02008040 *, u32, u32, s32);
void PlayerActor_RequestInsectShowCatch(Unk_02008040 *, u32, u32, u32, u32, s32);
void PlayerActor_RequestStowItem(Unk_02008040 *, u32, u32, u32, u32, u32, u32, s32);
void WorldCurve_FromCurved(void *, void *);
void *_ZN10FishBobber7getFishEv(void *);
void HeldItemModel_PlayAnim(void *, u32, u32, u32);
void PlayerActor_GetHeldItem(void *, Unk_02008040 *);
BOOL Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
BOOL _ZN12Unk_02006d1420getHeldHoldableIndexEv(Unk_02008040 *);
void TalkRequest_FinishSceneEntry();
void _ZN12Unk_02006d146playSeEj(Unk_02008040 *, u32);
void _ZN12Unk_02006d1413setActionFlagEj(Unk_02008040 *, u32);
void _ZN12Unk_02006d1415clearActionFlagEj(Unk_02008040 *, u32);
void _ZN12Unk_02006d1412turnToCameraEi(Unk_02008040 *, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, u32);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(Unk_02008040 *, void *);
void *_ZN19PlayerActionRequestD1Ev(void *);
BOOL TalkRequest_AddPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void _ZN9Character17attachTalkRequestEi(Unk_02008040 *, MsgRequest *);
void _ZN9Character17detachTalkRequestEi(Unk_02008040 *, MsgRequest *);
void LowBattery_SetWarned();
void Camera_SetMode4();
void Camera_SetModeDefault();
void Bgm_ReleasePriority(u32);
void Bgm_RequestSilence(u32, u32, u32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
void SndMgr_PlaySe(void *, u32);
void Effect_Create(u32, void *, u32, u32);
void PlayerActor_ApproachAngle(void *, s32, u32, u32, u32);
void _ZN12Unk_020102ec9setAngleYEPs(Unk_02008040 *, void *);
static inline BOOL Unk_02008858_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
}
}

// ---- unk_02008cc0.cpp
namespace nG {
extern "C" {

struct Unk_02008e50_Msg {
    u32 action;
    u32 priority;
    u32 netSeq;
    Unk_02008e50_Pay args;
};
struct Unk_02008f60_Msg {
    u32 action;
    u32 priority;
    u32 netSeq;
    Unk_02008fa0 args;
    u8 pad_0e[0xe];
};
struct Unk_020093f4_Msg {
    u32 action;
    u32 priority;
    u32 netSeq;
    Unk_0200944c args;
    u8 pad_1c[4];
};
struct Unk_02006d14_7d0 {
    union {
        struct { s16 unk_00; u8 unk_02, unk_03, unk_04, unk_05, unk_06; };
        struct { s32 w0; s32 w4; s32 w8; s32 wc; s32 w10; s32 w14; };
        struct { u16 h0, h2; u16 h4; u8 b6; };
    };
    void set_h2(s16 v) { h2 = v; }
};
inline s32 Unk_0200905c_abs(s32 x) { return x < 0 ? -x : x; }
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec position;
      u8 pad_068[0x8e - 0x68];
      s16 rotY;
      u8 pad_090[8];
      s32 speed;
      u8 pad_09c[0x230 - 0x9c];
      u8 bodyModel[0x2cc - 0x230];
      u8 bodyAnimCtrl[4];
      s32 bodyAnimNumFrames;
      u32 bodyAnimFrame;
      u8 pad_2d8[4];
      s32 bodyAnimFrameStep;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 heldItemModel[0x700 - 0x59c];
      s32 animId;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 actionWork;
      u8 pad_7e8[4];
      u32 action;
      u8 pad_7f0[8];
      s32 actionPriority;
      s32 sessionSlot;
      u8 pad_800[4];
      s32 exitMode;
      u8 pad_808[0x818 - 0x808];
      s32 msgStep;
      u8 pad_81c[0x8e7 - 0x81c];
      u8 pendingAct76Kind;
      u8 pad_8e8[4];
      Unk_02008e48 netData;

    BOOL netAct76(s16 v);
    void setupAct76(Unk_02006d14_Item *item, u32 old);
    BOOL requestAct76(u8 a, u8 b, u8 c, u32 d, s16 e);
    void mainTurnTo();
    void turnToCheckEnd();
    void turnToUpdate();
    void netTurnTo();
    void setupTurnTo(Unk_02006d14_Item *item, u32 old);
    BOOL requestTurnTo(s16 v, u32 a, u32 b);
    void mainWalkTo();
    void walkToCheckEnd(s32 f);
    void walkToMove();
    void walkToUpdateAnim();
    s32 walkToUpdateSpeed();
    void netWalkTo();
    void setupWalkTo(Unk_02006d14_Item *item, u32 old);
    BOOL requestWalkTo(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void mainChangeHeldItem();
    void changeHeldItemUpdate();
    void endChangeHeldItem();

    BOOL testActionFlag(u32 id);
    void setActionFlag(u32 id);
    void clearActionFlag(u32 id);
    BOOL func_0200e248(void *msg);
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
};
extern void *gCommManager;
extern u32 sPlayerAct76Anims[];
extern u16 data_020c61c0[];
extern s16 data_02135f44[];
extern u8 gFieldSceneKind;
void TalkRequest_FinishSceneEntry();
s32 _ZN12Unk_020102ec13startAnimOnceEijt(Unk_02006d14 *, u32, u32, u32);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(Unk_02006d14 *);
void HeldItemModel_PlayAnim(void *, u32, u32, u32);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void Bgm_ReleasePriority(u32);
void Bgm_RequestSilence(u32, u32, u32);
void Bgm_Request(u32, u32, u32, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, u32);
void *_ZN19PlayerActionRequestD1Ev(void *);
void _ZN12Unk_020102ec11advanceAnimEv(Unk_02006d14 *);
void _ZN12Unk_020102ec18updateBodyColliderEv(Unk_02006d14 *);
void _ZN12Unk_02006d1412requestAct10Esji(Unk_02006d14 *, u32, u32, s32);
void _ZN12Unk_0200769412requestAct05Etjj(Unk_02006d14 *, u32, u32, s32);
s32 _ZN11PlayerActor11requestWaitEjjj(Unk_02006d14 *, u32, u32, s32);
void TalkRequest_FinishLeaveRoom();
void PlayerActor_TurnAngle(void *, s32);
void _ZN12Unk_020102ec9setAngleYEPs(Unk_02006d14 *, void *);
void _ZN12Unk_020102ec17moveWithCollisionEv(Unk_02006d14 *);
void *RoomEntry_GetRequest();
s32 RoomEntryRequest_GetDoorKind();
s32 Ground_GetDefaultY(u32);
s32 *RoomEntryRequest_GetPos(void *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void _ZN12Unk_020102ec10switchAnimEijt(Unk_02006d14 *, u32, u32, u32);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *);
void _ZN12Unk_02006d1416updateFootstepFxEv(Unk_02006d14 *);
s32 Scene_GetCurrent();
void PlayerActor_ApproachCoord(void *, s32);
s32 func_020e9688(void *);
s32 func_020e9650(void *, void *);
s32 PlayerActor_Decelerate(s32 v, s32 min);
s32 PlayerActor_Accelerate(s32, s32);
s32 func_020e7b98(s32, s32);
void _ZN12Unk_020102ec8setSpeedEPj(Unk_02006d14 *, void *);
BOOL _ZN12Unk_02006d1416isGuestInSessionEv(Unk_02006d14 *);
void *PlayerActor_GetPlayerData(Unk_02006d14 *);
void Clock_GetDateTime(void *);
u8 *PlayerSession_GetSessionFlags();
void DateTime_SubDays(void *, s32);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(void *, Unk_020092c8_Bits);
void _ZN12Unk_02006d1418netFollowTransformEv(Unk_02006d14 *);
void PlayerActor_SetHoldableItem(u32, s32);
void _ZN12Unk_02006d1412turnToCameraEi(Unk_02006d14 *, u32);
void _ZN12Unk_02006d1417applyHeldItemPoseEiPv(Unk_02006d14 *, u32, u32);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
void PlayerData_GetBySessionSlot(s32);
u16 *_ZN10PlayerData11getHeldItemEv();
void _ZN12Unk_02006d1420netSendClothesChangeEjj(Unk_02006d14 *, u32, u32);
void _ZN12Unk_02006d1412requestAct10Esji(Unk_02006d14 *, u32, u32, s32);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, void *msg);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 id);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, u32 id);
s32 _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 id);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 v);
}
}

// ---- unk_020095f8.cpp
namespace nH {
extern "C" {

struct Unk_0200e2e0 { u8 pad_00[0xc]; Unk_02009d5c_Sub args; };
extern u8 gFieldSceneKind;
extern Unk_02006d14_Data* gCommManager;
extern s16 data_02135f44[];
extern u32 data_020d5e4c[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
u16 NetBuf_ReadU16(void* p);
void NetBuf_WriteU16(void* p, u32 v);
BOOL _ZN11CommManager11isLocalSlotEj(Unk_02006d14_Data* p, u32 v);
void _ZN10PlayerData11setHeldItemEPt(void* p, void* q);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void* p);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 v);
void _ZN17TwoLayerAnimModel12updateLayersEv(void* p);
u32 HandOverItem_GetItem(u16* p);
u32 HandOverItem_IsModeActive(u32 v);
u32 HandOverItem_SwitchMaster(void* p);
BOOL HandOverItem_GetPos(Unk_02009a78_Vec* p);
BOOL HandOverItem_CanTake(void* p);
u32 HandOverItem_End(void* p);
u32 HandOverItem_GetNextMode();
u32 HandOverItem_RequestMode(u32 a, void* p);
u32 HandOverItem_IsMaster(void* p);
void HandOverItem_Begin(void* p, u32 a, u8 b, u32 c, void* d, u32 e);
void _ZN19PlayerActionRequestC1Ev(Unk_0200e2e0* p);
void _ZN19PlayerActionRequest6assignEiis(Unk_0200e2e0* p, u32 a, u32 b, u32 c);
void _ZN19PlayerActionRequestD1Ev(Unk_0200e2e0* p);
void PlayerActor_GetHeldItem(u16* out, void* p);
void _ZN12Unk_020102ec9setAngleYEPs(void* p, void* q);
s32 _ZN12Unk_020102ec8setSpeedEPj(void* p, void* q);
s32 PlayerActor_Accelerate(s32 a, s32 b);
void PlayerActor_TurnAngle(void* out, s32 a);
void PlayerActor_SetArgsAct30(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d);
void PlayerActor_InitAct32Work(u32* p);
void PlayerActor_NetReadChangeHeldItem(void* p, u16* out);
void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v);
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02009a78_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x98 - 0x90];
    u32 speed;
    u8 pad_9c[0x230 - 0x9c];
    u8 bodyModel[0x9c];
    u8 bodyAnimCtrl[4];
    u32 bodyAnimNumFrames;
    u32 bodyAnimFrame;
    u8 pad_2d8[4];
    u32 bodyAnimFrameStep;
    u8 pad_2e0[0x700 - 0x2e0];
    u32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02009624_Pair actionWork;
    u8 pad_7d8[0x7ec - 0x7d8];
    u32 action;
    u32 prevAction;
    u32 drawStep;
    u32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x81c - 0x800];
    u16 actionItem;
    u16 shownItem;
    u8 pad_820[0x82c - 0x820];
    u32 shownItemScaleX;
    u32 shownItemScaleY;
    u32 shownItemScaleZ;
    u8 pad_838[0x8e7 - 0x838];
    s8 pendingAct76Kind;
    u8 pad_8e8[4];
    u8 netData[4];

    s32 netChangeHeldItem(u32 a);
    void setupChangeHeldItem(Unk_02006d14_Item* item, u32 old);
    s32 requestChangeHeldItem(u16 a, u32 b, u32 c);
    void mainAct35();
    void act35CheckEnd();
    void setupAct35(Unk_02006d14_Item* item, u32 old);
    s32 requestAct35(u32 a, u32 b);
    void mainAct34();
    void act34CheckEnd();
    void setupAct34(Unk_02006d14_Item* item, u32 old);
    s32 requestAct34(u32 a, u32 b);
    void mainAct33();
    void act33CheckEnd();
    void setupAct33(Unk_02006d14_Item* item, u32 old);
    s32 requestAct33(u32 a, u32 b);
    void mainAct32();
    void act32CheckEnd();
    void act32UpdateAnim();
    void act32UpdateSpeed();
    s32 netAct32(u32 a);
    void setupAct32(Unk_02006d14_Item* item, u32 old);
    s32 requestAct32(u32 a, u32 b);
    void mainAct31();
    void act31CheckEnd();
    void setupAct31(Unk_02006d14_Item* item, u32 old);
    s32 requestAct31(u32 a, u32 b);
    void mainAct30();
    void act30CheckEnd();
    void act30UpdateAnim();
    void setupAct30(Unk_02006d14_Item* item, u32 old);
    s32 requestAct30(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void mainPickUpFanfareStow();
    void netAct30();
    void netAct31();
    void netAct33();
    void netAct34();
    void netAct35();
    void pickUpFanfareStowShrink();

    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_0200e248(Unk_0200e2e0* p);
    void playSe(u32 a);
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_020109ac();
    u32 func_02007c08(u32 a);
    void requestAct10(u32 a, u32 b, s32 c);
    void updateFootstepFx();
    void clearActionFlag(u32 a);
    void updateShownItemPos(u32 a);
    void netSyncNearUnit(u32* p);
    void pickUpUpdateStore(u8* p, u32 a);
    void pickUpRemoteCheckEnd();
    void* PlayerActor_GetPlayerData();
    s32 func_0200e35c(s16* a, Unk_02009a78_Vec* b, s32* c, s16* d);
};
void PlayerActor_NetReadChangeHeldItem(void* p, u16* out);
void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v);
void PlayerActor_InitAct32Work(u32* p);
void PlayerActor_SetArgsAct30(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d);
static inline BOOL Unk_02009624_Check()
{
    if (gFieldSceneKind == 0) {
        return TRUE;
    }
    return FALSE;
}
void* PlayerActor_GetPlayerData(void *);
s32 _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d146playSeEj(void *, u32 a);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, Unk_0200e2e0* p);
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
u32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 a);
void _ZN12Unk_02006d1412requestAct10Esji(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_020102ec17moveWithCollisionEv(void *);
void _ZN12Unk_020102ec15moveNoCollisionEv(void *);
void _ZN12Unk_02006d1416updateFootstepFxEv(void *);
s32 _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(void *, s16* a, Unk_02009a78_Vec* b, s32* c, s16* d);
s32 _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1417pickUpUpdateStoreEPhh(void *, u8* p, u32 a);
void _ZN12Unk_02006d1415netSyncNearUnitEPi(void *, u32* p);
void _ZN12Unk_02006d1420pickUpRemoteCheckEndEv(void *);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 a);
void _ZN12Unk_02006d1418updateShownItemPosEjz(void *, u32 a);
}
}

// ---- unk_02009f68.cpp
namespace nI {
extern "C" {

struct Unk_02006d14_Base0 {
    u8 pad_000[0xc4];
    Unk_02006d14_Trip unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14 : Unk_02006d14_Base0, Unk_02006d14_Objec {
    u8 pad_f0[0x10a - 0xf0];
    u8 msgIndex;
    u8 pad_10b[0x128 - 0x10b];
    Unk_02006d14_Ptr* window;
    u8 pad_12c[0x2cc - 0x12c];
    u8 bodyAnimCtrl[8];
    struct { u32 lo : 12; u32 mid : 16; u32 hi : 4; } bodyAnimFrame;
    u8 pad_2d8[4];
    u32 bodyAnimFrameStep;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 heldItemModel[4];
    u8 pad_5a0[0x700 - 0x5a0];
    u32 animId;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02006d14_St7d0 actionWork;
    u8 pad_7dc[0x7ec - 0x7dc];
    u32 action;
    u32 prevAction;
    u32 drawStep;
    u32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x80c - 0x800];
    s32 dropQuery;
    u8 pad_810[8];
    s32 msgStep;
    u16 actionItem;
    u16 shownItem;
    u8 shownItemPos[12];
    u32 shownItemScaleX, shownItemScaleY, shownItemScaleZ;
    u8 pad_838[0x8e8 - 0x838];
    u8 netPickUpDelay;
    u8 pad_8e9[3];
    Unk_0200a63c_St netData;
    u8 pad_8f1[0xc80 - 0x8f1];
    s16 netSeq;

    void netPickUpFanfareStow(s16 v);
    void setupPickUpFanfareStow(Unk_02006d14_Item* item, u32 v);
    void mainPickUpFanfare();
    void pickUpFanfareTakeItem();
    void pickUpFanfareNetTake();
    void pickUpFanfareUpdate();
    void pickUpFanfareUpdateItemPos();
    void endPickUpFanfare();
    void netPickUpFanfare(s16 v);
    void setupPickUpFanfare(Unk_02006d14_Item* item, u32 v);
    s32 requestPickUpFanfareWithItem(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 requestPickUpFanfareAt(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void mainPickUp();
    void pickUpRemoteCheckEnd();
    void pickUpUpdateStore(u8* state, u8 flag);
    s32 requestPickUpFanfareStow(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);

    void setActionFlag(u32 id);
    void clearActionFlag(u32 id);
    void playSe(u32 id);
    BOOL testActionFlag(u32 id);
    u8 func_02007c08(u32 id);
    s32 getHeldToolKind();
    void func_02010358(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void pickUpUpdateItem();
    void pickUpUpdateAnim();
    void calcHandMtx();
    void updateShownItemPos(u32 v);
    void turnToCamera(u32 v);
    void netSyncNearUnit(Unk_02006d14_Pair* p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    s32 func_0200e248(Unk_0200a050_Obj* o);
    void func_0203e488(Unk_02006d14_Objec* p);
    void func_0203e47c(Unk_02006d14_Objec* p);
};
static inline BOOL Unk_0200a114_IsZero(u8* p)
{
    if (*p == 0) return TRUE;
    return FALSE;
}
void PlayerActor_NetReadPickUpFanfareStow(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b);
void PlayerActor_NetWritePickUpFanfareStow(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_SetArgsPickUpFanfareStow(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_NetReadPickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void PlayerActor_NetWritePickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void PlayerActor_SetArgsPickUpFanfare(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
extern Unk_02006d14_Data* gCommManager;
extern u8 gFieldSceneKind[];
extern u8 sPlayerActorErrorMsgFile[];
extern u8 sPlayerActorMsgFile[];
extern void* gSceneBlockMap;
BOOL _ZN11CommManager11isLocalSlotEj(Unk_02006d14_Data* p, u32 v);
void _ZN19PlayerActionRequestC1Ev(Unk_0200a050_Obj* o);
void _ZN19PlayerActionRequest6assignEiis(Unk_0200a050_Obj* o, u32 a, u32 b, s16 c);
void _ZN19PlayerActionRequestD1Ev(Unk_0200a050_Obj* o);
void PendingUnit_CommitAt(Unk_02006d14_Pair* p, u32 v);
void PendingUnit_ApplyAt(Unk_02006d14_Pair* p, u32 v);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 v);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void* p);
void HeldItemModel_PlayAnim(void* p, u32 a, u32 b, u32 c);
void _ZN10MsgRequest11setFileNameEPKc(void* p, void* q);
void FieldPos_FromUnitCenter(void* p, u32 a, u32 b);
BOOL Item_IsFurniture(u16* p);
s32 Item_GetFurnitureIndex(u16* p);
void* BlockMap_GetItemPtrAtPos(void* a, void* b, u32 c);
u16 NetBuf_ReadU16(u8* p);
void NetBuf_WriteU16(u8* p, u16 v);
void Bgm_ReleasePriority(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Request(u32 a, u32 b, u32 c, u32 d);
BOOL TalkRequest_AddPlayerMessage();
BOOL TalkRequest_IsPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void Camera_SetMode4();
void Camera_SetModeDefault();
BOOL BottleLetter_Open();
void Pocket_AddFoundItem(u16* p);
BOOL MenuCtrl_OpenPocketsFullPickUp(u32 v);
BOOL MenuCtrl_IsFinished();
BOOL MenuCtrl_IsResultOk();
s32 FieldAction_RequestPlaceAtPendingForAid(u32 a, u32 b);
void PlayerActor_NetReadPickUpFanfareStow(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b);
void PlayerActor_NetWritePickUpFanfareStow(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_SetArgsPickUpFanfareStow(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void PlayerActor_NetReadPickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void PlayerActor_NetWritePickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void PlayerActor_SetArgsPickUpFanfare(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void _ZN12Unk_02006d146playSeEj(void *, u32 id);
void _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, Unk_0200a050_Obj* o);
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_02006d1415netSyncNearUnitEPi(void *, Unk_02006d14_Pair* p);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 id);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 id);
u8 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 id);
void _ZN9Character17attachTalkRequestEi(void *, Unk_02006d14_Objec* p);
void _ZN9Character17detachTalkRequestEi(void *, Unk_02006d14_Objec* p);
void _ZN12Unk_02006d1411calcHandMtxEv(void *);
void _ZN12Unk_02006d1418updateShownItemPosEjz(void *, u32 v);
void _ZN12Unk_02006d1412turnToCameraEi(void *, u32 v);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, u32 id);
void _ZN12Unk_02006d1416pickUpUpdateAnimEP17Unk_02006d14_Itemj(void *);
void _ZN12Unk_020102ec19submitSceneColliderEv(void *);
void _ZN12Unk_02006d1416pickUpUpdateItemEv(void *);
void _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
}
}

// ---- unk_0200abc8.cpp
namespace nJ {
extern "C" {

struct Unk_02006d14_A {
    virtual void vfunc_00();
    u8 pad_04[0xc4 - 4];
    Unk_02006d14_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14_B {
    virtual void vfunc_00();
    u8 pad_f0[0x10a - 0xf0];
    u8 msgIndex;
    u8 pad_10b[0x128 - 0x10b];
    Unk_0203d820_Ptr* unk_128;
    u8 pad_12c[0x294 - 0x12c];
    Unk_02006d14_Blk bodyBaseMtx;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 bodyAnimCtrl[8];
    u32 bodyAnimFrame;
    u8 pad_2d8[0x694 - 0x2d8];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
};
struct Unk_02006d14 : Unk_02006d14_A, Unk_02006d14_B {
    u32 animId;
    u8 pad_704[0x7d0-0x704];
    Unk_02006d14_Sub7d0 actionWork;
    u8 pad_7dc[0x7ec-0x7dc];
    u32 action;
    u8 pad_7f0[0x7f8-0x7f0];
    u32 actionPriority;
    u32 sessionSlot;
    u8 pad_800[0x810-0x800];
    u32 fieldAnswerKind;
    u8 pad_814[0x81c-0x814];
    u16 actionItem;
    u16 shownItem;
    u32 shownItemPos;
    u32 shownItemPosY;
    u32 shownItemPosZ;
    u32 shownItemScaleX;
    u32 shownItemScaleY;
    u32 shownItemScaleZ;
    u8 pad_838[0x8e8-0x838];
    u8 netPickUpDelay;
    void func_02010914();
    void playSe(u32 id);
    void clearActionFlag(u32 id);
    void setActionFlag(u32 id);
    void mainPickUpReach(Unk_02006d14_Item* item, u32 old);
    void setupPickUp(Unk_02006d14_Item* item, u32 old);
    void func_02010358(u32 a, u32 b, u32 c);
    s32 getHeldToolKind();

    void pickUpReachUpdate();
    void pickUpUpdateItem();
    void pickUpReachWaitAnswer();
    void func_0201071c();
    void netSyncNearUnit(Unk_0200b144_Pos* pos);
    u32 func_02007c08(u32 id);
    void func_0200ce98(u32 a, u32 b, s32 c);
    void requestPickUpFanfareAt(Unk_0200b144_Pos* pos, u32 a, u32 b, s32 c);
    void calcHandMtx();
    void updateShownItemPos(u32 a);
    void pickUpUpdateAnim(Unk_02006d14_Item* item, u32 old);
    void endPickUp(Unk_02006d14_Item* item, u32 old);
    void netPickUp(s16 old);
    s32 requestPickUpWithItem(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 requestPickUpAt(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
};
extern void* gCommManager;
extern u8 sPlayerActorMsgFile[];
extern u8 sPlayerActorErrorMsgFile[];
BOOL _ZN11CommManager11isLocalSlotEj(void* p, u32 v);
BOOL TalkRequest_AddPlayerMessage();
void TalkRequest_FinishPlayerMessage();
void FieldPos_FromUnitCenter(void* p, u32 a, u32 b);
u16* BlockMap_GetItemPtrAtPos(void* p, void* q, u32 z);
void* PlayerData_GetCurrent();
BOOL _ZN12Unk_02097ff48testFlagEj(void* p, u32 v);
void _ZN12Unk_02097ff47setFlagEj(void* p, u32 v);
void PendingUnit_CommitAt(Unk_0200b144_Pos* p, u32 z);
void PendingUnit_ApplyAt(Unk_0200b144_Pos* p, u32 z);
void VillagerTrend_NotifyUnk6(void* p);
void HeldItemModel_PlayAnim(void* p, u32 a, u32 b, u32 c);
extern void* gSceneBlockMap;
BOOL Item_IsFurniture(void* p);
u32 Item_GetFurnitureIndex(void* p);
void _ZN9Character17attachTalkRequestEi(Unk_02006d14_A* a, Unk_02006d14_B* b);
void _ZN9Character17detachTalkRequestEi(Unk_02006d14_A* a, Unk_02006d14_B* b);
void _ZN10MsgRequest11setFileNameEPKc(void* p, void* q);
Unk_02006d14_V3* FtrMgr_PollRemovedPos();
s32 _s32_div_f(s32 a, s32 b);
u32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void* p, u32 id);
u16 NetBuf_ReadU16(void* p);
void NetBuf_WriteU16(void* p, u32 v);
void _ZN19PlayerActionRequestC1Ev(void* p);
void _ZN19PlayerActionRequest6assignEiis(void* p, u32 a, s32 b, s16 c);
s32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void* self, void* p);
void _ZN19PlayerActionRequestD1Ev(void* p);
void PlayerActor_NetWritePickUp(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c);
void PlayerActor_NetReadPickUp(Unk_0200b144_Src* src, Unk_0200b144_Pos* pos, s8* a, u16* b, u8* c);
void PlayerActor_NetWritePickUp(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c);
void PlayerActor_SetArgsPickUp(Unk_0200b244_Out* out, Unk_0200b144_Pos* pos, s32 a, s32 b, u8 c);
static inline BOOL Unk_0200add8_R1(u16* p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_IsFFF1(u16* p, u16* t) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        *t = 0xfff1;
        r = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(t) ? TRUE : FALSE;
    } else {
        r = *p == 0xfff1 ? TRUE : FALSE;
    }
    return r;
}
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_02006d146playSeEj(void *, u32 id);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 id);
void _ZN12Unk_02006d1421pickUpReachWaitAnswerEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_02006d1415netSyncNearUnitEPi(void *, Unk_0200b144_Pos* pos);
u32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 id);
void _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(void *, Unk_0200b144_Pos* pos, u32 a, u32 b, s32 c);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 id);
void _ZN12Unk_02006d1411calcHandMtxEv(void *);
void _ZN12Unk_02006d1418updateShownItemPosEjz(void *, u32 a);
void _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
}
}

// ---- unk_0200b510.cpp
namespace nK {
extern "C" {

struct Unk_0200b76c_Msg {
    u32 action, priority, netSeq;
    Unk_0200b7bc args;
    u8 pad_14[8];
};
struct Unk_0200ba8c_Msg {
    u32 action, priority, netSeq;
    Unk_0200b750 args;
    u8 pad_14[0x8];
};
struct Unk_0200bd60_Msg {
    u32 action, priority, netSeq;
    Unk_0200bda0 args;
    u8 pad_0e[0xe];
};
static inline void func_0200bc78_sub(Unk_02006d14_Vec *o, Unk_02006d14_Vec *a, Unk_02006d14_Vec *b) {
    o->x = a->x - b->x;
    o->z = a->z - b->z;
}
struct Unk_0200bc78_Vec : Unk_02006d14_Vec { Unk_0200bc78_Vec() {} };
struct Unk_02006d14_7d0 {
    union {
        struct { s32 w0; u8 b4, b5, b6; };
        struct { u8 c0, c1; };
    };
};
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec position;
      u8 pad_068[0x8e - 0x68];
      s16 rotY;
      u8 pad_090[0x16c - 0x90 - 0];
      s32 inputMode;
      u8 pad_170[0x2cc - 0x170];
      u8 bodyAnimCtrl[4];
      s32 bodyAnimNumFrames;
      u32 bodyAnimFrame;
      u8 pad_2d8[8];
      u8 bodyAnimPlayMode;
      u8 pad_2e1[0x59c - 0x2e1];
      u8 pad_59c[0x6dc - 0x59c];
      u8 headTopPos[0x6fc - 0x6dc];
      u8 bodyAnimSlot[4];
      s32 animId;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 actionWork;
      s32 unk_7d8;
      u8 pad_7dc[0x7ec - 0x7dc];
      u32 action;
      u8 pad_7f0[8];
      s32 actionPriority;
      s32 sessionSlot;
      u8 pad_800[0x814 - 0x800];
      s32 fieldAnswer;
      u8 pad_818[4];
      u16 actionItem;
      u16 shownItem;
      u8 shownItemPos[0x82c - 0x820];
      s32 shownItemScaleX, shownItemScaleY, shownItemScaleZ;
      u8 pad_838[0x8ec - 0x838];
      Unk_0200b750 netData;
      u8 pad_8f4[0x904 - 0x8f4];
      Unk_0200b908_Obj *emotionEntry;
      u8 emotionFx[0x92d - 0x908];
      u8 unk_92d;
      u8 pad_92e[2];
     

    void pickUpReachWaitAnswer();
    void netPickUpReach(s16 v);
    void setupPickUpReach(Unk_02006d14_Item *item, u32 old);
    s32 requestPickUpReach(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void mainAct15();
    void act15CheckEnd();
    void act15UpdateAnim();
    s32 netAct15(u32 v);
    void setupAct15(Unk_02006d14_Item *item, u32 old);
    s32 requestAct15(u32 a, u32 b);
    void mainEmotion();
    void emotionCheckEnd();
    void emotionUpdateAnim();
    void endEmotion();
    s32 netEmotion(s16 v);
    void setupEmotion(Unk_02006d14_Item *item, u32 old);
    s32 requestEmotion(u8 a, u8 b, u32 c, s16 d);
    void mainAct13();
    void act13CheckEnd();
    s32 netAct13(u32 v);
    void setupAct13(Unk_02006d14_Item *item, u32 old);
    BOOL requestAct13(u32 a, u32 b);
    void mainAct10();
    void act10CheckTalk();
    void act10FaceTalkTarget();
    void act10UpdateAnim();
    void netAct10(u32 v);
    void setupAct10(Unk_02006d14_Item *item, u32 old);
    s32 requestAct10(s16 a, u32 b, s32 c);
    void mainChangeClothes();
    void changeClothesCheckEnd();

    s32 func_0200bff8();
    void func_0200be7c();
    void func_0200be2c();
    void func_0201071c();
    void func_02010914();
    s32 netFollowTransform();
    void func_020109c4();
    void clearActionFlag(u32 id);
    BOOL testActionFlag(u32 id);
    void resetHeldToolAnim();
    void playSe(u32 id);
    s32 getHeldToolKind();
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103dc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
    s32 requestPickUpAt(Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
    s32 func_0200c358(u32 a, u32 b, s32 c);
    BOOL func_0200e248(void *msg);
    void func_02010a58(void *p);
};
extern u8 gFieldSceneKind;
extern void *gSceneBlockMap;
extern void *gCommManager;
extern u8 data_020c61d0[];
extern u16 gPad[];
s32 Pocket_FindEmpty();
BOOL Scene_InHouseRoom();
void FieldPos_FromUnitCenter(void *, u32, u32);
u16 *BlockMap_GetItemPtrAtPos(void *, void *, u32);
void FtrMgr_RemoveActor(s32, void *, void *);
u32 Room_CountOccupants();
void HeldItemModel_PlayAnim(void *, u32, u32, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, s32);
void *_ZN19PlayerActionRequestD1Ev(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
void Effect_Create(u32, void *, u32, u32);
u32 AnimSlotRef_GetAnimId(void *);
void _ZN12NpcEmotionFx6updateEPvsit(void *, void *, s32, u32, u32);
void _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei(void *, void *, u32);
void _ZN12NpcEmotionFx4stopEv(void *);
void *Emotion_GetEntry(u32);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void *TalkRequest_GetTalkTarget();
void *NpcRegistry_FindByHandle(void *);
s32 func_020e7b98(s32, s32);
void PlayerActor_TurnAngle(void *, s32);
void PlayerActor_RequestReturnToWait();
void _ZN12Unk_020102ec11advanceAnimEv(void *);
s32 _ZN12Unk_02006d1415requestPickUpAtEP16Unk_0200b144_Posihis(void *, Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 id);
s32 _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, void *msg);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_02006d146playSeEj(void *, u32 id);
s32 _ZN12Unk_02006d1418netFollowTransformEv(void *);
s32 _ZN12Unk_0200769412requestAct05Etjj(void *, u32 a, u32 b, s32 c);
s32 _ZN12Unk_020102ec8playAnimEijhijti(void *, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 v);
void _ZN12Unk_020102ec17moveWithCollisionEv(void *);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, u32 id);
void _ZN12Unk_020102ec9setAngleYEPs(void *, void *p);
void _ZN12Unk_02006d1417resetHeldToolAnimEv(void *);
s32 _ZN12Unk_0200769420changeClothesEffectsEv(void *);
void _ZN12Unk_0200769418changeClothesApplyEv(void *);
void _ZN12Unk_0200769417changeClothesSpinEv(void *);
}
}

// ---- unk_0200be2c.cpp
namespace nL {
extern "C" {

class Unk_02007694;
u16 NetBuf_ReadU16(void *p);
void NetBuf_WriteU16(void *p, u32 a);
void Effect_Create(u32 id, void *a, void *b, u32 c);
void Effect_PlayById2(u32 id, void *a, u32 b, u32 c);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 a);
void *PlayerData_GetBySessionSlot(u32 a);
void PlayerData_SetStungFace(void *p, u32 a);
u32 _ZN10PlayerData11getFaceTypeEv(void *p);
void _ZN16PlayerFaceTexRef4loadEj(void *p, u32 a);
void VillagerStates_ClearUnk1dBit0();
BOOL _ZN11CommManager11isLocalSlotEj(u32 a, u32 b);
void PlayerActor_TurnAngle(void *p, s32 a);
void PlayerActor_GetHat(u16 *out, Unk_02007694 *o);
s32 PlayerActor_DecelerateSkid(s32 a, u32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *PlayerData_GetCurrent();
u32 _ZN10PlayerData10getFortuneEv(void *p);
BOOL Random_GlobalBelow(u32 a);
s32 func_020e780c(s32 a, s32 b);
void PlayerActor_RequestTrip(Unk_02007694 *o, u32 a, s32 b);
extern u32 gCommManager;
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern u8 data_020d5e3c[];
extern u8 data_020d5e44[];
class Unk_02007694 {
public:
    void changeClothesSpin();
    void changeClothesApply();
    void changeClothesHat();
    void changeClothesFaceItem();
    void changeClothesShirt();
    void changeClothesEffects();
    void endChangeClothes(u32 a);
    void netChangeClothes(s16 a);
    void setupChangeClothes(PlayerActionRequest *p);
    void mainAct05();
    void netAct05(u32 a);
    void setupAct05(PlayerActionRequest *p);
    u32 requestAct05(u16 a, u32 b, u32 c);
    void mainSkidTurn();
    void skidCheckEnd();
    void skidDecelerate();
    void endSkidTurn(u32 a);
    void netSkidTurn();
    void setupSkidTurn(PlayerActionRequest *p);
    u32 requestSkidTurn(u16 a, u32 b, u32 c);
    void mainWalk();
    void walkNetCheckEnd(u8 *p);
    void walkCheckEnd(s16 *p);
    u32 requestChangeClothes(u16 a, u32 b, u32 c, u32 d, s16 e);

    
    void func_02010a58(s16 *p);
    void func_020105a8(void *a, u8 *b);
    void func_02010564(void *a, u8 *b);
    void func_02010914();
    void func_020109c4();
    void func_020109ac();
    void func_0201071c();
    void func_0201065c();
    void func_020102ec();
    void func_02010050(u16 *p);
    BOOL func_0201000c();
    u32 PlayerActor_GetHairStyle();
    u32 PlayerActor_GetHairColor();
    BOOL func_0200fab8(u16 *a, u32 b, u32 c, u32 d);
    BOOL func_0200fd90(u16 *a);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    void PlayerActor_NetSendFaceChange();
    void func_0200eb58(u32 a, u32 b);
    BOOL func_0200ef08();
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010358(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_0200e8d0();
    u32 func_0200e248(PlayerActionRequest *p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    u8 getActionDonePriority(u32 a);
    void func_02010a34(s32 *p);
    void func_0200ca60();
    void func_0200c7dc();
    void func_0200c778();
    u8 func_0200c900();
    s32 func_0200d640();
    u16 func_0200d5fc();
    void func_0200ff08();

    u8 unk_00[0x5c];
    u8 position[0x8e - 0x5c];
    s16 rotY;
    u8 unk_90[4];
    s16 moveAngleY;
    u8 unk_96[2];
    s32 speed;
    u8 unk_9c[0x2cc - 0x9c];
    u8 bodyAnimCtrl[0x2e0 - 0x2cc];
    u8 bodyAnimPlayMode;
    u8 unk_2e1[0x6c4 - 0x2e1];
    Unk_0200bff8_Vec footPosA;
    Unk_0200bff8_Vec footPosB;
    u8 headTopPos[0x700 - 0x6dc];
    s32 animId;
    u8 handPose[5];
    u8 faceTex[0x7d0 - 0x709];
    Unk_0200c288 actionWork;
    u32 action;
    u8 prevAction[8];
    u32 actionPriority;
    u32 sessionSlot;
    u8 exitIndex[0x8e4 - 0x800];
    u8 tripCooldown;
    u8 alpha[0x8ec - 0x8e5];
    Unk_0200c24c netData;
};
void _ZN12Unk_020102ec9setAngleYEPs(void *, s16 *p);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, u32 a);
void _ZN12Unk_02006d1413setActionFlagEj(void *, u32 a);
void _ZN12Unk_020102ec17setEyeAnimForBodyEPiPh(void *, void *a, u8 *b);
void _ZN12Unk_020102ec19setMouthAnimForBodyEPiPh(void *, void *a, u8 *b);
u32 PlayerActor_GetHairStyle(void *);
u32 PlayerActor_GetHairColor(void *);
BOOL _ZN12Unk_02006d1416requestHatChangeEPthhh(void *, u16 *a, u32 b, u32 c, u32 d);
BOOL _ZN12Unk_02006d1421requestFaceItemChangeEPt(void *, u16 *a);
void _ZN12Unk_02006d1415setShirtTextureEPv(void *, u16 *p);
BOOL _ZN12Unk_02006d1421requestShirtTexUploadEv(void *);
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_020102ec10replayAnimEv(void *);
void PlayerActor_NetSendFaceChange(void *);
void _ZN12Unk_02006d1420netSendClothesChangeEjj(void *, u32 a, u32 b);
void _ZN12Unk_020102ec13startAnimOnceEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d146playSeEj(void *, u32 a);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
BOOL _ZN12Unk_02006d1418netFollowTransformEv(void *);
void _ZN12Unk_020102ec17moveWithCollisionEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1417resetHeldToolAnimEv(void *);
void _ZN12Unk_020102ec19submitSceneColliderEv(void *);
u8 _ZN12Unk_0200769421getActionDonePriorityEj(void *, u32 a);
void _ZN11PlayerActor11requestWaitEjjj(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_020102ec8setSpeedEPj(void *, s32 *p);
void _ZN11PlayerActor15walkUpdateSpeedEv(void *);
void _ZN11PlayerActor8walkMoveEv(void *);
void _ZN11PlayerActor14walkUpdateLeanEv(void *);
u8 _ZN11PlayerActor13walkFollowNetEv(void *);
void _ZN12Unk_020102ec15moveNoCollisionEv(void *);
void _ZN12Unk_02006d1421netUpdateBodyColliderEv(void *);
s32 _ZN11PlayerActor17getInputMagnitudeEv(void *);
u16 _ZN11PlayerActor13getInputAngleEv(void *);
void _ZN12Unk_02006d1411tryInteractEv(void *);
}
}

// ---- unk_0200c778.cpp
namespace nM {
extern "C" {

struct Unk_0205dfa4 : Unk_0205dfa4_Base, Unk_0205dfa4_Sub {
};
extern s16 data_02135f44[];
extern u8 gFieldSceneKind;
extern u8 gScreenTransition;
extern u8 sHouseRoachActiveCount;
extern Unk_020d6df4_Data *gCommManager;
extern u8 *data_021c1b3c;
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
s32 func_020e9650(void *a, void *b);
s32 Field_TryPushSnowball(void *out, void *a, void *b, s32 c, s32 d);
Unk_0205dfa4 &HeldItemModel_GetModel(void *p);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
BOOL Scene_GetCurrent();
s32 Scene_InHouseRoom();
s32 Scene_InUnk6To8();
s32 Scene_InTown();
s32 Scene_NoPlayerInUnsharedScene();
void FieldInfoBalloon_ShowPleaseWait();
s32 Field_HasExitedBuildingKey();
void _ZN12NpcEmotionFx5resetEv(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
s32 Ground_GetHeightAt(void *p, s32 a, s32 b);
void TalkRequest_FinishSceneEntry();
void _ZN8FaintBgm12startSilenceEv(void *p);
void Net_WifiHostKeepAlive();
s32 Net_GetMode();
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
s32 PlayerSession_GetSessionFlags();
s32 PlayerActor_TestSlotFlag(s32 a, s32 b);
s32 PlayerActor_GetSlotAction(void *p, s32 a, s32 b);
void Effect_Create(s32 a, void *b, void *c, s32 d);
void PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
s32 PlayerActor_Accelerate(s32 a, s32 b);
s32 PlayerActor_Decelerate(s32 a, s32 b);
void PlayerActor_TurnAngle(void *p, s32 a);
void PlayerActor_TurnAngleSlow(void *p, s32 a);
void PlayerActor_ApproachCoord(void *p, s32 a);
void FishShadow_RunAi(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestDoorExit(void *t, s32 a, s32 b);
void PlayerActor_RequestFaint(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestAct3C(void *t, s32 a, s32 b);
void PlayerActor_RequestAct6E(void *t, s32 a, s32 b);
void PlayerActor_RequestAct43(void *t, s32 a, s32 b);
void PlayerActor_RequestAct44(void *t, s32 a, s32 b);
void PlayerActor_RequestSit(void *t, s32 a, s32 b, s32 c);
void PlayerActor_RequestDoorWalkIn(void *t, void *a, s32 b, s32 c);
void PlayerActor_RequestExitWalkIn(void *t, void *a, s32 b, s32 c);
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
void PlayerActor_SetArgsWait(u16 *p, u32 v);
class PlayerActor {
public:
    void walkUpdateLean();
    void walkMove();
    BOOL walkFollowNet();
    void walkUpdateSpeed();
    void netWalk();
    void setupWalk(Unk_02006d14_Item *item, u32 old);
    BOOL requestWalk(u32 a, u32 b, u32 c);
    void mainWait();
    void waitNetCheckEnd(u8 *p);
    void waitCheckInput();
    BOOL waitFollowNet();
    void endWait();
    void netWait(u32 a);
    void setupWait(Unk_02006d14_Item *item, u32 old);
    BOOL requestWait(u32 a, u32 b, u32 c);
    void mainAct01();
    void endAct01();
    void netAct01(u32 a);
    void setupAct01(Unk_02006d14_Item *item, u32 old);
    BOOL requestAct01(u32 a, u32 b);
    void mainInit();
    void startFirstAction(s32 *p);

    
    void PlayerActor_LevelTiltForAction(s32 a, u32 b);
    void func_02010a44(s32 a);
    void func_02010a58(void *p);
    void func_02010a34(void *p);
    void func_02010380(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200f32c();
    s32 func_020100d0();
    s32 getInputAngle();
    void func_020109c4();
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void func_0200e8d0();
    void func_0200e870();
    BOOL pushRequest(PlayerActionRequest *m);
    BOOL getRemoteTransform(u8 *a, s32 *x, s32 *z, s16 *b);
    BOOL PlayerActor_CalcNetFollowAngle(s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
    s32 func_0200f5b0();
    BOOL func_0200f0fc();
    BOOL func_0200ff08();
    void func_02008770(s32 a, s32 b, s32 c);
    void func_0200ec1c(s32 id);
    void func_0200ec30(s32 id);
    BOOL func_0200ec44(s32 id);
    void func_0200ed48();
    s32 finishModelSetup();
    s32 func_02007c08(s32 a);
    s32 PlayerActor_IsWaitingForSlots();
    void func_0200bd60(u32 a, u32 b, s32 c);

      u8 pad_000[0x8];
      u32 param;
      u8 pad_00c[0x5c - 0xc];
      Unk_020d6df4_Vec position;
      u8 pad_068[0x8e - 0x68];
      s16 rotY;
      u8 pad_090[0x98 - 0x90];
      s32 speed;
      u8 pad_09c[0x130 - 0x9c];
      s32 inputMagnitude;
      s16 inputAngle;
      u8 pad_136[0x164 - 0x136];
      s32 toolHitActor;
      u8 toolHitKind;
      u8 pad_169[0x230 - 0x169];
      u8 bodyModel[4];
      u8 pad_234[0x2d0 - 0x234];
      s32 unk_2d0;
      u8 pad_2d4[0x2dc - 0x2d4];
      s32 unk_2dc;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 heldItemModel[4];
      u8 pad_5a0[0x6c4 - 0x5a0];
      u8 footPosA[0xc];
      u8 footPosB[0x30];
      s32 animId;
      u8 pad_704[0x7d0 - 0x704];
      Unk_020d6df4_7d0 actionWork;
      u8 pad_7d4[0x7ec - 0x7d4];
      s32 action;
      u8 pad_7f0[4];
      s32 drawStep;
      s32 actionPriority;
      s32 sessionSlot;
      u8 pad_800[0x838 - 0x800];
      u8 seEmitterLocal[0x44];
      u8 seEmitterRemote[0x8c];
      u8 emotionFx[0x18];
      void *unk_920;
      u8 pad_924[0x92e - 0x924];
      u8 unk_92e;
};
void PlayerActor_SetArgsWalk(u8 *p, u32 v);
void PlayerActor_SetArgsWait(u16 *p, u32 v);
void PlayerActor_LevelTiltForAction(void *, s32 a, u32 b);
void _ZN12Unk_020102ec12approachRotXEv(void *, s32 a);
void _ZN12Unk_020102ec9setAngleYEPs(void *, void *p);
void _ZN12Unk_020102ec8setSpeedEPj(void *, void *p);
void _ZN12Unk_020102ec10switchAnimEijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1416updateFootstepFxEv(void *);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(void *, u8 *a, s32 *x, s32 *z, s16 *b);
BOOL PlayerActor_CalcNetFollowAngle(void *, s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
s32 _ZN12Unk_02006d1418getTargetWalkSpeedEv(void *);
s32 _ZN11PlayerActor13getInputAngleEv(void *);
void _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
BOOL _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *m);
void _ZN12Unk_020102ec17moveWithCollisionEv(void *);
void _ZN12Unk_020102ec11advanceAnimEv(void *);
void _ZN12Unk_020102ec18updateBodyColliderEv(void *);
void _ZN12Unk_020102ec19submitSceneColliderEv(void *);
void _ZN12Unk_02006d1421netUpdateBodyColliderEv(void *);
void _ZN12Unk_0200804012requestAct77Esjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_02006d1411tryInteractEv(void *);
BOOL _ZN12Unk_02006d1416checkLidAndErrorEv(void *);
void _ZN12Unk_02006d1417resetHeldToolAnimEv(void *);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, s32 id);
s32 _ZN11PlayerActor16finishModelSetupEv(void *);
s32 _ZN12Unk_0200769421getActionDonePriorityEj(void *, s32 a);
void _ZN12Unk_02006d1413setActionFlagEj(void *, s32 id);
s32 PlayerActor_IsWaitingForSlots(void *);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, s32 id);
void _ZN12Unk_02006d1412requestAct10Esji(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_02006d1417offsetSpawnBySlotEv(void *);
}
}

// ---- unk_0200d2b4.cpp
namespace nN {
extern "C" {

class PlayerActor;
void AnimSlotRef_Assign(void *p, u32 v);
void *PlayerBodyModelRef_GetBuffer(void *p);
BOOL PlayerBodyModelRef_PollTexUpload(void *p);
void _ZN11CachedModel11setFromFileEPv(void *p, void *v);
void _ZN11CachedModel16allocJointRecordEPv(void *p, void *v);
void _ZN17TwoLayerAnimModel15allocLayerAnimsEj(void *p, void *v);
void _ZN9AnimModel10attachAnimEv(void *p);
void _ZN5Model11setCallbackEiiiii(void *p, void (*f)(void *), u32 a, u32 b, void *c, u32 d);
void _ZN13MatTexPatAnim10applyFrameEv(void *p);
s32 PlayerSession_GetGfxSlot(s32 a);
void PlayerBodyWorkRef_Assign(void *p, u32 v);
void *PlayerBodyWorkRef_GetHeap(void *p);
void PlayerActor_JointCbPre(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
s32 Scene_GetCurrent();
s32 PlayerActor_GetSlotPosXZ(u16 *a, s32 *b, s32 *c, s32 d, s32 e);
BOOL PlayerActor_GetSlotAngle(u16 *a, s32 b, s32 c);
s32 PlayerData_GetBySessionSlot(s32 a);
u16 *_ZN10PlayerData11getHeldItemEv();
void HeldItemModel_SetItem(void *p, u16 *q, s32 r);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
void HeldItemModel_Update(void *p);
s32 Math_AngleToDir4(s16 a);
s32 Math_AngleToSide(s16 a);
s32 _ZN12Unk_020d93b86getYawEv(void *p);
s32 Scene_NoPlayerInUnsharedScene();
void FieldInfoBalloon_ClearNetMsg();
s32 Net_GetMode();
void Net_WifiHostKeepAlive();
void TalkRequest_FinishSceneEntry();
BOOL func_0203d4d4();
BOOL TalkRequestFlags_IsResetti();
u8 *Scene_GetTouchPicker();
s32 TouchPick_GetGroundPos(u8 *obj, Unk_0200d64c_Xyz *out);
BOOL TouchPickResult_GetTarget(u8 *obj, Unk_0200d64c_Xyz *out, s32 *a, u8 *b);
s32 TouchPick_GetTargetObject(u8 *obj, s32 *pa, u8 *pb);
u16 *BlockMap_GetItemPtrAtPos(void *a, Unk_0200d64c_Xyz *b, u32 c);
void FieldPos_ToUnit(s32 *x, s32 *y, Unk_0200d64c_Xyz *v);
void FieldPos_SnapToUnitCenter(Unk_0200d64c_Xyz *a, Unk_0200d64c_Xyz *b);
s32 _ZN12Unk_020d93b88getPitchEv(void *p);
BOOL Camera_ProjectCurvedToScreen(s32 *a, s32 *b, Unk_0200d64c_Xyz *p);
s32 func_020e9688(Unk_0200d64c_Xyz *v);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
extern Unk_0200d64c_Keys gPad;
extern u16 gTouchX;
extern u16 gTouchY;
extern u8 gScreenTransition;
extern s32 gGfxMainOnTop;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern void *gSceneBlockMap;
extern u8 data_020d5e50[];
extern u8 data_020d5e34[];
extern u8 data_020d5e48[];
extern s16 data_02135f44[];
extern u8 data_020c6190[];
extern u8 data_020c61b8[];
extern void *gCommManager;
extern void *gCamera;
class PlayerActor {
public:
    
    BOOL finishModelSetup();
    void endInit(u32 a);
    void readInput();
    Unk_0200d64c_Xyz PlayerActor_OffsetByAngle(Unk_0200d64c_Xyz *a, s16 *b, void *c);
    BOOL func_0200f5b0();
    BOOL PlayerActor_IsWaitingForSlots();
    void func_0200ec1c(s32 id);
    void netInit();
    void setupInit(Unk_0200d53c_Item *item);
    BOOL requestInit(u32 a, u32 b, u32 c);
    u8 func_0200d5b8();
    s32 getInputDirRelative();
    s32 getInputSideRelative();
    s16 getInputAngle();
    s16 getInputAngleRaw();
    s32 getInputMagnitude();

    BOOL func_0200ec44(s32 id);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_020105ec();
    void func_02010a58(u16 *p);
    u32 pushRequest(PlayerActionRequest *p);

    u8 pad_000[0x5c];
    Unk_0200d64c_Xyz position;
    Unk_0200d64c_Xyz prevPosition;
    u8 pad_74[0x8e - 0x74];
    s16 rotY;
    u8 pad_90[0x130 - 0x90];
    s32 inputMagnitude;
    s16 inputAngle;
    u8 inputRun;
    u8 interactPressed;
    s32 interactTarget;
    u8 actionPressed;
    u8 actionHeld;
    u8 pad_13e[2];
    s32 toolTargetKind;
    u8 hasTargetPos;
    u8 pad_145[3];
    s32 toolTargetPosX;
    s32 toolTargetPosY;
    s32 toolTargetPosZ;
    Unk_0200d64c_Xyz targetPos;
    u8 pad_160[9];
    u8 touchTargetId;
    u8 pad_16a[2];
    s32 inputMode;
    u8 pad_170[0x230 - 0x170];
    u8 bodyModel[0x384 - 0x230];
    u8 bodyWork;
    u8 bodyModelRef;
    u8 pad_386[0x59c - 0x386];
    u8 heldItemModel[0x6f0 - 0x59c];
    Unk_0200d64c_Xyz bodyPos;
    u8 bodyAnimSlot;
    u8 holdAnimSlot;
    u8 pad_6fe[0x70c - 0x6fe];

    u8 eyeTexAnim[0x738 - 0x70c];
    u8 mouthTexAnim;
    u8 pad_739[0x7d0 - 0x739];
    Unk_0200d560 actionWork;
    u8 pad_7d8[0x7ec - 0x7d8];
    s32 action;
    s32 prevAction;
    s32 drawStep;
    u8 pad_7f8[4];
    s32 sessionSlot;
    u8 pad_800[0xc88 - 0x800];
    s32 faceItemState;
    u8 pad_c8c[4];
    s32 hatState;
};
static inline BOOL Unk_0200d64c_InRange(u16 h) {
    if (h >= 0xfc && h <= 0xfd) {
        return TRUE;
    }
    return FALSE;
}
static inline BOOL Unk_0200d64c_IsTwo() {
    return gScreenTransition == 2;
}
static inline BOOL Unk_0200d64c_Both() {
    return gTouchPrevHeld && gTouchPrevChanged;
}
void _ZN12Unk_020102ec13initFaceAnimsEv(void *);
void _ZN12Unk_020102ec9startAnimEijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, s32 id);
void _ZN12Unk_020102ec9setAngleYEPs(void *, u16 *p);
void _ZN19PlayerActionRequest6assignEiis(void *, u32 a, u32 b, u32 c);
u32 _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(void *, PlayerActionRequest *p);
Unk_0200d64c_Xyz PlayerActor_OffsetByAngle(void *, Unk_0200d64c_Xyz *a, s16 *b, void *c);
BOOL PlayerActor_IsWaitingForSlots(void *);
void _ZN12Unk_02006d1415clearActionFlagEj(void *, s32 id);
BOOL _ZN12Unk_02006d1415getHeldToolKindEv(void *);
}
}

// ---- unk_0200dde0.cpp
namespace nO {
extern "C" {

typedef PlayerActionRequest Unk_0200e248_Rec;
s32 PlayerActor_ParamGetSlot(s32);
s32 PlayerActor_ParamGetAction(s32);
void PlayerSession_SetActor(s32, void *);
s32 PlayerSession_GetGfxSlot(s32);
void PlayerPaletteRef_Assign(void *, u32);
void _ZN20CharaFaceAnimWorkRef6assignEj(void *, u32);
void _ZN16CharaFaceAnimRef6assignEj(void *, u32);
void _ZN16PlayerFaceTexRef6assignEj(void *, u32);
void _ZN16PlayerFaceTexRef4loadEj(void *, s32);
void HeldItemModel_Setup(void *, u32, void *, void *, s32, s32);
void _ZN10FishBobber11setOwnerAidEi(void *, s32);
void _ZN12Unk_02005e7c15processRequestsEv(void *);
void PlayerGlassesModelRef_SetSlot(void *, u32);
void PlayerHead_SetSlot(void *, u32);
void PlayerBodyModelRef_SetSlot(void *, u32);
void PlayerBodyModelRef_Load(void *, s32);
void _ZN16CharaClothTexRef6assignEj(void *, u32);
s32 PlayerBodyModelRef_GetBuffer(void *);
s32 CharaClothTexRef_GetBuffer(void *);
s32 PlayerPaletteRef_GetSkin(void *);
void PlayerBodyModelRef_RelocateTexture(void *);
s32 NNS_G3dGetTex(s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 PlayerActor_GetSlotPosXZ(void *a, void *b, void *c, s32 d, s32 e);
s32 PlayerActor_GetSlotAngle(void *a, s32 b, s32 c);
void Bgm_Release(u32 a);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 _ZN15TalkWindowState13getChoiceListEv(s32 a);
s32 _ZN10ChoiceList9getResultEv();
void _ZN15TalkWindowState14setNextMessageEPhPv(s32 a, u8 *b, s32 c);
void _ZN8ItemNameC1EPt(void *obj, u16 *p);
void _ZN8ItemNameD1Ev(void *obj);
void _ZN15TalkWindowState12setNamedSlotEiPvj(s32 a, s32 b, void *c, s32 d);
void PlayerActor_GetHeldItem(u16 *out, void *obj);
void PlayerActor_GetFaceItem(u16 *out, void *obj);
void PlayerActor_GetHat(u16 *out, void *obj);
void PlayerActor_GetShirt(u16 *out, void *obj);
extern u8 data_020c6194[], data_020c6198[], data_020c619c[], data_020c61a0[], data_020c61a4[], data_020c61a8[], data_020c61ac[], data_020c61b0[], data_020c61b4[];
extern u8 gFieldSceneKind;
extern u8 sPlayerActionIsLocomotion[];
extern Unk_021c1b3c *data_021c1b3c;
extern u8 gTalkMsgIndexEnd;
extern char sPlayerClothTexName[], sPlayerSkinPalName[];
class PlayerActor {
public:
    void func_0203e624(u32 v);
    void requestInit(s32 a, s32 b, s32 c);
    void func_02005f04();
    BOOL func_0200ec30(s32 v);
    s32 PlayerActor_GetHairColor();
    s32 func_02010b08(s32 v);
    void func_02010078(s32 a, s32 b);
    s32 PlayerActor_GetFaceTexIndex();
    s32 PlayerActor_GetPlayerData();
    BOOL func_0200fd90(u16 *v);
    BOOL func_0200fdf4();
    void initShirtModel();
    void initHatModel();
    void initFaceItemModel();
    BOOL PlayerActor_GetGender();
    void func_02010050(void *v);
    void func_0200faa0(s32 a, s32 b, const char *c, const char *d);
    void func_0200fa88(s32 a, s32 b, const char *c, const char *d);
    s32 PlayerActor_GetHairStyle();
    BOOL func_0200fab8(u16 *a, s32 b, s32 c, s32 d);

    BOOL doCreate();
    s32 getRequiredPriority();
    s32 getEffectivePriority();
    void clearRequests();
    Unk_0200e248_Rec *getRequest(s32 i);
    BOOL pushRequest(Unk_0200e248_Rec *r);
    BOOL func_0200f660();
    BOOL getRemoteTransform(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 isLocomotionAction(u32 i);
    void onWindowClose();
    void onChoice();
    void onMessageEnd();

      u8 unk_000[8];
      s32 param;
      u8 unk_0c[0x5c - 0xc];
      Unk_0200dde0_Vec3 position;
      u8 prevPosition[0x9c - 0x68];
      s32 gravity;
      s32 maxFallSpeed;
      u8 velocity[0x128 - 0xa4];
      s32 unk_128;
      u8 unk_12c[0x164 - 0x12c];
      s32 toolHitActor;
      u8 toolHitKind;
      u8 touchTargetId[0x385 - 0x169];
      u8 bodyModelRef[0x424 - 0x385];
      u8 headRef[0x598 - 0x424];
      u8 faceItemRef[4];
      u8 heldItemModel[0x5c4 - 0x59c];
      u8 fishBobber[0x6e8 - 0x5c4];
      s32 actionFlags;
      u8 shadowSize[4];
      Unk_0200dde0_Vec3 bodyPos;
      u8 bodyAnimSlot[0x709 - 0x6fc];
      u8 faceTex;
      u8 faceAnimRef;
      u8 faceAnimWork;
      u8 eyeTexAnim[0x770 - 0x70c];
      u8 shirtTex[0x79c - 0x770];
      u8 skinHairPalette[0x7d0 - 0x79c];
      u16 actionWork;
      u8 unk_7d2;
      u8 unk_7d3;
      u16 unk_7d4;
      u8 unk_7d6[2];
      u8 unk_7d8;
      u8 unk_7d9[0x7ec - 0x7d9];
      s32 action;
      u8 prevAction[8];
      s32 actionPriority;
      s32 sessionSlot;
      s32 exitIndex;
      s32 exitMode;
      s32 fieldQuery;
      s32 dropQuery;
      s32 fieldAnswerKind;
      s32 fieldAnswer;
      s32 msgStep;
      u8 actionItem[0x8e4 - 0x81c];
      u8 tripCooldown;
      u8 alpha;
      u8 lastInputSide[0x900 - 0x8e6];
      u8 pendingEvent;
      u8 unk_901[0x930 - 0x901];
      Unk_0200e248_Rec requests[30];
      s32 requestCount;
      s32 bestRequest;
};
BOOL PlayerActor_CalcNetFollowAngle(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out);
void _ZN9Character9setCharIdEj(void *, u32 v);
s32 PlayerActor_GetHairColor(void *);
void _ZN12Unk_02006d1420applySkinHairPaletteEii(void *, s32 a, s32 b);
s32 _ZN12Unk_020102ec7calcTanEj(void *, s32 v);
s32 PlayerActor_GetFaceTexIndex(void *);
s32 PlayerActor_GetPlayerData(void *);
void _ZN11PlayerActor11requestInitEjjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_02006d1413setActionFlagEj(void *, s32 v);
BOOL _ZN12Unk_02006d1421requestFaceItemChangeEPt(void *, u16 *v);
BOOL _ZN12Unk_02006d1419applyFaceItemChangeEv(void *);
s32 PlayerActor_GetHairStyle(void *);
BOOL _ZN12Unk_02006d1416requestHatChangeEPthhh(void *, u16 *a, s32 b, s32 c, s32 d);
BOOL PlayerActor_GetGender(void *);
void _ZN12Unk_02006d1415setShirtTextureEPv(void *, void *v);
void _ZN12Unk_02006d1417bindTextureByNameEPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
void _ZN12Unk_02006d1417bindPaletteByNameEPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
BOOL _ZN12Unk_02006d1420getHeldHoldableIndexEv(void *);
}
}

// ---- unk_0200e758.cpp
namespace nP {
extern "C" {

extern CommManager *gCommManager;
extern Unk_0200e7f4_T24 data_021cb69c;
extern u8 sPlayerActionTalkable[];
extern s16 data_02135f44[];
extern u32 data_020d5e40;
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02006d14_Vec3 position;
    Unk_02006d14_Vec3 prevPosition;
    u8 pad_74[0x8e - 0x74];
    s16 rotY;
    u8 pad_90[0xb0 - 0x90];
    u32 actorFlags;
    u8 pad_b4[0xc4 - 0xb4];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 pad_d2[0x16c - 0xd2];
    u32 inputMode;
    u8 pad_170[0x17e - 0x170];
    u8 unk_17e;
    u8 unk_17f;
    u8 pad_180[0x1ac - 0x180];
    u8 unk_1ac;
    u8 pad_1ad[0x230 - 0x1ad];
    u8 bodyModel[0x294 - 0x230];
    Unk_0200e7f4_T24 bodyBaseMtx;
    u8 pad_2c4[0x458 - 0x2c4];
    s16 headPitch;
    s16 headYaw;
    s16 headPitchTarget;
    s16 headYawTarget;
    u8 pad_460[0x59c - 0x460];
    u8 heldItemModel[0x694 - 0x59c];
    u8 itemHandMtx[0x6b8 - 0x694];
    u32 itemHandPosX;
    u32 itemHandPosY;
    u32 itemHandPosZ;
    u8 pad_6c4[0x6e8 - 0x6c4];
    u32 actionFlags;
    u8 pad_6ec[0x7d1 - 0x6ec];
    u8 unk_7d1;
    u8 pad_7d2[0x7fc - 0x7d2];
    s32 sessionSlot;
    u8 pad_800[0x818 - 0x800];
    s32 msgStep;
    u8 pad_81c[0x820 - 0x81c];
    s32 shownItemPos;
    s32 shownItemPosY;
    s32 shownItemPosZ;
    u8 pad_82c[0x838 - 0x82c];
    u8 seEmitterLocal[0x87c - 0x838];
    u8 seEmitterRemote[0x8c0 - 0x87c];
    s32 sePosX;
    s32 sePosY;
    s32 sePosZ;
    u8 pad_8cc[0xc78 - 0x8cc];
    u32 requestCount;

    s32 func_0200e758();
    BOOL isGuestInSession();
    void calcHandMtx();
    void resetHeldToolAnim();
    void netUpdateBodyCollider();
    BOOL canAcceptTalk(u32 id);
    void updateHeadLook();
    void netSendTan();
    void netSendClothesChange(u32 a, u32 b);
    BOOL func_0200eba0(Unk_02006d14_Vec3 *out);
    void loadInputMode();
    void clearActionFlag(u32 id);
    void setActionFlag(u32 id);
    u32 testActionFlag(u32 id);
    void playSeAt(u32 a, Unk_02006d14_Vec3 *v);
    void playSe(u32 a);
    void offsetSpawnBySlot();
    void nudgeForward();
    BOOL netSyncNearPoint(Unk_02006d14_Vec3 *p);
    BOOL netSyncNearUnit(s32 *p);
    BOOL netFollowTransform();
    BOOL getNetTransformInArea(Unk_02006d14_Vec3 *out, s16 *ang);
    void updateShownItemPos(u32 a, ...);
    s32 getHeldToolKind();
};
s32 Scene_GetPrevious();
s32 Scene_GetCurrent();
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
BOOL _ZN11CommManager8isOnlineEv(CommManager *g);
BOOL _ZN11CommManager11isLocalSlotEj(CommManager *g, s32 i);
BOOL PlayerActor_GetSlotAngle(u32 *out, s32 a, s32 b);
u32 WorldCurve_ToCurved(void *a, void *b);
s32 _ZN5Actor15calcModelMatrixEPv(Unk_02006d14 *p, void *buf);
s32 _ZN5Model8setAlphaEj(void *p, s32 v);
s32 _ZN17TwoLayerAnimModel11drawLayeredEj(void *p, s32 v);
s32 Model_GetJointWorldMtx(void *p, void *q, s32 v);
s32 HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
BOOL PlayerActor_IsInAction(s32 a, s32 b);
BOOL PlayerActor_GetSlotPosXZ(s16 *s, s32 *x, s32 *z, s32 m, s32 arg);
Unk_02006d14_Vec3 *PlayerActor_GetBodyPos(u32 n);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(Unk_02006d14_Vec3 *a, Unk_02006d14_Vec3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
void PlayerActor_OffsetByAngle(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, Unk_02006d14_Vec3 *v, s16 *ang, u32 arg);
s32 _ZN12Unk_020102ec18updateBodyColliderEv(Unk_02006d14 *p);
s32 PlayerActor_ApproachAngle(s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 PlayerActor_GetTan(Unk_02006d14 *p);
s32 _ZN11CommManager11beginRecordEv(CommManager *g);
s32 _ZN11CommManager11writeRecordEPhj(CommManager *g, void *p, s32 n);
s32 _ZN11CommManager9endRecordEjj(CommManager *g, s32 a, s32 b);
s32 PlayerActor_PackClothesChange(u32 *out, u32 a, u32 b);
s32 WorldCurve_FromCurved(Unk_02006d14_Vec3 *v);
BOOL InputMode_IsButtons();
BOOL InputMode_IsTouch();
s32 Snd_SeEmitterPlayHeld(void *p, u32 a, s32 b, s32 c);
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
s32 Math_AngleToDir4(s32 a);
s32 FieldPos_FromUnitCenter(Unk_02006d14_Vec3 *out, s32 x, s32 z);
s32 func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void PlayerActor_CalcHandItemPos(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, void *args);
void PlayerActor_StepTowardPoseFast(Unk_02006d14 *p, s32 a, s32 b, s32 c);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(Unk_02006d14 *p, u8 *b, s32 *x, s32 *z, s16 *ang);
BOOL PlayerActor_IsWaitingForSlots();
void PlayerActor_NetSendFaceChange();
static inline BOOL Unk_0200ec54_Bit(u32 f, u32 m)
{
    return (f & m) != 0 ? TRUE : FALSE;
}
s32 _ZN12Unk_02006d1415getHeldToolKindEv(void *);
}
}

// ---- unk_0200f070.cpp
namespace nQ {
extern "C" {

extern s16 data_02135f44[];
extern s32 sPlayerFrontPointDist;
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u32 data_020c6210[];
class Unk_02006d14;
s32 func_01ffcb0c(s32 a, s32 b);
void MTX_MultVec43(Unk_0200f070_V3 *v, Unk_0200f070_M *m, Unk_0200f070_V3 *out);
void WorldCurve_FromCurved(Unk_0200f070_V3 *dst, Unk_0200f070_V3 *src);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
BOOL _ZN12Unk_02006d1414testActionFlagEj(Unk_02006d14 *o, s32 id);
BOOL LowBattery_Poll();
void _ZN12Unk_0200804019requestErrorMessageEhjj(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void _ZN12Unk_0200804016requestLidClosedEjj(Unk_02006d14 *o, s32 a, s32 b);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(s32 a, Unk_0200f17c_Date d);
void *DebugVar_GetPtr(s32 a, s32 b);
s32 PlayerActor_GetTan(Unk_02006d14 *o);
BOOL _ZN12Unk_02006d1416isGuestInSessionEv(Unk_02006d14 *o);
Unk_0200f17c_Date *PlayerSession_GetLastPlayDate();
void PlayerActor_GetPlayerData(void *o);
Unk_0200f17c_Date _ZN10PlayerData15getLastPlayDateEv();
void Clock_GetDateTime(void *p);
void MI_CpuCopy8(void *a, void *b, s32 n);
void DateTime_Compare(void *a, void *b, s32 n);
void Snd_SeEmitterPlayAlternate(void *a, void *b, s32 c);
Unk_0200f070_V3 *Footstep_GetSeAtPos(Unk_0200f070_V3 *v);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *o, s32 id);
void Effect_Create(s32 a, Unk_0200f070_V3 *v, s16 *r, s32 c);
void PlayerActor_OffsetByAngle(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p);
void PlayerActor_GetFrontPoint(Unk_0200f070_V3 *out, Unk_02006d14 *o);
void PlayerActor_StepTowardXZ(Unk_02006d14 *o, s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, Unk_0200f070_V3 *v);
BOOL PlayerActor_ApproachAngle(s16 *a, s32 b, s32 c, s32 d, s32 e);
s32 _ZN12Unk_020102ec9setAngleYEPs(void *o, s16 *a);
void PlayerActor_TurnAngle(s16 *a, s32 b);
s32 PlayerActor_ApproachCoord(void *a, s32 b);
s32 PlayerActor_ApproachValue(void *a, s32 b, s32 c, s32 d, s32 e);
void PlayerActor_GetHeldItem(Unk_0200f660_S *s, Unk_02006d14 *o);
BOOL Item_IsFurniture(Unk_0200f660_S *s);
s32 Item_GetFurnitureIndex(u16 *p);
s32 ItemInfo_GetHoldableIndex(Unk_0200f660_S *s);
s32 _ZN12Unk_02006d1418getFieldAnswerKindEv(Unk_02006d14 *o);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
void PlayerActor_RequestPickUpItem(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void PlayerActor_RequestPluckReach(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b);
void PlayerActor_RequestAct66(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 FieldAction_RequestToolForAid(void *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
s32 FieldAction_RequestPickUpForAid(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 FieldAction_RequestFillHoleForAid(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 FieldAction_PollResult(s32 a);
s32 FieldAction_PollDrop(s32 a);
void FieldAction_Release(s32 a);
void *FieldAction_Get(s32 a);
class Unk_02006d14 {
public:
    u8 pad_000[0x5c];
    Unk_0200f070_V3 position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0xb0 - 0x90];
    u32 actorFlags;
    u8 pad_b4[0x2cc - 0xb4];
    u8 bodyAnimCtrl[4];
    u8 pad_2d0[0x694 - 0x2d0];
    Unk_0200f070_M itemHandMtx;
    s32 footPosA[3];
    s32 footPosB[3];
    u8 pad_6dc[0x700 - 0x6dc];
    s32 animId;
    u8 pad_704[0x7fc - 0x704];
    s32 sessionSlot;
    u8 pad_800[0x808 - 0x800];
    s32 fieldQuery;
    s32 dropQuery;
    s32 fieldAnswerKind;
    s32 fieldAnswer;
    u8 pad_818[4];
    u16 actionItem;
    u16 shownItem;
    u8 pad_820[0x838 - 0x820];
    u8 seEmitterLocal[0x87c - 0x838];
    u8 seEmitterRemote[4];

    BOOL checkLidAndError();
    void playFootstepSe();
    void updateFootstepFx();
    s32 turnAwayFromCamera(s32 a);
    s32 turnToCamera(s32 a);
    s32 turnToward(s32 a);
    s32 getHeldToolKind();
    s32 getHeldHoldableIndex();
    BOOL requestByFieldAnswer(s32 a, s32 b);
    s32 startUnitItemQuery(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    BOOL startFieldQuery(s32 a, s32 mode, s32 idx);
    s32 pollFieldQuery();
    void pollStoreQuery();
};
static inline void Unk_0200f070_Set(Unk_0200f070_V3 *r, s32 x, s32 y, s32 z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}
void PlayerActor_CalcHandItemPos(Unk_0200f070_V3 *dst, Unk_02006d14 *o, s32 *p);
void PlayerActor_SetLastPlayDate(Unk_02006d14 *o, s32 a, Unk_0200f17c_Date *d);
void PlayerActor_CompareLastPlayDate(void *o, void *a, u8 *b);
void PlayerActor_CompareLastPlayDateNow(void *o);
void PlayerActor_OffsetByAngle(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p);
void PlayerActor_GetFrontPoint(Unk_0200f070_V3 *out, Unk_02006d14 *o);
void PlayerActor_GetFrontUnitCenter(Unk_02006d14 *a, Unk_02006d14 *b);
void PlayerActor_StepTowardXZ(Unk_02006d14 *o, s32 a, s32 b);
void PlayerActor_StepTowardPoseFast(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void PlayerActor_StepTowardPose(Unk_02006d14 *o, s32 a, s32 b, s32 c);
namespace Unk_0200f7a0_NS {
extern "C" s32 FieldAction_RequestToolForAid(void *o, Unk_0200f6d4_V2 *v, s32 a, s32 b, s32 c);
}
s32 _ZN12Unk_02006d1410turnTowardEi(void *, s32 a);
}
}

// ---- unk_0200f9bc.cpp
namespace nR {
extern "C" {

inline BOOL Unk_0200f9d4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Unk_020102a0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
extern u8 gFieldSceneKind;
extern u32 sPlayerReachDist[];
extern u32 data_020cb35c;
extern u32 data_020cb360;
extern u8 sPlayerSkinPalName[], sPlayerEyeTexName[], sPlayerMouthTexName[], sPlayerHairPalName[], sPlayerShirtTexName[], data_020d5e38[];
void *FieldAction_Get(u32 p);
s32 PlayerActor_RoomInteractAt(void *, s32, s32);
s32 PlayerActor_FieldInteractAt(void *, s32);
s32 PlayerActor_RoomUseTool(void *);
s32 PlayerActor_FieldUseTool(void *);
s32 func_020e9650(void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
void G3dRes_CopyPlttByName(void *, void *, void *, void *);
void G3dRes_CopyTexByName(void *, void *, void *, void *);
BOOL PlayerHead_PollTexUpload(void *);
s32 PlayerHead_GetModelIds(s32, u32, u16 *, s32 *, s32 *);
void PlayerHead_Load(void *, s32, s32, u16 *, s32);
void *PlayerHead_GetModelFile(void *, s32);
s32 NNS_G3dGetTex(void *);
void *_ZN16PlayerFaceTexRef9getBufferEv(void *);
void *PlayerPaletteRef_GetSkin(void *);
void *PlayerPaletteRef_GetHair(void *);
void PlayerHead_RelocateTextures(void *);
void PlayerHead_CancelTexUpload(void *);
void _ZN11CachedModel7releaseEv(void *);
void _ZN11CachedModel11setFromFileEPv(void *, void *);
s32 PlayerHead_GetModelId(void *, s32);
void _ZN13MatTexPatAnim7releaseEv(void *);
void _ZN20CharaFaceAnimWorkRef7getHeapEv(void *);
void func_020e885c();
void *_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *);
void *_ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *, void *, u32, u32, u32, u32);
s32 PlayerGlassesModelRef_GetModelId(void *);
s32 PlayerGlassesModelRef_PollTexUpload(void *);
s32 PlayerGlassesModel_GetAccessoryModelId(s32);
s32 PlayerGlassesModel_GetFlowerModelId(s32);
BOOL Item_IsFlowerAltItem(u16 *);
s32 Item_GetFlowerAltOrdinal(u16 *);
void PlayerGlassesModelRef_Load(void *, s32);
void PlayerGlassesModelRef_RelocateTexture(void *);
void PlayerGlassesModelRef_CancelTexUpload(void *);
void *PlayerGlassesModelRef_GetBuffer(void *);
BOOL TalkRequestFlags_IsResetti(void *);
void TalkRequest_AddTalk(void *, void *);
BOOL Character_FindInteractionTarget(void *);
BOOL _ZN9Character16checkInteractionEPS_(void *, void *);
void PlayerActor_OffsetByAngle(Unk_0200ff08_Vec *, void *, void *, void *, void *);
void CharaClothTexRef_GetBuffer(void *);
u32 ClothTex_GetTexThunk();
void _ZN14MatTexVramTask7requestEPvjS0_jj(void *, u32, void *, u32, u32, u32);
void _ZN16CharaClothTexRef8loadItemEPtiii(void *, s32, void *, u32, u32);
void PlayerPaletteRef_LoadSkin(void *);
void PlayerPaletteRef_LoadHair(void *, s32);
s32 func_01ffcb0c(s32, s32);
BOOL _ZN13ActorCollider12isHitByGroupEj(void *, s32);
BOOL _ZN13ActorCollider17isPushedFromAngleEi(void *, s32);
s32 HeldItem_GetHandPose(u16 *);
s32 CharaAnim_GetHoldPoseMode(s32);
void AnimSlotRef_Load(void *, s32, s32, s32);
void AnimSlotRef_GetData(void *);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
void _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(void *, s32, s32, u32, u32, u32, u32, u32);
s32 CharaAnim_GetJointGroup(s32);
s32 JointGroup_GetRangeCount();
s32 JointGroup_GetRangeFirst(s32, s32);
s32 JointGroup_GetRangeLast(s32, s32);
void _ZN17TwoLayerAnimModel20assignJointsToLayer2Ejj(void *, s32, s32);
void _ZN17TwoLayerAnimModel23releaseJointsFromLayer2Ejj(void *, s32, s32);
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(void *, s32, s32);
void PlayerActor_GetHeldItem(u16 *, void *);
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    u8 unk_5c[0x8e - 0x5c];
    s16 rotY;
    u8 pad_90[0x138 - 0x90];
    Unk_0200ff08_Obj *interactTarget;
    u8 actionPressed;
    u8 pad_13d[0x154 - 0x13d];
    s32 targetPosX, targetPosY, targetPosZ;
    u8 pad_160[0x16c - 0x160];
    s32 inputMode;
    u8 bodyCollider[0x230 - 0x170];
    u8 bodyModel[0x28c - 0x230];
    u32 bodyResMdl;
    u8 pad_290[0x388 - 0x290];
    u8 headModel0[0x424 - 0x388];
    u8 headRef[0x460 - 0x424];
    u8 headModel1[0x4fc - 0x460];
    u8 faceItemModel[0x598 - 0x4fc];
    u8 faceItemRef[0x6f0 - 0x598];
    s32 bodyPos;
    s32 pad_6f4;
    s32 bodyPosZ;
    u8 pad_6fc[0x6fd - 0x6fc];
    u8 holdAnimSlot[0x704 - 0x6fd];
    s32 handPose;
    u8 animMode;
    u8 faceTex;
    u8 faceAnimRef;
    u8 faceAnimWork;
    u8 eyeTexAnim[0x714 - 0x70c];
    u32 eyeAnimFrame;
    u8 pad_718[0x738 - 0x718];
    u8 mouthTexAnim[0x740 - 0x738];
    u32 mouthAnimFrame;
    u8 pad_744[0x770 - 0x744];
    u8 shirtTex[0x774 - 0x770];
    u8 shirtTexUpload[0x79c - 0x774];
    u8 skinHairPalette[0x7a4 - 0x79c];
    u32 bgCheckFlags;
    u8 pad_7a8[0x808 - 0x7a8];
    u32 fieldQuery;
    u8 pad_80c[0xc88 - 0x80c];
    s32 faceItemState;
    u16 pendingFaceItem;
    u8 pad_c8e[2];
    s32 hatState;
    u16 pendingHat;
    u8 pendingHairStyle;
    u8 pendingHairColor;
    u8 pendingHatBindFace;

    u32 getFieldAnswerKind();
    s32 interactAt(s32 a);
    s32 useHeldTool();
    BOOL isPosInReach(s32 *pos, u32 idx);
    void bindPaletteByName(void *a, void *b, void *c, void *d);
    void bindTextureByName(void *a, void *b, void *c, void *d);
    BOOL requestHatChange(u16 *p, u8 b, u8 c, u8 d);
    void pollHatLoad();
    void applyHatChange();
    BOOL requestFaceItemChange(u16 *p);
    void pollFaceItemLoad();
    void applyFaceItemChange();
    s32 tryInteract();
    void requestShirtTexUpload();
    void setShirtTexture(void *p);
    void applySkinHairPalette(s32 a, s32 b);
    s32 getTargetWalkSpeed();
    void applyHoldPose(u16 *p, s32 b, void *c);
    void applyHeldItemPose(s32 b, void *c);

    BOOL testActionFlag(s32 n);
    BOOL func_0200d5b8();
    s32 func_0200d640();
    void func_020105ec();
    void *PlayerActor_GetGender();
    void *PlayerActor_GetPlayerData();
    void *func_02010b08(s32 n);
    s32 PlayerActor_GetFaceTexIndex();
    BOOL PlayerActor_GetFaceAltFlag();
};
inline BOOL Unk_02010154_In(u16 *p) { BOOL r = FALSE; u16 v = *p; if (*p >= 0x1380 && v <= 0x139f) r = TRUE; return r; }
BOOL _ZN12Unk_02006d1414testActionFlagEj(void *, s32 n);
void * PlayerActor_GetGender(void *);
void * PlayerActor_GetPlayerData(void *);
void * _ZN12Unk_020102ec7calcTanEj(void *, s32 n);
void _ZN12Unk_020102ec13initFaceAnimsEv(void *);
BOOL _ZN11PlayerActor13func_0200d5b8Ev(void *);
s32 PlayerActor_GetFaceTexIndex(void *);
BOOL PlayerActor_GetFaceAltFlag(void *);
s32 _ZN11PlayerActor17getInputMagnitudeEv(void *);
}
}

// ---- unk_020102ec.cpp
namespace nS {
extern "C" {

s32 _ZN12Unk_020102ec19setMouthAnimForBodyEPiPh(Unk_020102ec *a, s32 *b, u8 *c);
extern void *gCommManager;
extern u8 sPlayerActionColliderFlag2[];
extern u16 sPlayerAnimResIndex[];
BOOL _ZN11CommManager11isLocalSlotEj(void *a, u32 b);
BOOL Scene_InUnk6To8(void);
u32 Scene_GetCurrent(void);
u32 Scene_GetTouchPicker(void);
void _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP4Vec3S3_S3_ih(u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
void AnimSlotRef_Load(void *a, s32 b, u32 c, u32 d);
s32 AnimSlotRef_GetData(void *a);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, u32 b);
void BlendAnimModel_Play(void *a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *a);
void _ZN12Unk_02006d1417applyHeldItemPoseEiPv(Unk_020102ec *a, s32 b, u32 c);
void _ZN16CharaFaceAnimRef8loadAnimEiii(void *a, s32 b, u32 c, u32 d);
s32 _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *a);
s32 _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *a);
s32 CharaAnim_GetMouthAnim(s32 a);
s32 CharaAnim_GetEyeAnim(s32 a);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *a, s32 b, u32 c, u32 d, u32 e, u32 f);
s32 _ZN13MatTexPatAnim6updateEv(void *a);
s32 _ZN16PlayerFaceTexRef9getBufferEv(void *a);
s32 _ZN20CharaFaceAnimWorkRef7getHeapEv(void *a);
void _ZN13MatTexPatAnim4initEPvS0_jS0_(void *a, s32 b, s32 c, u32 d, s32 e);
void _ZN13ActorCollider6submitEv(void *a);
void _ZN19ActorPlacedCollider15setupForActorAtEPvP4Vec3iijjjhi(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
u32 Ground_GetDefaultY(u32 a);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *a, u32 b);
BOOL BlinkTimer_Update(void *a);
BOOL _ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(Unk_020102ec *a, Unk_02010924_Msg *b, u32 *c, u32 *d, s16 *e);
BOOL PlayerActor_TurnAngleSlow(s16 *a, s32 b);
void PlayerActor_ApproachCoord(void *a, u32 b);
void _ZN5Actor13applyVelocityEP16Unk_02002cb0_Vec(Unk_020102ec *a, void *b);
void _ZN14CollisionStateC1Ev(void *a);
void _ZN14CollisionStateD1Ev(void *a);
void Collision_Move(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
void _ZN5Actor12calcVelocityEv(Unk_020102ec *a);
void PlayerActor_TurnAngle(void *a);
u32 PlayerActor_GetPlayerData(u32 a);
u32 PlayerActor_GetTan(u32 a);
u32 PlayerActor_ParamGetAction(u32 a);
BOOL _ZN12Unk_02006d1416isGuestInSessionEv(u32 a);
s32 PlayerActor_CompareLastPlayDate(u32 a, void *b, void *c);
void PlayerActor_SetLastPlayDate(u32 a, u32 b, void *c);
s32 DateTime_DiffDays(void *a, void *b);
u8 *PlayerSession_GetSessionFlags(void);
u16 *PlayerSession_GetTanTimer(void);
void _ZN10PlayerData6setTanEh(u32 a, u32 b);
void _ZN12Unk_02006d1410netSendTanEv(u32 a);
u16 *_ZN10PlayerData11getHeldItemEv(void);
u32 _ZN10PlayerData11getFaceTypeEv(u32 a);
BOOL PlayerData_HasStungFace(u32 a);
u16 *_ZN10PlayerData11getFaceItemEv(void);
void PlayerActor_GetHeldItem(u16 *out, u32 x);
u32 PlayerActor_GetFaceTexIndex(u32 x);
u32 PlayerActor_GetFaceAltFlag(u32 x);
void PlayerActor_GetFaceItem(u16 *out, u32 x);
u8 _ZN12Unk_0200769416keepsBgCheckWorkEj(void *, u32 a);
}
}

// ---- unk_02010c74.cpp
namespace nT {
extern "C" {

s32 PlayerSession_GetDataIndex(s32 v);
void *PlayerData_Get(void);
s32 _ZN10PlayerData6getTanEv(void *p);
s32 _ZN10PlayerData12getHairColorEv(void *p);
s32 _ZN10PlayerData12getHairStyleEv(void *p);
u16 *_ZN10PlayerData6getHatEv(void *p);
u16 *_ZN10PlayerData8getShirtEv(void *p);
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void);
s32 func_01ffcb0c(s32 a, s32 b);
void *PlayerActor_GetPlayerData(void *p);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
BOOL PlayerActor_GetBodyPos(s32 a);
s32 Ground_GetExitAtPos(void);
void PlayerActor_SetLocalExitId(s32 *p);
void *Scene_GetWarpRequest(void);
BOOL SceneExit_GetDoor(void *a, s32 b, s32 *c, s32 *d);
void PlayerActor_SetLocalExitKind(s32 *p);
BOOL RoomEntry_IsExclusiveExit(s32 v);
BOOL Scene_InUnk6To8(void);
void TalkRequest_FinishSceneEntry(void);
void TalkRequest_AddLeaveRoom(void);
s32 PlayerActor_GetCharacter(s32 v);
void TalkRequest_AddSceneExit(s32 a, s32 b);
extern void *gCommManager;
s32 PlayerActor_GetTan(void *p);
s32 PlayerActor_GetHairColor(void *p);
s32 PlayerActor_GetHairStyle(void *p);
void PlayerActor_GetHat(u16 *out, void *p);
void PlayerActor_GetShirt(u16 *out, void *p);
BOOL PlayerActor_GetGender(void *p);
void *PlayerActor_GetPlayerData(void *p);
s32 PlayerActor_DecelerateSkid(s32 a, s32 b);
s32 PlayerActor_Decelerate(s32 a, s32 b);
s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c);
s32 PlayerActor_Accelerate(s32 a, s32 b);
s32 PlayerActor_TurnAngleSlow(s16 *p, s32 target);
s32 PlayerActor_TurnAngle(s16 *p, s32 target);
s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_ApproachCoord(s32 *p, s32 target);
void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void PlayerActor_CheckSceneExit(s32 a);
void DC_FlushRange(void *p, u32 size);
void GX_LoadOBJ(void *p, u32 src, u32 size);
void GXS_LoadOBJ(void *p, u32 src, u32 size);
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
void *Mem_AllocTail(u32 size);
void Mem_Free(void *p);
BOOL FS_OpenFile(void *self, const void *path);
BOOL FS_SeekFile(void *self, u32 off, s32 z);
s32 FS_ReadFile(void *self, void *dst, u32 size);
BOOL FS_CloseFile(void *self);
extern u8 sHudObjCharPathTen2[];
extern u32 sSlideIconCharOffsets[];
void PlayerActor_Create();
}
}

class Unk_02006d14 {
public:
    void changeAction(Unk_02006d14_Item* item);
    BOOL netAct76(s16 v);
    BOOL requestAct76(u8 a, u8 b, u8 c, u32 d, s16 e);
    void mainTurnTo();
    void turnToCheckEnd();
    void turnToUpdate();
    void netTurnTo();
    void setupTurnTo(Unk_02006d14_Item *item, u32 old);
    BOOL requestTurnTo(s16 v, u32 a, u32 b);
    void mainWalkTo();
    void walkToCheckEnd(s32 f);
    void walkToMove();
    void walkToUpdateAnim();
    s32 walkToUpdateSpeed();
    void netWalkTo();
    void setupWalkTo(Unk_02006d14_Item *item, u32 old);
    BOOL requestWalkTo(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void mainChangeHeldItem();
    void changeHeldItemUpdate();
    void endChangeHeldItem();
    void setupAct76(Unk_02006d14_Item *item, u32 old);
    s32 netChangeHeldItem(u32 a);
    void setupChangeHeldItem(Unk_02006d14_Item* item, u32 old);
    s32 requestChangeHeldItem(u16 a, u32 b, u32 c);
    void mainAct35();
    void act35CheckEnd();
    void setupAct35(Unk_02006d14_Item* item, u32 old);
    s32 requestAct35(u32 a, u32 b);
    s32 requestAct34(u32 a, u32 b);
    s32 requestAct33(u32 a, u32 b);
    s32 requestAct32(u32 a, u32 b);
    s32 requestAct31(u32 a, u32 b);
    void mainAct34();
    void act34CheckEnd();
    void setupAct34(Unk_02006d14_Item* item, u32 old);
    void mainAct33();
    void act33CheckEnd();
    void setupAct33(Unk_02006d14_Item* item, u32 old);
    void mainAct32();
    void act32CheckEnd();
    void act32UpdateAnim();
    void act32UpdateSpeed();
    s32 netAct32(u32 a);
    void setupAct32(Unk_02006d14_Item* item, u32 old);
    void mainAct31();
    void act31CheckEnd();
    void setupAct31(Unk_02006d14_Item* item, u32 old);
    void mainAct30();
    void act30CheckEnd();
    void act30UpdateAnim();
    void setupAct30(Unk_02006d14_Item* item, u32 old);
    s32 requestAct30(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void mainPickUpFanfareStow();
    void pickUpFanfareStowShrink();
    void netAct35();
    void netAct34();
    void netAct33();
    void netAct31();
    void netAct30();
    void netPickUpFanfareStow(s16 v);
    void setupPickUpFanfareStow(Unk_02006d14_Item* item, u32 v);
    s32 requestPickUpFanfareStow(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void mainPickUpFanfare();
    void pickUpFanfareTakeItem();
    void pickUpFanfareNetTake();
    void pickUpFanfareUpdate();
    void pickUpFanfareUpdateItemPos();
    void endPickUpFanfare();
    void netPickUpFanfare(s16 v);
    void setupPickUpFanfare(Unk_02006d14_Item* item, u32 v);
    s32 requestPickUpFanfareWithItem(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 requestPickUpFanfareAt(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void mainPickUp();
    void pickUpRemoteCheckEnd();
    void pickUpUpdateStore(u8* state, u8 flag);
    s32 requestPickUpWithItem(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 requestPickUpAt(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
    void pickUpUpdateAnim(Unk_02006d14_Item* item, u32 old);
    void endPickUp(Unk_02006d14_Item* item, u32 old);
    void netPickUp(s16 old);
    void mainPickUpReach(Unk_02006d14_Item* item, u32 old);
    void pickUpReachUpdate();
    void pickUpUpdateItem();
    void setupPickUp(Unk_02006d14_Item* item, u32 old);
    void pickUpReachWaitAnswer();
    void netPickUpReach(s16 v);
    void setupPickUpReach(Unk_02006d14_Item *item, u32 old);
    s32 requestPickUpReach(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void mainAct15();
    void act15CheckEnd();
    void act15UpdateAnim();
    s32 netAct15(u32 v);
    void setupAct15(Unk_02006d14_Item *item, u32 old);
    s32 requestAct15(u32 a, u32 b);
    void mainEmotion();
    void emotionCheckEnd();
    void emotionUpdateAnim();
    void endEmotion();
    s32 netEmotion(s16 v);
    void setupEmotion(Unk_02006d14_Item *item, u32 old);
    s32 requestEmotion(u8 a, u8 b, u32 c, s16 d);
    void mainAct13();
    void act13CheckEnd();
    s32 netAct13(u32 v);
    void setupAct13(Unk_02006d14_Item *item, u32 old);
    BOOL requestAct13(u32 a, u32 b);
    void mainAct10();
    void act10CheckTalk();
    void act10FaceTalkTarget();
    void act10UpdateAnim();
    void netAct10(u32 v);
    void setupAct10(Unk_02006d14_Item *item, u32 old);
    s32 requestAct10(s16 a, u32 b, s32 c);
    void mainChangeClothes();
    void changeClothesCheckEnd();
    BOOL isGuestInSession();
    void calcHandMtx();
    void resetHeldToolAnim();
    void netUpdateBodyCollider();
    BOOL canAcceptTalk(u32 id);
    void updateHeadLook();
    void netSendTan();
    void netSendClothesChange(u32 a, u32 b);
    void loadInputMode();
    void clearActionFlag(u32 id);
    void setActionFlag(u32 id);
    u32 testActionFlag(u32 id);
    void playSeAt(u32 a, Unk_02006d14_Vec3 *v);
    void playSe(u32 a);
    void offsetSpawnBySlot();
    void nudgeForward();
    BOOL netSyncNearPoint(Unk_02006d14_Vec3 *p);
    BOOL netSyncNearUnit(s32 *p);
    BOOL netFollowTransform();
    BOOL getNetTransformInArea(Unk_02006d14_Vec3 *out, s16 *ang);
    void updateShownItemPos(u32 a, ...);
    BOOL checkLidAndError();
    void playFootstepSe();
    void updateFootstepFx();
    s32 turnAwayFromCamera(s32 a);
    s32 turnToCamera(s32 a);
    s32 turnToward(s32 a);
    s32 getHeldToolKind();
    s32 getHeldHoldableIndex();
    BOOL requestByFieldAnswer(s32 a, s32 b);
    s32 startUnitItemQuery(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    s32 pollFieldQuery();
    void pollStoreQuery();
    BOOL startFieldQuery(s32 a, s32 mode, s32 idx);
    u32 getFieldAnswerKind();
    s32 interactAt(s32 a);
    s32 useHeldTool();
    BOOL isPosInReach(s32 *pos, u32 idx);
    void bindPaletteByName(void *a, void *b, void *c, void *d);
    void bindTextureByName(void *a, void *b, void *c, void *d);
    BOOL requestHatChange(u16 *p, u8 b, u8 c, u8 d);
    void pollHatLoad();
    void applyHatChange();
    BOOL requestFaceItemChange(u16 *p);
    void pollFaceItemLoad();
    void applyFaceItemChange();
    s32 tryInteract();
    void requestShirtTexUpload();
    void setShirtTexture(void *p);
    void applySkinHairPalette(s32 a, s32 b);
    s32 getTargetWalkSpeed();
    void applyHoldPose(u16 *p, s32 b, void *c);
    void applyHeldItemPose(s32 b, void *c);
};

class Unk_02007694 {
public:
    void resetRotXForAction(u32 a);
    void stopMovementForAction(u32 a);
    void clearActionWork();
    void endAction(u32 a);
    u8 getActionDonePriority(u32 a);
    u8 getActionPriority(u32 a);
    void updateBgCheckWork(u32 a, u32 b);
    u8 keepsBgCheckWork(u32 a);
    void calcModelMatrixCurved();
    void mainAct92();
    void netAct92();
    void setupAct92();
    void mainAct91();
    void endAct91();
    void netAct91();
    void setupAct91();
    void mainWaitMenu();
    void waitMenuCheckEnd();
    void netWaitMenu(u32 a);
    void setupWaitMenu(PlayerActionRequest *p);
    u32 requestWaitMenu(u32 a, u32 b, u32 c);
    void mainLowerHeldUpItem();
    void lowerHeldUpItemCheckEnd();
    void netLowerHeldUpItem(u32 a);
    void setupLowerHeldUpItem();
    u32 requestLowerHeldUpItem(u32 a, u32 b);
    void mainHoldUpItem();
    void holdUpItemCheckEnd();
    void holdUpItemUpdate();
    void changeClothesSpin();
    void changeClothesApply();
    void changeClothesHat();
    void changeClothesFaceItem();
    void changeClothesShirt();
    void changeClothesEffects();
    void endChangeClothes(u32 a);
    void netChangeClothes(s16 a);
    void setupChangeClothes(PlayerActionRequest *item);
    u32 requestChangeClothes(u16 a, u32 b, u32 c, u32 d, s16 e);
    void mainAct05();
    void netAct05(u32 a);
    void setupAct05(PlayerActionRequest *item);
    u32 requestAct05(u16 a, u32 b, u32 c);
    void mainSkidTurn();
    void skidCheckEnd();
    void skidDecelerate();
    void endSkidTurn(u32 a);
    void netSkidTurn();
    void setupSkidTurn(PlayerActionRequest *item);
    u32 requestSkidTurn(u16 a, u32 b, u32 c);
    void mainWalk();
    void walkNetCheckEnd(u8 *p);
    void walkCheckEnd(s16 *p);
};


// ---- the object (size 0xc9c; vtable 0x020d6dec with the secondary table at 0x020d6e64)
class PlayerActor : public Character, public TalkMsgRequest {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    PlayerActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~PlayerActor();
    virtual BOOL vfunc_5c(Unk_02006d14_Vec3 *out);
    virtual s32 onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onWindowClose();

    void doDraw();
    BOOL doDelete();
    s32 getJointGroundY(s32 x);
    void drawReady();
    void drawNotReady();
    void doExecute();
    void walkUpdateLean();
    void walkMove();
    BOOL walkFollowNet();
    void walkUpdateSpeed();
    void netWalk();
    void setupWalk(Unk_02006d14_Item *item, u32 old);
    BOOL requestWalk(u32 a, u32 b, u32 c);
    void mainWait();
    void waitNetCheckEnd(u8 *p);
    void waitCheckInput();
    BOOL waitFollowNet();
    void endWait();
    void netWait(u32 a);
    void setupWait(Unk_02006d14_Item *item, u32 old);
    BOOL requestWait(u32 a, u32 b, u32 c);
    void mainAct01();
    void endAct01();
    void netAct01(u32 a);
    void setupAct01(Unk_02006d14_Item *item, u32 old);
    BOOL requestAct01(u32 a, u32 b);
    void mainInit();
    void startFirstAction(s32 *p);
    BOOL finishModelSetup();
    void endInit(u32 a);
    void netInit();
    void setupInit(Unk_0200d53c_Item *item);
    BOOL requestInit(u32 a, u32 b, u32 c);
    u8 func_0200d5b8();
    s32 getInputDirRelative();
    s32 getInputSideRelative();
    s16 getInputAngle();
    s16 getInputAngleRaw();
    s32 getInputMagnitude();
    void readInput();
    BOOL doCreate();
    void initFaceItemModel();
    void initHatModel();
    void initShirtModel();
    s32 getRequiredPriority();
    s32 getEffectivePriority();
    void clearRequests();
    nO::Unk_0200e248_Rec *getRequest(s32 i);
    BOOL pushRequest(nO::Unk_0200e248_Rec *r);
    BOOL getRemoteTransform(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 isLocomotionAction(u32 i);

    ActorPlacedCollider bodyCollider;
    u8 pad_171[0x4f];
    ActorPlacedCollider subCollider;
    u8 pad_1c1[0x4f];
    TouchPickCylinder touchCylinder;
    u8 pad_211[0x1f];
    TwoLayerAnimModel bodyModel;
    u8 pad_231[0x153];
    PlayerBodyWorkRef bodyWork;
    PlayerBodyModelRef bodyModelRef;
    u8 pad_386[0x2];
    CachedModel headModel0;
    u8 pad_389[0x9b];
    PlayerHead headRef;
    u8 pad_425[0x3b];
    CachedModel headModel1;
    u8 pad_461[0x9b];
    CachedModel faceItemModel;
    u8 pad_4fd[0x9b];
    PlayerGlassesModelRef faceItemRef;
    u8 pad_599[0x3];
    HeldItemModel heldItemModel;
    u8 pad_59d[0x15f];
    Unk_0205c3a4 bodyAnimSlot;
    Unk_0205c3a4 holdAnimSlot;
    u8 pad_6fe[0x2];
    s32 animId;
    s32 handPose;
    u8 pad_708[0x1];
    PlayerFaceTexRef faceTex;
    CharaFaceAnimRef faceAnimRef;
    CharaFaceAnimWorkRef faceAnimWork;
    MatTexPatAnim eyeTexAnim;
    u8 pad_70d[0x2b];
    MatTexPatAnim mouthTexAnim;
    u8 pad_739[0x2b];
    BlinkTimer blinkTimer;
    s32 eyeAnimId;
    s32 mouthAnimId;
    CharaClothTexRef shirtTex;
    u8 pad_771[0x3];
    MatTexVramTask shirtTexUpload;
    u8 pad_775[0x27];
    Unk_0205ef98 skinHairPalette;
    u8 pad_79d[0x3];
    CollisionState bgCheckWork;
    u8 pad_7a1[0x2f];
    s32 actionWork;
    u8 pad_7d4[0x18];
    s32 action;
    u8 pad_7f0[0x4];
    s32 drawStep;
    u8 pad_7f8[0x4];
    s32 sessionSlot;
    u8 pad_800[0x1c];
    u16 actionItem;
    u16 shownItem;
    s32 shownItemPosX;
    s32 shownItemPosY;
    s32 shownItemPosZ;
    s32 shownItemScaleX;
    s32 shownItemScaleY;
    s32 shownItemScaleZ;
    SndSeEmitterKind99 seEmitterLocal;
    u8 pad_839[0x43];
    SndSeEmitterKind1 seEmitterRemote;
    s32 aheadUnitX;
    s32 aheadUnitZ;
    s32 runUnitX;
    s32 runUnitZ;
    s32 pitfallUnitX;
    s32 pitfallUnitZ;
    u8 pad_8e4[0x10];
    s32 lastNetAction;
    s32 pendingEventUnitX;
    s32 pendingEventUnitZ;
    u8 pad_900[0x8];
    Unk_0201a13c emotionFx;
    u8 pad_909[0x27];
    PlayerActionRequest requests[30];
    u8 pad_c78[0x4];
    s32 bestRequest;
    u16 netSeq;
    u8 pad_c82[0x2];
    s32 netSeqAction;
    s32 faceItemState;
    u8 pad_c8c[0x4];
    s32 hatState;
    u8 pad_c94[0x8];
};


void Unk_02006d14::nudgeForward() {
    using namespace nP;
    switch (Math_AngleToDir4(((nP::Unk_02006d14 *)this)->rotY)) {
    case 2: ((nP::Unk_02006d14 *)this)->position.z -= 1; break;
    case 0: ((nP::Unk_02006d14 *)this)->position.z += 1; break;
    case 3: ((nP::Unk_02006d14 *)this)->position.x -= 1; break;
    case 1: ((nP::Unk_02006d14 *)this)->position.x += 1; break;
    }
}

void Unk_02006d14::offsetSpawnBySlot() {
    using namespace nP;
    s32 r = Math_AngleToDir4(((nP::Unk_02006d14 *)this)->rotY);
    s32 step = ((nP::Unk_02006d14 *)this)->sessionSlot;
    switch (r) {
    case 2: ((nP::Unk_02006d14 *)this)->position.z -= step; break;
    case 0: ((nP::Unk_02006d14 *)this)->position.z += step; break;
    case 3: ((nP::Unk_02006d14 *)this)->position.x -= step; break;
    case 1: ((nP::Unk_02006d14 *)this)->position.x += step; break;
    }
}

void PlayerActor::onMessageEnd() {
    using namespace nO;
    u8 buf[12];
    if (((nO::PlayerActor *)this)->msgStep >= 0xf) return;
    switch (((nO::PlayerActor *)this)->msgStep) {
    case 0:
        buf[0] = 0x3d;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[0], 0);
        break;
    case 4:
        buf[1] = 0x3e;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[1], 0);
        break;
    case 2:
        buf[2] = 3;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[2], 0);
        break;
    case 1:
        buf[3] = 0x3c;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[3], 0);
        ((nO::PlayerActor *)this)->msgStep = 9;
        break;
    case 5:
    case 6:
        data_021c1b3c->unk_248 = 0xb;
        break;
    case 13: {
        u32 obj[9];
        buf[4] = 0x3f;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[4], 0);
        *(u16 *)&buf[6] = ((nO::PlayerActor *)this)->unk_7d8 + 0x12b0;
        _ZN8ItemNameC1EPt(obj, (u16 *)&buf[6]);
        _ZN15TalkWindowState12setNamedSlotEiPvj(((nO::PlayerActor *)this)->unk_128, 0, obj, 7);
        _ZN8ItemNameD1Ev(obj);
        ((nO::PlayerActor *)this)->msgStep = 8;
        break;
    }
    case 14: {
        u32 obj[9];
        buf[5] = 0x3f;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[5], 0);
        ((nO::PlayerActor *)this)->msgStep = 8;
        *(u16 *)&buf[8] = ((nO::PlayerActor *)this)->unk_7d3 + 0x12e8;
        _ZN8ItemNameC1EPt(obj, (u16 *)&buf[8]);
        _ZN15TalkWindowState12setNamedSlotEiPvj(((nO::PlayerActor *)this)->unk_128, 0, obj, 7);
        _ZN8ItemNameD1Ev(obj);
        break;
    }
    }
}

void PlayerActor::onChoice() {
    using namespace nO;
    s32 st = ((nO::PlayerActor *)this)->msgStep;
    if (st >= 0xf) return;
    switch (st) {
    case 0:
    case 2:
    case 3:
    case 4: {
        s32 r5;
        u8 b;
        _ZN15TalkWindowState13getChoiceListEv(((nO::PlayerActor *)this)->unk_128);
        r5 = _ZN10ChoiceList9getResultEv();
        b = gTalkMsgIndexEnd;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &b, 0);
        if (r5 == 0) {
            ((nO::PlayerActor *)this)->msgStep = 5;
        } else {
            switch (((nO::PlayerActor *)this)->msgStep) {
            case 0:
            case 4:
                ((nO::PlayerActor *)this)->msgStep = 9;
                break;
            case 2:
                ((nO::PlayerActor *)this)->msgStep = 0xb;
                break;
            default:
                ((nO::PlayerActor *)this)->msgStep = 0xf;
                break;
            }
        }
        break;
    }
    }
}

void PlayerActor::onWindowClose() {
    using namespace nO;
    s32 st = ((nO::PlayerActor *)this)->msgStep;
    s32 r5;
    if (st >= 0xf) return;
    r5 = 6;
    switch (st) {
    case 11:
        r5 = 0x23;
    case 10:
        Bgm_Release(0x39);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((nO::PlayerActor *)this)->msgStep = 0xf;
        break;
    case 7: {
        u16 v[2];
        u16 r6 = ((nO::PlayerActor *)this)->actionWork;
        BOOL ok;
        Bgm_Release(r6);
        PlayerActor_GetHeldItem(v, ((nO::PlayerActor *)this));
        if (Item_IsFurniture(v)) {
            v[1] = 0xfff1;
            s32 r7 = Item_GetFurnitureIndex(v);
            if (r7 == Item_GetFurnitureIndex(&v[1])) ok = TRUE; else ok = FALSE;
        } else {
            if (v[0] == 0xfff1) ok = TRUE; else ok = FALSE;
        }
        if (!ok && !_ZN12Unk_02006d1420getHeldHoldableIndexEv(this)) {
            BOOL b = (gFieldSceneKind == 0);
            if (b) r5 += 0x15;
        }
        if ((u16)(r6 + 0xffc4) <= 1) {
            Bgm_RequestSilence(5, r5, r5 + 5);
        } else {
            Bgm_RequestSilence(0xc, r5, r5 + 5);
        }
        ((nO::PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 5:
    case 8: {
        u32 arg;
        r5 = 0xc;
        if (((nO::PlayerActor *)this)->action == 0x57) {
            arg = ((nO::PlayerActor *)this)->unk_7d4;
            if (arg == 0x3b) r5 = 5;
        } else if (((nO::PlayerActor *)this)->action == 0x54) {
            arg = ((nO::PlayerActor *)this)->actionWork;
            if (arg == 0x3a) r5 = 5;
        } else if (((nO::PlayerActor *)this)->action == 0x1c) {
            break;
        } else if (((nO::PlayerActor *)this)->action == 0x19) {
            break;
        } else if (((nO::PlayerActor *)this)->action == 0x5f) {
            arg = 0x39;
        } else {
            break;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(r5, 0x14, 0x19);
        if (((nO::PlayerActor *)this)->msgStep != 5) ((nO::PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 9: {
        u32 arg;
        if (((nO::PlayerActor *)this)->action == 0x57) {
            arg = ((nO::PlayerActor *)this)->unk_7d4;
            r5 += 0x1e;
        } else {
            arg = ((nO::PlayerActor *)this)->actionWork;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((nO::PlayerActor *)this)->msgStep = 0xf;
        break;
    }
    case 12:
        Bgm_Release(0x42);
        Bgm_RequestSilence(0xc, r5, 0xb);
        ((nO::PlayerActor *)this)->msgStep = 0xf;
        break;
    }
}

void PlayerActor::readInput() {
    using namespace nN;
    s32 flag = 0;
    s32 mode = ((nN::PlayerActor *)this)->inputMode;
    s32 v4 = 0;
    s32 v8 = 0;
    s32 vc = 0;
    s32 v10 = ((nN::PlayerActor *)this)->actionHeld;
    s32 v14 = 0;
    s32 sp18, sp1c;
    u32 sp20;
    s32 sp24, sp28, sp2c;
    u8 sp30;
    s32 sp34;
    s32 ax, ay, bx, by;
    s32 sp48, sp4c, len;
    Unk_0200d64c_Xyz p50;
    Unk_0200d64c_Xyz r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->position, &((nN::PlayerActor *)this)->rotY, data_020d5e50);
    Unk_0200d64c_Xyz p68;
    Unk_0200d64c_Xyz pv[4];
    BOOL got = FALSE;
    ((nN::PlayerActor *)this)->actionPressed = 0;
    ((nN::PlayerActor *)this)->toolTargetKind = 0;
    ((nN::PlayerActor *)this)->touchTargetId = 0xff;
    if (Unk_0200d64c_IsTwo()) {
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xb) || _ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
        ((nN::PlayerActor *)this)->inputMagnitude = 0;
        ((nN::PlayerActor *)this)->inputRun = 0;
        ((nN::PlayerActor *)this)->interactPressed = 0;
        ((nN::PlayerActor *)this)->interactTarget = 0;
        ((nN::PlayerActor *)this)->actionHeld = 0;
        ((nN::PlayerActor *)this)->hasTargetPos = 0;
        ((nN::PlayerActor *)this)->targetPos = r5c;
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
            if (Scene_NoPlayerInUnsharedScene() == 1) {
                if (!PlayerActor_IsWaitingForSlots(this)) {
                    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1b);
                    FieldInfoBalloon_ClearNetMsg();
                    if (*(s32 *)((u8 *)gCommManager + 0x64) == 0) {
                        if ((u8)(Net_GetMode() + 0xfd) <= 1) {
                            Net_WifiHostKeepAlive();
                        }
                    }
                    if (((nN::PlayerActor *)this)->action == 2 || ((nN::PlayerActor *)this)->action == 0x83 || ((nN::PlayerActor *)this)->action == 0x28 || ((nN::PlayerActor *)this)->action == 8) {
                        TalkRequest_FinishSceneEntry();
                    }
                }
            }
        }
    } else {
    if (gGfxMainOnTop == 0) {
        vc = TouchPick_GetGroundPos(Scene_GetTouchPicker(), &p50);
        if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), &p68, &sp34, &sp30)) {
            got = TRUE;
            {
                switch (sp34) {
                case 0:
                    break;
                case 1:
                    if (Unk_0200d64c_Both()) {
                        flag = 1;
                        r5c = p50;
                    }
                    break;
                case 2: case 3: case 6: case 7: case 9: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
                    if (Unk_0200d64c_Both()) {
                        v4 = 1;
                        v8 = TouchPick_GetTargetObject(Scene_GetTouchPicker(), 0, 0);
                        r5c = p50;
                    }
                    break;
                case 5:
                    if (Unk_0200d64c_Both()) {
                        ((nN::PlayerActor *)this)->toolTargetKind = 1;
                        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) != 1) {
                            r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->toolTargetPosX = p68;
                        } else {
                            u16 *hp = BlockMap_GetItemPtrAtPos(gSceneBlockMap, &p68, 0);
                            BOOL is = FALSE;
                            u16 h = *hp;
                            if (h < 0xfc || h > 0xfd) {
                            } else {
                                is = TRUE;
                            }
                            if (is) {
                                ax = 0; ay = 0; bx = 0; by = 0;
                                FieldPos_ToUnit(&ax, &ay, &((nN::PlayerActor *)this)->position);
                                FieldPos_ToUnit(&bx, &by, &p50);
                                if (ax != bx || ay != by) {
                                    r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->toolTargetPosX = p50;
                                } else {
                                    r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->toolTargetPosX = p68;
                                }
                            } else {
                                r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->toolTargetPosX = p68;
                            }
                        }
                    }
                    break;
                case 4:
                    if (Unk_0200d64c_Both()) {
                        ((nN::PlayerActor *)this)->toolTargetKind = 2;
                        r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->toolTargetPosX = p68;
                    }
                    break;
                case 8:
                case 10:
                    if (Unk_0200d64c_Both()) {
                        v14 = 1;
                        FieldPos_SnapToUnitCenter(&p68, &p68);
                        r5c = p68;
                    }
                    ((nN::PlayerActor *)this)->touchTargetId = sp30;
                    break;
                }
            }
        }
    }
    if (flag != 0 || (func_0203d4d4() && vc == 0)) {
        ((nN::PlayerActor *)this)->inputMagnitude = 0;
        ((nN::PlayerActor *)this)->inputRun = 0;
        v10 = 1;
        ((nN::PlayerActor *)this)->actionPressed = 1;
        r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->position, &((nN::PlayerActor *)this)->rotY, data_020d5e34);
        mode = 2;
    } else {
        s32 fast = 0;
        ((nN::PlayerActor *)this)->actionPressed = fast;
        if (((nN::PlayerActor *)this)->inputMode == 2) {
            if (vc) mode = 2; else mode = 1;
        } else if (gPad.a & 0x2ff3) {
            mode = 1;
        } else if (vc) {
            mode = 2;
        }
        if (mode == 2) {
            if (((nN::PlayerActor *)this)->action >= 0x1d && ((nN::PlayerActor *)this)->action <= 0x23) {
                sp20 = (u32)gCamera;
                pv[1].x = ((nN::PlayerActor *)this)->bodyPos.x;
                pv[1].y = ((nN::PlayerActor *)this)->bodyPos.y;
                pv[1].z = ((nN::PlayerActor *)this)->bodyPos.z;
                sp24 = ((u16)(s16)(0x4000 - _ZN12Unk_020d93b88getPitchEv((void*)sp20)) >> 4) * 2;
                sp2c = FX_Div(func_01ffcb0c(0x1266, data_02135f44[sp24]), data_02135f44[sp24 + 1]);
                sp28 = ((u16)_ZN12Unk_020d93b86getYawEv((void*)sp20) >> 4) * 2;
                pv[2].x = pv[1].x - func_01ffcb0c(sp2c, data_02135f44[sp28]);
                s32 t = func_01ffcb0c(sp2c, data_02135f44[sp28 + 1]);
                pv[2].z = pv[1].z - t;
                pv[0].x = p50.x - pv[2].x;
                pv[0].z = p50.z - pv[2].z;
                len = func_020e9688(&pv[0]);
            } else {
                pv[0].x = p50.x - ((nN::PlayerActor *)this)->bodyPos.x;
                pv[0].z = p50.z - ((nN::PlayerActor *)this)->bodyPos.z;
                Camera_ProjectCurvedToScreen(&sp48, &sp4c, &((nN::PlayerActor *)this)->bodyPos);
                sp48 += 0x80;
                sp4c += 0x60;
                pv[3].x = ((u8)gTouchX - sp48) << 8;
                pv[3].y = 0;
                pv[3].z = ((u8)gTouchY - sp4c) << 8;
                len = func_020e9688(&pv[3]);
            }
            s32 res = func_01ffcb0c(len, 0x4f4);
            if (res >= 0x1000) {
                res = 0x1000;
            } else if (res <= 0x19a) {
                res = 0;
            } else {
                s32 t = FX_Sqrt(FX_Div((res + 0x39a) << 12, 0x139a) >> 12);
                sp18 = t << 12;
                for (sp1c = 0; sp1c < 3; sp1c++) {
                    t = func_01ffcb0c(t, sp18) >> 12;
                }
                res = t;
                if (res > 0x1000) {
                    res = 0x1000;
                } else if (res < 0) {
                    res = 0;
                }
            }
            ((nN::PlayerActor *)this)->inputMagnitude = res;
            if (res > 0xc32) {
                fast = 1;
            }
            if (res > 0) {
                ((nN::PlayerActor *)this)->inputAngle = func_020e7b98(pv[0].x, pv[0].z);
            }
            if (!got) {
                if (Unk_0200d64c_Both()) {
                    v14 = 1;
                    r5c = p50;
                }
            }
        } else {
            s32 keymask;
            if (TalkRequestFlags_IsResetti() || _ZN12Unk_02006d1414testActionFlagEj(this, 0x13)) {
                keymask = 0x2fff;
            } else {
                keymask = 0x2ff3;
            }
            u32 keys = gPad.a;
            if (keymask & keys) {
                mode = 1;
            } else {
                mode = ((nN::PlayerActor *)this)->inputMode;
            }
            if ((keys & 2) || (keys & 0x100) || (keys & 0x200)) {
                fast = 1;
            } else {
                fast = 0;
            }
            u32 kb = *(volatile u16 *)&gPad.b;
            v4 = 1;
            if (!(kb & 1)) {
                v4 = 0;
            }
            ((nN::PlayerActor *)this)->actionPressed = v4;
            if (gPad.a & 1) {
                v10 = 1;
            } else {
                v10 = 0;
                if (gPad.b & 2) {
                    v14 = 1;
                    r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->position, &((nN::PlayerActor *)this)->rotY, data_020d5e48);
                }
            }
            keys = gPad.a;
            if ((keys & 0x80) || (keys & 0x40) || (keys & 0x10) || (keys & 0x20)) {
                if (fast) {
                    ((nN::PlayerActor *)this)->inputMagnitude = 0x1000;
                } else {
                    ((nN::PlayerActor *)this)->inputMagnitude = 0xc32;
                }
                ((nN::PlayerActor *)this)->inputAngle = gPad.c;
            } else {
                ((nN::PlayerActor *)this)->inputMagnitude = 0;
            }
        }
        ((nN::PlayerActor *)this)->inputRun = fast;
    }
    ((nN::PlayerActor *)this)->interactPressed = v4;
    ((nN::PlayerActor *)this)->interactTarget = v8;
    ((nN::PlayerActor *)this)->actionHeld = v10;
    ((nN::PlayerActor *)this)->hasTargetPos = v14;
    ((nN::PlayerActor *)this)->targetPos = r5c;
    ((nN::PlayerActor *)this)->inputMode = mode;
    }
    }
}

void Unk_02007694::endChangeClothes(u32 a) {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->actionWork;
    if (p->isApplied == 0) {
        switch (p->changeKind) {
        case 0:
            changeClothesShirt();
            break;
        case 1:
            changeClothesFaceItem();
            break;
        case 2:
            changeClothesHat();
            break;
        case 3: {
            void *r = PlayerData_GetBySessionSlot(((nL::Unk_02007694 *)this)->sessionSlot);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                _ZN16PlayerFaceTexRef4loadEj(&((nL::Unk_02007694 *)this)->faceTex[0], _ZN10PlayerData11getFaceTypeEv(r));
                _ZN12Unk_020102ec10replayAnimEv(this);
                VillagerStates_ClearUnk1dBit0();
            }
            break;
        }
        }
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nL::Unk_02007694 *)this)->sessionSlot)) {
        u32 i;
        switch (p->changeKind) {
        case 0:
            i = 0;
            break;
        case 1:
            i = 1;
            break;
        case 2:
            i = 2;
            break;
        case 3:
            PlayerActor_NetSendFaceChange(this);
            return;
        default:
            return;
        }
        _ZN12Unk_02006d1420netSendClothesChangeEjj(this, i, p->unk_00);
    }
}

void Unk_02007694::changeClothesApply() {
    using namespace nL;
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0xf);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&((nL::Unk_02007694 *)this)->bodyAnimCtrl[0], 8)) {
        _ZN12Unk_02006d1413setActionFlagEj(this, 0xf);
        switch (((nL::Unk_02007694 *)this)->actionWork.changeKind) {
        case 0:
            changeClothesShirt();
            break;
        case 1:
            changeClothesFaceItem();
            break;
        case 2:
            changeClothesHat();
            break;
        case 3: {
            void *r = PlayerData_GetBySessionSlot(((nL::Unk_02007694 *)this)->sessionSlot);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                _ZN16PlayerFaceTexRef4loadEj(&((nL::Unk_02007694 *)this)->faceTex[0], _ZN10PlayerData11getFaceTypeEv(r));
                u8 buf[2];
                buf[0] = ((nL::Unk_02007694 *)this)->bodyAnimPlayMode;
                _ZN12Unk_020102ec17setEyeAnimForBodyEPiPh(this, data_020d5e3c, &buf[0]);
                buf[1] = ((nL::Unk_02007694 *)this)->bodyAnimPlayMode;
                _ZN12Unk_020102ec19setMouthAnimForBodyEPiPh(this, data_020d5e44, &buf[1]);
                VillagerStates_ClearUnk1dBit0();
            }
            break;
        }
        }
    }
}

void Unk_02006d14::pickUpReachUpdate() {
    using namespace nJ;
    Unk_02006d14_Sub7d0* s = &((nJ::Unk_02006d14 *)this)->actionWork;
    u8* st = &s->unk_04.b.unk_04;
    struct { u32 pad; Unk_0200b144_Pos p[2]; } l;
    switch (*st) {
    case 1: {
        u8 a = s->unk_04.b.unk_05;
        u8 b = s->unk_04.b.unk_06;
        s32 v;
        u8 flag;
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nJ::Unk_02006d14 *)this)->sessionSlot)) {
            v = ((nJ::Unk_02006d14 *)this)->fieldAnswerKind;
        } else {
            v = s->unk_04.b.unk_07;
        }
        flag = 1;
        switch (v) {
        case 3:
            flag = 0;
        case 4: {
            l.p[0].x = a;
            l.p[0].y = b;
            requestPickUpAt(&l.p[0], -1, flag, 6, -1);
            break;
        }
        case 0x15:
            flag = 0;
        case 0x16: {
            l.p[1].x = a;
            l.p[1].y = b;
            _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(this, &l.p[1], flag, 6, -1);
            break;
        }
        }
        break;
    }
    case 2:
        ((nJ::Unk_02006d14 *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->action);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        break;
    case 3:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 4;
            _ZN9Character17attachTalkRequestEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nJ::Unk_02006d14 *)this) + 0xec, &sPlayerActorMsgFile);
            ((nJ::Unk_02006d14 *)this)->msgIndex = 0;
            ((nJ::Unk_02006d14 *)this)->unk_128->nextState = 1;
        }
        break;
    case 4:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->state != 0) {
                *st = 5;
            }
        }
        break;
    case 5:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->state == 0) {
                _ZN9Character17detachTalkRequestEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                *st = 6;
            }
        }
        break;
    case 6:
        ((nJ::Unk_02006d14 *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->action);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        break;
    case 7:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 8;
            _ZN9Character17attachTalkRequestEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nJ::Unk_02006d14 *)this) + 0xec, &sPlayerActorErrorMsgFile);
            ((nJ::Unk_02006d14 *)this)->msgIndex = 1;
            ((nJ::Unk_02006d14 *)this)->unk_128->nextState = 1;
        }
        break;
    case 8:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->state != 0) {
                *st = 9;
            }
        }
        break;
    case 9:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->state == 0) {
                _ZN9Character17detachTalkRequestEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                ((nJ::Unk_02006d14 *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->action);
                _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
            }
        }
        break;
    }
}

void Unk_02006d14::pickUpUpdateStore(u8* state, u8 flag) {
    using namespace nI;
    switch (*state) {
    case 0:
        if (!_ZN13AnimFrameCtrl10isFinishedEv(((nI::Unk_02006d14 *)this)->bodyAnimCtrl)) break;
        if (((nI::Unk_02006d14 *)this)->actionItem == 0x1520) {
            if (BottleLetter_Open()) {
                *state = 6;
                break;
            }
            if (!TalkRequest_AddPlayerMessage()) break;
            _ZN12Unk_020102ec9startAnimEijt(this, 0x6c, 0, 0);
            s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(this);
            if (r == 4) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0x13, 3, 0);
            }
            *state = 7;
            _ZN9Character17attachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, sPlayerActorErrorMsgFile);
            ((nI::Unk_02006d14 *)this)->msgIndex = 0x12;
            ((nI::Unk_02006d14 *)this)->window->nextState = 1;
        } else if (flag) {
            if (!TalkRequest_IsPlayerMessage() && !TalkRequest_AddPlayerMessage()) break;
            _ZN12Unk_020102ec9startAnimEijt(this, 0x6c, 0, 0);
            s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(this);
            if (r == 4) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0x13, 3, 0);
            }
            *state = 1;
            _ZN9Character17attachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, sPlayerActorMsgFile);
            ((nI::Unk_02006d14 *)this)->msgIndex = 2;
            ((nI::Unk_02006d14 *)this)->window->nextState = 1;
        } else {
            u16 v[2];
            v[1] = ((nI::Unk_02006d14 *)this)->actionItem;
            Pocket_AddFoundItem(&v[1]);
            *state = 6;
        }
        break;
    case 1:
        if (!((nI::Unk_02006d14 *)this)->window) break;
        if (!((nI::Unk_02006d14 *)this)->window->state) break;
        *state = 2;
        ((nI::Unk_02006d14 *)this)->msgStep = 3;
        break;
    case 2:
        if (((nI::Unk_02006d14 *)this)->msgStep >= 15) {
            *state = 3;
        } else {
            if (!((nI::Unk_02006d14 *)this)->window) break;
            if (((nI::Unk_02006d14 *)this)->window->state) break;
            if (((nI::Unk_02006d14 *)this)->msgStep == 5) {
                if (!MenuCtrl_OpenPocketsFullPickUp(((nI::Unk_02006d14 *)this)->actionItem)) break;
                ((nI::Unk_02006d14 *)this)->msgStep = 6;
                break;
            } else if (((nI::Unk_02006d14 *)this)->msgStep != 6) {
                break;
            }
            if (!MenuCtrl_IsFinished()) break;
            ((nI::Unk_02006d14 *)this)->msgStep = 15;
            ((nI::Unk_02006d14 *)this)->bodyAnimFrameStep = 0x1000;
            if (MenuCtrl_IsResultOk()) {
                *state = 6;
                _ZN9Character17detachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                break;
            }
            *state = 3;
        }
    case 3:
        if (((nI::Unk_02006d14 *)this)->dropQuery != -1) break;
        ((nI::Unk_02006d14 *)this)->dropQuery = FieldAction_RequestPlaceAtPendingForAid(((nI::Unk_02006d14 *)this)->sessionSlot, ((nI::Unk_02006d14 *)this)->actionItem);
        if (((nI::Unk_02006d14 *)this)->dropQuery == -1) break;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        *state = 4;
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) != 4) break;
        HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0, 9, 0);
        break;
    case 4:
        if (((nI::Unk_02006d14 *)this)->dropQuery != -1) break;
        *state = 5;
    case 5:
        if (!((nI::Unk_02006d14 *)this)->window) break;
        if (((nI::Unk_02006d14 *)this)->window->state) break;
        _ZN9Character17detachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
        TalkRequest_FinishPlayerMessage();
        *state = 6;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0, 9, 0);
        }
        break;
    case 6:
        ((nI::Unk_02006d14 *)this)->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nI::Unk_02006d14 *)this)->action);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        ((nI::Unk_02006d14 *)this)->msgStep = 15;
        break;
    case 7:
        if (!((nI::Unk_02006d14 *)this)->window) break;
        if (!((nI::Unk_02006d14 *)this)->window->state) break;
        *state = 8;
        break;
    case 8:
        if (!((nI::Unk_02006d14 *)this)->window) break;
        if (((nI::Unk_02006d14 *)this)->window->state) break;
        *state = 3;
        if (((nI::Unk_02006d14 *)this)->dropQuery != -1) break;
        ((nI::Unk_02006d14 *)this)->dropQuery = FieldAction_RequestPlaceAtPendingForAid(((nI::Unk_02006d14 *)this)->sessionSlot, ((nI::Unk_02006d14 *)this)->actionItem);
        if (((nI::Unk_02006d14 *)this)->dropQuery == -1) break;
        *state = 5;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->heldItemModel, 0, 9, 0);
        }
        break;
    }
}

void Unk_02006d14::setupAct76(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    u8 *p = &((Unk_02006d14_Item *)item)->unk_0c[0];
    u8 a = p[0];
    u8 b = p[1];
    u8 c = p[2];
    Unk_02006d14_7d0 *s;
    if ((u8)(a + 254) <= 1) TalkRequest_FinishSceneEntry();
    s = &((nG::Unk_02006d14 *)this)->actionWork;
    s->unk_02 = a;
    if (a == 0) {
        if (old != 0x57) s->unk_03 = 3;
        else s->unk_03 = 0;
    } else {
        s->unk_03 = 0;
    }
    s->unk_04 = 0;
    s->unk_05 = b;
    s->unk_06 = c;
    ((nG::Unk_02006d14 *)this)->netData.writeAct76Net(a, b, c);
    _ZN12Unk_020102ec13startAnimOnceEijt(((nG::Unk_02006d14 *)this), sPlayerAct76Anims[a], 3, 0);
    ((nG::Unk_02006d14 *)this)->pendingAct76Kind = 0;
    s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(((nG::Unk_02006d14 *)this));
    if (r != 3) {
        if (r == 4) HeldItemModel_PlayAnim(((nG::Unk_02006d14 *)this)->heldItemModel, 9, 3, 1);
    } else {
        HeldItemModel_PlayAnim(((nG::Unk_02006d14 *)this)->heldItemModel, 0x1f, 3, 1);
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nG::Unk_02006d14 *)this)->sessionSlot)) {
        u32 t = 0xd;
        switch (a) {
        case 0:
        case 1:
            t = 6;
            break;
        case 2:
        case 3:
            t = 6;
            Bgm_ReleasePriority(0x12);
            Bgm_RequestSilence(5, 0, 1);
            ((nG::Unk_02006d14 *)this)->msgStep = 7;
            break;
        default:
            Bgm_RequestSilence(0xc, 0, 1);
            ((nG::Unk_02006d14 *)this)->msgStep = 7;
            break;
        }
        u16 hv = data_020c61c0[a];
        s->unk_00 = hv;
        Bgm_Request(t, hv, 0x7f, 1);
    }
}

void Unk_02008040::act76Update() {
    using namespace nF;
    u8 *p, *st;
    u8 kind, sub;
    s32 lim;
    void *g;
    u16 t[8];
    Unk_02008858_Blk blk;
    Unk_02008074_Vec v1, v2, v3, v4, v5;
    BOOL r;

    _ZN12Unk_02006d1412turnToCameraEi(this, 0x400);
    p = &actionWork[0];
    kind = p[2];
    sub = p[5];
    st = p + 3;
    blk = itemHandMtx;
    switch (kind) {
    case 0:
        if (*st == 3) {
            *st = 0;
            Insect_FinishCatch(p[6]);
            HeldInsect_Start(sub, (u8)sessionSlot);
        }
        if (sub == 9) {
            v1.x = 0x119a;
            v1.y = 0x4cd;
            v1.z = -0x4cd;
        } else {
            v1.x = 0xb33;
            v1.y = 0x19a;
            v1.z = -0x19a;
        }
        PlayerActor_ApplyHoldOffset(&blk, &v1);
        t[5] = 0x64;
        t[6] = 0x64;
        t[7] = 0x64;
        v1 = *(Unk_02008074_Vec *)&blk.w[9];
        WorldCurve_FromCurved(&v1, &v1);
        HeldInsect_SetHandMatrix((u8)sessionSlot, &t[5], &blk, 0);
        break;
    case 1:
        void *o = _ZN10FishBobber7getFishEv(fishBobber);
        if (o != NULL) {
            v1.x = 0xb33;
            v1.y = 0x19a;
            v1.z = -0x19a;
            PlayerActor_ApplyHoldOffset(&blk, &v1);
            v2 = *(Unk_02008074_Vec *)&blk.w[9];
            WorldCurve_FromCurved(&v2, &v2);
            Fish_GetDisplayScale(&v3, *((s8 *)o + 0x7e));
            v4 = v2;
            v5 = v3;
            FishCatch_SetDisplayPosScale(o, &v4, &v5);
        }
        break;
    }
    switch (animId) {
    case 0x87:
        if (!_ZN13AnimFrameCtrl10isFinishedEv(bodyAnimCtrl)) {
            return;
        }
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x88, 0, 0);
        HeldItemModel_PlayAnim(heldItemModel, 0xa, 0, 1);
        return;
    case 0x89:
        if (!_ZN13AnimFrameCtrl10isFinishedEv(bodyAnimCtrl)) {
            return;
        }
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x8a, 0, 0);
        HeldItemModel_PlayAnim(heldItemModel, 0x20, 0, 1);
        return;
    case 0x86:
        lim = 0x19;
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, sessionSlot)) {
            if (_ZN13AnimFrameCtrl14hasPassedFrameEi(bodyAnimCtrl, 0xc)) {
                Camera_SetMode4();
            }
        }
        break;
    default:
        lim = 5;
        break;
    }
    if ((s32)((bodyAnimFrame << 4) >> 16) < lim) {
        return;
    }
    g = gCommManager;
    if (!_ZN11CommManager11isLocalSlotEj(g, sessionSlot)) {
        actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, action);
        return;
    }
    switch (*st) {
    case 0:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 1;
            _ZN9Character17attachTalkRequestEi(this, this);
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            switch (kind) {
            case 0:
                setFileName(sPlayerActorGetInsectMsgFile);
                msgIndex = 0x40;
                break;
            case 1:
                setFileName(sPlayerActorGetFishMsgFile);
                msgIndex = 0x40;
                break;
            case 2:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x28;
                break;
            case 3:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x29;
                break;
            case 7:
                setFileName(sPlayerActorMsgFile);
                msgIndex = 0x22;
                break;
            default:
                setFileName(sPlayerActorMsgFile);
                msgIndex = kind + 0x1a;
                break;
            }
            window->nextState = 1;
        }
    case 1:
        if (window != NULL) {
            if (window->state != 0) {
                *st = 2;
            }
        }
        break;
    case 2:
        if (kind < 2) {
            if (window == NULL) {
                break;
            }
            if (*((u8 *)window + 0x19f7) != 0xfe) {
                break;
            }
            if (kind == 1) {
                PlayerActor_RequestFishShowCatch(this, 1, 6, -1);
            } else {
                PlayerActor_RequestInsectShowCatch(this, 3, sub, sub, 6, -1);
            }
            break;
        }
        if (window == NULL) {
            break;
        }
        if (window->state != 0) {
            break;
        }
        _ZN9Character17detachTalkRequestEi(this, this);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
        TalkRequest_FinishPlayerMessage();
        if (_ZN11CommManager11isLocalSlotEj(g, sessionSlot)) {
            Camera_SetModeDefault();
        }
        actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(this, action);
        PlayerActor_GetHeldItem(&t[3], this);
        if (Item_IsFurniture(&t[3])) {
            t[4] = 0xfff1;
            r = Item_GetFurnitureIndex(&t[3]) == Item_GetFurnitureIndex(&t[4]) ? TRUE : FALSE;
        } else {
            r = t[3] == 0xfff1 ? TRUE : FALSE;
        }
        if (!r && !_ZN12Unk_02006d1420getHeldHoldableIndexEv(this) && Unk_02008858_IsZero(gFieldSceneKind)) {
            PlayerActor_RequestStowItem(this, 2, 2, 0, 0, 0, 6, -1);
            break;
        }
        if (Unk_02008858_IsZero(gFieldSceneKind)) {
            TalkRequest_FinishSceneEntry();
            _ZN12Unk_02006d1413setActionFlagEj(this, 0);
        }
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        break;
    }
}

void Unk_02005e7c::handleNetEvent() {
    using namespace nC;
    Unk_02005f50_Pkt pkt;
    volatile u16 pos;
    s32 ux, uy;
    s32 ux2, uy2;
    u8 sub;
    Unk_02005f50_Area *pa;
    s32 flag;
    u8 type;
    s32 x, y;
    s32 v34[2], v2122[2], v5[2], v6a[2], v6b[2], v19[2], v20[2], v14a[2], v14b[2], v14c[2];
    Unk_02005f50_V3 w, q1, q8, q11, q10, q20;

    if (!FieldActionFx_Take(&pkt, sessionSlot) && !pendingEvent.set) {
        return;
    }
    ux = 0;
    uy = 0;
    if (pendingEvent.set) {
        pendingEvent.set = 0;
        x = pendingEventUnitX;
        y = pendingEventUnitZ;
        type = pendingEvent.type;
        sub = pendingEvent.sub;
    } else {
        pos = pkt.pos;
        y = pos;
        x = y >> 8;
        y &= 0xff;
        type = pkt.type;
        sub = pkt.sub;
    }
    FieldPos_FromUnitCenter(&w, x, y);
    switch (type) {
    case 17:
        if (action != 0) {
            break;
        }
        netPickUpDelay = 2;
        
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    case 14: case 19: case 20: case 21: case 22:
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 10) == 0) {
            pendingEvent.set = 1;
            pendingEventUnitX = x;
            pendingEventUnitZ = y;
            pendingEvent.type = type;
            pendingEvent.sub = sub;
            return;
        }
        _ZN11PlayerActor13clearRequestsEv(this);
        break;
    case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        return;
    }
    switch (type) {
    case 1:
    case 2: {
        if (action == 0x68) {
            pa = (Unk_02005f50_Area *)actionWork;
            s32 t = pa->a[1]; q1.x = pa->a[0]; q1.y = 0; q1.z = t;
            FieldPos_ToUnit(&ux, &uy, &q1);
            if (ux == x && uy == y) {
                pa->e[0] = 1;
                bodyAnimPlayMode = 1;
                return;
            }
        }
        PlayerActor_RequestTreeShake(this, w.x, w.z, type != 1, 1, 6, -1);
        break;
    }
    case 3:
    case 4:
    case 21:
    case 22:
        if (action == 0x18) {
            u8 *p = actionWork;
            ux = p[5];
            uy = p[5];
            if (ux == x && uy == y) {
                p[4] = 1;
                p[7] = type;
                return;
            }
        }
        flag = 1;
        switch (type) {
        case 3:
            flag = 0;
        case 4: {
            v34[0] = x; v34[1] = y;
            _ZN12Unk_02006d1415requestPickUpAtEP16Unk_0200b144_Posihis(this, v34, -1, flag, 6, -1);
            break;
        }
        case 21:
            flag = 0;
        case 22: {
            v2122[0] = x; v2122[1] = y;
            _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(this, v2122, flag, 6, -1);
            break;
        }
        }
        break;
    case 5:
        if (action == 0x16) {
            u8 *p = actionWork;
            ux = p[0];
            uy = p[1];
            if (ux == x && uy == y) {
                p[2] = 1;
                return;
            }
        }
        {
            v5[0] = x; v5[1] = y;
            PlayerActor_RequestPluck(this, v5, 6, -1);
        }
        break;
    case 6:
    case 7:
        if (sub == 2) {
            v6a[0] = x; v6a[1] = y;
            PlayerActor_RequestAxeBreak(this, 1, v6a, 6, -1);
        } else {
            v6b[0] = x; v6b[1] = y;
            PlayerActor_RequestAxeChop(this, sub != 0, type != 6, v6b, 6, -1);
        }
        break;
    case 8: {
        q8 = w;
        PlayerActor_RequestDig(this, 0, &q8, 6, -1);
        break;
    }
    case 11: {
        q11 = w;
        PlayerActor_RequestDig(this, 1, &q11, 6, -1);
        break;
    }
    case 9:
        flag = 0;
    case 10: {
        q10 = w;
        PlayerActor_RequestDigUpItem(this, &q10, flag, 6, -1);
        break;
    }
    case 19: {
        v19[0] = x; v19[1] = y;
        PlayerActor_RequestFillHole(this, 0, v19, 0xfff1, 6, -1);
        break;
    }
    case 20:
        if (action == 0x66) {
            pa = (Unk_02005f50_Area *)actionWork;
            ux2 = 0;
            uy2 = 0;
            q20.x = pa->a[0]; q20.y = pa->a[1]; q20.z = pa->a[2];
            FieldPos_ToUnit(&ux2, &uy2, &q20);
            if (ux2 == x && uy2 == y) {
                _ZN12Unk_02006d1413setActionFlagEj(this, 0x1c);
                pa->e[3] = 1;
                return;
            }
        }
        {
            v20[0] = x; v20[1] = y;
            PlayerActor_RequestAct66(this, v20, 1, 6, -1);
        }
        break;
    case 14:
        toolHitKind = 0;
        if (sub == 2) {
            v14a[0] = x; v14a[1] = y;
            PlayerActor_RequestAxeBreak(this, 1, v14a, 6, -1);
        } else if (sub == 3) {
            v14b[0] = x; v14b[1] = y;
            PlayerActor_RequestShovelStrike(this, 1, v14b, 6, -1);
        } else {
            v14c[0] = x; v14c[1] = y;
            PlayerActor_RequestAxeStrike(this, sub != 0, 1, v14c, 6, -1);
        }
        break;
    case 17:
        if (action == 0) {
            _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
            _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1c);
        }
        break;
    case 0: case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        break;
    }
}

void PlayerActor::drawReady() {
    using namespace nB;
    Unk_021cb69c a;
    Unk_02005294_Vec3 t;
    Unk_02005294_Vec3 t2;
    Unk_02005294_Vec3 v;
    data_021cb69c = *(Unk_021cb69c *)((u8 *)((nB::PlayerActor *)this) + 0x294);
    _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->bodyModel, ((nB::PlayerActor *)this)->alpha);
    _ZN17TwoLayerAnimModel11drawLayeredEj(((nB::PlayerActor *)this)->bodyModel, 0);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, (Unk_021cb69c *)((u8 *)((nB::PlayerActor *)this) + 0x428 + 0), 0xf);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &((nB::PlayerActor *)this)->toolHandMtx, 0xe);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &((nB::PlayerActor *)this)->itemHandMtx, 0xb);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &a, 7);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->footPosA, &t);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &a, 4);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->footPosB, &t);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &a, 0x10);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->headTopPos, &t);
    ((nB::PlayerActor *)this)->unk_3ec = ((nB::PlayerActor *)this)->headMtx;
    _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->headModel0, ((nB::PlayerActor *)this)->alpha);
    _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->headModel0, 0);
    if (PlayerHead_GetModelId(((nB::PlayerActor *)this)->headRef, 1) < 0x9e) {
        ((nB::PlayerActor *)this)->unk_4c4 = ((nB::PlayerActor *)this)->headMtx;
        _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->headModel1, ((nB::PlayerActor *)this)->alpha);
        _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->headModel1, 0);
    }
    if (PlayerGlassesModelRef_GetModelId(((nB::PlayerActor *)this)->faceItemRef) != 0x4b) {
        ((nB::PlayerActor *)this)->unk_560 = ((nB::PlayerActor *)this)->headMtx;
        _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->faceItemModel, ((nB::PlayerActor *)this)->alpha);
        _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->faceItemModel, 0);
    }
    if (((nB::PlayerActor *)this)->shadowSize > 0) {
        Model_GetJointWorldMtx(((nB::PlayerActor *)this)->bodyModel, &a, 1);
        t2.x = a.unk_24;
        t2.y = a.unk_28;
        t2.z = a.unk_2c;
        WorldCurve_FromCurved(&v, &t2);
        CharaShadow_DrawPlayer(&v, ((nB::PlayerActor *)this)->shadowSize);
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0)) {
        HeldItemModel_Draw(((nB::PlayerActor *)this)->heldItemModel, &((nB::PlayerActor *)this)->toolHandMtx);
        u32 mode;
        switch (_ZN12Unk_02006d1415getHeldToolKindEv(this)) {
        case 4:
        case 10:
            mode = 2;
            break;
        case 1:
        case 5:
        case 9:
            mode = 1;
            break;
        default:
            mode = 0;
            break;
        }
        ((nB::PlayerActor *)this)->heldItemJointMtx = HeldItemModel_GetJointMtx(((nB::PlayerActor *)this)->heldItemModel, mode);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            ((nB::PlayerActor *)this)->heldItemJointMtx2 = HeldItemModel_GetJointMtx(((nB::PlayerActor *)this)->heldItemModel, 3);
        }
    }
}
