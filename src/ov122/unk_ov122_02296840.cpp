// ov122: scene overlay (class LetterWriteMenu, vtable 0x0229a1b8, 0x4664 bytes): chat keyboard/text-entry list screen.
#include "types.h"
#include "Unk_020d8c7c.h"
#include "ui/LetterRenderer.h"
#include "menu/MenuProc.h"

class EncodedString;

class MsgString {
public:
    virtual ~MsgString();
};

class EncodedString {
public:
    virtual ~EncodedString();
};

class MsgString129 : public MsgString {
public:
    MsgString129();
    virtual ~MsgString129();
    u32 unk_04[(0x94 - 4) / 4];
};

class EncodedString128 : public EncodedString {
public:
    EncodedString128();
    virtual ~EncodedString128();
    u32 unk_04[(0x90 - 4) / 4];
    u8 unk_90[0x28];
    u8 unk_b8[0x80];
};

// text window, 0x40 bytes
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    u32 unk_04[(0x40 - 4) / 4];
};

// screen upload helper, 0x24 bytes
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    u32 unk_04[8];
};


class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class ScrollKnob : public HandCursor {
public:
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();
    u32 unk_04[0x44 / 4];
};

class MenuCursorBase : public HandCursor {
public:
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
};

class PopupChoiceMenuBody {
public:
    u32 unk_00[0x2f4 / 4];
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
};

class MenuBottomButtonsBody {
public:
    u32 unk_00[0x164 / 4];
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    u32 unk_00[0x108 / 4];
};


// 0xc0: ov095 list/text object, size 0x23bc
class Keyboard {
public:
    Keyboard() : bgTasks(), labels() {}
    inline ~Keyboard() {}
    u32 unk_00[0x22f4 / 4];
    BgVramTask bgTasks[2];
    LabelString labels[2];
};

class LetterWriteMenu;
typedef void (LetterWriteMenu::*Unk_ov122_0229a1b8_Fn)();

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
void Snd_PlaySe(u32 v);
s32 Text_GetLength(void *p, s32 n);
void StrBuf_GetBytes(void *p, void *q, u32 n);
void EncodedString_SetRaw(void *p);
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *p, void *q, s32 a, s32 b);
s32 String_CensorTaboo(void *p);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *p, void *q);
void PlayerData_GetCurrent();
void _ZN10PlayerData12getInventoryEv();
void *_ZN15PlayerInventory9getUnk988Ev();
void LetterDefaults_Store(void *a, void *b);
s32 _ZN12LetterLayout16getBodyLineCountEv(void *p);
void _ZN14MenuCursorBase11setPoseIdleEv(void *p);
void _ZN14MenuCursorBase14setPoseReleaseEv(void *p);
void _ZN10MenuCursor12setPosePressEv(void *p);
void _ZN14MenuCursorBase6warpToEii(void *p, s32 a, s32 b);
void _ZN14MenuCursorBase10moveToNearEiiih(void *p, s32 a, s32 b, u32 c, u32 d);
void _ZN14MenuCursorBase12moveToLinearEiii(void *p, s32 a, s32 b, u32 c);
void _ZN10MenuCursor16setAnimIfChangedEi(void *p, u32 v);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_OpenAddresseePage(void *p, u32 a, u32 b);
s32 _ZN19PopupChoiceMenuBody7getRowXEv(void *p);
s32 _ZN19PopupChoiceMenuBody7getRowYEi(void *p, u32 v);
void _ZN21MenuBottomButtonsBody11setSelectedEh(void *p, u32 v);
void Menu_PlayScrollTickSe(void *p);
BOOL _ZN14MenuScrollKnob7hitTestEii(void *p, u32 a, u32 b);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void Keyboard_ResetCursor(void *s);
s32 Keyboard_GetCursorX(void *s);
s32 Keyboard_GetCursorY(void *s);
s32 Keyboard_ClearHighlight(void *s);
extern u8 gU8None;
s32 Text_MeasureWidth(void *p, s32 v);
s32 _ZN12LetterLayout16getBodyLineOfPosEi(void *p, s32 v);
s32 *_ZN12LetterLayout17getBodyLineStartsEv(void *p);
s32 _ZN14LetterRenderer22getRecipientNameLengthEv(void *p);
BOOL MenuCtrl_IsTouch();
u32 Keyboard_DeleteRange(void *st, u8 *a, u32 b, u32 c, s32 d);
s32 Keyboard_HitTestText(void *st, void *a, s32 b, s32 c, u32 d, u8 *out);
void Keyboard_ResetKeyPalettes(void *st);
BOOL Keyboard_IsSlotDisabled(void *st, s32 v);
void Keyboard_HighlightKey(void *st, s32 v);
BOOL Keyboard_IsOnButtonKey(void *st, s32 v);
s32 _ZN19PopupChoiceMenuBody11getRowCountEv(void *p);
s32 _ZN21MenuBottomButtonsBody10getTargetXEi(void *p, s32 v);
s32 _ZN21MenuBottomButtonsBody10getTargetYEi(void *p, s32 v);
void _ZN16MenuErrorMessage8openHighEPhij(void *p, void *q, s32 a, s32 b);
void _ZN10MenuCursor14switchToAnim01Ev(void *p);
void _ZN10MenuCursor14switchToAnim07Ev(void *p);
extern u8 gTouchHeld;
extern u8 gTouchChanged;
s32 Mem_Clear(void *p, s32 n);
s32 Mem_Copy(void *dst, void *src, u32 n);
BOOL MenuCtrl_IsForceCloseDue();
s32 Keyboard_PressCursorKey(void *st);
u32 Keyboard_MoveCursor(void *st, u32 v);
s32 Keyboard_HandleModeKey(void *st, s32 k, s32 v);
BOOL Keyboard_IsControlCode(void *st, s32 v);
BOOL Keyboard_IsFull(void *st);
BOOL Keyboard_IsTooWide(void *st);
s32 Keyboard_ResetTypedRun(void *st);
s32 Keyboard_BeginPaste(void *st);
s32 Keyboard_EndPaste(void *st);
s32 Keyboard_PlayPasteSe(void *st);
s32 Keyboard_PlayCopySe(void *st);
BOOL Keyboard_InsertCharMultiline(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL Keyboard_InsertChar(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f);
u8 *Keyboard_ModifyCharKey103(void *st, u8 *p);
u8 *Keyboard_ModifyCharKey104(void *st, u8 *p);
u8 *Keyboard_ModifyCharKey105(void *st, u8 *p);
BOOL Keyboard_ReplaceCharBeforeCursor(void *st, u8 *a, u8 *b, s32 c, s32 d, s32 e);
s32 Keyboard_TouchKey(void *st, s32 a, s32 b);
s32 Keyboard_GetKeyCode(void *st, s32 a, s32 b);
s32 Keyboard_StartKeyRepeat(void *st);
BOOL Keyboard_TickKeyRepeat(void *st);
s32 Keyboard_GetPressedKey(void *st);
BOOL Keyboard_UpdatePressedKey(void *st);
BOOL Keyboard_TouchPageTab(void *st);
s32 Keyboard_SetMode(void *st, s32 a, s32 b, s32 c);
void _ZN10MenuCursor14switchToAnim0DEv(void *p);
void _ZN14MenuScrollKnob7releaseEv(void *p);
void _ZN14MenuScrollKnob4grabEv(void *p);
s32 _ZN21MenuBottomButtonsBody9isTouchedEi(void *p, s32 v);
s32 _ZN19PopupChoiceMenuBody10hitTestRowEii(void *p, s32 a, s32 b);
void PopupChoice_DecideAddressee(void *p, s32 v);
u32 _ZN19PopupChoiceMenuBody13pickAddresseeEjj(void *p, s32 a, u32 b);
extern u32 gCurrentHeap;
void Gfx2d_HideLayer(s32 a);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadPaletteFile(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadCharFile(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *Letter_GetPaper(void *p);
void Menu_LoadPaperBg(void *p, s32 a);
s32 MenuCtrl_GetArg();
s32 Letter_IsBottle(void *p);
void _ZN10ScrollKnob8setStateEi(void *p, s32 v);
void Keyboard_LoadObjGfx(void *p);
void Keyboard_DisableModifierKeys(void *p);
void Keyboard_UpdateModifierKeys(void *p, s32 a);
void Keyboard_EndFrame(void *p, s32 a);
void Keyboard_LoadScreenNow(void *p, s32 a);
void Keyboard_LoadScreenFile(void *p, const char *q);
void Keyboard_SetAltWriteLayout(void *p);
void Keyboard_Shutdown(void *p);
void Keyboard_Init(void *p, s32 a);
void Keyboard_Reload(void *p, s32 a);
void Keyboard_RestoreLastPage(void *p, s32 a);
void Keyboard_EnableKey(void *p, s32 a);
void Keyboard_DisableKey(void *p, s32 a);
u32 Keyboard_GetTypedRunLength(void *p);
void ProcBase_RequestDelete(void *p);
u32 ProcBase_GetParent();
void _ZN10MenuTabBar9selectTabEj(u32 a, u32 b);
void _ZN10MenuTabBar15onTabMenuClosedEv(u32 a);
void _ZN10MenuTabBar8showTabsEv(u32 a);
u32 MenuCtrl_GetSavedSlot();
void MenuCtrl_SetSavedSlot(u32 a);
void MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsButtons();
void Gfx2d_EnableSubWindows(u32 a);
void Gfx2d_DisableSubWindows(u32 a);
void Gfx2d_SetSubWin0Planes(u32 a, u32 b);
void Gfx2d_SetSubWinOutPlanes(u32 a);
void Gfx2d_SetWindowRect(u32 a, u32 b, u32 c, u32 d, u32 e);
void Oam_DrawCell(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void Oam_DrawObj(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
void _ZN10ScrollKnob6moveToEii(void *a, u32 b, u32 c);
void PopupChoice_Draw(void *p);
void func_0206fca8(void *p);
void _ZN14LetterRenderer17loadRecipientNameEPv(void *p, u32 a);
BOOL _ZN10HandCursor7getAnimEv(void *p);
BOOL _ZN10HandCursor10isAnimDoneEv(void *p);
BOOL _ZN10ScrollKnob12areAnimsDoneEv(void *p);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
s32 func_ov002_022009d4(void *self);
s32 func_ov002_022009c8(void *self);
void Menu_PlayScrollGrabSe(void *p);
BOOL _ZN16MenuErrorMessage6updateEi(void *p, s32 a);
BOOL _ZN21MenuBottomButtonsBody9stepPressEv(void *p);
s32 _ZN21MenuBottomButtonsBody14getPressOffsetEv(void *p);
BOOL _ZN19PopupChoiceMenuBody8isClosedEv(void *p);
s32 _ZN19PopupChoiceMenuBody14applyAddresseeEPvj(void *p, u32 a, u32 b);
u32 _ZN19PopupChoiceMenuBody12getPageCountEv(void *p);
BOOL PopupChoice_TickDecideDelay(void *p);
BOOL _ZN19PopupChoiceMenuBody6isOpenEv(void *p);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *b, s32 c);
BOOL _ZN14MenuCursorBase8isMovingEv(void *p);
void _ZN12LetterLayout18highlightBodyRangeEjjj(void *self, s32 a, s32 b, s32 c);
void _ZN14LetterRenderer17highlightGreetingEjj(void *self, s32 a, s32 b, s32 c);
void _ZN14LetterRenderer12setSignatureEPh(void *self, void *p);
void _ZN14LetterRenderer7setBodyEPhi(void *self, void *p, u32 b);
void _ZN14LetterRenderer11setGreetingEP16Unk_0206d1d4_SrcPh(void *self, void *p, void *q);
void _ZN14LetterRenderer6redrawEv(void *self);
void _ZN14LetterRenderer7releaseEv(void *self);
void _ZN14LetterRenderer8setLayerEi(void *self, s32 a);
void _ZN14LetterRenderer16loadLetterScreenEj(void *self, s32 a);
void _ZN19PopupChoiceMenuBody18buildAddresseeListEv(void *self);
void _ZN14MenuCursorBase11drawWrappedEv(void *self);
void _ZN21MenuBottomButtonsBody15showTitleLayer2Ev(void *self);
void _ZN21MenuBottomButtonsBody16setLayoutYesNo07Ei(void *self, s32 a);
void _ZN15PopupChoiceMenu4initEiiPKc(void *self, s32 a, s32 b, s32 c);
s32 _ZN14MenuScrollKnob8getGripYEv(void *self);
s32 _ZN14MenuScrollKnob8getGripXEv(void *self);
void _ZN17MenuBottomButtons16setLayoutConfirmEv(void *self);
void _ZN17MenuBottomButtons24setLayoutChangeAddresseeEv(void *self);
void _ZN17MenuBottomButtons6drawAtEi(void *self, s32 a);
void _ZN17MenuBottomButtons9freeTextsEv(void *self);
void LetterLayout_HighlightSignature(void *self, s32 a, s32 b, s32 c);
void PopupChoice_ForceClose(void *self);
void PopupChoice_Update(void *self);
void PopupChoice_LoadChoiceBg(void *self);
void Keyboard_SetTextFieldPos(void *self, s32 a, s32 b);
void Keyboard_DrawLengthGaugeAt(void *self, u32 a, void *b, u32 c);
void Keyboard_DrawCopyPasteKeys(void *self, u32 a, void *b);
void Keyboard_DrawCaret(void *self, s32 a, s32 b, s32 c);
void Keyboard_Draw(void *self, u32 a, void *b, u32 c);
}

// Vtable 0x0229a1b8, size 0x4664
class LetterWriteMenu : public MenuProc {
public:
    LetterWriteMenu()
        : keyboard(), renderer(), scrollKnob(), cursor(), censorString(), encodedText(),
          addresseeMenu(), bottomButtons(), errorMessage() {}

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
    void censorLetter();
    void censorField(u8 *src, u32 n);
    void storeLetterDefaults();
    void func_ov122_02296a48();
    void func_ov122_02296a7c(u32 a);
    void func_ov122_02296aa4();
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void snapCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    void showCursor();
    void openDialog(u32 i);
    void playErrorSe();
    void scrollToCaret();
    void updateScroll();
    BOOL isScrolling();
    void setScrollTarget(s32 v);
    void setScroll(s32 v);
    void scrollByPad();
    void dragScrollKnob();
    BOOL touchScrollKnob();
    void setCursorIndex(u32 v);
    u8 getFieldCursor();
    u32 getFieldCapacity();
    u8 *getFieldBuffer();
    u8 *getPartText();
    BOOL navigateText(void *pad, s32 flag);
    void deleteSelection();
    void clearSelection();
    BOOL hasSelection();
    u8 getCharBeforeCursor();
    void updateCaretPos();
    void updateCaretPosSignature();
    void updateCaretPosBody();
    void updateCaretPosGreeting();
    void setCaretFromPoint(s32 a, s32 b, s32 c);
    BOOL dragSelection();
    void endTouch();
    BOOL touchTextArea();
    u8 hitTestSignature(u32 *p);
    void moveCaretToSignature();
    u8 hitTestBodyLine(s32 idx, u32 *p);
    void moveCaretToBody(s32 flag);
    u8 hitTestGreeting(s32 a, u8 *p);
    void moveCaretToGreeting();
    void resetTextCursor();
    void func_ov122_022978c0();
    void func_ov122_02297928();
    void func_ov122_02297940();
    void func_ov122_02297994();
    void showMessage(u8 a, s32 b);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    BOOL tryStartFinish();
    BOOL tryCopyButton();
    BOOL tryPasteButton();
    BOOL toggleTextFocus();
    BOOL tryBackspaceButton();
    BOOL tryPressKey();
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
    s32 pressKeyCode(s32 key);
    void paste();
    void copy();
    void askOpenList();
    void askFinish();
    void closeKeyboard();
    BOOL insertChar(u32 key);
    BOOL insertCharRaw(u32 a, u32 b);
    BOOL applyModifierKey(u32 key);
    BOOL backspace(BOOL flag);
    s32 touchKey();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void refreshKeys();
    void redrawText(u32 a, u32 b);
    void showFinishDialog();
    void setupDialogButtons();
    void loadKeyboardObjGfx();
    void loadBg();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void init();
    void transitionAct0E();
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
    void forceClose();
    BOOL requestTab(s32 a);
    BOOL checkForcedClose();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *keyboardSlideY;
    /* 0x98 */ s32 buttonsSlideY;
    /* 0x9c */ s32 caretX;
    /* 0xa0 */ s32 caretY;
    /* 0xa4 */ s32 lengthGauge;
    /* 0xa8 */ u16 flags;
    /* 0xaa */ u8 editPart;
    /* 0xab */ u8 caretBlinkTimer;
    /* 0xac */ u8 caretIndex;
    /* 0xad */ u8 selectionStart;
    /* 0xae */ u8 selectionEnd;
    /* 0xaf */ u8 lastTickScrollY;
    /* 0xb0 */ u8 dragStartTouchY;
    /* 0xb1 */ u8 dragStartScrollY;
    /* 0xb2 */ u8 scrollY;
    /* 0xb3 */ u8 scrollTargetY;
    /* 0xb4 */ u8 returnState;
    /* 0xb5 */ u8 nextTransitionState;
    /* 0xb6 */ u8 choiceIndex;
    /* 0xb7 */ u8 addresseePage;
    /* 0xb8 */ u8 dialogId;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 *letter;
    /* 0xc0 */ Keyboard keyboard;
    /* 0x247c */ u32 unk_247c[(0x3c7c - 0x247c) / 4];
    /* 0x3c7c */ LetterRenderer renderer;
    /* 0x3e8c */ MenuScrollKnob scrollKnob;
    /* 0x3ed4 */ MenuCursorBuf0 cursor;
    /* 0x3f38 */ MsgString129 censorString;
    /* 0x3fcc */ EncodedString128 encodedText;
    /* 0x4104 */ PopupChoiceMenu addresseeMenu;
    /* 0x43f8 */ MenuBottomButtons bottomButtons;
    /* 0x455c */ MenuErrorMessage errorMessage;
};

extern "C" void LetterWriteMenu_SetupBgLayers();
struct Unk_ov122_SceneEntry {
    LetterWriteMenu *(*create)();
    u16 a;
    u16 b;
};
extern "C" LetterWriteMenu *LetterWriteMenu_Create();
// Scene registration entry read by main: factory, then two ids
// Named data: their definition order sets the .data order (compiler-generated constants would not reproduce it).
extern "C" const u8 data_ov122_0229a004[4] = {3, 4, 0, 0};

extern "C" const u16 data_ov122_0229a010[6] = {0x27, 0x29, 0x29, 0x27, 0x2a, 0};

extern "C" Unk_ov122_SceneEntry data_ov122_0229a130 = {LetterWriteMenu_Create, 0xa5, 0xa9};

extern "C" const u8 data_ov122_0229a008[8] = {0, 9, 9, 3, 4, 0, 0, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct01Ev();
extern "C" void *data_ov122_0229a178[2] = {(void *)_ZN15LetterWriteMenu15transitionAct01Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct00Ev();
extern "C" void *data_ov122_0229a170[2] = {(void *)_ZN15LetterWriteMenu15transitionAct00Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct03Ev();
extern "C" void *data_ov122_0229a168[2] = {(void *)_ZN15LetterWriteMenu15transitionAct03Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct04Ev();
extern "C" void *data_ov122_0229a160[2] = {(void *)_ZN15LetterWriteMenu15transitionAct04Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct05Ev();
extern "C" void *data_ov122_0229a158[2] = {(void *)_ZN15LetterWriteMenu15transitionAct05Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct06Ev();
extern "C" void *data_ov122_0229a150[2] = {(void *)_ZN15LetterWriteMenu15transitionAct06Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct07Ev();
extern "C" void *data_ov122_0229a148[2] = {(void *)_ZN15LetterWriteMenu15transitionAct07Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct08Ev();
extern "C" void *data_ov122_0229a140[2] = {(void *)_ZN15LetterWriteMenu15transitionAct08Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct09Ev();
extern "C" void *data_ov122_0229a138[2] = {(void *)_ZN15LetterWriteMenu15transitionAct09Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct0AEv();
extern "C" void *data_ov122_0229a090[2] = {(void *)_ZN15LetterWriteMenu15transitionAct0AEv, 0};

extern "C" u32 data_ov122_0229a180[12] = {0x006880b4, 0x0000a0c0, 0x206880e4, 0x0000a0c0, 0x006800c4, 0x0000a0e0, 0x006800cc, 0x0000a0e0,
                                          0x006800d4, 0x0000a0e0, 0x006800dc, 0xffffa0e0};

extern "C" void _ZN15LetterWriteMenu15transitionAct0CEv();
extern "C" void *data_ov122_0229a120[2] = {(void *)_ZN15LetterWriteMenu15transitionAct0CEv, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct0DEv();
extern "C" void *data_ov122_0229a118[2] = {(void *)_ZN15LetterWriteMenu15transitionAct0DEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct19Ev();
extern "C" void *data_ov122_0229a080[2] = {(void *)_ZN15LetterWriteMenu9mainAct19Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct10Ev();
extern "C" void *data_ov122_0229a108[2] = {(void *)_ZN15LetterWriteMenu9mainAct10Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct11Ev();
extern "C" void *data_ov122_0229a100[2] = {(void *)_ZN15LetterWriteMenu9mainAct11Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct18Ev();
extern "C" void *data_ov122_0229a078[2] = {(void *)_ZN15LetterWriteMenu9mainAct18Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct00Ev();
extern "C" void *data_ov122_0229a0f0[2] = {(void *)_ZN15LetterWriteMenu9mainAct00Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct02Ev();
extern "C" void *data_ov122_0229a0e8[2] = {(void *)_ZN15LetterWriteMenu9mainAct02Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct03Ev();
extern "C" void *data_ov122_0229a0e0[2] = {(void *)_ZN15LetterWriteMenu9mainAct03Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct04Ev();
extern "C" void *data_ov122_0229a0d8[2] = {(void *)_ZN15LetterWriteMenu9mainAct04Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct1AEv();
extern "C" void *data_ov122_0229a0d0[2] = {(void *)_ZN15LetterWriteMenu9mainAct1AEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct06Ev();
extern "C" void *data_ov122_0229a0c8[2] = {(void *)_ZN15LetterWriteMenu9mainAct06Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct15Ev();
extern "C" void *data_ov122_0229a020[2] = {(void *)_ZN15LetterWriteMenu9mainAct15Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct08Ev();
extern "C" void *data_ov122_0229a0b8[2] = {(void *)_ZN15LetterWriteMenu9mainAct08Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct02Ev();
extern "C" void *data_ov122_0229a0b0[2] = {(void *)_ZN15LetterWriteMenu15transitionAct02Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct0AEv();
extern "C" void *data_ov122_0229a0a8[2] = {(void *)_ZN15LetterWriteMenu9mainAct0AEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct0BEv();
extern "C" void *data_ov122_0229a0a0[2] = {(void *)_ZN15LetterWriteMenu9mainAct0BEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct0CEv();
extern "C" void *data_ov122_0229a098[2] = {(void *)_ZN15LetterWriteMenu9mainAct0CEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct17Ev();
extern "C" void *data_ov122_0229a040[2] = {(void *)_ZN15LetterWriteMenu9mainAct17Ev, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct0BEv();
extern "C" void *data_ov122_0229a128[2] = {(void *)_ZN15LetterWriteMenu15transitionAct0BEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct0DEv();
extern "C" void *data_ov122_0229a038[2] = {(void *)_ZN15LetterWriteMenu9mainAct0DEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct0FEv();
extern "C" void *data_ov122_0229a070[2] = {(void *)_ZN15LetterWriteMenu9mainAct0FEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct01Ev();
extern "C" void *data_ov122_0229a0f8[2] = {(void *)_ZN15LetterWriteMenu9mainAct01Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct12Ev();
extern "C" void *data_ov122_0229a068[2] = {(void *)_ZN15LetterWriteMenu9mainAct12Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct05Ev();
extern "C" void *data_ov122_0229a060[2] = {(void *)_ZN15LetterWriteMenu9mainAct05Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct14Ev();
extern "C" void *data_ov122_0229a0c0[2] = {(void *)_ZN15LetterWriteMenu9mainAct14Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct09Ev();
extern "C" void *data_ov122_0229a050[2] = {(void *)_ZN15LetterWriteMenu9mainAct09Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct16Ev();
extern "C" void *data_ov122_0229a048[2] = {(void *)_ZN15LetterWriteMenu9mainAct16Ev, 0};

extern "C" u32 data_ov122_0229a030[2] = {0x802a40e6, 0xffffc0c1};

extern "C" void _ZN15LetterWriteMenu9mainAct0EEv();
extern "C" void *data_ov122_0229a088[2] = {(void *)_ZN15LetterWriteMenu9mainAct0EEv, 0};

extern "C" void _ZN15LetterWriteMenu15transitionAct0EEv();
extern "C" void *data_ov122_0229a110[2] = {(void *)_ZN15LetterWriteMenu15transitionAct0EEv, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct13Ev();
extern "C" void *data_ov122_0229a028[2] = {(void *)_ZN15LetterWriteMenu9mainAct13Ev, 0};

extern "C" void _ZN15LetterWriteMenu9mainAct07Ev();
extern "C" void *data_ov122_0229a058[2] = {(void *)_ZN15LetterWriteMenu9mainAct07Ev, 0};

#define C LetterWriteMenu

static inline BOOL Unk_ov122_02298b70_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" LetterWriteMenu *LetterWriteMenu_Create() { return new LetterWriteMenu(); }

BOOL LetterWriteMenu::vfunc_00() {
    init();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL LetterWriteMenu::vfunc_0c() {
    u32 t = ProcBase_GetParent();
    _ZN10MenuTabBar15onTabMenuClosedEv(t);
    _ZN10MenuTabBar8showTabsEv(t);
    releaseResources();
    return TRUE;
}

BOOL LetterWriteMenu::onDraw() {
    PopupChoice_Draw(&addresseeMenu);
    if (testFlags(1)) {
        u8 *p = keyboardSlideY + 0x60;
        Oam_DrawCell(1, data_ov122_0229a180, 0x80, p - 0x10, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Keyboard_Draw(&keyboard, 0x80, p, 1);
        Keyboard_DrawCopyPasteKeys(&keyboard, 0x80, p);
        if (MenuCtrl_IsButtons()) {
            Oam_DrawObj(1, data_ov122_0229a030, 0x80, p, -1, 1, 0);
        }
        Keyboard_DrawLengthGaugeAt(&keyboard, 0x80, p, lengthGauge);
    }
    if (isScrolling()) {
        updateScroll();
        Gfx2d_SetLayerOffset(4, 0, scrollY);
        Gfx2d_SetLayerOffset(3, 0, scrollY);
        if (scrollY > 0x40) {
            if (!testFlags(0x20)) {
                setFlags(0x20);
                Gfx2d_EnableSubWindows(1);
                Gfx2d_SetSubWin0Planes(0x1d, 1);
                Gfx2d_SetSubWinOutPlanes(0x1f);
                Gfx2d_SetWindowRect(2, 0, 0xb0, 0xfe, 0xc0);
            }
        } else if (testFlags(0x20)) {
            clearFlags(0x20);
            Gfx2d_DisableSubWindows(1);
        }
    }
    if (testFlags(1)) {
        _ZN10ScrollKnob6moveToEii(&scrollKnob, 0x64, (u32)(keyboardSlideY - 0x58) + (scrollY >> 1));
        s32 t = _ZN14MenuScrollKnob8getGripXEv(&scrollKnob);
        Keyboard_SetTextFieldPos(&keyboard, t, _ZN14MenuScrollKnob8getGripYEv(&scrollKnob));
        scrollKnob.vfunc_08();
    }
    if (MenuCtrl_IsButtons()) {
        if (testFlags(0x200)) {
            s32 t = _ZN14MenuScrollKnob8getGripXEv(&scrollKnob);
            _ZN14MenuCursorBase6warpToEii(&cursor, t, _ZN14MenuScrollKnob8getGripYEv(&scrollKnob));
        }
        _ZN14MenuCursorBase11drawWrappedEv(&cursor);
    }
    if (testFlags(1)) {
        _ZN17MenuBottomButtons6drawAtEi(&bottomButtons, (s32)keyboardSlideY);
    }
    if (testFlags(2)) {
        _ZN17MenuBottomButtons6drawAtEi(&bottomButtons, buttonsSlideY);
    }
    if (testFlags(4)) {
        s32 a = caretX;
        s32 b = caretY - scrollY;
        caretBlinkTimer = caretBlinkTimer + 1;
        if ((caretBlinkTimer & 0x10) != 0) {
            Keyboard_DrawCaret(&keyboard, a, b, 3);
        }
    }
    return TRUE;
}

BOOL LetterWriteMenu::execTransition() {
    static Unk_ov122_0229a1b8_Fn tbl[15] = {
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a170, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a178,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0b0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a168,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a160, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a158,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a150, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a148,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a140, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a138,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a090, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a128,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a120, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a118,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a110};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void LetterWriteMenu::runMainState() {
    static Unk_ov122_0229a1b8_Fn tbl[27] = {
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0f0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0f8,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0e8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0e0,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0d8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a060,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0c8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a058,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0b8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a050,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0a8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0a0,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a098, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a038,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a088, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a070,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a108, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a100,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a068, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a028,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0c0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a020,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a048, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a040,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a078, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a080,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0d0};
    (this->*tbl[mainState])();
}

BOOL LetterWriteMenu::execMain() {
    if (checkForcedClose()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL LetterWriteMenu::execPhase3() { return TRUE; }

BOOL LetterWriteMenu::execPhase4() { return TRUE; }

BOOL LetterWriteMenu::execClosed() {
    storeLetterDefaults();
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL LetterWriteMenu::checkForcedClose() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (mainState) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            forceClose();
            return TRUE;
        case 5:
        case 7:
        case 8:
        case 10:
            break;
        }
    }
    return FALSE;
}

BOOL LetterWriteMenu::requestTab(s32 a) {
    u32 r6 = ProcBase_GetParent();
    if (a != -1 && a != 8) {
        u32 r7 = MenuCtrl_GetSavedSlot();
        _ZN10MenuTabBar9selectTabEj(r6, (u8)a);
        MenuCtrl_SetSavedSlot(r7);
        transitionState = 2;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void LetterWriteMenu::forceClose() {
    _ZN10MenuTabBar9selectTabEj(ProcBase_GetParent(), 7);
    setScrollTarget(0);
    clearFlags(4);
    transitionState = 0xd;
    setPhase(1);
    hideCursor();
    censorLetter();
}

void LetterWriteMenu::transitionAct00() {
    LetterWriteMenu_SetupBgLayers();
    loadBg();
    Keyboard_RestoreLastPage(&keyboard, 6);
    Keyboard_EndFrame(&keyboard, 6);
    beginSubSlideIn(0xb, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    Gfx2d_ShowLayer(3);
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, -16);
    applySlideOffset(3, 0, -16);
    loadKeyboardObjGfx();
    setupDialogButtons();
    setFlags(1);
    keyboardSlideY = (u8 *)getSlideOffsetY();
    setTransitionState(1);
}

void LetterWriteMenu::transitionAct01() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resetTextCursor();
        resumeInput();
    }
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, -16);
    applySlideOffset(3, 0, -16);
    keyboardSlideY = (u8 *)getSlideOffsetY();
}

void LetterWriteMenu::transitionAct02() {
    beginSubSlideOut(3, 0, 0, 0x30);
    applySlideOffset(4, 0, 0);
    applySlideOffset(3, 0, 0);
    setTransitionState(3);
}

void LetterWriteMenu::transitionAct03() {
    if (stepSlideOut(0)) {
        Gfx2d_HideLayer(4);
        Gfx2d_HideLayer(3);
        Gfx2d_SetLayerOffset(4, 0, 0);
        Gfx2d_SetLayerOffset(3, 0, 0);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, 0);
        applySlideOffset(3, 0, 0);
        buttonsSlideY = getSlideOffsetY();
    }
}

void LetterWriteMenu::transitionAct04() {
    if (testFlags(0x20) == 0) {
        beginSubSlideOut(8, 0, 0, 0x30);
        applySlideOffset(6, 0, 0);
        transitionState = 5;
    } else {
        setScrollTarget(0);
    }
}

void LetterWriteMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_HideLayer(6);
        Gfx2d_SetLayerOffset(6, 0, 0);
        clearFlags(1);
        transitionState = nextTransitionState;
    } else {
        applySlideOffset(6, 0, 0);
        keyboardSlideY = (u8 *)getSlideOffsetY();
    }
}

void LetterWriteMenu::transitionAct06() {
    if (isScrolling() == 0) {
        showFinishDialog();
        setFlags(2);
        buttonsSlideY = 0xc0;
        transitionState = 7;
    }
}

void LetterWriteMenu::transitionAct07() {
    if (buttonsSlideY > 0x20) {
        buttonsSlideY = buttonsSlideY - 0x20;
    } else {
        buttonsSlideY = 0;
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            func_ov122_02297994();
        } else {
            func_ov122_02297940();
        }
    }
}

void LetterWriteMenu::transitionAct08() {
    buttonsSlideY = 0;
    transitionState = 9;
}

void LetterWriteMenu::transitionAct09() {
    if (buttonsSlideY < 0xa0) {
        buttonsSlideY = buttonsSlideY + 0x20;
    } else {
        clearFlags(2);
        transitionState = 0xa;
    }
}

void LetterWriteMenu::transitionAct0A() {
    Keyboard_Reload(&keyboard, 6);
    Gfx2d_SetLayerPriority(6, 1);
    beginSubSlideIn(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setupDialogButtons();
    setFlags(1);
    keyboardSlideY = (u8 *)getSlideOffsetY();
    transitionState = 0xb;
}

void LetterWriteMenu::transitionAct0B() {
    if (stepSlideIn(0)) {
        resetTextCursor();
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, 0);
    keyboardSlideY = (u8 *)getSlideOffsetY();
}

void LetterWriteMenu::transitionAct0C() {
    addresseePage = 0;
    PopupChoice_LoadChoiceBg(&addresseeMenu);
    func_ov122_02296a7c(1);
    setPhase(2);
}

void LetterWriteMenu::transitionAct0D() {
    if (isScrolling() == 0) {
        beginSubSlideOut(0xb, 0, 0, 0x30);
        applySlideOffset(6, 0, 0);
        applySlideOffset(4, 0, 0);
        applySlideOffset(3, 0, 0);
        setTransitionState(0xe);
    }
}

void LetterWriteMenu::transitionAct0E() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(3);
        setPhase(5);
    } else {
        applySlideOffset(6, 0, 0);
        applySlideOffset(4, 0, 0);
        applySlideOffset(3, 0, 0);
        keyboardSlideY = (u8 *)getSlideOffsetY();
        buttonsSlideY = (s32)keyboardSlideY;
    }
}

void LetterWriteMenu::init() {
    letter = (u8 *)MenuCtrl_GetArg();
    Keyboard_Init(&keyboard, 1);
    _ZN14LetterRenderer8setLayerEi(&renderer, 3);
    _ZN14LetterRenderer17loadRecipientNameEPv(&renderer, (u32)letter);
    setScroll(0x10);
    setScrollTarget(0x10);
    flags = 0;
    _ZN10ScrollKnob8setStateEi(&scrollKnob, 1);
    _ZN15PopupChoiceMenu4initEiiPKc(&addresseeMenu, 6, 1, 0);
    _ZN19PopupChoiceMenuBody18buildAddresseeListEv(&addresseeMenu);
    lengthGauge = 0;
    if (Letter_IsBottle(letter)) {
        Keyboard_SetAltWriteLayout(&keyboard);
        setFlags(0x10);
    }
}

void LetterWriteMenu::releaseResources() {
    Keyboard_Shutdown(&keyboard);
    _ZN14LetterRenderer7releaseEv(&renderer);
    PopupChoice_ForceClose(&addresseeMenu);
    _ZN17MenuBottomButtons9freeTextsEv(&bottomButtons);
}

void LetterWriteMenu::preInputUpdate() {
    preStateUpdate();
    scrollKnob.vfunc_0c();
    cursor.vfunc_0c();
}

void LetterWriteMenu::postInputUpdate() {
    _ZN14LetterRenderer6redrawEv(&renderer);
    Keyboard_EndFrame(&keyboard, 6);
    PopupChoice_Update(&addresseeMenu);
    postStateUpdate();
}

void LetterWriteMenu::preStateUpdate() { _ZN17MenuBottomButtons9freeTextsEv(&bottomButtons); }

void LetterWriteMenu::postStateUpdate() {
    if (testFlags(0x1000)) {
        u32 n = getFieldCapacity();
        lengthGauge = Text_GetLength(getFieldBuffer(), n) * 0x1f / (s32)n;
        if (lengthGauge > 0x1f) {
            lengthGauge = 0x1f;
        }
        clearFlags(0x1000);
    }
}

extern "C" void LetterWriteMenu_SetupBgLayers() {
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 3);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 3);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void LetterWriteMenu::loadBg() {
    u32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/chat2/b_cht_bg.bpl", h, 6, 1, 1, 9);
    Keyboard_LoadScreenFile(&keyboard, "menu/chat2/b_key0.bsc");
    refreshKeys();
    Keyboard_LoadScreenNow(&keyboard, 6);
    Gfx2d_LoadCharFile("menu/chat2/b_cht.bch", h, 6, 0x13d, 0x13d, 0x1e9);
    Menu_LoadPaperBg(Letter_GetPaper(letter), 4);
    _ZN14LetterRenderer16loadLetterScreenEj(&renderer, 3);
    redrawText(1, 1);
    _ZN14LetterRenderer6redrawEv(&renderer);
}

void LetterWriteMenu::loadKeyboardObjGfx() { Keyboard_LoadObjGfx(&keyboard); }

void LetterWriteMenu::setupDialogButtons() {
    if (testFlags(0x10)) {
        _ZN17MenuBottomButtons16setLayoutConfirmEv(&bottomButtons);
    } else {
        _ZN17MenuBottomButtons24setLayoutChangeAddresseeEv(&bottomButtons);
    }
}

void LetterWriteMenu::showFinishDialog() {
    _ZN21MenuBottomButtonsBody16setLayoutYesNo07Ei(&bottomButtons, 0x22);
    _ZN21MenuBottomButtonsBody15showTitleLayer2Ev(&bottomButtons);
}

void LetterWriteMenu::redrawText(u32 a, u32 b) {
    u32 lo;
    u32 n;
    u32 flag;
    setFlags(0x1000);
    if (a != 0) {
        _ZN14LetterRenderer11setGreetingEP16Unk_0206d1d4_SrcPh(&renderer, letter, encodedText.unk_90);
        _ZN14LetterRenderer7setBodyEPhi(&renderer, letter + 0x4c, b);
        _ZN14LetterRenderer12setSignatureEPh(&renderer, letter + 0xcc);
    } else {
        switch (editPart) {
        case 0:
        case 1:
            _ZN14LetterRenderer11setGreetingEP16Unk_0206d1d4_SrcPh(&renderer, letter, encodedText.unk_90);
            break;
        case 2:
            _ZN14LetterRenderer7setBodyEPhi(&renderer, letter + 0x4c, b);
            break;
        case 3:
            _ZN14LetterRenderer12setSignatureEPh(&renderer, letter + 0xcc);
            break;
        }
    }
    if (hasSelection()) {
        flag = 0;
        u32 y = selectionEnd;
        u32 x = selectionStart;
        if (x > y) {
            lo = y;
            n = x - y;
        } else {
            lo = x;
            n = y - x;
        }
    } else {
        flag = 1;
        n = Keyboard_GetTypedRunLength(&keyboard);
        if (n != 0) {
            lo = caretIndex - n;
        }
    }
    if (n != 0) {
        switch (editPart) {
        case 0:
            _ZN14LetterRenderer17highlightGreetingEjj(&renderer, lo, n, flag);
            break;
        case 1:
            lo += letter[0xec] + _ZN14LetterRenderer22getRecipientNameLengthEv(&renderer);
            _ZN14LetterRenderer17highlightGreetingEjj(&renderer, lo, n, flag);
            break;
        case 2:
            _ZN12LetterLayout18highlightBodyRangeEjjj(&renderer, lo, n, flag);
            break;
        case 3:
            LetterLayout_HighlightSignature(&renderer, lo, n, flag);
            break;
        }
    }
    refreshKeys();
}

void LetterWriteMenu::refreshKeys() {
    if (editPart == 2) {
        u8 c = caretIndex;
        if (Keyboard_InsertCharMultiline(&keyboard, letter + 0x4c, 0x86, &c, 0x80, 0x28, 4, 0x96, 1, 1)) {
            Keyboard_EnableKey(&keyboard, 0);
        } else {
            Keyboard_DisableKey(&keyboard, 0);
        }
    } else {
        Keyboard_DisableKey(&keyboard, 0);
    }
    if (hasSelection()) {
        Keyboard_EnableKey(&keyboard, 0xb);
    } else {
        Keyboard_DisableKey(&keyboard, 0xb);
    }
    if (testFlags(0x400)) {
        Keyboard_EnableKey(&keyboard, 0xc);
    } else {
        Keyboard_DisableKey(&keyboard, 0xc);
    }
    if (hasSelection()) {
        Keyboard_DisableModifierKeys(&keyboard);
        Keyboard_EnableKey(&keyboard, 6);
    } else if (caretIndex == 0) {
        Keyboard_DisableModifierKeys(&keyboard);
    } else {
        Keyboard_UpdateModifierKeys(&keyboard, getCharBeforeCursor());
    }
}

void C::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    BOOL hit = FALSE;
    if (Keyboard_UpdatePressedKey(&keyboard)) {
        hit = TRUE;
    }
    if (Unk_ov122_02298b70_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY;
        if (_ZN21MenuBottomButtonsBody9isTouchedEi(&bottomButtons, 9)) {
            askFinish();
            return;
        }
        if (!testFlags(0x10)) {
            if (_ZN21MenuBottomButtonsBody9isTouchedEi(&bottomButtons, 0)) {
                askOpenList();
                return;
            }
        }
        if (Keyboard_TouchPageTab(&keyboard)) {
            Keyboard_SetMode(&keyboard, 8, 6, 1);
            redrawText(0, 1);
            return;
        }
        if (y < 0x48) {
            if (x < 0xe0) {
                if (touchTextArea()) {
                    setMainState(3);
                    Keyboard_ResetTypedRun(&keyboard);
                    redrawText(1, 1);
                    return;
                }
            } else {
                if (touchScrollKnob()) {
                    _ZN14MenuScrollKnob4grabEv(&scrollKnob);
                    setMainState(2);
                    clearSelection();
                    redrawText(1, 1);
                    return;
                }
            }
        }
        if (y >= 0x48) {
            if (!hit) {
                s32 r = touchKey();
                if (r == 0) {
                } else if (r == 1) {
                    setMainState(1);
                }
            }
        }
    }
}

void C::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(0);
    } else if (Keyboard_TickKeyRepeat(&keyboard)) {
        s32 t = Keyboard_GetPressedKey(&keyboard);
        s32 h = Keyboard_GetKeyCode(&keyboard, t, 8);
        pressKeyCode(h);
        Keyboard_HighlightKey(&keyboard, t);
    }
}

void C::mainAct02() {
    caretBlinkTimer = 0;
    if (gTouchHeld == 0) {
        endTouch();
        _ZN14MenuScrollKnob7releaseEv(&scrollKnob);
        startTouchInput();
    } else {
        dragScrollKnob();
    }
}

void C::mainAct03() {
    BOOL r;
    if (gTouchHeld == 0) {
        setMainState(0);
        if (selectionStart == selectionEnd) {
            clearFlags(8);
        }
        r = TRUE;
    } else {
        r = dragSelection();
        if (r) {
            Snd_PlaySe(0x15);
        }
    }
    if (r) {
        scrollToCaret();
        redrawText(0, 1);
    }
}

void C::mainAct04() {
    if (checkSwitchToButtons(1)) {
        func_ov122_02297940();
    } else if (Unk_ov122_02298b70_Both()) {
        if (_ZN21MenuBottomButtonsBody9isTouchedEi(&bottomButtons, 3)) {
            openDialog(3);
        } else if (_ZN21MenuBottomButtonsBody9isTouchedEi(&bottomButtons, 4)) {
            openDialog(4);
        }
    }
}

void C::mainAct05() {
    if (MenuCtrl_IsForceCloseDue()) {
        setFlags(0x2000);
        func_ov122_02296a48();
    } else if (checkSwitchToButtons(1)) {
        func_ov122_022978c0();
    } else if (Unk_ov122_02298b70_Both()) {
        s32 t = _ZN19PopupChoiceMenuBody10hitTestRowEii(&addresseeMenu, gTouchCurX, gTouchCurY);
        if (t >= 0) {
            PopupChoice_DecideAddressee(&addresseeMenu, t);
            choiceIndex = _ZN19PopupChoiceMenuBody13pickAddresseeEjj(&addresseeMenu, addresseePage, (u8)t);
            setMainState(0x17);
        } else {
            func_ov122_02296a48();
        }
    }
}

s32 C::touchKey() {
    Keyboard_ClearHighlight(&keyboard);
    s32 t = Keyboard_TouchKey(&keyboard, gTouchCurX, gTouchCurY);
    if (t == -1) {
        return 0;
    }
    s32 h = Keyboard_GetKeyCode(&keyboard, t, 8);
    s32 r = pressKeyCode(h);
    Keyboard_HighlightKey(&keyboard, t);
    Keyboard_StartKeyRepeat(&keyboard);
    return r;
}

BOOL C::backspace(BOOL flag) {
    if (hasSelection()) {
        Keyboard_ResetTypedRun(&keyboard);
        Snd_PlaySe(0x35);
    } else {
        u8 a = caretIndex;
        if (a != 0) {
            selectionStart = a;
            selectionEnd = caretIndex - 1;
            Snd_PlaySe(0x35);
        } else {
            u8 *q = getPartText();
            u8 m = editPart;
            if ((m == 0 && letter[0xec] == 0) || (m == 1 && letter[0xec] == 0x18) || q[0] == 0) {
                if (flag) {
                    playErrorSe();
                }
                return FALSE;
            }
            selectionStart = 0;
            selectionEnd = 1;
            Snd_PlaySe(0x35);
        }
    }
    deleteSelection();
    redrawText(0, 1);
    updateCaretPos();
    return TRUE;
}

BOOL C::applyModifierKey(u32 key) {
    u8 *p = (u8 *)getCharBeforeCursor();
    if (p == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        p = Keyboard_ModifyCharKey103(&keyboard, p);
        break;
    case 0x104:
        p = Keyboard_ModifyCharKey104(&keyboard, p);
        break;
    case 0x105:
        p = Keyboard_ModifyCharKey105(&keyboard, p);
        break;
    }
    if (p == 0) {
        return FALSE;
    }
    u8 v = getFieldCursor();
    u8 *q = getFieldBuffer();
    u32 sz = getFieldCapacity();
    if (!Keyboard_ReplaceCharBeforeCursor(&keyboard, q, p, v, sz, 0x2710)) {
        return FALSE;
    }
    redrawText(0, 1);
    updateCaretPos();
    return TRUE;
}

BOOL C::insertCharRaw(u32 a, u32 b) {
    u8 v;
    v = getFieldCursor();
    u8 old = v;
    u8 *p = getFieldBuffer();
    u32 sz = getFieldCapacity();
    if (editPart == 2) {
        if (Keyboard_InsertCharMultiline(&keyboard, p, a, &v, 0x80, 0x28, 4, 0x96, 0, b)) {
            setCursorIndex(v);
            goto ok;
        }
        return FALSE;
    }
    s32 h = 0xa0;
    if (editPart != 3) {
        h = h - 0x40;
    }
    if (Keyboard_InsertChar(&keyboard, p, a, &v, sz, h, 0, 1)) {
        switch (editPart) {
        case 0:
            if (old != v) {
                letter[0xec] = letter[0xec] + v - old;
            }
            break;
        case 1:
            v = v - letter[0xec];
            break;
        }
        setCursorIndex(v);
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL C::insertChar(u32 key) {
    if (hasSelection()) {
        deleteSelection();
        Keyboard_ResetTypedRun(&keyboard);
    }
    BOOL r = insertCharRaw(key, 1);
    redrawText(0, 1);
    updateCaretPos();
    return r;
}

void C::closeKeyboard() {
    transitionState = 4;
    setPhase(1);
    setScrollTarget(0);
    clearFlags(4);
    clearSelection();
    Keyboard_ResetTypedRun(&keyboard);
    redrawText(1, 0);
    hideCursor();
}

void C::askFinish() { openDialog(1); }

void C::askOpenList() { openDialog(0); }

void C::copy() {
    if (hasSelection()) {
        u32 a = selectionEnd;
        u32 b = selectionStart;
        u32 lo, n;
        if (b > a) {
            lo = a;
            n = b - a;
        } else {
            lo = b;
            n = a - b;
        }
        Mem_Clear(encodedText.unk_b8, 0x80);
        Mem_Copy(getPartText() + lo, encodedText.unk_b8, n);
        setFlags(0x400);
        Keyboard_PlayCopySe(&keyboard);
        refreshKeys();
    }
}

void C::paste() {
    if (testFlags(0x400)) {
        if (hasSelection()) {
            deleteSelection();
        }
        Keyboard_ResetTypedRun(&keyboard);
        Keyboard_BeginPaste(&keyboard);
        s32 n = Text_GetLength(encodedText.unk_b8, 0x80);
        s32 i;
        for (i = 0; i < n; i++) {
            if (!insertCharRaw(*((u8 *)this + i + 0x4084), 0)) {
                if (i == 0) {
                    playErrorSe();
                }
                i = n;
            }
        }
        Keyboard_PlayPasteSe(&keyboard);
        redrawText(0, 1);
        updateCaretPos();
        Keyboard_EndPaste(&keyboard);
    }
}

s32 C::pressKeyCode(s32 key) {
    s32 r = 1;
    s32 t = Keyboard_HandleModeKey(&keyboard, key, 6);
    if (t != 0) {
        redrawText(0, r);
        return t;
    }
    if (Keyboard_IsControlCode(&keyboard, key)) {
        switch (key) {
        case 0x100:
            backspace(r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!applyModifierKey(key)) {
                playErrorSe();
            }
            r = 2;
            break;
        case 0x113:
            askFinish();
            r = 3;
            break;
        case 0x114:
            askOpenList();
            r = 3;
            break;
        case 0x118:
            copy();
            r = 2;
            break;
        case 0x119:
            paste();
            r = 2;
            break;
        }
    } else {
        BOOL ok = insertChar((u8)key);
        if (Keyboard_IsFull(&keyboard)) {
            showMessage(0x1c, r);
            return 4;
        }
        if (Keyboard_IsTooWide(&keyboard)) {
            showMessage(0x1c, r);
            return 4;
        }
        if (!ok) {
            playErrorSe();
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

void C::mainAct06() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    u8 b = takeRepeatedKeys();
    if (testFlags(0x10) == 1) {
        if (Keyboard_PressCursorKey(&keyboard) == 0xd6) {
            if (isRepeatLeft()) {
                b &= ~0x20;
            }
        }
    }
    switch (Keyboard_MoveCursor(&keyboard, b)) {
    case 1:
        _ZN10MenuCursor14switchToAnim01Ev(&cursor);
        moveCursorToTarget();
        break;
    case 2:
        _ZN10MenuCursor14switchToAnim0DEv(&cursor);
        moveCursorToTarget();
        break;
    case 3:
        _ZN10MenuCursor14switchToAnim07Ev(&cursor);
        moveCursorToTarget();
        break;
    case 0:
    default:
        if (tryPressKey()) return;
        if (tryBackspaceButton()) return;
        if (toggleTextFocus()) return;
        if (tryCopyButton()) return;
        if (tryPasteButton()) return;
        if (tryStartFinish()) return;
        break;
    }
}

void LetterWriteMenu::mainAct07()
{
    if (!_ZN14MenuCursorBase8isMovingEv(&cursor)) {
        setMainState(returnState);
        runMainState();
    }
}

void LetterWriteMenu::mainAct08()
{
    s32 r4;
    s32 t;
    s32 r;

    if (!_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        return;
    }
    r4 = Keyboard_PressCursorKey(&keyboard);
    t = Keyboard_GetKeyCode(&keyboard, r4, 8);
    if (t == 0x112) {
        setMainState(0x10);
        _ZN14MenuScrollKnob4grabEv(&scrollKnob);
        Menu_PlayScrollGrabSe(&scrollKnob);
        if (hasSelection()) {
            clearSelection();
            redrawText(1, 1);
        } else {
            clearSelection();
        }
        setFlags(0x200);
        return;
    }
    r = pressKeyCode(t);
    if (r == 1 && (gPad[0] & 1)) {
        Keyboard_StartKeyRepeat(&keyboard);
        setMainState(9);
        Keyboard_HighlightKey(&keyboard, r4);
    } else if (r == 3) {
    } else if (r == 4) {
        Keyboard_ClearHighlight(&keyboard);
    } else {
        releaseCursor();
    }
}

void LetterWriteMenu::mainAct09()
{
    s32 r5;

    if ((gPad[0] & 1) == 0) {
        releaseCursor();
    } else if (Keyboard_TickKeyRepeat(&keyboard)) {
        r5 = Keyboard_GetPressedKey(&keyboard);
        pressKeyCode(Keyboard_GetKeyCode(&keyboard, r5, 8));
        Keyboard_HighlightKey(&keyboard, r5);
    }
}

void LetterWriteMenu::mainAct0A()
{
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        refreshCursor();
        setMainState(6);
    }
}

void LetterWriteMenu::mainAct0B()
{
    if ((gPad[0] & 2) == 0) {
        setMainState(returnState);
    } else if (Keyboard_TickKeyRepeat(&keyboard)) {
        pressKeyCode(0x100);
        if (testFlags(0x100)) {
            snapCursor();
        }
    }
}

void LetterWriteMenu::mainAct0C()
{
    u32 a;
    u32 b;
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    if (navigateText((void *)takeRepeatedKeys(), 1)) {
        if (Keyboard_GetTypedRunLength(&keyboard) || hasSelection()) {
            Keyboard_ResetTypedRun(&keyboard);
            clearSelection();
            redrawText(1, 1);
        } else {
            clearSelection();
        }
        updateCaretPos();
        snapCursor();
        refreshKeys();
        Snd_PlaySe(0xb);
    } else if (!toggleTextFocus()) {
        a = caretX;
        b = caretY;
        if (tryBackspaceButton()) {
            if (a != caretX || b != caretY) {
                snapCursor();
            }
        } else {
            if (gPad[1] & 1) {
                setMainState(0xd);
                setFlags(8);
                selectionStart = caretIndex;
                selectionEnd = caretIndex;
            }
            if (tryCopyButton()) {
                return;
            }
            if (tryPasteButton()) {
                return;
            }
            if (tryStartFinish()) {
                return;
            }
        }
    }
}

void LetterWriteMenu::mainAct0D()
{
    if ((gPad[0] & 1) == 0) {
        setMainState(0xc);
        if (selectionStart == selectionEnd) {
            clearFlags(8);
        }
    } else {
        if (navigateText((void *)takeRepeatedKeys(), 0)) {
            selectionEnd = caretIndex;
            redrawText(0, 1);
            updateCaretPos();
            snapCursor();
            Snd_PlaySe(0x15);
        }
    }
}

void LetterWriteMenu::mainAct0E()
{
    if ((gPad[0] & 0x200) == 0) {
        setMainState(returnState);
        refreshKeys();
    }
}

void LetterWriteMenu::mainAct0F()
{
    if ((gPad[0] & 0x100) == 0) {
        setMainState(returnState);
        refreshKeys();
    }
}

void LetterWriteMenu::mainAct10()
{
    if (_ZN10ScrollKnob12areAnimsDoneEv(&scrollKnob)) {
        setMainState(0x11);
    }
}

void LetterWriteMenu::mainAct11()
{
    if ((gPad[0] & 1) == 0) {
        _ZN14MenuScrollKnob7releaseEv(&scrollKnob);
        setMainState(0x12);
        endTouch();
    } else {
        scrollByPad();
    }
}

void LetterWriteMenu::mainAct12()
{
    if (_ZN10ScrollKnob12areAnimsDoneEv(&scrollKnob)) {
        releaseCursor();
        clearFlags(0x200);
    }
}

void LetterWriteMenu::mainAct13()
{
    s32 r4;
    s32 r6;
    s32 r5;
    u32 f;

    if (checkSwitchToTouch()) {
        func_ov122_02297994();
        return;
    }
    r4 = takeRepeatedKeys();
    if (gPad[1] & 1) {
        switch (choiceIndex) {
        case 0:
            openDialog(3);
            break;
        case 1:
            openDialog(4);
            break;
        }
        _ZN10MenuCursor12setPosePressEv(&cursor);
        return;
    }
    r6 = choiceIndex;
    if (MenuKeys_HasLeft((void *)r4)) {
        if (choiceIndex != 0) {
            choiceIndex = *(volatile u8 *)&choiceIndex - 1;
        }
    } else if (MenuKeys_HasRight((void *)r4)) {
        if (choiceIndex < 1) {
            choiceIndex = *(volatile u8 *)&choiceIndex + 1;
        }
    }
    r4 = choiceIndex;
    if (r6 != r4) {
        r6 = _ZN21MenuBottomButtonsBody10getTargetXEi(&bottomButtons, data_ov122_0229a004[r4]);
        r5 = _ZN21MenuBottomButtonsBody10getTargetYEi(&bottomButtons, *(u8 *)((u32)data_ov122_0229a004 + r4));
        moveCursorTo(r6, r5);
    } else {
        f = gPad[1];
        if (f & 8) {
            hideCursor();
            openDialog(3);
        } else if (f & 2) {
            hideCursor();
            openDialog(4);
        }
    }
}

void LetterWriteMenu::mainAct14()
{
    u32 f;

    if (MenuCtrl_IsForceCloseDue()) {
        setFlags(0x2000);
        func_ov122_02296a48();
    } else if (checkSwitchToTouch()) {
        func_ov122_02297928();
    } else {
        if (PopupChoice_MoveCursor(&addresseeMenu, takeRepeatedKeys(), &choiceIndex, 0)) {
            func_ov122_02296aa4();
        }
        f = gPad[1];
        if (f & 1) {
            _ZN10MenuCursor12setPosePressEv(&cursor);
            setMainState(0x15);
        } else if (f & 2) {
            func_ov122_02296a48();
        }
    }
}

void LetterWriteMenu::mainAct15()
{
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        PopupChoice_DecideAddressee(&addresseeMenu, choiceIndex);
        choiceIndex = _ZN19PopupChoiceMenuBody13pickAddresseeEjj(&addresseeMenu, addresseePage, choiceIndex);
        setMainState(0x17);
    }
}

void LetterWriteMenu::mainAct16()
{
    if (_ZN19PopupChoiceMenuBody6isOpenEv(&addresseeMenu)) {
        if (MenuCtrl_IsButtons()) {
            func_ov122_022978c0();
        } else {
            func_ov122_02297928();
        }
    }
}

void LetterWriteMenu::mainAct17()
{
    if (PopupChoice_TickDecideDelay(&addresseeMenu)) {
        PopupChoice_Close(&addresseeMenu, 0);
        setMainState(0x18);
        hideCursor();
    }
}

void LetterWriteMenu::mainAct18()
{
    s32 r;

    if (!_ZN19PopupChoiceMenuBody8isClosedEv(&addresseeMenu)) {
        return;
    }
    r = _ZN19PopupChoiceMenuBody14applyAddresseeEPvj(&addresseeMenu, (u32)letter, choiceIndex);
    switch (r) {
    case 1:
        _ZN14LetterRenderer17loadRecipientNameEPv(&renderer, (u32)letter);
        redrawText(1, 0);
        transitionState = 0xa;
        setPhase(1);
        break;
    case 2:
        addresseePage = addresseePage + 1;
        if (addresseePage >= _ZN19PopupChoiceMenuBody12getPageCountEv(&addresseeMenu)) {
            addresseePage = 0;
        }
        func_ov122_02296a7c(0);
        break;
    case 3:
        if (testFlags(0x2000)) {
            forceClose();
        } else {
            transitionState = 0xa;
            setPhase(1);
        }
        break;
    default:
        transitionState = 0xa;
        setPhase(1);
        break;
    }
}

void LetterWriteMenu::mainAct19()
{
    s32 a;
    s32 b;
    s32 c;

    if (_ZN10HandCursor7getAnimEv(&cursor)) {
        if (!_ZN10HandCursor10isAnimDoneEv(&cursor)) {
            return;
        }
    }
    if (_ZN21MenuBottomButtonsBody9stepPressEv(&bottomButtons)) {
        if (!_ZN10HandCursor7getAnimEv(&cursor)) {
            return;
        }
        a = _ZN21MenuBottomButtonsBody14getPressOffsetEv(&bottomButtons);
        b = _ZN21MenuBottomButtonsBody10getTargetXEi(&bottomButtons, -1);
        c = _ZN21MenuBottomButtonsBody10getTargetYEi(&bottomButtons, -1);
        _ZN14MenuCursorBase6warpToEii(&cursor, a + b, a + c);
        return;
    }
    switch (dialogId) {
    case 0:
        nextTransitionState = 0xc;
        closeKeyboard();
        break;
    case 1:
        nextTransitionState = 6;
        censorLetter();
        closeKeyboard();
        break;
    case 2:
        break;
    case 3:
        requestTab(0);
        break;
    case 4:
        transitionState = 8;
        setPhase(1);
        redrawText(1, 1);
        break;
    }
    hideCursor();
}

void LetterWriteMenu::mainAct1A()
{
    Keyboard_UpdatePressedKey(&keyboard);
    if (_ZN16MenuErrorMessage6updateEi(&errorMessage, 1)) {
        resumeInput();
    }
}

BOOL LetterWriteMenu::tryPressKey()
{
    s32 r4;

    if ((gPad[1] & 1) == 0) {
        return FALSE;
    }
    r4 = Keyboard_PressCursorKey(&keyboard);
    if (r4 == -1) {
        return FALSE;
    }
    Keyboard_GetKeyCode(&keyboard, r4, 8);
    Keyboard_HighlightKey(&keyboard, r4);
    pressCursor();
    return TRUE;
}

BOOL LetterWriteMenu::tryBackspaceButton()
{
    if ((gPad[0] & 2) == 0) {
        return FALSE;
    }
    pressKeyCode(0x100);
    Keyboard_StartKeyRepeat(&keyboard);
    returnState = mainState;
    setMainState(0xb);
    return TRUE;
}

BOOL C::toggleTextFocus() {
    if ((gPad[1] & 0x800) == 0) return FALSE;
    if (testFlags(0x100)) {
        clearFlags(0x100);
    } else {
        setFlags(0x100);
        scrollToCaret();
    }
    if (Keyboard_IsOnButtonKey(&keyboard, -1)) {
        if (testFlags(0x100)) {
            _ZN10MenuCursor14switchToAnim01Ev(&cursor);
            setMainState(0xc);
        } else {
            _ZN10MenuCursor14switchToAnim07Ev(&cursor);
            setMainState(6);
        }
        moveCursorToTarget();
    } else {
        moveCursorToTarget();
    }
    return TRUE;
}

BOOL C::tryPasteButton() {
    if ((gPad[1] & 0x100) == 0) return FALSE;
    if (Keyboard_IsSlotDisabled(&keyboard, 0xc)) return FALSE;
    pressKeyCode(0x119);
    Keyboard_HighlightKey(&keyboard, 0xdc);
    snapCursor();
    returnState = mainState;
    setMainState(0xf);
    return TRUE;
}

BOOL C::tryCopyButton() {
    if ((gPad[1] & 0x200) == 0) return FALSE;
    if (Keyboard_IsSlotDisabled(&keyboard, 0xb)) return FALSE;
    pressKeyCode(0x118);
    Keyboard_HighlightKey(&keyboard, 0xdb);
    returnState = mainState;
    setMainState(0xe);
    return TRUE;
}

BOOL C::tryStartFinish() {
    if ((gPad[1] & 8) == 0) return FALSE;
    hideCursor();
    askFinish();
    return TRUE;
}

void C::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void C::startButtonInput() {
    restartKeyRepeat();
    showCursor();
    setMainState(6);
}

void C::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void C::showMessage(u8 a, s32 b) {
    volatile u8 buf[1];
    buf[0] = gU8None;
    buf[0] = a;
    _ZN16MenuErrorMessage8openHighEPhij(&errorMessage, (void *)buf, b, 0);
    setMainState(0x1a);
    hideCursor();
}

void C::func_ov122_02297994() {
    hideCursor();
    setMainState(4);
}

void C::func_ov122_02297940() {
    restartKeyRepeat();
    showCursor();
    s32 a = _ZN21MenuBottomButtonsBody10getTargetXEi(&bottomButtons, 4);
    s32 b = _ZN21MenuBottomButtonsBody10getTargetYEi(&bottomButtons, 4);
    _ZN14MenuCursorBase6warpToEii(&cursor, a, b);
    choiceIndex = 1;
    setMainState(0x13);
}

void C::func_ov122_02297928() {
    hideCursor();
    setMainState(5);
}

void C::func_ov122_022978c0() {
    restartKeyRepeat();
    showCursor();
    choiceIndex = _ZN19PopupChoiceMenuBody11getRowCountEv(&addresseeMenu) - 1;
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(&addresseeMenu);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(&addresseeMenu, choiceIndex);
    _ZN14MenuCursorBase6warpToEii(&cursor, a, b);
    _ZN10MenuCursor16setAnimIfChangedEi(&cursor, 7);
    setMainState(0x14);
}

void C::resetTextCursor() {
    setFlags(4);
    caretX = 0x30;
    caretY = 0x40;
    editPart = 2;
    setFlags(0x1000);
    setCursorIndex(0);
    clearSelection();
    Keyboard_ResetKeyPalettes(&keyboard);
    refreshKeys();
}

void C::moveCaretToGreeting() {
    u8 r = hitTestGreeting(caretX, &editPart);
    setFlags(0x1000);
    setCursorIndex(r);
    updateCaretPosGreeting();
}

u8 C::hitTestGreeting(s32 a, u8 *p) {
    u8 out;
    Keyboard_HitTestText(&keyboard, encodedText.unk_90, 0x28, 0xa0, (u8)(a - 0x30), &out);
    s32 e = letter[0xec];
    s32 s = e + _ZN14LetterRenderer22getRecipientNameLengthEv(&renderer);
    s32 h = (e + s) >> 1;
    if (out < h) {
        *p = 0;
        if (out > e) out = e;
    } else {
        *p = 1;
        if (out < s) out = 0;
        else out = out - s;
    }
    return out;
}

void C::moveCaretToBody(s32 flag) {
    editPart = 2;
    setFlags(0x1000);
    if (caretY < 0x40) caretY = 0x40;
    if (caretY >= 0x80) caretY = 0x7f;
    s32 i = (caretY - 0x40) >> 4;
    s32 m = _ZN12LetterLayout16getBodyLineCountEv(&renderer);
    if (i > m) i = m;
    else flag = 0;
    caretY = i * 16 + 0x40;
    if (flag != 0 && caretY - scrollY < 8) {
        moveCaretToSignature();
    } else {
        u8 r = hitTestBodyLine(i, (u32 *)&caretX);
        setCursorIndex(r);
    }
}

u8 C::hitTestBodyLine(s32 idx, u32 *p) {
    s32 o = _ZN12LetterLayout17getBodyLineStartsEv(&renderer)[idx];
    u8 out;
    s32 t = Keyboard_HitTestText(&keyboard, letter + 0x4c + o, 0x28, 0x96, (u8)(*p - 0x30), &out);
    *p = t + 0x30;
    return (u8)(out + o);
}

void C::moveCaretToSignature() {
    editPart = 3;
    setFlags(0x1000);
    caretY = 0x88;
    u8 r = hitTestSignature((u32 *)&caretX);
    setCursorIndex(r);
}

u8 C::hitTestSignature(u32 *p) {
    u8 v = (u8)(*p - 0x30);
    s32 r4 = 0xa0 - Text_MeasureWidth(letter + 0xcc, 0x20);
    u8 out;
    if (r4 > v) {
        out = 0;
        *p = r4 + 0x30;
    } else {
        s32 t = Keyboard_HitTestText(&keyboard, letter + 0xcc, 0x20, 0xa0, (u8)(v - r4), &out);
        *p = r4 + (t + 0x30);
    }
    return out;
}

BOOL C::touchTextArea() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    if (y < 0) return FALSE;
    if (y > 0x4f) y = 0x4f;
    y += scrollTargetY;
    if (x < 0x20 || x >= 0xe0) return FALSE;
    if (x < 0x30) x = 0x30;
    setCaretFromPoint(x, y, 1);
    setFlags(8);
    selectionStart = caretIndex;
    selectionEnd = caretIndex;
    return TRUE;
}

void C::endTouch() {
}

BOOL C::dragSelection() {
    s32 a = gTouchCurX;
    s32 b = gTouchCurY;
    u8 old = caretIndex;
    if (a < 0x30) a = 0x30;
    b += scrollTargetY;
    u8 m = editPart;
    switch (m) {
    case 0:
    case 1:
        caretX = a;
        moveCaretToGreeting();
        if (editPart != m) {
            editPart = m;
            setFlags(0x1000);
            if (m == 0) {
                setCursorIndex(letter[0xec]);
            } else {
                setCursorIndex(0);
            }
            updateCaretPosGreeting();
        }
        break;
    case 2:
        caretX = a;
        caretY = b;
        moveCaretToBody(0);
        break;
    case 3:
        caretX = a;
        moveCaretToSignature();
        break;
    }
    selectionEnd = caretIndex;
    if (caretIndex != old) return TRUE;
    return FALSE;
}

void C::setCaretFromPoint(s32 a, s32 b, s32 c) {
    if (!testFlags(0x10) && b < 0x3c) {
        caretX = a;
        moveCaretToGreeting();
    } else if (b < 0x84) {
        if (b < 0x40) b = 0x40;
        else if (b >= 0x80) b = 0x7f;
        caretX = a;
        caretY = b;
        moveCaretToBody(c);
    } else {
        caretX = a;
        moveCaretToSignature();
    }
    scrollToCaret();
}

void C::updateCaretPosGreeting() {
    u32 v = caretIndex;
    if (editPart == 1) {
        s32 t = _ZN14LetterRenderer22getRecipientNameLengthEv(&renderer);
        v += letter[0xec] + t;
    }
    caretX = (u8)(Text_MeasureWidth(encodedText.unk_90, v) + 0x30);
    caretY = 0x28;
}

void C::updateCaretPosBody() {
    s32 t = _ZN12LetterLayout16getBodyLineOfPosEi(&renderer, caretIndex);
    caretY = t * 16 + 0x40;
    s32 o = _ZN12LetterLayout17getBodyLineStartsEv(&renderer)[t];
    caretX = (u8)(Text_MeasureWidth(letter + 0x4c + o, caretIndex - o) + 0x30);
}

void C::updateCaretPosSignature() {
    u8 t = (u8)(Text_MeasureWidth(letter + 0xcc, caretIndex) + 0x30);
    caretX = t;
    caretX = caretX + (0xa0 - Text_MeasureWidth(letter + 0xcc, 0x20));
    caretY = 0x88;
}

void C::updateCaretPos() {
    switch (editPart) {
    case 0:
    case 1:
        updateCaretPosGreeting();
        break;
    case 2:
        updateCaretPosBody();
        break;
    case 3:
        updateCaretPosSignature();
        break;
    }
    scrollToCaret();
}

u8 C::getCharBeforeCursor() {
    if (caretIndex == 0) return 0;
    return getPartText()[caretIndex - 1];
}

BOOL C::hasSelection() {
    if (!testFlags(8) || selectionStart == selectionEnd) return FALSE;
    return TRUE;
}

void C::clearSelection() {
    selectionStart = 0;
    selectionEnd = 0;
    clearFlags(8);
}

void C::deleteSelection() {
    u32 a = selectionEnd;
    u32 b = selectionStart;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    u8 *p = getFieldBuffer();
    s32 q = getFieldCapacity();
    switch (editPart) {
    case 0:
        letter[0xec] = letter[0xec] - (hi - lo);
        break;
    case 1: {
        u32 o = letter[0xec];
        lo += o;
        hi += o;
        break;
    }
    }
    u8 r = (u8)Keyboard_DeleteRange(&keyboard, p, lo, hi, q);
    if (editPart == 1) {
        r = (u8)(r - letter[0xec]);
    }
    setCursorIndex(r);
    clearSelection();
}

BOOL LetterWriteMenu::navigateText(void *pad, s32 flag) {
    if (pad == 0) {
        return FALSE;
    }
    u8 mode = editPart;
    u8 idx = caretIndex;
    s32 cnt = _ZN12LetterLayout16getBodyLineCountEv(&renderer);
    s32 lim;
    s32 sel;
    s32 n;
    u32 saved;
    switch (mode) {
    case 0:
    case 1:
        sel = -1;
        lim = sel;
        if (MenuKeys_HasDown(pad)) {
            sel = 0;
        }
        break;
    case 2:
        sel = (caretY - 0x40) >> 4;
        lim = sel;
        if (MenuKeys_HasUp(pad)) {
            sel = sel - 1;
        } else if (MenuKeys_HasDown(pad)) {
            sel = sel + 1;
            if (sel > cnt) {
                sel = 4;
            }
        }
        break;
    case 3:
        sel = 4;
        lim = sel;
        if (MenuKeys_HasUp(pad)) {
            sel = sel - 1;
        }
        break;
    default:
        sel = 0;
        lim = sel;
        break;
    }
    saved = caretX;
    if (testFlags(0x10)) {
        if (sel == -1) {
            sel = 0;
        }
    }
    if (sel != lim) {
        if (sel == -1) {
            idx = hitTestGreeting(saved, &mode);
        } else if (sel >= 4) {
            mode = 3;
            idx = hitTestSignature(&saved);
        } else {
            mode = 2;
            idx = hitTestBodyLine(sel, &saved);
        }
    }
    if (MenuKeys_HasLeft(pad)) {
        if (idx != 0) {
            idx = idx - 1;
        } else if (mode == 1) {
            idx = letter[0xec];
            mode = 0;
        }
    } else if (MenuKeys_HasRight(pad)) {
        switch (mode) {
        case 0:
            n = letter[0xec];
            break;
        case 1:
            n = Text_GetLength(letter + 0x34, 0x18) - letter[0xec];
            break;
        case 2:
            n = Text_GetLength(letter + 0x4c, 0x80);
            break;
        case 3:
            n = Text_GetLength(letter + 0xcc, 0x20);
            break;
        }
        if (idx + 1 <= n) {
            idx = idx + 1;
        } else if (mode == 0) {
            idx = 0;
            mode = 1;
        }
    }
    if (mode != editPart && flag == 0) {
        return FALSE;
    }
    if (mode == editPart && idx == caretIndex) {
        return FALSE;
    }
    editPart = mode;
    setFlags(0x1000);
    setCursorIndex(idx);
    return TRUE;
}

u8 *LetterWriteMenu::getPartText() {
    switch (editPart) {
    case 0:
        return letter + 0x34;
    case 1:
        return letter + 0x34 + letter[0xec];
    case 2:
        return letter + 0x4c;
    case 3:
        return letter + 0xcc;
    default:
        return 0;
    }
}

u8 *LetterWriteMenu::getFieldBuffer() {
    switch (editPart) {
    case 0:
    case 1:
        return letter + 0x34;
    case 2:
        return letter + 0x4c;
    case 3:
        return letter + 0xcc;
    default:
        return 0;
    }
}

u32 LetterWriteMenu::getFieldCapacity() {
    switch (editPart) {
    case 0:
    case 1:
        return 0x18;
    case 2:
        return 0x80;
    case 3:
        return 0x20;
    default:
        return 0;
    }
}

u8 LetterWriteMenu::getFieldCursor() {
    if (editPart == 1) {
        return caretIndex + letter[0xec];
    }
    return caretIndex;
}

void LetterWriteMenu::setCursorIndex(u32 v) {
    caretIndex = v;
    caretBlinkTimer = 0x10;
}

BOOL LetterWriteMenu::touchScrollKnob() {
    if (_ZN14MenuScrollKnob7hitTestEii(&scrollKnob, gTouchCurX, gTouchCurY)) {
        dragStartTouchY = gTouchCurY;
        dragStartScrollY = scrollY;
        lastTickScrollY = scrollY;
        return TRUE;
    }
    return FALSE;
}

void LetterWriteMenu::dragScrollKnob() {
    s32 n = dragStartScrollY + (((s32)(gTouchCurY - dragStartTouchY) >> 1) << 2);
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    setScroll(n);
    s32 d = lastTickScrollY - n;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&scrollKnob);
        lastTickScrollY = n;
    }
}

void LetterWriteMenu::scrollByPad() {
    s32 n;
    s32 old = scrollY;
    n = old;
    u32 k = gPad[0];
    if (k & 0x40) {
        n = old - 4;
    } else if (k & 0x80) {
        n = old + 4;
    }
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    if (n != old) {
        Menu_PlayScrollTickSe(&scrollKnob);
    }
    setScroll(n);
}

void LetterWriteMenu::setScroll(s32 v) {
    scrollY = v;
    scrollTargetY = scrollY;
    setFlags(0x800);
}

void LetterWriteMenu::setScrollTarget(s32 v) {
    scrollTargetY = v;
    setFlags(0x800);
}

BOOL LetterWriteMenu::isScrolling() { return testFlags(0x800); }

void LetterWriteMenu::updateScroll() {
    u32 b3 = scrollTargetY;
    u32 b2 = scrollY;
    if (b2 == b3) {
        clearFlags(0x800);
    } else if (b2 < b3) {
        *(volatile u8 *)&scrollY = *(volatile u8 *)&scrollY + 8;
        u32 t3 = *(volatile u8 *)&scrollTargetY;
        if (*(volatile u8 *)&scrollY > t3) {
            scrollY = t3;
        }
    } else if (b2 < 8) {
        scrollY = b3;
    } else {
        *(volatile u8 *)&scrollY = *(volatile u8 *)&scrollY - 8;
        u32 t3 = *(volatile u8 *)&scrollTargetY;
        if (*(volatile u8 *)&scrollY < t3) {
            scrollY = t3;
        }
    }
}

void LetterWriteMenu::scrollToCaret() {
    s32 v = caretY - scrollTargetY;
    if (v < 0x18) {
        setScrollTarget(scrollTargetY - (0x18 - v));
    } else if (v > 0x30) {
        setScrollTarget(scrollTargetY + (v - 0x30));
    }
}

void LetterWriteMenu::playErrorSe() { Snd_PlaySe(0x34); }

void LetterWriteMenu::openDialog(u32 i) {
    _ZN21MenuBottomButtonsBody11setSelectedEh(&bottomButtons, data_ov122_0229a008[i]);
    dialogId = i;
    setMainState(0x19);
    Snd_PlaySe(data_ov122_0229a010[i]);
}

void LetterWriteMenu::showCursor() {
    clearFlags(0x100);
    Keyboard_ResetCursor(&keyboard);
    s32 a = Keyboard_GetCursorX(&keyboard);
    s32 b = Keyboard_GetCursorY(&keyboard);
    _ZN14MenuCursorBase6warpToEii(&cursor, a, b);
    _ZN10MenuCursor16setAnimIfChangedEi(&cursor, 1);
    refreshCursor();
}

void LetterWriteMenu::hideCursor() {
    _ZN10MenuCursor16setAnimIfChangedEi(&cursor, 0);
    cursor.vfunc_0c();
}

void LetterWriteMenu::moveCursorToTarget() {
    if (testFlags(0x100)) {
        _ZN14MenuCursorBase10moveToNearEiiih(&cursor, caretX, caretY - scrollTargetY, 3, 2);
        returnState = 0xc;
    } else {
        s32 a = Keyboard_GetCursorX(&keyboard);
        s32 b = Keyboard_GetCursorY(&keyboard);
        _ZN14MenuCursorBase10moveToNearEiiih(&cursor, a, b, 3, 2);
        returnState = 6;
    }
    setMainState(7);
}

void LetterWriteMenu::moveCursorTo(s32 a, s32 b) {
    _ZN14MenuCursorBase10moveToNearEiiih(&cursor, a, b, 3, 2);
    returnState = mainState;
    setMainState(7);
}

void LetterWriteMenu::snapCursor() {
    if (testFlags(0x100)) {
        _ZN14MenuCursorBase6warpToEii(&cursor, caretX, caretY - scrollTargetY);
    } else {
        s32 a = Keyboard_GetCursorX(&keyboard);
        s32 b = Keyboard_GetCursorY(&keyboard);
        _ZN14MenuCursorBase6warpToEii(&cursor, a, b);
    }
    cursor.vfunc_0c();
}

void LetterWriteMenu::pressCursor() {
    _ZN10MenuCursor12setPosePressEv(&cursor);
    setMainState(8);
}

void LetterWriteMenu::releaseCursor() {
    Keyboard_ClearHighlight(&keyboard);
    _ZN14MenuCursorBase14setPoseReleaseEv(&cursor);
    setMainState(0xa);
}

void LetterWriteMenu::refreshCursor() {
    _ZN14MenuCursorBase11setPoseIdleEv(&cursor);
    cursor.vfunc_0c();
}

void LetterWriteMenu::func_ov122_02296aa4() {
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(&addresseeMenu);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(&addresseeMenu, choiceIndex);
    _ZN14MenuCursorBase12moveToLinearEiii(&cursor, a, b, 2);
    returnState = 0x14;
    setMainState(7);
}

void LetterWriteMenu::func_ov122_02296a7c(u32 a) {
    PopupChoice_OpenAddresseePage(&addresseeMenu, addresseePage, a);
    setMainState(0x16);
}

void LetterWriteMenu::func_ov122_02296a48() {
    Snd_PlaySe(0x28);
    choiceIndex = 0xf;
    PopupChoice_Close(&addresseeMenu, 1);
    setMainState(0x18);
    hideCursor();
}

void LetterWriteMenu::storeLetterDefaults() {
    PlayerData_GetCurrent();
    _ZN10PlayerData12getInventoryEv();
    LetterDefaults_Store(_ZN15PlayerInventory9getUnk988Ev(), letter);
}

void LetterWriteMenu::censorField(u8 *src, u32 n) {
    EncodedString_SetRaw(&encodedText);
    _ZN9MsgString11fromEncodedEP13EncodedStringii(&censorString, &encodedText, 0, 0);
    if (String_CensorTaboo(&censorString)) {
        _ZN13EncodedString13fromMsgStringEP9MsgString(&encodedText, &censorString);
        StrBuf_GetBytes(&encodedText, src, n);
    }
}

void LetterWriteMenu::censorLetter() {
    censorField(letter + 0x34, 0x18);
    censorField(letter + 0xcc, 0x20);
    censorField(letter + 0x4c, 0x80);
}

BOOL LetterWriteMenu::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void LetterWriteMenu::setFlags(u32 mask) { flags = flags | mask; }

void LetterWriteMenu::clearFlags(u32 mask) { flags = flags & ~mask; }

