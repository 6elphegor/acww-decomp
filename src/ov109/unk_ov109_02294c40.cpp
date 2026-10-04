// ov109: scene overlay (class SongPickMenu, vtable 0x02296698, 0x2802 bytes).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "ui/CursorMotion.h"

class SongPickMenu;
struct Unk_ov109_02295570;
typedef Unk_ov109_02295570 S;
struct PopupChoiceIdList;

extern "C" {
extern u8 gU8None;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(u32 x);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Snd_PlaySe(s32 v);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_SetResult(u32 v);
void MenuCtrl_SetIndex(u32 v);
BOOL SongSet_HasSong(s32 v);
void SongSet_AddSong(s32 v);

BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
void ChoiceIdList_Clear(void *p, u32 v);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);
u32 PopupChoice_DecideCancel(void *p);
BOOL PopupChoice_TickDecideDelay(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *q, s32 b);
void PopupChoice_Update(void *p);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void MenuButtons_LoadTextColors(void *p);

void InventoryItemGrid_DrawHeldItem(void *p, u32 a, u32 b);
void InventoryItemGrid_ShowSlotName(void *p, void *q, s32 r);
s32 InventoryItemGrid_SetCursorSlot(void *p, s32 v);
void InventoryItemGrid_ClearCursorSlot(void *p);
s32 InventoryItemGrid_GetSlotFlags(void *p, s32 v);
s32 InventoryItemGrid_GetSlotItem(void *p, s32 v);
BOOL InventoryItemGrid_IsSlotEmpty(void *p, u32 v);
BOOL InventoryItemGrid_IsSlotDisabled(void *p, u32 v);
void InventoryItemGrid_DisableSlot(void *p, u32 v);
s32 InventoryItemGrid_GetSlotY(void *p, u32 v);
s32 InventoryItemGrid_GetSlotX(void *p, u32 v);
void InventoryItemGrid_SetSlotItem(void *p, u32 a, u32 b, u32 c);
void InventoryItemGrid_RefreshSlot(void *p, u32 a);
u32 InventoryItemGrid_FindPocketSlotAt(void *p);
void Inventory_PlayTouchSe();
void InventoryItemGrid_LoadPockets(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void LetterGrid_LoadPocketLetters(void *p);
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
void InventoryBg_DrawSprite(void *p, s32 a);
}

// ---- out-of-overlay classes, named as in their symbols.txt ----

class LabelBalloon {
public:
    void setPos(s32 x, s32 y);
};

// Screen upload helper, 0x38 bytes
class BgVramTask {
public:
    void cancel();
    u32 unk_00[0x38 / 4];
};

class BgVramTaskPair : public BgVramTask {
public:
    BgVramTaskPair();
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 a);
    void disableObjWindow();
    void enableObjWindow();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void moveToLinear(s32 a, s32 b, s32 c);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
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


class TouchPromptBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();
    BOOL isOpenOrOpening();
    void setAutoCloseTimer(u8 v);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    BOOL hide(s32 a);
    BOOL updatePrompt();
    u32 unk_04[(0xc0 - 4) / 4];
};

class PopupChoiceMenuBody {
public:
    void setRowsFromIds(PopupChoiceIdList *p, s32 v);
    s32 getRowY(s32 i);
    s32 getRowX();
    s32 hitTestRowOrLast(s32 a, s32 b);
    BOOL isClosed();
    BOOL isOpen();
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    void placeAboveBalloon(LabelBalloon *p);
    void placeNearPoint(s32 a, s32 b);
    void init(s32 a, s32 b, const char *path);
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *p, s32 a, u32 b);
    u32 unk_00[0x108 / 4];
};

class MenuBottomButtonsBody {
public:
    BOOL stepPress();
    s32 getPressOffset();
    s32 getTargetX(s32 a);
    s32 getTargetY(s32 a);
    s32 isTouched(s32 a);
    void setSelected(u8 a);
    u32 unk_00[0x164 / 4];
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutSingle05(s32 a);
    void drawAt(s32 a);
    void freeTexts();
};

// ov094 list/cursor sub-objects
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
    void drawPocketLetters(s32 a, s32 b);
    void clearCursorSlot();
    u32 unk_00[0x28 / 4];
};

class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x15e0 / 4];
};

// ov092 singleton returned by ProcBase_GetParent
class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
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
    virtual BOOL vfunc_20(u32 status);
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
    s32 checkSwitchToButtons(s32 a);
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

typedef void (SongPickMenu::*Unk_ov109_02296698_Fn)();

// Vtable 0x02296698
class SongPickMenu : public MenuProc {
public:
    SongPickMenu()
        : bgTasks(), pocketGrid(), letterGrid(), inventoryBg(), nameBalloon(), flyMotion(), cursor(), popup(), errorMessage(), bottomButtons() {}

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
    void moveCursorInGrid(void *pad);
    void openItemChoice(u32 idx, u32 x);
    void setPopupChoices();
    void closeWithoutResult();
    void startClose();
    void closeWithSlot();
    void cancelChoice();
    void openPopup(u32 x);
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
    void drawCarriedItem();
    void updateNameLabel();
    void refreshNameLabel();
    void showSlotFocus(u32 idx);
    void hideSlotFocus();
    s32 func_ov109_0229550c(u32 idx);
    s32 getSlotItem(u32 idx);

    void startPanels();
    void resetPanelUnk();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initSongPick();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void runMainState();

    // state function table targets
    void mainAct0F();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
    void mainAct0A();
    void mainAct09();
    void updateCursorMove();
    void mainAct07();
    void mainAct06();
    void updateButtons();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void updateTouch();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ BgVramTaskPair bgTasks[1];
    /* 0x00cc */ InventoryItemGrid pocketGrid;
    /* 0x0b2c */ LetterGrid letterGrid;
    /* 0x0b54 */ InventoryBg inventoryBg;
    /* 0x2134 */ TouchPromptBalloon nameBalloon;
    /* 0x21f4 */ CursorMotion flyMotion;
    /* 0x220c */ MenuCursorBuf0 cursor;
    /* 0x2270 */ PopupChoiceMenu popup;
    /* 0x2570 */ MenuErrorMessage errorMessage;
    /* 0x2678 */ MenuBottomButtons bottomButtons;
    /* 0x27dc */ u32 stateFlags;
    /* 0x27e0 */ s32 slideY;
    /* 0x27e4 */ s32 dragOffsetX;
    /* 0x27e8 */ s32 dragOffsetY;
    /* 0x27ec */ u32 handX;
    /* 0x27f0 */ u32 handY;
    /* 0x27f4 */ u8 unk_27f4[3];
    /* 0x27f7 */ u8 handKind;
    /* 0x27f8 */ u8 touchedSlot;
    /* 0x27f9 */ u8 balloonSlot;
    /* 0x27fa */ u8 unk_27fa;
    /* 0x27fb */ u8 cursorSlot;
    /* 0x27fc */ u8 selectedSlot;
    /* 0x27fd */ u8 unk_27fd;
    /* 0x27fe */ u8 returnState;
    /* 0x27ff */ u8 popupChoice;
    /* 0x2800 */ u8 popupRow;
    /* 0x2801 */ u8 touchHoldDelay;
    /* 0x2802 */ u8 unk_2802[2];
};

// free functions taking the scene object as first argument (their symbols are plain C names)
extern "C" {
void SongPickMenu_CancelBgTask(S *s);
void SongPickMenu_ShowError(S *s, u32 a);
void SongPickMenu_DisableNonSongs(S *s);
void SongPickMenu_ResumeInput(S *s);
void SongPickMenu_StartButtonInput(S *s);
void SongPickMenu_StartTouchInput(S *s);
void SongPickMenu_BeginTouchSlot(S *s, u32 a);
BOOL SongPickMenu_IsPocketSlot(S *s, u32 a);
u32 SongPickMenu_SlotToPocket(S *s, u32 a);
u32 SongPickMenu_PocketToSlot(S *s, u32 a);
BOOL SongPickMenu_IsSlotEmpty(S *s, u32 a);
BOOL SongPickMenu_IsSlotDisabled(S *s, u32 a);
s32 SongPickMenu_GetSlotY(S *s, u32 a);
s32 SongPickMenu_GetSlotX(S *s, u32 a);
void SongPickMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c);
u32 SongPickMenu_HitTestSlot(S *s, u32 a, u32 b, s32 c);
SongPickMenu *SongPickMenu_Create();
}

struct Unk_ov109_SceneEntry {
    SongPickMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov109_SceneEntry sSongPickMenuProfile = {SongPickMenu_Create, 0x9c, 0xa0};

// Layout of the scene object as seen by the out-of-class functions
struct Unk_ov109_02295570 {
    u8 pad_000[0x94];
    u8 bgTasks[0x38];
    u8 pocketGrid[0x2134 - 0xcc];
    u8 nameBalloon[0x220c - 0x2134];
    u8 cursor[0x2270 - 0x220c];
    u8 popup[0x2569 - 0x2270];
    u8 popupValues[0x2570 - 0x2569];
    u8 errorMessage[0x2678 - 0x2570];
    u8 bottomButtons[0x27e4 - 0x2678];
    s32 dragOffsetX;
    s32 dragOffsetY;
    u8 pad_27ec[0x27f8 - 0x27ec];
    u8 touchedSlot;
    u8 balloonSlot;
    u8 pad_27fa;
    u8 cursorSlot;
    u8 pad_27fc[2];
    u8 returnState;
    u8 popupChoice;
    u8 popupRow;
    u8 touchHoldDelay;
};

#define M(s) ((SongPickMenu *)(s))
#define C220(x) ((MenuCursor *)&(x))

// ---------------------------------------------------------------------------------------------
// out-of-class functions (plain C symbols)

static inline BOOL Unk_ov109_022955d0_Rng(volatile u16 *p, BOOL z) {
    BOOL r = z;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}

static inline BOOL Unk_ov109_02295c70_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" SongPickMenu *SongPickMenu_Create() { return new SongPickMenu(); }

BOOL SongPickMenu::vfunc_00() {
    initSongPick();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL SongPickMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL SongPickMenu::onDraw() {
    PopupChoice_Draw(&popup);
    if (!testFlags(1)) {
        return TRUE;
    }
    nameBalloon.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    drawCarriedItem();
    if (testFlags(2)) {
        bottomButtons.drawAt(slideY);
        s32 t = slideY - 0x10;
        InventoryItemGrid_DrawPockets(&pocketGrid, 0, t);
        letterGrid.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&inventoryBg, t);
    }
    return TRUE;
}

BOOL SongPickMenu::execTransition() {
    static Unk_ov109_02296698_Fn tbl[5] = {
        &SongPickMenu::stateLoad,
        &SongPickMenu::stateOpen,
        &SongPickMenu::stateOpening,
        &SongPickMenu::stateClose,
        &SongPickMenu::stateClosing
    };
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void SongPickMenu::runMainState() {
    static Unk_ov109_02296698_Fn tbl[16] = {
        &SongPickMenu::updateTouch,
        &SongPickMenu::mainAct01,
        &SongPickMenu::mainAct02,
        &SongPickMenu::mainAct03,
        &SongPickMenu::mainAct04,
        &SongPickMenu::updateButtons,
        &SongPickMenu::mainAct06,
        &SongPickMenu::mainAct07,
        &SongPickMenu::updateCursorMove,
        &SongPickMenu::mainAct09,
        &SongPickMenu::mainAct0A,
        &SongPickMenu::mainAct0B,
        &SongPickMenu::mainAct0C,
        &SongPickMenu::mainAct0D,
        &SongPickMenu::mainAct0E,
        &SongPickMenu::mainAct0F
    };
    (this->*tbl[mainState])();
}

BOOL SongPickMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        u32 t = mainState;
        if (t != 0 && t != 1 && t != 5) {
        } else {
            startClose();
            closeWithoutResult();
            setFlags(0x40);
        }
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL SongPickMenu::execPhase3() { return TRUE; }

BOOL SongPickMenu::execPhase4() { return TRUE; }

BOOL SongPickMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void SongPickMenu::stateLoad() {
    setupBgLayers();
    resetPanelUnk();
    setTransitionState(1);
}

void SongPickMenu::stateOpen() {
    startPanels();
    bottomButtons.setLayoutSingle05(0x65);
    InventoryItemGrid_LoadPockets(&pocketGrid);
    SongPickMenu_DisableNonSongs((S *)this);
    LetterGrid_LoadPocketLetters(&letterGrid);
    letterGrid.highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -0x10);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    slideY = getSlideOffsetY();
}

void SongPickMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        SongPickMenu_ResumeInput((S *)this);
    }
    applySlideOffset(6, 0, -0x10);
    slideY = getSlideOffsetY();
}

void SongPickMenu::stateClose() {
    nameBalloon.hide(1);
    hideCursor();
    void *h = ProcBase_GetParent(this);
    if (testFlags(0x40)) {
        ((MenuLauncher *)h)->setNextRequest(0x44, 1);
    } else {
        ((MenuLauncher *)h)->setNextRequest(0x40, 1);
    }
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, -0x10);
    setTransitionState(4);
    slideY = getSlideOffsetY();
}

void SongPickMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
        clearFlags(1);
        clearFlags(2);
    } else {
        applySlideOffset(6, 0, -0x10);
    }
    slideY = getSlideOffsetY();
}

void SongPickMenu::initSongPick() {
    stateFlags = 0;
    InventoryItemGrid_Init(&pocketGrid, 2);
    letterGrid.init(2);
    InventoryBg_Init(&inventoryBg, 6);
    balloonSlot = 0x10;
    flyMotion.reset();
    u32 z = 0;
    handKind = z;
    cursorSlot = z;
    popup.init(3, 1, (const char *)z);
    touchHoldDelay = 0;
}

void SongPickMenu::releaseResources() {
    SongPickMenu_CancelBgTask((S *)this);
    InventoryBg_Exit(&inventoryBg);
    InventoryItemGrid_Exit(&pocketGrid);
    PopupChoice_ForceClose(&popup);
    bottomButtons.freeTexts();
}

void SongPickMenu::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

// ---------------------------------------------------------------------------------------------

void SongPickMenu::postInputUpdate() { postStateUpdate(); }

void SongPickMenu::preStateUpdate() {
    SongPickMenu_CancelBgTask((S *)this);
    InventoryBg_PreUpdate(&inventoryBg);
    InventoryItemGrid_PreUpdate(&pocketGrid);
    letterGrid.updateCursorLift();
    bottomButtons.freeTexts();
}

void SongPickMenu::postStateUpdate() {
    PopupChoice_Update(&popup);
    InventoryBg_Update(&inventoryBg);
    if (nameBalloon.updatePrompt()) {
        refreshNameLabel();
    }
}

void SongPickMenu::setupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void SongPickMenu::resetPanelUnk() { InventoryBg_Load(&inventoryBg, 0); }

void SongPickMenu::startPanels() {
    InventoryBg_LoadObjGraphics(&inventoryBg);
    MenuButtons_LoadTextColors(&bottomButtons);
}

void SongPickMenu::updateTouch() {
    S *s = (S *)this;
    if (M(s)->checkSwitchToButtons(1)) {
        SongPickMenu_StartButtonInput(s);
    } else if (Unk_ov109_02295c70_Both()) {
        u32 r = SongPickMenu_HitTestSlot(s, gTouchCurX, gTouchCurY + 0x10, 1);
        if (r != 0x10) {
            SongPickMenu_BeginTouchSlot(s, r);
        } else if (((MenuBottomButtons *)s->bottomButtons)->isTouched(9)) {
            M(s)->startClose();
        }
    }
}

void SongPickMenu::mainAct01() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        if (SongPickMenu_IsSlotDisabled(s, s->touchedSlot)) {
            M(s)->setMainState(0);
            ((TouchPromptBalloon *)s->nameBalloon)->setAutoCloseTimer(0x3c);
        } else {
            M(s)->setMainState(3);
            M(s)->runMainState();
        }
    } else if (!SongPickMenu_IsSlotDisabled(s, s->touchedSlot) && ((TouchPromptBalloon *)s->nameBalloon)->isOpenOrOpening()) {
        u8 v = s->touchHoldDelay;
        if (v != 0) {
            s->touchHoldDelay = v - 1;
        } else {
            M(s)->openItemChoice(s->touchedSlot, 1);
            M(s)->setMainState(2);
        }
    } else {
        ((TouchPromptBalloon *)s->nameBalloon)->commitOpen();
    }
}

void SongPickMenu::mainAct02() {
    S *s = (S *)this;
    if (MenuCtrl_IsForceCloseDue()) {
        M(s)->setMainState(4);
    } else if (gTouchHeld == 0) {
        M(s)->setMainState(4);
    }
}

void SongPickMenu::mainAct03() {
    S *s = (S *)this;
    if (((TouchPromptBalloon *)s->nameBalloon)->isOpenOrOpening()) {
        u8 v = s->touchHoldDelay;
        if (v != 0) {
            s->touchHoldDelay = v - 1;
        } else {
            M(s)->openItemChoice(s->touchedSlot, 1);
            M(s)->setMainState(2);
        }
    }
}

void SongPickMenu::mainAct04() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->popup)->isOpen()) {
        if (MenuCtrl_IsForceCloseDue()) {
            M(s)->cancelChoice();
        } else if (M(s)->checkSwitchToButtons(1)) {
            M(s)->cancelChoice();
        } else if (Unk_ov109_02295c70_Both()) {
            s32 r = ((PopupChoiceMenu *)s->popup)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                PopupChoice_DecideRow(s->popup, r, 1);
                s->popupChoice = s->popupValues[r];
                M(s)->setMainState(0xc);
            }
        }
    }
}

void SongPickMenu::updateButtons() {
    S *s = (S *)this;
    if (M(s)->checkSwitchToTouch()) {
        SongPickMenu_StartTouchInput(s);
        ((TouchPromptBalloon *)s->nameBalloon)->hide(1);
    } else if (M(s)->moveCursorByPad((void *)M(s)->takeRepeatedKeys())) {
        M(s)->updateNameLabel();
        M(s)->moveCursorToTarget();
        ((TouchPromptBalloon *)s->nameBalloon)->hide(0);
    } else if (!SongPickMenu_IsSlotDisabled(s, s->cursorSlot) && (gPad[1] & 1) != 0) {
        if (SongPickMenu_IsPocketSlot(s, s->cursorSlot)) {
            if (!SongPickMenu_IsSlotEmpty(s, s->cursorSlot)) {
                M(s)->openItemChoice(s->cursorSlot, 0);
            }
        } else if (s->cursorSlot == 0xf) {
            M(s)->pressCloseButton();
        }
    } else if ((gPad[1] & 2) != 0) {
        M(s)->hideCursor();
        M(s)->startClose();
        ((TouchPromptBalloon *)s->nameBalloon)->hide(0);
    } else {
        ((TouchPromptBalloon *)s->nameBalloon)->commitOpen();
    }
}

void SongPickMenu::mainAct06() {
    S *s = (S *)this;
    if (MenuCtrl_IsForceCloseDue()) {
        M(s)->cancelChoice();
    } else if (M(s)->checkSwitchToTouch()) {
        M(s)->cancelChoice();
    } else if (PopupChoice_MoveCursor(s->popup, M(s)->takeRepeatedKeys(), &s->popupRow, 0)) {
        M(s)->moveCursorToPopupRow();
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ((MenuCursor *)s->cursor)->setPosePress();
            M(s)->setMainState(7);
        } else if ((k & 2) != 0) {
            M(s)->cancelPopup();
        }
    }
}

void SongPickMenu::mainAct07() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->cursor)->isAnimDone()) {
        PopupChoice_DecideRow(s->popup, s->popupRow, 1);
        s->popupChoice = s->popupValues[s->popupRow];
        M(s)->setMainState(0xc);
    }
}

void SongPickMenu::updateCursorMove() {
    S *s = (S *)this;
    if (!((MenuCursorBuf0 *)s->cursor)->isMoving()) {
        M(s)->setMainState(s->returnState);
        if (s->returnState == 5) {
            M(s)->showSlotFocus(s->cursorSlot);
        }
        M(s)->runMainState();
    }
}

void SongPickMenu::mainAct09() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->cursor)->isAnimDone()) {
        ((MenuBottomButtons *)s->bottomButtons)->setSelected(9);
        M(s)->setMainState(0xf);
        Snd_PlaySe(0x28);
    }
}

void SongPickMenu::mainAct0A() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->cursor)->isAnimDone()) {
        M(s)->refreshCursor();
        M(s)->setMainState(5);
    }
}

void SongPickMenu::mainAct0B() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->popup)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            M(s)->cursorToPopupTop();
            M(s)->setMainState(6);
        } else {
            M(s)->setMainState(4);
        }
    }
}

void SongPickMenu::mainAct0C() {
    S *s = (S *)this;
    if (PopupChoice_TickDecideDelay(s->popup)) {
        PopupChoice_Close(s->popup, 0);
        ((TouchPromptBalloon *)s->nameBalloon)->hide(1);
        if (((MenuCursorBuf0 *)s->cursor)->getAnim()) {
            M(s)->showCursorAtSlot();
        }
        M(s)->setMainState(0xd);
    }
}

void SongPickMenu::mainAct0D() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->popup)->isClosed()) {
        M(s)->onPopupChoice();
    }
}

void SongPickMenu::mainAct0E() {
    S *s = (S *)this;
    if (((MenuErrorMessage *)s->errorMessage)->update(1)) {
        SongPickMenu_ResumeInput(s);
        ((MenuCursorBuf0 *)s->cursor)->enableObjWindow();
    }
}

void SongPickMenu::mainAct0F() {
    S *s = (S *)this;
    if (((MenuBottomButtons *)s->bottomButtons)->stepPress()) {
        if (((MenuCursorBuf0 *)s->cursor)->getAnim()) {
            s32 t = ((MenuBottomButtons *)s->bottomButtons)->getPressOffset();
            s32 u = ((MenuBottomButtons *)s->bottomButtons)->getTargetX(-1);
            s32 w = ((MenuBottomButtons *)s->bottomButtons)->getTargetY(-1);
            ((MenuCursorBuf0 *)s->cursor)->warpTo(t + u, t + w);
        }
    } else {
        M(s)->closeWithoutResult();
    }
}

void SongPickMenu_StartTouchInput(S *s) {
    M(s)->hideCursor();
    M(s)->hideSlotFocus();
    M(s)->setMainState(0);
}

void SongPickMenu_StartButtonInput(S *s) {
    s->balloonSlot = 0x10;
    M(s)->showCursor();
    M(s)->restartKeyRepeat();
    M(s)->updateNameLabel();
    M(s)->setMainState(5);
    M(s)->showSlotFocus(s->cursorSlot);
}

void SongPickMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch()) {
        SongPickMenu_StartTouchInput(s);
    } else {
        SongPickMenu_StartButtonInput(s);
    }
}

void SongPickMenu_BeginTouchSlot(S *s, u32 a) {
    u32 x, y;
    s->touchedSlot = a;
    M(s)->setMainState(1);
    x = gTouchCurX;
    y = gTouchCurY;
    s->dragOffsetX = SongPickMenu_GetSlotX(s, s->touchedSlot) - x;
    s->dragOffsetY = SongPickMenu_GetSlotY(s, s->touchedSlot) - y;
    s->balloonSlot = a;
    ((TouchPromptBalloon *)s->nameBalloon)->queueOpen();
    ((TouchPromptBalloon *)s->nameBalloon)->commitOpen();
    s->touchHoldDelay = 2;
    if (!SongPickMenu_IsSlotDisabled(s, a)) Inventory_PlayTouchSe();
}

void SongPickMenu_ShowError(S *s, u32 a) {
    volatile u8 b = gU8None;
    b = a;
    ((MenuErrorMessage *)s->errorMessage)->open((u8 *)&b, 1, 0);
    M(s)->setMainState(0xe);
    ((MenuCursorBuf0 *)s->cursor)->disableObjWindow();
}

void SongPickMenu_CancelBgTask(S *s) {
    M(s)->bgTasks[0].cancel();
}

BOOL SongPickMenu_IsPocketSlot(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

u32 SongPickMenu_SlotToPocket(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) return (u8)a;
    return 0;
}

u32 SongPickMenu_PocketToSlot(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 SongPickMenu_HitTestSlot(S *s, u32 a, u32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(s->pocketGrid);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(s->pocketGrid, t)) return 0x10;
        }
        return SongPickMenu_PocketToSlot(s, t);
    }
    return 0x10;
}

void SongPickMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        u32 t = SongPickMenu_SlotToPocket(s, a);
        InventoryItemGrid_SetSlotItem(s->pocketGrid, t, b, c);
        InventoryItemGrid_RefreshSlot(s->pocketGrid, t);
    }
}

s32 SongPickMenu_GetSlotX(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_GetSlotX(s->pocketGrid, SongPickMenu_SlotToPocket(s, a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 SongPickMenu_GetSlotY(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_GetSlotY(s->pocketGrid, SongPickMenu_SlotToPocket(s, a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

void SongPickMenu_DisableNonSongs(S *s) {
    volatile u16 v = 0xfff1;
    u8 i;
    BOOL z = FALSE;
    for (i = 0; i <= 0xe; i++) {
        BOOL r = FALSE;
        if (!SongPickMenu_IsSlotEmpty(s, i)) {
            if (M(s)->func_ov109_0229550c(i)) {
                r = TRUE;
            } else {
                v = M(s)->getSlotItem(i);
                if (!Unk_ov109_022955d0_Rng(&v, z)) r = TRUE;
            }
        }
        if (r) {
            InventoryItemGrid_DisableSlot(s->pocketGrid, SongPickMenu_SlotToPocket(s, i));
        }
    }
}

BOOL SongPickMenu_IsSlotDisabled(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(s->pocketGrid, SongPickMenu_SlotToPocket(s, a));
    }
    return FALSE;
}

BOOL SongPickMenu_IsSlotEmpty(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(s->pocketGrid, SongPickMenu_SlotToPocket(s, a));
    }
    return TRUE;
}

s32 SongPickMenu::getSlotItem(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        return InventoryItemGrid_GetSlotItem(&pocketGrid, r);
    }
    return 0xfff1;
}

s32 SongPickMenu::func_ov109_0229550c(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        return InventoryItemGrid_GetSlotFlags(&pocketGrid, r);
    }
    return 0xf1;
}

void SongPickMenu::hideSlotFocus() {
    InventoryItemGrid_ClearCursorSlot(&pocketGrid);
    letterGrid.clearCursorSlot();
}

void SongPickMenu::showSlotFocus(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        InventoryItemGrid_SetCursorSlot(&pocketGrid, r);
        letterGrid.clearCursorSlot();
    } else {
        hideSlotFocus();
    }
}

void SongPickMenu::refreshNameLabel() {
    s32 x = SongPickMenu_GetSlotX((S *)this, balloonSlot) - 0x6d;
    s32 y = SongPickMenu_GetSlotY((S *)this, balloonSlot) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&nameBalloon)->setPos(x, y);
    if (SongPickMenu_IsPocketSlot((S *)this, balloonSlot)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, balloonSlot);
        InventoryItemGrid_ShowSlotName(&pocketGrid, &nameBalloon, r);
    }
}

void SongPickMenu::updateNameLabel() {
    if (SongPickMenu_IsPocketSlot((S *)this, cursorSlot)) {
        if (SongPickMenu_IsSlotEmpty((S *)this, cursorSlot)) {
            nameBalloon.cancelQueuedOpen();
        } else {
            balloonSlot = cursorSlot;
            nameBalloon.queueOpen();
        }
    } else {
        nameBalloon.cancelQueuedOpen();
    }
}

void SongPickMenu::drawCarriedItem() {
    if (!testFlags(0x20)) {
        if (handKind != 0) {
            if (handKind == 1) {
                InventoryItemGrid_DrawHeldItem(&pocketGrid, handX, handY);
            }
        }
    }
}

void SongPickMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    if (cursorSlot == 0xf) {
        C220(cursor)->setAnimIfChanged(7);
    } else {
        C220(cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 SongPickMenu::getCursorTargetX() {
    s32 r = SongPickMenu_GetSlotX((S *)this, cursorSlot);
    if (testFlags(0x10)) {
        r += 0x100;
    } else if (testFlags(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 SongPickMenu::getCursorTargetY() { return SongPickMenu_GetSlotY((S *)this, cursorSlot); }

void SongPickMenu::hideCursor() {
    C220(cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void SongPickMenu::moveCursorToTarget() {
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
        setMainState(8);
    }
}

void SongPickMenu::moveCursorToPopupRow() {
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    cursor.moveToLinear(a, b, 2);
    returnState = mainState;
    setMainState(8);
}

void SongPickMenu::cancelPopup() {
    popupChoice = 1;
    popupRow = PopupChoice_DecideCancel(&popup);
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    cursor.warpTo(a, b);
    cursor.setAnimAtEnd(8);
    setMainState(0xc);
}

void SongPickMenu::cursorToPopupTop() {
    popupRow = 0;
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    cursor.warpTo(a, b);
    C220(cursor)->setAnimIfChanged(7);
}

void SongPickMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    C220(cursor)->setAnimIfChanged(1);
}

void SongPickMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

void SongPickMenu::pressCloseButton() {
    C220(cursor)->setPosePress();
    setMainState(9);
}

void SongPickMenu::onPopupChoice() {
    switch (popupChoice) {
    case 0: {
        s32 r5 = getSlotItem(selectedSlot);
        if (SongSet_HasSong(r5)) {
            SongPickMenu_ShowError((S *)this, 0x11);
        } else {
            SongSet_AddSong(r5);
            SongPickMenu_SetSlotItem((S *)this, selectedSlot, 0xfff1, 0);
            closeWithSlot();
        }
        break;
    }
    case 1:
    default:
        SongPickMenu_ResumeInput((S *)this);
        break;
    }
}

void SongPickMenu::openPopup(u32 x) {
    popup.setRowsFromIds((PopupChoiceIdList *)&popup.unk_2f4, 0);
    s32 a = SongPickMenu_GetSlotX((S *)this, selectedSlot);
    s32 b = SongPickMenu_GetSlotY((S *)this, selectedSlot);
    if (x != 0) {
        popup.placeAboveBalloon((LabelBalloon *)&nameBalloon);
    } else {
        popup.placeNearPoint(a, b);
    }
    PopupChoice_Open(&popup, 0);
    setMainState(0xb);
}

void SongPickMenu::cancelChoice() {
    popupChoice = 1;
    showCursorAtSlot();
    PopupChoice_Close(&popup, 0);
    setMainState(0xd);
}

void SongPickMenu::closeWithSlot() {
    MenuCtrl_SetIndex(selectedSlot);
    MenuCtrl_SetResult(1);
    transitionState = 3;
    setPhase(1);
    nameBalloon.hide(1);
    hideCursor();
}

void SongPickMenu::startClose() {
    bottomButtons.setSelected(9);
    setMainState(0xf);
    Snd_PlaySe(0x28);
}

void SongPickMenu::closeWithoutResult() {
    MenuCtrl_SetResult(0);
    transitionState = 3;
    setPhase(1);
    nameBalloon.hide(1);
    hideCursor();
}

void SongPickMenu::setPopupChoices() {
    ChoiceIdList_Add(&popup.unk_2f4, 0x73, 0);
    ChoiceIdList_Add(&popup.unk_2f4, 2, 1);
}

void SongPickMenu::openItemChoice(u32 idx, u32 x) {
    selectedSlot = idx;
    ChoiceIdList_Clear(&popup.unk_2f4, 1);
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        setPopupChoices();
        hideCursor();
        if (x == 0) {
            nameBalloon.hide(1);
        }
        openPopup(x);
    }
}

void SongPickMenu::moveCursorInGrid(void *pad) {
    s32 r4 = cursorSlot;
    s32 r6 = 0;
    for (; r4 >= 5; r4 -= 5, r6++) {
    }
    if (MenuKeys_HasLeft(pad)) {
        if (MenuKeys_HasUp(pad) && r6 != 0) {
        } else if (r4 == 0) {
            cursorSlot = cursorSlot + 4;
            setFlags(8);
        } else {
            cursorSlot = cursorSlot - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r4 == 4) {
                cursorSlot = cursorSlot - 4;
                setFlags(0x10);
            } else {
                cursorSlot = cursorSlot + 1;
            }
        }
    }
    if (!testFlags(0x18)) {
        if (MenuKeys_HasUp(pad)) {
            if (r6 > 0) {
                cursorSlot = cursorSlot - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (r6 < 2) {
                cursorSlot = cursorSlot + 5;
            } else {
                cursorSlot = 0xf;
                C220(cursor)->switchToAnim07();
            }
        }
    }
}

BOOL SongPickMenu::moveCursorByPad(void *pad) {
    u8 old = cursorSlot;
    clearFlags(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (SongPickMenu_IsPocketSlot((S *)this, cursorSlot)) {
        moveCursorInGrid(pad);
    } else if (cursorSlot == 0xf) {
        if (MenuKeys_HasUp(pad)) {
            cursorSlot = 0xe;
            C220(cursor)->switchToAnim01();
        }
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

BOOL SongPickMenu::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void SongPickMenu::setFlags(u32 mask) { stateFlags = stateFlags | mask; }

// ---------------------------------------------------------------------------------------------

void SongPickMenu::clearFlags(u32 mask) { stateFlags = stateFlags & ~mask; }

