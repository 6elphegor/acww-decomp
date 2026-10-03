#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const char *a, s32 b, s32 c);
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
void func_0206f9fc(void *p, s32 a);
s32 Comm_IsSeqConfirmed(s32 a);
s32 func_02098ffc();
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
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern s32 gCurrentHeap;
// extra decls
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
void PlayerData_GetCurrent();
void func_020979b0();
s32 func_02039d74();
s32 func_020639e8(char *buf, char *fmt, ...);
BOOL Cell_HitTest(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02088730(u32 a, void *p, u32 b, u32 c, s32 d, u32 e, u32 f);
}

class ChestMenu;

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
    u8 unk_2f9[7];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32);
    u32 unk_00[0x108 / 4];
};

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fab4(s32, s32);
    void func_0206fb9c(u32, u32, u32, u8, u8, s32);
    void func_0206fc44();
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

class CommManager {
public:
    void endRecord(u32, u32);
    void writeRecord(u8 *, u32);
    void beginRecord();
    s32 getSendSeq();
    BOOL isOnline();
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
typedef void (ChestMenu::*Unk_ov102_02297520_Fn)();

// Vtable 0x02297520
class ChestMenu : public MenuProc {
public:
    ChestMenu()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2378() {}
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
    s32 handlePageKeys();
    void startPageSwitch();
    BOOL hitTestPageTab(s32, s32);
    void drawPageTabs();
    void confirm(s32);
    void setOkLabel(s32);
    Unk_020e0488 * allocTextLabel();
    void resetTextLabels();
    BOOL moveCursorByPad(void *, u32);
    void moveCursorOnTabs(void *, u32);
    void moveCursorOnButtons(void *);
    void moveCursorInBox(void *, u32);
    void moveCursorInPockets(void *, u32);
    void startExchange(u32);
    void startPutDown(u32);
    void startPickUp();
    void releaseCursor();
    void pressCursor();
    void mainAct0F();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
    void mainAct0A();
    void mainAct09();
    void mainAct08();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadObjGraphics();
    void loadPage();
    void loadTopBg();
    void loadInventoryBg();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initMembers();
    void transitionAct09();
    void transitionAct08();
    void transitionAct07();
    void transitionAct06();
    void transitionAct05();
    void transitionAct04();
    void startSlideOut();
    void transitionAct03();
    void transitionAct02();
    void transitionAct01();
    void transitionAct00();
    void showPage();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ BgVramTaskPair unk_94[1];
    /* 0xcc */ InventoryItemGrid unk_cc;
    /* 0xb2c */ LetterGrid unk_b2c;
    /* 0xb54 */ InventoryBg unk_b54;
    /* 0x2134 */ TouchPromptBalloon unk_2134;
    /* 0x21f4 */ CursorMotion unk_21f4;
    /* 0x220c */ MenuCursorBuf0 unk_220c;
    /* 0x2270 */ MenuErrorMessage unk_2270;
    /* 0x2378 */ Unk_020e0488 unk_2378[2];
    /* 0x23f8 */ u32 unk_23f8;
    /* 0x23fc */ s32 unk_23fc;
    /* 0x2400 */ s32 unk_2400;
    /* 0x2404 */ s32 unk_2404;
    /* 0x2408 */ s32 unk_2408;
    /* 0x240c */ s32 unk_240c;
    /* 0x2410 */ s32 unk_2410;
    /* 0x2414 */ u16 unk_2414[0x5a];
    /* 0x24c8 */ u16 unk_24c8;
    /* 0x24ca */ u8 unk_24ca;
    /* 0x24cb */ u8 unk_24cb;
    /* 0x24cc */ u8 unk_24cc;
    /* 0x24cd */ u8 unk_24cd;
    /* 0x24ce */ u8 unk_24ce;
    /* 0x24cf */ u8 unk_24cf;
    /* 0x24d0 */ u8 unk_24d0;
    /* 0x24d1 */ u8 unk_24d1;
    /* 0x24d2 */ u8 unk_24d2;
    /* 0x24d3 */ u8 unk_24d3;
    /* 0x24d4 */ u8 unk_24d4;
    /* 0x24d5 */ u8 unk_24d5;
    /* 0x24d6 */ u8 unk_24d6;
};

typedef ChestMenu S;

struct Unk_ov102_SceneEntry {
    ChestMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" ChestMenu *ChestMenu_Create();
extern "C" void ChestMenu_SetupBgLayers();

struct Unk_ov102_02297580_Ent {
    u32 a;
    u32 b;
};
extern "C" Unk_ov102_02297580_Ent sChestPageTabSprites[18];
extern "C" const u16 sChestPageSe[6];

extern "C" void ChestMenu_RefreshCursor(S *s);
extern "C" void ChestMenu_MoveCursorToTarget(S *s);
extern "C" void ChestMenu_HideCursor(S *s);
extern "C" s32 ChestMenu_GetCursorTargetY(S *s);
extern "C" s32 ChestMenu_GetCursorTargetX(S *s);
extern "C" void ChestMenu_ShowCursor(S *s);
extern "C" void ChestMenu_ExchangeHeldItem(S *s, u32 a);
extern "C" void ChestMenu_ReleaseHeldItem(S *s, u32 a);
extern "C" void ChestMenu_PickUpItem(S *s, u32 a);
extern "C" void ChestMenu_TrackFlyingItem(S *s);
extern "C" void ChestMenu_TrackCursor(S *s);
extern "C" void ChestMenu_TrackTouch(S *s);
extern "C" void ChestMenu_DrawHeldItem(S *s);
extern "C" void ChestMenu_UpdateNameBalloon(S *s);
extern "C" void ChestMenu_PlaceNameBalloon(S *s);
extern "C" BOOL ChestMenu_HasTouchMoved(S *s);
extern "C" void ChestMenu_MarkSlot(S *s, u32 a);
extern "C" void ChestMenu_ClearMarks(S *s);
extern "C" void ChestMenu_SetCursorSlot(S *s, u32 a);
extern "C" void ChestMenu_ClearCursorSlots(S *s);
extern "C" u32 ChestMenu_GetSlotFlags(S *s, u32 a);
extern "C" u32 ChestMenu_GetSlotItem(S *s, u32 a);
extern "C" BOOL ChestMenu_IsSlotEmpty(S *s, u32 a);
extern "C" BOOL ChestMenu_IsSlotDisabled(S *s, u32 a);
extern "C" void ChestMenu_DisableRejectedItems(S *s);
extern "C" BOOL ChestMenu_IsItemRejected(S *s, u32 a);
extern "C" s32 ChestMenu_GetSlotY(S *s, u32 a);
extern "C" s32 ChestMenu_GetSlotX(S *s, u32 a);
extern "C" u16 *ChestMenu_GetPageItems(S *s);
extern "C" void ChestMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c);
extern "C" BOOL ChestMenu_DropHeldItem(S *s, u32 a);
extern "C" u32 ChestMenu_FindSlotAt(S *s, u32 a, u32 b, u32 c);
extern "C" u32 ChestMenu_GridToBoxSlot(S *s, u32 a);
extern "C" u32 ChestMenu_GridToBoxSlotOr0F(S *s, u32 a);
extern "C" u32 ChestMenu_GridToPocketSlot(S *s, u32 v);
extern "C" u32 ChestMenu_ToGridSlot(S *s, u32 v);
extern "C" BOOL ChestMenu_IsButtonSlot(S *s, u32 v);
extern "C" BOOL ChestMenu_IsTabSlot(S *s, u32 v);
extern "C" BOOL ChestMenu_IsBoxSlot(S *s, u32 v);
extern "C" BOOL ChestMenu_IsPocketSlot(S *s, u32 v);
extern "C" void ChestMenu_CancelUploads(S *s);
extern "C" u32 ChestMenu_FindFreeBoxSlot(S *s);
extern "C" u32 ChestMenu_FindFreePocket(S *s);
extern "C" void ChestMenu_QuickMove(S *s, u8 a, u32 b);
extern "C" void ChestMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 c);
extern "C" void ChestMenu_StartFlyHeldItem(S *s, u32 a, u32 b);
extern "C" void ChestMenu_PickUpWithHand(S *s, u8 a);
extern "C" void ChestMenu_PickUpWithTouch(S *s, u8 a);
extern "C" void ChestMenu_TouchItem(S *s, u32 a);
extern "C" void ChestMenu_ResumeInput(S *s);
extern "C" void ChestMenu_StartButtonInput(S *s);
extern "C" void ChestMenu_StartTouchInput(S *s);

static inline BOOL Unk_ov102_022969bc_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" ChestMenu *ChestMenu_Create() { return new ChestMenu(); }

BOOL ChestMenu::vfunc_00() {
    initMembers();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL ChestMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL ChestMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_220c)->drawWrapped();
    }
    ChestMenu_DrawHeldItem(this);
    if (testFlags(0x80)) {
        InventoryItemGrid_DrawBox(&unk_cc, 0, unk_2400);
        drawPageTabs();
    }
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&unk_cc, 0, unk_23fc);
        unk_b2c.drawPocketLetters(0, unk_23fc);
        InventoryBg_DrawSprite(&unk_b54, unk_23fc);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov102_SceneEntry sChestMenuProfile;
extern "C" const u16 sChestPageSe[6];
extern "C" Unk_ov102_02297580_Ent sChestPageTabSprites[18];

extern "C" Unk_ov102_SceneEntry sChestMenuProfile = {ChestMenu_Create, 0x95, 0x99};

extern "C" const u16 sChestPageSe[6] = {0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23};

BOOL ChestMenu::execTransition() {
    static Unk_ov102_02297520_Fn tbl[10] = {
        &ChestMenu::transitionAct00, &ChestMenu::transitionAct01,
        &ChestMenu::transitionAct02, &ChestMenu::transitionAct03,
        &ChestMenu::transitionAct04, &ChestMenu::transitionAct05,
        &ChestMenu::transitionAct06, &ChestMenu::transitionAct07,
        &ChestMenu::transitionAct08, &ChestMenu::transitionAct09};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void ChestMenu::runMainState() {
    static Unk_ov102_02297520_Fn tbl[16] = {
        &ChestMenu::mainAct00, &ChestMenu::mainAct01,
        &ChestMenu::mainAct02, &ChestMenu::mainAct03,
        &ChestMenu::mainAct04, &ChestMenu::updateCursorMove,
        &ChestMenu::updateCursorPress, &ChestMenu::updateCursorRelease,
        &ChestMenu::mainAct08, &ChestMenu::mainAct09,
        &ChestMenu::mainAct0A, &ChestMenu::mainAct0B,
        &ChestMenu::mainAct0C, &ChestMenu::mainAct0D,
        &ChestMenu::mainAct0E, &ChestMenu::mainAct0F};
    (this->*tbl[unk_8d])();
}

BOOL ChestMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        u32 s = unk_8d;
        if (s == 0 || s == 1 || s == 3) {
            ChestMenu_HideCursor(this);
            unk_2134.hide(0);
            confirm(0);
        }
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL ChestMenu::execPhase3() {
    return TRUE;
}

BOOL ChestMenu::execPhase4() {
    return TRUE;
}

BOOL ChestMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void ChestMenu::showPage() {
    loadPage();
    beginSubSlideIn(2, 0, 1, 0x30);
    setSlideExtent(0x90);
    setFlags(0x80);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    unk_2400 = getSlideOffsetY();
}

void ChestMenu::transitionAct00() {
    ChestMenu_SetupBgLayers();
    loadInventoryBg();
    setTransitionState(1);
}

void ChestMenu::transitionAct01() {
    loadObjGraphics();
    InventoryItemGrid_LoadPockets(&unk_cc);
    ChestMenu_DisableRejectedItems(this);
    LetterGrid_LoadPocketLetters(&unk_b2c);
    unk_b2c.highlightLetterKinds(0xf);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    unk_23fc = getSlideOffsetY();
}

void ChestMenu::transitionAct02() {
    s32 r = stepSlideIn(0);
    applySlideOffset(6, 0, 0);
    unk_23fc = getSlideOffsetY();
    if (r != 0) {
        loadTopBg();
        showPage();
        setTransitionState(3);
    }
}

void ChestMenu::transitionAct03() {
    if (stepSlideIn(0)) {
        setPhase(2);
        ChestMenu_ResumeInput(this);
        clearFlags(0x40);
        if (unk_24cb != 0 && MenuCtrl_IsButtons()) {
            if (unk_24d1 < 0x1e || unk_24d1 > 0x23) {
                ((HandCursor *)&unk_220c)->setAnimAtEnd(4);
            }
            unk_220c.vfunc_0c();
            ChestMenu_TrackCursor(this);
            setMainState(4);
        }
    }
    applySlideOffset(4, 0, 0);
    unk_2400 = getSlideOffsetY();
}

void ChestMenu::startSlideOut() {
    unk_2134.hide(1);
    ChestMenu_HideCursor(this);
    beginSubSlideOut(2, 4, 1, 0x30);
    setSlideExtent(0x90);
    applySlideOffset(4, 0, 0);
    unk_2400 = getSlideOffsetY();
}

void ChestMenu::transitionAct04() {
    startSlideOut();
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    setTransitionState(5);
}

void ChestMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        clearFlags(0x80);
        beginSubSlideOut(8, 0, 0, 0x30);
        applySlideOffset(6, 0, 0);
        setTransitionState(6);
        transitionAct06();
    } else {
        applySlideOffset(4, 0, 0);
        unk_2400 = getSlideOffsetY();
    }
}

void ChestMenu::transitionAct06() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        setPhase(5);
        clearFlags(1);
        clearFlags(2);
    } else {
        applySlideOffset(6, 0, 0);
    }
    unk_23fc = getSlideOffsetY();
}

void ChestMenu::transitionAct07() {
    startSlideOut();
    setTransitionState(8);
    unk_24d5 = 4;
    transitionAct08();
}

void ChestMenu::transitionAct08() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        if (unk_24d5 != 0) {
            unk_24d5--;
        } else {
            showPage();
            setTransitionState(9);
        }
    } else {
        applySlideOffset(4, 0, 0);
        unk_2400 = getSlideOffsetY();
    }
}

void ChestMenu::transitionAct09() {
    transitionAct03();
}

void ChestMenu::initMembers() {
    unk_23f8 = 0;
    InventoryItemGrid_Init(&unk_cc, 1);
    unk_b2c.init(2);
    InventoryBg_Init(&unk_b54, 6);
    unk_24cd = 0x25;
    unk_21f4.reset();
    unk_24cb = 0;
    unk_24d1 = 0;
    unk_24d4 = 0;
    PlayerData_GetCurrent();
    func_020979b0();
    MI_CpuCopy8((void *)func_02039d74(), unk_2414, 0xb4);
    MenuCtrl_BackupPockets();
    unk_24d6 = 0;
}

void ChestMenu::releaseResources() {
    ChestMenu_CancelUploads(this);
    InventoryBg_Exit(&unk_b54);
    InventoryItemGrid_Exit(&unk_cc);
    resetTextLabels();
}

void ChestMenu::preInputUpdate() {
    preStateUpdate();
    unk_220c.vfunc_0c();
}

void ChestMenu::postInputUpdate() {
    postStateUpdate();
}

void ChestMenu::preStateUpdate() {
    ChestMenu_CancelUploads(this);
    InventoryBg_PreUpdate(&unk_b54);
    InventoryItemGrid_PreUpdate(&unk_cc);
    unk_b2c.updateCursorLift();
    resetTextLabels();
}

void ChestMenu::postStateUpdate() {
    InventoryBg_Update(&unk_b54);
    if (unk_2134.updatePrompt()) {
        ChestMenu_PlaceNameBalloon(this);
    }
}

extern "C" void ChestMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void ChestMenu::loadInventoryBg() {
    InventoryBg_Load(&unk_b54, 0);
}

void ChestMenu::loadTopBg() {
    s32 h = gCurrentHeap;
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_tra0.bsc", h, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_chest.bch", h, 4, 0x1b9, 0x1b9, 0x238);
    setOkLabel(0);
}

void ChestMenu::loadPage() {
    char buf[0x24];
    s32 h = gCurrentHeap;
    func_020639e8(buf, "menu/inventory/ten%d.bpl", unk_24d6);
    Gfx2d_LoadPaletteFile(buf, h, 4, 3, 3, 5);
    InventoryItemGrid_LoadBox(&unk_cc, ChestMenu_GetPageItems(this));
}

void ChestMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_b54);
}

void ChestMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        ChestMenu_StartButtonInput(this);
    } else {
        if (Unk_ov102_022969bc_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = ChestMenu_FindSlotAt(this, x, y, 1);
            if (r != 0x25) {
                ChestMenu_TouchItem(this, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x68 && y <= 0x78) {
                confirm(1);
            } else if (hitTestPageTab(x, y)) {
                startPageSwitch();
            }
        }
    }
}

void ChestMenu::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(0);
        unk_2134.setAutoCloseTimer(0x3c);
    } else if (testFlags(4) && ChestMenu_HasTouchMoved(this)) {
        ChestMenu_PickUpWithTouch(this, unk_24cc);
    } else {
        unk_2134.commitOpen();
    }
}

void ChestMenu::mainAct02() {
    if (MenuCtrl_IsForceCloseDue()) {
        ChestMenu_ReleaseHeldItem(this, unk_24ce);
        ChestMenu_HideCursor(this);
        unk_2134.hide(0);
        confirm(0);
    } else {
        s32 a, r;
        ChestMenu_TrackTouch(this);
        ChestMenu_ClearMarks(this);
        a = unk_2410 + 8;
        r = ChestMenu_FindSlotAt(this, unk_240c + 8, a, 0);
        if (r != 0x25) {
            if (gTouchHeld == 0) {
                if (ChestMenu_IsSlotDisabled(this, r)) {
                    ChestMenu_FlyHeldToFreeSlot(this, unk_24ce, a);
                } else {
                    s32 q = ChestMenu_DropHeldItem(this, r);
                    if (q == 0) {
                        ChestMenu_FlyHeldToFreeSlot(this, unk_24ce, a);
                    } else {
                        Inventory_PlayPutDownSe(q);
                        ChestMenu_ResumeInput(this);
                    }
                }
            } else {
                ChestMenu_MarkSlot(this, r);
            }
        } else if (gTouchHeld == 0) {
            ChestMenu_FlyHeldToFreeSlot(this, unk_24ce, a);
        }
    }
}

void ChestMenu::mainAct03() {
    if (checkSwitchToTouch()) {
        ChestMenu_StartTouchInput(this);
        unk_2134.hide(1);
    } else {
        u32 v = takeRepeatedKeys();
        if (moveCursorByPad((void *)v, 0)) {
            ChestMenu_UpdateNameBalloon(this);
            ChestMenu_MoveCursorToTarget(this);
            unk_2134.hide(0);
        } else {
            if (ChestMenu_IsSlotDisabled(this, unk_24d1)) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (ChestMenu_IsPocketSlot(this, unk_24d1) || ChestMenu_IsBoxSlot(this, unk_24d1)) {
                        if (!ChestMenu_IsSlotEmpty(this, unk_24d1)) {
                            startPickUp();
                        }
                    } else if (ChestMenu_IsButtonSlot(this, unk_24d1)) {
                        pressCursor();
                    } else if (ChestMenu_IsTabSlot(this, unk_24d1)) {
                        pressCursor();
                    }
                } else if (k & 0x800) {
                    if (ChestMenu_IsPocketSlot(this, unk_24d1) || ChestMenu_IsBoxSlot(this, unk_24d1)) {
                        if (!ChestMenu_IsSlotEmpty(this, unk_24d1)) {
                            u32 r = ChestMenu_IsPocketSlot(this, unk_24d1) ? ChestMenu_FindFreeBoxSlot(this) : ChestMenu_FindFreePocket(this);
                            if (r != 0x25) {
                                ChestMenu_QuickMove(this, unk_24d1, r);
                                unk_2134.hide(1);
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
                if ((k & 8) || (k & 2)) {
                    ChestMenu_HideCursor(this);
                    confirm(1);
                    unk_2134.hide(0);
                } else if (!handlePageKeys()) {
                    unk_2134.commitOpen();
                }
            }
        }
    }
}

void ChestMenu::mainAct04() {
    if (MenuCtrl_IsForceCloseDue()) {
        ChestMenu_ReleaseHeldItem(this, unk_24ce);
        ChestMenu_HideCursor(this);
        unk_2134.hide(0);
        confirm(0);
    } else {
        u32 v = takeRepeatedKeys();
        if (moveCursorByPad((void *)v, 1)) {
            ChestMenu_UpdateNameBalloon(this);
            ChestMenu_MoveCursorToTarget(this);
            unk_2134.hide(0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (ChestMenu_IsPocketSlot(this, unk_24d1) || ChestMenu_IsBoxSlot(this, unk_24d1)) {
                    if (!ChestMenu_IsSlotDisabled(this, unk_24d1)) {
                        if (ChestMenu_IsSlotEmpty(this, unk_24d1)) {
                            startPutDown(unk_24d1);
                        } else {
                            startExchange(unk_24d1);
                        }
                    }
                } else if (ChestMenu_IsTabSlot(this, unk_24d1)) {
                    pressCursor();
                }
            } else if (k & 2) {
                u32 t;
                if (ChestMenu_IsBoxSlot(this, unk_24ce) && (t = unk_24cf, t != unk_24d6)) {
                    ChestMenu_StartFlyHeldItem(this, (u8)(t + 0x1e), 4);
                } else if (((HandCursor *)&unk_220c)->getAnim() == 1) {
                    ChestMenu_StartFlyHeldItem(this, unk_24ce, 4);
                } else {
                    startPutDown(unk_24ce);
                }
            } else {
                if (!handlePageKeys()) {
                    ChestMenu_TrackCursor(this);
                    unk_2134.commitOpen();
                }
            }
        }
    }
}

void ChestMenu::updateCursorMove() {
    if (!((MenuCursorBase *)&unk_220c)->isMoving()) {
        setMainState(unk_24d3);
        if ((u8)(unk_24d3 + 0xfd) <= 1) {
            ChestMenu_SetCursorSlot(this, unk_24d1);
        }
        runMainState();
    }
    ChestMenu_TrackCursor(this);
}

void ChestMenu::updateCursorPress() {
    if (((HandCursor *)&unk_220c)->isAnimDone()) {
        if (ChestMenu_IsTabSlot(this, unk_24d1)) {
            u32 v = (u8)(unk_24d1 - 0x1e);
            if (v == unk_24d6) {
                releaseCursor();
            } else {
                unk_24d6 = v;
                startPageSwitch();
            }
        } else if (unk_24d1 == 0x24) {
            confirm(1);
        } else {
            releaseCursor();
        }
    }
}

void ChestMenu::updateCursorRelease() {
    if (((HandCursor *)&unk_220c)->isAnimDone()) {
        ChestMenu_RefreshCursor(this);
        if (unk_24cb == 1) {
            setMainState(4);
        } else {
            setMainState(3);
        }
    }
}

void ChestMenu::mainAct08() {
    if (((MenuCursorBase *)&unk_220c)->func_ov002_02202928()) {
        ChestMenu_PickUpWithHand(this, unk_24d1);
        setMainState(9);
    }
}

void ChestMenu::mainAct09() {
    if (((HandCursor *)&unk_220c)->isAnimDone()) {
        setMainState(unk_24d3);
    }
    ChestMenu_TrackCursor(this);
}

void ChestMenu::mainAct0A() {
    if (!((MenuCursorBase *)&unk_220c)->func_ov002_02202928()) {
        u32 a = unk_24d2;
        if (unk_24d1 == a) {
            ChestMenu_DropHeldItem(this, a);
            ChestMenu_UpdateNameBalloon(this);
            setMainState(3);
            Inventory_PlayPutDownSe();
        } else {
            ChestMenu_StartFlyHeldItem(this, a, 4);
        }
    } else {
        ChestMenu_TrackCursor(this);
    }
}

void ChestMenu::mainAct0B() {
    if (!((MenuCursorBase *)&unk_220c)->func_ov002_022028fc()) {
        ChestMenu_ExchangeHeldItem(this, unk_24d2);
        setFlags(0x40);
        setMainState(0xc);
        ChestMenu_UpdateNameBalloon(this);
    } else {
        setMainState(3);
    }
}

void ChestMenu::mainAct0C() {
    if (((HandCursor *)&unk_220c)->isAnimDone()) {
        setMainState(unk_24d3);
    }
    if (((MenuCursorBase *)&unk_220c)->func_ov002_02202928()) {
        if (testFlags(0x40)) {
            clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        ChestMenu_TrackCursor(this);
    }
}

void ChestMenu::mainAct0D() {
    if (unk_21f4.update()) {
        if (testFlags(0x200)) {
            clearFlags(0x200);
            ChestMenu_TrackFlyingItem(this);
        } else {
            ChestMenu_ReleaseHeldItem(this, unk_24ce);
            ChestMenu_ResumeInput(this);
            Inventory_PlayPutDownSe();
        }
    } else {
        ChestMenu_TrackFlyingItem(this);
    }
}

void ChestMenu::mainAct0E() {
    if (unk_2270.update(1)) {
        setMainState(unk_24d3);
        ((HandCursor *)&unk_220c)->enableObjWindow();
    }
}

// ---- handlers / methods
void ChestMenu::mainAct0F() {
    if (unk_24d5 != 0) {
        unk_24d5--;
    } else {
        unk_8c = 4;
        setPhase(1);
        unk_2134.hide(1);
        ChestMenu_HideCursor(this);
    }
}

void ChestMenu_StartTouchInput(S *s) {
    ChestMenu_HideCursor(s);
    ChestMenu_ClearCursorSlots(s);
    s->setMainState(0);
}

void ChestMenu_StartButtonInput(S *s) {
    s->unk_24cd = 0x25;
    ChestMenu_ShowCursor(s);
    s->restartKeyRepeat();
    ChestMenu_UpdateNameBalloon(s);
    s->setMainState(3);
    ChestMenu_SetCursorSlot(s, s->unk_24d1);
}

void ChestMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch()) {
        ChestMenu_StartTouchInput(s);
    } else {
        ChestMenu_StartButtonInput(s);
    }
}

void ChestMenu_TouchItem(S *s, u32 a) {
    s->unk_24cc = a;
    s->setMainState(1);
    u32 r6 = gTouchCurX;
    u32 r7 = gTouchCurY;
    s->unk_2404 = ChestMenu_GetSlotX(s, s->unk_24cc) - r6;
    s->unk_2408 = ChestMenu_GetSlotY(s, s->unk_24cc) - r7;
    s->unk_24cd = a;
    s->unk_2134.queueOpen();
    if (ChestMenu_IsSlotDisabled(s, a)) {
        s->clearFlags(4);
    } else {
        s->setFlags(4);
        Inventory_PlayTouchSe();
    }
}

void ChestMenu_PickUpWithTouch(S *s, u8 a) {
    s->unk_24ce = a;
    s->unk_24d0 = a;
    s->unk_24cf = s->unk_24d6;
    s->unk_2134.hide(1);
    ChestMenu_PickUpItem(s, a);
    if (s->unk_24cb == 1) {
        s->setMainState(2);
    }
    ChestMenu_TrackTouch(s);
    Inventory_PlayPickUpSe();
}

void ChestMenu_PickUpWithHand(S *s, u8 a) {
    s->unk_24ce = a;
    s->unk_24d0 = a;
    s->unk_24cf = s->unk_24d6;
    s->unk_2134.hide(1);
    ChestMenu_PickUpItem(s, a);
    if (s->unk_24cb == 1) {
        s->unk_24d3 = 4;
    }
    ChestMenu_TrackCursor(s);
    Inventory_PlayPickUpSe();
}

void ChestMenu_StartFlyHeldItem(S *s, u32 a, u32 b) {
    s->unk_24ce = a;
    s->unk_21f4.setPos(s->unk_240c, s->unk_2410);
    s32 t = ChestMenu_GetSlotY(s, a);
    if (ChestMenu_IsTabSlot(s, a)) {
        t -= 8;
    }
    s32 u = ChestMenu_GetSlotX(s, a);
    s->unk_21f4.startLinear(u, t, b);
    s->unk_21f4.update();
    ChestMenu_TrackFlyingItem(s);
    if (ChestMenu_IsTabSlot(s, a)) {
        s->setFlags(0x200);
    } else {
        s->clearFlags(0x200);
    }
    s->setMainState(0xd);
}

void ChestMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 c) {
    u32 r = 0x25;
    if (c >= 0x6c) {
        if (ChestMenu_IsBoxSlot(s, a)) {
            r = ChestMenu_FindFreePocket(s);
        }
    } else {
        if (ChestMenu_IsPocketSlot(s, a)) {
            r = ChestMenu_FindFreeBoxSlot(s);
        }
    }
    if (r != 0x25) {
        a = r;
    }
    ChestMenu_StartFlyHeldItem(s, a, 4);
}

void ChestMenu_QuickMove(S *s, u8 a, u32 b) {
    ChestMenu_PickUpItem(s, a);
    s->unk_240c = ChestMenu_GetSlotX(s, a);
    s->unk_2410 = ChestMenu_GetSlotY(s, a);
    ChestMenu_StartFlyHeldItem(s, b, 4);
}

u32 ChestMenu_FindFreePocket(S *s) {
    s32 r = func_02098ffc();
    if (r == -1) {
        return 0x25;
    }
    return (u8)r;
}

u32 ChestMenu_FindFreeBoxSlot(S *s) {
    u16 *p = ChestMenu_GetPageItems(s);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            return (u8)(i + 0xf);
        }
    }
    return 0x25;
}

void ChestMenu_CancelUploads(S *s) {
    ((BgVramTask *)s->unk_94)->cancel();
}

BOOL ChestMenu_IsPocketSlot(S *s, u32 v) {
    if (v <= 0xe) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChestMenu_IsBoxSlot(S *s, u32 v) {
    if (v >= 0xf && v <= 0x1d) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChestMenu_IsTabSlot(S *s, u32 v) {
    if (v >= 0x1e && v <= 0x23) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChestMenu_IsButtonSlot(S *s, u32 v) {
    if (v == 0x24) {
        return TRUE;
    }
    return FALSE;
}

u32 ChestMenu_ToGridSlot(S *s, u32 v) {
    if (ChestMenu_IsPocketSlot(s, v)) {
        return (u8)v;
    }
    if (ChestMenu_IsBoxSlot(s, v)) {
        return ChestMenu_GridToBoxSlotOr0F(s, v);
    }
    return 0;
}

u32 ChestMenu_GridToPocketSlot(S *s, u32 v) {
    if (v <= 0xe) {
        return (u8)v;
    }
    return 0x25;
}

u32 ChestMenu_FindSlotAt(S *s, u32 a, u32 b, u32 c)
{
    u32 r = InventoryItemGrid_FindPocketSlotAt(&s->unk_cc);
    if (r != 0x23) {
        if (c != 0 && InventoryItemGrid_IsSlotEmpty(&s->unk_cc, r)) {
            return 0x25;
        }
        return ChestMenu_GridToPocketSlot(s, r);
    }
    r = InventoryItemGrid_FindBoxSlotAt(&s->unk_cc, a, b);
    if (r == 0x23) {
        goto fail;
    }
    if (c != 0 && InventoryItemGrid_IsSlotEmpty(&s->unk_cc, r)) {
        return 0x25;
    }
    return ChestMenu_GridToBoxSlot(s, r);
fail:
    return 0x25;
}

BOOL ChestMenu_DropHeldItem(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        u32 t = ChestMenu_GetSlotItem(s, a);
        if (t != 0xfff1) {
            u32 u = ChestMenu_GetSlotFlags(s, a);
            ChestMenu_SetSlotItem(s, s->unk_24ce, t, u);
        }
        ChestMenu_ReleaseHeldItem(s, a);
        return TRUE;
    }
    return FALSE;
}

void ChestMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        u32 t = ChestMenu_ToGridSlot(s, a);
        InventoryItemGrid_SetSlotItem(&s->unk_cc, t, b, c);
        InventoryItemGrid_RefreshSlot(&s->unk_cc, t);
    } else if (ChestMenu_IsTabSlot(s, a)) {
        s32 t = (s->unk_24cf - 1) * 0xf;
        s->unk_2414[t + s->unk_24d0] = b;
    }
}

u32 ChestMenu_GridToBoxSlotOr0F(S *s, u32 a)
{
    if (ChestMenu_IsBoxSlot(s, a)) {
        return (u8)a;
    }
    return 0xf;
}

u32 ChestMenu_GridToBoxSlot(S *s, u32 a)
{
    if (a >= 0xf && a <= 0x1d) {
        return (u8)a;
    }
    return 0x25;
}

u16 *ChestMenu_GetPageItems(S *s)
{
    return s->unk_2414 + s->unk_24d6 * 0xf;
}

s32 ChestMenu_GetSlotX(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotX(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    if (ChestMenu_IsButtonSlot(s, a)) {
        return 0xc4;
    }
    if (ChestMenu_IsTabSlot(s, a)) {
        return func_02087e14(&sChestPageTabSprites[(a - 0x1e) * 3]) + 0x80;
    }
    return 0;
}

s32 ChestMenu_GetSlotY(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotY(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    if (ChestMenu_IsButtonSlot(s, a)) {
        return 0x70;
    }
    if (ChestMenu_IsTabSlot(s, a)) {
        return func_02087e0c(&sChestPageTabSprites[(a - 0x1e) * 3]) + 0x68;
    }
    return 0;
}

BOOL ChestMenu_IsItemRejected(S *s, u32 a)
{
    if (ChestMenu_IsSlotEmpty(s, a)) {
        return FALSE;
    }
    if (ChestMenu_GetSlotFlags(s, a)) {
        return TRUE;
    }
    u32 t = ChestMenu_GetSlotItem(s, a);
    if (InvItem_IsTurnipFishOrInsect(t)) {
        return TRUE;
    }
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    return FALSE;
}

void ChestMenu_DisableRejectedItems(S *s)
{
    u32 i = 0;
    do {
        if (ChestMenu_IsItemRejected(s, i)) {
            InventoryItemGrid_DisableSlot(&s->unk_cc, ChestMenu_ToGridSlot(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

BOOL ChestMenu_IsSlotDisabled(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    return FALSE;
}

BOOL ChestMenu_IsSlotEmpty(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    return TRUE;
}

u32 ChestMenu_GetSlotItem(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotItem(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    return 0xfff1;
}

u32 ChestMenu_GetSlotFlags(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotFlags(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
    return 0xf1;
}

void ChestMenu_ClearCursorSlots(S *s)
{
    InventoryItemGrid_ClearCursorSlot(&s->unk_cc);
    s->unk_b2c.clearCursorSlot();
}

void ChestMenu_SetCursorSlot(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_SetCursorSlot(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
        s->unk_b2c.clearCursorSlot();
    } else {
        ChestMenu_ClearCursorSlots(s);
    }
}

void ChestMenu_ClearMarks(S *s)
{
    InventoryItemGrid_ClearMarks(&s->unk_cc);
    s->unk_b2c.clearMarks();
}

void ChestMenu_MarkSlot(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_MarkSlot(&s->unk_cc, ChestMenu_ToGridSlot(s, a));
    }
}

BOOL ChestMenu_HasTouchMoved(S *s)
{
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void ChestMenu_PlaceNameBalloon(S *s)
{
    s32 a = ChestMenu_GetSlotX(s, s->unk_24cd) - 0x6d;
    s32 b = ChestMenu_GetSlotY(s, s->unk_24cd) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    if (b < -0x5c) {
        ((LabelBalloon *)&s->unk_2134)->setPopDownward();
        b = ChestMenu_GetSlotY(s, s->unk_24cd) - 0x50;
    } else {
        ((LabelBalloon *)&s->unk_2134)->setPopUpward();
    }
    ((LabelBalloon *)&s->unk_2134)->setPos(a, b);
    if (ChestMenu_IsPocketSlot(s, s->unk_24cd) || ChestMenu_IsBoxSlot(s, s->unk_24cd)) {
        u32 t = ChestMenu_ToGridSlot(s, s->unk_24cd);
        InventoryItemGrid_ShowSlotName(&s->unk_cc, &s->unk_2134, t);
    }
}

void ChestMenu_UpdateNameBalloon(S *s)
{
    if (ChestMenu_IsPocketSlot(s, s->unk_24d1) || ChestMenu_IsBoxSlot(s, s->unk_24d1)) {
        if (ChestMenu_IsSlotEmpty(s, s->unk_24d1)) {
            s->unk_2134.cancelQueuedOpen();
        } else {
            s->unk_24cd = s->unk_24d1;
            s->unk_2134.queueOpen();
        }
    } else {
        s->unk_2134.cancelQueuedOpen();
    }
}

void ChestMenu_DrawHeldItem(S *s)
{
    if (!s->testFlags(0x40)) {
        u32 t = s->unk_24cb;
        if (t != 0) {
            if (t == 1) {
                InventoryItemGrid_DrawHeldItem(&s->unk_cc, s->unk_240c, s->unk_2410);
            }
        }
    }
}

void ChestMenu_TrackTouch(S *s)
{
    s->unk_240c = s->unk_2404 + gTouchCurX;
    s->unk_2410 = s->unk_2408 + gTouchCurY;
}

void ChestMenu_TrackCursor(S *s)
{
    s->unk_240c = ((MenuCursorBase *)&s->unk_220c)->getFrameScreenX() - 2;
    s->unk_2410 = ((MenuCursorBase *)&s->unk_220c)->getFrameScreenY() - 4;
    if (((HandCursor *)&s->unk_220c)->getAnim() == 1) {
        s->unk_2410 -= 0x16;
    }
}

void ChestMenu_TrackFlyingItem(S *s)
{
    s->unk_240c = s->unk_21f4.getX();
    s->unk_2410 = s->unk_21f4.getY();
}

void ChestMenu_PickUpItem(S *s, u32 a)
{
    if (ChestMenu_IsPocketSlot(s, a) || ChestMenu_IsBoxSlot(s, a)) {
        u32 t = ChestMenu_ToGridSlot(s, a);
        s->unk_24cb = 1;
        s->unk_24c8 = InventoryItemGrid_GetSlotItem(&s->unk_cc, t);
        s->unk_24ca = InventoryItemGrid_GetSlotFlags(&s->unk_cc, t);
        InventoryItemGrid_ClearSlot(&s->unk_cc, t);
        InventoryItemGrid_SetHeldItem(&s->unk_cc, s->unk_24c8, s->unk_24ca);
    }
}

void ChestMenu_ReleaseHeldItem(S *s, u32 a)
{
    if (s->unk_24cb == 1) {
        ChestMenu_SetSlotItem(s, a, s->unk_24c8, s->unk_24ca);
    }
    s->unk_24cb = 0;
}

void ChestMenu_ExchangeHeldItem(S *s, u32 a)
{
    if (s->unk_24cb == 1) {
        u32 h = s->unk_24c8;
        u32 b = s->unk_24ca;
        ChestMenu_PickUpItem(s, a);
        ChestMenu_SetSlotItem(s, a, h, b);
    }
}

void ChestMenu_ShowCursor(S *s)
{
    s32 a = ChestMenu_GetCursorTargetX(s);
    s32 b = ChestMenu_GetCursorTargetY(s);
    ((MenuCursorBase *)&s->unk_220c)->warpTo(a, b);
    if (ChestMenu_IsButtonSlot(s, s->unk_24d1)) {
        ((MenuCursor *)&s->unk_220c)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&s->unk_220c)->setAnimIfChanged(1);
    }
    ChestMenu_RefreshCursor(s);
}

s32 ChestMenu_GetCursorTargetX(S *s)
{
    s32 r = ChestMenu_GetSlotX(s, s->unk_24d1);
    if (s->testFlags(0x20)) {
        r += 0x100;
    } else if (s->testFlags(0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

s32 ChestMenu_GetCursorTargetY(S *s)
{
    return ChestMenu_GetSlotY(s, s->unk_24d1);
}

void ChestMenu_HideCursor(S *s)
{
    ((MenuCursor *)&s->unk_220c)->setAnimIfChanged(0);
    s->unk_220c.vfunc_0c();
}

void ChestMenu_MoveCursorToTarget(S *s)
{
    if (s->testFlags(8)) {
        s32 a = ChestMenu_GetCursorTargetX(s);
        s32 b = ChestMenu_GetCursorTargetY(s);
        ((MenuCursorBase *)&s->unk_220c)->warpTo(a, b);
        s->clearFlags(8);
    } else {
        s32 a = ChestMenu_GetCursorTargetX(s);
        s32 b = ChestMenu_GetCursorTargetY(s);
        ((MenuCursorBase *)&s->unk_220c)->moveToEase(a, b, 3, 1);
        s->unk_24d3 = s->unk_8d;
        s->setMainState(5);
        if (s->testFlags(0x100)) {
            s->unk_220c.vfunc_0c();
            s->clearFlags(0x100);
        }
    }
}

// ---- free functions (plain symbols)
void ChestMenu_RefreshCursor(S *s)
{
    ((MenuCursorBase *)&s->unk_220c)->setPoseIdle();
    s->unk_220c.vfunc_0c();
}

void ChestMenu::pressCursor() {
    ((MenuCursor *)&unk_220c)->setPosePress();
    setMainState(6);
}

void ChestMenu::releaseCursor() {
    ((MenuCursorBase *)&unk_220c)->setPoseRelease();
    setMainState(7);
}

void ChestMenu::startPickUp() {
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(4);
    setMainState(8);
}

void ChestMenu::startPutDown(u32 v) {
    unk_2134.hide(1);
    unk_24d2 = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(5);
    setMainState(0xa);
}

void ChestMenu::startExchange(u32 v) {
    unk_2134.hide(1);
    unk_24d3 = unk_8d;
    unk_24d2 = v;
    ((MenuCursor *)&unk_220c)->setAnimIfChanged(6);
    setMainState(0xb);
}

void ChestMenu::moveCursorInPockets(void *pad, u32 b) {
    s32 col = unk_24d1;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                if (b == 1) {
                    unk_24d1 = unk_24d1 + 4;
                } else {
                    unk_24d1 = 0x24;
                }
                setFlags(0x10);
                return;
            } else {
                unk_24d1 = unk_24d1 - 1;
                col = col - 1;
                goto next;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                if (b == 1) {
                    unk_24d1 = unk_24d1 - 4;
                    setFlags(0x20);
                } else {
                    unk_24d1 = 0x24;
                }
                return;
            }
            unk_24d1 = unk_24d1 + 1;
            col = col + 1;
        }
    }
next:
    if (MenuKeys_HasUp(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 5;
        } else {
            unk_24d1 = col + 0x19;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (row < 2) {
            unk_24d1 = unk_24d1 + 5;
        }
    }
}

void ChestMenu::moveCursorInBox(void *pad, u32 b) {
    s32 col = unk_24d1 - 0xf;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                switch (row) {
                case 0:
                    unk_24d1 = 0x20;
                    break;
                case 1:
                    unk_24d1 = 0x23;
                    break;
                case 2:
                default:
                    if (b == 1) {
                        unk_24d1 = unk_24d1 + 4;
                    } else {
                        unk_24d1 = 0x24;
                    }
                    break;
                }
                setFlags(0x10);
                return;
            } else {
                unk_24d1 = unk_24d1 - 1;
                col = col - 1;
                goto next;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                switch (row) {
                case 0:
                    unk_24d1 = 0x1e;
                    break;
                case 1:
                    unk_24d1 = 0x21;
                    break;
                case 2:
                default:
                    if (b == 1) {
                        unk_24d1 = unk_24d1 - 4;
                        setFlags(0x20);
                    } else {
                        unk_24d1 = 0x24;
                    }
                    break;
                }
                return;
            }
            unk_24d1 = unk_24d1 + 1;
            col = col + 1;
        }
    }
next:
    if (MenuKeys_HasUp(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 5;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (row < 2) {
            unk_24d1 = unk_24d1 + 5;
        } else {
            unk_24d1 = col;
        }
    }
}

void ChestMenu::moveCursorOnButtons(void *pad) {
    if (MenuKeys_HasUp(pad)) {
        unk_24d1 = 0x21;
    }
    if (MenuKeys_HasRight(pad)) {
        unk_24d1 = 0;
        setFlags(0x20);
    } else if (MenuKeys_HasLeft(pad)) {
        unk_24d1 = 4;
    }
}

void ChestMenu::moveCursorOnTabs(void *pad, u32 b) {
    s32 col = unk_24d1 - 0x1e;
    s32 row = 0;
    while (col >= 3) {
        col -= 3;
        row++;
    }
    if (MenuKeys_HasRight(pad)) {
        if (col < 2) {
            unk_24d1 = unk_24d1 + 1;
        } else {
            setFlags(0x20);
            unk_24d1 = row * 5 + 0xf;
            return;
        }
    } else if (MenuKeys_HasLeft(pad)) {
        if (col > 0) {
            unk_24d1 = unk_24d1 - 1;
        } else {
            unk_24d1 = row * 5 + 0x13;
            return;
        }
    }
    if (MenuKeys_HasUp(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 3;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (row < 1) {
            unk_24d1 = unk_24d1 + 3;
        } else if (b != 1) {
            unk_24d1 = 0x24;
        }
    }
}

BOOL ChestMenu::moveCursorByPad(void *pad, u32 b) {
    u8 old = unk_24d1;
    clearFlags(0x30);
    clearFlags(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (ChestMenu_IsPocketSlot(this, unk_24d1)) {
        moveCursorInPockets(pad, b);
    } else if (ChestMenu_IsBoxSlot(this, unk_24d1)) {
        moveCursorInBox(pad, b);
        if (b == 1) {
            if (ChestMenu_IsTabSlot(this, unk_24d1)) {
                ((MenuCursor *)&unk_220c)->setAnimIfChanged(1);
            }
        }
    } else if (ChestMenu_IsButtonSlot(this, unk_24d1)) {
        moveCursorOnButtons(pad);
    } else if (ChestMenu_IsTabSlot(this, unk_24d1)) {
        moveCursorOnTabs(pad, b);
        if (b == 1) {
            if (!ChestMenu_IsTabSlot(this, unk_24d1)) {
                ((HandCursor *)&unk_220c)->setAnimAtEnd(4);
            }
        }
    }
    if (ChestMenu_IsButtonSlot(this, unk_24d1) != ChestMenu_IsButtonSlot(this, old)) {
        if (ChestMenu_IsButtonSlot(this, unk_24d1)) {
            ((MenuCursor *)&unk_220c)->switchToAnim07();
        } else {
            ((MenuCursor *)&unk_220c)->switchToAnim01();
        }
        setFlags(0x100);
    }
    if (old != unk_24d1) {
        return TRUE;
    }
    return FALSE;
}

void ChestMenu::resetTextLabels() {
    s32 i;
    unk_24d4 = 0;
    for (i = 0; i < 2; i++) {
        ((Unk_020e0488 *)&unk_2378[i])->func_0206fc44();
    }
}

Unk_020e0488 *ChestMenu::allocTextLabel() {
    if (unk_24d4 >= 2) {
        return &unk_2378[1];
    }
    unk_24d4 = unk_24d4 + 1;
    return &unk_2378[unk_24d4 - 1];
}

void ChestMenu::setOkLabel(s32 v) {
    u8 c = 1;
    if (v) {
        c = 0xf;
    }
    Unk_020e0488 *o = allocTextLabel();
    o->func_0206fb9c(4, 0x1d6, 6, c, 9, 0);
    func_0206f9fc(o, 0x88);
    o->func_0206fab4(1, 0);
}

void ChestMenu::confirm(s32 v) {
    Snd_PlaySe(0x27);
    if (v) {
        unk_24d5 = 5;
    } else {
        unk_24d5 = 0;
    }
    setMainState(0xf);
    setOkLabel(1);
    MenuCtrl_SetResult(1);
    PlayerData_GetCurrent();
    func_020979b0();
    MI_CpuCopy8(unk_2414, (u8 *)func_02039d74(), 0xb4);
}

void ChestMenu::drawPageTabs() {
    u32 p0 = unk_2400 + 0x60;
    s32 i = 0, j = 0;
    s32 m = -1;
    u32 z0 = 0, z1 = 0, z2 = 0;
    do {
        u32 p;
        u32 q;
        if (i == unk_24d6) {
            p = p0 + 2;
            q = 4;
        } else {
            p = p0;
            q = 5;
        }
        func_02088730(1, &sChestPageTabSprites[j], 0x80, p, m, 1, z0);
        func_02088730(1, &sChestPageTabSprites[j + 1], 0x80, p, q, 1, z1);
        func_02088730(1, &sChestPageTabSprites[j + 2], 0x80, p0, m, 1, z2);
        i++;
        j += 3;
    } while (i < 6);
}

BOOL ChestMenu::hitTestPageTab(s32 x, s32 y) {
    s32 i, j;
    s32 px = x - 0x80;
    s32 py = y - 0x60;
    for (i = 0, j = 0; i < 6; i++, j += 3) {
        if (i != unk_24d6) {
            if (Cell_HitTest(&sChestPageTabSprites[j], px, py, 2, 2)) {
                unk_24d6 = i;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void ChestMenu::startPageSwitch() {
    unk_2134.hide(1);
    ChestMenu_HideCursor(this);
    unk_8c = 7;
    setPhase(1);
    Snd_PlaySe(sChestPageSe[unk_24d6]);
    setFlags(0x40);
}

s32 ChestMenu::handlePageKeys() {
    s32 dir = 0;
    u32 keys = gPad[1];
    if (keys & 0x200) {
        dir = -1;
    } else if (keys & 0x100) {
        dir = 1;
    }
    if (dir) {
        dir = dir + unk_24d6;
        if (dir < 0) {
            dir = 5;
        } else if (dir >= 6) {
            dir = 0;
        }
        unk_24d6 = dir;
        startPageSwitch();
    }
    return 0;
}

BOOL ChestMenu::testFlags(u32 mask) {
    if (unk_23f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void ChestMenu::setFlags(u32 mask) { unk_23f8 = unk_23f8 | mask; }

void ChestMenu::clearFlags(u32 mask) { unk_23f8 = unk_23f8 & ~mask; }

extern "C" Unk_ov102_02297580_Ent sChestPageTabSprites[18] = {
    {0x402e00ac, 0x000061c6},
    {0x402e00ac, 0x0000411e},
    {0x402e00ae, 0x0000111e},
    {0x404200ac, 0x000061c8},
    {0x404200ac, 0x0000511e},
    {0x404200ae, 0x0000111e},
    {0x405600ac, 0x000061ca},
    {0x405600ac, 0x0000511e},
    {0x405600ae, 0x0000111e},
    {0x403800bf, 0x000061cc},
    {0x403800bf, 0x0000511e},
    {0x403800c1, 0x0000111e},
    {0x404c00bf, 0x000061ce},
    {0x404c00bf, 0x0000511e},
    {0x404c00c1, 0x0000111e},
    {0x406000bf, 0x000061d0},
    {0x406000bf, 0x0000511e},
    {0x406000c1, 0xffff111e},
};
