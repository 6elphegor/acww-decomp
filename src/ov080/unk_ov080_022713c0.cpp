// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define NpcAnimCtrl_playAnim _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define PlayerData_isUsed _ZN10PlayerData6isUsedEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define unk_618_func_020141b4 _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define unk_618_func_02014220 _ZN11NpcTalkCtrl6isBusyEv
#define unk_564_func_020196b4 _ZN13NpcActionCtrl13requestActionEjiiissiitt

class SpNpcTortimer;
class SpNpcTortimerTalk;

extern "C" {
void *PlayerData_GetCurrent();
u32 Random_GlobalBelow(u32 n);
BOOL TalkRequest_SetTargetDone(void *p);
void TalkRequestFlags_SetEventWarpBlock();
BOOL Catalog_HasAllFish();
BOOL Catalog_HasAllInsects();
void ThreeLayerAnimModel_AssignJointsToLayer2(void *self, s32 a, s32 b);
void NpcAnimCtrl_playAnim(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Unk_02014420_requestTakeItem(void *self, u16 *p, u32 a, u32 b, u32 c);
BOOL unk_618_func_02014220(void *self);
void unk_618_func_020141b4(void *self, u32 a, u32 b, u32 c);
void unk_564_func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
s32 ChoiceList_getResult();
s32 Unk_02097ff4_testFlag(void *p, u32 a);
void Unk_02097ff4_setFlag(void *p, u32 a);
BOOL Pocket_AddItem(u16 *p, u32 a);
void Pocket_RemoveItem(s32 a);
s32 Pocket_FindItem(u16 *p);
s32 Pocket_FindEmpty();
void *PlayerData_GetResident(void *tbl, s32 i);
BOOL PlayerData_isUsed(void *p);
extern u16 data_020c6cc8;
extern u8 gSavePlayers[];
extern u8 sSpNpcTortimerModelPath[];
extern u8 sSpNpcTortimerTexturePath[];
}


struct TalkStartMsg;

// Chain for the vtable of SpNpcTortimerTalk: slot owners are ActorTalkRequest (root, declares every slot),
// TalkMsgRequest and Unk_020d7710 (override by name; 7710's names are shifted by one slot in symbols.txt).
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
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(TalkStartMsg *out);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
    void *func_02015aac();
    void getChoiceList();
    void setItemNameSlot(u32 a, u32 b, u32 c);
    void func_02015ab0(u32 a);
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x1d];
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
    virtual void onTaskDone();
    void requestGiveItem(u16 *p, u32 a, u32 b, u32 c);
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};


class SpNpcTortimerTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerTalk();
    virtual ~SpNpcTortimerTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimer *owner);

    SpNpcTortimer *ownerNpc;
    s32 massageChairSlot;
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
    void requestAction(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;

class Actor : public ProcBase {
public:
    BOOL vfunc_14(s32 status);
    BOOL vfunc_20(u32 status);
    BOOL preDraw();
    BOOL postDraw(s32 status);
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_50[0x5c - 0x50];
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[0xea - 0x96];
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 a);
    BOOL onExecute();
    BOOL onDraw();
    BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
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
    u32 getPlayerActor(u32 a);
    BOOL getAngleTo(NpcActor *p);

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
    virtual void getName(u32 a);
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

class SpNpcTortimer : public SpNpcActor {
public:
    SpNpcTortimer() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcTortimerTalk talk;
};

struct Unk_ov080_022718c0_Ent {
    BOOL (SpNpcTortimer::*enter)();
    BOOL (SpNpcTortimer::*exit)();
};

Unk_ov080_022718c0_Ent sSpNpcTortimerActTable[3] = {
    {&SpNpcTortimer::setupAct00, &SpNpcTortimer::mainAct00},
    {&SpNpcTortimer::setupAct01, &SpNpcTortimer::mainAct01},
    {NULL, &SpNpcTortimer::mainAct02},
};

struct Unk_ov080_SceneEntry {
    SpNpcTortimer *(*factory)();
    u16 a;
    u16 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
};

extern "C" SpNpcTortimer *SpNpcTortimer_Create();

extern "C" {
u8 sSpNpcTortimerTexturePath[27] = "npc_sp/model/ttl_tex.nsbtx";
u8 sSpNpcTortimerModelPath[23] = "npc_sp/model/ttl.nsbmd";
Unk_ov080_SceneEntry sSpNpcTortimerProfile = {SpNpcTortimer_Create, 0x56, 0x5d, 2, 0x5000, 0x5000, 0x3e800};
}



struct Unk_ov080_02271648_Buf {
    u8 t[2];
    u16 v[8];
};

struct Unk_ov080_02271478_Buf {
    u8 t;
    u8 pad_01;
    u16 v;
};

extern "C" SpNpcTortimer *SpNpcTortimer_Create() {
    return new SpNpcTortimer();
}

BOOL SpNpcTortimer::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimer::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    NpcAnimCtrl_playAnim(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    if (Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 1) == 0) {
        TalkRequestFlags_SetEventWarpBlock();
    }
    return TRUE;
}

BOOL SpNpcTortimer::vfunc_0c() {
    if (SpNpcActor::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

u8 *SpNpcTortimer::getTexturePath() { return sSpNpcTortimerTexturePath; }

u8 *SpNpcTortimer::getModelPath() { return sSpNpcTortimerModelPath; }

BOOL SpNpcTortimer::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimer::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimer::setupAct00() {
    unk_564_func_020196b4(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimer::mainAct00() { return TRUE; }

BOOL SpNpcTortimer::setupAct01() {
    void *p = talk.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = getAngleTo((NpcActor *)p);
    }
    unk_618_func_020141b4(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimer::mainAct01() {
    if (unk_618_func_02014220(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimer::mainAct02() { return TRUE; }

SpNpcTortimerTalk::SpNpcTortimerTalk() {}

SpNpcTortimerTalk::~SpNpcTortimerTalk() {}

void SpNpcTortimerTalk::attachOwner(SpNpcTortimer *owner) {
    vfunc_08();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerTalk::start(TalkStartMsg *out) {
    void *g = PlayerData_GetCurrent();
    if (Unk_02097ff4_testFlag(g, 1)) {
        out->msgKey = "sp_etc_sequence5_2";
        if (Unk_02097ff4_testFlag(g, 0xd) == 0) {
            out->msgIndex = 0;
            Unk_02097ff4_setFlag(g, 0xd);
        } else {
            out->msgIndex = Random_GlobalBelow(4) + 3;
        }
        Unk_02097ff4_setFlag(g, 0xa);
    } else {
        if (massageChairSlot == -1) {
            u16 v = 0x37e0;
            massageChairSlot = Pocket_FindItem(&v);
            if (massageChairSlot >= 0) {
                out->msgKey = "sp_npc_turtle";
                out->msgIndex = 0;
                return;
            }
        }
        out->msgKey = "sp_npc_turtle7";
        if (Unk_02097ff4_testFlag(g, 0x21) == 0 && Catalog_HasAllFish()) {
            out->msgIndex = 0;
            if (Pocket_FindEmpty() < 0) {
                out->msgIndex = 9;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(gSavePlayers, i);
                    if (p != NULL && PlayerData_isUsed(p) && p != g && Unk_02097ff4_testFlag(p, 0x21)) {
                        out->msgIndex = 2;
                        break;
                    }
                }
            }
        } else if (Unk_02097ff4_testFlag(g, 0x22) == 0 && Catalog_HasAllInsects()) {
            out->msgIndex = 3;
            if (Pocket_FindEmpty() < 0) {
                out->msgIndex = 0xa;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(gSavePlayers, i);
                    if (p != NULL && PlayerData_isUsed(p) && p != g && Unk_02097ff4_testFlag(p, 0x22)) {
                        out->msgIndex = 5;
                        break;
                    }
                }
            }
        } else {
            out->msgIndex = Random_GlobalBelow(3) + 6;
        }
    }
}

void SpNpcTortimerTalk::onMessageEnd() {
    Unk_ov080_02271648_Buf buf;
    u32 r = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            buf.v[0] = 0x1559;
            this->requestGiveItem(&buf.v[0], 0, 5, 0);
            buf.v[1] = 0x1559;
            Pocket_AddItem(&buf.v[1], 0);
            buf.t[0] = 4;
            unk_3c->setNextMessage(&buf.t[0], (u8 *)"sp_npc_turtle");
        }
    } else {
        void *g = PlayerData_GetCurrent();
        u8 *str;
        if (Unk_02097ff4_testFlag(g, 1)) {
            str = (u8 *)"sp_etc_sequence5_2";
        } else {
            str = (u8 *)"sp_npc_turtle7";
            switch (msgIndex) {
            case 0:
            case 2:
                buf.v[2] = 0x1375;
                if (Pocket_AddItem(&buf.v[2], 0)) {
                    buf.v[3] = 0x1375;
                    this->requestGiveItem(&buf.v[3], 0, 5, 0);
                    Unk_02097ff4_setFlag(g, 0x21);
                    buf.v[4] = 0x1375;
                    this->setItemNameSlot((u32)&buf.v[4], 0, 7);
                    r = 1;
                }
                break;
            case 3:
            case 5:
                buf.v[5] = 0x1377;
                if (Pocket_AddItem(&buf.v[5], 0)) {
                    buf.v[6] = 0x1377;
                    this->requestGiveItem(&buf.v[6], 0, 5, 0);
                    Unk_02097ff4_setFlag(g, 0x22);
                    buf.v[7] = 0x1377;
                    this->setItemNameSlot((u32)&buf.v[7], 0, 7);
                    r = 4;
                }
                break;
            }
        }
        if (r != 0xff) {
            buf.t[1] = r;
            unk_3c->setNextMessage(&buf.t[1], str);
        }
    }
}

void SpNpcTortimerTalk::onChoice() {
    Unk_ov080_02271478_Buf buf;
    getChoiceList();
    s32 t = ChoiceList_getResult();
    void *g = PlayerData_GetCurrent();
    u8 r = 0xff;
    if (massageChairSlot >= 0) {
        u8 *const str = (u8 *)"sp_npc_turtle";
        if (msgIndex == 0 && t == 0) {
            if (massageChairSlot >= 0) {
                Pocket_RemoveItem(massageChairSlot);
                buf.v = 0x37e0;
                Unk_02014420_requestTakeItem(this, &buf.v, 0, 5, 0);
            }
            r = 2;
        }
        if (r != 0xff) {
            buf.t = r;
            unk_3c->setNextMessage(&buf.t, str);
        }
    } else {
        Unk_02097ff4_testFlag(g, 1);
    }
}

BOOL SpNpcTortimer::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618_func_02014220(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimer::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------

