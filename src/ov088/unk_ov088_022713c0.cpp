// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "town/VisitorPos.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"

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
class SpNpcShrunk;
class SpNpcShrunkTalk;
struct VisitorPos;

struct Unk_ov088_Vec {
    s32 x, y, z;
};

struct ChoiceEntry {
    void loadText();
    void setBmgName(const void *p);
    void setMsgIndex(const u8 *p);
    u8 *getText();
};

struct ChoiceList {
    s32 getResult();
    void setCancelToLast();
    void setCount(s32 v);
    ChoiceEntry *getEntry(s32 i);
    void clear();
};

struct ChoiceString {
    u8 unk_00[0x34];
    ChoiceString();
    ~ChoiceString();
};

struct MsgString9B {
    u32 v[7];
    MsgString9B();
    ~MsgString9B();
};



extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void _ZN12Unk_020d771019requestReopenWindowEv(void *p);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void EventWeekSlots_MarkPlayer(s32 v);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 Random_GlobalBelow(u32 n);
s32 Math_AngleXZ(void *p, void *q);
BOOL NpcActor_IsFrontAngle(s32 v);
u32 func_020e7518(void *p);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
u32 Random_Next(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern Unk_ov088_Vec gCameraLookAt;
extern s16 data_02135f44[];
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(Unk_ov088_Vec *a, Unk_ov088_Vec *b);
BOOL TownMap_IsPosWalkable(Unk_ov088_Vec *a, s32 b);
BOOL Npc_IsPosBlocked(void *p);
void Npc_RotateOffsetXZ(void *out, Unk_ov088_Vec *a, Unk_ov088_Vec *b, s32 c);
void TalkRequest_SetTargetDone(void *p);
void *TownSessionState_Get();
VisitorPos *TownSessionState_GetVisitorPos(void *p);
extern u32 gRandom[];
extern Unk_ov088_Vec gVec3Zero;
void Emotion_SetSlot(s32 a, s32 b);
u32 Emotion_GetSlot(s32 i);
s32 Emotion_FindFreeSlot();
s32 Emotion_CountLearned();
void MI_CpuFill8(void *p, s32 v, u32 n);
void String_Load(void *a, u8 *b, const char *c);
void *Choice_GetBmgName(s32 v);
BOOL func_0202e360();
BOOL EventAnnounce_IsBusy();
extern u32 __ptmf_null[];
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 idx, u8 *p, void *s);
s32 _ZN19Unk_020133cc_Player20getNewEmotionToLearnEv(void *self);
s32 _ZN19Unk_020133cc_Player20getLastTaughtEmotionEv(void *self);
s32 _ZN12Unk_02097ff48testFlagEj(void *self, u32 v);
void _ZN12Unk_02097ff47setFlagEj(void *self, u32 v);
void _ZN9MsgString4copyEPS_(void *self, void *o);
void _ZN12Unk_0201347416disableFootstepsEv(void *self);
void _ZN12Unk_0201347415enableFootstepsEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u32 a, s32 b, s32 c, void *d, s32 e, s32 f, u32 g);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
void _ZN11NpcMoveCtrl16resetDestinationEv(void *self);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *self);
Unk_ov088_Vec *_ZN11NpcMoveCtrl14getDestinationEv(void *self);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *self, void *v);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *self, void *owner, s32 v);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
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
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *getChoiceList();
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

class SpNpcShrunkTalk : public SpNpcTalkRequest {
public:
    SpNpcShrunkTalk();
    virtual ~SpNpcShrunkTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone();
    virtual void openEmotionPage(s32 v);

    void attachOwner(SpNpcShrunk *owner);
    void scriptWaitThenEnd();
    void scriptCheckTriggerReaction();
    void scriptOpenEmotionChoice();
    void scriptFirstLesson();
    void setScript(s32 state);
    s32 pickRandomUnlearnedEmotion(u8 *p, s32 n);
    s32 countUnlearnedEmotions(u8 *p, s32 n);

    s32 script;
    u8 scriptStep;
    u8 pad_b1[3];
    SpNpcShrunk *ownerNpc;
    u8 unk_b8;
    u8 emotionTaken[0x1e];
    u8 offeredEmotions[5];
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
MEMBER(NpcAnimCtrl, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov088_Vec *func_0201a978();
    BOOL func_0201a9a0(void *owner, s32 v);
    void func_0201a97c(Unk_ov088_Vec *v);
    BOOL func_0201a968();
    void func_0201a8f0();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); s32 func_0201a7e8(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
    void func_0201a6c0(s32 a, s32 b, s32 c, Unk_ov088_Vec *d, s32 e, s32 f, s32 g);
};
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
    void func_020135bc();
    void func_020135c4();
};
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    BOOL isActionDone();
    s32 getAction();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
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
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
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
    virtual s32 getTeachableEmotion();
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
};

class SpNpcShrunk : public SpNpcActor {
public:
    SpNpcShrunk() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 getTeachableEmotion();
    virtual s32 getWalkAnimSpeedScale();

    void teachEmotion(s32 a, s32 b);
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL checkCollisionWhileMoving();
    BOOL handleCollision();
    BOOL getOffsetPosIfFree(Unk_ov088_Vec *out, Unk_ov088_Vec *p);
    BOOL findRandomWalkTarget(s32 *a, s32 *b);
    BOOL isNearCameraTarget();
    BOOL isInViewBox(Unk_ov088_Vec *a, Unk_ov088_Vec *b);
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    SpNpcShrunkTalk talk;
    u8 waitTimer;
    u8 reactionWindow;
};

struct Unk_ov088_022725d4_Ent {
    void (SpNpcShrunkTalk::*fn)();
    u8 flag;
};

struct Unk_ov088_02272144_Ent {
    BOOL (SpNpcShrunk::*enter)();
    BOOL (SpNpcShrunk::*exit)();
};

struct Unk_ov088_Rgba {
    u8 r, g, b, a;
    Unk_ov088_Rgba(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(u32 x_, u32 y_, u32 z_) : x(x_), y(y_), z(z_) {}
    ~FxVec3();
};

struct Unk_ov088_SceneEntry {
    SpNpcShrunk *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcShrunk *SpNpcShrunk_Create();

typedef void (SpNpcShrunkTalk::*Unk_ov088_02272618_Fn)();
typedef BOOL (SpNpcShrunk::*Unk_ov088_022726ac_Fn)();

extern "C" {
void _ZN11SpNpcShrunk10setupAct02Ev();
void _ZN11SpNpcShrunk9mainAct02Ev();
void _ZN11SpNpcShrunk10setupAct03Ev();
void _ZN15SpNpcShrunkTalk17scriptFirstLessonEv();
void _ZN11SpNpcShrunk9mainAct01Ev();
void _ZN15SpNpcShrunkTalk26scriptCheckTriggerReactionEv();
void _ZN11SpNpcShrunk10setupAct04Ev();
void _ZN15SpNpcShrunkTalk17scriptWaitThenEndEv();
void _ZN11SpNpcShrunk9mainAct04Ev();
void _ZN11SpNpcShrunk10setupAct00Ev();
void _ZN15SpNpcShrunkTalk23scriptOpenEmotionChoiceEv();
void _ZN11SpNpcShrunk9mainAct00Ev();
void _ZN11SpNpcShrunk9mainAct03Ev();
extern void *data_ov088_02272520[2];
extern void *data_ov088_02272528[2];
extern void *data_ov088_02272530[2];
extern void *data_ov088_02272538[2];
extern void *data_ov088_02272540[2];
extern void *data_ov088_02272548[2];
extern void *data_ov088_02272550[2];
extern void *data_ov088_02272558[2];
extern void *data_ov088_02272560[2];
extern void *data_ov088_02272568[2];
extern void *data_ov088_02272570[2];
extern void *data_ov088_02272578[2];
extern void *data_ov088_02272580[2];
extern Unk_ov088_022725d4_Ent sSpNpcShrunkTalkScripts[5];
extern Unk_ov088_02272144_Ent sSpNpcShrunkActTable[5];
extern FxVec3 sSpNpcShrunkSideStepOffsets[2];
extern u8 sSpNpcShrunkModelPath[];
extern u8 sSpNpcShrunkTexturePath[];
}

// Definition order is the original creation order (see notes.txt).
extern "C" Unk_ov088_Rgba data_ov088_022727b4(31, 20, 20, 31);
extern "C" Unk_ov088_Rgba data_ov088_022727a8(20, 20, 31, 31);
extern "C" Unk_ov088_Rgba data_ov088_022727a4(31, 31, 20, 31);
extern "C" void *data_ov088_02272570[2] = {(void *)_ZN15SpNpcShrunkTalk23scriptOpenEmotionChoiceEv, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727a0(20, 31, 20, 31);
extern "C" void *data_ov088_02272528[2] = {(void *)_ZN11SpNpcShrunk9mainAct02Ev, 0};
extern "C" void *data_ov088_02272580[2] = {(void *)_ZN11SpNpcShrunk9mainAct03Ev, 0};
extern "C" void *data_ov088_02272550[2] = {(void *)_ZN11SpNpcShrunk10setupAct04Ev, 0};
extern "C" u8 sSpNpcShrunkTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'u', 'p', 'a', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov088_02272540[2] = {(void *)_ZN11SpNpcShrunk9mainAct01Ev, 0};
extern "C" void *data_ov088_02272578[2] = {(void *)_ZN11SpNpcShrunk9mainAct00Ev, 0};
extern "C" u8 sSpNpcShrunkModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'u', 'p', 'a', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" void *data_ov088_02272568[2] = {(void *)_ZN11SpNpcShrunk10setupAct00Ev, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727b0(20, 31, 31, 31);
extern "C" Unk_ov088_SceneEntry sSpNpcShrunkProfile = {SpNpcShrunk_Create, 0x62, 0x69, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov088_02272520[2] = {(void *)_ZN11SpNpcShrunk10setupAct02Ev, 0};
extern "C" void *data_ov088_02272548[2] = {(void *)_ZN15SpNpcShrunkTalk26scriptCheckTriggerReactionEv, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727ac(20, 24, 24, 31);
extern "C" void *data_ov088_02272538[2] = {(void *)_ZN15SpNpcShrunkTalk17scriptFirstLessonEv, 0};

Unk_ov088_022725d4_Ent sSpNpcShrunkTalkScripts[5] = {
    {NULL, 0},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272538, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272570, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272548, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272558, 1},
};

extern "C" void *data_ov088_02272560[2] = {(void *)_ZN11SpNpcShrunk9mainAct04Ev, 0};

Unk_ov088_02272144_Ent sSpNpcShrunkActTable[5] = {
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272568, *(Unk_ov088_022726ac_Fn *)data_ov088_02272578},
    {NULL, *(Unk_ov088_022726ac_Fn *)data_ov088_02272540},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272520, *(Unk_ov088_022726ac_Fn *)data_ov088_02272528},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272530, *(Unk_ov088_022726ac_Fn *)data_ov088_02272580},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272550, *(Unk_ov088_022726ac_Fn *)data_ov088_02272560},
};

extern "C" void *data_ov088_02272558[2] = {(void *)_ZN15SpNpcShrunkTalk17scriptWaitThenEndEv, 0};
extern "C" void *data_ov088_02272530[2] = {(void *)_ZN11SpNpcShrunk10setupAct03Ev, 0};
FxVec3 sSpNpcShrunkSideStepOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

extern "C" SpNpcShrunk *SpNpcShrunk_Create() {
    return new SpNpcShrunk();
}

s32 SpNpcShrunk::getWalkAnimSpeedScale() { return data_020c6cf0; }

BOOL SpNpcShrunk::vfunc_04() {
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcShrunk::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    changeAct(3);
    return TRUE;
}

BOOL SpNpcShrunk::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    if (EventAnnounce_IsBusy() == 0) {
        TownSessionState_GetVisitorPos(TownSessionState_Get())->pickRandomPos();
    }
    return TRUE;
}

u8 *SpNpcShrunk::getTexturePath() { return sSpNpcShrunkTexturePath; }

u8 *SpNpcShrunk::getModelPath() { return sSpNpcShrunkModelPath; }

BOOL SpNpcShrunk::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcShrunkActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcShrunkActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcShrunk::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcShrunkActTable[state].enter != NULL) {
        ok = (this->*sSpNpcShrunkActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcShrunk::setupAct00() { return TRUE; }

BOOL SpNpcShrunk::mainAct00() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcShrunk::mainAct01() { return TRUE; }

BOOL SpNpcShrunk::setupAct02() {
    waitTimer = 0;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN12Unk_0201347415enableFootstepsEv(&footstepFx);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcShrunk::isInViewBox(Unk_ov088_Vec *a, Unk_ov088_Vec *b) {
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

BOOL SpNpcShrunk::isNearCameraTarget() {
    Unk_ov088_Vec *pos = (Unk_ov088_Vec *)&position;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov088_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = isInViewBox(&v, pos);
    }
    return r;
}

BOOL SpNpcShrunk::findRandomWalkTarget(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov088_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 g = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = g + position;
        g = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = g + positionZ;
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

BOOL SpNpcShrunk::getOffsetPosIfFree(Unk_ov088_Vec *out, Unk_ov088_Vec *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    Npc_RotateOffsetXZ(&t, (Unk_ov088_Vec *)&position, p, moveAngleY);
    if (Npc_IsPosBlocked(&t) != 1) {
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        r = TRUE;
    }
    return r;
}

BOOL SpNpcShrunk::handleCollision() {
    NpcActionCtrl *p = &actionCtrl;
    Unk_0201accc *q = &moveCtrl;
    s32 r6 = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
    BOOL r = FALSE;
    Unk_ov088_Vec v;
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(q, this, 1) == 0) {
        switch (r6) {
        case 3:
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (getOffsetPosIfFree(&v, (Unk_ov088_Vec *)&sSpNpcShrunkSideStepOffsets[1])) {
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (getOffsetPosIfFree(&v, (Unk_ov088_Vec *)&sSpNpcShrunkSideStepOffsets[0])) {
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

BOOL SpNpcShrunk::checkCollisionWhileMoving() {
    if (speed != 0) {
        if (handleCollision()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcShrunk::mainAct02() {
    NpcActionCtrl *p = &actionCtrl;
    Unk_ov088_Vec v, w;
    s32 r6 = isNearCameraTarget();
    func_020e7518(&waitTimer);
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
                                waitTimer = 0x64;
                            }
                        } else if (actionCtrl.getAction() != 4) {
                            _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            waitTimer = 0x50;
                        }
                    } else {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (speed != 0) {
                if (actionCtrl.getAction() == 1 || actionCtrl.getAction() == 2 || actionCtrl.getAction() == 4) {
                    if (waitTimer == 0) {
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov088_Vec *q = _ZN11NpcMoveCtrl14getDestinationEv(&moveCtrl);
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

BOOL SpNpcShrunk::setupAct03() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    waitTimer = 0;
    _ZN12Unk_0201347416disableFootstepsEv(&footstepFx);
    return TRUE;
}

BOOL SpNpcShrunk::mainAct03() {
    if (isNearCameraTarget()) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcShrunk::setupAct04() {
    void *p = talk.func_02015aac();
    s32 x = rotY;
    if (p != NULL) {
        x = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcShrunk::mainAct04() { return TRUE; }

s32 SpNpcShrunkTalk::countUnlearnedEmotions(u8 *p, s32 n) {
    s32 c = 0;
    s32 i;
    for (i = 0; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}

s32 SpNpcShrunkTalk::pickRandomUnlearnedEmotion(u8 *p, s32 n) {
    s32 r;
    s32 c = countUnlearnedEmotions(p, n);
    r = 0;
    if (c <= 0) {
        return -1;
    }
    s32 k = Random_GlobalBelow(c);
    s32 i;
    for (i = 0; i <= n; p++, i++) {
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

void SpNpcShrunkTalk::openEmotionPage(s32 mode) {
    ChoiceList *g;
    ChoiceEntry *slot;
    s32 z;
    u8 b[2];
    s32 i;
    u32 r6;
    PlayerData_GetCurrent();
    g = unk_3c->getChoiceList();
    b[0] = 0;
    MsgString9B o;
    b[1] = 5;
    ChoiceString str;
    g->clear();
    r6 = 1;
    emotionTaken[0] = r6;
    for (i = 0; i < Emotion_CountLearned(); i++) {
        emotionTaken[Emotion_GetSlot(i)] = r6;
    }
    i = 0;
    z = 0;
    do {
        if (mode == 0) {
            r6 = pickRandomUnlearnedEmotion(&emotionTaken[0], 0x1e);
            if (r6 != -1) {
                if (emotionTaken[r6] == 0) {
                    emotionTaken[r6] = 1;
                }
            } else {
                r6 = 1;
            }
            offeredEmotions[i] = r6;
        } else if (mode == 1) {
            r6 = offeredEmotions[i];
        } else {
            r6 = Emotion_GetSlot(i);
        }
        slot = g->getEntry(i);
        b[1] = r6;
        if (mode != 2) {
            String_Load(&str, &b[1], "st_learn_talk");
        } else {
            String_Load(&str, &b[1], "st_learn");
        }
        _ZN9MsgString4copyEPS_(slot->getText(), &str);
        i++;
    } while (i < 4);
    if (mode == 2) {
        slot = g->getEntry(i);
        b[1] = 5;
        slot->setMsgIndex(&b[1]);
        slot->setBmgName(Choice_GetBmgName(1));
        slot->loadText();
        g->setCount(i + 1);
        g->setCancelToLast();
    } else {
        g->setCount(i);
    }
    unk_3c->openChoices(1);
}

void SpNpcShrunkTalk::update() {
    if (sSpNpcShrunkTalkScripts[script].flag != 0) {
        if (sSpNpcShrunkTalkScripts[script].fn != NULL) {
            (this->*sSpNpcShrunkTalkScripts[script].fn)();
        }
    }
}

void SpNpcShrunkTalk::onTaskDone() {
    if (sSpNpcShrunkTalkScripts[script].flag == 0) {
        if (sSpNpcShrunkTalkScripts[script].fn != NULL) {
            (this->*sSpNpcShrunkTalkScripts[script].fn)();
            setScript(0);
        }
    }
}

void SpNpcShrunkTalk::setScript(s32 state) {
    script = state;
    scriptStep = 0;
}

void SpNpcShrunkTalk::scriptFirstLesson() {
    TalkWindowState *r4 = unk_3c;
    if (r4->state == 5) {
        u8 b[2];
        ownerNpc->reactionWindow = 0x14;
        if (_ZN19Unk_020133cc_Player20getLastTaughtEmotionEv(ownerNpc) != -1) {
            b[1] = 0x17;
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
            ownerNpc->reactionWindow = 0;
            ownerNpc->waitTimer = 0x14;
            _ZN12Unk_02097ff47setFlagEj(PlayerData_GetCurrent(), 0x10);
            b[0] = 0xc;
            ownerNpc->teachEmotion(0, 0x17);
            r4->setNextMessage(&b[0], (void *)"sp_npc_reaction");
            Talk_CheckAndSetPlayerFlag(0xe, 1);
            setScript(4);
        }
    }
}

void SpNpcShrunkTalk::scriptOpenEmotionChoice() {
    if (unk_b8 == 0x17) {
        openEmotionPage(0);
    } else {
        openEmotionPage(1);
    }
    unk_b8 = 0xff;
    setScript(0);
}

void SpNpcShrunkTalk::scriptCheckTriggerReaction() {
    TalkWindowState *r4 = unk_3c;
    if (r4->state == 5) {
        u8 b[2];
        if (ownerNpc->reactionWindow == 0) {
            ownerNpc->reactionWindow = 0x34;
        }
        if (_ZN19Unk_020133cc_Player20getLastTaughtEmotionEv(ownerNpc) == -1) {
            if (func_020e7518(&ownerNpc->reactionWindow) > 2) {
                return;
            }
        }
        b[0] = 0x19;
        if (ownerNpc->reactionWindow <= 2) {
            b[0] = 0x18;
        } else {
            Talk_CheckAndSetPlayerFlag(0xe, 1);
            if (Emotion_FindFreeSlot() == -1) {
                b[0] = 0x1a;
            }
        }
        b[1] = unk_b8;
        _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
        ownerNpc->reactionWindow = 0;
        ownerNpc->waitTimer = 0x14;
        r4->setNextMessage(&b[0], (void *)"sp_npc_reaction");
        setScript(4);
    }
}

void SpNpcShrunkTalk::scriptWaitThenEnd() {
    if (func_020e7518(&ownerNpc->waitTimer) == 0) {
        setScript(0);
        _ZN12Unk_020d771019requestReopenWindowEv(this);
    }
}

SpNpcShrunkTalk::SpNpcShrunkTalk() {}

SpNpcShrunkTalk::~SpNpcShrunkTalk() {}

void SpNpcShrunkTalk::attachOwner(SpNpcShrunk *owner) {
    vfunc_08();
    ownerNpc = owner;
    ownerNpc->reactionWindow = 0;
    MI_CpuFill8(&emotionTaken[0], 0, 0x1e);
    MI_CpuFill8(&offeredEmotions[0], 0xff, 5);
}

void SpNpcShrunkTalk::start(TalkStartMsg *out) {
    out->msgKey = "sp_npc_reaction";
    out->msgIndex = 1;
    if (_ZN12Unk_02097ff48testFlagEj(PlayerData_GetCurrent(), 0x10) == 1) {
        if (Talk_CheckAndSetPlayerFlag(0xe, 0) == 0) {
            out->msgIndex = Random_GlobalBelow(2) + 0x13;
        } else if (Emotion_CountLearned() == 1) {
            out->msgIndex = Random_GlobalBelow(3) + 0xd;
        } else {
            out->msgIndex = Random_GlobalBelow(3) + 0x10;
        }
    }
}

void SpNpcShrunkTalk::onMessageEnd() {
    s32 t = msgIndex;
    if (t >= 0x1d && t <= 0x39) {
        unk_3c->openMode = 0;
        setScript(3);
    }
    switch (msgIndex) {
    case 0xb:
        unk_3c->openMode = 0;
        setScript(1);
        break;
    case 0x17:
    case 0x18:
        unk_b8 = msgIndex;
        setScript(2);
        break;
    case 0x19: {
        s32 r = Emotion_FindFreeSlot();
        if (r != -1) {
            ownerNpc->teachEmotion(r, unk_b8);
        }
        break;
    }
    case 0x1a:
        openEmotionPage(2);
        break;
    }
}

void SpNpcShrunkTalk::onChoice() {
    u8 b[3];
    u8 *s;
    s32 t = getChoiceList()->getResult();
    u32 msg;
    s = (u8 *)"sp_npc_reaction";
    msg = 0xff;
    switch (msgIndex) {
    case 0x17:
    case 0x18: {
        u8 v = *(u8 *)((u8 *)this + t + 0xd7);
        msg = (u8)(v + 0x1c);
        unk_b8 = v;
        break;
    }
    case 0x1a:
        if (t == 4) {
            msg = 0x1b;
        } else {
            b[0] = Emotion_GetSlot(t);
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 1, &b[0], (void *)"st_learn");
            ownerNpc->teachEmotion(t, unk_b8);
            b[1] = unk_b8;
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
            msg = 0x1c;
        }
        break;
    }
    if (msg != 0xff) {
        b[2] = msg;
        unk_3c->setNextMessage(&b[2], s);
    }
}

BOOL SpNpcShrunk::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcShrunk::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        changeAct(0);
        break;
    case 3:
        talk.vfunc_08();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(4);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

s32 SpNpcShrunk::getTeachableEmotion() {
    if (reactionWindow != 0) {
        return _ZN19Unk_020133cc_Player20getNewEmotionToLearnEv(this);
    }
    return -1;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcShrunk::teachEmotion(s32 a, s32 b) {
    Emotion_SetSlot(a, b);
    EventWeekSlots_MarkPlayer(0x43);
}

