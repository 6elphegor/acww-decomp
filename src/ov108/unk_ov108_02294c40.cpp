#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;

void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Snd_PlaySe(u32 a);
void func_02065e70(void *a, void *b);
void MenuCtrl_SetResult(u32 a);
void MenuCtrl_SetIndex(u32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
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
u8 PopupChoice_DecideCancel(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);
void MenuButtons_LoadTextColors(void *p);
void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void InventoryItemGrid_DisableSlotRange(void *p, u32 a, u32 b);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_ClearCursorSlot(void *p);
void InventoryItemGrid_LoadPockets(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void LetterGrid_LoadPocketLetters(void *p);
s32 LetterGrid_IsSlotEmpty(void *p, u32 a);
s32 LetterGrid_GetSlotY(void *p, u32 a);
s32 LetterGrid_GetSlotX(void *p, u32 a);
}

// ---- external classes (method holders: the real symbols name the class that owns the method)

class LabelBalloon {
public:
    void setPos(s32 a, s32 b);
};

class HandCursor {
public:
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 a);
    void enableObjWindow();
};

class BgVramTask {
public:
    void cancel();
};

struct PopupChoiceIdList;

class PopupChoiceMenuBody {
public:
    s32 getRowY(s32 a);
    s32 getRowX();
    s32 hitTestRowOrLast(s32 a, s32 b);
    void setRowsFromIds(PopupChoiceIdList *a, s32 b);
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
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void moveToLinear(s32 a, s32 b, s32 c);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
};

class MenuCursor {
public:
    void setPosePress();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 a);
};

class MenuBottomButtonsBody {
public:
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 a);
    s32 getTargetY(s32 a);
    s32 getTargetX(s32 a);
    BOOL isTouched(s32 a);
};

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

// ---- sub-objects with their own constructor/destructor

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

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

    void drawHeldLetter(s32 a, s32 b, void *c);
    void drawPocketLetters(s32 a, s32 b);
    s32 isHighlighted(s32 a);
    void highlightLetterKinds(u32 a);
    void clearLetter(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    void *getLetter(s32 a);
    void markSlot(s32 a);
    void clearMarks();
    void setCursorSlot(u32 a);
    void clearCursorSlot();
    void showLetterName(void *a, s32 b);
    u32 findPocketLetterAt(s32 a, s32 b);
    void updateCursorLift();
    void init(s32 a);

    u32 unk_00[0x28 / 4];
};

class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x160 / 4];
};

class TouchPromptBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();

    BOOL isOpenOrOpening();
    void setAutoCloseTimer(u8 a);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    void hide(s32 a);
    BOOL updatePrompt();

    u32 unk_04[(0xc0 - 4) / 4];
};

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();

    void startLinear(s32 a, s32 b, s32 c);
    void setPos(s32 a, s32 b);
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

    void placeAboveBalloon(LabelBalloon *a);
    void placeNearPoint(s32 a, s32 b);
    void init(s32 a, s32 b, const char *c);

    u32 unk_00[0x2f4 / 4];
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

class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();

    void setLayoutSingle05(s32 a);
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

class LetterGiveMenu;
typedef void (LetterGiveMenu::*Unk_ov108_02296b58_Fn)();

static inline BOOL Unk_ov108_022961d8_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x02296b58 (size 0x298c)
class LetterGiveMenu : public MenuProc {
public:
    LetterGiveMenu()
        : unk_ac(), unk_1a0(), unk_2a0(), unk_2d8(), unk_d38(), unk_d60(), unk_2340(), unk_2400(), unk_2418(), unk_247c(), unk_277c(), unk_2884() {}

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
    BOOL moveCursorByPad(void *pad, u32 x);
    void moveCursorInGrid(void *pad, u32 x);
    void openLetterChoice(u32 idx, u32 x);
    void cancelChoice();
    void openPopup(u32 x);
    void onPopupChoice();
    void beginSwapAtSlot(u32 v);
    void beginPutBack(u32 v);
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
    void swapCarriedLetter(u32 a);
    void dropCarriedLetter(u32 a);
    void pickUpLetter(u32 a);
    void setCarryPosFromMover();
    void setCarryPosFromCursor();
    void setCarryPosFromTouch();
    void drawCarriedLetter();
    void updateNameLabel();
    void refreshNameLabel();

    void setDropHighlight(u32 b);
    void clearDropHighlight();
    void showSlotFocus(u32 b);
    void hideSlotFocus();
    s32 isSlotEmpty(u32 b);
    s32 isSlotDisabled(u32 b);
    void setupLetterPanels();
    s32 getSlotY(u32 b);
    s32 getSlotX(u32 b);
    void *getLetter(u32 b);
    void setLetter(u32 b, void *c);
    BOOL dropOnSlot(u32 b);
    u32 hitTestSlot(u32 a, u32 b, u32 c);
    u32 letterIndexToSlot(u32 b);
    u32 slotToLetterIndex(u32 b);
    BOOL isLetterSlot(u32 b);
    void cancelBgTask();
    void startClose();
    void confirmGiveLetter();
    void flyLetterBack(u32 a, u32 c);
    void carryFromSlot(u32 b);
    void beginTouchSlot(u32 b);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();

    // state handlers (member-pointer table)
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
    void updateCursorMove();
    void mainAct09();
    void mainAct08();
    void mainAct07();
    void updateButtons();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void updateTouch();

    void startPanels();
    void resetPanelUnk();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initLetterGive();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void runMainState();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ Letter unk_ac;
    /* 0x1a0 */ Letter unk_1a0;
    /* 0x294 */ u8 unk_294;
    /* 0x295 */ u8 unk_295;
    /* 0x296 */ u8 unk_296;
    /* 0x297 */ u8 unk_297;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 unk_299;
    /* 0x29a */ u8 unk_29a;
    /* 0x29b */ u8 unk_29b;
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f;
    /* 0x2a0 */ BgVramTaskPair unk_2a0[1];
    /* 0x2d8 */ InventoryItemGrid unk_2d8;
    /* 0xd38 */ LetterGrid unk_d38;
    /* 0xd60 */ InventoryBg unk_d60;
    /* 0xec0 */ u32 unk_ec0[0x1480 / 4];
    /* 0x2340 */ TouchPromptBalloon unk_2340;
    /* 0x2400 */ CursorMotion unk_2400;
    /* 0x2418 */ MenuCursorBuf0 unk_2418;
    /* 0x247c */ PopupChoiceMenu unk_247c;
    /* 0x277c */ MenuErrorMessage unk_277c;
    /* 0x2884 */ MenuBottomButtons unk_2884;
};

extern "C" LetterGiveMenu *LetterGiveMenu_Create() { return new LetterGiveMenu(); }

struct Unk_ov108_SceneEntry {
    LetterGiveMenu *(*create)();
    u16 a;
    u16 b;
};

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov108_SceneEntry sLetterGiveMenuProfile = {LetterGiveMenu_Create, 0x9b, 0x9f};

BOOL LetterGiveMenu::vfunc_00() {
    initLetterGive();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL LetterGiveMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL LetterGiveMenu::onDraw() {
    s32 t;
    PopupChoice_Draw(&unk_247c);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2340.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_2418)->drawWrapped();
    }
    drawCarriedLetter();
    if (testFlags(2)) {
        unk_2884.drawAt(unk_98);
        t = unk_98 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_2d8, 0, t);
        unk_d38.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&unk_d60, t);
    }
    return TRUE;
}

BOOL LetterGiveMenu::execTransition() {
    static Unk_ov108_02296b58_Fn tbl[5] = {
        &LetterGiveMenu::stateLoad, &LetterGiveMenu::stateOpen,
        &LetterGiveMenu::stateOpening, &LetterGiveMenu::stateClose,
        &LetterGiveMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void LetterGiveMenu::runMainState() {
    static Unk_ov108_02296b58_Fn tbl[24] = {
        &LetterGiveMenu::updateTouch, &LetterGiveMenu::mainAct01,
        &LetterGiveMenu::mainAct02, &LetterGiveMenu::mainAct03,
        &LetterGiveMenu::mainAct04, &LetterGiveMenu::mainAct05,
        &LetterGiveMenu::updateButtons, &LetterGiveMenu::mainAct07,
        &LetterGiveMenu::mainAct08, &LetterGiveMenu::mainAct09,
        &LetterGiveMenu::updateCursorMove, &LetterGiveMenu::mainAct0B,
        &LetterGiveMenu::mainAct0C, &LetterGiveMenu::mainAct0D,
        &LetterGiveMenu::mainAct0E, &LetterGiveMenu::mainAct0F,
        &LetterGiveMenu::mainAct10, &LetterGiveMenu::mainAct11,
        &LetterGiveMenu::mainAct12, &LetterGiveMenu::mainAct13,
        &LetterGiveMenu::mainAct14, &LetterGiveMenu::mainAct15,
        &LetterGiveMenu::mainAct16, &LetterGiveMenu::mainAct17};
    (this->*tbl[unk_8d])();
}

BOOL LetterGiveMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL LetterGiveMenu::execPhase3() { return TRUE; }

BOOL LetterGiveMenu::execPhase4() { return TRUE; }

BOOL LetterGiveMenu::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void LetterGiveMenu::stateLoad() {
    setupBgLayers();
    resetPanelUnk();
    setTransitionState(1);
}

void LetterGiveMenu::stateOpen() {
    startPanels();
    unk_2884.setLayoutSingle05(0x65);
    InventoryItemGrid_LoadPockets(&unk_2d8);
    LetterGrid_LoadPocketLetters(&unk_d38);
    setupLetterPanels();
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -16);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_98 = getSlideOffsetY();
}

void LetterGiveMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, -16);
    unk_98 = getSlideOffsetY();
}

void LetterGiveMenu::stateClose() {
    unk_2340.hide(1);
    hideCursor();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, -16);
    setTransitionState(4);
    unk_98 = getSlideOffsetY();
}

void LetterGiveMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        clearFlags(2);
        clearFlags(1);
        setPhase(5);
    } else {
        applySlideOffset(6, 0, -16);
    }
    unk_98 = getSlideOffsetY();
}

void LetterGiveMenu::initLetterGive() {
    unk_94 = 0;
    InventoryItemGrid_Init(&unk_2d8, 2);
    unk_d38.init(2);
    InventoryBg_Init(&unk_d60, 6);
    unk_296 = 0x16;
    unk_2400.reset();
    unk_294 = 0;
    unk_298 = 0xb;
    unk_247c.init(3, 1, 0);
    unk_29e = 0;
}

void LetterGiveMenu::releaseResources() {
    cancelBgTask();
    InventoryBg_Exit(&unk_d60);
    InventoryItemGrid_Exit(&unk_2d8);
    PopupChoice_ForceClose(&unk_247c);
    unk_2884.freeTexts();
}

void LetterGiveMenu::preInputUpdate() {
    preStateUpdate();
    unk_2418.vfunc_0c();
}

void LetterGiveMenu::postInputUpdate() {
    postStateUpdate();
}

void LetterGiveMenu::preStateUpdate() {
    cancelBgTask();
    InventoryBg_PreUpdate(&unk_d60);
    InventoryItemGrid_PreUpdate(&unk_2d8);
    unk_d38.updateCursorLift();
    unk_2884.freeTexts();
}

void LetterGiveMenu::postStateUpdate() {
    PopupChoice_Update(&unk_247c);
    InventoryBg_Update(&unk_d60);
    if (unk_2340.updatePrompt()) {
        refreshNameLabel();
    }
}

void LetterGiveMenu::setupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void LetterGiveMenu::resetPanelUnk() {
    InventoryBg_Load(&unk_d60, 0);
}

void LetterGiveMenu::startPanels() {
    InventoryBg_LoadObjGraphics(&unk_d60);
    MenuButtons_LoadTextColors(&unk_2884);
}

void LetterGiveMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov108_022961d8_Both()) {
            s32 r = hitTestSlot(gTouchCurX, gTouchCurY + 0x10, 1);
            if (r != 0x16) {
                beginTouchSlot(r);
            } else {
                if (((MenuBottomButtonsBody *)&unk_2884)->isTouched(9)) {
                    startClose();
                }
            }
        }
    }
}

void LetterGiveMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (testFlags(4)) {
            setMainState(3);
            runMainState();
        } else {
            setMainState(0);
            unk_2340.setAutoCloseTimer(0x3c);
        }
    } else {
        if (testFlags(4) && unk_2340.isOpenOrOpening()) {
            if (unk_29e != 0) {
                unk_29e--;
            } else {
                openLetterChoice(unk_295, 1);
                setMainState(2);
            }
        } else {
            unk_2340.commitOpen();
        }
    }
}

void LetterGiveMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(5);
    }
}

void LetterGiveMenu::mainAct03() {
    if (unk_2340.isOpenOrOpening()) {
        if (unk_29e != 0) {
            unk_29e--;
        } else {
            openLetterChoice(unk_295, 1);
            setMainState(2);
        }
    }
}

void LetterGiveMenu::mainAct04() {
    setCarryPosFromTouch();
    clearDropHighlight();
    s32 r = hitTestSlot(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x16) {
        if (gTouchHeld == 0) {
            if (isSlotDisabled(r) != 0 || dropOnSlot(r) == 0) {
                flyLetterBack(unk_297, 4);
            } else {
                resumeInput();
            }
        } else {
            setDropHighlight(r);
        }
    } else {
        if (gTouchHeld == 0) {
            flyLetterBack(unk_297, 4);
        }
    }
}

void LetterGiveMenu::mainAct05() {
    if (((PopupChoiceMenuBody *)&unk_247c)->isOpen()) {
        if (checkSwitchToButtons(1)) {
            cancelChoice();
        } else if (Unk_ov108_022961d8_Both()) {
            s32 r = ((PopupChoiceMenuBody *)&unk_247c)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                PopupChoice_DecideRow(&unk_247c, r, 1);
                unk_29c = unk_247c.unk_2f9[r];
                setMainState(0x14);
            }
        }
    }
}

void LetterGiveMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        unk_2340.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys(), 0)) {
        updateNameLabel();
        moveCursorToTarget();
        unk_2340.hide(0);
    } else if (isSlotDisabled(unk_298) == 0 && (gPad[1] & 1) != 0) {
        if (isLetterSlot(unk_298)) {
            if (isSlotEmpty(unk_298) == 0) {
                openLetterChoice(unk_298, 0);
            }
        } else {
            pressCloseButton();
        }
    } else if ((gPad[1] & 2) != 0) {
        hideCursor();
        startClose();
        unk_2340.hide(0);
    } else {
        unk_2340.commitOpen();
    }
}

void LetterGiveMenu::mainAct07() {
    if (moveCursorByPad((void *)takeRepeatedKeys(), 1)) {
        updateNameLabel();
        moveCursorToTarget();
        unk_2340.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (isSlotEmpty(unk_298)) {
                beginPutBack(unk_298);
            } else {
                beginSwapAtSlot(unk_298);
            }
        } else if ((f & 2) != 0) {
            beginPutBack(unk_297);
        } else {
            setCarryPosFromCursor();
            unk_2340.commitOpen();
        }
    }
}

void LetterGiveMenu::mainAct08() {
    if (checkSwitchToTouch()) {
        cancelChoice();
    } else if (PopupChoice_MoveCursor(&unk_247c, takeRepeatedKeys(), &unk_29d, 0)) {
        moveCursorToPopupRow();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((MenuCursor *)&unk_2418)->setPosePress();
            setMainState(9);
        } else if ((f & 2) != 0) {
            cancelPopup();
        }
    }
}

void LetterGiveMenu::mainAct09() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        PopupChoice_DecideRow(&unk_247c, unk_29d, 1);
        unk_29c = unk_247c.unk_2f9[unk_29d];
        setMainState(0x14);
    }
}

void LetterGiveMenu::updateCursorMove() {
    if (((MenuCursorBase *)&unk_2418)->isMoving() == 0) {
        setMainState(unk_29b);
        if (unk_29b == 6) {
            showSlotFocus(unk_298);
        }
        runMainState();
    }
    setCarryPosFromCursor();
}

void LetterGiveMenu::mainAct0B() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        ((MenuBottomButtonsBody *)&unk_2884)->setSelected(9);
        setMainState(0x17);
    }
}

void LetterGiveMenu::mainAct0C() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        refreshCursor();
        setMainState(6);
    }
}

void LetterGiveMenu::mainAct0D() {
    if (((MenuCursorBase *)&unk_2418)->func_ov002_02202928()) {
        carryFromSlot(unk_298);
        setMainState(0xe);
    }
}

void LetterGiveMenu::mainAct0E() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        setMainState(unk_29b);
    }
    setCarryPosFromCursor();
}

void LetterGiveMenu::mainAct0F() {
    if (((MenuCursorBase *)&unk_2418)->func_ov002_02202928() == 0) {
        u32 a = unk_29a;
        if (unk_298 == a) {
            dropOnSlot(a);
            updateNameLabel();
            setMainState(6);
        } else {
            flyLetterBack(a, 4);
        }
    } else {
        setCarryPosFromCursor();
    }
}

void LetterGiveMenu::mainAct10() {
    if (((MenuCursorBase *)&unk_2418)->func_ov002_022028fc() == 0) {
        swapCarriedLetter(unk_29a);
        setFlags(0x40);
        setMainState(0x11);
        updateNameLabel();
    } else {
        setMainState(6);
    }
}

void LetterGiveMenu::mainAct11() {
    if (((HandCursor *)&unk_2418)->isAnimDone()) {
        setMainState(unk_29b);
    }
    if (((MenuCursorBase *)&unk_2418)->func_ov002_02202928()) {
        clearFlags(0x40);
        setCarryPosFromCursor();
    }
}

void LetterGiveMenu::mainAct12() {
    if (unk_2400.update()) {
        dropCarriedLetter(unk_297);
        resumeInput();
    } else {
        setCarryPosFromMover();
    }
}

void LetterGiveMenu::mainAct13() {
    if (((PopupChoiceMenuBody *)&unk_247c)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(8);
        } else {
            setMainState(5);
        }
    }
}

void LetterGiveMenu::mainAct14() {
    if (PopupChoice_TickDecideDelay(&unk_247c)) {
        PopupChoice_Close(&unk_247c, 0);
        unk_2340.hide(1);
        if (((HandCursor *)&unk_2418)->getAnim()) {
            showCursorAtSlot();
        }
        setMainState(0x15);
    }
}

void LetterGiveMenu::mainAct15() {
    if (((PopupChoiceMenuBody *)&unk_247c)->isClosed()) {
        onPopupChoice();
    }
}

void LetterGiveMenu::mainAct16() {
    if (unk_277c.update(0)) {
        setMainState(unk_29b);
        ((HandCursor *)&unk_2418)->enableObjWindow();
    }
}

void LetterGiveMenu::mainAct17() {
    if (((MenuBottomButtonsBody *)&unk_2884)->stepPress()) {
        if (((HandCursor *)&unk_2418)->getAnim()) {
            s32 r4 = ((MenuBottomButtonsBody *)&unk_2884)->getPressOffset();
            s32 r6 = ((MenuBottomButtonsBody *)&unk_2884)->getTargetX(-1);
            s32 r2 = ((MenuBottomButtonsBody *)&unk_2884)->getTargetY(-1);
            ((MenuCursorBase *)&unk_2418)->warpTo(r4 + r6, r4 + r2);
        }
    } else {
        MenuCtrl_SetResult(0);
        unk_8c = 3;
        setPhase(1);
        unk_2340.hide(1);
        hideCursor();
    }
}

void LetterGiveMenu::startTouchInput() {
    hideCursor();
    hideSlotFocus();
    setMainState(0);
}

void LetterGiveMenu::startButtonInput() {
    unk_296 = 0x16;
    showCursor();
    restartKeyRepeat();
    updateNameLabel();
    setMainState(6);
    showSlotFocus(unk_298);
}

void LetterGiveMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void LetterGiveMenu::beginTouchSlot(u32 b) {
    unk_295 = b;
    setMainState(1);
    u32 r6 = gTouchCurX;
    u32 r7 = gTouchCurY;
    unk_9c = getSlotX(unk_295) - r6;
    unk_a0 = getSlotY(unk_295) - r7;
    unk_296 = b;
    unk_2340.queueOpen();
    unk_2340.commitOpen();
    unk_29e = 2;
    if (isSlotDisabled(b)) {
        clearFlags(4);
    } else {
        setFlags(4);
    }
}

void LetterGiveMenu::carryFromSlot(u32 b) {
    unk_297 = b;
    unk_2340.hide(1);
    pickUpLetter(b);
    if (unk_294 == 1) {
        unk_29b = 7;
    }
    setCarryPosFromCursor();
}

void LetterGiveMenu::flyLetterBack(u32 a, u32 c) {
    unk_297 = a;
    unk_2400.setPos(unk_a4, unk_a8);
    s32 r7 = getSlotX(a);
    s32 r2 = getSlotY(a);
    unk_2400.startLinear(r7, r2, c);
    unk_2400.update();
    setCarryPosFromMover();
    setMainState(0x12);
}

void LetterGiveMenu::confirmGiveLetter() {
    MenuCtrl_SetIndex((u8)(unk_299 - 0xb));
    MenuCtrl_SetResult(1);
    unk_8c = 3;
    setPhase(1);
    unk_2340.hide(1);
    hideCursor();
}

void LetterGiveMenu::startClose() {
    ((MenuBottomButtonsBody *)&unk_2884)->setSelected(9);
    setMainState(0x17);
    Snd_PlaySe(0x28);
}

void LetterGiveMenu::cancelBgTask() {
    ((BgVramTask *)&unk_2a0)->cancel();
}

BOOL LetterGiveMenu::isLetterSlot(u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

u32 LetterGiveMenu::slotToLetterIndex(u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return (u8)(b - 0xb);
    }
    return 0;
}

u32 LetterGiveMenu::letterIndexToSlot(u32 b) {
    if (b <= 9) {
        return (u8)(b + 0xb);
    }
    return 0x16;
}

u32 LetterGiveMenu::hitTestSlot(u32 a, u32 b, u32 c) {
    u32 r6 = unk_d38.findPocketLetterAt(a, b);
    if (r6 != 0x37) {
        if (c != 0) {
            if (LetterGrid_IsSlotEmpty(&unk_d38, r6) != 0) {
                return 0x16;
            }
        }
        return letterIndexToSlot(r6);
    }
    return 0x16;
}

BOOL LetterGiveMenu::dropOnSlot(u32 b) {
    if (isSlotEmpty(b) == 0) {
        func_02065e70(&unk_1a0, getLetter(b));
        setLetter(unk_297, &unk_1a0);
    }
    dropCarriedLetter(b);
    return TRUE;
}

void LetterGiveMenu::setLetter(u32 b, void *c) {
    if (isLetterSlot(b)) {
        unk_d38.func_ov094_02294318(slotToLetterIndex(b), (s32)c);
    }
}

void *LetterGiveMenu::getLetter(u32 b) {
    if (isLetterSlot(b)) {
        return unk_d38.getLetter(slotToLetterIndex(b));
    }
    return 0;
}

s32 LetterGiveMenu::getSlotX(u32 b) {
    if (isLetterSlot(b)) {
        return LetterGrid_GetSlotX(&unk_d38, slotToLetterIndex(b));
    }
    if (b == 0x15) {
        return 0xbc;
    }
    return 0;
}

s32 LetterGiveMenu::getSlotY(u32 b) {
    if (isLetterSlot(b)) {
        return LetterGrid_GetSlotY(&unk_d38, slotToLetterIndex(b)) - 0x10;
    }
    if (b == 0x15) {
        return 0xb6;
    }
    return 0;
}

void LetterGiveMenu::setupLetterPanels() {
    InventoryItemGrid_DisableSlotRange(&unk_2d8, 0, 0xe);
    unk_d38.highlightLetterKinds(3);
}

s32 LetterGiveMenu::isSlotDisabled(u32 b) {
    if (isLetterSlot(b)) {
        return unk_d38.isHighlighted(slotToLetterIndex(b));
    }
    return 0;
}

s32 LetterGiveMenu::isSlotEmpty(u32 b) {
    if (isLetterSlot(b)) {
        return LetterGrid_IsSlotEmpty(&unk_d38, slotToLetterIndex(b));
    }
    return 1;
}

void LetterGiveMenu::hideSlotFocus() {
    InventoryItemGrid_ClearCursorSlot(&unk_2d8);
    unk_d38.clearCursorSlot();
}

void LetterGiveMenu::showSlotFocus(u32 b) {
    if (isLetterSlot(b)) {
        unk_d38.setCursorSlot(slotToLetterIndex(b));
        InventoryItemGrid_ClearCursorSlot(&unk_2d8);
    } else {
        hideSlotFocus();
    }
}

void LetterGiveMenu::clearDropHighlight() {
    InventoryItemGrid_ClearMarks(&unk_2d8);
    unk_d38.clearMarks();
}

void LetterGiveMenu::setDropHighlight(u32 b) {
    if (isLetterSlot(b)) {
        unk_d38.markSlot(slotToLetterIndex(b));
    }
}

void LetterGiveMenu::refreshNameLabel() {
    s32 a = getSlotX(unk_296) - 0x6d;
    s32 b = getSlotY(unk_296) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    ((LabelBalloon *)&unk_2340)->setPos(a, b);
    if (isLetterSlot(unk_296)) {
        s32 c = slotToLetterIndex(unk_296);
        unk_d38.showLetterName(&unk_2340, c);
    }
}

void LetterGiveMenu::updateNameLabel() {
    if (isLetterSlot(unk_298)) {
        if (isSlotEmpty(unk_298)) {
            unk_2340.cancelQueuedOpen();
        } else {
            unk_296 = unk_298;
            unk_2340.queueOpen();
        }
    } else {
        unk_2340.cancelQueuedOpen();
    }
}

void LetterGiveMenu::drawCarriedLetter() {
    if (!testFlags(0x40)) {
        if (unk_294 != 0) {
            if (unk_294 == 1) {
                unk_d38.drawHeldLetter(unk_a4, unk_a8, &unk_ac);
            }
        }
    }
}

void LetterGiveMenu::setCarryPosFromTouch() {
    unk_a4 = unk_9c + gTouchCurX;
    unk_a8 = unk_a0 + gTouchCurY;
}

void LetterGiveMenu::setCarryPosFromCursor() {
    unk_a4 = ((MenuCursorBase *)&unk_2418)->getFrameScreenX() - 2;
    unk_a8 = ((MenuCursorBase *)&unk_2418)->getFrameScreenY() - 4;
}

void LetterGiveMenu::setCarryPosFromMover() {
    unk_a4 = unk_2400.getX();
    unk_a8 = unk_2400.getY();
}

void LetterGiveMenu::pickUpLetter(u32 a) {
    if (isLetterSlot(a)) {
        s32 r4 = slotToLetterIndex(a);
        unk_294 = 1;
        func_02065e70(&unk_ac, unk_d38.getLetter(r4));
        unk_d38.clearLetter(r4);
    }
}

void LetterGiveMenu::dropCarriedLetter(u32 a) {
    if (unk_294 == 1) {
        setLetter(a, &unk_ac);
    }
    unk_294 = 0;
}

void LetterGiveMenu::swapCarriedLetter(u32 a) {
    if (unk_294 == 1) {
        func_02065e70(&unk_1a0, &unk_ac);
        pickUpLetter(a);
        setLetter(a, &unk_1a0);
    }
}

void LetterGiveMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_2418)->warpTo(a, b);
    if (unk_298 == 0x15) {
        ((MenuCursor *)&unk_2418)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_2418)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 LetterGiveMenu::getCursorTargetX() {
    s32 r = getSlotX(unk_298);
    if (testFlags(0x20)) {
        r += 0x100;
    } else if (testFlags(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 LetterGiveMenu::getCursorTargetY() { return getSlotY(unk_298); }

void LetterGiveMenu::hideCursor() {
    ((MenuCursor *)&unk_2418)->setAnimIfChanged(0);
    unk_2418.vfunc_0c();
}

void LetterGiveMenu::moveCursorToTarget() {
    if (unk_298 == 0x15) {
        ((MenuCursor *)&unk_2418)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_2418)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_2418)->moveToEase(a, b, 3, 1);
    unk_29b = unk_8d;
    setMainState(0xa);
}

void LetterGiveMenu::moveCursorToPopupRow() {
    s32 a = ((PopupChoiceMenuBody *)&unk_247c)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_247c)->getRowY(unk_29d);
    ((MenuCursorBase *)&unk_2418)->moveToLinear(a, b, 2);
    unk_29b = unk_8d;
    setMainState(0xa);
}

void LetterGiveMenu::cancelPopup() {
    unk_29c = 1;
    unk_29d = PopupChoice_DecideCancel(&unk_247c);
    s32 a = ((PopupChoiceMenuBody *)&unk_247c)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_247c)->getRowY(unk_29d);
    ((MenuCursorBase *)&unk_2418)->warpTo(a, b);
    ((HandCursor *)&unk_2418)->setAnimAtEnd(8);
    setMainState(0x14);
}

void LetterGiveMenu::cursorToPopupTop() {
    unk_29d = 0;
    s32 a = ((PopupChoiceMenuBody *)&unk_247c)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_247c)->getRowY(unk_29d);
    ((MenuCursorBase *)&unk_2418)->warpTo(a, b);
    ((MenuCursor *)&unk_2418)->setAnimIfChanged(7);
}

void LetterGiveMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_2418)->warpTo(a, b);
    ((MenuCursor *)&unk_2418)->setAnimIfChanged(1);
}

void LetterGiveMenu::refreshCursor() {
    ((MenuCursorBase *)&unk_2418)->setPoseIdle();
    unk_2418.vfunc_0c();
}

void LetterGiveMenu::pressCloseButton() {
    ((MenuCursor *)&unk_2418)->setPosePress();
    setMainState(0xb);
}

void LetterGiveMenu::beginPutBack(u32 v) {
    unk_2340.hide(1);
    unk_29a = v;
    ((MenuCursor *)&unk_2418)->setAnimIfChanged(5);
    setMainState(0xf);
}

void LetterGiveMenu::beginSwapAtSlot(u32 v) {
    unk_2340.hide(1);
    unk_29b = unk_8d;
    unk_29a = v;
    ((MenuCursor *)&unk_2418)->setAnimIfChanged(6);
    setMainState(0x10);
}

void LetterGiveMenu::onPopupChoice() {
    switch (unk_29c) {
    case 0:
        confirmGiveLetter();
        break;
    case 1:
    default:
        resumeInput();
        break;
    }
}

void LetterGiveMenu::openPopup(u32 x) {
    ((PopupChoiceMenuBody *)&unk_247c)->setRowsFromIds((PopupChoiceIdList *)unk_247c.unk_2f4, 0);
    s32 a = getSlotX(unk_299);
    s32 b = getSlotY(unk_299);
    if (x != 0) {
        unk_247c.placeAboveBalloon((LabelBalloon *)&unk_2340);
    } else {
        unk_247c.placeNearPoint(a, b);
    }
    PopupChoice_Open(&unk_247c, 0);
    setMainState(0x13);
}

void LetterGiveMenu::cancelChoice() {
    unk_29c = 1;
    showCursorAtSlot();
    PopupChoice_Close(&unk_247c, 0);
    setMainState(0x15);
}

void LetterGiveMenu::openLetterChoice(u32 idx, u32 x) {
    unk_299 = idx;
    ChoiceIdList_Clear(&unk_247c.unk_2f4, 1);
    getLetter(idx);
    ChoiceIdList_Add(&unk_247c.unk_2f4, 0xd, 0);
    ChoiceIdList_Add(&unk_247c.unk_2f4, 2, 1);
    hideCursor();
    if (x == 0) {
        unk_2340.hide(1);
    }
    openPopup(x);
}

void LetterGiveMenu::moveCursorInGrid(void *pad, u32 x) {
    s32 r4 = unk_298 - 0xb;
    s32 r6 = r4 >> 1;
    if (MenuKeys_HasLeft(pad)) {
        if ((r4 & 1) > 0) {
            unk_298 = unk_298 - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if ((r4 & 1) < 1) {
            unk_298 = unk_298 + 1;
        }
    }
    if (isLetterSlot(unk_298)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (r6 > 0) {
                    unk_298 = unk_298 - 2;
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (r6 < 4) {
                    unk_298 = unk_298 + 2;
                } else {
                    unk_298 = 0x15;
                }
            }
        }
    }
}

BOOL LetterGiveMenu::moveCursorByPad(void *pad, u32 x) {
    u8 old = unk_298;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (isLetterSlot(unk_298)) {
        moveCursorInGrid(pad, x);
    } else if (unk_298 == 0x15) {
        if (MenuKeys_HasUp(pad)) {
            unk_298 = 0x13;
        }
    }
    if (old != unk_298) {
        return TRUE;
    }
    return FALSE;
}

BOOL LetterGiveMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void LetterGiveMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

// ---------------------------------------------------------------------------------------------

void LetterGiveMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }

