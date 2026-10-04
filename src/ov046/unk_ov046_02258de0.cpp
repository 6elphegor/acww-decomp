// mwcc-flags: -str reuse
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
class SpNpcCelesteTalk;
class SpNpcCeleste;
typedef void (SpNpcCelesteTalk::*Unk_ov046_0225aa0c_Fn)();
typedef void (SpNpcCelesteTalk::*Unk_ov046_02259480_Fn)(s32);

struct TalkStartMsg {
    const void *msgKey;
    u8 msgIndex;
};

struct Unk_ov046_0225a650_Entry {
    const void *p;
    u8 v;
};
struct Unk_ov046_0225a11c_Vec {
    s32 x, y, z;
};
struct Unk_ov046_02258e68_Vec {
    s32 x, y, z;
};
struct Unk_ov046_02258e68_Actor {
    u8 pad_00[0x5c];
    Unk_ov046_02258e68_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
};

struct ChoiceEntry {
    void setMsgIndex(const u8 *p);
    void setBmgName(const void *p);
    void loadText();
    void *getText();
};
struct ChoiceList {
    s32 getResult();
    void clear();
    ChoiceEntry *getEntry(s32 i);
    void setCount(s32 v);
    s32 setCancelToLast();
};
struct TalkWindowState {
    ChoiceList *getChoiceList();
    void openChoices(s32 v);
    void setSlot(s32 a, void *b);
    void setNextMessage(u8 *a, void *b);
};

struct ConstellationMsgString17 {
    u32 pad[9];
    ConstellationMsgString17();
    ~ConstellationMsgString17();
};
struct MsgString256 {
    u32 pad[0x114 / 4];
    MsgString256();
    ~MsgString256();
};

extern "C" {
extern void *gCommManager;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern u16 gPad[];
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern Unk_ov046_0225a11c_Vec gVec3Zero;

s32 Random_GlobalBelow(u32 v);
s32 Constellation_CountFreeSlots(void);
s32 Constellation_FindFreeSlot(void);
s32 Constellation_GetNewStatus(s32 *out);
void Constellation_ClearNewFlags(void);
void Constellation_Erase(s32 idx);
void Constellation_GetViewingTime(void *a, s32 idx);
s32 Constellation_GetName(void *self, s32 idx);
void String_Load2d(void *o, u8 *p, u32 x);
BOOL GameStart_IsActive(void);
void *PlayerData_GetCurrent(void);
s16 *DebugVar_GetPtr(s32 a, s32 b);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
BOOL MenuCtrl_IsFinished(void);
BOOL MenuCtrl_IsResultOk(void);
const void *Choice_GetBmgName(u32 i);
Unk_ov046_02258e68_Actor *PlayerActor_GetActor(s32 n);
s32 func_020e9650(Unk_ov046_02258e68_Vec *a, Unk_ov046_02258e68_Vec *b);
void *Scene_GetTouchPicker();
s32 TouchPickResult_GetTarget(void *a, void *b, void *c, s32 d);
void Camera_LockFocusYaw();
void TalkRequest_AddPlayerTalk6(void *p, s32 v);
void TalkRequest_SetTargetDone(void *self);
s32 Clock_GetTimeOfDay();
s32 func_020e7500(void *p);
void Effect_End(s32 h);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
void Effect_SetPosition(s32 h, void *b, void *c);

BOOL _ZN11CommManager8isOnlineEv(void *self);
void _ZN24ConstellationMsgString17C1Ev(void *self);
void _ZN24ConstellationMsgString17D1Ev(void *self);
void _ZN9MsgString12appendStringEPS_(void *self, void *p);
void _ZN9MsgString4copyEPS_(void *self, void *p);
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 a, void *b, void *c);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *self);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, Unk_ov046_0225a11c_Vec *v, s32 d, s32 e, u8 f);
}
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define MsgString_appendString _ZN9MsgString12appendStringEPS_
#define MsgString_copy _ZN9MsgString4copyEPS_
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih

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
    void setDaySlot(u32 a, u32 b);
    void setMonthSlot(u32 a, u32 b);
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
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
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
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
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
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
    virtual BOOL vfunc_58();
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
    virtual void getTeachableEmotion();
    virtual void addMood();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);
    BOOL netIsTalkLocked();
    s32 getAngleTo(NpcActor *other);

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

struct Unk_ov046_0225aa0c_Row {
    u32 id;
    Unk_ov046_0225aa0c_Fn f;
};

struct Unk_ov046_02259480_Ent {
    u32 id;
    Unk_ov046_02259480_Fn fn;
};

class SpNpcCelesteTalk : public SpNpcTalkRequest {
public:
    SpNpcCelesteTalk();
    virtual ~SpNpcCelesteTalk();
    virtual void vfunc_08();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void onTaskDone();
    virtual void openConstellationPage();

    void onRenameChoice(s32 a);
    void onLookOrTimesChoice(s32 a);
    void func_ov046_0225904c(s32 a);
    void func_ov046_022590a0(s32 a);
    void onStargazeMenuChoice(s32 a);
    void onMakeOrChangeChoice(s32 a);
    void onEraseConfirmChoice(s32 a);
    void onFullMenuChoice(s32 a);
    void onTelescopeMenuChoice(s32 a);
    void onDiscardNewChoice(s32 a);
    void func_ov046_022592a4(s32 a);
    void onConstellationListChoice(s32 idx);
    void onViewingTimeChoice(s32 a);
    void startStargazing();
    void startRenameEntry();
    void startNameEntry();
    void showConstellationList();
    void showFollowUpMenu();
    void reactToConstellationName();
    void startConstellationEditor();
    void showTelescopeMenu();
    void announceNewConstellations();
    s32 getFollowUpMenuMsg();
    void setTopic(s32 v);
    void attachOwner(void *p);
    void onConstellationRenamed();
    void onConstellationRedrawn();
    void onConstellationNamed();
    void onConstellationDrawn();
    void onStargazingDone();
    void setResultHandler(s32 idx);

    /* 0xac */ s32 topic;
    /* 0xb0 */ u8 *owner;
    /* 0xb4 */ Unk_ov046_0225aa0c_Fn resultHandler;
    /* 0xbc */ s32 constellationSlot;
    /* 0xc0 */ u8 listStart;
    /* 0xc1 */ u8 listRemaining;
    /* 0xc2 */ u8 listMode;
    /* 0xc3 */ u8 pad_c3;
    /* 0xc4 */ s32 listSlots[5];
    /* 0xd8 */ s32 nextMsg;
};

class SpNpcCeleste : public SpNpcActor {
public:
    SpNpcCeleste() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL tryStartTelescopeTalk();
    BOOL isPlayerAtTelescope();
    BOOL mainAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcCelesteTalk talk;
    u16 sleepTimer;
    s16 homeAngle;
    u16 sleepBlend;
    u8 isAsleep;
    u8 pad_73b;
    s32 effectHandle;
};

struct Unk_ov046_0225a398_Ent {
    BOOL (SpNpcCeleste::*enter)();
    BOOL (SpNpcCeleste::*exit)();
};

struct Unk_ov046_SceneEntry {
    void *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" void *SpNpcCeleste_Create();
struct Unk_ov046_Quad {
    u8 a, b, c, d;
    Unk_ov046_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};
extern "C" Unk_ov046_Quad data_ov046_0225ae04;
extern "C" Unk_ov046_Quad data_ov046_0225ae08;
extern "C" Unk_ov046_Quad data_ov046_0225ae20;
extern "C" Unk_ov046_Quad data_ov046_0225ae10;
extern "C" Unk_ov046_Quad data_ov046_0225ae00;
extern "C" Unk_ov046_Quad data_ov046_0225ae0c;
extern "C" u8 sSpNpcCelesteModelPath[];
extern "C" u8 sSpNpcCelesteTexturePath[];
extern "C" const Unk_ov046_0225a650_Entry sSpNpcCelesteTopicMsgs[5];
extern "C" Unk_ov046_SceneEntry sSpNpcCelesteProfile;
extern Unk_ov046_0225a398_Ent sSpNpcCelesteActTable[5];
extern "C" u8 sSpNpcCelesteKey[];

static inline BOOL Unk_ov046_02258e68_Both() {
    if (gTouchPrevHeld != 0 && gTouchPrevChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov046_02259de8_Time {
    u32 w0, w1;
};

extern "C" void *SpNpcCeleste_Create() {
    return new SpNpcCeleste();
}

BOOL SpNpcCeleste::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    effectHandle = -1;
    return TRUE;
}

BOOL SpNpcCeleste::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    homeAngle = rotY;
    sleepBlend = 0;
    collider.unk_1c |= 2;
    talk.setTopic(5);
    if (Clock_GetTimeOfDay() == 2 || Clock_GetTimeOfDay() == 3 || CommManager_isOnline(gCommManager) != 0 ||
        *DebugVar_GetPtr(0, 0x4a) != 0) {
        changeAct(0);
    } else {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcCeleste::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (effectHandle != -1) {
        Effect_End(effectHandle);
        effectHandle = -1;
    }
    return TRUE;
}

u8 *SpNpcCeleste::getTexturePath() { return sSpNpcCelesteTexturePath; }

// Getters at the end of the file so they are not inlined.
u8 *SpNpcCeleste::getModelPath() { return sSpNpcCelesteModelPath; }

BOOL SpNpcCeleste::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcCelesteActTable[unk_654].exit) {
        r = (this->*sSpNpcCelesteActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcCeleste::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcCelesteActTable[state].enter) {
        ok = (this->*sSpNpcCelesteActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcCeleste::setupAct00() {
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    sleepTimer = 0x78;
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcCeleste::mainAct00() {
    if (tryStartTelescopeTalk()) {
        return TRUE;
    }
    if (CommManager_isOnline(gCommManager) != 0 || *DebugVar_GetPtr(0, 0x4a) != 0 || Clock_GetTimeOfDay() == 2 ||
        Clock_GetTimeOfDay() == 3) {
        return TRUE;
    }
    if (func_020e7500(&sleepTimer) == 0) {
        sleepBlend = 0x18;
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcCeleste::setupAct01() {
    NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcCeleste::mainAct01() {
    if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
        if (NpcActionCtrl_isActionDone(&actionCtrl)) {
            changeAct(0);
        }
    }
    return TRUE;
}

BOOL SpNpcCeleste::setupAct02() {
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0xf0, 0, sleepBlend, 0);
    NpcLookAt_setTarget(&lookAt, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    isAsleep = 1;
    return TRUE;
}

BOOL SpNpcCeleste::mainAct02() {
    if (tryStartTelescopeTalk()) {
        return TRUE;
    }
    if (effectHandle == -1) {
        effectHandle = Effect_Create(0x3c, (u8 *)this + 0x478, &rotY, 0);
    } else {
        Effect_SetPosition(effectHandle, (u8 *)this + 0x478, &rotY);
    }
    return TRUE;
}

BOOL SpNpcCeleste::setupAct03() {
    NpcActor *p = (NpcActor *)talk.func_02015aac();
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    if (effectHandle != -1) {
        Effect_End(effectHandle);
        effectHandle = -1;
    }
    NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, r, 0);
    NpcLookAt_setTarget(&lookAt, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL SpNpcCeleste::mainAct03() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
        isAsleep = 0;
        talk.setTopic(5);
        TalkRequest_SetTargetDone(this);
        changeAct(4);
    }
    return TRUE;
}

// ---- unit 3
BOOL SpNpcCeleste::mainAct04() { return TRUE; }

void SpNpcCelesteTalk::openConstellationPage() {
    TalkWindowState *o = unk_3c;
    ChoiceList *r7 = o->getChoiceList();
    u8 v = 0xf;
    r7->clear();
    ConstellationMsgString17 a;
    ConstellationMsgString17 b;
    v = 0x7d;
    String_Load2d(&b, &v, 0);
    s32 i;
    for (i = 0; i < 5; i++) {
        listSlots[i] = -1;
    }
    s32 r6 = listStart;
    s32 r4 = 0;
    for (; r6 < 0x10 && r4 < 4 && listRemaining != 0; r6++) {
        if (Constellation_GetName(&a, r6)) {
            MsgString256 c;
            ChoiceEntry *q = r7->getEntry(r4);
            MsgString_appendString(&c, &a);
            MsgString_appendString(&c, &b);
            MsgString_copy(q->getText(), &c);
            listSlots[r4] = r6;
            r4++;
            listRemaining = listRemaining - 1;
        }
    }
    listStart = r6;
    if (listStart >= 0x10) {
        listStart = 0xf;
    }
    v = 0xf;
    if (listRemaining == 0) {
        v = 0x10;
    }
    ChoiceEntry *p = r7->getEntry(r4);
    p->setMsgIndex(&v);
    p->setBmgName(Choice_GetBmgName(1));
    p->loadText();
    r7->setCount(r4 + 1);
    r7->setCancelToLast();
    unk_3c->openChoices(1);
}

void SpNpcCelesteTalk::onTaskDone() {
    if (resultHandler) {
        (this->*resultHandler)();
        resultHandler = NULL;
    }
}// Declarations for data defined further down (definition order sets the data layout)

extern "C" Unk_ov046_Quad data_ov046_0225ae04 = Unk_ov046_Quad(31, 20, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae08 = Unk_ov046_Quad(20, 20, 31, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae20 = Unk_ov046_Quad(31, 31, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae10 = Unk_ov046_Quad(20, 31, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae00 = Unk_ov046_Quad(20, 31, 31, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae0c = Unk_ov046_Quad(20, 24, 24, 31);

extern "C" u8 sSpNpcCelesteModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 's', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" u8 sSpNpcCelesteTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 's', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" const Unk_ov046_0225a650_Entry sSpNpcCelesteTopicMsgs[5] = {
    {sSpNpcCelesteKey, 0},
    {sSpNpcCelesteKey, 0x2c},
    {sSpNpcCelesteKey, 0x2d},
    {sSpNpcCelesteKey, 0x2e},
    {sSpNpcCelesteKey, 4},
};

extern "C" Unk_ov046_SceneEntry sSpNpcCelesteProfile = {SpNpcCeleste_Create, 0x6d, 0x73, 2, 0x5000, 0x5000, 0x3e800};

Unk_ov046_0225a398_Ent sSpNpcCelesteActTable[5] = {
    {&SpNpcCeleste::setupAct00, &SpNpcCeleste::mainAct00},
    {&SpNpcCeleste::setupAct01, &SpNpcCeleste::mainAct01},
    {&SpNpcCeleste::setupAct02, &SpNpcCeleste::mainAct02},
    {&SpNpcCeleste::setupAct03, &SpNpcCeleste::mainAct03},
    {NULL, &SpNpcCeleste::mainAct04},
};

void SpNpcCelesteTalk::setResultHandler(s32 idx) {
    static Unk_ov046_0225aa0c_Fn tbl[5] = {
        &SpNpcCelesteTalk::onStargazingDone,
        &SpNpcCelesteTalk::onConstellationDrawn,
        &SpNpcCelesteTalk::onConstellationNamed,
        &SpNpcCelesteTalk::onConstellationRedrawn,
        &SpNpcCelesteTalk::onConstellationRenamed,
    };
    resultHandler = tbl[idx];
}

void SpNpcCelesteTalk::onStargazingDone() {
    TalkWindowState *o = unk_3c;
    u8 v = 0x12;
    o->setNextMessage(&v, sSpNpcCelesteKey);
}

void SpNpcCelesteTalk::onConstellationDrawn() {
    TalkWindowState *o = unk_3c;
    u8 msg[4];
    Unk_ov046_02259de8_Time t;
    msg[0] = 0xc;
    if (MenuCtrl_IsResultOk()) {
        t.w0 = 0;
        t.w1 = 0;
        Constellation_GetViewingTime(&t, constellationSlot);
        setMonthSlot(((u8 *)&t)[4], 2);
        setDaySlot(((u8 *)&t)[3], 3);
        setNumberSlot(((u8 *)&t)[1], 5, 2, 0, 0);
        s32 h = 0x19;
        s32 m = ((u8 *)&t)[2];
        if (m > 0xc) {
            h = 0x1a;
            m -= 0xc;
        }
        if (m == 0) {
            m = 0xc;
        }
        setNumberSlot(m, 4, 2, 0, 0);
        msg[1] = h;
        _ZN15TalkWindowState17setSlotFromStringEiii(o, 8, &msg[1], (u8 *)"st_general");
        msg[0] = 8;
    } else {
        Constellation_Erase(constellationSlot);
        listRemaining = 0x10 - Constellation_CountFreeSlots();
        listStart = 0;
    }
    o->setNextMessage(msg, sSpNpcCelesteKey);
}

void SpNpcCelesteTalk::onConstellationNamed() {
    TalkWindowState *o = unk_3c;
    u8 v = 5;
    if (MenuCtrl_IsFinished()) {
        if (MenuCtrl_IsResultOk()) {
            ConstellationMsgString17 s;
            v = 0xb;
            Constellation_GetName(&s, constellationSlot);
            unk_3c->setSlot(0, &s);
        }
        o->setNextMessage(&v, sSpNpcCelesteKey);
    }
}

void SpNpcCelesteTalk::onConstellationRedrawn() {
    TalkWindowState *o = unk_3c;
    u8 v = 0x1d;
    if (MenuCtrl_IsResultOk()) {
        v = 0x38;
    } else {
        listRemaining = 0x10 - Constellation_CountFreeSlots();
        listStart = 0;
        v = 0x1d;
    }
    o->setNextMessage(&v, sSpNpcCelesteKey);
}

void SpNpcCelesteTalk::onConstellationRenamed() {
    TalkWindowState *o = unk_3c;
    u8 v = 5;
    if (MenuCtrl_IsFinished()) {
        if (MenuCtrl_IsResultOk()) {
            v = 0x3d;
            ConstellationMsgString17 s;
            Constellation_GetName(&s, constellationSlot);
            unk_3c->setSlot(0, &s);
        }
        o->setNextMessage(&v, sSpNpcCelesteKey);
    }
}

SpNpcCelesteTalk::SpNpcCelesteTalk() {}

SpNpcCelesteTalk::~SpNpcCelesteTalk() {}

void SpNpcCelesteTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    resultHandler = NULL;
    constellationSlot = Constellation_FindFreeSlot();
}

void SpNpcCelesteTalk::attachOwner(void *p) {
    vfunc_08();
    owner = (u8 *)p;
    listStart = 0;
    listRemaining = 0x10 - Constellation_CountFreeSlots();
}

void SpNpcCelesteTalk::setTopic(s32 v) {
    topic = v;
}

void SpNpcCelesteTalk::start(TalkStartMsg *out) {
    if (GameStart_IsActive()) {
        out->msgKey = (u8 *)"sp_etc_sequence4";
        out->msgIndex = 0x14;
        return;
    }
    if (topic == 5) {
        if (Talk_CheckAndSetPlayerFlag(2, 1) == 0) {
            if (owner[0x73a] == 0) {
                topic = 1;
            } else {
                topic = 0;
            }
        } else {
            if (owner[0x73a] == 0) {
                topic = 3;
            } else {
                topic = 2;
            }
        }
    }
    s32 t = topic;
    if (t == 4 && owner[0x73a] == 0) {
        if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
            if (Constellation_CountFreeSlots() < 0x10) {
                out->msgIndex = 0x13;
            } else {
                out->msgIndex = 0x10;
            }
        } else {
            if (Constellation_CountFreeSlots() < 0x10) {
                out->msgIndex = 0x14;
            } else {
                out->msgIndex = 1;
            }
        }
        out->msgKey = sSpNpcCelesteKey;
    } else if (t >= 0 && t < 5) {
        out->msgIndex = sSpNpcCelesteTopicMsgs[t].v;
        out->msgKey = sSpNpcCelesteTopicMsgs[topic].p;
    }
}

s32 SpNpcCelesteTalk::getFollowUpMenuMsg() {
    listRemaining = 0x10 - Constellation_CountFreeSlots();
    listStart = 0;
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (Constellation_CountFreeSlots() < 0x10) {
            return 0x27;
        }
        return 0x26;
    }
    if (Constellation_CountFreeSlots() < 0x10) {
        return 0x28;
    }
    return 0x29;
}
extern "C" u8 sSpNpcCelesteKey[] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'a', 's', 't', 'r', 'o', 0};

// Data order: this unit is placed object by object (see object_order.txt).

void SpNpcCelesteTalk::onMessageEnd() {
    if (GameStart_IsActive() == 0) {
        PlayerData_GetCurrent();
        nextMsg = 0xff;
        static Unk_ov046_0225aa0c_Row tbl[29] = {
            {0x00, &SpNpcCelesteTalk::announceNewConstellations},
            {0x04, &SpNpcCelesteTalk::showTelescopeMenu},
            {0x05, &SpNpcCelesteTalk::startNameEntry},
            {0x07, &SpNpcCelesteTalk::startConstellationEditor},
            {0x09, &SpNpcCelesteTalk::startNameEntry},
            {0x0b, &SpNpcCelesteTalk::reactToConstellationName},
            {0x0c, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x12, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x15, &SpNpcCelesteTalk::showConstellationList},
            {0x16, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x17, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x1a, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x1b, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x1d, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x1e, &SpNpcCelesteTalk::showConstellationList},
            {0x1f, &SpNpcCelesteTalk::showConstellationList},
            {0x21, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x2c, &SpNpcCelesteTalk::announceNewConstellations},
            {0x2d, &SpNpcCelesteTalk::announceNewConstellations},
            {0x2e, &SpNpcCelesteTalk::announceNewConstellations},
            {0x30, &SpNpcCelesteTalk::startStargazing},
            {0x32, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x33, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x3b, &SpNpcCelesteTalk::startRenameEntry},
            {0x3d, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x3e, &SpNpcCelesteTalk::showFollowUpMenu},
            {0x3f, &SpNpcCelesteTalk::showConstellationList},
            {0x40, &SpNpcCelesteTalk::showConstellationList},
            {0x41, &SpNpcCelesteTalk::showConstellationList},
        };
        s32 i = 0;
        u8 *p = &msgIndex;
        Unk_ov046_0225aa0c_Row *t = tbl;
        for (; (u32)i < 0x1d; i++) {
            u32 a = tbl[i].id;
            u32 b = *p;
            if (a == b) {
                (this->*t[i].f)();
            }
        }
        if (nextMsg != 0xff) {
            u8 v = nextMsg;
            unk_3c->setNextMessage(&v, sSpNpcCelesteKey);
        }
    }
}

void SpNpcCelesteTalk::announceNewConstellations() {
    s32 v = 0;
    if (Constellation_GetNewStatus(&v) == 0) {
        if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
            nextMsg = 0x2f;
        } else {
            nextMsg = 0x11;
        }
    } else {
        if (Constellation_GetNewStatus(&v) == 1) {
            ConstellationMsgString17 s;
            Constellation_GetName(&s, v);
            unk_3c->setSlot(7, &s);
            nextMsg = 0x39;
        } else {
            nextMsg = 0x3a;
        }
        Constellation_ClearNewFlags();
    }
}

void SpNpcCelesteTalk::showTelescopeMenu() {
    if (CommManager_isOnline(gCommManager) || *DebugVar_GetPtr(0, 0x4a) != 0) {
        if (Constellation_CountFreeSlots() < 0x10) {
            nextMsg = 0x13;
        } else {
            nextMsg = 0x10;
        }
    } else {
        if (Constellation_CountFreeSlots() < 0x10) {
            nextMsg = 0x14;
        } else {
            nextMsg = 1;
        }
    }
}

void SpNpcCelesteTalk::startConstellationEditor() {
    constellationSlot = Constellation_FindFreeSlot();
    if (constellationSlot >= 0) {
        setSubSceneKindArg(0x2e, (u8)constellationSlot, 0);
        openSubScene(3);
        setResultHandler(1);
    } else {
        nextMsg = 0x3e;
    }
}

void SpNpcCelesteTalk::reactToConstellationName() {
    s32 r = Random_GlobalBelow(0x65);
    if (r < 0x46) {
        nextMsg = getFollowUpMenuMsg();
    } else if (r < 0x55) {
        nextMsg = 0x32;
    } else {
        nextMsg = 0x33;
    }
}

void SpNpcCelesteTalk::showFollowUpMenu() {
    nextMsg = getFollowUpMenuMsg();
}

// ---- unit 2
void SpNpcCelesteTalk::showConstellationList() {
    openConstellationPage();
}

void SpNpcCelesteTalk::startNameEntry() {
    setSubSceneKind(0x12, 0);
    openSubScene(2);
    setResultHandler(2);
}

void SpNpcCelesteTalk::startRenameEntry() {
    setSubSceneKind(0x12, 0);
    openSubScene(2);
    setResultHandler(4);
}

void SpNpcCelesteTalk::startStargazing() {
    setSubSceneKind(0x2d, 0);
    openSubScene(2);
    setResultHandler(0);
}

void SpNpcCelesteTalk::onChoice() {
    s32 t = getChoiceList()->getResult();
    nextMsg = 0xff;
    static Unk_ov046_02259480_Ent tbl[26] = {
        {0x01, &SpNpcCelesteTalk::onTelescopeMenuChoice},
        {0x08, &SpNpcCelesteTalk::onViewingTimeChoice},
        {0x10, &SpNpcCelesteTalk::onStargazeMenuChoice},
        {0x13, &SpNpcCelesteTalk::onStargazeMenuChoice},
        {0x14, &SpNpcCelesteTalk::onFullMenuChoice},
        {0x15, &SpNpcCelesteTalk::onConstellationListChoice},
        {0x18, &SpNpcCelesteTalk::onMakeOrChangeChoice},
        {0x19, &SpNpcCelesteTalk::onEraseConfirmChoice},
        {0x1e, &SpNpcCelesteTalk::onConstellationListChoice},
        {0x1f, &SpNpcCelesteTalk::onConstellationListChoice},
        {0x20, &SpNpcCelesteTalk::func_ov046_022590a0},
        {0x23, &SpNpcCelesteTalk::onDiscardNewChoice},
        {0x24, &SpNpcCelesteTalk::func_ov046_0225904c},
        {0x25, &SpNpcCelesteTalk::onMakeOrChangeChoice},
        {0x26, &SpNpcCelesteTalk::onStargazeMenuChoice},
        {0x27, &SpNpcCelesteTalk::onStargazeMenuChoice},
        {0x28, &SpNpcCelesteTalk::onFullMenuChoice},
        {0x29, &SpNpcCelesteTalk::onTelescopeMenuChoice},
        {0x2a, &SpNpcCelesteTalk::onMakeOrChangeChoice},
        {0x2b, &SpNpcCelesteTalk::onMakeOrChangeChoice},
        {0x31, &SpNpcCelesteTalk::func_ov046_022592a4},
        {0x35, &SpNpcCelesteTalk::onLookOrTimesChoice},
        {0x38, &SpNpcCelesteTalk::onRenameChoice},
        {0x3f, &SpNpcCelesteTalk::onConstellationListChoice},
        {0x40, &SpNpcCelesteTalk::onConstellationListChoice},
        {0x41, &SpNpcCelesteTalk::onConstellationListChoice},
    };
    u32 i = 0;
    u8 *pe = &msgIndex;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 26) {
        goto loop;
    }
    if (nextMsg != 0xff) {
        u8 b = nextMsg;
        unk_3c->setNextMessage(&b, sSpNpcCelesteKey);
    }
}

void SpNpcCelesteTalk::onViewingTimeChoice(s32 a) {
    if (a == 0) {
        nextMsg = 9;
    } else {
        nextMsg = 0x23;
    }
}

void SpNpcCelesteTalk::onConstellationListChoice(s32 idx) {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    TalkWindowState *o = unk_3c;
    constellationSlot = listSlots[idx];
    if (constellationSlot >= 0) {
        u32 buf[9];
        _ZN24ConstellationMsgString17C1Ev(buf);
        Constellation_GetName(buf, constellationSlot);
        unk_3c->setSlot(6, buf);
        if (listMode == 0) {
            nextMsg = 0x19;
            listStart = 0;
        } else if (listMode == 1) {
            l.w[0] = 0;
            l.w[1] = 0;
            Constellation_GetViewingTime(&l.w, constellationSlot);
            setMonthSlot(((u8 *)l.w)[4], 2);
            setDaySlot(((u8 *)l.w)[3], 3);
            setNumberSlot(((u8 *)l.w)[1], 5, 2, 0, 0);
            s32 t4 = ((u8 *)l.w)[2];
            s32 r1 = 0x19;
            if (t4 > 0xc) {
                r1 = 0x1a;
                t4 -= 0xc;
            }
            if (t4 == 0) {
                t4 = 0xc;
            }
            l.msg = r1;
            _ZN15TalkWindowState17setSlotFromStringEiii(o, 8, &l.msg, (u8 *)"st_general");
            setNumberSlot(t4, 4, 2, 0, 0);
            nextMsg = 0x17;
        } else if (listMode == 2) {
            setSubSceneKindArg(0x2e, (u8)constellationSlot, 0);
            openSubScene(3);
            setResultHandler(3);
        }
        listMode = 0;
        _ZN24ConstellationMsgString17D1Ev(buf);
    } else {
        if (listRemaining == 0) {
            nextMsg = getFollowUpMenuMsg();
            if ((u8)(listMode + 0xff) <= 1) {
                if (Constellation_CountFreeSlots() < 0x10) {
                    if (listMode == 1) {
                        nextMsg = 0x16;
                    } else {
                        nextMsg = 0x1d;
                    }
                }
            }
            listMode = 0;
        } else {
            if (msgIndex == 0x15) {
                goto set3f;
            }
            if (msgIndex == 0x1e) {
                goto set3f;
            }
            if (msgIndex == 0x1f) {
            set3f:
                nextMsg = 0x3f;
            } else if (msgIndex == 0x3f) {
                nextMsg = 0x40;
            } else if (msgIndex == 0x40) {
                nextMsg = 0x41;
            }
        }
    }
}

void SpNpcCelesteTalk::func_ov046_022592a4(s32 a) {
    if (a == 0) {
        nextMsg = 7;
    } else if (Constellation_CountFreeSlots() < 0x10) {
        nextMsg = 0x2a;
    } else {
        nextMsg = getFollowUpMenuMsg();
    }
}

void SpNpcCelesteTalk::onDiscardNewChoice(s32 a) {
    if (a == 0) {
        if (constellationSlot >= 0) {
            Constellation_Erase(constellationSlot);
        }
        listRemaining = 0x10 - Constellation_CountFreeSlots();
        listStart = 0;
        nextMsg = 0x21;
    } else {
        nextMsg = 9;
    }
}

void SpNpcCelesteTalk::onTelescopeMenuChoice(s32 a) {
    if (a == 0) {
        if (Constellation_CountFreeSlots() < 0x10) {
            nextMsg = 0x18;
        } else {
            nextMsg = 7;
        }
    } else if (a == 1) {
        nextMsg = 0x30;
    } else {
        nextMsg = 2;
    }
}

void SpNpcCelesteTalk::onFullMenuChoice(s32 a) {
    listRemaining = 0x10 - Constellation_CountFreeSlots();
    listStart = 0;
    if (a == 0) {
        if (Constellation_CountFreeSlots() < 0x10) {
            nextMsg = 0x18;
        } else {
            nextMsg = 7;
        }
    } else if (a == 1) {
        nextMsg = 0x35;
    } else if (a == 2) {
        listRemaining = 0x10 - Constellation_CountFreeSlots();
        u8 z = 0;
        listStart = z;
        nextMsg = 0x1f;
        listMode = z;
    } else {
        nextMsg = 2;
    }
}

void SpNpcCelesteTalk::onEraseConfirmChoice(s32 a) {
    u32 buf[9];
    listStart = 0;
    if (a == 0) {
        if (constellationSlot >= 0) {
            _ZN24ConstellationMsgString17C1Ev(buf);
            Constellation_GetName(buf, constellationSlot);
            unk_3c->setSlot(6, buf);
            Constellation_Erase(constellationSlot);
            _ZN24ConstellationMsgString17D1Ev(buf);
        }
        listRemaining = 0x10 - Constellation_CountFreeSlots();
        listStart = 0;
        nextMsg = 0x1b;
    } else {
        nextMsg = getFollowUpMenuMsg();
    }
}

void SpNpcCelesteTalk::onMakeOrChangeChoice(s32 a) {
    listRemaining = 0x10 - Constellation_CountFreeSlots();
    listStart = 0;
    if (a == 0) {
        if (Constellation_CountFreeSlots() == 0) {
            nextMsg = 0x3e;
        } else {
            nextMsg = 7;
        }
    } else if (a == 1) {
        listMode = 2;
        nextMsg = 0x1e;
    } else {
        nextMsg = 0xc;
    }
}

void SpNpcCelesteTalk::onStargazeMenuChoice(s32 a) {
    if (a == 0) {
        if (Constellation_CountFreeSlots() < 0x10) {
            nextMsg = 0x35;
        } else {
            nextMsg = 0x30;
        }
    } else {
        nextMsg = 2;
    }
}

void SpNpcCelesteTalk::func_ov046_022590a0(s32 a) {
    if (a == 0) {
        nextMsg = 7;
    } else {
        nextMsg = 0xc;
    }
}

void SpNpcCelesteTalk::func_ov046_0225904c(s32 a) {
    listRemaining = 0x10 - Constellation_CountFreeSlots();
    listStart = 0;
    if (a == 0) {
        listMode = 2;
        nextMsg = 0x1e;
    } else if (Constellation_CountFreeSlots() < 0x10) {
        nextMsg = 0x25;
    } else {
        nextMsg = getFollowUpMenuMsg();
    }
}

void SpNpcCelesteTalk::onLookOrTimesChoice(s32 a) {
    if (a == 0) {
        nextMsg = 0x30;
    } else if (a == 1) {
        listMode = 1;
        nextMsg = 0x15;
    } else {
        nextMsg = 0x16;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcCelesteTalk

void SpNpcCelesteTalk::onRenameChoice(s32 a) {
    if (a == 0) {
        nextMsg = 0x3b;
    } else {
        nextMsg = getFollowUpMenuMsg();
    }
}

BOOL SpNpcCeleste::vfunc_48() {
    if (NpcTalkCtrl_isBusy(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcCeleste::vfunc_58() {
    return NpcTalkCtrl_isBusy(&talkCtrl) == 0 ? TRUE : FALSE;
}

void SpNpcCeleste::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
    case 1:
        talk.vfunc_08();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(3);
        break;
    case 8:
        changeAct(1);
        break;
    }
}

BOOL SpNpcCeleste::isPlayerAtTelescope() {
    Unk_ov046_02258e68_Vec v0;
    Unk_ov046_02258e68_Vec v1;
    u32 out;
    u32 buf[3];
    BOOL result;
    Unk_ov046_02258e68_Actor *p = PlayerActor_GetActor(4);
    BOOL r6;
    if (Unk_ov046_02258e68_Both()) {
        r6 = TRUE;
    } else {
        r6 = FALSE;
    }
    if (p == 0 || NpcTalkCtrl_isBusy(&talkCtrl) != 0) {
        talk.setTopic(5);
        result = FALSE;
        goto end;
    }
    Unk_ov046_02258e68_Vec *pv = &p->position;
    v0.x = p->position.x;
    v0.y = pv->y;
    v0.z = pv->z;
    v1.x = p->position.x;
    v1.y = pv->y;
    v1.z = pv->z;
    v1.x = 0x10800;
    v1.z = 0x17000;
    s32 d = func_020e9650(&v0, &v1);
    s32 a = p->rotY;
    if (d < 0x1000) {
        a = a & 0xffff;
        if (a < 0x6000 || a > 0xa000) {
            talk.setTopic(5);
            result = FALSE;
            goto end;
        }
        if (r6 == 0) {
            if ((gPad[1] & 1) != 0) {
                result = TRUE;
                goto end;
            }
        }
        if (r6 != 0) {
            if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), &buf, &out, 0) != 0) {
                if (out == 0x16) {
                    result = TRUE;
                    goto end;
                }
            }
        }
    }
    result = FALSE;
end:
    return result;
}

// ---- unit 1
BOOL SpNpcCeleste::tryStartTelescopeTalk() {
    if (isPlayerAtTelescope()) {
        talk.setTopic(4);
        Camera_LockFocusYaw();
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

