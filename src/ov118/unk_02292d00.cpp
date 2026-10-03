#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
BOOL _ZN10HandCursor10isAnimDoneEv(void *self);
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u16 gPad[];
extern u32 gCurrentHeap;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gFieldSceneKind;
extern u8 gTownReturnPos[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];

void func_0206f9fc(void *self, u32 v);
void _ZN12Unk_020dd38cC2Ev(void *self);
void _ZN12Unk_020dd38cD1Ev(void *self);
s32 _ZN10PlayerData11getPlayerIdEv(void *self);
void _ZN9MsgString5clearEv(void *self);
void func_02004018(u32 a, s32 b);
void Snd_PlaySe(u32 v);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
s32 Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
BOOL MenuCtrl_IsForceCloseDue();
BOOL MenuCtrl_TickForceClose();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
s32 _s32_div_f(s32 a, s32 b);
s32 MenuTabBar_GetTabX(s32 v);
s32 MenuTabBar_HitTestTouch();
u32 MenuTabBar_NextTab(u32 v);
u32 MenuTabBar_PrevTab(u32 v);
u32 MenuTabBar_TabFromX(u32 v);
void Menu_PlayScrollGrabSe(void *p);
void Menu_PlayScrollTickSe(void *p);
void TownMapMarkers_Clear(void *p);
void TownMapImage_BuildMarkersGlobal(u32 v);
void TownMapImage_DrawRowGlobal(u32 v);
void TownMapImage_AllocGlobal();
void InventoryBg_ClearDirty(void *a, void *b);
s16 *TownMapMarkers_Get(void *p, s32 i);
u32 TownMapMarkers_GetKind(void *p, s32 i);
void *PlayerData_GetCurrent();
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
BOOL SaveVillagers_IsOccupied(void *a, s32 b);
void PopupChoice_CopyPlayerIdName(void *p, s32 a);
void PopupChoice_CopyResidentName(void *p, s32 a);
void PopupChoice_CopyVillagerName(void *p, s32 a);
void BgScreen_SetRectPalette(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadPaletteFile(const char *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void Gfx2d_LoadCharFile(const char *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void Gfx2d_LoadCharRange(void *a, u32 b, u32 c, u32 d, u32 e);
void Gfx2d_LoadScreen(void *a, u32 b, u32 c, u32 d);
void File_LoadToBuffer(const char *a, void *b, u32 c);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
void MIi_CpuClear16(u32 v, void *dst, u32 n);
void func_020e761c(void *p, s32 a, s32 b);
void *func_020947f0(s32 a);
s32 Scene_GetWarpRequest();
void *ScenePos_GetPos(void *p);
void func_020638d0(void *a, void *b);
void String_SetSlot(s32 a, void *p);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
}

// 0x40-byte element with ctor/dtor in main
class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u8 unk_00[0x40];
};

// 0x24-byte helper objects at +0xb4 / +0xd8
class BgVramTask {
public:
    BgVramTask();
    BOOL requestScreen(u32 buf, u8 n, u32 size, u32 z);
    void cancel();
    u32 unk_00[0x24 / 4];
};

class MenuTabBar {
public:
    BOOL isJustOpened();
    void onTabMenuClosed();
    void selectTab(u32 x);
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    u32 unk_04[2];
};

// object at +0x484 (size 0x64, vtable 0x02204614); methods split over two more ov002 classes
class MenuCursorBase {
public:
    void drawWrapped();
    u8 getScreenY();
    u8 getScreenX();
    void setPoseRelease();
    void setPoseIdle();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void warpTo(s32 a, s32 b);
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

class MenuCursorBuf0 {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// object at +0x43c (size 0x48)
class ScrollKnob {
public:
    virtual ~ScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void setState(s32 a);
    void moveTo(s32 a, s32 b);
    s32 areAnimsDone();
    u32 unk_04[0x44 / 4];
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();
    s32 getGripX();
    s32 getGripY();
    void grab();
    BOOL hitTest(s32 x, s32 y);
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 c, s32 d);
    void beginSubSlideIn(s32 a, s32 b, s32 c, s32 d);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
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

// ov117 object (0x66 bytes) initialised and torn down by plain ov117 functions
class TownMapMarkers {
public:
    TownMapMarkers();
    ~TownMapMarkers();
    u8 unk_00[0x66];
};


// 3-byte element with empty out-of-line ctor and dtor
class MapTabMarker {
public:
    MapTabMarker();
    ~MapTabMarker();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

#define A8V (*(volatile u8 *)&unk_a8)
#define ACV (*(volatile u8 *)&unk_ac)

typedef struct MapTab Unk_ov118_022955c8_fwd;
class MapTab;
typedef void (MapTab::*Unk_ov118_022955c8_Fn)();

// Vtable 0x022955c8, size 0x459c
class MapTab : public MenuProc {
public:
    MapTab() : unk_b4(), unk_fc(), unk_43c(), unk_484(), unk_44e8(), unk_4568(), unk_4571() {}

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
    void playSeAtMarker(s32 a);
    s32 onCursorDecide();
    s32 moveCursorByPad(void *pad);
    void refreshCursor();
    void releaseCursor();
    void pressCursor();
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void stopBlink();
    void startBlink();
    void updateBlink();
    s32 touchListTabs();
    void scrollListByPad();
    void scrollListToKnob(s32 v);
    BOOL touchScrollBar();
    void updateListScroll();
    BOOL isListScrolling();
    void setListScrollTarget(u32 v);
    void setListScroll(u32 v);
    void ensureSelectionVisible();
    void jumpToSelection();
    u8 selectionToMarker(u32 v);
    u8 selectionToListRow(u32 v);
    s32 highlightListRow(u32 v);
    void selectEntry(u8 v);
    u8 findMarkerAt(s32 x, s32 y);
    BOOL touchMarker();
    void setupMarkers(void *p);
    void drawMapIcon(s32 x, s32 y, s32 n, s32 flag, s32 pal);
    BOOL touchListRow();
    s32 getListScrollMax();
    u8 getListCount();
    u8 *getListEntries();
    s32 rebuildList();
    void showPlacesList();
    void showResidentsList();
    void setEntryName(Unk_020e0488 *p, u32 idx);
    s32 buildEntryLabels(u8 *tbl);
    void layoutListLabels();
    void buildEntryLists();
    Unk_020e0488 *allocTextLabel();
    void resetTextLabels();
    s32 getEntryIconRow(u32 x, s32 idx);
    void buildListScreen();
    void clipListScreen();
    void exitMapCursor();
    void startButtonInput();
    void startTouchInput();
    void updateMapCursor();
    void updateKnobRelease();
    void updateKnobHold();
    void updateKnobGrab();
    void updateCursorRelease();
    void updateCursorPress();
    void updateCursorMove();
    void updateButtons();
    void updateBarTap();
    void updateKnobDrag();
    void updateTouch();
    void loadObjGfx();
    void loadMapImage();
    s32 loadMapStep2();
    s32 loadMapStep1();
    void loadBgGfx();
    void setupBgLayers();
    void postInputUpdate();
    void preInputUpdate();
    void postStateUpdate();
    void preStateUpdate();
    void releaseResources();
    void initMapTab();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateBuildList();
    void stateLoadMap3();
    void stateLoadMap2();
    void stateLoadMap1();
    void stateLoadBg();
    BOOL requestTab(s32 x);
    BOOL handleTabSwitch();
    void runMainState();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ u16 unk_98;
    /* 0x009a */ u16 unk_9a;
    /* 0x009c */ u16 unk_9c;
    /* 0x009e */ u8 unk_9e;
    /* 0x009f */ u8 unk_9f;
    /* 0x00a0 */ volatile u8 unk_a0;
    /* 0x00a1 */ u8 unk_a1;
    /* 0x00a2 */ u8 unk_a2;
    /* 0x00a3 */ u8 unk_a3;
    /* 0x00a4 */ u8 unk_a4;
    /* 0x00a5 */ u8 unk_a5;
    /* 0x00a6 */ u8 unk_a6;
    /* 0x00a7 */ u8 unk_a7;
    /* 0x00a8 */ u8 unk_a8;
    /* 0x00a9 */ u8 unk_a9;
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 unk_b2[2];
    /* 0x00b4 */ BgVramTask unk_b4[2];
    /* 0x00fc */ Unk_020e0488 unk_fc[13];
    /* 0x043c */ MenuScrollKnob unk_43c;
    /* 0x0484 */ MenuCursorBuf0 unk_484;
    /* 0x04e8 */ u8 unk_4e8[0x800];
    /* 0x0ce8 */ u16 unk_ce8[0x400];
    /* 0x14e8 */ u16 unk_14e8[0x400];
    /* 0x1ce8 */ u16 unk_1ce8[0x400];
    /* 0x24e8 */ u8 unk_24e8[0x2000];
    /* 0x44e8 */ TownMapMarkers unk_44e8;
    /* 0x454e */ u8 unk_454e[13];
    /* 0x455b */ u8 unk_455b[13];
    /* 0x4568 */ MapTabMarker unk_4568[3];
    /* 0x4571 */ MapTabMarker unk_4571[14];
};

struct Unk_ov118_02295500 {
    u16 unk_0;
    u16 a : 9;
    u16 pal : 5;
    u16 b : 2;
    u16 tile : 10;
    u16 c : 6;
    u16 unk_6;
};

struct Unk_ov118_SceneEntry {
    MapTab *(*create)();
    u16 a;
    u16 b;
};

extern "C" MapTab *MapTab_Create();

extern "C" {
void _ZN6MapTab11stateLoadBgEv();
void _ZN6MapTab13stateLoadMap1Ev();
void _ZN6MapTab13stateLoadMap2Ev();
void _ZN6MapTab13stateLoadMap3Ev();
void _ZN6MapTab14stateBuildListEv();
void _ZN6MapTab9stateOpenEv();
void _ZN6MapTab12stateOpeningEv();
void _ZN6MapTab10stateCloseEv();
void _ZN6MapTab12stateClosingEv();
void _ZN6MapTab11updateTouchEv();
void _ZN6MapTab14updateKnobDragEv();
void _ZN6MapTab12updateBarTapEv();
void _ZN6MapTab13updateButtonsEv();
void _ZN6MapTab16updateCursorMoveEv();
void _ZN6MapTab17updateCursorPressEv();
void _ZN6MapTab19updateCursorReleaseEv();
void _ZN6MapTab14updateKnobGrabEv();
void _ZN6MapTab14updateKnobHoldEv();
void _ZN6MapTab17updateKnobReleaseEv();
void _ZN6MapTab15updateMapCursorEv();
}
extern "C" void *data_ov118_02295520[2];
extern "C" void *data_ov118_02295518[2];
extern "C" void *data_ov118_02295510[2];
extern "C" void *data_ov118_02295508[2];
extern "C" void *data_ov118_022954a0[2];
extern "C" void *data_ov118_022954f8[2];
extern "C" void *data_ov118_022954f0[2];
extern "C" void *data_ov118_022954e8[2];
extern "C" void *data_ov118_02295498[2];
extern "C" void *data_ov118_022954d0[2];
extern "C" void *data_ov118_022954d8[2];
extern "C" void *data_ov118_022954b8[2];
extern "C" void *data_ov118_02295528[2];
extern "C" void *data_ov118_022954a8[2];
extern "C" void *data_ov118_02295488[2];
extern "C" void *data_ov118_02295490[2];
extern "C" void *data_ov118_022954c0[2];
extern "C" void *data_ov118_022954c8[2];
extern "C" void *data_ov118_022954e0[2];
extern "C" void *data_ov118_022954b0[2];
extern "C" Unk_ov118_SceneEntry sMapTabProfile;
extern "C" Unk_ov118_02295500 sMapTabIconCell;
extern "C" const u8 sMapTabPlaceMarkers[5];
extern "C" const u8 sMapTabMarkerPlaceRows[5];
extern "C" const u8 sMapTabFacilityCells[5];
extern "C" u32 sMapTabPlacesButtonCells[8];
extern "C" u32 sMapTabResidentsButtonCells[8];
extern "C" u32 sMapTabFrameCells[20];





static inline BOOL Unk_ov118_022946d4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

struct Unk_ov118_02294a58_Vec {
    s32 x, y, z;
};

static inline BOOL Unk_ov118_02294a58_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" MapTab *MapTab_Create() { return new MapTab(); }

BOOL MapTab::vfunc_00() {
    initMapTab();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL MapTab::vfunc_0c() {
    ((MenuTabBar *)ProcBase_GetParent(this))->onTabMenuClosed();
    releaseResources();
    return TRUE;
}

BOOL MapTab::onDraw() {
    u32 base = unk_94 + 0x60;
    s32 i;
    if (testFlags(4)) {
        if (testFlags(8)) {
            unk_43c.moveTo(0x67, (unk_94 - 0x12) + unk_a4);
        }
        if (MenuCtrl_IsButtons()) {
            if (testFlags(0x1000)) {
                s32 a = unk_43c.getGripX();
                s32 b = unk_43c.getGripY();
                ((MenuCursorBase *)&unk_484)->warpTo(a, b);
            }
            ((MenuCursorBase *)&unk_484)->drawWrapped();
        }
        Oam_DrawCell(1, sMapTabFrameCells, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        s32 x0, x1;
        if (testFlags(1)) {
            x1 = 0xc;
            x0 = 0xd;
        } else {
            x1 = 0xb;
            x0 = 0xe;
        }
        Oam_DrawCell(1, sMapTabPlacesButtonCells, 0x80, base, x0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, sMapTabResidentsButtonCells, 0x80, base, x1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (MenuCtrl_IsButtons() && testFlags(0x800)) {
            u32 t = unk_ad;
            if (t != 0xe) {
                u8 *e = (u8 *)this + t * 3;
                if (e[0x4573] != 0xc) {
                    drawMapIcon(e[0x4571], unk_94 + e[0x4572], 0xb, 0, -1);
                }
            }
        }
        unk_b1 = (unk_b1 + 1) & 0xf;
        if ((unk_b1 & 0xc) != 0) {
            drawMapIcon(unk_9e, unk_9f + unk_94, 0xa, 0, -1);
        }
        for (i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x456a];
            if (c != 0xc) {
                drawMapIcon(e[0x4568], unk_94 + e[0x4569], (u8)(c & 0x7f), (c & 0x80) != 0 ? 1 : 0, -1);
            }
        }
        for (i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x4573;
            if (*q != 0xc) {
                s32 f;
                if (i == unk_a9 && !testFlags(0x100)) {
                    f = 8;
                } else {
                    f = -1;
                }
                drawMapIcon(e[0x4571], unk_94 + e[0x4572], *q, 0, f);
            }
        }
        if (testFlags(8)) {
            unk_43c.vfunc_08();
        }
    }
    return TRUE;
}

extern "C" u32 sMapTabResidentsButtonCells[8] = {0x404d00d3, 0x0000c1a5, 0x005d80d3, 0x0000c1a7, 0x004d40e3, 0x0000c1e5, 0x005d00e3, 0xffffc1e7};

extern "C" const u8 sMapTabMarkerPlaceRows[5] = {0x02, 0x03, 0x00, 0x01, 0x04};

extern "C" void *data_ov118_022954f8[2] = {(void *)_ZN6MapTab9stateOpenEv, 0};

extern "C" void *data_ov118_022954c0[2] = {(void *)_ZN6MapTab14updateKnobGrabEv, 0};

extern "C" void *data_ov118_02295490[2] = {(void *)_ZN6MapTab19updateCursorReleaseEv, 0};

extern "C" void *data_ov118_02295528[2] = {(void *)_ZN6MapTab13updateButtonsEv, 0};

extern "C" void *data_ov118_02295520[2] = {(void *)_ZN6MapTab11stateLoadBgEv, 0};

extern "C" void *data_ov118_02295518[2] = {(void *)_ZN6MapTab13stateLoadMap1Ev, 0};

extern "C" void *data_ov118_02295510[2] = {(void *)_ZN6MapTab13stateLoadMap2Ev, 0};

extern "C" void *data_ov118_02295508[2] = {(void *)_ZN6MapTab13stateLoadMap3Ev, 0};

extern "C" Unk_ov118_02295500 sMapTabIconCell = {0xf8, 0x1f8, 0, 1, 0xc0, 0x1c, 0xffff};

extern "C" void *data_ov118_02295498[2] = {(void *)_ZN6MapTab12stateClosingEv, 0};

extern "C" const u8 sMapTabPlaceMarkers[5] = {0x0b, 0x0c, 0x09, 0x0a, 0x0d};

extern "C" void *data_ov118_022954a0[2] = {(void *)_ZN6MapTab14stateBuildListEv, 0};

extern "C" void *data_ov118_022954d0[2] = {(void *)_ZN6MapTab11updateTouchEv, 0};

extern "C" void *data_ov118_022954d8[2] = {(void *)_ZN6MapTab14updateKnobDragEv, 0};

extern "C" void *data_ov118_022954e8[2] = {(void *)_ZN6MapTab10stateCloseEv, 0};

BOOL MapTab::execTransition() {
    static Unk_ov118_022955c8_Fn tbl[9] = {*(Unk_ov118_022955c8_Fn *)data_ov118_02295520, *(Unk_ov118_022955c8_Fn *)data_ov118_02295518, *(Unk_ov118_022955c8_Fn *)data_ov118_02295510, *(Unk_ov118_022955c8_Fn *)data_ov118_02295508, *(Unk_ov118_022955c8_Fn *)data_ov118_022954a0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954f8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954f0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954e8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295498};
    preStateUpdate();
    (this->*tbl[unk_8c])();
    postStateUpdate();
    return TRUE;
}

extern "C" void *data_ov118_022954b8[2] = {(void *)_ZN6MapTab12updateBarTapEv, 0};

extern "C" u32 sMapTabPlacesButtonCells[8] = {0x402a00d3, 0x0000e1a2, 0x003a80d3, 0x0000e1a4, 0x002a40e3, 0x0000e1e2, 0x003a00e3, 0xffffe1e4};

extern "C" void *data_ov118_022954a8[2] = {(void *)_ZN6MapTab16updateCursorMoveEv, 0};

void MapTab::runMainState() {
    static Unk_ov118_022955c8_Fn tbl[11] = {*(Unk_ov118_022955c8_Fn *)data_ov118_022954d0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954d8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295528, *(Unk_ov118_022955c8_Fn *)data_ov118_022954a8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295488, *(Unk_ov118_022955c8_Fn *)data_ov118_02295490, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954e0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b0};
    (this->*tbl[unk_8d])();
}

extern "C" void *data_ov118_022954e0[2] = {(void *)_ZN6MapTab17updateKnobReleaseEv, 0};

extern "C" void *data_ov118_022954c8[2] = {(void *)_ZN6MapTab14updateKnobHoldEv, 0};

extern "C" Unk_ov118_SceneEntry sMapTabProfile = {MapTab_Create, 0xa1, 0xa5};

extern "C" void *data_ov118_022954b0[2] = {(void *)_ZN6MapTab15updateMapCursorEv, 0};

extern "C" const u8 sMapTabFacilityCells[5] = {0x02, 0x03, 0x04, 0x05, 0x06};

extern "C" void *data_ov118_022954f0[2] = {(void *)_ZN6MapTab12stateOpeningEv, 0};

extern "C" void *data_ov118_02295488[2] = {(void *)_ZN6MapTab17updateCursorPressEv, 0};

extern "C" u32 sMapTabFrameCells[20] = {
    0x819d40b8, 0x000061ab, 0x81bd40b8, 0x000061af, 0x81dd40b8, 0x000061b3, 0x81fd40b8, 0x000061b7,
    0x401d00b8, 0x000061bb, 0x81f540b8, 0x000060d9, 0x81d540b8, 0x000060d9, 0x81b540b8, 0x000060d9,
    0x901540b8, 0x000060d8, 0x819540b8, 0xffff60d8};

BOOL MapTab::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL MapTab::execPhase3() { return TRUE; }

BOOL MapTab::execPhase4() { return TRUE; }

BOOL MapTab::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL MapTab::handleTabSwitch() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        return requestTab(7);
    }
    if (unk_8d != 0 && unk_8d != 3 && unk_8d != 10) {
        return FALSE;
    }
    s32 r = -1;
    if (MenuCtrl_IsTouch()) {
        r = MenuTabBar_HitTestTouch();
    } else {
        u16 k = gPad[1];
        if ((k & 0x400) != 0 || (k & 2) != 0) {
            r = 7;
        } else if ((k & 0x800) != 0) {
            r = 0;
        } else if ((k & 4) != 0) {
            r = 4;
        }
    }
    return requestTab(r);
}

BOOL MapTab::requestTab(s32 x) {
    void *r = ProcBase_GetParent(this);
    if (x != -1 && x != 5) {
        ((MenuTabBar *)r)->selectTab((u8)x);
        unk_8c = 7;
        setPhase(1);
        return TRUE;
    }
    return FALSE;
}

void MapTab::stateLoadBg() {
    setupBgLayers();
    loadBgGfx();
    setTransitionState(1);
    if (!testFlags(0x2000)) {
        stateLoadMap1();
    }
}

void MapTab::stateLoadMap1() {
    loadMapStep1();
    setTransitionState(2);
    if (!testFlags(0x2000)) {
        stateLoadMap2();
    }
}

void MapTab::stateLoadMap2() {
    loadMapStep2();
    setTransitionState(3);
    if (!testFlags(0x2000)) {
        stateLoadMap3();
    }
}

void MapTab::stateLoadMap3() {
    loadMapImage();
    setTransitionState(4);
    if (!testFlags(0x2000)) {
        stateBuildList();
        clearFlags(0x2000);
    }
}

void MapTab::stateBuildList() {
    showResidentsList();
    clipListScreen();
    setTransitionState(5);
}

void MapTab::stateOpen() {
    u32 buf[8];
    loadObjGfx();
    _ZN12Unk_020dd38cC2Ev(buf);
    func_020638d0(data_021d7352, buf);
    String_SetSlot(0, buf);
    Unk_020e0488 *o = allocTextLabel();
    o->func_0206fb9c(8, 0x1ab, 0x12, 0xf, 0, 0);
    func_0206f9fc(o, 0xa9);
    o->func_0206fab4(1, 0);
    _ZN12Unk_020dd38cD1Ev(buf);
    beginSubSlideIn(0xa, 3, 0, 0x30);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0x50 - unk_98);
    setFlags(4);
    unk_94 = getSlideOffsetY();
    setTransitionState(6);
}

void MapTab::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            startTouchInput();
        } else {
            startButtonInput();
        }
    }
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0x50 - unk_98);
    unk_94 = getSlideOffsetY();
}

void MapTab::stateClose() {
    hideCursor();
    beginSubSlideOut(0xa, 0, 0, 0x30);
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0x50 - unk_98);
    setTransitionState(8);
    unk_94 = getSlideOffsetY();
}

void MapTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(6);
        clearFlags(4);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, 0);
        applySlideOffset(6, 0, 0x50 - unk_98);
        unk_94 = getSlideOffsetY();
    }
}

void MapTab::initMapTab() {
    volatile Unk_ov118_02294a58_Vec v;
    Unk_ov118_02294a58_Vec *p;
    unk_a0 = 0;
    unk_9c = 0;
    unk_98 = 0;
    unk_9a = 0;
    unk_a4 = 0;
    unk_94 = 0;
    unk_a8 = 0;
    unk_ac = 8;
    unk_ae = 0x58;
    unk_af = 0x70;
    unk_ad = 0xe;
    selectEntry(0);
    buildEntryLists();
    if (Unk_ov118_02294a58_IsZero(gFieldSceneKind)) {
        p = (Unk_ov118_02294a58_Vec *)func_020947f0(4);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    } else {
        Scene_GetWarpRequest();
        p = (Unk_ov118_02294a58_Vec *)ScenePos_GetPos(gTownReturnPos);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    }
    s32 z = (v.z + 0x800) >> 12;
    unk_9e = ((v.x + 0x800) >> 12) - 8;
    unk_9f = z + 13;
    unk_43c.setState(1);
    if (((MenuTabBar *)ProcBase_GetParent(this))->isJustOpened()) {
        setFlags(0x2000);
    }
}

void MapTab::releaseResources() {
    resetTextLabels();
    unk_b4[0].cancel();
    unk_b4[1].cancel();
}

void MapTab::preStateUpdate() {
    resetTextLabels();
}

void MapTab::postStateUpdate() {
    if (isListScrolling()) {
        updateListScroll();
        Gfx2d_SetLayerOffset(6, 0, unk_98 - 0x50);
        if (unk_a3 != (unk_98 >> 4)) {
            setFlags(0x80);
        }
    }
    updateBlink();
    if (testFlags(0x80)) {
        clipListScreen();
        clearFlags(0x80);
    }
    if (testFlags(0x20)) {
        if (unk_b4[1].requestScreen((u32)unk_4e8, 4, 0x800, 0)) {
            clearFlags(0x20);
        }
    }
    if (testFlags(2)) {
        if (unk_b4[0].requestScreen((u32)unk_ce8, 6, 0x800, 0)) {
            clearFlags(2);
        }
    }
}

void MapTab::preInputUpdate() {
    preStateUpdate();
    unk_43c.vfunc_0c();
    unk_484.vfunc_0c();
}

void MapTab::postInputUpdate() {
    postStateUpdate();
}

void MapTab::setupBgLayers() {
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void MapTab::loadBgGfx() {
    u32 p = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/map/b_map_bg.bpl", p, 4, 1, 1, 0xf);
    Gfx2d_LoadCharFile("menu/map/b_map_bg_0.bch", p, 4, 0x11, 0x11, 0x5f);
    Gfx2d_LoadCharFile("menu/map/b_map_bg_1.bch", p, 4, 0x230, 0x230, 0x25f);
    File_LoadToBuffer("menu/map/b_map_a_bg.bsc", unk_4e8, 0x800);
    Gfx2d_LoadScreen(unk_4e8, 4, 0x800, 0);
    File_LoadToBuffer("menu/map/b_map_b_bg.bsc", unk_1ce8, 0x800);
    BgScreen_SetRectPalette(unk_1ce8, 0x13, 0, 0x1c, 1, 4);
}

s32 MapTab::loadMapStep1() {
    TownMapImage_AllocGlobal();
    TownMapImage_DrawRowGlobal(0);
    TownMapImage_BuildMarkersGlobal(0);
    TownMapImage_BuildMarkersGlobal(1);
}

s32 MapTab::loadMapStep2() {
    TownMapImage_DrawRowGlobal(1);
    TownMapImage_DrawRowGlobal(2);
}

void MapTab::loadMapImage() {
    u8 *a, *b;
    TownMapImage_DrawRowGlobal(3);
    a = unk_24e8;
    TownMapMarkers_Clear(&unk_44e8);
    b = (u8 *)&unk_44e8;
    InventoryBg_ClearDirty(a, b);
    Gfx2d_LoadCharRange(a, 4, 0x60, 0x60, 0x15f);
    setupMarkers(b);
}

void MapTab::loadObjGfx() {
    u32 p = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/map/b_map_obj.bpl", p, 8, 6, 6, 0xe);
    Gfx2d_LoadCharFile("menu/map/b_map_obj_0.bch", p, 8, 0xc0, 0xc0, 0xff);
    Gfx2d_LoadCharFile("menu/map/b_map_obj_1.bch", p, 8, 0x180, 0x180, 0x1ff);
}

void MapTab::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
        return;
    }
    if (Unk_ov118_022946d4_Both()) {
        if (touchListTabs()) {
            Snd_PlaySe(0x36);
        } else if (touchScrollBar()) {
            unk_43c.grab();
        } else if (touchMarker()) {
            playSeAtMarker(0x38);
        } else if (touchListRow()) {
            playSeAtMarker(0x37);
        }
    }
}

void MapTab::updateKnobDrag() {
    if (gTouchHeld == 0) {
        unk_43c.setState(3);
        startTouchInput();
    }
    scrollListToKnob(unk_a7 + (gTouchCurY - unk_a5));
}

void MapTab::updateBarTap() {
    u32 v;
    if (gTouchHeld == 0) {
        unk_43c.setState(3);
        startTouchInput();
    }
    v = unk_a4;
    func_020e761c(&v, gTouchCurY - 0x54, 8);
    scrollListToKnob(v);
}

void MapTab::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    switch (moveCursorByPad((void *)takeRepeatedKeys())) {
    case 1:
        if (testFlags(8)) {
            u8 t = unk_ac;
            if (t >= 0xa && t <= 0xf) {
                setListScrollTarget(unk_98 & ~0xf);
            }
        }
        moveCursorToTarget();
        break;
    case 2:
        selectEntry(0);
        highlightListRow(0xe);
        unk_ad = findMarkerAt(unk_ae, unk_af);
        setFlags(0x800);
        setMainState(0xa);
        moveCursorToTarget();
        break;
    case 3:
        moveCursorToTarget();
        break;
    default: {
        u32 trg = gPad[1];
        if (trg & 1) {
            pressCursor();
        } else if (trg & 0x100) {
            requestTab(MenuTabBar_NextTab(5));
        } else if (trg & 0x200) {
            requestTab(MenuTabBar_PrevTab(5));
        }
        break;
    }
    }
}

void MapTab::updateCursorMove() {
    if (((MenuCursorBase *)&unk_484)->isMoving() == 0) {
        setMainState(unk_ab);
        runMainState();
    }
}

void MapTab::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_484)) {
        s32 r = onCursorDecide();
        if (r != 1) {
            if (r == 2) {
                setListScroll(0);
                unk_a3 = 0xff;
                releaseCursor();
            } else {
                releaseCursor();
            }
        }
    }
}

void MapTab::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_484)) {
        refreshCursor();
        if (testFlags(0x800)) {
            setMainState(0xa);
        } else {
            setMainState(3);
        }
    }
}

void MapTab::updateKnobGrab() {
    if (unk_43c.areAnimsDone()) {
        setMainState(8);
    }
}

void MapTab::updateKnobHold() {
    if ((gPad[0] & 1) == 0) {
        unk_43c.setState(3);
        setMainState(9);
    } else {
        scrollListByPad();
    }
}

void MapTab::updateKnobRelease() {
    if (unk_43c.areAnimsDone()) {
        releaseCursor();
        clearFlags(0x1000);
    }
}

void MapTab::updateMapCursor() {
    s32 trg, x, y, cur, ox, oy;
    if (checkSwitchToTouch()) {
        startTouchInput();
        return;
    }
    trg = gPad[1];
    if ((trg & 1) && unk_ad != 0xe) {
        pressCursor();
        return;
    }
    if (trg & 0x100) {
        requestTab(MenuTabBar_NextTab(5));
        return;
    }
    if (trg & 0x200) {
        requestTab(MenuTabBar_PrevTab(5));
        return;
    }
    ox = unk_ae;
    x = ox;
    oy = unk_af;
    y = oy;
    cur = gPad[0];
    if (cur & 0x40) {
        y = oy - 4;
    } else if (cur & 0x80) {
        y = oy + 4;
    }
    if (y < 0x30) {
        unk_ac = MenuTabBar_TabFromX(ox);
        ((MenuCursor *)&unk_484)->switchToAnim0D();
        exitMapCursor();
        return;
    }
    if (y > 0xb0) y = 0xb0;
    if (cur & 0x20) {
        x = x - 4;
    } else if (cur & 0x10) {
        x = x + 4;
    }
    if (x < 0x18) {
        x = 0x18;
    } else if (x > 0x98) {
        if (y < 0x50) {
            unk_ac = 9;
        } else {
            y = (y - 0x50) >> 4;
            if (y >= getListCount()) {
                y = getListCount() - 1;
            }
            y += 0xa;
            unk_ac = y;
        }
        exitMapCursor();
        return;
    }
    if (x == ox && y == oy) return;
    unk_ae = x;
    unk_af = y;
    unk_ad = findMarkerAt(unk_ae, unk_af);
    ((MenuCursorBase *)&unk_484)->warpTo(unk_ae, unk_af);
}

void MapTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void MapTab::startButtonInput() {
    unk_43c.setState(1);
    showCursor();
    restartKeyRepeat();
    if (testFlags(0x800)) {
        setMainState(0xa);
    } else {
        setMainState(3);
    }
}

void MapTab::exitMapCursor() {
    selectEntry(0);
    highlightListRow(0xe);
    clearFlags(0x800);
    setMainState(3);
    moveCursorToTarget();
}

void MapTab::clipListScreen() {
    volatile u16 v0, v1, v2, v3;
    s32 off, j, i, n;
    MIi_CpuCopy16(unk_14e8, unk_ce8, 0x800);
    n = unk_98 >> 4;
    unk_a3 = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        MIi_CpuClear16(v0, unk_ce8 + off, 0x14);
        v1 = 0x10;
        MIi_CpuClear16(v1, unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        MIi_CpuClear16(v2, unk_ce8 + off, 0x14);
        v3 = 0x10;
        MIi_CpuClear16(v3, unk_ce8 + (off + 0x20), 0x14);
        off += 0x40;
    }
    setFlags(2);
}

void MapTab::buildListScreen() {
    s32 i;
    u8 *tbl;
    MIi_CpuCopy16(unk_1ce8, unk_14e8, 0x800);
    tbl = getListEntries();
    for (i = 0; i < 13; i++) {
        s32 a = getEntryIconRow(tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        unk_14e8[b] = unk_1ce8[a];
        unk_14e8[b + 1] = unk_1ce8[a + 1];
        unk_14e8[b + 0x20] = unk_1ce8[a + 0x20];
        unk_14e8[b + 0x21] = unk_1ce8[a + 0x21];
    }
    setFlags(2);
}

s32 MapTab::getEntryIconRow(u32 x, s32 idx) {
    if (x == 0) return 7;
    if (x < 6) return 0;
    if (x >= 6 && x < 14) return 1;
    switch (x - 14) {
    case 2: return 2;
    case 0: return 3;
    case 3: return 4;
    case 1: return 5;
    case 4: return 6;
    }
    return 7;
}

void MapTab::resetTextLabels() {
    s32 i = 0;
    unk_a0 = 0;
    Unk_020e0488 *p = unk_fc;
    do {
        (p + i)->func_0206fc44();
        i++;
    } while (i < 13);
}

Unk_020e0488 *MapTab::allocTextLabel() {
    if (unk_a0 >= 13) {
        return &unk_fc[12];
    }
    unk_a0 = unk_a0 + 1;
    return &unk_fc[unk_a0 - 1];
}

void MapTab::buildEntryLists() {
    s32 n = 0;
    s32 m, i;
    m = func_02097740(data_021d735c, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    if (m != -1) {
        unk_454e[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!func_020978c8(data_021d735c, i)) {
            continue;
        }
        unk_454e[n] = i + 2;
        n++;
    }
    unk_b0 = n;
    for (i = 0; i < 8; i++) {
        if (SaveVillagers_IsOccupied(data_021dfd8c, i)) {
            unk_454e[n] = i + 6;
            n++;
        }
    }
    unk_a1 = n;
    for (; n < 0xd; n++) {
        unk_455b[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        unk_455b[n] = i + 0xe;
        n++;
    }
    unk_a2 = n;
    for (; n < 0xd; n++) {
        unk_455b[n] = 0;
    }
}

void MapTab::layoutListLabels() {
    if (testFlags(1)) {
        buildEntryLabels(unk_455b);
    } else {
        buildEntryLabels(unk_454e);
    }
}

s32 MapTab::buildEntryLabels(u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        Unk_020e0488 *w = allocTextLabel();
        w->func_0206fb9c(6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        setEntryName(w, tbl[i]);
        w->func_0206fab4(0, 0);
    }
}

void MapTab::setEntryName(Unk_020e0488 *p, u32 idx) {
    if (idx == 0) {
        _ZN9MsgString5clearEv(p);
    } else if (idx == 1) {
        PopupChoice_CopyPlayerIdName(p, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    } else if (idx >= 2 && idx < 6) {
        PopupChoice_CopyResidentName(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        PopupChoice_CopyVillagerName(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        func_0206f9fc(p, idx + 0x88);
    } else {
        _ZN9MsgString5clearEv(p);
    }
}

void MapTab::showResidentsList() {
    clearFlags(1);
    rebuildList();
}

void MapTab::showPlacesList() {
    setFlags(1);
    rebuildList();
}

s32 MapTab::rebuildList() {
    s32 k;
    buildListScreen();
    layoutListLabels();
    if (getListScrollMax() == 0) {
        clearFlags(8);
        k = 4;
    } else {
        setFlags(8);
        k = 3;
    }
    BgScreen_SetRectPalette(unk_4e8, 0x1d, 0xa, 0x1d, 0x15, k);
    setFlags(0x20);
    highlightListRow(unk_aa);
}

u8 *MapTab::getListEntries() {
    if (testFlags(1)) {
        return unk_455b;
    }
    return unk_454e;
}

u8 MapTab::getListCount() {
    if (testFlags(1)) {
        return unk_a2;
    }
    return unk_a1;
}

s32 MapTab::getListScrollMax() {
    u32 r = getListCount();
    if (r <= 6) {
        return 0;
    }
    return (r - 6) << 4;
}

BOOL MapTab::touchListRow() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    s32 idx;
    if (x < 0x98 || x > 0xe8) {
        return FALSE;
    }
    if (y < 0x50 || y >= 0xb0) {
        return FALSE;
    }
    idx = (y + (unk_98 - 0x50)) >> 4;
    if (testFlags(1) && idx == 5) {
        return FALSE;
    }
    selectEntry(idx + 0xf);
    return TRUE;
}

void MapTab::drawMapIcon(s32 x, s32 y, s32 n, s32 flag, s32 pal) {
    u16 t;
    sMapTabIconCell.tile = n * 2 + 0xc0;
    if (flag != 0) {
        t = sMapTabIconCell.pal | 8;
        sMapTabIconCell.pal = t;
    }
    func_02088730(1, &sMapTabIconCell, x, y, pal, 1, 0);
    if (flag != 0) {
        sMapTabIconCell.pal = t & 0x17;
    }
}

void MapTab::setupMarkers(void *p) {
    s32 k, i;
    u32 j;
    s16 *rec;
    i = 0;
    k = i;
    for (; k < 3; i++, k++) {
        rec = TownMapMarkers_Get(p, i);
        if (rec != 0) {
            switch (TownMapMarkers_GetKind(p, i)) {
            case 0:
                *((u8 *)this + k * 3 + 0x456a) = 8;
                break;
            case 1:
                *((u8 *)this + k * 3 + 0x456a) = 7;
                break;
            case 2:
                *((u8 *)this + k * 3 + 0x456a) = 9;
                break;
            case 3:
                *((u8 *)this + k * 3 + 0x456a) = 0x89;
                break;
            default:
                *((u8 *)this + k * 3 + 0x456a) = 0xc;
                break;
            }
            *((u8 *)this + k * 3 + 0x4568) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x4569) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x456a) = 0xc;
        }
    }
    j = 3;
    k = 0;
    for (; k < 0xe; j++, k++) {
        rec = TownMapMarkers_Get(p, j);
        if (rec != 0) {
            if (j >= 3 && j <= 0xa) {
                *((u8 *)this + k * 3 + 0x4573) = 0;
            } else if (j == 0xb) {
                *((u8 *)this + k * 3 + 0x4573) = 1;
            } else {
                *((u8 *)this + k * 3 + 0x4573) = *(sMapTabFacilityCells + j - 0xc);
            }
            *((u8 *)this + k * 3 + 0x4571) = rec[0] - 8;
            *((u8 *)this + k * 3 + 0x4572) = rec[1] + 0x10;
        } else {
            *((u8 *)this + k * 3 + 0x4573) = 0xc;
        }
    }
}

BOOL MapTab::touchMarker() {
    u8 r = findMarkerAt(gTouchCurX, gTouchCurY);
    if (r == 0xe) {
        return FALSE;
    }
    selectEntry(r + 1);
    return TRUE;
}

u8 MapTab::findMarkerAt(s32 x, s32 y) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        u8 *e = (u8 *)this + i * 3;
        if (e[0x4573] != 0xc) {
            s32 px = e[0x4571];
            if (px - 8 < x && px + 8 > x) {
                s32 py = e[0x4572];
                if (py - 8 < y && py + 8 > y) {
                    return (u8)i;
                }
            }
        }
    }
    return 0xe;
}

void MapTab::selectEntry(u8 v) {
    if (v == 0) {
        unk_a9 = 0xe;
        unk_aa = 0xe;
        stopBlink();
        return;
    }
    startBlink();
    unk_aa = selectionToListRow(v);
    unk_a9 = selectionToMarker(v);
    if (v >= 1 && v < 0xf) {
        clearFlags(0x200);
        if (testFlags(1)) {
            if (v >= 1 && v <= 9) {
                showResidentsList();
                jumpToSelection();
                return;
            }
        } else {
            if (v < 1 || v > 9) {
                showPlacesList();
                jumpToSelection();
                return;
            }
        }
    } else {
        setFlags(0x200);
    }
    ensureSelectionVisible();
    highlightListRow(0xe);
    highlightListRow(unk_aa);
}

s32 MapTab::highlightListRow(u32 v) {
    setFlags(0x80);
    if (v == 0xe) {
        BgScreen_SetRectPalette(unk_14e8, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        BgScreen_SetRectPalette(unk_14e8, 0x13, 0, 0x1c, unk_b0 * 2 - 1, 3);
    } else {
        BgScreen_SetRectPalette(unk_14e8, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

u8 MapTab::selectionToListRow(u32 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = unk_a1;
        for (; i < n; i++) {
            if (t == unk_454e[i]) {
                return (u8)i;
            }
        }
        return 0xe;
    }
    if (v < 0xf && v >= 0xa) {
        return sMapTabMarkerPlaceRows[v - 0xa];
    }
    if (v < 0x1c && v >= 0xf) {
        return (u8)(v - 0xf);
    }
    return 0xe;
}

u8 MapTab::selectionToMarker(u32 v) {
    if (v >= 1 && v < 0xf) {
        return (u8)(v - 1);
    }
    if (v >= 0xf && v < 0x1c) {
        u32 b = getListEntries()[v - 0xf];
        if (b == 0) {
            return 0xe;
        }
        if (b == 1 || (b >= 2 && b < 6)) {
            return 8;
        }
        if (b >= 6 && b < 0xe) {
            return (u8)(b - 6);
        }
        if (b >= 0xe && b < 0x13) {
            return sMapTabPlaceMarkers[b - 0xe];
        }
    }
    return 0xe;
}

void MapTab::jumpToSelection() {
    u32 a = unk_aa;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    setListScroll(v);
    unk_a3 = 0xff;
}

void MapTab::ensureSelectionVisible() {
    u32 c = unk_aa;
    if (c != 0xe) {
        if (c == 0xd) {
            setListScrollTarget(0);
        } else {
            s32 t = (unk_98 + 0xf) >> 4;
            if ((s32)c < t) {
                setListScrollTarget(c << 4);
            }
            s32 h = unk_98 >> 4;
            u32 a = unk_aa;
            s32 m;
            if (a <= 5) {
                m = 0;
            } else {
                m = a - 5;
            }
            if (h < m) {
                setListScrollTarget(m << 4);
            }
        }
    }
}

void MapTab::setListScroll(u32 v) {
    unk_98 = v;
    unk_9a = unk_98;
    setFlags(0x10);
}

void MapTab::setListScrollTarget(u32 v) {
    unk_9a = v;
    setFlags(0x10);
}

BOOL MapTab::isListScrolling() {
    return testFlags(0x10);
}

void MapTab::updateListScroll() {
    s32 n = getListScrollMax();
    if (n == 0) {
        clearFlags(0x10);
        unk_a4 = 0;
    } else {
        u32 a = ((volatile MapTab *)this)->unk_9a;
        u32 b = ((volatile MapTab *)this)->unk_98;
        if (b == a) {
            clearFlags(0x10);
        } else if (b < a) {
            unk_98 = unk_98 + 8;
            if (unk_98 > unk_9a) {
                unk_98 = unk_9a;
            }
        } else if (b < 8) {
            unk_98 = a;
        } else {
            unk_98 = unk_98 - 8;
            if (unk_98 < unk_9a) {
                unk_98 = unk_9a;
            }
        }
        unk_a4 = (s32)(unk_98 * 0x58) / n;
    }
}

BOOL MapTab::touchScrollBar() {
    s32 x, y;
    if (!testFlags(8)) {
        return FALSE;
    }
    x = gTouchCurX;
    y = gTouchCurY;
    if (unk_43c.hitTest(x, y)) {
        unk_a5 = y;
        unk_a7 = unk_a4;
        unk_a6 = unk_a7;
        setMainState(1);
        return TRUE;
    } else if (x > 0xe8 && x < 0xf5 && y > 0x56 && y < 0xae) {
        setMainState(2);
        return TRUE;
    }
    return FALSE;
}

void MapTab::scrollListToKnob(s32 v) {
    s32 t = v;
    if (t < 0) {
        t = 0;
    } else if (t > 0x58) {
        t = 0x58;
    }
    s32 d = t - unk_a6;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&unk_43c);
        unk_a6 = t;
    }
    s32 m = getListScrollMax();
    setListScroll(_s32_div_f(t * m, 0x58));
}

void MapTab::scrollListByPad() {
    s32 pos = unk_9a;
    u16 pad = gPad[0];
    if (pad & 0x40) {
        pos -= 4;
    } else if (pad & 0x80) {
        pos += 4;
    }
    s32 m = getListScrollMax();
    if (pos < 0) {
        pos = 0;
    } else if (pos > m) {
        pos = m;
    }
    if (pos != unk_9a) {
        Menu_PlayScrollTickSe(&unk_43c);
    }
    setListScroll(pos);
}

s32 MapTab::touchListTabs() {
    s32 a = gTouchCurX;
    s32 b = gTouchCurY;
    if (b < 0x33 || b > 0x4b) {
        return 0;
    }
    if (testFlags(1)) {
        if (a < 0xcd || a > 0xe5) {
            return 0;
        }
        selectEntry(0);
        showResidentsList();
    } else {
        if (a < 0xaa || a > 0xc2) {
            return 0;
        }
        selectEntry(0);
        showPlacesList();
    }
    setListScroll(0);
    unk_a3 = 0xff;
    return 1;
}

void MapTab::updateBlink() {
    if (testFlags(0x40)) {
        if (A8V != 0) {
            A8V = A8V - 1;
        }
        u32 v = unk_a8;
        if (v == 0) {
            if (testFlags(0x200)) {
                clearFlags(0x100);
            } else {
                highlightListRow(unk_aa);
            }
            unk_a8 = 0xf;
        } else if (unk_a8 == 5) {
            if (testFlags(0x200)) {
                setFlags(0x100);
            } else {
                highlightListRow(0xe);
            }
        }
    }
}

void MapTab::startBlink() {
    setFlags(0x40);
    clearFlags(0x100);
    unk_a8 = 0xf;
}

void MapTab::stopBlink() {
    clearFlags(0x40);
    clearFlags(0x100);
}

void MapTab::showCursor() {
    if (!testFlags(8) && unk_ac == 0x10) {
        unk_ac = 8;
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&unk_484)->warpTo(a, b);
    if (unk_ac >= 0xa && unk_ac <= 0xf) {
        setListScrollTarget(unk_98 & ~0xf);
    }
    if (unk_ac <= 7) {
        ((MenuCursor *)&unk_484)->setAnimIfChanged(0xd);
    } else {
        ((MenuCursor *)&unk_484)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 MapTab::getCursorTargetX() {
    if (testFlags(0x800)) {
        return unk_ae;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return 0xa0;
    }
    if (c <= 7) {
        return MenuTabBar_GetTabX(c);
    }
    if (c == 8) {
        return 0xd8;
    }
    if (c == 9) {
        return 0xb4;
    }
    if (c == 0x10) {
        return unk_43c.getGripX();
    }
    return 0x80;
}

s32 MapTab::getCursorTargetY() {
    if (testFlags(0x800)) {
        return unk_af;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return (c - 0xa) * 16 + 0x58;
    }
    if (c >= 8 && c <= 9) {
        return 0x40;
    }
    if (c <= 7) {
        return 8;
    }
    if (c == 0x10) {
        return unk_43c.getGripY();
    }
    return 0x60;
}

void MapTab::hideCursor() {
    ((MenuCursor *)&unk_484)->setAnimIfChanged(0);
    unk_484.vfunc_0c();
}

void MapTab::moveCursorToTarget() {
    if (testFlags(0x4000)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        ((MenuCursorBase *)&unk_484)->warpTo(a, b);
        clearFlags(0x4000);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        ((MenuCursorBase *)&unk_484)->moveToEase(a, b, 3, 1);
        unk_ab = unk_8d;
        setMainState(4);
    }
}

void MapTab::pressCursor() {
    ((MenuCursor *)&unk_484)->setPosePress();
    setMainState(5);
}

void MapTab::releaseCursor() {
    ((MenuCursorBase *)&unk_484)->setPoseRelease();
    setMainState(6);
}

void MapTab::refreshCursor() {
    ((MenuCursorBase *)&unk_484)->setPoseIdle();
    unk_484.vfunc_0c();
}

s32 MapTab::moveCursorByPad(void *pad) {
    u32 old = unk_ac;
    if (old <= 7) {
        if (MenuKeys_HasDown(pad)) {
            s32 cv = unk_ac;
            if (cv <= 3) {
                unk_ae = ((MenuCursorBase *)&unk_484)->getScreenX();
                unk_af = 0x30;
                ((MenuCursor *)&unk_484)->switchToAnim01();
                return 2;
            }
            if (cv >= 5) {
                unk_ac = 8;
            } else {
                unk_ac = 9;
            }
            ((MenuCursor *)&unk_484)->switchToAnim01();
        } else if (MenuKeys_HasLeft(pad)) {
            if (ACV != 0) {
                ACV = ACV - 1;
            }
        } else if (MenuKeys_HasRight(pad)) {
            if (ACV < 7) {
                ACV = ACV + 1;
            }
        }
    } else if (old >= 0xa && old <= 0xf) {
        if (testFlags(8) && MenuKeys_HasRight(pad)) {
            unk_ac = 0x10;
        } else if (MenuKeys_HasUp(pad)) {
            if (ACV > 0xa) {
                ACV = ACV - 1;
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) > 0) {
                    setListScrollTarget(h - 0x10);
                    return 3;
                }
                unk_ac = 9;
            }
        } else if (MenuKeys_HasDown(pad)) {
            s32 n = getListCount() - 1;
            u8 c = unk_ac;
            if (c < 0xf) {
                if (c < n + 0xa) {
                    ACV = ACV + 1;
                }
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) + 5 < n) {
                    setListScrollTarget(h + 0x10);
                    return 3;
                }
            }
        } else if (MenuKeys_HasLeft(pad)) {
            unk_ae = 0x98;
            unk_af = ((MenuCursorBase *)&unk_484)->getScreenY();
            return 2;
        }
    } else if (old == 0x10) {
        if (MenuKeys_HasUp(pad)) {
            unk_ac = 8;
        } else if (MenuKeys_HasLeft(pad)) {
            s32 v = unk_43c.getGripY();
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            unk_ac = ((v - 0x50) >> 4) + 0xa;
        }
    } else if ((u8)(old + 0xf8) <= 1) {
        if (MenuKeys_HasUp(pad)) {
            unk_ac = 5;
            ((MenuCursor *)&unk_484)->switchToAnim0D();
        } else if (MenuKeys_HasDown(pad)) {
            unk_ac = 0xa;
        } else if (MenuKeys_HasLeft(pad)) {
            if (unk_ac == 9) {
                unk_ae = 0x98;
                unk_af = ((MenuCursorBase *)&unk_484)->getScreenY();
                return 2;
            }
            unk_ac = 9;
        } else if (MenuKeys_HasRight(pad)) {
            if (unk_ac == 8 && testFlags(8)) {
                unk_ac = 0x10;
            } else {
                unk_ac = 8;
            }
        }
    }
    if (old != unk_ac) {
        return 1;
    }
    return 0;
}

s32 MapTab::onCursorDecide() {
    if (testFlags(0x800)) {
        selectEntry(unk_ad + 1);
        playSeAtMarker(0x38);
        return 0;
    }
    u32 s = unk_ac;
    if (s == 0x10) {
        setMainState(7);
        unk_43c.grab();
        setFlags(0x1000);
        Menu_PlayScrollGrabSe(&unk_43c);
        return 1;
    } else if (s == 8) {
        if (testFlags(1)) {
            selectEntry(0);
            showResidentsList();
            Snd_PlaySe(0x36);
            return 2;
        }
        return 0;
    } else if (s == 9) {
        if (!testFlags(1)) {
            selectEntry(0);
            showPlacesList();
            Snd_PlaySe(0x36);
            return 2;
        }
        return 0;
    } else if (s <= 7) {
        if (requestTab(s)) {
            return 1;
        }
        return 0;
    } else if (s >= 0xa && s <= 0xf) {
        { u32 t = unk_a3; selectEntry(t + s + 5); };
        playSeAtMarker(0x37);
        return 0;
    }
    return 0;
}

void MapTab::playSeAtMarker(s32 a) {
    u32 i = unk_a9;
    if (i != 0xe) {
        s32 v = (unk_4571[i].unk_00 - 0x18) * 2 - 0x7f;
        if (v < -0x7f) {
            v = -0x7f;
        } else if (v > 0x80) {
            v = 0x80;
        }
        func_02004018(a, v);
    }
}

BOOL MapTab::testFlags(u32 m) {
    if (unk_9c & m) {
        return TRUE;
    }
    return FALSE;
}

void MapTab::setFlags(u32 m) { unk_9c = unk_9c | m; }

void MapTab::clearFlags(u32 m) { unk_9c = unk_9c & ~m; }

MapTabMarker::MapTabMarker() {}

MapTabMarker::~MapTabMarker() {}

