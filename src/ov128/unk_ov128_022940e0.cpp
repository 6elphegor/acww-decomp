#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/StarTwinkle.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern void *gCurrentHeap;
extern u8 *data_021c1b3c;
extern u16 gPad[];
extern const u32 sNameLabelAnimY[4];
extern u8 sArrowCursorY[4];
extern u8 sArrowCursorX[4];
extern void *sNameLabelFrames[12];
extern u32 data_ov128_02295458[16];
extern u32 data_ov128_02295268[6];
extern u32 data_ov128_02295280[6];
extern u32 data_ov128_02295298[8];
extern u32 data_ov128_022952b8[8];
extern u32 data_ov128_022952d8[8];
extern u32 data_ov128_022952f8[10];
extern u32 data_ov128_02295350[12];
extern u32 data_ov128_02295380[12];
extern u32 data_ov128_022953b0[12];
extern u32 data_ov128_022953e0[14];
extern u32 data_ov128_02295418[16];
extern u32 data_ov128_02295498[16];
extern u32 data_ov128_02295540[32];
extern u32 data_ov128_022955c0[32];

// ov127 plain-C helpers on the sub-object at +0x478
BOOL StarSky_UpdateBounce(void *s);
void StarSky_StartBounce(void *s, s32 d);
void StarSky_ScrollInDir(void *s, s32 d, s32 e);
s32 StarSky_HitArrow(void *s, s32 x, s32 y);
void StarSky_DrawArrows(void *s, s32 a, s32 b);
void StarSky_CancelUpload(void *p);
void StarSky_Update(void *s);
void StarSky_LoadObjGraphics(void *s);
void StarSky_LoadScopeBg(void *s, u32 v, u32 w);
void StarSky_LoadSkyBg(void *s, u32 v);
void StarSky_Reset(void *s);
u8 *StarSky_GetOverscroll(void *p);
BOOL StarSky_ScreenToCell(void *p, s32 a, u8 *b, s32 *c, s32 *d);
s32 StarSky_GetLineAt(s32 a, s32 b);
u32 StarSky_FindConstellationByLine(u32 a);
s32 StarSky_GetScrollX(void *p);
s32 StarSky_GetScrollY(void *p);
void StarSky_ScrollX(void *p, s32 a);
void StarSky_ScrollY(void *p, s32 a, s32 b);

void StarTwinkle_Stop(void *p);
void StarTwinkle_Init(void *p, s32 a);
void StarTwinkle_Update(void *p);
u8 *Constellation_GetRecord();
void Oam_DrawCell(s32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void PlayerActor_LocalRequestAct12();
void PlayerActor_RequestAct10();
void BgmTracks_FadeInScene22(void *p);
void BgmTracks_FadeOutScene22(void *p);
void Gfx2d_LoadCharFile(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetWindowRect(s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetSubWin1Planes(s32 a, s32 b);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void String_FromEncodedBytes(void *self, u8 *s, s32 n);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void StargazingMenu_SetupBgLayers();
}

static inline BOOL Unk_ov128_02294b44_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

// Menu cursor sub-object hierarchy
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
    void switchToAnim0D();
    void switchToAnim01();
    void setAnimIfChanged(s32 a);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
};

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
struct Unk_ov002_02203c5c_Rec;
class MenuTextButton {
public:
    MenuTextButton();
    virtual ~MenuTextButton();
    BOOL stepPress();
    void drawAt(s32 a, s32 b, s32 c);
    void freeText();
    void setLabelWithShadow(u8 a);
    void setup(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);

    u32 unk_04[0x4c / 4];
};

// Text buffer (0x40 bytes, vptr + text renderer)
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

    s32 getTextWidth();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();

    u32 unk_04[0x3c / 4];
};


// ov127 sub-object at +0x478, ctor func_ov127_02292aac, dtor func_ov127_02292aa8
class StarSkyView {
public:
    StarSkyView();
    ~StarSkyView();
    u32 unk_00[0x2838 / 4];
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
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
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

extern "C" {
void _ZN14StargazingMenu15transitionAct00Ev();
extern void *data_ov128_022951e8[2];
void _ZN14StargazingMenu15transitionAct01Ev();
extern void *data_ov128_02295228[2];
void _ZN14StargazingMenu15transitionAct02Ev();
extern void *data_ov128_02295260[2];
void _ZN14StargazingMenu15transitionAct03Ev();
extern void *data_ov128_022951f0[2];
void _ZN14StargazingMenu9mainAct00Ev();
extern void *data_ov128_02295238[2];
void _ZN14StargazingMenu9mainAct01Ev();
extern void *data_ov128_02295240[2];
void _ZN14StargazingMenu9mainAct02Ev();
extern void *data_ov128_02295220[2];
void _ZN14StargazingMenu9mainAct03Ev();
extern void *data_ov128_02295258[2];
void _ZN14StargazingMenu9mainAct04Ev();
extern void *data_ov128_02295230[2];
void _ZN14StargazingMenu9mainAct05Ev();
extern void *data_ov128_02295248[2];
void _ZN14StargazingMenu9mainAct06Ev();
extern void *data_ov128_02295250[2];
void _ZN14StargazingMenu16updateCursorMoveEv();
extern void *data_ov128_02295210[2];
void _ZN14StargazingMenu17updateCursorPressEv();
extern void *data_ov128_02295208[2];
void _ZN14StargazingMenu19updateCursorReleaseEv();
extern void *data_ov128_02295200[2];
void _ZN14StargazingMenu9mainAct0AEv();
extern void *data_ov128_022951f8[2];
}

class StargazingMenu;
typedef void (StargazingMenu::*Unk_ov128_022954e0_Fn)();

struct Unk_ov128_SceneEntry {
    StargazingMenu *(*create)();
    u16 a;
    u16 b;
};

// Vtable 0x022954e0, size 0x2d1c
class StargazingMenu : public MenuProc {
public:
    StargazingMenu()
        : closeButton(), cursor(), twinkle(), skyView(), nameLabel() {}

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
    void updateNameLabelAnim();
    void trackCenterConstellation();
    void hideNameLabel();
    void refreshNameLabel();
    void setupNameLabel();
    void drawNameLabel();
    void findCenterConstellation();
    void resetNameLabel();
    u32 getPadDirection();
    void updateSkyScroll();
    void drawScrollStrips(s32 y);
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorToPos(s32 x, s32 y);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void requestClose();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct0A();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void setupSkyView();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initMembers();
    void updateSlideWindow();
    void updateLayerSlide();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void runMainState();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ MenuTextButton closeButton;
    /* 0x00e4 */ MenuCursorBuf0 cursor;
    /* 0x0148 */ StarTwinkle twinkle;
    /* 0x0478 */ StarSkyView skyView;
    /* 0x2cb0 */ LabelString nameLabel;
    /* 0x2cf0 */ s32 pointerX;
    /* 0x2cf4 */ s32 pointerY;
    /* 0x2cf8 */ s32 slideY;
    /* 0x2cfc */ s32 scrollFineX;
    /* 0x2d00 */ s32 scrollFineY;
    /* 0x2d04 */ s32 centerConstellation;
    /* 0x2d08 */ s32 shownConstellation;
    /* 0x2d0c */ s32 labelConstellation;
    /* 0x2d10 */ u16 stateFlags;
    /* 0x2d12 */ u8 returnState;
    /* 0x2d13 */ u8 scrollDir;
    /* 0x2d14 */ u8 cursorTarget;
    /* 0x2d15 */ u8 nameLabelAnimStep;
    /* 0x2d16 */ u8 nameLabelState;
    /* 0x2d17 */ u8 nameLabelHoldTimer;
    /* 0x2d18 */ u8 nameLabelWidth;
};

extern "C" StargazingMenu *StargazingMenu_Create() { return new StargazingMenu(); }

BOOL StargazingMenu::vfunc_00() {
    initMembers();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL StargazingMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL StargazingMenu::onDraw() {
    MenuCtrl_IsButtons();
    drawNameLabel();
    if (testFlags(1)) {
        closeButton.drawAt(0, slideY >> 2, 1);
        StarSky_DrawArrows(&skyView, slideY, 6);
    }
    if (testFlags(1)) {
        drawScrollStrips(slideY);
    }
    return TRUE;
}

extern "C" u32 data_ov128_022955c0[32] = {0x8080, 0x511f, 0x8090, 0x511f, 0x80a0, 0x511f, 0x80b0, 0x511f, 0x80c0, 0x511f, 0x80d0, 0x511f, 0x80e0, 0x511f, 0x80f0, 0x511f, 0x8000, 0x511f, 0x8010, 0x511f, 0x8020, 0x511f, 0x8030, 0x511f, 0x8040, 0x511f, 0x8050, 0x511f, 0x8060, 0x511f, 0x8070, 0xffff511f};
extern "C" u32 data_ov128_022952b8[8] = {0x4188004c, 0x50c6, 0x198804c, 0x50c8, 0x9188404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u8 sArrowCursorX[4] = {0x10, 0xf0, 0x80, 0x80};
extern "C" u32 data_ov128_022953e0[14] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x81c8404c, 0x50ce, 0x91d0404c, 0x8106, 0x81bd404c, 0x8107, 0x819f404c, 0x8107, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_02295280[6] = {0x8188404c, 0x50c6, 0x9190404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_022953b0[12] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x41c8004c, 0x50ce, 0x81a0404c, 0x8107, 0x91c0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" u32 data_ov128_022952d8[8] = {0x8188404c, 0x50c6, 0x41a8004c, 0x50ca, 0x91a0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295250[2] = {(void *)_ZN14StargazingMenu9mainAct06Ev, 0};
extern "C" u32 data_ov128_02295498[16] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x41c8004c, 0x50ce, 0x1d8804c, 0x50d0, 0x81b1404c, 0x8107, 0x819d404c, 0x8107, 0x91c8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295260[2] = {(void *)_ZN14StargazingMenu15transitionAct02Ev, 0};
extern "C" void *data_ov128_02295210[2] = {(void *)_ZN14StargazingMenu16updateCursorMoveEv, 0};
extern "C" void *data_ov128_02295248[2] = {(void *)_ZN14StargazingMenu9mainAct05Ev, 0};
extern "C" void *data_ov128_02295228[2] = {(void *)_ZN14StargazingMenu15transitionAct01Ev, 0};
extern "C" u8 sArrowCursorY[4] = {0x60, 0x60, 0xb8, 0x08};
extern "C" void *data_ov128_02295258[2] = {(void *)_ZN14StargazingMenu9mainAct03Ev, 0};
extern "C" u32 data_ov128_02295458[16] = {0x8044404b, 0x50d3, 0x4064004b, 0x50d7, 0x8047404b, 0x8111, 0x903a404b, 0x8112, 0x805d404b, 0x8112, 0x903c404d, 0x1112, 0x805f404d, 0x1112, 0x8049404d, 0xffff1111};
extern "C" u32 data_ov128_02295540[32] = {0x7040f8, 0x5104, 0x6040f8, 0x5104, 0x5040f8, 0x5104, 0x4040f8, 0x5104, 0x3040f8, 0x5104, 0x2040f8, 0x5104, 0x1040f8, 0x5104, 0x40f8, 0x5104, 0x1f040f8, 0x5104, 0x1e040f8, 0x5104, 0x1d040f8, 0x5104, 0x1c040f8, 0x5104, 0x1b040f8, 0x5104, 0x1a040f8, 0x5104, 0x19040f8, 0x5104, 0x18040f8, 0xffff5104};
extern "C" void *sNameLabelFrames[12] = {data_ov128_02295268, data_ov128_022952b8, data_ov128_02295280, data_ov128_02295298, data_ov128_022952d8, data_ov128_02295350, data_ov128_022952f8, data_ov128_02295380, data_ov128_022953b0, data_ov128_02295498, data_ov128_022953e0, data_ov128_02295418};
extern "C" u32 data_ov128_02295298[8] = {0x8188404c, 0x50c6, 0x1a8804c, 0x50ca, 0x9198404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295200[2] = {(void *)_ZN14StargazingMenu19updateCursorReleaseEv, 0};
extern "C" u32 data_ov128_02295350[12] = {0x8188404c, 0x50c6, 0x41a8004c, 0x50ca, 0x1b8804c, 0x50cc, 0x419b004c, 0x5109, 0x91a8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" const u32 sNameLabelAnimY[4] = {0x20, 0x11, 2, 0};
extern "C" u32 data_ov128_02295380[12] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x1c8804c, 0x50ce, 0x91b8404c, 0x8106, 0x819c404c, 0x8107, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_022951f0[2] = {(void *)_ZN14StargazingMenu15transitionAct03Ev, 0};
extern "C" void *data_ov128_022951f8[2] = {(void *)_ZN14StargazingMenu9mainAct0AEv, 0};
extern "C" void *data_ov128_02295230[2] = {(void *)_ZN14StargazingMenu9mainAct04Ev, 0};
extern "C" u32 data_ov128_02295268[6] = {0x4188004c, 0x50c6, 0x5190004c, 0x8106, 0x4180004c, 0xffff8106};
extern "C" u32 data_ov128_02295418[16] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x81c8404c, 0x50ce, 0x1e8804c, 0x50d2, 0x81b9404c, 0x8107, 0x819c404c, 0x8107, 0x91d8404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" Unk_ov128_SceneEntry sStargazingMenuProfile = {StargazingMenu_Create, 0xac, 0xb0};
extern "C" u32 data_ov128_022952f8[10] = {0x8188404c, 0x50c6, 0x81a8404c, 0x50ca, 0x8198404c, 0x8107, 0x91b0404c, 0x8106, 0x8180404c, 0xffff8106};
extern "C" void *data_ov128_02295220[2] = {(void *)_ZN14StargazingMenu9mainAct02Ev, 0};
extern "C" void *data_ov128_02295238[2] = {(void *)_ZN14StargazingMenu9mainAct00Ev, 0};
extern "C" void *data_ov128_02295240[2] = {(void *)_ZN14StargazingMenu9mainAct01Ev, 0};

BOOL StargazingMenu::execTransition() {
    static Unk_ov128_022954e0_Fn tbl[4] = {
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951e8,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295228,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295260,
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951f0};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void StargazingMenu::runMainState() {
    static Unk_ov128_022954e0_Fn tbl[11] = {
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295238,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295240,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295220,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295258,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295230,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295248,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295250,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295210,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295208,
        *(Unk_ov128_022954e0_Fn *)data_ov128_02295200,
        *(Unk_ov128_022954e0_Fn *)data_ov128_022951f8};
    (this->*tbl[mainState])();
}

BOOL StargazingMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL StargazingMenu::execPhase3() { return TRUE; }

BOOL StargazingMenu::execPhase4() { return TRUE; }

BOOL StargazingMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void StargazingMenu::transitionAct00() {
    ::StargazingMenu_SetupBgLayers();
    setupSkyView();
    beginSubSlideIn(9, 4, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(6);
    setFlags(1);
    Gfx2d_SetSubWin1Planes(0x1e, 1);
    updateSlideWindow();
    updateLayerSlide();
    setTransitionState(1);
}

void StargazingMenu::transitionAct01() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        setFlags(4);
    } else {
        updateSlideWindow();
    }
    updateLayerSlide();
}

void StargazingMenu::transitionAct02() {
    ((MenuLauncher *)ProcBase_GetParent())->setNextRequest(0x44, 1);
    beginSubSlideOut(9, 0, 0, 0x30);
    Gfx2d_SetSubWin1Planes(0x1e, 1);
    updateSlideWindow();
    updateLayerSlide();
    setTransitionState(3);
}

void StargazingMenu::transitionAct03() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(6);
        Gfx2d_DisableSubWindows(2);
        setPhase(5);
    } else {
        updateSlideWindow();
        updateLayerSlide();
    }
}

void StargazingMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    slideY = getSlideOffsetY();
}

void StargazingMenu::updateSlideWindow() {
    s32 a = getSlideOffsetY() - 0x40;
    if (a < 0) {
        a = 0;
    }
    s32 b = getSlideOffsetY() - 0x30;
    if (b <= 0) {
        Gfx2d_DisableSubWindows(2);
    } else {
        Gfx2d_EnableSubWindows(2);
        Gfx2d_SetWindowRect(3, 0, a, 0xff, b);
    }
}

void StargazingMenu::initMembers() {
    stateFlags = 0;
    StarSky_Reset(&skyView);
    pointerX = 0x80;
    pointerY = 0x60;
    cursorTarget = 1;
    resetNameLabel();
    PlayerActor_LocalRequestAct12();
    BgmTracks_FadeOutScene22(data_021c1b3c + 0x2f0);
}

void StargazingMenu::releaseResources() {
    StarTwinkle_Stop(&twinkle);
    StarSky_CancelUpload(&skyView);
    closeButton.freeText();
    nameLabel.destroyLabel();
    PlayerActor_RequestAct10();
    BgmTracks_FadeInScene22(data_021c1b3c + 0x2f0);
    Gfx2d_LoadCharFile((void *)"menu/inventory/b_itm0.bch", gCurrentHeap, 3, 0, 0x10, 0x10);
}

void StargazingMenu::preInputUpdate() { preStateUpdate(); }

void StargazingMenu::postInputUpdate() {
    trackCenterConstellation();
    postStateUpdate();
}

void StargazingMenu::preStateUpdate() {
    nameLabel.destroyLabel();
    StarTwinkle_Update(&twinkle);
    closeButton.freeText();
}

void StargazingMenu::postStateUpdate() {
    StarSky_Update(&skyView);
    updateNameLabelAnim();
}

extern "C" void StargazingMenu_SetupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 1, 0, 0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void StargazingMenu::setupSkyView() {
    StarSky_LoadSkyBg(&skyView, 3);
    StarSky_LoadScopeBg(&skyView, 6, 0);
    StarTwinkle_Init(&twinkle, 3);
    StarSky_LoadObjGraphics(&skyView);
    closeButton.setup((Unk_ov002_02203c5c_Rec *)data_ov128_02295458, 6, 2);
    closeButton.setLabelWithShadow(0x69);
    updateSkyScroll();
}

void StargazingMenu::mainAct00() {
    if (checkSwitchToButtons(0)) {
        startButtonInput();
    } else if (Unk_ov128_02294b44_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY;
        scrollDir = StarSky_HitArrow(&skyView, x, y);
        if (scrollDir != 4) {
            StarSky_ScrollInDir(&skyView, scrollDir, 1);
            updateSkyScroll();
            setMainState(1);
        } else if (x >= 0xc0 && y > 0xab) {
            requestClose();
        }
    }
}

void StargazingMenu::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(2);
        StarSky_StartBounce(&skyView, scrollDir);
        updateSkyScroll();
    } else {
        StarSky_ScrollInDir(&skyView, scrollDir, 1);
        updateSkyScroll();
    }
}

void StargazingMenu::mainAct02() {
    if (StarSky_UpdateBounce(&skyView)) {
        if (gTouchHeld != 0) {
            scrollDir = StarSky_HitArrow(&skyView, gTouchPressX, gTouchPressY);
            if (scrollDir != 4) {
                StarSky_ScrollInDir(&skyView, scrollDir, 1);
                updateSkyScroll();
                setMainState(1);
                return;
            }
        }
        setMainState(0);
    }
    updateSkyScroll();
}

void StargazingMenu::mainAct03() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k1 = gPad[1];
        if (k1 & 1) {
            pressCursor();
        } else if (k1 & 0x800) {
            clearFlags(2);
            setMainState(4);
            moveCursorToTarget();
        } else {
            s32 ox = pointerX;
            s32 oy = pointerY;
            u32 k0 = gPad[0];
            if (k0 & 0x20) {
                pointerX = ox - 4;
            } else if (k0 & 0x10) {
                pointerX = ox + 4;
            }
            u32 k2 = *(volatile u16 *)&gPad[0];
            if (k2 & 0x40) {
                s32 *py = &pointerY;
                *py = *py - 4;
            } else if (k2 & 0x80) {
                s32 *py = &pointerY;
                *py = *py + 4;
            }
            s32 nx = pointerX;
            if (ox != nx || oy != pointerY) {
                if (nx < 0x30) {
                    pointerX = 0x30;
                    StarSky_ScrollX(&skyView, -4);
                    updateSkyScroll();
                } else if (nx > 0xd0) {
                    pointerX = 0xd0;
                    StarSky_ScrollX(&skyView, 4);
                    updateSkyScroll();
                }
                s32 ny = pointerY;
                if (ny < 0x20) {
                    pointerY = 0x20;
                    StarSky_ScrollY(&skyView, -4, 0);
                    updateSkyScroll();
                } else if (ny > 0xa0) {
                    pointerY = 0xa0;
                    StarSky_ScrollY(&skyView, 4, 0);
                    updateSkyScroll();
                }
                cursor.warpTo(pointerX, pointerY);
            }
        }
    }
}

void StargazingMenu::mainAct04() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k = gPad[1];
        if ((k & 2) || (k & 8)) {
            requestClose();
        } else {
            u8 *q = &scrollDir;
            *q = getPadDirection();
            if (*q != 4) {
                StarSky_ScrollInDir(&skyView, *q, 1);
                updateSkyScroll();
                setMainState(5);
            }
        }
    }
}

void StargazingMenu::mainAct05() {
    u32 k = getPadDirection();
    if (k != scrollDir) {
        setMainState(6);
        StarSky_StartBounce(&skyView, scrollDir);
        updateSkyScroll();
    } else {
        StarSky_ScrollInDir(&skyView, scrollDir, 1);
        updateSkyScroll();
    }
}

void StargazingMenu::mainAct06() {
    if (StarSky_UpdateBounce(&skyView)) {
        setMainState(4);
    }
    updateSkyScroll();
}

void StargazingMenu::updateCursorMove() {
    if (!cursor.isMoving()) {
        setMainState(returnState);
        runMainState();
    }
}

void StargazingMenu::updateCursorPress() {
    if (cursor.isAnimDone() && testFlags(2)) {
        setMainState(3);
        releaseCursor();
    }
}

void StargazingMenu::updateCursorRelease() {
    if (cursor.isAnimDone()) {
        refreshCursor();
        setMainState(returnState);
    }
}

void StargazingMenu::mainAct0A() {
    if (!closeButton.stepPress()) {
        setPhase(1);
    }
}

void StargazingMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void StargazingMenu::startButtonInput() {
    clearFlags(2);
    setMainState(4);
    showCursor();
    restartKeyRepeat();
}

void StargazingMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void StargazingMenu::requestClose() {
    setTransitionState(2);
    setMainState(0xa);
    clearFlags(4);
    hideNameLabel();
    hideCursor();
}

void StargazingMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    if (testFlags(2)) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    } else if (cursorTarget == 3) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(0xd);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 StargazingMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return pointerX;
    }
    return sArrowCursorX[cursorTarget];
}

s32 StargazingMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return pointerY;
    }
    return sArrowCursorY[cursorTarget];
}

void StargazingMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void StargazingMenu::moveCursorToTarget() {
    if (testFlags(2)) {
        ((MenuCursor *)&cursor)->switchToAnim01();
    } else if (cursorTarget == 3) {
        ((MenuCursor *)&cursor)->switchToAnim0D();
    } else {
        ((MenuCursor *)&cursor)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorToPos(a, b);
}

void StargazingMenu::moveCursorToPos(s32 x, s32 y) {
    cursor.moveToEase(x, y, 3, 1);
    returnState = mainState;
    setMainState(7);
}

void StargazingMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void StargazingMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(8);
}

void StargazingMenu::releaseCursor() {
    cursor.setPoseRelease();
    returnState = mainState;
    setMainState(9);
}

void StargazingMenu::drawScrollStrips(s32 y) {
    s32 t = y + 0x60;
    Oam_DrawCell(1, data_ov128_022955c0, 0x80, t - scrollFineY, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = t + (s32)StarSky_GetOverscroll(&skyView);
    Oam_DrawCell(1, data_ov128_02295540, 0x80 - scrollFineX, x, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void StargazingMenu::updateSkyScroll() {
    s32 a = StarSky_GetScrollX(&skyView);
    s32 b = StarSky_GetScrollY(&skyView);
    scrollFineX = a & 0xf;
    scrollFineY = b & 0xf;
    findCenterConstellation();
}

u32 StargazingMenu::getPadDirection() {
    u32 r = 4;
    u32 k = gPad[0];
    if (k & 0x20) {
        return 0;
    }
    if (k & 0x10) {
        return 1;
    }
    if (k & 0x40) {
        return 3;
    }
    if (k & 0x80) {
        r = 2;
    }
    return r;
}

void StargazingMenu::resetNameLabel() {
    centerConstellation = -1;
    shownConstellation = -1;
    labelConstellation = -1;
    nameLabelState = 0;
    nameLabelAnimStep = 0;
    nameLabelWidth = 2;
}

void StargazingMenu::findCenterConstellation() {
    s32 a, b;
    u8 *p = StarSky_GetOverscroll(&skyView) + 0x60;
    if (StarSky_ScreenToCell(&skyView, 0x80, p, &a, &b)) {
        s32 r = StarSky_GetLineAt(a, b);
        if (r != -1) {
            centerConstellation = StarSky_FindConstellationByLine((u16)r);
        }
    }
}

void StargazingMenu::drawNameLabel() {
    if (nameLabelState != 0) {
        Oam_DrawCell(1, sNameLabelFrames[nameLabelWidth - 2], 0x80, sNameLabelAnimY[nameLabelAnimStep] + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void StargazingMenu::setupNameLabel() {
    s32 t = shownConstellation;
    if (t == -1) {
        nameLabelState = 0;
    } else {
        nameLabelState = 1;
        s32 u = shownConstellation;
        if (u != labelConstellation) {
            u8 *s = ((u8 *(*)(s32))Constellation_GetRecord)(u);
            String_FromEncodedBytes(&nameLabel, s + 0x16, 0x10);
            nameLabelWidth = (nameLabel.getTextWidth() + 7) >> 3;
            if (nameLabelWidth < 2) {
                nameLabelWidth = 2;
            }
            nameLabel.createLabel(8, 0xc6, nameLabelWidth, 0xf, 0, 0);
            nameLabel.redrawAligned(1, 0);
            labelConstellation = shownConstellation;
        }
    }
}

void StargazingMenu::refreshNameLabel() {
    s32 t = shownConstellation;
    if (t != -1 && t == labelConstellation) {
        setupNameLabel();
    } else {
        nameLabelState = 3;
    }
}

void StargazingMenu::hideNameLabel() {
    shownConstellation = -1;
    nameLabelState = 3;
}

void StargazingMenu::trackCenterConstellation() {
    s32 t = centerConstellation;
    if (t != -1) {
        if (shownConstellation != t) {
            shownConstellation = t;
            refreshNameLabel();
        }
    }
}

void StargazingMenu::updateNameLabelAnim() {
    switch (nameLabelState) {
    case 1:
        if (nameLabelAnimStep < 3) {
            nameLabelAnimStep = nameLabelAnimStep + 1;
        } else {
            nameLabelState = 2;
            nameLabelHoldTimer = 0x14;
        }
        break;
    case 2:
        if (centerConstellation == -1) {
            if (nameLabelHoldTimer != 0) {
                nameLabelHoldTimer = nameLabelHoldTimer - 1;
            } else {
                hideNameLabel();
            }
        } else {
            nameLabelHoldTimer = 0x14;
        }
        break;
    case 3:
        if (nameLabelAnimStep != 0) {
            nameLabelAnimStep = nameLabelAnimStep - 1;
        } else {
            setupNameLabel();
        }
        break;
    }
}

BOOL StargazingMenu::testFlags(u32 m) {
    if (stateFlags & m) {
        return TRUE;
    }
    return FALSE;
}

void StargazingMenu::setFlags(u32 m) { stateFlags = stateFlags | m; }

void StargazingMenu::clearFlags(u32 m) { stateFlags = stateFlags & ~m; }

extern "C" void *data_ov128_022951e8[2] = {(void *)_ZN14StargazingMenu15transitionAct00Ev, 0};
extern "C" void *data_ov128_02295208[2] = {(void *)_ZN14StargazingMenu17updateCursorPressEv, 0};
