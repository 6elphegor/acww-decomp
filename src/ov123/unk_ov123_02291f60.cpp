#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gSaveBlancaFace;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern void *gCurrentHeap;

s32 Snd_PlaySe(s32 a);
s32 Gfx2d_EndSubObjWinBrightness();
s32 Gfx2d_BeginSubObjWinBrightness();
s32 Gfx2d_SetSubBrightness(s32 a);
s32 Gfx2d_DisableSubWindows(s32 a);
s32 Gfx2d_EnableSubWindows(s32 a);
s32 Gfx2d_SetSubWin1Planes(s32 a, s32 b);
s32 Gfx2d_SetSubWin1Rect(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f4c(s32 a);
s32 Snd_StopSe(s32 a, s32 b);
s32 Gfx2d_HideLayer(s32 a);
s32 Gfx2d_ShowLayer(s32 a);
s32 Gfx2d_SetSubAlphaBlend(s32 a, s32 b, s32 c);
s32 Snd_SetPanIfChanged(s32 a);
s32 MIi_CpuCopy32(void *a, void *b, u32 n);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void BgScreen_SetRectPalette(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void Oam_DrawObj(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void Oam_DrawCell(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void String_FromEncodedBytes(void *p, void *s, s32 n);
void MenuCtrl_SetResult(u32 v);
s32 MenuCtrl_GetMode();
void Gfx2d_LoadCharRange(void *p, s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LinearToTiles4bpp(void *p, void *q, s32 a, s32 b);
void *PatternTexCache_Get();
void *PlayerData_GetCurrent();
void *MenuCtrl_GetIndex();
void func_02004008(s32 a);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
s32 Gfx2d_LoadPaletteFile(void *, void *, u32, u32, u32, u32);
s32 Gfx2d_LoadCharFile(void *, void *, u32, u32, u32, u32);
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
BOOL Gfx2d_LoadScreen(void *p, u32 a, u32 b, u32 c);
void Gfx2d_LoadScreenFile(void *a, void *b, s32 c);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ResetSubBlend();
void func_02003f5c(s32 a);
void PlayerActor_RequestAct10();
void PlayerActor_RequestAct05();
s32 PlayerActor_IsChangingClothes();
BOOL PlayerActor_RequestWearShirtAlt();
BOOL PlayerActor_RequestWearHatAlt();
void ProcBase_RequestDelete(void *p);
void *ProcBase_GetParent();

// methods of other modules' classes, called with the object first (mangled-name trick)
void *_ZN15PatternTexCache10getPaletteEi(void *self, s32 a);
s32 _ZN12PatternOrder7getSlotEj(void *self, void *p);
void *_ZN14PlayerPatterns15getPatternOrderEv(void *self);
void *_ZN14PlayerPatterns17getPatternByOrderEj(void *self, void *p);
void *_ZN7Pattern7getInfoEv(void *self);
void _ZN7Pattern9setPixelsEPv(void *self, void *p);
void *_ZN7Pattern9getPixelsEv(void *self);
void _ZN11PatternInfo24setAuthorToCurrentPlayerEv(void *self);
void _ZN11PatternInfo10setPaletteEj(void *self, s32 a);
u8 _ZN11PatternInfo10getPaletteEv(void *self);
void *_ZN16BlancaFaceRecord10getPatternEv(void *self);
void *_ZN10PlayerData11getPatternsEv(void *self);
u16 *_ZN10PlayerData6getHatEv(void *self);
u16 *_ZN10PlayerData8getShirtEv(void *self);
void _ZN10BgVramTask14requestPaletteEjhj(void *self, void *q, s32 a, s32 b);
void _ZN10BgVramTask12requestCharsEjhjjj(void *self, void *q, s32 a, s32 b, s32 c, s32 d);
BOOL _ZN10BgVramTask13requestScreenEjhjj(void *self, void *a, u32 b, u32 c, u32 d);
void _ZN10BgVramTask6cancelEv(void *self);
}

// Other modules' classes (methods called directly)
class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

// Element at +0xb8, 0x40 bytes
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void destroyLabel();
    void createSmallLabel(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void redrawAligned(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// Element at +0xf8 (0x38 bytes each)
class BgVramTaskPair {
public:
    BgVramTaskPair();
    u32 unk_00[0x38 / 4];
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
    void disableObjWindow();
    void enableObjWindow();
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 a);
    BOOL hitTest(s32 idx, s32 x, s32 y);
    void setLayoutYesNo07(s32 a);
};

// Menu list sub-object, 0x164 bytes
class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutNeverMindConfirm();
    void hide();
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4
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
    void setSlideExtent(s32 a);
    void initSlideOut(s32 a, s32 b);
    void initSlideIn(s32 a, s32 b);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    void initKeyRepeat(s32 a, s32 b, s32 c);
    void restartKeyRepeat();
    BOOL isRepeatRight();
    BOOL isRepeatLeft();
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

struct Unk_ov123_022958c0 {
    u16 unk_00;
    u16 a : 9;
    u16 b : 5;
    u16 c : 2;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov123_02293010_Q {
    u8 a, b, c, d;
    Unk_ov123_02293010_Q() {}
};

struct Unk_ov123_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

class PatternEditorMenu;
typedef void (PatternEditorMenu::*Unk_ov123_022959c4_Fn)();
extern "C" PatternEditorMenu *PatternEditorMenu_Create();

extern "C" {
extern const u8 sPatternEditorButtonTileX0[13];
extern const u8 sPatternEditorButtonTileX1[13];
extern const u8 sPatternEditorButtonTileY[13];
extern const u8 sPatternEditorCursorX[36];
extern const u8 sPatternEditorCursorY[36];
extern const u8 sPatternEditorNavUp[36];
extern const u8 sPatternEditorNavRight[36];
extern const u8 sPatternEditorNavDown[36];
extern const u8 sPatternEditorNavLeft[36];
extern const u8 sFillMask[128];
extern const u16 sStampRing[16];
extern const u16 sStampSquare[16];
extern const u16 sStampHeart[16];
extern const u16 sStampStar[16];
extern const u16 sPatternEditorSineTable[322];
extern u32 data_ov123_02295800[2];
extern u32 data_ov123_02295828[2];
extern u32 data_ov123_02295830[2];
extern u32 data_ov123_02295848[2];
extern u32 data_ov123_02295850[2];
extern u32 data_ov123_02295858[2];
extern u32 data_ov123_022958a8[2];
extern u32 data_ov123_022958b8[2];
extern u32 data_ov123_0229590c[4];
extern u32 data_ov123_0229591c[4];
extern u32 data_ov123_0229593c[4];
extern u32 data_ov123_0229594c[4];
extern u32 data_ov123_0229595c[4];
extern u32 data_ov123_0229596c[8];
extern u32 data_ov123_02295a24[28];
extern u32 data_ov123_02295a94[36];
extern u32 data_ov123_02295b24[38];
extern u16 data_ov123_02295840[4];
extern Unk_ov123_022958c0 data_ov123_022958c0;
extern u16 *sStampBitmaps[4];
extern void *sPatternEditorToolCursors[12];
extern void *data_ov123_02295900[3];
extern Unk_ov123_SceneEntry sPatternEditorMenuProfile;
}

// Vtable 0x022959c4, size 0x5168
class PatternEditorMenu : public MenuProc {
public:
    PatternEditorMenu() : unk_b8(), unk_f8(), unk_1a0(), unk_5004() {}

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
    void endScreenDim();
    void beginScreenDim();
    void updateStylusStroke();
    void startStylusStroke();
    BOOL cycleColorByShoulder();
    void hideGrid();
    void showGrid();
    void toggleGrid();
    BOOL moveCanvasCursor(s32 unused, s32 flag);
    BOOL moveCursorByPad(void *pad);
    void moveCursorToTarget();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void hideCursor();
    u32 getCursorTargetY();
    u32 getCursorTargetX();
    void showCursor();
    u8 *getCanvas();
    void toggleUndo();
    void saveUndoState();
    void cancelVramTasks();
    void endShapeAndResume();
    void resetShapeDrag();
    void startShape();
    void drawShapePreview();
    void drawLineEndMarker(s32 x, s32 y);
    void drawCanvasCursor(s32 x, s32 y);
    void drawPreviewDot(s32 x, s32 y);
    void drawShapeCorner(s32 x, s32 y, u32 i);
    void resetPaletteLabel();
    void updateButtonFlash();
    void stopButtonFlash();
    void flashButton(u32 v);
    void selectTool(u32 v);
    void flushButtonScreen();
    void setButtonPalette(u32 a, u32 b);
    void pickColorAtCursor();
    void drawPendingShape();
    void useToolAtCursor();
    void useToolAtTouch();
    void applyToolAt(u8 x, u8 y);
    void drawStamp(s32 x, s32 y, u32 a, u32 idx);
    u32 blendMasked(u32 v, u32 s, u32 t);
    void floodFill(u8 x, u8 y, u32 tgt);
    s32 findSpanEnd(s32 x, s32 y, s32 v);
    s32 findSpanStart(s32 x, s32 y, s32 v);
    s32 findColorInSpan(s32 x0, s32 x1, s32 y, s32 v);
    u8 getPixel(u8 x, u8 y);
    void fillWithMask(u32 c);
    void fillCanvas(s32 v);
    void drawEllipse(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill);
    void drawRect(u8 x0, u8 y0, u8 x1, u8 y1, u32 c);
    u32 drawLine(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t);
    u32 plotBrush(u8 x, u8 y, u32 c, s32 t, s32 z);
    u32 setPixel(u8 x, u8 y, u32 c);
    void setCanvasPosFromTouch();
    s32 canvasToScreenY(s32 i);
    s32 canvasToScreenX(s32 i);
    void activateButton();
    u8 hitTestTouch();
    u8 hitTest(s32 x, s32 y);
    void setPalette(u8 a);
    void setColor(u8 v);
    void requestPaletteUpload();
    void flushCanvasGfx();
    void requestCanvasUpload();
    void loadCanvasChars();
    void buildCanvasChars();
    void requestPreviewUpload();
    void loadPreviewChars();
    void buildPreviewChars();
    void saveToExternalPattern();
    void loadFromExternalPattern();
    void saveToPlayerPattern();
    void loadFromPlayerPattern();
    void startBarTransition(u8 a, u8 b);
    void askQuit();
    void askSave();
    void resumeConfirmInput();
    void startConfirmButtons();
    void startConfirmTouch();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateBarTransition();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateConfirmButtons();
    void updateEyedropper();
    void updateCanvasShape();
    void updateCanvasPaint();
    void updateCanvasCursor();
    void updateButtons();
    void updateTouchStroke();
    void updateConfirmTouch();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initEditor();
    void applyLayerScroll();
    void updateLayerSlide();
    void stateConfirmBack();
    void stateConfirmClosing();
    void stateConfirmClose();
    void stateConfirm();
    void stateConfirmOpening();
    void stateConfirmOpen();
    void stateClosing();
    void stateClose();
    void stateWaitWear();
    void stateRewear();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ volatile u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6[2];
    /* 0xb8 */ LabelString unk_b8[1];
    /* 0xf8 */ BgVramTaskPair unk_f8[3];
    /* 0x1a0 */ MenuCursorBuf0 unk_1a0;
    /* 0x204 */ u8 unk_204[0xa04 - 0x204];
    /* 0xa04 */ u8 unk_a04[0x200];
    /* 0xc04 */ u8 unk_c04[0x200];
    /* 0xe04 */ u8 unk_e04[0x2e04 - 0xe04];
    /* 0x2e04 */ u8 unk_2e04[0x200];
    /* 0x3004 */ u8 unk_3004[0x5004 - 0x3004];
    /* 0x5004 */ MenuBottomButtons unk_5004;
};

// ptmf constants named so their order can be controlled
extern "C" {
void _ZN17PatternEditorMenu19stateConfirmOpeningEv();
extern void *data_ov123_022957e0[2];
void _ZN17PatternEditorMenu13stateWaitWearEv();
extern void *data_ov123_022957e8[2];
void _ZN17PatternEditorMenu18updateConfirmTouchEv();
extern void *data_ov123_022957f0[2];
void _ZN17PatternEditorMenu10stateCloseEv();
extern void *data_ov123_022957f8[2];
void _ZN17PatternEditorMenu19updateCursorReleaseEv();
extern void *data_ov123_02295808[2];
void _ZN17PatternEditorMenu9stateOpenEv();
extern void *data_ov123_02295810[2];
void _ZN17PatternEditorMenu19updateBarTransitionEv();
extern void *data_ov123_02295818[2];
void _ZN17PatternEditorMenu12stateOpeningEv();
extern void *data_ov123_02295820[2];
void _ZN17PatternEditorMenu13updateButtonsEv();
extern void *data_ov123_02295838[2];
void _ZN17PatternEditorMenu16stateConfirmOpenEv();
extern void *data_ov123_02295860[2];
void _ZN17PatternEditorMenu18updateCanvasCursorEv();
extern void *data_ov123_02295870[2];
void _ZN17PatternEditorMenu11stateRewearEv();
extern void *data_ov123_02295878[2];
void _ZN17PatternEditorMenu17updateCursorPressEv();
extern void *data_ov123_02295880[2];
void _ZN17PatternEditorMenu20updateConfirmButtonsEv();
extern void *data_ov123_02295888[2];
void _ZN17PatternEditorMenu16updateEyedropperEv();
extern void *data_ov123_02295890[2];
void _ZN17PatternEditorMenu17updateCanvasShapeEv();
extern void *data_ov123_02295898[2];
void _ZN17PatternEditorMenu17updateCanvasPaintEv();
extern void *data_ov123_022958a0[2];
void _ZN17PatternEditorMenu16updateCursorMoveEv();
extern void *data_ov123_022958b0[2];
void _ZN17PatternEditorMenu11updateTouchEv();
extern void *data_ov123_022958c8[2];
void _ZN17PatternEditorMenu17updateTouchStrokeEv();
extern void *data_ov123_022958d0[2];
void _ZN17PatternEditorMenu12stateClosingEv();
extern void *data_ov123_022958d8[2];
void _ZN17PatternEditorMenu16stateConfirmBackEv();
extern void *data_ov123_022958e0[2];
void _ZN17PatternEditorMenu19stateConfirmClosingEv();
extern void *data_ov123_022958e8[2];
void _ZN17PatternEditorMenu17stateConfirmCloseEv();
extern void *data_ov123_022958f0[2];
void _ZN17PatternEditorMenu12stateConfirmEv();
extern void *data_ov123_022958f8[2];
}

static inline BOOL Unk_ov123_022946c4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}extern "C" void *data_ov123_022958d8[2] = {(void *)_ZN17PatternEditorMenu12stateClosingEv, 0};

extern "C" void *data_ov123_02295808[2] = {(void *)_ZN17PatternEditorMenu19updateCursorReleaseEv, 0};

extern "C" void *data_ov123_02295878[2] = {(void *)_ZN17PatternEditorMenu11stateRewearEv, 0};

extern "C" void *data_ov123_02295860[2] = {(void *)_ZN17PatternEditorMenu16stateConfirmOpenEv, 0};

extern "C" Unk_ov123_SceneEntry sPatternEditorMenuProfile = {(void *)PatternEditorMenu_Create, 0xa9, 0xad};

extern "C" void *data_ov123_02295890[2] = {(void *)_ZN17PatternEditorMenu16updateEyedropperEv, 0};

extern "C" void *data_ov123_02295880[2] = {(void *)_ZN17PatternEditorMenu17updateCursorPressEv, 0};

extern "C" u32 data_ov123_0229594c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c2};

extern "C" u32 data_ov123_0229596c[8] = {0x718d0040, 0x0000410e, 0x617e0040, 0x0000410e, 0x518d0030, 0x0000410e, 0x417e0030, 0xffff410e};

extern "C" void *data_ov123_02295820[2] = {(void *)_ZN17PatternEditorMenu12stateOpeningEv, 0};

extern "C" const u16 sPatternEditorSineTable[322] = {0, 6, 0x000c, 0x0012, 0x0019, 0x001f, 0x0025, 0x002b, 0x0031, 0x0038, 0x003e, 0x0044, 0x004a, 0x0050, 0x0056, 0x005c, 0x0061, 0x0067, 0x006d, 0x0073, 0x0078, 0x007e, 0x0083, 0x0088, 0x008e, 0x0093, 0x0098, 0x009d, 0x00a2, 0x00a7, 0x00ab, 0x00b0, 0x00b5, 0x00b9, 0x00bd, 0x00c1, 0x00c5, 0x00c9, 0x00cd, 0x00d1, 0x00d4, 0x00d8, 0x00db, 0x00de, 0x00e1, 0x00e4, 0x00e7, 0x00ea, 0x00ec, 0x00ee, 0x00f1, 0x00f3, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00fe, 0x00ff, 0x00ff, 0x00ff, 0x0100, 0x00ff, 0x00ff, 0x00ff, 0x00fe, 0x00fe, 0x00fd, 0x00fc, 0x00fb, 0x00f9, 0x00f8, 0x00f6, 0x00f4, 0x00f3, 0x00f1, 0x00ee, 0x00ec, 0x00ea, 0x00e7, 0x00e4, 0x00e1, 0x00de, 0x00db, 0x00d8, 0x00d4, 0x00d1, 0x00cd, 0x00c9, 0x00c5, 0x00c1, 0x00bd, 0x00b9, 0x00b5, 0x00b0, 0x00ab, 0x00a7, 0x00a2, 0x009d, 0x0098, 0x0093, 0x008e, 0x0088, 0x0083, 0x007e, 0x0078, 0x0073, 0x006d, 0x0067, 0x0061, 0x005c, 0x0056, 0x0050, 0x004a, 0x0044, 0x003e, 0x0038, 0x0031, 0x002b, 0x0025, 0x001f, 0x0019, 0x0012, 0x000c, 6, 0, 0xfffa, 0xfff4, 0xffee, 0xffe7, 0xffe1, 0xffdb, 0xffd5, 0xffcf, 0xffc8, 0xffc2, 0xffbc, 0xffb6, 0xffb0, 0xffaa, 0xffa4, 0xff9f, 0xff99, 0xff93, 0xff8d, 0xff88, 0xff82, 0xff7d, 0xff78, 0xff72, 0xff6d, 0xff68, 0xff63, 0xff5e, 0xff59, 0xff55, 0xff50, 0xff4b, 0xff47, 0xff43, 0xff3f, 0xff3b, 0xff37, 0xff33, 0xff2f, 0xff2c, 0xff28, 0xff25, 0xff22, 0xff1f, 0xff1c, 0xff19, 0xff16, 0xff14, 0xff12, 0xff0f, 0xff0d, 0xff0c, 0xff0a, 0xff08, 0xff07, 0xff05, 0xff04, 0xff03, 0xff02, 0xff02, 0xff01, 0xff01, 0xff01, 0xff00, 0xff01, 0xff01, 0xff01, 0xff02, 0xff02, 0xff03, 0xff04, 0xff05, 0xff07, 0xff08, 0xff0a, 0xff0c, 0xff0d, 0xff0f, 0xff12, 0xff14, 0xff16, 0xff19, 0xff1c, 0xff1f, 0xff22, 0xff25, 0xff28, 0xff2c, 0xff2f, 0xff33, 0xff37, 0xff3b, 0xff3f, 0xff43, 0xff47, 0xff4b, 0xff50, 0xff55, 0xff59, 0xff5e, 0xff63, 0xff68, 0xff6d, 0xff72, 0xff78, 0xff7d, 0xff82, 0xff88, 0xff8d, 0xff93, 0xff99, 0xff9f, 0xffa4, 0xffaa, 0xffb0, 0xffb6, 0xffbc, 0xffc2, 0xffc8, 0xffcf, 0xffd5, 0xffdb, 0xffe1, 0xffe7, 0xffee, 0xfff4, 0xfffa, 0, 6, 0x000c, 0x0012, 0x0019, 0x001f, 0x0025, 0x002b, 0x0031, 0x0038, 0x003e, 0x0044, 0x004a, 0x0050, 0x0056, 0x005c, 0x0061, 0x0067, 0x006d, 0x0073, 0x0078, 0x007e, 0x0083, 0x0088, 0x008e, 0x0093, 0x0098, 0x009d, 0x00a2, 0x00a7, 0x00ab, 0x00b0, 0x00b5, 0x00b9, 0x00bd, 0x00c1, 0x00c5, 0x00c9, 0x00cd, 0x00d1, 0x00d4, 0x00d8, 0x00db, 0x00de, 0x00e1, 0x00e4, 0x00e7, 0x00ea, 0x00ec, 0x00ee, 0x00f1, 0x00f3, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fb, 0x00fc, 0x00fd, 0x00fe, 0x00fe, 0x00ff, 0x00ff, 0x00ff, 0x003f, 0};

extern "C" const u16 sStampRing[16] = {0, 0, 0, 0x0fc0, 0x1fe0, 0x3870, 0x3030, 0x3030, 0x3030, 0x3030, 0x3870, 0x1fe0, 0x0fc0, 0, 0, 0};

extern "C" const u16 sStampSquare[16] = {0, 0, 0, 0x1ff8, 0x1ff8, 0x1818, 0x1818, 0x1818, 0x1818, 0x1818, 0x1818, 0x1ff8, 0x1ff8, 0, 0, 0};

extern "C" void *data_ov123_022958a0[2] = {(void *)_ZN17PatternEditorMenu17updateCanvasPaintEv, 0};

extern "C" void *data_ov123_022957e8[2] = {(void *)_ZN17PatternEditorMenu13stateWaitWearEv, 0};

extern "C" u16 data_ov123_02295840[4] = {0, 0x0010, 8, 0x0018};

extern "C" u32 data_ov123_02295828[2] = {0x818840e0, 0xffff510a};

extern "C" void *data_ov123_022958b0[2] = {(void *)_ZN17PatternEditorMenu16updateCursorMoveEv, 0};

extern "C" u32 data_ov123_0229591c[4] = {0x81a880b0, 0x000050f9, 0x41a800d0, 0xffff5179};

extern "C" const u8 sPatternEditorNavUp[36] = {0, 0, 1, 2, 3, 4, 6, 6, 7, 8, 9, 0x0a, 0x0c, 0x0d, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1d, 0x1e, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_022958b8[2] = {0x41f800f8, 0xffff4102};

extern "C" void *data_ov123_02295810[2] = {(void *)_ZN17PatternEditorMenu9stateOpenEv, 0};

extern "C" Unk_ov123_022958c0 data_ov123_022958c0 = {0xf8, 0x1f8, 0, 1, 0x40ca, 0xffff};

extern "C" const u16 sStampStar[16] = {0, 0, 0, 0x0100, 0x0100, 0x0380, 0x3ff8, 0x0fe0, 0x07c0, 0x07c0, 0x0ee0, 0x0c60, 0x1010, 0, 0, 0};

extern "C" void *data_ov123_022957e0[2] = {(void *)_ZN17PatternEditorMenu19stateConfirmOpeningEv, 0};

extern "C" void *data_ov123_022957f0[2] = {(void *)_ZN17PatternEditorMenu18updateConfirmTouchEv, 0};

extern "C" void *data_ov123_022957f8[2] = {(void *)_ZN17PatternEditorMenu10stateCloseEv, 0};

extern "C" u32 data_ov123_02295a94[36] = {0x60084028, 0x000040f4, 0x400840a0, 0x000040f4, 0x51b88008, 0x00004115, 0x51b880e8, 0x00004115, 0x51b880c8, 0x00004115, 0x51b880a8, 0x00004115, 0x71b84028, 0x000040f5, 0x61d84028, 0x000040f4, 0x61f84028, 0x000040f4, 0x60284028, 0x000040f5, 0x40408008, 0x00004115, 0x404080e8, 0x00004115, 0x51b840a0, 0x000040f5, 0x41d840a0, 0x000040f4, 0x41f840a0, 0x000040f4, 0x404080c8, 0x00004115, 0x404080a8, 0x00004115, 0x402840a0, 0xffff40f5};

extern "C" u32 data_ov123_02295a24[28] = {0x50428008, 0x00004115, 0x70424046, 0x000040f5, 0x50428026, 0x00004115, 0x504280e8, 0x00004115, 0x504280c8, 0x00004115, 0x504280a9, 0x00004115, 0x504240a1, 0x000040f5, 0x40788008, 0x00004115, 0x60604046, 0x000040f5, 0x40788026, 0x00004115, 0x407880e8, 0x00004115, 0x407880c8, 0x00004115, 0x407880a9, 0x00004115, 0x406040a1, 0xffff40f5};

extern "C" void *data_ov123_022958f8[2] = {(void *)_ZN17PatternEditorMenu12stateConfirmEv, 0};

extern "C" u32 data_ov123_02295b24[38] = {0x61984047, 0x000040f4, 0x11808038, 0x00004115, 0x01a88022, 0x00004115, 0x40234031, 0x000040f5, 0x40044031, 0x000040f4, 0x41e44031, 0x000040f4, 0x41c44031, 0x000040f4, 0x41ae4031, 0x000040f4, 0x01a8002e, 0x00004115, 0x01a0401a, 0x000040f7, 0x5180401a, 0x000040f5, 0x61e44047, 0x000040f4, 0x61c44047, 0x000040f4, 0x51808022, 0x00004115, 0x003b8038, 0x00004115, 0x60044047, 0x000040f4, 0x71804047, 0x000040f5, 0x61a44047, 0x000040f4, 0x60234047, 0xffff40f5};

extern "C" void *data_ov123_022958f0[2] = {(void *)_ZN17PatternEditorMenu17stateConfirmCloseEv, 0};

extern "C" void *data_ov123_022958e8[2] = {(void *)_ZN17PatternEditorMenu19stateConfirmClosingEv, 0};

extern "C" void *data_ov123_022958e0[2] = {(void *)_ZN17PatternEditorMenu16stateConfirmBackEv, 0};

extern "C" u32 data_ov123_02295848[2] = {0x018c0022, 0xffff4129};

extern "C" void *data_ov123_022958d0[2] = {(void *)_ZN17PatternEditorMenu17updateTouchStrokeEv, 0};

extern "C" void *data_ov123_022958c8[2] = {(void *)_ZN17PatternEditorMenu11updateTouchEv, 0};

extern "C" void *data_ov123_02295900[3] = {data_ov123_02295a24, data_ov123_02295b24, data_ov123_02295a94};

extern "C" const u8 sPatternEditorNavLeft[36] = {0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0x0c, 0x0d, 0x0e, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x1e, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_0229595c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c6};

extern "C" const u8 sPatternEditorCursorX[36] = {0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0x23, 0x22, 0x0e, 0x1a, 0x26, 0x32, 0x3e, 0x4a, 0x56, 0x62, 0x6e, 0x7a, 0x86, 0x92, 0x9e, 0xaa, 0xb6, 0xc4, 0x74, 0x62, 0xc2, 0x80, 0, 0};

extern "C" const u8 sPatternEditorCursorY[36] = {0x13, 0x2b, 0x43, 0x63, 0x7b, 0x9b, 0x13, 0x2b, 0x43, 0x63, 0x7b, 0x93, 0x86, 0x0e, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xb6, 0xb6, 0xa9, 0xa9, 0x50, 0, 0};

extern "C" void *data_ov123_02295898[2] = {(void *)_ZN17PatternEditorMenu17updateCanvasShapeEv, 0};

extern "C" u32 data_ov123_0229590c[4] = {0x018f0022, 0x00004129, 0x01880022, 0xffff4128};

extern "C" u32 data_ov123_02295830[2] = {0x400000f0, 0xffff4110};

extern "C" const u16 sStampHeart[16] = {0, 0, 0, 0, 0x1c70, 0x3ef8, 0x3ff8, 0x3ff8, 0x3ff8, 0x1ff0, 0x0fe0, 0x07c0, 0x0100, 0, 0, 0};

extern "C" void *data_ov123_02295818[2] = {(void *)_ZN17PatternEditorMenu19updateBarTransitionEv, 0};

extern "C" const u8 sPatternEditorButtonTileX1[13] = {0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 4};

extern "C" const u8 sPatternEditorNavRight[36] = {6, 7, 8, 9, 0x0a, 0x0b, 6, 7, 8, 9, 0x0a, 0x0b, 0x0c, 0, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1d, 0x1d, 0, 0, 0, 0, 0};

extern "C" u32 data_ov123_0229593c[4] = {0x400000f0, 0x000040c0, 0x41f800f8, 0xffff40c4};

extern "C" u32 data_ov123_02295858[2] = {0x41f800f8, 0xffff4100};

extern "C" u32 data_ov123_02295850[2] = {0x400000f0, 0xffff40cc};

extern "C" u32 data_ov123_02295800[2] = {0x400000f0, 0xffff40c8};

extern "C" const u8 sFillMask[128] = {0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x10, 0x11, 0x11, 1, 0, 0, 0, 0, 0, 0x11, 0x11, 0, 0, 0, 0x11, 0, 0, 0, 0, 0, 0, 0x11, 0x11, 1, 0, 0, 0, 0, 0x10, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 1, 0, 0, 0, 0, 0x10, 0x11, 0x11, 0, 0, 0, 0, 0, 0, 0x11, 0, 0, 0, 0x11, 0x11, 0, 0, 0, 0, 0, 0x10, 0x11, 0x11, 1, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0, 0, 0, 0x11, 0x11, 0x11, 0x11, 0, 0};

extern "C" const u8 sPatternEditorButtonTileY[13] = {1, 4, 7, 0x0b, 0x0e, 0x12, 1, 4, 7, 0x0b, 0x0e, 0x11, 0x10};

extern "C" void *data_ov123_02295870[2] = {(void *)_ZN17PatternEditorMenu18updateCanvasCursorEv, 0};

extern "C" const u8 sPatternEditorButtonTileX0[13] = {0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 1};

extern "C" void *data_ov123_02295888[2] = {(void *)_ZN17PatternEditorMenu20updateConfirmButtonsEv, 0};

extern "C" u16 *sStampBitmaps[4] = {(u16 *)sStampHeart, (u16 *)sStampStar, (u16 *)sStampRing, (u16 *)sStampSquare};

extern "C" const u8 sPatternEditorNavDown[36] = {1, 2, 3, 4, 5, 0x1d, 7, 8, 9, 0x0a, 0x0b, 0x1d, 0x0e, 0x0c, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1d, 0x1e, 0, 0, 0, 0, 0};

extern "C" PatternEditorMenu *PatternEditorMenu_Create() { return new PatternEditorMenu(); }

BOOL PatternEditorMenu::vfunc_00() {
    initEditor();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL PatternEditorMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PatternEditorMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        if (unk_ac == 2) {
            if (!testFlags(0x100)) {
                drawCanvasCursor(unk_af, unk_b0);
            }
        } else {
            unk_1a0.drawWrapped();
        }
    }
    if (testFlags(0x100)) {
        drawShapePreview();
    }
    unk_5004.drawAt(getSlideOffsetY());
    if (testFlags(1)) {
        s32 y = unk_98 + (unk_94 + 0x60);
        if (MenuCtrl_IsButtons()) {
            Oam_DrawObj(1, (void *)data_ov123_02295828, 0x80, y, -1, -1, 0);
            Oam_DrawCell(1, (void *)data_ov123_0229591c, 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        Oam_DrawCell(1, (void *)data_ov123_0229596c, unk_a3 + 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (unk_a1 < 9) {
            Oam_DrawCell(1, (void *)data_ov123_02295848, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, (void *)data_ov123_0229590c, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        if (MenuCtrl_IsButtons()) {
            Oam_DrawCell(1, (void *)((u32 *)data_ov123_02295900)[unk_ac], 0x80, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

BOOL PatternEditorMenu::execTransition() {
    static Unk_ov123_022959c4_Fn tbl[12] = {
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295810,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295820,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295878,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957e8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957f8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958d8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295860,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957e0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958f8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958f0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958e8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958e0};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}extern "C" void *data_ov123_02295838[2] = {(void *)_ZN17PatternEditorMenu13updateButtonsEv, 0};

extern "C" u32 data_ov123_022958a8[2] = {0x01fc00fc, 0xffff4108};

void PatternEditorMenu::runMainState() {
    static Unk_ov123_022959c4_Fn tbl[13] = {
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958c8,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022957f0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958d0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295838,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295870,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958a0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295898,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295890,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295888,
        *(Unk_ov123_022959c4_Fn *)data_ov123_022958b0,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295880,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295808,
        *(Unk_ov123_022959c4_Fn *)data_ov123_02295818};
    (this->*tbl[mainState])();
}

BOOL PatternEditorMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PatternEditorMenu::execPhase3() { return TRUE; }

BOOL PatternEditorMenu::execPhase4() { return TRUE; }

BOOL PatternEditorMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void PatternEditorMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    unk_a4 = 0x22;
    selectTool(0);
    loadObjGfx();
    switch (MenuCtrl_GetMode()) {
    case 2:
        loadFromPlayerPattern();
        break;
    case 3:
        loadFromExternalPattern();
        break;
    }
    buildPreviewChars();
    buildCanvasChars();
    loadPreviewChars();
    loadCanvasChars();
    unk_5004.setLayoutNeverMindConfirm();
    beginSubSlideIn(0xb, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    showGrid();
    updateLayerSlide();
    setFlags(1);
    setTransitionState(1);
}

void PatternEditorMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

// ---- 0x02294d5c ----
void PatternEditorMenu::stateRewear() {
    if (!testFlags(0x8000) && !testFlags(0x10000)) {
        setTransitionState(4);
        stateClose();
        return;
    }
    void *p = PlayerData_GetCurrent();
    if (testFlags(0x8000)) {
        _ZN10PlayerData8getShirtEv(p);
        if (!PlayerActor_RequestWearShirtAlt()) return;
        clearFlags(0x8000);
    }
    if (testFlags(0x10000)) {
        _ZN10PlayerData6getHatEv(p);
        if (!PlayerActor_RequestWearHatAlt()) return;
        clearFlags(0x8000);
    }
    setTransitionState(3);
}

void PatternEditorMenu::stateWaitWear() {
    if (PlayerActor_IsChangingClothes() == 0) {
        setTransitionState(4);
    }
}

void PatternEditorMenu::stateClose() {
    endScreenDim();
    ((MenuLauncher *)((void *(*)(void *))ProcBase_GetParent)(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(0xb, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(5);
}

void PatternEditorMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(3);
        setPhase(5);
        Gfx2d_ResetSubBlend();
        clearFlags(1);
        unk_5004.hide();
    } else {
        updateLayerSlide();
    }
}

void PatternEditorMenu::stateConfirmOpen() {
    initSlideOut(0, 0);
    setTransitionState(7);
    unk_98 = 0;
    setFlags(0x400);
}

void PatternEditorMenu::stateConfirmOpening() {
    if (stepSlideOut(-1)) {
        initSlideIn(0, 0);
        if (testFlags(8)) {
            unk_5004.setLayoutYesNo07(0x87);
        } else {
            unk_5004.setLayoutYesNo07(0x22);
        }
        setTransitionState(8);
    }
    if (testFlags(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            beginScreenDim();
            unk_98 = 0x10;
            clearFlags(0x400);
        }
    }
    applyLayerScroll();
}

void PatternEditorMenu::stateConfirm() {
    if (stepSlideIn(-1)) {
        setPhase(2);
        resumeConfirmInput();
        if (testFlags(0x400)) {
            beginScreenDim();
            unk_98 = 0x10;
            clearFlags(0x400);
        }
    } else if (testFlags(0x400)) {
        if (unk_98 < 0x10) {
            unk_98 = unk_98 + 2;
        } else {
            beginScreenDim();
            unk_98 = 0x10;
            clearFlags(0x400);
        }
    }
    applyLayerScroll();
}

void PatternEditorMenu::stateConfirmClose() {
    endScreenDim();
    if (testFlags(0x20000)) {
        clearFlags(0x20000);
        showGrid();
    }
    initSlideOut(0, 0);
    setTransitionState(0xa);
    unk_98 = 0x10;
}

void PatternEditorMenu::stateConfirmClosing() {
    if (stepSlideOut(-1)) {
        initSlideIn(0, 0);
        unk_5004.setLayoutNeverMindConfirm();
        setTransitionState(0xb);
    }
    if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    applyLayerScroll();
}

void PatternEditorMenu::stateConfirmBack() {
    if (stepSlideIn(-1)) {
        setPhase(2);
        resumeInput();
        unk_98 = 0;
    } else if (unk_98 >= 2) {
        unk_98 = unk_98 - 2;
    } else {
        unk_98 = 0;
    }
    applyLayerScroll();
}

void PatternEditorMenu::updateLayerSlide() {
    applySlideOffset(6, 0, unk_98);
    applySlideOffset(4, 0, unk_98);
    applySlideOffset(3, 0, unk_98);
    unk_94 = getSlideOffsetY();
}

void PatternEditorMenu::applyLayerScroll() {
    Gfx2d_SetLayerOffset(6, 0, -unk_98);
    Gfx2d_SetLayerOffset(4, 0, -unk_98);
    Gfx2d_SetLayerOffset(3, 0, -unk_98);
}

void PatternEditorMenu::initEditor() {
    setColor(1);
    unk_9c = 0;
    unk_a6 = 0x22;
    stopButtonFlash();
    unk_aa = 0;
    unk_ab = 0;
    unk_ac = 0;
    resetShapeDrag();
    unk_af = 0x10;
    unk_b0 = 0x10;
    MenuCtrl_SetResult(0);
    PlayerActor_RequestAct05();
    unk_98 = 0;
    unk_b3 = 0;
}

void PatternEditorMenu::releaseResources() {
    unk_5004.freeTexts();
    resetPaletteLabel();
    cancelVramTasks();
    PlayerActor_RequestAct10();
    if (MenuCtrl_GetMode() == 3) {
        func_02003f5c(0);
    }
}

void PatternEditorMenu::preInputUpdate() {
    preStateUpdate();
    MenuCursorBuf0 *p = &unk_1a0;
    p->vfunc_0c();
}

void PatternEditorMenu::postInputUpdate() {
    postStateUpdate();
}

void PatternEditorMenu::preStateUpdate() {
    unk_5004.freeTexts();
    resetPaletteLabel();
    updateButtonFlash();
}

void PatternEditorMenu::postStateUpdate() {
    flushCanvasGfx();
    flushButtonScreen();
}

void PatternEditorMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void PatternEditorMenu::loadBgGfx() {
    void *p = gCurrentHeap;
    Gfx2d_LoadPaletteFile((void *)"menu/edit/bg.bpl", p, 6, 4, 4, 0xe);
    File_LoadToBuffer((void *)"menu/edit/a.bsc", (u8 *)this + 0x204, 0x800);
    Gfx2d_LoadScreen((u8 *)this + 0x204, 6, 0x800, 0);
    Gfx2d_LoadScreenFile((void *)"menu/edit/b.bsc", p, 4);
    Gfx2d_LoadScreenFile((void *)"menu/edit/c.bsc", p, 3);
    Gfx2d_LoadCharFile((void *)"menu/edit/bg1.bch", p, 6, 0x120, 0x120, 0x1ff);
    Gfx2d_LoadCharFile((void *)"menu/edit/bg0.bch", p, 6, 0x10, 0x10, 0x1f);
}

void PatternEditorMenu::loadObjGfx() {
    void *p = gCurrentHeap;
    Gfx2d_LoadPaletteFile((void *)"menu/edit/obj.bpl", p, 8, 4, 4, 0xc);
    Gfx2d_LoadCharFile((void *)"menu/edit/obj0.bch", p, 8, 0xc0, 0xc0, 0x12f);
    Gfx2d_LoadCharFile((void *)"menu/edit/obj1.bch", p, 8, 0x130, 0x130, 0x19f);
}

void PatternEditorMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov123_022946c4_Both()) {
        u32 r = hitTestTouch();
        if (r == 0x21) {
            useToolAtTouch();
        } else if (r != 0x22) {
            unk_a5 = r;
            activateButton();
        }
    }
}

void PatternEditorMenu::updateConfirmTouch() {
    if (checkSwitchToButtons(1)) {
        startConfirmButtons();
    } else if (Unk_ov123_022946c4_Both()) {
        if (unk_5004.isTouched(3)) {
            unk_a5 = 0x1f;
            activateButton();
        } else if (unk_5004.isTouched(4)) {
            unk_a5 = 0x20;
            activateButton();
        }
    }
}

void PatternEditorMenu::updateTouchStroke() {
    if (gTouchHeld == 0) {
        if (testFlags(0x80000)) {
            clearFlags(0x80000);
            Snd_StopSe(0x862, 1);
        }
        endShapeAndResume();
    } else {
        clearFlags(0x100000);
        updateStylusStroke();
        unk_b4 = gTouchCurX;
        unk_b5 = gTouchCurY;
        if (testFlags(0x100000)) {
            if (!testFlags(0x80000)) {
                setFlags(0x80000);
                func_02004008(0x862);
            }
        } else if (testFlags(0x80000)) {
            clearFlags(0x80000);
            Snd_StopSe(0x862, 1);
        }
    }
}

void PatternEditorMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        if (moveCursorByPad((void *)takeRepeatedKeys())) {
            if (unk_ac == 0) {
                unk_ab = unk_aa;
            }
            moveCursorToTarget();
        } else {
            u32 t = gPad[1];
            if (t & 1) {
                pressCursor();
            } else if (t & 0x800) {
                Snd_PlaySe(0x864);
                if (unk_ac == 0) {
                    unk_ac = 1;
                    unk_aa = unk_a2 + 0xd;
                } else {
                    unk_ac = 2;
                }
                resumeInput();
            } else if (!cycleColorByShoulder()) {
                u32 k = gPad[1];
                if (k & 0x400) {
                    toggleGrid();
                } else if (k & 2) {
                    hideCursor();
                    askQuit();
                } else if (k & 8) {
                    hideCursor();
                    askSave();
                }
            }
        }
    }
}

void PatternEditorMenu::updateCanvasCursor() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        moveCanvasCursor(takeRepeatedKeys(), 0);
        u32 t = gPad[1];
        if (t & 1) {
            useToolAtCursor();
        } else if (t & 2) {
            setFlags(0x800);
            pickColorAtCursor();
            setMainState(7);
        } else if (t & 0x800) {
            Snd_PlaySe(0x864);
            unk_ac = 0;
            unk_aa = unk_ab;
            resumeInput();
        } else if (!cycleColorByShoulder()) {
            u32 k = gPad[1];
            if (k & 0x400) {
                toggleGrid();
            } else if (k & 8) {
                hideCursor();
                askSave();
            }
        }
    }
}

void PatternEditorMenu::updateCanvasPaint()
{
    if ((gPad[0] & 1) == 0) {
        resumeInput();
        if (testFlags(0x40000)) {
            clearFlags(0x40000);
            Snd_StopSe(0x863, 1);
        }
    } else {
        s32 r = takeRepeatedKeys();
        s32 flag = 0;
        if (moveCanvasCursor(r, 1)) {
            plotBrush(unk_af, unk_b0, unk_a2, unk_a4, 1);
            setFlags(0x40);
            Snd_PlaySe(0x861);
            if (unk_b3 == 0) {
                flag = 1;
            } else {
                Snd_PlaySe(0x860);
            }
        }
        if (flag) {
            if (testFlags(0x40000) == 0) {
                setFlags(0x40000);
                func_02004008(0x863);
            }
        } else {
            if (testFlags(0x40000)) {
                clearFlags(0x40000);
                Snd_StopSe(0x863, 1);
            }
        }
    }
}

void PatternEditorMenu::updateCanvasShape()
{
    if (checkSwitchToTouch()) {
        Snd_PlaySe(0x86e);
        resetShapeDrag();
        startTouchInput();
        return;
    }
    s32 r = takeRepeatedKeys();
    if (moveCanvasCursor(r, 0)) {
        unk_a8 = unk_af;
        unk_a9 = unk_b0;
        return;
    }
    u32 k = gPad[1];
    if (k & 1) {
        endShapeAndResume();
    } else if (k & 2) {
        Snd_PlaySe(0x86e);
        resetShapeDrag();
        resumeInput();
    } else if (k & 0x800) {
        Snd_PlaySe(0x864);
        resetShapeDrag();
        unk_ac = 0;
        resumeInput();
    } else if (k & 0x400) {
        toggleGrid();
    }
}

void PatternEditorMenu::updateEyedropper()
{
    if ((gPad[0] & 2) == 0) {
        clearFlags(0x800);
        resumeInput();
        Snd_PlaySe(0x86d);
    } else {
        s32 r = takeRepeatedKeys();
        if (moveCanvasCursor(r, 0)) {
            pickColorAtCursor();
        }
    }
}

void PatternEditorMenu::updateConfirmButtons()
{
    if (checkSwitchToTouch()) {
        startConfirmTouch();
        return;
    }
    u32 old = unk_aa;
    takeRepeatedKeys();
    if (isRepeatLeft()) {
        unk_aa = 0x1f;
    } else if (isRepeatRight()) {
        unk_aa = 0x20;
    }
    if (old != unk_aa) {
        moveCursorToTarget();
        return;
    }
    u32 k = gPad[1];
    if (k & 1) {
        pressCursor();
    } else if (k & 2) {
        hideCursor();
        unk_a5 = 0x20;
        activateButton();
    } else if (k & 8) {
        hideCursor();
        unk_a5 = 0x1f;
        activateButton();
    }
}

void PatternEditorMenu::updateCursorMove()
{
    if (unk_1a0.isMoving() == 0) {
        setMainState(unk_a0);
        runMainState();
    }
}

void PatternEditorMenu::updateCursorPress()
{
    if (unk_1a0.isAnimDone()) {
        unk_a5 = unk_aa;
        activateButton();
        if (mainState == 0xa) {
            releaseCursor();
        }
    }
}

void PatternEditorMenu::updateCursorRelease()
{
    if (unk_1a0.isAnimDone()) {
        refreshCursor();
        setMainState(3);
    }
}

void PatternEditorMenu::updateBarTransition()
{
    if (unk_5004.stepPress()) {
        if (unk_1a0.getAnim()) {
            s32 a = unk_5004.getPressOffset();
            s32 b = unk_5004.getTargetX(-1);
            s32 c = unk_5004.getTargetY(-1);
            unk_1a0.warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void PatternEditorMenu::startTouchInput()
{
    setMainState(0);
    hideCursor();
}

void PatternEditorMenu::startButtonInput()
{
    if (unk_ac == 2) {
        hideCursor();
        initKeyRepeat(5, 0, 5);
        setMainState(4);
        Snd_SetPanIfChanged((u8)canvasToScreenX(unk_af));
    } else {
        showCursor();
        restartKeyRepeat();
        setMainState(3);
    }
}

void PatternEditorMenu::resumeInput()
{
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void PatternEditorMenu::startConfirmTouch()
{
    hideCursor();
    setMainState(1);
}

void PatternEditorMenu::startConfirmButtons()
{
    restartKeyRepeat();
    unk_aa = 0x20;
    showCursor();
    setMainState(8);
}

void PatternEditorMenu::resumeConfirmInput()
{
    if (MenuCtrl_IsTouch()) {
        startConfirmTouch();
    } else {
        startConfirmButtons();
    }
}

void PatternEditorMenu::askSave()
{
    Snd_PlaySe(0x29);
    clearFlags(8);
    if (unk_ac == 2) {
        unk_ac = 0;
    }
    startBarTransition(6, 9);
}

void PatternEditorMenu::askQuit()
{
    Snd_PlaySe(0x2a);
    setFlags(8);
    if (unk_ac == 2) {
        unk_ac = 0;
    }
    startBarTransition(6, 8);
}

void PatternEditorMenu::startBarTransition(u8 a, u8 b)
{
    setTransitionState(a);
    unk_5004.setSelected(b);
    setMainState(0xc);
}

void PatternEditorMenu::loadFromPlayerPattern()
{
    void *b = _ZN10PlayerData11getPatternsEv(PlayerData_GetCurrent());
    void *d = _ZN14PlayerPatterns17getPatternByOrderEj(b, MenuCtrl_GetIndex());
    MIi_CpuCopy32(_ZN7Pattern9getPixelsEv(d), unk_a04, 0x200);
    MIi_CpuCopy32(_ZN7Pattern9getPixelsEv(d), unk_c04, 0x200);
    u8 r = _ZN11PatternInfo10getPaletteEv(_ZN7Pattern7getInfoEv(d));
    setPalette(r);
}

void PatternEditorMenu::saveToPlayerPattern()
{
    void *a = PlayerData_GetCurrent();
    void *b = _ZN10PlayerData11getPatternsEv(a);
    void *c = MenuCtrl_GetIndex();
    void *d = _ZN14PlayerPatterns17getPatternByOrderEj(b, c);
    _ZN7Pattern9setPixelsEPv(d, getCanvas());
    _ZN11PatternInfo24setAuthorToCurrentPlayerEv(_ZN7Pattern7getInfoEv(d));
    _ZN11PatternInfo10setPaletteEj(_ZN7Pattern7getInfoEv(d), unk_a1);
    s32 e = _ZN12PatternOrder7getSlotEj(_ZN14PlayerPatterns15getPatternOrderEv(b), c);
    u16 *p = _ZN10PlayerData8getShirtEv(a);
    s32 r;
    if (R1(p, 0x12a8, 0x12af)) {
        r = *p - 0x12a8;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        setFlags(0x8000);
    }
    p = _ZN10PlayerData6getHatEv(a);
    if (R1(p, 0x1429, 0x1430)) {
        r = *p - 0x1429;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        setFlags(0x10000);
    }
}

void PatternEditorMenu::loadFromExternalPattern()
{
    void *o = _ZN16BlancaFaceRecord10getPatternEv(&gSaveBlancaFace);
    MIi_CpuCopy32(_ZN7Pattern9getPixelsEv(o), unk_a04, 0x200);
    MIi_CpuCopy32(_ZN7Pattern9getPixelsEv(o), unk_c04, 0x200);
    u8 r = _ZN11PatternInfo10getPaletteEv(_ZN7Pattern7getInfoEv(o));
    setPalette(r);
}

void PatternEditorMenu::saveToExternalPattern()
{
    void *o = _ZN16BlancaFaceRecord10getPatternEv(&gSaveBlancaFace);
    _ZN7Pattern9setPixelsEPv(o, getCanvas());
    _ZN11PatternInfo24setAuthorToCurrentPlayerEv(_ZN7Pattern7getInfoEv(o));
    _ZN11PatternInfo10setPaletteEj(_ZN7Pattern7getInfoEv(o), unk_a1);
}

void PatternEditorMenu::buildPreviewChars()
{
    Gfx2d_LinearToTiles4bpp(getCanvas(), unk_2e04, 4, 4);
}

void PatternEditorMenu::loadPreviewChars()
{
    Gfx2d_LoadCharRange(unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void PatternEditorMenu::requestPreviewUpload()
{
    _ZN10BgVramTask12requestCharsEjhjjj(unk_f8, unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void PatternEditorMenu::buildCanvasChars()
{
    u32 sh, lo, v;
    u32 *src = (u32 *)getCanvas();
    u32 *dst = (u32 *)unk_e04;
    s32 j, i, k, m;
    i = 0;
Li:
    {
        u32 *d2 = dst;
        for (j = 0; j < 4; j++) {
            sh = 0;
            u32 *d3 = d2;
            for (k = 0; k < 4; k++) {
                u32 w = *src;
                lo = (u8)((w >> sh) & 0xf);
                u32 hi = (u8)((w >> (sh + 4)) & 0xf);
                sh += 8;
                v = lo | ((lo << 4) | ((lo << 8) | ((lo << 12) | ((hi << 16) | ((hi << 20) | ((hi << 28) | (hi << 24)))))));
                u32 *p = d3;
                for (m = 0; m < 4; m++) {
                    *p = v;
                    p += 0x10;
                }
                d3++;
            }
            src++;
            d2 += 4;
        }
        dst += 0x40;
    }
    i++;
    if (i < 0x20) goto Li;
    Gfx2d_LinearToTiles4bpp(unk_e04, unk_3004, 0x10, 0x10);
}

void PatternEditorMenu::loadCanvasChars()
{
    Gfx2d_LoadCharRange(unk_3004, 6, 0x20, 0x20, 0x11f);
}

void PatternEditorMenu::requestCanvasUpload()
{
    _ZN10BgVramTask12requestCharsEjhjjj((u8 *)this + 0x130, unk_3004, 6, 0x20, 0x20, 0x11f);
}

void PatternEditorMenu::flushCanvasGfx()
{
    if (testFlags(0x40)) {
        buildPreviewChars();
        buildCanvasChars();
        requestPreviewUpload();
        requestCanvasUpload();
        clearFlags(0x40);
    }
}

void PatternEditorMenu::requestPaletteUpload()
{
    void *a = PatternTexCache_Get();
    void *b = _ZN15PatternTexCache10getPaletteEi(a, unk_a1);
    _ZN10BgVramTask14requestPaletteEjhj(unk_f8, b, 6, 0xe);
}

void PatternEditorMenu::setColor(u8 v)
{
    unk_a2 = v;
    unk_a3 = (v - 1) * 12;
}

void PatternEditorMenu::setPalette(u8 a) {
    u8 buf[5];
    unk_a1 = a;
    requestPaletteUpload();
    if (a < 9) {
        buf[0] = 0x85;
    } else {
        buf[0] = 0x36;
    }
    buf[1] = (a + 1) % 10 + 0x35;
    buf[2] = 0;
    String_FromEncodedBytes(unk_b8, buf, 5);
    unk_b8[0].createSmallLabel(8, 0x128, 2, 6, 0, 1);
    unk_b8[0].redrawAligned(0, 0);
}

u8 PatternEditorMenu::hitTest(s32 x, s32 y) {
    if (unk_5004.hitTest(9, x, y)) {
        return 0x1d;
    }
    if (unk_5004.hitTest(8, x, y)) {
        return 0x1e;
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x18 && y <= 0x38) {
        return 0xd;
    }
    if (x >= 0x40 && x < 0xc0 && y >= 0x8 && y < 0x88) {
        return 0x21;
    }
    if (x >= 0xca && y >= 0x8) {
        if (x < 0xe1) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 0;
                }
                if (y < 0x38) {
                    return 1;
                }
                return 2;
            }
            if (y >= 0x58 && y < 0x88) {
                if (y < 0x70) {
                    return 3;
                }
                return 4;
            }
            if (y >= 0x90 && y < 0xa8) {
                return 5;
            }
        } else if (x < 0xf9) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 6;
                }
                if (y < 0x38) {
                    return 7;
                }
                return 8;
            }
            if (y >= 0x58 && y < 0xa0) {
                if (y < 0x70) {
                    return 9;
                }
                if (y < 0x88) {
                    return 10;
                }
                return 11;
            }
        }
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x80 && y <= 0x94) {
        return 12;
    }
    if (x >= 0x8 && x < 0xbc && y >= 0x94 && y <= 0xa4) {
        return (u8)((x - 8) / 12 + 14);
    }
    return 0x22;
}

u8 PatternEditorMenu::hitTestTouch() { return hitTest(gTouchCurX, gTouchCurY); }

void PatternEditorMenu::activateButton() {
    u32 s = unk_a5;
    if (s == 0x1d) {
        askSave();
    } else if (s == 0x1e) {
        askQuit();
    } else if (s <= 0xb && s != 5) {
        selectTool(s);
    } else if (s == 0xc) {
        flashButton(s);
        setPalette((unk_a1 + 1) & 0xf);
        Snd_PlaySe(0x868);
    } else if (s == 5) {
        flashButton(s);
        toggleUndo();
    } else if (s >= 0xe && s <= 0x1c) {
        setColor(s - 0xd);
        Snd_PlaySe(0x86a);
    } else {
        if (s == 0xd) {
            toggleGrid();
        }
        u32 t = unk_a5;
        if (t == 0x1f) {
            startBarTransition(2, 3);
            if (testFlags(8)) {
                MenuCtrl_SetResult(0);
                Snd_PlaySe(0x28);
            } else {
                switch (MenuCtrl_GetMode()) {
                case 2:
                    saveToPlayerPattern();
                    break;
                case 3:
                    saveToExternalPattern();
                    break;
                }
                MenuCtrl_SetResult(1);
                Snd_PlaySe(0x27);
            }
        } else if (t == 0x20) {
            startBarTransition(9, 4);
            if (testFlags(8)) {
                unk_aa = 0x1e;
                Snd_PlaySe(0x29);
            } else {
                unk_aa = 0x1d;
                Snd_PlaySe(0x2a);
            }
        }
    }
}

s32 PatternEditorMenu::canvasToScreenX(s32 i) { return i * 4 + 0x42; }

s32 PatternEditorMenu::canvasToScreenY(s32 i) { return i * 4 + 10; }

void PatternEditorMenu::setCanvasPosFromTouch() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY + 16;
    if (unk_a4 == 1) {
        x += 2;
        y += 2;
    }
    x -= 0x40;
    if (x < 0) {
        x = 0;
    } else if (x > 0x7f) {
        x = 0x7f;
    }
    y -= 0x18;
    if (y < 0) {
        y = 0;
    } else if (y > 0x7f) {
        y = 0x7f;
    }
    unk_a8 = x >> 2;
    unk_a9 = y >> 2;
}

u32 PatternEditorMenu::setPixel(u8 x, u8 y, u32 c) {
    if (x >= 32 || y >= 32) {
        return 0;
    }
    u32 *g = (u32 *)getCanvas();
    u32 sh = (x & 7) << 2;
    u32 *row = g;
    row += y * 4;
    u32 *p = &row[x >> 3];
    u32 mask = 0xf << sh;
    u32 w = row[x >> 3];
    u32 cur = (u8)(((w & mask) >> sh) & 0xf);
    if (cur == c) {
        return 0;
    }
    *p = w & ~mask;
    *p = *p | (c << sh);
    return 1;
}

u32 PatternEditorMenu::plotBrush(u8 x, u8 y, u32 c, s32 t, s32 z) {
    u32 r = 0;
    if (t < 0 || t > 3) {
        return 0;
    }
    switch (t) {
    case 0:
        r |= setPixel(x, y, c);
        break;
    case 1: {
        r |= setPixel(x, y, c);
        s32 xm = x - 1;
        r |= setPixel(xm, y, c);
        s32 ym = y - 1;
        r |= setPixel(x, ym, c);
        r |= setPixel(xm, ym, c);
        break;
    }
    case 2: {
        s32 ym = y - 1;
        s32 xm = x - 1;
        r |= setPixel(xm, ym, c);
        r |= setPixel(x, ym, c);
        s32 xp = x + 1;
        r |= setPixel(xp, ym, c);
        r |= setPixel(xm, y, c);
        r |= setPixel(x, y, c);
        r |= setPixel(xp, y, c);
        s32 yp = y + 1;
        r |= setPixel(xm, yp, c);
        r |= setPixel(x, yp, c);
        r |= setPixel(xp, yp, c);
        break;
    }
    case 3:
        drawPreviewDot(x, y);
        break;
    }
    return r;
}

u32 PatternEditorMenu::drawLine(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t) {
    u32 dx, dy;
    s32 err1;
    s32 sx, sy;
    s32 i1;
    u32 r;
    s32 dx2b;
    s32 dy2b;
    s32 dy2;
    s32 dx2;
    s32 err2;
    s32 i2;
    s32 z1, z2;
    r = 0;
    if (x1 > x0) {
        sx = 1;
        dx = x1 - x0;
    } else {
        sx = -1;
        dx = x0 - x1;
    }
    if (y1 > y0) {
        sy = 1;
        dy = y1 - y0;
    } else {
        sy = -1;
        dy = y0 - y1;
    }
    if ((s32)dx >= (s32)dy) {
        err1 = -(s32)dx;
        i1 = 0;
        z1 = i1;
        dy2 = dy << 1;
        dx2 = dx << 1;
        for (; i1 <= (s32)dx; i1++) {
            r |= plotBrush(x0, y0, c, t, z1);
            x0 += sx;
            err1 += dy2;
            if (err1 >= 0) {
                y0 += sy;
                err1 -= dx2;
            }
        }
    } else {
        err2 = -(s32)dy;
        i2 = 0;
        z2 = i2;
        dx2b = dx << 1;
        dy2b = dy << 1;
        for (; i2 <= (s32)dy; i2++) {
            r |= plotBrush(x0, y0, c, t, z2);
            y0 += sy;
            err2 += dx2b;
            if (err2 >= 0) {
                x0 += sx;
                err2 -= dy2b;
            }
        }
    }
    return r;
}

void PatternEditorMenu::drawRect(u8 x0, u8 y0, u8 x1, u8 y1, u32 c) {
    u8 x;
    for (x = x0; x <= x1; x++) {
        setPixel(x, y0, c);
        setPixel(x, y1, c);
    }
    u8 y;
    for (y = y0; y <= y1; y++) {
        setPixel(x0, y, c);
        setPixel(x1, y, c);
    }
}

void PatternEditorMenu::drawEllipse(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill) {
    s32 w;
    s32 cx;
    s16 i;
    s32 cy;
    s32 hw;
    s32 hh;
    s32 d;
    s32 a;
    s32 b;
    s32 step;
    s32 df;
    s32 sum;
    w = x1 - x0;
    d = y1 - y0;
    hw = w >> 1;
    hh = d >> 1;
    cx = x0 + hw;
    cy = y0 + hh;
    df = hw - hh;
    if (df < 0) {
        df = -df;
    }
    sum = hw + hh;
    step = 0x40 / (s16)(sum - ((sum >> 1) - (sum >> 3) - (df >> 1) - 5) | 1);
    d &= 1;
    w &= 1;
    for (i = 0; i < 0x40; i = i + step) {
        a = (((u16 *)sPatternEditorSineTable)[i + 0x40] * hw + 0x2d) >> 8;
        b = (((u16 *)sPatternEditorSineTable)[i] * hh + 0x2d) >> 8;
        if (fill) {
            s32 x = cx - a;
            s32 ya = cy - b;
            s32 yb = cy + b + d;
            s32 xe = cx + a + w;
            for (; x <= xe; x++) {
                setPixel(x, ya, c);
                setPixel(x, yb, c);
            }
        } else {
            s32 yb, xl, xr, yt;
            xr = cx + a + w;
            yb = cy + b + d;
            setPixel(xr, yb, c);
            yt = cy - b;
            setPixel(xr, yt, c);
            xl = cx - a;
            setPixel(xl, yb, c);
            setPixel(xl, yt, c);
        }
    }
}

void PatternEditorMenu::fillCanvas(s32 v) {
    u32 *p = (u32 *)getCanvas();
    u32 t = v * 0x11111111;
    s32 i;
    for (i = 0; i < 32; i++) {
        p[0] = t;
        p[1] = t;
        p[2] = t;
        p[3] = t;
        p += 4;
    }
}

void PatternEditorMenu::fillWithMask(u32 c) {
    u32 *p = (u32 *)getCanvas();
    s32 j, i;
    for (j = 0; j < 2; j++) {
        u32 *t = (u32 *)sFillMask;
        for (i = 0; i < 16; i++) {
            p[0] = blendMasked(p[0], t[0], c);
            p[1] = blendMasked(p[1], t[1], c);
            p[2] = blendMasked(p[2], t[0], c);
            p[3] = blendMasked(p[3], t[1], c);
            p += 4;
            t += 2;
        }
    }
}

u8 PatternEditorMenu::getPixel(u8 x, u8 y) {
    if (x >= 32 || y >= 32) {
        return 1;
    }
    u8 *row = (u8 *)getCanvas() + (y << 4);
    return (u8)((*(u32 *)(row + (((s32)x >> 3) << 2)) >> ((x & 7) << 2)) & 0xf);
}

s32 PatternEditorMenu::findColorInSpan(s32 x0, s32 x1, s32 y, s32 v) {
    s32 x = x0;
    u32 *p = (u32 *)((u8 *)getCanvas() + (y << 4)) + (x >> 3);
    s32 sh = (x & 7) << 2;
    for (; x <= x1; x++) {
        if (v == (u8)((*p >> sh) & 0xf)) {
            return x;
        }
        sh += 4;
        if (sh >= 32) {
            sh = 0;
            p++;
        }
    }
    return -1;
}

s32 PatternEditorMenu::findSpanStart(s32 x, s32 y, s32 v) {
    if (x <= 0) {
        return 0;
    }
    s32 i = x - 1;
    u32 *p = (u32 *)((u8 *)getCanvas() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i >= 0; i--) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i + 1;
        }
        sh -= 4;
        if (sh < 0) {
            sh = 28;
            p--;
        }
    }
    return 0;
}

s32 PatternEditorMenu::findSpanEnd(s32 x, s32 y, s32 v) {
    if (x >= 31) {
        return 31;
    }
    s32 i = x + 1;
    u32 *p = (u32 *)((u8 *)getCanvas() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i <= 31; i++) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i - 1;
        }
        sh += 4;
        if (sh > 28) {
            sh = 0;
            p++;
        }
    }
    return 31;
}extern "C" void *sPatternEditorToolCursors[12] = {data_ov123_0229594c, data_ov123_0229593c, data_ov123_0229595c, data_ov123_02295858, data_ov123_022958b8, 0, &data_ov123_022958c0, &data_ov123_022958c0, data_ov123_02295850, data_ov123_02295800, data_ov123_02295800, data_ov123_02295800};

void PatternEditorMenu::floodFill(u8 x, u8 y, u32 tgt) {
    u32 cur;
    s32 head;
    s32 i;
    s32 ym;
    s32 b;
    u32 m;
    s32 left;
    getCanvas();
    cur = getPixel(x, y);
    if (cur != tgt) {
        static Unk_ov123_02293010_Q q[64];
        s32 tail;
        head = 0;
        tail = 1;
        q[0].a = x;
        q[0].b = x;
        q[0].c = y;
        m = *(const u32 *)(sPatternEditorSineTable + 0x140);
        do {
            s32 a = q[head].a;
            b = q[head].b;
            s32 yy = q[head].c;
            head = (head + 1) & m;
            if (tgt != getPixel(a, yy)) {
                left = findSpanStart(a, yy, cur);
                s32 right = findSpanEnd(b, yy, cur);
                for (i = left; i <= right; i++) {
                    setPixel(i, yy, tgt);
                }
                if (yy > 0) {
                    s32 xs = left;
                    ym = yy - 1;
                    do {
                        s32 t = findColorInSpan(xs, right, ym, cur);
                        if (t < 0) {
                            xs = 0xff;
                        } else {
                            s32 r = findSpanEnd(t, ym, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = ym;
                            tail = (tail + 1) & m;
                            xs = r + 2;
                        }
                    } while (xs <= right);
                }
                if (yy < 0x1f) {
                    s32 y1 = yy + 1;
                    do {
                        s32 t = findColorInSpan(left, right, y1, cur);
                        if (t < 0) {
                            left = 0xff;
                        } else {
                            s32 r = findSpanEnd(t, y1, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = y1;
                            tail = (tail + 1) & m;
                            left = r + 2;
                        }
                    } while (left <= right);
                }
            }
        } while (head != tail);
    }
}

u32 PatternEditorMenu::blendMasked(u32 v, u32 s, u32 t) {
    return (v & ~(s * 15)) | (s * t);
}

void PatternEditorMenu::drawStamp(s32 x, s32 y, u32 a, u32 idx) {
    s32 yy;
    s32 xx;
    u16 *p;
    s32 j;
    u32 mask;
    s32 i;
    s32 xs;
    yy = y - 8;
    p = sStampBitmaps[idx];
    j = 0;
    xs = x - 7;
    for (; j < 16; p++, yy++, j++) {
        mask = 0x8000;
        xx = xs;
        for (i = 0; i < 16; xx++, i++) {
            if ((mask & *p) != 0) {
                setPixel(xx, yy, a);
            }
            mask = (mask << 15) >> 16;
        }
    }
}

void PatternEditorMenu::applyToolAt(u8 x, u8 y) {
    u32 st = unk_a4;
    if (st <= 2) {
        plotBrush(x, y, unk_a2, st, 1);
    } else if (st >= 3 && st <= 4) {
        drawStamp(x, y, unk_a2, st - 3);
        Snd_PlaySe(0x867);
    } else {
        if (st >= 9 && st <= 0xb) {
            Snd_PlaySe(0x867);
        }
        switch (unk_a4) {
        case 9:
            floodFill(x, y, unk_a2);
            break;
        case 0xb:
            fillCanvas(unk_a2);
            break;
        case 0xa:
            fillWithMask(unk_a2);
            break;
        }
    }
}

void PatternEditorMenu::useToolAtTouch() {
    setCanvasPosFromTouch();
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        startShape();
        startStylusStroke();
    } else {
        saveUndoState();
        applyToolAt(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            Snd_PlaySe(0x85f);
            Snd_PlaySe(0x861);
            setFlags(0x1000);
        }
        startStylusStroke();
        setFlags(0x40);
    }
}

void PatternEditorMenu::useToolAtCursor() {
    unk_a8 = unk_af;
    unk_a9 = unk_b0;
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        startShape();
        setMainState(6);
    } else {
        saveUndoState();
        applyToolAt(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            Snd_PlaySe(0x85f);
            Snd_PlaySe(0x861);
            setMainState(5);
        }
        setFlags(0x40);
    }
}

void PatternEditorMenu::drawPendingShape() {
    if (testFlags(0x100)) {
        if (unk_a4 >= 6 && unk_a4 <= 8) {
            u8 xa, yhi, xb, yb, xlo, xhi, ylo, ya;
            saveUndoState();
            xa = unk_a8;
            xb = unk_ad;
            if (xb >= xa) {
                xlo = xa;
                xhi = xb;
            } else {
                xhi = xa;
                xlo = xb;
            }
            ya = unk_a9;
            yb = unk_ae;
            if (yb >= ya) {
                ylo = ya;
                yhi = yb;
            } else {
                yhi = ya;
                ylo = yb;
            }
            switch (unk_a4) {
            case 8:
                drawLine(xb, yb, xa, ya, unk_a2, 0);
                break;
            case 6:
                drawRect(xlo, ylo, xhi, yhi, unk_a2);
                break;
            case 7:
                drawEllipse(xlo, ylo, xhi, yhi, unk_a2, 0);
                break;
            }
            setFlags(0x40);
            Snd_PlaySe(0x867);
        }
    }
}

void PatternEditorMenu::pickColorAtCursor() {
    setColor(getPixel(unk_af, unk_b0));
}

void PatternEditorMenu::setButtonPalette(u32 a, u32 b) {
    if (a <= 0xc) {
        u32 t = sPatternEditorButtonTileY[a];
        BgScreen_SetRectPalette(&unk_204, sPatternEditorButtonTileX0[a], t, sPatternEditorButtonTileX1[a], t + 2, b);
        setFlags(0x10);
    }
}

void PatternEditorMenu::flushButtonScreen() {
    if (testFlags(0x10)) {
        if (_ZN10BgVramTask13requestScreenEjhjj(&unk_f8[2], &unk_204, 6, 0x800, 0)) {
            clearFlags(0x10);
        }
    }
}

void PatternEditorMenu::selectTool(u32 v) {
    if (unk_a4 != v) {
        if (unk_a4 != 0x22) {
            setButtonPalette(unk_a4, 4);
            Snd_PlaySe(0xb);
        }
        unk_a4 = v;
        setButtonPalette(unk_a4, 5);
    }
}

void PatternEditorMenu::flashButton(u32 v) {
    stopButtonFlash();
    unk_a6 = v;
    unk_a7 = 4;
    setButtonPalette(unk_a6, 5);
}

void PatternEditorMenu::stopButtonFlash() {
    setButtonPalette(unk_a6, 4);
    unk_a6 = 0x22;
    unk_a7 = 0;
}

void PatternEditorMenu::updateButtonFlash() {
    if (unk_a7 != 0) {
        unk_a7 = unk_a7 - 1;
        if (unk_a7 == 0) {
            stopButtonFlash();
        }
    }
}

void PatternEditorMenu::resetPaletteLabel() {
    unk_b8[0].destroyLabel();
}

void PatternEditorMenu::drawShapeCorner(s32 x, s32 y, u32 i) {
    s32 a = canvasToScreenX(x);
    s32 b = canvasToScreenY(y);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= data_ov123_02295840[i];
    data_ov123_022958c0.b = t;
    Oam_DrawObj(1, &data_ov123_022958c0, a, b, -1, -1, 0);
}

void PatternEditorMenu::drawPreviewDot(s32 x, s32 y) {
    s32 a = canvasToScreenX(x);
    s32 b = canvasToScreenY(y);
    Oam_DrawObj(1, data_ov123_022958a8, a, b, -1, -1, 0);
}

void PatternEditorMenu::drawCanvasCursor(s32 x, s32 y) {
    s32 a = canvasToScreenX(x);
    s32 b = canvasToScreenY(y);
    void *p = sPatternEditorToolCursors[unk_a4];
    if (testFlags(0x800)) {
        p = data_ov123_02295830;
    }
    if (unk_a4 == 1) {
        a -= 2;
        b -= 2;
    }
    if (p != NULL) {
        Oam_DrawCell(1, p, a, b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void PatternEditorMenu::drawLineEndMarker(s32 x, s32 y) {
    s32 a = canvasToScreenX(x);
    s32 b = canvasToScreenY(y);
    Oam_DrawObj(1, data_ov123_02295850, a, b, -1, -1, 0);
}

void PatternEditorMenu::drawShapePreview() {
    if (unk_a4 == 8) {
        drawLineEndMarker(unk_a8, unk_a9);
        drawLineEndMarker(unk_ad, unk_ae);
        drawLine(unk_a8, unk_a9, unk_ad, unk_ae, 1, 3);
    } else {
        u8 xlo = unk_ad;
        u8 xa = unk_a8;
        u8 xhi;
        u32 cx0, cx1;
        if (xa >= xlo) {
            cx1 = 2;
            cx0 = 0;
            xhi = xa;
        } else {
            cx1 = 0;
            cx0 = 2;
            xhi = xlo;
            xlo = xa;
        }
        u8 ylo = unk_ae;
        u8 ya = unk_a9;
        u8 yhi;
        if (ya >= ylo) {
            cx0 = cx0 + 1;
            yhi = ya;
        } else {
            cx1 = cx1 + 1;
            yhi = ylo;
            ylo = ya;
        }
        drawShapeCorner(xa, ya, cx0);
        drawShapeCorner(unk_ad, unk_ae, cx1);
        u8 i = xlo;
        for (; i <= xhi; i = i + 2) {
            drawPreviewDot(i, ylo);
        }
        if (ylo != yhi) {
            i = xlo;
            if (((yhi - ylo) & 1) != 0) {
                i = xlo + 1;
            }
            for (; i <= xhi; i = i + 2) {
                drawPreviewDot(i, yhi);
            }
        }
        u32 t = ylo + 2;
        u8 j = t;
        for (; j < yhi; j = j + 2) {
            drawPreviewDot(xlo, j);
        }
        if (xlo != xhi) {
            j = t;
            if (((xhi - xlo) & 1) != 0) {
                j = j - 1;
            }
            for (; j < yhi; j = j + 2) {
                drawPreviewDot(xhi, j);
            }
        }
    }
}

void PatternEditorMenu::startShape() {
    Snd_PlaySe(0x866);
    setFlags(0x100);
    unk_ad = unk_a8;
    unk_ae = unk_a9;
}

void PatternEditorMenu::resetShapeDrag() {
    clearFlags(0x100);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= 8;
    data_ov123_022958c0.b = t;
}

void PatternEditorMenu::endShapeAndResume() {
    drawPendingShape();
    resetShapeDrag();
    resumeInput();
}

void PatternEditorMenu::cancelVramTasks() {
    s32 i;
    for (i = 0; i < 3; i++) {
        _ZN10BgVramTask6cancelEv(&unk_f8[i]);
    }
}

void PatternEditorMenu::saveUndoState() {
    clearFlags(0x4000);
    if (testFlags(0x80)) {
        MIi_CpuCopy32(unk_a04, unk_c04, 0x200);
        clearFlags(0x80);
    } else {
        MIi_CpuCopy32(unk_c04, unk_a04, 0x200);
        setFlags(0x80);
    }
}

void PatternEditorMenu::toggleUndo() {
    if (testFlags(0x80)) {
        clearFlags(0x80);
    } else {
        setFlags(0x80);
    }
    if (testFlags(0x4000)) {
        Snd_PlaySe(0x86c);
        clearFlags(0x4000);
    } else {
        Snd_PlaySe(0x86b);
        setFlags(0x4000);
    }
    setFlags(0x40);
}

u8 *PatternEditorMenu::getCanvas() {
    if (testFlags(0x80)) {
        return unk_a04;
    }
    return unk_c04;
}

void PatternEditorMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_1a0.warpTo(a, b);
    if ((u8)(unk_aa + 0xe3) <= 1) {
        ((MenuCursor *)&unk_1a0)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_1a0)->setAnimIfChanged(1);
    }
    refreshCursor();
}

u32 PatternEditorMenu::getCursorTargetX() { return sPatternEditorCursorX[unk_aa]; }

u32 PatternEditorMenu::getCursorTargetY() { return sPatternEditorCursorY[unk_aa]; }

void PatternEditorMenu::hideCursor() {
    ((MenuCursor *)&unk_1a0)->setAnimIfChanged(0);
    unk_1a0.vfunc_0c();
}

// small helpers last so they are not inlined into callers

void PatternEditorMenu::refreshCursor() {
    unk_1a0.setPoseIdle();
    unk_1a0.vfunc_0c();
}

void PatternEditorMenu::pressCursor() {
    ((MenuCursor *)&unk_1a0)->setPosePress();
    setMainState(0xa);
}

void PatternEditorMenu::releaseCursor() {
    unk_1a0.setPoseRelease();
    setMainState(0xb);
}

void PatternEditorMenu::moveCursorToTarget() {
    if ((u8)(unk_aa + 0xe3) <= 1) {
        ((MenuCursor *)&unk_1a0)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_1a0)->switchToAnim01();
    }
    if (testFlags(0x200)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_1a0.warpTo(a, b);
        clearFlags(0x200);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_1a0.moveToEase(a, b, 3, 1);
        unk_a0 = mainState;
        setMainState(9);
    }
}

BOOL PatternEditorMenu::moveCursorByPad(void *pad) {
    if (pad == NULL) {
        return FALSE;
    }
    u32 old = unk_aa;
    if (MenuKeys_HasUp(pad)) {
        if (unk_aa != 0x1d) {
            if (unk_aa == 0x1e) {
                if (unk_ac == 0) {
                    unk_aa = 5;
                } else {
                    unk_aa = 0x16;
                }
                return TRUE;
            }
        } else {
            if (unk_ac == 0) {
                unk_aa = 5;
            } else {
                unk_aa = 0x1c;
            }
            return TRUE;
        }
    }
    if (MenuKeys_HasLeft(pad)) {
        unk_aa = sPatternEditorNavLeft[unk_aa];
    } else if (MenuKeys_HasRight(pad)) {
        unk_aa = sPatternEditorNavRight[unk_aa];
    }
    if (old == unk_aa || unk_aa <= 0xb) {
        if (MenuKeys_HasUp(pad)) {
            unk_aa = sPatternEditorNavUp[unk_aa];
        } else if (MenuKeys_HasDown(pad)) {
            unk_aa = sPatternEditorNavDown[unk_aa];
        }
    }
    u32 now = unk_aa;
    if (old != now) {
        if (now >= 0xe && now <= 0x1c && old >= 0xe && old <= 0x1c) {
            setFlags(0x200);
            Snd_PlaySe(0x869);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL PatternEditorMenu::moveCanvasCursor(s32 unused, s32 flag) {
    u32 cx = unk_af;
    u32 cy = unk_b0;
    u32 t0 = gPad[0];
    if (t0 & 0x20) {
        if (gPad[1] & 0x20) {
            unk_b3 = 4;
        }
        if (cx != 0) {
            cx = (u8)(cx - 1);
        }
    } else if (t0 & 0x10) {
        if (gPad[1] & 0x10) {
            unk_b3 = 4;
        }
        if (cx < 0x1f) {
            cx = (u8)(cx + 1);
        }
    }
    u32 t1 = *(volatile u16 *)&gPad[0];
    if (t1 & 0x40) {
        if (gPad[1] & 0x40) {
            unk_b3 = 4;
        }
        if (cy != 0) {
            cy = (u8)(cy - 1);
        }
    } else if (t1 & 0x80) {
        if (gPad[1] & 0x80) {
            unk_b3 = 4;
        }
        if (cy < 0x1f) {
            cy = (u8)(cy + 1);
        }
    }
    if (unk_af != cx || unk_b0 != cy) {
        u32 b3 = unk_b3;
        if (b3 == 0) {
        } else if (b3 == 4) {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
        } else {
            unk_b3 = *(volatile u8 *)&unk_b3 - 1;
            return FALSE;
        }
        unk_af = cx;
        unk_b0 = cy;
        if (flag == 0) {
            Snd_PlaySe(0x865);
        }
        Snd_SetPanIfChanged((u8)canvasToScreenX(cx));
        return TRUE;
    }
    unk_b3 = 0;
    return FALSE;
}

void PatternEditorMenu::toggleGrid() {
    if (testFlags(0x20)) {
        hideGrid();
        Snd_PlaySe(0x42);
    } else {
        showGrid();
        Snd_PlaySe(0x41);
    }
}

void PatternEditorMenu::showGrid() {
    if (!testFlags(0x20)) {
        setFlags(0x20);
        Gfx2d_ShowLayer(3);
        Gfx2d_SetSubAlphaBlend(1, 8, 12);
    }
}

void PatternEditorMenu::hideGrid() {
    if (testFlags(0x20)) {
        clearFlags(0x20);
        Gfx2d_HideLayer(3);
    }
}

BOOL PatternEditorMenu::cycleColorByShoulder() {
    u32 t = gPad[1];
    if (t & 0x200) {
        u32 v = unk_a2;
        if (v > 1) {
            setColor(v - 1);
        } else {
            setColor(0xf);
        }
        return TRUE;
    }
    if (t & 0x100) {
        u32 v = unk_a2;
        if (v < 0xf) {
            setColor(v + 1);
        } else {
            setColor(1);
        }
        return TRUE;
    }
    return FALSE;
}

void PatternEditorMenu::startStylusStroke() {
    unk_b1 = 0;
    unk_b2 = 0x22;
    setMainState(2);
    clearFlags(0x2000);
    unk_b4 = gTouchCurX;
    unk_b5 = gTouchCurY;
}

void PatternEditorMenu::updateStylusStroke() {
    u8 old_a8 = unk_a8;
    u8 old_a9 = unk_a9;
    setCanvasPosFromTouch();
    if (testFlags(0x1000)) {
        if (unk_a4 <= 2) {
            s32 cx = gTouchCurX;
            s32 cy = gTouchCurY;
            s32 bx = unk_b4;
            if (cx != bx || cy != unk_b5) {
                s32 d = bx - cx;
                if (d < 0) {
                    d = -d;
                }
                s32 by = unk_b5;
                if (by > cy) {
                    d = d + (by - cy);
                } else {
                    d = d - (by - cy);
                }
                func_02003f4c(d);
                setFlags(0x100000);
            }
            if (unk_a8 != old_a8 || unk_a9 != old_a9) {
                if (drawLine(unk_a8, unk_a9, old_a8, old_a9, unk_a2, unk_a4)) {
                    Snd_PlaySe(0x861);
                }
                setFlags(0x40);
            }
        }
    }
    u32 r = hitTestTouch();
    if ((u8)(r + 0xdf) <= 1) {
        unk_b2 = 0x22;
    } else if (testFlags(0x2000)) {
        if (r != unk_b2) {
            clearFlags(0x2000);
            unk_b1 = 0;
        }
    } else if (r == unk_b2) {
        unk_b1 = unk_b1 + 1;
        if (unk_b1 >= 0x14) {
            if (testFlags(0x80000)) {
                clearFlags(0x80000);
                clearFlags(0x100000);
                Snd_StopSe(0x862, 1);
            }
            unk_a5 = unk_b2;
            activateButton();
            resetShapeDrag();
            clearFlags(0x1000);
            setFlags(0x2000);
        }
    } else {
        unk_b2 = r;
        unk_b1 = 0;
    }
}

void PatternEditorMenu::beginScreenDim() {
    if (testFlags(0x20)) {
        hideGrid();
        setFlags(0x20000);
    }
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-6);
    unk_5004.enableObjWindow();
    Gfx2d_SetSubWin1Planes(0x1f, 0);
    Gfx2d_EnableSubWindows(2);
    Gfx2d_SetSubWin1Rect(0x40, 0x18, 0xc0, 0x98);
}

// ---------------------------------------------------------------------------------------------

void PatternEditorMenu::endScreenDim() {
    Gfx2d_EndSubObjWinBrightness();
    unk_5004.disableObjWindow();
    Gfx2d_DisableSubWindows(2);
}

BOOL PatternEditorMenu::testFlags(u32 mask) {
    if (unk_9c & mask) {
        return TRUE;
    }
    return FALSE;
}

void PatternEditorMenu::setFlags(u32 mask) { unk_9c = unk_9c | mask; }

void PatternEditorMenu::clearFlags(u32 mask) { unk_9c = unk_9c & ~mask; }

