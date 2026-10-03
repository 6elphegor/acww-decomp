// ov105: scene overlay (class LetterStorageMenu, vtable 0x02298594). Linked as one unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class LetterStorageMenu;
class MenuLauncher;
class Letter;
typedef LetterStorageMenu S;

// Shared symbols whose real argument lists differ from their mangled names: called by name with the object first
extern "C" void _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(void *self, void *p, s32 x);
extern "C" u32 _ZN10LetterGrid18findPocketLetterAtEii(void *self);

extern "C" {
void Snd_PlaySe(s32 a);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *Heap_AllocTail(void *heap, u32 n);
void Heap_Free(void *heap, void *p);
void func_0206f638(s32 a);
s32 func_0206f644();
void Letter_Clear(void *p);
void Letter_Copy(void *dst, void *src);
void Letter_MarkRead(u32 a);
void MenuCtrl_SetFutureLetter(void *p);
void MenuCtrl_SetPostOfficeResult(u32 a);
s32 MenuCtrl_PostOfficeLettersSent();
s32 MenuCtrl_GetPostOfficeOutcome();
void MenuCtrl_SetResult(s32 a);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
s32 LetterList_Compact(void *p, s32 n);
s32 LetterList_CountUsed(void *p, s32 n);
s32 LetterDelivery_FindAddresseeVillager(void *p);
void LetterDelivery_SendToVillager(void *p);
s32 LetterDelivery_HasKnownAddressee(void *p);
s32 LetterDelivery_FindAddresseePlayer(void *p);
s32 LetterDelivery_PutInMailbox(void *p, s32 a, s32 b);
s32 LetterDelivery_QueueOutgoing(void *p, s32 a);
void func_020968e0();
void LetterDelivery_DeliverOutgoing();
s32 PlayerData_GetCurrent();
s32 PlayerData_GetResident(void *p, s32 a);
void Arbeit_NotifyLetterWritten();
s32 Inventory_FindEmptyLetter();
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const char *a, u32 b, s32 c);
void Gfx2d_LoadPaletteFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);

void Inventory_PlayPickUpSe();
void Inventory_PlayTouchSe();
void Inventory_PlayPutDownSe();
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_Load(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
void InventoryItemGrid_DisableSlotRange(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_ClearCursorSlot(void *p);
void InventoryItemGrid_LoadPockets(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
s32 LetterGrid_UpdatePopAnim(void *p);
void LetterGrid_StartPopAnim(void *p);
void LetterGrid_SetLetters2D(void *p, void *q);
void LetterGrid_LoadPocketLetters(void *p);
BOOL LetterGrid_IsSlotEmpty(void *p, u32 a);
s32 LetterGrid_GetSlotY(void *p, u32 a);
s32 LetterGrid_GetSlotX(void *p, u32 a);

BOOL MenuKeys_HasRight(void *p);
BOOL MenuKeys_HasLeft(void *p);
BOOL MenuKeys_HasDown(void *p);
BOOL MenuKeys_HasUp(void *p);
void ChoiceIdList_Clear(void *p, s32 a);
void ChoiceIdList_Add(void *p, s32 a, s32 b);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *q, u32 b);
BOOL PopupChoice_TickDecideDelay(void *p);
u32 PopupChoice_DecideCancel(void *p, s32 a);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *p, s32 a);
void PopupChoice_Open(void *p, s32 a);
void MenuButtons_LoadTextColors(void *p);

extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u32 gCurrentHeap;
extern u8 gSavePlayers[];
extern void *gMenuHeap;
}

// Main-module helper classes (real symbol names) -------------------------------------------------

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

// Same 0xf4-byte element object under the name that owns the state accessors
class LetterView {
public:
    s32 isToFutureSelf();
    s32 getState();
    u32 getPresent();
};

class CommManager {
public:
    void endRecord(u32 a, u32 b);
    void writeRecord(u8 *buf, u32 n);
    void beginRecord();
    BOOL isOnline();
    u32 unk_00[0x64 / 4];
    u32 unk_64;
};
extern "C" CommManager *gCommManager;

class TalkWindowState {
public:
    void setSlot(s32 a, void *p);
};
extern "C" TalkWindowState *TalkWindow_Get(s32 a);

class MsgString {
public:
    virtual ~MsgString();
};
class MsgString9B : public MsgString {
public:
    MsgString9B();
    virtual ~MsgString9B();
    u32 unk_04[7];
};
class PlayerId {
public:
    void getNameString(MsgString *p);
};
class PlayerData {
public:
    void *getPlayerId();
};
class Unk_02097ff4 {
public:
    BOOL testFlag(u32 a);
};

struct Unk_0206d1d4_Src;
class LetterRenderer {
public:
    LetterRenderer();
    ~LetterRenderer();
    void func_0206d2e0(Unk_0206d1d4_Src *a, void *b, void *c, s32 d);
    void func_0206d394();
    void func_0206d39c(s32 a);
    u32 unk_00[0x210 / 4];
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

class UiWidget {
public:
    virtual ~UiWidget();
    virtual void draw();
    virtual void vfunc_0c();
};

class LabelBalloon : public UiWidget {
public:
    void setPos(s32 x, s32 y);
};

class LabelButton : public UiWidget {
public:
    void setState(s32 v);
    void setPos(s32 x, s32 y);
};

class HandCursor : public UiWidget {
public:
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void enableObjWindow();
};

// ov002 sub-objects ----------------------------------------------------------------------------

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
    u32 unk_04[(0xc0 - 4) / 4];
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
// Same cursor object under the name used by the second group of its methods
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

struct PopupChoiceIdList;
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
    void init(s32 a, s32 b, const char *path);
    u8 unk_00[0x2f4];
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
    BOOL isTouched();
    void showDefault(s32 a);
    BOOL stepAnim();
    s32 getAnchorY(s32 a);
    s32 getAnchorX(s32 a);
    u32 unk_04[(0x70 - 4) / 4];
};

class MenuBottomButtonsBody {
public:
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 a);
    s32 getTargetX(s32 a);
    BOOL isTouched(s32 a);
    void disableObjWindow();
    void enableObjWindow();
    void setLayoutYesNo0B(s32);
};
class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmAnd06(u8 v);
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
    void setLayoutSingle05(s32);
    void hide();
};

// ov094 sub-objects ----------------------------------------------------------------------------

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
    void drawHeldLetter(s32 a, s32 b, void *p);
    void drawLetters2D(s32 a, s32 b);
    void drawPocketLetters(s32 a, s32 b);
    BOOL isHighlighted(s32 a);
    void highlightLetterKinds(u32 a);
    void clearLetter(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    void *getLetter(s32 a);
    void markSlot(s32 a);
    void clearMarks();
    void setCursorSlot(u32 a);
    void clearCursorSlot();
    void showLetterName(void *p, s32 a);
    u32 findLetterAt2D(s32 a, s32 b);
    void updateCursorLift();
    void init(s32 a);
    u32 unk_00[0x28 / 4];
    void drawLetters0A(s32, s32);
    s32 findLetterAt0A(s32, s32);
    s32 findPocketLetterAt(s32, s32);
};
class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x15e0 / 4];
};

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
    void setSlideExtent(s32 a);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    s32 takeRepeatedKeys();
    s32 checkSwitchToTouch();
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
    void initSlideOut(s32, s32);
    void initSlideIn(s32, s32);
};

extern "C" {
void Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_EndSubObjWinBrightness();
void Gfx2d_BeginSubObjWinBrightness();
BOOL Cell_HitTest(void *r, s32 x, s32 y, s32 w, s32 h);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
void func_02088730(s32 a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
void * func_02097a04(void *p);
void LetterGrid_SetLetters0A(void *p, void *q);
}

struct Unk_ov105_Ent {
    u32 a;
    u32 b;
};
struct Unk_ov105_SceneEntry;
extern "C" const u16 data_ov105_02298314[3];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];
extern "C" char data_ov105_022984e4[];
extern "C" char data_ov105_02298504[];
extern "C" char data_ov105_02298524[];
extern "C" const char *sLetterStoragePageChars[3];

class LetterStorage {
public:
    void *getPage(s32 a);
};
extern "C" void InventoryItemGrid_DrawPocketsClipped(void *p, s32 a, s32 b, u32 c);
extern "C" void _ZN17LetterStorageMenu14dropHeldOnSlotEj(void *self);
extern "C" void _ZN17LetterStorageMenu14pickUpAndFlyToEjjj(void *self, u32 a, u32 b);

typedef void (LetterStorageMenu::*Unk_ov105_02298594_Fn)();

// Vtable 0x02298594
class LetterStorageMenu : public MenuProc {
public:
    LetterStorageMenu()
        : unk_b4(), unk_1a8(), unk_2ac(), unk_2e4(), unk_d44(), unk_d6c(), unk_234c(), unk_240c(), unk_2424(), unk_2488(),
          unk_2788(), unk_2890(), unk_2aa0(), unk_2b10(), unk_728c() {}
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
    BOOL switchPageByShoulder();
    void endDimBackground();
    void beginDimBackground();
    void startPageSwitch();
    BOOL hitPageTab(s32, s32);
    void startPageSlideOut();
    void loadPage();
    void drawPageTabs();
    void pressTab4();
    void pressCloseTab();
    void pressTab9();
    void func_ov105_0229514c();
    void onChoiceDiscard();
    void startDiscardLetter();
    void closeLetterView();
    void startReadLetter();
    BOOL moveCursorByPad(void *, u32);
    void moveCursorOnPageTabs(void *);
    void moveCursorOnButton(void *);
    void moveCursorInStorage(void *, u32);
    void moveCursorInPocketLetters(void *, u32);
    void openDiscardConfirm();
    void selectLetter(u32 a, u32 b);
    void cancelPopupForButtons();
    void openPopup(u32 b);
    void onPopupChoice();
    void beginSwapAt(u32 b);
    void beginPutDownAt(u32 b);
    void beginMoveFromPopup();
    void func_ov105_02295814();
    void pressCloseButton();
    void refreshCursor();
    void showCursorAtSlot();
    void cursorToPopupTop();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToPoint(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void exchangeHeldWith(u32 b);
    void releaseHeldTo(u32 b);
    void pickUpFrom(u32 b);
    void getFlyPos();
    void getHandPos();
    void getDragPos();
    void drawHeldItem();
    void updateBalloonForCursor();
    void placeBalloon();
    BOOL hasTouchMoved();
    void setHoverSlot(u32 b);
    void clearHoverSlot();
    void setFocusSlot(u32 b);
    void clearFocusSlot();
    BOOL isSlotEmpty(u32);
    BOOL isSlotDisabled(u32);
    void disableAllPockets();
    s32 getSlotY(u32);
    s32 getSlotX(u32);
    s32 getSlotLetter(u32);
    void putLetterInSlot(u32, void *);
    BOOL dropHeldOnSlot(u32);
    s32 getSlotAt(u32, u32, u32);
    u32 fromLetterGridIndex(u32);
    u32 toLetterGridIndex(u32);
    BOOL isPageTabSlot(u32);
    BOOL isButtonSlot(u32);
    BOOL isStorageSlot(u32);
    BOOL isLetterSlot(u32);
    void cancelBgTasks();
    u32 findFreeStorageSlot();
    u32 findFreePocketSlot();
    void pickUpAndFlyTo(u32, u32, u32);
    void flyHeldToOtherList(u32, s32);
    void flyHeldTo(u32, u32);
    void pickUpAtSlot(u8);
    void beginDragFromSlot(u8);
    void beginTouchOnSlot(u32);
    void resumePromptInput();
    void startPromptButtonInput();
    void startPromptTouchInput();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
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
    void transitionAct15();
    void transitionAct14();
    void transitionAct13();
    void transitionAct12();
    void transitionAct11();
    void transitionAct10();
    void transitionAct0F();
    void transitionAct0E();
    void scrollBoxBg();
    void scrollMainBg();
    void scrollLetterViewBg();
    void transitionAct0D();
    void transitionAct0C();
    void transitionAct0B();
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
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Letter unk_b4;
    /* 0x1a8 */ Letter unk_1a8;
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f;
    /* 0x2a0 */ u8 unk_2a0;
    /* 0x2a1 */ u8 unk_2a1;
    /* 0x2a2 */ u8 unk_2a2;
    /* 0x2a3 */ u8 unk_2a3;
    /* 0x2a4 */ u8 unk_2a4;
    /* 0x2a5 */ u8 unk_2a5;
    /* 0x2a6 */ u8 unk_2a6;
    /* 0x2a7 */ u8 unk_2a7;
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2aa */ u8 unk_2aa;
    /* 0x2ab */ u8 unk_2ab;
    /* 0x2ac */ BgVramTaskPair unk_2ac[1];
    /* 0x2e4 */ InventoryItemGrid unk_2e4;
    /* 0xd44 */ LetterGrid unk_d44;
    /* 0xd6c */ InventoryBg unk_d6c;
    /* 0x234c */ TouchPromptBalloon unk_234c;
    /* 0x240c */ CursorMotion unk_240c;
    /* 0x2424 */ MenuCursorBuf0 unk_2424;
    /* 0x2488 */ PopupChoiceMenu unk_2488;
    /* 0x2788 */ MenuErrorMessage unk_2788;
    /* 0x2890 */ LetterRenderer unk_2890;
    /* 0x2aa0 */ MenuLabelButton unk_2aa0;
    /* 0x2b10 */ Letter unk_2b10[0x4b];
    /* 0x728c */ MenuBottomButtons unk_728c;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov105_SceneEntry {
    LetterStorageMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" {
void LetterStorageMenu_SetupBgLayers();
LetterStorageMenu *LetterStorageMenu_Create();
}

extern "C" u32 _ZN10LetterGrid18findPocketLetterAtEii(void *self);
extern "C" void _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(void *self, void *p, s32 x);

static inline BOOL Unk_ov105_0229677c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov105_022973c4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" LetterStorageMenu *LetterStorageMenu_Create() { return new LetterStorageMenu(); }

BOOL LetterStorageMenu::vfunc_00() {
    initParts();
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL LetterStorageMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL LetterStorageMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_234c.draw();
    if (MenuCtrl_IsButtons()) {
        unk_2424.drawWrapped();
    }
    drawHeldItem();
    if (testFlags(2)) {
        unk_728c.drawAt(unk_9c);
        if (!testFlags(0x200)) {
            InventoryItemGrid_DrawPockets(&unk_2e4, 0, unk_98 - 0x10);
        } else {
            u32 t = unk_a0;
            if (t != 0) {
                InventoryItemGrid_DrawPocketsClipped(&unk_2e4, 0, unk_98 - 0x10, t + 0xc0);
            }
        }
        unk_d44.drawPocketLetters(0, unk_98 - 0x10);
        InventoryBg_DrawSprite(&unk_d6c, unk_98 - 0x10);
    }
    if (testFlags(0x200)) {
        unk_d44.drawLetters0A(unk_a0, -0x10);
        drawPageTabs();
    }
    if (testFlags(0x80)) {
        unk_2aa0.setPos(0, getSlideOffsetY());
        unk_2aa0.draw();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u16 data_ov105_02298314[3];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];
extern "C" const char *sLetterStoragePageChars[3];
extern "C" Unk_ov105_SceneEntry sLetterStorageMenuProfile;// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov105_SceneEntry sLetterStorageMenuProfile;
extern "C" char data_ov105_02298524[];
extern "C" const char *sLetterStoragePageChars[3];
extern "C" char data_ov105_02298504[];
extern "C" const u16 data_ov105_02298314[3];
extern "C" char data_ov105_022984e4[];
extern "C" Unk_ov105_Ent data_ov105_02298544[9];

extern "C" Unk_ov105_SceneEntry sLetterStorageMenuProfile = {LetterStorageMenu_Create, 0x98, 0x9c};

extern "C" char data_ov105_02298524[] = "menu/inventory/b_itm_post2.bch";

BOOL LetterStorageMenu::execTransition() {
    static Unk_ov105_02298594_Fn tbl[22] = {
        &LetterStorageMenu::transitionAct00,
        &LetterStorageMenu::transitionAct01,
        &LetterStorageMenu::transitionAct02,
        &LetterStorageMenu::transitionAct03,
        &LetterStorageMenu::transitionAct04,
        &LetterStorageMenu::transitionAct05,
        &LetterStorageMenu::transitionAct06,
        &LetterStorageMenu::transitionAct07,
        &LetterStorageMenu::transitionAct08,
        &LetterStorageMenu::transitionAct09,
        &LetterStorageMenu::transitionAct0A,
        &LetterStorageMenu::transitionAct0B,
        &LetterStorageMenu::transitionAct0C,
        &LetterStorageMenu::transitionAct0D,
        &LetterStorageMenu::transitionAct0E,
        &LetterStorageMenu::transitionAct0F,
        &LetterStorageMenu::transitionAct10,
        &LetterStorageMenu::transitionAct11,
        &LetterStorageMenu::transitionAct12,
        &LetterStorageMenu::transitionAct13,
        &LetterStorageMenu::transitionAct14,
        &LetterStorageMenu::transitionAct15
    };
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void LetterStorageMenu::runMainState() {
    static Unk_ov105_02298594_Fn tbl[32] = {
        &LetterStorageMenu::mainAct00,
        &LetterStorageMenu::mainAct01,
        &LetterStorageMenu::mainAct02,
        &LetterStorageMenu::mainAct03,
        &LetterStorageMenu::mainAct04,
        &LetterStorageMenu::mainAct05,
        &LetterStorageMenu::mainAct06,
        &LetterStorageMenu::mainAct07,
        &LetterStorageMenu::mainAct08,
        &LetterStorageMenu::mainAct09,
        &LetterStorageMenu::mainAct0A,
        &LetterStorageMenu::mainAct0B,
        &LetterStorageMenu::mainAct0C,
        &LetterStorageMenu::mainAct0D,
        &LetterStorageMenu::mainAct0E,
        &LetterStorageMenu::mainAct0F,
        &LetterStorageMenu::mainAct10,
        &LetterStorageMenu::mainAct11,
        &LetterStorageMenu::mainAct12,
        &LetterStorageMenu::mainAct13,
        &LetterStorageMenu::mainAct14,
        &LetterStorageMenu::mainAct15,
        &LetterStorageMenu::mainAct16,
        &LetterStorageMenu::mainAct17,
        &LetterStorageMenu::mainAct18,
        &LetterStorageMenu::mainAct19,
        &LetterStorageMenu::mainAct1A,
        &LetterStorageMenu::mainAct1B,
        &LetterStorageMenu::mainAct1C,
        &LetterStorageMenu::mainAct1D,
        &LetterStorageMenu::mainAct1E,
        &LetterStorageMenu::mainAct1F
    };
    (this->*tbl[unk_8d])();
}

BOOL LetterStorageMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL LetterStorageMenu::execPhase3() { return TRUE; }

BOOL LetterStorageMenu::execPhase4() { return TRUE; }

BOOL LetterStorageMenu::execClosed() {
    if (!testFlags(0x1000)) {
        MenuCtrl_SetResult(0);
    } else {
        MenuCtrl_SetResult(1);
        void *h = func_02097a04((void *)PlayerData_GetCurrent());
        if (h != 0) {
            s32 i;
            Letter *p = (Letter *)((LetterStorage *)h)->getPage(0);
            for (i = 0; i < 0x4b; i++) {
                Letter_Copy(p, &unk_2b10[i]);
                p++;
            }
        }
    }
    ProcBase_RequestDelete(this);
    return TRUE;
}

void LetterStorageMenu::transitionAct00() {
    LetterStorageMenu_SetupBgLayers();
    loadInventoryBg();
    setTransitionState(1);
}

void LetterStorageMenu::transitionAct01() {
    loadObjGraphics();
    InventoryItemGrid_LoadPockets(&unk_2e4);
    LetterGrid_LoadPocketLetters(&unk_d44);
    disableAllPockets();
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    scrollMainBg();
}

void LetterStorageMenu::transitionAct02() {
    BOOL b = stepSlideIn(0);
    scrollMainBg();
    if (b) {
        loadBoxBg();
        loadPage();
        setTransitionState(3);
    }
}

void LetterStorageMenu::transitionAct03() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        clearFlags(0x40);
        if (unk_29c != 0) {
            if (MenuCtrl_IsButtons()) {
                u32 v = unk_2a2;
                if (v < 0x3e || v > 0x40) {
                    unk_2424.setAnimAtEnd(4);
                }
                unk_2424.vfunc_0c();
                getHandPos();
                setMainState(8);
            }
        }
    }
    scrollBoxBg();
}

void LetterStorageMenu::transitionAct04() {
    endDimBackground();
    if (!testFlags(0x100)) {
        ((MenuLauncher *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    }
    startPageSlideOut();
    setTransitionState(5);
}

void LetterStorageMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        clearFlags(0x200);
        beginSubSlideOut(8, 0, 0, 0x30);
        setTransitionState(6);
        transitionAct06();
        unk_728c.hide();
    } else {
        scrollBoxBg();
        unk_9c = -getSlideOffsetX();
    }
}

void LetterStorageMenu::transitionAct06() {
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
        applySlideOffset(6, 0, -0x10);
        unk_98 = getSlideOffsetY();
    }
}

void LetterStorageMenu::transitionAct07() {
    void *p = (void *)getSlotLetter(unk_2a3);
    switch (((LetterView *)p)->getState()) {
    case 2:
    case 5:
    case 7:
        setFlags(0x1000);
        break;
    }
    Letter_MarkRead((u32)p);
    unk_2890.func_0206d2e0((Unk_0206d1d4_Src *)p, (void *)3, (void *)4, 1);
    beginSubSlideIn(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(4);
    scrollLetterViewBg();
    setTransitionState(8);
    unk_2aa0.showDefault(0x88);
    setFlags(0x80);
}

void LetterStorageMenu::transitionAct08() {
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

void LetterStorageMenu::transitionAct09() {
    beginSubSlideOut(3, 0, 0, 0x30);
    scrollLetterViewBg();
    setTransitionState(0xa);
}

void LetterStorageMenu::transitionAct0A() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        clearFlags(0x80);
        transitionAct00();
    } else {
        scrollLetterViewBg();
    }
}

void LetterStorageMenu::transitionAct0B() {
    startPageSlideOut();
    setTransitionState(0xc);
    unk_2a9 = 4;
    transitionAct0C();
}

void LetterStorageMenu::transitionAct0C() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        if (unk_2a9 != 0) {
            unk_2a9--;
        } else {
            loadPage();
            setTransitionState(0xd);
        }
    } else {
        scrollBoxBg();
    }
}

void LetterStorageMenu::transitionAct0D() {
    transitionAct03();
}

void LetterStorageMenu::scrollLetterViewBg() {
    applySlideOffset(3, 0, 0);
    applySlideOffset(4, 0, 0);
}

void LetterStorageMenu::scrollMainBg() {
    applySlideOffset(6, 0, -16);
    unk_98 = getSlideOffsetY();
    unk_9c = getSlideOffsetY();
}

void LetterStorageMenu::scrollBoxBg() {
    applySlideOffset(4, 0, -16);
    unk_a0 = getSlideOffsetX();
}

void LetterStorageMenu::transitionAct0E() {
    initSlideOut(0, 0);
    setTransitionState(0xf);
}

void LetterStorageMenu::transitionAct0F() {
    if (stepSlideOut(-1)) {
        transitionAct10();
    }
    unk_9c = getSlideOffsetY();
}

void LetterStorageMenu::transitionAct10() {
    beginDimBackground();
    initSlideIn(0, 0);
    ((MenuBottomButtonsBody *)&unk_728c)->setLayoutYesNo0B(0x22);
    setTransitionState(0x11);
}

void LetterStorageMenu::transitionAct11() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumePromptInput();
    }
    unk_9c = getSlideOffsetY();
}

void LetterStorageMenu::transitionAct12() {
    endDimBackground();
    initSlideOut(0, 0);
    setTransitionState(0x13);
}

void LetterStorageMenu::transitionAct13() {
    if (stepSlideOut(-1)) {
        transitionAct14();
    }
    unk_9c = getSlideOffsetY();
}

void LetterStorageMenu::transitionAct14() {
    initSlideIn(0, 0);
    unk_728c.setLayoutSingle05(0x21);
    setTransitionState(0x15);
}

void LetterStorageMenu::transitionAct15() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    unk_9c = getSlideOffsetY();
}

void LetterStorageMenu::initParts() {
    s32 i;
    unk_94 = 0;
    InventoryItemGrid_Init(&unk_2e4, 2);
    unk_d44.init(1);
    InventoryBg_Init(&unk_d6c, 6);
    unk_29e = 0x41;
    unk_240c.reset();
    unk_29c = 0;
    unk_2a2 = 0x1a;
    unk_2488.init(3, 0, 0);
    unk_2890.func_0206d39c(3);
    i = 0;
    unk_2a8 = 0;
    for (; i < 0x4b; i++) {
        Letter_Clear(&unk_2b10[i]);
    }
    void *q = func_02097a04((void *)PlayerData_GetCurrent());
    if (q) {
        u8 *p = (u8 *)((LetterStorage *)q)->getPage(0);
        for (i = 0; i < 0x4b; i++) {
            Letter_Copy(&unk_2b10[i], p);
            p += 0xf4;
        }
    }
    func_ov105_0229514c();
    unk_2ab = 0;
}

void LetterStorageMenu::releaseResources() {
    cancelBgTasks();
    InventoryBg_Exit(&unk_d6c);
    InventoryItemGrid_Exit(&unk_2e4);
    PopupChoice_ForceClose(&unk_2488);
    unk_2890.func_0206d394();
    unk_728c.freeTexts();
}

void LetterStorageMenu::preInputUpdate() {
    preStateUpdate();
    unk_2424.vfunc_0c();
}

void LetterStorageMenu::postInputUpdate() {
    postStateUpdate();
}

void LetterStorageMenu::preStateUpdate() {
    cancelBgTasks();
    InventoryBg_PreUpdate(&unk_d6c);
    InventoryItemGrid_PreUpdate(&unk_2e4);
    unk_d44.updateCursorLift();
    unk_728c.freeTexts();
}

void LetterStorageMenu::postStateUpdate() {
    PopupChoice_Update(&unk_2488);
    InventoryBg_Update(&unk_d6c);
    if (unk_234c.updatePrompt()) {
        placeBalloon();
    }
}

extern "C" void LetterStorageMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void LetterStorageMenu::loadInventoryBg() {
    InventoryBg_Load(&unk_d6c, 0);
}

void LetterStorageMenu::loadBoxBg() {
    s32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/inventory/b_itm_post.bpl", h, 4, 4, 4, 4);
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_ltr0.bsc", h, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_post.bch", h, 4, 0x1e2, 0x1e2, 0x227);
}

void LetterStorageMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(&unk_d6c);
    MenuButtons_LoadTextColors(&unk_728c);
    unk_728c.setLayoutSingle05(0x21);
}

void LetterStorageMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        if (Unk_ov105_022973c4_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY + 0x10;
            s32 r = getSlotAt(x, y, 1);
            if (r != 0x41) {
                beginTouchOnSlot(r);
            } else if (((MenuBottomButtonsBody *)&unk_728c)->isTouched(9)) {
                pressTab9();
            } else if (hitPageTab(x, y)) {
                startPageSwitch();
            }
        }
    }
}

void LetterStorageMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (testFlags(4)) {
            setMainState(3);
            runMainState();
        } else {
            setMainState(0);
            unk_234c.setAutoCloseTimer(0x3c);
        }
    } else {
        if (testFlags(4)) {
            if (hasTouchMoved()) {
                beginDragFromSlot(unk_29d);
                return;
            }
            if (unk_234c.isOpenOrOpening()) {
                if (unk_2ab != 0) {
                    unk_2ab--;
                } else {
                    selectLetter(unk_29d, 1);
                    setMainState(2);
                }
                return;
            }
        }
        unk_234c.commitOpen();
    }
}

void LetterStorageMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(6);
    } else if (testFlags(4)) {
        if (hasTouchMoved()) {
            beginDragFromSlot(unk_29d);
            PopupChoice_Close(&unk_2488, 0);
            unk_234c.hide(1);
        }
    }
}

void LetterStorageMenu::mainAct03() {
    if (unk_234c.isOpenOrOpening()) {
        if (unk_2ab != 0) {
            unk_2ab--;
        } else {
            selectLetter(unk_29d, 1);
            setMainState(2);
        }
    }
}

void LetterStorageMenu::mainAct04() {
    s32 a, b, r;
    getDragPos();
    clearHoverSlot();
    a = unk_ac + 8;
    b = unk_b0 + 0x18;
    r = getSlotAt(a, b, 0);
    if (r != 0x41) {
        if (gTouchHeld == 0) {
            s32 q;
            if (isSlotDisabled(r) || (q = dropHeldOnSlot(r)) == 0) {
                flyHeldToOtherList(unk_29f, a);
            } else {
                Inventory_PlayPutDownSe();
                resumeInput();
            }
        } else {
            setHoverSlot(r);
        }
    } else if (gTouchHeld == 0) {
        flyHeldToOtherList(unk_29f, a);
    }
}

void LetterStorageMenu::mainAct05() {
    if (checkSwitchToButtons(1)) {
        setMainState(9);
    } else if (unk_2aa0.isTouched()) {
        closeLetterView();
    }
}

void LetterStorageMenu::mainAct06() {
    if (((PopupChoiceMenuBody *)&unk_2488)->isOpen()) {
        if (checkSwitchToButtons(1)) {
            cancelPopupForButtons();
        } else if (Unk_ov105_022973c4_Both()) {
            s32 r = ((PopupChoiceMenuBody *)&unk_2488)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
            if (r >= 0) {
                if (testFlags(0x800) && r == 0) {
                } else {
                    s32 t;
                    unk_2a6 = ((u8 *)this + 0x2781)[r];
                    t = 1;
                    if (unk_2a6 == 2) {
                        t = 0;
                        Snd_PlaySe(0x24);
                    }
                    PopupChoice_DecideRow(&unk_2488, r, t);
                    setMainState(0x17);
                }
            }
        }
    }
}

void LetterStorageMenu::mainAct07() {
    S *s = this;
    if (s->checkSwitchToTouch()) {
        s->startTouchInput();
        s->unk_234c.hide(1);
    } else {
        s32 r = s->takeRepeatedKeys();
        if (s->moveCursorByPad((void *)r, 0)) {
            s->updateBalloonForCursor();
            s->moveCursorToTarget();
            s->unk_234c.hide(0);
        } else {
            u32 k;
            if (s->isSlotDisabled(s->unk_2a2)) goto other;
            k = gPad[1];
            if (k & 1) {
                if (s->isLetterSlot(s->unk_2a2) || s->isStorageSlot(s->unk_2a2)) {
                    if (!s->isSlotEmpty(s->unk_2a2)) {
                        s->selectLetter(s->unk_2a2, 0);
                    }
                } else if (s->isButtonSlot(s->unk_2a2) || s->isPageTabSlot(s->unk_2a2)) {
                    s->pressCloseButton();
                }
            } else if (k & 0x800) {
                if (s->isLetterSlot(s->unk_2a2) || s->isStorageSlot(s->unk_2a2)) {
                    if (!s->isSlotEmpty(s->unk_2a2)) {
                        s32 t;
                        if (s->isLetterSlot(s->unk_2a2)) {
                            t = s->findFreeStorageSlot();
                        } else {
                            t = s->findFreePocketSlot();
                        }
                        if (t != 0x41) {
                            _ZN17LetterStorageMenu14pickUpAndFlyToEjjj(s, s->unk_2a2, t);
                            s->unk_234c.hide(1);
                            s->setFlags(0x1000);
                        }
                    }
                }
            } else {
                goto other;
            }
            return;
other:
            k = gPad[1];
            if ((k & 8) || (k & 2)) {
                s->hideCursor();
                s->pressTab9();
                s->unk_234c.hide(0);
            } else if (s->switchPageByShoulder() == 0) {
                s->unk_234c.commitOpen();
            }
        }
    }
}

void LetterStorageMenu::mainAct08() {
    S *s = this;
    s32 r = s->takeRepeatedKeys();
    if (s->moveCursorByPad((void *)r, 1)) {
        s->updateBalloonForCursor();
        s->moveCursorToTarget();
        s->unk_234c.hide(0);
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            if (s->isLetterSlot(s->unk_2a2) || s->isStorageSlot(s->unk_2a2)) {
                if (!s->isSlotDisabled(s->unk_2a2)) {
                    if (s->isSlotEmpty(s->unk_2a2)) {
                        s->beginPutDownAt(s->unk_2a2);
                    } else {
                        s->beginSwapAt(s->unk_2a2);
                    }
                }
            } else if (s->isPageTabSlot(s->unk_2a2)) {
                s->pressCloseButton();
            }
        } else if (k & 2) {
            if (s->isStorageSlot(s->unk_29f)) {
                u32 a = s->unk_2a0;
                if (a != s->unk_2a8) {
                    s->flyHeldTo((u8)(a + 0x3e), 4);
                    return;
                }
            }
            if (s->unk_2424.getAnim() == 1) {
                s->flyHeldTo(s->unk_29f, 4);
            } else {
                s->beginPutDownAt(s->unk_29f);
            }
        } else {
            if (s->switchPageByShoulder() == 0) {
                s->getHandPos();
                s->unk_234c.commitOpen();
            }
        }
    }
}

void LetterStorageMenu::mainAct09() {
    S *s = this;
    if (s->unk_2424.getAnim() == 0) {
        s32 a = s->unk_2aa0.getAnchorX(1);
        s32 b = s->unk_2aa0.getAnchorY(1);
        s->unk_2424.warpTo(a, b);
        ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(1);
    }
    if (s->checkSwitchToTouch()) {
        s->hideCursor();
        s->setMainState(5);
    } else {
        u32 k = gPad[1];
        if ((k & 1) || (k & 2)) {
            ((MenuCursor *)&s->unk_2424)->setPosePress();
            s->setMainState(0xa);
        }
    }
}

void LetterStorageMenu::mainAct0A() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->closeLetterView();
    }
}

void LetterStorageMenu::mainAct0B() {
    S *s = this;
    if (s->checkSwitchToTouch()) {
        s->cancelPopupForButtons();
    } else {
        s32 r = s->takeRepeatedKeys();
        u8 t = (u8)s->testFlags(0x800);
        if (PopupChoice_MoveCursor(&s->unk_2488, r, &s->unk_2a7, t)) {
            s->moveCursorToPopupRow();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((MenuCursor *)&s->unk_2424)->setPosePress();
                s->setMainState(0xc);
            } else if (k & 2) {
                s->cancelPopup();
            }
        }
    }
}

void LetterStorageMenu::mainAct0C() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s32 r;
        s->unk_2a6 = ((u8 *)s + 0x2781)[s->unk_2a7];
        r = 1;
        if (s->unk_2a6 == 2) {
            r = 0;
            Snd_PlaySe(0x24);
        }
        PopupChoice_DecideRow(&s->unk_2488, s->unk_2a7, r);
        s->setMainState(0x17);
    }
}

void LetterStorageMenu::mainAct0D() {
    S *s = this;
    if (s->unk_2424.isMoving() == 0) {
        s->setMainState(s->unk_2a5);
        if (s->unk_2a5 == 7) {
            s->setFocusSlot(s->unk_2a2);
        }
        s->runMainState();
    }
    s->getHandPos();
}

void LetterStorageMenu::mainAct0E() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        if (s->isButtonSlot(s->unk_2a2)) {
            s->pressTab9();
        } else if (s->isPageTabSlot(s->unk_2a2)) {
            s32 v = s->unk_2a2 - 0x3e;
            if (v == s->unk_2a8) {
                s->func_ov105_02295814();
            } else {
                s->unk_2a8 = v;
                s->startPageSwitch();
            }
        } else {
            s->func_ov105_02295814();
        }
    }
}

void LetterStorageMenu::mainAct0F() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->refreshCursor();
        if (s->unk_29c == 1) {
            s->setMainState(8);
        } else {
            s->setMainState(7);
        }
    }
}

void LetterStorageMenu::mainAct10() {
    S *s = this;
    if (s->unk_2424.func_ov002_02202928()) {
        s->pickUpAtSlot(s->unk_2a2);
        s->setMainState(0x11);
    }
}

void LetterStorageMenu::mainAct11() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->setMainState(s->unk_2a5);
    }
    s->getHandPos();
}

void LetterStorageMenu::mainAct12() {
    S *s = this;
    if (s->unk_2424.func_ov002_02202928() == 0) {
        u32 a = s->unk_2a4;
        if (s->unk_2a2 == a) {
            _ZN17LetterStorageMenu14dropHeldOnSlotEj(s);
            s->updateBalloonForCursor();
            s->setMainState(7);
            Inventory_PlayPutDownSe();
        } else {
            s->flyHeldTo(a, 4);
        }
    } else {
        s->getHandPos();
    }
}

void LetterStorageMenu::mainAct13() {
    S *s = this;
    if (s->unk_2424.func_ov002_022028fc() == 0) {
        s->exchangeHeldWith(s->unk_2a4);
        s->setFlags(0x40);
        s->setMainState(0x14);
        s->updateBalloonForCursor();
    } else {
        s->setMainState(7);
    }
}

void LetterStorageMenu::mainAct14() {
    S *s = this;
    if (s->unk_2424.isAnimDone()) {
        s->setMainState(s->unk_2a5);
    }
    if (s->unk_2424.func_ov002_02202928()) {
        if (s->testFlags(0x40)) {
            s->clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        s->getHandPos();
    }
}

void LetterStorageMenu::mainAct15() {
    S *s = this;
    if (s->unk_240c.update()) {
        if (s->testFlags(0x2000)) {
            s->clearFlags(0x2000);
            s->getFlyPos();
        } else {
            s->releaseHeldTo(s->unk_29f);
            s->resumeInput();
            Inventory_PlayPutDownSe();
        }
    } else {
        s->getFlyPos();
    }
}

void LetterStorageMenu::mainAct16() {
    S *s = this;
    if (((PopupChoiceMenuBody *)&s->unk_2488)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            s->cursorToPopupTop();
            s->setMainState(0xb);
        } else {
            s->setMainState(6);
        }
    }
}

void LetterStorageMenu::mainAct17() {
    S *s = this;
    if (PopupChoice_TickDecideDelay(&s->unk_2488)) {
        PopupChoice_Close(&s->unk_2488, 0);
        s->unk_234c.hide(1);
        if (s->unk_2424.getAnim()) {
            s->showCursorAtSlot();
        }
        s->setMainState(0x18);
    }
}

void LetterStorageMenu::mainAct18() {
    S *s = this;
    if (((PopupChoiceMenuBody *)&s->unk_2488)->isClosed()) {
        s->onPopupChoice();
    }
}

void LetterStorageMenu::mainAct19() {
    S *s = this;
    if (s->unk_2788.update(0)) {
        s->setMainState(s->unk_2a5);
        s->unk_2424.enableObjWindow();
    }
}

void LetterStorageMenu::mainAct1A() {
    S *s = this;
    if (s->unk_2aa0.stepAnim()) {
        if (s->unk_2424.getAnim()) {
            s32 a = s->unk_2aa0.getAnchorX(1);
            s32 b = s->unk_2aa0.getAnchorY(1);
            s->unk_2424.warpTo(a, b);
        }
    } else {
        s->hideCursor();
        s->setTransitionState(9);
        s->setPhase(1);
    }
}

void LetterStorageMenu::mainAct1B() {
    S *s = this;
    if (((MenuBottomButtonsBody *)&s->unk_728c)->stepPress()) {
        if (s->unk_2424.getAnim()) {
            s32 a = ((MenuBottomButtonsBody *)&s->unk_728c)->getPressOffset();
            s32 b = ((MenuBottomButtonsBody *)&s->unk_728c)->getTargetX(-1);
            s32 c = ((MenuBottomButtonsBody *)&s->unk_728c)->getTargetY(-1);
            s->unk_2424.warpTo(a + b, a + c);
        }
    } else {
        s->hideCursor();
        s->setPhase(1);
    }
}

void LetterStorageMenu::mainAct1C() {
    S *s = this;
    if (LetterGrid_UpdatePopAnim(&s->unk_d44)) {
        s->setFlags(0x1000);
        s->unk_29c = 0;
        s->resumeInput();
    }
}

void LetterStorageMenu::mainAct1D() {
    if (checkSwitchToButtons(1)) {
        startPromptButtonInput();
    } else {
        if (Unk_ov105_0229677c_Both()) {
            if (((MenuBottomButtonsBody *)&unk_728c)->isTouched(3)) {
                pressCloseTab();
            }
            if (((MenuBottomButtonsBody *)&unk_728c)->isTouched(4)) {
                pressTab4();
            }
        }
    }
}

void LetterStorageMenu::mainAct1E() {
    if (checkSwitchToTouch()) {
        startPromptTouchInput();
    } else {
        u16 f = gPad[1];
        if ((f & 1) != 0) {
            ((MenuCursor *)&unk_2424)->setPosePress();
            setMainState(0x1f);
        } else if ((f & 2) != 0) {
            hideCursor();
            pressTab4();
        } else if ((f & 8) != 0) {
            hideCursor();
            pressCloseTab();
        } else {
            u32 old = unk_2aa;
            s32 t = takeRepeatedKeys();
            if (MenuKeys_HasLeft((void *)t)) {
                if (unk_2aa != 0) {
                    unk_2aa--;
                }
            } else if (MenuKeys_HasRight((void *)t)) {
                if (unk_2aa < 1) {
                    unk_2aa++;
                }
            }
            if (old != unk_2aa) {
                if (unk_2aa != 0) {
                    s32 a = ((MenuBottomButtonsBody *)&unk_728c)->getTargetX(4);
                    s32 b = ((MenuBottomButtonsBody *)&unk_728c)->getTargetY(4);
                    moveCursorToPoint(a, b);
                } else {
                    s32 a = ((MenuBottomButtonsBody *)&unk_728c)->getTargetX(3);
                    s32 b = ((MenuBottomButtonsBody *)&unk_728c)->getTargetY(3);
                    moveCursorToPoint(a, b);
                }
            }
        }
    }
}

void LetterStorageMenu::mainAct1F() {
    if (unk_2424.isAnimDone()) {
        if (unk_2aa != 0) {
            pressTab4();
        } else {
            pressCloseTab();
        }
    }
}

void LetterStorageMenu::startTouchInput() {
    hideCursor();
    clearFocusSlot();
    setMainState(0);
}

void LetterStorageMenu::startButtonInput() {
    unk_29e = 0x41;
    showCursor();
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(7);
    setFocusSlot(unk_2a2);
}

void LetterStorageMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void LetterStorageMenu::startPromptTouchInput() {
    hideCursor();
    setMainState(0x1d);
}

void LetterStorageMenu::startPromptButtonInput() {
    restartKeyRepeat();
    unk_2aa = 1;
    ((MenuCursor *)&unk_2424)->setAnimIfChanged(1);
    unk_2424.vfunc_0c();
    s32 a = ((MenuBottomButtonsBody *)&unk_728c)->getTargetX(4);
    s32 b = ((MenuBottomButtonsBody *)&unk_728c)->getTargetY(4);
    unk_2424.warpTo(a, b);
    setMainState(0x1e);
}

void LetterStorageMenu::resumePromptInput() {
    if (MenuCtrl_IsTouch()) {
        startPromptTouchInput();
    } else {
        startPromptButtonInput();
    }
}

void LetterStorageMenu::beginTouchOnSlot(u32 a) {
    unk_29d = a;
    setMainState(1);
    u32 x = gTouchCurX;
    u32 y = gTouchCurY;
    unk_a4 = getSlotX(unk_29d) - x;
    unk_a8 = getSlotY(unk_29d) - y;
    unk_29e = a;
    unk_234c.queueOpen();
    unk_234c.commitOpen();
    unk_2ab = 2;
    if (isSlotDisabled(a)) {
        clearFlags(4);
    } else {
        setFlags(4);
        Inventory_PlayTouchSe();
    }
}

void LetterStorageMenu::beginDragFromSlot(u8 a) {
    setFlags(0x1000);
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    unk_234c.hide(1);
    pickUpFrom(a);
    if (unk_29c == 1) {
        setMainState(4);
    }
    getDragPos();
    Inventory_PlayPickUpSe();
}

void LetterStorageMenu::pickUpAtSlot(u8 a) {
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    unk_234c.hide(1);
    pickUpFrom(a);
    if (unk_29c == 1) {
        unk_2a5 = 8;
    }
    getHandPos();
    Inventory_PlayPickUpSe();
}

void LetterStorageMenu::flyHeldTo(u32 a, u32 c) {
    unk_29f = a;
    unk_240c.setPos(unk_ac, unk_b0);
    s32 t = getSlotY(a);
    if (isPageTabSlot(a)) {
        t -= 8;
    }
    unk_240c.startLinear(getSlotX(a), t, c);
    unk_240c.update();
    getFlyPos();
    if (isPageTabSlot(a)) {
        setFlags(0x2000);
    } else {
        clearFlags(0x2000);
    }
    setMainState(0x15);
}

void LetterStorageMenu::flyHeldToOtherList(u32 a, s32 b) {
    u32 r = 0x41;
    if (b >= 0xc0) {
        if (isStorageSlot(a)) {
            r = findFreePocketSlot();
        }
    } else {
        if (isLetterSlot(a)) {
            r = findFreeStorageSlot();
        }
    }
    if (r != 0x41) {
        a = r;
    }
    flyHeldTo(a, 4);
}

void LetterStorageMenu::pickUpAndFlyTo(u32 a, u32 b, u32 c) {
    pickUpFrom(a);
    unk_ac = getSlotX(a);
    unk_b0 = getSlotY(a);
    flyHeldTo(b, 4);
}

u32 LetterStorageMenu::findFreePocketSlot() {
    s32 r = Inventory_FindEmptyLetter();
    if (r == -1) {
        return 0x41;
    }
    return (u8)(r + 0x1a);
}

u32 LetterStorageMenu::findFreeStorageSlot() {
    Letter *p = &unk_2b10[unk_2a8 * 0x19];
    s32 i;
    for (i = 0; i < 0x19; p++, i++) {
        if (((LetterView *)p)->getState() == 0) {
            return (u8)(i + 0x24);
        }
    }
    return 0x41;
}

void LetterStorageMenu::cancelBgTasks() {
    ((BgVramTask *)unk_2ac)->cancel();
}

BOOL LetterStorageMenu::isLetterSlot(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return TRUE;
    }
    return FALSE;
}

BOOL LetterStorageMenu::isStorageSlot(u32 a) {
    if (a >= 0x24 && a <= 0x3c) {
        return TRUE;
    }
    return FALSE;
}

BOOL LetterStorageMenu::isButtonSlot(u32 a) {
    if (a == 0x3d) {
        return TRUE;
    }
    return FALSE;
}

BOOL LetterStorageMenu::isPageTabSlot(u32 a) {
    if ((u8)(a + 0xc2) <= 2) {
        return TRUE;
    }
    return FALSE;
}

u32 LetterStorageMenu::toLetterGridIndex(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return (u8)(a - 0x1a);
    }
    if (a >= 0x24 && a <= 0x3c) {
        return (u8)(a - 0x1a);
    }
    return 0;
}

u32 LetterStorageMenu::fromLetterGridIndex(u32 a) {
    if (a <= 9) {
        return (u8)(a + 0x1a);
    }
    if (a >= 0xa && a <= 0x22) {
        return (u8)(a + 0x1a);
    }
    return 0x41;
}

s32 LetterStorageMenu::getSlotAt(u32 a, u32 b, u32 c) {
    s32 r = _ZN10LetterGrid18findPocketLetterAtEii(&unk_d44);
    if (r == 0x37) {
        r = unk_d44.findLetterAt0A(a, b);
    }
    if (r != 0x37) {
        if (c != 0 && LetterGrid_IsSlotEmpty(&unk_d44, r)) {
            return 0x41;
        }
        return fromLetterGridIndex(r);
    }
    return 0x41;
}

BOOL LetterStorageMenu::dropHeldOnSlot(u32 a) {
    if (!isSlotEmpty(a)) {
        Letter_Copy(&unk_1a8, (void *)getSlotLetter(a));
        putLetterInSlot(unk_29f, &unk_1a8);
    }
    releaseHeldTo(a);
    return TRUE;
}

void LetterStorageMenu::putLetterInSlot(u32 a, void *c) {
    if (isLetterSlot(a) || isStorageSlot(a)) {
        unk_d44.func_ov094_02294318(toLetterGridIndex(a), (s32)c);
    } else if (isPageTabSlot(a)) {
        Letter_Copy(&unk_2b10[(unk_2a1 - 0x24) + unk_2a0 * 0x19], c);
    }
}

s32 LetterStorageMenu::getSlotLetter(u32 a) {
    if (isLetterSlot(a) || isStorageSlot(a)) {
        return (s32)unk_d44.getLetter(toLetterGridIndex(a));
    }
    return 0;
}

s32 LetterStorageMenu::getSlotX(u32 a) {
    if (isLetterSlot(a) || isStorageSlot(a)) {
        return LetterGrid_GetSlotX(&unk_d44, toLetterGridIndex(a));
    }
    if (a == 0x3d) {
        return 0xbc;
    }
    if (isPageTabSlot(a)) {
        return func_02087e14(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x80;
    }
    return 0;
}

s32 LetterStorageMenu::getSlotY(u32 a) {
    if (isLetterSlot(a) || isStorageSlot(a)) {
        return LetterGrid_GetSlotY(&unk_d44, toLetterGridIndex(a)) - 0x10;
    }
    if (a == 0x3d) {
        return 0xb6;
    }
    if (isPageTabSlot(a)) {
        return func_02087e0c(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x58;
    }
    return 0;
}

void LetterStorageMenu::disableAllPockets() {
    InventoryItemGrid_DisableSlotRange(&unk_2e4, 0, 0xe);
    unk_d44.highlightLetterKinds(4);
}

BOOL LetterStorageMenu::isSlotDisabled(u32 a) {
    if (isLetterSlot(a)) {
        return unk_d44.isHighlighted(toLetterGridIndex(a));
    }
    return FALSE;
}

BOOL LetterStorageMenu::isSlotEmpty(u32 a) {
    if (isLetterSlot(a) || isStorageSlot(a)) {
        return LetterGrid_IsSlotEmpty(&unk_d44, toLetterGridIndex(a));
    }
    return TRUE;
}

void LetterStorageMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_2e4);
    unk_d44.clearCursorSlot();
}

void LetterStorageMenu::setFocusSlot(u32 b) {
    S *s = this;
    if (s->isLetterSlot(b) || s->isStorageSlot(b)) {
        s->unk_d44.setCursorSlot(s->toLetterGridIndex(b));
        InventoryItemGrid_ClearCursorSlot(&s->unk_2e4);
    } else {
        s->clearFocusSlot();
    }
}

void LetterStorageMenu::clearHoverSlot() {
    S *s = this;
    InventoryItemGrid_ClearMarks(&s->unk_2e4);
    s->unk_d44.clearMarks();
}

void LetterStorageMenu::setHoverSlot(u32 b) {
    S *s = this;
    if (s->isLetterSlot(b) || s->isStorageSlot(b)) {
        s->unk_d44.markSlot(s->toLetterGridIndex(b));
    }
}

BOOL LetterStorageMenu::hasTouchMoved() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void LetterStorageMenu::placeBalloon() {
    S *s = this;
    s32 r6 = s->getSlotX(s->unk_29e) - 0x6d;
    s32 r4 = s->getSlotY(s->unk_29e) - 0x78;
    if (MenuCtrl_IsButtons()) r4 -= 8;
    s->unk_234c.setPos(r6, r4);
    if (s->isLetterSlot(s->unk_29e) || s->isStorageSlot(s->unk_29e)) {
        s->unk_d44.showLetterName(&s->unk_234c,
 s->toLetterGridIndex(s->unk_29e));
    }
}

void LetterStorageMenu::updateBalloonForCursor() {
    S *s = this;
    if (s->isLetterSlot(s->unk_2a2) || s->isStorageSlot(s->unk_2a2)) {
        if (s->isSlotEmpty(s->unk_2a2)) {
            s->unk_234c.cancelQueuedOpen();
        } else {
            s->unk_29e = s->unk_2a2;
            s->unk_234c.queueOpen();
        }
    } else {
        s->unk_234c.cancelQueuedOpen();
    }
}

void LetterStorageMenu::drawHeldItem() {
    S *s = this;
    if (s->testFlags(0x40) == 0) {
        u32 v = s->unk_29c;
        if (v == 0) {
        } else if (v == 1) {
            s->unk_d44.drawHeldLetter(s->unk_ac, s->unk_b0, &s->unk_b4)
;
        }
    }
}

void LetterStorageMenu::getDragPos() {
    S *s = this;
    s->unk_ac = s->unk_a4 + gTouchCurX;
    s->unk_b0 = s->unk_a8 + gTouchCurY;
}

void LetterStorageMenu::getHandPos() {
    S *s = this;
    s->unk_ac = s->unk_2424.getFrameScreenX() - 2;
    s->unk_b0 = s->unk_2424.getFrameScreenY() - 4;
    if (s->unk_2424.getAnim() == 1) {
        s->unk_b0 -= 0x16;
    }
}

void LetterStorageMenu::getFlyPos() {
    S *s = this;
    s->unk_ac = s->unk_240c.getX();
    s->unk_b0 = s->unk_240c.getY();
}

void LetterStorageMenu::pickUpFrom(u32 b) {
    S *s = this;
    if (s->isLetterSlot(b) || s->isStorageSlot(b)) {
        u32 r4 = s->toLetterGridIndex(b);
        s->unk_29c = 1;
        Letter_Copy(&s->unk_b4, s->unk_d44.getLetter(r4));
        s->unk_d44.clearLetter(r4);
    }
}

void LetterStorageMenu::releaseHeldTo(u32 b) {
    S *s = this;
    if (s->unk_29c == 1) {
        s->putLetterInSlot(b, &s->unk_b4);
    }
    s->unk_29c = 0;
}

void LetterStorageMenu::exchangeHeldWith(u32 b) {
    S *s = this;
    if (s->unk_29c == 1) {
        Letter_Copy(&s->unk_1a8, &s->unk_b4);
        s->pickUpFrom(b);
        s->putLetterInSlot(b, &s->unk_1a8);
    }
}

void LetterStorageMenu::showCursor() {
    S *s = this;
    s32 r4 = s->getCursorTargetX();
    s32 r2 = s->getCursorTargetY();
    s->unk_2424.warpTo(r4, r2);
    if (s->isButtonSlot(s->unk_2a2)) {
        ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(1);
    }
    s->refreshCursor();
}

s32 LetterStorageMenu::getCursorTargetX() {
    S *s = this;
    s32 r4 = s->getSlotX(s->unk_2a2);
    if (s->testFlags(0x20)) {
        r4 += 0x100;
    } else if (s->testFlags(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 LetterStorageMenu::getCursorTargetY() {
    S *s = this;
    return s->getSlotY(s->unk_2a2);
}

void LetterStorageMenu::hideCursor() {
    S *s = this;
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(0);
    s->unk_2424.vfunc_0c();
}

void LetterStorageMenu::moveCursorToTarget() {
    S *s = this;
    if (s->testFlags(8)) {
        s32 r5 = s->getCursorTargetX();
        s32 r2 = s->getCursorTargetY();
        s->unk_2424.warpTo(r5, r2);
        s->clearFlags(8);
    } else {
        s32 r5 = s->getCursorTargetX();
        s32 r2 = s->getCursorTargetY();
        s->unk_2424.moveToEase(r5, r2, 3, 1);
        s->unk_2a5 = s->unk_8d;
        s->setMainState(0xd);
    }
}

void LetterStorageMenu::moveCursorToPoint(s32 a, s32 b) {
    S *s = this;
    s->unk_2424.moveToEase(a, b, 3, 1);
    s->unk_2a5 = s->unk_8d;
    s->setMainState(0xd);
}

void LetterStorageMenu::moveCursorToPopupRow() {
    S *s = this;
    s32 r4 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowX();
    s32 r2 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowY(s->unk_2a7);
    s->unk_2424.moveToLinear(r4, r2, 2);
    s->unk_2a5 = s->unk_8d;
    s->setMainState(0xd);
}

void LetterStorageMenu::cancelPopup() {
    S *s = this;
    s->unk_2a6 = 4;
    s->unk_2a7 = PopupChoice_DecideCancel(&s->unk_2488, 1);
    s32 r4 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowX();
    s32 r2 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowY(s->unk_2a7);
    s->unk_2424.warpTo(r4, r2);
    s->unk_2424.setAnimAtEnd(8);
    s->setMainState(0x17);
}

void LetterStorageMenu::cursorToPopupTop() {
    S *s = this;
    if (s->testFlags(0x800)) {
        s->unk_2a7 = 1;
    } else {
        s->unk_2a7 = 0;
    }
    s32 r4 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowX();
    s32 r2 = ((PopupChoiceMenuBody *)&s->unk_2488)->getRowY(s->unk_2a7);
    s->unk_2424.warpTo(r4, r2);
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(7);
}

void LetterStorageMenu::showCursorAtSlot() {
    S *s = this;
    s32 r4 = s->getCursorTargetX();
    s32 r2 = s->getCursorTargetY();
    s->unk_2424.warpTo(r4, r2);
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(1);
}

void LetterStorageMenu::refreshCursor() {
    S *s = this;
    s->unk_2424.setPoseIdle();
    s->unk_2424.vfunc_0c();
}

void LetterStorageMenu::pressCloseButton() {
    S *s = this;
    ((MenuCursor *)&s->unk_2424)->setPosePress();
    s->setMainState(0xe);
}

void LetterStorageMenu::func_ov105_02295814() {
    S *s = this;
    s->unk_2424.setPoseRelease();
    s->setMainState(0xf);
}

void LetterStorageMenu::beginMoveFromPopup() {
    S *s = this;
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(4);
    s->setMainState(0x10);
    s->setFlags(0x1000);
}

void LetterStorageMenu::beginPutDownAt(u32 b) {
    S *s = this;
    s->unk_234c.hide(1);
    s->unk_2a4 = b;
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(5);
    s->setMainState(0x12);
}

void LetterStorageMenu::beginSwapAt(u32 b) {
    S *s = this;
    s->unk_234c.hide(1);
    s->unk_2a5 = s->unk_8d;
    s->unk_2a4 = b;
    ((MenuCursor *)&s->unk_2424)->setAnimIfChanged(6);
    s->setMainState(0x13);
}

void LetterStorageMenu::onPopupChoice() {
    S *s = this;
    switch (s->unk_2a6) {
    case 0:
        s->beginMoveFromPopup();
        break;
    case 1:
        s->startReadLetter();
        break;
    case 2:
        s->startDiscardLetter();
        break;
    case 3:
        s->onChoiceDiscard();
        break;
    case 4:
    default:
        s->resumeInput();
        break;
    }
}

void LetterStorageMenu::openPopup(u32 b) {
    S *s = this;
    u32 r2 = s->testFlags(0x800);
    ((PopupChoiceMenuBody *)&s->unk_2488)->setRowsFromIds((PopupChoiceIdList *)s->unk_2488.unk_2f4, r2);
    s32 r6 = s->getSlotX(s->unk_2a3);
    s32 r2b = s->getSlotY(s->unk_2a3);
    if (b != 0) {
        _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(&s->unk_2488, &s->unk_234c, r2b);
    } else {
        s->unk_2488.placeNearPoint(r6, r2b);
    }
    PopupChoice_Open(&s->unk_2488, 0);
    s->setMainState(0x16);
}

void LetterStorageMenu::cancelPopupForButtons() {
    S *s = this;
    s->unk_2a6 = 4;
    s->showCursorAtSlot();
    PopupChoice_Close(&s->unk_2488, 0);
    s->setMainState(0x18);
}

void LetterStorageMenu::selectLetter(u32 a, u32 b) {
    S *s = this;
    s->clearFlags(0x800);
    s->unk_2a3 = a;
    ChoiceIdList_Clear(s->unk_2488.unk_2f4, 4);
    u32 r7 = s->getSlotLetter(a);
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(s->unk_2488.unk_2f4, 0, 0);
    }
    u32 r5 = ((LetterView *)r7)->getState();
    if (r5 != 0) {
        if (r5 == 7) {
            ChoiceIdList_Add(s->unk_2488.unk_2f4, 0x17, 1);
        } else {
            ChoiceIdList_Add(s->unk_2488.unk_2f4, 0x14, 1);
        }
    }
    if (((LetterView *)r7)->getPresent() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            ChoiceIdList_Add(s->unk_2488.unk_2f4, 0x15, 3);
        }
    }
    ChoiceIdList_Add(s->unk_2488.unk_2f4, 2, 4);
    s->hideCursor();
    if (b == 0) {
        s->unk_234c.hide(1);
    }
    s->openPopup(b);
}

void LetterStorageMenu::openDiscardConfirm() {
    setFlags(0x800);
    ChoiceIdList_Clear(&unk_2488.unk_2f4, 4);
    ChoiceIdList_Add(&unk_2488.unk_2f4, 0x1a, 4);
    ChoiceIdList_Add(&unk_2488.unk_2f4, 0x15, 2);
    ChoiceIdList_Add(&unk_2488.unk_2f4, 0x19, 4);
    openPopup(0);
}

void LetterStorageMenu::moveCursorInPocketLetters(void *pad, u32 x) {
    s32 r6 = unk_2a2 - 0x1a;
    s32 r4 = r6 >> 1;
    if (MenuKeys_HasLeft(pad)) {
        if ((r6 & 1) > 0) {
            unk_2a2 = unk_2a2 - 1;
        } else {
            unk_2a2 = r4 * 5 + 0x28;
            return;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if ((r6 & 1) < 1) {
            unk_2a2 = unk_2a2 + 1;
        } else {
            unk_2a2 = r4 * 5 + 0x24;
            setFlags(0x20);
            return;
        }
    }
    if (isLetterSlot(unk_2a2)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (r4 > 0) {
                    unk_2a2 = unk_2a2 - 2;
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (r4 < 4) {
                    unk_2a2 = unk_2a2 + 2;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    ((MenuCursor *)&unk_2424)->switchToAnim07();
                }
            }
        }
    }
}

void LetterStorageMenu::moveCursorInStorage(void *pad, u32 x) {
    s32 r4 = unk_2a2 - 0x24;
    s32 r6 = 0;
    while (r4 >= 5) {
        r6++;
        r4 -= 5;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (r4 > 0) {
            unk_2a2 = unk_2a2 - 1;
            r4 = r4 - 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1b;
            setFlags(0x10);
            return;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (r4 < 4) {
            unk_2a2 = unk_2a2 + 1;
            r4 = r4 + 1;
        } else {
            unk_2a2 = r6 * 2 + 0x1a;
            return;
        }
    }
    if (isStorageSlot(unk_2a2)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (r6 > 0) {
                    unk_2a2 = unk_2a2 - 5;
                } else if (r4 < 3) {
                    unk_2a2 = r4 + 0x3e;
                } else {
                    unk_2a2 = 0x40;
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (r6 < 4) {
                    unk_2a2 = unk_2a2 + 5;
                } else if (x == 0) {
                    unk_2a2 = 0x3d;
                    ((MenuCursor *)&unk_2424)->switchToAnim07();
                }
            }
        }
    }
}

void LetterStorageMenu::moveCursorOnButton(void *pad) {
    if (MenuKeys_HasUp(pad)) {
        ((MenuCursor *)&unk_2424)->switchToAnim01();
        unk_2a2 = 0x22;
    }
}

void LetterStorageMenu::moveCursorOnPageTabs(void *pad) {
    if (MenuKeys_HasLeft(pad)) {
        if (unk_2a2 > 0x3e) {
            unk_2a2 = unk_2a2 - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (unk_2a2 < 0x40) {
            unk_2a2 = unk_2a2 + 1;
        }
    }
    if (MenuKeys_HasDown(pad)) {
        unk_2a2 = unk_2a2 - 0x1a;
    }
}

BOOL LetterStorageMenu::moveCursorByPad(void *pad, u32 x) {
    u8 old = unk_2a2;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (isLetterSlot(unk_2a2)) {
        moveCursorInPocketLetters(pad, x);
    } else if (isStorageSlot(unk_2a2)) {
        moveCursorInStorage(pad, x);
        if (isPageTabSlot(unk_2a2)) {
            if (x == 1) {
                ((MenuCursor *)&unk_2424)->setAnimIfChanged(1);
            }
        }
    } else if (isButtonSlot(unk_2a2)) {
        moveCursorOnButton(pad);
    } else if (isPageTabSlot(unk_2a2)) {
        moveCursorOnPageTabs(pad);
        if (!isPageTabSlot(unk_2a2)) {
            if (x == 1) {
                unk_2424.setAnimAtEnd(4);
            }
        }
    }
    if (old != unk_2a2) {
        return TRUE;
    }
    return FALSE;
}

void LetterStorageMenu::startReadLetter() {
    setTransitionState(4);
    setPhase(1);
    setFlags(0x100);
}

void LetterStorageMenu::closeLetterView() {
    setMainState(0x1a);
    unk_2aa0.setState(2);
    Snd_PlaySe(0x29);
}

void LetterStorageMenu::startDiscardLetter() {
    u8 r4 = unk_2a3;
    pickUpFrom(r4);
    unk_ac = getSlotX(r4);
    unk_b0 = getSlotY(r4);
    if (MenuCtrl_IsButtons()) {
        unk_ac -= 2;
        unk_b0 -= 2;
    }
    setMainState(0x1c);
    LetterGrid_StartPopAnim(&unk_d44);
}

void LetterStorageMenu::onChoiceDiscard() { openDiscardConfirm(); }

void LetterStorageMenu::func_ov105_0229514c() {}

void LetterStorageMenu::pressTab9() {
    Snd_PlaySe(0x29);
    ((MenuBottomButtonsBody *)&unk_728c)->setSelected(9);
    setMainState(0x1b);
    unk_8c = 0xe;
}

void LetterStorageMenu::pressCloseTab() {
    Snd_PlaySe(0x27);
    ((MenuBottomButtonsBody *)&unk_728c)->setSelected(3);
    unk_8c = 4;
    clearFlags(0x100);
    setMainState(0x1b);
}

void LetterStorageMenu::pressTab4() {
    Snd_PlaySe(0x2a);
    ((MenuBottomButtonsBody *)&unk_728c)->setSelected(4);
    unk_8c = 0x12;
    setMainState(0x1b);
}

void LetterStorageMenu::drawPageTabs() {
    s32 i, j;
    s32 a, b;
    s32 z0 = 0, z1 = 0, z2 = 0;
    void *p = (void *)(unk_a0 + 0x80);
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i == unk_2a8) {
            a = 0x52;
            b = 4;
        } else {
            a = 0x50;
            b = 5;
        }
        func_02088730(1, &data_ov105_02298544[j], p, a, -1, 1, z0);
        func_02088730(1, &data_ov105_02298544[j + 1], p, a, b, 1, z1);
        func_02088730(1, &data_ov105_02298544[j + 2], p, 0x50, -1, 1, z2);
    }
}

void LetterStorageMenu::loadPage() {
    LetterGrid_SetLetters0A(&unk_d44, &unk_2b10[unk_2a8 * 0x19]);
    Gfx2d_LoadCharFile(sLetterStoragePageChars[unk_2a8], gCurrentHeap, 4, 0x1e2, 0x1e2, 0x1ed);
    beginSubSlideIn(2, 0, 2, 0x30);
    setSlideExtent(0xc0);
    Gfx2d_ShowLayer(4);
    setFlags(0x200);
    scrollBoxBg();
}

void LetterStorageMenu::startPageSlideOut() {
    unk_234c.hide(1);
    hideCursor();
    beginSubSlideOut(2, 0, 2, 0x30);
    setSlideExtent(0xc0);
}

BOOL LetterStorageMenu::hitPageTab(s32 x, s32 y) {
    s32 i, j;
    s32 xs = x - 0x80;
    volatile s32 yv = y;
    yv = y - 0x60;
    for (i = 0, j = i; i < 3; i++, j += 3) {
        if (i != unk_2a8) {
            if (Cell_HitTest(&data_ov105_02298544[j], xs, yv, 2, 2)) {
                unk_2a8 = i;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void LetterStorageMenu::startPageSwitch() {
    Snd_PlaySe(data_ov105_02298314[unk_2a8]);
    unk_234c.hide(1);
    hideCursor();
    unk_8c = 0xb;
    setPhase(1);
    setFlags(0x40);
}

void LetterStorageMenu::beginDimBackground() {
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-6);
    ((MenuBottomButtonsBody *)&unk_728c)->enableObjWindow();
}

void LetterStorageMenu::endDimBackground() {
    Gfx2d_EndSubObjWinBrightness();
    ((MenuBottomButtonsBody *)&unk_728c)->disableObjWindow();
}

BOOL LetterStorageMenu::switchPageByShoulder() {
    s32 d = 0;
    u32 k = gPad[1];
    if (k & 0x200) {
        d = -1;
    } else if (k & 0x100) {
        d = 1;
    }
    if (d != 0) {
        d += unk_2a8;
        if (d < 0) {
            d = 2;
        } else if (d > 2) {
            d = 0;
        }
        unk_2a8 = d;
        startPageSwitch();
    }
    return FALSE;
}

BOOL LetterStorageMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void LetterStorageMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

void LetterStorageMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }

extern "C" const char *sLetterStoragePageChars[3] = {data_ov105_022984e4, data_ov105_02298504, data_ov105_02298524};

extern "C" char data_ov105_02298504[] = "menu/inventory/b_itm_post1.bch";

extern "C" const u16 data_ov105_02298314[3] = {0x1b, 0x1c, 0x1d};

extern "C" char data_ov105_022984e4[] = "menu/inventory/b_itm_post0.bch";

extern "C" Unk_ov105_Ent data_ov105_02298544[9] = {
    {0x41ac00c0, 0x000041c0}, {0x41ac00c1, 0x0000411e}, {0x41ac00c3, 0x0000111e},
    {0x41c400c0, 0x000041c2}, {0x41c400c1, 0x0000511e}, {0x41c400c3, 0x0000111e},
    {0x41dc00c0, 0x000041c4}, {0x41dc00c1, 0x0000511e}, {0x41dc00c3, 0xffff111e},
};
