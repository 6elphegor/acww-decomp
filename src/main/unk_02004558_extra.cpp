// mwcc-version: 1.2/base
// The 14 functions of the translation unit 0x02004558-0x0201106c that only mwcc 1.2/base compiles
// to the original code (see unk_02004558.cpp; same declarations, nothing else is defined here).
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
struct Unk_020e0d30 { Unk_020e0d30(); ~Unk_020e0d30(); };
struct TouchPickCylinder { TouchPickCylinder(); ~TouchPickCylinder(); };
struct TwoLayerAnimModel { TwoLayerAnimModel(); ~TwoLayerAnimModel(); };
struct Unk_0205ee34 { Unk_0205ee34(); ~Unk_0205ee34(); };
struct Unk_0205c780 { Unk_0205c780(); ~Unk_0205c780(); };
struct CachedModel { CachedModel(); ~CachedModel(); };
struct PlayerHead { PlayerHead(); ~PlayerHead(); };
struct Unk_0205d5dc { Unk_0205d5dc(); ~Unk_0205d5dc(); };
struct HeldItemModel { HeldItemModel(); ~HeldItemModel(); };
struct Unk_0205c3a4 { Unk_0205c3a4(); ~Unk_0205c3a4(); };
struct Unk_0205d340 { Unk_0205d340(); ~Unk_0205d340(); };
struct Unk_0205ce0c { Unk_0205ce0c(); ~Unk_0205ce0c(); };
struct Unk_0205d1f8 { Unk_0205d1f8(); ~Unk_0205d1f8(); };
struct MatTexPatAnim { MatTexPatAnim(); ~MatTexPatAnim(); };
struct Unk_02063cfc { Unk_02063cfc(); ~Unk_02063cfc(); };
struct Unk_0205ca94 { Unk_0205ca94(); ~Unk_0205ca94(); };
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
s32 func_0209433c(void);
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
void func_0205d5bc(void *p);
void PlayerHead_Release(void *p);
void _ZN12Unk_0205ca9413func_0205cba8Ev(void *p);
void func_0205c744(void *p);
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
s32 func_0205d494(void *obj);
void HeldItemModel_Draw(void *a, void *b);
Unk_021cb69c HeldItemModel_GetJointMtx(void *obj, u32 mode);
void func_020abbcc(Unk_02005294_Vec3 *pos, s32 a);
void HeldItemModel_Update(void *obj);
void PlayerActor_CheckSceneExit(s32 a);
BOOL _ZN11CommManager11isLocalSlotEj(void *a, s32 b);
s32 Ground_GetDefaultY(s32 a);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN17TwoLayerAnimModel21onJointCalcPostLayer2EP16Unk_02053a54_Msg(void *a, Unk_020050e0 *b);
void func_02054594(void *a, Unk_020050e0 *b, u32 c);
void func_02054628(Unk_020050e0 *a, u32 b);
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
u8 *func_02095720(s32 v);
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
void *_ZN12Unk_0205f8d413func_0205fbb8Ev(void *);
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
void _ZN9Character13func_0203e488Ei(Unk_02008040 *, MsgRequest *);
void _ZN9Character13func_0203e47cEi(Unk_02008040 *, MsgRequest *);
void func_0202e8c8();
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
void *func_0209c60c();
s32 func_0209c86c();
s32 Ground_GetDefaultY(u32);
s32 *func_0209c868(void *);
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
u8 *func_020952c8();
void DateTime_SubDays(void *, s32);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(void *, Unk_020092c8_Bits);
void _ZN12Unk_02006d1418netFollowTransformEv(Unk_02006d14 *);
void func_020946f0(u32, s32);
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
void _ZN9Character13func_0203e488Ei(void *, Unk_02006d14_Objec* p);
void _ZN9Character13func_0203e47cEi(void *, Unk_02006d14_Objec* p);
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
void _ZN9Character13func_0203e488Ei(Unk_02006d14_A* a, Unk_02006d14_B* b);
void _ZN9Character13func_0203e47cEi(Unk_02006d14_A* a, Unk_02006d14_B* b);
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
u32 func_020b0f54();
void HeldItemModel_PlayAnim(void *, u32, u32, u32);
void *_ZN19PlayerActionRequestC1Ev(void *);
void _ZN19PlayerActionRequest6assignEiis(void *, u32, u32, s32);
void *_ZN19PlayerActionRequestD1Ev(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
void Effect_Create(u32, void *, u32, u32);
u32 func_0205c240(void *);
void _ZN12NpcEmotionFx6updateEPvsit(void *, void *, s32, u32, u32);
void _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(void *, void *, u32);
void _ZN12NpcEmotionFx4stopEv(void *);
void *Emotion_GetEntry(u32);
BOOL _ZN11CommManager11isLocalSlotEj(void *, s32);
void *TalkRequest_GetTalkTarget();
void *NpcRegistry_FindByHandle(void *);
s32 func_020e7b98(s32, s32);
void PlayerActor_TurnAngle(void *, s32);
void func_02094c38();
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
void _ZN12Unk_0205d34013func_0205d354Ej(void *p, u32 a);
void VillagerStates_ClearUnk1dBit0();
BOOL _ZN11CommManager11isLocalSlotEj(u32 a, u32 b);
void PlayerActor_TurnAngle(void *p, s32 a);
void PlayerActor_GetHat(u16 *out, Unk_02007694 *o);
s32 PlayerActor_DecelerateSkid(s32 a, u32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *PlayerData_GetCurrent();
u32 _ZN10PlayerData10getFortuneEv(void *p);
BOOL func_02063b8c(u32 a);
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
s32 func_020af3bc(void *out, void *a, void *b, s32 c, s32 d);
Unk_0205dfa4 &HeldItemModel_GetModel(void *p);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *p);
BOOL _ZN11CommManager11isLocalSlotEj(void *p, s32 v);
BOOL Scene_GetCurrent();
s32 Scene_InHouseRoom();
s32 Scene_InUnk6To8();
s32 Scene_InTown();
s32 Scene_NoPlayerInUnsharedScene();
void FieldInfoBalloon_ShowPleaseWait();
s32 func_020b15ec();
void _ZN12NpcEmotionFx5resetEv(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
s32 Ground_GetHeightAt(void *p, s32 a, s32 b);
void TalkRequest_FinishSceneEntry();
void _ZN8FaintBgm12startSilenceEv(void *p);
void Net_WifiHostKeepAlive();
s32 Net_GetMode();
void HeldItemModel_PlayAnim(void *p, s32 a, s32 b, s32 c);
s32 func_020952c8();
s32 PlayerActor_TestSlotFlag(s32 a, s32 b);
s32 PlayerActor_GetSlotAction(void *p, s32 a, s32 b);
void Effect_Create(s32 a, void *b, void *c, s32 d);
void func_02094574(s32 a, s32 b, s32 c);
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
void func_0205c384(void *p, u32 v);
void *func_0205c694(void *p);
BOOL func_0205c6a8(void *p);
void _ZN11CachedModel11setFromFileEPv(void *p, void *v);
void _ZN11CachedModel16allocJointRecordEPv(void *p, void *v);
void _ZN17TwoLayerAnimModel15allocLayerAnimsEj(void *p, void *v);
void _ZN9AnimModel10attachAnimEv(void *p);
void _ZN5Model11setCallbackEiiiii(void *p, void (*f)(void *), u32 a, u32 b, void *c, u32 d);
void _ZN13MatTexPatAnim10applyFrameEv(void *p);
s32 PlayerSession_GetGfxSlot(s32 a);
void func_0205ee10(void *p, u32 v);
void *func_0205edfc(void *p);
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
s32 func_02063c18(s16 a);
s32 func_02063c54(s16 a);
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
BOOL func_020b6080(u8 *obj, Unk_0200d64c_Xyz *out, s32 *a, u8 *b);
s32 func_020b6048(u8 *obj, s32 *pa, u8 *pb);
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
void func_0205ef8c(void *, u32);
void _ZN12Unk_0205d1f813func_0205d20cEj(void *, u32);
void _ZN12Unk_0205ce0c13func_0205cf84Ej(void *, u32);
void _ZN12Unk_0205d34013func_0205d38cEj(void *, u32);
void _ZN12Unk_0205d34013func_0205d354Ej(void *, s32);
void HeldItemModel_Setup(void *, u32, void *, void *, s32, s32);
void _ZN12Unk_0205f8d413func_0205fbc0Ei(void *, s32);
void _ZN12Unk_02005e7c15processRequestsEv(void *);
void func_0205d5d4(void *, u32);
void PlayerHead_SetSlot(void *, u32);
void func_0205c778(void *, u32);
void func_0205c718(void *, s32);
void _ZN12Unk_0205ca9413func_0205cbb0Ej(void *, u32);
s32 func_0205c694(void *);
s32 func_0205c91c(void *);
s32 func_0205ef74(void *);
void func_0205c6f4(void *);
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
Unk_02006d14_Vec3 *func_020947f0(u32 n);
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
s32 func_020954e0(u32 *out, u32 a, u32 b);
s32 WorldCurve_FromCurved(Unk_02006d14_Vec3 *v);
BOOL InputMode_IsButtons();
BOOL InputMode_IsTouch();
s32 Snd_SeEmitterPlayHeld(void *p, u32 a, s32 b, s32 c);
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
s32 func_02063c18(s32 a);
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
BOOL func_0202e8d4();
void _ZN12Unk_0200804019requestErrorMessageEhjj(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void _ZN12Unk_0200804016requestLidClosedEjj(Unk_02006d14 *o, s32 a, s32 b);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(s32 a, Unk_0200f17c_Date d);
void *func_0209c37c(s32 a, s32 b);
s32 PlayerActor_GetTan(Unk_02006d14 *o);
BOOL _ZN12Unk_02006d1416isGuestInSessionEv(Unk_02006d14 *o);
Unk_0200f17c_Date *func_020952d8();
void PlayerActor_GetPlayerData(void *o);
Unk_0200f17c_Date _ZN10PlayerData15getLastPlayDateEv();
void Clock_GetDateTime(void *p);
void MI_CpuCopy8(void *a, void *b, s32 n);
void DateTime_Compare(void *a, void *b, s32 n);
void Snd_SeEmitterPlayAlternate(void *a, void *b, s32 c);
Unk_0200f070_V3 *func_020b0cbc(Unk_0200f070_V3 *v);
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
void func_02063a1c(void *, void *, void *, void *);
void func_02063a5c(void *, void *, void *, void *);
BOOL PlayerHead_PollTexUpload(void *);
s32 PlayerHead_GetModelIds(s32, u32, u16 *, s32 *, s32 *);
void PlayerHead_Load(void *, s32, s32, u16 *, s32);
void *PlayerHead_GetModelFile(void *, s32);
s32 NNS_G3dGetTex(void *);
void *_ZN12Unk_0205d34013func_0205d340Ev(void *);
void *func_0205ef74(void *);
void *func_0205ef60(void *);
void PlayerHead_RelocateTextures(void *);
void PlayerHead_CancelTexUpload(void *);
void _ZN11CachedModel7releaseEv(void *);
void _ZN11CachedModel11setFromFileEPv(void *, void *);
s32 PlayerHead_GetModelId(void *, s32);
void _ZN13MatTexPatAnim7releaseEv(void *);
void _ZN12Unk_0205d1f813func_0205d1f8Ev(void *);
void func_020e885c();
void *_ZN12Unk_0205ce0c13func_0205cf60Ev(void *);
void *_ZN12Unk_0205ce0c13func_0205cf54Ev(void *);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *, void *, u32, u32, u32, u32);
s32 func_0205d494(void *);
s32 func_0205d4e4(void *);
s32 func_0205d764(s32);
s32 func_0205d758(s32);
BOOL Item_IsFlowerAltItem(u16 *);
s32 Item_GetFlowerAltOrdinal(u16 *);
void func_0205d554(void *, s32);
void func_0205d530(void *);
void func_0205d588(void *);
void *func_0205d4d0(void *);
BOOL TalkRequestFlags_IsResetti(void *);
void TalkRequest_AddTalk(void *, void *);
BOOL Character_FindInteractionTarget(void *);
BOOL _ZN9Character16checkInteractionEPS_(void *, void *);
void PlayerActor_OffsetByAngle(Unk_0200ff08_Vec *, void *, void *, void *, void *);
void func_0205c91c(void *);
u32 ClothTex_GetTexThunk();
void _ZN14MatTexVramTask7requestEPvjS0_jj(void *, u32, void *, u32, u32, u32);
void _ZN12Unk_0205ca9413func_0205ca94EPtiii(void *, s32, void *, u32, u32);
void func_0205ef34(void *);
void func_0205ef08(void *, s32);
s32 func_01ffcb0c(s32, s32);
BOOL _ZN12Unk_020e0d0813func_02088d38Ej(void *, s32);
BOOL _ZN12Unk_020e0d0813func_020890b0Ei(void *, s32);
s32 HeldItem_GetHandPose(u16 *);
s32 func_0205c570(s32);
void func_0205c2dc(void *, s32, s32, s32);
void func_0205c254(void *);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
void _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(void *, s32, s32, u32, u32, u32, u32, u32);
s32 func_0205c57c(s32);
s32 func_0205c5d0();
s32 func_0205c5ac(s32, s32);
s32 func_0205c588(s32, s32);
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
void func_0205c2dc(void *a, s32 b, u32 c, u32 d);
s32 func_0205c254(void *a);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, u32 b);
void BlendAnimModel_Play(void *a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g);
void _ZN17TwoLayerAnimModel12updateLayersEv(void *a);
void _ZN12Unk_02006d1417applyHeldItemPoseEiPv(Unk_020102ec *a, s32 b, u32 c);
void _ZN12Unk_0205ce0c13func_0205ce78Eiii(void *a, s32 b, u32 c, u32 d);
s32 _ZN12Unk_0205ce0c13func_0205cf54Ev(void *a);
s32 _ZN12Unk_0205ce0c13func_0205cf60Ev(void *a);
s32 func_0205c5dc(s32 a);
s32 func_0205c5e8(s32 a);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *a, s32 b, u32 c, u32 d, u32 e, u32 f);
s32 _ZN13MatTexPatAnim6updateEv(void *a);
s32 _ZN12Unk_0205d34013func_0205d340Ev(void *a);
s32 _ZN12Unk_0205d1f813func_0205d1f8Ev(void *a);
void _ZN13MatTexPatAnim4initEPvS0_jS0_(void *a, s32 b, s32 c, u32 d, s32 e);
void _ZN12Unk_020e0d0813func_02089040Ev(void *a);
void _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
u32 Ground_GetDefaultY(u32 a);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *a, u32 b);
BOOL func_02063ca0(void *a);
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
u8 *func_020952c8(void);
u16 *func_020952d0(void);
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
BOOL func_020947f0(s32 a);
s32 Ground_GetExitAtPos(void);
void func_02094420(s32 *p);
void *Scene_GetWarpRequest(void);
BOOL SceneExit_GetDoor(void *a, s32 b, s32 *c, s32 *d);
void func_02094400(s32 *p);
BOOL func_0209c7a4(s32 v);
BOOL Scene_InUnk6To8(void);
void TalkRequest_FinishSceneEntry(void);
void TalkRequest_AddLeaveRoom(void);
s32 func_020951ec(s32 v);
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
extern u8 data_020c6c68[];
extern u32 data_020d6f68[];
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

    Unk_020e0d30 unk_170;
    u8 pad_171[0x4f];
    Unk_020e0d30 unk_1c0;
    u8 pad_1c1[0x4f];
    TouchPickCylinder unk_210;
    u8 pad_211[0x1f];
    TwoLayerAnimModel unk_230;
    u8 pad_231[0x153];
    Unk_0205ee34 unk_384;
    Unk_0205c780 unk_385;
    u8 pad_386[0x2];
    CachedModel unk_388;
    u8 pad_389[0x9b];
    PlayerHead unk_424;
    u8 pad_425[0x3b];
    CachedModel unk_460;
    u8 pad_461[0x9b];
    CachedModel unk_4fc;
    u8 pad_4fd[0x9b];
    Unk_0205d5dc unk_598;
    u8 pad_599[0x3];
    HeldItemModel unk_59c;
    u8 pad_59d[0x15f];
    Unk_0205c3a4 unk_6fc;
    Unk_0205c3a4 unk_6fd;
    u8 pad_6fe[0x2];
    s32 unk_700;
    s32 unk_704;
    u8 pad_708[0x1];
    Unk_0205d340 unk_709;
    Unk_0205ce0c unk_70a;
    Unk_0205d1f8 unk_70b;
    MatTexPatAnim unk_70c;
    u8 pad_70d[0x2b];
    MatTexPatAnim unk_738;
    u8 pad_739[0x2b];
    Unk_02063cfc unk_764;
    u8 pad_765[0x3];
    s32 unk_768;
    s32 unk_76c;
    Unk_0205ca94 unk_770;
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


void Unk_02006d14::nudgeForward() {
    using namespace nP;
    switch (func_02063c18(((nP::Unk_02006d14 *)this)->unk_8e)) {
    case 2: ((nP::Unk_02006d14 *)this)->unk_5c.z -= 1; break;
    case 0: ((nP::Unk_02006d14 *)this)->unk_5c.z += 1; break;
    case 3: ((nP::Unk_02006d14 *)this)->unk_5c.x -= 1; break;
    case 1: ((nP::Unk_02006d14 *)this)->unk_5c.x += 1; break;
    }
}

void Unk_02006d14::offsetSpawnBySlot() {
    using namespace nP;
    s32 r = func_02063c18(((nP::Unk_02006d14 *)this)->unk_8e);
    s32 step = ((nP::Unk_02006d14 *)this)->unk_7fc;
    switch (r) {
    case 2: ((nP::Unk_02006d14 *)this)->unk_5c.z -= step; break;
    case 0: ((nP::Unk_02006d14 *)this)->unk_5c.z += step; break;
    case 3: ((nP::Unk_02006d14 *)this)->unk_5c.x -= step; break;
    case 1: ((nP::Unk_02006d14 *)this)->unk_5c.x += step; break;
    }
}

void PlayerActor::vfunc_64() {
    using namespace nO;
    u8 buf[12];
    if (((nO::PlayerActor *)this)->unk_818 >= 0xf) return;
    switch (((nO::PlayerActor *)this)->unk_818) {
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
        ((nO::PlayerActor *)this)->unk_818 = 9;
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
        ((nO::PlayerActor *)this)->unk_818 = 8;
        break;
    }
    case 14: {
        u32 obj[9];
        buf[5] = 0x3f;
        _ZN15TalkWindowState14setNextMessageEPhPv(((nO::PlayerActor *)this)->unk_128, &buf[5], 0);
        ((nO::PlayerActor *)this)->unk_818 = 8;
        *(u16 *)&buf[8] = ((nO::PlayerActor *)this)->unk_7d3 + 0x12e8;
        _ZN8ItemNameC1EPt(obj, (u16 *)&buf[8]);
        _ZN15TalkWindowState12setNamedSlotEiPvj(((nO::PlayerActor *)this)->unk_128, 0, obj, 7);
        _ZN8ItemNameD1Ev(obj);
        break;
    }
    }
}

void PlayerActor::vfunc_68() {
    using namespace nO;
    s32 st = ((nO::PlayerActor *)this)->unk_818;
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
            ((nO::PlayerActor *)this)->unk_818 = 5;
        } else {
            switch (((nO::PlayerActor *)this)->unk_818) {
            case 0:
            case 4:
                ((nO::PlayerActor *)this)->unk_818 = 9;
                break;
            case 2:
                ((nO::PlayerActor *)this)->unk_818 = 0xb;
                break;
            default:
                ((nO::PlayerActor *)this)->unk_818 = 0xf;
                break;
            }
        }
        break;
    }
    }
}

void PlayerActor::vfunc_6c() {
    using namespace nO;
    s32 st = ((nO::PlayerActor *)this)->unk_818;
    s32 r5;
    if (st >= 0xf) return;
    r5 = 6;
    switch (st) {
    case 11:
        r5 = 0x23;
    case 10:
        Bgm_Release(0x39);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((nO::PlayerActor *)this)->unk_818 = 0xf;
        break;
    case 7: {
        u16 v[2];
        u16 r6 = ((nO::PlayerActor *)this)->unk_7d0;
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
        ((nO::PlayerActor *)this)->unk_818 = 0xf;
        break;
    }
    case 5:
    case 8: {
        u32 arg;
        r5 = 0xc;
        if (((nO::PlayerActor *)this)->unk_7ec == 0x57) {
            arg = ((nO::PlayerActor *)this)->unk_7d4;
            if (arg == 0x3b) r5 = 5;
        } else if (((nO::PlayerActor *)this)->unk_7ec == 0x54) {
            arg = ((nO::PlayerActor *)this)->unk_7d0;
            if (arg == 0x3a) r5 = 5;
        } else if (((nO::PlayerActor *)this)->unk_7ec == 0x1c) {
            break;
        } else if (((nO::PlayerActor *)this)->unk_7ec == 0x19) {
            break;
        } else if (((nO::PlayerActor *)this)->unk_7ec == 0x5f) {
            arg = 0x39;
        } else {
            break;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(r5, 0x14, 0x19);
        if (((nO::PlayerActor *)this)->unk_818 != 5) ((nO::PlayerActor *)this)->unk_818 = 0xf;
        break;
    }
    case 9: {
        u32 arg;
        if (((nO::PlayerActor *)this)->unk_7ec == 0x57) {
            arg = ((nO::PlayerActor *)this)->unk_7d4;
            r5 += 0x1e;
        } else {
            arg = ((nO::PlayerActor *)this)->unk_7d0;
        }
        Bgm_Release(arg);
        Bgm_RequestSilence(0xc, r5, r5 + 5);
        ((nO::PlayerActor *)this)->unk_818 = 0xf;
        break;
    }
    case 12:
        Bgm_Release(0x42);
        Bgm_RequestSilence(0xc, r5, 0xb);
        ((nO::PlayerActor *)this)->unk_818 = 0xf;
        break;
    }
}

void PlayerActor::readInput() {
    using namespace nN;
    s32 flag = 0;
    s32 mode = ((nN::PlayerActor *)this)->unk_16c;
    s32 v4 = 0;
    s32 v8 = 0;
    s32 vc = 0;
    s32 v10 = ((nN::PlayerActor *)this)->unk_13d;
    s32 v14 = 0;
    s32 sp18, sp1c;
    u32 sp20;
    s32 sp24, sp28, sp2c;
    u8 sp30;
    s32 sp34;
    s32 ax, ay, bx, by;
    s32 sp48, sp4c, len;
    Unk_0200d64c_Xyz p50;
    Unk_0200d64c_Xyz r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->unk_5c, &((nN::PlayerActor *)this)->unk_8e, data_020d5e50);
    Unk_0200d64c_Xyz p68;
    Unk_0200d64c_Xyz pv[4];
    BOOL got = FALSE;
    ((nN::PlayerActor *)this)->unk_13c = 0;
    ((nN::PlayerActor *)this)->unk_140 = 0;
    ((nN::PlayerActor *)this)->unk_169 = 0xff;
    if (Unk_0200d64c_IsTwo()) {
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0xb) || _ZN12Unk_02006d1414testActionFlagEj(this, 0x1b)) {
        ((nN::PlayerActor *)this)->unk_130 = 0;
        ((nN::PlayerActor *)this)->unk_136 = 0;
        ((nN::PlayerActor *)this)->unk_137 = 0;
        ((nN::PlayerActor *)this)->unk_138 = 0;
        ((nN::PlayerActor *)this)->unk_13d = 0;
        ((nN::PlayerActor *)this)->unk_144 = 0;
        ((nN::PlayerActor *)this)->unk_154 = r5c;
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
                    if (((nN::PlayerActor *)this)->unk_7ec == 2 || ((nN::PlayerActor *)this)->unk_7ec == 0x83 || ((nN::PlayerActor *)this)->unk_7ec == 0x28 || ((nN::PlayerActor *)this)->unk_7ec == 8) {
                        TalkRequest_FinishSceneEntry();
                    }
                }
            }
        }
    } else {
    if (gGfxMainOnTop == 0) {
        vc = TouchPick_GetGroundPos(Scene_GetTouchPicker(), &p50);
        if (func_020b6080(Scene_GetTouchPicker(), &p68, &sp34, &sp30)) {
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
                        v8 = func_020b6048(Scene_GetTouchPicker(), 0, 0);
                        r5c = p50;
                    }
                    break;
                case 5:
                    if (Unk_0200d64c_Both()) {
                        ((nN::PlayerActor *)this)->unk_140 = 1;
                        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) != 1) {
                            r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->unk_148 = p68;
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
                                FieldPos_ToUnit(&ax, &ay, &((nN::PlayerActor *)this)->unk_5c);
                                FieldPos_ToUnit(&bx, &by, &p50);
                                if (ax != bx || ay != by) {
                                    r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->unk_148 = p50;
                                } else {
                                    r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->unk_148 = p68;
                                }
                            } else {
                                r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->unk_148 = p68;
                            }
                        }
                    }
                    break;
                case 4:
                    if (Unk_0200d64c_Both()) {
                        ((nN::PlayerActor *)this)->unk_140 = 2;
                        r5c = *(Unk_0200d64c_Xyz *)&((nN::PlayerActor *)this)->unk_148 = p68;
                    }
                    break;
                case 8:
                case 10:
                    if (Unk_0200d64c_Both()) {
                        v14 = 1;
                        FieldPos_SnapToUnitCenter(&p68, &p68);
                        r5c = p68;
                    }
                    ((nN::PlayerActor *)this)->unk_169 = sp30;
                    break;
                }
            }
        }
    }
    if (flag != 0 || (func_0203d4d4() && vc == 0)) {
        ((nN::PlayerActor *)this)->unk_130 = 0;
        ((nN::PlayerActor *)this)->unk_136 = 0;
        v10 = 1;
        ((nN::PlayerActor *)this)->unk_13c = 1;
        r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->unk_5c, &((nN::PlayerActor *)this)->unk_8e, data_020d5e34);
        mode = 2;
    } else {
        s32 fast = 0;
        ((nN::PlayerActor *)this)->unk_13c = fast;
        if (((nN::PlayerActor *)this)->unk_16c == 2) {
            if (vc) mode = 2; else mode = 1;
        } else if (gPad.a & 0x2ff3) {
            mode = 1;
        } else if (vc) {
            mode = 2;
        }
        if (mode == 2) {
            if (((nN::PlayerActor *)this)->unk_7ec >= 0x1d && ((nN::PlayerActor *)this)->unk_7ec <= 0x23) {
                sp20 = (u32)gCamera;
                pv[1].x = ((nN::PlayerActor *)this)->unk_6f0.x;
                pv[1].y = ((nN::PlayerActor *)this)->unk_6f0.y;
                pv[1].z = ((nN::PlayerActor *)this)->unk_6f0.z;
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
                pv[0].x = p50.x - ((nN::PlayerActor *)this)->unk_6f0.x;
                pv[0].z = p50.z - ((nN::PlayerActor *)this)->unk_6f0.z;
                Camera_ProjectCurvedToScreen(&sp48, &sp4c, &((nN::PlayerActor *)this)->unk_6f0);
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
            ((nN::PlayerActor *)this)->unk_130 = res;
            if (res > 0xc32) {
                fast = 1;
            }
            if (res > 0) {
                ((nN::PlayerActor *)this)->unk_134 = func_020e7b98(pv[0].x, pv[0].z);
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
                mode = ((nN::PlayerActor *)this)->unk_16c;
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
            ((nN::PlayerActor *)this)->unk_13c = v4;
            if (gPad.a & 1) {
                v10 = 1;
            } else {
                v10 = 0;
                if (gPad.b & 2) {
                    v14 = 1;
                    r5c = PlayerActor_OffsetByAngle(this, &((nN::PlayerActor *)this)->unk_5c, &((nN::PlayerActor *)this)->unk_8e, data_020d5e48);
                }
            }
            keys = gPad.a;
            if ((keys & 0x80) || (keys & 0x40) || (keys & 0x10) || (keys & 0x20)) {
                if (fast) {
                    ((nN::PlayerActor *)this)->unk_130 = 0x1000;
                } else {
                    ((nN::PlayerActor *)this)->unk_130 = 0xc32;
                }
                ((nN::PlayerActor *)this)->unk_134 = gPad.c;
            } else {
                ((nN::PlayerActor *)this)->unk_130 = 0;
            }
        }
        ((nN::PlayerActor *)this)->unk_136 = fast;
    }
    ((nN::PlayerActor *)this)->unk_137 = v4;
    ((nN::PlayerActor *)this)->unk_138 = v8;
    ((nN::PlayerActor *)this)->unk_13d = v10;
    ((nN::PlayerActor *)this)->unk_144 = v14;
    ((nN::PlayerActor *)this)->unk_154 = r5c;
    ((nN::PlayerActor *)this)->unk_16c = mode;
    }
    }
}

void Unk_02007694::endChangeClothes(u32 a) {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        switch (p->unk_04) {
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
            void *r = PlayerData_GetBySessionSlot(((nL::Unk_02007694 *)this)->unk_7fc);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                _ZN12Unk_0205d34013func_0205d354Ej(&((nL::Unk_02007694 *)this)->unk_709[0], _ZN10PlayerData11getFaceTypeEv(r));
                _ZN12Unk_020102ec10replayAnimEv(this);
                VillagerStates_ClearUnk1dBit0();
            }
            break;
        }
        }
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nL::Unk_02007694 *)this)->unk_7fc)) {
        u32 i;
        switch (p->unk_04) {
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
    if (_ZN13AnimFrameCtrl14hasPassedFrameEi(&((nL::Unk_02007694 *)this)->unk_2cc[0], 8)) {
        _ZN12Unk_02006d1413setActionFlagEj(this, 0xf);
        switch (((nL::Unk_02007694 *)this)->unk_7d0.unk_04) {
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
            void *r = PlayerData_GetBySessionSlot(((nL::Unk_02007694 *)this)->unk_7fc);
            if (r != NULL) {
                PlayerData_SetStungFace(r, 0);
                _ZN12Unk_0205d34013func_0205d354Ej(&((nL::Unk_02007694 *)this)->unk_709[0], _ZN10PlayerData11getFaceTypeEv(r));
                u8 buf[2];
                buf[0] = ((nL::Unk_02007694 *)this)->unk_2e0;
                _ZN12Unk_020102ec17setEyeAnimForBodyEPiPh(this, data_020d5e3c, &buf[0]);
                buf[1] = ((nL::Unk_02007694 *)this)->unk_2e0;
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
    Unk_02006d14_Sub7d0* s = &((nJ::Unk_02006d14 *)this)->unk_7d0;
    u8* st = &s->unk_04.b.unk_04;
    struct { u32 pad; Unk_0200b144_Pos p[2]; } l;
    switch (*st) {
    case 1: {
        u8 a = s->unk_04.b.unk_05;
        u8 b = s->unk_04.b.unk_06;
        s32 v;
        u8 flag;
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nJ::Unk_02006d14 *)this)->unk_7fc)) {
            v = ((nJ::Unk_02006d14 *)this)->unk_810;
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
        ((nJ::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->unk_7ec);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        break;
    case 3:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 4;
            _ZN9Character13func_0203e488Ei(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nJ::Unk_02006d14 *)this) + 0xec, &sPlayerActorMsgFile);
            ((nJ::Unk_02006d14 *)this)->unk_10a = 0;
            ((nJ::Unk_02006d14 *)this)->unk_128->unk_08 = 1;
        }
        break;
    case 4:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->unk_04 != 0) {
                *st = 5;
            }
        }
        break;
    case 5:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->unk_04 == 0) {
                _ZN9Character13func_0203e47cEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                *st = 6;
            }
        }
        break;
    case 6:
        ((nJ::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->unk_7ec);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        break;
    case 7:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 8;
            _ZN9Character13func_0203e488Ei(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nJ::Unk_02006d14 *)this) + 0xec, &sPlayerActorErrorMsgFile);
            ((nJ::Unk_02006d14 *)this)->unk_10a = 1;
            ((nJ::Unk_02006d14 *)this)->unk_128->unk_08 = 1;
        }
        break;
    case 8:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->unk_04 != 0) {
                *st = 9;
            }
        }
        break;
    case 9:
        if (((nJ::Unk_02006d14 *)this)->unk_128 != NULL) {
            if (((nJ::Unk_02006d14 *)this)->unk_128->unk_04 == 0) {
                _ZN9Character13func_0203e47cEi(((nJ::Unk_02006d14 *)this), ((nJ::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                ((nJ::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nJ::Unk_02006d14 *)this)->unk_7ec);
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
        if (!_ZN13AnimFrameCtrl10isFinishedEv(((nI::Unk_02006d14 *)this)->unk_2cc)) break;
        if (((nI::Unk_02006d14 *)this)->unk_81c == 0x1520) {
            if (BottleLetter_Open()) {
                *state = 6;
                break;
            }
            if (!TalkRequest_AddPlayerMessage()) break;
            _ZN12Unk_020102ec9startAnimEijt(this, 0x6c, 0, 0);
            s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(this);
            if (r == 4) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0x13, 3, 0);
            }
            *state = 7;
            _ZN9Character13func_0203e488Ei(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, sPlayerActorErrorMsgFile);
            ((nI::Unk_02006d14 *)this)->unk_10a = 0x12;
            ((nI::Unk_02006d14 *)this)->unk_128->unk_8 = 1;
        } else if (flag) {
            if (!TalkRequest_IsPlayerMessage() && !TalkRequest_AddPlayerMessage()) break;
            _ZN12Unk_020102ec9startAnimEijt(this, 0x6c, 0, 0);
            s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(this);
            if (r == 4) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
            } else if (r == 3) {
                HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0x13, 3, 0);
            }
            *state = 1;
            _ZN9Character13func_0203e488Ei(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            _ZN10MsgRequest11setFileNameEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, sPlayerActorMsgFile);
            ((nI::Unk_02006d14 *)this)->unk_10a = 2;
            ((nI::Unk_02006d14 *)this)->unk_128->unk_8 = 1;
        } else {
            u16 v[2];
            v[1] = ((nI::Unk_02006d14 *)this)->unk_81c;
            Pocket_AddFoundItem(&v[1]);
            *state = 6;
        }
        break;
    case 1:
        if (!((nI::Unk_02006d14 *)this)->unk_128) break;
        if (!((nI::Unk_02006d14 *)this)->unk_128->unk_4) break;
        *state = 2;
        ((nI::Unk_02006d14 *)this)->unk_818 = 3;
        break;
    case 2:
        if (((nI::Unk_02006d14 *)this)->unk_818 >= 15) {
            *state = 3;
        } else {
            if (!((nI::Unk_02006d14 *)this)->unk_128) break;
            if (((nI::Unk_02006d14 *)this)->unk_128->unk_4) break;
            if (((nI::Unk_02006d14 *)this)->unk_818 == 5) {
                if (!MenuCtrl_OpenPocketsFullPickUp(((nI::Unk_02006d14 *)this)->unk_81c)) break;
                ((nI::Unk_02006d14 *)this)->unk_818 = 6;
                break;
            } else if (((nI::Unk_02006d14 *)this)->unk_818 != 6) {
                break;
            }
            if (!MenuCtrl_IsFinished()) break;
            ((nI::Unk_02006d14 *)this)->unk_818 = 15;
            ((nI::Unk_02006d14 *)this)->unk_2dc = 0x1000;
            if (MenuCtrl_IsResultOk()) {
                *state = 6;
                _ZN9Character13func_0203e47cEi(this, ((nI::Unk_02006d14 *)this));
                _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
                TalkRequest_FinishPlayerMessage();
                break;
            }
            *state = 3;
        }
    case 3:
        if (((nI::Unk_02006d14 *)this)->unk_80c != -1) break;
        ((nI::Unk_02006d14 *)this)->unk_80c = FieldAction_RequestPlaceAtPendingForAid(((nI::Unk_02006d14 *)this)->unk_7fc, ((nI::Unk_02006d14 *)this)->unk_81c);
        if (((nI::Unk_02006d14 *)this)->unk_80c == -1) break;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        *state = 4;
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) != 4) break;
        HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
        break;
    case 4:
        if (((nI::Unk_02006d14 *)this)->unk_80c != -1) break;
        *state = 5;
    case 5:
        if (!((nI::Unk_02006d14 *)this)->unk_128) break;
        if (((nI::Unk_02006d14 *)this)->unk_128->unk_4) break;
        _ZN9Character13func_0203e47cEi(this, ((nI::Unk_02006d14 *)this));
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
        TalkRequest_FinishPlayerMessage();
        *state = 6;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
        }
        break;
    case 6:
        ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
        _ZN11PlayerActor11requestWaitEjjj(this, 3, 1, -1);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0xd);
        ((nI::Unk_02006d14 *)this)->unk_818 = 15;
        break;
    case 7:
        if (!((nI::Unk_02006d14 *)this)->unk_128) break;
        if (!((nI::Unk_02006d14 *)this)->unk_128->unk_4) break;
        *state = 8;
        break;
    case 8:
        if (!((nI::Unk_02006d14 *)this)->unk_128) break;
        if (((nI::Unk_02006d14 *)this)->unk_128->unk_4) break;
        *state = 3;
        if (((nI::Unk_02006d14 *)this)->unk_80c != -1) break;
        ((nI::Unk_02006d14 *)this)->unk_80c = FieldAction_RequestPlaceAtPendingForAid(((nI::Unk_02006d14 *)this)->unk_7fc, ((nI::Unk_02006d14 *)this)->unk_81c);
        if (((nI::Unk_02006d14 *)this)->unk_80c == -1) break;
        *state = 5;
        _ZN12Unk_020102ec9startAnimEijt(this, 0, 6, 6);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            HeldItemModel_PlayAnim(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
        }
        break;
    }
}

void Unk_02006d14::setupAct76(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    u8 *p = &((nG::Unk_02006d14_Item *)item)->unk_0c[0];
    u8 a = p[0];
    u8 b = p[1];
    u8 c = p[2];
    Unk_02006d14_7d0 *s;
    if ((u8)(a + 254) <= 1) TalkRequest_FinishSceneEntry();
    s = &((nG::Unk_02006d14 *)this)->unk_7d0;
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
    ((nG::Unk_02006d14 *)this)->unk_8ec.writeAct76Net(a, b, c);
    _ZN12Unk_020102ec13startAnimOnceEijt(((nG::Unk_02006d14 *)this), sPlayerAct76Anims[a], 3, 0);
    ((nG::Unk_02006d14 *)this)->unk_8e7 = 0;
    s32 r = _ZN12Unk_02006d1415getHeldToolKindEv(((nG::Unk_02006d14 *)this));
    if (r != 3) {
        if (r == 4) HeldItemModel_PlayAnim(((nG::Unk_02006d14 *)this)->unk_59c, 9, 3, 1);
    } else {
        HeldItemModel_PlayAnim(((nG::Unk_02006d14 *)this)->unk_59c, 0x1f, 3, 1);
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, ((nG::Unk_02006d14 *)this)->unk_7fc)) {
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
            ((nG::Unk_02006d14 *)this)->unk_818 = 7;
            break;
        default:
            Bgm_RequestSilence(0xc, 0, 1);
            ((nG::Unk_02006d14 *)this)->unk_818 = 7;
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
    p = &unk_7d0[0];
    kind = p[2];
    sub = p[5];
    st = p + 3;
    blk = unk_694;
    switch (kind) {
    case 0:
        if (*st == 3) {
            *st = 0;
            Insect_FinishCatch(p[6]);
            HeldInsect_Start(sub, (u8)unk_7fc);
        }
        if (sub == 9) {
            v1.unk_00 = 0x119a;
            v1.unk_04 = 0x4cd;
            v1.unk_08 = -0x4cd;
        } else {
            v1.unk_00 = 0xb33;
            v1.unk_04 = 0x19a;
            v1.unk_08 = -0x19a;
        }
        PlayerActor_ApplyHoldOffset(&blk, &v1);
        t[5] = 0x64;
        t[6] = 0x64;
        t[7] = 0x64;
        v1 = *(Unk_02008074_Vec *)&blk.w[9];
        WorldCurve_FromCurved(&v1, &v1);
        HeldInsect_SetHandMatrix((u8)unk_7fc, &t[5], &blk, 0);
        break;
    case 1:
        void *o = _ZN12Unk_0205f8d413func_0205fbb8Ev(unk_5c4);
        if (o != NULL) {
            v1.unk_00 = 0xb33;
            v1.unk_04 = 0x19a;
            v1.unk_08 = -0x19a;
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
    switch (unk_700) {
    case 0x87:
        if (!_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc)) {
            return;
        }
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x88, 0, 0);
        HeldItemModel_PlayAnim(unk_59c, 0xa, 0, 1);
        return;
    case 0x89:
        if (!_ZN13AnimFrameCtrl10isFinishedEv(unk_2cc)) {
            return;
        }
        _ZN12Unk_020102ec13startAnimOnceEijt(this, 0x8a, 0, 0);
        HeldItemModel_PlayAnim(unk_59c, 0x20, 0, 1);
        return;
    case 0x86:
        lim = 0x19;
        if (_ZN11CommManager11isLocalSlotEj(gCommManager, unk_7fc)) {
            if (_ZN13AnimFrameCtrl14hasPassedFrameEi(unk_2cc, 0xc)) {
                Camera_SetMode4();
            }
        }
        break;
    default:
        lim = 5;
        break;
    }
    if ((s32)((unk_2d4 << 4) >> 16) < lim) {
        return;
    }
    g = gCommManager;
    if (!_ZN11CommManager11isLocalSlotEj(g, unk_7fc)) {
        unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
        return;
    }
    switch (*st) {
    case 0:
        if (TalkRequest_AddPlayerMessage()) {
            *st = 1;
            _ZN9Character13func_0203e488Ei(this, this);
            _ZN12Unk_02006d1413setActionFlagEj(this, 0x11);
            switch (kind) {
            case 0:
                setFileName(sPlayerActorGetInsectMsgFile);
                unk_1e = 0x40;
                break;
            case 1:
                setFileName(sPlayerActorGetFishMsgFile);
                unk_1e = 0x40;
                break;
            case 2:
                setFileName(sPlayerActorMsgFile);
                unk_1e = 0x28;
                break;
            case 3:
                setFileName(sPlayerActorMsgFile);
                unk_1e = 0x29;
                break;
            case 7:
                setFileName(sPlayerActorMsgFile);
                unk_1e = 0x22;
                break;
            default:
                setFileName(sPlayerActorMsgFile);
                unk_1e = kind + 0x1a;
                break;
            }
            unk_128->unk_08 = 1;
        }
    case 1:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 != 0) {
                *st = 2;
            }
        }
        break;
    case 2:
        if (kind < 2) {
            if (unk_128 == NULL) {
                break;
            }
            if (*((u8 *)unk_128 + 0x19f7) != 0xfe) {
                break;
            }
            if (kind == 1) {
                PlayerActor_RequestFishShowCatch(this, 1, 6, -1);
            } else {
                PlayerActor_RequestInsectShowCatch(this, 3, sub, sub, 6, -1);
            }
            break;
        }
        if (unk_128 == NULL) {
            break;
        }
        if (unk_128->unk_04 != 0) {
            break;
        }
        _ZN9Character13func_0203e47cEi(this, this);
        _ZN12Unk_02006d1415clearActionFlagEj(this, 0x11);
        TalkRequest_FinishPlayerMessage();
        if (_ZN11CommManager11isLocalSlotEj(g, unk_7fc)) {
            Camera_SetModeDefault();
        }
        unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(this, unk_7ec);
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

    if (!FieldActionFx_Take(&pkt, unk_7fc) && !unk_900.set) {
        return;
    }
    ux = 0;
    uy = 0;
    if (unk_900.set) {
        unk_900.set = 0;
        x = unk_8f8;
        y = unk_8fc;
        type = unk_900.type;
        sub = unk_900.sub;
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
        if (unk_7ec != 0) {
            break;
        }
        unk_8e8 = 2;
        
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    case 14: case 19: case 20: case 21: case 22:
        if (_ZN12Unk_02006d1414testActionFlagEj(this, 10) == 0) {
            unk_900.set = 1;
            unk_8f8 = x;
            unk_8fc = y;
            unk_900.type = type;
            unk_900.sub = sub;
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
        if (unk_7ec == 0x68) {
            pa = (Unk_02005f50_Area *)unk_7d0;
            s32 t = pa->a[1]; q1.x = pa->a[0]; q1.y = 0; q1.z = t;
            FieldPos_ToUnit(&ux, &uy, &q1);
            if (ux == x && uy == y) {
                pa->e[0] = 1;
                unk_2e0 = 1;
                return;
            }
        }
        PlayerActor_RequestAct68(this, w.x, w.z, type != 1, 1, 6, -1);
        break;
    }
    case 3:
    case 4:
    case 21:
    case 22:
        if (unk_7ec == 0x18) {
            u8 *p = unk_7d0;
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
        if (unk_7ec == 0x16) {
            u8 *p = unk_7d0;
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
        if (unk_7ec == 0x66) {
            pa = (Unk_02005f50_Area *)unk_7d0;
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
        unk_168 = 0;
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
        if (unk_7ec == 0) {
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
    _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->unk_230, ((nB::PlayerActor *)this)->unk_8e5);
    _ZN17TwoLayerAnimModel11drawLayeredEj(((nB::PlayerActor *)this)->unk_230, 0);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, (Unk_021cb69c *)((u8 *)((nB::PlayerActor *)this) + 0x428 + 0), 0xf);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &((nB::PlayerActor *)this)->unk_664, 0xe);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &((nB::PlayerActor *)this)->unk_694, 0xb);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &a, 7);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->unk_6c4, &t);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &a, 4);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->unk_6d0, &t);
    Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &a, 0x10);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    WorldCurve_FromCurved(&((nB::PlayerActor *)this)->unk_6dc, &t);
    ((nB::PlayerActor *)this)->unk_3ec = ((nB::PlayerActor *)this)->unk_428;
    _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->unk_388, ((nB::PlayerActor *)this)->unk_8e5);
    _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->unk_388, 0);
    if (PlayerHead_GetModelId(((nB::PlayerActor *)this)->unk_424, 1) < 0x9e) {
        ((nB::PlayerActor *)this)->unk_4c4 = ((nB::PlayerActor *)this)->unk_428;
        _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->unk_460, ((nB::PlayerActor *)this)->unk_8e5);
        _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->unk_460, 0);
    }
    if (func_0205d494(((nB::PlayerActor *)this)->unk_598) != 0x4b) {
        ((nB::PlayerActor *)this)->unk_560 = ((nB::PlayerActor *)this)->unk_428;
        _ZN5Model8setAlphaEj(((nB::PlayerActor *)this)->unk_4fc, ((nB::PlayerActor *)this)->unk_8e5);
        _ZN5Model10drawScaledEPi(((nB::PlayerActor *)this)->unk_4fc, 0);
    }
    if (((nB::PlayerActor *)this)->unk_6ec > 0) {
        Model_GetJointWorldMtx(((nB::PlayerActor *)this)->unk_230, &a, 1);
        t2.x = a.unk_24;
        t2.y = a.unk_28;
        t2.z = a.unk_2c;
        WorldCurve_FromCurved(&v, &t2);
        func_020abbcc(&v, ((nB::PlayerActor *)this)->unk_6ec);
    }
    if (_ZN12Unk_02006d1414testActionFlagEj(this, 0)) {
        HeldItemModel_Draw(((nB::PlayerActor *)this)->unk_59c, &((nB::PlayerActor *)this)->unk_664);
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
        ((nB::PlayerActor *)this)->unk_604 = HeldItemModel_GetJointMtx(((nB::PlayerActor *)this)->unk_59c, mode);
        if (_ZN12Unk_02006d1415getHeldToolKindEv(this) == 4) {
            ((nB::PlayerActor *)this)->unk_634 = HeldItemModel_GetJointMtx(((nB::PlayerActor *)this)->unk_59c, 3);
        }
    }
}
