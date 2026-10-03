// ov101: scene overlay (class PocketItemSelectMenu, vtable 0x02296b38, 0x2804 bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

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
    void updateCursorLift();
    void init(s32 a);
    void highlightLetterKinds(u32 a);
    void clearMarks();
    void clearCursorSlot();
    void drawPocketLetters(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x15e0 / 4];
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

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();
    void startLinear(s32 x, s32 y, s32 n);
    void setPos(s32 x, s32 y);
    s32 getY();
    s32 getX();
    BOOL update();
    void reset();
    u32 unk_00[0x18 / 4];
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
    u8 unk_2f9[7];
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
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
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
    /* 0x91 */ u8 unk_91[3];
};

typedef void (PocketItemSelectMenu::*Unk_ov101_02296b38_Fn)();

class PocketItemSelectMenu : public MenuProc {
public:
    PocketItemSelectMenu()
        : unk_bc(), unk_f4(), unk_b54(), unk_b7c(), unk_215c(), unk_221c(), unk_2234(), unk_2298(), unk_2598(), unk_26a0() {}

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

    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ u16 unk_ac;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 unk_b2;
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 unk_b5;
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 unk_b9;
    /* 0x00ba */ u8 unk_ba[2];
    /* 0x00bc */ BgVramTaskPair unk_bc[1];
    /* 0x00f4 */ InventoryItemGrid unk_f4;
    /* 0x0b54 */ LetterGrid unk_b54;
    /* 0x0b7c */ InventoryBg unk_b7c;
    /* 0x215c */ TouchPromptBalloon unk_215c;
    /* 0x221c */ CursorMotion unk_221c;
    /* 0x2234 */ MenuCursorBuf0 unk_2234;
    /* 0x2298 */ PopupChoiceMenu unk_2298;
    /* 0x2598 */ MenuErrorMessage unk_2598;
    /* 0x26a0 */ MenuBottomButtons unk_26a0;
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
    PopupChoice_Draw(&unk_2298);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_215c.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_2234.drawWrapped();
    }
    if (testFlags(2)) {
        unk_26a0.drawAt(unk_98);
        t = unk_98 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_f4, 0, t);
        unk_b54.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&unk_b7c, t);
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
    (this->*tbl[unk_8c])();
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
    (this->*tbl[unk_8d])();
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
    unk_26a0.setLayoutSingle05(0x65);
    InventoryItemGrid_LoadPockets(&unk_f4);
    disableFilteredPockets();
    LetterGrid_LoadPocketLetters(&unk_b54);
    unk_b54.highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -16);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_98 = getSlideOffsetY();
}

void PocketItemSelectMenu::transitionAct02() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, -16);
    unk_98 = getSlideOffsetY();
}

void PocketItemSelectMenu::transitionAct03() {
    unk_215c.hide(1);
    hideCursor();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, -16);
    setTransitionState(4);
    unk_98 = getSlideOffsetY();
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
    unk_98 = getSlideOffsetY();
}

void PocketItemSelectMenu::initParts() {
    unk_94 = 0;
    InventoryItemGrid_Init(&unk_f4, 2);
    unk_b54.init(2);
    InventoryBg_Init(&unk_b7c, 6);
    unk_b1 = 0x10;
    unk_221c.reset();
    unk_af = 0;
    unk_b3 = 0;
    unk_2298.init(3, 1, 0);
    unk_b9 = 0;
}

void PocketItemSelectMenu::releaseResources() {
    cancelBgTasks();
    InventoryBg_Exit(&unk_b7c);
    InventoryItemGrid_Exit(&unk_f4);
    PopupChoice_ForceClose(&unk_2298);
    unk_26a0.freeTexts();
}

void PocketItemSelectMenu::preInputUpdate() {
    preStateUpdate();
    unk_2234.vfunc_0c();
}

void PocketItemSelectMenu::postInputUpdate() {
    postStateUpdate();
}

void PocketItemSelectMenu::preStateUpdate() {
    cancelBgTasks();
    InventoryBg_PreUpdate(&unk_b7c);
    InventoryItemGrid_PreUpdate(&unk_f4);
    unk_b54.updateCursorLift();
    unk_26a0.freeTexts();
}

void PocketItemSelectMenu::postStateUpdate() {
    PopupChoice_Update(&unk_2298);
    InventoryBg_Update(&unk_b7c);
    if (unk_215c.updatePrompt()) {
        placeBalloon();
    }
}

void PocketItemSelectMenu::setupBgLayer6() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketItemSelectMenu::loadInventoryBg() {
    InventoryBg_Load(&unk_b7c, 0);
}

void PocketItemSelectMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_b7c);
    MenuButtons_LoadTextColors(&unk_26a0);
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
                if (unk_26a0.isTouched(9)) {
                    unk_26a0.setSelected(9);
                    setMainState(0x17);
                    Snd_PlaySe(0x28);
                }
            }
        }
    }
}

void PocketItemSelectMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (isSlotDisabled(unk_b0)) {
            setMainState(0);
            unk_215c.setAutoCloseTimer(0x3c);
        } else {
            setMainState(3);
            runMainState();
        }
    } else {
        if (isSlotDisabled(unk_b0) == 0 && unk_215c.isOpenOrOpening()) {
            if (*(volatile u8 *)&unk_b9 != 0) {
                unk_b9 = unk_b9 - 1;
            } else {
                selectPocket(unk_b0, 1);
                setMainState(2);
            }
        } else {
            unk_215c.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(4);
    }
}

void PocketItemSelectMenu::mainAct03() {
    if (unk_215c.isOpenOrOpening()) {
        if (*(volatile u8 *)&unk_b9 != 0) {
            unk_b9 = unk_b9 - 1;
        } else {
            selectPocket(unk_b0, 1);
            setMainState(2);
        }
    }
}

void PocketItemSelectMenu::mainAct04() {
    if (((PopupChoiceMenuBody *)&unk_2298)->isOpen()) {
        if (checkSwitchToButtons(1)) {
            cancelPopupForButtons();
        } else {
            if (Unk_ov101_02296280_Both()) {
                s32 t = ((PopupChoiceMenuBody *)&unk_2298)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
                if (t >= 0) {
                    PopupChoice_DecideRow(&unk_2298, t, 1);
                    unk_b7 = unk_2298.unk_2f9[t - 0];
                    setMainState(0x14);
                }
            }
        }
    }
}

void PocketItemSelectMenu::mainAct05() {
    getDragPos();
    clearHoverSlot();
    s32 r = getSlotAt(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x10) {
        if (gTouchHeld == 0) {
            if (dropHeldOnSlot(r) == 0) {
                flyHeldTo(unk_b2, 4);
            }
            resumeInput();
        } else {
            setHoverSlot(r);
        }
    } else if (gTouchHeld == 0) {
        flyHeldTo(unk_b2, 4);
    }
}

void PocketItemSelectMenu::mainAct06() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        unk_215c.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateBalloonForCursor();
        moveCursorToTarget();
        unk_215c.hide(0);
    } else if (isSlotDisabled(unk_b3) == 0 && (gPad[1] & 1) != 0) {
        if (isPocketSlot(unk_b3)) {
            if (isSlotEmpty(unk_b3) == 0) {
                selectPocket(unk_b3, 0);
            }
        } else if (unk_b3 == 0xf) {
            pressCloseButton();
        }
    } else {
        if ((gPad[1] & 2) != 0) {
            hideCursor();
            unk_26a0.setSelected(9);
            setMainState(0x17);
            Snd_PlaySe(0x28);
            unk_215c.hide(0);
        } else {
            unk_215c.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct07() {
    if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateBalloonForCursor();
        moveCursorToTarget();
        unk_215c.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (isPocketSlot(unk_b3)) {
                if (isSlotEmpty(unk_b3)) {
                    beginPutDownAt(unk_b3);
                } else {
                    beginSwapAt(unk_b3);
                }
            }
        } else if ((f & 2) != 0) {
            beginPutDownAt(unk_b2);
        } else {
            getHandPos();
            unk_215c.commitOpen();
        }
    }
}

void PocketItemSelectMenu::mainAct08() {
    if (checkSwitchToTouch()) {
        cancelPopupForButtons();
    } else {
        if (PopupChoice_MoveCursor(&unk_2298, takeRepeatedKeys(), &unk_b8, 0)) {
            moveCursorToPopupRow();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((MenuCursor *)&unk_2234)->setPosePress();
                setMainState(9);
            } else if (k & 2) {
                cancelPopup();
            }
        }
    }
}

void PocketItemSelectMenu::mainAct09() {
    if (unk_2234.isAnimDone()) {
        PopupChoice_DecideRow(&unk_2298, unk_b8, 1);
        unk_b7 = unk_2298.unk_2f9[unk_b8];
        setMainState(0x14);
    }
}

void PocketItemSelectMenu::mainAct0A() {
    if (!unk_2234.isMoving()) {
        setMainState(unk_b6);
        if ((u8)(unk_b6 + 0xfa) <= 1) {
            setFocusSlot(unk_b3);
        }
        runMainState();
    }
    getHandPos();
}

void PocketItemSelectMenu::mainAct0B() {
    if (unk_2234.isAnimDone()) {
        unk_26a0.setSelected(9);
        setMainState(0x17);
        Snd_PlaySe(0x28);
    }
}

void PocketItemSelectMenu::mainAct0C() {
    if (unk_2234.isAnimDone()) {
        refreshCursor();
        setMainState(6);
    }
}

void PocketItemSelectMenu::mainAct0D() {
    if (unk_2234.func_ov002_02202928()) {
        pickUpAtSlot(unk_b3);
        setMainState(0xe);
    }
}

void PocketItemSelectMenu::mainAct0E() {
    if (unk_2234.isAnimDone()) {
        setMainState(unk_b6);
    }
    getHandPos();
}

void PocketItemSelectMenu::mainAct0F() {
    if (!unk_2234.func_ov002_02202928()) {
        u32 a = unk_b5;
        if (unk_b3 == a) {
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
    if (!unk_2234.func_ov002_022028fc()) {
        exchangeHeldWith(unk_b5);
        setFlags(0x20);
        setMainState(0x11);
        updateBalloonForCursor();
    } else {
        setMainState(6);
    }
}

void PocketItemSelectMenu::mainAct11() {
    if (unk_2234.isAnimDone()) {
        setMainState(unk_b6);
    }
    if (unk_2234.func_ov002_02202928()) {
        clearFlags(0x20);
        getHandPos();
    }
}

void PocketItemSelectMenu::mainAct12() {
    if (unk_221c.update()) {
        releaseHeldTo(unk_b2);
        resumeInput();
    } else {
        getFlyPos();
    }
}

void PocketItemSelectMenu::mainAct13() {
    if (((PopupChoiceMenuBody *)&unk_2298)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(8);
        } else {
            setMainState(4);
        }
    }
}

void PocketItemSelectMenu::mainAct14() {
    if (PopupChoice_TickDecideDelay(&unk_2298)) {
        PopupChoice_Close(&unk_2298, 0);
        unk_215c.hide(1);
        if (unk_2234.getAnim()) {
            showCursorAtSlot();
        }
        setMainState(0x15);
    }
}

void PocketItemSelectMenu::mainAct15() {
    if (((PopupChoiceMenuBody *)&unk_2298)->isClosed()) {
        onPopupChoice();
    }
}

void PocketItemSelectMenu::mainAct16() {
    if (unk_2598.update(0)) {
        setMainState(unk_b6);
        unk_2234.enableObjWindow();
    }
}

void PocketItemSelectMenu::mainAct17() {
    if (unk_26a0.stepPress()) {
        if (unk_2234.getAnim()) {
            s32 r4 = unk_26a0.getPressOffset();
            s32 r6 = unk_26a0.getTargetX(-1);
            s32 r2 = unk_26a0.getTargetY(-1);
            unk_2234.warpTo(r4 + r6, r4 + r2);
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
    unk_b1 = 0x10;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(6);
    setFocusSlot(unk_b3);
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
    unk_b0 = a;
    setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    unk_9c = getSlotX(unk_b0) - r6;
    unk_a0 = getSlotY(unk_b0) - r7;
    unk_b1 = a;
    unk_215c.queueOpen();
    unk_215c.commitOpen();
    unk_b9 = 2;
    if (!isSlotDisabled(a)) {
        Inventory_PlayTouchSe();
    }
}

void PocketItemSelectMenu::pickUpAtSlot(u32 a) {
    unk_b2 = a;
    unk_215c.hide(1);
    pickUpFrom(a);
    if (unk_af == 1) unk_b6 = 7;
    getHandPos();
}

void PocketItemSelectMenu::flyHeldTo(u32 a, u32 b) {
    unk_b2 = a;
    unk_221c.setPos(unk_a4, unk_a8);
    s32 x = getSlotX(a);
    unk_221c.startLinear(x, getSlotY(a), b);
    unk_221c.update();
    getFlyPos();
    setMainState(0x12);
}

void PocketItemSelectMenu::cancelBgTasks() {
    unk_bc[0].cancel();
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
    u32 t = InventoryItemGrid_FindPocketSlotAt(&unk_f4);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&unk_f4, t)) return 0x10;
        }
        return toSlotOrNone(t);
    }
    return 0x10;
}

BOOL PocketItemSelectMenu::dropHeldOnSlot(u32 a) {
    if (isPocketSlot(a)) {
        u32 t = getSlotItem(a);
        if (t != 0xfff1) {
            putItemInSlot(unk_b2, t, getSlotItemFlags(a));
        }
        releaseHeldTo(a);
        return TRUE;
    }
    return FALSE;
}

void PocketItemSelectMenu::putItemInSlot(u32 a, u32 b, u32 c) {
    if (isPocketSlot(a)) {
        u32 t = toPocketIndex(a);
        InventoryItemGrid_SetSlotItem(&unk_f4, t, b, c);
        InventoryItemGrid_RefreshSlot(&unk_f4, t);
    }
}

s32 PocketItemSelectMenu::getSlotX(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotX(&unk_f4, toPocketIndex(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 PocketItemSelectMenu::getSlotY(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotY(&unk_f4, toPocketIndex(a)) - 0x10;
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
            InventoryItemGrid_DisableSlot(&unk_f4, toPocketIndex(i));
        }
        i++;
        j++;
    } while (i <= 0xe);
}

BOOL PocketItemSelectMenu::isSlotDisabled(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotDisabled(&unk_f4, toPocketIndex(a));
    }
    return FALSE;
}

BOOL PocketItemSelectMenu::isSlotEmpty(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_IsSlotEmpty(&unk_f4, toPocketIndex(a));
    }
    return TRUE;
}

u32 PocketItemSelectMenu::getSlotItem(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotItem(&unk_f4, toPocketIndex(a));
    }
    return 0xfff1;
}

u32 PocketItemSelectMenu::getSlotItemFlags(u32 a) {
    if (isPocketSlot(a)) {
        return InventoryItemGrid_GetSlotFlags(&unk_f4, toPocketIndex(a));
    }
    return 0xf1;
}

void PocketItemSelectMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_f4);
    unk_b54.clearCursorSlot();
}

void PocketItemSelectMenu::setFocusSlot(u32 a) {
    if (isPocketSlot(a)) {
        InventoryItemGrid_SetCursorSlot(&unk_f4, toPocketIndex(a));
        unk_b54.clearCursorSlot();
    } else {
        clearFocusSlot();
    }
}

void PocketItemSelectMenu::clearHoverSlot() {
    InventoryItemGrid_ClearMarks(&unk_f4);
    unk_b54.clearMarks();
}

void PocketItemSelectMenu::setHoverSlot(u32 a) {
    if (isPocketSlot(a)) {
        InventoryItemGrid_MarkSlot(&unk_f4, toPocketIndex(a));
    }
}

void PocketItemSelectMenu::placeBalloon() {
    s32 r6 = getSlotX(unk_b1) - 0x6d;
    s32 r4 = getSlotY(unk_b1) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    unk_215c.setPos(r6, r4);
    if (isPocketSlot(unk_b1)) {
        InventoryItemGrid_ShowSlotName(&unk_f4, &unk_215c, toPocketIndex(unk_b1));
    }
}

void PocketItemSelectMenu::updateBalloonForCursor() {
    if (isPocketSlot(unk_b3)) {
        if (isSlotEmpty(unk_b3)) {
            unk_215c.cancelQueuedOpen();
        } else {
            unk_b1 = unk_b3;
            unk_215c.queueOpen();
        }
    } else {
        unk_215c.cancelQueuedOpen();
    }
}

void PocketItemSelectMenu::getDragPos() {
    unk_a4 = unk_9c + gTouchCurX;
    unk_a8 = unk_a0 + gTouchCurY;
}

void PocketItemSelectMenu::getHandPos() {
    unk_a4 = unk_2234.getFrameScreenX() - 2;
    unk_a8 = unk_2234.getFrameScreenY() - 4;
}

void PocketItemSelectMenu::getFlyPos() {
    unk_a4 = unk_221c.getX();
    unk_a8 = unk_221c.getY();
}

void PocketItemSelectMenu::pickUpFrom(u32 idx) {
    if (isPocketSlot(idx)) {
        s32 r4 = toPocketIndex(idx);
        unk_af = 1;
        unk_ac = InventoryItemGrid_GetSlotItem(&unk_f4, r4);
        unk_ae = InventoryItemGrid_GetSlotFlags(&unk_f4, r4);
        InventoryItemGrid_ClearSlot(&unk_f4, r4);
        InventoryItemGrid_SetHeldItem(&unk_f4, unk_ac, unk_ae);
    }
}

void PocketItemSelectMenu::releaseHeldTo(u32 idx) {
    if (unk_af == 1) {
        putItemInSlot(idx, unk_ac, unk_ae);
    }
    unk_af = 0;
}

void PocketItemSelectMenu::exchangeHeldWith(u32 idx) {
    if (unk_af == 1) {
        u16 a = unk_ac;
        u8 b = unk_ae;
        pickUpFrom(idx);
        putItemInSlot(idx, a, b);
    }
}

void PocketItemSelectMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_2234.warpTo(a, b);
    if (unk_b3 == 0xf) {
        ((MenuCursor *)&unk_2234)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_2234)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 PocketItemSelectMenu::getCursorTargetX() {
    s32 r = getSlotX(unk_b3);
    if (testFlags(0x10)) {
        r += 0x100;
    } else if (testFlags(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 PocketItemSelectMenu::getCursorTargetY() { return getSlotY(unk_b3); }

void PocketItemSelectMenu::hideCursor() {
    ((MenuCursor *)&unk_2234)->setAnimIfChanged(0);
    unk_2234.vfunc_0c();
}

void PocketItemSelectMenu::moveCursorToTarget() {
    if (testFlags(4)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_2234.warpTo(a, b);
        clearFlags(4);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_2234.moveToEase(a, b, 3, 1);
        unk_b6 = unk_8d;
        setMainState(0xa);
    }
}

void PocketItemSelectMenu::moveCursorToPopupRow() {
    s32 a = ((PopupChoiceMenuBody *)&unk_2298)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_2298)->getRowY(unk_b8);
    unk_2234.moveToLinear(a, b, 2);
    unk_b6 = unk_8d;
    setMainState(0xa);
}

void PocketItemSelectMenu::cancelPopup() {
    unk_b7 = 1;
    unk_b8 = PopupChoice_DecideCancel(&unk_2298);
    s32 a = ((PopupChoiceMenuBody *)&unk_2298)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_2298)->getRowY(unk_b8);
    unk_2234.warpTo(a, b);
    unk_2234.setAnimAtEnd(8);
    setMainState(0x14);
}

void PocketItemSelectMenu::cursorToPopupTop() {
    unk_b8 = 0;
    s32 a = ((PopupChoiceMenuBody *)&unk_2298)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_2298)->getRowY(unk_b8);
    unk_2234.warpTo(a, b);
    ((MenuCursor *)&unk_2234)->setAnimIfChanged(7);
}

void PocketItemSelectMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_2234.warpTo(a, b);
    ((MenuCursor *)&unk_2234)->setAnimIfChanged(1);
}

void PocketItemSelectMenu::refreshCursor() {
    unk_2234.setPoseIdle();
    unk_2234.vfunc_0c();
}

void PocketItemSelectMenu::pressCloseButton() {
    ((MenuCursor *)&unk_2234)->setPosePress();
    setMainState(0xb);
}

void PocketItemSelectMenu::beginPutDownAt(u32 v) {
    unk_215c.hide(1);
    unk_b5 = v;
    ((MenuCursor *)&unk_2234)->setAnimIfChanged(5);
    setMainState(0xf);
}

void PocketItemSelectMenu::beginSwapAt(u32 v) {
    unk_215c.hide(1);
    unk_b6 = unk_8d;
    unk_b5 = v;
    ((MenuCursor *)&unk_2234)->setAnimIfChanged(6);
    setMainState(0x10);
}

s32 PocketItemSelectMenu::onPopupChoice() {
    switch (unk_b7) {
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
    ((PopupChoiceMenuBody *)&unk_2298)->setRowsFromIds((PopupChoiceIdList *)&unk_2298.unk_2f4, 0);
    s32 a = getSlotX(unk_b4);
    s32 b = getSlotY(unk_b4);
    if (v) {
        unk_2298.placeAboveBalloon(&unk_215c);
    } else {
        unk_2298.placeNearPoint(a, b);
    }
    PopupChoice_Open(&unk_2298, 0);
    setMainState(0x13);
}

void PocketItemSelectMenu::cancelPopupForButtons() {
    unk_b7 = 1;
    showCursorAtSlot();
    PopupChoice_Close(&unk_2298, 0);
    setMainState(0x15);
}

void PocketItemSelectMenu::closeWithSelection() {
    MenuCtrl_SetIndex(unk_b4);
    MenuCtrl_SetResult(1);
    unk_8c = 3;
    setPhase(1);
    unk_215c.hide(1);
    hideCursor();
}

void PocketItemSelectMenu::closeWithoutChoice() {
    MenuCtrl_SetResult(0);
    unk_8c = 3;
    setPhase(1);
    unk_215c.hide(1);
    hideCursor();
}

void PocketItemSelectMenu::setPopupChoices() {
    ChoiceIdList_Add(&unk_2298.unk_2f4, MenuCtrl_GetPocketSelectLabel(), 0);
    ChoiceIdList_Add(&unk_2298.unk_2f4, 2, 1);
}

void PocketItemSelectMenu::selectPocket(u32 idx, u32 v) {
    unk_b4 = idx;
    ChoiceIdList_Clear(&unk_2298.unk_2f4, 1);
    if (isPocketSlot(idx)) {
        setPopupChoices();
        hideCursor();
        if (v == 0) {
            unk_215c.hide(1);
        }
        openPopup(v);
    }
}

void PocketItemSelectMenu::moveCursorInGrid(void *pad) {
    s32 col = unk_b3;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                unk_b3 = unk_b3 + 4;
                setFlags(8);
            } else {
                unk_b3 = unk_b3 - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                unk_b3 = unk_b3 - 4;
                setFlags(0x10);
            } else {
                unk_b3 = unk_b3 + 1;
            }
        }
    }
    if (!testFlags(0x18)) {
        if (MenuKeys_HasUp(pad)) {
            if (row > 0) {
                unk_b3 = unk_b3 - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (row < 2) {
                unk_b3 = unk_b3 + 5;
            } else {
                unk_b3 = 0xf;
                ((MenuCursor *)&unk_2234)->switchToAnim07();
            }
        }
    }
}

BOOL PocketItemSelectMenu::moveCursorByPad(void *pad) {
    u8 old = unk_b3;
    clearFlags(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (isPocketSlot(unk_b3)) {
        moveCursorInGrid(pad);
    } else if (unk_b3 == 0xf) {
        if (MenuKeys_HasUp(pad)) {
            unk_b3 = 0xe;
            ((MenuCursor *)&unk_2234)->switchToAnim01();
        }
    }
    if (old != unk_b3) {
        return TRUE;
    }
    return FALSE;
}

BOOL PocketItemSelectMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketItemSelectMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

// ---------------------------------------------------------------------------------------------

void PocketItemSelectMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }

