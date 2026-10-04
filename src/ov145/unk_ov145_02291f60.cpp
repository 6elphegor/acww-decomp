// ov145: scene overlay (class DonationMenu, vtable 0x022937c0): donation / catalogue list menu.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#undef postCreate
#undef vfunc_14

class DonationMenu;
typedef void (DonationMenu::*Unk_ov145_022937c0_Fn)();

#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define ScrollKnob_areAnimsDone _ZN10ScrollKnob12areAnimsDoneEv
#define ScrollKnob_moveTo _ZN10ScrollKnob6moveToEii
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define func_02133150 _s32_div_f
#define MuseumData_getDonorName _ZN10MuseumData12getDonorNameEiPt
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define BgVramTask_requestPalette _ZN10BgVramTask14requestPaletteEjhj
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define MenuCursorBase_isMoving _ZN14MenuCursorBase8isMovingEv
#define MenuCursorBase_moveToEase _ZN14MenuCursorBase10moveToEaseEiiii
#define MenuCursorBase_warpTo _ZN14MenuCursorBase6warpToEii
#define MenuCursorBase_setPoseIdle _ZN14MenuCursorBase11setPoseIdleEv
#define MenuCursorBase_setPoseRelease _ZN14MenuCursorBase14setPoseReleaseEv
#define MenuCursorBase_drawWrapped _ZN14MenuCursorBase11drawWrappedEv
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
#define MenuBottomButtons_drawAt _ZN17MenuBottomButtons6drawAtEi
#define MenuLauncher_onChildClosed _ZN12MenuLauncher13onChildClosedEv
#define MenuLauncher_setNextRequest _ZN12MenuLauncher14setNextRequestEii

struct Unk_ov145_SceneEntry {
    DonationMenu *(*fn)();
    u16 a;
    u16 b;
};

// ---- main-module classes (copied from src/main) ----


class MsgString9B {
public:
    MsgString9B();
    virtual ~MsgString9B();
    u8 pad_04[0x18];
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(void *src, BOOL a, BOOL b);
    void copy(MsgString *o);
    void clear();
    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

class TextLabel;

class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

    void redrawRight();

    void redrawAligned(s32 a, s32 b);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *label;
};

class ItemName : public MsgString {
public:
    ItemName();
    virtual ~ItemName();
    virtual u32 capacity();
    virtual u8 *data();
    BOOL setFromItem(u16 *p);

    /* 0x12 */ u8 text[0x11];
};

class BgVramTask {
public:
    BgVramTask();
    u32 unk_00[0x24 / 4];
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
    BOOL stepSlideOut(s32 a);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    BOOL checkSwitchToButtons(s32 a);
    u32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
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

typedef MsgString9B Unk_ov145_02292600_A;
typedef ItemName Unk_ov145_02292600_B;

extern "C" {
extern u8 gFieldSceneKind;
extern u8 data_021ed0a0;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern void *gCurrentHeap;
DonationMenu *DonationMenu_Create();

void _ZN9MsgString4copyEPS_(void *self, void *o);
void String_FormatNumberWrapper(LabelString *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void String_Load2dMenu(LabelString *w, s32 a);
void MenuCtrl_SetResult(s32 a);
void Snd_PlaySe(s32 a);
BOOL MuseumData_isDonated(void *a, void *b);
s32 func_02133150(s32 a, s32 b);
void ScrollKnob_moveTo(void *p, s32 a, s32 b);
BOOL ScrollKnob_areAnimsDone(void *p);
BOOL HandCursor_isAnimDone(void *p);
BOOL HandCursor_getAnim(void *p);
void func_020e761c(void *p, s32 a, s32 b);
BOOL MenuCtrl_IsTouch();
s32 Gfx2d_LoadCharFile(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 Gfx2d_LoadPaletteFile(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 File_LoadToBuffer(const void *src, void *dst, s32 n);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void MenuButtons_LoadTextColors(void *p);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
void MIi_CpuClear16(u16 v, void *dst, u32 n);
s32 BgVramTask_requestScreen(void *a, void *b, s32 c, s32 d, s32 e);
void BgVramTask_requestPalette(void *a, void *b, u32 c, u32 d);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
BOOL MuseumData_getDonorName(void *a, void *b, void *c);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void ProcBase_RequestDelete(void *p);
s32 ProcBase_GetParent();
void BgVramTask_cancel(void *p);
void Gfx2d_ShowLayer(u32 x);
void MenuLauncher_onChildClosed();
void MenuLauncher_setNextRequest(s32 a, s32 b, s32 c);
void Gfx2d_ResetLayer(u32 x);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL MenuCtrl_IsButtons();
void Menu_PlayScrollGrabSe(void *p);
void Menu_PlayScrollTickSe(void *p);
void MenuScrollKnob_grab(void *p);
void MenuScrollKnob_show(void *p);
void MenuScrollKnob_release(void *p);
s32 MenuScrollKnob_updateRelease(void *p);
void MenuCursorBase_setPoseRelease(void *p);
void MenuCursor_setPosePress(void *p);
void MenuCursorBase_setPoseIdle(void *p);
void MenuCursorBase_moveToEase(void *p, s32 a, s32 b, s32 c, s32 d);
void MenuCursor_switchToAnim07(void *p);
void MenuCursor_switchToAnim01(void *p);
void MenuCursor_setAnimIfChanged(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetY(void *p, s32 a);
s32 MenuBottomButtonsBody_getTargetX(void *p, s32 a);
void MenuBottomButtonsBody_setSelected(void *p, s32 a);
s32 MenuScrollKnob_getGripY(void *p);
s32 MenuScrollKnob_getGripX(void *p);
void MenuCursorBase_warpTo(void *p, s32 a, s32 b);
BOOL MenuScrollKnob_hitTest(void *p, s32 a, s32 b);
BOOL MenuCursorBase_isMoving(void *p);
BOOL MenuBottomButtonsBody_stepPress(void *p);
s32 MenuBottomButtonsBody_getPressOffset(void *p);
BOOL MenuBottomButtonsBody_isTouched(void *p, s32 a);
void MenuBottomButtons_freeTexts(void *p);
void MenuBottomButtons_setLayoutSingle05(void *p, s32 a);
void MenuBottomButtons_drawAt(void *p, s32 a);
void MenuCursorBase_drawWrapped(void *p);
}

extern "C" Unk_ov145_SceneEntry sDonationMenuProfile = {DonationMenu_Create, 0xba, 0xbe};
extern "C" u32 data_ov145_02293820[32] = {0x20678026, 0x80c8, 0x678018, 0x80e8, 0x678008, 0x80e8, 0x6780f8, 0x80e8,
                                          0x6780e8, 0x80e8, 0x6780d8, 0x80e8, 0x6780c8, 0x80e8, 0x6780ba, 0xffff80c8,
                                          0x400d0045, 0x5106, 0x8005003d, 0xffff50c0, 0x41e80045, 0x5104, 0x81e0003d, 0xffff50c0,
                                          0x41c40045, 0x50c6, 0x81bc003d, 0xffff50c0, 0x41a00045, 0x70c4, 0x8198003d, 0xffff70c0};

// ---- ov145 scene (vtable 0x022937c0), size 0x2188 ----
class DonationMenu : public MenuProc {
public:
    DonationMenu() : cursor(), scrollKnob(), bottomButtons(), textLabels(), vramTasks() {}

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
    void updateTabSwitch();
    void setTabFadeLevel(u32 t);
    BOOL moveCursorByPad(u32 pad);
    u32 hitTestTarget(s32 x, s32 y);
    BOOL activateTarget(u32 t);
    void requestTab(u8 v);
    void setTab(u8 v);
    u16 *getTabItemPtr(s32 i);
    s32 getTabCount();
    void updateScrollAnimation();
    void uploadListScreen();
    void composeListScreen();
    void setScrollPos(s32 v);
    void flushDirty();
    void drawEntryNames();
    void resetTextLabels();
    LabelString *allocTextLabel();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void buildInsectList();
    void buildFishList();
    void buildPaintingList();
    void buildFossilList();
    s32 collectDonatedFurniture(u16 *out, s32 start, s32 n);
    s32 collectDonatedItems(u16 *out, s32 start, s32 n);
    s32 collectDonated(u16 *out, s32 start, s32 n, s32 step);
    void syncKnobToScroll();
    void syncScrollToKnob();
    void updateKnobPosition();
    BOOL finishKnobRelease();
    void moveKnobByKey();
    void releaseKnob();
    void dragKnob(s32 a, s32 flag);
    BOOL tryGrabKnob(s32 x, s32 y);
    void startQuit();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
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
    void initDonation();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 slideY;
    /* 0x098 */ u8 unk_98[4];
    /* 0x09c */ s32 scrollY;
    /* 0x0a0 */ s32 scrollTargetY;
    /* 0x0a4 */ s32 scrollMax;
    /* 0x0a8 */ s32 knobPos;
    /* 0x0ac */ s32 knobGrabOffset;
    /* 0x0b0 */ s32 knobLastTickPos;
    /* 0x0b4 */ u16 flags;
    /* 0x0b6 */ s16 topRow;
    /* 0x0b8 */ s16 tabCounts[4];
    /* 0x0c0 */ u8 curTab;
    /* 0x0c1 */ u8 targetTab;
    /* 0x0c2 */ u8 cursorSlot;
    /* 0x0c3 */ u8 returnState;
    /* 0x0c4 */ u8 labelCount;
    /* 0x0c5 */ u8 tabFadeLevel;
    /* 0x0c6 */ u8 tabSwitchState;
    /* 0x0c7 */ u8 unk_c7;
    /* 0x0c8 */ MenuCursorBuf0 cursor;
    /* 0x12c */ MenuScrollKnob scrollKnob;
    /* 0x174 */ MenuBottomButtons bottomButtons;
    /* 0x2d8 */ LabelString textLabels[18];
    /* 0x758 */ BgVramTask vramTasks[3];
    /* 0x7c4 */ u8 fossilItems[0x68];
    /* 0x82c */ u8 fishItems[0x70];
    /* 0x89c */ u8 insectItems[0x70];
    /* 0x90c */ u8 paintingItems[0x28];
    /* 0x934 */ u16 shownRowItems[9];
    /* 0x946 */ u8 rowTemplateScreen[0x800];
    /* 0x1146 */ u8 listScreen[0x800];
    /* 0x1946 */ u8 frameScreen[0x800];
    /* 0x2146 */ u16 basePalette[16];
    /* 0x2166 */ u16 workPalette[16];
};

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" DonationMenu *DonationMenu_Create() { return new DonationMenu(); }

BOOL DonationMenu::vfunc_00() {
    initDonation();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL DonationMenu::vfunc_0c() {
    ProcBase_GetParent();
    MenuLauncher_onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL DonationMenu::onDraw() {
    s32 i;
    u8 *p;
    s32 y;
    if (MenuCtrl_IsButtons()) {
        MenuCursorBase_drawWrapped(&cursor);
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    MenuBottomButtons_drawAt(&bottomButtons, getSlideOffsetY());
    y = slideY + 0x60;
    if (scrollMax > 0) {
        MenuScrollKnob *q = &scrollKnob;
        q->vfunc_08();
        Oam_DrawCell(1, data_ov145_02293820, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    p = (u8 *)&data_ov145_02293820[16];
    for (i = 0; i < 4; i++) {
        s32 pal;
        if (i == targetTab) {
            pal = 7;
        } else {
            pal = 5;
        }
        Oam_DrawCell(1, p, 0x80, y, pal, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        p += 0x10;
    }
    return TRUE;
}

BOOL DonationMenu::execTransition() {
    static Unk_ov145_022937c0_Fn tbl[4] = {
        &DonationMenu::stateOpen,
        &DonationMenu::stateOpening,
        &DonationMenu::stateClose,
        &DonationMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void DonationMenu::runMainState() {
    static Unk_ov145_022937c0_Fn tbl[10] = {
        &DonationMenu::updateTouch,
        &DonationMenu::updateKnobTouch,
        &DonationMenu::updateTrackTouch,
        &DonationMenu::updateButtons,
        &DonationMenu::updateKnobKeys,
        &DonationMenu::updateKnobKeysEnd,
        &DonationMenu::updateCursorMove,
        &DonationMenu::updateCursorPress,
        &DonationMenu::updateCursorRelease,
        &DonationMenu::updateBarTransition};
    (this->*tbl[mainState])();
}

BOOL DonationMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL DonationMenu::execPhase3() { return TRUE; }

BOOL DonationMenu::execPhase4() { return TRUE; }

BOOL DonationMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void DonationMenu::stateOpen() {
    setupBgLayers();
    loadBgGfx();
    curTab = 4;
    setTab(3);
    targetTab = 3;
    loadObjGfx();
    beginSubSlideIn(0xa, 4, 0, 0x28);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    setFlags(1);
    MenuBottomButtons_setLayoutSingle05(&bottomButtons, 0x65);
    setTransitionState(1);
}

void DonationMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void DonationMenu::stateClose() {
    MenuLauncher_setNextRequest(ProcBase_GetParent(), 0x44, 1);
    beginSubSlideOut(0xa, 0, 0, 0x28);
    updateLayerSlide();
    setTransitionState(3);
}

void DonationMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void DonationMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0x18 - scrollY);
    slideY = getSlideOffsetY();
    updateKnobPosition();
}

void DonationMenu::initDonation() {
    s32 i;
    flags = 0;
    curTab = 0;
    for (i = 0; i < 9; i++) {
        shownRowItems[i] = 0xfff1;
    }
    tabFadeLevel = 3;
    tabSwitchState = 0;
    buildFossilList();
    buildPaintingList();
    buildFishList();
    buildInsectList();
    MenuScrollKnob_show(&scrollKnob);
}

void DonationMenu::releaseResources() {
    resetTextLabels();
    MenuBottomButtons_freeTexts(&bottomButtons);
    BgVramTask_cancel(&vramTasks[0]);
    BgVramTask_cancel(&vramTasks[1]);
    BgVramTask_cancel(&vramTasks[2]);
}

void DonationMenu::preInputUpdate() {
    preStateUpdate();
    MenuCursorBuf0 *p = &cursor;
    p->vfunc_0c();
}

// ---- 0x022931e4 ----
void DonationMenu::postInputUpdate() {
    postStateUpdate();
}

void DonationMenu::preStateUpdate() {
    resetTextLabels();
    MenuBottomButtons_freeTexts(&bottomButtons);
    BgVramTask_cancel(&vramTasks[0]);
    BgVramTask_cancel(&vramTasks[1]);
    BgVramTask_cancel(&vramTasks[2]);
    scrollKnob.vfunc_0c();
}

void DonationMenu::postStateUpdate() {
    updateTabSwitch();
    updateScrollAnimation();
    flushDirty();
    MenuScrollKnob_updateRelease(&scrollKnob);
}

void DonationMenu::setupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void DonationMenu::loadBgGfx() {
    void *heap = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/donation/bg0.bch", heap, 6, 0x11, 0x11, 0x63);
    Gfx2d_LoadCharFile("menu/donation/bg1.bch", heap, 6, 0x26e, 0x26e, 0x27d);
    Gfx2d_LoadPaletteFile("menu/donation/bg.bpl", heap, 6, 1, 1, 7);
    File_LoadToBuffer("menu/donation/bg_3.bpl", basePalette, 0x20);
    File_LoadToBuffer("menu/donation/b_bg.bsc", rowTemplateScreen, 0x800);
    File_LoadToBuffer("menu/donation/a_bg.bsc", frameScreen, 0x800);
    Gfx2d_LoadScreen(frameScreen, 6, 0x800, 0);
}

void DonationMenu::loadObjGfx() {
    MenuButtons_LoadTextColors(&bottomButtons);
    void *heap = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/donation/obj.bch", heap, 8, 0xc0, 0xc0, 0x13f);
    Gfx2d_LoadPaletteFile("menu/donation/obj.bpl", heap, 8, 4, 4, 9);
}

void DonationMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Both()) {
        if (MenuBottomButtonsBody_isTouched(&bottomButtons, 6)) {
            startQuit();
        } else {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = hitTestTarget(x, y);
            if (r != 6) {
                activateTarget(r);
            } else if (scrollMax > 0) {
                if (tryGrabKnob(x, y)) {
                    setMainState(1);
                } else if (x >= 0xe4 && x <= 0xec && y >= 0x15 && y <= 0x8d) {
                    MenuScrollKnob_grab(&scrollKnob);
                    setMainState(2);
                }
            }
        }
    }
}

void DonationMenu::updateKnobTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 0);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void DonationMenu::updateTrackTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 1);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void DonationMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    if (moveCursorByPad(takeRepeatedKeys())) {
        moveCursorToTarget();
        return;
    }
    {
        u32 k = gPad[1];
        if (k & 1) {
            pressCursor();
            return;
        }
        if (k & 2) {
            hideCursor();
            startQuit();
        }
    }
}

void DonationMenu::updateKnobKeys() {
    if (gPad[0] & 1) {
        moveKnobByKey();
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        MenuCursorBase_warpTo(&cursor, a, b);
    } else {
        releaseKnob();
        setMainState(5);
    }
}

void DonationMenu::updateKnobKeysEnd() {
    if (finishKnobRelease()) {
        setMainState(3);
        releaseCursor();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&cursor, a, b);
}

void DonationMenu::updateCursorMove() {
    if (!MenuCursorBase_isMoving(&cursor)) {
        setMainState(returnState);
        runMainState();
    }
}

void DonationMenu::updateCursorPress() {
    if (HandCursor_isAnimDone(&cursor)) {
        if (!activateTarget(cursorSlot)) {
            setMainState(3);
            releaseCursor();
        }
    }
}

void DonationMenu::updateCursorRelease() {
    if (HandCursor_isAnimDone(&cursor)) {
        refreshCursor();
        setMainState(returnState);
    }
}

void DonationMenu::updateBarTransition() {
    if (MenuBottomButtonsBody_stepPress(&bottomButtons)) {
        if (HandCursor_getAnim(&cursor)) {
            s32 a = MenuBottomButtonsBody_getPressOffset(&bottomButtons);
            s32 b = MenuBottomButtonsBody_getTargetX(&bottomButtons, -1);
            s32 c = MenuBottomButtonsBody_getTargetY(&bottomButtons, -1);
            MenuCursorBase_warpTo(&cursor, a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void DonationMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void DonationMenu::startButtonInput() {
    cursorSlot = targetTab;
    showCursor();
    restartKeyRepeat();
    setMainState(3);
}

void DonationMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void DonationMenu::startQuit() {
    MenuCtrl_SetResult(1);
    MenuBottomButtonsBody_setSelected(&bottomButtons, 6);
    setTransitionState(2);
    setMainState(9);
}

BOOL DonationMenu::tryGrabKnob(s32 x, s32 y) {
    if (MenuScrollKnob_hitTest(&scrollKnob, x, y)) {
        knobGrabOffset = knobPos - y;
        MenuScrollKnob_grab(&scrollKnob);
        knobLastTickPos = knobPos;
        return TRUE;
    }
    return FALSE;
}

void DonationMenu::dragKnob(s32 a, s32 flag) {
    if (flag) {
        a -= 0x1d;
    } else {
        a += knobGrabOffset;
    }
    if (a < 0) {
        a = 0;
    }
    if (a > 0x78) {
        a = 0x78;
    }
    if (flag) {
        func_020e761c(&knobPos, a, 8);
    } else {
        knobPos = a;
    }
    syncScrollToKnob();
    updateKnobPosition();
    s32 d = knobLastTickPos - knobPos;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&scrollKnob);
        knobLastTickPos = knobPos;
    }
}

void DonationMenu::releaseKnob() {
    MenuScrollKnob_release(&scrollKnob);
}

void DonationMenu::moveKnobByKey() {
    s32 old = knobPos;
    u32 k = gPad[0];
    if (k & 0x40) {
        knobPos = knobPos - 4;
        if (knobPos < 0) {
            knobPos = 0;
        }
    } else if (k & 0x80) {
        knobPos = knobPos + 4;
        if (knobPos > 0x78) {
            knobPos = 0x78;
        }
    }
    if (old != knobPos) {
        syncScrollToKnob();
        updateKnobPosition();
        Menu_PlayScrollTickSe(&scrollKnob);
    }
}

BOOL DonationMenu::finishKnobRelease() {
    if (ScrollKnob_areAnimsDone(&scrollKnob)) {
        MenuScrollKnob_show(&scrollKnob);
        return TRUE;
    }
    return FALSE;
}

void DonationMenu::updateKnobPosition() {
    ScrollKnob_moveTo(&scrollKnob, 0x63, slideY + (knobPos - 0x4b));
}

void DonationMenu::syncScrollToKnob() {
    s32 t;
    s32 n = scrollMax;
    t = func_02133150(knobPos * n, 0x78);
    if (t < 0) {
        t = 0;
    }
    if (t > n) {
        t = n;
    }
    setScrollPos(t);
    scrollTargetY = t;
}

void DonationMenu::syncKnobToScroll() {
    if (scrollMax > 0) {
        knobPos = func_02133150(scrollY * 0x78, scrollMax);
        updateKnobPosition();
    }
}

s32 DonationMenu::collectDonated(u16 *out, s32 start, s32 n, s32 step) {
    s32 cnt = 0;
    u16 v = 0xfff1;
    s32 i;
    for (i = cnt; i < n; i++) {
        v = start;
        if (MuseumData_isDonated(&data_021ed0a0, &v)) {
            out[cnt] = start;
            cnt++;
        }
        start = (u16)(start + step);
    }
    return cnt;
}

s32 DonationMenu::collectDonatedItems(u16 *out, s32 start, s32 n) {
    return collectDonated(out, start, n, 1);
}

s32 DonationMenu::collectDonatedFurniture(u16 *out, s32 start, s32 n) {
    return collectDonated(out, start, n, 4);
}

void DonationMenu::buildFossilList() {
    tabCounts[3] = collectDonatedFurniture((u16 *)fossilItems, 0x450c, 0x34);
}

void DonationMenu::buildPaintingList() {
    tabCounts[0] = collectDonatedFurniture((u16 *)paintingItems, 0x3894, 0x14);
}

void DonationMenu::buildFishList() {
    tabCounts[1] = collectDonatedItems((u16 *)fishItems, 0x12e8, 0x38);
}

void DonationMenu::buildInsectList() {
    tabCounts[2] = collectDonatedItems((u16 *)insectItems, 0x12b0, 0x38);
}

void DonationMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    MenuCursorBase_warpTo(&cursor, a, b);
    if (cursorSlot == 4) {
        MenuCursor_setAnimIfChanged(&cursor, 7);
    } else {
        MenuCursor_setAnimIfChanged(&cursor, 1);
    }
    refreshCursor();
}

s32 DonationMenu::getCursorTargetX() {
    u32 c = cursorSlot;
    if (c <= 3) {
        return (s32)c * -0x24 + 0x94;
    }
    switch (c) {
    case 4:
        return MenuBottomButtonsBody_getTargetX(&bottomButtons, 6);
    case 5:
        return MenuScrollKnob_getGripX(&scrollKnob);
    default:
        return 0x80;
    }
}

s32 DonationMenu::getCursorTargetY() {
    u32 c = cursorSlot;
    if (c <= 3) {
        return 0xad;
    }
    switch (c) {
    case 4:
        return MenuBottomButtonsBody_getTargetY(&bottomButtons, 6);
    case 5:
        return MenuScrollKnob_getGripY(&scrollKnob);
    default:
        return 0x60;
    }
}

void DonationMenu::hideCursor() {
    MenuCursor_setAnimIfChanged(&cursor, 0);
    cursor.vfunc_0c();
}

void DonationMenu::moveCursorToTarget() {
    if (cursorSlot == 4) {
        MenuCursor_switchToAnim07(&cursor);
    } else {
        MenuCursor_switchToAnim01(&cursor);
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void DonationMenu::moveCursorTo(s32 a, s32 b) {
    MenuCursorBase_moveToEase(&cursor, a, b, 3, 1);
    returnState = mainState;
    setMainState(6);
}

void DonationMenu::refreshCursor() {
    MenuCursorBase_setPoseIdle(&cursor);
    cursor.vfunc_0c();
}

void DonationMenu::pressCursor() {
    MenuCursor_setPosePress(&cursor);
    setMainState(7);
}

void DonationMenu::releaseCursor() {
    MenuCursorBase_setPoseRelease(&cursor);
    returnState = mainState;
    setMainState(8);
}

LabelString *DonationMenu::allocTextLabel() {
    if (*(volatile u8 *)&labelCount >= 18) {
        return &textLabels[17];
    }
    *(volatile u8 *)&labelCount = *(volatile u8 *)&labelCount + 1;
    return &textLabels[*(volatile u8 *)&labelCount - 1];
}

void DonationMenu::resetTextLabels() {
    s32 i = 0;
    labelCount = 0;
    for (; i < 18; i++) {
        textLabels[i].destroyLabel();
    }
}

void DonationMenu::drawEntryNames() {
    Unk_ov145_02292600_A a;
    Unk_ov145_02292600_B b;
    u16 s[2];
    s32 k;
    LabelString *w;
    LabelString *w2;
    s32 cur = topRow;
    u16 *list = getTabItemPtr(cur);
    s32 col = (cur + 9) % 9;
    s32 cnt = getTabCount();
    for (k = 0; k < 9; k++) {
        w = 0;
        if (cur < 0 || cur >= cnt) {
            shownRowItems[col] = 0xfff1;
            w = allocTextLabel();
            w->clear();
            w2 = allocTextLabel();
            w2->clear();
        } else {
            if (*list != shownRowItems[col]) {
                shownRowItems[col] = *list;
                w = allocTextLabel();
                s[0] = *list;
                b.setFromItem(&s[0]);
                w->copy(&b);
                w2 = allocTextLabel();
                s[1] = *list;
                if (MuseumData_getDonorName(&data_021ed0a0, &a, &s[1])) {
                    _ZN9MsgString4copyEPS_(w2, &a);
                } else {
                    String_Load2dMenu(w2, 0xcc);
                }
            }
            list++;
        }
        if (w) {
            w->createLabel(4, col * 26 + 0x184, 0xd, 0xf, 7, 0);
            w->redrawAligned(0, 0);
            w2->createLabel(4, col * 16 + 0xf4, 8, 0xf, 7, 0);
            w2->redrawAligned(0, 0);
        }
        cur++;
        col++;
        if (col >= 9) {
            col = 0;
        }
    }
}

void DonationMenu::flushDirty() {
    if (testFlags(8)) {
        uploadListScreen();
    }
    if (testFlags(2)) {
        if (BgVramTask_requestScreen(&vramTasks[1], frameScreen, 6, 0x800, 0)) {
            clearFlags(2);
        }
    }
    if (testFlags(4)) {
        clearFlags(4);
        drawEntryNames();
    }
}

void DonationMenu::setScrollPos(s32 v) {
    scrollY = v;
    Gfx2d_SetLayerOffset(4, 0, scrollY - 0x18);
    topRow = (s16)(v >> 4);
    composeListScreen();
    setFlags(4);
}

void DonationMenu::composeListScreen() {
    s32 cur = topRow;
    s32 r6 = (cur + 9) % 9;
    s32 r4 = cur & 0xf;
    volatile u16 fill = 0x10;
    s32 i;
    MIi_CpuClear16(fill, listScreen, 0x800);
    for (i = 0; i < 9; i++) {
        MIi_CpuCopy16(rowTemplateScreen + r6 * 0x80, listScreen + r4 * 0x80, 0x80);
        r6++;
        if (r6 >= 9) {
            r6 = 0;
        }
        r4 = (r4 + 1) & 0xf;
    }
    setFlags(8);
}

void DonationMenu::uploadListScreen() {
    BgScreen_SetRectPalette(listScreen, 0, 0, 0x1f, 0x1f, 3);
    s32 n = getTabCount();
    if (n < 9) {
        BgScreen_SetRectPalette(listScreen, 0, n * 2, 0x1f, 0x12, 4);
    }
    if (BgVramTask_requestScreen(vramTasks, listScreen, 4, 0x800, 0)) {
        clearFlags(8);
    }
}

void DonationMenu::updateScrollAnimation() {
    if (scrollY != scrollTargetY) {
        if (scrollY > scrollTargetY) {
            scrollY = scrollY - 4;
            if (scrollY < scrollTargetY) {
                scrollY = scrollTargetY;
            }
        } else {
            scrollY = scrollY + 4;
            if (scrollY > scrollTargetY) {
                scrollY = scrollTargetY;
            }
        }
        setScrollPos(scrollY);
        syncKnobToScroll();
    }
}

s32 DonationMenu::getTabCount() {
    return tabCounts[curTab];
}

u16 *DonationMenu::getTabItemPtr(s32 i) {
    static u16 *tbl[4] = { (u16 *)paintingItems, (u16 *)fishItems, (u16 *)insectItems, (u16 *)fossilItems };
    if (i < 0) {
        i = 0;
    }
    return tbl[curTab] + i;
}

void DonationMenu::setTab(u8 v) {
    if (curTab != v) {
        curTab = v;
        scrollMax = (getTabCount() - 8) << 4;
        if (scrollMax < 0) {
            scrollMax = 0;
        }
        setScrollPos(0);
        scrollTargetY = 0;
        syncKnobToScroll();
        updateKnobPosition();
    }
}

void DonationMenu::requestTab(u8 v) {
    if (v != targetTab) {
        targetTab = v;
        tabSwitchState = 1;
    }
}

BOOL DonationMenu::activateTarget(u32 t) {
    if (t <= 3) {
        if (t != targetTab) {
            Snd_PlaySe(0xc);
            requestTab((u8)t);
        }
        return FALSE;
    } else {
        switch (t) {
        case 4:
            startQuit();
            return TRUE;
        case 5:
            MenuScrollKnob_grab(&scrollKnob);
            Menu_PlayScrollGrabSe(&scrollKnob);
            setMainState(4);
            return TRUE;
        }
    }
    return FALSE;
}

u32 DonationMenu::hitTestTarget(s32 x, s32 y) {
    if (y >= 0x9d && y < 0xbd) {
        s32 i;
        y = 0x84;
        for (i = 0; i < 4; i++) {
            if (y <= x && y + 0x20 > x) {
                return (u8)i;
            }
            y -= 0x24;
        }
    }
    return 6;
}

BOOL DonationMenu::moveCursorByPad(u32 pad) {
    u32 old = cursorSlot;
    if (old <= 3) {
        if (MenuKeys_HasLeft(pad)) {
            if (cursorSlot < 3) {
                cursorSlot = *(volatile u8 *)&cursorSlot + 1;
            }
        } else if (MenuKeys_HasRight(pad)) {
            if (cursorSlot != 0) {
                cursorSlot = *(volatile u8 *)&cursorSlot - 1;
            } else {
                cursorSlot = 4;
            }
        } else if (MenuKeys_HasUp(pad)) {
            if (scrollMax > 0) {
                cursorSlot = 5;
            }
        }
    } else {
        switch (old) {
        case 4:
            if (MenuKeys_HasUp(pad)) {
                if (scrollMax > 0) {
                    cursorSlot = 5;
                }
            } else if (MenuKeys_HasLeft(pad)) {
                cursorSlot = 0;
            }
            break;
        case 5:
            if (MenuKeys_HasDown(pad)) {
                cursorSlot = 4;
            } else if (MenuKeys_HasLeft(pad)) {
                cursorSlot = 0;
            }
            break;
        }
    }
    if (old != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

void DonationMenu::setTabFadeLevel(u32 t) {
    MIi_CpuCopy16(basePalette, workPalette, 0x20);
    s32 y = basePalette[7];
    u8 r = y & 0x1f;
    u8 g = (y & 0x3e0) >> 5;
    u8 b = (y & 0x7c00) >> 10;
    s32 n = 3 - t;
    s32 x = basePalette[15];
    r = ((u8)(x & 0x1f) * (s32)t + r * n) / 3;
    g = ((u8)((x & 0x3e0) >> 5) * (s32)t + g * n) / 3;
    b = ((u8)((x & 0x7c00) >> 10) * (s32)t + b * n) / 3;
    workPalette[15] = r | (g << 5) | (b << 10);
    BgVramTask_requestPalette(&vramTasks[2], workPalette, 4, 3);
}

void DonationMenu::updateTabSwitch() {
    switch (tabSwitchState) {
    case 0:
        return;
    case 1:
        if (tabFadeLevel != 0) {
            tabFadeLevel = *(volatile u8 *)&tabFadeLevel - 1;
        } else {
            tabSwitchState = 2;
            setTab(targetTab);
        }
        break;
    case 2:
        if (tabFadeLevel < 3) {
            tabFadeLevel = *(volatile u8 *)&tabFadeLevel + 1;
        } else {
            tabSwitchState = 0;
            return;
        }
        break;
    }
    setTabFadeLevel(tabFadeLevel);
}

BOOL DonationMenu::testFlags(u32 m) {
    if (flags & m) {
        return TRUE;
    }
    return FALSE;
}

void DonationMenu::setFlags(u32 m) { flags = flags | m; }

void DonationMenu::clearFlags(u32 m) { flags = flags & ~m; }

