// mwcc-flags: -str reuse
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/Unk_0202368c_Obj.h"
#include "item/ItemId.h"
#include "town/VisitorPos.h"
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
#include "talk/MsgString9B.h"
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
#include "gfx/DebugColor.h"
#include "game/Unk_0201acf8.h"
#include "item/ItemPickSpec.h"
#include "player/PlayerData.h"
#define PROTO_LOCAL_ItemPick_One  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Math_AngleXZ  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_NpcActor_IsFrontAngle  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Npc_IsPosBlocked  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Npc_RotateOffsetXZ  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_Get  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetVisitorPos  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gRandom  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02098e90.h"
#include "proto/ov078/unk_ov078_022713c0.h"


class ActorTalkRequest;
class SpNpcSaharah;
class SpNpcSaharahTalk;
struct VisitorPos;
class ActorTalkRequest;





extern "C" {
void *_ZN13PlayerErrands15getParcelErrandEv(void *p);
u16 *_ZN12ErrandRecord7getItemEv(void *p);
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord7getStepEv(void *p);
void _ZN12ErrandRecord7setStepEh(void *p, s32 v);
s32 Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void ItemPickSpec_Destruct(Unk_0202368c_Obj *o);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void EventWeekSlots_MarkPlayer(s32 v);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 Math_AngleXZ(void *p, void *q);
BOOL NpcActor_IsFrontAngle(s32 v);
void Math_CountDownU8(void *p);
u32 Random_Next(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern VecFx32 gCameraLookAt;
extern s16 data_02135f44[];
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(VecFx32 *a, VecFx32 *b);
BOOL TownMap_IsPosWalkable(VecFx32 *a, s32 b);
BOOL Npc_IsPosBlocked(void *p);
void Npc_RotateOffsetXZ(void *out, VecFx32 *a, VecFx32 *b, s32 c);
void TalkRequest_SetTargetDone(void *p);
void *TownSessionState_Get();
VisitorPos *TownSessionState_GetVisitorPos(void *p);

extern u32 gRandom[];
extern VecFx32 gVec3Zero;
}








class SpNpcSaharahTalk : public SpNpcTalkRequest {
public:
    SpNpcSaharahTalk();
    virtual ~SpNpcSaharahTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcSaharah *owner);

    SpNpcSaharah *ownerNpc;
    s32 turbanSlot;
    ItemId rewardItems[2];
};








class SpNpcSaharah : public SpNpcActor {
public:
    SpNpcSaharah() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 v, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getWalkAnimSpeedScale();

    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL checkCollisionWhileMoving();
    BOOL isNearCameraTarget();
    BOOL findRandomWalkTarget(s32 *a, s32 *b);
    void changeAct(s32 state);
    BOOL handleCollision();
    BOOL getOffsetPosIfFree(VecFx32 *out, VecFx32 *p);
    BOOL isInViewBox(VecFx32 *a, VecFx32 *b);
    BOOL setupAct02();
    BOOL mainAct00();
    BOOL mainAct01();
    BOOL setupAct00();

    s32 act;
    SpNpcSaharahTalk talk;
};

struct SpNpcSaharahActEntry {
    BOOL (SpNpcSaharah::*enter)();
    BOOL (SpNpcSaharah::*exit)();
};
typedef BOOL (SpNpcSaharah::*SpNpcSaharahActFn)();


extern "C" {
void _ZN12SpNpcSaharah10setupAct00Ev();
extern void *data_ov078_022723f8[2];
void _ZN12SpNpcSaharah9mainAct00Ev();
extern void *data_ov078_02272400[2];
void _ZN12SpNpcSaharah9mainAct01Ev();
extern void *data_ov078_022723e0[2];
void _ZN12SpNpcSaharah10setupAct02Ev();
extern void *data_ov078_022723c0[2];
void _ZN12SpNpcSaharah9mainAct02Ev();
extern void *data_ov078_022723c8[2];
void _ZN12SpNpcSaharah10setupAct03Ev();
extern void *data_ov078_022723d0[2];
void _ZN12SpNpcSaharah9mainAct03Ev();
extern void *data_ov078_022723d8[2];
void _ZN12SpNpcSaharah10setupAct04Ev();
extern void *data_ov078_022723e8[2];
void _ZN12SpNpcSaharah9mainAct04Ev();
extern void *data_ov078_022723f0[2];
extern SpNpcSaharahActEntry sSpNpcSaharahActTable[5];
extern DebugColor data_ov078_022725c4;
extern DebugColor data_ov078_022725d0;
extern DebugColor data_ov078_022725d4;
extern DebugColor data_ov078_022725c8;
extern DebugColor data_ov078_022725cc;
extern DebugColor data_ov078_022725c0;
extern FxVec3 sSpNpcSaharahSideStepOffsets[2];
extern u8 sSpNpcSaharahModelPath[];
extern u8 sSpNpcSaharahTexturePath[];
extern ActorProfile sSpNpcSaharahProfile;
SpNpcSaharah *SpNpcSaharah_Create();
}

DebugColor data_ov078_022725c4(0x1f, 0x14, 0x14, 0x1f);
extern "C" void *data_ov078_022723e0[2] = {(void *)_ZN12SpNpcSaharah9mainAct01Ev, 0};
extern "C" void *data_ov078_022723d8[2] = {(void *)_ZN12SpNpcSaharah9mainAct03Ev, 0};
extern "C" ActorProfile sSpNpcSaharahProfile = {(void *(*)())SpNpcSaharah_Create, 0x6a, 0x70, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov078_022723c0[2] = {(void *)_ZN12SpNpcSaharah10setupAct02Ev, 0};
extern "C" void *data_ov078_022723d0[2] = {(void *)_ZN12SpNpcSaharah10setupAct03Ev, 0};
DebugColor data_ov078_022725d0(0x14, 0x14, 0x1f, 0x1f);
DebugColor data_ov078_022725d4(0x1f, 0x1f, 0x14, 0x1f);
DebugColor data_ov078_022725c8(0x14, 0x1f, 0x14, 0x1f);
extern "C" u8 sSpNpcSaharahModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcSaharahTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov078_022723e8[2] = {(void *)_ZN12SpNpcSaharah10setupAct04Ev, 0};
DebugColor data_ov078_022725cc(0x14, 0x1f, 0x1f, 0x1f);
DebugColor data_ov078_022725c0(0x14, 0x18, 0x18, 0x1f);
SpNpcSaharahActEntry sSpNpcSaharahActTable[5] = {
    {*(SpNpcSaharahActFn *)data_ov078_022723f8, *(SpNpcSaharahActFn *)data_ov078_02272400},
    {NULL, *(SpNpcSaharahActFn *)data_ov078_022723e0},
    {*(SpNpcSaharahActFn *)data_ov078_022723c0, *(SpNpcSaharahActFn *)data_ov078_022723c8},
    {*(SpNpcSaharahActFn *)data_ov078_022723d0, *(SpNpcSaharahActFn *)data_ov078_022723d8},
    {*(SpNpcSaharahActFn *)data_ov078_022723e8, *(SpNpcSaharahActFn *)data_ov078_022723f0},
};
extern "C" void *data_ov078_022723f8[2] = {(void *)_ZN12SpNpcSaharah10setupAct00Ev, 0};
extern "C" void *data_ov078_02272400[2] = {(void *)_ZN12SpNpcSaharah9mainAct00Ev, 0};
extern "C" void *data_ov078_022723f0[2] = {(void *)_ZN12SpNpcSaharah9mainAct04Ev, 0};
extern "C" void *data_ov078_022723c8[2] = {(void *)_ZN12SpNpcSaharah9mainAct02Ev, 0};
FxVec3 sSpNpcSaharahSideStepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

extern "C" SpNpcSaharah *SpNpcSaharah_Create() {
    return new SpNpcSaharah();
}

s32 SpNpcSaharah::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcSaharah::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    setTalkRequest((ActorTalkRequest *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcSaharah::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    changeAct(3);
    return TRUE;
}

BOOL SpNpcSaharah::onDelete() {
    if (!SpNpcActor::onDelete()) {
        return FALSE;
    }
    TownSessionState_GetVisitorPos(TownSessionState_Get())->setPos(position.x, position.z);
    return TRUE;
}

u8 *SpNpcSaharah::getTexturePath() { return sSpNpcSaharahTexturePath; }

u8 *SpNpcSaharah::getModelPath() { return sSpNpcSaharahModelPath; }

BOOL SpNpcSaharah::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcSaharahActTable[act].exit != NULL) {
        result = (this->*sSpNpcSaharahActTable[act].exit)();
    }
    return result;
}

void SpNpcSaharah::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcSaharahActTable[state].enter != NULL) {
        ok = (this->*sSpNpcSaharahActTable[state].enter)();
    }
    if (ok) {
        act = state;
    }
}

BOOL SpNpcSaharah::setupAct00() { return TRUE; }

BOOL SpNpcSaharah::mainAct00() {
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcSaharah::mainAct01() { return TRUE; }

BOOL SpNpcSaharah::setupAct02() {
    actCounter = 0;
    ((NpcActionCtrl *)(&actionCtrl))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    ((NpcFootstepFx *)(&footstepFx))->enableFootsteps();
    ((NpcFootstepFx *)(&footstepFx))->enableFootsteps();
    ((NpcLookAt *)(&lookAt))->setTarget(1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSaharah::isInViewBox(VecFx32 *a, VecFx32 *b) {
    BOOL r = FALSE;
    BOOL f1 = FALSE;
    BOOL f2 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz > az - 0x1a000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz < az + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL SpNpcSaharah::isNearCameraTarget() {
    VecFx32 *pos = (VecFx32 *)&position;
    BOOL r = FALSE;
    if (gCamera != 0) {
        VecFx32 v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = isInViewBox(&v, pos);
    }
    return r;
}

BOOL SpNpcSaharah::findRandomWalkTarget(s32 *a, s32 *b) {
    BOOL r = FALSE;
    VecFx32 v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 g = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = g + position.x;
        g = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = g + position.z;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcSaharah::getOffsetPosIfFree(VecFx32 *out, VecFx32 *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    Npc_RotateOffsetXZ(&t, (VecFx32 *)&position, p, moveAngleY);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        r = TRUE;
    }
    return r;
}

BOOL SpNpcSaharah::handleCollision() {
    NpcActionCtrl *p = &actionCtrl;
    NpcMoveCtrl *q = &moveCtrl;
    s32 r6 = ((NpcLookAt *)(&obstacleProbe))->getObstacleBits();
    BOOL r = FALSE;
    VecFx32 v;
    if (((NpcMoveCtrl *)(q))->hasArrived((Character *)(this), 1) == 0) {
        switch (r6) {
        case 3:
            ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (getOffsetPosIfFree(&v, (VecFx32 *)&sSpNpcSaharahSideStepOffsets[1])) {
                ((NpcMoveCtrl *)(q))->setDestination(&v);
            } else {
                ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (getOffsetPosIfFree(&v, (VecFx32 *)&sSpNpcSaharahSideStepOffsets[0])) {
                ((NpcMoveCtrl *)(q))->setDestination(&v);
            } else {
                ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (((NpcMoveCtrl *)(q))->hasNextLeg()) {
            ((NpcMoveCtrl *)(q))->resetDestination();
        }
    }
    return r;
}

BOOL SpNpcSaharah::checkCollisionWhileMoving() {
    if (speed != 0) {
        if (handleCollision()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcSaharah::mainAct02() {
    NpcActionCtrl *p = &actionCtrl;
    VecFx32 v, w;
    s32 r6 = isNearCameraTarget();
    Math_CountDownU8(&actCounter);
    if (r6 != 0) {
        if (checkCollisionWhileMoving() == 0) {
            if (p->isActionDone() != 0) {
                if (((Unk_0201acf8 *)(&unk_3aa))->getLevel() == 2) {
                    ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    v.x = gVec3Zero.x;
                    v.y = gVec3Zero.y;
                    v.z = gVec3Zero.z;
                    if (findRandomWalkTarget(&v.x, &v.z)) {
                        r6 = Math_AngleXZ(&position, &v);
                        if (NpcActor_IsFrontAngle((s16)(r6 - rotY))) {
                            r6 = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != actionCtrl.getAction()) {
                                ((NpcActionCtrl *)(p))->requestAction(r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                actCounter = 0x64;
                            }
                        } else if (actionCtrl.getAction() != 4) {
                            ((NpcActionCtrl *)(p))->requestAction(4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            actCounter = 0x50;
                        }
                    } else {
                        ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (speed != 0) {
                if (actionCtrl.getAction() == 1 || actionCtrl.getAction() == 2 || actionCtrl.getAction() == 4) {
                    if (actCounter == 0) {
                        ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        VecFx32 *q = ((NpcMoveCtrl *)(&moveCtrl))->getDestination();
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&position, &w) - rotY)) == 0) {
                            ((NpcActionCtrl *)(p))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (speed != 0) {
        changeAct(3);
    }
    return FALSE;
}

BOOL SpNpcSaharah::setupAct03() {
    ((NpcActionCtrl *)(&actionCtrl))->requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    actCounter = 0;
    ((NpcFootstepFx *)(&footstepFx))->disableFootsteps();
    return TRUE;
}

BOOL SpNpcSaharah::mainAct03() {
    if (isNearCameraTarget()) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcSaharah::setupAct04() {
    void *p = talk.getTalkPlayer();
    s32 x = rotY;
    if (p != NULL) {
        x = ((NpcActor *)(this))->getAngleTo((NpcActor *)(p));
    }
    ((NpcTalkCtrl *)(&talkCtrl))->requestTurnAndTalk(0, x, 0);
    return TRUE;
}

BOOL SpNpcSaharah::mainAct04() { return TRUE; }

SpNpcSaharahTalk::SpNpcSaharahTalk() {}

SpNpcSaharahTalk::~SpNpcSaharahTalk() {}

void SpNpcSaharahTalk::attachOwner(SpNpcSaharah *owner) {
    resetMsg();
    ownerNpc = owner;
    turbanSlot = -1;
    for (s32 i = 0; i < 2; i++) {
        rewardItems[i].id = 0xfff1;
    }
}

void SpNpcSaharahTalk::start(TalkStartMsg *out) {
    u16 h;
    void *g = _ZN13PlayerErrands15getParcelErrandEv(PlayerData_GetCurrent()->getErrands());
    MsgString9B o;
    out->msgKey = "sp_npc_camel";
    if (turbanSlot == -1) {
        h = 0x13ac;
        turbanSlot = Pocket_FindItem(&h);
    }
    if (turbanSlot >= 0) {
        out->msgIndex = 0x14;
        return;
    }
    if (_ZN12ErrandRecord8isActiveEv(ParcelErrand_GetRecord(g)) != 0 && _ZN12ErrandRecord7getStepEv(ParcelErrand_GetRecord(g)) == 3) {
        out->msgIndex = 0;
        return;
    }
    if (!Talk_CheckAndSetPlayerFlag(0xb, 1)) {
        out->msgIndex = 1;
        return;
    }
    if (_ZN12ErrandRecord8isActiveEv(ParcelErrand_GetRecord(g)) == 0) {
        out->msgIndex = 4;
        return;
    }
    if (_ZN12ErrandRecord8isActiveEv(ParcelErrand_GetRecord(g)) != 0 && _ZN12ErrandRecord7getStepEv(ParcelErrand_GetRecord(g)) == 0) {
        if (ParcelErrand_GetRecipientName(g, &o)) {
            window->setSlot(0, &o);
        }
        out->msgIndex = 9;
        return;
    }
    if (Pocket_FindEmpty() < 0) {
        out->msgIndex = 0x12;
        return;
    }
    if (ParcelErrand_NextRecipient(g)) {
        if (ParcelErrand_GetRecipientName(g, &o)) {
            window->setSlot(0, &o);
        }
        out->msgIndex = 0xa;
    } else if (_ZN12ErrandRecord7getStepEv(ParcelErrand_GetRecord(g)) == 1) {
        _ZN12ErrandRecord7setStepEh(ParcelErrand_GetRecord(g), 2);
        out->msgIndex = 0xc;
    }
}

void SpNpcSaharahTalk::onMessageEnd(u32) {
    u8 b;
    u16 h[4];
    Unk_0202368c_Obj o1, o2;
    void *g;
    u16 *p;
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    MsgString9B o3;
    g = _ZN13PlayerErrands15getParcelErrandEv(PlayerData_GetCurrent()->getErrands());
    s = (u8 *)"sp_npc_camel";
    msg = 0;
    switch (msgIndex) {
    case 5:
    case 10:
        if (Pocket_FindEmpty() < 0) {
            msg = 0x1d;
            break;
        }
        if (msgIndex == 5) {
            ParcelErrand_Start(g);
        }
        p = _ZN12ErrandRecord7getItemEv(ParcelErrand_GetRecord(g));
        {
            BOOL r;
            if (Item_IsFurniture(p)) {
                h[3] = 0x155f;
                if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&h[3])) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (*p == 0x155f) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                msg = 6;
            } else {
                msg = 7;
            }
        }
        if (msgIndex != 10) {
            break;
        }
    case 6:
    case 7:
        Pocket_AddItem(_ZN12ErrandRecord7getItemEv(ParcelErrand_GetRecord(g)), 2);
        ((ActorTalkRequest *)(this))->requestGiveItem(_ZN12ErrandRecord7getItemEv(ParcelErrand_GetRecord(g)), 2, 5, 0);
        if (ParcelErrand_GetRecipientName(g, &o3)) {
            window->setSlot(0, &o3);
        }
        if (msgIndex != 10) {
            msg = 8;
        } else {
            msg = 0xb;
        }
        break;
    case 0xc:
        ((ItemPickSpec *)(void *)(&o1))->set(4, 0x23);
        ItemPick_One(&h[1], &o1, msg, msg, 1, 1, msg);
        rewardItems[0].id = h[1];
        ItemPickSpec_Destruct(&o1);
        ((ActorTalkRequest *)(this))->setItemNameSlot(&rewardItems[0].id, 1, 7);
        ((ItemPickSpec *)(void *)(&o2))->set(3, 0x23);
        ItemPick_One(&h[2], &o2, msg, msg, 1, 1, msg);
        rewardItems[1].id = h[2];
        ItemPickSpec_Destruct(&o2);
        ((ActorTalkRequest *)(this))->setItemNameSlot(&rewardItems[1].id, 2, 7);
        msg = 0xd;
        break;
    case 0xe:
        _ZN12ErrandRecord7setStepEh(ParcelErrand_GetRecord(g), 3);
        EventWeekSlots_MarkPlayer(0x3e);
        break;
    case 0x15:
        turbanSlot = -2;
        break;
    case 0x16:
        h[0] = 0x37e0;
        msg = 0x17;
        if (Random_GlobalBelow(2) == 0) {
            h[0] = 0x34a8;
            msg = 0x18;
        }
        turbanSlot = -2;
        ((ActorTalkRequest *)(this))->setItemNameSlot(&h[0], 0, 7);
        ((ActorTalkRequest *)(this))->requestGiveItem(&h[0], 0, 5, 0);
        Pocket_AddItem(&h[0], 0);
        break;
    }
    if (msg != 0) {
        b = msg;
        window->setNextMessage(&b, s);
    }
}

void SpNpcSaharahTalk::onChoice(u32) {
    u8 b;
    u16 h[2];
    s32 t = getChoiceList()->getResult();
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    s = (u8 *)"sp_npc_camel";
    msg = 0;
    switch (msgIndex) {
    case 2:
    case 4:
        if (t == 0) {
            if (Pocket_FindEmpty() < 0) {
                msg = 0x1d;
            } else {
                msg = 5;
            }
        }
        break;
    case 0xd:
    case 0x13:
        if (t == 0) {
            h[0] = rewardItems[0].id;
        } else {
            h[0] = rewardItems[1].id;
        }
        ((ActorTalkRequest *)(this))->requestGiveItem(&h[0], 0, 5, 0);
        Pocket_AddItem(&h[0], 0);
        msg = 0xe;
        break;
    case 0x14:
        if (t == 0) {
            if (turbanSlot >= 0) {
                Pocket_RemoveItem(turbanSlot);
                h[1] = 0x13ac;
                ((ActorTalkRequest *)(this))->requestTakeItem(&h[1], 0, 5, 0);
            }
            msg = 0x16;
        }
        break;
    }
    if (msg != 0) {
        b = msg;
        window->setNextMessage(&b, s);
    }
}

BOOL SpNpcSaharah::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (((NpcTalkCtrl *)(&talkCtrl))->isBusy() == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcSaharah::onInteractionEvent(u32 v, u8) {
    switch (v) {
    case 1:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(0);
        break;
    case 3:
        talk.resetMsg();
        talk.setTalkPlayer((u32)getPlayerActor(4));
        changeAct(4);
        break;
    case 0:
        changeAct(0);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

