// ov104: scene overlay (class PostOfficeMenu, vtable 0x02298170). Linked as one unit.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class PostOfficeMenu;
class MenuLauncher;
class Letter;
typedef PostOfficeMenu S;

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
void func_02065c94(void *p);
void func_02065e70(void *dst, void *src);
void func_02065af0(u32 a);
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
extern void *data_021c6210;
}

// Main-module helper classes (real symbol names) -------------------------------------------------

class Letter {
public:
    Letter();
    ~Letter();
    u32 unk_00[0xf4 / 4];
};

// Same 0xf4-byte element object under the name that owns the state accessors
class Unk_02065554 {
public:
    s32 func_02065554();
    s32 func_02065578();
    u32 func_020655d0();
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
class Unk_020e1c64 : public MsgString {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u32 unk_04[7];
};
class PlayerId {
public:
    void func_020940d0(MsgString *p);
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
class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
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
};
class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmAnd06(u8 v);
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
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
};

typedef void (PostOfficeMenu::*Unk_ov104_02298170_Fn)();

// Vtable 0x02298170
class PostOfficeMenu : public MenuProc {
public:
    PostOfficeMenu()
        : unk_c0(), unk_1b4(), unk_2a8(), unk_2e0(), unk_d40(), unk_d68(), unk_2348(), unk_2408(), unk_2420(), unk_2484(),
          unk_2784(), unk_288c(), unk_2a9c(), unk_2b0c(), unk_3494(), unk_3e1c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    BOOL sendLetterRecord(void *p);
    void updateOnlineSend();
    void beginOnlineSend();
    u32 deliverVillagerLettersNow(void *p);
    u32 deliverToMailboxes(void *p);
    s32 queueLetterForDelivery(void *p);
    u32 queueLetters(void *p);
    u32 checkSendLetters(void *p, s32 flag);
    u32 takeOtherTownLetter(void *p);
    BOOL hasOtherTownLetter(void *p);
    void pressCancelButton();
    void pressSendButton();
    void returnUnsentLetters(s32 flag);
    void exchangeHeldWith(u32 i);
    void releaseHeldTo(u32 i);
    void pickUpFrom(u32 i);
    void getFlyPos();
    void getHandPos();
    void getDragPos();
    void drawHeldItem();
    void updateBalloonForCursor();
    void placeBalloon();
    BOOL hasTouchMoved();
    void setHoverSlot(u32 i);
    void clearHoverSlot();
    void setFocusSlot(u32 i);
    void clearFocusSlot();
    BOOL isSlotEmpty(u32 i);
    BOOL isSlotDisabled(u32 i);
    void disableAllPockets();
    s32 getSlotY(u32 i);
    s32 getSlotX(u32 i);
    void * getSlotLetter(u32 i);
    void putLetterInSlot(u32 i, void *p);
    BOOL dropHeldOnSlot(u32 i);
    u8 getSlotAt(u32 i, s32 a, u32 flag);
    u8 fromLetterGridIndex(u32 i);
    u8 toLetterGridIndex(u32 i);
    BOOL isButtonSlot(u32 i);
    BOOL isBoxSlot(u32 i);
    BOOL isLetterSlot(u32 i);
    void cancelBgTasks();
    u8 findFreeBoxSlot();
    u8 findFreePocketSlot();
    void pickUpAndFlyTo(u32 i, u32 a);
    void flyHeldToOtherList(u32 i, s32 a);
    void flyHeldTo(u32 i, u32 a);
    void pickUpAtSlot(u32 i);
    void beginDragFromSlot(u32 i);
    void beginTouchOnSlot(u32 i);
    void resumeInput();
    void startButtonInput();
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
    /* 0xb0 */ u16 unk_b0;
    /* 0xb2 */ u16 unk_b2;
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
    /* 0xbf */ volatile u8 unk_bf;
    /* 0x0c0 */ Letter unk_c0;
    /* 0x1b4 */ Letter unk_1b4;
    /* 0x2a8 */ BgVramTaskPair unk_2a8[1];
    /* 0x2e0 */ InventoryItemGrid unk_2e0;
    /* 0xd40 */ LetterGrid unk_d40;
    /* 0xd68 */ InventoryBg unk_d68;
    /* 0x2348 */ TouchPromptBalloon unk_2348;
    /* 0x2408 */ CursorMotion unk_2408;
    /* 0x2420 */ MenuCursorBuf0 unk_2420;
    /* 0x2484 */ PopupChoiceMenu unk_2484;
    /* 0x2784 */ MenuErrorMessage unk_2784;
    /* 0x288c */ Unk_0206d0a0 unk_288c;
    /* 0x2a9c */ MenuLabelButton unk_2a9c;
    /* 0x2b0c */ Letter unk_2b0c[10];
    /* 0x3494 */ Letter unk_3494[10];
    /* 0x3e1c */ MenuBottomButtons unk_3e1c;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov104_SceneEntry {
    PostOfficeMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" {
void PostOfficeMenu_RestorePocketLetters(S *s);
void PostOfficeMenu_BackupPocketLetters(S *s);
void PostOfficeMenu_OnChoiceDiscard(S *s);
void PostOfficeMenu_StartDiscardLetter(S *s);
void PostOfficeMenu_CloseLetterView(S *s);
void PostOfficeMenu_StartReadLetter(S *s);
BOOL PostOfficeMenu_MoveCursorByPad(S *s, s32 a, s32 b);
void PostOfficeMenu_MoveCursorOnButtons(S *s, s32 a);
void PostOfficeMenu_MoveCursorInBox(S *s, s32 a, s32 b);
void PostOfficeMenu_MoveCursorInPocketLetters(S *s, s32 a, s32 b);
void PostOfficeMenu_OpenDiscardConfirm(S *s);
void PostOfficeMenu_SelectLetter(S *s, u32 a, s32 b);
void PostOfficeMenu_CancelPopupForButtons(S *s);
void PostOfficeMenu_OpenPopup(S *s, s32 a);
void PostOfficeMenu_OnPopupChoice(S *s);
void PostOfficeMenu_BeginSwapAt(S *s, u32 a);
void PostOfficeMenu_BeginPutDownAt(S *s, u32 a);
void PostOfficeMenu_BeginMoveFromPopup(S *s);
void PostOfficeMenu_PressButton(S *s);
void PostOfficeMenu_RefreshCursor(S *s);
void PostOfficeMenu_ShowCursorAtSlot(S *s);
void PostOfficeMenu_CursorToPopupTop(S *s);
void PostOfficeMenu_CancelPopup(S *s);
void PostOfficeMenu_MoveCursorToPopupRow(S *s);
void PostOfficeMenu_MoveCursorToTarget(S *s);
void PostOfficeMenu_HideCursor(S *s);
s32 PostOfficeMenu_GetCursorTargetY(S *s);
s32 PostOfficeMenu_GetCursorTargetX(S *s);
void PostOfficeMenu_ShowCursor(S *s);
void PostOfficeMenu_StartTouchInput(S *s);
void PostOfficeMenu_LoadObjGraphics(S *s);
void PostOfficeMenu_LoadBoxBg(S *s);
void PostOfficeMenu_LoadInventoryBg(S *s);
void PostOfficeMenu_SetupBgLayers();
void PostOfficeMenu_PostStateUpdate(S *s);
void PostOfficeMenu_PreStateUpdate(S *s);
void PostOfficeMenu_PostInputUpdate(S *s);
void PostOfficeMenu_PreInputUpdate(S *s);
void PostOfficeMenu_ReleaseResources(S *s);
void PostOfficeMenu_InitParts(S *s);
void PostOfficeMenu_ScrollBoxBg(S *s);
void PostOfficeMenu_ScrollMainBg(S *s);
void PostOfficeMenu_ScrollLetterViewBg(S *s);
}

static inline BOOL Unk_ov104_02296fdc_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" PostOfficeMenu *PostOfficeMenu_Create();

extern "C" PostOfficeMenu *PostOfficeMenu_Create() { return new PostOfficeMenu(); }

BOOL PostOfficeMenu::vfunc_00() {
    PostOfficeMenu_InitParts(this);
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL PostOfficeMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    PostOfficeMenu_ReleaseResources(this);
    return TRUE;
}

BOOL PostOfficeMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_2348.draw();
    if (MenuCtrl_IsButtons()) {
        unk_2420.drawWrapped();
    }
    drawHeldItem();
    if (testFlags(2)) {
        unk_3e1c.drawAt(unk_98);
        s32 t = unk_98 - 0x10;
        InventoryItemGrid_DrawPockets(&unk_2e0, 0, t);
        unk_d40.drawPocketLetters(0, t);
        InventoryBg_DrawSprite(&unk_d68, t);
    }
    if (testFlags(0x200)) {
        unk_d40.drawLetters2D(unk_9c, -0x10);
    }
    if (testFlags(0x80)) {
        unk_2a9c.setPos(0, getSlideOffsetY());
        unk_2a9c.draw();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov104_SceneEntry sPostOfficeMenuProfile;

extern "C" Unk_ov104_SceneEntry sPostOfficeMenuProfile = {PostOfficeMenu_Create, 0x97, 0x9b};

BOOL PostOfficeMenu::execTransition() {
    static Unk_ov104_02298170_Fn tbl[11] = {
        &PostOfficeMenu::transitionAct00,
        &PostOfficeMenu::transitionAct01,
        &PostOfficeMenu::transitionAct02,
        &PostOfficeMenu::transitionAct03,
        &PostOfficeMenu::transitionAct04,
        &PostOfficeMenu::transitionAct05,
        &PostOfficeMenu::transitionAct06,
        &PostOfficeMenu::transitionAct07,
        &PostOfficeMenu::transitionAct08,
        &PostOfficeMenu::transitionAct09,
        &PostOfficeMenu::transitionAct0A};
    PostOfficeMenu_PreStateUpdate(this);
    (this->*tbl[unk_8c])();
    PostOfficeMenu_PostStateUpdate(this);
    return TRUE;
}

void PostOfficeMenu::runMainState() {
    static Unk_ov104_02298170_Fn tbl[29] = {
        &PostOfficeMenu::mainAct00,
        &PostOfficeMenu::mainAct01,
        &PostOfficeMenu::mainAct02,
        &PostOfficeMenu::mainAct03,
        &PostOfficeMenu::mainAct04,
        &PostOfficeMenu::mainAct05,
        &PostOfficeMenu::mainAct06,
        &PostOfficeMenu::mainAct07,
        &PostOfficeMenu::mainAct08,
        &PostOfficeMenu::mainAct09,
        &PostOfficeMenu::mainAct0A,
        &PostOfficeMenu::mainAct0B,
        &PostOfficeMenu::mainAct0C,
        &PostOfficeMenu::mainAct0D,
        &PostOfficeMenu::mainAct0E,
        &PostOfficeMenu::mainAct0F,
        &PostOfficeMenu::mainAct10,
        &PostOfficeMenu::mainAct11,
        &PostOfficeMenu::mainAct12,
        &PostOfficeMenu::mainAct13,
        &PostOfficeMenu::mainAct14,
        &PostOfficeMenu::mainAct15,
        &PostOfficeMenu::mainAct16,
        &PostOfficeMenu::mainAct17,
        &PostOfficeMenu::mainAct18,
        &PostOfficeMenu::mainAct19,
        &PostOfficeMenu::mainAct1A,
        &PostOfficeMenu::mainAct1B,
        &PostOfficeMenu::mainAct1C};
    (this->*tbl[unk_8d])();
}

BOOL PostOfficeMenu::execMain() {
    PostOfficeMenu_PreInputUpdate(this);
    runMainState();
    PostOfficeMenu_PostInputUpdate(this);
    return TRUE;
}

BOOL PostOfficeMenu::execPhase3() { return TRUE; }

BOOL PostOfficeMenu::execPhase4() { return TRUE; }

BOOL PostOfficeMenu::execClosed() {
    u32 r4;
    if (testFlags(0x400)) {
        PostOfficeMenu_RestorePocketLetters(this);
        MenuCtrl_SetResult(0);
    } else if (testFlags(0x800)) {
        if (testFlags(0x1000)) return TRUE;
        if ((unk_b0 & 4) != 0) {
            MenuCtrl_SetResult(0);
        } else {
            MenuCtrl_SetResult(1);
        }
        returnUnsentLetters(1);
        MenuCtrl_SetPostOfficeResult(unk_b0);
    } else {
        MenuCtrl_SetResult(1);
        r4 = 0;
        if (LetterList_Compact(unk_2b0c, 10) <= 0) r4 = 4;
        if (((Unk_02097ff4 *)PlayerData_GetCurrent())->testFlag(1)) {
            r4 |= deliverVillagerLettersNow(unk_2b0c);
        }
        r4 |= takeOtherTownLetter(unk_2b0c);
        r4 |= checkSendLetters(unk_2b0c, 0);
        if ((r4 & 4) != 0) {
            MenuCtrl_SetResult(0);
        } else if ((r4 & 0x10) != 0) {
            LetterDelivery_DeliverOutgoing();
            r4 |= queueLetters(unk_2b0c);
            if ((r4 & 0x20) != 0) {
                r4 |= deliverToMailboxes(unk_2b0c);
            }
        }
        returnUnsentLetters(0);
        MenuCtrl_SetPostOfficeResult(r4);
        if (MenuCtrl_GetPostOfficeOutcome() == 1 || MenuCtrl_PostOfficeLettersSent() != 0) {
            Arbeit_NotifyLetterWritten();
        }
    }
    func_020968e0();
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL PostOfficeMenu::onExecute() {
    updateOnlineSend();
    MenuProc::onExecute();
}

void PostOfficeMenu::transitionAct00() {
    PostOfficeMenu_SetupBgLayers();
    PostOfficeMenu_LoadInventoryBg(this);
    setTransitionState(1);
}

void PostOfficeMenu::transitionAct01() {
    PostOfficeMenu_LoadObjGraphics(this);
    InventoryItemGrid_LoadPockets(&unk_2e0);
    LetterGrid_LoadPocketLetters(&unk_d40);
    LetterGrid_SetLetters2D(&unk_d40, unk_2b0c);
    disableAllPockets();
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    setTransitionState(2);
    setFlags(1);
    setFlags(2);
    PostOfficeMenu_ScrollMainBg(this);
}

void PostOfficeMenu::transitionAct02() {
    u32 r = stepSlideIn(0);
    PostOfficeMenu_ScrollMainBg(this);
    if (r != 0) {
        PostOfficeMenu_LoadBoxBg(this);
        beginSubSlideIn(2, 0, 2, 0x30);
        setSlideExtent(0xc0);
        Gfx2d_ShowLayer(4);
        setFlags(0x200);
        PostOfficeMenu_ScrollBoxBg(this);
        setTransitionState(3);
    }
}

void PostOfficeMenu::transitionAct03() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    PostOfficeMenu_ScrollBoxBg(this);
}

void PostOfficeMenu::transitionAct04() {
    unk_2348.hide(1);
    PostOfficeMenu_HideCursor(this);
    if (!testFlags(0x100)) {
        ((MenuLauncher *)(void *)ProcBase_GetParent(this))->setNextRequest(0x44, 1);
    }
    beginSubSlideOut(2, 0, 2, 0x30);
    setSlideExtent(0xc0);
    setTransitionState(5);
}

void PostOfficeMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        clearFlags(0x200);
        beginSubSlideOut(8, 0, 0, 0x30);
        setTransitionState(6);
        transitionAct06();
    } else {
        PostOfficeMenu_ScrollBoxBg(this);
    }
}

void PostOfficeMenu::transitionAct06() {
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
        PostOfficeMenu_ScrollMainBg(this);
    }
}

void PostOfficeMenu::transitionAct07() {
    void *t = getSlotLetter(unk_b9);
    func_02065af0((u32)t);
    unk_288c.func_0206d2e0((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    beginSubSlideIn(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(4);
    PostOfficeMenu_ScrollLetterViewBg(this);
    setTransitionState(8);
    unk_2a9c.showDefault(0x88);
    setFlags(0x80);
}

void PostOfficeMenu::transitionAct08() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            setMainState(5);
        } else {
            setMainState(9);
        }
    } else {
        PostOfficeMenu_ScrollLetterViewBg(this);
    }
}

void PostOfficeMenu::transitionAct09() {
    beginSubSlideOut(3, 0, 0, 0x30);
    PostOfficeMenu_ScrollLetterViewBg(this);
    setTransitionState(10);
}

void PostOfficeMenu::transitionAct0A() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        clearFlags(0x80);
        transitionAct00();
    } else {
        PostOfficeMenu_ScrollLetterViewBg(this);
    }
}

void PostOfficeMenu_ScrollLetterViewBg(S *s) {
    s->applySlideOffset(3, 0, 0);
    s->applySlideOffset(4, 0, 0);
}

void PostOfficeMenu_ScrollMainBg(S *s) {
    s->applySlideOffset(6, 0, -16);
    s->unk_98 = s->getSlideOffsetY();
}

void PostOfficeMenu_ScrollBoxBg(S *s) {
    s->applySlideOffset(4, 0, -16);
    s->unk_9c = s->getSlideOffsetX();
}

void PostOfficeMenu_InitParts(S *s) {
    s32 i;
    s->unk_94 = 0;
    InventoryItemGrid_Init(&s->unk_2e0, 2);
    s->unk_d40.init(1);
    InventoryBg_Init(&s->unk_d68, 6);
    s->unk_b6 = 0x21;
    s->unk_2408.reset();
    s->unk_b4 = 0;
    s->unk_b8 = 0xb;
    s->unk_2484.init(3, 0, 0);
    s->unk_288c.func_0206d39c(3);
    for (i = 0; i < 10; i++) {
        func_02065c94((u8 *)s->unk_2b0c + i * 0xf4);
    }
    PostOfficeMenu_BackupPocketLetters(s);
    s->unk_bf = 0;
}

void PostOfficeMenu_ReleaseResources(S *s) {
    s->cancelBgTasks();
    InventoryBg_Exit(&s->unk_d68);
    InventoryItemGrid_Exit(&s->unk_2e0);
    PopupChoice_ForceClose(&s->unk_2484);
    s->unk_288c.func_0206d394();
    s->unk_3e1c.freeTexts();
}

void PostOfficeMenu_PreInputUpdate(S *s) {
    PostOfficeMenu_PreStateUpdate(s);
    ((MenuCursorBuf0 *)&s->unk_2420)->vfunc_0c();
}

void PostOfficeMenu_PostInputUpdate(S *s) {
    PostOfficeMenu_PostStateUpdate(s);
}

void PostOfficeMenu_PreStateUpdate(S *s) {
    s->cancelBgTasks();
    InventoryBg_PreUpdate(&s->unk_d68);
    InventoryItemGrid_PreUpdate(&s->unk_2e0);
    s->unk_d40.updateCursorLift();
    s->unk_3e1c.freeTexts();
}

void PostOfficeMenu_PostStateUpdate(S *s) {
    PopupChoice_Update(&s->unk_2484);
    InventoryBg_Update(&s->unk_d68);
    if (s->unk_2348.updatePrompt()) {
        s->placeBalloon();
    }
}

void PostOfficeMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void PostOfficeMenu_LoadInventoryBg(S *s) {
    InventoryBg_Load(&s->unk_d68, 0);
}

void PostOfficeMenu_LoadBoxBg(S *s) {
    u32 t = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/inventory/b_itm_post.bpl", t, 4, 4, 4, 4);
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_ltr2.bsc", t, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_post.bch", t, 4, 0x1e2, 0x1e2, 0x227);
}

void PostOfficeMenu_LoadObjGraphics(S *s) {
    InventoryBg_LoadObjGraphics(&s->unk_d68);
    MenuButtons_LoadTextColors(&s->unk_3e1c);
    s->unk_3e1c.setLayoutConfirmAnd06(0x65);
}

void PostOfficeMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Both()) {
        s32 r = getSlotAt(gTouchCurX, gTouchCurY + 0x10, 1);
        if (r != 0x21) {
            beginTouchOnSlot(r);
        } else if (((MenuBottomButtonsBody *)&unk_3e1c)->isTouched(9)) {
            pressSendButton();
        } else if (((MenuBottomButtonsBody *)&unk_3e1c)->isTouched(7)) {
            pressCancelButton();
        }
    }
}

void PostOfficeMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (testFlags(4)) {
            setMainState(3);
            runMainState();
        } else {
            setMainState(0);
            unk_2348.setAutoCloseTimer(0x3c);
        }
    } else {
        if (testFlags(4)) {
            if (hasTouchMoved()) {
                beginDragFromSlot(unk_b5);
                return;
            }
            if (unk_2348.isOpenOrOpening()) {
                if (unk_bf != 0) {
                    unk_bf = unk_bf - 1;
                } else {
                    PostOfficeMenu_SelectLetter(this, unk_b5, 1);
                    setMainState(2);
                }
                return;
            }
        }
        unk_2348.commitOpen();
    }
}

void PostOfficeMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(6);
    } else if (testFlags(4)) {
        if (hasTouchMoved()) {
            beginDragFromSlot(unk_b5);
            PopupChoice_Close(&unk_2484, 0);
            unk_2348.hide(1);
        }
    }
}

void PostOfficeMenu::mainAct03() {
    if (unk_2348.isOpenOrOpening()) {
        if (unk_bf != 0) {
            unk_bf = unk_bf - 1;
        } else {
            PostOfficeMenu_SelectLetter(this, unk_b5, 1);
            setMainState(2);
        }
    }
}

void PostOfficeMenu::mainAct04() {
    s32 p, t;
    getDragPos();
    clearHoverSlot();
    p = unk_a8 + 8;
    t = getSlotAt(p, unk_ac + 0x18, 0);
    if ((isLetterSlot(t) && isBoxSlot(unk_b7))
        || (isBoxSlot(t) && isLetterSlot(unk_b7))) {
        if (isSlotEmpty(t) == 0) {
            t = 0x21;
        }
    }
    if (t != 0x21) {
        if (gTouchHeld == 0) {
            if (isSlotDisabled(t) != 0 || dropHeldOnSlot(t) == 0) {
                flyHeldToOtherList(unk_b7, p);
            } else {
                Inventory_PlayPutDownSe();
                resumeInput();
            }
        } else {
            setHoverSlot(t);
        }
    } else if (gTouchHeld == 0) {
        flyHeldToOtherList(unk_b7, p);
    }
}

void PostOfficeMenu::mainAct05() {
    if (checkSwitchToButtons(1)) {
        setMainState(9);
    } else {
        if (unk_2a9c.isTouched()) {
            PostOfficeMenu_CloseLetterView(this);
        }
    }
}

void PostOfficeMenu::mainAct06() {
    if (((PopupChoiceMenuBody *)&unk_2484)->isOpen()) {
        if (checkSwitchToButtons(1)) {
            PostOfficeMenu_CancelPopupForButtons(this);
        } else {
            if (Unk_ov104_02296fdc_Both()) {
                s32 t = ((PopupChoiceMenuBody *)&unk_2484)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
                if (t >= 0) {
                    if (testFlags(0x8000) == 0 || t != 0) {
                        u32 r;
                        unk_bc = ((u8 *)this + 0x277d)[t];
                        r = 1;
                        if (unk_bc == 2) {
                            r = 0;
                            Snd_PlaySe(0x24);
                        }
                        PopupChoice_DecideRow(&unk_2484, t, r);
                        setMainState(0x17);
                    }
                }
            }
        }
    }
}

void PostOfficeMenu::mainAct07() {
    if (checkSwitchToTouch()) {
        PostOfficeMenu_StartTouchInput(this);
        unk_2348.hide(1);
    } else {
        s32 v = takeRepeatedKeys();
        if (PostOfficeMenu_MoveCursorByPad(this, v, 0)) {
            updateBalloonForCursor();
            PostOfficeMenu_MoveCursorToTarget(this);
            unk_2348.hide(0);
        } else {
            if (isSlotDisabled(unk_b8) != 0) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (isLetterSlot(unk_b8) || isBoxSlot(unk_b8)) {
                        if (isSlotEmpty(unk_b8) == 0) {
                            PostOfficeMenu_SelectLetter(this, unk_b8, 0);
                        }
                    } else if (isButtonSlot(unk_b8)) {
                        PostOfficeMenu_PressButton(this);
                    }
                } else if (k & 0x800) {
                    if (isLetterSlot(unk_b8) || isBoxSlot(unk_b8)) {
                        if (isSlotEmpty(unk_b8) == 0) {
                            s32 r = isLetterSlot(unk_b8) ? findFreeBoxSlot() : findFreePocketSlot();
                            if (r != 0x21) {
                                pickUpAndFlyTo(unk_b8, r);
                                unk_2348.hide(1);
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
                if (k & 2) {
                    PostOfficeMenu_HideCursor(this);
                    pressCancelButton();
                    unk_2348.hide(0);
                } else if (k & 8) {
                    PostOfficeMenu_HideCursor(this);
                    pressSendButton();
                    unk_2348.hide(0);
                } else {
                    unk_2348.commitOpen();
                }
            }
        }
    }
}

void PostOfficeMenu::mainAct08() {
    if (PostOfficeMenu_MoveCursorByPad(this, takeRepeatedKeys(), 1)) {
        updateBalloonForCursor();
        PostOfficeMenu_MoveCursorToTarget(this);
        unk_2348.hide(0);
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            if (isSlotDisabled(unk_b8) == 0) {
                if (isSlotEmpty(unk_b8)) {
                    PostOfficeMenu_BeginPutDownAt(this, unk_b8);
                } else {
                    PostOfficeMenu_BeginSwapAt(this, unk_b8);
                }
            }
        } else if (k & 2) {
            PostOfficeMenu_BeginPutDownAt(this, unk_b7);
        } else {
            getHandPos();
            unk_2348.commitOpen();
        }
    }
}

void PostOfficeMenu::mainAct09() {
    if (unk_2420.getAnim() == 0) {
        s32 a = unk_2a9c.getAnchorX(1);
        s32 b = unk_2a9c.getAnchorY(1);
        unk_2420.warpTo(a, b);
        ((MenuCursor *)&unk_2420)->setAnimIfChanged(1);
    }
    if (checkSwitchToTouch()) {
        PostOfficeMenu_HideCursor(this);
        setMainState(5);
    } else {
        u32 k = gPad[1];
        if ((k & 1) || (k & 2)) {
            ((MenuCursor *)&unk_2420)->setPosePress();
            setMainState(10);
        }
    }
}

void PostOfficeMenu::mainAct0A() {
    if (unk_2420.isAnimDone()) {
        PostOfficeMenu_CloseLetterView(this);
    }
}

void PostOfficeMenu::mainAct0B() {
    if (checkSwitchToTouch()) {
        PostOfficeMenu_CancelPopupForButtons(this);
    } else {
        s32 v = takeRepeatedKeys();
        u8 f = (u8)testFlags(0x8000);
        if (PopupChoice_MoveCursor(&unk_2484, v, &unk_bd, f)) {
            PostOfficeMenu_MoveCursorToPopupRow(this);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                ((MenuCursor *)&unk_2420)->setPosePress();
                setMainState(0xc);
            } else if (k & 2) {
                PostOfficeMenu_CancelPopup(this);
            }
        }
    }
}

void PostOfficeMenu::mainAct0C() {
    if (unk_2420.isAnimDone()) {
        u32 r;
        unk_bc = ((u8 *)this + 0x277d)[unk_bd];
        r = 1;
        if (unk_bc == 2) {
            r = 0;
            Snd_PlaySe(0x24);
        }
        PopupChoice_DecideRow(&unk_2484, unk_bd, r);
        setMainState(0x17);
    }
}

void PostOfficeMenu::mainAct0D() {
    if (unk_2420.isMoving() == 0) {
        setMainState(unk_bb);
        if (unk_bb == 7) {
            setFocusSlot(unk_b8);
        }
        runMainState();
    }
    getHandPos();
}

void PostOfficeMenu::mainAct0E() {
    if (unk_2420.isAnimDone()) {
        if (unk_b8 == 0x1f) {
            pressSendButton();
        } else {
            pressCancelButton();
        }
    }
}

void PostOfficeMenu::mainAct0F() {
    if (unk_2420.isAnimDone()) {
        PostOfficeMenu_RefreshCursor(this);
        setMainState(7);
    }
}

void PostOfficeMenu::mainAct10() {
    if (unk_2420.func_ov002_02202928()) {
        pickUpAtSlot(unk_b8);
        setMainState(0x11);
    }
}

void PostOfficeMenu::mainAct11() {
    if (unk_2420.isAnimDone()) {
        setMainState(unk_bb);
    }
    getHandPos();
}

void PostOfficeMenu::mainAct12() {
    if (unk_2420.func_ov002_02202928() == 0) {
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

void PostOfficeMenu::mainAct13() {
    if (unk_2420.func_ov002_022028fc() == 0) {
        exchangeHeldWith(unk_ba);
        setFlags(0x40);
        setMainState(0x14);
        updateBalloonForCursor();
    } else {
        setMainState(7);
    }
}

void PostOfficeMenu::mainAct14() {
    if (unk_2420.isAnimDone()) {
        setMainState(unk_bb);
    }
    if (unk_2420.func_ov002_02202928()) {
        if (testFlags(0x40)) {
            clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        getHandPos();
    }
}

void PostOfficeMenu::mainAct15() {
    if (unk_2408.update()) {
        releaseHeldTo(unk_b7);
        resumeInput();
        Inventory_PlayPutDownSe();
    } else {
        getFlyPos();
    }
}

void PostOfficeMenu::mainAct16() {
    if (((PopupChoiceMenuBody *)&unk_2484)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            PostOfficeMenu_CursorToPopupTop(this);
            setMainState(0xb);
        } else {
            setMainState(6);
        }
    }
}

void PostOfficeMenu::mainAct17() {
    if (PopupChoice_TickDecideDelay(&unk_2484)) {
        PopupChoice_Close(&unk_2484, 0);
        unk_2348.hide(1);
        if (unk_2420.getAnim()) {
            PostOfficeMenu_ShowCursorAtSlot(this);
        }
        setMainState(0x18);
    }
}

void PostOfficeMenu::mainAct18() {
    if (((PopupChoiceMenuBody *)&unk_2484)->isClosed()) {
        PostOfficeMenu_OnPopupChoice(this);
    }
}

void PostOfficeMenu::mainAct19() {
    if (unk_2784.update(0)) {
        setMainState(unk_bb);
        unk_2420.enableObjWindow();
    }
}

void PostOfficeMenu::mainAct1A() {
    if (unk_2a9c.stepAnim()) {
        if (unk_2420.getAnim()) {
            s32 a = unk_2a9c.getAnchorX(1);
            s32 b = unk_2a9c.getAnchorY(1);
            unk_2420.warpTo(a, b);
        }
    } else {
        PostOfficeMenu_HideCursor(this);
        setTransitionState(9);
        setPhase(1);
    }
}

void PostOfficeMenu::mainAct1B() {
    if (((MenuBottomButtonsBody *)&unk_3e1c)->stepPress()) {
        if (unk_2420.getAnim()) {
            s32 a = ((MenuBottomButtonsBody *)&unk_3e1c)->getPressOffset();
            s32 b = ((MenuBottomButtonsBody *)&unk_3e1c)->getTargetX(-1);
            s32 c = ((MenuBottomButtonsBody *)&unk_3e1c)->getTargetY(-1);
            unk_2420.warpTo(a + b, a + c);
        }
    } else {
        PostOfficeMenu_HideCursor(this);
        setPhase(1);
    }
}

void PostOfficeMenu::mainAct1C() {
    if (LetterGrid_UpdatePopAnim(&unk_d40)) {
        unk_b4 = 0;
        resumeInput();
    }
}

void PostOfficeMenu_StartTouchInput(S *s) {
    PostOfficeMenu_HideCursor(s);
    s->clearFocusSlot();
    s->setMainState(0);
}

void PostOfficeMenu::startButtonInput() {
    unk_b6 = 0x21;
    PostOfficeMenu_ShowCursor(this);
    restartKeyRepeat();
    updateBalloonForCursor();
    setMainState(7);
    setFocusSlot(unk_b8);
}

void PostOfficeMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        PostOfficeMenu_StartTouchInput(this);
    } else {
        startButtonInput();
    }
}

void PostOfficeMenu::beginTouchOnSlot(u32 i) {
    unk_b5 = i;
    setMainState(1);
    u32 gx = gTouchCurX;
    u32 gy = gTouchCurY;
    unk_a0 = getSlotX(unk_b5) - gx;
    unk_a4 = getSlotY(unk_b5) - gy;
    unk_b6 = i;
    unk_2348.queueOpen();
    unk_2348.commitOpen();
    unk_bf = 2;
    if (isSlotDisabled(i)) {
        clearFlags(4);
    } else {
        setFlags(4);
        Inventory_PlayTouchSe();
    }
}

void PostOfficeMenu::beginDragFromSlot(u32 i) {
    unk_b7 = i;
    unk_2348.hide(1);
    pickUpFrom(i);
    if (unk_b4 == 1) {
        setMainState(4);
    }
    getDragPos();
    Inventory_PlayPickUpSe();
}

void PostOfficeMenu::pickUpAtSlot(u32 i) {
    unk_b7 = i;
    unk_2348.hide(1);
    pickUpFrom(i);
    if (unk_b4 == 1) {
        unk_bb = 8;
    }
    getHandPos();
    Inventory_PlayPickUpSe();
}

void PostOfficeMenu::flyHeldTo(u32 i, u32 a) {
    unk_b7 = i;
    unk_2408.setPos(unk_a8, unk_ac);
    s32 x = getSlotX(i);
    s32 y = getSlotY(i);
    unk_2408.startLinear(x, y, a);
    unk_2408.update();
    getFlyPos();
    setMainState(0x15);
}

void PostOfficeMenu::flyHeldToOtherList(u32 i, s32 a) {
    u32 r = 0x21;
    if (a >= 0xc0) {
        if (isBoxSlot(i)) {
            r = findFreePocketSlot();
        }
    } else {
        if (isLetterSlot(i)) {
            r = findFreeBoxSlot();
        }
    }
    if (r != 0x21) {
        i = r;
    }
    flyHeldTo(i, 4);
}

void PostOfficeMenu::pickUpAndFlyTo(u32 i, u32 a) {
    pickUpFrom(i);
    unk_a8 = getSlotX(i);
    unk_ac = getSlotY(i);
    flyHeldTo(a, 4);
}

u8 PostOfficeMenu::findFreePocketSlot() {
    s32 r = Inventory_FindEmptyLetter();
    if (r == -1) {
        return 0x21;
    }
    return r + 0xb;
}

u8 PostOfficeMenu::findFreeBoxSlot() {
    u8 *p = (u8 *)unk_2b0c;
    s32 i;
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            return i + 0x15;
        }
    }
    return 0x21;
}

void PostOfficeMenu::cancelBgTasks() {
    unk_2a8->cancel();
}

BOOL PostOfficeMenu::isLetterSlot(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

BOOL PostOfficeMenu::isBoxSlot(u32 i) {
    if (i >= 0x15 && i <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL PostOfficeMenu::isButtonSlot(u32 i) {
    if ((u8)(i + 0xe1) <= 1) {
        return TRUE;
    }
    return FALSE;
}

u8 PostOfficeMenu::toLetterGridIndex(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return i - 0xb;
    }
    if (i >= 0x15 && i <= 0x1e) {
        return i + 0x18;
    }
    return 0;
}

u8 PostOfficeMenu::fromLetterGridIndex(u32 i) {
    if (i <= 9) {
        return i + 0xb;
    }
    if (i >= 0x2d && i <= 0x36) {
        return i - 0x18;
    }
    return 0x21;
}

u8 PostOfficeMenu::getSlotAt(u32 i, s32 a, u32 flag) {
    u32 r = _ZN10LetterGrid18findPocketLetterAtEii(&unk_d40);
    if (r == 0x37) {
        r = unk_d40.findLetterAt2D(i, a);
    }
    if (r != 0x37) {
        if (flag != 0) {
            if (LetterGrid_IsSlotEmpty(&unk_d40, r) != 0) {
                return 0x21;
            }
        }
        return fromLetterGridIndex(r);
    }
    return 0x21;
}

BOOL PostOfficeMenu::dropHeldOnSlot(u32 i) {
    if (isSlotEmpty(i) == 0) {
        func_02065e70(&unk_1b4, getSlotLetter(i));
        putLetterInSlot(unk_b7, &unk_1b4);
    }
    releaseHeldTo(i);
    return TRUE;
}

void PostOfficeMenu::putLetterInSlot(u32 i, void *p) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        unk_d40.func_ov094_02294318(toLetterGridIndex(i), (s32)p);
    }
}

void * PostOfficeMenu::getSlotLetter(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        return unk_d40.getLetter(toLetterGridIndex(i));
    } else {
        return 0;
    }
}

s32 PostOfficeMenu::getSlotX(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        return LetterGrid_GetSlotX(&unk_d40, toLetterGridIndex(i));
    } else {
        if (i == 0x1f) {
            return 0xbc;
        }
        if (i == 0x20) {
            return 0x74;
        }
        return 0;
    }
}

s32 PostOfficeMenu::getSlotY(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        return LetterGrid_GetSlotY(&unk_d40, toLetterGridIndex(i)) - 0x10;
    } else {
        if ((u8)(i + 0xe1) <= 1) {
            return 0xb6;
        }
        return 0;
    }
}

void PostOfficeMenu::disableAllPockets() {
    InventoryItemGrid_DisableSlotRange(&unk_2e0, 0, 0xe);
    unk_d40.highlightLetterKinds(0xe);
}

BOOL PostOfficeMenu::isSlotDisabled(u32 i) {
    if (isLetterSlot(i)) {
        return unk_d40.isHighlighted(toLetterGridIndex(i));
    } else {
        return FALSE;
    }
}

BOOL PostOfficeMenu::isSlotEmpty(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        return LetterGrid_IsSlotEmpty(&unk_d40, toLetterGridIndex(i));
    } else {
        return TRUE;
    }
}

void PostOfficeMenu::clearFocusSlot() {
    InventoryItemGrid_ClearCursorSlot(&unk_2e0);
    unk_d40.clearCursorSlot();
}

void PostOfficeMenu::setFocusSlot(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        unk_d40.setCursorSlot(toLetterGridIndex(i));
        InventoryItemGrid_ClearCursorSlot(&unk_2e0);
    } else {
        clearFocusSlot();
    }
}

void PostOfficeMenu::clearHoverSlot() {
    InventoryItemGrid_ClearMarks(&unk_2e0);
    unk_d40.clearMarks();
}

void PostOfficeMenu::setHoverSlot(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        unk_d40.markSlot(toLetterGridIndex(i));
    }
}

BOOL PostOfficeMenu::hasTouchMoved() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void PostOfficeMenu::placeBalloon() {
    s32 x = getSlotX(unk_b6) - 0x6d;
    s32 y = getSlotY(unk_b6) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    unk_2348.setPos(x, y);
    if (isLetterSlot(unk_b6) || isBoxSlot(unk_b6)) {
        unk_d40.showLetterName(&unk_2348, toLetterGridIndex(unk_b6));
    }
}

void PostOfficeMenu::updateBalloonForCursor() {
    if (isLetterSlot(unk_b8) || isBoxSlot(unk_b8)) {
        if (isSlotEmpty(unk_b8)) {
            unk_2348.cancelQueuedOpen();
        } else {
            unk_b6 = unk_b8;
            unk_2348.queueOpen();
        }
    } else {
        unk_2348.cancelQueuedOpen();
    }
}

void PostOfficeMenu::drawHeldItem() {
    if (testFlags(0x40) == 0) {
        if (unk_b4 != 0) {
            if (unk_b4 == 1) {
                unk_d40.drawHeldLetter(unk_a8, unk_ac, &unk_c0);
            }
        }
    }
}

void PostOfficeMenu::getDragPos() {
    unk_a8 = unk_a0 + gTouchCurX;
    unk_ac = unk_a4 + gTouchCurY;
}

void PostOfficeMenu::getHandPos() {
    unk_a8 = unk_2420.getFrameScreenX() - 2;
    unk_ac = unk_2420.getFrameScreenY() - 4;
}

void PostOfficeMenu::getFlyPos() {
    unk_a8 = unk_2408.getX();
    unk_ac = unk_2408.getY();
}

void PostOfficeMenu::pickUpFrom(u32 i) {
    if (isLetterSlot(i) || isBoxSlot(i)) {
        u32 t = toLetterGridIndex(i);
        unk_b4 = 1;
        func_02065e70(&unk_c0, unk_d40.getLetter(t));
        unk_d40.clearLetter(t);
    }
}

void PostOfficeMenu::releaseHeldTo(u32 i) {
    if (unk_b4 == 1) {
        putLetterInSlot(i, &unk_c0);
    }
    unk_b4 = 0;
}

void PostOfficeMenu::exchangeHeldWith(u32 i) {
    if (unk_b4 == 1) {
        func_02065e70(&unk_1b4, &unk_c0);
        pickUpFrom(i);
        putLetterInSlot(i, &unk_1b4);
    }
}

void PostOfficeMenu_ShowCursor(S *s) {
    s32 r4 = PostOfficeMenu_GetCursorTargetX(s);
    s->unk_2420.warpTo(r4, PostOfficeMenu_GetCursorTargetY(s));
    if (s->isButtonSlot(s->unk_b8)) {
        ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(1);
    }
    PostOfficeMenu_RefreshCursor(s);
}

s32 PostOfficeMenu_GetCursorTargetX(S *s) {
    s32 r4 = s->getSlotX(s->unk_b8);
    if (s->testFlags(0x20)) {
        r4 += 0x100;
    } else if (s->testFlags(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 PostOfficeMenu_GetCursorTargetY(S *s) {
    return s->getSlotY(s->unk_b8);
}

void PostOfficeMenu_HideCursor(S *s) {
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(0);
    ((MenuCursorBuf0 *)&s->unk_2420)->vfunc_0c();
}

void PostOfficeMenu_MoveCursorToTarget(S *s) {
    s32 r5;
    if (s->testFlags(8)) {
        r5 = PostOfficeMenu_GetCursorTargetX(s);
        s->unk_2420.warpTo(r5, PostOfficeMenu_GetCursorTargetY(s));
        s->clearFlags(8);
    } else {
        r5 = PostOfficeMenu_GetCursorTargetX(s);
        s->unk_2420.moveToEase(r5, PostOfficeMenu_GetCursorTargetY(s), 3, 1);
        s->unk_bb = s->unk_8d;
        s->setMainState(0xd);
    }
}

void PostOfficeMenu_MoveCursorToPopupRow(S *s) {
    s32 r4 = ((PopupChoiceMenuBody *)&s->unk_2484)->getRowX();
    s->unk_2420.moveToLinear(r4, ((PopupChoiceMenuBody *)&s->unk_2484)->getRowY(s->unk_bd), 2);
    s->unk_bb = s->unk_8d;
    s->setMainState(0xd);
}

void PostOfficeMenu_CancelPopup(S *s) {
    s32 r4;
    s->unk_bc = 4;
    s->unk_bd = PopupChoice_DecideCancel(&s->unk_2484, 1);
    r4 = ((PopupChoiceMenuBody *)&s->unk_2484)->getRowX();
    s->unk_2420.warpTo(r4, ((PopupChoiceMenuBody *)&s->unk_2484)->getRowY(s->unk_bd));
    s->unk_2420.setAnimAtEnd(8);
    s->setMainState(0x17);
}

void PostOfficeMenu_CursorToPopupTop(S *s) {
    s32 r4;
    if (s->testFlags(0x8000)) {
        s->unk_bd = 1;
    } else {
        s->unk_bd = 0;
    }
    r4 = ((PopupChoiceMenuBody *)&s->unk_2484)->getRowX();
    s->unk_2420.warpTo(r4, ((PopupChoiceMenuBody *)&s->unk_2484)->getRowY(s->unk_bd));
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(7);
}

void PostOfficeMenu_ShowCursorAtSlot(S *s) {
    s32 r4 = PostOfficeMenu_GetCursorTargetX(s);
    s->unk_2420.warpTo(r4, PostOfficeMenu_GetCursorTargetY(s));
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(1);
}

void PostOfficeMenu_RefreshCursor(S *s) {
    s->unk_2420.setPoseIdle();
    ((MenuCursorBuf0 *)&s->unk_2420)->vfunc_0c();
}

void PostOfficeMenu_PressButton(S *s) {
    ((MenuCursor *)&s->unk_2420)->setPosePress();
    s->setMainState(0xe);
}

void PostOfficeMenu_BeginMoveFromPopup(S *s) {
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(4);
    s->setMainState(0x10);
}

void PostOfficeMenu_BeginPutDownAt(S *s, u32 a) {
    s->unk_2348.hide(1);
    s->unk_ba = a;
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(5);
    s->setMainState(0x12);
}

void PostOfficeMenu_BeginSwapAt(S *s, u32 a) {
    s->unk_2348.hide(1);
    s->unk_bb = s->unk_8d;
    s->unk_ba = a;
    ((MenuCursor *)&s->unk_2420)->setAnimIfChanged(6);
    s->setMainState(0x13);
}

void PostOfficeMenu_OnPopupChoice(S *s) {
    switch (s->unk_bc) {
    case 0: PostOfficeMenu_BeginMoveFromPopup(s); break;
    case 1: PostOfficeMenu_StartReadLetter(s); break;
    case 2: PostOfficeMenu_StartDiscardLetter(s); break;
    case 3: PostOfficeMenu_OnChoiceDiscard(s); break;
    case 4:
    default: s->resumeInput(); break;
    }
}

void PostOfficeMenu_OpenPopup(S *s, s32 a) {
    s32 r6, r2;
    ((PopupChoiceMenuBody *)&s->unk_2484)->setRowsFromIds((PopupChoiceIdList *)s->unk_2484.unk_2f4, s->testFlags(0x8000));
    r6 = s->getSlotX(s->unk_b9);
    r2 = s->getSlotY(s->unk_b9);
    if (a != 0) {
        _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(&s->unk_2484, &s->unk_2348, r2);
    } else {
        s->unk_2484.placeNearPoint(r6, r2);
    }
    PopupChoice_Open(&s->unk_2484, 0);
    s->setMainState(0x16);
}

void PostOfficeMenu_CancelPopupForButtons(S *s) {
    s->unk_bc = 4;
    PostOfficeMenu_ShowCursorAtSlot(s);
    PopupChoice_Close(&s->unk_2484, 0);
    s->setMainState(0x18);
}

void PostOfficeMenu_SelectLetter(S *s, u32 a, s32 b) {
    void *r7;
    s32 r5;
    s->clearFlags(0x8000);
    s->unk_b9 = a;
    ChoiceIdList_Clear(s->unk_2484.unk_2f4, 4);
    r7 = s->getSlotLetter(a);
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(s->unk_2484.unk_2f4, 0, 0);
    }
    r5 = ((Unk_02065554 *)r7)->func_02065578();
    if (r5 != 0) {
        if (r5 == 7) {
            ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x17, 1);
        } else {
            ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r7)->func_020655d0() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x15, 3);
        }
    }
    ChoiceIdList_Add(s->unk_2484.unk_2f4, 2, 4);
    PostOfficeMenu_HideCursor(s);
    if (b == 0) {
        s->unk_2348.hide(1);
    }
    PostOfficeMenu_OpenPopup(s, b);
}

void PostOfficeMenu_OpenDiscardConfirm(S *s) {
    s->setFlags(0x8000);
    ChoiceIdList_Clear(s->unk_2484.unk_2f4, 4);
    ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x1a, 4);
    ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x15, 2);
    ChoiceIdList_Add(s->unk_2484.unk_2f4, 0x19, 4);
    PostOfficeMenu_OpenPopup(s, 0);
}

void PostOfficeMenu_MoveCursorInPocketLetters(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_b8 - 0xb;
    s32 r6 = r4 >> 1;
    if (MenuKeys_HasLeft((void *)a)) {
        if ((r4 & 1) > 0) {
            s->unk_b8 = s->unk_b8 - 1;
        } else {
            s->unk_b8 = r6 * 2 + 0x16;
            return;
        }
    } else if (MenuKeys_HasRight((void *)a)) {
        if ((r4 & 1) < 1) s->unk_b8 = s->unk_b8 + 1;
    }
    if (s->isLetterSlot(s->unk_b8)) {
        if (s->testFlags(0x30) == 0) {
            if (MenuKeys_HasUp((void *)a)) {
                if (r6 > 0) s->unk_b8 = s->unk_b8 - 2;
            } else if (MenuKeys_HasDown((void *)a)) {
                if (r6 < 4) {
                    s->unk_b8 = s->unk_b8 + 2;
                } else if (b == 0) {
                    s->unk_b8 = 0x1f;
                    ((MenuCursor *)&s->unk_2420)->switchToAnim07();
                }
            }
        }
    }
}

void PostOfficeMenu_MoveCursorInBox(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_b8 - 0x15;
    s32 r6 = 0;
    while (r4 >= 2) {
        r6++;
        r4 -= 2;
    }
    if (MenuKeys_HasLeft((void *)a)) {
        if (r4 > 0) s->unk_b8 = s->unk_b8 - 1;
    } else if (MenuKeys_HasRight((void *)a)) {
        if (r4 < 1) {
            s->unk_b8 = s->unk_b8 + 1;
        } else {
            s->unk_b8 = r6 * 2 + 0xb;
            return;
        }
    }
    if (s->isBoxSlot(s->unk_b8)) {
        if (s->testFlags(0x30) == 0) {
            if (MenuKeys_HasUp((void *)a)) {
                if (r6 > 0) s->unk_b8 = s->unk_b8 - 2;
            } else if (MenuKeys_HasDown((void *)a)) {
                if (r6 < 4) {
                    s->unk_b8 = s->unk_b8 + 2;
                } else if (b == 0) {
                    s->unk_b8 = 0x20;
                    ((MenuCursor *)&s->unk_2420)->switchToAnim07();
                }
            }
        }
    }
}

void PostOfficeMenu_MoveCursorOnButtons(S *s, s32 a) {
    if (MenuKeys_HasLeft((void *)a)) {
        s->unk_b8 = 0x20;
    } else if (MenuKeys_HasRight((void *)a)) {
        s->unk_b8 = 0x1f;
    }
    if (MenuKeys_HasUp((void *)a)) {
        ((MenuCursor *)&s->unk_2420)->switchToAnim01();
        if (s->unk_b8 == 0x20) {
            s->unk_b8 = 0x1d;
        } else {
            s->unk_b8 = 0x13;
        }
    }
}

BOOL PostOfficeMenu_MoveCursorByPad(S *s, s32 a, s32 b) {
    u32 old = s->unk_b8;
    s->clearFlags(0x30);
    if (a == 0) return FALSE;
    if (s->isLetterSlot(s->unk_b8)) {
        PostOfficeMenu_MoveCursorInPocketLetters(s, a, b);
    } else if (s->isBoxSlot(s->unk_b8)) {
        PostOfficeMenu_MoveCursorInBox(s, a, b);
    } else if (s->isButtonSlot(s->unk_b8)) {
        PostOfficeMenu_MoveCursorOnButtons(s, a);
    }
    if (old != s->unk_b8) return TRUE;
    return FALSE;
}

void PostOfficeMenu_StartReadLetter(S *s) {
    s->setTransitionState(4);
    s->setPhase(1);
    s->setFlags(0x100);
}

void PostOfficeMenu_CloseLetterView(S *s) {
    s->setMainState(0x1a);
    s->unk_2a9c.setState(2);
    Snd_PlaySe(0x29);
}

void PostOfficeMenu_StartDiscardLetter(S *s) {
    u32 t = s->unk_b9;
    s->pickUpFrom(t);
    s->unk_a8 = s->getSlotX(t);
    s->unk_ac = s->getSlotY(t);
    if (MenuCtrl_IsButtons()) {
        s->unk_a8 = s->unk_a8 - 2;
        s->unk_ac = s->unk_ac - 2;
    }
    s->setMainState(0x1c);
    LetterGrid_StartPopAnim(&s->unk_d40);
}

void PostOfficeMenu_OnChoiceDiscard(S *s) {
    PostOfficeMenu_OpenDiscardConfirm(s);
}

void PostOfficeMenu_BackupPocketLetters(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        func_02065e70((u8 *)s->unk_3494 + i * 0xf4, s->getSlotLetter(id));
    }
}

void PostOfficeMenu_RestorePocketLetters(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        s->putLetterInSlot(id, (u8 *)s->unk_3494 + i * 0xf4);
    }
}

void PostOfficeMenu::returnUnsentLetters(s32 flag) {
    s32 i;
    u8 *e = (u8 *)unk_2b0c;
    for (i = 0; i < 10; e += 0xf4, i++) {
        if (flag != 0 && (unk_b2 & (1 << i))) {
            func_02065c94(e);
        } else if (((Unk_02065554 *)e)->func_02065578() != 0) {
            s32 r = findFreePocketSlot();
            if (r != 0x21) {
                putLetterInSlot(r, e);
            }
        }
    }
}

void PostOfficeMenu::pressSendButton() {
    Snd_PlaySe(0x27);
    clearFlags(0x400);
    ((MenuBottomButtonsBody *)&unk_3e1c)->setSelected(9);
    setMainState(0x1b);
    unk_8c = 4;
    clearFlags(0x100);
    if (gCommManager->isOnline()) {
        beginOnlineSend();
    }
}

void PostOfficeMenu::pressCancelButton() {
    Snd_PlaySe(0x28);
    setFlags(0x400);
    ((MenuBottomButtonsBody *)&unk_3e1c)->setSelected(7);
    setMainState(0x1b);
    unk_8c = 4;
    clearFlags(0x100);
}

BOOL PostOfficeMenu::hasOtherTownLetter(void *p) {
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() == 1 && ((Unk_02065554 *)q)->func_02065554() != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

u32 PostOfficeMenu::takeOtherTownLetter(void *p) {
    u16 r = 0;
    s32 t = -1;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() == 1 && ((Unk_02065554 *)q)->func_02065554() != 0) {
            if (t == -1) {
                t = i;
            } else {
                t = -2;
            }
        }
    }
    if (t != -1) {
        if (t == -2) {
            r |= 2;
        } else {
            r |= 1;
            u8 *e = (u8 *)p + t * 0xf4;
            MenuCtrl_SetFutureLetter(e);
            func_02065c94(e);
        }
    }
    return r;
}

u32 PostOfficeMenu::checkSendLetters(void *p, s32 flag) {
    if (LetterList_CountUsed(p, 10) == 0) {
        return 0;
    }
    u16 r = 0;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() != 0) {
            if (((Unk_02065554 *)q)->func_02065578() != 1) {
                if (flag != 0) {
                    unk_b2 |= 1 << i;
                } else {
                    func_02065c94(q);
                }
            } else if (((Unk_02065554 *)q)->func_02065554() == 0) {
                if (LetterDelivery_HasKnownAddressee(q) != 0) {
                    if (queueLetterForDelivery(q) != 0) {
                        if (flag != 0) {
                            unk_b2 |= 1 << i;
                        } else {
                            func_02065c94(q);
                        }
                        r |= 0x300;
                    } else {
                        r |= 0x110;
                    }
                } else {
                    r |= 0x108;
                }
            }
        }
    }
    return r;
}

u32 PostOfficeMenu::queueLetters(void *p) {
    u16 r = 0;
    s32 n = LetterList_Compact(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() != 1) {
            func_02065c94(q);
        } else if (((Unk_02065554 *)q)->func_02065554() == 0) {
            if (LetterDelivery_HasKnownAddressee(q) != 0) {
                if (queueLetterForDelivery(q) != 0) {
                    func_02065c94(q);
                    r |= 0x200;
                } else {
                    r |= 0x20;
                }
            }
        }
    }
    return r;
}

s32 PostOfficeMenu::queueLetterForDelivery(void *p) {
    return LetterDelivery_QueueOutgoing(p, 1);
}

u32 PostOfficeMenu::deliverToMailboxes(void *p) {
    u16 r = 0;
    s32 n = LetterList_Compact(p, 10);
    if (n == 0) {
        return r;
    }
    s32 t;
    u32 mask = 0;
    u8 *q = (u8 *)p;
    s32 cnt = 0;
    s32 i = 0;
    TalkWindowState *obj;
    s32 z;
    s32 j;
    for (; i < n; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065554() == 0) {
            t = LetterDelivery_FindAddresseePlayer(q);
            if (t != -2) {
                if (t != -1) {
                    if (LetterDelivery_PutInMailbox(q, t, 1) != 0) {
                        func_02065c94(q);
                        r |= 0x200;
                    } else {
                        u32 bit = 1 << t;
                        if ((mask & bit) == 0) {
                            mask |= bit;
                            cnt++;
                        }
                    }
                } else {
                    if (LetterDelivery_FindAddresseeVillager(q) >= 0) {
                        LetterDelivery_SendToVillager(q);
                        func_02065c94(q);
                        r |= 0x200;
                    }
                }
            }
        }
    }
    if (cnt != 0) {
        z = 0;
        obj = TalkWindow_Get(0);
        Unk_020e1c64 buf;
        for (j = 0; j < 4; j++) {
            if (mask & (1 << j)) {
                ((PlayerId *)((PlayerData *)PlayerData_GetResident(gSavePlayers, j))->getPlayerId())->func_020940d0(&buf);
                switch (z) {
                case 0:
                    obj->setSlot(7, &buf);
                    break;
                case 1:
                    obj->setSlot(8, &buf);
                    break;
                case 2:
                    obj->setSlot(9, &buf);
                    break;
                }
                z++;
            }
        }
        r |= cnt << 6;
    }
    return r;
}

u32 PostOfficeMenu::deliverVillagerLettersNow(void *p) {
    u16 r = 0;
    s32 n = LetterList_Compact(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (LetterDelivery_FindAddresseeVillager(q) >= 0) {
            LetterDelivery_SendToVillager(q);
            func_02065c94(q);
            r |= 0x200;
        }
    }
    return r;
}

void PostOfficeMenu::beginOnlineSend() {
    CommManager *g = gCommManager;
    if (g->isOnline()) {
        setFlags(0x800);
        unk_b2 = 0;
        s32 n = LetterList_CountUsed(unk_2b0c, 10);
        unk_b0 = 0;
        if (n <= 0) {
            unk_b0 = 4;
            clearFlags(0x1000);
            return;
        }
        if (hasOtherTownLetter(unk_2b0c)) {
            unk_b0 |= 0x800;
        }
        if (g->unk_64 != 0) {
            setFlags(0x1000);
            unk_be = 0;
            clearFlags(0x2000);
            updateOnlineSend();
        } else {
            setFlags(0x4000);
            u32 r = checkSendLetters(unk_2b0c, 1);
            unk_b0 |= r;
            if (unk_b0 & 0x10) {
                unk_b0 |= 0x400;
            }
        }
    }
}

void PostOfficeMenu::updateOnlineSend() {
    if (testFlags(0x800) == 0) {
        clearFlags(0x1000);
        return;
    }
    if (testFlags(0x1000) == 0) {
        return;
    }
    s32 r6 = 0x18;
    if (testFlags(0x2000) != 0) {
        r6 = func_0206f644();
        switch (r6 - 8) {
        case 0:
            return;
        case 3:
            unk_b0 |= 0x400;
            clearFlags(0x1000);
            clearFlags(0x2000);
            return;
        case 1:
        case 2:
            unk_b0 |= 0x200;
            unk_b2 |= 1 << unk_be;
            unk_be++;
            clearFlags(0x2000);
            break;
        }
    }
    while (unk_be < 10) {
        void *e = &unk_2b0c[unk_be];
        if (((Unk_02065554 *)e)->func_02065554() == 0) {
            if (((Unk_02065554 *)e)->func_02065578() == 1) {
                unk_b0 |= 0x100;
                if (LetterDelivery_HasKnownAddressee(e) != 0) {
                    if (r6 == 10) {
                        unk_b0 |= 0x400;
                        clearFlags(0x1000);
                        return;
                    }
                    if (sendLetterRecord(e) != 0) {
                        setFlags(0x2000);
                        return;
                    }
                } else {
                    unk_b0 |= 8;
                }
            }
        }
        unk_be++;
    }
    clearFlags(0x1000);
}

BOOL PostOfficeMenu::sendLetterRecord(void *p) {
    void *heap = data_021c6210;
    u8 *buf = (u8 *)Heap_AllocTail(heap, 0xf5);
    buf[0] = 8;
    MI_CpuCopy8(p, buf + 1, 0xf4);
    CommManager *g = gCommManager;
    g->beginRecord();
    g->writeRecord(buf, 0xf5);
    g->endRecord(0x16, 0);
    Heap_Free(heap, buf);
    func_0206f638(8);
    return TRUE;
}

BOOL PostOfficeMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void PostOfficeMenu::setFlags(u32 mask) { unk_94 = unk_94 | mask; }

void PostOfficeMenu::clearFlags(u32 mask) { unk_94 = unk_94 & ~mask; }
