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
void *_ZN12Unk_02097ff414getBankAccountEv(void *p);
void *_ZN10PlayerData12getInventoryEv(void *p);
s32 MenuCtrl_GetMode();
void MenuCtrl_SetResult(s32 a);
s32 MenuCtrl_IsTouch();
s32 MenuCtrl_IsButtons();
void MenuCtrl_SetAmount();
void func_02097410(void *p, s32 v);
s32 func_02097414(void *p);
void func_02097a48(void *p, s32 v, s32 w);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *p, s32 v);
s32 func_02097ce4(void *p, s32 v, s32 w);
void *ProcBase_GetParent();
void String_Load2dMenu(void *self, s32 v);
s32 File_LoadToBuffer(const char *a, void *b, s32 c);
s32 BgScreen_SetRectPalette(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void _ZN10BgVramTask13requestScreenEjhjj(void *self, void *buf, s32 a, s32 b, s32 c);
void _ZN10HandCursor16disableObjWindowEv(void *self);
void _ZN10HandCursor15enableObjWindowEv(void *self);
s32 NumberPad_LoadBgGraphics(s32 a);
void ProcBase_RequestDelete(void *p);

void _ZN9HouseData13func_02060370Ei(void *self, s32 v);
s32 _ZN9HouseData13func_02060388Ev(void *self);
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
    s32 isRepeatDown();
    s32 isRepeatUp();
    void applySlideOffset(s32 a, s32 b, s32 c);
    void setSlideExtent(s32 a);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);

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

class LabelString {
public:
    LabelString();
    ~LabelString();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();
    u8 unk_00[0x40];
};

class BgVramTask {
public:
    BgVramTask();
    void cancel();
    u32 unk_00[0x24 / 4];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    s32 update(s32 a);
    void open(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

class BankMenu;
typedef void (BankMenu::*Unk_ov132_02294390_Fn)();

// Vtable 0x02294390, size 0x1434
class BankMenu : public MenuProc {
public:
    BankMenu() : unk_94(), unk_f8(), unk_25c(), unk_2dc(), unk_324() {}

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
    u8 *allocLabel();
    void releaseLabels();
    void pressCursor();
    void refreshCursor();
    void startCursorMove(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void showMessage(u8 v);
    void selectWithdraw();
    void selectDeposit();
    void startSelect();
    void quit();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void stateMessage();
    void stateSelectWait();
    void stateExit();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initState();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ MenuCursorBuf0 unk_94;
    /* 0x0f8 */ MenuBottomButtons unk_f8;
    /* 0x25c */ LabelString unk_25c[2];
    /* 0x2dc */ BgVramTask unk_2dc[2];
    /* 0x324 */ MenuErrorMessage unk_324;
    /* 0x42c */ u8 unk_42c[0x800];
    /* 0xc2c */ u8 unk_c2c[0x800];
    /* 0x142c */ u16 unk_142c;
    /* 0x142e */ u8 unk_142e;
    /* 0x142f */ u8 unk_142f;
    /* 0x1430 */ u8 unk_1430;
    /* 0x1431 */ u8 unk_1431;
    /* 0x1432 */ u8 unk_1432;
};

struct Unk_ov132_SceneEntry {
    BankMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" BankMenu *BankMenu_Create();

static inline BOOL Unk_ov132_02293d40_Both() {
    if (gTouchHeld[0] != 0 && gTouchChanged[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BankMenu *BankMenu_Create() { return new BankMenu(); }

BOOL BankMenu::vfunc_00() {
    initState();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL BankMenu::vfunc_0c() {
    _ZN12MenuLauncher13onChildClosedEv(ProcBase_GetParent());
    releaseResources();
    return TRUE;
}

BOOL BankMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_94)->drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    unk_f8.drawAt(getSlideOffsetY());
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov132_SceneEntry sBankMenuProfile;
extern "C" const s32 sBankMenuCursorYTable[3];
extern "C" const s32 sBankMenuCursorXTable[3];

extern "C" Unk_ov132_SceneEntry sBankMenuProfile = {BankMenu_Create, 0xb3, 0xb7};

BOOL BankMenu::execTransition() {
    static Unk_ov132_02294390_Fn tbl[4] = {
        &BankMenu::stateOpen,
        &BankMenu::stateOpening,
        &BankMenu::stateClose,
        &BankMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void BankMenu::runMainState() {
    static Unk_ov132_02294390_Fn tbl[8] = {
        &BankMenu::updateTouch,
        &BankMenu::updateButtons,
        &BankMenu::updateCursorMove,
        &BankMenu::updateCursorPress,
        &BankMenu::updateCursorRelease,
        &BankMenu::stateExit,
        &BankMenu::stateSelectWait,
        &BankMenu::stateMessage};
    (this->*tbl[unk_8d])();
}

BOOL BankMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL BankMenu::execPhase3() { return TRUE; }

BOOL BankMenu::execPhase4() { return TRUE; }

BOOL BankMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void BankMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    beginSubSlideIn(10, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    unk_f8.setLayoutSingle05(0x65);
    setTransitionState(1);
}

void BankMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void BankMenu::stateClose() {
    _ZN12MenuLauncher14setNextRequestEii(ProcBase_GetParent(), unk_1431, 1);
    beginSubSlideOut(10, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(3);
}

void BankMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void BankMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
}

void BankMenu::initState() {
    unk_142e = 0;
    unk_142c = 0;
}

void BankMenu::releaseResources() {
    unk_f8.freeTexts();
    releaseLabels();
    unk_2dc[0].cancel();
    unk_2dc[1].cancel();
}

void BankMenu::preInputUpdate() {
    preStateUpdate();
    unk_94.vfunc_0c();
}

void BankMenu::postInputUpdate() {
    postStateUpdate();
}

void BankMenu::preStateUpdate() {
    unk_f8.freeTexts();
    releaseLabels();
}

// tiny empty callee, defined last so it is not inlined into the thunk above
void BankMenu::postStateUpdate() {}

void BankMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void BankMenu::loadBgGfx() {
    NumberPad_LoadBgGraphics(6);
    File_LoadToBuffer("menu/bank/c0_bg.bsc", unk_42c, 0x800);
    BgScreen_SetRectPalette(unk_42c, 6, 7, 0x19, 0xf, 6);
    Gfx2d_LoadScreen(unk_42c, 6, 0x800, 0);
    File_LoadToBuffer("menu/bank/c1_bg.bsc", unk_c2c, 0x800);
    BgScreen_SetRectPalette(unk_c2c, 6, 7, 0x19, 0xf, 6);
    Gfx2d_LoadScreen(unk_c2c, 4, 0x800, 0);
    LabelString *p = (LabelString *)allocLabel();
    String_Load2dMenu(p, 0x5f);
    p->createLabel(4, 0x114, 0xe, 0xf, 0, 0);
    p->redrawAligned(1, 0);
    p = (LabelString *)allocLabel();
    String_Load2dMenu(p, 0x60);
    p->createLabel(4, 0x130, 0xe, 0xf, 0, 0);
    p->redrawAligned(1, 0);
}

void BankMenu::loadObjGfx() {
    MenuButtons_LoadTextColors(&unk_f8);
}

void BankMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Unk_ov132_02293d40_Both()) {
        if (unk_f8.isTouched(6)) {
            quit();
        } else {
            s32 x = gTouchCurX[0];
            s32 y = gTouchCurY[0];
            if (x >= 0x40 && x < 0xc0) {
                if (y >= 0x38 && y < 0x58) {
                    selectDeposit();
                } else if (y >= 0x60 && y < 0x80) {
                    selectWithdraw();
                }
            }
        }
    }
    return;
}

void BankMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    takeRepeatedKeys();
    u8 old = unk_142e;
    if (isRepeatUp()) {
        if (unk_142e != 0) {
            unk_142e = unk_142e - 1;
        }
    } else if (isRepeatDown()) {
        if (unk_142e < 2) {
            unk_142e = unk_142e + 1;
        }
    }
    if (old != unk_142e) {
        moveCursorToTarget();
        return;
    }
    u32 t = gPad[1];
    if ((t & 2) != 0) {
        hideCursor();
        quit();
    } else if ((t & 1) != 0) {
        pressCursor();
    }
    return;
}

void BankMenu::updateCursorMove() {
    if (!((MenuCursorBase *)&unk_94)->isMoving()) {
        setMainState(unk_142f);
        runMainState();
    }
}

void BankMenu::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        switch (unk_142e) {
        case 2:
            quit();
            break;
        case 0:
            selectDeposit();
            break;
        case 1:
            selectWithdraw();
            break;
        }
    }
}

void BankMenu::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        refreshCursor();
        setMainState(unk_142f);
    }
}

void BankMenu::stateExit() {
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

void BankMenu::stateSelectWait() {
    u8 n = unk_1432;
    if (n != 0) {
        unk_1432 = n - 1;
    } else {
        hideCursor();
        setPhase(1);
    }
}

void BankMenu::stateMessage() {
    if (unk_324.update(0)) {
        resumeInput();
        _ZN10HandCursor15enableObjWindowEv(&unk_94);
    }
}

void BankMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void BankMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(1);
}

void BankMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void BankMenu::quit() {
    unk_1431 = 0x44;
    MenuCtrl_SetResult(0);
    unk_f8.setSelected(6);
    setTransitionState(2);
    setMainState(5);
}

void BankMenu::startSelect() {
    setTransitionState(2);
    unk_1432 = 10;
    _ZN10BgVramTask13requestScreenEjhjj(&unk_2dc[0], unk_42c, 6, 0x800, 0);
    _ZN10BgVramTask13requestScreenEjhjj(&unk_2dc[1], unk_c2c, 4, 0x800, 0);
    setMainState(6);
    Snd_PlaySe(0x29);
}

void BankMenu::selectDeposit() {
    if (func_02097414(_ZN12Unk_02097ff414getBankAccountEv(PlayerData_GetCurrent())) == 0x3b9ac9ff) {
        showMessage(0xe);
    } else {
        unk_1431 = 0x35;
        BgScreen_SetRectPalette(unk_42c, 6, 7, 0x19, 0xa, 7);
        BgScreen_SetRectPalette(unk_c2c, 6, 7, 0x19, 0xa, 7);
        startSelect();
    }
}

void BankMenu::selectWithdraw() {
    if (func_02097ce4(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), 1, 0) == 0) {
        showMessage(0xf);
    } else {
        unk_1431 = 0x36;
        BgScreen_SetRectPalette(unk_42c, 6, 0xc, 0x19, 0xf, 7);
        BgScreen_SetRectPalette(unk_c2c, 6, 0xc, 0x19, 0xf, 7);
        startSelect();
    }
}

void BankMenu::showMessage(u8 v) {
    u8 b = v;
    unk_324.open(&b, 1, 0);
    setMainState(7);
    _ZN10HandCursor16disableObjWindowEv(&unk_94);
}

void BankMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_94)->warpTo(a, b);
    if (unk_142e == 2) {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_94)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 BankMenu::getCursorTargetX() {
    if (unk_142e == 2) {
        return unk_f8.getTargetX(6);
    }
    return sBankMenuCursorXTable[unk_142e];
}

s32 BankMenu::getCursorTargetY() {
    if (unk_142e == 2) {
        return unk_f8.getTargetY(6);
    }
    return sBankMenuCursorYTable[unk_142e];
}

void BankMenu::hideCursor() {
    ((MenuCursor *)&unk_94)->setAnimIfChanged(0);
    unk_94.vfunc_0c();
}

void BankMenu::moveCursorToTarget() {
    if (unk_142e == 2) {
        ((MenuCursor *)&unk_94)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_94)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    startCursorMove(a, b);
}

void BankMenu::startCursorMove(s32 a, s32 b) {
    ((MenuCursorBase *)&unk_94)->moveToEase(a, b, 3, 1);
    unk_142f = unk_8d;
    setMainState(2);
}

void BankMenu::refreshCursor() {
    ((MenuCursorBase *)&unk_94)->setPoseIdle();
    unk_94.vfunc_0c();
}

void BankMenu::pressCursor() {
    ((MenuCursor *)&unk_94)->setPosePress();
    setMainState(3);
}

void BankMenu::releaseLabels() {
    s32 i = 0;
    unk_1430 = i;
    for (; i < 2; i++) {
        unk_25c[i].destroyLabel();
    }
}

u8 *BankMenu::allocLabel() {
    u8 *p = &unk_1430;
    if (*p >= 2) {
        return (u8 *)&unk_25c[1];
    }
    *p = *p + 1;
    return (u8 *)&unk_25c[*p - 1];
}

BOOL BankMenu::testFlags(u32 mask) {
    if ((unk_142c & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

void BankMenu::setFlags(u32 mask) {
    unk_142c = unk_142c | mask;
}

extern "C" const s32 sBankMenuCursorXTable[3] = {0xc8, 0xc8, 0};

extern "C" const s32 sBankMenuCursorYTable[3] = {0x48, 0x70, 0};
