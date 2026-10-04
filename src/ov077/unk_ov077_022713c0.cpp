// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"


struct Unk_0201bc1c;
class SpNpcResetti;
class SpNpcResettiTalk;


struct ChoiceList {
    s32 getResult();
    void *getSliderValue();
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData14getSpNpcRecordEv(void *p);
s32 _ZN17PlayerSpNpcRecord13getResetCountEv(void *p);
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 a, u8 *b, void *c);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1);
void _ZN14NpcMoveAnimSet11setWalkAnimEi(void *self, s32 a);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *self, s32 a);
void TalkRequestFlags_ClearResetti();
void TalkRequestFlags_SetResetti();
s32 func_020e77cc(void *p, u32 lo, u32 hi);
u32 Random_GlobalBelow(u32 n);
void func_02003ddc(void *p, u32 a, u32 b, u32 c);
void Bgm_Release(s32 a);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Bgm_ReleasePriority(s32 a);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
s32 func_020e7518(void *p);
BOOL MenuCtrl_IsFinished();
BOOL MenuCtrl_IsResultOk();
s32 PlayerActor_GetCharacter(s32 v);
u16 _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
s32 Effect_Create(s32 a, void *b, s32 c, s32 d);
void Effect_End(s32 h);
BOOL TalkRequest_SetTargetDone(void *p);
void *TownSessionState_Get();
void *TownSessionState_GetResettiFlag(void *p);
void _ZN16ResettiVisitFlag3setEj(void *p, u32 v);
s32 ProcBase_RequestDelete(void *p);
s32 FieldPos_ToUnit(s32 *x, s32 *y, void *v);
s32 FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
void TalkRequest_AddPlayerTalk7(void *p, s32 a);
s32 BlockMap_FindItemAllAttr(void *g, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g1, s32 g2);
s32 FieldUnit_FromBlockUnit(s32 *x, s32 *y, s32 a, s32 b, s32 c, s32 d);
void PlayerActor_LocalPlayAnim99(void *p);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
extern u16 data_020c6cc8;
extern u8 gFieldSceneKind;
extern void *gSceneBlockMap;
extern u32 __ptmf_null[];
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
    virtual void onSignalTag(s32 a);
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
    virtual void onSignalTag(s32 a);
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
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
    void openSubScene(s32 a);
    void requestReopenWindow();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

struct Unk_ov077_022717e0_Rec {
    void (SpNpcResettiTalk::*fn)();
    u32 pad;
};

class SpNpcResettiTalk : public SpNpcTalkRequest {
public:
    SpNpcResettiTalk();
    virtual ~SpNpcResettiTalk();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag(s32 a);
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone();

    void attachOwner(SpNpcResetti *owner);
    void scriptCheckApology();
    void scriptWaitForTip();
    void setScript(s32 state);

    s32 script;
    u8 waitTimer;
    u8 pad_b1[3];
    SpNpcResetti *ownerNpc;
    u8 bgmSwitched;
    u8 pad_b9[3];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_ov077_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};
union Unk_ov077_Word {
    u32 w;
    Unk_ov077_Bits b;
};
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    Unk_ov077_Word curFrame;
    u8 pad_a8[4];
    s32 frameStep;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);


class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
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
    void clearTalkStartMode();
    void setInteractionRange(s32 a);
    u8 pad_50[0x5c - 0x50];
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
    u16 rotY;
    u8 pad_90[4];
    u16 moveAngleY;
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

struct Unk_ov077_02271a84_Pt {
    s32 x, y;
    Unk_ov077_02271a84_Pt(s32 a, s32 b) { x = a; y = b; }
};

class SpNpcResetti : public SpNpcActor {
public:
    SpNpcResetti() : houseUnitX(0), houseUnitZ(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
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
    void changeAct(s32 state);
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();

    s32 unk_654;
    SpNpcResettiTalk talk;
    u8 lastApologyPhrase;
    u8 pad_715[3];
    s32 houseUnitX;
    s32 houseUnitZ;
    s32 effectHandle;
};

struct Unk_ov077_02271d18_Ent {
    BOOL (SpNpcResetti::*enter)();
    BOOL (SpNpcResetti::*exit)();
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" {
extern const u8 sSpNpcResettiOffenseMsgs[5];
extern u8 sSpNpcResettiKey[13];
extern u8 *sSpNpcResettiMsgKey;
extern u8 sSpNpcResettiModelPath[23];
extern u8 sSpNpcResettiTexturePath[27];
extern Unk_ov077_022717e0_Rec sSpNpcResettiTalkScripts[3];
extern Unk_ov077_02271d18_Ent sSpNpcResettiActTable[6];
SpNpcResetti *SpNpcResetti_Create();
}

u8 sSpNpcResettiKey[13] = {'s','p','_','n','p','c','_','r','e','s','e','t',0};
const u8 sSpNpcResettiOffenseMsgs[5] = {0x00, 0x04, 0x09, 0x13, 0x1b};
u8 *sSpNpcResettiMsgKey = sSpNpcResettiKey;
u8 sSpNpcResettiModelPath[23] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','m','o','l','.','n','s','b','m','d',0};
u8 sSpNpcResettiTexturePath[27] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','m','o','l','_','t','e','x','.','n','s','b','t','x',0};

struct Unk_ov077_SceneEntry {
    SpNpcResetti *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
Unk_ov077_SceneEntry sSpNpcResettiProfile = {SpNpcResetti_Create, 0x65, 0x6b, 2, 0x5000, 0x5000, 0x3e800};

extern "C" {
void _ZN12SpNpcResetti9mainAct04Ev();
void _ZN16SpNpcResettiTalk16scriptWaitForTipEv();
void _ZN12SpNpcResetti10setupAct00Ev();
void _ZN12SpNpcResetti9mainAct00Ev();
void _ZN12SpNpcResetti10setupAct01Ev();
void _ZN12SpNpcResetti9mainAct01Ev();
void _ZN12SpNpcResetti10setupAct02Ev();
void _ZN12SpNpcResetti9mainAct02Ev();
void _ZN12SpNpcResetti10setupAct03Ev();
void _ZN12SpNpcResetti10setupAct04Ev();
void _ZN16SpNpcResettiTalk18scriptCheckApologyEv();
void _ZN12SpNpcResetti10setupAct05Ev();
void _ZN12SpNpcResetti9mainAct03Ev();
void _ZN12SpNpcResetti9mainAct05Ev();
}

typedef BOOL (SpNpcResetti::*Unk_ov077_Fn)();
typedef void (SpNpcResettiTalk::*Unk_ov077_RFn)();

void *data_ov077_02272104[2] = {(void *)_ZN12SpNpcResetti9mainAct01Ev, 0};
void *data_ov077_022720cc[2] = {(void *)_ZN12SpNpcResetti10setupAct03Ev, 0};
void *data_ov077_022720dc[2] = {(void *)_ZN12SpNpcResetti10setupAct00Ev, 0};
void *data_ov077_0227212c[2] = {(void *)_ZN12SpNpcResetti9mainAct00Ev, 0};
void *data_ov077_02272124[2] = {(void *)_ZN12SpNpcResetti10setupAct01Ev, 0};
void *data_ov077_022720fc[2] = {(void *)_ZN16SpNpcResettiTalk18scriptCheckApologyEv, 0};
void *data_ov077_02272114[2] = {(void *)_ZN12SpNpcResetti10setupAct02Ev, 0};
void *data_ov077_0227210c[2] = {(void *)_ZN12SpNpcResetti9mainAct02Ev, 0};
void *data_ov077_022720ec[2] = {(void *)_ZN12SpNpcResetti9mainAct04Ev, 0};
void *data_ov077_022720c4[2] = {(void *)_ZN12SpNpcResetti10setupAct04Ev, 0};
void *data_ov077_022720d4[2] = {(void *)_ZN16SpNpcResettiTalk16scriptWaitForTipEv, 0};
void *data_ov077_0227211c[2] = {(void *)_ZN12SpNpcResetti10setupAct05Ev, 0};
void *data_ov077_022720e4[2] = {(void *)_ZN12SpNpcResetti9mainAct03Ev, 0};
void *data_ov077_022720f4[2] = {(void *)_ZN12SpNpcResetti9mainAct05Ev, 0};

Unk_ov077_022717e0_Rec sSpNpcResettiTalkScripts[3] = {
    {NULL, 0},
    {*(Unk_ov077_RFn *)data_ov077_022720fc, 0},
    {*(Unk_ov077_RFn *)data_ov077_022720d4, 1},
};

#define T(a) *(Unk_ov077_Fn *)data_ov077_##a
Unk_ov077_02271d18_Ent sSpNpcResettiActTable[6] = {
    {T(022720dc), T(0227212c)},
    {T(02272124), T(02272104)},
    {T(02272114), T(0227210c)},
    {T(022720cc), T(022720e4)},
    {T(022720c4), T(022720ec)},
    {T(0227211c), T(022720f4)},
};

struct Unk_ov077_02271a84_V3 {
    s32 x, y, z;
};
struct Unk_ov077_02271a84_Pl {
    u8 pad_00[0x5c];
    Unk_ov077_02271a84_V3 pos;
};

static inline BOOL Unk_ov077_02271bf4_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

SpNpcResetti *SpNpcResetti_Create() {
    return new SpNpcResetti();
}

BOOL SpNpcResetti::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    lastApologyPhrase = 0xff;
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0xfc);
    _ZN14NpcMoveAnimSet11setWalkAnimEi(&moveAnimSet, 0xfc);
    collider.shadowEnabled = 0;
    collider.collisionEnabled = 0;
    return TRUE;
}

BOOL SpNpcResetti::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    collider.groups |= 2;
    setInteractionRange(0);
    changeAct(3);
    clearTalkStartMode();
    TalkRequestFlags_SetResetti();
    return TRUE;
}

BOOL SpNpcResetti::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    TalkRequestFlags_ClearResetti();
    return TRUE;
}

BOOL SpNpcResetti::onDraw() {
    if (unk_654 != 3) {
        NpcActor::onDraw();
    }
    return TRUE;
}

u8 *SpNpcResetti::getTexturePath() { return sSpNpcResettiTexturePath; }

u8 *SpNpcResetti::getModelPath() { return sSpNpcResettiModelPath; }

BOOL SpNpcResetti::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcResettiActTable[unk_654].exit != NULL) {
        r = (this->*sSpNpcResettiActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcResetti::changeAct(s32 state) {
    BOOL r = TRUE;
    if (sSpNpcResettiActTable[state].enter != NULL) {
        r = (this->*sSpNpcResettiActTable[state].enter)();
    }
    if (r) {
        unk_654 = state;
    }
}

BOOL SpNpcResetti::setupAct00() { return TRUE; }

BOOL SpNpcResetti::mainAct00() { return TRUE; }

BOOL SpNpcResetti::setupAct01() {
    void *p = talk.func_02015aac();
    u16 v = 0;
    if (p != NULL) {
        v = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, v, 0);
    return TRUE;
}

BOOL SpNpcResetti::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0) {
        return TRUE;
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcResetti::setupAct02() { return TRUE; }

BOOL SpNpcResetti::mainAct02() { return TRUE; }

BOOL SpNpcResetti::setupAct03() {
    void *g;
    s32 a, b, c, d;
    u16 u0, u1;
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0xfd, 1, 0, 0);
    if (Unk_ov077_02271bf4_IsZero(gFieldSceneKind)) {
        g = gSceneBlockMap;
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        if (g != NULL) {
            u0 = 0x5014;
            u1 = 0x501a;
            if (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &u0, &u1, 1, 0)) {
                FieldUnit_FromBlockUnit(&houseUnitX, &houseUnitZ, a, b, c, d);
            }
        }
    }
    return TRUE;
}

BOOL SpNpcResetti::mainAct03() {
    Unk_ov077_02271a84_Pl *pl = (Unk_ov077_02271a84_Pl *)PlayerActor_GetCharacter(4);
    s32 dx, dz;
    s32 ax, az;
    Unk_ov077_02271a84_V3 v;
    s32 i;
    if (pl == NULL) {
        ProcBase_RequestDelete(this);
        return TRUE;
    }
    model.frameStep = 0;
    model.curFrame.w = 0;
    {
        Unk_ov077_02271a84_V3 *pv = &pl->pos;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
    }
    ax = 0;
    az = 0;
    FieldPos_ToUnit(&ax, &az, &v);
    dx = ax - houseUnitX;
    dz = az - houseUnitZ;
    {
        u16 w = _ZN8NpcActor10getAngleToEPS_(this, (void *)pl);
        rotY = w;
        moveAngleY = w;
    }
    static Unk_ov077_02271a84_Pt tbl1[5] = {
        Unk_ov077_02271a84_Pt(0, 3), Unk_ov077_02271a84_Pt(-1, 3), Unk_ov077_02271a84_Pt(-1, 2),
        Unk_ov077_02271a84_Pt(1, 3), Unk_ov077_02271a84_Pt(1, 2)
    };
    static Unk_ov077_02271a84_Pt tbl2[2] = { Unk_ov077_02271a84_Pt(-2, 2), Unk_ov077_02271a84_Pt(2, 2) };
    i = 0;
    Unk_ov077_02271a84_Pt pb = tbl2[1];
    Unk_ov077_02271a84_Pt pa = tbl2[0];
    for (; i < 5; i++) {
        BOOL hit = FALSE;
        s32 tx = tbl1[i].x;
        if (tx == dx) {
            s32 ty = tbl1[i].y;
            if (ty == dz) {
                hit = TRUE;
            }
        }
        if (hit) {
            s32 x, z;
            if (i <= 2) {
                x = pb.x + houseUnitX;
                z = pb.y + houseUnitZ;
            } else {
                x = pa.x + houseUnitX;
                z = pa.y + houseUnitZ;
            }
            FieldPos_FromUnitCenter(&position, x, z);
            TalkRequest_AddPlayerTalk7(this, 0);
        }
    }
    return TRUE;
}

BOOL SpNpcResetti::setupAct04() {
    model.frameStep = 0x1000;
    effectHandle = Effect_Create(0x30, &position, 0, 0);
    func_02003ddc(&seEmitter, 0x7e6, 0x7f, 0);
    collider.collisionEnabled = 1;
    Bgm_RequestSilence(0x17, 0xf, 0);
    return TRUE;
}

BOOL SpNpcResetti::mainAct04() {
    s32 r = PlayerActor_GetCharacter(4);
    u16 v = _ZN8NpcActor10getAngleToEPS_(this, (void *)r);
    rotY = v;
    moveAngleY = v;
    if ((s16)model.curFrame.b.mid == 0xc) {
        Effect_End(effectHandle);
        effectHandle = -1;
    }
    if (animCtrl.isPlayingAnim(0xfd, &moveAnimSet)) {
        if (actionCtrl.isActionDone()) {
            if (effectHandle != -1) {
                Effect_End(effectHandle);
                effectHandle = -1;
            }
            changeAct(1);
            return TRUE;
        }
    }
    return TRUE;
}

BOOL SpNpcResetti::setupAct05() {
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0xfe, 1, data_020c6cc8, 0);
    func_02003ddc(&seEmitter, 0x7e7, 0x7f, 0);
    return TRUE;
}

BOOL SpNpcResetti::mainAct05() {
    s32 r = PlayerActor_GetCharacter(4);
    s32 f;
    u16 v = _ZN8NpcActor10getAngleToEPS_(this, (void *)r);
    rotY = v;
    moveAngleY = v;
    f = (s16)model.curFrame.b.mid;
    if (f == 2) {
        effectHandle = Effect_Create(0x30, &position, 0, 0);
    }
    if (f == 0xc) {
        if (effectHandle != -1) {
            Effect_End(effectHandle);
            effectHandle = -1;
        }
    }
    if (animCtrl.isPlayingAnim(0xfe, &moveAnimSet)) {
        if (actionCtrl.isActionDone()) {
            TalkRequest_SetTargetDone(this);
            _ZN16ResettiVisitFlag3setEj(TownSessionState_GetResettiFlag(TownSessionState_Get()), 0);
            ProcBase_RequestDelete(this);
            if (effectHandle != -1) {
                Effect_End(effectHandle);
                effectHandle = -1;
            }
            return TRUE;
        }
    }
    return TRUE;
}

void SpNpcResettiTalk::update() {
    s32 i = script * 12;
    if (((u8 *)&sSpNpcResettiTalkScripts[0].pad)[i] != 0) {
        if (((Unk_ov077_022717e0_Rec *)((u8 *)sSpNpcResettiTalkScripts + i))->fn != NULL) {
            (this->*((Unk_ov077_022717e0_Rec *)((u8 *)sSpNpcResettiTalkScripts + i))->fn)();
        }
    }
}

void SpNpcResettiTalk::onTaskDone() {
    s32 i = script * 12;
    if (((u8 *)&sSpNpcResettiTalkScripts[0].pad)[i] == 0) {
        if (((Unk_ov077_022717e0_Rec *)((u8 *)sSpNpcResettiTalkScripts + i))->fn != NULL) {
            (this->*((Unk_ov077_022717e0_Rec *)((u8 *)sSpNpcResettiTalkScripts + i))->fn)();
            setScript(0);
        }
    }
}

void SpNpcResettiTalk::setScript(s32 state) {
    script = state;
    waitTimer = 0x5a;
}

void SpNpcResettiTalk::scriptWaitForTip() {
    if (func_020e7518(&waitTimer) == 0) {
        u8 v = 0x10;
        unk_3c->setNextMessage(&v, sSpNpcResettiMsgKey);
        requestReopenWindow();
        setScript(0);
    }
}

void SpNpcResettiTalk::scriptCheckApology() {
    TalkWindowState *m = unk_3c;
    if (MenuCtrl_IsFinished()) {
        u8 v = 0x18;
        if (MenuCtrl_IsResultOk()) {
            if (Random_GlobalBelow(2) == 0) {
                v = 0x1a;
            } else {
                v = 0x19;
            }
        }
        m->setNextMessage(&v, sSpNpcResettiMsgKey);
        setScript(0);
    }
}

SpNpcResettiTalk::SpNpcResettiTalk() {}

SpNpcResettiTalk::~SpNpcResettiTalk() {}

void SpNpcResettiTalk::onTalkEnd() {
    if (bgmSwitched == 0) {
        Bgm_ReleasePriority(0x17);
        Bgm_Request(0x18, 0x43, 0x7f, 1);
        bgmSwitched = 1;
    }
}

void SpNpcResettiTalk::onWindowClose() {
    switch (msgIndex) {
    case 3:
    case 8:
    case 0x12:
    case 0x1a:
    case 0x23:
        Bgm_Release(0x43);
        Bgm_RequestSilence(0x17, 0x16, 0x20);
        break;
    }
}

void SpNpcResettiTalk::attachOwner(SpNpcResetti *owner) {
    vfunc_08();
    ownerNpc = owner;
}

void SpNpcResettiTalk::onSignalTag(s32 a) {
    switch (a) {
    case 0:
        PlayerActor_LocalPlayAnim99(this);
        break;
    case 1:
        func_02003ddc(&ownerNpc->seEmitter, 0x7f4, 0x7f, 0);
        break;
    case 2:
        func_02003ddc(&ownerNpc->seEmitter, 0x7f5, 0x7f, 0);
        break;
    }
}

void SpNpcResettiTalk::start(TalkStartMsg *out) {
    s32 t = _ZN17PlayerSpNpcRecord13getResetCountEv(_ZN10PlayerData14getSpNpcRecordEv(PlayerData_GetCurrent())) - 1;
    if (t < 0) {
        t = 0;
    } else if (t > 5) {
        t = 5;
    }
    if (t == 5) {
        t = Random_GlobalBelow(4) + 1;
    }
    if (t < 0) {
        t = 0;
    } else if (t > 4) {
        t = 4;
    }
    out->msgIndex = sSpNpcResettiOffenseMsgs[t];
    out->msgKey = (const char *)sSpNpcResettiMsgKey;
}

void SpNpcResettiTalk::onMessageStart() {
    if (msgIndex == 0x17) {
        u8 n = Random_GlobalBelow(0x10);
        u8 c;
        if (n == ownerNpc->lastApologyPhrase) {
            n = n + 1;
            if (n == 0x10) {
                n = 0;
            }
        }
        ownerNpc->lastApologyPhrase = n;
        c = ownerNpc->lastApologyPhrase;
        _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &c, (void *)"st_general");
    }
}

void SpNpcResettiTalk::onMessageEnd() {
    switch (msgIndex) {
    case 0xf:
        unk_3c->openMode = 0;
        setScript(2);
        break;
    case 0x17:
        setSubSceneKindArg(0xc, ownerNpc->lastApologyPhrase, 0);
        openSubScene(3);
        setScript(1);
        break;
    }
}

void SpNpcResettiTalk::onChoice() {
    u8 cmd;
    s32 r = getChoiceList()->getResult();
    cmd = 0xff;
    switch (msgIndex) {
    case 0xb:
        if (r == 0) {
            cmd = Random_GlobalBelow(2) == 0 ? 0xe : 0xd;
        } else {
            cmd = Random_GlobalBelow(2) == 0 ? 0xe : 0xc;
        }
        break;
    case 0x1f:
    case 0x20:
    case 0x21: {
        u32 n = Random_GlobalBelow(0xd);
        if (func_020e77cc(getChoiceList()->getSliderValue(), n, n + 5) != 0) {
            cmd = 0x22;
        } else {
            cmd = Random_GlobalBelow(2) == 0 ? 0x20 : 0x21;
        }
        break;
    }
    }
    if (cmd != 0xff) {
        u8 buf = cmd;
        unk_3c->setNextMessage(&buf, sSpNpcResettiMsgKey);
    }
}

BOOL SpNpcResetti::vfunc_48() { return TRUE; }

void SpNpcResetti::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        talk.vfunc_08();
        talk.func_02015ab0((u32)getPlayerActor(4));
        changeAct(4);
        break;
    case 8:
        changeAct(2);
        break;
    }
}

