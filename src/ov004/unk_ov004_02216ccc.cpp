// mwcc-version: 1.2/base
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

class HouseOwnerVillager;

#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define Unk_02015b8c_getAnimId _ZN12Unk_02015b8c9getAnimIdEj
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_netGetSlots _ZN8NpcActor11netGetSlotsEii
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerMood_update _ZN12VillagerMood6updateEP12VillagerTalk
#define VillagerMood_requestApply _ZN12VillagerMood12requestApplyEv
#define VillagerTalk_getEventKind _ZN12VillagerTalk12getEventKindEv
#define VillagerTalkTopics_updateCatchPlans _ZN18VillagerTalkTopics16updateCatchPlansEPhPvj
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerClothModel_getItem _ZN18VillagerClothModel7getItemEv
#define VillagerClothModel_change _ZN18VillagerClothModel6changeEP13VillagerActorPt
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
class HouseOwnerAi;

typedef BOOL (HouseOwnerAi::*Unk_ov004_02216ff4_Fn)(HouseOwnerVillager *);
typedef void (HouseOwnerAi::*Unk_ov004_02216ff4_VFn)(HouseOwnerVillager *);

struct Unk_ov004_0221745c_Dir {
    s32 dx;
    s32 dy;
    Unk_ov004_0221745c_Dir(s32 a, s32 b) : dx(a), dy(b) {}
};

struct Unk_ov004_02216ff4_Entry {
    Unk_ov004_02216ff4_Fn enter;
    Unk_ov004_02216ff4_Fn update;
};

struct Unk_ov004_022170e0_Global {
    u8 pad_00[0x64];
    s32 unk_64;
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
extern Unk_ov004_0221745c_Dir sHouseOwnerStepDirs[4];
extern Unk_ov004_02216ff4_Entry sHouseOwnerAiStates[];
extern Unk_ov004_022170e0_Global *gCommManager;
extern u16 data_020c6cc8;
extern const u8 data_ov004_02240090[4];
extern const u8 data_ov004_02240094[5];

s32 NpcActor_netSetSlotsIfOwner(void *, u32, u32, u32);
s32 NpcActor_isNetOwner(void *);
s32 NpcActor_netGetSlots(void *, s32 *, s32 *);
s32 NpcActor_netIsTalkLocked(void *);
s32 VillagerTalk_getEventKind(void *);
s32 Villager_GetResidentStatus(void *);
s32 NpcActor_getPlayerActor(void *, u32);
void VillagerTalk_begin(void *, void *, s32);
void func_02015ab0(void *, s32);
s32 NetArea_IsLocalOwner();
s32 NpcTalkCtrl_isBusy(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActionCtrl_requestStand(void *, u32, u32);
s32 NpcActor_getAngleToPlayer(void *, u32);
void NpcActionCtrl_requestAction(void *, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
void VillagerMood_requestApply(void *);
void TalkRequest_SetTargetDone(void *);
void *func_02015aac(void *);
s32 NpcActor_getAngleTo(void *, void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, u32, s32, u32);
s32 Random_GlobalBelow(u32);
void FieldPos_ToUnit(s32 *, s32 *, void *);
void FieldPos_FromUnitCenter(s32 *, s32, s32);
s32 RoomFreeUnitMap_TestUpper(void *, s32, s32);
s32 RoomFreeUnitMap_Test(void *, s32, s32);

u32 CommManager_isOnline(void *g);
s32 CommManager_isSlotActive(void *g, u32 v);
void *VillagerDataProfileView_getShirt(void *o);
u16 *VillagerClothModel_getItem(void *o);
s32 Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
void VillagerMood_update(void *o, void *owner);
void VillagerTalkTopics_updateCatchPlans(void *o, const void *a, const void *b, u32 c);
void TalkRequest_AddPlayerTalk6(void *o, u32 a);
void RoomFreeUnitMap_Build(void *o);
void Unk_02013474_enableFootsteps(void *o);
void *Villager_GetState(void *o);
u32 VillagerState_GetRole(void *o);
void VillagerState_SetRole(void *o, u32 a);
void *VillagerData_getVillagerId(void *o);
u32 VillagerId_isValid(void *o);
void *VillagerState_GetTalkRepeat(void *o);
void TalkRepeat_Reset(void *o);
void NpcActor_setTalkRequest(void *self, void *p);
void VillagerClothModel_change(void *self, void *owner, u16 *p);
u32 Unk_02015b8c_getAnimId(void *o, u32 v);
}

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
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 position;
    u32 positionY;
    u32 positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0xd4 - 0x90];
    u32 charNode, unk_d8, unk_dc;
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void *vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
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
    Unk_02053d3c model;
    Unk_0201ad3c moveAnimSet;
    NpcFaceAnim faceAnim;
    NpcAnimCtrl animCtrl;
    Unk_0201accc moveCtrl;
    Unk_0201a8bc obstacleProbe;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 lookAt;
    NpcSpeechState speechState;
    Unk_0201a13c emotionFx;
    Unk_020323b0 collisionState;
    Unk_02088d00 collider;
    Unk_020f4080 seEmitter;
    Unk_020135e4 footstepFx;
    NpcActionCtrl actionCtrl;
    Unk_02014254 talkCtrl;
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

    /* 0x640 */ u32 eventKind;
    /* 0x644 */ u32 talkPartnerId;
    /* 0x648 */ u32 invitedByPartner;
    /* 0x64c */ Unk_0202d7f4 clothModel;
    /* 0x680 */ Unk_0202d5e8 villagerTalk;
    /* 0x824 */ Unk_02082088 animHeapHandle;
    /* 0x82c */ void *villagerData;
    /* 0x830 */ void *villagerState;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ VillagerMood mood;
};

// Member at +0x89c (state machine). Methods are named after HouseOwnerAi, its constructor after
// HouseOwnerAiMember (symbol _ZN18HouseOwnerAiMemberC1Ev).
class HouseOwnerAi {
public:
    BOOL enterState04(HouseOwnerVillager *o);
    void updateState01Step01(HouseOwnerVillager *o);
    BOOL updateState00(HouseOwnerVillager *o);
    BOOL updateState04(HouseOwnerVillager *o);
    BOOL enterState02(HouseOwnerVillager *o);
    BOOL updateState03(HouseOwnerVillager *o);
    BOOL enterState03(HouseOwnerVillager *o);
    BOOL updateState02(HouseOwnerVillager *o);
    void updateState01Step00(HouseOwnerVillager *o);
    BOOL updateState01(HouseOwnerVillager *o);
    BOOL enterState01(HouseOwnerVillager *o);
    void updateState02Step00(HouseOwnerVillager *o);
    BOOL enterState00(HouseOwnerVillager *o);
    BOOL findStepTarget(s32 *o1, s32 *o2, HouseOwnerVillager *o);
    BOOL applyPendingState(HouseOwnerVillager *o);
    void clearPendingState();
    void changeState(HouseOwnerVillager *o, s32 idx);
    void update(HouseOwnerVillager *o);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_ov004_02216ff4_Entry *unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ s32 unk_10;
};

class HouseOwnerAiMember : public HouseOwnerAi {
public:
    HouseOwnerAiMember();
    ~HouseOwnerAiMember();
};

class RoomFreeUnitMap {
public:
    RoomFreeUnitMap();
    ~RoomFreeUnitMap();
    u32 pad[0x20 / 4];
};

class HouseOwnerVillager : public VillagerActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    BOOL drawModel();

    typedef BOOL (HouseOwnerVillager::*Fn)();
    /* 0x894 */ Fn unk_894;
    /* 0x89c */ HouseOwnerAiMember unk_89c;
    /* 0x8b0 */ RoomFreeUnitMap unk_8b0;
    /* 0x8d0 */ u8 unk_8d0;
    /* 0x8d4 */ s32 unk_8d4;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" HouseOwnerVillager *HouseOwnerVillager_Create();
extern "C" Unk_ov004_SceneEntry sHouseOwnerVillagerProfile = {(void *(*)())HouseOwnerVillager_Create, 0x85, 0x89, 2, 0x5000, 0x5000, 0x3e800};
extern "C" const u8 data_ov004_02240090[4] = {0x28, 0x1e, 0x14, 0x0a};
#define data_ov004_0225065c ((Unk_ov004_0221745c_Dir *)((u8 *)sHouseOwnerStepDirs + 4))

extern "C" HouseOwnerVillager *HouseOwnerVillager_Create() {
    return new HouseOwnerVillager;
}

BOOL HouseOwnerVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &villagerTalk);
    villagerTalk.vfunc_08();
    RoomFreeUnitMap_Build(&unk_8b0);
    unk_8d4 = 0;
    unk_8d0 = 0;
    void *p = vfunc_64();
    if (p) {
        if (VillagerId_isValid(VillagerData_getVillagerId(p))) {
            void *t = Villager_GetState(p);
            if (t) {
                TalkRepeat_Reset(VillagerState_GetTalkRepeat(t));
            }
        }
    }
    return TRUE;
}

BOOL HouseOwnerVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    unk_894 = &HouseOwnerVillager::drawModel;
    Unk_02013474_enableFootsteps(&footstepFx);
    if (NpcActor_isNetOwner(this)) {
        unk_89c.changeState(this, 0);
        VillagerTalkTopics_updateCatchPlans(this, data_ov004_02240094, data_ov004_02240090, 0);
    } else {
        unk_89c.changeState(this, 3);
    }
    u32 *g = (u32 *)gCommManager;
    if (!CommManager_isSlotActive(g, g[0x64 / 4])) {
        if (vfunc_64()) {
            if (VillagerState_GetRole(Villager_GetState(vfunc_64())) == 1) {
                VillagerState_SetRole(Villager_GetState(vfunc_64()), 0);
            }
        }
    }
    return TRUE;
}

BOOL HouseOwnerVillager::drawModel() {
    if (NpcActor::onDraw()) {
        return TRUE;
    }
    return FALSE;
}

BOOL HouseOwnerVillager::onDraw() {
    BOOL r = TRUE;
    if (unk_894) {
        r = (this->*unk_894)();
    }
    return r;
}

BOOL HouseOwnerVillager::canPlayTalkMelody() {
    if (unk_8d0 == 0) {
        return TRUE;
    }
    return FALSE;
}

void HouseOwnerVillager::onTalkMelodyPlayed() { unk_8d0 = 1; }

BOOL HouseOwnerVillager::updateAct() {
    unk_89c.update(this);
    if (CommManager_isOnline(gCommManager)) {
        if (Unk_02015b8c_getAnimId(&animCtrl, 0) != 6) {
            if (vfunc_64()) {
                u16 *p = (u16 *)VillagerDataProfileView_getShirt(vfunc_64());
                u16 *q = VillagerClothModel_getItem(&clothModel);
                BOOL eq;
                if (Item_IsFurniture(q)) {
                    eq = Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(p) ? TRUE : FALSE;
                } else {
                    eq = *q == *p ? TRUE : FALSE;
                }
                if (!eq) {
                    u16 *w = (u16 *)VillagerDataProfileView_getShirt(vfunc_64());
                    BOOL in = FALSE;
                    u16 v = *w;
                    if (v >= 0x11a8 && v <= 0x12a7) {
                        in = TRUE;
                    }
                    if (in) {
                        VillagerClothModel_change(&clothModel, this, (u16 *)VillagerDataProfileView_getShirt(vfunc_64()));
                    }
                }
            }
        }
    }
    VillagerMood_update(&mood, this);
    return TRUE;
}

HouseOwnerAiMember::HouseOwnerAiMember() {
    unk_08 = 5;
    unk_10 = 0;
}

HouseOwnerAiMember::~HouseOwnerAiMember() {}

void HouseOwnerAi::update(HouseOwnerVillager *o) {
    if (unk_04 != 0) {
        (this->*unk_04->update)(o);
    }
    if (unk_10 > 0) {
        unk_10--;
    }
}

void HouseOwnerAi::changeState(HouseOwnerVillager *o, s32 idx) {
    if (idx >= 0 && idx < 5) {
        unk_00 = idx;
        unk_04 = &sHouseOwnerAiStates[unk_00];
        unk_0c = 0;
        Unk_ov004_02216ff4_Entry *e = unk_04;
        if (e != 0 && e->enter != 0) {
            (this->*e->enter)(o);
        }
    }
}

void HouseOwnerAi::clearPendingState() {
    unk_08 = 5;
}

BOOL HouseOwnerAi::applyPendingState(HouseOwnerVillager *o) {
    BOOL r = FALSE;
    if (unk_08 < 5) {
        changeState(o, unk_08);
        clearPendingState();
        r = TRUE;
    }
    return r;
}

BOOL HouseOwnerAi::findStepTarget(s32 *o1, s32 *o2, HouseOwnerVillager *o) {
    s32 x, y;
    s32 v[3];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    x = 0;
    y = 0;
    u8 dir = (o->rotY >> 14) & 3;
    FieldPos_ToUnit(&x, &y, (u8 *)o + 0x5c);
    s32 px = x;
    s32 py = y;
    px += sHouseOwnerStepDirs[dir].dx;
    py += data_ov004_0225065c[dir].dx;
    if ((u32) * (volatile s32 *)&y < 0xe) {
        if (RoomFreeUnitMap_TestUpper(&o->unk_8b0, px, py) != 0) {
            FieldPos_FromUnitCenter(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    } else {
        if (RoomFreeUnitMap_Test(&o->unk_8b0, px, py) != 0) {
            FieldPos_FromUnitCenter(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" const u8 data_ov004_02240094[5] = {0x00, 0x0a, 0x32, 0x0f, 0x14};
extern "C" Unk_ov004_02216ff4_Entry sHouseOwnerAiStates[5] = {
    {&HouseOwnerAi::enterState00, &HouseOwnerAi::updateState00},
    {&HouseOwnerAi::enterState01, &HouseOwnerAi::updateState01},
    {&HouseOwnerAi::enterState02, &HouseOwnerAi::updateState02},
    {&HouseOwnerAi::enterState03, &HouseOwnerAi::updateState03},
    {&HouseOwnerAi::enterState04, &HouseOwnerAi::updateState04}};
extern "C" Unk_ov004_0221745c_Dir sHouseOwnerStepDirs[4] = {
    Unk_ov004_0221745c_Dir(0, 1), Unk_ov004_0221745c_Dir(1, 0), Unk_ov004_0221745c_Dir(0, -1), Unk_ov004_0221745c_Dir(-1, 0)};

BOOL HouseOwnerAi::enterState00(HouseOwnerVillager *o) {
    o->unk_894 = &HouseOwnerVillager::drawModel;
    NpcActionCtrl_requestAction(&o->actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_10 = 0;
    return TRUE;
}

BOOL HouseOwnerAi::updateState00(HouseOwnerVillager *o) {
    u8 *sub = (u8 *)&o->actionCtrl;
    s32 a, b;
    if (NpcActionCtrl_isActionDone(sub) != 0) {
        a = 0;
        b = 0;
        if (Random_GlobalBelow(7) == 0) {
            if ((o->rotY & 0x3fff) != 0) {
                s32 v = (s32)(Random_GlobalBelow(4) << 30) >> 16;
                if (v == o->rotY) {
                    v = (s16)(v + 0x4000);
                }
                NpcActionCtrl_requestAction(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            } else {
                if (Random_GlobalBelow(3) != 0 && findStepTarget(&a, &b, o) != 0) {
                    NpcActionCtrl_requestAction(sub, 1, 1, a, b, 0, 0, 0, 0, data_020c6cc8, 0);
                    unk_10 = 0x3c;
                } else {
                    s32 v = (s32)(Random_GlobalBelow(4) << 30) >> 16;
                    if (v == o->rotY) {
                        v = (s16)(v + 0x4000);
                    }
                    NpcActionCtrl_requestAction(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
                }
            }
        } else {
            NpcActionCtrl_requestAction(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (unk_10 == 0 && NpcActionCtrl_getAction(sub) == 1) {
            NpcActionCtrl_requestAction(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState01(HouseOwnerVillager *o) {
    void *t = func_02015aac(&o->villagerTalk);
    s32 r = 0;
    if (t != 0) {
        r = NpcActor_getAngleTo(o, t);
    }
    NpcTalkCtrl_requestTurnAndTalk(&o->talkCtrl, 0, r, 0);
    return TRUE;
}

void HouseOwnerAi::updateState01Step00(HouseOwnerVillager *o) {
    if (NpcTalkCtrl_isBusy(&o->talkCtrl) == 0) {
        VillagerMood_requestApply(&o->mood);
        TalkRequest_SetTargetDone(o);
        unk_0c = 1;
    }
}

void HouseOwnerAi::updateState01Step01(HouseOwnerVillager *o) {}

BOOL HouseOwnerAi::updateState01(HouseOwnerVillager *o) {
    static Unk_ov004_02216ff4_VFn tbl[2] = {&HouseOwnerAi::updateState01Step00, &HouseOwnerAi::updateState01Step01};
    if (unk_0c < 2) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState02(HouseOwnerVillager *o) {
    s32 t = NpcActor_getAngleToPlayer(o, o->footstepFx.unk_08);
    NpcActionCtrl_requestAction(&o->actionCtrl, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    unk_0c = 0;
    return TRUE;
}

void HouseOwnerAi::updateState02Step00(HouseOwnerVillager *o) {
    if (NpcActionCtrl_getAction(&o->actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&o->actionCtrl) != 0) {
            NpcActionCtrl_requestStand(&o->actionCtrl, 2, data_020c6cc8);
            unk_0c = 1;
        }
    }
}

BOOL HouseOwnerAi::updateState02(HouseOwnerVillager *o) {
    static Unk_ov004_02216ff4_VFn tbl[1] = {&HouseOwnerAi::updateState02Step00};
    if (unk_0c < 1) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState03(HouseOwnerVillager *o) {
    return TRUE;
}

BOOL HouseOwnerAi::updateState03(HouseOwnerVillager *o) {
    if (NpcActor_isNetOwner(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        s32 la;
        void *w = o->villagerData;
        s32 g;
        if (NpcActor_netGetSlots(o, &a, &b) != 0 && ((la = a), la == (g = gCommManager->unk_64)) && la == b) {
            NpcActor_netSetSlotsIfOwner(o, 1, g, g);
            if (w != 0 && Villager_GetResidentStatus(w) != 3) {
                o->unk_8d4 = 12;
            } else {
                o->unk_8d4 = 0;
            }
            VillagerTalk_begin(&o->villagerTalk, o, o->unk_8d4);
            func_02015ab0(&o->villagerTalk, NpcActor_getPlayerActor(o, 4));
            o->unk_89c.changeState(o, 1);
        } else {
            if (NetArea_IsLocalOwner() != 0 && b == 4) {
                NpcActor_netSetSlotsIfOwner(o, 1, gCommManager->unk_64, 4);
                if (o->unk_89c.applyPendingState(o) == 0) {
                    o->unk_89c.changeState(o, 0);
                }
            }
        }
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState04(HouseOwnerVillager *o) {
    return TRUE;
}

BOOL HouseOwnerAi::updateState04(HouseOwnerVillager *o) {
    if (NpcActor_isNetOwner(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (NpcActor_netGetSlots(o, &a, &b) != 0) {
            if (a == 4) {
                if (NetArea_IsLocalOwner() != 0) {
                    NpcActor_netSetSlotsIfOwner(o, 1, gCommManager->unk_64, 4);
                    if (o->unk_89c.applyPendingState(o) == 0) {
                        o->unk_89c.changeState(o, 0);
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL HouseOwnerVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void HouseOwnerVillager::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        footstepFx.unk_08 = v;
        if (v != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, v);
            unk_89c.changeState(this, 2);
        } else {
            if (NpcActor_isNetOwner(this) == 0) {
                return;
            }
            s32 g = gCommManager->unk_64;
            NpcActor_netSetSlotsIfOwner(this, 1, g, g);
            if (villagerData != 0 && Villager_GetResidentStatus(villagerData) != 3) {
                unk_8d4 = 12;
            } else {
                switch (VillagerTalk_getEventKind(this)) {
                case 1:
                    unk_8d4 = 3;
                    break;
                case 0:
                    unk_8d4 = 5;
                    break;
                case 8:
                case 9:
                    unk_8d4 = 11;
                    break;
                default:
                    unk_8d4 = 0;
                    break;
                }
            }
            unk_89c.changeState(this, 2);
        }
        break;
    case 0:
        footstepFx.unk_08 = v;
        if (v != 4 && v != gCommManager->unk_64) {
            NpcActor_netSetSlotsIfOwner(this, 1, v, v);
            unk_89c.changeState(this, 4);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->unk_64;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                VillagerTalk_begin(&villagerTalk, this, unk_8d4);
                func_02015ab0(&villagerTalk, NpcActor_getPlayerActor(this, 4));
                unk_89c.changeState(this, 1);
                unk_8d4 = 0;
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (NetArea_IsLocalOwner() != 0) {
                NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->unk_64, 4);
                if (unk_89c.applyPendingState(this) == 0) {
                    unk_89c.changeState(this, 0);
                }
            } else {
                NpcActor_netSetSlotsIfOwner(this, 1, 4, gCommManager->unk_64);
                unk_89c.changeState(this, 3);
            }
        }
        break;
    case 4:
        if (NpcActor_netIsTalkLocked(this) != 0) {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (NpcActor_netGetSlots(this, &a, &b) != 0) {
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
                    if (unk_89c.applyPendingState(this) == 0) {
                        unk_89c.changeState(this, 0);
                    }
                }
            }
        }
        break;
    }
}

