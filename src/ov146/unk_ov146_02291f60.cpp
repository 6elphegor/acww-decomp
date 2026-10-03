// ov146: scene overlay (class WfcFriendListMenu, vtable 0x02294080): wi-fi friend list menu.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

#define LabelBalloon_setPos _ZN12LabelBalloon6setPosEii
#define LabelBalloon_showLayer2 _ZN12LabelBalloon10showLayer2Ev
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define ScrollKnob_areAnimsDone _ZN10ScrollKnob12areAnimsDoneEv
#define ScrollKnob_moveTo _ZN10ScrollKnob6moveToEii
#define BgVramTask_requestPalette _ZN10BgVramTask14requestPaletteEjhj
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define func_02133150 _s32_div_f
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv
#define MenuCursorBase_getScreenY _ZN14MenuCursorBase10getScreenYEv
#define MenuCursorBase_isMoving _ZN14MenuCursorBase8isMovingEv
#define MenuCursorBase_moveToEase _ZN14MenuCursorBase10moveToEaseEiiii
#define MenuCursorBase_warpTo _ZN14MenuCursorBase6warpToEii
#define MenuCursorBase_setPoseIdle _ZN14MenuCursorBase11setPoseIdleEv
#define MenuCursorBase_setPoseRelease _ZN14MenuCursorBase14setPoseReleaseEv
#define MenuCursor_setPosePress _ZN10MenuCursor12setPosePressEv
#define MenuCursor_switchToAnim01 _ZN10MenuCursor14switchToAnim01Ev
#define MenuCursor_switchToAnim07 _ZN10MenuCursor14switchToAnim07Ev
#define MenuCursor_setAnimIfChanged _ZN10MenuCursor16setAnimIfChangedEi
#define MenuScrollKnob_getGripY _ZN14MenuScrollKnob8getGripYEv
#define MenuScrollKnob_getGripX _ZN14MenuScrollKnob8getGripXEv
#define MenuScrollKnob_updateRelease _ZN14MenuScrollKnob13updateReleaseEv
#define MenuScrollKnob_release _ZN14MenuScrollKnob7releaseEv
#define MenuScrollKnob_grab _ZN14MenuScrollKnob4grabEv
#define MenuScrollKnob_show _ZN14MenuScrollKnob4showEv
#define MenuScrollKnob_hitTest _ZN14MenuScrollKnob7hitTestEii
#define MenuTitleBalloon_hideNow _ZN16MenuTitleBalloon7hideNowEv
#define MenuTitleBalloon_showText _ZN16MenuTitleBalloon8showTextEhii
#define MenuLauncher_onChildClosed _ZN12MenuLauncher13onChildClosedEv
#define MenuLauncher_setNextRequest _ZN12MenuLauncher14setNextRequestEii

class WfcFriendListMenu;
typedef void (WfcFriendListMenu::*Unk_ov146_02294080_Fn)();

struct Unk_ov146_SceneEntry {
    WfcFriendListMenu *(*fn)();
    u16 a;
    u16 b;
};

// ---- main-module classes (copied from src/main/unk_0206f53c.cpp / unk_02062fd4.cpp) ----
class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    /* 0x04 */ MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ void *unk_3c;
};

class Unk_020dd374 : public EncodedString {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x0e */ u8 unk_0e[10];
};

class Unk_020dd38c : public MsgString {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[2];
};

extern "C" {
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern void *gCurrentHeap;

void MIi_CpuCopy16(void *dst, void *src, u32 n);
void MIi_CpuClear16(u32 v, void *dst, u32 n);
void MI_CpuFill8(void *dst, s32 v, s32 n);
void MI_CpuCopy8(const void *src, void *dst, s32 n);
void BgVramTask_cancel(void *p);
BOOL BgVramTask_requestScreen(void *a, void *b, u32 c, u32 d, u32 e);
BOOL BgVramTask_requestPalette(void *a, void *b, u32 c, u32 d);
void String_SetSlot(s32 a, void *buf);
BOOL func_020a78a4(void *dst, const void *src, s32 n);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Snd_PlaySe(u32 a);
s32 func_02133150(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206f994(Unk_020e0488 *dst, const void *s, s32 len);
void func_0206ecf8(s32 a);
void func_0206ed2c(u32 v);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
u8 *Net_GetWifiFriendList();
BOOL ScrollKnob_areAnimsDone(void *p);
BOOL HandCursor_isAnimDone(void *p);
void ScrollKnob_moveTo(void *p, s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
void Gfx2d_LoadCharFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const char *a, void *b, s32 c);
void File_LoadToBuffer(const char *a, void *b, s32 c);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(u32 x);
void Gfx2d_ShowLayer(u32 x);
void ProcBase_RequestDelete(void *p);
s32 ProcBase_GetParent();
void MenuLauncher_setNextRequest(s32 a, s32 b, s32 c);
void MenuLauncher_onChildClosed();
void LabelBalloon_setPos(void *p, s32 a, s32 b);
void LabelBalloon_showLayer2(void *p);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);

BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
s32 MenuCursorBase_getScreenY(void *p);
BOOL MenuCursorBase_isMoving(void *p);
void MenuCursorBase_drawWrapped(void *p);
void MenuCursorBase_moveToEase(void *p, s32 a, s32 b, s32 c, s32 d);
void MenuCursorBase_warpTo(void *p, s32 a, s32 b);
void MenuCursorBase_setPoseIdle(void *p);
void MenuCursorBase_setPoseRelease(void *p);
void MenuCursor_setPosePress(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_switchToAnim07(void *p);
void MenuCursor_setAnimIfChanged(void *p, s32 a);
void Menu_PlayScrollGrabSe(void *p);
void Menu_PlayScrollTickSe(void *p);
s32 MenuScrollKnob_getGripY(void *p);
s32 MenuScrollKnob_getGripX(void *p);
void MenuScrollKnob_updateRelease(void *p);
void MenuScrollKnob_release(void *p);
void MenuScrollKnob_grab(void *p);
void MenuScrollKnob_show(void *p);
BOOL MenuScrollKnob_hitTest(void *p, s32 x, s32 y);
void MenuTitleBalloon_hideNow(void *p);
void MenuTitleBalloon_showText(void *p, s32 a, s32 b, s32 c);
}

// ---- ov002 sub-objects (opaque bodies) ----
class MenuCursorBuf0 {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class MenuScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[(0x48 - 4) / 4];
};

class MenuTitleBalloon {
public:
    MenuTitleBalloon();
    virtual ~MenuTitleBalloon();
    virtual void vfunc_08();
    u32 unk_04[0xb8 / 4];
};

class BgVramTask {
public:
    BgVramTask();
    u32 unk_00[0x24 / 4];
};

// ---- ov002 scene base (vtable 0x022044e4) ----
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

// Vtable 0x02294080, size 0x1a7c
class WfcFriendListMenu : public MenuProc {
public:
    WfcFriendListMenu()
        : unk_13cc(), unk_1430(), unk_1930(), unk_1978(), unk_1a34() {}

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
    void updateRowColors();
    void fadeRowColor(s32 a, s32 t, s32 b);
    void cancelVramTasks();
    void targetFromCursorY();
    void targetLastVisibleRow();
    BOOL moveTargetByKeys(u32 pad);
    BOOL decideTarget(u32 k);
    void syncKnobFromScroll();
    void syncScrollFromKnob();
    void placeKnob();
    BOOL finishKnobRelease();
    void moveKnobByKeys();
    void releaseKnob();
    void dragKnob(s32 v, BOOL c);
    BOOL tryGrabKnob(s32 x, s32 y);
    BOOL stepScroll();
    void buildListScreen();
    void setScroll(s32 v);
    void flushVram();
    BOOL isFriendSelectable(s32 idx);
    BOOL isFriendOnline(u8 *p);
    BOOL rebuildOrder();
    void refreshFriendStatus();
    void initFriendStatus();
    u8 *getFriendList();
    void drawStaticLabelsOnce();
    void drawStaticLabels();
    void renderRows();
    void resetTextPool();
    Unk_020e0488 *allocText();
    void startCursorRelease();
    void startCursorPress();
    void setCursorIdle();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getTargetY();
    s32 getTargetX();
    void snapCursorToTarget();
    void decideQuit();
    void decideConfirm();
    void enterInputMode();
    void enterButtonMode();
    void enterTouchMode();
    void execExitDelay();
    void execCursorRelease();
    void execCursorPress();
    void execCursorMove();
    void execKnobRelease();
    void execKnobKeys();
    void execButtons();
    void execJumpKnob();
    void execDragKnob();
    void execTouch();
    void loadObjGraphics();
    void loadBgGraphics();
    void setupLayers();
    void updateList();
    void beginFrame();
    void endFrame();
    void beginMainFrame();
    void releaseResources();
    void initState();
    void applySlide();
    void execSlideOut();
    void startClose();
    void execSlideIn();
    void enterOpen();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ s16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[3];
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[7];
    /* 0x0c3 */ u8 unk_c3[7];
    /* 0x0ca */ u8 unk_ca[0xea - 0xca];
    /* 0x0ea */ u8 unk_ea[0x20];
    /* 0x10a */ u8 unk_10a[0x20];
    /* 0x12a */ u8 unk_12a[0x20 * 0x13];
    /* 0x38a */ u8 unk_38a[0x800];
    /* 0xb8a */ u8 unk_b8a[0x800];
    /* 0x138a */ u16 unk_138a[16];
    /* 0x13aa */ u16 unk_13aa[16];
    /* 0x13ca */ u8 unk_13ca[2];
    /* 0x13cc */ MenuCursorBuf0 unk_13cc;
    /* 0x1430 */ Unk_020e0488 unk_1430[0x14];
    /* 0x1930 */ BgVramTask unk_1930[2];
    /* 0x1978 */ MenuTitleBalloon unk_1978;
    /* 0x1a34 */ MenuScrollKnob unk_1a34;
};

extern "C" WfcFriendListMenu *WfcFriendListMenu_Create();

extern "C" void _ZN17WfcFriendListMenu15execCursorPressEv();
extern "C" void _ZN17WfcFriendListMenu15execKnobReleaseEv();
extern "C" void _ZN17WfcFriendListMenu9enterOpenEv();
extern "C" void _ZN17WfcFriendListMenu17execCursorReleaseEv();
extern "C" void _ZN17WfcFriendListMenu11execSlideInEv();
extern "C" void _ZN17WfcFriendListMenu14execCursorMoveEv();
extern "C" void _ZN17WfcFriendListMenu13execExitDelayEv();
extern "C" void _ZN17WfcFriendListMenu12execJumpKnobEv();
extern "C" void _ZN17WfcFriendListMenu11execButtonsEv();
extern "C" void _ZN17WfcFriendListMenu12execDragKnobEv();
extern "C" void _ZN17WfcFriendListMenu9execTouchEv();
extern "C" void _ZN17WfcFriendListMenu12execSlideOutEv();
extern "C" void _ZN17WfcFriendListMenu10startCloseEv();
extern "C" void _ZN17WfcFriendListMenu12execKnobKeysEv();

static inline BOOL Unk_ov146_022933bc_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" WfcFriendListMenu *WfcFriendListMenu_Create() { return new WfcFriendListMenu(); }

BOOL WfcFriendListMenu::vfunc_00() {
    initState();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL WfcFriendListMenu::vfunc_0c() {
    ProcBase_GetParent();
    MenuLauncher_onChildClosed();
    releaseResources();
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" u32 data_ov146_02293e18[2];
extern "C" void *data_ov146_02293e70[2];
extern "C" u32 data_ov146_02293e98[4];
extern "C" void *data_ov146_02293e00[2];
extern "C" u32 sWfcRowCellsSelected[14];
extern "C" void *data_ov146_02293e38[2];
extern "C" void *data_ov146_02293e10[2];
extern "C" u32 data_ov146_02293e48[2];
extern "C" void *data_ov146_02293e08[2];
extern "C" u32 data_ov146_02293f90[8];
extern "C" Unk_ov146_SceneEntry sWfcFriendListMenuProfile;
extern "C" void *data_ov146_02293e60[2];
extern "C" void *data_ov146_02293e30[2];
extern "C" u32 sWfcRowCells[12];
extern "C" u32 data_ov146_02293f10[8];
extern "C" void *data_ov146_02293e90[2];
extern "C" void *data_ov146_02293e88[2];
extern "C" u32 sWfcConfirmButtonCells[8];
extern "C" u32 data_ov146_02293e78[2];
extern "C" u32 data_ov146_02293e20[2];
extern "C" void *data_ov146_02293e50[2];
extern "C" void *data_ov146_02293e58[2];
extern "C" u32 data_ov146_02293ed0[8];
extern "C" u32 data_ov146_02293ef0[8];
extern "C" void *data_ov146_02293e80[2];
extern "C" u32 data_ov146_02293f30[8];
extern "C" u32 sWfcFrameCells[24];
extern "C" void *data_ov146_02293e28[2];
extern "C" void *data_ov146_02293e40[2];
extern "C" u32 sWfcQuitButtonCells[8];

extern "C" u32 data_ov146_02293e18[2] = {0x804040d8, 0xffffc9c0};

extern "C" void *data_ov146_02293e70[2] = {(void *)_ZN17WfcFriendListMenu9execTouchEv, 0};

extern "C" u32 data_ov146_02293e98[4] = {0x0198003b, 0x0000d5d4, 0x01a0403b, 0xffffd5f4};

extern "C" void *data_ov146_02293e00[2] = {(void *)_ZN17WfcFriendListMenu15execCursorPressEv, 0};

BOOL WfcFriendListMenu::onDraw() {
    s32 i;
    s32 y;
    s32 y2;
    s32 idx;
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&unk_13cc);
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    unk_1a34.vfunc_08();
    LabelBalloon_setPos(&unk_1978, 0, unk_94);
    unk_1978.vfunc_08();
    y = unk_94 + 0x60;
    y2 = y - (unk_a4 & 0xf);
    for (i = 0; i < 7; y2 += 0x10, i++) {
        idx = i + unk_ae;
        if (idx < 0x20 && unk_bb < 0x20 && unk_bb == unk_ea[idx]) {
            Oam_DrawCell(1, sWfcRowCellsSelected, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, sWfcRowCells, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        idx = i + unk_ae;
        if (idx < 0x20) {
            void *tb[5] = {0, data_ov146_02293e18, data_ov146_02293e78, data_ov146_02293e20, data_ov146_02293e48};
            void *h = tb[unk_ca[idx]];
            if (h != 0) {
                Oam_DrawCell(1, h, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
            }
        }
    }
    Oam_DrawCell(1, sWfcFrameCells, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, sWfcQuitButtonCells, 0x80, y, unk_b1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, sWfcConfirmButtonCells, 0x80, y, unk_b0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, data_ov146_02293e98, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    void *tc[5] = {data_ov146_02293f90, data_ov146_02293ed0, data_ov146_02293ef0, data_ov146_02293f10, data_ov146_02293f30};
    if (unk_b7[0] != 0) {
        unk_b7[0] = *(volatile u8 *)&unk_b7[0] - 1;
    } else {
        unk_b7[1] = unk_b7[1] + 1;
        if (unk_b7[1] >= 5) {
            unk_b7[1] = 0;
        }
        unk_b7[0] = 10;
    }
    Oam_DrawCell(1, tc[unk_b7[1]], 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    return TRUE;
}
extern "C" u32 sWfcRowCellsSelected[14] = {0x403c40e6, 0x000058c6, 0x402040e6, 0x000058c6, 0x419400d7, 0x00005886, 0x400040e6,
                                          0x000058c6, 0x41d840e6, 0x000058c6, 0x41b840e6, 0x000058c6, 0x419840e6, 0xffff58c6};

extern "C" void *data_ov146_02293e38[2] = {(void *)_ZN17WfcFriendListMenu14execCursorMoveEv, 0};

extern "C" void *data_ov146_02293e10[2] = {(void *)_ZN17WfcFriendListMenu9enterOpenEv, 0};

extern "C" u32 data_ov146_02293e48[2] = {0x804040d8, 0xffffd9cc};

extern "C" void *data_ov146_02293e08[2] = {(void *)_ZN17WfcFriendListMenu15execKnobReleaseEv, 0};

extern "C" u32 data_ov146_02293f90[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000c5d5, 0x01f1003a, 0xffffd5d5};

extern "C" Unk_ov146_SceneEntry sWfcFriendListMenuProfile = {WfcFriendListMenu_Create, 0xbb, 0xbf};

extern "C" void *data_ov146_02293e60[2] = {(void *)_ZN17WfcFriendListMenu12execDragKnobEv, 0};

extern "C" void *data_ov146_02293e30[2] = {(void *)_ZN17WfcFriendListMenu11execSlideInEv, 0};

extern "C" u32 sWfcRowCells[12] = {0x403c40e6, 0x000048e6, 0x402040e6, 0x000048e6, 0x400040e6, 0x000048e6,
                                          0x41d840e6, 0x000048e6, 0x41b840e6, 0x000048e6, 0x419840e6, 0xffff48e6};

extern "C" u32 data_ov146_02293f10[8] = {0x0006003a, 0x0000d5d5, 0x01ff003a, 0x0000d5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" void *data_ov146_02293e90[2] = {(void *)_ZN17WfcFriendListMenu12execKnobKeysEv, 0};

BOOL WfcFriendListMenu::execTransition() {
    static Unk_ov146_02294080_Fn tbl[4] = {
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e10,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e30,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e88,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e80};
    beginFrame();
    (this->*tbl[unk_8c])();
    updateList();
    return TRUE;
}
extern "C" void *data_ov146_02293e88[2] = {(void *)_ZN17WfcFriendListMenu10startCloseEv, 0};

extern "C" u32 sWfcConfirmButtonCells[8] = {0x8011404a, 0x0000848d, 0x4031004a, 0x00008491, 0x80270043, 0x00008482, 0x800b0043, 0xffff8480};

extern "C" u32 data_ov146_02293e78[2] = {0x804040d8, 0xffffc9c4};

void WfcFriendListMenu::runMainState() {
    static Unk_ov146_02294080_Fn tbl[10] = {
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e70,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e60,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e50,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e58,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e90,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e08,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e38,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e00,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e28,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e40};
    (this->*tbl[unk_8d])();
}

BOOL WfcFriendListMenu::execMain() {
    beginMainFrame();
    runMainState();
    endFrame();
    return TRUE;
}

BOOL WfcFriendListMenu::execPhase3() { return TRUE; }

BOOL WfcFriendListMenu::execPhase4() { return TRUE; }

BOOL WfcFriendListMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void WfcFriendListMenu::enterOpen() {
    setupLayers();
    loadBgGraphics();
    rebuildOrder();
    setScroll(0);
    unk_a8 = 0;
    loadObjGraphics();
    beginSubSlideIn(0xa, 4, 0, 0x28);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    applySlide();
    setFlags(1);
    setTransitionState(1);
}

void WfcFriendListMenu::execSlideIn() {
    if (stepSlideIn(0)) {
        setPhase(2);
        enterInputMode();
    } else {
        drawStaticLabelsOnce();
    }
    applySlide();
}

void WfcFriendListMenu::startClose() {
    MenuLauncher_setNextRequest(ProcBase_GetParent(), 0x44, 1);
    beginSubSlideOut(0xa, 0, 0, 0x28);
    applySlide();
    setTransitionState(3);
}

void WfcFriendListMenu::execSlideOut() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        applySlide();
    }
}

void WfcFriendListMenu::applySlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0x38 - unk_a4);
    unk_94 = getSlideOffsetY();
    placeKnob();
}

void WfcFriendListMenu::initState() {
    s32 i;
    s32 j;
    unk_ac = 0;
    unk_b2 = 3;
    unk_b0 = 9;
    unk_b1 = 8;
    MenuTitleBalloon_hideNow(&unk_1978);
    MenuTitleBalloon_showText(&unk_1978, 0x7f, 0x90, 0x10);
    LabelBalloon_showLayer2(&unk_1978);
    unk_b5 = 0;
    MenuScrollKnob_show(&unk_1a34);
    for (i = 0; i < 7; i++) {
        unk_bc[i] = 0x21;
        unk_c3[i] = 0xff;
    }
    for (j = 0; j < 0x20; j++) {
        unk_ea[j] = 0x20;
        unk_10a[j] = 0;
    }
    initFriendStatus();
    unk_b6 = 0x21;
    unk_b7[0] = 10;
    unk_b7[1] = 0;
    unk_b7[2] = 10;
    unk_bb = 0x20;
}

void WfcFriendListMenu::releaseResources() {
    resetTextPool();
    cancelVramTasks();
}

void WfcFriendListMenu::beginMainFrame() {
    beginFrame();
    unk_13cc.vfunc_0c();
}

// thunk: defined before its target so it stays a tail branch
void WfcFriendListMenu::endFrame() { updateList(); }

void WfcFriendListMenu::beginFrame() {
    resetTextPool();
    cancelVramTasks();
    unk_1a34.vfunc_0c();
}

void WfcFriendListMenu::updateList() {
    if (!testFlags(0x40)) {
        refreshFriendStatus();
        if (rebuildOrder()) {
            setFlags(4);
        }
        if (isFriendSelectable(unk_bb)) {
            unk_b0 = 8;
        } else {
            unk_b0 = 9;
        }
    }
    stepScroll();
    if (testFlags(4)) {
        renderRows();
        clearFlags(4);
    }
    updateRowColors();
    flushVram();
    MenuScrollKnob_updateRelease(&unk_1a34);
}

void WfcFriendListMenu::setupLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void WfcFriendListMenu::loadBgGraphics() {
    void *p = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/wfc/bg.bch", p, 6, 0x11, 0x11, 0x5c);
    Gfx2d_LoadPaletteFile("menu/wfc/bg.bpl", p, 6, 1, 1, 8);
    File_LoadToBuffer("menu/wfc/bg7.bpl", unk_138a, 0x20);
    MIi_CpuCopy16(unk_138a, unk_13aa, 0x20);
    Gfx2d_LoadScreenFile("menu/wfc/a_bg.bsc", p, 6);
    File_LoadToBuffer("menu/wfc/b_bg.bsc", unk_38a, 0x800);
    func_0206ee80(unk_38a, 5, 7, 0xe, 0x14, 7);
    func_0206ee80(unk_38a, 0x10, 7, 0x17, 0x14, 7);
}

void WfcFriendListMenu::loadObjGraphics() {
    void *p = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/wfc/obj0.bch", p, 8, 0x80, 0x80, 0xff);
    Gfx2d_LoadCharFile("menu/wfc/obj1.bch", p, 8, 0x160, 0x160, 0x1ff);
    Gfx2d_LoadPaletteFile("menu/wfc/obj.bpl", p, 8, 4, 4, 0xd);
}

void WfcFriendListMenu::execTouch() {
    s32 x;
    s32 y;
    if (checkSwitchToButtons(1)) {
        enterButtonMode();
        return;
    }
    if (Unk_ov146_022933bc_Both()) {
        x = gTouchCurX;
        y = gTouchCurY;
        if (y >= 0xa9 && y <= 0xbc && x >= 0x39) {
            if (x < 0x75) {
                decideQuit();
                return;
            }
            if (x >= 0x8b && x < 0xc7 && unk_b0 == 8) {
                decideConfirm();
                return;
            }
        }
        if (x >= 0x18 && x <= 0xe0 && y >= 0x38 && y < 0x98) {
            s32 idx = unk_ae + ((y - (0x38 - (unk_a8 & 0xf))) >> 4);
            if (idx < 0x20) {
                x = unk_ea[idx];
                if (isFriendSelectable(x)) {
                    if (unk_bb != x) {
                        unk_bb = x;
                        Snd_PlaySe(0x29);
                    }
                }
            }
        } else if (tryGrabKnob(x, y)) {
            setMainState(1);
        } else if (x >= 0xe6 && x <= 0xee && y >= 0x38 && y <= 0x88) {
            MenuScrollKnob_grab(&unk_1a34);
            setMainState(2);
        }
    }
}

void WfcFriendListMenu::execDragKnob() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 0);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void WfcFriendListMenu::execJumpKnob() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 1);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void WfcFriendListMenu::execButtons() {
    if (checkSwitchToTouch()) {
        enterTouchMode();
    } else if (moveTargetByKeys(takeRepeatedKeys())) {
        moveCursorToTarget();
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            startCursorPress();
        } else if (k & 2) {
            hideCursor();
            decideQuit();
        }
    }
}

void WfcFriendListMenu::execKnobKeys() {
    u32 a;
    u32 b;
    if (gPad[0] & 1) {
        moveKnobByKeys();
        a = getTargetX();
        b = getTargetY();
        MenuCursorBase_warpTo(&unk_13cc, a, b);
    } else {
        releaseKnob();
        setMainState(5);
    }
}

void WfcFriendListMenu::execKnobRelease() {
    u32 a;
    u32 b;
    if (finishKnobRelease()) {
        setMainState(3);
        startCursorRelease();
    }
    a = getTargetX();
    b = getTargetY();
    MenuCursorBase_warpTo(&unk_13cc, a, b);
}

void WfcFriendListMenu::execCursorMove() {
    if (!MenuCursorBase_isMoving(&unk_13cc)) {
        setMainState(unk_b3);
        runMainState();
    }
}

// ---- 0x022931f8 ----
void WfcFriendListMenu::execCursorPress() {
    if (HandCursor_isAnimDone(&unk_13cc)) {
        if (!decideTarget(unk_b2)) {
            setMainState(3);
            startCursorRelease();
        }
    }
}

void WfcFriendListMenu::execCursorRelease() {
    if (HandCursor_isAnimDone(&unk_13cc)) {
        setCursorIdle();
        setMainState(unk_b3);
        if (testFlags(0x10)) {
            clearFlags(0x10);
            unk_b2 = 1;
            moveCursorToTarget();
        }
    }
}

void WfcFriendListMenu::execExitDelay() {
    if (unk_ba != 0) {
        unk_ba = *(volatile u8 *)&unk_ba - 1;
    } else {
        hideCursor();
        setPhase(1);
    }
}

void WfcFriendListMenu::enterTouchMode() {
    hideCursor();
    setMainState(0);
}

void WfcFriendListMenu::enterButtonMode() {
    snapCursorToTarget();
    restartKeyRepeat();
    setMainState(3);
}

void WfcFriendListMenu::enterInputMode() {
    if (MenuCtrl_IsTouch()) {
        enterTouchMode();
    } else {
        enterButtonMode();
    }
}

void WfcFriendListMenu::decideConfirm() {
    func_0206ecf8(1);
    func_0206ed2c(unk_bb);
    unk_b0 = 10;
    setFlags(0x40);
    unk_ba = 5;
    setTransitionState(2);
    setMainState(9);
    Snd_PlaySe(0x27);
}

void WfcFriendListMenu::decideQuit() {
    func_0206ecf8(0);
    unk_b1 = 10;
    unk_ba = 5;
    setTransitionState(2);
    setMainState(9);
    Snd_PlaySe(0x28);
}

void WfcFriendListMenu::snapCursorToTarget() {
    s32 a, b;
    if (unk_b2 == 3) {
        u32 t = unk_a8 & 0xf;
        if (t != 0) {
            unk_a8 = *(volatile s32 *)&unk_a8 - t;
        }
    }
    a = getTargetX();
    b = getTargetY();
    MenuCursorBase_warpTo(&unk_13cc, a, b);
    if (unk_b2 == 2) {
        MenuCursor_setAnimIfChanged(&unk_13cc, 1);
    } else {
        MenuCursor_setAnimIfChanged(&unk_13cc, 7);
    }
    setCursorIdle();
}

s32 WfcFriendListMenu::getTargetX() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return 0x1c;
    }
    switch (m) {
    case 0:
        return 0x47;
    case 1:
        return 0x99;
    case 2:
        return MenuScrollKnob_getGripX(&unk_1a34);
    default:
        return 0x80;
    }
}

s32 WfcFriendListMenu::getTargetY() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return ((m - 3) << 4) + 0x40 - (unk_a8 & 0xf);
    }
    switch (m) {
    case 0:
    case 1:
        return 0xad;
    case 2:
        return MenuScrollKnob_getGripY(&unk_1a34);
    default:
        return 0x60;
    }
}

void WfcFriendListMenu::hideCursor() {
    MenuCursor_setAnimIfChanged(&unk_13cc, 0);
    unk_13cc.vfunc_0c();
}

void WfcFriendListMenu::moveCursorToTarget() {
    s32 a, b;
    if (unk_b2 == 2) {
        MenuCursor_switchToAnim01(&unk_13cc);
    } else {
        MenuCursor_switchToAnim07(&unk_13cc);
    }
    a = getTargetX();
    b = getTargetY();
    moveCursorTo(a, b);
}

void WfcFriendListMenu::moveCursorTo(s32 a, s32 b) {
    if (testFlags(0x20)) {
        MenuCursorBase_moveToEase(&unk_13cc, a, b, 3, 0);
        clearFlags(0x20);
    } else {
        MenuCursorBase_moveToEase(&unk_13cc, a, b, 3, 1);
    }
    unk_b3 = unk_8d;
    setMainState(6);
}

void WfcFriendListMenu::setCursorIdle() {
    MenuCursorBase_setPoseIdle(&unk_13cc);
    unk_13cc.vfunc_0c();
}

void WfcFriendListMenu::startCursorPress() {
    MenuCursor_setPosePress(&unk_13cc);
    setMainState(7);
}

void WfcFriendListMenu::startCursorRelease() {
    MenuCursorBase_setPoseRelease(&unk_13cc);
    unk_b3 = unk_8d;
    setMainState(8);
}

Unk_020e0488 *WfcFriendListMenu::allocText() {
    if (unk_b4 >= 0x14) {
        return &unk_1430[0x13];
    }
    unk_b4 = *(volatile u8 *)&unk_b4 + 1;
    return &unk_1430[unk_b4 - 1];
}

void WfcFriendListMenu::resetTextPool() {
    s32 i;
    unk_b4 = 0;
    for (i = 0; i < 0x14; i++) {
        unk_1430[i].func_0206fc44();
    }
}
extern "C" u32 data_ov146_02293e20[2] = {0x804040d8, 0xffffc9c8};

extern "C" void *data_ov146_02293e50[2] = {(void *)_ZN17WfcFriendListMenu12execJumpKnobEv, 0};

extern "C" void *data_ov146_02293e58[2] = {(void *)_ZN17WfcFriendListMenu11execButtonsEv, 0};

extern "C" u32 data_ov146_02293ed0[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" u32 data_ov146_02293ef0[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000d5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" void *data_ov146_02293e80[2] = {(void *)_ZN17WfcFriendListMenu12execSlideOutEv, 0};

extern "C" u32 data_ov146_02293f30[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000c5d5, 0x01f1003a, 0xffffc5d5};

extern "C" u32 sWfcFrameCells[24] = {0x81a800a0, 0x0000b57b, 0x41c880a0, 0x0000b57f, 0x41a840c0, 0x0000b5fb, 0x01c800c0, 0x0000b5ff,
                                          0x41ac40cd, 0x000054cd, 0x01cc40cd, 0x000054d1, 0x400440cd, 0x000054ed, 0x002440cd, 0x000054f1,
                                          0x901840cc, 0x00005488, 0x800040cc, 0x00005488, 0x91c040cc, 0x00005488, 0x81a840cc, 0xffff5488};

void WfcFriendListMenu::renderRows() {
    static Unk_020dd374 sa;
    static Unk_020dd38c sb;
    Unk_020e0488 *w1;
    Unk_020e0488 *w2;
    s32 j;
    s32 idx;
    s32 col;
    getFriendList();
    idx = unk_ae;
    col = idx % 7;
    for (j = 0; j < 7; j++) {
        if (idx >= 0x20) {
            unk_bc[col] = 0x20;
        } else {
            s32 e = unk_ea[idx];
            s32 off;
            if (e == unk_bc[col]) {
                w1 = 0;
            } else if (e >= 0x20) {
                w1 = allocText();
                w1->clear();
                w2 = allocText();
                w2->clear();
                unk_bc[col] = 0x20;
            } else {
                unk_bc[col] = e;
                w1 = allocText();
                off = e * 0x13;
                func_020a78a4(&sa, unk_12a + 8 + off, 8);
                sb.fromEncoded(&sa, 0, 0);
                String_SetSlot(0, &sb);
                func_0206f9fc(w1, 0x66);
                w2 = allocText();
                func_0206f994(w2, unk_12a + off, 8);
            }
            if (w1) {
                w1->func_0206fb9c(4, col * 0x14 + 0x11e, 10, 0xe - col, 0xf, 0);
                w1->func_0206fab4(0, 0);
                w2->func_0206fb9c(4, col * 0x10 + 0x1d2, 8, 0xe - col, 0xf, 0);
                w2->func_0206fab4(0, 0);
            }
        }
        idx++;
        col++;
        if (col >= 7) {
            col = 0;
        }
    }
}

void WfcFriendListMenu::drawStaticLabels() {
    Unk_020e0488 *w;
    w = allocText();
    func_0206f9fc(w, 0x65);
    w->func_0206fb9c(8, 0x93, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = allocText();
    func_0206f9fc(w, 0xc2);
    w->func_0206fb9c(8, 0x8d, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = allocText();
    func_0206f9fc(w, 0xc1);
    w->func_0206fb9c(8, 0x99, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = allocText();
    func_0206f9fc(w, 0xbc);
    w->func_0206fb48(8, 0xcd, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
    w = allocText();
    func_0206f9fc(w, 0xbd);
    w->func_0206fb48(8, 0xed, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
}

void WfcFriendListMenu::drawStaticLabelsOnce() {
    if (unk_b5 == 0) {
        drawStaticLabels();
        unk_b5 = unk_b5 + 1;
    }
}

// func_ov146_02292b1c (tail-call thunk) is defined last so it isn't inlined into callers
u8 *WfcFriendListMenu::getFriendList() { return Net_GetWifiFriendList(); }

void WfcFriendListMenu::initFriendStatus() {
    s32 i;
    u8 *tbl;
    s32 z;
    MI_CpuFill8(unk_12a, 0, 0x260);
    tbl = (u8 *)getFriendList();
    i = 0;
    z = 0;
    do {
        u8 *rec = tbl + 0x180 + i * 0x13;
        if (isFriendOnline(rec)) {
            MI_CpuCopy8(rec, unk_12a + (u32)i * 0x13, 0x13);
            unk_10a[i] = 0x14;
        } else {
            unk_10a[i] = z;
        }
        i++;
    } while (i < 0x20);
}

void WfcFriendListMenu::refreshFriendStatus() {
    u8 *tbl = (u8 *)getFriendList();
    s32 i;
    s32 cnt = 0;
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        if (isFriendOnline(tbl + 0x180 + off)) {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] < 0x14) {
                    unk_10a[i]++;
                }
            } else {
                unk_10a[i] = 0;
                MI_CpuCopy8(tbl + 0x180 + off, unk_12a + (u32)i * 0x13, 0x13);
            }
            cnt++;
        } else {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] != 0) {
                    unk_10a[i]--;
                } else {
                    (unk_12a + off)[0x10] = 0;
                }
            }
        }
    }
    if (cnt != unk_b6) {
        u8 buf[3];
        Unk_020e0488 *w;
        unk_b6 = cnt;
        w = allocText();
        if (unk_b6 < 10) {
            buf[0] = unk_b6 + 0x35;
            buf[1] = 0;
            buf[2] = 0;
        } else {
            buf[0] = unk_b6 / 10 + 0x35;
            buf[1] = unk_b6 % 10 + 0x35;
            buf[2] = 0;
        }
        func_0206f994(w, buf, 3);
        w->func_0206fb48(8, 0x1f4, 2, 9, 0, 1);
        w->func_0206fab4(0, 0);
    }
}

BOOL WfcFriendListMenu::rebuildOrder() {
    s32 i;
    s32 cnt = 0;
    BOOL changed = FALSE;
    u8 *tbl;
    u8 *cp;
    u8 *rec;
    tbl = (u8 *)getFriendList();
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        rec = (u8 *)this + off;
        if (rec[0x13a] == 6) {
            cp = (u8 *)this + cnt;
            if (i != cp[0xea]) {
                changed = TRUE;
                cp[0xea] = i;
            }
            if (isFriendOnline(tbl + 0x180 + off)) {
                rec[0x13c] = (tbl + off)[0x192];
            }
            cp[0xca] = (tbl + off)[0x192];
            cnt++;
        }
    }
    for (; cnt < 0x20; cnt++) {
        if (unk_ea[cnt] != 0x20) {
            changed = TRUE;
            unk_ea[cnt] = 0x20;
            unk_ca[cnt] = 0;
        }
    }
    return changed;
}

BOOL WfcFriendListMenu::isFriendOnline(u8 *p) {
    if (p[0x10] == 6 && p[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL WfcFriendListMenu::isFriendSelectable(s32 idx) {
    if (idx >= 0x20) {
        return FALSE;
    }
    u8 *g = getFriendList();
    if (isFriendOnline(g + 0x180 + idx * 0x13)) {
        u8 *e = g + idx * 0x13;
        if (e[0x192] < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void WfcFriendListMenu::flushVram() {
    if (testFlags(2)) {
        if (BgVramTask_requestScreen((u8 *)this + 0x1930, (u8 *)this + 0xb8a, 4, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (testFlags(8)) {
        if (BgVramTask_requestPalette((u8 *)this + 0x1954, (u8 *)this + 0x13aa, 4, 7)) {
            clearFlags(8);
        }
    }
}

void WfcFriendListMenu::setScroll(s32 v) {
    unk_a4 = v;
    Gfx2d_SetLayerOffset(4, 0, unk_a4 - 0x38);
    unk_ae = v >> 4;
    buildListScreen();
    setFlags(4);
}

void WfcFriendListMenu::buildListScreen() {
    volatile u16 z = 0x10;
    MIi_CpuClear16(z, (u8 *)this + 0xb8a, 0x800);
    for (s32 i = 0; i < 7; i++) {
        s32 v = unk_ae + i;
        s32 m = v % 7;
        MIi_CpuCopy16((u8 *)this + 0x38a + ((m * 2 + 7) << 6), (u8 *)this + 0xb8a + ((v & 0xf) << 7), 0x80);
    }
    setFlags(2);
}

BOOL WfcFriendListMenu::stepScroll() {
    if (unk_a4 != unk_a8) {
        if (unk_a4 > unk_a8) {
            unk_a4 = unk_a4 - 6;
            if (unk_a4 < unk_a8) {
                unk_a4 = unk_a8;
            }
        } else {
            unk_a4 = unk_a4 + 6;
            if (unk_a4 > unk_a8) {
                unk_a4 = unk_a8;
            }
        }
        setScroll(unk_a4);
        syncKnobFromScroll();
        return TRUE;
    }
    return FALSE;
}

BOOL WfcFriendListMenu::tryGrabKnob(s32 x, s32 y) {
    if (MenuScrollKnob_hitTest(&unk_1a34, x, y)) {
        unk_9c = unk_98 - y;
        MenuScrollKnob_grab(&unk_1a34);
        unk_a0 = unk_98;
        return TRUE;
    }
    return FALSE;
}

void WfcFriendListMenu::dragKnob(s32 v, BOOL c) {
    if (c) {
        v = v - 0x40;
    } else {
        v = v + unk_9c;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x50) {
        v = 0x50;
    }
    if (c) {
        func_020e761c(&unk_98, v, 8);
    } else {
        unk_98 = v;
    }
    syncScrollFromKnob();
    placeKnob();
    s32 d = unk_a0 - unk_98;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&unk_1a34);
        unk_a0 = unk_98;
    }
}

void WfcFriendListMenu::releaseKnob() { MenuScrollKnob_release(&unk_1a34); }

void WfcFriendListMenu::moveKnobByKeys() {
    s32 old = unk_98;
    u32 k = gPad[0];
    if (k & 0x40) {
        unk_98 = unk_98 - 4;
        if (unk_98 < 0) {
            unk_98 = 0;
        }
    } else if (k & 0x80) {
        unk_98 = unk_98 + 4;
        if (unk_98 > 0x50) {
            unk_98 = 0x50;
        }
    }
    if (old != unk_98) {
        syncScrollFromKnob();
        placeKnob();
        Menu_PlayScrollTickSe(&unk_1a34);
    }
}

BOOL WfcFriendListMenu::finishKnobRelease() {
    if (ScrollKnob_areAnimsDone(&unk_1a34)) {
        MenuScrollKnob_show(&unk_1a34);
        return TRUE;
    }
    return FALSE;
}

void WfcFriendListMenu::placeKnob() {
    ScrollKnob_moveTo(&unk_1a34, 0x62, unk_94 + (unk_98 - 0x28));
}

void WfcFriendListMenu::syncScrollFromKnob() {
    s32 v = func_02133150(unk_98 * 0x1a0, 0x50);
    if (v < 0) {
        v = 0;
    }
    if (v > 0x1a0) {
        v = 0x1a0;
    }
    setScroll(v);
    unk_a8 = v;
}

void WfcFriendListMenu::syncKnobFromScroll() {
    unk_98 = func_02133150(unk_a4 * 0x50, 0x1a0);
    placeKnob();
}

BOOL WfcFriendListMenu::decideTarget(u32 k) {
    if (k >= 3 && k <= 9) {
        s32 idx = unk_ae + k - 3;
        if (idx >= 0x20) {
            return FALSE;
        }
        u8 c = *((u8 *)this + idx + 0xea);
        if (isFriendSelectable(c)) {
            unk_bb = c;
            Snd_PlaySe(0x29);
            setFlags(0x10);
            setFlags(0x20);
        }
        return FALSE;
    }
    switch (k) {
    case 2:
        MenuScrollKnob_grab(&unk_1a34);
        Menu_PlayScrollGrabSe(&unk_1a34);
        setMainState(4);
        return TRUE;
    case 1:
        if (unk_b0 == 8) {
            decideConfirm();
            return TRUE;
        }
        return FALSE;
    case 0:
        decideQuit();
        return TRUE;
    }
    return FALSE;
}

BOOL WfcFriendListMenu::moveTargetByKeys(u32 pad) {
    u32 old = unk_b2;
    if (old >= 3 && old <= 9) {
        if (MenuKeys_HasRight(pad)) {
            unk_b2 = 2;
        } else if (MenuKeys_HasUp(pad)) {
            if (unk_b2 > 3) {
                unk_b2 = *(volatile u8 *)&unk_b2 - 1;
                if (unk_b2 == 3) {
                    s32 r = unk_a8 & 0xf;
                    if (r != 0) {
                        unk_a8 = unk_a8 - r;
                    }
                }
                return TRUE;
            } else if (unk_a8 >= 0x10) {
                unk_a8 = unk_a8 - 0x10;
                return TRUE;
            } else if (unk_a8 > 0) {
                unk_a8 = 0;
                return TRUE;
            }
        } else if (MenuKeys_HasDown(pad)) {
            u32 cur = unk_b2;
            if ((s32)(cur - 3) + unk_ae >= (s32)unk_b6 - 1) {
                unk_b2 = 0;
            } else if (cur < 8) {
                unk_b2 = *(volatile u8 *)&unk_b2 + 1;
            } else {
                s32 t = unk_a8;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a8 = unk_a8 + (0x10 - r);
                    return TRUE;
                } else if (t <= 0x190) {
                    unk_a8 = unk_a8 + 0x10;
                    return TRUE;
                } else {
                    unk_b2 = 0;
                }
            }
        }
    } else {
        switch (old) {
        case 0:
            if (MenuKeys_HasUp(pad)) {
                if (unk_b6 != 0) {
                    targetLastVisibleRow();
                }
            } else if (MenuKeys_HasRight(pad)) {
                unk_b2 = 1;
            }
            break;
        case 1:
            if (MenuKeys_HasUp(pad)) {
                if (unk_b6 != 0) {
                    targetLastVisibleRow();
                } else {
                    unk_b2 = 2;
                }
            } else if (MenuKeys_HasLeft(pad)) {
                unk_b2 = 0;
            } else if (MenuKeys_HasRight(pad)) {
                unk_b2 = 2;
            }
            break;
        case 2:
            if (MenuKeys_HasDown(pad)) {
                unk_b2 = 1;
            } else if (MenuKeys_HasLeft(pad)) {
                targetFromCursorY();
            }
            break;
        }
    }
    if (old != unk_b2) {
        return TRUE;
    }
    return FALSE;
}

void WfcFriendListMenu::targetLastVisibleRow() {
    unk_b2 = 8;
    s32 r = unk_a8 & 0xf;
    if (r != 0) {
        unk_a8 = unk_a8 - r;
    }
}

void WfcFriendListMenu::targetFromCursorY() {
    if (unk_b6 == 0) {
        unk_b2 = 1;
    } else {
        s32 v = MenuCursorBase_getScreenY(&unk_13cc);
        if (v < 0x38) {
            v = 0x38;
        }
        if (v > 0xa7) {
            v = 0xa7;
        }
        unk_b2 = ((v - (0x38 - (unk_a8 & 0xf))) >> 4) + 3;
    }
}

void WfcFriendListMenu::cancelVramTasks() {
    s32 i = 0;
    u8 *p = (u8 *)this + 0x1930;
    for (; i < 2; i++) {
        BgVramTask_cancel(p + i * 0x24);
    }
}

void WfcFriendListMenu::fadeRowColor(s32 a, s32 t, s32 b) {
    u16 y = unk_138a[15];
    u8 rr = y & 0x1f;
    u8 rg = (y & 0x3e0) >> 5;
    u8 rb = (y & 0x7c00) >> 10;
    s32 n = 20 - t;
    u16 x = unk_138a[b];
    rr = ((u8)(x & 0x1f) * t + rr * n) / 20;
    rg = ((u8)((x & 0x3e0) >> 5) * t + rg * n) / 20;
    rb = ((u8)((x & 0x7c00) >> 10) * t + rb * n) / 20;
    unk_13aa[(u8)(14 - a)] = rr | (rg << 5) | (rb << 10);
    setFlags(8);
}

void WfcFriendListMenu::updateRowColors() {
    s32 i;
    for (i = 0; i < 7; i++) {
        s32 idx = unk_bc[i];
        if (idx < 0x20) {
            u32 v;
            u32 base;
            u32 sel;
            if (*((u8 *)this + idx * 0x13 + 0x13c) >= 4) {
                base = *((u8 *)this + idx + 0x10a);
                v = (u8)(base | 0x40);
                sel = 7;
            } else {
                base = *((u8 *)this + idx + 0x10a);
                v = base;
                sel = 0xe;
            }
            if (v != unk_c3[i]) {
                fadeRowColor(i, base, sel);
                unk_c3[i] = v;
            }
        }
    }
}

BOOL WfcFriendListMenu::testFlags(u32 m) {
    if (unk_ac & m) {
        return TRUE;
    }
    return FALSE;
}

void WfcFriendListMenu::setFlags(u32 m) { unk_ac = unk_ac | m; }

void WfcFriendListMenu::clearFlags(u32 m) { unk_ac = unk_ac & ~m; }

extern "C" void *data_ov146_02293e28[2] = {(void *)_ZN17WfcFriendListMenu17execCursorReleaseEv, 0};

extern "C" void *data_ov146_02293e40[2] = {(void *)_ZN17WfcFriendListMenu13execExitDelayEv, 0};

extern "C" u32 sWfcQuitButtonCells[8] = {0x81bf404a, 0x00008493, 0x41df004a, 0x00008497, 0x81d50043, 0x00008482, 0x81b90043, 0xffff8480};
