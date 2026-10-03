#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

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
void func_020b0a30(void *p);
void Constellation_SetCreator(void *p);
void Constellation_Store(void *p, s32 a, s32 b);
void Constellation_CalcCentre(void *p, s32 *a, s32 *b);
void func_020b0780(void *a);
void func_020b0788(void *a, s32 b);
void func_020b080c(void *a);
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
    void disableObjWindow();
    void enableObjWindow();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    s32 getScreenX();
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

// sub-object at +0x388 (ctor func_020b08b8, dtor func_020b08b4)
class Unk_020b08b4 {
public:
    Unk_020b08b4();
    ~Unk_020b08b4();
    u32 unk_00[0x330 / 4];
};

// sub-object at +0x6b8 (ov127 state, ctor func_ov127_02292aac, dtor func_ov127_02292aa8), 0x2838 bytes
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
    void initSlideOut(s32 a, s32 b);
    void initSlideIn(s32 a, s32 b);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    s32 takeRepeatedKeys();
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

struct Unk_ov129_0229497c_Save {
    u8 unk_00[0x16];
    u8 unk_16[16];
    u16 unk_26[16];
};

// static object type at data_ov129_02296698 (ctor func_020b0a70, dtor func_020b0a60)
class Unk_020b0a60 {
public:
    Unk_020b0a60();
    ~Unk_020b0a60();
    u8 unk_00[0x16];
    u8 unk_16[0x10];
    u16 unk_26[0x10];
};

class ConstellationEditorMenu;
typedef void (ConstellationEditorMenu::*Unk_ov129_022965f8_Fn)();

// Vtable 0x022965f8, size 0x30e8
class ConstellationEditorMenu : public MenuProc {
public:
    ConstellationEditorMenu()
        : unk_b8(), unk_1c0(), unk_324(), unk_388(), unk_6b8() {}

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
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u16 unk_a6;
    /* 0x0a8 */ u16 unk_a8;
    /* 0x0aa */ u16 unk_aa;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ MenuErrorMessage unk_b8;
    /* 0x1c0 */ MenuBottomButtons unk_1c0;
    /* 0x324 */ MenuCursorBuf0 unk_324;
    /* 0x388 */ Unk_020b08b4 unk_388;
    /* 0x6b8 */ StarSkyView unk_6b8;
    /* 0x2ef0 */ u8 unk_2ef0[16];
    /* 0x2f00 */ u16 unk_2f00[16];
    /* 0x2f20 */ u8 unk_2f20[0x1c8];
};

struct Unk_ov129_SceneEntry {
    ConstellationEditorMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" ConstellationEditorMenu *ConstellationEditorMenu_Create() { return new ConstellationEditorMenu(); }

BOOL ConstellationEditorMenu::vfunc_00() {
    initMembers();
    unk_8c = 0;
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
        unk_324.drawWrapped();
    }
    if (testFlags(8)) {
        unk_1c0.drawAt(unk_a0);
    }
    if (MenuCtrl_IsButtons()) {
        if (testFlags(0x10)) {
            StarSky_DrawScopeSprite(&unk_6b8, 0);
        }
    }
    if (testFlags(1)) {
        StarSky_DrawArrows(&unk_6b8, unk_9c, 5);
    }
    if (unk_b3 != 0xff) {
        if (testFlags(0x80)) {
            StarSky_DrawStarMarker(&unk_6b8, unk_b3);
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
    (this->*tbl[unk_8c])();
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
    (this->*tbl[unk_8d])();
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
    unk_9c = getSlideOffsetY();
    unk_a0 = getSlideOffsetY();
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
    unk_a0 = getSlideOffsetY();
    unk_9c = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct06() {
    initSlideIn(0, 0);
    unk_1c0.enableButton(6);
    if (testFlags(4)) {
        unk_1c0.setLayoutYesNo09(0x87);
    } else {
        unk_1c0.setLayoutYesNo09(0x22);
    }
    clearFlags(1);
    setTransitionState(7);
}

void ConstellationEditorMenu::transitionAct07() {
    if (stepSlideIn(0)) {
        setPhase(2);
        func_ov129_02295d18();
    }
    unk_a0 = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct08() {
    initSlideOut(0, 0);
    setTransitionState(9);
}

void ConstellationEditorMenu::transitionAct09() {
    if (stepSlideOut(-1)) {
        transitionAct0A();
    }
    unk_a0 = getSlideOffsetY();
}

void ConstellationEditorMenu::transitionAct0A() {
    initSlideIn(0, 0);
    unk_1c0.setLayoutConfirmQuit04();
    if (unk_b1 == 2) {
        unk_1c0.enableButton(6);
    } else {
        unk_1c0.disableButton(6);
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
    unk_a0 = getSlideOffsetY();
    unk_9c = getSlideOffsetY();
}

void ConstellationEditorMenu::func_ov129_02295d98() {
    hideCursor();
    setMainState(0xb);
}

void ConstellationEditorMenu::func_ov129_02295d38() {
    restartKeyRepeat();
    unk_af = 1;
    ((MenuCursor *)&unk_324)->setAnimIfChanged(1);
    unk_324.vfunc_0c();
    s32 t = unk_1c0.getTargetX(4);
    unk_324.warpTo(t, unk_1c0.getTargetY(4));
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
    unk_a4 = 0;
    StarSky_Reset(&unk_6b8);
    unk_94 = 0x80;
    unk_98 = 0x60;
    unk_ae = 4;
    unk_a6 = 0xffff;
    unk_a8 = 0xffff;
    unk_b4 = 0;
    clearStarStates();
    func_ov129_02294a50();
    unk_b0 = 0xff;
    unk_aa = 0xffff;
    unk_b3 = 0xff;
    func_ov129_0229497c();
    PlayerActor_LocalRequestAct12();
    BgmTracks_FadeOutScene22(data_021c1b3c + 0x2f0);
}

void ConstellationEditorMenu::releaseResources() {
    func_020b0780(&unk_388);
    StarSky_CancelUpload(&unk_6b8);
    unk_1c0.freeTexts();
    PlayerActor_RequestAct10();
    BgmTracks_FadeInScene22(data_021c1b3c + 0x2f0);
    Gfx2d_LoadCharFile((void *)"menu/inventory/b_itm0.bch", gCurrentHeap, 3, 0, 0x10, 0x10);
}

void ConstellationEditorMenu::preInputUpdate() {
    preStateUpdate();
    unk_324.vfunc_0c();
}

void ConstellationEditorMenu::postInputUpdate() {
    postStateUpdate();
}

void ConstellationEditorMenu::preStateUpdate() {
    func_020b080c(&unk_388);
    unk_1c0.freeTexts();
    clearFlags(0x40);
}

void ConstellationEditorMenu::postStateUpdate() {
    StarSky_Update(&unk_6b8);
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
    StarSky_LoadSkyBg(&unk_6b8, 3);
    StarSky_LoadScopeBg(&unk_6b8, 6, 1);
    func_020b0788(&unk_388, 3);
    StarSky_LoadObjGraphics(&unk_6b8);
    MenuButtons_LoadTextColors(&unk_1c0);
    unk_1c0.setLayoutConfirmQuit04();
    if (unk_b1 == 2) {
        unk_1c0.enableButton(6);
    } else {
        unk_1c0.disableButton(6);
    }
}

void ConstellationEditorMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        clearTappedStar();
    } else if (Unk_ov129_02295000_Both()) {
        s32 a = gTouchCurX;
        s32 b = gTouchCurY;
        unk_ad = StarSky_HitArrow(&unk_6b8, a, b);
        if (unk_ad != 4) {
            StarSky_ScrollInDir(&unk_6b8, unk_ad, 0);
            setMainState(1);
            clearTappedStar();
        } else if (unk_1c0.isButtonDisabled(6) == 0 && unk_1c0.isTouched(6)) {
            startFinish();
            clearTappedStar();
        } else if (unk_1c0.isTouched(5)) {
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
        StarSky_StartBounce(&unk_6b8, unk_ad);
        setMainState(2);
    } else {
        StarSky_ScrollInDir(&unk_6b8, unk_ad, 0);
    }
}

void ConstellationEditorMenu::mainAct02() {
    if (StarSky_UpdateBounce(&unk_6b8)) {
        if (gTouchHeld != 0) {
            unk_ad = StarSky_HitArrow(&unk_6b8, gTouchPressX, gTouchPressY);
            if (unk_ad != 4) {
                StarSky_ScrollInDir(&unk_6b8, unk_ad, 0);
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
            if (unk_1c0.isButtonDisabled(6) == 0) {
                clearFlags(2);
                unk_ae = 4;
                clearHoverStar();
                hideCursor();
                startFinish();
            }
        } else if (k & 2) {
            clearFlags(2);
            unk_ae = 5;
            clearHoverStar();
            hideCursor();
            startQuit();
        } else {
            s32 ox = unk_94;
            s32 oy = unk_98;
            j = *(volatile u16 *)&gPad[0];
            if (j & 0x20) {
                unk_94 = unk_94 - 4;
            } else if (j & 0x10) {
                unk_94 = unk_94 + 4;
            }
            j = *(volatile u16 *)&gPad[0];
            if (j & 0x40) {
                unk_98 = unk_98 - 4;
            } else if (j & 0x80) {
                unk_98 = unk_98 + 4;
            }
            s32 nx = unk_94;
            if (ox != nx || oy != unk_98) {
                if (nx < 0x30) {
                    unk_94 = 0x30;
                    StarSky_ScrollX(&unk_6b8, -4);
                    setFlags(0x40);
                } else if (nx > 0xd0) {
                    unk_94 = 0xd0;
                    StarSky_ScrollX(&unk_6b8, 4);
                    setFlags(0x40);
                }
                if (unk_98 < 0x1c) {
                    unk_98 = 0x1c;
                    if (StarSky_ScrollY(&unk_6b8, -4, 0)) {
                        setFlags(0x40);
                    }
                } else if (unk_98 > 0xac) {
                    unk_98 = 0xac;
                    if (StarSky_ScrollY(&unk_6b8, 4, 0)) {
                        setFlags(0x40);
                    }
                }
                updateHoverStar();
                unk_324.warpTo(unk_94, unk_98);
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
            if (unk_1c0.isButtonDisabled(6) == 0) {
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
        StarSky_StartBounce(&unk_6b8, unk_ad);
    } else {
        StarSky_ScrollInDir(&unk_6b8, unk_ad, 0);
    }
}

void ConstellationEditorMenu::mainAct06() {
    if (StarSky_UpdateBounce(&unk_6b8)) {
        refreshCursor();
        setMainState(unk_ac);
    }
    if (unk_324.isAnimDone()) {
        refreshCursor();
    }
}

void ConstellationEditorMenu::updateCursorMove() {
    if (unk_324.isMoving() == 0) {
        setMainState(unk_ac);
        runMainState();
    }
}

void ConstellationEditorMenu::updateCursorPress() {
    if (unk_324.isAnimDone()) {
        if (testFlags(2)) {
            if (func_ov129_0229470c(unk_94, unk_98)) {
                if (tapStar() == 3) return;
            }
            updateHoverStar();
            setMainState(3);
            releaseCursor();
        } else {
            u32 v = unk_ae;
            switch (v) {
            case 4:
                if (unk_1c0.isButtonDisabled(6) == 0) {
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
                unk_ad = v;
                StarSky_ScrollInDir(&unk_6b8, unk_ad, 0);
                setMainState(5);
                break;
            }
        }
    }
}

void ConstellationEditorMenu::updateCursorRelease() {
    if (unk_324.isAnimDone()) {
        refreshCursor();
        setMainState(unk_ac);
    }
}

void ConstellationEditorMenu::mainAct0A() {
    if (unk_1c0.stepPress()) {
        if (unk_324.getAnim()) {
            s32 a = unk_1c0.getPressOffset();
            s32 b = unk_1c0.getTargetX(-1);
            s32 c = unk_1c0.getTargetY(-1);
            unk_324.warpTo(a + b, a + c);
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
        if (unk_1c0.isTouched(3)) {
            acceptConfirmation();
        } else if (unk_1c0.isTouched(4)) {
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
        ((MenuCursor *)&unk_324)->setPosePress();
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
    u8 old = unk_af;
    s32 k = takeRepeatedKeys();
    if (MenuKeys_HasLeft(k)) {
        if (unk_af != 0) {
            unk_af = *(volatile u8 *)&unk_af - 1;
        }
    } else if (MenuKeys_HasRight(k)) {
        if (unk_af < 1) {
            unk_af = *(volatile u8 *)&unk_af + 1;
        }
    }
    if (old != unk_af) {
        if (unk_af != 0) {
            s32 a = unk_1c0.getTargetX(4);
            s32 b = unk_1c0.getTargetY(4);
            moveCursorToPos(a, b);
        } else {
            s32 a = unk_1c0.getTargetX(3);
            s32 b = unk_1c0.getTargetY(3);
            moveCursorToPos(a, b);
        }
    }
}

void ConstellationEditorMenu::mainAct0D() {
    if (unk_324.isAnimDone()) {
        if (unk_af != 0) {
            rejectConfirmation();
        } else {
            acceptConfirmation();
        }
    }
}

void ConstellationEditorMenu::mainAct0E() {
    if (unk_b8.update(0)) {
        resumeInput();
        unk_324.enableObjWindow();
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
    unk_1c0.setSelected(6);
    setTransitionState(4);
    setMainState(0xa);
    clearFlags(0x10);
    func_ov129_022948a4(0);
    Constellation_CalcCentre(unk_2f00, &a, &b);
    a = a & 0xfffc;
    b = b & 0xfffc;
    StarSky_SetScrollTarget(&unk_6b8, a, b);
    Snd_PlaySe(0x87f);
    clearFlags(0x80);
}

void ConstellationEditorMenu::startQuit() {
    setFlags(4);
    unk_1c0.setSelected(5);
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
    unk_1c0.setSelected(3);
    setTransitionState(2);
    setMainState(0xa);
    if (testFlags(4)) {
        MenuCtrl_SetResult(0);
        Snd_PlaySe(0x28);
    } else {
        MenuCtrl_SetResult(1);
        s32 n = MenuCtrl_GetIndex();
        static Unk_020b0a60 obj;
        func_020b0a30(&obj);
        Constellation_SetCreator(&obj);
        s32 i;
        for (i = 0; i < 16; i++) {
            obj.unk_26[i] = unk_2f00[i];
        }
        for (i = 0; i < 16; i++) {
            obj.unk_16[i] = unk_2ef0[i];
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
    unk_1c0.setSelected(4);
    setTransitionState(8);
    setMainState(0xa);
}

void ConstellationEditorMenu::openMessage(u32 v) {
    u8 buf[1];
    buf[0] = v;
    unk_b8.open(buf, 1, 0);
    setMainState(0xe);
    unk_324.disableObjWindow();
}

BOOL ConstellationEditorMenu::moveCursorByPad(s32 k) {
    u8 old = unk_ae;
    if (MenuKeys_HasLeft(k)) {
        unk_ae = data_ov129_0229649c[unk_ae];
    } else if (MenuKeys_HasRight(k)) {
        unk_ae = data_ov129_022964ac[unk_ae];
    } else if (MenuKeys_HasUp(k)) {
        unk_ae = data_ov129_022964b4[unk_ae];
    } else if (MenuKeys_HasDown(k)) {
        unk_ae = data_ov129_022964a4[unk_ae];
    }
    return old != unk_ae ? TRUE : FALSE;
}

BOOL ConstellationEditorMenu::func_ov129_02294f04() {
    if (testFlags(2)) {
        return TRUE;
    }
    if ((u8)(unk_ae + 0xfd) <= 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL ConstellationEditorMenu::func_ov129_02294edc() {
    if (testFlags(2)) {
        return FALSE;
    }
    if (unk_ae == 4) {
        return TRUE;
    }
    return FALSE;
}

void ConstellationEditorMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_324.warpTo(a, b);
    if (func_ov129_02294f04()) {
        ((MenuCursor *)&unk_324)->setAnimIfChanged(1);
    } else if (func_ov129_02294edc()) {
        ((MenuCursor *)&unk_324)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_324)->setAnimIfChanged(0xd);
    }
    refreshCursor();
}

s32 ConstellationEditorMenu::getCursorTargetX() {
    if (testFlags(2)) {
        return unk_94;
    }
    switch (unk_ae) {
    case 4:
        return unk_1c0.getTargetX(6);
    case 5:
        return unk_1c0.getTargetX(5);
    default:
        return sEditorArrowCursorX[unk_ae];
    }
}

s32 ConstellationEditorMenu::getCursorTargetY() {
    if (testFlags(2)) {
        return unk_98;
    }
    switch (unk_ae) {
    case 4:
        return unk_1c0.getTargetY(6);
    case 5:
        return unk_1c0.getTargetY(5);
    default:
        return sEditorArrowCursorY[unk_ae];
    }
}

void ConstellationEditorMenu::hideCursor() {
    ((MenuCursor *)&unk_324)->setAnimIfChanged(0);
    unk_324.vfunc_0c();
}

void ConstellationEditorMenu::moveCursorToTarget() {
    if (func_ov129_02294f04()) {
        ((MenuCursor *)&unk_324)->switchToAnim01();
    } else if (func_ov129_02294edc()) {
        ((MenuCursor *)&unk_324)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_324)->switchToAnim0D();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorToPos(a, b);
}

void ConstellationEditorMenu::moveCursorToPos(u32 a, u32 b) {
    unk_324.moveToEase(a, b, 3, 1);
    unk_ac = unk_8d;
    setMainState(7);
}

void ConstellationEditorMenu::refreshCursor() {
    unk_324.setPoseIdle();
    unk_324.vfunc_0c();
}

void ConstellationEditorMenu::pressCursor() {
    ((MenuCursor *)&unk_324)->setPosePress();
    setMainState(8);
}

void ConstellationEditorMenu::releaseCursor() {
    unk_324.setPoseRelease();
    unk_ac = unk_8d;
    setMainState(9);
}

void ConstellationEditorMenu::clearHoverStar() {
    if (unk_a6 != 0xffff) {
        updateStarSprite(unk_a6);
        unk_a6 = 0xffff;
    }
}

void ConstellationEditorMenu::updateHoverStar() {
    u32 r4;
    if (func_ov129_0229470c(unk_94, unk_98)) {
        if (unk_b0 != 0xff && unk_b3 != 0xff && unk_b0 != unk_b3) {
            switch (unk_b1) {
            case 1:
            case 2: {
                u32 x = func_ov129_02294598(unk_b3, unk_b0);
                if (x != 0xffff && unk_2f20[x] == 3) {
                    unk_aa = x;
                    goto done;
                }
                if (unk_b1 == 2) {
                    if (func_ov129_02294664(unk_b0)) {
                        unk_aa = 0xffff;
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    done:
        r4 = unk_aa;
    } else {
        r4 = 0xffff;
    }
    if (r4 != unk_a6) {
        clearHoverStar();
    }
    if (r4 != 0xffff) {
        u32 t = unk_2f20[r4];
        if (t == 2) {
            StarSky_RebuildScreen(&unk_6b8, r4, 0xb);
        } else if (t == 3) {
            StarSky_RebuildScreen(&unk_6b8, r4, 8);
        }
    }
    unk_a6 = r4;
}

void ConstellationEditorMenu::clearTappedStar() {
    if (unk_a8 != 0xffff) {
        updateStarSprite(unk_a8);
        unk_a8 = 0xffff;
    }
}

void ConstellationEditorMenu::flashTappedStar() {
    unk_b4 = 5;
    if (unk_aa != unk_a8) {
        clearTappedStar();
    }
    if (unk_aa != 0xffff) {
        if ((u8)(unk_2f20[unk_aa] + 0xfe) <= 1) {
            StarSky_RebuildScreen(&unk_6b8, unk_aa, 10);
        }
    }
    unk_a8 = unk_aa;
}

void ConstellationEditorMenu::updateTappedStarFlash() {
    if (unk_b4 != 0) {
        unk_b4 = *(volatile u8 *)&unk_b4 - 1;
        if (*(volatile u8 *)&unk_b4 == 0) {
            clearTappedStar();
        }
    }
}

void ConstellationEditorMenu::clearStarStates() {
    s32 i, z;
    i = 0;
    z = i;
    for (; i < 0x1c6; i++) {
        unk_2f20[i] = z;
    }
}

void ConstellationEditorMenu::func_ov129_02294aa4() {
    s32 i;
    u8 *p = unk_2f20;
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
                        unk_2f20[v] = 1;
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
    u16 *p = unk_2f00;
    u32 first = 0xffff;
    if (t) {
        for (i = 0; i < 16; p++, i++) {
            *p = t->unk_26[i];
            u32 v = *p;
            if (v != 0xffff && first == 0xffff) {
                first = v;
            }
        }
        unk_b1 = 2;
        unk_b3 = StarSky_GetLineStars(first)[0];
        u32 x = StarSky_GetStarX(unk_b3) << 3;
        u32 y = StarSky_GetStarY(unk_b3) << 3;
        x = (x + 4) & 0xfffc;
        y = (y + 4) & 0xfffc;
        StarSky_SetScroll(&unk_6b8, x, y);
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = t->unk_16[i];
        }
    } else {
        for (i = 0; i < 16; p++, i++) {
            *p = first;
        }
        u32 z = 0;
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = z;
        }
        unk_b1 = z;
    }
    func_ov129_02294948();
}

s32 ConstellationEditorMenu::func_ov129_02294948() {
    s32 i;
    u16 *p = unk_2f00;
    for (i = 0; i < 16; p++, i++) {
        if (*p != 0xffff) {
            unk_2f20[*p] = 2;
        }
    }
}

void ConstellationEditorMenu::func_ov129_02294914() {
    switch (unk_b1) {
    case 0:
        break;
    case 1:
        func_ov129_022947c4(unk_b2);
        break;
    case 2:
        func_ov129_022947c4(unk_b3);
        break;
    }
}

void ConstellationEditorMenu::updateStarSprite(s32 i) {
    StarSky_RebuildScreen(&unk_6b8, i, sStarStateColours[unk_2f20[i]]);
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
                if (unk_2f20[nb[j]] == 1) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void ConstellationEditorMenu::func_ov129_02294818(u32 a, u32 b) {
    if (unk_2f20[a] == 0) {
        if (func_ov129_0229483c(a, b) == 0) {
            unk_2f20[a] = 3;
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
    unk_b0 = 0xff;
    unk_aa = 0xffff;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 5; i++) {
        s32 ox, oy;
        if (StarSky_ScreenToCellInScope(&unk_6b8, x + data_ov129_022964bc[i], y + data_ov129_022964d0[i], &ox, &oy)) {
            if (unk_b0 == 0xff) {
                s32 r = StarSky_GetStarAt(ox, oy);
                if (r != ~z1) {
                    unk_b0 = r;
                }
            }
            if (unk_aa == 0xffff) {
                s32 r = StarSky_GetLineAt(ox, oy);
                if (r != ~z2) {
                    unk_aa = r;
                }
            }
        }
    }
    if (unk_b0 != 0xff || unk_aa != 0xffff) {
        return TRUE;
    }
    return FALSE;
}

s32 ConstellationEditorMenu::func_ov129_022946dc() {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
            return i;
        }
    }
    return -1;
}

s32 ConstellationEditorMenu::func_ov129_022946b0(u32 v) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (v == unk_2f00[i]) {
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
        if (unk_2f20[nb[i]] == 2) {
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
        if (unk_2f20[nb[i]] == 1) {
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
    s32 idx = func_ov129_022946b0(unk_aa);
    if (idx == -1) {
        return 0;
    }
    slot = &unk_2f00[idx];
    *slot = 0xffff;
    u32 more = 1;
    s32 cnt = 0;
    u8 st[16];
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
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
        unk_1c0.disableButton(6);
        unk_b1 = 0;
        unk_b3 = 0xff;
        Snd_PlaySe(0x882);
        return 2;
    }
    while (more != 0) {
        more = 0;
        for (i = 0; i < 16; i++) {
            pi = &st[i];
            if (*pi == 1) {
                q = StarSky_GetLineStars(unk_2f00[i]);
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
            *slot = unk_aa;
            return 0;
        }
    }
    u8 *q2 = StarSky_GetLineStars(unk_aa);
    u32 r = 0xff;
    u32 c = unk_b3;
    u32 q0 = q2[0];
    if (q0 == c) {
        r = q2[1];
    } else if (q2[1] == c) {
        r = q0;
    }
    if (r != 0xff) {
        unk_2f20[unk_aa] = 0;
        if (func_ov129_02294664(unk_b3) == 0) {
            unk_b3 = r;
        }
    }
    Snd_PlaySe(0x882);
    return 2;
}

s32 ConstellationEditorMenu::func_ov129_02294398() {
    s32 r = 0;
    if (unk_b0 != 0xff) {
        r = func_ov129_022945f4(unk_b0);
        if (r != 1) {
            if (r == 3) {
                openMessage(0x16);
            }
        } else {
            unk_b1 = 1;
            unk_b2 = unk_b0;
            unk_b3 = unk_b0;
        }
    }
    return r;
}

void ConstellationEditorMenu::func_ov129_02294360() {
    Snd_PlaySe(0x881);
    u8 *q = StarSky_GetLineStars(unk_aa);
    u32 c = q[0];
    if (c == unk_b3) {
        unk_b3 = q[1];
    } else {
        unk_b3 = c;
    }
}

s32 ConstellationEditorMenu::func_ov129_022942d0() {
    u32 a = unk_b0;
    u32 b = unk_b2;
    if (b != a) {
        u32 t = func_ov129_02294598(b, a);
        if (t != 0xffff && unk_2f20[t] == 3) {
            unk_aa = t;
        } else {
            s32 r = func_ov129_02294398();
            if (r != 0) {
                return r;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff && unk_2f20[cur] == 3) {
        unk_b1 = 2;
        unk_2f00[0] = unk_aa;
        unk_1c0.enableButton(6);
        func_ov129_02294360();
        return 2;
    }
    return 0;
}

s32 ConstellationEditorMenu::func_ov129_0229421c() {
    u32 a = unk_b0;
    if (a != 0xff) {
        u32 b = unk_b3;
        if (b != a) {
            if (b == 0xff) {
                unk_b3 = a;
                return 1;
            }
            u32 t = func_ov129_02294598(b, a);
            if (t != 0xffff && unk_2f20[t] == 3) {
                unk_aa = t;
            } else if (func_ov129_02294664(unk_b0)) {
                unk_b3 = unk_b0;
                return 1;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff) {
        u32 s = unk_2f20[cur];
        if (s != 2) {
            if (s == 3) {
                s32 i = func_ov129_022946dc();
                unk_2f00[i] = unk_aa;
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
    switch (unk_b1) {
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
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void ConstellationEditorMenu::setFlags(u32 mask) { unk_a4 = unk_a4 | mask; }

void ConstellationEditorMenu::clearFlags(u32 mask) { unk_a4 = unk_a4 & ~mask; }

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
