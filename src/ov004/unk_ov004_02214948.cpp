// mwcc-version: 1.2/base
// ov004 TU06: .text 0x02214948-0x02215f04 (classes BirthdayHostVillager and its member BirthdayHostVillagerTalk)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: NpcActor::postCreate takes one argument.
#include "Unk_020d8c7c.h"
#include "gfx/Unk_ov004_Quad.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "actor/Unk_ov004_022146ec_Actor.h"
#include "game/Unk_ov004_02215c94_V.h"
#include "game/FxVec3.h"
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
}


// ---------------------------------------------------------------------------------------------------------------------




// ---------------------------------------------------------------------------------------------------------------------






class BirthdayHostVillager;




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
#define NpcFootstepFx_enableFootsteps _ZN13NpcFootstepFx15enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define Unk_020d7710_requestGiveItem _ZN12Unk_020d771015requestGiveItemEPtjjj
#define ActorTalkRequest_setItemNameSlot _ZN16ActorTalkRequest15setItemNameSlotEjjj
#define ActorTalkRequest_setVillagerNameSlot _ZN16ActorTalkRequest19setVillagerNameSlotEjj
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
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
#define func_0202d948 _ZN13VillagerActor8onCreateEv
#define func_0202dab0 _ZN13VillagerActor9preCreateEv
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
Unk_ov004_02214ab4_Vec *PlayerActor_GetBodyPos(u32);
s32 NpcActor_getDistanceToPlayer(void *, u32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 Math_AngleXZ(void *, void *);
s32 Math_AngleDiffAbs(s32, s32);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
void *PlayerActor_GetActor(s32);
s32 NpcActor_getAngleTo(void *, void *);
s32 NpcActionCtrl_requestEmotion(void *, s32, s32, u32);
s32 NpcActionCtrl_requestStand(void *, s32, u32);
s32 Math_Atan2(s32, s32);
s32 NpcLookAt_setTarget(void *, s32, s32, void *, void *, s32, s32, s32);
s32 Random_GlobalBelow(s32);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActor_findAvoidPos(void *, void *);
s32 Vec_NotEqual(void *, void *);
s32 Vec_DistXZ(void *, void *);
void TalkWindowState_setNextMessage(void *, void *, s32);
s32 MenuCtrl_BuildPocketMask(void *);
s32 MenuCtrl_OpenPocketSelect(s32, u32);
s32 TalkRequest_SetTargetDone(void *);
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
void Pocket_AddItem(void *, s32);
void *VillagerMemory_getFriendship(void *);
void VillagerMemory_addFriendship(void *, s8);
void ActorTalkRequest_setItemNameSlot(void *, void *, s32, s32);
void ItemPickSpec_set(void *, s32, s32);
void ItemPickSpec_Destruct(void *);
void ItemPick_One(u16 *, void *, s32, s32, s32, s32, s32);
void *PlayerData_GetCurrent();
void ItemPick_FtrWallCarpetByClass(u16 *, void *, s32);
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, void *, s32, void *);
void ActorTalkRequest_setVillagerNameSlot(void *, void *, s32);
void *NpcRegistry_GetVillager(s32);
s32 NpcRegistry_GetSlotCount();
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
void *MenuCtrl_GetIndex();
u16 Pocket_GetItem();
s32 Item_GetPrice(u16 *);
void Pocket_RemoveItem(void *);
void Unk_02014420_requestTakeItem(void *, void *, s32, s32, s32);
void *Villager_GetPlan(void *);
u32 VillagerPlanBlock_GetPlan(void *);
u32 VillagerPlan_getState(u32);
s32 Item_IsFurniture(void *);
void VillagerTalk_begin(void *, void *, u32);
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void NpcFootstepFx_enableFootsteps(void *p);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
void NpcActor_setTalkRequest(void *self, void *p);
void *NpcActor_getPlayerActor(void *self, s32 n);
void ActorTalkRequest_setTalkPlayer(void *p, void *q);
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



extern "C" BirthdayHostVillager *BirthdayHostVillager_Create();
extern "C" void _ZN20BirthdayHostVillager9drawModelEv();
extern "C" void *data_ov004_0224befc[2];
extern "C" Unk_ov004_Quad data_ov004_022503c0(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503dc(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503c4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503bc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503cc(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022503d0(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry sBirthdayHostVillagerProfile = { (void *(*)())BirthdayHostVillager_Create, 0x80, 0x84, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
BirthdayHostVillager *sBirthdayHostVillager;
}


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
        return o->talk.hasReceivedGift();
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

BOOL BirthdayHostVillager::preCreate() {
    if (!func_0202dab0(this)) {
        return FALSE;
    }
    position.x = data_020c8cb4 + 0x1000;
    position.z = data_020c8cb8 - 0x7000;
    static FxVec3 vs[6] = {
        FxVec3(0, 0, 0), FxVec3(-0x2000, 0, 0), FxVec3(-0x4000, 0, 0),
        FxVec3(0x2000, 0, 0), FxVec3(0, 0, 0x2000), FxVec3(-0x2000, 0, 0x2000)
    };
    u32 i;
    for (i = 0; i < 6; i++) {
        Unk_ov004_02215c94_V t;
        func_01ffd070(&t, &position, &vs[i]);
        if (!FtrMgr_GetSurfaceHeightAtPos(&t)) {
            position.x = t.x;
            position.y = t.y;
            position.z = t.z;
            break;
        }
    }
    rotY = 0;
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    if (!talk.isPartyNotGreeted()) {
        changeAct(0);
    } else {
        changeAct(7);
        talk.setPartyGreeted();
    }
    sBirthdayHostVillager = this;
    return TRUE;
}

extern "C" void *data_ov004_0224befc[2] = { (void *)_ZN20BirthdayHostVillager9drawModelEv, 0 };
extern "C" {
u8 sBirthdayHostMsgFile[0x28];
}

BOOL BirthdayHostVillager::onCreate() {
    if (!func_0202d948(this)) {
        return FALSE;
    }
    drawFn = *(Unk_ov004_0224c034_Fn *)data_ov004_0224befc;
    NpcFootstepFx_enableFootsteps(&footstepFx);
    return TRUE;
}

BOOL BirthdayHostVillager::drawModel() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayHostVillager::onDraw() {
    if (drawFn) {
        return (this->*drawFn)();
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
    if (o != NULL && villagerData != NULL) {
        s32 r = PlayerData_getPlayerId(o);
        void *p = Villager_FindOrCreateMemory(villagerData, r);
        VillagerMemory_RecordTalk(p, 0, 0, 0);
    }
}

BOOL BirthdayHostVillager::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return FALSE;
    }
    if (act <= 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL BirthdayHostVillager::acceptsSelfRequestedInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::onInteractionEvent(u32 a, u8 b) {
    Unk_ov004_02215c94_V v;
    v.x = position.x;
    v.y = position.y;
    v.z = position.z;
    v.y = v.y + 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        changeAct(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
        Camera_FocusOnPoint(&v);
        changeAct(5);
        break;
    case 1:
        *((u8 *)this + 0x560) = b;
        ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
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
    if (villager != NULL && villager->villagerData != NULL) {
        PlayerData_GetCurrent();
        s32 r = PlayerData_getPlayerId();
        return Villager_FindOrCreateMemory(villager->villagerData, r);
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
    if (villager && villager->villagerData) {
        u32 c = VillagerPlan_getState(VillagerPlanBlock_GetPlan(Villager_GetPlan(villager->villagerData)));
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

void BirthdayHostVillagerTalk::onTaskDone(u32) {
    if (villager->act == 0xc) {
        unk_3c->nextState = 1;
    }
}

void BirthdayHostVillagerTalk::update() {
    u8 b0, b1, b2;
    u16 x;
    if (villager->act == 0xb) {
        if (MenuCtrl_IsFinished()) {
            if (MenuCtrl_IsResultOk() == 0) {
                unk_3c->nextState = 1;
                b0 = Random_GlobalBelow(2) + 7;
                TalkWindowState_setNextMessage(unk_3c, &b0, 0);
                villager->changeAct(6);
            } else {
                void *r6 = MenuCtrl_GetIndex();
                x = Pocket_GetItem();
                s32 r4 = Item_GetPrice(&x);
                Pocket_RemoveItem(r6);
                ActorTalkRequest_setItemNameSlot(this, &x, 0, 7);
                if (isLikedGift(&x)) {
                    b1 = Random_GlobalBelow(2) + 0xd;
                    TalkWindowState_setNextMessage(unk_3c, &b1, 0);
                    addFriendship(5);
                    if (r4 >= 1000) addFriendship(5);
                    if (r4 >= 2000) addFriendship(10);
                    Unk_02014420_requestTakeItem(this, &x, 0, 5, 0);
                    villager->changeAct(12);
                } else {
                    b2 = Random_GlobalBelow(2) + 0xb;
                    TalkWindowState_setNextMessage(unk_3c, &b2, 0);
                    addFriendship(2);
                    if (r4 >= 1000) addFriendship(5);
                    if (r4 >= 2000) addFriendship(5);
                    Unk_02014420_requestTakeItem(this, &x, 0, 5, 0);
                    villager->changeAct(12);
                }
            }
        }
    }
}

void BirthdayHostVillagerTalk::attachOwner(BirthdayHostVillager *owner) {
    VillagerTalk_begin(this, owner, 0x11);
    villager = owner;
}

void BirthdayHostVillagerTalk::start(TalkStartMsg *arg) {
    u8 *out = (u8 *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), sBirthdayHostMsgFile, 0x28, (void *)"ev_nbirth");
    *(u32 *)out = (u32)sBirthdayHostMsgFile;
    if (villager->act == 9) {
        out[4] = Random_GlobalBelow(2);
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
            out[4] = Random_GlobalBelow(2) + 2;
            break;
        case 2:
            out[4] = Random_GlobalBelow(4) + 0x13;
            break;
        default:
            out[4] = Random_GlobalBelow(2) + 4;
            break;
        }
        BirthdayHostVillager *p = villager;
        if (p->talk.unk_3c) {
            if (p && p->villagerData) {
                ActorTalkRequest_setVillagerNameSlot(&villager->talk, VillagerData_getVillagerId(p->villagerData), 1);
            }
            s32 i = 0;
            BirthdayHostVillager **pp = &villager;
            goto test;
            for (;;) {
                void *q;
                q = NpcRegistry_GetVillager(i);
                if (q && q != *pp) {
                    ActorTalkRequest_setVillagerNameSlot(&villager->talk, VillagerData_getVillagerId(*(void **)((u8 *)q + 0x82c)), 0);
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
        ItemPickSpec_Destruct(o);
        return r;
    }
    if (n <= 0x3f) {
        if (Random_GlobalBelow(2) == 0) {
            u32 o[2];
        ItemPickSpec_set(o, 0, 0);
            ItemPick_One(&w2, &o, 0, 0, 1, 1, 0);
            u16 r = w2;
            ItemPickSpec_Destruct(o);
            return r;
        } else {
            u32 o[2];
        ItemPickSpec_set(o, 2, 0);
            ItemPick_One(&w3, &o, 0, 0, 1, 1, 0);
            u16 r = w3;
            ItemPickSpec_Destruct(o);
            return r;
        }
    }
    ItemPick_FtrWallCarpetByClass(&w0, PlayerData_GetCurrent(), 0);
    if (w0 == 0xfff1) {
        u32 o[2];
        ItemPickSpec_set(o, 0, 0);
        ItemPick_One(&w4, &o, 0, 0, 1, 1, 0);
        u16 r = w4;
        ItemPickSpec_Destruct(o);
        return r;
    }
    return w0;
}

void BirthdayHostVillagerTalk::onMessageStart(u32) {
    switch (msgIndex) {
    case 0xf:
    case 0x10: {
        volatile u16 v;
        v = BirthdayHost_PickReturnGift((s32)getFriendship());
        villager->returnGift = v;
        ActorTalkRequest_setItemNameSlot(this, (void *)&v, 1, 7);
        break;
    }
    }
}

void BirthdayHostVillagerTalk::onMessageEnd(u32) {
    u8 b[3];
    switch (msgIndex) {
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
        villager->changeAct(10);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        b[1] = Random_GlobalBelow(2) + 0xf;
        TalkWindowState_setNextMessage(villager->talk.unk_3c, &b[1], 0);
        break;
    case 15:
    case 16:
        Unk_020d7710_requestGiveItem(this, &villager->returnGift, 0, 5, 0);
        Pocket_AddItem(&villager->returnGift, 0);
        villager->changeAct(13);
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

void BirthdayHostVillagerTalk::onChoice(u32) {
    u8 b[3];
    s32 r = ChoiceList_getResult(TalkWindowState_getChoiceList(villager->talk.unk_3c));
    switch (msgIndex) {
    case 4:
    case 5:
        if (r == 0) {
            if (MenuCtrl_BuildPocketMask((void *)BirthdayHost_GiftFilter)) {
                b[0] = Random_GlobalBelow(2) + 9;
                TalkWindowState_setNextMessage(villager->talk.unk_3c, &b[0], 0);
            } else {
                b[1] = 6;
                TalkWindowState_setNextMessage(villager->talk.unk_3c, &b[1], 0);
            }
        } else {
            b[2] = Random_GlobalBelow(2) + 7;
            TalkWindowState_setNextMessage(villager->talk.unk_3c, &b[2], 0);
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
            act = idx;
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
    if (act < 14) {
        (this->*tbl[act])();
    }
}

BOOL BirthdayHostVillager::setupAct00() {
    if (NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8)) {
        NpcLookAt_setTarget((u8 *)&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::mainAct00() {
    s32 c[3];
    u8 *m = (u8 *)&actionCtrl;
    if (collider.isHit != 0 && NpcActionCtrl_getAction(m) == 1) {
        NpcActionCtrl_requestAction(m, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        return;
    }
    if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 0) {
        if (walkTimer != 0) {
            walkTimer--;
        }
        if (walkTimer == 0) {
            walkAngle = Room_PickRandomWalkTarget(walkTarget, &position, rotY);
            waypoint[0] = walkTarget[0];
            waypoint[1] = walkTarget[1];
            waypoint[2] = walkTarget[2];
            if (walkAngle != rotY) {
                if (NpcActionCtrl_requestAction((u8 *)&actionCtrl, 3, 1, 0, 0, 0, walkAngle, 0, 0, data_020c6cc8, 0) != 0) {
                    walkTimer = Random_GlobalBelow(0x46) + 0x14;
                }
            } else {
                if (NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, walkTarget[0], walkTarget[2], 0, 0, 0, 0, data_020c6cc8, 0) != 0) {
                    walkTimer = Random_GlobalBelow(0x50) + 0x14;
                }
            }
        } else {
            if (NpcActionCtrl_isActionDone((u8 *)&actionCtrl) != 0) {
                NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
            }
        }
    } else if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone((u8 *)&actionCtrl) != 0) {
            NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, walkTarget[0], walkTarget[2], 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 1) {
        switch (NpcActor_findAvoidPos(this, c)) {
        case 1:
            NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
            break;
        case 2:
            waypoint[0] = c[0];
            waypoint[1] = c[1];
            waypoint[2] = c[2];
            NpcMoveCtrl_setWaypoint((u8 *)&moveCtrl, waypoint);
            break;
        default:
            if (Vec_NotEqual(waypoint, walkTarget) != 0) {
                waypoint[0] = walkTarget[0];
                waypoint[1] = walkTarget[1];
                waypoint[2] = walkTarget[2];
                NpcMoveCtrl_setWaypoint((u8 *)&moveCtrl, walkTarget);
            } else if (Vec_DistXZ(walkTarget, &position) < 0x200) {
                NpcActionCtrl_requestStand((u8 *)&actionCtrl, 1, data_020c6cc8);
            }
            break;
        }
    }
}

BOOL BirthdayHostVillager::setupAct01() {
    u8 *m = (u8 *)&actionCtrl;
    Unk_ov004_022146ec_Actor *o = BirthdayGuestVillager_Get();
    if (o != 0) {
        s32 dx = o->pos[0] - position.x;
        s32 dz = o->pos[2] - position.z;
        s32 ang = Math_Atan2(dx, dz);
        NpcActionCtrl_requestAction(m, 3, 1, 0, 0, 0, ang, 0, 0, data_020c6cc8, 0);
        NpcLookAt_setTarget((u8 *)&lookAt, 2, 0, o, gVec3Zero, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void BirthdayHostVillager::mainAct01() {}

BOOL BirthdayHostVillager::setupAct02() {
    emotionTimer = 0x1e;
    return TRUE;
}

void BirthdayHostVillager::mainAct02() {
    if (emotionTimer != 0) {
        emotionTimer--;
    }
    switch (emotionTimer) {
    case 0x14:
        NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 1, 3, data_020c6cc8);
        break;
    case 1:
        NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
        break;
    }
}

BOOL BirthdayHostVillager::setupAct03() {
    emotionTimer = 0x32;
    return TRUE;
}

void BirthdayHostVillager::mainAct03() {
    if (emotionTimer != 0) {
        emotionTimer--;
    }
    switch (emotionTimer) {
    case 0x28:
        if (Random_GlobalBelow(2) == 0) {
            NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 1, 0xa, data_020c6cc8);
        } else {
            NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 1, 0x17, data_020c6cc8);
        }
        break;
    case 1:
        NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 1, 0, data_020c6cc8);
        break;
    case 0:
        changeAct(0);
        break;
    }
}

BOOL BirthdayHostVillager::setupAct04() {
    if ((u32)(act - 1) <= 2) {
        NpcActionCtrl_requestEmotion((u8 *)&actionCtrl, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void BirthdayHostVillager::mainAct04() {}

BOOL BirthdayHostVillager::setupAct05() {
    BOOL r;
    void *o = PlayerActor_GetActor(4);
    if (o != 0) {
        NpcTalkCtrl_requestTurnAndTalk((u8 *)&talkCtrl, 0, NpcActor_getAngleTo(this, o), 0);
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
    TalkWindowState *o = talk.unk_3c;
    if (o != 0) {
        if (o->state == 0) {
            TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL BirthdayHostVillager::setupAct07() { return TRUE; }

void BirthdayHostVillager::mainAct07() {
    TalkRequest_AddPlayerTalk6(this, 0);
}

BOOL BirthdayHostVillager::setupAct08() {
    approachTimer = 0x32;
    NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void BirthdayHostVillager::mainAct08() {
    Unk_ov004_02214ab4_Vec a, b;
    s32 v, r4, r0;
    Unk_ov004_02214ab4_Vec *p = PlayerActor_GetBodyPos(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    b.x = a.x;
    b.y = a.y;
    b.z = a.z;
    v = NpcActor_getDistanceToPlayer(this, 4);
    if (v > 0x4000) {
        if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 1) {
            NpcActionCtrl_requestAction((u8 *)&actionCtrl, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (NpcActionCtrl_getAction((u8 *)&actionCtrl) == 2) {
            NpcActionCtrl_requestAction((u8 *)&actionCtrl, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    NpcMoveCtrl_setWaypoint((u8 *)&moveCtrl, &b);
    if (approachTimer != 0) {
        approachTimer--;
    }
    r4 = Math_AngleXZ(&position, &a);
    r0 = Math_AngleDiffAbs(rotY, r4);
    if (v <= 0x3000 || approachTimer == 0) {
        NpcTalkCtrl_requestTurnAndTalk((u8 *)&talkCtrl, 0, r4, 0);
        changeAct(9);
    } else if (r0 > 0x2000) {
        NpcActionCtrl_requestAction((u8 *)&actionCtrl, 4, 2, b.x, b.z, 0, r4, 0, 0, data_020c6cc8, 0);
    }
}

BOOL BirthdayHostVillager::setupAct09() { return TRUE; }

void BirthdayHostVillager::mainAct09() {
    TalkWindowState *o = talk.unk_3c;
    if (o != 0) {
        if (o->state == 0) {
            TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL BirthdayHostVillager::setupAct0A() {
    talk.unk_3c->openMode = 1;
    return TRUE;
}

void BirthdayHostVillager::mainAct0A() {
    if (talk.unk_3c->state == 5) {
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
    buf[0] = Random_GlobalBelow(2) + 0x11;
    TalkWindowState_setNextMessage(talk.unk_3c, buf, 0);
    changeAct(6);
}

void BirthdayHostVillager::onTalkMelodyPlayed() {
    talkMelodyPlayed = 1;
}

BOOL BirthdayHostVillager::canPlayTalkMelody() {
    if (talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

