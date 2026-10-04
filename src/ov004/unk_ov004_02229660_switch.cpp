// mwcc-version: 1.2/base
// ov004 TU26: .text 0x02229660-0x0222a374 (class RoomTelephone). The switch function at 0x02229c20
// (RoomTelephone::onChoice) needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "room/Unk_ov004_0224e2b8_Ent.h"
#include "gfx/Unk_ov004_Quad.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "room/RoomTelephoneTypes.h"
#include "gfx/AnimFrameCtrl.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor8vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::changeSyncState(u32)   64 M::getSoundPos(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN12RoomObjActorC2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (RoomObjRes: real C1/D1 methods), unk_248 (RoomObjTex) and unk_250
//    (RoomObjSe) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (RoomObj_DestructSe / RoomObjTex_Destruct), so RoomObjTex and RoomObjSe have no destructor here.
//  * ProcBase .. Character are an own copy of the library chain (the header GameProc.h names slot 08
//    vfunc_08, the real symbol is Character::postCreate(s32); slot 20 takes a u32).  Do not also include GameProc.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; TalkMsgRequest (secondary base of the derived classes) starts at 0x290.

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(s32), slot 20 takes a u32).
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
    virtual void vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};



class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
};


class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *anmObj;

    s32 attachAnim();
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

extern "C" {
s32 RoomObjRes_GetBca(void *self, u32 i);
void RoomObjRes_Free(void *self);
void RoomObjRes_Load(void *self, const char *s);
void *RoomObjRes_GetModel(void *self);
void RoomObjTex_Construct(void *self);
void RoomObjTex_Destruct(void *self);
void RoomObjTex_Reset(void *self);
void RoomObjTex_Load(void *self, const char *s);
u32 RoomObjTex_Get(void *self);
void RoomObj_ConstructSe(void *self);
void RoomObj_DestructSe(void *self);
void RoomObj_PlaySe(void *self, s32 v);
void RoomObj_DeactivateSe(void *self);
void RoomObj_SetSePos(void *self, void *v);
void RoomObj_ActivateSe(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    inline s32 RoomObjRes_GetBca(u32 i) { return ::RoomObjRes_GetBca(this, i); }
    inline void RoomObjRes_Free() { ::RoomObjRes_Free(this); }
    inline void RoomObjRes_Load(const char *s) { ::RoomObjRes_Load(this, s); }
    inline void *RoomObjRes_GetModel() { return ::RoomObjRes_GetModel(this); }

    u32 archive;
    u32 model;
    u32 bcas[13];
    u32 bmas[13];
    u32 btas[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 texture;
    u8 syncState;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 emitter[0x10];
};

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ RoomObjTex tex;
    /* 0x250 */ RoomObjSe se;
};


// ---------------------------------------------------------------- secondary base at +0x290 (vtable main 0x020ddcf0)
// RoomTelephone overrides its slots 0x10, 0x14 and 0x18 with the functions its own vtable has at 0x68, 0x6c and
// 0x70: onMessageStart / onMessageEnd / onChoice (thunks _ZThn656_N13RoomTelephone14onMessageStartEv ...).
// Every other slot is named vfunc_sXX: main has a label _ZN14TalkMsgRequest9vfunc_sXXEv for each of them.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

struct TalkWindowState {
    /* 0x0000 */ u32 index;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 nextState;
    /* 0x000c */ u8 pad_0c[8];
    /* 0x0014 */ s32 openMode;
    /* 0x0018 */ u8 pad_18[0x16dc - 0x18];
    /* 0x16dc */ u8 voice[4];
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice(u32 a, u8 b);
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

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
};





struct PhoneChoiceSet {
    const u8 *choiceMsgs;
    u8 numChoices;
};


class TouchPicker;
class ChoiceList;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define Character_detachTalkRequest _ZN9Character17detachTalkRequestEi
#define Character_attachTalkRequest _ZN9Character17attachTalkRequestEi
#define TalkWindowState_detachRequest _ZN15TalkWindowState13detachRequestEv
#define TalkWindowState_attachRequest _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define TalkVoice_clearMsgModeOverride _ZN9TalkVoice20clearMsgModeOverrideEv
#define TalkVoice_setMsgModeOverride _ZN9TalkVoice18setMsgModeOverrideEi
#define TalkVoice_clearVoiceOverride _ZN9TalkVoice18clearVoiceOverrideEv
#define TalkVoice_setVoiceOverride _ZN9TalkVoice16setVoiceOverrideEi
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define SaveData_clearFlag _ZN8SaveData9clearFlagEj
#define SaveData_setFlag _ZN8SaveData7setFlagEj
#define SaveData_testFlag _ZN8SaveData8testFlagEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii
#define TouchPicker_addBox _ZN11TouchPicker6addBoxEP12TouchPickBoxP4Vec3iiisih
#define TouchPicker_pushBox _ZN11TouchPicker7pushBoxEP12TouchPickBox

extern "C" {
extern u8 gScreenTransition;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern Unk_ov004_02229970_Glob *gCommManager;
extern u8 gSaveData[];
extern u8 gTalkMsgIndexNone[];
extern s32 gBgHeap;

void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
void _ZN12TouchPickBoxC2Ev(void *self);
void _ZN12TouchPickBoxD2Ev(void *self);
void _ZN15TouchPickSphereC1Ev(void *self);
void _ZN15TouchPickSphereD1Ev(void *self);
s32 BlendAnimModel_initAnim(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
void AnimModel_attachAnim(void *p);
void AnimModel_drawAnimated(void *p, s32 a);
void AnimModel_stepAnim(void *p);
BOOL AnimModel_allocAnmObj(void *p, s32 v);
BOOL AnimFrameCtrl_isFinished(void *p);
void Character_detachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_attachTalkRequest(void *self, TalkMsgRequest *sec);
void TalkWindowState_detachRequest(TalkWindowState *p);
void TalkWindowState_attachRequest(TalkWindowState *p, TalkMsgRequest *sec);
ChoiceList *TalkWindowState_getChoiceList(TalkWindowState *p);
void TalkWindowState_openChoices(TalkWindowState *p, u32 v);
void TalkWindowState_setNextMessage(TalkWindowState *p, u8 *src, const void *s);
void TalkVoice_clearMsgModeOverride(void *p);
void TalkVoice_setMsgModeOverride(void *p, s32 a);
void TalkVoice_clearVoiceOverride(void *p);
void TalkVoice_setVoiceOverride(void *p, s32 a);
BOOL CommManager_isOnline(void *g);
void SaveData_clearFlag(void *p, u32 n);
void SaveData_setFlag(void *p, u32 n);
BOOL SaveData_testFlag(void *p, u32 n);
s32 ChoiceList_getResult(ChoiceList *p);
void ChoiceList_loadTexts(ChoiceList *p);
void ChoiceList_setEntry(ChoiceList *p, u32 i, u8 *b, u32 n, void *d, s32 z, s32 c);
void ChoiceList_reset(ChoiceList *p, u32 n, s32 v);
BOOL TouchPicker_addBox(TouchPicker *o, void *box, s32 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
void TouchPicker_pushBox(TouchPicker *o, void *p);
s32 TalkWindow_Get(s32 a);
BOOL MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
BOOL MenuCtrl_OpenLauncher(u32 a);
u32 Scene_GetCurrent();
TouchPicker *Scene_GetTouchPicker();
BOOL TouchPickResult_GetTarget(TouchPicker *obj, Unk_ov004_02229970_Xyz *out, s32 *a, u8 *b);
s32 TouchPick_GetTappedObject(TouchPicker *o, u32 a, u32 b);
void *PlayerActor_GetActor(u32 x);
void *PlayerActor_GetCharacter(s32 v);
void TalkRequest_AddPlayerTalk6(void *p, s32 a);
void TalkRequest_SetTargetDone(void *p);
BOOL InputMode_IsTouch();
void PlayerOptions_SetHiragana(u32 a);
void PlayerOptions_SetStereo(u32 a);
void PlayerOptions_SetTalkVoice(u32 a);
u32 PlayerOptions_GetTalkVoice();
void Snd_SetOutputMode(u32 a);
void PlayerOptions_Commit();
s32 func_020e9650(s32 *a, s32 *b);
void PlayerActor_LocalRequestPhoneHangUp(void *p);
void PlayerActor_LocalRequestPhonePickUp(void *p);
}

class RoomTelephone : public RoomObjActor, public TalkMsgRequest {
public:
    RoomTelephone();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~RoomTelephone();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice(u32 a, u8 b);

    void openTalk(const char *name, u32 flag);
    void execAct0E();
    void enterAct0E();
    void execAct0D();
    void enterAct0D();
    void execAct0C();
    void enterAct0C();
    void execAct0B();
    void enterAct0B();
    void execAct0A();
    void enterAct0A();
    void execAct09();
    void enterAct09(const char *name, u32 flag);
    void execAct08();
    void enterAct08();
    void execAct07();
    void enterAct07();
    void execAct06();
    void enterAct06();
    void execAct05();
    void enterAct05();
    void execAct04();
    void enterAct04();
    void execAct03();
    void enterAct03();
    void execAct02();
    void enterAct02();
    void execAct01();
    void enterAct01();
    void execAct00();
    void enterAct00();
    void changeAct(s32 state);
    void openChoices(PhoneChoiceSet *p, s32 v);

    /* 0x2d4 */ u32 collider[0x27]; // a BoxCollider (ctor C1 / dtor D2 by hand, as the original calls them)
    /* 0x370 */ u32 touchBox[0xaa]; // a TouchPickBox (ctor C2 / dtor D2 by hand)
    /* 0x618 */ u32 touchSphere[7];    // a TouchPickSphere (ctor C2 / dtor D1 by hand)
    /* 0x634 */ s32 act;
    /* 0x638 */ u8 isTalking;
    /* 0x639 */ u8 pad_639[3];
    /* 0x63c */ u32 prevTalkVoice;
};

#define F(T, off) (*(T *)((u8 *)this + off))

typedef void (RoomTelephone::*Unk_ov004_0224e2b8_Fn)();




extern "C" {
extern const u8 sRoomTelephoneChoiceMsgs[3];
extern const u8 sRoomTelephoneChoiceMsgsScene6[4];
extern const s32 sRoomTelephonePos[3];
extern const char sRoomTelephoneMsgFile[];
extern u8 data_ov004_0224e16c[2];
extern u8 data_ov004_0224e170[3];
extern u8 data_ov004_0224e174[4];
extern const char *data_ov004_0224e178;
extern char sRoomTelephoneMsgFile2[];
extern PhoneChoiceSet data_ov004_0224e298;
extern PhoneChoiceSet data_ov004_0224e2a0;
extern PhoneChoiceSet data_ov004_0224e2a8;
extern char sRoomTelephoneArcPath[];
extern char sRoomTelephoneTexPath[];
extern RoomTelephone *volatile sRoomTelephone;
extern Unk_ov004_0224e2b8_Ent sRoomTelephoneActTable[15];
RoomTelephone *RoomTelephone_Create();
}

// Only this function: it needs mwcc 1.2/base (the rest of the unit is in the main file, built with 1.2/sp2).
// It is the class's virtual at vtable slot 0x70 (and, through the thunk, the secondary base's slot 0x18).
void RoomTelephone::onChoice(u32 a_, u8 b_) {
    TalkWindowState *p = unk_3c;
    s32 t = ChoiceList_getResult(TalkWindowState_getChoiceList(p));
    u32 r = 0;
    switch (msgIndex) {
    case 0xe:
    case 0x1f:
        if (Scene_GetCurrent() == 6) {
            r = sRoomTelephoneChoiceMsgsScene6[t];
        } else {
            r = sRoomTelephoneChoiceMsgs[t];
        }
        if (r == 0x17) {
            if (SaveData_testFlag(gSaveData, 0x13) && SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x42;
            } else if (!SaveData_testFlag(gSaveData, 0x13) && SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x41;
            } else if (SaveData_testFlag(gSaveData, 0x13) && !SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x40;
            } else if (!SaveData_testFlag(gSaveData, 0x13) && !SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x3f;
            }
        }
        break;
    case 0x14:
        switch (t) {
        case 0:
            PlayerOptions_SetHiragana(r);
            break;
        case 1:
            PlayerOptions_SetHiragana(1);
            break;
        }
        break;
    case 0x17:
        switch (t) {
        case 0:
            SaveData_clearFlag(gSaveData, 0x13);
            break;
        case 1:
            SaveData_setFlag(gSaveData, 0x13);
            break;
        }
        break;
    case 0x1a:
        switch (t) {
        case 0:
            SaveData_clearFlag(gSaveData, 0x14);
            break;
        case 1:
            SaveData_setFlag(gSaveData, 0x14);
            break;
        }
        break;
    case 0x1b:
        switch (t) {
        case 0:
            PlayerOptions_SetStereo(1);
            Snd_SetOutputMode(r);
            r = 0x1c;
            break;
        case 1:
            PlayerOptions_SetStereo(r);
            Snd_SetOutputMode(1);
            r = 0x1e;
            break;
        }
        break;
    case 0x11:
        prevTalkVoice = PlayerOptions_GetTalkVoice();
        switch (t) {
        case 0:
            PlayerOptions_SetTalkVoice(r);
            break;
        case 1:
            PlayerOptions_SetTalkVoice(1);
            break;
        case 2:
            PlayerOptions_SetTalkVoice(2);
            break;
        }
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        if (t == 1) {
            PlayerOptions_SetTalkVoice(prevTalkVoice);
        }
        break;
    }
    if (Scene_GetCurrent() != 6) {
        PlayerOptions_Commit();
    }
    if (r) {
        u8 b = r;
        TalkWindowState_setNextMessage(p, &b, sRoomTelephoneMsgFile);
    }
}
