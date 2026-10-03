// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// ---- sub-object declarations (defined in src/main/unk_0208d154.cpp etc.) ----
class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class NameLabelBalloon : public UiWidget {
public:
    NameLabelBalloon();
    virtual ~NameLabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL requestHide();
    BOOL requestShow();
    void setText(void *p);
    void setOffset(s32 a, s32 b);
    void release();
    void setKind(s32 a);

    /* 0x0c */ u8 unk_0c[0x74];
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);

    /* 0x0c */ u8 unk_0c[0x40];
};

class MsgString9B {
public:
    MsgString9B();
    ~MsgString9B();

    /* 0x00 */ u8 unk_00[0x1c];
};

class Unk_ov004_0224e2b8_Stub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void *vfunc_50();
};

struct Unk_ov004_0223e014_Zero {
    s32 x, y, z;
    Unk_ov004_0223e014_Zero() {}
    ~Unk_ov004_0223e014_Zero() {}
};

struct Unk_ov004_0223e10c_Pair {
    s32 a, b;
};

struct Unk_ov004_0223e2f4_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_ov004_0223e2f4_Pad {
    u16 unk_00;
    u16 unk_02;
};

extern "C" {
extern u8 gScreenTransition;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern u8 gSaveData[];
extern u8 gSavePlayers[];
extern Unk_ov004_0223e2f4_Pad gPad;
extern Unk_ov004_0223e2f4_G *gCommManager;
extern const Unk_ov004_0223e10c_Pair sResidentLabelOffsets[];
extern const Unk_ov004_0223e10c_Pair sResidentExtraLabelPos;
extern const s32 sResidentCursorExtraOffset[];
extern const s32 sResidentCursorOffsets[];
#define data_ov004_022447f0 ((const s32 *)((const u8 *)sResidentCursorOffsets + 4))
Unk_ov004_0224e2b8_Stub *RoomTelephone_GetInstance();
void Snd_PlaySe(s32 a);

s32 PlayerDataArray_IsUsed(void *, s32);
u8 *PlayerActor_GetCharacter(u32 id);
void *PlayerData_GetResident(void *a, s32 i);
void *_ZN10PlayerData11getPlayerIdEv(void *self);
void _ZN8PlayerId13getNameStringEP9MsgString(void *self, void *o);
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define PlayerId_getNameString _ZN8PlayerId13getNameStringEP9MsgString
void Camera_ProjectCurvedToScreen(s32 *a, s32 *b, void *c);
void func_02094018(void *p);
void func_02094030(void *);
s32 *PlayerActor_GetBodyPos(u32);
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
void PlayerActor_RequestTurnTo(s32 a, u32 b);
BOOL SaveManager_IsIdleForRoom(void);
void SaveManager_RequestAct03(void);
BOOL func_020e7500(void *p);
BOOL InputMode_IsTouch();
BOOL InputMode_IsButtons();
void InputMode_SetTouch(void);
void InputMode_SetButtons(void);
u8 *Scene_GetTouchPicker();
s32 TouchPickResult_GetTarget(u8 *obj, void *out, s32 *a, u8 *b);
void String_Load2d(void *o, u8 *p, u32 x);
void Clock_GetDateTime(void *p);
s32 DateTime_Compare(void *a, void *b, s32 n);
s32 _ZN8SaveData8testFlagEj(void *self, u32 i);
#define SaveData_testFlag _ZN8SaveData8testFlagEj
s32 _ZN10PlayerData6isUsedEv(void *self);
#define PlayerData_isUsed _ZN10PlayerData6isUsedEv
s32 MenuCtrl_IsClockEdited(void);
s32 MenuCtrl_ClearClockChangeFlags(void);
s32 MenuCtrl_SetClockMovedForward(void);
s32 MenuCtrl_SetClockMovedBack(void);
void TalkRequestFlags_ClearSceneHold(void);
void TalkRequestFlags_SetSceneHold(void);
void PlayerActor_LocalRequestGetOutOfBed(u32 a, u32 b);
BOOL RoomTelephone_IsTalking();
BOOL RoomTelephone_StartAct0A();
void RoomCamera_StartBlendToPlayer(void *self);
}

class ResidentSelect;
typedef void (ResidentSelect::*Unk_ov004_0224f20c_Fn)();
struct Unk_ov004_0223e6bc_Ent {
    Unk_ov004_0224f20c_Fn enter;
    Unk_ov004_0224f20c_Fn exit;
};
extern Unk_ov004_0223e6bc_Ent sResidentSelectStates[];

extern "C" void ResidentSelect_UpdateCursor(ResidentSelect *o);

static inline BOOL Unk_ov004_0223e2f4_IsMode2() {
    if (gScreenTransition == 2) {
        return TRUE;
    }
    return FALSE;
}

class ResidentSelect : public GameProc {
public:
    ResidentSelect();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~ResidentSelect();

    void updateNameLabels();
    void updateLeave();
    void enterLeave();
    void updateSave();
    void enterSave();
    void updateCameraMove();
    void enterCameraMove();
    void updateDecided();
    void enterDecided();
    void updatePadSelect();
    void enterPadSelect();
    void updateTouchSelect();
    void enterTouchSelect();
    void updateWait();
    void enterWait();
    void changeState(s32 state);

    /* 0x050 */ HandCursor unk_50;
    /* 0x09c */ NameLabelBalloon unk_9c[5];
    /* 0x31c */ u8 unk_31c;
    /* 0x31d */ u8 unk_31d;
    /* 0x31e */ u8 pad_31e[2];
    /* 0x320 */ s32 unk_320;
    /* 0x324 */ u16 unk_324;
    /* 0x326 */ u8 pad_326[2];
    /* 0x328 */ s32 unk_328;
    /* 0x32c */ s32 unk_32c;
    /* 0x330 */ s32 unk_330;
    /* 0x334 */ s32 unk_334;
    /* 0x338 */ MsgString9B unk_338;
};

// scene registration entry (referenced from main by address only)
struct Unk_ov004_0224f194_Entry {
    void *(*factory)();
    u16 a;
    u16 b;
};
extern "C" ResidentSelect *ResidentSelect_Create();
Unk_ov004_0224f194_Entry sResidentSelectProfile = {(void *(*)())ResidentSelect_Create, 0xd3, 0xce};

// state table (enter, exit) filled by __sinit from the 14 member-function-pointer constants
Unk_ov004_0223e6bc_Ent sResidentSelectStates[7] = {
    {&ResidentSelect::enterWait, &ResidentSelect::updateWait}, {&ResidentSelect::enterTouchSelect, &ResidentSelect::updateTouchSelect}, {&ResidentSelect::enterPadSelect, &ResidentSelect::updatePadSelect}, {&ResidentSelect::enterDecided, &ResidentSelect::updateDecided},
    {&ResidentSelect::enterCameraMove, &ResidentSelect::updateCameraMove}, {&ResidentSelect::enterSave, &ResidentSelect::updateSave}, {&ResidentSelect::enterLeave, &ResidentSelect::updateLeave},
};
#undef M

static inline BOOL Unk_ov004_0223e2f4_Both47() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_0223e580_BothEf() {
    if (gTouchPrevHeld != 0 && gTouchPrevChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" ResidentSelect *ResidentSelect_Create() {
    return new ResidentSelect;
}

ResidentSelect::ResidentSelect() : unk_50(1), unk_328(0), unk_32c(0) {
}

ResidentSelect::~ResidentSelect() {
}

BOOL ResidentSelect::vfunc_00() {
    u8 *g;
    u8 c;
    u8 i;
    TalkRequestFlags_SetSceneHold();
    g = gSaveData;
    for (i = 0; i < 4; i++) {
        void *o = PlayerData_GetResident(g + 0xc, i);
        if (o != 0 && PlayerData_isUsed(o) != 0) {
            unk_31c = i;
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        unk_9c[i].setKind(i);
    }
    c = 0x81;
    String_Load2d(&unk_338, &c, 0);
    if (SaveData_testFlag(g, 0) == 0) {
        changeState(0);
    } else if (InputMode_IsButtons()) {
        changeState(2);
    } else {
        changeState(1);
    }
    unk_31d = 0;
    Clock_GetDateTime(&unk_328);
    return TRUE;
}

BOOL ResidentSelect::vfunc_0c() {
    TalkRequestFlags_ClearSceneHold();
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].release();
    }
    if (MenuCtrl_IsClockEdited()) {
        s32 l[2];
        MenuCtrl_ClearClockChangeFlags();
        l[0] = 0;
        l[1] = 0;
        Clock_GetDateTime(l);
        if (DateTime_Compare(&unk_328, l, 0x3f) == -1) {
            MenuCtrl_SetClockMovedForward();
        } else {
            MenuCtrl_SetClockMovedBack();
        }
    }
    return TRUE;
}

BOOL ResidentSelect::onExecute() {
    ResidentSelect_UpdateCursor(this);
    updateNameLabels();
    if (*(u32 *)((u8 *)sResidentSelectStates + 8 + unk_320 * 16) != 0) {
        (this->*sResidentSelectStates[unk_320].exit)();
    }
    return TRUE;
}

BOOL ResidentSelect::onDraw() {
    unk_50.draw();
    u8 i;
    for (i = 0; i < 5; i++) {
        NameLabelBalloon *e = &unk_9c[i];
        e->draw();
    }
    return TRUE;
}

void ResidentSelect::changeState(s32 state) {
    if (sResidentSelectStates[state].enter) {
        (this->*sResidentSelectStates[state].enter)();
    }
    unk_320 = state;
}

void ResidentSelect::enterWait() {
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].requestHide();
    }
}

void ResidentSelect::updateWait() {
    if (!RoomTelephone_IsTalking()) {
        if (InputMode_IsButtons()) {
            changeState(2);
        } else {
            changeState(1);
        }
    }
}

void ResidentSelect::enterTouchSelect() {
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].requestShow();
    }
}

void ResidentSelect::updateTouchSelect() {
    u8 c;
    s32 a;
    s32 out[4];
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    if (InputMode_IsTouch() && Unk_ov004_0223e580_BothEf()) {
        if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), out, &a, &c) && a == 1) {
            gCommManager->unk_68 = c;
            unk_31c = c;
            changeState(3);
            return;
        }
    }
    if (RoomTelephone_IsTalking()) {
        changeState(0);
    } else if (gPad.unk_02 & 0xff3) {
        InputMode_SetButtons();
        changeState(2);
    }
}

void ResidentSelect::enterPadSelect() {
    unk_50.setAnim(7);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].requestShow();
    }
}

void ResidentSelect::updatePadSelect() {
    Unk_ov004_0223e2f4_G *g;
    u8 st;
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    g = gCommManager;
    if (g->unk_68 != 4) {
        changeState(3);
        return;
    }
    if (RoomTelephone_IsTalking()) {
        changeState(0);
        return;
    }
    if (Unk_ov004_0223e2f4_Both47()) {
        InputMode_SetTouch();
        changeState(1);
        return;
    }
    if (unk_31d != 0) {
        u16 k = gPad.unk_02;
        if (k & 0x80) {
            unk_31d = 0;
            goto L500;
        }
        {
            u32 up = k & 0x10;
            if (up == 0 && (k & 0x20) == 0) {
                goto L500;
            }
            st = unk_31c;
            if (up != 0) {
                st = 1;
            } else if (k & 0x20) {
                st = 0;
            }
        }
        if (PlayerActor_GetCharacter(st) == 0) {
            goto L500;
        }
        unk_31d = 0;
        unk_31c = st;
        goto L500;
    }
    st = unk_31c;
    switch (st) {
    case 0: {
        u16 k = gPad.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!PlayerActor_GetCharacter(st)) {
                st = st + 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 1: {
        u16 k = gPad.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!PlayerActor_GetCharacter(st)) {
                st = st - 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 2: {
        u16 k = gPad.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!PlayerActor_GetCharacter(st)) {
                st = st + 1;
                if (!PlayerActor_GetCharacter(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    case 3: {
        u16 k = gPad.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!PlayerActor_GetCharacter(st)) {
                st = st - 1;
                if (!PlayerActor_GetCharacter(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    }
    if (PlayerActor_GetCharacter(st) != 0) {
        unk_31c = st;
    }
L500:
    {
        u16 k = gPad.unk_02;
        if ((k & 8) || (k & 1)) {
            if (unk_31d != 0) {
                RoomTelephone_StartAct0A();
            } else {
                g->unk_68 = unk_31c;
                changeState(3);
            }
        }
    }
}

void ResidentSelect::enterDecided() {
    BOOL r = FALSE;
    u8 v = unk_31c;
    if (v == 0 || v == 2) {
        r = TRUE;
    }
    PlayerActor_LocalRequestGetOutOfBed(r, 1);
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].requestHide();
    }
    unk_324 = 0x19;
}

void ResidentSelect::updateDecided() {
    if (!func_020e7500(&unk_324)) {
        changeState(4);
    }
}

void ResidentSelect::enterCameraMove() {
    RoomCamera_StartBlendToPlayer(this);
    PlayerActor_RequestTurnTo(0, 4);
    unk_324 = 5;
}

void ResidentSelect::updateCameraMove() {
    if (!func_020e7500(&unk_324)) {
        changeState(5);
    }
}

void ResidentSelect::enterSave() {
    SaveManager_RequestAct03();
}

void ResidentSelect::updateSave() {
    if (SaveManager_IsIdleForRoom()) {
        changeState(6);
    }
}

void ResidentSelect::enterLeave() {
    s32 v[3];
    s32 *p = PlayerActor_GetBodyPos(4);
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    v[2] = v[2] + 0x6000;
    PlayerActor_RequestWalkTo(v, 0x2b8, 4);
}

void ResidentSelect::updateLeave() {
}

void ResidentSelect::updateNameLabels() {
    u8 i;
    for (i = 0; i < 4; i++) {
        if (PlayerDataArray_IsUsed(gSavePlayers, i) != 0) {
            u8 *a = PlayerActor_GetCharacter(i);
            if (a != 0) {
                s32 x, y;
                s32 v[3];
                s32 *pv = (s32 *)(a + 0x5c);
                v[0] = *(s32 *)(a + 0x5c);
                v[1] = pv[1];
                v[2] = pv[2];
                MsgString9B o;
                PlayerId_getNameString(PlayerData_getPlayerId(PlayerData_GetResident(gSavePlayers, i)), &o);
                Camera_ProjectCurvedToScreen(&x, &y, v);
                x += sResidentLabelOffsets[i].a;
                y += sResidentLabelOffsets[i].b;
                NameLabelBalloon *e = &unk_9c[i];
                e->setOffset(x, y);
                e->setText(&o);
                e->vfunc_0c();
            }
        }
    }
    unk_9c[4].setOffset(sResidentExtraLabelPos.a, sResidentExtraLabelPos.b);
    unk_9c[4].setText(&unk_338);
    NameLabelBalloon *e4 = &unk_9c[4];
    e4->vfunc_0c();
}

extern "C" void ResidentSelect_UpdateCursor(ResidentSelect *o) {
    Unk_ov004_0223e014_Zero z;
    s32 xy[2];
    void *pp;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    if (o->unk_31d != 0) {
        pp = RoomTelephone_GetInstance()->vfunc_50();
    } else {
        pp = (u8 *)PlayerActor_GetCharacter(o->unk_31c) + 0x5c;
    }
    Camera_ProjectCurvedToScreen(&xy[0], &xy[1], pp);
    if (o->unk_31d == 0) {
        xy[0] = xy[0] + sResidentCursorOffsets[o->unk_31c * 2];
        xy[1] = xy[1] + data_ov004_022447f0[o->unk_31c * 2];
    } else {
        xy[0] = xy[0] + sResidentCursorExtraOffset[0];
        xy[1] = xy[1] + sResidentCursorExtraOffset[1];
    }
    BOOL t;
    if (gScreenTransition == 2) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) {
        if (o->unk_320 == 2) {
            if (o->unk_330 != xy[0] || o->unk_334 != xy[1]) {
                Snd_PlaySe(0xb);
            }
        }
    }
    o->unk_50.setPos(xy[0], xy[1]);
    o->unk_50.vfunc_0c();
    o->unk_330 = xy[0];
    o->unk_334 = xy[1];
}

// ---- rodata (defined after the functions so that the compiler cannot fold the loads) ----
const s32 sResidentCursorExtraOffset[2] = {-6, -14};
const s32 sResidentCursorOffsets[8] = {-15, -12, -8, -12, -19, -14, -11, -14};
const Unk_ov004_0223e10c_Pair sResidentExtraLabelPos = {15, -92};
const Unk_ov004_0223e10c_Pair sResidentLabelOffsets[4] = {{-5, -5}, {5, -5}, {-5, 0}, {5, 0}};
