#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

// ov107: scene overlay (class PocketsFullMenu, vtable 0x02296e78, 0x281c bytes).

class PocketsFullMenu;
typedef void (PocketsFullMenu::*Unk_ov107_02296e78_Fn)();

struct Unk_ov107_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

// Other modules' methods, called with the object first (the real symbol is the mangled name).
#define TouchPromptBalloon_setAutoCloseTimer _ZN18TouchPromptBalloon17setAutoCloseTimerEh
#define TouchPromptBalloon_cancelQueuedOpen _ZN18TouchPromptBalloon16cancelQueuedOpenEv
#define TouchPromptBalloon_queueOpen _ZN18TouchPromptBalloon9queueOpenEv
#define TouchPromptBalloon_commitOpen _ZN18TouchPromptBalloon10commitOpenEv
#define TouchPromptBalloon_hide _ZN18TouchPromptBalloon4hideEi
#define TouchPromptBalloon_updatePrompt _ZN18TouchPromptBalloon12updatePromptEv
#define TouchPromptBalloon_isOpenOrOpening _ZN18TouchPromptBalloon15isOpenOrOpeningEv
#define PopupChoiceMenuBody_getRowY _ZN19PopupChoiceMenuBody7getRowYEi
#define PopupChoiceMenuBody_getRowX _ZN19PopupChoiceMenuBody7getRowXEv
#define PopupChoiceMenuBody_hitTestRowOrLast _ZN19PopupChoiceMenuBody16hitTestRowOrLastEii
#define PopupChoiceMenuBody_setRowsFromIds _ZN19PopupChoiceMenuBody14setRowsFromIdsEP17PopupChoiceIdListi
#define PopupChoiceMenuBody_isClosed _ZN19PopupChoiceMenuBody8isClosedEv
#define PopupChoiceMenuBody_isOpen _ZN19PopupChoiceMenuBody6isOpenEv
#define PopupChoiceMenu_placeAboveBalloon _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon
#define PopupChoiceMenu_placeNearPoint _ZN15PopupChoiceMenu14placeNearPointEii
#define PopupChoiceMenu_init _ZN15PopupChoiceMenu4initEiiPKc
#define CursorMotion_reset _ZN12CursorMotion5resetEv
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv
#define MenuCursorBase_isMoving _ZN14MenuCursorBase8isMovingEv
#define MenuCursorBase_moveToEase _ZN14MenuCursorBase10moveToEaseEiiii
#define MenuCursorBase_moveToLinear _ZN14MenuCursorBase12moveToLinearEiii
#define MenuCursorBase_warpTo _ZN14MenuCursorBase6warpToEii
#define MenuCursorBase_setPoseIdle _ZN14MenuCursorBase11setPoseIdleEv
#define MenuCursor_setPosePress _ZN10MenuCursor12setPosePressEv
#define MenuCursor_switchToAnim01 _ZN10MenuCursor14switchToAnim01Ev
#define MenuCursor_switchToAnim07 _ZN10MenuCursor14switchToAnim07Ev
#define MenuCursor_setAnimIfChanged _ZN10MenuCursor16setAnimIfChangedEi
#define MenuBottomButtonsBody_getPressOffset _ZN21MenuBottomButtonsBody14getPressOffsetEv
#define MenuBottomButtonsBody_stepPress _ZN21MenuBottomButtonsBody9stepPressEv
#define MenuBottomButtonsBody_setSelected _ZN21MenuBottomButtonsBody11setSelectedEh
#define MenuBottomButtonsBody_getTargetY _ZN21MenuBottomButtonsBody10getTargetYEi
#define MenuBottomButtonsBody_getTargetX _ZN21MenuBottomButtonsBody10getTargetXEi
#define MenuBottomButtonsBody_isTouched _ZN21MenuBottomButtonsBody9isTouchedEi
#define MenuBottomButtons_setLayoutSingle05 _ZN17MenuBottomButtons17setLayoutSingle05Ei
#define MenuBottomButtons_drawAt _ZN17MenuBottomButtons6drawAtEi
#define MenuBottomButtons_freeTexts _ZN17MenuBottomButtons9freeTextsEv
#define MenuErrorMessage_update _ZN16MenuErrorMessage6updateEi
#define MenuErrorMessage_open _ZN16MenuErrorMessage4openEPhij
#define LetterGrid_drawPocketLetters _ZN10LetterGrid17drawPocketLettersEii
#define LetterGrid_highlightLetterKinds _ZN10LetterGrid20highlightLetterKindsEj
#define LetterGrid_clearCursorSlot _ZN10LetterGrid15clearCursorSlotEv
#define LetterGrid_updateCursorLift _ZN10LetterGrid16updateCursorLiftEv
#define LetterGrid_init _ZN10LetterGrid4initEi
#define MenuLauncher_onChildClosed _ZN12MenuLauncher13onChildClosedEv
#define MenuLauncher_setNextRequest _ZN12MenuLauncher14setNextRequestEii
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define LabelBalloon_setPos _ZN12LabelBalloon6setPosEii
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define HandCursor_setAnimAtEnd _ZN10HandCursor12setAnimAtEndEi
#define HandCursor_disableObjWindow _ZN10HandCursor16disableObjWindowEv
#define HandCursor_enableObjWindow _ZN10HandCursor15enableObjWindowEv
#define PlayerData_getCatalog _ZN10PlayerData10getCatalogEv
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv

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
    u32 checkSwitchToTouch();
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
    /* 0x91 */ u8 pad_91[3];
};

// Sub-objects of the scene (constructor/destructor symbols live in main, ov002 and ov094).
class BgVramTaskPair {
public:
    BgVramTaskPair();
    u32 unk_00[0x38 / 4];
};

class InventoryItemGrid {
public:
    InventoryItemGrid();
    ~InventoryItemGrid();
    u32 unk_00[0xa60 / 4];
};

class LetterGrid {
public:
    LetterGrid();
    ~LetterGrid();
    u32 unk_00[0x28 / 4];
};

class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x15e0 / 4];
};

class TouchPromptBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();
    u32 unk_00[0x18 / 4];
};

class MenuCursorBuf0 {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class PopupChoiceMenu {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[5];
    u8 unk_2f9[7];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    u32 unk_00[0x108 / 4];
};

class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    u32 unk_00[0x164 / 4];
};

struct Unk_ov107_Comm {
    u32 unk_00[0x64 / 4];
    u32 unk_64;
    u32 unk_68;
};

extern "C" {
extern Unk_ov107_Comm *gCommManager;
extern u8 data_021edb68;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

s32 ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void Gfx2d_ShowLayer(u32 x);
s32 MenuCtrl_GetMode();
void MenuCtrl_GetPocketSelectLabel();
s32 PendingUnit_ClearActiveOfAid();
BOOL CommManager_isOnline(void *p);
BOOL CommManager_isSlotActive(void *p, s32 v);
void CommManager_beginRecord(void *p);
void CommManager_writeRecord(void *p, void *buf, s32 n);
void CommManager_endRecord(void *p, s32 a, s32 b);
void MI_CpuCopy8(void *a, void *b, u32 n);
void FieldPos_FromUnitCenter(void *out, s32 a, s32 b);
s32 FieldAction_PollResult(s32 v);
s32 FieldAction_PollDrop(s32 v);
void FieldAction_Release(s32 v);
s32 FieldAction_RequestPlaceAtPending(s32 a, s32 b);
s32 FieldAction_RequestDropOrPlace(s32 a, s32 b);
s32 FieldAction_RequestToolAtPending(s32 a, s32 b, s32 c, s32 d);
u16 *PendingUnit_GetActivePosOfAid(s32 a);
void NetBuf_PackPair20(void *dst, s32 a, s32 b);
u8 *func_02095204(s32 a);
s32 func_02030d78(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
u32 func_02063b8c(s32 a);
u16 MenuCtrl_GetPocketsFullItem();
void Item_FromPlacedForm(void *a, void *b);
u32 func_020991b0();
void PlayerData_GetCurrent();
s32 PlayerData_getCatalog();
void func_0203c42c(s32 a, void *b, s32 c, s32 d);
void MenuCtrl_SetPocketsFullItem();
void MenuCtrl_SetIndex(u32 a);
void MenuCtrl_SetResult(s32 a);
void Snd_PlaySe(u32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
BOOL func_020951a0();
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void HandCursor_setAnimAtEnd(void *a, s32 b);
void HandCursor_disableObjWindow(void *a);
void LabelBalloon_setPos(void *a, s32 b, s32 c);
s32 HandCursor_getAnim(void *p);
s32 HandCursor_isAnimDone(void *p);
s32 HandCursor_enableObjWindow(void *p);
s32 MenuCtrl_GetPtrArg0();

BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void ChoiceIdList_Clear(void *p, u32 v);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
u32 PopupChoice_DecideCancel(void *a, s32 b);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *q, s32 b);
BOOL PopupChoice_TickDecideDelay(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *p, s32 x);
void PopupChoice_Open(void *a, s32 b);
void MenuButtons_LoadTextColors(void *p);

BOOL PlayerActor_LocalRequestBuryItem(void *a, void *b);
void HeldInsect_Remove(s32 a, s32 b);
void FishCatch_EndForShadow(s32 a);
BOOL FishCatch_StartRelease(s32 a, s32 b, void *c);
BOOL FishCatch_GetReelTarget(void *a, s32 b);
s32 HeldInsect_GetStage(...);
void HeldInsect_Start(s32 a, s32 b);
void HeldInsect_Release(s32 a, s32 b);
void PlayerActor_LocalReleaseCatch(s32 a);

void Inventory_PlayTouchSe();
BOOL InvItem_IsNotFishInsectOrFlower(s32 a);
void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
BOOL InventoryItemGrid_IsSlotEmpty(void *a, s32 b);
void InventoryItemGrid_DrawHeldItem(void *a, s32 b, s32 c);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void InventoryItemGrid_DisableSlot(void *a, s32 b);
BOOL InventoryItemGrid_IsSlotDisabled(void *a, s32 b);
void InventoryItemGrid_RefreshSlot(void *a, s32 b);
void InventoryItemGrid_SetSlotItem(void *a, s32 b, s32 c, s32 d);
u32 InventoryItemGrid_GetSlotFlags(void *a, s32 b);
u32 InventoryItemGrid_GetSlotItem(void *a, s32 b);
void InventoryItemGrid_SetCursorSlot(void *a, s32 b);
void InventoryItemGrid_ClearCursorSlot(void *a);
s32 InventoryItemGrid_GetSlotY(void *a, s32 b);
s32 InventoryItemGrid_GetSlotX(void *a, s32 b);
void InventoryItemGrid_ShowSlotName(void *a, void *b, s32 c);
void InventoryItemGrid_LoadPockets(void *p);
u32 InventoryItemGrid_FindPocketSlotAt(void *a);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void LetterGrid_LoadPocketLetters(void *p);

// Macro'd (mangled) declarations: the object is the first argument.
void TouchPromptBalloon_setAutoCloseTimer(void *p, s32 a);
void TouchPromptBalloon_cancelQueuedOpen(void *p);
void TouchPromptBalloon_queueOpen(void *p);
void TouchPromptBalloon_commitOpen(void *p);
void TouchPromptBalloon_hide(void *p, s32 a);
BOOL TouchPromptBalloon_updatePrompt(void *p);
BOOL TouchPromptBalloon_isOpenOrOpening(void *p);
s32 PopupChoiceMenuBody_getRowY(void *a, s32 b);
s32 PopupChoiceMenuBody_getRowX(void *a);
s32 PopupChoiceMenuBody_hitTestRowOrLast(void *p, s32 a, s32 b);
void PopupChoiceMenuBody_setRowsFromIds(void *a, void *b, s32 c);
BOOL PopupChoiceMenuBody_isClosed(void *p);
BOOL PopupChoiceMenuBody_isOpen(void *p);
void PopupChoiceMenu_placeAboveBalloon(void *a, void *b, s32 c);
void PopupChoiceMenu_placeNearPoint(void *a, s32 b, s32 c);
void PopupChoiceMenu_init(void *p, s32 a, s32 b, s32 c);
void CursorMotion_reset(void *p);
void MenuCursorBase_drawWrapped(void *p);
BOOL MenuCursorBase_isMoving(void *p);
void MenuCursorBase_moveToEase(void *a, s32 b, s32 c, s32 d, s32 e);
void MenuCursorBase_moveToLinear(void *a, s32 b, s32 c, s32 d);
void MenuCursorBase_warpTo(void *p, s32 x, s32 y);
void MenuCursorBase_setPoseIdle(void *a);
void MenuCursor_setPosePress(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_switchToAnim07(void *p);
void MenuCursor_setAnimIfChanged(void *a, s32 b);
s32 MenuBottomButtonsBody_getPressOffset(void *p);
BOOL MenuBottomButtonsBody_stepPress(void *p);
void MenuBottomButtonsBody_setSelected(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetY(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetX(void *p, s32 a);
BOOL MenuBottomButtonsBody_isTouched(void *p, s32 a);
void MenuBottomButtons_setLayoutSingle05(void *p, s32 a);
void MenuBottomButtons_drawAt(void *p, s32 a);
void MenuBottomButtons_freeTexts(void *p);
BOOL MenuErrorMessage_update(void *p, s32 a);
void MenuErrorMessage_open(void *a, void *b, s32 c, s32 d);
void LetterGrid_drawPocketLetters(void *p, s32 a, s32 b);
void LetterGrid_highlightLetterKinds(void *p, s32 a);
void LetterGrid_clearCursorSlot(void *p);
void LetterGrid_updateCursorLift(void *p);
void LetterGrid_init(void *p, s32 a);
void MenuLauncher_onChildClosed();
void MenuLauncher_setNextRequest(s32 a, s32 b, s32 c);
void BgVramTask_cancel(void *p);
}

static inline BOOL Unk_ov107_02296270_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

class PocketsFullMenu : public MenuProc {
public:
    PocketsFullMenu()
        : unk_cc(0), unk_d0(0), unk_d4(), unk_10c(), unk_b6c(), unk_b94(), unk_2174(), unk_2234(), unk_224c(), unk_22b0(), unk_25b0(), unk_26b8() {}

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
    void endNewItemAction(BOOL flag);
    u8 getLocalPlayerIndex();
    void mainAct17();
    void mainAct16();
    void onChoiceBury();
    void sendFishReleasePacket(u8 v);
    void mainAct11();
    void onChoiceReleaseFish();
    BOOL canReleaseFish();
    void sendInsectReleasePacket(u8 a, u8 b);
    void mainAct10();
    void onChoiceReleaseInsect();
    void mainAct15();
    void onChoiceDrop();
    BOOL moveCursorByPad(void *pad);
    void moveCursorInGrid(void *pad);
    void selectPocket(u32 idx, u32 flag);
    void setPopupChoices();
    void storeNewItem();
    void startCloseByTab();
    void closeWithSelection();
    void cancelPopupForButtons();
    void openPopup(s32 a);
    void onPopupChoice();
    void pressCloseButton();
    void refreshCursor();
    void showCursorAtSlot();
    void cursorToPopupTop();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void drawHeldItem();
    void updateBalloonForCursor();
    void placeBalloon();
    void setFocusSlot(s32 a);
    void clearFocusSlot();
    u32 getSlotItemFlags(s32 a);
    u32 getSlotItem(s32 a);
    BOOL isSlotEmpty(s32 a);
    BOOL isSlotDisabled(s32 a);
    BOOL isPocketLocked(s32 a);
    void disableLockedPockets();
    s32 getSlotY(s32 a);
    s32 getSlotX(s32 a);
    void putItemInSlot(s32 a, s32 b, s32 c);
    u32 getSlotAt(s32 a, s32 b, s32 c);
    u32 toSlotOrNone(s32 a);
    u32 toPocketIndex(s32 a);
    BOOL isPocketSlot(s32 a);
    void cancelBgTasks();
    void showMessage(s32 a, u32 b);
    void beginTouchOnSlot(u32 a);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct14();
    void mainAct13();
    void mainAct12();
    void mainAct0F();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
    void mainAct0A();
    void mainAct09();
    void mainAct08();
    void mainAct07();
    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadObjGraphics();
    void loadInventoryBg();
    void setupBgLayer6();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initParts();
    void transitionAct04();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void runMainState();

    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ u32 unk_c4;
    /* 0xc8 */ u32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ BgVramTaskPair unk_d4[1];
    /* 0x10c */ InventoryItemGrid unk_10c;
    /* 0xb6c */ LetterGrid unk_b6c;
    /* 0xb94 */ InventoryBg unk_b94;
    /* 0x2174 */ TouchPromptBalloon unk_2174;
    /* 0x2234 */ CursorMotion unk_2234;
    /* 0x224c */ MenuCursorBuf0 unk_224c;
    /* 0x22b0 */ PopupChoiceMenu unk_22b0;
    /* 0x25b0 */ MenuErrorMessage unk_25b0;
    /* 0x26b8 */ MenuBottomButtons unk_26b8;
};

static inline BOOL Unk_ov107_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" PocketsFullMenu *PocketsFullMenu_Create();

void PocketsFullMenu::postInputUpdate();

extern "C" PocketsFullMenu *PocketsFullMenu_Create() { return new PocketsFullMenu(); }

BOOL PocketsFullMenu::vfunc_00() {
    initParts();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL PocketsFullMenu::vfunc_0c() {
    ProcBase_GetParent();
    MenuLauncher_onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PocketsFullMenu::onDraw() {
    PopupChoice_Draw(&unk_22b0);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2174.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&unk_224c);
    }
    drawHeldItem();
    if (testFlags(2)) {
        MenuBottomButtons_drawAt(&unk_26b8, unk_98);
        s32 t = unk_98 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_10c, 0, t);
        LetterGrid_drawPocketLetters(&unk_b6c, 0, t);
        InventoryBg_DrawSprite(&unk_b94, t);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov107_SceneEntry sPocketsFullMenuProfile;
extern "C" const s16 sFishReleaseProbeAngles[8];

extern "C" Unk_ov107_SceneEntry sPocketsFullMenuProfile = {(void *)PocketsFullMenu_Create, 0x9a, 0x9e};

BOOL PocketsFullMenu::execTransition() {
    static Unk_ov107_02296e78_Fn tbl[5] = {
        &PocketsFullMenu::transitionAct00,
        &PocketsFullMenu::transitionAct01,
        &PocketsFullMenu::transitionAct02,
        &PocketsFullMenu::transitionAct03,
        &PocketsFullMenu::transitionAct04};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void PocketsFullMenu::runMainState() {
    static Unk_ov107_02296e78_Fn tbl[24] = {
        &PocketsFullMenu::mainAct00,
        &PocketsFullMenu::mainAct01,
        &PocketsFullMenu::mainAct02,
        &PocketsFullMenu::mainAct03,
        &PocketsFullMenu::mainAct04,
        &PocketsFullMenu::mainAct05,
        &PocketsFullMenu::mainAct06,
        &PocketsFullMenu::mainAct07,
        &PocketsFullMenu::mainAct08,
        &PocketsFullMenu::mainAct09,
        &PocketsFullMenu::mainAct0A,
        &PocketsFullMenu::mainAct0B,
        &PocketsFullMenu::mainAct0C,
        &PocketsFullMenu::mainAct0D,
        &PocketsFullMenu::mainAct0E,
        &PocketsFullMenu::mainAct0F,
        &PocketsFullMenu::mainAct10,
        &PocketsFullMenu::mainAct11,
        &PocketsFullMenu::mainAct12,
        &PocketsFullMenu::mainAct13,
        &PocketsFullMenu::mainAct14,
        &PocketsFullMenu::mainAct15,
        &PocketsFullMenu::mainAct16,
        &PocketsFullMenu::mainAct17};
    (this->*tbl[unk_8d])();
}

BOOL PocketsFullMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PocketsFullMenu::execPhase3() { return TRUE; }

BOOL PocketsFullMenu::execPhase4() { return TRUE; }

BOOL PocketsFullMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void PocketsFullMenu::transitionAct00() {
    setupBgLayer6();
    loadInventoryBg();
    setTransitionState(1);
}

void PocketsFullMenu::transitionAct01() {
    loadObjGraphics();
    MenuBottomButtons_setLayoutSingle05(&unk_26b8, 0x65);
    InventoryItemGrid_LoadPockets(&unk_10c);
    disableLockedPockets();
    LetterGrid_LoadPocketLetters(&unk_b6c);
    LetterGrid_highlightLetterKinds(&unk_b6c, 0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -16);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_98 = getSlideOffsetY();
}

void PocketsFullMenu::transitionAct02() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, -16);
    unk_98 = getSlideOffsetY();
}

void PocketsFullMenu::transitionAct03() {
    TouchPromptBalloon_hide(&unk_2174, 1);
    hideCursor();
    MenuLauncher_setNextRequest(ProcBase_GetParent(this), 0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, -16);
    setTransitionState(4);
    unk_98 = getSlideOffsetY();
}

void PocketsFullMenu::transitionAct04()
{
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
        clearFlags(1);
        clearFlags(2);
    } else {
        applySlideOffset(6, 0, -16);
    }
    unk_98 = getSlideOffsetY();
}

void PocketsFullMenu::initParts()
{
    unk_94 = 0;
    InventoryItemGrid_Init(&unk_10c, 2);
    LetterGrid_init(&unk_b6c, 2);
    InventoryBg_Init(&unk_b94, 6);
    unk_b7 = 0x10;
    CursorMotion_reset(&unk_2234);
    unk_b5 = 0;
    unk_b8 = 0;
    PopupChoiceMenu_init(&unk_22b0, 3, 1, 0);
    if (canReleaseFish()) {
        setFlags(0x40);
    }
    unk_bf = 0;
}

void PocketsFullMenu::releaseResources()
{
    cancelBgTasks();
    InventoryBg_Exit(&unk_b94);
    InventoryItemGrid_Exit(&unk_10c);
    PopupChoice_ForceClose(&unk_22b0);
    MenuBottomButtons_freeTexts(&unk_26b8);
}

void PocketsFullMenu::preInputUpdate()
{
    preStateUpdate();
    unk_224c.vfunc_0c();
}

void PocketsFullMenu::postInputUpdate()
{
    postStateUpdate();
}

void PocketsFullMenu::preStateUpdate()
{
    cancelBgTasks();
    InventoryBg_PreUpdate(&unk_b94);
    InventoryItemGrid_PreUpdate(&unk_10c);
    LetterGrid_updateCursorLift(&unk_b6c);
    MenuBottomButtons_freeTexts(&unk_26b8);
}

void PocketsFullMenu::postStateUpdate()
{
    PopupChoice_Update(&unk_22b0);
    InventoryBg_Update(&unk_b94);
    if (TouchPromptBalloon_updatePrompt(&unk_2174)) {
        placeBalloon();
    }
}

void PocketsFullMenu::setupBgLayer6()
{
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketsFullMenu::loadInventoryBg()
{
    InventoryBg_Load(&unk_b94, 0);
}

void PocketsFullMenu::loadObjGraphics()
{
    InventoryBg_LoadObjGraphics(&unk_b94);
    MenuButtons_LoadTextColors(&unk_26b8);
}

void PocketsFullMenu::mainAct00()
{
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov107_02296270_Both()) {
        s32 r = getSlotAt(gTouchCurX, gTouchCurY + 0x10, 1);
        if (r != 0x10) {
            beginTouchOnSlot(r);
        } else if (MenuBottomButtonsBody_isTouched(&unk_26b8, 9)) {
            startCloseByTab();
        }
    }
}

void PocketsFullMenu::mainAct01()
{
    if (gTouchHeld == 0) {
        if (isSlotDisabled(unk_b6)) {
            setMainState(0);
            TouchPromptBalloon_setAutoCloseTimer(&unk_2174, 0x3c);
        } else {
            setMainState(3);
            runMainState();
        }
    } else if (isSlotDisabled(unk_b6) == 0 && TouchPromptBalloon_isOpenOrOpening(&unk_2174)) {
        if (unk_bf != 0) {
            unk_bf = *(volatile u8 *)&unk_bf - 1;
        } else {
            selectPocket(unk_b6, 1);
            setMainState(2);
        }
    } else {
        TouchPromptBalloon_commitOpen(&unk_2174);
    }
}

void PocketsFullMenu::mainAct02()
{
    if (gTouchHeld == 0) {
        setMainState(4);
    }
}

void PocketsFullMenu::mainAct03()
{
    if (TouchPromptBalloon_isOpenOrOpening(&unk_2174)) {
        if (unk_bf != 0) {
            unk_bf = *(volatile u8 *)&unk_bf - 1;
        } else {
            selectPocket(unk_b6, 1);
            setMainState(2);
        }
    }
}

void PocketsFullMenu::mainAct04()
{
    if (PopupChoiceMenuBody_isOpen(&unk_22b0)) {
        if (checkSwitchToButtons(1)) {
            cancelPopupForButtons();
        } else if (Unk_ov107_02296270_Both()) {
            s32 r = PopupChoiceMenuBody_hitTestRowOrLast(&unk_22b0, gTouchCurX, gTouchCurY);
            if (r >= 0) {
                PopupChoice_DecideRow(&unk_22b0, r, 1);
                unk_bc = unk_22b0.unk_2f9[r];
                setMainState(0xc);
            }
        }
    }
}

void PocketsFullMenu::mainAct05()
{
    if (checkSwitchToTouch()) {
        startTouchInput();
        TouchPromptBalloon_hide(&unk_2174, 1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateBalloonForCursor();
        moveCursorToTarget();
        TouchPromptBalloon_hide(&unk_2174, 0);
    } else if (isSlotDisabled(unk_b8) == 0 && (gPad[1] & 1) != 0) {
        if (isPocketSlot(unk_b8)) {
            if (!isSlotEmpty(unk_b8)) {
                selectPocket(unk_b8, 0);
            }
        } else if (unk_b8 == 0xf) {
            pressCloseButton();
        }
    } else if ((gPad[1] & 2) != 0) {
        hideCursor();
        startCloseByTab();
        TouchPromptBalloon_hide(&unk_2174, 0);
    } else {
        TouchPromptBalloon_commitOpen(&unk_2174);
    }
}

void PocketsFullMenu::mainAct06()
{
    if (checkSwitchToTouch()) {
        cancelPopupForButtons();
    } else if (PopupChoice_MoveCursor(&unk_22b0, takeRepeatedKeys(), &unk_bd, 0)) {
        moveCursorToPopupRow();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            MenuCursor_setPosePress(&unk_224c);
            setMainState(7);
        } else if ((f & 2) != 0) {
            cancelPopup();
        }
    }
}

void PocketsFullMenu::mainAct07()
{
    if (HandCursor_isAnimDone(&unk_224c)) {
        PopupChoice_DecideRow(&unk_22b0, unk_bd, 1);
        unk_bc = unk_22b0.unk_2f9[unk_bd];
        setMainState(0xc);
    }
}

void PocketsFullMenu::mainAct08()
{
    if (!MenuCursorBase_isMoving(&unk_224c)) {
        setMainState(unk_bb);
        if (unk_bb == 5) {
            setFocusSlot(unk_b8);
        }
        runMainState();
    }
}

void PocketsFullMenu::mainAct09()
{
    if (HandCursor_isAnimDone(&unk_224c)) {
        MenuBottomButtonsBody_setSelected(&unk_26b8, 9);
        setMainState(0xf);
        Snd_PlaySe(0x28);
    }
}

void PocketsFullMenu::mainAct0A()
{
    if (HandCursor_isAnimDone(&unk_224c)) {
        refreshCursor();
        setMainState(5);
    }
}

void PocketsFullMenu::mainAct0B()
{
    if (PopupChoiceMenuBody_isOpen(&unk_22b0)) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(6);
        } else {
            setMainState(4);
        }
    }
}

void PocketsFullMenu::mainAct0C()
{
    if (PopupChoice_TickDecideDelay(&unk_22b0)) {
        PopupChoice_Close(&unk_22b0, 0);
        TouchPromptBalloon_hide(&unk_2174, 1);
        if (HandCursor_getAnim(&unk_224c)) {
            showCursorAtSlot();
        }
        setMainState(0xd);
    }
}

void PocketsFullMenu::mainAct0D()
{
    if (PopupChoiceMenuBody_isClosed(&unk_22b0)) {
        onPopupChoice();
    }
}

void PocketsFullMenu::mainAct0E()
{
    if (MenuErrorMessage_update(&unk_25b0, 0)) {
        setMainState(unk_bb);
        HandCursor_enableObjWindow(&unk_224c);
    }
}

void PocketsFullMenu::mainAct0F()
{
    if (MenuBottomButtonsBody_stepPress(&unk_26b8)) {
        if (HandCursor_getAnim(&unk_224c)) {
            s32 a = MenuBottomButtonsBody_getPressOffset(&unk_26b8);
            s32 b = MenuBottomButtonsBody_getTargetX(&unk_26b8, -1);
            s32 c = MenuBottomButtonsBody_getTargetY(&unk_26b8, -1);
            MenuCursorBase_warpTo(&unk_224c, a + b, a + c);
        }
    } else {
        MenuCtrl_SetResult(0);
        unk_8c = 3;
        setPhase(1);
        TouchPromptBalloon_hide(&unk_2174, 1);
        hideCursor();
    }
}

void PocketsFullMenu::mainAct12()
{
    getLocalPlayerIndex();
    if (HeldInsect_GetStage() != 3) {
        unk_be = 5;
        setMainState(0x13);
    }
}

void PocketsFullMenu::mainAct13()
{
    if (unk_be != 0) {
        unk_be = *(volatile u8 *)&unk_be - 1;
    } else {
        closeWithSelection();
    }
}

void PocketsFullMenu::mainAct14()
{
    if (func_020951a0()) {
        closeWithSelection();
    }
}

void PocketsFullMenu::startTouchInput()
{
    hideCursor();
    clearFocusSlot();
    setMainState(0);
}

void PocketsFullMenu::startButtonInput()
{
    unk_b7 = 0x10;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(5);
    setFocusSlot(unk_b8);
}

void PocketsFullMenu::resumeInput()
{
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void PocketsFullMenu::beginTouchOnSlot(u32 a)
{
    unk_b6 = a;
    setMainState(1);
    u32 x = gTouchCurX;
    u32 y = gTouchCurY;
    unk_9c = getSlotX(unk_b6) - x;
    unk_a0 = getSlotY(unk_b6) - y;
    unk_b7 = a;
    TouchPromptBalloon_queueOpen(&unk_2174);
    TouchPromptBalloon_commitOpen(&unk_2174);
    unk_bf = 2;
    if (isSlotDisabled(a) == 0) {
        Inventory_PlayTouchSe();
    }
}

void PocketsFullMenu::showMessage(s32 a, u32 b) {
    volatile u8 v[1];
    if (b == 0xff) {
        unk_bb = unk_8d;
    } else {
        unk_bb = b;
    }
    v[0] = data_021edb68;
    v[0] = a;
    MenuErrorMessage_open(&unk_25b0, (void *)v, 1, 0);
    setMainState(0xe);
    HandCursor_disableObjWindow(&unk_224c);
}

void PocketsFullMenu::cancelBgTasks() {
    BgVramTask_cancel(unk_d4);
}

BOOL PocketsFullMenu::isPocketSlot(s32 a) {
    if ((u32)a <= 0xe) return TRUE;
    return FALSE;
}

u32 PocketsFullMenu::toPocketIndex(s32 a) {
    if (isPocketSlot(a)) return (u8)a;
    return 0;
}

u32 PocketsFullMenu::toSlotOrNone(s32 a) {
    if ((u32)a <= 0xe) return (u8)a;
    return 0x10;
}

u32 PocketsFullMenu::getSlotAt(s32 a, s32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(&unk_10c);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&unk_10c, t)) return 0x10;
        }
        return toSlotOrNone(t);
    }
    return 0x10;
}

void PocketsFullMenu::putItemInSlot(s32 a, s32 b, s32 c) {
    if (isPocketSlot(a)) {
        s32 t = toPocketIndex(a);
        InventoryItemGrid_SetSlotItem(&unk_10c, t, b, c);
        InventoryItemGrid_RefreshSlot(&unk_10c, t);
    }
}

s32 PocketsFullMenu::getSlotX(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotX(&unk_10c, toPocketIndex(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 PocketsFullMenu::getSlotY(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotY(&unk_10c, toPocketIndex(a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void PocketsFullMenu::disableLockedPockets() {
    u8 i = 0;
    do {
        if (isPocketLocked(i)) {
            InventoryItemGrid_DisableSlot(&unk_10c, toPocketIndex(i));
        }
        i++;
    } while (i <= 0xe);
}

BOOL PocketsFullMenu::isPocketLocked(s32 a) {
    u32 r;
    if (isSlotEmpty(a)) return FALSE;
    if (getSlotItemFlags(a)) return TRUE;
    r = getSlotItem(a);
    if ((r >= 0x137c && r <= 0x137c) || (r >= 0x1408 && r <= 0x1428) || (r >= 0x1471 && r <= 0x1491)) {
        return TRUE;
    }
    if (r >= 0x12e8 && r <= 0x131f) {
        if (!testFlags(0x40)) return TRUE;
    }
    return FALSE;
}

BOOL PocketsFullMenu::isSlotDisabled(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotDisabled(&unk_10c, toPocketIndex(a));
    }
    return FALSE;
}

BOOL PocketsFullMenu::isSlotEmpty(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotEmpty(&unk_10c, toPocketIndex(a));
    }
    return TRUE;
}

u32 PocketsFullMenu::getSlotItem(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotItem(&unk_10c, toPocketIndex(a));
    }
    return 0xfff1;
}

u32 PocketsFullMenu::getSlotItemFlags(s32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotFlags(&unk_10c, toPocketIndex(a));
    }
    return 0xf1;
}

void PocketsFullMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_10c);
    LetterGrid_clearCursorSlot(&unk_b6c);
}

void PocketsFullMenu::setFocusSlot(s32 a) {
    if (isPocketSlot(a)) {
        InventoryItemGrid_SetCursorSlot(&unk_10c, toPocketIndex(a));
        LetterGrid_clearCursorSlot(&unk_b6c);
    } else {
        clearFocusSlot();
    }
}

void PocketsFullMenu::placeBalloon() {
    s32 r6 = getSlotX(unk_b7) - 0x6d;
    s32 r4 = getSlotY(unk_b7) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    LabelBalloon_setPos(&unk_2174, r6, r4);
    if (isPocketSlot(unk_b7)) {
        InventoryItemGrid_ShowSlotName(&unk_10c, &unk_2174, toPocketIndex(unk_b7));
    }
}

void PocketsFullMenu::updateBalloonForCursor() {
    if (isPocketSlot(unk_b8)) {
        if (isSlotEmpty(unk_b8)) {
            TouchPromptBalloon_cancelQueuedOpen(&unk_2174);
        } else {
            unk_b7 = unk_b8;
            TouchPromptBalloon_queueOpen(&unk_2174);
        }
    } else {
        TouchPromptBalloon_cancelQueuedOpen(&unk_2174);
    }
}

void PocketsFullMenu::drawHeldItem() {
    if (!testFlags(0x20)) {
        if (unk_b5 != 0) {
            if (unk_b5 == 1) {
                InventoryItemGrid_DrawHeldItem(&unk_10c, unk_a4, unk_a8);
            }
        }
    }
}

void PocketsFullMenu::showCursor() {
    s32 r4 = getCursorTargetX();
    s32 r2 = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_224c, r4, r2);
    if (unk_b8 == 0xf) {
        MenuCursor_setAnimIfChanged(&unk_224c, 7);
    } else {
        MenuCursor_setAnimIfChanged(&unk_224c, 1);
    }
    refreshCursor();
}

s32 PocketsFullMenu::getCursorTargetX() {
    s32 r4 = getSlotX(unk_b8);
    if (testFlags(0x10)) {
        r4 += 0x100;
    } else if (testFlags(8)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 PocketsFullMenu::getCursorTargetY() {
    return getSlotY(unk_b8);
}

void PocketsFullMenu::hideCursor() {
    MenuCursor_setAnimIfChanged(&unk_224c, 0);
    unk_224c.vfunc_0c();
}

void PocketsFullMenu::moveCursorToTarget() {
    if (testFlags(4)) {
        s32 r5 = getCursorTargetX();
        s32 r2 = getCursorTargetY();
        MenuCursorBase_warpTo(&unk_224c, r5, r2);
        clearFlags(4);
    } else {
        s32 r5 = getCursorTargetX();
        s32 r2 = getCursorTargetY();
        MenuCursorBase_moveToEase(&unk_224c, r5, r2, 3, 1);
        unk_bb = unk_8d;
        setMainState(8);
    }
}

void PocketsFullMenu::moveCursorToPopupRow() {
    s32 r4 = PopupChoiceMenuBody_getRowX(&unk_22b0);
    s32 r2 = PopupChoiceMenuBody_getRowY(&unk_22b0, unk_bd);
    MenuCursorBase_moveToLinear(&unk_224c, r4, r2, 2);
    unk_bb = unk_8d;
    setMainState(8);
}

void PocketsFullMenu::cancelPopup() {
    s32 r4;
    s32 r2;
    unk_bc = 4;
    unk_bd = PopupChoice_DecideCancel(&unk_22b0, 1);
    r4 = PopupChoiceMenuBody_getRowX(&unk_22b0);
    r2 = PopupChoiceMenuBody_getRowY(&unk_22b0, unk_bd);
    MenuCursorBase_warpTo(&unk_224c, r4, r2);
    HandCursor_setAnimAtEnd(&unk_224c, 8);
    setMainState(0xc);
}

void PocketsFullMenu::cursorToPopupTop() {
    s32 r4;
    s32 r2;
    unk_bd = 0;
    r4 = PopupChoiceMenuBody_getRowX(&unk_22b0);
    r2 = PopupChoiceMenuBody_getRowY(&unk_22b0, unk_bd);
    MenuCursorBase_warpTo(&unk_224c, r4, r2);
    MenuCursor_setAnimIfChanged(&unk_224c, 7);
}

void PocketsFullMenu::showCursorAtSlot() {
    s32 r4 = getCursorTargetX();
    s32 r2 = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_224c, r4, r2);
    MenuCursor_setAnimIfChanged(&unk_224c, 1);
}

void PocketsFullMenu::refreshCursor() {
    MenuCursorBase_setPoseIdle(&unk_224c);
    unk_224c.vfunc_0c();
}

void PocketsFullMenu::pressCloseButton() {
    MenuCursor_setPosePress(&unk_224c);
    setMainState(9);
}

void PocketsFullMenu::onPopupChoice() {
    if (unk_bc == 4) {
        resumeInput();
    } else {
        static Unk_ov107_02296e78_Fn tbl[4] = {
            &PocketsFullMenu::onChoiceReleaseInsect,
            &PocketsFullMenu::onChoiceDrop,
            &PocketsFullMenu::onChoiceReleaseFish,
            &PocketsFullMenu::onChoiceBury,
        };
        (this->*tbl[unk_bc])();
    }
}

void PocketsFullMenu::openPopup(s32 a) {
    s32 r6, r2;
    PopupChoiceMenuBody_setRowsFromIds(&unk_22b0, (void *)&unk_22b0.unk_2f4, 0);
    r6 = getSlotX(unk_b9);
    r2 = getSlotY(unk_b9);
    if (a != 0) {
        PopupChoiceMenu_placeAboveBalloon(&unk_22b0, &unk_2174, r2);
    } else {
        PopupChoiceMenu_placeNearPoint(&unk_22b0, r6, r2);
    }
    PopupChoice_Open(&unk_22b0, 0);
    setMainState(0xb);
}

void PocketsFullMenu::cancelPopupForButtons() {
    unk_bc = 4;
    showCursorAtSlot();
    PopupChoice_Close(&unk_22b0, 0);
    setMainState(0xd);
}

void PocketsFullMenu::closeWithSelection() {
    MenuCtrl_SetIndex(unk_b9);
    MenuCtrl_SetResult(1);
    unk_8c = 3;
    setPhase(1);
    TouchPromptBalloon_hide(&unk_2174, 1);
    hideCursor();
}

void PocketsFullMenu::startCloseByTab() {
    MenuBottomButtonsBody_setSelected(&unk_26b8, 9);
    setMainState(0xf);
    Snd_PlaySe(0x28);
}

void PocketsFullMenu::storeNewItem() {
    u16 a;
    u16 b;
    u32 r6, r4;
    a = MenuCtrl_GetPocketsFullItem();
    Item_FromPlacedForm(&b, &a);
    r6 = b;
    r4 = 0;
    if (r6 == 0x156b) {
        r6 = func_020991b0();
        r4 = 1;
    }
    PlayerData_GetCurrent();
    func_0203c42c(PlayerData_getCatalog(), &b, 0, 1);
    getSlotItem(unk_b9);
    MenuCtrl_SetPocketsFullItem();
    putItemInSlot(unk_b9, r6, r4);
}

void PocketsFullMenu::setPopupChoices() {
    MenuCtrl_GetPocketSelectLabel();
    s32 r6 = getSlotItem(unk_b9);
    volatile u16 v = r6;
    s32 t = MenuCtrl_GetMode();
    BOOL ok = FALSE;
    u32 a = v;
    u32 b = v;
    if (b < 0x12b0 || a > 0x12e7) {
    } else {
        ok = TRUE;
    }
    if (ok) {
        ChoiceIdList_Add(&unk_22b0.unk_2f4, 0x10, 0);
    } else if (a >= 0x12e8 && a <= 0x131f) {
        ChoiceIdList_Add(&unk_22b0.unk_2f4, 0x10, 2);
    } else if (t == 0x2a) {
        ChoiceIdList_Add(&unk_22b0.unk_2f4, 0x10, 3);
    }
    if (InvItem_IsNotFishInsectOrFlower(r6)) {
        if (t == 0x2a) {
            ChoiceIdList_Add(&unk_22b0.unk_2f4, 1, 1);
        } else {
            ChoiceIdList_Add(&unk_22b0.unk_2f4, 0x10, 1);
        }
    }
    ChoiceIdList_Add(&unk_22b0.unk_2f4, 2, 4);
}

void PocketsFullMenu::selectPocket(u32 idx, u32 flag) {
    unk_b9 = idx;
    ChoiceIdList_Clear(&unk_22b0.unk_2f4, 4);
    if (isPocketSlot(idx)) {
        setPopupChoices();
        hideCursor();
        if (flag == 0) {
            TouchPromptBalloon_hide(&unk_2174, 1);
        }
        openPopup(flag);
    }
}

void PocketsFullMenu::moveCursorInGrid(void *pad) {
    s32 n = unk_b8;
    s32 q = 0;
    while (n >= 5) {
        n -= 5;
        q++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (MenuKeys_HasUp(pad) == 0 || q == 0) {
            if (n == 0) {
                unk_b8 = unk_b8 + 4;
                setFlags(8);
            } else {
                unk_b8 = unk_b8 - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (MenuKeys_HasDown(pad) == 0) {
            if (n == 4) {
                unk_b8 = unk_b8 - 4;
                setFlags(0x10);
            } else {
                unk_b8 = unk_b8 + 1;
            }
        }
    }
    if (testFlags(0x18) == 0) {
        if (MenuKeys_HasUp(pad)) {
            if (q > 0) {
                unk_b8 = unk_b8 - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (q < 2) {
                unk_b8 = unk_b8 + 5;
            } else {
                unk_b8 = 0xf;
                MenuCursor_switchToAnim07(&unk_224c);
            }
        }
    }
}

BOOL PocketsFullMenu::moveCursorByPad(void *pad) {
    u8 old = unk_b8;
    clearFlags(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (isPocketSlot(unk_b8)) {
        moveCursorInGrid(pad);
    } else if (unk_b8 == 0xf) {
        if (MenuKeys_HasUp(pad)) {
            unk_b8 = 0xe;
            MenuCursor_switchToAnim01(&unk_224c);
        }
    }
    if (old == unk_b8) {
        return FALSE;
    }
    return TRUE;
}

void PocketsFullMenu::onChoiceDrop() {
    s32 t = getSlotItem(unk_b9);
    if (MenuCtrl_GetMode() == 0x29) {
        unk_ac = FieldAction_RequestPlaceAtPending(gCommManager->unk_64, t);
    } else {
        unk_ac = FieldAction_RequestDropOrPlace(gCommManager->unk_64, t);
    }
    if (unk_ac == -1) {
        resumeInput();
        showMessage(3, 0xff);
    } else {
        setMainState(0x15);
    }
}

void PocketsFullMenu::mainAct15() {
    switch (FieldAction_PollDrop(unk_ac)) {
    case 1:
        endNewItemAction(0);
        storeNewItem();
        FieldAction_Release(unk_ac);
        unk_be = 10;
        setMainState(0x13);
        unk_ac = -1;
        break;
    case 2:
        FieldAction_Release(unk_ac);
        resumeInput();
        showMessage(3, 0xff);
        unk_ac = -1;
        break;
    }
}

void PocketsFullMenu::onChoiceReleaseInsect() {
    endNewItemAction(1);
    setMainState(0x10);
    mainAct10();
}

void PocketsFullMenu::mainAct10() {
    s32 r7 = getLocalPlayerIndex();
    if (HeldInsect_GetStage(r7) == 0) {
        struct { u16 a; } l;
        l.a = getSlotItem(unk_b9);
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12b0 && a <= 0x12e7) {
            ok = TRUE;
        }
        s32 r5 = ok ? a - 0x12b0 : -1;
        u8 t = func_02063b8c(0x3c);
        s16 x = (t - 0x1e) * 0xb6;
        x += *(s16 *)(func_02095204(4) + 0x8e);
        HeldInsect_Start((u8)r5, r7);
        HeldInsect_Release(r7, x);
        PlayerActor_LocalReleaseCatch(0);
        sendInsectReleasePacket((u8)r5, t);
        setMainState(0x12);
        storeNewItem();
    }
}

void PocketsFullMenu::sendInsectReleasePacket(u8 a, u8 b) {
    u8 buf[3];
    if (CommManager_isOnline(gCommManager)) {
        buf[0] = 1;
        buf[1] = a;
        buf[2] = b;
        void *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, buf, 3);
        CommManager_endRecord(g, 0x16, 4);
    }
}

BOOL PocketsFullMenu::canReleaseFish() {
    s32 t = MenuCtrl_GetMode();
    u8 k = getLocalPlayerIndex();
    if (t == 0x2c) {
        return FishCatch_GetReelTarget(&unk_c0, k);
    }
    u8 *p = func_02095204(4);
    void *q = p + 0x5c;
    s32 i = 0;
    s32 base = *(s16 *)(p + 0x8e);
    for (; i < 8; i++) {
        if (func_02030d78(&unk_c0, q, (s16)(base + sFishReleaseProbeAngles[i]), 0x7800, 0xa00, 0xc)) {
            return TRUE;
        }
    }
    return FALSE;
}

void PocketsFullMenu::onChoiceReleaseFish() {
    endNewItemAction(1);
    unk_be = 5;
    setMainState(0x11);
    mainAct11();
}

void PocketsFullMenu::mainAct11() {
    if (*(volatile u8 *)&unk_be != 0) {
        unk_be = unk_be - 1;
    } else {
        u8 k = getLocalPlayerIndex();
        s32 t = getSlotItem(unk_b9);
        if (FishCatch_StartRelease(k, t, &unk_c0)) {
            volatile u16 v = t;
            BOOL ok = FALSE;
            u32 a = v;
            u32 b = v;
            s32 idx;
            if (b < 0x12e8 || a > 0x131f) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                idx = a - 0x12e8;
            } else {
                idx = -1;
            }
            sendFishReleasePacket((u8)idx);
            unk_be = 0x14;
            setMainState(0x13);
            storeNewItem();
        }
    }
}

void PocketsFullMenu::sendFishReleasePacket(u8 v) {
    u8 buf[7];
    u8 tmp[5];
    if (CommManager_isOnline(gCommManager)) {
        buf[0] = 2;
        buf[1] = v;
        NetBuf_PackPair20(tmp, unk_c0, unk_c8);
        MI_CpuCopy8(tmp, &buf[2], 5);
        void *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, buf, 7);
        CommManager_endRecord(g, 0x16, 4);
    }
}

void PocketsFullMenu::onChoiceBury() {
    s32 t = getSlotItem(unk_b9);
    Unk_ov107_Comm *g = gCommManager;
    unk_ac = FieldAction_RequestToolAtPending(g->unk_64, 2, 0, t);
    if (unk_ac == -1) {
        resumeInput();
        showMessage(3, 0xff);
    } else {
        u16 *p = PendingUnit_GetActivePosOfAid(g->unk_68);
        u32 w = *p;
        unk_cc = (s32)w >> 8;
        unk_d0 = w & 0xff;
        setMainState(0x16);
    }
}

void PocketsFullMenu::mainAct16() {
    switch (FieldAction_PollResult(unk_ac)) {
    case 1:
        setMainState(0x17);
        mainAct17();
        break;
    case 2:
        resumeInput();
        showMessage(3, 0xff);
        break;
    default:
        return;
    }
    FieldAction_Release(unk_ac);
    unk_ac = -1;
}

void PocketsFullMenu::mainAct17() {
    u16 v;
    u32 buf[3];
    FieldPos_FromUnitCenter(buf, unk_cc, unk_d0);
    v = getSlotItem(unk_b9);
    if (PlayerActor_LocalRequestBuryItem(buf, &v)) {
        storeNewItem();
        setMainState(0x14);
    }
}

u8 PocketsFullMenu::getLocalPlayerIndex() {
    Unk_ov107_Comm *g = gCommManager;
    u32 v = g->unk_64;
    if (CommManager_isSlotActive(g, v)) {
        return (u8)v;
    }
    return 0;
}

void PocketsFullMenu::endNewItemAction(BOOL flag) {
    u8 buf[2];
    s32 t = MenuCtrl_GetMode();
    u8 k = getLocalPlayerIndex();
    switch (t) {
    case 0x29:
    case 0x2a:
        if (flag == 0) {
            break;
        }
        PendingUnit_ClearActiveOfAid();
        if (CommManager_isOnline(gCommManager)) {
            buf[0] = 0x17;
            buf[1] = k;
            void *g = gCommManager;
            CommManager_beginRecord(g);
            CommManager_writeRecord(g, buf, 2);
            CommManager_endRecord(g, 0x16, 4);
        }
        break;
    case 0x2b:
        HeldInsect_Remove(k, 1);
        break;
    case 0x2c:
        FishCatch_EndForShadow(MenuCtrl_GetPtrArg0());
        break;
    }
}

BOOL PocketsFullMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketsFullMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

void PocketsFullMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }

extern "C" const s16 sFishReleaseProbeAngles[8] = {0, 0x2000, -0x2000, 0x4000, -0x4000, 0x6000, -0x6000, 0x7fff};
