#include "types.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "npc/NpcTalkCtrl.h"
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
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "snd/SndSeEmitterKind1.h"
#include "actor/NpcActor.h"
#include "actor/ActorFollowCollider.h"
#include "actor/SpNpcActor.h"
#include "talk/SpNpcTalkRequest.h"

extern "C" {
void _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest(void *a, void *b);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN11NpcMoveCtrl11setTurnModeEh(void *self, s32 a);
s32 Scene_GetCurrent(void);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void _ZN13NpcFootstepFx16disableFootstepsEv(void *self);
void _ZN13NpcFootstepFx15enableFootstepsEv(void *self);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN12Unk_0201acf88getLevelEv(void *self);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
s32 _ZN11NpcMoveCtrl10hasArrivedEP9Characteri(void *self, void *owner, s32 a);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *self, void *v);
s32 _ZN11NpcMoveCtrl10hasNextLegEv(void *self);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void *_ZN11NpcMoveCtrl14getDestinationEv(void *self);
void Npc_RotateOffsetXZ(void *out, void *pos, void *a, s32 b);
s32 Npc_IsPosBlocked(void *v);
s32 Math_AngleXZ(void *pos, void *v);
s32 NpcActor_IsFrontAngle(s16 a);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void Math_CountDownU8(void *p);
u32 Random_Next(void *p);
u32 Random_GlobalBelow(u32 n);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, void *b);
s32 TownMap_IsPosWalkable(void *v, s32 a);
void _ZN16ActorTalkRequest15setTownNameSlotEjj(void *self, s32 a, s32 b);
void *PlayerData_GetCurrent(void);
void *_ZN10PlayerData18getLostChildRecordEv(void);
s32 _ZN15LostChildRecord9getTownIdEv(void *p);
s32 _ZN12Unk_02097ff48testFlagEj(void *p, s32 a);
void _ZN12Unk_02097ff47setFlagEj(void *p, s32 a);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL TalkRequest_SetTargetDone(void *p);
u32 _ZN8NpcActor14getPlayerActorEj(void *p, s32 n);
u32 _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, s32 a, s32 b, s32 c);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 gVec3Zero[3];
extern s32 gCamera;
extern s32 gCameraLookAt[3];
extern u8 gRandom[];
extern s16 data_02135f44[];
extern s32 data_020c6cf0;
}


// ---- SpNpcKaitlinTalk and its bases (vtable 0x020ddcf0 chain) ----


struct Unk_020c1d80_Out {
    const char *msgKey;
    u8 msgIndex;
};


class SpNpcKaitlinTalk : public SpNpcTalkRequest {
public:
    SpNpcKaitlinTalk();
    virtual ~SpNpcKaitlinTalk();
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(void *p);

    void *owner;
    s32 topic;
};

// ---- SpNpcKaitlin / SpNpcKatie and their bases (scene object derived from NpcActor) ----


typedef Unk_020d77a4_Vec3 Unk_0203e7a4_Vec;





struct Unk_020c17f8_Vec {
    s32 x, y, z;
};

class SpNpcKaitlin;
typedef BOOL (SpNpcKaitlin::*Unk_020c2194_Fn)();
struct Unk_020c2194_Entry {
    Unk_020c2194_Fn a;
    Unk_020c2194_Fn b;
};

class SpNpcKaitlin : public SpNpcActor {
public:
    SpNpcKaitlin() {}
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual ~SpNpcKaitlin() {}
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual BOOL getWalkAnimSpeedScale();

    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct07();
    BOOL tryAvoidObstacle();
    BOOL avoidObstacle();
    BOOL findSidestepPos(Unk_020c17f8_Vec *out, s32 *data);
    BOOL findRandomWalkTarget(s32 *px, s32 *pz);
    BOOL isInCameraView();
    BOOL isInViewBox(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b);
    BOOL setupAct07();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct09();
    BOOL setupAct09();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcKaitlinTalk talk;
    u32 unk_70c;
};


struct Unk_021f4624_Color {
    u8 v[4];
    Unk_021f4624_Color(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};

extern Unk_020c2194_Entry sSpNpcKaitlinActTable[10];
extern SpNpcKaitlin *sSpNpcKaitlinInstance;
extern FxVec3 data_021f4658[2];
extern char sSpNpcKaitlinKey[16];
extern char sSpNpcKaitlinModelPath[23];
extern char sSpNpcKaitlinTexPath[27];
extern const char *sSpNpcKaitlinMsgKey;
extern "C" SpNpcKaitlin *SpNpcKaitlin_Create();
void SpNpcKaitlin_ChangeAct06();
void SpNpcKaitlin_ChangeAct04();

extern "C" SpNpcKaitlin *SpNpcKaitlin_Create() {
    return new SpNpcKaitlin();
}

BOOL SpNpcKaitlin::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    sSpNpcKaitlinInstance = this;
    _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest(this, &talk);
    talk.attachOwner(this);
    if (Scene_GetCurrent()) {
        _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 2, 0x333, 0xcc, 0x133);
        _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 1, 0x280, 0xcc, 0x133);
    }
    netSyncOff = 1;
    return TRUE;
}

BOOL SpNpcKaitlin::getWalkAnimSpeedScale() {
    if (Scene_GetCurrent()) {
        return SpNpcActor::getWalkAnimSpeedScale();
    }
    return data_020c6cf0;
}

BOOL SpNpcKaitlin::onCreate() {
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    changeAct(0);
    if (Scene_GetCurrent() == 0x2f) {
        collisionEnabled = 0;
        _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        position.x = 0x10000;
        position.z = 0x16800;
    }
    return TRUE;
}

BOOL SpNpcKaitlin::onDelete() {
    if (!SpNpcActor::onDelete()) {
        return FALSE;
    }
    sSpNpcKaitlinInstance = NULL;
    return TRUE;
}

void SpNpcKaitlin_ChangeAct04() {
    if (sSpNpcKaitlinInstance != NULL) {
        sSpNpcKaitlinInstance->changeAct(4);
    }
}

void SpNpcKaitlin_ChangeAct06() {
    if (sSpNpcKaitlinInstance != NULL) {
        sSpNpcKaitlinInstance->changeAct(6);
    }
}

u8 *SpNpcKaitlin::getTexturePath() {
    return (u8 *)sSpNpcKaitlinTexPath;
}

u8 *SpNpcKaitlin::getModelPath() {
    return (u8 *)sSpNpcKaitlinModelPath;
}

BOOL SpNpcKaitlin::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcKaitlinActTable[unk_654].b != NULL) {
        result = (this->*sSpNpcKaitlinActTable[unk_654].b)();
    }
    return result;
}

BOOL SpNpcKaitlin::acceptsInteraction(void *) {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcKaitlin::onInteractionEvent(u32 a, u8) {
    switch (a) {
    case 1:
        talk.resetMsg();
        talk.setTalkPlayer(_ZN8NpcActor14getPlayerActorEj(this, 4));
        changeAct(1);
        break;
    case 0:
        changeAct(1);
        break;
    case 3:
        talk.resetMsg();
        talk.setTalkPlayer(_ZN8NpcActor14getPlayerActorEj(this, 4));
        changeAct(9);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

void SpNpcKaitlin::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcKaitlinActTable[state].a != NULL) {
        ok = (this->*sSpNpcKaitlinActTable[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcKaitlin::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct00() {
    if (Scene_GetCurrent() == 0) {
        changeAct(7);
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct01() {
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct09() {
    u32 x;
    void *p = talk.getTalkPlayer();
    x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct09() {
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct02() {
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct02() {
    return TRUE;
}

void SpNpcKaitlin::onJoinTalk() {
    changeAct(3);
}

void SpNpcKaitlin::onLeaveTalk() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    changeAct(0);
}

BOOL SpNpcKaitlin::setupAct03() {
    return setupAct00();
}

BOOL SpNpcKaitlin::mainAct03() {
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct04() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 2, 0xf400, 0x14600, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct04() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct05() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN11NpcMoveCtrl11setTurnModeEh(&moveCtrl, 2);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct05() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct06() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 4, 2, 0x10000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct06() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

SpNpcKaitlinTalk::SpNpcKaitlinTalk() {}

SpNpcKaitlinTalk::~SpNpcKaitlinTalk() {}

void SpNpcKaitlinTalk::attachOwner(void *p) {
    resetMsg();
    owner = p;
}

void SpNpcKaitlinTalk::setTopic(s32 v) {
    topic = v;
}

s32 SpNpcKaitlinTalk::getTopic() {
    return topic;
}

void SpNpcKaitlinTalk::start(TalkStartMsg *outp) {
    Unk_020c1d80_Out *out = (Unk_020c1d80_Out *)outp;
    void *p = PlayerData_GetCurrent();
    out->msgKey = sSpNpcKaitlinMsgKey;
    if (_ZN12Unk_02097ff48testFlagEj(p, 0x33) == 0) {
        if (_ZN12Unk_02097ff48testFlagEj(p, 0x39) == 0) {
            setTopic(0);
        } else {
            setTopic(1);
        }
    } else {
        if (Talk_CheckAndSetPlayerFlag(0x2a, 0) == 0) {
            setTopic(2);
        } else {
            setTopic(3);
        }
    }
    switch (getTopic()) {
    case 0:
        _ZN12Unk_02097ff47setFlagEj(p, 0x33);
        out->msgIndex = 0;
        break;
    case 1:
        _ZN12Unk_02097ff47setFlagEj(p, 0x33);
        out->msgIndex = Random_GlobalBelow(3) + 1;
        break;
    case 2:
        out->msgIndex = Random_GlobalBelow(3) + 4;
        Talk_CheckAndSetPlayerFlag(0x2a, 1);
        break;
    case 3:
        out->msgIndex = Random_GlobalBelow(3) + 7;
        break;
    }
}

void SpNpcKaitlinTalk::onMessageStart(u32) {
    PlayerData_GetCurrent();
    void *r4 = _ZN10PlayerData18getLostChildRecordEv();
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv(r4), 0);
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv(r4), 1);
}

void SpNpcKaitlinTalk::onMessageEnd(u32) {}

void SpNpcKaitlinTalk::onChoice(u32) {}

BOOL SpNpcKaitlin::setupAct07() {
    actCounter = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN13NpcFootstepFx15enableFootstepsEv(&footstepFx);
    _ZN13NpcFootstepFx15enableFootstepsEv(&footstepFx);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcKaitlin::isInViewBox(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b) {
    BOOL r = FALSE, c = FALSE, d = FALSE;
    s32 x = a->x;
    s32 bx = b->x;
    if (bx > x - 0x10000 && bx < x + 0x10000) {
        d = TRUE;
    }
    if (d) {
        if (b->z > a->z - 0x1a000) {
            c = TRUE;
        }
    }
    if (c) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL SpNpcKaitlin::isInCameraView() {
    Unk_020c17f8_Vec *pos = (Unk_020c17f8_Vec *)&position;
    s32 r = 0;
    if (gCamera != 0) {
        Unk_020c17f8_Vec v;
        v.x = gCameraLookAt[0];
        v.y = gCameraLookAt[1];
        v.z = gCameraLookAt[2];
        r = isInViewBox(&v, pos);
    }
    return r;
}

BOOL SpNpcKaitlin::findRandomWalkTarget(s32 *px, s32 *pz) {
    s32 *ppx = px;
    s32 *ppz = pz;
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 m = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = m + position.x;
        m = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = m + position.z;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, 0)) {
            *ppx = v.x;
            *ppz = v.z;
            result = TRUE;
            break;
        }
    }
    return result;
}

BOOL SpNpcKaitlin::findSidestepPos(Unk_020c17f8_Vec *out, s32 *data) {
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    Npc_RotateOffsetXZ(&v, &position, data, moveAngleY);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

BOOL SpNpcKaitlin::avoidObstacle() {
    void *p564 = &actionCtrl;
    void *p350 = &moveCtrl;
    s32 st = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    if (_ZN11NpcMoveCtrl10hasArrivedEP9Characteri(p350, this, 1) == 0) {
        switch (st) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            result = TRUE;
            break;
        case 1:
            if (findSidestepPos(&v, &data_021f4658[1].x)) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            result = TRUE;
            break;
        case 2:
            if (findSidestepPos(&v, &data_021f4658[0].x)) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            result = TRUE;
            break;
        }
    } else {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(p350)) {
            _ZN11NpcMoveCtrl16resetDestinationEv(p350);
        }
    }
    return result;
}

BOOL SpNpcKaitlin::tryAvoidObstacle() {
    if (speed != 0) {
        if (avoidObstacle()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcKaitlin::mainAct07() {
    void *p564 = &actionCtrl;
    BOOL a = isInCameraView();
    Math_CountDownU8(&actCounter);
    if (a) {
        if (!tryAvoidObstacle()) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(p564)) {
                if (_ZN12Unk_0201acf88getLevelEv(&unk_3aa) == 2) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_020c17f8_Vec v1;
                    v1.x = gVec3Zero[0];
                    v1.y = gVec3Zero[1];
                    v1.z = gVec3Zero[2];
                    if (findRandomWalkTarget(&v1.x, &v1.z)) {
                        s32 ang = Math_AngleXZ(&position, &v1);
                        if (NpcActor_IsFrontAngle(ang - rotY)) {
                            s32 k = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                k = 2;
                            }
                            if (k != _ZN13NpcActionCtrl9getActionEv(&actionCtrl)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, k, 1, v1.x, v1.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                actCounter = 0x64;
                            }
                        } else {
                            if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) != 4) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 4, 1, v1.x, v1.z, 0, ang, 0, 0, data_020c6cc8, 0);
                                actCounter = 0x50;
                            }
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (speed != 0) {
                    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1 || _ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2 || _ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 4) {
                        if (actCounter == 0) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_020c17f8_Vec *src = (Unk_020c17f8_Vec *)_ZN11NpcMoveCtrl14getDestinationEv(&moveCtrl);
                            Unk_020c17f8_Vec v2;
                            v2.x = src->x;
                            v2.y = src->y;
                            v2.z = src->z;
                            s32 ang = Math_AngleXZ(&position, &v2);
                            if (!NpcActor_IsFrontAngle(ang - rotY)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (speed != 0) {
            changeAct(8);
        }
    }
    return FALSE;
}

BOOL SpNpcKaitlin::setupAct08() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    actCounter = 0;
    _ZN13NpcFootstepFx16disableFootstepsEv(&footstepFx);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct08() {
    if (isInCameraView()) {
        changeAct(7);
    }
    return TRUE;
}

Unk_021f4624_Color data_021f4630(31, 20, 20, 31);
Unk_021f4624_Color data_021f463c(20, 20, 31, 31);
Unk_021f4624_Color data_021f4634(31, 31, 20, 31);
Unk_021f4624_Color data_021f4624(20, 31, 20, 31);
Unk_021f4624_Color data_021f4628(20, 31, 31, 31);
Unk_021f4624_Color data_021f462c(20, 24, 24, 31);
Unk_020c2194_Entry sSpNpcKaitlinActTable[10] = {
    { &SpNpcKaitlin::setupAct00, &SpNpcKaitlin::mainAct00 },
    { &SpNpcKaitlin::setupAct01, &SpNpcKaitlin::mainAct01 },
    { &SpNpcKaitlin::setupAct02, &SpNpcKaitlin::mainAct02 },
    { &SpNpcKaitlin::setupAct03, &SpNpcKaitlin::mainAct03 },
    { &SpNpcKaitlin::setupAct04, &SpNpcKaitlin::mainAct04 },
    { &SpNpcKaitlin::setupAct05, &SpNpcKaitlin::mainAct05 },
    { &SpNpcKaitlin::setupAct06, &SpNpcKaitlin::mainAct06 },
    { &SpNpcKaitlin::setupAct07, &SpNpcKaitlin::mainAct07 },
    { &SpNpcKaitlin::setupAct08, &SpNpcKaitlin::mainAct08 },
    { &SpNpcKaitlin::setupAct09, &SpNpcKaitlin::mainAct09 },
};
FxVec3 data_021f4658[2] = { FxVec3(0x800, 0, 0x1000), FxVec3(0xfffff800, 0, 0x1000) };
SpNpcKaitlin *sSpNpcKaitlinInstance;
char sSpNpcKaitlinKey[] = "sp_npc_missing2";
const char *sSpNpcKaitlinMsgKey = sSpNpcKaitlinKey;
char sSpNpcKaitlinModelPath[] = "npc_sp/model/mum.nsbmd";
char sSpNpcKaitlinTexPath[] = "npc_sp/model/mum_tex.nsbtx";
struct Unk_020e6a9c_Rec {
    SpNpcKaitlin *(*fn)();
    u32 w[5];
};
Unk_020e6a9c_Rec sSpNpcKaitlinProfile = { SpNpcKaitlin_Create, { 0x0083007f, 2, 0x5000, 0x5000, 0x3e800 } };
