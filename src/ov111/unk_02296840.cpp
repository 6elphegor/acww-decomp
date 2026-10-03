// ov111: scene overlay (class ChatMenu, vtable 0x02298a48, 0x3e58 bytes): a character/name entry screen.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14
#include "text/Unk_02050288.h"

enum Unk_ov111_022970cc_Status { UNK_OV111_ST_0 = 0, UNK_OV111_ST_1 = 1, UNK_OV111_ST_2 = 2, UNK_OV111_ST_3 = 3 };

class ChatMenu;
typedef ChatMenu S;

class MenuTabBar {
public:
    BOOL isJustOpened();
    void onTabMenuClosed();
    void selectTab(u32 v);
};

class MsgString {
public:
    void fromEncoded(class EncodedString *src, s32 a, s32 b);
};

class PlayerId {
public:
    void getNameString(MsgString *o);
};

class PlayerData {
public:
    void *getPlayerId();
};

class MsgString9B {
public:
    MsgString9B();
    virtual ~MsgString9B();
    u8 pad_04[0x18];
};

extern "C" {
extern u8 data_021edb68;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern u32 gCommManager;
extern u32 gCurrentHeap;
extern u32 sChatSendAnimScreens[];
extern char data_ov111_022989c8[];

void Gfx2d_ShowLayer(s32 v);
void Gfx2d_HideLayer(s32 v);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void Snd_PlaySe(u32 v);
void ChatBalloon_Dismiss(s32 a);
void ChatBalloon_Post(s32 a, void *p, void *q);
void Mem_Clear(void *p, s32 n);
s32 Mem_Copy(void *src, void *dst, s32 n);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
s32 File_LoadAlloc(u32 id, u32 g, s32 a, s32 b);
void MenuCtrl_ClearChatDraft();
void MenuCtrl_SetChatDraft(void *p);
s32 MenuCtrl_GetChatDraft();
s32 MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
void BgScreen_ReplaceRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_020943f8();
void func_020943fc();
void PlayerActor_RequestEmotion(void *p);
void PlayerActor_RequestAct13();
PlayerData *PlayerData_GetCurrent();
void MsgTextLabel_Destroy(void *p);
void *MsgTextLabel_CreateVram(u32 a, u32 b, u32 c);
void String_CensorTaboo(void *p);
void Heap_Free(u32 g, s32 a);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
s32 MI_CpuCopy8(void *src, void *dst, s32 n);
s32 MenuTabBar_NextTab(s32 v);
s32 MenuTabBar_PrevTab(s32 v);
s32 MenuTabBar_HitTestTouch();
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void Keyboard_SelectSendKey(void *p);
void Keyboard_LoadEmotionIcons(void *p);
void Keyboard_PlayPasteSe(void *p);
void Keyboard_PlayCopySe(void *p);
s32 Keyboard_PressCursorKey(void *s);
s32 Keyboard_MoveCursor(void *p, s32 v);
void Keyboard_ResetCursor(void *s);
s32 Keyboard_GetCursorY(void *s);
s32 Keyboard_GetCursorX(void *s);
void Keyboard_SelectMenuTabKey(void *p, s32 v);
void Keyboard_EnterTabRowAtX2(void *p, s32 v);
void Keyboard_DrawLengthGauge(void *p, u32 a, u32 b, u32 c);
void Keyboard_DrawCopyPasteKeysChat(void *p, u32 a, u32 b);
void Keyboard_DrawCaret(void *p, u32 a, u32 b, u32 c);
u32 Keyboard_GetSelectedEmotion(void *p);
void Keyboard_SelectEmotionByCode(void *s, u32 a);
void Keyboard_ClearSelectedEmotion(void *p);
BOOL Keyboard_TouchEmotionKey(void *p);
s32 Keyboard_TouchPageTab(void *p);
BOOL Keyboard_TouchSendKey(void *s);
void Keyboard_DrawSendKey(void *p, u32 a, u32 b, u32 c, u32 d);
void Keyboard_DrawEmotionKeys(void *p, u32 a, u32 b);
void Keyboard_Draw(void *p, u32 a, u32 b, u32 c);
void Keyboard_LoadObjGfx(void *p);
void Keyboard_EndPaste(void *p);
void Keyboard_BeginPaste(void *p);
u32 Keyboard_GetTypedRunLength(void *p);
void Keyboard_ShrinkTypedRun(void *s);
void Keyboard_ResetTypedRun(void *s);
s32 Keyboard_HandleModeKey(void *s, u32 a, u32 b);
u8 Keyboard_HitTestText(void *s, void *buf, u32 a, u32 b, u32 c, void *d);
u32 Keyboard_ModifyCharKey105(void *p, u32 a);
u32 Keyboard_ModifyCharKey104(void *p, u32 a);
u32 Keyboard_ModifyCharKey103(void *p, u32 a);
BOOL Keyboard_ReplaceCharBeforeCursor(void *p, void *q, u32 a, u32 b, u32 c, u32 d);
u32 Keyboard_DeleteRange(void *p, void *q, u32 a, u32 b, u32 c);
BOOL Keyboard_InsertChar(void *p, void *q, u32 a, void *r, u32 b, u32 c, u32 d, u32 e);
BOOL Keyboard_IsControlCode(void *s, u32 a);
void Keyboard_UpdateModifierKeys(void *s, s32 a);
void Keyboard_DisableModifierKeys(void *s);
s32 Keyboard_TickKeyRepeat(void *p);
void Keyboard_StartKeyRepeat(void *s);
s32 Keyboard_UpdatePressedKey(void *p);
void Keyboard_MarkScreenDirty(void *p);
void Keyboard_EndFrame(void *s, s32 a);
void Keyboard_LoadScreenNow(void *p, s32 v);
void Keyboard_LoadScreenFile(void *p, void *q);
void Keyboard_Shutdown(void *p);
void Keyboard_Init(void *p);
s32 Keyboard_SetMode(void *s, s32 a, s32 b, s32 c);
void Keyboard_RestoreLastPage(void *p, s32 v);
s32 Keyboard_GetKeyCode(void *s, s32 a, u32 b);
s32 Keyboard_GetPressedKey(void *p);
s32 Keyboard_TouchKey(void *s, s32 a, s32 b);
void Keyboard_HighlightKey(void *s, s32 i);
s32 Keyboard_ClearHighlight(void *s);
void Keyboard_ResetKeyPalettes(void *p);
BOOL Keyboard_IsTooWide(void *s);
BOOL Keyboard_IsFull(void *s);
void Keyboard_EnableKey(void *s, s32 a);
void Keyboard_DisableKey(void *s, s32 a);
BOOL Keyboard_IsSlotDisabled(void *s, s32 i);
}

// Base class of the 0x22044e4 scene; declaration as in src/ov002/unk_ov002_02200680.cpp (sub-objects opaque)
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
    s32 stepSlideOut(s32 a);
    s32 stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    u32 takeRepeatedKeys();
    s32 checkSwitchToTouch();
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

// Sub-object at +0x3ccc (0x64 bytes, vtable 0x02204614). Its methods are split over two ov002 classes that share
// the object: MenuCursorBase and MenuCursor (called through casts).
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

    /* 0x0c */ u8 unk_0c[0x3f];
};

class MenuCursorBuf0 : public HandCursor {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();

    u8 unk_4b[0x64 - 0x4b];
};

class MenuCursorBase {
public:
    void drawWrapped();
    s32 getScreenX();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

class MenuCursor {
public:
    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void setAnimIfChanged(s32 idx);
};

// Holder at +0x3d30 (0x108 bytes)
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// 0x24-byte objects at +0x23a0
class BgVramTask {
public:
    BgVramTask();
    u32 unk_00[0x24 / 4];
};

// 0x40-byte objects at +0x23e8
class LabelString {
public:
    LabelString();
    ~LabelString();
    u32 unk_00[0x40 / 4];
};

// Sub-object at +0xac (ov095 menu/state struct; methods from ov095)
class Keyboard {
public:
    Keyboard() : unk_22f4(), unk_233c() {}
    ~Keyboard() {}
    u32 unk_00[0x22f4 / 4];
    /* 0x22f4 */ BgVramTask unk_22f4[2];
    /* 0x233c */ LabelString unk_233c[2];
};

// +0x3c68
class ChatBalloonText {
public:
    ChatBalloonText();
    ~ChatBalloonText();
    u32 unk_00[0x34 / 4];
};

// Message buffer (see src/main/unk_0206c714.cpp / src/ov045/unk_02258de0.cpp)
class EncodedString {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    u8 unk_04[10];
};

// vtable 0x02298a30, data at +0xe, 0x20 bytes
class EncodedString32 : public EncodedString {
public:
    EncodedString32() {}
    virtual ~EncodedString32() {}
    virtual u32 capacity();
    virtual u8 *data();

    u8 unk_0e[0x20];
};

typedef void (ChatMenu::*Unk_ov111_02298a48_Fn)();

// Vtable 0x02298a48, size 0x3e58
class ChatMenu : public MenuProc {
public:
    ChatMenu()
        : unk_ac(), unk_3c68(), unk_3c9c(), unk_3ccc(), unk_3d30() {}
    // destructor left implicit

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
    void refreshKeys();
    void endKeyboardFrame();
    void setKeyboardMode(u32 a);
    void returnToKeyNav();
    void releaseCursor();
    void pressCursor();
    void snapCursor();
    void moveCursorToTarget();
    void hideCursor();
    void showCursor();
    BOOL tryStartSend();
    BOOL tryCopyButton();
    BOOL tryPasteButton();
    BOOL tryBackspaceButton();
    BOOL tryPressKey();
    s32 navigateText(void *pad);
    void clearSelection();
    BOOL hasSelection();
    u32 getCharBeforeCursor();
    void updateCaretX();
    void snapCaretToText();
    void setCaretFromTouchX(u32 v);
    void dragSelection();
    BOOL touchTextField();
    BOOL startSend();
    BOOL touchSendKey();
    s32 touchKey();
    s32 pressKeyCode(u32 x);

    // state-table targets (0x8c table)
    void transitionAct00();
    void transitionAct01();
    void transitionAct02();
    void transitionAct03();
    void transitionAct04();
    void transitionAct05();
    // state-table targets (0x8d table)
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

    void postInputUpdate();
    void preInputUpdate();
    void runMainState();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ volatile u8 unk_9b;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ TextLabel *unk_a8;
    /* 0xac */ Keyboard unk_ac;
    /* 0x2468 */ u8 unk_2468[0x3c68 - 0x2468];
    /* 0x3c68 */ ChatBalloonText unk_3c68;
    /* 0x3c9c */ EncodedString32 unk_3c9c;
    /* 0x3ccc */ MenuCursorBuf0 unk_3ccc;
    /* 0x3d30 */ MenuErrorMessage unk_3d30;
    /* 0x3e38 */ u8 unk_3e38[0x20];
};

extern "C" {
void ChatMenu_PlayErrorSe(S *s);
void ChatMenu_Paste(S *s);
void ChatMenu_Copy(S *s);
void ChatMenu_ClearText(S *s);
void ChatMenu_ApplyModifier105(S *s);
BOOL ChatMenu_TryModifier105(S *s);
void ChatMenu_ApplyModifier104(S *s);
BOOL ChatMenu_TryModifier104(S *s);
void ChatMenu_ApplyModifier103(S *s);
BOOL ChatMenu_TryModifier103(S *s);
void ChatMenu_DeleteSelection(S *s);
BOOL ChatMenu_Backspace(S *s, Unk_ov111_022970cc_Status a);
BOOL ChatMenu_InsertChar(S *s, u32 a);
void ChatMenu_BeginSend(S *s);
void ChatMenu_SendText(S *s);
void ChatMenu_RedrawText(S *s);
void ChatMenu_CreateTextLabel(S *s);
void ChatMenu_DestroyTextLabel(S *s);
void ChatMenu_DrawKeyboard(S *s);
void ChatMenu_LoadSendAnimFrame(S *s, u32 a);
void ChatMenu_Exit(S *s);
void ChatMenu_Init(S *s);
void ChatMenu_ShowMessage(S *s, u32 v, Unk_ov111_022970cc_Status w);
void ChatMenu_PlayEmotion(S *s);
void ChatMenu_ResumeInput(S *s);
void ChatMenu_StartButtonInput(S *s);
void ChatMenu_StartTouchInput(S *s);
void ChatMenu_LoadBg(S *s);
void ChatMenu_SetupBgLayer();
BOOL ChatMenu_RequestTab(S *s, s32 a, u32 b);
BOOL ChatMenu_HandleTabSwitch(S *s);
}

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov111_SceneEntry {
    ChatMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" ChatMenu *ChatMenu_Create();

extern "C" ChatMenu *ChatMenu_Create() { return new ChatMenu(); }

BOOL ChatMenu::vfunc_00() {
    ChatMenu_Init(this);
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL ChatMenu::vfunc_0c() {
    ((MenuTabBar *)ProcBase_GetParent(this))->onTabMenuClosed();
    ChatMenu_Exit(this);
    return TRUE;
}

BOOL ChatMenu::onDraw() {
    if (testFlags(4)) {
        if (MenuCtrl_IsButtons()) {
            ((MenuCursorBase *)&unk_3ccc)->drawWrapped();
        }
        ChatMenu_DrawKeyboard(this);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov111_SceneEntry data_ov111_02298920;
extern "C" char data_ov111_022989c8[];
extern "C" char data_ov111_022989e0[];
extern "C" char data_ov111_022989f8[];
extern "C" char data_ov111_02298a10[];
extern "C" u32 sChatSendAnimScreens[4];

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov111_SceneEntry data_ov111_02298920 = {ChatMenu_Create, 0x9e, 0xa2};

// Data order: this unit is placed object by object (see object_order.txt).

BOOL ChatMenu::execTransition() {
    static Unk_ov111_02298a48_Fn tbl[6] = {
        &ChatMenu::transitionAct00,
        &ChatMenu::transitionAct01,
        &ChatMenu::transitionAct02,
        &ChatMenu::transitionAct03,
        &ChatMenu::transitionAct04,
        &ChatMenu::transitionAct05};
    (this->*tbl[unk_8c])();
    return TRUE;
}

void ChatMenu::runMainState() {
    static Unk_ov111_02298a48_Fn tbl[16] = {
        &ChatMenu::mainAct00,
        &ChatMenu::mainAct01,
        &ChatMenu::mainAct02,
        &ChatMenu::mainAct03,
        &ChatMenu::mainAct04,
        &ChatMenu::mainAct05,
        &ChatMenu::mainAct06,
        &ChatMenu::mainAct07,
        &ChatMenu::mainAct08,
        &ChatMenu::mainAct09,
        &ChatMenu::mainAct0A,
        &ChatMenu::mainAct0B,
        &ChatMenu::mainAct0C,
        &ChatMenu::mainAct0D,
        &ChatMenu::mainAct0E,
        &ChatMenu::mainAct0F};
    (this->*tbl[unk_8d])();
}

BOOL ChatMenu::execMain() {
    if (ChatMenu_HandleTabSwitch(this)) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL ChatMenu::execPhase3() { return TRUE; }

BOOL ChatMenu::execPhase4() { return TRUE; }

BOOL ChatMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL ChatMenu::onExecute() {
    ChatMenu_DestroyTextLabel(this);
    MenuProc::onExecute();
    return TRUE;
}

void ChatMenu::preInputUpdate() {
    unk_3ccc.vfunc_0c();
}

void ChatMenu::postInputUpdate() {
    if (unk_a2 != 0) {
        unk_a2 = *(volatile u8 *)&unk_a2 - 1;
        if (unk_a2 == 0) {
            Keyboard_ClearSelectedEmotion(&unk_ac);
        }
    }
    endKeyboardFrame();
}

BOOL ChatMenu_HandleTabSwitch(S *s) {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue() != 0) {
        switch (s->unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            return ChatMenu_RequestTab(s, 7, 1);
        case 4:
        default:
            break;
        }
    }
    if (s->unk_8d != 0 && s->unk_8d != 3 && s->unk_8d != 9) {
        return FALSE;
    }
    s32 r5 = -1;
    if (MenuCtrl_IsTouch() != 0) {
        r5 = MenuTabBar_HitTestTouch();
    } else {
        u32 t = gPad[1];
        if ((t & 4) != 0) {
            r5 = 7;
        } else if ((t & 0x800) != 0) {
            r5 = 0;
        } else if ((t & 0x400) != 0) {
            r5 = 5;
        }
    }
    return ChatMenu_RequestTab(s, r5, 0);
}

BOOL ChatMenu_RequestTab(S *s, s32 a, u32 b) {
    void *p = ProcBase_GetParent(s);
    if (a != -1 && a != 4) {
        ((MenuTabBar *)p)->selectTab((u8)a);
        s->hideCursor();
        s->unk_8c = 4;
        s->setPhase(1);
        if (a == 7) {
            s->setFlags(0x10);
        }
        if (b != 0) {
            MenuCtrl_SetChatDraft(s->unk_3c9c.unk_0e);
        } else {
            MenuCtrl_ClearChatDraft();
        }
        return TRUE;
    }
    return FALSE;
}

void ChatMenu_SetupBgLayer() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void ChatMenu_LoadBg(S *s) {
    u32 r4 = gCurrentHeap;
    Gfx2d_LoadPaletteFile((void *)"menu/chat2/b_cht_bg.bpl", r4, 6, 1, 1, 9);
    Keyboard_LoadScreenFile(&s->unk_ac, data_ov111_022989c8);
    s->refreshKeys();
    Keyboard_LoadScreenNow(&s->unk_ac, 6);
    Gfx2d_LoadCharFile((void *)"menu/chat2/b_cht.bch", r4, 6, 0x13d, 0x13d, 0x1e9);
}

void ChatMenu::transitionAct00() {
    ChatMenu_SetupBgLayer();
    Keyboard_LoadObjGfx(&this->unk_ac);
    this->setTransitionState(1);
    if (this->testFlags(0x20) == 0) {
        this->transitionAct01();
    }
}

void ChatMenu::transitionAct01() {
    Keyboard_LoadEmotionIcons(&this->unk_ac);
    ChatMenu_LoadBg(this);
    this->setTransitionState(2);
    if (this->testFlags(0x20) == 0) {
        this->transitionAct02();
    }
}

void ChatMenu::transitionAct02() {
    Keyboard_RestoreLastPage(&this->unk_ac, 6);
    this->endKeyboardFrame();
    this->setFlags(4);
    this->beginSubSlideIn(8, 3, 0, 0x30);
    Gfx2d_ShowLayer(6);
    this->applySlideOffset(6, 0, 0);
    this->setTransitionState(3);
    ChatMenu_RedrawText(this);
}

void ChatMenu::transitionAct03() {
    if (this->stepSlideIn(0) != 0) {
        this->setPhase(2);
        ChatMenu_ResumeInput(this);
    }
    this->applySlideOffset(6, 0, 0);
}

void ChatMenu::transitionAct04() {
    this->beginSubSlideOut(8, 0, 0, 0x30);
    this->applySlideOffset(6, 0, 0);
    this->unk_8c = 5;
}

void ChatMenu::transitionAct05() {
    if (this->stepSlideOut(0) != 0) {
        Gfx2d_HideLayer(6);
        this->setPhase(5);
    } else {
        this->applySlideOffset(6, 0, 0);
    }
}

void ChatMenu::mainAct00() {
    if (this->checkSwitchToButtons(1) != 0) {
        ChatMenu_StartButtonInput(this);
    } else if (Keyboard_UpdatePressedKey(&this->unk_ac) == 0) {
        if (Both()) {
            s32 r = this->touchKey();
            if (r != 0) {
                if (r == 1) {
                    this->setMainState(1);
                }
            } else {
                if (Keyboard_TouchPageTab(&this->unk_ac) != 0) {
                    this->setKeyboardMode(8);
                    ChatMenu_RedrawText(this);
                } else if (this->touchSendKey() != 0) {
                    this->setMainState(0xd);
                } else if (this->unk_a2 == 0 && Keyboard_TouchEmotionKey(&this->unk_ac) != 0) {
                    ChatMenu_PlayEmotion(this);
                    this->setMainState(0);
                } else if (this->touchTextField() != 0) {
                    this->refreshKeys();
                    this->setMainState(2);
                }
            }
        }
    }
}

void ChatMenu::mainAct01() {
    if (gTouchHeld == 0) {
        this->setMainState(0);
    } else if (Keyboard_TickKeyRepeat(&this->unk_ac) != 0) {
        s32 r5 = Keyboard_GetPressedKey(&this->unk_ac);
        this->pressKeyCode(Keyboard_GetKeyCode(&this->unk_ac, r5, 8));
        Keyboard_HighlightKey(&this->unk_ac, r5);
    }
}

void ChatMenu::mainAct02() {
    if (gTouchHeld == 0) {
        this->setMainState(0);
        if (this->unk_9f == this->unk_a0) {
            this->clearFlags(1);
        }
    } else {
        this->dragSelection();
    }
    ChatMenu_RedrawText(this);
}

void ChatMenu::mainAct03() {
    if (this->checkSwitchToTouch() != 0) {
        ChatMenu_StartTouchInput(this);
        return;
    }
    switch (Keyboard_MoveCursor(&this->unk_ac, this->takeRepeatedKeys())) {
    case 1:
        ((MenuCursor *)&this->unk_3ccc)->switchToAnim01();
        this->moveCursorToTarget();
        break;
    case 2:
        ((MenuCursor *)&this->unk_3ccc)->switchToAnim0D();
        this->moveCursorToTarget();
        break;
    case 4:
        ((MenuCursor *)&this->unk_3ccc)->switchToAnim01();
        this->setFlags(2);
        this->setMainState(9);
        this->moveCursorToTarget();
        break;
    case 0:
    case 3:
    default:
        if (this->tryPressKey() != 0) {
            return;
        }
        if (this->tryBackspaceButton() != 0) {
            return;
        }
        if (this->tryStartSend() != 0) {
            return;
        }
        {
            u32 t = gPad[1];
            if ((t & 0x100) != 0) {
                ChatMenu_RequestTab(this, MenuTabBar_NextTab(4), 0);
            } else if ((t & 0x200) != 0) {
                ChatMenu_RequestTab(this, MenuTabBar_PrevTab(4), 0);
            }
        }
        break;
    }
}

void ChatMenu::mainAct04() {
    if (((MenuCursorBase *)&this->unk_3ccc)->isMoving() == 0) {
        this->setMainState(this->unk_98);
        this->runMainState();
    }
}

void ChatMenu::mainAct05() {
    if (this->unk_3ccc.isAnimDone() != 0) {
        s32 r6 = Keyboard_PressCursorKey(&this->unk_ac);
        s32 r4 = this->pressKeyCode(Keyboard_GetKeyCode(&this->unk_ac, r6, 8));
        if (r4 != 3) {
            if (r4 == 1 && (gPad[0] & 1) != 0) {
                Keyboard_StartKeyRepeat(&this->unk_ac);
                this->setMainState(6);
                Keyboard_HighlightKey(&this->unk_ac, r6);
            } else {
                Keyboard_ClearHighlight(&this->unk_ac);
                if (r4 != 4) {
                    this->releaseCursor();
                }
            }
        }
    }
}

void ChatMenu::mainAct06() {
    if ((gPad[0] & 1) == 0) {
        Keyboard_ClearHighlight(&this->unk_ac);
        this->releaseCursor();
    } else if (Keyboard_TickKeyRepeat(&this->unk_ac) != 0) {
        s32 r5 = Keyboard_GetPressedKey(&this->unk_ac);
        this->pressKeyCode(Keyboard_GetKeyCode(&this->unk_ac, r5, 8));
        Keyboard_HighlightKey(&this->unk_ac, r5);
    }
}

void ChatMenu::mainAct07() {
    if (this->unk_3ccc.isAnimDone() != 0) {
        this->returnToKeyNav();
    }
}

void ChatMenu::mainAct08() {
    if ((gPad[0] & 2) == 0) {
        this->setMainState(this->unk_98);
    } else if (Keyboard_TickKeyRepeat(&this->unk_ac) != 0) {
        this->pressKeyCode(0x100);
        if (this->testFlags(2) != 0) {
            this->snapCursor();
        }
    }
}

void ChatMenu::mainAct09() {
    if (this->checkSwitchToTouch() != 0) {
        ChatMenu_StartTouchInput(this);
        return;
    }
    switch (this->navigateText((void *)this->takeRepeatedKeys())) {
    case 1:
        Keyboard_ResetTypedRun(&this->unk_ac);
        this->clearSelection();
        this->updateCaretX();
        ChatMenu_RedrawText(this);
        this->snapCursor();
        Snd_PlaySe(0xb);
        break;
    case 4:
        Keyboard_SelectSendKey(&this->unk_ac);
        this->clearFlags(2);
        this->setMainState(3);
        this->moveCursorToTarget();
        break;
    case 2:
        Keyboard_SelectMenuTabKey(&this->unk_ac, ((MenuCursorBase *)&this->unk_3ccc)->getScreenX());
        this->clearFlags(2);
        this->setMainState(3);
        ((MenuCursor *)&this->unk_3ccc)->switchToAnim0D();
        this->moveCursorToTarget();
        break;
    case 3:
        Keyboard_EnterTabRowAtX2(&this->unk_ac, ((MenuCursorBase *)&this->unk_3ccc)->getScreenX());
        this->clearFlags(2);
        this->setMainState(3);
        this->moveCursorToTarget();
        break;
    case 0:
    default:
        if (this->tryCopyButton() != 0) {
            return;
        }
        if (this->tryPasteButton() != 0) {
            return;
        }
        {
            u8 old = this->unk_9e;
            if (this->tryBackspaceButton() != 0) {
                if (old != this->unk_9e) {
                    this->snapCursor();
                }
            } else if ((gPad[1] & 1) != 0) {
                this->setMainState(0xa);
                this->setFlags(1);
                this->unk_9f = this->unk_9e;
                this->unk_a0 = this->unk_9e;
            } else if (this->tryStartSend() != 0) {
                return;
            }
        }
        break;
    }
}

void ChatMenu::mainAct0A() {
    if ((gPad[0] & 1) == 0) {
        this->setMainState(9);
        if (this->unk_9f == this->unk_a0) {
            this->clearFlags(1);
        }
    } else if (this->navigateText((void *)this->takeRepeatedKeys()) == 1) {
        Keyboard_ResetTypedRun(&this->unk_ac);
        this->updateCaretX();
        this->unk_a0 = this->unk_9e;
        this->snapCursor();
        Snd_PlaySe(0x15);
    }
    ChatMenu_RedrawText(this);
    this->refreshKeys();
}

void ChatMenu::mainAct0B() {
    if ((gPad[0] & 0x200) == 0) {
        this->setMainState(this->unk_98);
        this->refreshKeys();
    }
}

void ChatMenu::mainAct0C() {
    if ((gPad[0] & 0x100) == 0) {
        this->setMainState(this->unk_98);
        this->refreshKeys();
    }
}

void ChatMenu_StartTouchInput(S *s) {
    s->hideCursor();
    s->setMainState(0);
}

void ChatMenu_StartButtonInput(S *s) {
    s->restartKeyRepeat();
    s->showCursor();
    s->setMainState(3);
    ChatMenu_RedrawText(s);
    s->refreshKeys();
}

void ChatMenu_ResumeInput(S *s) {
    if (MenuCtrl_IsTouch() != 0) {
        ChatMenu_StartTouchInput(s);
    } else {
        ChatMenu_StartButtonInput(s);
    }
}

void ChatMenu_PlayEmotion(S *s) {
    u8 b = Keyboard_GetSelectedEmotion(&s->unk_ac);
    PlayerActor_RequestEmotion(&b);
    s->unk_a2 = 0x14;
}

void ChatMenu_ShowMessage(S *s, u32 v, Unk_ov111_022970cc_Status w) {
    volatile u8 b = data_021edb68;
    b = v;
    s->unk_3d30.open((u8 *)&b, w, 0);
    s->setMainState(0xf);
    s->hideCursor();
}

void ChatMenu::mainAct0D() {
    if (MenuCtrl_IsTouch()) {
        if (Both()) {
            if (this->unk_a2 == 0) {
                if (Keyboard_TouchEmotionKey(&this->unk_ac)) {
                    ChatMenu_PlayEmotion(this);
                }
            }
        }
    }
    if (this->unk_9a < 4) {
        this->unk_9a = *(volatile u8 *)&this->unk_9a + 1;
        ChatMenu_LoadSendAnimFrame(this, *(volatile u8 *)&this->unk_9a);
        this->unk_9d = 3;
    } else if (this->unk_9d != 0) {
        this->unk_9d = *(volatile u8 *)&this->unk_9d - 1;
    } else {
        Keyboard_ResetTypedRun(&this->unk_ac);
        this->setMainState(0xe);
    }
}

void ChatMenu::mainAct0E() {
    if (MenuCtrl_IsTouch()) {
        if (Both()) {
            if (this->unk_a2 == 0) {
                if (Keyboard_TouchEmotionKey(&this->unk_ac)) {
                    ChatMenu_PlayEmotion(this);
                }
            }
        }
    }
    if (this->unk_9a != 0) {
        if (this->unk_9a == 3) {
            ChatMenu_SendText(this);
        }
        this->unk_9a = this->unk_9a - 1;
        ChatMenu_LoadSendAnimFrame(this, this->unk_9a);
        if (this->unk_9a == 1) {
            if (MenuCtrl_IsButtons()) {
                ((MenuCursorBase *)&this->unk_3ccc)->setPoseRelease();
            }
        }
    } else {
        ChatMenu_ClearText(this);
        ChatMenu_RedrawText(this);
        if (MenuCtrl_IsTouch()) {
            this->setMainState(0);
        } else if (this->unk_3ccc.getAnim()) {
            this->setMainState(7);
        } else {
            ChatMenu_StartButtonInput(this);
        }
    }
}

void ChatMenu::mainAct0F() {
    Keyboard_UpdatePressedKey(&this->unk_ac);
    if (this->unk_3d30.update(1)) {
        ChatMenu_ResumeInput(this);
    }
}

void ChatMenu_Init(S *s) {
    s->unk_a4 = 0;
    s->unk_99 = 0;
    s->unk_9a = 0;
    s->unk_9b = 0;
    s->unk_a2 = 0;
    ChatMenu_ClearText(s);
    s->unk_a8 = NULL;
    Keyboard_Init(&s->unk_ac);
    Mem_Copy((void *)MenuCtrl_GetChatDraft(), s->unk_3c9c.unk_0e, 0x20);
    func_020943fc();
    if (((MenuTabBar *)ProcBase_GetParent(s))->isJustOpened()) {
        s->setFlags(0x20);
    }
}

void ChatMenu_Exit(S *s) {
    ChatMenu_DestroyTextLabel(s);
    Keyboard_Shutdown(&s->unk_ac);
    if (!s->testFlags(0x10)) {
        func_020943f8();
    }
}

void ChatMenu_LoadSendAnimFrame(S *s, u32 a) {
    s32 r;
    u32 name;
    u32 g = gCurrentHeap;
    if (a == 0) {
        name = sChatSendAnimScreens[0];
    } else {
        name = sChatSendAnimScreens[a - 1];
    }
    r = File_LoadAlloc(name, g, -4, 0);
    {
        u8 *src = s->unk_2468;
        MI_CpuCopy8((void *)(r + 0x100), src + 0x100, 0x140);
        if (a == 1) {
            BgScreen_ReplaceRectPalette(src, 0, 4, 0x1f, 9, 5, 6);
        }
    }
    Heap_Free(g, r);
    Keyboard_MarkScreenDirty(&s->unk_ac);
}

void ChatMenu_DrawKeyboard(S *s) {
    u32 r4 = s->getSlideOffsetY() + 0x60;
    u32 t;
    Keyboard_Draw(&s->unk_ac, 0x80, r4, 2);
    Keyboard_DrawEmotionKeys(&s->unk_ac, 0x80, r4);
    if (s->unk_9a != 0) {
        if (s->unk_9b < 2) {
            s->unk_9b = s->unk_9b + 1;
        }
        t = 7;
    } else {
        if (s->unk_9b != 0) {
            s->unk_9b = s->unk_9b - 1;
        }
        t = 6;
    }
    Keyboard_DrawSendKey(&s->unk_ac, 0x80, r4, t, s->unk_9b);
    s->unk_9c = s->unk_9c + 1;
    if (s->unk_9a == 0 && (s->unk_9c & 0x10) != 0) {
        Keyboard_DrawCaret(&s->unk_ac, s->unk_a1 + 0x18, r4 - 0x38, 2);
    }
    Keyboard_DrawCopyPasteKeysChat(&s->unk_ac, 0x80, r4);
    Keyboard_DrawLengthGauge(&s->unk_ac, 0x80, r4, s->unk_94);
}

void ChatMenu_DestroyTextLabel(S *s) {
    if (s->unk_a8 != NULL) {
        MsgTextLabel_Destroy(s->unk_a8);
        s->unk_a8 = NULL;
    }
}

void ChatMenu_CreateTextLabel(S *s) {
    if (s->unk_a8 == NULL) {
        s->unk_a8 = (TextLabel *)MsgTextLabel_CreateVram(0x13d, 0x15, 2);
        if (s->unk_a8 != NULL) {
            s->unk_a8->unk_2c = 3;
            s->unk_a8->unk_50 = 1;
            s->unk_a8->unk_55 = 0;
            s->unk_a8->unk_39 = 2;
            s->unk_a8->unk_38 = 1;
            if (s->hasSelection()) {
                u32 a = s->unk_a0;
                u32 b = s->unk_9f;
                u32 lo, cnt;
                if (b > a) {
                    lo = a;
                    cnt = b - a;
                } else {
                    lo = b;
                    cnt = a - b;
                }
                s->unk_a8->setHighlight(2, 1, lo, cnt);
            } else {
                u32 r = Keyboard_GetTypedRunLength(&s->unk_ac);
                if (r != 0) {
                    s->unk_a8->setHighlight(0xe, 2, s->unk_9e - r, r);
                }
            }
        }
    }
}

void ChatMenu_RedrawText(S *s) {
    ChatMenu_CreateTextLabel(s);
    if (s->unk_a8 != NULL) {
        ((MsgString *)&s->unk_3c68)->fromEncoded(&s->unk_3c9c, 0, 0);
        TextLabel *t = s->unk_a8;
        t->unk_10 = ((TextLabel *)&s->unk_3c68)->measureWidth();
        s->unk_a8->requestRedraw();
        s->unk_94 = func_020512e0(s->unk_3c9c.unk_0e, 0x20) * 0x1f / 0x20;
        if (s->unk_94 > 0x1f) {
            s->unk_94 = 0x1f;
        }
    }
}

void ChatMenu_SendText(S *s) {
    PlayerData *r = PlayerData_GetCurrent();
    MsgString9B buf;
    ((PlayerId *)r->getPlayerId())->getNameString((MsgString *)&buf);
    String_CensorTaboo(&s->unk_3c68);
    ChatBalloon_Post(*(s32 *)(gCommManager + 0x64), &buf, &s->unk_3c68);
    ChatMenu_ClearText(s);
    ChatMenu_RedrawText(s);
}

void ChatMenu_BeginSend(S *s) {
    ChatBalloon_Dismiss(*(s32 *)(gCommManager + 0x64));
}

BOOL ChatMenu_InsertChar(S *s, u32 a) {
    if (s->hasSelection()) {
        ChatMenu_DeleteSelection(s);
        Keyboard_ResetTypedRun(&s->unk_ac);
    }
    if (Keyboard_InsertChar(&s->unk_ac, s->unk_3c9c.unk_0e, a, &s->unk_9e, 0x20, 0xa0, 0, 1)) {
        s->updateCaretX();
        ChatMenu_RedrawText(s);
    } else {
        return FALSE;
    }
    return TRUE;
}

BOOL ChatMenu_Backspace(S *s, Unk_ov111_022970cc_Status a) {
    if (s->hasSelection()) {
        Keyboard_ResetTypedRun(&s->unk_ac);
        Snd_PlaySe(0x35);
    } else if (s->unk_9e != 0) {
        s->unk_9f = s->unk_9e;
        s->unk_a0 = s->unk_9e - 1;
        Snd_PlaySe(0x35);
    } else if (s->unk_3c9c.unk_0e[0] != 0) {
        s->unk_9f = 0;
        s->unk_a0 = 1;
        Snd_PlaySe(0x35);
    } else {
        if (a != 0) {
            Snd_PlaySe(0x34);
        }
        return FALSE;
    }
    ChatMenu_DeleteSelection(s);
    ChatMenu_RedrawText(s);
    s->updateCaretX();
    return TRUE;
}

void ChatMenu_DeleteSelection(S *s) {
    u32 a = s->unk_a0;
    u32 b = s->unk_9f;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    s->unk_9e = Keyboard_DeleteRange(&s->unk_ac, s->unk_3c9c.unk_0e, lo, hi, 0x20);
    s->clearSelection();
}

BOOL ChatMenu_TryModifier103(S *s) {
    u32 a = s->getCharBeforeCursor();
    if (a == 0) return FALSE;
    u32 b = Keyboard_ModifyCharKey103(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (Keyboard_ReplaceCharBeforeCursor(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void ChatMenu_ApplyModifier103(S *s) {
    if (ChatMenu_TryModifier103(s)) {
        s->updateCaretX();
        ChatMenu_RedrawText(s);
    } else {
        ChatMenu_PlayErrorSe(s);
    }
}

BOOL ChatMenu_TryModifier104(S *s) {
    u32 a = s->getCharBeforeCursor();
    if (a == 0) return FALSE;
    u32 b = Keyboard_ModifyCharKey104(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (Keyboard_ReplaceCharBeforeCursor(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void ChatMenu_ApplyModifier104(S *s) {
    if (ChatMenu_TryModifier104(s)) {
        s->updateCaretX();
        ChatMenu_RedrawText(s);
    } else {
        ChatMenu_PlayErrorSe(s);
    }
}

BOOL ChatMenu_TryModifier105(S *s) {
    u32 a = s->getCharBeforeCursor();
    if (a == 0) return FALSE;
    u32 b = Keyboard_ModifyCharKey105(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (Keyboard_ReplaceCharBeforeCursor(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void ChatMenu_ApplyModifier105(S *s) {
    if (ChatMenu_TryModifier105(s)) {
        s->updateCaretX();
        ChatMenu_RedrawText(s);
    } else {
        ChatMenu_PlayErrorSe(s);
    }
}

void ChatMenu_ClearText(S *s) {
    s->unk_9c = 0x10;
    s->unk_a1 = 0;
    s->unk_9e = 0;
    s->clearSelection();
    s->refreshKeys();
    Keyboard_ResetKeyPalettes(&s->unk_ac);
    Mem_Clear(s->unk_3c9c.unk_0e, 0x20);
}

void ChatMenu_Copy(S *s) {
    if (s->hasSelection()) {
        u32 a = s->unk_a0;
        u32 b = s->unk_9f;
        u32 lo, cnt;
        if (b > a) {
            lo = a;
            cnt = b - a;
        } else {
            lo = b;
            cnt = a - b;
        }
        Mem_Clear(s->unk_3e38, 0x20);
        Mem_Copy(s->unk_3c9c.unk_0e + lo, s->unk_3e38, cnt);
        s->setFlags(8);
        Keyboard_PlayCopySe(&s->unk_ac);
        s->refreshKeys();
    }
}

void ChatMenu_Paste(S *s) {
    if (s->testFlags(8)) {
        s32 n;
        s32 i;
        s32 z;
        Keyboard_BeginPaste(&s->unk_ac);
        if (s->hasSelection()) {
            s->unk_9e = Keyboard_DeleteRange(&s->unk_ac, s->unk_3c9c.unk_0e, s->unk_9f, s->unk_a0, 0x20);
            s->clearFlags(1);
        }
        Keyboard_ResetTypedRun(&s->unk_ac);
        n = func_020512e0(s->unk_3e38, 0x20);
        i = 0;
        z = i;
        for (; i < n; i++) {
            if (!Keyboard_InsertChar(&s->unk_ac, s->unk_3c9c.unk_0e, s->unk_3e38[i], &s->unk_9e, 0x20, 0xa0, z, z)) {
                if (i == 0) {
                    ChatMenu_PlayErrorSe(s);
                }
                i = n;
            }
        }
        s->updateCaretX();
        ChatMenu_RedrawText(s);
        Keyboard_PlayPasteSe(&s->unk_ac);
        Keyboard_EndPaste(&s->unk_ac);
    }
}

void ChatMenu_PlayErrorSe(S *s) {
    Snd_PlaySe(0x34);
}

s32 ChatMenu::pressKeyCode(u32 x) {
    Unk_ov111_022970cc_Status r = UNK_OV111_ST_1;
    s32 t = Keyboard_HandleModeKey(&unk_ac, x, 6);
    if (t != 0) {
        ChatMenu_RedrawText(this);
        return t;
    }
    if (Keyboard_IsControlCode(&unk_ac, x)) {
        switch (x - 0x100) {
        case 0:
            ChatMenu_Backspace(this, r);
            break;
        case 3:
            ChatMenu_ApplyModifier103(this);
            r = UNK_OV111_ST_2;
            break;
        case 4:
            ChatMenu_ApplyModifier104(this);
            r = UNK_OV111_ST_2;
            break;
        case 5:
            ChatMenu_ApplyModifier105(this);
            r = UNK_OV111_ST_2;
            break;
        case 6:
            break;
        case 24:
            ChatMenu_Copy(this);
            r = UNK_OV111_ST_2;
            break;
        case 25:
            ChatMenu_Paste(this);
            r = UNK_OV111_ST_2;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            ChatMenu_RequestTab(this, x - 0x10a, 0);
            r = UNK_OV111_ST_2;
            break;
        case 27:
        case 28:
        case 29:
        case 30:
            if (unk_a2 != 0) {
                return 0;
            }
            Keyboard_SelectEmotionByCode(&unk_ac, x);
            ChatMenu_PlayEmotion(this);
            releaseCursor();
            r = UNK_OV111_ST_3;
            break;
        default:
            return 0;
        }
    } else {
        s32 r6 = ChatMenu_InsertChar(this, (u8)x);
        if (Keyboard_IsFull(&unk_ac)) {
            ChatMenu_ShowMessage(this, 0x1c, r);
            return 4;
        }
        if (Keyboard_IsTooWide(&unk_ac)) {
            ChatMenu_ShowMessage(this, 0x1c, r);
            return 4;
        }
        if (r6 == 0) {
            ChatMenu_PlayErrorSe(this);
        }
    }
    return r;
}

s32 ChatMenu::touchKey() {
    Keyboard_ClearHighlight(&unk_ac);
    s32 r4 = Keyboard_TouchKey(&unk_ac, gTouchCurX, gTouchCurY);
    if (r4 == -1) {
        return 0;
    }
    s32 r6 = pressKeyCode(Keyboard_GetKeyCode(&unk_ac, r4, 8));
    Keyboard_HighlightKey(&unk_ac, r4);
    Keyboard_StartKeyRepeat(&unk_ac);
    return r6;
}

BOOL ChatMenu::touchSendKey() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (Keyboard_TouchSendKey(&unk_ac)) {
        return startSend();
    }
    return FALSE;
}

BOOL ChatMenu::startSend() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (func_020512e0(unk_3c9c.unk_0e, 0x20) == 0) {
        ChatMenu_PlayErrorSe(this);
    } else {
        PlayerActor_RequestAct13();
        Snd_PlaySe(0x32);
        ChatMenu_BeginSend(this);
        return TRUE;
    }
    return FALSE;
}

BOOL ChatMenu::touchTextField() {
    s32 a = gTouchCurX;
    s32 b = gTouchCurY;
    if (b < 0x24 || b >= 0x3c) {
        return FALSE;
    }
    if (a < 0x10 || a >= 0xc8) {
        return FALSE;
    }
    if (a < 0x18) {
        a = 0x18;
    }
    setCaretFromTouchX(a);
    setFlags(1);
    unk_9f = unk_9e;
    unk_a0 = unk_9e;
    return TRUE;
}

void ChatMenu::dragSelection() {
    s32 v = gTouchCurX;
    if (v < 0x18) {
        v = 0x18;
    }
    if (v >= 0xc8) {
        v = 0xc7;
    }
    setCaretFromTouchX(v);
    if (unk_a0 != unk_9e) {
        Snd_PlaySe(0x15);
    }
    unk_a0 = unk_9e;
}

void ChatMenu::setCaretFromTouchX(u32 v) {
    unk_a1 = v - 0x18;
    snapCaretToText();
    Keyboard_ResetTypedRun(&unk_ac);
    ChatMenu_RedrawText(this);
}

void ChatMenu::snapCaretToText() {
    unk_a1 = Keyboard_HitTestText(&unk_ac, unk_3c9c.unk_0e, 0x20, 0xa0, unk_a1, &unk_9e);
    unk_9c = 0x10;
    refreshKeys();
}

void ChatMenu::updateCaretX() {
    unk_a1 = func_02051348(unk_3c9c.unk_0e, unk_9e);
    unk_9c = 0x10;
    refreshKeys();
}

u32 ChatMenu::getCharBeforeCursor() {
    if (unk_9e == 0) {
        return 0;
    }
    return unk_3c9c.unk_0e[unk_9e - 1];
}

BOOL ChatMenu::hasSelection() {
    if (!testFlags(1) || unk_9f == unk_a0) {
        return FALSE;
    }
    return TRUE;
}

void ChatMenu::clearSelection() {
    unk_9f = 0;
    unk_a0 = 0;
    clearFlags(1);
}

s32 ChatMenu::navigateText(void *pad) {
    if (pad == 0) {
        return 0;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (*(volatile u8 *)&unk_9e != 0) {
            unk_9e = *(volatile u8 *)&unk_9e - 1;
            return 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (*(volatile u8 *)&unk_9e + 1 <= func_020512e0(unk_3c9c.unk_0e, 0x20)) {
            unk_9e = *(volatile u8 *)&unk_9e + 1;
            return 1;
        }
        return 4;
    }
    if (MenuKeys_HasUp(pad)) {
        return 2;
    }
    if (MenuKeys_HasDown(pad)) {
        return 3;
    }
    return 0;
}

BOOL ChatMenu::tryPressKey() {
    if ((gPad[1] & 1) == 0) {
        return FALSE;
    }
    s32 r4 = Keyboard_PressCursorKey(&unk_ac);
    if (r4 == -1) {
        return FALSE;
    }
    if (Keyboard_GetKeyCode(&unk_ac, r4, 8) == 0x106) {
        if (startSend()) {
            ((MenuCursor *)&unk_3ccc)->setPosePress();
            setMainState(0xd);
            return TRUE;
        }
        return FALSE;
    }
    Keyboard_HighlightKey(&unk_ac, r4);
    pressCursor();
    return TRUE;
}

BOOL ChatMenu::tryBackspaceButton() {
    if ((gPad[1] & 2) == 0) {
        return FALSE;
    }
    Keyboard_ShrinkTypedRun(&unk_ac);
    if (ChatMenu_Backspace(this, UNK_OV111_ST_0)) {
        Keyboard_StartKeyRepeat(&unk_ac);
        unk_98 = unk_8d;
        setMainState(8);
    } else {
        ChatMenu_RequestTab(this, 7, 0);
    }
    return TRUE;
}

BOOL ChatMenu::tryPasteButton() {
    if ((gPad[1] & 0x100) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(&unk_ac, 0xc)) {
        return FALSE;
    }
    pressKeyCode(0x119);
    Keyboard_HighlightKey(&unk_ac, 0xdc);
    snapCursor();
    unk_98 = unk_8d;
    setMainState(0xc);
    return TRUE;
}

BOOL ChatMenu::tryCopyButton() {
    if ((gPad[1] & 0x200) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(&unk_ac, 0xb)) {
        return FALSE;
    }
    pressKeyCode(0x118);
    Keyboard_HighlightKey(&unk_ac, 0xdb);
    unk_98 = unk_8d;
    setMainState(0xb);
    return TRUE;
}

BOOL ChatMenu::tryStartSend() {
    if ((gPad[1] & 8) == 0) {
        return FALSE;
    }
    if (startSend()) {
        hideCursor();
        setMainState(0xd);
        return TRUE;
    }
    return FALSE;
}

void ChatMenu::showCursor() {
    clearFlags(2);
    Keyboard_ResetCursor(&unk_ac);
    s32 a = Keyboard_GetCursorX(&unk_ac);
    s32 b = Keyboard_GetCursorY(&unk_ac);
    ((MenuCursorBase *)&unk_3ccc)->warpTo(a, b);
    ((MenuCursor *)&unk_3ccc)->setAnimIfChanged(1);
    returnToKeyNav();
}

void ChatMenu::hideCursor() {
    ((MenuCursor *)&unk_3ccc)->setAnimIfChanged(0);
    unk_3ccc.vfunc_0c();
}

void ChatMenu::moveCursorToTarget() {
    if (testFlags(2)) {
        ((MenuCursorBase *)&unk_3ccc)->moveToEase(unk_a1 + 0x18, 0x28, 3, 1);
        unk_98 = 9;
    } else {
        s32 a = Keyboard_GetCursorX(&unk_ac);
        s32 b = Keyboard_GetCursorY(&unk_ac);
        ((MenuCursorBase *)&unk_3ccc)->moveToEase(a, b, 2, 1);
        unk_98 = 3;
    }
    setMainState(4);
}

void ChatMenu::snapCursor() {
    if (testFlags(2)) {
        ((MenuCursorBase *)&unk_3ccc)->warpTo(unk_a1 + 0x18, 0x28);
    } else {
        s32 a = Keyboard_GetCursorX(&unk_ac);
        s32 b = Keyboard_GetCursorY(&unk_ac);
        ((MenuCursorBase *)&unk_3ccc)->warpTo(a, b);
    }
    unk_3ccc.vfunc_0c();
}

void ChatMenu::pressCursor() {
    ((MenuCursor *)&unk_3ccc)->setPosePress();
    setMainState(5);
}

void ChatMenu::releaseCursor() {
    ((MenuCursorBase *)&unk_3ccc)->setPoseRelease();
    setMainState(7);
}

void ChatMenu::returnToKeyNav() {
    ((MenuCursorBase *)&unk_3ccc)->setPoseIdle();
    unk_3ccc.vfunc_0c();
    setMainState(3);
}

void ChatMenu::setKeyboardMode(u32 a) { Keyboard_SetMode(&unk_ac, a, 6, 1); }

void ChatMenu::endKeyboardFrame() { Keyboard_EndFrame(&unk_ac, 6); }

void ChatMenu::refreshKeys() {
    Keyboard_DisableKey(&unk_ac, 0);
    if (hasSelection()) {
        Keyboard_EnableKey(&unk_ac, 0xb);
    } else {
        Keyboard_DisableKey(&unk_ac, 0xb);
    }
    if (testFlags(8)) {
        Keyboard_EnableKey(&unk_ac, 0xc);
    } else {
        Keyboard_DisableKey(&unk_ac, 0xc);
    }
    if (hasSelection()) {
        Keyboard_DisableModifierKeys(&unk_ac);
        Keyboard_EnableKey(&unk_ac, 6);
    } else if (unk_9e == 0) {
        Keyboard_DisableModifierKeys(&unk_ac);
    } else {
        Keyboard_UpdateModifierKeys(&unk_ac, getCharBeforeCursor());
    }
}

BOOL ChatMenu::testFlags(u32 mask) {
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void ChatMenu::setFlags(u32 mask) { unk_a4 = unk_a4 | mask; }

void ChatMenu::clearFlags(u32 mask) { unk_a4 = unk_a4 & ~mask; }

u32 EncodedString32::capacity() { return 0x20; }

u8 *EncodedString32::data() { return (u8 *)this + 0xe; }

// Data definition order is chosen so mwcc emits the objects in the original order
extern "C" char data_ov111_022989c8[] = "menu/chat2/b_cht.bsc";

extern "C" char data_ov111_022989e0[] = "menu/chat2/b_cht_0.bsc";

extern "C" char data_ov111_022989f8[] = "menu/chat2/b_cht_1.bsc";

extern "C" char data_ov111_02298a10[] = "menu/chat2/b_cht_2.bsc";

extern "C" u32 sChatSendAnimScreens[4] = {(u32)data_ov111_022989c8, (u32)data_ov111_022989e0, (u32)data_ov111_022989f8, (u32)data_ov111_02298a10};
