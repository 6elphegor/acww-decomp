#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

// Calls into other modules' class methods: extern "C" functions named by the real mangled symbol (self first).
#define LabelString_redrawAligned _ZN11LabelString13redrawAlignedEii
#define LabelString_createLabel _ZN11LabelString11createLabelEjjjhhi
#define LabelString_destroyLabel _ZN11LabelString12destroyLabelEv
#define PlayerId_getNameString _ZN8PlayerId13getNameStringEP9MsgString
#define PlayerData_getWifiUserData _ZN10PlayerData15getWifiUserDataEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define PlayerData_getFriendList _ZN10PlayerData13getFriendListEv
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define MsgString_setLine _ZN9MsgString7setLineEPh
#define MsgString_clear _ZN9MsgString5clearEv
#define MsgString_copy _ZN9MsgString4copyEPS_
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define PlayerId_getName _ZN8PlayerId7getNameEv
#define MenuTabBar_requestSaveOnClose _ZN10MenuTabBar18requestSaveOnCloseEv
#define MenuTabBar_hideTabs _ZN10MenuTabBar8hideTabsEv
#define MenuTabBar_selectTab _ZN10MenuTabBar9selectTabEj
#define MenuTabBar_onTabMenuClosed _ZN10MenuTabBar15onTabMenuClosedEv
#define PopupChoiceMenu_placeAbove _ZN15PopupChoiceMenu10placeAboveEii
#define PopupChoiceMenu_init _ZN15PopupChoiceMenu4initEiiPKc
#define PopupChoiceMenuBody_setRowsFromIds _ZN19PopupChoiceMenuBody14setRowsFromIdsEP17PopupChoiceIdListi
#define PopupChoiceMenuBody_addCustomRow _ZN19PopupChoiceMenuBody12addCustomRowEP17PopupChoiceIdListPvj
#define PopupChoiceMenuBody_hitTestRowOrLast _ZN19PopupChoiceMenuBody16hitTestRowOrLastEii

#define func_02094030 _ZN11MsgString9BC1Ev
#define func_02094018 _ZN11MsgString9BD1Ev
extern "C" {
extern u8 gU8None;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u32 gCurrentHeap;

void FriendRosterTab_SetupLayers();
void _ZN15FriendRosterTab7setPageEh(void *self, u32 m);

void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void *PlayerData_GetCurrent();
void *PlayerData_GetBySessionSlot(u32 a);
s32 PlayerWifiData_HasUserId(void *p);
s32 PlayerWifiData_IsConfigValid(void *p);
u64 PlayerWifiData_GetFriendCode(void *p);
void *FriendEntry_GetFriendData(void *p);
void *FriendList_GetEntries(void *p);
void *DwcFriendData_GetBytes(void *p);
BOOL DwcFriendData_IsValid(void *p);
void *FriendEntry_GetTownName(void *p);
void *FriendEntry_GetPlayerName(void *p);
BOOL DwcFriendData_IsNotFriendKey(void *p);
BOOL DwcFriendData_Compare(void *p, void *q);
void FriendList_Compact(void *p);
void FriendEntry_Clear(void *p);
void *PlayerWifiData_GetOwnFriendData(void *a);
void DwcFriendData_Copy(void *a, void *b);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void String_Load2dMenu(void *p, s32 a);
void String_FromEncodedBytes(void *p, void *s, s32 n);
void MenuCtrl_SetIndex(u32 v);
void EncodedString_SetRaw(void *dst, void *src, s32 n);
void String_SetSlot(s32 a, void *p);
void String_Load2d(void *p, void *q, s32 a);
void *Msg_SkipLines(void *p, s32 i);
void TownId_GetNameString(void *a, void *b);
void *TownId_GetName(void *a);
void *PlayerId_GetTownId(void *a);
void Mem_Copy(void *a, void *b, s32 c);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void MIi_CpuCopy16(void *src, void *dst, s32 n);
BOOL func_020e9d7c(void *p);
BOOL func_020e9d88(void *p, void *q);
s32 func_020e9d70(void *p);
s32 Net_GetMode();
void *Net_GetWifiFriendList();
BOOL Net_WifiDeleteFriend(u32 a);
BOOL Net_WifiAddFriend(u32 a, void *b);
void Snd_PlaySe(u32 a);
s32 Oam_GetObjX(void *p);
s32 Oam_GetObjY(void *p);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 Oam_DrawObj(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsFriendPageFromIndex();
u32 MenuCtrl_ClearFriendPageFromIndex();
u32 MenuCtrl_GetIndex(u32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
s32 Gfx2d_LoadCharFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 Gfx2d_LoadPaletteFile(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 Gfx2d_LoadScreenFile(const char *a, u32 b, s32 c);
BOOL File_LoadToBuffer(const char *a, void *b, s32 c);

s32 MenuTabBar_GetTabX(s32 a);
u8 MenuTabBar_NextTab(u8 a);
u8 MenuTabBar_PrevTab(u8 a);
s32 MenuTabBar_HitTestTouch();

BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);
void PopupChoiceMenu_placeAbove(void *self, u32 a, u32 b);
BOOL PopupChoice_TickDecideDelay(void *self);
u8 PopupChoice_DecideCancel(void *self, s32 x);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void ChoiceIdList_Clear(void *p, s32 a);
void ChoiceIdList_Add(void *p, s32 a, s32 b);
BOOL PopupChoice_MoveCursor(void *p, u32 idx, void *q, u8 flag);
s32 PopupChoice_Update(void *p);
s32 PopupChoice_ForceClose(void *p);
void PopupChoice_LoadFriendBg(void *p);
void PopupChoice_Draw(void *p);

void LabelString_redrawAligned(void *self, s32 a, s32 b);
void LabelString_createLabel(void *self, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f);
void LabelString_destroyLabel(void *self);
void PlayerId_getNameString(void *self, void *b);
void *PlayerData_getWifiUserData(void *self);
void *PlayerData_getPlayerId(void *self);
void *PlayerData_getFriendList(void *self);
void MsgString_fromEncoded(void *self, void *b, s32 c, s32 d);
void MsgString_setLine(void *self, void *b);
void MsgString_clear(void *self);
void MsgString_copy(void *self, void *b);
BOOL CommManager_isOnline(void *self);
void *PlayerId_getName(void *self);
void MenuTabBar_requestSaveOnClose(void *self);
void MenuTabBar_hideTabs(void *self);
void MenuTabBar_selectTab(void *self, u32 idx);
void MenuTabBar_onTabMenuClosed(void *self);
void PopupChoiceMenu_init(void *self, s32 a, s32 b, const char *c);
void PopupChoiceMenuBody_setRowsFromIds(void *self, void *rec, u32 v);
void PopupChoiceMenuBody_addCustomRow(void *self, void *rec, void *p, u32 v);
s32 PopupChoiceMenuBody_hitTestRowOrLast(void *self, u32 a, u32 b);
void _ZN11MsgString9CC2Ev(void *self);
void _ZN11MsgString9CD1Ev(void *self);
void _ZN15EncodedString8BC2Ev(void *self);
void _ZN15EncodedString8BD1Ev(void *self);
void _ZN11MsgString9BC1Ev(void *self);
void _ZN11MsgString9BD1Ev(void *self);

struct Unk_ov119_Comm {
    u32 unk_00[0x64 / 4];
    s32 myAid;
};
extern Unk_ov119_Comm *gCommManager;
extern u8 *data_ov119_02295648[6];
extern u32 data_ov119_02295660[8];
extern u32 data_ov119_02295680[10];
extern u32 data_ov119_022956a8[10];
extern u32 data_ov119_022956d0[10];
extern u32 data_ov119_022956f8[10];
extern u32 data_ov119_02295720[10];
extern u32 data_ov119_02295748[12];
extern u32 data_ov119_02295778[12];
extern u32 data_ov119_022957a8[12];
extern u32 data_ov119_022957d8[24];
struct Unk_ov119_02295588 {
    u32 unk_00;
    u16 attr2;
    u16 unk_06;
};
extern Unk_ov119_02295588 data_ov119_02295588;
}

// 0x40-byte element with ctor/dtor in main
class LabelString {
public:
    LabelString();
    ~LabelString();
    u8 unk_00[0x40];
};

class MsgString193 {
public:
    MsgString193();
    ~MsgString193();
    u32 unk_00[0xd4 / 4];
};

// 0x24-byte helper objects at +0x1a58
class BgVramTask {
public:
    BgVramTask();
    BOOL requestScreen(u32 buf, u8 n, u32 size, u32 z);
    void requestPalette(u32 buf, u8 n, u32 z);
    void cancel();
    u32 unk_00[0x24 / 4];
};

struct PopupChoiceIdList;

// cursor object at +0xdc (size 0x300)
class PopupChoiceMenuBody {
public:
    s32 getRowY(s32 v);
    s32 getRowX();
    BOOL isClosed();
    BOOL isOpen();
    u8 unk_00[0x2f4];
};

class PopupChoiceMenu : public PopupChoiceMenuBody {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    u8 unk_2f4[0xc];
};

// object at +0x970 (size 0x64, vtable 0x02204614); methods split over more ov002 / main classes
class MenuCursorBase {
public:
    void drawWrapped();
    s32 getScreenY();
    s32 getScreenX();
    void setPoseRelease();
    void setPoseIdle();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    void moveToLinear(s32 a, s32 b, s32 c);
    s32 isMoving();
};

class MenuCursor {
public:
    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 v);
};

class HandCursor {
public:
    BOOL isAnimDone();
    BOOL getAnim();
    void setAnimAtEnd(s32 a);
};

class MenuCursorBuf0 {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

#define U970_A ((MenuCursorBase *)&cursor)
#define U970_B ((MenuCursor *)&cursor)
#define U970_C ((HandCursor *)&cursor)

// +0x1ac4 sub-object
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
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
    void setSlideExtent(s32 v);
    void initSlideOut(s32 a, s32 mode);
    void initSlideIn(s32 a, s32 mode);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    void initKeyRepeat(s32 a, s32 b, s32 c);
    void restartKeyRepeat();
    BOOL isRepeatRight();
    BOOL isRepeatLeft();
    BOOL isRepeatDown();
    BOOL isRepeatUp();
    u32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

// stack helper objects (ctor/dtor are plain calls into main)
struct Unk_ov119_A {
    u32 pad[7];
    Unk_ov119_A() { _ZN11MsgString9CC2Ev(this); }
    ~Unk_ov119_A() { _ZN11MsgString9CD1Ev(this); }
};
struct Unk_ov119_B {
    u32 pad[7];
    Unk_ov119_B() { _ZN11MsgString9BC1Ev(this); }
    ~Unk_ov119_B() { _ZN11MsgString9BD1Ev(this); }
};
struct Unk_ov119_C {
    u32 pad[6];
    Unk_ov119_C() { _ZN15EncodedString8BC2Ev(this); }
    ~Unk_ov119_C() { _ZN15EncodedString8BD1Ev(this); }
};

class FriendRosterTab;
typedef void (FriendRosterTab::*Unk_ov119_02295840_Fn)();

#define U3D0 ((u8 *)this + 0x3d0)
extern "C" {
void _ZN15FriendRosterTab11updateTouchEv();
extern void *data_ov119_02295608[2];
void _ZN15FriendRosterTab9mainAct01Ev();
extern void *data_ov119_022955a8[2];
void _ZN15FriendRosterTab13updateButtonsEv();
extern void *data_ov119_022955e8[2];
void _ZN15FriendRosterTab16updateCursorMoveEv();
extern void *data_ov119_022955f0[2];
void _ZN15FriendRosterTab17updateCursorPressEv();
extern void *data_ov119_022955a0[2];
void _ZN15FriendRosterTab19updateCursorReleaseEv();
extern void *data_ov119_022955b0[2];
void _ZN15FriendRosterTab9mainAct06Ev();
extern void *data_ov119_02295610[2];
void _ZN15FriendRosterTab9mainAct07Ev();
extern void *data_ov119_02295580[2];
void _ZN15FriendRosterTab9mainAct08Ev();
extern void *data_ov119_022955c8[2];
void _ZN15FriendRosterTab9mainAct09Ev();
extern void *data_ov119_022955c0[2];
void _ZN15FriendRosterTab9mainAct0AEv();
extern void *data_ov119_02295618[2];
void _ZN15FriendRosterTab9mainAct0BEv();
extern void *data_ov119_02295600[2];
void _ZN15FriendRosterTab9mainAct0CEv();
extern void *data_ov119_02295598[2];
void _ZN15FriendRosterTab9mainAct0DEv();
extern void *data_ov119_022955f8[2];
void _ZN15FriendRosterTab9mainAct0EEv();
extern void *data_ov119_022955d8[2];
void _ZN15FriendRosterTab9mainAct0FEv();
extern void *data_ov119_02295590[2];
void _ZN15FriendRosterTab9mainAct10Ev();
extern void *data_ov119_022955b8[2];
void _ZN15FriendRosterTab9mainAct11Ev();
extern void *data_ov119_022955e0[2];
void _ZN15FriendRosterTab9stateLoadEv();
extern void *data_ov119_02295640[2];
void _ZN15FriendRosterTab9stateOpenEv();
extern void *data_ov119_02295638[2];
void _ZN15FriendRosterTab12stateOpeningEv();
extern void *data_ov119_02295630[2];
void _ZN15FriendRosterTab10stateCloseEv();
extern void *data_ov119_02295628[2];
void _ZN15FriendRosterTab12stateClosingEv();
extern void *data_ov119_02295620[2];
}
#define A0V (*(volatile u8 *)&focus)
#define E9V (*(volatile u8 *)&labelCount)
#define B1V (*(volatile u8 *)&delayTimer)

// Vtable 0x02295840, size 0x1bcc
class FriendRosterTab : public MenuProc {
public:
    FriendRosterTab() : popup(), textLabels(), helpText(), cursor(), vramTasks(), errorMessage() {}

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
    void updateRowMarkBlink();
    void clearRowMarks();
    void drawRowMarks();
    void cancelChoice();
    void openPopup(u32 x);
    void onPopupChoice();
    u8 getPopupRowValue(u32 idx);
    void loadOwnFriendCode();
    u32 getPageOfFriend(s32 idx);
    void setPage(u8 s);
    void refreshPage();
    void drawRosterPage();
    void setRowIcon(u16 *p, u32 v);
    void drawFriendCodeHelp();
    void drawOwnCodePage();
    void drawPresentPage();
    BOOL isInRoster(void *p);

    s32 findFreeEntry();
    BOOL syncFromWifiFriendList();
    void compactRoster();
    BOOL hasGaps();
    void buildFriendIndex();
    u32 getFocusedFriendIndex();
    void *getFocusedFriendEntry();
    void *getFriendEntries();
    BOOL isWifiMode();
    void setPaletteFade(s32 x);
    u16 blendColor(s32 c1, s32 c2, s32 t, s32 n);
    void uploadScreen();
    u8 hitTest(s32 x, s32 y);
    BOOL activateFocus();
    void showFriend(s32 x);
    void registerPresentPlayer();
    void useCodeEntry();
    void openFriendEditor(s32 x);
    void removeFriend();
    void openRemoveConfirm();
    void openFriendChoices();
    void openRegisterChoices();

    BOOL moveFocus(u32 keys);
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void cursorToPopupTop();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToTarget();
    void hideCursor();
    s32 getFocusY();
    s32 getFocusX();
    void showCursor();
    void addTitleLabel(u32 id);
    void addRegisterLabel();
    void *allocTextLabel();
    void resetTextLabels();
    void showError(u8 v);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
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
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void mainAct01();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void postInputUpdate();
    void preInputUpdate();
    void postStateUpdate();
    void preStateUpdate();
    void releaseResources();
    void initFriendRoster();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void func_ov119_02294fa8();
    BOOL requestTab(s32 idx);
    BOOL handleTabSwitch();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 slideY;
    /* 0x098 */ u16 flags;
    /* 0x09a */ s16 selectedRow;
    /* 0x09c */ u8 page;
    /* 0x09d */ u8 targetPage;
    /* 0x09e */ u8 labelCount;
    /* 0x09f */ u8 returnState;
    /* 0x0a0 */ u8 focus;
    /* 0x0a1 */ u8 ownCodeDigits[12];
    /* 0x0ad */ u8 popupValue;
    /* 0x0ae */ u8 popupRow;
    /* 0x0af */ u8 rowCount;
    /* 0x0b0 */ u8 registerButtonPalette;
    /* 0x0b1 */ u8 delayTimer;
    /* 0x0b2 */ u8 rowMarkMask;
    /* 0x0b3 */ u8 rowMarkBlinkTimer;
    /* 0x0b4 */ u8 friendIndex;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ s32 fadeLevel;
    /* 0x0bc */ u8 rosterIndices[0x20];
    /* 0x0dc */ PopupChoiceMenu popup;
    /* 0x3dc */ LabelString textLabels[0x13];
    /* 0x89c */ MsgString193 helpText;
    /* 0x970 */ MenuCursorBuf0 cursor;
    /* 0x9d4 */ u16 pageScreens[0x800];
    /* 0x19d4 */ void *shownScreen;
    /* 0x19d8 */ u16 objPalette[16];
    /* 0x19f8 */ u16 bgPalette[16];
    /* 0x1a18 */ u16 objPaletteWork[16];
    /* 0x1a38 */ u16 bgPaletteWork[16];
    /* 0x1a58 */ BgVramTask vramTasks[3];
    /* 0x1ac4 */ MenuErrorMessage errorMessage;
};

static inline BOOL Unk_ov119_02294a44_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" FriendRosterTab *FriendRosterTab_Create() { return new FriendRosterTab(); }

BOOL FriendRosterTab::vfunc_00() {
    initFriendRoster();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL FriendRosterTab::vfunc_0c() {
    MenuTabBar_onTabMenuClosed(ProcBase_GetParent(this));
    releaseResources();
    return TRUE;
}

BOOL FriendRosterTab::onDraw() {
    u8 *p = (u8 *)slideY + 0x60;
    s32 i;
    if (!testFlags(1)) {
        return TRUE;
    }
    PopupChoice_Draw(&popup);
    if (MenuCtrl_IsButtons()) {
        U970_A->drawWrapped();
    }
    Oam_DrawCell(1, data_ov119_02295660, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    for (i = 0; i < 6; i++) {
        Oam_DrawCell(1, data_ov119_02295648[i], 0x80, (s32)p, i == targetPage ? 5 : 4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    Oam_DrawCell(1, data_ov119_02295778, 0x80, (s32)p, registerButtonPalette, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = 0x80;
    switch (page) {
    case 4:
        for (i = 0; i < 12; i++) {
            data_ov119_02295588.attr2 = (data_ov119_02295588.attr2 & 0xfffffc00) | (u16)(ownCodeDigits[i] * 2 + 0x1a0) & 0x3ff;
            Oam_DrawObj(1, &data_ov119_02295588, x, (s32)p, -1, 2, 0);
            x += 14;
        }
        Oam_DrawCell(1, data_ov119_022957d8, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    case 5:
        break;
    default:
        if (selectedRow != -1) {
            Oam_DrawCell(1, data_ov119_022957a8, x, (s32)(p + selectedRow * 16 - 16), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        break;
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov119_022955e0[2];
extern "C" void *data_ov119_022955e8[2];
extern "C" void *data_ov119_022955b0[2];
extern "C" u8 *data_ov119_02295648[6];
extern "C" void *data_ov119_022955f8[2];
extern "C" u32 data_ov119_02295660[8];
extern "C" u32 data_ov119_022957d8[24];
extern "C" void *data_ov119_022955a0[2];
extern "C" void *data_ov119_02295580[2];
extern "C" void *data_ov119_02295600[2];
extern "C" u32 data_ov119_02295680[10];
struct Unk_ov119_SceneEntry {
    FriendRosterTab *(*create)();
    u16 a;
    u16 b;
};
extern "C" FriendRosterTab *FriendRosterTab_Create();
extern "C" Unk_ov119_SceneEntry sFriendRosterTabProfile;
extern "C" void *data_ov119_02295638[2];
extern "C" void *data_ov119_02295630[2];
extern "C" u32 data_ov119_022956d0[10];
extern "C" void *data_ov119_02295620[2];
extern "C" void *data_ov119_02295618[2];
extern "C" void *data_ov119_02295610[2];
extern "C" u32 data_ov119_022956f8[10];
extern "C" u32 data_ov119_02295720[10];
extern "C" void *data_ov119_02295608[2];
extern "C" void *data_ov119_02295590[2];
extern "C" void *data_ov119_022955d8[2];
extern "C" void *data_ov119_02295640[2];
extern "C" u32 data_ov119_022956a8[10];
extern "C" void *data_ov119_02295628[2];
extern "C" void *data_ov119_022955b8[2];
extern "C" u32 data_ov119_02295748[12];
extern "C" Unk_ov119_02295588 data_ov119_02295588;
extern "C" void *data_ov119_022955a8[2];
extern "C" void *data_ov119_02295598[2];
extern "C" void *data_ov119_022955c0[2];
extern "C" u32 data_ov119_02295778[12];
extern "C" void *data_ov119_022955f0[2];
extern "C" void *data_ov119_022955c8[2];
extern "C" u32 data_ov119_022957a8[12];

extern "C" void *data_ov119_022955e0[2] = {(void *)_ZN15FriendRosterTab9mainAct11Ev, 0};

extern "C" void *data_ov119_022955e8[2] = {(void *)_ZN15FriendRosterTab13updateButtonsEv, 0};

extern "C" void *data_ov119_022955b0[2] = {(void *)_ZN15FriendRosterTab19updateCursorReleaseEv, 0};

extern "C" u8 *data_ov119_02295648[6] = {(u8 *)data_ov119_02295720, (u8 *)data_ov119_02295680, (u8 *)data_ov119_022956a8, (u8 *)data_ov119_022956d0, (u8 *)data_ov119_022956f8, (u8 *)data_ov119_02295748};

extern "C" void *data_ov119_022955f8[2] = {(void *)_ZN15FriendRosterTab9mainAct0DEv, 0};

extern "C" u32 data_ov119_02295660[8] = {0x81b440bb, 0x00004560, 0x81d440bb, 0x00004564, 0x81f440bb, 0x00004568, 0x001480bb, 0xffff456c};

extern "C" u32 data_ov119_022957d8[24] = {0x00314000, 0x0000a1ba, 0x00234000, 0x0000a1ba, 0x00154000, 0x0000a1ba, 0x00074000, 0x0000a1ba, 0x01f94000, 0x0000a1b8, 0x01eb4000, 0x0000a1b8, 0x01dd4000, 0x0000a1b8, 0x01cf4000, 0x0000a1b8, 0x01c14000, 0x0000a1b6, 0x01b34000, 0x0000a1b6, 0x01a54000, 0x0000a1b6, 0x01974000, 0xffffa1b6};

extern "C" void *data_ov119_022955a0[2] = {(void *)_ZN15FriendRosterTab17updateCursorPressEv, 0};

BOOL FriendRosterTab::execTransition() {
    static Unk_ov119_02295840_Fn tbl[5] = {
        *(Unk_ov119_02295840_Fn *)data_ov119_02295640, *(Unk_ov119_02295840_Fn *)data_ov119_02295638,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295630, *(Unk_ov119_02295840_Fn *)data_ov119_02295628,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295620};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}
extern "C" void *data_ov119_02295580[2] = {(void *)_ZN15FriendRosterTab9mainAct07Ev, 0};

extern "C" void *data_ov119_02295600[2] = {(void *)_ZN15FriendRosterTab9mainAct0BEv, 0};

extern "C" u32 data_ov119_02295680[10] = {0x404d00e7, 0x000044c2, 0x804240e5, 0x0000450b, 0x006280e5, 0x0000450f, 0x404240f5, 0x0000454b, 0x006200f5, 0xffff454f};

extern "C" Unk_ov119_SceneEntry sFriendRosterTabProfile = {FriendRosterTab_Create, 0xa2, 0xa6};

extern "C" void *data_ov119_02295638[2] = {(void *)_ZN15FriendRosterTab9stateOpenEv, 0};

extern "C" void *data_ov119_02295630[2] = {(void *)_ZN15FriendRosterTab12stateOpeningEv, 0};

extern "C" u32 data_ov119_022956d0[10] = {0x404d0007, 0x000044c6, 0x80424005, 0x0000450b, 0x00628005, 0x0000450f, 0x40424015, 0x0000454b, 0x00620015, 0xffff454f};

extern "C" void *data_ov119_02295620[2] = {(void *)_ZN15FriendRosterTab12stateClosingEv, 0};

extern "C" void *data_ov119_02295618[2] = {(void *)_ZN15FriendRosterTab9mainAct0AEv, 0};

extern "C" void *data_ov119_02295610[2] = {(void *)_ZN15FriendRosterTab9mainAct06Ev, 0};

extern "C" u32 data_ov119_022956f8[10] = {0x404d0017, 0x000040c8, 0x80424015, 0x0000450b, 0x00628015, 0x0000450f, 0x40424025, 0x0000454b, 0x00620025, 0xffff454f};

extern "C" u32 data_ov119_02295720[10] = {0x404d00d7, 0x000054c0, 0x804240d5, 0x0000550b, 0x006280d5, 0x0000550f, 0x404240e5, 0x0000454b, 0x006200e5, 0xffff454f};

extern "C" void *data_ov119_02295608[2] = {(void *)_ZN15FriendRosterTab11updateTouchEv, 0};

void FriendRosterTab::runMainState() {
    static Unk_ov119_02295840_Fn tbl[18] = {
        *(Unk_ov119_02295840_Fn *)data_ov119_02295608, *(Unk_ov119_02295840_Fn *)data_ov119_022955a8,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955e8, *(Unk_ov119_02295840_Fn *)data_ov119_022955f0,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955a0, *(Unk_ov119_02295840_Fn *)data_ov119_022955b0,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295610, *(Unk_ov119_02295840_Fn *)data_ov119_02295580,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955c8, *(Unk_ov119_02295840_Fn *)data_ov119_022955c0,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295618, *(Unk_ov119_02295840_Fn *)data_ov119_02295600,
        *(Unk_ov119_02295840_Fn *)data_ov119_02295598, *(Unk_ov119_02295840_Fn *)data_ov119_022955f8,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955d8, *(Unk_ov119_02295840_Fn *)data_ov119_02295590,
        *(Unk_ov119_02295840_Fn *)data_ov119_022955b8, *(Unk_ov119_02295840_Fn *)data_ov119_022955e0};
    (this->*tbl[mainState])();
}

BOOL FriendRosterTab::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL FriendRosterTab::execPhase3() { return TRUE; }

BOOL FriendRosterTab::execPhase4() { return TRUE; }

BOOL FriendRosterTab::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL FriendRosterTab::handleTabSwitch() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (mainState) {
        case 0:
        case 2:
        case 4:
        case 5:
        case 8:
        case 14:
        case 15:
            return requestTab(7);
        }
    }
    if (mainState != 0 && mainState != 2) {
        return FALSE;
    }
    s32 r5 = -1;
    if (MenuCtrl_IsTouch()) {
        r5 = MenuTabBar_HitTestTouch();
    } else {
        u32 k = gPad[1];
        if (k & 2) {
            r5 = 7;
        } else if (k & 0x800) {
            r5 = 0;
        } else if (k & 0x400) {
            r5 = 5;
        } else if (k & 4) {
            r5 = 4;
        }
    }
    return requestTab(r5);
}

BOOL FriendRosterTab::requestTab(s32 idx) {
    void *o = ProcBase_GetParent(this);
    if (idx != -1 && idx != 6) {
        MenuTabBar_selectTab(o, (u8)idx);
        transitionState = 3;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void FriendRosterTab::func_ov119_02294fa8() {
    MenuTabBar_hideTabs(ProcBase_GetParent(this));
}

void FriendRosterTab::stateLoad() {
    FriendRosterTab_SetupLayers();
    loadBgGfx();
    loadObjGfx();
    addRegisterLabel();
    PopupChoice_LoadFriendBg(&popup);
    u32 v;
    if (MenuCtrl_IsFriendPageFromIndex()) {
        v = MenuCtrl_GetIndex(MenuCtrl_ClearFriendPageFromIndex());
    } else {
        v = 0;
    }
    _ZN15FriendRosterTab7setPageEh(this, getPageOfFriend(v));
    setTransitionState(1);
    stateOpen();
}

void FriendRosterTab::stateOpen() {
    beginSubSlideIn(0xa, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    setFlags(1);
    slideY = getSlideOffsetY();
    setFlags(8);
    setTransitionState(2);
}

void FriendRosterTab::stateOpening() {
    if (testFlags(8)) {
        clearFlags(8);
        drawFriendCodeHelp();
    }
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
    slideY = getSlideOffsetY();
}

void FriendRosterTab::stateClose() {
    hideCursor();
    beginSubSlideOut(0xa, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
    setTransitionState(4);
    slideY = getSlideOffsetY();
}

void FriendRosterTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        clearFlags(1);
        setPhase(5);
    } else {
        applySlideOffset(6, 0, 0);
        applySlideOffset(4, 0, 0);
        slideY = getSlideOffsetY();
    }
}

void FriendRosterTab::initFriendRoster() {
    if (!isWifiMode()) {
        if (hasGaps()) {
            compactRoster();
            MenuTabBar_requestSaveOnClose(ProcBase_GetParent(this));
        }
    } else {
        if (syncFromWifiFriendList()) {
            MenuTabBar_requestSaveOnClose(ProcBase_GetParent(this));
        }
    }
    labelCount = 0;
    flags = 0;
    focus = 8;
    shownScreen = pageScreens;
    selectedRow = -1;
    page = 0xff;
    rowCount = 0;
    registerButtonPalette = 7;
    fadeLevel = 5;
    loadOwnFriendCode();
    PopupChoiceMenu_init(&popup, 3, 1, "menu/friend/c_bg.bsc");
    buildFriendIndex();
}

void FriendRosterTab::releaseResources() {
    PopupChoice_ForceClose(&popup);
    resetTextLabels();
    vramTasks[0].cancel();
    vramTasks[1].cancel();
    vramTasks[2].cancel();
}

void FriendRosterTab::preStateUpdate() {
    resetTextLabels();
    vramTasks[0].cancel();
    vramTasks[1].cancel();
    vramTasks[2].cancel();
}

void FriendRosterTab::postStateUpdate() {
    uploadScreen();
    PopupChoice_Update(&popup);
}

void FriendRosterTab::preInputUpdate() {
    preStateUpdate();
    cursor.vfunc_0c();
}

void FriendRosterTab::postInputUpdate() { postStateUpdate(); }

extern "C" void FriendRosterTab_SetupLayers() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void FriendRosterTab::loadBgGfx() {
    u32 r4 = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/friend/bg0.bpl", r4, 6, 1, 1, 5);
    File_LoadToBuffer("menu/friend/bg2.bpl", bgPalette, 0x20);
    Gfx2d_LoadCharFile("menu/friend/bg0.bch", r4, 6, 0x11, 0x11, 0x89);
    Gfx2d_LoadScreenFile("menu/friend/a_bg.bsc", r4, 6);
    File_LoadToBuffer("menu/friend/b_bg.bsc", pageScreens, 0x800);
    File_LoadToBuffer("menu/friend/d_bg.bsc", pageScreens + 0x400, 0x800);
}

void FriendRosterTab::loadObjGfx() {
    u32 r4 = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/friend/obj0.bch", r4, 8, 0xc0, 0xc0, 0x15d);
    Gfx2d_LoadCharFile("menu/friend/obj1.bch", r4, 8, 0x1a0, 0x1a0, 0x1df);
    Gfx2d_LoadPaletteFile("menu/friend/obj.bpl", r4, 8, 4, 4, 10);
    File_LoadToBuffer("menu/friend/obj1.bpl", objPalette, 0x20);
}

void FriendRosterTab::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov119_02294a44_Both()) {
        u32 r = hitTest(gTouchCurX, gTouchCurY);
        if (r != 0x17) {
            focus = r;
            activateFocus();
        }
    }
}

void FriendRosterTab::mainAct01() {
    if (MenuCtrl_IsForceCloseDue()) {
        cancelChoice();
    } else if (checkSwitchToButtons(1)) {
        cursorToPopupTop();
        setMainState(6);
    } else if (Unk_ov119_02294a44_Both()) {
        s32 r5 = PopupChoiceMenuBody_hitTestRowOrLast(&popup, gTouchCurX, gTouchCurY);
        if (r5 >= 0) {
            if (!(testFlags(0x10) && r5 == 0)) {
                PopupChoice_DecideRow(&popup, r5, 1);
                popupValue = getPopupRowValue(r5);
                setMainState(0xb);
            }
        }
    }
}

void FriendRosterTab::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 r = takeRepeatedKeys();
        if (moveFocus(r)) {
            moveCursorToTarget();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                pressCursor();
            } else if (k & 0x100) {
                requestTab(MenuTabBar_NextTab(6));
            } else if (k & 0x200) {
                requestTab(MenuTabBar_PrevTab(6));
            }
        }
    }
}

void FriendRosterTab::updateCursorMove() {
    if (!U970_A->isMoving()) {
        setMainState(returnState);
        runMainState();
    }
}

void FriendRosterTab::updateCursorPress() {
    if (U970_C->isAnimDone()) {
        s32 r = activateFocus();
        switch (r) {
        case 1:
            break;
        case 2:
            releaseCursor();
            break;
        default:
            releaseCursor();
            break;
        }
    }
}

void FriendRosterTab::updateCursorRelease() {
    if (U970_C->isAnimDone()) {
        refreshCursor();
        setMainState(2);
    }
}

void FriendRosterTab::mainAct06() {
    if (MenuCtrl_IsForceCloseDue()) {
        cancelChoice();
    } else if (checkSwitchToTouch()) {
        hideCursor();
        setMainState(1);
    } else {
        u32 r4 = takeRepeatedKeys();
        u8 f = testFlags(0x10);
        if (PopupChoice_MoveCursor(&popup, r4, &popupRow, f)) {
            moveCursorToPopupRow();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                U970_B->setPosePress();
                setMainState(7);
            } else if (k & 2) {
                cancelPopup();
            }
        }
    }
}

void FriendRosterTab::mainAct07() {
    if (MenuCtrl_IsForceCloseDue()) {
        cancelChoice();
    } else if (U970_C->isAnimDone()) {
        PopupChoice_DecideRow(&popup, popupRow, 1);
        popupValue = getPopupRowValue(popupRow);
        setMainState(0xb);
    }
}

void FriendRosterTab::mainAct08() {
    if (B1V != 0) {
        B1V = B1V - 1;
    } else {
        hideCursor();
        if (A0V == 0x16) {
            openRegisterChoices();
        } else {
            openFriendChoices();
        }
    }
}

void FriendRosterTab::mainAct09() {
    if (B1V != 0) {
        B1V = 0;
        compactRoster();
        MenuTabBar_requestSaveOnClose(ProcBase_GetParent(this));
        if (isWifiMode()) {
            if (!Net_WifiDeleteFriend(friendIndex)) {
                setMainState(0x11);
            }
        }
    } else {
        setFlags(2);
        refreshPage();
        resumeInput();
    }
}

void FriendRosterTab::mainAct0A() {
    if (popup.isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(6);
        } else {
            setMainState(1);
        }
    }
}

void FriendRosterTab::mainAct0B() {
    if (PopupChoice_TickDecideDelay(&popup)) {
        PopupChoice_Close(&popup, 0);
        if (U970_C->getAnim()) {
            hideCursor();
        }
        setMainState(0xc);
    }
}

void FriendRosterTab::mainAct0C() {
    if (popup.isClosed()) {
        onPopupChoice();
    }
}

void FriendRosterTab::mainAct0D() {
    if (errorMessage.update(1)) {
        resumeInput();
    }
}

void FriendRosterTab::mainAct0E() {
    if (fadeLevel > 0) {
        fadeLevel = fadeLevel - 1;
        setPaletteFade(fadeLevel);
    } else {
        setPage(targetPage);
        setMainState(0xf);
    }
}

void FriendRosterTab::mainAct0F() {
    if (fadeLevel < 5) {
        fadeLevel = fadeLevel + 1;
        setPaletteFade(fadeLevel);
    } else if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        releaseCursor();
    }
}

void FriendRosterTab::mainAct10() {
    u8 *base = (u8 *)getFriendEntries();
    void *r = DwcFriendData_GetBytes(FriendEntry_GetFriendData(base + friendIndex * 0x1c));
    if (Net_WifiAddFriend(friendIndex, r)) {
        showFriend(friendIndex);
    }
}

void FriendRosterTab::mainAct11() {
    if (Net_WifiDeleteFriend(friendIndex)) {
        setFlags(2);
        refreshPage();
        resumeInput();
    }
}

void FriendRosterTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void FriendRosterTab::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(2);
}

void FriendRosterTab::resumeInput() {
    selectedRow = -1;
    setFlags(4);
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void FriendRosterTab::showError(u8 v) {
    volatile u8 buf[1];
    buf[0] = gU8None;
    buf[0] = v;
    errorMessage.open((u8 *)buf, 1, 0);
    setMainState(0xd);
    hideCursor();
}

void FriendRosterTab::resetTextLabels() {
    s32 i;
    i = 0;
    E9V = i;
    for (i = 0; i < 0x13; i++) {
        LabelString_destroyLabel(&textLabels[i]);
    }
}

void *FriendRosterTab::allocTextLabel() {
    if (E9V >= 0x13) {
        return &textLabels[0x12];
    }
    E9V = E9V + 1;
    return &textLabels[E9V - 1];
}

void FriendRosterTab::addRegisterLabel() {
    void *e = allocTextLabel();
    String_Load2dMenu(e, 0xd6);
    LabelString_createLabel(e, 8, 0xca, 6, 0xf, 0, 0);
    LabelString_redrawAligned(e, 1, 0);
}

void FriendRosterTab::addTitleLabel(u32 id) {
    void *e = allocTextLabel();
    String_Load2dMenu(e, id);
    LabelString_createLabel(e, 8, 0x160, 0xd, 0xf, 0, 0);
    LabelString_redrawAligned(e, 1, 0);
}

void FriendRosterTab::showCursor() {
    u32 c = A0V;
    if (c <= 7) {
        s32 n = rowCount;
        if (n == 0) {
            A0V = 8;
        } else if (n <= (s32)c) {
            A0V = n - 1;
        }
    }
    s32 a = getFocusX();
    s32 b = getFocusY();
    U970_A->warpTo(a, b);
    u32 v = A0V;
    if (v <= 7) {
        U970_B->setAnimIfChanged(7);
    } else if (v >= 0xe && v <= 0x15) {
        U970_B->setAnimIfChanged(0xd);
    } else {
        U970_B->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 FriendRosterTab::getFocusX() {
    u32 v = A0V;
    if (v <= 7) {
        return 0x20;
    }
    if (v >= 0xe && v <= 0x15) {
        return MenuTabBar_GetTabX(v - 0xe);
    }
    if (v >= 8 && v <= 0xd) {
        return 0xd6;
    }
    if (v == 0x16) {
        return 0xdb;
    }
    return 0x80;
}

s32 FriendRosterTab::getFocusY() {
    u32 v = A0V;
    if (v <= 7) {
        return v * 16 + 0x38;
    }
    if (v >= 0xe && v <= 0x15) {
        return 8;
    }
    if (v >= 8 && v <= 0xd) {
        return (v - 8) * 16 + 0x3f;
    }
    if (v == 0x16) {
        return 0xaa;
    }
    return 0x60;
}

void FriendRosterTab::hideCursor() {
    U970_B->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void FriendRosterTab::moveCursorToTarget() {
    u32 v = A0V;
    if (v <= 7) {
        U970_B->switchToAnim07();
    } else if (v >= 0xe && v <= 0x15) {
        U970_B->switchToAnim0D();
    } else {
        U970_B->switchToAnim01();
    }
    s32 a = getFocusX();
    s32 b = getFocusY();
    U970_A->moveToEase(a, b, 3, 1);
    returnState = mainState;
    setMainState(3);
}

void FriendRosterTab::moveCursorToPopupRow() {
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    U970_A->moveToLinear(a, b, 2);
    returnState = mainState;
    setMainState(3);
}

void FriendRosterTab::cancelPopup() {
    popupValue = 10;
    popupRow = PopupChoice_DecideCancel(&popup, 1);
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    U970_A->warpTo(a, b);
    U970_C->setAnimAtEnd(8);
    setMainState(0xb);
}

void FriendRosterTab::cursorToPopupTop() {
    if (testFlags(0x10)) {
        popupRow = 2;
    } else {
        popupRow = 0;
    }
    s32 a = popup.getRowX();
    s32 b = popup.getRowY(popupRow);
    U970_A->warpTo(a, b);
    U970_B->setAnimIfChanged(7);
}

void FriendRosterTab::pressCursor() {
    U970_B->setPosePress();
    setMainState(4);
}

void FriendRosterTab::releaseCursor() {
    U970_A->setPoseRelease();
    setMainState(5);
}

void FriendRosterTab::refreshCursor() {
    U970_A->setPoseIdle();
    cursor.vfunc_0c();
}

BOOL FriendRosterTab::moveFocus(u32 keys) {
    u32 old = A0V;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 7) {
        if (MenuKeys_HasDown(keys)) {
            if (A0V + 1 < rowCount) {
                A0V = A0V + 1;
            }
        } else if (MenuKeys_HasUp(keys)) {
            if (A0V != 0) {
                A0V = A0V - 1;
            } else {
                A0V = 0x14;
            }
        } else if (MenuKeys_HasRight(keys)) {
            s32 t = U970_A->getScreenY();
            if (t > 0x94) {
                A0V = 0x16;
            } else {
                t -= 0x35;
                if (t < 0) t = 0;
                t >>= 4;
                if (t >= 6) t = 5;
                A0V = t + 8;
            }
        }
    } else if (old >= 0xe && old <= 0x15) {
        if (MenuKeys_HasLeft(keys)) {
            if (A0V > 0xe) {
                A0V = A0V - 1;
            }
        } else if (MenuKeys_HasRight(keys)) {
            if (A0V < 0x15) {
                A0V = A0V + 1;
            }
        } else if (MenuKeys_HasDown(keys)) {
            s32 t = U970_A->getScreenX();
            if (rowCount != 0 && t < 0x80) {
                A0V = 0;
            } else {
                A0V = 8;
            }
        }
    } else if (old >= 8 && old <= 0xd) {
        if (MenuKeys_HasUp(keys)) {
            if (A0V > 8) {
                A0V = A0V - 1;
            } else {
                A0V = 0x14;
            }
        } else if (MenuKeys_HasDown(keys)) {
            if (A0V < 0xd) {
                A0V = A0V + 1;
            } else {
                A0V = 0x16;
            }
        } else if (MenuKeys_HasLeft(keys)) {
            if (rowCount != 0) {
                s32 t = U970_A->getScreenY();
                t -= 0x30;
                if (t < 0) t = 0;
                t >>= 4;
                s32 n = rowCount;
                if (t >= n) t = n - 1;
                A0V = t;
            }
        }
    } else if (old == 0x16) {
        if (MenuKeys_HasUp(keys)) {
            A0V = 0xd;
        }
        if (MenuKeys_HasLeft(keys)) {
            u32 n = rowCount;
            if (n != 0) {
                A0V = n - 1;
            }
        }
    }
    if (old != A0V) {
        return TRUE;
    }
    return FALSE;
}

void FriendRosterTab::openRegisterChoices()
{
    registerButtonPalette = 7;
    ChoiceIdList_Clear(U3D0, 0xa);
    Unk_ov119_Comm *g = gCommManager;
    if (CommManager_isOnline(g)) {
        s32 skip = g->myAid;
        s32 i = 0;
        u32 tmp[7];
        _ZN11MsgString9BC1Ev(tmp);
        for (; i < 4; i++) {
            if (skip != i) {
                void *p = PlayerData_GetBySessionSlot(i);
                if (p) {
                    PlayerId_getNameString(PlayerData_getPlayerId(p), tmp);
                    PopupChoiceMenuBody_addCustomRow(&popup, U3D0, tmp, (u8)(i + 6));
                }
            }
        }
        _ZN11MsgString9BD1Ev(tmp);
    }
    ChoiceIdList_Add(U3D0, 0xce, 5);
    ChoiceIdList_Add(U3D0, 2, 0xa);
    openPopup(0);
}

void FriendRosterTab::openFriendChoices()
{
    ChoiceIdList_Clear(U3D0, 0xa);
    ChoiceIdList_Add(U3D0, 0xcf, 3);
    ChoiceIdList_Add(U3D0, 0xd0, 2);
    void *rec = getFocusedFriendEntry();
    if (rec) {
        if (DwcFriendData_IsNotFriendKey(FriendEntry_GetFriendData(rec)) == 0) {
            ChoiceIdList_Add(U3D0, 0xd1, 4);
        }
    }
    ChoiceIdList_Add(U3D0, 0xd2, 0);
    ChoiceIdList_Add(U3D0, 2, 0xa);
    openPopup(0);
}

void FriendRosterTab::openRemoveConfirm()
{
    ChoiceIdList_Clear(U3D0, 0xa);
    ChoiceIdList_Add(U3D0, 0xd3, 0xa);
    ChoiceIdList_Add(U3D0, 4, 1);
    ChoiceIdList_Add(U3D0, 0x13, 0xa);
    openPopup(1);
    setFlags(0x10);
}

void FriendRosterTab::removeFriend()
{
    void *rec = getFocusedFriendEntry();
    if (rec) {
        FriendEntry_Clear(rec);
        selectedRow = -1;
        setFlags(2);
        refreshPage();
        delayTimer = 1;
        setMainState(9);
        friendIndex = getFocusedFriendIndex();
    }
}

void FriendRosterTab::openFriendEditor(s32 x)
{
    MenuCtrl_SetIndex((u8)getFocusedFriendIndex());
    requestTab(x);
    func_ov119_02294fa8();
}

void FriendRosterTab::useCodeEntry()
{
    s32 i = findFreeEntry();
    if (i == -1) {
        showError(0x13);
    } else {
        FriendEntry_Clear((u8 *)getFriendEntries() + i * 0x1c);
        MenuCtrl_SetIndex((u8)i);
        requestTab(0xe);
        func_ov119_02294fa8();
    }
}

void FriendRosterTab::registerPresentPlayer()
{
    s32 i = findFreeEntry();
    if (i == -1) {
        showError(0x13);
        return;
    }
    void *a = PlayerData_GetBySessionSlot(popupValue - 6);
    if (isInRoster(PlayerWifiData_GetOwnFriendData(PlayerData_getWifiUserData(a)))) {
        showError(0x14);
        return;
    }
    u8 *b = (u8 *)getFriendEntries();
    void *c = PlayerData_getPlayerId(a);
    u8 *rec = b + i * 0x1c;
    void *d = FriendEntry_GetFriendData(rec);
    DwcFriendData_Copy(d, PlayerWifiData_GetOwnFriendData(PlayerData_getWifiUserData(a)));
    void *e = PlayerId_getName(c);
    Mem_Copy(e, FriendEntry_GetPlayerName(rec), 8);
    void *f = TownId_GetName(PlayerId_GetTownId(c));
    Mem_Copy(f, FriendEntry_GetTownName(rec), 8);
    MenuTabBar_requestSaveOnClose(ProcBase_GetParent(this));
    friendIndex = i;
    if (isWifiMode()) {
        if (Net_WifiAddFriend(friendIndex, DwcFriendData_GetBytes(FriendEntry_GetFriendData(b + friendIndex * 0x1c))) == 0) {
            setMainState(0x10);
            return;
        }
    }
    showFriend(i);
}

void FriendRosterTab::showFriend(s32 x)
{
    buildFriendIndex();
    u32 t = getPageOfFriend(x);
    if (t != targetPage) {
        _ZN15FriendRosterTab7setPageEh(this, t);
    } else {
        refreshPage();
    }
    resumeInput();
}

BOOL FriendRosterTab::activateFocus()
{
    u32 m = focus;
    if (m >= 0xe && m <= 0x15) {
        if (requestTab(m - 0xe)) {
            return TRUE;
        }
        return FALSE;
    }
    if (m >= 8 && m <= 0xd) {
        u8 k = m - 8;
        if (k != targetPage) {
            targetPage = k;
            setMainState(0xe);
            if (k == 4) {
                Snd_PlaySe(0xf);
            } else {
                Snd_PlaySe(0xb);
            }
            return TRUE;
        }
        return FALSE;
    }
    if (m == 0x16) {
        registerButtonPalette = 8;
        delayTimer = 3;
        setMainState(8);
        Snd_PlaySe(0x2b);
        return TRUE;
    }
    if (m <= 7) {
        selectedRow = m;
        setFlags(4);
        delayTimer = 3;
        setMainState(8);
        Snd_PlaySe(0x2b);
        return TRUE;
    }
    return FALSE;
}

u8 FriendRosterTab::hitTest(s32 x, s32 y)
{
    s32 i;
    s32 t = Oam_GetObjX((u8 *)data_ov119_02295648[0] + 8) + 0x83;
    if (t <= x && t + 0x22 >= x) {
        for (i = 0; i < 6; i++) {
            s32 u = Oam_GetObjY((u8 *)data_ov119_02295648[i] + 8) + 0x61;
            if (u <= y && u + 0x12 >= y) {
                return (u8)(i + 8);
            }
        }
    }
    if (x >= 0x18 && x <= 0xc0 && y >= 0x30 && y < 0xb0) {
        s32 r = (y - 0x30) >> 4;
        if (r < rowCount) {
            return (u8)r;
        }
    }
    if (x >= 0xc3 && x <= 0xf3 && y >= 0x9f && y <= 0xb5) {
        return 0x16;
    }
    return 0x17;
}

void FriendRosterTab::uploadScreen()
{
    updateRowMarkBlink();
    if (testFlags(4)) {
        if (page <= 3) {
            BgScreen_SetRectPalette(pageScreens, 5, 6, 0x17, 0x15, 3);
            s32 v = selectedRow;
            if (v != -1) {
                s32 y = v * 2 + 6;
                BgScreen_SetRectPalette(pageScreens, 5, y, 0x17, y + 1, 4);
            }
        }
        clearFlags(4);
        setFlags(2);
    }
    if (testFlags(2)) {
        if (vramTasks[0].requestScreen((u32)shownScreen, 4, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (testFlags(0x20)) {
        vramTasks[1].requestPalette((u32)bgPaletteWork, 6, 3);
        vramTasks[2].requestPalette((u32)objPaletteWork, 8, 10);
    }
}

u16 FriendRosterTab::blendColor(s32 c1, s32 c2, s32 t, s32 n)
{
    u8 r = c2 & 0x1f;
    u8 g = (c2 & 0x3e0) >> 5;
    u8 b = (c2 & 0x7c00) >> 10;
    s32 k = n - t;
    r = ((u8)(c1 & 0x1f) * t + r * k) / n;
    g = ((u8)((c1 & 0x3e0) >> 5) * t + g * k) / n;
    b = ((u8)((c1 & 0x7c00) >> 10) * t + b * k) / n;
    return r | (g << 5) | (b << 10);
}

void FriendRosterTab::setPaletteFade(s32 x)
{
    s32 v = x;
    s32 i;
    if (v < 0) {
        v = 0;
    } else if (v > 5) {
        v = 5;
    }
    setFlags(0x20);
    MIi_CpuCopy16(objPalette, objPaletteWork, 0x20);
    MIi_CpuCopy16(bgPalette, bgPaletteWork, 0x20);
    for (i = 2; i <= 5; i++) {
        bgPaletteWork[i] = blendColor(bgPalette[i], bgPalette[14], v, 5);
    }
    bgPaletteWork[15] = blendColor(bgPalette[15], bgPalette[14], v, 5);
    for (i = 1; i <= 3; i++) {
        objPaletteWork[i] = blendColor(objPalette[i], objPalette[14], v, 5);
    }
    objPaletteWork[15] = blendColor(objPaletteWork[15], objPalette[14], v, 5);
}

BOOL FriendRosterTab::isWifiMode()
{
    s32 t = Net_GetMode();
    switch (t) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

void *FriendRosterTab::getFriendEntries()
{
    return FriendList_GetEntries(PlayerData_getFriendList(PlayerData_GetCurrent()));
}

void *FriendRosterTab::getFocusedFriendEntry()
{
    u8 *b = (u8 *)getFriendEntries();
    s32 v = getFocusedFriendIndex();
    if (v >= 0x20) {
        return 0;
    }
    return b + v * 0x1c;
}

u32 FriendRosterTab::getFocusedFriendIndex()
{
    return rosterIndices[focus + (page << 3)];
}

void FriendRosterTab::buildFriendIndex()
{
    u8 *b = (u8 *)getFriendEntries();
    s32 i;
    s32 n = 0;
    for (i = 0; i < 0x20; i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(b + i * 0x1c))) {
            rosterIndices[n] = i;
            n++;
        }
    }
    for (; n < 0x20; n++) {
        rosterIndices[n] = 0x20;
    }
}

BOOL FriendRosterTab::hasGaps()
{
    u8 *b = (u8 *)getFriendEntries();
    s32 flag = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(b + i * 0x1c)) != 0) {
            if (flag != 0) {
                return TRUE;
            }
        } else {
            flag = 1;
        }
    }
    return FALSE;
}

void FriendRosterTab::compactRoster()
{
    if (isWifiMode()) {
        buildFriendIndex();
    } else {
        FriendList_Compact(PlayerData_getFriendList(PlayerData_GetCurrent()));
    }
}

s32 FriendRosterTab::syncFromWifiFriendList()
{
    u8 *a = (u8 *)Net_GetWifiFriendList();
    u8 *b = (u8 *)getFriendEntries();
    s32 i;
    s32 result = 0;
    u32 tmp[3];
    for (i = 0; i < 0x20; i++) {
        MI_CpuCopy8(a + i * 12, tmp, 12);
        if (func_020e9d7c(tmp) == 0) {
            if (DwcFriendData_IsValid(FriendEntry_GetFriendData(b + i * 0x1c)) == 0) {
                continue;
            }
        }
        u8 *rec = b + i * 0x1c;
        if (func_020e9d88(tmp, DwcFriendData_GetBytes(FriendEntry_GetFriendData(rec))) != 0) {
            s32 t = func_020e9d70(tmp);
            if (t == func_020e9d70(DwcFriendData_GetBytes(FriendEntry_GetFriendData(rec)))) {
                continue;
            }
        }
        MI_CpuCopy8(tmp, DwcFriendData_GetBytes(FriendEntry_GetFriendData(rec)), 12);
        result = 1;
    }
    return result;
}

s32 FriendRosterTab::findFreeEntry()
{
    s32 i;
    u8 *p = (u8 *)getFriendEntries();
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(p)) == 0) {
            return i;
        }
    }
    return -1;
}

BOOL FriendRosterTab::isInRoster(void *p) {
    u8 *r = (u8 *)getFriendEntries();
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(r))) {
            if (DwcFriendData_Compare(p, FriendEntry_GetFriendData(r))) {
                return TRUE;
            }
        }
        r += 0x1c;
    }
    return FALSE;
}

void FriendRosterTab::drawPresentPage() {
    s32 x = 0x1ce;
    s32 i;
    s32 y = 0x14e;
    void *rec;
    s32 cur;
    void *a;
    void *b;
    Unk_ov119_Comm *g;
    s32 pos = 0xc3;
    g = gCommManager;
    cur = g->myAid;
    s32 n = 0;
    u32 A[7];
    u32 B[7];
    _ZN11MsgString9CC2Ev(A);
    _ZN11MsgString9BC1Ev(B);
    for (i = 0; i < 8; i++) {
        a = allocTextLabel();
        b = allocTextLabel();
        rec = 0;
        if (CommManager_isOnline(g)) {
            if (cur == n) {
                n++;
            }
            if (n < 4) {
                rec = PlayerData_GetBySessionSlot(n);
                n++;
            }
        }
        if (rec != 0) {
            void *g2 = PlayerData_getPlayerId(rec);
            TownId_GetNameString(PlayerId_GetTownId(g2), &A);
            String_SetSlot(0, &A);
            String_Load2dMenu(a, 0x66);
            PlayerId_getNameString(g2, &B);
            MsgString_copy(b, &B);
            setRowIcon(&pageScreens[pos], 0x58);
            rowMarkMask = rowMarkMask | (1 << i);
        } else {
            MsgString_clear(a);
            MsgString_clear(b);
            setRowIcon(&pageScreens[pos], 0x10);
        }
        LabelString_createLabel(a, 4, x, 10, 0xf, 0, 0);
        LabelString_redrawAligned(a, 0, 0);
        LabelString_createLabel(b, 4, y, 8, 0xf, 0, 0);
        LabelString_redrawAligned(b, 0, 0);
        x += 0x14;
        y += 0x10;
        pos += 0x40;
    }
    BgScreen_SetRectPalette(pageScreens, 5, 6, 0x17, 0x15, 5);
    _ZN11MsgString9BD1Ev(B);
    _ZN11MsgString9CD1Ev(A);
}

void FriendRosterTab::drawOwnCodePage() {
    void *g = PlayerData_getPlayerId(PlayerData_GetCurrent());
    void *a = allocTextLabel();
    u32 A[7];
    _ZN11MsgString9CC2Ev(A);
    TownId_GetNameString(PlayerId_GetTownId(g), &A);
    String_SetSlot(0, &A);
    String_Load2dMenu(a, 0x66);
    LabelString_createLabel(a, 4, 0x102, 10, 0xf, 0, 0);
    LabelString_redrawAligned(a, 0, 0);
    void *b = allocTextLabel();
    u32 B[7];
    _ZN11MsgString9BC1Ev(B);
    PlayerId_getNameString(g, &B);
    MsgString_copy(b, &B);
    LabelString_createLabel(b, 4, 0x116, 8, 0xf, 0, 0);
    LabelString_redrawAligned(b, 0, 0);
    _ZN11MsgString9BD1Ev(B);
    _ZN11MsgString9CD1Ev(A);
}

void FriendRosterTab::drawFriendCodeHelp() {
    u8 ch = gU8None;
    void *p = PlayerData_GetCurrent();
    s32 i;
    if (PlayerWifiData_HasUserId(PlayerData_getWifiUserData(p)) == 0) {
        ch = 0xd4;
    } else if (PlayerWifiData_IsConfigValid(PlayerData_getWifiUserData(p)) == 0) {
        ch = 0xec;
    } else {
        ch = 0xd5;
    }
    String_Load2d(&helpText, &ch, 0);
    for (i = 0; i < 3; i++) {
        void *o = allocTextLabel();
        MsgString_setLine(o, Msg_SkipLines((u8 *)this + 0x8ae, i));
        LabelString_createLabel(o, 4, i * 0x28 + 0x8a, 0x14, 0xf, 0, 0);
        LabelString_redrawAligned(o, 0, 0);
    }
}

void FriendRosterTab::setRowIcon(u16 *p, u32 v) {
    p[0] = p[0] & ~0x3ff;
    p[0] = p[0] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[1] = p[1] & ~0x3ff;
    p[1] = p[1] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x20] = p[0x20] & ~0x3ff;
    p[0x20] = p[0x20] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x21] = p[0x21] & ~0x3ff;
    p[0x21] = p[0x21] | v;
}

void FriendRosterTab::drawRosterPage() {
    s32 i;
    u8 *recs;
    void *a;
    void *b;
    recs = (u8 *)getFriendEntries();
    s32 base = page << 3;
    s32 x = 0x1ce;
    s32 y = 0x14e;
    s32 pos = 0xc3;
    u32 A[7];
    u32 B[6];
    _ZN11MsgString9CC2Ev(A);
    _ZN15EncodedString8BC2Ev(B);
    for (i = 0; i < 8; i++) {
        a = allocTextLabel();
        b = allocTextLabel();
        s32 idx = rosterIndices[base];
        u8 *rec;
        if (idx < 0x20) {
            rec = recs + idx * 0x1c;
        } else {
            rec = 0;
        }
        if (rec != 0 && DwcFriendData_IsValid(FriendEntry_GetFriendData(rec))) {
            EncodedString_SetRaw(&B, (void *)FriendEntry_GetTownName(rec), 8);
            MsgString_fromEncoded(&A, &B, 0, 0);
            String_SetSlot(0, &A);
            String_Load2dMenu(a, 0x66);
            String_FromEncodedBytes(b, (void *)FriendEntry_GetPlayerName(rec), 8);
            rowCount = rowCount + 1;
            if (DwcFriendData_IsNotFriendKey(FriendEntry_GetFriendData(rec))) {
                setRowIcon(&pageScreens[pos], 0x50);
            } else {
                setRowIcon(&pageScreens[pos], 0x54);
            }
        } else {
            MsgString_clear(a);
            MsgString_clear(b);
            setRowIcon(&pageScreens[pos], 0x10);
        }
        LabelString_createLabel(a, 4, x, 10, 0xf, 0, 0);
        LabelString_redrawAligned(a, 0, 0);
        LabelString_createLabel(b, 4, y, 8, 0xf, 0, 0);
        LabelString_redrawAligned(b, 0, 0);
        x += 0x14;
        y += 0x10;
        base++;
        pos += 0x40;
    }
    _ZN15EncodedString8BD1Ev(B);
    _ZN11MsgString9CD1Ev(A);
}

void FriendRosterTab::refreshPage() {
    rowMarkMask = 0;
    rowMarkBlinkTimer = 0;
    clearRowMarks();
    rowCount = 0;
    u8 t = page;
    switch (t) {
    case 5:
        drawPresentPage();
        break;
    case 4:
        drawOwnCodePage();
        break;
    default:
        setFlags(4);
        drawRosterPage();
        break;
    }
}

void FriendRosterTab::setPage(u8 s) {
    if (s != page) {
        targetPage = s;
        page = s;
        u8 t = page;
        if (t == 5) {
            addTitleLabel(0xeb);
            shownScreen = pageScreens;
        } else if (t == 4) {
            addTitleLabel(0xea);
            shownScreen = &pageScreens[0x400];
        } else {
            addTitleLabel(0xcd);
            shownScreen = pageScreens;
        }
        setFlags(2);
        refreshPage();
    }
}

u32 FriendRosterTab::getPageOfFriend(s32 idx) {
    u8 *base = (u8 *)getFriendEntries();
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(base + i * 0x1c))) {
            cnt++;
            if (i >= idx) {
                i = 0x20;
            }
        }
    }
    if (cnt > 0) {
        return ((u32)(cnt - 1) << 21) >> 24;
    }
    return 0;
}

void FriendRosterTab::loadOwnFriendCode() {
    void *p = PlayerData_GetCurrent();
    s32 i;
    if ((PlayerWifiData_HasUserId(PlayerData_getWifiUserData(p)) & PlayerWifiData_IsConfigValid(PlayerData_getWifiUserData(p))) == 0) {
        for (i = 0; i < 12; i++) {
            ownCodeDigits[i] = 10;
        }
    } else {
        u64 v = PlayerWifiData_GetFriendCode(PlayerData_getWifiUserData(p));
        for (i = 11; i >= 0; i--) {
            ownCodeDigits[i] = (u8)(v % 10);
            v = v / 10;
        }
    }
}

u8 FriendRosterTab::getPopupRowValue(u32 idx) { return *((u8 *)this + idx + 0x3d5); }

void FriendRosterTab::onPopupChoice() {
    switch (popupValue) {
    case 1:
        removeFriend();
        break;
    case 0:
        openRemoveConfirm();
        break;
    case 2:
        openFriendEditor(9);
        break;
    case 3:
        openFriendEditor(0xb);
        break;
    case 4:
        openFriendEditor(0xd);
        break;
    case 5:
        useCodeEntry();
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        registerPresentPlayer();
        break;
    case 10:
    default:
        resumeInput();
        break;
    }
}

void FriendRosterTab::openPopup(u32 x) {
    PopupChoiceMenuBody_setRowsFromIds(&popup, (u8 *)this + 0x3d0, x);
    u32 r;
    if (focus == 0x16) {
        r = 0x9c;
    } else {
        r = 0xb8;
    }
    PopupChoiceMenu_placeAbove(&popup, 0x100, r);
    PopupChoice_Open(&popup, 0);
    setMainState(10);
    clearFlags(0x10);
}

void FriendRosterTab::cancelChoice() {
    popupValue = 10;
    hideCursor();
    PopupChoice_Close(&popup, 0);
    setMainState(0xc);
}

void FriendRosterTab::drawRowMarks() {
    s32 i;
    clearRowMarks();
    for (i = 0; i < 8; i++) {
        if (rowMarkMask & (1 << i)) {
            BgScreen_SetRectPalette(pageScreens, 3, i * 2 + 6, 4, i * 2 + 7, 5);
        }
    }
}

void FriendRosterTab::clearRowMarks() {
    BgScreen_SetRectPalette(pageScreens, 3, 6, 4, 0x15, 3);
    setFlags(2);
}

void FriendRosterTab::updateRowMarkBlink() {
    rowMarkBlinkTimer = rowMarkBlinkTimer + 1;
    u8 c = rowMarkBlinkTimer;
    if (c == 10) {
        drawRowMarks();
    } else if (c >= 0x19) {
        clearRowMarks();
        rowMarkBlinkTimer = 0;
    }
}

BOOL FriendRosterTab::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void FriendRosterTab::setFlags(u32 mask) { flags = flags | mask; }

void FriendRosterTab::clearFlags(u32 mask) { flags = flags & ~mask; }

extern "C" void *data_ov119_02295590[2] = {(void *)_ZN15FriendRosterTab9mainAct0FEv, 0};

extern "C" void *data_ov119_022955d8[2] = {(void *)_ZN15FriendRosterTab9mainAct0EEv, 0};

extern "C" void *data_ov119_02295640[2] = {(void *)_ZN15FriendRosterTab9stateLoadEv, 0};

extern "C" u32 data_ov119_022956a8[10] = {0x404d00f7, 0x000044c4, 0x804240f5, 0x0000450b, 0x006280f5, 0x0000450f, 0x40424005, 0x0000454b, 0x00620005, 0xffff454f};

extern "C" void *data_ov119_02295628[2] = {(void *)_ZN15FriendRosterTab10stateCloseEv, 0};

extern "C" void *data_ov119_022955b8[2] = {(void *)_ZN15FriendRosterTab9mainAct10Ev, 0};

extern "C" u32 data_ov119_02295748[12] = {0x40490027, 0x0000b0d0, 0x00598027, 0x0000b0d2, 0x80424025, 0x0000b50b, 0x00628025, 0x0000b50f, 0x40424035, 0x0000b54b, 0x00620035, 0xffffb54f};

extern "C" Unk_ov119_02295588 data_ov119_02295588 = {0x419700f0, 0xa1a0, 0xffff};

extern "C" void *data_ov119_022955a8[2] = {(void *)_ZN15FriendRosterTab9mainAct01Ev, 0};

extern "C" void *data_ov119_02295598[2] = {(void *)_ZN15FriendRosterTab9mainAct0CEv, 0};

extern "C" void *data_ov119_022955c0[2] = {(void *)_ZN15FriendRosterTab9mainAct09Ev, 0};

extern "C" u32 data_ov119_02295778[12] = {0x80454041, 0x000074ca, 0x40650041, 0x000074ce, 0x8059403f, 0x00007502, 0x4059404f, 0x00007542, 0x8041403f, 0x00007500, 0x4041404f, 0xffff7540};

extern "C" void *data_ov119_022955f0[2] = {(void *)_ZN15FriendRosterTab16updateCursorMoveEv, 0};

extern "C" void *data_ov119_022955c8[2] = {(void *)_ZN15FriendRosterTab9mainAct08Ev, 0};

extern "C" u32 data_ov119_022957a8[12] = {0x419840ed, 0x00005530, 0x402040ed, 0x00005530, 0x400040ed, 0x00005530, 0x41e840ed, 0x00005530, 0x41c840ed, 0x00005530, 0x41a840ed, 0xffff5530};
