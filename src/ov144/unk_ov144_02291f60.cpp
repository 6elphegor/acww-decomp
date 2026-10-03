// ov144: scene overlay (class MusicMenu, vtable 0x02293db8): music / stereo menu.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class MusicMenu;
typedef void (MusicMenu::*Unk_ov144_02293db8_Fn)();

#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define LabelString_redrawAligned _ZN11LabelString13redrawAlignedEii
#define LabelString_createLabel _ZN11LabelString11createLabelEjjjhhi
#define LabelString_destroyLabel _ZN11LabelString12destroyLabelEv
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define HandCursor_disableObjWindow _ZN10HandCursor16disableObjWindowEv
#define HandCursor_enableObjWindow _ZN10HandCursor15enableObjWindowEv
#define ScrollKnob_areAnimsDone _ZN10ScrollKnob12areAnimsDoneEv
#define ScrollKnob_moveTo _ZN10ScrollKnob6moveToEii
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_clear _ZN9MsgString5clearEv
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define func_02133150 _s32_div_f
#define MenuProc_restartKeyRepeat _ZN8MenuProc16restartKeyRepeatEv
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
#define MenuBottomButtonsBody_getPressOffset _ZN21MenuBottomButtonsBody14getPressOffsetEv
#define MenuBottomButtonsBody_stepPress _ZN21MenuBottomButtonsBody9stepPressEv
#define MenuBottomButtonsBody_setSelected _ZN21MenuBottomButtonsBody11setSelectedEh
#define MenuBottomButtonsBody_getTargetY _ZN21MenuBottomButtonsBody10getTargetYEi
#define MenuBottomButtonsBody_getTargetX _ZN21MenuBottomButtonsBody10getTargetXEi
#define MenuBottomButtonsBody_isTouched _ZN21MenuBottomButtonsBody9isTouchedEi
#define MenuBottomButtons_setLayoutSingle05 _ZN17MenuBottomButtons17setLayoutSingle05Ei
#define MenuBottomButtons_freeTexts _ZN17MenuBottomButtons9freeTextsEv
#define MenuErrorMessage_update _ZN16MenuErrorMessage6updateEi
#define MenuErrorMessage_open _ZN16MenuErrorMessage4openEPhij
#define MenuLauncher_onChildClosed _ZN12MenuLauncher13onChildClosedEv
#define MenuLauncher_setNextRequest _ZN12MenuLauncher14setNextRequestEii
#define MenuBottomButtons_drawAt _ZN17MenuBottomButtons6drawAtEi
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv

struct Unk_ov144_SceneEntry {
    MusicMenu *(*fn)();
    u16 a;
    u16 b;
};

extern "C" {
extern u16 gPad[];
extern u8 gFieldSceneKind;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u32 gCurrentHeap;
MusicMenu *MusicMenu_Create();

void MIi_CpuClear16(u16 v, void *dst, u32 n);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
void Snd_PlaySe(s32 a);
void Gfx2d_SetLayerOffset(u32 a, s32 b, s32 c);
BOOL BgVramTask_requestScreen(void *a, void *b, s32 c, s32 d, s32 e);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
s32 MenuCursorBase_getScreenY(void *p);
BOOL MenuBottomButtonsBody_isTouched(void *p, s32 a);
void MenuScrollKnob_grab(void *p);
void Menu_PlayScrollGrabSe(void *p);
void func_0206267c(void *p);
void ItemName_setFromItem(void *p, u16 *v);
void func_0206260c(void *p);
void MsgString_clear(void *p);
void MsgString_copy(void *p, void *q);
void LabelString_createLabel(void *obj, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void LabelString_redrawAligned(void *obj, s32 a, s32 b);
void LabelString_destroyLabel(void *obj);
u16 *HouseRoom_GetCurrentSong();
s32 SongSet_HasSong(u32 id);
void ScrollKnob_moveTo(void *p, s32 a, s32 b);
s32 ScrollKnob_areAnimsDone(void *p);
void HandCursor_disableObjWindow(void *p);
void func_020e761c(void *p, s32 v, s32 n);
s32 Pocket_FindEmpty();
void Pocket_SetItem(u16 *p, s32 a, s32 b);
void SongSet_RemoveSong(u32 v);
void MenuCtrl_SetResult(s32 v);
void MenuCtrl_SetSongItem(u32 v);
s32 MenuCtrl_IsTouch();
s32 func_02133150(s32 a, s32 b);
s32 MenuCursorBase_setPoseRelease(void *p);
void MenuCursor_setPosePress(void *p);
void MenuCursorBase_setPoseIdle(void *p);
void MenuCursorBase_moveToEase(void *p, s32 a, s32 b, s32 c, s32 d);
void MenuCursor_switchToAnim07(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_setAnimIfChanged(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetY(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetX(void *p, s32 a);
s32 MenuBottomButtonsBody_setSelected(void *p, s32 a);
s32 MenuScrollKnob_getGripY(void *p);
s32 MenuScrollKnob_getGripX(void *p);
void MenuCursorBase_warpTo(void *p, s32 a, s32 b);
void MenuScrollKnob_show(void *p);
void Menu_PlayScrollTickSe(void *p);
s32 MenuScrollKnob_release(void *p);
s32 MenuScrollKnob_hitTest(void *p);
void MenuErrorMessage_open(void *p, void *q, s32 a, s32 b);
void MenuProc_restartKeyRepeat(void *p);
void FtrMgr_BroadcastStereosAct0();
void ProcBase_RequestDelete(void *p);
s32 ProcBase_GetParent();
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(u32 x);
void MenuLauncher_setNextRequest(s32 a, s32 b, s32 c);
void MenuLauncher_onChildClosed();
void HandCursor_enableObjWindow(void *p);
BOOL HandCursor_getAnim(void *p);
BOOL HandCursor_isAnimDone(void *p);
BOOL MenuCursorBase_isMoving(void *p);
BOOL MenuErrorMessage_update(void *p, s32 a);
BOOL MenuBottomButtonsBody_stepPress(void *p);
s32 MenuBottomButtonsBody_getPressOffset(void *p);
void MenuScrollKnob_updateRelease(void *p);
void MenuButtons_LoadTextColors(void *p);
void MenuBottomButtons_freeTexts(void *p);
void MenuBottomButtons_drawAt(void *p, s32 a);
void MenuCursorBase_drawWrapped(void *p);
void MenuBottomButtons_setLayoutSingle05(void *p, s32 a);
void BgVramTask_cancel(void *p);
void Gfx2d_LoadCharFile(const char *s, u32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadPaletteFile(const char *s, u32 a, s32 b, s32 c, s32 d, s32 e);
void File_LoadToBuffer(const char *s, void *d, s32 n);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsForceCloseDue();
void Oam_DrawCell(u32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
BOOL MenuCtrl_IsButtons();
}

extern "C" Unk_ov144_SceneEntry sMusicMenuProfile = {MusicMenu_Create, 0xb9, 0xbd};
extern "C" u32 data_ov144_02293d70[16] = {0x20508028, 0x50c0, 0x508018, 0x50e0, 0x508008, 0x50e0, 0x5080f8, 0x50e0,
                                          0x5080e8, 0x50e0, 0x5080d8, 0x50e0, 0x5080c8, 0x50e0, 0x5080b8, 0xffff50c0};

// Vtable 0x022044e4 (scene base class)
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
    BOOL stepSlideOut(s32 a);
    void initSlideIn(s32 a, s32 b);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void setSlideExtent(s32 a);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    s32 getSlideOffsetX();
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    void func_ov002_02200a68();
    BOOL checkSwitchToButtons(s32 a);
    BOOL checkSwitchToTouch();
    s32 takeRepeatedKeys();
    void initSlideOut(u32 a, u32 b);

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

class MenuBottomButtons {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    u32 unk_00[0x164 / 4];
};

class LabelString {
public:
    LabelString();
    ~LabelString();
    u32 unk_00[0x40 / 4];
};

class BgVramTask {
public:
    BgVramTask();
    u32 unk_00[0x24 / 4];
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    u32 unk_00[0x108 / 4];
};

// Vtable 0x02293db8, size 0x1f04
class MusicMenu : public MenuProc {
public:
    MusicMenu()
        : unk_c4(), unk_128(), unk_170(), unk_2d4(), unk_514(), unk_55c() {}

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
    void scrollToSong(s32 x);
    BOOL moveCursorByPad(u32 pad);
    void targetRowOrButton();
    void targetRowOrRight();
    BOOL targetRowAtCursor();
    void targetButtonAtCursor();
    u32 hitTestTarget(s32 x, s32 y);
    BOOL activateTarget(u32 a);
    BOOL selectSong(s32 v);
    void refreshButtons();
    void paintAddButton(u32 a);
    void paintTakeOutButton(u32 a);
    void paintPlayButton(u32 a);
    void setPlayButtonTiles(u16 v);
    void updateScrollAnimation();
    void uploadListScreen();
    void paintListRow(s32 idx, u32 col);
    void composeListScreen();
    void setScrollPos(s32 v);
    void initScroll();
    void flushDirty();
    void drawSongNames();
    void resetTextLabels();
    void *allocTextLabel();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void findCurrentSong();
    void buildSongList();
    void syncKnobToScroll();
    void syncScrollToKnob();
    void updateKnobPosition();
    BOOL finishKnobRelease();
    void moveKnobByKey();
    s32 releaseKnob();
    void dragKnob(s32 x, s32 flag);
    BOOL tryGrabKnob(s32 a, s32 b);
    void showMessage(u8 v);
    void startAddSongs();
    BOOL takeOutSong();
    void stopSong();
    BOOL playSelectedSong();
    void startQuit();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateMessage();
    void updateCloseDelay();
    void updateTakeOutDelay();
    void updateBarTransition();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateKnobKeysEnd();
    void updateKnobKeys();
    void updateButtons();
    void updateTrackTouch();
    void updateKnobTouch();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void setupBgLayers();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initMusic();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ u16 unk_b4;
    /* 0x0b6 */ s16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ s16 unk_ba;
    /* 0x0bc */ s16 unk_bc;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ volatile u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2[2];
    /* 0x0c4 */ MenuCursorBuf0 unk_c4;
    /* 0x128 */ MenuScrollKnob unk_128;
    /* 0x170 */ MenuBottomButtons unk_170;
    /* 0x2d4 */ LabelString unk_2d4[9];
    /* 0x514 */ BgVramTask unk_514[2];
    /* 0x55c */ MenuErrorMessage unk_55c;
    /* 0x664 */ u16 unk_664[0x46];
    /* 0x6f0 */ u16 unk_6f0[9];
    /* 0x702 */ u8 unk_702[0x800];
    /* 0xf02 */ u8 unk_f02[0x800];
    /* 0x1702 */ u8 unk_1702[0x802];
};

static inline BOOL IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

#define C MusicMenu

static inline BOOL Unk_ov144_02292c5c_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov144_022934cc_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}


extern "C" MusicMenu *MusicMenu_Create() { return new MusicMenu(); }

BOOL MusicMenu::vfunc_00() {
    initMusic();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL MusicMenu::vfunc_0c() {
    ProcBase_GetParent();
    MenuLauncher_onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL MusicMenu::onDraw() {
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&unk_c4);
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    MenuBottomButtons_drawAt(&unk_170, getSlideOffsetY());
    u32 p = unk_94 + 0x60;
    if (unk_a4 > 0) {
        unk_128.vfunc_08();
        Oam_DrawCell(1, data_ov144_02293d70, 0x80, p, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    return TRUE;
}

BOOL MusicMenu::execTransition() {
    static Unk_ov144_02293db8_Fn tbl[4] = {
        &MusicMenu::stateOpen, &MusicMenu::stateOpening,
        &MusicMenu::stateClose, &MusicMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void C::runMainState() {
    static Unk_ov144_02293db8_Fn tbl[13] = {
        &C::updateTouch,
        &C::updateKnobTouch,
        &C::updateTrackTouch,
        &C::updateButtons,
        &C::updateKnobKeys,
        &C::updateKnobKeysEnd,
        &C::updateCursorMove,
        &C::updateCursorPress,
        &C::updateCursorRelease,
        &C::updateBarTransition,
        &C::updateTakeOutDelay,
        &C::updateCloseDelay,
        &C::updateMessage};
    (this->*tbl[mainState])();
}

BOOL C::execMain() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        switch (mainState) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            hideCursor();
            startQuit();
            setPhase(1);
        }
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL C::execPhase3() { return TRUE; }

BOOL C::execPhase4() { return TRUE; }

BOOL C::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void C::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    initScroll();
    loadObjGfx();
    beginSubSlideIn(0xa, 4, 0, 0x18);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    MenuBottomButtons_setLayoutSingle05(&unk_170, 0x65);
    setTransitionState(1);
}

void C::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void C::stateClose() {
    s32 t = ProcBase_GetParent();
    if (testFlags(0x20)) {
        MenuLauncher_setNextRequest(t, 0x23, 1);
    } else {
        MenuLauncher_setNextRequest(t, 0x44, 1);
    }
    beginSubSlideOut(0xa, 0, 0, 0x18);
    updateLayerSlide();
    setTransitionState(3);
}

void C::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void C::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0x18 - unk_9c);
    unk_94 = getSlideOffsetY();
    updateKnobPosition();
}

void C::initMusic() {
    s32 i = 0;
    unk_b4 = i;
    for (; i < 9; i++) {
        unk_6f0[i] = 0xfff1;
    }
    buildSongList();
    findCurrentSong();
    MenuScrollKnob_show(&unk_128);
}

void C::releaseResources() {
    resetTextLabels();
    MenuBottomButtons_freeTexts(&unk_170);
    BgVramTask_cancel(&unk_514);
    BgVramTask_cancel(&unk_514[1]);
}

void C::preInputUpdate() {
    preStateUpdate();
    unk_c4.vfunc_0c();
}

void C::postInputUpdate() {
    postStateUpdate();
}

void C::preStateUpdate() {
    resetTextLabels();
    MenuBottomButtons_freeTexts(&unk_170);
    BgVramTask_cancel(&unk_514);
    BgVramTask_cancel(&unk_514[1]);
    unk_128.vfunc_0c();
}

void C::postStateUpdate() {
    updateScrollAnimation();
    flushDirty();
    MenuScrollKnob_updateRelease(&unk_128);
}

void C::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void C::loadBgGfx() {
    u32 h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/music/bg0.bch", h, 6, 0x11, 0x11, 0x98);
    Gfx2d_LoadCharFile("menu/music/bg1.bch", h, 6, 0x26e, 0x26e, 0x27e);
    Gfx2d_LoadPaletteFile("menu/music/bg.bpl", h, 6, 1, 1, 0xa);
    File_LoadToBuffer("menu/music/b_bg.bsc", unk_702, 0x800);
    File_LoadToBuffer("menu/music/a_bg.bsc", unk_1702, 0x800);
    refreshButtons();
}

void C::loadObjGfx() {
    MenuButtons_LoadTextColors(&unk_170);
    u32 h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/music/obj.bch", h, 8, 0xc0, 0xc0, 0x120);
    Gfx2d_LoadPaletteFile("menu/music/obj.bpl", h, 8, 4, 4, 5);
}

void C::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Unk_ov144_022934cc_Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY;
        s32 r = hitTestTarget(x, y);
        if (r != 0xe) {
            activateTarget(r);
            return;
        }
        if (unk_a4 > 0) {
            if (tryGrabKnob(x, y)) {
                setMainState(1);
            } else if (x >= 0xcf && x <= 0xdf && y >= 0x1d && y <= 0x93) {
                MenuScrollKnob_grab(&unk_128);
                unk_b0 = unk_a8;
                setMainState(2);
            }
        }
    }
}

void C::updateKnobTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 0);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void C::updateTrackTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 1);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void C::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else if (moveCursorByPad(takeRepeatedKeys())) {
        moveCursorToTarget();
    } else {
        u32 t = gPad[1];
        if (t & 1) {
            pressCursor();
        } else if (t & 2) {
            hideCursor();
            startQuit();
        }
    }
}

void C::updateKnobKeys() {
    if (gPad[0] & 1) {
        moveKnobByKey();
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        MenuCursorBase_warpTo(&unk_c4, a, b);
    } else {
        releaseKnob();
        setMainState(5);
    }
}

void C::updateKnobKeysEnd() {
    if (finishKnobRelease()) {
        setMainState(3);
        releaseCursor();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_c4, a, b);
}

void C::updateCursorMove() {
    if (!MenuCursorBase_isMoving(&unk_c4)) {
        setMainState(unk_be);
        runMainState();
    }
}

void C::updateCursorPress() {
    if (HandCursor_isAnimDone(&unk_c4)) {
        if (!activateTarget(unk_c1)) {
            setMainState(3);
            releaseCursor();
        }
    }
}

void C::updateCursorRelease() {
    if (HandCursor_isAnimDone(&unk_c4)) {
        refreshCursor();
        setMainState(unk_be);
    }
}

void C::updateBarTransition() {
    if (MenuBottomButtonsBody_stepPress(&unk_170)) {
        if (HandCursor_getAnim(&unk_c4)) {
            s32 a = MenuBottomButtonsBody_getPressOffset(&unk_170);
            s32 b = MenuBottomButtonsBody_getTargetX(&unk_170, -1);
            s32 c = MenuBottomButtonsBody_getTargetY(&unk_170, -1);
            MenuCursorBase_warpTo(&unk_c4, a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void C::updateTakeOutDelay() {
    if (unk_c0 != 0) {
        unk_c0 = *(volatile u8 *)&unk_c0 - 1;
    } else {
        SongSet_RemoveSong(unk_664[unk_ba]);
        s32 p = *(volatile s16 *)&unk_ba;
        s32 q = *(volatile s16 *)&unk_bc;
        if (p < q) {
            unk_bc = q - 1;
        }
        selectSong(-1);
        buildSongList();
        unk_a4 = (unk_b8 - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        s32 t = unk_a4;
        if (unk_9c > t) {
            unk_9c = t;
        }
        setScrollPos(unk_9c);
        unk_a0 = unk_9c;
        syncKnobToScroll();
        resumeInput();
    }
}

void C::updateCloseDelay() {
    if (unk_c0 != 0) {
        unk_c0 = *(volatile u8 *)&unk_c0 - 1;
    } else {
        hideCursor();
        setPhase(1);
    }
}

void C::updateMessage() {
    if (MenuErrorMessage_update(&unk_55c, 1)) {
        resumeInput();
        HandCursor_enableObjWindow(&unk_c4);
    }
}

void C::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void MusicMenu::startButtonInput() {
    if (testFlags(0x10)) {
        clearFlags(0x10);
    } else {
        unk_c1 = 0xb;
    }
    showCursor();
    MenuProc_restartKeyRepeat(this);
    setMainState(3);
}

void MusicMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void MusicMenu::startQuit() {
    MenuCtrl_SetResult(0);
    MenuBottomButtonsBody_setSelected(&unk_170, 6);
    setTransitionState(2);
    setMainState(9);
}

BOOL MusicMenu::playSelectedSong() {
    if (unk_ba == -1) {
        return FALSE;
    }
    if (unk_bc != -1) {
        stopSong();
        return FALSE;
    }
    clearFlags(0x20);
    unk_c0 = 5;
    paintPlayButton(8);
    setMainState(0xb);
    scrollToSong(unk_ba);
    MenuCtrl_SetResult(1);
    MenuCtrl_SetSongItem(unk_664[unk_ba]);
    setTransitionState(2);
    Snd_PlaySe(0x55);
    return TRUE;
}

void MusicMenu::stopSong() {
    if (IsZero(gFieldSceneKind) == 0) {
        FtrMgr_BroadcastStereosAct0();
    }
    scrollToSong(unk_bc);
    unk_bc = -1;
    setFlags(8);
    refreshButtons();
    resumeInput();
    Snd_PlaySe(0x56);
}

BOOL MusicMenu::takeOutSong() {
    if (unk_ba == -1) {
        return FALSE;
    }
    s32 t = Pocket_FindEmpty();
    s32 m = -1;
    if (t == m) {
        showMessage(0x10);
        return TRUE;
    }
    u16 v = unk_664[unk_ba];
    Pocket_SetItem(&v, 0, t);
    if (unk_ba == unk_bc) {
        if (IsZero(gFieldSceneKind) == 0) {
            FtrMgr_BroadcastStereosAct0();
        }
        unk_bc = -1;
    }
    SongSet_RemoveSong(unk_664[unk_ba]);
    scrollToSong(unk_ba);
    unk_c0 = 10;
    paintTakeOutButton(8);
    setMainState(10);
    setFlags(0x10);
    Snd_PlaySe(0x58);
    return TRUE;
}

void MusicMenu::startAddSongs() {
    setFlags(0x20);
    paintAddButton(8);
    unk_c0 = 5;
    setMainState(0xb);
    setTransitionState(2);
    Snd_PlaySe(0x57);
}

void MusicMenu::showMessage(u8 v) {
    u8 l = v;
    MenuErrorMessage_open(&unk_55c, &l, 1, 0);
    setMainState(0xc);
    HandCursor_disableObjWindow(&unk_c4);
}

BOOL MusicMenu::tryGrabKnob(s32 a, s32 b) {
    if (MenuScrollKnob_hitTest(&unk_128)) {
        unk_ac = unk_a8 - b;
        MenuScrollKnob_grab(&unk_128);
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

void MusicMenu::dragKnob(s32 x, s32 flag) {
    if (flag) {
        x -= 0x1d;
    } else {
        x += unk_ac;
    }
    if (x < 0) {
        x = 0;
    }
    if (x > 0x78) {
        x = 0x78;
    }
    if (flag) {
        func_020e761c(&unk_a8, x, 8);
    } else {
        unk_a8 = x;
    }
    syncScrollToKnob();
    updateKnobPosition();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&unk_128);
        unk_b0 = unk_a8;
    }
}

s32 MusicMenu::releaseKnob() {
    return MenuScrollKnob_release(&unk_128);
}

void MusicMenu::moveKnobByKey() {
#define A8 (*(volatile s32 *)&unk_a8)
    s32 old = A8;
    u32 keys = gPad[0];
    if (keys & 0x40) {
        A8 = A8 - 4;
        if (A8 < 0) {
            A8 = 0;
        }
    } else if (keys & 0x80) {
        A8 = A8 + 4;
        if (A8 > 0x78) {
            A8 = 0x78;
        }
    }
    if (old != A8) {
        syncScrollToKnob();
        updateKnobPosition();
        Menu_PlayScrollTickSe(&unk_128);
    }
#undef A8
}

BOOL MusicMenu::finishKnobRelease() {
    if (ScrollKnob_areAnimsDone(&unk_128)) {
        MenuScrollKnob_show(&unk_128);
        return TRUE;
    }
    return FALSE;
}

void MusicMenu::updateKnobPosition() {
    ScrollKnob_moveTo(&unk_128, 0x4f, unk_94 + (unk_a8 - 0x4b));
}

void MusicMenu::syncScrollToKnob() {
    s32 v;
    s32 n = unk_a4;
    v = func_02133150(unk_a8 * n, 0x78);
    if (v < 0) {
        v = 0;
    }
    if (v > n) {
        v = n;
    }
    setScrollPos(v);
    unk_a0 = v;
}

void MusicMenu::syncKnobToScroll() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x78, unk_a4);
        updateKnobPosition();
    }
}

void MusicMenu::buildSongList() {
    s32 i;
    u16 id;
    id = 0x1323;
    i = 0;
    unk_b8 = 0;
    s16 *pc = &unk_b8;
    for (; i < 0x46; i++) {
        if (SongSet_HasSong(id)) {
            unk_664[unk_b8] = id;
            *pc = *pc + 1;
        }
        id++;
    }
}

void MusicMenu::findCurrentSong() {
    s32 i;
    s32 target;
    s32 n;
    u16 id;
    id = 0x1323;
    n = 0;
    unk_bc = -1;
    if (*HouseRoom_GetCurrentSong() != 0xfff1) {
        u16 *pv = HouseRoom_GetCurrentSong();
        if (Unk_ov144_02292c5c_Rng(pv, id, 0x1368)) {
            target = *pv - 0x1323;
        } else {
            target = -1;
        }
        for (i = 0; i < 0x46; i++) {
            if (SongSet_HasSong(id)) {
                if (i == target) {
                    unk_bc = n;
                    i = 0x46;
                }
                n++;
            }
            id++;
        }
    }
    unk_ba = unk_bc;
}

void MusicMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&unk_c4, a, b);
    MenuCursor_setAnimIfChanged(&unk_c4, 1);
    refreshCursor();
}

s32 MusicMenu::getCursorTargetX() {
    u32 c = unk_c1;
    if (c <= 8) {
        return 0x48;
    }
    switch (c) {
    case 9:
        return MenuBottomButtonsBody_getTargetX(&unk_170, 6);
    case 11:
    case 12:
    case 13:
        return 0x26;
    case 10:
        return MenuScrollKnob_getGripX(&unk_128);
    default:
        return 0x80;
    }
}

s32 MusicMenu::getCursorTargetY() {
    u32 c = unk_c1;
    if (c <= 8) {
        return c * 16 + 0x20 - (unk_a0 & 0xf);
    }
    switch (c) {
    case 9:
        return MenuBottomButtonsBody_getTargetY(&unk_170, 6);
    case 11:
        return 0x2a;
    case 12:
        return 0x7d;
    case 13:
        return 0x65;
    case 10:
        return MenuScrollKnob_getGripY(&unk_128);
    default:
        return 0x60;
    }
}

void MusicMenu::hideCursor() {
    MenuCursor_setAnimIfChanged(&unk_c4, 0);
    unk_c4.vfunc_0c();
}

void MusicMenu::moveCursorToTarget() {
    if (unk_c1 == 9) {
        MenuCursor_switchToAnim07(&unk_c4);
    } else if (unk_c1 <= 8) {
        MenuCursor_switchToAnim07(&unk_c4);
    } else {
        MenuCursor_switchToAnim01(&unk_c4);
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void MusicMenu::moveCursorTo(s32 a, s32 b) {
    MenuCursorBase_moveToEase(&unk_c4, a, b, 3, 1);
    unk_be = mainState;
    setMainState(6);
}

void MusicMenu::refreshCursor() {
    MenuCursorBase_setPoseIdle(&unk_c4);
    unk_c4.vfunc_0c();
}

void MusicMenu::pressCursor() {
    MenuCursor_setPosePress(&unk_c4);
    setMainState(7);
}

void MusicMenu::releaseCursor() {
    MenuCursorBase_setPoseRelease(&unk_c4);
    unk_be = mainState;
    setMainState(8);
}

void *MusicMenu::allocTextLabel() {
    if (unk_bf >= 9) {
        return &unk_2d4[8];
    }
    unk_bf = unk_bf + 1;
    return &unk_2d4[unk_bf - 1];
}

void MusicMenu::resetTextLabels() {
    s32 i = 0;
    unk_bf = 0;
    for (; i < 9; i++) {
        LabelString_destroyLabel(&unk_2d4[i]);
    }
}

void MusicMenu::drawSongNames() {
    u32 buf[10];
    u16 t;
    s32 i;
    void *obj;
    s32 cnt;
    s32 idx;
    u16 *p;
    s32 slot;
    func_0206267c(buf);
    idx = unk_b6;
    if (idx < 0) {
        p = unk_664;
    } else {
        p = &unk_664[idx];
    }
    slot = (idx + 9) % 9;
    cnt = unk_b8;
    for (i = 0; i < 9; i++) {
        obj = NULL;
        if (idx < 0 || idx >= cnt) {
            unk_6f0[slot] = 0xfff1;
            obj = allocTextLabel();
            MsgString_clear(obj);
        } else {
            if (*p != unk_6f0[slot]) {
                unk_6f0[slot] = *p;
                obj = allocTextLabel();
                t = *p;
                ItemName_setFromItem(buf, &t);
                MsgString_copy(obj, buf);
            }
            p++;
        }
        if (obj) {
            LabelString_createLabel(obj, 4, slot * 0x1a + 0x184, 0xd, 0xf, 7, 0);
            LabelString_redrawAligned(obj, 0, 0);
        }
        idx++;
        slot++;
        if (slot >= 9) {
            slot = 0;
        }
    }
    func_0206260c(buf);
}

void MusicMenu::flushDirty() {
    if (testFlags(8)) {
        uploadListScreen();
    }
    if (testFlags(2)) {
        if (BgVramTask_requestScreen(&unk_514[1], &unk_1702, 6, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (testFlags(4)) {
        clearFlags(4);
        drawSongNames();
    }
}

void MusicMenu::initScroll() {
    unk_a4 = (unk_b8 - 8) << 4;
    if (unk_a4 < 0) {
        unk_a4 = 0;
    }
    scrollToSong(unk_bc);
}

void MusicMenu::setScrollPos(s32 v) {
    unk_9c = v;
    Gfx2d_SetLayerOffset(4, 0, unk_9c - 0x18);
    unk_b6 = v >> 4;
    composeListScreen();
    setFlags(4);
}

void MusicMenu::composeListScreen() {
    s32 n = unk_b6;
    s32 i = (n + 9) % 9;
    s32 j = n & 0xf;
    s32 k;
    volatile u16 fill = 0x10;
    MIi_CpuClear16(fill, unk_f02, 0x800);
    s32 z = 0;
    k = z;
    do {
        MIi_CpuCopy16(unk_702 + i * 0x80, unk_f02 + j * 0x80, 0x80);
        i++;
        if (i >= 9) {
            i = z;
        }
        j = (j + 1) & 0xf;
        k++;
    } while (k < 9);
    setFlags(8);
}

void MusicMenu::paintListRow(s32 idx, u32 col) {
    s32 z = 0;
    if (idx != -1) {
        s32 d = idx - unk_b6;
        if (d >= 0 && d < 9) {
            s32 y = (idx & 0xf) << 1;
            BgScreen_SetRectPalette(unk_f02, z, y, 0x1f, y + 1, col);
        }
    }
}

void MusicMenu::uploadListScreen() {
    BgScreen_SetRectPalette(unk_f02, 0, 0, 0x1f, 0x1f, 4);
    if (unk_bc == unk_ba) {
        paintListRow(unk_bc, 0xa);
    } else {
        paintListRow(unk_bc, 9);
        paintListRow(unk_ba, 5);
    }
    if (BgVramTask_requestScreen(unk_514, unk_f02, 4, 0x800, 0)) {
        clearFlags(8);
    }
}

void MusicMenu::updateScrollAnimation() {
    s32 t = unk_a0;
    s32 c = unk_9c;
    if (c != t) {
        if (c > t) {
            unk_9c = unk_9c - 6;
            t = unk_a0;
            if (unk_9c < t) {
                unk_9c = t;
            }
        } else {
            unk_9c = unk_9c + 6;
            t = unk_a0;
            if (unk_9c > t) {
                unk_9c = t;
            }
        }
        setScrollPos(unk_9c);
        syncKnobToScroll();
    }
}

void MusicMenu::setPlayButtonTiles(u16 v) {
    s32 k, idx, j, i;
    for (k = 0x82, i = 4; i <= 7; k += 0x20, i++) {
        idx = k;
        for (j = 2; j <= 5; j++) {
            *(u16 *)((u8 *)this + idx * 2 + 0x1702) = v;
            idx++;
            v = v + 1;
        }
    }
}

void MusicMenu::paintPlayButton(u32 a) {
    setFlags(2);
    BgScreen_SetRectPalette(unk_1702, 2, 4, 5, 7, a);
}

void MusicMenu::paintTakeOutButton(u32 a) {
    setFlags(2);
    BgScreen_SetRectPalette(unk_1702, 2, 0xf, 5, 0x10, a);
}

void MusicMenu::paintAddButton(u32 a) {
    setFlags(2);
    BgScreen_SetRectPalette(unk_1702, 2, 0xc, 5, 0xd, a);
}

void MusicMenu::refreshButtons() {
    if (unk_ba == -1) {
        paintTakeOutButton(7);
        if (unk_bc == -1) {
            setPlayButtonTiles(0x59);
            paintPlayButton(7);
        } else {
            setPlayButtonTiles(0x69);
            paintPlayButton(8);
        }
    } else {
        paintTakeOutButton(6);
        if (unk_bc == -1) {
            setPlayButtonTiles(0x59);
            paintPlayButton(6);
        } else {
            setPlayButtonTiles(0x69);
            paintPlayButton(8);
        }
    }
}

BOOL MusicMenu::selectSong(s32 v) {
    BOOL r;
    if (unk_ba == v) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    unk_ba = v;
    setFlags(8);
    refreshButtons();
    return r;
}

BOOL MusicMenu::activateTarget(u32 a) {
    if (a <= 8) {
        if (selectSong(a + unk_b6)) {
            Snd_PlaySe(0x29);
        }
        return FALSE;
    }
    switch (a - 9) {
    case 0:
        startQuit();
        return TRUE;
    case 2:
        return playSelectedSong();
    case 3:
        return takeOutSong();
    case 4:
        startAddSongs();
        return TRUE;
    case 1:
        MenuScrollKnob_grab(&unk_128);
        Menu_PlayScrollGrabSe(&unk_128);
        setMainState(4);
        return TRUE;
    }
    return FALSE;
}

u32 MusicMenu::hitTestTarget(s32 x, s32 y) {
    if (MenuBottomButtonsBody_isTouched(&unk_170, 6)) {
        return 9;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x20 && y <= 0x40) {
        return 0xb;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x78 && y <= 0x88) {
        return 0xc;
    }
    if (x >= 0x10 && x <= 0x30 && y >= 0x60 && y <= 0x70) {
        return 0xd;
    }
    if (x >= 0x40 && x <= 0xc0 && y >= 0x18 && y < 0x98) {
        s32 t = (y - (0x18 - (unk_a0 & 0xf))) >> 4;
        if (t < unk_b8) {
            return (u8)t;
        }
    }
    return 0xe;
}

void MusicMenu::targetButtonAtCursor() {
    s32 x = MenuCursorBase_getScreenY(&unk_c4);
    if (x < 0x4c) {
        unk_c1 = 0xb;
    } else if (x < 0x74) {
        unk_c1 = 0xd;
    } else {
        unk_c1 = 0xc;
    }
}

BOOL MusicMenu::targetRowAtCursor() {
    s32 n = unk_b8;
    s32 x, r, t;
    if (n == 0) {
        return FALSE;
    }
    if (n > 9) {
        n = 9;
    }
    x = MenuCursorBase_getScreenY(&unk_c4);
    if (x < 0x20) {
        x = 0x20;
    }
    if (x >= 0xa0) {
        x = 0x9f;
    }
    r = unk_a0 & 0xf;
    t = (x - (0x20 - r)) >> 4;
    if (t >= n) {
        t = n - 1;
    }
    unk_c1 = t;
    if (r != 0) {
        if (t == 0) {
            unk_a0 = unk_a0 - r;
        } else if (t == n - 1) {
            unk_c1 = unk_c1 - 1;
            unk_a0 = unk_a0 + (0x10 - (unk_a0 & 0xf));
        }
    }
    return TRUE;
}

void MusicMenu::targetRowOrRight() {
    if (!targetRowAtCursor()) {
        if (unk_a4 > 0) {
            unk_c1 = 10;
        } else {
            unk_c1 = 9;
        }
    }
}

void MusicMenu::targetRowOrButton() {
    if (!targetRowAtCursor()) {
        targetButtonAtCursor();
    }
}

BOOL MusicMenu::moveCursorByPad(u32 pad) {
    u32 st = unk_c1;
    if (pad == 0) {
        return FALSE;
    }
    if (st <= 8) {
        if (MenuKeys_HasLeft(pad)) {
            targetButtonAtCursor();
        } else if (MenuKeys_HasRight(pad)) {
            if (unk_a4 > 0) {
                unk_c1 = 10;
            } else {
                unk_c1 = 9;
            }
        } else if (MenuKeys_HasUp(pad)) {
            if (unk_c1 != 0) {
                unk_c1 = *(volatile u8 *)&unk_c1 - 1;
                if (unk_c1 == 0) {
                    s32 r = unk_a0 & 0xf;
                    if (r != 0) {
                        unk_a0 = unk_a0 - r;
                    }
                }
            } else {
                if (unk_a0 >= 0x10) {
                    unk_a0 = unk_a0 - 0x10;
                    return TRUE;
                }
            }
        } else if (MenuKeys_HasDown(pad)) {
            s32 t = unk_a4;
            if (t == 0) {
                if (unk_c1 < unk_b8 - 1) {
                    unk_c1 = *(volatile u8 *)&unk_c1 + 1;
                }
            } else if (unk_c1 < 7) {
                unk_c1 = *(volatile u8 *)&unk_c1 + 1;
            } else {
                s32 a0 = unk_a0;
                s32 r = a0 & 0xf;
                if (r != 0) {
                    unk_a0 = unk_a0 + (0x10 - r);
                    return TRUE;
                } else if (a0 <= t - 0x10) {
                    unk_a0 = unk_a0 + 0x10;
                    return TRUE;
                }
            }
        }
    }
    switch (unk_c1) {
    case 9:
        if (MenuKeys_HasLeft(pad)) {
            targetRowOrButton();
        } else if (MenuKeys_HasUp(pad)) {
            if (unk_a4 > 0) {
                unk_c1 = 10;
            }
        }
        break;
    case 10:
        if (MenuKeys_HasDown(pad)) {
            unk_c1 = 9;
        } else if (MenuKeys_HasLeft(pad)) {
            targetRowOrButton();
        }
        break;
    case 11:
        if (MenuKeys_HasDown(pad)) {
            unk_c1 = 13;
        } else if (MenuKeys_HasRight(pad)) {
            targetRowOrRight();
        }
        break;
    case 12:
        if (MenuKeys_HasUp(pad)) {
            unk_c1 = 13;
        } else if (MenuKeys_HasRight(pad)) {
            targetRowOrRight();
        }
        break;
    case 13:
        if (MenuKeys_HasUp(pad)) {
            unk_c1 = 11;
        } else if (MenuKeys_HasDown(pad)) {
            unk_c1 = 12;
        } else if (MenuKeys_HasRight(pad)) {
            targetRowOrRight();
        }
        break;
    }
    if (st != unk_c1) {
        return TRUE;
    }
    return FALSE;
}

void MusicMenu::scrollToSong(s32 x) {
    x = x - 3;
    s32 m = unk_b8 - 8;
    if (m < 0) {
        m = 0;
    }
    if (x < 0) {
        x = 0;
    } else if (x > m) {
        x = m;
    }
    setScrollPos(x << 4);
    unk_a0 = unk_9c;
    syncKnobToScroll();
}

BOOL MusicMenu::testFlags(u32 m) {
    if (unk_b4 & m) {
        return TRUE;
    }
    return FALSE;
}

void MusicMenu::setFlags(u32 m) { unk_b4 = unk_b4 | m; }

void MusicMenu::clearFlags(u32 m) { unk_b4 = unk_b4 & ~m; }

#undef C
