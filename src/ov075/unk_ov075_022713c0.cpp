// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"


// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define Unk_020d7710_requestCloseWindow _ZN12Unk_020d771018requestCloseWindowEj
#define Unk_020d7710_requestReopenWindow _ZN12Unk_020d771019requestReopenWindowEv
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define Unk_02015b8c_getAnimId _ZN12Unk_02015b8c9getAnimIdEj
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_getObstacleBits _ZN9NpcLookAt15getObstacleBitsEv
#define func_0201acfc _ZN12Unk_0201acf813func_0201acfcEv
#define NpcMoveCtrl_hasArrived _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei
#define NpcMoveCtrl_hasNextLeg _ZN11NpcMoveCtrl10hasNextLegEv
#define NpcMoveCtrl_resetDestination _ZN11NpcMoveCtrl16resetDestinationEv
#define NpcMoveCtrl_setDestination _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3
#define NpcMoveCtrl_getDestination _ZN11NpcMoveCtrl14getDestinationEv
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define PeteFallState_hasFallPos _ZN13PeteFallState10hasFallPosEv
#define PeteFallState_getPos _ZN13PeteFallState6getPosEP17Unk_02086ec4_Vec3
#define PeteFallState_clear _ZN13PeteFallState5clearEv
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define Unk_ov075_0227188c_CallA() NpcActionCtrl_requestAction(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_

class SpNpcPete;
class SpNpcPeteTalk;
struct TalkStartMsg;

struct Unk_ov075_Vec3 {
    s32 x, y, z;
};

struct Unk_ov075_Vec4 {
    s32 v[4];
};


extern "C" {
void *PlayerData_GetCurrent();
s32 ChoiceList_getResult();
s32 Unk_02097ff4_testFlag(void *p, s32 a);
s32 Unk_02097ff4_setFlag(void *p, s32 a);
s32 Random_GlobalBelow(s32 a);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void Unk_020d7710_requestCloseWindow(void *self, s32 a);
s32 Unk_020d7710_requestReopenWindow(void *self);
BOOL NpcTalkCtrl_isBusy(void *self);
void NpcTalkCtrl_requestTalk(void *self, s32 a, s32 b);
void NpcTalkCtrl_requestTurnAndTalk(void *self, s32 a, s32 b, s32 c);
void TalkRequest_SetTargetDone(void *self);
void NpcActionCtrl_requestPlayAnim(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 NpcActionCtrl_requestAction(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void NpcMoveAnimSet_setStandAnim(void *p, s32 v);
s32 Unk_02015b8c_getAnimId(void *p, s32 a);
s32 NpcActionCtrl_isActionDone(void *p);
s32 NpcActionCtrl_getAction(void *p);
void NpcLookAt_setTarget(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0201acfc(void *p);
s32 NpcLookAt_getObstacleBits(void *p);
s32 NpcMoveCtrl_hasArrived(void *p, void *q, s32 a);
s32 NpcMoveCtrl_hasNextLeg(void *p);
void NpcMoveCtrl_resetDestination(void *p);
void NpcMoveCtrl_setDestination(void *p, void *q);
Unk_ov075_Vec3 *NpcMoveCtrl_getDestination(void *p);
void Npc_RotateOffsetXZ(void *out, void *a, void *b, s32 c);
s32 Npc_IsPosBlocked(void *p);
s32 Math_AngleXZ(void *a, void *b);
BOOL NpcActor_IsFrontAngle(s16 a);
u32 NpcActor_getPlayerActor(void *p, s32 n);
u32 NpcActor_getAngleToPlayer(void *p, s32 n);
s32 NpcActor_getAngleTo(void *self, void *a);
void func_020e7518(void *p);
s32 Random_Next(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *out, void *in);
s32 TownMap_IsPosWalkable(void *v, s32 a);
void Unk_02013474_enableFootsteps(void *p);
void *TownSessionState_Get();
void *TownSessionState_GetPeteFall(void *p);
s32 PeteFallState_hasFallPos(void *p);
void PeteFallState_getPos(void *p, void *q);
void PeteFallState_clear(void *p);
s32 EventAnnounce_IsBusy();
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gVec3Zero[];
extern u8 gRandom[];
extern void *gCamera;
extern Unk_ov075_Vec3 gCameraLookAt;
extern s16 data_02135f44[];

void SpNpcPete_ChangeAct(void *self, s32 state);
s32 SpNpcPete_IsInFocusBox(void *self, void *a, void *b);
}


class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 v);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void getChoiceList();
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void onWindowClose();
    virtual void onTalkEnd();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcPeteTalk : public SpNpcTalkRequest {
public:
    SpNpcPeteTalk();
    virtual ~SpNpcPeteTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone();

    void attachOwner(void *owner);
    void scriptWakeUp();
    void setScript(s32 v);

    /* 0xac */ s32 script;
    /* 0xb0 */ u8 scriptStep;
    /* 0xb4 */ u8 *ownerNpc;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 curFrame;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
};

struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_50[0x5c - 0x50];
    s32 position, positionY, positionZ;
    s32 prevPosition, prevPositionY, prevPositionZ;
    u8 pad_74[0x8e - 0x74];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[2];
    s32 speed;
    u8 pad_9c[0xea - 0x9c];
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();

    void setTalkRequest(Unk_0201bc1c *p);

    u16 unk_ea;
    ThreeLayerAnimModel model;
    Unk_0201ad3c moveAnimSet;
    NpcFaceAnim faceAnim;
    NpcAnimCtrl animCtrl;
    Unk_0201accc moveCtrl;
    Unk_0201a8bc obstacleProbe;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 lookAt;
    NpcSpeechState speechState;
    Unk_0201a13c emotionFx;
    CollisionState collisionState;
    Unk_02088d00 collider;
    Unk_020f4080 seEmitter;
    Unk_020135e4 footstepFx;
    NpcActionCtrl actionCtrl;
    Unk_02014254 talkCtrl;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 getWalkAnimSpeedScale();

    SpNpcAnimHeapHandle animHeapHandle;
    s32 colliderRadius;
    s32 colliderHeight;
    u8 talkMelodyPlayed;
};

class SpNpcPete : public SpNpcActor {
public:
    SpNpcPete() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getWalkAnimSpeedScale();

    BOOL mainAct03();
    BOOL mainAct01();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL setupAct01();
    BOOL mainAct05();
    BOOL tryAvoidObstacle();
    BOOL steerAroundObstacle();
    BOOL findSidestepPos(Unk_ov075_Vec3 *out, void *p);
    BOOL pickWanderTarget(s32 *px, s32 *pz);
    s32 isInCameraBox();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct00();
    BOOL setupAct00();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcPeteTalk talk;
    /* 0x710 */ u32 unk_710;
    /* 0x714 */ u8 isUp;
    /* 0x715 */ u8 moveTimer;
};

struct Unk_ov075_02271e78_Ent {
    BOOL (SpNpcPete::*enter)();
    BOOL (SpNpcPete::*exit)();
};

struct Unk_ov075_022722f0_Ent {
    void (SpNpcPeteTalk::*fn)();
    u8 kind;
};

struct Unk_ov075_SceneEntry {
    SpNpcPete *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov075_Col {
    u8 r, g, b, a;
    Unk_ov075_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};


extern "C" {
SpNpcPete *SpNpcPete_Create();
void _ZN13SpNpcPeteTalk12scriptWakeUpEv();
extern void *data_ov075_02272280[2];
void _ZN9SpNpcPete10setupAct00Ev();
extern void *data_ov075_02272298[2];
void _ZN9SpNpcPete9mainAct00Ev();
extern void *data_ov075_022722a0[2];
void _ZN9SpNpcPete10setupAct01Ev();
extern void *data_ov075_022722b0[2];
void _ZN9SpNpcPete9mainAct01Ev();
extern void *data_ov075_022722b8[2];
void _ZN9SpNpcPete10setupAct02Ev();
extern void *data_ov075_02272288[2];
void _ZN9SpNpcPete9mainAct02Ev();
extern void *data_ov075_02272260[2];
void _ZN9SpNpcPete9mainAct03Ev();
extern void *data_ov075_02272268[2];
void _ZN9SpNpcPete10setupAct04Ev();
extern void *data_ov075_02272270[2];
void _ZN9SpNpcPete9mainAct04Ev();
extern void *data_ov075_02272278[2];
void _ZN9SpNpcPete10setupAct05Ev();
extern void *data_ov075_02272290[2];
void _ZN9SpNpcPete9mainAct05Ev();
extern void *data_ov075_022722a8[2];
extern u8 sSpNpcPeteModelPath[];
extern u8 sSpNpcPeteTexturePath[];
extern Unk_ov075_Col data_ov075_0227248c;
extern Unk_ov075_Col data_ov075_02272494;
extern Unk_ov075_Col data_ov075_02272490;
extern Unk_ov075_Col data_ov075_02272484;
extern Unk_ov075_Col data_ov075_02272488;
extern Unk_ov075_Col data_ov075_02272480;
extern Unk_ov075_022722f0_Ent sSpNpcPeteTalkScripts[2];
extern u8 data_ov075_022722f8[];
extern Unk_ov075_02271e78_Ent sSpNpcPeteActTable[6];
extern FxVec3 sSpNpcPeteSidestepOffsets[2];
extern Unk_ov075_SceneEntry sSpNpcPeteProfile;
}

typedef BOOL (SpNpcPete::*Unk_ov075_Fn)();
typedef void (SpNpcPeteTalk::*Unk_ov075_InnerFn)();
#define PM(i) (*(Unk_ov075_Fn *)data_ov075_##i)

void *data_ov075_02272278[2] = {(void *)_ZN9SpNpcPete9mainAct04Ev, 0};
u8 sSpNpcPeteTexturePath[] = "npc_sp/model/plb_tex.nsbtx";
void *data_ov075_02272270[2] = {(void *)_ZN9SpNpcPete10setupAct04Ev, 0};
Unk_ov075_SceneEntry sSpNpcPeteProfile = {SpNpcPete_Create, 0x54, 0x5b, 2, 0x5000, 0x5000, 0x3e800};
void *data_ov075_02272260[2] = {(void *)_ZN9SpNpcPete9mainAct02Ev, 0};
Unk_ov075_Col data_ov075_0227248c(31, 20, 20, 31);
Unk_ov075_Col data_ov075_02272494(20, 20, 31, 31);
u8 sSpNpcPeteModelPath[] = "npc_sp/model/plb.nsbmd";
Unk_ov075_Col data_ov075_02272490(31, 31, 20, 31);
Unk_ov075_Col data_ov075_02272484(20, 31, 20, 31);
Unk_ov075_Col data_ov075_02272488(20, 31, 31, 31);
void *data_ov075_022722a8[2] = {(void *)_ZN9SpNpcPete9mainAct05Ev, 0};
void *data_ov075_022722b0[2] = {(void *)_ZN9SpNpcPete10setupAct01Ev, 0};
void *data_ov075_02272298[2] = {(void *)_ZN9SpNpcPete10setupAct00Ev, 0};
void *data_ov075_02272290[2] = {(void *)_ZN9SpNpcPete10setupAct05Ev, 0};
void *data_ov075_022722a0[2] = {(void *)_ZN9SpNpcPete9mainAct00Ev, 0};
Unk_ov075_Col data_ov075_02272480(20, 24, 24, 31);
Unk_ov075_022722f0_Ent sSpNpcPeteTalkScripts[2] = {
    {NULL, 0},
    {*(Unk_ov075_InnerFn *)data_ov075_02272280, 1},
};
Unk_ov075_02271e78_Ent sSpNpcPeteActTable[6] = {
    {PM(02272298), PM(022722a0)},
    {PM(022722b0), PM(022722b8)},
    {PM(02272288), PM(02272260)},
    {NULL, PM(02272268)},
    {PM(02272270), PM(02272278)},
    {PM(02272290), PM(022722a8)},
};
FxVec3 sSpNpcPeteSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov075_02272288[2] = {(void *)_ZN9SpNpcPete10setupAct02Ev, 0};
void *data_ov075_02272280[2] = {(void *)_ZN13SpNpcPeteTalk12scriptWakeUpEv, 0};
void *data_ov075_022722b8[2] = {(void *)_ZN9SpNpcPete9mainAct01Ev, 0};
void *data_ov075_02272268[2] = {(void *)_ZN9SpNpcPete9mainAct03Ev, 0};

extern "C" SpNpcPete *SpNpcPete_Create() {
    return new SpNpcPete();
}

BOOL SpNpcPete::vfunc_04() {
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcPete::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    if (PeteFallState_hasFallPos(TownSessionState_GetPeteFall(TownSessionState_Get())) != 0) {
        SpNpcPete_ChangeAct(this, 0);
    } else {
        SpNpcPete_ChangeAct(this, 4);
    }
    collider.groups |= 2;
    return TRUE;
}

s32 SpNpcPete::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcPete::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    if (EventAnnounce_IsBusy() == 0) {
        PeteFallState_clear(TownSessionState_GetPeteFall(TownSessionState_Get()));
    }
    return TRUE;
}

u8 *SpNpcPete::getTexturePath() { return sSpNpcPeteTexturePath; }

u8 *SpNpcPete::getModelPath() { return sSpNpcPeteModelPath; }

BOOL SpNpcPete::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcPeteActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcPeteActTable[unk_654].exit)();
    }
    return result;
}

extern "C" void SpNpcPete_ChangeAct(void *self, s32 state) {
    SpNpcPete *o = (SpNpcPete *)self;
    BOOL ok = TRUE;
    if (sSpNpcPeteActTable[state].enter != NULL) {
        ok = (o->*sSpNpcPeteActTable[state].enter)();
    }
    if (ok) {
        o->unk_654 = state;
    }
}

BOOL SpNpcPete::setupAct00() {
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0xef, 1, data_020c6cc8, 0);
    NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0xef);
    return TRUE;
}

BOOL SpNpcPete::mainAct00() {
    return TRUE;
}

BOOL SpNpcPete::setupAct04() {
    footstepFx.unk_09 = 0;
    return TRUE;
}

BOOL SpNpcPete::mainAct04() {
    void *r5 = TownSessionState_GetPeteFall(TownSessionState_Get());
    if (PeteFallState_hasFallPos(r5) != 0) {
        PeteFallState_getPos(r5, &position);
        Unk_ov075_Vec3 *s = (Unk_ov075_Vec3 *)&position;
        Unk_ov075_Vec3 *d = (Unk_ov075_Vec3 *)&prevPosition;
        d->x = position;
        d->y = s->y;
        d->z = s->z;
        footstepFx.unk_09 = 1;
        SpNpcPete_ChangeAct(this, 0);
    }
    return TRUE;
}

BOOL SpNpcPete::setupAct05() {
    moveTimer = 0;
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    Unk_02013474_enableFootsteps(&footstepFx);
    Unk_02013474_enableFootsteps(&footstepFx);
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

extern "C" s32 SpNpcPete_IsInFocusBox(void *self, void *a, void *b) {
    Unk_ov075_Vec3 *pa = (Unk_ov075_Vec3 *)a;
    Unk_ov075_Vec3 *pb = (Unk_ov075_Vec3 *)b;
    s32 r = 0;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = pa->x;
    s32 bx = pb->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
        f1 = TRUE;
    }
    if (f1) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz > az - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz < az + 0xa000) {
            r = 1;
        }
    }
    return r;
}

s32 SpNpcPete::isInCameraBox() {
    Unk_ov075_Vec3 *p = (Unk_ov075_Vec3 *)&position;
    s32 r = 0;
    if (gCamera != 0) {
        Unk_ov075_Vec3 v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = SpNpcPete_IsInFocusBox(this, &v, p);
    }
    return r;
}

BOOL SpNpcPete::pickWanderTarget(s32 *px, s32 *pz) {
    BOOL r = FALSE;
    Unk_ov075_Vec3 v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + position;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + positionZ;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, r) != 0) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcPete::findSidestepPos(Unk_ov075_Vec3 *out, void *p) {
    BOOL r = FALSE;
    Unk_ov075_Vec4 t;
    Npc_RotateOffsetXZ(&t, &position, p, moveAngleY);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL SpNpcPete::steerAroundObstacle() {
    void *a = &actionCtrl;
    void *b = &moveCtrl;
    s32 r6 = NpcLookAt_getObstacleBits(&obstacleProbe);
    BOOL r = FALSE;
    Unk_ov075_Vec3 t;
    if (NpcMoveCtrl_hasArrived(b, this, 1) == 0) {
        switch (r6) {
        case 3:
            NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (findSidestepPos(&t, &sSpNpcPeteSidestepOffsets[1])) {
                NpcMoveCtrl_setDestination(b, &t);
            } else {
                NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (findSidestepPos(&t, &sSpNpcPeteSidestepOffsets[0])) {
                NpcMoveCtrl_setDestination(b, &t);
            } else {
                NpcActionCtrl_requestAction(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (NpcMoveCtrl_hasNextLeg(b)) {
            NpcMoveCtrl_resetDestination(b);
        }
    }
    return r;
}

BOOL SpNpcPete::tryAvoidObstacle() {
    if (speed != 0) {
        if (steerAroundObstacle()) {
            return TRUE;
        }
    }
    return FALSE;
}


BOOL SpNpcPete::mainAct05() {
    void *r4 = &actionCtrl;
    s32 r6 = isInCameraBox();
    func_020e7518(&moveTimer);
    if (r6 != 0) {
        if (tryAvoidObstacle() == 0) {
            if (NpcActionCtrl_isActionDone(r4) != 0) {
                if (func_0201acfc(&unk_3aa) == 2) {
                    Unk_ov075_0227188c_CallA();
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_ov075_Vec3 a;
                    a.x = ((Unk_ov075_Vec3 *)gVec3Zero)->x;
                    a.y = ((Unk_ov075_Vec3 *)gVec3Zero)->y;
                    a.z = ((Unk_ov075_Vec3 *)gVec3Zero)->z;
                    if (pickWanderTarget(&a.x, &a.z) != 0) {
                        r6 = Math_AngleXZ(&position, &a);
                        if (NpcActor_IsFrontAngle((s16)(r6 - rotY)) != 0) {
                            r6 = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                r6 = 2;
                            }
                            NpcActionCtrl_requestAction(r4, r6, 1, a.x, a.z, 0, 0, 0, 0, data_020c6cc8, 0);
                            moveTimer = 100;
                        } else {
                            NpcActionCtrl_requestAction(r4, 4, 1, a.x, a.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            moveTimer = 80;
                        }
                    } else {
                        Unk_ov075_0227188c_CallA();
                    }
                } else {
                    Unk_ov075_0227188c_CallA();
                }
            } else {
                if (speed != 0) {
                    if (NpcActionCtrl_getAction(&actionCtrl) == 1 || NpcActionCtrl_getAction(&actionCtrl) == 2 || NpcActionCtrl_getAction(&actionCtrl) == 4) {
                        if (moveTimer == 0) {
                            Unk_ov075_0227188c_CallA();
                        } else {
                            Unk_ov075_Vec3 b;
                            Unk_ov075_Vec3 *q = NpcMoveCtrl_getDestination(&moveCtrl);
                            b.x = q->x;
                            b.y = q->y;
                            b.z = q->z;
                            if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&position, &b) - rotY)) == 0) {
                                Unk_ov075_0227188c_CallA();
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL SpNpcPete::setupAct01() {
    void *r4 = talk.func_02015aac();
    s32 r6 = rotY;
    if (isUp != 0) {
        NpcLookAt_setTarget(&lookAt, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        collider.groups &= ~2;
    }
    if (r4 != 0) {
        r6 = NpcActor_getAngleTo(this, r4);
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r6, 0);
    return TRUE;
}

BOOL SpNpcPete::mainAct01() {
    return TRUE;
}

BOOL SpNpcPete::setupAct02() {
    if (isUp == 0) {
        NpcTalkCtrl_requestTalk(&talkCtrl, 0, 0);
    }
    return TRUE;
}

BOOL SpNpcPete::mainAct02() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        SpNpcPete_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcPete::mainAct03() {
    return TRUE;
}

void SpNpcPeteTalk::update() {
    s32 i = script * 12;
    if (((u8 *)&sSpNpcPeteTalkScripts[0].kind)[i] != 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)sSpNpcPeteTalkScripts + i);
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void SpNpcPeteTalk::onTaskDone() {
    s32 i = script * 12;
    if (((u8 *)&sSpNpcPeteTalkScripts[0].kind)[i] == 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)sSpNpcPeteTalkScripts + i);
        if (e->fn != 0) {
            (this->*e->fn)();
            setScript(0);
        }
    }
}

void SpNpcPeteTalk::setScript(s32 v) {
    script = v;
    scriptStep = 0;
}

void SpNpcPeteTalk::scriptWakeUp() {
    u8 *o;
    switch (scriptStep) {
    case 0:
        if (unk_3c->state == 5) {
            NpcActionCtrl_requestPlayAnim(ownerNpc + 0x564, 2, 0xd5, 1, data_020c6cc8, 0);
            NpcMoveAnimSet_setStandAnim(ownerNpc + 0x2a0, 0);
            scriptStep = scriptStep + 1;
        }
        break;
    case 1:
        if (Unk_02015b8c_getAnimId(ownerNpc + 0x334, 0) == 0xd5) {
            if (NpcActionCtrl_isActionDone(ownerNpc + 0x564) != 0) {
                u32 r = NpcActor_getAngleToPlayer(ownerNpc, 4);
                NpcActionCtrl_requestAction(ownerNpc + 0x564, 3, 2, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
                scriptStep = scriptStep + 1;
            }
        }
        break;
    case 2:
        if (NpcActionCtrl_getAction(ownerNpc + 0x564) == 3) {
            if (NpcActionCtrl_isActionDone(ownerNpc + 0x564) != 0) {
                void *p = PlayerData_GetCurrent();
                u8 buf[2];
                ownerNpc[0x714] = 1;
                Unk_020d7710_requestReopenWindow(this);
                if (Unk_02097ff4_testFlag(p, 6) == 0) {
                    Unk_02097ff4_setFlag(p, 6);
                    Talk_CheckAndSetPlayerFlag(0x12, 1);
                    buf[0] = 0x10;
                    unk_3c->setNextMessage(buf, (void *)"sp_npc_mpelican");
                } else {
                    Talk_CheckAndSetPlayerFlag(0x12, 1);
                    buf[1] = Random_GlobalBelow(12);
                    unk_3c->setNextMessage(&buf[1], (void *)"sp_npc_mpelican");
                }
                setScript(0);
            }
        }
        break;
    }
}

SpNpcPeteTalk::SpNpcPeteTalk() {}

SpNpcPeteTalk::~SpNpcPeteTalk() {}

void SpNpcPeteTalk::attachOwner(void *owner) {
    vfunc_08();
    ownerNpc = (u8 *)owner;
}

void SpNpcPeteTalk::start(TalkStartMsg *out) {
    out->msgIndex = 0x1a;
    if (ownerNpc[0x714] != 0) {
        if (Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 6) != 0) {
            out->msgIndex = Random_GlobalBelow(4) + 12;
        }
    }
    out->msgKey = "sp_npc_mpelican";
}

void SpNpcPeteTalk::onMessageEnd() {
    PlayerData_GetCurrent();
    if (msgIndex == 0x1a) {
        Unk_020d7710_requestCloseWindow(this, 0);
        setScript(1);
    }
}

void SpNpcPeteTalk::onChoice() {
    getChoiceList();
    s32 r = ChoiceList_getResult();
}

BOOL SpNpcPete::vfunc_48() {
    BOOL r = FALSE;
    if (footstepFx.unk_09 != 0) {
        if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
            r = TRUE;
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcPete::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        SpNpcPete_ChangeAct(this, 2);
        break;
    case 3:
        talk.vfunc_08();
        talk.func_02015ab0(NpcActor_getPlayerActor(this, 4));
        if (isUp != 0) {
            SpNpcPete_ChangeAct(this, 1);
        }
        break;
    case 8:
        if (isUp == 0) {
            SpNpcPete_ChangeAct(this, 0);
        } else {
            SpNpcPete_ChangeAct(this, 5);
        }
        break;
    }
}

