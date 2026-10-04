#include "types.h"
#include "Unk_020d8c7c.h"
#include "menu/MenuProc.h"

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
    TimeSelectMenu() : cursor(), bottomButtons(), picker() {}

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
    /* 0x094 */ MenuCursorBuf0 cursor;
    /* 0x0f8 */ MenuBottomButtons bottomButtons;
    /* 0x25c */ DateTimePicker picker;
    /* 0x2820 */ u16 flags;
    /* 0x2822 */ u8 returnState;
    /* 0x2823 */ u8 cursorSlot;
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
    transitionState = 0;
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
        ((MenuCursorBase *)&cursor)->drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    s32 r = getSlideOffsetY();
    DateTimePicker_Draw(&picker, 0, r);
    bottomButtons.drawAt(getSlideOffsetY());
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
    (this->*tbl[transitionState])();
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
    (this->*tbl[mainState])();
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
    bottomButtons.setLayoutSingle05(0x21);
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
    DateTimePicker_Init(&picker, 1, 6, 4, 3);
    cursorSlot = 0;
    flags = 0;
}

void TimeSelectMenu::releaseResources() {
    DateTimePicker_Shutdown(&picker);
    bottomButtons.freeTexts();
}

void TimeSelectMenu::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void TimeSelectMenu::postInputUpdate() { postStateUpdate(); }

void TimeSelectMenu::preStateUpdate() {
    bottomButtons.freeTexts();
    DateTimePicker_BeginFrame(&picker);
}

void TimeSelectMenu::postStateUpdate() { DateTimePicker_EndFrame(&picker); }

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
    DateTimePicker_LoadBgGraphics(&picker);
    DateTimePicker_DrawTitleAndFields(&picker, 0x8b);
}

void TimeSelectMenu::loadObjGfx() {
    DateTimePicker_LoadObjGraphics(&picker);
    MenuButtons_LoadTextColors(&bottomButtons);
}

void TimeSelectMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov136_02295d1c_Both()) {
        if (bottomButtons.isTouched(6)) {
            confirm();
        } else {
            u8 a = gTouchCurX;
            u8 b = gTouchCurY;
            if (DateTimePicker_GrabHand(&picker, b ? a : a, b)) {
                setMainState(1);
            }
            s32 r = DateTimePicker_HitTestTimeField(&picker, a, b);
            if (r != 6) {
                openFieldList(r);
            }
        }
    }
}

void TimeSelectMenu::stateHandDrag() {
    if (gTouchHeld == 0) {
        if (DateTimePicker_EndHandDrag(&picker)) {
            setMainState(2);
        } else {
            setMainState(0);
        }
    } else {
        DateTimePicker_UpdateHandDrag(&picker, gTouchCurX, gTouchCurY);
    }
}

void TimeSelectMenu::stateHandAnim() {
    if (DateTimePicker_UpdateHandAnim(&picker)) {
        setMainState(0);
    }
}

void TimeSelectMenu::stateListTouch() {
    if (checkSwitchToButtons(1)) {
        enterListButtonMode();
        return;
    }
    if (Unk_ov136_02295c0c_Both()) {
        s32 r = DateTimePicker_HitTestList(&picker, gTouchCurX, gTouchCurY);
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
        picker.dragKnob(gTouchCurY);
    } else {
        picker.releaseKnob();
        setMainState(3);
    }
}

void TimeSelectMenu::stateListTrackDrag() {
    if (gTouchHeld) {
        picker.dragKnobToward(gTouchCurY);
    } else {
        picker.releaseKnob();
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
    s32 r = picker.navigateList(takeRepeatedKeys());
    switch (r) {
    case 2:
        setFlags(4);
        goto rest;
    case 3: {
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        ((MenuCursorBase *)&cursor)->warpTo(b, c);
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
        picker.moveKnobByPad();
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        ((MenuCursorBase *)&cursor)->warpTo(b, c);
    } else {
        picker.releaseKnob();
        setMainState(9);
    }
}

void TimeSelectMenu::stateListKnobRelease() {
    if (picker.finishKnobRelease()) {
        setMainState(7);
        releaseCursor();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    ((MenuCursorBase *)&cursor)->warpTo(b, c);
}

void TimeSelectMenu::updateCursorMove() {
    if (!((MenuCursorBase *)&cursor)->isMoving()) {
        setMainState(returnState);
        runMainState();
    }
}

void TimeSelectMenu::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        if (testFlags(2)) {
            if (picker.grabKnobByCursor()) {
                setMainState(8);
            } else if (picker.pickListCursorRow()) {
                decideList();
            } else {
                setMainState(7);
                releaseCursor();
            }
        } else {
            u32 v = cursorSlot;
            if (v == 2) {
                confirm();
            } else {
                openFieldList(v + 3);
            }
        }
    }
}

void TimeSelectMenu::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        refreshCursor();
        setMainState(returnState);
    }
}

void TimeSelectMenu::stateExit() {
    if (bottomButtons.stepPress()) {
        if (_ZN10HandCursor7getAnimEv(&cursor)) {
            s32 a = bottomButtons.getPressOffset();
            s32 b = bottomButtons.getTargetX(-1);
            s32 c = bottomButtons.getTargetY(-1);
            ((MenuCursorBase *)&cursor)->warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void TimeSelectMenu::stateListOpening() {
    if (DateTimePicker_UpdateListOpen(&picker)) {
        enterListInputMode();
    }
}

void TimeSelectMenu::stateListClosing() {
    if (DateTimePicker_UpdateListClose(&picker)) {
        s32 r = DateTimePicker_GetCursorField(&picker);
        if (r == 6) {
            cursorSlot = 2;
        } else {
            cursorSlot = r - 3;
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
    bottomButtons.setSelected(6);
    setTransitionState(2);
    setMainState(0xd);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    DateTimePicker_GetDateTime(&picker, v);
    MenuCtrl_SetDateTime(v);
    MenuCtrl_SetResult(1);
}

void TimeSelectMenu::openFieldList(u32 a) {
    hideCursor();
    DateTimePicker_OpenList(&picker, a);
    setMainState(0xe);
}

void TimeSelectMenu::decideList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_DecideList(&picker);
    setMainState(0xf);
}

void TimeSelectMenu::cancelList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_CancelList(&picker);
    setMainState(0xf);
}

void TimeSelectMenu::enterListTouchMode() {
    hideCursor();
    setMainState(3);
}

void TimeSelectMenu::enterListButtonMode() {
    s32 t = picker.getListCursorY();
    picker.setListCursorFromY(t);
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
    ((MenuCursorBase *)&cursor)->warpTo(b, c);
    if (testFlags(2) != 0 || cursorSlot != 2) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(7);
    }
    refreshCursor();
}

s32 TimeSelectMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return picker.getListCursorX();
    }
    u32 c = cursorSlot;
    if (c == 2) {
        return bottomButtons.getTargetX(6);
    }
    return sTimeSelectCursorXTable[c];
}

s32 TimeSelectMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return picker.getListCursorY();
    }
    u32 c = cursorSlot;
    if (c == 2) {
        return bottomButtons.getTargetY(6);
    }
    return sTimeSelectCursorYTable[c];
}

void TimeSelectMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void TimeSelectMenu::moveCursorToTarget() {
    if (testFlags(2) != 0 || cursorSlot != 2) {
        ((MenuCursor *)&cursor)->switchToAnim01();
    } else {
        ((MenuCursor *)&cursor)->switchToAnim07();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    startCursorMove(b, c);
}

void TimeSelectMenu::startCursorMove(s32 a, s32 b) {
    if (testFlags(4)) {
        ((MenuCursorBase *)&cursor)->moveToEase(a, b, 2, 1);
    } else {
        ((MenuCursorBase *)&cursor)->moveToEase(a, b, 3, 1);
    }
    returnState = mainState;
    setMainState(0xa);
    clearFlags(4);
}

void TimeSelectMenu::refreshCursor() {
    ((MenuCursorBase *)&cursor)->setPoseIdle();
    cursor.vfunc_0c();
}

void TimeSelectMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(0xb);
}

void TimeSelectMenu::releaseCursor() {
    ((MenuCursorBase *)&cursor)->setPoseRelease();
    returnState = mainState;
    setMainState(0xc);
}

BOOL TimeSelectMenu::moveCursorByPad(u32 pad) {
    u32 old = cursorSlot;
    if (MenuKeys_HasLeft(pad)) {
        cursorSlot = sTimeSelectCursorLeftTable[cursorSlot];
    } else if (MenuKeys_HasRight(pad)) {
        cursorSlot = sTimeSelectCursorRightTable[cursorSlot];
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    if (MenuKeys_HasUp(pad)) {
        cursorSlot = sTimeSelectCursorUpTable[cursorSlot];
    } else if (MenuKeys_HasDown(pad)) {
        cursorSlot = sTimeSelectCursorDownTable[cursorSlot];
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

BOOL TimeSelectMenu::testFlags(u32 m) {
    if (flags & m) {
        return TRUE;
    }
    return FALSE;
}

void TimeSelectMenu::setFlags(u32 m) { flags = flags | m; }

void TimeSelectMenu::clearFlags(u32 m) { flags = flags & ~m; }

extern "C" const s32 sTimeSelectCursorXTable[3] = {0x6e, 0xae, 0};

extern "C" const s32 sTimeSelectCursorYTable[3] = {0x88, 0x88, 0};

extern "C" const u8 sTimeSelectCursorLeftTable[3] = {0, 0, 2};

extern "C" const u8 sTimeSelectCursorRightTable[3] = {1, 1, 2};

extern "C" const u8 sTimeSelectCursorUpTable[3] = {0, 1, 1};

extern "C" const u8 sTimeSelectCursorDownTable[3] = {2, 2, 2};
