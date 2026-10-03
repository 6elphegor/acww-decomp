#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

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

struct ChoiceList {
    s32 ChoiceList_getResult();
};

struct TalkWindowState {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    void setNextMessage(u8 *a, void *b);
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
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
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
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
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
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
MEMBER(Unk_02032238, 0x30);
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
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

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
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58(void *p);
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
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

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
    Unk_02032238 unk_49c;
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
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

class SpNpcBookerTalk;
class SpNpcBooker;

typedef void (SpNpcBookerTalk::*Unk_ov004_0224d248_Fn)();
typedef BOOL (SpNpcBooker::*Unk_ov004_0224d2d8_Fn)();

struct Unk_ov004_0224d248_Ent {
    Unk_ov004_0224d248_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0221e0b4_Ent {
    Unk_ov004_0224d2d8_Fn enter;
    Unk_ov004_0224d2d8_Fn exit;
};

#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define func_0201b08c _ZN8NpcActor8vfunc_4cEi
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define func_0201b9e8 _ZN8NpcActor13func_0201b9e8Eii
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setCollisionRadius _ZN8NpcActor18setCollisionRadiusEi
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setPlayerNameSlot _ZN16ActorTalkRequest17setPlayerNameSlotEjj
#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define NpcAnimCtrl_isPlayingAnim _ZN11NpcAnimCtrl13isPlayingAnimEiPv
#define func_020986d4 _ZN10PlayerData13func_020986d4Ev
#define func_02071c5c _ZN14PlayerPatterns13func_02071c5cEv
#define func_02071c1c _ZN12Unk_02071c1c13func_02071c1cEj
#define PlayerData_getShirt _ZN10PlayerData8getShirtEv
#define PlayerData_getHat _ZN10PlayerData6getHatEv
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define SickVillagerRecord_resetRecord _ZN18SickVillagerRecord11resetRecordEv

extern "C" {
extern Unk_ov004_0221b954_Global *gCommManager;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern u8 data_021dfd8c[];
extern u8 *sSpNpcBookerModelPath;
extern u8 *sSpNpcBookerTexturePath;
extern u32 sSpNpcBookerMsgFiles[];
extern Unk_ov004_0224d248_Ent sSpNpcBookerTalkScripts[];
extern Unk_ov004_0221e0b4_Ent sSpNpcBookerActTable[];
// 0x02250b58 is a label inside the 0x70-byte table (second ptmf of entry 0)
#define data_ov004_02250b58 ((Unk_ov004_0221e0b4_Ent *)((u8 *)sSpNpcBookerActTable + 8))

void func_0201b08c(void *self, u32 a, u32 b);
s32 NpcActor_netSetSlotsIfOwner(void *self, s32 a, s32 b, s32 c);
BOOL NpcActor_isNetOwner(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL NpcActor_netIsTalkLocked(void *self);
void NpcActor_setTalkRequest(void *self, void *p);
u32 NpcActor_getPlayerActor(void *self, u32 id);
s32 NpcActor_getAngleTo(void *self, void *p);
void NpcActor_setCollisionRadius(void *self, s32 v);
void NpcMoveAnimSet_setWalkAnim(void *self, s32 a);
void NpcMoveAnimSet_setStandAnim(void *self, s32 a);
void func_02015ab0(void *self, u32 v);
void *func_02015aac(void *self);
s32 NpcActionCtrl_getAction(void *self);
s32 NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestStand(void *self, s32 a, u16 b);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void Unk_020d7710_setSubSceneKind(void *self, s32 a, s32 b);
void Unk_020d7710_openSubScene(void *self, s32 a);
s32 ActorTalkRequest_setItemNameSlot(void *self, u16 *p, s32 a, s32 b);
void ActorTalkRequest_setPlayerNameSlot(void *self, s32 a, s32 b);
void ActorTalkRequest_setNumberSlot(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 NpcAnimCtrl_isPlayingAnim(void *self, s32 a, void *b);
s32 MenuCtrl_IsResultOk(void);
u32 MenuCtrl_GetIndex(void);
u16 *MenuCtrl_GetChosenItems(void);
void *PlayerData_GetCurrent(void);
void *func_020986d4(void *p);
void *func_02071c5c(void *p);
u32 func_02071c1c(void *p, u32 i);
void func_02070b68(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02070e4c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02003ddc(void *p, s32 a, s32 b, s32 c);
u16 *PlayerData_getShirt(void *p);
u16 *PlayerData_getHat(void *p);
void PlayerActor_RequestWearShirtAlt(u16 *p);
void PlayerActor_RequestWearHatAlt(u16 *p);
void TalkWindowState_setNextMessage(void *o, void *p, u32 d);
void *TalkWindowState_getChoiceList(void *o);
s32 ChoiceList_getResult(void *p);
void *JoinHistory_GetLatest(void);
s32 PlayerData_GetBySessionSlot(void *p);
void *PlayerData_getPlayerId(s32 v);
void Visitor_GetTodaysNpc(u16 *p);
s32 func_02039e44(void);
s32 func_02039e1c(void);
s32 Talk_IsInOwnTown(void);
s32 GameStart_IsActive(void);
s32 func_02063b8c(s32 n);
s32 func_02098044(void *p, s32 n);
void func_0209801c(void *p, s32 n);
s32 CommManager_isOnline(void *p);
s32 CommManager_isSlotActive(void *p, u32 i);
s32 NetArea_IsLocalOwner(void);
void TalkRequest_EndTalkWith(void *p);
s32 SaveVillagers_GetUnk3830Index(void *p);
void *SaveVillagers_GetUnk3830(void *p);
s32 SickVillagerRecord_resetRecord(void *p);
s32 func_020b50e8(void);
}

class SpNpcBookerTalk : public Unk_020d7710 {
public:
    SpNpcBookerTalk();
    virtual ~SpNpcBookerTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void runScript03();
    void runScript02();
    void runScript01();
    void setScript(s32 v);
    void attachOwner(NpcActor *o);

    /* 0xac */ NpcActor *unk_ac;
    /* 0xb0 */ s32 unk_b0;
};

class SpNpcBooker : public SpNpcActor {
public:
    SpNpcBooker() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58(void *p);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcBookerTalk unk_658;
    /* 0x70c */ s16 unk_70c;
    /* 0x70e */ u8 pad_70e[2];
};

struct Unk_ov004_SceneEntry {
    SpNpcBooker *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov004_0221d9bc_Range {
    static inline BOOL Chk(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) {
            r = TRUE;
        }
        return r;
    }
};

extern "C" SpNpcBooker *SpNpcBooker_Create() { return new SpNpcBooker; }

BOOL SpNpcBooker::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &unk_658);
    unk_658.attachOwner(this);
    NpcActor_setCollisionRadius(this, 0x100);
    NpcMoveAnimSet_setWalkAnim(&unk_2a0, 0xd9);
    NpcMoveAnimSet_setStandAnim(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    return TRUE;
}

BOOL SpNpcBooker::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    unk_70c = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (CommManager_isOnline(gCommManager) && func_020b50e8() == 0xb) {
        if (NpcActor_isNetOwner(this)) {
            changeAct(0);
        } else {
            changeAct(4);
        }
    } else {
        changeAct(0);
    }
    return TRUE;
}

BOOL SpNpcBooker::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    Unk_ov004_0221b954_Global *g = gCommManager;
    if (CommManager_isSlotActive(g, g->unk_64) && !CommManager_isOnline(g)) {
        void *p = data_021dfd8c;
        if (SaveVillagers_GetUnk3830Index(p) != -1) {
            SickVillagerRecord_resetRecord(SaveVillagers_GetUnk3830(p));
        }
    }
    return TRUE;
}

u8 *SpNpcBooker::getTexturePath() { return sSpNpcBookerTexturePath; }

u8 *SpNpcBooker::getModelPath() { return sSpNpcBookerModelPath; }

BOOL SpNpcBooker::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250b58[unk_654].enter) {
        r = (this->*sSpNpcBookerActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcBooker::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcBookerActTable[state].enter) {
        ok = (this->*sSpNpcBookerActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcBooker::setupAct00() {
    NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL SpNpcBooker::mainAct00() { return TRUE; }

BOOL SpNpcBooker::setupAct01() {
    ActorTalkRequest *p = &unk_658;
    p->vfunc_08();
    func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
    void *q = func_02015aac(&unk_658);
    s32 r = 0;
    if (q) {
        r = NpcActor_getAngleTo(this, q);
    }
    NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL SpNpcBooker::mainAct01() {
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return TRUE;
    }
    if (!NpcTalkCtrl_isBusy(&unk_618)) {
        TalkRequest_EndTalkWith(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcBooker::setupAct02() { return TRUE; }

BOOL SpNpcBooker::mainAct02() { return TRUE; }

BOOL SpNpcBooker::setupAct03() {
    NpcActionCtrl_requestAction(&unk_564, 3, 1, 0, 0, 0, unk_70c, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcBooker::mainAct03() {
    if (NpcActionCtrl_getAction(&unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(&unk_564)) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcBooker::setupAct04() { return TRUE; }

BOOL SpNpcBooker::mainAct04() {
    s32 a, b;
    if (NpcActor_isNetOwner(this)) {
        a = 4;
        b = 4;
        if (func_0201b9e8(this, &a, &b)) {
            s32 av = a;
            s32 g = gCommManager->unk_64;
            if (av == g && av == b) {
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                changeAct(1);
                goto end;
            }
        }
        if (NetArea_IsLocalOwner() && b == 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
            changeAct(0);
        }
    }
end:
    return TRUE;
}

BOOL SpNpcBooker::setupAct05() { return TRUE; }

BOOL SpNpcBooker::mainAct05() {
    if (NpcActor_isNetOwner(this)) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
            changeAct(3);
        }
    }
    return TRUE;
}

BOOL SpNpcBooker::setupAct06() { return TRUE; }

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBooker (continued)

BOOL SpNpcBooker::mainAct06() { return TRUE; }

SpNpcBookerTalk::SpNpcBookerTalk() {}

SpNpcBookerTalk::~SpNpcBookerTalk() {}

void SpNpcBookerTalk::attachOwner(NpcActor *o) {
    vfunc_08();
    unk_ac = o;
}

void SpNpcBookerTalk::vfunc_78(void *arg) {
    struct Msg {
        u32 unk_00;
        u8 unk_04;
    };
    Msg *out = (Msg *)arg;
    void *g = PlayerData_GetCurrent();
    if (Talk_IsInOwnTown() == 0 || GameStart_IsActive() != 0) {
        out->unk_04 = func_02063b8c(3) + 8;
    } else if (func_02098044(g, 0x1b) == 0) {
        out->unk_04 = 0;
        func_0209801c(g, 0x1b);
    } else {
        out->unk_04 = func_02063b8c(4) + 4;
    }
    out->unk_00 = sSpNpcBookerMsgFiles[0];
}

void SpNpcBookerTalk::vfunc_14() {
    switch (unk_1e) {
    case 0x1a:
        Unk_020d7710_setSubSceneKind(this, 0x1f, 0);
        Unk_020d7710_openSubScene(this, 2);
        setScript(3);
        break;
    case 0x17:
        Unk_020d7710_setSubSceneKind(this, 9, 0);
        Unk_020d7710_openSubScene(this, 2);
        setScript(2);
        break;
    }
}

void SpNpcBookerTalk::vfunc_18() {
    u8 c;
    u16 x;
    void *o = unk_3c;
    s32 t = ChoiceList_getResult(TalkWindowState_getChoiceList(o));
    u32 d = sSpNpcBookerMsgFiles[0];
    u32 r = 0xff;
    switch (unk_1e) {
    case 0xf:
        if (t == 0) {
            Unk_ov004_0221b954_Global *s = gCommManager;
            if (CommManager_isSlotActive(s, s->unk_64) != 0) {
                if (CommManager_isOnline(s) != 0) {
                    s32 q = PlayerData_GetBySessionSlot(JoinHistory_GetLatest());
                    if (q != 0) {
                        ActorTalkRequest_setPlayerNameSlot(this, (s32)PlayerData_getPlayerId(q), 1);
                    }
                    r = 0x30;
                } else {
                    r = 0x2f;
                }
            } else {
                Visitor_GetTodaysNpc(&x);
                switch (x) {
                case 0xd00a:
                    r = 0x22;
                    break;
                case 0xd00e:
                    r = 0x23;
                    break;
                case 0xd003:
                    r = 0x24;
                    break;
                case 0xd013:
                    r = 0x25;
                    break;
                case 0xd00b:
                    r = 0x26;
                    break;
                case 0xd002:
                    r = 0x27;
                    break;
                case 0xd00d:
                    r = 0x28;
                    break;
                case 0xd021:
                    r = 0x29;
                    break;
                case 0xd020:
                    r = 0x2a;
                    break;
                case 0xd022:
                    r = 0x2b;
                    break;
                case 0xd023:
                    r = 0x2c;
                    break;
                default:
                    r = 0x2e;
                    break;
                }
            }
        } else if (t == 1) {
            if (func_02039e44() != 0) {
                ActorTalkRequest_setNumberSlot(this, func_02039e1c(), 0, 2, 0, 0);
                r = 0x1a;
            } else {
                r = 0x1b;
            }
        }
        break;
    case 0x16:
        if (t == 0) {
            Unk_020d7710_setSubSceneKind(this, 6, 0);
            Unk_020d7710_openSubScene(this, 2);
            setScript(1);
        }
        break;
    }
    if (r != 0xff) {
        c = r;
        TalkWindowState_setNextMessage(o, &c, d);
    }
}

void SpNpcBookerTalk::vfunc_80() {
    s32 i = unk_b0;
    if (sSpNpcBookerTalkScripts[i].flag != 0) {
        if (sSpNpcBookerTalkScripts[i].fn != 0) {
            (this->*sSpNpcBookerTalkScripts[i].fn)();
        }
    }
}

void SpNpcBookerTalk::vfunc_88() {
    s32 i = unk_b0;
    if (sSpNpcBookerTalkScripts[i].flag == 0) {
        if (sSpNpcBookerTalkScripts[i].fn != 0) {
            (this->*sSpNpcBookerTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcBookerTalk::setScript(s32 v) {
    unk_b0 = v;
}

void SpNpcBookerTalk::runScript01() {
    u8 buf[2];
    if (MenuCtrl_IsResultOk() != 0) {
        void *g = PlayerData_GetCurrent();
        u32 idx = MenuCtrl_GetIndex();
        s32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070e4c(9, t, 5, 0, 1);
        func_02003ddc(&unk_ac->unk_514, 0x50, 0x7f, 0);
        buf[0] = 0x18;
        TalkWindowState_setNextMessage(unk_3c, buf, sSpNpcBookerMsgFiles[0]);
    } else {
        buf[1] = 1;
        TalkWindowState_setNextMessage(unk_3c, &buf[1], sSpNpcBookerMsgFiles[0]);
    }
}

void SpNpcBookerTalk::runScript02() {
    struct {
        u8 c0;
        u8 c1;
        u16 a;
        u16 b;
    } m;
    if (MenuCtrl_IsResultOk() != 0) {
        void *g = PlayerData_GetCurrent();
        u32 idx = MenuCtrl_GetIndex();
        u32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070b68(9, t, 5, 0, 1);
        func_02003ddc(&unk_ac->unk_514, 0x50, 0x7f, 0);
        u32 x;
        u32 y;
        if (t < 8) {
            x = (u16)(t + 0x12a8);
        } else {
            x = 0x12a8;
        }
        if (t < 8) {
            y = (u16)(t + 0x1429);
        } else {
            y = 0x1429;
        }
        u32 p1 = *PlayerData_getShirt(g);
        u32 p2 = *PlayerData_getHat(g);
        if (x == p1) {
            if (Unk_ov004_0221d9bc_Range::Chk(PlayerData_getShirt(g), 0x12a8, 0x12af)) {
                m.a = x;
                PlayerActor_RequestWearShirtAlt(&m.a);
            }
        }
        if (y == p2) {
            if (Unk_ov004_0221d9bc_Range::Chk(PlayerData_getHat(g), 0x1429, 0x1430)) {
                m.b = y;
                PlayerActor_RequestWearHatAlt(&m.b);
            }
        }
        m.c0 = 0x19;
        TalkWindowState_setNextMessage(unk_3c, &m, sSpNpcBookerMsgFiles[0]);
    } else {
        m.c1 = 1;
        TalkWindowState_setNextMessage(unk_3c, &m.c1, sSpNpcBookerMsgFiles[0]);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBookerTalk

void SpNpcBookerTalk::runScript03() {
    void *o = unk_3c;
    u8 c;
    u16 v;
    c = 0x20;
    if (MenuCtrl_IsResultOk() != 0) {
        if (MenuCtrl_GetIndex() > 1) {
            c = 0x1c;
        } else {
            v = *MenuCtrl_GetChosenItems();
            ActorTalkRequest_setItemNameSlot(this, &v, 0, 7);
            c = 0x1e;
        }
    }
    TalkWindowState_setNextMessage(o, &c, sSpNpcBookerMsgFiles[0]);
}

BOOL SpNpcBooker::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&unk_618) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcBooker::vfunc_58(void *p) {
    if (unk_558.unk_0b != 0) {
        return TRUE;
    }
    if (NpcTalkCtrl_isBusy(&unk_618) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcBooker::vfunc_4c(u32 cmd, u32 arg) {
    s32 a;
    s32 b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, arg);
            changeAct(6);
            break;
        }
        if (NpcActor_isNetOwner(this) != 0) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, gCommManager->unk_64);
            changeAct(6);
        }
        break;
    case 1:
        changeAct(1);
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->unk_64) {
            NpcActor_netSetSlotsIfOwner(this, 1, arg, arg);
            changeAct(5);
            break;
        }
        if (NpcActor_isNetOwner(this) != 0) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, gCommManager->unk_64);
            changeAct(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (NetArea_IsLocalOwner() != 0) {
                NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                changeAct(3);
            } else {
                NpcActor_netSetSlotsIfOwner(this, 1, 4, gCommManager->unk_64);
                changeAct(4);
            }
        }
        break;
    case 4:
        if (NpcActor_netIsTalkLocked(this) != 0) {
            if (NpcActor_isNetOwner(this) != 0) {
                a = 4;
                b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if ((arg != 4 && arg == (u32)b) || arg == 4) {
                        NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                        changeAct(0);
                    }
                }
            }
        }
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcBooker


extern "C" void _ZN11SpNpcBooker9mainAct04Ev();
extern "C" void _ZN15SpNpcBookerTalk11runScript01Ev();
extern "C" void _ZN15SpNpcBookerTalk11runScript03Ev();
extern "C" void _ZN11SpNpcBooker9mainAct05Ev();
extern "C" void _ZN11SpNpcBooker9mainAct03Ev();
extern "C" void _ZN11SpNpcBooker10setupAct05Ev();
extern "C" void _ZN15SpNpcBookerTalk11runScript02Ev();
extern "C" void _ZN11SpNpcBooker10setupAct04Ev();
extern "C" void _ZN11SpNpcBooker10setupAct06Ev();
extern "C" void _ZN11SpNpcBooker10setupAct03Ev();
extern "C" void _ZN11SpNpcBooker10setupAct02Ev();
extern "C" void _ZN11SpNpcBooker9mainAct02Ev();
extern "C" void _ZN11SpNpcBooker9mainAct01Ev();
extern "C" void _ZN11SpNpcBooker10setupAct01Ev();
extern "C" void _ZN11SpNpcBooker9mainAct00Ev();
extern "C" void _ZN11SpNpcBooker10setupAct00Ev();
extern "C" void _ZN11SpNpcBooker9mainAct06Ev();
extern "C" u8 data_ov004_0224d1e0[19] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'a', 't', 'e', 'k', 'e', 'e', 'p', 'e', 'r', '2', 0};
extern "C" u8 data_ov004_0224d1f4[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'a', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov004_0224d224[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'a', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" u32 sSpNpcBookerMsgFiles[1] = {(u32)data_ov004_0224d1e0};
extern "C" u8 *sSpNpcBookerModelPath = data_ov004_0224d1f4;
extern "C" u8 *sSpNpcBookerTexturePath = data_ov004_0224d224;
extern "C" Unk_ov004_SceneEntry sSpNpcBookerProfile = {SpNpcBooker_Create, 0x73, 0x78, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224d1d8[2] = {(void *)_ZN11SpNpcBooker9mainAct06Ev, 0};
extern "C" void *data_ov004_0224d1d0[2] = {(void *)_ZN11SpNpcBooker10setupAct00Ev, 0};
extern "C" void *data_ov004_0224d1c8[2] = {(void *)_ZN11SpNpcBooker9mainAct00Ev, 0};
extern "C" void *data_ov004_0224d1c0[2] = {(void *)_ZN11SpNpcBooker10setupAct01Ev, 0};
extern "C" void *data_ov004_0224d1b8[2] = {(void *)_ZN11SpNpcBooker9mainAct01Ev, 0};
extern "C" void *data_ov004_0224d190[2] = {(void *)_ZN11SpNpcBooker10setupAct04Ev, 0};
extern "C" void *data_ov004_0224d1a8[2] = {(void *)_ZN11SpNpcBooker10setupAct02Ev, 0};
extern "C" void *data_ov004_0224d1b0[2] = {(void *)_ZN11SpNpcBooker9mainAct02Ev, 0};
extern "C" void *data_ov004_0224d170[2] = {(void *)_ZN11SpNpcBooker9mainAct05Ev, 0};
extern "C" void *data_ov004_0224d160[2] = {(void *)_ZN15SpNpcBookerTalk11runScript01Ev, 0};
extern "C" void *data_ov004_0224d158[2] = {(void *)_ZN11SpNpcBooker9mainAct04Ev, 0};
extern "C" void *data_ov004_0224d180[2] = {(void *)_ZN11SpNpcBooker10setupAct05Ev, 0};
extern "C" void *data_ov004_0224d178[2] = {(void *)_ZN11SpNpcBooker9mainAct03Ev, 0};
extern "C" void *data_ov004_0224d1a0[2] = {(void *)_ZN11SpNpcBooker10setupAct03Ev, 0};
extern "C" void *data_ov004_0224d168[2] = {(void *)_ZN15SpNpcBookerTalk11runScript03Ev, 0};
extern "C" void *data_ov004_0224d198[2] = {(void *)_ZN11SpNpcBooker10setupAct06Ev, 0};
extern "C" void *data_ov004_0224d188[2] = {(void *)_ZN15SpNpcBookerTalk11runScript02Ev, 0};
typedef BOOL (SpNpcBooker::*Unk_ov004_O_Fn)();
typedef void (SpNpcBookerTalk::*Unk_ov004_D_Fn)();
extern "C" Unk_ov004_0224d248_Ent sSpNpcBookerTalkScripts[4] = {
    {0, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d160, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d188, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d168, 0},
};
extern "C" Unk_ov004_0221e0b4_Ent sSpNpcBookerActTable[7] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1d0, *(Unk_ov004_O_Fn *)data_ov004_0224d1c8},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1c0, *(Unk_ov004_O_Fn *)data_ov004_0224d1b8},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1a8, *(Unk_ov004_O_Fn *)data_ov004_0224d1b0},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1a0, *(Unk_ov004_O_Fn *)data_ov004_0224d178},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d190, *(Unk_ov004_O_Fn *)data_ov004_0224d158},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d180, *(Unk_ov004_O_Fn *)data_ov004_0224d170},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d198, *(Unk_ov004_O_Fn *)data_ov004_0224d1d8},
};
