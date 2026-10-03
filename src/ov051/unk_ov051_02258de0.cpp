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

class SpNpcKappn;
class SpNpcKappnTalk;
struct Unk_0201bc1c;

struct Unk_ov051_02258e50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov051_02258e68_Rec {
    u8 a;
    u8 b;
    u16 c;
};

struct TalkStartMsg {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02067918 {
    u32 unk_00;
    s32 unk_04;
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
void _ZN12Unk_020d771015setSubSceneKindEjj(void *self, u32 a, u32 b);
void _ZN12Unk_020d771012openSubSceneEi(void *self, s32 a);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
void _ZN12Unk_02015b8c9getAnimIdEj(void *self, s32 a);
u32 _ZN8PlayerId9getGenderEv(void *self);
void _ZN8PlayerId13func_02094124Eh(void *self, s32 a);
void *_ZN10PlayerData11getPlayerIdEv(void *self);
void _ZN10PlayerData11setFaceTypeEh(void *self, u32 a);
void _ZN10PlayerData12setHairColorEh(void *self, u32 a);
void _ZN10PlayerData12setHairStyleEh(void *self, u32 a);
void _ZN10PlayerData8setShirtEPt(void *self, u16 *p);
void _ZN8SaveData9clearFlagEj(void *self, s32 a);
void _ZN11NpcTalkCtrl11requestTalkEhh(void *self, u32 a, u32 b);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *self, s32 a, s32 b, s32 c, u32 d, s32 e);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *self, s32 a);
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 a, void *p, void *q);
void *PlayerData_GetCurrent();
Unk_02067918 *TalkWindow_Get(s32 a);
BOOL GameStart_IsNewTown();
BOOL GameStart_IsMode4();
BOOL GameStart_IsMode3();
BOOL GameStart_IsNewResident();
BOOL MenuCtrl_IsResultDuplicateName();
void Clock_GetDateTime(void *p);
void Town_SetGenGateMode(u32 a);
void MenuCtrl_SetDateTime(void *p);
void SaveData_Setup(void *p, s32 a);
void SaveData_Apply(void *p);
s32 TownBlockMap_Get();
void Town_FindTownHallFront(s32 a, void *p, s32 b, s32 c);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestAt(s32 a, s32 b, void *p, u32 c, u32 d, u32 e, u32 f);
s32 func_020e7500(void *p);
s32 func_020e7518(void *p);
void TalkRequestFlags_ClearSceneHold();
void TalkRequestFlags_SetSceneHold();
s32 func_02063b8c(s32 a);
void func_0203a318();
void ScreenTransition_StartFadeOut(s32 a, s32 b);
void Snd_FadeOutScene();
void ScreenTransition_StartFadeIn(s32 a, s32 b, s32 c);
void Taxi_SetArriving();
s32 TaxiInterior_StopRain();
void TaxiInterior_StartDriverAnim();
extern u16 data_020c6cc8;
extern u8 gScreenTransition;
extern u8 gSaveData[];
extern u8 data_020d0544[];
extern u8 gTalkMsgIndexEnd[];
extern u32 __ptmf_null[];
}

struct TalkWindowState {
    s32 setNextMessage(u8 *a, void *b);
    ChoiceList *getChoiceList();
};

class TalkMsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 a);
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class ActorTalkRequest : public TalkMsgRequest {
public:
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    ChoiceList *getChoiceList();
};

class Unk_020d7710 : public ActorTalkRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    Unk_ov051_02258e50_Bits unk_a4;
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
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

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
    virtual BOOL vfunc_48(void *p);
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
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
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual u32 getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual s32 vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);

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
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
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
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual u32 getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class SpNpcKappnTalk : public Unk_020d7710 {
public:
    typedef void (SpNpcKappnTalk::*Fn)();
    typedef void (SpNpcKappnTalk::*FnU)(u32);

    SpNpcKappnTalk();
    virtual ~SpNpcKappnTalk();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 a);
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_84();

    u8 genderMsg(u32 v);
    void onMoneyChoice(u32 sel);
    void onPurposeChoice(u32 sel);
    void onRainChoice(u32 sel);
    void onVisitPlanChoice(u32 sel);
    void onTownReasonChoice(u32 sel);
    void onGirlNameChoice(u32 sel);
    void onBoyNameChoice(u32 sel);
    void onTownNameConfirmChoice(u32 sel);
    void applyFaceFromAnswers();
    void announceArrival();
    void askMoneyOrArrive();
    void askAfterGirlCorrection();
    void askAfterBoyCorrection();
    void askDestination();
    void askReasonOrMoney();
    void askVisitPlan();
    void openTownNameEntry();
    void openPlayerNameEntry();
    void openClockSetting();
    void onClockSet();
    void onPlayerNameEntered();
    void onTownNameEntered();
    void setResultHandler(s32 idx);
    void attachOwner(SpNpcKappn *owner);

    SpNpcKappn *unk_ac;
    Fn unk_b0;
    s32 unk_b8;
};

struct Unk_ov051_02259be4_Ent {
    BOOL (SpNpcKappn::*enter)();
    BOOL (SpNpcKappn::*exit)();
};

class SpNpcKappn : public SpNpcActor {
public:
    SpNpcKappn() : unk_658() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual u32 getSpecies();
    virtual s32 vfunc_9c();

    BOOL mainAct04();
    BOOL setupAct04();
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
    SpNpcKappnTalk unk_658;
    u16 unk_714;
    u8 unk_716;
    u8 pad_717;
};

extern "C" {
extern const u8 sSpNpcKappnMoneyReplyMsgs[];
extern const u8 sSpNpcKappnPurposeReplyMsgs[];
extern const u8 sSpNpcKappnRainReplyMsgs[];
extern const u8 sSpNpcKappnRainReplyMsgsMode3[];
extern const u32 sSpNpcKappnFaceTable[];
extern char *sSpNpcKappnMsgKey;
extern u8 sSpNpcKappnModelPath[];
extern u8 sSpNpcKappnTexturePath[];
extern Unk_ov051_02259be4_Ent sSpNpcKappnActTable[];
extern SpNpcKappn *sSpNpcKappnInstance;
}

struct Unk_ov051_SceneEntry {
    SpNpcKappn *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcKappn *SpNpcKappn_Create();


extern "C" void _ZN14SpNpcKappnTalk13onMoneyChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk15onPurposeChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk12onRainChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk17onVisitPlanChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk18onTownReasonChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk16onGirlNameChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk15onBoyNameChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk23onTownNameConfirmChoiceEj();
extern "C" void _ZN14SpNpcKappnTalk20applyFaceFromAnswersEv();
extern "C" void _ZN14SpNpcKappnTalk15announceArrivalEv();
extern "C" void _ZN14SpNpcKappnTalk16askMoneyOrArriveEv();
extern "C" void _ZN14SpNpcKappnTalk22askAfterGirlCorrectionEv();
extern "C" void _ZN14SpNpcKappnTalk21askAfterBoyCorrectionEv();
extern "C" void _ZN14SpNpcKappnTalk14askDestinationEv();
extern "C" void _ZN14SpNpcKappnTalk16askReasonOrMoneyEv();
extern "C" void _ZN14SpNpcKappnTalk12askVisitPlanEv();
extern "C" void _ZN14SpNpcKappnTalk17openTownNameEntryEv();
extern "C" void _ZN14SpNpcKappnTalk19openPlayerNameEntryEv();
extern "C" void _ZN14SpNpcKappnTalk16openClockSettingEv();
extern "C" void _ZN14SpNpcKappnTalk10onClockSetEv();
extern "C" void _ZN14SpNpcKappnTalk19onPlayerNameEnteredEv();
extern "C" void _ZN14SpNpcKappnTalk17onTownNameEnteredEv();
extern "C" void _ZN10SpNpcKappn9mainAct04Ev();
extern "C" void _ZN10SpNpcKappn10setupAct04Ev();
extern "C" void _ZN10SpNpcKappn9mainAct03Ev();
extern "C" void _ZN10SpNpcKappn10setupAct03Ev();
extern "C" void _ZN10SpNpcKappn9mainAct02Ev();
extern "C" void _ZN10SpNpcKappn10setupAct02Ev();
extern "C" void _ZN10SpNpcKappn9mainAct01Ev();
extern "C" void _ZN10SpNpcKappn10setupAct01Ev();
extern "C" void _ZN10SpNpcKappn9mainAct00Ev();
extern "C" void _ZN10SpNpcKappn10setupAct00Ev();
extern "C" void *data_ov051_02259f64[2];
extern "C" void *data_ov051_02259f6c[2];
extern "C" void *data_ov051_02259f74[2];
extern "C" void *data_ov051_02259f7c[2];
extern "C" void *data_ov051_02259f84[2];
extern "C" void *data_ov051_02259f8c[2];
extern "C" void *data_ov051_02259f94[2];
extern "C" void *data_ov051_02259f9c[2];
extern "C" void *data_ov051_02259fa4[2];
extern "C" void *data_ov051_02259fac[2];
extern "C" void *data_ov051_02259fb4[2];
extern "C" void *data_ov051_02259fbc[2];
extern "C" void *data_ov051_02259fc4[2];
extern "C" void *data_ov051_02259fcc[2];
extern "C" void *data_ov051_02259fd4[2];
extern "C" void *data_ov051_02259fdc[2];
extern "C" void *data_ov051_02259fe4[2];
extern "C" void *data_ov051_02259fec[2];
extern "C" void *data_ov051_02259ff4[2];
extern "C" void *data_ov051_02259ffc[2];
extern "C" void *data_ov051_0225a004[2];
extern "C" void *data_ov051_0225a00c[2];
extern "C" void *data_ov051_0225a014[2];
extern "C" void *data_ov051_0225a01c[2];
extern "C" void *data_ov051_0225a024[2];
extern "C" void *data_ov051_0225a02c[2];
extern "C" void *data_ov051_0225a034[2];
extern "C" void *data_ov051_0225a03c[2];
extern "C" void *data_ov051_0225a044[2];
extern "C" void *data_ov051_0225a04c[2];
extern "C" void *data_ov051_0225a054[2];
extern "C" void *data_ov051_0225a05c[2];
extern "C" void *data_ov051_0225a064[2];
extern "C" void *data_ov051_0225a06c[2];
extern "C" void *data_ov051_0225a074[2];
extern "C" void *data_ov051_0225a07c[2];
extern "C" void *data_ov051_0225a084[2];
extern "C" void *data_ov051_0225a08c[2];
extern "C" void *data_ov051_0225a094[2];
extern "C" void *data_ov051_0225a09c[2];
extern "C" void *data_ov051_0225a0a4[2];
extern "C" void *data_ov051_0225a0ac[2];
extern "C" void *data_ov051_0225a0b4[2];
extern "C" void *data_ov051_0225a0bc[2];
extern "C" void *data_ov051_0225a0c4[2];
extern "C" void *data_ov051_0225a0cc[2];
extern "C" void *data_ov051_0225a0d4[2];
extern "C" void *data_ov051_0225a0dc[2];
extern "C" void *data_ov051_0225a0e4[2];
extern "C" void *data_ov051_0225a0ec[2];
extern "C" void *data_ov051_0225a0f4[2];
extern "C" void *data_ov051_0225a0fc[2];
extern "C" void *data_ov051_0225a104[2];
extern "C" void *data_ov051_0225a10c[2];
extern "C" void *data_ov051_0225a114[2];
extern "C" void *data_ov051_0225a11c[2];
extern "C" void *data_ov051_0225a124[2];
extern "C" void *data_ov051_0225a12c[2];
extern "C" void *data_ov051_0225a134[2];
extern "C" u8 sSpNpcKappnKey[];
static inline BOOL Unk_ov051_02259a8c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_ov051_02259b98_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

struct Unk_ov051_02258e68_Ent {
    u32 id;
    void (SpNpcKappnTalk::*fn)(u32);
};

struct Unk_ov051_022592e8_Ent {
    u32 id;
    void (SpNpcKappnTalk::*fn)();
};

extern "C" SpNpcKappn *SpNpcKappn_Create() { return new SpNpcKappn; }

BOOL SpNpcKappn::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    _ZN14NpcMoveAnimSet12setStandAnimEi(&unk_2a0, 0xfb);
    return TRUE;
}

BOOL SpNpcKappn::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    sSpNpcKappnInstance = this;
    changeAct(0);
    unk_4cc.unk_1c |= 2;
    TalkRequestFlags_SetSceneHold();
    unk_714 = 0x29;
    return TRUE;
}

BOOL SpNpcKappn::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    TalkRequestFlags_ClearSceneHold();
    return TRUE;
}

u8 *SpNpcKappn::getTexturePath() { return sSpNpcKappnTexturePath; }

u8 *SpNpcKappn::getModelPath() { return sSpNpcKappnModelPath; }

BOOL SpNpcKappn::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcKappnActTable[unk_654].exit) {
        r = (this->*sSpNpcKappnActTable[unk_654].exit)();
    }
    if (func_020e7518(&unk_716) == 1) {
        _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&unk_564, 1, 0x8f, 1, data_020c6cc8, 0);
    }
    return r;
}

void SpNpcKappn::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcKappnActTable[state].enter) {
        ok = (this->*sSpNpcKappnActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

u32 SpNpcKappn::getSpecies() { return 0xffff; }

s32 SpNpcKappn::vfunc_9c() { return 10; }

BOOL SpNpcKappn::setupAct00() { return TRUE; }

BOOL SpNpcKappn::mainAct00() {
    if (Unk_ov051_02259b98_IsTwo(gScreenTransition)) {
        if (func_020e7500(&unk_714) == 0) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcKappn::setupAct01() {
    _ZN11NpcTalkCtrl11requestTalkEhh(&unk_618, 1, 0);
    return TRUE;
}

BOOL SpNpcKappn::mainAct01() { return TRUE; }

BOOL SpNpcKappn::setupAct02() { return TRUE; }

BOOL SpNpcKappn::mainAct02() { return TRUE; }

BOOL SpNpcKappn::setupAct03() { return TRUE; }

BOOL SpNpcKappn::mainAct03() {
    struct {
        u32 w[2];
        u32 v[3];
    } l;
    if (Unk_ov051_02259a8c_IsZero(gScreenTransition)) {
        ScreenTransition_StartFadeIn(3, 0, 1);
        Taxi_SetArriving();
        if (GameStart_IsMode3() || GameStart_IsNewTown()) {
            l.w[0] = 0;
            l.w[1] = 0;
            Clock_GetDateTime(&l.w);
            MenuCtrl_SetDateTime(&l.w);
        }
        if (GameStart_IsNewTown()) {
            SaveData_Setup(gSaveData, 0);
            SaveData_Apply(gSaveData);
        } else if (GameStart_IsMode3()) {
            SaveData_Setup(gSaveData, 6);
            SaveData_Apply(gSaveData);
        } else if (GameStart_IsNewResident()) {
            SaveData_Setup(gSaveData, 1);
            SaveData_Apply(gSaveData);
        }
        _ZN8SaveData9clearFlagEj(gSaveData, 0x12);
        Town_FindTownHallFront(TownBlockMap_Get(), &l.v, 0, 0);
        SceneWarp_RequestAt(Scene_GetWarpRequest(), 0, &l.v, 0x400000, 0xffff8000, 3, 2);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcKappn::setupAct04() { return TRUE; }

// ---------------------------------------------------------------------------------------------------------------------
// Owner SpNpcKappn
BOOL SpNpcKappn::mainAct04() {
    if (TalkWindow_Get(0)->unk_04 == 0) {
        if (func_02063b8c(4) == 0) {
            TaxiInterior_StartDriverAnim();
            func_0203a318();
            unk_716 = 10;
        }
        ScreenTransition_StartFadeOut(0, 0xf);
        Snd_FadeOutScene();
        changeAct(3);
    }
    return TRUE;
}

SpNpcKappnTalk::SpNpcKappnTalk() {}

SpNpcKappnTalk::~SpNpcKappnTalk() {}

void SpNpcKappnTalk::attachOwner(SpNpcKappn *owner) {
    vfunc_08();
    unk_ac = owner;
}

void SpNpcKappnTalk::vfunc_1c(s32 a) {
    if (a == 0) {
        TaxiInterior_StopRain();
    }
}

void SpNpcKappnTalk::vfunc_78(TalkStartMsg *out) {
    out->unk_00 = (u32)sSpNpcKappnMsgKey;
    if (GameStart_IsNewTown() || GameStart_IsMode3()) {
        out->unk_04 = 0;
    } else {
        out->unk_04 = 0x28;
    }
}

void SpNpcKappnTalk::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        unk_b0 = *(Fn *)__ptmf_null;
    }
}



void SpNpcKappnTalk::setResultHandler(s32 idx) {
    static Fn tbl[3] = {
        *(Fn *)data_ov051_0225a0fc,
        *(Fn *)data_ov051_0225a0f4,
        *(Fn *)data_ov051_0225a0ec,
    };
    unk_b0 = tbl[idx];
}

void SpNpcKappnTalk::onTownNameEntered() {
    u8 m[1];
    m[0] = genderMsg(0x11);
    unk_3c->setNextMessage(m, sSpNpcKappnMsgKey);
}

void SpNpcKappnTalk::onPlayerNameEntered() {
    u8 m[2];
    if (MenuCtrl_IsResultDuplicateName()) {
        m[0] = 0x29;
        unk_3c->setNextMessage(m, sSpNpcKappnMsgKey);
    } else {
        m[1] = 9;
        unk_3c->setNextMessage(&m[1], sSpNpcKappnMsgKey);
    }
}

void SpNpcKappnTalk::onClockSet() {
    u8 m[1];
    m[0] = 2;
    unk_3c->setNextMessage(m, sSpNpcKappnMsgKey);
}

void SpNpcKappnTalk::vfunc_10() {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    if (unk_1e == 0 || unk_1e == 2) {
        void *h = TalkWindow_Get(0);
        s32 r4 = 0x19;
        l.w[0] = 0;
        l.w[1] = 0;
        Clock_GetDateTime(&l.w);
        if (((u8 *)l.w)[2] >= 0xc) {
            r4 = 0x1a;
        }
        l.msg = r4;
        _ZN15TalkWindowState17setSlotFromStringEiii(h, 0, &l.msg, (void *)"st_general");
        u32 t = ((u8 *)l.w)[2];
        if (t >= 0xc) {
            t -= 0xc;
        }
        if (t == 0) {
            t = 0xc;
        }
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, t, 1, 2, 0, 0);
    }
}

void SpNpcKappnTalk::openClockSetting() {
    _ZN12Unk_020d771015setSubSceneKindEjj(this, 0x30, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 2);
    setResultHandler(2);
}

void SpNpcKappnTalk::openPlayerNameEntry() {
    _ZN12Unk_020d771015setSubSceneKindEjj(this, 0xf, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 2);
    setResultHandler(1);
}

void SpNpcKappnTalk::openTownNameEntry() {
    _ZN12Unk_020d771015setSubSceneKindEjj(this, 0x10, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 2);
    setResultHandler(0);
}

void SpNpcKappnTalk::askVisitPlan() {
    u8 m[2];
    if (GameStart_IsMode4()) {
        m[0] = 0x30;
        unk_3c->setNextMessage(m, sSpNpcKappnMsgKey);
    }
}

// Dialog class SpNpcKappnTalk
void SpNpcKappnTalk::askReasonOrMoney() {
    u8 m[2];
    if (GameStart_IsNewTown()) {
        m[0] = genderMsg(0x15);
        unk_3c->setNextMessage(m, sSpNpcKappnMsgKey);
    } else {
        m[1] = genderMsg(0x1f);
        unk_3c->setNextMessage(&m[1], sSpNpcKappnMsgKey);
    }
}

void SpNpcKappnTalk::askDestination() {
    u8 msg;
    msg = genderMsg(0xf);
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
}

void SpNpcKappnTalk::askAfterBoyCorrection() {
    u8 msg[2];
    if (GameStart_IsNewResident()) {
        msg[0] = 0x19;
        unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
    } else {
        msg[1] = 0xf;
        unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
    }
}

void SpNpcKappnTalk::askAfterGirlCorrection() {
    u8 msg[2];
    if (GameStart_IsNewResident()) {
        msg[0] = 0x1a;
        unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
    } else {
        msg[1] = 0x10;
        unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
    }
}

void SpNpcKappnTalk::askMoneyOrArrive() {
    u8 msg[2];
    if (GameStart_IsMode3()) {
        msg[0] = genderMsg(0x25);
        unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
    } else {
        msg[1] = genderMsg(0x1f);
        unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
    }
}

void SpNpcKappnTalk::announceArrival() {
    u8 msg;
    msg = genderMsg(0x25);
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
}

void SpNpcKappnTalk::applyFaceFromAnswers() {
    if (GameStart_IsNewResident() || GameStart_IsNewTown()) {
        void *h = PlayerData_GetCurrent();
        u32 res = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(h));
        u32 off4;
        u32 v;
        u32 r1;
        if (res == 0) {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)sSpNpcKappnFaceTable + (u32)(unk_ac->unk_658.unk_b8 << 3)));
            r1 = (u8)v;
        } else {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)sSpNpcKappnFaceTable + (u32)(unk_ac->unk_658.unk_b8 << 3)));
            r1 = (u8)(v + 8);
        }
        u8 *base = data_020d0544 + (v << 3);
        Unk_ov051_02258e68_Rec *e = (Unk_ov051_02258e68_Rec *)(base + off4);
        u16 c;
        _ZN10PlayerData11setFaceTypeEh(h, r1);
        _ZN10PlayerData12setHairColorEh(h, e->b);
        _ZN10PlayerData12setHairStyleEh(h, base[off4]);
        c = e->c;
        _ZN10PlayerData8setShirtEPt(h, &c);
    }
    unk_3c->setNextMessage(gTalkMsgIndexEnd, 0);
    unk_ac->changeAct(4);
}

extern "C" void *data_ov051_0225a014[2] = {(void *)_ZN10SpNpcKappn10setupAct00Ev, 0};
extern "C" void *data_ov051_02259f7c[2] = {(void *)_ZN14SpNpcKappnTalk15onBoyNameChoiceEj, 0};
extern "C" void *data_ov051_0225a034[2] = {(void *)_ZN10SpNpcKappn10setupAct01Ev, 0};
extern "C" void *data_ov051_02259f64[2] = {(void *)_ZN10SpNpcKappn10setupAct02Ev, 0};
extern "C" void *data_ov051_0225a114[2] = {(void *)_ZN10SpNpcKappn10setupAct03Ev, 0};
extern "C" void *data_ov051_0225a12c[2] = {(void *)_ZN10SpNpcKappn10setupAct04Ev, 0};
extern "C" void *data_ov051_02259f8c[2] = {(void *)_ZN14SpNpcKappnTalk23onTownNameConfirmChoiceEj, 0};
extern "C" void *data_ov051_02259f94[2] = {(void *)_ZN10SpNpcKappn9mainAct02Ev, 0};
extern "C" void *data_ov051_0225a134[2] = {(void *)_ZN10SpNpcKappn9mainAct03Ev, 0};
extern "C" void *data_ov051_0225a07c[2] = {(void *)_ZN14SpNpcKappnTalk12onRainChoiceEj, 0};
extern "C" void *data_ov051_0225a124[2] = {(void *)_ZN10SpNpcKappn9mainAct04Ev, 0};
extern "C" void *data_ov051_0225a11c[2] = {(void *)_ZN14SpNpcKappnTalk16askMoneyOrArriveEv, 0};

void SpNpcKappnTalk::vfunc_14() {
    static Unk_ov051_022592e8_Ent tbl[32] = {
        {0x01, *(Fn *)data_ov051_02259fec},
        {0x04, *(Fn *)data_ov051_0225a0c4},
        {0x08, *(Fn *)data_ov051_0225a0bc},
        {0x0a, *(Fn *)data_ov051_0225a0b4},
        {0x29, *(Fn *)data_ov051_0225a0ac},
        {0x0f, *(Fn *)data_ov051_0225a0a4},
        {0x10, *(Fn *)data_ov051_0225a09c},
        {0x13, *(Fn *)data_ov051_0225a094},
        {0x14, *(Fn *)data_ov051_02259fcc},
        {0x25, *(Fn *)data_ov051_0225a084},
        {0x26, *(Fn *)data_ov051_02259fc4},
        {0x06, *(Fn *)data_ov051_0225a074},
        {0x07, *(Fn *)data_ov051_02259fbc},
        {0x1b, *(Fn *)data_ov051_0225a064},
        {0x1c, *(Fn *)data_ov051_02259fa4},
        {0x1d, *(Fn *)data_ov051_0225a054},
        {0x1e, *(Fn *)data_ov051_02259fac},
        {0x2b, *(Fn *)data_ov051_0225a0dc},
        {0x2c, *(Fn *)data_ov051_0225a03c},
        {0x2d, *(Fn *)data_ov051_0225a01c},
        {0x2e, *(Fn *)data_ov051_0225a024},
        {0x0d, *(Fn *)data_ov051_0225a04c},
        {0x0e, *(Fn *)data_ov051_0225a05c},
        {0x17, *(Fn *)data_ov051_0225a11c},
        {0x18, *(Fn *)data_ov051_0225a08c},
        {0x21, *(Fn *)data_ov051_0225a104},
        {0x22, *(Fn *)data_ov051_02259ffc},
        {0x23, *(Fn *)data_ov051_0225a0e4},
        {0x24, *(Fn *)data_ov051_0225a0d4},
        {0x2f, *(Fn *)data_ov051_02259fe4},
        {0x31, *(Fn *)data_ov051_02259fdc},
        {0x32, *(Fn *)data_ov051_02259fd4},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov051_022592e8_Ent *)((u32)tbl + i * 12))->fn)();
    }
    i++;
test0:
    if (i < 0x20) goto loop0;
}

void SpNpcKappnTalk::onTownNameConfirmChoice(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        if (GameStart_IsMode3()) {
            msg[0] = genderMsg(0x15);
            unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
        } else {
            msg[1] = genderMsg(0x19);
            unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
        }
        break;
    case 1:
        msg[2] = genderMsg(0x13);
        unk_3c->setNextMessage(&msg[2], sSpNpcKappnMsgKey);
        break;
    }
}

void SpNpcKappnTalk::onBoyNameChoice(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 0);
        if (GameStart_IsNewResident()) {
            msg[0] = genderMsg(0x19);
            unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
        } else {
            msg[1] = genderMsg(0xf);
            unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
        }
        break;
    case 1:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 1);
        msg[2] = 0xe;
        unk_3c->setNextMessage(&msg[2], sSpNpcKappnMsgKey);
        break;
    }
}

void SpNpcKappnTalk::onGirlNameChoice(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 1);
        if (GameStart_IsNewResident()) {
            msg[0] = genderMsg(0x19);
            unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
        } else {
            msg[1] = genderMsg(0xf);
            unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
        }
        break;
    case 1:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 0);
        msg[2] = 0xd;
        unk_3c->setNextMessage(&msg[2], sSpNpcKappnMsgKey);
        break;
    }
}

void SpNpcKappnTalk::onTownReasonChoice(u32 sel) {
    u8 msg;
    msg = genderMsg(0x17);
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
    Town_SetGenGateMode(sel);
}

void SpNpcKappnTalk::onVisitPlanChoice(u32 sel) {
    u8 msg[2];
    switch (sel) {
    case 0:
        msg[0] = 0x31;
        unk_3c->setNextMessage(&msg[0], sSpNpcKappnMsgKey);
        break;
    case 1:
        msg[1] = 0x32;
        unk_3c->setNextMessage(&msg[1], sSpNpcKappnMsgKey);
        break;
    }
}

void SpNpcKappnTalk::onRainChoice(u32 sel) {
    u8 msg;
    u32 v;
    if (GameStart_IsMode3()) {
        v = *(u8 *)(_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) + ((u32)sSpNpcKappnRainReplyMsgsMode3 + sel * 2));
    } else {
        v = sSpNpcKappnRainReplyMsgs[sel];
    }
    msg = v;
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8 += 4;
    }
}

void SpNpcKappnTalk::onPurposeChoice(u32 sel) {
    u8 msg;
    msg = genderMsg(sSpNpcKappnPurposeReplyMsgs[sel]);
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8 += 2;
    }
}

void SpNpcKappnTalk::onMoneyChoice(u32 sel) {
    u8 msg;
    u32 v;
    if (GameStart_IsNewTown()) {
        v = genderMsg(sSpNpcKappnMoneyReplyMsgs[sel]);
    } else if (sel == 0) {
        if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0) {
            v = 0x21;
        } else {
            v = 0x2f;
        }
    } else {
        v = genderMsg(0x23);
    }
    msg = v;
    unk_3c->setNextMessage(&msg, sSpNpcKappnMsgKey);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8++;
    }
}

u8 SpNpcKappnTalk::genderMsg(u32 v) {
    u8 r = (u8)_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    return (u8)(v + r);
}

extern "C" void *data_ov051_0225a104[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" void *data_ov051_0225a0fc[2] = {(void *)_ZN14SpNpcKappnTalk17onTownNameEnteredEv, 0};
extern "C" u8 sSpNpcKappnTexturePath[] = "npc_sp/model/wip_tex.nsbtx";
extern "C" void *data_ov051_0225a0ec[2] = {(void *)_ZN14SpNpcKappnTalk10onClockSetEv, 0};
extern "C" void *data_ov051_0225a0e4[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
Unk_ov051_02259be4_Ent sSpNpcKappnActTable[5] = {
    {*(BOOL (SpNpcKappn::**)())data_ov051_0225a014, *(BOOL (SpNpcKappn::**)())data_ov051_02259f84},
    {*(BOOL (SpNpcKappn::**)())data_ov051_0225a034, *(BOOL (SpNpcKappn::**)())data_ov051_0225a10c},
    {*(BOOL (SpNpcKappn::**)())data_ov051_02259f64, *(BOOL (SpNpcKappn::**)())data_ov051_02259f94},
    {*(BOOL (SpNpcKappn::**)())data_ov051_0225a114, *(BOOL (SpNpcKappn::**)())data_ov051_0225a134},
    {*(BOOL (SpNpcKappn::**)())data_ov051_0225a12c, *(BOOL (SpNpcKappn::**)())data_ov051_0225a124},
};
extern "C" u8 sSpNpcKappnModelPath[] = "npc_sp/model/wip.nsbmd";
extern "C" const u8 sSpNpcKappnRainReplyMsgs[4] = {6, 7, 0, 0};
extern "C" void *data_ov051_0225a0c4[2] = {(void *)_ZN14SpNpcKappnTalk16openClockSettingEv, 0};
extern "C" const u8 sSpNpcKappnRainReplyMsgsMode3[4] = {0x2b, 0x2c, 0x2d, 0x2e};
extern "C" void *data_ov051_0225a0b4[2] = {(void *)_ZN14SpNpcKappnTalk19openPlayerNameEntryEv, 0};
extern "C" void *data_ov051_0225a0ac[2] = {(void *)_ZN14SpNpcKappnTalk19openPlayerNameEntryEv, 0};
extern "C" void *data_ov051_0225a0a4[2] = {(void *)_ZN14SpNpcKappnTalk17openTownNameEntryEv, 0};
extern "C" void *data_ov051_0225a09c[2] = {(void *)_ZN14SpNpcKappnTalk17openTownNameEntryEv, 0};
extern "C" u8 sSpNpcKappnKey[] = "sp_etc_sequence3";
extern "C" void *data_ov051_0225a08c[2] = {(void *)_ZN14SpNpcKappnTalk16askMoneyOrArriveEv, 0};
extern "C" void *data_ov051_0225a084[2] = {(void *)_ZN14SpNpcKappnTalk20applyFaceFromAnswersEv, 0};
extern "C" void *data_ov051_02259fc4[2] = {(void *)_ZN14SpNpcKappnTalk20applyFaceFromAnswersEv, 0};
extern "C" void *data_ov051_0225a074[2] = {(void *)_ZN14SpNpcKappnTalk12askVisitPlanEv, 0};
extern "C" void *data_ov051_0225a06c[2] = {(void *)_ZN14SpNpcKappnTalk12onRainChoiceEj, 0};
extern "C" void *data_ov051_0225a064[2] = {(void *)_ZN14SpNpcKappnTalk16askReasonOrMoneyEv, 0};
SpNpcKappn *sSpNpcKappnInstance;
extern "C" void *data_ov051_0225a054[2] = {(void *)_ZN14SpNpcKappnTalk16askReasonOrMoneyEv, 0};
extern "C" void *data_ov051_0225a04c[2] = {(void *)_ZN14SpNpcKappnTalk21askAfterBoyCorrectionEv, 0};
extern "C" void *data_ov051_0225a10c[2] = {(void *)_ZN10SpNpcKappn9mainAct01Ev, 0};
extern "C" void *data_ov051_0225a03c[2] = {(void *)_ZN14SpNpcKappnTalk14askDestinationEv, 0};
extern "C" void *data_ov051_0225a01c[2] = {(void *)_ZN14SpNpcKappnTalk14askDestinationEv, 0};
extern "C" Unk_ov051_SceneEntry sSpNpcKappnProfile = {SpNpcKappn_Create, 0x7b, 0x7f, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov051_0225a05c[2] = {(void *)_ZN14SpNpcKappnTalk22askAfterGirlCorrectionEv, 0};
extern "C" void *data_ov051_0225a0bc[2] = {(void *)_ZN14SpNpcKappnTalk19openPlayerNameEntryEv, 0};
extern "C" void *data_ov051_0225a0cc[2] = {(void *)_ZN14SpNpcKappnTalk13onMoneyChoiceEj, 0};
extern "C" void *data_ov051_0225a0d4[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" void *data_ov051_0225a004[2] = {(void *)_ZN14SpNpcKappnTalk16onGirlNameChoiceEj, 0};
extern "C" void *data_ov051_0225a0f4[2] = {(void *)_ZN14SpNpcKappnTalk19onPlayerNameEnteredEv, 0};
extern "C" void *data_ov051_02259ff4[2] = {(void *)_ZN14SpNpcKappnTalk23onTownNameConfirmChoiceEj, 0};
extern "C" void *data_ov051_02259fec[2] = {(void *)_ZN14SpNpcKappnTalk16openClockSettingEv, 0};
extern "C" void *data_ov051_02259fe4[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" void *data_ov051_02259fdc[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" void *data_ov051_02259fd4[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" void *data_ov051_0225a094[2] = {(void *)_ZN14SpNpcKappnTalk17openTownNameEntryEv, 0};
extern "C" const u8 sSpNpcKappnPurposeReplyMsgs[4] = {0x1d, 0x1b, 0, 0};
extern "C" void *data_ov051_02259fbc[2] = {(void *)_ZN14SpNpcKappnTalk12askVisitPlanEv, 0};
extern "C" void *data_ov051_02259fa4[2] = {(void *)_ZN14SpNpcKappnTalk16askReasonOrMoneyEv, 0};
extern "C" void *data_ov051_02259fac[2] = {(void *)_ZN14SpNpcKappnTalk16askReasonOrMoneyEv, 0};
extern "C" void *data_ov051_0225a044[2] = {(void *)_ZN14SpNpcKappnTalk13onMoneyChoiceEj, 0};
extern "C" void *data_ov051_0225a024[2] = {(void *)_ZN14SpNpcKappnTalk14askDestinationEv, 0};
extern "C" char *sSpNpcKappnMsgKey = (char *)sSpNpcKappnKey;
extern "C" void *data_ov051_0225a0dc[2] = {(void *)_ZN14SpNpcKappnTalk14askDestinationEv, 0};
extern "C" void *data_ov051_02259ffc[2] = {(void *)_ZN14SpNpcKappnTalk15announceArrivalEv, 0};
extern "C" const u8 sSpNpcKappnMoneyReplyMsgs[4] = {0x21, 0x23, 0, 0};
extern "C" void *data_ov051_02259f6c[2] = {(void *)_ZN14SpNpcKappnTalk18onTownReasonChoiceEj, 0};
extern "C" void *data_ov051_02259fcc[2] = {(void *)_ZN14SpNpcKappnTalk17openTownNameEntryEv, 0};
extern "C" void *data_ov051_02259f9c[2] = {(void *)_ZN14SpNpcKappnTalk15onPurposeChoiceEj, 0};
extern "C" void *data_ov051_02259fb4[2] = {(void *)_ZN14SpNpcKappnTalk15onPurposeChoiceEj, 0};
extern "C" void *data_ov051_0225a02c[2] = {(void *)_ZN14SpNpcKappnTalk12onRainChoiceEj, 0};

void SpNpcKappnTalk::vfunc_18() {
    static Unk_ov051_02258e68_Ent tbl[14] = {
        {0x05, *(FnU *)data_ov051_0225a02c},
        {0x03, *(FnU *)data_ov051_0225a06c},
        {0x28, *(FnU *)data_ov051_0225a07c},
        {0x0b, *(FnU *)data_ov051_0225a004},
        {0x0c, *(FnU *)data_ov051_02259f7c},
        {0x15, *(FnU *)data_ov051_02259f6c},
        {0x16, *(FnU *)data_ov051_02259f74},
        {0x19, *(FnU *)data_ov051_02259f9c},
        {0x1a, *(FnU *)data_ov051_02259fb4},
        {0x1f, *(FnU *)data_ov051_0225a044},
        {0x20, *(FnU *)data_ov051_0225a0cc},
        {0x11, *(FnU *)data_ov051_02259ff4},
        {0x12, *(FnU *)data_ov051_02259f8c},
        {0x30, *(FnU *)data_ov051_0225a00c},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 off = i * 12;
    u32 id = *(u32 *)((u8 *)tbl + off);
    if (id == *idp) {
        u32 arg = unk_3c->getChoiceList()->getResult();
        (this->*((Unk_ov051_02258e68_Ent *)((u32)tbl + off))->fn)(arg);
    }
    i++;
test0:
    if (i < 0xe) goto loop0;
}

extern "C" u32 SpNpcKappn_GetAnimFrame() {
    return sSpNpcKappnInstance->unk_ec.unk_a4.mid;
}

// ---------------------------------------------------------------------------------------------------------------------

extern "C" void SpNpcKappn_GetAnimState() {
    _ZN12Unk_02015b8c9getAnimIdEj(&sSpNpcKappnInstance->unk_334, 0);
}

extern "C" void *data_ov051_02259f74[2] = {(void *)_ZN14SpNpcKappnTalk18onTownReasonChoiceEj, 0};
extern "C" void *data_ov051_0225a00c[2] = {(void *)_ZN14SpNpcKappnTalk17onVisitPlanChoiceEj, 0};
extern "C" const u32 sSpNpcKappnFaceTable[16] = {4, 6, 5, 5, 1, 0, 0, 1, 6, 4, 3, 2, 2, 7, 7, 3};
extern "C" void *data_ov051_02259f84[2] = {(void *)_ZN10SpNpcKappn9mainAct00Ev, 0};

