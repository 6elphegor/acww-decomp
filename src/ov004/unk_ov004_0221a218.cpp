// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "npc/Unk_0201a13c.h"
#include "npc/Unk_0202d7f4.h"
#include "npc/Unk_020323b0.h"
#include "npc/Unk_02053d3c.h"
#include "npc/Unk_02082088.h"
#include "npc/Unk_0202d5e8.h"
#include "actor/Unk_02088d00.h"
#include "npc/VillagerMood.h"
#include "snd/SndSeEmitter.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ac88.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/NpcFaceAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"

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
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
typedef BOOL (CafeVillager::*Unk_ov004_0224c994_Fn)();

struct Unk_ov004_0224c994_Ent {
    Unk_ov004_0224c994_Fn a;
    Unk_ov004_0224c994_Fn b;
};

struct Unk_ov004_0221a2d8_Out {
    void *fileName;
    u8 msgIndex;
};


extern "C" {
extern u16 data_020c6cc8;
extern Unk_ov004_0224c994_Ent sCafeVillagerActTable[3];
extern u8 data_ov004_022508e0[0x28];

s32 Random_GlobalBelow(s32 a);
void *VillagerData_getVillagerId(void *o);
void VillagerId_makeFileName(void *a, const void *b, u32 c, const void *d);
void func_02015ab0(void *o, s32 a);
s32 NpcActor_getPlayerActor(void *o, s32 a);
s32 NpcTalkCtrl_isBusy(void *o);
void TalkRequest_SetTargetDone(void *o);
void *func_02015aac(void *o);
s32 NpcActor_getAngleTo(void *o, void *p);
void NpcTalkCtrl_requestTurnAndTalk(void *o, s32 a, s32 b, s32 c);
void NpcMoveAnimSet_setStandAnim(void *o, s32 a);
void NpcMoveAnimSet_setWalkAnim(void *o, s32 a);
void NpcMoveAnimSet_setRunAnim(void *o, s32 a);
void NpcActor_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
}





struct Unk_020d77a4_Vec3;






class Unk_020d7710 : public ActorTalkRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
};

class VillagerTalk : public Unk_020d7710 {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void onMessageStart(u32 v);
    virtual void onActionTag0();
    virtual void onActionTag1(u32 v);
    virtual void onActionTag2(u32 v);
    virtual void onActionTag3(u32 v);
    virtual void onActionTag4(u32 v);
    virtual void onTag09_9();
    virtual u32 getSpeakerData();
    virtual void onWindowClose();
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone(u32 id);
    u8 pad_ac[0x1a0 - 0xac];
};

class CafeVillagerTalk : public VillagerTalk {
public:
    CafeVillagerTalk();
    virtual ~CafeVillagerTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(CafeVillager *owner);

    /* 0x1a0 */ CafeVillager *villager;
};

class CafeVillager : public VillagerActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL updateAct();

    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct02();
    BOOL setupAct02();
    void changeAct(s32 idx);

    /* 0x894 */ s32 act;
    /* 0x898 */ CafeVillagerTalk talk;
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
    NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0x1e);
    NpcMoveAnimSet_setWalkAnim(&moveAnimSet, 0x1e);
    NpcMoveAnimSet_setRunAnim(&moveAnimSet, 0x1e);
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
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
    if (data_ov004_02250910[act].a) {
        r = (this->*sCafeVillagerActTable[act].b)();
    }
    return r;
}

void CafeVillager::changeAct(s32 idx) {
    BOOL ok = TRUE;
    if (sCafeVillagerActTable[idx].a) {
        ok = (this->*sCafeVillagerActTable[idx].a)();
    }
    if (ok) {
        act = idx;
    }
}

BOOL CafeVillager::setupAct02() {
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL CafeVillager::mainAct02() { return TRUE; }

BOOL CafeVillager::setupAct00() {
    void *p = func_02015aac(&talk);
    s32 v = 0;
    if (p) {
        v = NpcActor_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, v, 0);
    return TRUE;
}

BOOL CafeVillager::mainAct00() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
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
    villager = owner;
}

void CafeVillagerTalk::start(TalkStartMsg *arg) {
    Unk_ov004_0221a2d8_Out *out = (Unk_ov004_0221a2d8_Out *)arg;
    VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_022508e0, 0x28, "ai_shop3");
    out->fileName = data_ov004_022508e0;
    out->msgIndex = Random_GlobalBelow(5);
}

void CafeVillagerTalk::onMessageEnd(u32) {}

void CafeVillagerTalk::onChoice(u32) {}

BOOL CafeVillager::vfunc_48(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

void CafeVillager::vfunc_4c(u32 a, u8) {
    switch (a) {
    case 0:
        talk.vfunc_08();
        func_02015ab0(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(0);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

