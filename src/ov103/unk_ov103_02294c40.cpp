// ov103: scene overlay (class PocketLettersMenu, vtable 0x02296da0, 0x2b04 bytes). Linked unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHoldFrames;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;

void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Letter_MarkRead();
void Letter_Copy(void *dst, void *src);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);

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
void PopupChoice_Close(void *p, s32 v);
void PopupChoice_Open(void *p, u32 v);

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
BOOL LetterGrid_IsSlotEmpty(void *p, u32 a);
s32 LetterGrid_GetSlotY(void *p, u32 a);
s32 LetterGrid_GetSlotX(void *p, u32 a);
}

// ---- external classes (real names from symbols.txt) ----

class LabelBalloon {
public:
    virtual ~LabelBalloon();
    virtual void vfunc_08();
    void setPos(s32 x, s32 y);
};

class LabelButton {
public:
    virtual ~LabelButton();
    virtual void vfunc_08();
    void setState(s32 v);
    void setPos(s32 a, s32 b);
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

class LetterView {
public:
    s32 getState();
    u32 getPresent();
};

class Letter {
public:
    Letter();
    virtual ~Letter();
    u32 unk_04[(0xf4 - 4) / 4];
};

struct Unk_0206d1d4_Src;

class LetterRenderer {
public:
    LetterRenderer();
    ~LetterRenderer();
    void show(Unk_0206d1d4_Src *a, void *b, void *c, s32 d);
    void release();
    void setLayer(s32 a);
    u32 unk_00[0x210 / 4];
};

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
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
    BOOL isHighlighted(s32 a);
    void clearLetter(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    s32 getLetter(s32 a);
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
    u32 unk_00[0x15e0 / 4];
};

class TouchPromptBalloon : public LabelBalloon {
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

class CursorMotion {
public:
    CursorMotion();
    ~CursorMotion();
    void startLinear(s32 a, s32 b, s32 c);
    s32 setPos(s32 a, s32 b);
    s32 getY();
    s32 getX();
    BOOL update();
    void reset();
    u32 unk_00[0x18 / 4];
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

    BOOL isAnimDone();
    s32 getAnim();
    s32 enableObjWindow();

    /* 0x0c */ u8 unk_0c[0x3f];
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
    void warpTo(s32 x, s32 y);
    void setPoseIdle();
    void setPoseRelease();
};

// same object as MenuCursorBase (+0x220c); methods split across two classes in ov002
class MenuCursor {
public:
    void setPosePress();
    void setAnimIfChanged(s32 idx);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u8 unk_4b[0x64 - 0x4b];
};

struct PopupChoiceIdList {
    u8 unk_00[0xc];
};

class PopupChoiceMenuBody {
public:
    s32 getRowY(s32 a);
    s32 getRowX();
    s32 hitTestRowOrLast(s32 a, s32 b);
    void setRowsFromIds(PopupChoiceIdList *a, s32 b);
    BOOL isClosed();
    BOOL isOpen();
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    void placeNearPoint(s32 a, s32 b);
    void init(s32 a, s32 b, const char *c);
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    u32 unk_00[0x108 / 4];
};

class MenuLabelButton : public LabelButton {
public:
    MenuLabelButton();
    virtual ~MenuLabelButton();
    virtual void vfunc_08();
    BOOL isTouched();
    void showDefault(s32 a);
    BOOL stepAnim();
    s32 getAnchorY(s32 a);
    s32 getAnchorX(s32 a);
    u32 unk_04[(0x70 - 4) / 4];
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
    void setSlideExtent(s32 a);
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

class PocketLettersMenu;
typedef void (PocketLettersMenu::*Unk_ov103_02296da0_Fn)();

// Vtable 0x02296da0
class PocketLettersMenu : public MenuProc {
public:
    PocketLettersMenu()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678(), unk_2888(), unk_2910(), unk_2a04() {}

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
    void closeLetterView();
    void startReadLetter();
    BOOL moveCursorByPad(void *pad, u32 x);
    void moveCursorInGrid(void *pad, u32 x);
    void selectLetter(u32 idx);
    void cancelPopupForButtons();
    void openPopup();
    s32 onPopupChoice();
    void beginSwapAt(u32 v);
    void beginPutDownAt(u32 v);
    void beginMoveFromPopup();
    void func_ov103_02295120();
    void refreshCursor();
    void showCursorAtSlot();
    void cursorToPopupTop();
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
    void drawHeldItem();
    void updateBalloonForCursor();
    void placeBalloon();
    BOOL isTouchHeldFor(s32 a);
    BOOL hasTouchMoved();
    void setHoverSlot(u32 a);
    void clearHoverSlot();
    void setFocusSlot(u32 a);
    void clearFocusSlot();
    BOOL isSlotEmpty(u32 a);
    BOOL isSlotDisabled(u32 a);
    void disableAllPockets();
    s32 getSlotY(u32 a);
    s32 getSlotX(u32 a);
    BOOL getSlotLetter(u32 a);
    void putLetterInSlot(u32 a, void *b);
    BOOL dropHeldOnSlot(u32 a);
    u32 getSlotAt(u32 a, u32 b, s32 c);
    u32 toSlotOrNone(u32 a);
    u32 toLetterIndex(u32 a);
    BOOL isLetterSlot(u32 a);
    void cancelBgTasks();
    void flyHeldTo(u32 a, u32 b);
    void pickUpAtSlot(u32 a);
    void beginDragFromSlot(u32 a);
    void beginTouchOnSlot(u32 a);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct18();
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
    void transitionAct08();
    void transitionAct07();
    void transitionAct06();
    void transitionAct05();
    void transitionAct04();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void runMainState();

    /* 0x0094 */ BgVramTaskPair unk_94[1];
    /* 0x00cc */ InventoryItemGrid unk_cc;
    /* 0x0b2c */ LetterGrid unk_b2c;
    /* 0x0b54 */ InventoryBg unk_b54;
    /* 0x2134 */ TouchPromptBalloon unk_2134;
    /* 0x21f4 */ CursorMotion unk_21f4;
    /* 0x220c */ MenuCursorBuf0 unk_220c;
    /* 0x2270 */ PopupChoiceMenu unk_2270;
    /* 0x2570 */ MenuErrorMessage unk_2570;
    /* 0x2678 */ LetterRenderer unk_2678;
    /* 0x2888 */ MenuLabelButton unk_2888;
    /* 0x28f8 */ u32 unk_28f8;
    /* 0x28fc */ s32 unk_28fc;
    /* 0x2900 */ s32 unk_2900;
    /* 0x2904 */ s32 unk_2904;
    /* 0x2908 */ s32 unk_2908;
    /* 0x290c */ s32 unk_290c;
    /* 0x2910 */ Letter unk_2910;
    /* 0x2a04 */ Letter unk_2a04;
    /* 0x2af8 */ u8 unk_2af8;
    /* 0x2af9 */ u8 unk_2af9;
    /* 0x2afa */ u8 unk_2afa;
    /* 0x2afb */ u8 unk_2afb;
    /* 0x2afc */ u8 unk_2afc;
    /* 0x2afd */ u8 unk_2afd;
    /* 0x2afe */ u8 unk_2afe;
    /* 0x2aff */ u8 unk_2aff;
    /* 0x2b00 */ u8 unk_2b00;
    /* 0x2b01 */ u8 unk_2b01;
};

typedef char Unk_ov103_size_Unk_ov103_02296da0[(sizeof(PocketLettersMenu) == 0x2b04) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204468[(sizeof(TouchPromptBalloon) == 0xc0) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204614[(sizeof(MenuCursorBuf0) == 0x64) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204558[(sizeof(PopupChoiceMenu) == 0x300) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204738[(sizeof(MenuLabelButton) == 0x70) ? 1 : -1];
typedef char Unk_ov103_size_Unk_020dd458[(sizeof(Letter) == 0xf4) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02292d6c[(sizeof(InventoryBg) == 0x15e0) ? 1 : -1];
typedef char Unk_ov103_size_Unk_0206d0a0[(sizeof(LetterRenderer) == 0x210) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_022040ec[(sizeof(MenuErrorMessage) == 0x108) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov002_02204604[(sizeof(CursorMotion) == 0x18) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02294a50[(sizeof(InventoryItemGrid) == 0xa60) ? 1 : -1];
typedef char Unk_ov103_size_Unk_ov094_02294bd4[(sizeof(LetterGrid) == 0x28) ? 1 : -1];
typedef char Unk_ov103_size_Unk_020e4608[(sizeof(BgVramTaskPair) == 0x38) ? 1 : -1];

static inline BOOL Unk_ov103_02295f10_Both()
{
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov103_SceneEntry {
    PocketLettersMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" PocketLettersMenu *PocketLettersMenu_Create() { return new PocketLettersMenu(); }

BOOL PocketLettersMenu::vfunc_00() {
    initParts();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL PocketLettersMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PocketLettersMenu::onDraw() {
    PopupChoice_Draw(&unk_2270);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.drawWrapped();
    }
    drawHeldItem();
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&unk_cc, 0, unk_28fc);
        unk_b2c.drawPocketLetters(0, unk_28fc);
        InventoryBg_DrawSprite(&unk_b54, unk_28fc);
    }
    if (testFlags(0x80)) {
        s32 r = getSlideOffsetY();
        unk_2888.setPos(0, r);
        unk_2888.vfunc_08();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov103_SceneEntry sPocketLettersMenuProfile;

// ---------------------------------------------------------------------------------------------

extern "C" Unk_ov103_SceneEntry sPocketLettersMenuProfile = {PocketLettersMenu_Create, 0x96, 0x9a};

BOOL PocketLettersMenu::execTransition() {
    static Unk_ov103_02296da0_Fn tbl[9] = {
        &PocketLettersMenu::transitionAct00, &PocketLettersMenu::transitionAct01,
        &PocketLettersMenu::transitionAct02, &PocketLettersMenu::transitionAct03,
        &PocketLettersMenu::transitionAct04, &PocketLettersMenu::transitionAct05,
        &PocketLettersMenu::transitionAct06, &PocketLettersMenu::transitionAct07,
        &PocketLettersMenu::transitionAct08};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void PocketLettersMenu::runMainState() {
    static Unk_ov103_02296da0_Fn tbl[25] = {
        &PocketLettersMenu::mainAct00, &PocketLettersMenu::mainAct01,
        &PocketLettersMenu::mainAct02, &PocketLettersMenu::mainAct03,
        &PocketLettersMenu::mainAct04, &PocketLettersMenu::mainAct05,
        &PocketLettersMenu::mainAct06, &PocketLettersMenu::mainAct07,
        &PocketLettersMenu::mainAct08, &PocketLettersMenu::mainAct09,
        &PocketLettersMenu::mainAct0A, &PocketLettersMenu::mainAct0B,
        &PocketLettersMenu::mainAct0C, &PocketLettersMenu::mainAct0D,
        &PocketLettersMenu::mainAct0E, &PocketLettersMenu::mainAct0F,
        &PocketLettersMenu::mainAct10, &PocketLettersMenu::mainAct11,
        &PocketLettersMenu::mainAct12, &PocketLettersMenu::mainAct13,
        &PocketLettersMenu::mainAct14, &PocketLettersMenu::mainAct15,
        &PocketLettersMenu::mainAct16, &PocketLettersMenu::mainAct17,
        &PocketLettersMenu::mainAct18};
    (this->*tbl[unk_8d])();
}

BOOL PocketLettersMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PocketLettersMenu::execPhase3() { return TRUE; }

BOOL PocketLettersMenu::execPhase4() { return TRUE; }

BOOL PocketLettersMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void PocketLettersMenu::transitionAct00() {
    setupBgLayer6();
    loadInventoryBg();
    setTransitionState(1);
}

void PocketLettersMenu::transitionAct01() {
    loadObjGraphics();
    InventoryItemGrid_LoadPockets(&unk_cc);
    LetterGrid_LoadPocketLetters(&unk_b2c);
    disableAllPockets();
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_28fc = getSlideOffsetY();
}

void PocketLettersMenu::transitionAct02() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, 0);
    unk_28fc = getSlideOffsetY();
}

void PocketLettersMenu::transitionAct03() {
    unk_2134.hide(1);
    hideCursor();
    if (testFlags(0x100) == 0) {
        ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    }
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    setTransitionState(4);
    unk_28fc = getSlideOffsetY();
}

void PocketLettersMenu::transitionAct04() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        clearFlags(2);
        if (testFlags(0x100)) {
            setTransitionState(5);
            transitionAct05();
        } else {
            clearFlags(1);
            setPhase(5);
        }
    } else {
        applySlideOffset(6, 0, 0);
    }
    unk_28fc = getSlideOffsetY();
}

void PocketLettersMenu::transitionAct05() {
    s32 t = getSlotLetter(unk_2afd);
    Letter_MarkRead();
    unk_2678.show((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    beginSubSlideIn(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    applySlideOffset(3, 0, 0);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    setTransitionState(6);
    unk_2888.showDefault(0x88);
    setFlags(0x80);
}

void PocketLettersMenu::transitionAct06() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            setMainState(3);
        } else {
            setMainState(7);
        }
    } else {
        applySlideOffset(3, 0, 0);
        applySlideOffset(4, 0, 0);
    }
}

void PocketLettersMenu::transitionAct07() {
    beginSubSlideOut(3, 0, 0, 0x30);
    applySlideOffset(3, 0, 0);
    applySlideOffset(4, 0, 0);
    setTransitionState(8);
}

void PocketLettersMenu::transitionAct08() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        clearFlags(0x80);
        transitionAct00();
    } else {
        applySlideOffset(3, 0, 0);
        applySlideOffset(4, 0, 0);
    }
}

void PocketLettersMenu::initParts() {
    unk_28f8 = 0;
    InventoryItemGrid_Init(&unk_cc, 2);
    unk_b2c.init(2);
    InventoryBg_Init(&unk_b54, 6);
    unk_2afa = 0x15;
    unk_21f4.reset();
    unk_2af8 = 0;
    unk_2afc = 0xb;
    unk_2270.init(3, 1, 0);
    unk_2678.setLayer(3);
}

void PocketLettersMenu::releaseResources() {
    cancelBgTasks();
    InventoryBg_Exit(&unk_b54);
    InventoryItemGrid_Exit(&unk_cc);
    PopupChoice_ForceClose(&unk_2270);
    unk_2678.release();
}

void PocketLettersMenu::preInputUpdate() {
    preStateUpdate();
    unk_220c.vfunc_0c();
}

void PocketLettersMenu::postInputUpdate() {
    postStateUpdate();
}

void PocketLettersMenu::preStateUpdate() {
    cancelBgTasks();
    InventoryBg_PreUpdate(&unk_b54);
    InventoryItemGrid_PreUpdate(&unk_cc);
    unk_b2c.updateCursorLift();
}

void PocketLettersMenu::postStateUpdate() {
    PopupChoice_Update(&unk_2270);
    InventoryBg_Update(&unk_b54);
    if (unk_2134.updatePrompt()) {
        placeBalloon();
    }
}

void PocketLettersMenu::setupBgLayer6() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketLettersMenu::loadInventoryBg() {
    InventoryBg_Load(&unk_b54, 0);
}

void PocketLettersMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_b54);
}

void PocketLettersMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 r = getSlotAt(gTouchCurX, gTouchCurY, 1);
            if (r != 0x15) {
                beginTouchOnSlot(r);
            }
        }
    }
}

void PocketLettersMenu::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(0);
        unk_2134.setAutoCloseTimer(0x3c);
    } else {
        if (testFlags(4)) {
            if (hasTouchMoved()) {
                beginDragFromSlot(unk_2af9);
                return;
            }
            if (isTouchHeldFor(9)) {
                selectLetter(unk_2af9);
                return;
            }
        }
        unk_2134.commitOpen();
    }
}

void PocketLettersMenu::mainAct02() {
    getDragPos();
    clearHoverSlot();
    s32 r = getSlotAt(unk_2908 + 8, unk_290c + 8, 0);
    if (r != 0x15) {
        if (gTouchHeld == 0) {
            if (isSlotDisabled(r) != 0 || dropHeldOnSlot(r) == 0) {
                flyHeldTo(unk_2afb, 4);
            } else {
                resumeInput();
            }
        } else {
            setHoverSlot(r);
        }
    } else if (gTouchHeld == 0) {
        flyHeldTo(unk_2afb, 4);
    }
}

void PocketLettersMenu::mainAct03() {
    if (checkSwitchToButtons(1)) {
        setMainState(7);
    } else {
        if (unk_2888.isTouched()) {
            closeLetterView();
        }
    }
}

void PocketLettersMenu::mainAct04() {
    if (checkSwitchToButtons(1)) {
        cancelPopupForButtons();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 t = unk_2270.hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                PopupChoice_DecideRow(&unk_2270, t, 1);
                unk_2b00 = ((u8 *)this + 0x2569)[t];
                setMainState(0x15);
            }
        }
    }
}

void PocketLettersMenu::mainAct05() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        unk_2134.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys(), 0)) {
        updateBalloonForCursor();
        moveCursorToTarget();
        unk_2134.hide(0);
    } else if (isSlotDisabled(unk_2afc) == 0 && (gPad[1] & 1) != 0) {
        if (isLetterSlot(unk_2afc)) {
            if (isSlotEmpty(unk_2afc) == 0) {
                selectLetter(unk_2afc);
            }
        }
    } else {
        if ((gPad[1] & 0x800) != 0) {
            unk_8c = 3;
            setPhase(1);
            unk_2134.hide(1);
            hideCursor();
            clearFlags(0x100);
        } else {
            unk_2134.commitOpen();
        }
    }
}

void PocketLettersMenu::mainAct06() {
    if (moveCursorByPad((void *)takeRepeatedKeys(), 1)) {
        updateBalloonForCursor();
        moveCursorToTarget();
        unk_2134.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (isSlotEmpty(unk_2afc)) {
                beginPutDownAt(unk_2afc);
            } else {
                beginSwapAt(unk_2afc);
            }
        } else if ((f & 2) != 0) {
            beginPutDownAt(unk_2afb);
        } else {
            getHandPos();
            unk_2134.commitOpen();
        }
    }
}

void PocketLettersMenu::mainAct07() {
    if (unk_220c.getAnim() == 0) {
        s32 a = unk_2888.getAnchorX(1);
        s32 b = unk_2888.getAnchorY(1);
        unk_220c.warpTo(a, b);
        ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
    }
    if (checkSwitchToTouch()) {
        hideCursor();
        setMainState(3);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0 || (f & 2) != 0) {
            ((MenuCursor *)&unk_220c)->setPosePress();
            setMainState(8);
        }
    }
}

void PocketLettersMenu::mainAct08() {
    if (unk_220c.isAnimDone()) {
        closeLetterView();
    }
}

void PocketLettersMenu::mainAct09() {
    if (checkSwitchToTouch()) {
        cancelPopupForButtons();
    } else if (PopupChoice_MoveCursor(&unk_2270, takeRepeatedKeys(), &unk_2b01, 0)) {
        moveCursorToPopupRow();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((MenuCursor *)&unk_220c)->setPosePress();
            setMainState(0xa);
        } else if ((f & 2) != 0) {
            cancelPopupForButtons();
        }
    }
}

void PocketLettersMenu::mainAct0A() {
    if (unk_220c.isAnimDone()) {
        PopupChoice_DecideRow(&unk_2270, unk_2b01, 1);
        unk_2b00 = ((u8 *)this + 0x2569)[unk_2b01];
        setMainState(0x15);
    }
}

void PocketLettersMenu::mainAct0B() {
    if (!unk_220c.isMoving()) {
        setMainState(unk_2aff);
        if (unk_2aff == 5) {
            setFocusSlot(unk_2afc);
        }
        runMainState();
    }
    getHandPos();
}

void PocketLettersMenu::mainAct0C() {
    if (unk_220c.isAnimDone()) {
        func_ov103_02295120();
    }
}

void PocketLettersMenu::mainAct0D() {
    if (unk_220c.isAnimDone()) {
        refreshCursor();
        setMainState(5);
    }
}

void PocketLettersMenu::mainAct0E() {
    if (unk_220c.func_ov002_02202928()) {
        pickUpAtSlot(unk_2afc);
        setMainState(0xf);
    }
}

void PocketLettersMenu::mainAct0F() {
    if (unk_220c.isAnimDone()) {
        setMainState(unk_2aff);
    }
    getHandPos();
}

void PocketLettersMenu::mainAct10() {
    if (!unk_220c.func_ov002_02202928()) {
        u32 a = unk_2afe;
        if (unk_2afc == a) {
            dropHeldOnSlot(a);
            updateBalloonForCursor();
            setMainState(5);
        } else {
            flyHeldTo(a, 4);
        }
    } else {
        getHandPos();
    }
}

void PocketLettersMenu::mainAct11() {
    if (!unk_220c.func_ov002_022028fc()) {
        exchangeHeldWith(unk_2afe);
        setFlags(0x40);
        setMainState(0x12);
        updateBalloonForCursor();
    } else {
        setMainState(5);
    }
}

void PocketLettersMenu::mainAct12() {
    if (unk_220c.isAnimDone()) {
        setMainState(unk_2aff);
    }
    if (unk_220c.func_ov002_02202928()) {
        clearFlags(0x40);
        getHandPos();
    }
}

void PocketLettersMenu::mainAct13() {
    if (unk_21f4.update()) {
        releaseHeldTo(unk_2afb);
        resumeInput();
    } else {
        getFlyPos();
    }
}

void PocketLettersMenu::mainAct14() {
    if (unk_2270.isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(9);
        } else {
            setMainState(4);
        }
    }
}

void PocketLettersMenu::mainAct15() {
    if (PopupChoice_TickDecideDelay(&unk_2270)) {
        PopupChoice_Close(&unk_2270, 0);
        if (unk_220c.getAnim()) {
            showCursorAtSlot();
        }
        setMainState(0x16);
    }
}

void PocketLettersMenu::mainAct16() {
    if (unk_2270.isClosed()) {
        onPopupChoice();
    }
}

void PocketLettersMenu::mainAct17() {
    if (unk_2570.update(0)) {
        setMainState(unk_2aff);
        unk_220c.enableObjWindow();
    }
}

void PocketLettersMenu::mainAct18() {
    if (unk_2888.stepAnim()) {
        if (unk_220c.getAnim()) {
            s32 r4 = unk_2888.getAnchorX(1);
            s32 r2 = unk_2888.getAnchorY(1);
            unk_220c.warpTo(r4, r2);
        }
    } else {
        hideCursor();
        setTransitionState(7);
        setPhase(1);
    }
}

void PocketLettersMenu::startTouchInput() {
    hideCursor();
    clearFocusSlot();
    setMainState(0);
}

void PocketLettersMenu::startButtonInput() {
    unk_2afa = 0x15;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(5);
    setFocusSlot(unk_2afc);
}

void PocketLettersMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void PocketLettersMenu::beginTouchOnSlot(u32 a) {
    u32 r6, r7;
    unk_2af9 = a;
    setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    unk_2900 = getSlotX(unk_2af9) - r6;
    unk_2904 = getSlotY(unk_2af9) - r7;
    unk_2afa = a;
    unk_2134.queueOpen();
    if (isSlotDisabled(a)) {
        clearFlags(4);
    } else {
        setFlags(4);
    }
}

void PocketLettersMenu::beginDragFromSlot(u32 a) {
    unk_2afb = a;
    unk_2134.hide(1);
    pickUpFrom(a);
    if (unk_2af8 == 1) setMainState(2);
    getDragPos();
}

void PocketLettersMenu::pickUpAtSlot(u32 a) {
    unk_2afb = a;
    unk_2134.hide(1);
    pickUpFrom(a);
    if (unk_2af8 == 1) unk_2aff = 6;
    getHandPos();
}

void PocketLettersMenu::flyHeldTo(u32 a, u32 b) {
    unk_2afb = a;
    unk_21f4.setPos(unk_2908, unk_290c);
    s32 x = getSlotX(a);
    unk_21f4.startLinear(x, getSlotY(a), b);
    unk_21f4.update();
    getFlyPos();
    setMainState(0x13);
}

void PocketLettersMenu::cancelBgTasks() {
    unk_94->cancel();
}

BOOL PocketLettersMenu::isLetterSlot(u32 a) {
    if (a >= 0xb && a <= 0x14) return TRUE;
    return FALSE;
}

u32 PocketLettersMenu::toLetterIndex(u32 a) {
    if (a >= 0xb && a <= 0x14) return (u8)(a - 11);
    return 0;
}

u32 PocketLettersMenu::toSlotOrNone(u32 a) {
    if (a <= 9) return (u8)(a + 11);
    return 0x15;
}

u32 PocketLettersMenu::getSlotAt(u32 a, u32 b, s32 c) {
    u32 t = unk_b2c.findPocketLetterAt(a, b);
    if (t != 0x37) {
        if (c != 0) {
            if (LetterGrid_IsSlotEmpty(&unk_b2c, t)) return 0x15;
        }
        return toSlotOrNone(t);
    }
    return 0x15;
}

BOOL PocketLettersMenu::dropHeldOnSlot(u32 a) {
    if (!isSlotEmpty(a)) {
        Letter_Copy(&unk_2a04, (void *)getSlotLetter(a));
        putLetterInSlot(unk_2afb, &unk_2a04);
    }
    releaseHeldTo(a);
    return TRUE;
}

void PocketLettersMenu::putLetterInSlot(u32 a, void *b) {
    if (isLetterSlot(a)) {
        unk_b2c.func_ov094_02294318(toLetterIndex(a), (s32)b);
    }
}

BOOL PocketLettersMenu::getSlotLetter(u32 a) {
    if (isLetterSlot(a)) {
        return unk_b2c.getLetter(toLetterIndex(a));
    }
    return FALSE;
}

s32 PocketLettersMenu::getSlotX(u32 a) {
    if (isLetterSlot(a)) {
        return LetterGrid_GetSlotX(&unk_b2c, toLetterIndex(a));
    }
    return 0;
}

s32 PocketLettersMenu::getSlotY(u32 a) {
    if (isLetterSlot(a)) {
        return LetterGrid_GetSlotY(&unk_b2c, toLetterIndex(a));
    }
    return 0;
}

void PocketLettersMenu::disableAllPockets() {
    InventoryItemGrid_DisableSlotRange(&unk_cc, 0, 0xe);
}

BOOL PocketLettersMenu::isSlotDisabled(u32 a) {
    if (isLetterSlot(a)) {
        return unk_b2c.isHighlighted(toLetterIndex(a));
    }
    return FALSE;
}

BOOL PocketLettersMenu::isSlotEmpty(u32 a) {
    if (isLetterSlot(a)) {
        return LetterGrid_IsSlotEmpty(&unk_b2c, toLetterIndex(a));
    }
    return TRUE;
}

void PocketLettersMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_cc);
    unk_b2c.clearCursorSlot();
}

void PocketLettersMenu::setFocusSlot(u32 a) {
    if (isLetterSlot(a)) {
        unk_b2c.setCursorSlot(toLetterIndex(a));
        InventoryItemGrid_ClearCursorSlot(&unk_cc);
    } else {
        clearFocusSlot();
    }
}

void PocketLettersMenu::clearHoverSlot() {
    InventoryItemGrid_ClearMarks(&unk_cc);
    unk_b2c.clearMarks();
}

void PocketLettersMenu::setHoverSlot(u32 a) {
    if (isLetterSlot(a)) {
        unk_b2c.markSlot(toLetterIndex(a));
    }
}

BOOL PocketLettersMenu::hasTouchMoved() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

BOOL PocketLettersMenu::isTouchHeldFor(s32 a) {
    if (gTouchHoldFrames < a) return FALSE;
    return TRUE;
}

void PocketLettersMenu::placeBalloon() {
    s32 r6 = getSlotX(unk_2afa) - 0x6d;
    s32 r4 = getSlotY(unk_2afa) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    unk_2134.setPos(r6, r4);
    if (isLetterSlot(unk_2afa)) {
        unk_b2c.showLetterName(&unk_2134, toLetterIndex(unk_2afa));
    }
}

void PocketLettersMenu::updateBalloonForCursor() {
    if (isLetterSlot(unk_2afc)) {
        if (isSlotEmpty(unk_2afc)) {
            unk_2134.cancelQueuedOpen();
        } else {
            unk_2afa = unk_2afc;
            unk_2134.queueOpen();
        }
    } else {
        unk_2134.cancelQueuedOpen();
    }
}

void PocketLettersMenu::drawHeldItem() {
    if (!testFlags(0x40)) {
        switch (unk_2af8) {
        case 0:
            break;
        case 1:
            unk_b2c.drawHeldLetter(unk_2908, unk_290c, &unk_2910);
            break;
        }
    }
}

void PocketLettersMenu::getDragPos() {
    unk_2908 = unk_2900 + gTouchCurX;
    unk_290c = unk_2904 + gTouchCurY;
}

void PocketLettersMenu::getHandPos() {
    unk_2908 = unk_220c.getFrameScreenX() - 2;
    unk_290c = unk_220c.getFrameScreenY() - 4;
}

void PocketLettersMenu::getFlyPos() {
    unk_2908 = unk_21f4.getX();
    unk_290c = unk_21f4.getY();
}

void PocketLettersMenu::pickUpFrom(u32 idx) {
    if (isLetterSlot(idx)) {
        s32 r4 = toLetterIndex(idx);
        unk_2af8 = 1;
        s32 r = unk_b2c.getLetter(r4);
        Letter_Copy(&unk_2910, (void *)r);
        unk_b2c.clearLetter(r4);
    }
}

void PocketLettersMenu::releaseHeldTo(u32 idx) {
    if (unk_2af8 == 1) {
        putLetterInSlot(idx, &unk_2910);
    }
    unk_2af8 = 0;
}

void PocketLettersMenu::exchangeHeldWith(u32 idx) {
    if (unk_2af8 == 1) {
        Letter_Copy(&unk_2a04, &unk_2910);
        pickUpFrom(idx);
        putLetterInSlot(idx, &unk_2a04);
    }
}

void PocketLettersMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
    refreshCursor();
}

s32 PocketLettersMenu::getCursorTargetX() {
    s32 r = getSlotX(unk_2afc);
    if (testFlags(0x20)) {
        r += 0x100;
    } else if (testFlags(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 PocketLettersMenu::getCursorTargetY() { return getSlotY(unk_2afc); }

void PocketLettersMenu::hideCursor() {
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(0);
    unk_220c.vfunc_0c();
}

void PocketLettersMenu::moveCursorToTarget() {
    if (testFlags(8)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.warpTo(a, b);
        clearFlags(8);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.moveToEase(a, b, 3, 1);
        unk_2aff = unk_8d;
        setMainState(0xb);
    }
}

void PocketLettersMenu::moveCursorToPopupRow() {
    s32 a = unk_2270.getRowX();
    s32 b = unk_2270.getRowY(unk_2b01);
    unk_220c.moveToLinear(a, b, 2);
    unk_2aff = unk_8d;
    setMainState(0xb);
}

void PocketLettersMenu::cursorToPopupTop() {
    unk_2b01 = 0;
    s32 a = unk_2270.getRowX();
    s32 b = unk_2270.getRowY(unk_2b01);
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(7);
}

void PocketLettersMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
}

void PocketLettersMenu::refreshCursor() {
    unk_220c.setPoseIdle();
    unk_220c.vfunc_0c();
}

void PocketLettersMenu::func_ov103_02295120() {
    unk_220c.setPoseRelease();
    setMainState(0xd);
}

void PocketLettersMenu::beginMoveFromPopup() {
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(4);
    setMainState(0xe);
}

void PocketLettersMenu::beginPutDownAt(u32 v) {
    unk_2134.hide(1);
    unk_2afe = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(5);
    setMainState(0x10);
}

void PocketLettersMenu::beginSwapAt(u32 v) {
    unk_2134.hide(1);
    unk_2aff = unk_8d;
    unk_2afe = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(6);
    setMainState(0x11);
}

s32 PocketLettersMenu::onPopupChoice() {
    switch (unk_2b00) {
    case 0:
        beginMoveFromPopup();
        break;
    case 1:
        startReadLetter();
        break;
    case 3:
    default:
        resumeInput();
        break;
    }
}

void PocketLettersMenu::openPopup() {
    unk_2270.setRowsFromIds((PopupChoiceIdList *)&unk_2270.unk_2f4, 0);
    s32 a = getSlotX(unk_2afd);
    s32 b = getSlotY(unk_2afd);
    unk_2270.placeNearPoint(a, b);
    PopupChoice_Open(&unk_2270, 0);
    setMainState(0x14);
}

void PocketLettersMenu::cancelPopupForButtons() {
    unk_2b00 = 3;
    showCursorAtSlot();
    PopupChoice_Close(&unk_2270, 0);
    setMainState(0x16);
}

void PocketLettersMenu::selectLetter(u32 idx) {
    unk_2afd = idx;
    ChoiceIdList_Clear(&unk_2270.unk_2f4, 3);
    s32 r6 = getSlotLetter(idx);
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(&unk_2270.unk_2f4, 0, 0);
    }
    s32 r4 = ((LetterView *)r6)->getState();
    if (r4 != 0) {
        if (r4 == 7) {
            ChoiceIdList_Add(&unk_2270.unk_2f4, 0x17, 1);
        } else {
            ChoiceIdList_Add(&unk_2270.unk_2f4, 0x14, 1);
        }
    }
    if (((LetterView *)r6)->getPresent() != 0xfff1 && r4 == 3 || r4 == 6 || r4 == 1) {
        ChoiceIdList_Add(&unk_2270.unk_2f4, 0x15, 2);
    }
    ChoiceIdList_Add(&unk_2270.unk_2f4, 2, 3);
    hideCursor();
    unk_2134.hide(1);
    openPopup();
}

void PocketLettersMenu::moveCursorInGrid(void *pad, u32 x) {
    s32 col = unk_2afc - 0xb;
    s32 row = col >> 1;
    if (MenuKeys_HasLeft(pad)) {
        if ((col & 1) > 0) {
            unk_2afc = unk_2afc - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if ((col & 1) < 1) {
            unk_2afc = unk_2afc + 1;
        }
    }
    if (isLetterSlot(unk_2afc)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (row > 0) {
                    unk_2afc = unk_2afc - 2;
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (row < 4) {
                    unk_2afc = unk_2afc + 2;
                }
            }
        }
    }
}

BOOL PocketLettersMenu::moveCursorByPad(void *pad, u32 x) {
    u8 old = unk_2afc;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (isLetterSlot(unk_2afc)) {
        moveCursorInGrid(pad, x);
    }
    if (old != unk_2afc) {
        return TRUE;
    }
    return FALSE;
}

void PocketLettersMenu::startReadLetter() {
    setTransitionState(3);
    setPhase(1);
    setFlags(0x100);
}

void PocketLettersMenu::closeLetterView() {
    setMainState(0x18);
    unk_2888.setState(2);
}

BOOL PocketLettersMenu::testFlags(u32 mask) {
    if (unk_28f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketLettersMenu::setFlags(u32 mask) { unk_28f8 = unk_28f8 | mask; }

void PocketLettersMenu::clearFlags(u32 mask) { unk_28f8 = unk_28f8 & ~mask; }
