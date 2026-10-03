// mwcc-version: 1.2/base
// ov004 TU06: .text 0x02214948-0x02215f04 (classes BirthdayHostVillager and its member BirthdayHostVillagerTalk)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: NpcActor::postCreate takes one argument.
#define postCreate() postCreate(s32 a)
#include "Unk_020d8c7c.h"
#undef postCreate

extern "C" {
struct Unk_ov004_02215c94_V {
    s32 x, y, z;
};
struct FxVec3 : Unk_ov004_02215c94_V {
    FxVec3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~FxVec3();
};
}

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------------------------------------------------------------
// Class chain of BirthdayHostVillager (vtable 0x0224c034). Every slot's final overrider carries the name the symbols use.
class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58();

    u32 pad_04[0x58 / 4];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xe0 - 0x90];
};

class NpcActor : public Character {
public:
    virtual void postCreate(s32 a);
    virtual BOOL onExecute();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    u16 pad_e0[5];
    u16 unk_ea;
    u8 unk_ec[0x350 - 0xec];
    u8 unk_350[0x3b0 - 0x350];
    u8 unk_3b0[0x558 - 0x3b0];
    u8 unk_558[0xc];
    u8 unk_564[0x618 - 0x564];
    u8 unk_618[0x640 - 0x618];
};

class VillagerActor : public NpcActor {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL vfunc_0c();
    virtual void *vfunc_64();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ u8 unk_64c[0x680 - 0x64c];
    /* 0x680 */ u8 unk_680[0x824 - 0x680];
    /* 0x824 */ u8 unk_824[8];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ u8 unk_838[0x894 - 0x838];
};

// ---------------------------------------------------------------------------------------------------------------------
// Member BirthdayHostVillagerTalk (at +0x89c of the menu): a menu state holder with the owner at +0x1a0. Its vtable
// 0x0224bfa4 names its slots after four library classes; the chain below reproduces which class owns which slot.
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void onActionTag4(u32 a);
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
};

class Unk_020d7710 : public Unk_02015b54 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
};

class ActorTalkRequest : public Unk_020d7710 {
public:
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

struct Unk_ov004_0221572c_Sub {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    u8 pad_0c[8];
    /* 0x14 */ s32 unk_14;
};

class VillagerTalk : public TalkMsgRequest {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void onActionTag4(u32 a);
    virtual void vfunc_60();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_0221572c_Sub *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class BirthdayHostVillager;

class BirthdayHostVillagerTalk : public VillagerTalk {
public:
    BirthdayHostVillagerTalk() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void attachOwner(BirthdayHostVillager *owner);
    void *getFriendship();
    void addFriendship(s32 v);
    BOOL isLikedGift(u16 *p);
    void *getPlayerMemory();
    void setReceivedGift();
    u32 hasReceivedGift();
    void setTalked();
    BOOL isNotTalkedYet();
    void setPartyGreeted();
    BOOL isPartyNotGreeted();

    BirthdayHostVillager *unk_1a0;
};

typedef BOOL (BirthdayHostVillager::*Unk_ov004_0224c034_Fn)();

class BirthdayHostVillager : public VillagerActor {
public:
    BirthdayHostVillager() : unk_a48(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL drawModel();
    void func_ov004_02215b9c();
    BOOL changeAct(s32 idx);
    void execAct();
    BOOL setupAct00();

    void mainAct0D();
    BOOL setupAct0D();
    void mainAct0C();
    BOOL setupAct0C();
    void mainAct0B();
    BOOL setupAct0B();
    void mainAct0A();
    BOOL setupAct0A();
    void mainAct09();
    BOOL setupAct09();
    void mainAct08();
    BOOL setupAct08();
    void mainAct07();
    BOOL setupAct07();
    void mainAct06();
    BOOL setupAct06();
    void mainAct05();
    BOOL setupAct05();
    void mainAct04();
    BOOL setupAct04();
    void mainAct03();
    BOOL setupAct03();
    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ u8 unk_898;
    /* 0x899 */ u8 pad_899[3];
    /* 0x89c */ BirthdayHostVillagerTalk unk_89c;
    /* 0xa40 */ Unk_ov004_0224c034_Fn unk_a40;
    /* 0xa48 */ u16 unk_a48;
    /* 0xa4a */ u8 unk_a4a;
    /* 0xa4b */ u8 unk_a4b;
    /* 0xa4c */ s16 unk_a4c;
    /* 0xa4e */ u16 unk_a4e;
    /* 0xa50 */ s32 unk_a50[3];
    /* 0xa5c */ s32 unk_a5c[3];
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

extern "C" {
BirthdayHostVillager *BirthdayHostVillager_Get();
BOOL BirthdayHost_GiftFilter(u16 *p, s32 flag);
u16 BirthdayHost_PickReturnGift(s32 n);
void func_ov004_0221570c(void *a, void *b);
s32 FtrMgr_GetSurfaceHeightAtPos(Unk_ov004_02215c94_V *v);
Unk_ov004_022146ec_Actor *BirthdayGuestVillager_Get(void);
u16 Room_PickRandomWalkTarget(void *, void *, s32);
}

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define Unk_020d7710_requestGiveItem _ZN12Unk_020d771015requestGiveItemEPtjjj
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setVillagerNameSlot _ZN16ActorTalkRequest19setVillagerNameSlotEjj
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestEmotion _ZN13NpcActionCtrl14requestEmotionEiht
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define func_0201b138 _ZN8NpcActor6onDrawEv
#define NpcActor_findAvoidPos _ZN8NpcActor12findAvoidPosEP16Unk_020d77a4_Vec
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_getDistanceToPlayer _ZN8NpcActor19getDistanceToPlayerEj
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define func_0202d928 _ZN13VillagerActor9preDeleteEv
#define func_0202d948 _ZN13VillagerActor8vfunc_00Ev
#define func_0202dab0 _ZN13VillagerActor8vfunc_04Ev
#define ItemPickSpec_set _ZN12ItemPickSpec3setEii
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define TalkWindowState_setNextMessageIfUnset _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_isPartyGreeted _ZN14VillagerMemory14isPartyGreetedEv
#define VillagerMemory_setPartyGreeted _ZN14VillagerMemory15setPartyGreetedEv
#define VillagerMemory_isPartyGiftReceived _ZN14VillagerMemory19isPartyGiftReceivedEv
#define VillagerMemory_setPartyGiftReceived _ZN14VillagerMemory20setPartyGiftReceivedEv
#define VillagerMemory_isTalkedToday _ZN14VillagerMemory13isTalkedTodayEv
#define VillagerMemory_setTalkedToday _ZN14VillagerMemory14setTalkedTodayEv
#define VillagerMemory_addFriendship _ZN14VillagerMemory13addFriendshipEi
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define VillagerPlan_getState _ZN12VillagerPlan8getStateEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv

struct Unk_ov004_02214ab4_Vec {
    s32 x, y, z;
};
extern "C" {
Unk_ov004_02214ab4_Vec *func_020947f0(u32);
s32 NpcActor_getDistanceToPlayer(void *, u32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 Math_AngleXZ(void *, void *);
s32 func_020e780c(s32, s32);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
void *func_02095204(s32);
s32 NpcActor_getAngleTo(void *, void *);
s32 NpcActionCtrl_requestEmotion(void *, s32, s32, u32);
s32 NpcActionCtrl_requestStand(void *, s32, u32);
s32 func_020e7b98(s32, s32);
s32 NpcLookAt_setTarget(void *, s32, s32, void *, void *, s32, s32, s32);
s32 func_02063b8c(s32);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActor_findAvoidPos(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e9650(void *, void *);
void TalkWindowState_setNextMessage(void *, void *, s32);
s32 MenuCtrl_BuildPocketMask(void *);
s32 MenuCtrl_OpenPocketSelect(s32, u32);
s32 TalkRequest_EndTalkWith(void *);
s32 TalkRequest_AddPlayerTalk6(void *, u32);
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
extern u8 gTalkMsgIndexEnd[];
extern u8 sBirthdayHostMsgFile[];
void *TalkWindowState_getChoiceList(void *);
s32 ChoiceList_getResult(void *);
void TalkWindowState_setNextMessageIfUnset(void *, void *, s32);
void Unk_020d7710_requestGiveItem(void *, void *, s32, s32, s32);
void func_02099014(void *, s32);
void *VillagerMemory_getFriendship(void *);
void VillagerMemory_addFriendship(void *, s8);
void ActorTalkRequest_setItemNameSlot(void *, void *, s32, s32);
void ItemPickSpec_set(void *, s32, s32);
void func_02063388(void *);
void ItemPick_One(u16 *, void *, s32, s32, s32, s32, s32);
void *PlayerData_GetCurrent();
void func_0206277c(u16 *, void *, s32);
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, void *, s32, void *);
void ActorTalkRequest_setVillagerNameSlot(void *, void *, s32);
void *NpcRegistry_GetVillager(s32);
s32 NpcRegistry_GetSlotCount();
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
void *MenuCtrl_GetIndex();
u16 func_02099048();
s32 Item_GetPrice(u16 *);
void func_02099064(void *);
void Unk_02014420_requestTakeItem(void *, void *, s32, s32, s32);
void *Villager_GetPlan(void *);
u32 VillagerPlanBlock_GetPlan(void *);
u32 VillagerPlan_getState(u32);
s32 Item_IsFurniture(void *);
void VillagerTalk_begin(void *, void *, u32);
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void Unk_02013474_enableFootsteps(void *p);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
void NpcActor_setTalkRequest(void *self, void *p);
void *NpcActor_getPlayerActor(void *self, s32 n);
void func_02015ab0(void *p, void *q);
void Camera_FocusOnPoint(void *p);
void Camera_SetModeDefault();
s32 PlayerData_getPlayerId(...);
void *Villager_FindOrCreateMemory(void *p, s32 v);
void VillagerMemory_RecordTalk(void *p, s32 a, s32 b, s32 c);
s32 VillagerMemory_setPartyGiftReceived(void *p);
s32 VillagerMemory_isPartyGiftReceived(void *p);
s32 VillagerMemory_setTalkedToday(void *p);
s32 VillagerMemory_isTalkedToday(void *p);
s32 VillagerMemory_setPartyGreeted(void *p);
s32 VillagerMemory_isPartyGreeted(void *p);
s32 NpcTalkCtrl_isBusy(void *p);
s32 func_0201b138(void *p);
s32 Item_GetFurnitureIndex(u16 *p);
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
}

struct Unk_ov004_SceneEntry {
    BirthdayHostVillager *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" BirthdayHostVillager *BirthdayHostVillager_Create();
extern "C" void _ZN20BirthdayHostVillager9drawModelEv();
extern "C" void *data_ov004_0224befc[2];
extern "C" Unk_ov004_Quad data_ov004_022503c0(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503dc(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503c4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503bc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503cc(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503d0(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry sBirthdayHostVillagerProfile = { BirthdayHostVillager_Create, 0x80, 0x84, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
BirthdayHostVillager *sBirthdayHostVillager;
}

typedef Unk_ov004_0221572c_Sub Unk_ov004_02214a4c_Obj;

static inline BOOL Unk_ov004_022158c4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

typedef void (BirthdayHostVillager::*Unk_ov004_022150f0_Fn)();
typedef BOOL (BirthdayHostVillager::*Unk_ov004_02215208_Fn)();

extern "C" BirthdayHostVillager *BirthdayHostVillager_Create() {
    return new BirthdayHostVillager();
}

extern "C" BirthdayHostVillager *BirthdayHostVillager_Get() { return sBirthdayHostVillager; }

extern "C" BOOL BirthdayHostVillager_HasReceivedGift() {
    BirthdayHostVillager *o = sBirthdayHostVillager;
    if (o) {
        return o->unk_89c.hasReceivedGift();
    }
    return FALSE;
}

extern "C" BOOL BirthdayHost_GiftFilter(u16 *p, s32 flag) {
    if (flag == 0) {
        BOOL eq;
        if (Item_IsFurniture(p)) {
            u16 v = 0xfff1;
            s32 a = Item_GetFurnitureIndex(p);
            if (a == Item_GetFurnitureIndex(&v)) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        } else {
            if (*p == 0xfff1) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        }
        if (eq == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL BirthdayHostVillager::vfunc_04() {
    if (!func_0202dab0(this)) {
        return FALSE;
    }
    unk_5c[0] = data_020c8cb4 + 0x1000;
    unk_5c[2] = data_020c8cb8 - 0x7000;
    static FxVec3 vs[6] = {
        FxVec3(0, 0, 0), FxVec3(-0x2000, 0, 0), FxVec3(-0x4000, 0, 0),
        FxVec3(0x2000, 0, 0), FxVec3(0, 0, 0x2000), FxVec3(-0x2000, 0, 0x2000)
    };
    u32 i;
    for (i = 0; i < 6; i++) {
        Unk_ov004_02215c94_V t;
        func_01ffd070(&t, unk_5c, &vs[i]);
        if (!FtrMgr_GetSurfaceHeightAtPos(&t)) {
            unk_5c[0] = t.x;
            unk_5c[1] = t.y;
            unk_5c[2] = t.z;
            break;
        }
    }
    unk_8e = 0;
    NpcActor_setTalkRequest(this, &unk_89c);
    unk_89c.attachOwner(this);
    if (!unk_89c.isPartyNotGreeted()) {
        changeAct(0);
    } else {
        changeAct(7);
        unk_89c.setPartyGreeted();
    }
    sBirthdayHostVillager = this;
    return TRUE;
}

extern "C" void *data_ov004_0224befc[2] = { (void *)_ZN20BirthdayHostVillager9drawModelEv, 0 };
extern "C" {
u8 sBirthdayHostMsgFile[0x28];
}

BOOL BirthdayHostVillager::vfunc_00() {
    if (!func_0202d948(this)) {
        return FALSE;
    }
    unk_a40 = *(Unk_ov004_0224c034_Fn *)data_ov004_0224befc;
    Unk_02013474_enableFootsteps(&unk_558);
    return TRUE;
}

BOOL BirthdayHostVillager::drawModel() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayHostVillager::onDraw() {
    if (unk_a40) {
        return (this->*unk_a40)();
    }
    return TRUE;
}

BOOL BirthdayHostVillager::preDelete() {
    if (!func_0202d928(this)) {
        return FALSE;
    }
    sBirthdayHostVillager = NULL;
    return TRUE;
}

BOOL BirthdayHostVillager::updateAct() {
    execAct();
    return TRUE;
}

void BirthdayHostVillager::func_ov004_02215b9c() {
    void *o = PlayerData_GetCurrent();
    if (o != NULL && unk_82c != NULL) {
        s32 r = PlayerData_getPlayerId(o);
        void *p = Villager_FindOrCreateMemory(unk_82c, r);
        VillagerMemory_RecordTalk(p, 0, 0, 0);
    }
}

BOOL BirthdayHostVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayHostVillager::vfunc_58() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_02215c94_V v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y = v.y + 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        changeAct(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, NpcActor_getPlayerActor(this, 4));
        Camera_FocusOnPoint(&v);
        changeAct(5);
        break;
    case 1:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, NpcActor_getPlayerActor(this, 4));
        Camera_FocusOnPoint(&v);
        changeAct(8);
        break;
    case 8:
        Camera_SetModeDefault();
        func_ov004_02215b9c();
        changeAct(0);
        break;
    case 4:
        changeAct(0);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

void *BirthdayHostVillagerTalk::getPlayerMemory() {
    if (unk_1a0 != NULL && unk_1a0->unk_82c != NULL) {
        PlayerData_GetCurrent();
        s32 r = PlayerData_getPlayerId();
        return Villager_FindOrCreateMemory(unk_1a0->unk_82c, r);
    }
    return NULL;
}

BOOL BirthdayHostVillagerTalk::isPartyNotGreeted() {
    void *p = getPlayerMemory();
    if (p) {
        if (VillagerMemory_isPartyGreeted(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void BirthdayHostVillagerTalk::setPartyGreeted() {
    void *p = getPlayerMemory();
    if (p) {
        VillagerMemory_setPartyGreeted(p);
    }
}

BOOL BirthdayHostVillagerTalk::isNotTalkedYet() {
    void *p = getPlayerMemory();
    if (p) {
        if (VillagerMemory_isTalkedToday(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void BirthdayHostVillagerTalk::setTalked() {
    void *p = getPlayerMemory();
    if (p) {
        VillagerMemory_setTalkedToday(p);
    }
}

u32 BirthdayHostVillagerTalk::hasReceivedGift() {
    void *p = getPlayerMemory();
    if (p) {
        return VillagerMemory_isPartyGiftReceived(p);
    }
    return 0;
}

void BirthdayHostVillagerTalk::setReceivedGift() {
    void *p = getPlayerMemory();
    if (p) {
        VillagerMemory_setPartyGiftReceived(p);
    }
}

BOOL BirthdayHostVillagerTalk::isLikedGift(u16 *p) {
    BOOL r;
    if (unk_1a0 && unk_1a0->unk_82c) {
        u32 c = VillagerPlan_getState(VillagerPlanBlock_GetPlan(Villager_GetPlan(unk_1a0->unk_82c)));
        r = FALSE;
        switch (c) {
        case 0:
            if (*p >= 0x12b0 && *p <= 0x12e7) r = TRUE;
            break;
        case 1:
            if (*p >= 0x12e8 && *p <= 0x131f) r = TRUE;
            break;
        case 2:
            if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
            break;
        case 3:
            if (*p >= 0x11a8 && *p <= 0x12a7) r = TRUE;
            break;
        case 4:
            if (Item_IsFurniture(p)) {
                if (!Unk_ov004_022158c4_Range(p, 0x450c, 0x45db)) r = TRUE;
            }
            break;
        }
        return r;
    }
    return FALSE;
}

void BirthdayHostVillagerTalk::addFriendship(s32 v) {
    void *p = this->getPlayerMemory();
    if (p) {
        VillagerMemory_addFriendship(p, v);
    }
}

void *BirthdayHostVillagerTalk::getFriendship() {
    void *p = this->getPlayerMemory();
    if (p) {
        return VillagerMemory_getFriendship(p);
    }
    return 0;
}

void BirthdayHostVillagerTalk::vfunc_84() {
    if (unk_1a0->unk_894 == 0xc) {
        unk_3c->unk_08 = 1;
    }
}

void BirthdayHostVillagerTalk::vfunc_80() {
    u8 b0, b1, b2;
    u16 x;
    if (unk_1a0->unk_894 == 0xb) {
        if (MenuCtrl_IsFinished()) {
            if (MenuCtrl_IsResultOk() == 0) {
                unk_3c->unk_08 = 1;
                b0 = func_02063b8c(2) + 7;
                TalkWindowState_setNextMessage(unk_3c, &b0, 0);
                unk_1a0->changeAct(6);
            } else {
                void *r6 = MenuCtrl_GetIndex();
                x = func_02099048();
                s32 r4 = Item_GetPrice(&x);
                func_02099064(r6);
                ActorTalkRequest_setItemNameSlot(this, &x, 0, 7);
                if (isLikedGift(&x)) {
                    b1 = func_02063b8c(2) + 0xd;
                    TalkWindowState_setNextMessage(unk_3c, &b1, 0);
                    addFriendship(5);
                    if (r4 >= 1000) addFriendship(5);
                    if (r4 >= 2000) addFriendship(10);
                    Unk_02014420_requestTakeItem(this, &x, 0, 5, 0);
                    unk_1a0->changeAct(12);
                } else {
                    b2 = func_02063b8c(2) + 0xb;
                    TalkWindowState_setNextMessage(unk_3c, &b2, 0);
                    addFriendship(2);
                    if (r4 >= 1000) addFriendship(5);
                    if (r4 >= 2000) addFriendship(5);
                    Unk_02014420_requestTakeItem(this, &x, 0, 5, 0);
                    unk_1a0->changeAct(12);
                }
            }
        }
    }
}

void BirthdayHostVillagerTalk::attachOwner(BirthdayHostVillager *owner) {
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a0 = owner;
}

void BirthdayHostVillagerTalk::vfunc_78(void *arg) {
    u8 *out = (u8 *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), sBirthdayHostMsgFile, 0x28, (void *)"ev_nbirth");
    *(u32 *)out = (u32)sBirthdayHostMsgFile;
    if (unk_1a0->unk_894 == 9) {
        out[4] = func_02063b8c(2);
    } else {
        s32 k = 3;
        if (this->isNotTalkedYet()) {
            k = 1;
        } else if (this->hasReceivedGift()) {
            k = 2;
        }
        this->setTalked();
        switch (k) {
        case 1:
            out[4] = func_02063b8c(2) + 2;
            break;
        case 2:
            out[4] = func_02063b8c(4) + 0x13;
            break;
        default:
            out[4] = func_02063b8c(2) + 4;
            break;
        }
        BirthdayHostVillager *p = unk_1a0;
        if (p->unk_89c.unk_3c) {
            if (p && p->unk_82c) {
                ActorTalkRequest_setVillagerNameSlot(&unk_1a0->unk_89c, VillagerData_getVillagerId(p->unk_82c), 1);
            }
            s32 i = 0;
            BirthdayHostVillager **pp = &unk_1a0;
            goto test;
            for (;;) {
                void *q;
                q = NpcRegistry_GetVillager(i);
                if (q && q != *pp) {
                    ActorTalkRequest_setVillagerNameSlot(&unk_1a0->unk_89c, VillagerData_getVillagerId(*(void **)((u8 *)q + 0x82c)), 0);
                    break;
                }
                i++;
            test:
                if (i >= NpcRegistry_GetSlotCount()) break;
            }
            u16 w = 0x1100;
            ActorTalkRequest_setItemNameSlot(this, &w, 0, 7);
            ActorTalkRequest_setItemNameSlot(this, &w, 1, 7);
        }
    }
}

extern "C" u16 BirthdayHost_PickReturnGift(s32 n) {
    u16 w0, w1, w2, w3, w4;
    if (n <= 0) {
        u32 o[2];
        ItemPickSpec_set(o, 1, 0);
        ItemPick_One(&w1, &o, 0, 0, 1, 1, 0);
        u16 r = w1;
        func_02063388(o);
        return r;
    }
    if (n <= 0x3f) {
        if (func_02063b8c(2) == 0) {
            u32 o[2];
        ItemPickSpec_set(o, 0, 0);
            ItemPick_One(&w2, &o, 0, 0, 1, 1, 0);
            u16 r = w2;
            func_02063388(o);
            return r;
        } else {
            u32 o[2];
        ItemPickSpec_set(o, 2, 0);
            ItemPick_One(&w3, &o, 0, 0, 1, 1, 0);
            u16 r = w3;
            func_02063388(o);
            return r;
        }
    }
    func_0206277c(&w0, PlayerData_GetCurrent(), 0);
    if (w0 == 0xfff1) {
        u32 o[2];
        ItemPickSpec_set(o, 0, 0);
        ItemPick_One(&w4, &o, 0, 0, 1, 1, 0);
        u16 r = w4;
        func_02063388(o);
        return r;
    }
    return w0;
}

void BirthdayHostVillagerTalk::vfunc_10() {
    switch (unk_1e) {
    case 0xf:
    case 0x10: {
        volatile u16 v;
        v = BirthdayHost_PickReturnGift((s32)getFriendship());
        unk_1a0->unk_a48 = v;
        ActorTalkRequest_setItemNameSlot(this, (void *)&v, 1, 7);
        break;
    }
    }
}

void BirthdayHostVillagerTalk::vfunc_14() {
    u8 b[3];
    switch (unk_1e) {
    case 4:
    case 5:
    case 6:
        break;
    case 7:
    case 8:
        b[0] = gTalkMsgIndexEnd[0];
        TalkWindowState_setNextMessageIfUnset(unk_3c, &b[0], 0);
        break;
    case 9:
    case 10:
        unk_1a0->changeAct(10);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        b[1] = func_02063b8c(2) + 0xf;
        TalkWindowState_setNextMessage(unk_1a0->unk_89c.unk_3c, &b[1], 0);
        break;
    case 15:
    case 16:
        Unk_020d7710_requestGiveItem(this, &unk_1a0->unk_a48, 0, 5, 0);
        func_02099014(&unk_1a0->unk_a48, 0);
        unk_1a0->changeAct(13);
        break;
    case 17:
    case 18:
        this->setReceivedGift();
        break;
    case 19:
    case 20:
    case 21:
    case 22:
        b[2] = gTalkMsgIndexEnd[0];
        TalkWindowState_setNextMessageIfUnset(unk_3c, &b[2], 0);
        break;
    }
}

void BirthdayHostVillagerTalk::vfunc_18() {
    u8 b[3];
    s32 r = ChoiceList_getResult(TalkWindowState_getChoiceList(unk_1a0->unk_89c.unk_3c));
    switch (unk_1e) {
    case 4:
    case 5:
        if (r == 0) {
            if (MenuCtrl_BuildPocketMask((void *)BirthdayHost_GiftFilter)) {
                b[0] = func_02063b8c(2) + 9;
                TalkWindowState_setNextMessage(unk_1a0->unk_89c.unk_3c, &b[0], 0);
            } else {
                b[1] = 6;
                TalkWindowState_setNextMessage(unk_1a0->unk_89c.unk_3c, &b[1], 0);
            }
        } else {
            b[2] = func_02063b8c(2) + 7;
            TalkWindowState_setNextMessage(unk_1a0->unk_89c.unk_3c, &b[2], 0);
        }
        break;
    }
}

BOOL BirthdayHostVillager::changeAct(s32 idx) {
    static Unk_ov004_02215208_Fn tbl[14] = {
        &BirthdayHostVillager::setupAct00,
        &BirthdayHostVillager::setupAct01,
        &BirthdayHostVillager::setupAct02,
        &BirthdayHostVillager::setupAct03,
        &BirthdayHostVillager::setupAct04,
        &BirthdayHostVillager::setupAct05,
        &BirthdayHostVillager::setupAct06,
        &BirthdayHostVillager::setupAct07,
        &BirthdayHostVillager::setupAct08,
        &BirthdayHostVillager::setupAct09,
        &BirthdayHostVillager::setupAct0A,
        &BirthdayHostVillager::setupAct0B,
        &BirthdayHostVillager::setupAct0C,
        &BirthdayHostVillager::setupAct0D,
    };
    if (idx < 14) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayHostVillager::execAct() {
    static Unk_ov004_022150f0_Fn tbl[14] = {
        &BirthdayHostVillager::mainAct00,
        &BirthdayHostVillager::mainAct01,
        &BirthdayHostVillager::mainAct02,
        &BirthdayHostVillager::mainAct03,
        &BirthdayHostVillager::mainAct04,
        &BirthdayHostVillager::mainAct05,
        &BirthdayHostVillager::mainAct06,
        &BirthdayHostVillager::mainAct07,
        &BirthdayHostVillager::mainAct08,
        &BirthdayHostVillager::mainAct09,
        &BirthdayHostVillager::mainAct0A,
        &BirthdayHostVillager::mainAct0B,
        &BirthdayHostVillager::mainAct0C,
        &BirthdayHostVillager::mainAct0D,
    };
    if (unk_894 < 14) {
        (this->*tbl[unk_894])();
    }
}

BOOL BirthdayHostVillager::setupAct00() {
    if (NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8)) {
        NpcLookAt_setTarget(unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::mainAct00() {
    s32 c[3];
    u8 *m = unk_564;
    if (unk_3b0[0x508 - 0x3b0] != 0 && NpcActionCtrl_getAction(m) == 1) {
        NpcActionCtrl_requestAction(m, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        return;
    }
    if (NpcActionCtrl_getAction(unk_564) == 0) {
        if (unk_a4e != 0) {
            unk_a4e--;
        }
        if (unk_a4e == 0) {
            unk_a4c = Room_PickRandomWalkTarget(unk_a5c, unk_5c, unk_8e);
            unk_a50[0] = unk_a5c[0];
            unk_a50[1] = unk_a5c[1];
            unk_a50[2] = unk_a5c[2];
            if (unk_a4c != unk_8e) {
                if (NpcActionCtrl_requestAction(unk_564, 3, 1, 0, 0, 0, unk_a4c, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x46) + 0x14;
                }
            } else {
                if (NpcActionCtrl_requestAction(unk_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0) != 0) {
                    unk_a4e = func_02063b8c(0x50) + 0x14;
                }
            }
        } else {
            if (NpcActionCtrl_isActionDone(unk_564) != 0) {
                NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
            }
        }
    } else if (NpcActionCtrl_getAction(unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(unk_564) != 0) {
            NpcActionCtrl_requestAction(unk_564, 1, 1, unk_a5c[0], unk_a5c[2], 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (NpcActionCtrl_getAction(unk_564) == 1) {
        switch (NpcActor_findAvoidPos(this, c)) {
        case 1:
            NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
            break;
        case 2:
            unk_a50[0] = c[0];
            unk_a50[1] = c[1];
            unk_a50[2] = c[2];
            NpcMoveCtrl_setWaypoint(unk_350, unk_a50);
            break;
        default:
            if (func_020e96ec(unk_a50, unk_a5c) != 0) {
                unk_a50[0] = unk_a5c[0];
                unk_a50[1] = unk_a5c[1];
                unk_a50[2] = unk_a5c[2];
                NpcMoveCtrl_setWaypoint(unk_350, unk_a5c);
            } else if (func_020e9650(unk_a5c, unk_5c) < 0x200) {
                NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
            }
            break;
        }
    }
}

BOOL BirthdayHostVillager::setupAct01() {
    u8 *m = unk_564;
    Unk_ov004_022146ec_Actor *o = BirthdayGuestVillager_Get();
    if (o != 0) {
        s32 dx = o->pos[0] - unk_5c[0];
        s32 dz = o->pos[2] - unk_5c[2];
        s32 ang = func_020e7b98(dx, dz);
        NpcActionCtrl_requestAction(m, 3, 1, 0, 0, 0, ang, 0, 0, data_020c6cc8, 0);
        NpcLookAt_setTarget(unk_3b0, 2, 0, o, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::mainAct01() {}

BOOL BirthdayHostVillager::setupAct02() {
    unk_a4b = 0x1e;
    return TRUE;
}

void BirthdayHostVillager::mainAct02() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x14:
        NpcActionCtrl_requestEmotion(unk_564, 1, 3, data_020c6cc8);
        break;
    case 1:
        NpcActionCtrl_requestEmotion(unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
        break;
    }
}

BOOL BirthdayHostVillager::setupAct03() {
    unk_a4b = 0x32;
    return TRUE;
}

void BirthdayHostVillager::mainAct03() {
    if (unk_a4b != 0) {
        unk_a4b--;
    }
    switch (unk_a4b) {
    case 0x28:
        if (func_02063b8c(2) == 0) {
            NpcActionCtrl_requestEmotion(unk_564, 1, 0xa, data_020c6cc8);
        } else {
            NpcActionCtrl_requestEmotion(unk_564, 1, 0x17, data_020c6cc8);
        }
        break;
    case 1:
        NpcActionCtrl_requestEmotion(unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
        break;
    }
}

BOOL BirthdayHostVillager::setupAct04() {
    if ((u32)(unk_894 - 1) <= 2) {
        NpcActionCtrl_requestEmotion(unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void BirthdayHostVillager::mainAct04() {}

BOOL BirthdayHostVillager::setupAct05() {
    BOOL r;
    void *o = func_02095204(4);
    if (o != 0) {
        NpcTalkCtrl_requestTurnAndTalk(unk_618, 0, NpcActor_getAngleTo(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void BirthdayHostVillager::mainAct05() {
    changeAct(6);
}

BOOL BirthdayHostVillager::setupAct06() { return TRUE; }

void BirthdayHostVillager::mainAct06() {
    Unk_ov004_02214a4c_Obj *o = unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            TalkRequest_EndTalkWith(this);
        }
    }
}

BOOL BirthdayHostVillager::setupAct07() { return TRUE; }

void BirthdayHostVillager::mainAct07() {
    TalkRequest_AddPlayerTalk6(this, 0);
}

BOOL BirthdayHostVillager::setupAct08() {
    unk_a4a = 0x32;
    NpcActionCtrl_requestAction(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void BirthdayHostVillager::mainAct08() {
    Unk_ov004_02214ab4_Vec a, b;
    s32 v, r4, r0;
    Unk_ov004_02214ab4_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    b.x = a.x;
    b.y = a.y;
    b.z = a.z;
    v = NpcActor_getDistanceToPlayer(this, 4);
    if (v > 0x4000) {
        if (NpcActionCtrl_getAction(unk_564) == 1) {
            NpcActionCtrl_requestAction(unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction(unk_564) == 2) {
            NpcActionCtrl_requestAction(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint(unk_350, &b);
    if (unk_a4a != 0) {
        unk_a4a--;
    }
    r4 = Math_AngleXZ(unk_5c, &a);
    r0 = func_020e780c(unk_8e, r4);
    if (v <= 0x3000 || unk_a4a == 0) {
        NpcTalkCtrl_requestTurnAndTalk(unk_618, 0, r4, 0);
        changeAct(9);
    } else if (r0 > 0x2000) {
        NpcActionCtrl_requestAction(unk_564, 4, 2, b.x, b.z, 0, r4, 0, 0, data_020c6cc8, 0);
    }
}

BOOL BirthdayHostVillager::setupAct09() { return TRUE; }

void BirthdayHostVillager::mainAct09() {
    Unk_ov004_02214a4c_Obj *o = unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            TalkRequest_EndTalkWith(this);
        }
    }
}

BOOL BirthdayHostVillager::setupAct0A() {
    unk_89c.unk_3c->unk_14 = 1;
    return TRUE;
}

void BirthdayHostVillager::mainAct0A() {
    if (unk_89c.unk_3c->unk_04 == 5) {
        if (MenuCtrl_OpenPocketSelect(MenuCtrl_BuildPocketMask((void *)BirthdayHost_GiftFilter), 0xd) != 0) {
            changeAct(0xb);
        }
    }
}

BOOL BirthdayHostVillager::setupAct0B() { return TRUE; }

void BirthdayHostVillager::mainAct0B() {}

BOOL BirthdayHostVillager::setupAct0C() { return TRUE; }

void BirthdayHostVillager::mainAct0C() {}

BOOL BirthdayHostVillager::setupAct0D() { return TRUE; }

void BirthdayHostVillager::mainAct0D() {
    u8 buf[1];
    buf[0] = func_02063b8c(2) + 0x11;
    TalkWindowState_setNextMessage(unk_89c.unk_3c, buf, 0);
    changeAct(6);
}

void BirthdayHostVillager::vfunc_80() {
    unk_898 = 1;
}

BOOL BirthdayHostVillager::vfunc_7c() {
    if (unk_898 == 0) {
        return TRUE;
    }
    return FALSE;
}

