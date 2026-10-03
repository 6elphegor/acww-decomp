// mwcc-version: 1.2/base
#include "types.h"
#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define func_0201b138 _ZN8NpcActor6onDrawEv
#define NpcActor_findAvoidPos _ZN8NpcActor12findAvoidPosEP16Unk_020d77a4_Vec
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define func_0202d928 _ZN13VillagerActor9preDeleteEv
#define func_0202d948 _ZN13VillagerActor8vfunc_00Ev
#define func_0202dab0 _ZN13VillagerActor8vfunc_04Ev
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define ErrandRecord_getStep _ZN12ErrandRecord7getStepEv
#define func_02135558 __register_global_object
#define Mailbox_execNoMail _ZN7Mailbox10execNoMailEv
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

class TalkWindowState {
public:
    void setSlot(s32 a, void *p);
    void setNextMessage(u8 *a, void *p);
    void setNextMessageIfUnset(u8 *a, void *p);

    u32 unk_00;
    s32 unk_04;
};

// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    u32 pad[0x1b4 / 4];
};
struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct NpcFaceAnim { NpcFaceAnim(); ~NpcFaceAnim(); u32 pad[0x88 / 4]; };
struct NpcAnimCtrl { NpcAnimCtrl(); ~NpcAnimCtrl(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct NpcSpeechState { NpcSpeechState(); ~NpcSpeechState(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); ~Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[8]; u8 unk_08; u8 pad_09[2]; u8 unk_0b; };
struct NpcActionCtrl { NpcActionCtrl(); ~NpcActionCtrl(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class SndSeEmitter {
public:
    SndSeEmitter();
    virtual ~SndSeEmitter();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public SndSeEmitter {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct VillagerMood { VillagerMood(); ~VillagerMood(); u32 pad[0x5c / 4]; };

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
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u32 unk_68;
    u32 pad_6c;
    u32 unk_70;
    u32 pad_74[(0x8c - 0x74) / 4];
    s16 unk_8c, unk_8e, unk_90, unk_92, unk_94, unk_96;
    u32 pad_98[(0xd4 - 0x98) / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
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

    u16 pad_e0[5];
    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
};

class VillagerActor : public NpcActor {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void *vfunc_64();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
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
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ VillagerMood unk_838;
};

// Dialog sub-object at +0x914 of FleaMarketBuyerVillager. Its vtable (0x0224c740) names every slot after the class that last overrides it;
// declared here slot by slot so that each slot mangles to that symbol.
class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void onActionTag4(u32 v);
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
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
};

struct Unk_020d8938_Tbl;
class VillagerTalk : public Unk_020d7710 {
public:
    void setTopicFns(Unk_020d8938_Tbl *t);
    void begin(VillagerActor *owner, u32 idx);
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_78(void *arg);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void onActionTag4(u32 v);
    virtual void vfunc_64_alt();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_ac[0x1a0 - 0xac];
};


// ---------------------------------------------------------------- TU10 classes
class HouseVisitVillager;

struct Unk_ov068_02270a6c_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov068_02270a6c_Buf {
    u8 b[16];
};

struct Unk_ov068_02270a6c_Bits {
    u8 lo : 3;
    u8 hi : 5;
};

struct Unk_ov068_02270afc_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02270afc_Pair {
    s16 a, b;
};

struct Unk_ov068_0226eda4_V {
    s32 a, b;
};

// Grid header (gSceneBlockMap points at one)
struct Unk_ov068_0226ee74_Grid {
    void *cells;
    u8 *w;
    u8 *h;
};

struct Unk_ov068_0226eee0_P0 {
    u8 pad[0x88];
};
struct Unk_ov068_0226eee0_Q0 {
    u8 pad[0xc];
};
struct Unk_ov068_0226eee0_Q1 {
    u32 pad;
};
struct Unk_ov068_0226eee0_Mid : Unk_ov068_0226eee0_Q0, Unk_ov068_0226eee0_Q1 {};
struct Unk_ov068_0226eee0_Top : Unk_ov068_0226eee0_P0, Unk_ov068_0226eee0_Mid {};

typedef void (HouseVisitVillager::*Unk_ov068_02270afc_Fn)();
typedef BOOL (HouseVisitVillager::*Unk_ov068_02270afc_BFn)();

struct Unk_ov068_022708fc_Color {
    u8 a, b, c, d;
    Unk_ov068_022708fc_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

class EncodedString {
public:
    virtual ~EncodedString();
    virtual u32 capacity();
    virtual u8 *data();
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void fromEncoded(EncodedString *dst, s32 a, s32 b);
};

class EncodedString16Buf : public EncodedString {
public:
    EncodedString16Buf(u8 *src);
    virtual ~EncodedString16Buf();
    u8 pad[0x1c];
};

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    u8 pad[0x30];
};

#define SPEAK(str) VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov068_022712e0, 0x28, (void *)str)

// Menu/dialog sub-object at +0x898 of the owner (vtable 0x02270a6c)
class HouseVisitVillagerTalk : public VillagerTalk {
public:
    inline HouseVisitVillagerTalk() {}
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_78(void *arg);

    void attachOwner(HouseVisitVillager *owner);

    /* 0x1a0 */ HouseVisitVillager *unk_1a0;
};

// Owner (vtable 0x02270afc, size 0xa74)
class HouseVisitVillager : public VillagerActor {
public:
    inline HouseVisitVillager() {}    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void execVisitLeave();
    BOOL enterVisitLeave();
    void execVisitTalkWait();
    BOOL enterVisitTalkWait();
    void execVisitTalk();
    BOOL enterVisitTalk();
    void execVisitIdle7();
    BOOL enterVisitIdle7();
    void execVisitWander();
    BOOL enterVisitWander();
    void execVisitStay();
    BOOL enterVisitStay();
    void execVisitGreetEnd();
    BOOL enterVisitGreetEnd();
    void execVisitWalkIn();
    BOOL enterVisitWalkIn();
    void execVisitDoorOpen();
    BOOL enterVisitDoorOpen();
    void execVisitCall();
    BOOL enterVisitCall();
    void execVisitOutside();
    BOOL enterVisitOutside();
    void updateVisitState();
    BOOL setVisitState(s32 idx);
    void func_ov068_0226ee18();
    void func_ov068_0226ee3c();
    void func_ov068_0226ee74();
    BOOL drawModel();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ HouseVisitVillagerTalk unk_898;
    /* 0xa3c */ Unk_ov068_02270afc_BFn unk_a3c;
    /* 0xa44 */ u32 unk_a44;
    /* 0xa48 */ u8 unk_a48;
    /* 0xa49 */ u8 pad_a49;
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ u32 unk_a4c;
    /* 0xa50 */ u8 unk_a50;
    /* 0xa51 */ u8 unk_a51;
    /* 0xa52 */ u8 unk_a52;
    /* 0xa53 */ u8 pad_a53;
    /* 0xa54 */ u8 unk_a54;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 unk_a56;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ s8 unk_a59;
    /* 0xa5a */ s16 unk_a5a;
    /* 0xa5c */ s32 unk_a5c;
    /* 0xa60 */ s32 unk_a60;
    /* 0xa64 */ s32 unk_a64;
    /* 0xa68 */ s32 unk_a68;
    /* 0xa6c */ s32 unk_a6c;
    /* 0xa70 */ s32 unk_a70;
};
extern "C" {
void _ZN18HouseVisitVillager17execVisitDoorOpenEv();
void _ZN18HouseVisitVillager15execVisitWalkInEv();
void _ZN18HouseVisitVillager14enterVisitStayEv();
void _ZN18HouseVisitVillager14enterVisitCallEv();
void _ZN18HouseVisitVillager9drawModelEv();
void _ZN18HouseVisitVillager17execVisitGreetEndEv();
void _ZN18HouseVisitVillager14execVisitLeaveEv();
void _ZN18HouseVisitVillager13execVisitStayEv();
void _ZN18HouseVisitVillager14enterVisitTalkEv();
void _ZN18HouseVisitVillager18enterVisitTalkWaitEv();
void _ZN18HouseVisitVillager15execVisitWanderEv();
void _ZN18HouseVisitVillager15enterVisitIdle7Ev();
void _ZN18HouseVisitVillager16enterVisitWanderEv();
void _ZN18HouseVisitVillager15enterVisitLeaveEv();
void _ZN18HouseVisitVillager18enterVisitGreetEndEv();
void _ZN18HouseVisitVillager16enterVisitWalkInEv();
void _ZN18HouseVisitVillager18enterVisitDoorOpenEv();
void _ZN18HouseVisitVillager14execVisitIdle7Ev();
void _ZN18HouseVisitVillager17enterVisitOutsideEv();
void _ZN18HouseVisitVillager13execVisitCallEv();
void _ZN18HouseVisitVillager17execVisitTalkWaitEv();
void _ZN18HouseVisitVillager16execVisitOutsideEv();
void _ZN18HouseVisitVillager13execVisitTalkEv();
extern void *data_ov068_0227097c[2];
extern void *data_ov068_02270984[2];
extern void *data_ov068_0227098c[2];
extern void *data_ov068_02270994[2];
extern void *data_ov068_0227099c[2];
extern void *data_ov068_022709a4[2];
extern void *data_ov068_022709ac[2];
extern void *data_ov068_022709b4[2];
extern void *data_ov068_022709bc[2];
extern void *data_ov068_022709c4[2];
extern void *data_ov068_022709cc[2];
extern void *data_ov068_022709d4[2];
extern void *data_ov068_022709dc[2];
extern void *data_ov068_022709e4[2];
extern void *data_ov068_022709ec[2];
extern void *data_ov068_022709f4[2];
extern void *data_ov068_022709fc[2];
extern void *data_ov068_02270a04[2];
extern void *data_ov068_02270a0c[2];
extern void *data_ov068_02270a14[2];
extern void *data_ov068_02270a1c[2];
extern void *data_ov068_02270a24[2];
extern void *data_ov068_02270a2c[2];
extern void *data_ov068_02270a34[2];
extern HouseVisitVillager *sHouseVisitVillager;
extern u8 data_ov068_022712b8[0x28];
extern u8 data_ov068_022712e0[0x28];
extern Unk_ov068_02270a6c_Buf data_ov068_02270a3c;
HouseVisitVillager *HouseVisitVillager_Create();
}

extern "C" {
void HouseVisit_SetFirstTalkDone(void *);
BOOL HouseVisit_IsFirstTalkPending(void *);
void HouseVisit_SetDoorTalkDone(void *);
BOOL HouseVisit_IsDoorTalkDone(void *);
void HouseVisit_SetCalled(void *);
BOOL HouseVisit_IsCalled(void *);
void HouseVisit_SetFinished(void *);
BOOL HouseVisit_IsAppointmentNow(void *);
}
#define data_0213a740 __ptmf_null
extern "C" Unk_ov068_02270afc_BFn __ptmf_null;

namespace sA {
extern "C" {
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *self, void *v);
void func_02135558(void *obj, void (*dtor)(void *), void *dso);
extern u16 data_020c6cc8;
extern s32 data_020c8cbc;

void func_020e761c(void *dst, s32 v, s32 n);
void NNS_G3dMdlSetMdlAlpha(void *o, u32 i, u32 v);
s32 func_02063b8c(s32 n);
s32 func_020e9650(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *func_02095204(s32 n);
void *func_020947f0(s32 n);
BOOL Ground_IsOnLockedExit(void *v);
u32 NpcActor_getAngleTo(void *p, void *q);
s32 NpcActor_findAvoidPos(void *p, void *out);
void func_020b101c();
void *Scene_GetWarpRequest();
void Scene_SavePlayerPos(void *o, s32 v);
void SceneWarp_RequestExit(void *o, s32 v);
void *Villager_GetState(void *o);
void VillagerState_ResetRole(void *o);
void TalkRequest_SetTargetDone(void *p);
BOOL TalkRequest_AddPlayerTalk6(void *p, s32 a);
s32 Mailbox_execNoMail(void *a, void *b, s32 c);
s32 NpcTalkCtrl_isBusy(void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_requestStand(void *, s32, u32);
s32 NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcActionCtrl_isActionDone(void *);
}
}
namespace sB {
extern "C" {
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *self, s32 a);
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
extern u8 gVec3Zero[];

s32 NpcActionCtrl_requestStand(void *, s32, u32);
void NpcLookAt_setTarget(void *, u32, s32, s32, void *, s32, s32, u8);
void Ground_LockExit(s32);
s32 NpcTalkCtrl_isBusy(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
Unk_ov068_02270afc_Vec *func_020947f0(s32);
s32 Ground_IsOnLockedExit(void *);
void NpcMoveCtrl_setSpeedPreset(void *, s32, s32, s32, s32);
s32 TalkRequest_SetTargetDone(void *);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcActionCtrl_isActionDone(void *);
void func_02003e70(void *, s32, s32, s32);
void func_020b0e60();
void NpcTalkCtrl_requestTalk(void *, s32, s32);
void func_0205b124(void *);
s32 func_0205afdc(void *, void *);
void func_020b1028();
void *Villager_GetState(void *);
void VillagerState_SetRole(void *, s32);
void func_0205b120(void *);
VillagerActor *func_02095204(s32);
s32 func_020e9650(void *, void *);
}

extern "C" {
extern u8 sHouseVisitTsuTopicTable[];
extern u8 data_021be810[];
extern u8 gTalkMsgIndexEnd;
void VillagerId_makeFileName(void *, void *, u32, void *);
void *VillagerData_getVillagerId(void *);
u32 func_02063b8c(s32);
void Snd_PlaySe(s32);
s32 VillagerId_GetPersonality(void *);
s32 FtrMgr_PickFurnitureComment(s32);
void *PlayerData_GetCurrent();
void *PlayerData_getErrands(void *);
}

}
namespace sC {
extern "C" {
extern Unk_ov068_0226ee74_Grid *gSceneBlockMap;


void *PlayerData_GetCurrent();
u8 *PlayerData_getErrands(void *);
s32 ErrandRecord_setStep(void *, s32);
s32 ErrandRecord_getStep(void *);
s32 func_02063b8c(s32);
void MI_CpuCopy8(void *, void *, u32);
void DateTime_AddMinutes(void *, s32);
void Clock_GetDateTime(void *);
s32 DateTime_Compare(void *, void *, s32);
s32 NpcMoveCtrl_setSpeedPreset(void *, s32, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *);
void *PlayerData_getPlayerId(void *);
void *Villager_FindOrCreateMemory(void *, void *);
void VillagerMemory_RecordTalk(void *, s32, s32, s32);
s32 MapBlock_GetItemPtr(void *, s32, s32, s32);
s32 Item_IsFurnitureOrF031();
void Ground_UnlinkUnit(s32, s32);
s32 func_0202d928(void *);
s32 func_0202d948(void *);
void Unk_02013474_enableFootsteps(void *);
void Scene_GetPrevious();
s32 SceneId_IsTown();
void func_020b1028();
void func_0205b124(void *);
void func_0205b120(void *);
void *func_0205afdc(void *, void *);
s32 func_0201b138(void *);
s32 func_0202dab0(void *);
void NpcActor_setTalkRequest(void *, void *);
}

}

extern "C" void *data_ov068_02270a24[2] = {(void *)_ZN18HouseVisitVillager9drawModelEv, 0};
extern "C" void *data_ov068_022709bc[2] = {(void *)_ZN18HouseVisitVillager14enterVisitTalkEv, 0};
extern "C" void *data_ov068_022709cc[2] = {(void *)_ZN18HouseVisitVillager15execVisitWanderEv, 0};
extern "C" {
HouseVisitVillager *sHouseVisitVillager;
}


extern "C" HouseVisitVillager *HouseVisitVillager_Create() {
    using namespace sC;
    return new HouseVisitVillager;
}

BOOL HouseVisitVillager::vfunc_04() {
    using namespace sC;
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    sHouseVisitVillager = this;
    NpcActor_setTalkRequest(this, &unk_898);
    unk_898.attachOwner(this);
    return TRUE;
}

BOOL HouseVisitVillager::vfunc_00() {
    using namespace sC;
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_a3c = *(Unk_ov068_02270afc_BFn *)data_ov068_02270a24;
    func_ov068_0226ee74();
    Unk_02013474_enableFootsteps(&unk_558);
    unk_a56 = -1;
    unk_a54 = 3;
    unk_a58 = 0xb0;
    Scene_GetPrevious();
    if (SceneId_IsTown() != 0) {
        setVisitState(0);
    } else if (HouseVisit_IsCalled(&unk_898) != 0) {
        u32 buf[6];
        func_020b1028();
        unk_a56 = (func_02063b8c(0x14) + 0x28) * 0x3c;
        unk_a54 = func_02063b8c(4) + 2;
        func_0205b124(buf);
        unk_a4c = (u32)func_0205afdc(buf, &unk_a44);
        setVisitState(6);
        func_0205b120(buf);
    } else {
        unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
        unk_a54 = func_02063b8c(4) + 7;
        setVisitState(0);
    }
    return TRUE;
}

BOOL HouseVisitVillager::drawModel() {
    using namespace sC;
    if (func_0201b138(this) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL HouseVisitVillager::onDraw() {
    using namespace sC;
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL HouseVisitVillager::preDelete() {
    using namespace sC;
    if (func_0202d928(this) == 0) {
        return FALSE;
    }
    Unk_ov068_0226eee0_Top *t = (Unk_ov068_0226eee0_Top *)PlayerData_getErrands(PlayerData_GetCurrent());
    Unk_ov068_0226eee0_Mid &m = *t;
    Unk_ov068_0226eee0_Q1 &q = m;
    if (ErrandRecord_getStep(&q) == 1) {
        Unk_ov068_0226eee0_Q1 &q2 = m;
        ErrandRecord_setStep(&q2, 2);
    }
    sHouseVisitVillager = NULL;
    return TRUE;
}

BOOL HouseVisitVillager::updateAct() {
    using namespace sC;
    updateVisitState();
    return TRUE;
}

void HouseVisitVillager::func_ov068_0226ee74() {
    using namespace sC;
    Unk_ov068_0226ee74_Grid *g = gSceneBlockMap;
    void *grid;
    s32 y, x;
    s32 z;
    if (g->w > (u8 *)0 && g->h > (u8 *)0 && g->cells != NULL) {
        grid = g->cells;
    } else {
        grid = NULL;
    }
    y = 0;
    z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (MapBlock_GetItemPtr(grid, x, y, z) != 0) {
                if (Item_IsFurnitureOrF031() != 0) {
                    Ground_UnlinkUnit(x, y);
                }
            }
        }
    }
}

void HouseVisitVillager::func_ov068_0226ee3c() {
    using namespace sC;
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        if (unk_82c != NULL) {
            VillagerMemory_RecordTalk(Villager_FindOrCreateMemory(unk_82c, PlayerData_getPlayerId(p)), 0, 0, 0);
        }
    }
}

void HouseVisitVillager::func_ov068_0226ee18() {
    using namespace sC;
    NpcMoveCtrl_setSpeedPreset(&unk_350, 1, 0x100, 0x19, 0x33);
}

extern "C" BOOL HouseVisit_IsAppointmentNow(void *) {
    using namespace sC;
    Unk_ov068_0226eda4_V a, b, c;
    MI_CpuCopy8(PlayerData_getErrands(PlayerData_GetCurrent()) + 0xa0, &a, 8);
    MI_CpuCopy8(&a, &b, 8);
    DateTime_AddMinutes(&b, 0x1e);
    c.a = 0;
    c.b = 0;
    Clock_GetDateTime(&c);
    if (DateTime_Compare(&a, &c, 0x3e) == -1 || DateTime_Compare(&a, &c, 0x3e) == 0) {
        if (DateTime_Compare(&c, &b, 0x3e) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void HouseVisit_SetFinished(void *) {
    using namespace sC;
    ErrandRecord_setStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94, 4);
}

BOOL HouseVisitVillager::vfunc_48() {
    using namespace sC;
    if (NpcTalkCtrl_isBusy(&unk_618) != 0) {
        return FALSE;
    }
    if ((u32)(unk_894 - 5) <= 1) {
        return TRUE;
    }
    return FALSE;
}

void HouseVisitVillager::vfunc_4c(u32 idx, u32 v) {
    using namespace sC;
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        if (unk_894 != 0) {
            if (unk_894 == 5) {
                unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
            }
            setVisitState(7);
        }
        break;
    case 0:
        unk_558.unk_08 = v;
        unk_898.attachOwner(this);
        setVisitState(8);
        break;
    case 1:
        unk_558.unk_08 = v;
        unk_898.attachOwner(this);
        if (unk_894 == 0) {
            setVisitState(1);
        } else {
            setVisitState(8);
        }
        break;
    case 8:
        unk_a58 = 0x14;
        func_ov068_0226ee3c();
        if (unk_894 != 0xa && unk_894 != 5) {
            setVisitState(6);
        }
        break;
    case 4:
        setVisitState(6);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

extern "C" BOOL HouseVisit_IsCalled(void *) {
    using namespace sC;
    if (ErrandRecord_getStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void HouseVisit_SetCalled(void *p) {
    using namespace sC;
    if (HouseVisit_IsCalled(p) == 0) {
        ErrandRecord_setStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94, 1);
    }
}

extern "C" BOOL HouseVisit_IsDoorTalkDone(void *) {
    using namespace sC;
    if ((u32)ErrandRecord_getStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94) > 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void HouseVisit_SetDoorTalkDone(void *p) {
    using namespace sC;
    if (HouseVisit_IsDoorTalkDone(p) == 0) {
        ErrandRecord_setStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94, 2);
    }
}

extern "C" BOOL HouseVisit_IsFirstTalkPending(void *) {
    using namespace sC;
    if (ErrandRecord_getStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94) == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void HouseVisit_SetFirstTalkDone(void *) {
    using namespace sC;
    ErrandRecord_setStep(PlayerData_getErrands(PlayerData_GetCurrent()) + 0x94, 3);
}

// ---------------------------------------------------------------------------------------------------------------------
void HouseVisitVillagerTalk::attachOwner(HouseVisitVillager *owner) {
    using namespace sC;
    begin((VillagerActor *)owner, 0x11);
    unk_1a0 = owner;
}

void HouseVisitVillagerTalk::vfunc_78(void *arg) {
    using namespace sB;
    Unk_ov068_02270a6c_Out *out = (Unk_ov068_02270a6c_Out *)arg;
    out->unk_00 = data_ov068_022712e0;
    if (unk_1a0->unk_894 == 1) {
        unk_1a0->unk_a52 = 1;
        SPEAK((void *)"q10_call");
        out->unk_04 = func_02063b8c(3);
        HouseVisit_SetCalled(this);
        return;
    }
    if (unk_1a0->unk_a50 != 0 && unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a50 = 0;
    }
    if (unk_1a0->unk_a50 != 0) {
        unk_1a0->unk_a52 = 6;
        SPEAK((void *)"q10_back");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        return;
    }
    if (unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a52 = 8;
        SPEAK((void *)"q10_wait");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(2);
        return;
    }
    if (HouseVisit_IsDoorTalkDone(this) == 0) {
        unk_1a0->unk_a52 = 2;
        SPEAK((void *)"q10_door");
        out->unk_04 = func_02063b8c(3);
        HouseVisit_SetDoorTalkDone(this);
        return;
    }
    if (HouseVisit_IsFirstTalkPending(this)) {
        unk_1a0->unk_a52 = 5;
        SPEAK((void *)"q10_first");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        HouseVisit_SetFirstTalkDone(this);
        return;
    }
    if (unk_1a0->unk_a54 != 0) {
        unk_1a0->unk_a54 = unk_1a0->unk_a54 - 1;
    }
    u32 rnd = func_02063b8c(100);
    s32 v = FtrMgr_PickFurnitureComment(VillagerId_GetPersonality(VillagerData_getVillagerId(unk_1a0->unk_82c)));
    u32 n = unk_1a0->unk_a44;
    if (n >= 5) {
        n = 5;
    }
    Unk_ov068_02270a6c_Buf buf = data_ov068_02270a3c;
    for (u32 i = n; i < 16; i++) {
        buf.b[i] = 0;
    }
    EncodedString16Buf obj1(buf.b);
    MsgString33 obj2;
    obj2.fromEncoded(&obj1, 0, 0);
    unk_3c->setSlot(3, &obj2);
    if (rnd < 30 && v != -1) {
        unk_1a0->unk_a52 = 3;
        SPEAK((void *)"q10_furniture");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = v;
        return;
    }
    if (rnd < 50) {
        unk_1a0->unk_a52 = 4;
        SPEAK((void *)"q10_layout");
        out->unk_00 = data_ov068_022712e0;
        u32 f = unk_1a0->unk_a4c;
        if (f & 1) {
            out->unk_04 = func_02063b8c(2);
        } else if (f & 2) {
            out->unk_04 = func_02063b8c(2) + 2;
        } else if ((f & 4) == 0) {
            out->unk_04 = func_02063b8c(2) + 4;
        } else if (f & 0x10) {
            out->unk_04 = 10;
        } else if (f & 0x20) {
            out->unk_04 = func_02063b8c(2) + 8;
        } else {
            out->unk_04 = func_02063b8c(2) + 6;
        }
        ((Unk_ov068_02270a6c_Bits *)((u8 *)PlayerData_getErrands(PlayerData_GetCurrent()) + 0xa8))->lo = n;
    } else if (rnd < 70) {
        unk_1a0->unk_a52 = 0;
        setTopicFns((Unk_020d8938_Tbl *)sHouseVisitTsuTopicTable);
        VillagerTalk::vfunc_78(out);
    } else {
        unk_1a0->unk_a52 = 0;
        setTopicFns((Unk_020d8938_Tbl *)data_021be810);
        VillagerTalk::vfunc_78(out);
    }
}

void HouseVisitVillagerTalk::vfunc_10(u32 a) {
    using namespace sB;
    if (unk_1a0->unk_a52 == 0) {
        VillagerTalk::vfunc_10(a);
    }
}

void HouseVisitVillagerTalk::vfunc_14(u32 a) {
    using namespace sB;
    u8 buf[2];
    HouseVisitVillager *o = unk_1a0;
    u32 st = o->unk_a52;
    if (st == 0) {
        VillagerTalk::vfunc_14(a);
    } else if (o != 0) {
        if (st == 1) {
            o->setVisitState(2);
        } else if (st == 6 || st == 8) {
            o->unk_a52 = 7;
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov068_022712b8, 0x28, (void *)"q_bye");
            buf[0] = func_02063b8c(3);
            unk_1a0->unk_898.unk_3c->setNextMessageIfUnset(buf, data_ov068_022712b8);
        } else if (st == 7) {
            buf[1] = gTalkMsgIndexEnd;
            unk_1a0->unk_898.unk_3c->setNextMessage(&buf[1], 0);
            unk_1a0->setVisitState(10);
            Snd_PlaySe(0x5f);
        }
    }
}

void HouseVisitVillagerTalk::vfunc_18(u32 a) {
    using namespace sB;
    if (unk_1a0->unk_a52 == 0) {
        VillagerTalk::vfunc_18(a);
    }
}

BOOL HouseVisitVillager::setVisitState(s32 idx) {
    using namespace sB;
    static Unk_ov068_02270afc_BFn tbl[11] = {
        *(Unk_ov068_02270afc_BFn *)data_ov068_02270a0c,
        *(Unk_ov068_02270afc_BFn *)data_ov068_02270994,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709fc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709f4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709ec,
        *(Unk_ov068_02270afc_BFn *)data_ov068_0227098c,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709dc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709d4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709bc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709c4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709e4,
    };
    if (idx < 11) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *data_ov068_02270a2c[2] = {(void *)_ZN18HouseVisitVillager16execVisitOutsideEv, 0};
extern "C" void *data_ov068_02270a34[2] = {(void *)_ZN18HouseVisitVillager13execVisitTalkEv, 0};
extern "C" void *data_ov068_022709fc[2] = {(void *)_ZN18HouseVisitVillager18enterVisitDoorOpenEv, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a8(0x1f, 0x14, 0x14, 0x1f);
extern "C" void *data_ov068_02270a1c[2] = {(void *)_ZN18HouseVisitVillager17execVisitTalkWaitEv, 0};
extern "C" void *data_ov068_02270a14[2] = {(void *)_ZN18HouseVisitVillager13execVisitCallEv, 0};
extern "C" void *data_ov068_02270a0c[2] = {(void *)_ZN18HouseVisitVillager17enterVisitOutsideEv, 0};
extern "C" void *data_ov068_02270994[2] = {(void *)_ZN18HouseVisitVillager14enterVisitCallEv, 0};
extern "C" {
u8 data_ov068_022712e0[0x28];
}
extern "C" void *data_ov068_022709f4[2] = {(void *)_ZN18HouseVisitVillager16enterVisitWalkInEv, 0};
extern "C" void *data_ov068_022709ec[2] = {(void *)_ZN18HouseVisitVillager18enterVisitGreetEndEv, 0};
extern "C" void *data_ov068_0227098c[2] = {(void *)_ZN18HouseVisitVillager14enterVisitStayEv, 0};
extern "C" void *data_ov068_022709dc[2] = {(void *)_ZN18HouseVisitVillager16enterVisitWanderEv, 0};
extern "C" void *data_ov068_022709b4[2] = {(void *)_ZN18HouseVisitVillager13execVisitStayEv, 0};
extern "C" Unk_ov068_Scene_Entry sHouseVisitVillagerProfile = {(void *(*)())HouseVisitVillager_Create, 0x82, 0x86, {2, 0x5000, 0x5000, 0x3e800}};
extern "C" void *data_ov068_022709c4[2] = {(void *)_ZN18HouseVisitVillager18enterVisitTalkWaitEv, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_02271298(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_022712b0(0x1f, 0x1f, 0x14, 0x1f);
extern "C" void *data_ov068_022709e4[2] = {(void *)_ZN18HouseVisitVillager15enterVisitLeaveEv, 0};
extern "C" void *data_ov068_02270a04[2] = {(void *)_ZN18HouseVisitVillager14execVisitIdle7Ev, 0};
extern "C" void *data_ov068_0227099c[2] = {(void *)_ZN18HouseVisitVillager9drawModelEv, 0};
extern "C" void *data_ov068_0227097c[2] = {(void *)_ZN18HouseVisitVillager17execVisitDoorOpenEv, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a0(0x14, 0x1f, 0x14, 0x1f);
extern "C" void *data_ov068_022709a4[2] = {(void *)_ZN18HouseVisitVillager17execVisitGreetEndEv, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_0227129c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02270a6c_Buf data_ov068_02270a3c = {{0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
extern "C" void *data_ov068_022709d4[2] = {(void *)_ZN18HouseVisitVillager15enterVisitIdle7Ev, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a4(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 data_ov068_022712b8[0x28];
}
extern "C" void *data_ov068_02270984[2] = {(void *)_ZN18HouseVisitVillager15execVisitWalkInEv, 0};


void HouseVisitVillager::updateVisitState() {
    using namespace sB;
    static Unk_ov068_02270afc_Fn tbl[11] = {
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a2c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a14,
        *(Unk_ov068_02270afc_Fn *)data_ov068_0227097c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270984,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709a4,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709b4,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709cc,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a04,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a34,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a1c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709ac,
    };
    if (unk_894 < 11) {
        (this->*tbl[unk_894])();
    }
}

extern "C" void *data_ov068_022709ac[2] = {(void *)_ZN18HouseVisitVillager14execVisitLeaveEv, 0};


BOOL HouseVisitVillager::enterVisitOutside() {
    using namespace sB;
    unk_5c = data_020c8cb4;
    unk_64 = data_020c8cb8 - 0x1000;
    Unk_ov068_02270afc_Pair &q = *(Unk_ov068_02270afc_Pair *)&unk_92;
    q.b = -0x8000;
    unk_8e = q.b;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&unk_350, -0x8000);
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 0;
    return TRUE;
}

void HouseVisitVillager::execVisitOutside() {
    using namespace sB;
    if (HouseVisit_IsAppointmentNow(this)) {
        VillagerActor *p = func_02095204(4);
        if (p) {
            Unk_ov068_02270afc_Vec v;
            Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)&p->unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &unk_5c) > 0x4e66) {
                TalkRequest_AddPlayerTalk6(this, 0);
            }
        }
    }
}

BOOL HouseVisitVillager::enterVisitCall() {
    using namespace sB;
    u32 loc[6];
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 0;
    Ground_LockExit(0);
    func_0205b124(loc);
    unk_a4c = func_0205afdc(loc, &unk_a44);
    func_020b1028();
    if (vfunc_64()) {
        VillagerState_SetRole(Villager_GetState(vfunc_64()), 2);
    }
    unk_a59 = 30;
    func_02003e70(&unk_514, 0x4ca, 0x7f, 0);
    func_0205b120(loc);
    return TRUE;
}

void HouseVisitVillager::execVisitCall() {
    using namespace sB;
    if (unk_a59 > 0) {
        unk_a59 = unk_a59 - 1;
    }
    if (unk_a59 == 0) {
        NpcTalkCtrl_requestTalk(&unk_618, 0, 1);
        unk_a59 = -1;
    }
}

BOOL HouseVisitVillager::enterVisitDoorOpen() {
    using namespace sB;
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 1;
    return TRUE;
}

void HouseVisitVillager::execVisitDoorOpen() {
    using namespace sB;
    if (unk_898.unk_3c->unk_04 == 0) {
        func_02003e70(&unk_514, 0x4cb, 0x7f, 0);
        func_020b0e60();
        setVisitState(3);
    }
}

BOOL HouseVisitVillager::enterVisitWalkIn() {
    using namespace sB;
    unk_a68 = unk_5c;
    unk_a6c = unk_60;
    unk_a70 = unk_64;
    unk_a70 = unk_a70 - 0x2000;
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 1;
    unk_a48 = 0x28;
    return TRUE;
}

void HouseVisitVillager::execVisitWalkIn() {
    using namespace sB;
    if (unk_a48 == 1) {
        unk_a3c = *(Unk_ov068_02270afc_BFn *)data_ov068_0227099c;
        NpcActionCtrl_requestAction(&unk_564, 1, 2, unk_a68, unk_a70, 0, 0, 0, 0, 0, 0);
    } else if (unk_a48 == 0) {
        if (NpcActionCtrl_isActionDone(&unk_564)) {
            setVisitState(4);
        }
    }
    if (unk_a48 != 0) {
        unk_a48 = unk_a48 - 1;
    }
}

BOOL HouseVisitVillager::enterVisitGreetEnd() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return NpcActionCtrl_requestStand(&unk_564, 2, data_020c6cc8);
    } else {
        return NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8);
    }
}

void HouseVisitVillager::execVisitGreetEnd() {
    using namespace sB;
    if (setVisitState(5)) {
        TalkRequest_SetTargetDone(this);
    }
}

BOOL HouseVisitVillager::enterVisitStay() {
    using namespace sB;
    unk_a4a = 5;
    NpcMoveCtrl_setSpeedPreset(&unk_350, 1, 0x148, 0x25, 0x25);
    unk_a56 = 0x258;
    return TRUE;
}

void HouseVisitVillager::execVisitStay() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        if (unk_a56 == 0 || unk_a54 == 0) {
            if (unk_a58 == 0) {
                TalkRequest_AddPlayerTalk6(this, 0);
                unk_a50 = 1;
                return;
            } else if (unk_a58 != 0) {
                unk_a58 = unk_a58 - 1;
            }
        }
        if (unk_a56 > 0) {
            unk_a56 = unk_a56 - 1;
        }
    }
    Unk_ov068_02270afc_Vec *p = func_020947f0(4);
    if (p) {
        Unk_ov068_02270afc_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        if (Ground_IsOnLockedExit(&v)) {
            TalkRequest_AddPlayerTalk6(this, 0);
            unk_a51 = 1;
        }
    }
}

BOOL HouseVisitVillager::enterVisitWander() {
    using namespace sB;
    if (NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8)) {
        NpcLookAt_setTarget(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        Ground_LockExit(0);
        return TRUE;
    }
    return FALSE;
}

void HouseVisitVillager::execVisitWander() {
    using namespace sA;
    Unk_ov068_02270afc_Vec v;
    Unk_ov068_02270afc_Vec tmp;
    Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)func_020947f0(4);
    if (unk_894 == 6) {
        if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
            if (unk_a56 == 0 || unk_a54 == 0) {
                if (unk_a58 == 0) {
                    TalkRequest_AddPlayerTalk6(this, 0);
                    unk_a50 = 1;
                    return;
                }
                if (unk_a58 > 0) {
                    unk_a58--;
                }
            }
            if (unk_a56 > 0) {
                unk_a56--;
            }
        }
    }
    if (unk_894 == 6) {
        if (pv != NULL) {
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (Ground_IsOnLockedExit(&v)) {
                TalkRequest_AddPlayerTalk6(this, 0);
                unk_a51 = 1;
                return;
            }
        }
    }
    s32 d = data_020c8cbc;
    if (pv != NULL) {
        d = func_020e9650(pv, &unk_5c);
    }
    if ((*((u8 *)this + 0x508)) != 0 || (unk_894 != 6 && d < 0x2334)) {
        if (NpcActionCtrl_getAction(&unk_564) == 1 || unk_894 == 3) {
            if (NpcActionCtrl_requestStand(&unk_564, 2, data_020c6cc8)) {
                func_ov068_0226ee18();
                return;
            }
        }
    }
    if (NpcActionCtrl_getAction(&unk_564) == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a5a = Mailbox_execNoMail(&unk_a68, &unk_5c, unk_8e);
            unk_a5c = unk_a68;
            unk_a60 = unk_a6c;
            unk_a64 = unk_a70;
            if (unk_a5a != unk_8e) {
                if (!NpcActionCtrl_requestAction(&unk_564, 3, 1, 0, 0, 0, unk_a5a, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!NpcActionCtrl_requestAction(&unk_564, 1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (NpcActionCtrl_isActionDone(&unk_564)) {
                NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8);
            }
        }
    } else if (NpcActionCtrl_getAction(&unk_564) == 3) {
        if (NpcActionCtrl_isActionDone(&unk_564)) {
            NpcActionCtrl_requestAction(&unk_564, 1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (NpcActionCtrl_getAction(&unk_564) == 1) {
        switch (NpcActor_findAvoidPos(this, &tmp)) {
        case 1:
            if (NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8)) {
                func_ov068_0226ee18();
            }
            break;
        case 2:
            unk_a5c = tmp.x;
            unk_a60 = tmp.y;
            unk_a64 = tmp.z;
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&unk_350, &unk_a5c);
            break;
        default:
            if (func_020e96ec(&unk_a5c, &unk_a68) != 0) {
                unk_a5c = unk_a68;
                unk_a60 = unk_a6c;
                unk_a64 = unk_a70;
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&unk_350, &unk_a68);
            } else if (func_020e9650(&unk_a68, &unk_5c) < 0x200) {
                NpcActionCtrl_requestStand(&unk_564, 1, data_020c6cc8);
                func_ov068_0226ee18();
            }
            break;
        }
    }
}

BOOL HouseVisitVillager::enterVisitIdle7() {
    using namespace sA;
    return TRUE;
}

void HouseVisitVillager::execVisitIdle7() {
    using namespace sA;}

BOOL HouseVisitVillager::enterVisitTalk() {
    using namespace sA;
    void *p = func_02095204(4);
    if (p != NULL) {
        u32 x = NpcActor_getAngleTo(this, p);
        if (unk_a50 != 0 || unk_a51 != 0) {
            NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, x, 1);
        } else {
            NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, x, 0);
        }
        return TRUE;
    }
    return FALSE;
}

void HouseVisitVillager::execVisitTalk() {
    using namespace sA;
    setVisitState(9);
}

BOOL HouseVisitVillager::enterVisitTalkWait() {
    using namespace sA;
    return TRUE;
}

void HouseVisitVillager::execVisitTalkWait() {
    using namespace sA;
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL HouseVisitVillager::enterVisitLeave() {
    using namespace sA;
    return TRUE;
}

void HouseVisitVillager::execVisitLeave() {
    using namespace sA;
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            func_020b101c();
            if (vfunc_64() != NULL) {
                VillagerState_ResetRole(Villager_GetState(vfunc_64()));
            }
            HouseVisit_SetFinished(this);
            if (unk_a50 != 0) {
                Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
                SceneWarp_RequestExit(Scene_GetWarpRequest(), 6);
            } else {
                SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
            }
        }
    }
}

void HouseVisitVillager::vfunc_80() {
    using namespace sA;
    (*((u8 *)this + 0x893)) = 1;
}

BOOL HouseVisitVillager::vfunc_7c() {
    using namespace sA;
    if ((*((u8 *)this + 0x893)) == 0) {
        return TRUE;
    }
    return FALSE;
}
