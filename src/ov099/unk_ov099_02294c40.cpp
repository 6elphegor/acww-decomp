// ov099: scene overlay (class PocketMenuUnk, vtable 0x02296b00, 0x2794 bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

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
void func_0209909c(u16 *p, s32 a, s32 b);
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

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
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
    void drawPocketLetters(s32 a, s32 b);
    BOOL isHighlighted(s32 a);
    void showLetterName(void *p, s32 a);
    void markSlot(s32 a);
    void clearMarks();
    void setCursorSlot(u32 a);
    void clearCursorSlot();
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
    u8 unk_2f9[7];
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
};

typedef void (PocketMenuUnk::*Unk_ov099_02296b00_Fn)();

// Vtable 0x02296b00
class PocketMenuUnk : public MenuProc {
public:
    PocketMenuUnk()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2690() {}

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
    /* 0xcc */ InventoryItemGrid unk_cc;
    /* 0xb2c */ LetterGrid unk_b2c;
    /* 0xb54 */ InventoryBg unk_b54;
    /* 0x2134 */ TouchPromptBalloon unk_2134;
    /* 0x21f4 */ CursorMotion unk_21f4;
    /* 0x220c */ MenuCursorBuf0 unk_220c;
    /* 0x2270 */ PopupChoiceMenu unk_2270;
    /* 0x2570 */ MenuErrorMessage unk_2570;
    /* 0x2678 */ u32 unk_2678;
    /* 0x267c */ u32 unk_267c;
    /* 0x2680 */ s32 unk_2680;
    /* 0x2684 */ s32 unk_2684;
    /* 0x2688 */ s32 unk_2688;
    /* 0x268c */ s32 unk_268c;
    /* 0x2690 */ Letter unk_2690;
    /* 0x2784 */ u16 unk_2784;
    /* 0x2786 */ u8 unk_2786;
    /* 0x2787 */ u8 unk_2787;
    /* 0x2788 */ u8 unk_2788;
    /* 0x2789 */ u8 unk_2789;
    /* 0x278a */ u8 unk_278a;
    /* 0x278b */ u8 unk_278b;
    /* 0x278c */ u8 unk_278c;
    /* 0x278d */ u8 unk_278d;
    /* 0x278e */ u8 unk_278e;
    /* 0x278f */ u8 unk_278f;
    /* 0x2790 */ u8 unk_2790;
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
    PopupChoice_Draw(&unk_2270);
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_220c.drawWrapped();
    }
    drawHand();
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&unk_cc, 0, unk_267c);
        unk_b2c.drawPocketLetters(0, unk_267c);
        InventoryBg_DrawSprite(&unk_b54, unk_267c);
    }
    return TRUE;
}

BOOL PocketMenuUnk::execTransition() {
    static Unk_ov099_02296b00_Fn tbl[5] = {
        &PocketMenuUnk::stateLoad, &PocketMenuUnk::stateSlideIn,
        &PocketMenuUnk::stateWaitSlideIn, &PocketMenuUnk::stateSlideOut,
        &PocketMenuUnk::stateWaitSlideOut};
    preStateUpdate();
    (this->*tbl[unk_8c])();
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
    (this->*tbl[unk_8d])();
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
    InventoryItemGrid_LoadPockets(&unk_cc);
    LetterGrid_LoadPocketLetters(&unk_b2c);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_267c = getSlideOffsetY();
}

void PocketMenuUnk::stateWaitSlideIn() {
    if (stepSlideIn(0)) {
        setPhase(2);
        PocketMenuUnk_ReturnToIdle(this);
    }
    applySlideOffset(6, 0, 0);
    unk_267c = getSlideOffsetY();
}

void PocketMenuUnk::stateSlideOut() {
    unk_2134.hide(1);
    hideCursor();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    setTransitionState(4);
    unk_267c = getSlideOffsetY();
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
    unk_267c = getSlideOffsetY();
}

void PocketMenuUnk::initPocketMenuUnk() {
    u16 a;
    u16 b;
    unk_2678 = 0;
    InventoryItemGrid_Init(&unk_cc, 2);
    unk_b2c.init(2);
    InventoryBg_Init(&unk_b54, 6);
    unk_2789 = 0x1d;
    unk_21f4.reset();
    unk_2787 = 0;
    unk_278b = 0;
    unk_2270.init(3, 1, 0);
    a = 0x11a9;
    func_0209909c(&a, 1, 0);
    b = 0x1548;
    func_0209909c(&b, 0, 2);
}

void PocketMenuUnk::releaseResources() {
    PocketMenuUnk_CancelVramTasks(this);
    InventoryBg_Exit(&unk_b54);
    InventoryItemGrid_Exit(&unk_cc);
    PopupChoice_ForceClose(&unk_2270);
}

void PocketMenuUnk::preInputUpdate() {
    preStateUpdate();
    unk_220c.vfunc_0c();
}

void PocketMenuUnk::postInputUpdate() {
    postStateUpdate();
}

void PocketMenuUnk::preStateUpdate() {
    PocketMenuUnk_CancelVramTasks(this);
    InventoryBg_PreUpdate(&unk_b54);
    InventoryItemGrid_PreUpdate(&unk_cc);
    unk_b2c.updateCursorLift();
}

void PocketMenuUnk::postStateUpdate() {
    PopupChoice_Update(&unk_2270);
    InventoryBg_Update(&unk_b54);
    if (unk_2134.updatePrompt()) {
        positionLabelBalloon();
    }
}

void PocketMenuUnk::setupBgLayer() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketMenuUnk::func_ov099_02296364() {
    InventoryBg_Load(&unk_b54, 0);
}

void PocketMenuUnk::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_b54);
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
        unk_2134.setAutoCloseTimer(0x3c);
    } else {
        if (testFlags(4)) {
            if (PocketMenuUnk_HasTouchMoved(this)) {
                PocketMenuUnk_StartTouchDrag(this, unk_2788);
                return;
            }
            if (PocketMenuUnk_IsTouchHeldFor(this, 9)) {
                openTargetOptions(unk_2788);
                return;
            }
        }
        unk_2134.commitOpen();
    }
}

void PocketMenuUnk::mainAct02() {
    if (checkSwitchToButtons(1)) {
        cancelOptions();
    } else {
        if (Unk_ov099_02296158_Both()) {
            s32 t = ((PopupChoiceMenuBody *)&unk_2270)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                PopupChoice_DecideRow(&unk_2270, t, 1);
                unk_278f = unk_2270.unk_2f9[t];
                setMainState(0x12);
            }
        }
    }
}

void PocketMenuUnk::mainAct03() {
    syncHandFromTouch();
    PocketMenuUnk_ClearHighlights(this);
    s32 r = PocketMenuUnk_HitPocket(this, unk_2688 + 8, unk_268c + 8, 0);
    if (r != 0x1d) {
        if (gTouchHeld == 0) {
            if (PocketMenuUnk_DropItemAt(this, r) == 0) {
                PocketMenuUnk_FlyHandTo(this, unk_278a, 4);
            }
            PocketMenuUnk_ReturnToIdle(this);
        } else {
            PocketMenuUnk_HighlightTarget(this, r);
        }
    } else if (gTouchHeld == 0) {
        PocketMenuUnk_FlyHandTo(this, unk_278a, 4);
    }
}

void PocketMenuUnk::mainAct04() {
    if (checkSwitchToTouch()) {
        PocketMenuUnk_EnterTouchIdle(this);
        unk_2134.hide(1);
    } else if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateLabelBalloon();
        func_ov099_0229519c();
        unk_2134.hide(0);
    } else if (func_ov099_02295788(this, unk_278b) == 0 && (gPad[1] & 1) != 0) {
        if (PocketMenuUnk_IsPocketTarget(this, unk_278b)) {
            if (PocketMenuUnk_IsSlotEmpty(this, unk_278b) == 0) {
                openTargetOptions(unk_278b);
            }
        }
    } else {
        if ((gPad[1] & 0x800) != 0) {
            unk_8c = 3;
            setPhase(1);
            unk_2134.hide(1);
            hideCursor();
        } else {
            unk_2134.commitOpen();
        }
    }
}

void PocketMenuUnk::mainAct05() {
    if (moveCursorByPad((void *)takeRepeatedKeys())) {
        updateLabelBalloon();
        func_ov099_0229519c();
        unk_2134.hide(0);
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            if (PocketMenuUnk_IsPocketTarget(this, unk_278b)) {
                if (PocketMenuUnk_IsSlotEmpty(this, unk_278b)) {
                    func_ov099_0229502c(unk_278b);
                } else {
                    func_ov099_02294fe0(unk_278b);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov099_0229502c(unk_278a);
        } else {
            syncHandFromCursor();
            unk_2134.commitOpen();
        }
    }
}

void PocketMenuUnk::mainAct06() {
    if (checkSwitchToTouch()) {
        cancelOptions();
    } else if (PopupChoice_MoveCursor(&unk_2270, takeRepeatedKeys(), &unk_2790, 0)) {
        func_ov099_02295148();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((MenuCursor *)&unk_220c)->setPosePress();
            setMainState(7);
        } else if ((f & 2) != 0) {
            cancelOptions();
        }
    }
}

void PocketMenuUnk::mainAct07() {
    if (unk_220c.isAnimDone()) {
        PopupChoice_DecideRow(&unk_2270, unk_2790, 1);
        unk_278f = unk_2270.unk_2f9[unk_2790];
        setMainState(0x12);
    }
}

void PocketMenuUnk::mainAct08() {
    if (unk_220c.isMoving() == 0) {
        setMainState(unk_278e);
        if ((u8)(unk_278e + 0xfc) <= 1) {
            PocketMenuUnk_SelectTarget(this, unk_278b);
        }
    }
    syncHandFromCursor();
}

void PocketMenuUnk::mainAct09() {
    if (unk_220c.isAnimDone()) {
        func_ov099_02295088();
    }
}

void PocketMenuUnk::mainAct0A() {
    if (unk_220c.isAnimDone()) {
        func_ov099_022950a8();
        setMainState(4);
    }
}

void PocketMenuUnk::mainAct0B() {
    if (unk_220c.func_ov002_02202928()) {
        PocketMenuUnk_StartButtonDrag(this, unk_278b);
        setMainState(0xc);
    }
}

void PocketMenuUnk::mainAct0C() {
    if (unk_220c.isAnimDone()) {
        setMainState(unk_278e);
    }
    syncHandFromCursor();
}

void PocketMenuUnk::mainAct0D() {
    if (!unk_220c.func_ov002_02202928()) {
        u32 a = unk_278d;
        if (unk_278b == a) {
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
    if (!unk_220c.func_ov002_022028fc()) {
        swapHandWith(unk_278d);
        setFlags(0x40);
        setMainState(0xf);
        updateLabelBalloon();
    } else {
        setMainState(4);
    }
}

void PocketMenuUnk::mainAct0F() {
    if (unk_220c.isAnimDone()) {
        setMainState(unk_278e);
    }
    if (unk_220c.func_ov002_02202928()) {
        clearFlags(0x40);
        syncHandFromCursor();
    }
}

void PocketMenuUnk::mainAct10() {
    if (unk_21f4.update()) {
        putHandBack(unk_278a);
        PocketMenuUnk_ReturnToIdle(this);
    } else {
        syncHandFromMover();
    }
}

void PocketMenuUnk::mainAct11() {
    if (((PopupChoiceMenuBody *)&unk_2270)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            func_ov099_022950fc();
            setMainState(6);
        } else {
            setMainState(2);
        }
    }
}

void PocketMenuUnk::mainAct12() {
    if (PopupChoice_TickDecideDelay(&unk_2270)) {
        PopupChoice_Close(&unk_2270, 0);
        if (unk_220c.getAnim()) {
            placeCursorOnTarget();
        }
        setMainState(0x13);
    }
}

void PocketMenuUnk::mainAct13() {
    if (((PopupChoiceMenuBody *)&unk_2270)->isClosed()) {
        runChosenAction();
    }
}

// ---------------------------------------------------------------------------------------------
// State handlers

void PocketMenuUnk::mainAct14() {
    if (unk_2570.update(0)) {
        setMainState(unk_278e);
        unk_220c.enableObjWindow();
    }
}

void PocketMenuUnk_EnterTouchIdle(S *s) {
    s->hideCursor();
    PocketMenuUnk_ClearSelection(s);
    s->setMainState(0);
}

void PocketMenuUnk_EnterButtonIdle(S *s) {
    s->unk_2789 = 0x1d;
    s->func_ov099_02295290();
    s->restartKeyRepeat();
    s->updateLabelBalloon();
    s->setMainState(4);
    PocketMenuUnk_SelectTarget(s, s->unk_278b);
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
    s->unk_2788 = a;
    s->setMainState(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_2680 = PocketMenuUnk_GetTargetX(s, s->unk_2788) - r6;
    s->unk_2684 = PocketMenuUnk_GetTargetY(s, s->unk_2788) - r7;
    s->unk_2789 = a;
    s->unk_2134.queueOpen();
    if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->clearFlags(4);
    } else if (func_ov099_02295788(s, a)) {
        s->clearFlags(4);
    } else {
        s->setFlags(4);
    }
}

void PocketMenuUnk_StartTouchDrag(S *s, u32 a) {
    s->unk_278a = a;
    s->unk_2134.hide(1);
    s->pickUp(a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) s->setMainState(3);
    }
    s->syncHandFromTouch();
}

void PocketMenuUnk_StartButtonDrag(S *s, u32 a) {
    s->unk_278a = a;
    s->unk_2134.hide(1);
    s->pickUp(a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) s->unk_278e = 5;
    }
    s->syncHandFromCursor();
}

void PocketMenuUnk_FlyHandTo(S *s, u32 a, u32 b) {
    s->unk_278a = a;
    s->unk_21f4.setPos(s->unk_2688, s->unk_268c);
    s32 x = PocketMenuUnk_GetTargetX(s, a);
    s->unk_21f4.startLinear(x, PocketMenuUnk_GetTargetY(s, a), b);
    s->unk_21f4.update();
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
    u32 t = InventoryItemGrid_FindPocketSlotAt(&s->unk_cc);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(&s->unk_cc, t)) return 0x1d;
        }
        return PocketMenuUnk_PocketIndexToTarget(s, t);
    }
    return 0x1d;
}

BOOL PocketMenuUnk_DropItemAt(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        u32 t = PocketMenuUnk_GetItem(s, a);
        if (t != 0xfff1) {
            PocketMenuUnk_SetSlotItem(s, s->unk_278a, t, PocketMenuUnk_GetItemFlags(s, a));
        }
        s->putHandBack(a);
        return TRUE;
    }
    return FALSE;
}

void PocketMenuUnk_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        u32 t = PocketMenuUnk_TargetToGridIndex(s, a);
        InventoryItemGrid_SetSlotItem(&s->unk_cc, t, b, c);
        InventoryItemGrid_RefreshSlot(&s->unk_cc, t);
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
    u32 t = s->unk_b2c.findPocketLetterAt(a, b);
    if (t != 0x37) {
        if (c != 0) {
            if (LetterGrid_IsSlotEmpty(&s->unk_b2c, t)) return 0x1d;
        }
        return PocketMenuUnk_LetterIndexToTarget(s, t);
    }
    return 0x1d;
}

s32 PocketMenuUnk_GetTargetX(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotX(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_GetSlotX(&s->unk_b2c, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return 0;
}

s32 PocketMenuUnk_GetTargetY(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotY(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_GetSlotY(&s->unk_b2c, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return 0;
}

BOOL func_ov099_02295788(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return s->unk_b2c.isHighlighted(PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return FALSE;
}

BOOL PocketMenuUnk_IsSlotEmpty(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        return LetterGrid_IsSlotEmpty(&s->unk_b2c, PocketMenuUnk_TargetToLetterIndex(s, a));
    }
    return TRUE;
}

u32 PocketMenuUnk_GetItem(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotItem(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    }
    return 0xfff1;
}

u32 PocketMenuUnk_GetItemFlags(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        return InventoryItemGrid_GetSlotFlags(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    }
    return 0xf1;
}

void PocketMenuUnk_ClearSelection(S *s) {
    InventoryItemGrid_ClearCursorSlot(&s->unk_cc);
    s->unk_b2c.clearCursorSlot();
}

void PocketMenuUnk_SelectTarget(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        InventoryItemGrid_SetCursorSlot(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
        s->unk_b2c.clearCursorSlot();
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->unk_b2c.setCursorSlot(PocketMenuUnk_TargetToLetterIndex(s, a));
        InventoryItemGrid_ClearCursorSlot(&s->unk_cc);
    } else {
        PocketMenuUnk_ClearSelection(s);
    }
}

void PocketMenuUnk_ClearHighlights(S *s) {
    InventoryItemGrid_ClearMarks(&s->unk_cc);
    s->unk_b2c.clearMarks();
}

void PocketMenuUnk_HighlightTarget(S *s, u32 a) {
    if (PocketMenuUnk_IsPocketTarget(s, a)) {
        InventoryItemGrid_MarkSlot(&s->unk_cc, PocketMenuUnk_TargetToGridIndex(s, a));
    } else if (PocketMenuUnk_IsLetterTarget(s, a)) {
        s->unk_b2c.markSlot(PocketMenuUnk_TargetToLetterIndex(s, a));
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
    s32 x = PocketMenuUnk_GetTargetX(this, unk_2789) - 0x6d;
    s32 y = PocketMenuUnk_GetTargetY(this, unk_2789) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    ((LabelBalloon *)&unk_2134)->setPos(x, y);
    if (PocketMenuUnk_IsPocketTarget(this, unk_2789)) {
        s32 r = PocketMenuUnk_TargetToGridIndex(this, unk_2789);
        InventoryItemGrid_ShowSlotName(&unk_cc, &unk_2134, r);
    } else if (PocketMenuUnk_IsLetterTarget(this, unk_2789)) {
        s32 r = PocketMenuUnk_TargetToLetterIndex(this, unk_2789);
        unk_b2c.showLetterName(&unk_2134, r);
    }
}

void PocketMenuUnk::updateLabelBalloon() {
    if (PocketMenuUnk_IsPocketTarget(this, unk_278b) || PocketMenuUnk_IsLetterTarget(this, unk_278b)) {
        if (PocketMenuUnk_IsSlotEmpty(this, unk_278b)) {
            unk_2134.cancelQueuedOpen();
        } else {
            unk_2789 = unk_278b;
            unk_2134.queueOpen();
        }
    } else {
        unk_2134.cancelQueuedOpen();
    }
}

void PocketMenuUnk::drawHand() {
    if (!testFlags(0x40)) {
        switch (unk_2787) {
        case 0:
            break;
        case 2:
            InventoryItemGrid_DrawHeldItem(&unk_cc, unk_2688, unk_268c);
            break;
        }
    }
}

void PocketMenuUnk::syncHandFromTouch() {
    unk_2688 = unk_2680 + gTouchCurX;
    unk_268c = unk_2684 + gTouchCurY;
}

void PocketMenuUnk::syncHandFromCursor() {
    unk_2688 = unk_220c.getFrameScreenX() - 2;
    unk_268c = unk_220c.getFrameScreenY() - 4;
}

void PocketMenuUnk::syncHandFromMover() {
    unk_2688 = unk_21f4.getX();
    unk_268c = unk_21f4.getY();
}

void PocketMenuUnk::pickUp(u32 idx) {
    if (PocketMenuUnk_IsPocketTarget(this, idx)) {
        s32 r4 = PocketMenuUnk_TargetToGridIndex(this, idx);
        unk_2787 = 2;
        unk_2784 = InventoryItemGrid_GetSlotItem(&unk_cc, r4);
        unk_2786 = InventoryItemGrid_GetSlotFlags(&unk_cc, r4);
        InventoryItemGrid_ClearSlot(&unk_cc, r4);
        InventoryItemGrid_SetHeldItem(&unk_cc, unk_2784, unk_2786);
    } else {
        if (PocketMenuUnk_IsLetterTarget(this, idx) != 0) {
            return;
        }
    }
}

void PocketMenuUnk::putHandBack(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        PocketMenuUnk_SetSlotItem(this, idx, unk_2784, unk_2786);
    }
    unk_2787 = 0;
}

void PocketMenuUnk::swapHandWith(u32 idx) {
    if (unk_2787 == 1) {
    } else if (unk_2787 == 2) {
        u16 a = unk_2784;
        u8 b = unk_2786;
        pickUp(idx);
        PocketMenuUnk_SetSlotItem(this, idx, a, b);
    }
}

void PocketMenuUnk::func_ov099_02295290() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
    func_ov099_022950a8();
}

s32 PocketMenuUnk::getCursorTargetX() {
    s32 r = PocketMenuUnk_GetTargetX(this, unk_278b);
    if (testFlags(0x20)) {
        r += 0x100;
    } else if (testFlags(0x10)) {
        r -= 0x100;
    }
    return r + 8;
}

s32 PocketMenuUnk::getCursorTargetY() { return PocketMenuUnk_GetTargetY(this, unk_278b); }

void PocketMenuUnk::hideCursor() {
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(0);
    unk_220c.vfunc_0c();
}

void PocketMenuUnk::func_ov099_0229519c() {
    if (testFlags(8)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.warpTo(a, b);
        clearFlags(8);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_220c.moveToEase(a, b, 3, 1);
        unk_278e = unk_8d;
        setMainState(8);
    }
}

void PocketMenuUnk::func_ov099_02295148() {
    s32 a = ((PopupChoiceMenuBody *)&unk_2270)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_2270)->getRowY(unk_2790);
    unk_220c.moveToLinear(a, b, 2);
    unk_278e = unk_8d;
    setMainState(8);
}

void PocketMenuUnk::func_ov099_022950fc() {
    unk_2790 = 0;
    s32 a = ((PopupChoiceMenuBody *)&unk_2270)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&unk_2270)->getRowY(unk_2790);
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(7);
}

void PocketMenuUnk::placeCursorOnTarget() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_220c.warpTo(a, b);
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
}

void PocketMenuUnk::func_ov099_022950a8() {
    unk_220c.setPoseIdle();
    unk_220c.vfunc_0c();
}

void PocketMenuUnk::func_ov099_02295088() {
    unk_220c.setPoseRelease();
    setMainState(0xa);
}

void PocketMenuUnk::func_ov099_02295068() {
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(4);
    setMainState(0xb);
}

void PocketMenuUnk::func_ov099_0229502c(u32 v) {
    unk_2134.hide(1);
    unk_278d = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(5);
    setMainState(0xd);
}

void PocketMenuUnk::func_ov099_02294fe0(u32 v) {
    unk_2134.hide(1);
    unk_278e = unk_8d;
    unk_278d = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(6);
    setMainState(0xe);
}

s32 PocketMenuUnk::runChosenAction() {
    switch (unk_278f) {
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
    ((PopupChoiceMenuBody *)&unk_2270)->setRowsFromIds((PopupChoiceIdList *)&unk_2270.unk_2f4, 0);
    s32 a = PocketMenuUnk_GetTargetX(this, unk_278c);
    s32 b = PocketMenuUnk_GetTargetY(this, unk_278c);
    unk_2270.placeNearPoint(a, b);
    PopupChoice_Open(&unk_2270, 0);
    setMainState(0x11);
}

void PocketMenuUnk::cancelOptions() {
    unk_278f = 1;
    placeCursorOnTarget();
    PopupChoice_Close(&unk_2270, 0);
    setMainState(0x13);
}

void PocketMenuUnk::addItemOptions() {
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(&unk_2270.unk_2f4, 0, 0);
    }
    ChoiceIdList_Add(&unk_2270.unk_2f4, 1, 1);
    ChoiceIdList_Add(&unk_2270.unk_2f4, 2, 1);
}

void PocketMenuUnk::openTargetOptions(u32 idx) {
    unk_278c = idx;
    ChoiceIdList_Clear(&unk_2270.unk_2f4, 1);
    if (PocketMenuUnk_IsPocketTarget(this, idx)) {
        addItemOptions();
        hideCursor();
        unk_2134.hide(1);
        showOptionList();
    }
}

void PocketMenuUnk::moveCursorInPockets(void *pad) {
    s32 col = unk_278b;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                unk_278b = unk_278b + 4;
                setFlags(0x10);
            } else {
                unk_278b = unk_278b - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                unk_278b = unk_278b - 4;
                setFlags(0x20);
            } else {
                unk_278b = unk_278b + 1;
            }
        }
    }
    if (!testFlags(0x30)) {
        if (MenuKeys_HasUp(pad)) {
            if (row > 0) {
                unk_278b = unk_278b - 5;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (row < 2) {
                unk_278b = unk_278b + 5;
            }
        }
    }
}

BOOL PocketMenuUnk::moveCursorByPad(void *pad) {
    u8 old = unk_278b;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (PocketMenuUnk_IsPocketTarget(this, unk_278b)) {
        moveCursorInPockets(pad);
    }
    if (old != unk_278b) {
        return TRUE;
    }
    return FALSE;
}

BOOL PocketMenuUnk::testFlags(u32 mask) {
    if (unk_2678 & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketMenuUnk::setFlags(u32 mask) { unk_2678 = unk_2678 | mask; }

void PocketMenuUnk::clearFlags(u32 mask) { unk_2678 = unk_2678 & ~mask; }

// ---------------------------------------------------------------------------------------------


