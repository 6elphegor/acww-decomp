// ov141: scene overlay (class NearbyTownsMenu, vtable 0x02293968, 0x1674 bytes).
// A six-slot list of nearby players' records with a selection cursor.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class NearbyTownsMenu;

extern "C" {
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u32 gCurrentHeap;

BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void Snd_PlaySe(u32 v);
void MI_CpuCopy8(void *a, void *b, u32 n);
void Comm_SendEmpty();
s32 func_020eae78();
u32 *Net_GetScanResults();
u32 func_020ea6c8(void *e);
void *func_020ea6f4(void *e);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void File_LoadToBuffer(void *a, void *b, u32 c);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadPaletteFile(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void MenuCtrl_SetResult(s32 a);
void *MenuCtrl_GetPtrArg0();
void *MenuCtrl_GetPtrArg1();
void MenuCtrl_ClearPtrArgs();
void Oam_DrawCell(u32 a, s32 h, s32 x, u32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void MenuButtons_LoadTextColors(void *p);
NearbyTownsMenu *NearbyTownsMenu_Create();
}

void NetOverlay_AssertWireless(); // C++ linkage in main

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
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

// Screen upload helper, 0x24 bytes (src/main/unk_020b8464.cpp)
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u32 unk_04[0x20 / 4];
};

// Menu cursor sub-object hierarchy (src/ov002/unk_02202200.cpp, unk_02202b68.cpp)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
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
    void setAnimIfChanged(s32 a);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
};

// Menu list sub-object, 0x164 bytes (src/ov002/unk_022034c4.cpp)
class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

// ov139 menu helper, 0x624 bytes (src/ov139/unk_02291f60.cpp)
class MenuTownListPanel {
public:
    MenuTownListPanel();
    ~MenuTownListPanel();
    s32 getCellList(s32 i);
    void clearRow(s32 i);
    void setRow(s32 i, u8 *str);
    void createLabels();
    void setRowFadeColor(s32 a, s32 x, s32 n, s32 e);
    void loadObjGfx();
    void clearAllRows();
    void loadBgGfx();
    void drawTitle(s32 a, s32 b);
    void flushPalette();
    void preStateUpdate();
    void release();
    void init(u8 id, u8 v);
    u32 unk_00[0x624 / 4];
};

// ov092 singleton returned by ProcBase_GetParent
class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

static inline BOOL Unk_ov141_02293194_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov141_02292b94_Buf {
    u8 b[0x10];
    u8 flag;
};

typedef void (NearbyTownsMenu::*Unk_ov141_02293968_Fn)();

class NearbyTownsMenu : public MenuProc {
public:
    NearbyTownsMenu() : unk_94(), unk_6b8(), unk_71c(), unk_880() {}

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
    BOOL selectRow(s32 v);
    void onStartClose();
    void onOpened();
    void storeTown(s32 idx, void *src);
    s32 findFreeRow();
    s32 findRowByAddress(u8 *e);
    void updateRowFades();
    void scanTowns();
    void flushBgScreen();
    BOOL moveCursorByPad(u32 pad);
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void startQuit();
    void startConfirm();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateCloseDelay();
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
    void initNearbyTowns();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ MenuTownListPanel unk_94;
    /* 0x6b8 */ MenuCursorBuf0 unk_6b8;
    /* 0x71c */ MenuBottomButtons unk_71c;
    /* 0x880 */ BgVramTask unk_880;
    /* 0x8a4 */ u8 unk_8a4[6][0xe0];
    /* 0xde4 */ u8 unk_de4[6][0x11];
    /* 0xe4a */ u8 unk_e4a[2];
    /* 0xe4c */ u32 unk_e4c;
    /* 0xe50 */ s32 unk_e50;
    /* 0xe54 */ s32 unk_e54;
    /* 0xe58 */ s32 unk_e58;
    /* 0xe5c */ s32 unk_e5c;
    /* 0xe60 */ u8 unk_e60[0x800];
    /* 0x1660 */ u16 unk_1660;
    /* 0x1662 */ u8 unk_1662;
    /* 0x1663 */ u8 unk_1663[6];
    /* 0x1669 */ u8 unk_1669[6];
    /* 0x166f */ u8 unk_166f;
    /* 0x1670 */ u8 unk_1670;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov141_SceneEntry {
    NearbyTownsMenu *(*create)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov141_SceneEntry sNearbyTownsMenuProfile = {NearbyTownsMenu_Create, 0xb6, 0xba};

extern "C" NearbyTownsMenu *NearbyTownsMenu_Create() { return new NearbyTownsMenu(); }

BOOL NearbyTownsMenu::vfunc_00() {
    initNearbyTowns();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL NearbyTownsMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL NearbyTownsMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_6b8.drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    unk_71c.drawAt(unk_e50);
    u32 base = unk_e4c + 0x60;
    s32 h0 = unk_94.getCellList(0);
    s32 h1 = unk_94.getCellList(1);
    s32 h2 = unk_94.getCellList(2);
    s32 h3 = unk_94.getCellList(3);
    s32 t = unk_e54;
    if (t != -1) {
        Oam_DrawCell(1, h1, 0x80, base + (t << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    Oam_DrawCell(1, h0, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, h2, 0x80, base, unk_e5c, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, h3, 0x80, base, unk_e58, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_94.drawTitle(0, unk_e4c);
    return TRUE;
}

BOOL NearbyTownsMenu::execTransition() {
    static Unk_ov141_02293968_Fn tbl[5] = {
        &NearbyTownsMenu::stateLoad,
        &NearbyTownsMenu::stateOpen,
        &NearbyTownsMenu::stateOpening,
        &NearbyTownsMenu::stateClose,
        &NearbyTownsMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void NearbyTownsMenu::runMainState() {
    static Unk_ov141_02293968_Fn tbl[6] = {
        &NearbyTownsMenu::updateTouch,
        &NearbyTownsMenu::updateButtons,
        &NearbyTownsMenu::updateCursorMove,
        &NearbyTownsMenu::updateCursorPress,
        &NearbyTownsMenu::updateCursorRelease,
        &NearbyTownsMenu::updateCloseDelay};
    (this->*tbl[unk_8d])();
}

BOOL NearbyTownsMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL NearbyTownsMenu::execPhase3() { return TRUE; }

BOOL NearbyTownsMenu::execPhase4() { return TRUE; }

BOOL NearbyTownsMenu::execClosed() {
    if (testFlags(2)) {
        MenuCtrl_SetResult(0);
    } else {
        MenuCtrl_SetResult(1);
        void *s = MenuCtrl_GetPtrArg0();
        if (s) {
            MI_CpuCopy8(unk_8a4[unk_e54], s, 0xe0);
        }
        s = MenuCtrl_GetPtrArg1();
        if (s) {
            MI_CpuCopy8(unk_de4[unk_e54], s, 0x11);
        }
    }
    MenuCtrl_ClearPtrArgs();
    ProcBase_RequestDelete(this);
    return TRUE;
}

void NearbyTownsMenu::stateLoad() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    setTransitionState(1);
}

void NearbyTownsMenu::stateOpen() {
    unk_94.createLabels();
    beginSubSlideIn(8, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    updateLayerSlide();
    setFlags(1);
    setTransitionState(2);
}

void NearbyTownsMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        onOpened();
    }
    updateLayerSlide();
}

void NearbyTownsMenu::stateClose() {
    onStartClose();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(4);
}

void NearbyTownsMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void NearbyTownsMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    unk_e4c = getSlideOffsetY();
}

void NearbyTownsMenu::initNearbyTowns() {
    s32 i;
    unk_1660 = 0;
    unk_94.init(6, 0x7e);
    for (i = 0; i < 6; i++) {
        unk_1663[i] = 0;
    }
    selectRow(-1);
    unk_e5c = 8;
    unk_1670 = 0;
}

void NearbyTownsMenu::releaseResources() {
    unk_71c.freeTexts();
    unk_94.release();
    unk_880.cancel();
}

void NearbyTownsMenu::preInputUpdate() {
    preStateUpdate();
    unk_6b8.vfunc_0c();
}

void NearbyTownsMenu::postInputUpdate() {
    postStateUpdate();
}

void NearbyTownsMenu::preStateUpdate() {
    unk_880.cancel();
    unk_71c.freeTexts();
    unk_94.preStateUpdate();
}

void NearbyTownsMenu::postStateUpdate() {
    flushBgScreen();
    unk_94.flushPalette();
}

void NearbyTownsMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void NearbyTownsMenu::loadBgGfx() {
    unk_94.loadBgGfx();
    unk_94.clearAllRows();
    File_LoadToBuffer((void *)"menu/res/b0_bg.bsc", unk_e60, 0x800);
    BgScreen_SetRectPalette(unk_e60, 7, 8, 0x10, 0x13, 7);
    BgScreen_SetRectPalette(unk_e60, 0x12, 8, 0x19, 0x13, 7);
    setFlags(4);
    Gfx2d_LoadPaletteFile((void *)"menu/res/ten0.bpl", gCurrentHeap, 6, 3, 3, 3);
}

void NearbyTownsMenu::loadObjGfx() {
    unk_94.loadObjGfx();
    MenuButtons_LoadTextColors(&unk_71c);
}

void NearbyTownsMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Unk_ov141_02293194_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            if (unk_1663[i] != 0) {
                if (selectRow(i)) {
                    Snd_PlaySe(0x29);
                }
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x37 && x < 0x7b) {
                startQuit();
            } else if (x >= 0x89 && x < 0xc5) {
                if (unk_e58 == 8) {
                    startConfirm();
                }
            }
        }
    } else {
        scanTowns();
    }
}

void NearbyTownsMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else if (moveCursorByPad(takeRepeatedKeys())) {
        moveCursorToTarget();
    } else {
        u32 t = gPad[1];
        if (t & 1) {
            pressCursor();
        } else if (t & 2) {
            hideCursor();
            startQuit();
        } else if ((t & 8) && unk_e58 == 8) {
            hideCursor();
            startConfirm();
        } else {
            scanTowns();
        }
    }
}

void NearbyTownsMenu::updateCursorMove() {
    if (!unk_6b8.isMoving()) {
        setMainState(unk_1662);
        runMainState();
    }
}

void NearbyTownsMenu::updateCursorPress() {
    if (unk_6b8.isAnimDone()) {
        u32 c = unk_1670;
        if (c == 7) {
            if (unk_e58 == 8) {
                startConfirm();
                return;
            }
        } else if (c == 6) {
            startQuit();
            return;
        } else if (unk_1663[c] != 0) {
            selectRow(c);
            Snd_PlaySe(0x29);
            setFlags(8);
            setFlags(0x10);
        }
        setMainState(1);
        releaseCursor();
    }
}

void NearbyTownsMenu::updateCursorRelease() {
    if (unk_6b8.isAnimDone()) {
        refreshCursor();
        setMainState(unk_1662);
        if (testFlags(8)) {
            clearFlags(8);
            unk_1670 = 7;
            moveCursorToTarget();
        }
    }
}

void NearbyTownsMenu::updateCloseDelay() {
    if (unk_166f != 0) {
        unk_166f--;
    } else {
        hideCursor();
        setPhase(1);
    }
}

void NearbyTownsMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void NearbyTownsMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(1);
}

void NearbyTownsMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void NearbyTownsMenu::startConfirm() {
    clearFlags(2);
    unk_e58 = 10;
    unk_166f = 5;
    setTransitionState(3);
    setMainState(5);
    Snd_PlaySe(0x27);
}

void NearbyTownsMenu::startQuit() {
    setFlags(2);
    unk_e5c = 10;
    unk_166f = 5;
    setTransitionState(3);
    setMainState(5);
    Snd_PlaySe(0x28);
}

void NearbyTownsMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_6b8.warpTo(a, b);
    ((MenuCursor *)&unk_6b8)->setAnimIfChanged(7);
    refreshCursor();
}

s32 NearbyTownsMenu::getCursorTargetX() {
    u32 c = unk_1670;
    if (c == 6) {
        return 0x43;
    }
    if (c == 7) {
        return 0x95;
    }
    return 0x2c;
}

s32 NearbyTownsMenu::getCursorTargetY() {
    u32 c = unk_1670;
    if ((u8)(c + 0xfa) <= 1) {
        return 0xae;
    }
    return c * 16 + 0x46;
}

void NearbyTownsMenu::hideCursor() {
    ((MenuCursor *)&unk_6b8)->setAnimIfChanged(0);
    unk_6b8.vfunc_0c();
}

void NearbyTownsMenu::moveCursorToTarget() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void NearbyTownsMenu::moveCursorTo(s32 a, s32 b) {
    if (testFlags(0x10)) {
        unk_6b8.moveToEase(a, b, 3, 0);
        clearFlags(0x10);
    } else {
        unk_6b8.moveToEase(a, b, 3, 1);
    }
    unk_1662 = unk_8d;
    setMainState(2);
}

void NearbyTownsMenu::refreshCursor() {
    unk_6b8.setPoseIdle();
    unk_6b8.vfunc_0c();
}

void NearbyTownsMenu::pressCursor() {
    ((MenuCursor *)&unk_6b8)->setPosePress();
    setMainState(3);
}

void NearbyTownsMenu::releaseCursor() {
    unk_6b8.setPoseRelease();
    unk_1662 = unk_8d;
    setMainState(4);
}

BOOL NearbyTownsMenu::moveCursorByPad(u32 pad) {
    u32 old = unk_1670;
    if (old <= 5) {
        if (MenuKeys_HasUp(pad)) {
            if (unk_1670 != 0) {
                unk_1670 = unk_1670 - 1;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (unk_1670 < 5) {
                unk_1670 = unk_1670 + 1;
            } else {
                unk_1670 = 6;
            }
        }
    } else {
        if (MenuKeys_HasUp(pad)) {
            unk_1670 = 5;
        } else if (MenuKeys_HasLeft(pad)) {
            unk_1670 = 6;
        } else if (MenuKeys_HasRight(pad)) {
            unk_1670 = 7;
        }
    }
    if (old != unk_1670) {
        return TRUE;
    }
    return FALSE;
}

void NearbyTownsMenu::flushBgScreen() {
    if (testFlags(4)) {
        if (unk_880.requestScreen((u32)unk_e60, 6, 0x800, 0)) {
            clearFlags(4);
        }
    }
}

void NearbyTownsMenu::scanTowns() {
    s32 cnt;
    u32 *list;
    s32 n2;
    s32 z[3];
    Unk_ov141_02292b94_Buf buf;
    s32 i;
    Comm_SendEmpty();
    cnt = func_020eae78();
    for (i = 0; i < 6; i++) {
        if (unk_1663[i] == 1) {
            unk_1663[i] = 2;
        }
    }
    NetOverlay_AssertWireless();
    list = Net_GetScanResults();
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    for (u8 j = 0; j < cnt; j = j + 1) {
        u32 e = list[j];
        if (e != 0) {
            NetOverlay_AssertWireless();
            u32 n = func_020ea6c8((void *)e);
            if (n == 0x11) {
                NetOverlay_AssertWireless();
                MI_CpuCopy8(func_020ea6f4((void *)e), &buf, n);
                if (buf.flag == 0) {
                    s32 idx = findRowByAddress((u8 *)e);
                    if (idx == ~z[1]) {
                        s32 idx2 = findFreeRow();
                        if (idx2 != ~z[2]) {
                            storeTown(idx2, (void *)e);
                            NetOverlay_AssertWireless();
                            n2 = func_020ea6c8((void *)e);
                            NetOverlay_AssertWireless();
                            void *q = func_020ea6f4((void *)e);
                            u8 *dst = unk_de4[idx2];
                            MI_CpuCopy8(q, dst, n2);
                            unk_94.setRow(idx2, dst);
                            *((u8 *)this + idx2 + 0x1669) = z[0];
                        }
                    } else {
                        storeTown(idx, (void *)e);
                    }
                }
            }
        }
    }
    updateRowFades();
}

void NearbyTownsMenu::updateRowFades() {
    s32 i;
    s32 none = -1;
    u32 zero = 0;
    for (i = 0; i < 6; i++) {
        u8 *e = (u8 *)this + i;
        u8 *st = e + 0x1663;
        switch (e[0x1663]) {
        case 1:
            if (e[0x1669] < 5) {
                e[0x1669] = e[0x1669] + 1;
                unk_94.setRowFadeColor(i, e[0x1669], 5, 0xe);
            }
            break;
        case 2:
            if (e[0x1669] > 1) {
                e[0x1669]--;
                unk_94.setRowFadeColor(i, e[0x1669], 5, 0xe);
            } else {
                *st = zero;
                unk_94.clearRow(i);
                if (unk_e54 == i) {
                    selectRow(none);
                }
            }
            break;
        }
    }
}

s32 NearbyTownsMenu::findRowByAddress(u8 *e) {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 2) {
            BOOL fE = FALSE, fD = FALSE, fC = FALSE, fB = FALSE, fA = FALSE;
            u8 *s = unk_8a4[i] + 2;
            if (e[2] == s[0] && e[3] == s[1]) {
                fA = TRUE;
            }
            if (fA && e[4] == s[2]) {
                fB = TRUE;
            }
            if (fB && e[5] == s[3]) {
                fC = TRUE;
            }
            if (fC && e[6] == s[4]) {
                fD = TRUE;
            }
            if (fD && e[7] == s[5]) {
                fE = TRUE;
            }
            if (fE) {
                return i;
            }
        }
    }
    return -1;
}

s32 NearbyTownsMenu::findFreeRow() {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 0) {
            return i;
        }
    }
    return -1;
}

void NearbyTownsMenu::storeTown(s32 idx, void *src) {
    MI_CpuCopy8(src, unk_8a4[idx], 0xe0);
    unk_1663[idx] = 1;
}

void NearbyTownsMenu::onOpened() {}

void NearbyTownsMenu::onStartClose() {}

BOOL NearbyTownsMenu::selectRow(s32 v) {
    BOOL changed = unk_e54 != v ? TRUE : FALSE;
    unk_e54 = v;
    if (v == -1) {
        unk_e58 = 9;
    } else {
        unk_e58 = 8;
    }
    return changed;
}

BOOL NearbyTownsMenu::testFlags(u32 m) {
    if (unk_1660 & m) {
        return TRUE;
    }
    return FALSE;
}

void NearbyTownsMenu::setFlags(u32 m) { unk_1660 = unk_1660 | m; }

void NearbyTownsMenu::clearFlags(u32 m) { unk_1660 = unk_1660 & ~m; }

