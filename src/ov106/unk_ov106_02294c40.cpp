#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

// ov106: scene overlay (class MailboxMenu, vtable 0x02298180, 0x3f80 bytes).

class MailboxMenu;
typedef void (MailboxMenu::*Unk_ov106_02298180_Fn)();

struct Unk_ov106_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

extern "C" {
s32 _ZN10LetterGrid18findPocketLetterAtEii(void *self);
void _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(void *self, void *p, s32 x);
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 data_021edb68;
extern s32 gCurrentHeap;
extern u16 gPad[];

void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_LoadCharFile(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const char *a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Snd_PlaySe(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void func_0203c42c(void *a, void *p, s32 skip, s32 set);
u16 Item_MakePaper(void *p, s32 a);
void func_02065af0(void *a);
void * func_02065c8c(void *p);
void func_02065c94(void *a);
void func_02065e70(void *p, void *q);
BOOL func_0206e61c();
void func_0206e63c();
void func_0206ecf8(s32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_02096914(void *a, s32 b);
void * PlayerData_GetCurrent();
s32 func_020979d8();
s32 func_020991fc();
void * ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *a);
BOOL MenuKeys_HasRight(u32 pad);
BOOL MenuKeys_HasLeft(u32 pad);
BOOL MenuKeys_HasDown(u32 pad);
BOOL MenuKeys_HasUp(u32 pad);
void ChoiceIdList_Clear(void *p, u32 v);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
s32 PopupChoice_MoveCursor(void *a, s32 b, void *c, u32 d);
s32 PopupChoice_TickDecideDelay(void *a);
u32 PopupChoice_DecideCancel(void *p, s32 a);
void PopupChoice_DecideRow(void *a, s32 b, s32 c);
void PopupChoice_ForceClose(void *a);
void PopupChoice_Update(void *a);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);
void MenuButtons_LoadTextColors(void *a);
s32 Inventory_PlayPickUpSe();
s32 Inventory_PlayTouchSe();
s32 Inventory_PlayPutDownSe();
void InventoryBg_DrawSprite(void *self, s32 a);
void InventoryBg_Exit(void *a);
void InventoryBg_Update(void *a);
void InventoryBg_PreUpdate(void *a);
void InventoryBg_LoadObjGraphics(void *a);
void InventoryBg_Load(void *a, s32 b);
void InventoryBg_Init(void *a, s32 b);
void InventoryItemGrid_DrawPockets(void *self, s32 a, s32 b);
void InventoryItemGrid_DisableSlotRange(void *p, s32 a, s32 b);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_ClearCursorSlot(void *p);
void InventoryItemGrid_LoadPockets(void *a);
void InventoryItemGrid_Exit(void *a);
void InventoryItemGrid_PreUpdate(void *a);
void InventoryItemGrid_Init(void *a, s32 b);
BOOL LetterGrid_UpdatePopAnim(void *p);
void LetterGrid_StartPopAnim(void *p);
void LetterGrid_SetLetters23(void *a, void *b);
void LetterGrid_LoadPocketLetters(void *a);
BOOL LetterGrid_IsSlotEmpty(void *p, u32 a);
s32 LetterGrid_GetSlotY(void *p, u32 a);
s32 LetterGrid_GetSlotX(void *p, u32 a);

MailboxMenu *MailboxMenu_Create();
void MailboxMenu_SetupBgLayers();
}

class Unk_02065554;
class Unk_0206d0a0;
class Unk_0206d1d4_Src;
class Unk_020970b8;
class PlayerData;
class Letter;
class LabelBalloon;
class HandCursor;
class LabelButton;
class BgVramTask;
class BgVramTaskPair;
class PopupChoiceMenuBody;
class PopupChoiceIdList;
class MenuCursorBase;
class MenuBottomButtonsBody;
class MenuErrorMessage;
class TouchPromptBalloon;
class PopupChoiceMenu;
class CursorMotion;
class MenuCursorBuf0;
class MenuCursor;
class MenuBottomButtons;
class MenuLabelButton;
class MenuLauncher;
class InventoryBg;
class InventoryItemGrid;
class LetterGrid;

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
    void drawHeldLetter(s32, s32, void *);
    void drawLetters23(s32, s32);
    void drawPocketLetters(s32, s32);
    BOOL isHighlighted(s32);
    void highlightLetterKinds(u32);
    void clearLetter(s32);
    void func_ov094_02294318(s32, s32);
    void * getLetter(s32);
    void markSlot(s32);
    void clearMarks();
    void setCursorSlot(u32);
    void clearCursorSlot();
    void showLetterName(void *, s32);
    s32 findLetterAt23(s32, s32);
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
    s32 isOpenOrOpening();
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
    void setPos(s32, s32);
    s32 getY();
    s32 getX();
    s32 update();
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
    void placeNearPoint(s32, s32);
    void init(s32, s32, const char *);
    u32 unk_00[0x2f4 / 4];
    u8 unk_2f4[0xc];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    s32 stepClose();
    void beginClose();
    s32 stepOpen();
    void startTalk(u8 *, s32);
    s32 update(s32);
    u32 unk_00[0x108 / 4];
};

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d2e0(Unk_0206d1d4_Src *, void *, void *, s32);
    void func_0206d394();
    void func_0206d39c(s32);
    u32 unk_00[0x210 / 4];
};

class MenuLabelButton {
public:
    MenuLabelButton();
    virtual ~MenuLabelButton();
    virtual void vfunc_08();
    s32 isTouched();
    void showDefault(s32);
    BOOL stepAnim();
    s32 getAnchorY(s32);
    s32 getAnchorX(s32);
    u32 unk_04[(0x70 - 4) / 4];
};

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutSingle05(s32);
    void hide();
    void drawAt(s32);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

class Unk_02065554 {
public:
    s32 func_02065578();
    u32 func_020655d0();
};

class Unk_020970b8 {
public:
    u8 * func_020970b8(s32);
};

class PlayerData {
public:
    void * getCatalog();
};

class LabelBalloon {
public:
    void setPos(s32, s32);
};

class HandCursor {
public:
    s32 isAnimDone();
    s32 getAnim();
    s32 setAnimAtEnd(s32);
    void enableObjWindow();
};

class LabelButton {
public:
    void setState(s32);
    void setPos(s32, s32);
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
    void setRowsFromIds(PopupChoiceIdList *, s32);
    s32 isClosed();
    s32 isOpen();
};

class MenuCursorBase {
public:
    void drawWrapped();
    s32 getFrameScreenY();
    s32 getFrameScreenX();
    s32 isMoving();
    s32 func_ov002_022028fc();
    s32 func_ov002_02202928();
    void moveToEase(s32, s32, s32, s32);
    void moveToLinear(s32, s32, s32);
    void warpTo(s32, s32);
    void setPoseIdle();
    void setPoseRelease();
};

class MenuBottomButtonsBody {
public:
    void disableObjWindow();
    void enableObjWindow();
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8);
    s32 getTargetY(s32);
    s32 getTargetX(s32);
    BOOL isTouched(s32);
    void setLayoutTossKeep();
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
    void initSlideOut(s32, s32);
    void initSlideIn(s32, s32);
    void beginSubSlideOut(s32, s32, s32, s32);
    void beginSubSlideIn(s32, s32, s32, s32);
    BOOL stepSlideOut(s32);
    BOOL stepSlideIn(s32);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    u32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32);
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

// Vtable 0x02298180
class MailboxMenu : public MenuProc {
public:
    MailboxMenu()
        : unk_c0(), unk_f8(), unk_b58(), unk_b80(), unk_2160(), unk_2220(), unk_2238(), unk_229c(), unk_259c(), unk_26a4(),
          unk_28b4(), unk_2924(), unk_32ac(), unk_3c34(), unk_3d98(), unk_3e8c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    BOOL hasTouchMoved();
    BOOL isSlotEmpty(u32 a);
    BOOL isSlotDisabled(u32 a);
    BOOL dropHeldOnSlot(u32 a);
    BOOL isButtonSlot(u32 a);
    BOOL isMailboxSlot(u32 v);
    BOOL isLetterSlot(u32 v);
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    s32 getSlotY(u32 a);
    s32 getSlotX(u32 a);
    u32 getSlotAt(u32 a, s32 b, s32 c);
    u32 findFirstMailboxLetter();
    u32 findFreePocketSlot();
    u8 fromLetterGridIndex(u32 a);
    u8 toLetterGridIndex(u32 a);
    void * getSlotLetter(u32 a);
    void cursorToPopupTop();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToPoint(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    void showCursor();
    void exchangeHeldWith(u32 a);
    void releaseHeldTo(u32 a);
    void pickUpFrom(u32 a);
    void getFlyPos();
    void getHandPos();
    void getDragPos();
    void drawHeldItem();
    void updateBalloonForCursor();
    void placeBalloon();
    void setHoverSlot(u32 a);
    void clearHoverSlot();
    void setFocusSlot(u32 a);
    void clearFocusSlot();
    void disableAllPockets();
    void registerLetterPaper(void *p);
    void putLetterInSlot(u32 a, void *p);
    void cancelBgTasks();
    void pressPromptTab4();
    void pressPromptTab3();
    void showMessage(u32 v);
    void pickUpAndFlyTo(u32 a, u32 b);
    void flyHeldToOtherList(u32 a, s32 c);
    void flyHeldTo(u32 a, u32 b);
    void pickUpAtSlot(u32 a);
    void beginDragFromSlot(u32 a);
    void beginTouchOnSlot(u32 a);
    void resumePromptInput();
    void startPromptButtonInput();
    void startPromptTouchInput();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void mainAct26();
    void mainAct25();
    void mainAct24();
    void mainAct23();
    void mainAct22();
    void mainAct21();
    void mainAct20();
    void mainAct1F();
    void mainAct1E();
    void mainAct1D();
    void mainAct1C();
    void mainAct1B();
    void mainAct1A();
    void mainAct19();
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
    BOOL testFlags(u32 mask);
    BOOL moveCursorByPad(void *pad, u32 x);
    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    void pressCloseTab();
    void onChoiceDiscard();
    void startDiscardLetter();
    void forceCloseFromLetterView();
    void closeLetterView();
    void startReadLetter();
    void moveCursorOnButton(void *pad);
    void moveCursorInMailbox(void *pad, u32 x);
    void moveCursorInPocketLetters(void *pad, u32 x);
    void openDiscardConfirm();
    void selectLetter(u32 idx, u32 x);
    void cancelPopupForButtons();
    void openPopup(u32 x);
    void onPopupChoice();
    void beginSwapAt(u32 v);
    void beginPutDownAt(u32 v);
    void beginMoveFromPopup();
    void func_ov106_022954b4();
    void pressCloseButton();
    void refreshCursor();
    void showCursorAtSlot();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadObjGraphics();
    void loadBoxBg();
    void loadInventoryBg();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initParts();
    void scrollBoxBg();
    void scrollMainBg();
    void scrollLetterViewBg();
    void transitionAct0A();
    void transitionAct09();
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

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0x00c0 */ BgVramTaskPair unk_c0[1];
    /* 0x00f8 */ InventoryItemGrid unk_f8;
    /* 0x0b58 */ LetterGrid unk_b58;
    /* 0x0b80 */ InventoryBg unk_b80;
    /* 0x2160 */ TouchPromptBalloon unk_2160;
    /* 0x2220 */ CursorMotion unk_2220;
    /* 0x2238 */ MenuCursorBuf0 unk_2238;
    /* 0x229c */ PopupChoiceMenu unk_229c;
    /* 0x259c */ MenuErrorMessage unk_259c;
    /* 0x26a4 */ Unk_0206d0a0 unk_26a4;
    /* 0x28b4 */ MenuLabelButton unk_28b4;
    /* 0x2924 */ Letter unk_2924[10];
    /* 0x32ac */ Letter unk_32ac[10];
    /* 0x3c34 */ MenuBottomButtons unk_3c34;
    /* 0x3d98 */ Letter unk_3d98;
    /* 0x3e8c */ Letter unk_3e8c;
};

static inline BOOL Unk_ov106_022966b8_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov106_02296ee4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov106_02297294_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov106_SceneEntry sMailboxMenuProfile = {(void *)MailboxMenu_Create, 0x99, 0x9d};

extern "C" MailboxMenu *MailboxMenu_Create() { return new MailboxMenu(); }

BOOL MailboxMenu::vfunc_00() {
    initParts();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL MailboxMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL MailboxMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2160.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_2238)->drawWrapped();
    }
    drawHeldItem();
    if (testFlags(2)) {
        ((MenuBottomButtons *)&unk_3c34)->drawAt(unk_a0);
        s32 t = unk_98 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_f8, 0, t);
        ((LetterGrid *)&unk_b58)->drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&unk_b80, t);
    }
    if (testFlags(0x200)) {
        ((LetterGrid *)&unk_b58)->drawLetters23(unk_9c, -0x10);
    }
    if (testFlags(0x80)) {
        ((LabelButton *)&unk_28b4)->setPos(0, getSlideOffsetY());
        unk_28b4.vfunc_08();
    }
    return TRUE;
}

BOOL MailboxMenu::execTransition() {
    static Unk_ov106_02298180_Fn tbl[11] = {
        &MailboxMenu::transitionAct00,
        &MailboxMenu::transitionAct01,
        &MailboxMenu::transitionAct02,
        &MailboxMenu::transitionAct03,
        &MailboxMenu::transitionAct04,
        &MailboxMenu::transitionAct05,
        &MailboxMenu::transitionAct06,
        &MailboxMenu::transitionAct07,
        &MailboxMenu::transitionAct08,
        &MailboxMenu::transitionAct09,
        &MailboxMenu::transitionAct0A};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void MailboxMenu::runMainState() {
    static Unk_ov106_02298180_Fn tbl[39] = {
        &MailboxMenu::mainAct00,
        &MailboxMenu::mainAct01,
        &MailboxMenu::mainAct02,
        &MailboxMenu::mainAct03,
        &MailboxMenu::mainAct04,
        &MailboxMenu::mainAct05,
        &MailboxMenu::mainAct06,
        &MailboxMenu::mainAct07,
        &MailboxMenu::mainAct08,
        &MailboxMenu::mainAct09,
        &MailboxMenu::mainAct0A,
        &MailboxMenu::mainAct0B,
        &MailboxMenu::mainAct0C,
        &MailboxMenu::mainAct0D,
        &MailboxMenu::mainAct0E,
        &MailboxMenu::mainAct0F,
        &MailboxMenu::mainAct10,
        &MailboxMenu::mainAct11,
        &MailboxMenu::mainAct12,
        &MailboxMenu::mainAct13,
        &MailboxMenu::mainAct14,
        &MailboxMenu::mainAct15,
        &MailboxMenu::mainAct16,
        &MailboxMenu::mainAct17,
        &MailboxMenu::mainAct18,
        &MailboxMenu::mainAct19,
        &MailboxMenu::mainAct1A,
        &MailboxMenu::mainAct1B,
        &MailboxMenu::mainAct1C,
        &MailboxMenu::mainAct1D,
        &MailboxMenu::mainAct1E,
        &MailboxMenu::mainAct1F,
        &MailboxMenu::mainAct20,
        &MailboxMenu::mainAct21,
        &MailboxMenu::mainAct22,
        &MailboxMenu::mainAct23,
        &MailboxMenu::mainAct24,
        &MailboxMenu::mainAct25,
        &MailboxMenu::mainAct26};
    (this->*tbl[unk_8d])();
}

BOOL MailboxMenu::execMain() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 s = unk_8d;
        if (s == 0 || s == 1 || s == 7) {
            hideCursor();
            pressCloseTab();
            ((TouchPromptBalloon *)&unk_2160)->hide(0);
            return TRUE;
        }
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL MailboxMenu::execPhase3() {
    return TRUE;
}

BOOL MailboxMenu::execPhase4() {
    return TRUE;
}

BOOL MailboxMenu::execClosed() {
    func_0206ecf8(1);
    func_02096914(unk_2924, 10);
    PlayerData_GetCurrent();
    u8 *p = ((Unk_020970b8 *)func_020979d8())->func_020970b8(0);
    s32 i = 0;
    u8 *q = (u8 *)unk_2924;
    for (; i < 10; i++) {
        func_02065e70(p, q + i * 0xf4);
        p += 0xf4;
    }
    ProcBase_RequestDelete(this);
    return TRUE;
}

void MailboxMenu::transitionAct00() {
    MailboxMenu_SetupBgLayers();
    loadInventoryBg();
    setTransitionState(1);
}

void MailboxMenu::transitionAct01() {
    loadObjGraphics();
    InventoryItemGrid_LoadPockets(&unk_f8);
    LetterGrid_LoadPocketLetters(&unk_b58);
    LetterGrid_SetLetters23(&unk_b58, unk_2924);
    disableAllPockets();
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    scrollMainBg();
}

void MailboxMenu::transitionAct02() {
    s32 r = stepSlideIn(0);
    scrollMainBg();
    if (r != 0) {
        loadBoxBg();
        beginSubSlideIn(2, 0, 2, 0x30);
        setSlideExtent(0xc0);
        Gfx2d_ShowLayer(4);
        setFlags(0x200);
        scrollBoxBg();
        setTransitionState(3);
    }
}

void MailboxMenu::transitionAct03() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (testFlags(0x4000)) {
            clearFlags(0x4000);
            setMainState(0x24);
        } else {
            resumeInput();
        }
    }
    scrollBoxBg();
}

void MailboxMenu::transitionAct04() {
    ((TouchPromptBalloon *)&unk_2160)->hide(1);
    hideCursor();
    if (!testFlags(0x100)) {
        ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    }
    beginSubSlideOut(2, 0, 2, 0x30);
    setSlideExtent(0xc0);
    setTransitionState(5);
}

void MailboxMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        clearFlags(0x200);
        beginSubSlideOut(8, 0, 0, 0x30);
        setTransitionState(6);
        transitionAct06();
    } else {
        scrollBoxBg();
    }
}

void MailboxMenu::transitionAct06() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        clearFlags(2);
        if (testFlags(0x100)) {
            setTransitionState(7);
            transitionAct07();
        } else {
            clearFlags(1);
            setPhase(5);
        }
    } else {
        scrollMainBg();
    }
}

void MailboxMenu::transitionAct07() {
    void *t = getSlotLetter(unk_b9);
    registerLetterPaper(t);
    func_02065af0(t);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d2e0((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    beginSubSlideIn(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(4);
    scrollLetterViewBg();
    setTransitionState(8);
    ((MenuLabelButton *)&unk_28b4)->showDefault(0x88);
    setFlags(0x80);
}

void MailboxMenu::transitionAct08() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            setMainState(5);
        } else {
            setMainState(9);
        }
    } else {
        scrollLetterViewBg();
    }
}

void MailboxMenu::transitionAct09() {
    beginSubSlideOut(3, 0, 0, 0x30);
    scrollLetterViewBg();
    setTransitionState(10);
}

void MailboxMenu::transitionAct0A() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        clearFlags(0x80);
        if (testFlags(0x8000)) {
            setPhase(5);
            clearFlags(1);
        } else {
            transitionAct00();
        }
    } else {
        scrollLetterViewBg();
    }
}

void MailboxMenu::scrollLetterViewBg() {
    applySlideOffset(3, 0, 0);
    applySlideOffset(4, 0, 0);
}

void MailboxMenu::scrollMainBg() {
    applySlideOffset(6, 0, -16);
    unk_98 = getSlideOffsetY();
    unk_a0 = getSlideOffsetY();
}

void MailboxMenu::scrollBoxBg() {
    applySlideOffset(4, 0, -16);
    unk_9c = getSlideOffsetX();
}

void MailboxMenu::initParts() {
    s32 i;
    u8 *p;
    unk_94 = 0;
    InventoryItemGrid_Init(&unk_f8, 2);
    ((LetterGrid *)&unk_b58)->init(1);
    InventoryBg_Init(&unk_b80, 6);
    unk_b6 = 0x20;
    ((CursorMotion *)&unk_2220)->reset();
    unk_b4 = 0;
    unk_b8 = 0xb;
    ((PopupChoiceMenu *)&unk_229c)->init(3, 0, 0);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d39c(3);
    for (i = 0; i < 10; i++) {
        func_02065c94((u8 *)unk_2924 + i * 0xf4);
    }
    PlayerData_GetCurrent();
    p = ((Unk_020970b8 *)func_020979d8())->func_020970b8(0);
    for (i = 0; i < 10; i++) {
        func_02065e70((u8 *)unk_2924 + i * 0xf4, p);
        p += 0xf4;
    }
    setFlags(0x4000);
    unk_bf = 0;
}

void MailboxMenu::releaseResources() {
    cancelBgTasks();
    InventoryBg_Exit(&unk_b80);
    InventoryItemGrid_Exit(&unk_f8);
    PopupChoice_ForceClose(&unk_229c);
    ((Unk_0206d0a0 *)&unk_26a4)->func_0206d394();
    ((MenuBottomButtons *)&unk_3c34)->freeTexts();
}

void MailboxMenu::preInputUpdate() {
    preStateUpdate();
    unk_2238.vfunc_0c();
}

void MailboxMenu::postInputUpdate() {
    postStateUpdate();
}

void MailboxMenu::preStateUpdate() {
    cancelBgTasks();
    InventoryBg_PreUpdate(&unk_b80);
    InventoryItemGrid_PreUpdate(&unk_f8);
    ((LetterGrid *)&unk_b58)->updateCursorLift();
    ((MenuBottomButtons *)&unk_3c34)->freeTexts();
}

void MailboxMenu::postStateUpdate() {
    PopupChoice_Update(&unk_229c);
    InventoryBg_Update(&unk_b80);
    if (((TouchPromptBalloon *)&unk_2160)->updatePrompt()) {
        placeBalloon();
    }
}

extern "C" void MailboxMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void MailboxMenu::loadInventoryBg() {
    InventoryBg_Load(&unk_b80, 0);
}

void MailboxMenu::loadBoxBg() {
    s32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/inventory/b_itm_post.bpl", h, 4, 4, 4, 4);
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_ltr2.bsc", h, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_post.bch", h, 4, 0x1e2, 0x1e2, 0x227);
}

void MailboxMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_b80);
    MenuButtons_LoadTextColors(&unk_3c34);
    ((MenuBottomButtons *)&unk_3c34)->setLayoutSingle05(0x88);
}

void MailboxMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov106_02297294_Both()) {
            s32 r = getSlotAt(gTouchCurX, gTouchCurY + 0x10, 1);
            if (r != 0x20) {
                beginTouchOnSlot(r);
            } else if (((MenuBottomButtonsBody *)&unk_3c34)->isTouched(9)) {
                pressCloseTab();
            }
        }
    }
}

void MailboxMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (testFlags(4)) {
            setMainState(3);
            runMainState();
        } else {
            setMainState(0);
            ((TouchPromptBalloon *)&unk_2160)->setAutoCloseTimer(0x3c);
        }
    } else {
        if (testFlags(4)) {
            if (hasTouchMoved()) {
                beginDragFromSlot(unk_b5);
                return;
            }
            if (((TouchPromptBalloon *)&unk_2160)->isOpenOrOpening()) {
                if (unk_bf != 0) {
                    unk_bf--;
                } else {
                    selectLetter(unk_b5, 1);
                    setMainState(2);
                }
                return;
            }
        }
        ((TouchPromptBalloon *)&unk_2160)->commitOpen();
    }
}

void MailboxMenu::mainAct02() {
    if (func_0206e61c()) {
        setMainState(6);
    } else if (gTouchHeld == 0) {
        setMainState(6);
    } else if (testFlags(4) && hasTouchMoved()) {
        beginDragFromSlot(unk_b5);
        PopupChoice_Close(&unk_229c, 0);
        ((TouchPromptBalloon *)&unk_2160)->hide(1);
    }
}

void MailboxMenu::mainAct03() {
    if (((TouchPromptBalloon *)&unk_2160)->isOpenOrOpening()) {
        if (unk_bf != 0) {
            unk_bf--;
        } else {
            selectLetter(unk_b5, 1);
            setMainState(2);
        }
    }
}

void MailboxMenu::mainAct04() {
    s32 p, t;
    if (func_0206e61c()) {
        releaseHeldTo(unk_b7);
        pressCloseTab();
        ((TouchPromptBalloon *)&unk_2160)->hide(0);
    } else {
        getDragPos();
        clearHoverSlot();
        p = unk_ac + 8;
        t = getSlotAt(p, unk_b0 + 0x18, 0);
        if (t != 0x20) {
            if (gTouchHeld == 0) {
                if (isLetterSlot(unk_b7) && isMailboxSlot(t)) {
                    flyHeldTo(unk_b7, 4);
                } else if (isMailboxSlot(unk_b7) && isLetterSlot(t)
                           && isSlotEmpty(t) == 0) {
                    flyHeldTo(unk_b7, 4);
                } else if (isSlotDisabled(t) != 0 || dropHeldOnSlot(t) == 0) {
                    flyHeldToOtherList(unk_b7, p);
                } else {
                    Inventory_PlayPutDownSe();
                    resumeInput();
                }
            } else {
                if (isLetterSlot(unk_b7) && isMailboxSlot(t)) {
                } else {
                    setHoverSlot(t);
                }
            }
        } else if (gTouchHeld == 0) {
            flyHeldToOtherList(unk_b7, p);
        }
    }
}

void MailboxMenu::mainAct05() {
    if (func_0206e61c()) {
        forceCloseFromLetterView();
    } else if (checkSwitchToButtons(1)) {
        setMainState(9);
    } else {
        if (((MenuLabelButton *)&unk_28b4)->isTouched()) {
            closeLetterView();
        }
    }
}

void MailboxMenu::mainAct06() {
    if (((PopupChoiceMenuBody *)&unk_229c)->isOpen()) {
        if (func_0206e61c()) {
            cancelPopupForButtons();
        } else if (checkSwitchToButtons(1)) {
            cancelPopupForButtons();
        } else {
            if (Unk_ov106_02296ee4_Both()) {
                s32 t = ((PopupChoiceMenuBody *)&unk_229c)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
                if (t >= 0) {
                    if (testFlags(0x10000) == 0 || t != 0) {
                        u32 r;
                        unk_bc = ((u8 *)this + 0x2595)[t];
                        r = 1;
                        if (unk_bc == 2) {
                            r = 0;
                            Snd_PlaySe(0x24);
                        }
                        PopupChoice_DecideRow(&unk_229c, t, r);
                        setMainState(0x17);
                    }
                }
            }
        }
    }
}

void MailboxMenu::mainAct07() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        ((TouchPromptBalloon *)&unk_2160)->hide(1);
    } else {
        s32 v = takeRepeatedKeys();
        if (moveCursorByPad((void *)v, 0)) {
            updateBalloonForCursor();
            moveCursorToTarget();
            ((TouchPromptBalloon *)&unk_2160)->hide(0);
        } else {
            if (isSlotDisabled(unk_b8) != 0) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (isLetterSlot(unk_b8) || isMailboxSlot(unk_b8)) {
                        if (isSlotEmpty(unk_b8) == 0) {
                            selectLetter(unk_b8, 0);
                        }
                    } else if (isButtonSlot(unk_b8)) {
                        pressCloseButton();
                    }
                } else if (k & 0x800) {
                    if (isMailboxSlot(unk_b8)) {
                        if (isSlotEmpty(unk_b8) == 0) {
                            s32 r = findFreePocketSlot();
                            if (r != 0x20) {
                                pickUpAndFlyTo(unk_b8, r);
                                ((TouchPromptBalloon *)&unk_2160)->hide(1);
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
                    hideCursor();
                    pressCloseTab();
                    ((TouchPromptBalloon *)&unk_2160)->hide(0);
                } else {
                    ((TouchPromptBalloon *)&unk_2160)->commitOpen();
                }
            }
        }
    }
}

void MailboxMenu::mainAct08() {
    if (func_0206e61c()) {
        releaseHeldTo(unk_b7);
        hideCursor();
        pressCloseTab();
        ((TouchPromptBalloon *)&unk_2160)->hide(0);
    } else {
        s32 v = takeRepeatedKeys();
        if (moveCursorByPad((void *)v, 1)) {
            updateBalloonForCursor();
            moveCursorToTarget();
            ((TouchPromptBalloon *)&unk_2160)->hide(0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (isLetterSlot(unk_b8)) {
                    if (isMailboxSlot(unk_b7)) {
                        if (isSlotEmpty(unk_b8) == 0) return;
                    }
                }
                if (isSlotDisabled(unk_b8) == 0) {
                    if (isSlotEmpty(unk_b8)) {
                        beginPutDownAt(unk_b8);
                    } else {
                        beginSwapAt(unk_b8);
                    }
                }
            } else if (k & 2) {
                beginPutDownAt(unk_b7);
            } else {
                getHandPos();
                ((TouchPromptBalloon *)&unk_2160)->commitOpen();
            }
        }
    }
}

void MailboxMenu::mainAct09() {
    if (func_0206e61c()) {
        forceCloseFromLetterView();
    } else {
        if (((HandCursor *)&unk_2238)->getAnim() == 0) {
            s32 a = ((MenuLabelButton *)&unk_28b4)->getAnchorX(1);
            s32 b = ((MenuLabelButton *)&unk_28b4)->getAnchorY(1);
            ((MenuCursorBase *)&unk_2238)->warpTo(a, b);
            ((MenuCursor *)&unk_2238)->setAnimIfChanged(1);
        }
        if (checkSwitchToTouch()) {
            hideCursor();
            setMainState(5);
        } else {
            u32 k = gPad[1];
            if ((k & 1) || (k & 2)) {
                ((MenuCursor *)&unk_2238)->setPosePress();
                setMainState(10);
            }
        }
    }
}

void MailboxMenu::mainAct0A() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        closeLetterView();
    }
}

void MailboxMenu::mainAct0B() {
    if (func_0206e61c()) {
        cancelPopupForButtons();
    } else if (checkSwitchToTouch()) {
        cancelPopupForButtons();
    } else {
        s32 v = takeRepeatedKeys();
        u8 f = (u8)testFlags(0x10000);
        if (PopupChoice_MoveCursor(&unk_229c, v, &unk_bd, f)) {
            moveCursorToPopupRow();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((MenuCursor *)&unk_2238)->setPosePress();
                setMainState(0xc);
            } else if (k & 2) {
                cancelPopup();
            }
        }
    }
}

void MailboxMenu::mainAct0C() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        u32 r;
        unk_bc = ((u8 *)this + 0x2595)[unk_bd];
        r = 1;
        if (unk_bc == 2) {
            r = 0;
            Snd_PlaySe(0x24);
        }
        PopupChoice_DecideRow(&unk_229c, unk_bd, r);
        setMainState(0x17);
    }
}

void MailboxMenu::mainAct0D() {
    if (((MenuCursorBase *)&unk_2238)->isMoving() == 0) {
        setMainState(unk_bb);
        if (unk_bb == 7) {
            setFocusSlot(unk_b8);
        }
        runMainState();
    }
    getHandPos();
}

void MailboxMenu::mainAct0E() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        if (unk_b8 == 0x1f) {
            pressCloseTab();
        } else {
            func_ov106_022954b4();
        }
    }
}

void MailboxMenu::mainAct0F() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        refreshCursor();
        setMainState(7);
    }
}

void MailboxMenu::mainAct10() {
    if (((MenuCursorBase *)&unk_2238)->func_ov002_02202928()) {
        pickUpAtSlot(unk_b8);
        setMainState(0x11);
    }
}

void MailboxMenu::mainAct11() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        setMainState(unk_bb);
    }
    getHandPos();
}

void MailboxMenu::mainAct12() {
    if (((MenuCursorBase *)&unk_2238)->func_ov002_02202928() == 0) {
        u32 a = unk_ba;
        if (unk_b8 == a) {
            dropHeldOnSlot(a);
            updateBalloonForCursor();
            setMainState(7);
            Inventory_PlayPutDownSe();
        } else {
            flyHeldTo(a, 4);
        }
    } else {
        getHandPos();
    }
}

void MailboxMenu::mainAct13() {
    if (((MenuCursorBase *)&unk_2238)->func_ov002_022028fc() == 0) {
        exchangeHeldWith(unk_ba);
        setFlags(0x40);
        setMainState(0x14);
        updateBalloonForCursor();
    } else {
        setMainState(7);
    }
}

void MailboxMenu::mainAct14() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        setMainState(unk_bb);
    }
    if (((MenuCursorBase *)&unk_2238)->func_ov002_02202928()) {
        if (testFlags(0x40)) {
            clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        getHandPos();
    }
}

void MailboxMenu::mainAct15() {
    if (((CursorMotion *)&unk_2220)->update()) {
        releaseHeldTo(unk_b7);
        resumeInput();
        Inventory_PlayPutDownSe();
    } else {
        getFlyPos();
    }
}

void MailboxMenu::mainAct16() {
    if (((PopupChoiceMenuBody *)&unk_229c)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(0xb);
        } else {
            setMainState(6);
        }
    }
}

void MailboxMenu::mainAct17() {
    if (PopupChoice_TickDecideDelay(&unk_229c)) {
        PopupChoice_Close(&unk_229c, 0);
        ((TouchPromptBalloon *)&unk_2160)->hide(1);
        if (((HandCursor *)&unk_2238)->getAnim()) {
            showCursorAtSlot();
        }
        setMainState(0x18);
    }
}

void MailboxMenu::mainAct18() {
    if (((PopupChoiceMenuBody *)&unk_229c)->isClosed()) {
        onPopupChoice();
    }
}

void MailboxMenu::mainAct19() {
    if (((MenuErrorMessage *)&unk_259c)->update(1)) {
        setMainState(unk_bb);
        ((HandCursor *)&unk_2238)->enableObjWindow();
    }
}

void MailboxMenu::mainAct1A() {
    s32 a = ((MenuErrorMessage *)&unk_259c)->stepOpen();
    a &= stepSlideOut(-1);
    unk_a0 = getSlideOffsetY();
    if (a) {
        setMainState(0x1b);
        initSlideIn(0, 0);
        ((MenuBottomButtonsBody *)&unk_3c34)->setLayoutTossKeep();
        ((MenuBottomButtonsBody *)&unk_3c34)->enableObjWindow();
    }
}

void MailboxMenu::mainAct1B() {
    BOOL r4 = stepSlideIn(-1);
    unk_a0 = getSlideOffsetY();
    if (r4) {
        resumePromptInput();
    }
}

void MailboxMenu::mainAct1C() {
    if (func_0206e61c()) {
        pressPromptTab4();
    }
    if (checkSwitchToButtons(1)) {
        startPromptButtonInput();
    } else if (Unk_ov106_022966b8_Both()) {
        if (((MenuBottomButtonsBody *)&unk_3c34)->isTouched(3)) {
            pressPromptTab3();
        } else if (((MenuBottomButtonsBody *)&unk_3c34)->isTouched(4)) {
            pressPromptTab4();
        }
    }
}

void MailboxMenu::mainAct1D() {
    if (func_0206e61c()) {
        hideCursor();
        pressPromptTab4();
    } else if (checkSwitchToTouch()) {
        startPromptTouchInput();
    } else {
        u32 t = gPad[1];
        if (t & 1) {
            ((MenuCursor *)&unk_2238)->setPosePress();
            setMainState(0x1e);
        } else if (t & 2) {
            hideCursor();
            pressPromptTab4();
        } else if (t & 8) {
            hideCursor();
            pressPromptTab3();
        } else {
            u32 r4 = unk_be;
            u32 r6 = takeRepeatedKeys();
            if (MenuKeys_HasLeft(r6)) {
                if (unk_be != 0) {
                    unk_be = ((volatile MailboxMenu *)this)->unk_be - 1;
                }
            } else if (MenuKeys_HasRight(r6)) {
                if (unk_be < 1) {
                    unk_be = ((volatile MailboxMenu *)this)->unk_be + 1;
                }
            }
            if (r4 != unk_be) {
                if (unk_be != 0) {
                    s32 a = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetX(4);
                    s32 b = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetY(4);
                    moveCursorToPoint(a, b);
                } else {
                    s32 a = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetX(3);
                    s32 b = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetY(3);
                    moveCursorToPoint(a, b);
                }
            }
        }
    }
}

void MailboxMenu::mainAct1E() {
    if (((HandCursor *)&unk_2238)->isAnimDone()) {
        setMainState(0x1f);
        if (unk_be != 0) {
            ((MenuBottomButtonsBody *)&unk_3c34)->setSelected(4);
            Snd_PlaySe(0x28);
        } else {
            ((MenuBottomButtonsBody *)&unk_3c34)->setSelected(3);
            Snd_PlaySe(0x27);
        }
    }
}

void MailboxMenu::mainAct1F() {
    if (((MenuBottomButtonsBody *)&unk_3c34)->stepPress()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((MenuBottomButtonsBody *)&unk_3c34)->getPressOffset();
            s32 r6 = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetX(-1);
            s32 r2 = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetY(-1);
            ((MenuCursorBase *)&unk_2238)->warpTo(r4 + r6, r4 + r2);
        }
    } else {
        hideCursor();
        setMainState(0x20);
        initSlideOut(0, 0);
        ((MenuErrorMessage *)&unk_259c)->beginClose();
    }
}

void MailboxMenu::mainAct20() {
    BOOL r4 = ((MenuErrorMessage *)&unk_259c)->stepClose();
    r4 &= stepSlideOut(-1);
    unk_a0 = getSlideOffsetY();
    if (r4) {
        ((MenuBottomButtonsBody *)&unk_3c34)->disableObjWindow();
        if (unk_be == 0) {
            initSlideIn(0, 0);
            ((MenuBottomButtons *)&unk_3c34)->setLayoutSingle05(0x88);
            setMainState(0x21);
        } else {
            ((MenuBottomButtons *)&unk_3c34)->hide();
            setTransitionState(4);
            setPhase(1);
        }
    }
}

void MailboxMenu::mainAct21() {
    BOOL r4 = stepSlideIn(-1);
    unk_a0 = getSlideOffsetY();
    if (r4) {
        resumeInput();
    }
}

void MailboxMenu::mainAct22() {
    if (((MenuLabelButton *)&unk_28b4)->stepAnim()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((MenuLabelButton *)&unk_28b4)->getAnchorX(1);
            s32 r2 = ((MenuLabelButton *)&unk_28b4)->getAnchorY(1);
            ((MenuCursorBase *)&unk_2238)->warpTo(r4, r2);
        }
    } else {
        hideCursor();
        setTransitionState(9);
        setPhase(1);
    }
}

void MailboxMenu::mainAct23() {
    if (((MenuBottomButtonsBody *)&unk_3c34)->stepPress()) {
        if (((HandCursor *)&unk_2238)->getAnim()) {
            s32 r4 = ((MenuBottomButtonsBody *)&unk_3c34)->getPressOffset();
            s32 r6 = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetX(-1);
            s32 r2 = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetY(-1);
            ((MenuCursorBase *)&unk_2238)->warpTo(r4 + r6, r4 + r2);
        }
    } else {
        hideCursor();
        unk_8c = 4;
        clearFlags(0x100);
        setPhase(1);
    }
}

void MailboxMenu::mainAct24() {
    u32 r5 = findFirstMailboxLetter();
    if (r5 == 0x20) {
        unk_b8 = 0x1f;
        resumeInput();
    } else {
        u32 r2 = findFreePocketSlot();
        if (r2 == 0x20) {
            showMessage(6);
        } else {
            pickUpAndFlyTo(r5, r2);
            setMainState(0x25);
        }
    }
}

void MailboxMenu::mainAct25() {
    if (((CursorMotion *)&unk_2220)->update()) {
        releaseHeldTo(unk_b7);
        setMainState(0x24);
        Inventory_PlayPutDownSe();
    } else {
        getFlyPos();
    }
}

void MailboxMenu::mainAct26() {
    if (LetterGrid_UpdatePopAnim(&unk_b58)) {
        unk_b4 = 0;
        resumeInput();
    }
}

void MailboxMenu::startTouchInput() {
    hideCursor();
    clearFocusSlot();
    setMainState(0);
}

void MailboxMenu::startButtonInput() {
    unk_b6 = 0x20;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(7);
    setFocusSlot(unk_b8);
}

void MailboxMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void MailboxMenu::startPromptTouchInput() {
    hideCursor();
    setMainState(0x1c);
}

void MailboxMenu::startPromptButtonInput() {
    restartKeyRepeat();
    unk_be = 1;
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(1);
    unk_2238.vfunc_0c();
    s32 t = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetX(4);
    s32 u = ((MenuBottomButtonsBody *)&unk_3c34)->getTargetY(4);
    ((MenuCursorBase *)&unk_2238)->warpTo(t, u);
    setMainState(0x1d);
}

void MailboxMenu::resumePromptInput() {
    if (MenuCtrl_IsTouch()) {
        startPromptTouchInput();
    } else {
        startPromptButtonInput();
    }
}

void MailboxMenu::beginTouchOnSlot(u32 a) {
    unk_b5 = a;
    setMainState(1);
    u32 r6 = gTouchCurX;
    u32 r7 = gTouchCurY;
    unk_a4 = getSlotX(unk_b5) - r6;
    unk_a8 = getSlotY(unk_b5) - r7;
    unk_b6 = a;
    ((TouchPromptBalloon *)&unk_2160)->queueOpen();
    ((TouchPromptBalloon *)&unk_2160)->commitOpen();
    unk_bf = 2;
    if (isSlotDisabled(a)) {
        clearFlags(4);
    } else {
        setFlags(4);
        Inventory_PlayTouchSe();
    }
}

void MailboxMenu::beginDragFromSlot(u32 a) {
    unk_b7 = a;
    ((TouchPromptBalloon *)&unk_2160)->hide(1);
    pickUpFrom(a);
    if (unk_b4 == 1) {
        setMainState(4);
    }
    getDragPos();
    Inventory_PlayPickUpSe();
}

void MailboxMenu::pickUpAtSlot(u32 a) {
    unk_b7 = a;
    ((TouchPromptBalloon *)&unk_2160)->hide(1);
    pickUpFrom(a);
    if (unk_b4 == 1) {
        unk_bb = 8;
    }
    getHandPos();
    Inventory_PlayPickUpSe();
}

void MailboxMenu::flyHeldTo(u32 a, u32 b) {
    unk_b7 = a;
    ((CursorMotion *)&unk_2220)->setPos(unk_ac, unk_b0);
    s32 x = getSlotX(a);
    s32 y = getSlotY(a);
    ((CursorMotion *)&unk_2220)->startLinear(x, y, b);
    ((CursorMotion *)&unk_2220)->update();
    getFlyPos();
    setMainState(0x15);
}

void MailboxMenu::flyHeldToOtherList(u32 a, s32 c) {
    u32 r = 0x20;
    if (c >= 0xc0) {
        if (isMailboxSlot(a)) {
            r = findFreePocketSlot();
        }
    }
    if (r != 0x20) {
        a = r;
    }
    flyHeldTo(a, 4);
}

void MailboxMenu::pickUpAndFlyTo(u32 a, u32 b) {
    pickUpFrom(a);
    unk_ac = getSlotX(a);
    unk_b0 = getSlotY(a);
    flyHeldTo(b, 4);
}

u32 MailboxMenu::findFreePocketSlot() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x20;
    }
    return (u8)(r + 0xb);
}

u32 MailboxMenu::findFirstMailboxLetter() {
    Letter *p = unk_2924;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578()) {
            return (u8)(i + 0x15);
        }
    }
    return 0x20;
}

void MailboxMenu::showMessage(u32 v) {
    volatile u8 buf[2];
    buf[0] = data_021edb68;
    buf[0] = v;
    ((MenuErrorMessage *)&unk_259c)->startTalk((u8 *)buf, 1);
    setMainState(0x1a);
    initSlideOut(0, 0);
}

void MailboxMenu::pressPromptTab3() {
    Snd_PlaySe(0x27);
    ((MenuBottomButtonsBody *)&unk_3c34)->setSelected(3);
    setMainState(0x1f);
    unk_be = 0;
}

void MailboxMenu::pressPromptTab4() {
    Snd_PlaySe(0x28);
    ((MenuBottomButtonsBody *)&unk_3c34)->setSelected(4);
    setMainState(0x1f);
    unk_be = 1;
}

void MailboxMenu::cancelBgTasks() {
    ((BgVramTask *)unk_c0)->cancel();
}

BOOL MailboxMenu::isLetterSlot(u32 v) {
    if (v >= 0xb && v <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

BOOL MailboxMenu::isMailboxSlot(u32 v) {
    if (v >= 0x15 && v <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL MailboxMenu::isButtonSlot(u32 a) {
    if (a == 0x1f) return TRUE;
    return FALSE;
}

u8 MailboxMenu::toLetterGridIndex(u32 a) {
    if (a >= 0xb && a <= 0x14) return a - 0xb;
    if (a >= 0x15 && a <= 0x1e) return a + 0xe;
    return 0;
}

u8 MailboxMenu::fromLetterGridIndex(u32 a) {
    if (a <= 9) return a + 0xb;
    if (a >= 0x23 && a <= 0x2c) return a - 0xe;
    return 0x20;
}

u32 MailboxMenu::getSlotAt(u32 a, s32 b, s32 c) {
    s32 r4 = _ZN10LetterGrid18findPocketLetterAtEii(&unk_b58);
    if (r4 == 0x37) {
        r4 = ((LetterGrid *)&unk_b58)->findLetterAt23(a, b);
    }
    if (r4 != 0x37) {
        if (c != 0 && LetterGrid_IsSlotEmpty(&unk_b58, r4)) return 0x20;
        return fromLetterGridIndex(r4);
    }
    return 0x20;
}

BOOL MailboxMenu::dropHeldOnSlot(u32 a) {
    if (isSlotEmpty(a) == 0) {
        func_02065e70(&unk_3e8c, getSlotLetter(a));
        putLetterInSlot(unk_b7, &unk_3e8c);
    }
    releaseHeldTo(a);
    return TRUE;
}

void MailboxMenu::putLetterInSlot(u32 a, void *p) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        ((LetterGrid *)&unk_b58)->func_ov094_02294318(toLetterGridIndex(a), (s32)p);
        if (isLetterSlot(a)) {
            registerLetterPaper(p);
        }
    }
}

void * MailboxMenu::getSlotLetter(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        return ((LetterGrid *)&unk_b58)->getLetter(toLetterGridIndex(a));
    }
    return 0;
}

void MailboxMenu::registerLetterPaper(void *p) {
    if (((Unk_02065554 *)p)->func_02065578() == 2 || ((Unk_02065554 *)p)->func_02065578() == 3) {
        void *r4 = PlayerData_GetCurrent();
        u16 v = 0xfff1;
        v = Item_MakePaper(func_02065c8c(p), 4);
        func_0203c42c(((PlayerData *)r4)->getCatalog(), &v, 0, 1);
    }
}

s32 MailboxMenu::getSlotX(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        return LetterGrid_GetSlotX(&unk_b58, toLetterGridIndex(a));
    }
    if (a == 0x1f) return 0xbc;
    return 0;
}

s32 MailboxMenu::getSlotY(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        return LetterGrid_GetSlotY(&unk_b58, toLetterGridIndex(a)) - 0x10;
    }
    if (a == 0x1f) return 0xb6;
    return 0;
}

void MailboxMenu::disableAllPockets() {
    InventoryItemGrid_DisableSlotRange(&unk_f8, 0, 0xe);
    ((LetterGrid *)&unk_b58)->highlightLetterKinds(4);
}

BOOL MailboxMenu::isSlotDisabled(u32 a) {
    if (isLetterSlot(a)) {
        return ((LetterGrid *)&unk_b58)->isHighlighted(toLetterGridIndex(a));
    }
    return FALSE;
}

BOOL MailboxMenu::isSlotEmpty(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        return LetterGrid_IsSlotEmpty(&unk_b58, toLetterGridIndex(a));
    }
    return TRUE;
}

void MailboxMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_f8);
    ((LetterGrid *)&unk_b58)->clearCursorSlot();
}

void MailboxMenu::setFocusSlot(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        ((LetterGrid *)&unk_b58)->setCursorSlot(toLetterGridIndex(a));
        InventoryItemGrid_ClearCursorSlot(&unk_f8);
    } else {
        clearFocusSlot();
    }
}

void MailboxMenu::clearHoverSlot() {
    InventoryItemGrid_ClearMarks(&unk_f8);
    ((LetterGrid *)&unk_b58)->clearMarks();
}

void MailboxMenu::setHoverSlot(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        ((LetterGrid *)&unk_b58)->markSlot(toLetterGridIndex(a));
    }
}

BOOL MailboxMenu::hasTouchMoved() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void MailboxMenu::placeBalloon() {
    s32 r6 = getSlotX(unk_b6) - 0x6d;
    s32 r4 = getSlotY(unk_b6) - 0x78;
    if (MenuCtrl_IsButtons()) {
        r4 -= 8;
    }
    ((LabelBalloon *)&unk_2160)->setPos(r6, r4);
    if (isLetterSlot(unk_b6) || isMailboxSlot(unk_b6)) {
        ((LetterGrid *)&unk_b58)->showLetterName(&unk_2160, toLetterGridIndex(unk_b6));
    }
}

void MailboxMenu::updateBalloonForCursor() {
    if (isLetterSlot(unk_b8) || isMailboxSlot(unk_b8)) {
        if (isSlotEmpty(unk_b8)) {
            ((TouchPromptBalloon *)&unk_2160)->cancelQueuedOpen();
        } else {
            unk_b6 = unk_b8;
            ((TouchPromptBalloon *)&unk_2160)->queueOpen();
        }
    } else {
        ((TouchPromptBalloon *)&unk_2160)->cancelQueuedOpen();
    }
}

void MailboxMenu::drawHeldItem() {
    if (testFlags(0x40) == 0) {
        if (unk_b4 != 0) {
            if (unk_b4 == 1) {
                ((LetterGrid *)&unk_b58)->drawHeldLetter(unk_ac, unk_b0, &unk_3d98);
            }
        }
    }
}

void MailboxMenu::getDragPos() {
    unk_ac = unk_a4 + gTouchCurX;
    unk_b0 = unk_a8 + gTouchCurY;
}

void MailboxMenu::getHandPos() {
    unk_ac = ((MenuCursorBase *)&unk_2238)->getFrameScreenX() - 2;
    unk_b0 = ((MenuCursorBase *)&unk_2238)->getFrameScreenY() - 4;
}

void MailboxMenu::getFlyPos() {
    unk_ac = ((CursorMotion *)&unk_2220)->getX();
    unk_b0 = ((CursorMotion *)&unk_2220)->getY();
}

void MailboxMenu::pickUpFrom(u32 a) {
    if (isLetterSlot(a) || isMailboxSlot(a)) {
        u32 r4 = toLetterGridIndex(a);
        unk_b4 = 1;
        func_02065e70(&unk_3d98, ((LetterGrid *)&unk_b58)->getLetter(r4));
        ((LetterGrid *)&unk_b58)->clearLetter(r4);
    }
}

void MailboxMenu::releaseHeldTo(u32 a) {
    if (unk_b4 == 1) {
        putLetterInSlot(a, &unk_3d98);
    }
    unk_b4 = 0;
}

void MailboxMenu::exchangeHeldWith(u32 a) {
    if (unk_b4 == 1) {
        func_02065e70(&unk_3e8c, &unk_3d98);
        pickUpFrom(a);
        putLetterInSlot(a, &unk_3e8c);
    }
}

void MailboxMenu::showCursor() {
    s32 r4 = getCursorTargetX();
    ((MenuCursorBase *)&unk_2238)->warpTo(r4, getCursorTargetY());
    if (isButtonSlot(unk_b8)) {
        ((MenuCursor *)&unk_2238)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_2238)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 MailboxMenu::getCursorTargetX() {
    s32 r4 = getSlotX(unk_b8);
    if (testFlags(0x20)) {
        r4 += 0x100;
    } else if (testFlags(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 MailboxMenu::getCursorTargetY() {
    return getSlotY(unk_b8);
}

void MailboxMenu::hideCursor() {
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(0);
    unk_2238.vfunc_0c();
}

void MailboxMenu::moveCursorToTarget() {
    s32 r5;
    if (testFlags(8)) {
        r5 = getCursorTargetX();
        ((MenuCursorBase *)&unk_2238)->warpTo(r5, getCursorTargetY());
        clearFlags(8);
    } else {
        r5 = getCursorTargetX();
        ((MenuCursorBase *)&unk_2238)->moveToEase(r5, getCursorTargetY(), 3, 1);
        unk_bb = unk_8d;
        setMainState(0xd);
    }
}

void MailboxMenu::moveCursorToPoint(s32 a, s32 b) {
    ((MenuCursorBase *)&unk_2238)->moveToEase(a, b, 3, 1);
    unk_bb = unk_8d;
    setMainState(0xd);
}

void MailboxMenu::moveCursorToPopupRow() {
    s32 r4 = ((PopupChoiceMenuBody *)&unk_229c)->getRowX();
    ((MenuCursorBase *)&unk_2238)->moveToLinear(r4, ((PopupChoiceMenuBody *)&unk_229c)->getRowY(unk_bd), 2);
    unk_bb = unk_8d;
    setMainState(0xd);
}

void MailboxMenu::cancelPopup() {
    s32 r4;
    unk_bc = 4;
    unk_bd = PopupChoice_DecideCancel(&unk_229c, 1);
    r4 = ((PopupChoiceMenuBody *)&unk_229c)->getRowX();
    ((MenuCursorBase *)&unk_2238)->warpTo(r4, ((PopupChoiceMenuBody *)&unk_229c)->getRowY(unk_bd));
    ((HandCursor *)&unk_2238)->setAnimAtEnd(8);
    setMainState(0x17);
}

void MailboxMenu::cursorToPopupTop() {
    s32 r4;
    if (testFlags(0x10000)) {
        unk_bd = 1;
    } else {
        unk_bd = 0;
    }
    r4 = ((PopupChoiceMenuBody *)&unk_229c)->getRowX();
    ((MenuCursorBase *)&unk_2238)->warpTo(r4, ((PopupChoiceMenuBody *)&unk_229c)->getRowY(unk_bd));
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(7);
}

void MailboxMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_2238)->warpTo(a, b);
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(1);
}

void MailboxMenu::refreshCursor() {
    ((MenuCursorBase *)&unk_2238)->setPoseIdle();
    unk_2238.vfunc_0c();
}

void MailboxMenu::pressCloseButton() {
    ((MenuCursor *)&unk_2238)->setPosePress();
    setMainState(0xe);
}

void MailboxMenu::func_ov106_022954b4() {
    ((MenuCursorBase *)&unk_2238)->setPoseRelease();
    setMainState(0xf);
}

void MailboxMenu::beginMoveFromPopup() {
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(4);
    setMainState(0x10);
}

void MailboxMenu::beginPutDownAt(u32 v) {
    ((TouchPromptBalloon *)&unk_2160)->hide(1);
    unk_ba = v;
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(5);
    setMainState(0x12);
}

void MailboxMenu::beginSwapAt(u32 v) {
    ((TouchPromptBalloon *)&unk_2160)->hide(1);
    unk_bb = unk_8d;
    unk_ba = v;
    ((MenuCursor *)&unk_2238)->setAnimIfChanged(6);
    setMainState(0x13);
}

void MailboxMenu::onPopupChoice() {
    switch (unk_bc) {
    case 0:
        beginMoveFromPopup();
        break;
    case 1:
        startReadLetter();
        break;
    case 2:
        startDiscardLetter();
        break;
    case 3:
        onChoiceDiscard();
        break;
    case 4:
    default:
        resumeInput();
        break;
    }
}

void MailboxMenu::openPopup(u32 x) {
    ((PopupChoiceMenuBody *)&unk_229c)->setRowsFromIds((PopupChoiceIdList *)&unk_229c.unk_2f4, testFlags(0x10000));
    s32 a = getSlotX(unk_b9);
    s32 b = getSlotY(unk_b9);
    if (x != 0) {
        _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(&unk_229c, &unk_2160, b);
    } else {
        ((PopupChoiceMenu *)&unk_229c)->placeNearPoint(a, b);
    }
    PopupChoice_Open(&unk_229c, 0);
    setMainState(0x16);
}

void MailboxMenu::cancelPopupForButtons() {
    unk_bc = 4;
    showCursorAtSlot();
    PopupChoice_Close(&unk_229c, 0);
    setMainState(0x18);
}

void MailboxMenu::selectLetter(u32 idx, u32 x) {
    clearFlags(0x10000);
    unk_b9 = idx;
    ChoiceIdList_Clear(&unk_229c.unk_2f4, 4);
    void *r7 = getSlotLetter(idx);
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(&unk_229c.unk_2f4, 0, 0);
    }
    s32 r5 = ((Unk_02065554 *)r7)->func_02065578();
    if (r5 != 0) {
        if (r5 == 7) {
            ChoiceIdList_Add(&unk_229c.unk_2f4, 0x17, 1);
        } else {
            ChoiceIdList_Add(&unk_229c.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r7)->func_020655d0() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            ChoiceIdList_Add(&unk_229c.unk_2f4, 0x15, 3);
        }
    }
    ChoiceIdList_Add(&unk_229c.unk_2f4, 2, 4);
    hideCursor();
    if (x == 0) {
        ((TouchPromptBalloon *)&unk_2160)->hide(1);
    }
    openPopup(x);
}

void MailboxMenu::openDiscardConfirm() {
    setFlags(0x10000);
    ChoiceIdList_Clear(&unk_229c.unk_2f4, 4);
    ChoiceIdList_Add(&unk_229c.unk_2f4, 0x1a, 4);
    ChoiceIdList_Add(&unk_229c.unk_2f4, 0x15, 2);
    ChoiceIdList_Add(&unk_229c.unk_2f4, 0x19, 4);
    openPopup(0);
}

void MailboxMenu::moveCursorInPocketLetters(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0xb;
    s32 r4 = r6 >> 1;
    if (MenuKeys_HasLeft((u32)pad)) {
        if ((r6 & 1) > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            if (x != 1 || !isLetterSlot(unk_b7)) {
                unk_b8 = r4 * 2 + 0x16;
                return;
            }
        }
    } else if (MenuKeys_HasRight((u32)pad)) {
        if ((r6 & 1) < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            if (x != 1 || !isLetterSlot(unk_b7)) {
                unk_b8 = r4 * 2 + 0x15;
                setFlags(0x20);
                return;
            }
        }
    }
    if (isLetterSlot(unk_b8)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp((u32)pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (MenuKeys_HasDown((u32)pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    ((MenuCursor *)&unk_2238)->switchToAnim07();
                }
            }
        }
    }
}

void MailboxMenu::moveCursorInMailbox(void *pad, u32 x) {
    s32 r6 = unk_b8 - 0x15;
    s32 r4 = 0;
    for (; r6 >= 2; r4++, r6 -= 2) {
    }
    if (MenuKeys_HasLeft((u32)pad)) {
        if (r6 > 0) {
            unk_b8 = unk_b8 - 1;
        } else {
            unk_b8 = r4 * 2 + 0xc;
            setFlags(0x10);
            return;
        }
    } else if (MenuKeys_HasRight((u32)pad)) {
        if (r6 < 1) {
            unk_b8 = unk_b8 + 1;
        } else {
            unk_b8 = r4 * 2 + 0xb;
            return;
        }
    }
    if (isMailboxSlot(unk_b8)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp((u32)pad)) {
                if (r4 > 0) {
                    unk_b8 = unk_b8 - 2;
                }
            } else if (MenuKeys_HasDown((u32)pad)) {
                if (r4 < 4) {
                    unk_b8 = unk_b8 + 2;
                } else if (x == 0) {
                    unk_b8 = 0x1f;
                    ((MenuCursor *)&unk_2238)->switchToAnim07();
                }
            }
        }
    }
}

void MailboxMenu::moveCursorOnButton(void *pad) {
    if (MenuKeys_HasUp((u32)pad)) {
        ((MenuCursor *)&unk_2238)->switchToAnim01();
        unk_b8 = 0x13;
    }
}

BOOL MailboxMenu::moveCursorByPad(void *pad, u32 x) {
    u8 old = unk_b8;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (isLetterSlot(unk_b8)) {
        moveCursorInPocketLetters(pad, x);
    } else if (isMailboxSlot(unk_b8)) {
        moveCursorInMailbox(pad, x);
    } else if (isButtonSlot(unk_b8)) {
        moveCursorOnButton(pad);
    }
    if (old != unk_b8) {
        return TRUE;
    }
    return FALSE;
}

void MailboxMenu::startReadLetter() {
    setTransitionState(4);
    setPhase(1);
    setFlags(0x100);
}

void MailboxMenu::closeLetterView() {
    setMainState(0x22);
    ((LabelButton *)&unk_28b4)->setState(2);
    Snd_PlaySe(0x29);
}

void MailboxMenu::forceCloseFromLetterView() {
    closeLetterView();
    setFlags(0x8000);
    hideCursor();
    setTransitionState(9);
    setPhase(1);
    ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
}

void MailboxMenu::startDiscardLetter() {
    u8 idx = unk_b9;
    pickUpFrom(idx);
    unk_ac = getSlotX(idx);
    unk_b0 = getSlotY(idx);
    if (MenuCtrl_IsButtons()) {
        unk_ac = unk_ac - 2;
        unk_b0 = unk_b0 - 2;
    }
    setMainState(0x26);
    LetterGrid_StartPopAnim(&unk_b58);
}

void MailboxMenu::onChoiceDiscard() { openDiscardConfirm(); }

void MailboxMenu::pressCloseTab() {
    Snd_PlaySe(0x27);
    ((MenuBottomButtonsBody *)&unk_3c34)->setSelected(9);
    setMainState(0x23);
}

BOOL MailboxMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void MailboxMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

void MailboxMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }

