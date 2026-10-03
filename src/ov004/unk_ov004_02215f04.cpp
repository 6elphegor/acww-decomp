// mwcc-version: 1.2/base
// ov004 TU07: .text 0x02215f04-0x02216ccc (classes BirthdayGuestVillager and its member BirthdayGuestVillagerTalk)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: NpcActor::postCreate takes one argument.
#define postCreate() postCreate(s32 a)
#include "Unk_020d8c7c.h"
#undef postCreate

extern "C" {
struct Unk_ov004_02215c94_V {
    s32 x, y, z;
};
struct Unk_ov004_02215c94_S : Unk_ov004_02215c94_V {
    Unk_ov004_02215c94_S(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_ov004_02215c94_S() {}
};
}

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------------------------------------------------------------
// Class chain of BirthdayGuestVillager (vtable 0x0224c228). Every slot's final overrider carries the name the symbols use.
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
    virtual BOOL vfunc_58(void *a);

    u32 pad_04[0x58 / 4];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xe0 - 0x90];
};

class NpcActor : public Character {
public:
    virtual BOOL onDraw();
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
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
// Member BirthdayGuestVillagerTalk (at +0x898 of the menu): a menu state holder with the owner at +0x1a0. Its vtable
// 0x0224c198 names its slots after four library classes; the chain below reproduces which class owns which slot.
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
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_0221572c_Sub *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class BirthdayGuestVillager;

class BirthdayGuestVillagerTalk : public VillagerTalk {
public:
    BirthdayGuestVillagerTalk() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void attachOwner(VillagerActor *owner);
    void setTalked();
    BOOL isNotTalkedYet();
    void *getPlayerMemory();

    BirthdayGuestVillager *unk_1a0;
};

typedef void (BirthdayGuestVillager::*Unk_ov004_0224c228_VFn)();
typedef BOOL (BirthdayGuestVillager::*Unk_ov004_0224c228_BFn)();

class BirthdayGuestVillager : public VillagerActor {
public:
    BirthdayGuestVillager() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void execAct();
    BOOL setupAct06();
    BOOL setupAct02();
    BOOL setupAct05();
    BOOL setupAct03();
    BOOL setupAct04();
    BOOL setupAct01();
    BOOL setupAct00();
    BOOL changeAct(s32 idx);
    void func_ov004_02216a0c();
    void blockFurnitureCells();
    BOOL drawModel();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ BirthdayGuestVillagerTalk unk_898;
    /* 0xa3c */ Unk_ov004_0224c228_BFn unk_a3c;
    /* 0xa44 */ u8 unk_a44;
    /* 0xa45 */ u8 pad_a45;
    /* 0xa46 */ u16 unk_a46;
    /* 0xa48 */ s16 unk_a48;
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ Unk_020d77a4_Vec3 unk_a4c;
    /* 0xa58 */ Unk_020d77a4_Vec3 unk_a58;
};

// Menu of TU06, seen from here: only what the code in this unit touches.
class BirthdayHostVillager : public VillagerActor {
public:
    BOOL changeAct(s32 idx);

    /* 0x894 */ s32 unk_894;
};

typedef Unk_020d77a4_Vec3 Unk_ov004_Vec3;

struct Unk_0204e858_Grid {
    void *cells;
    u32 w, h;
};

struct Unk_ov004_022162f0_Actor {
    u8 pad[0x5c];
    Unk_ov004_Vec3 pos;
};

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_setVillagerNameSlot _ZN16ActorTalkRequest19setVillagerNameSlotEjj
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestEmotion _ZN13NpcActionCtrl14requestEmotionEiht
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define NpcActor_findAvoidPos _ZN8NpcActor12findAvoidPosEP16Unk_020d77a4_Vec
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_isTalkedToday _ZN14VillagerMemory13isTalkedTodayEv
#define VillagerMemory_setTalkedToday _ZN14VillagerMemory14setTalkedTodayEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv

extern "C" {
extern s32 data_020c8cbc;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
extern u8 gSaveData[];
extern u8 gSaveVillagers[];
extern Unk_0204e858_Grid *gSceneBlockMap;
BirthdayHostVillager *BirthdayHostVillager_Get(...);
s32 func_020e9650(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_requestStand(void *, u32, u32);
s32 NpcActionCtrl_requestAction(void *, u32, s32, s32, s32, s16, s16, s32, s32, u16, u16);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 NpcActor_findAvoidPos(void *, void *);
s32 NpcLookAt_setTarget(void *, u32, s32, s32, void *, s32, s32, u32);
s32 func_02063b8c(s32);
s32 NpcTalkCtrl_isBusy(void *);
void Unk_02013474_enableFootsteps(void *);
void Camera_FocusOnPoint(void *);
void Camera_SetModeDefault();
s32 VillagerMemory_RecordTalk(void *, s32, s32, s32);
void *Villager_FindOrCreateMemory(void *, void *);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *);
void *VillagerData_getVillagerId(void *);
s32 VillagerMemory_isTalkedToday(void *);
void VillagerMemory_setTalkedToday(void *);
s32 MapBlock_GetItemPtr(void *, s32, s32, s32);
s32 Item_IsFurnitureOrF031();
void Ground_UnlinkUnit(s32, s32);
s32 Ground_GetWalkLinks(s32, s32);
void FieldPos_FromUnitCenter(void *, s32, s32);
void FieldPos_ToUnit(s32 *, s32 *, void *);
void VillagerId_makeFileName(void *, void *, u32, u32);
void *Scene_GetVillagerHouse();
s32 SaveVillagers_IsOccupied(void *, void *);
void *SaveVillagers_Get(void *, void *);
s32 ActorTalkRequest_setVillagerNameSlot(void *, void *, u32);
s32 func_0201bd20(void *, u32);
s32 Math_AngleXZ(void *, void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
void *func_02095204(s32);
s32 NpcActor_getAngleTo(void *, void *);
s32 NpcActionCtrl_requestEmotion(void *, s32, s32, u32);
void func_02067a84(void *, void *, s32);
s32 MenuCtrl_BuildPocketMask(void *);
s32 MenuCtrl_OpenPocketSelect(s32, u32);
s32 TalkRequest_SetTargetDone(void *);
s32 TalkRequest_AddPlayerTalk6(void *, u32);
extern u8 gTalkMsgIndexEnd[];
extern u8 sBirthdayHostMsgFile[];
void *func_020679b4(void *);
s32 func_020aa514(void *);
void func_02067abc(void *, void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void Pocket_AddItem(void *, s32);
void *func_02080dd8(void *);
void func_02080da4(void *, s8);
void func_0201578c(void *, void *, s32, s32);
void func_0206338c(void *, s32, s32);
void func_02063388(void *);
void ItemPick_One(u16 *, void *, s32, s32, s32, s32, s32);
void func_0206277c(u16 *, void *, s32);
void *NpcRegistry_GetVillager(s32);
s32 NpcRegistry_GetSlotCount();
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
void *MenuCtrl_GetIndex();
u16 Pocket_GetItem();
s32 Item_GetPrice(u16 *);
void Pocket_RemoveItem(void *);
void func_02014ce4(void *, void *, s32, s32, s32);
void *Villager_GetPlan(void *);
u32 VillagerPlanBlock_GetPlan(void *);
u32 func_0209b354(u32);
s32 Item_IsFurniture(void *);
void VillagerTalk_begin(void *, void *, u32);
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
void NpcActor_setTalkRequest(void *self, void *p);
void *func_0201bc4c(void *self, s32 n);
void func_02015ab0(void *p, void *q);
s32 func_02080a64(void *p);
s32 func_02080a40(void *p);
s32 func_02080a2c(void *p);
s32 func_02080a04(void *p);
s32 func_0201b138(void *p);
s32 Item_GetFurnitureIndex(u16 *p);
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
s32 BirthdayHostVillager_HasReceivedGift();
}

struct Unk_ov004_SceneEntry {
    BirthdayGuestVillager *(*factory)();
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

extern "C" BirthdayGuestVillager *BirthdayGuestVillager_Create();
extern "C" void _ZN21BirthdayGuestVillager9drawModelEv();
extern "C" void *data_ov004_0224c158[2];
extern "C" Unk_ov004_Quad data_ov004_02250588(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250598(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225057c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250580(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225058c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250594(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry sBirthdayGuestVillagerProfile = { BirthdayGuestVillager_Create, 0x81, 0x85, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
BirthdayGuestVillager *sBirthdayGuestVillager;
}
extern "C" void *data_ov004_0224c158[2] = { (void *)_ZN21BirthdayGuestVillager9drawModelEv, 0 };
extern "C" {
u8 sBirthdayGuestMsgFile[0x28];
}

extern "C" BirthdayHostVillager *sBirthdayHostVillager;
extern "C" s32 Room_PickRandomWalkTarget(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle);

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

extern "C" BirthdayGuestVillager *BirthdayGuestVillager_Create() {
    return new BirthdayGuestVillager;
}

extern "C" BirthdayGuestVillager *BirthdayGuestVillager_Get() {
    return sBirthdayGuestVillager;
}

extern "C" s32 Room_PickRandomWalkTarget(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle) {
    s32 gx, gy;
    s32 count, y, x, z;
    FieldPos_ToUnit(&gx, &gy, in);
    count = 0;
    y = count;
    z = count;
    do {
        x = z;
        do {
            if (x != gx && y != gy) {
                if (Ground_GetWalkLinks(x, y)) {
                    count++;
                }
            }
            x++;
        } while (x < 16);
        y++;
    } while (y < 14);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (count != 0) {
        s32 pick = func_02063b8c(count);
        s32 k = 0;
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (x != gx && y != gy) {
                    if (Ground_GetWalkLinks(x, y)) {
                        if (k == pick) {
                            FieldPos_FromUnitCenter(out, x, y);
                            s32 d = func_020e7b98(out->x - in->x, out->z - in->z);
                            if (func_020e780c(angle, d) < 0x2000) {
                                d = angle;
                            }
                            return d;
                        }
                        k++;
                    }
                }
            }
        }
    }
    return angle;
}

BOOL BirthdayGuestVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    sBirthdayGuestVillager = this;
    NpcActor_setTalkRequest(this, &unk_898);
    unk_898.attachOwner(this);
    changeAct(0);
    return TRUE;
}

BOOL BirthdayGuestVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    unk_a3c = *(Unk_ov004_0224c228_BFn *)data_ov004_0224c158;
    blockFurnitureCells();
    Unk_02013474_enableFootsteps(unk_558);
    return TRUE;
}

BOOL BirthdayGuestVillager::drawModel() {
    if (NpcActor::onDraw()) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayGuestVillager::onDraw() {
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL BirthdayGuestVillager::preDelete() {
    if (!VillagerActor::preDelete()) {
        return FALSE;
    }
    sBirthdayGuestVillager = 0;
    return TRUE;
}

BOOL BirthdayGuestVillager::updateAct() {
    execAct();
    return TRUE;
}

void BirthdayGuestVillager::blockFurnitureCells() {
    Unk_0204e858_Grid *g = gSceneBlockMap;
    void *c;
    s32 y, x;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells) {
        c = g->cells;
    } else {
        c = 0;
    }
    y = 0;
    volatile s32 z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (MapBlock_GetItemPtr(c, x, y, z)) {
                if (Item_IsFurnitureOrF031()) {
                    Ground_UnlinkUnit(x, y);
                }
            }
        }
    }
}

void BirthdayGuestVillager::func_ov004_02216a0c() {
    void *p = PlayerData_GetCurrent();
    if (p) {
        if (unk_82c) {
            void *r = PlayerData_getPlayerId(p);
            VillagerMemory_RecordTalk(Villager_FindOrCreateMemory(unk_82c, r), 0, 0, 0);
        }
    }
}

BOOL BirthdayGuestVillager::vfunc_48() {
    if (NpcTalkCtrl_isBusy(unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillager::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_Vec3 v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y += 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        changeAct(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        Camera_FocusOnPoint(&v);
        changeAct(5);
        break;
    case 8:
        func_ov004_02216a0c();
        Camera_SetModeDefault();
        changeAct(0);
        break;
    case 4:
        changeAct(0);
        break;
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

void *BirthdayGuestVillagerTalk::getPlayerMemory() {
    BirthdayGuestVillager *o = unk_1a0;
    if (o && o->unk_82c) {
        void *r = PlayerData_getPlayerId(PlayerData_GetCurrent());
        return Villager_FindOrCreateMemory(unk_1a0->unk_82c, r);
    }
    return 0;
}

BOOL BirthdayGuestVillagerTalk::isNotTalkedYet() {
    void *p = getPlayerMemory();
    if (p) {
        if (VillagerMemory_isTalkedToday(p)) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillagerTalk::setTalked() {
    void *p = getPlayerMemory();
    if (p) {
        VillagerMemory_setTalkedToday(p);
    }
}

void BirthdayGuestVillagerTalk::attachOwner(VillagerActor *owner) {
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a0 = (BirthdayGuestVillager *)owner;
}

void BirthdayGuestVillagerTalk::vfunc_78(void *arg) {
    BirthdayGuestVillager *o = unk_1a0;
    u32 *out = (u32 *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(o->unk_82c), sBirthdayGuestMsgFile, 0x28, (u32)"ev_nbirth");
    out[0] = (u32)sBirthdayGuestMsgFile;
    s32 r6 = 2;
    if (isNotTalkedYet()) {
        r6 = 0;
    } else if (BirthdayHostVillager_HasReceivedGift()) {
        r6 = 1;
    }
    setTalked();
    switch (r6) {
    case 0:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1a;
        break;
    case 1:
        ((u8 *)arg)[4] = func_02063b8c(4) + 0x1e;
        break;
    default:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1c;
        break;
    }
    o = unk_1a0;
    if (*(void **)((u8 *)o + 0x8d4)) {
        u8 *const g = gSaveData;
        void *p = Scene_GetVillagerHouse();
        if (SaveVillagers_IsOccupied(gSaveVillagers, p)) {
            Unk_020e1c64 loc;
            ActorTalkRequest_setVillagerNameSlot((u8 *)unk_1a0 + 0x898, VillagerData_getVillagerId(SaveVillagers_Get(g + 0x8a3c, p)), 1);
        }
        BirthdayGuestVillager *o2 = unk_1a0;
        if (o2) {
            void *m = o2->unk_82c;
            if (m) {
                ActorTalkRequest_setVillagerNameSlot((u8 *)unk_1a0 + 0x898, VillagerData_getVillagerId(m), 0);
            }
        }
    }
}

void BirthdayGuestVillagerTalk::vfunc_10() {}

void BirthdayGuestVillagerTalk::vfunc_14() {}

void BirthdayGuestVillagerTalk::vfunc_18() {}

BOOL BirthdayGuestVillager::changeAct(s32 idx) {
    static Unk_ov004_0224c228_BFn tbl[7] = {
        &BirthdayGuestVillager::setupAct00, &BirthdayGuestVillager::setupAct01,
        &BirthdayGuestVillager::setupAct02, &BirthdayGuestVillager::setupAct03,
        &BirthdayGuestVillager::setupAct04, &BirthdayGuestVillager::setupAct05,
        &BirthdayGuestVillager::setupAct06,
    };
    if (idx < 7) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::execAct() {
    static Unk_ov004_0224c228_VFn tbl[7] = {
        &BirthdayGuestVillager::mainAct00, &BirthdayGuestVillager::mainAct01,
        &BirthdayGuestVillager::mainAct02, &BirthdayGuestVillager::mainAct03,
        &BirthdayGuestVillager::mainAct04, &BirthdayGuestVillager::mainAct05,
        &BirthdayGuestVillager::mainAct06,
    };
    s32 s = unk_894;
    if (s < 7) {
        (this->*tbl[s])();
    }
}

BOOL BirthdayGuestVillager::setupAct00() {
    if (NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8)) {
        NpcLookAt_setTarget(unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct00() {
    Unk_ov004_Vec3 v;
    Unk_ov004_022162f0_Actor *a = (Unk_ov004_022162f0_Actor *)BirthdayHostVillager_Get(this);
    s32 d;
    if (a) {
        d = func_020e9650(&a->pos, unk_5c);
    } else {
        d = data_020c8cbc;
    }
    if (unk_a46 != 0) {
        unk_a46--;
    }
    if (unk_3b0[0x508 - 0x3b0] != 0) {
        if (NpcActionCtrl_getAction(unk_564) == 1) {
            if (NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8)) {
                goto end;
            }
        }
    }
    if (d < 0x3334) {
        if (changeAct(1)) {
            goto end;
        }
    }
    if (NpcActionCtrl_getAction(unk_564) == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a48 = Room_PickRandomWalkTarget(&unk_a58, (Unk_ov004_Vec3 *)unk_5c, unk_8e);
            unk_a4c.x = unk_a58.x;
            unk_a4c.y = unk_a58.y;
            unk_a4c.z = unk_a58.z;
            if (a && d >= 0x6000 && func_02063b8c(2) == 0) {
                d = func_020e7b98(a->pos.x - unk_5c[0], a->pos.z - unk_5c[2]);
                s32 df = func_020e780c(unk_8e, d);
                Unk_ov004_Vec3 *pa = &a->pos;
                s32 xx = *(volatile s32 *)&a->pos.x;
                Unk_ov004_Vec3 *pq = &unk_a58;
                pq->x = xx;
                unk_a58.y = pa->y;
                unk_a58.z = pa->z;
                unk_a4c.x = pq->x;
                unk_a4c.y = pq->y;
                unk_a4c.z = pq->z;
                if (df >= 0x2000) {
                    unk_a48 = d;
                }
            }
            s16 t = unk_a48;
            if (t != unk_8e) {
                if (!NpcActionCtrl_requestAction(unk_564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!NpcActionCtrl_requestAction(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (NpcActionCtrl_isActionDone(unk_564)) {
                NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
            }
        }
    } else {
        if (NpcActionCtrl_getAction(unk_564) == 3) {
            if (NpcActionCtrl_isActionDone(unk_564)) {
                NpcActionCtrl_requestAction(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (NpcActionCtrl_getAction(unk_564) == 1) {
            switch (NpcActor_findAvoidPos(this, &v)) {
            case 1:
                NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
                break;
            case 2: {
                Unk_ov004_Vec3 *pv = &unk_a4c;
                pv->x = v.x;
                unk_a4c.y = v.y;
                unk_a4c.z = v.z;
                NpcMoveCtrl_setWaypoint(unk_350, &unk_a4c);
                break;
            }
            default:
                if (func_020e96ec(&unk_a4c, &unk_a58)) {
                    Unk_ov004_Vec3 *pw = &unk_a58;
                    unk_a4c.x = pw->x;
                    unk_a4c.y = unk_a58.y;
                    unk_a4c.z = unk_a58.z;
                    NpcMoveCtrl_setWaypoint(unk_350, pw);
                } else if (func_020e9650(&unk_a58, unk_5c) < 0x200) {
                    NpcActionCtrl_requestStand(unk_564, 1, data_020c6cc8);
                }
                break;
            }
        }
    }
end:;
}

BOOL BirthdayGuestVillager::setupAct01() {
    if (unk_a46 == 0) {
        void *p = &unk_564;
        BirthdayHostVillager *o = BirthdayHostVillager_Get();
        if (o != NULL) {
            unk_a48 = func_020e7b98(o->unk_5c[0] - unk_5c[0], o->unk_5c[2] - unk_5c[2]);
            BirthdayHostVillager *g = sBirthdayHostVillager;
            BOOL r;
            if (g != NULL && (u32)g->unk_894 <= 1) {
                r = g->changeAct(1);
            } else {
                r = FALSE;
            }
            if (r) {
                NpcActionCtrl_requestAction(p, 3, 1, 0, 0, 0, unk_a48, 0, 0, data_020c6cc8, 0);
                NpcLookAt_setTarget(&unk_3b0, 2, 0, (s32)o, gVec3Zero, 4, data_020c6d1c, 1);
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct01() {
    s32 a = unk_a48;
    s32 b = (s16)(a + 0x8000);
    BirthdayHostVillager *o = BirthdayHostVillager_Get();
    if (o != NULL) {
        s32 da = func_020e780c(a, unk_8e);
        s32 db = func_020e780c(b, o->unk_8e);
        if (da <= 0x500 && db <= 0x500) {
            if (func_02063b8c(2)) {
                if (changeAct(3)) {
                    unk_a46 = 0x12c;
                }
            } else {
                if (changeAct(2)) {
                    unk_a46 = 0x12c;
                }
            }
        }
    }
}

BOOL BirthdayGuestVillager::setupAct02() {
    BirthdayHostVillager *o = sBirthdayHostVillager;
    BOOL r;
    if (o != NULL && (u32)o->unk_894 <= 1) {
        r = o->changeAct(2);
    } else {
        r = FALSE;
    }
    if (r) {
        if (NpcActionCtrl_requestEmotion(&unk_564, 1, 3, data_020c6cc8)) {
            unk_a44 = 0x1e;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct02() {
    if (unk_a44 != 0) {
        unk_a44--;
    }
    switch (unk_a44) {
    case 1:
        NpcActionCtrl_requestEmotion(&unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
    }
}

BOOL BirthdayGuestVillager::setupAct03() {
    BirthdayHostVillager *o = sBirthdayHostVillager;
    BOOL r;
    if (o != NULL && (u32)o->unk_894 <= 1) {
        r = o->changeAct(3);
    } else {
        r = FALSE;
    }
    if (r) {
        if (NpcActionCtrl_requestEmotion(&unk_564, 1, 0x1a, data_020c6cc8)) {
            unk_a44 = 0x32;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct03() {
    if (unk_a44 != 0) {
        unk_a44--;
    }
    switch (unk_a44) {
    case 1:
        NpcActionCtrl_requestEmotion(&unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
    }
}

BOOL BirthdayGuestVillager::setupAct04() {
    if ((u32)(unk_894 - 1) <= 2) {
        NpcActionCtrl_requestEmotion(&unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void BirthdayGuestVillager::mainAct04() {}

BOOL BirthdayGuestVillager::setupAct05() {
    void *p = func_02095204(4);
    if (p != NULL) {
        NpcTalkCtrl_requestTurnAndTalk(&unk_618, 0, NpcActor_getAngleTo(this, p), 0);
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct05() { changeAct(6); }

BOOL BirthdayGuestVillager::setupAct06() { return TRUE; }

void BirthdayGuestVillager::mainAct06() {
    void *p = *(void **)((u8 *)this + 0x8d4);
    if (p != NULL && *(u32 *)((u8 *)p + 4) == 0) {
        TalkRequest_SetTargetDone(this);
    }
}

void BirthdayGuestVillager::vfunc_80() {
    *((u8 *)this + 0x893) = 1;
}

BOOL BirthdayGuestVillager::vfunc_7c() {
    if (*((u8 *)this + 0x893) == 0) {
        return TRUE;
    }
    return FALSE;
}

