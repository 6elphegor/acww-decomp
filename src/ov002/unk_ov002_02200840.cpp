// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "ui/CursorMotion.h"
#include "sys/KeyRepeat.h"
#include "menu/MenuTween.h"
#include "menu/PopupChoiceIdList.h"
#include "ui/Unk_ov002_022018e4_Arg.h"
#include "ui/Unk_ov002_02203c5c_Rec.h"
#include "talk/TalkWindowState.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "talk/LabelBalloonText.h"
#include "menu/MenuSlide.h"
#include "talk/MsgString.h"
#include "talk/MsgRequest.h"

// ---------------------------------------------------------------------------------------------------------------------
// Real names of functions of other modules (plain names that are really methods / ctors / dtors)
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define func_02094018 _ZN11MsgString9BD1Ev
#define func_02094030 _ZN11MsgString9BC1Ev
#define PlayerId_getNameString _ZN8PlayerId13getNameStringEP9MsgString
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_0206fcc8 _ZN11LabelStringC1Ev
#define func_0206fca8 _ZN11LabelStringD1Ev
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_append _ZN9MsgString6appendEPh
#define MsgString_appendString _ZN9MsgString12appendStringEPS_
#define LabelButton_setLabelText _ZN11LabelButton12setLabelTextEv

extern "C" {
BOOL _ZN8ProcBase8vfunc_14Ev(void *self, s32 a);
void _ZN8GameProc10postCreateEv(void *self, s32 a);
void _ZN16MenuTitleBalloon8showTextEhii(void *self, s32 x, s32 a, s32 b);
void VillagerId_getName(s32 a, void *buf);
s32 VillagerData_getVillagerId(void *self);
void func_02094018(void *p);
void func_02094030(void *p);
void PlayerId_getNameString(s32 a, void *buf);
s32 PlayerData_getPlayerId(void *self);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void MsgString_copy(void *self, void *src);
void MsgString_append(void *self, const void *s);
void MsgString_appendString(void *self, void *src);
void LabelButton_setLabelText(void *self, void *src);

void Gfx2d_SetWindowRect(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
void MenuScreen_ClearState();
BOOL MenuScreen_IsClosed();
BOOL MenuScreen_IsOpen();
void MenuCtrl_SetButtons();
void MenuCtrl_SetTouch();
void MenuCtrl_RemoveOpenMenu(void *p);
void MenuCtrl_AddOpenMenu(void *p);
void Gfx2d_EnableMainWindows(s32 a);
void Gfx2d_SetMainWin0Planes(s32 a);
s32 Gfx2d_GetMainWindows();
void Gfx2d_RemoveMainWinOutPlanes(s32 a);
void Gfx2d_SetMainWinOutPlanes(s32 a);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetSubWin0Planes(s32 a, s32 b);
void Gfx2d_SetSubWinOutPlanes(s32 a);
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_DisableMainWindows(s32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *ProcBase_GetParent(void *p);
void ProcBase_SetExecutePriority(void *p, u32 v);
void ProcBase_SetDrawPriority(void *p, u32 v);
s32 func_01ffcb0c(s32 a, s32 b);
void Letter_SetRecipientFutureSelf(void *p);
void Letter_SetRecipientResident(void *p, s32 a);
void Letter_SetRecipientVillager(void *p, s32 a);
void String_Load2d(void *buf, u8 *c, s32 z);
void String_FromEncodedBytes(void *dst, const void *s, s32 len);
void String_Load2dMenu(void *a, s32 v);
void *PlayerData_GetCurrent();
s32 PlayerDataArray_FindById(void *a, s32 b);
s32 PlayerDataArray_IsUsed(void *a, s32 b);
void *PlayerData_GetResident(void *a, s32 b);
s32 SaveVillagers_IsOccupied(void *a, s32 b);
void *SaveVillagers_Get(void *a, s32 b);
s32 Villager_FindMemory(void *a, s32 b);
BOOL MenuCtrl_IsButtons();
void Gfx2d_HideLayer(s32 a);
s32 Gfx2d_GetLayerPlaneMask(s32 a);
s32 Gfx2d_EndSubObjWinBrightness();
s32 Gfx2d_BeginSubObjWinBrightness();
void Gfx2d_GetLayerBlendMask(s32 a);
void Gfx2d_ExcludeSubBrightnessPlanes();
s32 Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, u32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
u8 *File_LoadAlloc(const char *path, void *heap, s32 a, s32 b);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
void MIi_CpuClear16(s32 v, void *dst, s32 n);
void Gfx2d_LoadScreen(void *buf, s32 a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadCharFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadScreenFile(char *buf, void *h, s32 x);
s32 func_020639e8(char *buf, const char *fmt, ...);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void GXS_LoadOBJPltt(const void *p, u32 a, u32 b);
s32 MenuCtrl_IsForceCloseDue();

extern void *gMenuHeap;
extern void *gCurrentHeap;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern volatile u16 gPad[];
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u8 gTalkMsgIndexEnd[];
}

void operator delete(void *p);

// Constructors / destructors that the symbols name differently from what the compiler generates (base-object C2 without
// the unused C1, ctor/dtor of the 0x0220464c family) are defined as extern "C" functions with their real mangled names.
extern "C" {
extern char _ZTV9MenuTween[];
extern char _ZTV8MenuProc[];
extern char _ZTV19MenuLabelButtonBase[];
extern void *_ZTV10MenuCursor[7];
extern void *_ZTV14MenuCursorBuf0[7];
extern void *_ZTV14MenuCursorBuf1[7];
extern char _ZTV8GameProc[];
void *_ZN8ProcBaseC2Ev(void *self);
void *_ZN11LabelButtonC2Ehi(void *self, u8 a, s32 b);
void *_ZN10HandCursorC2Ei(void *self, s32 flag);
void *_ZN10HandCursorD2Ev(void *self);
void *_ZN9KeyRepeatC1Ev(void *self);
void *_ZN9MenuSlideC1Ev(void *self);
void *_ZN12CursorMotionC1Ev(void *self);
void *_ZN12CursorMotionD1Ev(void *self);
void _ZN10HandCursor4drawEv();
void _ZN14MenuCursorBase8vfunc_0cEv();
void _ZN8UiWidget9setOriginEii();
}

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the main module






// String buffer wrapping a text renderer (TextLabel) at +0x3c
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

    u32 getTextWidth();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *label;
};


class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    s32 getWidth();
    s32 getPosY();
    s32 getPosX();
    s32 getState();
    BOOL requestClose();
    BOOL requestOpen();
    void refreshText(s32 flag);
    void setClampToScreen(u8 v);
    void enableCenterText();
    void setText(StrBuf *src);
    void setPos(s32 a, s32 b);
    void hideLayer2();
    void showLayer2();
    void disablePopAnim();
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim layer1;
    /* 0x20 */ SpriteAnim layer2;
    /* 0x34 */ s32 state;
    /* 0x38 */ s32 animTimer;
    /* 0x3c */ s32 x;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 priority;
    /* 0x48 */ s32 popOffsetX;
    /* 0x4c */ s32 popOffsetY;
    /* 0x50 */ s32 clampOffsetX;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ LabelBalloonText text;
    /* 0x88 */ LabelBalloonText text2;
    /* 0xb0 */ TextLabel *label;
    /* 0xb4 */ TextLabel *label2;
    /* 0xb8 */ s32 textMode;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim layer1;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 priority;
    /* 0x2c */ SpriteAnim layer2;
    /* 0x40 */ s32 anim;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 onBufferA;
    /* 0x49 */ u8 hasLayer2;
    /* 0x4a */ u8 objWindow;
};

class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL areAnimsDone();
    s32 getState();
    void setState(s32 idx);
    void getAnimOffset(s32 *a, s32 *b);

    /* 0x0c */ s32 layer1;
    /* 0x10 */ s32 posY;
    /* 0x14 */ SpriteAnim layerAnim1;
    /* 0x28 */ SpriteAnim priority;
    /* 0x3c */ s32 state;
    /* 0x40 */ u8 anim;
    /* 0x44 */ s32 unk_44;
};

class LabelButton : public UiWidget {
public:
    LabelButton(u8 a, s32 b);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getState();
    void setState(s32 v);
    void getAnimOffset(s32 *x, s32 *y);
    void setPos(s32 x, s32 y);
    void showLayer2();
    void hideLayer2();
    void enableObjWindow();

    /* 0x0c */ u8 unk_0c[0x64];
};


class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
};

extern "C" TalkWindowState *TalkWindow_Get(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes


extern "C" {
extern const u8 sTextButtonPressOffsets[];
extern const u8 sMenuButtonTextColors[];
extern const u8 sBottomButtonTargetX[];
extern const u8 sBottomButtonTargetY[];
extern const u8 sBottomButtonOfTarget[];
extern s32 sPopupChoicePopOffsets[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW4A[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW4B[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW6Single[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW8[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW6A[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW6B[];
extern Unk_ov002_02203c5c_Rec sButtonCellsW12[];
}

// Vtable 0x02204468
class TouchPromptBalloon : public LabelBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();

    BOOL isOpenOrOpening();
    void setAutoCloseTimer(u8 v);
    void func_ov002_022006ac(s32 v);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    BOOL hide(s32 a);
    s32 updatePrompt();

    /* 0xbc */ u8 promptState;
    /* 0xbd */ u8 openQueued;
    /* 0xbe */ volatile u8 autoCloseTimer;
};





// methods of the same slider object that the symbols list under another class name
class MenuSlideView : public MenuSlide {
public:
    void setExtent(s32 v);
    void applyWindow(s32 a);
    void applyLayerOffset(s32 a, s32 b, s32 c);
    void initSlideOut(s32 a, s32 mode, s32 dist);
    void initSlideIn(s32 a, s32 mode, s32 dist);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
};

class MenuProc;
typedef void (MenuProc::*Unk_ov002_02200a68_Fn)();

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
    virtual BOOL vfunc_20(u32 status);
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
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    void initKeyRepeat(s32 a, s32 b, s32 c);
    void restartKeyRepeat();
    BOOL isRepeatRight();
    BOOL isRepeatLeft();
    BOOL isRepeatDown();
    BOOL isRepeatUp();
    u32 takeRepeatedKeys();

    /* 0x50 */ KeyRepeat keyRepeat;
    /* 0x54 */ u8 unk_54[0x10];
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ MenuSlide slide;
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

// 8-byte-aligned owner helpers of the menu: text elements
// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
class MenuTextButton {
public:
    MenuTextButton();
    virtual ~MenuTextButton();

    u32 getPressOffset();
    void freeText();
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void renderText(u8 a, u8 b);
    void setLabelNoShadow(u8 v);
    void setLabelWithShadow(u8 v);
    void setLabel(u8 v);
    void setup(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);
    void isDisabled();
    void setEnabled();
    void setDisabled();
    void disableObjWindow();
    void enableObjWindow();
    BOOL stepPress();
    void drawAt(s32 x, s32 y, s32 c);

    /* 0x04 */ LabelString caption;
    /* 0x44 */ Unk_ov002_02203c5c_Rec *cells;
    /* 0x48 */ u8 widthTiles;
    /* 0x49 */ u8 pressStep;
    /* 0x4a */ u8 frameCellCount;
    /* 0x4b */ u8 msgId;
    /* 0x4c */ u8 flags;
};

// Menu, vtable 0x02204770
class MenuTitleBalloon : public LabelBalloon {
public:
    MenuTitleBalloon();
    virtual ~MenuTitleBalloon();
    virtual void setOrigin(s32 a, s32 b);

    void hideNow();
    void showText(u8 a, s32 b, s32 c);
};

// Owner, vtable 0x022046cc
class MenuBottomButtons {
public:
    MenuBottomButtons();
    virtual ~MenuBottomButtons();

    void setLayoutConfirmAnd06(u8 v);
    void setLayoutSingle05(s32 v);
    void setLayoutConfirmQuit04();
    void setLayoutConfirmQuit03();
    void setLayoutConfirm();
    void setLayoutChangeAddressee();
    void setLayoutNeverMindConfirm();
    void hide();
    void drawAt(s32 a);
    void freeTexts();

    /* 0x004 */ MenuTextButton unk_04[2];
    /* 0x0a4 */ MenuTitleBalloon title;
    /* 0x160 */ u8 layout;
    /* 0x161 */ u8 selectedTarget;
};

// Methods of the same object that the symbols list under another class name
class MenuBottomButtonsBody : public MenuBottomButtons {
public:
    void isButtonDisabled(s32 idx);
    void enableButton(s32 idx);
    void disableButton(s32 idx);
    s32 getButtonOfTarget(s32 idx);
    void disableObjWindow();
    void enableObjWindow();
    void getPressOffset();
    void stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 idx);
    BOOL hitTest(s32 idx, s32 x, s32 y);
    void showTitleLayer2();
    void setLayoutYesNo0D(s32 x);
    void setLayoutYesNo0C(s32 x);
    void setLayoutYesNo0B(s32 x);
    void setLayoutTossKeep();
    void setLayoutYesNo09(s32 x);
    void setYesNoButtons();
    void setLayoutYesNo08(s32 x);
    void setLayoutYesNo07(s32 x);
};

// Base of the 0x0220471c / 0x02204738 classes
class MenuLabelButtonBase : public LabelButton {
public:
    MenuLabelButtonBase(u8 a, s32 b);
    virtual ~MenuLabelButtonBase();
    virtual void setOrigin(s32 a, s32 b);
};

class MenuLabelButtonStyle1 : public MenuLabelButtonBase {
public:
    MenuLabelButtonStyle1();
    virtual ~MenuLabelButtonStyle1();
};

// Vtable 0x02204738
class MenuLabelButton : public MenuLabelButtonBase {
public:
    MenuLabelButton();
    virtual ~MenuLabelButton();

    BOOL isTouched();
    void showAt(s32 v, s32 x, s32 y);
    void showDefault(s32 v);
    void setLabel2d(s32 v);
    BOOL stepAnim();
    s32 getAnchorY(s32 k);
    s32 getAnchorX(s32 k);
};

// Non-polymorphic holder object (members at +0x00 and +0xc0)
class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();

    BOOL restoreBrightness();
    s32 dimSubScreen();
    BOOL finishTalk();
    void advanceTalk();
    BOOL isTalkWaiting();
    void undim();
    void hidePromptBalloon();
    void updatePromptBalloon();
    void showPromptOnly();
    BOOL stepClose();
    void beginClose();
    BOOL stepOpen();
    void startTalk(u8 *a, s32 b);
    BOOL update(s32 a);
    void openHigh(u8 *a, s32 b, u32 c);
    void open(u8 *a, s32 b, u32 c);

    /* 0x00 */ TouchPromptBalloon prompt;
    /* 0xc0 */ TalkMsgRequest talk;
    /* 0xe0 */ u8 unk_e0[0x1c];
    /* 0xfc */ TalkWindowState *unk_fc;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 state;
    /* 0x105 */ u8 isFatal;
};


// Intermediate base of the vtables 0x02204614 / 0x02204630 / 0x0220464c
class MenuCursorBase : public HandCursor {
public:
    MenuCursorBase(BOOL flag);
    ~MenuCursorBase();
    virtual void vfunc_0c();

    void drawWrapped();
    s32 getScreenY();
    s32 getScreenX();
    s32 getFrameScreenY();
    s32 getFrameScreenX();
    BOOL isMoving();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void moveToNear(s32 x, s32 y, s32 n, u8 e);
    void moveToEase(s32 x, s32 y, s32 n, s32 f);
    void moveToLinear(s32 x, s32 y, s32 n);
    void warpTo(s32 x, s32 y);
    void setScreenPos(s32 x, s32 y);
    void setPoseIdle();
    void setPoseRelease();

    /* 0x4c */ CursorMotion motion;
};

class MenuCursor : public MenuCursorBase {
public:
    MenuCursor(BOOL flag);
    virtual ~MenuCursor();

    void setPosePress();
    void switchToAnim0D();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 idx);
};

class MenuCursorBuf0 : public MenuCursor {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
};

class MenuCursorBuf1 : public MenuCursor {
public:
    MenuCursorBuf1();
    virtual ~MenuCursorBuf1();
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    virtual ~MenuScrollKnob();

    s32 getGripY();
    s32 getGripX();
    s32 getScreenY();
    s32 getScreenX();
    s32 updateRelease();
    void release();
    void grab();
    void show();
    BOOL hitTest(s32 x, s32 y);
};

// Element of the 5-entry array at +0x28 of the menu (0x48 bytes)
class PopupChoiceRow : public LabelString {
public:
    PopupChoiceRow();
    virtual ~PopupChoiceRow();

    void setup(u32 a, u16 b, u8 c, u8 d);
    void render(s32 v);

    /* 0x40 */ u16 charBase;
    /* 0x42 */ u8 layer;
    /* 0x43 */ u8 fgColor;
    /* 0x44 */ u8 bgColor;
};


// Menu/selection object, vtable 0x02204558
class PopupChoiceMenu {
public:
    PopupChoiceMenu();
    virtual ~PopupChoiceMenu();

    void placeAboveBalloon(LabelBalloon *p);
    void placeAbove(s32 a, s32 b);
    void placeAt(s32 a, s32 b);
    void placeNearPoint(s32 a, s32 b);
    s32 placeCentered(s32 a, s32 b);
    void init(s32 a, s32 b, const char *path);

    /* 0x04 */ u32 rowCharBase;
    /* 0x08 */ s32 scrollX;
    /* 0x0c */ s32 scrollY;
    /* 0x10 */ u32 bgPriority;
    /* 0x14 */ u16 flags;
    /* 0x16 */ u8 state;
    /* 0x17 */ u8 request;
    /* 0x18 */ u8 stateStep;
    /* 0x19 */ u8 openLeftward;
    /* 0x1a */ u8 layer;
    /* 0x1b */ u8 textWidthTiles;
    /* 0x1c */ u8 numRows;
    /* 0x1d */ u8 numPages;
    /* 0x1e */ u8 decideDelay;
    /* 0x1f */ u8 decidedRow;
    /* 0x20 */ u8 addresseePage;
    /* 0x21 */ volatile u8 titleRefreshDelay;
    /* 0x22 */ u8 pad_22[2];
    /* 0x24 */ const char *screenFile;
    /* 0x28 */ PopupChoiceRow rows[5];
    /* 0x190 */ MenuLabelButton pageButton;
    /* 0x200 */ MenuTitleBalloon title;
    /* 0x2bc */ MenuSlide slide;
    /* 0x2d8 */ u8 addresseeIds[0x19];
};

// Methods of the same object that the symbols list under another class name
class PopupChoiceMenuBody : public PopupChoiceMenu {
public:
    void load2dString(void *buf, u32 c);
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    s32 applyAddressee(void *p, u32 id);
    s32 getAddresseeKind(u32 id);
    u32 pickAddressee(u32 a, u32 b);
    u32 getPageCount();
    u32 getRowCount();
    s32 getRowY(s32 v);
    s32 getRowX();
    s32 hitTestRow(s32 x, s32 y);
    s32 hitTestRowOrLast(s32 x, s32 y);
    s32 hitTestRowOr(s32 x, s32 y, s32 d);
    void loadAddresseePage(PopupChoiceIdList *r);
    void setRowsFromIds(PopupChoiceIdList *r, s32 f);
    s32 addCustomRow(PopupChoiceIdList *r, void *s, u32 v);
    void renderRows();
    void resetRowColors();
    void freeRowTexts();
    BOOL isClosed();
    BOOL isOpen();
    void buildAddresseeList();
};

typedef PopupChoiceMenuBody Self;


// Plain functions of the menu (they take the menu object first)
extern "C" {
void PopupChoice_SetAddresseeName(s32 unused, s32 x, u32 id);
void PopupChoice_CopyVillagerName(s32 x, s32 y);
void PopupChoice_CopyVillagerIdName(s32 a, s32 b);
void PopupChoice_CopyResidentName(s32 x, s32 y);
void PopupChoice_CopyPlayerIdName(s32 a, s32 b);
BOOL PopupChoice_MoveCursor(Self *self, s32 p, u8 *pos, u32 n);
BOOL PopupChoice_TickDecideDelay(Self *self);
void PopupChoice_DecideAddressee(Self *self, u32 x);
u8 PopupChoice_DecideCancel(Self *self, s32 x);
void PopupChoice_DecideRow(Self *self, s32 a, s32 b);
void PopupChoice_StartDecide(Self *self, s32 x);
void PopupChoice_ForceClose(Self *self);
void PopupChoice_Draw(Self *self);
void PopupChoice_Update(Self *self);
void PopupChoice_FitWidth(Self *self);
s32 PopupChoice_GetHeight(Self *self);
s32 PopupChoice_GetWidth(Self *self);
void PopupChoice_StepSlideClose(Self *self);
void PopupChoice_StepSlideOpen(Self *self);
void PopupChoice_ApplySlide(Self *self);
void PopupChoice_StepPopClose(Self *self);
void PopupChoice_StepPopOpen(Self *self);
void PopupChoice_BuildScreen(Self *self);
void PopupChoice_SetState(Self *self, u32 x);
void PopupChoice_Close(Self *self, s32 x);
void PopupChoice_Open(Self *self, s32 x);
void PopupChoice_OpenAddresseePage(Self *self, Unk_ov002_022018e4_Arg a, s32 x);
void PopupChoice_LoadFriendBg(Self *self);
void PopupChoice_LoadChoiceBg(Self *self);
void PopupChoice_SetPosClamped(Self *self, s32 x, s32 y);
void PopupChoice_SetPos(Self *self, s32 x, s32 y);
void PopupChoice_ApplyScroll(Self *self, s32 x, s32 y);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
s32 ChoiceIdList_Count(u8 *p);
void ChoiceIdList_Clear(u8 *p, u8 v);
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
void Menu_LoadPaperBg(s32 a, void *b);
void Menu_PlayScrollGrabSe();
void Menu_PlayScrollTickSe();
void MenuButtons_LoadTextColors();
}

static inline BOOL Unk_ov002_022009d4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

KeyRepeat::KeyRepeat() {}

KeyRepeat::~KeyRepeat() {}

void KeyRepeatView::update()
{
    u32 prev = heldKeys;
    heldKeys = gPad[0] & 0xf0;
    u8 *p = &pendingKeys;
    pendingKeys |= (u8)(gPad[1] & 0xf0);
    u32 cur = heldKeys;
    if (cur == 0 || prev != cur) {
        pendingKeys = gPad[1] & 0xf0;
        interval = delay;
        countdown = delay;
    } else if (countdown > 0) {
        countdown--;
    } else {
        *p |= cur & 0xf0;
        interval = interval - intervalStep;
        if (interval < minInterval) {
            interval = minInterval;
        }
        countdown = interval;
    }
}

u32 KeyRepeatView::take()
{
    takenKeys = pendingKeys;
    pendingKeys = 0;
    return takenKeys;
}

BOOL KeyRepeatView::isUp()
{
    if (takenKeys & 0x40) {
        return TRUE;
    }
    return FALSE;
}

BOOL KeyRepeatView::isDown()
{
    if (takenKeys & 0x80) {
        return TRUE;
    }
    return FALSE;
}

BOOL KeyRepeatView::isLeft()
{
    if (takenKeys & 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL KeyRepeatView::isRight()
{
    if (takenKeys & 0x10) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuKeys_HasUp(u32 v)
{
    if (v & 0x40) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuKeys_HasDown(u32 v)
{
    if (v & 0x80) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuKeys_HasLeft(u32 v)
{
    if (v & 0x20) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuKeys_HasRight(u32 v)
{
    if (v & 0x10) {
        return TRUE;
    }
    return FALSE;
}

void KeyRepeatView::init(s32 a, s32 b, s32 c)
{
    heldKeys = 0;
    pendingKeys = 0;
    takenKeys = 0;
    interval = 0;
    countdown = 0;
    delay = a;
    minInterval = b;
    intervalStep = c;
}

extern "C" void *_ZN9MenuTweenC2Ev(MenuTween *self) {
    *(void **)self = _ZTV9MenuTween + 8;
    return self;
}

MenuTween::~MenuTween() {}

void MenuTween::start(u32 n)
{
    progress = 0x1000;
    stepSize = 0x1000 / n;
}

BOOL MenuTween::step()
{
    s32 a = progress;
    if (a == 0) {
        return TRUE;
    }
    s32 b = stepSize;
    if (a > b) {
        progress = a - b;
    } else {
        progress = 0;
    }
    return FALSE;
}

s32 MenuTween::scaleQuadratic(s32 v)
{
    return (v * func_01ffcb0c(progress, progress)) >> 12;
}

s32 MenuTween::scaleLinear(s32 v)
{
    return (v * progress) >> 12;
}

MenuSlide::MenuSlide() {}

MenuSlide::~MenuSlide() {}

s32 MenuSlide::getOffsetY()
{
    switch (direction) {
    case 0:
        return offset;
    case 1:
        return -offset;
    }
    return 0;
}

s32 MenuSlide::getOffsetX()
{
    switch (direction) {
    case 2:
        return -offset;
    case 3:
        return offset;
    }
    return 0;
}

void MenuSlide::updateSlideInVertical(s32 mode)
{
    offset = scaleQuadratic(extent);
    switch (mode) {
    case 0:
        if (offset > edgeDistance) {
            ((MenuSlideView *)this)->applyWindow(2);
        } else {
            Gfx2d_DisableSubWindows(1);
            Gfx2d_SetSubWinOutPlanes(0x1f);
        }
        break;
    case 1:
        if (offset > edgeDistance) {
            ((MenuSlideView *)this)->applyWindow(0);
        } else {
            Gfx2d_DisableMainWindows(1);
            Gfx2d_SetMainWinOutPlanes(0x1f);
        }
        break;
    }
}

void MenuSlide::updateSlideInHorizontal(s32 mode)
{
    offset = scaleQuadratic(extent);
    switch (mode) {
    case 0:
        ((MenuSlideView *)this)->applyWindow(2);
        break;
    case 1:
        ((MenuSlideView *)this)->applyWindow(0);
        break;
    }
}

BOOL MenuSlide::stepSlideIn(s32 mode)
{
    if (step()) {
        offset = 0;
        switch (mode) {
        case 0:
            Gfx2d_DisableSubWindows(1);
            Gfx2d_SetSubWinOutPlanes(0x1f);
            break;
        case 1:
            Gfx2d_DisableMainWindows(1);
            Gfx2d_SetMainWinOutPlanes(0x1f);
            break;
        }
        return TRUE;
    }
    switch (direction) {
    case 0:
    case 1:
        updateSlideInVertical(mode);
        break;
    default:
        updateSlideInHorizontal(mode);
        break;
    }
    return FALSE;
}

void MenuSlide::updateSlideOutVertical(s32 mode)
{
    offset = extent - scaleLinear(extent);
    if (offset > edgeDistance) {
        switch (mode) {
        case 0:
            Gfx2d_EnableSubWindows(1);
            ((MenuSlideView *)this)->applyWindow(2);
            break;
        case 1:
            Gfx2d_EnableMainWindows(1);
            ((MenuSlideView *)this)->applyWindow(0);
            break;
        }
    }
}

// ---------------------------------------------------------------- MenuProc

void MenuSlide::updateSlideOutHorizontal(s32 mode)
{
    offset = extent - scaleLinear(extent);
    switch (mode) {
    case 0:
        ((MenuSlideView *)this)->applyWindow(2);
        break;
    case 1:
        ((MenuSlideView *)this)->applyWindow(0);
        break;
    }
}

BOOL MenuSlideView::stepSlideOut(s32 a) {
    if (step()) {
        switch (a) {
        case 0:
            Gfx2d_DisableSubWindows(1);
            break;
        case 1:
            Gfx2d_DisableMainWindows(1);
            break;
        }
        return TRUE;
    }
    switch (direction) {
    case 0:
    case 1:
        updateSlideOutVertical(a);
        break;
    default:
        updateSlideOutHorizontal(a);
        break;
    }
    return FALSE;
}

void MenuSlideView::beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist) {
    initSlideIn(b, mode, dist);
    Gfx2d_EnableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~a & 0x1f);
    applyWindow(2);
}

void MenuSlideView::beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist) {
    initSlideOut(b, mode, dist);
    Gfx2d_EnableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~a & 0x1f);
    applyWindow(2);
}

void MenuSlideView::beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist) {
    initSlideIn(b, mode, dist);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(~a & 0x1f);
    applyWindow(0);
}

void MenuSlideView::beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist) {
    initSlideOut(b, mode, dist);
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x1f);
    if (Gfx2d_GetMainWindows() & 2) {
        Gfx2d_RemoveMainWinOutPlanes(a);
    } else {
        Gfx2d_SetMainWinOutPlanes(~a & 0x1f);
    }
    applyWindow(0);
}

void MenuSlideView::initSlideIn(s32 a, s32 mode, s32 dist) {
    direction = mode;
    edgeDistance = dist;
    start(a);
    switch (direction) {
    case 0:
    case 1:
        offset = 0xc0;
        extent = 0xc0;
        break;
    case 2:
    case 3:
        offset = 0x100;
        extent = 0x100;
        break;
    }
}

void MenuSlideView::initSlideOut(s32 a, s32 mode, s32 dist) {
    direction = mode;
    edgeDistance = dist;
    start(a);
    offset = 0;
    switch (direction) {
    case 0:
    case 1:
        extent = 0xc0;
        break;
    case 2:
    case 3:
        extent = 0x100;
        break;
    }
}

void MenuSlideView::applyLayerOffset(s32 a, s32 b, s32 c) {
    switch (direction) {
    case 0:
        Gfx2d_SetLayerOffset(a, -b, -(offset + c));
        break;
    case 1:
        Gfx2d_SetLayerOffset(a, -b, offset - c);
        break;
    case 2:
        Gfx2d_SetLayerOffset(a, offset - b, -c);
        break;
    case 3:
        Gfx2d_SetLayerOffset(a, -(offset + b), -c);
        break;
    }
}

void MenuSlideView::applyWindow(s32 a) {
    s32 x0 = 0;
    s32 y0 = 0;
    s32 x1 = 0xff;
    s32 y1 = 0xc0;
    switch (direction) {
    case 0:
        y0 = offset - edgeDistance;
        if (y0 < 0) {
            y0 = x0;
        }
        break;
    case 1:
        y1 = edgeDistance + 0xc0 - offset;
        if (y1 > 0xbf) {
            y1 = 0xbf;
        }
        break;
    case 2:
        x1 = 0xff - offset;
        if (x1 < 1) {
            x1 = 1;
        }
        break;
    case 3:
        x0 = offset;
        if (x0 > 0xfe) {
            x0 = 0xfe;
        }
        break;
    }
    Gfx2d_SetWindowRect(a, x0, y0, x1, y1);
}

// ---------------------------------------------------------------- MenuSlideView

void MenuSlideView::setExtent(s32 v) { extent = v; }

extern "C" void *_ZN8MenuProcC2Ev(MenuProc *self) {
    _ZN8ProcBaseC2Ev(self);
    *(void *volatile *)self = _ZTV8GameProc + 8;
    *(void **)self = _ZTV8MenuProc + 8;
    _ZN9KeyRepeatC1Ev(&self->keyRepeat);
    self->openMenuPrev = 0;
    self->openMenuNext = 0;
    _ZN9MenuSlideC1Ev(&self->slide);
    return self;
}

MenuProc::~MenuProc() {}

BOOL MenuProc::vfunc_04() {
    if (!ProcBase::vfunc_04()) {
        return FALSE;
    }
    menuId = (s32)param;
    openMenuOwner = this;
    ((KeyRepeatView *)&keyRepeat)->init(8, 1, 7);
    return TRUE;
}

void MenuProc::postCreate(s32 a) {
    MenuCtrl_AddOpenMenu(&openMenuPrev);
    if (a == 2) {
        void *p = ProcBase_GetParent(this);
        if (p != 0) {
            u8 *q = (u8 *)p;
            ProcBase_SetExecutePriority(this, (u16)(*(u16 *)(q + 0x34) + 1));
            ProcBase_SetDrawPriority(this, (u16)(*(u16 *)(q + 0x44) + 1));
        }
    }
    _ZN8GameProc10postCreateEv(this, a);
}

BOOL MenuProc::preDelete() {
    if (ProcBase::preDelete()) {
        return TRUE;
    }
    return FALSE;
}

BOOL MenuProc::vfunc_14(s32 a) {
    if (a == 2) {
        MenuCtrl_RemoveOpenMenu(&openMenuPrev);
    }
    return _ZN8ProcBase8vfunc_14Ev(this, a);
}

BOOL MenuProc::preExecute() {
    if (ProcBase::preExecute()) {
        return TRUE;
    }
    return FALSE;
}

BOOL MenuProc::vfunc_20(u32 status) { return ProcBase::vfunc_20(status); }

BOOL MenuProc::execWaitScreen() {
    if (MenuScreen_IsOpen()) {
        setPhase(1);
    }
    if (MenuScreen_IsClosed()) {
        MenuScreen_ClearState();
        setPhase(5);
    }
    return TRUE;
}

BOOL MenuProc::execTransition() { return TRUE; }

BOOL MenuProc::execMain() { return TRUE; }

BOOL MenuProc::execPhase3() { return TRUE; }

BOOL MenuProc::execPhase4() { return TRUE; }

BOOL MenuProc::execClosed() { return TRUE; }

BOOL MenuProc::onExecute() {
    static Unk_ov002_02200a68_Fn tbl[6] = {
        (Unk_ov002_02200a68_Fn)&MenuProc::execWaitScreen,
        (Unk_ov002_02200a68_Fn)&MenuProc::execTransition,
        (Unk_ov002_02200a68_Fn)&MenuProc::execMain,
        (Unk_ov002_02200a68_Fn)&MenuProc::execPhase3,
        (Unk_ov002_02200a68_Fn)&MenuProc::execPhase4,
        (Unk_ov002_02200a68_Fn)&MenuProc::execClosed,
    };
    ((KeyRepeatView *)&keyRepeat)->update();
    (this->*tbl[phase])();
    return TRUE;
}

void MenuProc::setPhase(u8 v) { phase = v; }

void MenuProc::setMainState(u8 v) { mainState = v; }

void MenuProc::setTransitionState(u8 v) { transitionState = v; }

BOOL MenuProc::checkSwitchToButtons(s32 a) {
    if ((gPad[1] & 0xfff) != 0) {
        MenuCtrl_SetButtons();
        Snd_PlaySe(0x866);
        if (a != 0) {
            Snd_PlaySe(0x3b);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL MenuProc::checkSwitchToTouch() {
    if (Unk_ov002_022009d4_Both()) {
        MenuCtrl_SetTouch();
        Snd_PlaySe(0x866);
        return TRUE;
    }
    return FALSE;
}

u32 MenuProc::takeRepeatedKeys() { return ((KeyRepeatView *)&keyRepeat)->take(); }

BOOL MenuProc::isRepeatUp() { return ((KeyRepeatView *)&keyRepeat)->isUp(); }

BOOL MenuProc::isRepeatDown() { return ((KeyRepeatView *)&keyRepeat)->isDown(); }

BOOL MenuProc::isRepeatLeft() { return ((KeyRepeatView *)&keyRepeat)->isLeft(); }

BOOL MenuProc::isRepeatRight() { return ((KeyRepeatView *)&keyRepeat)->isRight(); }

void MenuProc::restartKeyRepeat() { ((KeyRepeatView *)&keyRepeat)->init(8, 1, 7); }

void MenuProc::initKeyRepeat(s32 a, s32 b, s32 c) { ((KeyRepeatView *)&keyRepeat)->init(a, b, c); }

void *MenuProc::operator new(unsigned long size) {
    void *p = Heap_AllocTail(gMenuHeap, size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void MenuProc::operator delete(void *p) { Heap_Free(gMenuHeap, p); }

s32 MenuProc::getSlideOffsetY() { return ((MenuSlideView *)&slide)->getOffsetY(); }

s32 MenuProc::getSlideOffsetX() { return ((MenuSlideView *)&slide)->getOffsetX(); }

BOOL MenuProc::stepSlideIn(s32 a) { return ((MenuSlideView *)&slide)->stepSlideIn(a); }

BOOL MenuProc::stepSlideOut(s32 a) { return ((MenuSlideView *)&slide)->stepSlideOut(a); }

void MenuProc::beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((MenuSlideView *)&slide)->beginSubSlideIn(a, b, mode, dist);
}

void MenuProc::beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((MenuSlideView *)&slide)->beginSubSlideOut(a, b, mode, dist);
}

void MenuProc::beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((MenuSlideView *)&slide)->beginMainSlideIn(a, b, mode, dist);
}

void MenuProc::beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((MenuSlideView *)&slide)->beginMainSlideOut(a, b, mode, dist);
}

void MenuProc::initSlideIn(s32 a, s32 mode) {
    if (a == 0) {
        a = 4;
    }
    ((MenuSlideView *)&slide)->initSlideIn(a, mode, 0x30);
}

void MenuProc::initSlideOut(s32 a, s32 mode) {
    if (a == 0) {
        a = 3;
    }
    ((MenuSlideView *)&slide)->initSlideOut(a, mode, 0x30);
}

void MenuProc::setSlideExtent(s32 v) { ((MenuSlideView *)&slide)->setExtent(v); }

void MenuProc::applySlideOffset(s32 a, s32 b, s32 c) { ((MenuSlideView *)&slide)->applyLayerOffset(a, b, c); }
