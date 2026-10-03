// ov121: scene overlay (class DesignTab, vtable 0x02294d68, size 0x107c). Linked unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

#define func_020624c0 _ZN18EncodedString16BufD1Ev
#define func_02062510 _ZN18EncodedString16BufC1Ev
#define func_02071c1c _ZN12Unk_02071c1c13func_02071c1cEj
#define func_02071c2c _ZN12Unk_02071c1c13func_02071c2cEjj
#define func_02071c5c _ZN14PlayerPatterns13func_02071c5cEv
#define func_02071c68 _ZN14PlayerPatterns13func_02071c68Ej
#define func_02071e04 _ZN7Pattern13func_02071e04Ev
#define func_02071e58 _ZN7Pattern13func_02071e58Ev
#define func_02071f5c _ZN12Unk_02071ed013func_02071f5cEP18EncodedString16Buf
#define func_02072040 _ZN12Unk_02071ed013func_02072040Ev
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define LabelBalloon_setText _ZN12LabelBalloon7setTextEP6StrBuf
#define LabelBalloon_setPos _ZN12LabelBalloon6setPosEii
#define func_02089f30 _ZN12Unk_020e0d80D1Ev
#define func_02089f44 _ZN12Unk_020e0d80C1Ev
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define HandCursor_setAnimAtEnd _ZN10HandCursor12setAnimAtEndEi
#define func_020983cc _ZN12Unk_02097ff413func_020983ccEv
#define func_020986d4 _ZN10PlayerData13func_020986d4Ev
#define PlayerData_setHat _ZN10PlayerData6setHatEPt
#define PlayerData_getHat _ZN10PlayerData6getHatEv
#define PlayerData_setShirt _ZN10PlayerData8setShirtEPt
#define PlayerData_getShirt _ZN10PlayerData8getShirtEv
#define PlayerData_getHeldItem _ZN10PlayerData11getHeldItemEv
#define PlayerData_getIndex _ZN10PlayerData8getIndexEv
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define TouchPromptBalloon_setAutoCloseTimer _ZN18TouchPromptBalloon17setAutoCloseTimerEh
#define TouchPromptBalloon_cancelQueuedOpen _ZN18TouchPromptBalloon16cancelQueuedOpenEv
#define TouchPromptBalloon_queueOpen _ZN18TouchPromptBalloon9queueOpenEv
#define TouchPromptBalloon_commitOpen _ZN18TouchPromptBalloon10commitOpenEv
#define TouchPromptBalloon_hide _ZN18TouchPromptBalloon4hideEi
#define TouchPromptBalloon_updatePrompt _ZN18TouchPromptBalloon12updatePromptEv
#define PopupChoiceMenuBody_getRowY _ZN19PopupChoiceMenuBody7getRowYEi
#define PopupChoiceMenuBody_getRowX _ZN19PopupChoiceMenuBody7getRowXEv
#define PopupChoiceMenuBody_hitTestRowOrLast _ZN19PopupChoiceMenuBody16hitTestRowOrLastEii
#define PopupChoiceMenuBody_setRowsFromIds _ZN19PopupChoiceMenuBody14setRowsFromIdsEP17PopupChoiceIdListi
#define PopupChoiceMenuBody_isClosed _ZN19PopupChoiceMenuBody8isClosedEv
#define PopupChoiceMenuBody_isOpen _ZN19PopupChoiceMenuBody6isOpenEv
#define PopupChoiceMenu_placeAt _ZN15PopupChoiceMenu7placeAtEii
#define PopupChoiceMenu_init _ZN15PopupChoiceMenu4initEiiPKc
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv
#define MenuCursorBase_getScreenX _ZN14MenuCursorBase10getScreenXEv
#define MenuCursorBase_getFrameScreenY _ZN14MenuCursorBase15getFrameScreenYEv
#define MenuCursorBase_getFrameScreenX _ZN14MenuCursorBase15getFrameScreenXEv
#define MenuCursorBase_isMoving _ZN14MenuCursorBase8isMovingEv
#define func_ov002_02202928 _ZN14MenuCursorBase19func_ov002_02202928Ev
#define MenuCursorBase_moveToEase _ZN14MenuCursorBase10moveToEaseEiiii
#define MenuCursorBase_moveToLinear _ZN14MenuCursorBase12moveToLinearEiii
#define MenuCursorBase_warpTo _ZN14MenuCursorBase6warpToEii
#define MenuCursorBase_setPoseIdle _ZN14MenuCursorBase11setPoseIdleEv
#define MenuCursorBase_setPoseRelease _ZN14MenuCursorBase14setPoseReleaseEv
#define MenuCursor_setPosePress _ZN10MenuCursor12setPosePressEv
#define MenuCursor_switchToAnim0D _ZN10MenuCursor14switchToAnim0DEv
#define MenuCursor_switchToAnim01 _ZN10MenuCursor14switchToAnim01Ev
#define MenuCursor_setAnimIfChanged _ZN10MenuCursor16setAnimIfChangedEi
#define MenuErrorMessage_update _ZN16MenuErrorMessage6updateEi
#define MenuErrorMessage_open _ZN16MenuErrorMessage4openEPhij
#define func_ov090_02291d2c _ZN14LetterViewMenu14execTransitionEv
#define MenuTabBar_selectTab _ZN10MenuTabBar9selectTabEj

extern "C" {
struct Unk_ov121_Comm {
    u32 unk_00[0x64 / 4];
    s32 unk_64;
};
extern Unk_ov121_Comm *gCommManager;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 data_021edb68;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 data_020e416c;
extern u16 gPad[];
extern u32 *gCurrentHeap;

// main / runtime functions that are methods of other modules' classes, called with the object first
void func_020624c0(void *p);
void func_02062510(void *p);
u32 func_02071c1c(void *p, u32 i);
void func_02071c2c(void *p, u32 a, u32 b);
void *func_02071c5c(void *p);
void *func_02071c68(void *p, u32 i);
void *func_02071e04(void *p);
s32 func_02071e58(void *p);
s32 func_02072040(void *p);
void func_02071f5c(void *p, void *q);
BOOL CommManager_isOnline(void *p);
void LabelBalloon_setText(void *p, void *q);
void LabelBalloon_setPos(void *p, s32 a, s32 b);
void func_02089f30(void *p);
void func_02089f44(void *p);
BOOL HandCursor_isAnimDone(void *p);
BOOL HandCursor_getAnim(void *p);
void HandCursor_setAnimAtEnd(void *p, s32 v);
void *func_020983cc(void *p);
void *func_020986d4(void *p);
void PlayerData_setHat(void *p, u16 *v);
u16 *PlayerData_getHat(void *p);
void PlayerData_setShirt(void *p, u16 *v);
u16 *PlayerData_getShirt(void *p);
u16 *PlayerData_getHeldItem(void *p);
s32 PlayerData_getIndex(void *p);
BOOL BgVramTask_requestScreen(void *p, void *a, u32 b, u32 c, u32 d);
void BgVramTask_cancel(void *p);

void *PlayerData_GetCurrent();
u32 func_020b0f54();
s32 func_02098ffc();
s32 func_02099014(u16 *p, u32 v);
void Snd_PlaySe(s32 id);
s32 StrBuf_GameToAscii(void *p, void *q);
s32 FieldAction_RequestDrop(u32 p, u32 a);
s32 func_020342a4(u32 a, u32 b, u32 c, u32 d);
s32 func_02034228(u32 a, u32 b, u32 c, u32 d);
s32 MenuScreen_UploadClothPattern(u16 *a, void *b, void *c, void *d);
void MI_CpuCopy8(const void *a, void *b, u32 n);
s32 Camera_IsViewPushed();
s32 Camera_PopView();
s32 Camera_PushView();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
s32 FieldAction_PollDrop(s32 h);
void FieldAction_Release(s32 h);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void *ProcBase_GetParent();
void ProcBase_RequestDelete();
void MIi_CpuCopy16(s32 a, void *b, s32 c);
void File_LoadToBuffer(const char *a, void *b, s32 c);
BOOL func_020b52f8();
void *Heap_AllocTail(void *a, s32 b);
void Heap_Free(void *a, void *b);
void Gfx2d_LinearToTilesInRow32(s32 a, void *b, s32 c, s32 d, s32 e);
void Gfx2d_LoadCharRange(void *a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadPaletteRange(void *a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
BOOL func_02094fa8();
BOOL func_02094fb4();
BOOL PlayerActor_RequestWearShirt(u16 *v);
BOOL PlayerActor_RequestWearHat(u16 *v);
BOOL PlayerActor_RequestChangeHeldItem(u16 *v);

// ov002 / ov004 / ov090 (methods reached as free functions, or plain functions)
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
u8 PopupChoice_DecideCancel(void *p, s32 v);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_LoadChoiceBg(void *p);
void PopupChoice_Close(void *p, u32 a);
void PopupChoice_Open(void *p, u32 a);
BOOL PopupChoice_TickDecideDelay(void *p);
BOOL PopupChoice_MoveCursor(void *p, s32 a, u8 *pos, u32 n);

void TouchPromptBalloon_setAutoCloseTimer(void *p, u32 a);
void TouchPromptBalloon_cancelQueuedOpen(void *p);
void TouchPromptBalloon_queueOpen(void *p);
void TouchPromptBalloon_commitOpen(void *p);
void TouchPromptBalloon_hide(void *p, s32 a);
BOOL TouchPromptBalloon_updatePrompt(void *p);
s32 PopupChoiceMenuBody_getRowY(void *p, s32 a);
s32 PopupChoiceMenuBody_getRowX(void *p);
s32 PopupChoiceMenuBody_hitTestRowOrLast(void *p, s32 a, s32 b);
void PopupChoiceMenuBody_setRowsFromIds(void *p, void *q, s32 a);
BOOL PopupChoiceMenuBody_isClosed(void *p);
BOOL PopupChoiceMenuBody_isOpen(void *p);
void PopupChoiceMenu_placeAt(void *p, s32 a, s32 b);
void PopupChoiceMenu_init(void *p, s32 a, s32 b, const char *c);
void MenuCursorBase_drawWrapped(void *p);
s32 MenuCursorBase_getScreenX(void *p);
BOOL MenuCursorBase_isMoving(void *p);
s32 MenuCursorBase_getFrameScreenY(void *p);
s32 MenuCursorBase_getFrameScreenX(void *p);
BOOL func_ov002_02202928(void *p);
void MenuCursorBase_moveToEase(void *p, s32 a, s32 b, s32 c, s32 d);
void MenuCursorBase_moveToLinear(void *p, s32 a, s32 b, s32 c);
void MenuCursorBase_warpTo(void *p, s32 a, s32 b);
void MenuCursorBase_setPoseIdle(void *p);
void MenuCursorBase_setPoseRelease(void *p);
void MenuCursor_setPosePress(void *p);
void MenuCursor_switchToAnim0D(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_setAnimIfChanged(void *p, s32 v);
BOOL MenuErrorMessage_update(void *p, s32 a);
void MenuErrorMessage_open(void *p, u8 *q, u32 a, u32 b);

s32 FtrMgr_FindPlacementMyDesignA(u32 *out, u32 a, u32 b);
s32 FtrMgr_FindPlacementMyDesignD(u32 *out, u32 a, u32 b);
s32 FtrMgr_FindPlacementMyDesignC(u32 *out, u32 a, u32 b);
s32 FtrMgr_FindPlacementMyDesignB(u32 *out, u32 a, u32 b);
s32 FtrMgr_SpawnFromArg(u32 a);
u16 *RoomShell_GetWallpaper();
u16 *RoomShell_GetCarpet();

s32 MenuTabBar_TabFromX(s32 v);
s32 MenuTabBar_GetTabX(s32 i);
s32 MenuTabBar_NextTab(s32 i);
s32 MenuTabBar_PrevTab(s32 i);
s32 MenuTabBar_HitTestTouch();
void func_ov090_02291d2c(void *p);
void MenuTabBar_selectTab(void *p, u32 b);

extern const u8 sDesignTabTabDownSlot[];
extern const u16 sDesignTabTargetTileX[];
extern const u16 sDesignTabTargetTileY[];
extern const u8 sDesignTabSlotY[];
extern const u8 sDesignTabSlotX[];
extern const u8 sDesignTabPopupChoices[][0xb];
extern u16 sDesignItemBase[];
struct Unk_ov121_02294c80 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};
extern Unk_ov121_02294c80 sDesignTabIconCell;
extern u32 sDesignTabTargetFrameCells[];
}

// ---- external classes (real names from symbols.txt), sized for the sub-objects ----

class LabelBalloon {
public:
    virtual ~LabelBalloon();
    virtual void vfunc_08();
};

class BgVramTask {
public:
    void BgVramTask_cancel();
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
    u32 unk_00[0x38 / 4];
};

class TouchPromptBalloon : public LabelBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    /* 0x0c */ u8 unk_0c[0x3f];
};

class MenuCursorBase : public HandCursor {
public:
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u8 unk_4b[0x64 - 0x4b];
};

class PopupChoiceMenuBody {
public:
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
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
    u32 takeRepeatedKeys();
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

// Vtable 0x02294d68, size 0x107c
class DesignTab : public MenuProc {
public:
    DesignTab() : unk_2d8(), unk_398(), unk_3fc(), unk_504(), unk_804() {}

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
    BOOL isRoomEditAllowed();
    BOOL isWearDone(s32 k);
    BOOL requestWear(s32 k, u32 v);
    u32 swapWornItem(s32 k, u32 v);
    u32 getWornItem(s32 k);
    void updateTargetBlink();
    void startTargetBlink(u32 v);
    BOOL moveCursorByPad(void *pad, u32 f);
    void moveCursorVertical(void *pad, u32 f);
    void moveCursorFromTab(u32 idx);
    void moveCursorToTabs();
    BOOL moveCursorHorizontal(void *pad, u32 f);
    s32 getCursorTab();
    BOOL cursorRowDown(u32 lo, u32 hi, u32 v);
    BOOL cursorRowUp(u32 lo, u32 hi, u32 v);
    BOOL stepCursorLeft(u32 lo, u32 hi);
    BOOL stepCursorRight(u32 lo, u32 hi);
    void moveDragIconToCursor();
    void cancelCarry();
    void dropCarry();
    void startCarry();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void showCursorAtTarget();
    void cursorToPopupTop();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void updateNameLabel();
    void refreshNameLabel();
    void restoreCamera();
    void pushCamera();
    void abortPopup();
    void openPopup();
    void onPopupChoice();
    void placeDesignItem();
    void placeDesignInRoom();
    void equipDesign(u32 m);
    void applyRoomDesignB(u32 m);
    void applyRoomDesignA(u32 m);
    void dropOnPlayerFigure();
    u32 getPopupRowValue(u32 i);
    void setPopupChoices(u32 i);
    u32 getSlotPattern(u32 i);
    void swapPatternSlots(u32 a, u32 b);
    BOOL dropHeldOnTarget();
    void moveDragIconToTouch();
    BOOL hasDragStarted();
    BOOL isTargetDisabled(u32 i);
    void disableTarget(u32 i);
    u32 findDropTarget();
    u32 findTouchedSlot();
    u32 findSlotAt(u32 x, u32 y, u32 n);
    void highlightTarget(u32 idx);
    void setTargetPalette(u32 id, u32 s);
    u32 getSlotY(u32 i);
    s32 getSlotX(u32 i);
    void openMessageWindow(u32 a, u32 b);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateItemPlace();
    void updateMessage();
    void updateWearWait();
    void updateWearRequest();
    void updatePopupDone();
    void updatePopupClose();
    void updatePopupOpen();
    void updatePopupPress();
    void updatePopupButtons();
    void updateDrop();
    void updateCarryMove();
    void updateGrab();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateCarry();
    void updateButtons();
    void updatePopupTouch();
    void updateTouchDrag();
    void updateTouchHold();
    void updateTouch();
    void loadPatternIcons();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    BOOL canDecorateRoom();
    void initDesignTab();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    BOOL requestTab(s32 a);
    BOOL handleTabSwitch();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u16 unk_a0;
    /* 0xa2 */ u16 unk_a2;
    /* 0xa4 */ s16 unk_a4;
    /* 0xa6 */ s16 unk_a6;
    /* 0xa8 */ s16 unk_a8;
    /* 0xaa */ s16 unk_aa;
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
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8[0xd8 - 0xb8];
    /* 0xd8 */ u8 unk_d8[0x2d8 - 0xd8];
    /* 0x2d8 */ TouchPromptBalloon unk_2d8;
    /* 0x398 */ MenuCursorBuf0 unk_398;
    /* 0x3fc */ MenuErrorMessage unk_3fc;
    /* 0x504 */ PopupChoiceMenu unk_504;
    /* 0x804 */ BgVramTaskPair unk_804[2];
    /* 0x874 */ u8 unk_874[0x1074 - 0x874];
    /* 0x1074 */ u8 unk_1074[8];
};

typedef void (DesignTab::*Unk_ov121_02294d68_Fn)();

struct Unk_ov121_SceneEntry {
    DesignTab *(*create)();
    u16 a;
    u16 b;
};
extern "C" DesignTab *DesignTab_Create();

static inline BOOL Unk_ov121_02293188_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov121_022924e0_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov121_02293f34_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" DesignTab *DesignTab_Create() { return new DesignTab(); }

BOOL DesignTab::vfunc_00() {
    initDesignTab();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL DesignTab::vfunc_0c() {
    func_ov090_02291d2c(ProcBase_GetParent());
    releaseResources();
    return TRUE;
}

BOOL DesignTab::onDraw() {
    u8 *p = unk_94;
    u32 i;
    s32 j;
    s32 *zero = 0;
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2d8.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&unk_398);
    }
    PopupChoice_Draw(&unk_504);
    if (testFlags(4)) {
        if (MenuCtrl_IsButtons()) {
            moveDragIconToCursor();
        } else {
            moveDragIconToTouch();
        }
        u8 *q = unk_1074;
        u8 s = unk_ae;
        sDesignTabIconCell.unk_04 = (sDesignTabIconCell.unk_04 & 0xfffffc00) | (u16)(q[s] * 4 + 0xc0) & 0x3ff;
        func_02088730(1, &sDesignTabIconCell, unk_a4, unk_a6, q[s] + 4, 2, 0);
    }
    if (testFlags(8)) {
        u8 k = unk_af;
        s32 y = (s32)(p + getSlotY(k));
        s32 x = getSlotX(k);
        Oam_DrawCell(1, sDesignTabTargetFrameCells, x, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    i = 0;
    for (j = 0; j < 8; j++) {
        if (testFlags(4) && i == unk_ae) {
        } else {
            u8 *e = (u8 *)this + j;
            sDesignTabIconCell.unk_04 = (sDesignTabIconCell.unk_04 & 0xfffffc00) | (u16)(e[0x1074] * 4 + 0xc0) & 0x3ff;
            s32 y, pal;
            pal = e[0x1074] + 4;
            y = (s32)(p + getSlotY(i));
            s32 x = getSlotX(i);
            func_02088730(1, &sDesignTabIconCell, x, y, pal, 2, zero);
        }
        i = (u8)(i + 1);
    }
    return TRUE;
}

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov121_SceneEntry sDesignTabProfile = {DesignTab_Create, 0xa4, 0xa8};

extern "C" Unk_ov121_02294c80 sDesignTabIconCell = {0x81f000f0, 0x40c0, 0xffff};

extern "C" u32 sDesignTabTargetFrameCells[8] = {0x41ee00ee, 0x0000c140, 0x500200ee, 0x0000c140, 0x70020002, 0x0000c140, 0x61ee0002, 0xffffc140};

BOOL DesignTab::execTransition() {
    static Unk_ov121_02294d68_Fn tbl[4] = {
        &DesignTab::stateOpen, &DesignTab::stateOpening,
        &DesignTab::stateClose, &DesignTab::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void DesignTab::runMainState() {
    static Unk_ov121_02294d68_Fn tbl[21] = {
        &DesignTab::updateTouch, &DesignTab::updateTouchHold,
        &DesignTab::updateTouchDrag, &DesignTab::updatePopupTouch,
        &DesignTab::updateButtons, &DesignTab::updateCarry,
        &DesignTab::updateCursorMove, &DesignTab::updateCursorPress,
        &DesignTab::updateCursorRelease, &DesignTab::updateGrab,
        &DesignTab::updateCarryMove, &DesignTab::updateDrop,
        &DesignTab::updatePopupButtons, &DesignTab::updatePopupPress,
        &DesignTab::updatePopupOpen, &DesignTab::updatePopupClose,
        &DesignTab::updatePopupDone, &DesignTab::updateWearRequest,
        &DesignTab::updateWearWait, &DesignTab::updateMessage,
        &DesignTab::updateItemPlace};
    (this->*tbl[unk_8d])();
}

BOOL DesignTab::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL DesignTab::execPhase3() {
    return TRUE;
}

BOOL DesignTab::execPhase4() {
    return TRUE;
}

BOOL DesignTab::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

BOOL DesignTab::handleTabSwitch() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 4:
        case 7:
        case 8:
            return requestTab(7);
        case 2:
        case 3:
        case 5:
        case 6:
            break;
        }
    }
    if (unk_8d != 0 && unk_8d != 4) {
        return FALSE;
    }
    s32 r5 = -1;
    if (MenuCtrl_IsTouch()) {
        r5 = MenuTabBar_HitTestTouch();
    } else {
        u32 v = gPad[1];
        if ((v & 0x800) != 0) {
            r5 = 0;
        } else if ((v & 0x400) != 0) {
            r5 = 5;
        } else if ((v & 4) != 0) {
            r5 = 4;
        }
    }
    return requestTab(r5);
}

BOOL DesignTab::requestTab(s32 a) {
    void *r = ProcBase_GetParent();
    s32 m = -1;
    if (a == m) goto fail;
    if (a == 1) goto fail;
    MenuTabBar_selectTab(r, (u8)a);
    unk_8c = 2;
    setPhase(1);
    TouchPromptBalloon_hide(&unk_2d8, 1);
    if (a != 7) {
        restoreCamera();
    }
    return TRUE;
fail:
    return FALSE;
}

void DesignTab::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    loadPatternIcons();
    PopupChoice_LoadChoiceBg(&unk_504);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    setTransitionState(1);
    setFlags(1);
    applySlideOffset(6, 0, 0);
    unk_94 = (u8 *)getSlideOffsetY();
}

void DesignTab::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, 0);
    unk_94 = (u8 *)getSlideOffsetY();
}

void DesignTab::stateClose() {
    hideCursor();
    beginSubSlideOut(8, 0, 0, 0x30);
    setTransitionState(3);
    applySlideOffset(6, 0, 0);
    unk_94 = (u8 *)getSlideOffsetY();
}

void DesignTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
    } else {
        applySlideOffset(6, 0, 0);
        unk_94 = (u8 *)getSlideOffsetY();
    }
}

void DesignTab::initDesignTab() {
    u32 i = 0;
    do {
        unk_1074[i] = i;
        i = (u8)(i + 1);
    } while (i < 8);
    u32 z = 0;
    unk_a2 = z;
    unk_9c = z;
    if (data_020e416c == 0) {
        z = 1;
    }
    if (z != 0) {
        unk_ac = 0;
        disableTarget(9);
        disableTarget(0xa);
        disableTarget(0xb);
        Unk_ov121_Comm *g = gCommManager;
        if (CommManager_isOnline(g) && g->unk_64 != 0) {
            disableTarget(0xf);
        }
    } else if (canDecorateRoom()) {
        unk_ac = 1;
        disableTarget(0xf);
    } else {
        unk_ac = 2;
        disableTarget(9);
        disableTarget(0xa);
        disableTarget(0xb);
        disableTarget(0xe);
        disableTarget(0xf);
    }
    PopupChoiceMenu_init(&unk_504, 3, 1, 0);
    unk_b0 = 0x18;
    unk_b1 = 0;
}

BOOL DesignTab::canDecorateRoom() {
    if (func_020b52f8()) {
        Unk_ov121_Comm *g = gCommManager;
        if (CommManager_isOnline(g) && g->unk_64 != 0) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

void DesignTab::releaseResources() {
    PopupChoice_ForceClose(&unk_504);
    BgVramTask_cancel(&unk_804[0]);
    BgVramTask_cancel(&unk_804[1]);
}

void DesignTab::preInputUpdate() {
    preStateUpdate();
    unk_398.vfunc_0c();
}

void DesignTab::postInputUpdate() {
    postStateUpdate();
}

void DesignTab::preStateUpdate() {}

void DesignTab::postStateUpdate() {
    updateTargetBlink();
    if (testFlags(2)) {
        if (BgVramTask_requestScreen(&unk_804[0], &unk_874[0], 6, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (TouchPromptBalloon_updatePrompt(&unk_2d8)) {
        refreshNameLabel();
    }
    PopupChoice_Update(&unk_504);
}

void DesignTab::setupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void DesignTab::loadBgGfx() {
    u32 *r4 = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/desi/b_myd_bg.bpl", r4, 6, 1, 1, 7);
    Gfx2d_LoadCharFile("menu/desi/b_myd_bg.bch", r4, 6, 0x10, 0x10, 0xc5);
    File_LoadToBuffer("menu/desi/b_myd_a_bg.bsc", &unk_874[0], 0x800);
    u32 i = 9;
    do {
        if (isTargetDisabled(i)) {
            setTargetPalette(i, 7);
        }
        i = (u8)(i + 1);
    } while (i <= 0xf);
    setFlags(2);
}

void DesignTab::loadPatternIcons() {
    u32 *r6;
    void *r5;
    u32 n;
    u32 i;
    s32 v;
    u32 k;
    r6 = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/desi/b_myd_obj.bch", r6, 8, 0x140, 0x140, 0x17f);
    r5 = Heap_AllocTail(r6, 0x1000);
    v = (s32)func_020986d4(PlayerData_GetCurrent());
    i = 0;
    k = 4;
    do {
        Gfx2d_LinearToTilesInRow32(func_02071e58(func_02071c68((void *)v, i)), r5, i << 2, k, k);
        i = (u8)(i + 1);
    } while (i < 8);
    Gfx2d_LoadCharRange(r5, 8, 0xc0, 0xc0, 0x13f);
    Heap_Free(r6, r5);
    void *r7 = Heap_AllocTail(r6, 0x120);
    i = 0;
    n = i;
    do {
        MIi_CpuCopy16(func_02072040(func_02071e04(func_02071c68((void *)v, n))), (u8 *)r7 + i * 2, 0x20);
        i += 0x10;
        n = (u8)(n + 1);
    } while (n < 8);
    File_LoadToBuffer("menu/desi/b_myd_obj.bpl", (u8 *)r7 + i * 2, 0x20);
    Gfx2d_LoadPaletteRange(r7, 8, 4, 4, 0xc);
    Heap_Free(r6, r7);
}

void DesignTab::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov121_02293f34_Both()) {
        u32 r4 = findTouchedSlot();
        if (r4 != 0x18) {
            setMainState(1);
            unk_ad = r4;
            TouchPromptBalloon_queueOpen(&unk_2d8);
            Snd_PlaySe(0xc);
        }
    }
}

void DesignTab::updateTouchHold() {
    if (gTouchHeld == 0) {
        setMainState(0);
        TouchPromptBalloon_setAutoCloseTimer(&unk_2d8, 0x3c);
    } else if (hasDragStarted()) {
        unk_ae = unk_ad;
        setFlags(4);
        unk_af = 0x18;
        setMainState(2);
        TouchPromptBalloon_hide(&unk_2d8, 1);
        Snd_PlaySe(0xd);
    } else {
        TouchPromptBalloon_commitOpen(&unk_2d8);
    }
}

void DesignTab::updateTouchDrag() {
    clearFlags(8);
    if (MenuCtrl_IsForceCloseDue()) {
        clearFlags(4);
        highlightTarget(0x18);
        setMainState(0);
    } else if (gTouchHeld == 0) {
        clearFlags(4);
        highlightTarget(0x18);
        if (dropHeldOnTarget() == 0) {
            setMainState(0);
        }
    } else {
        unk_af = findDropTarget();
        u32 v = unk_af;
        if (v >= 9 && v <= 0xf) {
            highlightTarget(v);
            setFlags(8);
            return;
        }
        if (v <= 7) goto b;
        if (v == 8) {
b:
            setFlags(8);
        }
        highlightTarget(0x18);
    }
}

void DesignTab::updatePopupTouch() {
    if (MenuCtrl_IsForceCloseDue()) {
        abortPopup();
        return;
    }
    if (checkSwitchToButtons(1)) {
        cursorToPopupTop();
        setMainState(0xc);
        unk_b1 = unk_af;
        return;
    }
    if (Unk_ov121_02293f34_Both()) {
        s32 r6 = PopupChoiceMenuBody_hitTestRowOrLast(&unk_504, gTouchCurX, gTouchCurY);
        if (r6 >= 0) {
            s32 r5 = 1;
            unk_b2 = getPopupRowValue(r6);
            switch (unk_b2) {
            case 0:
            case 1:
            case 2:
            case 3:
                Snd_PlaySe(0x50);
                break;
            case 4:
            case 5:
                break;
            case 6:
                r5 = 0;
                break;
            }
            PopupChoice_DecideRow(&unk_504, r6, r5);
            setMainState(0xf);
        }
    }
}

void DesignTab::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        TouchPromptBalloon_hide(&unk_2d8, 1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys(), 0)) {
        updateNameLabel();
        moveCursorToTarget();
        TouchPromptBalloon_hide(&unk_2d8, 0);
    } else {
        if (gPad[1] & 1) {
            TouchPromptBalloon_hide(&unk_2d8, 1);
            if (getCursorTab() != -1) {
                pressCursor();
                return;
            }
            if (unk_b1 <= 7) {
                startCarry();
                return;
            }
        }
        u32 k = gPad[1];
        if (k & 0x100) {
            requestTab(MenuTabBar_NextTab(1));
        } else if (k & 0x200) {
            requestTab(MenuTabBar_PrevTab(1));
        } else if (k & 2) {
            requestTab(7);
        } else {
            TouchPromptBalloon_commitOpen(&unk_2d8);
        }
    }
}

void DesignTab::updateCarry() {
    if (MenuCtrl_IsForceCloseDue()) {
        clearFlags(4);
        requestTab(7);
    } else if (moveCursorByPad((void *)takeRepeatedKeys(), 1)) {
        moveCursorToTarget();
    } else {
        if (gPad[1] & 1) {
            if (!isTargetDisabled(unk_b1)) dropCarry();
        }
        if (gPad[1] & 2) cancelCarry();
    }
}

void DesignTab::updateCursorMove() {
    if (!MenuCursorBase_isMoving(&unk_398)) {
        setMainState(unk_b4);
        runMainState();
    }
}

void DesignTab::updateCursorPress() {
    if (HandCursor_isAnimDone(&unk_398)) {
        s32 r = getCursorTab();
        if (r == -1 || !requestTab(r)) releaseCursor();
    }
}

void DesignTab::updateCursorRelease() {
    if (HandCursor_isAnimDone(&unk_398)) {
        refreshCursor();
        setMainState(4);
    }
}

void DesignTab::updateGrab() {
    if (func_ov002_02202928(&unk_398)) {
        setMainState(0xa);
        unk_ae = unk_b1;
        setFlags(4);
        Snd_PlaySe(0xd);
    }
}

void DesignTab::updateCarryMove() {
    if (HandCursor_isAnimDone(&unk_398)) setMainState(5);
}

void DesignTab::updateDrop() {
    if (!func_ov002_02202928(&unk_398)) {
        clearFlags(4);
        if (testFlags(0x80)) {
            updateNameLabel();
            setMainState(4);
            clearFlags(0x80);
            Snd_PlaySe(0xe);
        } else {
            unk_af = unk_b1;
            clearFlags(4);
            if (!dropHeldOnTarget()) {
                updateNameLabel();
                setMainState(4);
            }
        }
    }
}

void DesignTab::updatePopupButtons() {
    if (MenuCtrl_IsForceCloseDue()) {
        abortPopup();
    } else if (checkSwitchToTouch()) {
        hideCursor();
        setMainState(3);
    } else if (PopupChoice_MoveCursor(&unk_504, takeRepeatedKeys(), &unk_b3, 0)) {
        moveCursorToPopupRow();
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            MenuCursor_setPosePress(&unk_398);
            setMainState(0xd);
        } else if (k & 2) {
            cancelPopup();
        }
    }
}

void DesignTab::updatePopupPress() {
    if (MenuCtrl_IsForceCloseDue()) {
        abortPopup();
    } else if (HandCursor_isAnimDone(&unk_398)) {
        unk_b2 = getPopupRowValue(unk_b3);
        BOOL r5 = TRUE;
        switch (unk_b2) {
        case 0:
        case 1:
        case 2:
        case 3:
            Snd_PlaySe(0x50);
            break;
        case 4:
        case 5:
            break;
        case 6:
            r5 = FALSE;
            break;
        }
        PopupChoice_DecideRow(&unk_504, unk_b3, r5);
        setMainState(0xf);
    }
}

void DesignTab::updatePopupOpen() {
    if (PopupChoiceMenuBody_isOpen(&unk_504)) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(0xc);
        } else {
            setMainState(3);
        }
    }
}

void DesignTab::updatePopupClose() {
    if (PopupChoice_TickDecideDelay(&unk_504)) {
        PopupChoice_Close(&unk_504, 0);
        if (HandCursor_getAnim(&unk_398)) showCursorAtTarget();
        setMainState(0x10);
    }
}

void DesignTab::updatePopupDone() {
    if (PopupChoiceMenuBody_isClosed(&unk_504)) onPopupChoice();
}

void DesignTab::updateWearRequest() {
    if (requestWear(unk_b7, unk_a0)) setMainState(0x12);
}

void DesignTab::updateWearWait() {
    if (isWearDone(unk_b7)) resumeInput();
}

void DesignTab::updateMessage() {
    if (MenuErrorMessage_update(&unk_3fc, 1)) resumeInput();
}

void DesignTab::updateItemPlace() {
    switch (FieldAction_PollDrop(unk_98)) {
    case 1:
        restoreCamera();
        startTargetBlink(unk_af);
        resumeInput();
        break;
    case 2:
        openMessageWindow(3, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        return;
    }
    FieldAction_Release(unk_98);
    unk_98 = -1;
}

void DesignTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void DesignTab::startButtonInput() {
    u8 v = 0x18;
    unk_ae = v;
    unk_ad = v;
    showCursor();
    restartKeyRepeat();
    updateNameLabel();
    setMainState(4);
}

void DesignTab::resumeInput() {
    if (MenuCtrl_IsTouch()) startTouchInput();
    else startButtonInput();
}

void DesignTab::openMessageWindow(u32 a, u32 b) {
    u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = a;
    MenuErrorMessage_open(&unk_3fc, buf, b, 0);
    setMainState(0x13);
    hideCursor();
}

s32 DesignTab::getSlotX(u32 i) {
    if (i >= 0x10 && i <= 0x17) return MenuTabBar_GetTabX(i - 0x10);
    return sDesignTabSlotX[i];
}

u32 DesignTab::getSlotY(u32 i) {
    if (i >= 0x10 && i <= 0x17) return 8;
    return sDesignTabSlotY[i];
}

void DesignTab::setTargetPalette(u32 id, u32 s) {
    u32 k = id - 9;
    u32 xv = sDesignTabTargetTileY[k];
    u32 yv = sDesignTabTargetTileX[k];
    BgScreen_SetRectPalette(unk_874, yv, xv, yv + 3, xv + 3, s);
    setFlags(2);
}

void DesignTab::highlightTarget(u32 idx) {
    u32 old = unk_b0;
    if (idx != old) {
        if (old != 0x18) setTargetPalette(old, 2);
        unk_b0 = idx;
        u32 n = *(volatile u8 *)&unk_b0;
        if (n != 0x18) setTargetPalette(n, 6);
    }
}

u32 DesignTab::findSlotAt(u32 x, u32 y, u32 n) {
    s32 xl = x - 0x10;
    s32 xh = x + 0x10;
    s32 yl = y - 0x10;
    s32 yh = y + 0x10;
    u8 i;
    for (i = 0; i <= n; i++) {
        s32 px = getSlotX(i);
        if (xl < px && px < xh) {
            s32 py = getSlotY(i);
            if (yl < py && py < yh) return i;
        }
    }
    return 0x18;
}

u32 DesignTab::findTouchedSlot() {
    u32 x = gTouchCurX;
    u32 y = gTouchCurY;
    u32 r = findSlotAt(x, y, 7);
    if (r != 0x18) {
        unk_a8 = getSlotX(r) - x;
        unk_aa = getSlotY(r) - y;
    }
    return r;
}

u32 DesignTab::findDropTarget() {
    u32 x = *(volatile u8 *)&gTouchCurX;
    u32 y = *(volatile u8 *)&gTouchCurY;
    u32 r = findSlotAt(x + unk_a8, y + unk_aa, 0xf);
    if (isTargetDisabled(r)) r = 0x18;
    return r;
}

void DesignTab::disableTarget(u32 i) {
    unk_9c = unk_9c | (1 << i);
}

BOOL DesignTab::isTargetDisabled(u32 i) {
    if ((unk_9c & (1 << i)) != 0) return TRUE;
    return FALSE;
}

BOOL DesignTab::hasDragStarted() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 0x10) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 0x10) return TRUE;
    return FALSE;
}

void DesignTab::moveDragIconToTouch() {
    unk_a4 = unk_a8 + gTouchCurX;
    unk_a6 = unk_aa + gTouchCurY;
}

BOOL DesignTab::dropHeldOnTarget() {
    u32 v = unk_af;
    if (v <= 7) {
        Snd_PlaySe(0xe);
        swapPatternSlots(unk_af, unk_ae);
        return FALSE;
    }
    switch (v) {
    case 8:
        dropOnPlayerFigure();
        return TRUE;
    case 10:
        if (isRoomEditAllowed()) {
            setPopupChoices(0);
        } else {
            openMessageWindow(0x17, 1);
            return TRUE;
        }
        openPopup();
        return TRUE;
    case 11:
        if (isRoomEditAllowed()) {
            setPopupChoices(1);
        } else {
            openMessageWindow(0x18, 1);
            return TRUE;
        }
        openPopup();
        return TRUE;
    case 13:
        switch (unk_ac) {
        case 0:
        case 2:
            equipDesign(0);
            break;
        case 1:
            setPopupChoices(3);
            openPopup();
            break;
        }
        return TRUE;
    case 12:
        switch (unk_ac) {
        case 0:
        case 2:
            equipDesign(1);
            break;
        case 1:
            setPopupChoices(4);
            openPopup();
            break;
        }
        return TRUE;
    case 14:
        switch (unk_ac) {
        case 0:
            equipDesign(2);
            break;
        case 1:
            placeDesignInRoom();
            return TRUE;
        default:
            return FALSE;
        }
        return TRUE;
    case 9:
        placeDesignInRoom();
        return TRUE;
    case 15:
        placeDesignItem();
        return TRUE;
    default:
        return FALSE;
    }
}

void DesignTab::swapPatternSlots(u32 a, u32 b) {
    if (a != b) {
        func_02071c2c(func_02071c5c(func_020986d4(PlayerData_GetCurrent())), a, b);
        u8 t = unk_1074[a];
        unk_1074[a] = unk_1074[b];
        unk_1074[b] = t;
    }
}

u32 DesignTab::getSlotPattern(u32 i) {
    return func_02071c1c(func_02071c5c(func_020986d4(PlayerData_GetCurrent())), i);
}

void DesignTab::setPopupChoices(u32 i) {
    MI_CpuCopy8(sDesignTabPopupChoices[i], unk_504.unk_2f4, 0xb);
}

u32 DesignTab::getPopupRowValue(u32 i) {
    return ((u8 *)this + i)[0x7fd];
}

void DesignTab::dropOnPlayerFigure() {
    volatile u16 v;
    u16 w;
    void *r6 = PlayerData_GetCurrent();
    s32 s = func_02098ffc();
    v = *(u16 *)func_020983cc(r6);
    if (Unk_ov121_02293188_InRange(&v, 0x11a8, 0x12a7) && s == -1) {
        openMessageWindow(4, 1);
        return;
    }
    restoreCamera();
    u32 u = getSlotPattern(unk_ae);
    u16 x;
    if (u < 8) {
        x = u + 0x12a8;
    } else {
        x = 0x12a8;
    }
    w = x;
    MenuScreen_UploadClothPattern(&w, (void *)&unk_804[1], unk_d8, unk_b8);
    if (Unk_ov121_02293188_InRange(&v, 0x11a8, 0x12a7)) {
        func_02099014((u16 *)&v, 0);
    }
    resumeInput();
    Snd_PlaySe(0x6b);
}

void DesignTab::applyRoomDesignA(u32 m) {
    volatile u16 v;
    if (!isRoomEditAllowed()) {
        openMessageWindow(0x17, 1);
        return;
    }
    PlayerData_GetCurrent();
    s32 s = func_02098ffc();
    v = *RoomShell_GetCarpet();
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7) && s == -1) {
        openMessageWindow(4, 1);
        return;
    }
    restoreCamera();
    func_02034228(getSlotPattern(unk_ae), m, 1, 1);
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7)) {
        func_02099014((u16 *)&v, 0);
    }
    resumeInput();
    startTargetBlink(unk_af);
}

void DesignTab::applyRoomDesignB(u32 m) {
    volatile u16 v;
    if (!isRoomEditAllowed()) {
        openMessageWindow(0x18, 1);
        return;
    }
    s32 s = func_02098ffc();
    v = *RoomShell_GetWallpaper();
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7) && s == -1) {
        openMessageWindow(4, 1);
        return;
    }
    restoreCamera();
    func_020342a4(getSlotPattern(unk_ae), m, 1, 1);
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7)) {
        func_02099014((u16 *)&v, 0);
    }
    resumeInput();
    startTargetBlink(unk_af);
}

void DesignTab::equipDesign(u32 m) {
    volatile u16 v;
    u16 w;
    u32 t;
    unk_b7 = m;
    t = getWornItem(unk_b7);
    v = t;
    switch (unk_b7) {
    case 0:
        if (Unk_ov121_02293188_InRange(&v, 0x12a8, 0x12af)) {
            t = 0xfff1;
        }
        break;
    case 1:
        if (Unk_ov121_02293188_InRange(&v, 0x1429, 0x1430)) {
            t = 0xfff1;
        }
        break;
    case 2:
        if (Unk_ov121_02293188_InRange(&v, 0x13a0, 0x13a7)) {
            t = 0xfff1;
        }
        break;
    }
    if (t != 0xfff1) {
        if (func_02098ffc() == -1) {
            openMessageWindow(4, 1);
            return;
        }
        w = t;
        func_02099014(&w, 0);
    }
    pushCamera();
    u32 u;
    u16 x;
    switch (unk_b7) {
    case 0:
        u = getSlotPattern(unk_ae);
        if (u < 8) {
            x = u + 0x12a8;
        } else {
            x = 0x12a8;
        }
        unk_a0 = x;
        break;
    case 1:
        u = getSlotPattern(unk_ae);
        if (u < 8) {
            x = u + 0x1429;
        } else {
            x = 0x1429;
        }
        unk_a0 = x;
        break;
    case 2:
        u = getSlotPattern(unk_ae);
        if (u < 8) {
            x = u + 0x13a0;
        } else {
            x = 0x13a0;
        }
        unk_a0 = x;
        break;
    }
    swapWornItem(unk_b7, unk_a0);
    setMainState(0x11);
    startTargetBlink(unk_af);
}

void DesignTab::placeDesignInRoom() {
    u32 buf;
    s32 r;
    if (func_020b0f54() > 1) {
        openMessageWindow(9, 0);
        Snd_PlaySe(0x73);
        return;
    }
    switch (unk_af - 9) {
    case 4:
        r = FtrMgr_FindPlacementMyDesignA(&buf, (u8)getSlotPattern(unk_ae), 1);
        break;
    case 3:
        r = FtrMgr_FindPlacementMyDesignD(&buf, (u8)getSlotPattern(unk_ae), 1);
        break;
    case 0:
        r = FtrMgr_FindPlacementMyDesignC(&buf, (u8)getSlotPattern(unk_ae), 1);
        break;
    case 5:
        r = FtrMgr_FindPlacementMyDesignB(&buf, (u8)getSlotPattern(unk_ae), 1);
        break;
    case 1:
    case 2:
    default:
        resumeInput();
        return;
    }
    switch (r) {
    case 0:
    case 1:
        openMessageWindow(5, 0);
        Snd_PlaySe(0x73);
        break;
    case 2:
        openMessageWindow(3, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        restoreCamera();
        FtrMgr_SpawnFromArg(buf);
        resumeInput();
        startTargetBlink(unk_af);
        break;
    }
}

void DesignTab::placeDesignItem() {
    s32 t = PlayerData_getIndex(PlayerData_GetCurrent());
    u32 u = getSlotPattern(unk_ae);
    u32 x = sDesignItemBase[t];
    x += u;
    unk_a0 = x;
    unk_98 = FieldAction_RequestDrop(gCommManager->unk_64, unk_a0);
    if (unk_98 == -1) {
        openMessageWindow(3, 0);
        Snd_PlaySe(0x73);
    } else {
        setMainState(0x14);
    }
}

void DesignTab::onPopupChoice() {
    switch (unk_b2) {
    case 0:
        applyRoomDesignA(0);
        break;
    case 1:
        applyRoomDesignA(1);
        break;
    case 2:
        applyRoomDesignB(0);
        break;
    case 3:
        applyRoomDesignB(1);
        break;
    case 4:
        dropOnPlayerFigure();
        break;
    case 5:
        equipDesign(0);
        break;
    case 6:
        placeDesignInRoom();
        break;
    case 7:
        equipDesign(1);
        break;
    default:
        resumeInput();
        break;
    }
}

void DesignTab::openPopup() {
    PopupChoiceMenuBody_setRowsFromIds(&unk_504, unk_504.unk_2f4, 0);
    s32 a = getSlotX(unk_af) - 0x18;
    s32 b = getSlotY(unk_af) + 0x10;
    PopupChoiceMenu_placeAt(&unk_504, a, b);
    PopupChoice_Open(&unk_504, 0);
    setMainState(0xe);
}

void DesignTab::abortPopup() {
    unk_b2 = 8;
    showCursorAtTarget();
    PopupChoice_Close(&unk_504, 0);
    setMainState(0x10);
}

void DesignTab::pushCamera() {
    if (!Camera_IsViewPushed()) {
        Camera_PushView();
    }
}

void DesignTab::restoreCamera() {
    if (Camera_IsViewPushed()) {
        Camera_PopView();
    }
}

void DesignTab::refreshNameLabel() {
    u8 a[0x20];
    u8 b[0x28];
    s32 x = getSlotY(unk_ad);
    x -= 0x84;
    if (MenuCtrl_IsButtons()) {
        x -= 0xa;
    }
    LabelBalloon_setPos(&unk_2d8, getSlotX(unk_ad) - 0x78, x);
    func_02062510(a);
    func_02071f5c(func_02071e04(func_02071c68(func_020986d4(PlayerData_GetCurrent()), unk_ad)), a);
    func_02089f44(b);
    StrBuf_GameToAscii(b, a);
    LabelBalloon_setText(&unk_2d8, b);
    func_02089f30(b);
    func_020624c0(a);
}

void DesignTab::updateNameLabel() {
    u32 t = unk_b1;
    if (t <= 7) {
        unk_ad = t;
        TouchPromptBalloon_queueOpen(&unk_2d8);
    } else {
        TouchPromptBalloon_cancelQueuedOpen(&unk_2d8);
    }
}

void DesignTab::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_398, a, b);
    if (getCursorTab() != -1) {
        MenuCursor_setAnimIfChanged(&unk_398, 0xd);
    } else {
        MenuCursor_setAnimIfChanged(&unk_398, 1);
    }
    refreshCursor();
}

s32 DesignTab::getCursorTargetX() {
    s32 t = getSlotX(unk_b1);
    if (testFlags(0x40)) {
        t += 0x100;
    } else if (testFlags(0x20)) {
        t -= 0x100;
    }
    if (getCursorTab() == -1) {
        t += 0xb;
    }
    return t;
}

s32 DesignTab::getCursorTargetY() {
    s32 t = getSlotY(unk_b1);
    if (getCursorTab() == -1) {
        t -= 0xb;
    }
    return t;
}

void DesignTab::hideCursor() {
    MenuCursor_setAnimIfChanged(&unk_398, 0);
    unk_398.vfunc_0c();
}

void DesignTab::moveCursorToTarget() {
    if (testFlags(0x10)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        MenuCursorBase_warpTo(&unk_398, a, b);
        clearFlags(0x10);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        MenuCursorBase_moveToEase(&unk_398, a, b, 3, 1);
        unk_b4 = unk_8d;
        setMainState(6);
    }
}

void DesignTab::moveCursorToPopupRow() {
    s32 a = PopupChoiceMenuBody_getRowX(&unk_504);
    s32 b = PopupChoiceMenuBody_getRowY(&unk_504, unk_b3);
    MenuCursorBase_moveToLinear(&unk_398, a, b, 2);
    unk_b4 = unk_8d;
    setMainState(6);
}

void DesignTab::cancelPopup() {
    unk_b2 = 8;
    unk_b3 = PopupChoice_DecideCancel(&unk_504, 1);
    s32 a = PopupChoiceMenuBody_getRowX(&unk_504);
    s32 b = PopupChoiceMenuBody_getRowY(&unk_504, unk_b3);
    MenuCursorBase_warpTo(&unk_398, a, b);
    HandCursor_setAnimAtEnd(&unk_398, 8);
    setMainState(0xf);
}

void DesignTab::cursorToPopupTop() {
    unk_b3 = 0;
    s32 a = PopupChoiceMenuBody_getRowX(&unk_504);
    s32 b = PopupChoiceMenuBody_getRowY(&unk_504, unk_b3);
    MenuCursorBase_warpTo(&unk_398, a, b);
    MenuCursor_setAnimIfChanged(&unk_398, 7);
}

void DesignTab::showCursorAtTarget() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_398, a, b);
    MenuCursor_setAnimIfChanged(&unk_398, 1);
}

void DesignTab::refreshCursor() {
    MenuCursorBase_setPoseIdle(&unk_398);
    unk_398.vfunc_0c();
}

void DesignTab::pressCursor() {
    MenuCursor_setPosePress(&unk_398);
    setMainState(7);
}

void DesignTab::releaseCursor() {
    MenuCursorBase_setPoseRelease(&unk_398);
    setMainState(8);
}

void DesignTab::startCarry() {
    MenuCursor_setAnimIfChanged(&unk_398, 4);
    setMainState(9);
}

void DesignTab::dropCarry() {
    MenuCursor_setAnimIfChanged(&unk_398, 5);
    clearFlags(0x80);
    setMainState(0xb);
}

void DesignTab::cancelCarry() {
    MenuCursor_setAnimIfChanged(&unk_398, 5);
    setFlags(0x80);
    setMainState(0xb);
}

void DesignTab::moveDragIconToCursor() {
    unk_a4 = MenuCursorBase_getFrameScreenX(&unk_398) - 3;
    unk_a6 = MenuCursorBase_getFrameScreenY(&unk_398) + 9;
}

BOOL DesignTab::stepCursorRight(u32 lo, u32 hi) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        if (t == hi) {
            setFlags(0x40);
            unk_b1 = lo;
        } else {
            unk_b1 = *(volatile u8 *)&unk_b1 + 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL DesignTab::stepCursorLeft(u32 lo, u32 hi) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        if (t == lo) {
            unk_b1 = hi;
            setFlags(0x20);
        } else {
            unk_b1 = *(volatile u8 *)&unk_b1 - 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL DesignTab::cursorRowUp(u32 lo, u32 hi, u32 v) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        unk_b1 = *(volatile u8 *)&unk_b1 + (v - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL DesignTab::cursorRowDown(u32 lo, u32 hi, u32 v) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        unk_b1 = *(volatile u8 *)&unk_b1 + (v - lo);
        return TRUE;
    }
    return FALSE;
}

s32 DesignTab::getCursorTab() {
    u32 t = unk_b1;
    if (t >= 0x10 && t <= 0x17) {
        return t - 0x10;
    }
    return -1;
}

BOOL DesignTab::moveCursorHorizontal(void *pad, u32 f) {
    if (MenuKeys_HasLeft(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 7;
            setFlags(0x20);
        } else if (unk_b1 == 4 && f) {
            unk_b1 = 8;
        } else if (!stepCursorLeft(0, 3) && !stepCursorLeft(4, 7) && !stepCursorLeft(9, 0xb) &&
                   !stepCursorLeft(0xc, 0xf)) {
            u32 t = unk_b1;
            if (t > 0x10 && t <= 0x17) {
                unk_b1 = *(volatile u8 *)&unk_b1 - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 4;
        } else if (unk_b1 == 7 && f) {
            unk_b1 = 8;
            setFlags(0x40);
        } else if (unk_b1 == 0xb && MenuKeys_HasDown(pad)) {
            unk_b1 = 0xf;
            return TRUE;
        } else if (!stepCursorRight(0, 3) && !stepCursorRight(4, 7) && !stepCursorRight(9, 0xb) &&
                   !stepCursorRight(0xc, 0xf)) {
            u32 t = unk_b1;
            if (t >= 0x10 && t < 0x17) {
                unk_b1 = *(volatile u8 *)&unk_b1 + 1;
            }
        }
    }
    return testFlags(0x60);
}

void DesignTab::moveCursorToTabs() {
    s32 t = MenuCursorBase_getScreenX(&unk_398);
    unk_b1 = MenuTabBar_TabFromX(t) + 0x10;
    MenuCursor_switchToAnim0D(&unk_398);
}

void DesignTab::moveCursorFromTab(u32 idx) {
    unk_b1 = sDesignTabTabDownSlot[idx];
    MenuCursor_switchToAnim01(&unk_398);
}

void DesignTab::moveCursorVertical(void *pad, u32 f) {
    if (MenuKeys_HasUp(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 0;
        } else if (unk_b1 <= 3) {
            if (f) {
                unk_b1 = *(volatile u8 *)&unk_b1 + 0xc;
            } else {
                moveCursorToTabs();
            }
        } else if (!cursorRowUp(4, 7, 0)) {
            u32 t = unk_b1;
            if (t >= 9 && t <= 0xb) {
                if (!f) {
                    moveCursorToTabs();
                }
            } else if (t >= 0xc && t <= 0xf) {
                if (MenuKeys_HasRight(pad)) {
                    unk_b1 = *(volatile u8 *)&unk_b1 - 1;
                }
                unk_b1 = *(volatile u8 *)&unk_b1 - 3;
                if (unk_b1 > 0xb) {
                    unk_b1 = 0xb;
                }
            }
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (!cursorRowDown(0, 3, 4)) {
            s32 t = getCursorTab();
            if (t != -1) {
                moveCursorFromTab(t);
            } else if (!cursorRowDown(0xc, 0xf, 0)) {
                u32 b = unk_b1;
                if (b >= 9 && b <= 0xb) {
                    if (MenuKeys_HasLeft(pad)) {
                        unk_b1 = *(volatile u8 *)&unk_b1 + 1;
                    }
                    unk_b1 = *(volatile u8 *)&unk_b1 + 3;
                }
            }
        }
    }
}

BOOL DesignTab::moveCursorByPad(void *pad, u32 f) {
    u32 old = unk_b1;
    clearFlags(0x60);
    if (!moveCursorHorizontal(pad, f)) {
        moveCursorVertical(pad, f);
    }
    if (old != unk_b1) {
        return TRUE;
    }
    return FALSE;
}

void DesignTab::startTargetBlink(u32 v) {
    if (testFlags(0x200)) {
        setTargetPalette(unk_b5, 2);
    }
    unk_b5 = v;
    unk_b6 = 0xf;
    setFlags(0x200);
}

void DesignTab::updateTargetBlink() {
    if (testFlags(0x200)) {
        if (unk_b6 != 0) {
            unk_b6 = *(volatile u8 *)&unk_b6 - 1;
            switch (unk_b6 % 5) {
            case 0:
                setTargetPalette(unk_b5, 2);
                break;
            case 3:
                setTargetPalette(unk_b5, 6);
                break;
            }
        } else {
            clearFlags(0x200);
            setTargetPalette(unk_b5, 2);
        }
    }
}

u32 DesignTab::getWornItem(s32 k) {
    void *p = PlayerData_GetCurrent();
    switch (k) {
    case 0:
        return *PlayerData_getShirt(p);
    case 1:
        return *PlayerData_getHat(p);
    case 2:
        return *PlayerData_getHeldItem(p);
    }
    return 0xfff1;
}

u32 DesignTab::swapWornItem(s32 k, u32 v) {
    u32 res = getWornItem(k);
    void *p = PlayerData_GetCurrent();
    volatile u16 t = v;
    switch (k) {
    case 0:
        PlayerData_setShirt(p, (u16 *)&t);
        t = res;
        if (!Unk_ov121_022924e0_Range(&t, 0x11a8, 0x12a7)) {
            res = 0xfff1;
        }
        break;
    case 1:
        PlayerData_setHat(p, (u16 *)&t);
        t = res;
        if (Unk_ov121_022924e0_Range(&t, 0x1429, 0x1430)) {
            res = 0xfff1;
        }
        break;
    case 2:
        t = res;
        if (Unk_ov121_022924e0_Range(&t, 0x13a0, 0x13a7)) {
            res = 0xfff1;
        }
        break;
    }
    return res;
}

BOOL DesignTab::requestWear(s32 k, u32 v) {
    u16 t = v;
    switch (k) {
    case 0:
        if (PlayerActor_RequestWearShirt(&t)) {
            return TRUE;
        }
        break;
    case 1:
        if (PlayerActor_RequestWearHat(&t)) {
            return TRUE;
        }
        break;
    case 2:
        if (PlayerActor_RequestChangeHeldItem(&t)) {
            return TRUE;
        }
        break;
    }
    return FALSE;
}

BOOL DesignTab::isWearDone(s32 k) {
    if (k == 2) {
        if (func_02094fa8() == 0) {
            return TRUE;
        }
        return FALSE;
    }
    if (func_02094fb4() == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL DesignTab::isRoomEditAllowed() {
    Unk_ov121_Comm *c = gCommManager;
    if (CommManager_isOnline(c)) {
        if (c->unk_64 != 0 || func_020b0f54() > 1) {
            return FALSE;
        }
    } else if (func_020b0f54() > 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL DesignTab::testFlags(u32 mask) {
    if (unk_a2 & mask) {
        return TRUE;
    }
    return FALSE;
}

void DesignTab::setFlags(u32 mask) { unk_a2 = unk_a2 | mask; }

void DesignTab::clearFlags(u32 mask) { unk_a2 = unk_a2 & ~mask; }

extern "C" const u8 sDesignTabPopupChoices[6][0xb] = {
    {0x31, 0x32, 0x33, 0xff, 0xff, 0x00, 0x01, 0x08, 0x08, 0x08, 0x00},
    {0x31, 0x32, 0x33, 0xff, 0xff, 0x02, 0x03, 0x08, 0x08, 0x08, 0x00},
    {0x28, 0x33, 0xff, 0xff, 0xff, 0x04, 0x08, 0x08, 0x08, 0x08, 0x00},
    {0x2a, 0x2f, 0x33, 0xff, 0xff, 0x05, 0x06, 0x08, 0x08, 0x08, 0x00},
    {0x28, 0x29, 0x33, 0xff, 0xff, 0x07, 0x06, 0x08, 0x08, 0x08, 0x00},
    {0x7c, 0xff, 0xff, 0xff, 0xff, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00},
};

extern "C" u16 sDesignItemBase[4] = {0xa7, 0xaf, 0xb7, 0xbf};

extern "C" const u16 sDesignTabTargetTileX[7] = {8, 0xe, 0x14, 5, 0xb, 0x11, 0x17};

extern "C" const u8 sDesignTabTabDownSlot[8] = {1, 1, 1, 2, 2, 3, 3, 3};

extern "C" const u8 sDesignTabSlotX[16] = {0x28, 0x60, 0x98, 0xd0, 0x38, 0x70, 0xa8, 0xe0, 0x10, 0x50, 0x80, 0xb0, 0x38, 0x68, 0x98, 0xc8};

extern "C" const u8 sDesignTabSlotY[16] = {0x7c, 0x7c, 0x7c, 0x7c, 0xa4, 0xa4, 0xa4, 0xa4, 0xb0, 0x30, 0x30, 0x30, 0x50, 0x50, 0x50, 0x50};

extern "C" const u16 sDesignTabTargetTileY[7] = {4, 4, 4, 8, 8, 8, 8};
