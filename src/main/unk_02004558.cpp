// mwcc-version: 1.2/sp2
// Translation unit 0x02004558-0x0201106c (the player object, class PlayerActor). Built by two compilers:
// this file (thunks need mwcc 1.2/sp2) and unk_02004558_extra.cpp (14 functions need 1.2/base); the
// functions and data objects are placed by address (config/usa/arm9/object_order.txt).
// Generated from 20 earlier source files: one
// namespace per old file holds that file's own declarations and its view of the object.
#include "types.h"

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

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void onActionTag4();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_6c();
    virtual void vfunc_s74();

    /* 0x20 */ u8 pad_20[0x60];
    /* 0x80 */ s32 unk_80;
};

// ---- member objects of PlayerActor (classes of other units; constructor / destructor only)
struct ActorPlacedCollider { ActorPlacedCollider(); ~ActorPlacedCollider(); };
struct TouchPickCylinder { TouchPickCylinder(); ~TouchPickCylinder(); };
struct TwoLayerAnimModel { TwoLayerAnimModel(); ~TwoLayerAnimModel(); };
struct PlayerBodyWorkRef { PlayerBodyWorkRef(); ~PlayerBodyWorkRef(); };
struct PlayerBodyModelRef { PlayerBodyModelRef(); ~PlayerBodyModelRef(); };
struct CachedModel { CachedModel(); ~CachedModel(); };
struct PlayerHead { PlayerHead(); ~PlayerHead(); };
struct PlayerGlassesModelRef { PlayerGlassesModelRef(); ~PlayerGlassesModelRef(); };
struct HeldItemModel { HeldItemModel(); ~HeldItemModel(); };
struct Unk_0205c3a4 { Unk_0205c3a4(); ~Unk_0205c3a4(); };
struct PlayerFaceTexRef { PlayerFaceTexRef(); ~PlayerFaceTexRef(); };
struct CharaFaceAnimRef { CharaFaceAnimRef(); ~CharaFaceAnimRef(); };
struct CharaFaceAnimWorkRef { CharaFaceAnimWorkRef(); ~CharaFaceAnimWorkRef(); };
struct MatTexPatAnim { MatTexPatAnim(); ~MatTexPatAnim(); };
struct BlinkTimer { BlinkTimer(); ~BlinkTimer(); };
struct CharaClothTexRef { CharaClothTexRef(); ~CharaClothTexRef(); };
struct MatTexVramTask { MatTexVramTask(); };
struct Unk_0205ef98 { Unk_0205ef98(); ~Unk_0205ef98(); };
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


struct Unk_02005f50_Flags {
    u8 type : 5;
    u8 sub : 2;
    u8 set : 1;
};

class Unk_02005e7c {
public:
    u8 pad_000[0x168];
    u8 unk_168;
    u8 pad_169[3];
    s32 unk_16c;
    u8 pad_170[0x170];
    u8 unk_2e0;
    u8 pad_2e1[0x40b];
    s32 unk_6ec;
    u8 pad_6f0[0xe0];
    u8 unk_7d0[0x1c];
    s32 unk_7ec;
    u8 pad_7f0[8];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0xe8];
    u8 unk_8e8;
    u8 pad_8e9[3];
    u8 unk_8ec[8];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    Unk_02005f50_Flags unk_900;
    u8 pad_901[0x37f];
    s16 unk_c80;
    u8 pad_c82[2];
    s32 unk_c84;

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
    void PlayerActor_NetAct65(s32 idx);
    void PlayerActor_NetAct66(s32 idx);
    void PlayerActor_NetAct67(s32 idx);
    void PlayerActor_NetAct68(s32 idx);
    void PlayerActor_NetAct69(s32 idx);
    void PlayerActor_NetAct6A(s32 idx);
    void PlayerActor_NetAct6B(s32 idx);
    void PlayerActor_NetAct6C(s32 idx);
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
    void PlayerActor_NetAct81(s32 idx);
    void PlayerActor_NetAct82(s32 idx);
    void func_020083dc(s32 idx);
    void func_020082ac(s32 idx);
    void func_02008040(s32 idx);
    void func_02007dc8(s32 idx);
    void func_ov068_0226a93c(s32 idx);
    void func_ov068_0226a838(s32 idx);
    void PlayerActor_NetAct89(s32 idx);
    void PlayerActor_NetDrinkCoffee(s32 idx);
    void PlayerActor_NetDoorWalkIn(s32 idx);
    void PlayerActor_NetDoorWalkOut(s32 idx);
    void PlayerActor_NetExitWalkOut(s32 idx);
    void PlayerActor_NetExitWalkIn(s32 idx);
    void PlayerActor_NetFishRelease(s32 idx);
    void func_02007d00(s32 idx);
    void func_02007cac(s32 idx);
    void func_02007c9c(s32 idx);};

class Unk_020080e8 {
public:
    void readU16(u16 *out);
    void writeU16(u16 v);
    void readS16(s16 *out);
    void writeS16(s16 v);
    u8 unk_00[0x10];
};

struct Unk_02008074_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_02008858_Blk {
    u32 w[12];
};

struct Unk_02008190_Ptr {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class Unk_02008040_Base {
public:
    virtual void vfunc_00();
      u8 unk_04[0x8a];
      s16 unk_8e;
      u8 unk_090[0x34];
      Unk_02008074_Vec unk_c4;
      s16 unk_d0;
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
      Unk_02008190_Ptr *unk_128;
      u8 unk_12c[0x168];
      Unk_02008858_Blk unk_294;
      u8 unk_2c4[8];
      u8 unk_2cc[8];
      u32 unk_2d4;
      u8 unk_2d8[0x2c4];
      u8 unk_59c[0x28];
      u8 unk_5c4[0xd0];
      Unk_02008858_Blk unk_694;
      u8 unk_6c4[0x18];
      u8 unk_6dc[0x24];
      s32 unk_700;
      u8 unk_704[0xcc];
      u8 unk_7d0[0x1c];
      s32 unk_7ec;
      u8 unk_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 unk_800[0x1c];
      u16 unk_81c;
      u16 unk_81e;
      s32 unk_820, unk_824, unk_828, unk_82c, unk_830, unk_834;
      u8 unk_838[0xb4];
      Unk_020080e8 unk_8ec;
};

struct Unk_02006d14_Vec { s32 x, y, z; Unk_02006d14_Vec() {} };

struct Unk_02008e48 {
    u8 unk_00, unk_01, unk_02;
    void readAct76Net(u8 *a, u8 *b, u8 *c);
    void writeAct76Net(u8 a, u8 b, u8 c);
};

struct Unk_02008f5c { s16 unk_00; void initTurnTo(s16 v); };

struct Unk_02008fa0 { s16 unk_00; void setTurnToArgs(s16 v); };

struct Unk_020093d4 {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    void initWalkTo(Unk_02006d14_Vec v, s32 a, s32 b);
};

struct Unk_0200944c {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    void setWalkToArgs(Unk_02006d14_Vec v, s32 a);
};

struct Unk_02006d14_Pair { u32 unk_00; u32 unk_04; };

struct Unk_0200b144_Pos { s32 x; s32 y; };

struct Unk_0200b750_Pair { u32 unk_00; u32 unk_04; Unk_0200b750_Pair(u32 a, u32 b) : unk_00(a), unk_04(b) {} Unk_0200b750_Pair(const Unk_0200b750_Pair &o) : unk_00(o.unk_00), unk_04(o.unk_04) {} };

struct Unk_0200b750 {
    u8 unk_00, unk_01;
    u8 pad_02[2];
    s32 unk_04;
    void readPickUpReachNet(Unk_0200b750_Pair *pr, s32 *out);
    void writePickUpReachNet(Unk_0200b750_Pair pr, s32 v);
    void readEmotionNet(u8 *a, u8 *b);
    void writeEmotionNet(u8 a, u8 b);
};

struct Unk_0200b7bc {
    u32 unk_00;
    u8 unk_04, unk_05;
    void setPickUpReachArgs(Unk_0200b750_Pair pr, u32 v);
};

struct Unk_0200bda0 {
    s16 unk_00;
    void setAct10Args(s16 v);
};

struct Unk_0200c2fc {
    u16 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void setChangeClothesArgs(u16 a, s32 b, s32 c);
    void setAct05Args(u16 a);
    void setSkidTurnArgs(u16 a);
};

struct Unk_0200c288 {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    s16 unk_0e;
    u8 unk_10[0x1c - 0x10];
    void initChangeClothes(u16 a, s32 b, s32 c, s16 d);
    void initSkidTurn(s16 a);
};

struct Unk_0200c24c {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void readChangeClothesNet(u16 *a, u8 *b, u8 *c);
    void writeChangeClothesNet(u16 a, u8 b, u8 c);
};

struct Unk_020d6df4_7d0 {
    s32 unk_00;
    void initWalk();
};

struct Unk_0200d560 {
    u32 unk_00;
    u8 unk_04;
    void initInitWork(u32 v);
};

struct Unk_0200d5b4 {
    u32 unk_00;
    void setInitArgs(u32 v);
};

struct Unk_0200d53c_Item {
    u8 pad_00[0xc];
    u32 unk_0c;
};

struct Unk_0200e2c8 {
    Unk_0200e2c8();
    ~Unk_0200e2c8();
};

struct Unk_0200e248_Blob {
    s32 v[4];
};

class PlayerActionRequest : public Unk_0200e2c8 {
public:
    PlayerActionRequest();
    ~PlayerActionRequest();
    void assign(s32 a, s32 b, s16 c);

    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    union {
        Unk_0200e248_Blob unk_0c;
        u16 unk_0c_h;
        Unk_0200c2fc unk_0c_c2fc;
        u8 unk_0c_b[0x10];
        Unk_0200d5b4 unk_0c_d5b4;
    };
};

struct Unk_02006d14_Vec3 { s32 x, y, z; };

struct Unk_0200f6d4_V2 {
    s32 x, y;
    Unk_0200f6d4_V2() {}
    Unk_0200f6d4_V2(const Unk_0200f6d4_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_020107c8_Blk {
    u32 unk_00, unk_04, unk_08;
};

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


    u8 pad_00[0x8];
      u32 unk_08;
    u8 pad_0c[0x50];
      s32 unk_5c;
      u32 unk_60;
      s32 unk_64;
    u8 pad_68[0x24];
      u16 unk_8c;
      s16 unk_8e;
    u8 pad_90[0x4];
      s16 unk_94;
    u8 pad_96[0x2];
      u32 unk_98;
    u8 pad_9c[0x238];
      u32 unk_2d4_lo : 12;
    u32 unk_2d4_mid : 16;
    u32 unk_2d4_hi : 4;
    u8 pad_2d8[0x4];
      u32 unk_2dc;
      u8 unk_2e0;
    u8 pad_2e1[0x103];
      s32 unk_3e4;
    u8 pad_3e8[0x308];
      u32 unk_6f0;
    u8 pad_6f4[0x4];
      u32 unk_6f8;
    u8 pad_6fc[0x4];
      s32 unk_700;
    u8 pad_704[0x4];
      u8 unk_708;
    u8 pad_709[0xb];
      s32 unk_714;
    u8 pad_718[0x28];
      s32 unk_740;
    u8 pad_744[0x24];
      s32 unk_768;
      s32 unk_76c;
    u8 pad_770[0x7c];
      u32 unk_7ec;
    u8 pad_7f0[0xc];
      u32 unk_7fc;
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
extern PM_02004ce8 data_020d5fbc;
extern PM_02004ce8 data_020d5ff4;
}
}

// ---- unk_02004e0c.cpp
namespace nB {
extern "C" {

struct Unk_02005294_Vec3 {
    s32 x, y, z;
};
struct Unk_021cb69c {
    union {
        struct {
            s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20;
            s32 unk_24, unk_28, unk_2c;
        };
        s32 unk_a[12];
    };
};
class PlayerActor;
struct Unk_020050e0;
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
      Unk_02005294_Vec3 unk_5c;
      u8 unk_068[0xb0 - 0x68];
      u32 unk_b0;
      u8 unk_0b4[0x230 - 0xb4];
      u8 unk_230[0x388 - 0x230];
      u8 unk_388[0x3ec - 0x388];
      Unk_021cb69c unk_3ec;
      u8 unk_41c[0x424 - 0x41c];
      u8 unk_424[4];
      Unk_021cb69c unk_428;
      s16 unk_458;
      s16 unk_45a;
      u8 unk_45c[4];
      u8 unk_460[0x4c4 - 0x460];
      Unk_021cb69c unk_4c4;
      u8 unk_4f4[0x4fc - 0x4f4];
      u8 unk_4fc[0x560 - 0x4fc];
      Unk_021cb69c unk_560;
      u8 unk_590[0x598 - 0x590];
      u8 unk_598[4];
      u8 unk_59c[0x604 - 0x59c];
      Unk_021cb69c unk_604;
      Unk_021cb69c unk_634;
      Unk_021cb69c unk_664;
      Unk_021cb69c unk_694;
      Unk_02005294_Vec3 unk_6c4;
      Unk_02005294_Vec3 unk_6d0;
      Unk_02005294_Vec3 unk_6dc;
      s32 unk_6e8;
      s32 unk_6ec;
      Unk_02005294_Vec3 unk_6f0;
      s32 unk_6fc;
      s32 unk_700;
      u8 unk_704[0x7ec - 0x704];
      Unk_020d6df4_State unk_7ec;
      Unk_020d6df4_State unk_7f0;
      u8 unk_7f4[0x7fc - 0x7f4];
      s32 unk_7fc;
      u8 unk_800[0x814 - 0x800];
      s32 unk_814;
      u8 unk_818[0x838 - 0x818];
      u8 unk_838[0x87c - 0x838];
      u8 unk_87c[0x8c0 - 0x87c];
      s32 unk_8c0;
      s32 unk_8c4;
      s32 unk_8c8;
      u8 unk_8cc[0x8e4 - 0x8cc];
      u8 unk_8e4;
      u8 unk_8e5;
      u8 unk_8e6;
      u8 unk_8e7;
      u8 unk_8e8;
};
struct Unk_020050e0_P {
      u8 unk_00;
      u8 unk_01;
};
struct Unk_020050e0_Q {
      u8 unk_00[0x2c];
      PlayerActor *unk_2c;
};
struct Unk_020050e0_R {
      u8 unk_00[0x28];
      s32 unk_28[9];
      Unk_02005294_Vec3 unk_4c;
};
struct Unk_020050e0 {
      Unk_020050e0_P *unk_00;
      Unk_020050e0_Q *unk_04;
      u8 unk_08[0x1c];
      void (*unk_24)(Unk_020050e0 *);
      u8 unk_28[0x92 - 0x28];
      u8 unk_92;
      u8 unk_93[0xb4 - 0x93];
      Unk_020050e0_R *unk_b4;
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
extern PM_02005294 data_020d6734;
extern PM_02005294 data_020d6724;
extern PM_02005294 data_020d5fd4;
extern PM_02005294 data_020d6244;
extern PM_02005294 data_020d623c;
extern PM_02005294 data_020d6234;
extern PM_02005294 data_020d622c;
extern PM_02005294 data_020d6224;
extern PM_02005294 data_020d621c;
extern PM_02005294 data_020d6214;
extern PM_02005294 data_020d619c;
extern PM_02005294 data_020d6204;
extern PM_02005294 data_020d61fc;
extern PM_02005294 data_020d61f4;
extern PM_02005294 data_020d61c4;
extern PM_02005294 data_020d61dc;
extern PM_02005294 data_020d61e4;
extern PM_02005294 data_020d658c;
extern PM_02005294 data_020d6b94;
extern PM_02005294 data_020d6604;
extern PM_02005294 data_020d65bc;
extern PM_02005294 data_020d65e4;
extern PM_02005294 data_020d660c;
extern PM_02005294 data_020d672c;
extern PM_02005294 data_020d676c;
extern PM_02005294 data_020d6db4;
extern PM_02005294 data_020d6d8c;
extern PM_02005294 data_020d6184;
extern PM_02005294 data_020d617c;
extern PM_02005294 data_020d6174;
extern PM_02005294 data_020d616c;
extern PM_02005294 data_020d6164;
extern PM_02005294 data_020d615c;
extern PM_02005294 data_020d6154;
extern PM_02005294 data_020d614c;
extern PM_02005294 data_020d6144;
extern PM_02005294 data_020d613c;
extern PM_02005294 data_020d6134;
extern PM_02005294 data_020d612c;
extern PM_02005294 data_020d64bc;
extern PM_02005294 data_020d64ac;
extern PM_02005294 data_020d6114;
extern PM_02005294 data_020d5e5c;
extern PM_02005294 data_020d6104;
extern PM_02005294 data_020d60fc;
extern PM_02005294 data_020d60f4;
extern PM_02005294 data_020d60ec;
extern PM_02005294 data_020d60e4;
extern PM_02005294 data_020d60dc;
extern PM_02005294 data_020d60d4;
extern PM_02005294 data_020d60cc;
extern PM_02005294 data_020d60c4;
extern PM_02005294 data_020d60bc;
extern PM_02005294 data_020d60b4;
extern PM_02005294 data_020d60ac;
extern PM_02005294 data_020d60a4;
extern PM_02005294 data_020d609c;
extern PM_02005294 data_020d6094;
extern PM_02005294 data_020d5eac;
extern PM_02005294 data_020d6084;
extern PM_02005294 data_020d607c;
extern PM_02005294 data_020d6074;
extern PM_02005294 data_020d606c;
extern PM_02005294 data_020d6064;
extern PM_02005294 data_020d605c;
extern PM_02005294 data_020d6054;
extern PM_02005294 data_020d604c;
extern PM_02005294 data_020d6044;
extern PM_02005294 data_020d603c;
extern PM_02005294 data_020d6034;
extern PM_02005294 data_020d602c;
extern PM_02005294 data_020d6024;
extern PM_02005294 data_020d601c;
extern PM_02005294 data_020d6014;
extern PM_02005294 data_020d600c;
extern PM_02005294 data_020d6284;
extern PM_02005294 data_020d5fc4;
extern PM_02005294 data_020d625c;
extern PM_02005294 data_020d6254;
extern PM_02005294 data_020d5fe4;
extern PM_02005294 data_020d5fec;
extern PM_02005294 data_020d6194;
extern PM_02005294 data_020d61a4;
extern PM_02005294 data_020d61bc;
extern PM_02005294 data_020d61cc;
extern PM_02005294 data_020d61ec;
extern PM_02005294 data_020d6594;
extern PM_02005294 data_020d65f4;
extern PM_02005294 data_020d668c;
extern PM_02005294 data_020d698c;
extern PM_02005294 data_020d6d9c;
extern PM_02005294 data_020d5f84;
extern PM_02005294 data_020d5f7c;
extern PM_02005294 data_020d5f74;
extern PM_02005294 data_020d5f6c;
extern PM_02005294 data_020d5f64;
extern PM_02005294 data_020d5f5c;
extern PM_02005294 data_020d6124;
extern PM_02005294 data_020d5e64;
extern PM_02005294 data_020d5f44;
extern PM_02005294 data_020d5f3c;
extern PM_02005294 data_020d5f34;
extern PM_02005294 data_020d5f2c;
extern PM_02005294 data_020d5f24;
extern PM_02005294 data_020d5f1c;
extern PM_02005294 data_020d5f14;
extern PM_02005294 data_020d5eb4;
extern PM_02005294 data_020d5f04;
extern PM_02005294 data_020d5efc;
extern PM_02005294 data_020d5ef4;
extern PM_02005294 data_020d5ed4;
extern PM_02005294 data_020d5eec;
extern PM_02005294 data_020d5f8c;
extern PM_02005294 data_020d5f9c;
extern PM_02005294 data_020d5fa4;
extern PM_02005294 data_020d6004;
extern PM_02005294 data_020d6264;
extern PM_02005294 data_020d618c;
extern PM_02005294 data_020d61ac;
extern PM_02005294 data_020d61d4;
extern PM_02005294 data_020d659c;
extern PM_02005294 data_020d65c4;
extern PM_02005294 data_020d6dcc;
extern PM_02005294 data_020d5e84;
extern PM_02005294 data_020d5e7c;
extern PM_02005294 data_020d5e74;
extern PM_02005294 data_020d64b4;
extern PM_02005294 data_020d5e8c;
extern PM_02005294 data_020d5e94;
extern PM_02005294 data_020d5ea4;
extern PM_02005294 data_020d5ebc;
extern PM_02005294 data_020d5ecc;
extern PM_02005294 data_020d5edc;
extern PM_02005294 data_020d5f94;
extern PM_02005294 data_020d5fac;
extern PM_02005294 data_020d5fdc;
extern PM_02005294 data_020d61b4;
extern PM_02005294 data_020d65a4;
extern PM_02005294 data_020d6994;
extern PM_02005294 data_020d5e54;
extern PM_02005294 data_020d611c;
extern PM_02005294 data_020d5e9c;
extern PM_02005294 data_020d5ec4;
extern PM_02005294 data_020d5ee4;
extern PM_02005294 data_020d5fb4;
extern PM_02005294 data_020d6274;
extern PM_02005294 data_020d65ac;
}
}

// ---- unk_02005e7c.cpp
namespace nC {
extern "C" {

struct Unk_02005f50_V3 {
    s32 x, y, z;
};
struct Unk_02005f50_Area {
    s32 a[3];
    u8 e[4];
};
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
void PlayerActor_RequestAct68(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
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
struct Unk_02005f50_Pkt {
    u8 type;
    u8 sub;
    volatile u16 pos;
};
s32 _ZN12Unk_02006d1412changeActionEP17Unk_02006d14_Item(void *, void *p);
union PM_020063a0 {
    PMRaw raw;
    void (Unk_02005e7c::*fn)(s32);
};
extern PM_020063a0 data_020d671c;
extern PM_020063a0 data_020d624c;
extern PM_020063a0 data_020d5fcc;
extern PM_020063a0 data_020d6704;
extern PM_020063a0 data_020d66fc;
extern PM_020063a0 data_020d66f4;
extern PM_020063a0 data_020d66ec;
extern PM_020063a0 data_020d66e4;
extern PM_020063a0 data_020d66dc;
extern PM_020063a0 data_020d66d4;
extern PM_020063a0 data_020d66cc;
extern PM_020063a0 data_020d66c4;
extern PM_020063a0 data_020d66bc;
extern PM_020063a0 data_020d66b4;
extern PM_020063a0 data_020d66ac;
extern PM_020063a0 data_020d66a4;
extern PM_020063a0 data_020d669c;
extern PM_020063a0 data_020d6694;
extern PM_020063a0 data_020d620c;
extern PM_020063a0 data_020d6684;
extern PM_020063a0 data_020d667c;
extern PM_020063a0 data_020d6674;
extern PM_020063a0 data_020d666c;
extern PM_020063a0 data_020d6664;
extern PM_020063a0 data_020d665c;
extern PM_020063a0 data_020d6654;
extern PM_020063a0 data_020d664c;
extern PM_020063a0 data_020d6644;
extern PM_020063a0 data_020d663c;
extern PM_020063a0 data_020d6634;
extern PM_020063a0 data_020d662c;
extern PM_020063a0 data_020d6624;
extern PM_020063a0 data_020d661c;
extern PM_020063a0 data_020d6614;
extern PM_020063a0 data_020d5f54;
extern PM_020063a0 data_020d5e6c;
extern PM_020063a0 data_020d6be4;
extern PM_020063a0 data_020d65b4;
extern PM_020063a0 data_020d65cc;
extern PM_020063a0 data_020d65d4;
extern PM_020063a0 data_020d65dc;
extern PM_020063a0 data_020d65ec;
extern PM_020063a0 data_020d65fc;
extern PM_020063a0 data_020d670c;
extern PM_020063a0 data_020d6714;
extern PM_020063a0 data_020d674c;
extern PM_020063a0 data_020d6754;
extern PM_020063a0 data_020d6dbc;
extern PM_020063a0 data_020d6b8c;
extern PM_020063a0 data_020d6d94;
extern PM_020063a0 data_020d6dc4;
extern PM_020063a0 data_020d6584;
extern PM_020063a0 data_020d657c;
extern PM_020063a0 data_020d6574;
extern PM_020063a0 data_020d656c;
extern PM_020063a0 data_020d6564;
extern PM_020063a0 data_020d655c;
extern PM_020063a0 data_020d6554;
extern PM_020063a0 data_020d654c;
extern PM_020063a0 data_020d6544;
extern PM_020063a0 data_020d653c;
extern PM_020063a0 data_020d6534;
extern PM_020063a0 data_020d652c;
extern PM_020063a0 data_020d6524;
extern PM_020063a0 data_020d651c;
extern PM_020063a0 data_020d6514;
extern PM_020063a0 data_020d650c;
extern PM_020063a0 data_020d6504;
extern PM_020063a0 data_020d64fc;
extern PM_020063a0 data_020d64f4;
extern PM_020063a0 data_020d64ec;
extern PM_020063a0 data_020d64e4;
extern PM_020063a0 data_020d64dc;
extern PM_020063a0 data_020d64d4;
extern PM_020063a0 data_020d64cc;
extern PM_020063a0 data_020d64c4;
extern PM_020063a0 data_020d6bec;
extern PM_020063a0 data_020d6bdc;
extern PM_020063a0 data_020d6bd4;
extern PM_020063a0 data_020d64a4;
extern PM_020063a0 data_020d649c;
extern PM_020063a0 data_020d6494;
extern PM_020063a0 data_020d5f4c;
extern PM_020063a0 data_020d6484;
extern PM_020063a0 data_020d647c;
extern PM_020063a0 data_020d6474;
extern PM_020063a0 data_020d646c;
extern PM_020063a0 data_020d6464;
extern PM_020063a0 data_020d645c;
extern PM_020063a0 data_020d6454;
extern PM_020063a0 data_020d644c;
extern PM_020063a0 data_020d6444;
extern PM_020063a0 data_020d643c;
extern PM_020063a0 data_020d6434;
extern PM_020063a0 data_020d642c;
extern PM_020063a0 data_020d6424;
extern PM_020063a0 data_020d641c;
extern PM_020063a0 data_020d6414;
extern PM_020063a0 data_020d640c;
extern PM_020063a0 data_020d6404;
extern PM_020063a0 data_020d63fc;
extern PM_020063a0 data_020d63f4;
extern PM_020063a0 data_020d63ec;
extern PM_020063a0 data_020d63e4;
extern PM_020063a0 data_020d63dc;
extern PM_020063a0 data_020d63d4;
extern PM_020063a0 data_020d63cc;
extern PM_020063a0 data_020d63c4;
extern PM_020063a0 data_020d63bc;
extern PM_020063a0 data_020d63b4;
extern PM_020063a0 data_020d63ac;
extern PM_020063a0 data_020d63a4;
extern PM_020063a0 data_020d639c;
extern PM_020063a0 data_020d6394;
extern PM_020063a0 data_020d5f0c;
extern PM_020063a0 data_020d6384;
extern PM_020063a0 data_020d637c;
extern PM_020063a0 data_020d6374;
extern PM_020063a0 data_020d636c;
extern PM_020063a0 data_020d6364;
extern PM_020063a0 data_020d635c;
extern PM_020063a0 data_020d6354;
extern PM_020063a0 data_020d634c;
extern PM_020063a0 data_020d6344;
extern PM_020063a0 data_020d633c;
extern PM_020063a0 data_020d6334;
extern PM_020063a0 data_020d632c;
extern PM_020063a0 data_020d6324;
extern PM_020063a0 data_020d631c;
extern PM_020063a0 data_020d6314;
extern PM_020063a0 data_020d630c;
extern PM_020063a0 data_020d6304;
extern PM_020063a0 data_020d62fc;
extern PM_020063a0 data_020d62f4;
extern PM_020063a0 data_020d62ec;
extern PM_020063a0 data_020d62e4;
extern PM_020063a0 data_020d62dc;
extern PM_020063a0 data_020d62d4;
extern PM_020063a0 data_020d62cc;
extern PM_020063a0 data_020d62c4;
extern PM_020063a0 data_020d62bc;
extern PM_020063a0 data_020d62b4;
extern PM_020063a0 data_020d62ac;
extern PM_020063a0 data_020d62a4;
extern PM_020063a0 data_020d629c;
extern PM_020063a0 data_020d6294;
extern PM_020063a0 data_020d628c;
}
}

// ---- unk_02006d14.cpp
namespace nD {
extern "C" {

struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; };
struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };
struct Unk_02006d14 {
    u8 pad_000[0x7ec];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0xc80-0x800];
    s16 unk_c80;
    u8 pad_c82[2];
    u32 unk_c84;
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
extern PM_02006d14 data_020d6bcc;
extern PM_02006d14 data_020d6bc4;
extern PM_02006d14 data_020d6bbc;
extern PM_02006d14 data_020d6bb4;
extern PM_02006d14 data_020d6bac;
extern PM_02006d14 data_020d6ba4;
extern PM_02006d14 data_020d6b9c;
extern PM_02006d14 data_020d648c;
extern PM_02006d14 data_020d610c;
extern PM_02006d14 data_020d6b84;
extern PM_02006d14 data_020d6b7c;
extern PM_02006d14 data_020d6b74;
extern PM_02006d14 data_020d6b6c;
extern PM_02006d14 data_020d6b64;
extern PM_02006d14 data_020d6b5c;
extern PM_02006d14 data_020d6b54;
extern PM_02006d14 data_020d6b4c;
extern PM_02006d14 data_020d6b44;
extern PM_02006d14 data_020d6b3c;
extern PM_02006d14 data_020d6b34;
extern PM_02006d14 data_020d6b2c;
extern PM_02006d14 data_020d6b24;
extern PM_02006d14 data_020d6b1c;
extern PM_02006d14 data_020d6b14;
extern PM_02006d14 data_020d6b0c;
extern PM_02006d14 data_020d6b04;
extern PM_02006d14 data_020d6afc;
extern PM_02006d14 data_020d6af4;
extern PM_02006d14 data_020d6aec;
extern PM_02006d14 data_020d6ae4;
extern PM_02006d14 data_020d6adc;
extern PM_02006d14 data_020d6ad4;
extern PM_02006d14 data_020d6acc;
extern PM_02006d14 data_020d6ac4;
extern PM_02006d14 data_020d6abc;
extern PM_02006d14 data_020d6ab4;
extern PM_02006d14 data_020d6aac;
extern PM_02006d14 data_020d6aa4;
extern PM_02006d14 data_020d6a9c;
extern PM_02006d14 data_020d6a94;
extern PM_02006d14 data_020d6a8c;
extern PM_02006d14 data_020d6a84;
extern PM_02006d14 data_020d6a7c;
extern PM_02006d14 data_020d6a74;
extern PM_02006d14 data_020d6a6c;
extern PM_02006d14 data_020d6a64;
extern PM_02006d14 data_020d6a5c;
extern PM_02006d14 data_020d6a54;
extern PM_02006d14 data_020d6a4c;
extern PM_02006d14 data_020d6a44;
extern PM_02006d14 data_020d6a3c;
extern PM_02006d14 data_020d6a34;
extern PM_02006d14 data_020d6a2c;
extern PM_02006d14 data_020d6a24;
extern PM_02006d14 data_020d6a1c;
extern PM_02006d14 data_020d6a14;
extern PM_02006d14 data_020d6a0c;
extern PM_02006d14 data_020d6a04;
extern PM_02006d14 data_020d69fc;
extern PM_02006d14 data_020d69f4;
extern PM_02006d14 data_020d69ec;
extern PM_02006d14 data_020d69e4;
extern PM_02006d14 data_020d69dc;
extern PM_02006d14 data_020d69d4;
extern PM_02006d14 data_020d69cc;
extern PM_02006d14 data_020d69c4;
extern PM_02006d14 data_020d69bc;
extern PM_02006d14 data_020d69b4;
extern PM_02006d14 data_020d69ac;
extern PM_02006d14 data_020d69a4;
extern PM_02006d14 data_020d699c;
extern PM_02006d14 data_020d638c;
extern PM_02006d14 data_020d608c;
extern PM_02006d14 data_020d6984;
extern PM_02006d14 data_020d697c;
extern PM_02006d14 data_020d6974;
extern PM_02006d14 data_020d696c;
extern PM_02006d14 data_020d6964;
extern PM_02006d14 data_020d695c;
extern PM_02006d14 data_020d6954;
extern PM_02006d14 data_020d694c;
extern PM_02006d14 data_020d6944;
extern PM_02006d14 data_020d693c;
extern PM_02006d14 data_020d6934;
extern PM_02006d14 data_020d692c;
extern PM_02006d14 data_020d6924;
extern PM_02006d14 data_020d691c;
extern PM_02006d14 data_020d6914;
extern PM_02006d14 data_020d690c;
extern PM_02006d14 data_020d6904;
extern PM_02006d14 data_020d68fc;
extern PM_02006d14 data_020d68f4;
extern PM_02006d14 data_020d68ec;
extern PM_02006d14 data_020d68e4;
extern PM_02006d14 data_020d68dc;
extern PM_02006d14 data_020d68d4;
extern PM_02006d14 data_020d68cc;
extern PM_02006d14 data_020d68c4;
extern PM_02006d14 data_020d68bc;
extern PM_02006d14 data_020d68b4;
extern PM_02006d14 data_020d68ac;
extern PM_02006d14 data_020d68a4;
extern PM_02006d14 data_020d689c;
extern PM_02006d14 data_020d6894;
extern PM_02006d14 data_020d688c;
extern PM_02006d14 data_020d6884;
extern PM_02006d14 data_020d687c;
extern PM_02006d14 data_020d6874;
extern PM_02006d14 data_020d686c;
extern PM_02006d14 data_020d6864;
extern PM_02006d14 data_020d685c;
extern PM_02006d14 data_020d6854;
extern PM_02006d14 data_020d684c;
extern PM_02006d14 data_020d6844;
extern PM_02006d14 data_020d683c;
extern PM_02006d14 data_020d6834;
extern PM_02006d14 data_020d682c;
extern PM_02006d14 data_020d6824;
extern PM_02006d14 data_020d681c;
extern PM_02006d14 data_020d6814;
extern PM_02006d14 data_020d680c;
extern PM_02006d14 data_020d6804;
extern PM_02006d14 data_020d67fc;
extern PM_02006d14 data_020d67f4;
extern PM_02006d14 data_020d67ec;
extern PM_02006d14 data_020d67e4;
extern PM_02006d14 data_020d67dc;
extern PM_02006d14 data_020d67d4;
extern PM_02006d14 data_020d67cc;
extern PM_02006d14 data_020d67c4;
extern PM_02006d14 data_020d67bc;
extern PM_02006d14 data_020d67b4;
extern PM_02006d14 data_020d67ac;
extern PM_02006d14 data_020d67a4;
extern PM_02006d14 data_020d679c;
extern PM_02006d14 data_020d6794;
extern PM_02006d14 data_020d678c;
extern PM_02006d14 data_020d6784;
extern PM_02006d14 data_020d677c;
extern PM_02006d14 data_020d6774;
extern PM_02006d14 data_020d627c;
extern PM_02006d14 data_020d6764;
extern PM_02006d14 data_020d675c;
extern PM_02006d14 data_020d626c;
extern PM_02006d14 data_020d5ffc;
extern PM_02006d14 data_020d6744;
extern PM_02006d14 data_020d673c;
}
}

// ---- unk_02007694.cpp
namespace nE {
extern "C" {

struct Unk_02007ebc_Mtx {
    s32 m[12];
};
struct Unk_02007ebc_Vec {
    s32 x, y, z;
};
struct Unk_02007c5c_Mtx {
    s32 m[12];
};
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
    u8 unk_5c[0x98 - 0x5c];
    u32 unk_98;
    u8 unk_9c[8];
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 unk_b0[0xc4 - 0xb0];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 unk_d2[0x294 - 0xd2];
    Unk_02007c5c_Mtx unk_294;
    u8 unk_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 unk_2d8[0x694 - 0x2d8];
    Unk_02007ebc_Mtx unk_694;
    u8 unk_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 unk_704[0x7a0 - 0x704];
    u8 unk_7a0[0x30];
    u8 unk_7d0[0x1c];
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u8 unk_7fc[0x820 - 0x7fc];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 unk_838[0xc80 - 0x838];
    u16 unk_c80;
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
extern PM_020076f0 data_020d6da4;
extern PM_020076f0 data_020d6dac;
extern PM_020076f0 data_020d6d84;
extern PM_020076f0 data_020d6d7c;
extern PM_020076f0 data_020d6d74;
extern PM_020076f0 data_020d6d6c;
extern PM_020076f0 data_020d6d64;
extern PM_020076f0 data_020d6d5c;
extern PM_020076f0 data_020d6d54;
extern PM_020076f0 data_020d6d4c;
extern PM_020076f0 data_020d6d44;
extern PM_020076f0 data_020d6d3c;
extern PM_020076f0 data_020d6d34;
extern PM_020076f0 data_020d6d2c;
extern PM_020076f0 data_020d6d24;
extern PM_020076f0 data_020d6d1c;
extern PM_020076f0 data_020d6d14;
extern PM_020076f0 data_020d6d0c;
extern PM_020076f0 data_020d6d04;
extern PM_020076f0 data_020d6cfc;
extern PM_020076f0 data_020d6cf4;
extern PM_020076f0 data_020d6cec;
extern PM_020076f0 data_020d6ce4;
extern PM_020076f0 data_020d6cdc;
extern PM_020076f0 data_020d6cd4;
extern PM_020076f0 data_020d6ccc;
extern PM_020076f0 data_020d6cc4;
extern PM_020076f0 data_020d6cbc;
extern PM_020076f0 data_020d6cb4;
extern PM_020076f0 data_020d6cac;
extern PM_020076f0 data_020d6ca4;
extern PM_020076f0 data_020d6c9c;
extern PM_020076f0 data_020d6c94;
extern PM_020076f0 data_020d6c8c;
extern PM_020076f0 data_020d6c84;
extern PM_020076f0 data_020d6c7c;
extern PM_020076f0 data_020d6c74;
extern PM_020076f0 data_020d6c6c;
extern PM_020076f0 data_020d6c64;
extern PM_020076f0 data_020d6c5c;
extern PM_020076f0 data_020d6c54;
extern PM_020076f0 data_020d6c4c;
extern PM_020076f0 data_020d6c44;
extern PM_020076f0 data_020d6c3c;
extern PM_020076f0 data_020d6c34;
extern PM_020076f0 data_020d6c2c;
extern PM_020076f0 data_020d6c24;
extern PM_020076f0 data_020d6c1c;
extern PM_020076f0 data_020d6c14;
extern PM_020076f0 data_020d6c0c;
extern PM_020076f0 data_020d6c04;
extern PM_020076f0 data_020d6bfc;
extern PM_020076f0 data_020d6bf4;
}
}

// ---- unk_02008040.cpp
namespace nF {
extern "C" {

struct Unk_02008100_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e[0x0e];
};
struct Unk_020082e4_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d[0x0f];
};
struct Unk_02008404_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a[0x12];
};
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
struct Unk_02008858_S16x2 {
    s16 unk_00, unk_02;
};
struct Unk_02008858_S16x3 {
    s16 unk_00, unk_02, unk_04;
};
static inline BOOL Unk_02008858_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
}
}

// ---- unk_02008cc0.cpp
namespace nG {
extern "C" {

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_02008e50_Pay {
    u8 unk_00, unk_01, unk_02;
    u8 pad_03[0xd];
    void set(u8 a, u8 b, u8 c) { unk_00 = a; unk_01 = b; unk_02 = c; }
};
struct Unk_02008e50_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008e50_Pay unk_0c;
};
struct Unk_02008f60_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008fa0 unk_0c;
    u8 pad_0e[0xe];
};
struct Unk_020093f4_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_0200944c unk_0c;
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
struct Unk_02008ee4_Sub { s16 unk_00; s16 unk_02; void set(s16 v) { unk_02 = v; } };
struct Unk_020092c8_Flags { u8 f0 : 1; u8 f1 : 2; u8 f3 : 5; };
struct Unk_020092c8_Date { union { struct { u32 w0, w1; }; u8 b[8]; }; };
struct Unk_020092c8_Bits { u16 y : 7; u16 m : 4; u16 d : 5; };
struct Unk_020092c8_Loc { Unk_020092c8_Bits bits; u16 pad; Unk_020092c8_Date date; };
inline s32 Unk_0200905c_abs(s32 x) { return x < 0 ? -x : x; }
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[8];
      s32 unk_98;
      u8 pad_09c[0x230 - 0x9c];
      u8 unk_230[0x2cc - 0x230];
      u8 unk_2cc[4];
      s32 unk_2d0;
      u32 unk_2d4;
      u8 pad_2d8[4];
      s32 unk_2dc;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 unk_59c[0x700 - 0x59c];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 unk_7d0;
      u8 pad_7e8[4];
      u32 unk_7ec;
      u8 pad_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[4];
      s32 unk_804;
      u8 pad_808[0x818 - 0x808];
      s32 unk_818;
      u8 pad_81c[0x8e7 - 0x81c];
      u8 unk_8e7;
      u8 pad_8e8[4];
      Unk_02008e48 unk_8ec;

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

struct Unk_02009d5c_Sub { u32 unk_00; u8 unk_04; u32 unk_08; u32 unk_0c; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; Unk_02009d5c_Sub unk_0c; };
struct Unk_0200e2e0 { u8 pad_00[0xc]; Unk_02009d5c_Sub unk_0c; };
struct Unk_02009a78_Vec { s32 x, y, z; };
struct Unk_02009624_Pair { u32 unk_00; u16 unk_04; u8 unk_06; };
extern u8 gFieldSceneKind;
struct Unk_02006d14_Data;
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
    Unk_02009a78_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0x230 - 0x9c];
    u8 unk_230[0x9c];
    u8 unk_2cc[4];
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02009624_Pair unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x81c - 0x800];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x82c - 0x820];
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e7 - 0x838];
    s8 unk_8e7;
    u8 pad_8e8[4];
    u8 unk_8ec[4];

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
struct Unk_02009a78_Locals { Unk_02009a78_Vec cur; Unk_02009a78_Vec pos; Unk_02009a78_Vec diff; };
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

struct Unk_02009f68_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; union { Unk_02009f68_Bytes unk_0c; u8 unk_0c_raw[8]; }; };
struct Unk_0200a0a0_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; u8 pad_3[13]; };
struct Unk_0200a63c_St { u8 unk_0; u8 unk_1[2]; u8 unk_3; u8 unk_4; };
struct Unk_0200a728_St { u16 unk_0; u8 unk_2; u8 unk_3; u8 unk_4; u8 pad_5[15]; };
struct Unk_02006d14_Trip { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_St7d0 {
    u8 unk_0; u8 unk_1; u8 unk_2; u8 unk_3;
    u8 pad_4[4];
    u8 unk_8; u8 unk_9; u8 unk_a;
};
struct Unk_0200a6d4_St { u8 pad[16]; };
struct Unk_0200a050_Obj { u8 pad[12]; };
struct Unk_02006d14_Ptr { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_Obj2cc { u8 pad[8]; u32 unk_8; };
struct Unk_02006d14_Blk30 { u32 w[12]; };
struct Unk_02006d14_Obj59c { u8 pad[4]; };
struct Unk_02006d14_Objec { u8 pad[4]; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Base0 {
    u8 pad_000[0xc4];
    Unk_02006d14_Trip unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14 : Unk_02006d14_Base0, Unk_02006d14_Objec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_02006d14_Ptr* unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u8 unk_2cc[8];
    struct { u32 lo : 12; u32 mid : 16; u32 hi : 4; } unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[4];
    u8 pad_5a0[0x700 - 0x5a0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02006d14_St7d0 unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[8];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    u8 unk_820[12];
    u32 unk_82c, unk_830, unk_834;
    u8 pad_838[0x8e8 - 0x838];
    u8 unk_8e8;
    u8 pad_8e9[3];
    Unk_0200a63c_St unk_8ec;
    u8 pad_8f1[0xc80 - 0x8f1];
    s16 unk_c80;

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
struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };
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

struct Unk_0200b244_Out { u16 unk_00; u16 pad_02; s32 unk_04; u8 unk_08; u8 unk_09; u8 unk_0a; };
struct Unk_0200b144_Src { u8 unk_00; u8 unk_01; u8 unk_02; s8 unk_03; u8 unk_04; u8 unk_05; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; u32 unk_08; Unk_0200b244_Out unk_0c; };
struct Unk_02006d14_V3 { s32 x; s32 y; s32 z; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Sub7d0 {
    u8 unk_00;
    u8 pad_01[3];
    union { s32 s; struct { u8 unk_04, unk_05, unk_06, unk_07; } b; } unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
};
struct Unk_0203d820_Ptr { u32 unk_00; u32 unk_04; u32 unk_08; };
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
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_0203d820_Ptr* unk_128;
    u8 pad_12c[0x294 - 0x12c];
    Unk_02006d14_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 pad_2d8[0x694 - 0x2d8];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
};
struct Unk_02006d14 : Unk_02006d14_A, Unk_02006d14_B {
    u32 unk_700;
    u8 pad_704[0x7d0-0x704];
    Unk_02006d14_Sub7d0 unk_7d0;
    u8 pad_7dc[0x7ec-0x7dc];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8-0x7f0];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x810-0x800];
    u32 unk_810;
    u8 pad_814[0x81c-0x814];
    u16 unk_81c;
    u16 unk_81e;
    u32 unk_820;
    u32 unk_824;
    u32 unk_828;
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e8-0x838];
    u8 unk_8e8;
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

struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_0200b76c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b7bc unk_0c;
    u8 pad_14[8];
};
struct Unk_0200b868_Msg {
    u32 unk_00, unk_04, unk_08;
    u8 pad_0c[0x14];
};
struct Unk_0200ba8c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b750 unk_0c;
    u8 pad_14[0x8];
};
struct Unk_0200bd60_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200bda0 unk_0c;
    u8 pad_0e[0xe];
};
static inline void func_0200bc78_sub(Unk_02006d14_Vec *o, Unk_02006d14_Vec *a, Unk_02006d14_Vec *b) {
    o->x = a->x - b->x;
    o->z = a->z - b->z;
}
struct Unk_0200bc78_Vec : Unk_02006d14_Vec { Unk_0200bc78_Vec() {} };
class Unk_0200bc78_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual Unk_02006d14_Vec *vfunc_50();
};
struct Unk_0200bc08_Obj {
    u32 unk_00, unk_04, unk_08;
};
struct Unk_02006d14_7d0 {
    union {
        struct { s32 w0; u8 b4, b5, b6; };
        struct { u8 c0, c1; };
    };
};
struct Unk_0200b908_Obj { u32 unk_00; u8 pad_04[8]; volatile u32 unk_0c; u8 pad_10[8]; u8 unk_18; };
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[0x16c - 0x90 - 0];
      s32 unk_16c;
      u8 pad_170[0x2cc - 0x170];
      u8 unk_2cc[4];
      s32 unk_2d0;
      u32 unk_2d4;
      u8 pad_2d8[8];
      u8 unk_2e0;
      u8 pad_2e1[0x59c - 0x2e1];
      u8 pad_59c[0x6dc - 0x59c];
      u8 unk_6dc[0x6fc - 0x6dc];
      u8 unk_6fc[4];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 unk_7d0;
      s32 unk_7d8;
      u8 pad_7dc[0x7ec - 0x7dc];
      u32 unk_7ec;
      u8 pad_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[0x814 - 0x800];
      s32 unk_814;
      u8 pad_818[4];
      u16 unk_81c;
      u16 unk_81e;
      u8 unk_820[0x82c - 0x820];
      s32 unk_82c, unk_830, unk_834;
      u8 pad_838[0x8ec - 0x838];
      Unk_0200b750 unk_8ec;
      u8 pad_8f4[0x904 - 0x8f4];
      Unk_0200b908_Obj *unk_904;
      u8 unk_908[0x92d - 0x908];
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
void _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(void *, void *, u32);
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

struct Unk_0200bff8_Vec {
    s32 x, y, z;
};
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
    u8 unk_5c[0x8e - 0x5c];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[2];
    s32 unk_98;
    u8 unk_9c[0x2cc - 0x9c];
    u8 unk_2cc[0x2e0 - 0x2cc];
    u8 unk_2e0;
    u8 unk_2e1[0x6c4 - 0x2e1];
    Unk_0200bff8_Vec unk_6c4;
    Unk_0200bff8_Vec unk_6d0;
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 unk_704[5];
    u8 unk_709[0x7d0 - 0x709];
    Unk_0200c288 unk_7d0;
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 unk_800[0x8e4 - 0x800];
    u8 unk_8e4;
    u8 unk_8e5[0x8ec - 0x8e5];
    Unk_0200c24c unk_8ec;
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

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_020d6df4_Vec { s32 x, y, z; };
struct Unk_020d6df4_Data {
    u8 pad_00[0x64];
    s32 unk_64;
};
struct Unk_0205dfa4_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};
struct Unk_0205dfa4_Base {
    u8 pad_00[0x9c];
};
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
      u32 unk_08;
      u8 pad_00c[0x5c - 0xc];
      Unk_020d6df4_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[0x98 - 0x90];
      s32 unk_98;
      u8 pad_09c[0x130 - 0x9c];
      s32 unk_130;
      s16 unk_134;
      u8 pad_136[0x164 - 0x136];
      s32 unk_164;
      u8 unk_168;
      u8 pad_169[0x230 - 0x169];
      u8 unk_230[4];
      u8 pad_234[0x2d0 - 0x234];
      s32 unk_2d0;
      u8 pad_2d4[0x2dc - 0x2d4];
      s32 unk_2dc;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 unk_59c[4];
      u8 pad_5a0[0x6c4 - 0x5a0];
      u8 unk_6c4[0xc];
      u8 unk_6d0[0x30];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_020d6df4_7d0 unk_7d0;
      u8 pad_7d4[0x7ec - 0x7d4];
      s32 unk_7ec;
      u8 pad_7f0[4];
      s32 unk_7f4;
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[0x838 - 0x800];
      u8 unk_838[0x44];
      u8 unk_87c[0x8c];
      u8 unk_908[0x18];
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

struct Unk_0200d64c_Xyz { s32 x, y, z; Unk_0200d64c_Xyz() {} };
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
struct Unk_0200d64c_Keys { u16 a; u16 b; s16 c; };
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
    Unk_0200d64c_Xyz unk_5c;
    Unk_0200d64c_Xyz unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x130 - 0x90];
    s32 unk_130;
    s16 unk_134;
    u8 unk_136;
    u8 unk_137;
    s32 unk_138;
    u8 unk_13c;
    u8 unk_13d;
    u8 pad_13e[2];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    Unk_0200d64c_Xyz unk_154;
    u8 pad_160[9];
    u8 unk_169;
    u8 pad_16a[2];
    s32 unk_16c;
    u8 pad_170[0x230 - 0x170];
    u8 unk_230[0x384 - 0x230];
    u8 unk_384;
    u8 unk_385;
    u8 pad_386[0x59c - 0x386];
    u8 unk_59c[0x6f0 - 0x59c];
    Unk_0200d64c_Xyz unk_6f0;
    u8 unk_6fc;
    u8 unk_6fd;
    u8 pad_6fe[0x70c - 0x6fe];

    u8 unk_70c[0x738 - 0x70c];
    u8 unk_738;
    u8 pad_739[0x7d0 - 0x739];
    Unk_0200d560 unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    s32 unk_7ec;
    s32 unk_7f0;
    s32 unk_7f4;
    u8 pad_7f8[4];
    s32 unk_7fc;
    u8 pad_800[0xc88 - 0x800];
    s32 unk_c88;
    u8 pad_c8c[4];
    s32 unk_c90;
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

struct Unk_0200dde0_Vec3 {
    s32 x, y, z;
};
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
struct Unk_021c1b3c {
    u8 unk_00[0x248];
    s32 unk_248;
};
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
    void vfunc_6c();
    void vfunc_68();
    void vfunc_64();

      u8 unk_000[8];
      s32 unk_08;
      u8 unk_0c[0x5c - 0xc];
      Unk_0200dde0_Vec3 unk_5c;
      u8 unk_068[0x9c - 0x68];
      s32 unk_9c;
      s32 unk_a0;
      u8 unk_0a4[0x128 - 0xa4];
      s32 unk_128;
      u8 unk_12c[0x164 - 0x12c];
      s32 unk_164;
      u8 unk_168;
      u8 unk_169[0x385 - 0x169];
      u8 unk_385[0x424 - 0x385];
      u8 unk_424[0x598 - 0x424];
      u8 unk_598[4];
      u8 unk_59c[0x5c4 - 0x59c];
      u8 unk_5c4[0x6e8 - 0x5c4];
      s32 unk_6e8;
      u8 unk_6ec[4];
      Unk_0200dde0_Vec3 unk_6f0;
      u8 unk_6fc[0x709 - 0x6fc];
      u8 unk_709;
      u8 unk_70a;
      u8 unk_70b;
      u8 unk_70c[0x770 - 0x70c];
      u8 unk_770[0x79c - 0x770];
      u8 unk_79c[0x7d0 - 0x79c];
      u16 unk_7d0;
      u8 unk_7d2;
      u8 unk_7d3;
      u16 unk_7d4;
      u8 unk_7d6[2];
      u8 unk_7d8;
      u8 unk_7d9[0x7ec - 0x7d9];
      s32 unk_7ec;
      u8 unk_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      s32 unk_800;
      s32 unk_804;
      s32 unk_808;
      s32 unk_80c;
      s32 unk_810;
      s32 unk_814;
      s32 unk_818;
      u8 unk_81c[0x8e4 - 0x81c];
      u8 unk_8e4;
      u8 unk_8e5;
      u8 unk_8e6[0x900 - 0x8e6];
      u8 unk_900;
      u8 unk_901[0x930 - 0x901];
      Unk_0200e248_Rec unk_930[30];
      s32 unk_c78;
      s32 unk_c7c;
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

struct CommManager { u8 pad_00[0x64]; s32 unk_64; };
struct Unk_0200e7f4_T24 { u32 a[12]; };
extern CommManager *gCommManager;
extern Unk_0200e7f4_T24 data_021cb69c;
extern u8 sPlayerActionTalkable[];
extern s16 data_02135f44[];
extern u32 data_020d5e40;
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02006d14_Vec3 unk_5c;
    Unk_02006d14_Vec3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0xc4 - 0xb4];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 pad_d2[0x16c - 0xd2];
    u32 unk_16c;
    u8 pad_170[0x17e - 0x170];
    u8 unk_17e;
    u8 unk_17f;
    u8 pad_180[0x1ac - 0x180];
    u8 unk_1ac;
    u8 pad_1ad[0x230 - 0x1ad];
    u8 unk_230[0x294 - 0x230];
    Unk_0200e7f4_T24 unk_294;
    u8 pad_2c4[0x458 - 0x2c4];
    s16 unk_458;
    s16 unk_45a;
    s16 unk_45c;
    s16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[0x694 - 0x59c];
    u8 unk_694[0x6b8 - 0x694];
    u32 unk_6b8;
    u32 unk_6bc;
    u32 unk_6c0;
    u8 pad_6c4[0x6e8 - 0x6c4];
    u32 unk_6e8;
    u8 pad_6ec[0x7d1 - 0x6ec];
    u8 unk_7d1;
    u8 pad_7d2[0x7fc - 0x7d2];
    s32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u8 pad_81c[0x820 - 0x81c];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    u8 pad_82c[0x838 - 0x82c];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[0x8c0 - 0x87c];
    s32 unk_8c0;
    s32 unk_8c4;
    s32 unk_8c8;
    u8 pad_8cc[0xc78 - 0x8cc];
    u32 unk_c78;

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

struct Unk_0200f070_V3 { s32 x, y, z; };
struct Unk_0200f070_M { s32 v[12]; };
struct Unk_0200f17c_Date { u16 a : 7; u16 b : 4; u16 c : 5; };
struct Unk_0200f660_S { u16 a; u16 b; };
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
    Unk_0200f070_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0x2cc - 0xb4];
    u8 unk_2cc[4];
    u8 pad_2d0[0x694 - 0x2d0];
    Unk_0200f070_M unk_694;
    s32 unk_6c4[3];
    s32 unk_6d0[3];
    u8 pad_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7fc - 0x704];
    s32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    s32 unk_808;
    s32 unk_80c;
    s32 unk_810;
    s32 unk_814;
    u8 pad_818[4];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x838 - 0x820];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[4];

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

struct Unk_0200ff08_Vec { s32 x, y, z; };
struct Unk_0200ff08_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual BOOL vfunc_54(void *p);
};
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
    s16 unk_8e;
    u8 pad_90[0x138 - 0x90];
    Unk_0200ff08_Obj *unk_138;
    u8 unk_13c;
    u8 pad_13d[0x154 - 0x13d];
    s32 unk_154, unk_158, unk_15c;
    u8 pad_160[0x16c - 0x160];
    s32 unk_16c;
    u8 unk_170[0x230 - 0x170];
    u8 unk_230[0x28c - 0x230];
    u32 unk_28c;
    u8 pad_290[0x388 - 0x290];
    u8 unk_388[0x424 - 0x388];
    u8 unk_424[0x460 - 0x424];
    u8 unk_460[0x4fc - 0x460];
    u8 unk_4fc[0x598 - 0x4fc];
    u8 unk_598[0x6f0 - 0x598];
    s32 unk_6f0;
    s32 pad_6f4;
    s32 unk_6f8;
    u8 pad_6fc[0x6fd - 0x6fc];
    u8 unk_6fd[0x704 - 0x6fd];
    s32 unk_704;
    u8 unk_708;
    u8 unk_709;
    u8 unk_70a;
    u8 unk_70b;
    u8 unk_70c[0x714 - 0x70c];
    u32 unk_714;
    u8 pad_718[0x738 - 0x718];
    u8 unk_738[0x740 - 0x738];
    u32 unk_740;
    u8 pad_744[0x770 - 0x744];
    u8 unk_770[0x774 - 0x770];
    u8 unk_774[0x79c - 0x774];
    u8 unk_79c[0x7a4 - 0x79c];
    u32 unk_7a4;
    u8 pad_7a8[0x808 - 0x7a8];
    u32 unk_808;
    u8 pad_80c[0xc88 - 0x80c];
    s32 unk_c88;
    u16 unk_c8c;
    u8 pad_c8e[2];
    s32 unk_c90;
    u16 unk_c94;
    u8 unk_c96;
    u8 unk_c97;
    u8 unk_c98;

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

struct Unk_02010924_Msg {
    u8 unk_00;
    s16 unk_02;
    s16 unk_04;
};
struct Unk_02010a58_Blk {
    u16 unk_00;
    s16 unk_02;
};
struct Unk_02010b08_Time {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_02010b08_Bits {
    u16 unk_a : 7;
    u16 unk_b : 4;
    u16 unk_c : 5;
};
struct Unk_0201065c_Vec {
    s32 x, y, z;
};
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
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();

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

    ActorPlacedCollider unk_170;
    u8 pad_171[0x4f];
    ActorPlacedCollider unk_1c0;
    u8 pad_1c1[0x4f];
    TouchPickCylinder unk_210;
    u8 pad_211[0x1f];
    TwoLayerAnimModel unk_230;
    u8 pad_231[0x153];
    PlayerBodyWorkRef unk_384;
    PlayerBodyModelRef unk_385;
    u8 pad_386[0x2];
    CachedModel unk_388;
    u8 pad_389[0x9b];
    PlayerHead unk_424;
    u8 pad_425[0x3b];
    CachedModel unk_460;
    u8 pad_461[0x9b];
    CachedModel unk_4fc;
    u8 pad_4fd[0x9b];
    PlayerGlassesModelRef unk_598;
    u8 pad_599[0x3];
    HeldItemModel unk_59c;
    u8 pad_59d[0x15f];
    Unk_0205c3a4 unk_6fc;
    Unk_0205c3a4 unk_6fd;
    u8 pad_6fe[0x2];
    s32 unk_700;
    s32 unk_704;
    u8 pad_708[0x1];
    PlayerFaceTexRef unk_709;
    CharaFaceAnimRef unk_70a;
    CharaFaceAnimWorkRef unk_70b;
    MatTexPatAnim unk_70c;
    u8 pad_70d[0x2b];
    MatTexPatAnim unk_738;
    u8 pad_739[0x2b];
    BlinkTimer unk_764;
    u8 pad_765[0x3];
    s32 unk_768;
    s32 unk_76c;
    CharaClothTexRef unk_770;
    u8 pad_771[0x3];
    MatTexVramTask unk_774;
    u8 pad_775[0x27];
    Unk_0205ef98 unk_79c;
    u8 pad_79d[0x3];
    CollisionState unk_7a0;
    u8 pad_7a1[0x2f];
    s32 unk_7d0;
    u8 pad_7d4[0x18];
    s32 unk_7ec;
    u8 pad_7f0[0x4];
    s32 unk_7f4;
    u8 pad_7f8[0x4];
    s32 unk_7fc;
    u8 pad_800[0x1c];
    u16 unk_81c;
    u16 unk_81e;
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    SndSeEmitterKind99 unk_838;
    u8 pad_839[0x43];
    SndSeEmitterKind1 unk_87c;
    s32 unk_8cc;
    s32 unk_8d0;
    s32 unk_8d4;
    s32 unk_8d8;
    s32 unk_8dc;
    s32 unk_8e0;
    u8 pad_8e4[0x10];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    u8 pad_900[0x8];
    Unk_0201a13c unk_908;
    u8 pad_909[0x27];
    PlayerActionRequest unk_930[30];
    u8 pad_c78[0x4];
    s32 unk_c7c;
    u16 unk_c80;
    u8 pad_c82[0x2];
    s32 unk_c84;
    s32 unk_c88;
    u8 pad_c8c[0x4];
    s32 unk_c90;
    u8 pad_c94[0x8];
};


namespace nPM {
extern "C" {
void _ZN11PlayerActor12drawNotReadyEv();
void _ZN11PlayerActor9drawReadyEv();
void _ZN11PlayerActor8mainInitEv();
void _ZN11PlayerActor9mainAct01Ev();
void _ZN11PlayerActor8mainWaitEv();
void _ZN12Unk_020076948mainWalkEv();
void _ZN12Unk_0200769412mainSkidTurnEv();
void _ZN12Unk_020076949mainAct05Ev();
void PlayerActor_MainReleaseCreature();
void _ZN12Unk_02006d1417mainChangeClothesEv();
void PlayerActor_MainLieInBed();
void PlayerActor_MainGetOutOfBedCheck();
void PlayerActor_MainGetOutOfBed();
void PlayerActor_MainBedRollCheck();
void PlayerActor_MainBedRollBlocked();
void PlayerActor_MainBedRoll();
void PlayerActor_MainBedApproach();
void PlayerActor_MainGetIntoBed();
void _ZN12Unk_02006d149mainAct10Ev();
void PlayerActor_MainAct11();
void PlayerActor_MainAct12();
void _ZN12Unk_02006d149mainAct13Ev();
void _ZN12Unk_02006d1411mainEmotionEv();
void _ZN12Unk_02006d149mainAct15Ev();
void PlayerActor_MainPluckReach();
void PlayerActor_MainPluck();
void _ZN12Unk_02006d1415mainPickUpReachEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410mainPickUpEv();
void _ZN12Unk_02006d1417mainPickUpFanfareEv();
void _ZN12Unk_02006d1421mainPickUpFanfareStowEv();
void PlayerActor_MainPickUpItem();
void PlayerActor_MainFtrGrabApproach();
void PlayerActor_MainFtrHold();
void PlayerActor_MainFtrRotate();
void FishCatch_StateStart();
void PlayerActor_MainFtrPull();
void PlayerActor_MainFtrPushMove();
void FishCatch_Reset();
void PlayerActor_MainSeatApproach();
void PlayerActor_MainSitDownFront();
void PlayerActor_MainSitDownSide2();
void PlayerActor_MainSitDownSide1();
void PlayerActor_MainSit();
void PlayerActor_MainStandUpSide2();
void FishShadow_EnterSpawn();
void PlayerActor_MainStandUpCheck();
void PlayerActor_MainStandUpFront();
void PlayerActor_MainStorageOpen();
void PlayerActor_MainStorageHold();
void PlayerActor_MainStorageClose();
void _ZN12Unk_02006d149mainAct30Ev();
void _ZN12Unk_02006d149mainAct31Ev();
void _ZN12Unk_02006d149mainAct32Ev();
void _ZN12Unk_02006d149mainAct33Ev();
void _ZN12Unk_02006d149mainAct34Ev();
void _ZN12Unk_02006d149mainAct35Ev();
void PlayerActor_MainAct36();
void PlayerActor_MainAct37();
void PlayerActor_MainDoorApproach();
void PlayerActor_MainDoorEnter();
void PlayerActor_MainDoorEntered();
void PlayerActor_MainDoorExit();
void PlayerActor_MainAct3C();
void PlayerActor_MainStowItem();
void PlayerActor_MainStowUmbrella();
void _ZN12Unk_02006d1418mainChangeHeldItemEv();
void PlayerActor_MainLeaveRoom();
void PlayerActor_MainAct41();
void PlayerActor_MainAct42();
void PlayerActor_MainAct43();
void PlayerActor_MainAct44();
void PlayerActor_MainUmbrellaSpin();
void PlayerActor_MainAxeSwing();
void PlayerActor_MainAxeFollowThrough();
void PlayerActor_MainAct48();
void PlayerActor_MainAxeStrike();
void PlayerActor_MainAxeChop();
void PlayerActor_MainAxeBreak();
void PlayerActor_MainAxeBrokenMessage();
void PlayerActor_MainFishCast();
void PlayerActor_MainFishCastFail();
void PlayerActor_MainFishWait();
void PlayerActor_MainFishHook();
void PlayerActor_MainFishReelIn();
void PlayerActor_MainFishEscape();
void PlayerActor_MainFishLand();
void PlayerActor_MainFishShowCatch();
void PlayerActor_MainFishStore();
void PlayerActor_MainBugNetSwing();
void PlayerActor_MainInsectShowCatch();
void PlayerActor_MainInsectStore();
void PlayerActor_MainShovelReady();
void PlayerActor_MainShovelWait();
void PlayerActor_MainAct5B();
void PlayerActor_MainAct5C();
void PlayerActor_MainShovelStrike();
void PlayerActor_MainDig();
void PlayerActor_MainDigUpItem();
void PlayerActor_MainDugItemStore();
void PlayerActor_MainBuryItem();
void PlayerActor_MainFillHole();
void PlayerActor_MainWateringCan();
void PlayerActor_MainSlingshot();
void PlayerActor_MainAct65();
void PlayerActor_MainAct66();
void PlayerActor_MainAct67();
void PlayerActor_MainAct68();
void PlayerActor_MainAct69();
void PlayerActor_MainAct6A();
void PlayerActor_MainAct6B();
void PlayerActor_MainAct6C();
void PlayerActor_MainFaint();
void PlayerActor_MainAct6E();
void _ZN12Unk_02006d1410mainWalkToEv();
void _ZN12Unk_02006d1410mainTurnToEv();
void PlayerActor_MainTrip();
void PlayerActor_MainAct72();
void PlayerActor_MainPitfallFall();
void PlayerActor_MainPitfallStruggle();
void PlayerActor_MainPitfallClimbOut();
void _ZN12Unk_020080409mainAct76Ev();
void _ZN12Unk_020080409mainAct77Ev();
void PlayerActor_MainBeeSting();
void _ZN12Unk_020080409mainAct79Ev();
void FieldObj_LoadIconModels();
void PlayerActor_MainHaircutCut();
void PlayerActor_MainHaircutFinish();
void PlayerActor_MainPhonePickUp();
void PlayerActor_MainPhoneHold();
void PlayerActor_MainPhoneHangUp();
void PlayerActor_MainAct80();
void PlayerActor_MainAct81();
void PlayerActor_MainAct82();
void _ZN12Unk_0200804013mainLidClosedEv();
void _ZN12Unk_0200804016mainErrorMessageEv();
void _ZN12Unk_0200769414mainHoldUpItemEv();
void _ZN12Unk_0200769419mainLowerHeldUpItemEv();
void _ZN19PlayerActTaxiGetOut14mainTaxiGetOutEv();
void _ZN18PlayerActTaxiGetIn13mainTaxiGetInEv();
void PlayerActor_MainAct89();
void PlayerActor_MainDrinkCoffee();
void FieldObj_FreeCedarFileBufs();
void PlayerActor_MainDoorWalkOut();
void PlayerActor_MainExitWalkOut();
void PlayerActor_MainExitWalkIn();
void PlayerActor_MainFishRelease();
void _ZN12Unk_0200769412mainWaitMenuEv();
void _ZN12Unk_020076949mainAct91Ev();
void _ZN12Unk_020076949mainAct92Ev();
void _ZN11PlayerActor7netInitEv();
void _ZN11PlayerActor8netAct01Ej();
void _ZN11PlayerActor7netWaitEj();
void _ZN11PlayerActor7netWalkEv();
void _ZN12Unk_0200769411netSkidTurnEv();
void _ZN12Unk_020076948netAct05Ej();
void PlayerActor_NetReleaseCreature();
void _ZN12Unk_0200769416netChangeClothesEs();
void PlayerActor_NetLieInBed();
void PlayerActor_NetGetOutOfBedCheck();
void PlayerActor_NetGetOutOfBed();
void PlayerActor_NetBedRollCheck();
void PlayerActor_NetBedRollBlocked();
void PlayerActor_NetBedRoll();
void PlayerActor_NetBedApproach();
void PlayerActor_NetGetIntoBed();
void _ZN12Unk_02006d148netAct10Ej();
void PlayerActor_NetAct11();
void PlayerActor_NetAct12();
void _ZN12Unk_02006d148netAct13Ej();
void _ZN12Unk_02006d1410netEmotionEs();
void _ZN12Unk_02006d148netAct15Ej();
void PlayerActor_NetPluckReach();
void PlayerActor_NetPluck();
void _ZN12Unk_02006d1414netPickUpReachEs();
void _ZN12Unk_02006d149netPickUpEs();
void _ZN12Unk_02006d1416netPickUpFanfareEs();
void _ZN12Unk_02006d1420netPickUpFanfareStowEs();
void PlayerActor_NetPickUpItem();
void PlayerActor_NetFtrGrabApproach();
void PlayerActor_NetFtrHold();
void PlayerActor_NetFtrRotate();
void PlayerActor_NetFtrPush();
void PlayerActor_NetFtrPull();
void PlayerActor_NetFtrPushMove();
void PlayerActor_NetFtrPullMove();
void PlayerActor_NetSeatApproach();
void PlayerActor_NetSitDownFront();
void PlayerActor_NetSitDownSide2();
void PlayerActor_NetSitDownSide1();
void PlayerActor_NetSit();
void PlayerActor_NetStandUpSide2();
void PlayerActor_NetStandUpSide1();
void PlayerActor_NetStandUpCheck();
void PlayerActor_NetStandUpFront();
void PlayerActor_NetStorageOpen();
void PlayerActor_NetStorageHold();
void PlayerActor_NetStorageClose();
void _ZN12Unk_02006d148netAct30Ev();
void _ZN12Unk_02006d148netAct31Ev();
void _ZN12Unk_02006d148netAct32Ej();
void _ZN12Unk_02006d148netAct33Ev();
void _ZN12Unk_02006d148netAct34Ev();
void _ZN12Unk_02006d148netAct35Ev();
void PlayerActor_NetAct36();
void PlayerActor_NetAct37();
void PlayerActor_NetDoorApproach();
void PlayerActor_NetDoorEnter();
void PlayerActor_NetDoorEntered();
void PlayerActor_NetDoorExit();
void PlayerActor_NetAct3C();
void PlayerActor_NetStowItem();
void PlayerActor_NetStowUmbrella();
void _ZN12Unk_02006d1417netChangeHeldItemEj();
void PlayerActor_NetLeaveRoom();
void PlayerActor_NetAct41();
void PlayerActor_NetAct42();
void PlayerActor_NetAct43();
void FieldObjectManager_Create();
void PlayerActor_NetUmbrellaSpin();
void PlayerActor_NetAxeSwing();
void PlayerActor_NetAxeFollowThrough();
void PlayerActor_NetAct48();
void PlayerActor_NetAxeStrike();
void PlayerActor_NetAxeChop();
void PlayerActor_NetAxeBreak();
void PlayerActor_NetAxeBrokenMessage();
void PlayerActor_NetFishCast();
void PlayerActor_NetFishCastFail();
void PlayerActor_NetFishWait();
void PlayerActor_NetFishHook();
void PlayerActor_NetFishReelIn();
void PlayerActor_NetFishEscape();
void PlayerActor_NetFishLand();
void PlayerActor_NetFishShowCatch();
void PlayerActor_NetFishStore();
void PlayerActor_NetBugNetSwing();
void PlayerActor_NetInsectShowCatch();
void PlayerActor_NetInsectStore();
void PlayerActor_NetShovelReady();
void PlayerActor_NetShovelWait();
void PlayerActor_NetAct5B();
void PlayerActor_NetAct5C();
void PlayerActor_NetShovelStrike();
void PlayerActor_NetDig();
void PlayerActor_NetDigUpItem();
void PlayerActor_NetDugItemStore();
void PlayerActor_NetBuryItem();
void PlayerActor_NetFillHole();
void PlayerActor_NetWateringCan();
void PlayerActor_NetSlingshot();
void PlayerActor_NetAct65();
void PlayerActor_NetAct66();
void PlayerActor_NetAct67();
void PlayerActor_NetAct68();
void PlayerActor_NetAct69();
void PlayerActor_NetAct6A();
void PlayerActor_NetAct6B();
void PlayerActor_NetAct6C();
void PlayerActor_NetFaint();
void PlayerActor_NetAct6E();
void _ZN12Unk_02006d149netWalkToEv();
void _ZN12Unk_02006d149netTurnToEv();
void PlayerActor_NetTrip();
void PlayerActor_NetAct72();
void PlayerActor_NetPitfallFall();
void PlayerActor_NetPitfallStruggle();
void PlayerActor_NetPitfallClimbOut();
void _ZN12Unk_02006d148netAct76Es();
void _ZN12Unk_020080408netAct77Ej();
void PlayerActor_NetBeeSting();
void _ZN12Unk_020080408netAct79Ej();
void PlayerActor_NetHaircutStart();
void PlayerActor_NetHaircutCut();
void PlayerActor_NetHaircutFinish();
void PlayerActor_NetPhonePickUp();
void PlayerActor_NetPhoneHold();
void PlayerActor_NetPhoneHangUp();
void PlayerActor_NetAct80();
void PlayerActor_NetAct81();
void PlayerActor_NetAct82();
void _ZN12Unk_0200804012netLidClosedEj();
void _ZN12Unk_0200804015netErrorMessageEj();
void _ZN12Unk_0200804013netHoldUpItemEPv();
void _ZN12Unk_0200769418netLowerHeldUpItemEj();
void _ZN19PlayerActTaxiGetOut13netTaxiGetOutEv();
void _ZN18PlayerActTaxiGetIn12netTaxiGetInEv();
void PlayerActor_NetAct89();
void PlayerActor_NetDrinkCoffee();
void PlayerActor_NetDoorWalkIn();
void PlayerActor_NetDoorWalkOut();
void PlayerActor_NetExitWalkOut();
void PlayerActor_NetExitWalkIn();
void PlayerActor_NetFishRelease();
void _ZN12Unk_0200769411netWaitMenuEj();
void _ZN12Unk_020076948netAct91Ev();
void _ZN12Unk_020076948netAct92Ev();
void _ZN11PlayerActor9setupInitEP17Unk_0200d53c_Item();
void _ZN11PlayerActor10setupAct01EP17Unk_02006d14_Itemj();
void _ZN11PlayerActor9setupWaitEP17Unk_02006d14_Itemj();
void _ZN11PlayerActor9setupWalkEP17Unk_02006d14_Itemj();
void _ZN12Unk_0200769413setupSkidTurnEP19PlayerActionRequest();
void _ZN12Unk_0200769410setupAct05EP19PlayerActionRequest();
void PlayerActor_SetupReleaseCreature();
void _ZN12Unk_0200769418setupChangeClothesEP19PlayerActionRequest();
void PlayerActor_SetupLieInBed();
void PlayerActor_SetupGetOutOfBedCheck();
void PlayerActor_SetupGetOutOfBed();
void PlayerActor_SetupBedRollCheck();
void PlayerActor_SetupBedRollBlocked();
void PlayerActor_SetupBedRoll();
void PlayerActor_SetupBedApproach();
void PlayerActor_SetupGetIntoBed();
void _ZN12Unk_02006d1410setupAct10EP17Unk_02006d14_Itemj();
void PlayerActor_SetupAct11();
void PlayerActor_SetupAct12();
void _ZN12Unk_02006d1410setupAct13EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1412setupEmotionEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct15EP17Unk_02006d14_Itemj();
void PlayerActor_SetupPluckReach();
void PlayerActor_SetupPluck();
void _ZN12Unk_02006d1416setupPickUpReachEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1411setupPickUpEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1418setupPickUpFanfareEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1422setupPickUpFanfareStowEP17Unk_02006d14_Itemj();
void PlayerActor_SetupPickUpItem();
void PlayerActor_SetupFtrGrabApproach();
void PlayerActor_SetupFtrHold();
void PlayerActor_SetupFtrRotate();
void PlayerActor_SetupFtrPush();
void PlayerActor_SetupFtrPull();
void PlayerActor_SetupFtrPushMove();
void PlayerActor_SetupFtrPullMove();
void PlayerActor_SetupSeatApproach();
void PlayerActor_SetupSitDownFront();
void PlayerActor_SetupSitDownSide2();
void PlayerActor_SetupSitDownSide1();
void PlayerActor_SetupSit();
void PlayerActor_SetupStandUpSide2();
void PlayerActor_SetupStandUpSide1();
void PlayerActor_SetupStandUpCheck();
void PlayerActor_SetupStandUpFront();
void PlayerActor_SetupStorageOpen();
void PlayerActor_SetupStorageHold();
void PlayerActor_SetupStorageClose();
void _ZN12Unk_02006d1410setupAct30EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct31EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct32EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct33EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct34EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1410setupAct35EP17Unk_02006d14_Itemj();
void PlayerActor_SetupAct36();
void PlayerActor_SetupAct37();
void PlayerActor_SetupDoorApproach();
void PlayerActor_SetupDoorEnter();
void PlayerActor_SetupDoorEntered();
void PlayerActor_SetupDoorExit();
void PlayerActor_SetupAct3C();
void PlayerActor_SetupStowItem();
void PlayerActor_SetupStowUmbrella();
void _ZN12Unk_02006d1419setupChangeHeldItemEP17Unk_02006d14_Itemj();
void PlayerActor_SetupLeaveRoom();
void PlayerActor_SetupAct41();
void PlayerActor_SetupAct42();
void PlayerActor_SetupAct43();
void PlayerActor_SetupAct44();
void PlayerActor_SetupUmbrellaSpin();
void PlayerActor_SetupAxeSwing();
void PlayerActor_SetupAxeFollowThrough();
void PlayerActor_SetupAct48();
void PlayerActor_SetupAxeStrike();
void PlayerActor_SetupAxeChop();
void PlayerActor_SetupAxeBreak();
void PlayerActor_SetupAxeBrokenMessage();
void PlayerActor_SetupFishCast();
void PlayerActor_SetupFishCastFail();
void PlayerActor_SetupFishWait();
void PlayerActor_SetupFishHook();
void PlayerActor_SetupFishReelIn();
void PlayerActor_SetupFishEscape();
void PlayerActor_SetupFishLand();
void PlayerActor_SetupFishShowCatch();
void PlayerActor_SetupFishStore();
void PlayerActor_SetupBugNetSwing();
void PlayerActor_SetupInsectShowCatch();
void PlayerActor_SetupInsectStore();
void PlayerActor_SetupShovelReady();
void PlayerActor_SetupShovelWait();
void PlayerActor_SetupAct5B();
void PlayerActor_SetupAct5C();
void PlayerActor_SetupShovelStrike();
void PlayerActor_SetupDig();
void PlayerActor_SetupDigUpItem();
void PlayerActor_SetupDugItemStore();
void PlayerActor_SetupBuryItem();
void PlayerActor_SetupFillHole();
void PlayerActor_SetupWateringCan();
void PlayerActor_SetupSlingshot();
void PlayerActor_SetupAct65();
void PlayerActor_SetupAct66();
void PlayerActor_SetupAct67();
void PlayerActor_SetupAct68();
void PlayerActor_SetupAct69();
void PlayerActor_SetupAct6A();
void PlayerActor_SetupAct6B();
void PlayerActor_SetupAct6C();
void PlayerActor_SetupFaint();
void PlayerActor_SetupAct6E();
void _ZN12Unk_02006d1411setupWalkToEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1411setupTurnToEP17Unk_02006d14_Itemj();
void PlayerActor_SetupTrip();
void PlayerActor_SetupAct72();
void PlayerActor_SetupPitfallFall();
void PlayerActor_SetupPitfallStruggle();
void PlayerActor_SetupPitfallClimbOut();
void _ZN12Unk_02006d1410setupAct76EP17Unk_02006d14_Itemj();
void _ZN12Unk_0200804010setupAct77EPh();
void PlayerActor_SetupBeeSting();
void _ZN12Unk_0200804010setupAct79Ev();
void PlayerActor_SetupHaircutStart();
void FieldObj_LoadStones();
void PlayerActor_SetupHaircutFinish();
void PlayerActor_SetupPhonePickUp();
void PlayerActor_SetupPhoneHold();
void PlayerActor_SetupPhoneHangUp();
void PlayerActor_SetupAct80();
void PlayerActor_SetupAct81();
void PlayerActor_SetupAct82();
void _ZN12Unk_0200804014setupLidClosedEjj();
void _ZN12Unk_0200804017setupErrorMessageEPh();
void _ZN12Unk_0200804015setupHoldUpItemEv();
void _ZN12Unk_0200769420setupLowerHeldUpItemEv();
void _ZN19PlayerActTaxiGetOut15setupTaxiGetOutEv();
void _ZN18PlayerActTaxiGetIn14setupTaxiGetInEv();
void PlayerActor_SetupAct89();
void PlayerActor_SetupDrinkCoffee();
void PlayerActor_SetupDoorWalkIn();
void PlayerActor_SetupDoorWalkOut();
void PlayerActor_SetupExitWalkOut();
void PlayerActor_SetupExitWalkIn();
void PlayerActor_SetupFishRelease();
void _ZN12Unk_0200769413setupWaitMenuEP19PlayerActionRequest();
void _ZN12Unk_0200769410setupAct91Ev();
void _ZN12Unk_0200769410setupAct92Ev();
void _ZN11PlayerActor7endInitEj();
void _ZN11PlayerActor8endAct01Ev();
void _ZN11PlayerActor7endWaitEv();
void _ZN12Unk_0200769411endSkidTurnEj();
void PlayerActor_EndReleaseCreature();
void _ZN12Unk_0200769416endChangeClothesEj();
void PlayerActor_EndLieInBed();
void PlayerActor_EndGetOutOfBed();
void PlayerActor_EndBedRoll();
void PlayerActor_EndBedApproach();
void PlayerActor_EndGetIntoBed();
void _ZN12Unk_02006d1410endEmotionEv();
void PlayerActor_EndPluck();
void _ZN12Unk_02006d149endPickUpEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1416endPickUpFanfareEv();
void PlayerActor_EndFtrGrabApproach();
void PlayerActor_EndFtrPushMove();
void PlayerActor_EndFtrPullMove();
void PlayerActor_EndSeatApproach();
void PlayerActor_EndSitDownFront();
void PlayerActor_EndSitDownSide2();
void PlayerActor_EndSitDownSide1();
void PlayerActor_EndSit();
void PlayerActor_EndStandUpSide2();
void PlayerActor_EndStandUpSide1();
void PlayerActor_EndStandUpFront();
void PlayerActor_EndAct3C();
void PlayerActor_EndStowItem();
void _ZN12Unk_02006d1417endChangeHeldItemEv();
void PlayerActor_EndUmbrellaSpin();
void PlayerActor_EndAxeStrike();
void PlayerActor_EndAxeChop();
void PlayerActor_EndAxeBreak();
void PlayerActor_EndAxeBrokenMessage();
void PlayerActor_EndFishWait();
void PlayerActor_EndInsectShowCatch();
void PlayerActor_EndInsectStore();
void PlayerActor_EndShovelStrike();
void PlayerActor_EndDig();
void PlayerActor_EndDigUpItem();
void PlayerActor_EndFillHole();
void PlayerActor_EndWateringCan();
void PlayerActor_EndAct66();
void PlayerActor_EndAct68();
void PlayerActor_EndPitfallFall();
void PlayerActor_EndPitfallStruggle();
void PlayerActor_EndHaircutFinish();
void PlayerActor_EndAct80();
void PlayerActor_EndAct81();
void PlayerActor_EndAct82();
void _ZN19PlayerActTaxiGetOut13endTaxiGetOutEv();
void _ZN18PlayerActTaxiGetIn12endTaxiGetInEv();
void _ZN12Unk_020076948endAct91Ev();
}
}

namespace nA {
extern "C" {
PM_02004ce8 data_020d5fbc = {{(PMF)nPM::_ZN11PlayerActor12drawNotReadyEv, 0}};
PM_02004ce8 data_020d5ff4 = {{(PMF)nPM::_ZN11PlayerActor9drawReadyEv, 0}};
}
}

namespace nB {
extern "C" {
PM_02005294 data_020d6734 = {{(PMF)nPM::_ZN11PlayerActor8mainInitEv, 0}};
PM_02005294 data_020d6724 = {{(PMF)nPM::_ZN11PlayerActor9mainAct01Ev, 0}};
PM_02005294 data_020d5fd4 = {{(PMF)nPM::_ZN11PlayerActor8mainWaitEv, 0}};
PM_02005294 data_020d6244 = {{(PMF)nPM::_ZN12Unk_020076948mainWalkEv, 0}};
PM_02005294 data_020d623c = {{(PMF)nPM::_ZN12Unk_0200769412mainSkidTurnEv, 0}};
PM_02005294 data_020d6234 = {{(PMF)nPM::_ZN12Unk_020076949mainAct05Ev, 0}};
PM_02005294 data_020d622c = {{(PMF)nPM::PlayerActor_MainReleaseCreature, 0}};
PM_02005294 data_020d6224 = {{(PMF)nPM::_ZN12Unk_02006d1417mainChangeClothesEv, 0}};
PM_02005294 data_020d621c = {{(PMF)nPM::PlayerActor_MainLieInBed, 0}};
PM_02005294 data_020d6214 = {{(PMF)nPM::PlayerActor_MainGetOutOfBedCheck, 0}};
PM_02005294 data_020d619c = {{(PMF)nPM::PlayerActor_MainGetOutOfBed, 0}};
PM_02005294 data_020d6204 = {{(PMF)nPM::PlayerActor_MainBedRollCheck, 0}};
PM_02005294 data_020d61fc = {{(PMF)nPM::PlayerActor_MainBedRollBlocked, 0}};
PM_02005294 data_020d61f4 = {{(PMF)nPM::PlayerActor_MainBedRoll, 0}};
PM_02005294 data_020d61c4 = {{(PMF)nPM::PlayerActor_MainBedApproach, 0}};
PM_02005294 data_020d61dc = {{(PMF)nPM::PlayerActor_MainGetIntoBed, 0}};
PM_02005294 data_020d61e4 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct10Ev, 0}};
PM_02005294 data_020d658c = {{(PMF)nPM::PlayerActor_MainAct11, 0}};
PM_02005294 data_020d6b94 = {{(PMF)nPM::PlayerActor_MainAct12, 0}};
PM_02005294 data_020d6604 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct13Ev, 0}};
PM_02005294 data_020d65bc = {{(PMF)nPM::_ZN12Unk_02006d1411mainEmotionEv, 0}};
PM_02005294 data_020d65e4 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct15Ev, 0}};
PM_02005294 data_020d660c = {{(PMF)nPM::PlayerActor_MainPluckReach, 0}};
PM_02005294 data_020d672c = {{(PMF)nPM::PlayerActor_MainPluck, 0}};
PM_02005294 data_020d676c = {{(PMF)nPM::_ZN12Unk_02006d1415mainPickUpReachEP17Unk_02006d14_Itemj, 0}};
PM_02005294 data_020d6db4 = {{(PMF)nPM::_ZN12Unk_02006d1410mainPickUpEv, 0}};
PM_02005294 data_020d6d8c = {{(PMF)nPM::_ZN12Unk_02006d1417mainPickUpFanfareEv, 0}};
PM_02005294 data_020d6184 = {{(PMF)nPM::_ZN12Unk_02006d1421mainPickUpFanfareStowEv, 0}};
PM_02005294 data_020d617c = {{(PMF)nPM::PlayerActor_MainPickUpItem, 0}};
PM_02005294 data_020d6174 = {{(PMF)nPM::PlayerActor_MainFtrGrabApproach, 0}};
PM_02005294 data_020d616c = {{(PMF)nPM::PlayerActor_MainFtrHold, 0}};
PM_02005294 data_020d6164 = {{(PMF)nPM::PlayerActor_MainFtrRotate, 0}};
PM_02005294 data_020d615c = {{(PMF)nPM::FishCatch_StateStart, 0}};
PM_02005294 data_020d6154 = {{(PMF)nPM::PlayerActor_MainFtrPull, 0}};
PM_02005294 data_020d614c = {{(PMF)nPM::PlayerActor_MainFtrPushMove, 0}};
PM_02005294 data_020d6144 = {{(PMF)nPM::FishCatch_Reset, 0}};
PM_02005294 data_020d613c = {{(PMF)nPM::PlayerActor_MainSeatApproach, 0}};
PM_02005294 data_020d6134 = {{(PMF)nPM::PlayerActor_MainSitDownFront, 0}};
PM_02005294 data_020d612c = {{(PMF)nPM::PlayerActor_MainSitDownSide2, 0}};
PM_02005294 data_020d64bc = {{(PMF)nPM::PlayerActor_MainSitDownSide1, 0}};
PM_02005294 data_020d64ac = {{(PMF)nPM::PlayerActor_MainSit, 0}};
PM_02005294 data_020d6114 = {{(PMF)nPM::PlayerActor_MainStandUpSide2, 0}};
PM_02005294 data_020d5e5c = {{(PMF)nPM::FishShadow_EnterSpawn, 0}};
PM_02005294 data_020d6104 = {{(PMF)nPM::PlayerActor_MainStandUpCheck, 0}};
PM_02005294 data_020d60fc = {{(PMF)nPM::PlayerActor_MainStandUpFront, 0}};
PM_02005294 data_020d60f4 = {{(PMF)nPM::PlayerActor_MainStorageOpen, 0}};
PM_02005294 data_020d60ec = {{(PMF)nPM::PlayerActor_MainStorageHold, 0}};
PM_02005294 data_020d60e4 = {{(PMF)nPM::PlayerActor_MainStorageClose, 0}};
PM_02005294 data_020d60dc = {{(PMF)nPM::_ZN12Unk_02006d149mainAct30Ev, 0}};
PM_02005294 data_020d60d4 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct31Ev, 0}};
PM_02005294 data_020d60cc = {{(PMF)nPM::_ZN12Unk_02006d149mainAct32Ev, 0}};
PM_02005294 data_020d60c4 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct33Ev, 0}};
PM_02005294 data_020d60bc = {{(PMF)nPM::_ZN12Unk_02006d149mainAct34Ev, 0}};
PM_02005294 data_020d60b4 = {{(PMF)nPM::_ZN12Unk_02006d149mainAct35Ev, 0}};
PM_02005294 data_020d60ac = {{(PMF)nPM::PlayerActor_MainAct36, 0}};
PM_02005294 data_020d60a4 = {{(PMF)nPM::PlayerActor_MainAct37, 0}};
PM_02005294 data_020d609c = {{(PMF)nPM::PlayerActor_MainDoorApproach, 0}};
PM_02005294 data_020d6094 = {{(PMF)nPM::PlayerActor_MainDoorEnter, 0}};
PM_02005294 data_020d5eac = {{(PMF)nPM::PlayerActor_MainDoorEntered, 0}};
PM_02005294 data_020d6084 = {{(PMF)nPM::PlayerActor_MainDoorExit, 0}};
PM_02005294 data_020d607c = {{(PMF)nPM::PlayerActor_MainAct3C, 0}};
PM_02005294 data_020d6074 = {{(PMF)nPM::PlayerActor_MainStowItem, 0}};
PM_02005294 data_020d606c = {{(PMF)nPM::PlayerActor_MainStowUmbrella, 0}};
PM_02005294 data_020d6064 = {{(PMF)nPM::_ZN12Unk_02006d1418mainChangeHeldItemEv, 0}};
PM_02005294 data_020d605c = {{(PMF)nPM::PlayerActor_MainLeaveRoom, 0}};
PM_02005294 data_020d6054 = {{(PMF)nPM::PlayerActor_MainAct41, 0}};
PM_02005294 data_020d604c = {{(PMF)nPM::PlayerActor_MainAct42, 0}};
PM_02005294 data_020d6044 = {{(PMF)nPM::PlayerActor_MainAct43, 0}};
PM_02005294 data_020d603c = {{(PMF)nPM::PlayerActor_MainAct44, 0}};
PM_02005294 data_020d6034 = {{(PMF)nPM::PlayerActor_MainUmbrellaSpin, 0}};
PM_02005294 data_020d602c = {{(PMF)nPM::PlayerActor_MainAxeSwing, 0}};
PM_02005294 data_020d6024 = {{(PMF)nPM::PlayerActor_MainAxeFollowThrough, 0}};
PM_02005294 data_020d601c = {{(PMF)nPM::PlayerActor_MainAct48, 0}};
PM_02005294 data_020d6014 = {{(PMF)nPM::PlayerActor_MainAxeStrike, 0}};
PM_02005294 data_020d600c = {{(PMF)nPM::PlayerActor_MainAxeChop, 0}};
PM_02005294 data_020d6284 = {{(PMF)nPM::PlayerActor_MainAxeBreak, 0}};
PM_02005294 data_020d5fc4 = {{(PMF)nPM::PlayerActor_MainAxeBrokenMessage, 0}};
PM_02005294 data_020d625c = {{(PMF)nPM::PlayerActor_MainFishCast, 0}};
PM_02005294 data_020d6254 = {{(PMF)nPM::PlayerActor_MainFishCastFail, 0}};
PM_02005294 data_020d5fe4 = {{(PMF)nPM::PlayerActor_MainFishWait, 0}};
PM_02005294 data_020d5fec = {{(PMF)nPM::PlayerActor_MainFishHook, 0}};
PM_02005294 data_020d6194 = {{(PMF)nPM::PlayerActor_MainFishReelIn, 0}};
PM_02005294 data_020d61a4 = {{(PMF)nPM::PlayerActor_MainFishEscape, 0}};
PM_02005294 data_020d61bc = {{(PMF)nPM::PlayerActor_MainFishLand, 0}};
PM_02005294 data_020d61cc = {{(PMF)nPM::PlayerActor_MainFishShowCatch, 0}};
PM_02005294 data_020d61ec = {{(PMF)nPM::PlayerActor_MainFishStore, 0}};
PM_02005294 data_020d6594 = {{(PMF)nPM::PlayerActor_MainBugNetSwing, 0}};
PM_02005294 data_020d65f4 = {{(PMF)nPM::PlayerActor_MainInsectShowCatch, 0}};
PM_02005294 data_020d668c = {{(PMF)nPM::PlayerActor_MainInsectStore, 0}};
PM_02005294 data_020d698c = {{(PMF)nPM::PlayerActor_MainShovelReady, 0}};
PM_02005294 data_020d6d9c = {{(PMF)nPM::PlayerActor_MainShovelWait, 0}};
PM_02005294 data_020d5f84 = {{(PMF)nPM::PlayerActor_MainAct5B, 0}};
PM_02005294 data_020d5f7c = {{(PMF)nPM::PlayerActor_MainAct5C, 0}};
PM_02005294 data_020d5f74 = {{(PMF)nPM::PlayerActor_MainShovelStrike, 0}};
PM_02005294 data_020d5f6c = {{(PMF)nPM::PlayerActor_MainDig, 0}};
PM_02005294 data_020d5f64 = {{(PMF)nPM::PlayerActor_MainDigUpItem, 0}};
PM_02005294 data_020d5f5c = {{(PMF)nPM::PlayerActor_MainDugItemStore, 0}};
PM_02005294 data_020d6124 = {{(PMF)nPM::PlayerActor_MainBuryItem, 0}};
PM_02005294 data_020d5e64 = {{(PMF)nPM::PlayerActor_MainFillHole, 0}};
PM_02005294 data_020d5f44 = {{(PMF)nPM::PlayerActor_MainWateringCan, 0}};
PM_02005294 data_020d5f3c = {{(PMF)nPM::PlayerActor_MainSlingshot, 0}};
PM_02005294 data_020d5f34 = {{(PMF)nPM::PlayerActor_MainAct65, 0}};
PM_02005294 data_020d5f2c = {{(PMF)nPM::PlayerActor_MainAct66, 0}};
PM_02005294 data_020d5f24 = {{(PMF)nPM::PlayerActor_MainAct67, 0}};
PM_02005294 data_020d5f1c = {{(PMF)nPM::PlayerActor_MainAct68, 0}};
PM_02005294 data_020d5f14 = {{(PMF)nPM::PlayerActor_MainAct69, 0}};
PM_02005294 data_020d5eb4 = {{(PMF)nPM::PlayerActor_MainAct6A, 0}};
PM_02005294 data_020d5f04 = {{(PMF)nPM::PlayerActor_MainAct6B, 0}};
PM_02005294 data_020d5efc = {{(PMF)nPM::PlayerActor_MainAct6C, 0}};
PM_02005294 data_020d5ef4 = {{(PMF)nPM::PlayerActor_MainFaint, 0}};
PM_02005294 data_020d5ed4 = {{(PMF)nPM::PlayerActor_MainAct6E, 0}};
PM_02005294 data_020d5eec = {{(PMF)nPM::_ZN12Unk_02006d1410mainWalkToEv, 0}};
PM_02005294 data_020d5f8c = {{(PMF)nPM::_ZN12Unk_02006d1410mainTurnToEv, 0}};
PM_02005294 data_020d5f9c = {{(PMF)nPM::PlayerActor_MainTrip, 0}};
PM_02005294 data_020d5fa4 = {{(PMF)nPM::PlayerActor_MainAct72, 0}};
PM_02005294 data_020d6004 = {{(PMF)nPM::PlayerActor_MainPitfallFall, 0}};
PM_02005294 data_020d6264 = {{(PMF)nPM::PlayerActor_MainPitfallStruggle, 0}};
PM_02005294 data_020d618c = {{(PMF)nPM::PlayerActor_MainPitfallClimbOut, 0}};
PM_02005294 data_020d61ac = {{(PMF)nPM::_ZN12Unk_020080409mainAct76Ev, 0}};
PM_02005294 data_020d61d4 = {{(PMF)nPM::_ZN12Unk_020080409mainAct77Ev, 0}};
PM_02005294 data_020d659c = {{(PMF)nPM::PlayerActor_MainBeeSting, 0}};
PM_02005294 data_020d65c4 = {{(PMF)nPM::_ZN12Unk_020080409mainAct79Ev, 0}};
PM_02005294 data_020d6dcc = {{(PMF)nPM::FieldObj_LoadIconModels, 0}};
PM_02005294 data_020d5e84 = {{(PMF)nPM::PlayerActor_MainHaircutCut, 0}};
PM_02005294 data_020d5e7c = {{(PMF)nPM::PlayerActor_MainHaircutFinish, 0}};
PM_02005294 data_020d5e74 = {{(PMF)nPM::PlayerActor_MainPhonePickUp, 0}};
PM_02005294 data_020d64b4 = {{(PMF)nPM::PlayerActor_MainPhoneHold, 0}};
PM_02005294 data_020d5e8c = {{(PMF)nPM::PlayerActor_MainPhoneHangUp, 0}};
PM_02005294 data_020d5e94 = {{(PMF)nPM::PlayerActor_MainAct80, 0}};
PM_02005294 data_020d5ea4 = {{(PMF)nPM::PlayerActor_MainAct81, 0}};
PM_02005294 data_020d5ebc = {{(PMF)nPM::PlayerActor_MainAct82, 0}};
PM_02005294 data_020d5ecc = {{(PMF)nPM::_ZN12Unk_0200804013mainLidClosedEv, 0}};
PM_02005294 data_020d5edc = {{(PMF)nPM::_ZN12Unk_0200804016mainErrorMessageEv, 0}};
PM_02005294 data_020d5f94 = {{(PMF)nPM::_ZN12Unk_0200769414mainHoldUpItemEv, 0}};
PM_02005294 data_020d5fac = {{(PMF)nPM::_ZN12Unk_0200769419mainLowerHeldUpItemEv, 0}};
PM_02005294 data_020d5fdc = {{(PMF)nPM::_ZN19PlayerActTaxiGetOut14mainTaxiGetOutEv, 0}};
PM_02005294 data_020d61b4 = {{(PMF)nPM::_ZN18PlayerActTaxiGetIn13mainTaxiGetInEv, 0}};
PM_02005294 data_020d65a4 = {{(PMF)nPM::PlayerActor_MainAct89, 0}};
PM_02005294 data_020d6994 = {{(PMF)nPM::PlayerActor_MainDrinkCoffee, 0}};
PM_02005294 data_020d5e54 = {{(PMF)nPM::FieldObj_FreeCedarFileBufs, 0}};
PM_02005294 data_020d611c = {{(PMF)nPM::PlayerActor_MainDoorWalkOut, 0}};
PM_02005294 data_020d5e9c = {{(PMF)nPM::PlayerActor_MainExitWalkOut, 0}};
PM_02005294 data_020d5ec4 = {{(PMF)nPM::PlayerActor_MainExitWalkIn, 0}};
PM_02005294 data_020d5ee4 = {{(PMF)nPM::PlayerActor_MainFishRelease, 0}};
PM_02005294 data_020d5fb4 = {{(PMF)nPM::_ZN12Unk_0200769412mainWaitMenuEv, 0}};
PM_02005294 data_020d6274 = {{(PMF)nPM::_ZN12Unk_020076949mainAct91Ev, 0}};
PM_02005294 data_020d65ac = {{(PMF)nPM::_ZN12Unk_020076949mainAct92Ev, 0}};
}
}

namespace nC {
extern "C" {
PM_020063a0 data_020d671c = {{(PMF)nPM::_ZN11PlayerActor7netInitEv, 0}};
PM_020063a0 data_020d624c = {{(PMF)nPM::_ZN11PlayerActor8netAct01Ej, 0}};
PM_020063a0 data_020d5fcc = {{(PMF)nPM::_ZN11PlayerActor7netWaitEj, 0}};
PM_020063a0 data_020d6704 = {{(PMF)nPM::_ZN11PlayerActor7netWalkEv, 0}};
PM_020063a0 data_020d66fc = {{(PMF)nPM::_ZN12Unk_0200769411netSkidTurnEv, 0}};
PM_020063a0 data_020d66f4 = {{(PMF)nPM::_ZN12Unk_020076948netAct05Ej, 0}};
PM_020063a0 data_020d66ec = {{(PMF)nPM::PlayerActor_NetReleaseCreature, 0}};
PM_020063a0 data_020d66e4 = {{(PMF)nPM::_ZN12Unk_0200769416netChangeClothesEs, 0}};
PM_020063a0 data_020d66dc = {{(PMF)nPM::PlayerActor_NetLieInBed, 0}};
PM_020063a0 data_020d66d4 = {{(PMF)nPM::PlayerActor_NetGetOutOfBedCheck, 0}};
PM_020063a0 data_020d66cc = {{(PMF)nPM::PlayerActor_NetGetOutOfBed, 0}};
PM_020063a0 data_020d66c4 = {{(PMF)nPM::PlayerActor_NetBedRollCheck, 0}};
PM_020063a0 data_020d66bc = {{(PMF)nPM::PlayerActor_NetBedRollBlocked, 0}};
PM_020063a0 data_020d66b4 = {{(PMF)nPM::PlayerActor_NetBedRoll, 0}};
PM_020063a0 data_020d66ac = {{(PMF)nPM::PlayerActor_NetBedApproach, 0}};
PM_020063a0 data_020d66a4 = {{(PMF)nPM::PlayerActor_NetGetIntoBed, 0}};
PM_020063a0 data_020d669c = {{(PMF)nPM::_ZN12Unk_02006d148netAct10Ej, 0}};
PM_020063a0 data_020d6694 = {{(PMF)nPM::PlayerActor_NetAct11, 0}};
PM_020063a0 data_020d620c = {{(PMF)nPM::PlayerActor_NetAct12, 0}};
PM_020063a0 data_020d6684 = {{(PMF)nPM::_ZN12Unk_02006d148netAct13Ej, 0}};
PM_020063a0 data_020d667c = {{(PMF)nPM::_ZN12Unk_02006d1410netEmotionEs, 0}};
PM_020063a0 data_020d6674 = {{(PMF)nPM::_ZN12Unk_02006d148netAct15Ej, 0}};
PM_020063a0 data_020d666c = {{(PMF)nPM::PlayerActor_NetPluckReach, 0}};
PM_020063a0 data_020d6664 = {{(PMF)nPM::PlayerActor_NetPluck, 0}};
PM_020063a0 data_020d665c = {{(PMF)nPM::_ZN12Unk_02006d1414netPickUpReachEs, 0}};
PM_020063a0 data_020d6654 = {{(PMF)nPM::_ZN12Unk_02006d149netPickUpEs, 0}};
PM_020063a0 data_020d664c = {{(PMF)nPM::_ZN12Unk_02006d1416netPickUpFanfareEs, 0}};
PM_020063a0 data_020d6644 = {{(PMF)nPM::_ZN12Unk_02006d1420netPickUpFanfareStowEs, 0}};
PM_020063a0 data_020d663c = {{(PMF)nPM::PlayerActor_NetPickUpItem, 0}};
PM_020063a0 data_020d6634 = {{(PMF)nPM::PlayerActor_NetFtrGrabApproach, 0}};
PM_020063a0 data_020d662c = {{(PMF)nPM::PlayerActor_NetFtrHold, 0}};
PM_020063a0 data_020d6624 = {{(PMF)nPM::PlayerActor_NetFtrRotate, 0}};
PM_020063a0 data_020d661c = {{(PMF)nPM::PlayerActor_NetFtrPush, 0}};
PM_020063a0 data_020d6614 = {{(PMF)nPM::PlayerActor_NetFtrPull, 0}};
PM_020063a0 data_020d5f54 = {{(PMF)nPM::PlayerActor_NetFtrPushMove, 0}};
PM_020063a0 data_020d5e6c = {{(PMF)nPM::PlayerActor_NetFtrPullMove, 0}};
PM_020063a0 data_020d6be4 = {{(PMF)nPM::PlayerActor_NetSeatApproach, 0}};
PM_020063a0 data_020d65b4 = {{(PMF)nPM::PlayerActor_NetSitDownFront, 0}};
PM_020063a0 data_020d65cc = {{(PMF)nPM::PlayerActor_NetSitDownSide2, 0}};
PM_020063a0 data_020d65d4 = {{(PMF)nPM::PlayerActor_NetSitDownSide1, 0}};
PM_020063a0 data_020d65dc = {{(PMF)nPM::PlayerActor_NetSit, 0}};
PM_020063a0 data_020d65ec = {{(PMF)nPM::PlayerActor_NetStandUpSide2, 0}};
PM_020063a0 data_020d65fc = {{(PMF)nPM::PlayerActor_NetStandUpSide1, 0}};
PM_020063a0 data_020d670c = {{(PMF)nPM::PlayerActor_NetStandUpCheck, 0}};
PM_020063a0 data_020d6714 = {{(PMF)nPM::PlayerActor_NetStandUpFront, 0}};
PM_020063a0 data_020d674c = {{(PMF)nPM::PlayerActor_NetStorageOpen, 0}};
PM_020063a0 data_020d6754 = {{(PMF)nPM::PlayerActor_NetStorageHold, 0}};
PM_020063a0 data_020d6dbc = {{(PMF)nPM::PlayerActor_NetStorageClose, 0}};
PM_020063a0 data_020d6b8c = {{(PMF)nPM::_ZN12Unk_02006d148netAct30Ev, 0}};
PM_020063a0 data_020d6d94 = {{(PMF)nPM::_ZN12Unk_02006d148netAct31Ev, 0}};
PM_020063a0 data_020d6dc4 = {{(PMF)nPM::_ZN12Unk_02006d148netAct32Ej, 0}};
PM_020063a0 data_020d6584 = {{(PMF)nPM::_ZN12Unk_02006d148netAct33Ev, 0}};
PM_020063a0 data_020d657c = {{(PMF)nPM::_ZN12Unk_02006d148netAct34Ev, 0}};
PM_020063a0 data_020d6574 = {{(PMF)nPM::_ZN12Unk_02006d148netAct35Ev, 0}};
PM_020063a0 data_020d656c = {{(PMF)nPM::PlayerActor_NetAct36, 0}};
PM_020063a0 data_020d6564 = {{(PMF)nPM::PlayerActor_NetAct37, 0}};
PM_020063a0 data_020d655c = {{(PMF)nPM::PlayerActor_NetDoorApproach, 0}};
PM_020063a0 data_020d6554 = {{(PMF)nPM::PlayerActor_NetDoorEnter, 0}};
PM_020063a0 data_020d654c = {{(PMF)nPM::PlayerActor_NetDoorEntered, 0}};
PM_020063a0 data_020d6544 = {{(PMF)nPM::PlayerActor_NetDoorExit, 0}};
PM_020063a0 data_020d653c = {{(PMF)nPM::PlayerActor_NetAct3C, 0}};
PM_020063a0 data_020d6534 = {{(PMF)nPM::PlayerActor_NetStowItem, 0}};
PM_020063a0 data_020d652c = {{(PMF)nPM::PlayerActor_NetStowUmbrella, 0}};
PM_020063a0 data_020d6524 = {{(PMF)nPM::_ZN12Unk_02006d1417netChangeHeldItemEj, 0}};
PM_020063a0 data_020d651c = {{(PMF)nPM::PlayerActor_NetLeaveRoom, 0}};
PM_020063a0 data_020d6514 = {{(PMF)nPM::PlayerActor_NetAct41, 0}};
PM_020063a0 data_020d650c = {{(PMF)nPM::PlayerActor_NetAct42, 0}};
PM_020063a0 data_020d6504 = {{(PMF)nPM::PlayerActor_NetAct43, 0}};
PM_020063a0 data_020d64fc = {{(PMF)nPM::FieldObjectManager_Create, 0}};
PM_020063a0 data_020d64f4 = {{(PMF)nPM::PlayerActor_NetUmbrellaSpin, 0}};
PM_020063a0 data_020d64ec = {{(PMF)nPM::PlayerActor_NetAxeSwing, 0}};
PM_020063a0 data_020d64e4 = {{(PMF)nPM::PlayerActor_NetAxeFollowThrough, 0}};
PM_020063a0 data_020d64dc = {{(PMF)nPM::PlayerActor_NetAct48, 0}};
PM_020063a0 data_020d64d4 = {{(PMF)nPM::PlayerActor_NetAxeStrike, 0}};
PM_020063a0 data_020d64cc = {{(PMF)nPM::PlayerActor_NetAxeChop, 0}};
PM_020063a0 data_020d64c4 = {{(PMF)nPM::PlayerActor_NetAxeBreak, 0}};
PM_020063a0 data_020d6bec = {{(PMF)nPM::PlayerActor_NetAxeBrokenMessage, 0}};
PM_020063a0 data_020d6bdc = {{(PMF)nPM::PlayerActor_NetFishCast, 0}};
PM_020063a0 data_020d6bd4 = {{(PMF)nPM::PlayerActor_NetFishCastFail, 0}};
PM_020063a0 data_020d64a4 = {{(PMF)nPM::PlayerActor_NetFishWait, 0}};
PM_020063a0 data_020d649c = {{(PMF)nPM::PlayerActor_NetFishHook, 0}};
PM_020063a0 data_020d6494 = {{(PMF)nPM::PlayerActor_NetFishReelIn, 0}};
PM_020063a0 data_020d5f4c = {{(PMF)nPM::PlayerActor_NetFishEscape, 0}};
PM_020063a0 data_020d6484 = {{(PMF)nPM::PlayerActor_NetFishLand, 0}};
PM_020063a0 data_020d647c = {{(PMF)nPM::PlayerActor_NetFishShowCatch, 0}};
PM_020063a0 data_020d6474 = {{(PMF)nPM::PlayerActor_NetFishStore, 0}};
PM_020063a0 data_020d646c = {{(PMF)nPM::PlayerActor_NetBugNetSwing, 0}};
PM_020063a0 data_020d6464 = {{(PMF)nPM::PlayerActor_NetInsectShowCatch, 0}};
PM_020063a0 data_020d645c = {{(PMF)nPM::PlayerActor_NetInsectStore, 0}};
PM_020063a0 data_020d6454 = {{(PMF)nPM::PlayerActor_NetShovelReady, 0}};
PM_020063a0 data_020d644c = {{(PMF)nPM::PlayerActor_NetShovelWait, 0}};
PM_020063a0 data_020d6444 = {{(PMF)nPM::PlayerActor_NetAct5B, 0}};
PM_020063a0 data_020d643c = {{(PMF)nPM::PlayerActor_NetAct5C, 0}};
PM_020063a0 data_020d6434 = {{(PMF)nPM::PlayerActor_NetShovelStrike, 0}};
PM_020063a0 data_020d642c = {{(PMF)nPM::PlayerActor_NetDig, 0}};
PM_020063a0 data_020d6424 = {{(PMF)nPM::PlayerActor_NetDigUpItem, 0}};
PM_020063a0 data_020d641c = {{(PMF)nPM::PlayerActor_NetDugItemStore, 0}};
PM_020063a0 data_020d6414 = {{(PMF)nPM::PlayerActor_NetBuryItem, 0}};
PM_020063a0 data_020d640c = {{(PMF)nPM::PlayerActor_NetFillHole, 0}};
PM_020063a0 data_020d6404 = {{(PMF)nPM::PlayerActor_NetWateringCan, 0}};
PM_020063a0 data_020d63fc = {{(PMF)nPM::PlayerActor_NetSlingshot, 0}};
PM_020063a0 data_020d63f4 = {{(PMF)nPM::PlayerActor_NetAct65, 0}};
PM_020063a0 data_020d63ec = {{(PMF)nPM::PlayerActor_NetAct66, 0}};
PM_020063a0 data_020d63e4 = {{(PMF)nPM::PlayerActor_NetAct67, 0}};
PM_020063a0 data_020d63dc = {{(PMF)nPM::PlayerActor_NetAct68, 0}};
PM_020063a0 data_020d63d4 = {{(PMF)nPM::PlayerActor_NetAct69, 0}};
PM_020063a0 data_020d63cc = {{(PMF)nPM::PlayerActor_NetAct6A, 0}};
PM_020063a0 data_020d63c4 = {{(PMF)nPM::PlayerActor_NetAct6B, 0}};
PM_020063a0 data_020d63bc = {{(PMF)nPM::PlayerActor_NetAct6C, 0}};
PM_020063a0 data_020d63b4 = {{(PMF)nPM::PlayerActor_NetFaint, 0}};
PM_020063a0 data_020d63ac = {{(PMF)nPM::PlayerActor_NetAct6E, 0}};
PM_020063a0 data_020d63a4 = {{(PMF)nPM::_ZN12Unk_02006d149netWalkToEv, 0}};
PM_020063a0 data_020d639c = {{(PMF)nPM::_ZN12Unk_02006d149netTurnToEv, 0}};
PM_020063a0 data_020d6394 = {{(PMF)nPM::PlayerActor_NetTrip, 0}};
PM_020063a0 data_020d5f0c = {{(PMF)nPM::PlayerActor_NetAct72, 0}};
PM_020063a0 data_020d6384 = {{(PMF)nPM::PlayerActor_NetPitfallFall, 0}};
PM_020063a0 data_020d637c = {{(PMF)nPM::PlayerActor_NetPitfallStruggle, 0}};
PM_020063a0 data_020d6374 = {{(PMF)nPM::PlayerActor_NetPitfallClimbOut, 0}};
PM_020063a0 data_020d636c = {{(PMF)nPM::_ZN12Unk_02006d148netAct76Es, 0}};
PM_020063a0 data_020d6364 = {{(PMF)nPM::_ZN12Unk_020080408netAct77Ej, 0}};
PM_020063a0 data_020d635c = {{(PMF)nPM::PlayerActor_NetBeeSting, 0}};
PM_020063a0 data_020d6354 = {{(PMF)nPM::_ZN12Unk_020080408netAct79Ej, 0}};
PM_020063a0 data_020d634c = {{(PMF)nPM::PlayerActor_NetHaircutStart, 0}};
PM_020063a0 data_020d6344 = {{(PMF)nPM::PlayerActor_NetHaircutCut, 0}};
PM_020063a0 data_020d633c = {{(PMF)nPM::PlayerActor_NetHaircutFinish, 0}};
PM_020063a0 data_020d6334 = {{(PMF)nPM::PlayerActor_NetPhonePickUp, 0}};
PM_020063a0 data_020d632c = {{(PMF)nPM::PlayerActor_NetPhoneHold, 0}};
PM_020063a0 data_020d6324 = {{(PMF)nPM::PlayerActor_NetPhoneHangUp, 0}};
PM_020063a0 data_020d631c = {{(PMF)nPM::PlayerActor_NetAct80, 0}};
PM_020063a0 data_020d6314 = {{(PMF)nPM::PlayerActor_NetAct81, 0}};
PM_020063a0 data_020d630c = {{(PMF)nPM::PlayerActor_NetAct82, 0}};
PM_020063a0 data_020d6304 = {{(PMF)nPM::_ZN12Unk_0200804012netLidClosedEj, 0}};
PM_020063a0 data_020d62fc = {{(PMF)nPM::_ZN12Unk_0200804015netErrorMessageEj, 0}};
PM_020063a0 data_020d62f4 = {{(PMF)nPM::_ZN12Unk_0200804013netHoldUpItemEPv, 0}};
PM_020063a0 data_020d62ec = {{(PMF)nPM::_ZN12Unk_0200769418netLowerHeldUpItemEj, 0}};
PM_020063a0 data_020d62e4 = {{(PMF)nPM::_ZN19PlayerActTaxiGetOut13netTaxiGetOutEv, 0}};
PM_020063a0 data_020d62dc = {{(PMF)nPM::_ZN18PlayerActTaxiGetIn12netTaxiGetInEv, 0}};
PM_020063a0 data_020d62d4 = {{(PMF)nPM::PlayerActor_NetAct89, 0}};
PM_020063a0 data_020d62cc = {{(PMF)nPM::PlayerActor_NetDrinkCoffee, 0}};
PM_020063a0 data_020d62c4 = {{(PMF)nPM::PlayerActor_NetDoorWalkIn, 0}};
PM_020063a0 data_020d62bc = {{(PMF)nPM::PlayerActor_NetDoorWalkOut, 0}};
PM_020063a0 data_020d62b4 = {{(PMF)nPM::PlayerActor_NetExitWalkOut, 0}};
PM_020063a0 data_020d62ac = {{(PMF)nPM::PlayerActor_NetExitWalkIn, 0}};
PM_020063a0 data_020d62a4 = {{(PMF)nPM::PlayerActor_NetFishRelease, 0}};
PM_020063a0 data_020d629c = {{(PMF)nPM::_ZN12Unk_0200769411netWaitMenuEj, 0}};
PM_020063a0 data_020d6294 = {{(PMF)nPM::_ZN12Unk_020076948netAct91Ev, 0}};
PM_020063a0 data_020d628c = {{(PMF)nPM::_ZN12Unk_020076948netAct92Ev, 0}};
}
}

namespace nD {
extern "C" {
PM_02006d14 data_020d6bcc = {{(PMF)nPM::_ZN11PlayerActor9setupInitEP17Unk_0200d53c_Item, 0}};
PM_02006d14 data_020d6bc4 = {{(PMF)nPM::_ZN11PlayerActor10setupAct01EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bbc = {{(PMF)nPM::_ZN11PlayerActor9setupWaitEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bb4 = {{(PMF)nPM::_ZN11PlayerActor9setupWalkEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bac = {{(PMF)nPM::_ZN12Unk_0200769413setupSkidTurnEP19PlayerActionRequest, 0}};
PM_02006d14 data_020d6ba4 = {{(PMF)nPM::_ZN12Unk_0200769410setupAct05EP19PlayerActionRequest, 0}};
PM_02006d14 data_020d6b9c = {{(PMF)nPM::PlayerActor_SetupReleaseCreature, 0}};
PM_02006d14 data_020d648c = {{(PMF)nPM::_ZN12Unk_0200769418setupChangeClothesEP19PlayerActionRequest, 0}};
PM_02006d14 data_020d610c = {{(PMF)nPM::PlayerActor_SetupLieInBed, 0}};
PM_02006d14 data_020d6b84 = {{(PMF)nPM::PlayerActor_SetupGetOutOfBedCheck, 0}};
PM_02006d14 data_020d6b7c = {{(PMF)nPM::PlayerActor_SetupGetOutOfBed, 0}};
PM_02006d14 data_020d6b74 = {{(PMF)nPM::PlayerActor_SetupBedRollCheck, 0}};
PM_02006d14 data_020d6b6c = {{(PMF)nPM::PlayerActor_SetupBedRollBlocked, 0}};
PM_02006d14 data_020d6b64 = {{(PMF)nPM::PlayerActor_SetupBedRoll, 0}};
PM_02006d14 data_020d6b5c = {{(PMF)nPM::PlayerActor_SetupBedApproach, 0}};
PM_02006d14 data_020d6b54 = {{(PMF)nPM::PlayerActor_SetupGetIntoBed, 0}};
PM_02006d14 data_020d6b4c = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct10EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b44 = {{(PMF)nPM::PlayerActor_SetupAct11, 0}};
PM_02006d14 data_020d6b3c = {{(PMF)nPM::PlayerActor_SetupAct12, 0}};
PM_02006d14 data_020d6b34 = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct13EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b2c = {{(PMF)nPM::_ZN12Unk_02006d1412setupEmotionEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b24 = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct15EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b1c = {{(PMF)nPM::PlayerActor_SetupPluckReach, 0}};
PM_02006d14 data_020d6b14 = {{(PMF)nPM::PlayerActor_SetupPluck, 0}};
PM_02006d14 data_020d6b0c = {{(PMF)nPM::_ZN12Unk_02006d1416setupPickUpReachEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b04 = {{(PMF)nPM::_ZN12Unk_02006d1411setupPickUpEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6afc = {{(PMF)nPM::_ZN12Unk_02006d1418setupPickUpFanfareEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6af4 = {{(PMF)nPM::_ZN12Unk_02006d1422setupPickUpFanfareStowEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6aec = {{(PMF)nPM::PlayerActor_SetupPickUpItem, 0}};
PM_02006d14 data_020d6ae4 = {{(PMF)nPM::PlayerActor_SetupFtrGrabApproach, 0}};
PM_02006d14 data_020d6adc = {{(PMF)nPM::PlayerActor_SetupFtrHold, 0}};
PM_02006d14 data_020d6ad4 = {{(PMF)nPM::PlayerActor_SetupFtrRotate, 0}};
PM_02006d14 data_020d6acc = {{(PMF)nPM::PlayerActor_SetupFtrPush, 0}};
PM_02006d14 data_020d6ac4 = {{(PMF)nPM::PlayerActor_SetupFtrPull, 0}};
PM_02006d14 data_020d6abc = {{(PMF)nPM::PlayerActor_SetupFtrPushMove, 0}};
PM_02006d14 data_020d6ab4 = {{(PMF)nPM::PlayerActor_SetupFtrPullMove, 0}};
PM_02006d14 data_020d6aac = {{(PMF)nPM::PlayerActor_SetupSeatApproach, 0}};
PM_02006d14 data_020d6aa4 = {{(PMF)nPM::PlayerActor_SetupSitDownFront, 0}};
PM_02006d14 data_020d6a9c = {{(PMF)nPM::PlayerActor_SetupSitDownSide2, 0}};
PM_02006d14 data_020d6a94 = {{(PMF)nPM::PlayerActor_SetupSitDownSide1, 0}};
PM_02006d14 data_020d6a8c = {{(PMF)nPM::PlayerActor_SetupSit, 0}};
PM_02006d14 data_020d6a84 = {{(PMF)nPM::PlayerActor_SetupStandUpSide2, 0}};
PM_02006d14 data_020d6a7c = {{(PMF)nPM::PlayerActor_SetupStandUpSide1, 0}};
PM_02006d14 data_020d6a74 = {{(PMF)nPM::PlayerActor_SetupStandUpCheck, 0}};
PM_02006d14 data_020d6a6c = {{(PMF)nPM::PlayerActor_SetupStandUpFront, 0}};
PM_02006d14 data_020d6a64 = {{(PMF)nPM::PlayerActor_SetupStorageOpen, 0}};
PM_02006d14 data_020d6a5c = {{(PMF)nPM::PlayerActor_SetupStorageHold, 0}};
PM_02006d14 data_020d6a54 = {{(PMF)nPM::PlayerActor_SetupStorageClose, 0}};
PM_02006d14 data_020d6a4c = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct30EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a44 = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct31EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a3c = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct32EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a34 = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct33EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a2c = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct34EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a24 = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct35EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a1c = {{(PMF)nPM::PlayerActor_SetupAct36, 0}};
PM_02006d14 data_020d6a14 = {{(PMF)nPM::PlayerActor_SetupAct37, 0}};
PM_02006d14 data_020d6a0c = {{(PMF)nPM::PlayerActor_SetupDoorApproach, 0}};
PM_02006d14 data_020d6a04 = {{(PMF)nPM::PlayerActor_SetupDoorEnter, 0}};
PM_02006d14 data_020d69fc = {{(PMF)nPM::PlayerActor_SetupDoorEntered, 0}};
PM_02006d14 data_020d69f4 = {{(PMF)nPM::PlayerActor_SetupDoorExit, 0}};
PM_02006d14 data_020d69ec = {{(PMF)nPM::PlayerActor_SetupAct3C, 0}};
PM_02006d14 data_020d69e4 = {{(PMF)nPM::PlayerActor_SetupStowItem, 0}};
PM_02006d14 data_020d69dc = {{(PMF)nPM::PlayerActor_SetupStowUmbrella, 0}};
PM_02006d14 data_020d69d4 = {{(PMF)nPM::_ZN12Unk_02006d1419setupChangeHeldItemEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d69cc = {{(PMF)nPM::PlayerActor_SetupLeaveRoom, 0}};
PM_02006d14 data_020d69c4 = {{(PMF)nPM::PlayerActor_SetupAct41, 0}};
PM_02006d14 data_020d69bc = {{(PMF)nPM::PlayerActor_SetupAct42, 0}};
PM_02006d14 data_020d69b4 = {{(PMF)nPM::PlayerActor_SetupAct43, 0}};
PM_02006d14 data_020d69ac = {{(PMF)nPM::PlayerActor_SetupAct44, 0}};
PM_02006d14 data_020d69a4 = {{(PMF)nPM::PlayerActor_SetupUmbrellaSpin, 0}};
PM_02006d14 data_020d699c = {{(PMF)nPM::PlayerActor_SetupAxeSwing, 0}};
PM_02006d14 data_020d638c = {{(PMF)nPM::PlayerActor_SetupAxeFollowThrough, 0}};
PM_02006d14 data_020d608c = {{(PMF)nPM::PlayerActor_SetupAct48, 0}};
PM_02006d14 data_020d6984 = {{(PMF)nPM::PlayerActor_SetupAxeStrike, 0}};
PM_02006d14 data_020d697c = {{(PMF)nPM::PlayerActor_SetupAxeChop, 0}};
PM_02006d14 data_020d6974 = {{(PMF)nPM::PlayerActor_SetupAxeBreak, 0}};
PM_02006d14 data_020d696c = {{(PMF)nPM::PlayerActor_SetupAxeBrokenMessage, 0}};
PM_02006d14 data_020d6964 = {{(PMF)nPM::PlayerActor_SetupFishCast, 0}};
PM_02006d14 data_020d695c = {{(PMF)nPM::PlayerActor_SetupFishCastFail, 0}};
PM_02006d14 data_020d6954 = {{(PMF)nPM::PlayerActor_SetupFishWait, 0}};
PM_02006d14 data_020d694c = {{(PMF)nPM::PlayerActor_SetupFishHook, 0}};
PM_02006d14 data_020d6944 = {{(PMF)nPM::PlayerActor_SetupFishReelIn, 0}};
PM_02006d14 data_020d693c = {{(PMF)nPM::PlayerActor_SetupFishEscape, 0}};
PM_02006d14 data_020d6934 = {{(PMF)nPM::PlayerActor_SetupFishLand, 0}};
PM_02006d14 data_020d692c = {{(PMF)nPM::PlayerActor_SetupFishShowCatch, 0}};
PM_02006d14 data_020d6924 = {{(PMF)nPM::PlayerActor_SetupFishStore, 0}};
PM_02006d14 data_020d691c = {{(PMF)nPM::PlayerActor_SetupBugNetSwing, 0}};
PM_02006d14 data_020d6914 = {{(PMF)nPM::PlayerActor_SetupInsectShowCatch, 0}};
PM_02006d14 data_020d690c = {{(PMF)nPM::PlayerActor_SetupInsectStore, 0}};
PM_02006d14 data_020d6904 = {{(PMF)nPM::PlayerActor_SetupShovelReady, 0}};
PM_02006d14 data_020d68fc = {{(PMF)nPM::PlayerActor_SetupShovelWait, 0}};
PM_02006d14 data_020d68f4 = {{(PMF)nPM::PlayerActor_SetupAct5B, 0}};
PM_02006d14 data_020d68ec = {{(PMF)nPM::PlayerActor_SetupAct5C, 0}};
PM_02006d14 data_020d68e4 = {{(PMF)nPM::PlayerActor_SetupShovelStrike, 0}};
PM_02006d14 data_020d68dc = {{(PMF)nPM::PlayerActor_SetupDig, 0}};
PM_02006d14 data_020d68d4 = {{(PMF)nPM::PlayerActor_SetupDigUpItem, 0}};
PM_02006d14 data_020d68cc = {{(PMF)nPM::PlayerActor_SetupDugItemStore, 0}};
PM_02006d14 data_020d68c4 = {{(PMF)nPM::PlayerActor_SetupBuryItem, 0}};
PM_02006d14 data_020d68bc = {{(PMF)nPM::PlayerActor_SetupFillHole, 0}};
PM_02006d14 data_020d68b4 = {{(PMF)nPM::PlayerActor_SetupWateringCan, 0}};
PM_02006d14 data_020d68ac = {{(PMF)nPM::PlayerActor_SetupSlingshot, 0}};
PM_02006d14 data_020d68a4 = {{(PMF)nPM::PlayerActor_SetupAct65, 0}};
PM_02006d14 data_020d689c = {{(PMF)nPM::PlayerActor_SetupAct66, 0}};
PM_02006d14 data_020d6894 = {{(PMF)nPM::PlayerActor_SetupAct67, 0}};
PM_02006d14 data_020d688c = {{(PMF)nPM::PlayerActor_SetupAct68, 0}};
PM_02006d14 data_020d6884 = {{(PMF)nPM::PlayerActor_SetupAct69, 0}};
PM_02006d14 data_020d687c = {{(PMF)nPM::PlayerActor_SetupAct6A, 0}};
PM_02006d14 data_020d6874 = {{(PMF)nPM::PlayerActor_SetupAct6B, 0}};
PM_02006d14 data_020d686c = {{(PMF)nPM::PlayerActor_SetupAct6C, 0}};
PM_02006d14 data_020d6864 = {{(PMF)nPM::PlayerActor_SetupFaint, 0}};
PM_02006d14 data_020d685c = {{(PMF)nPM::PlayerActor_SetupAct6E, 0}};
PM_02006d14 data_020d6854 = {{(PMF)nPM::_ZN12Unk_02006d1411setupWalkToEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d684c = {{(PMF)nPM::_ZN12Unk_02006d1411setupTurnToEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6844 = {{(PMF)nPM::PlayerActor_SetupTrip, 0}};
PM_02006d14 data_020d683c = {{(PMF)nPM::PlayerActor_SetupAct72, 0}};
PM_02006d14 data_020d6834 = {{(PMF)nPM::PlayerActor_SetupPitfallFall, 0}};
PM_02006d14 data_020d682c = {{(PMF)nPM::PlayerActor_SetupPitfallStruggle, 0}};
PM_02006d14 data_020d6824 = {{(PMF)nPM::PlayerActor_SetupPitfallClimbOut, 0}};
PM_02006d14 data_020d681c = {{(PMF)nPM::_ZN12Unk_02006d1410setupAct76EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6814 = {{(PMF)nPM::_ZN12Unk_0200804010setupAct77EPh, 0}};
PM_02006d14 data_020d680c = {{(PMF)nPM::PlayerActor_SetupBeeSting, 0}};
PM_02006d14 data_020d6804 = {{(PMF)nPM::_ZN12Unk_0200804010setupAct79Ev, 0}};
PM_02006d14 data_020d67fc = {{(PMF)nPM::PlayerActor_SetupHaircutStart, 0}};
PM_02006d14 data_020d67f4 = {{(PMF)nPM::FieldObj_LoadStones, 0}};
PM_02006d14 data_020d67ec = {{(PMF)nPM::PlayerActor_SetupHaircutFinish, 0}};
PM_02006d14 data_020d67e4 = {{(PMF)nPM::PlayerActor_SetupPhonePickUp, 0}};
PM_02006d14 data_020d67dc = {{(PMF)nPM::PlayerActor_SetupPhoneHold, 0}};
PM_02006d14 data_020d67d4 = {{(PMF)nPM::PlayerActor_SetupPhoneHangUp, 0}};
PM_02006d14 data_020d67cc = {{(PMF)nPM::PlayerActor_SetupAct80, 0}};
PM_02006d14 data_020d67c4 = {{(PMF)nPM::PlayerActor_SetupAct81, 0}};
PM_02006d14 data_020d67bc = {{(PMF)nPM::PlayerActor_SetupAct82, 0}};
PM_02006d14 data_020d67b4 = {{(PMF)nPM::_ZN12Unk_0200804014setupLidClosedEjj, 0}};
PM_02006d14 data_020d67ac = {{(PMF)nPM::_ZN12Unk_0200804017setupErrorMessageEPh, 0}};
PM_02006d14 data_020d67a4 = {{(PMF)nPM::_ZN12Unk_0200804015setupHoldUpItemEv, 0}};
PM_02006d14 data_020d679c = {{(PMF)nPM::_ZN12Unk_0200769420setupLowerHeldUpItemEv, 0}};
PM_02006d14 data_020d6794 = {{(PMF)nPM::_ZN19PlayerActTaxiGetOut15setupTaxiGetOutEv, 0}};
PM_02006d14 data_020d678c = {{(PMF)nPM::_ZN18PlayerActTaxiGetIn14setupTaxiGetInEv, 0}};
PM_02006d14 data_020d6784 = {{(PMF)nPM::PlayerActor_SetupAct89, 0}};
PM_02006d14 data_020d677c = {{(PMF)nPM::PlayerActor_SetupDrinkCoffee, 0}};
PM_02006d14 data_020d6774 = {{(PMF)nPM::PlayerActor_SetupDoorWalkIn, 0}};
PM_02006d14 data_020d627c = {{(PMF)nPM::PlayerActor_SetupDoorWalkOut, 0}};
PM_02006d14 data_020d6764 = {{(PMF)nPM::PlayerActor_SetupExitWalkOut, 0}};
PM_02006d14 data_020d675c = {{(PMF)nPM::PlayerActor_SetupExitWalkIn, 0}};
PM_02006d14 data_020d626c = {{(PMF)nPM::PlayerActor_SetupFishRelease, 0}};
PM_02006d14 data_020d5ffc = {{(PMF)nPM::_ZN12Unk_0200769413setupWaitMenuEP19PlayerActionRequest, 0}};
PM_02006d14 data_020d6744 = {{(PMF)nPM::_ZN12Unk_0200769410setupAct91Ev, 0}};
PM_02006d14 data_020d673c = {{(PMF)nPM::_ZN12Unk_0200769410setupAct92Ev, 0}};
}
}

namespace nE {
extern "C" {
PM_020076f0 data_020d6da4 = {{(PMF)nPM::_ZN11PlayerActor7endInitEj, 0}};
PM_020076f0 data_020d6dac = {{(PMF)nPM::_ZN11PlayerActor8endAct01Ev, 0}};
PM_020076f0 data_020d6d84 = {{(PMF)nPM::_ZN11PlayerActor7endWaitEv, 0}};
PM_020076f0 data_020d6d7c = {{(PMF)nPM::_ZN12Unk_0200769411endSkidTurnEj, 0}};
PM_020076f0 data_020d6d74 = {{(PMF)nPM::PlayerActor_EndReleaseCreature, 0}};
PM_020076f0 data_020d6d6c = {{(PMF)nPM::_ZN12Unk_0200769416endChangeClothesEj, 0}};
PM_020076f0 data_020d6d64 = {{(PMF)nPM::PlayerActor_EndLieInBed, 0}};
PM_020076f0 data_020d6d5c = {{(PMF)nPM::PlayerActor_EndGetOutOfBed, 0}};
PM_020076f0 data_020d6d54 = {{(PMF)nPM::PlayerActor_EndBedRoll, 0}};
PM_020076f0 data_020d6d4c = {{(PMF)nPM::PlayerActor_EndBedApproach, 0}};
PM_020076f0 data_020d6d44 = {{(PMF)nPM::PlayerActor_EndGetIntoBed, 0}};
PM_020076f0 data_020d6d3c = {{(PMF)nPM::_ZN12Unk_02006d1410endEmotionEv, 0}};
PM_020076f0 data_020d6d34 = {{(PMF)nPM::PlayerActor_EndPluck, 0}};
PM_020076f0 data_020d6d2c = {{(PMF)nPM::_ZN12Unk_02006d149endPickUpEP17Unk_02006d14_Itemj, 0}};
PM_020076f0 data_020d6d24 = {{(PMF)nPM::_ZN12Unk_02006d1416endPickUpFanfareEv, 0}};
PM_020076f0 data_020d6d1c = {{(PMF)nPM::PlayerActor_EndFtrGrabApproach, 0}};
PM_020076f0 data_020d6d14 = {{(PMF)nPM::PlayerActor_EndFtrPushMove, 0}};
PM_020076f0 data_020d6d0c = {{(PMF)nPM::PlayerActor_EndFtrPullMove, 0}};
PM_020076f0 data_020d6d04 = {{(PMF)nPM::PlayerActor_EndSeatApproach, 0}};
PM_020076f0 data_020d6cfc = {{(PMF)nPM::PlayerActor_EndSitDownFront, 0}};
PM_020076f0 data_020d6cf4 = {{(PMF)nPM::PlayerActor_EndSitDownSide2, 0}};
PM_020076f0 data_020d6cec = {{(PMF)nPM::PlayerActor_EndSitDownSide1, 0}};
PM_020076f0 data_020d6ce4 = {{(PMF)nPM::PlayerActor_EndSit, 0}};
PM_020076f0 data_020d6cdc = {{(PMF)nPM::PlayerActor_EndStandUpSide2, 0}};
PM_020076f0 data_020d6cd4 = {{(PMF)nPM::PlayerActor_EndStandUpSide1, 0}};
PM_020076f0 data_020d6ccc = {{(PMF)nPM::PlayerActor_EndStandUpFront, 0}};
PM_020076f0 data_020d6cc4 = {{(PMF)nPM::PlayerActor_EndAct3C, 0}};
PM_020076f0 data_020d6cbc = {{(PMF)nPM::PlayerActor_EndStowItem, 0}};
PM_020076f0 data_020d6cb4 = {{(PMF)nPM::_ZN12Unk_02006d1417endChangeHeldItemEv, 0}};
PM_020076f0 data_020d6cac = {{(PMF)nPM::PlayerActor_EndUmbrellaSpin, 0}};
PM_020076f0 data_020d6ca4 = {{(PMF)nPM::PlayerActor_EndAxeStrike, 0}};
PM_020076f0 data_020d6c9c = {{(PMF)nPM::PlayerActor_EndAxeChop, 0}};
PM_020076f0 data_020d6c94 = {{(PMF)nPM::PlayerActor_EndAxeBreak, 0}};
PM_020076f0 data_020d6c8c = {{(PMF)nPM::PlayerActor_EndAxeBrokenMessage, 0}};
PM_020076f0 data_020d6c84 = {{(PMF)nPM::PlayerActor_EndFishWait, 0}};
PM_020076f0 data_020d6c7c = {{(PMF)nPM::PlayerActor_EndInsectShowCatch, 0}};
PM_020076f0 data_020d6c74 = {{(PMF)nPM::PlayerActor_EndInsectStore, 0}};
PM_020076f0 data_020d6c6c = {{(PMF)nPM::PlayerActor_EndShovelStrike, 0}};
PM_020076f0 data_020d6c64 = {{(PMF)nPM::PlayerActor_EndDig, 0}};
PM_020076f0 data_020d6c5c = {{(PMF)nPM::PlayerActor_EndDigUpItem, 0}};
PM_020076f0 data_020d6c54 = {{(PMF)nPM::PlayerActor_EndFillHole, 0}};
PM_020076f0 data_020d6c4c = {{(PMF)nPM::PlayerActor_EndWateringCan, 0}};
PM_020076f0 data_020d6c44 = {{(PMF)nPM::PlayerActor_EndAct66, 0}};
PM_020076f0 data_020d6c3c = {{(PMF)nPM::PlayerActor_EndAct68, 0}};
PM_020076f0 data_020d6c34 = {{(PMF)nPM::PlayerActor_EndPitfallFall, 0}};
PM_020076f0 data_020d6c2c = {{(PMF)nPM::PlayerActor_EndPitfallStruggle, 0}};
PM_020076f0 data_020d6c24 = {{(PMF)nPM::PlayerActor_EndHaircutFinish, 0}};
PM_020076f0 data_020d6c1c = {{(PMF)nPM::PlayerActor_EndAct80, 0}};
PM_020076f0 data_020d6c14 = {{(PMF)nPM::PlayerActor_EndAct81, 0}};
PM_020076f0 data_020d6c0c = {{(PMF)nPM::PlayerActor_EndAct82, 0}};
PM_020076f0 data_020d6c04 = {{(PMF)nPM::_ZN19PlayerActTaxiGetOut13endTaxiGetOutEv, 0}};
PM_020076f0 data_020d6bfc = {{(PMF)nPM::_ZN18PlayerActTaxiGetIn12endTaxiGetInEv, 0}};
PM_020076f0 data_020d6bf4 = {{(PMF)nPM::_ZN12Unk_020076948endAct91Ev, 0}};
}
}

namespace nT {
extern "C" void PlayerActor_Create() {
    new PlayerActor();
}
}

namespace nT {
extern "C" void PlayerActor_CheckSceneExit(s32 a) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, a) && !PlayerActor_TestSlotFlag(0xb, a) && !PlayerActor_TestSlotFlag(0x13, a) &&
        !PlayerActor_TestSlotFlag(5, a) && PlayerActor_GetBodyPos(4)) {
        sp4 = Ground_GetExitAtPos();
        if (sp4 != -1) {
            PlayerActor_SetLocalExitId(&sp4);
            if (SceneExit_GetDoor(Scene_GetWarpRequest(), sp4, &sp8, &sp0)) {
                PlayerActor_SetLocalExitKind(&sp8);
                if (sp8 == 1 || sp8 == 2 || sp8 == 4 || RoomEntry_IsExclusiveExit(sp4)) {
                    if (Scene_InUnk6To8()) {
                        TalkRequest_FinishSceneEntry();
                    }
                    TalkRequest_AddLeaveRoom();
                } else {
                    TalkRequest_AddSceneExit(PlayerActor_GetCharacter(4), sp4);
                }
            }
        }
    }
}
}

namespace nT {
extern "C" void PlayerActor_ApproachValue(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    if (cur == target) return;
    s32 d = target - cur;
    s32 ad = d < 0 ? -d : d;
    if (ad < minstep) {
        *p = target;
        return;
    }
    s32 v = func_01ffcb0c(d, rate);
    s32 av = v < 0 ? -v : v;
    if (av > maxstep) {
        if (v >= 0) *p += maxstep;
        else *p -= maxstep;
    } else if (av < minstep) {
        if (v >= 0) *p += minstep;
        else *p -= minstep;
    } else {
        *p += v;
    }
}
}

namespace nT {
extern "C" void PlayerActor_ApproachCoord(s32 *p, s32 target) {
    PlayerActor_ApproachValue(p, target, 0xe66, 0x1ec, 0x31);
}
}

namespace nT {
extern "C" s32 PlayerActor_ApproachAngle(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    s32 d, t, c;
    if (cur == target) {
        return 0;
    }
    c = cur << 12;
    t = target << 12;
    d = t - c;
    if (d < 0) d = -d;
    s32 step;
    if (d > 0x8000000) {
        step = func_01ffcb0c(rate, 0x10000000 - d);
    } else {
        step = func_01ffcb0c(rate, d);
    }
    if (step <= minstep) {
        *p = target;
        return 0;
    }
    if (step > maxstep) step = maxstep;
    s32 v;
    if (t >= c) {
        if (d > 0x8000000) v = c - step;
        else v = c + step;
    } else {
        if (d > 0x8000000) v = c + step;
        else v = c - step;
    }
    *p = v >> 12;
    return (s16)(target - *p);
}
}

namespace nT {
extern "C" s32 PlayerActor_TurnAngle(s16 *p, s32 target) {
    return PlayerActor_ApproachAngle(p, target, 0x800, 0x1770000, 0xc0000);
}
}

namespace nT {
extern "C" s32 PlayerActor_TurnAngleSlow(s16 *p, s32 target) {
    return PlayerActor_ApproachAngle(p, target, 0x666, 0xbb8000, 0xc0000);
}
}

namespace nT {
extern "C" s32 PlayerActor_Accelerate(s32 a, s32 b) {
    s32 v = a + 0x93;
    if (v > b) v = b;
    return v;
}
}

namespace nT {
extern "C" s32 PlayerActor_DecreaseClamped(s32 a, s32 b, s32 c) {
    s32 v = a - c;
    if (v < b) v = b;
    return v;
}
}

namespace nT {
extern "C" s32 PlayerActor_Decelerate(s32 a, s32 b) {
    return PlayerActor_DecreaseClamped(a, b, 0x9c);
}
}

namespace nT {
extern "C" s32 PlayerActor_DecelerateSkid(s32 a, s32 b) {
    return PlayerActor_DecreaseClamped(a, b, 0x8f);
}
}

namespace nT {
extern "C" void *PlayerActor_GetPlayerData(void *p) {
    if (PlayerSession_GetDataIndex(*(s32 *)((u8 *)p + 0x7fc)) < 7) {
        return PlayerData_Get();
    }
    return NULL;
}
}

namespace nT {
extern "C" BOOL PlayerActor_GetGender(void *p) {
    void *r = PlayerActor_GetPlayerData(p);
    BOOL result = FALSE;
    if (r != NULL) {
        _ZN10PlayerData11getPlayerIdEv(r);
        if (_ZN8PlayerId9getGenderEv()) {
            result = TRUE;
        } else {
            result = FALSE;
        }
    }
    return result;
}
}

namespace nT {
extern "C" void PlayerActor_GetShirt(u16 *out, void *p) {
    void *r = PlayerActor_GetPlayerData(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *_ZN10PlayerData8getShirtEv(r);
    }
}
}

namespace nT {
extern "C" void PlayerActor_GetHat(u16 *out, void *p) {
    void *r = PlayerActor_GetPlayerData(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *_ZN10PlayerData6getHatEv(r);
    }
}
}

namespace nT {
extern "C" s32 PlayerActor_GetHairStyle(void *p) {
    _ZN10PlayerData12getHairStyleEv(PlayerActor_GetPlayerData(p));
}
}

namespace nT {
extern "C" s32 PlayerActor_GetHairColor(void *p) {
    _ZN10PlayerData12getHairColorEv(PlayerActor_GetPlayerData(p));
}
}

namespace nT {
extern "C" s32 PlayerActor_GetTan(void *p) {
    _ZN10PlayerData6getTanEv(PlayerActor_GetPlayerData(p));
}
}

u32 Unk_020102ec::calcTan(u32 r7) {
    using namespace nS;
    u32 r5 = PlayerActor_GetTan((u32)this);
    BOOL flag = FALSE;
    u32 k = Scene_GetCurrent();
    if (k == 0x2e || k == 0xd || k == 0xe || k == 0xc || k == 0x2f) {
        return r5;
    }
    if (!(Scene_InUnk6To8() && PlayerActor_ParamGetAction(unk_08) == 8)) {
        if (!_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
            return r5;
        }
        if (r7 == 0) {
            return r5;
        }
    } else if (r7 == 1) {
        r7 = 0;
    }
    if (_ZN12Unk_02006d1416isGuestInSessionEv((u32)this)) {
        flag = TRUE;
    }
    u32 obj = PlayerActor_GetPlayerData((u32)this);
    Unk_02010b08_Time a, b;
    Unk_02010b08_Bits bits;
    a.unk_00 = 0;
    a.unk_04 = 0;
    b.unk_00 = 0;
    b.unk_04 = 0;
    s32 r3 = PlayerActor_CompareLastPlayDate((u32)this, &a, &b);
    bits.unk_a = *((u8 *)&a + 5);
    bits.unk_b = *((u8 *)&a + 4);
    bits.unk_c = *((u8 *)&a + 3);
    switch (r3) {
    case -1:
        if (r7 != 0) {
            PlayerActor_SetLastPlayDate((u32)this, obj, &bits);
        }
        break;
    case 0:
        break;
    default: {
        s32 n = DateTime_DiffDays(&b, &a);
        u8 *p = PlayerSession_GetSessionFlags();
        if (n >= 2) {
            s32 h = n >> 1;
            if ((s32)r5 > h) {
                r5 = (u8)(r5 - h);
            } else {
                r5 = 0;
            }
            if (r7 != 0) {
                _ZN10PlayerData6setTanEh(obj, r5);
                PlayerActor_SetLastPlayDate((u32)this, obj, &bits);
                *p &= 0xfd;
                if (!flag) {
                    *p &= ~0x10;
                }
                _ZN12Unk_02006d1410netSendTanEv((u32)this);
            }
        }
        *p &= 0xfe;
        break;
    }
    }
    u16 *q = PlayerSession_GetTanTimer();
    if (*q == 0) {
        *q = 0x4650;
    }
    return r5;
}

namespace nS {
extern "C" void PlayerActor_GetFaceItem(u16 *out, u32 x) {
    PlayerActor_GetPlayerData(x);
    *out = *_ZN10PlayerData11getFaceItemEv();
}
}

namespace nS {
extern "C" u32 PlayerActor_GetFaceAltFlag(u32 x) {
    u32 a = PlayerActor_GetPlayerData(x);
    if (a) {
        return PlayerData_HasStungFace(a);
    }
    return 0;
}
}

namespace nS {
extern "C" u32 PlayerActor_GetFaceTexIndex(u32 x) {
    u32 a = PlayerActor_GetPlayerData(x);
    s32 r = 0x20;
    if (a) {
        r = _ZN10PlayerData11getFaceTypeEv(a);
        if (PlayerData_HasStungFace(a)) {
            r += 0x10;
        }
    }
    if (r >= 0x20) {
        r = 0;
    }
    return r;
}
}

namespace nS {
extern "C" void PlayerActor_GetHeldItem(u16 *out, u32 x) {
    *out = 0xfff1;
    if (PlayerActor_GetPlayerData(x)) {
        *out = *_ZN10PlayerData11getHeldItemEv();
    }
}
}

u32 Unk_020102ec::getAnimResIndex(u32 *a) {
    using namespace nS;
    return sPlayerAnimResIndex[*a];
}

void Unk_020102ec::setAngleY(s16 *a) {
    using namespace nS;
    Unk_02010a58_Blk *p = (Unk_02010a58_Blk *)P(0x8c);
    s16 v = *a;
    p->unk_02 = v;
    unk_94 = p->unk_02;
}

void Unk_020102ec::setRotX(u16 a) {
    using namespace nS;
    unk_8c = a;
}

void Unk_020102ec::approachRotX() {
    using namespace nS;
    PlayerActor_TurnAngle(P(0x8c));
}

void Unk_020102ec::setSpeed(u32 *a) {
    using namespace nS;
    unk_98 = *a;
    _ZN5Actor12calcVelocityEv(this);
}

void Unk_020102ec::moveWithCollision() {
    using namespace nS;
    u8 tmp[0x34];
    u8 *p = P(0x5c);
    _ZN5Actor13applyVelocityEP16Unk_02002cb0_Vec(this, P(0x170));
    _ZN14CollisionStateC1Ev(tmp);
    s16 h = unk_8e;
    void *q = _ZN12Unk_0200769416keepsBgCheckWorkEj(this, unk_7ec) == 0 ? (void *)tmp : (void *)P(0x7a0);
    Collision_Move(q, p, P(0x68), h, 0xfd7, this, 0xf);
    _ZN14CollisionStateD1Ev(tmp);
    *(u32 *)(p + 4) = Ground_GetDefaultY(0);
}

void Unk_020102ec::moveNoCollision() {
    using namespace nS;
    _ZN5Actor13applyVelocityEP16Unk_02002cb0_Vec(this, 0);
    unk_60 = Ground_GetDefaultY(0);
}

BOOL Unk_020102ec::netApproachTransform() {
    using namespace nS;
    Unk_02010924_Msg m;
    u32 x, y;
    BOOL r;
    if (!_ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(this, &m, &x, &y, &m.unk_02)) {
        return FALSE;
    }
    if (m.unk_00 != Scene_GetCurrent()) {
        return FALSE;
    }
    m.unk_04 = unk_8e;
    r = PlayerActor_TurnAngleSlow(&m.unk_04, m.unk_02) == 0 ? TRUE : FALSE;
    setAngleY(&m.unk_04);
    PlayerActor_ApproachCoord(P(0x5c), x);
    PlayerActor_ApproachCoord(P(0x64), y);
    if (r) {
        if (x == unk_5c && y == unk_64) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_020102ec::advanceAnim() {
    using namespace nS;
    _ZN17TwoLayerAnimModel12updateLayersEv(P(0x230));
}

void Unk_020102ec::updateFaceAnims() {
    using namespace nS;
    updateEyeAnim();
    updateMouthAnim();
}

void Unk_020102ec::updateEyeAnim() {
    using namespace nS;
    s32 t = unk_768;
    if (t != 0x16f) {
        if (t == 0) {
            if (_ZN13AnimFrameCtrl14hasPassedFrameEi(P(0x70c), 0)) {
                if (!BlinkTimer_Update(P(0x764))) {
                    return;
                }
            }
            _ZN13MatTexPatAnim6updateEv(P(0x70c));
        } else {
            _ZN13MatTexPatAnim6updateEv(P(0x70c));
        }
    }
}

void Unk_020102ec::updateMouthAnim() {
    using namespace nS;
    if (unk_76c != 0x16f) {
        _ZN13MatTexPatAnim6updateEv(P(0x738));
    }
}

u32 Unk_020102ec::getBodyColliderFlags(u32 *a) {
    using namespace nS;
    if (sPlayerActionColliderFlag2[*a] != 0) {
        return 2;
    }
    return 0;
}

void Unk_020102ec::setBodyColliderAt(Unk_020107c8_Blk *a, u32 *b) {
    using namespace nS;
    u32 f = getBodyColliderFlags(b);
    _ZN19ActorPlacedCollider15setupForActorAtEPvP4Vec3iijjjhi(P(0x170), this, (u32)a, 0xfd7, 0x2800, f | 4, 0x2fc, 0x15, (u8)unk_7fc, 0x1000);
}

void Unk_020102ec::setBodyCollider(u32 *a) {
    using namespace nS;
    setBodyColliderAt((Unk_020107c8_Blk *)P(0x5c), a);
}

void Unk_020102ec::setBodyColliderAtDrawPos(u32 *a) {
    using namespace nS;
    Unk_020107c8_Blk b;
    b.unk_00 = unk_6f0;
    b.unk_04 = Ground_GetDefaultY(0);
    b.unk_08 = unk_6f8;
    setBodyColliderAt(&b, a);
}

void Unk_020102ec::setSubColliderBody(u32 *a) {
    using namespace nS;
    _ZN19ActorPlacedCollider15setupForActorAtEPvP4Vec3iijjjhi(P(0x1c0), this, (u32)a, 0xfd7, 0x2800, 6, 0x2fc, 0, 0xff, 0x1000);
}

void Unk_020102ec::setSubCollider(u32 a, u32 b, u32 c) {
    using namespace nS;
    _ZN19ActorPlacedCollider15setupForActorAtEPvP4Vec3iijjjhi(P(0x1c0), this, a, b, c, 0x11, 0x2c, 0, 0xff, 0x1000);
}

void Unk_020102ec::updateBodyCollider() {
    using namespace nS;
    setBodyCollider((u32 *)P(0x7ec));
    _ZN13ActorCollider6submitEv(P(0x170));
}

void Unk_020102ec::updateCollidersAtDrawPos(u32 *a) {
    using namespace nS;
    setBodyColliderAtDrawPos((u32 *)P(0x7ec));
    _ZN13ActorCollider6submitEv(P(0x170));
    setSubColliderBody(a);
    _ZN13ActorCollider6submitEv(P(0x1c0));
}

void Unk_020102ec::submitSceneCollider() {
    using namespace nS;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc) || (Scene_InUnk6To8() && unk_7ec == 8)) {
        Unk_0201065c_Vec *p = (Unk_0201065c_Vec *)P(0x5c);
        Unk_0201065c_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        v.y += 0xb33;
        u32 r = Scene_GetTouchPicker();
        _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP4Vec3S3_S3_ih(r, P(0x210), &v, 0xa00, 0x15cf, 1, (u8)unk_7fc);
    }
}

void Unk_020102ec::initFaceAnims() {
    using namespace nS;
    s32 t = unk_3e4;
    s32 a = _ZN16PlayerFaceTexRef9getBufferEv(P(0x709));
    s32 b = _ZN20CharaFaceAnimWorkRef7getHeapEv(P(0x70b));
    _ZN13MatTexPatAnim4initEPvS0_jS0_(P(0x70c), t, a, 1, b);
    t = unk_3e4;
    a = _ZN16PlayerFaceTexRef9getBufferEv(P(0x709));
    b = _ZN20CharaFaceAnimWorkRef7getHeapEv(P(0x70b));
    _ZN13MatTexPatAnim4initEPvS0_jS0_(P(0x738), t, a, 1, b);
}

void Unk_020102ec::setEyeAnimForBody(s32 *a, u8 *b) {
    using namespace nS;
    s32 t = unk_768;
    s32 v = CharaAnim_GetEyeAnim(*a);
    if (v == 0x16f && t != 0) {
        v = 0;
    }
    if (v != 0x16f) {
        setEyeAnim(&v, b);
    }
}

void Unk_020102ec::setMouthAnimForBody(s32 *a, u8 *b) {
    using namespace nS;
    s32 t = unk_76c;
    s32 v = CharaAnim_GetMouthAnim(*a);
    if (v == 0x16f && t != 0xba) {
        v = 0xba;
    }
    if (v != 0x16f) {
        setMouthAnim(&v, b);
    }
}

void Unk_020102ec::setEyeAnim(s32 *a, u8 *b) {
    using namespace nS;
    _ZN16CharaFaceAnimRef8loadAnimEiii(P(0x70a), *a, 1, 0);
    s32 r = _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(P(0x70a));
    _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(P(0x70c), r, 0, 0, *b, 0x1000);
    _ZN13MatTexPatAnim6updateEv(P(0x70c));
    unk_768 = *a;
}

void Unk_020102ec::setMouthAnim(s32 *a, u8 *b) {
    using namespace nS;
    _ZN16CharaFaceAnimRef8loadAnimEiii(P(0x70a), *a, 1, 0);
    s32 r = _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(P(0x70a));
    _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(P(0x738), r, 0, 0, *b, 0x1000);
    _ZN13MatTexPatAnim6updateEv(P(0x738));
    unk_76c = *a;
}

void Unk_020102ec::playAnim(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g) {
    using namespace nS;
    s32 t = unk_700;
    s32 v;
    if (t == 0xa1) {
        b = 0;
        f = 0;
    }
    v = g >= 0x137 ? getAnimResIndex((u32 *)&a) : g;
    if (!(a == 0 && t == 0 && *(u16 *)&e == 0 && b != 0 && g >= 0x137)) {
        AnimSlotRef_Load(P(0x6fc), v, 1, 0);
        u32 r = func_021065f8(func_021065dc(AnimSlotRef_GetData(P(0x6fc))), 0);
        BlendAnimModel_Play(P(0x230), r, b, c, d, *(u16 *)&e, 0);
        unk_700 = a;
        unk_708 = c;
    }
    _ZN12Unk_02006d1417applyHeldItemPoseEiPv(this, v, f);
    setEyeAnimForBody(&v, &c);
    _ZN12Unk_020102ec19setMouthAnimForBodyEPiPh(this, &v, &c);
}

void Unk_020102ec::startAnim(s32 a, u32 b, u16 c) {
    using namespace nS;
    playAnim(a, b, 0, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::switchAnim(s32 a, u32 b, u16 c) {
    using namespace nS;
    playAnim(a, b, 0, unk_2dc, unk_2d4_mid, c, 0x137);
}

void Unk_020102ec::startAnimOnce(s32 a, u32 b, u16 c) {
    using namespace nS;
    playAnim(a, b, 1, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::replayAnim() {
    using namespace nS;
    u32 b, a;
    a = (u32)(unk_714 >> 12) << 16;
    b = (u32)(unk_740 >> 12) << 16;
    playAnim(unk_700, 3, unk_2e0, unk_2dc, unk_2d4_mid, 0, 0x137);
    unk_714 = a >> 4;
    unk_740 = b >> 4;
}

void Unk_02006d14::applyHeldItemPose(s32 b, void *c) {
    using namespace nR;
    u16 v[3];
    v[0] = 0xfff1;
    if (!(Unk_020102a0_IsZero(gFieldSceneKind) && _ZN12Unk_02006d1414testActionFlagEj(this, 0))) {
        v[0] = 0xfff1;
    } else {
        PlayerActor_GetHeldItem(&v[1], ((nR::Unk_02006d14 *)this));
        v[0] = v[1];
    }
    v[2] = v[0];
    applyHoldPose(&v[2], b, c);
}

void Unk_02006d14::applyHoldPose(u16 *p, s32 b, void *c) {
    using namespace nR;
    s32 r6 = HeldItem_GetHandPose(p);
    s32 r7 = CharaAnim_GetHoldPoseMode(b);
    if (r7 == 3 || r6 == 0x144) goto B;
    if (r7 == 1) {
        if (!Unk_02010154_In(p)) {
            if (*p < 0x13a0 || *p > 0x13a7) goto B;
        }
    }
    {
        s32 n, cnt, item;
        s32 i;
        AnimSlotRef_Load(((nR::Unk_02006d14 *)this)->unk_6fd, r6, 1, 0);
        AnimSlotRef_GetData(((nR::Unk_02006d14 *)this)->unk_6fd);
        _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(((nR::Unk_02006d14 *)this)->unk_230, func_021065f8(func_021065dc(), 0), (s32)c, 0, 0x1000, 0, 0, 0);
        n = CharaAnim_GetJointGroup(r6);
        if (n < 4) {
            cnt = JointGroup_GetRangeCount();
            for (i = 0; (u32)i < (u32)cnt; i++) {
                item = JointGroup_GetRangeFirst(n, i);
                _ZN17TwoLayerAnimModel20assignJointsToLayer2Ejj(((nR::Unk_02006d14 *)this)->unk_230, item, JointGroup_GetRangeLast(n, i));
            }
            if (r7 == 2) {
                i = JointGroup_GetRangeFirst(1, 0);
                _ZN17TwoLayerAnimModel23releaseJointsFromLayer2Ejj(((nR::Unk_02006d14 *)this)->unk_230, i, JointGroup_GetRangeLast(1, 0));
            }
        } else {
            _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(((nR::Unk_02006d14 *)this)->unk_230, (s32)c, 0);
        }
    }
    goto end;
B:
    _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(((nR::Unk_02006d14 *)this)->unk_230, (s32)c, 0);
end:
    ((nR::Unk_02006d14 *)this)->unk_704 = r6;
}

s32 Unk_02006d14::getTargetWalkSpeed() {
    using namespace nR;
    s32 r4 = func_01ffcb0c(_ZN11PlayerActor17getInputMagnitudeEv(this), 0x6e2);
    if (r4 > 0x6e2) {
        r4 = 0x6e2;
    } else if (r4 < 0x108) {
        r4 = 0;
    }
    if (_ZN13ActorCollider12isHitByGroupEj(((nR::Unk_02006d14 *)this)->unk_170, 8) && _ZN13ActorCollider17isPushedFromAngleEi(((nR::Unk_02006d14 *)this)->unk_170, ((nR::Unk_02006d14 *)this)->unk_8e)) {
        if (r4 > 0x245) r4 = 0x245;
    } else if (((nR::Unk_02006d14 *)this)->unk_7a4 & 8) {
        if (r4 > 0x307) r4 = 0x307;
    }
    return r4;
}

void Unk_02006d14::applySkinHairPalette(s32 a, s32 b) {
    using namespace nR;
    s32 r6 = PlayerActor_GetFaceTexIndex(this);
    s32 r1, r4;
    if (PlayerActor_GetFaceAltFlag(this)) {
        r1 = b + ((r6 - 0x10) << 3);
    } else {
        r1 = b + (r6 << 3);
    }
    r4 = b + ((a << 3) + 0x80);
    if (r1 < 0x80) {
        PlayerPaletteRef_LoadSkin(((nR::Unk_02006d14 *)this)->unk_79c);
    }
    if (r4 >= 0x80 && r4 < 0xc0) {
        PlayerPaletteRef_LoadHair(((nR::Unk_02006d14 *)this)->unk_79c, r4);
    }
}

void Unk_02006d14::setShirtTexture(void *p) {
    using namespace nR;
    _ZN16CharaClothTexRef8loadItemEPtiii(((nR::Unk_02006d14 *)this)->unk_770, (s32)p, PlayerActor_GetPlayerData(this), 0, 0);
}

void Unk_02006d14::requestShirtTexUpload() {
    using namespace nR;
    u32 r4 = ((nR::Unk_02006d14 *)this)->unk_28c;
    CharaClothTexRef_GetBuffer(((nR::Unk_02006d14 *)this)->unk_770);
    _ZN14MatTexVramTask7requestEPvjS0_jj(((nR::Unk_02006d14 *)this)->unk_774, r4, sPlayerShirtTexName, ClothTex_GetTexThunk(), 0, 0);
}

s32 Unk_02006d14::tryInteract() {
    using namespace nR;
    if (TalkRequestFlags_IsResetti(((nR::Unk_02006d14 *)this)) || _ZN12Unk_02006d1414testActionFlagEj(this, 0x13)) return FALSE;
    if (_ZN11PlayerActor13func_0200d5b8Ev(this)) {
        TalkRequest_AddTalk(((nR::Unk_02006d14 *)this), ((nR::Unk_02006d14 *)this)->unk_138);
        if (((nR::Unk_02006d14 *)this)->unk_138 == 0) {
            if (Character_FindInteractionTarget(((nR::Unk_02006d14 *)this))) return TRUE;
        } else if (!_ZN9Character16checkInteractionEPS_(((nR::Unk_02006d14 *)this)->unk_138, ((nR::Unk_02006d14 *)this))) {
            if (((nR::Unk_02006d14 *)this)->unk_138->vfunc_54(((nR::Unk_02006d14 *)this))) return TRUE;
        } else {
            return TRUE;
        }
    }
    if (useHeldTool()) return TRUE;
    if (((nR::Unk_02006d14 *)this)->unk_13c != 0 && ((nR::Unk_02006d14 *)this)->unk_16c == 2) {
        volatile Unk_0200ff08_Vec saved;
        Unk_0200ff08_Vec res;
        saved.x = ((nR::Unk_02006d14 *)this)->unk_154;
        saved.y = ((nR::Unk_02006d14 *)this)->unk_158;
        saved.z = ((nR::Unk_02006d14 *)this)->unk_15c;
        PlayerActor_OffsetByAngle(&res, ((nR::Unk_02006d14 *)this), ((nR::Unk_02006d14 *)this)->unk_5c, &((nR::Unk_02006d14 *)this)->unk_8e, data_020d5e38);
        ((nR::Unk_02006d14 *)this)->unk_154 = res.x;
        ((nR::Unk_02006d14 *)this)->unk_158 = res.y;
        ((nR::Unk_02006d14 *)this)->unk_15c = res.z;
        s32 r = interactAt(0);
        ((nR::Unk_02006d14 *)this)->unk_154 = saved.x;
        ((nR::Unk_02006d14 *)this)->unk_158 = saved.y;
        ((nR::Unk_02006d14 *)this)->unk_15c = saved.z;
        return r;
    }
    return FALSE;
}

void Unk_02006d14::applyFaceItemChange() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 != 0) return;
    s32 r4 = 0x4b;
    volatile u16 buf = ((nR::Unk_02006d14 *)this)->unk_c8c;
    BOOL in = FALSE;
    u16 v = buf;
    if (buf >= 0x1431 && v <= 0x1470) in = TRUE;
    if (in) {
        s32 idx;
        if (v >= 0x1431 && v <= 0x1470) idx = v - 0x1431; else idx = -1;
        if (idx >= 0 && (u32)idx < data_020cb35c) {
            r4 = PlayerGlassesModel_GetAccessoryModelId(idx);
        }
    } else if (v >= 0x1471 && v <= 0x1491) {
        if (Item_IsFlowerAltItem((u16 *)&buf)) {
            s32 idx = Item_GetFlowerAltOrdinal((u16 *)&buf);
            if (idx >= 0 && (u32)idx < data_020cb360) {
                r4 = PlayerGlassesModel_GetFlowerModelId(idx);
            }
        }
    }
    PlayerGlassesModelRef_Load(((nR::Unk_02006d14 *)this)->unk_598, r4);
    if (PlayerGlassesModelRef_GetModelId(((nR::Unk_02006d14 *)this)->unk_598) != 0x4b) {
        PlayerGlassesModelRef_RelocateTexture(((nR::Unk_02006d14 *)this)->unk_598);
        PlayerGlassesModelRef_CancelTexUpload(((nR::Unk_02006d14 *)this)->unk_598);
        _ZN11CachedModel7releaseEv(((nR::Unk_02006d14 *)this)->unk_4fc);
        _ZN11CachedModel11setFromFileEPv(((nR::Unk_02006d14 *)this)->unk_4fc, PlayerGlassesModelRef_GetBuffer(((nR::Unk_02006d14 *)this)->unk_598));
        PlayerGlassesModelRef_PollTexUpload(((nR::Unk_02006d14 *)this)->unk_598);
        ((nR::Unk_02006d14 *)this)->unk_c88 = 1;
    } else {
        ((nR::Unk_02006d14 *)this)->unk_c88 = 1;
        pollFaceItemLoad();
    }
}

void Unk_02006d14::pollFaceItemLoad() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 == 1) {
        s32 r = 1;
        if (PlayerGlassesModelRef_GetModelId(((nR::Unk_02006d14 *)this)->unk_598) != 0x4b) {
            r = PlayerGlassesModelRef_PollTexUpload(((nR::Unk_02006d14 *)this)->unk_598);
        }
        if (r != 0) {
            ((nR::Unk_02006d14 *)this)->unk_c88 = 2;
        }
    }
}

BOOL Unk_02006d14::requestFaceItemChange(u16 *p) {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 == 2) {
        ((nR::Unk_02006d14 *)this)->unk_c88 = 0;
        ((nR::Unk_02006d14 *)this)->unk_c8c = *p;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::applyHatChange() {
    using namespace nR;
    u16 a[2];
    s32 x, y;
    s32 r4, r6, r7;
    s32 t;
    if (((nR::Unk_02006d14 *)this)->unk_c90 != 0) return;
    a[0] = 0xfff1;
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 12)) {
        a[0] = 0xfff1;
    } else {
        a[0] = ((nR::Unk_02006d14 *)this)->unk_c94;
    }
    PlayerHead_GetModelIds((s32)PlayerActor_GetGender(this), ((nR::Unk_02006d14 *)this)->unk_c96, a, &y, &x);
    a[1] = ((nR::Unk_02006d14 *)this)->unk_c94;
    PlayerHead_Load(((nR::Unk_02006d14 *)this)->unk_424, y, x, &a[1], (s32)PlayerActor_GetPlayerData(this));
    applySkinHairPalette(((nR::Unk_02006d14 *)this)->unk_c97, (s32)_ZN12Unk_020102ec7calcTanEj(this, 0));
    r4 = NNS_G3dGetTex(PlayerHead_GetModelFile(((nR::Unk_02006d14 *)this)->unk_424, 0));
    r6 = 0;
    if (x < 0x9e) {
        r6 = NNS_G3dGetTex(PlayerHead_GetModelFile(((nR::Unk_02006d14 *)this)->unk_424, 1));
    }
    if (((nR::Unk_02006d14 *)this)->unk_c98 != 0) {
        r7 = NNS_G3dGetTex(_ZN16PlayerFaceTexRef9getBufferEv(&((nR::Unk_02006d14 *)this)->unk_709));
        bindTextureByName((void *)r7, (void *)r4, sPlayerEyeTexName, sPlayerEyeTexName);
        bindTextureByName((void *)r7, (void *)r4, sPlayerMouthTexName, sPlayerMouthTexName);
    }
    r7 = NNS_G3dGetTex(PlayerPaletteRef_GetSkin(((nR::Unk_02006d14 *)this)->unk_79c));
    t = NNS_G3dGetTex(PlayerPaletteRef_GetHair(((nR::Unk_02006d14 *)this)->unk_79c));
    bindPaletteByName((void *)r7, (void *)r4, sPlayerSkinPalName, sPlayerSkinPalName);
    bindPaletteByName((void *)t, (void *)r4, sPlayerHairPalName, sPlayerHairPalName);
    if (r6 != 0) {
        bindPaletteByName((void *)r7, (void *)r6, sPlayerSkinPalName, sPlayerSkinPalName);
    }
    PlayerHead_RelocateTextures(((nR::Unk_02006d14 *)this)->unk_424);
    PlayerHead_CancelTexUpload(((nR::Unk_02006d14 *)this)->unk_424);
    PlayerHead_PollTexUpload(((nR::Unk_02006d14 *)this)->unk_424);
    _ZN11CachedModel7releaseEv(((nR::Unk_02006d14 *)this)->unk_388);
    _ZN11CachedModel7releaseEv(((nR::Unk_02006d14 *)this)->unk_460);
    _ZN11CachedModel11setFromFileEPv(((nR::Unk_02006d14 *)this)->unk_388, PlayerHead_GetModelFile(((nR::Unk_02006d14 *)this)->unk_424, 0));
    if (PlayerHead_GetModelId(((nR::Unk_02006d14 *)this)->unk_424, 1) < 0x9e) {
        _ZN11CachedModel11setFromFileEPv(((nR::Unk_02006d14 *)this)->unk_460, PlayerHead_GetModelFile(((nR::Unk_02006d14 *)this)->unk_424, 1));
    }
    if (((nR::Unk_02006d14 *)this)->unk_c98 == 0) {
        u32 p = (((nR::Unk_02006d14 *)this)->unk_714 << 4) >> 16;
        u32 q = (((nR::Unk_02006d14 *)this)->unk_740 << 4) >> 16;
        _ZN13MatTexPatAnim7releaseEv(((nR::Unk_02006d14 *)this)->unk_70c);
        _ZN13MatTexPatAnim7releaseEv(((nR::Unk_02006d14 *)this)->unk_738);
        _ZN20CharaFaceAnimWorkRef7getHeapEv(&((nR::Unk_02006d14 *)this)->unk_70b);
        func_020e885c();
        _ZN12Unk_020102ec13initFaceAnimsEv(this);
        _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(((nR::Unk_02006d14 *)this)->unk_70c, _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(&((nR::Unk_02006d14 *)this)->unk_70a), p, 0, ((nR::Unk_02006d14 *)this)->unk_708, 0x1000);
        _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(((nR::Unk_02006d14 *)this)->unk_738, _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(&((nR::Unk_02006d14 *)this)->unk_70a), q, 0, ((nR::Unk_02006d14 *)this)->unk_708, 0x1000);
    }
    ((nR::Unk_02006d14 *)this)->unk_c90 = 1;
}

void Unk_02006d14::pollHatLoad() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c90 == 1) {
        if (PlayerHead_PollTexUpload(((nR::Unk_02006d14 *)this)->unk_424)) {
            ((nR::Unk_02006d14 *)this)->unk_c90 = 2;
        }
    }
}

BOOL Unk_02006d14::requestHatChange(u16 *p, u8 b, u8 c, u8 d) {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c90 == 2) {
        ((nR::Unk_02006d14 *)this)->unk_c90 = 0;
        ((nR::Unk_02006d14 *)this)->unk_c94 = *p;
        ((nR::Unk_02006d14 *)this)->unk_c96 = b;
        ((nR::Unk_02006d14 *)this)->unk_c97 = c;
        ((nR::Unk_02006d14 *)this)->unk_c98 = d;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::bindTextureByName(void *a, void *b, void *c, void *d) {
    using namespace nR;
    G3dRes_CopyTexByName(a, b, c, d);
}

void Unk_02006d14::bindPaletteByName(void *a, void *b, void *c, void *d) {
    using namespace nR;
    G3dRes_CopyPlttByName(a, b, c, d);
}

BOOL Unk_02006d14::isPosInReach(s32 *pos, u32 idx) {
    using namespace nR;
    if (func_020e9650(&((nR::Unk_02006d14 *)this)->unk_6f0) < (s32)(sPlayerReachDist[idx] << 13) >> 12) {
        s32 a = func_020e7b98(pos[0] - ((nR::Unk_02006d14 *)this)->unk_6f0, pos[2] - ((nR::Unk_02006d14 *)this)->unk_6f8);
        if (func_020e780c(a, ((nR::Unk_02006d14 *)this)->unk_8e) < 0x2aaa) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_02006d14::useHeldTool() {
    using namespace nR;
    if (Unk_0200f9d4_IsOne(gFieldSceneKind)) {
        return PlayerActor_RoomUseTool(((nR::Unk_02006d14 *)this));
    } else {
        return PlayerActor_FieldUseTool(((nR::Unk_02006d14 *)this));
    }
}

s32 Unk_02006d14::interactAt(s32 a) {
    using namespace nR;
    if (Unk_0200f9d4_IsOne(gFieldSceneKind)) {
        return PlayerActor_RoomInteractAt(((nR::Unk_02006d14 *)this), a, 0);
    } else {
        return PlayerActor_FieldInteractAt(((nR::Unk_02006d14 *)this), a);
    }
}

u32 Unk_02006d14::getFieldAnswerKind() {
    using namespace nR;
    return *(u32 *)((u8 *)FieldAction_Get(((nR::Unk_02006d14 *)this)->unk_808) + 0xc);
}

BOOL Unk_02006d14::startFieldQuery(s32 a, s32 mode, s32 idx) {
    using namespace nQ;
    if (((nQ::Unk_02006d14 *)this)->unk_808 == -1 && gSceneBlockMap != NULL) {
        Unk_0200f6d4_V2 v;
        v.x = 0;
        v.y = 0;
        FieldPos_ToUnit(&v.x, &v.y, a);
        switch (mode) {
        case 0:
            ((nQ::Unk_02006d14 *)this)->unk_808 = FieldAction_RequestPickUpForAid((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx]);
            break;
        case 1:
            ((nQ::Unk_02006d14 *)this)->unk_808 = FieldAction_RequestToolForAid((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx], 0, 0xfff1);
            break;
        case 2:
            ((nQ::Unk_02006d14 *)this)->unk_808 = FieldAction_RequestFillHoleForAid((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx]);
            break;
        }
    }
    return ((nQ::Unk_02006d14 *)this)->unk_808 != -1 ? TRUE : FALSE;
}

void Unk_02006d14::pollStoreQuery() {
    using namespace nQ;
    if (((nQ::Unk_02006d14 *)this)->unk_80c != -1) {
        switch (FieldAction_PollDrop(((nQ::Unk_02006d14 *)this)->unk_80c)) {
        case 1:
        case 2:
            FieldAction_Release(((nQ::Unk_02006d14 *)this)->unk_80c);
            ((nQ::Unk_02006d14 *)this)->unk_80c = -1;
        }
    }
}

s32 Unk_02006d14::pollFieldQuery() {
    using namespace nQ;
    s32 r = 0;
    ((nQ::Unk_02006d14 *)this)->unk_810 = 0;
    if (((nQ::Unk_02006d14 *)this)->unk_808 != -1) {
        r = FieldAction_PollResult(((nQ::Unk_02006d14 *)this)->unk_808);
        switch (r) {
        case 1:
        case 2:
            ((nQ::Unk_02006d14 *)this)->unk_810 = _ZN12Unk_02006d1418getFieldAnswerKindEv(((nQ::Unk_02006d14 *)this));
            FieldAction_Release(((nQ::Unk_02006d14 *)this)->unk_808);
            ((nQ::Unk_02006d14 *)this)->unk_808 = -1;
        }
    }
    return r;
}

s32 Unk_02006d14::startUnitItemQuery(Unk_0200f6d4_V2 *p, s32 a, s32 b) {
    using namespace nQ;
    struct {
        s32 pad;
        Unk_0200f6d4_V2 v;
    } l;
    s32 result;
    if (((nQ::Unk_02006d14 *)this)->unk_808 == -1) {
        s32 x = p->x, y = p->y;
        s32 hx = x >> 4, hy = y >> 4;
        void *r = BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (r == NULL) {
            ((nQ::Unk_02006d14 *)this)->unk_81c = ((nQ::Unk_02006d14 *)this)->unk_81e = 0xfff1;
            result = 2;
        } else {
            ((nQ::Unk_02006d14 *)this)->unk_81c = ((nQ::Unk_02006d14 *)this)->unk_81e = *(u16 *)r;
            l.v.x = p->x;
            l.v.y = p->y;
            ((nQ::Unk_02006d14 *)this)->unk_808 = Unk_0200f7a0_NS::FieldAction_RequestToolForAid((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, &l.v, a, b, 0xfff1);
            if (((nQ::Unk_02006d14 *)this)->unk_808 == -1) {
                result = 0;
            } else {
                ((nQ::Unk_02006d14 *)this)->unk_814 = pollFieldQuery();
                switch (((nQ::Unk_02006d14 *)this)->unk_814) {
                case 0: result = 1; break;
                case 2: result = 0; break;
                default: result = 3; break;
                }
            }
        }
    } else {
        result = 1;
    }
    return result;
}

BOOL Unk_02006d14::requestByFieldAnswer(s32 a, s32 b) {
    using namespace nQ;
    s32 t = _ZN12Unk_02006d1418getFieldAnswerKindEv(((nQ::Unk_02006d14 *)this));
    Unk_0200f6d4_V2 v;
    v.x = 0;
    v.y = 0;
    FieldPos_ToUnit(&v.x, &v.y, a);
    switch (t) {
    case 3:
    case 4:
    case 0x15:
    case 0x16:
        if (b) {
            PlayerActor_RequestPickUpItem(((nQ::Unk_02006d14 *)this), v, -2, 6, -1);
        } else {
            _ZN12Unk_02006d1418requestPickUpReachE17Unk_0200b750_Pairijs(((nQ::Unk_02006d14 *)this), v, -1, 6, -1);
        }
        return TRUE;
    case 5:
        PlayerActor_RequestPluckReach(((nQ::Unk_02006d14 *)this), v, 6, -1);
        return TRUE;
    case 0x14:
        PlayerActor_RequestAct66(((nQ::Unk_02006d14 *)this), v, 0, 6, -1);
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02006d14::getHeldHoldableIndex() {
    using namespace nQ;
    Unk_0200f660_S s;
    PlayerActor_GetHeldItem(&s, ((nQ::Unk_02006d14 *)this));
    if (_ZN12Unk_02006d1414testActionFlagEj(((nQ::Unk_02006d14 *)this), 0)) {
        BOOL ok;
        if (Item_IsFurniture(&s)) {
            s.b = 0xfff1;
            ok = Item_GetFurnitureIndex(&s.a) == Item_GetFurnitureIndex(&s.b);
        } else {
            ok = s.a == 0xfff1;
        }
        if (!ok) return ItemInfo_GetHoldableIndex(&s) + 1;
    }
    return 0;
}

s32 Unk_02006d14::getHeldToolKind() {
    using namespace nQ;
    s32 f = getHeldHoldableIndex();
    if (f <= 0) return 0;
    u16 v = f + 0x1368;
    if (v <= 0x136a) return 1;
    if (v <= 0x1373) return 2;
    if (v <= 0x1375) return 3;
    if (v <= 0x1377) return 4;
    if (v <= 0x1379) return 5;
    if (v <= 0x137b) return 6;
    if (v == 0x137c) return 7;
    if (v == 0x137d) return 8;
    if (v <= 0x137f) return 9;
    if (v <= 0x13a7) return 10;
    return 0;
}

namespace nQ {
extern "C" void PlayerActor_StepTowardPose(Unk_02006d14 *o, s32 a, s32 b, s32 c) {
    PlayerActor_StepTowardXZ(o, a, b);
    _ZN12Unk_02006d1410turnTowardEi(o, c);
}
}

namespace nQ {
extern "C" void PlayerActor_StepTowardPoseFast(Unk_02006d14 *o, s32 a, s32 b, s32 c) {
    s32 *p = &o->unk_5c.x;
    PlayerActor_ApproachValue(p, a, 0xe66, 0x4cd, 0x31);
    p += 2;
    PlayerActor_ApproachValue(p, b, 0xe66, 0x4cd, 0x31);
    _ZN12Unk_02006d1410turnTowardEi(o, c);
}
}

namespace nQ {
extern "C" void PlayerActor_StepTowardXZ(Unk_02006d14 *o, s32 a, s32 b) {
    s32 *p = &o->unk_5c.x;
    PlayerActor_ApproachCoord(p, a);
    p += 2;
    PlayerActor_ApproachCoord(p, b);
}
}

s32 Unk_02006d14::turnToward(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    PlayerActor_TurnAngle(&t, a);
    return _ZN12Unk_020102ec9setAngleYEPs(((nQ::Unk_02006d14 *)this), &t);
}

s32 Unk_02006d14::turnToCamera(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    BOOL r = PlayerActor_ApproachAngle(&t, 0, a, 0x1770000, 0xc0000) == 0;
    _ZN12Unk_020102ec9setAngleYEPs(((nQ::Unk_02006d14 *)this), &t);
    return r;
}

s32 Unk_02006d14::turnAwayFromCamera(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    BOOL r = PlayerActor_ApproachAngle(&t, -0x8000, a, 0x1770000, 0xc0000) == 0;
    _ZN12Unk_020102ec9setAngleYEPs(((nQ::Unk_02006d14 *)this), &t);
    return r;
}

namespace nQ {
extern "C" void PlayerActor_GetFrontUnitCenter(Unk_02006d14 *a, Unk_02006d14 *b) {
    Unk_0200f070_V3 v;
    PlayerActor_GetFrontPoint(&v, b);
    FieldPos_SnapToUnitCenter(a, &v);
}
}

namespace nQ {
extern "C" void PlayerActor_GetFrontPoint(Unk_0200f070_V3 *out, Unk_02006d14 *o) {
    PlayerActor_OffsetByAngle(out, o, &o->unk_5c, (u16 *)&o->unk_8e, &sPlayerFrontPointDist);
}
}

namespace nQ {
extern "C" void PlayerActor_OffsetByAngle(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p) {
    s32 i;
    s32 s, c;
    *out = *in;
    i = (*ang >> 4) * 2;
    s = func_01ffcb0c(data_02135f44[i + 1], *p);
    c = func_01ffcb0c(data_02135f44[i], *p);
    out->x += c;
    out->z += s;
}
}

void Unk_02006d14::updateFootstepFx() {
    using namespace nQ;
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nQ::Unk_02006d14 *)this)->unk_2cc, 1) || _ZN13AnimFrameCtrl14hasPassedFrameEi(((nQ::Unk_02006d14 *)this)->unk_2cc, 9)) {
        s16 rot[2];
        Unk_0200f070_V3 v;
        rot[0] = ((nQ::Unk_02006d14 *)this)->unk_8e;
        rot[1] = rot[0] + 0x8000;
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nQ::Unk_02006d14 *)this)->unk_2cc, 9)) {
            v.x = ((nQ::Unk_02006d14 *)this)->unk_6c4[0];
            v.y = ((nQ::Unk_02006d14 *)this)->unk_6c4[1];
            v.z = ((nQ::Unk_02006d14 *)this)->unk_6c4[2];
        } else {
            v.x = ((nQ::Unk_02006d14 *)this)->unk_6d0[0];
            v.y = ((nQ::Unk_02006d14 *)this)->unk_6d0[1];
            v.z = ((nQ::Unk_02006d14 *)this)->unk_6d0[2];
        }
        v.y = ((nQ::Unk_02006d14 *)this)->unk_5c.y;
        if (((nQ::Unk_02006d14 *)this)->unk_700 == 2) {
            Effect_Create(0, &v, &rot[1], 0);
        }
        Effect_Create(0x27, &v, &rot[0], 0);
        playFootstepSe();
    }
}

void Unk_02006d14::playFootstepSe() {
    using namespace nQ;
    u32 f = ((nQ::Unk_02006d14 *)this)->unk_b0;
    BOOL c = (f & 4) ? TRUE : FALSE;
    if (!(c && ((f & 2) ? TRUE : FALSE))) {
        if (_ZN12Unk_02006d1414testActionFlagEj(((nQ::Unk_02006d14 *)this), 0xa)) {
            BOOL flag = ((nQ::Unk_02006d14 *)this)->unk_700 == 2;
            Unk_0200f070_V3 v;
            v.x = (((nQ::Unk_02006d14 *)this)->unk_6c4[0] + ((nQ::Unk_02006d14 *)this)->unk_6d0[0]) >> 1;
            v.y = (((nQ::Unk_02006d14 *)this)->unk_6c4[1] + ((nQ::Unk_02006d14 *)this)->unk_6d0[1]) >> 1;
            v.z = (((nQ::Unk_02006d14 *)this)->unk_6c4[2] + ((nQ::Unk_02006d14 *)this)->unk_6d0[2]) >> 1;
            if (_ZN12Unk_02006d1414testActionFlagEj(((nQ::Unk_02006d14 *)this), 0x19)) {
                Snd_SeEmitterPlayAlternate(((nQ::Unk_02006d14 *)this)->unk_838, Footstep_GetSeAtPos(&v), flag);
            } else {
                Snd_SeEmitterPlayAlternate(((nQ::Unk_02006d14 *)this)->unk_87c, Footstep_GetSeAtPos(&v), flag);
            }
        }
    }
}

namespace nQ {
extern "C" void PlayerActor_CompareLastPlayDateNow(void *o) {
    u32 a[4];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    PlayerActor_CompareLastPlayDate(o, a, (u8 *)&a[2]);
}
}

namespace nQ {
extern "C" void PlayerActor_CompareLastPlayDate(void *o, void *a, u8 *b) {
    Unk_0200f17c_Date d0, d1, d2;
    PlayerActor_GetPlayerData(o);
    d0 = _ZN10PlayerData15getLastPlayDateEv();
    d1 = d0;
    d2 = d1;
    Clock_GetDateTime(a);
    MI_CpuCopy8(a, b, 8);
    b[5] = d2.a;
    b[4] = d2.b;
    b[3] = d2.c;
    DateTime_Compare(a, b, 0x3f);
}
}

namespace nQ {
extern "C" void PlayerActor_SetLastPlayDate(Unk_02006d14 *o, s32 a, Unk_0200f17c_Date *d) {
    _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(a, *d);
    u16 *r = (u16 *)DebugVar_GetPtr(0, 0x50);
    *r = d->c * 10 + (d->b * 1000 + PlayerActor_GetTan(o));
    if (!_ZN12Unk_02006d1416isGuestInSessionEv(o)) {
        *PlayerSession_GetLastPlayDate() = *d;
    }
}
}

BOOL Unk_02006d14::checkLidAndError() {
    using namespace nQ;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nQ::Unk_02006d14 *)this)->unk_7fc)) {
        if (_ZN12Unk_02006d1414testActionFlagEj(((nQ::Unk_02006d14 *)this), 0xb) || _ZN12Unk_02006d1414testActionFlagEj(((nQ::Unk_02006d14 *)this), 0x1b)) return FALSE;
        if (LowBattery_Poll()) {
            _ZN12Unk_0200804019requestErrorMessageEhjj(((nQ::Unk_02006d14 *)this), 0, 6, -1);
            return TRUE;
        }
        if ((s32)(*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) {
            _ZN12Unk_0200804016requestLidClosedEjj(((nQ::Unk_02006d14 *)this), 1, -1);
            return TRUE;
        }
    }
    return FALSE;
}

namespace nQ {
extern "C" void PlayerActor_CalcHandItemPos(Unk_0200f070_V3 *dst, Unk_02006d14 *o, s32 *p) {
    Unk_0200f070_M m = o->unk_694;
    s32 tx = m.v[9], ty = m.v[10], tz = m.v[11];
    m.v[9] = m.v[10] = m.v[11] = 0;
    Unk_0200f070_M m2 = m;
    Unk_0200f070_V3 v, out;
    v.x = func_01ffcb0c(0x800, *p);
    v.y = func_01ffcb0c(-0x400, *p);
    v.z = 0;
    MTX_MultVec43(&v, &m2, &out);
    Unk_0200f070_V3 r;
    tx += out.x;
    ty += out.y;
    tz += out.z;
    r.x = tx;
    r.y = ty;
    r.z = tz;
    WorldCurve_FromCurved(dst, &r);
}
}

void Unk_02006d14::updateShownItemPos(u32 a, ...) {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    PlayerActor_CalcHandItemPos(&v, ((nP::Unk_02006d14 *)this), &a);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_828, v.z, 0x800, 0x2000, 0x333);
}

BOOL Unk_02006d14::getNetTransformInArea(Unk_02006d14_Vec3 *out, s16 *ang) {
    using namespace nP;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nP::Unk_02006d14 *)this)->unk_7fc)) {
        return FALSE;
    }
    if (testActionFlag(0x10)) {
        return FALSE;
    }
    out->y = ((nP::Unk_02006d14 *)this)->unk_5c.y + 0;
    u8 buf;
    if (!_ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(((nP::Unk_02006d14 *)this), &buf, &out->x, &out->z, ang)) {
        return FALSE;
    }
    if (buf == Scene_GetCurrent()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02006d14::netFollowTransform() {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    s16 ang;
    if (getNetTransformInArea(&v, &ang)) {
        Unk_02006d14_Vec3 *pos = &((nP::Unk_02006d14 *)this)->unk_5c;
        if (pos->x == v.x && pos->z == v.z && ang == ((nP::Unk_02006d14 *)this)->unk_8e) {
            return TRUE;
        }
        if (func_020e9650(pos, &v) >= 0xe000) {
            Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_68;
            *q = v;
            *pos = *q;
            ((nP::Unk_02006d14 *)this)->unk_8e = ang;
            return FALSE;
        } else {
            PlayerActor_StepTowardPoseFast(((nP::Unk_02006d14 *)this), v.x, v.z, ang);
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_02006d14::netSyncNearUnit(s32 *p) {
    using namespace nP;
    Unk_02006d14_Vec3 t;
    FieldPos_FromUnitCenter(&t, p[0], p[1]);
    return netSyncNearPoint(&t);
}

BOOL Unk_02006d14::netSyncNearPoint(Unk_02006d14_Vec3 *p) {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    s16 ang;
    Unk_02006d14_Vec3 *pos = &((nP::Unk_02006d14 *)this)->unk_5c;
    if (getNetTransformInArea(&v, &ang)) {
        if (func_020e9650(&v, p) >= 0x4000) {
            ang = func_020e7b98(p->x - pos->x, p->z - pos->z);
            v.x = p->x - func_01ffcb0c(0x2000, data_02135f44[(u16)ang >> 4 << 1]);
            v.z = p->z - func_01ffcb0c(0x2000, data_02135f44[((u16)ang >> 4 << 1) + 1]);
        } else {
            ang = ((nP::Unk_02006d14 *)this)->unk_8e;
        }
    } else {
        return TRUE;
    }
    if (func_020e9650(pos, &v) <= 0x200 && func_020e780c(((nP::Unk_02006d14 *)this)->unk_8e, ang) < 0x100) {
        return TRUE;
    }
    if (func_020e9650(pos, &v) >= 0xe000) {
        Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_68;
        *q = v;
        *pos = *q;
        ((nP::Unk_02006d14 *)this)->unk_8e = ang;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::playSe(u32 a) {
    using namespace nP;
    u32 f = ((nP::Unk_02006d14 *)this)->unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (testActionFlag(0x19)) {
            func_02003e70(((nP::Unk_02006d14 *)this)->unk_838, a, 0x7f, 0);
        } else {
            func_02003e70(((nP::Unk_02006d14 *)this)->unk_87c, a, 0x7f, 0);
        }
    }
}

void Unk_02006d14::playSeAt(u32 a, Unk_02006d14_Vec3 *v) {
    using namespace nP;
    u32 f = ((nP::Unk_02006d14 *)this)->unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (testActionFlag(0x19)) {
            Snd_SeEmitterPlayHeld(((nP::Unk_02006d14 *)this)->unk_838, a, 0x7f, 0);
        } else {
            Snd_SeEmitterPlayHeld(((nP::Unk_02006d14 *)this)->unk_87c, a, 0x7f, 0);
        }
        ((nP::Unk_02006d14 *)this)->unk_8c0 = v->x;
        ((nP::Unk_02006d14 *)this)->unk_8c4 = v->y;
        ((nP::Unk_02006d14 *)this)->unk_8c8 = v->z;
    }
}

u32 Unk_02006d14::testActionFlag(u32 id) {
    using namespace nP;
    return ((nP::Unk_02006d14 *)this)->unk_6e8 & (1 << id);
}

void Unk_02006d14::setActionFlag(u32 id) {
    using namespace nP;
    ((nP::Unk_02006d14 *)this)->unk_6e8 |= (1 << id);
}

void Unk_02006d14::clearActionFlag(u32 id) {
    using namespace nP;
    ((nP::Unk_02006d14 *)this)->unk_6e8 &= ~(1 << id);
}

void Unk_02006d14::loadInputMode() {
    using namespace nP;
    if (InputMode_IsButtons()) {
        ((nP::Unk_02006d14 *)this)->unk_16c = 1;
    } else if (InputMode_IsTouch()) {
        ((nP::Unk_02006d14 *)this)->unk_16c = 2;
    } else {
        ((nP::Unk_02006d14 *)this)->unk_16c = 0;
    }
}

BOOL PlayerActor::vfunc_5c(Unk_02006d14_Vec3 *out) {
    using namespace nP;
    u32 a = ((nP::Unk_02006d14 *)this)->unk_6b8;
    if (a == 0 && ((nP::Unk_02006d14 *)this)->unk_6bc == 0 && ((nP::Unk_02006d14 *)this)->unk_6c0 == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = ((nP::Unk_02006d14 *)this)->unk_6bc;
    out->z = ((nP::Unk_02006d14 *)this)->unk_6c0;
    WorldCurve_FromCurved(out);
    return TRUE;
}

void Unk_02006d14::netSendClothesChange(u32 a, u32 b) {
    using namespace nP;
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u32 buf;
        PlayerActor_PackClothesChange(&buf, b, a);
        CommManager *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &buf, 3);
        _ZN11CommManager9endRecordEjj(g, 0x2b, 4);
    }
}

namespace nP {
extern "C" void PlayerActor_NetSendFaceChange() {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        u8 buf = 0;
        CommManager *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &buf, 1);
        _ZN11CommManager9endRecordEjj(g, 0x2d, 4);
    }
}
}

void Unk_02006d14::netSendTan() {
    using namespace nP;
    CommManager *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g)) {
        u8 buf = PlayerActor_GetTan(((nP::Unk_02006d14 *)this));
        CommManager *g2 = gCommManager;
        _ZN11CommManager11beginRecordEv(g2);
        _ZN11CommManager11writeRecordEPhj(g2, &buf, 1);
        _ZN11CommManager9endRecordEjj(g2, 0x2e, 4);
    }
}

void Unk_02006d14::updateHeadLook() {
    using namespace nP;
    if (testActionFlag(0x15)) {
        PlayerActor_ApproachAngle(&((nP::Unk_02006d14 *)this)->unk_458, ((nP::Unk_02006d14 *)this)->unk_45c, 0x400, 0x1770000, 0xc0000);
        PlayerActor_ApproachAngle(&((nP::Unk_02006d14 *)this)->unk_45a, ((nP::Unk_02006d14 *)this)->unk_45e, 0x400, 0x1770000, 0xc0000);
        if (((nP::Unk_02006d14 *)this)->unk_45c == 0 && ((nP::Unk_02006d14 *)this)->unk_45e == 0 && ((nP::Unk_02006d14 *)this)->unk_458 == 0 && ((nP::Unk_02006d14 *)this)->unk_45a == 0) {
            clearActionFlag(0x15);
        }
    }
}

BOOL Unk_02006d14::canAcceptTalk(u32 id) {
    using namespace nP;
    if (id == 0x1e) {
        if (((nP::Unk_02006d14 *)this)->unk_7d1 == 0 && ((nP::Unk_02006d14 *)this)->unk_c78 == 0) {
            return TRUE;
        }
    } else if (id == 0x4f) {
        if (((nP::Unk_02006d14 *)this)->unk_c78 == 0) {
            return TRUE;
        }
    }
    return sPlayerActionTalkable[id];
}

void Unk_02006d14::netUpdateBodyCollider() {
    using namespace nP;
    s16 s[2];
    volatile s32 sx, sy, sz;
    Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_5c;
    sx = q->x;
    sy = q->y;
    sz = q->z;
    if (((nP::Unk_02006d14 *)this)->unk_1ac != 0 && ((nP::Unk_02006d14 *)this)->unk_17e == 0x15) {
        u32 n = ((nP::Unk_02006d14 *)this)->unk_17f;
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, n) && PlayerActor_IsInAction(2, 4)) {
            Unk_02006d14_Vec3 v;
            if (PlayerActor_GetSlotPosXZ(s, &v.x, &v.z, -1, ((nP::Unk_02006d14 *)this)->unk_7fc)) {
                Unk_02006d14_Vec3 v2;
                Unk_02006d14_Vec3 *p = PlayerActor_GetBodyPos(n);
                Unk_02006d14_Vec3 *q2 = &((nP::Unk_02006d14 *)this)->unk_5c;
                v2 = *q2;
                s32 a = func_020e7b98(p->x - v2.x, p->z - v2.z);
                s[1] = func_020e7b98(v.x - v2.x, v.z - v2.z);
                if (func_020e780c(a, s[1]) < 0x400) {
                    s32 d1 = func_020e9650(&v2, p);
                    s32 d2 = func_020e9650(&v2, &v);
                    if (d1 <= d2) {
                        Unk_02006d14_Vec3 out;
                        if (((nP::Unk_02006d14 *)this)->unk_7fc >= (s32)n) {
                            s[1] = s[1] + 0x4000;
                        } else {
                            s[1] = s[1] - 0x4000;
                        }
                        PlayerActor_OffsetByAngle(&out, ((nP::Unk_02006d14 *)this), &v2, &s[1], (u32)&data_020d5e40);
                        Unk_02006d14_Vec3 *q3 = &((nP::Unk_02006d14 *)this)->unk_5c;
                        *q3 = out;
                    }
                }
            }
        }
    }
    _ZN12Unk_020102ec18updateBodyColliderEv(((nP::Unk_02006d14 *)this));
    q = &((nP::Unk_02006d14 *)this)->unk_5c;
    q->x = sx;
    q->y = sy;
    q->z = sz;
}

void Unk_02006d14::resetHeldToolAnim() {
    using namespace nP;
    s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(this);
    if (r == 4) {
        HeldItemModel_PlayAnim(((nP::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
    } else if (r == 3) {
        HeldItemModel_PlayAnim(((nP::Unk_02006d14 *)this)->unk_59c, 0x13, 3, 0);
    } else if (r == 10) {
        HeldItemModel_PlayAnim(((nP::Unk_02006d14 *)this)->unk_59c, 0x23, 3, 0);
    } else if (r == 6) {
        HeldItemModel_PlayAnim(((nP::Unk_02006d14 *)this)->unk_59c, 0x21, 3, 0);
    }
}

void Unk_02006d14::calcHandMtx() {
    using namespace nP;
    Unk_0200e7f4_T24 buf;
    ((nP::Unk_02006d14 *)this)->unk_d0 = WorldCurve_ToCurved(((nP::Unk_02006d14 *)this)->unk_c4, &((nP::Unk_02006d14 *)this)->unk_5c);
    _ZN5Actor15calcModelMatrixEPv(((nP::Unk_02006d14 *)this), &buf);
    ((nP::Unk_02006d14 *)this)->unk_294 = buf;
    data_021cb69c = ((nP::Unk_02006d14 *)this)->unk_294;
    _ZN5Model8setAlphaEj(((nP::Unk_02006d14 *)this)->unk_230, 0);
    _ZN17TwoLayerAnimModel11drawLayeredEj(((nP::Unk_02006d14 *)this)->unk_230, 0);
    Model_GetJointWorldMtx(((nP::Unk_02006d14 *)this)->unk_230, ((nP::Unk_02006d14 *)this)->unk_694, 11);
}

BOOL Unk_02006d14::isGuestInSession() {
    using namespace nP;
    if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64)) {
        return FALSE;
    }
    if (((nP::Unk_02006d14 *)this)->unk_7fc != 0) {
        return TRUE;
    }
    return FALSE;
}

namespace nP {
extern "C" BOOL PlayerActor_IsWaitingForSlots() {
    s32 t = Scene_GetPrevious();
    if (t == 12 || t == 13 || t == 14 || (u8)(t + 0xd2) <= 1) {
        u32 buf;
        s32 i = 0;
        CommManager *g = gCommManager;
        for (; i < 4; i++) {
            if (_ZN11CommManager12isSlotActiveEi(g, i) && !PlayerActor_GetSlotAngle(&buf, -1, i)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

s32 PlayerActor::vfunc_60() {
    using namespace nP;
    s32 v = ((nP::Unk_02006d14 *)this)->unk_818;
    if (v > 15) {
        v = ((nP::Unk_02006d14 *)this)->unk_818;
    }
    return v;
}

u8 PlayerActor::isLocomotionAction(u32 i) {
    using namespace nO;
    return sPlayerActionIsLocomotion[i];
}

BOOL PlayerActor::getRemoteTransform(u8 *a, s32 *b, s32 *c, u16 *d) {
    using namespace nO;
    struct {
        u8 a;
        s16 b;
    } t;
    s32 t8, tc;
    if (!PlayerActor_GetSlotPosXZ(&t, &t8, &tc, -1, ((nO::PlayerActor *)this)->unk_7fc)) return FALSE;
    if (!PlayerActor_GetSlotAngle(&t.b, -1, ((nO::PlayerActor *)this)->unk_7fc)) return FALSE;
    *a = t.a;
    *b = t8;
    *c = tc;
    *d = t.b;
    return TRUE;
}

namespace nO {
extern "C" BOOL PlayerActor_CalcNetFollowAngle(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out) {
    s32 r5;
    BOOL r;
    if (c < func_01ffcb0c(0x108, 0x108)) return FALSE;
    r5 = func_020e7b98(a, b);
    if (c >= func_01ffcb0c(0x2666, 0x2666)) {
        r = TRUE;
    } else {
        s32 diff = (s16)(r5 - d);
        if (diff < 0) diff = -diff;
        if (diff < 0x4000) r = TRUE; else r = FALSE;
    }
    if (r) *out = r5;
    return r;
}
}

PlayerActionRequest::PlayerActionRequest() {
    using namespace nO;}

PlayerActionRequest::~PlayerActionRequest() {
    using namespace nO;}

Unk_0200e2c8::Unk_0200e2c8() {
    using namespace nO;}

Unk_0200e2c8::~Unk_0200e2c8() {
    using namespace nO;}

void PlayerActionRequest::assign(s32 a, s32 b, s16 c) {
    using namespace nO;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

BOOL PlayerActor::pushRequest(nO::Unk_0200e248_Rec *r) {
    using namespace nO;
    s32 n = ((nO::PlayerActor *)this)->unk_c78;
    if (n < 0x1e) {
        if (((nO::PlayerActor *)this)->unk_c7c >= 0) {
            s32 t = r->unk_04;
            if (getRequest(((nO::PlayerActor *)this)->unk_c7c)->unk_04 < t) {
                ((nO::PlayerActor *)this)->unk_c7c = ((nO::PlayerActor *)this)->unk_c78;
            }
        } else {
            ((nO::PlayerActor *)this)->unk_c7c = n;
        }
        Unk_0200e248_Rec *d = &((nO::PlayerActor *)this)->unk_930[((nO::PlayerActor *)this)->unk_c78];
        d->unk_00 = r->unk_00;
        d->unk_04 = r->unk_04;
        d->unk_08 = r->unk_08;
        d->unk_0c = r->unk_0c;
        ((nO::PlayerActor *)this)->unk_c78++;
        return TRUE;
    }
    return FALSE;
}

nO::Unk_0200e248_Rec *PlayerActor::getRequest(s32 i) {
    using namespace nO;
    if (i >= 0 && i < 0x1e && i < ((nO::PlayerActor *)this)->unk_c78) {
        return &((nO::PlayerActor *)this)->unk_930[i];
    }
    return NULL;
}

void PlayerActor::clearRequests() {
    using namespace nO;
    ((nO::PlayerActor *)this)->unk_c78 = 0;
    ((nO::PlayerActor *)this)->unk_c7c = -1;
}

s32 PlayerActor::getEffectivePriority() {
    using namespace nO;
    s32 r2 = 0;
    if (((nO::PlayerActor *)this)->unk_c7c >= 0) {
        r2 = getRequest(((nO::PlayerActor *)this)->unk_c7c)->unk_04;
    }
    s32 r0 = ((nO::PlayerActor *)this)->unk_7f8;
    if (r0 <= r2) r0 = r2;
    return r0;
}

s32 PlayerActor::getRequiredPriority() {
    using namespace nO;
    s32 r2 = 0;
    if (((nO::PlayerActor *)this)->unk_c7c >= 0) {
        r2 = getRequest(((nO::PlayerActor *)this)->unk_c7c)->unk_04;
    }
    s32 r0 = ((nO::PlayerActor *)this)->unk_7f8 + 1;
    if (r0 <= r2) r0 = r2;
    return r0;
}

void PlayerActor::initShirtModel() {
    using namespace nO;
    u16 v;
    s32 r4, r6;
    PlayerBodyModelRef_SetSlot(&((nO::PlayerActor *)this)->unk_385, data_020c61a8[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    if (PlayerActor_GetGender(this) == 0) {
        PlayerBodyModelRef_Load(&((nO::PlayerActor *)this)->unk_385, 0);
    } else {
        PlayerBodyModelRef_Load(&((nO::PlayerActor *)this)->unk_385, 1);
    }
    _ZN16CharaClothTexRef6assignEj(&((nO::PlayerActor *)this)->unk_770, data_020c61a0[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    PlayerActor_GetShirt(&v, ((nO::PlayerActor *)this));
    _ZN12Unk_02006d1415setShirtTextureEPv(this, &v);
    r4 = NNS_G3dGetTex(PlayerBodyModelRef_GetBuffer(&((nO::PlayerActor *)this)->unk_385));
    r6 = NNS_G3dGetTex(CharaClothTexRef_GetBuffer(&((nO::PlayerActor *)this)->unk_770));
    _ZN12Unk_02006d1417bindTextureByNameEPvS0_S0_S0_(this, r6, r4, sPlayerClothTexName, sPlayerClothTexName);
    _ZN12Unk_02006d1417bindPaletteByNameEPvS0_S0_S0_(this, r6, r4, sPlayerClothTexName, sPlayerClothTexName);
    r4 = NNS_G3dGetTex(PlayerPaletteRef_GetSkin(&((nO::PlayerActor *)this)->unk_79c));
    _ZN12Unk_02006d1417bindPaletteByNameEPvS0_S0_S0_(this, r4, NNS_G3dGetTex(PlayerBodyModelRef_GetBuffer(&((nO::PlayerActor *)this)->unk_385)), sPlayerSkinPalName, sPlayerSkinPalName);
    PlayerBodyModelRef_RelocateTexture(&((nO::PlayerActor *)this)->unk_385);
}

void PlayerActor::initHatModel() {
    using namespace nO;
    u16 v[2];
    s32 r4, r3;
    PlayerHead_SetSlot(&((nO::PlayerActor *)this)->unk_424, data_020c61b4[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    PlayerActor_GetHat(&v[1], ((nO::PlayerActor *)this));
    v[0] = v[1];
    r4 = PlayerActor_GetHairStyle(this);
    r3 = PlayerActor_GetHairColor(this);
    _ZN12Unk_02006d1416requestHatChangeEPthhh(this, v, r4, r3, 1);
}

void PlayerActor::initFaceItemModel() {
    using namespace nO;
    u16 v[2];
    PlayerGlassesModelRef_SetSlot(&((nO::PlayerActor *)this)->unk_598, data_020c6198[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    PlayerActor_GetFaceItem(&v[0], ((nO::PlayerActor *)this));
    v[1] = v[0];
    _ZN12Unk_02006d1421requestFaceItemChangeEPt(this, &v[1]);
    _ZN12Unk_02006d1419applyFaceItemChangeEv(this);
}

BOOL PlayerActor::doCreate() {
    using namespace nO;
    s32 r6 = ((nO::PlayerActor *)this)->unk_08;
    s32 r5;
    ((nO::PlayerActor *)this)->unk_7fc = PlayerActor_ParamGetSlot(r6);
    _ZN9Character9setCharIdEj(this, (u16)((nO::PlayerActor *)this)->unk_7fc);
    PlayerSession_SetActor(((nO::PlayerActor *)this)->unk_7fc, ((nO::PlayerActor *)this));
    PlayerPaletteRef_Assign(&((nO::PlayerActor *)this)->unk_79c, data_020c6194[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    r5 = PlayerActor_GetHairColor(this);
    _ZN12Unk_02006d1420applySkinHairPaletteEii(this, r5, _ZN12Unk_020102ec7calcTanEj(this, 1));
    initShirtModel();
    _ZN20CharaFaceAnimWorkRef6assignEj(&((nO::PlayerActor *)this)->unk_70b, data_020c61a4[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    _ZN16CharaFaceAnimRef6assignEj(&((nO::PlayerActor *)this)->unk_70a, data_020c61ac[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    _ZN16PlayerFaceTexRef6assignEj(&((nO::PlayerActor *)this)->unk_709, data_020c619c[PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc)]);
    _ZN16PlayerFaceTexRef4loadEj(&((nO::PlayerActor *)this)->unk_709, PlayerActor_GetFaceTexIndex(this));
    initHatModel();
    initFaceItemModel();
    r5 = PlayerSession_GetGfxSlot(((nO::PlayerActor *)this)->unk_7fc);
    u16 t;
    PlayerActor_GetHeldItem(&t, ((nO::PlayerActor *)this));
    HeldItemModel_Setup(&((nO::PlayerActor *)this)->unk_59c, data_020c61b0[r5], ((nO::PlayerActor *)this), &t, PlayerActor_GetPlayerData(this), 0);
    _ZN10FishBobber11setOwnerAidEi(&((nO::PlayerActor *)this)->unk_5c4, ((nO::PlayerActor *)this)->unk_7fc);
    ((nO::PlayerActor *)this)->unk_9c = 0xffffb000;
    ((nO::PlayerActor *)this)->unk_a0 = 0xffff6000;
    _ZN11PlayerActor11requestInitEjjj(this, PlayerActor_ParamGetAction(r6), 9, -1);
    ((nO::PlayerActor *)this)->unk_900 &= ~0x80;
    _ZN12Unk_02005e7c15processRequestsEv(this);
    ((nO::PlayerActor *)this)->unk_6e8 = 0;
    _ZN12Unk_02006d1413setActionFlagEj(this, 1);
    BOOL b = (gFieldSceneKind == 0);
    if (b) _ZN12Unk_02006d1413setActionFlagEj(this, 0);
    Unk_0200dde0_Vec3 *p = &((nO::PlayerActor *)this)->unk_5c;
    ((nO::PlayerActor *)this)->unk_6f0.x = p->x;
    ((nO::PlayerActor *)this)->unk_6f0.y = p->y;
    ((nO::PlayerActor *)this)->unk_6f0.z = p->z;
    ((nO::PlayerActor *)this)->unk_808 = -1;
    ((nO::PlayerActor *)this)->unk_80c = -1;
    ((nO::PlayerActor *)this)->unk_800 = -1;
    ((nO::PlayerActor *)this)->unk_804 = 0;
    ((nO::PlayerActor *)this)->unk_810 = 0;
    ((nO::PlayerActor *)this)->unk_814 = 0;
    ((nO::PlayerActor *)this)->unk_818 = 0xf;
    ((nO::PlayerActor *)this)->unk_8e5 = 0x1f;
    ((nO::PlayerActor *)this)->unk_8e4 = 0;
    ((nO::PlayerActor *)this)->unk_164 = 0;
    ((nO::PlayerActor *)this)->unk_168 = 0;
    return TRUE;
}

s32 PlayerActor::getInputMagnitude() {
    using namespace nN;
    return ((nN::PlayerActor *)this)->unk_130;
}

s16 PlayerActor::getInputAngleRaw() {
    using namespace nN;
    return ((nN::PlayerActor *)this)->unk_134;
}

s16 PlayerActor::getInputAngle() {
    using namespace nN;
    s16 r = getInputAngleRaw();
    if (((nN::PlayerActor *)this)->unk_16c != 2 && gCamera) {
        r = r + _ZN12Unk_020d93b86getYawEv(gCamera);
    }
    return r;
}

s32 PlayerActor::getInputSideRelative() {
    using namespace nN;
    return Math_AngleToSide((s16)(getInputAngle() - ((nN::PlayerActor *)this)->unk_8e));
}

s32 PlayerActor::getInputDirRelative() {
    using namespace nN;
    return Math_AngleToDir4((s16)(getInputAngle() - ((nN::PlayerActor *)this)->unk_8e));
}

u8 PlayerActor::func_0200d5b8() {
    using namespace nN;
    return ((nN::PlayerActor *)this)->unk_137;
}

void Unk_0200d5b4::setInitArgs(u32 v) {
    using namespace nN;
    unk_00 = v;
}

BOOL PlayerActor::requestInit(u32 a, u32 b, u32 c) {
    using namespace nN;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0, b, c);
    m.unk_0c_d5b4.setInitArgs(a);
    ((nN::PlayerActor *)this)->unk_7f0 = 0;
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void Unk_0200d560::initInitWork(u32 v) {
    using namespace nN;
    unk_00 = v;
    unk_04 = 0;
}

void PlayerActor::setupInit(Unk_0200d53c_Item *item) {
    using namespace nN;
    ((nN::PlayerActor *)this)->unk_7d0.initInitWork(item->unk_0c);
    ((nN::PlayerActor *)this)->unk_7f4 = 0;
}

void PlayerActor::netInit() {
    using namespace nN;
}

void PlayerActor::endInit(u32 a) {
    using namespace nN;
    void *r6 = gCommManager;
    u16 arr[4];
    s32 vx, vz;
    if (_ZN11CommManager11isLocalSlotEj(r6, ((nN::PlayerActor *)this)->unk_7fc) || (a != 2 && a != 0x8b)) {
        ((nN::PlayerActor *)this)->unk_7f4 = 1;
    }
    if (!_ZN11CommManager11isLocalSlotEj(r6, ((nN::PlayerActor *)this)->unk_7fc)) {
        s32 t = Scene_GetCurrent();
        if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x10) && t != 0x2e && t != 0xd && t != 0xe && t != 0xc && t != 0x2f) {
            if (PlayerActor_GetSlotPosXZ(arr, &vx, &vz, -1, ((nN::PlayerActor *)this)->unk_7fc)) {
                s32 *e = (s32 *)&((nN::PlayerActor *)this)->unk_5c;
                s32 *d = (s32 *)&((nN::PlayerActor *)this)->unk_68;
                d[0] = vx;
                e[0] = d[0];
                d[2] = vz;
                e[2] = d[2];
            }
            if (PlayerActor_GetSlotAngle(&arr[1], -1, ((nN::PlayerActor *)this)->unk_7fc)) {
                _ZN12Unk_020102ec9setAngleYEPs(this, &arr[1]);
            }
        }
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0)) {
        s32 t = PlayerData_GetBySessionSlot(((nN::PlayerActor *)this)->unk_7fc);
        arr[2] = *_ZN10PlayerData11getHeldItemEv();
        HeldItemModel_SetItem(((nN::PlayerActor *)this)->unk_59c, &arr[2], t);
        BOOL ok;
        if (Item_IsFurniture(&arr[2])) {
            arr[3] = 0xfff1;
            ok = Item_GetFurnitureIndex(&arr[2]) == Item_GetFurnitureIndex(&arr[3]);
        } else {
            ok = arr[2] == 0xfff1;
        }
        if (!ok) {
            _ZN12Unk_020102ec9startAnimEijt(this, 0, 0, 0);
            HeldItemModel_Update(((nN::PlayerActor *)this)->unk_59c);
        }
    }
}

BOOL PlayerActor::finishModelSetup() {
    using namespace nN;
    BOOL result = FALSE;
    Unk_0200d560 *p = &((nN::PlayerActor *)this)->unk_7d0;
    if (p->unk_04 == 0) {
        BOOL a = PlayerBodyModelRef_PollTexUpload(&((nN::PlayerActor *)this)->unk_385);
        BOOL b = ((nN::PlayerActor *)this)->unk_c90 == 2;
        BOOL c = ((nN::PlayerActor *)this)->unk_c88 == 2;
        if (a && b && c) {
            _ZN11CachedModel11setFromFileEPv(((nN::PlayerActor *)this)->unk_230, PlayerBodyModelRef_GetBuffer(&((nN::PlayerActor *)this)->unk_385));
            PlayerBodyWorkRef_Assign(&((nN::PlayerActor *)this)->unk_384, data_020c6190[PlayerSession_GetGfxSlot(((nN::PlayerActor *)this)->unk_7fc)]);
            _ZN17TwoLayerAnimModel15allocLayerAnimsEj(((nN::PlayerActor *)this)->unk_230, PlayerBodyWorkRef_GetHeap(&((nN::PlayerActor *)this)->unk_384));
            _ZN11CachedModel16allocJointRecordEPv(((nN::PlayerActor *)this)->unk_230, PlayerBodyWorkRef_GetHeap(&((nN::PlayerActor *)this)->unk_384));
            _ZN12Unk_020102ec13initFaceAnimsEv(this);
            s32 i = PlayerSession_GetGfxSlot(((nN::PlayerActor *)this)->unk_7fc) * 2;
            AnimSlotRef_Assign(&((nN::PlayerActor *)this)->unk_6fc, data_020c61b8[i]);
            AnimSlotRef_Assign(&((nN::PlayerActor *)this)->unk_6fd, (data_020c61b8 + 1)[i]);
            _ZN12Unk_020102ec9startAnimEijt(this, 0, 0, 0);
            _ZN9AnimModel10attachAnimEv(((nN::PlayerActor *)this)->unk_230);
            _ZN5Model11setCallbackEiiiii(((nN::PlayerActor *)this)->unk_230, PlayerActor_JointCbPre, 6, 1, ((nN::PlayerActor *)this), 0);
            _ZN13MatTexPatAnim10applyFrameEv(((nN::PlayerActor *)this)->unk_70c);
            _ZN13MatTexPatAnim10applyFrameEv(&((nN::PlayerActor *)this)->unk_738);
            result = TRUE;
            p->unk_04++;
        }
    }
    return result;
}

void PlayerActor::startFirstAction(s32 *p) {
    using namespace nM;
    if (*p == 0) {
        return;
    }
    ((nM::PlayerActor *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nM::PlayerActor *)this)->unk_7ec);
    s32 r4 = ((nM::PlayerActor *)this)->unk_7d0.unk_00;
    s32 f;
    Unk_020d6df4_Data *r7;
    BOOL c = gFieldSceneKind == 0 ? TRUE : FALSE;
    if (c && r4 != 1 && _ZN11CommManager11isLocalSlotEj(gCommManager, ((nM::PlayerActor *)this)->unk_7fc)) {
        if (Ground_GetHeightAt(&((nM::PlayerActor *)this)->unk_5c, 0, 0x19) >= 0x800) {
            r4 = 0x6d;
        }
    }
    c = gFieldSceneKind == 0 ? TRUE : FALSE;
    if (!c || Scene_InTown()) {
        _ZN12NpcEmotionFx5resetEv(((nM::PlayerActor *)this)->unk_908);
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nM::PlayerActor *)this)->unk_7fc) || (Scene_InUnk6To8() && r4 == 8)) {
            _ZN12Unk_02003c3013func_02003eccEv(((nM::PlayerActor *)this)->unk_838);
            ((nM::PlayerActor *)this)->unk_920 = ((nM::PlayerActor *)this)->unk_838;
            ((nM::PlayerActor *)this)->unk_92e = 1;
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x19);
        } else {
            _ZN12Unk_02003c3013func_02003eccEv(((nM::PlayerActor *)this)->unk_87c);
            ((nM::PlayerActor *)this)->unk_920 = ((nM::PlayerActor *)this)->unk_87c;
        }
        _ZN12Unk_02006d1413setActionFlagEj(this, 0xa);
    }
    r7 = gCommManager;
    if (_ZN11CommManager11isLocalSlotEj(r7, ((nM::PlayerActor *)this)->unk_7fc)) {
        s32 r0 = Scene_GetCurrent();
        if (r0 != 0xc && r0 != 0x2f) {
            if (!Scene_NoPlayerInUnsharedScene() || PlayerActor_IsWaitingForSlots(this) == 1) {
                FieldInfoBalloon_ShowPleaseWait();
                _ZN12Unk_02006d1413setActionFlagEj(this, 0x1b);
            } else if (r7->unk_64 == 0) {
                if ((u8)(Net_GetMode() + 0xfd) <= 1) {
                    Net_WifiHostKeepAlive();
                }
            }
        }
    }
    f = 0;
    switch (r4) {
    case 1:
        requestAct01(9, -1);
        break;
    case 8:
        if (Scene_InUnk6To8()) {
            FishShadow_RunAi(((nM::PlayerActor *)this), 0, 6, -1);
        } else {
            if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
                f = 1;
            }
            FishShadow_RunAi(((nM::PlayerActor *)this), 1, 6, -1);
        }
        break;
    case 0x3b:
        PlayerActor_RequestDoorExit(((nM::PlayerActor *)this), 6, -1);
        break;
    case 0x3c:
        if (_ZN11CommManager11isLocalSlotEj(r7, ((nM::PlayerActor *)this)->unk_7fc) && !Field_HasExitedBuildingKey()) {
            _ZN8FaintBgm12startSilenceEv(data_021c1b3c + 0x2e4);
            PlayerActor_RequestFaint(((nM::PlayerActor *)this), 0, 7, -1);
            r4 = 0x6d;
        } else {
            PlayerActor_RequestAct3C(((nM::PlayerActor *)this), 1, -1);
        }
        break;
    case 0x6d:
        _ZN8FaintBgm12startSilenceEv(data_021c1b3c + 0x2e4);
        PlayerActor_RequestFaint(((nM::PlayerActor *)this), 1, 7, -1);
        break;
    case 0x6e:
        PlayerActor_RequestAct6E(((nM::PlayerActor *)this), 7, -1);
        break;
    case 0x43:
        PlayerActor_RequestAct43(((nM::PlayerActor *)this), 6, -1);
        break;
    case 0x44:
        PlayerActor_RequestAct44(((nM::PlayerActor *)this), 6, -1);
        break;
    case 0x28:
        if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
            f = 1;
        }
        PlayerActor_RequestSit(((nM::PlayerActor *)this), 0, 6, -1);
        break;
    case 0x10:
        ((nM::PlayerActor *)this)->unk_7f4 = 1;
        _ZN12Unk_02006d1412requestAct10Esji(this, 3, 5, -1);
        break;
    case 0x8b:
        PlayerActor_RequestDoorWalkIn(((nM::PlayerActor *)this), &((nM::PlayerActor *)this)->unk_5c, 6, -1);
        _ZN12Unk_02006d1413setActionFlagEj(this, 5);
        break;
    case 0x8e:
        PlayerActor_RequestExitWalkIn(((nM::PlayerActor *)this), &((nM::PlayerActor *)this)->unk_5c, 6, -1);
        _ZN12Unk_02006d1413setActionFlagEj(this, 5);
        break;
    default:
        r4 = 2;
        requestWait(0, 1, -1);
        if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
            f = 1;
        }
        _ZN12Unk_02006d1417offsetSpawnBySlotEv(this);
        break;
    }
    ((nM::PlayerActor *)this)->unk_08 = ((r4 << 22) & 0x3fc00000) | (((nM::PlayerActor *)this)->unk_08 & 0xc03fffff);
    if (f) {
        if (_ZN11CommManager11isLocalSlotEj(r7, ((nM::PlayerActor *)this)->unk_7fc)) {
            TalkRequest_FinishSceneEntry();
        }
    }
}

void PlayerActor::mainInit() {
    using namespace nM;
    s32 v = 0;
    v = _ZN11PlayerActor16finishModelSetupEv(this);
    startFirstAction(&v);
}

BOOL PlayerActor::requestAct01(u32 a, u32 b) {
    using namespace nM;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 1, a, b);
    BOOL r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void PlayerActor::setupAct01(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    ((nM::PlayerActor *)this)->unk_7f4 = 0;
}

void PlayerActor::netAct01(u32 a) {
    using namespace nM;
    requestAct01(9, a);
}

void PlayerActor::endAct01() {
    using namespace nM;
    ((nM::PlayerActor *)this)->unk_7f4 = 1;
}

void PlayerActor::mainAct01() {
    using namespace nM;
}

namespace nM {
extern "C" void PlayerActor_SetArgsWait(u16 *p, u32 v) {
    *p = v;
}
}

BOOL PlayerActor::requestWait(u32 a, u32 b, u32 c) {
    using namespace nM;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 2, b, c);
    PlayerActor_SetArgsWait((u16 *)&m.unk_0c_b[0], a);
    BOOL r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void PlayerActor::setupWait(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    if (!_ZN12Unk_02006d1416checkLidAndErrorEv(this)) {
        u16 h = *(u16 *)&((nM::Unk_02006d14_Item *)item)->unk_0c[0];
        *(u8 *)&((nM::PlayerActor *)this)->unk_7d0 = old == 4 ? 1 : 0;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, h, h);
        _ZN12Unk_02006d1417resetHeldToolAnimEv(this);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 9);
        ((nM::PlayerActor *)this)->unk_164 = 0;
        ((nM::PlayerActor *)this)->unk_168 = 0;
        PlayerActor_SetHeadTilt(0, 0, 4);
    }
}

void PlayerActor::netWait(u32 a) {
    using namespace nM;
    requestWait(3, 5, a);
}

void PlayerActor::endWait() {
    using namespace nM;
    if (!_ZN11CommManager11isLocalSlotEj(gCommManager, ((nM::PlayerActor *)this)->unk_7fc)) {
        ((nM::PlayerActor *)this)->unk_7f4 = 1;
    }
}

BOOL PlayerActor::waitFollowNet() {
    using namespace nM;
    u8 a;
    s16 b, c, e;
    s32 x, z;
    if (!_ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(this, &a, &x, &z, &b)) {
        return FALSE;
    }
    if (a != Scene_GetCurrent()) {
        return FALSE;
    }
    s32 dx = x - ((nM::PlayerActor *)this)->unk_5c.x;
    s32 dz = z - ((nM::PlayerActor *)this)->unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    BOOL r4 = PlayerActor_CalcNetFollowAngle(this, dx, dz, d2, b, &c);
    if (!r4) {
        e = ((nM::PlayerActor *)this)->unk_8e;
        PlayerActor_TurnAngleSlow(&e, b);
        _ZN12Unk_020102ec9setAngleYEPs(this, &e);
        PlayerActor_ApproachCoord(&((nM::PlayerActor *)this)->unk_5c.x, x);
        PlayerActor_ApproachCoord(&((nM::PlayerActor *)this)->unk_5c.z, z);
    }
    return r4;
}

void PlayerActor::waitCheckInput() {
    using namespace nM;
    s16 buf;
    s32 r6 = _ZN12Unk_02006d1418getTargetWalkSpeedEv(this);
    s32 r4 = 0;
    if (Scene_InHouseRoom()) {
        BOOL b = gScreenTransition == 2 ? TRUE : FALSE;
        if (b) {
            if (!(*(u8 *)PlayerSession_GetSessionFlags() & 8)) {
                if (sHouseRoachActiveCount) {
                    *(u8 *)PlayerSession_GetSessionFlags() |= 8;
                    _ZN12Unk_0200804012requestAct77Esjj(this, ((nM::PlayerActor *)this)->unk_8e, 6, -1);
                    return;
                }
            }
        }
    }
    if (r6 > 0) {
        u32 v = *(u8 *)&((nM::PlayerActor *)this)->unk_7d0;
        if (r6 < 0x53f) {
            v = 0;
        }
        r4 = requestWalk(v, 1, -1);
    }
    if (!_ZN12Unk_02006d1411tryInteractEv(this)) {
        r4 |= _ZN12Unk_02006d1416checkLidAndErrorEv(this);
    } else {
        r4 = 1;
    }
    if (r4) {
        s32 h = ((nM::PlayerActor *)this)->unk_8e;
        buf = h + 0xaf0;
        Effect_Create(0x27, ((nM::PlayerActor *)this)->unk_6d0, &buf, 0);
        buf = h - 0xaf0;
        Effect_Create(0x27, ((nM::PlayerActor *)this)->unk_6c4, &buf, 0);
    }
}

void PlayerActor::waitNetCheckEnd(u8 *p) {
    using namespace nM;
    if (*p != 0) {
        requestWalk(0, 1, -1);
    }
    if (((nM::PlayerActor *)this)->unk_7f4 == 0) {
        if (PlayerActor_TestSlotFlag(0x1b, 4)) {
            ((nM::PlayerActor *)this)->unk_7f4 = 1;
        } else {
            s32 buf;
            if (PlayerActor_GetSlotAction(&buf, -1, ((nM::PlayerActor *)this)->unk_7fc)) {
                if (buf == 2 || buf == 0x40) {
                    ((nM::PlayerActor *)this)->unk_7f4 = 1;
                }
            }
        }
    }
}

void PlayerActor::mainWait() {
    using namespace nM;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nM::PlayerActor *)this)->unk_7fc)) {
        _ZN12Unk_020102ec17moveWithCollisionEv(this);
        _ZN12Unk_020102ec11advanceAnimEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        _ZN12Unk_020102ec19submitSceneColliderEv(this);
        waitCheckInput();
    } else {
        u8 b = waitFollowNet();
        _ZN12Unk_020102ec11advanceAnimEv(this);
        _ZN12Unk_02006d1421netUpdateBodyColliderEv(this);
        _ZN12Unk_020102ec19submitSceneColliderEv(this);
        waitNetCheckEnd(&b);
    }
    *(u8 *)&((nM::PlayerActor *)this)->unk_7d0 = 0;
}

namespace nM {
extern "C" void PlayerActor_SetArgsWalk(u8 *p, u32 v) {
    *p = v;
}
}

BOOL PlayerActor::requestWalk(u32 a, u32 b, u32 c) {
    using namespace nM;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 3, b, c);
    PlayerActor_SetArgsWalk(&m.unk_0c_b[0], a);
    BOOL r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void Unk_020d6df4_7d0::initWalk() {
    using namespace nM;
    unk_00 = 0;
}

void PlayerActor::setupWalk(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    u8 *p = &((nM::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_020d6df4_7d0 *q = &((nM::PlayerActor *)this)->unk_7d0;
    _ZN12Unk_020102ec9startAnimEijt(this, 1, 3, 3);
    if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
        HeldItemModel_PlayAnim(((nM::PlayerActor *)this)->unk_59c, 1, 3, 0);
    }
    q->initWalk();
    if (*p != 0) {
        q->unk_00 = 0x456;
    }
}

void PlayerActor::netWalk() {
    using namespace nM;
}

void PlayerActor::walkUpdateSpeed() {
    using namespace nM;
    s32 *r6 = &((nM::PlayerActor *)this)->unk_7d0.unk_00;
    s32 r4 = _ZN12Unk_02006d1418getTargetWalkSpeedEv(this);
    s32 cur = *r6;
    if (cur < r4) {
        *r6 = PlayerActor_Accelerate(cur, r4);
    } else if (cur > r4) {
        *r6 = PlayerActor_Decelerate(cur, r4);
    }
    s32 r7 = _ZN11PlayerActor13getInputAngleEv(this);
    s16 buf = ((nM::PlayerActor *)this)->unk_8e;
    if (r4 > 0) {
        PlayerActor_TurnAngle(&buf, r7);
        _ZN12Unk_020102ec9setAngleYEPs(this, &buf);
    }
    s32 r = func_01ffcb0c(*r6, data_02135f44[((u16)(s16)(buf - r7) >> 4) * 2 + 1]);
    if (r < 0) {
        r = -r;
    }
    s32 t = r;
    _ZN12Unk_020102ec8setSpeedEPj(this, &t);
}

BOOL PlayerActor::walkFollowNet() {
    using namespace nM;
    u8 a;
    s16 b, c, e;
    s32 x, z, v;
    if (!_ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(this, &a, &x, &z, &b)) {
        return TRUE;
    }
    if (a != Scene_GetCurrent()) {
        return TRUE;
    }
    s32 dx = x - ((nM::PlayerActor *)this)->unk_5c.x;
    s32 dz = z - ((nM::PlayerActor *)this)->unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    if (!PlayerActor_CalcNetFollowAngle(this, dx, dz, d2, b, &c)) {
        return TRUE;
    }
    e = ((nM::PlayerActor *)this)->unk_8e;
    PlayerActor_TurnAngle(&e, c);
    _ZN12Unk_020102ec9setAngleYEPs(this, &e);
    v = ((nM::PlayerActor *)this)->unk_98;
    s32 r6 = FX_Sqrt(d2);
    s32 m = r6;
    if (r6 > 0x6e2) {
        m = 0x6e2;
    }
    s32 s = data_02135f44[((u16)(s16)(e - c) >> 4) * 2 + 1];
    if (s < 0) {
        s = 0;
    }
    s32 r4 = func_01ffcb0c(m, s);
    if (r6 >= 0x2666) {
        if (r6 >= 0xe000) {
            ((nM::PlayerActor *)this)->unk_5c.x = x;
            ((nM::PlayerActor *)this)->unk_5c.z = z;
            ((nM::PlayerActor *)this)->unk_8e = b;
            return TRUE;
        }
    } else {
        s32 t = func_01ffcb0c(r6 - 0x108, FX_Div(0x5da, 0x255e)) + 0x108;
        if (t < 0x108) {
            t = 0x108;
        }
        if (r4 > t) {
            r4 = t;
        }
    }
    if (v < r4) {
        v = PlayerActor_Accelerate(v, r4);
    } else if (v > r4) {
        v = PlayerActor_Decelerate(v, r4);
    }
    _ZN12Unk_020102ec8setSpeedEPj(this, &v);
    return FALSE;
}

void PlayerActor::walkMove() {
    using namespace nM;
    s32 v, c, r4;
    Unk_020d6df4_Vec out;
    s16 sx;
    v = ((nM::PlayerActor *)this)->unk_98;
    Unk_020d6df4_Vec old;
    Unk_020d6df4_Vec *pp = &((nM::PlayerActor *)this)->unk_5c;
    old.x = pp->x;
    old.y = pp->y;
    old.z = pp->z;
    BOOL r6 = Field_TryPushSnowball(&out, &sx, &c, ((nM::PlayerActor *)this)->unk_130, ((nM::PlayerActor *)this)->unk_134);
    if (r6) {
        pp = &((nM::PlayerActor *)this)->unk_5c;
        pp->x = out.x;
        pp->y = out.y;
        pp->z = out.z;
        _ZN12Unk_020102ec9setAngleYEPs(this, &sx);
        v = func_020e9650(&((nM::PlayerActor *)this)->unk_5c, &old);
        _ZN12Unk_020102ec8setSpeedEPj(this, &v);
        v = c;
        v = v << 2;
    }
    r4 = func_01ffcb0c(v, 0x3ae1);
    if (r4 <= ((nM::PlayerActor *)this)->unk_2d0) {
        ((nM::PlayerActor *)this)->unk_2dc = r4;
        Unk_0205dfa4_Sub &p = HeldItemModel_GetModel(((nM::PlayerActor *)this)->unk_59c);
        if (r4 <= p.unk_04) {
            Unk_0205dfa4_Sub &q = HeldItemModel_GetModel(((nM::PlayerActor *)this)->unk_59c);
            q.unk_10 = r4;
        }
    }
    if (r6) {
        if (((nM::PlayerActor *)this)->unk_700 != 3) {
            _ZN12Unk_020102ec10switchAnimEijt(this, 3, 3, 3);
        }
    } else if (v > 0x53f) {
        if (((nM::PlayerActor *)this)->unk_700 != 2) {
            _ZN12Unk_020102ec10switchAnimEijt(this, 2, 3, 3);
        }
    } else if (((nM::PlayerActor *)this)->unk_700 != 1) {
        _ZN12Unk_020102ec10switchAnimEijt(this, 1, 3, 3);
    }
    _ZN17TwoLayerAnimModel12updateLayersEv(((nM::PlayerActor *)this)->unk_230);
    _ZN12Unk_02006d1416updateFootstepFxEv(this);
}

void PlayerActor::walkUpdateLean() {
    using namespace nM;
    if (((nM::PlayerActor *)this)->unk_700 != 2) {
        PlayerActor_LevelTiltForAction(this, 0x93, 1);
    } else {
        s32 t = ((nM::PlayerActor *)this)->unk_98 - 0x53f;
        if (t < 0) {
            PlayerActor_LevelTiltForAction(this, 0x93, 1);
        }
        s32 a = FX_Div(t, 0x1a3);
        s32 b = func_01ffcb0c(0xc17000, a);
        _ZN12Unk_020102ec12approachRotXEv(this, (b << 4) >> 16);
    }
}

void Unk_02007694::walkCheckEnd(s16 *p) {
    using namespace nL;
    BOOL c = gFieldSceneKind == 0;
    if (c && ((nL::Unk_02007694 *)this)->unk_8e4 == 0 && ((nL::Unk_02007694 *)this)->unk_98 == 0x6e2) {
        u16 t;
        if (_ZN10PlayerData10getFortuneEv(PlayerData_GetCurrent()) == 2 || (PlayerActor_GetHat(&t, ((nL::Unk_02007694 *)this)), t == 0x13c3)) {
            if (Random_GlobalBelow(0x17a) == 0) {
                PlayerActor_RequestTrip(((nL::Unk_02007694 *)this), 6, -1);
                return;
            }
        }
    }
    if (*(s32 *)&((nL::Unk_02007694 *)this)->unk_7d0 <= 0) {
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
    if (((nL::Unk_02007694 *)this)->unk_700 == 2 && _ZN11PlayerActor17getInputMagnitudeEv(this) > 0) {
        u16 x = _ZN11PlayerActor13getInputAngleEv(this);
        if (func_020e780c(x, *p) > 0x3a4c) {
            requestSkidTurn(x, 3, -1);
        }
    }
    _ZN12Unk_02006d1411tryInteractEv(this);
}

void Unk_02007694::walkNetCheckEnd(u8 *p) {
    using namespace nL;
    if (*p != 0) {
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
}

void Unk_02007694::mainWalk() {
    using namespace nL;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nL::Unk_02007694 *)this)->unk_7fc)) {
        s16 x = ((nL::Unk_02007694 *)this)->unk_94;
        _ZN11PlayerActor15walkUpdateSpeedEv(this);
        _ZN11PlayerActor8walkMoveEv(this);
        _ZN11PlayerActor14walkUpdateLeanEv(this);
        _ZN12Unk_020102ec17moveWithCollisionEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        _ZN12Unk_020102ec19submitSceneColliderEv(this);
        walkCheckEnd(&x);
    } else {
        u8 f = _ZN11PlayerActor13walkFollowNetEv(this);
        _ZN11PlayerActor8walkMoveEv(this);
        _ZN11PlayerActor14walkUpdateLeanEv(this);
        _ZN12Unk_020102ec15moveNoCollisionEv(this);
        _ZN12Unk_02006d1421netUpdateBodyColliderEv(this);
        walkNetCheckEnd(&f);
    }
}

void Unk_0200c2fc::setSkidTurnArgs(u16 a) {
    using namespace nL;
    unk_00 = a;
}

u32 Unk_02007694::requestSkidTurn(u16 a, u32 b, u32 c) {
    using namespace nL;
    PlayerActionRequest obj;
    _ZN19PlayerActionRequest6assignEiis(&obj, 4, b, c);
    obj.unk_0c_c2fc.setSkidTurnArgs(a);
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);
    return r;
}

void Unk_0200c288::initSkidTurn(s16 a) {
    using namespace nL;
    unk_00 = a;
}

void Unk_02007694::setupSkidTurn(PlayerActionRequest *item) {
    using namespace nL;
    s16 v = *(s16 *)&item->unk_0c_c2fc;
    Unk_0200bff8_Vec vec;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    _ZN12Unk_020102ec9startAnimEijt(this, 4, 3, 0);
    p->initSkidTurn(v);
    s32 b, a;
    a = ((nL::Unk_02007694 *)this)->unk_8e << 12;
    b = v << 12;
    s32 d = b - a;
    if (d < 0) d = -d;
    if (b >= a) {
        if (d > 0x8000000) {
            v += 0x6fd0;
        } else {
            v += 0x9030;
        }
    } else {
        if (d > 0x8000000) {
            v += 0x9030;
        } else {
            v += 0x6fd0;
        }
    }
    vec = ((nL::Unk_02007694 *)this)->unk_6c4;
    s32 i = (u16)v >> 4;
    s32 t1, t0;
    s32 sn = data_02135f44[i * 2];
    s32 cs = data_02135f44[i * 2 + 1];
    t0 = func_01ffcb0c(cs, 0x666) - func_01ffcb0c(sn, 0x666);
    t1 = func_01ffcb0c(sn, 0x666) + func_01ffcb0c(cs, 0x666);
    vec.x += t1;
    vec.z += t0;
    p->unk_02 = v + 0x8000;
    p->unk_02 -= 0x38e;
    Effect_Create(1, &vec, &v, 0);
    _ZN12Unk_02006d146playSeEj(this, 0x53);
}

void Unk_02007694::netSkidTurn() {
    using namespace nL;
}

void Unk_02007694::endSkidTurn(u32 a) {
    using namespace nL;
    ((nL::Unk_02007694 *)this)->unk_94 = ((nL::Unk_02007694 *)this)->unk_8e;
}

void Unk_02007694::skidDecelerate() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    s32 t;
    PlayerActor_TurnAngle(&((nL::Unk_02007694 *)this)->unk_8e, (s16)p->unk_00);
    s32 v = ((nL::Unk_02007694 *)this)->unk_98;
    t = PlayerActor_DecelerateSkid(v, 0);
    _ZN12Unk_020102ec8setSpeedEPj(this, &t);
    if (t == 0 && v != 0) {
        Effect_Create(0x29, &((nL::Unk_02007694 *)this)->unk_5c[0], &p->unk_02, 0);
    }
}

void Unk_02007694::skidCheckEnd() {
    using namespace nL;
    s32 t = ((nL::Unk_02007694 *)this)->unk_98;
    if (((nL::Unk_02007694 *)this)->unk_8e == (s16)((nL::Unk_02007694 *)this)->unk_7d0.unk_00 && t <= 0) {
        ((nL::Unk_02007694 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nL::Unk_02007694 *)this)->unk_7ec);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
}

void Unk_02007694::mainSkidTurn() {
    using namespace nL;
    skidDecelerate();
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec17moveWithCollisionEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    _ZN12Unk_020102ec19submitSceneColliderEv(this);
    skidCheckEnd();
}

void Unk_0200c2fc::setAct05Args(u16 a) {
    using namespace nL;
    unk_00 = a;
}

u32 Unk_02007694::requestAct05(u16 a, u32 b, u32 c) {
    using namespace nL;
    PlayerActionRequest obj;
    _ZN19PlayerActionRequest6assignEiis(&obj, 5, b, c);
    obj.unk_0c_c2fc.setAct05Args(a);
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);
    return r;
}

void Unk_02007694::setupAct05(PlayerActionRequest *item) {
    using namespace nL;
    u16 v = item->unk_0c_c2fc.unk_00;
    _ZN12Unk_020102ec9startAnimEijt(this, 0x12, v, v);
    _ZN12Unk_02006d1417resetHeldToolAnimEv(this);
}

void Unk_02007694::netAct05(u32 a) {
    using namespace nL;
    requestAct05(3, 5, a);
}

void Unk_02007694::mainAct05() {
    using namespace nL;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN12Unk_02006d1418netFollowTransformEv(this)) {
        _ZN12Unk_020102ec17moveWithCollisionEv(this);
    }
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
}

void Unk_0200c2fc::setChangeClothesArgs(u16 a, s32 b, s32 c) {
    using namespace nL;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

u32 Unk_02007694::requestChangeClothes(u16 a, u32 b, u32 c, u32 d, s16 e) {
    using namespace nL;
    PlayerActionRequest obj;
    _ZN19PlayerActionRequest6assignEiis(&obj, 7, d, e);
    obj.unk_0c_c2fc.setChangeClothesArgs(a, b, c);
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);
    return r;
}

void Unk_0200c288::initChangeClothes(u16 a, s32 b, s32 c, s16 d) {
    using namespace nL;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = 0;
    unk_0e = -d / 3;
}

void Unk_0200c24c::writeChangeClothesNet(u16 a, u8 b, u8 c) {
    using namespace nL;
    NetBuf_WriteU16(this, a);
    unk_02 = b;
    unk_03 = c;
}

void Unk_0200c24c::readChangeClothesNet(u16 *a, u8 *b, u8 *c) {
    using namespace nL;
    *a = NetBuf_ReadU16(this);
    *b = unk_02;
    *c = unk_03;
}

void Unk_02007694::setupChangeClothes(PlayerActionRequest *item) {
    using namespace nL;
    Unk_0200c2fc *p = &item->unk_0c_c2fc;
    u16 a = p->unk_00;
    s32 b = p->unk_04;
    s32 c = p->unk_08;
    if (c == 0x10) {
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 6, 3, 0);
    } else {
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 5, 3, 0);
    }
    ((nL::Unk_02007694 *)this)->unk_7d0.initChangeClothes(a, b, c, ((nL::Unk_02007694 *)this)->unk_8e);
    ((nL::Unk_02007694 *)this)->unk_8ec.writeChangeClothesNet(a, b, c);
    if (b == 2 && a == 0x13c3) {
        _ZN12Unk_02006d146playSeEj(this, 0x77);
    } else {
        _ZN12Unk_02006d146playSeEj(this, 0x76);
    }
    Effect_PlayById2(0x61, &((nL::Unk_02007694 *)this)->unk_5c[0], 0, 0);
}

void Unk_02007694::netChangeClothes(s16 a) {
    using namespace nL;
    u16 x;
    u8 y, z;
    ((nL::Unk_02007694 *)this)->unk_8ec.readChangeClothesNet(&x, &y, &z);
    requestChangeClothes(x, y, z, 6, a);
}

void Unk_02007694::changeClothesEffects() {
    using namespace nL;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&((nL::Unk_02007694 *)this)->unk_2cc[0], 0xd)) {
        Effect_Create(0x22, &((nL::Unk_02007694 *)this)->unk_5c[0], 0, 0);
    } else if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&((nL::Unk_02007694 *)this)->unk_2cc[0], 3)) {
        s16 x = ((nL::Unk_02007694 *)this)->unk_8e;
        Unk_0200bff8_Vec v;
        s16 h;
        v = ((nL::Unk_02007694 *)this)->unk_6d0;
        v.z += 0x266;
        h = x + 0xaf0;
        Effect_Create(0x27, &v, &h, 0);
        v = ((nL::Unk_02007694 *)this)->unk_6c4;
        v.z += 0x266;
        h = x - 0xaf0;
        Effect_Create(0x27, &v, &h, 0);
    }
}

void Unk_02007694::changeClothesShirt() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        _ZN12Unk_02006d1415setShirtTextureEPv(this, &t);
        if (_ZN12Unk_02006d1421requestShirtTexUploadEv(this)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::changeClothesFaceItem() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        if (_ZN12Unk_02006d1421requestFaceItemChangeEPt(this, &t)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::changeClothesHat() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        u32 a = PlayerActor_GetHairStyle(this);
        u32 b = PlayerActor_GetHairColor(this);
        if (_ZN12Unk_02006d1416requestHatChangeEPthhh(this, &t, a, b, 0)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::changeClothesSpin() {
    using namespace nL;
    s16 v = ((nL::Unk_02007694 *)this)->unk_8e; s32 a; s16 t = ((nL::Unk_02007694 *)this)->unk_7d0.unk_0e;
    if (v != 0) {
        a = v;
        if (a < 0) a = -a;
        if (a < (t < 0 ? -t : t)) {
            v = 0;
        } else {
            v += t;
        }
    }
    _ZN12Unk_020102ec9setAngleYEPs(this, &v);
}

void Unk_02006d14::changeClothesCheckEnd() {
    using namespace nK;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        ((nK::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nK::Unk_02006d14 *)this)->unk_7ec);
        s32 t = ((nK::Unk_02006d14 *)this)->unk_7d8;
        if (t == 5) {
            _ZN12Unk_0200769412requestAct05Etjj(this, 0, 5, -1);
        } else if (t == 0x10) {
            requestAct10(0, 5, -1);
        } else {
            PlayerActor_RequestReturnToWait();
        }
    }
}

void Unk_02006d14::mainChangeClothes() {
    using namespace nK;
    _ZN12Unk_0200769420changeClothesEffectsEv(this);
    _ZN12Unk_0200769418changeClothesApplyEv(this);
    _ZN12Unk_0200769417changeClothesSpinEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    changeClothesCheckEnd();
}

void Unk_0200bda0::setAct10Args(s16 v) {
    using namespace nK;
    unk_00 = v;
}

s32 Unk_02006d14::requestAct10(s16 a, u32 b, s32 c) {
    using namespace nK;
    Unk_0200bd60_Msg m;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x10, b, c);
    m.unk_0c.setAct10Args(a);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02006d14::setupAct10(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u16 v = *(u16 *)&((nK::Unk_02006d14_Item *)item)->unk_0c[0];
    if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x17)) {
        _ZN12Unk_020102ec9startAnimEijt(this, 0, v, 0);
    }
    _ZN12Unk_02006d1417resetHeldToolAnimEv(this);
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1d);
}

void Unk_02006d14::netAct10(u32 v) {
    using namespace nK;
    requestAct10(3, 5, v);
}

void Unk_02006d14::act10UpdateAnim() {
    using namespace nK;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 0);
    }
}

void Unk_02006d14::act10FaceTalkTarget() {
    using namespace nK;
    Unk_0200bc78_Obj *o;
    s16 res;
    s16 h;
    Unk_0200bc78_Vec d;
    nK::Unk_02006d14_Vec *pv;
    s16 *pr;
    o = (Unk_0200bc78_Obj *)TalkRequest_GetTalkTarget();
    pr = 0;
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xe)) o = 0;
    if (o != 0) {
        nK::Unk_02006d14_Vec *ov;
        pv = &((nK::Unk_02006d14 *)this)->unk_5c;
        ov = o->vfunc_50();
        func_0200bc78_sub(&d, ov, pv);
        res = func_020e7b98(d.x, d.z);
        pr = &res;
    }
    if (pr != 0) {
        h = ((nK::Unk_02006d14 *)this)->unk_8e;
        PlayerActor_TurnAngle(&h, *pr);
        _ZN12Unk_020102ec9setAngleYEPs(this, &h);
    }
}

void Unk_02006d14::act10CheckTalk() {
    using namespace nK;
    Unk_0200bc08_Obj *p = 0;
    s16 tmp;
    void *o;
    if (((nK::Unk_02006d14 *)this)->unk_16c == 2) {
        p = *(Unk_0200bc08_Obj **)((u8 *)((nK::Unk_02006d14 *)this) + 0x138);
    } else if (((nK::Unk_02006d14 *)this)->unk_16c == 1) {
        if (gPad[1] & 0x400) {
            p = (Unk_0200bc08_Obj *)TalkRequest_GetTalkTarget();
        }
    }
    if (p != 0) {
        tmp = p->unk_08;
        o = NpcRegistry_FindByHandle(&tmp);
        if (o != 0) {
            if ((*(s32 (**)(void *))(*(u32 *)o + 0xa0))(o) != -1) {
                requestAct15(5, -1);
            }
        }
    }
}

void Unk_02006d14::mainAct10() {
    using namespace nK;
    act10UpdateAnim();
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nK::Unk_02006d14 *)this)->unk_7fc)) {
        act10FaceTalkTarget();
        _ZN12Unk_020102ec17moveWithCollisionEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        act10CheckTalk();
    } else {
        if (_ZN12Unk_02006d1418netFollowTransformEv(this) != 0) {
            _ZN12Unk_020102ec17moveWithCollisionEv(this);
        }
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
    }
}

BOOL Unk_02006d14::requestAct13(u32 a, u32 b) {
    using namespace nK;
    Unk_0200b868_Msg m;
    BOOL r;
    if (((nK::Unk_02006d14 *)this)->unk_700 != 0x12) return TRUE;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x13, a, b);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02006d14::setupAct13(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x84, 3, 0);
}

s32 Unk_02006d14::netAct13(u32 v) {
    using namespace nK;
    return requestAct13(5, v);
}

void Unk_02006d14::act13CheckEnd() {
    using namespace nK;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        ((nK::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nK::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_0200769412requestAct05Etjj(this, 7, 5, -1);
    }
}

void Unk_02006d14::mainAct13() {
    using namespace nK;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (!_ZN11CommManager11isLocalSlotEj(gCommManager, ((nK::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_02006d1418netFollowTransformEv(this);
    }
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act13CheckEnd();
}

s32 Unk_02006d14::requestEmotion(u8 a, u8 b, u32 c, s16 d) {
    using namespace nK;
    Unk_0200ba8c_Msg m;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x14, c, d);
    Unk_0200b750 *pl = &m.unk_0c;
    pl->unk_01 = a;
    pl->unk_00 = b;
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_0200b750::writeEmotionNet(u8 a, u8 b) {
    using namespace nK;
    unk_01 = a;
    unk_00 = b;
}

void Unk_0200b750::readEmotionNet(u8 *a, u8 *b) {
    using namespace nK;
    *a = unk_01;
    *b = unk_00;
}

void Unk_02006d14::setupEmotion(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u8 *q = ((nK::Unk_02006d14_Item *)item)->unk_0c;
    u8 a = q[1];
    u8 b = q[0];
    Unk_0200b908_Obj *p;
    Unk_02006d14_7d0 *pp;
    ((nK::Unk_02006d14 *)this)->unk_8ec.writeEmotionNet(a, b);
    pp = &((nK::Unk_02006d14 *)this)->unk_7d0;
    pp->c0 = a;
    pp->c1 = b;
    p = (Unk_0200b908_Obj *)Emotion_GetEntry(a);
    ((nK::Unk_02006d14 *)this)->unk_904 = p;
    ((nK::Unk_02006d14 *)this)->unk_92d = a;
    _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(((nK::Unk_02006d14 *)this)->unk_908, p, 0);
    _ZN12Unk_020102ec8playAnimEijhijti(this, 0x12, 5, p->unk_18, 0x1000, 0, 5, p->unk_00);
}

s32 Unk_02006d14::netEmotion(s16 v) {
    using namespace nK;
    u8 a, b;
    ((nK::Unk_02006d14 *)this)->unk_8ec.readEmotionNet(&a, &b);
    return requestEmotion(a, b, 5, v);
}

void Unk_02006d14::endEmotion() {
    using namespace nK;
    _ZN12NpcEmotionFx4stopEv(((nK::Unk_02006d14 *)this)->unk_908);
}

void Unk_02006d14::emotionUpdateAnim() {
    using namespace nK;
    Unk_0200b908_Obj *p;
    u32 t = AnimSlotRef_GetAnimId(((nK::Unk_02006d14 *)this)->unk_6fc);
    _ZN12NpcEmotionFx6updateEPvsit(((nK::Unk_02006d14 *)this)->unk_908, ((nK::Unk_02006d14 *)this)->unk_6dc, ((nK::Unk_02006d14 *)this)->unk_8e, t, (u32)(((nK::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16);
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        p = ((nK::Unk_02006d14 *)this)->unk_904;
        if (p->unk_0c != 0x137) {
            _ZN12Unk_020102ec8playAnimEijhijti(this, 0x12, 0, 0, 0x1000, 0, 0, p->unk_0c);
            _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(((nK::Unk_02006d14 *)this)->unk_908, p, 1);
        } else {
            requestAct10(data_020c61d0[((nK::Unk_02006d14 *)this)->unk_7d0.c0 - 1], 5, -1);
        }
    }
}

void Unk_02006d14::emotionCheckEnd() {
    using namespace nK;
    Unk_02006d14_7d0 *p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    u8 *q = &p->c1;
    if (*q != 0) {
        *q = *q - 1;
    }
    if (((nK::Unk_02006d14 *)this)->unk_2e0 == 0 && *q == 0) {
        _ZN12Unk_0200769412requestAct05Etjj(this, data_020c61d0[p->c0 - 1], 5, -1);
    }
}

void Unk_02006d14::mainEmotion() {
    using namespace nK;
    emotionUpdateAnim();
    _ZN12Unk_02006d1418netFollowTransformEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    emotionCheckEnd();
}

s32 Unk_02006d14::requestAct15(u32 a, u32 b) {
    using namespace nK;
    Unk_0200b868_Msg m;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x15, a, b);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02006d14::setupAct15(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x9d, 3, 0);
}

s32 Unk_02006d14::netAct15(u32 v) {
    using namespace nK;
    return requestAct15(5, v);
}

void Unk_02006d14::act15UpdateAnim() {
    using namespace nK;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nK::Unk_02006d14 *)this)->unk_2cc, 6)) {
        Effect_Create(0x50, ((nK::Unk_02006d14 *)this)->unk_6dc, 0, 0);
        _ZN12Unk_02006d146playSeEj(this, 0x68);
    }
}

void Unk_02006d14::act15CheckEnd() {
    using namespace nK;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        requestAct10(5, 5, -1);
    }
}

void Unk_02006d14::mainAct15() {
    using namespace nK;
    act15UpdateAnim();
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act15CheckEnd();
}

void Unk_0200b7bc::setPickUpReachArgs(Unk_0200b750_Pair pr, u32 v) {
    using namespace nK;
    unk_04 = pr.unk_00;
    unk_05 = pr.unk_04;
    unk_00 = v;
}

s32 Unk_02006d14::requestPickUpReach(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c) {
    using namespace nK;
    Unk_0200b76c_Msg m;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x18, b, c);
    m.unk_0c.setPickUpReachArgs(pr, a);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_0200b750::writePickUpReachNet(Unk_0200b750_Pair pr, s32 v) {
    using namespace nK;
    unk_00 = pr.unk_00;
    unk_01 = pr.unk_04;
    unk_04 = v;
}

void Unk_0200b750::readPickUpReachNet(Unk_0200b750_Pair *pr, s32 *out) {
    using namespace nK;
    pr->unk_00 = unk_00;
    pr->unk_04 = unk_01;
    *out = unk_04;
}

void Unk_02006d14::setupPickUpReach(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u8 *q = ((nK::Unk_02006d14_Item *)item)->unk_0c;
    u8 a = q[4];
    u8 b = q[5];
    s32 c = *(s32 *)((nK::Unk_02006d14_Item *)item)->unk_0c;
    Unk_02006d14_7d0 *p;
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
    p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    p->w0 = c;
    p->b5 = a;
    p->b6 = b;
    p->b4 = 0;
    ((nK::Unk_02006d14 *)this)->unk_8ec.writePickUpReachNet(Unk_0200b750_Pair(a, b), c);
    if (c < 0) {
        FieldPos_FromUnitCenter(((nK::Unk_02006d14 *)this)->unk_820, a, b);
        ((nK::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_834 = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_81e = *BlockMap_GetItemPtrAtPos(gSceneBlockMap, ((nK::Unk_02006d14 *)this)->unk_820, 0);
        ((nK::Unk_02006d14 *)this)->unk_81c = ((nK::Unk_02006d14 *)this)->unk_81e;
    }
    if (Pocket_FindEmpty() == -1 && Scene_InHouseRoom()) {
        BOOL f = FALSE;
        if (((nK::Unk_02006d14 *)this)->unk_81c >= 0xa7 && ((nK::Unk_02006d14 *)this)->unk_81c <= 0xc6) f = TRUE;
        if (!f) {
            _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 0);
            p->b4 = 3;
            goto end;
        }
    }
    if (c >= 0) {
        if (Room_CountOccupants() <= 1) {
            FtrMgr_RemoveActor(p->w0, &((nK::Unk_02006d14 *)this)->unk_81c, &((nK::Unk_02006d14 *)this)->unk_81e);
            _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x15, 3, 0);
        } else {
            p->b4 = 7;
            _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 0);
        }
    } else if (c == -3) {
        p->b4 = 7;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 0);
    } else {
        _ZN12Unk_020102ec9startAnimEijt(this, 0x15, 3, 0);
    }
end:
    if (((nK::Unk_02006d14 *)this)->unk_700 == 0x15 && _ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
        HeldItemModel_PlayAnim(&((nK::Unk_02006d14 *)this)->pad_59c, 0xb, 3, 0);
    }
}

void Unk_02006d14::netPickUpReach(s16 v) {
    using namespace nK;
    BOOL f;
    if (gFieldSceneKind == 1) f = TRUE; else f = FALSE;
    if (!f) {
        if (((nK::Unk_02006d14 *)this)->unk_7ec == 0x18) {
            *(s16 *)((u8 *)((nK::Unk_02006d14 *)this) + 0xc80) = v;
        } else {
            Unk_0200b750_Pair pr(0, 0);
            s32 x;
            ((nK::Unk_02006d14 *)this)->unk_8ec.readPickUpReachNet(&pr, &x);
            if (x < 0) {
                requestPickUpReach(pr, -1, 6, v);
            }
        }
    }
}

void Unk_02006d14::pickUpReachWaitAnswer() {
    using namespace nK;
    Unk_02006d14_7d0 *p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    s32 a = p->w0;
    u32 b = p->b5;
    u32 c = p->b6;
    u32 d = p->b4;
    if (d >= 3) {
        _ZN12Unk_020102ec11advanceAnimEv(this);
    } else {
        if (a >= 0) {
            Unk_0200b750_Pair pr(b, c);
            _ZN12Unk_02006d1415requestPickUpAtEP16Unk_0200b144_Posihis(this, pr, a, 0, 6, -1);
        } else if (d == 0) {
            if (((nK::Unk_02006d14 *)this)->unk_814 == 2) {
                p->b4 = 2;
            } else if (((nK::Unk_02006d14 *)this)->unk_814 == 1) {
                p->b4 = 1;
            }
        }
        _ZN12Unk_020102ec11advanceAnimEv(this);
    }
}

void Unk_02006d14::mainPickUpReach(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    Unk_0200b144_Pos p;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nJ::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_02006d1421pickUpReachWaitAnswerEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        pickUpReachUpdate();
    } else {
        _ZN12Unk_020102ec11advanceAnimEv(this);
        Unk_02006d14_Sub7d0* q = &((nJ::Unk_02006d14 *)this)->unk_7d0;
        Unk_0200b144_Pos t = { q->unk_04.b.unk_05, q->unk_04.b.unk_06 };
        p = t;
        _ZN12Unk_02006d1415netSyncNearUnitEPi(this, &p);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        ((nJ::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->unk_7ec);
        pickUpReachUpdate();
    }
}

namespace nJ {
extern "C" void PlayerActor_SetArgsPickUp(Unk_0200b244_Out* out, Unk_0200b144_Pos* pos, s32 a, s32 b, u8 c) {
    out->unk_08 = pos->x;
    out->unk_09 = pos->y;
    out->unk_04 = a;
    out->unk_00 = b;
    out->unk_0a = c;
}
}

s32 Unk_02006d14::requestPickUpAt(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d) {
    using namespace nJ;
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(obj);
    _ZN19PlayerActionRequest6assignEiis(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    PlayerActor_SetArgsPickUp((Unk_0200b244_Out*)&obj[3], &p, a, 0xfff1, b);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(((nJ::Unk_02006d14 *)this), obj);
    _ZN19PlayerActionRequestD1Ev(obj);
    return r;
}

s32 Unk_02006d14::requestPickUpWithItem(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d) {
    using namespace nJ;
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(obj);
    _ZN19PlayerActionRequest6assignEiis(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    PlayerActor_SetArgsPickUp((Unk_0200b244_Out*)&obj[3], &p, -1, a, b);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(((nJ::Unk_02006d14 *)this), obj);
    _ZN19PlayerActionRequestD1Ev(obj);
    return r;
}

namespace nJ {
extern "C" void PlayerActor_NetWritePickUp(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c) {
    dst->unk_04 = pos->x;
    dst->unk_05 = pos->y;
    dst->unk_03 = a;
    NetBuf_WriteU16(&dst->unk_01, b);
    dst->unk_00 = c;
}
}

namespace nJ {
extern "C" void PlayerActor_NetReadPickUp(Unk_0200b144_Src* src, Unk_0200b144_Pos* pos, s8* a, u16* b, u8* c) {
    pos->x = src->unk_04;
    pos->y = src->unk_05;
    *a = src->unk_03;
    *b = NetBuf_ReadU16(&src->unk_01);
    *c = src->unk_00;
}
}

void Unk_02006d14::setupPickUp(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    Unk_0200b244_Out* o = &((nJ::Unk_02006d14_Item *)item)->unk_0c;
    u8 x = o->unk_08;
    u8 y = o->unk_09;
    s32 z = o->unk_04;
    u16 t[4];
    t[0] = ((nJ::Unk_02006d14_Item *)item)->unk_0c.unk_00;
    u8 flag = o->unk_0a;
    if (z < 0) {
        BOOL r;
        FieldPos_FromUnitCenter((u8*)((nJ::Unk_02006d14 *)this) + 0x820, x, y);
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0x1000;
        r = Unk_0200add8_IsFFF1(&t[0], &t[2]);
        if (r) {
            ((nJ::Unk_02006d14 *)this)->unk_81e = *BlockMap_GetItemPtrAtPos(gSceneBlockMap, (u8*)((nJ::Unk_02006d14 *)this) + 0x820, 0);
            ((nJ::Unk_02006d14 *)this)->unk_81c = ((nJ::Unk_02006d14 *)this)->unk_81e;
        } else {
            ((nJ::Unk_02006d14 *)this)->unk_81e = t[0];
            ((nJ::Unk_02006d14 *)this)->unk_81c = ((nJ::Unk_02006d14 *)this)->unk_81e;
        }
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nJ::Unk_02006d14 *)this)->unk_7fc)) {
            void* q = PlayerData_GetCurrent();
            if (q != NULL) {
                if (Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0x137b, 0x137b)) {
                    if (_ZN12Unk_02097ff48testFlagEj(q, 0x28) == 0) {
                        Unk_0200b144_Pos p;
                        _ZN12Unk_02097ff47setFlagEj(q, 0x28);
                        p.x = x;
                        p.y = y;
                        _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(this, &p, flag, 6, -1);
                        return;
                    }
                } else if (((nJ::Unk_02006d14 *)this)->unk_81c >= 0x136a && ((nJ::Unk_02006d14 *)this)->unk_81c <= 0x136a) {
                    if (_ZN12Unk_02097ff48testFlagEj(q, 0x27) == 0) {
                        Unk_0200b144_Pos p;
                        _ZN12Unk_02097ff47setFlagEj(q, 0x27);
                        p.x = x;
                        p.y = y;
                        _ZN12Unk_02006d1422requestPickUpFanfareAtEP17Unk_02006d14_Pairhjs(this, &p, flag, 6, -1);
                        return;
                    }
                }
            }
        }
        {
            BOOL s8 = 1;
            BOOL s7 = 1;
            BOOL s6 = 1;
            BOOL s5 = 1;
            BOOL s4 = 1;
            BOOL s3 = 1;
            BOOL s2 = 1;
            BOOL s1 = 0;
            u32 v = ((nJ::Unk_02006d14 *)this)->unk_81c;
            if (v <= 5) {
                s1 = 1;
            }
            if (!s1) {
                if (!Unk_0200add8_InRange(v, 6, 0xb)) {
                    s2 = 0;
                }
            }
            if (!s2) {
                if (!Unk_0200add8_InRange(v, 0xc, 0x11)) {
                    s3 = 0;
                }
            }
            if (!s3) {
                if (!Unk_0200add8_InRange(v, 0x12, 0x19) && v != 0x1c) {
                    s4 = 0;
                }
            }
            if (!s4) {
                if (!Unk_0200add8_InRange(v, 0x8a, 0x8f) && !Unk_0200add8_InRange(v, 0x90, 0x95) &&
                    !Unk_0200add8_InRange(v, 0x96, 0x9b) && !Unk_0200add8_InRange(v, 0x9c, 0xa3) && v != 0xa5) {
                    s5 = 0;
                }
            }
            if (!s5) {
                if (v != 0x1a) {
                    s6 = 0;
                }
            }
            if (!s6) {
                if (v != 0xa4) {
                    s7 = 0;
                }
            }
            if (!s7 && v != 0x1d) {
                s8 = 0;
            }
            if (s8) {
                _ZN12Unk_02006d146playSeEj(this, 0x7d7);
                _ZN12Unk_02006d1413setActionFlagEj(this, 9);
            } else {
                _ZN12Unk_02006d146playSeEj(this, 0x5d);
                if (Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0x1554, 0x155c)) {
                    VillagerTrend_NotifyUnk6((u8*)((nJ::Unk_02006d14 *)this) + 0x5c);
                }
            }
            _ZN12Unk_02006d1413setActionFlagEj(this, 0xd);
        }
    }
    u8 b20;
    if (flag != 0 && !Unk_0200add8_IsFFF1(&((nJ::Unk_02006d14 *)this)->unk_81c, &t[3]) && !Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0xa7, 0xc6)) {
        b20 = 1;
    } else {
        b20 = 0;
    }
    if (b20) {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        PendingUnit_CommitAt(&p, 0);
    } else {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        PendingUnit_ApplyAt(&p, 0);
    }
    {
        Unk_02006d14_Sub7d0* s = &((nJ::Unk_02006d14 *)this)->unk_7d0;
        Unk_0200b144_Pos p;
        s->unk_08 = 0;
        s->unk_04.s = z;
        s->unk_09 = x;
        s->unk_0a = y;
        s->unk_00 = b20;
        u16 w = ((nJ::Unk_02006d14 *)this)->unk_81c;
        p.x = x;
        p.y = y;
        PlayerActor_NetWritePickUp((Unk_0200b144_Src*)((u8*)((nJ::Unk_02006d14 *)this) + 0x8ec), &p, (s8)z, w, b20);
    }
    if (z >= 0) {
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x16, 6, 0);
    } else {
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x16, 3, 0);
    }
    if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
        HeldItemModel_PlayAnim((u8*)((nJ::Unk_02006d14 *)this) + 0x59c, 0xc, 3, 1);
    }
}

void Unk_02006d14::netPickUp(s16 old) {
    using namespace nJ;
    Unk_0200b144_Pos p;
    s8 a;
    u8 b;
    u16 c;
    Unk_0200b144_Pos q;
    if (((nJ::Unk_02006d14 *)this)->unk_8e8 != 0) {
        ((nJ::Unk_02006d14 *)this)->unk_8e8 = ((nJ::Unk_02006d14 *)this)->unk_8e8 + 1;
    } else if (((nJ::Unk_02006d14 *)this)->unk_7ec == 0) {
        p.x = 0;
        p.y = 0;
        PlayerActor_NetReadPickUp((Unk_0200b144_Src*)((u8*)((nJ::Unk_02006d14 *)this) + 0x8ec), &p, &a, &c, &b);
        if (a < 0) {
            q.x = p.x;
            q.y = p.y;
            requestPickUpWithItem(&q, c, b, 6, old);
        }
    }
}

void Unk_02006d14::endPickUp(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
}

void Unk_02006d14::pickUpUpdateAnim(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (((nJ::Unk_02006d14 *)this)->unk_700 == 0x16) {
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi((u8*)((nJ::Unk_02006d14 *)this) + 0x2cc, 9)) {
            _ZN12Unk_02006d146playSeEj(this, 0x4f);
        }
    }
}

void Unk_02006d14::pickUpUpdateItem() {
    using namespace nJ;
    Unk_02006d14_Sub7d0* s;
    Unk_02006d14_V3* r;
    s32 t;
    u32 v;
    s16 sh;
    if (((nJ::Unk_02006d14 *)this)->unk_700 != 0x16) {
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0;
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        return;
    }
    s = &((nJ::Unk_02006d14 *)this)->unk_7d0;
    if (s->unk_04.s >= 0) {
        r = FtrMgr_PollRemovedPos();
        if (r == NULL) {
            return;
        }
        ((nJ::Unk_02006d14 *)this)->unk_820 = r->x;
        ((nJ::Unk_02006d14 *)this)->unk_824 = r->y;
        ((nJ::Unk_02006d14 *)this)->unk_828 = r->z;
        _ZN12Unk_02006d1413setActionFlagEj(this, 0xd);
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0x1000;
        s->unk_04.s = -1;
    }
    v = (((nJ::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16;
    if (v >= 6) {
        volatile Unk_02006d14_V3 sv;
        Unk_02006d14_Blk b1, b2;
        t = 0x1000 - _s32_div_f((v - 6) << 12, 12);
        if (t < 0) {
            t = 0;
            _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        }
        ((nJ::Unk_02006d14 *)this)->unk_82c = t;
        ((nJ::Unk_02006d14 *)this)->unk_830 = t;
        ((nJ::Unk_02006d14 *)this)->unk_834 = t;
        Unk_02006d14_V3 *pv = &((nJ::Unk_02006d14 *)this)->unk_c4;
        sv.x = pv->x;
        sv.y = pv->y;
        sv.z = pv->z;
        sh = ((nJ::Unk_02006d14 *)this)->unk_d0;
        b1 = ((nJ::Unk_02006d14 *)this)->unk_294;
        b2 = ((nJ::Unk_02006d14 *)this)->unk_694;
        _ZN12Unk_02006d1411calcHandMtxEv(this);
        _ZN12Unk_02006d1418updateShownItemPosEjz(this, t);
        ((nJ::Unk_02006d14 *)this)->unk_c4.x = sv.x;
        ((nJ::Unk_02006d14 *)this)->unk_c4.y = sv.y;
        ((nJ::Unk_02006d14 *)this)->unk_c4.z = sv.z;
        ((nJ::Unk_02006d14 *)this)->unk_d0 = sh;
        ((nJ::Unk_02006d14 *)this)->unk_294 = b1;
        ((nJ::Unk_02006d14 *)this)->unk_694 = b2;
    }
}

void Unk_02006d14::pickUpRemoteCheckEnd() {
    using namespace nI;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nI::Unk_02006d14 *)this)->unk_2cc)) {
        if (((nI::Unk_02006d14 *)this)->unk_700 == 0x16 || ((nI::Unk_02006d14 *)this)->unk_700 == 0x18) {
            _ZN12Unk_020102ec9startAnimEijt(this, 0x6c, 3, 0);
        }
        ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x12);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
        }
    }
}

void Unk_02006d14::mainPickUp() {
    using namespace nI;
    _ZN12Unk_02006d1416pickUpUpdateAnimEP17Unk_02006d14_Itemj(this);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        _ZN12Unk_020102ec19submitSceneColliderEv(this);
        _ZN12Unk_02006d1416pickUpUpdateItemEv(this);
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        pickUpUpdateStore(&s->unk_8, s->unk_0);
    } else {
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        u32 c = s->unk_a;
        u32 a = s->unk_9;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        _ZN12Unk_02006d1415netSyncNearUnitEPi(this, &p);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        _ZN12Unk_02006d1416pickUpUpdateItemEv(this);
        pickUpRemoteCheckEnd();
    }
}

namespace nI {
extern "C" void PlayerActor_SetArgsPickUpFanfare(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b) {
    s->unk_2 = p->unk_00;
    s->unk_3 = p->unk_04;
    s->unk_0 = h;
    s->unk_4 = b;
}
}

s32 Unk_02006d14::requestPickUpFanfareAt(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN19PlayerActionRequestC1Ev(&o);
    _ZN19PlayerActionRequest6assignEiis(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a6d4_St s;
    PlayerActor_SetArgsPickUpFanfare((Unk_0200a728_St*)&s, &q, 0xfff1, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &o);
    _ZN19PlayerActionRequestD1Ev(&o);
    return r;
}

s32 Unk_02006d14::requestPickUpFanfareWithItem(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN19PlayerActionRequestC1Ev(&o);
    _ZN19PlayerActionRequest6assignEiis(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a728_St s;
    PlayerActor_SetArgsPickUpFanfare(&s, &q, h, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &o);
    _ZN19PlayerActionRequestD1Ev(&o);
    return r;
}

namespace nI {
extern "C" void PlayerActor_NetWritePickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b) {
    s->unk_3 = p->unk_00;
    s->unk_4 = p->unk_04;
    NetBuf_WriteU16(s->unk_1, h);
    s->unk_0 = b;
}
}

namespace nI {
extern "C" void PlayerActor_NetReadPickUpFanfare(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b) {
    out->unk_00 = s->unk_3;
    out->unk_04 = s->unk_4;
    *h = NetBuf_ReadU16(s->unk_1);
    *b = s->unk_0;
}
}

void Unk_02006d14::setupPickUpFanfare(Unk_02006d14_Item* item, u32 v) {
    using namespace nI;
    u8* it = ((nI::Unk_02006d14_Item *)item)->unk_0c_raw;
    u32 a = it[2];
    u32 c = it[3];
    u16 g[2];
    g[0] = *(u16*)it;
    u8 d = it[4];
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = d;
    FieldPos_FromUnitCenter(((nI::Unk_02006d14 *)this)->unk_820, a, c);
    ((nI::Unk_02006d14 *)this)->unk_82c = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_830 = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_834 = 0x1000;
    BOOL r;
    if (Item_IsFurniture(&g[0])) {
        g[1] = 0xfff1;
        s32 x = Item_GetFurnitureIndex(&g[0]);
        r = x == Item_GetFurnitureIndex(&g[1]);
    } else {
        r = g[0] == 0xfff1;
    }
    if (r) {
        u16* pp = (u16*)BlockMap_GetItemPtrAtPos(gSceneBlockMap, ((nI::Unk_02006d14 *)this)->unk_820, 0);
        ((nI::Unk_02006d14 *)this)->unk_81e = *pp;
        ((nI::Unk_02006d14 *)this)->unk_81c = ((nI::Unk_02006d14 *)this)->unk_81e;
    } else {
        ((nI::Unk_02006d14 *)this)->unk_81e = g[0];
        ((nI::Unk_02006d14 *)this)->unk_81c = ((nI::Unk_02006d14 *)this)->unk_81e;
    }
    u16 hv = ((nI::Unk_02006d14 *)this)->unk_81c;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    PlayerActor_NetWritePickUpFanfare(&((nI::Unk_02006d14 *)this)->unk_8ec, &p, hv, d);
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x17, 3, 0);
    if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
        HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0xd, 3, 1);
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        Bgm_RequestSilence(0x12, 0xf, 0);
    }
    _ZN12Unk_02006d1413setActionFlagEj(this, 0x1c);
}

void Unk_02006d14::netPickUpFanfare(s16 v) {
    using namespace nI;
    if (((nI::Unk_02006d14 *)this)->unk_8e8 != 0) {
        ((nI::Unk_02006d14 *)this)->unk_8e8++;
    } else if (((nI::Unk_02006d14 *)this)->unk_7ec == 0x1a) {
        ((nI::Unk_02006d14 *)this)->unk_c80 = v;
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = 0;
        p.unk_04 = 0;
        u16 hh;
        u8 bb;
        PlayerActor_NetReadPickUpFanfare(&((nI::Unk_02006d14 *)this)->unk_8ec, &p, &hh, &bb);
        Unk_02006d14_Pair q;
        q = p;
        requestPickUpFanfareWithItem(&q, hh, bb, 6, v);
    }
}

void Unk_02006d14::endPickUpFanfare() {
    using namespace nI;
    if (!_ZN11CommManager11isLocalSlotEj(gCommManager, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x1c)) {
            pickUpFanfareTakeItem();
        }
    }
}

void Unk_02006d14::pickUpFanfareUpdateItemPos() {
    using namespace nI;
    volatile u32 t[3];
    Unk_02006d14_Trip* pt = &((nI::Unk_02006d14 *)this)->unk_c4;
    t[0] = pt->unk_0;
    t[1] = pt->unk_4;
    t[2] = pt->unk_8;
    s16 h = ((nI::Unk_02006d14 *)this)->unk_d0;
    Unk_02006d14_Blk a = *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x294);
    Unk_02006d14_Blk b = *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x694);
    _ZN12Unk_02006d1411calcHandMtxEv(this);
    _ZN12Unk_02006d1418updateShownItemPosEjz(this, 0x1000);
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_0 = t[0];
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_4 = t[1];
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_8 = t[2];
    ((nI::Unk_02006d14 *)this)->unk_d0 = h;
    *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x294) = a;
    *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x694) = b;
    if (((nI::Unk_02006d14 *)this)->unk_2d4.mid >= 6) {
        _ZN12Unk_02006d1412turnToCameraEi(this, 0x400);
    }
}

void Unk_02006d14::pickUpFanfareUpdate() {
    using namespace nI;
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    u8* state = &s->unk_1;
    struct { u32 pad; Unk_02006d14_Pair p[3]; u32 pad2; } l;
    switch (*state) {
    case 0:
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nI::Unk_02006d14 *)this)->unk_2cc, 1)) {
            Camera_SetMode4();
        }
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nI::Unk_02006d14 *)this)->unk_2cc, 6)) {
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            u8 flag = s->unk_0;
            if (flag) {
                l.p[0].unk_00 = b;
                l.p[0].unk_04 = c;
                PendingUnit_CommitAt(&l.p[0], 0);
            } else {
                l.p[1].unk_00 = b;
                l.p[1].unk_04 = c;
                PendingUnit_ApplyAt(&l.p[1], 0);
            }
            _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1c);
            if (Unk_0200a114_IsZero(gFieldSceneKind)) {
                _ZN12Unk_02006d146playSeEj(this, 0x5d);
            }
            _ZN12Unk_02006d1413setActionFlagEj(this, 0xd);
        }
        if (((nI::Unk_02006d14 *)this)->unk_2d4.mid >= 6 && TalkRequest_AddPlayerMessage()) {
            *state = 1;
            _ZN9Character17attachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, sPlayerActorMsgFile);
            BOOL r = FALSE;
            u16 h = ((nI::Unk_02006d14 *)this)->unk_81c;
            if (h >= 0x137b && h <= 0x137b) r = TRUE;
            if (r) {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x23;
            } else if (h >= 0x136a && h <= 0x136a) {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x21;
            } else {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x25;
            }
            ((nI::Unk_02006d14 *)this)->unk_128->unk_8 = 1;
            Bgm_ReleasePriority(0x12);
            Bgm_RequestSilence(0xc, 0, 0x10);
            Bgm_Request(0xd, 0x39, 0x7f, 1);
            ((nI::Unk_02006d14 *)this)->unk_818 = 10;
        }
        break;
    case 1:
        if (((nI::Unk_02006d14 *)this)->unk_128 && ((nI::Unk_02006d14 *)this)->unk_128->unk_4) {
            *state = 2;
        }
        break;
    case 2:
        if (((nI::Unk_02006d14 *)this)->unk_128 && !((nI::Unk_02006d14 *)this)->unk_128->unk_4) {
            _ZN9Character17detachTalkRequestEi(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
            u8 flag = s->unk_0;
            if (flag == 0) {
                TalkRequest_FinishPlayerMessage();
            }
            Camera_SetModeDefault();
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
            l.p[2].unk_00 = b;
            l.p[2].unk_04 = c;
            requestPickUpFanfareStow(&l.p[2], flag, 6, -1);
        }
        break;
    }
}

void Unk_02006d14::pickUpFanfareNetTake() {
    using namespace nI;
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nI::Unk_02006d14 *)this)->unk_2cc, 6)) {
        pickUpFanfareTakeItem();
    }
}

void Unk_02006d14::pickUpFanfareTakeItem() {
    using namespace nI;
    _ZN12Unk_02006d1413setActionFlagEj(this, 0xd);
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    u32 b = s->unk_2;
    u32 c = s->unk_3;
    u8 flag = s->unk_0;
    if (flag) {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        PendingUnit_CommitAt(&p, 0);
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        PendingUnit_ApplyAt(&p, 0);
    }
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1c);
    if (Unk_0200a114_IsZero(gFieldSceneKind)) {
        _ZN12Unk_02006d146playSeEj(this, 0x5d);
    }
    ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x12);
}

void Unk_02006d14::mainPickUpFanfare() {
    using namespace nI;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        pickUpFanfareUpdateItemPos();
        pickUpFanfareUpdate();
    } else {
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        u32 c = s->unk_3;
        u32 a = s->unk_2;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        _ZN12Unk_02006d1415netSyncNearUnitEPi(this, &p);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        pickUpFanfareUpdateItemPos();
        pickUpFanfareNetTake();
    }
}

namespace nI {
extern "C" void PlayerActor_SetArgsPickUpFanfareStow(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b) {
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}
}

s32 Unk_02006d14::requestPickUpFanfareStow(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN19PlayerActionRequestC1Ev(&o);
    _ZN19PlayerActionRequest6assignEiis(&o, 0x1b, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a0a0_Bytes s;
    PlayerActor_SetArgsPickUpFanfareStow(&s, &q, b);
    s32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &o);
    _ZN19PlayerActionRequestD1Ev(&o);
    return r;
}

namespace nI {
extern "C" void PlayerActor_NetWritePickUpFanfareStow(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b) {
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}
}

namespace nI {
extern "C" void PlayerActor_NetReadPickUpFanfareStow(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b) {
    out->unk_00 = src->unk_1;
    out->unk_04 = src->unk_2;
    *b = src->unk_0;
}
}

void Unk_02006d14::setupPickUpFanfareStow(Unk_02006d14_Item* item, u32 v) {
    using namespace nI;
    Unk_02009f68_Bytes* it = &((nI::Unk_02006d14_Item *)item)->unk_0c;
    u32 a = it->unk_1;
    u32 c = it->unk_2;
    u8 b = it->unk_0;
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = b;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    PlayerActor_NetWritePickUpFanfareStow((Unk_02009f68_Bytes*)&((nI::Unk_02006d14 *)this)->unk_8ec, &p, b);
    ((nI::Unk_02006d14 *)this)->unk_82c = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_830 = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_834 = 0x1000;
    _ZN12Unk_02006d146playSeEj(this, 0x4f);
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x18, 3, 0);
    if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
        HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 6, 3, 1);
    }
}

void Unk_02006d14::netPickUpFanfareStow(s16 v) {
    using namespace nI;
    Unk_02006d14_Pair p;
    u8 b;
    p.unk_00 = 0;
    p.unk_04 = 0;
    PlayerActor_NetReadPickUpFanfareStow((Unk_02009f68_Bytes*)&((nI::Unk_02006d14 *)this)->unk_8ec, &p, &b);
    Unk_02006d14_Pair q;
    q = p;
    requestPickUpFanfareStow(&q, b, 6, v);
}

void Unk_02006d14::pickUpFanfareStowShrink() {
    using namespace nH;
    u32 x;
    s32 t;
    if (((nH::Unk_02006d14 *)this)->unk_700 != 0x18) {
        ((nH::Unk_02006d14 *)this)->unk_82c = 0;
        ((nH::Unk_02006d14 *)this)->unk_830 = 0;
        ((nH::Unk_02006d14 *)this)->unk_834 = 0;
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
    } else {
        x = (((nH::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16;
        if (x < 6) {
            t = 0x1000 - _s32_div_f(x << 12, 6);
            if (t < 0) {
                t = 0;
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
            }
            ((nH::Unk_02006d14 *)this)->unk_82c = t;
            ((nH::Unk_02006d14 *)this)->unk_830 = t;
            ((nH::Unk_02006d14 *)this)->unk_834 = t;
            _ZN12Unk_02006d1418updateShownItemPosEjz(this, t);
        } else {
            ((nH::Unk_02006d14 *)this)->unk_82c = 0;
            ((nH::Unk_02006d14 *)this)->unk_830 = 0;
            ((nH::Unk_02006d14 *)this)->unk_834 = 0;
        }
    }
}

void Unk_02006d14::mainPickUpFanfareStow() {
    using namespace nH;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        pickUpFanfareStowShrink();
        u8* p = (u8*)&((nH::Unk_02006d14 *)this)->unk_7d0;
        _ZN12Unk_02006d1417pickUpUpdateStoreEPhh(this, p + 1, p[0]);
    } else {
        u8* p = (u8*)&((nH::Unk_02006d14 *)this)->unk_7d0;
        u32 v[2];
        u32 hi = p[3];
        u32 lo = p[2];
        v[0] = lo;
        v[1] = hi;
        _ZN12Unk_02006d1415netSyncNearUnitEPi(this, v);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        pickUpFanfareStowShrink();
        _ZN12Unk_02006d1420pickUpRemoteCheckEndEv(this);
    }
}

namespace nH {
extern "C" void PlayerActor_SetArgsAct30(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d) {
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
    p->unk_0c = d;
}
}

s32 Unk_02006d14::requestAct30(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g) {
    using namespace nH;
    Unk_0200e2e0 obj;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&obj);
    _ZN19PlayerActionRequest6assignEiis(&obj, 0x30, f, g);
    ((nH::Unk_02006d14 *)this)->unk_81e = *p;
    ((nH::Unk_02006d14 *)this)->unk_81c = ((nH::Unk_02006d14 *)this)->unk_81e;
    PlayerActor_SetArgsAct30(&obj.unk_0c, b, c, d, e);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);
    _ZN19PlayerActionRequestD1Ev(&obj);
    return r;
}

void Unk_02006d14::setupAct30(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    Unk_02009d5c_Sub* s = &((nH::Unk_02006d14_Item *)item)->unk_0c;
    HandOverItem_Begin(&((nH::Unk_02006d14 *)this)->unk_81c, ((nH::Unk_02006d14_Item *)item)->unk_0c.unk_00, s->unk_04, s->unk_08, ((nH::Unk_02006d14 *)this), s->unk_0c);
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x28, 3, 0);
    HandOverItem_RequestMode(1, ((nH::Unk_02006d14 *)this));
    _ZN12Unk_02006d146playSeEj(this, 0x4f);
    if (((nH::Unk_02006d14 *)this)->unk_81c == 0x1373 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1375 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1377 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1379 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x136a || ((nH::Unk_02006d14 *)this)->unk_81c == 0x137b) {
        ((nH::Unk_02006d14 *)this)->unk_8e7 = -1;
    } else {
        ((nH::Unk_02006d14 *)this)->unk_8e7 = 0;
    }
}

void Unk_02006d14::netAct30() {
    using namespace nH;
}

void Unk_02006d14::act30UpdateAnim() {
    using namespace nH;
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(((nH::Unk_02006d14 *)this)->unk_2cc, 8)) {
        _ZN12Unk_02006d146playSeEj(this, 0x63);
    }
    _ZN12Unk_020102ec11advanceAnimEv(this);
}

void Unk_02006d14::act30CheckEnd() {
    using namespace nH;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        requestAct31(6, -1);
    }
}

void Unk_02006d14::mainAct30() {
    using namespace nH;
    act30UpdateAnim();
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act30CheckEnd();
}

s32 Unk_02006d14::requestAct31(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN19PlayerActionRequestC1Ev(&obj);      _ZN19PlayerActionRequest6assignEiis(&obj, 0x31, a, b);      r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);      _ZN19PlayerActionRequestD1Ev(&obj);      return r;  }

void Unk_02006d14::setupAct31(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec9startAnimEijt(this, 0x29, 3, 0);
    HandOverItem_RequestMode(2, ((nH::Unk_02006d14 *)this));
}

void Unk_02006d14::netAct31() {
    using namespace nH;
}

void Unk_02006d14::act31CheckEnd() {
    using namespace nH;
    if (HandOverItem_IsMaster(((nH::Unk_02006d14 *)this)) == 0) {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nH::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1412requestAct10Esji(this, 7, 5, -1);
    }
}

void Unk_02006d14::mainAct31() {
    using namespace nH;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act31CheckEnd();
}

s32 Unk_02006d14::requestAct32(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN19PlayerActionRequestC1Ev(&obj);      _ZN19PlayerActionRequest6assignEiis(&obj, 0x32, a, b);      r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);      _ZN19PlayerActionRequestD1Ev(&obj);      return r;  }

namespace nH {
extern "C" void PlayerActor_InitAct32Work(u32* p) {
    *p = 0;
}
}

void Unk_02006d14::setupAct32(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec9startAnimEijt(this, 1, 3, 0);
    PlayerActor_InitAct32Work((u32*)&((nH::Unk_02006d14 *)this)->unk_7d0);
}

s32 Unk_02006d14::netAct32(u32 a) {
    using namespace nH;
    return requestAct32(6, a);
}

void Unk_02006d14::act32UpdateSpeed() {
    using namespace nH;
    u32* r4 = (u32*)((u8*)((nH::Unk_02006d14 *)this) + 0x7d0);
    s16 ang[3];
    s32 dist;
    Unk_02009a78_Locals L;
    Unk_02009a78_Vec* pv = &((nH::Unk_02006d14 *)this)->unk_5c;
    L.cur = *pv;
    ang[2] = ((nH::Unk_02006d14 *)this)->unk_8e;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        if (!HandOverItem_GetPos(&L.pos)) {
            return;
        }
        L.diff.x = L.pos.x - ((nH::Unk_02006d14 *)this)->unk_5c.x;
        L.diff.z = L.pos.z - ((nH::Unk_02006d14 *)this)->unk_5c.z;
        if (HandOverItem_CanTake(((nH::Unk_02006d14 *)this))) {
            *r4 = 0;
        } else {
            *r4 = PlayerActor_Accelerate(*r4, 0x333);
        }
        ang[1] = func_020e7b98(L.diff.x, L.diff.z);
    } else {
        if (!_ZN11PlayerActor18getRemoteTransformEPhPiS1_Pt(this, ang, &L.pos, &L.pos.z, &ang[1])) {
            _ZN12Unk_020102ec8setSpeedEPj(((nH::Unk_02006d14 *)this), data_020d5e4c);
            return;
        }
        if (L.pos.x != ((nH::Unk_02006d14 *)this)->unk_5c.x || L.pos.z != ((nH::Unk_02006d14 *)this)->unk_5c.z) {
            s32 t;
            L.diff.x = L.pos.x - ((nH::Unk_02006d14 *)this)->unk_5c.x;
            L.diff.z = L.pos.z - ((nH::Unk_02006d14 *)this)->unk_5c.z;
            *r4 = PlayerActor_Accelerate(*r4, 0x333);
            t = func_020e7b98(L.diff.x, L.diff.z);
            if (func_020e780c(t, ang[2]) >= 0x4000) {
                *r4 = 0;
            } else {
                ang[1] = t;
            }
        } else {
            *r4 = 0;
        }
    }
    if (*r4 != 0) {
        PlayerActor_TurnAngle((void*)&ang[2], ang[1]);
        _ZN12Unk_020102ec9setAngleYEPs(((nH::Unk_02006d14 *)this), (void*)&ang[2]);
    }
    s32 t2 = func_01ffcb0c(*r4, data_02135f44[(((u16)(s16)(ang[2] - ang[1])) >> 4) * 2 + 1]);
    if (t2 < 0) {
        t2 = -t2;
    }
    dist = t2;
    _ZN12Unk_020102ec8setSpeedEPj(((nH::Unk_02006d14 *)this), &dist);
}

void Unk_02006d14::act32UpdateAnim() {
    using namespace nH;
    s32 r = func_01ffcb0c(((nH::Unk_02006d14 *)this)->unk_98, 0x3ae1);
    if (r <= (s32)((nH::Unk_02006d14 *)this)->unk_2d0) {
        ((nH::Unk_02006d14 *)this)->unk_2dc = r;
    }
    _ZN17TwoLayerAnimModel12updateLayersEv(((nH::Unk_02006d14 *)this)->unk_230);
    _ZN12Unk_02006d1416updateFootstepFxEv(this);
}

void Unk_02006d14::act32CheckEnd() {
    using namespace nH;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        if (((nH::Unk_02006d14 *)this)->unk_98 == 0) {
            requestAct33(6, -1);
        }
    } else {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = 0;
        if (((nH::Unk_02006d14 *)this)->unk_98 == 0) {
            _ZN12Unk_02006d1412requestAct10Esji(this, 3, 5, -1);
        }
    }
}

void Unk_02006d14::mainAct32() {
    using namespace nH;
    act32UpdateSpeed();
    act32UpdateAnim();
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec17moveWithCollisionEv(this);
    } else {
        _ZN12Unk_020102ec15moveNoCollisionEv(this);
    }
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act32CheckEnd();
}

s32 Unk_02006d14::requestAct33(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN19PlayerActionRequestC1Ev(&obj);      _ZN19PlayerActionRequest6assignEiis(&obj, 0x33, a, b);      r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);      _ZN19PlayerActionRequestD1Ev(&obj);      return r;  }

void Unk_02006d14::setupAct33(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x2a, 3, 0);
}

void Unk_02006d14::netAct33() {
    using namespace nH;
}

void Unk_02006d14::act33CheckEnd() {
    using namespace nH;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        if (HandOverItem_IsMaster(((nH::Unk_02006d14 *)this)) == 0) {
            if (HandOverItem_SwitchMaster(((nH::Unk_02006d14 *)this)) != 1) {
                return;
            }
            HandOverItem_RequestMode(3, ((nH::Unk_02006d14 *)this));
        }
        if (HandOverItem_IsModeActive(3) == 0) {
            requestAct34(6, -1);
        }
    }
}

void Unk_02006d14::mainAct33() {
    using namespace nH;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act33CheckEnd();
}

s32 Unk_02006d14::requestAct34(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN19PlayerActionRequestC1Ev(&obj);      _ZN19PlayerActionRequest6assignEiis(&obj, 0x34, a, b);      r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);      _ZN19PlayerActionRequestD1Ev(&obj);      return r;  }

void Unk_02006d14::setupAct34(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x2b, 3, 0);
    HandOverItem_RequestMode(4, ((nH::Unk_02006d14 *)this));
}

void Unk_02006d14::netAct34() {
    using namespace nH;
}

void Unk_02006d14::act34CheckEnd() {
    using namespace nH;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        if (HandOverItem_GetNextMode() == 5) {
            requestAct35(6, -1);
        }
    }
}

void Unk_02006d14::mainAct34() {
    using namespace nH;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act34CheckEnd();
}

s32 Unk_02006d14::requestAct35(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN19PlayerActionRequestC1Ev(&obj);      _ZN19PlayerActionRequest6assignEiis(&obj, 0x35, a, b);      r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);      _ZN19PlayerActionRequestD1Ev(&obj);      return r;  }

void Unk_02006d14::setupAct35(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x2c, 3, 0);
    HandOverItem_RequestMode(HandOverItem_GetNextMode(), ((nH::Unk_02006d14 *)this));
    _ZN12Unk_02006d146playSeEj(this, 0x4f);
}

void Unk_02006d14::netAct35() {
    using namespace nH;
}

void Unk_02006d14::act35CheckEnd() {
    using namespace nH;
    u16 v[2];
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nH::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1412requestAct10Esji(this, 3, 5, -1);
        if (((nH::Unk_02006d14 *)this)->unk_8e7 >= 0) {
            HandOverItem_GetItem(v);
            switch (v[0]) {
            case 0x1373:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 3;
                break;
            case 0x1375:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 2;
                break;
            case 0x1377:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 1;
                break;
            }
        }
        HandOverItem_End(((nH::Unk_02006d14 *)this));
    }
}

void Unk_02006d14::mainAct35() {
    using namespace nH;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act35CheckEnd();
}

s32 Unk_02006d14::requestChangeHeldItem(u16 a, u32 b, u32 c) {
    using namespace nH;
    Unk_0200e2e0 obj;
    s32 r;
    _ZN19PlayerActionRequestC1Ev(&obj);
    _ZN19PlayerActionRequest6assignEiis(&obj, 0x3f, b, c);
    *(u16*)&obj.unk_0c = a;
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &obj);
    _ZN19PlayerActionRequestD1Ev(&obj);
    return r;
}

namespace nH {
extern "C" void PlayerActor_NetWriteChangeHeldItem(void* p, u32 v) {
    NetBuf_WriteU16(p, v);
}
}

namespace nH {
extern "C" void PlayerActor_NetReadChangeHeldItem(void* p, u16* out) {
    *out = NetBuf_ReadU16(p);
}
}

void Unk_02006d14::setupChangeHeldItem(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    u16* q = (u16*)&((nH::Unk_02006d14_Item *)item)->unk_0c;
    if (Unk_02009624_Check()) {
        u16 buf[2];
        PlayerActor_GetHeldItem(buf, ((nH::Unk_02006d14 *)this));
        void* r = PlayerActor_GetPlayerData(this);
        buf[1] = 0xfff1;
        _ZN10PlayerData11setHeldItemEPt(r, &buf[1]);
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x13, 5, 5);
        _ZN10PlayerData11setHeldItemEPt(r, buf);
    }
    Unk_02009624_Pair* d = &((nH::Unk_02006d14 *)this)->unk_7d0;
    d->unk_00 = 0x1000;
    d->unk_04 = *q;
    if (old == 0x10) {
        d->unk_06 = 1;
    } else {
        d->unk_06 = 0;
    }
    if (d->unk_04 != 0xfff1) {
        _ZN12Unk_02006d146playSeEj(this, 0x31);
    } else {
        _ZN12Unk_02006d146playSeEj(this, 0x78);
    }
    PlayerActor_NetWriteChangeHeldItem(((nH::Unk_02006d14 *)this)->unk_8ec, *q);
}

s32 Unk_02006d14::netChangeHeldItem(u32 a) {
    using namespace nH;
    u16 v;
    PlayerActor_NetReadChangeHeldItem(((nH::Unk_02006d14 *)this)->unk_8ec, &v);
    return requestChangeHeldItem(v, 6, a);
}

void Unk_02006d14::endChangeHeldItem() {
    using namespace nG;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nG::Unk_02006d14 *)this)->unk_7fc)) {
        PlayerData_GetBySessionSlot(((nG::Unk_02006d14 *)this)->unk_7fc);
        u16 *p = _ZN10PlayerData11getHeldItemEv();
        if (p) _ZN12Unk_02006d1420netSendClothesChangeEjj(((nG::Unk_02006d14 *)this), 3, *p);
    }
}

void Unk_02006d14::changeHeldItemUpdate() {
    using namespace nG;
    Unk_02006d14_7d0 *r6 = &((nG::Unk_02006d14 *)this)->unk_7d0;
    u16 r4 = r6->h4;
    BOOL b = (gFieldSceneKind == 1);
    if (b) {
        if (r4 >= 0x1369 && r4 <= 0x13a7) {
            PlayerActor_SetHoldableItem(r4 - 0x1368, ((nG::Unk_02006d14 *)this)->unk_7fc);
        } else {
            PlayerActor_SetHoldableItem(0, ((nG::Unk_02006d14 *)this)->unk_7fc);
        }
        ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
        if (r6->b6) _ZN12Unk_02006d1412requestAct10Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
        else _ZN12Unk_0200769412requestAct05Etjj(((nG::Unk_02006d14 *)this), 3, 5, -1);
    } else {
        _ZN12Unk_02006d1412turnToCameraEi(((nG::Unk_02006d14 *)this), 0x400);
        switch ((((nG::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16) {
        case 8:
            PlayerActor_SetHoldableItem(0, ((nG::Unk_02006d14 *)this)->unk_7fc);
            break;
        case 0xb:
            if (r4 >= 0x1369 && r4 <= 0x13a7) PlayerActor_SetHoldableItem(r4 - 0x1368, ((nG::Unk_02006d14 *)this)->unk_7fc);
            break;
        case 0xe:
            _ZN12Unk_02006d1417applyHeldItemPoseEiPv(((nG::Unk_02006d14 *)this), 0, 6);
            break;
        }
        if (_ZN13AnimFrameCtrl10isFinishedEv(((nG::Unk_02006d14 *)this)->unk_2cc)) {
            ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
            if (r6->b6) _ZN12Unk_02006d1412requestAct10Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
            else _ZN12Unk_0200769412requestAct05Etjj(((nG::Unk_02006d14 *)this), 3, 5, -1);
        }
    }
}

void Unk_02006d14::mainChangeHeldItem() {
    using namespace nG;
    _ZN12Unk_020102ec11advanceAnimEv(((nG::Unk_02006d14 *)this));
    _ZN12Unk_02006d1418netFollowTransformEv(((nG::Unk_02006d14 *)this));
    _ZN12Unk_020102ec18updateBodyColliderEv(((nG::Unk_02006d14 *)this));
    changeHeldItemUpdate();
}

void Unk_0200944c::setWalkToArgs(Unk_02006d14_Vec v, s32 a) {
    using namespace nG;
    unk_00 = v;
    unk_0c = a;
}

BOOL Unk_02006d14::requestWalkTo(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c) {
    using namespace nG;
    Unk_020093f4_Msg m;
    BOOL r;
    if (((nG::Unk_02006d14 *)this)->unk_7ec == 0x6f) return 0;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x6f, b, c);
    m.unk_0c.setWalkToArgs(*v, a);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_020093d4::initWalkTo(Unk_02006d14_Vec v, s32 a, s32 b) {
    using namespace nG;
    unk_00 = v;
    unk_0c = 0;
    unk_10 = a;
    unk_14 = b;
}

void Unk_02006d14::setupWalkTo(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    Unk_02006d14_Vec *p = (Unk_02006d14_Vec *)&((nG::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_020092c8_Loc loc;
    s32 r6;
    _ZN12Unk_020102ec9startAnimEijt(this, 1, 3, 0);
    r6 = ((s32 *)p)[3];
    ((Unk_020093d4 *)&((nG::Unk_02006d14 *)this)->unk_7d0)->initWalkTo(*p, r6, old);
    _ZN12Unk_02006d1413setActionFlagEj(this, 5);
    ((nG::Unk_02006d14 *)this)->unk_804 = 0;
    if (_ZN12Unk_02006d1416isGuestInSessionEv(((nG::Unk_02006d14 *)this))) {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nG::Unk_02006d14 *)this)->unk_7fc)) {
            if (Scene_GetCurrent() == 0xc) {
                if (r6 == 0x666) {
                    loc.date.w0 = 0;
                    loc.date.w1 = 0;
                    Clock_GetDateTime(&loc.date);
                    { u8 *q0 = PlayerSession_GetSessionFlags(); *q0 = *q0 & 0xf9; }
                    { u8 *q1 = PlayerSession_GetSessionFlags(); if ((*q1 & 1) == 0) DateTime_SubDays(&loc.date, 1); }
                    loc.bits.y = loc.date.b[5];
                    loc.bits.m = loc.date.b[4];
                    loc.bits.d = loc.date.b[3];
                    _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(PlayerActor_GetPlayerData(((nG::Unk_02006d14 *)this)), loc.bits);
                }
            }
        }
    }
}

void Unk_02006d14::netWalkTo() {
    using namespace nG;}

s32 Unk_02006d14::walkToUpdateSpeed() {
    using namespace nG;
    Unk_02006d14_7d0 *p = &((nG::Unk_02006d14 *)this)->unk_7d0;
    s32 *r6 = &p->wc;
    s32 sp0 = p->w10;
    s32 r7 = 0;
    Unk_02006d14_Vec d;
    Unk_02006d14_Vec *pv = &((nG::Unk_02006d14 *)this)->unk_5c;
    Unk_02006d14_Vec saved = *pv;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x18)) p->w0 = ((nG::Unk_02006d14 *)this)->unk_5c.x;
    if (Scene_GetCurrent() == 0x20 && p->w14 == 0x40 && saved.z >= p->w8) {
        p->w8 = saved.z;
    }
    d.x = p->w0 - ((nG::Unk_02006d14 *)this)->unk_5c.x;
    d.z = p->w8 - ((nG::Unk_02006d14 *)this)->unk_5c.z;
    t = func_01ffcb0c(0x4000, *r6);
    if (t < 0x1000) t = 0x1000;
    if (func_020e9688(&d) < t) {
        if (*r6 <= 0x333) {
            PlayerActor_ApproachCoord(&((nG::Unk_02006d14 *)this)->unk_5c, p->w0);
            PlayerActor_ApproachCoord(&((nG::Unk_02006d14 *)this)->unk_5c.z, p->w8);
            if (p->w0 == ((nG::Unk_02006d14 *)this)->unk_5c.x && p->w8 == ((nG::Unk_02006d14 *)this)->unk_5c.z) {
                *r6 = 0;
                r7 = 1;
            } else {
                *r6 = func_020e9650(&((nG::Unk_02006d14 *)this)->unk_5c, &saved);
                Unk_02006d14_Vec *pw = &((nG::Unk_02006d14 *)this)->unk_5c;
                *pw = saved;
            }
        } else {
            *r6 = PlayerActor_Decelerate(*r6, 0x333);
        }
    } else {
        *r6 = PlayerActor_Accelerate(*r6, sp0);
    }
    ang = func_020e7b98(d.x, d.z);
    h = ((nG::Unk_02006d14 *)this)->unk_8e;
    if (*r6) {
        PlayerActor_TurnAngle(&h, ang);
        _ZN12Unk_020102ec9setAngleYEPs(((nG::Unk_02006d14 *)this), &h);
    }
    s32 vt = func_01ffcb0c(*r6, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    _ZN12Unk_020102ec8setSpeedEPj(((nG::Unk_02006d14 *)this), &v);
    return r7;
}

void Unk_02006d14::walkToUpdateAnim() {
    using namespace nG;
    if (((nG::Unk_02006d14 *)this)->unk_700 == 0) {
        _ZN12Unk_020102ec11advanceAnimEv(((nG::Unk_02006d14 *)this));
        return;
    }
    s32 r4 = ((nG::Unk_02006d14 *)this)->unk_98;
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x18)) r4 <<= 1;
    s32 q = func_01ffcb0c(r4, 0x3ae1);
    if (q <= ((nG::Unk_02006d14 *)this)->unk_2d0) ((nG::Unk_02006d14 *)this)->unk_2dc = q;
    if (r4 > 0x53f) {
        if (((nG::Unk_02006d14 *)this)->unk_700 != 2) _ZN12Unk_020102ec10switchAnimEijt(((nG::Unk_02006d14 *)this), 2, 3, 0);
    } else {
        if (((nG::Unk_02006d14 *)this)->unk_700 != 1) _ZN12Unk_020102ec10switchAnimEijt(((nG::Unk_02006d14 *)this), 1, 3, 0);
    }
    _ZN17TwoLayerAnimModel12updateLayersEv(((nG::Unk_02006d14 *)this)->unk_230);
    _ZN12Unk_02006d1416updateFootstepFxEv(((nG::Unk_02006d14 *)this));
}

void Unk_02006d14::walkToMove() {
    using namespace nG;
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x18)) {
        _ZN12Unk_020102ec17moveWithCollisionEv(((nG::Unk_02006d14 *)this));
        void *r7 = RoomEntry_GetRequest();
        if (RoomEntryRequest_GetDoorKind() == 1) {
            s32 *r4 = &((nG::Unk_02006d14 *)this)->unk_5c.y;
            s32 r6 = Ground_GetDefaultY(0);
            if (((nG::Unk_02006d14 *)this)->unk_5c.y >= r6) {
                s32 d = Unk_0200905c_abs(((s32 *)RoomEntryRequest_GetPos(r7))[2] - ((nG::Unk_02006d14 *)this)->unk_5c.z);
                if (d < 0x1000) {
                    s32 m = FX_Div(0x1000 - d, 0x1000) * 6;
                    *r4 = *r4 + (m >> 5);
                } else {
                    *r4 = r6;
                }
            } else {
                *r4 = r6;
            }
        }
    } else {
        _ZN12Unk_020102ec17moveWithCollisionEv(((nG::Unk_02006d14 *)this));
    }
}

void Unk_02006d14::walkToCheckEnd(s32 f) {
    using namespace nG;
    if (f) {
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x18)) {
            if (((nG::Unk_02006d14 *)this)->unk_700) {
                _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 0);
            }
            ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
            _ZN11PlayerActor11requestWaitEjjj(((nG::Unk_02006d14 *)this), 3, 1, -1);
            TalkRequest_FinishLeaveRoom();
            _ZN12Unk_02006d1415clearActionFlagEj(this, 5);
            _ZN12Unk_02006d1415clearActionFlagEj(this, 0x18);
            _ZN12Unk_02006d1415clearActionFlagEj(this, 3);
        } else {
            _ZN12Unk_02006d1412requestAct10Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
            _ZN12Unk_02006d1415clearActionFlagEj(this, 5);
        }
    }
}

void Unk_02006d14::mainWalkTo() {
    using namespace nG;
    s32 r = walkToUpdateSpeed();
    walkToUpdateAnim();
    walkToMove();
    _ZN12Unk_020102ec18updateBodyColliderEv(((nG::Unk_02006d14 *)this));
    walkToCheckEnd(r);
}

void Unk_02008fa0::setTurnToArgs(s16 v) {
    using namespace nG; unk_00 = v; }

BOOL Unk_02006d14::requestTurnTo(s16 v, u32 a, u32 b) {
    using namespace nG;
    Unk_02008f60_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x70, a, b);
    m.unk_0c.setTurnToArgs(v);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02008f5c::initTurnTo(s16 v) {
    using namespace nG; unk_00 = v; }

void Unk_02006d14::setupTurnTo(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    s16 *p = (s16 *)&((nG::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_02008f5c *s = (Unk_02008f5c *)&((nG::Unk_02006d14 *)this)->unk_7d0;
    if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x17)) {
        _ZN12Unk_020102ec9startAnimEijt(this, 1, 3, 0);
    }
    s->initTurnTo(*p);
    _ZN12Unk_02006d1413setActionFlagEj(this, 6);
}

void Unk_02006d14::netTurnTo() {
    using namespace nG;}

void Unk_02006d14::turnToUpdate() {
    using namespace nG;
    Unk_02006d14_7d0 *p = &((nG::Unk_02006d14 *)this)->unk_7d0;
    s16 t = ((nG::Unk_02006d14 *)this)->unk_8e;
    p->h2 = t;
    PlayerActor_TurnAngle(&t, p->unk_00);
    _ZN12Unk_020102ec9setAngleYEPs(((nG::Unk_02006d14 *)this), &t);
}

void Unk_02006d14::turnToCheckEnd() {
    using namespace nG;
    if (((nG::Unk_02006d14 *)this)->unk_7d0.unk_00 == ((nG::Unk_02006d14 *)this)->unk_8e) {
        _ZN12Unk_02006d1412requestAct10Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 6);
    }
}

void Unk_02006d14::mainTurnTo() {
    using namespace nG;
    turnToUpdate();
    _ZN12Unk_020102ec11advanceAnimEv(((nG::Unk_02006d14 *)this));
    _ZN12Unk_020102ec18updateBodyColliderEv(((nG::Unk_02006d14 *)this));
    turnToCheckEnd();
}

BOOL Unk_02006d14::requestAct76(u8 a, u8 b, u8 c, u32 d, s16 e) {
    using namespace nG;
    Unk_02008e50_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x76, d, e);
    Unk_02008e50_Pay *pp = &m.unk_0c;
    pp->set(a, b, c);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02008e48::writeAct76Net(u8 a, u8 b, u8 c) {
    using namespace nG;
    unk_00 = a;
    unk_01 = b;
    unk_02 = c;
}

void Unk_02008e48::readAct76Net(u8 *a, u8 *b, u8 *c) {
    using namespace nG;
    *a = unk_00;
    *b = unk_01;
    *c = unk_02;
}

BOOL Unk_02006d14::netAct76(s16 v) {
    using namespace nG;
    u8 a, b, c;
    ((nG::Unk_02006d14 *)this)->unk_8ec.readAct76Net(&a, &b, &c);
    return requestAct76(a, b, c, 6, v);
}

void Unk_02008040::mainAct76() {
    using namespace nF;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    Unk_02008074_Vec *pv = &unk_c4;
    volatile Unk_02008074_Vec v;
    v.unk_00 = pv->unk_00;
    v.unk_04 = pv->unk_04;
    v.unk_08 = pv->unk_08;
    s16 d = unk_d0;
    Unk_02008858_Blk blk1 = unk_294;
    Unk_02008858_Blk blk2 = unk_694;
    _ZN12Unk_02006d1411calcHandMtxEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act76Update();
    unk_c4.unk_00 = v.unk_00;
    unk_c4.unk_04 = v.unk_04;
    unk_c4.unk_08 = v.unk_08;
    unk_d0 = d;
    unk_294 = blk1;
    unk_694 = blk2;
}

BOOL Unk_02008040::requestAct77(s16 v, u32 a, u32 b) {
    using namespace nF;
    Unk_02008100_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x77, a, b);
    m.unk_0c = v;
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_020080e8::writeS16(s16 v) {
    using namespace nF;
    NetBuf_WriteS16B(this, v);
}

void Unk_020080e8::readS16(s16 *out) {
    using namespace nF;
    *out = NetBuf_ReadS16B(this);
}

void Unk_02008040::setupAct77(u8 *msg) {
    using namespace nF;
    s16 v = *(s16 *)(msg + 0xc);
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x70, 3, 0);
    Effect_Create(0x43, unk_6dc, 0, 0);
    _ZN12Unk_02006d146playSeEj(this, 0x86);
    *(s16 *)&unk_7d0[0] = v;
    unk_8ec.writeS16(v);
}

void Unk_02008040::netAct77(u32 b) {
    using namespace nF;
    s16 v;
    unk_8ec.readS16(&v);
    requestAct77(v, 6, b);
}

void Unk_02008040::act77Turn() {
    using namespace nF;
    s16 v = unk_8e;
    PlayerActor_ApproachAngle(&v, *(s16 *)&unk_7d0[0], 0x800, 0x1770000, 0xc0000);
    _ZN12Unk_020102ec9setAngleYEPs(this, &v);
}

void Unk_02008040::act77CheckEnd() {
    using namespace nF;
    if (_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc)) {
        unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
}

void Unk_02008040::mainAct77() {
    using namespace nF;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    act77Turn();
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act77CheckEnd();
}

BOOL Unk_02008040::requestAct79(u32 a, u32 b) {
    using namespace nF;
    Unk_02008404_Msg m;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x79, a, b);
    if (_ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m)) {
        _ZN12Unk_02006d1413setActionFlagEj(this, 8);
        _ZN19PlayerActionRequestD1Ev(&m);
        return TRUE;
    }
    _ZN19PlayerActionRequestD1Ev(&m);
    return FALSE;
}

void Unk_02008040::setupAct79() {
    using namespace nF;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x76, 3, 0);
    unk_7d0[0] = 0;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
        Bgm_RequestSilence(0xc, 0xf, 0);
    }
    _ZN12Unk_02006d146playSeEj(this, 0x83a);
}

BOOL Unk_02008040::netAct79(u32 b) {
    using namespace nF;
    return requestAct79(5, b);
}

void Unk_02008040::act79Update() {
    using namespace nF;
    u8 *st = &unk_7d0[0];
    if (unk_700 == 0x76) {
        if (_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc)) {
            _ZN12Unk_020102ec9startAnimEijt(this, 0x77, 0, 0);
            if (!_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
                *st = 3;
                unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
            }
        }
    } else {
        _ZN12Unk_02006d1412turnToCameraEi(this, 0x400);
        switch (*st) {
        case 0:
            if (TalkRequest_AddPlayerMessage()) {
                *st = 1;
                _ZN9Character17attachTalkRequestEi(this, this);
                _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
                setFileName(sPlayerActorMsgFile);
                unk_1e = 0x15;
                unk_128->unk_08 = 1;
                Camera_SetMode4();
            }
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    _ZN9Character17detachTalkRequestEi(this, this);
                    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                    TalkRequest_FinishPlayerMessage();
                    unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
                    _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
                    _ZN12Unk_02006d1415clearActionFlagEj(this, 8);
                    Camera_SetModeDefault();
                    Bgm_ReleasePriority(0xc);
                }
            }
            break;
        }
    }
}

void Unk_02008040::mainAct79() {
    using namespace nF;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    act79Update();
}

BOOL Unk_02008040::requestLidClosed(u32 a, u32 b) {
    using namespace nF;
    Unk_02008404_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x83, a, b);
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02008040::setupLidClosed(u32 a, u32 flag) {
    using namespace nF;
    u32 t = 0;
    if (flag) {
        t = 5;
    }
    _ZN12Unk_020102ec9startAnimEijt(this, 0x81, t, t);
}

BOOL Unk_02008040::netLidClosed(u32 b) {
    using namespace nF;
    return requestLidClosed(1, b);
}

void Unk_02008040::lidClosedUpdateAnim() {
    using namespace nF;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(unk_2cc, 1)) {
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
            SndMgr_PlaySe(gSndMgr, 0x79);
        } else {
            _ZN12Unk_02006d146playSeEj(this, 0x79);
        }
    }
}

void Unk_02008040::lidClosedCheckOpen() {
    using namespace nF;
    if (((*(vu16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
}

void Unk_02008040::mainLidClosed() {
    using namespace nF;
    lidClosedUpdateAnim();
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
        lidClosedCheckOpen();
    } else {
        _ZN12Unk_02006d1418netFollowTransformEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
    }
}

BOOL Unk_02008040::requestErrorMessage(u8 v, u32 a, u32 b) {
    using namespace nF;
    Unk_020082e4_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x84, a, b);
    m.unk_0c = v;
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_02008040::setupErrorMessage(u8 *msg) {
    using namespace nF;
    u8 *p = &unk_7d0[0];
    p[0] = msg[0xc];
    p[1] = 0;
    _ZN12Unk_020102ec9startAnimEijt(this, 0, 3, 3);
}

BOOL Unk_02008040::netErrorMessage(u32 b) {
    using namespace nF;
    return requestErrorMessage(0, 6, b);
}

void Unk_02008040::func_020082a8() {
    using namespace nF;}

void Unk_02008040::errorMessageUpdate() {
    using namespace nF;
    u8 *st;
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
        st = &unk_7d0[1];
        switch (*st) {
        case 0:
            if (TalkRequest_AddPlayerMessage()) {
                *st = 1;
                _ZN9Character17attachTalkRequestEi(this, this);
                _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
                setFileName(sPlayerActorErrorMsgFile);
                unk_1e = 0x1e;
                unk_128->unk_08 = 1;
                LowBattery_SetWarned();
            } else {
                unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
                _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
            }
            break;
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    _ZN9Character17detachTalkRequestEi(this, this);
                    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                    TalkRequest_FinishPlayerMessage();
                    unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
                    _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
                }
            }
            break;
        }
    } else {
        unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
    }
}

void Unk_02008040::mainErrorMessage() {
    using namespace nF;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
    } else {
        _ZN12Unk_02006d1418netFollowTransformEv(this);
        _ZN12Unk_020102ec18updateBodyColliderEv(this);
    }
    errorMessageUpdate();
}

BOOL Unk_02008040::requestHoldUpItem(u16 *v, u32 a, u32 b) {
    using namespace nF;
    Unk_02008100_Msg m;
    BOOL r;
    _ZN19PlayerActionRequestC1Ev(&m);
    _ZN19PlayerActionRequest6assignEiis(&m, 0x85, a, b);
    unk_81e = *v;
    unk_81c = unk_81e;
    r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    _ZN19PlayerActionRequestD1Ev(&m);
    return r;
}

void Unk_020080e8::writeU16(u16 v) {
    using namespace nF;
    NetBuf_WriteU16(this, v);
}

void Unk_020080e8::readU16(u16 *out) {
    using namespace nF;
    *out = NetBuf_ReadU16(this);
}

void Unk_02008040::setupHoldUpItem() {
    using namespace nF;
    s32 t;
    unk_8ec.writeU16(unk_81c);
    Unk_02008074_Vec v;
    PlayerActor_CalcHeldUpItemPos(&v, this, 0);
    unk_820 = v.unk_00;
    unk_824 = v.unk_04;
    unk_828 = v.unk_08;
    t = 0x1000;
    unk_82c = t;
    unk_830 = t;
    unk_834 = t;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x7e, 3, 0);
}

void Unk_02008040::netHoldUpItem(void *arg) {
    using namespace nF;
    u16 a, b;
    unk_8ec.readU16(&a);
    b = a;
    requestHoldUpItem(&b, 6, (u32)arg);
}

void Unk_02007694::holdUpItemUpdate() {
    using namespace nE;
    Unk_02007ebc_Vec v;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    s32 n = ((u32)((nE::Unk_02007694 *)this)->unk_2d4 << 4) >> 16;
    s32 t = 0x1000;
    if (((nE::Unk_02007694 *)this)->unk_700 == 0x7e) {
        if (n == 10) {
            _ZN12Unk_02006d1413setActionFlagEj(this, 0xd);
        }
    } else {
        s32 c = ((nE::Unk_02007694 *)this)->unk_82c;
        if (n >= 9) {
            t = c - 0x155;
            if (t < 0) {
                t = 0;
            }
        }
    }
    ((nE::Unk_02007694 *)this)->unk_82c = t;
    ((nE::Unk_02007694 *)this)->unk_830 = t;
    ((nE::Unk_02007694 *)this)->unk_834 = t;
    PlayerActor_CalcHeldUpItemPos(&v, ((nE::Unk_02007694 *)this), n);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_828, v.z, 0x800, 0x2000, 0x333);
}

namespace nE {
extern "C" void PlayerActor_CalcHeldUpItemPos(Unk_02007ebc_Vec *out, Unk_02007694 *obj, s32 n) {
    Unk_02007ebc_Mtx m = obj->unk_694;
    s32 tx = m.m[9];
    s32 ty = m.m[10];
    s32 tz = m.m[11];
    m.m[11] = 0;
    m.m[10] = 0;
    m.m[9] = 0;
    Unk_02007ebc_Mtx m2 = m;
    Unk_02007ebc_Vec in;
    Unk_02007ebc_Vec res;
    in.x = 0x320;
    in.z = 0;
    if (obj->unk_700 == 0x7e) {
        if (n <= 10) {
            in.y = 0;
        } else {
            in.y = -0xa00;
        }
    } else {
        in.y = -((0xa000 - FX_Div(n * 0x5000, 0x15000)) >> 4);
    }
    MTX_MultVec43(&in, &m2, &res);
    tx += res.x;
    ty += res.y;
    tz += res.z;
    Unk_02007ebc_Vec fin = {tx, ty, tz};
    WorldCurve_FromCurved(out, &fin);
}
}

void Unk_02007694::holdUpItemCheckEnd() {
    using namespace nE;
    if (_ZN12Unk_02006d1412turnToCameraEi(this, 0x800)) {
        if (_ZN13AnimFrameCtrl10isFinishedEv(((nE::Unk_02007694 *)this)->unk_2cc)) {
            if (((nE::Unk_02007694 *)this)->unk_700 == 0x7e) {
                _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x7f, 0, 0);
                _ZN12Unk_02006d146playSeEj(this, 0x6e);
            } else {
                requestLowerHeldUpItem(6, -1);
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
            }
        }
    }
}

void Unk_02007694::mainHoldUpItem() {
    using namespace nE;
    holdUpItemUpdate();
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    holdUpItemCheckEnd();
}

u32 Unk_02007694::requestLowerHeldUpItem(u32 a, u32 b) {
    using namespace nE;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x86, a, b);
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void Unk_02007694::setupLowerHeldUpItem() {
    using namespace nE;
    _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x80, 3, 0);
}

void Unk_02007694::netLowerHeldUpItem(u32 a) {
    using namespace nE;
    if (((nE::Unk_02007694 *)this)->unk_7ec == 0x85) {
    } else if (((nE::Unk_02007694 *)this)->unk_7ec == 0x86) {
        ((nE::Unk_02007694 *)this)->unk_c80 = a;
    } else {
        requestLowerHeldUpItem(6, a);
    }
}

void Unk_02007694::lowerHeldUpItemCheckEnd() {
    using namespace nE;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((nE::Unk_02007694 *)this)->unk_2cc)) {
        ((nE::Unk_02007694 *)this)->unk_7f8 = getActionDonePriority(((nE::Unk_02007694 *)this)->unk_7ec);
        _ZN12Unk_0200769412requestAct05Etjj(this, 3, 5, -1);
    }
}

void Unk_02007694::mainLowerHeldUpItem() {
    using namespace nE;
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    lowerHeldUpItemCheckEnd();
}

u32 Unk_02007694::requestWaitMenu(u32 a, u32 b, u32 c) {
    using namespace nE;
    PlayerActionRequest m;
    _ZN19PlayerActionRequest6assignEiis(&m, 0x90, b, c);
    m.unk_0c_h = a;
    u32 r = _ZN11PlayerActor11pushRequestEP19PlayerActionRequest(this, &m);
    return r;
}

void Unk_02007694::setupWaitMenu(PlayerActionRequest *p) {
    using namespace nE;
    u16 v = p->unk_0c_h;
    _ZN12Unk_020102ec9startAnimEijt(this, 0, v, v);
    _ZN12Unk_02006d1417resetHeldToolAnimEv(this);
}

void Unk_02007694::netWaitMenu(u32 a) {
    using namespace nE;
    _ZN11PlayerActor11requestWaitEjjj(this, 3, 5, a);
}

void Unk_02007694::waitMenuCheckEnd() {
    using namespace nE;
    if (MenuCtrl_IsFinished()) {
        TalkRequest_FinishPlayerMessage();
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
    }
}

void Unk_02007694::mainWaitMenu() {
    using namespace nE;
    _ZN12Unk_020102ec17moveWithCollisionEv(this);
    _ZN12Unk_020102ec11advanceAnimEv(this);
    _ZN12Unk_020102ec18updateBodyColliderEv(this);
    _ZN12Unk_020102ec19submitSceneColliderEv(this);
    waitMenuCheckEnd();
}

void Unk_02007694::setupAct91() {
    using namespace nE;}

void Unk_02007694::netAct91() {
    using namespace nE;}

void Unk_02007694::endAct91() {
    using namespace nE;}

void Unk_02007694::mainAct91() {
    using namespace nE;}

void Unk_02007694::setupAct92() {
    using namespace nE;}

void Unk_02007694::netAct92() {
    using namespace nE;}

void Unk_02007694::mainAct92() {
    using namespace nE;}

void Unk_02007694::calcModelMatrixCurved() {
    using namespace nE;
    Unk_02007c5c_Mtx m;
    ((nE::Unk_02007694 *)this)->unk_d0 = WorldCurve_ToCurved(((nE::Unk_02007694 *)this)->unk_c4, ((nE::Unk_02007694 *)this)->unk_5c);
    _ZN5Actor15calcModelMatrixEPv(this, &m);
    ((nE::Unk_02007694 *)this)->unk_294 = m;
}

u8 Unk_02007694::keepsBgCheckWork(u32 a) {
    using namespace nE;
    return sPlayerActionKeepsBgCheckWork[a];
}

void Unk_02007694::updateBgCheckWork(u32 a, u32 b) {
    using namespace nE;
    u8 r = keepsBgCheckWork(a);
    if (r) {
        keepsBgCheckWork(b);
        if (!r) {
            _ZN14CollisionState9beginStepEv(((nE::Unk_02007694 *)this)->unk_7a0);
        }
    }
}

u8 Unk_02007694::getActionPriority(u32 a) {
    using namespace nE;
    return sPlayerActionPriority[a];
}

u8 Unk_02007694::getActionDonePriority(u32 a) {
    using namespace nE;
    return sPlayerActionDonePriority[a];
}

void Unk_02007694::endAction(u32 a) {
    using namespace nE;
    static void (nE::Unk_02007694::*tbl[147])(u32) = {
        data_020d6da4.fn, data_020d6dac.fn, data_020d6d84.fn, 0, data_020d6d7c.fn, 0,
        data_020d6d74.fn, data_020d6d6c.fn, data_020d6d64.fn, 0, data_020d6d5c.fn, 0,
        0, data_020d6d54.fn, data_020d6d4c.fn, data_020d6d44.fn, 0, 0,
        0, 0, data_020d6d3c.fn, 0, 0, data_020d6d34.fn,
        0, data_020d6d2c.fn, data_020d6d24.fn, 0, 0, data_020d6d1c.fn,
        0, 0, 0, 0, data_020d6d14.fn, data_020d6d0c.fn,
        data_020d6d04.fn, data_020d6cfc.fn, data_020d6cf4.fn, data_020d6cec.fn, data_020d6ce4.fn, data_020d6cdc.fn,
        data_020d6cd4.fn, 0, data_020d6ccc.fn, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        data_020d6cc4.fn, data_020d6cbc.fn, 0, data_020d6cb4.fn, 0, 0,
        0, 0, 0, data_020d6cac.fn, 0, 0,
        0, data_020d6ca4.fn, data_020d6c9c.fn, data_020d6c94.fn, data_020d6c8c.fn, 0,
        0, data_020d6c84.fn, 0, 0, 0, 0,
        0, 0, 0, data_020d6c7c.fn, data_020d6c74.fn, 0,
        0, 0, 0, data_020d6c6c.fn, data_020d6c64.fn, data_020d6c5c.fn,
        0, 0, data_020d6c54.fn, data_020d6c4c.fn, 0, 0,
        data_020d6c44.fn, 0, data_020d6c3c.fn, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, data_020d6c34.fn, data_020d6c2c.fn, 0, 0, 0,
        0, 0, 0, 0, data_020d6c24.fn, 0,
        0, 0, data_020d6c1c.fn, data_020d6c14.fn, data_020d6c0c.fn, 0,
        0, 0, 0, data_020d6c04.fn, data_020d6bfc.fn, 0,
        0, 0, 0, 0, 0, 0,
        0, data_020d6bf4.fn, 0,
    };
    void (nE::Unk_02007694::*fn)(u32) = tbl[((nE::Unk_02007694 *)this)->unk_7ec];
    if (fn) {
        (((nE::Unk_02007694 *)this)->*fn)(a);
    }
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1c);
}

void Unk_02007694::clearActionWork() {
    using namespace nE;
    MI_CpuFill8(((nE::Unk_02007694 *)this)->unk_7d0 + 0, 0, 0x1c);
}

void Unk_02007694::stopMovementForAction(u32 a) {
    using namespace nE;
    if (sPlayerActionStopsMovement[a]) {
        ((nE::Unk_02007694 *)this)->unk_98 = 0;
        u32 t = ((nE::Unk_02007694 *)this)->unk_a8;
        ((nE::Unk_02007694 *)this)->unk_a4 = 0;
        ((nE::Unk_02007694 *)this)->unk_a8 = t;
        ((nE::Unk_02007694 *)this)->unk_ac = 0;
    }
}

void Unk_02007694::resetRotXForAction(u32 a) {
    using namespace nE;
    if (sPlayerActionResetsRotX[a]) {
        _ZN12Unk_020102ec7setRotXEt(((nE::Unk_02007694 *)this), 0);
    }
}

void Unk_02006d14::changeAction(Unk_02006d14_Item* item) {
    using namespace nD;
    static Unk_02006d14_Fn table[] = {
        data_020d6bcc.fn, data_020d6bc4.fn, data_020d6bbc.fn, data_020d6bb4.fn, data_020d6bac.fn, data_020d6ba4.fn,
        data_020d6b9c.fn, data_020d648c.fn, data_020d610c.fn, data_020d6b84.fn, data_020d6b7c.fn, data_020d6b74.fn,
        data_020d6b6c.fn, data_020d6b64.fn, data_020d6b5c.fn, data_020d6b54.fn, data_020d6b4c.fn, data_020d6b44.fn,
        data_020d6b3c.fn, data_020d6b34.fn, data_020d6b2c.fn, data_020d6b24.fn, data_020d6b1c.fn, data_020d6b14.fn,
        data_020d6b0c.fn, data_020d6b04.fn, data_020d6afc.fn, data_020d6af4.fn, data_020d6aec.fn, data_020d6ae4.fn,
        data_020d6adc.fn, data_020d6ad4.fn, data_020d6acc.fn, data_020d6ac4.fn, data_020d6abc.fn, data_020d6ab4.fn,
        data_020d6aac.fn, data_020d6aa4.fn, data_020d6a9c.fn, data_020d6a94.fn, data_020d6a8c.fn, data_020d6a84.fn,
        data_020d6a7c.fn, data_020d6a74.fn, data_020d6a6c.fn, data_020d6a64.fn, data_020d6a5c.fn, data_020d6a54.fn,
        data_020d6a4c.fn, data_020d6a44.fn, data_020d6a3c.fn, data_020d6a34.fn, data_020d6a2c.fn, data_020d6a24.fn,
        data_020d6a1c.fn, data_020d6a14.fn, data_020d6a0c.fn, data_020d6a04.fn, data_020d69fc.fn, data_020d69f4.fn,
        data_020d69ec.fn, data_020d69e4.fn, data_020d69dc.fn, data_020d69d4.fn, data_020d69cc.fn, data_020d69c4.fn,
        data_020d69bc.fn, data_020d69b4.fn, data_020d69ac.fn, data_020d69a4.fn, data_020d699c.fn, data_020d638c.fn,
        data_020d608c.fn, data_020d6984.fn, data_020d697c.fn, data_020d6974.fn, data_020d696c.fn, data_020d6964.fn,
        data_020d695c.fn, data_020d6954.fn, data_020d694c.fn, data_020d6944.fn, data_020d693c.fn, data_020d6934.fn,
        data_020d692c.fn, data_020d6924.fn, data_020d691c.fn, data_020d6914.fn, data_020d690c.fn, data_020d6904.fn,
        data_020d68fc.fn, data_020d68f4.fn, data_020d68ec.fn, data_020d68e4.fn, data_020d68dc.fn, data_020d68d4.fn,
        data_020d68cc.fn, data_020d68c4.fn, data_020d68bc.fn, data_020d68b4.fn, data_020d68ac.fn, data_020d68a4.fn,
        data_020d689c.fn, data_020d6894.fn, data_020d688c.fn, data_020d6884.fn, data_020d687c.fn, data_020d6874.fn,
        data_020d686c.fn, data_020d6864.fn, data_020d685c.fn, data_020d6854.fn, data_020d684c.fn, data_020d6844.fn,
        data_020d683c.fn, data_020d6834.fn, data_020d682c.fn, data_020d6824.fn, data_020d681c.fn, data_020d6814.fn,
        data_020d680c.fn, data_020d6804.fn, data_020d67fc.fn, data_020d67f4.fn, data_020d67ec.fn, data_020d67e4.fn,
        data_020d67dc.fn, data_020d67d4.fn, data_020d67cc.fn, data_020d67c4.fn, data_020d67bc.fn, data_020d67b4.fn,
        data_020d67ac.fn, data_020d67a4.fn, data_020d679c.fn, data_020d6794.fn, data_020d678c.fn, data_020d6784.fn,
        data_020d677c.fn, data_020d6774.fn, data_020d627c.fn, data_020d6764.fn, data_020d675c.fn, data_020d626c.fn,
        data_020d5ffc.fn, data_020d6744.fn, data_020d673c.fn,
    };
    u32 id = ((nD::Unk_02006d14_Item *)item)->unk_00;
    s16 v = ((nD::Unk_02006d14_Item *)item)->unk_08;
    Unk_02006d14_Fn fn = table[id];
    u32 old = ((nD::Unk_02006d14 *)this)->unk_7f0;
    _ZN12Unk_020076949endActionEj(this, id);
    _ZN12Unk_0200769415clearActionWorkEv(this);
    ((nD::Unk_02006d14 *)this)->unk_7ec = id;
    _ZN12Unk_0200769421stopMovementForActionEj(this, id);
    _ZN12Unk_0200769417updateBgCheckWorkEjj(this, id, old);
    _ZN12Unk_0200769418resetRotXForActionEj(this, id);
    _ZN12Unk_020102ec15setBodyColliderEPj(this, &id);
    _ZN12Unk_02005e7c13func_02005e7cEj(this, id);
    Unk_02006d14_Data* p = gCommManager;
    if (_ZN11CommManager12isSlotActiveEi(p, p->unk_64)) {
        if (!_ZN11CommManager11isLocalSlotEj(p, ((nD::Unk_02006d14 *)this)->unk_7fc)) {
            if (v >= 0) { ((nD::Unk_02006d14 *)this)->unk_c80 = v; ((nD::Unk_02006d14 *)this)->unk_c84 = id; }
        } else {
            ((nD::Unk_02006d14 *)this)->unk_c80 = _ZN11CommManager10getSendSeqEv(p);
        }
    }
    (((nD::Unk_02006d14 *)this)->*fn)(((nD::Unk_02006d14_Item *)item), old);
    ((nD::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769417getActionPriorityEj(this, id);
    if (!_ZN11CommManager11isLocalSlotEj(p, ((nD::Unk_02006d14 *)this)->unk_7fc) && data_020c6a18[id] != 0) _ZN12Unk_02006d1413setActionFlagEj(this, 0x12);
    else _ZN12Unk_02006d1415clearActionFlagEj(this, 0x12);
}

void Unk_02005e7c::followNetAction() {
    using namespace nC;
    s32 st;
    if (!PlayerActor_GetSlotAction(&st, -1, unk_7fc)) {
        unk_8f4 = 0x93;
        return;
    }
    if (st >= 0x93) {
        unk_8f4 = 0x93;
        return;
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x12) != 0) {
        if (st != 0x1a) {
            return;
        }
        if (unk_7ec != 0x19) {
            return;
        }
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x12);
    }
    unk_8f4 = st;
    u8 *r = PlayerActor_GetNetStateVar(unk_7fc);
    if (r != NULL) {
        MI_CpuCopy8(r + 4, unk_8ec, 8);
    }
    s32 a = _ZN11PlayerActor18isLocomotionActionEj(this, unk_7ec);
    s32 b = _ZN11PlayerActor18isLocomotionActionEj(this, st);
    if (a == 1 && b == 1) {
        return;
    }
    if (b == 1) {
        st = 2;
    }
    s32 idx = -1;
    r = PlayerActor_GetNetStateVar(unk_7fc);
    if (r != NULL) {
        idx = NetBuf_ReadS16(r + 2);
    }
    s32 c = unk_c80;
    if (c >= 0 && unk_c84 == st && idx == c) {
        return;
    }
    static void (Unk_02005e7c::*tbl[147])(s32) = {
        data_020d671c.fn, data_020d624c.fn, data_020d5fcc.fn, data_020d6704.fn, data_020d66fc.fn, data_020d66f4.fn,
        data_020d66ec.fn, data_020d66e4.fn, data_020d66dc.fn, data_020d66d4.fn, data_020d66cc.fn, data_020d66c4.fn,
        data_020d66bc.fn, data_020d66b4.fn, data_020d66ac.fn, data_020d66a4.fn, data_020d669c.fn, data_020d6694.fn,
        data_020d620c.fn, data_020d6684.fn, data_020d667c.fn, data_020d6674.fn, data_020d666c.fn, data_020d6664.fn,
        data_020d665c.fn, data_020d6654.fn, data_020d664c.fn, data_020d6644.fn, data_020d663c.fn, data_020d6634.fn,
        data_020d662c.fn, data_020d6624.fn, data_020d661c.fn, data_020d6614.fn, data_020d5f54.fn, data_020d5e6c.fn,
        data_020d6be4.fn, data_020d65b4.fn, data_020d65cc.fn, data_020d65d4.fn, data_020d65dc.fn, data_020d65ec.fn,
        data_020d65fc.fn, data_020d670c.fn, data_020d6714.fn, data_020d674c.fn, data_020d6754.fn, data_020d6dbc.fn,
        data_020d6b8c.fn, data_020d6d94.fn, data_020d6dc4.fn, data_020d6584.fn, data_020d657c.fn, data_020d6574.fn,
        data_020d656c.fn, data_020d6564.fn, data_020d655c.fn, data_020d6554.fn, data_020d654c.fn, data_020d6544.fn,
        data_020d653c.fn, data_020d6534.fn, data_020d652c.fn, data_020d6524.fn, data_020d651c.fn, data_020d6514.fn,
        data_020d650c.fn, data_020d6504.fn, data_020d64fc.fn, data_020d64f4.fn, data_020d64ec.fn, data_020d64e4.fn,
        data_020d64dc.fn, data_020d64d4.fn, data_020d64cc.fn, data_020d64c4.fn, data_020d6bec.fn, data_020d6bdc.fn,
        data_020d6bd4.fn, data_020d64a4.fn, data_020d649c.fn, data_020d6494.fn, data_020d5f4c.fn, data_020d6484.fn,
        data_020d647c.fn, data_020d6474.fn, data_020d646c.fn, data_020d6464.fn, data_020d645c.fn, data_020d6454.fn,
        data_020d644c.fn, data_020d6444.fn, data_020d643c.fn, data_020d6434.fn, data_020d642c.fn, data_020d6424.fn,
        data_020d641c.fn, data_020d6414.fn, data_020d640c.fn, data_020d6404.fn, data_020d63fc.fn, data_020d63f4.fn,
        data_020d63ec.fn, data_020d63e4.fn, data_020d63dc.fn, data_020d63d4.fn, data_020d63cc.fn, data_020d63c4.fn,
        data_020d63bc.fn, data_020d63b4.fn, data_020d63ac.fn, data_020d63a4.fn, data_020d639c.fn, data_020d6394.fn,
        data_020d5f0c.fn, data_020d6384.fn, data_020d637c.fn, data_020d6374.fn, data_020d636c.fn, data_020d6364.fn,
        data_020d635c.fn, data_020d6354.fn, data_020d634c.fn, data_020d6344.fn, data_020d633c.fn, data_020d6334.fn,
        data_020d632c.fn, data_020d6324.fn, data_020d631c.fn, data_020d6314.fn, data_020d630c.fn, data_020d6304.fn,
        data_020d62fc.fn, data_020d62f4.fn, data_020d62ec.fn, data_020d62e4.fn, data_020d62dc.fn, data_020d62d4.fn,
        data_020d62cc.fn, data_020d62c4.fn, data_020d62bc.fn, data_020d62b4.fn, data_020d62ac.fn, data_020d62a4.fn,
        data_020d629c.fn, data_020d6294.fn, data_020d628c.fn,
    };
    (this->*tbl[st])(idx);
}

void Unk_02005e7c::processRequests() {
    using namespace nC;
    handleNetEvent();
    s32 i;
    s32 *p;
    for (i = 0; i < 30; i++) {
        p = (s32 *)_ZN11PlayerActor10getRequestEi(this, i);
        if (p == NULL) {
            break;
        }
        if (p[1] > unk_7f8) {
            _ZN12Unk_02006d1412changeActionEP17Unk_02006d14_Item(this, p);
        }
    }
    _ZN11PlayerActor13clearRequestsEv(this);
    _ZN12Unk_02006d1415clearActionFlagEj(this, 0x17);
}

namespace nC {
extern "C" void PlayerActor_LevelTiltForAction(void *p, u32 i, s32 force) {
    u32 v;
    if (force != 0) {
        v = 1;
    } else {
        v = sPlayerActionLevelsTilt[i];
    }
    if (v != 0) {
        _ZN12Unk_020102ec12approachRotXEv(p, 0);
    }
}
}

void Unk_02005e7c::syncInputMode(u32 i) {
    using namespace nC;
    if (data_020c6434[i] != 0) {
        switch (unk_16c) {
        case 1:
            InputMode_SetButtons();
            break;
        case 2:
            InputMode_SetTouch();
            break;
        default:
            InputMode_Clear();
            break;
        }
    } else {
        _ZN12Unk_02006d1413loadInputModeEv();
    }
}

void Unk_02005e7c::func_02005e7c(u32 i) {
    using namespace nC;
    if (data_020c64c8[i] == 0) {
        unk_6ec = 0;
    } else {
        unk_6ec = 0xb33;
    }
}

void PlayerActor::doExecute() {
    using namespace nB;
    Unk_02005294_Vec3 v;
    u32 flags = ((nB::PlayerActor *)this)->unk_b0;
    BOOL f4 = (flags & 4) != 0;
    if (f4) {
        BOOL f2 = (flags & 2) != 0;
        if (f2) {
            Unk_02005294_Vec3 *p = &((nB::PlayerActor *)this)->unk_5c;
            v = *p;
            ((nB::PlayerActor *)this)->unk_6c4 = ((nB::PlayerActor *)this)->unk_6d0 = ((nB::PlayerActor *)this)->unk_6dc = ((nB::PlayerActor *)this)->unk_6f0 = *p;
            WorldCurve_ToCurved(&v, &v);
            ((nB::PlayerActor *)this)->unk_664.unk_24 = ((nB::PlayerActor *)this)->unk_694.unk_24 = ((nB::PlayerActor *)this)->unk_604.unk_24 = ((nB::PlayerActor *)this)->unk_634.unk_24 = v.x;
            ((nB::PlayerActor *)this)->unk_664.unk_28 = ((nB::PlayerActor *)this)->unk_694.unk_28 = ((nB::PlayerActor *)this)->unk_604.unk_28 = ((nB::PlayerActor *)this)->unk_634.unk_28 = v.y;
            ((nB::PlayerActor *)this)->unk_664.unk_2c = ((nB::PlayerActor *)this)->unk_694.unk_2c = ((nB::PlayerActor *)this)->unk_604.unk_2c = ((nB::PlayerActor *)this)->unk_634.unk_2c = v.z;
        }
    }
    _ZN12Unk_02006d1416pollFaceItemLoadEv(this);
    _ZN12Unk_02006d1411pollHatLoadEv(this);
    void *game = gCommManager;
    if (_ZN11CommManager11isLocalSlotEj(game, ((nB::PlayerActor *)this)->unk_7fc)) {
        _ZN11PlayerActor9readInputEv(this);
        if (!_ZN11PlayerActor17getInputMagnitudeEv(this)) {
            ((nB::PlayerActor *)this)->unk_8e6 = 0;
        }
    } else if (!_ZN12Unk_02006d1414testActionFlagEj(this, 0x10)) {
        _ZN12Unk_02005e7c15followNetActionEv(this);
    }
    _ZN12Unk_02005e7c15processRequestsEv(this);
    HeldItemModel_Update(((nB::PlayerActor *)this)->unk_59c);
    ((nB::PlayerActor *)this)->unk_8c0 = 0;
    ((nB::PlayerActor *)this)->unk_8c4 = 0;
    ((nB::PlayerActor *)this)->unk_8c8 = 0;
    static void (nB::PlayerActor::*tbl[147])() = {
        data_020d6734.fn, data_020d6724.fn, data_020d5fd4.fn, data_020d6244.fn, data_020d623c.fn, data_020d6234.fn,
        data_020d622c.fn, data_020d6224.fn, data_020d621c.fn, data_020d6214.fn, data_020d619c.fn, data_020d6204.fn,
        data_020d61fc.fn, data_020d61f4.fn, data_020d61c4.fn, data_020d61dc.fn, data_020d61e4.fn, data_020d658c.fn,
        data_020d6b94.fn, data_020d6604.fn, data_020d65bc.fn, data_020d65e4.fn, data_020d660c.fn, data_020d672c.fn,
        data_020d676c.fn, data_020d6db4.fn, data_020d6d8c.fn, data_020d6184.fn, data_020d617c.fn, data_020d6174.fn,
        data_020d616c.fn, data_020d6164.fn, data_020d615c.fn, data_020d6154.fn, data_020d614c.fn, data_020d6144.fn,
        data_020d613c.fn, data_020d6134.fn, data_020d612c.fn, data_020d64bc.fn, data_020d64ac.fn, data_020d6114.fn,
        data_020d5e5c.fn, data_020d6104.fn, data_020d60fc.fn, data_020d60f4.fn, data_020d60ec.fn, data_020d60e4.fn,
        data_020d60dc.fn, data_020d60d4.fn, data_020d60cc.fn, data_020d60c4.fn, data_020d60bc.fn, data_020d60b4.fn,
        data_020d60ac.fn, data_020d60a4.fn, data_020d609c.fn, data_020d6094.fn, data_020d5eac.fn, data_020d6084.fn,
        data_020d607c.fn, data_020d6074.fn, data_020d606c.fn, data_020d6064.fn, data_020d605c.fn, data_020d6054.fn,
        data_020d604c.fn, data_020d6044.fn, data_020d603c.fn, data_020d6034.fn, data_020d602c.fn, data_020d6024.fn,
        data_020d601c.fn, data_020d6014.fn, data_020d600c.fn, data_020d6284.fn, data_020d5fc4.fn, data_020d625c.fn,
        data_020d6254.fn, data_020d5fe4.fn, data_020d5fec.fn, data_020d6194.fn, data_020d61a4.fn, data_020d61bc.fn,
        data_020d61cc.fn, data_020d61ec.fn, data_020d6594.fn, data_020d65f4.fn, data_020d668c.fn, data_020d698c.fn,
        data_020d6d9c.fn, data_020d5f84.fn, data_020d5f7c.fn, data_020d5f74.fn, data_020d5f6c.fn, data_020d5f64.fn,
        data_020d5f5c.fn, data_020d6124.fn, data_020d5e64.fn, data_020d5f44.fn, data_020d5f3c.fn, data_020d5f34.fn,
        data_020d5f2c.fn, data_020d5f24.fn, data_020d5f1c.fn, data_020d5f14.fn, data_020d5eb4.fn, data_020d5f04.fn,
        data_020d5efc.fn, data_020d5ef4.fn, data_020d5ed4.fn, data_020d5eec.fn, data_020d5f8c.fn, data_020d5f9c.fn,
        data_020d5fa4.fn, data_020d6004.fn, data_020d6264.fn, data_020d618c.fn, data_020d61ac.fn, data_020d61d4.fn,
        data_020d659c.fn, data_020d65c4.fn, data_020d6dcc.fn, data_020d5e84.fn, data_020d5e7c.fn, data_020d5e74.fn,
        data_020d64b4.fn, data_020d5e8c.fn, data_020d5e94.fn, data_020d5ea4.fn, data_020d5ebc.fn, data_020d5ecc.fn,
        data_020d5edc.fn, data_020d5f94.fn, data_020d5fac.fn, data_020d5fdc.fn, data_020d61b4.fn, data_020d65a4.fn,
        data_020d6994.fn, data_020d5e54.fn, data_020d611c.fn, data_020d5e9c.fn, data_020d5ec4.fn, data_020d5ee4.fn,
        data_020d5fb4.fn, data_020d6274.fn, data_020d65ac.fn,
    };
    void (nB::PlayerActor::*fn)() = tbl[((nB::PlayerActor *)this)->unk_7ec];
    _ZN12Unk_020102ec15updateFaceAnimsEv(this);
    (((nB::PlayerActor *)this)->*fn)();
    PlayerActor_CheckSceneExit(((nB::PlayerActor *)this)->unk_7fc);
    s32 state = ((nB::PlayerActor *)this)->unk_7ec;
    PlayerActor_LevelTiltForAction(this, state, 0);
    if (_ZN11CommManager11isLocalSlotEj(game, ((nB::PlayerActor *)this)->unk_7fc)) {
        _ZN12Unk_02005e7c13syncInputModeEj(this, state);
    }
    _ZN12Unk_0200769421calcModelMatrixCurvedEv(this);
    _ZN12Unk_02006d1419applyFaceItemChangeEv(this);
    _ZN12Unk_02006d1414applyHatChangeEv(this);
    if (_ZN11CommManager11isLocalSlotEj(game, ((nB::PlayerActor *)this)->unk_7fc)) {
        BOOL z = (gFieldSceneKind == 0);
        if (z) {
            PlayerActor_FieldCheckUnitAhead(((nB::PlayerActor *)this));
            PlayerActor_FieldRunStep(((nB::PlayerActor *)this));
            PlayerActor_FieldCheckStepUnit(((nB::PlayerActor *)this));
            PlayerActor_FieldUpdateTan(((nB::PlayerActor *)this));
        }
        if (((nB::PlayerActor *)this)->unk_8e4 != 0) {
            ((nB::PlayerActor *)this)->unk_8e4--;
        }
    }
    if (((nB::PlayerActor *)this)->unk_8e8 != 0) {
        ((nB::PlayerActor *)this)->unk_8e8--;
    }
    _ZN12Unk_02006d1414pollStoreQueryEv(this);
    ((nB::PlayerActor *)this)->unk_814 = _ZN12Unk_02006d1414pollFieldQueryEv(this);
    if (_ZN11CommManager11isLocalSlotEj(game, ((nB::PlayerActor *)this)->unk_7fc)) {
        BOOL z = (gFieldSceneKind == 0);
        if (z) {
            PlayerActor_FieldPollPitfall(((nB::PlayerActor *)this));
        }
    }
    _ZN12Unk_02006d1414updateHeadLookEv(this);
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xa)) {
        if (((nB::PlayerActor *)this)->unk_8c0 == 0 && ((nB::PlayerActor *)this)->unk_8c4 == 0 && ((nB::PlayerActor *)this)->unk_8c8 == 0) {
            ((nB::PlayerActor *)this)->unk_8c0 = ((nB::PlayerActor *)this)->unk_5c.x;
            ((nB::PlayerActor *)this)->unk_8c4 = ((nB::PlayerActor *)this)->unk_5c.y;
            ((nB::PlayerActor *)this)->unk_8c8 = ((nB::PlayerActor *)this)->unk_5c.z;
        }
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x19)) {
            _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(((nB::PlayerActor *)this)->unk_838, &((nB::PlayerActor *)this)->unk_8c0);
        } else {
            _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(((nB::PlayerActor *)this)->unk_87c, &((nB::PlayerActor *)this)->unk_8c0);
        }
    }
    if (((nB::PlayerActor *)this)->unk_7f0 != ((nB::PlayerActor *)this)->unk_7ec) {
        ((nB::PlayerActor *)this)->unk_7f0 = ((nB::PlayerActor *)this)->unk_7ec;
    }
}

namespace nB {
extern "C" void PlayerActor_JointCbPre(Unk_020050e0 *p) {
    PlayerActor *obj = p->unk_04->unk_2c;
    if (obj) {
        _ZN17TwoLayerAnimModel20onJointCalcPreLayer2EP16Unk_02053a54_Msg(obj->unk_230, p);
    }
    p->unk_24 = PlayerActor_JointCbPost;
    p->unk_92 = 2;
}
}

namespace nB {
extern "C" void PlayerActor_JointCbPost(Unk_020050e0 *p) {
    s32 *pm;
    s32 m2[9];
    s32 m1[9];
    Unk_02005294_Vec3 v1;
    s32 m3[9];
    Unk_021cb69c c;
    Unk_02005294_Vec3 t3;
    Unk_02005294_Vec3 v2;
    PlayerActor *o;
    PlayerActor *r6;
    JointCb_UseRestTranslation(p, 0);
    o = p->unk_04->unk_2c;
    if (p->unk_00->unk_01 == 0xf && o != 0) {
        s16 a = o->unk_458;
        if (a != 0 || o->unk_45a != 0) {
            pm = p->unk_b4->unk_28;
            s32 i = (u16)a >> 4;
            MTX_RotY33_(m1, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            MTX_Concat33(pm, m1, pm);
            i = (u16)o->unk_45a >> 4;
            MTX_RotX33_(m2, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            MTX_Concat33(pm, m2, pm);
        }
    }
    r6 = p->unk_04->unk_2c;
    if (r6) {
        _ZN17TwoLayerAnimModel21onJointCalcPostLayer2EP16Unk_02053a54_Msg(r6->unk_230, p);
        if (p->unk_00->unk_01 == 0) {
            if ((u32)(r6->unk_700 - 0x82) <= 1) {
                Unk_020050e0_R *r = p->unk_b4;
                pm = r->unk_28;
                Unk_02005294_Vec3 *pv = &r->unk_4c;
                v1 = *pv;
                v2 = *pv;
                s32 ang = WorldCurve_Apply(&v1, &v2);
                pv->z = v1.z;
                pv->y = v1.y - WorldCurve_GetRadius();
                if (ang != 0) {
                    s32 i = (u16)ang >> 4;
                    MTX_RotX33_(m3, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
                    MTX_Concat33(pm, m3, pm);
                }
            }
            JointCb_CalcCpuMatrix(r6->unk_230, p, 0);
            c = data_021cb69c;
            t3.x = c.unk_24;
            t3.y = _ZN11PlayerActor15getJointGroundYEi(r6, c.unk_28);
            t3.z = c.unk_2c;
            WorldCurve_FromCurved(&r6->unk_6f0, &t3);
        }
    }
    p->unk_24 = PlayerActor_JointCbStart;
    p->unk_92 = 3;
}
}

namespace nB {
extern "C" void PlayerActor_JointCbStart(Unk_020050e0 *p) {
    p->unk_24 = PlayerActor_JointCbPre;
    p->unk_92 = 1;
}
}

void PlayerActor::drawNotReady() {
    using namespace nB;
    Unk_02005294_Vec3 *p = &((nB::PlayerActor *)this)->unk_5c;
    ((nB::PlayerActor *)this)->unk_6f0 = *p;
}

s32 PlayerActor::getJointGroundY(s32 x) {
    using namespace nB;
    BOOL b = (gFieldSceneKind == 0);
    if (b || _ZN12Unk_02006d1414testActionFlagEj(this, 3) == 0) {
        return x;
    }
    return Ground_GetDefaultY(0);
}

void PlayerActor::doDraw() {
    using namespace nA;
    typedef void (PlayerActor::*Fn)();
    static Fn table[2] = {
        data_020d5fbc.fn, data_020d5ff4.fn,
    };
    Fn fn = table[unk_7f4];
    (this->*fn)();
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xd)) {
        BOOL c = gFieldSceneKind == 0 ? TRUE : FALSE;
        if (c == TRUE) {
            s32 a[6];
            a[0] = unk_820;
            a[1] = unk_824;
            a[2] = unk_828;
            a[3] = unk_82c;
            a[4] = unk_830;
            a[5] = unk_834;
            Field_DrawItemModel(unk_81e, &a[0], &a[3], 0, 0, 0);
        } else {
            s32 b[6];
            b[0] = unk_820;
            b[1] = unk_824;
            b[2] = unk_828;
            b[3] = unk_82c;
            b[4] = unk_830;
            b[5] = unk_834;
            RoomItemIcons_DrawItem(unk_81e, &b[0], &b[3], 0, 0, 0);
        }
    }
}

BOOL PlayerActor::doDelete() {
    using namespace nA;
    if (unk_7ec == 0x6d && unk_7d0 != -1) {
        Effect_End(unk_7d0);
    }
    PlayerSession_ClearActor(unk_7fc);
    void *r5 = gCommManager;
    if (_ZN11CommManager8isOnlineEv(r5) && _ZN11CommManager11isLocalSlotEj(r5, unk_7fc)) {
        CommSyncVar_SetVar(unk_7fc + 8, 0, 0, 0);
    }
    _ZN14MatTexVramTask6cancelEv(&unk_774);
    _ZN13MatTexPatAnim7releaseEv(&unk_70c);
    _ZN13MatTexPatAnim7releaseEv(&unk_738);
    _ZN11CachedModel7releaseEv(&unk_4fc);
    _ZN11CachedModel7releaseEv(&unk_388);
    _ZN11CachedModel7releaseEv(&unk_460);
    _ZN9AnimModel15detachJointAnimEv(&unk_230);
    _ZN11CachedModel7releaseEv(&unk_230);
    HeldItemModel_Release(&unk_59c);
    PlayerGlassesModelRef_Release(&unk_598);
    unk_c88 = 2;
    PlayerHead_Release(&unk_424);
    _ZN16CharaClothTexRef7releaseEv(&unk_770);
    PlayerBodyModelRef_CancelTexUpload(&unk_385);
    PlayerSession_ClearGfxSlot(unk_7fc);
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x1a)) {
        Bgm_Release(0x3f);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1a);
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xa)) {
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x19)) {
            _ZN12Unk_02003c3013func_02003e50Ev(&unk_838);
        } else {
            _ZN12Unk_02003c3013func_02003e50Ev(&unk_87c);
        }
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xa);
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x1b);
        FieldInfoBalloon_ClearNetMsg();
    }
    return TRUE;
}

namespace nA {
extern "C" void _ZN6ItemIdD1Ev() {}
}

PlayerActor::PlayerActor()
    : unk_81c(0xfff1), unk_81e(0xfff1), unk_8cc(0), unk_8d0(0), unk_8d4(0), unk_8d8(0), unk_8dc(0), unk_8e0(0),
      unk_8f8(0), unk_8fc(0) {
    using namespace nA;
    unk_7fc = 4;
    unk_700 = 0xa1;
    unk_704 = 0x144;
    unk_768 = 0x16f;
    unk_76c = 0x16f;
    unk_80 = 2;
    enum Unk_020d6df4_M1 { Unk_020d6df4_M1_V = -1 };
    Unk_020d6df4_M1 m1 = Unk_020d6df4_M1_V;
    unk_c7c = m1;
    unk_c88 = 2;
    unk_c90 = 2;
    unk_8f4 = 0x93;
    unk_c80 = m1;
    unk_c84 = 0x93;
}

PlayerActor::~PlayerActor() {
    using namespace nA;}

BOOL PlayerActor::vfunc_00() {
    using namespace nA;
    return _ZN11PlayerActor8doCreateEv(this);
}

BOOL PlayerActor::onExecute() {
    using namespace nA;
    _ZN11PlayerActor9doExecuteEv(this);
    return TRUE;
}

BOOL PlayerActor::onDraw() {
    using namespace nA;
    doDraw();
    return TRUE;
}

BOOL PlayerActor::vfunc_0c() {
    using namespace nA;
    return doDelete();
}

void *PlayerActor::operator new(unsigned long size) {
    using namespace nA;
    void *heap = gPlayerActorHeap;
    void *p = Heap_AllocAligned(heap, size, PlayerActor_GetObjectAlign());
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void PlayerActor::operator delete(void *p) {
    using namespace nA;
    Heap_Free(gPlayerActorHeap, p);
}

namespace nZ {
extern "C" {
extern const u8 data_020c6190[4];
const u8 data_020c6190[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c6194[4];
const u8 data_020c6194[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c6198[4];
const u8 data_020c6198[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c619c[4];
const u8 data_020c619c[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a0[4];
const u8 data_020c61a0[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a4[4];
const u8 data_020c61a4[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a8[4];
const u8 data_020c61a8[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61ac[4];
const u8 data_020c61ac[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b0[4];
const u8 data_020c61b0[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b4[4];
const u8 data_020c61b4[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b8[8];
const u8 data_020c61b8[8] = {
    0x00, 0x09, 0x01, 0x0a, 0x02, 0x0b, 0x03, 0x0c,
};
extern const u8 data_020c61c0[16];
const u8 data_020c61c0[16] = {
    0x3b, 0x00, 0x3a, 0x00, 0x3c, 0x00, 0x3d, 0x00, 0x3b, 0x00, 0x3b, 0x00, 0x3b, 0x00, 0x3b, 0x00,
};
extern const u8 data_020c61d0[32];
const u8 data_020c61d0[32] = {
    0x0d, 0x08, 0x0a, 0x09, 0x0a, 0x07, 0x09, 0x0b, 0x0a, 0x0c, 0x0a, 0x09, 0x08, 0x08, 0x0d, 0x0c,
    0x0a, 0x0e, 0x0d, 0x0c, 0x0b, 0x0e, 0x0c, 0x0c, 0x0e, 0x07, 0x0b, 0x0c, 0x0b, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerAct76Anims[32];
const u8 sPlayerAct76Anims[32] = {
    0x87, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
    0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6210[44];
const u8 data_020c6210[44] = {
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerReachDist[60];
const u8 sPlayerReachDist[60] = {
    0x9a, 0x11, 0x00, 0x00, 0x33, 0x13, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
    0x00, 0x28, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0xcd, 0x10, 0x00, 0x00,
};
extern const u8 sPlayerActionStopsMovement[148];
const u8 sPlayerActionStopsMovement[148] = {
    0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 sPlayerActionResetsRotX[148];
const u8 sPlayerActionResetsRotX[148] = {
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x01, 0x00, 0x00,
};
extern const u8 sPlayerActionLevelsTilt[148];
const u8 sPlayerActionLevelsTilt[148] = {
    0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6434[148];
const u8 data_020c6434[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 data_020c64c8[148];
const u8 data_020c64c8[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 sPlayerActionColliderFlag2[148];
const u8 sPlayerActionColliderFlag2[148] = {
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerActionTalkable[148];
const u8 sPlayerActionTalkable[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerActionIsLocomotion[148];
const u8 sPlayerActionIsLocomotion[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerActionKeepsBgCheckWork[148];
const u8 sPlayerActionKeepsBgCheckWork[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerActionPriority[148];
const u8 sPlayerActionPriority[148] = {
    0x09, 0x09, 0x00, 0x00, 0x02, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x04,
    0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x00, 0x09, 0x00, 0x00,
};
extern const u8 sPlayerActionDonePriority[148];
const u8 sPlayerActionDonePriority[148] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x05, 0x00, 0x00, 0x05, 0x05, 0x05, 0x00, 0x05,
    0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x00, 0x00, 0x05, 0x05, 0x00,
    0x05, 0x04, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x05, 0x05, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerAnimResIndex[324];
const u8 sPlayerAnimResIndex[324] = {
    0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00,
    0x08, 0x00, 0x09, 0x00, 0x0a, 0x00, 0x0b, 0x00, 0x0c, 0x00, 0x0d, 0x00, 0x0e, 0x00, 0x0f, 0x00,
    0x10, 0x00, 0x11, 0x00, 0x12, 0x00, 0x13, 0x00, 0x35, 0x00, 0x36, 0x00, 0x37, 0x00, 0x38, 0x00,
    0x39, 0x00, 0x3a, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x19, 0x00,
    0x1a, 0x00, 0x1b, 0x00, 0x1c, 0x00, 0x1d, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x20, 0x00, 0x21, 0x00,
    0x22, 0x00, 0x23, 0x00, 0x25, 0x00, 0x26, 0x00, 0x27, 0x00, 0x28, 0x00, 0x2b, 0x00, 0x2c, 0x00,
    0x2d, 0x00, 0x2e, 0x00, 0x3b, 0x00, 0x3c, 0x00, 0x3d, 0x00, 0x3e, 0x00, 0x3f, 0x00, 0x40, 0x00,
    0x2f, 0x00, 0x30, 0x00, 0x31, 0x00, 0x32, 0x00, 0x33, 0x00, 0x34, 0x00, 0x41, 0x00, 0x42, 0x00,
    0x43, 0x00, 0x44, 0x00, 0xad, 0x00, 0xae, 0x00, 0xaf, 0x00, 0xb0, 0x00, 0xb1, 0x00, 0xb2, 0x00,
    0xb3, 0x00, 0xb4, 0x00, 0xb5, 0x00, 0xb6, 0x00, 0xb7, 0x00, 0xb8, 0x00, 0xb9, 0x00, 0xba, 0x00,
    0xbb, 0x00, 0xbc, 0x00, 0xbe, 0x00, 0xbf, 0x00, 0xc0, 0x00, 0xc1, 0x00, 0xc2, 0x00, 0xc3, 0x00,
    0xc4, 0x00, 0xc5, 0x00, 0xc6, 0x00, 0xc7, 0x00, 0xc8, 0x00, 0xc9, 0x00, 0xbd, 0x00, 0xca, 0x00,
    0xcb, 0x00, 0xcc, 0x00, 0xcd, 0x00, 0xce, 0x00, 0xcf, 0x00, 0xd0, 0x00, 0xd1, 0x00, 0xd2, 0x00,
    0xd3, 0x00, 0xd4, 0x00, 0xd5, 0x00, 0xd6, 0x00, 0xd7, 0x00, 0x06, 0x01, 0x07, 0x01, 0x08, 0x01,
    0x47, 0x00, 0x09, 0x01, 0x0a, 0x01, 0x0b, 0x01, 0x0c, 0x01, 0x0d, 0x01, 0x0e, 0x01, 0x0f, 0x01,
    0x10, 0x01, 0x11, 0x01, 0x12, 0x01, 0x13, 0x01, 0x14, 0x01, 0x15, 0x01, 0x16, 0x01, 0x17, 0x01,
    0x18, 0x01, 0x19, 0x01, 0x1a, 0x01, 0x1b, 0x01, 0x1c, 0x01, 0x5b, 0x00, 0x1d, 0x01, 0x1e, 0x01,
    0x1f, 0x01, 0x20, 0x01, 0x21, 0x01, 0x22, 0x01, 0x23, 0x01, 0x24, 0x01, 0x25, 0x01, 0x26, 0x01,
    0x27, 0x01, 0x28, 0x01, 0x29, 0x01, 0x2a, 0x01, 0x2b, 0x01, 0x2c, 0x01, 0x2d, 0x01, 0x2e, 0x01,
    0x2f, 0x01, 0x30, 0x01, 0xda, 0x00, 0x31, 0x01, 0x32, 0x01, 0x33, 0x01, 0x34, 0x01, 0x35, 0x01,
    0x36, 0x01, 0x00, 0x00,
};
extern const u8 data_020c6a18[588];
const u8 data_020c6a18[588] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
extern const u8 sPlayerFrontPointDist[4];
const u8 sPlayerFrontPointDist[4] = {
    0x00, 0x20, 0x00, 0x00,
};
u32 data_020d5e34 = 0xccd;
u32 data_020d5e38 = 0xccd;
u32 data_020d5e3c = 0x5;
u32 data_020d5e40 = 0x19a;
u32 data_020d5e44 = 0x5;
u32 data_020d5e48 = 0xccd;
#pragma explicit_zero_data on
u32 data_020d5e4c = 0;
#pragma explicit_zero_data reset
u32 data_020d5e50 = 0x14000;
struct Unk_020d6dd4 {
    void (*f)();
    u32 w[5];
};
void PlayerActor_Create();
Unk_020d6dd4 sPlayerActorProfile = {PlayerActor_Create, {0xd0009, 0x2, 0x800, 0x800, 0x2b000}};
char sPlayerActorErrorMsgFile[] = "obj_etc_error";
char sPlayerActorMsgFile[] = "obj_etc_player";
char sPlayerActorGetInsectMsgFile[] = "obj_etc_getinsect";
char sPlayerActorGetFishMsgFile[] = "obj_etc_getfish";
char sPlayerClothTexName[] = "cloth";
char sPlayerSkinPalName[] = "skin_pl";
char sPlayerEyeTexName[] = "e.0";
char sPlayerMouthTexName[] = "m.0";
char sPlayerHairPalName[] = "hair_pl";
char sPlayerShirtTexName[] = "w";
}
}
