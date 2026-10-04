// ov113: scene overlay (class BbsReadMenu, vtable 0x02293640, 0x29cc bytes).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "save/BbsPost.h"

class BbsReadMenu;

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern void *gCurrentHeap;
extern u8 data_021e87d8[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 data_ov113_022936a0[];
s32 Snd_PlaySe(s32 a);
u32 Bbs_GetPostCount();
void *ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void BgScreen_SetRectPalette(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void String_Load2dMenu(void *o, u32 x);
void String_FromEncodedBytes(void *dst, const void *s, s32 len);
void String_FromEncodedBytesEx(void *dst, const void *s, s32 len, BOOL a, u32 b);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
void func_ov092_02291c5c();
void Gfx2d_HideLayer(s32 a);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetMainBgModeState(u32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
s32 PlayerData_GetCurrentIndex();
u8 *BbsPost_GetText(void *p);
s32 Text_SplitLines(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);
void String_SetSlot(s32 a, void *buf);
s32 Gfx2d_LoadPaletteFile(void *, void *, u32, u32, u32, u32);
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
BOOL Gfx2d_LoadScreen(void *p, u32 a, u32 b, u32 c);
s32 Gfx2d_LoadCharFile(void *, void *, u32, u32, u32, u32);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 Oam_DrawObj(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void G2x_SetBlendBrightnessExt_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
BbsReadMenu *BbsReadMenu_Create();
}

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

class BbsBoard {
public:
    static void *getPost(s32 p);
};


// Text window, 0x40 bytes
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void redrawAligned(s32 a, s32 b);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void createBufferLabel(u32 a, u32 b, u8 x, u8 y);
    void destroyLabel();
    u8 unk_04[0x3c];
};

class MsgString {
public:
    void clear();
};

// Screen upload helper, 0x24 bytes
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    void requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u8 unk_04[0x20];
};

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
    s32 getFrameScreenX();
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

class MenuCursorBuf1 : public MenuCursorBase {
public:
    MenuCursorBuf1();
    virtual ~MenuCursorBuf1();
    u32 unk_04[0x60 / 4];
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
    void setSlideExtent(s32 a);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    void restartKeyRepeat();
    u32 takeRepeatedKeys();

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

typedef void (BbsReadMenu::*Unk_ov113_02293640_Fn)();

struct Unk_ov113_SceneEntry {
    BbsReadMenu *(*factory)();
    u16 a;
    u16 b;
};

// Vtable 0x02293640, size 0x29cc
class BbsReadMenu : public MenuProc {
public:
    BbsReadMenu() : bgTasks(), infoLabels(), lineLabels(), cursor() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    BOOL moveFocusByPad(void *pad);
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void moveCursorToTarget();
    void hideCursor();
    s32 getFocusY();
    s32 getFocusX();
    s32 getFocusBaseX();
    void showCursor();
    void updatePostCount();
    BOOL activateFocus();
    void setFocusHighlight(s32 flag);
    BOOL touchButtons();
    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    void placeLabel(s32 idx, s32 a, s32 b, s32 c, s32 d);
    void setupButtonLabels();
    void showPost(void *pad);
    void markPostRead(void *unused);
    void showPostNumber(s32 i);
    void showPostDate(void *unused);
    void showPostText(void *unused);
    void startButtonInput();
    void startTouchInput();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadBg();
    void setupBgLayer();
    void postStateUpdate();
    void postInputUpdate();
    void preStateUpdate();
    void preInputUpdate();
    void releaseResources();
    void init();
    void transitionAct08();
    void transitionAct07();
    void transitionAct06();
    void transitionAct05();
    void transitionAct04();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void drawPageDots(s32 a, s32 *p);

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 slideY;
    /* 0x098 */ u16 flags;
    /* 0x09a */ volatile u8 postIndex;
    /* 0x09b */ volatile u8 focus;
    /* 0x09c */ u8 returnState;
    /* 0x09d */ u8 postCount;
    /* 0x09e */ u8 pageDotsX;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u16 bgScreenBuf[0x400];
    /* 0x8a0 */ u8 lineCharBufs[6][0x500];
    /* 0x26a0 */ BgVramTask bgTasks[2];
    /* 0x26e8 */ LabelString infoLabels[4];
    /* 0x27e8 */ LabelString lineLabels[6];
    /* 0x2968 */ MenuCursorBuf1 cursor;
};

static inline BOOL Unk_ov113_02292cc0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BbsReadMenu *BbsReadMenu_Create() { return new BbsReadMenu(); }

BOOL BbsReadMenu::vfunc_00() {
    G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    init();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL BbsReadMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

void BbsReadMenu::drawPageDots(s32 a, s32 *p) {
    u8 i;
    s32 z = 0;
    for (i = 0; i < postCount; i++) {
        Oam_DrawObj(z, (void *)(data_ov113_022936a0 + (i + 8) * 8), a, (s32)p, i == postIndex ? 11 : 10, 1, (s32 *)z);
    }
}

BOOL BbsReadMenu::onDraw() {
    if (!testFlags(8)) {
        return TRUE;
    }
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    s32 x = 0x80;
    s32 y = slideY + 0x60;
    s32 p0 = 10;
    s32 p1 = 10;
    if (testFlags(2)) {
        p0 = 11;
    } else if (testFlags(4)) {
        p1 = 11;
    }
    Oam_DrawCell(0, (void *)data_ov113_022936a0, 0x80, y, p0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(0, (void *)(data_ov113_022936a0 + 0x20), 0x80, y, p1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    x += pageDotsX;
    if (testFlags(0x100)) {
        x += getSlideOffsetX();
    }
    drawPageDots(x, (s32 *)y);
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov113_SceneEntry data_ov113_022935c8;
extern "C" u8 data_ov113_022936a0[0xb8];

extern "C" Unk_ov113_SceneEntry data_ov113_022935c8 = {BbsReadMenu_Create, 0xa7, 0xab};

extern "C" u8 data_ov113_022936a0[0xb8] = {0xf0,0x00,0x66,0x40,0xc0,0xb1,0x00,0x00,0xf0,0x80,0x76,0x00,0xc2,0xb1,0x00,0x00,0x00,0x00,0x66,0x60,0xc0,0xb1,0x00,0x00,0x00,0x80,0x76,0x20,0xc2,0xb1,0xff,0xff,
0xf0,0x00,0x8a,0x51,0xc0,0xa1,0x00,0x00,0xf0,0x80,0x82,0x11,0xc2,0xa1,0x00,0x00,0x00,0x00,0x8a,0x71,0xc0,0xa1,0x00,0x00,0x00,0x80,0x82,0x31,0xc2,0xa1,0xff,0xff,0x38,0x00,0xc4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xcc,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xd4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xdc,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xe4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xec,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xf4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xfc,0x01,0xe3,0xb1,0x00,0x00,0x38,0x00,0x04,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x0c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x14,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x1c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x24,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x2c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x34,0x00,0xe3,0xa1,0xff,0xff};

BOOL BbsReadMenu::execTransition() {
    static Unk_ov113_02293640_Fn tbl[9] = {
        &BbsReadMenu::transitionAct00,
        &BbsReadMenu::transitionAct01,
        &BbsReadMenu::transitionAct02,
        &BbsReadMenu::transitionAct03,
        &BbsReadMenu::transitionAct04,
        &BbsReadMenu::transitionAct05,
        &BbsReadMenu::transitionAct06,
        &BbsReadMenu::transitionAct07,
        &BbsReadMenu::transitionAct08};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

BOOL BbsReadMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        if (mainState == 0) goto st;
        if (mainState == 1) {
        st:
            focus = 3;
            hideCursor();
            activateFocus();
            return TRUE;
        }
    }
    preInputUpdate();
    static Unk_ov113_02293640_Fn tbl[5] = {
        &BbsReadMenu::mainAct00,
        &BbsReadMenu::mainAct01,
        &BbsReadMenu::mainAct02,
        &BbsReadMenu::mainAct03,
        &BbsReadMenu::mainAct04};
    (this->*tbl[mainState])();
    postInputUpdate();
    return TRUE;
}

BOOL BbsReadMenu::execPhase3() { return TRUE; }

BOOL BbsReadMenu::execPhase4() { return TRUE; }

BOOL BbsReadMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void BbsReadMenu::transitionAct00() {
    setupBgLayer();
    loadBg();
    beginMainSlideIn(8, 6, 0, 0x30);
    Gfx2d_ShowLayer(2);
    applySlideOffset(2, 0, 0);
    setTransitionState(1);
    setupButtonLabels();
}

void BbsReadMenu::transitionAct01() {
    setTransitionState(2);
    showPost((void *)postIndex);
    slideY = getSlideOffsetY();
    setFlags(8);
}

void BbsReadMenu::transitionAct02() {
    if (stepSlideIn(1)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            startTouchInput();
        } else {
            startButtonInput();
        }
    }
    applySlideOffset(2, 0, 0);
    slideY = getSlideOffsetY();
}

void BbsReadMenu::transitionAct03() {
    beginMainSlideOut(8, 0, 0, 0x30);
    applySlideOffset(2, 0, 0);
    setTransitionState(4);
}

void BbsReadMenu::transitionAct04() {
    if (stepSlideOut(1)) {
        Gfx2d_HideLayer(2);
        Gfx2d_SetLayerOffset(2, 0, 0);
        setPhase(5);
        clearFlags(8);
    } else {
        applySlideOffset(2, 0, 0);
        slideY = getSlideOffsetY();
    }
}

void BbsReadMenu::transitionAct05() {
    s32 m;
    setFlags(0x100);
    switch (focus) {
    case 1:
    case 4:
        m = 2;
        break;
    case 0:
    case 5:
        m = 3;
        break;
    default:
        if (testFlags(0x40)) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    switch (focus) {
    case 0:
    case 1:
        Snd_PlaySe(0x3c);
        break;
    default:
        Snd_PlaySe(0x39);
        break;
    }
    beginMainSlideOut(8, 0, m, 0x30);
    applySlideOffset(2, 0, 0);
    setTransitionState(6);
}

void BbsReadMenu::transitionAct06() {
    if (stepSlideOut(1)) {
        Gfx2d_HideLayer(2);
        setTransitionState(7);
    } else {
        applySlideOffset(2, 0, 0);
    }
}

void BbsReadMenu::transitionAct07() {
    s32 m;
    switch (focus) {
    case 1:
        setFocusHighlight(0);
    case 4:
        m = 3;
        break;
    case 0:
        setFocusHighlight(0);
    case 5:
        m = 2;
        break;
    default:
        if (testFlags(0x40) == 0) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    beginMainSlideIn(8, 6, m, 0x30);
    Gfx2d_ShowLayer(2);
    applySlideOffset(2, 0, 0);
    setTransitionState(8);
    showPost((void *)postIndex);
}

void BbsReadMenu::transitionAct08() {
    if (stepSlideIn(1)) {
        setPhase(2);
        setFocusHighlight(0);
        if (MenuCtrl_IsTouch()) {
            startTouchInput();
        } else {
            restartKeyRepeat();
            setMainState(1);
            clearFlags(0x100);
            showCursor();
        }
    }
    applySlideOffset(2, 0, 0);
}

void BbsReadMenu::init() {
    slideY = 0;
    flags = 0;
    focus = 3;
    updatePostCount();
    postIndex = postCount - 1;
}

void BbsReadMenu::releaseResources() {
    bgTasks[0].cancel();
    bgTasks[1].cancel();
    infoLabels[0].destroyLabel();
    infoLabels[1].destroyLabel();
    infoLabels[2].destroyLabel();
    infoLabels[3].destroyLabel();
    for (s32 i = 0; i < 6; i++) {
        lineLabels[i].destroyLabel();
    }
}

void BbsReadMenu::preInputUpdate() { preStateUpdate(); }

void BbsReadMenu::preStateUpdate() {
    cursor.vfunc_0c();
    infoLabels[0].destroyLabel();
    infoLabels[1].destroyLabel();
    infoLabels[2].destroyLabel();
    infoLabels[3].destroyLabel();
    for (s32 i = 0; i < 6; i++) {
        lineLabels[i].destroyLabel();
    }
}

void BbsReadMenu::postInputUpdate() { postStateUpdate(); }

void BbsReadMenu::postStateUpdate() {
    if (testFlags(1)) {
        if (bgTasks[1].requestScreen((u32)bgScreenBuf, 2, 0x800, 0)) {
            clearFlags(1);
        }
    }
}

void BbsReadMenu::setupBgLayer() {
    Gfx2d_SetMainBgModeState(0);
    Gfx2d_SetLayerPriority(2, 1);
    Gfx2d_SetLayerControl(2, 0, 0, 0);
}

void BbsReadMenu::loadBg() {
    void *h = gCurrentHeap;
    Gfx2d_LoadPaletteFile((void *)"menu/bbs/b_bbs.bpl", h, 2, 8, 8, 0xe);
    File_LoadToBuffer((void *)"menu/bbs/b_bbs_us.bsc", bgScreenBuf, 0x800);
    Gfx2d_LoadScreen(bgScreenBuf, 2, 0x800, 0);
    Gfx2d_LoadCharFile((void *)"menu/bbs/b_bbs.bch", h, 2, 0x10, 0x10, 0x13f);
}

void BbsReadMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov113_02292cc0_Both()) {
        if (touchButtons()) {
            activateFocus();
        }
    }
}

void BbsReadMenu::mainAct01() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else if (moveFocusByPad((void *)takeRepeatedKeys())) {
        moveCursorToTarget();
    } else {
        u16 v = gPad[1];
        if ((v & 1) != 0) {
            pressCursor();
        } else if ((v & 2) != 0) {
            focus = 3;
            hideCursor();
            activateFocus();
        } else if ((v & 0x200) != 0) {
            focus = 5;
            if (activateFocus()) {
                hideCursor();
            }
        } else if ((v & 0x100) != 0) {
            focus = 4;
            if (activateFocus()) {
                hideCursor();
            }
        }
    }
}

void BbsReadMenu::mainAct02() {
    if (!cursor.isMoving()) {
        setMainState(returnState);
    }
}

void BbsReadMenu::mainAct03() {
    if (cursor.isAnimDone()) {
        if (activateFocus()) {
            if ((u8)(focus + 0xfe) <= 1) {
                hideCursor();
            } else {
                cursor.setPoseRelease();
            }
        } else {
            releaseCursor();
        }
    }
}

void BbsReadMenu::mainAct04() {
    if (cursor.isAnimDone()) {
        refreshCursor();
        setMainState(1);
    }
}

void BbsReadMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void BbsReadMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(1);
}

void BbsReadMenu::showPostText(void *unused) {
    void *p = BbsBoard::getPost((s32)data_021e87d8);
    s32 starts[7];
    s32 cnt;
    s32 i;
    s32 z1 = 0;
    s32 z2 = 0;
    Text_SplitLines(BbsPost_GetText(p), starts, &cnt, 0xc0, 0x28, 0x96, 6);
    for (i = 0; i < 6; i++) {
        s32 len = starts[i + 1] - starts[i];
        LabelString *o = &lineLabels[i];
        ((MsgString *)o)->clear();
        if (len != 0) {
            String_FromEncodedBytesEx(o, BbsPost_GetText(p) + starts[i], len, z1, z1);
        }
    }
    for (i = 0; i < 6; i++) {
        LabelString *o = &lineLabels[i];
        o->createBufferLabel((u32)lineCharBufs[i], 0x14, 0xe, 0xd);
        o->redrawAligned(z2, z2);
    }
    bgTasks[0].requestChars((u32)lineCharBufs, 2, 0x11, 0x11, 0x100);
}

void BbsReadMenu::showPostDate(void *unused) {
    BbsPost *p = (BbsPost *)BbsBoard::getPost((s32)data_021e87d8);
    u8 buf[8];
    buf[0] = 0x37;
    buf[1] = 0x35;
    buf[2] = p->getYear() / 10 + 0x35;
    buf[3] = p->getYear() % 10 + 0x35;
    buf[4] = 0;
    String_FromEncodedBytes(&infoLabels[0], buf, 5);
    placeLabel(0, 0x111, 4, 0, 1);
    buf[0] = p->getMonth() / 10 + 0x35;
    buf[1] = p->getMonth() % 10 + 0x35;
    buf[2] = p->getDay() / 10 + 0x35;
    buf[3] = p->getDay() % 10 + 0x35;
    String_FromEncodedBytes(&infoLabels[1], buf, 5);
    placeLabel(1, 0x116, 4, 0, 1);
}

void BbsReadMenu::showPostNumber(s32 i) {
    u8 buf[4];
    if (i + 1 >= 10) {
        buf[0] = (i + 1) / 10 + 0x35;
        buf[1] = (i + 1) % 10 + 0x35;
        buf[2] = 0;
    } else {
        buf[0] = i + 0x36;
        buf[1] = 0;
    }
    LabelString str;
    String_FromEncodedBytes(&str, buf, 3);
    String_SetSlot(0, &str);
    String_Load2dMenu(&infoLabels[2], 0x86);
    placeLabel(2, 0x11a, 5, 1, 0);
}

void BbsReadMenu::markPostRead(void *unused) {
    BbsPost *p = (BbsPost *)BbsBoard::getPost((s32)data_021e87d8);
    s32 n = PlayerData_GetCurrentIndex();
    s32 m;
    if (p->isRead(n)) {
        m = 8;
    } else {
        m = 0xa;
    }
    BgScreen_SetRectPalette(bgScreenBuf, 0x10, 0, 0x12, 3, m);
    if (p->isFreeText()) {
        m = 0xa;
    } else {
        m = 8;
    }
    BgScreen_SetRectPalette(bgScreenBuf, 6, 5, 0x19, 6, m);
    setFlags(1);
    p->setRead(n);
}

void BbsReadMenu::showPost(void *pad) {
    showPostDate(pad);
    showPostNumber((s32)pad);
    showPostText(pad);
    markPostRead(pad);
}

void BbsReadMenu::setupButtonLabels() {
    String_Load2dMenu(&infoLabels[0], 0x83);
    placeLabel(0, 0x101, 4, 1, 0);
    String_Load2dMenu(&infoLabels[1], 0x82);
    placeLabel(1, 0x105, 4, 1, 0);
    String_Load2dMenu(&infoLabels[2], 0x84);
    placeLabel(2, 0x109, 4, 1, 0);
    String_Load2dMenu(&infoLabels[3], 0x88);
    placeLabel(3, 0x10d, 4, 1, 0);
}

void BbsReadMenu::placeLabel(s32 idx, s32 a, s32 b, s32 c, s32 d) {
    LabelString *o = &infoLabels[idx];
    o->createSmallLabel(2, a, b, 0xf, 0xa, d);
    o->redrawAligned(c, 0);
}

BOOL BbsReadMenu::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void BbsReadMenu::setFlags(u32 mask) { flags = flags | mask; }

void BbsReadMenu::clearFlags(u32 mask) { flags = flags & ~mask; }

BOOL BbsReadMenu::touchButtons() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    if (y >= 0x54 && y <= 0x70) {
        if (x <= 0x18) {
            focus = 5;
            return TRUE;
        }
        if (x < 0xe8) {
            goto fail;
        }
        focus = 4;
        return TRUE;
    }
    if (y >= 0xa4 && y <= 0xb4) {
        if (x < 0x20) {
            return FALSE;
        }
        if (x < 0x50) {
            focus = 0;
            return TRUE;
        }
        if (x < 0x80) {
            focus = 1;
            return TRUE;
        }
        if (x < 0xb0) {
            focus = 2;
            return TRUE;
        }
        if (x >= 0xe0) {
            goto fail;
        }
        focus = 3;
        return TRUE;
    }
    if (y >= 0x92 && y <= 0x9e) {
        s32 t = pageDotsX + 0x44;
        if (x < t) {
            goto fail;
        }
        u32 idx = (u32)((x - t) << 21) >> 24;
        if (idx >= postCount) {
            return FALSE;
        }
        focus = idx + 6;
        return TRUE;
    }
fail:
    return FALSE;
}

void BbsReadMenu::setFocusHighlight(s32 flag) {
    u32 st = focus;
    switch (st) {
    case 0:
    case 1:
    case 2:
    case 3: {
        s32 e = flag ? 0xe : 0xd;
        s32 x = st * 6 + 4;
        BgScreen_SetRectPalette(&bgScreenBuf, x, 0x14, x + 5, 0x16, e);
        setFlags(1);
        break;
    }
    default:
        if (st == 4) {
            if (flag) {
                setFlags(2);
            } else {
                clearFlags(2);
            }
        } else {
            if (flag) {
                setFlags(4);
            } else {
                clearFlags(4);
            }
        }
        break;
    }
}

BOOL BbsReadMenu::activateFocus() {
    updatePostCount();
    u32 st = focus;
    switch (st) {
    case 2:
        Snd_PlaySe(0x29);
    case 3: {
        setFocusHighlight(1);
        transitionState = 3;
        setPhase(1);
        void *r = ProcBase_GetParent(this);
        if (focus == 3) {
            ((MenuLauncher *)r)->setNextRequest(0x43, 0);
            Snd_PlaySe(0x12);
        } else {
            ((MenuLauncher *)r)->setNextRequest(1, 1);
        }
        return TRUE;
    }
    case 4:
        if (postCount > postIndex + 1) {
            postIndex = postIndex + 1;
            setFocusHighlight(1);
            transitionState = 5;
            setPhase(1);
            return TRUE;
        }
        break;
    case 5:
        if (postIndex != 0) {
            postIndex = postIndex - 1;
            setFocusHighlight(1);
            transitionState = 5;
            setPhase(1);
            return TRUE;
        }
        break;
    case 1: {
        s32 t = postCount - 1;
        if (postIndex != t) {
            postIndex = t;
            setFocusHighlight(1);
            transitionState = 5;
            setPhase(1);
            return TRUE;
        }
        break;
    }
    case 0:
        if (postIndex != 0) {
            postIndex = 0;
            setFocusHighlight(1);
            transitionState = 5;
            setPhase(1);
            return TRUE;
        }
        break;
    }
    if (st >= 6 && st <= 0x14) {
        u8 idx = (u8)(st - 6);
        u32 cur = postIndex;
        if (idx == cur) {
            return FALSE;
        }
        if (cur < idx) {
            setFlags(0x40);
        } else {
            clearFlags(0x40);
        }
        postIndex = idx;
        transitionState = 5;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void BbsReadMenu::updatePostCount() {
    postCount = Bbs_GetPostCount();
    pageDotsX = (0xf - postCount) * 4;
}

void BbsReadMenu::showCursor() {
    s32 a = getFocusX();
    s32 b = getFocusY();
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    refreshCursor();
}

s32 BbsReadMenu::getFocusBaseX() {
    u32 st = focus;
    if (st <= 3) {
        return st * 0x30 + 0x47;
    }
    if (st == 5) {
        return 0x10;
    }
    if (st == 4) {
        return 0xf0;
    }
    if (st <= 0x14) {
        return pageDotsX + 0x48 + (st - 6) * 8;
    }
    return 0x80;
}

s32 BbsReadMenu::getFocusX() {
    s32 r = getFocusBaseX();
    if (testFlags(0x10)) {
        r -= 0x100;
    } else if (testFlags(0x20)) {
        r += 0x100;
    }
    clearFlags(0x30);
    return r;
}

s32 BbsReadMenu::getFocusY() {
    u32 st = focus;
    if (st <= 3) {
        return 0xaa;
    }
    if (st <= 5) {
        return 0x56;
    }
    if (st <= 0x14) {
        return 0x98;
    }
    return 0x60;
}

void BbsReadMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void BbsReadMenu::moveCursorToTarget() {
    if (testFlags(0x80)) {
        s32 a = getFocusX();
        s32 b = getFocusY();
        cursor.warpTo(a, b);
        clearFlags(0x80);
    } else {
        s32 a = getFocusX();
        s32 b = getFocusY();
        cursor.moveToEase(a, b, 4, 1);
        returnState = mainState;
        setMainState(2);
    }
}

void BbsReadMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(3);
}

void BbsReadMenu::releaseCursor() {
    cursor.setPoseRelease();
    setMainState(4);
}

void BbsReadMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

BOOL BbsReadMenu::moveFocusByPad(void *pad) {
    u32 st = focus;
    if (st <= 3) {
        if (MenuKeys_HasLeft(pad)) {
            if (focus != 0) {
                focus = focus - 1;
            } else {
                focus = 3;
                setFlags(0x10);
            }
        } else if (MenuKeys_HasRight(pad)) {
            if (focus < 3) {
                focus = focus + 1;
            } else {
                focus = 0;
                setFlags(0x20);
            }
        } else if (MenuKeys_HasUp(pad)) {
            s32 t = pageDotsX + 0x44;
            s32 v = cursor.getFrameScreenX() - t;
            if (v < 0) {
                v = 0;
            }
            s32 i = v >> 3;
            s32 n = postCount;
            if (i >= n) {
                i = n - 1;
            }
            focus = i + 6;
        }
    } else if (st == 5) {
        if (MenuKeys_HasDown(pad)) {
            focus = 6;
        } else if (MenuKeys_HasLeft(pad)) {
            focus = 4;
            setFlags(0x10);
        } else if (MenuKeys_HasRight(pad)) {
            focus = 4;
        }
    } else if (st == 4) {
        if (MenuKeys_HasDown(pad)) {
            focus = postCount + 5;
        } else if (MenuKeys_HasLeft(pad)) {
            focus = 5;
        } else if (MenuKeys_HasRight(pad)) {
            focus = 5;
            setFlags(0x20);
        }
    } else if (st <= 0x14) {
        if (MenuKeys_HasUp(pad)) {
            if (MenuKeys_HasRight(pad) != 0 || (cursor.getFrameScreenX() > 0x80 && MenuKeys_HasLeft(pad) == 0)) {
                focus = 4;
            } else {
                focus = 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (MenuKeys_HasRight(pad) != 0 || (cursor.getFrameScreenX() > 0x80 && MenuKeys_HasLeft(pad) == 0)) {
                focus = 2;
            } else {
                focus = 1;
            }
        } else if (MenuKeys_HasLeft(pad)) {
            if (focus > 6) {
                focus = focus - 1;
                setFlags(0x80);
                Snd_PlaySe(0xb);
            } else {
                focus = 5;
            }
        } else if (MenuKeys_HasRight(pad)) {
            if (focus + 1 < postCount + 6) {
                focus = focus + 1;
                setFlags(0x80);
                Snd_PlaySe(0xb);
            } else {
                focus = 4;
            }
        }
    }
    if (focus != st) {
        return TRUE;
    }
    return FALSE;
}
