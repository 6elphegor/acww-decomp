#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#undef postCreate
#undef vfunc_14

extern "C" {
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(void *a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Snd_PlaySe(s32 a);
void MenuCtrl_SetChosenItems(void *p);
s32 MenuCtrl_RestorePockets();
void MenuCtrl_BackupPockets();
void MenuCtrl_SetResult(s32 a);
s32 MenuCtrl_IsResultOk();
void MenuCtrl_SetIndex(u32 a);
s32 MenuCtrl_GetMode();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void String_Load2dMenu(void *p, s32 a);
s32 Comm_IsSeqConfirmed(s32 a);
s32 Pocket_FindEmpty();
BOOL Clock_GetWeekday();
void *ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *a, void *b, u32 c);
void Inventory_PlayPickUpSe();
void Inventory_PlayTouchSe();
void Inventory_PlayPutDownSe(...);
void InventoryItemGrid_LoadPockets(void *p);
void InventoryItemGrid_LoadBox(void *p, void *q);
void LetterGrid_LoadPocketLetters(void *p);
void InventoryItemGrid_DrawBox(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void InventoryBg_DrawSprite(void *p, s32 a);
BOOL func_ov094_02292414(u32 v);
BOOL InvItem_IsTurnipFishOrInsect(u32 v);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *q, s32 b);
BOOL PopupChoice_TickDecideDelay(void *p);
s32 PopupChoice_DecideCancel(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *a);
void PopupChoice_Update(void *a);
void PopupChoice_Close(void *p, s32 x);
void InventoryBg_Exit(void *a);
void InventoryBg_Update(void *a);
void InventoryBg_PreUpdate(void *a);
void InventoryBg_LoadObjGraphics(void *a);
void InventoryBg_Load(void *a, s32 b);
void InventoryBg_Init(void *a, s32 b);
BOOL InventoryItemGrid_IsSlotEmpty(void *p, u32 v);
void InventoryItemGrid_DrawHeldItem(void *p, s32 a, s32 b);
void InventoryItemGrid_DisableSlot(void *p, u32 v);
BOOL InventoryItemGrid_IsSlotDisabled(void *p, u32 v);
void InventoryItemGrid_SetHeldItem(void *p, u32 a, u32 b);
void InventoryItemGrid_RefreshSlot(void *p, u32 a);
void InventoryItemGrid_SetSlotItem(void *p, u32 a, u32 b, u32 c);
void InventoryItemGrid_ClearSlot(void *p, u32 v);
u32 InventoryItemGrid_GetSlotFlags(void *p, u32 v);
u32 InventoryItemGrid_GetSlotItem(void *p, u32 v);
void InventoryItemGrid_MarkSlot(void *p, u32 v);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_SetCursorSlot(void *p, u32 v);
void InventoryItemGrid_ClearCursorSlot(void *p);
s32 InventoryItemGrid_GetSlotY(void *p, u32 v);
s32 InventoryItemGrid_GetSlotX(void *p, u32 v);
void InventoryItemGrid_ShowSlotName(void *p, void *q, u32 v);
u32 InventoryItemGrid_FindBoxSlotAt(void *p, u32 a, u32 b);
u32 InventoryItemGrid_FindPocketSlotAt(void *p);
void InventoryItemGrid_Exit(void *a);
void InventoryItemGrid_PreUpdate(void *a);
void InventoryItemGrid_Init(void *a, s32 b);
extern void *gCommManager;
extern u8 gSaveLostAndFound[];
extern u8 gSaveRecycleBin[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern s32 gCurrentHeap;
}

class ShopSellMenu;

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
    void drawPocketLetters(s32, s32);
    void highlightLetterKinds(u32);
    void clearMarks();
    void clearCursorSlot();
    void updateCursorLift();
    void init(s32);
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
    void setAutoCloseTimer(u8);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    void hide(s32);
    s32 updatePrompt();
    u32 unk_04[(0xc0 - 4) / 4];
};

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();
    void startLinear(s32, s32, s32);
    s32 setPos(s32, s32);
    s32 getY();
    s32 getX();
    BOOL update();
    void reset();
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
    void init(s32, s32, const char *);
    u32 unk_00[0x2f8 / 4];
    u8 unk_2f8;
    u8 choiceValues[7];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32);
    u32 unk_00[0x108 / 4];
};

class LabelString {
public:
    LabelString();
    ~LabelString();
    void redrawAligned(s32, s32);
    void createLabel(u32, u32, u32, u8, u8, s32);
    void destroyLabel();
    u32 unk_00[0x40 / 4];
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

    void applySlideOffset(s32, s32, s32);
    void setSlideExtent(s32);
    void beginSubSlideOut(s32, s32, s32, s32);
    void beginSubSlideIn(s32, s32, s32, s32);
    s32 stepSlideOut(s32);
    BOOL stepSlideIn(s32);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    u32 takeRepeatedKeys();
    u32 checkSwitchToTouch();
    s32 checkSwitchToButtons(s32);
    void setTransitionState(u8);
    void setMainState(u8);
    void setPhase(u8);

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


class LabelBalloon {
public:
    void setPos(s32, s32);
    void setPopUpward();
    void setPopDownward();
};

class HandCursor {
public:
    s32 isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32);
    s32 enableObjWindow();
};

class BgVramTask {
public:
    void cancel();
};

class PopupChoiceMenuBody {
public:
    s32 getRowY(s32);
    s32 getRowX();
    s32 hitTestRowOrLast(s32, s32);
    BOOL isClosed();
    BOOL isOpen();
};

class MenuCursorBase {
public:
    void drawWrapped();
    s32 getFrameScreenY();
    s32 getFrameScreenX();
    BOOL isMoving();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void moveToEase(s32, s32, s32, s32);
    void moveToLinear(s32, s32, s32);
    void warpTo(s32, s32);
    void setPoseIdle();
    void setPoseRelease();
};

class MenuCursor {
public:
    void setPosePress();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32);
};

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32, s32);
};

typedef void (ShopSellMenu::*Unk_ov100_02297778_Fn)();

// Vtable 0x02297778
class ShopSellMenu : public MenuProc {
public:
    ShopSellMenu()
        : vramTask(), itemGrid(), letterGrid(), inventoryBg(), nameBalloon(), flyMotion(), cursor(), choiceMenu(), errorMessage(), textLabels() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32);
    void setFlags(u32);
    BOOL testFlags(u32);
    BOOL isResultSent();
    void sendItemsRecord(u8);
    s32 packItemList(u16 *);
    void confirm();
    void cancel();
    void setQuitLabel(s32);
    void setOkLabel(s32);
    void * allocTextLabel();
    void resetTextLabels();
    BOOL moveCursorByPad(void *, s32);
    void moveCursorOnButtons(void *);
    void moveCursorInBox(void *, s32);
    void moveCursorInPockets(void *, s32);
    void cancelChoiceList();
    s32 applyChoice();
    void startExchange(u8);
    void startPutDown(u8);
    void startPickUp();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void mainAct15();
    void mainAct14();
    void mainAct13();
    void mainAct12();
    void mainAct11();
    void mainAct10();
    void mainAct0F();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void mainAct07();
    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void transitionAct06();
    void transitionAct05();
    void transitionAct04();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ BgVramTaskPair vramTask[1];
    /* 0xcc */ InventoryItemGrid itemGrid;
    /* 0xb2c */ LetterGrid letterGrid;
    /* 0xb54 */ InventoryBg inventoryBg;
    /* 0x2134 */ TouchPromptBalloon nameBalloon;
    /* 0x21f4 */ CursorMotion flyMotion;
    /* 0x220c */ MenuCursorBuf0 cursor;
    /* 0x2270 */ PopupChoiceMenu choiceMenu;
    /* 0x2570 */ MenuErrorMessage errorMessage;
    /* 0x2678 */ LabelString textLabels[2];
    /* 0x26f8 */ u32 stateFlags;
    /* 0x26fc */ s32 pocketsSlideY;
    /* 0x2700 */ s32 boxSlideY;
    /* 0x2704 */ s32 grabOffsetX;
    /* 0x2708 */ s32 grabOffsetY;
    /* 0x270c */ s32 heldX;
    /* 0x2710 */ s32 heldY;
    /* 0x2714 */ u16 boxItems[15];
    /* 0x2732 */ u16 initialBoxItems[15];
    /* 0x2750 */ u16 heldItem;
    /* 0x2752 */ s16 sendSeq;
    /* 0x2754 */ u8 heldItemFlags;
    /* 0x2755 */ u8 heldKind;
    /* 0x2756 */ u8 touchedSlot;
    /* 0x2757 */ u8 balloonSlot;
    /* 0x2758 */ u8 pickUpSlot;
    /* 0x2759 */ u8 cursorSlot;
    /* 0x275a */ u8 unk_275a;
    /* 0x275b */ u8 actionSlot;
    /* 0x275c */ u8 returnState;
    /* 0x275d */ u8 chosenAction;
    /* 0x275e */ u8 choiceRow;
    /* 0x275f */ u8 numTextLabels;
    /* 0x2760 */ u8 delayTimer;
};

typedef ShopSellMenu S;

struct Unk_ov100_SceneEntry {
    ShopSellMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" ShopSellMenu *ShopSellMenu_Create();

extern "C" void ShopSellMenu_PlaceCursorAtTarget(S *s);
extern "C" void ShopSellMenu_PlaceCursorOnFirstChoice(S *s);
extern "C" void ShopSellMenu_PickCancelChoice(S *s);
extern "C" void ShopSellMenu_MoveCursorToChoice(S *s);
extern "C" void ShopSellMenu_MoveCursorToTarget(S *s);
extern "C" void ShopSellMenu_HideCursor(S *s);
extern "C" s32 ShopSellMenu_GetCursorTargetY(S *s);
extern "C" s32 ShopSellMenu_GetCursorTargetX(S *s);
extern "C" void ShopSellMenu_ShowCursor(S *s);
extern "C" void ShopSellMenu_ExchangeHeldItem(S *s, u32 a);
extern "C" void ShopSellMenu_ReleaseHeldItem(S *s, u32 a);
extern "C" void ShopSellMenu_PickUpItem(S *s, u32 a);
extern "C" void ShopSellMenu_TrackFlyingItem(S *s);
extern "C" void ShopSellMenu_TrackCursor(S *s);
extern "C" void ShopSellMenu_TrackTouch(S *s);
extern "C" void ShopSellMenu_DrawHeldItem(S *s);
extern "C" void ShopSellMenu_UpdateNameBalloon(S *s);
extern "C" void ShopSellMenu_PlaceNameBalloon(S *s);
extern "C" BOOL ShopSellMenu_HasTouchMoved(S *s);
extern "C" void ShopSellMenu_MarkSlot(S *s, u32 a);
extern "C" void ShopSellMenu_ClearMarks(S *s);
extern "C" void ShopSellMenu_SetCursorSlot(S *s, u32 a);
extern "C" void ShopSellMenu_ClearCursorSlots(S *s);
extern "C" u32 ShopSellMenu_GetSlotFlags(S *s, u32 a);
extern "C" u32 ShopSellMenu_GetSlotItem(S *s, u32 a);
extern "C" BOOL ShopSellMenu_IsSlotEmpty(S *s, u32 a);
extern "C" BOOL ShopSellMenu_IsSlotDisabled(S *s, u32 a);
extern "C" void ShopSellMenu_DisableRejectedItems(S *s);
extern "C" BOOL ShopSellMenu_IsItemRejected(S *s, u32 a);
extern "C" u32 ShopSellMenu_GetSlotY(S *s, u32 a);
extern "C" u32 ShopSellMenu_GetSlotX(S *s, u32 a);
extern "C" u32 ShopSellMenu_GridToBoxSlot(S *s, u32 a);
extern "C" u32 ShopSellMenu_GridToBoxSlotOr0F(S *s, u32 a);
extern "C" void ShopSellMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c);
extern "C" BOOL ShopSellMenu_DropHeldItem(S *s, u32 a);
extern "C" u32 ShopSellMenu_FindSlotAt(S *s, u32 a, u32 b, s32 c);
extern "C" u32 ShopSellMenu_GridToPocketSlot(S *s, u32 a);
extern "C" u32 ShopSellMenu_ToGridSlot(S *s, u32 a);
extern "C" BOOL ShopSellMenu_IsButtonSlot(S *s, u32 a);
extern "C" BOOL ShopSellMenu_IsBoxSlot(S *s, u32 a);
extern "C" BOOL ShopSellMenu_IsPocketSlot(S *s, u32 a);
extern "C" void ShopSellMenu_CancelUploads(S *s);
extern "C" void ShopSellMenu_QuickMove(S *s, u32 a, u32 b);
extern "C" void ShopSellMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 b);
extern "C" void ShopSellMenu_StartFlyHeldItem(S *s, u32 a, u32 b);
extern "C" void ShopSellMenu_PickUpWithHand(S *s, u32 a);
extern "C" void ShopSellMenu_PickUpWithTouch(S *s, u32 a);
extern "C" void ShopSellMenu_TouchItem(S *s, u32 a);
extern "C" void ShopSellMenu_ResumeInput(S *s);
extern "C" void ShopSellMenu_StartButtonInput(S *s);
extern "C" void ShopSellMenu_StartTouchInput(S *s);
extern "C" u32 ShopSellMenu_FindFreeBoxSlot(S *s);
extern "C" u32 ShopSellMenu_FindFreePocket(S *s);
extern "C" void ShopSellMenu_LoadObjGraphics(S *s);
extern "C" void ShopSellMenu_LoadTopBg(S *s);
extern "C" void ShopSellMenu_LoadInventoryBg(S *s);
extern "C" void ShopSellMenu_SetupBgLayers(S *s);
extern "C" void ShopSellMenu_PostStateUpdate(S *s);
extern "C" void ShopSellMenu_PreStateUpdate(S *s);
extern "C" void ShopSellMenu_PostInputUpdate(S *s);
extern "C" void ShopSellMenu_PreInputUpdate(S *s);
extern "C" void ShopSellMenu_Exit(S *s);
extern "C" void ShopSellMenu_Init(S *s);

extern "C" u32 ShopSellMenu_GetSlotY(S *s, u32 a);
u32 ShopSellMenu_GetSlotX(S *s, u32 a);
u32 ShopSellMenu_GridToBoxSlot(S *s, u32 a);
u32 ShopSellMenu_GridToBoxSlotOr0F(S *s, u32 a);
void ShopSellMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c);
BOOL ShopSellMenu_DropHeldItem(S *s, u32 a);
u32 ShopSellMenu_FindSlotAt(S *s, u32 a, u32 b, s32 c);
u32 ShopSellMenu_GridToPocketSlot(S *s, u32 a);
u32 ShopSellMenu_ToGridSlot(S *s, u32 a);
BOOL ShopSellMenu_IsButtonSlot(S *s, u32 a);
BOOL ShopSellMenu_IsBoxSlot(S *s, u32 a);
BOOL ShopSellMenu_IsPocketSlot(S *s, u32 a);
u32 ShopSellMenu_FindFreeBoxSlot(S *s);
u32 ShopSellMenu_FindFreePocket(S *s);
void ShopSellMenu_QuickMove(S *s, u32 a, u32 b);
void ShopSellMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 b);
void ShopSellMenu_StartFlyHeldItem(S *s, u32 a, u32 b);
void ShopSellMenu_PickUpWithHand(S *s, u32 a);
void ShopSellMenu_PickUpWithTouch(S *s, u32 a);
void ShopSellMenu_TouchItem(S *s, u32 a);
void ShopSellMenu_ResumeInput(S *s);
void ShopSellMenu_StartButtonInput(S *s);
void ShopSellMenu_StartTouchInput(S *s);

static inline BOOL Unk_ov100_02296b58_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" ShopSellMenu *ShopSellMenu_Create() { return new ShopSellMenu(); }

BOOL ShopSellMenu::vfunc_00() {
    ShopSellMenu_Init(this);
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL ShopSellMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    ShopSellMenu_Exit(this);
    return TRUE;
}

BOOL ShopSellMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    nameBalloon.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&cursor)->drawWrapped();
    }
    ShopSellMenu_DrawHeldItem(this);
    if (testFlags(0x80)) {
        InventoryItemGrid_DrawBox(&itemGrid, 0, boxSlideY);
    }
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&itemGrid, 0, pocketsSlideY);
        ((LetterGrid *)&letterGrid)->drawPocketLetters(0, pocketsSlideY);
        InventoryBg_DrawSprite(&inventoryBg, pocketsSlideY);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov100_SceneEntry sShopSellMenuProfile;

// Scene registration entry read by main (0x020e2100 etc.): factory, then two ids
extern "C" Unk_ov100_SceneEntry sShopSellMenuProfile = {ShopSellMenu_Create, 0x93, 0x97};

BOOL ShopSellMenu::execTransition() {
    static Unk_ov100_02297778_Fn tbl[7] = {
        &ShopSellMenu::transitionAct00, &ShopSellMenu::transitionAct01,
        &ShopSellMenu::transitionAct02, &ShopSellMenu::transitionAct03,
        &ShopSellMenu::transitionAct04, &ShopSellMenu::transitionAct05,
        &ShopSellMenu::transitionAct06};
    ShopSellMenu_PreStateUpdate(this);
    (this->*tbl[transitionState])();
    ShopSellMenu_PostStateUpdate(this);
    return TRUE;
}

void ShopSellMenu::runMainState() {
    static Unk_ov100_02297778_Fn tbl[22] = {
        &ShopSellMenu::mainAct00, &ShopSellMenu::mainAct01,
        &ShopSellMenu::mainAct02, &ShopSellMenu::mainAct03,
        &ShopSellMenu::mainAct04, &ShopSellMenu::mainAct05,
        &ShopSellMenu::mainAct06, &ShopSellMenu::mainAct07,
        &ShopSellMenu::updateCursorMove, &ShopSellMenu::updateCursorPress,
        &ShopSellMenu::updateCursorRelease, &ShopSellMenu::mainAct0B,
        &ShopSellMenu::mainAct0C, &ShopSellMenu::mainAct0D,
        &ShopSellMenu::mainAct0E, &ShopSellMenu::mainAct0F,
        &ShopSellMenu::mainAct10, &ShopSellMenu::mainAct11,
        &ShopSellMenu::mainAct12, &ShopSellMenu::mainAct13,
        &ShopSellMenu::mainAct14, &ShopSellMenu::mainAct15};
    (this->*tbl[mainState])();
}

BOOL ShopSellMenu::execMain() {
    ShopSellMenu_PreInputUpdate(this);
    runMainState();
    ShopSellMenu_PostInputUpdate(this);
    return TRUE;
}

BOOL ShopSellMenu::execPhase3() { return TRUE; }

BOOL ShopSellMenu::execPhase4() { return TRUE; }

BOOL ShopSellMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void ShopSellMenu::transitionAct00() {
    ShopSellMenu_SetupBgLayers(this);
    ShopSellMenu_LoadInventoryBg(this);
    setTransitionState(1);
}

void ShopSellMenu::transitionAct01() {
    ShopSellMenu_LoadObjGraphics(this);
    InventoryItemGrid_LoadPockets(&itemGrid);
    InventoryItemGrid_LoadBox(&itemGrid, boxItems);
    ShopSellMenu_DisableRejectedItems(this);
    LetterGrid_LoadPocketLetters(&letterGrid);
    ((LetterGrid *)&letterGrid)->highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    pocketsSlideY = getSlideOffsetY();
}

void ShopSellMenu::transitionAct02() {
    BOOL b = stepSlideIn(0);
    applySlideOffset(6, 0, 0);
    pocketsSlideY = getSlideOffsetY();
    if (b) {
        ShopSellMenu_LoadTopBg(this);
        beginSubSlideIn(2, 0, 1, 0x30);
        setSlideExtent(0x80);
        setFlags(0x80);
        Gfx2d_ShowLayer(4);
        applySlideOffset(4, 0, 0);
        boxSlideY = getSlideOffsetY();
        setTransitionState(3);
    }
}

void ShopSellMenu::transitionAct03() {
    S *const s = this;
    if (s->stepSlideIn(0)) {
        s->setPhase(2);
        ShopSellMenu_ResumeInput(s);
    }
    s->applySlideOffset(4, 0, 0);
    s->boxSlideY = s->getSlideOffsetY();
}

void ShopSellMenu::transitionAct04() {
    S *const s = this;
    if (s->isResultSent()) {
        ((TouchPromptBalloon *)&s->nameBalloon)->hide(1);
        ShopSellMenu_HideCursor(s);
        ((MenuLauncher *)ProcBase_GetParent(s))->setNextRequest(0x44, 1);
        s->beginSubSlideOut(2, 4, 1, 0x30);
        s->setSlideExtent(0x80);
        s->applySlideOffset(4, 0, 0);
        s->boxSlideY = s->getSlideOffsetY();
        s->setTransitionState(5);
    }
}

void ShopSellMenu::transitionAct05() {
    S *const s = this;
    if (s->stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        s->clearFlags(0x80);
        s->beginSubSlideOut(8, 0, 0, 0x30);
        s->applySlideOffset(6, 0, 0);
        s->setTransitionState(6);
        s->transitionAct06();
    } else {
        s->applySlideOffset(4, 0, 0);
        s->boxSlideY = s->getSlideOffsetY();
    }
}

void ShopSellMenu::transitionAct06() {
    S *const s = this;
    if (s->stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        s->setPhase(5);
        s->clearFlags(1);
        s->clearFlags(2);
    } else {
        s->applySlideOffset(6, 0, 0);
    }
    s->pocketsSlideY = s->getSlideOffsetY();
}

extern "C" void ShopSellMenu_Init(S *s) {
    s32 i;
    s->stateFlags = 0;
    InventoryItemGrid_Init(&s->itemGrid, 1);
    ((LetterGrid *)&s->letterGrid)->init(2);
    InventoryBg_Init(&s->inventoryBg, 6);
    s->balloonSlot = 0x20;
    ((CursorMotion *)&s->flyMotion)->reset();
    s->heldKind = 0;
    s->cursorSlot = 0;
    ((PopupChoiceMenu *)&s->choiceMenu)->init(3, 1, 0);
    s->numTextLabels = 0;
    switch (MenuCtrl_GetMode()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->boxItems[i] = 0xfff1;
        }
        s->setFlags(0x200);
        break;
    case 0x1f:
        MI_CpuCopy8(gSaveLostAndFound, s->boxItems, 0x1e);
        break;
    case 0x20:
        MI_CpuCopy8(gSaveRecycleBin, s->boxItems, 0x1e);
        break;
    }
    MI_CpuCopy8(s->boxItems, s->initialBoxItems, 0x1e);
    MenuCtrl_BackupPockets();
}

extern "C" void ShopSellMenu_Exit(S *s) {
    ShopSellMenu_CancelUploads(s);
    InventoryBg_Exit(&s->inventoryBg);
    InventoryItemGrid_Exit(&s->itemGrid);
    PopupChoice_ForceClose(&s->choiceMenu);
    s->resetTextLabels();
}

extern "C" void ShopSellMenu_PreInputUpdate(S *s) {
    ShopSellMenu_PreStateUpdate(s);
    s->cursor.vfunc_0c();
}

extern "C" void ShopSellMenu_PostInputUpdate(S *s) {
    ShopSellMenu_PostStateUpdate(s);
}

extern "C" void ShopSellMenu_PreStateUpdate(S *s) {
    ShopSellMenu_CancelUploads(s);
    InventoryBg_PreUpdate(&s->inventoryBg);
    InventoryItemGrid_PreUpdate(&s->itemGrid);
    ((LetterGrid *)&s->letterGrid)->updateCursorLift();
    s->resetTextLabels();
}

extern "C" void ShopSellMenu_PostStateUpdate(S *s) {
    PopupChoice_Update(&s->choiceMenu);
    InventoryBg_Update(&s->inventoryBg);
    if (((TouchPromptBalloon *)&s->nameBalloon)->updatePrompt()) {
        ShopSellMenu_PlaceNameBalloon(s);
    }
}

extern "C" void ShopSellMenu_SetupBgLayers(S *s) {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

extern "C" void ShopSellMenu_LoadInventoryBg(S *s) {
    InventoryBg_Load(&s->inventoryBg, 0);
}

extern "C" void ShopSellMenu_LoadTopBg(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadScreenFile((void *)"menu/inventory/b_itm_bg_tra1.bsc", h, 4);
    Gfx2d_LoadCharFile((void *)"menu/inventory/b_itm_sell.bch", h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = MenuCtrl_GetMode();
    u8 *a = NULL;
    u8 *b = NULL;
    switch (v) {
    case 0x1d:
        a = (u8 *)"menu/inventory/ten6.bpl";
        b = (u8 *)"menu/inventory/tanu.bch";
        break;
    case 0x1e:
        a = (u8 *)"menu/inventory/ten7.bpl";
        b = (u8 *)"menu/inventory/kinu.bch";
        break;
    case 0x1f:
        a = (u8 *)"menu/inventory/ten8.bpl";
        b = (u8 *)"menu/inventory/lost.bch";
        break;
    case 0x20:
        a = (u8 *)"menu/inventory/ten9.bpl";
        b = (u8 *)"menu/inventory/garb.bch";
        break;
    }
    if (a != NULL) {
        Gfx2d_LoadPaletteFile(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        Gfx2d_LoadCharFile(b, h, 4, 0x208, 0x208, 0x238);
    }
    s->setOkLabel(0);
    s->setQuitLabel(0);
}

extern "C" void ShopSellMenu_LoadObjGraphics(S *s) {
    InventoryBg_LoadObjGraphics(&s->inventoryBg);
}

void ShopSellMenu::mainAct00() {
    S *const s = this;
    if (s->checkSwitchToButtons(1)) {
        ShopSellMenu_StartButtonInput(s);
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = ShopSellMenu_FindSlotAt(s, x, y, 1);
            if (r != 0x20) {
                ShopSellMenu_TouchItem(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x50 && y <= 0x70) {
                if (y >= 0x60) {
                    s->cancel();
                } else {
                    s->confirm();
                }
            }
        }
    }
}

void ShopSellMenu::mainAct01() {
    S *const s = this;
    if (gTouchHeld == 0) {
        s->setMainState(0);
        ((TouchPromptBalloon *)&s->nameBalloon)->setAutoCloseTimer(0x3c);
    } else if (s->testFlags(4) && ShopSellMenu_HasTouchMoved(s)) {
        ShopSellMenu_PickUpWithTouch(s, s->touchedSlot);
    } else {
        ((TouchPromptBalloon *)&s->nameBalloon)->commitOpen();
    }
}

void ShopSellMenu::mainAct02() {
    S *const s = this;
    if (s->checkSwitchToButtons(1)) {
        s->cancelChoiceList();
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 t = ((PopupChoiceMenuBody *)&s->choiceMenu)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                PopupChoice_DecideRow(&s->choiceMenu, t, 1);
                s->chosenAction = s->choiceMenu.choiceValues[t - 0];
                s->setMainState(0x12);
            }
        }
    }
}

void ShopSellMenu::mainAct03() {
    S *const s = this;
    ShopSellMenu_TrackTouch(s);
    ShopSellMenu_ClearMarks(s);
    s32 x = s->heldY + 8;
    s32 t = ShopSellMenu_FindSlotAt(s, s->heldX + 8, x, 0);
    if (s->testFlags(0x200)) {
        if ((ShopSellMenu_IsBoxSlot(s, t) && ShopSellMenu_IsPocketSlot(s, s->pickUpSlot))
            || (ShopSellMenu_IsPocketSlot(s, t) && ShopSellMenu_IsBoxSlot(s, s->pickUpSlot))) {
            if (ShopSellMenu_GetSlotItem(s, t) != 0xfff1) {
                t = 0x20;
            }
        }
    }
    if (t != 0x20) {
        if (gTouchHeld == 0) {
            if (ShopSellMenu_IsSlotDisabled(s, t)) {
                ShopSellMenu_FlyHeldToFreeSlot(s, s->pickUpSlot, x);
            } else {
                s32 r = ShopSellMenu_DropHeldItem(s, t);
                if (r == 0) {
                    ShopSellMenu_FlyHeldToFreeSlot(s, s->pickUpSlot, x);
                } else {
                    Inventory_PlayPutDownSe(r);
                    ShopSellMenu_ResumeInput(s);
                }
            }
        } else {
            ShopSellMenu_MarkSlot(s, t);
        }
    } else if (gTouchHeld == 0) {
        ShopSellMenu_FlyHeldToFreeSlot(s, s->pickUpSlot, x);
    }
}

void ShopSellMenu::mainAct04() {
    S *const s = this;
    if (s->checkSwitchToTouch()) {
        ShopSellMenu_StartTouchInput(s);
        ((TouchPromptBalloon *)&s->nameBalloon)->hide(1);
    } else {
        s32 v = s->takeRepeatedKeys();
        if (s->moveCursorByPad((void *)v, 0)) {
            ShopSellMenu_UpdateNameBalloon(s);
            ShopSellMenu_MoveCursorToTarget(s);
            ((TouchPromptBalloon *)&s->nameBalloon)->hide(0);
        } else {
            if (ShopSellMenu_IsSlotDisabled(s, s->cursorSlot)) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (ShopSellMenu_IsPocketSlot(s, s->cursorSlot) || ShopSellMenu_IsBoxSlot(s, s->cursorSlot)) {
                        if (!ShopSellMenu_IsSlotEmpty(s, s->cursorSlot)) {
                            s->startPickUp();
                        }
                    } else if (ShopSellMenu_IsButtonSlot(s, s->cursorSlot)) {
                        s->pressCursor();
                    }
                } else if (k & 0x800) {
                    if (ShopSellMenu_IsPocketSlot(s, s->cursorSlot) || ShopSellMenu_IsBoxSlot(s, s->cursorSlot)) {
                        if (!ShopSellMenu_IsSlotEmpty(s, s->cursorSlot)) {
                            s32 r = ShopSellMenu_IsPocketSlot(s, s->cursorSlot) ? ShopSellMenu_FindFreeBoxSlot(s) : ShopSellMenu_FindFreePocket(s);
                            if (r != 0x20) {
                                ShopSellMenu_QuickMove(s, s->cursorSlot, r);
                                ((TouchPromptBalloon *)&s->nameBalloon)->hide(1);
                            }
                        }
                    }
                } else {
                    goto tail;
                }
            }
            return;
tail:
            {
                u32 k = gPad[1];
                if (k & 2) {
                    ShopSellMenu_HideCursor(s);
                    s->cancel();
                    ((TouchPromptBalloon *)&s->nameBalloon)->hide(0);
                } else if (k & 8) {
                    ShopSellMenu_HideCursor(s);
                    s->confirm();
                    ((TouchPromptBalloon *)&s->nameBalloon)->hide(0);
                } else {
                    ((TouchPromptBalloon *)&s->nameBalloon)->commitOpen();
                }
            }
        }
    }
}

void ShopSellMenu::mainAct05() {
    S *const s = this;
    s32 v = s->takeRepeatedKeys();
    if (s->moveCursorByPad((void *)v, 1)) {
        ShopSellMenu_UpdateNameBalloon(s);
        ShopSellMenu_MoveCursorToTarget(s);
        ((TouchPromptBalloon *)&s->nameBalloon)->hide(0);
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            if (ShopSellMenu_IsPocketSlot(s, s->cursorSlot) || ShopSellMenu_IsBoxSlot(s, s->cursorSlot)) {
                if (!ShopSellMenu_IsSlotDisabled(s, s->cursorSlot)) {
                    if (ShopSellMenu_IsSlotEmpty(s, s->cursorSlot)) {
                        s->startPutDown(s->cursorSlot);
                    } else {
                        s->startExchange(s->cursorSlot);
                    }
                }
            }
        } else if (k & 2) {
            s->startPutDown(s->pickUpSlot);
        } else {
            ShopSellMenu_TrackCursor(s);
            ((TouchPromptBalloon *)&s->nameBalloon)->commitOpen();
        }
    }
}

void ShopSellMenu::mainAct06() {
    S *const s = this;
    if (s->checkSwitchToTouch()) {
        s->cancelChoiceList();
    } else if (PopupChoice_MoveCursor(&s->choiceMenu, s->takeRepeatedKeys(), &s->choiceRow, 0)) {
        ShopSellMenu_MoveCursorToChoice(s);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ((MenuCursor *)&s->cursor)->setPosePress();
            s->setMainState(7);
        } else if ((k & 2) != 0) {
            ShopSellMenu_PickCancelChoice(s);
        }
    }
}

void ShopSellMenu::mainAct07() {
    S *const s = this;
    if (((HandCursor *)&s->cursor)->isAnimDone()) {
        PopupChoice_DecideRow(&s->choiceMenu, s->choiceRow, 1);
        s->chosenAction = s->choiceMenu.choiceValues[s->choiceRow];
        s->setMainState(0x12);
    }
}

void ShopSellMenu::updateCursorMove() {
    S *const s = this;
    if (!((MenuCursorBase *)&s->cursor)->isMoving()) {
        s->setMainState(s->returnState);
        if ((u8)(s->returnState + 0xfc) <= 1) {
            ShopSellMenu_SetCursorSlot(s, s->cursorSlot);
        }
        s->runMainState();
    }
    ShopSellMenu_TrackCursor(s);
}

void ShopSellMenu::updateCursorPress() {
    S *const s = this;
    if (((HandCursor *)&s->cursor)->isAnimDone()) {
        u32 t = s->cursorSlot;
        if (t == 0x1e) {
            s->confirm();
        } else if (t == 0x1f) {
            s->cancel();
        } else {
            s->releaseCursor();
        }
    }
}

void ShopSellMenu::updateCursorRelease() {
    S *const s = this;
    if (((HandCursor *)&s->cursor)->isAnimDone()) {
        s->refreshCursor();
        s->setMainState(4);
    }
}

void ShopSellMenu::mainAct0B() {
    S *const s = this;
    if (((MenuCursorBase *)&s->cursor)->func_ov002_02202928()) {
        ShopSellMenu_PickUpWithHand(s, s->cursorSlot);
        s->setMainState(0xc);
    }
}

void ShopSellMenu::mainAct0C() {
    S *const s = this;
    if (((HandCursor *)&s->cursor)->isAnimDone()) {
        s->setMainState(s->returnState);
    }
    ShopSellMenu_TrackCursor(s);
}

void ShopSellMenu::mainAct0D() {
    S *const s = this;
    if (!((MenuCursorBase *)&s->cursor)->func_ov002_02202928()) {
        u32 a = s->actionSlot;
        if (s->cursorSlot == a) {
            ShopSellMenu_DropHeldItem(s, a);
            ShopSellMenu_UpdateNameBalloon(s);
            s->setMainState(4);
            Inventory_PlayPutDownSe();
        } else {
            ShopSellMenu_StartFlyHeldItem(s, a, 4);
        }
    } else {
        ShopSellMenu_TrackCursor(s);
    }
}

void ShopSellMenu::mainAct0E() {
    S *const s = this;
    if (!((MenuCursorBase *)&s->cursor)->func_ov002_022028fc()) {
        ShopSellMenu_ExchangeHeldItem(s, s->actionSlot);
        s->setFlags(0x40);
        s->setMainState(0xf);
        ShopSellMenu_UpdateNameBalloon(s);
    } else {
        s->setMainState(4);
    }
}

void ShopSellMenu::mainAct0F() {
    S *const s = this;
    if (((HandCursor *)&s->cursor)->isAnimDone()) {
        s->setMainState(s->returnState);
    }
    if (((MenuCursorBase *)&s->cursor)->func_ov002_02202928()) {
        if (s->testFlags(0x40)) {
            s->clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        ShopSellMenu_TrackCursor(s);
    }
}

void ShopSellMenu::mainAct10() {
    S *const s = this;
    if (((CursorMotion *)&s->flyMotion)->update()) {
        ShopSellMenu_ReleaseHeldItem(s, s->pickUpSlot);
        ShopSellMenu_ResumeInput(s);
        Inventory_PlayPutDownSe();
    } else {
        ShopSellMenu_TrackFlyingItem(s);
    }
}

void ShopSellMenu::mainAct11() {
    S *const s = this;
    if (((PopupChoiceMenuBody *)&s->choiceMenu)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            ShopSellMenu_PlaceCursorOnFirstChoice(s);
            s->setMainState(6);
        } else {
            s->setMainState(2);
        }
    }
}

void ShopSellMenu::mainAct12() {
    S *const s = this;
    if (PopupChoice_TickDecideDelay(&s->choiceMenu)) {
        PopupChoice_Close(&s->choiceMenu, 0);
        if (((HandCursor *)&s->cursor)->getAnim()) {
            ShopSellMenu_PlaceCursorAtTarget(s);
        }
        s->setMainState(0x13);
    }
}

void ShopSellMenu::mainAct13() {
    S *const s = this;
    if (((PopupChoiceMenuBody *)&s->choiceMenu)->isClosed()) {
        s->applyChoice();
    }
}

void ShopSellMenu::mainAct14() {
    S *const s = this;
    if (((MenuErrorMessage *)&s->errorMessage)->update(0)) {
        s->setMainState(s->returnState);
        ((HandCursor *)&s->cursor)->enableObjWindow();
    }
}

void ShopSellMenu::mainAct15() {
    S *const s = this;
    if (s->delayTimer != 0) {
        s->delayTimer--;
    } else {
        s->transitionState = 4;
        s->setPhase(1);
        ((TouchPromptBalloon *)&s->nameBalloon)->hide(0);
        ShopSellMenu_HideCursor(s);
    }
}

extern "C" void ShopSellMenu_StartTouchInput(S *s) {
    ShopSellMenu_HideCursor(s);
    ShopSellMenu_ClearCursorSlots(s);
    s->setMainState(0);
}

extern "C" void ShopSellMenu_StartButtonInput(S *s) {
    s->balloonSlot = 0x20;
    ShopSellMenu_ShowCursor(s);
    s->restartKeyRepeat();
    ShopSellMenu_UpdateNameBalloon(s);
    s->setMainState(4);
    ShopSellMenu_SetCursorSlot(s, s->cursorSlot);
}

extern "C" void ShopSellMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch()) {
        ShopSellMenu_StartTouchInput(s);
    } else {
        ShopSellMenu_StartButtonInput(s);
    }
}

extern "C" void ShopSellMenu_TouchItem(S *s, u32 a) {
    u32 r6, r7;
    s->touchedSlot = a;
    s->setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->grabOffsetX = ShopSellMenu_GetSlotX(s, s->touchedSlot) - r6;
    s->grabOffsetY = ShopSellMenu_GetSlotY(s, s->touchedSlot) - r7;
    s->balloonSlot = a;
    ((TouchPromptBalloon *)&s->nameBalloon)->queueOpen();
    if (ShopSellMenu_IsSlotDisabled(s, a)) {
        s->clearFlags(4);
    } else {
        s->setFlags(4);
        Inventory_PlayTouchSe();
    }
}

extern "C" void ShopSellMenu_PickUpWithTouch(S *s, u32 a) {
    s->pickUpSlot = a;
    ((TouchPromptBalloon *)&s->nameBalloon)->hide(1);
    ShopSellMenu_PickUpItem(s, a);
    if (s->heldKind == 1) {
        s->setMainState(3);
    }
    ShopSellMenu_TrackTouch(s);
    Inventory_PlayPickUpSe();
}

extern "C" void ShopSellMenu_PickUpWithHand(S *s, u32 a) {
    s->pickUpSlot = a;
    ((TouchPromptBalloon *)&s->nameBalloon)->hide(1);
    ShopSellMenu_PickUpItem(s, a);
    if (s->heldKind == 1) {
        s->returnState = 5;
    }
    ShopSellMenu_TrackCursor(s);
    Inventory_PlayPickUpSe();
}

extern "C" void ShopSellMenu_StartFlyHeldItem(S *s, u32 a, u32 b) {
    s->pickUpSlot = a;
    ((CursorMotion *)&s->flyMotion)->setPos(s->heldX, s->heldY);
    u32 x = ShopSellMenu_GetSlotX(s, a);
    u32 y = ShopSellMenu_GetSlotY(s, a);
    ((CursorMotion *)&s->flyMotion)->startLinear(x, y, b);
    ((CursorMotion *)&s->flyMotion)->update();
    ShopSellMenu_TrackFlyingItem(s);
    s->setMainState(0x10);
}

extern "C" void ShopSellMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 b) {
    u32 r = 0x20;
    if (b >= 0x6c) {
        if (ShopSellMenu_IsBoxSlot(s, a)) r = ShopSellMenu_FindFreePocket(s);
    } else {
        if (ShopSellMenu_IsPocketSlot(s, a)) r = ShopSellMenu_FindFreeBoxSlot(s);
    }
    if (r != 0x20) a = r;
    ShopSellMenu_StartFlyHeldItem(s, a, 4);
}

extern "C" void ShopSellMenu_QuickMove(S *s, u32 a, u32 b) {
    ShopSellMenu_PickUpItem(s, a);
    s->heldX = ShopSellMenu_GetSlotX(s, a);
    s->heldY = ShopSellMenu_GetSlotY(s, a);
    ShopSellMenu_StartFlyHeldItem(s, b, 4);
}

extern "C" u32 ShopSellMenu_FindFreePocket(S *s) {
    s32 t = Pocket_FindEmpty();
    s32 m = -1;
    if (t == m) return 0x20;
    return (u8)t;
}

extern "C" u32 ShopSellMenu_FindFreeBoxSlot(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->boxItems[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x20;
}

extern "C" void ShopSellMenu_CancelUploads(S *s) {
    ((BgVramTask *)s->vramTask)->cancel();
}

extern "C" BOOL ShopSellMenu_IsPocketSlot(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

extern "C" BOOL ShopSellMenu_IsBoxSlot(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

extern "C" BOOL ShopSellMenu_IsButtonSlot(S *s, u32 a) {
    if ((u8)(a + 0xe2) <= 1) return TRUE;
    return FALSE;
}

extern "C" u32 ShopSellMenu_ToGridSlot(S *s, u32 a) {
    if (ShopSellMenu_IsPocketSlot(s, a)) return (u8)a;
    if (ShopSellMenu_IsBoxSlot(s, a)) return ShopSellMenu_GridToBoxSlotOr0F(s, a);
    return 0;
}

extern "C" u32 ShopSellMenu_GridToPocketSlot(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x20;
}

extern "C" u32 ShopSellMenu_FindSlotAt(S *s, u32 a, u32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(&s->itemGrid);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&s->itemGrid, t)) return 0x20;
        }
        return ShopSellMenu_GridToPocketSlot(s, t);
    }
    t = InventoryItemGrid_FindBoxSlotAt(&s->itemGrid, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&s->itemGrid, t)) return 0x20;
        }
        return ShopSellMenu_GridToBoxSlot(s, t);
    }
    return 0x20;
}

extern "C" BOOL ShopSellMenu_DropHeldItem(S *s, u32 a) {
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        u32 t = ShopSellMenu_GetSlotItem(s, a);
        if (t != 0xfff1) {
            ShopSellMenu_SetSlotItem(s, s->pickUpSlot, t, ShopSellMenu_GetSlotFlags(s, a));
        }
        ShopSellMenu_ReleaseHeldItem(s, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void ShopSellMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        u32 t = ShopSellMenu_ToGridSlot(s, a);
        InventoryItemGrid_SetSlotItem(&s->itemGrid, t, b, c);
        InventoryItemGrid_RefreshSlot(&s->itemGrid, t);
    }
}

extern "C" u32 ShopSellMenu_GridToBoxSlotOr0F(S *s, u32 a) {
    if (ShopSellMenu_IsBoxSlot(s, a)) return (u8)a;
    return 0xf;
}

extern "C" u32 ShopSellMenu_GridToBoxSlot(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x20;
}

extern "C" u32 ShopSellMenu_GetSlotX(S *s, u32 a) {
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotX(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    if (ShopSellMenu_IsButtonSlot(s, a)) return 0xc4;
    return 0;
}

extern "C" u32 ShopSellMenu_GetSlotY(S *s, u32 a) {
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotY(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    if (ShopSellMenu_IsButtonSlot(s, a)) {
        if (a == 0x1e) return 0x58;
        return 0x68;
    }
    return 0;
}

extern "C" BOOL ShopSellMenu_IsItemRejected(S *s, u32 a)
{
    volatile u16 v;
    if (ShopSellMenu_IsSlotEmpty(s, a)) {
        return FALSE;
    }
    if (ShopSellMenu_GetSlotFlags(s, a)) {
        return TRUE;
    }
    u32 t = ShopSellMenu_GetSlotItem(s, a);
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    v = t;
    switch (MenuCtrl_GetMode()) {
    case 0x1e: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if ((x >= 0x11a8 && x <= 0x12a7) || (x >= 0x13c8 && x <= 0x1407) || (x >= 0x13a8 && x <= 0x13c7)
            || (x >= 0x1408 && x <= 0x1428) || (x >= 0x1431 && x <= 0x1470) || (x >= 0x1471 && x <= 0x1491)
            || (x >= 0x1380 && x <= 0x139f)) {
            return FALSE;
        }
        return TRUE;
    }
    case 0x1d: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if (!Clock_GetWeekday()) {
            BOOL g = FALSE;
            u16 x2 = v;
            u16 y2 = v;
            if (y2 >= 0x1531 && x2 <= 0x153a) g = TRUE;
            if (g) return TRUE;
        }
        return FALSE;
    }
    case 0x1f:
        return TRUE;
    case 0x20:
        if (InvItem_IsTurnipFishOrInsect(t)) {
            BOOL f = FALSE;
            u16 x = v;
            u16 y = v;
            if (y >= 0x1531 && x <= 0x153a) f = TRUE;
            if (f || (x >= 0x153b && x <= 0x1541) || (x >= 0x154a && x <= 0x1553)) {
                return FALSE;
            }
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" void ShopSellMenu_DisableRejectedItems(S *s)
{
    u32 i = 0;
    do {
        if (ShopSellMenu_IsItemRejected(s, i)) {
            InventoryItemGrid_DisableSlot(&s->itemGrid, ShopSellMenu_ToGridSlot(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

extern "C" BOOL ShopSellMenu_IsSlotDisabled(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    return FALSE;
}

extern "C" BOOL ShopSellMenu_IsSlotEmpty(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    return TRUE;
}

extern "C" u32 ShopSellMenu_GetSlotItem(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotItem(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    return 0xfff1;
}

extern "C" u32 ShopSellMenu_GetSlotFlags(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotFlags(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
    return 0xf1;
}

extern "C" void ShopSellMenu_ClearCursorSlots(S *s)
{
    InventoryItemGrid_ClearCursorSlot(&s->itemGrid);
    ((LetterGrid *)&s->letterGrid)->clearCursorSlot();
}

extern "C" void ShopSellMenu_SetCursorSlot(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_SetCursorSlot(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
        ((LetterGrid *)&s->letterGrid)->clearCursorSlot();
    } else if (ShopSellMenu_IsButtonSlot(s, a)) {
        ShopSellMenu_ClearCursorSlots(s);
    }
}

extern "C" void ShopSellMenu_ClearMarks(S *s)
{
    InventoryItemGrid_ClearMarks(&s->itemGrid);
    ((LetterGrid *)&s->letterGrid)->clearMarks();
}

extern "C" void ShopSellMenu_MarkSlot(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_MarkSlot(&s->itemGrid, ShopSellMenu_ToGridSlot(s, a));
    }
}

extern "C" BOOL ShopSellMenu_HasTouchMoved(S *s)
{
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

extern "C" void ShopSellMenu_PlaceNameBalloon(S *s)
{
    s32 a = ShopSellMenu_GetSlotX(s, s->balloonSlot) - 0x6d;
    s32 b = ShopSellMenu_GetSlotY(s, s->balloonSlot) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    if (b < -0x5c) {
        ((LabelBalloon *)&s->nameBalloon)->setPopDownward();
        b = ShopSellMenu_GetSlotY(s, s->balloonSlot) - 0x50;
    } else {
        ((LabelBalloon *)&s->nameBalloon)->setPopUpward();
    }
    ((LabelBalloon *)&s->nameBalloon)->setPos(a, b);
    if (ShopSellMenu_IsPocketSlot(s, s->balloonSlot) || ShopSellMenu_IsBoxSlot(s, s->balloonSlot)) {
        u32 t = ShopSellMenu_ToGridSlot(s, s->balloonSlot);
        InventoryItemGrid_ShowSlotName(&s->itemGrid, &s->nameBalloon, t);
    }
}

extern "C" void ShopSellMenu_UpdateNameBalloon(S *s)
{
    if (ShopSellMenu_IsPocketSlot(s, s->cursorSlot) || ShopSellMenu_IsBoxSlot(s, s->cursorSlot)) {
        if (ShopSellMenu_IsSlotEmpty(s, s->cursorSlot)) {
            ((TouchPromptBalloon *)&s->nameBalloon)->cancelQueuedOpen();
        } else {
            s->balloonSlot = s->cursorSlot;
            ((TouchPromptBalloon *)&s->nameBalloon)->queueOpen();
        }
    } else {
        ((TouchPromptBalloon *)&s->nameBalloon)->cancelQueuedOpen();
    }
}

extern "C" void ShopSellMenu_DrawHeldItem(S *s)
{
    if (!s->testFlags(0x40)) {
        u32 t = s->heldKind;
        if (t != 0) {
            if (t == 1) {
                InventoryItemGrid_DrawHeldItem(&s->itemGrid, s->heldX, s->heldY);
            }
        }
    }
}

extern "C" void ShopSellMenu_TrackTouch(S *s)
{
    s->heldX = s->grabOffsetX + gTouchCurX;
    s->heldY = s->grabOffsetY + gTouchCurY;
}

extern "C" void ShopSellMenu_TrackCursor(S *s)
{
    s->heldX = ((MenuCursorBase *)&s->cursor)->getFrameScreenX() - 2;
    s->heldY = ((MenuCursorBase *)&s->cursor)->getFrameScreenY() - 4;
}

extern "C" void ShopSellMenu_TrackFlyingItem(S *s)
{
    s->heldX = ((CursorMotion *)&s->flyMotion)->getX();
    s->heldY = ((CursorMotion *)&s->flyMotion)->getY();
}

extern "C" void ShopSellMenu_PickUpItem(S *s, u32 a)
{
    if (ShopSellMenu_IsPocketSlot(s, a) || ShopSellMenu_IsBoxSlot(s, a)) {
        u32 t = ShopSellMenu_ToGridSlot(s, a);
        s->heldKind = 1;
        s->heldItem = InventoryItemGrid_GetSlotItem(&s->itemGrid, t);
        s->heldItemFlags = InventoryItemGrid_GetSlotFlags(&s->itemGrid, t);
        InventoryItemGrid_ClearSlot(&s->itemGrid, t);
        InventoryItemGrid_SetHeldItem(&s->itemGrid, s->heldItem, s->heldItemFlags);
    }
}

extern "C" void ShopSellMenu_ReleaseHeldItem(S *s, u32 a)
{
    if (s->heldKind == 1) {
        ShopSellMenu_SetSlotItem(s, a, s->heldItem, s->heldItemFlags);
    }
    s->heldKind = 0;
}

extern "C" void ShopSellMenu_ExchangeHeldItem(S *s, u32 a)
{
    if (s->heldKind == 1) {
        u32 h = s->heldItem;
        u32 b = s->heldItemFlags;
        ShopSellMenu_PickUpItem(s, a);
        ShopSellMenu_SetSlotItem(s, a, h, b);
    }
}

extern "C" void ShopSellMenu_ShowCursor(S *s)
{
    s32 a = ShopSellMenu_GetCursorTargetX(s);
    s32 b = ShopSellMenu_GetCursorTargetY(s);
    ((MenuCursorBase *)&s->cursor)->warpTo(a, b);
    if (ShopSellMenu_IsButtonSlot(s, s->cursorSlot)) {
        ((MenuCursor *)&s->cursor)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&s->cursor)->setAnimIfChanged(1);
    }
    s->refreshCursor();
}

extern "C" s32 ShopSellMenu_GetCursorTargetX(S *s)
{
    s32 r = ShopSellMenu_GetSlotX(s, s->cursorSlot);
    if (s->testFlags(0x20)) {
        r += 0x100;
    } else if (s->testFlags(0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

extern "C" s32 ShopSellMenu_GetCursorTargetY(S *s)
{
    return ShopSellMenu_GetSlotY(s, s->cursorSlot);
}

extern "C" void ShopSellMenu_HideCursor(S *s)
{
    ((MenuCursor *)&s->cursor)->setAnimIfChanged(0);
    ((MenuCursorBuf0 *)&s->cursor)->vfunc_0c();
}

extern "C" void ShopSellMenu_MoveCursorToTarget(S *s)
{
    s32 a = ShopSellMenu_GetCursorTargetX(s);
    s32 b = ShopSellMenu_GetCursorTargetY(s);
    ((MenuCursorBase *)&s->cursor)->moveToEase(a, b, 3, 1);
    s->returnState = s->mainState;
    s->setMainState(8);
    if (s->testFlags(0x100)) {
        ((MenuCursorBuf0 *)&s->cursor)->vfunc_0c();
        s->clearFlags(0x100);
    }
}

extern "C" void ShopSellMenu_MoveCursorToChoice(S *s)
{
    s32 a = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowY(s->choiceRow);
    ((MenuCursorBase *)&s->cursor)->moveToLinear(a, b, 2);
    s->returnState = s->mainState;
    s->setMainState(8);
}

extern "C" void ShopSellMenu_PickCancelChoice(S *s)
{
    s->chosenAction = 1;
    s->choiceRow = PopupChoice_DecideCancel(&s->choiceMenu);
    s32 a = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowY(s->choiceRow);
    ((MenuCursorBase *)&s->cursor)->warpTo(a, b);
    ((HandCursor *)&s->cursor)->setAnimAtEnd(8);
    s->setMainState(0x12);
}

extern "C" void ShopSellMenu_PlaceCursorOnFirstChoice(S *s)
{
    s->choiceRow = 0;
    s32 a = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&s->choiceMenu)->getRowY(s->choiceRow);
    ((MenuCursorBase *)&s->cursor)->warpTo(a, b);
    ((MenuCursor *)&s->cursor)->setAnimIfChanged(7);
}

extern "C" void ShopSellMenu_PlaceCursorAtTarget(S *s)
{
    s32 a = ShopSellMenu_GetCursorTargetX(s);
    s32 b = ShopSellMenu_GetCursorTargetY(s);
    ((MenuCursorBase *)&s->cursor)->warpTo(a, b);
    ((MenuCursor *)&s->cursor)->setAnimIfChanged(1);
}

void ShopSellMenu::refreshCursor() {
    ((MenuCursorBase *)&cursor)->setPoseIdle();
    cursor.vfunc_0c();
}

void ShopSellMenu::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(9);
}

void ShopSellMenu::releaseCursor() {
    ((MenuCursorBase *)&cursor)->setPoseRelease();
    setMainState(0xa);
}

void ShopSellMenu::startPickUp() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(4);
    setMainState(0xb);
}

void ShopSellMenu::startPutDown(u8 v) {
    ((TouchPromptBalloon *)&nameBalloon)->hide(1);
    actionSlot = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(5);
    setMainState(0xd);
}

void ShopSellMenu::startExchange(u8 v) {
    ((TouchPromptBalloon *)&nameBalloon)->hide(1);
    returnState = mainState;
    actionSlot = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(6);
    setMainState(0xe);
}

s32 ShopSellMenu::applyChoice() {
    switch (chosenAction) {
    case 0:
        startPickUp();
        break;
    case 1:
    default:
        ShopSellMenu_ResumeInput(this);
        break;
    }
}

void ShopSellMenu::cancelChoiceList() {
    chosenAction = 1;
    ShopSellMenu_PlaceCursorAtTarget(this);
    PopupChoice_Close(&choiceMenu, 0);
    setMainState(0x13);
}

void ShopSellMenu::moveCursorInPockets(void *pad, s32 mode) {
    s32 r = cursorSlot;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    cursorSlot += 4;
                } else {
                    cursorSlot = 0x1f;
                }
                setFlags(0x10);
                return;
            }
            cursorSlot--;
            r--;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    cursorSlot -= 4;
                    setFlags(0x20);
                } else {
                    cursorSlot = 0x1f;
                }
                return;
            }
            cursorSlot++;
            r++;
        }
    }
    if (MenuKeys_HasUp(pad)) {
        if (q > 0) {
            cursorSlot -= 5;
        } else {
            cursorSlot = r + 0x19;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (q < 2) {
            cursorSlot += 5;
        }
    }
}

void ShopSellMenu::moveCursorInBox(void *pad, s32 mode) {
    s32 r = cursorSlot - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    cursorSlot += 4;
                } else {
                    cursorSlot = 0x1e;
                }
                setFlags(0x10);
                return;
            }
            cursorSlot--;
            r--;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    cursorSlot -= 4;
                    setFlags(0x20);
                } else {
                    cursorSlot = 0x1e;
                }
                return;
            }
            cursorSlot++;
            r++;
        }
    }
    if (MenuKeys_HasUp(pad)) {
        if (q > 0) {
            cursorSlot -= 5;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (q < 2) {
            cursorSlot += 5;
        } else {
            cursorSlot = r;
        }
    }
}

void ShopSellMenu::moveCursorOnButtons(void *pad) {
    if (MenuKeys_HasUp(pad)) {
        cursorSlot = 0x1e;
    } else if (MenuKeys_HasDown(pad)) {
        cursorSlot = 0x1f;
    }
    if (MenuKeys_HasRight(pad)) {
        if (cursorSlot == 0x1e) {
            cursorSlot = 0x19;
        } else {
            cursorSlot = 0;
        }
        setFlags(0x20);
    } else if (MenuKeys_HasLeft(pad)) {
        if (cursorSlot == 0x1e) {
            cursorSlot = 0x1d;
        } else {
            cursorSlot = 4;
        }
    }
}

BOOL ShopSellMenu::moveCursorByPad(void *pad, s32 mode) {
    u8 old = cursorSlot;
    clearFlags(0x30);
    clearFlags(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (ShopSellMenu_IsPocketSlot(this, cursorSlot)) {
        moveCursorInPockets(pad, mode);
    } else if (ShopSellMenu_IsBoxSlot(this, cursorSlot)) {
        moveCursorInBox(pad, mode);
    } else if (ShopSellMenu_IsButtonSlot(this, cursorSlot)) {
        moveCursorOnButtons(pad);
    }
    BOOL a = ShopSellMenu_IsButtonSlot(this, cursorSlot);
    if (a != ShopSellMenu_IsButtonSlot(this, old)) {
        if (ShopSellMenu_IsButtonSlot(this, cursorSlot)) {
            ((MenuCursor *)&cursor)->switchToAnim07();
        } else {
            ((MenuCursor *)&cursor)->switchToAnim01();
        }
        setFlags(0x100);
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

void ShopSellMenu::resetTextLabels() {
    s32 i;
    numTextLabels = 0;
    for (i = 0; i < 2; i++) {
        ((LabelString *)&textLabels[i])->destroyLabel();
    }
}

void *ShopSellMenu::allocTextLabel() {
    if (numTextLabels >= 2) {
        return &textLabels[1];
    }
    numTextLabels++;
    return &textLabels[numTextLabels - 1];
}

void ShopSellMenu::setOkLabel(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = allocTextLabel();
    ((LabelString *)p)->createLabel(4, 0x1ca, 6, v, 9, 0);
    String_Load2dMenu(p, 0x21);
    ((LabelString *)p)->redrawAligned(1, 0);
}

void ShopSellMenu::setQuitLabel(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = allocTextLabel();
    ((LabelString *)p)->createLabel(4, 0x1d6, 6, v, 9, 0);
    String_Load2dMenu(p, 0x65);
    ((LabelString *)p)->redrawAligned(1, 0);
}

void ShopSellMenu::cancel() {
    clearFlags(8);
    Snd_PlaySe(0x28);
    delayTimer = 5;
    setMainState(0x15);
    setQuitLabel(1);
    MenuCtrl_SetResult(0);
    MenuCtrl_RestorePockets();
}

void ShopSellMenu::confirm() {
    clearFlags(8);
    Snd_PlaySe(0x27);
    delayTimer = 5;
    setMainState(0x15);
    setOkLabel(1);
    s32 n = packItemList(boxItems);
    switch (MenuCtrl_GetMode()) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            MenuCtrl_SetResult(0);
        } else {
            MenuCtrl_SetResult(1);
            MenuCtrl_SetChosenItems(boxItems);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (boxItems[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (boxItems[i] == initialBoxItems[j]) {
                        initialBoxItems[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = packItemList(initialBoxItems);
        if (n == 0) {
            MenuCtrl_SetResult(0);
        } else {
            MenuCtrl_SetResult(1);
            MenuCtrl_SetIndex((u8)n);
            MenuCtrl_SetChosenItems(initialBoxItems);
            MI_CpuCopy8(boxItems, gSaveLostAndFound, 0x1e);
            sendItemsRecord(3);
        }
        break;
    }
    case 0x20:
        MI_CpuCopy8(boxItems, gSaveRecycleBin, 0x1e);
        sendItemsRecord(4);
        MenuCtrl_SetResult(1);
        break;
    }
}

s32 ShopSellMenu::packItemList(u16 *p) {
    s32 i = 0;
    s32 n = i;
    for (; i < 15; i++) {
        u16 v = p[i];
        if (v != 0xfff1) {
            if (i != n) {
                p[n] = v;
                p[i] = 0xfff1;
            }
            n++;
        }
    }
    return n;
}

void ShopSellMenu::sendItemsRecord(u8 v) {
    u8 buf[0x24];
    if (((CommManager *)gCommManager)->isOnline()) {
        setFlags(8);
        buf[0] = v;
        MI_CpuCopy8(boxItems, &buf[1], 0x1e);
        void *g = gCommManager;
        ((CommManager *)g)->beginRecord();
        ((CommManager *)g)->writeRecord(buf, 0x1f);
        ((CommManager *)g)->endRecord(0x16, 4);
        sendSeq = ((CommManager *)g)->getSendSeq();
    }
}

BOOL ShopSellMenu::isResultSent() {
    if (MenuCtrl_IsResultOk() == 0) {
        return TRUE;
    }
    if (testFlags(8) == 0) {
        return TRUE;
    }
    if (((CommManager *)gCommManager)->isOnline()) {
        if (Comm_IsSeqConfirmed(sendSeq) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL ShopSellMenu::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void ShopSellMenu::setFlags(u32 mask) { stateFlags |= mask; }

void ShopSellMenu::clearFlags(u32 mask) { stateFlags &= ~mask; }
