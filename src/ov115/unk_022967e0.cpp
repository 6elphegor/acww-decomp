#include "types.h"
#include "Unk_020d8c7c.h"
#include "ui/UiWidget.h"

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
void CreatureBook_DrawRows(void *p, u32 a);
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
void func_ov114_02296498(void *p);
}

class FishBookTab;

class LabelString {
public:
    LabelString();
    ~LabelString();
    void destroyLabel();
    u32 unk_00[0x40 / 4];
};

class MenuTabBar {
public:
    void selectTab(u32 a);
    void onTabMenuClosed();
};

class CreatureBookPanel {
public:
    CreatureBookPanel();
    ~CreatureBookPanel();
    BOOL beginScrollTouch(s32 a, s32 b);
    void placeScrollKnob(s32 a);
    BOOL hitDescPageButtons(s32 a, s32 b);
    void loadObjGraphics();
    void loadBgGraphics();
    void postUpdate();
    void preUpdate();
    void cleanup();
    void init(u8 a, u8 b, u8 c, u8 d);
    void drawButtons(s32 a);
    void drawScrollKnob();
    u32 unk_00[0x129c / 4];
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
    BOOL isMoving();
    void drawWrapped();
    void setPoseIdle();
    void setPoseRelease();
    void warpTo(s32 a, s32 b);
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
};

class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void setAnimIfChanged(s32 idx);
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
    virtual BOOL vfunc_20(u32 status);
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
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

typedef void (FishBookTab::*Unk_ov115_02297378_Fn)();

// Vtable 0x02297378, size 0x13e0
class FishBookTab : public MenuProc {
public:
    FishBookTab() : cursor(), bookPanel(), textLabels() {}

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
    void initFishBook();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    BOOL requestTab(s32 v);
    BOOL handleTabSwitch();
    void runMainState();

    /* 0x0091 */ u8 unk_91[0x3];
    /* 0x0094 */ MenuCursorBuf0 cursor;
    /* 0x00f8 */ CreatureBookPanel bookPanel;
    /* 0x1394 */ LabelString textLabels[1];
    /* 0x13d4 */ s32 slideY;
    /* 0x13d8 */ u16 flags;
    /* 0x13da */ u8 labelCount;
    /* 0x13db */ u8 unk_13db;
    /* 0x13dc */ u8 returnState;
    /* 0x13dd */ u8 unk_13dd[3];
};

static inline BOOL Unk_ov115_02296ce8_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov115_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

extern "C" FishBookTab *FishBookTab_Create();
extern "C" Unk_ov115_SceneEntry sFishBookTabProfile = {(void *)FishBookTab_Create, 0x9f, 0xa3};

extern "C" FishBookTab *FishBookTab_Create() { return new FishBookTab(); }

BOOL FishBookTab::vfunc_00() {
    initFishBook();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL FishBookTab::vfunc_0c() {
    ((MenuTabBar *)ProcBase_GetParent())->onTabMenuClosed();
    releaseResources();
    return TRUE;
}

BOOL FishBookTab::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    bookPanel.placeScrollKnob(slideY);
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    bookPanel.drawButtons(slideY);
    CreatureBook_DrawRows(&bookPanel, slideY);
    bookPanel.drawScrollKnob();
    return TRUE;
}

BOOL FishBookTab::execTransition() {
    static Unk_ov115_02297378_Fn tbl[4] = {
        &FishBookTab::stateOpen,
        &FishBookTab::stateOpening,
        &FishBookTab::stateClose,
        &FishBookTab::stateClosing};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void FishBookTab::runMainState() {
    static Unk_ov115_02297378_Fn tbl[9] = {
        &FishBookTab::updateTouch,
        &FishBookTab::mainAct01,
        &FishBookTab::updateButtons,
        &FishBookTab::updateCursorMove,
        &FishBookTab::updateCursorPress,
        &FishBookTab::updateCursorRelease,
        &FishBookTab::mainAct06,
        &FishBookTab::mainAct07,
        &FishBookTab::mainAct08};
    (this->*tbl[mainState])();
}

BOOL FishBookTab::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL FishBookTab::execPhase3() { return TRUE; }

BOOL FishBookTab::execPhase4() { return TRUE; }

BOOL FishBookTab::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL FishBookTab::handleTabSwitch() {
    s32 r;
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        return requestTab(7);
    }
    if (mainState != 0 && mainState != 2) {
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

BOOL FishBookTab::requestTab(s32 v) {
    void *h = ProcBase_GetParent();
    if (v != -1 && v != 2) {
        ((MenuTabBar *)h)->selectTab((u8)v);
        transitionState = 2;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void FishBookTab::stateOpen() {
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

void FishBookTab::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void FishBookTab::stateClose() {
    hideCursor();
    beginSubSlideOut(0xb, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
    CreatureBook_StopPictureFade(&bookPanel);
}

void FishBookTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void FishBookTab::updateLayerSlide() {
    applySlideOffset(3, 0, 0);
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
    slideY = getSlideOffsetY();
}

void FishBookTab::initFishBook() {
    flags = 0;
    bookPanel.init(3, 6, 4, 0);
}

void FishBookTab::releaseResources() {
    bookPanel.cleanup();
    resetTextLabels();
}

void FishBookTab::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void FishBookTab::postInputUpdate() {
    postStateUpdate();
}

void FishBookTab::preStateUpdate() {
    bookPanel.preUpdate();
    resetTextLabels();
}

void FishBookTab::postStateUpdate() {
    bookPanel.postUpdate();
}

void FishBookTab::setupBgLayers() {
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void FishBookTab::loadBgGfx() {
    bookPanel.loadBgGraphics();
    CreatureBook_InitPictureView(&bookPanel);
}

void FishBookTab::loadObjGfx() {
    bookPanel.loadObjGraphics();
    CreatureBook_RefreshRowIcons(&bookPanel);
}

void FishBookTab::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov115_02296ce8_Both()) {
        u32 a = gTouchCurX;
        u32 b = gTouchCurY;
        if (bookPanel.hitDescPageButtons(a, b) == 0) {
            if (bookPanel.beginScrollTouch(a, b)) {
                setMainState(1);
            } else if (CreatureBook_TouchRow(&bookPanel, a, b) != 0) {
                return;
            }
        }
    }
}

void FishBookTab::mainAct01() {
    if (gTouchHeld != 0) {
        CreatureBook_UpdateScrollTouch(&bookPanel, gTouchCurX);
    } else {
        CreatureBook_EndScrollTouch(&bookPanel);
        setMainState(0);
    }
}

void FishBookTab::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k = takeRepeatedKeys();
        if (CreatureBook_MoveFocus(&bookPanel, k)) {
            moveCursorToTarget();
        } else {
            u32 m = gPad[1];
            if (m & 1) {
                pressCursor();
            } else if (m & 0x100) {
                requestTab(MenuTabBar_NextTab(2));
            } else if (m & 0x200) {
                requestTab(MenuTabBar_PrevTab(2));
            }
        }
    }
}

void FishBookTab::updateCursorMove() {
    if (!cursor.isMoving()) {
        setMainState(returnState);
        runMainState();
    }
}

void FishBookTab::updateCursorPress() {
    if (cursor.isAnimDone()) {
        s32 r = CreatureBook_GetFocusedTab(&bookPanel);
        if (r != -1) {
            if (requestTab(r) != 0) {
                return;
            }
            goto bea;
        } else {
            if (CreatureBook_ActivateFocus(&bookPanel) == 0) {
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

void FishBookTab::updateCursorRelease() {
    if (cursor.isAnimDone()) {
        refreshCursor();
        setMainState(returnState);
    }
}

void FishBookTab::mainAct06() {
    if (CreatureBook_WaitScrollHoldStart(&bookPanel)) {
        setMainState(7);
    }
    bookPanel.placeScrollKnob(slideY);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
}

void FishBookTab::mainAct07() {
    if (gPad[0] & 1) {
        CreatureBook_UpdateScrollHold(&bookPanel);
    } else {
        CreatureBook_ReleaseKnob(&bookPanel);
        setMainState(8);
    }
    bookPanel.placeScrollKnob(slideY);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
}

void FishBookTab::mainAct08() {
    if (CreatureBook_FinishScrollHold(&bookPanel)) {
        setMainState(2);
        releaseCursor();
    }
    bookPanel.placeScrollKnob(slideY);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
}

void FishBookTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void FishBookTab::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(2);
}

void FishBookTab::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void FishBookTab::resetTextLabels() {
    labelCount = 0;
    textLabels[0].destroyLabel();
}

void FishBookTab::showCursor() {
    CreatureBook_ClampFocusToView(&bookPanel);
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    s32 r = CreatureBook_GetFocusedTab(&bookPanel);
    if (r != -1 || CreatureBook_IsFocusOnPageArrow(&bookPanel) != 0) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(0xd);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 FishBookTab::getCursorTargetX() {
    return CreatureBook_GetFocusX(&bookPanel);
}

s32 FishBookTab::getCursorTargetY() {
    return CreatureBook_GetFocusY(&bookPanel);
}

void FishBookTab::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void FishBookTab::moveCursorToTarget() {
    s32 r = CreatureBook_GetFocusedTab(&bookPanel);
    if (r != -1 || CreatureBook_IsFocusOnPageArrow(&bookPanel) != 0) {
        ((MenuCursor *)&cursor)->switchToAnim0D();
    } else {
        ((MenuCursor *)&cursor)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void FishBookTab::moveCursorTo(s32 a, s32 b) {
    cursor.moveToEase(a, b, 3, 1);
    returnState = mainState;
    setMainState(3);
}

void FishBookTab::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void FishBookTab::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(4);
}

void FishBookTab::releaseCursor() {
    cursor.setPoseRelease();
    returnState = mainState;
    setMainState(5);
}

BOOL FishBookTab::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void FishBookTab::setFlags(u32 mask) {
    flags |= mask;
}

// ---------------------------------------------------------------------------------------------

