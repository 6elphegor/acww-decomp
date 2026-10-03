// mwcc-flags: -str reuse
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 sKeyDigits[12];
extern const u32 sKeyColumnX[3];
extern const u8 sFriendCodeTouchKeyMap[12];
extern const s32 sFriendCodeCursorYTable[12];
extern const u32 sKeyRowY[12];
extern const s32 sFriendCodeCursorXTable[12];
extern u16 sFriendCodeKeySeIds[10];
extern u32 sCaretCells[2];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gU8None;
extern u16 gPad[];

void BgScreen_SetRectPalette(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void Snd_PlaySe(s32 v);
void Snd_PlayKeySe(u32 a);
void *FriendEntry_GetFriendData(void *p);
BOOL DwcFriendData_ToCodeDigits(void *a, u8 *buf);
void *PlayerData_GetCurrent();
void *PlayerWifiData_GetDwcUserData(void *p);
void DwcFriendData_Clear(void *p);
BOOL DwcFriendData_FromCodeDigits(void *out, u8 *data, void *ctx);
void MenuCtrl_SetResult(u32 v);
s32 MenuCtrl_GetMode();
void FriendEntry_Clear(void *p);
void InventoryBg_DrawSprite();
s32 MenuCtrl_SetFriendPageFromIndex();
s32 Net_GetMode();
s32 MenuCtrl_GetIndex();
u32 DwcFriendData_GetBytes(void *p);
BOOL Net_WifiAddFriend(u32 a, u32 b);
void *ProcBase_GetParent();
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasUp(u32 v);
BOOL MenuKeys_HasDown(u32 v);
u64 PlayerWifiData_GetFriendCode(void *p);
void *FriendList_GetEntries(void *p);
BOOL DwcFriendData_IsValid(void *p);
BOOL DwcFriendData_Compare(u32 a, void *p);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void ProcBase_RequestDelete(void *p);
void String_Load2dMenu(void *p, s32 a);
void File_LoadToBuffer(void *a, void *b, s32 c);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Snd_SetKeySeMode(s32 a);
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void NumberPad_LoadObjGraphics(s32 a);
void NumberPad_LoadBgGraphics(s32 a);
void NumberPad_DrawKeypadFrame(s32 a);
void MenuButtons_LoadTextColors(void *self);
void _ZN14FriendCodeMenu12stateMessageEv();
extern void *data_ov133_02295200[2];
void _ZN14FriendCodeMenu10stateCloseEv();
extern void *data_ov133_02295208[2];
void _ZN14FriendCodeMenu12stateOpeningEv();
extern void *data_ov133_02295210[2];
void _ZN14FriendCodeMenu12stateClosingEv();
extern void *data_ov133_02295218[2];
void _ZN14FriendCodeMenu17updateCursorPressEv();
extern void *data_ov133_02295220[2];
void _ZN14FriendCodeMenu19updateCursorReleaseEv();
extern void *data_ov133_02295228[2];
void _ZN14FriendCodeMenu19stateRetryAddFriendEv();
extern void *data_ov133_02295238[2];
void _ZN14FriendCodeMenu9stateOpenEv();
extern void *data_ov133_02295240[2];
void _ZN14FriendCodeMenu9stateExitEv();
extern void *data_ov133_02295248[2];
void _ZN14FriendCodeMenu16stateCaretSelectEv();
extern void *data_ov133_02295250[2];
void _ZN14FriendCodeMenu20stateBackspaceRepeatEv();
extern void *data_ov133_02295258[2];
void _ZN14FriendCodeMenu17stateButtonRepeatEv();
extern void *data_ov133_02295260[2];
void _ZN14FriendCodeMenu9stateLoadEv();
extern void *data_ov133_02295270[2];
void _ZN14FriendCodeMenu16updateCursorMoveEv();
extern void *data_ov133_02295278[2];
void _ZN14FriendCodeMenu13updateButtonsEv();
extern void *data_ov133_02295280[2];
void _ZN14FriendCodeMenu19stateTouchDragCaretEv();
extern void *data_ov133_02295288[2];
void _ZN14FriendCodeMenu16stateTouchRepeatEv();
extern void *data_ov133_02295290[2];
void _ZN14FriendCodeMenu11updateTouchEv();
extern void *data_ov133_02295298[2];
}

struct CommManager {
    s32 isSlotActive(s32 v);
    u8 pad_00[0x64];
    s32 unk_64;
};

class PlayerData {
public:
    void *getFriendList();
    void *getWifiUserData();
    void *getPlayerId();
};

class PlayerId {
public:
    s32 getGender();
};

class MenuTabBar {
public:
    void requestSaveOnClose();
    void showTabs();
    s32 onTabMenuClosed();
    void selectTab(u32 v);
};
extern "C" CommManager *gCommManager;

// Vtable 0x022044e4
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
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    u32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    void func_ov002_02200a68();

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

// Element at +0xb0, 0x40 bytes
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void destroyLabel();
    void createLabel(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void redrawAligned(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// Menu/message cursor buffer objects at +0x2b8 and +0x2dc (0x24 bytes each)
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u8 unk_04[0x20];
};

// Menu cursor sub-object hierarchy
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
};

class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    s32 getScreenX();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

// Same object as MenuCursorBase under the name used by src/ov002/unk_02202b68.cpp
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

class MenuBottomButtonsBody {
public:
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 a);
    BOOL isButtonDisabled(s32 idx);
    void enableButton(s32 idx);
    void disableButton(s32 idx);
};

// Menu list sub-object, 0x164 bytes
class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutConfirmAnd06(u8 a);
    void drawAt(s32 a);
    void freeTexts();
    u32 unk_00[0x164 / 4];
};

// Object at +0x1300 (0x108 bytes)
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    BOOL update(s32 a);
    void open(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// Local object with empty out-of-line ctor/dtor (func_02076f74 / func_02076f70)
class DwcFriendData {
public:
    DwcFriendData();
    ~DwcFriendData();
    u32 v[3];
};

class FriendCodeMenu;
typedef void (FriendCodeMenu::*Unk_ov133_022952bc_Fn)();

// Vtable 0x022952bc, size 0x1408
class FriendCodeMenu : public MenuProc {
public:
    FriendCodeMenu() : unk_b0(), unk_f0(), unk_154(), unk_2b8(), unk_1300() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void unhighlightKey(s32 idx);
    void highlightKey(s32 idx);
    void setKeyPalette(s32 idx, u32 to);
    void resetKeyPalettes();
    BOOL tickKeyRepeat();
    void stopKeyRepeat();
    BOOL pressCursorKey();
    void flushScreens();
    void drawSelection();
    void drawCodeDigits();
    s32 getCodeLength();
    BOOL insertDigit(u8 v);
    void deleteSelection();
    BOOL deleteBackward(s32 f);
    void clearCode();
    void loadEntryCode();
    void extendSelection(s32 x);
    void setCaret(u8 x);
    s32 getCaretFromTouch();
    BOOL moveCaretByPad(u32 key);
    BOOL applyKey(s32 a);
    s32 activateCursorKey();
    void cancel();
    void confirm();
    BOOL isOwnFriendCode();
    BOOL isDuplicateFriend(u32 a);
    void *getFriendEntry();
    u32 hitTest(s32 x, s32 y);
    BOOL moveCursorByPad(u32 keys);
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void *allocLabel();
    void releaseLabels();
    void showMessage(u8 v, s32 b);
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void stateRetryAddFriend();
    void stateMessage();
    void stateExit();
    void stateCaretSelect();
    void stateBackspaceRepeat();
    void stateButtonRepeat();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void stateTouchDragCaret();
    void stateTouchRepeat();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postInputUpdate();
    void preInputUpdate();
    void postStateUpdate();
    void preStateUpdate();
    void releaseResources();
    void initState();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    BOOL notifyParent(u32 v);
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ u8 unk_9a;
    /* 0x09b */ u8 unk_9b;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u8 unk_a0;
    /* 0x0a1 */ u8 unk_a1;
    /* 0x0a2 */ u8 unk_a2;
    /* 0x0a3 */ u8 unk_a3;
    /* 0x0a4 */ u8 unk_a4[12];
    /* 0x0b0 */ LabelString unk_b0[1];
    /* 0x0f0 */ MenuCursorBuf0 unk_f0;
    /* 0x154 */ MenuBottomButtons unk_154;
    /* 0x2b8 */ BgVramTask unk_2b8[2];
    /* 0x300 */ u16 unk_300[0x400];
    /* 0xb00 */ u16 unk_b00[0x400];
    /* 0x1300 */ MenuErrorMessage unk_1300;
};

struct Unk_ov133_SceneEntry {
    FriendCodeMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" FriendCodeMenu *FriendCodeMenu_Create() { return new FriendCodeMenu(); }

BOOL FriendCodeMenu::vfunc_00() {
    initState();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL FriendCodeMenu::vfunc_0c() {
    MenuTabBar *p = (MenuTabBar *)ProcBase_GetParent();
    if (p->onTabMenuClosed() == 6) {
        p->showTabs();
    }
    releaseResources();
    return TRUE;
}

BOOL FriendCodeMenu::onDraw() {
    if (!testFlags(1)) {
        return TRUE;
    }
    if (MenuCtrl_IsButtons()) {
        unk_f0.drawWrapped();
    }
    unk_154.drawAt(unk_94);
    NumberPad_DrawKeypadFrame(unk_94);
    if (unk_a1 & 0x10) {
        Oam_DrawCell(1, sCaretCells, (unk_9f << 4) + 0x20, unk_94 + 0x40, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov133_02295220[2];
extern "C" void *data_ov133_02295238[2];
extern "C" void *data_ov133_02295258[2];
extern "C" void *data_ov133_02295240[2];
extern "C" void *data_ov133_02295210[2];
extern "C" void *data_ov133_02295200[2];
extern "C" u16 sFriendCodeKeySeIds[10];
extern "C" void *data_ov133_02295298[2];
extern "C" void *data_ov133_02295290[2];
extern "C" void *data_ov133_02295288[2];
extern "C" u32 sCaretCells[2];
extern "C" void *data_ov133_02295278[2];
extern "C" const u32 sKeyColumnX[3];
extern "C" const s32 sFriendCodeCursorXTable[12];
extern "C" void *data_ov133_02295250[2];
extern "C" void *data_ov133_02295270[2];
extern "C" void *data_ov133_02295280[2];
extern "C" const u8 sKeyDigits[12];
extern "C" void *data_ov133_02295208[2];
extern "C" const u8 sFriendCodeTouchKeyMap[12];
extern "C" void *data_ov133_02295260[2];
extern "C" const s32 sFriendCodeCursorYTable[12];
extern "C" void *data_ov133_02295248[2];
extern "C" const u32 sKeyRowY[12];
extern "C" void *data_ov133_02295228[2];
extern "C" void *data_ov133_02295218[2];
extern "C" Unk_ov133_SceneEntry sFriendCodeMenuProfile;

extern "C" void *data_ov133_02295220[2] = {(void *)_ZN14FriendCodeMenu17updateCursorPressEv, 0};

extern "C" void *data_ov133_02295238[2] = {(void *)_ZN14FriendCodeMenu19stateRetryAddFriendEv, 0};

extern "C" void *data_ov133_02295258[2] = {(void *)_ZN14FriendCodeMenu20stateBackspaceRepeatEv, 0};

extern "C" void *data_ov133_02295240[2] = {(void *)_ZN14FriendCodeMenu9stateOpenEv, 0};

extern "C" void *data_ov133_02295210[2] = {(void *)_ZN14FriendCodeMenu12stateOpeningEv, 0};

extern "C" void *data_ov133_02295200[2] = {(void *)_ZN14FriendCodeMenu12stateMessageEv, 0};

BOOL FriendCodeMenu::execTransition() {
    static Unk_ov133_022952bc_Fn tbl[5] = {
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295270,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295240,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295210,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295208,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295218};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}
extern "C" u16 sFriendCodeKeySeIds[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

extern "C" void *data_ov133_02295298[2] = {(void *)_ZN14FriendCodeMenu11updateTouchEv, 0};

extern "C" void *data_ov133_02295290[2] = {(void *)_ZN14FriendCodeMenu16stateTouchRepeatEv, 0};

extern "C" void *data_ov133_02295288[2] = {(void *)_ZN14FriendCodeMenu19stateTouchDragCaretEv, 0};

extern "C" u32 sCaretCells[2] = {0x000080f8, 0xffff5181};

extern "C" void *data_ov133_02295278[2] = {(void *)_ZN14FriendCodeMenu16updateCursorMoveEv, 0};

extern "C" const u32 sKeyColumnX[3] = {9, 0xe, 0x12};

extern "C" const s32 sFriendCodeCursorXTable[12] = {0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0};

void FriendCodeMenu::runMainState() {
    static Unk_ov133_022952bc_Fn tbl[13] = {
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295298,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295290,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295288,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295280,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295278,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295220,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295228,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295260,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295258,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295250,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295248,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295200,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295238};
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 7:
        case 8:
        case 9:
            hideCursor();
            setTransitionState(3);
            notifyParent(7);
            if (MenuCtrl_GetMode() == 0xe) {
                FriendEntry_Clear(getFriendEntry());
            }
            setPhase(1);
            break;
        case 4:
        case 5:
        case 6:
            break;
        }
    }
    (this->*tbl[unk_8d])();
}

BOOL FriendCodeMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL FriendCodeMenu::execPhase3() { return TRUE; }

BOOL FriendCodeMenu::execPhase4() { return TRUE; }

BOOL FriendCodeMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL FriendCodeMenu::notifyParent(u32 v) {
    ((MenuTabBar *)ProcBase_GetParent())->selectTab((u8)v);
    return TRUE;
}

void FriendCodeMenu::stateLoad() {
    setupBgLayers();
    loadBgGfx();
    loadObjGfx();
    setTransitionState(1);
    unk_154.setLayoutConfirmAnd06(0x65);
    stateOpen();
}

void FriendCodeMenu::stateOpen() {
    beginSubSlideIn(0xa, 0, 0, 0x30);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setFlags(1);
    unk_94 = getSlideOffsetY();
    setTransitionState(2);
}

void FriendCodeMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0);
    unk_94 = getSlideOffsetY();
}

void FriendCodeMenu::stateClose() {
    hideCursor();
    beginSubSlideOut(0xa, 0, 0, 0x30);
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0);
    setTransitionState(4);
    unk_94 = getSlideOffsetY();
}

void FriendCodeMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(6);
        clearFlags(1);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, 0);
        applySlideOffset(6, 0, 0);
        unk_94 = getSlideOffsetY();
    }
}

void FriendCodeMenu::initState() {
    unk_9a = 0;
    unk_98 = 0;
    unk_9c = 0xb;
    unk_9e = 0;
    unk_9d = 0;
    void *p = PlayerData_GetCurrent();
    if (p != 0) {
        if (((PlayerId *)((PlayerData *)p)->getPlayerId())->getGender() == 0) {
            Snd_SetKeySeMode(0);
            return;
        }
    }
    Snd_SetKeySeMode(1);
}

void FriendCodeMenu::releaseResources() {
    unk_2b8[0].cancel();
    unk_2b8[1].cancel();
    releaseLabels();
    unk_154.freeTexts();
}

void FriendCodeMenu::preStateUpdate() {
    unk_2b8[0].cancel();
    unk_2b8[1].cancel();
    releaseLabels();
    unk_154.freeTexts();
    if (unk_9e != 0) {
        unk_9e = *(volatile u8 *)&unk_9e - 1;
        if (unk_9e == 0) {
            if (unk_9d != 0) {
                unk_9e = 1;
            } else {
                unhighlightKey(unk_a0);
            }
        }
    }
    unk_a1 = unk_a1 + 1;
}

void FriendCodeMenu::postStateUpdate() { flushScreens(); }

void FriendCodeMenu::preInputUpdate() {
    preStateUpdate();
    unk_f0.vfunc_0c();
}

void FriendCodeMenu::postInputUpdate() { postStateUpdate(); }

void FriendCodeMenu::setupBgLayers() {
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void FriendCodeMenu::loadBgGfx() {
    NumberPad_LoadBgGraphics(4);
    File_LoadToBuffer((void *)"menu/bank/g0_bg.bsc", unk_b00, 0x800);
    File_LoadToBuffer((void *)"menu/bank/g1_bg.bsc", unk_300, 0x800);
    loadEntryCode();
    setFlags(2);
    setFlags(4);
}

void FriendCodeMenu::loadObjGfx() {
    NumberPad_LoadObjGraphics(7);
    void *p = allocLabel();
    String_Load2dMenu(p, 0xd7);
    ((LabelString *)p)->createLabel(8, 0x14c, 0xe, 0xf, 0, 0);
    ((LabelString *)p)->redrawAligned(1, 0);
    MenuButtons_LoadTextColors(&unk_154);
}

void FriendCodeMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else {
        BOOL ok;
        if (gTouchHeld != 0 && gTouchChanged != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (ok) {
            if (unk_154.isButtonDisabled(6) == 0 && unk_154.isTouched(6) != 0) {
                confirm();
            } else if (unk_154.isTouched(7)) {
                cancel();
            } else {
                u32 r = hitTest(gTouchCurX, gTouchCurY);
                if (r == 0xc) {
                    u32 t = getCaretFromTouch();
                    setCaret((u8)t);
                    setMainState(2);
                } else if (r != 0xf) {
                    if (pressCursorKey()) {
                        setMainState(1);
                    }
                }
            }
        }
    }
}

void FriendCodeMenu::stateTouchRepeat() {
    if (gTouchHeld == 0) {
        stopKeyRepeat();
        setMainState(0);
    } else {
        if (tickKeyRepeat()) {
            applyKey(0);
        }
    }
}

void FriendCodeMenu::stateTouchDragCaret() {
    if (gTouchHeld == 0) {
        setMainState(0);
    } else {
        u32 r = getCaretFromTouch();
        extendSelection((u8)r);
    }
}

void FriendCodeMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u32 k = takeRepeatedKeys();
        if (moveCursorByPad(k)) {
            moveCursorToTarget();
        } else {
            u32 t = gPad[1];
            if (t & 1) {
                pressCursor();
            } else if (t & 2) {
                if (deleteBackward(0)) {
                    unk_9d = 0xd;
                    setMainState(8);
                    if (unk_9c == 0xc) {
                        s32 x = getCursorTargetX();
                        s32 y = getCursorTargetY();
                        unk_f0.warpTo(x, y);
                    }
                } else {
                    cancel();
                    hideCursor();
                }
            } else if (t & 8) {
                if (!unk_154.isButtonDisabled(6)) {
                    confirm();
                    hideCursor();
                }
            }
        }
    }
}

void FriendCodeMenu::updateCursorMove() {
    if (!unk_f0.isMoving()) {
        setMainState(unk_9b);
        runMainState();
    }
}

void FriendCodeMenu::updateCursorPress() {
    if (unk_f0.isAnimDone()) {
        s32 r = activateCursorKey();
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

void FriendCodeMenu::updateCursorRelease() {
    if (unk_f0.isAnimDone()) {
        refreshCursor();
        setMainState(3);
    }
}

void FriendCodeMenu::stateButtonRepeat() {
    if ((gPad[0] & 1) == 0) {
        stopKeyRepeat();
        setMainState(3);
        releaseCursor();
    } else {
        if (tickKeyRepeat()) {
            applyKey(0);
        }
    }
}

void FriendCodeMenu::stateBackspaceRepeat() {
    if ((gPad[0] & 2) == 0) {
        stopKeyRepeat();
        setMainState(3);
    } else {
        if (tickKeyRepeat()) {
            if (deleteBackward(1)) {
                if (unk_9c == 0xc) {
                    s32 x = getCursorTargetX();
                    s32 y = getCursorTargetY();
                    unk_f0.warpTo(x, y);
                }
            }
        }
    }
}

void FriendCodeMenu::stateCaretSelect() {
    if ((gPad[0] & 1) == 0) {
        setMainState(3);
        releaseCursor();
    } else {
        u32 k = takeRepeatedKeys();
        if (moveCaretByPad(k)) {
            extendSelection(unk_9f);
        }
    }
}

void FriendCodeMenu::stateExit() {
    if (unk_154.stepPress()) {
        if (unk_f0.getAnim()) {
            s32 a = unk_154.getPressOffset();
            s32 b = unk_154.getTargetX(-1);
            s32 c = unk_154.getTargetY(-1);
            unk_f0.warpTo(a + (b - 6), a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void FriendCodeMenu::stateMessage() {
    if (unk_1300.update(1)) {
        resumeInput();
    }
}

void FriendCodeMenu::stateRetryAddFriend() {
    void *r = getFriendEntry();
    s32 idx = MenuCtrl_GetIndex();
    u32 t = DwcFriendData_GetBytes(FriendEntry_GetFriendData(r));
    if (Net_WifiAddFriend((u8)idx, t)) {
        setMainState(10);
    }
}

void FriendCodeMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void FriendCodeMenu::startButtonInput() {
    showCursor();
    restartKeyRepeat();
    setMainState(3);
}

void FriendCodeMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void FriendCodeMenu::showMessage(u8 v, s32 b) {
    u8 l;
    u8 *p = &l;
    *p = gU8None;
    *p = v;
    unk_1300.open(p, b, 0);
    setMainState(0xb);
    hideCursor();
}

void FriendCodeMenu::releaseLabels() {
    unk_9a = 0;
    unk_b0[0].destroyLabel();
}

void *FriendCodeMenu::allocLabel() {
    if ((*(volatile u8 *)&unk_9a) >= 1) {
        return &unk_b0;
    }
    (*(volatile u8 *)&unk_9a) = (*(volatile u8 *)&unk_9a) + 1;
    return (u8 *)&unk_b0 + ((*(volatile u8 *)&unk_9a) - 1) * 0x40;
}

void FriendCodeMenu::showCursor() {
    s32 x = getCursorTargetX();
    s32 y = getCursorTargetY();
    unk_f0.warpTo(x, y);
    if ((u8)(unk_9c + 0xf3) <= 1) {
        ((MenuCursor *)&unk_f0)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&unk_f0)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 FriendCodeMenu::getCursorTargetX() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return sFriendCodeCursorXTable[v];
    }
    switch (v) {
    case 0xc:
        return (unk_9f << 4) + 0x20;
    case 0xd:
        return unk_154.getTargetX(6);
    case 0xe:
        return unk_154.getTargetX(7);
    default:
        return 0x80;
    }
}

s32 FriendCodeMenu::getCursorTargetY() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return sFriendCodeCursorYTable[v];
    }
    switch (v) {
    case 0xc:
        return 0x40;
    case 0xd:
        return unk_154.getTargetY(6);
    case 0xe:
        return unk_154.getTargetY(7);
    default:
        return 0x60;
    }
}

void FriendCodeMenu::hideCursor() {
    ((MenuCursor *)&unk_f0)->setAnimIfChanged(0);
    unk_f0.vfunc_0c();
}

void FriendCodeMenu::moveCursorToTarget() {
    if ((u8)(unk_9c + 0xf3) <= 1) {
        ((MenuCursor *)&unk_f0)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_f0)->switchToAnim01();
    }
    s32 x = getCursorTargetX();
    s32 y = getCursorTargetY();
    unk_f0.moveToEase(x, y, 3, 1);
    unk_9b = unk_8d;
    setMainState(4);
}

void FriendCodeMenu::pressCursor() {
    if (unk_9c == 0xc) {
        setMainState(9);
    } else {
        ((MenuCursor *)&unk_f0)->setPosePress();
        setMainState(5);
    }
}

void FriendCodeMenu::releaseCursor() {
    unk_f0.setPoseRelease();
    setMainState(6);
}

void FriendCodeMenu::refreshCursor() {
    unk_f0.setPoseIdle();
    unk_f0.vfunc_0c();
}

BOOL FriendCodeMenu::moveCursorByPad(u32 keys) {
    u32 old = unk_9c;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 0xb) {
        if (MenuKeys_HasLeft(keys)) {
            if ((s32)(*(volatile u8 *)&unk_9c) % 3 > 0) {
                (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) - 1;
            }
        } else if (MenuKeys_HasRight(keys)) {
            if ((s32)(*(volatile u8 *)&unk_9c) % 3 < 2) {
                (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) + 1;
            } else {
                (*(volatile u8 *)&unk_9c) = 0xd;
            }
        }
        if ((*(volatile u8 *)&unk_9c) <= 0xb) {
            if (MenuKeys_HasUp(keys)) {
                if ((*(volatile u8 *)&unk_9c) <= 2) {
                    (*(volatile u8 *)&unk_9c) = 0xc;
                } else {
                    (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) - 3;
                }
            } else if (MenuKeys_HasDown(keys)) {
                u32 v = (*(volatile u8 *)&unk_9c);
                if (v < 9 || v > 0xb) {
                    (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) + 3;
                } else {
                    (*(volatile u8 *)&unk_9c) = 0xe;
                }
            }
        }
    } else if (old == 0xc) {
        if (MenuKeys_HasDown(keys)) {
            s32 r = unk_f0.getScreenX();
            if (r <= 0x70) {
                (*(volatile u8 *)&unk_9c) = 0;
            } else if (r <= 0x90) {
                (*(volatile u8 *)&unk_9c) = 1;
            } else {
                (*(volatile u8 *)&unk_9c) = 2;
            }
        } else if (moveCaretByPad(keys)) {
            Snd_PlaySe(0xb);
            setCaret(unk_9f);
        }
    } else if (old == 0xd) {
        if (MenuKeys_HasLeft(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xe;
        } else if (MenuKeys_HasUp(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xb;
        }
    } else if (old == 0xe) {
        if (MenuKeys_HasRight(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xd;
        } else if (MenuKeys_HasUp(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xa;
        }
    }
    if (old == (*(volatile u8 *)&unk_9c)) {
        return FALSE;
    }
    return TRUE;
}

u32 FriendCodeMenu::hitTest(s32 x0, s32 y) {
    s32 x = x0 - 0x50;
    s32 t = y - 0x60;
    if (x >= 0 && x < 0x60 && t >= 0 && t < 0x40) {
        unk_9c = sFriendCodeTouchKeyMap[(x >> 5) + (t >> 4) * 3];
        return unk_9c;
    }
    if (y >= 0x40 && y <= 0x50) {
        unk_9c = 0xc;
        return unk_9c;
    }
    return 0xf;
}

void *FriendCodeMenu::getFriendEntry() {
    void *h = ((PlayerData *)PlayerData_GetCurrent())->getFriendList();
    s32 idx = MenuCtrl_GetIndex();
    return (u8 *)FriendList_GetEntries(h) + idx * 0x1c;
}

BOOL FriendCodeMenu::isDuplicateFriend(u32 a) {
    void *h = PlayerData_GetCurrent();
    s32 idx = MenuCtrl_GetIndex();
    u8 *p = (u8 *)FriendList_GetEntries(((PlayerData *)h)->getFriendList());
    s32 i;
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(p)) && i != idx) {
            if (DwcFriendData_Compare(a, FriendEntry_GetFriendData(p))) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL FriendCodeMenu::isOwnFriendCode() {
    void *h = PlayerData_GetCurrent();
    s64 sum = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        sum = sum * 10 + (s64)(u32)unk_a4[i];
    }
    return PlayerWifiData_GetFriendCode(((PlayerData *)h)->getWifiUserData()) == sum;
}

void FriendCodeMenu::confirm() {
    void *h = PlayerData_GetCurrent();
    DwcFriendData l;
    DwcFriendData_Clear(&l);
    if (!DwcFriendData_FromCodeDigits(&l, unk_a4, PlayerWifiData_GetDwcUserData(((PlayerData *)h)->getWifiUserData()))) {
        showMessage(0x19, 0);
        Snd_PlaySe(0x73);
        return;
    }
    if (isOwnFriendCode()) {
        showMessage(0x1d, 0);
        Snd_PlaySe(0x73);
        return;
    }
    if (isDuplicateFriend((u32)&l)) {
        showMessage(0x14, 0);
        Snd_PlaySe(0x73);
        return;
    }
    void *s = getFriendEntry();
    void *t = FriendEntry_GetFriendData(s);
    DwcFriendData_FromCodeDigits(t, unk_a4, PlayerWifiData_GetDwcUserData(((PlayerData *)h)->getWifiUserData()));
    MenuCtrl_SetResult(1);
    unk_154.setSelected(6);
    setTransitionState(3);
    setMainState(10);
    Snd_PlaySe(0x29);
    if (MenuCtrl_GetMode() == 0xe) {
        notifyParent(0xc);
    } else {
        ((MenuTabBar *)((void *(*)(void *))ProcBase_GetParent)(this))->requestSaveOnClose();
        notifyParent(6);
        MenuCtrl_SetFriendPageFromIndex();
        if (gCommManager->isSlotActive(gCommManager->unk_64)) {
            switch (Net_GetMode()) {
            case 3:
            case 4: {
                s32 pl = MenuCtrl_GetIndex();
                u32 x = DwcFriendData_GetBytes(FriendEntry_GetFriendData(s));
                if (!Net_WifiAddFriend((u8)pl, x)) {
                    setMainState(0xc);
                    return;
                }
            }
            }
        }
    }
}

void FriendCodeMenu::cancel() {
    MenuCtrl_SetResult(0);
    unk_154.setSelected(7);
    setTransitionState(3);
    setMainState(10);
    notifyParent(6);
    if (MenuCtrl_GetMode() == 0xe) {
        FriendEntry_Clear(getFriendEntry());
    }
    Snd_PlaySe(0x28);
}

s32 FriendCodeMenu::activateCursorKey() {
    u32 st = unk_9c;
    if (st <= 11) {
        if (pressCursorKey()) {
            setMainState(7);
            return 1;
        }
        return 2;
    }
    switch (st) {
    case 12:
        break;
    case 13:
        if (!unk_154.isButtonDisabled(6)) {
            confirm();
            return 1;
        }
        return 0;
    case 14:
        cancel();
        return 1;
    }
    return 0;
}

BOOL FriendCodeMenu::applyKey(s32 a) {
    u32 st = unk_9c;
    switch (st) {
    case 11:
        if (a) {
            clearCode();
            InventoryBg_DrawSprite();
        }
        unk_9d = 0;
        return FALSE;
    case 10:
        deleteBackward(1);
        return TRUE;
    default:
        if (st <= 9) {
            u8 v = sKeyDigits[st];
            if (insertDigit(v)) {
                Snd_PlayKeySe(sFriendCodeKeySeIds[v]);
            }
        }
        return TRUE;
    }
}

BOOL FriendCodeMenu::moveCaretByPad(u32 key) {
    u32 old = unk_9f;
    if (MenuKeys_HasLeft(key)) {
        if (unk_9f != 0) {
            unk_9f = *(volatile u8 *)&unk_9f - 1;
        }
    } else if (MenuKeys_HasRight(key)) {
        if (getCodeLength() > *(volatile u8 *)&unk_9f) {
            unk_9f = *(volatile u8 *)&unk_9f + 1;
        }
    }
    if (old != *(volatile u8 *)&unk_9f) {
        s32 x = getCursorTargetX();
        s32 y = getCursorTargetY();
        unk_f0.warpTo(x, y);
        return TRUE;
    }
    return FALSE;
}

s32 FriendCodeMenu::getCaretFromTouch() {
    s32 v = gTouchCurX - 0x18;
    if (v < 0) {
        v = 0;
    }
    s32 r = v >> 4;
    s32 n = getCodeLength();
    if (r > n) {
        r = n;
    }
    return r;
}

void FriendCodeMenu::setCaret(u8 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    unk_a2 = x;
    unk_a3 = x;
    setFlags(0x10);
}

void FriendCodeMenu::extendSelection(s32 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    if (unk_a2 != x) {
        Snd_PlaySe(0x15);
    }
    unk_a2 = x;
    setFlags(0x10);
}

void FriendCodeMenu::loadEntryCode() {
    if (DwcFriendData_ToCodeDigits(FriendEntry_GetFriendData(getFriendEntry()), unk_a4)) {
        setCaret(0);
        setFlags(8);
    } else {
        clearCode();
    }
}

void FriendCodeMenu::clearCode() {
    s32 i;
    for (i = 0; i < 12; i++) {
        unk_a4[i] = 10;
    }
    setCaret(0);
    setFlags(8);
}

BOOL FriendCodeMenu::deleteBackward(s32 f) {
    s32 i;
    if (unk_a2 != unk_a3) {
        deleteSelection();
        Snd_PlaySe(0x35);
        return TRUE;
    }
    if (unk_9f == 0) {
        if (unk_a4[0] != 10) {
            unk_9f = 1;
        } else {
            if (f) {
                Snd_PlaySe(0x34);
            }
            return FALSE;
        }
    }
    for (i = unk_9f; i < 12; i++) {
        unk_a4[i - 1] = unk_a4[i];
    }
    unk_a4[11] = 10;
    setFlags(8);
    setCaret(unk_9f - 1);
    Snd_PlaySe(0x35);
    return TRUE;
}

void FriendCodeMenu::deleteSelection() {
    u32 b = unk_a3;
    u32 a = unk_a2;
    s32 lo, hi;
    if (a < b) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    setCaret(lo);
    for (; hi < 12; lo++, hi++) {
        unk_a4[lo] = unk_a4[hi];
    }
    for (; lo < 12; lo++) {
        unk_a4[lo] = 10;
    }
    setFlags(8);
}

BOOL FriendCodeMenu::insertDigit(u8 v) {
    s32 i;
    if (unk_9f == 12 && unk_a2 == unk_a3) {
        Snd_PlaySe(0x34);
        return FALSE;
    }
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a == b && unk_a4[11] != 10) {
        Snd_PlaySe(0x34);
        return FALSE;
    }
    if (a != b) {
        deleteSelection();
    }
    for (i = 11; i > unk_9f; i--) {
        unk_a4[i] = unk_a4[i - 1];
    }
    unk_a4[unk_9f] = v;
    setCaret(unk_9f + 1);
    setFlags(8);
    return TRUE;
}

s32 FriendCodeMenu::getCodeLength() {
    s32 i;
    for (i = 0; i < 12; i++) {
        if (unk_a4[i] == 10) {
            return i;
        }
    }
    return 12;
}

void FriendCodeMenu::drawCodeDigits() {
    s32 i;
    u16 *p = unk_b00;
    p += 0xe4;
    for (i = 0; i < 12; p += 2, i++) {
        u32 c = unk_a4[i];
        if (c == 10) {
            p[0] = (p[0] & 0xfc00) | 0x176;
            p[1] = (p[1] & 0xfc00) | 0x176;
            p[0x20] = (p[0x20] & 0xfc00) | 0x176;
            p[0x21] = (p[0x21] & 0xfc00) | 0x176;
        } else {
            u32 v = c * 4 + 0x84;
            p[0] = (p[0] & 0xfc00) | v;
            p[1] = (p[1] & 0xfc00) | (v + 1);
            p[0x20] = (p[0x20] & 0xfc00) | (v + 2);
            p[0x21] = (p[0x21] & 0xfc00) | (v + 3);
        }
    }
    if (unk_154.isButtonDisabled(6)) {
        if (unk_a4[11] != 10) {
            unk_154.enableButton(6);
        }
    } else if (unk_a4[11] == 10) {
        unk_154.disableButton(6);
    }
}

void FriendCodeMenu::drawSelection() {
    BgScreen_SetRectPalette(unk_b00, 4, 7, 0x1b, 8, 4);
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a != b) {
        u32 lo, hi;
        if (a > b) {
            lo = b;
            hi = a;
        } else {
            lo = a;
            hi = b;
        }
        lo = lo * 2 + 4;
        hi = hi * 2 + 3;
        BgScreen_SetRectPalette(unk_b00, lo, 7, hi, 8, 8);
    }
}

void FriendCodeMenu::flushScreens() {
    if (testFlags(8)) {
        drawCodeDigits();
        clearFlags(8);
        setFlags(4);
    }
    if (testFlags(0x10)) {
        drawSelection();
        clearFlags(0x10);
        setFlags(4);
    }
    if (testFlags(2)) {
        if (unk_2b8[0].requestScreen((u32)unk_300, 4, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (testFlags(4)) {
        if (unk_2b8[1].requestScreen((u32)unk_b00, 6, 0x800, 0)) {
            clearFlags(4);
        }
    }
}

BOOL FriendCodeMenu::pressCursorKey() {
    resetKeyPalettes();
    unk_a0 = unk_9c;
    highlightKey(unk_a0);
    unk_9d = 0xd;
    unk_9e = 5;
    return applyKey(1);
}

void FriendCodeMenu::stopKeyRepeat() { unk_9d = 0; }

BOOL FriendCodeMenu::tickKeyRepeat() {
    if (unk_9d != 0) {
        unk_9d = *(volatile u8 *)&unk_9d - 1;
        if (unk_9d == 0) {
            unk_9d = 2;
            return TRUE;
        }
    }
    return FALSE;
}

void FriendCodeMenu::resetKeyPalettes() {
    BgScreen_SetRectPalette(unk_300, 9, 0xc, 0x15, 0x14, 2);
    unhighlightKey(0xb);
    unhighlightKey(0xa);
    setFlags(2);
}

void FriendCodeMenu::setKeyPalette(s32 idx, u32 to) {
    s32 m = idx % 3;
    u32 x0 = sKeyColumnX[m];
    u32 x1;
    if (m == 0) {
        x1 = x0 + 4;
    } else {
        x1 = x0 + 3;
    }
    u32 y0 = sKeyRowY[idx];
    BgScreen_SetRectPalette(unk_300, x0, y0, x1, y0 + 1, to);
    setFlags(2);
}

void FriendCodeMenu::highlightKey(s32 idx) { setKeyPalette(idx, 3); }

void FriendCodeMenu::unhighlightKey(s32 idx) {
    u32 to;
    if ((u8)(idx + 0xf6) <= 1) {
        to = 1;
    } else {
        to = 2;
    }
    setKeyPalette(idx, to);
}

BOOL FriendCodeMenu::testFlags(u32 m) {
    if (unk_98 & m) {
        return TRUE;
    }
    return FALSE;
}

void FriendCodeMenu::setFlags(u32 m) { unk_98 = unk_98 | m; }

void FriendCodeMenu::clearFlags(u32 m) { unk_98 = unk_98 & ~m; }

extern "C" void *data_ov133_02295250[2] = {(void *)_ZN14FriendCodeMenu16stateCaretSelectEv, 0};

extern "C" void *data_ov133_02295270[2] = {(void *)_ZN14FriendCodeMenu9stateLoadEv, 0};

extern "C" void *data_ov133_02295280[2] = {(void *)_ZN14FriendCodeMenu13updateButtonsEv, 0};

extern "C" const u8 sKeyDigits[12] = {7, 8, 9, 4, 5, 6, 1, 2, 3, 0, 0, 0};

extern "C" void *data_ov133_02295208[2] = {(void *)_ZN14FriendCodeMenu10stateCloseEv, 0};

extern "C" const u8 sFriendCodeTouchKeyMap[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

extern "C" void *data_ov133_02295260[2] = {(void *)_ZN14FriendCodeMenu17stateButtonRepeatEv, 0};

extern "C" const s32 sFriendCodeCursorYTable[12] = {0x68, 0x68, 0x68, 0x78, 0x78, 0x78, 0x88, 0x88, 0x88, 0x98, 0x98, 0x98};

extern "C" void *data_ov133_02295248[2] = {(void *)_ZN14FriendCodeMenu9stateExitEv, 0};

extern "C" const u32 sKeyRowY[12] = {0xc, 0xc, 0xc, 0xe, 0xe, 0xe, 0x10, 0x10, 0x10, 0x12, 0x12, 0x12};

extern "C" void *data_ov133_02295228[2] = {(void *)_ZN14FriendCodeMenu19updateCursorReleaseEv, 0};

extern "C" void *data_ov133_02295218[2] = {(void *)_ZN14FriendCodeMenu12stateClosingEv, 0};

extern "C" Unk_ov133_SceneEntry sFriendCodeMenuProfile = {FriendCodeMenu_Create, 0xb4, 0xb8};
