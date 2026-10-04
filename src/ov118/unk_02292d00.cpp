#include "types.h"
#include "Unk_020d8c7c.h"
#include "town/TownMapMarkers.h"
#include "ui/UiWidget.h"

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
extern u8 gSaveTownId[];
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];

void String_Load2dMenu(void *self, u32 v);
void _ZN11MsgString9CC2Ev(void *self);
void _ZN11MsgString9CD1Ev(void *self);
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
s32 Oam_DrawObj(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
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
s32 PlayerDataArray_FindById(void *a, s32 b);
BOOL PlayerDataArray_IsUsed(void *a, s32 b);
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
void *PlayerActor_GetBodyPos(s32 a);
s32 Scene_GetWarpRequest();
void *ScenePos_GetPos(void *p);
void TownId_GetNameString(void *a, void *b);
void String_SetSlot(s32 a, void *p);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
}

// 0x40-byte element with ctor/dtor in main
class LabelString {
public:
    LabelString();
    ~LabelString();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();
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
    virtual BOOL vfunc_20(u32 status);
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



// 3-byte element with empty out-of-line ctor and dtor
class MapTabMarker {
public:
    MapTabMarker();
    ~MapTabMarker();
    u8 x;
    u8 y;
    u8 cell;
};

#define A8V (*(volatile u8 *)&blinkTimer)
#define ACV (*(volatile u8 *)&cursorTarget)

typedef struct MapTab Unk_ov118_022955c8_fwd;
class MapTab;
typedef void (MapTab::*Unk_ov118_022955c8_Fn)();

// Vtable 0x022955c8, size 0x459c
class MapTab : public MenuProc {
public:
    MapTab() : screenTasks(), textLabels(), scrollKnob(), cursor(), townMarkers(), terrainMarkers(), buildingMarkers() {}

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
    void setEntryName(LabelString *p, u32 idx);
    s32 buildEntryLabels(u8 *tbl);
    void layoutListLabels();
    void buildEntryLists();
    LabelString *allocTextLabel();
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
    /* 0x0094 */ s32 slideY;
    /* 0x0098 */ u16 listScroll;
    /* 0x009a */ u16 listScrollTarget;
    /* 0x009c */ u16 flags;
    /* 0x009e */ u8 selfMarkerX;
    /* 0x009f */ u8 selfMarkerY;
    /* 0x00a0 */ volatile u8 labelCount;
    /* 0x00a1 */ u8 residentCount;
    /* 0x00a2 */ u8 placeCount;
    /* 0x00a3 */ u8 listTopRow;
    /* 0x00a4 */ u8 knobPos;
    /* 0x00a5 */ u8 dragStartTouchY;
    /* 0x00a6 */ u8 knobLastTickPos;
    /* 0x00a7 */ u8 dragStartKnobPos;
    /* 0x00a8 */ u8 blinkTimer;
    /* 0x00a9 */ u8 selectedMarker;
    /* 0x00aa */ u8 selectedRow;
    /* 0x00ab */ u8 returnState;
    /* 0x00ac */ u8 cursorTarget;
    /* 0x00ad */ u8 cursorMarker;
    /* 0x00ae */ u8 mapCursorX;
    /* 0x00af */ u8 mapCursorY;
    /* 0x00b0 */ u8 playerEntryCount;
    /* 0x00b1 */ u8 selfBlinkCounter;
    /* 0x00b2 */ u8 unk_b2[2];
    /* 0x00b4 */ BgVramTask screenTasks[2];
    /* 0x00fc */ LabelString textLabels[13];
    /* 0x043c */ MenuScrollKnob scrollKnob;
    /* 0x0484 */ MenuCursorBuf0 cursor;
    /* 0x04e8 */ u8 frameScreen[0x800];
    /* 0x0ce8 */ u16 listScreen[0x400];
    /* 0x14e8 */ u16 listScreenWork[0x400];
    /* 0x1ce8 */ u16 listScreenBase[0x400];
    /* 0x24e8 */ u8 mapChars[0x2000];
    /* 0x44e8 */ TownMapMarkers townMarkers;
    /* 0x454e */ u8 residentEntries[13];
    /* 0x455b */ u8 placeEntries[13];
    /* 0x4568 */ MapTabMarker terrainMarkers[3];
    /* 0x4571 */ MapTabMarker buildingMarkers[14];
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
    u32 base = slideY + 0x60;
    s32 i;
    if (testFlags(4)) {
        if (testFlags(8)) {
            scrollKnob.moveTo(0x67, (slideY - 0x12) + knobPos);
        }
        if (MenuCtrl_IsButtons()) {
            if (testFlags(0x1000)) {
                s32 a = scrollKnob.getGripX();
                s32 b = scrollKnob.getGripY();
                ((MenuCursorBase *)&cursor)->warpTo(a, b);
            }
            ((MenuCursorBase *)&cursor)->drawWrapped();
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
            u32 t = cursorMarker;
            if (t != 0xe) {
                u8 *e = (u8 *)this + t * 3;
                if (e[0x4573] != 0xc) {
                    drawMapIcon(e[0x4571], slideY + e[0x4572], 0xb, 0, -1);
                }
            }
        }
        selfBlinkCounter = (selfBlinkCounter + 1) & 0xf;
        if ((selfBlinkCounter & 0xc) != 0) {
            drawMapIcon(selfMarkerX, selfMarkerY + slideY, 0xa, 0, -1);
        }
        for (i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x456a];
            if (c != 0xc) {
                drawMapIcon(e[0x4568], slideY + e[0x4569], (u8)(c & 0x7f), (c & 0x80) != 0 ? 1 : 0, -1);
            }
        }
        for (i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x4573;
            if (*q != 0xc) {
                s32 f;
                if (i == selectedMarker && !testFlags(0x100)) {
                    f = 8;
                } else {
                    f = -1;
                }
                drawMapIcon(e[0x4571], slideY + e[0x4572], *q, 0, f);
            }
        }
        if (testFlags(8)) {
            scrollKnob.vfunc_08();
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
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

extern "C" void *data_ov118_022954b8[2] = {(void *)_ZN6MapTab12updateBarTapEv, 0};

extern "C" u32 sMapTabPlacesButtonCells[8] = {0x402a00d3, 0x0000e1a2, 0x003a80d3, 0x0000e1a4, 0x002a40e3, 0x0000e1e2, 0x003a00e3, 0xffffe1e4};

extern "C" void *data_ov118_022954a8[2] = {(void *)_ZN6MapTab16updateCursorMoveEv, 0};

void MapTab::runMainState() {
    static Unk_ov118_022955c8_Fn tbl[11] = {*(Unk_ov118_022955c8_Fn *)data_ov118_022954d0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954d8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295528, *(Unk_ov118_022955c8_Fn *)data_ov118_022954a8, *(Unk_ov118_022955c8_Fn *)data_ov118_02295488, *(Unk_ov118_022955c8_Fn *)data_ov118_02295490, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954c8, *(Unk_ov118_022955c8_Fn *)data_ov118_022954e0, *(Unk_ov118_022955c8_Fn *)data_ov118_022954b0};
    (this->*tbl[mainState])();
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
    if (mainState != 0 && mainState != 3 && mainState != 10) {
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
        transitionState = 7;
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
    _ZN11MsgString9CC2Ev(buf);
    TownId_GetNameString(gSaveTownId, buf);
    String_SetSlot(0, buf);
    LabelString *o = allocTextLabel();
    o->createLabel(8, 0x1ab, 0x12, 0xf, 0, 0);
    String_Load2dMenu(o, 0xa9);
    o->redrawAligned(1, 0);
    _ZN11MsgString9CD1Ev(buf);
    beginSubSlideIn(0xa, 3, 0, 0x30);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0x50 - listScroll);
    setFlags(4);
    slideY = getSlideOffsetY();
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
    applySlideOffset(6, 0, 0x50 - listScroll);
    slideY = getSlideOffsetY();
}

void MapTab::stateClose() {
    hideCursor();
    beginSubSlideOut(0xa, 0, 0, 0x30);
    applySlideOffset(4, 0, 0);
    applySlideOffset(6, 0, 0x50 - listScroll);
    setTransitionState(8);
    slideY = getSlideOffsetY();
}

void MapTab::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(4);
        Gfx2d_ResetLayer(6);
        clearFlags(4);
        setPhase(5);
    } else {
        applySlideOffset(4, 0, 0);
        applySlideOffset(6, 0, 0x50 - listScroll);
        slideY = getSlideOffsetY();
    }
}

void MapTab::initMapTab() {
    volatile Unk_ov118_02294a58_Vec v;
    Unk_ov118_02294a58_Vec *p;
    labelCount = 0;
    flags = 0;
    listScroll = 0;
    listScrollTarget = 0;
    knobPos = 0;
    slideY = 0;
    blinkTimer = 0;
    cursorTarget = 8;
    mapCursorX = 0x58;
    mapCursorY = 0x70;
    cursorMarker = 0xe;
    selectEntry(0);
    buildEntryLists();
    if (Unk_ov118_02294a58_IsZero(gFieldSceneKind)) {
        p = (Unk_ov118_02294a58_Vec *)PlayerActor_GetBodyPos(4);
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
    selfMarkerX = ((v.x + 0x800) >> 12) - 8;
    selfMarkerY = z + 13;
    scrollKnob.setState(1);
    if (((MenuTabBar *)ProcBase_GetParent(this))->isJustOpened()) {
        setFlags(0x2000);
    }
}

void MapTab::releaseResources() {
    resetTextLabels();
    screenTasks[0].cancel();
    screenTasks[1].cancel();
}

void MapTab::preStateUpdate() {
    resetTextLabels();
}

void MapTab::postStateUpdate() {
    if (isListScrolling()) {
        updateListScroll();
        Gfx2d_SetLayerOffset(6, 0, listScroll - 0x50);
        if (listTopRow != (listScroll >> 4)) {
            setFlags(0x80);
        }
    }
    updateBlink();
    if (testFlags(0x80)) {
        clipListScreen();
        clearFlags(0x80);
    }
    if (testFlags(0x20)) {
        if (screenTasks[1].requestScreen((u32)frameScreen, 4, 0x800, 0)) {
            clearFlags(0x20);
        }
    }
    if (testFlags(2)) {
        if (screenTasks[0].requestScreen((u32)listScreen, 6, 0x800, 0)) {
            clearFlags(2);
        }
    }
}

void MapTab::preInputUpdate() {
    preStateUpdate();
    scrollKnob.vfunc_0c();
    cursor.vfunc_0c();
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
    File_LoadToBuffer("menu/map/b_map_a_bg.bsc", frameScreen, 0x800);
    Gfx2d_LoadScreen(frameScreen, 4, 0x800, 0);
    File_LoadToBuffer("menu/map/b_map_b_bg.bsc", listScreenBase, 0x800);
    BgScreen_SetRectPalette(listScreenBase, 0x13, 0, 0x1c, 1, 4);
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
    a = mapChars;
    TownMapMarkers_Clear(&townMarkers);
    b = (u8 *)&townMarkers;
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
            scrollKnob.grab();
        } else if (touchMarker()) {
            playSeAtMarker(0x38);
        } else if (touchListRow()) {
            playSeAtMarker(0x37);
        }
    }
}

void MapTab::updateKnobDrag() {
    if (gTouchHeld == 0) {
        scrollKnob.setState(3);
        startTouchInput();
    }
    scrollListToKnob(dragStartKnobPos + (gTouchCurY - dragStartTouchY));
}

void MapTab::updateBarTap() {
    u32 v;
    if (gTouchHeld == 0) {
        scrollKnob.setState(3);
        startTouchInput();
    }
    v = knobPos;
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
            u8 t = cursorTarget;
            if (t >= 0xa && t <= 0xf) {
                setListScrollTarget(listScroll & ~0xf);
            }
        }
        moveCursorToTarget();
        break;
    case 2:
        selectEntry(0);
        highlightListRow(0xe);
        cursorMarker = findMarkerAt(mapCursorX, mapCursorY);
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
    if (((MenuCursorBase *)&cursor)->isMoving() == 0) {
        setMainState(returnState);
        runMainState();
    }
}

void MapTab::updateCursorPress() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        s32 r = onCursorDecide();
        if (r != 1) {
            if (r == 2) {
                setListScroll(0);
                listTopRow = 0xff;
                releaseCursor();
            } else {
                releaseCursor();
            }
        }
    }
}

void MapTab::updateCursorRelease() {
    if (_ZN10HandCursor10isAnimDoneEv(&cursor)) {
        refreshCursor();
        if (testFlags(0x800)) {
            setMainState(0xa);
        } else {
            setMainState(3);
        }
    }
}

void MapTab::updateKnobGrab() {
    if (scrollKnob.areAnimsDone()) {
        setMainState(8);
    }
}

void MapTab::updateKnobHold() {
    if ((gPad[0] & 1) == 0) {
        scrollKnob.setState(3);
        setMainState(9);
    } else {
        scrollListByPad();
    }
}

void MapTab::updateKnobRelease() {
    if (scrollKnob.areAnimsDone()) {
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
    if ((trg & 1) && cursorMarker != 0xe) {
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
    ox = mapCursorX;
    x = ox;
    oy = mapCursorY;
    y = oy;
    cur = gPad[0];
    if (cur & 0x40) {
        y = oy - 4;
    } else if (cur & 0x80) {
        y = oy + 4;
    }
    if (y < 0x30) {
        cursorTarget = MenuTabBar_TabFromX(ox);
        ((MenuCursor *)&cursor)->switchToAnim0D();
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
            cursorTarget = 9;
        } else {
            y = (y - 0x50) >> 4;
            if (y >= getListCount()) {
                y = getListCount() - 1;
            }
            y += 0xa;
            cursorTarget = y;
        }
        exitMapCursor();
        return;
    }
    if (x == ox && y == oy) return;
    mapCursorX = x;
    mapCursorY = y;
    cursorMarker = findMarkerAt(mapCursorX, mapCursorY);
    ((MenuCursorBase *)&cursor)->warpTo(mapCursorX, mapCursorY);
}

void MapTab::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void MapTab::startButtonInput() {
    scrollKnob.setState(1);
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
    MIi_CpuCopy16(listScreenWork, listScreen, 0x800);
    n = listScroll >> 4;
    listTopRow = n;
    off = 0x13;
    for (i = 0; i < n; i++) {
        v0 = 0x10;
        MIi_CpuClear16(v0, listScreen + off, 0x14);
        v1 = 0x10;
        MIi_CpuClear16(v1, listScreen + (off + 0x20), 0x14);
        off += 0x40;
    }
    j = n + 7;
    off = j * 0x40 + 0x13;
    for (; j < 13; j++) {
        v2 = 0x10;
        MIi_CpuClear16(v2, listScreen + off, 0x14);
        v3 = 0x10;
        MIi_CpuClear16(v3, listScreen + (off + 0x20), 0x14);
        off += 0x40;
    }
    setFlags(2);
}

void MapTab::buildListScreen() {
    s32 i;
    u8 *tbl;
    MIi_CpuCopy16(listScreenBase, listScreenWork, 0x800);
    tbl = getListEntries();
    for (i = 0; i < 13; i++) {
        s32 a = getEntryIconRow(tbl[i], i) * 0x40 + 0x13;
        s32 b = i * 0x40 + 0x13;
        listScreenWork[b] = listScreenBase[a];
        listScreenWork[b + 1] = listScreenBase[a + 1];
        listScreenWork[b + 0x20] = listScreenBase[a + 0x20];
        listScreenWork[b + 0x21] = listScreenBase[a + 0x21];
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
    labelCount = 0;
    LabelString *p = textLabels;
    do {
        (p + i)->destroyLabel();
        i++;
    } while (i < 13);
}

LabelString *MapTab::allocTextLabel() {
    if (labelCount >= 13) {
        return &textLabels[12];
    }
    labelCount = labelCount + 1;
    return &textLabels[labelCount - 1];
}

void MapTab::buildEntryLists() {
    s32 n = 0;
    s32 m, i;
    m = PlayerDataArray_FindById(gSavePlayers, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    if (m != -1) {
        residentEntries[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!PlayerDataArray_IsUsed(gSavePlayers, i)) {
            continue;
        }
        residentEntries[n] = i + 2;
        n++;
    }
    playerEntryCount = n;
    for (i = 0; i < 8; i++) {
        if (SaveVillagers_IsOccupied(gSaveVillagers, i)) {
            residentEntries[n] = i + 6;
            n++;
        }
    }
    residentCount = n;
    for (; n < 0xd; n++) {
        placeEntries[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        placeEntries[n] = i + 0xe;
        n++;
    }
    placeCount = n;
    for (; n < 0xd; n++) {
        placeEntries[n] = 0;
    }
}

void MapTab::layoutListLabels() {
    if (testFlags(1)) {
        buildEntryLabels(placeEntries);
    } else {
        buildEntryLabels(residentEntries);
    }
}

s32 MapTab::buildEntryLabels(u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        LabelString *w = allocTextLabel();
        w->createLabel(6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        setEntryName(w, tbl[i]);
        w->redrawAligned(0, 0);
    }
}

void MapTab::setEntryName(LabelString *p, u32 idx) {
    if (idx == 0) {
        _ZN9MsgString5clearEv(p);
    } else if (idx == 1) {
        PopupChoice_CopyPlayerIdName(p, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    } else if (idx >= 2 && idx < 6) {
        PopupChoice_CopyResidentName(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        PopupChoice_CopyVillagerName(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        String_Load2dMenu(p, idx + 0x88);
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
    BgScreen_SetRectPalette(frameScreen, 0x1d, 0xa, 0x1d, 0x15, k);
    setFlags(0x20);
    highlightListRow(selectedRow);
}

u8 *MapTab::getListEntries() {
    if (testFlags(1)) {
        return placeEntries;
    }
    return residentEntries;
}

u8 MapTab::getListCount() {
    if (testFlags(1)) {
        return placeCount;
    }
    return residentCount;
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
    idx = (y + (listScroll - 0x50)) >> 4;
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
    Oam_DrawObj(1, &sMapTabIconCell, x, y, pal, 1, 0);
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
        selectedMarker = 0xe;
        selectedRow = 0xe;
        stopBlink();
        return;
    }
    startBlink();
    selectedRow = selectionToListRow(v);
    selectedMarker = selectionToMarker(v);
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
    highlightListRow(selectedRow);
}

s32 MapTab::highlightListRow(u32 v) {
    setFlags(0x80);
    if (v == 0xe) {
        BgScreen_SetRectPalette(listScreenWork, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        BgScreen_SetRectPalette(listScreenWork, 0x13, 0, 0x1c, playerEntryCount * 2 - 1, 3);
    } else {
        BgScreen_SetRectPalette(listScreenWork, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

u8 MapTab::selectionToListRow(u32 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = residentCount;
        for (; i < n; i++) {
            if (t == residentEntries[i]) {
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
    u32 a = selectedRow;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    setListScroll(v);
    listTopRow = 0xff;
}

void MapTab::ensureSelectionVisible() {
    u32 c = selectedRow;
    if (c != 0xe) {
        if (c == 0xd) {
            setListScrollTarget(0);
        } else {
            s32 t = (listScroll + 0xf) >> 4;
            if ((s32)c < t) {
                setListScrollTarget(c << 4);
            }
            s32 h = listScroll >> 4;
            u32 a = selectedRow;
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
    listScroll = v;
    listScrollTarget = listScroll;
    setFlags(0x10);
}

void MapTab::setListScrollTarget(u32 v) {
    listScrollTarget = v;
    setFlags(0x10);
}

BOOL MapTab::isListScrolling() {
    return testFlags(0x10);
}

void MapTab::updateListScroll() {
    s32 n = getListScrollMax();
    if (n == 0) {
        clearFlags(0x10);
        knobPos = 0;
    } else {
        u32 a = ((volatile MapTab *)this)->listScrollTarget;
        u32 b = ((volatile MapTab *)this)->listScroll;
        if (b == a) {
            clearFlags(0x10);
        } else if (b < a) {
            listScroll = listScroll + 8;
            if (listScroll > listScrollTarget) {
                listScroll = listScrollTarget;
            }
        } else if (b < 8) {
            listScroll = a;
        } else {
            listScroll = listScroll - 8;
            if (listScroll < listScrollTarget) {
                listScroll = listScrollTarget;
            }
        }
        knobPos = (s32)(listScroll * 0x58) / n;
    }
}

BOOL MapTab::touchScrollBar() {
    s32 x, y;
    if (!testFlags(8)) {
        return FALSE;
    }
    x = gTouchCurX;
    y = gTouchCurY;
    if (scrollKnob.hitTest(x, y)) {
        dragStartTouchY = y;
        dragStartKnobPos = knobPos;
        knobLastTickPos = dragStartKnobPos;
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
    s32 d = t - knobLastTickPos;
    if (d >= 4 || d <= -4) {
        Menu_PlayScrollTickSe(&scrollKnob);
        knobLastTickPos = t;
    }
    s32 m = getListScrollMax();
    setListScroll(_s32_div_f(t * m, 0x58));
}

void MapTab::scrollListByPad() {
    s32 pos = listScrollTarget;
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
    if (pos != listScrollTarget) {
        Menu_PlayScrollTickSe(&scrollKnob);
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
    listTopRow = 0xff;
    return 1;
}

void MapTab::updateBlink() {
    if (testFlags(0x40)) {
        if (A8V != 0) {
            A8V = A8V - 1;
        }
        u32 v = blinkTimer;
        if (v == 0) {
            if (testFlags(0x200)) {
                clearFlags(0x100);
            } else {
                highlightListRow(selectedRow);
            }
            blinkTimer = 0xf;
        } else if (blinkTimer == 5) {
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
    blinkTimer = 0xf;
}

void MapTab::stopBlink() {
    clearFlags(0x40);
    clearFlags(0x100);
}

void MapTab::showCursor() {
    if (!testFlags(8) && cursorTarget == 0x10) {
        cursorTarget = 8;
    }
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    ((MenuCursorBase *)&cursor)->warpTo(a, b);
    if (cursorTarget >= 0xa && cursorTarget <= 0xf) {
        setListScrollTarget(listScroll & ~0xf);
    }
    if (cursorTarget <= 7) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(0xd);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 MapTab::getCursorTargetX() {
    if (testFlags(0x800)) {
        return mapCursorX;
    }
    u32 c = cursorTarget;
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
        return scrollKnob.getGripX();
    }
    return 0x80;
}

s32 MapTab::getCursorTargetY() {
    if (testFlags(0x800)) {
        return mapCursorY;
    }
    u32 c = cursorTarget;
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
        return scrollKnob.getGripY();
    }
    return 0x60;
}

void MapTab::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void MapTab::moveCursorToTarget() {
    if (testFlags(0x4000)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        ((MenuCursorBase *)&cursor)->warpTo(a, b);
        clearFlags(0x4000);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        ((MenuCursorBase *)&cursor)->moveToEase(a, b, 3, 1);
        returnState = mainState;
        setMainState(4);
    }
}

void MapTab::pressCursor() {
    ((MenuCursor *)&cursor)->setPosePress();
    setMainState(5);
}

void MapTab::releaseCursor() {
    ((MenuCursorBase *)&cursor)->setPoseRelease();
    setMainState(6);
}

void MapTab::refreshCursor() {
    ((MenuCursorBase *)&cursor)->setPoseIdle();
    cursor.vfunc_0c();
}

s32 MapTab::moveCursorByPad(void *pad) {
    u32 old = cursorTarget;
    if (old <= 7) {
        if (MenuKeys_HasDown(pad)) {
            s32 cv = cursorTarget;
            if (cv <= 3) {
                mapCursorX = ((MenuCursorBase *)&cursor)->getScreenX();
                mapCursorY = 0x30;
                ((MenuCursor *)&cursor)->switchToAnim01();
                return 2;
            }
            if (cv >= 5) {
                cursorTarget = 8;
            } else {
                cursorTarget = 9;
            }
            ((MenuCursor *)&cursor)->switchToAnim01();
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
            cursorTarget = 0x10;
        } else if (MenuKeys_HasUp(pad)) {
            if (ACV > 0xa) {
                ACV = ACV - 1;
            } else {
                u32 h = listScrollTarget;
                if (((s32)h >> 4) > 0) {
                    setListScrollTarget(h - 0x10);
                    return 3;
                }
                cursorTarget = 9;
            }
        } else if (MenuKeys_HasDown(pad)) {
            s32 n = getListCount() - 1;
            u8 c = cursorTarget;
            if (c < 0xf) {
                if (c < n + 0xa) {
                    ACV = ACV + 1;
                }
            } else {
                u32 h = listScrollTarget;
                if (((s32)h >> 4) + 5 < n) {
                    setListScrollTarget(h + 0x10);
                    return 3;
                }
            }
        } else if (MenuKeys_HasLeft(pad)) {
            mapCursorX = 0x98;
            mapCursorY = ((MenuCursorBase *)&cursor)->getScreenY();
            return 2;
        }
    } else if (old == 0x10) {
        if (MenuKeys_HasUp(pad)) {
            cursorTarget = 8;
        } else if (MenuKeys_HasLeft(pad)) {
            s32 v = scrollKnob.getGripY();
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            cursorTarget = ((v - 0x50) >> 4) + 0xa;
        }
    } else if ((u8)(old + 0xf8) <= 1) {
        if (MenuKeys_HasUp(pad)) {
            cursorTarget = 5;
            ((MenuCursor *)&cursor)->switchToAnim0D();
        } else if (MenuKeys_HasDown(pad)) {
            cursorTarget = 0xa;
        } else if (MenuKeys_HasLeft(pad)) {
            if (cursorTarget == 9) {
                mapCursorX = 0x98;
                mapCursorY = ((MenuCursorBase *)&cursor)->getScreenY();
                return 2;
            }
            cursorTarget = 9;
        } else if (MenuKeys_HasRight(pad)) {
            if (cursorTarget == 8 && testFlags(8)) {
                cursorTarget = 0x10;
            } else {
                cursorTarget = 8;
            }
        }
    }
    if (old != cursorTarget) {
        return 1;
    }
    return 0;
}

s32 MapTab::onCursorDecide() {
    if (testFlags(0x800)) {
        selectEntry(cursorMarker + 1);
        playSeAtMarker(0x38);
        return 0;
    }
    u32 s = cursorTarget;
    if (s == 0x10) {
        setMainState(7);
        scrollKnob.grab();
        setFlags(0x1000);
        Menu_PlayScrollGrabSe(&scrollKnob);
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
        { u32 t = listTopRow; selectEntry(t + s + 5); };
        playSeAtMarker(0x37);
        return 0;
    }
    return 0;
}

void MapTab::playSeAtMarker(s32 a) {
    u32 i = selectedMarker;
    if (i != 0xe) {
        s32 v = (buildingMarkers[i].x - 0x18) * 2 - 0x7f;
        if (v < -0x7f) {
            v = -0x7f;
        } else if (v > 0x80) {
            v = 0x80;
        }
        func_02004018(a, v);
    }
}

BOOL MapTab::testFlags(u32 m) {
    if (flags & m) {
        return TRUE;
    }
    return FALSE;
}

void MapTab::setFlags(u32 m) { flags = flags | m; }

void MapTab::clearFlags(u32 m) { flags = flags & ~m; }

MapTabMarker::MapTabMarker() {}

MapTabMarker::~MapTabMarker() {}

