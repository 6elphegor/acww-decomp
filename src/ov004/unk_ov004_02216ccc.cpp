// mwcc-version: 1.2/base
#include "types.h"
#include "actor/ActorProfile.h"
#include "npc/VillagerClothModel.h"
#include "room/RoomFreeUnitMap.h"
#include "npc/VillagerMood.h"
#include "snd/SndSeEmitter.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "npc/NpcFaceAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#include "net/CommManager.h"

class HouseOwnerVillager;

#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define NpcFootstepFx_enableFootsteps _ZN13NpcFootstepFx15enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_getTalkPlayer _ZN16ActorTalkRequest13getTalkPlayerEv
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
#define NpcAnimCtrl_getAnimId _ZN11NpcAnimCtrl9getAnimIdEj
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActor_netIsTalkLocked _ZN8NpcActor15netIsTalkLockedEv
#define NpcActor_netGetSlots _ZN8NpcActor11netGetSlotsEii
#define NpcActor_netSetSlotsIfOwner _ZN8NpcActor18netSetSlotsIfOwnerEjjjz
#define NpcActor_isNetOwner _ZN8NpcActor10isNetOwnerEv
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerMood_update _ZN12VillagerMood6updateEP12VillagerTalk
#define VillagerMood_requestApply _ZN12VillagerMood12requestApplyEv
#define VillagerTalk_getEventKind _ZN12VillagerTalk12getEventKindEv
#define VillagerActor_updateCatchPlans _ZN13VillagerActor16updateCatchPlansEPhPvj
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

struct HouseOwnerStepDir {
    s32 dx;
    s32 dy;
    HouseOwnerStepDir(s32 a, s32 b) : dx(a), dy(b) {}
};

struct HouseOwnerAiState {
    Unk_ov004_02216ff4_Fn enter;
    Unk_ov004_02216ff4_Fn update;
};


extern "C" {
extern HouseOwnerStepDir sHouseOwnerStepDirs[4];
extern HouseOwnerAiState sHouseOwnerAiStates[];
extern CommManager *gCommManager;
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
void ActorTalkRequest_setTalkPlayer(void *, s32);
s32 NetArea_IsLocalOwner();
s32 NpcTalkCtrl_isBusy(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActionCtrl_requestStand(void *, u32, u32);
s32 NpcActor_getAngleToPlayer(void *, u32);
void NpcActionCtrl_requestAction(void *, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
void VillagerMood_requestApply(void *);
void TalkRequest_SetTargetDone(void *);
void *ActorTalkRequest_getTalkPlayer(void *);
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
void VillagerActor_updateCatchPlans(void *o, const void *a, const void *b, u32 c);
void TalkRequest_AddPlayerTalk6(void *o, u32 a);
void RoomFreeUnitMap_Build(void *o);
void NpcFootstepFx_enableFootsteps(void *o);
void *Villager_GetState(void *o);
u32 VillagerState_GetRole(void *o);
void VillagerState_SetRole(void *o, u32 a);
void *VillagerData_getVillagerId(void *o);
u32 VillagerId_isValid(void *o);
void *VillagerState_GetTalkRepeat(void *o);
void TalkRepeat_Reset(void *o);
void NpcActor_setTalkRequest(void *self, void *p);
void VillagerClothModel_change(void *self, void *owner, u16 *p);
u32 NpcAnimCtrl_getAnimId(void *o, u32 v);
}









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

    /* 0x00 */ s32 state;
    /* 0x04 */ HouseOwnerAiState *entry;
    /* 0x08 */ s32 pendingState;
    /* 0x0c */ u8 step;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ s32 timer;
};

class HouseOwnerAiMember : public HouseOwnerAi {
public:
    HouseOwnerAiMember();
    ~HouseOwnerAiMember();
};


class HouseOwnerVillager : public VillagerActor {
public:
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDraw();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 idx, u8 v);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    BOOL drawModel();

    typedef BOOL (HouseOwnerVillager::*Fn)();
    /* 0x894 */ Fn drawFn;
    /* 0x89c */ HouseOwnerAiMember ai;
    /* 0x8b0 */ RoomFreeUnitMap freeUnitMap;
    /* 0x8d0 */ u8 talkMelodyPlayed;
    /* 0x8d4 */ s32 talkKind;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" HouseOwnerVillager *HouseOwnerVillager_Create();
extern "C" ActorProfile sHouseOwnerVillagerProfile = {(void *(*)())HouseOwnerVillager_Create, 0x85, 0x89, 2, 0x5000, 0x5000, 0x3e800};
extern "C" const u8 data_ov004_02240090[4] = {0x28, 0x1e, 0x14, 0x0a};
#define data_ov004_0225065c ((HouseOwnerStepDir *)((u8 *)sHouseOwnerStepDirs + 4))

extern "C" HouseOwnerVillager *HouseOwnerVillager_Create() {
    return new HouseOwnerVillager;
}

BOOL HouseOwnerVillager::preCreate() {
    if (!VillagerActor::preCreate()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &villagerTalk);
    villagerTalk.resetMsg();
    RoomFreeUnitMap_Build(&freeUnitMap);
    talkKind = 0;
    talkMelodyPlayed = 0;
    void *p = getVillagerData();
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

BOOL HouseOwnerVillager::onCreate() {
    if (!VillagerActor::onCreate()) {
        return FALSE;
    }
    drawFn = &HouseOwnerVillager::drawModel;
    NpcFootstepFx_enableFootsteps(&footstepFx);
    if (NpcActor_isNetOwner(this)) {
        ai.changeState(this, 0);
        VillagerActor_updateCatchPlans(this, data_ov004_02240094, data_ov004_02240090, 0);
    } else {
        ai.changeState(this, 3);
    }
    u32 *g = (u32 *)gCommManager;
    if (!CommManager_isSlotActive(g, g[0x64 / 4])) {
        if (getVillagerData()) {
            if (VillagerState_GetRole(Villager_GetState(getVillagerData())) == 1) {
                VillagerState_SetRole(Villager_GetState(getVillagerData()), 0);
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
    if (drawFn) {
        r = (this->*drawFn)();
    }
    return r;
}

BOOL HouseOwnerVillager::canPlayTalkMelody() {
    if (talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

void HouseOwnerVillager::onTalkMelodyPlayed() { talkMelodyPlayed = 1; }

BOOL HouseOwnerVillager::updateAct() {
    ai.update(this);
    if (CommManager_isOnline(gCommManager)) {
        if (NpcAnimCtrl_getAnimId(&animCtrl, 0) != 6) {
            if (getVillagerData()) {
                u16 *p = (u16 *)VillagerDataProfileView_getShirt(getVillagerData());
                u16 *q = VillagerClothModel_getItem(&clothModel);
                BOOL eq;
                if (Item_IsFurniture(q)) {
                    eq = Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(p) ? TRUE : FALSE;
                } else {
                    eq = *q == *p ? TRUE : FALSE;
                }
                if (!eq) {
                    u16 *w = (u16 *)VillagerDataProfileView_getShirt(getVillagerData());
                    BOOL in = FALSE;
                    u16 v = *w;
                    if (v >= 0x11a8 && v <= 0x12a7) {
                        in = TRUE;
                    }
                    if (in) {
                        VillagerClothModel_change(&clothModel, this, (u16 *)VillagerDataProfileView_getShirt(getVillagerData()));
                    }
                }
            }
        }
    }
    VillagerMood_update(&mood, this);
    return TRUE;
}

HouseOwnerAiMember::HouseOwnerAiMember() {
    pendingState = 5;
    timer = 0;
}

HouseOwnerAiMember::~HouseOwnerAiMember() {}

void HouseOwnerAi::update(HouseOwnerVillager *o) {
    if (entry != 0) {
        (this->*entry->update)(o);
    }
    if (timer > 0) {
        timer--;
    }
}

void HouseOwnerAi::changeState(HouseOwnerVillager *o, s32 idx) {
    if (idx >= 0 && idx < 5) {
        state = idx;
        entry = &sHouseOwnerAiStates[state];
        step = 0;
        HouseOwnerAiState *e = entry;
        if (e != 0 && e->enter != 0) {
            (this->*e->enter)(o);
        }
    }
}

void HouseOwnerAi::clearPendingState() {
    pendingState = 5;
}

BOOL HouseOwnerAi::applyPendingState(HouseOwnerVillager *o) {
    BOOL r = FALSE;
    if (pendingState < 5) {
        changeState(o, pendingState);
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
        if (RoomFreeUnitMap_TestUpper(&o->freeUnitMap, px, py) != 0) {
            FieldPos_FromUnitCenter(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    } else {
        if (RoomFreeUnitMap_Test(&o->freeUnitMap, px, py) != 0) {
            FieldPos_FromUnitCenter(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" const u8 data_ov004_02240094[5] = {0x00, 0x0a, 0x32, 0x0f, 0x14};
extern "C" HouseOwnerAiState sHouseOwnerAiStates[5] = {
    {&HouseOwnerAi::enterState00, &HouseOwnerAi::updateState00},
    {&HouseOwnerAi::enterState01, &HouseOwnerAi::updateState01},
    {&HouseOwnerAi::enterState02, &HouseOwnerAi::updateState02},
    {&HouseOwnerAi::enterState03, &HouseOwnerAi::updateState03},
    {&HouseOwnerAi::enterState04, &HouseOwnerAi::updateState04}};
extern "C" HouseOwnerStepDir sHouseOwnerStepDirs[4] = {
    HouseOwnerStepDir(0, 1), HouseOwnerStepDir(1, 0), HouseOwnerStepDir(0, -1), HouseOwnerStepDir(-1, 0)};

BOOL HouseOwnerAi::enterState00(HouseOwnerVillager *o) {
    o->drawFn = &HouseOwnerVillager::drawModel;
    NpcActionCtrl_requestAction(&o->actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    timer = 0;
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
                    timer = 0x3c;
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
        if (timer == 0 && NpcActionCtrl_getAction(sub) == 1) {
            NpcActionCtrl_requestAction(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState01(HouseOwnerVillager *o) {
    void *t = ActorTalkRequest_getTalkPlayer(&o->villagerTalk);
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
        step = 1;
    }
}

void HouseOwnerAi::updateState01Step01(HouseOwnerVillager *o) {}

BOOL HouseOwnerAi::updateState01(HouseOwnerVillager *o) {
    static Unk_ov004_02216ff4_VFn tbl[2] = {&HouseOwnerAi::updateState01Step00, &HouseOwnerAi::updateState01Step01};
    if (step < 2) {
        (this->*tbl[step])(o);
    }
    return FALSE;
}

BOOL HouseOwnerAi::enterState02(HouseOwnerVillager *o) {
    s32 t = NpcActor_getAngleToPlayer(o, o->partnerPlayer);
    NpcActionCtrl_requestAction(&o->actionCtrl, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    step = 0;
    return TRUE;
}

void HouseOwnerAi::updateState02Step00(HouseOwnerVillager *o) {
    if (NpcActionCtrl_getAction(&o->actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&o->actionCtrl) != 0) {
            NpcActionCtrl_requestStand(&o->actionCtrl, 2, data_020c6cc8);
            step = 1;
        }
    }
}

BOOL HouseOwnerAi::updateState02(HouseOwnerVillager *o) {
    static Unk_ov004_02216ff4_VFn tbl[1] = {&HouseOwnerAi::updateState02Step00};
    if (step < 1) {
        (this->*tbl[step])(o);
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
        if (NpcActor_netGetSlots(o, &a, &b) != 0 && ((la = a), la == (g = gCommManager->myAid)) && la == b) {
            NpcActor_netSetSlotsIfOwner(o, 1, g, g);
            if (w != 0 && Villager_GetResidentStatus(w) != 3) {
                o->talkKind = 12;
            } else {
                o->talkKind = 0;
            }
            VillagerTalk_begin(&o->villagerTalk, o, o->talkKind);
            ActorTalkRequest_setTalkPlayer(&o->villagerTalk, NpcActor_getPlayerActor(o, 4));
            o->ai.changeState(o, 1);
        } else {
            if (NetArea_IsLocalOwner() != 0 && b == 4) {
                NpcActor_netSetSlotsIfOwner(o, 1, gCommManager->myAid, 4);
                if (o->ai.applyPendingState(o) == 0) {
                    o->ai.changeState(o, 0);
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
                    NpcActor_netSetSlotsIfOwner(o, 1, gCommManager->myAid, 4);
                    if (o->ai.applyPendingState(o) == 0) {
                        o->ai.changeState(o, 0);
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL HouseOwnerVillager::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || NpcActor_netIsTalkLocked(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void HouseOwnerVillager::onInteractionEvent(u32 idx, u8 v) {
    switch (idx) {
    case 3:
        partnerPlayer = v;
        if (v != 4) {
            NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, v);
            ai.changeState(this, 2);
        } else {
            if (NpcActor_isNetOwner(this) == 0) {
                return;
            }
            s32 g = gCommManager->myAid;
            NpcActor_netSetSlotsIfOwner(this, 1, g, g);
            if (villagerData != 0 && Villager_GetResidentStatus(villagerData) != 3) {
                talkKind = 12;
            } else {
                switch (VillagerTalk_getEventKind(this)) {
                case 1:
                    talkKind = 3;
                    break;
                case 0:
                    talkKind = 5;
                    break;
                case 8:
                case 9:
                    talkKind = 11;
                    break;
                default:
                    talkKind = 0;
                    break;
                }
            }
            ai.changeState(this, 2);
        }
        break;
    case 0:
        partnerPlayer = v;
        if (v != 4 && v != gCommManager->myAid) {
            NpcActor_netSetSlotsIfOwner(this, 1, v, v);
            ai.changeState(this, 4);
        } else {
            if (NpcActor_isNetOwner(this) != 0) {
                s32 g = gCommManager->myAid;
                NpcActor_netSetSlotsIfOwner(this, 1, g, g);
                VillagerTalk_begin(&villagerTalk, this, talkKind);
                ActorTalkRequest_setTalkPlayer(&villagerTalk, NpcActor_getPlayerActor(this, 4));
                ai.changeState(this, 1);
                talkKind = 0;
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (NetArea_IsLocalOwner() != 0) {
                NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
                if (ai.applyPendingState(this) == 0) {
                    ai.changeState(this, 0);
                }
            } else {
                NpcActor_netSetSlotsIfOwner(this, 1, 4, gCommManager->myAid);
                ai.changeState(this, 3);
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
                    NpcActor_netSetSlotsIfOwner(this, 1, gCommManager->myAid, 4);
                    if (ai.applyPendingState(this) == 0) {
                        ai.changeState(this, 0);
                    }
                }
            }
        }
        break;
    }
}

