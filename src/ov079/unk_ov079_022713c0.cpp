// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
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

struct Unk_0201bc1c;
class SpNpcWendell;
class SpNpcWendellTalk;

struct ChoiceList {
    s32 getResult();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct MsgString9B {
    u32 v[8];
    MsgString9B();
    ~MsgString9B();
};

struct TalkStartMsg {
    u8 *a;
    u8 b;
};

extern "C" {
void _ZN12Unk_0201442015requestKeepItemEv(void *p);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12Unk_020d771015setPocketFilterEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN12Unk_020d771012openSubSceneEi(void *p, s32 v);
void _ZN12Unk_020d771019requestReopenWindowEv(void *p);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
void _ZN16ActorTalkRequest17setPlayerNameSlotEjj(void *p, void *q, u32 a);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
s32 _ZN8PlayerId7isValidEv(void *p);
s32 _ZN8PlayerId6equalsEPS_(void *p, void *q);
s32 _ZN10VillagerId7isValidEv(void *p);
void _ZN10VillagerId7getNameEj(void *p, void *q);
void *_ZN13ContestRecord13func_020858acEv(void *p);
void *_ZN13ContestRecord17getHolderVillagerEv(void *p);
s32 _ZN13ContestRecord7getSizeEv(void *p);
void ContestRecord_GetItem(u16 *out, void *p);
void ContestRecord_SetItem(void *p, u16 *q);
void _ZN13ContestRecord7setSizeEi(void *p, s32 v);
void _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(void *p, void *q);
void _ZN13ContestRecord7setKindEj(void *p, s32 v);
void _ZN17PlayerSpNpcRecord16setEnteredBugOffEi(void *p, s32 v);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void _ZN12ItemPickSpec3setEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void ItemPickSpec_Destruct(Unk_0202368c_Obj *o);
void TalkRequest_SetTargetDone(void *p);
void PlayerActor_GetSlotHeldItem(u16 *out, void *p);
void *PlayerActor_GetLocalSessionSlot();
void Clock_GetDateTime(void *p);
s32 Pocket_FindItem(u16 *p);
s32 Pocket_FindEmpty();
void Pocket_RemoveItem(s32 v);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
s32 Contest_GetCatchSize(u16 *p);
s32 memcmp(void *a, void *b, u32 n);
u32 Random_GlobalBelow(u32 n);
void ContestRecord_BeginContestDay(void *g, u32 a);
u32 Insect_GetSpawnTable(u32 v);
s32 InsectPick_PickAnyHour(u16 *a, s32 *b, s32 *c, s32 d, void *tbl, s32 *arr, s32 cnt);
s32 SaveVillagers_PickRandomExcept(void *p, u32 a, u32 b);
void *_ZN12VillagerData13getVillagerIdEv();
void _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec(void *g, void *p);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u16 data_020c6cc8;
extern u8 gContestRecord[];
extern u8 gSaveData[];
extern u8 gSaveVillagers[];
extern u32 __ptmf_null[];
}

struct TalkWindowState {
    s32 setNextMessage(u8 *a, void *b);
    s32 setSlot(s32 idx, void *p);
    void setNamedSlot(s32 idx, void *p, u32 val);
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 v);
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
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *getChoiceList();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void onWindowClose();
    virtual void onTalkEnd();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcWendellTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcWendellTalk::*Fn)();

    SpNpcWendellTalk();
    virtual ~SpNpcWendellTalk();
    virtual void vfunc_08();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone();

    void attachOwner(SpNpcWendell *owner);
    void onPatternSlotPicked();
    void resultHandler01();
    void onFoodPicked();
    void setNextResultHandler(s32 idx);
    void setResultHandler(s32 idx);
    void loadResultHandler(Fn *dst, s32 idx);

    SpNpcWendell *unk_ac;
    Fn unk_b0;
    Fn unk_b8;
    u16 unk_c0;
    u8 pad_c2[2];
    s32 unk_c4;
};
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    void requestAction(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    CollisionState unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 getWalkAnimSpeedScale();

    SpNpcAnimHeapHandle unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov079_Vec3 {
    s32 x, y, z;
};

struct Unk_ov079_Rgba {
    u8 r, g, b, a;
    Unk_ov079_Rgba(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

class SpNpcWendell : public SpNpcActor {
public:
    SpNpcWendell() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getWalkAnimSpeedScale();

    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL checkCollisionWhileMoving();
    BOOL handleCollision();
    BOOL getOffsetPosIfFree(Unk_ov079_Vec3 *out, void *in);
    BOOL findRandomWalkTarget(s32 *x, s32 *z);
    BOOL isNearCameraTarget();
    BOOL isInViewBox(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b);
    BOOL setupAct02();
    void changeAct(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    SpNpcWendellTalk unk_658;
};

struct Unk_ov079_022725f4_Ent {
    BOOL (SpNpcWendell::*enter)();
    BOOL (SpNpcWendell::*exit)();
};

struct Unk_ov079_SceneEntry {
    SpNpcWendell *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern Unk_ov079_022725f4_Ent sSpNpcWendellActTable[5];
extern u8 sSpNpcWendellModelPath[];
extern u8 sSpNpcWendellTexturePath[];
extern Unk_ov079_SceneEntry sSpNpcWendellProfile;
SpNpcWendell *SpNpcWendell_Create();
BOOL SpNpcWendell_AcceptAnyItem(u16 *p, s32 x);
}

extern "C" {
void EventWeekSlots_MarkPlayer(u32 a);
u32 Pocket_GetItem(s32 v);
BOOL Pocket_AddItem(u16 *p, u32 a);
void *_ZN10PlayerData11getPatternsEv(void *p);
void *_ZN14PlayerPatterns15getPatternOrderEv(void *p);
u32 _ZN12PatternOrder7getSlotEj(void *p, u32 v);
void *_ZN14PlayerPatterns10getPatternEh(void *p, u32 v);
void *_ZN7Pattern7getInfoEv(void *p);
void _ZN11PatternInfo8getTitleEPv(void *p, void *q);
u16 *_ZN10PlayerData6getHatEv(void *p);
u16 *_ZN10PlayerData8getShirtEv(void *p);
u16 *_ZN10PlayerData11getHeldItemEv(void *p);
void PlayerActor_RequestWearShirtAlt(u16 *p);
void PlayerActor_RequestWearHatAlt(u16 *p);
void PlayerActor_RequestChangeHeldItem(u16 *p);
void PatternSrc_Copy(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetFishWaterClass(u16 *p);
void _ZN8ItemNameC1Ev(void *p);
void _ZN8ItemNameD1Ev(void *p);
void _ZN12Unk_0201347416disableFootstepsEv(void *p);
void _ZN12Unk_0201347415enableFootstepsEv(void *p);
void func_020e7518(void *p);
s32 Random_Next(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *p);
BOOL NpcActor_IsFrontAngle(s16 a);
s32 Math_AngleXZ(void *a, void *b);
void *_ZN11NpcMoveCtrl14getDestinationEv(void *p);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *a, void *b, u32 c);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *p);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *a, void *b);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *a);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *a);
void Npc_RotateOffsetXZ(void *out, void *base, void *off, s32 ang);
BOOL Npc_IsPosBlocked(void *pos);
void FieldPos_SnapToUnitCenter(void *a, void *b);
BOOL TownMap_IsPosWalkable(void *v, s32 a);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *p, u32 a, u32 b, void *c, void *d, u32 e, u32 f, u32 g);
BOOL EventAnnounce_IsBusy();
void *TownSessionState_Get();
void TownSessionState_GetVisitorPos(void *p);
void _ZN10VisitorPos13pickRandomPosEv();
void _ZN12Unk_0201442014requestEatItemEv(void *p);
void _ZN12Unk_0201442017requestReturnItemEv(void *p);
void _ZN12Unk_020d771015setSubSceneKindEjj(void *p, u32 a, u32 b);
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gRandom[];
extern u8 gVec3Zero[];
extern u32 gCamera;
extern u8 gCameraLookAt[];
extern s16 data_02135f44[];
extern FxVec3 sSpNpcWendellSideStepOffsets[2];
}

struct Unk_ov079_02271718_Buf {
    u8 t;
    u8 pad_01;
    u16 v[16];
};

static inline BOOL Unk_ov079_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov079_02271718_Chk(SpNpcWendellTalk *o, u16 *slot, u16 val) {
    BOOL r;
    if (Item_IsFurniture(&o->unk_c0)) {
        *slot = val;
        if (Item_GetFurnitureIndex(&o->unk_c0) == Item_GetFurnitureIndex(slot)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (o->unk_c0 == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
SpNpcWendell *SpNpcWendell_Create() {
    return new SpNpcWendell();
}

s32 SpNpcWendell::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcWendell::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    return TRUE;
}

BOOL SpNpcWendell::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(3);
    return TRUE;
}

BOOL SpNpcWendell::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (EventAnnounce_IsBusy() == 0) {
        TownSessionState_GetVisitorPos(TownSessionState_Get());
        _ZN10VisitorPos13pickRandomPosEv();
    }
    return TRUE;
}

u8 *SpNpcWendell::getTexturePath() { return sSpNpcWendellTexturePath; }

u8 *SpNpcWendell::getModelPath() { return sSpNpcWendellModelPath; }

BOOL SpNpcWendell::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcWendellActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcWendellActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcWendell::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcWendellActTable[state].enter != NULL) {
        ok = (this->*sSpNpcWendellActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcWendell::setupAct02() {
    unk_651 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, NULL, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcWendell::isInViewBox(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b) {
    BOOL r = FALSE;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        if (b->z > a->z - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL SpNpcWendell::isNearCameraTarget() {
    Unk_ov079_Vec3 *b = (Unk_ov079_Vec3 *)&unk_5c;
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (gCamera != 0) {
        v.x = ((Unk_ov079_Vec3 *)gCameraLookAt)->x;
        v.y = ((Unk_ov079_Vec3 *)gCameraLookAt)->y;
        v.z = ((Unk_ov079_Vec3 *)gCameraLookAt)->z;
        r = isInViewBox(&v, b);
    }
    return r;
}

BOOL SpNpcWendell::findRandomWalkTarget(s32 *px, s32 *pz) {
    Unk_ov079_Vec3 v;
    BOOL r = FALSE;
    s32 i;
    v.x = r;
    v.y = r;
    v.z = r;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_64;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r)) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcWendell::getOffsetPosIfFree(Unk_ov079_Vec3 *out, void *in) {
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    Npc_RotateOffsetXZ(&v, &unk_5c, in, unk_94);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        r = TRUE;
    }
    return r;
}

BOOL SpNpcWendell::handleCollision() {
    void *p564 = &unk_564;
    void *p350 = &unk_350;
    s32 k = _ZN9NpcLookAt15getObstacleBitsEv(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (!_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(p350, this, 1)) {
        switch (k) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            r = TRUE;
            break;
        case 1:
            if (getOffsetPosIfFree(&v, &sSpNpcWendellSideStepOffsets[1])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        case 2:
            if (getOffsetPosIfFree(&v, sSpNpcWendellSideStepOffsets)) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        }
    } else if (_ZN11NpcMoveCtrl10hasNextLegEv(p350)) {
        _ZN11NpcMoveCtrl16resetDestinationEv(p350);
    }
    return r;
}

BOOL SpNpcWendell::checkCollisionWhileMoving() {
    if (unk_98 != 0) {
        if (handleCollision()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcWendell::mainAct02() {
    void *p = &unk_564;
    BOOL a = isNearCameraTarget();
    func_020e7518(&unk_651);
    if (a) {
        if (checkCollisionWhileMoving() == 0) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(p)) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_ov079_Vec3 v;
                    v.x = ((Unk_ov079_Vec3 *)gVec3Zero)->x;
                    v.y = ((Unk_ov079_Vec3 *)gVec3Zero)->y;
                    v.z = ((Unk_ov079_Vec3 *)gVec3Zero)->z;
                    if (findRandomWalkTarget(&v.x, &v.z)) {
                        s32 t = Math_AngleXZ(&unk_5c, &v);
                        if (NpcActor_IsFrontAngle((s16)(t - unk_8e))) {
                            t = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                t = 2;
                            }
                            if (t != _ZN13NpcActionCtrl9getActionEv(&unk_564)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, t, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else if (_ZN13NpcActionCtrl9getActionEv(&unk_564) != 4) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 4, 1, v.x, v.z, 0, t, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 1 || _ZN13NpcActionCtrl9getActionEv(&unk_564) == 2 || _ZN13NpcActionCtrl9getActionEv(&unk_564) == 4) {
                    if (unk_651 == 0) {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov079_Vec3 *q = (Unk_ov079_Vec3 *)_ZN11NpcMoveCtrl14getDestinationEv(&unk_350);
                        Unk_ov079_Vec3 w;
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&unk_5c, &w) - unk_8e)) == 0) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        changeAct(3);
    }
    return FALSE;
}

BOOL SpNpcWendell::setupAct03() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347416disableFootstepsEv(&unk_558);
    return TRUE;
}

BOOL SpNpcWendell::mainAct03() {
    if (isNearCameraTarget()) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcWendell::setupAct04() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL SpNpcWendell::mainAct04() { return TRUE; }

BOOL SpNpcWendell::setupAct00() { return TRUE; }

BOOL SpNpcWendell::mainAct00() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcWendell::mainAct01() { return TRUE; }

void SpNpcWendellTalk::onTaskDone() {
    if (unk_b0 != NULL) {
        (this->*unk_b0)();
        Fn t = *(Fn *)__ptmf_null;
        unk_b0 = t;
        if (unk_b8 != NULL) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}


// Named pointer-to-member constants of the static tables (definition order sets the data layout)
extern "C" {
void _ZN16SpNpcWendellTalk12onFoodPickedEv();
extern void *data_ov079_02272980[2];
void _ZN16SpNpcWendellTalk15resultHandler01Ev();
extern void *data_ov079_02272988[2];
void _ZN12SpNpcWendell9mainAct04Ev();
extern void *data_ov079_02272990[2];
void _ZN12SpNpcWendell10setupAct04Ev();
extern void *data_ov079_02272998[2];
void _ZN16SpNpcWendellTalk19onPatternSlotPickedEv();
extern void *data_ov079_022729a0[2];
void _ZN12SpNpcWendell9mainAct00Ev();
extern void *data_ov079_022729a8[2];
void _ZN12SpNpcWendell9mainAct01Ev();
extern void *data_ov079_022729b0[2];
void _ZN12SpNpcWendell10setupAct02Ev();
extern void *data_ov079_022729b8[2];
void _ZN12SpNpcWendell9mainAct02Ev();
extern void *data_ov079_022729c0[2];
void _ZN12SpNpcWendell10setupAct03Ev();
extern void *data_ov079_022729c8[2];
void _ZN12SpNpcWendell10setupAct00Ev();
extern void *data_ov079_022729d0[2];
void _ZN12SpNpcWendell9mainAct03Ev();
extern void *data_ov079_022729d8[2];
}
typedef BOOL (SpNpcWendell::*Unk_ov079_02272ac4_Fn)();

extern "C" void *data_ov079_022729a0[2] = {(void *)_ZN16SpNpcWendellTalk19onPatternSlotPickedEv, 0};

extern "C" void *data_ov079_02272990[2] = {(void *)_ZN12SpNpcWendell9mainAct04Ev, 0};

extern "C" void *data_ov079_02272988[2] = {(void *)_ZN16SpNpcWendellTalk15resultHandler01Ev, 0};

extern "C" u8 sSpNpcWendellTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'w', 'r', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" Unk_ov079_SceneEntry sSpNpcWendellProfile = {SpNpcWendell_Create, 0x6b, 0x71, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov079_Rgba data_ov079_02272b80(31, 20, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b8c(20, 20, 31, 31);

extern "C" void *data_ov079_022729b8[2] = {(void *)_ZN12SpNpcWendell10setupAct02Ev, 0};

extern "C" void *data_ov079_022729d8[2] = {(void *)_ZN12SpNpcWendell9mainAct03Ev, 0};

extern "C" Unk_ov079_Rgba data_ov079_02272b94(31, 31, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b98(20, 31, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b88(20, 31, 31, 31);

extern "C" void *data_ov079_022729c0[2] = {(void *)_ZN12SpNpcWendell9mainAct02Ev, 0};

extern "C" Unk_ov079_Rgba data_ov079_02272b90(20, 24, 24, 31);

extern "C" Unk_ov079_022725f4_Ent sSpNpcWendellActTable[5] = {
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729d0, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729a8},
    {NULL, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729b0},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729b8, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729c0},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729c8, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729d8},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_02272998, *(Unk_ov079_02272ac4_Fn *)data_ov079_02272990},
};

extern "C" void *data_ov079_022729a8[2] = {(void *)_ZN12SpNpcWendell9mainAct00Ev, 0};

extern "C" u8 sSpNpcWendellModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'w', 'r', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" void *data_ov079_02272980[2] = {(void *)_ZN16SpNpcWendellTalk12onFoodPickedEv, 0};

extern "C" void *data_ov079_02272998[2] = {(void *)_ZN12SpNpcWendell10setupAct04Ev, 0};


void SpNpcWendellTalk::loadResultHandler(Fn *dst, s32 idx) {
    static Fn tbl[3] = {*(Fn *)data_ov079_02272980, *(Fn *)data_ov079_02272988, *(Fn *)data_ov079_022729a0};
    *dst = tbl[idx];
}

extern "C" void *data_ov079_022729c8[2] = {(void *)_ZN12SpNpcWendell10setupAct03Ev, 0};

extern "C" void *data_ov079_022729b0[2] = {(void *)_ZN12SpNpcWendell9mainAct01Ev, 0};

extern "C" void *data_ov079_022729d0[2] = {(void *)_ZN12SpNpcWendell10setupAct00Ev, 0};

extern "C" FxVec3 sSpNpcWendellSideStepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};


void SpNpcWendellTalk::setResultHandler(s32 idx) {
    loadResultHandler(&unk_b0, idx);
}

void SpNpcWendellTalk::setNextResultHandler(s32 idx) {
    loadResultHandler(&unk_b8, idx);
}

BOOL SpNpcWendell_AcceptAnyItem(u16 *p, s32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcWendellTalk::onFoodPicked() {
    TalkWindowState *m = unk_3c;
    u8 v = 1;
    unk_c4 = -1;
    if (MenuCtrl_IsResultOk()) {
        unk_c4 = MenuCtrl_GetIndex();
        unk_c0 = Pocket_GetItem(unk_c4);
        v = 2;
        BOOL f = FALSE;
        u16 c = unk_c0;
        if (c >= 0x12e8 && c <= 0x131f) {
            f = TRUE;
        }
        if (f || (c >= 0x1531 && c <= 0x153a) || (c >= 0x1518 && c <= 0x151c) || (c >= 0x1542 && c <= 0x1546) ||
            (c >= 0x1548 && c <= 0x1548) || (c >= 0x153b && c <= 0x1541)) {
            v = 3;
        }
        BOOL g = FALSE;
        c = unk_c0;
        if (c >= 0x136a && c <= 0x136a) {
            g = TRUE;
        }
        if (g || (c >= 0x1373 && c <= 0x1373) || (c >= 0x1375 && c <= 0x1375) || (c >= 0x1377 && c <= 0x1377) ||
            (c >= 0x1379 && c <= 0x1379) || (c >= 0x137b && c <= 0x137b)) {
            v = 0xb;
            unk_c4 = -1;
        }
        if (unk_c4 >= 0) {
            Pocket_RemoveItem(unk_c4);
            unk_c4 = -1;
        }
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &unk_c0, 0, 4, 0);
        setNextResultHandler(1);
    } else {
        _ZN12Unk_020d771019requestReopenWindowEv(this);
    }
    m->setNextMessage(&v, (u8 *)"sp_npc_walrus");
}

void SpNpcWendellTalk::resultHandler01() {
    _ZN12Unk_020d771019requestReopenWindowEv(this);
}

void SpNpcWendellTalk::onPatternSlotPicked() {
    TalkWindowState *m = unk_3c;
    Unk_ov079_02271718_Buf buf;
    u32 r4;
    buf.t = 0xd;
    if (MenuCtrl_IsResultOk()) {
        void *g = PlayerData_GetCurrent();
        u32 a0 = MenuCtrl_GetIndex();
        u32 r6 = _ZN12PatternOrder7getSlotEj(_ZN14PlayerPatterns15getPatternOrderEv(_ZN10PlayerData11getPatternsEv(g)), a0);
        r4 = 0;
        if (Unk_ov079_02271718_Chk(this, &buf.v[4], 0x131f)) {
            r4 = 0x15;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[5], 0x12ff)) {
            r4 = 0x16;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[6], 0x12f6)) {
            r4 = 0x17;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[7], 0x12f8)) {
            r4 = 0x18;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[8], 0x12fc)) {
            r4 = 0x19;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[9], 0x1309)) {
            r4 = 0x1a;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[10], 0x1312)) {
            r4 = 0x1b;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[11], 0x131c) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[12], 0x131d) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[13], 0x131e)) {
            r4 = 0x1d;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[14], 0x1302)) {
            r4 = 0x1e;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[15], 0x1303)) {
            r4 = 0x1f;
        } else {
            BOOL f = FALSE;
            u32 v = unk_c0;
            if (v >= 0x1548 && v <= 0x1548) {
                f = TRUE;
            }
            if (f) {
                r4 = 0xb;
            } else if (v >= 0x1542 && v <= 0x1546) {
                r4 = 8;
            } else if (v >= 0x1531 && v <= 0x153a) {
                r4 = 0xa;
            } else if (Item_GetFishWaterClass(&unk_c0) == 0) {
                r4 = (u8)Random_GlobalBelow(8);
            } else if (Item_GetFishWaterClass(&unk_c0) == 1) {
                r4 = (u8)(Random_GlobalBelow(9) + 0xc);
            } else if (Item_GetFishWaterClass(&unk_c0) == 2) {
                r4 = 0x1c;
            } else if (Unk_ov079_Rng(&unk_c0, 0x1518, 0x151c)) {
                r4 = 9;
            }
        }
        PatternSrc_Copy(7, r4, 9, r6, 1);
        buf.t = 5;
        buf.v[0] = 0x3530;
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &buf.v[0], 0, 5, 0);
        u32 a, b, c;
        if (r6 < 8) {
            a = (u16)(r6 + 0x12a8);
        } else {
            a = 0x12a8;
        }
        if (r6 < 8) {
            b = (u16)(r6 + 0x1429);
        } else {
            b = 0x1429;
        }
        if (r6 < 8) {
            c = (u16)(r6 + 0x13a0);
        } else {
            c = 0x13a0;
        }
        u32 x = *_ZN10PlayerData8getShirtEv(g);
        u32 y = *_ZN10PlayerData6getHatEv(g);
        u32 z = *_ZN10PlayerData11getHeldItemEv(g);
        if (a == x) {
            if (Unk_ov079_Rng(_ZN10PlayerData8getShirtEv(g), 0x12a8, 0x12af)) {
                buf.v[1] = a;
                PlayerActor_RequestWearShirtAlt(&buf.v[1]);
            }
        }
        if (b == y) {
            if (Unk_ov079_Rng(_ZN10PlayerData6getHatEv(g), 0x1429, 0x1430)) {
                buf.v[2] = b;
                PlayerActor_RequestWearHatAlt(&buf.v[2]);
            }
        }
        if (c == z) {
            if (Unk_ov079_Rng(_ZN10PlayerData11getHeldItemEv(g), 0x13a0, 0x13a7)) {
                buf.v[3] = c;
                PlayerActor_RequestChangeHeldItem(&buf.v[3]);
            }
        }
        void *h = _ZN14PlayerPatterns10getPatternEh(_ZN10PlayerData11getPatternsEv(g), r6);
        u32 obj[9];
        _ZN8ItemNameC1Ev(obj);
        _ZN11PatternInfo8getTitleEPv(_ZN7Pattern7getInfoEv(h), obj);
        unk_3c->setNamedSlot(1, obj, 7);
        _ZN8ItemNameD1Ev(obj);
    }
    m->setNextMessage(&buf.t, (u8 *)"sp_npc_walrus");
}

SpNpcWendellTalk::SpNpcWendellTalk() {
    unk_c0 = 0xfff1;
}

SpNpcWendellTalk::~SpNpcWendellTalk() {}

void SpNpcWendellTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    unk_c4 = -1;
    unk_c0 = 0xfff1;
    Fn t = *(Fn *)__ptmf_null;
    unk_b0 = t;
    unk_b8 = t;
}

void SpNpcWendellTalk::attachOwner(SpNpcWendell *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c0 = 0xfff1;
    unk_c4 = -1;
}

void SpNpcWendellTalk::start(TalkStartMsg *out) {
    out->a = (u8 *)"sp_npc_walrus";
    if (!Talk_CheckAndSetPlayerFlag(0xa, 0)) {
        out->b = 0;
    } else {
        out->b = Random_GlobalBelow(3) + 6;
    }
}

void SpNpcWendellTalk::onMessageStart() {
    if (unk_1e == 0xf) {
        _ZN12Unk_0201442014requestEatItemEv(this);
    }
}

void SpNpcWendellTalk::onMessageEnd() {
    u8 *const str = (u8 *)"sp_npc_walrus";
    u8 r = 0xff;
    u8 v;
    switch (unk_1e) {
    case 3:
        r = 0xf;
        break;
    case 2:
        _ZN12Unk_0201442015requestKeepItemEv(this);
        break;
    case 15:
        r = 4;
        if (Unk_ov079_Rng(&unk_c0, 0x153b, 0x1541)) {
            unk_c0 = 0x13ac;
            if (Random_GlobalBelow(2)) {
                unk_c0 = 0x3530;
            }
            r = 9;
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &unk_c0, 0, 7);
        }
        EventWeekSlots_MarkPlayer(0x41);
        break;
    case 14:
        _ZN12Unk_020d771015setSubSceneKindEjj(this, 0xa, 0);
        _ZN12Unk_020d771012openSubSceneEi(this, 2);
        setResultHandler(2);
        break;
    case 11:
        _ZN12Unk_0201442017requestReturnItemEv(this);
        break;
    case 9:
        if (Pocket_AddItem(&unk_c0, 0)) {
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &unk_c0, 0, 5, 0);
        }
        r = 0xa;
        break;
    case 5:
    case 10:
    case 13:
        Talk_CheckAndSetPlayerFlag(0xa, 1);
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->setNextMessage(&v, str);
    }
}

void SpNpcWendellTalk::onChoice() {
    u8 v;
    s32 t = getChoiceList()->getResult();
    u8 *const str = (u8 *)"sp_npc_walrus";
    u8 r = 0xff;
    switch (unk_1e) {
    case 0:
        if (t == 0) {
            _ZN12Unk_020d771015setPocketFilterEjjj(this, SpNpcWendell_AcceptAnyItem, 0xd, 1);
            _ZN12Unk_020d771012openSubSceneEi(this, 0);
            setResultHandler(0);
        }
        break;
    case 4:
        if (t == 0) {
            r = 0xe;
        }
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->setNextMessage(&v, str);
    }
}

BOOL SpNpcWendell::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcWendell::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        changeAct(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(4);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

