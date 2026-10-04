// mwcc-version: 1.2/sp2
// ov004 TU26: .text 0x02229660-0x0222a374 (class RoomTelephone). The switch function at 0x02229c20
// (RoomTelephone::onChoice) needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "gfx/VecFx32.h"
#include "room/RoomTelephoneActEntry.h"
#include "gfx/DebugColor.h"
#include "actor/ActorProfile.h"
#include "actor/CharacterListNode.h"
#include "room/RoomTelephoneTypes.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "talk/TalkWindowState.h"
#include "room/PhoneChoiceSet.h"
#include "gfx/CachedModel.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "room/RoomObjActor.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "room/RoomTelephone.h"
#include "net/CommManager.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::onCreate        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::postDelete   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor11postExecuteEj)
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
//  * Names a derived class must not reuse: syncSlot (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; TalkMsgRequest (secondary base of the derived classes) starts at 0x290.







// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)




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





// ---------------------------------------------------------------- secondary base at +0x290 (vtable main 0x020ddcf0)









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
#define TouchPicker_addBox _ZN11TouchPicker6addBoxEP12TouchPickBoxP7VecFx32iiisih
#define TouchPicker_pushBox _ZN11TouchPicker7pushBoxEP12TouchPickBox

extern "C" {
extern u8 gScreenTransition;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern CommManager *gCommManager;
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
BOOL TouchPickResult_GetTarget(TouchPicker *obj, VecFx32 *out, s32 *a, u8 *b);
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
s32 Vec_DistXZ(s32 *a, s32 *b);
void PlayerActor_LocalRequestPhoneHangUp(void *p);
void PlayerActor_LocalRequestPhonePickUp(void *p);
}


#define F(T, off) (*(T *)((u8 *)this + off))

typedef void (RoomTelephone::*RoomTelephoneActFn)();




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
extern RoomTelephoneActEntry sRoomTelephoneActTable[15];
RoomTelephone *RoomTelephone_Create();
}

// ---- definitions ----

// ---------------------------------------------------------------- data
// The six 4-byte objects and the state table are initialised by __sinit_ov004_022475a0 in this order.
extern "C" DebugColor data_ov004_02251294(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov004_02251284(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov004_0225128c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov004_02251280(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov004_0225127c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov004_02251290(0x14, 0x18, 0x18, 0x1f);

// State table: {function run on entering the state, function run every frame}.
extern "C" RoomTelephoneActEntry sRoomTelephoneActTable[15] = {
    { (RoomTelephoneActFn)&RoomTelephone::enterAct00, (RoomTelephoneActFn)&RoomTelephone::execAct00 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct01, (RoomTelephoneActFn)&RoomTelephone::execAct01 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct02, (RoomTelephoneActFn)&RoomTelephone::execAct02 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct03, (RoomTelephoneActFn)&RoomTelephone::execAct03 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct04, (RoomTelephoneActFn)&RoomTelephone::execAct04 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct05, (RoomTelephoneActFn)&RoomTelephone::execAct05 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct06, (RoomTelephoneActFn)&RoomTelephone::execAct06 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct07, (RoomTelephoneActFn)&RoomTelephone::execAct07 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct08, (RoomTelephoneActFn)&RoomTelephone::execAct08 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct09, (RoomTelephoneActFn)&RoomTelephone::execAct09 },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct0A, (RoomTelephoneActFn)&RoomTelephone::execAct0A },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct0B, (RoomTelephoneActFn)&RoomTelephone::execAct0B },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct0C, (RoomTelephoneActFn)&RoomTelephone::execAct0C },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct0D, (RoomTelephoneActFn)&RoomTelephone::execAct0D },
    { (RoomTelephoneActFn)&RoomTelephone::enterAct0E, (RoomTelephoneActFn)&RoomTelephone::execAct0E },
};
#undef FN

extern "C" {
extern const u8 sRoomTelephoneChoiceMsgs[3] = { 0x1b, 0x17, 0x20 };
extern const u8 sRoomTelephoneChoiceMsgsScene6[4] = { 0x0f, 0x1b, 0x17, 0x20 };
extern const s32 sRoomTelephonePos[3] = { 0x11000, 0, 0x11000 };
extern const char sRoomTelephoneMsgFile[] = "sp_etc_sequence1";
u8 data_ov004_0224e16c[2] = { 0x14, 0x15 };
u8 data_ov004_0224e170[3] = { 0x08, 0x11, 0x17 };
u8 data_ov004_0224e174[4] = { 0x07, 0x08, 0x11, 0x17 };
char sRoomTelephoneMsgFile2[] = "sp_etc_sequence1";
const char *data_ov004_0224e178 = sRoomTelephoneMsgFile2;
PhoneChoiceSet data_ov004_0224e298 = { data_ov004_0224e174, 4 };
PhoneChoiceSet data_ov004_0224e2a0 = { data_ov004_0224e170, 3 };
PhoneChoiceSet data_ov004_0224e2a8 = { data_ov004_0224e16c, 2 };
char sRoomTelephoneArcPath[] = "/roomObj/obj_telephone.arc";
char sRoomTelephoneTexPath[] = "/roomObj/obj_telephone.nsbtx";
RoomTelephone *volatile sRoomTelephone;
}
extern "C" ActorProfile sRoomTelephoneProfile = { (void *(*)())RoomTelephone_Create, 0x2d, 0x33, 0, 0xc8000, 0x12c000, 0x258000 };

// ---------------------------------------------------------------- 0x02229660
extern "C" void RoomTelephone_PlayAnimHold() {
    RoomTelephone *g = sRoomTelephone;
    if (g) {
        BlendAnimModel_initAnim(&sRoomTelephone->model, RoomObjRes_GetBca(&g->res, 0), 1, 0x1000, ((Unk_ov004_02229660_Bits *)((u8 *)g + 0x18c))->mid, 0);
    }
}

extern "C" void RoomTelephone_PlayAnimHangUp() {
    RoomTelephone *g = sRoomTelephone;
    if (g) {
        BlendAnimModel_initAnim(&sRoomTelephone->model, RoomObjRes_GetBca(&g->res, 0), 3, 0x1000, ((Unk_ov004_02229660_Bits *)((u8 *)g + 0x18c))->mid, 0);
    }
}

extern "C" void RoomTelephone_PlayAnimPickUp() {
    RoomTelephone *g = sRoomTelephone;
    if (g) {
        BlendAnimModel_initAnim(&sRoomTelephone->model, RoomObjRes_GetBca(&g->res, 0), 1, 0x1000, 0, 0);
    }
}

extern "C" BOOL RoomTelephone_StartAct0A() {
    RoomTelephone *g = sRoomTelephone;
    if (g) {
        g->changeAct(10);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL RoomTelephone_IsTalking() {
    RoomTelephone *g = sRoomTelephone;
    if (g) {
        if (g->isTalking) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void RoomTelephone::openTalk(const char *name, u32 flag) {
    TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
    resetMsg();
    setFileName(name);
    msgIndex = flag;
    TalkWindowState_attachRequest(p, this);
    p->nextState = 1;
}

void RoomTelephone::execAct0E() {
    if (MenuCtrl_IsFinished()) {
        TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
        u8 c = 0x10;
        if (!MenuCtrl_IsResultOk()) {
            c = 0x18;
        }
        TalkWindowState_setNextMessage(p, &c, sRoomTelephoneMsgFile2);
        p->nextState = 1;
        if (Scene_GetCurrent() == 6) {
            changeAct(0xc);
        } else {
            changeAct(4);
        }
    }
}

void RoomTelephone::enterAct0E() {}

void RoomTelephone::execAct0D() {
    TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
    if (p->state == 5) {
        MenuCtrl_OpenLauncher(0x30);
        changeAct(0xe);
    }
}

void RoomTelephone::enterAct0D() {}

void RoomTelephone::execAct0C() {
    TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
    if (p->state == 0) {
        TalkWindowState_detachRequest(p);
        isTalking = 0;
        changeAct(7);
    }
}

void RoomTelephone::enterAct0C() {}

void RoomTelephone::execAct0B() {
    TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
    if (p->state == 0) {
        TalkWindowState_detachRequest(p);
        isTalking = 0;
        changeAct(7);
    }
}

void RoomTelephone::enterAct0B() {}

void RoomTelephone::execAct0A() {
    if (window) {
        if (window->state) {
            changeAct(0xb);
        }
    }
}

void RoomTelephone::enterAct0A() {
    openTalk(sRoomTelephoneMsgFile2, 0xe);
    isTalking = 1;
}

void RoomTelephone::execAct09() {
    TalkWindowState *p = (TalkWindowState *)TalkWindow_Get(0);
    if (p->state == 0) {
        TalkWindowState_detachRequest(p);
        isTalking = 0;
        changeAct(7);
    }
}

void RoomTelephone::enterAct09(const char *name, u32 flag) {
    openTalk(sRoomTelephoneMsgFile2, 0x22);
}

void RoomTelephone::execAct08() {
    BOOL f;
    if (gScreenTransition == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        changeAct(9);
    }
}

void RoomTelephone::enterAct08() {
    isTalking = 1;
}

void RoomTelephone::execAct07() {
    VecFx32 out;
    s32 a;
    u8 b;
    BOOL f;
    if (gScreenTransition == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        TouchPicker_pushBox(Scene_GetTouchPicker(), touchBox);
        if (Scene_GetCurrent() == 6) {
            if (gCommManager->localSlot != 4) {
                return;
            }
        }
        if (InputMode_IsTouch()) {
            if (gTouchPrevHeld && gTouchPrevChanged) {
                f = TRUE;
            } else {
                f = FALSE;
            }
            if (f) {
                if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), &out, &a, &b)) {
                    if (a == 0xd) {
                        changeAct(0xa);
                    }
                }
            }
        }
    }
}

void RoomTelephone::enterAct07() {}
void RoomTelephone::execAct06() {}
void RoomTelephone::enterAct06() {}

void RoomTelephone::execAct05() {
    if (AnimFrameCtrl_isFinished((u8 *)this + 0x188)) {
        Character_detachTalkRequest(this, this);
        TalkRequest_SetTargetDone(this);
        changeAct(6);
    }
}

void RoomTelephone::enterAct05() {
    PlayerActor_LocalRequestPhoneHangUp(this);
    RoomObj_PlaySe(&se, 0x4d5);
}

void RoomTelephone::execAct04() {
    if (window) {
        if (!window->state) {
            changeAct(5);
        }
    }
}

void RoomTelephone::enterAct04() {}

void RoomTelephone::execAct03() {
    if (window) {
        if (!window->state) {
            changeAct(5);
        }
    }
}

void RoomTelephone::enterAct03() {}

void RoomTelephone::execAct02() {
    if (window) {
        if (window->state) {
            changeAct(3);
        }
    }
}

void RoomTelephone::enterAct02() {
    Unk_ov004_02229ae0_Pad pad;
    Character_attachTalkRequest(this, this);
    setFileName(data_ov004_0224e178);
    if (CommManager_isOnline(gCommManager)) {
        msgIndex = 0x1d;
    } else {
        msgIndex = 0xe;
    }
    window->nextState = 1;
}

void RoomTelephone::execAct01() {
    if (AnimFrameCtrl_isFinished((u8 *)this + 0x188)) {
        changeAct(2);
    }
}

void RoomTelephone::enterAct01() {
    PlayerActor_LocalRequestPhonePickUp(this);
    RoomObj_PlaySe(&se, 0x4d4);
}

void RoomTelephone::execAct00() {
    s32 r5 = TouchPick_GetTappedObject(Scene_GetTouchPicker(), 0, 0);
    void *r0 = PlayerActor_GetActor(4);
    if (r5 && r0 && (void *)r5 == r0) {
        if (acceptsInteraction(PlayerActor_GetCharacter(4))) {
            TalkRequest_AddPlayerTalk6(this, 0);
            return;
        }
    }
    TouchPicker_pushBox(Scene_GetTouchPicker(), touchBox);
}

void RoomTelephone::enterAct00() {}

void RoomTelephone::changeAct(s32 state) {
    if (sRoomTelephoneActTable[state].enter) {
        (this->*sRoomTelephoneActTable[state].enter)();
    }
    act = state;
}

// ---------------------------------------------------------------- 0x02229e1c
void RoomTelephone::openChoices(PhoneChoiceSet *p, s32 v) {
    TalkWindowState *m = window;
    ChoiceList *o = TalkWindowState_getChoiceList(m);
    const u8 *s = p->choiceMsgs;
    u8 n = p->numChoices;
    s32 z = 0;
    s32 i;
    s32 m1 = -1;
    if (v != m1) {
        ChoiceList_reset(o, n, v);
    } else {
        ChoiceList_reset(o, n, m1);
    }
    s32 c0 = 0;
    for (i = 0; i < n; i++) {
        s32 c = c0;
        u32 b = s[i];
        if ((u8)(b + 0xec) <= 1) {
            c = 3;
        }
        u8 bb = b;
        ChoiceList_setEntry(o, i, &bb, 1, gTalkMsgIndexNone, z, c);
    }
    ChoiceList_loadTexts(o);
    TalkWindowState_openChoices(m, 1);
}

void RoomTelephone::onMessageEnd(u32) {
    TalkWindowState *m = window;
    switch (msgIndex) {
    case 0x1b:
        openChoices(&data_ov004_0224e2a8, -1);
        break;
    case 0xe:
    case 0x1f:
        if (Scene_GetCurrent() == 6) {
            openChoices(&data_ov004_0224e298, 3);
        } else {
            openChoices(&data_ov004_0224e2a0, 2);
        }
        break;
    case 0xf:
        m->openMode = 1;
        changeAct(0xd);
        break;
    case 0x20:
        TalkVoice_clearVoiceOverride(m->voice);
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        TalkVoice_clearMsgModeOverride(m->voice);
        break;
    }
}

void RoomTelephone::onMessageStart(u32) {
    TalkWindowState *m = window;
    switch (msgIndex) {
    case 0xe:
        TalkVoice_setVoiceOverride(m->voice, 0);
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        TalkVoice_setMsgModeOverride(m->voice, 0);
        break;
    }
}

VecFx32 *RoomTelephone::getInteractionPos() {
    return (VecFx32 *)sRoomTelephonePos;
}

void RoomTelephone::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL RoomTelephone::acceptsInteraction(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (Vec_DistXZ(&o->position.x, (s32 *)sRoomTelephonePos) < 0x2333) {
            u32 d = (u16)(*(s16 *)((u8 *)o + 0x8e) - (F(s16, 0x8e) + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

BOOL RoomTelephone::onDelete() {
    releaseResources();
    sRoomTelephone = 0;
    return TRUE;
}

BOOL RoomTelephone::onDraw() {
    AnimModel_drawAnimated(&model, 0);
    return TRUE;
}

BOOL RoomTelephone::onExecute() {
    if (sRoomTelephoneActTable[act].exec) {
        (this->*sRoomTelephoneActTable[act].exec)();
    }
    AnimModel_stepAnim(&model);
    return TRUE;
}

BOOL RoomTelephone::onCreate() {
    sRoomTelephone = this;
    position.x = sRoomTelephonePos[0]; position.y = sRoomTelephonePos[1]; position.z = sRoomTelephonePos[2];
    setCharId(0);
    loadResources(sRoomTelephoneArcPath, sRoomTelephoneTexPath);
    if (RoomObjRes_GetBca(&res, 0)) {
        if (AnimModel_allocAnmObj(&model, gBgHeap)) {
            s32 r = RoomObjRes_GetBca(&res, 0);
            BlendAnimModel_initAnim(&model, r, 3, 0x1000, 0, 0);
            AnimModel_attachAnim(&model);
        }
    }
    Unk_ov004_0222a0bc_V3 v;
    v.v[0] = sRoomTelephonePos[0];
    v.v[1] = sRoomTelephonePos[1];
    v.v[2] = sRoomTelephonePos[2];
    TouchPicker_addBox(Scene_GetTouchPicker(), touchBox, v.v, 0x2000, 0x2000, 0x2000, 0, 0xd, 0xff);
    u8 *const g = gSaveData;
    if (Scene_GetCurrent() == 6) {
        if (SaveData_testFlag(g, 0) == 0) {
            changeAct(8);
            SaveData_setFlag(g, 0);
        } else {
            changeAct(7);
        }
    } else {
        changeAct(0);
    }
    return TRUE;
}

RoomTelephone::~RoomTelephone() {
    _ZN15TouchPickSphereD1Ev(touchSphere);
    _ZN12TouchPickBoxD2Ev(touchBox);
    _ZN11BoxColliderD2Ev(collider);
}

RoomTelephone::RoomTelephone() {
    _ZN11BoxColliderC1Ev(collider);
    _ZN12TouchPickBoxC2Ev(touchBox);
    _ZN15TouchPickSphereC1Ev(touchSphere);
}

extern "C" RoomTelephone *RoomTelephone_GetInstance() {
    return sRoomTelephone;
}

extern "C" RoomTelephone *RoomTelephone_Create() {
    return new RoomTelephone;
}
