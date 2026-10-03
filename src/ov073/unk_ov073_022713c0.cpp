#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

struct Unk_0201bc1c;

struct Unk_ov073_Vec {
    s32 x, y, z;
};

struct Unk_ov073_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov073_02272208_Ent {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov073_ColorCtor {
    u8 a, b, c, d;
    Unk_ov073_ColorCtor(u8 a, u8 b, u8 c, u8 d) : a(a), b(b), c(c), d(d) {}
};

// 12-byte vector with a trivial destructor (main 0x02000c8c = _ZN6FxVec3D1Ev)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

class SpNpcJoan;
class SpNpcJoanTalk;

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern Unk_ov073_Vec gCameraLookAt;
extern Unk_ov073_Vec gVec3Zero;
extern u8 gRandom[];
extern u8 data_021ed29c[];
extern u8 gSaveData[];
extern s16 data_02135f44[];
extern u32 __ptmf_null[];

s32 Pocket_FindEmpty(void);
void Hud_Hide(void);
void Hud_Show(void);
s32 NpcActor_CanPlayerPay(s32 a, s32 b);
void NpcActor_ChargePlayer(s32 a, s32 b);
s32 Pocket_AddItem(u16 *p, s32 a);
void Pocket_CountMatching(void *buf, s32 (*cb)(u16 *));
s32 MenuCtrl_IsResultOk(void);
s32 MenuCtrl_GetAmount(void);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 TalkRequest_SetTargetDone(void *p);
s32 Math_AngleXZ(void *a, void *b);
s32 NpcActor_IsFrontAngle(s16 a);
u32 Random_GlobalBelow(u32 n);
void func_020e7518(void *p);
s32 Random_Next(void *p);
void *TownSessionState_Get();
void *TownSessionState_GetVisitorPos(void *p);
void Npc_RotateOffsetXZ(void *out, void *pos, void *tbl, s32 ang);
s32 Npc_IsPosBlocked(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(void *a, void *b);
s32 TownMap_IsPosWalkable(void *p, s32 v);

// Methods of other modules' classes, called by their real (mangled) names with the object as first argument.
void *_ZN16ActorTalkRequest13getChoiceListEv(void *self);
s32 _ZN10ChoiceList9getResultEv(void *self);
s32 _ZN12TurnipMarket8getPriceEv(void *p);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN15TalkWindowState14setNextMessageEPhPv(void *obj, void *buf, const char *name);
s32 _ZN8SaveData8testFlagEj(void *p, s32 n);
void _ZN8SaveData7setFlagEj(void *p, s32 n);
u32 _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *p, s32 a, s32 b, s32 c);
s32 _ZN11NpcTalkCtrl6isBusyEv(void *p);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *p);
Unk_ov073_Vec *_ZN11NpcMoveCtrl14getDestinationEv(void *p);
void _ZN12Unk_0201347416disableFootstepsEv(void *p);
void _ZN12Unk_0201347415enableFootstepsEv(void *p);
void _ZN10VisitorPos6setPosEii(void *p, s32 x, s32 z);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *p);
s32 _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *p, void *scene, s32 v);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *p, void *v);
s32 _ZN11NpcMoveCtrl10hasNextLegEv(void *p);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *p);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, Unk_ov073_Vec *v, s32 d, s32 e, u8 f);
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
    virtual void start(void *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();   // vtable slot 0x84 (Unk_020d7710 labels used to call it vfunc_88); always overridden here
    void *func_02015aac();
    void func_02015ab0(u32 a);
    /* 0x04 */ u8 pad_04[0x1a];
    /* 0x1e */ u8 msgIndex;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0x6c];
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
    void setSubSceneKind(u32 a, u32 b);
    void openSubScene(s32 a);
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

// Sub-object at +0x658 of the scene (vtable 0x02272430)
class SpNpcJoanTalk : public SpNpcTalkRequest {
public:
    typedef void (SpNpcJoanTalk::*Fn)();

    SpNpcJoanTalk();
    virtual ~SpNpcJoanTalk();
    virtual void vfunc_08();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(void *out);
    virtual void onTaskDone();

    void attachOwner(s32 v);
    BOOL giveTurnips();
    void onAmountEntered();
    void setResultHandler(s32 i);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Fn unk_b4;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
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
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

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
    u8 pad_04[0x58];
    Unk_ov073_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[2];
    u32 speed;
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
    void *getPlayerActor(u32 v);

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
    u8 unk_651;
};

// Scene class (vtable 0x022724c0); its destructor is implicit (D1 then D0 at the start of the overlay)
class SpNpcJoan : public SpNpcActor {
public:
    SpNpcJoan() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getWalkAnimSpeedScale();

    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL tryAvoidObstacle();
    BOOL steerAroundObstacle();
    BOOL findSidestepPos(Unk_ov073_Vec *out, void *tbl);
    BOOL pickWanderTarget(s32 *a, s32 *b);
    BOOL isInCameraBox();
    BOOL isInFocusBox(Unk_ov073_Vec *a, Unk_ov073_Vec *b);
    BOOL setupAct02();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcJoanTalk unk_658;
};

struct Unk_ov073_02271fcc_Ent {
    BOOL (SpNpcJoan::*enter)();
    BOOL (SpNpcJoan::*exit)();
};

struct Unk_ov073_SceneEntry {
    SpNpcJoan *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern char sSpNpcJoanKey[12];
extern u8 sSpNpcJoanModelPath[23];
extern u8 sSpNpcJoanTexturePath[27];
extern const Unk_ov073_02272208_Ent sSpNpcJoanTopicMsgs[3];
s32 SpNpcJoan_IsEmptyItem(u16 *p);
SpNpcJoan *SpNpcJoan_Create();
}
typedef BOOL (SpNpcJoan::*Unk_ov073_022724c0_Fn)();
extern Unk_ov073_02271fcc_Ent sSpNpcJoanActTable[5];
extern FxVec3 sSpNpcJoanSidestepOffsets[2];   // [1] is at 0x022725c8
extern "C" {
extern Unk_ov073_SceneEntry sSpNpcJoanProfile;
extern void *data_ov073_02272388[2];
extern void *data_ov073_02272390[2];
extern void *data_ov073_02272398[2];
extern void *data_ov073_022723a0[2];
extern void *data_ov073_022723a8[2];
extern void *data_ov073_022723b0[2];
extern void *data_ov073_022723b8[2];
extern void *data_ov073_022723c0[2];
extern void *data_ov073_022723c8[2];
// the state functions under their link names, for the named member-function-pointer constants
void _ZN9SpNpcJoan10setupAct00Ev();
void _ZN9SpNpcJoan9mainAct04Ev();
void _ZN9SpNpcJoan10setupAct04Ev();
void _ZN9SpNpcJoan9mainAct00Ev();
void _ZN9SpNpcJoan9mainAct01Ev();
void _ZN9SpNpcJoan10setupAct02Ev();
void _ZN9SpNpcJoan9mainAct02Ev();
void _ZN9SpNpcJoan10setupAct03Ev();
void _ZN9SpNpcJoan9mainAct03Ev();
}

extern "C" SpNpcJoan *SpNpcJoan_Create() {
    return new SpNpcJoan();
}

s32 SpNpcJoan::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcJoan::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner((s32)this);
    return TRUE;
}

BOOL SpNpcJoan::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    _ZN10VisitorPos6setPosEii(TownSessionState_GetVisitorPos(TownSessionState_Get()), position.x, position.z);
    return TRUE;
}

BOOL SpNpcJoan::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(3);
    return TRUE;
}

u8 *SpNpcJoan::getTexturePath() { return sSpNpcJoanTexturePath; }

u8 *SpNpcJoan::getModelPath() { return sSpNpcJoanModelPath; }

BOOL SpNpcJoan::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcJoanActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcJoanActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcJoan::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcJoanActTable[state].enter != NULL) {
        ok = (this->*sSpNpcJoanActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcJoan::setupAct02() {
    unk_651 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcJoan::isInFocusBox(Unk_ov073_Vec *a, Unk_ov073_Vec *b) {
    BOOL r = FALSE, f2 = FALSE, f1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
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

BOOL SpNpcJoan::isInCameraBox() {
    Unk_ov073_Vec *p = &position;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov073_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = isInFocusBox(&v, p);
    }
    return r;
}

BOOL SpNpcJoan::pickWanderTarget(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov073_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = r; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + position.x;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + position.z;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (TownMap_IsPosWalkable(&v, 0)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL SpNpcJoan::findSidestepPos(Unk_ov073_Vec *out, void *tbl) {
    BOOL r = FALSE;
    Unk_ov073_Vec v;
    Npc_RotateOffsetXZ(&v, &position, tbl, moveAngleY);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        r = TRUE;
    }
    return r;
}

BOOL SpNpcJoan::steerAroundObstacle() {
    Unk_ov073_Vec v;
    void *q = &actionCtrl;
    void *s = &moveCtrl;
    s32 k = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
    BOOL r = FALSE;
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(s, this, 1) == 0) {
        switch (k) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (findSidestepPos(&v, &sSpNpcJoanSidestepOffsets[1])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(s, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (findSidestepPos(&v, &sSpNpcJoanSidestepOffsets[0])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(s, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else if (_ZN11NpcMoveCtrl10hasNextLegEv(s)) {
        _ZN11NpcMoveCtrl16resetDestinationEv(s);
    }
    return r;
}

BOOL SpNpcJoan::tryAvoidObstacle() {
    if (speed != 0 && steerAroundObstacle()) {
        return TRUE;
    }
    return FALSE;
}

#define ZERO_CALL(p) _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)

BOOL SpNpcJoan::mainAct02() {
    Unk_ov073_Vec va;
    Unk_ov073_Vec vb;
    void *r4 = &actionCtrl;
    BOOL r6 = isInCameraBox();
    func_020e7518(&unk_651);
    if (r6 != 0) {
        if (tryAvoidObstacle() == 0) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(r4)) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    ZERO_CALL(r4);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    va = gVec3Zero;
                    if (pickWanderTarget(&va.x, &va.z)) {
                        s32 t = Math_AngleXZ(&position, &va);
                        if (NpcActor_IsFrontAngle(t - rotY)) {
                            u32 k = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                k = 2;
                            }
                            if (k != _ZN13NpcActionCtrl9getActionEv(&actionCtrl)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(r4, k, 1, va.x, va.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 100;
                            }
                        } else if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) != 4) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(r4, 4, 1, va.x, va.z, 0, t, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        ZERO_CALL(r4);
                    }
                } else {
                    ZERO_CALL(r4);
                }
            } else if (speed != 0) {
                if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 1 || _ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2 || _ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 4) {
                    if (unk_651 == 0) {
                        ZERO_CALL(r4);
                    } else {
                        vb = *_ZN11NpcMoveCtrl14getDestinationEv(&moveCtrl);
                        s32 t = Math_AngleXZ(&position, &vb);
                        if (NpcActor_IsFrontAngle(t - rotY) == 0) {
                            ZERO_CALL(r4);
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

BOOL SpNpcJoan::setupAct03() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347416disableFootstepsEv(&footstepFx);
    return TRUE;
}

BOOL SpNpcJoan::mainAct03() {
    if (isInCameraBox()) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcJoan::setupAct00() {
    return TRUE;
}

BOOL SpNpcJoan::mainAct00() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        Hud_Show();
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcJoan::mainAct01() {
    return TRUE;
}

BOOL SpNpcJoan::setupAct04() {
    void *p = unk_658.func_02015aac();
    s32 x = rotY;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcJoan::mainAct04() {
    return TRUE;
}

void SpNpcJoanTalk::onTaskDone() {
    if (unk_b4) {
        (this->*unk_b4)();
        unk_b4 = *(Fn *)__ptmf_null;
    }
}

// Data. mwcc orders a file's data by a size heapsort over the reverse of the creation order, so the place of each
// definition below (relative to the others and to func_02271910, which creates its local static table) is what
// reproduces the original layout. The member-function-pointer constants of the state table are named objects
// (data_ov073_02272388..022723c8) so that their order can be set; do not move or reorder these definitions and
// do not run `linkprep.py reverse` on this file.
void *data_ov073_022723c8[2] = {(void *)_ZN9SpNpcJoan9mainAct03Ev, 0};
void *data_ov073_022723b0[2] = {(void *)_ZN9SpNpcJoan10setupAct02Ev, 0};
void *data_ov073_022723b8[2] = {(void *)_ZN9SpNpcJoan9mainAct02Ev, 0};
Unk_ov073_ColorCtor data_ov073_02272584(31, 20, 20, 31);

void SpNpcJoanTalk::setResultHandler(s32 i) {
    static Fn tbl[1] = { &SpNpcJoanTalk::onAmountEntered };
    unk_b4 = tbl[i];
}

void *data_ov073_02272390[2] = {(void *)_ZN9SpNpcJoan9mainAct04Ev, 0};
Unk_ov073_ColorCtor data_ov073_02272598(20, 20, 31, 31);
u8 sSpNpcJoanTexturePath[27] = "npc_sp/model/boa_tex.nsbtx";
char sSpNpcJoanKey[12] = "sp_npc_boar";
u8 sSpNpcJoanModelPath[23] = "npc_sp/model/boa.nsbmd";
void *data_ov073_022723c0[2] = {(void *)_ZN9SpNpcJoan10setupAct03Ev, 0};
Unk_ov073_ColorCtor data_ov073_0227258c(31, 31, 20, 31);
void *data_ov073_022723a8[2] = {(void *)_ZN9SpNpcJoan9mainAct01Ev, 0};
void *data_ov073_022723a0[2] = {(void *)_ZN9SpNpcJoan9mainAct00Ev, 0};
void *data_ov073_02272398[2] = {(void *)_ZN9SpNpcJoan10setupAct04Ev, 0};
Unk_ov073_SceneEntry sSpNpcJoanProfile = {SpNpcJoan_Create, 0x6f, 0x75, 2, 0x5000, 0x5000, 0x3e800};
Unk_ov073_ColorCtor data_ov073_02272594(20, 31, 20, 31);
Unk_ov073_ColorCtor data_ov073_02272580(20, 31, 31, 31);
Unk_ov073_ColorCtor data_ov073_02272588(20, 24, 24, 31);
Unk_ov073_02271fcc_Ent sSpNpcJoanActTable[5] = {
    {*(Unk_ov073_022724c0_Fn *)data_ov073_02272388, *(Unk_ov073_022724c0_Fn *)data_ov073_022723a0},
    {NULL, *(Unk_ov073_022724c0_Fn *)data_ov073_022723a8},
    {*(Unk_ov073_022724c0_Fn *)data_ov073_022723b0, *(Unk_ov073_022724c0_Fn *)data_ov073_022723b8},
    {*(Unk_ov073_022724c0_Fn *)data_ov073_022723c0, *(Unk_ov073_022724c0_Fn *)data_ov073_022723c8},
    {*(Unk_ov073_022724c0_Fn *)data_ov073_02272398, *(Unk_ov073_022724c0_Fn *)data_ov073_02272390},
};
const Unk_ov073_02272208_Ent sSpNpcJoanTopicMsgs[3] = {
    {sSpNpcJoanKey, 0},
    {sSpNpcJoanKey, 4},
    {NULL, 0},
};
FxVec3 sSpNpcJoanSidestepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov073_02272388[2] = {(void *)_ZN9SpNpcJoan10setupAct00Ev, 0};

void SpNpcJoanTalk::onAmountEntered() {
    void *obj = unk_3c;
    u8 buf[2];
    buf[0] = 0x11;
    if (MenuCtrl_IsResultOk()) {
        s32 a = MenuCtrl_GetAmount() * 10;
        unk_c0 = MenuCtrl_GetAmount();
        unk_bc = a * _ZN12TurnipMarket8getPriceEv(data_021ed29c);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, a, 1, 3, 1, 0);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, unk_bc, 2, 10, 1, 0);
        buf[0] = 0x13;
    }
    _ZN15TalkWindowState14setNextMessageEPhPv(obj, buf, sSpNpcJoanKey);
}

SpNpcJoanTalk::SpNpcJoanTalk() {}

SpNpcJoanTalk::~SpNpcJoanTalk() {}

void SpNpcJoanTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    unk_b4 = *(Fn *)__ptmf_null;
}

extern "C" s32 SpNpcJoan_IsEmptyItem(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcJoanTalk::giveTurnips() {
    s32 n = 0;
    s32 t = Pocket_FindEmpty();
    s32 i = 0;
    s32 m;
    u8 buf[8];
    u16 a, b;
    for (; i < 10; i++) {
        if (unk_c0 >= 10) {
            unk_c0 = unk_c0 - 10;
            n++;
        }
    }
    m = n;
    if (unk_c0 != 0) {
        m = n + 1;
    }
    Pocket_CountMatching(buf, SpNpcJoan_IsEmptyItem);
    if (t < 0 || buf[2] < m) {
        return FALSE;
    }
    while (n > 0) {
        a = 0x153a;
        Pocket_AddItem(&a, 0);
        n--;
    }
    if (unk_c0 > 0) {
        unk_c0 = unk_c0 - 1;
        b = unk_c0 + 0x1531;
        Pocket_AddItem(&b, 0);
    }
    return TRUE;
}

void SpNpcJoanTalk::attachOwner(s32 v) {
    vfunc_08();
    unk_b0 = v;
    unk_ac = 0;
    unk_bc = 0;
    unk_c0 = 0;
    unk_c4 = 0;
}

void SpNpcJoanTalk::start(void *p) {
    Unk_ov073_Out *out = (Unk_ov073_Out *)p;
    if (unk_ac == 0) {
        if (Talk_CheckAndSetPlayerFlag(3, 1)) {
            unk_ac = 1;
        }
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = ((u8 *)&sSpNpcJoanTopicMsgs[0].unk_04)[unk_ac * 8];
        out->unk_00 = (const char *)*(u32 *)((u8 *)sSpNpcJoanTopicMsgs + unk_ac * 8);
    }
}

void SpNpcJoanTalk::onMessageEnd() {
    u8 buf[2];
    s32 cmd;
    const char *str = sSpNpcJoanKey;
    cmd = 0xff;
    switch (msgIndex) {
    case 0x12:
        Hud_Hide();
        setSubSceneKind(0x3a, 0);
        openSubScene(2);
        setResultHandler(0);
        break;
    case 0x15:
        if (unk_c4 != 0) {
            cmd = 0x1a;
        } else {
            cmd = 0x16;
        }
        break;
    }
    if (cmd != 0xff) {
        buf[0] = cmd;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, str);
    }
}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see docs/assembly.md). The assembly below is the original code; the C version under
// NONMATCHING is the closest known attempt (54 bytes differ: the original dispatches cases 0..12 through a jump
// table guarded only by `cmp #0; bge` (no upper bound); mwcc emits `cmp #12; bls` plus zero-extension shifts and
// a different table layout).
// The assembly is the body of an ordinary member function, not an `asm` function: mwcc emits an `asm` function the
// moment it is parsed, ahead of every (deferred) C++ function of the file, which would put it at the start of the
// overlay. Around the block mwcc generates the original prologue and epilogue itself (`push {r4-r6, lr}; sub sp, #16`
// ... `add sp, #16; pop {r4-r6}; pop {r3}; bx r3`) from the registers the block writes and the 16-byte local.
#ifdef NONMATCHING
void SpNpcJoanTalk::onChoice() {
    u8 buf[2];
    u16 a, b, c;
    s32 res;
    s32 cmd;
    s32 x;
    const char *str;
    res = _ZN10ChoiceList9getResultEv(_ZN16ActorTalkRequest13getChoiceListEv(this));
    str = sSpNpcJoanKey;
    cmd = 0xff;
    x = msgIndex;
    if (x > 19) {
        goto hi;
    }
    if (x >= 19) {
        goto b19;
    }
    if (x > 12) {
        goto mid;
    }
    {
        switch ((unsigned char)x) {
        case 0:
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 11:
            goto end;
        case 1:
            goto b1;
        case 3:
            goto b3;
        case 8:
            goto b8;
        case 10:
            goto b10;
        case 12:
            goto b12;
        default:
            goto end;
        }
    }
    goto end;
mid:
    if (x == 16) {
        goto b16;
    }
    goto end;
hi:
    switch (x) {
    case 23:
        goto b23;
    case 25:
        goto b25;
    default:
        goto end;
    }
b1:
    if (res == 0) {
        cmd = 6;
    } else {
        cmd = 2;
    }
    goto end;
b3:
    if (res == 0) {
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, _ZN12TurnipMarket8getPriceEv(data_021ed29c), 0, 10, 1, 0);
        cmd = 0x10;
    } else if (res == 1) {
        cmd = 0x17;
    }
    goto end;
b8:
    if (res == 0) {
        cmd = 9;
    }
    goto end;
b10:
    if (res == 0) {
        cmd = 0xb;
    }
    goto end;
b12:
    if (res == 0) {
        cmd = 0xd;
    }
    goto end;
b16:
    if (res == 0) {
        cmd = 0x12;
    } else if (res == 1) {
        cmd = 7;
    }
    goto end;
b19:
    if (res == 0) {
        s32 t = Pocket_FindEmpty();
        if (NpcActor_CanPlayerPay(unk_b0, unk_bc) == 0) {
            cmd = 0x1b;
        } else if (t < 0) {
            cmd = 0x1c;
        } else if (giveTurnips() == 0) {
            cmd = 0x14;
        } else {
            NpcActor_ChargePlayer(unk_b0, unk_bc);
            a = 0x1531;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &a, 0, 5, 0);
            unk_c4 = 0;
            cmd = 0x15;
        }
    }
    goto end;
b23:
    if (res == 0) {
        if (_ZN8SaveData8testFlagEj(gSaveData, 4)) {
            cmd = 0x18;
        } else {
            Hud_Hide();
            cmd = 0x19;
        }
    }
    goto end;
b25:
    if (res == 0) {
        if (NpcActor_CanPlayerPay(unk_b0, 0x3e8) == 0) {
            cmd = 0x1b;
        } else {
            b = 0x1567;
            if (Pocket_AddItem(&b, 0)) {
                cmd = 0x15;
                NpcActor_ChargePlayer(unk_b0, 0x3e8);
                _ZN8SaveData7setFlagEj(gSaveData, 4);
                unk_c4 = 1;
                c = 0x1567;
                _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &c, 0, 5, 0);
            } else {
                cmd = 0x1c;
            }
        }
    }
    goto end;
end:
    if (cmd != 0xff) {
        buf[0] = cmd;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, str);
    }
}
#else
void SpNpcJoanTalk::onChoice() {
    u32 frame[4];   // sp+0: two outgoing stack arguments, sp+8: u8 buf[2], sp+10/12/14: three u16 temporaries
    asm {
    mov r5, r0
    bl _ZN16ActorTalkRequest13getChoiceListEv
    bl _ZN10ChoiceList9getResultEv
    ldr r6, =sSpNpcJoanKey
    mov r4, #255
    ldrb r1, [r5, #30]
    cmp r1, #19
    bgt L_hi
    cmp r1, #19
    bge L_case19
    cmp r1, #12
    bgt L_mid
    // `cmp r1, #0` (0x2900); `bge L_dispatch` (0xda00, skips the next instruction). Written as a constant: mwcc folds
    // a `bge` + `b` pair into one far conditional branch and then rejects every later dcd as unaligned.
    dcd 0xda002900
    b L_end
    // L_dispatch:
    add r2, r1, r1
    add r2, pc
    ldrh r2, [r2, #8]
    lsl r2, r2, #16
    asr r2, r2, #16
    add r2, pc
    bx r2
    // Jump table for cases 0..12: 13 halfwords, each (target - table + 1). mwcc's inline assembler has no
    // 16-bit data directive and no label arithmetic, so the entries are written as constants: two per dcd
    // (low halfword first), and the 13th as the instruction with the same encoding.
    dcd 0x0031017b   // 0: L_end      1: L_case1
    dcd 0x003d017b   // 2: L_end      3: L_case3
    dcd 0x017b017b   // 4: L_end      5: L_end
    dcd 0x017b017b   // 6: L_end      7: L_end
    dcd 0x017b0067   // 8: L_case8    9: L_end
    dcd 0x017b0071   // 10: L_case10  11: L_end
    lsl r3, r7, #1   // 12: L_case12  (the halfword 0x007b)
L_mid:
    cmp r1, #16
    beq L_case16
    b L_end
L_hi:
    cmp r1, #23
    bgt L_hi2
    cmp r1, #23
    beq L_case23
    b L_end
L_hi2:
    cmp r1, #25
    beq L_case25
    b L_end
L_case1:
    cmp r0, #0
    bne L_case1_else
    mov r4, #6
    b L_end
L_case1_else:
    mov r4, #2
    b L_end
L_case3:
    cmp r0, #0
    bne L_case3_else
    ldr r0, =data_021ed29c
    bl _ZN12TurnipMarket8getPriceEv
    mov r1, r0
    mov r0, #1
    str r0, [sp, #frame]   // = [sp, #0]; naming the local is what makes mwcc allocate the 16-byte frame
    mov r2, #0
    str r2, [sp, #4]
    mov r0, r5
    mov r3, #10
    bl _ZN16ActorTalkRequest13setNumberSlotEijiii
    mov r4, #16
    b L_end
L_case3_else:
    cmp r0, #1
    beq L_case3_one
    b L_end
L_case3_one:
    mov r4, #23
    b L_end
L_case8:
    cmp r0, #0
    beq L_case8_zero
    b L_end
L_case8_zero:
    mov r4, #9
    b L_end
L_case10:
    cmp r0, #0
    beq L_case10_zero
    b L_end
L_case10_zero:
    mov r4, #11
    b L_end
L_case12:
    cmp r0, #0
    bne L_end
    mov r4, #13
    b L_end
L_case16:
    cmp r0, #0
    bne L_case16_else
    mov r4, #18
    b L_end
L_case16_else:
    cmp r0, #1
    bne L_end
    mov r4, #7
    b L_end
L_case19:
    cmp r0, #0
    bne L_end
    bl Pocket_FindEmpty
    mov r4, r0
    mov r0, r5
    add r0, #176
    ldr r0, [r0, #0]
    mov r1, r5
    add r1, #188
    ldr r1, [r1, #0]
    bl NpcActor_CanPlayerPay
    cmp r0, #0
    bne L_case19_a
    mov r4, #27
    b L_end
L_case19_a:
    cmp r4, #0
    bge L_case19_b
    mov r4, #28
    b L_end
L_case19_b:
    mov r0, r5
    bl giveTurnips
    cmp r0, #0
    bne L_case19_c
    mov r4, #20
    b L_end
L_case19_c:
    mov r0, r5
    add r0, #176
    ldr r0, [r0, #0]
    mov r1, r5
    add r1, #188
    ldr r1, [r1, #0]
    bl NpcActor_ChargePlayer
    ldr r1, =0x1531
    add r0, sp, #8
    strh r1, [r0, #2]
    mov r2, #0
    str r2, [sp, #0]
    mov r0, r5
    add r1, sp, #8
    add r1, #2
    mov r3, #5
    bl _ZN12Unk_020d771015requestGiveItemEPtjjj
    mov r1, #0
    mov r0, r5
    add r0, #196
    strb r1, [r0, #0]
    mov r4, #21
    b L_end
L_case23:
    cmp r0, #0
    bne L_end
    ldr r0, =gSaveData
    mov r1, #4
    bl _ZN8SaveData8testFlagEj
    cmp r0, #0
    beq L_case23_a
    mov r4, #24
    b L_end
L_case23_a:
    bl Hud_Hide
    mov r4, #25
    b L_end
L_case25:
    cmp r0, #0
    bne L_end
    mov r0, r5
    add r0, #176
    ldr r0, [r0, #0]
    ldr r1, =0x3e8
    bl NpcActor_CanPlayerPay
    cmp r0, #0
    bne L_case25_a
    mov r4, #27
    b L_end
L_case25_a:
    ldr r1, =0x1567
    add r0, sp, #8
    strh r1, [r0, #4]
    add r0, sp, #12
    mov r1, #0
    bl Pocket_AddItem
    cmp r0, #0
    beq L_case25_fail
    mov r4, #21
    mov r0, r5
    add r0, #176
    ldr r0, [r0, #0]
    ldr r1, =0x3e8
    bl NpcActor_ChargePlayer
    ldr r0, =gSaveData
    mov r1, #4
    bl _ZN8SaveData7setFlagEj
    mov r1, #1
    mov r0, r5
    add r0, #196
    strb r1, [r0, #0]
    ldr r1, =0x1567
    add r0, sp, #8
    strh r1, [r0, #6]
    mov r2, #0
    str r2, [sp, #0]
    mov r0, r5
    add r1, sp, #12
    add r1, #2
    mov r3, #5
    bl _ZN12Unk_020d771015requestGiveItemEPtjjj
    b L_end
L_case25_fail:
    mov r4, #28
L_end:
    cmp r4, #255
    beq L_ret
    add r0, sp, #8
    strb r4, [r0, #0]
    ldr r0, [r5, #60]
    add r1, sp, #8
    mov r2, r6
    bl _ZN15TalkWindowState14setNextMessageEPhPv
L_ret:
    }
}
#endif

BOOL SpNpcJoan::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcJoan::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        changeAct(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(4);
        break;
    case 8:
        changeAct(2);
        break;
    }
}
