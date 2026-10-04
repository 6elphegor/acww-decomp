// ov099: scene overlay (class PocketMenuUnk, vtable 0x02296b00, 0x2794 bytes).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "ui/CursorMotion.h"
#include "item/Letter.h"
#include "menu/InventoryItemGrid.h"
#include "menu/LetterGrid.h"
#include "menu/InventoryBg.h"
#include "menu/MenuProc.h"

class PocketMenuUnk;
struct PopupChoiceIdList;

extern "C" {
extern u8 gTouchHoldFrames;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void Pocket_SetItem(u16 *p, s32 a, s32 b);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete();

BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void ChoiceIdList_Clear(void *p, u32 v);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *b, s32 c);
BOOL PopupChoice_TickDecideDelay(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);

void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
BOOL InventoryItemGrid_IsSlotEmpty(void *p, u32 v);
void InventoryItemGrid_DrawHeldItem(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
BOOL InventoryItemGrid_IsSlotDisabled(void *p, u32 v);
void InventoryItemGrid_SetHeldItem(void *p, u32 a, u32 b);
void InventoryItemGrid_RefreshSlot(void *p, u32 a);
void InventoryItemGrid_SetSlotItem(void *p, u32 a, u32 b, u32 c);
void InventoryItemGrid_ClearSlot(void *p, u32 idx);
u8 InventoryItemGrid_GetSlotFlags(void *p, u32 idx);
u16 InventoryItemGrid_GetSlotItem(void *p, u32 idx);
void InventoryItemGrid_MarkSlot(void *p, u32 v);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_SetCursorSlot(void *p, u32 v);
void InventoryItemGrid_ClearCursorSlot(void *p);
s32 InventoryItemGrid_GetSlotY(void *p, u32 v);
s32 InventoryItemGrid_GetSlotX(void *p, u32 v);
void InventoryItemGrid_ShowSlotName(void *p, void *q, s32 a);
void InventoryItemGrid_LoadPockets(void *p);
u32 InventoryItemGrid_FindPocketSlotAt(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void LetterGrid_LoadPocketLetters(void *p);
BOOL LetterGrid_IsSlotEmpty(void *p, u32 v);
s32 LetterGrid_GetSlotY(void *p, u32 v);
s32 LetterGrid_GetSlotX(void *p, u32 v);
}

// ---------------------------------------------------------------------------------------------
// Classes of other modules (minimal declarations; sub-objects are opaque)

class LabelBalloon {
public:
    void setPos(s32 x, s32 y);
};

class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    void cancel();
    u8 unk_04[0x20];
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
    u8 unk_24[0x14];
};





class TouchPromptBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();
    void setAutoCloseTimer(u8 a);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    void hide(s32 a);
    BOOL updatePrompt();
    u32 unk_04[(0xc0 - 4) / 4];
};


// Menu cursor sub-object hierarchy
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    s32 getAnim();
    s32 enableObjWindow();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    s32 getFrameScreenY();
    s32 getFrameScreenX();
    BOOL isMoving();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void moveToLinear(s32 a, s32 b, s32 c);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

// Same object as MenuCursorBase under the name used by its other methods
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

// Same object as PopupChoiceMenu under the name used by its other methods
class PopupChoiceMenuBody {
public:
    s32 getRowY(s32 a);
    s32 getRowX();
    s32 hitTestRowOrLast(s32 a, s32 b);
    void setRowsFromIds(PopupChoiceIdList *r, s32 a);
    BOOL isClosed();
    BOOL isOpen();
};

class PopupChoiceMenu {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    void placeNearPoint(s32 a, s32 b);
    void init(s32 a, s32 b, const char *c);
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[5];
    u8 choiceValues[7];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    u32 unk_00[0x108 / 4];
};

// ov092 singleton returned by ProcBase_GetParent
class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};


typedef void (PocketMenuUnk::*Unk_ov099_02296b00_Fn)();

// Vtable 0x02296b00
class PocketMenuUnk : public MenuProc {
public:
    PocketMenuUnk()
        : unk_94(), pocketGrid(), letterGrid(), inventoryBg(), nameBalloon(), flyMotion(), cursor(), popup(), errorMessage(), unk_2690() {}

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
    BOOL moveCursorByPad(void *pad);
    void moveCursorInPockets(void *pad);
    void openTargetOptions(u32 idx);
    void addItemOptions();
    void cancelOptions();
    void showOptionList();
    s32 runChosenAction();
    void func_ov099_02294fe0(u32 v);
    void func_ov099_0229502c(u32 v);
    void func_ov099_02295068();
    void func_ov099_02295088();
    void func_ov099_022950a8();
    void placeCursorOnTarget();
    void func_ov099_022950fc();
    void func_ov099_02295148();
    void func_ov099_0229519c();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void func_ov099_02295290();
    void swapHandWith(u32 idx);
    void putHandBack(u32 idx);
    void pickUp(u32 idx);
    void syncHandFromMover();
    void syncHandFromCursor();
    void syncHandFromTouch();
    void drawHand();
    void updateLabelBalloon();
    void positionLabelBalloon();

    // state handlers (member-pointer tables)
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
    void stateWaitSlideOut();
    void stateSlideOut();
    void stateWaitSlideIn();
    void stateSlideIn();
    void stateLoad();

    // helpers
    void loadObjGraphics();
    void func_ov099_02296364();
    void setupBgLayer();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initPocketMenuUnk();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ BgVramTaskPair unk_94[1];
    /* 0xcc */ InventoryItemGrid pocketGrid;
    /* 0xb2c */ LetterGrid letterGrid;
    /* 0xb54 */ InventoryBg inventoryBg;
    /* 0x2134 */ TouchPromptBalloon nameBalloon;
    /* 0x21f4 */ CursorMotion flyMotion;
    /* 0x220c */ MenuCursorBuf0 cursor;
    /* 0x2270 */ PopupChoiceMenu popup;
    /* 0x2570 */ MenuErrorMessage errorMessage;
    /* 0x2678 */ u32 stateFlags;
    /* 0x267c */ u32 slideY;
    /* 0x2680 */ s32 grabOffsetX;
    /* 0x2684 */ s32 grabOffsetY;
    /* 0x2688 */ s32 handX;
    /* 0x268c */ s32 handY;
    /* 0x2690 */ Letter unk_2690;
    /* 0x2784 */ u16 handItem;
    /* 0x2786 */ u8 handItemFlags;
    /* 0x2787 */ u8 handKind;
    /* 0x2788 */ u8 touchedTarget;
    /* 0x2789 */ u8 balloonTarget;
    /* 0x278a */ u8 handSource;
    /* 0x278b */ u8 cursorTarget;
    /* 0x278c */ u8 actionTarget;
    /* 0x278d */ u8 placeTarget;
    /* 0x278e */ u8 returnState;
    /* 0x278f */ u8 chosenAction;
    /* 0x2790 */ u8 popupRow;
};

typedef PocketMenuUnk S;

// Functions of this overlay that are plain (non-member) symbols
extern "C" {
BOOL PocketMenuUnk_IsTouchHeldFor(S *self, s32 v);
BOOL PocketMenuUnk_HasTouchMoved(S *s);
void PocketMenuUnk_HighlightTarget(S *s, u32 a);
void PocketMenuUnk_ClearHighlights(S *s);
void PocketMenuUnk_SelectTarget(S *s, u32 a);
void PocketMenuUnk_ClearSelection(S *s);
u32 PocketMenuUnk_GetItemFlags(S *s, u32 a);
u32 PocketMenuUnk_GetItem(S *s, u32 a);
BOOL PocketMenuUnk_IsSlotEmpty(S *s, u32 a);
BOOL func_ov099_02295788(S *s, u32 a);
s32 PocketMenuUnk_GetTargetY(S *s, u32 a);
s32 PocketMenuUnk_GetTargetX(S *s, u32 a);
u32 PocketMenuUnk_HitLetter(S *s, u32 a, u32 b, s32 c);
u32 PocketMenuUnk_LetterIndexToTarget(S *s, u32 a);
u32 PocketMenuUnk_TargetToLetterIndex(S *s, u32 a);
void PocketMenuUnk_SetSlotItem(S *s, u32 a, u32 b, u32 c);
BOOL PocketMenuUnk_DropItemAt(S *s, u32 a);
u32 PocketMenuUnk_HitPocket(S *s, u32 a, u32 b, s32 c);
u32 PocketMenuUnk_PocketIndexToTarget(S *s, u32 a);
u32 PocketMenuUnk_TargetToGridIndex(S *s, u32 a);
BOOL PocketMenuUnk_IsLetterTarget(S *s, u32 a);
BOOL PocketMenuUnk_IsPocketTarget(S *s, u32 a);
void PocketMenuUnk_CancelVramTasks(S *s);
void PocketMenuUnk_FlyHandTo(S *s, u32 a, u32 b);
void PocketMenuUnk_StartButtonDrag(S *s, u32 a);
void PocketMenuUnk_StartTouchDrag(S *s, u32 a);
void PocketMenuUnk_BeginTouchOnTarget(S *s, u32 a);
void PocketMenuUnk_ReturnToIdle(S *s);
void PocketMenuUnk_EnterButtonIdle(S *s);
void PocketMenuUnk_EnterTouchIdle(S *s);
S *PocketMenuUnk_Create();
}

struct Unk_ov099_SceneEntry {
    S *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov099_SceneEntry sPocketMenuUnkProfile = {PocketMenuUnk_Create, 0x92, 0x96};

static inline BOOL Unk_ov099_02296158_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" PocketMenuUnk *PocketMenuUnk_Create() { return new PocketMenuUnk(); }

BOOL PocketMenuUnk::vfunc_00() {
    initPocketMenuUnk();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL PocketMenuUnk::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PocketMenuUnk::onDraw() {
    PopupChoice_Draw(&popup);
    if (!testFlags(1)) {
        return TRUE;
    }
    nameBalloon.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    drawHand();
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&pocketGrid, 0, slideY);
        letterGrid.drawPocketLetters(0, slideY);
        InventoryBg_DrawSprite(&inventoryBg, slideY);
    }
    return TRUE;
}

BOOL PocketMenuUnk::execTransition() {
    static Unk_ov099_02296b00_Fn tbl[5] = {
        &PocketMenuUnk::stateLoad, &PocketMenuUnk::stateSlideIn,
        &PocketMenuUnk::stateWaitSlideIn, &PocketMenuUnk::stateSlideOut,
        &PocketMenuUnk::stateWaitSlideOut};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

BOOL PocketMenuUnk::execMain() {
    preInputUpdate();
    static Unk_ov099_02296b00_Fn tbl[21] = {
        &PocketMenuUnk::mainAct00, &PocketMenuUnk::mainAct01,
        &PocketMenuUnk::mainAct02, &PocketMenuUnk::mainAct03,
        &PocketMenuUnk::mainAct04, &PocketMenuUnk::mainAct05,
        &PocketMenuUnk::mainAct06, &PocketMenuUnk::mainAct07,
        &PocketMenuUnk::mainAct08, &PocketMenuUnk::mainAct09,
        &PocketMenuUnk::mainAct0A, &PocketMenuUnk::mainAct0B,
        &PocketMenuUnk::mainAct0C, &PocketMenuUnk::mainAct0D,
        &PocketMenuUnk::mainAct0E, &PocketMenuUnk::mainAct0F,
        &PocketMenuUnk::mainAct10, &PocketMenuUnk::mainAct11,
        &PocketMenuUnk::mainAct12, &PocketMenuUnk::mainAct13,
        &PocketMenuUnk::mainAct14};
    (this->*tbl[mainState])();
    postInputUpdate();
    return TRUE;
}

BOOL PocketMenuUnk::execPhase3() { return TRUE; }

BOOL PocketMenuUnk::execPhase4() { return TRUE; }

BOOL PocketMenuUnk::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void PocketMenuUnk::stateLoad() {
    setupBgLayer();
    func_ov099_02296364();
    setTransitionState(1);
}

void PocketMenuUnk::stateSlideIn() {
    loadObjGraphics();
    InventoryItemGrid_LoadPockets(&pocketGrid);
    LetterGrid_LoadPocketLetters(&letterGrid);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    slideY = getSlideOffsetY();
}

void PocketMenuUnk::stateWaitSlideIn() {
    if (stepSlideIn(0)) {
        setPhase(2);
        PocketMenuUnk_ReturnToIdle(this);
    }
    applySlideOffset(6, 0, 0);
    slideY = getSlideOffsetY();
}

void PocketMenuUnk::stateSlideOut() {
    nameBalloon.hide(1);
    hideCursor();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    setTransitionState(4);
    slideY = getSlideOffsetY();
}

void PocketMenuUnk::stateWaitSlideOut() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
        clearFlags(1);
        clearFlags(2);
    } else {
        applySlideOffset(6, 0, 0);
    }
    slideY = getSlideOffsetY();
}

void PocketMenuUnk::initPocketMenuUnk() {
    u16 a;
    u16 b;
    stateFlags = 0;
    InventoryItemGrid_Init(&pocketGrid, 2);
    letterGrid.init(2);
    InventoryBg_Init(&inventoryBg, 6);
    balloonTarget = 0x1d;
    flyMotion.reset();
    handKind = 0;
    cursorTarget = 0;
    popup.init(3, 1, 0);
    a = 0x11a9;
    Pocket_SetItem(&a, 1, 0);
    b = 0x1548;
    Pocket_SetItem(&b, 0, 2);
}

void PocketMenuUnk::releaseResources() {
    PocketMenuUnk_CancelVramTasks(this);
    InventoryBg_Exit(&inventoryBg);
    InventoryItemGrid_Exit(&pocketGrid);
    PopupChoice_ForceClose(&popup);
}

void PocketMenuUnk::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void PocketMenuUnk::postInputUpdate() {
    postStateUpdate();
}

void PocketMenuUnk::preStateUpdate() {
    PocketMenuUnk_CancelVramTasks(this);
    InventoryBg_PreUpdate(&inventoryBg);
    InventoryItemGrid_PreUpdate(&pocketGrid);
    letterGrid.updateCursorLift();
}

void PocketMenuUnk::postStateUpdate() {
    PopupChoice_Update(&popup);
    InventoryBg_Update(&inventoryBg);
    if (nameBalloon.updatePrompt()) {
        positionLabelBalloon();
    }
}

void PocketMenuUnk::setupBgLayer() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketMenuUnk::func_ov099_02296364() {
    InventoryBg_Load(&inventoryBg, 0);
}

void PocketMenuUnk::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&inventoryBg);
}

void PocketMenuUnk::mainAct00() {
    if (checkSwitchToButtons(1)) {
        PocketMenuUnk_EnterButtonIdle(this);
    } else {
        if (Unk_ov099_02296158_Both()) {
            u8 x = gTouchCurX;
            u8 y = gTouchCurY;
            s32 r = PocketMenuUnk_HitPocket(this, x, y, 1);
            if (r != 0x1d) {
                PocketMenuUnk_BeginTouchOnTarget(this, r);
            } else {
                r = PocketMenuUnk_HitLetter(this, x, y, 1);
                if (r != 0x1d) {
                    PocketMenuUnk_BeginTouchOnTarget(this, r);
                }
            }
        }
    }
}

void PocketMenuUnk::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(0);
        nameBalloon.setAutoCloseTimer(0x3c);
    } else {
        if (testFlags(4)) {
            if (PocketMenuUnk_HasTouchMoved(this)) {
                PocketMenuUnk_StartTouchDrag(this, touchedTarget);
                return;
            }
            if (PocketMenuUnk_IsTouchHeldFor(this, 9)) {
                openTargetOptions(touchedTarget);
                return;
            }
        }
        nameBalloon.commitOpen();
    }
}

void PocketMenuUnk::mainAct02() {
    if (checkSwitchToButtons(1)) {
        cancelOptions();
    } else {
        if (Unk_ov099_02296158_Both()) {
            s32 t = ((PopupChoiceMenuBody *)&popup)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                PopupChoice_DecideRow(&popup, t, 1);
                chosenAction = popup.choiceValues[t];
                setMainState(0x12);
            }
        }
    }
}

void PocketMenuUnk::mainAct03() {
    syncHandFromTouch();
    PocketMenuUnk_ClearHighlights(this);
    s32 r = PocketMenuUnk_HitPocket(this, handX + 8, handY + 8, 0);
    if (r != 0x1d) {
        if (gTouchHeld == 0) {
            if (PocketMenuUnk_DropItemAt(this, r) == 0) {
                PocketMenuUnk_FlyHandTo(this, handSource, 4);
            }
            PocketMenuUnk_ReturnToIdle(this);
        } else {
            PocketMenuUnk_HighlightTarget(this, r);
        }
    } else if (gTouchHeld == 0) {
        PocketMenuUnk_FlyHandTo(this, handSource, 4);
    }
}

void PocketMenuUnk::mainAct04() {
    if (checkSwitchToTouch()) {
        PocketMenuUnk_EnterTouchIdle(this);
        nameBalloon.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateLabelBalloon();
        func_ov099_0229519c();
        nameBalloon.hide(0);
    } else if (func_ov099_02295788(this, cursorTarget) == 0 && (gPad[1] & 1) != 0) {
        if (PocketMenuUnk_IsPocketTarget(this, cursorTarget)) {
            if (PocketMenuUnk_IsSlotEmpty(this, cursorTarget) == 0) {
                openTargetOptions(cursorTarget);
            }
        }
    } else {
        if ((gPad[1] & 0x800) != 0) {
            transitionState = 3;
            setPhase(1);
            nameBalloon.hide(1);
            hideCursor();
        } else {
            nameBalloon.commitOpen();
        }
    }
}

void PocketMenuUnk::mainAct05() {
    if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateLabelBalloon();
        func_ov099_0229519c();
        nameBalloon.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (PocketMenuUnk_IsPocketTarget(this, cursorTarget)) {
                if (PocketMenuUnk_IsSlotEmpty(this, cursorTarget)) {
                    func_ov099_0229502c(cursorTarget);
                } else {
                    func_ov099_02294fe0(cursorTarget);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov099_0229502c(handSource);
        } else {
            syncHandFromCursor();
            nameBalloon.commitOpen();
        }
    }
}

void PocketMenuUnk::mainAct06() {
    if (checkSwitchToTouch()) {
        cancelOptions();
    } else if (PopupChoice_MoveCursor(&popup, takeRepeatedKeys(), &popupRow, 0)) {
        func_ov099_02295148();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((MenuCursor *)&cursor)->setPosePress();
            setMainState(7);
        } else if ((f & 2) != 0) {
            cancelOptions();
        }
    }
}

void PocketMenuUnk::mainAct07() {
    if (cursor.isAnimDone()) {
        PopupChoice_DecideRow(&popup, popupRow, 1);
        chosenAction = popup.choiceValues[popupRow];
        setMainState(0x12);
    }
}

void PocketMenuUnk::mainAct08() {
    if (cursor.isMoving() == 0) {
        setMainState(returnState);
        if ((u8)(returnState + 0xfc) <= 1) {
            PocketMenuUnk_SelectTarget(this, cursorTarget);
        }
    }
    syncHandFromCursor();
}

void PocketMenuUnk::mainAct09() {
    if (cursor.isAnimDone()) {
        func_ov099_02295088();
    }
}

void PocketMenuUnk::mainAct0A() {
    if (cursor.isAnimDone()) {
        func_ov099_022950a8();
        setMainState(4);
    }
}

void PocketMenuUnk::mainAct0B() {
    if (cursor.func_ov002_02202928()) {
        PocketMenuUnk_StartButtonDrag(this, cursorTarget);
        setMainState(0xc);
    }
}

void PocketMenuUnk::mainAct0C() {
    if (cursor.isAnimDone()) {
        setMainState(returnState);
    }
    syncHandFromCursor();
}

void PocketMenuUnk::mainAct0D() {
    if (!cursor.func_ov002_02202928()) {
        u32 a = placeTarget;
        if (cursorTarget == a) {
            PocketMenuUnk_DropItemAt(this, a);
            updateLabelBalloon();
            setMainState(4);
        } else {
            PocketMenuUnk_FlyHandTo(this, a, 4);
        }
    } else {
        syncHandFromCursor();
    }
}

void PocketMenuUnk::mainAct0E() {
    if (!cursor.func_ov002_022028fc()) {
        swapHandWith(placeTarget);
        setFlags(0x40);
        setMainState(0xf);
        updateLabelBalloon();
    } else {
        setMainState(4);
    }
}

void PocketMenuUnk::mainAct0F() {
    if (cursor.isAnimDone()) {
        setMainState(returnState);
    }
    if (cursor.func_ov002_02202928()) {
        clearFlags(0x40);
        syncHandFromCursor();
    }
}

void PocketMenuUnk::mainAct10() {
    if (flyMotion.update()) {
        putHandBack(handSource);
        PocketMenuUnk_ReturnToIdle(this);
    } else {
        syncHandFromMover();
    }
}

void PocketMenuUnk::mainAct11() {
    if (((PopupChoiceMenuBody *)&popup)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            func_ov099_022950fc();
            setMainState(6);
        } else {
            setMainState(2);
        }
    }
}

void PocketMenuUnk::mainAct12() {
    if (PopupChoice_TickDecideDelay(&popup)) {
        PopupChoice_Close(&popup, 0);
        if (cursor.getAnim()) {
            placeCursorOnTarget();
        }
        setMainState(0x13);
    }
}

void PocketMenuUnk::mainAct13() {
    if (((PopupChoiceMenuBody *)&popup)->isClosed()) {
        runChosenAction();
    }
}

// ---------------------------------------------------------------------------------------------
// State handlers

void PocketMenuUnk::mainAct14() {
    if (errorMessage.update(0)) {
        setMainState(returnState);
        cursor.enableObjWindow();
    }
}

void PocketMenuUnk_EnterTouchIdle(S *s) {
    s->hideCursor();
    PocketMenuUnk_ClearSelection(s);
    s->setMainState(0);
}

void PocketMenuUnk_EnterButtonIdle(S *s) {
    s->balloonTarget = 0x1d;
    s->func_ov099_02295290();
    s->restartKeyRepeat();
    s->updateLabelBalloon();
    s->setMainState(4);
    PocketMenuUnk_SelectTarget(s, s->cursorTarget);
}

void PocketMenuUnk_ReturnToIdle(S *s) {
    if (MenuCtrl_IsTouch()) {
        PocketMenuUnk_EnterTouchIdle(s);
    } else {
        PocketMenuUnk_EnterButtonIdle(s);
    }
}

void PocketMenuUnk_BeginTouchOnTarget(S *s, u32 a) {
    u32 r6, r7;
    s->touchedTarget = a;
    s->setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->grabOffsetX = PocketMenuUnk_GetTargetX(s, s->touchedTarget) - r6;
    s->grabOffsetY = PocketMenuUnk_GetTargetY(s, s->touchedTarget) - r7;
    s->balloonTarget = a;
    s->nameBalloon.queueOpen();
    if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->clearFlags(4);
    } else if (func_ov099_02295788(s, a)) {
        s->clearFlags(4);
    } else {
        s->setFlags(4);
    }
}

void PocketMenuUnk_StartTouchDrag(S *s, u32 a) {
    s->handSource = a;
    s->nameBalloon.hide(1);
    s->pickUp(a);
    if (s->handKind != 1) {
        if (s->handKind == 2) s->setMainState(3);
    }
    s->syncHandFromTouch();
}

void PocketMenuUnk_StartButtonDrag(S *s, u32 a) {
    s->handSource = a;
    s->nameBalloon.hide(1);
    s->pickUp(a);
    if (s->handKind != 1) {
        if (s->handKind == 2) s->returnState = 5;
    }
    s->syncHandFromCursor();
}

void PocketMenuUnk_FlyHandTo(S *s, u32 a, u32 b) {
    s->handSource = a;
    s->flyMotion.setPos(s->handX, s->handY);
    s32 x = PocketMenuUnk_GetTargetX(s, a);
    s->flyMotion.startLinear(x, PocketMenuUnk_GetTargetY(s, a), b);
    s->flyMotion.update();
    s->syncHandFromMover();
    s->setMainState(0x10);
}

void PocketMenuUnk_CancelVramTasks(S *s) {
    s->unk_94[0].cancel();
}

BOOL PocketMenuUnk_IsPocketTarget(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

BOOL PocketMenuUnk_IsLetterTarget(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return TRUE;
    return FALSE;
}

u32 PocketMenuUnk_TargetToGridIndex(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) return (u8)a;
    return 0;
}

u32 PocketMenuUnk_PocketIndexToTarget(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1d;
}

u32 PocketMenuUnk_HitPocket(S *s, u32 a, u32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(&s->pocketGrid);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&s->pocketGrid, t)) return 0x1d;
        }
        return PocketMenuUnk_PocketIndexToTarget(s, t);
    }
    return 0x1d;
}

BOOL PocketMenuUnk_DropItemAt(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        u32 t = PocketMenuUnk_GetItem(s, a);
        if (t != 0xfff1) {
            PocketMenuUnk_SetSlotItem(s, s->handSource, t, PocketMenuUnk_GetItemFlags(s, a));
        }
        s->putHandBack(a);
        return TRUE;
    }
    return FALSE;
}

void PocketMenuUnk_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        u32 t = PocketMenuUnk_TargetToGridIndex(s, a);
        InventoryItemGrid_SetSlotItem(&s->pocketGrid, t, b, c);
        InventoryItemGrid_RefreshSlot(&s->pocketGrid, t);
    }
}

u32 PocketMenuUnk_TargetToLetterIndex(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return (u8)(a - 0xf);
    return 0;
}

u32 PocketMenuUnk_LetterIndexToTarget(S *s, u32 a) {
    if (a <= 9) return (u8)(a + 0xf);
    return 0x1d;
}

u32 PocketMenuUnk_HitLetter(S *s, u32 a, u32 b, s32 c) {
    u32 t = s->letterGrid.findPocketLetterAt(a, b);
    if (t != 0x37) {
        if (c != 0) {
            if (LetterGrid_IsSlotEmpty(&s->letterGrid, t)) return 0x1d;
        }
        return PocketMenuUnk_LetterIndexToTarget(s, t);
    }
    return 0x1d;
}

s32 PocketMenuUnk_GetTargetX(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotX(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_GetSlotX(&s->letterGrid, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return 0;
}

s32 PocketMenuUnk_GetTargetY(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotY(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_GetSlotY(&s->letterGrid, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return 0;
}

BOOL func_ov099_02295788(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return s->letterGrid.isHighlighted(PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return FALSE;
}

BOOL PocketMenuUnk_IsSlotEmpty(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_IsSlotEmpty(&s->letterGrid, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return TRUE;
}

u32 PocketMenuUnk_GetItem(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotItem(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    }
    return 0xfff1;
}

u32 PocketMenuUnk_GetItemFlags(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotFlags(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    }
    return 0xf1;
}

void PocketMenuUnk_ClearSelection(S *s) {
    InventoryItemGrid_ClearCursorSlot(&s->pocketGrid);
    s->letterGrid.clearCursorSlot();
}

void PocketMenuUnk_SelectTarget(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        InventoryItemGrid_SetCursorSlot(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
        s->letterGrid.clearCursorSlot();
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->letterGrid.setCursorSlot(PocketMenuUnk_TargetToLetterIndex(s, a));
        InventoryItemGrid_ClearCursorSlot(&s->pocketGrid);
    } else {
        PocketMenuUnk_ClearSelection(s);
    }
}

void PocketMenuUnk_ClearHighlights(S *s) {
    InventoryItemGrid_ClearMarks(&s->pocketGrid);
    s->letterGrid.clearMarks();
}

void PocketMenuUnk_HighlightTarget(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        InventoryItemGrid_MarkSlot(&s->pocketGrid, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->letterGrid.markSlot(PocketMenuUnk_TargetToLetterIndex(s, a));
    }
}

BOOL PocketMenuUnk_HasTouchMoved(S *s) {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Plain functions

BOOL PocketMenuUnk_IsTouchHeldFor(S *self, s32 v) {
    if (gTouchHoldFrames >= v) return TRUE;
    return FALSE;
}

void PocketMenuUnk::positionLabelBalloon() {
    s32 x = PocketMenuUnk_GetTargetX(this, balloonTarget) - 0x6d;
    s32 y = PocketMenuUnk_GetTargetY(this, balloonTarget) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&nameBalloon)->setPos(x, y);
    if (PocketMenuUnk_IsPocketTarget(this, balloonTarget)) {
        s32 r = PocketMenuUnk_TargetToGridIndex(this, balloonTarget);
        InventoryItemGrid_ShowSlotName(&pocketGrid, &nameBalloon, r);
    } else if (PocketMenuUnk_IsLetterTarget(this, balloonTarget)) {
        s32 r = PocketMenuUnk_TargetToLetterIndex(this, balloonTarget);
        letterGrid.showLetterName(&nameBalloon, r);
    }
}

void PocketMenuUnk::updateLabelBalloon() {
    if (PocketMenuUnk_IsPocketTarget(this, cursorTarget) || PocketMenuUnk_IsLetterTarget(this, cursorTarget)) {
        if (PocketMenuUnk_IsSlotEmpty(this, cursorTarget)) {
            nameBalloon.cancelQueuedOpen();
        } else {
            balloonTarget = cursorTarget;
            nameBalloon.queueOpen();
        }
    } else {
        nameBalloon.cancelQueuedOpen();
    }
}

void PocketMenuUnk::drawHand() {
    if (!testFlags(0x40)) {
        switch (handKind) {
        case 0:
            break;
        case 2:
            InventoryItemGrid_DrawHeldItem(&pocketGrid, handX, handY);
            break;
        }
    }
}

void PocketMenuUnk::syncHandFromTouch() {
    handX = grabOffsetX + gTouchCurX;
    handY = grabOffsetY + gTouchCurY;
}

void PocketMenuUnk::syncHandFromCursor() {
    handX = cursor.getFrameScreenX() - 2;
    handY = cursor.getFrameScreenY() - 4;
}

void PocketMenuUnk::syncHandFromMover() {
    handX = flyMotion.getX();
    handY = flyMotion.getY();
}

void PocketMenuUnk::pickUp(u32 idx) {
    if (PocketMenuUnk_IsPocketTarget(this, idx)) {
        s32 r4 = PocketMenuUnk_TargetToGridIndex(this, idx);
        handKind = 2;
        handItem = InventoryItemGrid_GetSlotItem(&pocketGrid, r4);
        handItemFlags = InventoryItemGrid_GetSlotFlags(&pocketGrid, r4);
        InventoryItemGrid_ClearSlot(&pocketGrid, r4);
        InventoryItemGrid_SetHeldItem(&pocketGrid, handItem, handItemFlags);
    } else {
        if (PocketMenuUnk_IsLetterTarget(this, idx) != 0) {
            return;
        }
    }
}

void PocketMenuUnk::putHandBack(u32 idx) {
    if (handKind == 1) {
    } else if (handKind == 2) {
        PocketMenuUnk_SetSlotItem(this, idx, handItem, handItemFlags);
    }
    handKind = 0;
}

void PocketMenuUnk::swapHandWith(u32 idx) {
    if (handKind == 1) {
    } else if (handKind == 2) {
        u16 a = handItem;
        u8 b = handItemFlags;
        pickUp(idx);
        PocketMenuUnk_SetSlotItem(this, idx, a, b);
    }
}

void PocketMenuUnk::func_ov099_02295290() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    func_ov099_022950a8();
}

s32 PocketMenuUnk::getCursorTargetX() {
    s32 r = PocketMenuUnk_GetTargetX(this, cursorTarget);
    if (testFlags(0x20)) {
        r += 0x100;
    } else if (testFlags(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 PocketMenuUnk::getCursorTargetY() { return PocketMenuUnk_GetTargetY(this, cursorTarget); }

void PocketMenuUnk::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void PocketMenuUnk::func_ov099_0229519c() {
    if (testFlags(8)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.warpTo(a, b);
        clearFlags(8);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.moveToEase(a, b, 3, 1);
        returnState = mainState;
        setMainState(8);
    }
}

void PocketMenuUnk::func_ov099_02295148() {
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.moveToLinear(a, b, 2);
    returnState = mainState;
    setMainState(8);
}

void PocketMenuUnk::func_ov099_022950fc() {
    popupRow = 0;
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(7);
}

void PocketMenuUnk::placeCursorOnTarget() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
}

void PocketMenuUnk::func_ov099_022950a8() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void PocketMenuUnk::func_ov099_02295088() {
    cursor.setPoseRelease();
    setMainState(0xa);
}

void PocketMenuUnk::func_ov099_02295068() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(4);
    setMainState(0xb);
}

void PocketMenuUnk::func_ov099_0229502c(u32 v) {
    nameBalloon.hide(1);
    placeTarget = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(5);
    setMainState(0xd);
}

void PocketMenuUnk::func_ov099_02294fe0(u32 v) {
    nameBalloon.hide(1);
    returnState = mainState;
    placeTarget = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(6);
    setMainState(0xe);
}

s32 PocketMenuUnk::runChosenAction() {
    switch (chosenAction) {
    case 0:
        func_ov099_02295068();
        break;
    case 1:
    default:
        PocketMenuUnk_ReturnToIdle(this);
        break;
    }
}

void PocketMenuUnk::showOptionList() {
    ((PopupChoiceMenuBody *)&popup)->setRowsFromIds((PopupChoiceIdList *)&popup.unk_2f4, 0);
    s32 a = PocketMenuUnk_GetTargetX(this, actionTarget);
    s32 b = PocketMenuUnk_GetTargetY(this, actionTarget);
    popup.placeNearPoint(a, b);
    PopupChoice_Open(&popup, 0);
    setMainState(0x11);
}

void PocketMenuUnk::cancelOptions() {
    chosenAction = 1;
    placeCursorOnTarget();
    PopupChoice_Close(&popup, 0);
    setMainState(0x13);
}

void PocketMenuUnk::addItemOptions() {
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(&popup.unk_2f4, 0, 0);
    }
    ChoiceIdList_Add(&popup.unk_2f4, 1, 1);
    ChoiceIdList_Add(&popup.unk_2f4, 2, 1);
}

void PocketMenuUnk::openTargetOptions(u32 idx) {
    actionTarget = idx;
    ChoiceIdList_Clear(&popup.unk_2f4, 1);
    if (PocketMenuUnk_IsPocketTarget(this, idx)) {
        addItemOptions();
        hideCursor();
        nameBalloon.hide(1);
        showOptionList();
    }
}

void PocketMenuUnk::moveCursorInPockets(void *pad) {
    s32 col = cursorTarget;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                cursorTarget = cursorTarget + 4;
                setFlags(0x10);
            } else {
                cursorTarget = cursorTarget - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                cursorTarget = cursorTarget - 4;
                setFlags(0x20);
            } else {
                cursorTarget = cursorTarget + 1;
            }
        }
    }
    if (!testFlags(0x30)) {
        if (MenuKeys_HasUp(pad)) {
            if (row > 0) {
                cursorTarget = cursorTarget - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (row < 2) {
                cursorTarget = cursorTarget + 5;
            }
        }
    }
}

BOOL PocketMenuUnk::moveCursorByPad(void *pad) {
    u8 old = cursorTarget;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (PocketMenuUnk_IsPocketTarget(this, cursorTarget)) {
        moveCursorInPockets(pad);
    }
    if (old != cursorTarget) {
        return TRUE;
    }
    return FALSE;
}

BOOL PocketMenuUnk::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketMenuUnk::setFlags(u32 mask) { stateFlags = stateFlags | mask; }

void PocketMenuUnk::clearFlags(u32 mask) { stateFlags = stateFlags & ~mask; }

// ---------------------------------------------------------------------------------------------


