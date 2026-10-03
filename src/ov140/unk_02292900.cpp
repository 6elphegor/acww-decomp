// ov140: scene overlay (class DistantTownsMenu, vtable 0x02293e04, 0x1760 bytes).
// A list screen of up to 0x20 records shown six per page, with three counters drawn as digits.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class DistantTownsMenu;

extern "C" {
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];

void Mem_Clear(void *p, u32 n);
void Mem_Copy(const void *src, void *dst, u32 n);
void String_FromEncodedBytes(void *win, u8 *src, u32 n);
void BgScreen_SetRectPalette(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void MenuCtrl_SetResult(u32 v);
void MenuCtrl_SetIndex(u32 v);
void MenuCtrl_ClearPtrArgs();
void Snd_PlaySe(u32 v);
void Gfx2d_SetSubBgModeState(u32 a);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Gfx2d_ShowLayer(u32 a);
void Gfx2d_ResetLayer(u32 a);
void File_LoadToBuffer(void *src, void *dst, u32 n);
void Oam_DrawCell(s32 a, void *src, s32 n, void *dst, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void *Net_GetWifiFriendList();
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void MenuButtons_LoadTextColors(void *p);
DistantTownsMenu *DistantTownsMenu_Create();
void DistantTownsMenu_SetupBgLayers();
}

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

// Text window, 0x40 bytes (src/main/unk_0206f53c.cpp)
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void redrawAligned(s32 a, s32 b);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();
    u8 unk_04[0x3c];
};

// Screen upload helper, 0x24 bytes (src/main/unk_020b8464.cpp)
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u8 unk_04[0x20];
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
    u32 getCellList(s32 i);
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

typedef void (DistantTownsMenu::*Unk_ov140_02293e04_Fn)();

class DistantTownsMenu : public MenuProc {
public:
    DistantTownsMenu() : unk_8e8(), unk_f0c(), unk_f70(), unk_10d4(), unk_16a0() {}

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
    void drawPageIndex();
    void drawLastPageIndex();
    void drawTownCount();
    void resetTextLabels();
    LabelString *allocTextLabel();
    void *getFriendList();
    void fadeRows(s32 t);
    BOOL isListedFriend(u8 *p);
    void initList();
    s32 countListedFriends();
    void refreshPage();
    BOOL refreshRowIcons();
    void selectRow(s32 v);
    void resetRowScreen();
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
    void nextPage();
    void startQuit();
    void startConfirm();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updatePageFadeIn();
    void updatePageFadeOut();
    void updateCloseDelay();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void updateTouch();
    void refreshFriendStatus();
    void loadObjGfx();
    void loadBgGfx();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initDistantTowns();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u8 *unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[0x800];
    /* 0x8ac */ u16 unk_8ac;
    /* 0x8ae */ u8 unk_8ae;
    /* 0x8af */ u8 unk_8af[6];
    /* 0x8b5 */ u8 unk_8b5[0x20];
    /* 0x8d5 */ u8 unk_8d5[6];
    /* 0x8db */ u8 unk_8db;
    /* 0x8dc */ u8 unk_8dc;
    /* 0x8dd */ u8 unk_8dd;
    /* 0x8de */ u8 unk_8de;
    /* 0x8df */ u8 unk_8df;
    /* 0x8e0 */ u8 unk_8e0[6];
    /* 0x8e6 */ u8 unk_8e6;
    /* 0x8e7 */ u8 unk_8e7;
    /* 0x8e8 */ MenuTownListPanel unk_8e8;
    /* 0xf0c */ MenuCursorBuf0 unk_f0c;
    /* 0xf70 */ MenuBottomButtons unk_f70;
    /* 0x10d4 */ BgVramTask unk_10d4;
    /* 0x10f8 */ u8 unk_10f8[0x16a0 - 0x10f8];
    /* 0x16a0 */ LabelString unk_16a0[3];
};

extern "C" {
extern u32 data_ov140_02293d00[];
extern u32 data_ov140_02293d40[];
extern u32 data_ov140_02293d80[];
extern u32 data_ov140_02293d88[];
extern u32 data_ov140_02293da4[];
extern u32 data_ov140_02293dcc[];
extern u32 data_ov140_02293e64[];
}

static inline BOOL Unk_ov140_02293450_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov140_SceneEntry {
    DistantTownsMenu *(*create)();
    u16 a;
    u16 b;
};

// Data definition order is chosen so mwcc emits the objects in the original order

extern "C" u32 data_ov140_02293e64[84] = {
    0x81a800a8, 0x0000b17b, 0x41c880a8, 0x0000b17f,
    0x41a840c8, 0x0000b1fb, 0x01c800c8, 0x0000b1ff,
    0x4028403e, 0x000048e6, 0x4008403e, 0x000048e6,
    0x41e0403e, 0x000048e6, 0x41c0403e, 0x000048e6,
    0x41a0403e, 0x000048e6, 0x4028402e, 0x000048e6,
    0x4008402e, 0x000048e6, 0x41e0402e, 0x000048e6,
    0x41c0402e, 0x000048e6, 0x41a0402e, 0x000048e6,
    0x4028401e, 0x000048e6, 0x4008401e, 0x000048e6,
    0x41e0401e, 0x000048e6, 0x41c0401e, 0x000048e6,
    0x41a0401e, 0x000048e6, 0x4028400e, 0x000048e6,
    0x4008400e, 0x000048e6, 0x41e0400e, 0x000048e6,
    0x41c0400e, 0x000048e6, 0x41a0400e, 0x000048e6,
    0x402840fe, 0x000048e6, 0x400840fe, 0x000048e6,
    0x41e040fe, 0x000048e6, 0x41c040fe, 0x000048e6,
    0x41a040fe, 0x000048e6, 0x402840ee, 0x000048e6,
    0x400840ee, 0x000048e6, 0x41e040ee, 0x000048e6,
    0x41c040ee, 0x000048e6, 0x41a040ee, 0x000048e6,
    0x41b440d6, 0x000058cd, 0x01d440d6, 0x000058d1,
    0x400c40d6, 0x000058ed, 0x002c40d6, 0x000058f1,
    0x902040d5, 0x00005888, 0x800840d5, 0x00005888,
    0x91c840d5, 0x00005888, 0x81b040d5, 0xffff5888,
};

// Scene registration entry read by main (0x020e2100): factory, then two ids
extern "C" Unk_ov140_SceneEntry sDistantTownsMenuProfile = {DistantTownsMenu_Create, 0xb5, 0xb9};

extern "C" u32 data_ov140_02293d80[2] = {0x804840e0, 0xffffc1c8};

extern "C" u32 data_ov140_02293d40[2] = {0x804840e0, 0xffffc1c0};

// Sprite descriptors for the per-row status icons (vfunc_24)
extern "C" u32 data_ov140_02293d00[2] = {0x804840e0, 0xffffc1c4};

extern "C" u32 data_ov140_02293d88[2] = {0x804840e0, 0xffffd1cc};

extern "C" u32 data_ov140_02293dcc[12] = {
    0x402840ee, 0x000058c6, 0x419c00df, 0x00005886, 0x400840ee, 0x000058c6,
    0x41e040ee, 0x000058c6, 0x41c040ee, 0x000058c6, 0x41a040ee, 0xffff58c6,
};

extern "C" DistantTownsMenu *DistantTownsMenu_Create() { return new DistantTownsMenu(); }

BOOL DistantTownsMenu::vfunc_00() {
    initDistantTowns();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL DistantTownsMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL DistantTownsMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_f0c.drawWrapped();
    }
    if (testFlags(1) == 0) {
        return FALSE;
    }
    unk_f70.drawAt(unk_98);
    u8 *base = unk_94 + 0x60;
    Oam_DrawCell(1, data_ov140_02293da4, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    u32 a = unk_8e8.getCellList(5);
    u32 b = unk_8e8.getCellList(6);
    u32 c = unk_8e8.getCellList(7);
    s32 v = unk_9c;
    if (v != -1) {
        Oam_DrawCell(1, data_ov140_02293dcc, 0x80, base + (v << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    Oam_DrawCell(1, data_ov140_02293e64, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)a, 0x80, base, unk_a8, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)b, 0x80, base, unk_a4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, (void *)c, 0x80, base, unk_a0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_8e8.drawTitle(0, (s32)unk_94);
    if (testFlags(0x20) == 0) {
        void *tbl[5] = {0, data_ov140_02293d40, data_ov140_02293d00, data_ov140_02293d80, data_ov140_02293d88};
        s32 z = 0;
        s32 i;
        for (i = 0; i < 6; base += 0x10, i++) {
            void *t = tbl[unk_8e0[i]];
            if (t != 0) {
                Oam_DrawCell(1, t, 0x80, base, -1, 2, 0x1000, 0x1000, z, -1, z, z);
            }
        }
    }
    return TRUE;
}

extern "C" u32 data_ov140_02293da4[10] = {
    0x005040d7, 0x000081f4, 0x004880d4, 0x0000c1d0, 0x01a600d7,
    0x000081f3, 0x019a00d7, 0x000081f2, 0x01a000d7, 0xffff81f1,
};

BOOL DistantTownsMenu::execTransition() {
    static Unk_ov140_02293e04_Fn tbl[5] = {
        &DistantTownsMenu::stateLoad,
        &DistantTownsMenu::stateOpen,
        &DistantTownsMenu::stateOpening,
        &DistantTownsMenu::stateClose,
        &DistantTownsMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void DistantTownsMenu::runMainState() {
    static Unk_ov140_02293e04_Fn tbl[8] = {
        &DistantTownsMenu::updateTouch,
        &DistantTownsMenu::updateButtons,
        &DistantTownsMenu::updateCursorMove,
        &DistantTownsMenu::updateCursorPress,
        &DistantTownsMenu::updateCursorRelease,
        &DistantTownsMenu::updateCloseDelay,
        &DistantTownsMenu::updatePageFadeOut,
        &DistantTownsMenu::updatePageFadeIn};
    (this->*tbl[unk_8d])();
}

BOOL DistantTownsMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL DistantTownsMenu::execPhase3() { return TRUE; }

BOOL DistantTownsMenu::execPhase4() { return TRUE; }

BOOL DistantTownsMenu::execClosed() {
    if (testFlags(2)) {
        MenuCtrl_SetResult(0);
    } else {
        MenuCtrl_SetResult(1);
        MenuCtrl_SetIndex(unk_8d5[unk_9c]);
    }
    MenuCtrl_ClearPtrArgs();
    ProcBase_RequestDelete(this);
    return TRUE;
}

void DistantTownsMenu::stateLoad() {
    DistantTownsMenu_SetupBgLayers();
    loadBgGfx();
    loadObjGfx();
    unk_8e8.createLabels();
    setTransitionState(1);
}

void DistantTownsMenu::stateOpen() {
    initList();
    refreshPage();
    fadeRows(5);
    beginSubSlideIn(8, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    updateLayerSlide();
    setFlags(1);
    setTransitionState(2);
}

void DistantTownsMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void DistantTownsMenu::stateClose() {
    ((MenuLauncher *)ProcBase_GetParent())->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(4);
}

void DistantTownsMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void DistantTownsMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    unk_94 = (u8 *)getSlideOffsetY();
}

void DistantTownsMenu::initDistantTowns() {
    unk_8ac = 0;
    unk_8e8.init(6, 0x7f);
    s32 i;
    for (i = 0; i < 6; i++) {
        unk_8af[i] = 0;
        unk_8e0[i] = 0;
    }
    for (i = 0; i < 0x20; i++) {
        unk_8b5[i] = 0xff;
    }
    selectRow(-1);
    unk_a4 = 8;
    unk_a8 = 9;
    unk_8dc = 0;
    unk_8dd = 0;
    unk_8de = 0;
}

void DistantTownsMenu::releaseResources() {
    unk_f70.freeTexts();
    unk_8e8.release();
    unk_10d4.cancel();
    resetTextLabels();
}

void DistantTownsMenu::preInputUpdate() {
    preStateUpdate();
    unk_f0c.vfunc_0c();
}

void DistantTownsMenu::postInputUpdate() { postStateUpdate(); }

void DistantTownsMenu::preStateUpdate() {
    unk_10d4.cancel();
    unk_f70.freeTexts();
    unk_8e8.preStateUpdate();
    resetTextLabels();
}

void DistantTownsMenu::postStateUpdate() {
    flushBgScreen();
    unk_8e8.flushPalette();
}

extern "C" void DistantTownsMenu_SetupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void DistantTownsMenu::loadBgGfx() {
    unk_8e8.loadBgGfx();
    unk_8e8.clearAllRows();
    File_LoadToBuffer((void *)"menu/res/d0_bg.bsc", unk_ac, 0x800);
    resetRowScreen();
}

void DistantTownsMenu::loadObjGfx() {
    unk_8e8.loadObjGfx();
    MenuButtons_LoadTextColors(&unk_f70);
}

void DistantTownsMenu::refreshFriendStatus() {
    u32 c = countListedFriends();
    if (c != unk_8df) {
        unk_8df = c;
        drawTownCount();
        refreshPage();
        fadeRows(5);
    } else if (refreshRowIcons()) {
        fadeRows(5);
    }
}

void DistantTownsMenu::updateTouch() {
    refreshFriendStatus();
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov140_02293450_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            u8 *e = (u8 *)this + i;
            if (e[0x8af] != 0 && e[0x8e0] != 4) {
                selectRow(i);
                Snd_PlaySe(0x29);
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x5e && x < 0x9a) {
                startQuit();
            } else if (x >= 0x9f && x < 0xdb) {
                if (unk_a0 == 8) {
                    startConfirm();
                }
            } else if (x >= 0x1d && x < 0x59) {
                if (unk_a8 == 8) {
                    nextPage();
                }
            }
        }
    }
}

void DistantTownsMenu::updateButtons() {
    refreshFriendStatus();
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        s32 v = takeRepeatedKeys();
        if (moveCursorByPad(v)) {
            moveCursorToTarget();
        } else {
            u16 t = gPad[1];
            if ((u32)t & 1) {
                pressCursor();
            } else if ((u32)t & 2) {
                startQuit();
                hideCursor();
            }
        }
    }
}

void DistantTownsMenu::updateCursorMove() {
    if (unk_f0c.isMoving() == 0) {
        setMainState(unk_8ae);
        runMainState();
    }
}

void DistantTownsMenu::updateCursorPress() {
    if (unk_f0c.isAnimDone()) {
        u32 c = unk_8dc;
        if (c == 6) {
            if (unk_a8 != 8) {
                goto tail;
            }
            nextPage();
        } else if (c == 8) {
            if (unk_a0 != 8) {
                goto tail;
            }
            startConfirm();
        } else if (c == 7) {
            startQuit();
        } else {
            u8 *e = (u8 *)this + c;
            if (e[0x8af] == 0 || e[0x8e0] == 4) {
                goto tail;
            }
            selectRow(c);
            Snd_PlaySe(0x29);
            setFlags(8);
            setFlags(0x10);
        tail:
            setMainState(1);
            releaseCursor();
        }
    }
}

void DistantTownsMenu::updateCursorRelease() {
    if (unk_f0c.isAnimDone()) {
        refreshCursor();
        setMainState(unk_8ae);
        if (testFlags(8)) {
            clearFlags(8);
            unk_8dc = 8;
            moveCursorToTarget();
        }
    }
}

void DistantTownsMenu::updateCloseDelay() {
    if (unk_8db != 0) {
        unk_8db = unk_8db - 1;
    } else {
        hideCursor();
        setPhase(1);
    }
}

void DistantTownsMenu::updatePageFadeOut() {
    if (unk_8db > 1) {
        unk_8db = unk_8db - 1;
        fadeRows(unk_8db);
    } else {
        fadeRows(0);
        refreshPage();
        setMainState(7);
    }
}

void DistantTownsMenu::updatePageFadeIn() {
    u32 t = unk_8db;
    if (t < 5) {
        fadeRows(t);
        unk_8db++;
    } else {
        fadeRows(5);
        unk_a8 = 8;
        if (MenuCtrl_IsTouch()) {
            startTouchInput();
        } else {
            setMainState(1);
            releaseCursor();
        }
        clearFlags(0x20);
    }
}

void DistantTownsMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void DistantTownsMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(1);
}

void DistantTownsMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void DistantTownsMenu::startConfirm() {
    clearFlags(2);
    unk_a0 = 10;
    unk_8db = 5;
    setTransitionState(3);
    setMainState(5);
    Snd_PlaySe(0x27);
}

void DistantTownsMenu::startQuit() {
    setFlags(2);
    unk_a4 = 10;
    unk_8db = 5;
    setTransitionState(3);
    setMainState(5);
    Snd_PlaySe(0x28);
}

void DistantTownsMenu::nextPage() {
    setFlags(0x20);
    setMainState(6);
    unk_8db = 5;
    unk_8dd++;
    if (unk_8dd > unk_8de) {
        unk_8dd = 0;
    }
    drawPageIndex();
    unk_a8 = 10;
    selectRow(-1);
    Snd_PlaySe(0xc);
}

void DistantTownsMenu::showCursor() {
    s32 x = getCursorTargetX();
    s32 y = getCursorTargetY();
    unk_f0c.warpTo(x, y);
    ((MenuCursor *)&unk_f0c)->setAnimIfChanged(7);
    refreshCursor();
}

s32 DistantTownsMenu::getCursorTargetX() {
    u32 v = unk_8dc;
    if (v == 7) {
        return 0x6a;
    }
    if (v == 8) {
        return 0xab;
    }
    if (v == 6) {
        return 0x29;
    }
    return 0x24;
}

s32 DistantTownsMenu::getCursorTargetY() {
    u32 v = unk_8dc;
    if ((u8)(v + 0xfa) <= 2) {
        return 0xae;
    }
    return v * 16 + 0x46;
}

void DistantTownsMenu::hideCursor() {
    ((MenuCursor *)&unk_f0c)->setAnimIfChanged(0);
    unk_f0c.vfunc_0c();
}

void DistantTownsMenu::moveCursorToTarget() {
    s32 x = getCursorTargetX();
    s32 y = getCursorTargetY();
    moveCursorTo(x, y);
}

void DistantTownsMenu::moveCursorTo(s32 a, s32 b) {
    if (testFlags(0x10)) {
        unk_f0c.moveToEase(a, b, 3, 0);
        clearFlags(0x10);
    } else {
        unk_f0c.moveToEase(a, b, 3, 1);
    }
    unk_8ae = unk_8d;
    setMainState(2);
}

void DistantTownsMenu::refreshCursor() {
    unk_f0c.setPoseIdle();
    unk_f0c.vfunc_0c();
}

void DistantTownsMenu::pressCursor() {
    ((MenuCursor *)&unk_f0c)->setPosePress();
    setMainState(3);
}

void DistantTownsMenu::releaseCursor() {
    unk_f0c.setPoseRelease();
    unk_8ae = unk_8d;
    setMainState(4);
}

BOOL DistantTownsMenu::moveCursorByPad(u32 pad) {
    u32 old = unk_8dc;
    if (old <= 5) {
        if (MenuKeys_HasUp(pad)) {
            if (unk_8dc != 0) {
                unk_8dc--;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (unk_8dc < 5) {
                unk_8dc++;
            } else {
                unk_8dc = 6;
            }
        }
    } else {
        if (MenuKeys_HasUp(pad)) {
            unk_8dc = 5;
        } else if (MenuKeys_HasLeft(pad)) {
            if (unk_8dc > 6) {
                unk_8dc--;
            }
        } else if (MenuKeys_HasRight(pad)) {
            if (unk_8dc < 8) {
                unk_8dc++;
            }
        }
    }
    if (old != unk_8dc) {
        return TRUE;
    }
    return FALSE;
}

void DistantTownsMenu::flushBgScreen() {
    if (testFlags(4)) {
        if (unk_10d4.requestScreen((u32)unk_ac, 6, 0x800, 0)) {
            clearFlags(4);
        }
    }
}

void DistantTownsMenu::resetRowScreen() {
    BgScreen_SetRectPalette(unk_ac, 6, 8, 0xf, 0x13, 7);
    BgScreen_SetRectPalette(unk_ac, 0x11, 8, 0x18, 0x13, 7);
    setFlags(4);
}

void DistantTownsMenu::selectRow(s32 v) {
    unk_9c = v;
    if (v == -1) {
        unk_a0 = 9;
    } else {
        unk_a0 = 8;
    }
}

BOOL DistantTownsMenu::refreshRowIcons() {
    s32 i, k;
    BOOL changed = FALSE;
    u8 *tbl = (u8 *)getFriendList();
    k = unk_8dd * 6;
    i = 0;
    s32 z = 0;
    do {
        s32 off = k * 0x13;
        s32 v;
        if (isListedFriend(tbl + 0x180 + off) == 0) {
            v = z;
        } else {
            v = (tbl + off)[0x192];
        }
        if (v != unk_8e0[i]) {
            changed = TRUE;
            unk_8e0[i] = v;
        }
        k++;
        i++;
    } while (i < 6);
    return changed;
}

void DistantTownsMenu::refreshPage() {
    struct { u8 a[8]; u8 b[8]; u8 pad[8]; } l;
    u32 id;
    u8 *rec;
    u32 off;
    s32 z1 = 0, z2 = 0;
    resetRowScreen();
    Mem_Clear(l.a, 8);
    Mem_Clear(l.b, 8);
    s32 j = unk_8dd * 6;
    u8 *tbl = (u8 *)getFriendList();
    s32 i = 0;
    for (; i < 6; j++, i++) {
        if (j < 0x20) {
            id = unk_8b5[j];
            if (id == 0xff || (off = id * 0x13, rec = tbl + 0x180 + off, !isListedFriend(rec))) {
                unk_8af[i] = z1;
                unk_8e0[i] = z1;
                unk_8e8.clearRow(i);
            } else {
                unk_8d5[i] = id;
                unk_8af[i] = 1;
                unk_8e0[i] = (tbl + off)[0x192];
                Mem_Copy(tbl + 0x188 + off, l.a, 8);
                Mem_Copy(rec, l.b, 8);
                unk_8e8.setRow(i, l.a);
            }
        } else {
            unk_8af[i] = z2;
            unk_8e0[i] = z2;
            unk_8e8.clearRow(i);
        }
    }
}

s32 DistantTownsMenu::countListedFriends() {
    s32 i, cnt;
    u8 *tbl = (u8 *)getFriendList();
    cnt = 0;
    i = 0;
    do {
        if (isListedFriend(tbl + 0x180 + i * 0x13)) {
            cnt++;
        }
        i++;
    } while (i < 0x20);
    return cnt;
}

void DistantTownsMenu::initList() {
    u8 *tbl = (u8 *)getFriendList();
    s32 cnt = 0;
    s32 i = 0;
    do {
        if (isListedFriend(tbl + 0x180 + i * 0x13)) {
            cnt++;
        }
        unk_8b5[i] = i;
        i++;
    } while (i < 0x20);
    unk_8dd = 0;
    unk_8de = 5;
    unk_8df = cnt;
    drawLastPageIndex();
    drawTownCount();
    drawPageIndex();
    if (unk_8de != 0) {
        unk_a8 = 8;
    }
}

BOOL DistantTownsMenu::isListedFriend(u8 *p) {
    if (p[0x10] == 6 && p[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

void DistantTownsMenu::fadeRows(s32 t) {
    s32 i;
    for (i = 0; i < 6; i++) {
        s32 col;
        if (unk_8e0[i] == 4) {
            col = 8;
        } else {
            col = 0xe;
        }
        unk_8e8.setRowFadeColor(i, t, 5, col);
    }
}

void *DistantTownsMenu::getFriendList() { return Net_GetWifiFriendList(); }

LabelString *DistantTownsMenu::allocTextLabel() {
    u32 c = unk_8e6;
    if (c >= 3) {
        return &unk_16a0[2];
    }
    unk_8e6 = c + 1;
    return &unk_16a0[unk_8e6 - 1];
}

void DistantTownsMenu::resetTextLabels() {
    s32 i;
    unk_8e6 = 0;
    for (i = 0; i < 3; i++) {
        unk_16a0[i].destroyLabel();
    }
}

void DistantTownsMenu::drawTownCount() {
    LabelString *w = allocTextLabel();
    u8 buf[3];
    u32 v = unk_8df;
    if (v < 10) {
        buf[0] = v + 0x35;
        buf[1] = 0;
        buf[2] = 0;
    } else {
        buf[0] = (s32)v / 10 + 0x35;
        buf[1] = unk_8df % 10 + 0x35;
        buf[2] = 0;
    }
    String_FromEncodedBytes(w, buf, 3);
    w->createSmallLabel(8, 0x1f4, 2, 0xf, 0, 1);
    w->redrawAligned(0, 0);
}

void DistantTownsMenu::drawLastPageIndex() {
    LabelString *w = allocTextLabel();
    u8 buf[2];
    buf[0] = unk_8de + 0x35;
    buf[1] = 0;
    String_FromEncodedBytes(w, buf, 2);
    w->createSmallLabel(8, 0x1f3, 1, 0xf, 0, 1);
    w->redrawAligned(0, 0);
}

void DistantTownsMenu::drawPageIndex() {
    LabelString *w = allocTextLabel();
    u8 buf[2];
    buf[0] = unk_8dd + 0x35;
    buf[1] = 0;
    String_FromEncodedBytes(w, buf, 2);
    w->createSmallLabel(8, 0x1f2, 1, 0xf, 0, 1);
    w->redrawAligned(0, 0);
}

BOOL DistantTownsMenu::testFlags(u32 m) {
    if (unk_8ac & m) {
        return TRUE;
    }
    return FALSE;
}

void DistantTownsMenu::setFlags(u32 m) { unk_8ac = unk_8ac | m; }

void DistantTownsMenu::clearFlags(u32 m) { unk_8ac = unk_8ac & ~m; }

