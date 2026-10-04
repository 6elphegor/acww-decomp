// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_0202368c_Obj.h"
#include "actor/Unk_02088d00.h"
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
#include "npc/Unk_0201a13c.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/SpNpcTalkRequest.h"
#include "actor/Unk_ov004_SceneEntry.h"


struct Unk_0201bc1c;
class SpNpcSaharah;
class SpNpcSaharahTalk;
struct VisitorPos;
struct Unk_0201bc1c;

struct Unk_ov078_Vec {
    s32 x, y, z;
};





extern "C" {
void _ZN12Unk_0201347416disableFootstepsEv(void *self);
void _ZN12Unk_0201347415enableFootstepsEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, Unk_ov078_Vec *d, s32 e, s32 f, s32 g);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *self);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *self);
Unk_ov078_Vec * _ZN11NpcMoveCtrl14getDestinationEv(void *self);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *self, Unk_ov078_Vec *v);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *self, void *owner, s32 v);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void *_ZN18SickVillagerRecord15getParcelErrandEv(void *p);
void *ParcelErrand_GetRecord(void *p);
void ParcelErrand_Start(void *p);
u16 *_ZN12ErrandRecord7getItemEv(void *p);
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord7getStepEv(void *p);
s32 ParcelErrand_NextRecipient(void *p);
s32 ParcelErrand_GetRecipientName(void *p, void *q);
void _ZN12ErrandRecord7setStepEh(void *p, s32 v);
s32 Pocket_FindEmpty();
s32 Pocket_FindItem(u16 *p);
void Pocket_AddItem(u16 *p, s32 v);
void Pocket_RemoveItem(s32 v);
s32 Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12ItemPickSpec3setEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void ItemPickSpec_Destruct(Unk_0202368c_Obj *o);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void EventWeekSlots_MarkPlayer(s32 v);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
s32 Math_AngleXZ(void *p, void *q);
BOOL NpcActor_IsFrontAngle(s32 v);
void Math_CountDownU8(void *p);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
u32 Random_Next(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern Unk_ov078_Vec gCameraLookAt;
extern s16 data_02135f44[];
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
BOOL TownMap_IsPosWalkable(Unk_ov078_Vec *a, s32 b);
BOOL Npc_IsPosBlocked(void *p);
void Npc_RotateOffsetXZ(void *out, Unk_ov078_Vec *a, Unk_ov078_Vec *b, s32 c);
void TalkRequest_SetTargetDone(void *p);
void *TownSessionState_Get();
VisitorPos *TownSessionState_GetVisitorPos(void *p);

extern u32 gRandom[];
extern Unk_ov078_Vec gVec3Zero;
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




struct Unk_020d77a4_Vec3;




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
    BOOL getOffsetPosIfFree(Unk_ov078_Vec *out, Unk_ov078_Vec *p);
    BOOL isInViewBox(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
    BOOL setupAct02();
    BOOL mainAct00();
    BOOL mainAct01();
    BOOL setupAct00();

    s32 unk_654;
    SpNpcSaharahTalk talk;
};

struct Unk_ov078_02272030_Ent {
    BOOL (SpNpcSaharah::*enter)();
    BOOL (SpNpcSaharah::*exit)();
};
typedef BOOL (SpNpcSaharah::*Unk_ov078_Fn)();


struct Unk_ov078_Col {
    u8 a, b, c, d;
    Unk_ov078_Col(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

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
extern Unk_ov078_02272030_Ent sSpNpcSaharahActTable[5];
extern Unk_ov078_Col data_ov078_022725c4;
extern Unk_ov078_Col data_ov078_022725d0;
extern Unk_ov078_Col data_ov078_022725d4;
extern Unk_ov078_Col data_ov078_022725c8;
extern Unk_ov078_Col data_ov078_022725cc;
extern Unk_ov078_Col data_ov078_022725c0;
extern FxVec3 sSpNpcSaharahSideStepOffsets[2];
extern u8 sSpNpcSaharahModelPath[];
extern u8 sSpNpcSaharahTexturePath[];
extern Unk_ov004_SceneEntry sSpNpcSaharahProfile;
SpNpcSaharah *SpNpcSaharah_Create();
}

Unk_ov078_Col data_ov078_022725c4(0x1f, 0x14, 0x14, 0x1f);
extern "C" void *data_ov078_022723e0[2] = {(void *)_ZN12SpNpcSaharah9mainAct01Ev, 0};
extern "C" void *data_ov078_022723d8[2] = {(void *)_ZN12SpNpcSaharah9mainAct03Ev, 0};
extern "C" Unk_ov004_SceneEntry sSpNpcSaharahProfile = {(void *(*)())SpNpcSaharah_Create, 0x6a, 0x70, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov078_022723c0[2] = {(void *)_ZN12SpNpcSaharah10setupAct02Ev, 0};
extern "C" void *data_ov078_022723d0[2] = {(void *)_ZN12SpNpcSaharah10setupAct03Ev, 0};
Unk_ov078_Col data_ov078_022725d0(0x14, 0x14, 0x1f, 0x1f);
Unk_ov078_Col data_ov078_022725d4(0x1f, 0x1f, 0x14, 0x1f);
Unk_ov078_Col data_ov078_022725c8(0x14, 0x1f, 0x14, 0x1f);
extern "C" u8 sSpNpcSaharahModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcSaharahTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov078_022723e8[2] = {(void *)_ZN12SpNpcSaharah10setupAct04Ev, 0};
Unk_ov078_Col data_ov078_022725cc(0x14, 0x1f, 0x1f, 0x1f);
Unk_ov078_Col data_ov078_022725c0(0x14, 0x18, 0x18, 0x1f);
Unk_ov078_02272030_Ent sSpNpcSaharahActTable[5] = {
    {*(Unk_ov078_Fn *)data_ov078_022723f8, *(Unk_ov078_Fn *)data_ov078_02272400},
    {NULL, *(Unk_ov078_Fn *)data_ov078_022723e0},
    {*(Unk_ov078_Fn *)data_ov078_022723c0, *(Unk_ov078_Fn *)data_ov078_022723c8},
    {*(Unk_ov078_Fn *)data_ov078_022723d0, *(Unk_ov078_Fn *)data_ov078_022723d8},
    {*(Unk_ov078_Fn *)data_ov078_022723e8, *(Unk_ov078_Fn *)data_ov078_022723f0},
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
    setTalkRequest((Unk_0201bc1c *)&talk);
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
    if (sSpNpcSaharahActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcSaharahActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcSaharah::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcSaharahActTable[state].enter != NULL) {
        ok = (this->*sSpNpcSaharahActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcSaharah::setupAct00() { return TRUE; }

BOOL SpNpcSaharah::mainAct00() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcSaharah::mainAct01() { return TRUE; }

BOOL SpNpcSaharah::setupAct02() {
    actCounter = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcSaharah::isInViewBox(Unk_ov078_Vec *a, Unk_ov078_Vec *b) {
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
    Unk_ov078_Vec *pos = (Unk_ov078_Vec *)&position;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov078_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = isInViewBox(&v, pos);
    }
    return r;
}

BOOL SpNpcSaharah::findRandomWalkTarget(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov078_Vec v;
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

BOOL SpNpcSaharah::getOffsetPosIfFree(Unk_ov078_Vec *out, Unk_ov078_Vec *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    Npc_RotateOffsetXZ(&t, (Unk_ov078_Vec *)&position, p, moveAngleY);
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
    s32 r6 = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
    BOOL r = FALSE;
    Unk_ov078_Vec v;
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(q, this, 1) == 0) {
        switch (r6) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (getOffsetPosIfFree(&v, (Unk_ov078_Vec *)&sSpNpcSaharahSideStepOffsets[1])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (getOffsetPosIfFree(&v, (Unk_ov078_Vec *)&sSpNpcSaharahSideStepOffsets[0])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(q)) {
            _ZN11NpcMoveCtrl16resetDestinationEv(q);
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
    Unk_ov078_Vec v, w;
    s32 r6 = isNearCameraTarget();
    Math_CountDownU8(&actCounter);
    if (r6 != 0) {
        if (checkCollisionWhileMoving() == 0) {
            if (p->isActionDone() != 0) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
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
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                actCounter = 0x64;
                            }
                        } else if (actionCtrl.getAction() != 4) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            actCounter = 0x50;
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (speed != 0) {
                if (actionCtrl.getAction() == 1 || actionCtrl.getAction() == 2 || actionCtrl.getAction() == 4) {
                    if (actCounter == 0) {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov078_Vec *q = _ZN11NpcMoveCtrl14getDestinationEv(&moveCtrl);
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&position, &w) - rotY)) == 0) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
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
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    actCounter = 0;
    _ZN12Unk_0201347416disableFootstepsEv(&footstepFx);
    return TRUE;
}

BOOL SpNpcSaharah::mainAct03() {
    if (isNearCameraTarget()) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcSaharah::setupAct04() {
    void *p = talk.func_02015aac();
    s32 x = rotY;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
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
    void *g = _ZN18SickVillagerRecord15getParcelErrandEv(_ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent()));
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
            unk_3c->setSlot(0, &o);
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
            unk_3c->setSlot(0, &o);
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
    g = _ZN18SickVillagerRecord15getParcelErrandEv(_ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent()));
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
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, _ZN12ErrandRecord7getItemEv(ParcelErrand_GetRecord(g)), 2, 5, 0);
        if (ParcelErrand_GetRecipientName(g, &o3)) {
            unk_3c->setSlot(0, &o3);
        }
        if (msgIndex != 10) {
            msg = 8;
        } else {
            msg = 0xb;
        }
        break;
    case 0xc:
        _ZN12ItemPickSpec3setEii(&o1, 4, 0x23);
        ItemPick_One(&h[1], &o1, msg, msg, 1, 1, msg);
        rewardItems[0].id = h[1];
        ItemPickSpec_Destruct(&o1);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &rewardItems[0].id, 1, 7);
        _ZN12ItemPickSpec3setEii(&o2, 3, 0x23);
        ItemPick_One(&h[2], &o2, msg, msg, 1, 1, msg);
        rewardItems[1].id = h[2];
        ItemPickSpec_Destruct(&o2);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &rewardItems[1].id, 2, 7);
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
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h[0], 0, 5, 0);
        Pocket_AddItem(&h[0], 0);
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->setNextMessage(&b, s);
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
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h[0], 0, 5, 0);
        Pocket_AddItem(&h[0], 0);
        msg = 0xe;
        break;
    case 0x14:
        if (t == 0) {
            if (turbanSlot >= 0) {
                Pocket_RemoveItem(turbanSlot);
                h[1] = 0x13ac;
                _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h[1], 0, 5, 0);
            }
            msg = 0x16;
        }
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->setNextMessage(&b, s);
    }
}

BOOL SpNpcSaharah::acceptsInteraction(void *) {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcSaharah::onInteractionEvent(u32 v, u8) {
    switch (v) {
    case 1:
        talk.resetMsg();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(0);
        break;
    case 3:
        talk.resetMsg();
        talk.func_02015ab0((u32)getPlayerActor(4));
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

