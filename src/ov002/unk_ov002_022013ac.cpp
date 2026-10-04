// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "ui/CursorMotion.h"
#include "sys/KeyRepeat.h"
#include "menu/MenuTween.h"
#include "menu/PopupChoiceIdList.h"
#undef postCreate
#undef vfunc_14

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

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    s32 getFrameIndex();
    void *getCell();

    /* 0x00 */ u8 unk_00[0x14];
};


class LabelBalloonText : public MsgStringBase {
public:
    LabelBalloonText();
    virtual ~LabelBalloonText();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x04 */ u8 unk_04[0x24];
};


// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

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

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
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

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);
    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
};

class TalkWindowState {
public:
    void setKeepSe();
    void disableInput();
    s32 detachRequest();
    void attachRequest(TalkMsgRequest *p);
    void setAdvancePending();
    void unlockAdvance();
    void lockAdvance();
    void setNextMessageIfUnset(u8 *a, void *b);
    /* 0x00 */ s32 index;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 nextState;
};
extern "C" TalkWindowState *TalkWindow_Get(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes

// 8-byte animation record
struct Unk_ov002_02203c5c_Rec {
    u32 unk_00;
    u32 charName : 10;
    u32 unk_04_hi : 22;
};

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




// slider class (vtable 0x022044b4)
class MenuSlide : public MenuTween {
public:
    MenuSlide();
    virtual ~MenuSlide();
    s32 offset;
    s32 extent;
    s32 edgeDistance;
    u8 direction;
    void updateSlideOutHorizontal(s32 mode);
    void updateSlideOutVertical(s32 mode);
    BOOL stepSlideIn(s32 mode);
    void updateSlideInHorizontal(s32 mode);
    void updateSlideInVertical(s32 mode);
    s32 getOffsetX();
    s32 getOffsetY();
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

struct Unk_ov002_022018e4_Arg {
    u8 v;
};

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

// ---- .data
extern "C" s32 sPopupChoicePopOffsets[3] = {-5, 1, 0};

// ---- PopupChoiceRow ----

PopupChoiceRow::PopupChoiceRow() {
    layer = 3;
    charBase = 0;
    fgColor = 1;
    bgColor = 9;
}

PopupChoiceRow::~PopupChoiceRow() {}

void PopupChoiceRow::render(s32 v) {
    u8 x = fgColor;
    if (v >= 0) {
        x = v & 0xf;
    }
    createLabel(layer, charBase, 0xd, x, bgColor, 0);
}

void PopupChoiceRow::setup(u32 a, u16 b, u8 c, u8 d) {
    layer = a;
    charBase = b;
    fgColor = c;
    bgColor = d;
}

// ---- PopupChoiceMenu ----

PopupChoiceMenu::PopupChoiceMenu() {}

PopupChoiceMenu::~PopupChoiceMenu() {}

void PopupChoiceMenu::init(s32 a, s32 b, const char *path) {
    layer = a;
    bgPriority = b;
    scrollX = 0;
    scrollY = 0;
    state = 0;
    request = 0;
    stateStep = 0;
    openLeftward = 0;
    textWidthTiles = 0xd;
    numRows = 5;
    if (path == 0) {
        screenFile = (const char *)"menu/inventory/b_itm_bg_b.bsc";
    } else {
        screenFile = path;
    }
    void *heap = gCurrentHeap;
    u8 *buf = File_LoadAlloc(screenFile, heap, -4, 0);
    rowCharBase = *(u16 *)(buf + 0x44) & 0x3ff;
    Heap_Free(heap, buf);
    u16 v = rowCharBase;
    s32 i;
    for (i = 0; i < 5; i++) {
        rows[i].setup(a, v, 1, 9);
        v += 0x1a;
    }
    pageButton.setOrigin(0x60, 0x8c);
    pageButton.setPos(0, 0);
    pageButton.hideLayer2();
    pageButton.enableObjWindow();
    pageButton.setState(1);
    title.hideNow();
    title.showText(0x1f, 0x80, 0xc);
    title.enableObjWindow();
    flags = 0;
}

s32 PopupChoiceMenu::placeCentered(s32 a, s32 b) {
    a += 0x80;
    b += 0x60;
    s32 w = PopupChoice_GetWidth((Self *)this);
    s32 h = PopupChoice_GetHeight((Self *)this);
    a -= w >> 1;
    b -= h >> 1;
    PopupChoice_SetPos((Self *)this, a, b);
}

void PopupChoiceMenu::placeNearPoint(s32 a, s32 b) {
    s32 w = PopupChoice_GetWidth((Self *)this);
    s32 h = PopupChoice_GetHeight((Self *)this);
    s32 x = a - w + 0x20;
    if (x > 0) {
        openLeftward = 1;
    } else {
        x = a - 0x10;
        openLeftward = 0;
    }
    s32 y = b - h - 4;
    if (y < 10) {
        y = 10;
    }
    PopupChoice_SetPos((Self *)this, x, y);
}

void PopupChoiceMenu::placeAt(s32 a, s32 b) {
    PopupChoice_SetPosClamped((Self *)this, a, b);
}

void PopupChoiceMenu::placeAbove(s32 a, s32 b) {
    b -= PopupChoice_GetHeight((Self *)this);
    PopupChoice_SetPosClamped((Self *)this, a, b);
}

void PopupChoiceMenu::placeAboveBalloon(LabelBalloon *p) {
    openLeftward = 0;
    s32 x = p->getPosX() + 0x80;
    s32 y = p->getPosY() + 0x60;
    s32 h = PopupChoice_GetHeight((Self *)this);
    s32 hw = p->getWidth() >> 1;
    s32 r = x + hw;
    if (r > 0x100) {
        x -= r - 0x100;
    } else {
        r = x - hw;
        if (r < 0) {
            x -= r;
        }
    }
    x -= 2;
    x -= PopupChoice_GetWidth((Self *)this) >> 1;
    s32 t = y - h;
    if (t < 10) {
        y += 0x10;
    } else {
        y = t;
    }
    PopupChoice_SetPosClamped((Self *)this, x, y);
}

void PopupChoice_ApplyScroll(Self *self, s32 x, s32 y) {
    Gfx2d_SetLayerOffset(self->layer, x, y);
}

void PopupChoice_SetPos(Self *self, s32 x, s32 y) {
    PopupChoice_ApplyScroll(self, x, y);
    self->scrollX = -x;
    self->scrollY = -y;
}

void PopupChoice_SetPosClamped(Self *self, s32 x, s32 y) {
    s32 a = PopupChoice_GetWidth(self);
    s32 b = PopupChoice_GetHeight(self);
    if (x < 0) x = 0;
    if (y < 10) y = 10;
    if (x + a > 0xff) x = 0xff - a;
    if (y + b > 0xb6) y = 0xb6 - b;
    PopupChoice_SetPos(self, x, y);
}

void PopupChoice_LoadChoiceBg(Self *self) {
    void *h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/inventory/b_itm.bpl", h, self->layer, 0, 3, 3);
    Gfx2d_LoadCharFile("menu/inventory/b_choice.bch", h, self->layer, 0x242, 0x242, 0x2d7);
}

void PopupChoice_LoadFriendBg(Self *self) {
    void *h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/friend/bg1.bpl", h, self->layer, 0xe, 0xe, 0xe);
    Gfx2d_LoadCharFile("menu/friend/bg1.bch", h, self->layer, 0x26e, 0x26e, 0x27d);
}

void PopupChoice_OpenAddresseePage(Self *self, Unk_ov002_022018e4_Arg a, s32 x) {
    self->loadAddresseePage((PopupChoiceIdList *)&a);
    self->placeCentered(0, -12);
    PopupChoice_Open(self, x);
}

void PopupChoice_Open(Self *self, s32 x) {
    self->request = 1;
    Gfx2d_HideLayer(self->layer);
    if (x != 0) {
        self->setFlags(2);
    }
    Snd_PlaySe(0x13);
    self->clearFlags(0x10);
}

void PopupChoice_Close(Self *self, s32 x) {
    self->request = 2;
    if (x != 0) {
        self->setFlags(4);
    }
    if (self->testFlags(0x10)) {
        self->clearFlags(0x10);
    } else {
        Snd_PlaySe(0x14);
    }
}

void PopupChoice_SetState(Self *self, u32 x) {
    if (self->testFlags(2) && x == 1) {
        x = 2;
        self->clearFlags(x);
    } else if (self->testFlags(4) && x == 4) {
        x = 5;
        self->clearFlags(4);
    }
    self->state = x;
    self->stateStep = 0;
}

void PopupChoice_BuildScreen(Self *self) {
    Gfx2d_SetLayerPriority(self->layer, self->bgPriority);
    Gfx2d_SetLayerControl(self->layer, 0, 0, 0);
    void *heap = gCurrentHeap;
    u8 *buf = File_LoadAlloc(self->screenFile, heap, -4, 0);
    u32 n = self->numRows;
    if (n != 5) {
        u16 v = *(u16 *)(buf + 0x22);
        u16 *src = (u16 *)(buf + 0x280);
        u16 *dst = (u16 *)(buf + (n << 7));
        dst[0] = src[0];
        dst[1] = src[1];
        dst[0xf] = src[0xf];
        dst[0x10] = src[0x10];
        u8 *t = buf + (((self->numRows << 1) + 1) << 6);
        u8 *q = buf + 0x2c0;
        MIi_CpuCopy16(q, t ? t : t, 0x40);
        n = self->numRows;
        volatile u16 tmp[1];
        tmp[0] = v;
        MIi_CpuClear16(tmp[0], buf + (((n << 1) + 2) << 6), (5 - n) << 7);
    }
    if (self->textWidthTiles != 0xd) {
        u8 *s;
        u8 *d;
        s32 i;
        s32 k;
        d = buf + (self->textWidthTiles + 1) * 2;
        s = buf + 0x1c;
        k = self->numRows * 2 + 2;
        MIi_CpuCopy16(s, d, 0x1e);
        d += 0x42;
        s += 0x42;
        for (i = 1; i < k - 1; i++) {
            MIi_CpuCopy16(s, d, 0x1e);
            d += 0x40;
            s += 0x40;
        }
        MIi_CpuCopy16(s - 2, d - 2, 0x1e);
    }
    Gfx2d_LoadScreen(buf, self->layer, 0x800, 0);
    Heap_Free(heap, buf);
}

void PopupChoice_StepPopOpen(Self *self) {
    if (self->stateStep == 0) {
        PopupChoice_BuildScreen(self);
        Gfx2d_ShowLayer(self->layer);
    }
    s32 d = sPopupChoicePopOffsets[self->stateStep];
    s32 x;
    if (self->openLeftward != 0) {
        x = self->scrollX - d;
    } else {
        x = self->scrollX + d;
    }
    if (x > 0) x = 0;
    if (-x + PopupChoice_GetWidth(self) > 0xff) {
        x = PopupChoice_GetWidth(self) - 0xff;
    }
    PopupChoice_ApplyScroll(self, x, self->scrollY - d);
    self->stateStep = self->stateStep + 1;
    if (self->stateStep >= 3) {
        PopupChoice_SetState(self, 3);
    }
}

void PopupChoice_StepPopClose(Self *self) {
    if (self->stateStep == 0) {
        s32 x;
        if (self->openLeftward != 0) {
            x = self->scrollX - 0xb;
        } else {
            x = self->scrollX + 0xb;
        }
        if (x > 0) x = 0;
        if (-x + PopupChoice_GetWidth(self) > 0xff) {
            x = PopupChoice_GetWidth(self) - 0xff;
        }
        PopupChoice_ApplyScroll(self, x, self->scrollY - 0xb);
        self->stateStep = self->stateStep + 1;
    } else {
        Gfx2d_HideLayer(self->layer);
        PopupChoice_SetState(self, 0);
    }
}

void PopupChoice_ApplySlide(Self *self) {
    ((MenuSlideView *)&self->slide)->applyLayerOffset(self->layer, -self->scrollX, -self->scrollY);
    s32 r = ((MenuSlideView *)&self->slide)->getOffsetY();
    self->pageButton.setPos(0, r);
    self->title.setPos(0, -(r >> 2));
}

void PopupChoice_StepSlideOpen(Self *self) {
    if (self->stateStep == 0) {
        PopupChoice_BuildScreen(self);
        Gfx2d_BeginSubObjWinBrightness();
        Gfx2d_GetLayerBlendMask(self->layer);
        Gfx2d_ExcludeSubBrightnessPlanes();
        Gfx2d_SetSubBrightness(-6);
        s32 r = Gfx2d_GetLayerPlaneMask(self->layer);
        ((MenuSlideView *)&self->slide)->beginSubSlideIn(r, 5, 0, 0x30);
        Gfx2d_ShowLayer(self->layer);
        self->setFlags(1);
        self->titleRefreshDelay = 2;
        PopupChoice_ApplySlide(self);
        self->stateStep = self->stateStep + 1;
    } else {
        if (((MenuSlideView *)&self->slide)->stepSlideIn(0)) {
            PopupChoice_SetState(self, 3);
            if (self->titleRefreshDelay != 0) {
                self->titleRefreshDelay = 1;
            }
        }
        if (self->titleRefreshDelay != 0) {
            self->titleRefreshDelay = self->titleRefreshDelay - 1;
            if (self->titleRefreshDelay == 0) {
                self->title.refreshText(0);
            }
        }
        PopupChoice_ApplySlide(self);
    }
}

void PopupChoice_StepSlideClose(Self *self) {
    if (self->stateStep == 0) {
        s32 r = Gfx2d_GetLayerPlaneMask(self->layer);
        ((MenuSlideView *)&self->slide)->beginSubSlideOut(r, 3, 0, 0x30);
        PopupChoice_ApplySlide(self);
        self->stateStep = self->stateStep + 1;
    }
    if (((MenuSlideView *)&self->slide)->stepSlideOut(0)) {
        Gfx2d_EndSubObjWinBrightness();
        self->clearFlags(1);
        Gfx2d_HideLayer(self->layer);
        PopupChoice_SetState(self, 0);
    } else {
        PopupChoice_ApplySlide(self);
    }
}

s32 PopupChoice_GetWidth(Self *self) {
    return (self->textWidthTiles + 4) << 3;
}

s32 PopupChoice_GetHeight(Self *self) {
    return (self->numRows * 2 + 2) << 3;
}

void PopupChoice_FitWidth(Self *self) {
    s32 max = 0;
    s32 i = 0;
    PopupChoiceRow *e = self->rows;
    for (; i < self->numRows; i++) {
        s32 v = e[i].getTextWidth();
        if (v > max) max = v;
    }
    self->textWidthTiles = (max + 7) >> 3;
}

void PopupChoice_Update(Self *self) {
    self->freeRowTexts();
    if (self->testFlags(8)) {
        self->clearFlags(8);
        self->rows[self->decidedRow].render(0xf);
        self->rows[self->decidedRow].redrawAligned(0, 0);
    }
    switch (self->request) {
    case 1:
        switch (self->state) {
        case 0:
            PopupChoice_SetState(self, 1);
            self->request = 0;
            self->renderRows();
            break;
        case 1:
        case 2:
            self->request = 0;
            break;
        case 3:
            PopupChoice_SetState(self, 4);
            break;
        }
        break;
    case 2:
        switch (self->state) {
        case 3:
            PopupChoice_SetState(self, 4);
            self->request = 0;
            break;
        case 1:
            Gfx2d_HideLayer(self->layer);
            PopupChoice_SetState(self, 0);
            self->request = 0;
            break;
        case 0:
        case 2:
            self->request = 0;
            break;
        }
        break;
    }
    switch (self->state) {
    case 1:
        PopupChoice_StepPopOpen(self);
        break;
    case 4:
        PopupChoice_StepPopClose(self);
        break;
    case 2:
        PopupChoice_StepSlideOpen(self);
        break;
    case 5:
        PopupChoice_StepSlideClose(self);
        break;
    case 0:
    case 3:
        break;
    }
}

void PopupChoice_Draw(Self *self) {
    if (self->testFlags(1)) {
        self->pageButton.draw();
        self->title.draw();
    }
}

void PopupChoice_ForceClose(Self *self) {
    self->request = 0;
    if (self->state != 0) {
        Gfx2d_HideLayer(self->layer);
        self->state = 0;
    }
    self->freeRowTexts();
}

void PopupChoice_StartDecide(Self *self, s32 x) {
    self->setFlags(8);
    if (MenuCtrl_IsButtons()) {
        self->decideDelay = 2;
    } else {
        self->decideDelay = 5;
    }
    self->decidedRow = x;
}

void PopupChoice_DecideRow(Self *self, s32 a, s32 b) {
    PopupChoice_StartDecide(self, a);
    if (b == 0) {
        self->setFlags(0x10);
    } else if (self->numRows - 1 == a) {
        Snd_PlaySe(0x2a);
    } else {
        Snd_PlaySe(0x29);
    }
}

u8 PopupChoice_DecideCancel(Self *self, s32 x) {
    s32 t = self->numRows - 1;
    PopupChoice_StartDecide(self, t);
    if (x == 0) {
        self->setFlags(0x10);
    } else {
        Snd_PlaySe(0x2a);
    }
    return t;
}

void PopupChoice_DecideAddressee(Self *self, u32 x) {
    PopupChoice_StartDecide(self, x);
    if (self->pickAddressee(self->addresseePage, (u8)x) == 0xf) {
        Snd_PlaySe(0x2a);
    } else {
        Snd_PlaySe(0x29);
    }
}

BOOL PopupChoice_TickDecideDelay(Self *self) {
    u32 v = self->decideDelay;
    if (v != 0) {
        self->decideDelay = v - 1;
        return FALSE;
    }
    return TRUE;
}

BOOL PopupChoice_MoveCursor(Self *self, s32 p, u8 *pos, u32 n) {
    if (p != 0) {
        if (MenuKeys_HasUp(p)) {
            if (*pos > n) {
                *pos = *pos - 1;
            } else {
                *pos = self->numRows - 1;
            }
            return TRUE;
        }
        if (MenuKeys_HasDown(p)) {
            s32 t = *pos + 1;
            if (t < self->numRows) {
                *pos = t;
            } else {
                *pos = n;
            }
            return TRUE;
        }
    }
    return FALSE;
}

void PopupChoice_CopyPlayerIdName(s32 a, s32 b) {
    u32 buf[7];
    func_02094030(buf);
    PlayerId_getNameString(b, buf);
    MsgString_copy((void *)a, buf);
    func_02094018(buf);
}

void PopupChoice_CopyResidentName(s32 x, s32 y) {
    PopupChoice_CopyPlayerIdName(x, PlayerData_getPlayerId(PlayerData_GetResident(gSavePlayers, y)));
}

void PopupChoice_CopyVillagerIdName(s32 a, s32 b) {
    u32 buf[7];
    func_02094030(buf);
    VillagerId_getName(b, buf);
    MsgString_copy((void *)a, buf);
    func_02094018(buf);
}

void PopupChoice_CopyVillagerName(s32 x, s32 y) {
    PopupChoice_CopyVillagerIdName(x, VillagerData_getVillagerId(SaveVillagers_Get(gSaveVillagers, y)));
}

void PopupChoice_SetAddresseeName(s32 unused, s32 x, u32 id) {
    if (id >= 1 && id < 5) {
        PopupChoice_CopyResidentName(x, id - 1);
    } else if (id >= 5 && id < 0xd) {
        PopupChoice_CopyVillagerName(x, id - 5);
    } else {
        switch (id) {
        case 0xd:
            ((Self *)unused)->load2dString((void *)x, 0x25);
            break;
        case 0xe:
            ((Self *)unused)->load2dString((void *)x, 0x1e);
            break;
        case 0xf:
            ((Self *)unused)->load2dString((void *)x, 0x27);
            break;
        }
    }
}

void PopupChoiceMenuBody::buildAddresseeList()
{
    s32 i, n;
    s32 k, j;
    s32 g, t;
    numPages = 0;
    for (i = 0; i < 0x19; i++) {
        addresseeIds[i] = 0;
    }
    g = PlayerData_getPlayerId(PlayerData_GetCurrent());
    t = PlayerDataArray_FindById(gSavePlayers, g);
    n = 0;
    k = 1;
    j = n;
    do {
        if (t != j) {
            if (PlayerDataArray_IsUsed(gSavePlayers, j)) {
                addresseeIds[n] = k;
                n++;
            }
        }
        k++;
        j++;
    } while (k < 5);
    if (n % 5 == 4) {
        addresseeIds[n] = 0xe;
        n++;
    }
    k = 5;
    j = 0;
    do {
        if (SaveVillagers_IsOccupied(gSaveVillagers, j)) {
            if (Villager_FindMemory(SaveVillagers_Get(gSaveVillagers, j), g)) {
                addresseeIds[n] = k;
                n++;
            }
        }
        if (n % 5 == 4) {
            addresseeIds[n] = 0xe;
            n++;
        }
        k++;
        j++;
    } while (k < 0xd);
    if (n % 5 != 0) {
        addresseeIds[n] = 0xe;
        n++;
    }
    while (n % 5 != 0) {
        addresseeIds[n] = 0;
        n++;
    }
    addresseeIds[n] = 0xd;
    addresseeIds[n + 1] = 0xf;
    n += 2;
    if (n > 2) {
        addresseeIds[n] = 0xe;
        n++;
    }
    numPages = (n + 4) / 5;
}

BOOL PopupChoiceMenuBody::isOpen()
{
    if (state == 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL PopupChoiceMenuBody::isClosed()
{
    if (state == 0) {
        return TRUE;
    }
    return FALSE;
}

void PopupChoiceMenuBody::freeRowTexts()
{
    s32 i;
    for (i = 0; i < 5; i++) {
        rows[i].destroyLabel();
    }
}

void PopupChoiceMenuBody::resetRowColors()
{
    s32 i;
    for (i = 0; i < 5; i++) {
        rows[i].render(-1);
    }
}

void PopupChoiceMenuBody::renderRows()
{
    resetRowColors();
    s32 i;
    for (i = 0; i < numRows; i++) {
        rows[i].redrawAligned(0, 0);
    }
}

extern "C" BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &p[i];
        if (p[i] == 0xff) {
            q[0] = a;
            q[5] = b;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void ChoiceIdList_Clear(u8 *p, u8 v)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &p[i];
        p[i] = 0xff;
        q[5] = v;
    }
    p[10] = 0;
}

extern "C" s32 ChoiceIdList_Count(u8 *p)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        if (p[i] == 0xff) {
            return i;
        }
    }
    return i;
}

s32 PopupChoiceMenuBody::addCustomRow(PopupChoiceIdList *r, void *s, u32 v)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &r->msgIds[i];
        if (r->msgIds[i] == 0xff) {
            MsgString_copy(&rows[i], s);
            r->values[i] = v;
            r->customMask |= 1 << i;
            q[0] = 0xfe;
            return 1;
        }
    }
    return 0;
}

void PopupChoiceMenuBody::setRowsFromIds(PopupChoiceIdList *r, s32 f)
{
    s32 n = 0;
    s32 i = n;
    for (; i < 5; i++) {
        u32 v = r->msgIds[i];
        if (v == 0xff) {
            i = 5;
        } else if ((1 << i) & r->customMask) {
            n++;
        } else {
            load2dString(&rows[n], v);
            n++;
        }
    }
    if (f != 0) {
        setFlags(0x20);
    } else {
        clearFlags(0x20);
    }
    numRows = n;
    PopupChoice_FitWidth(this);
}

void PopupChoiceMenuBody::loadAddresseePage(PopupChoiceIdList *r)
{
    s32 i;
    s32 k = r->msgIds[0] * 5;
    numRows = 0;
    for (i = 0; i < 5; i++, k++) {
        u32 v = addresseeIds[k];
        if (v != 0) {
            PopupChoice_SetAddresseeName((s32)this, (s32)&rows[i], v);
            numRows++;
        } else {
            i = 5;
        }
    }
    PopupChoice_FitWidth(this);
    u8 buf[4];
    buf[0] = r->msgIds[0] + 0x36;
    buf[1] = 0;
    buf[2] = numPages + 0x35;
    buf[3] = 0;
    u32 a[16];
    u32 b[16];
    func_0206fcc8(a);
    func_0206fcc8(b);
    String_FromEncodedBytes(b, buf, 2);
    MsgString_copy(a, b);
    MsgString_append(a, "/");
    String_FromEncodedBytes(b, buf + 2, 2);
    MsgString_appendString(a, b);
    LabelButton_setLabelText(&pageButton, a);
    pageButton.vfunc_0c();
    addresseePage = r->msgIds[0];
    func_0206fca8(b);
    func_0206fca8(a);
}

s32 PopupChoiceMenuBody::hitTestRowOr(s32 x, s32 y, s32 d)
{
    s32 l = -scrollX;
    s32 t = -scrollY;
    s32 r = l + PopupChoice_GetWidth((Self *)this);
    s32 b = t + PopupChoice_GetHeight((Self *)this);
    if (l > x || r < x) {
        return d;
    }
    if (t > y || b < y) {
        return d;
    }
    t += 0x18;
    s32 i = 0;
    s32 n = numRows - 1;
    for (; i < n; i++) {
        if (t > y) {
            break;
        }
        t += 0x10;
    }
    return i;
}

s32 PopupChoiceMenuBody::hitTestRowOrLast(s32 x, s32 y)
{
    return hitTestRowOr(x, y, numRows - 1);
}

s32 PopupChoiceMenuBody::hitTestRow(s32 x, s32 y)
{
    return hitTestRowOr(x, y, -1);
}

s32 PopupChoiceMenuBody::getRowX()
{
    return 0x10 - scrollX;
}

s32 PopupChoiceMenuBody::getRowY(s32 v)
{
    return ((v + 1) << 4) - scrollY;
}

u32 PopupChoiceMenuBody::getRowCount()
{
    return numRows;
}

u32 PopupChoiceMenuBody::getPageCount()
{
    return numPages;
}

u32 PopupChoiceMenuBody::pickAddressee(u32 a, u32 b)
{
    u32 t = addresseeIds[b + a * 5];
    if (t != 0xe) {
        setFlags(4);
    }
    switch (t) {
    case 0xf:
        Snd_PlaySe(0x28);
        break;
    case 0xe:
        Snd_PlaySe(0x29);
        break;
    default:
        Snd_PlaySe(0x27);
        break;
    }
    return t;
}

s32 PopupChoiceMenuBody::getAddresseeKind(u32 id)
{
    switch (id) {
    case 0xf:
        return 3;
    case 0xe:
        return 2;
    }
    return 1;
}

s32 PopupChoiceMenuBody::applyAddressee(void *p, u32 id)
{
    switch (id) {
    case 0xf:
        return 3;
    case 0xe:
        return 2;
    case 0xd:
        Letter_SetRecipientFutureSelf(p);
        return 1;
    }
    if (id >= 1 && id < 5) {
        Letter_SetRecipientResident(p, id - 1);
        return 1;
    }
    if (id >= 5 && id < 0xd) {
        Letter_SetRecipientVillager(p, id - 5);
        return 1;
    }
    return 0;
}

BOOL PopupChoiceMenuBody::testFlags(u32 m)
{
    if (flags & m) {
        return TRUE;
    }
    return FALSE;
}

void PopupChoiceMenuBody::setFlags(u32 m)
{
    flags |= m;
}

void PopupChoiceMenuBody::clearFlags(u32 m)
{
    flags &= ~m;
}

void PopupChoiceMenuBody::load2dString(void *buf, u32 c)
{
    u8 t = c;
    String_Load2d(buf, &t, 0);
}
