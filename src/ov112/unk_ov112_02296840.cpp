// ov112: scene overlay (class BbsWriteMenu, vtable 0x02299b10, 0x6a7c bytes): text-entry keyboard screen.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

// Plain view of the scene object used by the extern "C" helpers (offsets only).
struct Unk_ov112_02296840 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0x94 - 0x8e];
    s32 unk_094;
    s32 unk_098;
    s32 unk_09c;
    u8 pad_0a0[0xc];
    u32 unk_0ac;
    s32 unk_0b0;
    u8 pad_0b4[2];
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 unk_0b9;
    u8 unk_0ba;
    u8 unk_0bb;
    u8 unk_0bc;
    u8 unk_0bd;
    u8 unk_0be;
    u8 unk_0bf;
    u8 unk_0c0;
    u8 unk_0c1;
    u8 unk_0c2;
    u8 unk_0c3[0xc0];
    u8 unk_183[0xc0];
    u8 pad_243;
    u8 unk_244[0x34c - 0x244];
    u8 unk_34c[0x370 - 0x34c];
    u8 unk_370[0x3f2c - 0x370];
    u8 unk_3f2c[0x40ac - 0x3f2c];
    u8 unk_40ac[0x40f4 - 0x40ac];
    u8 unk_40f4[0x4258 - 0x40f4];
    u8 unk_4258[0x4460 - 0x4258];
    u8 unk_4460[0x4c60 - 0x4460];
    u8 unk_4c60[0x6a60 - 0x4c60];
    u32 unk_6a60[8];
};

typedef Unk_ov112_02296840 S;

class BbsWriteMenu;

// ---- main-module classes (only what is used here) ----
class EncodedString;

class MsgString {
public:
    virtual ~MsgString();
    void fromEncoded(EncodedString *dst, s32 a, s32 b);
    void clear();
};

class EncodedString {
public:
    virtual ~EncodedString();
    void fromMsgString(MsgString *src);
};

class MsgString193 : public MsgString {
public:
    MsgString193();
    virtual ~MsgString193();
    u32 unk_04[(0xc4 - 4) / 4];
};

class EncodedString192 : public EncodedString {
public:
    EncodedString192();
    virtual ~EncodedString192();
    u32 unk_04[(0xd0 - 4) / 4];
};

// text window, 0x40 bytes
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    void setHighlight(u8 a, u8 b, u32 c, u32 d);
    void redrawAligned(s32 a, s32 b);
    void createBufferLabel(u32 a, u32 b, u8 c, u8 d);
    void createSmallLabel(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void destroyLabel();
    u32 unk_04[(0x40 - 4) / 4];
};

class EncodedString41 : public EncodedString {
public:
    EncodedString41();
    virtual ~EncodedString41();
    u8 pad_04[0xa];
    char text[0x2a];
};

class MsgString9B : public MsgString {
public:
    MsgString9B();
    virtual ~MsgString9B();
    u32 unk_04[6];
};

// screen upload helper, 0x24 bytes
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    void requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void cancel();
    u32 unk_04[8];
};

// comm/session singleton (gCommManager)
class CommManager {
public:
    BOOL isOnline();
    s32 getSendSeq();
    void beginRecord();
    void writeRecord(u8 *buf, u32 n);
    void endRecord(u32 a, u32 b);
};

class PlayerId {
public:
    void getNameString(MsgString *p);
};

class PlayerData {
public:
    void getErrands();
    PlayerId *getPlayerId();
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    s32 getAnim();
};

class ScrollKnob : public HandCursor {
public:
    BOOL areAnimsDone();
    void moveTo(s32 a, s32 b);
};

// ---- ov002 classes ----
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *p, s32 a, u32 b);
    u32 unk_00[0x108 / 4];
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();
    s32 getGripY();
    s32 getGripX();
    void release();
    void grab();
    void show();
    BOOL hitTest(s32 x, s32 y);
    u32 unk_04[0x44 / 4];
};

class MenuBottomButtonsBody {
public:
    u32 unk_00[0x164 / 4];
    BOOL stepPress();
    s32 getPressOffset();
    void disableObjWindow();
    void enableObjWindow();
    void setSelected(u8 v);
    s32 getTargetY(s32 i);
    s32 getTargetX(s32 i);
    BOOL isTouched(s32 i);
    void setLayoutYesNo08(s32 i);
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutNeverMindConfirm();
    void drawAt(s32 a);
    void freeTexts();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    BOOL isMoving();
    void moveToNear(s32 a, s32 b, s32 c, u8 d);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

// same cursor object as MenuCursorBase
class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 v);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
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
    void initSlideIn(s32 a, s32 b);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
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

// 0x370: ov095 list/text object, size 0x23bc
class Keyboard {
public:
    Keyboard() : unk_22f4(), unk_233c() {}
    u32 unk_00[0x22f4 / 4];
    BgVramTask unk_22f4[2];
    LabelString unk_233c[2];
};

typedef void (BbsWriteMenu::*Unk_ov112_02299b10_Fn)();

// Vtable 0x02299b10
class BbsWriteMenu : public MenuProc {
public:
    BbsWriteMenu()
        : unk_244(), unk_34c(), unk_370(), unk_3f2c(), unk_40ac(), unk_40f4(), unk_4258(),
          unk_42bc(), unk_4390() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    BOOL isPostSendConfirmed();
    void sendPostToPeers();
    void endDialogDim();
    void beginDialogDim();
    void placeLabel(s32 idx, u32 a, u32 b, s32 c);
    void clearPostNumberLabel();
    void showTodayDate();
    void censorText();
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void snapCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    void showCursor();
    void openDialog(u8 v, u8 x);
    void refreshKeys();
    BOOL navigateText(void *pad);
    s32 getLineOfIndex(s32 v);
    void updateCaretPos();
    u8 getCharBeforeCursor();
    void setCursorIndex(u8 v);
    void resetTextCursor();
    BOOL dragSelection();
    void endTouch();
    BOOL touchTextArea();

    void preInputUpdate();
    void releaseResources();
    void init();
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

    // state handlers (member-pointer table targets)
    void mainAct00();
    void mainAct01();
    void mainAct02();
    void mainAct03();
    void mainAct04();
    void mainAct05();
    void mainAct06();
    void mainAct07();
    void mainAct08();
    void mainAct09();
    void mainAct0A();
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
    void mainAct16();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s16 unk_b4;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3[0x244 - 0xc3];
    /* 0x244 */ MenuErrorMessage unk_244;
    /* 0x34c */ BgVramTask unk_34c[1];
    /* 0x370 */ Keyboard unk_370;
    /* 0x272c */ u32 unk_272c[(0x3f2c - 0x272c) / 4];
    /* 0x3f2c */ LabelString unk_3f2c[6];
    /* 0x40ac */ MenuScrollKnob unk_40ac;
    /* 0x40f4 */ MenuBottomButtons unk_40f4;
    /* 0x4258 */ MenuCursorBuf0 unk_4258;
    /* 0x42bc */ MsgString193 unk_42bc;
    /* 0x4380 */ u32 unk_4380[(0x4390 - 0x4380) / 4];
    /* 0x4390 */ EncodedString192 unk_4390;
    /* 0x4460 */ u8 unk_4460[0x800];
    /* 0x4c60 */ u8 unk_4c60[0x1e00];
    /* 0x6a60 */ s32 unk_6a60[7];
};

extern "C" {
extern u16 gPad[];
extern u32 gCurrentHeap;
extern u8 gU8None;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern CommManager *gCommManager;
extern void *gMenuHeap;
}

extern "C" u32 data_ov112_02299ac0[];
extern "C" u32 data_ov112_02299ad8[];

extern "C" {
void Keyboard_Draw(void *p, u32 a, void *b, u32 c);
void Keyboard_DrawCopyPasteKeys(void *p, u32 a, void *b);
void Keyboard_DrawLengthGaugeAt(void *p, u32 a, void *b, u32 c);
void Keyboard_SetTextFieldPos(void *p, s32 a, s32 b);
void Keyboard_DrawCaret(void *p, s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
void func_020e76f8(void *p, u32 v, u32 n);
s32 Text_GetLength(void *p, s32 n);
void String_FromEncodedBytesEx(void *p, void *q, u32 n, u32 a, u32 b);
void Text_SplitLines(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
BOOL MenuCtrl_IsTouch();
void Bbs_AddPost(void *p);
PlayerData *PlayerData_GetCurrent();
s32 Arbeit_OnBbsPosted();
u32 Keyboard_HitTestText(void *a, void *b, u32 c, u32 d, u32 e, void *f);
u32 Keyboard_DeleteRange(void *a, void *b, u32 c, u32 d, u32 e);
u32 Keyboard_GetTypedRunLength(void *p);
void Menu_PlayScrollTickSe(void *p);
void Mem_Clear(void *p, s32 n);
s32 Mem_Copy(void *src, void *dst, s32 n);
void Keyboard_ResetTypedRun(void *p);
void Keyboard_BeginPaste(void *p);
void Keyboard_EndPaste(void *p);
void Keyboard_ShrinkTypedRun(void *p);
s32 Keyboard_HandleModeKey(void *p, s32 key, s32 n);
void Keyboard_PlayPasteSe(void *p);
void Keyboard_PlayCopySe(void *p);
s32 Keyboard_PressCursorKey(void *p);
s32 Keyboard_ModifyCharKey103(void *p, s32 a);
s32 Keyboard_ModifyCharKey104(void *p, s32 a);
s32 Keyboard_ModifyCharKey105(void *p, s32 a);
BOOL Keyboard_ReplaceCharBeforeCursor(void *p, void *q, s32 a, u32 b, s32 c, s32 d);
BOOL Keyboard_InsertCharMultiline(void *p, void *q, s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL Keyboard_IsControlCode(void *p, s32 key);
BOOL Keyboard_IsFull(void *p);
BOOL Keyboard_IsTooWide(void *p);
void Keyboard_ClearHighlight(void *p);
s32 Keyboard_TouchKey(void *p, u32 a, u32 b);
s32 Keyboard_GetKeyCode(void *p, s32 a, s32 b);
void Keyboard_HighlightKey(void *p, s32 a);
void Keyboard_StartKeyRepeat(void *p);
BOOL Keyboard_UpdatePressedKey(void *p);
BOOL Keyboard_IsSlotDisabled(void *p, s32 a);
BOOL Keyboard_IsOnButtonKey(void *p, s32 a);
BOOL MenuKeys_HasRight(s32 p);
BOOL MenuKeys_HasLeft(s32 p);
void Gfx2d_LoadPaletteFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void File_LoadToBuffer(const char *a, void *b, s32 c);
void BgScreen_SetRectPalette(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Menu_PlayScrollGrabSe(void *p);
BOOL Keyboard_TickKeyRepeat(void *p);
u32 Keyboard_GetPressedKey(void *p);
u32 Keyboard_MoveCursor(void *p, u32 a);
BOOL Keyboard_TouchPageTab(void *p);
void Keyboard_SetMode(void *p, u32 a, u32 b, u32 c);
void Keyboard_EndFrame(void *p, u32 a);
void Keyboard_LoadScreenFile(void *p, const char *q);
void Keyboard_LoadScreenNow(void *p, u32 a);
void Keyboard_LoadLetterChars(void *p, u32 a);
s32 Keyboard_LoadObjGfx(void *p);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsForceCloseDue();
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Keyboard_Shutdown(void *p);
void Keyboard_Init(void *p, s32 a);
void Keyboard_RestoreLastPage(void *p, s32 a);
s32 Text_MeasureWidth(void *p, s32 n);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f874(void *p);
void func_0206f85c(void *p);
void String_Load2dMenu(void *o, u32 x);
void func_02094030(void *p);
void func_02094018(void *p);
void String_SetSlot(s32 a, void *p);
void MI_CpuFill8(void *p, u32 v, u32 n);
void Gfx2d_SetLayerOffset(u32 a, u32 b, u32 c);
void Oam_DrawCell(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void Oam_DrawObj(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
BOOL MenuCtrl_IsButtons();
s32 Comm_IsSeqConfirmed(s32 a);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *Heap_AllocTail(void *heap, s32 n);
void Heap_Free(void *heap, void *p);
void Gfx2d_EndSubObjWinBrightness();
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_BeginSubObjWinBrightness();
void Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_SetSubWin1Planes(s32 a, s32 b);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetSubWin1Rect(s32 a, s32 b, s32 c, s32 d);
void Clock_GetDate(void *p);
void String_FromEncodedBytes(void *p, void *s, s32 n);
void EncodedString_SetRaw(void *dst, void *src, s32 n);
s32 String_CensorTaboo(void *p);
void StrBuf_GetBytes(void *p, void *buf, s32 n);
BOOL MenuKeys_HasDown(s32 p);
BOOL MenuKeys_HasUp(s32 p);
u32 Keyboard_GetCursorX(void *p);
u32 Keyboard_GetCursorY(void *p);
void Keyboard_ResetCursor(void *p);
void Keyboard_EnableKey(void *p, s32 a);
void Keyboard_DisableKey(void *p, s32 a);
void Keyboard_DisableModifierKeys(void *p);
void Keyboard_UpdateModifierKeys(void *p, u32 a);
void Keyboard_ResetKeyPalettes(void *p);
s32 func_02133150(s32 a, s32 b);
}

extern "C" void BbsWriteMenu_SetCaretFromPoint(S *s, s32 a, s32 b);
extern "C" u8 BbsWriteMenu_HitTestLine(S *s, s32 i, s32 *p);
extern "C" void BbsWriteMenu_DeleteSelection(S *s);
extern "C" void BbsWriteMenu_ClearSelection(S *s);
extern "C" BOOL BbsWriteMenu_HasSelection(S *s);
extern "C" void BbsWriteMenu_ScrollByPad(S *s);
extern "C" void BbsWriteMenu_ScrollToTouch(S *s);
extern "C" void BbsWriteMenu_DragScrollKnob(S *s);
extern "C" void BbsWriteMenu_SetScrollFromKnob(S *s, s32 v);
extern "C" BOOL BbsWriteMenu_IsTouchOnScrollBar(S *s);
extern "C" BOOL BbsWriteMenu_TouchScrollKnob(S *s);
extern "C" void BbsWriteMenu_ScrollToCaret(S *s);
extern "C" void BbsWriteMenu_UpdateScroll(S *s);
extern "C" BOOL BbsWriteMenu_IsScrolling(S *s);
extern "C" void BbsWriteMenu_SetScrollTarget(S *s, u32 v);
extern "C" void BbsWriteMenu_SetScroll(S *s, u32 v);
extern "C" void BbsWriteMenu_UploadTextChars(S *s);
extern "C" void BbsWriteMenu_Nop(S *s);
extern "C" void BbsWriteMenu_UpdateLineLabels(S *s);
extern "C" void BbsWriteMenu_DrawLineLabels(S *s);
extern "C" void BbsWriteMenu_HighlightRange(S *s, u8 a, u8 b, u32 c, u32 n);
extern "C" void BbsWriteMenu_HighlightSelection(S *s);
extern "C" void BbsWriteMenu_RedrawText(S *s);
extern "C" void BbsWriteMenu_ClearFlags(S *s, u32 m);
extern "C" void BbsWriteMenu_SetFlags(S *s, u32 m);
extern "C" BOOL BbsWriteMenu_HasFlags(S *s, u32 m);
extern "C" void BbsWriteMenu_EnterDialogButtons(S *s);
extern "C" void BbsWriteMenu_EnterDialogTouch(S *s);
extern "C" void BbsWriteMenu_ShowMessage(S *s, u32 a, u32 b);
extern "C" void BbsWriteMenu_ResumeInput(S *s);
extern "C" void BbsWriteMenu_StartButtonInput(S *s);
extern "C" void BbsWriteMenu_StartTouchInput(S *s);
extern "C" void BbsWriteMenu_PlayErrorSe(S *s);
extern "C" void BbsWriteMenu_ForceClose(S *s);
extern "C" void BbsWriteMenu_ConfirmNo(S *s);
extern "C" void BbsWriteMenu_ConfirmYes(S *s);
extern "C" void BbsWriteMenu_AskQuit(S *s);
extern "C" void BbsWriteMenu_AskPost(S *s);
extern "C" void BbsWriteMenu_Paste(S *s);
extern "C" void BbsWriteMenu_Copy(S *s);
extern "C" BOOL BbsWriteMenu_ApplyModifierKey(S *s, s32 key);
extern "C" BOOL BbsWriteMenu_InsertChar(S *s, u32 key);
extern "C" BOOL BbsWriteMenu_InsertCharRaw(S *s, u32 a, s32 b);
extern "C" BOOL BbsWriteMenu_Backspace(S *s, s32 flag);
extern "C" s32 BbsWriteMenu_PressKeyCode(S *s, s32 key);
extern "C" s32 BbsWriteMenu_TouchKey(S *s);
extern "C" BOOL BbsWriteMenu_TryStartPost(S *s);
extern "C" BOOL BbsWriteMenu_TryCopyButton(S *s);
extern "C" BOOL BbsWriteMenu_TryPasteButton(S *s);
extern "C" BOOL BbsWriteMenu_ToggleTextFocus(S *s);
extern "C" BOOL BbsWriteMenu_TryBackspaceButton(S *s);
extern "C" BOOL BbsWriteMenu_TryPressKey(S *s);
extern "C" void BbsWriteMenu_LoadBg(S *s);
extern "C" void BbsWriteMenu_SetupBgLayers(S *s);
extern "C" void BbsWriteMenu_PostInput(S *s);

struct Unk_ov112_SceneEntry {
    BbsWriteMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" BbsWriteMenu *BbsWriteMenu_Create();

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

struct Unk_ov112_022976a8_Pad {
    s32 v[8];
    Unk_ov112_022976a8_Pad() {}
    ~Unk_ov112_022976a8_Pad() {}
};

typedef void (*Unk_ov112_0229782c_Fn)(void *);

extern "C" BbsWriteMenu *BbsWriteMenu_Create() { return new BbsWriteMenu(); }

BOOL BbsWriteMenu::vfunc_00() {
    init();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL BbsWriteMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL BbsWriteMenu::onDraw() {
    if (BbsWriteMenu_IsScrolling((S *)this)) {
        BbsWriteMenu_UpdateScroll((S *)this);
        Gfx2d_SetLayerOffset(4, 0, unk_b6 + 8);
    }
    if (BbsWriteMenu_HasFlags((S *)this, 1)) {
        u8 *p = (u8 *)(unk_a0 + 0x60);
        Oam_DrawCell(1, data_ov112_02299ad8, 0x80, p - 8, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Keyboard_Draw(&unk_370, 0x80, p, 1);
        Keyboard_DrawCopyPasteKeys(&unk_370, 0x80, p);
        if (MenuCtrl_IsButtons()) {
            Oam_DrawObj(1, data_ov112_02299ac0, 0x80, p, -1, 1, 0);
        }
        Keyboard_DrawLengthGaugeAt(&unk_370, 0x80, p, unk_b0);
        ((ScrollKnob *)(&unk_40ac))->moveTo(0x5d, unk_b8 + (u32)(unk_a0 - 0x50));
        s32 t = unk_40ac.getGripX();
        Keyboard_SetTextFieldPos(&unk_370, t, unk_40ac.getGripY());
        unk_40ac.vfunc_08();
    }
    if (MenuCtrl_IsButtons()) {
        if (BbsWriteMenu_HasFlags((S *)this, 0x1000)) {
            s32 t = unk_40ac.getGripX();
            unk_4258.warpTo(t, unk_40ac.getGripY());
        }
        unk_4258.drawWrapped();
    }
    if (BbsWriteMenu_HasFlags((S *)this, 1)) {
        if (BbsWriteMenu_HasFlags((S *)this, 0x40)) {
            s32 a = unk_98;
            s32 b = unk_9c - (unk_b6 + 8);
            unk_bc = unk_bc + 1;
            if ((unk_bc & 0x10) != 0) {
                Keyboard_DrawCaret(&unk_370, a, b, 2);
            }
        }
    }
    unk_40f4.drawAt(unk_a8);
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov112_SceneEntry data_ov112_022999b8;
extern "C" u32 data_ov112_02299ad8[12];
extern "C" u32 data_ov112_02299ac0[2];

// Data definition order is chosen so mwcc emits the objects in the original order

extern "C" Unk_ov112_SceneEntry data_ov112_022999b8 = {BbsWriteMenu_Create, 0xa6, 0xaa};

extern "C" u32 data_ov112_02299ad8[12] = {
    0x006180b4, 0x0000a0c0, 0x206180e4, 0x0000a0c0, 0x006100c4, 0x0000a0e0,
    0x006100cc, 0x0000a0e0, 0x006100d4, 0x0000a0e0, 0x006100dc, 0xffffa0e0,
};

extern "C" u32 data_ov112_02299ac0[2] = {0x802a40e6, 0xffffc0c1};

BOOL BbsWriteMenu::execTransition() {
    static Unk_ov112_02299b10_Fn tbl[14] = {
        &BbsWriteMenu::transitionAct00, &BbsWriteMenu::transitionAct01,
        &BbsWriteMenu::transitionAct02, &BbsWriteMenu::transitionAct03,
        &BbsWriteMenu::transitionAct04, &BbsWriteMenu::transitionAct05,
        &BbsWriteMenu::transitionAct06, &BbsWriteMenu::transitionAct07,
        &BbsWriteMenu::transitionAct08, &BbsWriteMenu::transitionAct09,
        &BbsWriteMenu::transitionAct0A, &BbsWriteMenu::transitionAct0B,
        &BbsWriteMenu::transitionAct0C, &BbsWriteMenu::transitionAct0D};
    (this->*tbl[unk_8c])();
    return TRUE;
}

void BbsWriteMenu::runMainState() {
    static Unk_ov112_02299b10_Fn tbl[23] = {
        &BbsWriteMenu::mainAct00, &BbsWriteMenu::mainAct01,
        &BbsWriteMenu::mainAct02, &BbsWriteMenu::mainAct03,
        &BbsWriteMenu::mainAct04, &BbsWriteMenu::mainAct05,
        &BbsWriteMenu::mainAct06, &BbsWriteMenu::mainAct07,
        &BbsWriteMenu::mainAct08, &BbsWriteMenu::mainAct09,
        &BbsWriteMenu::mainAct0A, &BbsWriteMenu::mainAct0B,
        &BbsWriteMenu::mainAct0C, &BbsWriteMenu::mainAct0D,
        &BbsWriteMenu::mainAct0E, &BbsWriteMenu::mainAct0F,
        &BbsWriteMenu::mainAct10, &BbsWriteMenu::mainAct11,
        &BbsWriteMenu::mainAct12, &BbsWriteMenu::mainAct13,
        &BbsWriteMenu::mainAct14, &BbsWriteMenu::mainAct15,
        &BbsWriteMenu::mainAct16};
    (this->*tbl[unk_8d])();
}

BOOL BbsWriteMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 19:
            BbsWriteMenu_ForceClose((S *)this);
            return TRUE;
        }
    }
    preInputUpdate();
    runMainState();
    BbsWriteMenu_PostInput((S *)this);
    return TRUE;
}

BOOL BbsWriteMenu::execPhase3() { return TRUE; }

BOOL BbsWriteMenu::execPhase4() { return TRUE; }

BOOL BbsWriteMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void BbsWriteMenu::transitionAct00() {
    BbsWriteMenu_SetupBgLayers((S *)this);
    BbsWriteMenu_LoadBg((S *)this);
    BbsWriteMenu_UploadTextChars((S *)this);
    BbsWriteMenu_SetFlags((S *)this, 0x4000);
    Keyboard_RestoreLastPage(&unk_370, 6);
    Keyboard_EndFrame(&unk_370, 6);
    beginSubSlideIn(0xa, 7, 0, 0x30);
    Gfx2d_ShowLayer(4);
    Gfx2d_ShowLayer(6);
    applySlideOffset(4, 0, -8);
    applySlideOffset(6, 0, 0);
    setTransitionState(1);
    unk_a0 = getSlideOffsetY();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
    BbsWriteMenu_SetFlags((S *)this, 0x81);
    unk_40f4.setLayoutNeverMindConfirm();
    BbsWriteMenu_RedrawText((S *)this);
    BbsWriteMenu_PostInput((S *)this);
}

void BbsWriteMenu::transitionAct01() {
    if (BbsWriteMenu_HasFlags((S *)this, 0x4000)) {
        showTodayDate();
        clearPostNumberLabel();
        BbsWriteMenu_ClearFlags((S *)this, 0x4000);
    }
    if (stepSlideIn(0)) {
        resetTextCursor();
        setPhase(2);
        BbsWriteMenu_ResumeInput((S *)this);
        BbsWriteMenu_RedrawText((S *)this);
        BbsWriteMenu_PostInput((S *)this);
    }
    applySlideOffset(4, 0, -8);
    applySlideOffset(6, 0, 0);
    unk_a0 = getSlideOffsetY();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
}

void BbsWriteMenu::transitionAct02() {
    BbsWriteMenu_ClearFlags((S *)this, 0x40);
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    setTransitionState(3);
    unk_a0 = getSlideOffsetY();
    unk_a8 = unk_a0;
    BbsWriteMenu_SetScrollTarget((S *)this, 0);
    BbsWriteMenu_ClearFlags((S *)this, 0x80);
}

void BbsWriteMenu::transitionAct03() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        BbsWriteMenu_ClearFlags((S *)this, 1);
        setTransitionState(4);
    } else {
        applySlideOffset(6, 0, 0);
    }
    unk_a0 = getSlideOffsetY();
    unk_a8 = unk_a0;
}

void BbsWriteMenu::transitionAct04() {
    beginDialogDim();
    if (BbsWriteMenu_HasFlags((S *)this, 0x2000)) {
        unk_40f4.setLayoutYesNo08(0x87);
    } else {
        unk_40f4.setLayoutYesNo08(0x22);
    }
    initSlideIn(5, 0);
    unk_a8 = getSlideOffsetY();
    setTransitionState(5);
}

void BbsWriteMenu::transitionAct05() {
    if (stepSlideIn(-1)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            BbsWriteMenu_EnterDialogTouch((S *)this);
        } else {
            BbsWriteMenu_EnterDialogButtons((S *)this);
        }
    }
    unk_a8 = getSlideOffsetY();
}

void BbsWriteMenu::transitionAct06() {
    endDialogDim();
    beginSubSlideOut(0, 0, 0, 0x30);
    setTransitionState(7);
    unk_a8 = getSlideOffsetY();
}

void BbsWriteMenu::transitionAct07() {
    if (stepSlideOut(0)) {
        setTransitionState(8);
    }
    unk_a8 = getSlideOffsetY();
}

void BbsWriteMenu::transitionAct08() {
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(9);
    unk_a0 = getSlideOffsetY();
    unk_a8 = unk_a0;
    BbsWriteMenu_SetFlags((S *)this, 1);
    unk_40f4.setLayoutNeverMindConfirm();
}

void BbsWriteMenu::transitionAct09() {
    if (stepSlideIn(0)) {
        resetTextCursor();
        setPhase(2);
        BbsWriteMenu_ResumeInput((S *)this);
        BbsWriteMenu_RedrawText((S *)this);
        BbsWriteMenu_PostInput((S *)this);
        BbsWriteMenu_SetFlags((S *)this, 0x80);
    }
    applySlideOffset(6, 0, 0);
    unk_a0 = getSlideOffsetY();
    unk_a8 = unk_a0;
}

void BbsWriteMenu::transitionAct0A() {
    if (BbsWriteMenu_HasFlags((S *)this, 0x2000) || isPostSendConfirmed()) {
        BbsWriteMenu_ClearFlags((S *)this, 0x40);
        endDialogDim();
        ((MenuLauncher *)(ProcBase_GetParent(this)))->setNextRequest(0x44, 1);
        beginSubSlideOut(2, 0, 0, 0x30);
        applySlideOffset(4, 0, -8);
        setTransitionState(0xb);
        unk_a4 = getSlideOffsetY();
        unk_a8 = unk_a4;
    }
}

void BbsWriteMenu::transitionAct0B() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, -8);
    }
    unk_a4 = getSlideOffsetY();
    unk_a8 = unk_a4;
}

void BbsWriteMenu::transitionAct0C() {
    if (BbsWriteMenu_IsScrolling((S *)this) == 0) {
        BbsWriteMenu_ClearFlags((S *)this, 0x40);
        endDialogDim();
        ((MenuLauncher *)(ProcBase_GetParent(this)))->setNextRequest(0x44, 1);
        beginSubSlideOut(0xa, 0, 0, 0x30);
        applySlideOffset(4, 0, -8);
        applySlideOffset(6, 0, -8);
        setTransitionState(0xd);
        unk_a4 = getSlideOffsetY();
        unk_a8 = unk_a4;
    }
}

void BbsWriteMenu::transitionAct0D() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(6);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, -8);
        applySlideOffset(6, 0, -8);
    }
    unk_a4 = getSlideOffsetY();
    unk_a8 = unk_a4;
    unk_a0 = unk_a4;
}

void BbsWriteMenu::init() {
    unk_ac = 0;
    Keyboard_Init(&unk_370, 2);
    Mem_Clear(unk_c3, 0xc0);
    LabelString a;
    PlayerData *t = PlayerData_GetCurrent();
    MsgString9B b;
    t->getPlayerId()->getNameString(&b);
    String_SetSlot(0, &b);
    String_Load2dMenu(&a, 0x89);
    EncodedString41 c;
    ((EncodedString *)(&c))->fromMsgString(&a);
    s32 n = Text_GetLength(c.text, 0x28);
    Mem_Copy(c.text, unk_c3, n);
    unk_c3[n] = 0x86;
    n++;
    if (Text_MeasureWidth(unk_c3, n) > 0x96) {
        n--;
        unk_c3[n] = 0;
    }
    unk_c0 = n;
    unk_40ac.show();
    MI_CpuFill8(unk_4c60, 0xdd, 0x1e00);
    unk_b6 = 0;
    unk_b7 = 0;
    unk_b8 = 0;
}

void BbsWriteMenu::releaseResources() {
    BbsWriteMenu_UpdateLineLabels((S *)this);
    Keyboard_Shutdown(&unk_370);
    ((BgVramTask *)(unk_34c))->cancel();
    unk_40f4.freeTexts();
}

void BbsWriteMenu::preInputUpdate() {
    BbsWriteMenu_UpdateLineLabels((S *)this);
    unk_40ac.vfunc_0c();
    unk_4258.vfunc_0c();
    unk_40f4.freeTexts();
}

extern "C" void BbsWriteMenu_PostInput(S *s) {
    Keyboard_EndFrame(s->unk_370, 6);
    if (BbsWriteMenu_HasFlags(s, 4)) {
        BbsWriteMenu_DrawLineLabels(s);
        BbsWriteMenu_ClearFlags(s, 4);
        BbsWriteMenu_SetFlags(s, 2);
    }
    if (BbsWriteMenu_HasFlags(s, 8)) {
        BbsWriteMenu_ClearFlags(s, 8);
        BbsWriteMenu_SetFlags(s, 2);
    }
    if (BbsWriteMenu_HasFlags(s, 2)) {
        BbsWriteMenu_Nop(s);
        BbsWriteMenu_UploadTextChars(s);
        BbsWriteMenu_ClearFlags(s, 2);
    }
}

extern "C" void BbsWriteMenu_SetupBgLayers(S *s) {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(4, 3);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

extern "C" void BbsWriteMenu_LoadBg(S *s) {
    u32 g = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/chat2/b_bbs.bpl", g, 4, 8, 8, 0xe);
    File_LoadToBuffer("menu/chat2/b_bbs_us.bsc", s->unk_4460, 0x800);
    BgScreen_SetRectPalette(s->unk_4460, 6, 5, 0x19, 6, 0xa);
    Gfx2d_LoadScreen(s->unk_4460, 4, 0x800, 0);
    Gfx2d_LoadCharFile("menu/chat2/b_cht.bch", g, 4, 0x13d, 0x13d, 0x1e9);
    Gfx2d_LoadCharFile("menu/chat2/b_bbs.bch", g, 4, 0x10, 0x10, 0x13f);
    Gfx2d_LoadCharFile("menu/chat2/b_bbs2.bch", g, 4, 0x101, 0x101, 0x110);
    Keyboard_LoadScreenFile(s->unk_370, "menu/chat2/b_key0.bsc");
    ((BbsWriteMenu *)s)->refreshKeys();
    Keyboard_LoadScreenNow(s->unk_370, 6);
    Keyboard_LoadLetterChars(s->unk_370, 6);
    Keyboard_LoadObjGfx(s->unk_370);
}

void BbsWriteMenu::mainAct00() {
    S *s = (S *)this;
    if (((MenuProc *)s)->checkSwitchToButtons(1)) {
        BbsWriteMenu_StartButtonInput(s);
    } else {
        u32 f = 0;
        s32 v;
        if (Keyboard_UpdatePressedKey(s->unk_370)) f = 1;
        if (Both()) {
            v = gTouchCurY;
            if (((MenuBottomButtonsBody *)(s->unk_40f4))->isTouched(9)) {
                BbsWriteMenu_AskPost(s);
            } else if (((MenuBottomButtonsBody *)(s->unk_40f4))->isTouched(8)) {
                BbsWriteMenu_AskQuit(s);
            } else if (Keyboard_TouchPageTab(s->unk_370)) {
                Keyboard_SetMode(s->unk_370, 8, 6, 1);
                BbsWriteMenu_RedrawText(s);
            } else if (((BbsWriteMenu *)s)->touchTextArea()) {
                ((MenuProc *)s)->setMainState(3);
                Keyboard_ResetTypedRun(s->unk_370);
                BbsWriteMenu_RedrawText(s);
            } else if (BbsWriteMenu_TouchScrollKnob(s)) {
                ((MenuScrollKnob *)(s->unk_40ac))->grab();
                ((MenuProc *)s)->setMainState(1);
                BbsWriteMenu_ClearSelection(s);
                BbsWriteMenu_RedrawText(s);
            } else if (BbsWriteMenu_IsTouchOnScrollBar(s)) {
                ((MenuScrollKnob *)(s->unk_40ac))->grab();
                ((MenuProc *)s)->setMainState(2);
                BbsWriteMenu_ClearSelection(s);
                BbsWriteMenu_RedrawText(s);
            } else if (v >= 0x48 && f == 0) {
                BOOL r = BbsWriteMenu_TouchKey(s);
                if (r == 0) {
                } else if (r == 1) {
                    ((MenuProc *)s)->setMainState(4);
                }
            }
        }
    }
}

void BbsWriteMenu::mainAct01() {
    S *s = (S *)this;
    s->unk_0bc = 0;
    if (gTouchHeld == 0) {
        ((BbsWriteMenu *)s)->endTouch();
        ((MenuScrollKnob *)(s->unk_40ac))->release();
        BbsWriteMenu_StartTouchInput(s);
    } else {
        BbsWriteMenu_DragScrollKnob(s);
    }
}

void BbsWriteMenu::mainAct02() {
    S *s = (S *)this;
    s->unk_0bc = 0;
    if (gTouchHeld == 0) {
        ((BbsWriteMenu *)s)->endTouch();
        ((MenuScrollKnob *)(s->unk_40ac))->release();
        BbsWriteMenu_StartTouchInput(s);
    } else {
        BbsWriteMenu_ScrollToTouch(s);
    }
}

void BbsWriteMenu::mainAct03() {
    S *s = (S *)this;
    BOOL r;
    if (gTouchHeld == 0) {
        ((MenuProc *)s)->setMainState(0);
        if (s->unk_0be == s->unk_0bf) {
            BbsWriteMenu_ClearFlags(s, 0x100);
        }
        r = TRUE;
    } else {
        r = ((BbsWriteMenu *)s)->dragSelection();
        if (r) {
            Snd_PlaySe(0x15);
        }
    }
    if (r) {
        BbsWriteMenu_ScrollToCaret(s);
        BbsWriteMenu_RedrawText(s);
    }
}

void BbsWriteMenu::mainAct04() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        ((MenuProc *)s)->setMainState(0);
    } else if (Keyboard_TickKeyRepeat(s->unk_370)) {
        u32 r = Keyboard_GetPressedKey(s->unk_370);
        BbsWriteMenu_PressKeyCode(s, Keyboard_GetKeyCode(s->unk_370, r, 8));
        Keyboard_HighlightKey(s->unk_370, r);
    }
}

void BbsWriteMenu::mainAct05() {
    S *s = (S *)this;
    if (((MenuProc *)s)->checkSwitchToButtons(1)) {
        BbsWriteMenu_EnterDialogButtons(s);
    } else if (Both()) {
        if (((MenuBottomButtonsBody *)(s->unk_40f4))->isTouched(3)) {
            BbsWriteMenu_ConfirmYes(s);
        } else if (((MenuBottomButtonsBody *)(s->unk_40f4))->isTouched(4)) {
            BbsWriteMenu_ConfirmNo(s);
        }
    }
}

void BbsWriteMenu::mainAct06() {
    S *s = (S *)this;
    if (((MenuProc *)s)->checkSwitchToTouch()) {
        BbsWriteMenu_StartTouchInput(s);
    } else {
        switch (Keyboard_MoveCursor(s->unk_370, ((MenuProc *)s)->takeRepeatedKeys())) {
        case 1:
            ((MenuCursor *)(s->unk_4258))->switchToAnim01();
            ((BbsWriteMenu *)s)->moveCursorToTarget();
            break;
        case 2:
            ((MenuCursor *)(s->unk_4258))->switchToAnim0D();
            ((BbsWriteMenu *)s)->moveCursorToTarget();
            break;
        case 3:
            ((MenuCursor *)(s->unk_4258))->switchToAnim07();
            ((BbsWriteMenu *)s)->moveCursorToTarget();
            break;
        case 0:
        default:
            if (BbsWriteMenu_TryPressKey(s)) return;
            if (BbsWriteMenu_TryBackspaceButton(s)) return;
            if (BbsWriteMenu_ToggleTextFocus(s)) return;
            if (BbsWriteMenu_TryCopyButton(s)) return;
            if (BbsWriteMenu_TryPasteButton(s)) return;
            if (BbsWriteMenu_TryStartPost(s) != 0) return;
            break;
        }
    }
}

void BbsWriteMenu::mainAct07() {
    S *s = (S *)this;
    if (!((MenuCursorBase *)(s->unk_4258))->isMoving()) {
        ((MenuProc *)s)->setMainState(s->unk_0c1);
        ((BbsWriteMenu *)s)->runMainState();
    }
}

void BbsWriteMenu::mainAct08() {
    S *s = (S *)this;
    if (((HandCursor *)(s->unk_4258))->isAnimDone()) {
        u32 r = Keyboard_PressCursorKey(s->unk_370);
        u32 v = Keyboard_GetKeyCode(s->unk_370, r, 8);
        if (v == 0x112) {
            ((MenuProc *)s)->setMainState(0x10);
            ((MenuScrollKnob *)(s->unk_40ac))->grab();
            Menu_PlayScrollGrabSe(s->unk_40ac);
            if (BbsWriteMenu_HasSelection(s)) {
                BbsWriteMenu_RedrawText(s);
            }
            BbsWriteMenu_ClearSelection(s);
            BbsWriteMenu_SetFlags(s, 0x1000);
        } else {
            u32 t = BbsWriteMenu_PressKeyCode(s, v);
            if (t == 1 && (gPad[0] & 1) != 0) {
                Keyboard_StartKeyRepeat(s->unk_370);
                ((MenuProc *)s)->setMainState(9);
                Keyboard_HighlightKey(s->unk_370, r);
            } else if (t == 3) {
            } else if (t == 4) {
                Keyboard_ClearHighlight(s->unk_370);
            } else {
                ((BbsWriteMenu *)s)->releaseCursor();
            }
        }
    }
}

void BbsWriteMenu::mainAct09() {
    S *s = (S *)this;
    if ((gPad[0] & 1) == 0) {
        ((BbsWriteMenu *)s)->releaseCursor();
    } else if (Keyboard_TickKeyRepeat(s->unk_370)) {
        u32 r = Keyboard_GetPressedKey(s->unk_370);
        BbsWriteMenu_PressKeyCode(s, Keyboard_GetKeyCode(s->unk_370, r, 8));
        Keyboard_HighlightKey(s->unk_370, r);
    }
}

void BbsWriteMenu::mainAct0A() {
    S *s = (S *)this;
    if (((HandCursor *)(s->unk_4258))->isAnimDone()) {
        ((BbsWriteMenu *)s)->refreshCursor();
        ((MenuProc *)s)->setMainState(6);
    }
}

void BbsWriteMenu::mainAct0B() {
    S *s = (S *)this;
    if ((gPad[0] & 2) == 0) {
        ((MenuProc *)s)->setMainState(s->unk_0c1);
    } else if (Keyboard_TickKeyRepeat(s->unk_370)) {
        Keyboard_ShrinkTypedRun(s->unk_370);
        if (BbsWriteMenu_Backspace(s, 0)) {
            if (BbsWriteMenu_HasFlags(s, 0x800)) {
                ((BbsWriteMenu *)s)->snapCursor();
            }
        } else {
            ((BbsWriteMenu *)s)->hideCursor();
            BbsWriteMenu_AskQuit(s);
        }
    }
}

void BbsWriteMenu::mainAct0C() {
    S *s = (S *)this;
    if (((MenuProc *)s)->checkSwitchToTouch()) {
        BbsWriteMenu_StartTouchInput(s);
    } else if (((BbsWriteMenu *)s)->navigateText((void *)((MenuProc *)s)->takeRepeatedKeys())) {
        if (Keyboard_GetTypedRunLength(s->unk_370) || BbsWriteMenu_HasSelection(s)) {
            Keyboard_ResetTypedRun(s->unk_370);
            BbsWriteMenu_ClearSelection(s);
            BbsWriteMenu_RedrawText(s);
        } else {
            BbsWriteMenu_ClearSelection(s);
        }
        ((BbsWriteMenu *)s)->updateCaretPos();
        ((BbsWriteMenu *)s)->snapCursor();
        ((BbsWriteMenu *)s)->refreshKeys();
        Snd_PlaySe(0xb);
    } else if (!BbsWriteMenu_ToggleTextFocus(s)) {
        u32 old = s->unk_0bd;
        if (BbsWriteMenu_TryBackspaceButton(s)) {
            if (old != s->unk_0bd) {
                ((BbsWriteMenu *)s)->snapCursor();
            }
        } else {
            if ((gPad[1] & 1) != 0) {
                ((MenuProc *)s)->setMainState(0xd);
                BbsWriteMenu_SetFlags(s, 0x100);
                s->unk_0be = s->unk_0bd;
                s->unk_0bf = s->unk_0bd;
            }
            if (!BbsWriteMenu_TryCopyButton(s)) {
                if (!BbsWriteMenu_TryPasteButton(s)) {
                    if (BbsWriteMenu_TryStartPost(s) != 0) return;
                }
            }
        }
    }
}

void BbsWriteMenu::mainAct0D() {
    S *s = (S *)this;
    if ((gPad[0] & 1) == 0) {
        ((MenuProc *)s)->setMainState(0xc);
        if (s->unk_0be == s->unk_0bf) {
            BbsWriteMenu_ClearFlags(s, 0x100);
        }
    } else {
        if (((BbsWriteMenu *)s)->navigateText((void *)((MenuProc *)s)->takeRepeatedKeys())) {
            s->unk_0bf = s->unk_0bd;
            BbsWriteMenu_RedrawText(s);
            ((BbsWriteMenu *)s)->updateCaretPos();
            ((BbsWriteMenu *)s)->snapCursor();
            Snd_PlaySe(0x15);
        }
    }
}

void BbsWriteMenu::mainAct0E() {
    S *s = (S *)this;
    if ((gPad[0] & 0x200) == 0) {
        ((MenuProc *)s)->setMainState(s->unk_0c1);
        ((BbsWriteMenu *)s)->refreshKeys();
    }
}

void BbsWriteMenu::mainAct0F() {
    S *s = (S *)this;
    if ((gPad[0] & 0x100) == 0) {
        ((MenuProc *)s)->setMainState(s->unk_0c1);
        ((BbsWriteMenu *)s)->refreshKeys();
    }
}

void BbsWriteMenu::mainAct10() {
    S *s = (S *)this;
    if (((ScrollKnob *)(s->unk_40ac))->areAnimsDone()) {
        ((MenuProc *)s)->setMainState(0x11);
    }
}

void BbsWriteMenu::mainAct11() {
    S *s = (S *)this;
    if ((gPad[0] & 1) == 0) {
        ((MenuScrollKnob *)(s->unk_40ac))->release();
        ((MenuProc *)s)->setMainState(0x12);
        ((BbsWriteMenu *)s)->endTouch();
    } else {
        BbsWriteMenu_ScrollByPad(s);
    }
}

void BbsWriteMenu::mainAct12() {
    S *s = (S *)this;
    if (((ScrollKnob *)(s->unk_40ac))->areAnimsDone()) {
        ((BbsWriteMenu *)s)->releaseCursor();
        BbsWriteMenu_ClearFlags(s, 0x1000);
    }
}

void BbsWriteMenu::mainAct13() {
    S *s = (S *)this;
    u32 old;
    s32 r;
    s32 a;
    s32 b;
    u32 t;

    if (((MenuProc *)s)->checkSwitchToTouch()) {
        BbsWriteMenu_EnterDialogTouch(s);
        return;
    }
    if (gPad[1] & 1) {
        ((MenuCursor *)(s->unk_4258))->setPosePress();
        ((MenuProc *)s)->setMainState(0x14);
        return;
    }
    old = s->unk_0c2;
    r = ((MenuProc *)s)->takeRepeatedKeys();
    if (MenuKeys_HasLeft(r)) {
        if (s->unk_0c2 != 0) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 - 1;
        }
    } else if (MenuKeys_HasRight(r)) {
        if (s->unk_0c2 < 1) {
            s->unk_0c2 = *(volatile u8 *)&s->unk_0c2 + 1;
        }
    }
    if (old != s->unk_0c2) {
        if (s->unk_0c2 != 0) {
            a = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetX(4);
            b = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetY(4);
            ((BbsWriteMenu *)s)->moveCursorTo(a, b);
        } else {
            a = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetX(3);
            b = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetY(3);
            ((BbsWriteMenu *)s)->moveCursorTo(a, b);
        }
    }
    t = gPad[1];
    if (t & 2) {
        ((BbsWriteMenu *)s)->hideCursor();
        BbsWriteMenu_ConfirmNo(s);
    } else if (t & 8) {
        ((BbsWriteMenu *)s)->hideCursor();
        BbsWriteMenu_ConfirmYes(s);
    }
}

void BbsWriteMenu::mainAct14() {
    S *s = (S *)this;
    if (((HandCursor *)(s->unk_4258))->isAnimDone()) {
        if (s->unk_0c2 != 0) {
            BbsWriteMenu_ConfirmNo(s);
        } else {
            BbsWriteMenu_ConfirmYes(s);
        }
    }
}

void BbsWriteMenu::mainAct15() {
    S *s = (S *)this;
    s32 a;
    s32 b;
    s32 c;

    if (((MenuBottomButtonsBody *)(s->unk_40f4))->stepPress()) {
        if (((HandCursor *)(s->unk_4258))->getAnim()) {
            a = ((MenuBottomButtonsBody *)(s->unk_40f4))->getPressOffset();
            b = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetX(-1);
            c = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetY(-1);
            ((MenuCursorBase *)(s->unk_4258))->warpTo(a + b, a + c);
        }
    } else {
        ((BbsWriteMenu *)s)->hideCursor();
        ((MenuProc *)s)->setPhase(1);
    }
}

void BbsWriteMenu::mainAct16() {
    S *s = (S *)this;
    Keyboard_UpdatePressedKey(s->unk_370);
    if (((MenuErrorMessage *)(s->unk_244))->update(1)) {
        BbsWriteMenu_ResumeInput(s);
    }
}

extern "C" BOOL BbsWriteMenu_TryPressKey(S *s) {
    s32 a;

    if ((gPad[1] & 1) == 0) {
        return FALSE;
    }
    a = Keyboard_PressCursorKey(s->unk_370);
    if (a != -1) {
        Keyboard_GetKeyCode(s->unk_370, a, 8);
        Keyboard_HighlightKey(s->unk_370, a);
        ((BbsWriteMenu *)s)->pressCursor();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL BbsWriteMenu_TryBackspaceButton(S *s) {
    if ((gPad[0] & 2) == 0) {
        return FALSE;
    }
    Keyboard_ShrinkTypedRun(s->unk_370);
    if (BbsWriteMenu_Backspace(s, 0)) {
        Keyboard_StartKeyRepeat(s->unk_370);
        s->unk_0c1 = s->unk_08d;
        ((MenuProc *)s)->setMainState(0xb);
    } else {
        ((BbsWriteMenu *)s)->hideCursor();
        BbsWriteMenu_AskQuit(s);
    }
    return TRUE;
}

extern "C" BOOL BbsWriteMenu_ToggleTextFocus(S *s) {
    if ((gPad[1] & 0x800) == 0) {
        return FALSE;
    }
    if (BbsWriteMenu_HasFlags(s, 0x800)) {
        BbsWriteMenu_ClearFlags(s, 0x800);
    } else {
        BbsWriteMenu_SetFlags(s, 0x800);
        BbsWriteMenu_ScrollToCaret(s);
    }
    if (Keyboard_IsOnButtonKey(s->unk_370, -1)) {
        if (BbsWriteMenu_HasFlags(s, 0x800)) {
            ((MenuCursor *)(s->unk_4258))->switchToAnim01();
            ((MenuProc *)s)->setMainState(0xc);
        } else {
            ((MenuCursor *)(s->unk_4258))->switchToAnim07();
            ((MenuProc *)s)->setMainState(6);
        }
        ((BbsWriteMenu *)s)->moveCursorToTarget();
    } else {
        ((BbsWriteMenu *)s)->moveCursorToTarget();
    }
    return TRUE;
}

extern "C" BOOL BbsWriteMenu_TryPasteButton(S *s) {
    if ((gPad[1] & 0x100) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(s->unk_370, 0xc)) {
        return FALSE;
    }
    BbsWriteMenu_PressKeyCode(s, 0x119);
    Keyboard_HighlightKey(s->unk_370, 0xdc);
    ((BbsWriteMenu *)s)->snapCursor();
    s->unk_0c1 = s->unk_08d;
    ((MenuProc *)s)->setMainState(0xf);
    return TRUE;
}

extern "C" BOOL BbsWriteMenu_TryCopyButton(S *s) {
    if ((gPad[1] & 0x200) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(s->unk_370, 0xb)) {
        return FALSE;
    }
    BbsWriteMenu_PressKeyCode(s, 0x118);
    Keyboard_HighlightKey(s->unk_370, 0xdb);
    s->unk_0c1 = s->unk_08d;
    ((MenuProc *)s)->setMainState(0xe);
    return TRUE;
}

extern "C" BOOL BbsWriteMenu_TryStartPost(S *s) {
    if ((gPad[1] & 8) == 0) {
        return FALSE;
    }
    ((BbsWriteMenu *)s)->hideCursor();
    BbsWriteMenu_AskPost(s);
    return TRUE;
}

extern "C" s32 BbsWriteMenu_TouchKey(S *s) {
    s32 a;
    s32 b;
    s32 r;

    Keyboard_ClearHighlight(s->unk_370);
    a = Keyboard_TouchKey(s->unk_370, gTouchCurX, gTouchCurY);
    if (a != -1) {
        b = Keyboard_GetKeyCode(s->unk_370, a, 8);
        r = BbsWriteMenu_PressKeyCode(s, b);
        Keyboard_HighlightKey(s->unk_370, a);
        Keyboard_StartKeyRepeat(s->unk_370);
        return r;
    }
    return 0;
}

extern "C" s32 BbsWriteMenu_PressKeyCode(S *s, s32 key) {
    s32 r = 1;
    s32 t = Keyboard_HandleModeKey(s->unk_370, key, 6);

    if (t != 0) {
        BbsWriteMenu_RedrawText(s);
        return t;
    }
    if (Keyboard_IsControlCode(s->unk_370, key)) {
        switch (key) {
        case 0x100:
            BbsWriteMenu_Backspace(s, r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!BbsWriteMenu_ApplyModifierKey(s, key)) {
                BbsWriteMenu_PlayErrorSe(s);
            }
            r = 2;
            break;
        case 0x118:
            BbsWriteMenu_Copy(s);
            r = 2;
            break;
        case 0x119:
            BbsWriteMenu_Paste(s);
            r = 2;
            break;
        case 0x113:
            BbsWriteMenu_AskPost(s);
            r = 3;
            break;
        case 0x115:
            BbsWriteMenu_AskQuit(s);
            r = 3;
            break;
        case 0x101:
        case 0x102:
        default:
            r = 2;
            break;
        }
    } else {
        t = BbsWriteMenu_InsertChar(s, (u8)key);
        if (Keyboard_IsFull(s->unk_370)) {
            BbsWriteMenu_ShowMessage(s, 0x1c, r);
            return 4;
        }
        if (Keyboard_IsTooWide(s->unk_370)) {
            BbsWriteMenu_ShowMessage(s, 0x1c, r);
            return 4;
        }
        if (t == 0) {
            BbsWriteMenu_PlayErrorSe(s);
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

extern "C" BOOL BbsWriteMenu_Backspace(S *s, s32 flag) {
    if (BbsWriteMenu_HasSelection(s)) {
        Keyboard_ResetTypedRun(s->unk_370);
        Snd_PlaySe(0x35);
    } else {
        u32 c0 = s->unk_0c0;
        u32 bd = s->unk_0bd;

        if (bd > c0) {
            s->unk_0be = bd;
            s->unk_0bf = s->unk_0bd - 1;
            Snd_PlaySe(0x35);
        } else if (s->unk_0c3[c0] != 0) {
            s->unk_0be = c0;
            s->unk_0bf = s->unk_0c0 + 1;
            Snd_PlaySe(0x35);
        } else {
            if (flag != 0) {
                BbsWriteMenu_PlayErrorSe(s);
            }
            return FALSE;
        }
    }
    BbsWriteMenu_DeleteSelection(s);
    BbsWriteMenu_RedrawText(s);
    ((BbsWriteMenu *)s)->updateCaretPos();
    return TRUE;
}

extern "C" BOOL BbsWriteMenu_InsertCharRaw(S *s, u32 a, s32 b) {
    u8 x = s->unk_0bd;

    if (Keyboard_InsertCharMultiline(s->unk_370, s->unk_0c3, a, &x, 0xc0, 0x28, 6, 0x96, 0, b)) {
        ((BbsWriteMenu *)s)->setCursorIndex(x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL BbsWriteMenu_InsertChar(S *s, u32 key) {
    BOOL r;

    if (BbsWriteMenu_HasSelection(s)) {
        BbsWriteMenu_DeleteSelection(s);
        Keyboard_ResetTypedRun(s->unk_370);
    }
    r = BbsWriteMenu_InsertCharRaw(s, key, 1);
    BbsWriteMenu_RedrawText(s);
    ((BbsWriteMenu *)s)->updateCaretPos();
    return r;
}

extern "C" BOOL BbsWriteMenu_ApplyModifierKey(S *s, s32 key) {
    s32 r = ((BbsWriteMenu *)s)->getCharBeforeCursor();

    if (r == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        r = Keyboard_ModifyCharKey103(s->unk_370, r);
        break;
    case 0x104:
        r = Keyboard_ModifyCharKey104(s->unk_370, r);
        break;
    case 0x105:
        r = Keyboard_ModifyCharKey105(s->unk_370, r);
        break;
    }
    if (r == 0) {
        return FALSE;
    }
    if (!Keyboard_ReplaceCharBeforeCursor(s->unk_370, s->unk_0c3, r, s->unk_0bd, 0xc0, 0x2710)) {
        return FALSE;
    }
    BbsWriteMenu_RedrawText(s);
    ((BbsWriteMenu *)s)->updateCaretPos();
    return TRUE;
}

extern "C" void BbsWriteMenu_Copy(S *s) {
    u32 a;
    u32 b;
    u32 x;
    u32 y;

    if (BbsWriteMenu_HasSelection(s)) {
        b = s->unk_0bf;
        a = s->unk_0be;
        if (a > b) {
            x = b;
            y = a - b;
        } else {
            x = a;
            y = b - a;
        }
        Mem_Clear(s->unk_183, 0xc0);
        Mem_Copy(s->unk_0c3 + x, s->unk_183, y);
        BbsWriteMenu_SetFlags(s, 0x200);
        Keyboard_PlayCopySe(s->unk_370);
        ((BbsWriteMenu *)s)->refreshKeys();
    }
}

extern "C" void BbsWriteMenu_Paste(S *s) {
    s32 n;
    s32 i;

    if (BbsWriteMenu_HasFlags(s, 0x200)) {
        if (BbsWriteMenu_HasSelection(s)) {
            BbsWriteMenu_DeleteSelection(s);
        }
        Keyboard_ResetTypedRun(s->unk_370);
        Keyboard_BeginPaste(s->unk_370);
        n = Text_GetLength(s->unk_183, 0xc0);
        for (i = 0; i < n; i++) {
            if (!BbsWriteMenu_InsertCharRaw(s, s->unk_183[i], 0)) {
                if (i == 0) {
                    BbsWriteMenu_PlayErrorSe(s);
                }
                i = n;
            }
        }
        Keyboard_PlayPasteSe(s->unk_370);
        BbsWriteMenu_RedrawText(s);
        ((BbsWriteMenu *)s)->updateCaretPos();
        Keyboard_EndPaste(s->unk_370);
    }
}

extern "C" void BbsWriteMenu_AskPost(S *s) {
    Snd_PlaySe(0x29);
    BbsWriteMenu_ClearFlags(s, 0x2000);
    ((BbsWriteMenu *)s)->openDialog(2, 9);
    BbsWriteMenu_SetFlags(s, 0x400);
    ((BbsWriteMenu *)s)->censorText();
    BbsWriteMenu_ClearSelection(s);
    BbsWriteMenu_RedrawText(s);
}

extern "C" void BbsWriteMenu_AskQuit(S *s) {
    Snd_PlaySe(0x2a);
    BbsWriteMenu_SetFlags(s, 0x2000);
    ((BbsWriteMenu *)s)->openDialog(2, 8);
    BbsWriteMenu_SetFlags(s, 0x400);
    BbsWriteMenu_ClearSelection(s);
    BbsWriteMenu_RedrawText(s);
}

extern "C" void BbsWriteMenu_ConfirmYes(S *s) {
    ((BbsWriteMenu *)s)->openDialog(0xa, 3);
    if (BbsWriteMenu_HasFlags(s, 0x2000)) {
        Snd_PlaySe(0x28);
    } else {
        Bbs_AddPost(s->unk_0c3);
        Snd_PlaySe(0x27);
        ((BbsWriteMenu *)s)->sendPostToPeers();
        PlayerData_GetCurrent()->getErrands();
        Arbeit_OnBbsPosted();
    }
}

extern "C" void BbsWriteMenu_ConfirmNo(S *s) {
    if (BbsWriteMenu_HasFlags(s, 0x2000)) {
        Snd_PlaySe(0x29);
    } else {
        Snd_PlaySe(0x2a);
    }
    ((BbsWriteMenu *)s)->openDialog(6, 4);
    BbsWriteMenu_ClearFlags(s, 0x400);
}

extern "C" void BbsWriteMenu_ForceClose(S *s) {
    Snd_PlaySe(0x28);
    BbsWriteMenu_ClearFlags(s, 0x40);
    ((BbsWriteMenu *)s)->hideCursor();
    BbsWriteMenu_SetScrollTarget(s, 0);
    ((MenuProc *)s)->setTransitionState(0xc);
    ((MenuProc *)s)->setPhase(1);
    BbsWriteMenu_SetFlags(s, 0x2000);
}

extern "C" void BbsWriteMenu_PlayErrorSe(S *s) {
    Snd_PlaySe(0x34);
}

extern "C" void BbsWriteMenu_StartTouchInput(S *s) {
    ((BbsWriteMenu *)s)->hideCursor();
    ((MenuProc *)s)->setMainState(0);
}

extern "C" void BbsWriteMenu_StartButtonInput(S *s) {
    ((MenuProc *)s)->restartKeyRepeat();
    ((BbsWriteMenu *)s)->showCursor();
    ((MenuProc *)s)->setMainState(6);
}

extern "C" void BbsWriteMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch()) {
        BbsWriteMenu_StartTouchInput(s);
    } else {
        BbsWriteMenu_StartButtonInput(s);
    }
}

extern "C" void BbsWriteMenu_ShowMessage(S *s, u32 a, u32 b) {
    volatile u8 v;
    v = gU8None;
    v = a;
    ((MenuErrorMessage *)(s->unk_244))->open((u8 *)&v, b, 0);
    ((MenuProc *)s)->setMainState(0x16);
    ((BbsWriteMenu *)s)->hideCursor();
}

extern "C" void BbsWriteMenu_EnterDialogTouch(S *s) {
    ((BbsWriteMenu *)s)->hideCursor();
    ((MenuProc *)s)->setMainState(5);
}

extern "C" void BbsWriteMenu_EnterDialogButtons(S *s) {
    u32 r4;
    ((MenuProc *)s)->restartKeyRepeat();
    s->unk_0c2 = 1;
    ((MenuCursor *)(s->unk_4258))->setAnimIfChanged(1);
    (*(Unk_ov112_0229782c_Fn **)s->unk_4258)[3](s->unk_4258);
    r4 = ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetX(4);
    ((MenuCursorBase *)(s->unk_4258))->warpTo(r4, ((MenuBottomButtonsBody *)(s->unk_40f4))->getTargetY(4));
    ((MenuProc *)s)->setMainState(0x13);
}

extern "C" BOOL BbsWriteMenu_HasFlags(S *s, u32 m) {
    if (s->unk_0ac & m) return TRUE;
    return FALSE;
}

extern "C" void BbsWriteMenu_SetFlags(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac | m;
}

extern "C" void BbsWriteMenu_ClearFlags(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac & ~m;
}

extern "C" void BbsWriteMenu_RedrawText(S *s) {
    Unk_ov112_022976a8_Pad pad;
    s32 i;
    u32 r6;
    u8 zb;
    u32 z14, z18;
    Text_SplitLines(s->unk_0c3, s->unk_6a60, &s->unk_094, 0xc0, 0x28, 0x96, 6);
    if (BbsWriteMenu_HasFlags(s, 0x10)) {
        r6 = 0;
    } else if (BbsWriteMenu_HasFlags(s, 0x400)) {
        r6 = 0;
    } else {
        r6 = 1;
    }
    i = 0;
    zb = 0;
    z14 = 0;
    z18 = 0;
    for (; i < 6; i++) {
        u8 *b = (u8 *)s + i * 4;
        u32 *pp = (u32 *)(b + 0x6a60);
        u32 d = *(u32 *)((u8 *)s + (i + 1) * 4 + 0x6a60) - *pp;
        u8 *obj = s->unk_3f2c + i * 0x40;
        ((MsgString *)(obj))->clear();
        if (d != 0) {
            u32 a3 = (i == 0) ? z14 : r6;
            u32 st = (i == s->unk_094) ? 1 : z18;
            String_FromEncodedBytesEx(obj, s->unk_0c3 + *pp, d, a3, st);
        } else if (r6 != 0) {
            if (i == s->unk_094) {
                String_FromEncodedBytesEx(obj, &zb, 1, r6, 1);
            }
        }
    }
    for (i = 0; i < 6; i++) {
        ((LabelString *)(s->unk_3f2c + i * 0x40))->createBufferLabel((u32)(s->unk_4c60 + i * 0x500), 0x14, 0xe, 0xd);
    }
    BbsWriteMenu_HighlightSelection(s);
    BbsWriteMenu_SetFlags(s, 4);
    ((BbsWriteMenu *)s)->refreshKeys();
    s->unk_0b0 = (Text_GetLength(s->unk_0c3, 0xc0) * 0x1f) / 0xc0;
    if (s->unk_0b0 > 0x1f) s->unk_0b0 = 0x1f;
}

extern "C" void BbsWriteMenu_HighlightSelection(S *s) {
    u32 r4;
    u32 r0;
    u8 r1, r2;
    if (BbsWriteMenu_HasSelection(s)) {
        u32 a = s->unk_0bf;
        u32 b = s->unk_0be;
        if (b > a) {
            r4 = a;
            r0 = b - a;
        } else {
            r4 = b;
            r0 = a - b;
        }
        r1 = 0xd;
        r2 = 0xe;
    } else {
        r0 = Keyboard_GetTypedRunLength(s->unk_370);
        if (r0 != 0) r4 = s->unk_0bd - r0;
        r1 = 0xb;
        r2 = 0xd;
    }
    if (r0 != 0) BbsWriteMenu_HighlightRange(s, r1, r2, r4, r0);
}

extern "C" void BbsWriteMenu_HighlightRange(S *s, u8 a, u8 b, u32 c, u32 n) {
    s32 i;
    u32 off = 0;
    i = off;
    for (; i < 6; i++) {
        u32 d = s->unk_6a60[i + 1] - s->unk_6a60[i];
        if (d == 0) return;
        if (c >= off) {
            u32 cnt, e;
            e = off + d;
            if (c < e) {
                if (e > c + n) cnt = n;
                else cnt = d - (c - off);
                ((LabelString *)(s->unk_3f2c + i * 0x40))->setHighlight(a, b, c - off, cnt);
                c = (u8)e;
                n -= cnt;
                if (n == 0) return;
            }
        }
        off += d;
    }
}

extern "C" void BbsWriteMenu_DrawLineLabels(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    s32 z = 0;
    for (; i < 6; i++) {
        ((LabelString *)(p + i * 0x40))->redrawAligned(z, z);
    }
}

extern "C" void BbsWriteMenu_UpdateLineLabels(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    for (; i < 6; i++) {
        ((LabelString *)(p + i * 0x40))->destroyLabel();
    }
}

extern "C" void BbsWriteMenu_Nop(S *s) {
}

extern "C" void BbsWriteMenu_UploadTextChars(S *s) {
    ((BgVramTask *)(s->unk_34c))->requestChars((u32)s->unk_4c60, 4, 0x11, 0x11, 0x100);
}

extern "C" void BbsWriteMenu_SetScroll(S *s, u32 v) {
    s->unk_0b6 = v;
    s->unk_0b7 = s->unk_0b6;
    BbsWriteMenu_SetFlags(s, 0x20);
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

extern "C" void BbsWriteMenu_SetScrollTarget(S *s, u32 v) {
    s->unk_0b7 = v;
    BbsWriteMenu_SetFlags(s, 0x20);
}

extern "C" BOOL BbsWriteMenu_IsScrolling(S *s) {
    return BbsWriteMenu_HasFlags(s, 0x20);
}

extern "C" void BbsWriteMenu_UpdateScroll(S *s) {
    u32 b7 = *(volatile u8 *)&s->unk_0b7;
    u32 b6 = *(volatile u8 *)&s->unk_0b6;
    if (b6 == b7) {
        BbsWriteMenu_ClearFlags(s, 0x20);
    } else if (b6 < b7) {
        s->unk_0b6 = s->unk_0b6 + 8;
        if (s->unk_0b6 > s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    } else if (b6 < 8) {
        s->unk_0b6 = b7;
    } else {
        s->unk_0b6 = s->unk_0b6 - 8;
        if (s->unk_0b6 < s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    }
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

extern "C" void BbsWriteMenu_ScrollToCaret(S *s) {
    u32 a = s->unk_0b7;
    s32 d = s->unk_09c - a;
    if (d < 0x18) {
        BbsWriteMenu_SetScrollTarget(s, a - (0x18 - d));
    } else if (d > 0x40) {
        BbsWriteMenu_SetScrollTarget(s, a + (d - 0x38));
    }
}

extern "C" BOOL BbsWriteMenu_TouchScrollKnob(S *s) {
    if (((MenuScrollKnob *)(s->unk_40ac))->hitTest(gTouchCurX, gTouchCurY)) {
        s->unk_0b9 = gTouchCurY;
        s->unk_0ba = (s->unk_0b6 * 2) / 3;
        s->unk_0bb = s->unk_0b6;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL BbsWriteMenu_IsTouchOnScrollBar(S *s) {
    s32 a = gTouchCurX;
    s32 t = gTouchCurY - 8;
    if (t < 0x10 || t > 0x38) return FALSE;
    if (a < 0xdd || a > 0xed) return FALSE;
    return TRUE;
}

extern "C" void BbsWriteMenu_SetScrollFromKnob(S *s, s32 v) {
    s32 d;
    v = (v * 3) >> 1;
    if (v < 0) v = 0;
    if (v > 0x3c) v = 0x3c;
    BbsWriteMenu_SetScroll(s, v);
    d = s->unk_0bb - v;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(s->unk_40ac);
        s->unk_0bb = v;
    }
}

extern "C" void BbsWriteMenu_DragScrollKnob(S *s) {
    BbsWriteMenu_SetScrollFromKnob(s, s->unk_0ba + (gTouchCurY - s->unk_0b9));
}

extern "C" void BbsWriteMenu_ScrollToTouch(S *s) {
    s32 t = gTouchCurY - 0x18;
    if (t < 0) t = 0;
    if (t > 0x28) t = 0x28;
    func_020e76f8(&s->unk_0b8, (u8)t, 2);
    BbsWriteMenu_SetScrollFromKnob(s, s->unk_0b8);
}

extern "C" void BbsWriteMenu_ScrollByPad(S *s) {
    s32 r, v;
    u16 k;
    v = s->unk_0b6;
    r = v;
    k = gPad[0];
    if (k & 0x40) {
        r = v - 4;
    } else if (k & 0x80) {
        r = v + 4;
    }
    if (r < 0) r = 0;
    if (r > 0x3c) r = 0x3c;
    if (v != r) Menu_PlayScrollTickSe(s->unk_40ac);
    BbsWriteMenu_SetScroll(s, r);
}

extern "C" BOOL BbsWriteMenu_HasSelection(S *s) {
    if (!BbsWriteMenu_HasFlags(s, 0x100) || s->unk_0be == s->unk_0bf) return FALSE;
    return TRUE;
}

extern "C" void BbsWriteMenu_ClearSelection(S *s) {
    s->unk_0be = 0;
    s->unk_0bf = 0;
    BbsWriteMenu_ClearFlags(s, 0x100);
}

extern "C" void BbsWriteMenu_DeleteSelection(S *s) {
    u32 lo, hi;
    u32 b = s->unk_0bf;
    u32 a = s->unk_0be;
    if (a > b) {
        lo = b;
        hi = a;
    } else {
        lo = a;
        hi = b;
    }
    u8 v = (u8)Keyboard_DeleteRange(s->unk_370, s->unk_0c3, lo, hi, 0xc0);
    ((BbsWriteMenu *)s)->setCursorIndex(v);
    BbsWriteMenu_ClearSelection(s);
}

extern "C" u8 BbsWriteMenu_HitTestLine(S *s, s32 i, s32 *p) {
    u32 off = s->unk_6a60[i];
    u8 out;
    u32 r = Keyboard_HitTestText(s->unk_370, s->unk_0c3 + off, 0xc0 - off, 0x96, (u8)(*p - 0x30), &out);
    *p = r + 0x30;
    return (u8)(out + off);
}

extern "C" void BbsWriteMenu_SetCaretFromPoint(S *s, s32 a, s32 b) {
    s32 t;
    if (b < 0x38) b = 0x38;
    if (b >= 0x88) b = 0x87;
    s->unk_098 = a;
    s->unk_09c = b;
    t = (s->unk_09c - 0x28) >> 4;
    if (t > s->unk_094) t = s->unk_094;
    s->unk_09c = t * 16 + 0x28;
    ((BbsWriteMenu *)s)->setCursorIndex(BbsWriteMenu_HitTestLine(s, t, &s->unk_098));
    BbsWriteMenu_ScrollToCaret(s);
}

BOOL BbsWriteMenu::touchTextArea() {
    s32 a = gTouchCurX;
    s32 b = gTouchCurY;
    if (b >= 0x48) {
        return FALSE;
    }
    if (a < 0x20 || a >= 0xe0) {
        return FALSE;
    }
    b += unk_b7 + 8;
    if (a < 0x30) {
        a = 0x30;
    }
    BbsWriteMenu_SetCaretFromPoint((S *)this, a, b);
    BbsWriteMenu_SetFlags((S *)this, 0x100);
    unk_be = unk_bd;
    unk_bf = unk_bd;
    return TRUE;
}

void BbsWriteMenu::endTouch() {}

BOOL BbsWriteMenu::dragSelection() {
    s32 a = gTouchCurX;
    s32 b = gTouchCurY;
    u8 old = unk_bd;
    if (a < 0x30) {
        a = 0x30;
    }
    b += unk_b7 + 8;
    BbsWriteMenu_SetCaretFromPoint((S *)this, a, b);
    unk_bf = unk_bd;
    if (unk_bd != old) {
        return TRUE;
    }
    return FALSE;
}

void BbsWriteMenu::resetTextCursor() {
    BbsWriteMenu_SetFlags((S *)this, 0x40);
    unk_98 = 0x30;
    unk_9c = 0x38;
    setCursorIndex(unk_c0);
    BbsWriteMenu_ClearSelection((S *)this);
    Keyboard_ResetKeyPalettes(&unk_370);
    refreshKeys();
}

void BbsWriteMenu::setCursorIndex(u8 v) {
    unk_bd = v;
    unk_bc = 0x10;
}

u8 BbsWriteMenu::getCharBeforeCursor() {
    if (unk_bd == 0) {
        return 0;
    }
    return unk_c3[unk_bd - 1];
}

void BbsWriteMenu::updateCaretPos() {
    s32 k = getLineOfIndex(unk_bd);
    unk_9c = k * 16 + 0x28;
    s32 b = unk_6a60[k];
    unk_98 = (u8)(Text_MeasureWidth(&unk_c3[b], unk_bd - b) + 0x30);
    BbsWriteMenu_ScrollToCaret((S *)this);
}

s32 BbsWriteMenu::getLineOfIndex(s32 v) {
    s32 n, i;
    i = 0;
    n = unk_94;
    for (; i < n; i++) {
        if (v < unk_6a60[i + 1]) {
            return i;
        }
    }
    if (n >= 6) {
        n = 5;
    }
    return n;
}

BOOL BbsWriteMenu::navigateText(void *pad) {
    if (pad == 0) {
        return FALSE;
    }
    u8 cur = unk_bd;
    s32 t = getLineOfIndex(cur);
    volatile s32 old = t;
    if (MenuKeys_HasUp((s32)pad)) {
        if (t > 1) {
            t--;
        }
    } else if (MenuKeys_HasDown((s32)pad)) {
        t++;
        if (t > unk_94 || t >= 6) {
            t--;
        }
    }
    s32 v = unk_98;
    if (t != old) {
        cur = BbsWriteMenu_HitTestLine((S *)this, t, &v);
    }
    if (MenuKeys_HasLeft((s32)pad)) {
        if (cur > unk_c0) {
            cur = cur - 1;
        }
    } else if (MenuKeys_HasRight((s32)pad)) {
        s32 n = Text_GetLength(unk_c3, 0xc0);
        s32 nx = cur + 1;
        if (nx <= n) {
            cur = nx;
        }
    }
    if (cur == unk_bd) {
        return FALSE;
    }
    setCursorIndex(cur);
    return TRUE;
}

void BbsWriteMenu::refreshKeys() {
    if (Keyboard_InsertCharMultiline(&unk_370, unk_c3, 0x86, &unk_bd, 0xc0, 0x28, 6, 0x96, 1, 1)) {
        Keyboard_EnableKey(&unk_370, 0);
    } else {
        Keyboard_DisableKey(&unk_370, 0);
    }
    if (BbsWriteMenu_HasSelection((S *)this)) {
        Keyboard_EnableKey(&unk_370, 0xb);
    } else {
        Keyboard_DisableKey(&unk_370, 0xb);
    }
    if (BbsWriteMenu_HasFlags((S *)this, 0x200)) {
        Keyboard_EnableKey(&unk_370, 0xc);
    } else {
        Keyboard_DisableKey(&unk_370, 0xc);
    }
    if (BbsWriteMenu_HasSelection((S *)this)) {
        Keyboard_DisableModifierKeys(&unk_370);
        Keyboard_EnableKey(&unk_370, 6);
    } else if (unk_bd <= unk_c0) {
        Keyboard_DisableModifierKeys(&unk_370);
    } else {
        Keyboard_UpdateModifierKeys(&unk_370, getCharBeforeCursor());
    }
}

void BbsWriteMenu::openDialog(u8 v, u8 x) {
    setTransitionState(v);
    ((MenuBottomButtonsBody *)(&unk_40f4))->setSelected(x);
    setMainState(0x15);
}

void BbsWriteMenu::showCursor() {
    BbsWriteMenu_ClearFlags((S *)this, 0x800);
    Keyboard_ResetCursor(&unk_370);
    u32 a = Keyboard_GetCursorX(&unk_370);
    u32 b = Keyboard_GetCursorY(&unk_370);
    unk_4258.warpTo(a, b);
    ((MenuCursor *)&unk_4258)->setAnimIfChanged(1);
    refreshCursor();
}

void BbsWriteMenu::hideCursor() {
    ((MenuCursor *)&unk_4258)->setAnimIfChanged(0);
    unk_4258.vfunc_0c();
}

void BbsWriteMenu::moveCursorToTarget() {
    if (BbsWriteMenu_HasFlags((S *)this, 0x800)) {
        unk_4258.moveToNear(unk_98, unk_9c - unk_b7, 3, 2);
        unk_c1 = 0xc;
    } else {
        u32 a = Keyboard_GetCursorX(&unk_370);
        u32 b = Keyboard_GetCursorY(&unk_370);
        unk_4258.moveToNear(a, b, 3, 2);
        unk_c1 = 6;
    }
    setMainState(7);
}

void BbsWriteMenu::moveCursorTo(s32 a, s32 b) {
    unk_4258.moveToNear(a, b, 3, 2);
    unk_c1 = unk_8d;
    setMainState(7);
}

void BbsWriteMenu::snapCursor() {
    if (BbsWriteMenu_HasFlags((S *)this, 0x800)) {
        unk_4258.warpTo(unk_98, unk_9c - unk_b7);
    } else {
        u32 a = Keyboard_GetCursorX(&unk_370);
        u32 b = Keyboard_GetCursorY(&unk_370);
        unk_4258.warpTo(a, b);
    }
    unk_4258.vfunc_0c();
}

void BbsWriteMenu::pressCursor() {
    ((MenuCursor *)&unk_4258)->setPosePress();
    setMainState(8);
}

void BbsWriteMenu::releaseCursor() {
    Keyboard_ClearHighlight(&unk_370);
    unk_4258.setPoseRelease();
    setMainState(10);
}

void BbsWriteMenu::refreshCursor() {
    unk_4258.setPoseIdle();
    unk_4258.vfunc_0c();
}

void BbsWriteMenu::censorText() {
    u8 *c3 = unk_c3;
    EncodedString_SetRaw(&unk_4390, c3, 0xc0);
    unk_42bc.fromEncoded(&unk_4390, 0, 0);
    if (String_CensorTaboo(&unk_42bc)) {
        unk_4390.fromMsgString(&unk_42bc);
        StrBuf_GetBytes(&unk_4390, c3, 0xc0);
    }
}

void BbsWriteMenu::showTodayDate() {
    u8 t[16];
    s32 v;
    Clock_GetDate(t);
    t[4] = 0x37;
    t[5] = 0x35;
    v = t[2];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    t[8] = 0;
    String_FromEncodedBytes(&unk_3f2c[0], &t[4], 5);
    placeLabel(0, 0x111, 4, 1);
    v = t[1];
    t[4] = v / 10 + 0x35;
    t[5] = v % 10 + 0x35;
    v = t[0];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    String_FromEncodedBytes(&unk_3f2c[1], &t[4], 5);
    placeLabel(1, 0x116, 4, 1);
}

void BbsWriteMenu::clearPostNumberLabel() {
    ((MsgString *)(&unk_3f2c[2]))->clear();
    placeLabel(2, 0x11a, 5, 0);
}

void BbsWriteMenu::placeLabel(s32 idx, u32 a, u32 b, s32 c) {
    LabelString *p = &unk_3f2c[idx];
    ((LabelString *)(p))->createSmallLabel(4, a, b, 0xf, 0xa, c);
    ((LabelString *)(p))->redrawAligned(0, 0);
}

void BbsWriteMenu::beginDialogDim() {
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-6);
    ((MenuBottomButtonsBody *)(&unk_40f4))->enableObjWindow();
    Gfx2d_SetSubWin1Planes(0x1f, 0);
    Gfx2d_EnableSubWindows(2);
    Gfx2d_SetSubWin1Rect(0x2c, 0x20, 0xd4, 0x80);
}

void BbsWriteMenu::endDialogDim() {
    Gfx2d_EndSubObjWinBrightness();
    ((MenuBottomButtonsBody *)(&unk_40f4))->disableObjWindow();
    Gfx2d_DisableSubWindows(2);
}

void BbsWriteMenu::sendPostToPeers() {
    if (((CommManager *)(gCommManager))->isOnline()) {
        void *heap = gMenuHeap;
        u8 *buf = (u8 *)Heap_AllocTail(heap, 0xc1);
        buf[0] = 0;
        MI_CpuCopy8(unk_c3, &buf[1], 0xc0);
        void *g = gCommManager;
        ((CommManager *)(g))->beginRecord();
        ((CommManager *)(g))->writeRecord(buf, 0xc1);
        ((CommManager *)(g))->endRecord(0x16, 4);
        unk_b4 = ((CommManager *)(g))->getSendSeq();
        Heap_Free(heap, buf);
    }
}

BOOL BbsWriteMenu::isPostSendConfirmed() {
    if (((CommManager *)(gCommManager))->isOnline()) {
        if (Comm_IsSeqConfirmed(unk_b4) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

