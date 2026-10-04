#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/ConstellationRecord.h"
#include "gfx/StarTwinkle.h"
#include "game/StarSkyView.h"
#include "menu/MenuProc.h"
#include "ui/HandCursor.h"
#include "menu/MenuLauncher.h"
#include "menu/MenuCursor.h"

extern "C" {
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern s32 gCurrentHeap;
extern u8 *data_021c1b3c;

s32 Snd_PlaySe(u32 id);
s32 MenuCtrl_GetIndex();
void *Constellation_GetRecord(s32 i);
void MenuCtrl_SetResult(u32 a);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void ConstellationRecord_Clear(void *p);
void Constellation_SetCreator(void *p);
void Constellation_Store(void *p, s32 a, s32 b);
void Constellation_CalcCentre(void *p, s32 *a, s32 *b);
void StarTwinkle_Stop(void *a);
void StarTwinkle_Init(void *a, s32 b);
void StarTwinkle_Update(void *a);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02004008(s32 a);
void Snd_StopSe(s32 a, s32 b);
void PlayerActor_RequestAct10();
void BgmTracks_FadeInScene22(void *a);
void BgmTracks_FadeOutScene22(void *a);
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetWindowRect(s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetSubWin1Planes(s32 a, s32 b);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void PlayerActor_LocalRequestAct12();

BOOL MenuKeys_HasLeft(s32 k);
BOOL MenuKeys_HasRight(s32 k);
BOOL MenuKeys_HasUp(s32 k);
BOOL MenuKeys_HasDown(s32 k);
void MenuButtons_LoadTextColors(void *p);

u8 *StarSky_GetLineStars(s32 i);
u32 StarSky_GetStarY(s32 i);
u32 StarSky_GetStarX(s32 i);
s32 StarSky_GetLinesAround(u16 *out, s32 x, s32 y);
s32 StarSky_GetStarAt(s32 x, s32 y);
s32 StarSky_GetLineAt(s32 x, s32 y);
s32 StarSky_ScreenToCellInScope(void *s, s32 x, s32 y, s32 *ox, s32 *oy);
void StarSky_SetScroll(void *s, s32 x, s32 y);
void StarSky_RebuildScreen(void *s, s32 i, u32 v);
void StarSky_SetScrollTarget(void *p, s32 x, s32 y);
s32 StarSky_UpdateBounce(void *a);
void StarSky_StartBounce(void *a, s32 b);
void StarSky_ScrollInDir(void *a, s32 b, s32 c);
s32 StarSky_HitArrow(void *a, s32 b, s32 c);
void StarSky_ScrollX(void *a, s32 b);
s32 StarSky_ScrollY(void *a, s32 b, s32 c);
void StarSky_LoadSkyBg(void *a, s32 b);
void StarSky_LoadScopeBg(void *a, s32 b, s32 c);
void StarSky_LoadObjGraphics(void *a);
void StarSky_Update(void *a);
void StarSky_CancelUpload(void *a);
void StarSky_Reset(void *a);
void StarSky_DrawStarMarker(void *s, s32 a);
void StarSky_DrawScopeSprite(void *s, s32 a);
void StarSky_DrawArrows(void *s, s32 a, s32 b);

void _ZN23ConstellationEditorMenu9mainAct04Ev();
extern void *data_ov129_02296518[2];
void _ZN23ConstellationEditorMenu9mainAct02Ev();
extern void *data_ov129_02296520[2];
void _ZN23ConstellationEditorMenu9mainAct00Ev();
extern void *data_ov129_02296528[2];
void _ZN23ConstellationEditorMenu9mainAct05Ev();
extern void *data_ov129_02296530[2];
void _ZN23ConstellationEditorMenu9mainAct06Ev();
extern void *data_ov129_02296538[2];
void _ZN23ConstellationEditorMenu17updateCursorPressEv();
extern void *data_ov129_02296540[2];
void _ZN23ConstellationEditorMenu19updateCursorReleaseEv();
extern void *data_ov129_02296548[2];
void _ZN23ConstellationEditorMenu15transitionAct03Ev();
extern void *data_ov129_02296550[2];
void _ZN23ConstellationEditorMenu15transitionAct04Ev();
extern void *data_ov129_02296558[2];
void _ZN23ConstellationEditorMenu15transitionAct00Ev();
extern void *data_ov129_02296560[2];
void _ZN23ConstellationEditorMenu16updateCursorMoveEv();
extern void *data_ov129_02296568[2];
void _ZN23ConstellationEditorMenu9mainAct0AEv();
extern void *data_ov129_02296570[2];
void _ZN23ConstellationEditorMenu9mainAct0BEv();
extern void *data_ov129_02296578[2];
void _ZN23ConstellationEditorMenu15transitionAct08Ev();
extern void *data_ov129_02296580[2];
void _ZN23ConstellationEditorMenu9mainAct03Ev();
extern void *data_ov129_02296588[2];
void _ZN23ConstellationEditorMenu9mainAct0CEv();
extern void *data_ov129_02296590[2];
void _ZN23ConstellationEditorMenu9mainAct01Ev();
extern void *data_ov129_02296598[2];
void _ZN23ConstellationEditorMenu9mainAct0DEv();
extern void *data_ov129_022965a0[2];
void _ZN23ConstellationEditorMenu15transitionAct0BEv();
extern void *data_ov129_022965a8[2];
void _ZN23ConstellationEditorMenu9mainAct0EEv();
extern void *data_ov129_022965b0[2];
void _ZN23ConstellationEditorMenu15transitionAct01Ev();
extern void *data_ov129_022965b8[2];
void _ZN23ConstellationEditorMenu15transitionAct0AEv();
extern void *data_ov129_022965c0[2];
void _ZN23ConstellationEditorMenu15transitionAct09Ev();
extern void *data_ov129_022965c8[2];
void _ZN23ConstellationEditorMenu15transitionAct02Ev();
extern void *data_ov129_022965d0[2];
void _ZN23ConstellationEditorMenu15transitionAct07Ev();
extern void *data_ov129_022965d8[2];
void _ZN23ConstellationEditorMenu15transitionAct06Ev();
extern void *data_ov129_022965e0[2];
void _ZN23ConstellationEditorMenu15transitionAct05Ev();
extern void *data_ov129_022965e8[2];
extern const u8 sStarStateColours[4];
extern const u8 data_ov129_0229649c[8];
extern const u8 data_ov129_022964a4[8];
extern const u8 data_ov129_022964ac[8];
extern const u8 data_ov129_022964b4[8];
extern const s32 data_ov129_022964bc[5];
extern const s32 data_ov129_022964d0[5];
extern u8 sEditorArrowCursorX[8];
extern u8 sEditorArrowCursorY[8];
}

static inline BOOL Unk_ov129_02295000_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}






class MenuBottomButtonsBody {
public:
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 a);
    BOOL isButtonDisabled(s32 idx);
    void enableButton(s32 idx);
    void disableButton(s32 idx);
    void setLayoutYesNo09(s32 a);
};

// Menu list sub-object, 0x164 bytes
class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmQuit04();
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

// Object at +0xb8 (0x108 bytes)
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};




struct Unk_ov129_0229497c_Save {
    u8 unk_00[0x16];
    u8 unk_16[16];
    u16 lines[16];
};


class ConstellationEditorMenu;
typedef void (ConstellationEditorMenu::*Unk_ov129_022965f8_Fn)();

// Vtable 0x022965f8, size 0x30e8
class ConstellationEditorMenu : public MenuProc {
public:
    ConstellationEditorMenu()
        : errorMessage(), bottomButtons(), cursor(), twinkle(), skyView() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    s32 tapStar();
    s32 func_ov129_0229421c();
    s32 func_ov129_022942d0();
    void func_ov129_02294360();
    s32 func_ov129_02294398();
    s32 func_ov129_022943ec();
    u32 func_ov129_02294598(u32 id, u32 val);
    s32 func_ov129_022945f4(u32 id);
    BOOL func_ov129_02294664(u32 id);
    s32 func_ov129_022946b0(u32 v);
    s32 func_ov129_022946dc();
    BOOL func_ov129_0229470c(s32 x, s32 y);
    void func_ov129_022947c4(u32 id);
    void func_ov129_02294818(u32 a, u32 b);
    BOOL func_ov129_0229483c(u32 a, u32 b);
    void func_ov129_022948a4(BOOL flag);
    void updateAllStarSprites();
    void updateStarSprite(s32 i);
    void func_ov129_02294914();
    s32 func_ov129_02294948();
    void func_ov129_0229497c();
    void func_ov129_02294a50();
    void func_ov129_02294aa4();
    void clearStarStates();
    void updateTappedStarFlash();
    void flashTappedStar();
    void clearTappedStar();
    void updateHoverStar();
    void clearHoverStar();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorToPos(u32 a, u32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    BOOL func_ov129_02294edc();
    BOOL func_ov129_02294f04();
    BOOL moveCursorByPad(s32 k);
    void openMessage(u32 v);
    void rejectConfirmation();
    void acceptConfirmation();
    void startQuit();
    void startFinish();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
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
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initMembers();
    void func_ov129_02295d18();
    void func_ov129_02295d38();
    void func_ov129_02295d98();
    void transitionAct0B();
    void transitionAct0A();
    void transitionAct09();
    void transitionAct08();
    void transitionAct07();
    void transitionAct06();
    void transitionAct05();
    void transitionAct04();
    void updateSlideWindow();
    void updateLayerSlide();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 pointerX;
    /* 0x098 */ s32 pointerY;
    /* 0x09c */ s32 arrowsSlideY;
    /* 0x0a0 */ s32 buttonsSlideY;
    /* 0x0a4 */ u16 stateFlags;
    /* 0x0a6 */ u16 hoverLine;
    /* 0x0a8 */ u16 flashLine;
    /* 0x0aa */ u16 cursorLine;
    /* 0x0ac */ u8 returnState;
    /* 0x0ad */ u8 scrollDir;
    /* 0x0ae */ u8 cursorTarget;
    /* 0x0af */ u8 confirmChoice;
    /* 0x0b0 */ u8 cursorStar;
    /* 0x0b1 */ u8 editMode;
    /* 0x0b2 */ u8 firstStar;
    /* 0x0b3 */ u8 endStar;
    /* 0x0b4 */ u8 flashTimer;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ MenuErrorMessage errorMessage;
    /* 0x1c0 */ MenuBottomButtons bottomButtons;
    /* 0x324 */ MenuCursorBuf0 cursor;
    /* 0x388 */ StarTwinkle twinkle;
    /* 0x6b8 */ StarSkyView skyView;
    /* 0x2ef0 */ u8 constellationName[16];
    /* 0x2f00 */ u16 lines[16];
    /* 0x2f20 */ u8 lineStates[0x1c8];
};

struct Unk_ov129_SceneEntry {
    ConstellationEditorMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" ConstellationEditorMenu *ConstellationEditorMenu_Create() { return new ConstellationEditorMenu(); }

BOOL ConstellationEditorMenu::vfunc_00() {
    initMembers();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL ConstellationEditorMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL ConstellationEditorMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    if (testFlags(8)) {
        bottomButtons.drawAt(buttonsSlideY);
    }
    if (MenuCtrl_IsButtons()) {
        if (testFlags(0x10)) {
            StarSky_DrawScopeSprite(&skyView, 0);
        }
    }
    if (testFlags(1)) {
        StarSky_DrawArrows(&skyView, arrowsSlideY, 5);
    }
    if (endStar != 0xff) {
        if (testFlags(0x80)) {
            StarSky_DrawStarMarker(&skyView, endStar);
        }
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov129_02296538[2];
extern "C" void *data_ov129_022965b8[2];
extern "C" const u8 data_ov129_022964a4[8];
extern "C" void *data_ov129_022965c0[2];
extern "C" const u8 data_ov129_022964ac[8];
extern "C" void *data_ov129_02296550[2];
extern "C" void *data_ov129_022965e8[2];
extern "C" void *data_ov129_022965e0[2];
extern "C" void *data_ov129_022965d8[2];
extern "C" void *data_ov129_022965d0[2];
extern "C" void *data_ov129_022965a8[2];
extern "C" void *data_ov129_022965a0[2];
extern "C" const s32 data_ov129_022964bc[5];
extern "C" void *data_ov129_02296578[2];
extern "C" Unk_ov129_SceneEntry sConstellationEditorMenuProfile;
extern "C" void *data_ov129_02296568[2];
extern "C" void *data_ov129_02296560[2];
extern "C" void *data_ov129_02296558[2];
extern "C" const u8 sStarStateColours[4];
extern "C" void *data_ov129_02296548[2];
extern "C" const s32 data_ov129_022964d0[5];
extern "C" void *data_ov129_022965c8[2];
extern "C" void *data_ov129_02296570[2];
extern "C" void *data_ov129_02296528[2];
extern "C" void *data_ov129_02296598[2];
extern "C" void *data_ov129_02296580[2];
extern "C" const u8 data_ov129_0229649c[8];
extern "C" u8 sEditorArrowCursorY[8];
extern "C" const u8 data_ov129_022964b4[8];
extern "C" void *data_ov129_02296530[2];
extern "C" void *data_ov129_02296590[2];
extern "C" void *data_ov129_02296520[2];
extern "C" void *data_ov129_02296588[2];
extern "C" u8 sEditorArrowCursorX[8];
extern "C" void *data_ov129_02296540[2];
extern "C" void *data_ov129_02296518[2];
extern "C" void *data_ov129_022965b0[2];

extern "C" void *data_ov129_02296538[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct06Ev, 0};

extern "C" void *data_ov129_022965b8[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct01Ev, 0};

extern "C" const u8 data_ov129_022964a4[8] = {5, 4, 2, 2, 4, 5, 0, 0};

extern "C" void *data_ov129_022965c0[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct0AEv, 0};

extern "C" const u8 data_ov129_022964ac[8] = {1, 1, 4, 1, 4, 2, 0, 0};

extern "C" void *data_ov129_02296550[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct03Ev, 0};

extern "C" void *data_ov129_022965e8[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct05Ev, 0};

extern "C" void *data_ov129_022965e0[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct06Ev, 0};

extern "C" void *data_ov129_022965d8[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct07Ev, 0};

extern "C" void *data_ov129_022965d0[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct02Ev, 0};

BOOL ConstellationEditorMenu::execTransition() {
    static Unk_ov129_022965f8_Fn tbl[12] = {
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296560,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965b8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965d0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296550,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296558,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965e8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965e0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965d8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296580,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965c8,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965c0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965a8};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void ConstellationEditorMenu::runMainState() {
    static Unk_ov129_022965f8_Fn tbl[15] = {
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296528,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296598,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296520,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296588,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296518,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296530,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296538,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296568,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296540,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296548,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296570,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296578,
        *(Unk_ov129_022965f8_Fn *)data_ov129_02296590,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965a0,
        *(Unk_ov129_022965f8_Fn *)data_ov129_022965b0};
    (this->*tbl[mainState])();
}

BOOL ConstellationEditorMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL ConstellationEditorMenu::execPhase3() { return TRUE; }

BOOL ConstellationEditorMenu::execPhase4() { return TRUE; }

BOOL ConstellationEditorMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void ConstellationEditorMenu::transitionAct00() {
    setupBgLayers();
    setupSkyView();
    updateAllStarSprites();
    beginSubSlideIn(9, 4, 0, 0x30);
    Gfx2d_SetSubWin1Planes(0x1e, 1);
    updateSlideWindow();
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(6);
    setFlags(1);
    setFlags(8);
    updateLayerSlide();
    setTransitionState(1);
}

void ConstellationEditorMenu::transitionAct01() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        setFlags(0x10);
        func_ov129_022948a4(1);
        Gfx2d_DisableSubWindows(2);
    } else {
        updateSlideWindow();
    }
    updateLayerSlide();
}

void ConstellationEditorMenu::transitionAct02() {
    ((MenuLauncher *)ProcBase_GetParent())->setNextRequest(0x44, 1);
    beginSubSlideOut(9, 0, 0, 0x30);
    Gfx2d_SetSubWin1Planes(0x1e, 1);
    updateSlideWindow();
    updateLayerSlide();
    setTransitionState(3);
}

void ConstellationEditorMenu::transitionAct03() {
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

void ConstellationEditorMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    arrowsSlideY = getSlideOffsetY();
    buttonsSlideY = getSlideOffsetY();
}

void ConstellationEditorMenu::updateSlideWindow() {
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

void ConstellationEditorMenu::transitionAct04() {
    initSlideOut(0, 0);
    setTransitionState(5);
}

void ConstellationEditorMenu::transitionAct05() {
    if (stepSlideOut(-1)) {
        transitionAct06();
    }
    buttonsSlideY = getSlideOffsetY();
    arrowsSlideY = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct06() {
    initSlideIn(0, 0);
    bottomButtons.enableButton(6);
    if (testFlags(4)) {
        bottomButtons.setLayoutYesNo09(0x87);
    } else {
        bottomButtons.setLayoutYesNo09(0x22);
    }
    clearFlags(1);
    setTransitionState(7);
}

void ConstellationEditorMenu::transitionAct07() {
    if (stepSlideIn(0)) {
        setPhase(2);
        func_ov129_02295d18();
    }
    buttonsSlideY = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct08() {
    initSlideOut(0, 0);
    setTransitionState(9);
}

void ConstellationEditorMenu::transitionAct09() {
    if (stepSlideOut(-1)) {
        transitionAct0A();
    }
    buttonsSlideY = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct0A() {
    initSlideIn(0, 0);
    bottomButtons.setLayoutConfirmQuit04();
    if (editMode == 2) {
        bottomButtons.enableButton(6);
    } else {
        bottomButtons.disableButton(6);
    }
    setTransitionState(0xb);
    setFlags(1);
}

void ConstellationEditorMenu::transitionAct0B() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        setFlags(0x10);
        func_ov129_022948a4(1);
    }
    buttonsSlideY = getSlideOffsetY();
    arrowsSlideY = getSlideOffsetY();
}

void ConstellationEditorMenu::func_ov129_02295d98() {
    hideCursor();
    setMainState(0xb);
}

void ConstellationEditorMenu::func_ov129_02295d38() {
    restartKeyRepeat();
    confirmChoice = 1;
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    cursor.vfunc_0c();
    s32 t = bottomButtons.getTargetX(4);
    cursor.warpTo(t, bottomButtons.getTargetY(4));
    setMainState(0xc);
}

void ConstellationEditorMenu::func_ov129_02295d18() {
    if (MenuCtrl_IsTouch()) {
        func_ov129_02295d98();
    } else {
        func_ov129_02295d38();
    }
}

void ConstellationEditorMenu::initMembers() {
    stateFlags = 0;
    StarSky_Reset(&skyView);
    pointerX = 0x80;
    pointerY = 0x60;
    cursorTarget = 4;
    hoverLine = 0xffff;
    flashLine = 0xffff;
    flashTimer = 0;
    clearStarStates();
    func_ov129_02294a50();
    cursorStar = 0xff;
    cursorLine = 0xffff;
    endStar = 0xff;
    func_ov129_0229497c();
    PlayerActor_LocalRequestAct12();
    BgmTracks_FadeOutScene22(data_021c1b3c + 0x2f0);
}

void ConstellationEditorMenu::releaseResources() {
    StarTwinkle_Stop(&twinkle);
    StarSky_CancelUpload(&skyView);
    bottomButtons.freeTexts();
    PlayerActor_RequestAct10();
    BgmTracks_FadeInScene22(data_021c1b3c + 0x2f0);
    Gfx2d_LoadCharFile((void *)"menu/inventory/b_itm0.bch", gCurrentHeap, 3, 0, 0x10, 0x10);
}

void ConstellationEditorMenu::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void ConstellationEditorMenu::postInputUpdate() {
    postStateUpdate();
}

void ConstellationEditorMenu::preStateUpdate() {
    StarTwinkle_Update(&twinkle);
    bottomButtons.freeTexts();
    clearFlags(0x40);
}

void ConstellationEditorMenu::postStateUpdate() {
    StarSky_Update(&skyView);
    if (testFlags(0x40)) {
        if (testFlags(0x20) == 0) {
            setFlags(0x20);
            func_02004008(0x883);
        }
    } else if (testFlags(0x20)) {
        clearFlags(0x20);
        Snd_StopSe(0x883, 1);
    }
}

void ConstellationEditorMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 1, 0, 0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void ConstellationEditorMenu::setupSkyView() {
    StarSky_LoadSkyBg(&skyView, 3);
    StarSky_LoadScopeBg(&skyView, 6, 1);
    StarTwinkle_Init(&twinkle, 3);
    StarSky_LoadObjGraphics(&skyView);
    MenuButtons_LoadTextColors(&bottomButtons);
    bottomButtons.setLayoutConfirmQuit04();
    if (editMode == 2) {
        bottomButtons.enableButton(6);
    } else {
        bottomButtons.disableButton(6);
    }
}

void ConstellationEditorMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        clearTappedStar();
    } else if (Unk_ov129_02295000_Both()) {
        s32 a = gTouchCurX;
        s32 b = gTouchCurY;
        scrollDir = StarSky_HitArrow(&skyView, a, b);
        if (scrollDir != 4) {
            StarSky_ScrollInDir(&skyView, scrollDir, 0);
            setMainState(1);
            clearTappedStar();
        } else if (bottomButtons.isButtonDisabled(6) == 0 && bottomButtons.isTouched(6)) {
            startFinish();
            clearTappedStar();
        } else if (bottomButtons.isTouched(5)) {
            startQuit();
            clearTappedStar();
        } else {
            if (func_ov129_0229470c(a, b)) {
                switch (tapStar()) {
                case 1:
                    return;
                case 2:
                    flashTappedStar();
                    return;
                case 3:
                    return;
                }
            }
            goto fallback;
        }
    } else {
    fallback:
        updateTappedStarFlash();
    }
}

void ConstellationEditorMenu::mainAct01() {
    if (gTouchHeld == 0) {
        StarSky_StartBounce(&skyView, scrollDir);
        setMainState(2);
    } else {
        StarSky_ScrollInDir(&skyView, scrollDir, 0);
    }
}

void ConstellationEditorMenu::mainAct02() {
    if (StarSky_UpdateBounce(&skyView)) {
        if (gTouchHeld != 0) {
            scrollDir = StarSky_HitArrow(&skyView, gTouchPressX, gTouchPressY);
            if (scrollDir != 4) {
                StarSky_ScrollInDir(&skyView, scrollDir, 0);
                setMainState(1);
                return;
            }
        }
        setMainState(0);
    }
}

void ConstellationEditorMenu::mainAct03() {
    u32 j;
    u32 k;
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        k = gPad[1];
        if (k & 1) {
            pressCursor();
        } else if (k & 0x800) {
            clearFlags(2);
            setMainState(4);
            moveCursorToTarget();
            clearHoverStar();
        } else if (k & 8) {
            if (bottomButtons.isButtonDisabled(6) == 0) {
                clearFlags(2);
                cursorTarget = 4;
                clearHoverStar();
                hideCursor();
                startFinish();
            }
        } else if (k & 2) {
            clearFlags(2);
            cursorTarget = 5;
            clearHoverStar();
            hideCursor();
            startQuit();
        } else {
            s32 ox = pointerX;
            s32 oy = pointerY;
            j = *(volatile u16 *)&gPad[0];
            if (j & 0x20) {
                pointerX = pointerX - 4;
            } else if (j & 0x10) {
                pointerX = pointerX + 4;
            }
            j = *(volatile u16 *)&gPad[0];
            if (j & 0x40) {
                pointerY = pointerY - 4;
            } else if (j & 0x80) {
                pointerY = pointerY + 4;
            }
            s32 nx = pointerX;
            if (ox != nx || oy != pointerY) {
                if (nx < 0x30) {
                    pointerX = 0x30;
                    StarSky_ScrollX(&skyView, -4);
                    setFlags(0x40);
                } else if (nx > 0xd0) {
                    pointerX = 0xd0;
                    StarSky_ScrollX(&skyView, 4);
                    setFlags(0x40);
                }
                if (pointerY < 0x1c) {
                    pointerY = 0x1c;
                    if (StarSky_ScrollY(&skyView, -4, 0)) {
                        setFlags(0x40);
                    }
                } else if (pointerY > 0xac) {
                    pointerY = 0xac;
                    if (StarSky_ScrollY(&skyView, 4, 0)) {
                        setFlags(0x40);
                    }
                }
                updateHoverStar();
                cursor.warpTo(pointerX, pointerY);
            }
        }
    }
}

void ConstellationEditorMenu::mainAct04() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            pressCursor();
        } else if (k & 0x800) {
            setFlags(2);
            updateHoverStar();
            setMainState(3);
            moveCursorToTarget();
        } else if (k & 8) {
            if (bottomButtons.isButtonDisabled(6) == 0) {
                hideCursor();
                startFinish();
            }
        } else if (k & 2) {
            hideCursor();
            startQuit();
        } else {
            if (moveCursorByPad(takeRepeatedKeys())) {
                moveCursorToTarget();
            }
        }
    }
}

void ConstellationEditorMenu::mainAct05() {
    if ((gPad[0] & 1) == 0) {
        setMainState(4);
        releaseCursor();
        setMainState(6);
        StarSky_StartBounce(&skyView, scrollDir);
    } else {
        StarSky_ScrollInDir(&skyView, scrollDir, 0);
    }
}

void ConstellationEditorMenu::mainAct06() {
    if (StarSky_UpdateBounce(&skyView)) {
        refreshCursor();
        setMainState(returnState);
    }
    if (cursor.isAnimDone()) {
        refreshCursor();
    }
}

void ConstellationEditorMenu::updateCursorMove() {
    if (cursor.isMoving() == 0) {
        setMainState(returnState);
        runMainState();
    }
}

void ConstellationEditorMenu::updateCursorPress() {
    if (cursor.isAnimDone()) {
        if (testFlags(2)) {
            if (func_ov129_0229470c(pointerX, pointerY)) {
                if (tapStar() == 3) return;
            }
            updateHoverStar();
            setMainState(3);
            releaseCursor();
        } else {
            u32 v = cursorTarget;
            switch (v) {
            case 4:
                if (bottomButtons.isButtonDisabled(6) == 0) {
                    startFinish();
                } else {
                    setMainState(4);
                    releaseCursor();
                }
                break;
            case 5:
                startQuit();
                break;
            case 0:
            case 1:
            case 2:
            case 3:
                scrollDir = v;
                StarSky_ScrollInDir(&skyView, scrollDir, 0);
                setMainState(5);
                break;
            }
        }
    }
}

void ConstellationEditorMenu::updateCursorRelease() {
    if (cursor.isAnimDone()) {
        refreshCursor();
        setMainState(returnState);
    }
}

void ConstellationEditorMenu::mainAct0A() {
    if (bottomButtons.stepPress()) {
        if (cursor.getAnim()) {
            s32 a = bottomButtons.getPressOffset();
            s32 b = bottomButtons.getTargetX(-1);
            s32 c = bottomButtons.getTargetY(-1);
            cursor.warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void ConstellationEditorMenu::mainAct0B() {
    if (checkSwitchToButtons(1)) {
        func_ov129_02295d38();
    } else if (Unk_ov129_02295000_Both()) {
        if (bottomButtons.isTouched(3)) {
            acceptConfirmation();
        } else if (bottomButtons.isTouched(4)) {
            rejectConfirmation();
        }
    }
}

void ConstellationEditorMenu::mainAct0C() {
    if (checkSwitchToTouch()) {
        func_ov129_02295d98();
        return;
    }
    u32 keys = gPad[1];
    if (keys & 1) {
        ((MenuCursor *)&cursor)->setPosePress();
        setMainState(0xd);
        return;
    }
    if (keys & 2) {
        hideCursor();
        rejectConfirmation();
        return;
    }
    if (keys & 8) {
        hideCursor();
        acceptConfirmation();
        return;
    }
    u8 old = confirmChoice;
    s32 k = takeRepeatedKeys();
    if (MenuKeys_HasLeft(k)) {
        if (confirmChoice != 0) {
            confirmChoice = *(volatile u8 *)&confirmChoice - 1;
        }
    } else if (MenuKeys_HasRight(k)) {
        if (confirmChoice < 1) {
            confirmChoice = *(volatile u8 *)&confirmChoice + 1;
        }
    }
    if (old != confirmChoice) {
        if (confirmChoice != 0) {
            s32 a = bottomButtons.getTargetX(4);
            s32 b = bottomButtons.getTargetY(4);
            moveCursorToPos(a, b);
        } else {
            s32 a = bottomButtons.getTargetX(3);
            s32 b = bottomButtons.getTargetY(3);
            moveCursorToPos(a, b);
        }
    }
}

void ConstellationEditorMenu::mainAct0D() {
    if (cursor.isAnimDone()) {
        if (confirmChoice != 0) {
            rejectConfirmation();
        } else {
            acceptConfirmation();
        }
    }
}

void ConstellationEditorMenu::mainAct0E() {
    if (errorMessage.update(0)) {
        resumeInput();
        cursor.enableObjWindow();
    }
}

void ConstellationEditorMenu::startTouchInput() {
    hideCursor();
    clearHoverStar();
    setMainState(0);
}

void ConstellationEditorMenu::startButtonInput() {
    setFlags(2);
    showCursor();
    restartKeyRepeat();
    updateHoverStar();
    setMainState(3);
}

void ConstellationEditorMenu::resumeInput() {
    setFlags(0x80);
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void ConstellationEditorMenu::startFinish() {
    s32 a, b;
    clearFlags(4);
    bottomButtons.setSelected(6);
    setTransitionState(4);
    setMainState(0xa);
    clearFlags(0x10);
    func_ov129_022948a4(0);
    Constellation_CalcCentre(lines, &a, &b);
    a = a & 0xfffc;
    b = b & 0xfffc;
    StarSky_SetScrollTarget(&skyView, a, b);
    Snd_PlaySe(0x87f);
    clearFlags(0x80);
}

void ConstellationEditorMenu::startQuit() {
    setFlags(4);
    bottomButtons.setSelected(5);
    setTransitionState(4);
    setMainState(0xa);
    clearFlags(0x10);
    Snd_PlaySe(0x2a);
    clearFlags(0x80);
}
extern "C" void *data_ov129_022965a8[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct0BEv, 0};

extern "C" void *data_ov129_022965a0[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct0DEv, 0};

extern "C" const s32 data_ov129_022964bc[5] = {0, 0, 0, -4, 4};

void ConstellationEditorMenu::acceptConfirmation() {
    bottomButtons.setSelected(3);
    setTransitionState(2);
    setMainState(0xa);
    if (testFlags(4)) {
        MenuCtrl_SetResult(0);
        Snd_PlaySe(0x28);
    } else {
        MenuCtrl_SetResult(1);
        s32 n = MenuCtrl_GetIndex();
        static ConstellationRecord obj;
        ConstellationRecord_Clear(&obj);
        Constellation_SetCreator(&obj);
        s32 i;
        for (i = 0; i < 16; i++) {
            obj.lines[i] = lines[i];
        }
        for (i = 0; i < 16; i++) {
            obj.name[i] = constellationName[i];
        }
        Constellation_Store(&obj, n, 0);
        Snd_PlaySe(0x27);
    }
}

void ConstellationEditorMenu::rejectConfirmation() {
    if (testFlags(4)) {
        Snd_PlaySe(0x29);
    } else {
        Snd_PlaySe(0x2a);
    }
    bottomButtons.setSelected(4);
    setTransitionState(8);
    setMainState(0xa);
}

void ConstellationEditorMenu::openMessage(u32 v) {
    u8 buf[1];
    buf[0] = v;
    errorMessage.open(buf, 1, 0);
    setMainState(0xe);
    cursor.disableObjWindow();
}

BOOL ConstellationEditorMenu::moveCursorByPad(s32 k) {
    u8 old = cursorTarget;
    if (MenuKeys_HasLeft(k)) {
        cursorTarget = data_ov129_0229649c[cursorTarget];
    } else if (MenuKeys_HasRight(k)) {
        cursorTarget = data_ov129_022964ac[cursorTarget];
    } else if (MenuKeys_HasUp(k)) {
        cursorTarget = data_ov129_022964b4[cursorTarget];
    } else if (MenuKeys_HasDown(k)) {
        cursorTarget = data_ov129_022964a4[cursorTarget];
    }
    return old != cursorTarget ? TRUE : FALSE;
}

BOOL ConstellationEditorMenu::func_ov129_02294f04() {
    if (testFlags(2)) {
        return TRUE;
    }
    if ((u8)(cursorTarget + 0xfd) <= 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL ConstellationEditorMenu::func_ov129_02294edc() {
    if (testFlags(2)) {
        return FALSE;
    }
    if (cursorTarget == 4) {
        return TRUE;
    }
    return FALSE;
}

void ConstellationEditorMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    if (func_ov129_02294f04()) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    } else if (func_ov129_02294edc()) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(0xd);
    }
    refreshCursor();
}

s32 ConstellationEditorMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return pointerX;
    }
    switch (cursorTarget) {
    case 4:
        return bottomButtons.getTargetX(6);
    case 5:
        return bottomButtons.getTargetX(5);
    default:
        return sEditorArrowCursorX[cursorTarget];
    }
}

s32 ConstellationEditorMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return pointerY;
    }
    switch (cursorTarget) {
    case 4:
        return bottomButtons.getTargetY(6);
    case 5:
        return bottomButtons.getTargetY(5);
    default:
        return sEditorArrowCursorY[cursorTarget];
    }
}

void ConstellationEditorMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void ConstellationEditorMenu::moveCursorToTarget() {
    if (func_ov129_02294f04()) {
        ((MenuCursor *)&cursor)->switchToAnim01();
    } else if (func_ov129_02294edc()) {
        ((MenuCursor *)&cursor)->switchToAnim07();
    } else {
        ((MenuCursor *)&cursor)->switchToAnim0D();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorToPos(a, b);
}

void ConstellationEditorMenu::moveCursorToPos(u32 a, u32 b) {
    cursor.moveToEase(a, b, 3, 1);
    returnState = mainState;
    setMainState(7);
}

void ConstellationEditorMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void ConstellationEditorMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(8);
}

void ConstellationEditorMenu::releaseCursor() {
    cursor.setPoseRelease();
    returnState = mainState;
    setMainState(9);
}

void ConstellationEditorMenu::clearHoverStar() {
    if (hoverLine != 0xffff) {
        updateStarSprite(hoverLine);
        hoverLine = 0xffff;
    }
}

void ConstellationEditorMenu::updateHoverStar() {
    u32 r4;
    if (func_ov129_0229470c(pointerX, pointerY)) {
        if (cursorStar != 0xff && endStar != 0xff && cursorStar != endStar) {
            switch (editMode) {
            case 1:
            case 2: {
                u32 x = func_ov129_02294598(endStar, cursorStar);
                if (x != 0xffff && lineStates[x] == 3) {
                    cursorLine = x;
                    goto done;
                }
                if (editMode == 2) {
                    if (func_ov129_02294664(cursorStar)) {
                        cursorLine = 0xffff;
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    done:
        r4 = cursorLine;
    } else {
        r4 = 0xffff;
    }
    if (r4 != hoverLine) {
        clearHoverStar();
    }
    if (r4 != 0xffff) {
        u32 t = lineStates[r4];
        if (t == 2) {
            StarSky_RebuildScreen(&skyView, r4, 0xb);
        } else if (t == 3) {
            StarSky_RebuildScreen(&skyView, r4, 8);
        }
    }
    hoverLine = r4;
}

void ConstellationEditorMenu::clearTappedStar() {
    if (flashLine != 0xffff) {
        updateStarSprite(flashLine);
        flashLine = 0xffff;
    }
}

void ConstellationEditorMenu::flashTappedStar() {
    flashTimer = 5;
    if (cursorLine != flashLine) {
        clearTappedStar();
    }
    if (cursorLine != 0xffff) {
        if ((u8)(lineStates[cursorLine] + 0xfe) <= 1) {
            StarSky_RebuildScreen(&skyView, cursorLine, 10);
        }
    }
    flashLine = cursorLine;
}

void ConstellationEditorMenu::updateTappedStarFlash() {
    if (flashTimer != 0) {
        flashTimer = *(volatile u8 *)&flashTimer - 1;
        if (*(volatile u8 *)&flashTimer == 0) {
            clearTappedStar();
        }
    }
}

void ConstellationEditorMenu::clearStarStates() {
    s32 i, z;
    i = 0;
    z = i;
    for (; i < 0x1c6; i++) {
        lineStates[i] = z;
    }
}

void ConstellationEditorMenu::func_ov129_02294aa4() {
    s32 i;
    u8 *p = lineStates;
    for (i = 0; i < 0x1c6; p++, i++) {
        if ((u8)(*p + 0xfe) <= 1) {
            *p = 0;
        }
    }
}

void ConstellationEditorMenu::func_ov129_02294a50() {
    s32 n = MenuCtrl_GetIndex();
    s32 i = 0;
    do {
        if (i != n) {
            u16 *p = (u16 *)Constellation_GetRecord(i);
            if (p != NULL) {
                s32 j = 0;
                for (; j < 16; j++) {
                    u32 v = ((u16 *)((u8 *)p + 0x26))[j];
                    if (v != 0xffff) {
                        lineStates[v] = 1;
                    }
                }
            }
        }
        i++;
    } while (i < 16);
}

void ConstellationEditorMenu::func_ov129_0229497c() {
    Unk_ov129_0229497c_Save *t = (Unk_ov129_0229497c_Save *)Constellation_GetRecord(MenuCtrl_GetIndex());
    s32 i;
    u16 *p = lines;
    u32 first = 0xffff;
    if (t) {
        for (i = 0; i < 16; p++, i++) {
            *p = t->lines[i];
            u32 v = *p;
            if (v != 0xffff && first == 0xffff) {
                first = v;
            }
        }
        editMode = 2;
        endStar = StarSky_GetLineStars(first)[0];
        u32 x = StarSky_GetStarX(endStar) << 3;
        u32 y = StarSky_GetStarY(endStar) << 3;
        x = (x + 4) & 0xfffc;
        y = (y + 4) & 0xfffc;
        StarSky_SetScroll(&skyView, x, y);
        for (i = 0; i < 16; i++) {
            constellationName[i] = t->unk_16[i];
        }
    } else {
        for (i = 0; i < 16; p++, i++) {
            *p = first;
        }
        u32 z = 0;
        for (i = 0; i < 16; i++) {
            constellationName[i] = z;
        }
        editMode = z;
    }
    func_ov129_02294948();
}

s32 ConstellationEditorMenu::func_ov129_02294948() {
    s32 i;
    u16 *p = lines;
    for (i = 0; i < 16; p++, i++) {
        if (*p != 0xffff) {
            lineStates[*p] = 2;
        }
    }
}

void ConstellationEditorMenu::func_ov129_02294914() {
    switch (editMode) {
    case 0:
        break;
    case 1:
        func_ov129_022947c4(firstStar);
        break;
    case 2:
        func_ov129_022947c4(endStar);
        break;
    }
}

void ConstellationEditorMenu::updateStarSprite(s32 i) {
    StarSky_RebuildScreen(&skyView, i, sStarStateColours[lineStates[i]]);
}

void ConstellationEditorMenu::updateAllStarSprites() {
    s32 i;
    for (i = 0; i < 0x1c6; i++) {
        updateStarSprite(i);
    }
}

void ConstellationEditorMenu::func_ov129_022948a4(BOOL flag) {
    func_ov129_02294aa4();
    func_ov129_02294948();
    if (flag) {
        func_ov129_02294914();
    }
    updateAllStarSprites();
}

BOOL ConstellationEditorMenu::func_ov129_0229483c(u32 a, u32 b) {
    u8 *q = StarSky_GetLineStars(a);
    s32 i;
    for (i = 0; i < 2; i++) {
        u32 c = q[i];
        if (b != c) {
            u32 x = StarSky_GetStarX(c);
            u32 y = StarSky_GetStarY(c);
            u16 nb[8];
            s32 n = StarSky_GetLinesAround(nb, x, y);
            s32 j;
            for (j = 0; j < n; j++) {
                if (lineStates[nb[j]] == 1) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void ConstellationEditorMenu::func_ov129_02294818(u32 a, u32 b) {
    if (lineStates[a] == 0) {
        if (func_ov129_0229483c(a, b) == 0) {
            lineStates[a] = 3;
        }
    }
}

void ConstellationEditorMenu::func_ov129_022947c4(u32 id) {
    if (id != 0xff) {
        if (func_ov129_022946dc() != -1) {
            u32 x = StarSky_GetStarX(id);
            u32 y = StarSky_GetStarY(id);
            u16 nb[8];
            s32 n = StarSky_GetLinesAround(nb, x, y);
            s32 i;
            for (i = 0; i < n; i++) {
                func_ov129_02294818(nb[i], id);
            }
        }
    }
}

BOOL ConstellationEditorMenu::func_ov129_0229470c(s32 x, s32 y) {
    cursorStar = 0xff;
    cursorLine = 0xffff;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 5; i++) {
        s32 ox, oy;
        if (StarSky_ScreenToCellInScope(&skyView, x + data_ov129_022964bc[i], y + data_ov129_022964d0[i], &ox, &oy)) {
            if (cursorStar == 0xff) {
                s32 r = StarSky_GetStarAt(ox, oy);
                if (r != ~z1) {
                    cursorStar = r;
                }
            }
            if (cursorLine == 0xffff) {
                s32 r = StarSky_GetLineAt(ox, oy);
                if (r != ~z2) {
                    cursorLine = r;
                }
            }
        }
    }
    if (cursorStar != 0xff || cursorLine != 0xffff) {
        return TRUE;
    }
    return FALSE;
}

s32 ConstellationEditorMenu::func_ov129_022946dc() {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (lines[i] == 0xffff) {
            return i;
        }
    }
    return -1;
}

s32 ConstellationEditorMenu::func_ov129_022946b0(u32 v) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (v == lines[i]) {
            return i;
        }
    }
    return -1;
}

BOOL ConstellationEditorMenu::func_ov129_02294664(u32 id) {
    u32 x = StarSky_GetStarX(id);
    u32 y = StarSky_GetStarY(id);
    u16 nb[8];
    s32 n = StarSky_GetLinesAround(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (lineStates[nb[i]] == 2) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 ConstellationEditorMenu::func_ov129_022945f4(u32 id) {
    u32 x = StarSky_GetStarX(id);
    u32 y = StarSky_GetStarY(id);
    u16 nb[8];
    s32 n = StarSky_GetLinesAround(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (lineStates[nb[i]] == 1) {
            return 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (func_ov129_0229483c(nb[i], id) == 0) {
            return 1;
        }
    }
    return 3;
}

u32 ConstellationEditorMenu::func_ov129_02294598(u32 id, u32 val) {
    u32 x = StarSky_GetStarX(id);
    u32 y = StarSky_GetStarY(id);
    u16 nb[8];
    s32 n = StarSky_GetLinesAround(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        u8 *q = StarSky_GetLineStars(nb[i]);
        s32 j;
        for (j = 0; j < 2; j++) {
            if (val == q[j]) {
                return nb[i];
            }
        }
    }
    return 0xffff;
}

s32 ConstellationEditorMenu::func_ov129_022943ec() {
    volatile u8 *q;
    u8 *pi;
    u16 *slot;
    s32 n;
    s32 idx = func_ov129_022946b0(cursorLine);
    if (idx == -1) {
        return 0;
    }
    slot = &lines[idx];
    *slot = 0xffff;
    u32 more = 1;
    s32 cnt = 0;
    u8 st[16];
    s32 i;
    for (i = 0; i < 16; i++) {
        if (lines[i] == 0xffff) {
            st[i] = 3;
        } else {
            if (cnt > 0) {
                st[i] = 0;
            } else {
                st[i] = 1;
            }
            cnt++;
        }
    }
    if (cnt == 0) {
        bottomButtons.disableButton(6);
        editMode = 0;
        endStar = 0xff;
        Snd_PlaySe(0x882);
        return 2;
    }
    while (more != 0) {
        more = 0;
        for (i = 0; i < 16; i++) {
            pi = &st[i];
            if (*pi == 1) {
                q = StarSky_GetLineStars(lines[i]);
                s32 j;
                for (j = 0; j < 2; j++) {
                    u32 x = StarSky_GetStarX(q[j]);
                    u32 y = StarSky_GetStarY(q[j]);
                    u16 nb[8];
                    n = StarSky_GetLinesAround(nb, x, y);
                    s32 m;
                    for (m = 0; m < n; m++) {
                        s32 t = func_ov129_022946b0(nb[m]);
                        if (t != -1 && st[t] == 0) {
                            st[t] = 1;
                        }
                    }
                }
                *pi = 2;
            }
        }
        for (i = 0; i < 16; i++) {
            if (st[i] == 1) {
                more = 1;
            }
        }
    }
    for (i = 0; i < 16; i++) {
        if (st[i] == 0) {
            *slot = cursorLine;
            return 0;
        }
    }
    u8 *q2 = StarSky_GetLineStars(cursorLine);
    u32 r = 0xff;
    u32 c = endStar;
    u32 q0 = q2[0];
    if (q0 == c) {
        r = q2[1];
    } else if (q2[1] == c) {
        r = q0;
    }
    if (r != 0xff) {
        lineStates[cursorLine] = 0;
        if (func_ov129_02294664(endStar) == 0) {
            endStar = r;
        }
    }
    Snd_PlaySe(0x882);
    return 2;
}

s32 ConstellationEditorMenu::func_ov129_02294398() {
    s32 r = 0;
    if (cursorStar != 0xff) {
        r = func_ov129_022945f4(cursorStar);
        if (r != 1) {
            if (r == 3) {
                openMessage(0x16);
            }
        } else {
            editMode = 1;
            firstStar = cursorStar;
            endStar = cursorStar;
        }
    }
    return r;
}

void ConstellationEditorMenu::func_ov129_02294360() {
    Snd_PlaySe(0x881);
    u8 *q = StarSky_GetLineStars(cursorLine);
    u32 c = q[0];
    if (c == endStar) {
        endStar = q[1];
    } else {
        endStar = c;
    }
}

s32 ConstellationEditorMenu::func_ov129_022942d0() {
    u32 a = cursorStar;
    u32 b = firstStar;
    if (b != a) {
        u32 t = func_ov129_02294598(b, a);
        if (t != 0xffff && lineStates[t] == 3) {
            cursorLine = t;
        } else {
            s32 r = func_ov129_02294398();
            if (r != 0) {
                return r;
            }
        }
    }
    u32 cur = cursorLine;
    if (cur != 0xffff && lineStates[cur] == 3) {
        editMode = 2;
        lines[0] = cursorLine;
        bottomButtons.enableButton(6);
        func_ov129_02294360();
        return 2;
    }
    return 0;
}

s32 ConstellationEditorMenu::func_ov129_0229421c() {
    u32 a = cursorStar;
    if (a != 0xff) {
        u32 b = endStar;
        if (b != a) {
            if (b == 0xff) {
                endStar = a;
                return 1;
            }
            u32 t = func_ov129_02294598(b, a);
            if (t != 0xffff && lineStates[t] == 3) {
                cursorLine = t;
            } else if (func_ov129_02294664(cursorStar)) {
                endStar = cursorStar;
                return 1;
            }
        }
    }
    u32 cur = cursorLine;
    if (cur != 0xffff) {
        u32 s = lineStates[cur];
        if (s != 2) {
            if (s == 3) {
                s32 i = func_ov129_022946dc();
                lines[i] = cursorLine;
                func_ov129_02294360();
                return 2;
            }
        } else {
            return func_ov129_022943ec();
        }
    }
    return 0;
}

s32 ConstellationEditorMenu::tapStar() {
    s32 r = 0;
    switch (editMode) {
    case 0:
        r = func_ov129_02294398();
        break;
    case 1:
        r = func_ov129_022942d0();
        break;
    case 2:
        r = func_ov129_0229421c();
        break;
    }
    if (r == 1) {
        Snd_PlaySe(0x880);
    }
    if (r == 1) {
        goto upd;
    }
    if (r == 2) {
    upd:
        func_ov129_022948a4(TRUE);
    }
    return r;
}

BOOL ConstellationEditorMenu::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void ConstellationEditorMenu::setFlags(u32 mask) { stateFlags = stateFlags | mask; }

void ConstellationEditorMenu::clearFlags(u32 mask) { stateFlags = stateFlags & ~mask; }

extern "C" void *data_ov129_02296578[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct0BEv, 0};

extern "C" Unk_ov129_SceneEntry sConstellationEditorMenuProfile = {ConstellationEditorMenu_Create, 0xad, 0xb1};

extern "C" void *data_ov129_02296568[2] = {(void *)_ZN23ConstellationEditorMenu16updateCursorMoveEv, 0};

extern "C" void *data_ov129_02296560[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct00Ev, 0};

extern "C" void *data_ov129_02296558[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct04Ev, 0};

extern "C" const u8 sStarStateColours[4] = {4, 7, 6, 5};

extern "C" void *data_ov129_02296548[2] = {(void *)_ZN23ConstellationEditorMenu19updateCursorReleaseEv, 0};

extern "C" const s32 data_ov129_022964d0[5] = {0, 4, -4, 0, 0};

extern "C" void *data_ov129_022965c8[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct09Ev, 0};

extern "C" void *data_ov129_02296570[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct0AEv, 0};

extern "C" void *data_ov129_02296528[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct00Ev, 0};

extern "C" void *data_ov129_02296598[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct01Ev, 0};

extern "C" void *data_ov129_02296580[2] = {(void *)_ZN23ConstellationEditorMenu15transitionAct08Ev, 0};

extern "C" const u8 data_ov129_0229649c[8] = {0, 0, 5, 0, 2, 5, 0, 0};

extern "C" u8 sEditorArrowCursorY[8] = {0x60, 0x60, 0xb8, 0x08, 0, 0, 0, 0};

extern "C" const u8 data_ov129_022964b4[8] = {3, 3, 3, 3, 1, 0, 0, 0};

extern "C" void *data_ov129_02296530[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct05Ev, 0};

extern "C" void *data_ov129_02296590[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct0CEv, 0};

extern "C" void *data_ov129_02296520[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct02Ev, 0};

extern "C" void *data_ov129_02296588[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct03Ev, 0};

extern "C" u8 sEditorArrowCursorX[8] = {0x10, 0xf0, 0x80, 0x80, 0, 0, 0, 0};

extern "C" void *data_ov129_02296540[2] = {(void *)_ZN23ConstellationEditorMenu17updateCursorPressEv, 0};

extern "C" void *data_ov129_02296518[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct04Ev, 0};

extern "C" void *data_ov129_022965b0[2] = {(void *)_ZN23ConstellationEditorMenu9mainAct0EEv, 0};
