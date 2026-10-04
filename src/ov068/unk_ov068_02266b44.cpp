// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_ov068_Vec.h"
#include "actor/ActorProfile.h"
#include "item/ItemId.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcTalkCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcFaceAnim.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "actor/NpcActor.h"
#include "game/CollisionState.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"


class FieldVillager;
class SpNpcNookIntro;
class SpNpcNookIntroTalk;

#define ActorTalkRequest_setNumberSlot _ZN16ActorTalkRequest13setNumberSlotEijiii
#define ActorTalkRequest_getTalkPlayer _ZN16ActorTalkRequest13getTalkPlayerEv
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_setNpcHandle _ZN8NpcActor12setNpcHandleEPt
#define HouseData_getDebt _ZN9HouseData7getDebtEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define PlayerData_clearFlag _ZN10PlayerData9clearFlagEj


struct Unk_ov068_02266bd0_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec position;
    u8 pad_68[0x564 - 0x68];
    u8 actionCtrl[0x1b0];
    Unk_ov068_02266680_Vec walkTarget;
};

struct Unk_ov068_0226fd68_Vec {
    s32 x, y, z;
};



extern "C" {
void *PlayerData_GetCurrent();
BOOL TalkRequest_AddPlayerTalk6(void *p, s32 a);
void TalkRequest_SetTargetDone(void *p);
u32 NookShop_GetLevel(void *p);
u32 Math_CountDownU8(void *p);
void ProcBase_RequestDelete(void *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_Release(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void Camera_SetModeDefault();
void Camera_FocusOnPoint(Unk_ov068_02266680_Vec *v);
BOOL PlayerActor_IsScriptedWalking(s32 a);
void *PlayerActor_GetBodyPos(s32 a);
void PlayerActor_RequestWalkTo(void *v, u32 a, u32 b);
void PlayerActor_SetNoFaceTalkTarget(s32 a, s32 b);
void GameStart_Clear();
BOOL GameStart_IsNewResident();
BOOL GameStart_IsNewTown();
s32 PlayerDataArray_CountUsed(void *self);
void PlayerData_clearFlag(void *self, s32 a);
void *HouseData_getDebt(void *self);
void TalkWindowState_setNextMessage(void *self, void *buf, void *p);
void ActorTalkRequest_setNumberSlot(void *self, void *a, s32 b, s32 c, s32 d, s32 e);
void ActorTalkRequest_setTalkPlayer(void *self, s32 a);
void *ActorTalkRequest_getTalkPlayer(void *self);
s32 NpcActor_getPlayerActor(void *self, s32 a);
u32 NpcActor_getAngleTo(void *self, void *q);
void NpcActor_setTalkRequest(void *self, void *q);
void NpcActor_setNpcHandle(void *self, u16 *q);
s32 NpcActionCtrl_isActionDone(void *self);
s32 NpcActionCtrl_getAction(void *self);
void NpcActionCtrl_requestAction(void *self, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void NpcMoveCtrl_setSpeedPreset(void *self, s32 a, s32 b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u8 gU8None;
extern u8 gTalkMsgIndexEnd[];
extern u8 gSaveHouse[];
extern u8 gSavePlayers[];
extern void *sNookIntroMsgFilePtr;
extern const char *sNookModelPaths[];
extern const char *sNookTexPaths[];
}


// ---------------------------------------------------------------------------------------------------------------------

struct Unk_020d77a4_Vec3;








struct Unk_ov068_0226fea4_Flag {
    u8 flag;
    u8 pad[11];
};

class SpNpcNookIntroTalk : public SpNpcTalkRequest {
public:
    SpNpcNookIntroTalk();
    virtual ~SpNpcNookIntroTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 id);

    void runWalkScript();
    void setScript(s32 a);
    void attachOwner(FieldVillager *o);

    /* 0xac */ s32 script;
    /* 0xb0 */ u8 scriptStep;
    /* 0xb1 */ u8 pad_b1[3];
    /* 0xb4 */ FieldVillager *owner;
};

typedef BOOL (SpNpcNookIntro::*SpNpcNookIntroActFn)();
struct SpNpcNookIntroActEntry {
    SpNpcNookIntroActFn enter;
    SpNpcNookIntroActFn exit;
};
typedef void (SpNpcNookIntroTalk::*SpNpcNookIntroTalkScriptFn)();
struct SpNpcNookIntroTalkScript {
    SpNpcNookIntroTalkScriptFn fn;
    u8 flag;
    u8 pad[3];
};

class SpNpcNookIntro : public SpNpcActor {
public:
    SpNpcNookIntro() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ u32 act;
    SpNpcNookIntroTalk talk;
    u16 startAngle;
    u8 pad_712[2];
    s32 walkTargetX;
    s32 walkTargetY;
    s32 walkTargetZ;
    u8 actTimer;
    u8 pad_721[3];
};

extern "C" SpNpcNookIntro *SpNpcNookIntro_Create();
#define data_ov068_0226fe1c ((Unk_ov068_0226fea4_Flag *)((u8 *)sNookIntroTalkScripts + 8))
#define PMA(x) (*(SpNpcNookIntroTalkScriptFn *)(x))
#define PMB(x) (*(SpNpcNookIntroActFn *)(x))
extern "C" {
void _ZN14SpNpcNookIntro10setupAct03Ev();
void _ZN14SpNpcNookIntro9mainAct01Ev();
void _ZN14SpNpcNookIntro10setupAct00Ev();
void _ZN14SpNpcNookIntro9mainAct00Ev();
void _ZN14SpNpcNookIntro10setupAct04Ev();
void _ZN14SpNpcNookIntro9mainAct03Ev();
void _ZN18SpNpcNookIntroTalk13runWalkScriptEv();
void _ZN14SpNpcNookIntro9mainAct04Ev();
void _ZN14SpNpcNookIntro10setupAct05Ev();
void _ZN14SpNpcNookIntro9mainAct02Ev();
void _ZN14SpNpcNookIntro9mainAct05Ev();
void _ZN14SpNpcNookIntro10setupAct01Ev();
void _ZN14SpNpcNookIntro10setupAct02Ev();
extern void *data_ov068_0226fd00[2];
extern void *data_ov068_0226fd08[2];
extern void *data_ov068_0226fd10[2];
extern void *data_ov068_0226fd18[2];
extern void *data_ov068_0226fd20[2];
extern void *data_ov068_0226fd28[2];
extern void *data_ov068_0226fd30[2];
extern void *data_ov068_0226fd38[2];
extern void *data_ov068_0226fd40[2];
extern void *data_ov068_0226fd48[2];
extern void *data_ov068_0226fd50[2];
extern void *data_ov068_0226fd58[2];
extern void *data_ov068_0226fd60[2];
extern char sNookIntroMsgFile[0x14];
extern char sNookModelRcn[0x18];
extern char sNookModelRcc[0x18];
extern char sNookModelRcs[0x18];
extern char sNookModelRcd[0x18];
extern char sNookTexRcn[0x1c];
extern char sNookTexRcc[0x1c];
extern char sNookTexRcs[0x1c];
extern char sNookTexRcd[0x1c];
extern SpNpcNookIntroTalkScript sNookIntroTalkScripts[2];
extern SpNpcNookIntroActEntry sSpNpcNookIntroActTable[6];
}

// data definitions before the function with the local static table (creation order)
extern "C" char sNookTexRcd[0x1c] = "npc_sp/model/rcd_tex.nsbtx";
extern "C" SpNpcNookIntroTalkScript sNookIntroTalkScripts[2] = {{0, 0}, {PMA(data_ov068_0226fd30), 1}};
extern "C" void *data_ov068_0226fd30[2] = {(void *)_ZN18SpNpcNookIntroTalk13runWalkScriptEv, 0};

extern "C" SpNpcNookIntro *SpNpcNookIntro_Create() {
    return new SpNpcNookIntro();
}

BOOL SpNpcNookIntro::preCreate() {
    static ItemId tbl[4] = {
        ItemId(0xd019), ItemId(0xd01a),
        ItemId(0xd01b), ItemId(0xd01c)
    };
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    NpcActor_setNpcHandle(this, &tbl[NookShop_GetLevel(&data_021ed104)].id);
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner((FieldVillager *)this);
    NpcMoveCtrl_setSpeedPreset(&moveCtrl, 2, 0x399, 0x133, 0x199);
    return TRUE;
}

// data definitions after the function with the local static table
extern "C" const char *sNookModelPaths[4] = {sNookModelRcn, sNookModelRcc, sNookModelRcs,
                                                 sNookModelRcd};
extern "C" char sNookModelRcn[0x18] = "npc_sp/model/rcn.nsbmd";
extern "C" void *data_ov068_0226fd40[2] = {(void *)_ZN14SpNpcNookIntro10setupAct05Ev, 0};
extern "C" void *data_ov068_0226fd00[2] = {(void *)_ZN14SpNpcNookIntro10setupAct03Ev, 0};
extern "C" SpNpcNookIntroActEntry sSpNpcNookIntroActTable[6] = {
    {PMB(data_ov068_0226fd10), PMB(data_ov068_0226fd18)},
    {PMB(data_ov068_0226fd58), PMB(data_ov068_0226fd08)},
    {PMB(data_ov068_0226fd60), PMB(data_ov068_0226fd48)},
    {PMB(data_ov068_0226fd00), PMB(data_ov068_0226fd28)},
    {PMB(data_ov068_0226fd20), PMB(data_ov068_0226fd38)},
    {PMB(data_ov068_0226fd40), PMB(data_ov068_0226fd50)}};
extern "C" char sNookModelRcc[0x18] = "npc_sp/model/rcc.nsbmd";
extern "C" void *data_ov068_0226fd08[2] = {(void *)_ZN14SpNpcNookIntro9mainAct01Ev, 0};
extern "C" void *data_ov068_0226fd50[2] = {(void *)_ZN14SpNpcNookIntro9mainAct05Ev, 0};
extern "C" void *data_ov068_0226fd18[2] = {(void *)_ZN14SpNpcNookIntro9mainAct00Ev, 0};
extern "C" char sNookModelRcd[0x18] = "npc_sp/model/rcd.nsbmd";
extern "C" void *data_ov068_0226fd58[2] = {(void *)_ZN14SpNpcNookIntro10setupAct01Ev, 0};
extern "C" void *data_ov068_0226fd48[2] = {(void *)_ZN14SpNpcNookIntro9mainAct02Ev, 0};
extern "C" char sNookTexRcn[0x1c] = "npc_sp/model/rcn_tex.nsbtx";
extern "C" char sNookTexRcc[0x1c] = "npc_sp/model/rcc_tex.nsbtx";
extern "C" char sNookIntroMsgFile[0x14] = "sp_etc_sequence4";
extern "C" void *data_ov068_0226fd10[2] = {(void *)_ZN14SpNpcNookIntro10setupAct00Ev, 0};
extern "C" void *data_ov068_0226fd38[2] = {(void *)_ZN14SpNpcNookIntro9mainAct04Ev, 0};
extern "C" char sNookModelRcs[0x18] = "npc_sp/model/rcs.nsbmd";
extern "C" const char *sNookTexPaths[4] = {sNookTexRcn, sNookTexRcc, sNookTexRcs,
                                                 sNookTexRcd};
extern "C" void *data_ov068_0226fd60[2] = {(void *)_ZN14SpNpcNookIntro10setupAct02Ev, 0};
extern "C" void *data_ov068_0226fd28[2] = {(void *)_ZN14SpNpcNookIntro9mainAct03Ev, 0};
extern "C" void *sNookIntroMsgFilePtr = sNookIntroMsgFile;
extern "C" char sNookTexRcs[0x1c] = "npc_sp/model/rcs_tex.nsbtx";
extern "C" ActorProfile sSpNpcNookIntroProfile = {(void *(*)())SpNpcNookIntro_Create, 0x7d, 0x81, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov068_0226fd20[2] = {(void *)_ZN14SpNpcNookIntro10setupAct04Ev, 0};

BOOL SpNpcNookIntro::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(0);
    startAngle = rotY;
    collider.groups |= 2;
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        if (!GameStart_IsNewResident()) {
            if (!GameStart_IsNewTown()) {
                PlayerData_clearFlag(p, 1);
            }
        }
    }
    Bgm_RequestSilence(0x13, 0xf, 0);
    return TRUE;
}

u8 *SpNpcNookIntro::getTexturePath() {
    return (u8 *)sNookTexPaths[NookShop_GetLevel(&data_021ed104)];
}

u8 *SpNpcNookIntro::getModelPath() {
    return (u8 *)sNookModelPaths[NookShop_GetLevel(&data_021ed104)];
}

BOOL SpNpcNookIntro::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcNookIntroActTable[act].exit != NULL) {
        result = (this->*sSpNpcNookIntroActTable[act].exit)();
    }
    return result;
}

void SpNpcNookIntro::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcNookIntroActTable[state].enter != NULL) {
        ok = (this->*sSpNpcNookIntroActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcNookIntro::setupAct00() {
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct00() {
    if (TalkRequest_AddPlayerTalk6(this, 0)) {
        PlayerActor_SetNoFaceTalkTarget(1, 4);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct01() {
    u32 x;
    void *p = ActorTalkRequest_getTalkPlayer(&talk);
    x = 0;
    if (p != NULL) {
        x = NpcActor_getAngleTo(this, p);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, x, 1);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct01() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        Camera_SetModeDefault();
        Bgm_RequestSilence(0x13, 0x3c, 0);
        Bgm_Release(0x47);
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct02() {
    Unk_ov068_0226fd68_Vec v;
    Unk_ov068_0226fd68_Vec *p = (Unk_ov068_0226fd68_Vec *)PlayerActor_GetBodyPos(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    v.z += 0x2000;
    PlayerActor_RequestWalkTo(&v, 0x400, 4);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct02() {
    if (PlayerActor_IsScriptedWalking(4) == 0) {
        talk.resetMsg();
        ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct03() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct03() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct04() {
    walkTargetX = position.x;
    walkTargetY = position.y;
    walkTargetZ = position.z;
    walkTargetX -= 0x2000;
    walkTargetZ += 0xa000;
    NpcActionCtrl_requestAction(&actionCtrl, 2, 1, walkTargetX, walkTargetZ, 0, 0, 0, 0, data_020c6cc8, 0);
    actTimer = 0x3c;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct04() {
    if (NpcActionCtrl_isActionDone(&actionCtrl) != 0 || Math_CountDownU8(&actTimer) == 0) {
        TalkRequest_SetTargetDone(this);
        if (PlayerData_GetCurrent()) {
            GameStart_Clear();
        }
    }
    return TRUE;
}

BOOL SpNpcNookIntro::setupAct05() {
    actTimer = 10;
    return TRUE;
}

BOOL SpNpcNookIntro::mainAct05() {
    if (Math_CountDownU8(&actTimer) == 0) {
        Bgm_ReleasePriority(0x13);
        Bgm_RequestSilence(0x12, 5, 5);
        ProcBase_RequestDelete(this);
    }
    return TRUE;
}

SpNpcNookIntroTalk::SpNpcNookIntroTalk() {}

SpNpcNookIntroTalk::~SpNpcNookIntroTalk() {
}

void SpNpcNookIntroTalk::attachOwner(FieldVillager *o) {
    resetMsg();
    owner = o;
}

void SpNpcNookIntroTalk::start(TalkStartMsg *out_) {
    TalkStartMsg *out = (TalkStartMsg *)out_;
    void *p = PlayerData_GetCurrent();
    if (p != 0) {
        PlayerData_clearFlag(p, 0x23);
    }
    out->msgKey = (const char *)sNookIntroMsgFilePtr;
    out->msgIndex = 0x22;
}

void SpNpcNookIntroTalk::onMessageEnd(u32) {
    TalkWindowState *sc = (TalkWindowState *)window;
    volatile u8 buf = gU8None;
    buf = 0;
    switch (msgIndex) {
    case 0x22:
        TalkWindowState_setNextMessage(sc, gTalkMsgIndexEnd, 0);
        sc->openMode = 0;
        setScript(1);
        break;
    case 10:
    case 13: {
        void *p = HouseData_getDebt(gSaveHouse);
        if (p == 0) {
            buf = 0xf;
        } else {
            ActorTalkRequest_setNumberSlot(this, p, 1, 0xa, 1, 0);
            if (GameStart_IsNewTown() != 0) {
                buf = 0x1c;
            } else if (PlayerDataArray_CountUsed(gSavePlayers) <= 1) {
                buf = 0x27;
            } else {
                buf = 0xb;
            }
        }
        break;
    }
    case 11:
    case 0x1c:
    case 0x27:
        if (GameStart_IsNewResident() == 0 && GameStart_IsNewTown() == 0) {
            buf = 0xe;
        } else {
            buf = 0xc;
        }
        break;
    case 15:
        if (GameStart_IsNewResident() == 0 && GameStart_IsNewTown() == 0) {
            buf = 0x10;
        } else {
            buf = 0x11;
        }
        break;
    }
    if (buf != 0) {
        TalkWindowState_setNextMessage(sc, (u8 *)&buf, sNookIntroMsgFilePtr);
    }
}

void SpNpcNookIntroTalk::onChoice(u32) {
}

void SpNpcNookIntroTalk::update() {
    if (data_ov068_0226fe1c[script].flag != 0) {
        if (sNookIntroTalkScripts[script].fn) {
            (this->*sNookIntroTalkScripts[script].fn)();
        }
    }
}

void SpNpcNookIntroTalk::onTaskDone(u32) {
    if (data_ov068_0226fe1c[script].flag == 0) {
        if (sNookIntroTalkScripts[script].fn) {
            (this->*sNookIntroTalkScripts[script].fn)();
            setScript(0);
        }
    }
}

void SpNpcNookIntroTalk::setScript(s32 a) {
    script = a;
    scriptStep = 0;
}

void SpNpcNookIntroTalk::runWalkScript() {
    switch (scriptStep) {
    case 0:
        if (window->state == 5) {
            Bgm_ReleasePriority(0x13);
            Bgm_Request(0x15, 0x47, 0x7f, 1);
            PlayerActor_SetNoFaceTalkTarget(0, 4);
            Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
            Unk_ov068_02266680_Vec *pv = &o->position;
            Unk_ov068_02266680_Vec *pd = &o->walkTarget;
            pd->x = pv->x;
            pd->y = pv->y;
            pd->z = pv->z;
            o = (Unk_ov068_02266bd0_Owner *)owner;
            o->walkTarget.x += 0x6000;
            o = (Unk_ov068_02266bd0_Owner *)owner;
            NpcActionCtrl_requestAction(o->actionCtrl, 2, 2, o->walkTarget.x, o->walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0);
            scriptStep = 1;
        }
        break;
    case 1: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
        if (NpcActionCtrl_isActionDone(o->actionCtrl) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)owner;
            if (NpcActionCtrl_getAction(o->actionCtrl) == 2) {
                o = (Unk_ov068_02266bd0_Owner *)owner;
                NpcActionCtrl_requestAction(o->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                scriptStep = 2;
            }
        }
        break;
    }
    case 2: {
        Unk_ov068_02266bd0_Owner *o = (Unk_ov068_02266bd0_Owner *)owner;
        if (NpcActionCtrl_isActionDone(o->actionCtrl) != 0) {
            o = (Unk_ov068_02266bd0_Owner *)owner;
            if (NpcActionCtrl_getAction(o->actionCtrl) == 0) {
                TalkWindowState *sc = (TalkWindowState *)window;
                volatile u8 buf = gU8None;
                if (GameStart_IsNewTown() != 0) {
                    buf = 0xd;
                } else {
                    buf = 0xa;
                }
                TalkWindowState_setNextMessage(sc, (u8 *)&buf, sNookIntroMsgFilePtr);
                sc->nextState = 1;
                o = (Unk_ov068_02266bd0_Owner *)owner;
                Unk_ov068_02266680_Vec t;
                Unk_ov068_02266680_Vec *pt = &o->position;
                t.x = pt->x;
                t.y = pt->y;
                t.z = pt->z;
                t.y += 0x2000;
                Camera_FocusOnPoint(&t);
                setScript(0);
            }
        }
        break;
    }
    }
}

BOOL SpNpcNookIntro::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (act == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcNookIntro::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 1:
        changeAct(2);
        break;
    case 8:
        changeAct(5);
        break;
    }
}

