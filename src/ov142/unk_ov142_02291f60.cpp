// ov142: scene overlay (class CatalogMenu, vtable 0x02294da8, 0x2e10 bytes): item catalog list.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class CatalogMenu;

// Other modules' methods called with the object first (the real symbol is the mangled name).
#define PlayerData_getCatalog _ZN10PlayerData10getCatalogEv
#define func_02133150 _s32_div_f

// ---- main-module classes (copied from src/main) ----
class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(void *src, BOOL a, BOOL b);
    void copy(MsgString *o);
    void clear();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class TextLabel;

class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fa4c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
};

class ItemName : public MsgString {
public:
    ItemName();
    virtual ~ItemName();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL setFromItem(u16 *p);

    /* 0x12 */ u8 unk_12[0x11];
};

// Screen upload helper, 0x24 bytes
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    void requestPalette(u32 a, u8 b, u32 c);
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u32 unk_04[0x20 / 4];
};

class Unk_ov004_02235a0c {
public:
    void func_ov004_02235a2c();
    void func_ov004_02235a54(u16 *p);
};

class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

extern "C" {
extern u8 data_020e416c;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern void *gCurrentHeap;

void func_0206f9c8(Unk_020e0488 *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206ecf8(s32 a);
void Snd_PlaySe(u32 id);
void *func_ov004_02235a04();
s32 Item_TestInfoFlag4(u16 *p);
s32 Item_GetMemberPrice(u16 *p);
s32 Item_TestInfoFlag3(u16 *p);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void MIi_CpuClear16(u32 v, void *dst, s32 n);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
u32 PlayerData_GetCurrent();
s32 Catalog_HasItem(void *a, u16 *b);
s32 _s32_div_f(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e761c(void *p, s32 a, s32 b);
BOOL MenuCtrl_IsTouch();
void func_0206e738(u32 a);
s32 Gfx2d_LoadCharFile(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 Gfx2d_LoadPaletteFile(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 File_LoadToBuffer(const void *src, void *dst, s32 n);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Menu_PlayScrollGrabSe(void *p);
void Menu_PlayScrollTickSe(void *p);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void MenuButtons_LoadTextColors(void *p);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(u32 x);
void Oam_DrawCell(u32 a, const void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, const void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
BOOL MenuCtrl_IsButtons();

// Mangled-name declaration (macro'd above): the object is the first argument.
void *PlayerData_getCatalog(u32 p);
}

// ---- ov002 sub-objects ----
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
    s32 getScreenY();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
    void setPoseRelease();
};

// Same object as MenuCursorBase under the name used by src/ov002
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

class ScrollKnob {
public:
    virtual ~ScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL areAnimsDone();
    void moveTo(s32 a, s32 b);
    u32 unk_04[0x44 / 4];
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();
    s32 getGripY();
    s32 getGripX();
    void updateRelease();
    void release();
    void grab();
    void show();
    BOOL hitTest(s32 x, s32 y);
};

class MenuBottomButtonsBody {
public:
    virtual ~MenuBottomButtonsBody();
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 idx);
    void setLayoutYesNo0C(s32 idx);
    u32 unk_04[0x160 / 4];
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    virtual ~MenuBottomButtons();
    void setLayoutSingle05(s32 idx);
    void drawAt(s32 a);
    void freeTexts();
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
    void setSlideExtent(s32 a);
    void initSlideOut(s32 a, s32 mode);
    void initSlideIn(s32 a, s32 b);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    void restartKeyRepeat();
    BOOL isRepeatRight();
    BOOL isRepeatLeft();
    u32 takeRepeatedKeys();
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

typedef void (CatalogMenu::*Unk_ov142_02294da8_Fn)();

// Vtable 0x02294da8, size 0x2e10
class CatalogMenu : public MenuProc {
public:
    CatalogMenu() : unk_e8(), unk_14c(), unk_194(), unk_2f8(), unk_678() {}

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
    u16 blendColor(s32 x, s32 y, s32 t);
    void scrollByArrow();
    void releaseArrows();
    void pressDownArrow();
    void pressUpArrow();
    void restoreListView();
    void focusSelectedItem();
    void hideScrollBar();
    void showScrollBar();
    void paintScrollBarArea(s32 a);
    void syncKnobToScroll();
    void syncScrollToKnob();
    void updateKnobPosition();
    BOOL finishKnobRelease();
    void moveKnobByKey();
    void releaseKnob();
    void dragKnob(s32 v, BOOL c);
    BOOL tryGrabKnob(s32 x, s32 y);
    BOOL moveCursorByPad(u32 pad);
    void targetTabAtCursor();
    void targetRowOrTab();
    void targetRowOrRight();
    BOOL targetRowAtCursor();
    void targetLeftOfButtons();
    void targetRightOfList();
    void targetScrollAtCursor();
    void targetButtonAtCursor();
    BOOL selectItem(u32 a, s32 b);
    u32 hitTestTarget(s32 x, s32 y);
    BOOL activateTarget(u32 a);
    void uploadListScreen();
    void updateScrollAnimation();
    void setScrollPos(s32 v);
    void flushDirty();
    void composeListScreen();
    u16 *getTabItemPtr(s32 idx);
    s32 getTabOwnedCount();
    s32 getTabTotalCount();
    s32 collectCatalogued(u16 *out, u16 start, s32 n, s32 off);
    s32 collectCataloguedFurniture(u16 *out, u16 start, s32 n, s32 off);
    void buildHeadwearList();
    void buildFossilList();
    void buildGyroidList();
    void buildPaperList();
    void buildUmbrellaList();
    void buildShirtList();
    void buildCarpetList();
    void buildWallpaperList();
    void buildFurnitureList();
    void requestTab(u32 v);
    void setTab(u8 v);
    void clearInfoLabel();
    void drawNotSellingLabel();
    void drawMessageLabel(s32 a, s32 b, s32 c, u8 d, s32 e);
    void drawPriceLabel(s32 a);
    void drawCountLabels();
    void drawItemNames();
    void resetTextLabels();
    Unk_020e0488 *allocTextLabel();
    void releaseCursor();
    void pressCursor();
    void refreshCursor();
    void moveCursorTo(s32 a, s32 b);
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void startQuit();
    void startOrderConfirm();
    void beginClose();
    void resumeConfirmInput();
    void startConfirmButtons();
    void startConfirmTouch();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateBarTransition();
    void cancelOrderConfirm();
    void confirmOrder();
    void updateConfirmButtons();
    void updateConfirmTouch();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateArrowKeys();
    void updateKnobKeysEnd();
    void updateKnobKeys();
    void updateButtons();
    void updateArrowTouch();
    void updateTrackTouch();
    void updateKnobTouch();
    void updateTouch();
    void loadObjGfx();
    void loadBgGfx();
    void postStateUpdate();
    void preStateUpdate();
    void preInputUpdate();
    void releaseResources();
    void initCatalog();
    void updateLayerSlide();
    void stateDialogBack();
    void stateDialogClose();
    void stateDialog();
    void stateDialogOpen();
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
    /* 0x0b4 */ s16 unk_b4;
    /* 0x0b6 */ u16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ s16 unk_c4[9];
    /* 0x0d6 */ s16 unk_d6[9];
    /* 0x0e8 */ MenuCursorBuf0 unk_e8;
    /* 0x14c */ MenuScrollKnob unk_14c;
    /* 0x194 */ MenuBottomButtons unk_194;
    /* 0x2f8 */ Unk_020e0488 unk_2f8[14];
    /* 0x678 */ BgVramTask unk_678[4];
    /* 0x708 */ u16 unk_708[0x800 / 2];
    /* 0xf08 */ u16 unk_f08[0x88 / 2];
    /* 0xf90 */ u16 unk_f90[0x88 / 2];
    /* 0x1018 */ u16 unk_1018[0x200 / 2];
    /* 0x1218 */ u16 unk_1218[0x40 / 2];
    /* 0x1258 */ u16 unk_1258[0x140 / 2];
    /* 0x1398 */ u16 unk_1398[0x80 / 2];
    /* 0x1418 */ u16 unk_1418[0xfe / 2];
    /* 0x1516 */ u16 unk_1516[0x68 / 2];
    /* 0x157e */ u16 unk_157e[9];
    /* 0x1590 */ u8 unk_1590[0x800];
    /* 0x1d90 */ u8 unk_1d90[0x800];
    /* 0x2590 */ u8 unk_2590[0x800];
    /* 0x2d90 */ u16 unk_2d90[16];
    /* 0x2db0 */ u16 unk_2db0[16];
    /* 0x2dd0 */ u16 unk_2dd0[16];
    /* 0x2df0 */ u16 unk_2df0[16];
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov142_SceneEntry {
    CatalogMenu *(*create)();
    u16 a;
    u16 b;
};

static inline BOOL Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov142_02293b34_IsOne() {
    if (data_020e416c == 1) return TRUE;
    return FALSE;
}

extern "C" CatalogMenu *CatalogMenu_Create();

extern "C" u32 data_ov142_02294d18[2];
extern "C" u32 data_ov142_02294d20[2];
extern "C" u32 data_ov142_02294d28[2];
extern "C" u32 data_ov142_02294d30[2];
extern "C" u32 data_ov142_02294d38[8];
extern "C" u32 data_ov142_02294d58[8];
extern "C" u32 data_ov142_02294d78[10];
extern "C" u32 data_ov142_02294e08[36];
extern "C" void CatalogMenu_SetupBgLayers(CatalogMenu *p);
extern "C" void CatalogMenu_PostInputUpdate(CatalogMenu *p);

extern "C" {
void _ZN11CatalogMenu19updateBarTransitionEv();
void _ZN11CatalogMenu20updateConfirmButtonsEv();
void _ZN11CatalogMenu18updateConfirmTouchEv();
void _ZN11CatalogMenu19updateCursorReleaseEv();
void _ZN11CatalogMenu17updateCursorPressEv();
void _ZN11CatalogMenu16updateCursorMoveEv();
void _ZN11CatalogMenu15updateArrowKeysEv();
void _ZN11CatalogMenu17updateKnobKeysEndEv();
void _ZN11CatalogMenu14updateKnobKeysEv();
void _ZN11CatalogMenu13updateButtonsEv();
void _ZN11CatalogMenu16updateArrowTouchEv();
void _ZN11CatalogMenu16updateTrackTouchEv();
void _ZN11CatalogMenu15updateKnobTouchEv();
void _ZN11CatalogMenu11updateTouchEv();
void _ZN11CatalogMenu15stateDialogBackEv();
void _ZN11CatalogMenu16stateDialogCloseEv();
void _ZN11CatalogMenu11stateDialogEv();
void _ZN11CatalogMenu15stateDialogOpenEv();
void _ZN11CatalogMenu12stateClosingEv();
void _ZN11CatalogMenu10stateCloseEv();
void _ZN11CatalogMenu12stateOpeningEv();
void _ZN11CatalogMenu9stateOpenEv();
}
extern "C" void *data_ov142_02294c60[2];
extern "C" void *data_ov142_02294c68[2];
extern "C" void *data_ov142_02294c70[2];
extern "C" void *data_ov142_02294c78[2];
extern "C" void *data_ov142_02294c80[2];
extern "C" void *data_ov142_02294c90[2];
extern "C" void *data_ov142_02294c98[2];
extern "C" void *data_ov142_02294ca0[2];
extern "C" void *data_ov142_02294ca8[2];
extern "C" void *data_ov142_02294cb0[2];
extern "C" void *data_ov142_02294cb8[2];
extern "C" void *data_ov142_02294cc0[2];
extern "C" void *data_ov142_02294cc8[2];
extern "C" void *data_ov142_02294cd0[2];
extern "C" void *data_ov142_02294cd8[2];
extern "C" void *data_ov142_02294ce0[2];
extern "C" void *data_ov142_02294ce8[2];
extern "C" void *data_ov142_02294cf0[2];
extern "C" void *data_ov142_02294cf8[2];
extern "C" void *data_ov142_02294d00[2];
extern "C" void *data_ov142_02294d08[2];
extern "C" void *data_ov142_02294d10[2];


extern "C" CatalogMenu *CatalogMenu_Create() { return new CatalogMenu(); }

BOOL CatalogMenu::vfunc_00() {
    initCatalog();
    unk_8c = 0;
    setPhase(0);
    return TRUE;
}

BOOL CatalogMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent())->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL CatalogMenu::onDraw() {
    s32 y;
    s32 t;
    s32 d;
    s32 i;
    s32 j;
    s32 x;
    s32 pal;
    if (MenuCtrl_IsButtons()) {
        unk_e8.drawWrapped();
    }
    if (!testFlags(1)) {
        return FALSE;
    }
    unk_194.drawAt(unk_98);
    y = unk_94 + 0x60;
    if (!testFlags(0x100)) {
        MenuScrollKnob *p = &unk_14c;
        p->vfunc_08();
        t = testFlags(0x800) ? 9 : 8;
        x = y;
        if (testFlags(0x2000)) x = y + 2;
        func_02088730(1, data_ov142_02294d18, 0x80, x, t, 1, 0);
        t = testFlags(0x400) ? 9 : 8;
        x = y;
        if (testFlags(0x1000)) x = y + 2;
        func_02088730(1, data_ov142_02294d28, 0x80, x, t, 1, 0);
        func_02088730(1, data_ov142_02294d20, 0x80, y, -1, 1, 0);
        func_02088730(1, data_ov142_02294d30, 0x80, y, -1, 1, 0);
    }
    x = 0x10;
    for (i = 0; i < 9; i++, x -= 2) {
        if (i == unk_bd) {
            pal = 6;
        } else {
            pal = 7;
        }
        func_02088730(1, (u8 *)data_ov142_02294e08 + x * 8, 0x80, y, pal, 1, 0);
        func_02088730(1, (u8 *)data_ov142_02294e08 + (x + 1) * 8, 0x80, y, pal, 1, 0);
    }
    Oam_DrawCell(1, data_ov142_02294d38, 0x80, y, unk_bf, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    x = y - (unk_9c & 0xf);
    getTabOwnedCount();
    d = -1;
    if (unk_bc == unk_be) {
        d = unk_b8 - unk_b4;
        if (d < 0 || d >= 9) {
            d = -1;
        }
    }
    i = unk_b4;
    for (j = 0; j < 9; i++, x += 0x10, j++) {
        if (i >= 0 && d == j) {
            Oam_DrawCell(1, data_ov142_02294d78, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, data_ov142_02294d58, 0x80, x, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
    return TRUE;
}

extern "C" void *data_ov142_02294d00[2] = {(void *)_ZN11CatalogMenu15stateDialogOpenEv, 0};
extern "C" void *data_ov142_02294c70[2] = {(void *)_ZN11CatalogMenu13updateButtonsEv, 0};
extern "C" void *data_ov142_02294ce0[2] = {(void *)_ZN11CatalogMenu17updateCursorPressEv, 0};
extern "C" void *data_ov142_02294c98[2] = {(void *)_ZN11CatalogMenu15updateArrowKeysEv, 0};
extern "C" void *data_ov142_02294c68[2] = {(void *)_ZN11CatalogMenu19updateBarTransitionEv, 0};
extern "C" void *data_ov142_02294ce8[2] = {(void *)_ZN11CatalogMenu15stateDialogBackEv, 0};
extern "C" u32 data_ov142_02294d58[8] = {0x401440cd, 0x00008908, 0x41f840cd, 0x00008908,
                                         0x41d840cd, 0x00008908, 0x41b840cd, 0xffff8908};
extern "C" u32 data_ov142_02294d30[2] = {0x403800bb, 0xffff110e};
extern "C" u32 data_ov142_02294d28[2] = {0x403800b9, 0x0000910e};
extern "C" u32 data_ov142_02294d78[10] = {0x41b800bc, 0x0000890c, 0x401440cd, 0x00008928, 0x41f840cd,
                                          0x00008928, 0x41d840cd, 0x00008928, 0x41b840cd, 0xffff8928};
extern "C" u32 data_ov142_02294d18[2] = {0x40380035, 0x00008110};
extern "C" void *data_ov142_02294d10[2] = {(void *)_ZN11CatalogMenu10stateCloseEv, 0};
extern "C" void *data_ov142_02294d08[2] = {(void *)_ZN11CatalogMenu12stateClosingEv, 0};
extern "C" u32 data_ov142_02294e08[36] = {
    0x41820038, 0x000074d5, 0x01928038, 0x000074d7, 0x41820028, 0x000074d2, 0x01928028, 0x000074d4, 0x41820018,
    0x000074cf, 0x01928018, 0x000074d1, 0x41820008, 0x000074d8, 0x01928008, 0x000074da, 0x418200f8, 0x000074cc,
    0x019280f8, 0x000074ce, 0x418200e8, 0x000074c9, 0x019280e8, 0x000074cb, 0x418200d8, 0x000074c6, 0x019280d8,
    0x000074c8, 0x418200c8, 0x000074c3, 0x019280c8, 0x000074c5, 0x418200b8, 0x000064c0, 0x019280b8, 0xffff64c2};
extern "C" void *data_ov142_02294cf8[2] = {(void *)_ZN11CatalogMenu11stateDialogEv, 0};
extern "C" void *data_ov142_02294cf0[2] = {(void *)_ZN11CatalogMenu16stateDialogCloseEv, 0};
extern "C" void *data_ov142_02294c90[2] = {(void *)_ZN11CatalogMenu16updateCursorMoveEv, 0};

BOOL CatalogMenu::execTransition() {
    static Unk_ov142_02294da8_Fn tbl[8] = {
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cd8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c60,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d10,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d08,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294d00,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cf8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cf0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ce8};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

extern "C" void *data_ov142_02294cd0[2] = {(void *)_ZN11CatalogMenu11updateTouchEv, 0};
extern "C" void *data_ov142_02294cc8[2] = {(void *)_ZN11CatalogMenu15updateKnobTouchEv, 0};
extern "C" void *data_ov142_02294cb8[2] = {(void *)_ZN11CatalogMenu18updateConfirmTouchEv, 0};
extern "C" void *data_ov142_02294c60[2] = {(void *)_ZN11CatalogMenu12stateOpeningEv, 0};
extern "C" void *data_ov142_02294cb0[2] = {(void *)_ZN11CatalogMenu20updateConfirmButtonsEv, 0};
extern "C" u32 data_ov142_02294d20[2] = {0x40380037, 0x00001110};
extern "C" void *data_ov142_02294ca0[2] = {(void *)_ZN11CatalogMenu17updateKnobKeysEndEv, 0};

void CatalogMenu::runMainState() {
    static Unk_ov142_02294da8_Fn tbl[14] = {
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cd0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cc8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c78,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cc0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c70,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ca8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ca0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c98,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c90,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294ce0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c80,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cb8,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294cb0,
        *(Unk_ov142_02294da8_Fn *)data_ov142_02294c68};
    (this->*tbl[unk_8d])();
}

BOOL CatalogMenu::execMain() {
    preInputUpdate();
    runMainState();
    CatalogMenu_PostInputUpdate(this);
    return TRUE;
}

BOOL CatalogMenu::execPhase3() { return TRUE; }

BOOL CatalogMenu::execPhase4() { return TRUE; }

BOOL CatalogMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void CatalogMenu::stateOpen() {
    CatalogMenu_SetupBgLayers(this);
    loadBgGfx();
    setTab(0);
    loadObjGfx();
    beginSubSlideIn(0xa, 4, 0, 0x18);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    unk_194.setLayoutSingle05(0x65);
    setTransitionState(1);
}

void CatalogMenu::stateOpening() {
    if (!testFlags(1)) {
        setFlags(1);
        drawMessageLabel(0xb8, 0x16d, 4, 0xf, 0);
        clearInfoLabel();
    }
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void CatalogMenu::stateClose() {
    ((MenuLauncher *)ProcBase_GetParent())->setNextRequest(0x44, 1);
    beginSubSlideOut(0xa, 0, 0, 0x18);
    updateLayerSlide();
    setTransitionState(3);
}

void CatalogMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void CatalogMenu::stateDialogOpen() {
    if (stepSlideOut(-1)) {
        setTransitionState(5);
        initSlideIn(0, 0);
        unk_194.setLayoutYesNo0C(0x22);
    }
    unk_98 = getSlideOffsetY();
}

void CatalogMenu::stateDialog() {
    if (stepSlideIn(-1)) {
        resumeConfirmInput();
        setPhase(2);
    }
    unk_98 = getSlideOffsetY();
}

void CatalogMenu::stateDialogClose() {
    if (stepSlideOut(-1)) {
        setTransitionState(7);
        initSlideIn(0, 0);
        unk_194.setLayoutSingle05(0x65);
    }
    unk_98 = getSlideOffsetY();
}

void CatalogMenu::stateDialogBack() {
    if (stepSlideIn(-1)) {
        resumeInput();
        setPhase(2);
    }
    unk_98 = getSlideOffsetY();
}

// ---- 0x022944c8 ----
void CatalogMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0x20 - unk_9c);
    unk_94 = getSlideOffsetY();
    unk_98 = unk_94;
    updateKnobPosition();
}

void CatalogMenu::initCatalog() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_c4[i] = 0;
        unk_d6[i] = 0;
    }
    i = 0;
    for (; i < 9; i++) {
        unk_157e[i] = 0xfff1;
    }
    unk_b6 = 0;
    unk_bc = 9;
    unk_c1 = 3;
    unk_c2 = 0;
    selectItem(9, -1);
    buildFurnitureList();
    buildWallpaperList();
    buildCarpetList();
    buildShirtList();
    buildUmbrellaList();
    buildPaperList();
    buildHeadwearList();
    buildGyroidList();
    buildFossilList();
    unk_14c.show();
}

void CatalogMenu::releaseResources() {
    resetTextLabels();
    unk_194.freeTexts();
    unk_678[0].cancel();
    unk_678[1].cancel();
    unk_678[2].cancel();
    unk_678[3].cancel();
}

void CatalogMenu::preInputUpdate() {
    preStateUpdate();
    unk_e8.vfunc_0c();
}

extern "C" void CatalogMenu_PostInputUpdate(CatalogMenu *p) { p->postStateUpdate(); }

void CatalogMenu::preStateUpdate() {
    unk_678[0].cancel();
    unk_678[1].cancel();
    unk_678[2].cancel();
    unk_678[3].cancel();
    resetTextLabels();
    unk_194.freeTexts();
    unk_14c.vfunc_0c();
}

void CatalogMenu::postStateUpdate() {
    updateTabSwitch();
    updateScrollAnimation();
    flushDirty();
    unk_14c.updateRelease();
}

extern "C" void CatalogMenu_SetupBgLayers(CatalogMenu *) {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 1);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 2);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void CatalogMenu::loadBgGfx() {
    void *h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/catalog/bg0.bch", h, 6, 0x11, 0x11, 0x51);
    Gfx2d_LoadCharFile("menu/catalog/bg1.bch", h, 6, 0x156, 0x156, 0x174);
    Gfx2d_LoadPaletteFile("menu/catalog/bg.bpl", h, 6, 1, 1, 5);
    File_LoadToBuffer("menu/catalog/bg_3.bpl", unk_2d90, 0x20);
    File_LoadToBuffer("menu/catalog/bg_4.bpl", unk_2dd0, 0x20);
    File_LoadToBuffer("menu/catalog/b_bg.bsc", unk_1590, 0x800);
    File_LoadToBuffer("menu/catalog/a_bg.bsc", unk_2590, 0x800);
}

void CatalogMenu::loadObjGfx() {
    MenuButtons_LoadTextColors(&unk_194);
    void *h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/catalog/obj0.bch", h, 8, 0xc0, 0xc0, 0x11f);
    Gfx2d_LoadCharFile("menu/catalog/obj1.bch", h, 8, 0x120, 0x120, 0x17f);
    Gfx2d_LoadPaletteFile("menu/catalog/obj.bpl", h, 8, 4, 4, 9);
}

void CatalogMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Both()) {
        s32 x = gTouchCurX;
        s32 y = gTouchCurY;
        s32 r = hitTestTarget(x, y);
        if (r != 0x19) {
            activateTarget(r);
            return;
        }
        if (testFlags(0x100)) {
            return;
        }
        if (tryGrabKnob(x, y)) {
            setMainState(1);
            return;
        }
        if (x < 0xb8 || x >= 0xc8) {
            return;
        }
        if (!testFlags(0x400) && y >= 0x19 && y < 0x29) {
            pressUpArrow();
            setMainState(3);
            return;
        }
        if (!testFlags(0x800) && y >= 0x95 && y < 0xa5) {
            pressDownArrow();
            setMainState(3);
            return;
        }
        if (y >= 0x2c && y <= 0x86) {
            unk_14c.grab();
            setMainState(2);
        }
    }
}

void CatalogMenu::updateKnobTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 0);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void CatalogMenu::updateTrackTouch() {
    if (gTouchHeld != 0) {
        dragKnob(gTouchCurY, 1);
    } else {
        releaseKnob();
        setMainState(0);
    }
}

void CatalogMenu::updateArrowTouch() {
    if (gTouchHeld != 0) {
        scrollByArrow();
    } else {
        releaseArrows();
        setMainState(0);
    }
}

void CatalogMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    if (moveCursorByPad(takeRepeatedKeys())) {
        moveCursorToTarget();
        return;
    }
    u32 k = gPad[1];
    if (k & 1) {
        pressCursor();
    } else if (k & 2) {
        hideCursor();
        startQuit();
    } else if (k & 8) {
        if (testFlags(0x20)) {
            hideCursor();
            startOrderConfirm();
        }
    }
}

void CatalogMenu::updateKnobKeys() {
    if (gPad[0] & 1) {
        moveKnobByKey();
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        unk_e8.warpTo(a, b);
    } else {
        releaseKnob();
        setMainState(6);
    }
}

void CatalogMenu::updateKnobKeysEnd() {
    if (finishKnobRelease()) {
        setMainState(4);
        releaseCursor();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_e8.warpTo(a, b);
}

void CatalogMenu::updateArrowKeys() {
    if (gPad[0] & 1) {
        scrollByArrow();
    } else {
        releaseArrows();
        setMainState(4);
        releaseCursor();
    }
}

void CatalogMenu::updateCursorMove() {
    if (!unk_e8.isMoving()) {
        setMainState(unk_ba);
        runMainState();
    }
}

void CatalogMenu::updateCursorPress() {
    if (unk_e8.isAnimDone()) {
        if (!activateTarget(unk_c0)) {
            setMainState(4);
            releaseCursor();
        }
    }
}

void CatalogMenu::updateCursorRelease() {
    if (unk_e8.isAnimDone()) {
        refreshCursor();
        setMainState(unk_ba);
    }
}

void CatalogMenu::updateConfirmTouch() {
    if (checkSwitchToButtons(1)) {
        startConfirmButtons();
        return;
    }
    if (Both()) {
        if (unk_194.isTouched(3)) {
            confirmOrder();
        } else if (unk_194.isTouched(4)) {
            cancelOrderConfirm();
        }
    }
}

void CatalogMenu::updateConfirmButtons() {
    u8 old;
    if (checkSwitchToTouch()) {
        startConfirmTouch();
        return;
    }
    old = unk_c0;
    takeRepeatedKeys();
    if (isRepeatLeft()) {
        unk_c0 = 0x17;
    } else if (isRepeatRight()) {
        unk_c0 = 0x18;
    }
    if (old != unk_c0) {
        moveCursorToTarget();
        return;
    }
    {
        u32 k = gPad[1];
        if (k & 1) {
            pressCursor();
            return;
        }
        if (k & 8) {
            hideCursor();
            confirmOrder();
        }
    }
    if (gPad[1] & 2) {
        hideCursor();
        cancelOrderConfirm();
    }
}

void CatalogMenu::confirmOrder() {
    Snd_PlaySe(0x29);
    unk_194.setSelected(3);
    setMainState(0xd);
    func_0206ecf8(1);
    func_0206e738(*getTabItemPtr(unk_b8));
    beginClose();
}

void CatalogMenu::cancelOrderConfirm() {
    Snd_PlaySe(0x2a);
    unk_194.setSelected(4);
    unk_8c = 6;
    initSlideOut(0, 0);
    setMainState(0xd);
    setFlags(0x80);
    unk_c0 = 0x12;
    unk_bf = 5;
    restoreListView();
}

void CatalogMenu::updateBarTransition() {
    if (unk_194.stepPress()) {
        if (unk_e8.getAnim()) {
            s32 a = unk_194.getPressOffset();
            s32 b = unk_194.getTargetX(-1);
            s32 c = unk_194.getTargetY(-1);
            unk_e8.warpTo(a + b, a + c);
        }
    } else {
        hideCursor();
        setPhase(1);
    }
}

void CatalogMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void CatalogMenu::startButtonInput() {
    if (testFlags(0x80)) {
        clearFlags(0x80);
    } else {
        unk_c0 = 0;
    }
    showCursor();
    restartKeyRepeat();
    setMainState(4);
}

void CatalogMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
    clearFlags(0x80);
}

void CatalogMenu::startConfirmTouch() {
    hideCursor();
    setMainState(0xb);
}

void CatalogMenu::startConfirmButtons() {
    unk_c0 = 0x18;
    showCursor();
    restartKeyRepeat();
    setMainState(0xc);
}

void CatalogMenu::resumeConfirmInput() {
    if (MenuCtrl_IsTouch()) {
        startConfirmTouch();
    } else {
        startConfirmButtons();
    }
}

void CatalogMenu::beginClose() {
    setTransitionState(2);
    if (Unk_ov142_02293b34_IsOne()) {
        if (testFlags(0x40)) {
            clearFlags(0x40);
            ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a2c();
        }
    }
}

void CatalogMenu::startOrderConfirm() {
    unk_bf = 7;
    hideCursor();
    setTransitionState(4);
    setPhase(1);
    initSlideOut(0, 0);
    focusSelectedItem();
    Snd_PlaySe(0x59);
}

void CatalogMenu::startQuit() {
    func_0206ecf8(0);
    unk_194.setSelected(6);
    setMainState(0xd);
    beginClose();
}

void CatalogMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    unk_e8.warpTo(a, b);
    ((MenuCursor *)&unk_e8)->setAnimIfChanged(1);
    refreshCursor();
}

s32 CatalogMenu::getCursorTargetX() {
    u32 c = unk_c0;
    if (c <= 8) {
        return 0x17;
    }
    if (c >= 9 && c <= 0x11) {
        return 0x40;
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.getTargetX(6);
    case 0:
        return 0xe8;
    case 2:
        return unk_14c.getGripX();
    case 5:
        return unk_194.getTargetX(3);
    case 6:
        return unk_194.getTargetX(4);
    case 3:
    case 4:
        return 0xc0;
    default:
        return 0x80;
    }
}

s32 CatalogMenu::getCursorTargetY() {
    u32 c = unk_c0;
    if (c <= 8) {
        return c * 16 + 0x1f;
    }
    if (c >= 9 && c <= 0x11) {
        return (c - 9) * 16 + 0x28 - (unk_a0 & 0xf);
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.getTargetY(6);
    case 0:
        return 0x57;
    case 2:
        return unk_14c.getGripY();
    case 5:
        return unk_194.getTargetY(3);
    case 6:
        return unk_194.getTargetY(4);
    case 3:
        return 0x23;
    case 4:
        return 0x9b;
    default:
        return 0x60;
    }
}

void CatalogMenu::hideCursor() {
    ((MenuCursor *)&unk_e8)->setAnimIfChanged(0);
    unk_e8.vfunc_0c();
}

void CatalogMenu::moveCursorToTarget() {
    u32 c = unk_c0;
    if (c == 0x13 || (c >= 9 && c <= 0x11)) {
        ((MenuCursor *)&unk_e8)->switchToAnim07();
    } else {
        ((MenuCursor *)&unk_e8)->switchToAnim01();
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    moveCursorTo(a, b);
}

void CatalogMenu::moveCursorTo(s32 a, s32 b) {
    unk_e8.moveToEase(a, b, 3, 1);
    unk_ba = unk_8d;
    setMainState(8);
}

void CatalogMenu::refreshCursor() {
    unk_e8.setPoseIdle();
    unk_e8.vfunc_0c();
}

void CatalogMenu::pressCursor() {
    ((MenuCursor *)&unk_e8)->setPosePress();
    setMainState(9);
}

void CatalogMenu::releaseCursor() {
    unk_e8.setPoseRelease();
    unk_ba = unk_8d;
    setMainState(10);
}

Unk_020e0488 *CatalogMenu::allocTextLabel() {
    if (*(volatile u8 *)&unk_bb >= 14) {
        return &unk_2f8[13];
    }
    *(volatile u8 *)&unk_bb = *(volatile u8 *)&unk_bb + 1;
    return &unk_2f8[*(volatile u8 *)&unk_bb - 1];
}

void CatalogMenu::resetTextLabels() {
    s32 i = 0;
    unk_bb = 0;
    Unk_020e0488 *w = unk_2f8;
    for (; i < 14; i++) {
        (w + i)->func_0206fc44();
    }
}

void CatalogMenu::drawItemNames() {
    ItemName buf;
    s32 i;
    Unk_020e0488 *w;
    s32 cnt;
    s32 z4 = 0, z1 = 0, z2 = 0, z3 = 0;
    s32 cur = unk_b4;
    u16 *list = getTabItemPtr(cur);
    s32 col = (cur + 9) % 9;
    cnt = getTabOwnedCount();
    for (i = 0; i < 9; i++) {
        w = (Unk_020e0488 *)z4;
        if (cur < 0 || cur >= cnt) {
            unk_157e[col] = 0xfff1;
            w = allocTextLabel();
            w->clear();
        } else {
            if (*list != unk_157e[col]) {
                unk_157e[col] = *list;
                w = allocTextLabel();
                u16 id = *list;
                buf.setFromItem(&id);
                w->copy(&buf);
            }
            list++;
        }
        if (w) {
            w->func_0206fb9c(4, col * 26 + 0x52, 0xd, 0xf, 8, z1);
            w->func_0206fab4(z2, z2);
        }
        cur++;
        col++;
        if (col >= 9) col = z3;
    }
}

void CatalogMenu::drawCountLabels() {
    Unk_020e0488 *w = allocTextLabel();
    func_0206f9c8(w, getTabOwnedCount(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x156, 3, 0xe, 4, 0);
    w->func_0206fa4c();
    w = allocTextLabel();
    func_0206f9c8(w, getTabTotalCount(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x15a, 3, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void CatalogMenu::drawPriceLabel(s32 a) {
    Unk_020e0488 *w = allocTextLabel();
    func_0206f9c8(w, a, 8, 1, 0, 1);
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 1);
    w->func_0206fa4c();
}

void CatalogMenu::drawMessageLabel(s32 a, s32 b, s32 c, u8 d, s32 e) {
    Unk_020e0488 *w = allocTextLabel();
    func_0206f9fc(w, a);
    w->func_0206fb9c(6, b, c, d, 4, 0);
    w->func_0206fab4(e, 0);
}

void CatalogMenu::drawNotSellingLabel() {
    drawMessageLabel(0x53, 0x15d, 8, 0xe, 1);
}

void CatalogMenu::clearInfoLabel() {
    Unk_020e0488 *w = allocTextLabel();
    w->clear();
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void CatalogMenu::setTab(u8 v) {
    if (unk_bc != v) {
        unk_bc = v;
        unk_bd = v;
        unk_a4 = (getTabOwnedCount() - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        setScrollPos(0);
        unk_a0 = 0;
        syncKnobToScroll();
        if (unk_a4 == 0) {
            hideScrollBar();
        } else {
            showScrollBar();
        }
        updateKnobPosition();
        setFlags(8);
    }
}

void CatalogMenu::requestTab(u32 v) {
    if (v != unk_bd) {
        unk_bd = v;
        unk_c2 = 1;
    }
}

void CatalogMenu::buildFurnitureList() {
    s32 n = 0;
    u32 cur;
    u16 id;
    u32 h;
    s32 i;
    unk_c4[0] = 0;
    unk_d6[0] = 0;
    cur = 0x3000;
    id = 0xfff1;
    h = PlayerData_GetCurrent();
    for (i = 0; i < 0x6e9; i++) {
        BOOL r;
        id = cur;
        r = FALSE;
        u32 v = id;
        if (*(volatile u16 *)&id >= 0x45dc && v <= 0x47d7) r = TRUE;
        if (r) goto next;
        r = (v >= 0x4384 && v <= 0x4463) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x42a4 && v <= 0x4383) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3e24 && v <= 0x3ea3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3984 && v <= 0x3d83) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x450c && v <= 0x45db) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3fa4 && v <= 0x40a3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x4124 && v <= 0x4223) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x40a4 && v <= 0x4123) ? TRUE : FALSE;
        if (r) goto next;
        if (Item_TestInfoFlag3(&id)) {
            unk_d6[0] = unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(h), &id)) {
                *(u16 *)((u8 *)this + n * 2 + 0x708) = cur;
                n++;
            }
        }
    next:
        cur = (u16)(cur + 4);
    }
    unk_c4[0] = n;
}

void CatalogMenu::buildWallpaperList() {
    unk_d6[1] = 0;
    unk_c4[1] = collectCatalogued(unk_f08, 0x1100, 0x44, 1);
}

void CatalogMenu::buildCarpetList() {
    unk_d6[2] = 0;
    unk_c4[2] = collectCatalogued(unk_f90, 0x1144, 0x44, 2);
}

void CatalogMenu::buildShirtList() {
    unk_d6[3] = 0;
    unk_c4[3] = collectCataloguedFurniture(unk_1018, 0x3984, 0x100, 3);
}

void CatalogMenu::buildUmbrellaList() {
    unk_d6[4] = 0;
    unk_c4[4] = collectCataloguedFurniture(unk_1218, 0x3e24, 0x20, 4);
}

void CatalogMenu::buildPaperList() {
    unk_d6[6] = 0;
    unk_c4[6] = collectCataloguedFurniture(unk_1398, 0x1003, 0x40, 6);
}

void CatalogMenu::buildGyroidList() {
    unk_d6[7] = 0;
    unk_c4[7] = collectCataloguedFurniture(unk_1418, 0x45dc, 0x7f, 7);
}

void CatalogMenu::buildFossilList() {
    *(u16 *)((u8 *)this + 0xe6) = 0;
    s32 n = collectCataloguedFurniture(unk_1516, 0x450c, 0x34, 8);
    *(u16 *)((u8 *)this + 0xd4) = n;
}

void CatalogMenu::buildHeadwearList() {
    *(u16 *)((u8 *)this + 0xe0) = 0;
    s32 a = collectCataloguedFurniture(unk_1258, 0x3fa4, 0x40, 5);
    s32 b = collectCataloguedFurniture(unk_1258 + a, 0x40a4, 0x20, 5);
    a += b;
    s32 c = collectCataloguedFurniture(unk_1258 + a, 0x4124, 0x40, 5);
    *(u16 *)((u8 *)this + 0xce) = a + c;
}

s32 CatalogMenu::collectCataloguedFurniture(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    u32 p = PlayerData_GetCurrent();
    u16 tmp = 0xfff1;
    s32 i = 0;
    CatalogMenu *q = (CatalogMenu *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (Item_TestInfoFlag3(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 4;
    }
    return cnt;
}

s32 CatalogMenu::collectCatalogued(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    u16 tmp = 0xfff1;
    u32 p = PlayerData_GetCurrent();
    s32 i = 0;
    CatalogMenu *q = (CatalogMenu *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (Item_TestInfoFlag3(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (Catalog_HasItem(PlayerData_getCatalog(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 1;
    }
    return cnt;
}

s32 CatalogMenu::getTabTotalCount() {
    return unk_d6[unk_bc];
}

s32 CatalogMenu::getTabOwnedCount() {
    return unk_c4[unk_bc];
}

extern "C" Unk_ov142_SceneEntry sCatalogMenuProfile = {CatalogMenu_Create, 0xb7, 0xbb};
extern "C" void *data_ov142_02294c80[2] = {(void *)_ZN11CatalogMenu19updateCursorReleaseEv, 0};
extern "C" void *data_ov142_02294cc0[2] = {(void *)_ZN11CatalogMenu16updateArrowTouchEv, 0};
extern "C" void *data_ov142_02294ca8[2] = {(void *)_ZN11CatalogMenu14updateKnobKeysEv, 0};

u16 *CatalogMenu::getTabItemPtr(s32 idx) {
    static u16 *tbl[9] = {
        (u16 *)((u8 *)this + 0x708), (u16 *)((u8 *)this + 0xf08), (u16 *)((u8 *)this + 0xf90),
        (u16 *)((u8 *)this + 0x1018), (u16 *)((u8 *)this + 0x1218), (u16 *)((u8 *)this + 0x1258),
        (u16 *)((u8 *)this + 0x1398), (u16 *)((u8 *)this + 0x1418), (u16 *)((u8 *)this + 0x1516)
    };
    if (idx < 0) {
        idx = 0;
    }
    return tbl[unk_bc] + idx;
}

void CatalogMenu::composeListScreen() {
    s32 a = unk_b4;
    s32 i = (a + 9) % 9;
    s32 j = a & 0xf;
    volatile u16 fill = 0x10;
    MIi_CpuClear16(fill, unk_1d90, 0x800);
    s32 z = 0;
    for (s32 n = 0; n < 9; n++) {
        MIi_CpuCopy16((u8 *)this + 0x1590 + i * 0x80, unk_1d90 + j * 0x80, 0x80);
        i++;
        if (i >= 9) {
            i = z;
        }
        j = (j + 1) & 0xf;
    }
    setFlags(2);
}

void CatalogMenu::flushDirty() {
    if (testFlags(2)) {
        uploadListScreen();
    }
    if (testFlags(0x10)) {
        if (unk_678[1].requestScreen((u32)unk_2590, 6, 0x800, 0)) {
            clearFlags(0x10);
        }
    }
    if (testFlags(4)) {
        clearFlags(4);
        drawItemNames();
    }
    if (testFlags(8)) {
        clearFlags(8);
        drawCountLabels();
    }
}

void CatalogMenu::setScrollPos(s32 v) {
    clearFlags(0xc00);
    if (v <= 0) {
        setFlags(0x400);
    }
    if (v >= unk_a4) {
        setFlags(0x800);
    }
    unk_9c = v;
    Gfx2d_SetLayerOffset(4, 0, unk_9c - 0x20);
    unk_b4 = v >> 4;
    composeListScreen();
    setFlags(4);
}

void CatalogMenu::updateScrollAnimation() {
    s32 a = unk_a0;
    if (unk_9c != a) {
        if (unk_9c > a) {
            unk_9c = unk_9c - 6;
            if (unk_9c < unk_a0) {
                unk_9c = unk_a0;
            }
        } else {
            unk_9c = unk_9c + 6;
            if (unk_9c > unk_a0) {
                unk_9c = unk_a0;
            }
        }
        setScrollPos(unk_9c);
        syncKnobToScroll();
    }
}

void CatalogMenu::uploadListScreen() {
    s32 v;
    if (testFlags(0x200)) {
        v = 5;
    } else {
        v = 3;
    }
    func_0206ee80(unk_1d90, 0, 0, 0x1f, 0x1f, v);
    if (unk_bc == unk_be) {
        s32 b = unk_b8;
        s32 d = b - unk_b4;
        if (d >= 0 && d < 9) {
            s32 m = (b & 0xf) * 2;
            func_0206ee80(unk_1d90, 0, m, 0x1f, m + 1, 4);
        }
    }
    if (unk_678[0].requestScreen((u32)unk_1d90, 4, 0x800, 0)) {
        clearFlags(2);
    }
}

BOOL CatalogMenu::activateTarget(u32 a) {
    switch (a) {
    case 0x13:
        startQuit();
        return TRUE;
    case 0x12:
        if (testFlags(0x20)) {
            startOrderConfirm();
            return TRUE;
        }
        return FALSE;
    case 0x14:
        unk_14c.grab();
        Menu_PlayScrollGrabSe(&unk_14c);
        setMainState(5);
        return TRUE;
    case 0x17:
        confirmOrder();
        return TRUE;
    case 0x18:
        cancelOrderConfirm();
        return TRUE;
    case 0x15:
        if (testFlags(0x400)) {
            return FALSE;
        }
        pressUpArrow();
        setMainState(7);
        return TRUE;
    case 0x16:
        if (testFlags(0x800)) {
            return FALSE;
        }
        pressDownArrow();
        setMainState(7);
        return TRUE;
    default:
        break;
    }
    if (a <= 8) {
        if (unk_bd != a) {
            Snd_PlaySe(0xc);
            requestTab((u8)a);
        }
        return FALSE;
    }
    if (a >= 9 && a <= 0x11) {
        if (unk_c2 != 0) {
            return FALSE;
        }
        if (selectItem(unk_bc, (s16)(unk_b4 + (a - 9)))) {
            Snd_PlaySe(0x29);
        }
    }
    return FALSE;
}

u32 CatalogMenu::hitTestTarget(s32 x, s32 y) {
    if (unk_194.isTouched(6)) {
        return 0x13;
    }
    if (testFlags(0x20)) {
        if (x >= 0xc4 && x < 0xe8 && y >= 0x4d && y < 0x71) {
            return 0x12;
        }
    }
    if (x <= 0x1b) {
        if (y >= 0x18 && y < 0xa8) {
            return (u8)((y - 0x18) >> 4);
        }
        return 0x19;
    }
    if (x >= 0x38 && x <= 0x9c) {
        if (y >= 0x20 && y < 0xa0) {
            s32 k = (y - (0x20 - (unk_a0 & 0xf))) >> 4;
            if (k >= getTabOwnedCount()) {
                return 0x19;
            }
            return (u8)(k + 9);
        }
        return 0x19;
    }
    return 0x19;
}

BOOL CatalogMenu::selectItem(u32 a, s32 b) {
    BOOL r = TRUE;
    volatile u16 tmp;
    if (unk_be == a && unk_b8 == b) {
        r = FALSE;
    }
    unk_be = a;
    unk_b8 = b;
    if (b == -1) {
        clearInfoLabel();
        clearFlags(0x20);
        unk_bf = 6;
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            if (testFlags(0x40)) {
                clearFlags(0x40);
                ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a2c();
            }
        }
    } else {
        u16 v = *getTabItemPtr(b);
        tmp = 0xfff1;
        tmp = v;
        if (Item_TestInfoFlag4((u16 *)&tmp)) {
            drawNotSellingLabel();
            unk_bf = 6;
            clearFlags(0x20);
        } else {
            drawPriceLabel(Item_GetMemberPrice((u16 *)&tmp));
            setFlags(0x20);
            unk_bf = 5;
        }
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            setFlags(0x40);
            ((Unk_ov004_02235a0c *)func_ov004_02235a04())->func_ov004_02235a54((u16 *)&tmp);
        }
    }
    setFlags(2);
    return r;
}

void CatalogMenu::targetButtonAtCursor() {
    if (unk_e8.getScreenY() > 0x89) {
        unk_c0 = 0x13;
    } else {
        unk_c0 = 0x12;
    }
}

void CatalogMenu::targetScrollAtCursor() {
    if (unk_e8.getScreenY() < 0x2b) {
        unk_c0 = 0x15;
    } else if (unk_e8.getScreenY() > 0x93) {
        unk_c0 = 0x16;
    } else {
        unk_c0 = 0x14;
    }
}

void CatalogMenu::targetRightOfList() {
    if (unk_a4 == 0) {
        targetButtonAtCursor();
    } else {
        targetScrollAtCursor();
    }
}

void CatalogMenu::targetLeftOfButtons() {
    if (unk_a4 == 0) {
        targetRowOrTab();
    } else {
        targetScrollAtCursor();
    }
}

BOOL CatalogMenu::targetRowAtCursor() {
    s32 n = getTabOwnedCount();
    if (n == 0) {
        return FALSE;
    }
    if (n > 9) {
        n = 9;
    }
    s32 y = unk_e8.getScreenY();
    if (y < 0x20) {
        y = 0x20;
    }
    if (y >= 0xa0) {
        y = 0x9f;
    }
    s32 r = unk_a0 & 0xf;
    s32 k = (y - (0x20 - r)) >> 4;
    if (k >= n) {
        k = n - 1;
    }
    unk_c0 = k + 9;
    if (r != 0) {
        if (k == 0) {
            unk_a0 = unk_a0 - r;
        } else if (k == n - 1) {
            unk_c0 = unk_c0 - 1;
            unk_a0 = unk_a0 + (0x10 - (unk_a0 & 0xf));
        }
    }
    return TRUE;
}

void CatalogMenu::targetRowOrRight() {
    if (targetRowAtCursor() == 0) {
        targetRightOfList();
    }
}

void CatalogMenu::targetRowOrTab() {
    if (targetRowAtCursor() == 0) {
        targetTabAtCursor();
    }
}

void CatalogMenu::targetTabAtCursor() {
    s32 t = unk_e8.getScreenY();
    if ((t & 0xf) == 0) {
        t = t - 1;
    }
    if (t < 0x18) {
        t = 0x18;
    }
    if (t >= 0xa8) {
        t = 0xa7;
    }
    unk_c0 = (t - 0x18) >> 4;
}

BOOL CatalogMenu::moveCursorByPad(u32 pad) {
    u32 old = unk_c0;
    if (pad == 0) {
        return FALSE;
    }
    if (old <= 8) {
        if (MenuKeys_HasRight(pad)) {
            targetRowOrRight();
        } else if (MenuKeys_HasUp(pad)) {
            if (unk_c0 != 0) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (unk_c0 < 8) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            }
        }
    } else if (old >= 9 && old <= 0x11) {
        if (MenuKeys_HasLeft(pad)) {
            targetTabAtCursor();
        } else if (MenuKeys_HasRight(pad)) {
            targetRightOfList();
        } else if (MenuKeys_HasUp(pad)) {
            if (unk_c0 > 9) {
                unk_c0 = *(volatile u8 *)&unk_c0 - 1;
                if (unk_c0 == 9) {
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
            if (unk_a4 == 0) {
                if (unk_c0 < getTabOwnedCount() + 8) {
                    unk_c0 = *(volatile u8 *)&unk_c0 + 1;
                }
            } else if (unk_c0 < 0x10) {
                unk_c0 = *(volatile u8 *)&unk_c0 + 1;
            } else {
                s32 t = unk_a0;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a0 = unk_a0 + (0x10 - r);
                    return TRUE;
                } else if (t <= unk_a4 - 0x10) {
                    unk_a0 = unk_a0 + 0x10;
                    return TRUE;
                }
            }
        }
    } else {
        switch (old - 0x12) {
        case 1:
            if (MenuKeys_HasLeft(pad)) {
                targetLeftOfButtons();
            } else if (MenuKeys_HasUp(pad)) {
                unk_c0 = 0x12;
            }
            break;
        case 0:
            if (MenuKeys_HasLeft(pad)) {
                targetLeftOfButtons();
            } else if (MenuKeys_HasDown(pad)) {
                unk_c0 = 0x13;
            }
            break;
        case 2:
            if (MenuKeys_HasUp(pad)) {
                unk_c0 = 0x15;
            } else if (MenuKeys_HasDown(pad)) {
                unk_c0 = 0x16;
            } else if (MenuKeys_HasRight(pad)) {
                unk_c0 = 0x12;
            } else if (MenuKeys_HasLeft(pad)) {
                targetRowOrTab();
            }
            break;
        case 3:
            if (MenuKeys_HasDown(pad)) {
                unk_c0 = 0x14;
            } else if (MenuKeys_HasRight(pad)) {
                unk_c0 = 0x12;
            } else if (MenuKeys_HasLeft(pad)) {
                targetRowOrTab();
            }
            break;
        case 4:
            if (MenuKeys_HasUp(pad)) {
                unk_c0 = 0x14;
            } else if (MenuKeys_HasRight(pad)) {
                unk_c0 = 0x12;
            } else if (MenuKeys_HasLeft(pad)) {
                targetRowOrTab();
            } else if (MenuKeys_HasDown(pad)) {
                unk_c0 = 0x13;
            }
            break;
        }
    }
    if (old != unk_c0) {
        return TRUE;
    }
    return FALSE;
}

BOOL CatalogMenu::tryGrabKnob(s32 x, s32 y) {
    if (unk_14c.hitTest(x, y)) {
        unk_ac = unk_a8 - y;
        unk_14c.grab();
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

void CatalogMenu::dragKnob(s32 v, BOOL c) {
    if (c) {
        v = v - 0x34;
    } else {
        v = v + unk_ac;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x5a) {
        v = 0x5a;
    }
    if (c) {
        func_020e761c(&unk_a8, v, 8);
    } else {
        unk_a8 = v;
    }
    syncScrollToKnob();
    updateKnobPosition();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&unk_14c);
        unk_b0 = unk_a8;
    }
}

void CatalogMenu::releaseKnob() { unk_14c.release(); }

void CatalogMenu::moveKnobByKey() {
    s32 old = unk_a8;
    u32 k = gPad[0];
    if (k & 0x40) {
        unk_a8 = unk_a8 - 4;
        if (unk_a8 < 0) {
            unk_a8 = 0;
        }
    } else if (k & 0x80) {
        unk_a8 = unk_a8 + 4;
        if (unk_a8 > 0x5a) {
            unk_a8 = 0x5a;
        }
    }
    if (old != unk_a8) {
        syncScrollToKnob();
        updateKnobPosition();
        Menu_PlayScrollTickSe(&unk_14c);
    }
}

BOOL CatalogMenu::finishKnobRelease() {
    if (unk_14c.areAnimsDone()) {
        unk_14c.show();
        return TRUE;
    }
    return FALSE;
}

void CatalogMenu::updateKnobPosition() {
    unk_14c.moveTo(0x38, unk_94 + (unk_a8 - 0x34));
}

void CatalogMenu::syncScrollToKnob() {
    s32 v;
    s32 n = unk_a4;
    v = func_02133150(unk_a8 * n, 0x5a);
    if (v < 0) {
        v = 0;
    }
    if (v > n) {
        v = n;
    }
    setScrollPos(v);
    unk_a0 = v;
}

void CatalogMenu::syncKnobToScroll() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x5a, unk_a4);
        updateKnobPosition();
    }
}

void CatalogMenu::paintScrollBarArea(s32 a) {
    func_0206ee80(unk_2590, 0x17, 4, 0x18, 0x13, a);
    setFlags(0x10);
}

void CatalogMenu::showScrollBar() {
    clearFlags(0x100);
    paintScrollBarArea(2);
}

void CatalogMenu::hideScrollBar() {
    setFlags(0x100);
    paintScrollBarArea(3);
}

void CatalogMenu::focusSelectedItem() {
    setTab(unk_be);
    setScrollPos((unk_b8 - 3) << 4);
    unk_a0 = unk_9c;
    syncKnobToScroll();
    hideScrollBar();
    setFlags(0x200);
}

void CatalogMenu::restoreListView() {
    s32 a = unk_b4;
    s32 b = getTabOwnedCount() - 8;
    if (b < 0) {
        b = 0;
    }
    if (a < 0) {
        a = 0;
    } else if (a > b) {
        a = b;
    }
    setScrollPos(a << 4);
    unk_a0 = unk_9c;
    syncKnobToScroll();
    if (unk_a4 == 0) {
        hideScrollBar();
    } else {
        showScrollBar();
    }
    clearFlags(0x200);
}

void CatalogMenu::pressUpArrow() { setFlags(0x1000); }

void CatalogMenu::pressDownArrow() { setFlags(0x2000); }

void CatalogMenu::releaseArrows() { clearFlags(0x3000); }

void CatalogMenu::scrollByArrow() {
    s32 old = unk_9c;
    if (testFlags(0x1000)) {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c - r;
        } else {
            unk_9c = unk_9c - 0x10;
        }
        if (unk_9c < 0) {
            unk_9c = 0;
        }
    } else {
        s32 r = unk_9c & 0xf;
        if (r != 0) {
            unk_9c = unk_9c + (0x10 - r);
        } else {
            unk_9c = unk_9c + 0x10;
        }
        s32 lim = unk_a4;
        if (unk_9c > lim) {
            unk_9c = lim;
        }
    }
    if (old != unk_9c) {
        setScrollPos(unk_9c);
        unk_a0 = unk_9c;
        syncKnobToScroll();
        Menu_PlayScrollTickSe(&unk_14c);
    }
}

u16 CatalogMenu::blendColor(s32 x, s32 y, s32 t) {
    u8 r = y & 0x1f;
    u8 g = (y & 0x3e0) >> 5;
    u8 b = (y & 0x7c00) >> 10;
    s32 n = 3 - t;
    r = ((u8)(x & 0x1f) * t + r * n) / 3;
    g = ((u8)((x & 0x3e0) >> 5) * t + g * n) / 3;
    b = ((u8)((x & 0x7c00) >> 10) * t + b * n) / 3;
    return r | (g << 5) | (b << 10);
}

void CatalogMenu::setTabFadeLevel(u32 t) {
    MIi_CpuCopy16(unk_2d90, unk_2db0, 0x20);
    MIi_CpuCopy16(unk_2dd0, unk_2df0, 0x20);
    unk_2db0[15] = blendColor(unk_2d90[15], unk_2d90[8], t);
    unk_2df0[15] = blendColor(unk_2dd0[15], unk_2dd0[8], t);
    unk_678[2].requestPalette((u32)unk_2db0, 4, 3);
    unk_678[3].requestPalette((u32)unk_2df0, 4, 4);
}

void CatalogMenu::updateTabSwitch() {
    switch (unk_c2) {
    case 0:
        return;
    case 1:
        if (unk_c1 != 0) {
            unk_c1 = *(volatile u8 *)&unk_c1 - 1;
        } else {
            unk_c2 = 2;
            setTab(unk_bd);
        }
        break;
    case 2:
        if (unk_c1 < 3) {
            unk_c1 = *(volatile u8 *)&unk_c1 + 1;
        } else {
            unk_c2 = 0;
            return;
        }
        break;
    }
    setTabFadeLevel(unk_c1);
}

BOOL CatalogMenu::testFlags(u32 m) {
    if (unk_b6 & m) {
        return TRUE;
    }
    return FALSE;
}

void CatalogMenu::setFlags(u32 m) { unk_b6 = unk_b6 | m; }

void CatalogMenu::clearFlags(u32 m) { unk_b6 = unk_b6 & ~m; }

extern "C" void *data_ov142_02294cd8[2] = {(void *)_ZN11CatalogMenu9stateOpenEv, 0};
extern "C" u32 data_ov142_02294d38[8] = {0x804b00eb, 0x000064db, 0x406b80eb, 0x000064df,
                                         0x404b400b, 0x0000655b, 0x006b000b, 0xffff655f};
extern "C" void *data_ov142_02294c78[2] = {(void *)_ZN11CatalogMenu16updateTrackTouchEv, 0};
