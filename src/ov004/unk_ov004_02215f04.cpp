// mwcc-version: 1.2/base
// ov004 TU07: .text 0x02215f04-0x02216ccc (classes BirthdayGuestVillager and its member BirthdayGuestVillagerTalk)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: NpcActor::postCreate takes one argument.
#include "Unk_020d8c7c.h"
#include "gfx/Unk_ov004_Quad.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "town/Unk_0204e858_Grid.h"
#include "game/Unk_ov004_02215c94_V.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/TalkWindowState.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/VillagerTalk.h"
#include "npc/BirthdayHostVillager.h"

extern "C" {
struct Unk_ov004_02215c94_S : Unk_ov004_02215c94_V {
    Unk_ov004_02215c94_S(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_ov004_02215c94_S() {}
};
}


// ---------------------------------------------------------------------------------------------------------------------




// ---------------------------------------------------------------------------------------------------------------------






class BirthdayGuestVillager;

class BirthdayGuestVillagerTalk : public VillagerTalk {
public:
    BirthdayGuestVillagerTalk() {}
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(VillagerActor *owner);
    void setTalked();
    BOOL isNotTalkedYet();
    void *getPlayerMemory();

    BirthdayGuestVillager *villager;
};

typedef void (BirthdayGuestVillager::*Unk_ov004_0224c228_VFn)();
typedef BOOL (BirthdayGuestVillager::*Unk_ov004_0224c228_BFn)();

class BirthdayGuestVillager : public VillagerActor {
public:
    BirthdayGuestVillager() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

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

    /* 0x894 */ s32 act;
    /* 0x898 */ BirthdayGuestVillagerTalk talk;
    /* 0xa3c */ Unk_ov004_0224c228_BFn drawFn;
    /* 0xa44 */ u8 emotionTimer;
    /* 0xa45 */ u8 pad_a45;
    /* 0xa46 */ u16 chatCooldown;
    /* 0xa48 */ s16 walkAngle;
    /* 0xa4a */ u16 walkTimer;
    /* 0xa4c */ Unk_020d77a4_Vec3 waypoint;
    /* 0xa58 */ Unk_020d77a4_Vec3 walkTarget;
};


typedef Unk_020d77a4_Vec3 Unk_ov004_Vec3;


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
s32 Vec_DistXZ(void *, void *);
s32 Vec_NotEqual(void *, void *);
s32 Math_Atan2(s32, s32);
s32 Math_AngleDiffAbs(s32, s32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_requestStand(void *, u32, u32);
s32 NpcActionCtrl_requestAction(void *, u32, s32, s32, s32, s16, s16, s32, s32, u16, u16);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 NpcActor_findAvoidPos(void *, void *);
s32 NpcLookAt_setTarget(void *, u32, s32, s32, void *, s32, s32, u32);
s32 Random_GlobalBelow(s32);
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
void *PlayerActor_GetActor(s32);
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
void ItemPickSpec_Destruct(void *);
void ItemPick_One(u16 *, void *, s32, s32, s32, s32, s32);
void ItemPick_FtrWallCarpetByClass(u16 *, void *, s32);
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



extern "C" BirthdayGuestVillager *BirthdayGuestVillager_Create();
extern "C" void _ZN21BirthdayGuestVillager9drawModelEv();
extern "C" void *data_ov004_0224c158[2];
extern "C" Unk_ov004_Quad data_ov004_02250588(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250598(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225057c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250580(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225058c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250594(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry sBirthdayGuestVillagerProfile = { (void *(*)())BirthdayGuestVillager_Create, 0x81, 0x85, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
BirthdayGuestVillager *sBirthdayGuestVillager;
}
extern "C" void *data_ov004_0224c158[2] = { (void *)_ZN21BirthdayGuestVillager9drawModelEv, 0 };
extern "C" {
u8 sBirthdayGuestMsgFile[0x28];
}

extern "C" BirthdayHostVillager *sBirthdayHostVillager;
extern "C" s32 Room_PickRandomWalkTarget(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle);


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
        s32 pick = Random_GlobalBelow(count);
        s32 k = 0;
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (x != gx && y != gy) {
                    if (Ground_GetWalkLinks(x, y)) {
                        if (k == pick) {
                            FieldPos_FromUnitCenter(out, x, y);
                            s32 d = Math_Atan2(out->x - in->x, out->z - in->z);
                            if (Math_AngleDiffAbs(angle, d) < 0x2000) {
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

BOOL BirthdayGuestVillager::preCreate() {
    if (!VillagerActor::preCreate()) {
        return FALSE;
    }
    sBirthdayGuestVillager = this;
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    changeAct(0);
    return TRUE;
}

BOOL BirthdayGuestVillager::onCreate() {
    if (!VillagerActor::onCreate()) {
        return FALSE;
    }
    drawFn = *(Unk_ov004_0224c228_BFn *)data_ov004_0224c158;
    blockFurnitureCells();
    Unk_02013474_enableFootsteps((u8 *)&footstepFx);
    return TRUE;
}

BOOL BirthdayGuestVillager::drawModel() {
    if (NpcActor::onDraw()) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayGuestVillager::onDraw() {
    if (drawFn) {
        return (this->*drawFn)();
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
    if ((u8 *)g->width > (u8 *)0 && (u8 *)g->height > (u8 *)0 && g->blocks) {
        c = g->blocks;
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
        if (villagerData) {
            void *r = PlayerData_getPlayerId(p);
            VillagerMemory_RecordTalk(Villager_FindOrCreateMemory(villagerData, r), 0, 0, 0);
        }
    }
}

BOOL BirthdayGuestVillager::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy((u8 *)&talkCtrl)) {
        return FALSE;
    }
    if (act <= 3) {
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillager::onInteractionEvent(u32 a, u8 b) {
    Unk_ov004_Vec3 v;
    v.x = position.x;
    v.y = position.y;
    v.z = position.z;
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
    BirthdayGuestVillager *o = villager;
    if (o && o->villagerData) {
        void *r = PlayerData_getPlayerId(PlayerData_GetCurrent());
        return Villager_FindOrCreateMemory(villager->villagerData, r);
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
    villager = (BirthdayGuestVillager *)owner;
}

void BirthdayGuestVillagerTalk::start(TalkStartMsg *arg) {
    BirthdayGuestVillager *o = villager;
    u32 *out = (u32 *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(o->villagerData), sBirthdayGuestMsgFile, 0x28, (u32)"ev_nbirth");
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
        ((u8 *)arg)[4] = Random_GlobalBelow(2) + 0x1a;
        break;
    case 1:
        ((u8 *)arg)[4] = Random_GlobalBelow(4) + 0x1e;
        break;
    default:
        ((u8 *)arg)[4] = Random_GlobalBelow(2) + 0x1c;
        break;
    }
    o = villager;
    if (*(void **)((u8 *)o + 0x8d4)) {
        u8 *const g = gSaveData;
        void *p = Scene_GetVillagerHouse();
        if (SaveVillagers_IsOccupied(gSaveVillagers, p)) {
            MsgString9B loc;
            ActorTalkRequest_setVillagerNameSlot((u8 *)villager + 0x898, VillagerData_getVillagerId(SaveVillagers_Get(g + 0x8a3c, p)), 1);
        }
        BirthdayGuestVillager *o2 = villager;
        if (o2) {
            void *m = o2->villagerData;
            if (m) {
                ActorTalkRequest_setVillagerNameSlot((u8 *)villager + 0x898, VillagerData_getVillagerId(m), 0);
            }
        }
    }
}

void BirthdayGuestVillagerTalk::onMessageStart(u32) {}

void BirthdayGuestVillagerTalk::onMessageEnd(u32) {}

void BirthdayGuestVillagerTalk::onChoice(u32) {}

BOOL BirthdayGuestVillager::changeAct(s32 idx) {
    static Unk_ov004_0224c228_BFn tbl[7] = {
        &BirthdayGuestVillager::setupAct00, &BirthdayGuestVillager::setupAct01,
        &BirthdayGuestVillager::setupAct02, &BirthdayGuestVillager::setupAct03,
        &BirthdayGuestVillager::setupAct04, &BirthdayGuestVillager::setupAct05,
        &BirthdayGuestVillager::setupAct06,
    };
    if (idx < 7) {
        if ((this->*tbl[idx])()) {
            act = idx;
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
    s32 s = act;
    if (s < 7) {
        (this->*tbl[s])();
    }
}

BOOL BirthdayGuestVillager::setupAct00() {
    if (NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8)) {
        NpcLookAt_setTarget((u8 *)&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct00() {
    Unk_ov004_Vec3 v;
    Unk_ov004_022162f0_Actor *a = (Unk_ov004_022162f0_Actor *)BirthdayHostVillager_Get(this);
    s32 d;
    if (a) {
        d = Vec_DistXZ(&a->pos, &position);
    } else {
        d = data_020c8cbc;
    }
    if (chatCooldown != 0) {
        chatCooldown--;
    }
    if (collider.isHit != 0) {
        if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 1) {
            if (NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8)) {
                goto end;
            }
        }
    }
    if (d < 0x3334) {
        if (changeAct(1)) {
            goto end;
        }
    }
    if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 0) {
        if (walkTimer != 0) {
            walkTimer--;
        }
        if (walkTimer == 0) {
            walkAngle = Room_PickRandomWalkTarget(&walkTarget, (Unk_ov004_Vec3 *)&position, rotY);
            waypoint.x = walkTarget.x;
            waypoint.y = walkTarget.y;
            waypoint.z = walkTarget.z;
            if (a && d >= 0x6000 && Random_GlobalBelow(2) == 0) {
                d = Math_Atan2(a->pos.x - position.x, a->pos.z - position.z);
                s32 df = Math_AngleDiffAbs(rotY, d);
                Unk_ov004_Vec3 *pa = &a->pos;
                s32 xx = *(volatile s32 *)&a->pos.x;
                Unk_ov004_Vec3 *pq = &walkTarget;
                pq->x = xx;
                walkTarget.y = pa->y;
                walkTarget.z = pa->z;
                waypoint.x = pq->x;
                waypoint.y = pq->y;
                waypoint.z = pq->z;
                if (df >= 0x2000) {
                    walkAngle = d;
                }
            }
            s16 t = walkAngle;
            if (t != rotY) {
                if (!NpcActionCtrl_requestAction((u8 *)&actionCtrl, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                walkTimer = Random_GlobalBelow(0x46) + 0x14;
            } else {
                if (!NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, walkTarget.x, walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                walkTimer = Random_GlobalBelow(0x50) + 0x14;
            }
        } else {
            if (NpcActionCtrl_isActionDone((u8 *)&actionCtrl)) {
                NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
            }
        }
    } else {
        if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 3) {
            if (NpcActionCtrl_isActionDone((u8 *)&actionCtrl)) {
                NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, walkTarget.x, walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 1) {
            switch (NpcActor_findAvoidPos(this, &v)) {
            case 1:
                NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
                break;
            case 2: {
                Unk_ov004_Vec3 *pv = &waypoint;
                pv->x = v.x;
                waypoint.y = v.y;
                waypoint.z = v.z;
                NpcMoveCtrl_setWaypoint((u8 *)&moveCtrl, &waypoint);
                break;
            }
            default:
                if (Vec_NotEqual(&waypoint, &walkTarget)) {
                    Unk_ov004_Vec3 *pw = &walkTarget;
                    waypoint.x = pw->x;
                    waypoint.y = walkTarget.y;
                    waypoint.z = walkTarget.z;
                    NpcMoveCtrl_setWaypoint((u8 *)&moveCtrl, pw);
                } else if (Vec_DistXZ(&walkTarget, &position) < 0x200) {
                    NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
                }
                break;
            }
        }
    }
end:;
}

BOOL BirthdayGuestVillager::setupAct01() {
    if (chatCooldown == 0) {
        void *p = &actionCtrl;
        BirthdayHostVillager *o = BirthdayHostVillager_Get();
        if (o != NULL) {
            walkAngle = Math_Atan2(o->position.x - position.x, o->position.z - position.z);
            BirthdayHostVillager *g = sBirthdayHostVillager;
            BOOL r;
            if (g != NULL && (u32)g->act <= 1) {
                r = g->changeAct(1);
            } else {
                r = FALSE;
            }
            if (r) {
                NpcActionCtrl_requestAction(p, 3, 1, 0, 0, 0, walkAngle, 0, 0, data_020c6cc8, 0);
                NpcLookAt_setTarget(&lookAt, 2, 0, (s32)o, gVec3Zero, 4, data_020c6d1c, 1);
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct01() {
    s32 a = walkAngle;
    s32 b = (s16)(a + 0x8000);
    BirthdayHostVillager *o = BirthdayHostVillager_Get();
    if (o != NULL) {
        s32 da = Math_AngleDiffAbs(a, rotY);
        s32 db = Math_AngleDiffAbs(b, o->rotY);
        if (da <= 0x500 && db <= 0x500) {
            if (Random_GlobalBelow(2)) {
                if (changeAct(3)) {
                    chatCooldown = 0x12c;
                }
            } else {
                if (changeAct(2)) {
                    chatCooldown = 0x12c;
                }
            }
        }
    }
}

BOOL BirthdayGuestVillager::setupAct02() {
    BirthdayHostVillager *o = sBirthdayHostVillager;
    BOOL r;
    if (o != NULL && (u32)o->act <= 1) {
        r = o->changeAct(2);
    } else {
        r = FALSE;
    }
    if (r) {
        if (NpcActionCtrl_requestEmotion(&actionCtrl, 1, 3, data_020c6cc8)) {
            emotionTimer = 0x1e;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct02() {
    if (emotionTimer != 0) {
        emotionTimer--;
    }
    switch (emotionTimer) {
    case 1:
        NpcActionCtrl_requestEmotion(&actionCtrl, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
    }
}

BOOL BirthdayGuestVillager::setupAct03() {
    BirthdayHostVillager *o = sBirthdayHostVillager;
    BOOL r;
    if (o != NULL && (u32)o->act <= 1) {
        r = o->changeAct(3);
    } else {
        r = FALSE;
    }
    if (r) {
        if (NpcActionCtrl_requestEmotion(&actionCtrl, 1, 0x1a, data_020c6cc8)) {
            emotionTimer = 0x32;
            return TRUE;
        }
    }
    return FALSE;
}

void BirthdayGuestVillager::mainAct03() {
    if (emotionTimer != 0) {
        emotionTimer--;
    }
    switch (emotionTimer) {
    case 1:
        NpcActionCtrl_requestEmotion(&actionCtrl, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
    }
}

BOOL BirthdayGuestVillager::setupAct04() {
    if ((u32)(act - 1) <= 2) {
        NpcActionCtrl_requestEmotion(&actionCtrl, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void BirthdayGuestVillager::mainAct04() {}

BOOL BirthdayGuestVillager::setupAct05() {
    void *p = PlayerActor_GetActor(4);
    if (p != NULL) {
        NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, NpcActor_getAngleTo(this, p), 0);
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

void BirthdayGuestVillager::onTalkMelodyPlayed() {
    *((u8 *)this + 0x893) = 1;
}

BOOL BirthdayGuestVillager::canPlayTalkMelody() {
    if (*((u8 *)this + 0x893) == 0) {
        return TRUE;
    }
    return FALSE;
}

