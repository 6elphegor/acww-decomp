#include "types.h"
#include "actor/Unk_02088d00.h"
#include "item/ItemId.h"
#include "talk/TalkStartMsg.h"
#include "save/TownExchangeRecord.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ac88.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "item/ReceivedLetterBlock.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"



struct Unk_0201bc1c;
class SpNpcRover;


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
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(CollisionState, 0x30);
MEMBER(NpcActionCtrl, 0x618 - 0x564);




struct Unk_020d77a4_Vec3;


class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *v);
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
    BOOL netIsTalkLocked();
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getDistanceToPlayer(u32 v);

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


extern "C" {
extern u8 gOverlayHandle[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_67_ID[];
extern u8 data_021ecfa8[];
extern u16 data_020c6cc8;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gScreenTransition;
extern const void *sSpNpcRoverMsgKey;
extern u8 sSpNpcRoverModelPath[];
extern u8 sSpNpcRoverTexturePath[];
extern SpNpcRover *sSpNpcRoverInstance;

s32 _ZN11NpcTalkCtrl6isBusyEv(void *self);
void OverlayHandle_Unload(void *p);
void OverlayHandle_Load(void *p, u32 v);
TownExchangeRecord *TownExchange_GetForAid(s32 i);
void TownExchange_Clear(void *p);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
void *MI_CpuFill8(void *p, s32 v, u32 n);
s32 Constellation_PrepareExchange();
s32 Save_WriteVillagerTransfer();
s32 func_020e9a08(void *p);
s32 func_020e9a18(void *p);
void func_020e9a3c(void *p);
void func_020e9a48(void *p);
void func_020e9a54(void *a, void *b, u32 n);
void Snd_PlaySe(s32 v);
void Comm_EndOv067Mode();
void Comm_StartOv067Mode();
void _ZN15TalkWindowState14setNextMessageEPhPv(void *self, void *m, const void *x);
void _ZN15TalkWindowState13unlockAdvanceEv(void *self);
void _ZN15TalkWindowState11lockAdvanceEv(void *self);
void *_ZN15TalkWindowState13getChoiceListEv(void *self);
s32 _ZN10ChoiceList9getResultEv(void *self);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *self, u32 v);
void TalkRequestFlags_ClearSceneHold();
void TalkRequestFlags_SetSceneHold();
void *Scene_GetWarpRequest();
s32 SceneWarp_RequestFade(void *a, s32 b, s32 c, s32 d);
void _ZN11NpcTalkCtrl11requestTalkEhh(void *self, u8 a, u8 b);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void Camera_SetMode20At(void *p);
}
void *NetOverlay_AssertOv067();
class SpNpcRoverTalk;
typedef void (SpNpcRoverTalk::*Unk_ov055_02259904_Fn)();

class SpNpcRoverTalk : public SpNpcTalkRequest {
public:
    SpNpcRoverTalk();
    virtual ~SpNpcRoverTalk();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone();

    void waitTagModeStop();
    void waitLidOpen();
    void runTagMode();
    void attachOwner(SpNpcRover *owner);
    void setScript(s32 v);

    /* 0xac */ SpNpcRover *ownerNpc;
    /* 0xb0 */ s32 script;
};

struct Unk_ov055_02259234_Ent {
    Unk_ov055_02259904_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov055_02259234_Flag {
    u8 flag;
    u8 pad[11];
};


extern "C" void _ZN18TownExchangeRecordC1Ev(void *self);
extern "C" void _ZN19ReceivedLetterBlockC1Ev(void *self);

// sent / received town-exchange data: the record and the letters that travel with it (0x948 bytes)
struct SpNpcRoverTransfer {
    SpNpcRoverTransfer() {}
    /* 0x000 */ TownExchangeRecord record;
    /* 0x84c */ ReceivedLetterBlock letters;
};

class SpNpcRover;
typedef BOOL (SpNpcRover::*Unk_ov055_02259994_Fn)();

struct Unk_ov055_022594e0_Ent {
    Unk_ov055_02259994_Fn enter;
    Unk_ov055_02259994_Fn exit;
};

class SpNpcRover : public SpNpcActor {
public:
    SpNpcRover() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    void restoreOv068();
    void loadTagModeOverlay();
    void saveTagData();
    void prepareTagData();
    void restoreOwnTransfer();
    void applyReceivedData();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcRoverTalk talk;
    /* 0x70c */ u8 saveFailed;
    /* 0x70d */ u8 lidClosed;
    /* 0x70e */ u8 pad_70e[2];
    /* 0x710 */ SpNpcRoverTransfer send;
    /* 0x1058 */ SpNpcRoverTransfer recv;
};

struct Unk_ov055_SceneEntry {
    SpNpcRover *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
SpNpcRover *SpNpcRover_Create();
extern Unk_ov055_022594e0_Ent sSpNpcRoverActTable[3];
#define data_ov055_02259a4c ((Unk_ov055_022594e0_Ent *)((u8 *)sSpNpcRoverActTable + 8))
extern Unk_ov055_02259234_Ent sSpNpcRoverTalkScripts[4];
#define data_ov055_022598d4 ((Unk_ov055_02259234_Flag *)((u8 *)sSpNpcRoverTalkScripts + 8))
extern u8 sSpNpcRoverModelPath[];
extern u8 sSpNpcRoverTexturePath[];
extern Unk_ov055_SceneEntry sSpNpcRoverProfile;
void _ZN14SpNpcRoverTalk15waitTagModeStopEv();
void _ZN14SpNpcRoverTalk11waitLidOpenEv();
void _ZN14SpNpcRoverTalk10runTagModeEv();
void _ZN10SpNpcRover10setupAct01Ev();
void _ZN10SpNpcRover10setupAct00Ev();
void _ZN10SpNpcRover9mainAct02Ev();
void _ZN10SpNpcRover10setupAct02Ev();
void _ZN10SpNpcRover9mainAct00Ev();
void _ZN10SpNpcRover9mainAct01Ev();
}

extern "C" void *data_ov055_0225984c[2] = {(void *)_ZN10SpNpcRover10setupAct02Ev, 0};
extern "C" void *data_ov055_02259844[2] = {(void *)_ZN14SpNpcRoverTalk10runTagModeEv, 0};
extern "C" void *data_ov055_02259854[2] = {(void *)_ZN14SpNpcRoverTalk11waitLidOpenEv, 0};
extern "C" void *data_ov055_02259834[2] = {(void *)_ZN10SpNpcRover10setupAct00Ev, 0};
extern "C" void *data_ov055_02259824[2] = {(void *)_ZN14SpNpcRoverTalk15waitTagModeStopEv, 0};
extern "C" void *data_ov055_0225983c[2] = {(void *)_ZN10SpNpcRover9mainAct02Ev, 0};
extern "C" void *data_ov055_0225985c[2] = {(void *)_ZN10SpNpcRover9mainAct00Ev, 0};
extern "C" void *data_ov055_02259864[2] = {(void *)_ZN10SpNpcRover9mainAct01Ev, 0};
extern "C" void *data_ov055_0225982c[2] = {(void *)_ZN10SpNpcRover10setupAct01Ev, 0};
extern "C" char sSpNpcRoverKey[] = "sp_etc_sequence1";
extern "C" const void *sSpNpcRoverMsgKey = sSpNpcRoverKey;
extern "C" u8 sSpNpcRoverModelPath[] = "npc_sp/model/xct.nsbmd";
extern "C" u8 sSpNpcRoverTexturePath[] = "npc_sp/model/xct_tex.nsbtx";
extern "C" Unk_ov055_SceneEntry sSpNpcRoverProfile = {SpNpcRover_Create, 0x5e, 0x65, 2, 0x5000, 0x5000, 0x3e800};
extern "C" Unk_ov055_02259234_Ent sSpNpcRoverTalkScripts[4] = {
    {0, 0},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259844, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259854, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259824, 1},
};
extern "C" Unk_ov055_022594e0_Ent sSpNpcRoverActTable[3] = {
    {*(Unk_ov055_02259994_Fn *)data_ov055_02259834, *(Unk_ov055_02259994_Fn *)data_ov055_0225985c},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225982c, *(Unk_ov055_02259994_Fn *)data_ov055_02259864},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225984c, *(Unk_ov055_02259994_Fn *)data_ov055_0225983c},
};
extern "C" SpNpcRover *sSpNpcRoverInstance = 0;

static inline BOOL Unk_ov055_02259484_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

static inline BOOL Unk_ov055_0225915c_Both() {
    return (gTouchHeld != 0 && gTouchChanged != 0) ? TRUE : FALSE;
}

extern "C" SpNpcRover *SpNpcRover_Create() { return new SpNpcRover; }

BOOL SpNpcRover::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcRover::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    sSpNpcRoverInstance = this;
    loadTagModeOverlay();
    changeAct(0);
    Camera_SetMode20At(&position);
    TalkRequestFlags_SetSceneHold();
    prepareTagData();
    return TRUE;
}

BOOL SpNpcRover::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    sSpNpcRoverInstance = 0;
    restoreOv068();
    TalkRequestFlags_ClearSceneHold();
    saveTagData();
    return TRUE;
}

u8 *SpNpcRover::getTexturePath() { return sSpNpcRoverTexturePath; }

u8 *SpNpcRover::getModelPath() { return sSpNpcRoverModelPath; }

BOOL SpNpcRover::updateAct() {
    BOOL r = FALSE;
    if (data_ov055_02259a4c[unk_654].enter) {
        r = (this->*sSpNpcRoverActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcRover::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcRoverActTable[state].enter) {
        ok = (this->*sSpNpcRoverActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcRover::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRover::mainAct00() {
    if (Unk_ov055_02259484_IsTwo(gScreenTransition)) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcRover::setupAct01() {
    _ZN11NpcTalkCtrl11requestTalkEhh(&talkCtrl, 0, 1);
    return TRUE;
}

BOOL SpNpcRover::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2c, 2, 2);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcRover::setupAct02() { return TRUE; }

BOOL SpNpcRover::mainAct02() { return TRUE; }

SpNpcRoverTalk::SpNpcRoverTalk() {}

SpNpcRoverTalk::~SpNpcRoverTalk() {}

void SpNpcRoverTalk::attachOwner(SpNpcRover *owner) {
    vfunc_08();
    ownerNpc = owner;
}

void SpNpcRoverTalk::start(TalkStartMsg *out) {
    out->msgKey = (const char *)sSpNpcRoverMsgKey;
    out->msgIndex = 0x38;
}

void SpNpcRoverTalk::onMessageEnd() {
    u8 m[4];
    void *r6 = unk_3c;
    switch (msgIndex) {
    case 0x39:
        if (func_020e9a18(NetOverlay_AssertOv067()) == 0) {
            if (ownerNpc->saveFailed != 0) {
                m[0] = 0x36;
                _ZN15TalkWindowState14setNextMessageEPhPv(r6, &m[0], sSpNpcRoverMsgKey);
                break;
            }
            Comm_StartOv067Mode();
            MI_CpuFill8(&ownerNpc->recv.record, 0, 0x948);
            SpNpcRover *r4 = ownerNpc;
            NetOverlay_AssertOv067();
            func_020e9a54(&r4->send.record, &r4->recv.record, 0x948);
            func_020e9a48(NetOverlay_AssertOv067());
        }
        func_020e9a48(NetOverlay_AssertOv067());
        _ZN15TalkWindowState11lockAdvanceEv(r6);
        setScript(1);
        break;
    case 0x3c:
        ownerNpc->applyReceivedData();
        break;
    case 0x3b:
        ownerNpc->restoreOwnTransfer();
        break;
    }
}

void SpNpcRoverTalk::onChoice() {
    s32 t = _ZN10ChoiceList9getResultEv(_ZN15TalkWindowState13getChoiceListEv(unk_3c));
    if (msgIndex == 0x3a && t == 1) {
        Comm_EndOv067Mode();
    }
}

void SpNpcRoverTalk::update() {
    u32 i = script;
    if (data_ov055_022598d4[i].flag != 0) {
        if (sSpNpcRoverTalkScripts[i].fn) {
            (this->*sSpNpcRoverTalkScripts[i].fn)();
        }
    }
}

void SpNpcRoverTalk::onTaskDone() {
    u32 i = script;
    if (data_ov055_022598d4[i].flag == 0) {
        if (sSpNpcRoverTalkScripts[i].fn) {
            (this->*sSpNpcRoverTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcRoverTalk::setScript(s32 v) { script = v; }

void SpNpcRoverTalk::runTagMode() {
    u8 m[2];
    BOOL k;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    BOOL r5 = FALSE;
    SpNpcRover *own = ownerNpc;
    if (own->lidClosed == 1 && k == 0) {
        r5 = TRUE;
    }
    own->lidClosed = k;
    if (func_020e9a08(NetOverlay_AssertOv067())) {
        Comm_EndOv067Mode();
        m[0] = 0x3c;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m[0], sSpNpcRoverMsgKey);
        setScript(2);
    } else {
        if ((gPad[1] & 1) == 0 && !Unk_ov055_0225915c_Both() && r5 == 0) {
            return;
        }
        func_020e9a3c(NetOverlay_AssertOv067());
        m[1] = 0x3a;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m[1], sSpNpcRoverMsgKey);
        setScript(3);
    }
}

void SpNpcRoverTalk::waitLidOpen() {
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        Snd_PlaySe(0x69);
        _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
        setScript(0);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcRoverTalk

void SpNpcRoverTalk::waitTagModeStop() {
    void *r4 = unk_3c;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        if (func_020e9a08(NetOverlay_AssertOv067())) {
            Snd_PlaySe(0x69);
            Comm_EndOv067Mode();
            u8 m = 0x3c;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m, sSpNpcRoverMsgKey);
        } else {
            if (func_020e9a18(NetOverlay_AssertOv067()) != 1) {
                func_020e9a3c(NetOverlay_AssertOv067());
                return;
            }
        }
        _ZN15TalkWindowState13unlockAdvanceEv(r4);
        setScript(0);
    }
}

void SpNpcRover::applyReceivedData() {
    TownExchangeRecord *r4 = TownExchange_GetForAid(4);
    u32 st = recv.letters.exchangeKind;
    if (st == 2) {
        MI_CpuCopy8(&recv.letters, data_021ecfa8, 0xf8);
        restoreOwnTransfer();
    } else if (st == 1) {
        MI_CpuCopy8(&recv.record, r4, 0x84c);
        r4->incrementCounter();
        r4->setUnkFlag(1);
    }
}

void SpNpcRover::restoreOwnTransfer() {
    MI_CpuCopy8(&send.record, TownExchange_GetForAid(4), 0x84c);
}

BOOL SpNpcRover::vfunc_48(void *) {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcRover::vfunc_58(void *) {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) != 0 || netIsTalkLocked() != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcRover::vfunc_4c(u32 a, u8) {
    switch (a) {
    case 0:
        talk.vfunc_08();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&talk, getPlayerActor(4));
        changeAct(1);
        break;
    case 1:
        talk.vfunc_08();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&talk, getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

void SpNpcRover::prepareTagData() {
    Constellation_PrepareExchange();
    TownExchangeRecord *r4 = TownExchange_GetForAid(4);
    MI_CpuCopy8(r4, &send.record, 0x84c);
    send.letters.exchangeKind = 1;
    TownExchange_Clear(r4);
    if (saveFailed == 0) {
        s32 r = Save_WriteVillagerTransfer();
        if (r == 1 || r == 4) {
            saveFailed = 1;
        }
    }
}

void SpNpcRover::saveTagData() {
    if (saveFailed == 0) {
        TownExchange_GetForAid(4);
        s32 r = Save_WriteVillagerTransfer();
        if (r == 1 || r == 4) {
            saveFailed = 1;
        }
    }
}

void SpNpcRover::loadTagModeOverlay() {
    OverlayHandle_Unload(gOverlayHandle);
    OverlayHandle_Load(gOverlayHandle, (u32)OVERLAY_67_ID);
}

void SpNpcRover::restoreOv068() {
    OverlayHandle_Unload(gOverlayHandle);
    OverlayHandle_Load(gOverlayHandle, (u32)OVERLAY_68_ID);
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcRover


