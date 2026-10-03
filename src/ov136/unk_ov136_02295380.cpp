#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class DateTimePicker;

extern "C" {
extern const u8 sTimeSelectCursorRightTable[3];
extern const u8 sTimeSelectCursorLeftTable[3];
extern const u8 sTimeSelectCursorDownTable[3];
extern const u8 sTimeSelectCursorUpTable[3];
extern const s32 sTimeSelectCursorXTable[3];
extern const s32 sTimeSelectCursorYTable[3];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;

BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void MenuCtrl_SetDateTime(void *p);
void MenuCtrl_SetResult(u32 v);
void Gfx2d_SetSubBgModeState(u32 a);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void *ProcBase_GetParent();
void ProcBase_RequestDelete();
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
s32 _ZN10HandCursor7getAnimEv(void *self);
s32 _ZN10HandCursor10isAnimDoneEv(void *self);
void _ZN12MenuLauncher14setNextRequestEii(void *self, s32 a, s32 b);
void _ZN12MenuLauncher13onChildClosedEv(void *self);
void MenuButtons_LoadTextColors(void *self);

// ov134 library functions (plain symbols; first argument is the DateTimePicker object)
s32 DateTimePicker_HitTestList(DateTimePicker *p, s32 a, s32 b);
BOOL DateTimePicker_UpdateListClose(DateTimePicker *p);
void DateTimePicker_CancelList(DateTimePicker *p);
void DateTimePicker_DecideList(DateTimePicker *p);
BOOL DateTimePicker_UpdateListOpen(DateTimePicker *p);
void DateTimePicker_OpenList(DateTimePicker *p, u32 a);
s32 DateTimePicker_GetCursorField(DateTimePicker *p);
s32 DateTimePicker_HitTestTimeField(DateTimePicker *p, u8 a, u8 b);
BOOL DateTimePicker_UpdateHandAnim(DateTimePicker *p);
BOOL DateTimePicker_EndHandDrag(DateTimePicker *p);
void DateTimePicker_UpdateHandDrag(DateTimePicker *p, u8 a, u8 b);
BOOL DateTimePicker_GrabHand(DateTimePicker *p, u8 a, u8 b);
void DateTimePicker_Draw(DateTimePicker *p, s32 a, s32 b);
void DateTimePicker_LoadObjGraphics(DateTimePicker *p);
void DateTimePicker_DrawTitleAndFields(DateTimePicker *p, s32 a);
void DateTimePicker_LoadBgGraphics(DateTimePicker *p);
void DateTimePicker_GetDateTime(DateTimePicker *p, void *out);
void DateTimePicker_EndFrame(DateTimePicker *p);
void DateTimePicker_BeginFrame(DateTimePicker *p);
void DateTimePicker_Shutdown(DateTimePicker *p);
void DateTimePicker_Init(DateTimePicker *p, s32 a, s32 b, s32 c, s32 d);
}

// ov134 library object embedded at +0x25c (size 0x25c4)
class DateTimePicker {
public:
    DateTimePicker();
    ~DateTimePicker();
    BOOL pickListCursorRow();
    s32 navigateList(u32 pad);
    void setListCursorFromY(s32 y);
    s32 getListCursorY();
    s32 getListCursorX();
    BOOL finishKnobRelease();
    void releaseKnob();
    void moveKnobByPad();
    void dragKnobToward(s32 x);
    void dragKnob(s32 x);
    BOOL grabKnobByCursor();
    u8 unk_00[0x25c4];
};

class MenuCursorBase {
public:
    void drawWrapped();
    void setPoseRelease();
    void setPoseIdle();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    s32 isMoving();
};

class MenuCursor {
public:
    void setPosePress();
    void switchToAnim07();
    void switchToAnim01();
    void setAnimIfChanged(s32 v);
};

class MenuCursorBuf0 {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class MenuBottomButtonsBody {
public:
    void setSelected(u8 v);
    s32 isTouched(s32 v);
    s32 stepPress();
    s32 getPressOffset();
    s32 getTargetX(s32 v);
    s32 getTargetY(s32 v);
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutSingle05(s32 v);
    void drawAt(s32 a);
    void freeTexts();

    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class MenuProc : public GameProc {
public:
    MenuProc();
    virtual ~MenuProc();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL execWaitScreen();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void applySlideOffset(s32 a, s32 b, s32 c);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    s32 takeRepeatedKeys();
    s32 checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ MenuProc *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

class TimeSelectMenu;
typedef void (TimeSelectMenu::*Unk_ov136_022963b0_Fn)();

struct Unk_ov136_SceneEntry {
    TimeSelectMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" TimeSelectMenu *TimeSelectMenu_Create();

// Vtable 0x022963b0
class TimeSelectMenu : public MenuProc {
public:
    TimeSelectMenu() : unk_94(), unk_f8(), unk_25c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    BOOL moveCursorByPad(u32 pad);
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void startCursorMove(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void enterListInputMode();
    void enterListButtonMode();
    void enterListTouchMode();
    void cancelList();
    void decideList();
    void openFieldList(u32 a);
    void confirm();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void stateListClosing();
    void stateListOpening();
    void stateExit();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void stateListKnobRelease();
    void stateListKnobHold();
    void stateListButtons();
    void updateButtons();
    void stateListTrackDrag();
    void stateListKnobDrag();
    void stateListTouch();
    void stateHandAnim();
    void stateHandDrag();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initPicker();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ MenuCursorBuf0 unk_94;
    /* 0x0f8 */ MenuBottomButtons unk_f8;
    /* 0x25c */ DateTimePicker unk_25c;
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

extern "C" Unk_ov136_SceneEntry sTimeSelectMenuProfile;

static inline BOOL Unk_ov136_02295c0c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov136_02295d1c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" TimeSelectMenu *TimeSelectMenu_Create() { return new TimeSelectMenu(); }

BOOL TimeSelectMenu::vfunc_00() {
    initPicker();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL TimeSelectMenu::vfunc_0c() {
    _ZN12MenuLauncher13onChildClosedEv(ProcBase_GetParent());
    releaseResources();
    return TRUE;
}

BOOL TimeSelectMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_94)->drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    s32 r = getSlideOffsetY();
    DateTimePicker_Draw(&unk_25c, 0, r);
    unk_f8.drawAt(getSlideOffsetY());
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov136_SceneEntry sTimeSelectMenuProfile;
extern "C" const s32 sTimeSelectCursorXTable[3];
extern "C" const s32 sTimeSelectCursorYTable[3];
extern "C" const u8 sTimeSelectCursorLeftTable[3];
extern "C" const u8 sTimeSelectCursorRightTable[3];
extern "C" const u8 sTimeSelectCursorUpTable[3];
extern "C" const u8 sTimeSelectCursorDownTable[3];

extern "C" Unk_ov136_SceneEntry sTimeSelectMenuProfile = {TimeSelectMenu_Create, 0xaf, 0xb3};

BOOL TimeSelectMenu::execTransition() {
    static Unk_ov136_022963b0_Fn tbl[4] = {
        &TimeSelectMenu::stateOpen, &TimeSelectMenu::stateOpening,
        &TimeSelectMenu::stateClose, &TimeSelectMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void TimeSelectMenu::runMainState() {
    static Unk_ov136_022963b0_Fn tbl[16] = {
        &TimeSelectMenu::updateTouch, &TimeSelectMenu::stateHandDrag,
        &TimeSelectMenu::stateHandAnim, &TimeSelectMenu::stateListTouch,
        &TimeSelectMenu::stateListKnobDrag, &TimeSelectMenu::stateListTrackDrag,
        &TimeSelectMenu::updateButtons, &TimeSelectMenu::stateListButtons,
        &TimeSelectMenu::stateListKnobHold, &TimeSelectMenu::stateListKnobRelease,
        &TimeSelectMenu::updateCursorMove, &TimeSelectMenu::updateCursorPress,
        &TimeSelectMenu::updateCursorRelease, &TimeSelectMenu::stateExit,
        &TimeSelectMenu::stateListOpening, &TimeSelectMenu::stateListClosing};
    (this->*tbl[unk_8d])();
}

BOOL TimeSelectMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL TimeSelectMenu::execPhase3() { return TRUE; }

BOOL TimeSelectMenu::execPhase4() { return TRUE; }

BOOL TimeSelectMenu::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void TimeSelectMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    beginSubSlideIn(0xa, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    unk_f8.setLayoutSingle05(0x21);
    setTransitionState(1);
}

void TimeSelectMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void TimeSelectMenu::stateClose() {
    _ZN12MenuLauncher14setNextRequestEii(ProcBase_GetParent(), 0x44, 1);
    beginSubSlideOut(0xa, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
}

void TimeSelectMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void TimeSelectMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
}

void TimeSelectMenu::initPicker() {
    DateTimePicker_Init(&unk_25c, 1, 6, 4, 3);
    unk_2823 = 0;
    unk_2820 = 0;
}

void TimeSelectMenu::releaseResources() {
    DateTimePicker_Shutdown(&unk_25c);
    unk_f8.freeTexts();
}

void TimeSelectMenu::preInputUpdate() {
    preStateUpdate();
    unk_94.vfunc_0c();
}

void TimeSelectMenu::postInputUpdate() { postStateUpdate(); }

void TimeSelectMenu::preStateUpdate() {
    unk_f8.freeTexts();
    DateTimePicker_BeginFrame(&unk_25c);
}

void TimeSelectMenu::postStateUpdate() { DateTimePicker_EndFrame(&unk_25c); }

void TimeSelectMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void TimeSelectMenu::loadBgGfx() {
    DateTimePicker_LoadBgGraphics(&unk_25c);
    DateTimePicker_DrawTitleAndFields(&unk_25c, 0x8b);
}

void TimeSelectMenu::loadObjGfx() {
    DateTimePicker_LoadObjGraphics(&unk_25c);
    MenuButtons_LoadTextColors(&unk_f8);
}

void TimeSelectMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov136_02295d1c_Both()) {
        if (unk_f8.isTouched(6)) {
            confirm();
        } else {
            u8 a = gTouchCurX;
            u8 b = gTouchCurY;
            if (DateTimePicker_GrabHand(&unk_25c, b ? a : a, b)) {
                setMainState(1);
            }
            s32 r = DateTimePicker_HitTestTimeField(&unk_25c, a, b);
            if (r != 6) {
                openFieldList(r);
            }
        }
    }
}

void TimeSelectMenu::stateHandDrag() {
    if (gTouchHeld == 0) {
        if (DateTimePicker_EndHandDrag(&unk_25c)) {
            setMainState(2);
        } else {
            setMainState(0);
        }
    } else {
        DateTimePicker_UpdateHandDrag(&unk_25c, gTouchCurX, gTouchCurY);
    }
}

void TimeSelectMenu::stateHandAnim() {
    if (DateTimePicker_UpdateHandAnim(&unk_25c)) {
        setMainState(0);
    }
}

void TimeSelectMenu::stateListTouch() {
    if (checkSwitchToButtons(1)) {
        enterListButtonMode();
        return;
    }
    if (Unk_ov136_02295c0c_Both()) {
        s32 r = DateTimePicker_HitTestList(&unk_25c, gTouchCurX, gTouchCurY);
        switch (r) {
        case 0:
            decideList();
            break;
        case 1:
            cancelList();
            break;
        case 3:
            setMainState(4);
            break;
        case 2:
            setMainState(5);
            break;
        }
    }
}

void TimeSelectMenu::stateListKnobDrag() {
    if (gTouchHeld) {
        unk_25c.dragKnob(gTouchCurY);
    } else {
        unk_25c.releaseKnob();
        setMainState(3);
    }
}

void TimeSelectMenu::stateListTrackDrag() {
    if (gTouchHeld) {
        unk_25c.dragKnobToward(gTouchCurY);
    } else {
        unk_25c.releaseKnob();
        setMainState(3);
    }
}

void TimeSelectMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    s32 x = takeRepeatedKeys();
    if (moveCursorByPad(x)) {
        moveCursorToTarget();
        return;
    }
    u32 v = gPad[1];
    if (v & 1) {
        pressCursor();
    } else if (v & 8) {
        hideCursor();
        confirm();
    }
}

void TimeSelectMenu::stateListButtons() {
    if (checkSwitchToTouch()) {
        enterListTouchMode();
        return;
    }
    s32 r = unk_25c.navigateList(takeRepeatedKeys());
    switch (r) {
    case 2:
        setFlags(4);
        goto rest;
    case 3: {
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        ((MenuCursorBase *)&unk_94)->warpTo(b, c);
        return;
    }
    default:
    rest:
        moveCursorToTarget();
        return;
    case 0: {
        u32 v = gPad[1];
        if (v & 1) {
            pressCursor();
        } else if (v & 2) {
            cancelList();
        }
        return;
    }
    }
}

void TimeSelectMenu::stateListKnobHold() {
    if (gPad[0] & 1) {
        unk_25c.moveKnobByPad();
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        ((MenuCursorBase *)&unk_94)->warpTo(b, c);
    } else {
        unk_25c.releaseKnob();
        setMainState(9);
    }
}

void TimeSelectMenu::stateListKnobRelease() {
    if (unk_25c.finishKnobRelease()) {
        setMainState(7);
        releaseCursor();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    ((MenuCursorBase *)&unk_94)->warpTo(b, c);
}

void TimeSelectMenu::updateCursorMove() {
    if (!((MenuCursorBase *)&unk_94)->isMoving()) {
        setMainState(unk_2822);
        runMainState();
    }
}

void TimeSelectMenu::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        if (testFlags(2)) {
            if (unk_25c.grabKnobByCursor()) {
                setMainState(8);
            } else if (unk_25c.pickListCursorRow()) {
                decideList();
            } else {
                setMainState(7);
                releaseCursor();
            }
        } else {
            u32 v = unk_2823;
            if (v == 2) {
                confirm();
            } else {
                openFieldList(v + 3);
            }
        }
    }
}

void TimeSelectMenu::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        refreshCursor();
        setMainState(unk_2822);
    }
}

void TimeSelectMenu::stateExit() {
    if (unk_f8.stepPress()) {
        if (_ZN10HandCursor7getAnimEv(&unk_94)) {
            s32 a = unk_f8.getPressOffset();
            s32 b = unk_f8.getTargetX(-1);
            s32 c = unk_f8.getTargetY(-1);
            ((MenuCursorBase *)&unk_94)->warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void TimeSelectMenu::stateListOpening() {
    if (DateTimePicker_UpdateListOpen(&unk_25c)) {
        enterListInputMode();
    }
}

void TimeSelectMenu::stateListClosing() {
    if (DateTimePicker_UpdateListClose(&unk_25c)) {
        s32 r = DateTimePicker_GetCursorField(&unk_25c);
        if (r == 6) {
            unk_2823 = 2;
        } else {
            unk_2823 = r - 3;
        }
        resumeInput();
    }
}

void TimeSelectMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void TimeSelectMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(6);
}

void TimeSelectMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void TimeSelectMenu::confirm() {
    unk_f8.setSelected(6);
    setTransitionState(2);
    setMainState(0xd);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    DateTimePicker_GetDateTime(&unk_25c, v);
    MenuCtrl_SetDateTime(v);
    MenuCtrl_SetResult(1);
}

void TimeSelectMenu::openFieldList(u32 a) {
    hideCursor();
    DateTimePicker_OpenList(&unk_25c, a);
    setMainState(0xe);
}

void TimeSelectMenu::decideList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_DecideList(&unk_25c);
    setMainState(0xf);
}

void TimeSelectMenu::cancelList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_CancelList(&unk_25c);
    setMainState(0xf);
}

void TimeSelectMenu::enterListTouchMode() {
    hideCursor();
    setMainState(3);
}

void TimeSelectMenu::enterListButtonMode() {
    s32 t = unk_25c.getListCursorY();
    unk_25c.setListCursorFromY(t);
    setFlags(2);
    showCursor();
    restartKeyRepeat();
    setMainState(7);
}

void TimeSelectMenu::enterListInputMode() {
    if (MenuCtrl_IsTouch()) {
        enterListTouchMode();
    } else {
        enterListButtonMode();
    }
}

void TimeSelectMenu::showCursor() {
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    ((MenuCursorBase *)&unk_94)->warpTo(b, c);
    if (testFlags(2) != 0 || unk_2823 != 2) {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(1);
    } else {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(7);
    }
    refreshCursor();
}

s32 TimeSelectMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return unk_25c.getListCursorX();
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.getTargetX(6);
    }
    return sTimeSelectCursorXTable[c];
}

s32 TimeSelectMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return unk_25c.getListCursorY();
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.getTargetY(6);
    }
    return sTimeSelectCursorYTable[c];
}

void TimeSelectMenu::hideCursor() {
    ((MenuCursor *)&unk_94)->setAnimIfChanged(0);
    unk_94.vfunc_0c();
}

void TimeSelectMenu::moveCursorToTarget() {
    if (testFlags(2) != 0 || unk_2823 != 2) {
        ((MenuCursor *)&unk_94)->switchToAnim01();
    } else {
        ((MenuCursor *)&unk_94)->switchToAnim07();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    startCursorMove(b, c);
}

void TimeSelectMenu::startCursorMove(s32 a, s32 b) {
    if (testFlags(4)) {
        ((MenuCursorBase *)&unk_94)->moveToEase(a, b, 2, 1);
    } else {
        ((MenuCursorBase *)&unk_94)->moveToEase(a, b, 3, 1);
    }
    unk_2822 = unk_8d;
    setMainState(0xa);
    clearFlags(4);
}

void TimeSelectMenu::refreshCursor() {
    ((MenuCursorBase *)&unk_94)->setPoseIdle();
    unk_94.vfunc_0c();
}

void TimeSelectMenu::pressCursor() {
    ((MenuCursor *)&unk_94)->setPosePress();
    setMainState(0xb);
}

void TimeSelectMenu::releaseCursor() {
    ((MenuCursorBase *)&unk_94)->setPoseRelease();
    unk_2822 = unk_8d;
    setMainState(0xc);
}

BOOL TimeSelectMenu::moveCursorByPad(u32 pad) {
    u32 old = unk_2823;
    if (MenuKeys_HasLeft(pad)) {
        unk_2823 = sTimeSelectCursorLeftTable[unk_2823];
    } else if (MenuKeys_HasRight(pad)) {
        unk_2823 = sTimeSelectCursorRightTable[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    if (MenuKeys_HasUp(pad)) {
        unk_2823 = sTimeSelectCursorUpTable[unk_2823];
    } else if (MenuKeys_HasDown(pad)) {
        unk_2823 = sTimeSelectCursorDownTable[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    return FALSE;
}

BOOL TimeSelectMenu::testFlags(u32 m) {
    if (unk_2820 & m) {
        return TRUE;
    }
    return FALSE;
}

void TimeSelectMenu::setFlags(u32 m) { unk_2820 = unk_2820 | m; }

void TimeSelectMenu::clearFlags(u32 m) { unk_2820 = unk_2820 & ~m; }

extern "C" const s32 sTimeSelectCursorXTable[3] = {0x6e, 0xae, 0};

extern "C" const s32 sTimeSelectCursorYTable[3] = {0x88, 0x88, 0};

extern "C" const u8 sTimeSelectCursorLeftTable[3] = {0, 0, 2};

extern "C" const u8 sTimeSelectCursorRightTable[3] = {1, 1, 2};

extern "C" const u8 sTimeSelectCursorUpTable[3] = {0, 1, 1};

extern "C" const u8 sTimeSelectCursorDownTable[3] = {2, 2, 2};
