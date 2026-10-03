// ov109: scene overlay (class SongPickMenu, vtable 0x02296698, 0x2802 bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

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

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();
    void reset();
    u32 unk_00[0x18 / 4];
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
    s32 checkSwitchToButtons(s32 a);
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

typedef void (SongPickMenu::*Unk_ov109_02296698_Fn)();

// Vtable 0x02296698
class SongPickMenu : public MenuProc {
public:
    SongPickMenu()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678() {}

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
    /* 0x0094 */ BgVramTaskPair unk_94[1];
    /* 0x00cc */ InventoryItemGrid unk_cc;
    /* 0x0b2c */ LetterGrid unk_b2c;
    /* 0x0b54 */ InventoryBg unk_b54;
    /* 0x2134 */ TouchPromptBalloon unk_2134;
    /* 0x21f4 */ CursorMotion unk_21f4;
    /* 0x220c */ MenuCursorBuf0 unk_220c;
    /* 0x2270 */ PopupChoiceMenu unk_2270;
    /* 0x2570 */ MenuErrorMessage unk_2570;
    /* 0x2678 */ MenuBottomButtons unk_2678;
    /* 0x27dc */ u32 unk_27dc;
    /* 0x27e0 */ s32 unk_27e0;
    /* 0x27e4 */ s32 unk_27e4;
    /* 0x27e8 */ s32 unk_27e8;
    /* 0x27ec */ u32 unk_27ec;
    /* 0x27f0 */ u32 unk_27f0;
    /* 0x27f4 */ u8 unk_27f4[3];
    /* 0x27f7 */ u8 unk_27f7;
    /* 0x27f8 */ u8 unk_27f8;
    /* 0x27f9 */ u8 unk_27f9;
    /* 0x27fa */ u8 unk_27fa;
    /* 0x27fb */ u8 unk_27fb;
    /* 0x27fc */ u8 unk_27fc;
    /* 0x27fd */ u8 unk_27fd;
    /* 0x27fe */ u8 unk_27fe;
    /* 0x27ff */ u8 unk_27ff;
    /* 0x2800 */ u8 unk_2800;
    /* 0x2801 */ u8 unk_2801;
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
    u8 unk_094[0x38];
    u8 unk_0cc[0x2134 - 0xcc];
    u8 unk_2134[0x220c - 0x2134];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2569 - 0x2270];
    u8 unk_2569[0x2570 - 0x2569];
    u8 unk_2570[0x2678 - 0x2570];
    u8 unk_2678[0x27e4 - 0x2678];
    s32 unk_27e4;
    s32 unk_27e8;
    u8 pad_27ec[0x27f8 - 0x27ec];
    u8 unk_27f8;
    u8 unk_27f9;
    u8 pad_27fa;
    u8 unk_27fb;
    u8 pad_27fc[2];
    u8 unk_27fe;
    u8 unk_27ff;
    u8 unk_2800;
    u8 unk_2801;
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
    PopupChoice_Draw(&unk_2270);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.drawWrapped();
    }
    drawCarriedItem();
    if (testFlags(2)) {
        unk_2678.drawAt(unk_27e0);
        s32 t = unk_27e0 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_cc, 0, t);
        unk_b2c.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&unk_b54, t);
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
    (this->*tbl[unk_8c])();
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
    (this->*tbl[unk_8d])();
}

BOOL SongPickMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        u32 t = unk_8d;
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
    unk_2678.setLayoutSingle05(0x65);
    InventoryItemGrid_LoadPockets(&unk_cc);
    SongPickMenu_DisableNonSongs((S *)this);
    LetterGrid_LoadPocketLetters(&unk_b2c);
    unk_b2c.highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, -0x10);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_27e0 = getSlideOffsetY();
}

void SongPickMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        SongPickMenu_ResumeInput((S *)this);
    }
    applySlideOffset(6, 0, -0x10);
    unk_27e0 = getSlideOffsetY();
}

void SongPickMenu::stateClose() {
    unk_2134.hide(1);
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
    unk_27e0 = getSlideOffsetY();
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
    unk_27e0 = getSlideOffsetY();
}

void SongPickMenu::initSongPick() {
    unk_27dc = 0;
    InventoryItemGrid_Init(&unk_cc, 2);
    unk_b2c.init(2);
    InventoryBg_Init(&unk_b54, 6);
    unk_27f9 = 0x10;
    unk_21f4.reset();
    u32 z = 0;
    unk_27f7 = z;
    unk_27fb = z;
    unk_2270.init(3, 1, (const char *)z);
    unk_2801 = 0;
}

void SongPickMenu::releaseResources() {
    SongPickMenu_CancelBgTask((S *)this);
    InventoryBg_Exit(&unk_b54);
    InventoryItemGrid_Exit(&unk_cc);
    PopupChoice_ForceClose(&unk_2270);
    unk_2678.freeTexts();
}

void SongPickMenu::preInputUpdate() {
    preStateUpdate();
    unk_220c.vfunc_0c();
}

// ---------------------------------------------------------------------------------------------

void SongPickMenu::postInputUpdate() { postStateUpdate(); }

void SongPickMenu::preStateUpdate() {
    SongPickMenu_CancelBgTask((S *)this);
    InventoryBg_PreUpdate(&unk_b54);
    InventoryItemGrid_PreUpdate(&unk_cc);
    unk_b2c.updateCursorLift();
    unk_2678.freeTexts();
}

void SongPickMenu::postStateUpdate() {
    PopupChoice_Update(&unk_2270);
    InventoryBg_Update(&unk_b54);
    if (unk_2134.updatePrompt()) {
        refreshNameLabel();
    }
}

void SongPickMenu::setupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void SongPickMenu::resetPanelUnk() { InventoryBg_Load(&unk_b54, 0); }

void SongPickMenu::startPanels() {
    InventoryBg_LoadObjGraphics(&unk_b54);
    MenuButtons_LoadTextColors(&unk_2678);
}

void SongPickMenu::updateTouch() {
    S *s = (S *)this;
    if (M(s)->checkSwitchToButtons(1)) {
        SongPickMenu_StartButtonInput(s);
    } else if (Unk_ov109_02295c70_Both()) {
        u32 r = SongPickMenu_HitTestSlot(s, gTouchCurX, gTouchCurY + 0x10, 1);
        if (r != 0x10) {
            SongPickMenu_BeginTouchSlot(s, r);
        } else if (((MenuBottomButtons *)s->unk_2678)->isTouched(9)) {
            M(s)->startClose();
        }
    }
}

void SongPickMenu::mainAct01() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        if (SongPickMenu_IsSlotDisabled(s, s->unk_27f8)) {
            M(s)->setMainState(0);
            ((TouchPromptBalloon *)s->unk_2134)->setAutoCloseTimer(0x3c);
        } else {
            M(s)->setMainState(3);
            M(s)->runMainState();
        }
    } else if (!SongPickMenu_IsSlotDisabled(s, s->unk_27f8) && ((TouchPromptBalloon *)s->unk_2134)->isOpenOrOpening()) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            M(s)->openItemChoice(s->unk_27f8, 1);
            M(s)->setMainState(2);
        }
    } else {
        ((TouchPromptBalloon *)s->unk_2134)->commitOpen();
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
    if (((TouchPromptBalloon *)s->unk_2134)->isOpenOrOpening()) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            M(s)->openItemChoice(s->unk_27f8, 1);
            M(s)->setMainState(2);
        }
    }
}

void SongPickMenu::mainAct04() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->unk_2270)->isOpen()) {
        if (MenuCtrl_IsForceCloseDue()) {
            M(s)->cancelChoice();
        } else if (M(s)->checkSwitchToButtons(1)) {
            M(s)->cancelChoice();
        } else if (Unk_ov109_02295c70_Both()) {
            s32 r = ((PopupChoiceMenu *)s->unk_2270)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                PopupChoice_DecideRow(s->unk_2270, r, 1);
                s->unk_27ff = s->unk_2569[r];
                M(s)->setMainState(0xc);
            }
        }
    }
}

void SongPickMenu::updateButtons() {
    S *s = (S *)this;
    if (M(s)->checkSwitchToTouch()) {
        SongPickMenu_StartTouchInput(s);
        ((TouchPromptBalloon *)s->unk_2134)->hide(1);
    } else if (M(s)->moveCursorByPad((void *)M(s)->takeRepeatedKeys())) {
        M(s)->updateNameLabel();
        M(s)->moveCursorToTarget();
        ((TouchPromptBalloon *)s->unk_2134)->hide(0);
    } else if (!SongPickMenu_IsSlotDisabled(s, s->unk_27fb) && (gPad[1] & 1) != 0) {
        if (SongPickMenu_IsPocketSlot(s, s->unk_27fb)) {
            if (!SongPickMenu_IsSlotEmpty(s, s->unk_27fb)) {
                M(s)->openItemChoice(s->unk_27fb, 0);
            }
        } else if (s->unk_27fb == 0xf) {
            M(s)->pressCloseButton();
        }
    } else if ((gPad[1] & 2) != 0) {
        M(s)->hideCursor();
        M(s)->startClose();
        ((TouchPromptBalloon *)s->unk_2134)->hide(0);
    } else {
        ((TouchPromptBalloon *)s->unk_2134)->commitOpen();
    }
}

void SongPickMenu::mainAct06() {
    S *s = (S *)this;
    if (MenuCtrl_IsForceCloseDue()) {
        M(s)->cancelChoice();
    } else if (M(s)->checkSwitchToTouch()) {
        M(s)->cancelChoice();
    } else if (PopupChoice_MoveCursor(s->unk_2270, M(s)->takeRepeatedKeys(), &s->unk_2800, 0)) {
        M(s)->moveCursorToPopupRow();
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ((MenuCursor *)s->unk_220c)->setPosePress();
            M(s)->setMainState(7);
        } else if ((k & 2) != 0) {
            M(s)->cancelPopup();
        }
    }
}

void SongPickMenu::mainAct07() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->unk_220c)->isAnimDone()) {
        PopupChoice_DecideRow(s->unk_2270, s->unk_2800, 1);
        s->unk_27ff = s->unk_2569[s->unk_2800];
        M(s)->setMainState(0xc);
    }
}

void SongPickMenu::updateCursorMove() {
    S *s = (S *)this;
    if (!((MenuCursorBuf0 *)s->unk_220c)->isMoving()) {
        M(s)->setMainState(s->unk_27fe);
        if (s->unk_27fe == 5) {
            M(s)->showSlotFocus(s->unk_27fb);
        }
        M(s)->runMainState();
    }
}

void SongPickMenu::mainAct09() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->unk_220c)->isAnimDone()) {
        ((MenuBottomButtons *)s->unk_2678)->setSelected(9);
        M(s)->setMainState(0xf);
        Snd_PlaySe(0x28);
    }
}

void SongPickMenu::mainAct0A() {
    S *s = (S *)this;
    if (((MenuCursorBuf0 *)s->unk_220c)->isAnimDone()) {
        M(s)->refreshCursor();
        M(s)->setMainState(5);
    }
}

void SongPickMenu::mainAct0B() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->unk_2270)->isOpen()) {
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
    if (PopupChoice_TickDecideDelay(s->unk_2270)) {
        PopupChoice_Close(s->unk_2270, 0);
        ((TouchPromptBalloon *)s->unk_2134)->hide(1);
        if (((MenuCursorBuf0 *)s->unk_220c)->getAnim()) {
            M(s)->showCursorAtSlot();
        }
        M(s)->setMainState(0xd);
    }
}

void SongPickMenu::mainAct0D() {
    S *s = (S *)this;
    if (((PopupChoiceMenu *)s->unk_2270)->isClosed()) {
        M(s)->onPopupChoice();
    }
}

void SongPickMenu::mainAct0E() {
    S *s = (S *)this;
    if (((MenuErrorMessage *)s->unk_2570)->update(1)) {
        SongPickMenu_ResumeInput(s);
        ((MenuCursorBuf0 *)s->unk_220c)->enableObjWindow();
    }
}

void SongPickMenu::mainAct0F() {
    S *s = (S *)this;
    if (((MenuBottomButtons *)s->unk_2678)->stepPress()) {
        if (((MenuCursorBuf0 *)s->unk_220c)->getAnim()) {
            s32 t = ((MenuBottomButtons *)s->unk_2678)->getPressOffset();
            s32 u = ((MenuBottomButtons *)s->unk_2678)->getTargetX(-1);
            s32 w = ((MenuBottomButtons *)s->unk_2678)->getTargetY(-1);
            ((MenuCursorBuf0 *)s->unk_220c)->warpTo(t + u, t + w);
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
    s->unk_27f9 = 0x10;
    M(s)->showCursor();
    M(s)->restartKeyRepeat();
    M(s)->updateNameLabel();
    M(s)->setMainState(5);
    M(s)->showSlotFocus(s->unk_27fb);
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
    s->unk_27f8 = a;
    M(s)->setMainState(1);
    x = gTouchCurX;
    y = gTouchCurY;
    s->unk_27e4 = SongPickMenu_GetSlotX(s, s->unk_27f8) - x;
    s->unk_27e8 = SongPickMenu_GetSlotY(s, s->unk_27f8) - y;
    s->unk_27f9 = a;
    ((TouchPromptBalloon *)s->unk_2134)->queueOpen();
    ((TouchPromptBalloon *)s->unk_2134)->commitOpen();
    s->unk_2801 = 2;
    if (!SongPickMenu_IsSlotDisabled(s, a)) Inventory_PlayTouchSe();
}

void SongPickMenu_ShowError(S *s, u32 a) {
    volatile u8 b = gU8None;
    b = a;
    ((MenuErrorMessage *)s->unk_2570)->open((u8 *)&b, 1, 0);
    M(s)->setMainState(0xe);
    ((MenuCursorBuf0 *)s->unk_220c)->disableObjWindow();
}

void SongPickMenu_CancelBgTask(S *s) {
    M(s)->unk_94[0].cancel();
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
    u32 t = InventoryItemGrid_FindPocketSlotAt(s->unk_0cc);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(s->unk_0cc, t)) return 0x10;
        }
        return SongPickMenu_PocketToSlot(s, t);
    }
    return 0x10;
}

void SongPickMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        u32 t = SongPickMenu_SlotToPocket(s, a);
        InventoryItemGrid_SetSlotItem(s->unk_0cc, t, b, c);
        InventoryItemGrid_RefreshSlot(s->unk_0cc, t);
    }
}

s32 SongPickMenu_GetSlotX(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_GetSlotX(s->unk_0cc, SongPickMenu_SlotToPocket(s, a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

s32 SongPickMenu_GetSlotY(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_GetSlotY(s->unk_0cc, SongPickMenu_SlotToPocket(s, a)) - 0x10;
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
            InventoryItemGrid_DisableSlot(s->unk_0cc, SongPickMenu_SlotToPocket(s, i));
        }
    }
}

BOOL SongPickMenu_IsSlotDisabled(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(s->unk_0cc, SongPickMenu_SlotToPocket(s, a));
    }
    return FALSE;
}

BOOL SongPickMenu_IsSlotEmpty(S *s, u32 a) {
    if (SongPickMenu_IsPocketSlot(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(s->unk_0cc, SongPickMenu_SlotToPocket(s, a));
    }
    return TRUE;
}

s32 SongPickMenu::getSlotItem(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        return InventoryItemGrid_GetSlotItem(&unk_cc, r);
    }
    return 0xfff1;
}

s32 SongPickMenu::func_ov109_0229550c(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        return InventoryItemGrid_GetSlotFlags(&unk_cc, r);
    }
    return 0xf1;
}

void SongPickMenu::hideSlotFocus() {
    InventoryItemGrid_ClearCursorSlot(&unk_cc);
    unk_b2c.clearCursorSlot();
}

void SongPickMenu::showSlotFocus(u32 idx) {
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, idx);
        InventoryItemGrid_SetCursorSlot(&unk_cc, r);
        unk_b2c.clearCursorSlot();
    } else {
        hideSlotFocus();
    }
}

void SongPickMenu::refreshNameLabel() {
    s32 x = SongPickMenu_GetSlotX((S *)this, unk_27f9) - 0x6d;
    s32 y = SongPickMenu_GetSlotY((S *)this, unk_27f9) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&unk_2134)->setPos(x, y);
    if (SongPickMenu_IsPocketSlot((S *)this, unk_27f9)) {
        s32 r = SongPickMenu_SlotToPocket((S *)this, unk_27f9);
        InventoryItemGrid_ShowSlotName(&unk_cc, &unk_2134, r);
    }
}

void SongPickMenu::updateNameLabel() {
    if (SongPickMenu_IsPocketSlot((S *)this, unk_27fb)) {
        if (SongPickMenu_IsSlotEmpty((S *)this, unk_27fb)) {
            unk_2134.cancelQueuedOpen();
        } else {
            unk_27f9 = unk_27fb;
            unk_2134.queueOpen();
        }
    } else {
        unk_2134.cancelQueuedOpen();
    }
}

void SongPickMenu::drawCarriedItem() {
    if (!testFlags(0x20)) {
        if (unk_27f7 != 0) {
            if (unk_27f7 == 1) {
                InventoryItemGrid_DrawHeldItem(&unk_cc, unk_27ec, unk_27f0);
            }
        }
    }
}

void SongPickMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    if (unk_27fb == 0xf) {
        C220(unk_220c)->setAnimIfChanged(7);
    } else {
        C220(unk_220c)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 SongPickMenu::getCursorTargetX() {
    s32 r = SongPickMenu_GetSlotX((S *)this, unk_27fb);
    if (testFlags(0x10)) {
        r += 0x100;
    } else if (testFlags(8)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 SongPickMenu::getCursorTargetY() { return SongPickMenu_GetSlotY((S *)this, unk_27fb); }

void SongPickMenu::hideCursor() {
    C220(unk_220c)->setAnimIfChanged(0);
    unk_220c.vfunc_0c();
}

void SongPickMenu::moveCursorToTarget() {
    if (testFlags(4)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.warpTo(a, b);
        clearFlags(4);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.moveToEase(a, b, 3, 1);
        unk_27fe = unk_8d;
        setMainState(8);
    }
}

void SongPickMenu::moveCursorToPopupRow() {
    s32 a = unk_2270.getRowX();
    s32 b = unk_2270.getRowY(unk_2800);
    unk_220c.moveToLinear(a, b, 2);
    unk_27fe = unk_8d;
    setMainState(8);
}

void SongPickMenu::cancelPopup() {
    unk_27ff = 1;
    unk_2800 = PopupChoice_DecideCancel(&unk_2270);
    s32 a = unk_2270.getRowX();
    s32 b = unk_2270.getRowY(unk_2800);
    unk_220c.warpTo(a, b);
    unk_220c.setAnimAtEnd(8);
    setMainState(0xc);
}

void SongPickMenu::cursorToPopupTop() {
    unk_2800 = 0;
    s32 a = unk_2270.getRowX();
    s32 b = unk_2270.getRowY(unk_2800);
    unk_220c.warpTo(a, b);
    C220(unk_220c)->setAnimIfChanged(7);
}

void SongPickMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    C220(unk_220c)->setAnimIfChanged(1);
}

void SongPickMenu::refreshCursor() {
    unk_220c.setPoseIdle();
    unk_220c.vfunc_0c();
}

void SongPickMenu::pressCloseButton() {
    C220(unk_220c)->setPosePress();
    setMainState(9);
}

void SongPickMenu::onPopupChoice() {
    switch (unk_27ff) {
    case 0: {
        s32 r5 = getSlotItem(unk_27fc);
        if (SongSet_HasSong(r5)) {
            SongPickMenu_ShowError((S *)this, 0x11);
        } else {
            SongSet_AddSong(r5);
            SongPickMenu_SetSlotItem((S *)this, unk_27fc, 0xfff1, 0);
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
    unk_2270.setRowsFromIds((PopupChoiceIdList *)&unk_2270.unk_2f4, 0);
    s32 a = SongPickMenu_GetSlotX((S *)this, unk_27fc);
    s32 b = SongPickMenu_GetSlotY((S *)this, unk_27fc);
    if (x != 0) {
        unk_2270.placeAboveBalloon((LabelBalloon *)&unk_2134);
    } else {
        unk_2270.placeNearPoint(a, b);
    }
    PopupChoice_Open(&unk_2270, 0);
    setMainState(0xb);
}

void SongPickMenu::cancelChoice() {
    unk_27ff = 1;
    showCursorAtSlot();
    PopupChoice_Close(&unk_2270, 0);
    setMainState(0xd);
}

void SongPickMenu::closeWithSlot() {
    MenuCtrl_SetIndex(unk_27fc);
    MenuCtrl_SetResult(1);
    unk_8c = 3;
    setPhase(1);
    unk_2134.hide(1);
    hideCursor();
}

void SongPickMenu::startClose() {
    unk_2678.setSelected(9);
    setMainState(0xf);
    Snd_PlaySe(0x28);
}

void SongPickMenu::closeWithoutResult() {
    MenuCtrl_SetResult(0);
    unk_8c = 3;
    setPhase(1);
    unk_2134.hide(1);
    hideCursor();
}

void SongPickMenu::setPopupChoices() {
    ChoiceIdList_Add(&unk_2270.unk_2f4, 0x73, 0);
    ChoiceIdList_Add(&unk_2270.unk_2f4, 2, 1);
}

void SongPickMenu::openItemChoice(u32 idx, u32 x) {
    unk_27fc = idx;
    ChoiceIdList_Clear(&unk_2270.unk_2f4, 1);
    if (SongPickMenu_IsPocketSlot((S *)this, idx)) {
        setPopupChoices();
        hideCursor();
        if (x == 0) {
            unk_2134.hide(1);
        }
        openPopup(x);
    }
}

void SongPickMenu::moveCursorInGrid(void *pad) {
    s32 r4 = unk_27fb;
    s32 r6 = 0;
    for (; r4 >= 5; r4 -= 5, r6++) {
    }
    if (MenuKeys_HasLeft(pad)) {
        if (MenuKeys_HasUp(pad) && r6 != 0) {
        } else if (r4 == 0) {
            unk_27fb = unk_27fb + 4;
            setFlags(8);
        } else {
            unk_27fb = unk_27fb - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r4 == 4) {
                unk_27fb = unk_27fb - 4;
                setFlags(0x10);
            } else {
                unk_27fb = unk_27fb + 1;
            }
        }
    }
    if (!testFlags(0x18)) {
        if (MenuKeys_HasUp(pad)) {
            if (r6 > 0) {
                unk_27fb = unk_27fb - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (r6 < 2) {
                unk_27fb = unk_27fb + 5;
            } else {
                unk_27fb = 0xf;
                C220(unk_220c)->switchToAnim07();
            }
        }
    }
}

BOOL SongPickMenu::moveCursorByPad(void *pad) {
    u8 old = unk_27fb;
    clearFlags(0x18);
    if (pad == 0) {
        return FALSE;
    }
    if (SongPickMenu_IsPocketSlot((S *)this, unk_27fb)) {
        moveCursorInGrid(pad);
    } else if (unk_27fb == 0xf) {
        if (MenuKeys_HasUp(pad)) {
            unk_27fb = 0xe;
            C220(unk_220c)->switchToAnim01();
        }
    }
    if (old != unk_27fb) {
        return TRUE;
    }
    return FALSE;
}

BOOL SongPickMenu::testFlags(u32 mask) {
    if (unk_27dc & mask) {
        return TRUE;
    }
    return FALSE;
}

void SongPickMenu::setFlags(u32 mask) { unk_27dc = unk_27dc | mask; }

// ---------------------------------------------------------------------------------------------

void SongPickMenu::clearFlags(u32 mask) { unk_27dc = unk_27dc & ~mask; }

