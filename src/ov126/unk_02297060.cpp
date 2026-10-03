// ov126: scene overlay (class NameEntryMenu, vtable 0x02299ae8, size 0x40c8).
// Text-entry screen (name/password style) with a cursor, a selection range and an 0x20-byte edit buffer.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define PlayerPatterns_getPatternByOrder _ZN14PlayerPatterns17getPatternByOrderEj
#define Pattern_getInfo _ZN7Pattern7getInfoEv
#define PatternInfo_setTitleRaw _ZN11PatternInfo11setTitleRawEPh
#define PatternInfo_getTitleRaw _ZN11PatternInfo11getTitleRawEPh
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define BlancaFaceRecord_getPattern _ZN16BlancaFaceRecord10getPatternEv
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define func_02094104 _ZN8PlayerId13func_02094104Ev
#define func_02094108 _ZN8PlayerId13func_02094108EPv
#define PlayerData_getFriendList _ZN10PlayerData13getFriendListEv
#define func_020986d4 _ZN10PlayerData13func_020986d4Ev
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define EncodedString_fromMsgString _ZN13EncodedString13fromMsgStringEP9MsgString
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_clear _ZN9MsgString5clearEv
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv
#define MenuCursorBase_getScreenX _ZN14MenuCursorBase10getScreenXEv
#define MenuCursorBase_isMoving _ZN14MenuCursorBase8isMovingEv
#define MenuCursorBase_moveToNear _ZN14MenuCursorBase10moveToNearEiiih
#define MenuCursorBase_warpTo _ZN14MenuCursorBase6warpToEii
#define MenuCursorBase_setPoseIdle _ZN14MenuCursorBase11setPoseIdleEv
#define MenuCursorBase_setPoseRelease _ZN14MenuCursorBase14setPoseReleaseEv
#define MenuCursor_setPosePress _ZN10MenuCursor12setPosePressEv
#define MenuCursor_switchToAnim0D _ZN10MenuCursor14switchToAnim0DEv
#define MenuCursor_switchToAnim01 _ZN10MenuCursor14switchToAnim01Ev
#define MenuCursor_switchToAnim07 _ZN10MenuCursor14switchToAnim07Ev
#define MenuCursor_setAnimIfChanged _ZN10MenuCursor16setAnimIfChangedEi
#define MenuBottomButtonsBody_isButtonDisabled _ZN21MenuBottomButtonsBody16isButtonDisabledEi
#define MenuBottomButtonsBody_enableButton _ZN21MenuBottomButtonsBody12enableButtonEi
#define MenuBottomButtonsBody_disableButton _ZN21MenuBottomButtonsBody13disableButtonEi
#define MenuBottomButtonsBody_getPressOffset _ZN21MenuBottomButtonsBody14getPressOffsetEv
#define MenuBottomButtonsBody_stepPress _ZN21MenuBottomButtonsBody9stepPressEv
#define MenuBottomButtonsBody_setSelected _ZN21MenuBottomButtonsBody11setSelectedEh
#define MenuBottomButtonsBody_getTargetY _ZN21MenuBottomButtonsBody10getTargetYEi
#define MenuBottomButtonsBody_getTargetX _ZN21MenuBottomButtonsBody10getTargetXEi
#define MenuBottomButtonsBody_isTouched _ZN21MenuBottomButtonsBody9isTouchedEi
#define MenuBottomButtonsBody_setLayoutYesNo09 _ZN21MenuBottomButtonsBody16setLayoutYesNo09Ei
#define MenuBottomButtons_setLayoutConfirmAnd06 _ZN17MenuBottomButtons21setLayoutConfirmAnd06Eh
#define MenuBottomButtons_setLayoutSingle05 _ZN17MenuBottomButtons17setLayoutSingle05Ei
#define MenuBottomButtons_drawAt _ZN17MenuBottomButtons6drawAtEi
#define MenuBottomButtons_freeTexts _ZN17MenuBottomButtons9freeTextsEv
#define MenuErrorMessage_update _ZN16MenuErrorMessage6updateEi
#define MenuErrorMessage_open _ZN16MenuErrorMessage4openEPhij
#define MenuTabBar_requestSaveOnClose _ZN10MenuTabBar18requestSaveOnCloseEv
#define MenuTabBar_showTabs _ZN10MenuTabBar8showTabsEv
#define MenuTabBar_onTabMenuClosed _ZN10MenuTabBar15onTabMenuClosedEv
#define MenuTabBar_selectTab _ZN10MenuTabBar9selectTabEj
#define MenuLauncher_onChildClosed _ZN12MenuLauncher13onChildClosedEv
#define MenuLauncher_setNextRequest _ZN12MenuLauncher14setNextRequestEii
#define func_ov111_02296840 _ZN17GeneralMenuHeader10resetFrameEv
#define FishBookTab_moveCursorTo _ZN11FishBookTab12moveCursorToEii
#define GeneralMenuHeader_drawWithIcon _ZN17GeneralMenuHeader12drawWithIconEii
#define func_ov124_02296c7c _ZN17GeneralMenuHeader19func_ov124_02296c7cEhhjj
#define GeneralMenuHeader_setTitleText _ZN17GeneralMenuHeader12setTitleTextEPvi
#define func_ov124_02296c98 _ZN17GeneralMenuHeader19func_ov124_02296c98Ev
#define GeneralMenuHeader_placeTitleText _ZN17GeneralMenuHeader14placeTitleTextEv
#define GeneralMenuHeader_loadBgGfxForStyle _ZN17GeneralMenuHeader17loadBgGfxForStyleEi

extern "C" {
extern u16 gPad[];
extern u8 gSaveGameStats[];
extern u8 gSaveTownId[];
extern u8 gSavePlayers[];
extern u8 data_021edb68;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u32 gCurrentHeap;
extern u8 *gCommManager;
extern u32 data_ov126_02299ad0[4];

// main
s32 MenuCtrl_GetMode();
s32 MenuCtrl_GetIndex();
void MenuCtrl_SetResult(s32 a);
void *MenuCtrl_GetText();
void MenuCtrl_SetIndex(u8 a);
void MenuCtrl_SetText(void *p, u32 a);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
s32 MenuCtrl_SetFriendPageFromIndex();
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
void Snd_PlaySe(u32 v);
void Gfx2d_LoadCharFile(const void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(const void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void func_020a78a4(void *a, void *b, s32 c);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
s32 String_CensorTaboo(void *a);
void EncodedString_fromMsgString(void *a, void *b);
void StrBuf_GetBytes(void *a, void *b, s32 c);
void *FriendEntry_GetPlayerName(void *a);
void *FriendEntry_GetTownName(void *a);
void Mem_Copy(void *a, void *b, s32 c);
s32 func_02051218(void *a, void *b, s32 c);
void Mem_Clear(void *p, s32 v);
s32 func_020512e0(void *p, s32 v);
u32 func_02051348(void *p, u32 a);
BOOL func_020512f8(void *p, u32 a);
void *BlancaFaceRecord_getPattern(void *a);
void *Pattern_getInfo(void *a);
void PatternInfo_setTitleRaw(void *a, void *b);
void PatternInfo_getTitleRaw(void *a, void *b);
BOOL func_020b0084(void *a, s32 b);
void func_020b0428(void *a, s32 b);
void func_020b03f0(void *a, s32 b);
s32 func_02063904(void *a, void *b);
s32 PlayerData_GetCurrent();
s32 PlayerData_getPlayerId(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
s32 PlayerData_GetResident(void *a, s32 b);
s32 func_02094104(s32 a);
void func_02094108(s32 a, void *b);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f9e4(void *p, const char *fmt, s32 a);
BOOL func_0206f88c(void *p, void *q, u32 n);
void func_0206267c(void *p);
void func_0206260c(void *p);
void ItemName_setFromItem(void *p, void *q);
void MsgString_copy(void *p, void *q);
void MsgString_clear(void *p);
void String_SetSlot(s32 a, void *p);
void func_0206f9fc(void *p, s32 a);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fc44(void *p);
s32 func_020986d4(s32 a);
s32 PlayerData_getFriendList(s32 a);
void *PlayerPatterns_getPatternByOrder(s32 a, s32 b);
void *FriendList_GetEntries(s32 a);
void *FriendEntry_GetFriendData(void *p);
void FriendEntry_Clear(void *p);
void *DwcFriendData_GetBytes(void *p);
BOOL Net_WifiAddFriend(u32 a, void *b);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
BOOL CommManager_isSlotActive(void *g, s32 v);
s32 Net_GetMode();
void Oam_DrawCell(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
BOOL HandCursor_getAnim(void *p);
BOOL HandCursor_isAnimDone(void *p);

// ov002 (non-base objects)
void MenuCursor_setAnimIfChanged(void *p, s32 a);
void MenuCursorBase_warpTo(void *p, s32 a, s32 b);
void MenuBottomButtons_setLayoutConfirmAnd06(void *p, s32 a);
void MenuBottomButtons_setLayoutSingle05(void *p, s32 a);
BOOL MenuBottomButtonsBody_isButtonDisabled(void *p, s32 a);
BOOL MenuBottomButtonsBody_isTouched(void *p, s32 a);
void MenuBottomButtonsBody_disableButton(void *p, s32 a);
void MenuBottomButtonsBody_enableButton(void *p, s32 a);
void MenuBottomButtonsBody_setSelected(void *p, s32 a);
BOOL MenuBottomButtonsBody_stepPress(void *p);
s32 MenuBottomButtonsBody_getPressOffset(void *p);
s32 MenuBottomButtonsBody_getTargetX(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetY(void *p, s32 a);
BOOL MenuCursorBase_isMoving(void *p);
s32 MenuCursorBase_getScreenX(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_switchToAnim0D(void *p);
void MenuCursor_switchToAnim07(void *p);
void MenuErrorMessage_open(void *p, void *q, u32 a, u32 b);
BOOL MenuErrorMessage_update(void *p, s32 a);
void MenuCursorBase_setPoseIdle(void *p);
void MenuCursorBase_setPoseRelease(void *p);
void MenuCursor_setPosePress(void *p);
void MenuCursorBase_moveToNear(void *p, s32 a, s32 b, s32 c, s32 d);
void MenuCursorBase_drawWrapped(void *p);
void MenuBottomButtons_drawAt(void *p, s32 a);
void MenuBottomButtons_freeTexts(void *p);
void MenuButtons_LoadTextColors(void *p);
void MenuBottomButtonsBody_setLayoutYesNo09(void *p, s32 a);
s32 MenuKeys_HasLeft(void *p);
s32 MenuKeys_HasRight(void *p);
s32 MenuKeys_HasDown(void *p);

// ov124 / ov111 / ov115 / ov090 / ov092
void func_ov124_02296c7c(void *p, s32 a, s32 b, s32 c, s32 d);
void GeneralMenuHeader_setTitleText(void *p, void *q, u32 v);
void GeneralMenuHeader_placeTitleText(void *p);
void func_ov124_02296c98(void *p);
s32 GeneralMenuHeader_GetStyle(void *p);
void GeneralMenuHeader_loadBgGfxForStyle(void *p, s32 a);
void GeneralMenuHeader_drawWithIcon(void *p, s32 a, void *b);
void func_ov111_02296840(void *p);
void FishBookTab_moveCursorTo(void *p, s32 a);
void MenuTabBar_requestSaveOnClose(void *p);
void MenuTabBar_showTabs(void *p);
s32 MenuTabBar_onTabMenuClosed(void *p);
void MenuTabBar_selectTab(void *p, s32 v);
void MenuLauncher_onChildClosed(void *p);
void MenuLauncher_setNextRequest(void *p, s32 a, s32 b);

// ov095 (menu sub-object at +0x144)
BOOL Keyboard_IsSlotDisabled(void *p, s32 a);
void Keyboard_HighlightKey(void *p, s32 a);
void Keyboard_ShrinkTypedRun(void *p);
void Keyboard_StartKeyRepeat(void *p);
s32 Keyboard_PressCursorKey(void *p);
s32 Keyboard_GetKeyCode(void *p, s32 a, s32 b);
s32 Keyboard_GetCursorX(void *p);
s32 Keyboard_GetCursorY(void *p);
void Keyboard_ClearHighlight(void *p);
void Keyboard_ResetCursor(void *p);
s32 Keyboard_GetTypedRunLength(void *p);
void Keyboard_ResetTypedRun(void *p);
s32 Keyboard_HandleModeKey(void *p, u32 a, s32 b);
s32 Keyboard_InsertChar(void *p, void *q, u32 a, void *r, s32 b, s32 c, s32 d, s32 e);
s32 Keyboard_ModifyCharKey103(void *p, u32 a);
s32 Keyboard_ModifyCharKey104(void *p, u32 a);
s32 Keyboard_ModifyCharKey105(void *p, u32 a);
s32 Keyboard_ReplaceCharBeforeCursor(void *p, void *q, u32 a, u32 b, s32 c, s32 d);
s32 Keyboard_IsControlCode(void *p, u32 a);
s32 Keyboard_IsFull(void *p);
s32 Keyboard_IsTooWide(void *p);
s32 Keyboard_TouchKey(void *p, s32 a, s32 b);
void Keyboard_BeginPaste(void *p);
void Keyboard_EndPaste(void *p);
void Keyboard_PlayPasteSe(void *p);
void Keyboard_PlayCopySe(void *p);
u32 Keyboard_DeleteRange(void *p, void *q, u32 a, u32 b, s32 c);
u32 Keyboard_HitTestText(void *p, void *q, u32 a, u32 b, u32 c, void *d);
void Keyboard_ResetKeyPalettes(void *p);
void Keyboard_DisableKey(void *p, s32 a);
void Keyboard_EnableKey(void *p, s32 a);
void Keyboard_DisableModifierKeys(void *p);
void Keyboard_UpdateModifierKeys(void *p, s32 a);
BOOL Keyboard_UpdatePressedKey(void *p);
BOOL Keyboard_TickKeyRepeat(void *p);
s32 Keyboard_GetPressedKey(void *p);
void Keyboard_EnterTabRowAtX(void *p, s32 a);
s32 Keyboard_MoveCursor(void *p, s32 a);
void Keyboard_LoadObjGfx(void *p);
BOOL Keyboard_TouchPageTab(void *p);
void Keyboard_EndFrame(void *p, s32 a);
void Keyboard_LoadScreenNow(void *p, s32 a);
void Keyboard_LoadScreenFile(void *p, const void *q);
void Keyboard_LoadLetterChars(void *p, s32 a);
void Keyboard_Shutdown(void *p);
void Keyboard_Init(void *p, s32 a);
s32 Keyboard_SetMode(void *p, s32 a, s32 b, s32 c);
void Keyboard_RestoreLastPage(void *p, s32 a);
void Keyboard_Draw(void *p, u32 a, void *b, u32 c);
void Keyboard_DrawCopyPasteKeys(void *p, u32 a, void *b);
void Keyboard_DrawCaret(void *p, s32 a, s32 b, s32 c);
}

// Real class layouts for the objects whose constructors/destructors the compiler emits calls to.
class Unk_020e0488 {  // text window, 0x40 bytes
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    u8 unk_04[0x3c];
};

class Unk_020e0470 {  // 0x38 bytes
public:
    Unk_020e0470();
    ~Unk_020e0470();
    u8 unk_00[0x38];
};

class BgVramTask {  // screen upload helper, 0x24 bytes
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    u8 unk_04[0x20];
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class MenuCursorBase : public HandCursor {};

// +0x3e64 sub-object (0x64 bytes)
class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u32 unk_04[0x60 / 4];
};

// +0x3d00 sub-object (0x164 bytes)
class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    u32 unk_00[0x164 / 4];
};

// +0x3f80 holder object, 0x108 bytes
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    u32 unk_00[0x108 / 4];
};

// +0xb0 menu sub-object, 0x94 bytes
class GeneralMenuHeader {
public:
    GeneralMenuHeader();
    ~GeneralMenuHeader();
    u32 unk_00[0x94 / 4];
};

// 0x24-byte record object (ctor/dtor in main)
class ItemName {
public:
    ItemName();
    ~ItemName();
    u32 unk_00[9];
};

// +0x144 ov095 menu sub-object, 0x23bc bytes
class Keyboard {
public:
    Keyboard() : unk_22f4(), unk_233c() {}
    ~Keyboard() {}
    u32 unk_00[0x22f4 / 4];
    BgVramTask unk_22f4[2];
    Unk_020e0488 unk_233c[2];
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
    void initSlideOut(s32 a, s32 b);
    void initSlideIn(s32 a, s32 b);
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

// Embedded polymorphic sub-object at +0x3e64 (vfunc_0c is called by func_ov126_02298ea4)
class Unk_ov126_02298ea4_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

static inline BOOL Unk_ov126_02298c4c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

class NameEntryMenu;
typedef void (NameEntryMenu::*Unk_ov126_02299ae8_Fn)();

class NameEntryMenu;
struct Unk_ov126_SceneEntry {
    NameEntryMenu *(*factory)();
    u16 a;
    u16 b;
};

// Vtable 0x02299ae8, size 0x40c8
class NameEntryMenu : public MenuProc {
public:
    NameEntryMenu()
        : unk_b0(), unk_144(), unk_3d00(), unk_3e64(), unk_3ec8(), unk_3f08(), unk_3f48(), unk_3f80() {}
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
    void censorText();
    void commitEntry();
    void storeFriendField2();
    void storeFriendField1();
    void storeStatsPatternName();
    void func_ov126_02297328();
    s32 storeTownName();
    void storePlayerName();
    void checkPasswordAnswer();
    void checkItemNameAnswer();
    void checkGeneralAnswer();
    void storeDesignName();
    void loadInitialText();
    void loadFriendField2();
    void loadFriendField1();
    u8 * getFriendEntry();
    void func_ov126_0229763c();
    void loadDesignName();
    BOOL tryStartConfirm();
    BOOL tryCopyButton();
    BOOL tryPasteButton();
    BOOL tryBackspaceButton();
    BOOL tryPressKey();
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void snapCursor();
    void moveCursorToTarget();
    void hideCursor();
    void showCursor();
    void setupDialogButtons();
    BOOL touchDialogButtons();
    void playErrorSe();
    void highlightSelection();
    void redrawText();
    BOOL insertChar(u32 x);
    BOOL insertCharRaw(u32 x);
    BOOL backspace(s32 x);
    BOOL applyModifierKey(s32 x);
    s32 pressKeyCode(s32 x);
    s32 touchKey();
    void paste();
    void copy();
    void extendSelection();
    void startSelection();
    void deleteSelection();
    void clearSelection();
    BOOL hasSelection();
    s32 navigateText(s32 a);
    BOOL touchTextField();
    void setCursorFromTouchX(s32 v);
    void updateCaretX();
    u32 getCharBeforeCursor();
    void setCursorIndex(u32 v);
    void resetTextCursor();
    void refreshKeys();
    BOOL onBackspaceEmpty();
    BOOL confirm();
    void closeWithResult(s32 a);
    void enterDialogInput();
    void enterDialogButtons();
    void enterDialogTouch();
    void showMessage(u32 v, u32 w);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
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
    void leaveTextToKeys();
    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadObjGfx();
    void loadBg();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void init();
    void updateBgScroll();
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

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u8 unk_a6;
    /* 0x0a7 */ u8 unk_a7;
    /* 0x0a8 */ u8 unk_a8;
    /* 0x0a9 */ u8 unk_a9;
    /* 0x0aa */ u8 unk_aa;
    /* 0x0ab */ u8 unk_ab;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ GeneralMenuHeader unk_b0;
    /* 0x144 */ Keyboard unk_144;
    /* 0x2500 */ u32 unk_2500[(0x3d00 - 0x2500) / 4];
    /* 0x3d00 */ MenuBottomButtons unk_3d00;
    /* 0x3e64 */ MenuCursorBuf0 unk_3e64;
    /* 0x3ec8 */ Unk_020e0488 unk_3ec8;
    /* 0x3f08 */ Unk_020e0488 unk_3f08;
    /* 0x3f48 */ Unk_020e0470 unk_3f48;
    /* 0x3f80 */ MenuErrorMessage unk_3f80;
    /* 0x4088 */ u8 unk_4088[0x20];
    /* 0x40a8 */ u8 unk_40a8[0x20];
};

// Named data: their definition order sets the .data order (compiler-generated constants would not reproduce it).
extern "C" NameEntryMenu *NameEntryMenu_Create();
extern "C" Unk_ov126_SceneEntry data_ov126_022999e0 = {NameEntryMenu_Create, 0xab, 0xaf};
extern "C" u32 data_ov126_02299ad0[4] = {0x802040c8, 0x000051c0, 0x404000c8, 0xffff51c4};
extern "C" void _ZN13NameEntryMenu15transitionAct01Ev();
extern "C" void *data_ov126_02299ac0[2] = {(void *)_ZN13NameEntryMenu15transitionAct01Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct00Ev();
extern "C" void *data_ov126_02299ac8[2] = {(void *)_ZN13NameEntryMenu15transitionAct00Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct04Ev();
extern "C" void *data_ov126_02299a40[2] = {(void *)_ZN13NameEntryMenu9mainAct04Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct02Ev();
extern "C" void *data_ov126_02299ab8[2] = {(void *)_ZN13NameEntryMenu15transitionAct02Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct03Ev();
extern "C" void *data_ov126_02299ab0[2] = {(void *)_ZN13NameEntryMenu15transitionAct03Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct04Ev();
extern "C" void *data_ov126_02299aa8[2] = {(void *)_ZN13NameEntryMenu15transitionAct04Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct05Ev();
extern "C" void *data_ov126_02299aa0[2] = {(void *)_ZN13NameEntryMenu15transitionAct05Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct06Ev();
extern "C" void *data_ov126_02299a98[2] = {(void *)_ZN13NameEntryMenu15transitionAct06Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct07Ev();
extern "C" void *data_ov126_02299a90[2] = {(void *)_ZN13NameEntryMenu15transitionAct07Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct08Ev();
extern "C" void *data_ov126_02299a88[2] = {(void *)_ZN13NameEntryMenu15transitionAct08Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct09Ev();
extern "C" void *data_ov126_02299a80[2] = {(void *)_ZN13NameEntryMenu15transitionAct09Ev, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct0AEv();
extern "C" void *data_ov126_02299a78[2] = {(void *)_ZN13NameEntryMenu15transitionAct0AEv, 0};
extern "C" void _ZN13NameEntryMenu15transitionAct0BEv();
extern "C" void *data_ov126_02299a70[2] = {(void *)_ZN13NameEntryMenu15transitionAct0BEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct09Ev();
extern "C" void *data_ov126_02299a68[2] = {(void *)_ZN13NameEntryMenu9mainAct09Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct00Ev();
extern "C" void *data_ov126_02299a10[2] = {(void *)_ZN13NameEntryMenu9mainAct00Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct01Ev();
extern "C" void *data_ov126_02299a58[2] = {(void *)_ZN13NameEntryMenu9mainAct01Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0BEv();
extern "C" void *data_ov126_02299a50[2] = {(void *)_ZN13NameEntryMenu9mainAct0BEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct03Ev();
extern "C" void *data_ov126_02299a60[2] = {(void *)_ZN13NameEntryMenu9mainAct03Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct02Ev();
extern "C" void *data_ov126_02299a48[2] = {(void *)_ZN13NameEntryMenu9mainAct02Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct05Ev();
extern "C" void *data_ov126_02299a38[2] = {(void *)_ZN13NameEntryMenu9mainAct05Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct06Ev();
extern "C" void *data_ov126_02299a30[2] = {(void *)_ZN13NameEntryMenu9mainAct06Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct07Ev();
extern "C" void *data_ov126_02299a28[2] = {(void *)_ZN13NameEntryMenu9mainAct07Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct08Ev();
extern "C" void *data_ov126_02299a20[2] = {(void *)_ZN13NameEntryMenu9mainAct08Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0FEv();
extern "C" void *data_ov126_02299a18[2] = {(void *)_ZN13NameEntryMenu9mainAct0FEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0AEv();
extern "C" void *data_ov126_022999e8[2] = {(void *)_ZN13NameEntryMenu9mainAct0AEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct10Ev();
extern "C" void *data_ov126_02299a00[2] = {(void *)_ZN13NameEntryMenu9mainAct10Ev, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0CEv();
extern "C" void *data_ov126_02299a08[2] = {(void *)_ZN13NameEntryMenu9mainAct0CEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0DEv();
extern "C" void *data_ov126_022999f8[2] = {(void *)_ZN13NameEntryMenu9mainAct0DEv, 0};
extern "C" void _ZN13NameEntryMenu9mainAct0EEv();
extern "C" void *data_ov126_022999f0[2] = {(void *)_ZN13NameEntryMenu9mainAct0EEv, 0};

extern "C" NameEntryMenu *NameEntryMenu_Create() { return new NameEntryMenu(); }

BOOL NameEntryMenu::vfunc_00() {
    init();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL NameEntryMenu::vfunc_0c() {
    s32 t = MenuCtrl_GetMode();
    if ((u32)t >= 0x18 && (u32)t <= 0x1b) {
        void *h = ProcBase_GetParent(this);
        if (MenuTabBar_onTabMenuClosed(h) == 6) {
            MenuTabBar_showTabs(h);
        }
    } else {
        MenuLauncher_onChildClosed(ProcBase_GetParent(this));
    }
    releaseResources();
    return TRUE;
}

BOOL NameEntryMenu::onDraw() {
    u8 *p = (u8 *)unk_94;
    if (!testFlags(1)) {
        return FALSE;
    }
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&unk_3e64);
    }
    GeneralMenuHeader_drawWithIcon(&unk_b0, 0, p);
    MenuBottomButtons_drawAt(&unk_3d00, getSlideOffsetY());
    Keyboard_Draw(&unk_144, 0x80, p + 0x60, 1);
    Keyboard_DrawCopyPasteKeys(&unk_144, 0x80, p + 0x60);
    if (testFlags(0x100)) {
        Oam_DrawCell(1, data_ov126_02299ad0, (u32)unk_a0 + 0x80, p + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (testFlags(2)) {
        s32 a = unk_98;
        s32 b = unk_9c;
        unk_a7 = unk_a7 + 1;
        if ((unk_a7 & 0x10) != 0) {
            Keyboard_DrawCaret(&unk_144, a, b, 2);
        }
    }
    return TRUE;
}

BOOL NameEntryMenu::execTransition() {
    static Unk_ov126_02299ae8_Fn tbl[12] = {*(Unk_ov126_02299ae8_Fn *)data_ov126_02299ac8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ac0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ab8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ab0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299aa8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299aa0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a98, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a90, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a88, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a80, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a78, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a70};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

void NameEntryMenu::runMainState() {
    static Unk_ov126_02299ae8_Fn tbl[17] = {*(Unk_ov126_02299ae8_Fn *)data_ov126_02299a10, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a58, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a48, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a60, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a40, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a38, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a30, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a28, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a20, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a68, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999e8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a50, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a08, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999f8, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999f0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a18, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a00};
    (this->*tbl[unk_8d])();
}

BOOL NameEntryMenu::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        u32 r5 = MenuCtrl_GetMode();
        switch (r5) {
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
            switch (unk_8d) {
            case 0: case 1: case 2: case 4: case 6: case 7: case 9: case 10: case 11: case 12: case 13: case 14:
                clearFlags(2);
                hideCursor();
                MenuTabBar_selectTab(ProcBase_GetParent(this), 7);
                setFlags(0x40);
                beginSubSlideOut(0xa, 0, 0, 0x30);
                updateBgScroll();
                setTransitionState(5);
                setPhase(1);
                if (r5 == 0x19 || r5 == 0x1b) {
                    FriendEntry_Clear(getFriendEntry());
                }
                break;
            case 3:
            case 5:
            case 8:
                break;
            }
            break;
        }
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL NameEntryMenu::execPhase3() {
    return TRUE;
}

BOOL NameEntryMenu::execPhase4() {
    return TRUE;
}

BOOL NameEntryMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void NameEntryMenu::transitionAct00() {
    setupBgLayers();
    loadBg();
    setTransitionState(1);
}

void NameEntryMenu::transitionAct01() {
    Keyboard_RestoreLastPage(&unk_144, 6);
    loadObjGfx();
    redrawText();
    setupDialogButtons();
    beginSubSlideIn(0xa, 4, 0, 0x30);
    Gfx2d_ShowLayer(4);
    Gfx2d_ShowLayer(6);
    updateBgScroll();
    setFlags(1);
    setTransitionState(2);
}

void NameEntryMenu::transitionAct02() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
        resetTextCursor();
    }
    updateBgScroll();
}

void NameEntryMenu::transitionAct03() {
    clearFlags(2);
    u32 r5 = MenuCtrl_GetMode();
    if (r5 >= 0x18 && r5 <= 0x1b) {
        void *r6 = ProcBase_GetParent(this);
        switch (r5) {
        case 0x18:
        case 0x1a:
            MenuTabBar_selectTab(r6, 6);
            if (!testFlags(0x40)) {
                MenuCtrl_SetFriendPageFromIndex();
            }
            break;
        case 0x19:
            if (testFlags(0x40)) {
                MenuTabBar_selectTab(r6, 0xc);
            } else {
                MenuTabBar_selectTab(r6, 6);
                MenuCtrl_SetFriendPageFromIndex();
                if (CommManager_isSlotActive(gCommManager, ((s32 *)gCommManager)[0x64 / 4])) {
                    s32 t = Net_GetMode();
                    if (t == 3) goto yes;
                    if (t == 4) {
                    yes:
                        setTransitionState(4);
                        transitionAct04();
                        return;
                    }
                }
            }
            break;
        case 0x1b:
            if (testFlags(0x40)) {
                MenuTabBar_selectTab(r6, 0xe);
            } else {
                MenuTabBar_selectTab(r6, 0xa);
            }
            break;
        }
    } else {
        MenuLauncher_setNextRequest(ProcBase_GetParent(this), 0x44, 1);
    }
    beginSubSlideOut(0xa, 0, 0, 0x30);
    updateBgScroll();
    setTransitionState(5);
}

void NameEntryMenu::transitionAct04() {
    void *r4 = getFriendEntry();
    s32 r6 = MenuCtrl_GetIndex();
    if (Net_WifiAddFriend(r6, DwcFriendData_GetBytes(FriendEntry_GetFriendData(r4)))) {
        beginSubSlideOut(0xa, 0, 0, 0x30);
        updateBgScroll();
        setTransitionState(5);
    }
}

void NameEntryMenu::transitionAct05() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(6);
        clearFlags(1);
        setPhase(5);
        if (testFlags(0x40)) {
            MenuCtrl_SetResult(0);
        } else {
            MenuCtrl_SetResult(1);
            commitEntry();
            MenuCtrl_SetText(unk_4088, unk_a6);
            s32 t = MenuCtrl_GetMode();
            if (t != 0x18 && t != 0x19 && t != 0x1a) {
            } else {
                MenuTabBar_requestSaveOnClose(ProcBase_GetParent(this));
            }
        }
    } else {
        updateBgScroll();
    }
}

void NameEntryMenu::transitionAct06() {
    initSlideOut(0, 0);
    setTransitionState(7);
}

void NameEntryMenu::transitionAct07() {
    if (stepSlideOut(-1)) {
        initSlideIn(0, 0);
        if (testFlags(0x40)) {
            MenuBottomButtonsBody_setLayoutYesNo09(&unk_3d00, 0x87);
        } else {
            MenuBottomButtonsBody_setLayoutYesNo09(&unk_3d00, 0x22);
        }
        setTransitionState(8);
    }
}

void NameEntryMenu::transitionAct08() {
    if (stepSlideIn(-1)) {
        setPhase(2);
        enterDialogInput();
    }
}

void NameEntryMenu::transitionAct09() {
    initSlideOut(0, 0);
    setTransitionState(0xa);
}

void NameEntryMenu::transitionAct0A() {
    if (stepSlideOut(-1)) {
        initSlideIn(0, 0);
        setupDialogButtons();
        setTransitionState(0xb);
    }
}

void NameEntryMenu::transitionAct0B() {
    if (stepSlideIn(-1)) {
        setPhase(2);
        resumeInput();
    }
}

void NameEntryMenu::updateBgScroll() {
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0);
    unk_94 = getSlideOffsetY();
}

void NameEntryMenu::init() {
    unk_a4 = 0;
    unk_a0 = 0;
    u32 r5 = MenuCtrl_GetMode();
    switch (r5) {
    case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: case 0x10: case 0x11: case 0x12:
    case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x1a:
        unk_ad = 2;
        break;
    case 0x19:
    case 0x1b:
        setFlags(0x20);
        unk_ad = 0;
        break;
    }
    switch (unk_ad) {
    case 0:
        Keyboard_Init(&unk_144, 5);
        break;
    case 1:
    case 2:
        Keyboard_Init(&unk_144, 4);
        break;
    case 3:
        Keyboard_Init(&unk_144, 3);
        break;
    }
    switch (GeneralMenuHeader_GetStyle(&unk_b0)) {
    case 0:
        unk_a6 = 0x10;
        unk_ab = 0x50;
        unk_ac = 0xb8;
        unk_af = 0x68;
        break;
    case 1:
        unk_a6 = 0x8;
        unk_ab = 0x60;
        unk_ac = 0xa0;
        unk_af = 0x40;
        break;
    case 2:
        unk_a6 = 0x20;
        unk_ab = 0x30;
        unk_ac = 0xd0;
        unk_af = 0xa0;
        break;
    case 3:
        unk_a6 = 0x4;
        unk_ab = 0x68;
        unk_ac = 0x90;
        unk_af = 0x28;
        break;
    case 4:
        unk_a6 = 0xa;
        unk_ab = 0x58;
        unk_ac = 0xa8;
        unk_af = 0x50;
        break;
    }
    Mem_Clear(unk_4088, 0x20);
    Mem_Clear(unk_40a8, 0x20);
    loadInitialText();
    if (func_020512f8(unk_4088, unk_a6) == 0) {
        Mem_Clear(unk_4088, 0x20);
    }
    if (r5 == 0x10 || r5 == 0x18 || r5 == 0x19 || r5 == 0x12) {
        setFlags(0x100);
    }
}

void NameEntryMenu::releaseResources() {
    func_ov111_02296840(&unk_b0);
    Keyboard_Shutdown(&unk_144);
    MenuBottomButtons_freeTexts(&unk_3d00);
    func_0206fc44(&unk_3ec8);
}

void NameEntryMenu::preInputUpdate() {
    preStateUpdate();
    ((Unk_ov126_02298ea4_Sub *)&unk_3e64)->vfunc_0c();
}

void NameEntryMenu::postInputUpdate() {
    postStateUpdate();
}

void NameEntryMenu::preStateUpdate() {
    clearFlags(0x10);
    func_ov111_02296840(&unk_b0);
    MenuBottomButtons_freeTexts(&unk_3d00);
    func_0206fc44(&unk_3ec8);
}

void NameEntryMenu::postStateUpdate() {
    Keyboard_EndFrame(&unk_144, 6);
}

void NameEntryMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(4, 3);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void NameEntryMenu::loadBg() {
    GeneralMenuHeader_loadBgGfxForStyle(&unk_b0, 4);
    Gfx2d_LoadCharFile("menu/chat2/b_cht.bch", (void *)gCurrentHeap, 4, 0x13d, 0x13d, 0x1e9);
    Keyboard_LoadScreenFile(&unk_144, "menu/letter/b_key.bsc");
    refreshKeys();
    Keyboard_LoadScreenNow(&unk_144, 6);
    Keyboard_LoadLetterChars(&unk_144, 6);
}

void NameEntryMenu::loadObjGfx() {
    Keyboard_LoadObjGfx(&unk_144);
    FishBookTab_moveCursorTo(&unk_b0, 6);
    Gfx2d_LoadPaletteFile("menu/han/obj.bpl", (void *)gCurrentHeap, 8, 5, 5, 5);
    MenuButtons_LoadTextColors(&unk_3d00);
    if (testFlags(0x100)) {
        u32 buf[0x44 / 4];
        func_0206fcc8(buf);
        MsgString_clear(buf);
        String_SetSlot(0, buf);
        if (MenuCtrl_GetMode() == 0x12) {
            func_0206f9fc(&unk_3ec8, 0x80);
        } else {
            func_0206f9fc(&unk_3ec8, 0x66);
        }
        func_0206fb9c(&unk_3ec8, 8, 0x1c0, 6, 0xf, 0, 0);
        func_0206fab4(&unk_3ec8, 0, 0);
        func_0206fca8(buf);
    }
}

void NameEntryMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    BOOL r4 = Keyboard_UpdatePressedKey(&unk_144);
    if (Unk_ov126_02298c4c_Both()) {
        if (!touchDialogButtons()) {
            if (!touchTextField()) {
                if (Keyboard_TouchPageTab(&unk_144)) {
                    Keyboard_SetMode(&unk_144, 8, 6, 1);
                    redrawText();
                } else if (gTouchCurY >= 0x48) {
                    if (!r4) {
                        s32 r = touchKey();
                        if (r != 0) {
                            if (r == 1) {
                                setMainState(2);
                            }
                        }
                    }
                }
            }
        }
    }
}

void NameEntryMenu::mainAct01() {
    if (gTouchHeld == 0) {
        setMainState(0);
    } else {
        u8 old = unk_a8;
        setCursorFromTouchX(gTouchCurX);
        if (old != unk_a8) {
            extendSelection();
            redrawText();
            Snd_PlaySe(0x15);
        }
    }
}

void NameEntryMenu::mainAct02() {
    if (gTouchHeld == 0) {
        setMainState(0);
    } else if (Keyboard_TickKeyRepeat(&unk_144)) {
        s32 t = Keyboard_GetPressedKey(&unk_144);
        s32 r = Keyboard_GetKeyCode(&unk_144, t, 8);
        pressKeyCode(r);
        Keyboard_HighlightKey(&unk_144, t);
    }
}

void NameEntryMenu::mainAct03() {
    if (checkSwitchToButtons(1)) {
        enterDialogButtons();
    } else if (MenuBottomButtonsBody_isTouched(&unk_3d00, 3)) {
        MenuBottomButtonsBody_setSelected(&unk_3d00, 3);
        unk_8c = 3;
        setMainState(0xf);
    } else if (MenuBottomButtonsBody_isTouched(&unk_3d00, 4)) {
        MenuBottomButtonsBody_setSelected(&unk_3d00, 4);
        unk_8c = 9;
        setMainState(0xf);
    }
}

void NameEntryMenu::mainAct04() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        switch (Keyboard_MoveCursor(&unk_144, takeRepeatedKeys())) {
        case 1:
            MenuCursor_switchToAnim01(&unk_3e64);
            moveCursorToTarget();
            break;
        case 2:
            MenuCursor_switchToAnim0D(&unk_3e64);
            moveCursorToTarget();
            break;
        case 3:
            MenuCursor_switchToAnim07(&unk_3e64);
            moveCursorToTarget();
            break;
        case 4:
            MenuCursor_switchToAnim01(&unk_3e64);
            setFlags(0x80);
            setMainState(6);
            moveCursorToTarget();
            break;
        case 0:
        default:
            if (tryPressKey()) { return; }
            if (tryBackspaceButton()) { return; }
            if (tryCopyButton()) { return; }
            if (tryPasteButton()) { return; }
            if (tryStartConfirm()) { return; }
        }
    }
}

void NameEntryMenu::mainAct05() {
    if (checkSwitchToTouch()) {
        enterDialogTouch();
    }
}

void NameEntryMenu::mainAct06() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        s32 r = navigateText(takeRepeatedKeys());
        switch (r) {
        case 1:
            Keyboard_ResetTypedRun(&unk_144);
            clearSelection();
            updateCaretX();
            redrawText();
            snapCursor();
            Snd_PlaySe(0xb);
            break;
        case 2:
            Keyboard_EnterTabRowAtX(&unk_144, MenuCursorBase_getScreenX(&unk_3e64));
            leaveTextToKeys();
            break;
        default: {
            u32 old = unk_a8;
            if (tryBackspaceButton()) {
                if (old != unk_a8) {
                    snapCursor();
                }
            } else if (tryCopyButton()) {
            } else if (tryPasteButton()) {
            } else if (tryStartConfirm()) {
            } else if ((gPad[1] & 1) != 0) {
                setMainState(7);
                startSelection();
            }
        }
        }
    }
}

void NameEntryMenu::leaveTextToKeys() {
    clearFlags(0x80);
    setMainState(4);
    moveCursorToTarget();
}

void NameEntryMenu::mainAct07() {
    if ((gPad[0] & 1) == 0) {
        setMainState(6);
    } else if (navigateText(takeRepeatedKeys()) == 1) {
        Keyboard_ResetTypedRun(&unk_144);
        extendSelection();
        updateCaretX();
        redrawText();
        snapCursor();
        Snd_PlaySe(0x15);
    }
}

void NameEntryMenu::mainAct08() {
    if (MenuCursorBase_isMoving(&unk_3e64) == 0) {
        setMainState(unk_ae);
        runMainState();
    }
}

void NameEntryMenu::mainAct09() {
    if (HandCursor_isAnimDone(&unk_3e64)) {
        s32 t = Keyboard_PressCursorKey(&unk_144);
        s32 r = pressKeyCode(Keyboard_GetKeyCode(&unk_144, t, 8));
        if (r == 1 && (gPad[0] & 1) != 0) {
            Keyboard_StartKeyRepeat(&unk_144);
            setMainState(0xa);
            Keyboard_HighlightKey(&unk_144, t);
        } else if (r == 4) {
            Keyboard_ClearHighlight(&unk_144);
        } else if (r != 3) {
            releaseCursor();
        }
    }
}

void NameEntryMenu::mainAct0A() {
    if ((gPad[0] & 1) == 0) {
        releaseCursor();
    } else if (Keyboard_TickKeyRepeat(&unk_144)) {
        s32 t = Keyboard_GetPressedKey(&unk_144);
        s32 r = Keyboard_GetKeyCode(&unk_144, t, 8);
        pressKeyCode(r);
        Keyboard_HighlightKey(&unk_144, t);
    }
}

void NameEntryMenu::mainAct0B() {
    if (HandCursor_isAnimDone(&unk_3e64)) {
        refreshCursor();
        setMainState(4);
    }
}

void NameEntryMenu::mainAct0C() {
    if ((gPad[0] & 2) == 0) {
        setMainState(unk_ae);
    } else if (Keyboard_TickKeyRepeat(&unk_144)) {
        Keyboard_ShrinkTypedRun(&unk_144);
        if (backspace(0)) {
            if (testFlags(0x80)) {
                snapCursor();
            }
        } else {
            onBackspaceEmpty();
        }
    }
}

void NameEntryMenu::mainAct0D() {
    if ((gPad[0] & 0x200) == 0) {
        setMainState(unk_ae);
        refreshKeys();
    }
}

void NameEntryMenu::mainAct0E() {
    if ((gPad[0] & 0x100) == 0) {
        setMainState(unk_ae);
        refreshKeys();
    }
}

void NameEntryMenu::mainAct0F() {
    if (MenuBottomButtonsBody_stepPress(&unk_3d00)) {
        if (HandCursor_getAnim(&unk_3e64)) {
            s32 a = MenuBottomButtonsBody_getPressOffset(&unk_3d00);
            s32 b = MenuBottomButtonsBody_getTargetX(&unk_3d00, -1);
            s32 c = MenuBottomButtonsBody_getTargetY(&unk_3d00, -1);
            MenuCursorBase_warpTo(&unk_3e64, a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void NameEntryMenu::mainAct10() {
    Keyboard_UpdatePressedKey(&unk_144);
    if (MenuErrorMessage_update(&unk_3f80, 1)) {
        resumeInput();
    }
}

void NameEntryMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void NameEntryMenu::startButtonInput() {
    restartKeyRepeat();
    showCursor();
    setMainState(4);
}

void NameEntryMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void NameEntryMenu::showMessage(u32 v, u32 w) {
    u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = v;
    MenuErrorMessage_open(&unk_3f80, buf, w, 0);
    setMainState(0x10);
    hideCursor();
}

void NameEntryMenu::enterDialogTouch() {
    hideCursor();
    setMainState(3);
}

void NameEntryMenu::enterDialogButtons() {
    restartKeyRepeat();
    setMainState(5);
}

void NameEntryMenu::enterDialogInput() {
    if (MenuCtrl_IsTouch()) {
        enterDialogTouch();
    } else {
        enterDialogButtons();
    }
}

void NameEntryMenu::closeWithResult(s32 a) {
    if (a == 0) {
        MenuBottomButtonsBody_setSelected(&unk_3d00, 6);
        if (unk_ad == 1) {
            setFlags(0x40);
        } else {
            clearFlags(0x40);
        }
    } else {
        MenuBottomButtonsBody_setSelected(&unk_3d00, 7);
        setFlags(0x40);
    }
    if (testFlags(0x20)) {
        if (testFlags(0x40)) {
            Snd_PlaySe(0x2a);
        } else if (MenuCtrl_GetMode() == 0x19) {
            Snd_PlaySe(0x27);
        } else {
            Snd_PlaySe(0x29);
        }
    } else if (testFlags(0x40)) {
        Snd_PlaySe(0x28);
    } else {
        Snd_PlaySe(0x27);
    }
    unk_8c = 3;
    setMainState(0xf);
}

BOOL NameEntryMenu::confirm() {
    if (MenuBottomButtonsBody_isButtonDisabled(&unk_3d00, 6)) {
        playErrorSe();
        return FALSE;
    }
    if (unk_ad == 0 || unk_ad == 2) {
        hideCursor();
        closeWithResult(0);
        return TRUE;
    }
    playErrorSe();
    return FALSE;
}

BOOL NameEntryMenu::onBackspaceEmpty() {
    switch (unk_ad) {
    case 0:
        hideCursor();
        closeWithResult(1);
        return TRUE;
    case 1:
        hideCursor();
        closeWithResult(0);
        return TRUE;
    default:
        playErrorSe();
        return FALSE;
    }
}

void NameEntryMenu::refreshKeys() {
    if (unk_ad == 0 || unk_ad == 2) {
        if (func_020512f8(unk_4088, unk_a6) == 0) {
            MenuBottomButtonsBody_disableButton(&unk_3d00, 6);
        } else {
            MenuBottomButtonsBody_enableButton(&unk_3d00, 6);
        }
    }
    Keyboard_DisableKey(&unk_144, 0);
    if (hasSelection()) {
        Keyboard_EnableKey(&unk_144, 0xb);
    } else {
        Keyboard_DisableKey(&unk_144, 0xb);
    }
    if (testFlags(8)) {
        Keyboard_EnableKey(&unk_144, 0xc);
    } else {
        Keyboard_DisableKey(&unk_144, 0xc);
    }
    if (hasSelection()) {
        Keyboard_DisableModifierKeys(&unk_144);
        Keyboard_EnableKey(&unk_144, 6);
    } else if (unk_a8 == 0) {
        Keyboard_DisableModifierKeys(&unk_144);
    } else {
        Keyboard_UpdateModifierKeys(&unk_144, getCharBeforeCursor());
    }
}

void NameEntryMenu::resetTextCursor() {
    setFlags(2);
    unk_98 = unk_ab;
    unk_9c = 0x28;
    setCursorIndex(0);
    clearSelection();
    Keyboard_ResetKeyPalettes(&unk_144);
    refreshKeys();
}

void NameEntryMenu::setCursorIndex(u32 v) {
    unk_a8 = v;
    unk_a7 = 0x10;
}

u32 NameEntryMenu::getCharBeforeCursor() {
    if (unk_a8 == 0) return 0;
    return *((u8 *)this + (unk_a8 - 1) + 0x4088);
}

void NameEntryMenu::updateCaretX() {
    unk_98 = unk_ab;
    unk_9c = 0x28;
    unk_98 = unk_98 + (u8)func_02051348(unk_4088, unk_a8);
}

void NameEntryMenu::setCursorFromTouchX(s32 v) {
    s32 t = v - unk_ab;
    if (t < 0) t = 0;
    u8 out[8];
    unk_98 = Keyboard_HitTestText(&unk_144, unk_4088, unk_a6, unk_af, (u8)t, out);
    unk_98 = unk_98 + unk_ab;
    setCursorIndex(out[0]);
    refreshKeys();
}

BOOL NameEntryMenu::touchTextField() {
    s32 r1 = gTouchCurX;
    s32 r2 = gTouchCurY;
    if (r2 < 0x28 || r2 > 0x38) return FALSE;
    if (r1 < unk_ab - 0xc) return FALSE;
    if (r1 > unk_ac + 0xc) return FALSE;
    setCursorFromTouchX(r1);
    startSelection();
    setMainState(1);
    Keyboard_ResetTypedRun(&unk_144);
    redrawText();
    return TRUE;
}

s32 NameEntryMenu::navigateText(s32 a) {
    void *p = (void *)a;
    if (p == 0) return 0;
    u32 r4 = unk_a8;
    if (MenuKeys_HasLeft(p) != 0) {
        if (r4 != 0) {
            setCursorIndex((u8)(r4 - 1));
            return 1;
        }
        return 3;
    }
    if (MenuKeys_HasRight(p) != 0) {
        s32 n = func_020512e0(unk_4088, unk_a6);
        s32 t = r4 + 1;
        if (t <= n) {
            setCursorIndex((u8)t);
            return 1;
        }
        return 4;
    }
    if (MenuKeys_HasDown(p) != 0) return 2;
    return 0;
}

BOOL NameEntryMenu::hasSelection() {
    if (testFlags(4) == 0) goto no;
    if (unk_a9 != unk_aa) goto yes;
no:
    return FALSE;
yes:
    return TRUE;
}

void NameEntryMenu::clearSelection() {
    unk_a9 = 0;
    unk_aa = 0;
    clearFlags(4);
}

void NameEntryMenu::deleteSelection() {
    u32 e = unk_aa;
    u32 s = unk_a9;
    u32 lo, hi;
    if (s > e) {
        lo = e;
        hi = s;
    } else {
        lo = s;
        hi = e;
    }
    u8 r = Keyboard_DeleteRange(&unk_144, unk_4088, lo, hi, unk_a6);
    setCursorIndex(r);
    clearSelection();
}

void NameEntryMenu::startSelection() {
    unk_a9 = unk_a8;
    unk_aa = unk_a8;
    clearFlags(4);
}

void NameEntryMenu::extendSelection() {
    unk_aa = unk_a8;
    if (unk_aa != unk_a9) {
        setFlags(4);
    } else {
        clearFlags(4);
    }
}

void NameEntryMenu::copy() {
    if (hasSelection() != 0) {
        u32 e = unk_aa;
        u32 s = unk_a9;
        s32 r6, r4;
        if (s > e) {
            r6 = e;
            r4 = s - e;
        } else {
            r6 = s;
            r4 = e - s;
        }
        Mem_Clear(unk_40a8, 0x20);
        Mem_Copy(unk_4088 + r6, unk_40a8, r4);
        setFlags(8);
        Keyboard_PlayCopySe(&unk_144);
        refreshKeys();
    }
}

void NameEntryMenu::paste() {
    if (testFlags(8) != 0) {
        Keyboard_BeginPaste(&unk_144);
        Keyboard_ResetTypedRun(&unk_144);
        if (hasSelection() != 0) deleteSelection();
        s32 n = func_020512e0(unk_40a8, 0x20);
        u8 v;
        v = unk_a8;
        s32 i;
        for (i = 0; i < n; i++) {
            if (Keyboard_InsertChar(&unk_144, unk_4088, unk_40a8[i], &v, unk_a6, unk_af, 0, 0) == 0) {
                if (i == 0) playErrorSe();
                i = n;
            }
        }
        Keyboard_PlayPasteSe(&unk_144);
        setCursorIndex(v);
        updateCaretX();
        redrawText();
        Keyboard_EndPaste(&unk_144);
    }
}

s32 NameEntryMenu::touchKey() {
    Keyboard_ClearHighlight(&unk_144);
    s32 r4 = Keyboard_TouchKey(&unk_144, gTouchCurX, gTouchCurY);
    if (r4 != -1) {
        s32 r1 = Keyboard_GetKeyCode(&unk_144, r4, 8);
        s32 r6 = pressKeyCode(r1);
        Keyboard_HighlightKey(&unk_144, r4);
        Keyboard_StartKeyRepeat(&unk_144);
        return r6;
    }
    return 0;
}

s32 NameEntryMenu::pressKeyCode(s32 x) {
    s32 r6 = 1;
    s32 r7 = Keyboard_HandleModeKey(&unk_144, x, 6);
    if (r7 != 0) {
        redrawText();
        return r7;
    }
    if (Keyboard_IsControlCode(&unk_144, x) != 0) {
        switch (x) {
        case 0x100:
            backspace(r6);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (applyModifierKey(x) == 0) playErrorSe();
            r6 = 2;
            break;
        case 0x118:
            copy();
            r6 = 2;
            break;
        case 0x119:
            paste();
            r6 = 2;
            break;
        case 0x116:
            closeWithResult(0);
            r6 = 3;
            break;
        case 0x117:
            closeWithResult(r6);
            r6 = 3;
            break;
        default:
            r6 = 2;
            break;
        }
    } else {
        BOOL r4 = insertChar((u8)x);
        if (Keyboard_IsFull(&unk_144) != 0) {
            showMessage(0x1c, r6);
            return 4;
        }
        if (Keyboard_IsTooWide(&unk_144) != 0) {
            showMessage(0x1c, r6);
            return 4;
        }
        if (r4 == 0) playErrorSe();
    }
    return r6;
}

BOOL NameEntryMenu::applyModifierKey(s32 x) {
    u32 r2 = getCharBeforeCursor();
    if (r2 == 0) return FALSE;
    switch (x) {
    case 0x103:
        r2 = Keyboard_ModifyCharKey103(&unk_144, r2);
        break;
    case 0x104:
        r2 = Keyboard_ModifyCharKey104(&unk_144, r2);
        break;
    case 0x105:
        r2 = Keyboard_ModifyCharKey105(&unk_144, r2);
        break;
    }
    if (r2 == 0) return FALSE;
    if (Keyboard_ReplaceCharBeforeCursor(&unk_144, unk_4088, r2, unk_a8, unk_a6, 0x2710) == 0) return FALSE;
    redrawText();
    updateCaretX();
    return TRUE;
}

BOOL NameEntryMenu::backspace(s32 x) {
    if (hasSelection() != 0) {
        Keyboard_ResetTypedRun(&unk_144);
        Snd_PlaySe(0x35);
        goto done;
    }
    {
        u32 t = unk_a8;
        if (t != 0) {
            unk_a9 = t;
            unk_aa = unk_a8 - 1;
            Snd_PlaySe(0x35);
            goto done;
        }
    }
    if (unk_4088[0] != 0) {
        unk_a9 = 0;
        unk_aa = 1;
        Snd_PlaySe(0x35);
        goto done;
    }
    if (x != 0) playErrorSe();
    return FALSE;
done:
    deleteSelection();
    redrawText();
    updateCaretX();
    return TRUE;
}

BOOL NameEntryMenu::insertCharRaw(u32 x) {
    u8 v[8];
    v[0] = unk_a8;
    if (Keyboard_InsertChar(&unk_144, unk_4088, x, v, unk_a6, unk_af, 0, 1) != 0) {
        setCursorIndex(v[0]);
        return TRUE;
    }
    return FALSE;
}

BOOL NameEntryMenu::insertChar(u32 x) {
    if (hasSelection() != 0) {
        deleteSelection();
        Keyboard_ResetTypedRun(&unk_144);
    }
    BOOL r = insertCharRaw(x);
    redrawText();
    updateCaretX();
    return r;
}

void NameEntryMenu::redrawText() {
    GeneralMenuHeader_setTitleText(&unk_b0, unk_4088, unk_a6);
    if (testFlags(0x100) != 0) {
        s32 t = func_02051348(unk_4088, unk_a6);
        unk_a0 = -(unk_af - t - 2);
    }
    GeneralMenuHeader_placeTitleText(&unk_b0);
    highlightSelection();
    func_ov124_02296c98(&unk_b0);
    setFlags(0x10);
    refreshKeys();
}

void NameEntryMenu::highlightSelection() {
    s32 r0, r1, r2, r4;
    if (hasSelection() != 0) {
        u32 e = unk_aa;
        u32 s = unk_a9;
        if (s > e) {
            r4 = e;
            r0 = s - e;
        } else {
            r4 = s;
            r0 = e - s;
        }
        r1 = 7;
        r2 = 6;
    } else {
        r0 = Keyboard_GetTypedRunLength(&unk_144);
        if (r0 != 0) {
            r4 = unk_a8 - r0;
        }
        r1 = 5;
        r2 = 1;
    }
    if (r0 != 0) {
        func_ov124_02296c7c(&unk_b0, r1, r2, r4, r0);
    }
}

void NameEntryMenu::playErrorSe() {
    Snd_PlaySe(0x34);
}

BOOL NameEntryMenu::touchDialogButtons() {
    if (unk_ad == 3) return FALSE;
    if (MenuBottomButtonsBody_isButtonDisabled(&unk_3d00, 6) == 0 && MenuBottomButtonsBody_isTouched(&unk_3d00, 6) != 0) {
        closeWithResult(0);
        return TRUE;
    }
    if (unk_ad != 0) return FALSE;
    if (MenuBottomButtonsBody_isTouched(&unk_3d00, 7) != 0) {
        closeWithResult(1);
        return TRUE;
    }
    return FALSE;
}

void NameEntryMenu::setupDialogButtons() {
    switch (unk_ad) {
    case 0:
        MenuBottomButtons_setLayoutConfirmAnd06(&unk_3d00, 0xd8);
        break;
    case 2:
        MenuBottomButtons_setLayoutSingle05(&unk_3d00, 0x21);
        break;
    case 1:
        MenuBottomButtons_setLayoutSingle05(&unk_3d00, 0x65);
        break;
    case 3:
        break;
    }
}

void NameEntryMenu::showCursor() {
    clearFlags(0x80);
    Keyboard_ResetCursor(&unk_144);
    s32 a = Keyboard_GetCursorX(&unk_144);
    s32 b = Keyboard_GetCursorY(&unk_144);
    MenuCursorBase_warpTo(&unk_3e64, a, b);
    MenuCursor_setAnimIfChanged(&unk_3e64, 1);
    refreshCursor();
}

void NameEntryMenu::hideCursor() {
    MenuCursor_setAnimIfChanged(&unk_3e64, 0);
    unk_3e64.vfunc_0c();
}

void NameEntryMenu::moveCursorToTarget() {
    if (testFlags(0x80)) {
        MenuCursorBase_moveToNear(&unk_3e64, unk_98, 0x28, 3, 2);
        unk_ae = 6;
    } else {
        s32 a = Keyboard_GetCursorX(&unk_144);
        s32 b = Keyboard_GetCursorY(&unk_144);
        MenuCursorBase_moveToNear(&unk_3e64, a, b, 3, 2);
        unk_ae = 4;
    }
    setMainState(8);
}

void NameEntryMenu::snapCursor() {
    if (testFlags(0x80)) {
        MenuCursorBase_warpTo(&unk_3e64, unk_98, 0x28);
    } else {
        s32 a = Keyboard_GetCursorX(&unk_144);
        s32 b = Keyboard_GetCursorY(&unk_144);
        MenuCursorBase_warpTo(&unk_3e64, a, b);
    }
    unk_3e64.vfunc_0c();
}

void NameEntryMenu::pressCursor() {
    MenuCursor_setPosePress(&unk_3e64);
    setMainState(9);
}

void NameEntryMenu::releaseCursor() {
    Keyboard_ClearHighlight(&unk_144);
    MenuCursorBase_setPoseRelease(&unk_3e64);
    setMainState(0xb);
}

void NameEntryMenu::refreshCursor() {
    MenuCursorBase_setPoseIdle(&unk_3e64);
    unk_3e64.vfunc_0c();
}

BOOL NameEntryMenu::tryPressKey() {
    if ((gPad[1] & 1) == 0) {
        return FALSE;
    }
    s32 t = Keyboard_PressCursorKey(&unk_144);
    if (t == -1) {
        return FALSE;
    }
    if (MenuBottomButtonsBody_isButtonDisabled(&unk_3d00, 6) && t == 0xd9) {
        return FALSE;
    }
    Keyboard_GetKeyCode(&unk_144, t, 8);
    Keyboard_HighlightKey(&unk_144, t);
    pressCursor();
    return TRUE;
}

BOOL NameEntryMenu::tryBackspaceButton() {
    if ((gPad[0] & 2) == 0) {
        return FALSE;
    }
    Keyboard_ShrinkTypedRun(&unk_144);
    if (backspace(0)) {
        Keyboard_StartKeyRepeat(&unk_144);
        unk_ae = unk_8d;
        setMainState(0xc);
    } else {
        onBackspaceEmpty();
    }
    return TRUE;
}

BOOL NameEntryMenu::tryPasteButton() {
    if ((gPad[1] & 0x100) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(&unk_144, 0xc)) {
        return FALSE;
    }
    pressKeyCode(0x119);
    Keyboard_HighlightKey(&unk_144, 0xdc);
    snapCursor();
    unk_ae = unk_8d;
    setMainState(0xe);
    return FALSE;
}

BOOL NameEntryMenu::tryCopyButton() {
    if ((gPad[1] & 0x200) == 0) {
        return FALSE;
    }
    if (Keyboard_IsSlotDisabled(&unk_144, 0xb)) {
        return FALSE;
    }
    pressKeyCode(0x118);
    Keyboard_HighlightKey(&unk_144, 0xdb);
    unk_ae = unk_8d;
    setMainState(0xd);
    return FALSE;
}

BOOL NameEntryMenu::tryStartConfirm() {
    if ((gPad[1] & 8) == 0) {
        return FALSE;
    }
    confirm();
    return TRUE;
}

void NameEntryMenu::loadDesignName() {
    u8 buf[0x10];
    s32 a = func_020986d4(PlayerData_GetCurrent());
    PatternInfo_getTitleRaw(Pattern_getInfo(PlayerPatterns_getPatternByOrder(a, MenuCtrl_GetIndex())), buf);
    Mem_Copy(buf, unk_4088, 0x10);
}

void NameEntryMenu::func_ov126_0229763c() {
    func_020b03f0(unk_4088, MenuCtrl_GetIndex());
}

u8 *NameEntryMenu::getFriendEntry() {
    s32 t = PlayerData_GetCurrent();
    s32 p = PlayerData_getFriendList(t);
    s32 idx = MenuCtrl_GetIndex();
    u8 *q = (u8 *)FriendList_GetEntries(p);
    return q + idx * 0x1c;
}

void NameEntryMenu::loadFriendField1() {
    Mem_Copy(FriendEntry_GetTownName(getFriendEntry()), unk_4088, 8);
}

void NameEntryMenu::loadFriendField2() {
    Mem_Copy(FriendEntry_GetPlayerName(getFriendEntry()), unk_4088, 8);
}

void NameEntryMenu::loadInitialText() {
    switch (MenuCtrl_GetMode()) {
    case 0x11:
    case 0x15:
    case 0x16:
    case 0x17:
        Mem_Copy(MenuCtrl_GetText(), unk_4088, unk_a6);
        break;
    case 0xb: loadDesignName(); break;
    case 0x12: func_ov126_0229763c(); break;
    case 0x18:
    case 0x19: loadFriendField1(); break;
    case 0x1a:
    case 0x1b: loadFriendField2(); break;
    }
}

void NameEntryMenu::storeDesignName() {
    u8 buf[0x10];
    s32 a = func_020986d4(PlayerData_GetCurrent());
    void *p = PlayerPatterns_getPatternByOrder(a, MenuCtrl_GetIndex());
    Mem_Copy(unk_4088, buf, 0x10);
    PatternInfo_setTitleRaw(Pattern_getInfo(p), buf);
}

void NameEntryMenu::checkGeneralAnswer() {
    Unk_020e0488 b;
    func_0206f9e4(&b, "st_general", MenuCtrl_GetIndex());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        MenuCtrl_SetResult(0);
    }
}

void NameEntryMenu::checkItemNameAnswer() {
    u16 id;
    ItemName rec;
    Unk_020e0488 b;
    u16 i;
    for (i = 0x1323; i <= 0x1368; i++) {
        id = i;
        ItemName_setFromItem(&rec, &id);
        MsgString_copy(&b, &rec);
        if (func_0206f88c(&b, unk_4088, unk_a6)) {
            MenuCtrl_SetIndex((u8)(i - 0x1323));
            MenuCtrl_SetResult(1);
            return;
        }
    }
    MenuCtrl_SetResult(0);
}

void NameEntryMenu::checkPasswordAnswer() {
    Unk_020e0488 b;
    func_0206f9e4(&b, "st_password", MenuCtrl_GetIndex());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        MenuCtrl_SetResult(0);
    }
}

void NameEntryMenu::storePlayerName() {
    s32 t = PlayerData_GetCurrent();
    PlayerData_getPlayerId();
    s32 u = PlayerData_getPlayerId(t);
    s32 n = func_02097740(gSavePlayers, u);
    s32 i;
    for (i = 0; i < 4; i++) {
        if (i != n && func_020978c8(gSavePlayers, i)) {
            if (func_02051218((void *)func_02094104(PlayerData_getPlayerId(PlayerData_GetResident(gSavePlayers, i))), unk_4088, 8)) {
                MenuCtrl_SetResult(2);
                return;
            }
        }
    }
    func_02094108(PlayerData_getPlayerId(t), unk_4088);
}

s32 NameEntryMenu::storeTownName() {
    return func_02063904(gSaveTownId, unk_4088);
}

void NameEntryMenu::func_ov126_02297328() {
    s32 t = MenuCtrl_GetIndex();
    if (func_020b0084(unk_4088, t)) {
        MenuCtrl_SetResult(0);
    }
    func_020b0428(unk_4088, t);
}

void NameEntryMenu::storeStatsPatternName() {
    u8 buf[0x10];
    void *p = BlancaFaceRecord_getPattern(gSaveGameStats);
    Mem_Copy(unk_4088, buf, 0x10);
    PatternInfo_setTitleRaw(Pattern_getInfo(p), buf);
}

void NameEntryMenu::storeFriendField1() {
    Mem_Copy(unk_4088, FriendEntry_GetTownName(getFriendEntry()), 8);
}

void NameEntryMenu::storeFriendField2() {
    Mem_Copy(unk_4088, FriendEntry_GetPlayerName(getFriendEntry()), 8);
}

void NameEntryMenu::commitEntry() {
    s32 r = MenuCtrl_GetMode();
    if (r != 0xc && r != 0xd && r != 0xe) {
        censorText();
    }
    switch (r) {
    case 0xb: storeDesignName(); break;
    case 0xc: checkGeneralAnswer(); break;
    case 0xd: checkItemNameAnswer(); break;
    case 0xe: checkPasswordAnswer(); break;
    case 0xf: storePlayerName(); break;
    case 0x10: storeTownName(); break;
    case 0x11: break;
    case 0x12: func_ov126_02297328(); break;
    case 0x13: break;
    case 0x14: storeStatsPatternName(); break;
    case 0x15: break;
    case 0x16: break;
    case 0x17: break;
    case 0x18:
    case 0x19: storeFriendField1(); break;
    case 0x1a:
    case 0x1b: storeFriendField2(); break;
    }
}

void NameEntryMenu::censorText() {
    u8 *buf = unk_4088;
    u32 n = unk_a6;
    func_020a78a4(&unk_3f48, buf, n);
    MsgString_fromEncoded(&unk_3f08, &unk_3f48, 0, 0);
    if (String_CensorTaboo(&unk_3f08)) {
        EncodedString_fromMsgString(&unk_3f48, &unk_3f08);
        StrBuf_GetBytes(&unk_3f48, buf, n);
    }
}

BOOL NameEntryMenu::testFlags(u32 mask) {
    if ((unk_a4 & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

void NameEntryMenu::setFlags(u32 mask) {
    unk_a4 = unk_a4 | mask;
}

void NameEntryMenu::clearFlags(u32 mask) {
    unk_a4 = unk_a4 & ~mask;
}

