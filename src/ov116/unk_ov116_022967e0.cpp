#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
BOOL MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsForceCloseDue();
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
s32 MenuTabBar_HitTestTouch();
u8 MenuTabBar_NextTab(u8 a);
u8 MenuTabBar_PrevTab(u8 a);

// ov114 sub-object (+0xf8) functions
void CreatureBook_ClampFocusToView(void *p);
s32 CreatureBook_GetFocusedTab(void *p);
BOOL CreatureBook_IsFocusOnPageArrow(void *p);
s32 CreatureBook_GetFocusY(void *p);
s32 CreatureBook_GetFocusX(void *p);
BOOL CreatureBook_FinishScrollHold(void *p);
void CreatureBook_UpdateScrollHold(void *p);
void CreatureBook_ReleaseKnob(void *p);
BOOL CreatureBook_WaitScrollHoldStart(void *p);
BOOL CreatureBook_ActivateFocus(void *p);
BOOL CreatureBook_MoveFocus(void *p, s32 a);
void CreatureBook_UpdateScrollTouch(void *p, u32 a);
void CreatureBook_EndScrollTouch(void *p);
BOOL CreatureBook_TouchRow(void *p, u32 a, u32 b);
void CreatureBook_RefreshRowIcons(void *p);
void CreatureBook_InitPictureView(void *p);
void CreatureBook_StopPictureFade(void *p);
void CreatureBook_DrawRows(void *p, s32 a);
}

class MenuTabBar {
public:
    void onTabMenuClosed();
    void selectTab(u32 a);
};

class InsectBookTab;

struct Unk_ov116_SceneEntry {
    InsectBookTab *(*create)();
    u16 a;
    u16 b;
};


class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void destroyLabel();
    u8 unk_04[0x3c];
};

class CreatureBookPanel {
public:
    CreatureBookPanel();
    ~CreatureBookPanel();
    BOOL beginScrollTouch(s32 a, s32 b);
    void placeScrollKnob(s32 a);
    void drawScrollKnob();
    BOOL hitDescPageButtons(s32 a, s32 b);
    void drawButtons(s32 a);
    void loadObjGraphics();
    void loadBgGraphics();
    void postUpdate();
    void preUpdate();
    void cleanup();
    void init(u8 a, u8 b, u8 c, u8 d);
    u32 unk_00[0x129c / 4];
};

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

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();

    /* 0x0c */ u8 unk_0c[0x3f];
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

class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void setAnimIfChanged(s32 a);
};

// +0x94 sub-object (0x64 bytes)
class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u8 unk_4b[0x64 - 0x4b];
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
    u32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
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

typedef void (InsectBookTab::*Unk_ov116_02297378_Fn)();

// Vtable 0x02297378, size 0x13e0
class InsectBookTab : public MenuProc {
public:
    InsectBookTab() : unk_94(), unk_f8(), unk_1394() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void hideCursor();
    void showCursor();
    void resetTextLabels();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct08();
    void mainAct07();
    void mainAct06();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void mainAct01();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initInsectBook();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    BOOL requestTab(s32 v);
    BOOL handleTabSwitch();
    void runMainState();

    /* 0x0091 */ u8 unk_91[0x3];
    /* 0x0094 */ MenuCursorBuf0 unk_94;
    /* 0x00f8 */ CreatureBookPanel unk_f8;
    /* 0x1394 */ LabelString unk_1394[1];
    /* 0x13d4 */ s32 unk_13d4;
    /* 0x13d8 */ u16 unk_13d8;
    /* 0x13da */ u8 unk_13da;
    /* 0x13db */ u8 unk_13db;
    /* 0x13dc */ u8 unk_13dc;
};

static inline BOOL Unk_ov116_02296ce8_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" InsectBookTab *InsectBookTab_Create() { return new InsectBookTab(); }

BOOL InsectBookTab::vfunc_00() {
    initInsectBook();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL InsectBookTab::vfunc_0c() {
    ((MenuTabBar *)ProcBase_GetParent())->onTabMenuClosed();
    releaseResources();
    return TRUE;
}

BOOL InsectBookTab::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_f8.placeScrollKnob(unk_13d4);
    if (MenuCtrl_IsButtons()) {
        unk_94.drawWrapped();
    }
    unk_f8.drawButtons(unk_13d4);
    CreatureBook_DrawRows(&unk_f8, unk_13d4);
    unk_f8.drawScrollKnob();
    return TRUE;
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov116_SceneEntry sInsectBookTabProfile;

extern "C" Unk_ov116_SceneEntry sInsectBookTabProfile = {InsectBookTab_Create, 0xa0, 0xa4};

BOOL InsectBookTab::execTransition() {
    static Unk_ov116_02297378_Fn tbl[4] = {
        &InsectBookTab::stateOpen,
        &InsectBookTab::stateOpening,
        &InsectBookTab::stateClose,
        &InsectBookTab::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void InsectBookTab::runMainState() {
    static Unk_ov116_02297378_Fn tbl[9] = {
        &InsectBookTab::updateTouch,
        &InsectBookTab::mainAct01,
        &InsectBookTab::updateButtons,
        &InsectBookTab::updateCursorMove,
        &InsectBookTab::updateCursorPress,
        &InsectBookTab::updateCursorRelease,
        &InsectBookTab::mainAct06,
        &InsectBookTab::mainAct07,
        &InsectBookTab::mainAct08};
    (this->*tbl[unk_8d])();
}

BOOL InsectBookTab::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL InsectBookTab::execPhase3() { return TRUE; }

BOOL InsectBookTab::execPhase4() { return TRUE; }

BOOL InsectBookTab::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL InsectBookTab::handleTabSwitch() {
    s32 r;
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        return requestTab(7);
    }
    if (unk_8d != 0 && unk_8d != 2) {
        return FALSE;
    }
    r = -1;
    if (MenuCtrl_IsTouch()) {
        r = MenuTabBar_HitTestTouch();
    } else {
        u32 m = gPad[1];
        if (m & 2) {
            r = 7;
        } else if (m & 0x800) {
            r = 0;
        } else if (m & 0x400) {
            r = 5;
        } else if (m & 4) {
            r = 4;
        }
    }
    return requestTab(r);
}

BOOL InsectBookTab::requestTab(s32 v) {
    void *h = ProcBase_GetParent();
    if (v != -1 && v != 3) {
        ((MenuTabBar *)h)->selectTab((u8)v);
        unk_8c = 2;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void InsectBookTab::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    beginSubSlideIn(0xb, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(6);
    setFlags(1);
    updateLayerSlide();
    setTransitionState(1);
}

void InsectBookTab::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void InsectBookTab::stateClose() {
    hideCursor();
    beginSubSlideOut(0xb, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
    CreatureBook_StopPictureFade(&unk_f8);
}

void InsectBookTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void InsectBookTab::updateLayerSlide() {
    applySlideOffset(3, 0, 0);
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
    unk_13d4 = getSlideOffsetY();
}

void InsectBookTab::initInsectBook() {
    unk_13d8 = 0;
    unk_f8.init(3, 6, 4, 1);
}

void InsectBookTab::releaseResources() {
    unk_f8.cleanup();
    resetTextLabels();
}

void InsectBookTab::preInputUpdate() {
    preStateUpdate();
    unk_94.vfunc_0c();
}

void InsectBookTab::postInputUpdate() {
    postStateUpdate();
}

void InsectBookTab::preStateUpdate() {
    unk_f8.preUpdate();
    resetTextLabels();
}

void InsectBookTab::postStateUpdate() {
    unk_f8.postUpdate();
}

void InsectBookTab::setupBgLayers() {
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void InsectBookTab::loadBgGfx() {
    unk_f8.loadBgGraphics();
    CreatureBook_InitPictureView(&unk_f8);
}

void InsectBookTab::loadObjGfx() {
    unk_f8.loadObjGraphics();
    CreatureBook_RefreshRowIcons(&unk_f8);
}

void InsectBookTab::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov116_02296ce8_Both()) {
        u32 a = gTouchCurX;
        u32 b = gTouchCurY;
        if (unk_f8.hitDescPageButtons(a, b) == 0) {
            if (unk_f8.beginScrollTouch(a, b)) {
                setMainState(1);
            } else if (CreatureBook_TouchRow(&unk_f8, a, b) != 0) {
                return;
            }
        }
    }
}

void InsectBookTab::mainAct01() {
    if (gTouchHeld != 0) {
        CreatureBook_UpdateScrollTouch(&unk_f8, gTouchCurX);
    } else {
        CreatureBook_EndScrollTouch(&unk_f8);
        setMainState(0);
    }
}

void InsectBookTab::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k = takeRepeatedKeys();
        if (CreatureBook_MoveFocus(&unk_f8, k)) {
            moveCursorToTarget();
        } else {
            u32 m = gPad[1];
            if (m & 1) {
                pressCursor();
            } else if (m & 0x100) {
                requestTab(MenuTabBar_NextTab(3));
            } else if (m & 0x200) {
                requestTab(MenuTabBar_PrevTab(3));
            }
        }
    }
}

void InsectBookTab::updateCursorMove() {
    if (!unk_94.isMoving()) {
        setMainState(unk_13dc);
        runMainState();
    }
}

void InsectBookTab::updateCursorPress() {
    if (unk_94.isAnimDone()) {
        s32 r = CreatureBook_GetFocusedTab(&unk_f8);
        if (r != -1) {
            if (requestTab(r) != 0) {
                return;
            }
            goto bea;
        } else {
            if (CreatureBook_ActivateFocus(&unk_f8) == 0) {
                goto bea;
            }
            setMainState(6);
            return;
        }
        return;
    bea:
        setMainState(2);
        releaseCursor();
    }
}

void InsectBookTab::updateCursorRelease() {
    if (unk_94.isAnimDone()) {
        refreshCursor();
        setMainState(unk_13dc);
    }
}

void InsectBookTab::mainAct06() {
    if (CreatureBook_WaitScrollHoldStart(&unk_f8)) {
        setMainState(7);
    }
    unk_f8.placeScrollKnob(unk_13d4);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_94.warpTo(a, b);
}

void InsectBookTab::mainAct07() {
    if (gPad[0] & 1) {
        CreatureBook_UpdateScrollHold(&unk_f8);
    } else {
        CreatureBook_ReleaseKnob(&unk_f8);
        setMainState(8);
    }
    unk_f8.placeScrollKnob(unk_13d4);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_94.warpTo(a, b);
}

void InsectBookTab::mainAct08() {
    if (CreatureBook_FinishScrollHold(&unk_f8)) {
        setMainState(2);
        releaseCursor();
    }
    unk_f8.placeScrollKnob(unk_13d4);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_94.warpTo(a, b);
}

void InsectBookTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void InsectBookTab::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(2);
}

void InsectBookTab::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void InsectBookTab::resetTextLabels() {
    unk_13da = 0;
    unk_1394[0].destroyLabel();
}

void InsectBookTab::showCursor() {
    CreatureBook_ClampFocusToView(&unk_f8);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_94.warpTo(a, b);
    s32 r = CreatureBook_GetFocusedTab(&unk_f8);
    if (r != -1 || CreatureBook_IsFocusOnPageArrow(&unk_f8) != 0) {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(0xd);
    } else {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 InsectBookTab::getCursorTargetX() {
    return CreatureBook_GetFocusX(&unk_f8);
}

s32 InsectBookTab::getCursorTargetY() {
    return CreatureBook_GetFocusY(&unk_f8);
}

void InsectBookTab::hideCursor() {
    ((MenuCursor *)&unk_94)->setAnimIfChanged(0);
    unk_94.vfunc_0c();
}

void InsectBookTab::moveCursorToTarget() {
    s32 r = CreatureBook_GetFocusedTab(&unk_f8);
    if (r != -1 || CreatureBook_IsFocusOnPageArrow(&unk_f8) != 0) {
        ((MenuCursor *)&unk_94)->switchToAnim0D();
    } else {
        ((MenuCursor *)&unk_94)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void InsectBookTab::moveCursorTo(s32 a, s32 b) {
    unk_94.moveToEase(a, b, 3, 1);
    unk_13dc = unk_8d;
    setMainState(3);
}

void InsectBookTab::refreshCursor() {
    unk_94.setPoseIdle();
    unk_94.vfunc_0c();
}

void InsectBookTab::pressCursor() {
    ((MenuCursor *)&unk_94)->setPosePress();
    setMainState(4);
}

void InsectBookTab::releaseCursor() {
    unk_94.setPoseRelease();
    unk_13dc = unk_8d;
    setMainState(5);
}

BOOL InsectBookTab::testFlags(u32 mask) {
    if (unk_13d8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void InsectBookTab::setFlags(u32 mask) {
    unk_13d8 |= mask;
}
