// ov101: scene overlay (class PocketItemSelectMenu, vtable 0x02296b38, 0x2804 bytes).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "ui/CursorMotion.h"
#include "menu/InventoryItemGrid.h"
#include "menu/LetterGrid.h"
#include "menu/InventoryBg.h"
#include "menu/MenuProc.h"

class PocketItemSelectMenu;
class MenuLauncher;
class LabelBalloon;
class PopupChoiceIdList;

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;

BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
u32 MenuCtrl_GetPocketSelectLabel();
u32 MenuCtrl_GetPocketSelectMask();
void MenuCtrl_SetResult(u32 v);
void MenuCtrl_SetIndex(u32 v);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Snd_PlaySe(u32 v);
void ProcBase_RequestDelete();
void *ProcBase_GetParent(...);

void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_Update(void *p);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void MenuButtons_LoadTextColors(void *p);
u32 PopupChoice_DecideCancel(void *p);
void ChoiceIdList_Clear(void *p, u32 v);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
void PopupChoice_Open(void *p, u32 v);
void PopupChoice_Close(void *p, u32 v);
BOOL PopupChoice_MoveCursor(void *p, u32 a, void *b, u32 c);
BOOL PopupChoice_TickDecideDelay(void *p);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);

void Inventory_PlayTouchSe();
void InventoryItemGrid_MarkSlot(void *p, u32 v);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_SetCursorSlot(void *p, u32 v);
void InventoryItemGrid_ClearCursorSlot(void *p);
u32 InventoryItemGrid_GetSlotFlags(void *p, u32 v);
u32 InventoryItemGrid_GetSlotItem(void *p, u32 v);
BOOL InventoryItemGrid_IsSlotEmpty(void *p, u32 v);
BOOL InventoryItemGrid_IsSlotDisabled(void *p, u32 v);
s32 InventoryItemGrid_GetSlotY(void *p, u32 v);
s32 InventoryItemGrid_GetSlotX(void *p, u32 v);
void InventoryItemGrid_SetSlotItem(void *p, u32 a, u32 b, u32 c);
void InventoryItemGrid_RefreshSlot(void *p, u32 a);
void InventoryItemGrid_ShowSlotName(void *p, void *q, u32 a);
void InventoryItemGrid_DisableSlot(void *p, u32 a);
u32 InventoryItemGrid_FindPocketSlotAt(void *p);
void InventoryItemGrid_ClearSlot(void *p, u32 idx);
void InventoryItemGrid_SetHeldItem(void *p, u32 a, u32 b);
void InventoryItemGrid_DrawHeldItem(void *p, s32 a, s32 b);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryBg_Exit(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
void InventoryItemGrid_LoadPockets(void *p);
void LetterGrid_LoadPocketLetters(void *p);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void InventoryBg_DrawSprite(void *p, s32 a);
}

static inline BOOL Unk_ov101_02296280_Both()
{
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

class BgVramTask {
public:
    void cancel();
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
    u32 unk_00[0x38 / 4];
};




class LabelBalloon {
public:
    virtual ~LabelBalloon();
    virtual void vfunc_08();
    void setPos(s32 x, s32 y);
    u32 unk_04[(0xbc - 4) / 4];
};

class TouchPromptBalloon : public LabelBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    BOOL isOpenOrOpening();
    void setAutoCloseTimer(u8 v);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    BOOL hide(s32 a);
    s32 updatePrompt();
    u8 unk_bc[0xc0 - 0xbc];
};


class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
    void setAnimAtEnd(s32 a);
    void enableObjWindow();
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

class PopupChoiceMenuBody {
public:
    BOOL isClosed();
    BOOL isOpen();
    s32 getRowX();
    s32 getRowY(s32 a);
    s32 hitTestRowOrLast(s32 a, s32 b);
    void setRowsFromIds(PopupChoiceIdList *r, s32 a);
};

class PopupChoiceMenu {
public:
    PopupChoiceMenu();
    virtual ~PopupChoiceMenu();
    void placeAboveBalloon(LabelBalloon *p);
    void placeNearPoint(s32 a, s32 b);
    void init(s32 a, s32 b, const char *path);
    u32 unk_04[(0x2f4 - 4) / 4];
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

class MenuBottomButtonsBody {
public:
    u32 unk_00[0x164 / 4];
    BOOL isTouched(s32 idx);
    void setSelected(u8 v);
    BOOL stepPress();
    s32 getPressOffset();
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void freeTexts();
    void drawAt(s32 a);
    void setLayoutSingle05(s32 a);
};


typedef void (PocketItemSelectMenu::*Unk_ov101_02296b38_Fn)();

class PocketItemSelectMenu : public MenuProc {
public:
    PocketItemSelectMenu()
        : bgTasks(), pocketGrid(), letterGrid(), inventoryBg(), nameBalloon(), flyMotion(), cursor(), popup(), errorMessage(), bottomButtons() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    // methods at the start of the overlay
    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    BOOL moveCursorByPad(void *pad);
    void moveCursorInGrid(void *pad);
    void selectPocket(u32 idx, u32 v);
    void setPopupChoices();
    void closeWithoutChoice();
    void closeWithSelection();
    void cancelPopupForButtons();
    void openPopup(u32 v);
    s32 onPopupChoice();
    void beginSwapAt(u32 v);
    void beginPutDownAt(u32 v);
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
    void exchangeHeldWith(u32 idx);
    void releaseHeldTo(u32 idx);
    void pickUpFrom(u32 idx);
    void getFlyPos();
    void getHandPos();
    void getDragPos();
    void updateBalloonForCursor();

    // middle of the overlay
    void placeBalloon();
    void setHoverSlot(u32 a);
    void clearHoverSlot();
    void setFocusSlot(u32 a);
    void clearFocusSlot();
    u32 getSlotItemFlags(u32 a);
    u32 getSlotItem(u32 a);
    BOOL isSlotEmpty(u32 a);
    BOOL isSlotDisabled(u32 a);
    void disableFilteredPockets();
    s32 getSlotY(u32 a);
    s32 getSlotX(u32 a);
    void putItemInSlot(u32 a, u32 b, u32 c);
    BOOL dropHeldOnSlot(u32 a);
    u32 getSlotAt(u32 a, u32 b, s32 c);
    u32 toSlotOrNone(u32 a);
    u32 toPocketIndex(u32 a);
    BOOL isPocketSlot(u32 a);
    void cancelBgTasks();
    void flyHeldTo(u32 a, u32 b);
    void pickUpAtSlot(u32 a);
    void beginTouchOnSlot(u32 a);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();

    // state handlers (member-pointer table, index = unk_8d)
    void mainAct17();
    void mainAct16();
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

    /* 0x0094 */ u32 stateFlags;
    /* 0x0098 */ s32 slideY;
    /* 0x009c */ s32 dragOffsetX;
    /* 0x00a0 */ s32 dragOffsetY;
    /* 0x00a4 */ s32 handX;
    /* 0x00a8 */ s32 handY;
    /* 0x00ac */ u16 handItem;
    /* 0x00ae */ u8 handItemFlags;
    /* 0x00af */ u8 handKind;
    /* 0x00b0 */ u8 touchedSlot;
    /* 0x00b1 */ u8 balloonSlot;
    /* 0x00b2 */ u8 heldSlot;
    /* 0x00b3 */ u8 cursorSlot;
    /* 0x00b4 */ u8 selectedSlot;
    /* 0x00b5 */ u8 targetSlot;
    /* 0x00b6 */ u8 returnState;
    /* 0x00b7 */ u8 popupChoice;
    /* 0x00b8 */ u8 popupRow;
    /* 0x00b9 */ u8 touchHoldDelay;
    /* 0x00ba */ u8 unk_ba[2];
    /* 0x00bc */ BgVramTaskPair bgTasks[1];
    /* 0x00f4 */ InventoryItemGrid pocketGrid;
    /* 0x0b54 */ LetterGrid letterGrid;
    /* 0x0b7c */ InventoryBg inventoryBg;
    /* 0x215c */ TouchPromptBalloon nameBalloon;
    /* 0x221c */ CursorMotion flyMotion;
    /* 0x2234 */ MenuCursorBuf0 cursor;
    /* 0x2298 */ PopupChoiceMenu popup;
    /* 0x2598 */ MenuErrorMessage errorMessage;
    /* 0x26a0 */ MenuBottomButtons bottomButtons;
};

extern "C" PocketItemSelectMenu *PocketItemSelectMenu_Create() { return new PocketItemSelectMenu(); }

BOOL PocketItemSelectMenu::vfunc_00() {
    initParts();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL PocketItemSelectMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PocketItemSelectMenu::onDraw() {
    s32 t;
    PopupChoice_Draw(&popup);
    if (!testFlags(1)) {
        return TRUE;
    }
    nameBalloon.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    if (testFlags(2)) {
        bottomButtons.drawAt(slideY);
        t = slideY - 0x10;
        InventoryItemGrid_DrawPockets(&pocketGrid, 0, t);
        letterGrid.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&inventoryBg, t);
    }
    return TRUE;
}

extern "C" PocketItemSelectMenu *PocketItemSelectMenu_Create();

struct Unk_ov101_SceneEntry {
    PocketItemSelectMenu *(*create)();
    u16 a;
    u16 b;
};

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov101_SceneEntry sPocketItemSelectMenuProfile;

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov101_SceneEntry sPocketItemSelectMenuProfile = {PocketItemSelectMenu_Create, 0x94, 0x98};

BOOL PocketItemSelectMenu::execTransition() {
    static Unk_ov101_02296b38_Fn tbl[5] = {
        &PocketItemSelectMenu::transitionAct00, &PocketItemSelectMenu::transitionAct01,
        &PocketItemSelectMenu::transitionAct02, &PocketItemSelectMenu::transitionAct03,
        &PocketItemSelectMenu::transitionAct04};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void PocketItemSelectMenu::runMainState() {
    static Unk_ov101_02296b38_Fn tbl[24] = {
        &PocketItemSelectMenu::mainAct00, &PocketItemSelectMenu::mainAct01,
        &PocketItemSelectMenu::mainAct02, &PocketItemSelectMenu::mainAct03,
        &PocketItemSelectMenu::mainAct04, &PocketItemSelectMenu::mainAct05,
        &PocketItemSelectMenu::mainAct06, &PocketItemSelectMenu::mainAct07,
        &PocketItemSelectMenu::mainAct08, &PocketItemSelectMenu::mainAct09,
        &PocketItemSelectMenu::mainAct0A, &PocketItemSelectMenu::mainAct0B,
        &PocketItemSelectMenu::mainAct0C, &PocketItemSelectMenu::mainAct0D,
        &PocketItemSelectMenu::mainAct0E, &PocketItemSelectMenu::mainAct0F,
        &PocketItemSelectMenu::mainAct10, &PocketItemSelectMenu::mainAct11,
        &PocketItemSelectMenu::mainAct12, &PocketItemSelectMenu::mainAct13,
        &PocketItemSelectMenu::mainAct14, &PocketItemSelectMenu::mainAct15,
        &PocketItemSelectMenu::mainAct16, &PocketItemSelectMenu::mainAct17};
    (this->*tbl[mainState])();
}

BOOL PocketItemSelectMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PocketItemSelectMenu::execPhase3() { return TRUE; }

BOOL PocketItemSelectMenu::execPhase4() { return TRUE; }

BOOL PocketItemSelectMenu::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void PocketItemSelectMenu::transitionAct00() {
    setupBgLayer6();
    loadInventoryBg();
    setTransitionState(1);
}

void PocketItemSelectMenu::transitionAct01() {
    loadObjGraphics();
    bottomButtons.setLayoutSingle05(0x65);
    InventoryItemGrid_LoadPockets(&pocketGrid);
    disableFilteredPockets();
    LetterGrid_LoadPocketLetters(&letterGrid);
    letterGrid.highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -16);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    slideY = getSlideOffsetY();
}

void PocketItemSelectMenu::transitionAct02() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, -16);
    slideY = getSlideOffsetY();
}

void PocketItemSelectMenu::transitionAct03() {
    nameBalloon.hide(1);
    hideCursor();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, -16);
    setTransitionState(4);
    slideY = getSlideOffsetY();
}

void PocketItemSelectMenu::transitionAct04() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
        clearFlags(1);
        clearFlags(2);
    } else {
        applySlideOffset(6, 0, -16);
    }
    slideY = getSlideOffsetY();
}

void PocketItemSelectMenu::initParts() {
    stateFlags = 0;
    InventoryItemGrid_Init(&pocketGrid, 2);
    letterGrid.init(2);
    InventoryBg_Init(&inventoryBg, 6);
    balloonSlot = 0x10;
    flyMotion.reset();
    handKind = 0;
    cursorSlot = 0;
    popup.init(3, 1, 0);
    touchHoldDelay = 0;
}

void PocketItemSelectMenu::releaseResources() {
    cancelBgTasks();
    InventoryBg_Exit(&inventoryBg);
    InventoryItemGrid_Exit(&pocketGrid);
    PopupChoice_ForceClose(&popup);
    bottomButtons.freeTexts();
}

void PocketItemSelectMenu::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void PocketItemSelectMenu::postInputUpdate() {
    postStateUpdate();
}

void PocketItemSelectMenu::preStateUpdate() {
    cancelBgTasks();
    InventoryBg_PreUpdate(&inventoryBg);
    InventoryItemGrid_PreUpdate(&pocketGrid);
    letterGrid.updateCursorLift();
    bottomButtons.freeTexts();
}

void PocketItemSelectMenu::postStateUpdate() {
    PopupChoice_Update(&popup);
    InventoryBg_Update(&inventoryBg);
    if (nameBalloon.updatePrompt()) {
        placeBalloon();
    }
}

void PocketItemSelectMenu::setupBgLayer6() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketItemSelectMenu::loadInventoryBg() {
    InventoryBg_Load(&inventoryBg, 0);
}

void PocketItemSelectMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&inventoryBg);
    MenuButtons_LoadTextColors(&bottomButtons);
}

void PocketItemSelectMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov101_02296280_Both()) {
            s32 r = getSlotAt(gTouchCurX, gTouchCurY + 0x10, 1);
            if (r != 0x10) {
                beginTouchOnSlot(r);
            } else {
                if (bottomButtons.isTouched(9)) {
                    bottomButtons.setSelected(9);
                    setMainState(0x17);
                    Snd_PlaySe(0x28);
                }
            }
        }
    }
}

void PocketItemSelectMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (isSlotDisabled(touchedSlot)) {
            setMainState(0);
            nameBalloon.setAutoCloseTimer(0x3c);
        } else {
            setMainState(3);
            runMainState();
        }
    } else {
        if (isSlotDisabled(touchedSlot) == 0 && nameBalloon.isOpenOrOpening()) {
            if (*(volatile u8 *)&touchHoldDelay != 0) {
                touchHoldDelay = touchHoldDelay - 1;
            } else {
                selectPocket(touchedSlot, 1);
                setMainState(2);
            }
        } else {
            nameBalloon.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(4);
    }
}

void PocketItemSelectMenu::mainAct03() {
    if (nameBalloon.isOpenOrOpening()) {
        if (*(volatile u8 *)&touchHoldDelay != 0) {
            touchHoldDelay = touchHoldDelay - 1;
        } else {
            selectPocket(touchedSlot, 1);
            setMainState(2);
        }
    }
}

void PocketItemSelectMenu::mainAct04() {
    if (((PopupChoiceMenuBody *)&popup)->isOpen()) {
        if (checkSwitchToButtons(1)) {
            cancelPopupForButtons();
        } else {
            if (Unk_ov101_02296280_Both()) {
                s32 t = ((PopupChoiceMenuBody *)&popup)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
                if (t >= 0) {
                    PopupChoice_DecideRow(&popup, t, 1);
                    popupChoice = popup.choiceValues[t - 0];
                    setMainState(0x14);
                }
            }
        }
    }
}

void PocketItemSelectMenu::mainAct05() {
    getDragPos();
    clearHoverSlot();
    s32 r = getSlotAt(handX + 8, handY + 8, 0);
    if (r != 0x10) {
        if (gTouchHeld == 0) {
            if (dropHeldOnSlot(r) == 0) {
                flyHeldTo(heldSlot, 4);
            }
            resumeInput();
        } else {
            setHoverSlot(r);
        }
    } else if (gTouchHeld == 0) {
        flyHeldTo(heldSlot, 4);
    }
}

void PocketItemSelectMenu::mainAct06() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        nameBalloon.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateBalloonForCursor();
        moveCursorToTarget();
        nameBalloon.hide(0);
    } else if (isSlotDisabled(cursorSlot) == 0 && (gPad[1] & 1) != 0) {
        if (isPocketSlot(cursorSlot)) {
            if (isSlotEmpty(cursorSlot) == 0) {
                selectPocket(cursorSlot, 0);
            }
        } else if (cursorSlot == 0xf) {
            pressCloseButton();
        }
    } else {
        if ((gPad[1] & 2) != 0) {
            hideCursor();
            bottomButtons.setSelected(9);
            setMainState(0x17);
            Snd_PlaySe(0x28);
            nameBalloon.hide(0);
        } else {
            nameBalloon.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct07() {
    if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateBalloonForCursor();
        moveCursorToTarget();
        nameBalloon.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (isPocketSlot(cursorSlot)) {
                if (isSlotEmpty(cursorSlot)) {
                    beginPutDownAt(cursorSlot);
                } else {
                    beginSwapAt(cursorSlot);
                }
            }
        } else if ((f & 2) != 0) {
            beginPutDownAt(heldSlot);
        } else {
            getHandPos();
            nameBalloon.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct08() {
    if (checkSwitchToTouch()) {
        cancelPopupForButtons();
    } else {
        if (PopupChoice_MoveCursor(&popup, takeRepeatedKeys(), &popupRow, 0)) {
            moveCursorToPopupRow();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((MenuCursor *)&cursor)->setPosePress();
                setMainState(9);
            } else if (k & 2) {
                cancelPopup();
            }
        }
    }
}

void PocketItemSelectMenu::mainAct09() {
    if (cursor.isAnimDone()) {
        PopupChoice_DecideRow(&popup, popupRow, 1);
        popupChoice = popup.choiceValues[popupRow];
        setMainState(0x14);
    }
}

void PocketItemSelectMenu::mainAct0A() {
    if (!cursor.isMoving()) {
        setMainState(returnState);
        if ((u8)(returnState + 0xfa) <= 1) {
            setFocusSlot(cursorSlot);
        }
        runMainState();
    }
    getHandPos();
}

void PocketItemSelectMenu::mainAct0B() {
    if (cursor.isAnimDone()) {
        bottomButtons.setSelected(9);
        setMainState(0x17);
        Snd_PlaySe(0x28);
    }
}

void PocketItemSelectMenu::mainAct0C() {
    if (cursor.isAnimDone()) {
        refreshCursor();
        setMainState(6);
    }
}

void PocketItemSelectMenu::mainAct0D() {
    if (cursor.func_ov002_02202928()) {
        pickUpAtSlot(cursorSlot);
        setMainState(0xe);
    }
}

void PocketItemSelectMenu::mainAct0E() {
    if (cursor.isAnimDone()) {
        setMainState(returnState);
    }
    getHandPos();
}

void PocketItemSelectMenu::mainAct0F() {
    if (!cursor.func_ov002_02202928()) {
        u32 a = targetSlot;
        if (cursorSlot == a) {
            dropHeldOnSlot(a);
            updateBalloonForCursor();
            setMainState(6);
        } else {
            flyHeldTo(a, 4);
        }
    } else {
        getHandPos();
    }
}

void PocketItemSelectMenu::mainAct10() {
    if (!cursor.func_ov002_022028fc()) {
        exchangeHeldWith(targetSlot);
        setFlags(0x20);
        setMainState(0x11);
        updateBalloonForCursor();
    } else {
        setMainState(6);
    }
}

void PocketItemSelectMenu::mainAct11() {
    if (cursor.isAnimDone()) {
        setMainState(returnState);
    }
    if (cursor.func_ov002_02202928()) {
        clearFlags(0x20);
        getHandPos();
    }
}

void PocketItemSelectMenu::mainAct12() {
    if (flyMotion.update()) {
        releaseHeldTo(heldSlot);
        resumeInput();
    } else {
        getFlyPos();
    }
}

void PocketItemSelectMenu::mainAct13() {
    if (((PopupChoiceMenuBody *)&popup)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(8);
        } else {
            setMainState(4);
        }
    }
}

void PocketItemSelectMenu::mainAct14() {
    if (PopupChoice_TickDecideDelay(&popup)) {
        PopupChoice_Close(&popup, 0);
        nameBalloon.hide(1);
        if (cursor.getAnim()) {
            showCursorAtSlot();
        }
        setMainState(0x15);
    }
}

void PocketItemSelectMenu::mainAct15() {
    if (((PopupChoiceMenuBody *)&popup)->isClosed()) {
        onPopupChoice();
    }
}

void PocketItemSelectMenu::mainAct16() {
    if (errorMessage.update(0)) {
        setMainState(returnState);
        cursor.enableObjWindow();
    }
}

void PocketItemSelectMenu::mainAct17() {
    if (bottomButtons.stepPress()) {
        if (cursor.getAnim()) {
            s32 r4 = bottomButtons.getPressOffset();
            s32 r6 = bottomButtons.getTargetX(-1);
            s32 r2 = bottomButtons.getTargetY(-1);
            cursor.warpTo(r4 + r6, r4 + r2);
        }
    } else {
        closeWithoutChoice();
    }
}

void PocketItemSelectMenu::startTouchInput() {
    hideCursor();
    clearFocusSlot();
    setMainState(0);
}

void PocketItemSelectMenu::startButtonInput() {
    balloonSlot = 0x10;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(6);
    setFocusSlot(cursorSlot);
}

void PocketItemSelectMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void PocketItemSelectMenu::beginTouchOnSlot(u32 a) {
    u32 r6, r7;
    touchedSlot = a;
    setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    dragOffsetX = getSlotX(touchedSlot) - r6;
    dragOffsetY = getSlotY(touchedSlot) - r7;
    balloonSlot = a;
    nameBalloon.queueOpen();
    nameBalloon.commitOpen();
    touchHoldDelay = 2;
    if (!isSlotDisabled(a)) {
        Inventory_PlayTouchSe();
    }
}

void PocketItemSelectMenu::pickUpAtSlot(u32 a) {
    heldSlot = a;
    nameBalloon.hide(1);
    pickUpFrom(a);
    if (handKind == 1) returnState = 7;
    getHandPos();
}

void PocketItemSelectMenu::flyHeldTo(u32 a, u32 b) {
    heldSlot = a;
    flyMotion.setPos(handX, handY);
    s32 x = getSlotX(a);
    flyMotion.startLinear(x, getSlotY(a), b);
    flyMotion.update();
    getFlyPos();
    setMainState(0x12);
}

void PocketItemSelectMenu::cancelBgTasks() {
    bgTasks[0].cancel();
}

BOOL PocketItemSelectMenu::isPocketSlot(u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

u32 PocketItemSelectMenu::toPocketIndex(u32 a) {
    if (isPocketSlot(a)) return (u8)a;
    return 0;
}

u32 PocketItemSelectMenu::toSlotOrNone(u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 PocketItemSelectMenu::getSlotAt(u32 a, u32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(&pocketGrid);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&pocketGrid, t)) return 0x10;
        }
        return toSlotOrNone(t);
    }
    return 0x10;
}

BOOL PocketItemSelectMenu::dropHeldOnSlot(u32 a) {
    if (isPocketSlot(a)) {
        u32 t = getSlotItem(a);
        if (t != 0xfff1) {
            putItemInSlot(heldSlot, t, getSlotItemFlags(a));
        }
        releaseHeldTo(a);
        return TRUE;
    }
    return FALSE;
}

void PocketItemSelectMenu::putItemInSlot(u32 a, u32 b, u32 c) {
    if (isPocketSlot(a)) {
        u32 t = toPocketIndex(a);
        InventoryItemGrid_SetSlotItem(&pocketGrid, t, b, c);
        InventoryItemGrid_RefreshSlot(&pocketGrid, t);
    }
}

s32 PocketItemSelectMenu::getSlotX(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotX(&pocketGrid, toPocketIndex(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 PocketItemSelectMenu::getSlotY(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotY(&pocketGrid, toPocketIndex(a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void PocketItemSelectMenu::disableFilteredPockets() {
    u32 m = MenuCtrl_GetPocketSelectMask();
    u8 i = 0;
    s32 j = 0;
    do {
        if (!isSlotEmpty(i) && (m & (1 << j)) == 0) {
            InventoryItemGrid_DisableSlot(&pocketGrid, toPocketIndex(i));
        }
        i++;
        j++;
    } while (i <= 0xe);
}

BOOL PocketItemSelectMenu::isSlotDisabled(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotDisabled(&pocketGrid, toPocketIndex(a));
    }
    return FALSE;
}

BOOL PocketItemSelectMenu::isSlotEmpty(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotEmpty(&pocketGrid, toPocketIndex(a));
    }
    return TRUE;
}

u32 PocketItemSelectMenu::getSlotItem(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotItem(&pocketGrid, toPocketIndex(a));
    }
    return 0xfff1;
}

u32 PocketItemSelectMenu::getSlotItemFlags(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotFlags(&pocketGrid, toPocketIndex(a));
    }
    return 0xf1;
}

void PocketItemSelectMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&pocketGrid);
    letterGrid.clearCursorSlot();
}

void PocketItemSelectMenu::setFocusSlot(u32 a) {
    if (isPocketSlot(a)) {
        InventoryItemGrid_SetCursorSlot(&pocketGrid, toPocketIndex(a));
        letterGrid.clearCursorSlot();
    } else {
        clearFocusSlot();
    }
}

void PocketItemSelectMenu::clearHoverSlot() {
    InventoryItemGrid_ClearMarks(&pocketGrid);
    letterGrid.clearMarks();
}

void PocketItemSelectMenu::setHoverSlot(u32 a) {
    if (isPocketSlot(a)) {
        InventoryItemGrid_MarkSlot(&pocketGrid, toPocketIndex(a));
    }
}

void PocketItemSelectMenu::placeBalloon() {
    s32 r6 = getSlotX(balloonSlot) - 0x6d;
    s32 r4 = getSlotY(balloonSlot) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    nameBalloon.setPos(r6, r4);
    if (isPocketSlot(balloonSlot)) {
        InventoryItemGrid_ShowSlotName(&pocketGrid, &nameBalloon, toPocketIndex(balloonSlot));
    }
}

void PocketItemSelectMenu::updateBalloonForCursor() {
    if (isPocketSlot(cursorSlot)) {
        if (isSlotEmpty(cursorSlot)) {
            nameBalloon.cancelQueuedOpen();
        } else {
            balloonSlot = cursorSlot;
            nameBalloon.queueOpen();
        }
    } else {
        nameBalloon.cancelQueuedOpen();
    }
}

void PocketItemSelectMenu::getDragPos() {
    handX = dragOffsetX + gTouchCurX;
    handY = dragOffsetY + gTouchCurY;
}

void PocketItemSelectMenu::getHandPos() {
    handX = cursor.getFrameScreenX() - 2;
    handY = cursor.getFrameScreenY() - 4;
}

void PocketItemSelectMenu::getFlyPos() {
    handX = flyMotion.getX();
    handY = flyMotion.getY();
}

void PocketItemSelectMenu::pickUpFrom(u32 idx) {
    if (isPocketSlot(idx)) {
        s32 r4 = toPocketIndex(idx);
        handKind = 1;
        handItem = InventoryItemGrid_GetSlotItem(&pocketGrid, r4);
        handItemFlags = InventoryItemGrid_GetSlotFlags(&pocketGrid, r4);
        InventoryItemGrid_ClearSlot(&pocketGrid, r4);
        InventoryItemGrid_SetHeldItem(&pocketGrid, handItem, handItemFlags);
    }
}

void PocketItemSelectMenu::releaseHeldTo(u32 idx) {
    if (handKind == 1) {
        putItemInSlot(idx, handItem, handItemFlags);
    }
    handKind = 0;
}

void PocketItemSelectMenu::exchangeHeldWith(u32 idx) {
    if (handKind == 1) {
        u16 a = handItem;
        u8 b = handItemFlags;
        pickUpFrom(idx);
        putItemInSlot(idx, a, b);
    }
}

void PocketItemSelectMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    if (cursorSlot == 0xf) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 PocketItemSelectMenu::getCursorTargetX() {
    s32 r = getSlotX(cursorSlot);
    if (testFlags(0x10)) {
        r += 0x100;
    } else if (testFlags(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 PocketItemSelectMenu::getCursorTargetY() { return getSlotY(cursorSlot); }

void PocketItemSelectMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void PocketItemSelectMenu::moveCursorToTarget() {
    if (testFlags(4)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.warpTo(a, b);
        clearFlags(4);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.moveToEase(a, b, 3, 1);
        returnState = mainState;
        setMainState(0xa);
    }
}

void PocketItemSelectMenu::moveCursorToPopupRow() {
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.moveToLinear(a, b, 2);
    returnState = mainState;
    setMainState(0xa);
}

void PocketItemSelectMenu::cancelPopup() {
    popupChoice = 1;
    popupRow = PopupChoice_DecideCancel(&popup);
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.warpTo(a, b);
    cursor.setAnimAtEnd(8);
    setMainState(0x14);
}

void PocketItemSelectMenu::cursorToPopupTop() {
    popupRow = 0;
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(7);
}

void PocketItemSelectMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
}

void PocketItemSelectMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void PocketItemSelectMenu::pressCloseButton() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(0xb);
}

void PocketItemSelectMenu::beginPutDownAt(u32 v) {
    nameBalloon.hide(1);
    targetSlot = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(5);
    setMainState(0xf);
}

void PocketItemSelectMenu::beginSwapAt(u32 v) {
    nameBalloon.hide(1);
    returnState = mainState;
    targetSlot = v;
    ((MenuCursor *)&cursor)->setAnimIfChanged(6);
    setMainState(0x10);
}

s32 PocketItemSelectMenu::onPopupChoice() {
    switch (popupChoice) {
    case 0:
        closeWithSelection();
        break;
    case 1:
    default:
        resumeInput();
        break;
    }
}

void PocketItemSelectMenu::openPopup(u32 v) {
    ((PopupChoiceMenuBody *)&popup)->setRowsFromIds((PopupChoiceIdList *)&popup.unk_2f4, 0);
    s32 a = getSlotX(selectedSlot);
    s32 b = getSlotY(selectedSlot);
    if (v) {
        popup.placeAboveBalloon(&nameBalloon);
    } else {
        popup.placeNearPoint(a, b);
    }
    PopupChoice_Open(&popup, 0);
    setMainState(0x13);
}

void PocketItemSelectMenu::cancelPopupForButtons() {
    popupChoice = 1;
    showCursorAtSlot();
    PopupChoice_Close(&popup, 0);
    setMainState(0x15);
}

void PocketItemSelectMenu::closeWithSelection() {
    MenuCtrl_SetIndex(selectedSlot);
    MenuCtrl_SetResult(1);
    transitionState = 3;
    setPhase(1);
    nameBalloon.hide(1);
    hideCursor();
}

void PocketItemSelectMenu::closeWithoutChoice() {
    MenuCtrl_SetResult(0);
    transitionState = 3;
    setPhase(1);
    nameBalloon.hide(1);
    hideCursor();
}

void PocketItemSelectMenu::setPopupChoices() {
    ChoiceIdList_Add(&popup.unk_2f4, MenuCtrl_GetPocketSelectLabel(), 0);
    ChoiceIdList_Add(&popup.unk_2f4, 2, 1);
}

void PocketItemSelectMenu::selectPocket(u32 idx, u32 v) {
    selectedSlot = idx;
    ChoiceIdList_Clear(&popup.unk_2f4, 1);
    if (isPocketSlot(idx)) {
        setPopupChoices();
        hideCursor();
        if (v == 0) {
            nameBalloon.hide(1);
        }
        openPopup(v);
    }
}

void PocketItemSelectMenu::moveCursorInGrid(void *pad) {
    s32 col = cursorSlot;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                cursorSlot = cursorSlot + 4;
                setFlags(8);
            } else {
                cursorSlot = cursorSlot - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                cursorSlot = cursorSlot - 4;
                setFlags(0x10);
            } else {
                cursorSlot = cursorSlot + 1;
            }
        }
    }
    if (!testFlags(0x18)) {
        if (MenuKeys_HasUp(pad)) {
            if (row > 0) {
                cursorSlot = cursorSlot - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (row < 2) {
                cursorSlot = cursorSlot + 5;
            } else {
                cursorSlot = 0xf;
                ((MenuCursor *)&cursor)->switchToAnim07();
            }
        }
    }
}

BOOL PocketItemSelectMenu::moveCursorByPad(void *pad) {
    u8 old = cursorSlot;
    clearFlags(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (isPocketSlot(cursorSlot)) {
        moveCursorInGrid(pad);
    } else if (cursorSlot == 0xf) {
        if (MenuKeys_HasUp(pad)) {
            cursorSlot = 0xe;
            ((MenuCursor *)&cursor)->switchToAnim01();
        }
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

BOOL PocketItemSelectMenu::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketItemSelectMenu::setFlags(u32 mask) { stateFlags = stateFlags | mask; }

// ---------------------------------------------------------------------------------------------

// ---------------------------------------------------------------------------------------------

void PocketItemSelectMenu::clearFlags(u32 mask) { stateFlags = stateFlags & ~mask; }

