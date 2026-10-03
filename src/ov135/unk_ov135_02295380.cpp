#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 sClockAdjustCursorLeftTable[7];
extern const u8 sClockAdjustCursorRightTable[7];
extern const u8 sClockAdjustCursorDownTable[7];
extern const u8 sClockAdjustCursorUpTable[7];
extern const s32 sClockAdjustCursorXTable[7];
extern const s32 sClockAdjustCursorYTable[7];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gSaveData[];

BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void MenuCtrl_SetClockEdited();
void MenuCtrl_SetResult(u32 v);
s32 MenuCtrl_GetMode();
void MenuCtrl_SetDateTime(void *p);
void MenuCtrl_SetClockMovedBack();
void MenuCtrl_SetClockMovedForward();
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 ClockOffset_CalcMinutes(void *p, void *q);
u16 ClockOffset_CalcSeconds(void *p, void *q);
void Clock_Init();
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void MenuButtons_LoadTextColors(void *self);
void _ZN12MenuLauncher13onChildClosedEv(void *self);
void _ZN12MenuLauncher14setNextRequestEii(void *self, s32 a, s32 b);

// ov134 library object (DateTimePicker) plain functions; first argument is the object
u32 DateTimePicker_HitTestList(void *self, u8 a, u8 b);
BOOL DateTimePicker_UpdateListClose(void *self);
void DateTimePicker_CancelList(void *self);
void DateTimePicker_DecideList(void *self);
BOOL DateTimePicker_UpdateListOpen(void *self);
void DateTimePicker_OpenList(void *self, u32 a);
s32 DateTimePicker_GetCursorField(void *self);
s32 DateTimePicker_HitTestField(void *self, u8 a, u8 b);
BOOL DateTimePicker_UpdateHandAnim(void *self);
BOOL DateTimePicker_EndHandDrag(void *self);
void DateTimePicker_UpdateHandDrag(void *self, u8 a, u8 b);
BOOL DateTimePicker_GrabHand(void *self, u8 a, u8 b);
void DateTimePicker_Draw(void *self, s32 a, s32 b);
void DateTimePicker_LoadObjGraphics(void *self);
void DateTimePicker_DrawTitleAndFields(void *self, s32 a);
void DateTimePicker_LoadBgGraphics(void *self);
BOOL DateTimePicker_IsBeforeStart(void *self);
void DateTimePicker_GetDateTime(void *self, void *out);
void DateTimePicker_EndFrame(void *self);
void DateTimePicker_BeginFrame(void *self);
void DateTimePicker_Shutdown(void *self);
void DateTimePicker_EnableMinLimit(void *self);
void DateTimePicker_Init(void *self, s32 a, s32 b, s32 c, s32 d);
}

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
    void setSlideExtent(s32 a);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
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
    void func_ov002_02200a68();

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

// Menu cursor sub-object hierarchy (src/ov002/unk_02202200.cpp, unk_02202b68.cpp)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

// Same object as MenuCursorBase under the name used by src/ov002/unk_02202b68.cpp
class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 a);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
};

class MenuBottomButtonsBody {
public:
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 a);
};

// Menu list sub-object, 0x164 bytes
class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmAnd06(u8 a);
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

// ov134 library object at +0x260, 0x25c4 bytes
class DateTimePicker {
public:
    BOOL pickListCursorRow();
    void setListCursorFromY(s32 y);
    s32 getListCursorY();
    s32 getListCursorX();
    BOOL finishKnobRelease();
    void releaseKnob();
    void moveKnobByPad();
    void dragKnobToward(s32 x);
    void dragKnob(s32 x);
    BOOL grabKnobByCursor();
    s32 navigateList(u32 pad);
    DateTimePicker();
    ~DateTimePicker();
    u8 unk_00[0x25c4];
};

class ClockAdjustMenu;
typedef void (ClockAdjustMenu::*Unk_ov135_022964b0_Fn)();

static inline BOOL Unk_ov135_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022964b0, size 0x2824 (scene overlay on MenuProc)
class ClockAdjustMenu : public MenuProc {
public:
    ClockAdjustMenu() : unk_98(), unk_fc(), unk_260() {}

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
    void cancel();
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
    void runMainState();
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

    /* 0x091 */ u8 unk_91;
    /* 0x092 */ u16 unk_92;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 unk_95;
    /* 0x096 */ u8 unk_96[2];
    /* 0x098 */ MenuCursorBuf0 unk_98;
    /* 0x0fc */ MenuBottomButtons unk_fc;
    /* 0x260 */ DateTimePicker unk_260;
};

extern "C" ClockAdjustMenu *ClockAdjustMenu_Create() { return new ClockAdjustMenu(); }

struct Unk_ov135_SceneEntry {
    ClockAdjustMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov135_SceneEntry sClockAdjustMenuProfile = {ClockAdjustMenu_Create, 0xae, 0xb2};

BOOL ClockAdjustMenu::vfunc_00() {
    initPicker();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL ClockAdjustMenu::vfunc_0c() {
    _ZN12MenuLauncher13onChildClosedEv(ProcBase_GetParent());
    releaseResources();
    return TRUE;
}

BOOL ClockAdjustMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_98.drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    s32 r = getSlideOffsetY();
    DateTimePicker_Draw(&unk_260, 0, r);
    s32 r2 = getSlideOffsetY();
    unk_fc.drawAt(r2);
    return TRUE;
}

BOOL ClockAdjustMenu::execTransition() {
    static Unk_ov135_022964b0_Fn tbl[4] = {
        &ClockAdjustMenu::stateOpen,
        &ClockAdjustMenu::stateOpening,
        &ClockAdjustMenu::stateClose,
        &ClockAdjustMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void ClockAdjustMenu::runMainState() {
    static Unk_ov135_022964b0_Fn tbl[16] = {
        &ClockAdjustMenu::updateTouch,
        &ClockAdjustMenu::stateHandDrag,
        &ClockAdjustMenu::stateHandAnim,
        &ClockAdjustMenu::stateListTouch,
        &ClockAdjustMenu::stateListKnobDrag,
        &ClockAdjustMenu::stateListTrackDrag,
        &ClockAdjustMenu::updateButtons,
        &ClockAdjustMenu::stateListButtons,
        &ClockAdjustMenu::stateListKnobHold,
        &ClockAdjustMenu::stateListKnobRelease,
        &ClockAdjustMenu::updateCursorMove,
        &ClockAdjustMenu::updateCursorPress,
        &ClockAdjustMenu::updateCursorRelease,
        &ClockAdjustMenu::stateExit,
        &ClockAdjustMenu::stateListOpening,
        &ClockAdjustMenu::stateListClosing};
    (this->*tbl[unk_8d])();
}

BOOL ClockAdjustMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL ClockAdjustMenu::execPhase3() { return TRUE; }

BOOL ClockAdjustMenu::execPhase4() { return TRUE; }

BOOL ClockAdjustMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void ClockAdjustMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    beginSubSlideIn(10, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    unk_fc.setLayoutConfirmAnd06(0x65);
    setTransitionState(1);
}

void ClockAdjustMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void ClockAdjustMenu::stateClose() {
    _ZN12MenuLauncher14setNextRequestEii(ProcBase_GetParent(), 0x44, 1);
    beginSubSlideOut(10, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
}

void ClockAdjustMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void ClockAdjustMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
}

void ClockAdjustMenu::initPicker() {
    DateTimePicker_Init(&unk_260, 0, 6, 4, 3);
    if (MenuCtrl_GetMode() == 0x33) {
        DateTimePicker_EnableMinLimit(&unk_260);
    }
    unk_95 = 0;
    unk_92 = 0;
}

void ClockAdjustMenu::releaseResources() {
    DateTimePicker_Shutdown(&unk_260);
    unk_fc.freeTexts();
}

void ClockAdjustMenu::preInputUpdate() {
    preStateUpdate();
    unk_98.vfunc_0c();
}

void ClockAdjustMenu::postInputUpdate() {
    postStateUpdate();
}

void ClockAdjustMenu::preStateUpdate() {
    unk_fc.freeTexts();
    DateTimePicker_BeginFrame(&unk_260);
}

void ClockAdjustMenu::postStateUpdate() {
    DateTimePicker_EndFrame(&unk_260);
}

void ClockAdjustMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void ClockAdjustMenu::loadBgGfx() {
    DateTimePicker_LoadBgGraphics(&unk_260);
    DateTimePicker_DrawTitleAndFields(&unk_260, 0x6b);
}

void ClockAdjustMenu::loadObjGfx() {
    DateTimePicker_LoadObjGraphics(&unk_260);
    MenuButtons_LoadTextColors(&unk_fc);
}

void ClockAdjustMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov135_Both()) {
            if (unk_fc.isTouched(6)) {
                confirm();
            } else if (unk_fc.isTouched(7)) {
                cancel();
            } else {
                u8 a = gTouchCurX;
                u8 b = gTouchCurY;
                if (DateTimePicker_GrabHand(&unk_260, b ? a : a, b)) {
                    MenuCtrl_SetClockEdited();
                    setMainState(1);
                }
                s32 r = DateTimePicker_HitTestField(&unk_260, a, b);
                if (r != 6) {
                    openFieldList(r);
                }
            }
        }
    }
}

void ClockAdjustMenu::stateHandDrag() {
    if (gTouchHeld == 0) {
        if (DateTimePicker_EndHandDrag(&unk_260)) {
            setMainState(2);
        } else {
            setMainState(0);
        }
    } else {
        DateTimePicker_UpdateHandDrag(&unk_260, gTouchCurX, gTouchCurY);
    }
}

void ClockAdjustMenu::stateHandAnim() {
    if (DateTimePicker_UpdateHandAnim(&unk_260)) {
        setMainState(0);
    }
}

void ClockAdjustMenu::stateListTouch() {
    if (checkSwitchToButtons(1)) {
        enterListButtonMode();
    } else {
        if (Unk_ov135_Both()) {
            switch (DateTimePicker_HitTestList(&unk_260, gTouchCurX, gTouchCurY)) {
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
}

void ClockAdjustMenu::stateListKnobDrag() {
    if (gTouchHeld) {
        unk_260.dragKnob(gTouchCurY);
    } else {
        unk_260.releaseKnob();
        setMainState(3);
    }
}

void ClockAdjustMenu::stateListTrackDrag() {
    if (gTouchHeld) {
        unk_260.dragKnobToward(gTouchCurY);
    } else {
        unk_260.releaseKnob();
        setMainState(3);
    }
}

void ClockAdjustMenu::updateButtons() {
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
    } else if (v & 2) {
        hideCursor();
        cancel();
    }
}

void ClockAdjustMenu::stateListButtons() {
    if (checkSwitchToTouch()) {
        enterListTouchMode();
        return;
    }
    s32 r = unk_260.navigateList(takeRepeatedKeys());
    switch (r) {
    case 0:
        goto zero;
    case 2:
        setFlags(4);
        break;
    case 3: {
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        unk_98.warpTo(b, c);
        return;
    }
    default:
        break;
    }
    moveCursorToTarget();
    return;
zero: {
        u32 v = gPad[1];
        if (v & 1) {
            pressCursor();
        } else if (v & 2) {
            cancelList();
        }
    }
}

void ClockAdjustMenu::stateListKnobHold() {
    if (gPad[0] & 1) {
        unk_260.moveKnobByPad();
        s32 b = getCursorTargetX();
        s32 c = getCursorTargetY();
        unk_98.warpTo(b, c);
    } else {
        unk_260.releaseKnob();
        setMainState(9);
    }
}

void ClockAdjustMenu::stateListKnobRelease() {
    if (unk_260.finishKnobRelease()) {
        setMainState(7);
        releaseCursor();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    unk_98.warpTo(b, c);
}

void ClockAdjustMenu::updateCursorMove() {
    if (!unk_98.isMoving()) {
        setMainState(unk_94);
        runMainState();
    }
}

void ClockAdjustMenu::updateCursorPress() {
    if (unk_98.isAnimDone()) {
        if (testFlags(2)) {
            if (unk_260.grabKnobByCursor()) {
                setMainState(8);
            } else if (unk_260.pickListCursorRow()) {
                decideList();
            } else {
                setMainState(7);
                releaseCursor();
            }
        } else {
            u32 v = unk_95;
            if (v == 5) {
                confirm();
            } else if (v == 6) {
                cancel();
            } else {
                openFieldList(v);
            }
        }
    }
}

void ClockAdjustMenu::updateCursorRelease() {
    if (unk_98.isAnimDone()) {
        refreshCursor();
        setMainState(unk_94);
    }
}

void ClockAdjustMenu::stateExit() {
    if (unk_fc.stepPress()) {
        if (unk_98.getAnim()) {
            s32 a = unk_fc.getPressOffset();
            s32 b = unk_fc.getTargetX(-1);
            s32 c = unk_fc.getTargetY(-1);
            unk_98.warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void ClockAdjustMenu::stateListOpening() {
    if (DateTimePicker_UpdateListOpen(&unk_260)) {
        enterListInputMode();
    }
}

void ClockAdjustMenu::stateListClosing() {
    if (DateTimePicker_UpdateListClose(&unk_260)) {
        s32 r = DateTimePicker_GetCursorField(&unk_260);
        if (r == 6) {
            unk_95 = 5;
        } else {
            unk_95 = r;
        }
        resumeInput();
    }
}

void ClockAdjustMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void ClockAdjustMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(6);
}

void ClockAdjustMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void ClockAdjustMenu::confirm() {
    unk_fc.setSelected(6);
    setTransitionState(2);
    setMainState(0xd);
    MenuCtrl_SetResult(1);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    DateTimePicker_GetDateTime(&unk_260, v);
    MenuCtrl_SetDateTime(v);
    u8 *g = gSaveData;
    if (DateTimePicker_IsBeforeStart(&unk_260)) {
        MenuCtrl_SetClockMovedBack();
    } else {
        MenuCtrl_SetClockMovedForward();
    }
    u32 a[2];
    MI_CpuCopy8(v, a, 8);
    s32 r4 = ClockOffset_CalcMinutes(g + 0x15fb4, a);
    u32 b[2];
    MI_CpuCopy8(v, b, 8);
    u16 r = ClockOffset_CalcSeconds(g + 0x15fb4, b);
    *(s32 *)(g + 0x15fb4) = r4;
    *(u16 *)(g + 0x15fb8) = r;
    Clock_Init();
}

void ClockAdjustMenu::cancel() {
    unk_fc.setSelected(7);
    setTransitionState(2);
    setMainState(0xd);
    MenuCtrl_SetResult(0);
}

void ClockAdjustMenu::openFieldList(u32 a) {
    hideCursor();
    DateTimePicker_OpenList(&unk_260, a);
    setMainState(0xe);
    MenuCtrl_SetClockEdited();
}

void ClockAdjustMenu::decideList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_DecideList(&unk_260);
    setMainState(0xf);
}

void ClockAdjustMenu::cancelList() {
    hideCursor();
    clearFlags(2);
    DateTimePicker_CancelList(&unk_260);
    setMainState(0xf);
}

void ClockAdjustMenu::enterListTouchMode() {
    hideCursor();
    setMainState(3);
}

void ClockAdjustMenu::enterListButtonMode() {
    s32 t = unk_260.getListCursorY();
    unk_260.setListCursorFromY(t);
    setFlags(2);
    showCursor();
    restartKeyRepeat();
    setMainState(7);
}

void ClockAdjustMenu::enterListInputMode() {
    if (MenuCtrl_IsTouch()) {
        enterListTouchMode();
    } else {
        enterListButtonMode();
    }
}

void ClockAdjustMenu::showCursor() {
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    unk_98.warpTo(b, c);
    u32 v;
    if (testFlags(2) != 0 || ((v = unk_95) != 5 && v != 6)) {
        ((MenuCursor *)&unk_98)->setAnimIfChanged(1);
    } else {
        ((MenuCursor *)&unk_98)->setAnimIfChanged(7);
    }
    refreshCursor();
}

s32 ClockAdjustMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return unk_260.getListCursorX();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.getTargetX(6);
    case 6:
        return unk_fc.getTargetX(7);
    default:
        return sClockAdjustCursorXTable[unk_95];
    }
}

s32 ClockAdjustMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return unk_260.getListCursorY();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.getTargetY(6);
    case 6:
        return unk_fc.getTargetY(7);
    default:
        return sClockAdjustCursorYTable[unk_95];
    }
}

void ClockAdjustMenu::hideCursor() {
    ((MenuCursor *)&unk_98)->setAnimIfChanged(0);
    unk_98.vfunc_0c();
}

void ClockAdjustMenu::moveCursorToTarget() {
    u32 k;
    if (testFlags(2) != 0 || ((k = unk_95) != 5 && k != 6)) {
        ((MenuCursor *)&unk_98)->switchToAnim01();
    } else {
        ((MenuCursor *)&unk_98)->switchToAnim07();
    }
    s32 b = getCursorTargetX();
    s32 c = getCursorTargetY();
    startCursorMove(b, c);
}

void ClockAdjustMenu::startCursorMove(s32 a, s32 b) {
    if (testFlags(4)) {
        unk_98.moveToEase(a, b, 2, 1);
    } else {
        unk_98.moveToEase(a, b, 3, 1);
    }
    unk_94 = unk_8d;
    setMainState(0xa);
    clearFlags(4);
}

void ClockAdjustMenu::refreshCursor() {
    unk_98.setPoseIdle();
    unk_98.vfunc_0c();
}

void ClockAdjustMenu::pressCursor() {
    ((MenuCursor *)&unk_98)->setPosePress();
    setMainState(0xb);
}

void ClockAdjustMenu::releaseCursor() {
    unk_98.setPoseRelease();
    unk_94 = unk_8d;
    setMainState(0xc);
}

BOOL ClockAdjustMenu::moveCursorByPad(u32 pad) {
    u32 old = unk_95;
    if (MenuKeys_HasLeft(pad)) {
        unk_95 = sClockAdjustCursorLeftTable[unk_95];
    } else if (MenuKeys_HasRight(pad)) {
        unk_95 = sClockAdjustCursorRightTable[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    if (MenuKeys_HasUp(pad)) {
        unk_95 = sClockAdjustCursorUpTable[unk_95];
    } else if (MenuKeys_HasDown(pad)) {
        unk_95 = sClockAdjustCursorDownTable[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    return FALSE;
}

BOOL ClockAdjustMenu::testFlags(u32 m) {
    if (unk_92 & m) {
        return TRUE;
    }
    return FALSE;
}

void ClockAdjustMenu::setFlags(u32 m) { unk_92 = unk_92 | m; }

void ClockAdjustMenu::clearFlags(u32 m) { unk_92 = unk_92 & ~m; }

extern "C" const s32 sClockAdjustCursorXTable[7] = {0xd6, 0x68, 0xa6, 0x68, 0xb0, 0};

extern "C" const s32 sClockAdjustCursorYTable[7] = {0x70, 0x70, 0x70, 0x90, 0x90, 0};

extern "C" const u8 sClockAdjustCursorLeftTable[7] = {2, 1, 1, 3, 3, 6, 6};

extern "C" const u8 sClockAdjustCursorRightTable[7] = {0, 2, 0, 4, 4, 5, 5};

extern "C" const u8 sClockAdjustCursorUpTable[7] = {0, 1, 2, 1, 2, 4, 3};

extern "C" const u8 sClockAdjustCursorDownTable[7] = {4, 3, 4, 6, 5, 5, 6};

