// mwcc-version: 1.2/base
#include "types.h"
#include "npc/Unk_0201a13c.h"
#include "npc/VillagerClothModel.h"
#include "actor/Unk_02088d00.h"
#include "talk/MsgStringBase.h"
#include "gfx/Unk_ov068_022708fc_Color.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "npc/VillagerMood.h"
#include "talk/TalkWindowState.h"
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
#include "talk/EncodedString.h"
#include "npc/NpcFaceAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/EncodedString16Buf.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/VillagerTalk.h"
#include "talk/MsgString.h"
#include "talk/MsgString33.h"
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
#define func_0202d948 _ZN13VillagerActor8onCreateEv
#define func_0202dab0 _ZN13VillagerActor9preCreateEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define PlayerData_getErrands _ZN10PlayerData10getErrandsEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ErrandRecord_setStep _ZN12ErrandRecord7setStepEh
#define ErrandRecord_getStep _ZN12ErrandRecord7getStepEv
#define func_02135558 __register_global_object
#define Mailbox_execNoMail _ZN7Mailbox10execNoMailEv






struct Unk_020d77a4_Vec3;







struct Unk_020d8938_Tbl;


// ---------------------------------------------------------------- TU10 classes
class HouseVisitVillager;

struct Unk_ov068_02270a6c_Out {
    void *msgKey;
    u8 msgIndex;
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








#define SPEAK(str) VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->villagerData), sHouseVisitMsgFileName, 0x28, (void *)str)

// Menu/dialog sub-object at +0x898 of the owner (vtable 0x02270a6c)
class HouseVisitVillagerTalk : public VillagerTalk {
public:
    inline HouseVisitVillagerTalk() {}
    virtual void onMessageStart(u32 a);
    virtual void onMessageEnd(u32 a);
    virtual void onChoice(u32 a);
    virtual void start(TalkStartMsg *out);

    void attachOwner(HouseVisitVillager *owner);

    /* 0x1a0 */ HouseVisitVillager *unk_1a0;
};

// Owner (vtable 0x02270afc, size 0xa74)
class HouseVisitVillager : public VillagerActor {
public:
    inline HouseVisitVillager() {}    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 idx, u8 v);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

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
    void setVisitWalkSpeed();
    void recordTalkWithPlayer();
    void unlinkFurnitureUnits();
    BOOL drawModel();

    /* 0x894 */ s32 visitState;
    /* 0x898 */ HouseVisitVillagerTalk talk;
    /* 0xa3c */ Unk_ov068_02270afc_BFn drawFn;
    /* 0xa44 */ u32 roomStars;
    /* 0xa48 */ u8 walkInTimer;
    /* 0xa49 */ u8 pad_a49;
    /* 0xa4a */ u16 wanderTimer;
    /* 0xa4c */ u32 roomRateFlags;
    /* 0xa50 */ u8 wantsToLeave;
    /* 0xa51 */ u8 playerAtExit;
    /* 0xa52 */ u8 talkTopic;
    /* 0xa53 */ u8 pad_a53;
    /* 0xa54 */ u8 talksLeft;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 stayTimer;
    /* 0xa58 */ u8 leaveTalkDelay;
    /* 0xa59 */ s8 callTimer;
    /* 0xa5a */ s16 wanderAngle;
    /* 0xa5c */ s32 waypointX;
    /* 0xa60 */ s32 waypointY;
    /* 0xa64 */ s32 waypointZ;
    /* 0xa68 */ s32 walkTargetX;
    /* 0xa6c */ s32 walkTargetY;
    /* 0xa70 */ s32 walkTargetZ;
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
extern u8 sHouseVisitMsgFileName[0x28];
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

void Math_StepS32(void *dst, s32 v, s32 n);
void NNS_G3dMdlSetMdlAlpha(void *o, u32 i, u32 v);
s32 Random_GlobalBelow(s32 n);
s32 Vec_DistXZ(void *a, void *b);
s32 Vec_NotEqual(void *a, void *b);
void *PlayerActor_GetActor(s32 n);
void *PlayerActor_GetBodyPos(s32 n);
BOOL Ground_IsOnLockedExit(void *v);
u32 NpcActor_getAngleTo(void *p, void *q);
s32 NpcActor_findAvoidPos(void *p, void *out);
void HouseVisitor_ClearPresent();
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
Unk_ov068_02270afc_Vec *PlayerActor_GetBodyPos(s32);
s32 Ground_IsOnLockedExit(void *);
void NpcMoveCtrl_setSpeedPreset(void *, s32, s32, s32, s32);
s32 TalkRequest_SetTargetDone(void *);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcActionCtrl_isActionDone(void *);
void Snd_SeEmitterPlayOneShot(void *, s32, s32, s32);
void Building_PlayDoorChime();
void NpcTalkCtrl_requestTalk(void *, s32, s32);
void RoomScoreEvaluator_Construct(void *);
s32 HappyRoom_RateMainRoom(void *, void *);
void HouseVisitor_SetPresent();
void *Villager_GetState(void *);
void VillagerState_SetRole(void *, s32);
void RoomScoreEvaluator_Destruct(void *);
VillagerActor *PlayerActor_GetActor(s32);
s32 Vec_DistXZ(void *, void *);
}

extern "C" {
extern u8 sHouseVisitTsuTopicTable[];
extern u8 data_021be810[];
extern u8 gTalkMsgIndexEnd;
void VillagerId_makeFileName(void *, void *, u32, void *);
void *VillagerData_getVillagerId(void *);
u32 Random_GlobalBelow(s32);
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
s32 Random_GlobalBelow(s32);
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
void HouseVisitor_SetPresent();
void RoomScoreEvaluator_Construct(void *);
void RoomScoreEvaluator_Destruct(void *);
void *HappyRoom_RateMainRoom(void *, void *);
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

BOOL HouseVisitVillager::preCreate() {
    using namespace sC;
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    sHouseVisitVillager = this;
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL HouseVisitVillager::onCreate() {
    using namespace sC;
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    drawFn = *(Unk_ov068_02270afc_BFn *)data_ov068_02270a24;
    unlinkFurnitureUnits();
    Unk_02013474_enableFootsteps(&footstepFx);
    stayTimer = -1;
    talksLeft = 3;
    leaveTalkDelay = 0xb0;
    Scene_GetPrevious();
    if (SceneId_IsTown() != 0) {
        setVisitState(0);
    } else if (HouseVisit_IsCalled(&talk) != 0) {
        u32 buf[6];
        HouseVisitor_SetPresent();
        stayTimer = (Random_GlobalBelow(0x14) + 0x28) * 0x3c;
        talksLeft = Random_GlobalBelow(4) + 2;
        RoomScoreEvaluator_Construct(buf);
        roomRateFlags = (u32)HappyRoom_RateMainRoom(buf, &roomStars);
        setVisitState(6);
        RoomScoreEvaluator_Destruct(buf);
    } else {
        stayTimer = (Random_GlobalBelow(0x28) + 0x3c) * 0x3c;
        talksLeft = Random_GlobalBelow(4) + 7;
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
    if (drawFn) {
        return (this->*drawFn)();
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

void HouseVisitVillager::unlinkFurnitureUnits() {
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

void HouseVisitVillager::recordTalkWithPlayer() {
    using namespace sC;
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        if (villagerData != NULL) {
            VillagerMemory_RecordTalk(Villager_FindOrCreateMemory(villagerData, PlayerData_getPlayerId(p)), 0, 0, 0);
        }
    }
}

void HouseVisitVillager::setVisitWalkSpeed() {
    using namespace sC;
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 1, 0x100, 0x19, 0x33);
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

BOOL HouseVisitVillager::acceptsInteraction(void *) {
    using namespace sC;
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0) {
        return FALSE;
    }
    if ((u32)(visitState - 5) <= 1) {
        return TRUE;
    }
    return FALSE;
}

void HouseVisitVillager::onInteractionEvent(u32 idx, u8 v) {
    using namespace sC;
    switch (idx) {
    case 3:
        partnerPlayer = v;
        if (visitState != 0) {
            if (visitState == 5) {
                stayTimer = (Random_GlobalBelow(0x28) + 0x3c) * 0x3c;
            }
            setVisitState(7);
        }
        break;
    case 0:
        partnerPlayer = v;
        talk.attachOwner(this);
        setVisitState(8);
        break;
    case 1:
        partnerPlayer = v;
        talk.attachOwner(this);
        if (visitState == 0) {
            setVisitState(1);
        } else {
            setVisitState(8);
        }
        break;
    case 8:
        leaveTalkDelay = 0x14;
        recordTalkWithPlayer();
        if (visitState != 0xa && visitState != 5) {
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

void HouseVisitVillagerTalk::start(TalkStartMsg *arg) {
    using namespace sB;
    Unk_ov068_02270a6c_Out *out = (Unk_ov068_02270a6c_Out *)arg;
    out->msgKey = sHouseVisitMsgFileName;
    if (unk_1a0->visitState == 1) {
        unk_1a0->talkTopic = 1;
        SPEAK((void *)"q10_call");
        out->msgIndex = Random_GlobalBelow(3);
        HouseVisit_SetCalled(this);
        return;
    }
    if (unk_1a0->wantsToLeave != 0 && unk_1a0->playerAtExit != 0) {
        unk_1a0->wantsToLeave = 0;
    }
    if (unk_1a0->wantsToLeave != 0) {
        unk_1a0->talkTopic = 6;
        SPEAK((void *)"q10_back");
        out->msgKey = sHouseVisitMsgFileName;
        out->msgIndex = Random_GlobalBelow(3);
        return;
    }
    if (unk_1a0->playerAtExit != 0) {
        unk_1a0->talkTopic = 8;
        SPEAK((void *)"q10_wait");
        out->msgKey = sHouseVisitMsgFileName;
        out->msgIndex = Random_GlobalBelow(2);
        return;
    }
    if (HouseVisit_IsDoorTalkDone(this) == 0) {
        unk_1a0->talkTopic = 2;
        SPEAK((void *)"q10_door");
        out->msgIndex = Random_GlobalBelow(3);
        HouseVisit_SetDoorTalkDone(this);
        return;
    }
    if (HouseVisit_IsFirstTalkPending(this)) {
        unk_1a0->talkTopic = 5;
        SPEAK((void *)"q10_first");
        out->msgKey = sHouseVisitMsgFileName;
        out->msgIndex = Random_GlobalBelow(3);
        HouseVisit_SetFirstTalkDone(this);
        return;
    }
    if (unk_1a0->talksLeft != 0) {
        unk_1a0->talksLeft = unk_1a0->talksLeft - 1;
    }
    u32 rnd = Random_GlobalBelow(100);
    s32 v = FtrMgr_PickFurnitureComment(VillagerId_GetPersonality(VillagerData_getVillagerId(unk_1a0->villagerData)));
    u32 n = unk_1a0->roomStars;
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
        unk_1a0->talkTopic = 3;
        SPEAK((void *)"q10_furniture");
        out->msgKey = sHouseVisitMsgFileName;
        out->msgIndex = v;
        return;
    }
    if (rnd < 50) {
        unk_1a0->talkTopic = 4;
        SPEAK((void *)"q10_layout");
        out->msgKey = sHouseVisitMsgFileName;
        u32 f = unk_1a0->roomRateFlags;
        if (f & 1) {
            out->msgIndex = Random_GlobalBelow(2);
        } else if (f & 2) {
            out->msgIndex = Random_GlobalBelow(2) + 2;
        } else if ((f & 4) == 0) {
            out->msgIndex = Random_GlobalBelow(2) + 4;
        } else if (f & 0x10) {
            out->msgIndex = 10;
        } else if (f & 0x20) {
            out->msgIndex = Random_GlobalBelow(2) + 8;
        } else {
            out->msgIndex = Random_GlobalBelow(2) + 6;
        }
        ((Unk_ov068_02270a6c_Bits *)((u8 *)PlayerData_getErrands(PlayerData_GetCurrent()) + 0xa8))->lo = n;
    } else if (rnd < 70) {
        unk_1a0->talkTopic = 0;
        setTopicFns((Unk_020d8938_Tbl *)sHouseVisitTsuTopicTable);
        VillagerTalk::start((TalkStartMsg *)out);
    } else {
        unk_1a0->talkTopic = 0;
        setTopicFns((Unk_020d8938_Tbl *)data_021be810);
        VillagerTalk::start((TalkStartMsg *)out);
    }
}

void HouseVisitVillagerTalk::onMessageStart(u32 a) {
    using namespace sB;
    if (unk_1a0->talkTopic == 0) {
        VillagerTalk::onMessageStart(a);
    }
}

void HouseVisitVillagerTalk::onMessageEnd(u32 a) {
    using namespace sB;
    u8 buf[2];
    HouseVisitVillager *o = unk_1a0;
    u32 st = o->talkTopic;
    if (st == 0) {
        VillagerTalk::onMessageEnd(a);
    } else if (o != 0) {
        if (st == 1) {
            o->setVisitState(2);
        } else if (st == 6 || st == 8) {
            o->talkTopic = 7;
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->villagerData), data_ov068_022712b8, 0x28, (void *)"q_bye");
            buf[0] = Random_GlobalBelow(3);
            unk_1a0->talk.unk_3c->setNextMessageIfUnset(buf, data_ov068_022712b8);
        } else if (st == 7) {
            buf[1] = gTalkMsgIndexEnd;
            unk_1a0->talk.unk_3c->setNextMessage(&buf[1], 0);
            unk_1a0->setVisitState(10);
            Snd_PlaySe(0x5f);
        }
    }
}

void HouseVisitVillagerTalk::onChoice(u32 a) {
    using namespace sB;
    if (unk_1a0->talkTopic == 0) {
        VillagerTalk::onChoice(a);
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
            visitState = idx;
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
u8 sHouseVisitMsgFileName[0x28];
}
extern "C" void *data_ov068_022709f4[2] = {(void *)_ZN18HouseVisitVillager16enterVisitWalkInEv, 0};
extern "C" void *data_ov068_022709ec[2] = {(void *)_ZN18HouseVisitVillager18enterVisitGreetEndEv, 0};
extern "C" void *data_ov068_0227098c[2] = {(void *)_ZN18HouseVisitVillager14enterVisitStayEv, 0};
extern "C" void *data_ov068_022709dc[2] = {(void *)_ZN18HouseVisitVillager16enterVisitWanderEv, 0};
extern "C" void *data_ov068_022709b4[2] = {(void *)_ZN18HouseVisitVillager13execVisitStayEv, 0};
extern "C" Unk_ov068_Scene_Entry sHouseVisitVillagerProfile = {(void *(*)())HouseVisitVillager_Create, 0x82, 0x86, 2, 0x5000, 0x5000, 0x3e800};
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
    if (visitState < 11) {
        (this->*tbl[visitState])();
    }
}

extern "C" void *data_ov068_022709ac[2] = {(void *)_ZN18HouseVisitVillager14execVisitLeaveEv, 0};


BOOL HouseVisitVillager::enterVisitOutside() {
    using namespace sB;
    position.x = data_020c8cb4;
    position.z = data_020c8cb8 - 0x1000;
    Unk_ov068_02270afc_Pair &q = *(Unk_ov068_02270afc_Pair *)&moveAngleX;
    q.b = -0x8000;
    rotY = q.b;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, -0x8000);
    drawFn = data_0213a740;
    collisionEnabled = 0;
    return TRUE;
}

void HouseVisitVillager::execVisitOutside() {
    using namespace sB;
    if (HouseVisit_IsAppointmentNow(this)) {
        VillagerActor *p = PlayerActor_GetActor(4);
        if (p) {
            Unk_ov068_02270afc_Vec v;
            Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)&p->position;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (Vec_DistXZ(&v, &position) > 0x4e66) {
                TalkRequest_AddPlayerTalk6(this, 0);
            }
        }
    }
}

BOOL HouseVisitVillager::enterVisitCall() {
    using namespace sB;
    u32 loc[6];
    drawFn = data_0213a740;
    collisionEnabled = 0;
    Ground_LockExit(0);
    RoomScoreEvaluator_Construct(loc);
    roomRateFlags = HappyRoom_RateMainRoom(loc, &roomStars);
    HouseVisitor_SetPresent();
    if (getVillagerData()) {
        VillagerState_SetRole(Villager_GetState(getVillagerData()), 2);
    }
    callTimer = 30;
    Snd_SeEmitterPlayOneShot(&seEmitter, 0x4ca, 0x7f, 0);
    RoomScoreEvaluator_Destruct(loc);
    return TRUE;
}

void HouseVisitVillager::execVisitCall() {
    using namespace sB;
    if (callTimer > 0) {
        callTimer = callTimer - 1;
    }
    if (callTimer == 0) {
        NpcTalkCtrl_requestTalk(&talkCtrl, 0, 1);
        callTimer = -1;
    }
}

BOOL HouseVisitVillager::enterVisitDoorOpen() {
    using namespace sB;
    drawFn = data_0213a740;
    collisionEnabled = 1;
    return TRUE;
}

void HouseVisitVillager::execVisitDoorOpen() {
    using namespace sB;
    if (talk.unk_3c->state == 0) {
        Snd_SeEmitterPlayOneShot(&seEmitter, 0x4cb, 0x7f, 0);
        Building_PlayDoorChime();
        setVisitState(3);
    }
}

BOOL HouseVisitVillager::enterVisitWalkIn() {
    using namespace sB;
    walkTargetX = position.x;
    walkTargetY = position.y;
    walkTargetZ = position.z;
    walkTargetZ = walkTargetZ - 0x2000;
    drawFn = data_0213a740;
    collisionEnabled = 1;
    walkInTimer = 0x28;
    return TRUE;
}

void HouseVisitVillager::execVisitWalkIn() {
    using namespace sB;
    if (walkInTimer == 1) {
        drawFn = *(Unk_ov068_02270afc_BFn *)data_ov068_0227099c;
        NpcActionCtrl_requestAction(&actionCtrl, 1, 2, walkTargetX, walkTargetZ, 0, 0, 0, 0, 0, 0);
    } else if (walkInTimer == 0) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            setVisitState(4);
        }
    }
    if (walkInTimer != 0) {
        walkInTimer = walkInTimer - 1;
    }
}

BOOL HouseVisitVillager::enterVisitGreetEnd() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return NpcActionCtrl_requestStand(&actionCtrl, 2, data_020c6cc8);
    } else {
        return NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
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
    wanderTimer = 5;
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 1, 0x148, 0x25, 0x25);
    stayTimer = 0x258;
    return TRUE;
}

void HouseVisitVillager::execVisitStay() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        if (stayTimer == 0 || talksLeft == 0) {
            if (leaveTalkDelay == 0) {
                TalkRequest_AddPlayerTalk6(this, 0);
                wantsToLeave = 1;
                return;
            } else if (leaveTalkDelay != 0) {
                leaveTalkDelay = leaveTalkDelay - 1;
            }
        }
        if (stayTimer > 0) {
            stayTimer = stayTimer - 1;
        }
    }
    Unk_ov068_02270afc_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        Unk_ov068_02270afc_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        if (Ground_IsOnLockedExit(&v)) {
            TalkRequest_AddPlayerTalk6(this, 0);
            playerAtExit = 1;
        }
    }
}

BOOL HouseVisitVillager::enterVisitWander() {
    using namespace sB;
    if (NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8)) {
        NpcLookAt_setTarget(&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        Ground_LockExit(0);
        return TRUE;
    }
    return FALSE;
}

void HouseVisitVillager::execVisitWander() {
    using namespace sA;
    Unk_ov068_02270afc_Vec v;
    Unk_ov068_02270afc_Vec tmp;
    Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)PlayerActor_GetBodyPos(4);
    if (visitState == 6) {
        if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
            if (stayTimer == 0 || talksLeft == 0) {
                if (leaveTalkDelay == 0) {
                    TalkRequest_AddPlayerTalk6(this, 0);
                    wantsToLeave = 1;
                    return;
                }
                if (leaveTalkDelay > 0) {
                    leaveTalkDelay--;
                }
            }
            if (stayTimer > 0) {
                stayTimer--;
            }
        }
    }
    if (visitState == 6) {
        if (pv != NULL) {
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (Ground_IsOnLockedExit(&v)) {
                TalkRequest_AddPlayerTalk6(this, 0);
                playerAtExit = 1;
                return;
            }
        }
    }
    s32 d = data_020c8cbc;
    if (pv != NULL) {
        d = Vec_DistXZ(pv, &position);
    }
    if ((*((u8 *)this + 0x508)) != 0 || (visitState != 6 && d < 0x2334)) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1 || visitState == 3) {
            if (NpcActionCtrl_requestStand(&actionCtrl, 2, data_020c6cc8)) {
                setVisitWalkSpeed();
                return;
            }
        }
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 0) {
        if (wanderTimer != 0) {
            wanderTimer--;
        }
        if (wanderTimer == 0) {
            wanderAngle = Mailbox_execNoMail(&walkTargetX, &position, rotY);
            waypointX = walkTargetX;
            waypointY = walkTargetY;
            waypointZ = walkTargetZ;
            if (wanderAngle != rotY) {
                if (!NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, wanderAngle, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                wanderTimer = Random_GlobalBelow(0x46) + 0x14;
            } else {
                if (!NpcActionCtrl_requestAction(&actionCtrl, 1, 1, walkTargetX, walkTargetZ, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                wanderTimer = Random_GlobalBelow(0x50) + 0x14;
            }
        } else {
            if (NpcActionCtrl_isActionDone(&actionCtrl)) {
                NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
            }
        }
    } else if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            NpcActionCtrl_requestAction(&actionCtrl, 1, 1, walkTargetX, walkTargetZ, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
        switch (NpcActor_findAvoidPos(this, &tmp)) {
        case 1:
            if (NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8)) {
                setVisitWalkSpeed();
            }
            break;
        case 2:
            waypointX = tmp.x;
            waypointY = tmp.y;
            waypointZ = tmp.z;
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, &waypointX);
            break;
        default:
            if (Vec_NotEqual(&waypointX, &walkTargetX) != 0) {
                waypointX = walkTargetX;
                waypointY = walkTargetY;
                waypointZ = walkTargetZ;
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, &walkTargetX);
            } else if (Vec_DistXZ(&walkTargetX, &position) < 0x200) {
                NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
                setVisitWalkSpeed();
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
    void *p = PlayerActor_GetActor(4);
    if (p != NULL) {
        u32 x = NpcActor_getAngleTo(this, p);
        if (wantsToLeave != 0 || playerAtExit != 0) {
            NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, x, 1);
        } else {
            NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, x, 0);
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
    if (talk.unk_3c != NULL) {
        if (talk.unk_3c->state == 0) {
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
    if (talk.unk_3c != NULL) {
        if (talk.unk_3c->state == 0) {
            HouseVisitor_ClearPresent();
            if (getVillagerData() != NULL) {
                VillagerState_ResetRole(Villager_GetState(getVillagerData()));
            }
            HouseVisit_SetFinished(this);
            if (wantsToLeave != 0) {
                Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
                SceneWarp_RequestExit(Scene_GetWarpRequest(), 6);
            } else {
                SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
            }
        }
    }
}

void HouseVisitVillager::onTalkMelodyPlayed() {
    using namespace sA;
    (*((u8 *)this + 0x893)) = 1;
}

BOOL HouseVisitVillager::canPlayTalkMelody() {
    using namespace sA;
    if ((*((u8 *)this + 0x893)) == 0) {
        return TRUE;
    }
    return FALSE;
}
