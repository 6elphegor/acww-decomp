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

// Menu, vtable 0x02204770
class MenuTitleBalloon : public LabelBalloon {
public:
    MenuTitleBalloon();
    virtual ~MenuTitleBalloon();
    virtual void setOrigin(s32 a, s32 b);

    void hideNow();
    void showText(u8 a, s32 b, s32 c);
};
// Base of the 0x0220471c / 0x02204738 classes
class MenuLabelButtonBase : public LabelButton {
public:
    MenuLabelButtonBase(u8 a, s32 b);
    virtual ~MenuLabelButtonBase();
    virtual void setOrigin(s32 a, s32 b);
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
class MenuLabelButtonStyle1 : public MenuLabelButtonBase {
public:
    MenuLabelButtonStyle1();
    virtual ~MenuLabelButtonStyle1();
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

// ---- .rodata
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW8[5] = {
    {0x81f440a0, 0x14c, 0x30},
    {0x801440a0, 0x150, 0x30},
    {0x800440a0, 0xd0, 0x2c},
    {0x901c40a0, 0xcf, 0x2c},
    {0x81ec40a0, 0xcf, 0x3fffec},
};
extern "C" const u8 sBottomButtonTargetY[12] = {0xb6, 0x9e, 0xb2, 0xa9, 0xa9, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x00, 0x00};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW4A[3] = {
    {0x80204044, 0x146, 0x30},
    {0x90284044, 0xcf, 0x2c},
    {0x80184044, 0xcf, 0x3fffec},
};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW6A[6] = {
    {0x80084000, 0x14, 0x1},
    {0x40280000, 0x18, 0x1},
    {0x90204000, 0x5b, 0x1},
    {0x80004000, 0x5b, 0x3fffc1},
    {0x90244004, 0x5b, 0x5},
    {0x80044004, 0x5b, 0x3fffc5},
};
extern "C" const u8 sBottomButtonOfTarget[12] = {0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW6B[6] = {
    {0x80084000, 0x1a, 0x1},
    {0x40280000, 0x1e, 0x1},
    {0x90204000, 0x5b, 0x1},
    {0x80004000, 0x5b, 0x3fffc1},
    {0x90244004, 0x5b, 0x5},
    {0x80044004, 0x5b, 0x3fffc5},
};
extern "C" const u8 sTextButtonPressOffsets[4] = {0x00, 0x02, 0x03, 0x00};
extern "C" const u8 sBottomButtonTargetX[12] = {0x58, 0xca, 0xca, 0x62, 0xc2, 0x3e, 0xc4, 0x7c, 0x74, 0xc4, 0x00, 0x00};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW12[7] = {
    {0x81d440a0, 0x14c, 0x30},
    {0x81f440a0, 0x150, 0x30},
    {0x801440a0, 0x154, 0x30},
    {0x800040a0, 0xd0, 0x2c},
    {0x81e840a0, 0xd0, 0x2c},
    {0x901c40a0, 0xcf, 0x2c},
    {0x81cc40a0, 0xcf, 0x3fffec},
};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW6Single[4] = {
    {0x804840a0, 0x140, 0x30},
    {0x406800a0, 0x144, 0x30},
    {0x905e40a0, 0xcf, 0x2c},
    {0x804040a0, 0xcf, 0x3fffec},
};
extern "C" Unk_ov002_02203c5c_Rec sButtonCellsW4B[3] = {
    {0x81c04044, 0x142, 0x30},
    {0x91c84044, 0xcf, 0x2c},
    {0x81b84044, 0xcf, 0x3fffec},
};
extern "C" const u8 sMenuButtonTextColors[4] = {0x5f, 0x7d, 0xc0, 0x50};












MenuErrorMessage::MenuErrorMessage() {
    state = 3;
    isFatal = 0;
}

MenuErrorMessage::~MenuErrorMessage() {}

void MenuErrorMessage::open(u8 *a, s32 b, u32 c) {
    isFatal = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x40);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
}

void MenuErrorMessage::openHigh(u8 *a, s32 b, u32 c) {
    isFatal = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x30);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
}

BOOL MenuErrorMessage::update(s32 a) {
    switch (state) {
    case 0:
        if (isTalkWaiting()) {
            state = 1;
            prompt.commitOpen();
            if (isFatal != 0) dimSubScreen();
        }
        break;
    case 1:
        if (isFatal != 0) for (;;) {}
        if (a == 0 || !MenuCtrl_IsForceCloseDue()) {
            BOOL k;
            if (gTouchHeld != 0 && gTouchChanged != 0) k = TRUE; else k = FALSE;
            if (!k) {
                u16 v = gPad[1];
                if ((v & 1) == 0 && (v & 2) == 0 && (v & 0x400) == 0 && (v & 0x800) == 0) break;
            }
        }
        advanceTalk();
        state = 2;
        prompt.hide(0);
        break;
    case 2:
        if (finishTalk()) {
            restoreBrightness();
            state = 3;
        }
        break;
    case 3:
        return TRUE;
    }
    prompt.updatePrompt();
    if (isFatal == 0) {
        TouchPromptBalloon *p = &prompt;
        p->draw();
    }
    return FALSE;
}

void MenuErrorMessage::startTalk(u8 *a, s32 b) {
    TalkWindowState *p = TalkWindow_Get(1);
    talk.vfunc_08();
    talk.setFileName("obj_etc_error");
    talk.msgIndex = *a;
    p->attachRequest(&talk);
    p->disableInput();
    if (b == 0) p->setKeepSe();
    p->nextState = 1;
    p->lockAdvance();
    state = 0;
    if (isFatal == 0) dimSubScreen();
}

BOOL MenuErrorMessage::stepOpen() {
    if (state == 0) {
        if (isTalkWaiting()) {
            state = 1;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::beginClose() {
    advanceTalk();
    state = 2;
}

BOOL MenuErrorMessage::stepClose() {
    if (state == 2) {
        if (finishTalk()) {
            restoreBrightness();
            state = 3;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::showPromptOnly() {
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x40);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
    dimSubScreen();
    prompt.commitOpen();
}

void MenuErrorMessage::updatePromptBalloon() {
    prompt.updatePrompt();
    TouchPromptBalloon *p = &prompt;
    p->draw();
}

void MenuErrorMessage::hidePromptBalloon() { prompt.hide(0); }

void MenuErrorMessage::undim() { restoreBrightness(); }

BOOL MenuErrorMessage::isTalkWaiting() {
    TalkWindowState *p = TalkWindow_Get(1);
    if (p->state == 2) return TRUE;
    return FALSE;
}

void MenuErrorMessage::advanceTalk() {
    TalkWindowState *p = TalkWindow_Get(1);
    p->setNextMessageIfUnset(gTalkMsgIndexEnd, 0);
    p->setAdvancePending();
    p->unlockAdvance();
}

BOOL MenuErrorMessage::finishTalk() {
    TalkWindowState *o = unk_fc;
    if (o->state == 0) {
        o->detachRequest();
        return TRUE;
    }
    return FALSE;
}

s32 MenuErrorMessage::dimSubScreen() {
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-10);
}

BOOL MenuErrorMessage::restoreBrightness() { return Gfx2d_EndSubObjWinBrightness(); }

extern "C" void *_ZN19MenuLabelButtonBaseC2Ehi(MenuLabelButtonBase *self, u8 a, s32 b) {
    _ZN11LabelButtonC2Ehi(self, a, b);
    *(void **)self = _ZTV19MenuLabelButtonBase + 8;
    return self;
}

MenuLabelButtonBase::~MenuLabelButtonBase() {}

void MenuLabelButtonBase::setOrigin(s32 a, s32 b) { UiWidget::setOrigin(a - 0x80, b - 0x60); }

s32 MenuLabelButton::getAnchorX(s32 k) {
    s32 r = getOriginX();
    s32 x, y;
    if (getState() == 2) {
        getAnimOffset(&x, &y);
        r += x;
    }
    switch (k) {
    case 0:
    case 2:
        r += 0x10;
        break;
    case 1:
    case 3:
        r += 0x20;
    }
    return r;
}

s32 MenuLabelButton::getAnchorY(s32 k) {
    s32 r = getOriginY();
    s32 x, y;
    if (getState() == 2) {
        getAnimOffset(&x, &y);
        r += y;
    }
    switch (k) {
    case 0:
    case 1:
        r += 8;
        break;
    case 2:
        break;
    case 3:
        r += 8;
    }
    return r;
}

BOOL MenuLabelButton::stepAnim() {
    if (isAnimDone() == 0) {
        vfunc_0c();
        return TRUE;
    }
    return FALSE;
}

void MenuLabelButton::setLabel2d(s32 v) {
    LabelString s;
    String_Load2dMenu(&s, v);
    LabelButton_setLabelText(this, &s);
}

void MenuLabelButton::showDefault(s32 v) {
    showAt(v, 0x98, 0xac);
}

void MenuLabelButton::showAt(s32 v, s32 x, s32 y) {
    setLabel2d(v);
    setOrigin(x, y);
    setPos(0, 0);
    showLayer2();
    setState(1);
    vfunc_0c();
}

BOOL MenuLabelButton::isTouched() {
    BOOL c;
    if (gTouchHeld != 0 && gTouchChanged != 0) c = TRUE; else c = FALSE;
    if (c) {
        s32 a = gTouchPressX;
        s32 x = a - getOriginX();
        s32 b = gTouchPressY;
        s32 y = b - getOriginY();
        if (x >= 0 && x <= 0x40 && y >= 0 && y <= 0x18) return TRUE;
    }
    return FALSE;
}

MenuLabelButton::MenuLabelButton() : MenuLabelButtonBase(0, 0) {}

MenuLabelButton::~MenuLabelButton() {}

MenuLabelButtonStyle1::MenuLabelButtonStyle1() : MenuLabelButtonBase(1, 0) {}

MenuLabelButtonStyle1::~MenuLabelButtonStyle1() {}

MenuTextButton::MenuTextButton() {
    cells = 0;
    pressStep = 0;
    flags = 0;
}

MenuTextButton::~MenuTextButton() { caption.destroyLabel(); }

void MenuTextButton::setup(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b) {
    cells = p;
    widthTiles = a;
    frameCellCount = b;
}

void MenuTextButton::setLabel(u8 v) {
    msgId = v;
    renderText(0xf, 0);
}

void MenuTextButton::setLabelWithShadow(u8 v) {
    setLabel(v);
    pressStep = 0;
    clearFlags(1);
}

void MenuTextButton::setLabelNoShadow(u8 v) {
    setLabel(v);
    pressStep = 0;
    setFlags(1);
}

void MenuTextButton::renderText(u8 a, u8 b) {
    String_Load2dMenu(&caption, msgId);
    caption.createLabel(8, cells->charName, widthTiles, a, b, 0);
    caption.redrawAligned(1, 0);
}

BOOL MenuTextButton::testFlags(u32 m) {
    if ((flags & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void MenuTextButton::setFlags(u32 m) { flags = flags | m; }

void MenuTextButton::clearFlags(u32 m) { flags = flags & ~m; }

void MenuTextButton::freeText() { caption.destroyLabel(); }

u32 MenuTextButton::getPressOffset() { return sTextButtonPressOffsets[pressStep]; }

void MenuTextButton::drawAt(s32 x, s32 y, s32 c) {
    u32 off = getPressOffset();
    s32 pal = -1;
    if (testFlags(4)) {
        pal = 2;
    }
    s32 yy = y + 0x60 + off;
    s32 xx = x + 0x80 + off;
    Oam_DrawCell(1, cells, xx, yy, pal, c, 0x1000, 0x1000, 0, -1, 0, 0);
    if (testFlags(2)) {
        Oam_DrawCell(1, cells, xx, yy, -1, c, 0x1000, 0x1000, 0, 2, 0, 0);
    }
    if (!testFlags(1)) {
        if (pressStep + 1 != 3) {
            x += 0x83;
            y += 0x63;
            Oam_DrawCell(1, cells + frameCellCount, x, y, 1, c, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

BOOL MenuTextButton::stepPress() {
    if (pressStep == 0) {
        renderText(0xe, 0);
    }
    if (pressStep + 1 < 3) {
        pressStep++;
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
}

void MenuTextButton::enableObjWindow() { setFlags(2); }

void MenuTextButton::disableObjWindow() { clearFlags(2); }

void MenuTextButton::setDisabled() { setFlags(4); }

void MenuTextButton::setEnabled() { clearFlags(4); }

void MenuTextButton::isDisabled() { testFlags(4); }

MenuTitleBalloon::MenuTitleBalloon() : LabelBalloon(0) { disablePopAnim(); }

MenuTitleBalloon::~MenuTitleBalloon() {}

void MenuTitleBalloon::setOrigin(s32 a, s32 b) { UiWidget::setOrigin(a - 0x80, b - 0x60); }

void MenuTitleBalloon::showText(u8 a, s32 b, s32 c) {
    setOrigin(b, c);
    setPos(0, 0);
    LabelString t;
    String_Load2dMenu(&t, a);
    setText((StrBuf *)&t);
    disablePopAnim();
    requestOpen();
    vfunc_0c();
    vfunc_0c();
}

void MenuTitleBalloon::hideNow() {
    requestClose();
    vfunc_0c();
    vfunc_0c();
}

MenuBottomButtons::MenuBottomButtons() { layout = 0; }

MenuBottomButtons::~MenuBottomButtons() {}

extern "C" void MenuButtons_LoadTextColors() { GXS_LoadOBJPltt(sMenuButtonTextColors, 0x1c, 4); }

void MenuBottomButtons::freeTexts() {
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].freeText();
    }
}

void MenuBottomButtons::drawAt(s32 a) {
    switch (layout) {
    case 0:
        break;
    case 1:
        unk_04[1].drawAt(0, a + 0xac, -1);
        break;
    case 2:
        unk_04[0].drawAt(0, a + 0xac, -1);
        unk_04[1].drawAt(0, a + 0xac, -1);
        break;
    case 3:
        unk_04[1].drawAt(0x3c, a + 0x35, -1);
        unk_04[0].drawAt(0x3c, a + 0x48, -1);
        break;
    case 4:
        unk_04[1].drawAt(0x3c, a + 0x4c, -1);
        unk_04[0].drawAt(-0x7c, a + 0x4c, -1);
        break;
    case 5:
        unk_04[1].drawAt(0x3c, a + 0x4c, -1);
        break;
    case 6:
        unk_04[1].drawAt(0x3c, a + 0x4c, -1);
        unk_04[0].drawAt(-0xc, a + 0x4c, -1);
        break;
    case 7:
    case 9:
    case 10: {
        if (layout != 10) {
            title.setPos(0, -(a >> 2));
            title.draw();
        }
        s32 b = a >> 2;
        if (layout == 7) {
            unk_04[0].drawAt(0, b, -1);
            unk_04[1].drawAt(0, b, -1);
        } else {
            unk_04[0].drawAt(-0x50, b + 0x44, -1);
            unk_04[1].drawAt(0x10, b + 0x44, -1);
        }
        break;
    }
    case 8: {
        s32 t = -(a >> 2);
        if (layout != 10) {
            title.setPos(0, t - 8);
            title.draw();
        }
        a = (a >> 1) - 0x1e;
        unk_04[0].drawAt(0, a, -1);
        unk_04[1].drawAt(0, a, -1);
        break;
    }
    case 11: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        unk_04[0].drawAt(-0x50, b + 0x44, -1);
        unk_04[1].drawAt(0x10, b + 0x44, -1);
        break;
    }
    case 12: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        unk_04[0].drawAt(-0x50, b + 0x24, -1);
        unk_04[1].drawAt(0x10, b + 0x24, -1);
        break;
    }
    case 13: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        unk_04[0].drawAt(-0x50, b + 0x36, -1);
        unk_04[1].drawAt(0x10, b + 0x36, -1);
        break;
    }
    }
}

void MenuBottomButtons::hide() { layout = 0; }

void MenuBottomButtons::setLayoutNeverMindConfirm() {
    unk_04[0].setup(sButtonCellsW8, 8, 2);
    unk_04[0].setLabelWithShadow(2);
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    layout = 2;
}

void MenuBottomButtons::setLayoutChangeAddressee() {
    unk_04[0].setup(sButtonCellsW12, 0xc, 3);
    unk_04[0].setLabelWithShadow(0x20);
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    layout = 2;
}

void MenuBottomButtons::setLayoutConfirm() {
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    layout = 1;
}

void MenuBottomButtons::setLayoutConfirmQuit03() {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(0x65);
    layout = 3;
}

void MenuBottomButtons::setLayoutConfirmQuit04() {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(0x65);
    layout = 4;
}

void MenuBottomButtons::setLayoutSingle05(s32 v) {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(v);
    layout = 5;
}

void MenuBottomButtons::setLayoutConfirmAnd06(u8 v) {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(v);
    layout = 6;
}

void MenuBottomButtonsBody::setLayoutYesNo07(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 4);
    title.hideLayer2();
    unk_04[0].setup(sButtonCellsW4B, 4, 1);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW4A, 4, 1);
    unk_04[1].setLabelWithShadow(0x13);
    layout = 7;
}

void MenuBottomButtonsBody::setLayoutYesNo08(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x11);
    title.hideLayer2();
    unk_04[0].setup(sButtonCellsW4B, 4, 1);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW4A, 4, 1);
    unk_04[1].setLabelWithShadow(0x13);
    layout = 8;
}

void MenuBottomButtonsBody::setYesNoButtons() {
    unk_04[0].setup(sButtonCellsW6A, 6, 2);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW6B, 6, 2);
    unk_04[1].setLabelWithShadow(0x13);
}

void MenuBottomButtonsBody::setLayoutYesNo09(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 4);
    title.hideLayer2();
    setYesNoButtons();
    layout = 9;
}

void MenuBottomButtonsBody::setLayoutTossKeep() {
    unk_04[0].setup(sButtonCellsW6A, 6, 2);
    unk_04[0].setLabelWithShadow(0x15);
    unk_04[1].setup(sButtonCellsW6B, 6, 2);
    unk_04[1].setLabelWithShadow(0x19);
    layout = 0xa;
}

void MenuBottomButtonsBody::setLayoutYesNo0B(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x22);
    title.hideLayer2();
    setYesNoButtons();
    layout = 0xb;
}

void MenuBottomButtonsBody::setLayoutYesNo0C(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x2a);
    title.showLayer2();
    setYesNoButtons();
    layout = 0xc;
}

void MenuBottomButtonsBody::setLayoutYesNo0D(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x12);
    title.showLayer2();
    setYesNoButtons();
    layout = 0xd;
}

void MenuBottomButtonsBody::showTitleLayer2() {
    title.showLayer2();
}

BOOL MenuBottomButtonsBody::hitTest(s32 idx, s32 x, s32 y) {
    switch (idx) {
    case 1:
        if (x >= 0xc0 && y >= 0x95 && y < 0xa5) {
            return TRUE;
        }
        return FALSE;
    case 2:
        if (x >= 0xc0 && y >= 0xa9 && y < 0xb9) {
            return TRUE;
        }
        return FALSE;
    case 0:
        if (x >= 0x52 && x <= 0xba && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x38 && x <= 0x68) {
            return TRUE;
        }
        return FALSE;
    case 4:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x98 && x <= 0xc8) {
            return TRUE;
        }
        return FALSE;
    case 5:
        if (y >= 0xac && y <= 0xc0 && x >= 0 && x <= 0x40) {
            return TRUE;
        }
        return FALSE;
    case 6:
        if (y >= 0xac && y <= 0xc0 && x >= 0xc0 && x <= 0x100) {
            return TRUE;
        }
        return FALSE;
    case 7:
        if (y >= 0xac && y <= 0xc0 && x >= 0x78 && x <= 0xb8) {
            return TRUE;
        }
        return FALSE;
    case 8:
        if (x >= 0x6a && x <= 0xbc && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 9:
        if (x >= 0xc0 && y >= 0 && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    default:
        return FALSE;
    }
}

BOOL MenuBottomButtonsBody::isTouched(s32 idx) {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    switch (layout) {
    case 8:
        y += 0x1e;
        break;
    case 0xc:
        y += 0x20;
        break;
    case 0xd:
        y += 0xe;
        break;
    }
    return hitTest(idx, x, y);
}

s32 MenuBottomButtonsBody::getTargetX(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    return sBottomButtonTargetX[idx];
}

s32 MenuBottomButtonsBody::getTargetY(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    s32 v = sBottomButtonTargetY[idx];
    switch (layout) {
    case 8:
        v -= 0x1e;
        break;
    case 0xc:
        v -= 0x20;
        break;
    case 0xd:
        v -= 0xe;
        break;
    }
    return v;
}

void MenuBottomButtonsBody::setSelected(u8 v) {
    selectedTarget = v;
}

void MenuBottomButtonsBody::stepPress() {
    unk_04[getButtonOfTarget(-1)].stepPress();
}

void MenuBottomButtonsBody::getPressOffset() {
    unk_04[getButtonOfTarget(-1)].getPressOffset();
}

void MenuBottomButtonsBody::enableObjWindow() {
    title.enableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].enableObjWindow();
    }
}

void MenuBottomButtonsBody::disableObjWindow() {
    title.disableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].disableObjWindow();
    }
}

s32 MenuBottomButtonsBody::getButtonOfTarget(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    return sBottomButtonOfTarget[idx];
}

void MenuBottomButtonsBody::disableButton(s32 idx) {
    unk_04[getButtonOfTarget(idx)].setDisabled();
}

void MenuBottomButtonsBody::enableButton(s32 idx) {
    unk_04[getButtonOfTarget(idx)].setEnabled();
}

void MenuBottomButtonsBody::isButtonDisabled(s32 idx) {
    unk_04[getButtonOfTarget(idx)].isDisabled();
}
