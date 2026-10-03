#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
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
    s32 getResult();
};

struct TalkWindowState {
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
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);
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
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov004_0221b6d4_Owner {
    u8 pad_00[0x70a];
    u8 unk_70a;
};

struct Unk_ov004_0221b6d4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

// Real symbol names of the callees outside this unit (all are called as free functions taking the object first).
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define func_0201b9e8 _ZN8NpcActor13func_0201b9e8Eii
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_setNetUserBytes _ZN8NpcActor15setNetUserBytesEPvi
#define NpcActor_getNetUserBytes _ZN8NpcActor15getNetUserBytesEPhj
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setCollisionRadius _ZN8NpcActor18setCollisionRadiusEi
#define func_0201b08c _ZN8NpcActor8vfunc_4cEi
#define Character_setInteractionRange _ZN9Character19setInteractionRangeEi
#define SpNpcActor_setColliderSize _ZN10SpNpcActor15setColliderSizeEii
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcAnimCtrl_isPlayingAnim _ZN11NpcAnimCtrl13isPlayingAnimEiPv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define PlayerData_getSpNpcRecord _ZN10PlayerData14getSpNpcRecordEv
#define ActorTalkRequest_setPartnerActor _ZN16ActorTalkRequest15setPartnerActorEP18Unk_02015b8c_Scene
#define PlayerSpNpcRecord_setSableTalkCount _ZN17PlayerSpNpcRecord17setSableTalkCountEj
#define PlayerSpNpcRecord_getSableTalkCount _ZN17PlayerSpNpcRecord17getSableTalkCountEv

extern "C" {
extern Unk_ov004_0221b954_Global *gCommManager;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Vec gVec3Zero;
extern const u8 sSpNpcSableDramaMsgs[];
extern const u8 sSpNpcSableWeekdayMsgs[];
extern const u8 sSpNpcSableTalkMsgs[];
extern u32 sSpNpcSableMsgFiles[];

s32 NpcActor_netSetSlotsIfOwner(void *self, s32 a, s32 b, s32 c);
BOOL NpcActor_isNetOwner(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL NpcActor_netIsTalkLocked(void *self);
void NpcActor_setNetUserBytes(void *self, void *p, s32 n);
BOOL NpcActor_getNetUserBytes(void *self, u8 *p, u32 n);
void NpcActor_setTalkRequest(void *self, void *p);
u32 NpcActor_getPlayerActor(void *self, u32 id);
s32 NpcActor_getAngleTo(void *self, void *p);
void NpcActor_setCollisionRadius(void *self, s32 v);
void func_0201b08c(void *self, u32 a, u32 b);
void Character_setInteractionRange(void *self, s32 v);
void SpNpcActor_setColliderSize(void *self, s32 a, s32 b);
void func_02015ab0(void *self, u32 v);
NpcActor *func_02015aac(void *self);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b954_Vec *v, s32 d, s32 e, u8 f);
s32 NpcActionCtrl_getAction(void *self);
BOOL NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
BOOL NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTalk(void *self, u8 a, u8 b);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
BOOL NpcAnimCtrl_isPlayingAnim(void *self, s32 a, void *b);
BOOL CommManager_isOnline(void *g);
void *PlayerData_getSpNpcRecord(void *p);
void ActorTalkRequest_setPartnerActor(void *self, void *p);
void PlayerSpNpcRecord_setSableTalkCount(void *self, u32 v);
u32 PlayerSpNpcRecord_getSableTalkCount(void *self);
void *PlayerData_GetCurrent();
s32 func_02063b8c(s32);
BOOL NetArea_IsLocalOwner();
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL Talk_IsDramaPending(void *self, void *out, s32 x);
void Talk_AdvanceDrama(void *self, void *p);
s16 *DebugVar_GetPtr(s32 a, s32 b);
s32 GameStart_IsActive();
s32 Clock_GetWeekday();
void *NpcRegistry_FindSpNpc(s32 n);
void TalkRequest_SetTargetDone(void *self);
void SewingMachine_Stop();
s32 SewingMachine_IsStopped();
void SewingMachine_Start();
void SewingMachine_SetFrame(u32 v);
s32 SewingMachine_GetFrame();
u32 SpNpcSable_GetTalkCount(void *self);
void SpNpcSable_SetTalkCount(void *self, u32 v);
}

class SpNpcSableTalk : public SpNpcTalkRequest {
public:
    SpNpcSableTalk();
    virtual ~SpNpcSableTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);

    void attachOwner(Unk_ov004_0221b6d4_Owner *o);

    /* 0xac */ Unk_ov004_0221b6d4_Owner *unk_ac;
};

class SpNpcSable : public SpNpcActor {
public:
    SpNpcSable() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void onLeaveTalk();

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

    s32 unk_654;
    SpNpcSableTalk unk_658;
    s16 unk_708;
    u8 unk_70a;
    u8 pad_70b;
    u16 unk_70c;
    u8 unk_70e;
};

struct Unk_ov004_0221bd50_Ent {
    BOOL (SpNpcSable::*enter)();
    BOOL (SpNpcSable::*exit)();
};

extern "C" {
extern Unk_ov004_0221bd50_Ent sSpNpcSableActTable[7];
extern u8 sSpNpcSableModelPath[];
extern u8 sSpNpcSableTexturePath[];
}

struct Unk_ov004_SceneEntry {
    SpNpcSable *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" SpNpcSable *SpNpcSable_Create() { return new SpNpcSable; }

BOOL SpNpcSable::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &unk_658);
    unk_658.attachOwner((Unk_ov004_0221b6d4_Owner *)this);
    SpNpcActor_setColliderSize(this, 0x119a, 0x2000);
    NpcActor_setCollisionRadius(this, 0);
    Character_setInteractionRange(this, 0x3000);
    return TRUE;
}

BOOL SpNpcSable::vfunc_00() {
    s32 v;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    unk_708 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (NetArea_IsLocalOwner()) {
            changeAct(0);
        } else {
            NpcActor_getNetUserBytes(this, &unk_70e, 1);
            changeAct(4);
        }
    } else {
        changeAct(0);
        if (Talk_IsDramaPending(this, &v, 2)) {
            unk_70a = 1;
        }
    }
    return TRUE;
}

u8 *SpNpcSable::getTexturePath() { return sSpNpcSableTexturePath; }

u8 *SpNpcSable::getModelPath() { return sSpNpcSableModelPath; }

BOOL SpNpcSable::updateAct() {
    unk_70e = SewingMachine_GetFrame() / 0x38;
    NpcActor_setNetUserBytes(this, &unk_70e, 1);
    BOOL r = FALSE;
    if (sSpNpcSableActTable[unk_654].exit) {
        r = (this->*sSpNpcSableActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcSable::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcSableActTable[state].enter) {
        ok = (this->*sSpNpcSableActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcSable::setupAct00() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0xe4, 0, data_020c6cc8, unk_70c);
    return TRUE;
}

BOOL SpNpcSable::mainAct00() {
    if (unk_708 != unk_8e) {
        changeAct(3);
        return TRUE;
    }
    if (NpcAnimCtrl_isPlayingAnim(&unk_334, 0xe4, &unk_2a0)) {
        if (SewingMachine_IsStopped()) {
            SewingMachine_Start();
            u32 t = unk_70e * 0x38;
            SewingMachine_SetFrame((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct01() {
    if (SpNpcSable_GetTalkCount(this) >= 6) {
        NpcLookAt_setTarget(&unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    }
    SewingMachine_Stop();
    if (SpNpcSable_GetTalkCount(this) < 6) {
        NpcTalkCtrl_requestTalk(&unk_618, 1, 0);
    } else {
        NpcActor *p = func_02015aac(&unk_658);
        s32 r = 0;
        if (p) {
            r = NpcActor_getAngleTo(this, p);
        }
        NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, r, 0);
    }
    return TRUE;
}

BOOL SpNpcSable::mainAct01() {
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return TRUE;
    }
    if (!CommManager_isOnline(gCommManager) && !Talk_CheckAndSetPlayerFlag(0x11, 1)) {
        u32 t = (u8)(SpNpcSable_GetTalkCount(this) + 1);
        if (t > 0xf) {
            t = 0xf;
        }
        SpNpcSable_SetTalkCount(this, t);
    }
    TalkRequest_SetTargetDone(this);
    changeAct(2);
    return TRUE;
}

BOOL SpNpcSable::setupAct02() { return TRUE; }

BOOL SpNpcSable::mainAct02() { return TRUE; }

BOOL SpNpcSable::setupAct03() {
    NpcActionCtrl_requestAction(&unk_564, 3, 1, 0, 0, 0, unk_708, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcSable::mainAct03() {
    if (NpcActionCtrl_getAction(&unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(&unk_564)) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct04() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSable::mainAct04() {
    s32 a, b;
    if (NpcActor_isNetOwner(this)) {
        a = 4;
        b = 4;
        if (func_0201b9e8(this, &a, &b)) {
            s32 av = a;
            s32 g = gCommManager->unk_64;
            if (av == g && av == b) {
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                ActorTalkRequest *p = &unk_658;
                p->vfunc_08();
                func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
                changeAct(1);
                goto end;
            }
        }
        if (NetArea_IsLocalOwner() && b == 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
            changeAct(0);
        }
    } else if (!NetArea_IsLocalOwner()) {
        if (NpcAnimCtrl_isPlayingAnim(&unk_334, 0xe4, &unk_2a0)) {
            if (SewingMachine_IsStopped()) {
                SewingMachine_Start();
                u32 t = unk_70e * 0x38;
                SewingMachine_SetFrame((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
            }
        } else if (!SewingMachine_IsStopped()) {
            SewingMachine_Stop();
        }
    }
end:
    return TRUE;
}

BOOL SpNpcSable::setupAct05() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSable::mainAct05() {
    if (NpcActor_isNetOwner(this)) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) && a == 4 && NetArea_IsLocalOwner()) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcSable::setupAct06() {
    SewingMachine_Stop();
    unk_70c = unk_ec.unk_a4 >> 12;
    return TRUE;
}

BOOL SpNpcSable::mainAct06() { return TRUE; }

void SpNpcSable::onLeaveTalk() {
    NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
}

SpNpcSableTalk::SpNpcSableTalk() {}

SpNpcSableTalk::~SpNpcSableTalk() {}

void SpNpcSableTalk::attachOwner(Unk_ov004_0221b6d4_Owner *o) {
    vfunc_08();
    unk_ac = o;
}

void SpNpcSableTalk::vfunc_78(Unk_ov004_0221b6d4_Out *out) {
    u32 idx = SpNpcSable_GetTalkCount(unk_ac);
    void *g = gCommManager;
    if (CommManager_isOnline(g) != 0 || *(s16 *)DebugVar_GetPtr(0, 0x4a) != 0) {
        idx = 0;
        out->unk_04 = 0x57;
    } else if (GameStart_IsActive() != 0) {
        idx = 2;
        out->unk_04 = 5;
    } else {
        Unk_ov004_0221b6d4_Bits bits;
        if (Talk_IsDramaPending(unk_ac, &bits, 2) != 0) {
            idx = 1;
            unk_ac->unk_70a = idx;
            out->unk_04 = (sSpNpcSableDramaMsgs + bits.b * 7)[bits.c];
            Talk_AdvanceDrama(unk_ac, &bits);
        } else if (Talk_CheckAndSetPlayerFlag(0x10, 1) == 0) {
            if (idx >= 0xc) {
                out->unk_04 = sSpNpcSableWeekdayMsgs[Clock_GetWeekday()];
            } else {
                out->unk_04 = sSpNpcSableTalkMsgs[idx * 8];
            }
            idx = 0;
        } else {
            if (idx > 0xc) {
                out->unk_04 = func_02063b8c(5) + 0x28;
            } else {
                s32 t = idx - 1;
                if (t < 0) {
                    t = 0;
                } else if (t > 0xb) {
                    t = 0xb;
                }
                u32 o = t << 3;
                s32 r = func_02063b8c(*(s32 *)(sSpNpcSableTalkMsgs + 4 + o)) + 1;
                out->unk_04 = r + sSpNpcSableTalkMsgs[o];
            }
            idx = 0;
        }
    }
    out->unk_00 = sSpNpcSableMsgFiles[idx];
    if (CommManager_isOnline(g) == 0 && *(s16 *)DebugVar_GetPtr(0, 0x4a) == 0 && idx == 0) {
        switch (out->unk_04) {
        case 2:
        case 5:
        case 8:
        case 9:
        case 12:
        case 15:
        case 17:
        case 18:
        case 19:
        case 21:
        case 23:
        case 24:
        case 27:
        case 28:
        case 30:
        case 40:
        case 43: {
            void *r = NpcRegistry_FindSpNpc(4);
            if (r) {
                ActorTalkRequest_setPartnerActor(this, r);
            }
            break;
        }
        }
    }
}

void SpNpcSableTalk::vfunc_14() {}

void SpNpcSableTalk::vfunc_18() {}

BOOL SpNpcSable::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&unk_618) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcSable::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        if (v != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, v);
            changeAct(6);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->unk_64;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                changeAct(6);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = v;
        if (v != 4 && v != gCommManager->unk_64) {
            NpcActor_netSetSlotsIfOwner(this, 1, v, v);
            changeAct(5);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->unk_64;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, NpcActor_getPlayerActor(this, 4));
                changeAct(1);
            }
        }
        break;
    case 8:
        if (v == 4) {
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
                s32 a = 4;
                s32 b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                    changeAct(0);
                }
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

extern "C" u32 SpNpcSable_GetTalkCount(void *unused) {
    return PlayerSpNpcRecord_getSableTalkCount(PlayerData_getSpNpcRecord(PlayerData_GetCurrent()));
}

extern "C" void SpNpcSable_SetTalkCount(void *unused, u32 a) {
    PlayerSpNpcRecord_setSableTalkCount(PlayerData_getSpNpcRecord(PlayerData_GetCurrent()), a);
}

// ---------------------------------------------------------------------------------------------------------------------

extern "C" const u8 sSpNpcSableWeekdayMsgs[8] = {0x27, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x00};
extern "C" const u8 sSpNpcSableDramaMsgs[0x1c] = {0, 1, 2, 3, 0xfe, 0xfe, 0xfe, 4, 5, 6, 0xfe, 0xfe, 0xfe, 0xfe, 7, 8, 9, 10, 11, 0xfe, 0xfe, 11, 12, 13, 14, 15, 16, 17};
extern "C" const u8 sSpNpcSableTalkMsgs[0x60] = {0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 2, 0, 0, 0, 9, 0, 0, 0, 2, 0, 0, 0, 12, 0, 0, 0, 2, 0, 0, 0, 15, 0, 0, 0, 2, 0, 0, 0, 18, 0, 0, 0, 2, 0, 0, 0, 21, 0, 0, 0, 2, 0, 0, 0, 24, 0, 0, 0, 2, 0, 0, 0, 27, 0, 0, 0, 2, 0, 0, 0, 30, 0, 0, 0, 2, 0, 0, 0};
extern "C" u8 data_ov004_0224cd04[14] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'd', 'r', 'a', 'm', 'a', '3', 0};
extern "C" u8 data_ov004_0224cd14[15] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'o', 's', 'i', 's', 't', 'e', 'r', 0};
extern "C" u8 data_ov004_0224cd24[17] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};
extern "C" u32 sSpNpcSableMsgFiles[3] = {(u32)data_ov004_0224cd14, (u32)data_ov004_0224cd04, (u32)data_ov004_0224cd24};
extern "C" u8 sSpNpcSableModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcSableTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry sSpNpcSableProfile = {SpNpcSable_Create, 0x77, 0x7c, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void _ZN10SpNpcSable10setupAct05Ev();
extern "C" void _ZN10SpNpcSable9mainAct05Ev();
extern "C" void _ZN10SpNpcSable9mainAct00Ev();
extern "C" void _ZN10SpNpcSable10setupAct06Ev();
extern "C" void _ZN10SpNpcSable9mainAct06Ev();
extern "C" void _ZN10SpNpcSable10setupAct01Ev();
extern "C" void _ZN10SpNpcSable10setupAct00Ev();
extern "C" void _ZN10SpNpcSable10setupAct03Ev();
extern "C" void _ZN10SpNpcSable10setupAct04Ev();
extern "C" void _ZN10SpNpcSable9mainAct04Ev();
extern "C" void _ZN10SpNpcSable9mainAct03Ev();
extern "C" void _ZN10SpNpcSable9mainAct01Ev();
extern "C" void _ZN10SpNpcSable9mainAct02Ev();
extern "C" void _ZN10SpNpcSable10setupAct02Ev();
extern "C" void *data_ov004_0224cc88[2] = {(void *)_ZN10SpNpcSable10setupAct05Ev, 0};
extern "C" void *data_ov004_0224ccf0[2] = {(void *)_ZN10SpNpcSable10setupAct02Ev, 0};
extern "C" void *data_ov004_0224cce8[2] = {(void *)_ZN10SpNpcSable9mainAct02Ev, 0};
extern "C" void *data_ov004_0224cce0[2] = {(void *)_ZN10SpNpcSable9mainAct01Ev, 0};
extern "C" void *data_ov004_0224ccd8[2] = {(void *)_ZN10SpNpcSable9mainAct03Ev, 0};
extern "C" void *data_ov004_0224ccd0[2] = {(void *)_ZN10SpNpcSable9mainAct04Ev, 0};
extern "C" void *data_ov004_0224ccc8[2] = {(void *)_ZN10SpNpcSable10setupAct04Ev, 0};
extern "C" void *data_ov004_0224cc98[2] = {(void *)_ZN10SpNpcSable9mainAct00Ev, 0};
extern "C" void *data_ov004_0224cca0[2] = {(void *)_ZN10SpNpcSable10setupAct06Ev, 0};
extern "C" void *data_ov004_0224ccb8[2] = {(void *)_ZN10SpNpcSable10setupAct00Ev, 0};
extern "C" void *data_ov004_0224ccb0[2] = {(void *)_ZN10SpNpcSable10setupAct01Ev, 0};
extern "C" void *data_ov004_0224cca8[2] = {(void *)_ZN10SpNpcSable9mainAct06Ev, 0};
extern "C" void *data_ov004_0224ccc0[2] = {(void *)_ZN10SpNpcSable10setupAct03Ev, 0};
extern "C" void *data_ov004_0224cc90[2] = {(void *)_ZN10SpNpcSable9mainAct05Ev, 0};
typedef BOOL (SpNpcSable::*Unk_ov004_Fn)();
extern "C" Unk_ov004_0221bd50_Ent sSpNpcSableActTable[7] = {
    {*(Unk_ov004_Fn *)data_ov004_0224ccb8, *(Unk_ov004_Fn *)data_ov004_0224cc98},
    {*(Unk_ov004_Fn *)data_ov004_0224ccb0, *(Unk_ov004_Fn *)data_ov004_0224cce0},
    {*(Unk_ov004_Fn *)data_ov004_0224ccf0, *(Unk_ov004_Fn *)data_ov004_0224cce8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc0, *(Unk_ov004_Fn *)data_ov004_0224ccd8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc8, *(Unk_ov004_Fn *)data_ov004_0224ccd0},
    {*(Unk_ov004_Fn *)data_ov004_0224cc88, *(Unk_ov004_Fn *)data_ov004_0224cc90},
    {*(Unk_ov004_Fn *)data_ov004_0224cca0, *(Unk_ov004_Fn *)data_ov004_0224cca8},
};
