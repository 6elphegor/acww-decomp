#include "uptr.h"
// mwcc-flags: -str reuse
#include "types.h"
#include "gfx/VecFx32.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/ActorProfile.h"
#include "game/Unk_0201acf8.h"
#include "player/PlayerData.h"
#include "player/PlayerSpNpcRecord.h"
#include "town/VisitorPos.h"
#define PROTO_LOCAL_Math_AngleXZ  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Npc_IsPosBlocked  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Npc_RotateOffsetXZ  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gRandom  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020119cc.h"
#include "proto/main/unk_020407fc.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_020850e0.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02089fbc.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02098e90.h"
#include "proto/ov071/unk_ov071_022713c0.h"


class SpNpcLyle;
class SpNpcLyleTalk;

class ActorTalkRequest;

struct SpNpcLyleSidestepPos {
    u32 v[4];
};


// Message sent to the scene (func_02067a84): id byte, then two halfwords.
struct SpNpcLyleMsgLocal {
    u8 msgIndex;
    u8 pad;
    u16 item;
    u16 item2;
};

struct SpNpcLyleDateBuf {
    u32 pad[2];
};


struct SpNpcLyleActEntry;



extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern s32 data_020c6cf0;
extern s32 data_020c6d1c;
extern u32 gVec3Zero[];
extern u32 gCamera;
extern VecFx32 gCameraLookAt;
extern u32 gRandom;
extern u8 gSaveData[];
extern s16 data_02135f44[];
extern u32 __ptmf_null[];

void _ZN20PlayerDailyTalkFlags10stampTodayEv(void *h);
void Clock_GetDate(void *p);
s32 Date_DaysBetween(void *p, s32 v);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void MI_CpuFill8(void *dst, s32 v, s32 n);
void EventWeek_SetLyleWeek(s32 a, s32 b);
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
s32 Math_AngleXZ(void *a, void *b);
u32 Random_Next(void *p);

void _ZN16ActorTalkRequest15setPocketFilterEjjj(void *self, u32 cb, u32 b, u32 c);

void Npc_RotateOffsetXZ(SpNpcLyleSidestepPos *t, void *pos, void *p, s32 ang);
BOOL Npc_IsPosBlocked(SpNpcLyleSidestepPos *t);
void TalkRequest_SetTargetDone(void *self);
s32 Vec_Distance(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, void *b);
BOOL TownMap_IsPosWalkable(void *a, s32 b);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *self, s32 a, s32 b);
BOOL SpNpcLyle_IsForgedPainting(u16 *p, s32 x);
}






typedef void (SpNpcLyleTalk::*SpNpcLyleTalkScriptFn)();

// Menu-state sub-object at +0x658 of the scene (vtable 0x02272ba8)
class SpNpcLyleTalk : public SpNpcTalkRequest {
public:
    SpNpcLyleTalk();
    virtual ~SpNpcLyleTalk();
    virtual void resetMsg();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone(u32 id);

    void attachOwner(SpNpcLyle *o);
    void scriptCloseItemSelect();
    void onClaimItemChosen();
    void setNextScript(s32 idx);
    void setScript(s32 idx);
    void getScript(SpNpcLyleTalkScriptFn *out, s32 idx);

    /* 0xac */ s32 topic;
    /* 0xb0 */ SpNpcLyle *owner;
    /* 0xb4 */ u8 questionCount;
    /* 0xb5 */ u8 pad_b5[3];
    /* 0xb8 */ SpNpcLyleTalkScriptFn script;
    /* 0xc0 */ SpNpcLyleTalkScriptFn nextScript;
};







// Scene class (vtable 0x02272c38)
class SpNpcLyle : public SpNpcActor {
public:
    SpNpcLyle() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getAct0BAnimA();
    virtual s32 getAct0BAnimB();
    virtual s32 getWalkAnimSpeedScale();

    s32 pickUnaskedQuestion(u8 *p, s32 n);
    s32 countUnaskedQuestions(u8 *p, s32 n);
    BOOL mainAct02();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL tryAvoidObstacle();
    BOOL steerAroundObstacle();
    BOOL findSidestepPos(VecFx32 *out, void *unused);
    BOOL pickWanderTarget(s32 *x, s32 *z);
    BOOL setupAct03();
    BOOL mainAct01();
    BOOL setupAct01();
    void act01Step2();
    void act01Step1();
    void act01Step0();
    BOOL isPlayerInFront(s32 mask);
    BOOL isNearChaseStart();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct00();
    BOOL setupAct00();
    s32 tickTimer(s32 *p);
    BOOL isNearCameraFocus(s32 a);
    BOOL isInFocusBox(VecFx32 *a, VecFx32 *b, s32 m);
    void changeAct(s32 state);

    s32 act;
    SpNpcLyleTalk talk;
    u8 askedQuestions[5];
    u8 act01Step;
    u8 pad_726[2];
    s32 stepTimer;
    s32 approachCooldown;
    Character *chaseTarget;
    VecFx32 chaseStart;
};

typedef BOOL (SpNpcLyle::*SpNpcLyleActFn)();
typedef void (SpNpcLyle::*Unk_ov071_02272198_Fn)();

struct SpNpcLyleActEntry {
    SpNpcLyleActFn enter;
    SpNpcLyleActFn exit;
};


extern "C" {
extern const TalkStartMsg sSpNpcLyleTopicMsgs[3];
extern u8 sSpNpcLyleKey[17];
extern u8 sSpNpcLyleModelPath[23];
extern u8 sSpNpcLyleTexturePath[27];
extern ActorProfile sSpNpcLyleProfile;
extern SpNpcLyleActEntry sSpNpcLyleActTable[6];
extern s16 sSpNpcLyleFrontAngle;
extern FxVec3 sSpNpcLyleSidestepOffsets[2];
SpNpcLyle *SpNpcLyle_Create();
extern void *data_ov071_02272ac0[2];
extern void *data_ov071_02272ac8[2];
extern void *data_ov071_02272ad0[2];
extern void *data_ov071_02272ad8[2];
extern void *data_ov071_02272ae0[2];
extern void *data_ov071_02272ae8[2];
extern void *data_ov071_02272af0[2];
extern void *data_ov071_02272af8[2];
extern void *data_ov071_02272b00[2];
extern void *data_ov071_02272b08[2];
extern void *data_ov071_02272b10[2];
extern void *data_ov071_02272b18[2];
extern void *data_ov071_02272b20[2];
extern void *data_ov071_02272b28[2];
extern void *data_ov071_02272b30[2];
extern void *data_ov071_02272b38[2];
void _ZN9SpNpcLyle10setupAct01Ev();
void _ZN9SpNpcLyle9mainAct02Ev();
void _ZN9SpNpcLyle10setupAct03Ev();
void _ZN9SpNpcLyle9mainAct00Ev();
void _ZN9SpNpcLyle10setupAct00Ev();
void _ZN9SpNpcLyle9mainAct03Ev();
void _ZN13SpNpcLyleTalk21scriptCloseItemSelectEv();
void _ZN9SpNpcLyle9mainAct04Ev();
void _ZN9SpNpcLyle10setupAct05Ev();
void _ZN9SpNpcLyle9mainAct05Ev();
void _ZN9SpNpcLyle10act01Step0Ev();
void _ZN9SpNpcLyle10act01Step1Ev();
void _ZN9SpNpcLyle10setupAct04Ev();
void _ZN9SpNpcLyle10act01Step2Ev();
void _ZN13SpNpcLyleTalk17onClaimItemChosenEv();
void _ZN9SpNpcLyle9mainAct01Ev();
}

void *data_ov071_02272b20[2] = {(void *)_ZN9SpNpcLyle10setupAct04Ev, 0};

void *data_ov071_02272ac8[2] = {(void *)_ZN9SpNpcLyle9mainAct02Ev, 0};

void *data_ov071_02272b38[2] = {(void *)_ZN9SpNpcLyle9mainAct01Ev, 0};

void *data_ov071_02272af0[2] = {(void *)_ZN13SpNpcLyleTalk21scriptCloseItemSelectEv, 0};

void *data_ov071_02272b00[2] = {(void *)_ZN9SpNpcLyle10setupAct05Ev, 0};

void *data_ov071_02272b08[2] = {(void *)_ZN9SpNpcLyle9mainAct05Ev, 0};

extern "C" SpNpcLyle *SpNpcLyle_Create() {
    return new SpNpcLyle();
}

s32 SpNpcLyle::getWalkAnimSpeedScale() { return data_020c6cf0 - 0x1000; }

BOOL SpNpcLyle::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    ((NpcMoveCtrl *)(&moveCtrl))->setSpeedPreset(2, 0x200, 0x100, 0x100);
    MI_CpuFill8(askedQuestions, 0, 5);
    return TRUE;
}

BOOL SpNpcLyle::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    ((NpcAnimCtrl *)(&animCtrl))->playAnim((NpcActor *)(this), 0x141, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    changeAct(4);
    return TRUE;
}

BOOL SpNpcLyle::onDelete() {
    if (!SpNpcActor::onDelete()) {
        return FALSE;
    }
    if (EventAnnounce_IsBusy() == 0) {
        ((VisitorPos *)(TownSessionState_GetVisitorPos(TownSessionState_Get())))->pickRandomPos();
    }
    return TRUE;
}

u8 *SpNpcLyle::getTexturePath() {
    return sSpNpcLyleTexturePath;
}

u8 *SpNpcLyle::getModelPath() {
    return sSpNpcLyleModelPath;
}

s32 SpNpcLyle::getAct0BAnimA() {
    return 0xdb;
}

s32 SpNpcLyle::getAct0BAnimB() {
    return 0x6b;
}

BOOL SpNpcLyle::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcLyleActTable[act].exit != NULL) {
        r = (this->*sSpNpcLyleActTable[act].exit)();
    }
    return r;
}

void SpNpcLyle::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcLyleActTable[state].enter != NULL) {
        ok = (this->*sSpNpcLyleActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcLyle::isInFocusBox(VecFx32 *a, VecFx32 *b, s32 m) {
    if (m == 0) {
        BOOL r = FALSE;
        BOOL f2 = FALSE;
        BOOL f1 = FALSE;
        if (b->x > a->x - 0x8000 && b->x < a->x + 0x8000) {
            f1 = TRUE;
        }
        if (f1) {
            if (b->z > a->z - 0xc000) {
                f2 = TRUE;
            }
        }
        if (f2) {
            if (b->z < a->z + 0x6000) {
                r = TRUE;
            }
        }
        return r;
    } else {
        BOOL r = FALSE;
        BOOL f2 = FALSE;
        BOOL f1 = FALSE;
        if (b->x > a->x - 0x10000 && b->x < a->x + 0x10000) {
            f1 = TRUE;
        }
        if (f1) {
            if (b->z > a->z - 0x1a000) {
                f2 = TRUE;
            }
        }
        if (f2) {
            if (b->z < a->z + 0xa000) {
                r = TRUE;
            }
        }
        return r;
    }
}

BOOL SpNpcLyle::isNearCameraFocus(s32 a) {
    VecFx32 *pos = (VecFx32 *)&position;
    BOOL r = FALSE;
    if (gCamera != 0) {
        VecFx32 v;
        v = gCameraLookAt;
        r = isInFocusBox(&v, pos, a);
    }
    return r;
}

s32 SpNpcLyle::tickTimer(s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL SpNpcLyle::setupAct00() {
    return TRUE;
}

BOOL SpNpcLyle::mainAct00() {
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcLyle::setupAct05() {
    void *p = talk.getTalkPlayer();
    s32 x = rotY;
    if (p != NULL) {
        x = ((NpcActor *)(this))->getAngleTo((NpcActor *)(p));
    }
    ((NpcTalkCtrl *)(&talkCtrl))->requestTurnAndTalk(0, x, 0);
    return TRUE;
}

BOOL SpNpcLyle::mainAct05() {
    return TRUE;
}

BOOL SpNpcLyle::isNearChaseStart() {
    if (Vec_Distance(&position, &chaseStart) <= 0xc000) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcLyle::isPlayerInFront(s32 mask) {
    BOOL r = FALSE;
    if (((NpcActor *)(this))->getDistanceTo((NpcActor *)(chaseTarget)) <= mask) {
        s32 t = ((NpcActor *)(this))->getRelativeAngleTo((NpcActor *)(chaseTarget));
        s32 lim = sSpNpcLyleFrontAngle;
        if (t >= -lim && t <= lim) {
            r = TRUE;
        }
    }
    return r;
}

void SpNpcLyle::act01Step0() {
    if (chaseTarget != NULL) {
        if (((NpcActionCtrl *)(&actionCtrl))->isActionDone() != 0) {
            if (isPlayerInFront(0x3000) != 0) {
                s32 id = getAct0BAnimB();
                ((NpcActionCtrl *)(&actionCtrl))->requestPlayAnim(1, id, 0, data_020c6cc8, 0);
                act01Step = 2;
            } else {
                Character *p = chaseTarget;
                VecFx32 &v = *(VecFx32 *)&p->position;
                ((NpcActionCtrl *)(&actionCtrl))->requestAction(2, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                stepTimer = 300;
                act01Step = 1;
            }
        }
    } else {
        changeAct(3);
    }
}

void SpNpcLyle::act01Step1() {
    NpcMoveCtrl *q = &moveCtrl;
    if (tickTimer(&stepTimer) != 0 && chaseTarget != NULL) {
        if (isPlayerInFront(0x3000) != 0) {
            s32 id = getAct0BAnimB();
            ((NpcActionCtrl *)(&actionCtrl))->requestPlayAnim(1, id, 0, data_020c6cc8, 0);
            act01Step = 2;
            stepTimer = 240;
        } else if (isNearChaseStart() != 0) {
            ((NpcMoveCtrl *)(q))->setWaypoint((VecFx32 *)&chaseTarget->position);
        } else {
            approachCooldown = 200;
            changeAct(3);
        }
    } else {
        approachCooldown = 200;
        changeAct(3);
    }
}

void SpNpcLyle::act01Step2() {
    if (chaseTarget == NULL) {
        changeAct(3);
    } else if (tickTimer(&stepTimer) == 0) {
        s32 x = ((NpcActor *)(this))->getAngleTo((NpcActor *)(chaseTarget));
        ((NpcActionCtrl *)(&actionCtrl))->requestAction(3, 1, 0, 0, 0, x, 0, 0, data_020c6cc8, 0);
        approachCooldown = 200;
        changeAct(3);
    } else if (isPlayerInFront(0x5000) == 0) {
        Character *p = chaseTarget;
        VecFx32 &v = *(VecFx32 *)&p->position;
        ((NpcActionCtrl *)(&actionCtrl))->requestAction(2, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
        stepTimer = 300;
        act01Step = 1;
    }
}

BOOL SpNpcLyle::setupAct01() {
    chaseTarget = (Character *)PlayerActor_GetCharacter(4);
    VecFx32 *pv = (VecFx32 *)&position;
    chaseStart = *pv;
    ((NpcActionCtrl *)(&actionCtrl))->requestPlayAnim(1, 0xdf, 1, data_020c6cc8, 0);
    ((NpcFootstepFx *)(&footstepFx))->enableFootsteps();
    ((NpcLookAt *)(&lookAt))->setTarget(1, 0, 0, (VecFx32 *)(void *)(gVec3Zero), 4, data_020c6d1c, 1);
    act01Step = 0;
    return TRUE;
}

BOOL SpNpcLyle::mainAct01() {
    static Unk_ov071_02272198_Fn tbl[3] = {*(Unk_ov071_02272198_Fn *)data_ov071_02272b10,
                                           *(Unk_ov071_02272198_Fn *)data_ov071_02272b18,
                                           *(Unk_ov071_02272198_Fn *)data_ov071_02272b28};
    if (act01Step < 3) {
        (this->*tbl[act01Step])();
    }
    return FALSE;
}

BOOL SpNpcLyle::setupAct03() {
    stepTimer = 0;
    ((NpcActionCtrl *)(&actionCtrl))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    ((NpcFootstepFx *)(&footstepFx))->enableFootsteps();
    ((NpcLookAt *)(&lookAt))->setTarget(1, 0, 0, (VecFx32 *)(void *)(gVec3Zero), 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcLyle::pickWanderTarget(s32 *x, s32 *z) {
    BOOL r = FALSE;
    VecFx32 v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    s32 i = r;
    for (; i < 6; i++) {
        s16 a = Random_Next(&gRandom);
        u32 idx = ((u16)a >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + position.x;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + position.z;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r) != 0) {
            *x = v.x;
            *z = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcLyle::findSidestepPos(VecFx32 *out, void *unused) {
    BOOL r = FALSE;
    SpNpcLyleSidestepPos t;
    Npc_RotateOffsetXZ(&t, &position, unused, moveAngleY);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL SpNpcLyle::steerAroundObstacle() {
    NpcActionCtrl *p = &actionCtrl;
    NpcMoveCtrl *q = &moveCtrl;
    s32 k = ((NpcLookAt *)(&obstacleProbe))->getObstacleBits();
    BOOL r = FALSE;
    VecFx32 v;
    if (((NpcMoveCtrl *)(q))->hasArrived((Character *)(this), 1) == 0) {
        switch (k) {
        case 3:
            ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (findSidestepPos(&v, &sSpNpcLyleSidestepOffsets[1]) != 0) {
                ((NpcMoveCtrl *)(q))->setDestination(&v);
            } else {
                ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (findSidestepPos(&v, sSpNpcLyleSidestepOffsets) != 0) {
                ((NpcMoveCtrl *)(q))->setDestination(&v);
            } else {
                ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (((NpcMoveCtrl *)(q))->hasNextLeg() != 0) {
            ((NpcMoveCtrl *)(q))->resetDestination();
        }
    }
    return r;
}

BOOL SpNpcLyle::tryAvoidObstacle() {
    if (*(u32 *)(HOST_AT(this, 0x98, speed, 0)) != 0 && steerAroundObstacle()) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcLyle::mainAct03() {
    NpcActionCtrl *p = &actionCtrl;
    VecFx32 v;
    VecFx32 v2;
    if (tickTimer(&approachCooldown) == 0) {
        if (Talk_CheckAndSetPlayerFlag(0x28, 0) == 0) {
            if (isNearCameraFocus(0) != 0) {
                if (isPlayerInFront(0x8000) != 0) {
                    changeAct(1);
                    return TRUE;
                }
            }
        }
    }
    tickTimer(&stepTimer);
    if (isNearCameraFocus(1) != 0) {
        if (tryAvoidObstacle() == 0) {
            if (((NpcActionCtrl *)(p))->isActionDone() != 0) {
                if (((Unk_0201acf8 *)(&unk_3aa))->getLevel() == 2) {
                    ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(&gRandom) & 7) == 0) {
                    u32 *d = gVec3Zero;
                    v.x = d[0];
                    v.y = d[1];
                    v.z = d[2];
                    if (pickWanderTarget(&v.x, &v.z) != 0) {
                        s32 ang = Math_AngleXZ(&position, &v);
                        if (NpcActor_IsFrontAngle((s16)(ang - rotY)) != 0) {
                            s32 kind = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                kind = 2;
                            }
                            if (kind != ((NpcActionCtrl *)(&actionCtrl))->getAction()) {
                                ((NpcActionCtrl *)(p))->requestAction(kind, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                stepTimer = 0x64;
                            }
                        } else if (((NpcActionCtrl *)(&actionCtrl))->getAction() != 4) {
                            ((NpcActionCtrl *)(p))->requestAction(4, 1, v.x, v.z, 0, ang, 0, 0, data_020c6cc8, 0);
                            stepTimer = 0x50;
                        }
                    } else {
                        ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (speed != 0) {
                if (((NpcActionCtrl *)(&actionCtrl))->getAction() == 1 || ((NpcActionCtrl *)(&actionCtrl))->getAction() == 2 ||
                    ((NpcActionCtrl *)(&actionCtrl))->getAction() == 4) {
                    if (stepTimer == 0) {
                        ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        u32 *q = (u32 *)((NpcMoveCtrl *)(&moveCtrl))->getDestination();
                        v2.x = q[0];
                        v2.y = q[1];
                        v2.z = q[2];
                        s32 a = Math_AngleXZ(&position, &v2);
                        if (NpcActor_IsFrontAngle((s16)(a - rotY)) == 0) {
                            ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (speed != 0) {
        changeAct(4);
    }
    return FALSE;
}

BOOL SpNpcLyle::setupAct04() {
    ((NpcFootstepFx *)(&footstepFx))->disableFootsteps();
    ((NpcActionCtrl *)(&actionCtrl))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    stepTimer = 0x28;
    return TRUE;
}

BOOL SpNpcLyle::mainAct04() {
    chaseTarget = (Character *)PlayerActor_GetCharacter(4);
    if (Talk_CheckAndSetPlayerFlag(0x28, 0) != 0) {
        if (isNearCameraFocus(1) != 0) {
            changeAct(3);
            return TRUE;
        }
    } else {
        if (isNearCameraFocus(0) != 0) {
            if (isPlayerInFront(0x3000) == 0) {
                if (isPlayerInFront(0x8000) != 0) {
                    changeAct(1);
                    return TRUE;
                }
            }
        }
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcLyle::mainAct02() {
    return TRUE;
}

void SpNpcLyleTalk::onTaskDone(u32) {
    if (script) {
        (this->*script)();
        SpNpcLyleTalkScriptFn t = *(SpNpcLyleTalkScriptFn *)__ptmf_null;
        script = t;
        if (nextScript) {
            script = nextScript;
            nextScript = t;
        }
    }
}

s16 sSpNpcLyleFrontAngle = data_020c6cc0;

u8 sSpNpcLyleModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 't', 't', '.', 'n', 's', 'b', 'm', 'd', 0};

void *data_ov071_02272ad0[2] = {(void *)_ZN9SpNpcLyle10setupAct03Ev, 0};

void *data_ov071_02272ac0[2] = {(void *)_ZN9SpNpcLyle10setupAct01Ev, 0};

void *data_ov071_02272ae8[2] = {(void *)_ZN9SpNpcLyle9mainAct03Ev, 0};

void *data_ov071_02272b30[2] = {(void *)_ZN13SpNpcLyleTalk17onClaimItemChosenEv, 0};

void *data_ov071_02272b28[2] = {(void *)_ZN9SpNpcLyle10act01Step2Ev, 0};

void SpNpcLyleTalk::getScript(SpNpcLyleTalkScriptFn *out, s32 idx) {
    static SpNpcLyleTalkScriptFn tbl[2] = {*(SpNpcLyleTalkScriptFn *)data_ov071_02272b30,
                                           *(SpNpcLyleTalkScriptFn *)data_ov071_02272af0};
    *out = tbl[idx];
}

SpNpcLyleActEntry sSpNpcLyleActTable[6] = {
    {*(SpNpcLyleActFn *)data_ov071_02272ae0, *(SpNpcLyleActFn *)data_ov071_02272ad8},
    {*(SpNpcLyleActFn *)data_ov071_02272ac0, *(SpNpcLyleActFn *)data_ov071_02272b38},
    {NULL, *(SpNpcLyleActFn *)data_ov071_02272ac8},
    {*(SpNpcLyleActFn *)data_ov071_02272ad0, *(SpNpcLyleActFn *)data_ov071_02272ae8},
    {*(SpNpcLyleActFn *)data_ov071_02272b20, *(SpNpcLyleActFn *)data_ov071_02272af8},
    {*(SpNpcLyleActFn *)data_ov071_02272b00, *(SpNpcLyleActFn *)data_ov071_02272b08},
};

FxVec3 sSpNpcLyleSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

u8 sSpNpcLyleKey[17] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'i', 'n', 's', 'u', 'r', 'a', 'n', 'c', 'e', 0};

u8 sSpNpcLyleTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 't', 't', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

const TalkStartMsg sSpNpcLyleTopicMsgs[3] = {
    {(const char *)sSpNpcLyleKey, 5},
    {(const char *)sSpNpcLyleKey, 7},
    {(const char *)sSpNpcLyleKey, 0x20},
};

void *data_ov071_02272b18[2] = {(void *)_ZN9SpNpcLyle10act01Step1Ev, 0};

ActorProfile sSpNpcLyleProfile = {(void *(*)())SpNpcLyle_Create, 0x69, 0x6f, 2, 0x5000, 0x5000, 0x3e800};

void *data_ov071_02272af8[2] = {(void *)_ZN9SpNpcLyle9mainAct04Ev, 0};

void *data_ov071_02272ad8[2] = {(void *)_ZN9SpNpcLyle9mainAct00Ev, 0};

void *data_ov071_02272ae0[2] = {(void *)_ZN9SpNpcLyle10setupAct00Ev, 0};

void *data_ov071_02272b10[2] = {(void *)_ZN9SpNpcLyle10act01Step0Ev, 0};


void SpNpcLyleTalk::setScript(s32 idx) {
    getScript(&script, idx);
}

void SpNpcLyleTalk::setNextScript(s32 idx) {
    getScript(&nextScript, idx);
}

extern "C" BOOL SpNpcLyle_IsForgedPainting(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x3934 && v <= 0x3983) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void SpNpcLyleTalk::onClaimItemChosen() {
    TalkWindowState *scene = window;
    SpNpcLyleMsgLocal m;
    m.msgIndex = 0x24;
    if (MenuCtrl_IsResultOk() != 0) {
        s32 r4 = MenuCtrl_GetIndex();
        m.item = Pocket_GetItem(r4);
        BOOL same;
        if (Item_IsFurniture(&m.item) != 0) {
            m.item2 = 0xfff1;
            if (Item_GetFurnitureIndex(&m.item) == Item_GetFurnitureIndex(&m.item2)) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        } else {
            if (m.item == 0xfff1) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        }
        if (same == 0) {
            void *w = PlayerData_GetCurrent()->getSpNpcRecord();
            m.msgIndex = 0x25;
            ((PlayerSpNpcRecord *)(w))->addInsuranceClaim();
            ((ActorTalkRequest *)(this))->requestTakeItem(&m.item, 0, 4, 0);
            if (r4 >= 0) {
                Pocket_RemoveItem(r4);
            }
            setNextScript(1);
        } else {
            requestReopenWindow();
        }
    } else {
        requestReopenWindow();
    }
    scene->setNextMessage(&m.msgIndex, sSpNpcLyleKey);
}

void SpNpcLyleTalk::scriptCloseItemSelect() {
    requestReopenWindow();
}

s32 SpNpcLyle::countUnaskedQuestions(u8 *p, s32 n) {
    s32 c = 0;
    s32 i = c;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}

s32 SpNpcLyle::pickUnaskedQuestion(u8 *p, s32 n) {
    s32 c = countUnaskedQuestions(p, n);
    s32 r = 0;
    s32 k = Random_GlobalBelow(c);
    s32 i = r;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

SpNpcLyleTalk::SpNpcLyleTalk() {}

SpNpcLyleTalk::~SpNpcLyleTalk() {}

void SpNpcLyleTalk::resetMsg() {
    SpNpcTalkRequest::resetMsg();
    SpNpcLyleTalkScriptFn t = *(SpNpcLyleTalkScriptFn *)__ptmf_null;
    script = t;
    nextScript = t;
}

void SpNpcLyleTalk::attachOwner(SpNpcLyle *o) {
    resetMsg();
    owner = o;
    topic = 0;
    questionCount = 0;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcLyleTalk::start(TalkStartMsg *out) {
    BOOL b = FALSE;
    void *h = PlayerData_GetCurrent();
    if (((PlayerData *)(h))->testFlag(0x17) != 0) {
        s32 v = PlayerSpNpcRecord_GetInsuranceDate(((PlayerData *)(h))->getSpNpcRecord());
        SpNpcLyleDateBuf obj;
        Clock_GetDate(&obj);
        if (Date_DaysBetween(&obj, v) < 1) {
            topic = 1;
        } else if (((PlayerData *)(h))->testFlag(0x18) != 0) {
            if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
                topic = 2;
            } else {
                b = TRUE;
            }
        } else if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
            topic = b;
        } else {
            b = TRUE;
        }
    } else if (Talk_CheckAndSetPlayerFlag(0x28, b) != 0) {
        topic = b;
    } else {
        b = TRUE;
    }
    if (topic >= 0 && topic < 3) {
        out->msgIndex = *((u8 *)&sSpNpcLyleTopicMsgs[0].msgIndex + topic * 8);
        if (b) {
            out->msgIndex = Random_GlobalBelow(5) + 0x28;
        }
        out->msgKey = (const char *)((u32 *)sSpNpcLyleTopicMsgs)[topic * 2];
    }
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcLyleTalk::onMessageEnd(u32) {
    u8 *const name = sSpNpcLyleKey;
    SpNpcLyleMsgLocal m;
    s32 r5 = 0xff;
    void *h = PlayerData_GetCurrent();
    switch (msgIndex) {
    case 5:
    case 0x14:
    case 0x1c:
        Hud_Hide();
        r5 = 0x15;
        if (((PlayerData *)(h))->testFlag(0x17) != 0) {
            r5 = 0x1d;
        }
        break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12: {
        SpNpcLyle *o = owner;
        s32 idx = o->pickUnaskedQuestion(o->askedQuestions, 5);
        u8 *q = &owner->askedQuestions[idx];
        if (*q == 0) {
            *q = 1;
        }
        r5 = (u8)(idx + 0xe);
        questionCount = questionCount + 1;
        if (questionCount >= 4) {
            if (((PlayerData *)(h))->testFlag(0x18) == 0) {
                r5 = 0x13;
            } else {
                r5 = 0x1b;
                Talk_CheckAndSetPlayerFlag(0x28, 1);
            }
            questionCount = 0;
            MI_CpuFill8(owner->askedQuestions, 0, 5);
        }
        break;
    }
    case 0x13:
        if (((PlayerData *)(h))->testFlag(0x17) == 0) {
            r5 = 0x14;
        } else {
            r5 = 0x1c;
        }
        break;
    case 0x18:
        if (((PlayerData *)(h))->testFlag(0x17) == 0) {
            r5 = 0x19;
        } else {
            r5 = 0x1e;
        }
        break;
    case 0x19:
        m.item = 0x149d;
        ((ActorTalkRequest *)(this))->requestTakeItem(&m.item, 0, 5, 0);
        NpcActor_ChargePlayer(owner, 0xbb8);
        r5 = 0x1a;
        ((PlayerData *)(h))->setFlag(0x17);
        _ZN20PlayerDailyTalkFlags10stampTodayEv(((PlayerData *)(h))->getSpNpcRecord());
        break;
    case 0x16:
    case 0x1a:
    case 0x1f:
        Hud_Show();
        break;
    case 0x1e:
        m.item2 = 0x14a0;
        ((ActorTalkRequest *)(this))->requestTakeItem(&m.item2, 0, 5, 0);
        NpcActor_ChargePlayer(owner, 0x1770);
        r5 = 0x1f;
        ((PlayerData *)(h))->setFlag(0x18);
        break;
    case 0x23:
        _ZN16ActorTalkRequest15setPocketFilterEjjj(this, (u32)SpNpcLyle_IsForgedPainting, 0xd, 1);
        ((ActorTalkRequest *)(this))->openSubScene(0);
        setScript(0);
        break;
    case 0x25:
        ((ActorTalkRequest *)(this))->requestKeepItem();
        if (MenuCtrl_BuildPocketMask((void *)SpNpcLyle_IsForgedPainting) != 0) {
            r5 = 0x21;
        } else {
            r5 = 0x26;
        }
        break;
    }
    if (r5 != 0xff) {
        m.msgIndex = r5;
        window->setNextMessage(&m.msgIndex, name);
    }
}

void SpNpcLyleTalk::onChoice(u32) {
    u8 m;
    s32 t = getChoiceList()->getResult();
    u8 *const name = sSpNpcLyleKey;
    s32 r5 = 0xff;
    u8 *g = gSaveData;
    s32 x = msgIndex;
    if (x > 0x15) {
        goto hi;
    }
    if (x >= 0x15) {
        goto blkA;
    }
    if (x <= 0xc) {
        if (x >= 8) {
            switch (x) {
            case 8:
                goto blk8;
            case 0xc:
                goto blkC;
            }
        }
    }
    goto end;
hi:
    switch (x) {
    case 0x17:
        goto blkA;
    case 0x1d:
    case 0x27:
        goto blkB;
    case 0x20:
    case 0x21:
        goto blkC2;
    case 0x23:
        goto blkD;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
        goto blkE;
    default:
        goto end;
    }
blkE:
    switch (t) {
    case 0:
        r5 = 4;
        break;
    case 1:
        r5 = 2;
        break;
    }
    goto end;
blk8:
    r5 = (u8)(x + 1);
    g[0x15e28] = t + 1;
    goto end;
blkC:
    switch (t) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        r5 = 0xd;
        MI_CpuFill8((u8 *)owner + 0x720, 0, 5);
        questionCount = 0;
        if (t == 4) {
            EventWeek_SetLyleWeek(0, 1);
        } else {
            EventWeek_SetLyleWeek(0, 0);
        }
        break;
    }
    goto end;
blkA:
    if (t == 0) {
        Talk_CheckAndSetPlayerFlag(0x28, 1);
        if (NpcActor_CanPlayerPay(owner, 0xbb8) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkB:
    if (t == 0) {
        Talk_CheckAndSetPlayerFlag(0x28, 1);
        if (NpcActor_CanPlayerPay(owner, 0x1770) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkC2:
    if (t == 0) {
        r5 = 0x23;
    }
    goto end;
blkD:
    _ZN16ActorTalkRequest15setPocketFilterEjjj(this, (u32)SpNpcLyle_IsForgedPainting, 0xd, 1);
    ((ActorTalkRequest *)(this))->openSubScene(0);
    setScript(0);
end:
    if (r5 != 0xff) {
        m = r5;
        window->setNextMessage(&m, name);
    }
}

BOOL SpNpcLyle::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------

void SpNpcLyle::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 0:
        changeAct(0);
        break;
    case 3:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(5);
        break;
    case 8:
        changeAct(3);
        break;
    }
}

