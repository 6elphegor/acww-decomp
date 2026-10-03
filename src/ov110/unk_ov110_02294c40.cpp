// ov110: inventory / item-selling scene overlay (class LostFoundRecycleMenu, vtable 0x02297778).
// Linked overlay: the whole of .text/.data/.bss comes from this file.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class LostFoundRecycleMenu;

extern "C" {
extern void *gCommManager;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern s32 gCurrentHeap;
extern void *gCommManager;
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const void *a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Snd_PlaySe(s32 a);
BOOL func_0206e61c();
void func_0206e63c();
void func_0206eba4(void *p);
s32 func_0206ebc0();
void func_0206ec04();
void func_0206ecf8(s32 a);
s32 func_0206ed18();
void func_0206ed2c(u32 a);
s32 func_0206ed50();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0206f9fc(void *p, s32 a);
s32 Comm_IsSeqConfirmed(s32 a);
s32 func_02098ffc();
BOOL Clock_GetWeekday();
s32 ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *a, void *b, u32 c);
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
void Inventory_PlayPickUpSe();
void Inventory_PlayTouchSe();
void Inventory_PlayPutDownSe();
BOOL func_ov094_02292414(u32 v);
BOOL InvItem_IsTurnipFishOrInsect(u32 v);
void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryBg_Exit(void *a);
void InventoryBg_Update(void *a);
void InventoryBg_PreUpdate(void *a);
void InventoryBg_LoadObjGraphics(void *a);
void InventoryBg_Load(void *a, s32 b);
void InventoryBg_Init(void *a, s32 b);
BOOL InventoryItemGrid_IsSlotEmpty(void *p, u32 v);
void InventoryItemGrid_DrawHeldItem(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawBox(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
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
void InventoryItemGrid_LoadBox(void *a, void *b);
void InventoryItemGrid_LoadPockets(void *a);
u32 InventoryItemGrid_FindBoxSlotAt(void *p, u32 a, u32 b);
u32 InventoryItemGrid_FindPocketSlotAt(void *p);
void InventoryItemGrid_Exit(void *a);
void InventoryItemGrid_PreUpdate(void *a);
void InventoryItemGrid_Init(void *a, s32 b);
void LetterGrid_LoadPocketLetters(void *a);
}

// Text window, 0x40 bytes (src/main/unk_0206f53c.cpp)
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fab4(s32, s32);
    void func_0206fb9c(u32, u32, u32, u8, u8, s32);
    void func_0206fc44();
    u8 unk_04[0x3c];
};

// Screen upload helper sub-object, 0x38 bytes
class BgVramTaskPair {
public:
    BgVramTaskPair();
//@@CLS_Unk_020e4608@@
    u32 unk_00[0x38 / 4];
};

class LabelBalloon {
public:
    void setPos(s32, s32);
    void setPopUpward();
    void setPopDownward();
};

class BgVramTask {
public:
    void cancel();
};

// Comm/session singleton (gCommManager)
class CommManager {
public:
    void endRecord(u32, u32);
    void writeRecord(u8 *, u32);
    void beginRecord();
    s32 getSendSeq();
    BOOL isOnline();
};

class InventoryItemGrid {
public:
    InventoryItemGrid();
    ~InventoryItemGrid();
//@@CLS_Unk_ov094_02294a50@@
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

// 0x15e0 object whose ctor/dtor are plain-named in ov094 (renamed, see renames.txt)
class InventoryBg {
public:
    InventoryBg();
    ~InventoryBg();
    u32 unk_00[0x15e0 / 4];
};

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32, s32);
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

class PopupChoiceMenuBody {
public:
    s32 getRowY(s32);
    s32 getRowX();
    s32 hitTestRowOrLast(s32, s32);
    BOOL isClosed();
    BOOL isOpen();
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    void init(s32, s32, const char *);
    u32 unk_00[0x300 / 4];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32);
    u32 unk_00[0x108 / 4];
};

// Menu cursor sub-object hierarchy (same as ov140)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32);
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
    void moveToEase(s32, s32, s32, s32);
    void moveToLinear(s32, s32, s32);
    void warpTo(s32, s32);
    void setPoseIdle();
    void setPoseRelease();
};

class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
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

    void applySlideOffset(s32, s32, s32);
    void setSlideExtent(s32);
    void beginSubSlideOut(s32, s32, s32, s32);
    void beginSubSlideIn(s32, s32, s32, s32);
    s32 stepSlideOut(s32);
    s32 stepSlideIn(s32);
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

typedef void (LostFoundRecycleMenu::*Unk_ov110_02297778_Fn)();

// Stand-in layout used by the free-function (state helper) half of the overlay
struct Unk_ov110_02295588_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov110_S {
    /* 0x0000 */ u8 pad_00[0x8c];
    /* 0x008c */ u8 unk_8c;
    /* 0x008d */ u8 unk_8d;
    /* 0x008e */ u8 pad_8e[0x94 - 0x8e];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ u16 unk_b0[15];
    /* 0x00ce */ u16 unk_ce[15];
    /* 0x00ec */ u16 unk_ec;
    /* 0x00ee */ u8 pad_ee[2];
    /* 0x00f0 */ u8 unk_f0;
    /* 0x00f1 */ u8 unk_f1;
    /* 0x00f2 */ u8 unk_f2;
    /* 0x00f3 */ u8 unk_f3;
    /* 0x00f4 */ u8 unk_f4;
    /* 0x00f5 */ u8 unk_f5;
    /* 0x00f6 */ u8 unk_f6;
    /* 0x00f7 */ u8 unk_f7;
    /* 0x00f8 */ u8 unk_f8;
    /* 0x00f9 */ u8 unk_f9;
    /* 0x00fa */ u8 unk_fa;
    /* 0x00fb */ u8 unk_fb;
    /* 0x00fc */ u8 unk_fc;
    /* 0x00fd */ u8 pad_fd[3];
    /* 0x0100 */ u8 unk_100[0x38];
    /* 0x0138 */ u8 unk_138[0xa60];
    /* 0x0b98 */ u8 unk_b98[0x28];
    /* 0x0bc0 */ u8 unk_bc0[0x15e0];
    /* 0x21a0 */ u8 unk_21a0[0xc0];
    /* 0x2260 */ u8 unk_2260[0x18];
    /* 0x2278 */ u8 unk_2278[0x64];
    /* 0x22dc */ u8 unk_22dc[0x2f9];
    /* 0x25d5 */ u8 unk_25d5[0x18f];
};
typedef Unk_ov110_S S;

// Vtable 0x02297778
class LostFoundRecycleMenu : public MenuProc {
public:
    LostFoundRecycleMenu()
        : unk_100(), unk_138(), unk_b98(), unk_bc0(), unk_21a0(), unk_2260(), unk_2278(), unk_22dc(), unk_25dc(), unk_26e4() {}

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
    BOOL isResultSent();
    void sendItemsRecord(u8 v);
    s32 packItemList(u16 *p);
    void confirm(s32 flag);
    void setOkLabel(s32 flag);
    void *allocTextLabel();
    void resetTextLabels();
    BOOL moveCursorByPad(void *pad, s32 mode);
    void moveCursorOnButtons(void *pad);
    void moveCursorInBox(void *pad, s32 mode);
    void moveCursorInPockets(void *pad, s32 mode);
    void cancelChoiceList();
    s32 applyChoice();
    void startExchange(u8 v);
    void startPutDown(u8 v);
    void startPickUp();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void placeCursorAtTarget();
    void placeCursorOnFirstChoice();

    // state functions (table targets; bodies are the free-function state helpers)
    void mainAct00();
    void mainAct01();
    void mainAct02();
    void mainAct03();
    void mainAct04();
    void mainAct05();
    void mainAct06();
    void mainAct07();
    void updateCursorMove();
    void updateCursorPress();
    void updateCursorRelease();
    void mainAct0B();
    void mainAct0C();
    void mainAct0D();
    void mainAct0E();
    void mainAct0F();
    void mainAct10();
    void mainAct11();
    void mainAct12();
    void mainAct13();
    void mainAct14();
    void mainAct15();
    void transitionAct01();
    void transitionAct02();
    void transitionAct03();
    void transitionAct04();
    void transitionAct05();
    void transitionAct06();

    void transitionAct00();
    BOOL isForcedClose();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ u8 unk_a0[0x10];
    /* 0xb0 */ u16 unk_b0[15];
    /* 0xce */ u16 unk_ce[15];
    /* 0xec */ u8 unk_ec[2];
    /* 0xee */ s16 unk_ee;
    /* 0xf0 */ u8 unk_f0[5];
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
    /* 0xf8 */ u8 unk_f8;
    /* 0xf9 */ u8 unk_f9;
    /* 0xfa */ u8 unk_fa;
    /* 0xfb */ u8 unk_fb;
    /* 0xfc */ u8 unk_fc;
    /* 0xfd */ u8 unk_fd[3];
    /* 0x100 */ BgVramTaskPair unk_100[1];
    /* 0x138 */ InventoryItemGrid unk_138;
    /* 0xb98 */ LetterGrid unk_b98;
    /* 0xbc0 */ InventoryBg unk_bc0;
    /* 0x21a0 */ TouchPromptBalloon unk_21a0;
    /* 0x2260 */ CursorMotion unk_2260;
    /* 0x2278 */ MenuCursorBuf0 unk_2278;
    /* 0x22dc */ PopupChoiceMenu unk_22dc;
    /* 0x25dc */ MenuErrorMessage unk_25dc;
    /* 0x26e4 */ Unk_020e0488 unk_26e4[2];
};

static inline void func_0206fab4(void *p, s32 a, s32 b) { ((Unk_020e0488 *)p)->func_0206fab4((s32)a, (s32)b); }
static inline void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) { ((Unk_020e0488 *)p)->func_0206fb9c((u32)a, (u32)b, (u32)c, (u8)d, (u8)e, (s32)f); }
static inline void func_0206fc44(void *p) { ((Unk_020e0488 *)p)->func_0206fc44(); }
static inline void CommManager_endRecord(void *p, s32 a, s32 b) { ((CommManager *)p)->endRecord((u32)a, (u32)b); }
static inline void CommManager_writeRecord(void *p, void *buf, s32 n) { ((CommManager *)p)->writeRecord((u8 *)buf, (u32)n); }
static inline void CommManager_beginRecord(void *p) { ((CommManager *)p)->beginRecord(); }
static inline s32 CommManager_getSendSeq(void *p) { return ((CommManager *)p)->getSendSeq(); }
static inline BOOL CommManager_isOnline(void *p) { return ((CommManager *)p)->isOnline(); }
static inline void func_02089ad8(void *p, s32 a, s32 b) { ((LabelBalloon *)p)->setPos((s32)a, (s32)b); }
static inline void func_02089af0(void *p) { ((LabelBalloon *)p)->setPopUpward(); }
static inline void func_02089af8(void *p) { ((LabelBalloon *)p)->setPopDownward(); }
static inline s32 func_0208d4fc(void *p) { return ((HandCursor *)p)->isAnimDone(); }
static inline s32 func_0208d534(void *p) { return ((HandCursor *)p)->getAnim(); }
static inline void func_0208d538(void *p, s32 a) { ((HandCursor *)p)->setAnimAtEnd((s32)a); }
static inline s32 func_0208d644(void *p) { return ((HandCursor *)p)->enableObjWindow(); }
static inline void func_020b87d0(void *p) { ((BgVramTask *)p)->cancel(); }
static inline void func_ov002_022006a4(void *a, s32 b) { ((TouchPromptBalloon *)a)->setAutoCloseTimer((u8)b); }
static inline void func_ov002_022006b0(void *p) { ((TouchPromptBalloon *)p)->cancelQueuedOpen(); }
static inline void func_ov002_022006b8(void *p) { ((TouchPromptBalloon *)p)->queueOpen(); }
static inline void func_ov002_022006c0(void *p) { ((TouchPromptBalloon *)p)->commitOpen(); }
static inline void func_ov002_022006e4(void *self, s32 a) { ((TouchPromptBalloon *)self)->hide((s32)a); }
static inline s32 func_ov002_0220071c(void *a) { return ((TouchPromptBalloon *)a)->updatePrompt(); }
static inline void func_ov002_02200840(void *a, s32 b, s32 c, s32 d) { ((MenuProc *)a)->applySlideOffset((s32)b, (s32)c, (s32)d); }
static inline void func_ov002_02200850(void *a, s32 b) { ((MenuProc *)a)->setSlideExtent((s32)b); }
static inline void func_ov002_022008c4(void *a, s32 b, s32 c, s32 d, s32 e) { ((MenuProc *)a)->beginSubSlideOut((s32)b, (s32)c, (s32)d, (s32)e); }
static inline void func_ov002_022008e0(void *a, s32 b, s32 c, s32 d, s32 e) { ((MenuProc *)a)->beginSubSlideIn((s32)b, (s32)c, (s32)d, (s32)e); }
static inline s32 func_ov002_022008fc(void *a, s32 b) { return ((MenuProc *)a)->stepSlideOut((s32)b); }
static inline s32 func_ov002_02200908(void *a, s32 b) { return ((MenuProc *)a)->stepSlideIn((s32)b); }
static inline s32 func_ov002_02200920(void *a) { return ((MenuProc *)a)->getSlideOffsetY(); }
static inline void func_ov002_02200980(void *self) { ((MenuProc *)self)->restartKeyRepeat(); }
static inline u32 func_ov002_022009c8(void *self) { return ((MenuProc *)self)->takeRepeatedKeys(); }
static inline u32 func_ov002_022009d4(void *self) { return ((MenuProc *)self)->checkSwitchToTouch(); }
static inline s32 func_ov002_02200a14(void *a, s32 b) { return ((MenuProc *)a)->checkSwitchToButtons((s32)b); }
static inline void func_ov002_02200a50(void *a, s32 b) { ((MenuProc *)a)->setTransitionState((u8)b); }
static inline void func_ov002_02200a58(void *self, s32 s) { ((MenuProc *)self)->setMainState((u8)s); }
static inline void func_ov002_02200a60(void *self, s32 s) { ((MenuProc *)self)->setPhase((u8)s); }
static inline s32 func_ov002_02201498(void *p, u32 v) { return ((PopupChoiceMenuBody *)p)->getRowY((s32)v); }
static inline s32 func_ov002_022014a4(void *p) { return ((PopupChoiceMenuBody *)p)->getRowX(); }
static inline s32 func_ov002_022014c0(void *a, s32 b, s32 c) { return ((PopupChoiceMenuBody *)a)->hitTestRowOrLast((s32)b, (s32)c); }
static inline BOOL func_ov002_022017a4(void *p) { return ((PopupChoiceMenuBody *)p)->isClosed(); }
static inline BOOL func_ov002_022017b4(void *p) { return ((PopupChoiceMenuBody *)p)->isOpen(); }
static inline void func_ov002_02202310(void *a, s32 b, s32 c, s32 d) { ((PopupChoiceMenu *)a)->init((s32)b, (s32)c, (const char *)d); }
static inline void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c) { ((CursorMotion *)p)->startLinear((s32)a, (s32)b, (s32)c); }
static inline s32 func_ov002_022026f4(void *p, s32 a, s32 b) { return ((CursorMotion *)p)->setPos((s32)a, (s32)b); }
static inline s32 func_ov002_02202708(void *p) { return ((CursorMotion *)p)->getY(); }
static inline s32 func_ov002_02202710(void *p) { return ((CursorMotion *)p)->getX(); }
static inline BOOL func_ov002_02202718(void *p) { return ((CursorMotion *)p)->update(); }
static inline void func_ov002_022027a4(void *a) { ((CursorMotion *)a)->reset(); }
static inline s32 func_ov002_022028a0(void *p) { return ((MenuCursorBase *)p)->getFrameScreenY(); }
static inline s32 func_ov002_022028c8(void *p) { return ((MenuCursorBase *)p)->getFrameScreenX(); }
static inline BOOL func_ov002_022028f0(void *p) { return ((MenuCursorBase *)p)->isMoving(); }
static inline BOOL func_ov002_022028fc(void *p) { return ((MenuCursorBase *)p)->func_ov002_022028fc(); }
static inline BOOL func_ov002_02202928(void *p) { return ((MenuCursorBase *)p)->func_ov002_02202928(); }
static inline void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d) { ((MenuCursorBase *)p)->moveToEase((s32)a, (s32)b, (s32)c, (s32)d); }
static inline void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c) { ((MenuCursorBase *)p)->moveToLinear((s32)a, (s32)b, (s32)c); }
static inline void func_ov002_02202a40(void *p, s32 a, s32 b) { ((MenuCursorBase *)p)->warpTo((s32)a, (s32)b); }
static inline void func_ov002_02202b68(void *p) { ((MenuCursor *)p)->setPosePress(); }
static inline void func_ov002_02202d00(void *p, s32 a) { ((MenuCursor *)p)->setAnimIfChanged((s32)a); }
static inline BOOL func_ov002_02204234(void *p, s32 a) { return ((MenuErrorMessage *)p)->update((s32)a); }
static inline void func_ov092_02291ce4(s32 a, s32 b, s32 c) { ((MenuLauncher *)a)->setNextRequest((s32)b, (s32)c); }
static inline void func_ov094_022941f8(void *a, s32 b) { ((LetterGrid *)a)->highlightLetterKinds((u32)b); }
static inline void func_ov094_022943b0(void *p) { ((LetterGrid *)p)->clearMarks(); }
static inline void func_ov094_022943f8(void *p) { ((LetterGrid *)p)->clearCursorSlot(); }
static inline void func_ov094_0229462c(void *a) { ((LetterGrid *)a)->updateCursorLift(); }
static inline void func_ov094_02294644(void *a, s32 b) { ((LetterGrid *)a)->init((s32)b); }
static inline void func_ov110_02294d68(S *s, u32 m) { ((LostFoundRecycleMenu *)s)->clearFlags((u32)m); }
static inline void func_ov110_02294d78(S *s, u32 v) { ((LostFoundRecycleMenu *)s)->setFlags((u32)v); }
static inline BOOL func_ov110_02294d88(S *s, u32 m) { return ((LostFoundRecycleMenu *)s)->testFlags((u32)m); }
static inline BOOL func_ov110_02294d9c(S *s) { return ((LostFoundRecycleMenu *)s)->isResultSent(); }
static inline void func_ov110_02294e78(S *s, u32 v) { ((LostFoundRecycleMenu *)s)->confirm((s32)v); }
static inline void func_ov110_02294fb8(S *s, s32 a) { ((LostFoundRecycleMenu *)s)->setOkLabel((s32)a); }
static inline void func_ov110_02295034(S *s) { ((LostFoundRecycleMenu *)s)->resetTextLabels(); }
static inline BOOL func_ov110_02295060(S *s, u32 a, u32 b) { return ((LostFoundRecycleMenu *)s)->moveCursorByPad((void *)a, (s32)b); }
static inline void func_ov110_022953b4(S *s) { ((LostFoundRecycleMenu *)s)->cancelChoiceList(); }
static inline s32 func_ov110_022953e0(S *s) { return ((LostFoundRecycleMenu *)s)->applyChoice(); }
static inline void func_ov110_02295404(S *s, u32 v) { ((LostFoundRecycleMenu *)s)->startExchange((u8)v); }
static inline void func_ov110_0229544c(S *s, u32 v) { ((LostFoundRecycleMenu *)s)->startPutDown((u8)v); }
static inline void func_ov110_02295488(S *s) { ((LostFoundRecycleMenu *)s)->startPickUp(); }
static inline void func_ov110_022954a8(S *s) { ((LostFoundRecycleMenu *)s)->releaseCursor(); }
static inline void func_ov110_022954c8(S *s) { ((LostFoundRecycleMenu *)s)->pressCursor(); }
static inline void func_ov110_022954e8(S *s) { ((LostFoundRecycleMenu *)s)->refreshCursor(); }
static inline void func_ov110_02295508(S *s) { ((LostFoundRecycleMenu *)s)->placeCursorAtTarget(); }
static inline void func_ov110_0229553c(S *s) { ((LostFoundRecycleMenu *)s)->placeCursorOnFirstChoice(); }
static inline void func_ov110_02296370(S *s) { ((LostFoundRecycleMenu *)s)->mainAct15(); }
static inline void func_ov110_022963b4(S *s) { ((LostFoundRecycleMenu *)s)->mainAct14(); }
static inline void func_ov110_022963e8(S *s) { ((LostFoundRecycleMenu *)s)->mainAct13(); }
static inline void func_ov110_02296408(S *s) { ((LostFoundRecycleMenu *)s)->mainAct12(); }
static inline void func_ov110_0229644c(S *s) { ((LostFoundRecycleMenu *)s)->mainAct11(); }
static inline void func_ov110_02296488(S *s) { ((LostFoundRecycleMenu *)s)->mainAct10(); }
static inline void func_ov110_022964c0(S *s) { ((LostFoundRecycleMenu *)s)->mainAct0F(); }
static inline void func_ov110_02296510(S *s) { ((LostFoundRecycleMenu *)s)->mainAct0E(); }
static inline void func_ov110_02296558(S *s) { ((LostFoundRecycleMenu *)s)->mainAct0D(); }
static inline void func_ov110_022965ac(S *s) { ((LostFoundRecycleMenu *)s)->mainAct0C(); }
static inline void func_ov110_022965d8(S *s) { ((LostFoundRecycleMenu *)s)->mainAct0B(); }
static inline void func_ov110_02296608(S *s) { ((LostFoundRecycleMenu *)s)->updateCursorRelease(); }
static inline void func_ov110_02296630(S *s) { ((LostFoundRecycleMenu *)s)->updateCursorPress(); }
static inline void func_ov110_02296664(S *s) { ((LostFoundRecycleMenu *)s)->updateCursorMove(); }
static inline void func_ov110_022966b4(S *s) { ((LostFoundRecycleMenu *)s)->mainAct07(); }
static inline void func_ov110_02296700(S *s) { ((LostFoundRecycleMenu *)s)->mainAct06(); }
static inline void func_ov110_02296780(S *s) { ((LostFoundRecycleMenu *)s)->mainAct05(); }
static inline void func_ov110_02296874(S *s) { ((LostFoundRecycleMenu *)s)->mainAct04(); }
static inline void func_ov110_022969ec(S *s) { ((LostFoundRecycleMenu *)s)->mainAct03(); }
static inline void func_ov110_02296b1c(S *s) { ((LostFoundRecycleMenu *)s)->mainAct02(); }
static inline void func_ov110_02296bb8(S *s) { ((LostFoundRecycleMenu *)s)->mainAct01(); }
static inline void func_ov110_02296c0c(S *s) { ((LostFoundRecycleMenu *)s)->mainAct00(); }
static inline void func_ov110_02296f70(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct06(); }
static inline void func_ov110_02296fbc(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct05(); }
static inline void func_ov110_02297024(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct04(); }
static inline void func_ov110_02297094(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct03(); }
static inline void func_ov110_022970cc(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct02(); }
static inline void func_ov110_0229714c(S *s) { ((LostFoundRecycleMenu *)s)->transitionAct01(); }
static inline BOOL func_ov110_0229726c(S *s) { return ((LostFoundRecycleMenu *)s)->isForcedClose(); }
static inline void func_ov110_0229728c(S *s) { ((LostFoundRecycleMenu *)s)->runMainState(); }

extern "C" {
void LostFoundRecycleMenu_PickCancelChoice(S *s);
void LostFoundRecycleMenu_MoveCursorToChoice(S *s);
void LostFoundRecycleMenu_MoveCursorToTarget(S *s);
void LostFoundRecycleMenu_HideCursor(S *s);
s32 LostFoundRecycleMenu_GetCursorTargetY(S *s);
s32 LostFoundRecycleMenu_GetCursorTargetX(S *s);
void LostFoundRecycleMenu_ShowCursor(S *s);
void LostFoundRecycleMenu_ExchangeHeldItem(S *s, u32 a);
void LostFoundRecycleMenu_ReleaseHeldItem(S *s, u32 a);
void LostFoundRecycleMenu_PickUpItem(S *s, u32 a);
void LostFoundRecycleMenu_TrackFlyingItem(S *s);
void LostFoundRecycleMenu_TrackCursor(S *s);
void LostFoundRecycleMenu_TrackTouch(S *s);
void LostFoundRecycleMenu_DrawHeldItem(S *s);
void LostFoundRecycleMenu_UpdateNameBalloon(S *s);
void LostFoundRecycleMenu_PlaceNameBalloon(S *s);
BOOL LostFoundRecycleMenu_HasTouchMoved(S *s);
void LostFoundRecycleMenu_MarkSlot(S *s, u32 a);
void LostFoundRecycleMenu_ClearMarks(S *s);
void LostFoundRecycleMenu_SetCursorSlot(S *s, u32 a);
void LostFoundRecycleMenu_ClearCursorSlots(S *s);
u32 LostFoundRecycleMenu_GetSlotFlags(S *s, u32 a);
u32 LostFoundRecycleMenu_GetSlotItem(S *s, u32 a);
BOOL LostFoundRecycleMenu_IsSlotEmpty(S *s, u32 a);
BOOL LostFoundRecycleMenu_IsSlotDisabled(S *s, u32 a);
void LostFoundRecycleMenu_DisableRejectedItems(S *s);
BOOL LostFoundRecycleMenu_IsItemRejected(S *s, u32 a);
s32 LostFoundRecycleMenu_GetSlotY(S *s, u32 a);
u32 LostFoundRecycleMenu_GetSlotX(S *s, u32 a);
u32 LostFoundRecycleMenu_GridToBoxSlot(S *s, u32 a);
u32 LostFoundRecycleMenu_GridToBoxSlotOr0F(S *s, u32 a);
void LostFoundRecycleMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c);
BOOL LostFoundRecycleMenu_DropHeldItem(S *s, u32 a);
u32 LostFoundRecycleMenu_FindSlotAt(S *s, u32 a, u32 b, s32 c);
u32 LostFoundRecycleMenu_GridToPocketSlot(S *s, u32 a);
u32 LostFoundRecycleMenu_ToGridSlot(S *s, u32 a);
BOOL LostFoundRecycleMenu_IsButtonSlot(S *s, u32 a);
BOOL LostFoundRecycleMenu_IsBoxSlot(S *s, u32 a);
BOOL LostFoundRecycleMenu_IsPocketSlot(S *s, u32 a);
void LostFoundRecycleMenu_CancelUploads(S *s);
u32 LostFoundRecycleMenu_FindFreeBoxSlot(S *s);
u32 LostFoundRecycleMenu_FindFreePocket(S *s);
void LostFoundRecycleMenu_QuickMove(S *s, u32 a, u32 b);
void LostFoundRecycleMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 b);
void LostFoundRecycleMenu_StartFlyHeldItem(S *s, u32 a, u32 b);
void LostFoundRecycleMenu_PickUpWithHand(S *s, u32 a);
void LostFoundRecycleMenu_PickUpWithTouch(S *s, u32 a);
void LostFoundRecycleMenu_TouchItem(S *s, u32 a);
void LostFoundRecycleMenu_ResumeInput(S *s);
void LostFoundRecycleMenu_StartButtonInput(S *s);
void LostFoundRecycleMenu_StartTouchInput(S *s);
void LostFoundRecycleMenu_LoadObjGraphics(S *s);
void LostFoundRecycleMenu_LoadTopBg(S *s);
void LostFoundRecycleMenu_LoadInventoryBg(S *s);
void LostFoundRecycleMenu_SetupBgLayers();
void LostFoundRecycleMenu_PostStateUpdate(S *s);
void LostFoundRecycleMenu_PreStateUpdate(S *s);
void LostFoundRecycleMenu_PostInputUpdate(S *s);
void LostFoundRecycleMenu_PreInputUpdate(S *s);
void LostFoundRecycleMenu_Exit(S *s);
void LostFoundRecycleMenu_Init(S *s);
}

struct Unk_ov110_SceneEntry {
    LostFoundRecycleMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" LostFoundRecycleMenu *LostFoundRecycleMenu_Create();

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov110_SceneEntry sLostFoundRecycleMenuProfile = {LostFoundRecycleMenu_Create, 0x9d, 0xa1};

static inline BOOL Unk_ov110_02296b1c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" LostFoundRecycleMenu *LostFoundRecycleMenu_Create() { return new LostFoundRecycleMenu(); }

BOOL LostFoundRecycleMenu::vfunc_00() {
    LostFoundRecycleMenu_Init((S *)this);
    setTransitionState(0);
    setPhase(0);
    return TRUE;
}

BOOL LostFoundRecycleMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    LostFoundRecycleMenu_Exit((S *)this);
    return TRUE;
}

BOOL LostFoundRecycleMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    unk_21a0.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_2278.drawWrapped();
    }
    LostFoundRecycleMenu_DrawHeldItem((S *)this);
    if (testFlags(0x80)) {
        InventoryItemGrid_DrawBox(&unk_138, 0, unk_9c);
    }
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(&unk_138, 0, unk_98);
        unk_b98.drawPocketLetters(0, unk_98);
        InventoryBg_DrawSprite(&unk_bc0, unk_98);
    }
    return TRUE;
}

BOOL LostFoundRecycleMenu::execTransition() {
    static Unk_ov110_02297778_Fn tbl[7] = {
        &LostFoundRecycleMenu::transitionAct00,
        &LostFoundRecycleMenu::transitionAct01,
        &LostFoundRecycleMenu::transitionAct02,
        &LostFoundRecycleMenu::transitionAct03,
        &LostFoundRecycleMenu::transitionAct04,
        &LostFoundRecycleMenu::transitionAct05,
        &LostFoundRecycleMenu::transitionAct06};
    LostFoundRecycleMenu_PreStateUpdate((S *)this);
    (this->*tbl[unk_8c])();
    LostFoundRecycleMenu_PostStateUpdate((S *)this);
    return TRUE;
}

void LostFoundRecycleMenu::runMainState() {
    static Unk_ov110_02297778_Fn tbl[22] = {
        &LostFoundRecycleMenu::mainAct00, &LostFoundRecycleMenu::mainAct01,
        &LostFoundRecycleMenu::mainAct02, &LostFoundRecycleMenu::mainAct03,
        &LostFoundRecycleMenu::mainAct04, &LostFoundRecycleMenu::mainAct05,
        &LostFoundRecycleMenu::mainAct06, &LostFoundRecycleMenu::mainAct07,
        &LostFoundRecycleMenu::updateCursorMove, &LostFoundRecycleMenu::updateCursorPress,
        &LostFoundRecycleMenu::updateCursorRelease, &LostFoundRecycleMenu::mainAct0B,
        &LostFoundRecycleMenu::mainAct0C, &LostFoundRecycleMenu::mainAct0D,
        &LostFoundRecycleMenu::mainAct0E, &LostFoundRecycleMenu::mainAct0F,
        &LostFoundRecycleMenu::mainAct10, &LostFoundRecycleMenu::mainAct11,
        &LostFoundRecycleMenu::mainAct12, &LostFoundRecycleMenu::mainAct13,
        &LostFoundRecycleMenu::mainAct14, &LostFoundRecycleMenu::mainAct15};
    (this->*tbl[unk_8d])();
}

BOOL LostFoundRecycleMenu::isForcedClose() {
    if (func_0206e61c() && func_0206ed50() == 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL LostFoundRecycleMenu::execMain() {
    func_0206e63c();
    if (isForcedClose()) {
        if (unk_8d == 0 || unk_8d == 1 || unk_8d == 4) {
            LostFoundRecycleMenu_HideCursor((S *)this);
            unk_21a0.hide(0);
            confirm(0);
            return TRUE;
        }
    }
    LostFoundRecycleMenu_PreInputUpdate((S *)this);
    runMainState();
    LostFoundRecycleMenu_PostInputUpdate((S *)this);
    return TRUE;
}

BOOL LostFoundRecycleMenu::execPhase3() { return TRUE; }

BOOL LostFoundRecycleMenu::execPhase4() { return TRUE; }

BOOL LostFoundRecycleMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void LostFoundRecycleMenu::transitionAct00() {
    LostFoundRecycleMenu_SetupBgLayers();
    LostFoundRecycleMenu_LoadInventoryBg((S *)this);
    setTransitionState(1);
}

void LostFoundRecycleMenu::transitionAct01() {
    S *s = (S *)this;
    ::LostFoundRecycleMenu_LoadObjGraphics(s);
    ::InventoryItemGrid_LoadPockets(s->unk_138);
    ::InventoryItemGrid_LoadBox(s->unk_138, s->unk_b0);
    ::LostFoundRecycleMenu_DisableRejectedItems(s);
    ::LetterGrid_LoadPocketLetters(s->unk_b98);
    ::func_ov094_022941f8(s->unk_b98, 0xf);
    ::func_ov002_022008e0(s, 8, 0, 0, 0x30);
    ::Gfx2d_ShowLayer(6);
    ::func_ov002_02200840(s, 6, 0, 0);
    ::func_ov002_02200a50(s, 2);
    ::func_ov110_02294d78(s, 1);
    ::func_ov110_02294d78(s, 2);
    s->unk_98 = ::func_ov002_02200920(s);
}

void LostFoundRecycleMenu::transitionAct02() {
    S *s = (S *)this;
    s32 v = ::func_ov002_02200908(s, 0);
    ::func_ov002_02200840(s, 6, 0, 0);
    s->unk_98 = ::func_ov002_02200920(s);
    if (v) {
        ::LostFoundRecycleMenu_LoadTopBg(s);
        ::func_ov002_022008e0(s, 2, 0, 1, 0x30);
        ::func_ov002_02200850(s, 0x80);
        ::func_ov110_02294d78(s, 0x80);
        ::Gfx2d_ShowLayer(4);
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
        ::func_ov002_02200a50(s, 3);
    }
}

void LostFoundRecycleMenu::transitionAct03() {
    S *s = (S *)this;
    if (::func_ov002_02200908(s, 0)) {
        ::func_ov002_02200a60(s, 2);
        ::LostFoundRecycleMenu_ResumeInput(s);
    }
    ::func_ov002_02200840(s, 4, 0, 0);
    s->unk_9c = ::func_ov002_02200920(s);
}

void LostFoundRecycleMenu::transitionAct04() {
    S *s = (S *)this;
    if (::func_ov110_02294d9c(s)) {
        ::func_ov002_022006e4(s->unk_21a0, 1);
        ::LostFoundRecycleMenu_HideCursor(s);
        ::func_ov092_02291ce4(::ProcBase_GetParent(s), 0x44, 1);
        ::func_ov002_022008c4(s, 2, 4, 1, 0x30);
        ::func_ov002_02200850(s, 0x80);
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
        ::func_ov002_02200a50(s, 5);
    }
}

void LostFoundRecycleMenu::transitionAct05() {
    S *s = (S *)this;
    if (::func_ov002_022008fc(s, 0)) {
        ::Gfx2d_ResetLayer(4);
        ::func_ov110_02294d68(s, 0x80);
        ::func_ov002_022008c4(s, 8, 0, 0, 0x30);
        ::func_ov002_02200840(s, 6, 0, 0);
        ::func_ov002_02200a50(s, 6);
        ::func_ov110_02296f70(s);
    } else {
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
    }
}

void LostFoundRecycleMenu::transitionAct06() {
    S *s = (S *)this;
    if (::func_ov002_022008fc(s, 0)) {
        ::Gfx2d_ResetLayer(6);
        ::func_ov002_02200a60(s, 5);
        ::func_ov110_02294d68(s, 1);
        ::func_ov110_02294d68(s, 2);
    } else {
        ::func_ov002_02200840(s, 6, 0, 0);
    }
    s->unk_98 = ::func_ov002_02200920(s);
}

extern "C" void LostFoundRecycleMenu_Init(S *s) {
    s32 i;
    s->unk_94 = 0;
    InventoryItemGrid_Init(s->unk_138, 1);
    func_ov094_02294644(s->unk_b98, 2);
    InventoryBg_Init(s->unk_bc0, 6);
    s->unk_f3 = 0x1f;
    func_ov002_022027a4(s->unk_2260);
    s->unk_f1 = 0;
    s->unk_f5 = 0;
    func_ov002_02202310(s->unk_22dc, 3, 1, 0);
    s->unk_fb = 0;
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->unk_b0[i] = 0xfff1;
        }
        func_ov110_02294d78(s, 0x200);
        break;
    case 0x1f:
        MI_CpuCopy8(data_021ed210, s->unk_b0, 0x1e);
        break;
    case 0x20:
        MI_CpuCopy8(data_021ed22e, s->unk_b0, 0x1e);
        break;
    }
    MI_CpuCopy8(s->unk_b0, s->unk_ce, 0x1e);
    func_0206ec04();
}

extern "C" void LostFoundRecycleMenu_Exit(S *s) {
    LostFoundRecycleMenu_CancelUploads(s);
    InventoryBg_Exit(s->unk_bc0);
    InventoryItemGrid_Exit(s->unk_138);
    PopupChoice_ForceClose(s->unk_22dc);
    func_ov110_02295034(s);
}

extern "C" void LostFoundRecycleMenu_PreInputUpdate(S *s) {
    LostFoundRecycleMenu_PreStateUpdate(s);
    ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
}

extern "C" void LostFoundRecycleMenu_PostInputUpdate(S *s) {
    LostFoundRecycleMenu_PostStateUpdate(s);
}

extern "C" void LostFoundRecycleMenu_PreStateUpdate(S *s) {
    LostFoundRecycleMenu_CancelUploads(s);
    InventoryBg_PreUpdate(s->unk_bc0);
    InventoryItemGrid_PreUpdate(s->unk_138);
    func_ov094_0229462c(s->unk_b98);
    func_ov110_02295034(s);
}

extern "C" void LostFoundRecycleMenu_PostStateUpdate(S *s) {
    PopupChoice_Update(s->unk_22dc);
    InventoryBg_Update(s->unk_bc0);
    if (func_ov002_0220071c(s->unk_21a0)) {
        LostFoundRecycleMenu_PlaceNameBalloon(s);
    }
}

void LostFoundRecycleMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

extern "C" void LostFoundRecycleMenu_LoadInventoryBg(S *s) {
    InventoryBg_Load(s->unk_bc0, 0);
}

extern "C" void LostFoundRecycleMenu_LoadTopBg(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_tra2.bsc", h, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_sell.bch", h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = func_0206ed50();
    const char *a = NULL;
    const char *b = NULL;
    switch (v) {
    case 0x1d:
        a = "menu/inventory/ten6.bpl";
        b = "menu/inventory/tanu.bch";
        break;
    case 0x1e:
        a = "menu/inventory/ten7.bpl";
        b = "menu/inventory/kinu.bch";
        break;
    case 0x1f:
        a = "menu/inventory/ten8.bpl";
        b = "menu/inventory/lost.bch";
        break;
    case 0x20:
        a = "menu/inventory/ten9.bpl";
        b = "menu/inventory/garb.bch";
        break;
    }
    if (a != NULL) {
        Gfx2d_LoadPaletteFile(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        Gfx2d_LoadCharFile(b, h, 4, 0x208, 0x208, 0x238);
    }
    func_ov110_02294fb8(s, 0);
}

extern "C" void LostFoundRecycleMenu_LoadObjGraphics(S *s) {
    InventoryBg_LoadObjGraphics(s->unk_bc0);
}

void LostFoundRecycleMenu::mainAct00() {
    S *s = (S *)this;
    if (::func_ov002_02200a14(s, 1)) {
        ::LostFoundRecycleMenu_StartButtonInput(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = ::LostFoundRecycleMenu_FindSlotAt(s, x, y, 1);
            if (r != 0x1f) {
                ::LostFoundRecycleMenu_TouchItem(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x60 && y <= 0x70) {
                ::func_ov110_02294e78(s, 1);
            }
        }
    }
}

void LostFoundRecycleMenu::mainAct01() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        ::func_ov002_02200a58(s, 0);
        ::func_ov002_022006a4(s->unk_21a0, 0x3c);
    } else if (::func_ov110_02294d88(s, 4) && ::LostFoundRecycleMenu_HasTouchMoved(s)) {
        ::LostFoundRecycleMenu_PickUpWithTouch(s, s->unk_f2);
    } else {
        ::func_ov002_022006c0(s->unk_21a0);
    }
}

void LostFoundRecycleMenu::mainAct02() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::func_ov110_022953b4(s);
    } else if (::func_ov002_02200a14(s, 1)) {
        ::func_ov110_022953b4(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 t = ::func_ov002_022014c0(s->unk_22dc, gTouchCurX, gTouchCurY);
            if (t >= 0) {
                ::PopupChoice_DecideRow(s->unk_22dc, t, 1);
                s->unk_f9 = s->unk_25d5[t];
                ::func_ov002_02200a58(s, 0x12);
            }
        }
    }
}

void LostFoundRecycleMenu::mainAct03() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::LostFoundRecycleMenu_ReleaseHeldItem(s, s->unk_f4);
        ::LostFoundRecycleMenu_HideCursor(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::func_ov110_02294e78(s, 0);
    } else {
        ::LostFoundRecycleMenu_TrackTouch(s);
        ::LostFoundRecycleMenu_ClearMarks(s);
        s32 x = s->unk_ac + 8;
        s32 t = ::LostFoundRecycleMenu_FindSlotAt(s, s->unk_a8 + 8, x, 0);
        if (::func_ov110_02294d88(s, 0x200)) {
            if ((::LostFoundRecycleMenu_IsBoxSlot(s, t) && ::LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f4))
                || (::LostFoundRecycleMenu_IsPocketSlot(s, t) && ::LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f4))) {
                if (::LostFoundRecycleMenu_GetSlotItem(s, t) != 0xfff1) {
                    t = 0x1f;
                }
            }
        }
        if (t != 0x1f) {
            if (gTouchHeld == 0) {
                if (::LostFoundRecycleMenu_IsSlotDisabled(s, t)) {
                    ::LostFoundRecycleMenu_FlyHeldToFreeSlot(s, s->unk_f4, x);
                } else {
                    s32 r = ::LostFoundRecycleMenu_DropHeldItem(s, t);
                    if (r == 0) {
                        ::LostFoundRecycleMenu_FlyHeldToFreeSlot(s, s->unk_f4, x);
                    } else {
                        ::Inventory_PlayPutDownSe();
                        ::LostFoundRecycleMenu_ResumeInput(s);
                    }
                }
            } else {
                ::LostFoundRecycleMenu_MarkSlot(s, t);
            }
        } else if (gTouchHeld == 0) {
            ::LostFoundRecycleMenu_FlyHeldToFreeSlot(s, s->unk_f4, x);
        }
    }
}

void LostFoundRecycleMenu::mainAct04() {
    S *s = (S *)this;
    if (::func_ov002_022009d4(s)) {
        ::LostFoundRecycleMenu_StartTouchInput(s);
        ::func_ov002_022006e4(s->unk_21a0, 1);
    } else {
        s32 v = ::func_ov002_022009c8(s);
        if (::func_ov110_02295060(s, v, 0)) {
            ::LostFoundRecycleMenu_UpdateNameBalloon(s);
            ::LostFoundRecycleMenu_MoveCursorToTarget(s);
            ::func_ov002_022006e4(s->unk_21a0, 0);
        } else {
            if (::LostFoundRecycleMenu_IsSlotDisabled(s, s->unk_f5) != 0) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (::LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f5) || ::LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f5)) {
                        if (!::LostFoundRecycleMenu_IsSlotEmpty(s, s->unk_f5)) {
                            ::func_ov110_02295488(s);
                        }
                    } else if (::LostFoundRecycleMenu_IsButtonSlot(s, s->unk_f5)) {
                        ::func_ov110_022954c8(s);
                    }
                } else if (k & 0x800) {
                    if (::LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f5) || ::LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f5)) {
                        if (!::LostFoundRecycleMenu_IsSlotEmpty(s, s->unk_f5)) {
                            s32 r = ::LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f5) ? ::LostFoundRecycleMenu_FindFreeBoxSlot(s) : ::LostFoundRecycleMenu_FindFreePocket(s);
                            if (r != 0x1f) {
                                ::LostFoundRecycleMenu_QuickMove(s, s->unk_f5, r);
                                ::func_ov002_022006e4(s->unk_21a0, 1);
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
                    ::LostFoundRecycleMenu_HideCursor(s);
                    ::func_ov002_022006e4(s->unk_21a0, 0);
                    ::func_ov110_02294e78(s, 1);
                } else {
                    ::func_ov002_022006c0(s->unk_21a0);
                }
            }
        }
    }
}

void LostFoundRecycleMenu::mainAct05() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::LostFoundRecycleMenu_ReleaseHeldItem(s, s->unk_f4);
        ::LostFoundRecycleMenu_HideCursor(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::func_ov110_02294e78(s, 0);
    } else if (::func_ov110_02295060(s, ::func_ov002_022009c8(s), 1)) {
        ::LostFoundRecycleMenu_UpdateNameBalloon(s);
        ::LostFoundRecycleMenu_MoveCursorToTarget(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            if (::LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f5) || ::LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f5)) {
                if (!::LostFoundRecycleMenu_IsSlotDisabled(s, s->unk_f5)) {
                    if (::LostFoundRecycleMenu_IsSlotEmpty(s, s->unk_f5)) {
                        ::func_ov110_0229544c(s, s->unk_f5);
                    } else {
                        ::func_ov110_02295404(s, s->unk_f5);
                    }
                }
            }
        } else if ((k & 2) != 0) {
            ::func_ov110_0229544c(s, s->unk_f4);
        } else {
            ::LostFoundRecycleMenu_TrackCursor(s);
            ::func_ov002_022006c0(s->unk_21a0);
        }
    }
}

void LostFoundRecycleMenu::mainAct06() {
    S *s = (S *)this;
    if (::func_ov002_022009d4(s) || ::func_ov110_0229726c(s)) {
        ::func_ov110_022953b4(s);
    } else if (::PopupChoice_MoveCursor(s->unk_22dc, ::func_ov002_022009c8(s), &s->unk_fa, 0)) {
        ::LostFoundRecycleMenu_MoveCursorToChoice(s);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ::func_ov002_02202b68(s->unk_2278);
            ::func_ov002_02200a58(s, 7);
        } else if ((k & 2) != 0) {
            ::LostFoundRecycleMenu_PickCancelChoice(s);
        }
    }
}

void LostFoundRecycleMenu::mainAct07() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::PopupChoice_DecideRow(s->unk_22dc, s->unk_fa, 1);
        s->unk_f9 = *(u8 *)((u8 *)s + s->unk_fa + 0x25d5);
        ::func_ov002_02200a58(s, 0x12);
    }
}

void LostFoundRecycleMenu::updateCursorMove() {
    S *s = (S *)this;
    if (!::func_ov002_022028f0(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
        if ((u8)(s->unk_f8 + 0xfc) <= 1) {
            ::LostFoundRecycleMenu_SetCursorSlot(s, s->unk_f5);
        }
        ::func_ov110_0229728c(s);
    }
    ::LostFoundRecycleMenu_TrackCursor(s);
}

void LostFoundRecycleMenu::updateCursorPress() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        u32 t = s->unk_f5;
        if (t == 0x1e) {
            ::func_ov110_02294e78(s, 1);
        } else {
            ::func_ov110_022954a8(s);
        }
    }
}

void LostFoundRecycleMenu::updateCursorRelease() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov110_022954e8(s);
        ::func_ov002_02200a58(s, 4);
    }
}

void LostFoundRecycleMenu::mainAct0B() {
    S *s = (S *)this;
    if (::func_ov002_02202928(s->unk_2278)) {
        ::LostFoundRecycleMenu_PickUpWithHand(s, s->unk_f5);
        ::func_ov002_02200a58(s, 0xc);
    }
}

void LostFoundRecycleMenu::mainAct0C() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
    }
    ::LostFoundRecycleMenu_TrackCursor(s);
}

void LostFoundRecycleMenu::mainAct0D() {
    S *s = (S *)this;
    if (!::func_ov002_02202928(s->unk_2278)) {
        u32 a = s->unk_f7;
        if (s->unk_f5 == a) {
            ::LostFoundRecycleMenu_DropHeldItem(s, a);
            ::LostFoundRecycleMenu_UpdateNameBalloon(s);
            ::func_ov002_02200a58(s, 4);
            ::Inventory_PlayPutDownSe();
        } else {
            ::LostFoundRecycleMenu_StartFlyHeldItem(s, a, 4);
        }
    } else {
        ::LostFoundRecycleMenu_TrackCursor(s);
    }
}

void LostFoundRecycleMenu::mainAct0E() {
    S *s = (S *)this;
    if (!::func_ov002_022028fc(s->unk_2278)) {
        ::LostFoundRecycleMenu_ExchangeHeldItem(s, s->unk_f7);
        ::func_ov110_02294d78(s, 0x40);
        ::func_ov002_02200a58(s, 0xf);
        ::LostFoundRecycleMenu_UpdateNameBalloon(s);
    } else {
        ::func_ov002_02200a58(s, 4);
    }
}

void LostFoundRecycleMenu::mainAct0F() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
    }
    if (::func_ov002_02202928(s->unk_2278)) {
        if (::func_ov110_02294d88(s, 0x40)) {
            ::func_ov110_02294d68(s, 0x40);
            ::Inventory_PlayPickUpSe();
        }
        ::LostFoundRecycleMenu_TrackCursor(s);
    }
}

void LostFoundRecycleMenu::mainAct10() {
    S *s = (S *)this;
    if (::func_ov002_02202718(s->unk_2260)) {
        ::LostFoundRecycleMenu_ReleaseHeldItem(s, s->unk_f4);
        ::LostFoundRecycleMenu_ResumeInput(s);
        ::Inventory_PlayPutDownSe();
    } else {
        ::LostFoundRecycleMenu_TrackFlyingItem(s);
    }
}

void LostFoundRecycleMenu::mainAct11() {
    S *s = (S *)this;
    if (::func_ov002_022017b4(s->unk_22dc)) {
        if (::MenuCtrl_IsButtons()) {
            ::func_ov110_0229553c(s);
            ::func_ov002_02200a58(s, 6);
        } else {
            ::func_ov002_02200a58(s, 2);
        }
    }
}

void LostFoundRecycleMenu::mainAct12() {
    S *s = (S *)this;
    if (::PopupChoice_TickDecideDelay(s->unk_22dc)) {
        ::PopupChoice_Close(s->unk_22dc, 0);
        if (::func_0208d534(s->unk_2278)) {
            ::func_ov110_02295508(s);
        }
        ::func_ov002_02200a58(s, 0x13);
    }
}

void LostFoundRecycleMenu::mainAct13() {
    S *s = (S *)this;
    if (::func_ov002_022017a4(s->unk_22dc)) {
        ::func_ov110_022953e0(s);
    }
}

void LostFoundRecycleMenu::mainAct14() {
    S *s = (S *)this;
    if (::func_ov002_02204234((s->unk_25d5 + 7), 1)) {
        ::func_ov002_02200a58(s, s->unk_f8);
        ::func_0208d644(s->unk_2278);
    }
}

void LostFoundRecycleMenu::mainAct15() {
    S *s = (S *)this;
    if (s->unk_fc != 0) {
        s->unk_fc--;
    } else {
        s->unk_8c = 4;
        ::func_ov002_02200a60(s, 1);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::LostFoundRecycleMenu_HideCursor(s);
    }
}

extern "C" void LostFoundRecycleMenu_StartTouchInput(S *s) {
    LostFoundRecycleMenu_HideCursor(s);
    LostFoundRecycleMenu_ClearCursorSlots(s);
    func_ov002_02200a58(s, 0);
}

extern "C" void LostFoundRecycleMenu_StartButtonInput(S *s) {
    s->unk_f3 = 0x1f;
    LostFoundRecycleMenu_ShowCursor(s);
    func_ov002_02200980(s);
    LostFoundRecycleMenu_UpdateNameBalloon(s);
    func_ov002_02200a58(s, 4);
    LostFoundRecycleMenu_SetCursorSlot(s, s->unk_f5);
}

extern "C" void LostFoundRecycleMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch()) {
        LostFoundRecycleMenu_StartTouchInput(s);
    } else {
        LostFoundRecycleMenu_StartButtonInput(s);
    }
}

extern "C" void LostFoundRecycleMenu_TouchItem(S *s, u32 a) {
    u32 r6, r7;
    s->unk_f2 = a;
    func_ov002_02200a58(s, 1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_a0 = LostFoundRecycleMenu_GetSlotX(s, s->unk_f2) - r6;
    s->unk_a4 = LostFoundRecycleMenu_GetSlotY(s, s->unk_f2) - r7;
    s->unk_f3 = a;
    func_ov002_022006b8(s->unk_21a0);
    if (LostFoundRecycleMenu_IsSlotDisabled(s, a)) {
        func_ov110_02294d68(s, 4);
    } else {
        func_ov110_02294d78(s, 4);
        Inventory_PlayTouchSe();
    }
}

extern "C" void LostFoundRecycleMenu_PickUpWithTouch(S *s, u32 a) {
    s->unk_f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    LostFoundRecycleMenu_PickUpItem(s, a);
    if (s->unk_f1 == 1) {
        func_ov002_02200a58(s, 3);
    }
    LostFoundRecycleMenu_TrackTouch(s);
    Inventory_PlayPickUpSe();
}

extern "C" void LostFoundRecycleMenu_PickUpWithHand(S *s, u32 a) {
    s->unk_f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    LostFoundRecycleMenu_PickUpItem(s, a);
    if (s->unk_f1 == 1) {
        s->unk_f8 = 5;
    }
    LostFoundRecycleMenu_TrackCursor(s);
    Inventory_PlayPickUpSe();
}

extern "C" void LostFoundRecycleMenu_StartFlyHeldItem(S *s, u32 a, u32 b) {
    s->unk_f4 = a;
    func_ov002_022026f4(s->unk_2260, s->unk_a8, s->unk_ac);
    u32 x = LostFoundRecycleMenu_GetSlotX(s, a);
    u32 y = LostFoundRecycleMenu_GetSlotY(s, a);
    func_ov002_022026c4(s->unk_2260, x, y, b);
    func_ov002_02202718(s->unk_2260);
    LostFoundRecycleMenu_TrackFlyingItem(s);
    func_ov002_02200a58(s, 0x10);
}

extern "C" void LostFoundRecycleMenu_FlyHeldToFreeSlot(S *s, u32 a, s32 b) {
    u32 r = 0x1f;
    if (b >= 0x6c) {
        if (LostFoundRecycleMenu_IsBoxSlot(s, a)) r = LostFoundRecycleMenu_FindFreePocket(s);
    } else {
        if (LostFoundRecycleMenu_IsPocketSlot(s, a)) r = LostFoundRecycleMenu_FindFreeBoxSlot(s);
    }
    if (r != 0x1f) a = r;
    LostFoundRecycleMenu_StartFlyHeldItem(s, a, 4);
}

extern "C" void LostFoundRecycleMenu_QuickMove(S *s, u32 a, u32 b) {
    LostFoundRecycleMenu_PickUpItem(s, a);
    s->unk_a8 = LostFoundRecycleMenu_GetSlotX(s, a);
    s->unk_ac = LostFoundRecycleMenu_GetSlotY(s, a);
    LostFoundRecycleMenu_StartFlyHeldItem(s, b, 4);
}

extern "C" u32 LostFoundRecycleMenu_FindFreePocket(S *s) {
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) return 0x1f;
    return (u8)t;
}

extern "C" u32 LostFoundRecycleMenu_FindFreeBoxSlot(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->unk_b0[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x1f;
}

extern "C" void LostFoundRecycleMenu_CancelUploads(S *s) {
    func_020b87d0(s->unk_100);
}

extern "C" BOOL LostFoundRecycleMenu_IsPocketSlot(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

extern "C" BOOL LostFoundRecycleMenu_IsBoxSlot(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

extern "C" BOOL LostFoundRecycleMenu_IsButtonSlot(S *s, u32 a) {
    if (a == 0x1e) return TRUE;
    return FALSE;
}

extern "C" u32 LostFoundRecycleMenu_ToGridSlot(S *s, u32 a) {
    if (LostFoundRecycleMenu_IsPocketSlot(s, a)) return (u8)a;
    if (LostFoundRecycleMenu_IsBoxSlot(s, a)) return LostFoundRecycleMenu_GridToBoxSlotOr0F(s, a);
    return 0;
}

extern "C" u32 LostFoundRecycleMenu_GridToPocketSlot(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1f;
}

extern "C" u32 LostFoundRecycleMenu_FindSlotAt(S *s, u32 a, u32 b, s32 c) {
    u32 t = InventoryItemGrid_FindPocketSlotAt(s->unk_138);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(s->unk_138, t)) return 0x1f;
        }
        return LostFoundRecycleMenu_GridToPocketSlot(s, t);
    }
    t = InventoryItemGrid_FindBoxSlotAt(s->unk_138, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (InventoryItemGrid_IsSlotEmpty(s->unk_138, t)) return 0x1f;
        }
        return LostFoundRecycleMenu_GridToBoxSlot(s, t);
    }
    return 0x1f;
}

extern "C" BOOL LostFoundRecycleMenu_DropHeldItem(S *s, u32 a) {
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        u32 t = LostFoundRecycleMenu_GetSlotItem(s, a);
        if (t != 0xfff1) {
            LostFoundRecycleMenu_SetSlotItem(s, s->unk_f4, t, LostFoundRecycleMenu_GetSlotFlags(s, a));
        }
        LostFoundRecycleMenu_ReleaseHeldItem(s, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void LostFoundRecycleMenu_SetSlotItem(S *s, u32 a, u32 b, u32 c) {
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        u32 t = LostFoundRecycleMenu_ToGridSlot(s, a);
        InventoryItemGrid_SetSlotItem(s->unk_138, t, b, c);
        InventoryItemGrid_RefreshSlot(s->unk_138, t);
    }
}

extern "C" u32 LostFoundRecycleMenu_GridToBoxSlotOr0F(S *s, u32 a) {
    if (LostFoundRecycleMenu_IsBoxSlot(s, a)) return (u8)a;
    return 0xf;
}

extern "C" u32 LostFoundRecycleMenu_GridToBoxSlot(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x1f;
}

extern "C" u32 LostFoundRecycleMenu_GetSlotX(S *s, u32 a) {
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotX(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    if (LostFoundRecycleMenu_IsButtonSlot(s, a)) return 0xc4;
    return 0;
}

extern "C" s32 LostFoundRecycleMenu_GetSlotY(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotY(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    if (LostFoundRecycleMenu_IsButtonSlot(s, a)) {
        return 0x68;
    }
    return 0;
}

extern "C" BOOL LostFoundRecycleMenu_IsItemRejected(S *s, u32 a)
{
    volatile u16 v;
    if (LostFoundRecycleMenu_IsSlotEmpty(s, a)) {
        return FALSE;
    }
    if (LostFoundRecycleMenu_GetSlotFlags(s, a)) {
        return TRUE;
    }
    u32 t = LostFoundRecycleMenu_GetSlotItem(s, a);
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    v = t;
    switch (func_0206ed50()) {
    case 0x1e: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if ((x >= 0x11a8 && x <= 0x12a7) || (x >= 0x13c8 && x <= 0x1407) || (x >= 0x13a8 && x <= 0x13c7)
            || (x >= 0x1408 && x <= 0x1428) || (x >= 0x1431 && x <= 0x1470) || (x >= 0x1471 && x <= 0x1491)
            || (x >= 0x1380 && x <= 0x139f)) {
            return FALSE;
        }
        return TRUE;
    }
    case 0x1d: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if (!Clock_GetWeekday()) {
            BOOL g = FALSE;
            u16 x2 = v;
            u16 y2 = v;
            if (y2 >= 0x1531 && x2 <= 0x153a) g = TRUE;
            if (g) return TRUE;
        }
        return FALSE;
    }
    case 0x1f:
        return TRUE;
    case 0x20:
        if (InvItem_IsTurnipFishOrInsect(t)) {
            BOOL f = FALSE;
            u16 x = v;
            u16 y = v;
            if (y >= 0x1531 && x <= 0x153a) f = TRUE;
            if (f || (x >= 0x153b && x <= 0x1541) || (x >= 0x154a && x <= 0x1553)) {
                return FALSE;
            }
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" void LostFoundRecycleMenu_DisableRejectedItems(S *s)
{
    u32 i = 0;
    do {
        if (LostFoundRecycleMenu_IsItemRejected(s, i)) {
            InventoryItemGrid_DisableSlot(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

extern "C" BOOL LostFoundRecycleMenu_IsSlotDisabled(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotDisabled(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    return FALSE;
}

extern "C" BOOL LostFoundRecycleMenu_IsSlotEmpty(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_IsSlotEmpty(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    return TRUE;
}

extern "C" u32 LostFoundRecycleMenu_GetSlotItem(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotItem(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    return 0xfff1;
}

extern "C" u32 LostFoundRecycleMenu_GetSlotFlags(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        return InventoryItemGrid_GetSlotFlags(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
    return 0xf1;
}

extern "C" void LostFoundRecycleMenu_ClearCursorSlots(S *s)
{
    InventoryItemGrid_ClearCursorSlot(s->unk_138);
    func_ov094_022943f8(s->unk_b98);
}

extern "C" void LostFoundRecycleMenu_SetCursorSlot(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_SetCursorSlot(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
        func_ov094_022943f8(s->unk_b98);
    } else if (LostFoundRecycleMenu_IsButtonSlot(s, a)) {
        LostFoundRecycleMenu_ClearCursorSlots(s);
    }
}

extern "C" void LostFoundRecycleMenu_ClearMarks(S *s)
{
    InventoryItemGrid_ClearMarks(s->unk_138);
    func_ov094_022943b0(s->unk_b98);
}

extern "C" void LostFoundRecycleMenu_MarkSlot(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        InventoryItemGrid_MarkSlot(s->unk_138, LostFoundRecycleMenu_ToGridSlot(s, a));
    }
}

extern "C" BOOL LostFoundRecycleMenu_HasTouchMoved(S *s)
{
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

extern "C" void LostFoundRecycleMenu_PlaceNameBalloon(S *s)
{
    s32 a = LostFoundRecycleMenu_GetSlotX(s, s->unk_f3) - 0x6d;
    s32 b = LostFoundRecycleMenu_GetSlotY(s, s->unk_f3) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    if (b < -0x5c) {
        func_02089af8(s->unk_21a0);
        b = LostFoundRecycleMenu_GetSlotY(s, s->unk_f3) - 0x50;
    } else {
        func_02089af0(s->unk_21a0);
    }
    func_02089ad8(s->unk_21a0, a, b);
    if (LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f3) || LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f3)) {
        u32 t = LostFoundRecycleMenu_ToGridSlot(s, s->unk_f3);
        InventoryItemGrid_ShowSlotName(s->unk_138, s->unk_21a0, t);
    }
}

extern "C" void LostFoundRecycleMenu_UpdateNameBalloon(S *s)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, s->unk_f5) || LostFoundRecycleMenu_IsBoxSlot(s, s->unk_f5)) {
        if (LostFoundRecycleMenu_IsSlotEmpty(s, s->unk_f5)) {
            func_ov002_022006b0(s->unk_21a0);
        } else {
            s->unk_f3 = s->unk_f5;
            func_ov002_022006b8(s->unk_21a0);
        }
    } else {
        func_ov002_022006b0(s->unk_21a0);
    }
}

extern "C" void LostFoundRecycleMenu_DrawHeldItem(S *s)
{
    if (!func_ov110_02294d88(s, 0x40)) {
        u32 t = s->unk_f1;
        if (t != 0) {
            if (t == 1) {
                InventoryItemGrid_DrawHeldItem(s->unk_138, s->unk_a8, s->unk_ac);
            }
        }
    }
}

extern "C" void LostFoundRecycleMenu_TrackTouch(S *s)
{
    s->unk_a8 = s->unk_a0 + gTouchCurX;
    s->unk_ac = s->unk_a4 + gTouchCurY;
}

extern "C" void LostFoundRecycleMenu_TrackCursor(S *s)
{
    s->unk_a8 = func_ov002_022028c8(s->unk_2278) - 2;
    s->unk_ac = func_ov002_022028a0(s->unk_2278) - 4;
}

extern "C" void LostFoundRecycleMenu_TrackFlyingItem(S *s)
{
    s->unk_a8 = func_ov002_02202710(s->unk_2260);
    s->unk_ac = func_ov002_02202708(s->unk_2260);
}

extern "C" void LostFoundRecycleMenu_PickUpItem(S *s, u32 a)
{
    if (LostFoundRecycleMenu_IsPocketSlot(s, a) || LostFoundRecycleMenu_IsBoxSlot(s, a)) {
        u32 t = LostFoundRecycleMenu_ToGridSlot(s, a);
        s->unk_f1 = 1;
        s->unk_ec = InventoryItemGrid_GetSlotItem(s->unk_138, t);
        s->unk_f0 = InventoryItemGrid_GetSlotFlags(s->unk_138, t);
        InventoryItemGrid_ClearSlot(s->unk_138, t);
        InventoryItemGrid_SetHeldItem(s->unk_138, s->unk_ec, s->unk_f0);
    }
}

extern "C" void LostFoundRecycleMenu_ReleaseHeldItem(S *s, u32 a)
{
    if (s->unk_f1 == 1) {
        LostFoundRecycleMenu_SetSlotItem(s, a, s->unk_ec, s->unk_f0);
    }
    s->unk_f1 = 0;
}

extern "C" void LostFoundRecycleMenu_ExchangeHeldItem(S *s, u32 a)
{
    if (s->unk_f1 == 1) {
        u32 h = s->unk_ec;
        u32 b = s->unk_f0;
        LostFoundRecycleMenu_PickUpItem(s, a);
        LostFoundRecycleMenu_SetSlotItem(s, a, h, b);
    }
}

extern "C" void LostFoundRecycleMenu_ShowCursor(S *s)
{
    s32 a = LostFoundRecycleMenu_GetCursorTargetX(s);
    s32 b = LostFoundRecycleMenu_GetCursorTargetY(s);
    func_ov002_02202a40(s->unk_2278, a, b);
    if (LostFoundRecycleMenu_IsButtonSlot(s, s->unk_f5)) {
        func_ov002_02202d00(s->unk_2278, 7);
    } else {
        func_ov002_02202d00(s->unk_2278, 1);
    }
    func_ov110_022954e8(s);
}

extern "C" s32 LostFoundRecycleMenu_GetCursorTargetX(S *s)
{
    s32 r = LostFoundRecycleMenu_GetSlotX(s, s->unk_f5);
    if (func_ov110_02294d88(s, 0x20)) {
        r += 0x100;
    } else if (func_ov110_02294d88(s, 0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

extern "C" s32 LostFoundRecycleMenu_GetCursorTargetY(S *s)
{
    return LostFoundRecycleMenu_GetSlotY(s, s->unk_f5);
}

extern "C" void LostFoundRecycleMenu_HideCursor(S *s)
{
    func_ov002_02202d00(s->unk_2278, 0);
    ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
}

extern "C" void LostFoundRecycleMenu_MoveCursorToTarget(S *s)
{
    s32 a = LostFoundRecycleMenu_GetCursorTargetX(s);
    s32 b = LostFoundRecycleMenu_GetCursorTargetY(s);
    func_ov002_022029e8(s->unk_2278, a, b, 3, 1);
    s->unk_f8 = s->unk_8d;
    func_ov002_02200a58(s, 8);
    if (func_ov110_02294d88(s, 0x100)) {
        ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
        func_ov110_02294d68(s, 0x100);
    }
}

extern "C" void LostFoundRecycleMenu_MoveCursorToChoice(S *s)
{
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_fa);
    func_ov002_02202a18(s->unk_2278, a, b, 2);
    s->unk_f8 = s->unk_8d;
    func_ov002_02200a58(s, 8);
}

extern "C" void LostFoundRecycleMenu_PickCancelChoice(S *s)
{
    s->unk_f9 = 1;
    s->unk_fa = PopupChoice_DecideCancel(s->unk_22dc);
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_fa);
    func_ov002_02202a40(s->unk_2278, a, b);
    func_0208d538(s->unk_2278, 8);
    func_ov002_02200a58(s, 0x12);
}

void LostFoundRecycleMenu::placeCursorOnFirstChoice() {
    unk_fa = 0;
    s32 a = func_ov002_022014a4(&unk_22dc);
    s32 b = func_ov002_02201498(&unk_22dc, unk_fa);
    unk_2278.warpTo(a, b);
    ((MenuCursor *)&unk_2278)->setAnimIfChanged(7);
}

void LostFoundRecycleMenu::placeCursorAtTarget() {
    s32 a = LostFoundRecycleMenu_GetCursorTargetX((S *)this);
    s32 b = LostFoundRecycleMenu_GetCursorTargetY((S *)this);
    unk_2278.warpTo(a, b);
    ((MenuCursor *)&unk_2278)->setAnimIfChanged(1);
}

void LostFoundRecycleMenu::refreshCursor() {
    unk_2278.setPoseIdle();
    unk_2278.vfunc_0c();
}

void LostFoundRecycleMenu::pressCursor() {
    ((MenuCursor *)&unk_2278)->setPosePress();
    setMainState(9);
}

void LostFoundRecycleMenu::releaseCursor() {
    unk_2278.setPoseRelease();
    setMainState(0xa);
}

void LostFoundRecycleMenu::startPickUp() {
    ((MenuCursor *)&unk_2278)->setAnimIfChanged(4);
    setMainState(0xb);
}

void LostFoundRecycleMenu::startPutDown(u8 v) {
    unk_21a0.hide(1);
    unk_f7 = v;
    ((MenuCursor *)&unk_2278)->setAnimIfChanged(5);
    setMainState(0xd);
}

void LostFoundRecycleMenu::startExchange(u8 v) {
    unk_21a0.hide(1);
    unk_f8 = unk_8d;
    unk_f7 = v;
    ((MenuCursor *)&unk_2278)->setAnimIfChanged(6);
    setMainState(0xe);
}

s32 LostFoundRecycleMenu::applyChoice() {
    switch (unk_f9) {
    case 0:
        startPickUp();
        break;
    case 1:
    default:
        LostFoundRecycleMenu_ResumeInput((S *)this);
        break;
    }
}

void LostFoundRecycleMenu::cancelChoiceList() {
    unk_f9 = 1;
    placeCursorAtTarget();
    PopupChoice_Close(&unk_22dc, 0);
    setMainState(0x13);
}

void LostFoundRecycleMenu::moveCursorInPockets(void *pad, s32 mode) {
    s32 r = unk_f5;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                setFlags(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    setFlags(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (MenuKeys_HasUp(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        } else {
            unk_f5 = r + 0x19;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        }
    }
}

void LostFoundRecycleMenu::moveCursorInBox(void *pad, s32 mode) {
    s32 r = unk_f5 - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                setFlags(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    setFlags(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (MenuKeys_HasUp(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        }
    } else if (MenuKeys_HasDown(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        } else {
            unk_f5 = r;
        }
    }
}

void LostFoundRecycleMenu::moveCursorOnButtons(void *pad) {
    if (MenuKeys_HasRight(pad)) {
        if (MenuKeys_HasUp(pad)) {
            unk_f5 = 0x19;
        } else {
            unk_f5 = 0;
        }
        setFlags(0x20);
    } else if (MenuKeys_HasLeft(pad)) {
        if (MenuKeys_HasUp(pad)) {
            unk_f5 = 0x1d;
        } else {
            unk_f5 = 4;
        }
    } else if (MenuKeys_HasUp(pad)) {
        unk_f5 = 0x1d;
    }
}

BOOL LostFoundRecycleMenu::moveCursorByPad(void *pad, s32 mode) {
    u8 old = unk_f5;
    clearFlags(0x30);
    clearFlags(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (LostFoundRecycleMenu_IsPocketSlot((S *)this, unk_f5)) {
        moveCursorInPockets(pad, mode);
    } else if (LostFoundRecycleMenu_IsBoxSlot((S *)this, unk_f5)) {
        moveCursorInBox(pad, mode);
    } else if (LostFoundRecycleMenu_IsButtonSlot((S *)this, unk_f5)) {
        moveCursorOnButtons(pad);
    }
    BOOL a = LostFoundRecycleMenu_IsButtonSlot((S *)this, unk_f5);
    if (a != LostFoundRecycleMenu_IsButtonSlot((S *)this, old)) {
        if (LostFoundRecycleMenu_IsButtonSlot((S *)this, unk_f5)) {
            ((MenuCursor *)&unk_2278)->switchToAnim07();
        } else {
            ((MenuCursor *)&unk_2278)->switchToAnim01();
        }
        setFlags(0x100);
    }
    if (old != unk_f5) {
        return TRUE;
    }
    return FALSE;
}

void LostFoundRecycleMenu::resetTextLabels() {
    s32 i;
    unk_fb = 0;
    for (i = 0; i < 2; i++) {
        func_0206fc44(&unk_26e4[i]);
    }
}

void *LostFoundRecycleMenu::allocTextLabel() {
    if (unk_fb >= 2) {
        return &unk_26e4[1];
    }
    unk_fb++;
    return &unk_26e4[unk_fb - 1];
}

void LostFoundRecycleMenu::setOkLabel(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = allocTextLabel();
    ((Unk_020e0488 *)p)->func_0206fb9c(4, 0x1ca, 6, v, 9, 0);
    func_0206f9fc(p, 0x88);
    func_0206fab4(p, 1, 0);
}

void LostFoundRecycleMenu::confirm(s32 flag) {
    clearFlags(8);
    s32 r = func_0206ed50();
    if (r == 0x20) {
        Snd_PlaySe(0x28);
    } else {
        Snd_PlaySe(0x27);
    }
    if (flag != 0) {
        unk_fc = 5;
    } else {
        unk_fc = 0;
    }
    setMainState(0x15);
    setOkLabel(1);
    s32 n = packItemList(unk_b0);
    switch (r) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206eba4(unk_b0);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (unk_b0[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (unk_b0[i] == unk_ce[j]) {
                        unk_ce[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = packItemList(unk_ce);
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206ed2c((u8)n);
            func_0206eba4(unk_ce);
            MI_CpuCopy8(unk_b0, data_021ed210, 0x1e);
            sendItemsRecord(3);
        }
        break;
    }
    case 0x20:
        MI_CpuCopy8(unk_b0, data_021ed22e, 0x1e);
        sendItemsRecord(4);
        func_0206ecf8(1);
        break;
    }
}

s32 LostFoundRecycleMenu::packItemList(u16 *p) {
    s32 i = 0;
    s32 n = i;
    for (; i < 15; i++) {
        u16 v = p[i];
        if (v != 0xfff1) {
            if (i != n) {
                p[n] = v;
                p[i] = 0xfff1;
            }
            n++;
        }
    }
    return n;
}

void LostFoundRecycleMenu::sendItemsRecord(u8 v) {
    u8 buf[0x24];
    if (CommManager_isOnline(gCommManager)) {
        setFlags(8);
        buf[0] = v;
        MI_CpuCopy8(unk_b0, &buf[1], 0x1e);
        void *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, buf, 0x1f);
        CommManager_endRecord(g, 0x16, 4);
        unk_ee = CommManager_getSendSeq(g);
    }
}

BOOL LostFoundRecycleMenu::isResultSent() {
    if (func_0206ed18() == 0) {
        return TRUE;
    }
    if (testFlags(8) == 0) {
        return TRUE;
    }
    if (CommManager_isOnline(gCommManager)) {
        if (Comm_IsSeqConfirmed(unk_ee) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL LostFoundRecycleMenu::testFlags(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void LostFoundRecycleMenu::setFlags(u32 mask) { unk_94 |= mask; }

void LostFoundRecycleMenu::clearFlags(u32 mask) { unk_94 &= ~mask; }

