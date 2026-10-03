// mwcc-version: 1.2/base
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

class CafeVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcMoveAnimSet_setRunAnim _ZN14NpcMoveAnimSet10setRunAnimEi
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
typedef BOOL (CafeVillager::*Unk_ov004_0224c994_Fn)();

struct Unk_ov004_0224c994_Ent {
    Unk_ov004_0224c994_Fn a;
    Unk_ov004_0224c994_Fn b;
};

struct Unk_ov004_0221a2d8_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" {
extern u16 data_020c6cc8;
extern Unk_ov004_0224c994_Ent sCafeVillagerActTable[3];
extern u8 data_ov004_022508e0[0x28];

s32 func_02063b8c(s32 a);
void *VillagerData_getVillagerId(void *o);
void VillagerId_makeFileName(void *a, const void *b, u32 c, const void *d);
void func_02015ab0(void *o, s32 a);
s32 Unk_020d77a4_getPlayerActor(void *o, s32 a);
s32 NpcTalkCtrl_isBusy(void *o);
void TalkRequest_EndTalkWith(void *o);
void *func_02015aac(void *o);
s32 Unk_020d77a4_getAngleTo(void *o, void *p);
void NpcTalkCtrl_requestTurnAndTalk(void *o, s32 a, s32 b, s32 c);
void NpcMoveAnimSet_setStandAnim(void *o, s32 a);
void NpcMoveAnimSet_setWalkAnim(void *o, s32 a);
void NpcMoveAnimSet_setRunAnim(void *o, s32 a);
void Unk_020d77a4_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
}

// Members of the scene object, named after their constructors.
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
    virtual void vfunc_4c(s32 a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 unk_68;
    u32 pad_6c;
    u32 unk_70;
    u32 pad_74[(0x8c - 0x74) / 4];
    s16 unk_8c, unk_8e, unk_90, unk_92, unk_94, unk_96;
    u32 pad_98[(0xd4 - 0x98) / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
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

class VillagerActor : public Unk_020d77a4 {
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
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
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
    virtual void vfunc_14();
    virtual void vfunc_18();
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
    void *unk_3c;
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

class VillagerTalk : public Unk_020d7710 {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void vfunc_10(u32 v);
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

class CafeVillagerTalk : public VillagerTalk {
public:
    CafeVillagerTalk();
    virtual ~CafeVillagerTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void attachOwner(CafeVillager *owner);

    /* 0x1a0 */ CafeVillager *unk_1a0;
};

class CafeVillager : public VillagerActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();

    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct02();
    BOOL setupAct02();
    void changeAct(s32 idx);

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ CafeVillagerTalk unk_898;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" CafeVillager *CafeVillager_Create();
extern "C" Unk_ov004_SceneEntry sCafeVillagerProfile = {(void *(*)())CafeVillager_Create, 0x88, 0x8c, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_022508e0[0x28];
void _ZN12CafeVillager10setupAct00Ev();
void _ZN12CafeVillager9mainAct00Ev();
void _ZN12CafeVillager9mainAct01Ev();
void _ZN12CafeVillager10setupAct02Ev();
void _ZN12CafeVillager9mainAct02Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c8d4[2] = {(void *)_ZN12CafeVillager10setupAct02Ev, 0};
void *data_ov004_0224c8bc[2] = {(void *)_ZN12CafeVillager10setupAct00Ev, 0};
void *data_ov004_0224c8dc[2] = {(void *)_ZN12CafeVillager9mainAct01Ev, 0};
void *data_ov004_0224c8cc[2] = {(void *)_ZN12CafeVillager9mainAct00Ev, 0};
void *data_ov004_0224c8c4[2] = {(void *)_ZN12CafeVillager9mainAct02Ev, 0};
}
#define PM(x) (*(Unk_ov004_0224c994_Fn *)(x))
extern "C" Unk_ov004_0224c994_Ent sCafeVillagerActTable[3] = {
    {PM(data_ov004_0224c8bc), PM(data_ov004_0224c8cc)},
    {0, PM(data_ov004_0224c8dc)},
    {PM(data_ov004_0224c8d4), PM(data_ov004_0224c8c4)}};
#define data_ov004_02250910 ((Unk_ov004_0224c994_Ent *)((u8 *)sCafeVillagerActTable + 8))

extern "C" CafeVillager *CafeVillager_Create() {
    return new CafeVillager;
}

BOOL CafeVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    NpcMoveAnimSet_setStandAnim(&unk_2a0, 0x1e);
    NpcMoveAnimSet_setWalkAnim(&unk_2a0, 0x1e);
    NpcMoveAnimSet_setRunAnim(&unk_2a0, 0x1e);
    Unk_020d77a4_setTalkRequest(this, &unk_898);
    unk_898.attachOwner(this);
    return TRUE;
}

BOOL CafeVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(2);
    return TRUE;
}

BOOL CafeVillager::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250910[unk_894].a) {
        r = (this->*sCafeVillagerActTable[unk_894].b)();
    }
    return r;
}

void CafeVillager::changeAct(s32 idx) {
    BOOL ok = TRUE;
    if (sCafeVillagerActTable[idx].a) {
        ok = (this->*sCafeVillagerActTable[idx].a)();
    }
    if (ok) {
        unk_894 = idx;
    }
}

BOOL CafeVillager::setupAct02() {
    NpcActionCtrl_requestAction(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL CafeVillager::mainAct02() { return TRUE; }

BOOL CafeVillager::setupAct00() {
    void *p = func_02015aac(&unk_898);
    s32 v = 0;
    if (p) {
        v = Unk_020d77a4_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, v, 0);
    return TRUE;
}

BOOL CafeVillager::mainAct00() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        changeAct(1);
    }
    return TRUE;
}

BOOL CafeVillager::mainAct01() { return TRUE; }

CafeVillagerTalk::CafeVillagerTalk() {}

CafeVillagerTalk::~CafeVillagerTalk() {}

void CafeVillagerTalk::attachOwner(CafeVillager *owner) {
    vfunc_08();
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a0 = owner;
}

void CafeVillagerTalk::vfunc_78(void *arg) {
    Unk_ov004_0221a2d8_Out *out = (Unk_ov004_0221a2d8_Out *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022508e0, 0x28, "ai_shop3");
    out->unk_00 = data_ov004_022508e0;
    out->unk_04 = func_02063b8c(5);
}

void CafeVillagerTalk::vfunc_14() {}

void CafeVillagerTalk::vfunc_18() {}

BOOL CafeVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void CafeVillager::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_898.vfunc_08();
        func_02015ab0(&unk_898, Unk_020d77a4_getPlayerActor(this, 4));
        changeAct(0);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

