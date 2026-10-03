#include "types.h"

extern "C" {
void _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(void *a, void *b);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN11NpcMoveCtrl11setTurnModeEh(void *self, s32 a);
s32 Scene_GetCurrent(void);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void _ZN12Unk_0201347416disableFootstepsEv(void *self);
void _ZN12Unk_0201347415enableFootstepsEv(void *self);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
s32 _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *self, void *owner, s32 a);
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
void func_020e7518(void *p);
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

// Library base class (ARM code in autoload_2 / ITCM). vfunc_08 takes a flag here: the slot is shared with
// NpcActor::postCreate(int).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
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

// ---- SpNpcKaitlinTalk and its bases (vtable 0x020ddcf0 chain) ----
class TalkMsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
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
    virtual void onEventTag(u32 a);
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
    virtual s32 getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
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
    virtual s32 getVoiceType();
    virtual void start(void *out) = 0;
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();

    void *func_02015aac();
    void func_02015ab0(u32 a);

    u32 pad_44[(0xac - 0x44) / 4];
};

struct Unk_020c1d80_Out {
    const char *unk_00;
    u8 unk_04;
};

class SpNpcTalkRequest : public ActorTalkRequest {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcKaitlinTalk : public SpNpcTalkRequest {
public:
    SpNpcKaitlinTalk();
    virtual ~SpNpcKaitlinTalk();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(void *out);

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(void *p);

    void *unk_ac;
    s32 unk_b0;
};

// ---- SpNpcKaitlin / SpNpcKatie and their bases (scene object derived from NpcActor) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
    }
MEMBER(ThreeLayerAnimModel, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
};
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct ActorFollowCollider {
    u8 unk_00[0x514 - 0x4cc - 4];
    u8 unk_44;
    u8 pad_45[3];
    ActorFollowCollider();
};
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); };
struct NpcActionCtrl {
    NpcActionCtrl();
    u8 unk_00[0x618 - 0x564];
};
struct NpcTalkCtrl {
    u8 unk_00[0x28];
};
struct Unk_02014254 : NpcTalkCtrl {
    Unk_02014254();
};
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
};

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};
typedef Unk_020d77a4_Vec3 Unk_0203e7a4_Vec;

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Character : Actor {
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68 - 0];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
    Character();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual ~Character();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(int a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
};

struct NpcActor : Character {
    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    CollisionState unk_49c;
    ActorFollowCollider unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
    NpcActor() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(int a);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct() = 0;
    virtual const char *getTexturePath() = 0;
    virtual const char *getModelPath() = 0;
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    virtual BOOL getWalkAnimSpeedScale();

    SpNpcAnimHeapHandle unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
    u8 unk_651;
};

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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual ~SpNpcKaitlin() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual const char *getTexturePath();
    virtual const char *getModelPath();
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
    SpNpcKaitlinTalk unk_658;
    u32 unk_70c;
};

// Destructor lives in another unit (symbol _ZN6FxVec3D1Ev)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
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

BOOL SpNpcKaitlin::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    sSpNpcKaitlinInstance = this;
    _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(this, &unk_658);
    unk_658.attachOwner(this);
    if (Scene_GetCurrent()) {
        _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&unk_350, 2, 0x333, 0xcc, 0x133);
        _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&unk_350, 1, 0x280, 0xcc, 0x133);
    }
    unk_558.unk_0b = 1;
    return TRUE;
}

BOOL SpNpcKaitlin::getWalkAnimSpeedScale() {
    if (Scene_GetCurrent()) {
        return SpNpcActor::getWalkAnimSpeedScale();
    }
    return data_020c6cf0;
}

BOOL SpNpcKaitlin::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    changeAct(0);
    if (Scene_GetCurrent() == 0x2f) {
        unk_4cc.unk_44 = 0;
        _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        unk_5c = 0x10000;
        unk_64 = 0x16800;
    }
    return TRUE;
}

BOOL SpNpcKaitlin::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
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

const char *SpNpcKaitlin::getTexturePath() {
    return sSpNpcKaitlinTexPath;
}

const char *SpNpcKaitlin::getModelPath() {
    return sSpNpcKaitlinModelPath;
}

BOOL SpNpcKaitlin::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcKaitlinActTable[unk_654].b != NULL) {
        result = (this->*sSpNpcKaitlinActTable[unk_654].b)();
    }
    return result;
}

BOOL SpNpcKaitlin::vfunc_48() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcKaitlin::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(_ZN8NpcActor14getPlayerActorEj(this, 4));
        changeAct(1);
        break;
    case 0:
        changeAct(1);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(_ZN8NpcActor14getPlayerActorEj(this, 4));
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
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
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
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct09() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
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
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    changeAct(0);
}

BOOL SpNpcKaitlin::setupAct03() {
    return setupAct00();
}

BOOL SpNpcKaitlin::mainAct03() {
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct04() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 2, 2, 0xf400, 0x14600, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct04() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
        if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct05() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 3, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN11NpcMoveCtrl11setTurnModeEh(&unk_350, 2);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct05() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
        if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 3) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcKaitlin::setupAct06() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 4, 2, 0x10000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKaitlin::mainAct06() {
    if (_ZN13NpcActionCtrl12isActionDoneEv(&unk_564)) {
        if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

SpNpcKaitlinTalk::SpNpcKaitlinTalk() {}

SpNpcKaitlinTalk::~SpNpcKaitlinTalk() {}

void SpNpcKaitlinTalk::attachOwner(void *p) {
    vfunc_08();
    unk_ac = p;
}

void SpNpcKaitlinTalk::setTopic(s32 v) {
    unk_b0 = v;
}

s32 SpNpcKaitlinTalk::getTopic() {
    return unk_b0;
}

void SpNpcKaitlinTalk::start(void *outp) {
    Unk_020c1d80_Out *out = (Unk_020c1d80_Out *)outp;
    void *p = PlayerData_GetCurrent();
    out->unk_00 = sSpNpcKaitlinMsgKey;
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
        out->unk_04 = 0;
        break;
    case 1:
        _ZN12Unk_02097ff47setFlagEj(p, 0x33);
        out->unk_04 = Random_GlobalBelow(3) + 1;
        break;
    case 2:
        out->unk_04 = Random_GlobalBelow(3) + 4;
        Talk_CheckAndSetPlayerFlag(0x2a, 1);
        break;
    case 3:
        out->unk_04 = Random_GlobalBelow(3) + 7;
        break;
    }
}

void SpNpcKaitlinTalk::onMessageStart() {
    PlayerData_GetCurrent();
    void *r4 = _ZN10PlayerData18getLostChildRecordEv();
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv(r4), 0);
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv(r4), 1);
}

void SpNpcKaitlinTalk::onMessageEnd() {}

void SpNpcKaitlinTalk::onChoice() {}

BOOL SpNpcKaitlin::setupAct07() {
    unk_651 = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN12Unk_0201347415enableFootstepsEv(&unk_558);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
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
    Unk_020c17f8_Vec *pos = (Unk_020c17f8_Vec *)&unk_5c;
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
        v.x = m + unk_5c;
        m = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = m + unk_64;
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
    Npc_RotateOffsetXZ(&v, &unk_5c, data, unk_94);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

BOOL SpNpcKaitlin::avoidObstacle() {
    void *p564 = &unk_564;
    void *p350 = &unk_350;
    s32 st = _ZN9NpcLookAt15getObstacleBitsEv(&unk_3a8);
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(p350, this, 1) == 0) {
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
    if (unk_98 != 0) {
        if (avoidObstacle()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcKaitlin::mainAct07() {
    void *p564 = &unk_564;
    BOOL a = isInCameraView();
    func_020e7518(&unk_651);
    if (a) {
        if (!tryAvoidObstacle()) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(p564)) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_020c17f8_Vec v1;
                    v1.x = gVec3Zero[0];
                    v1.y = gVec3Zero[1];
                    v1.z = gVec3Zero[2];
                    if (findRandomWalkTarget(&v1.x, &v1.z)) {
                        s32 ang = Math_AngleXZ(&unk_5c, &v1);
                        if (NpcActor_IsFrontAngle(ang - unk_8e)) {
                            s32 k = 1;
                            if (Random_GlobalBelow(4) == 0) {
                                k = 2;
                            }
                            if (k != _ZN13NpcActionCtrl9getActionEv(&unk_564)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, k, 1, v1.x, v1.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else {
                            if (_ZN13NpcActionCtrl9getActionEv(&unk_564) != 4) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 4, 1, v1.x, v1.z, 0, ang, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x50;
                            }
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (unk_98 != 0) {
                    if (_ZN13NpcActionCtrl9getActionEv(&unk_564) == 1 || _ZN13NpcActionCtrl9getActionEv(&unk_564) == 2 || _ZN13NpcActionCtrl9getActionEv(&unk_564) == 4) {
                        if (unk_651 == 0) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_020c17f8_Vec *src = (Unk_020c17f8_Vec *)_ZN11NpcMoveCtrl14getDestinationEv(&unk_350);
                            Unk_020c17f8_Vec v2;
                            v2.x = src->x;
                            v2.y = src->y;
                            v2.z = src->z;
                            s32 ang = Math_AngleXZ(&unk_5c, &v2);
                            if (!NpcActor_IsFrontAngle(ang - unk_8e)) {
                                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (unk_98 != 0) {
            changeAct(8);
        }
    }
    return FALSE;
}

BOOL SpNpcKaitlin::setupAct08() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347416disableFootstepsEv(&unk_558);
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
