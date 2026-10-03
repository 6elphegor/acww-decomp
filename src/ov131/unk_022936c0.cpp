#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gSaveHouse[];
extern u16 gPad[];
extern u8 gTouchHeld[];
extern u8 gTouchChanged[];
extern u8 gTouchCurX[];
extern u8 gTouchCurY[];

void Snd_PlaySe(u32 id);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void *PlayerData_GetCurrent();
void *_ZN12Unk_02097ff414getBankAccountEv();
void *_ZN10PlayerData12getInventoryEv(void *p);
s32 MenuCtrl_GetMode();
void MenuCtrl_SetResult(s32 a);
s32 MenuCtrl_IsTouch();
s32 MenuCtrl_IsButtons();
void MenuCtrl_SetAmount();
void PlayerBank_SetBalance(void *p, s32 v);
s32 PlayerBank_GetBalance(void *p);
void PlayerInventory_AddBells(void *p, s32 v, s32 w);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *p, s32 v);
s32 PlayerInventory_GetBellsRoom(void *p, s32 v, s32 w);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);

void _ZN9HouseData7setDebtEi(void *self, s32 v);
s32 _ZN9HouseData7getDebtEv(void *self);
s32 _ZN10HandCursor7getAnimEv(void *self);
s32 _ZN10HandCursor10isAnimDoneEv(void *self);
void MenuButtons_LoadTextColors(void *self);
void _ZN12MenuLauncher14setNextRequestEii(void *self, s32 a, s32 b);
void _ZN12MenuLauncher13onChildClosedEv(void *self);

// ov130 (library overlay) plain functions; first argument is the NumberPad object
s32 NumberPad_GetValue(void *self);
s32 NumberPad_GetTopAmount(void *self);
s32 NumberPad_GetBottomAmount(void *self);
void NumberPad_SetAmounts(void *self, s32 a, s32 b, s32 c);
void NumberPad_Draw(void *self, s32 a);
s32 NumberPad_IsCursorOnButton(void *self);
s32 NumberPad_GetCursorY(void *self);
s32 NumberPad_GetCursorX(void *self);
void NumberPad_StopKeyRepeat(void *self);
void NumberPad_TickKeyRepeat(void *self);
s32 NumberPad_PressCursorKey(void *self);
s32 NumberPad_IsCursorOnOk(void *self);
s32 NumberPad_MoveCursor(void *self, s32 a);
s32 NumberPad_ClearValue(void *self);
s32 NumberPad_HitTestKey(void *self, u32 a, u32 b);
void NumberPad_PressKey(void *self);
}

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
    void disableButton(s32 v);
    void enableButton(s32 v);
    s32 isTouched(s32 v);
    s32 isButtonDisabled(s32 v);
    s32 stepPress();
    s32 getPressOffset();
    s32 getTargetX(s32 v);
    s32 getTargetY(s32 v);
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmAnd06(u8 v);
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

class NumberPad {
public:
    NumberPad();
    ~NumberPad();
    void flushScreens();
    void update();
    void shutdown();
    void loadObj();
    s32 loadBg();
    void init(u32 a, u32 b, u32 c);
    u32 unk_00[0x11b4 / 4];
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

    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    s32 checkSwitchToButtons(s32 v);
    s32 stepSlideOut(s32 v);
    s32 stepSlideIn(s32 v);
    s32 checkSwitchToTouch();
    s32 takeRepeatedKeys();
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    void applySlideOffset(s32 a, s32 b, s32 c);
    void setSlideExtent(s32 a);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);

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

static inline BOOL func_ov131_Both() {
    if (gTouchHeld[0] != 0 && gTouchChanged[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

class AmountEntryMenu;
typedef void (AmountEntryMenu::*Unk_ov131_022942f0_Fn)();

// Vtable 0x022942f0, size 0x1414
class AmountEntryMenu : public MenuProc {
public:
    AmountEntryMenu() : cursor(), bottomButtons(), numberPad() {}

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
    void commitAmount();
    void setupAmounts();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void startCursorMove(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void cancel();
    BOOL confirm();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void stateExit();
    void stateButtonRepeat();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void stateTouchRepeat();
    void updateTouch();
    void loadObjGfx();
    s32 loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initPad();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ MenuCursorBuf0 cursor;
    /* 0xf8 */ MenuBottomButtons bottomButtons;
    /* 0x25c */ NumberPad numberPad;
    /* 0x1410 */ u16 flags;
    /* 0x1412 */ u8 returnState;
};

extern "C" AmountEntryMenu *AmountEntryMenu_Create() { return new AmountEntryMenu(); }

struct Unk_ov131_SceneEntry {
    AmountEntryMenu *(*create)();
    u16 a;
    u16 b;
};

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov131_SceneEntry sAmountEntryMenuProfile = {AmountEntryMenu_Create, 0xb2, 0xb6};

BOOL AmountEntryMenu::vfunc_00() {
    initPad();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL AmountEntryMenu::vfunc_0c() {
    _ZN12MenuLauncher13onChildClosedEv(ProcBase_GetParent());
    releaseResources();
    return TRUE;
}

BOOL AmountEntryMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&cursor)->drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    bottomButtons.drawAt(getSlideOffsetY());
    NumberPad_Draw(&numberPad, getSlideOffsetY());
    return TRUE;
}

BOOL AmountEntryMenu::execTransition() {
    static Unk_ov131_022942f0_Fn tbl[4] = {
        &AmountEntryMenu::stateOpen,
        &AmountEntryMenu::stateOpening,
        &AmountEntryMenu::stateClose,
        &AmountEntryMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void AmountEntryMenu::runMainState() {
    static Unk_ov131_022942f0_Fn tbl[8] = {
        &AmountEntryMenu::updateTouch,
        &AmountEntryMenu::stateTouchRepeat,
        &AmountEntryMenu::updateButtons,
        &AmountEntryMenu::updateCursorMove,
        &AmountEntryMenu::updateCursorPress,
        &AmountEntryMenu::updateCursorRelease,
        &AmountEntryMenu::stateButtonRepeat,
        &AmountEntryMenu::stateExit};
    (this->*tbl[mainState])();
}

BOOL AmountEntryMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL AmountEntryMenu::execPhase3() { return TRUE; }

BOOL AmountEntryMenu::execPhase4() { return TRUE; }

BOOL AmountEntryMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void AmountEntryMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    beginSubSlideIn(10, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    bottomButtons.setLayoutConfirmAnd06(0x65);
    setTransitionState(1);
}

void AmountEntryMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void AmountEntryMenu::stateClose() {
    void *r = ProcBase_GetParent();
    _ZN12MenuLauncher14setNextRequestEii(r, 0x44, 1);
    beginSubSlideOut(10, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
}

void AmountEntryMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void AmountEntryMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
}

void AmountEntryMenu::initPad() {
    numberPad.init((u8)(MenuCtrl_GetMode() - 0x34), 6, 4);
    setupAmounts();
    flags = 0;
}

void AmountEntryMenu::releaseResources() {
    bottomButtons.freeTexts();
    numberPad.shutdown();
}

void AmountEntryMenu::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void AmountEntryMenu::postInputUpdate() { postStateUpdate(); }

void AmountEntryMenu::preStateUpdate() {
    bottomButtons.freeTexts();
    numberPad.update();
}

void AmountEntryMenu::postStateUpdate() {
    numberPad.flushScreens();
    if (NumberPad_GetValue(&numberPad) == 0) {
        bottomButtons.disableButton(6);
    } else {
        bottomButtons.enableButton(6);
    }
}

void AmountEntryMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

s32 AmountEntryMenu::loadBgGfx() { return numberPad.loadBg(); }

void AmountEntryMenu::loadObjGfx() {
    numberPad.loadObj();
    MenuButtons_LoadTextColors(&bottomButtons);
}

void AmountEntryMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (func_ov131_Both()) {
            if (bottomButtons.isTouched(6)) {
                confirm();
            } else if (bottomButtons.isTouched(7)) {
                cancel();
            } else {
                if (NumberPad_HitTestKey(&numberPad, gTouchCurX[0], gTouchCurY[0]) != 0xd) {
                    NumberPad_PressKey(&numberPad);
                    setMainState(1);
                }
            }
        }
    }
}

void AmountEntryMenu::stateTouchRepeat() {
    if (gTouchHeld[0] == 0) {
        NumberPad_StopKeyRepeat(&numberPad);
        setMainState(0);
    } else {
        NumberPad_TickKeyRepeat(&numberPad);
    }
}

void AmountEntryMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else if (NumberPad_MoveCursor(&numberPad, takeRepeatedKeys())) {
        moveCursorToTarget();
    } else {
        u32 k = gPad[1];
        if (k & 8) {
            if (confirm()) {
                hideCursor();
            }
        } else if (k & 1) {
            pressCursor();
        } else if (k & 2) {
            if (!NumberPad_ClearValue(&numberPad)) {
                hideCursor();
                cancel();
            }
        }
    }
}

void AmountEntryMenu::updateCursorMove() {
    if (!((MenuCursorBase *)&cursor)->isMoving()) {
        setMainState(returnState);
        runMainState();
    }
}

void AmountEntryMenu::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        if (NumberPad_PressCursorKey(&numberPad)) {
            setMainState(6);
        } else if (NumberPad_IsCursorOnOk(&numberPad)) {
            if (!confirm()) {
                setMainState(2);
                releaseCursor();
            }
        } else {
            cancel();
        }
    }
}

void AmountEntryMenu::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        refreshCursor();
        setMainState(returnState);
    }
}

void AmountEntryMenu::stateButtonRepeat() {
    if ((gPad[0] & 1) == 0) {
        NumberPad_StopKeyRepeat(&numberPad);
        setMainState(2);
        releaseCursor();
    } else {
        NumberPad_TickKeyRepeat(&numberPad);
    }
}

void AmountEntryMenu::stateExit() {
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

void AmountEntryMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void AmountEntryMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(2);
}

void AmountEntryMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

BOOL AmountEntryMenu::confirm() {
    if (bottomButtons.isButtonDisabled(6)) {
        return FALSE;
    }
    bottomButtons.setSelected(6);
    setTransitionState(2);
    setMainState(7);
    MenuCtrl_SetResult(1);
    NumberPad_GetValue(&numberPad);
    MenuCtrl_SetAmount();
    commitAmount();
    return TRUE;
}

void AmountEntryMenu::cancel() {
    Snd_PlaySe(0x2a);
    MenuCtrl_SetResult(0);
    bottomButtons.setSelected(7);
    setTransitionState(2);
    setMainState(7);
}

void AmountEntryMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&cursor)->warpTo(a, b);
    if (NumberPad_IsCursorOnButton(&numberPad)) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 AmountEntryMenu::getCursorTargetX() { return NumberPad_GetCursorX(&numberPad); }

s32 AmountEntryMenu::getCursorTargetY() { return NumberPad_GetCursorY(&numberPad); }

void AmountEntryMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void AmountEntryMenu::moveCursorToTarget() {
    if (NumberPad_IsCursorOnButton(&numberPad)) {
        ((MenuCursor *)&cursor)->switchToAnim07();
    } else {
        ((MenuCursor *)&cursor)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    startCursorMove(a, b);
}

void AmountEntryMenu::startCursorMove(s32 a, s32 b) {
    ((MenuCursorBase *)&cursor)->moveToEase(a, b, 3, 1);
    returnState = mainState;
    setMainState(3);
}

void AmountEntryMenu::refreshCursor() {
    ((MenuCursorBase *)&cursor)->setPoseIdle();
    cursor.vfunc_0c();
}

void AmountEntryMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(4);
}

void AmountEntryMenu::releaseCursor() {
    ((MenuCursorBase *)&cursor)->setPoseRelease();
    returnState = mainState;
    setMainState(5);
}

void AmountEntryMenu::setupAmounts() {
    s32 hi;
    s32 lo;
    s32 m = MenuCtrl_GetMode();
    void *p = PlayerData_GetCurrent();
    void *q = _ZN12Unk_02097ff414getBankAccountEv();
    switch (m) {
    case 0x38:
        hi = 0x98967f;
        break;
    case 0x3a:
        hi = 99;
        break;
    case 0x36:
        hi = PlayerBank_GetBalance(q);
        break;
    default:
        hi = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(p), 1);
        break;
    }
    lo = 0;
    void *g = gSaveHouse;
    switch (m) {
    case 0x34:
        lo = _ZN9HouseData7getDebtEv(g);
        break;
    case 0x35:
        lo = PlayerBank_GetBalance(q);
        break;
    case 0x36:
        lo = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(p), 1);
        break;
    }
    volatile s32 mx = hi;
    switch (m) {
    case 0x34:
        if (lo < hi) {
            mx = lo;
        }
        break;
    case 0x35: {
        s32 t = 0x3b9ac9ff - lo;
        if (t < hi) {
            mx = t;
        }
        break;
    }
    case 0x36: {
        s32 t = PlayerInventory_GetBellsRoom(_ZN10PlayerData12getInventoryEv(p), 1, 0);
        if (t < hi) {
            mx = t;
        }
        break;
    }
    }
    NumberPad_SetAmounts(&numberPad, mx, hi, lo);
}

void AmountEntryMenu::commitAmount() {
    s32 a = NumberPad_GetValue(&numberPad);
    s32 b = NumberPad_GetTopAmount(&numberPad);
    s32 c = NumberPad_GetBottomAmount(&numberPad);
    void *p = PlayerData_GetCurrent();
    void *q = _ZN12Unk_02097ff414getBankAccountEv();
    s32 m = MenuCtrl_GetMode();
    switch (m) {
    case 0x36:
        PlayerBank_SetBalance(q, b - a);
        break;
    case 0x37:
    default:
        PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(p), -a, 1);
        break;
    case 0x38:
    case 0x39:
    case 0x3a:
        break;
    }
    switch (m) {
    case 0x34:
        _ZN9HouseData7setDebtEi(gSaveHouse, c - a);
        break;
    case 0x35:
        PlayerBank_SetBalance(q, c + a);
        break;
    case 0x36:
        PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(p), a, 1);
        break;
    }
}

BOOL AmountEntryMenu::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void AmountEntryMenu::setFlags(u32 mask) { flags = flags | mask; }

// ---------------------------------------------------------------------------------------------


