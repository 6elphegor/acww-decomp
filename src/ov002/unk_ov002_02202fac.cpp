// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef postCreate
#undef vfunc_14

// ---------------------------------------------------------------------------------------------------------------------
// Real names of functions of other modules (plain names that are really methods / ctors / dtors)
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN8PlayerId13func_020940d0EP9MsgString
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
void func_020940d0(s32 a, void *buf);
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
void func_02065b5c(void *p);
void func_02065ba4(void *p, s32 a);
void func_02065bd0(void *p, s32 a);
void String_Load2d(void *buf, u8 *c, s32 z);
void String_FromEncodedBytes(void *dst, const void *s, s32 len);
void String_Load2dMenu(void *a, s32 v);
void *PlayerData_GetCurrent();
s32 func_02097740(void *a, s32 b);
s32 func_020978c8(void *a, s32 b);
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

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public MsgStringBase {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// String buffer wrapping a text renderer (TextLabel) at +0x3c
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 getTextWidth();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
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

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
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

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
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

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ SpriteAnim unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
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

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
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
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
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
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};
extern "C" TalkWindowState *TalkWindow_Get(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes

// 8-byte animation record
struct Unk_ov002_02203c5c_Rec {
    u32 unk_00;
    u32 unk_04 : 10;
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

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// vptr-only class (vtable 0x022044d4)
class KeyRepeat {
public:
    KeyRepeat();
    virtual ~KeyRepeat();
};

// cursor / input repeat state (view of the object at +0x50 of MenuProc; the vptr is a KeyRepeat)
class KeyRepeatView {
public:
    u32 unk_00;
    s16 unk_04;
    s16 unk_06;
    s16 unk_08;
    s16 unk_0a;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    void init(s32 a, s32 b, s32 c);
    BOOL isRight();
    BOOL isLeft();
    BOOL isDown();
    BOOL isUp();
    u32 take();
    void update();
};

// slider base class (vtable 0x022044c4)
class MenuTween {
public:
    MenuTween();
    virtual ~MenuTween();
    s32 unk_04;
    s32 unk_08;
    s32 scaleLinear(s32 v);
    s32 scaleQuadratic(s32 v);
    BOOL step();
    void start(u32 n);
};

// slider class (vtable 0x022044b4)
class MenuSlide : public MenuTween {
public:
    MenuSlide();
    virtual ~MenuSlide();
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
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

    /* 0x50 */ KeyRepeat unk_50;
    /* 0x54 */ u8 unk_54[0x10];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ MenuProc *unk_6c;
    /* 0x70 */ MenuSlide unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
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

    /* 0x04 */ LabelString unk_04;
    /* 0x44 */ Unk_ov002_02203c5c_Rec *unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
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
    /* 0x0a4 */ MenuTitleBalloon unk_a4;
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 unk_161;
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

    /* 0x00 */ TouchPromptBalloon unk_00;
    /* 0xc0 */ TalkMsgRequest unk_c0;
    /* 0xe0 */ u8 unk_e0[0x1c];
    /* 0xfc */ TalkWindowState *unk_fc;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 unk_104;
    /* 0x105 */ u8 unk_105;
};

// Scroll/move helper embedded at +0x4c of MenuCursorBase (vtable 0x02204604)
class CursorMotion {
public:
    CursorMotion();
    virtual ~CursorMotion();

    BOOL isMoving();
    void startEase(s32 x, s32 y, s32 n);
    void startLinear(s32 x, s32 y, s32 n);
    void setPos(s32 x, s32 y);
    void stop();
    s32 getY();
    s32 getX();
    BOOL update();
    void reset();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
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

    /* 0x4c */ CursorMotion unk_4c;
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

    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
};

struct PopupChoiceIdList {
    u8 unk_00[5];
    u8 unk_05[5];
    u8 unk_0a;
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

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 unk_1a;
    /* 0x1b */ u8 unk_1b;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 unk_1d;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
    /* 0x21 */ volatile u8 unk_21;
    /* 0x22 */ u8 pad_22[2];
    /* 0x24 */ const char *unk_24;
    /* 0x28 */ PopupChoiceRow unk_28[5];
    /* 0x190 */ MenuLabelButton unk_190;
    /* 0x200 */ MenuTitleBalloon unk_200;
    /* 0x2bc */ MenuSlide unk_2bc;
    /* 0x2d8 */ u8 unk_2d8[0x19];
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
    unk_104 = 3;
    unk_105 = 0;
}

MenuErrorMessage::~MenuErrorMessage() {}

void MenuErrorMessage::open(u8 *a, s32 b, u32 c) {
    unk_105 = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    unk_00.setText((StrBuf *)&s);
    unk_00.setPos(0, 0x40);
    unk_00.queueOpen();
    unk_00.enableObjWindow();
    unk_00.func_ov002_022006ac(0);
}

void MenuErrorMessage::openHigh(u8 *a, s32 b, u32 c) {
    unk_105 = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    unk_00.setText((StrBuf *)&s);
    unk_00.setPos(0, 0x30);
    unk_00.queueOpen();
    unk_00.enableObjWindow();
    unk_00.func_ov002_022006ac(0);
}

BOOL MenuErrorMessage::update(s32 a) {
    switch (unk_104) {
    case 0:
        if (isTalkWaiting()) {
            unk_104 = 1;
            unk_00.commitOpen();
            if (unk_105 != 0) dimSubScreen();
        }
        break;
    case 1:
        if (unk_105 != 0) for (;;) {}
        if (a == 0 || !MenuCtrl_IsForceCloseDue()) {
            BOOL k;
            if (gTouchHeld != 0 && gTouchChanged != 0) k = TRUE; else k = FALSE;
            if (!k) {
                u16 v = gPad[1];
                if ((v & 1) == 0 && (v & 2) == 0 && (v & 0x400) == 0 && (v & 0x800) == 0) break;
            }
        }
        advanceTalk();
        unk_104 = 2;
        unk_00.hide(0);
        break;
    case 2:
        if (finishTalk()) {
            restoreBrightness();
            unk_104 = 3;
        }
        break;
    case 3:
        return TRUE;
    }
    unk_00.updatePrompt();
    if (unk_105 == 0) {
        TouchPromptBalloon *p = &unk_00;
        p->draw();
    }
    return FALSE;
}

void MenuErrorMessage::startTalk(u8 *a, s32 b) {
    TalkWindowState *p = TalkWindow_Get(1);
    unk_c0.vfunc_08();
    unk_c0.setFileName("obj_etc_error");
    unk_c0.unk_1e = *a;
    p->attachRequest(&unk_c0);
    p->disableInput();
    if (b == 0) p->setKeepSe();
    p->unk_08 = 1;
    p->lockAdvance();
    unk_104 = 0;
    if (unk_105 == 0) dimSubScreen();
}

BOOL MenuErrorMessage::stepOpen() {
    if (unk_104 == 0) {
        if (isTalkWaiting()) {
            unk_104 = 1;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::beginClose() {
    advanceTalk();
    unk_104 = 2;
}

BOOL MenuErrorMessage::stepClose() {
    if (unk_104 == 2) {
        if (finishTalk()) {
            restoreBrightness();
            unk_104 = 3;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::showPromptOnly() {
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    unk_00.setText((StrBuf *)&s);
    unk_00.setPos(0, 0x40);
    unk_00.queueOpen();
    unk_00.enableObjWindow();
    unk_00.func_ov002_022006ac(0);
    dimSubScreen();
    unk_00.commitOpen();
}

void MenuErrorMessage::updatePromptBalloon() {
    unk_00.updatePrompt();
    TouchPromptBalloon *p = &unk_00;
    p->draw();
}

void MenuErrorMessage::hidePromptBalloon() { unk_00.hide(0); }

void MenuErrorMessage::undim() { restoreBrightness(); }

BOOL MenuErrorMessage::isTalkWaiting() {
    TalkWindowState *p = TalkWindow_Get(1);
    if (p->unk_04 == 2) return TRUE;
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
    if (o->unk_04 == 0) {
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
    unk_44 = 0;
    unk_49 = 0;
    unk_4c = 0;
}

MenuTextButton::~MenuTextButton() { unk_04.destroyLabel(); }

void MenuTextButton::setup(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b) {
    unk_44 = p;
    unk_48 = a;
    unk_4a = b;
}

void MenuTextButton::setLabel(u8 v) {
    unk_4b = v;
    renderText(0xf, 0);
}

void MenuTextButton::setLabelWithShadow(u8 v) {
    setLabel(v);
    unk_49 = 0;
    clearFlags(1);
}

void MenuTextButton::setLabelNoShadow(u8 v) {
    setLabel(v);
    unk_49 = 0;
    setFlags(1);
}

void MenuTextButton::renderText(u8 a, u8 b) {
    String_Load2dMenu(&unk_04, unk_4b);
    unk_04.createLabel(8, unk_44->unk_04, unk_48, a, b, 0);
    unk_04.redrawAligned(1, 0);
}

BOOL MenuTextButton::testFlags(u32 m) {
    if ((unk_4c & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void MenuTextButton::setFlags(u32 m) { unk_4c = unk_4c | m; }

void MenuTextButton::clearFlags(u32 m) { unk_4c = unk_4c & ~m; }

void MenuTextButton::freeText() { unk_04.destroyLabel(); }

u32 MenuTextButton::getPressOffset() { return sTextButtonPressOffsets[unk_49]; }

void MenuTextButton::drawAt(s32 x, s32 y, s32 c) {
    u32 off = getPressOffset();
    s32 pal = -1;
    if (testFlags(4)) {
        pal = 2;
    }
    s32 yy = y + 0x60 + off;
    s32 xx = x + 0x80 + off;
    Oam_DrawCell(1, unk_44, xx, yy, pal, c, 0x1000, 0x1000, 0, -1, 0, 0);
    if (testFlags(2)) {
        Oam_DrawCell(1, unk_44, xx, yy, -1, c, 0x1000, 0x1000, 0, 2, 0, 0);
    }
    if (!testFlags(1)) {
        if (unk_49 + 1 != 3) {
            x += 0x83;
            y += 0x63;
            Oam_DrawCell(1, unk_44 + unk_4a, x, y, 1, c, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

BOOL MenuTextButton::stepPress() {
    if (unk_49 == 0) {
        renderText(0xe, 0);
    }
    if (unk_49 + 1 < 3) {
        unk_49++;
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

MenuBottomButtons::MenuBottomButtons() { unk_160 = 0; }

MenuBottomButtons::~MenuBottomButtons() {}

extern "C" void MenuButtons_LoadTextColors() { GXS_LoadOBJPltt(sMenuButtonTextColors, 0x1c, 4); }

void MenuBottomButtons::freeTexts() {
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].freeText();
    }
}

void MenuBottomButtons::drawAt(s32 a) {
    switch (unk_160) {
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
        if (unk_160 != 10) {
            unk_a4.setPos(0, -(a >> 2));
            unk_a4.draw();
        }
        s32 b = a >> 2;
        if (unk_160 == 7) {
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
        if (unk_160 != 10) {
            unk_a4.setPos(0, t - 8);
            unk_a4.draw();
        }
        a = (a >> 1) - 0x1e;
        unk_04[0].drawAt(0, a, -1);
        unk_04[1].drawAt(0, a, -1);
        break;
    }
    case 11: {
        s32 b = a >> 1;
        unk_a4.setPos(0, -b);
        unk_a4.draw();
        unk_04[0].drawAt(-0x50, b + 0x44, -1);
        unk_04[1].drawAt(0x10, b + 0x44, -1);
        break;
    }
    case 12: {
        s32 b = a >> 1;
        unk_a4.setPos(0, -b);
        unk_a4.draw();
        unk_04[0].drawAt(-0x50, b + 0x24, -1);
        unk_04[1].drawAt(0x10, b + 0x24, -1);
        break;
    }
    case 13: {
        s32 b = a >> 1;
        unk_a4.setPos(0, -b);
        unk_a4.draw();
        unk_04[0].drawAt(-0x50, b + 0x36, -1);
        unk_04[1].drawAt(0x10, b + 0x36, -1);
        break;
    }
    }
}

void MenuBottomButtons::hide() { unk_160 = 0; }

void MenuBottomButtons::setLayoutNeverMindConfirm() {
    unk_04[0].setup(sButtonCellsW8, 8, 2);
    unk_04[0].setLabelWithShadow(2);
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    unk_160 = 2;
}

void MenuBottomButtons::setLayoutChangeAddressee() {
    unk_04[0].setup(sButtonCellsW12, 0xc, 3);
    unk_04[0].setLabelWithShadow(0x20);
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    unk_160 = 2;
}

void MenuBottomButtons::setLayoutConfirm() {
    unk_04[1].setup(sButtonCellsW6Single, 6, 1);
    unk_04[1].setLabelWithShadow(0x21);
    unk_160 = 1;
}

void MenuBottomButtons::setLayoutConfirmQuit03() {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(0x65);
    unk_160 = 3;
}

void MenuBottomButtons::setLayoutConfirmQuit04() {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(0x65);
    unk_160 = 4;
}

void MenuBottomButtons::setLayoutSingle05(s32 v) {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(v);
    unk_160 = 5;
}

void MenuBottomButtons::setLayoutConfirmAnd06(u8 v) {
    unk_04[1].setup(sButtonCellsW6A, 6, 2);
    unk_04[1].setLabelWithShadow(0x21);
    unk_04[0].setup(sButtonCellsW6B, 6, 2);
    unk_04[0].setLabelWithShadow(v);
    unk_160 = 6;
}

void MenuBottomButtonsBody::setLayoutYesNo07(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 4);
    unk_a4.hideLayer2();
    unk_04[0].setup(sButtonCellsW4B, 4, 1);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW4A, 4, 1);
    unk_04[1].setLabelWithShadow(0x13);
    unk_160 = 7;
}

void MenuBottomButtonsBody::setLayoutYesNo08(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 0x11);
    unk_a4.hideLayer2();
    unk_04[0].setup(sButtonCellsW4B, 4, 1);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW4A, 4, 1);
    unk_04[1].setLabelWithShadow(0x13);
    unk_160 = 8;
}

void MenuBottomButtonsBody::setYesNoButtons() {
    unk_04[0].setup(sButtonCellsW6A, 6, 2);
    unk_04[0].setLabelWithShadow(4);
    unk_04[1].setup(sButtonCellsW6B, 6, 2);
    unk_04[1].setLabelWithShadow(0x13);
}

void MenuBottomButtonsBody::setLayoutYesNo09(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 4);
    unk_a4.hideLayer2();
    setYesNoButtons();
    unk_160 = 9;
}

void MenuBottomButtonsBody::setLayoutTossKeep() {
    unk_04[0].setup(sButtonCellsW6A, 6, 2);
    unk_04[0].setLabelWithShadow(0x15);
    unk_04[1].setup(sButtonCellsW6B, 6, 2);
    unk_04[1].setLabelWithShadow(0x19);
    unk_160 = 0xa;
}

void MenuBottomButtonsBody::setLayoutYesNo0B(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 0x22);
    unk_a4.hideLayer2();
    setYesNoButtons();
    unk_160 = 0xb;
}

void MenuBottomButtonsBody::setLayoutYesNo0C(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 0x2a);
    unk_a4.showLayer2();
    setYesNoButtons();
    unk_160 = 0xc;
}

void MenuBottomButtonsBody::setLayoutYesNo0D(s32 x) {
    unk_a4.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&unk_a4, x, 0x80, 0x12);
    unk_a4.showLayer2();
    setYesNoButtons();
    unk_160 = 0xd;
}

void MenuBottomButtonsBody::showTitleLayer2() {
    unk_a4.showLayer2();
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
    switch (unk_160) {
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
        idx = unk_161;
    }
    return sBottomButtonTargetX[idx];
}

s32 MenuBottomButtonsBody::getTargetY(s32 idx) {
    if (idx == -1) {
        idx = unk_161;
    }
    s32 v = sBottomButtonTargetY[idx];
    switch (unk_160) {
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
    unk_161 = v;
}

void MenuBottomButtonsBody::stepPress() {
    unk_04[getButtonOfTarget(-1)].stepPress();
}

void MenuBottomButtonsBody::getPressOffset() {
    unk_04[getButtonOfTarget(-1)].getPressOffset();
}

void MenuBottomButtonsBody::enableObjWindow() {
    unk_a4.enableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].enableObjWindow();
    }
}

void MenuBottomButtonsBody::disableObjWindow() {
    unk_a4.disableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].disableObjWindow();
    }
}

s32 MenuBottomButtonsBody::getButtonOfTarget(s32 idx) {
    if (idx == -1) {
        idx = unk_161;
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
