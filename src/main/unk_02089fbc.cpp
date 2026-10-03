#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the unit (declarations of the classes whose vtable another unit owns come first)

struct SpriteAnimSeq;

// Animation object (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    void pause();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8)
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

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class MsgTextLabel : public TextLabel {
public:
    MsgTextLabel(s32 arg1, s32 arg2, s32 arg3);
    virtual ~MsgTextLabel();
    virtual void draw();
    virtual u32 measureWidth();
};

class MsgString25 : public StrBuf {
public:
    MsgString25();
    ~MsgString25();
    u32 pad[10];
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void HudUnkSlideIcon_Draw();
void HudLinkIcon_Draw();
void HudUnkIcon_Draw();
void HudLinkIcon_Update();
void HudUnkSlideIcon_Update();
void HudUnkIcon_Update();
void HudUnkIcon_Exit();
void HudUnkSlideIcon_Exit();
void HudLinkIcon_Exit();
void HudLinkIcon_Reset();
void HudUnkSlideIcon_Reset();
void HudUnkIcon_Reset();
BOOL InputMode_IsButtons();
BOOL InputMode_IsTouch();
void HudObjGfx_LoadCameraButton(u32 a, u32 b, u32 c);
void HudObjGfx_LoadKind(u32 a, u32 b);
void HudObjGfx_SetCountdownVariant(u32 a);
s32 Hud_GetSceneHudKind();
BOOL HudObjGfx_GetCountdownVariant();
s32 MenuCtrl_IsTransitionActive();
s32 ChatBalloon_IsRemoteBusy();
s32 MenuCtrl_GetTransitionProgressOrFull();
s32 func_01ffcb0c(s32 a, s32 b);
s32 PlayerData_GetCurrent();
s32 _ZN10PlayerData12getInventoryEv();
s32 _ZN15PlayerInventory13getTotalBellsEi(s32 a, s32 b);
s32 MenuCtrl_GetHandBells();
void func_02003edc();
void func_02003eec();
void Snd_PlaySe(s32 a);
void String_FormatNumber(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
void func_020e759c(void *p, s32 a, s32 b);
MsgTextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
void MsgTextLabel_Destroy(TextLabel *obj);
BOOL TalkRequest_FinishCameraView();
BOOL TalkRequest_IsCameraViewRunning();
void TalkRequest_AddCameraView();
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_ResetForceClose();
BOOL Input_IsTouchMode();
BOOL Input_IsButtonMode();
BOOL Input_IsAnyKeyTrig();
BOOL Input_IsTouchTrig();
void Input_SetButtonMode();
void Input_SetTouchMode();
s32 Input_StoreMode();
BOOL TalkRequest_IsActive();
u32 PlayerActor_GetAction(s32 a);
void Camera_SetPresetCell(u32 a, u32 b);
BOOL Input_IsTouchTrigInRect(s32 x0, s32 x1, s32 y0, s32 y1);
BOOL ChatBalloon_IsOwnBusy();
void MI_CpuCopy8(void *src, void *dst, u32 n);
void Clock_GetRtcDateTime(void *p);
s32 DateTime_Compare(void *a, void *b, s32 n);
void DateTime_Sub(void *a, void *b);
s32 Scene_GetCurrent();
void FieldInfoBalloon_ShowTimerMsg(s32 x);
u64 OS_GetTick();
s32 MenuCtrl_IsMenuOpen();
void DateTime_AddSeconds(void *p, s32 v);
void Clock_GetDayMonth(void *p);
void Clock_GetMinuteHour(void *p);
s32 Clock_GetWeekday();
BOOL PlayerActor_IsInAction(s32 a, s32 b);

// plain-named functions of the unit
void Hud_Draw();
void Hud_Update();
void Hud_Exit();
void Hud_Init();
void Hud_ClearHideB();
void Hud_Show();
void Hud_Hide();
s32 Hud_GetBells();

// functions of the unit that other classes of the unit call (symbols.txt names)
void _ZN19HudControllerStates17updateInputLayoutEv(void *p);
void _ZN19HudControllerStates16enterModeForRoomEv(void *p);
void _ZN19HudControllerStates11enterHiddenEv(void *p);
void _ZN19HudCameraGridStates11enterClosedEv(void *p);
void _ZN19HudCameraGridStates14setPosFromCellEv(void *p);
void _ZN18HudCountdownLabels10resetSlideEv(void *p);
void _ZN18HudCountdownLabels11updateSlideEv(void *p);
void _ZN18HudCountdownLabels15updateRemainingEv(void *p);
void _ZN18HudCountdownLabels13refreshLabelsEv(void *p);
void _ZN18HudCountdownLabels10freeLabelsEv(void *p);
void _ZN18HudCountdownLabels12createLabelsEv(void *p);
void _ZN14HudClockLabels10resetSlideEv(void *p);
void _ZN14HudClockLabels11updateSlideEv(void *p);
void _ZN14HudClockLabels12pollDateTimeEv(void *p);
void _ZN14HudClockLabels13refreshLabelsEv(void *p);
void _ZN13HudController14enterCountdownEv(void *p);
void _ZN13HudController10enterClockEv(void *p);
void _ZN13HudController8enterOffEv(void *p);
BOOL _ZN9HudWallet8isHiddenEv(void *p);
void _ZN9HudWallet4hideEv(void *p);
void _ZN9HudWallet4showEv(void *p);
BOOL _ZN12HudCountdown7canShowEv(void *p);
BOOL _ZN12HudCountdown10isFinishedEv(void *p);
BOOL _ZN12HudCountdown8isHiddenEv(void *p);
void _ZN12HudCountdown4hideEv(void *p);
void _ZN12HudCountdown4showEv(void *p);
void _ZN12HudCountdown8callDrawEv(void *p);
void _ZN12HudCountdown10callUpdateEv(void *p);
void _ZN12HudCountdown7releaseEv(void *p);
void _ZN12HudCountdown5resetEv(void *p);
BOOL _ZN15HudCameraButton8isHiddenEv(void *p);
void _ZN15HudCameraButton7disableEv(void *p);
void _ZN15HudCameraButton6enableEv(void *p);
void _ZN15HudCameraButton8callDrawEv(void *p);
void _ZN15HudCameraButton10callUpdateEv(void *p);
void _ZN15HudCameraButton7releaseEv(void *p);
void _ZN15HudCameraButton5resetEv(void *p);
BOOL _ZN13HudCameraGrid15pickCellByTouchEv(void *p);
BOOL _ZN13HudCameraGrid22isOtherDeviceTriggeredEv(void *p);
s32 _ZN8HudClock7canShowEv(void *p);
BOOL _ZN8HudClock8isHiddenEv(void *p);
void _ZN8HudClock4hideEv(void *p);
void _ZN8HudClock4showEv(void *p);
void _ZN8HudClock8callDrawEv(void *p);
void _ZN8HudClock10callUpdateEv(void *p);
void _ZN8HudClock7releaseEv(void *p);
void _ZN8HudClock5resetEv(void *p);
}

extern u8 gFieldSceneKind;
extern GameFontDesc gFontD;
extern GameFontDesc gFontC;
extern u8 data_020d479c[];
extern u8 data_020d4794[];
extern u8 data_020d477c[];
extern u8 data_020d4784[];
extern u8 data_020d478c[];
extern u8 data_020d467c[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchPressX;
extern u8 gTouchPressY;

// Data of this unit
extern const char *const kHudColonString;
extern const char *const kHudAmPmStrings[2];
extern const s16 kHudCountdownSeconds[6];
extern const u16 kHudWeekdayGlyphs[8];
extern const u8 kHudCameraGridTouchPos[18];
extern const s8 kHudCameraGridDirs[18];
extern const u8 kHudCameraGridCells[18];

// ---------------------------------------------------------------------------------------------------------------------
class MsgString3 : public MsgString {
public:
    MsgString3();
    virtual ~MsgString3();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[3];
};

class HudCountdown : public UiWidget {
public:
    HudCountdown();
    virtual ~HudCountdown();
    virtual void draw();
    virtual void vfunc_0c();

    u8 canShow();
    void updateHiding();
    void enterHiding();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    BOOL isFinished();
    BOOL isHidden();
    void hide();
    void show();
    void incCountB();
    void incCountA();
    void start(s32 a, s32 b);
    BOOL isStopped();
    void callDraw();
    void callUpdate();
    void release();
    void reset();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ MsgString3 unk_34;
    /* 0x4c */ MsgString3 unk_4c;
    /* 0x64 */ MsgString3 unk_64;
    /* 0x7c */ MsgString3 unk_7c;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
};

// Methods of HudCountdown's neighbour state (symbols.txt calls this class HudCountdownLabels); same object layout
class HudCountdownLabels {
public:
    void resetSlide();
    void updateSlide();
    void updateRemaining();
    void refreshCountB();
    void refreshCountA();
    void refreshSeconds();
    void refreshMinutes();
    void refreshLabels();
    void freeLabels();
    void createCountBLabel();
    void createCountALabel();
    void createSecondsLabel();
    void createMinutesLabel();
    void createLabels();

    /* 0x00 */ u32 unk_00[9];
    /* 0x24 */ TextLabel *unk_24;
    /* 0x28 */ TextLabel *unk_28;
    /* 0x2c */ TextLabel *unk_2c;
    /* 0x30 */ TextLabel *unk_30;
    /* 0x34 */ u32 unk_34[6];
    /* 0x4c */ u32 unk_4c[6];
    /* 0x64 */ u32 unk_64[6];
    /* 0x7c */ u32 unk_7c[6];
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a[2];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u8 unk_a8[8];
    /* 0xb0 */ u8 unk_b0[8];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ u32 unk_cc;
    /* 0xd0 */ u32 unk_d0;
};

class HudCameraGrid : public UiWidget {
public:
    HudCameraGrid();
    virtual ~HudCameraGrid();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL pickCellByTouch();
    BOOL isOtherDeviceTriggered();
    BOOL isSettled();
    BOOL isOpen();
    BOOL isClosed();
    void setVisible(u32 v);
    void callDraw();
    void callUpdate();
    void resetCellAnims();
    void reset();

    /* 0x0c */ SpriteAnim unk_0c[9];
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4;
};

// Methods that symbols.txt files under HudCameraGridStates (same object layout as HudCameraGrid)
class HudCameraGridStates {
public:
    u32 unk_00[3];
    SpriteAnim unk_0c[9];
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    u8 unk_d4;

    void updateClosing();
    void enterClosing();
    void updateOpen();
    void enterOpen();
    void updateOpening();
    void enterOpening();
    void updateClosed();
    void enterClosed();
    void setPosFromCell();
    void setCellFromPos();
    void applySelection();
    BOOL moveByDpad();
};

class HudCameraButton : public UiWidget {
public:
    SpriteAnim unk_0c;
    s32 unk_20;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    HudCameraGrid unk_28;

    HudCameraButton();
    virtual ~HudCameraButton();
    virtual void draw();
    virtual void vfunc_0c();

    void updateHiding();
    void enterHiding();
    void updateGridClosing();
    void enterGridClosing();
    void updateGridOpen();
    void enterGridOpen();
    void updateGridOpening();
    void enterGridOpening();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    void updateInputMode();
    BOOL isTogglePressed(s32);
    BOOL canShow();
    BOOL isHidden();
    void disable();
    void enable();
    void callDraw();
    void callUpdate();
    void release();
    void reset();
};

class HudClock : public UiWidget {
public:
    HudClock();
    virtual ~HudClock();
    virtual void draw();
    virtual void vfunc_0c();

    void freeLabels();
    void createColonLabel();
    void createMinuteLabel();
    void createHourLabel();
    void createAmPmLabel();
    void createWeekdayLabel();
    void createDayLabel();
    void createMonthLabel();
    void createLabels();
    u32 canShow();
    void updateHiding();
    void enterHiding();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    BOOL isHidden();
    void hide();
    void show();
    void callDraw();
    void callUpdate();
    void release();
    void reset();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ MsgTextLabel *unk_28;
    /* 0x2c */ MsgTextLabel *unk_2c;
    /* 0x30 */ MsgTextLabel *unk_30;
    /* 0x34 */ MsgTextLabel *unk_34;
    /* 0x38 */ MsgTextLabel *unk_38;
    /* 0x3c */ MsgTextLabel *unk_3c;
    /* 0x40 */ MsgTextLabel *unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u16 unk_60;
    /* 0x62 */ u16 unk_62;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ MsgString3 unk_68;
    /* 0x80 */ MsgString3 unk_80;
    /* 0x98 */ MsgString3 unk_98;
    /* 0xb0 */ MsgString3 unk_b0;
};

class Unk_0208c478_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    u8 unk_04[0x14];
};

// Methods that symbols.txt files under HudClockLabels (same object layout as HudClock)
class HudClockLabels {
public:
    void resetSlide();
    void updateSlide();
    void pollDateTime();
    void blinkColon();
    void refreshMinute();
    void refreshHour();
    void refreshAmPm();
    void refreshWeekday();
    void refreshDay();
    void refreshMonth();
    void refreshLabels();

    /* 0x00 */ u8 unk_00[0x28];
    /* 0x28 */ TextLabel *unk_28;
    /* 0x2c */ TextLabel *unk_2c;
    /* 0x30 */ TextLabel *unk_30;
    /* 0x34 */ TextLabel *unk_34;
    /* 0x38 */ TextLabel *unk_38;
    /* 0x3c */ TextLabel *unk_3c;
    /* 0x40 */ TextLabel *unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62;
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ Unk_0208c478_Obj unk_68;
    /* 0x80 */ Unk_0208c478_Obj unk_80;
    /* 0x98 */ Unk_0208c478_Obj unk_98;
    /* 0xb0 */ Unk_0208c478_Obj unk_b0;
};

class HudWallet : public UiWidget {
public:
    HudWallet();
    virtual ~HudWallet();
    virtual void draw();
    virtual void vfunc_0c();

    typedef void (HudWallet::*Fn)();

    void resetSlide();
    void updateSlide();
    void updateBaseY();
    void setRolling(BOOL v);
    void formatValue();
    BOOL rollTowardTarget();
    void syncValue();
    void freeLabel();
    void createLabel();
    void updateHiding();
    void enterHiding();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    void unfreezeValue();
    void freezeValue();
    BOOL isHidden();
    void hide();
    void show();
    void callDraw();
    void callUpdate();
    void release();
    void reset();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ TextLabel *unk_38;
    /* 0x3c */ MsgString25 unk_3c;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
    /* 0x6e */ u8 unk_6e;
};

struct Unk_0208a328_Pa {
    u8 unk_00;
    u8 unk_01;
    u8 pad[0x12];
    u8 unk_14;
    u8 unk_15;
};

class HudController {
public:
    HudController();
    virtual ~HudController();

    typedef void (HudController::*Fn)();

    void enterCountdown();
    void updateClock();
    void enterClock();
    void updateOff();
    void enterOff();
    void draw();
    void update();
    void exit();
    void init();

    /* 0x004 */ s32 unk_04;
    /* 0x008 */ HudClock unk_08;
    /* 0x0d0 */ HudCountdown unk_d0;
    /* 0x1a4 */ HudCameraButton unk_1a4;
    /* 0x2a4 */ HudWallet unk_2a4;
    /* 0x314 */ u8 unk_314;
    /* 0x315 */ u8 unk_315;
    /* 0x316 */ u8 unk_316;
};

// State handlers that symbols.txt files under HudControllerStates (same object layout as HudController)
class HudControllerStates : public HudController {
public:
    void updateInputLayout();
    void enterModeForRoom();
    void updateSharedPanels();
    void updateHidden();
    void enterHidden();
    void updateWallet();
    void enterWallet();
    void updateCameraButton();
    void enterCameraButton();
    void updateCountdown();
};

// Vtable 0x020e0f80, created by the factory HudProc_Create
class HudProc : public GameProc {
public:
    HudProc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~HudProc();
};

extern "C" HudProc *HudProc_Create();

class NameLabelBalloonView {
public:
    void freeLabel();
    void createLabel();

    u32 pad_00[3];
    /* 0x0c */ s32 unk_0c;
    u32 pad_10[0x5c / 4];
    /* 0x6c */ MsgTextLabel *unk_6c;
};

extern HudController gHud;

static inline BOOL Unk_0208a150_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL Unk_0208b9f0_Or(BOOL a, BOOL v) { if ((a | v) != 0) return TRUE; return FALSE; }

namespace Unk_0208a814_NS { extern "C" s32 Hud_GetBells(...); }

typedef void (HudCameraButton::*Unk_020e0f2c_Fn)();

typedef void (HudCameraGridStates::*Unk_0208b728_Fn)();

typedef void (HudCountdown::*Unk_020e0f10_Fn)();

typedef void (HudClock::*Unk_020e0f64_Fn)();

void NameLabelBalloonView::createLabel() {
    if (unk_6c == NULL) {
        BOOL c = unk_0c == 4 ? TRUE : FALSE;
        s32 size = c ? 0x1c8 : (unk_0c << 6) + 0xc0;
        u8 t = c ? 0xe : 0xf;
        unk_6c = MsgTextLabel_CreateVram(size, 0x14, 2);
        MsgTextLabel *o = unk_6c;
        if (o != NULL) {
            o->unk_2c = 4;
            MsgTextLabel *p = unk_6c;
            p->unk_10 = (u32)((MsgString *)((u8 *)this + 0x38))->vfunc_0c();
            unk_6c->unk_50 = 2;
            unk_6c->unk_55 = 1;
            unk_6c->unk_39 = t;
            unk_6c->unk_38 = 0xd;
            unk_6c->requestRedraw();
        }
    }
}

void NameLabelBalloonView::freeLabel() {
    if (unk_6c != NULL) {
        MsgTextLabel_Destroy(unk_6c);
        unk_6c = NULL;
    }
}

MsgString3::MsgString3() {
    clear();
}

MsgString3::~MsgString3() {}

u32 MsgString3::vfunc_08() {
    return 3;
}

u8 *MsgString3::vfunc_0c() {
    return unk_12;
}

HudClock::HudClock()
    : unk_20(0), unk_24(0), unk_28(NULL), unk_2c(NULL), unk_30(NULL), unk_34(NULL), unk_38(NULL), unk_3c(NULL),
      unk_40(NULL), unk_44(0), unk_48(0), unk_49(0), unk_4a(0), unk_4b(0), unk_4c(0), unk_4d(0), unk_4e(0),
      unk_4f(0), unk_50(0), unk_54(0), unk_58(0), unk_5c(-1), unk_64(0) {
    unk_60 = 0;
    unk_62 = 0;
}

HudClock::~HudClock() {
    unk_0c.restart();
    release();
}

void HudClock::draw() {
    if (unk_20 != 0) {
        void *a = unk_0c.getCell();
        if (a != 0) {
            s32 x = unk_0c.getFrameX(-1);
            s32 y = unk_0c.getFrameY(-1);
            s32 bx = getOriginX();
            s32 t = (unk_50 + 0x800) >> 12;
            s32 g = getOriginY();
            s32 by = g + t;
            s32 f = unk_64 == 0 ? 0xf : 9;
            Oam_DrawCell(0, a, bx + x, by + y, f, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudClock::vfunc_0c() {
    static Unk_020e0f64_Fn tbl[4] = {(Unk_020e0f64_Fn)&HudClock::updateHidden, (Unk_020e0f64_Fn)&HudClock::updateAppearing,
                                     (Unk_020e0f64_Fn)&HudClock::updateShown, (Unk_020e0f64_Fn)&HudClock::updateHiding};
    (this->*tbl[unk_20])();
    _ZN14HudClockLabels12pollDateTimeEv(this);
    _ZN14HudClockLabels13refreshLabelsEv(this);
    if (unk_20 != 0) {
        _ZN14HudClockLabels11updateSlideEv(this);
    }
}

void HudClock::reset() {
    unk_4e = 0;
    enterHidden();
}

void HudClock::release() {
    freeLabels();
}

void HudClock::callUpdate() {
    vfunc_0c();
}

void HudClock::callDraw() {
    draw();
}

void HudClock::show() {
    unk_4e = 1;
    BOOL v = TRUE;
    if (gFieldSceneKind != 1) {
        v = FALSE;
    }
    unk_4f = v ? 1 : 0;
}

void HudClock::hide() {
    unk_4e = 0;
}

BOOL HudClock::isHidden() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void HudClock::enterHidden() {
    unk_20 = 0;
}

void HudClock::updateHidden() {
    if (canShow() != 0) {
        unk_24 = unk_24 - 1;
        if (unk_24 <= 0) {
            enterAppearing();
        }
    }
}

void HudClock::enterAppearing() {
    unk_20 = 1;
    _ZN14HudClockLabels10resetSlideEv(this);
    s32 i = unk_4f != 0 ? 0x29 : 4;
    unk_0c.setSeq((SpriteAnimSeq *)((u8 *)data_020d467c + (i << 3)));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
    createLabels();
}

void HudClock::updateAppearing() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        enterShown();
    }
}

void HudClock::enterShown() {
    unk_20 = 2;
}

void HudClock::updateShown() {
    if (canShow() == 0) {
        enterHiding();
    }
}

void HudClock::enterHiding() {
    unk_20 = 3;
    s32 i = unk_4f != 0 ? 0x2a : 5;
    unk_0c.setSeq((SpriteAnimSeq *)((u8 *)data_020d467c + (i << 3)));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudClock::updateHiding() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        freeLabels();
        enterHidden();
    }
}

u32 HudClock::canShow() {
    u32 r = unk_4e;
    if (r != 0) {
        BOOL t = TalkRequest_IsActive();
        BOOL a = PlayerActor_IsInAction(2, 4);
        BOOL b = MenuCtrl_IsMenuOpen();
        BOOL f5 = FALSE;
        if (t != 0 && b == 0) {
            f5 = TRUE;
        }
        BOOL f4 = FALSE;
        if (b == 0 && a == 0) {
            f4 = TRUE;
        }
        BOOL f7 = FALSE;
        if (t != 0 && b != 0) {
            BOOL x = MenuCtrl_IsTransitionActive();
            s32 y = MenuCtrl_GetTransitionProgressOrFull();
            if (x != 0) {
                if (y < 0x1000) {
                    f7 = TRUE;
                }
            } else {
                f7 = TRUE;
            }
        }
        if (f5 || f4 || f7) {
            r = 0;
            if (f5 || f4) {
                unk_24 = 0x1e;
            } else {
                unk_24 = 1;
            }
        }
    } else {
        unk_24 = 10;
    }
    return r;
}

void HudClock::createLabels() {
    createMonthLabel();
    createDayLabel();
    createWeekdayLabel();
    createAmPmLabel();
    createHourLabel();
    createMinuteLabel();
    createColonLabel();
}

void HudClock::createMonthLabel() {
    if (unk_28 == NULL) {
        unk_28 = MsgTextLabel_CreateVram(unk_4f != 0 ? 0x94 : 0x80, 3, 2);
        MsgTextLabel *o = unk_28;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_28->unk_50 = 2;
            unk_28->unk_55 = 1;
            unk_28->unk_39 = 0;
            unk_28->unk_38 = 0xc;
            unk_28->unk_28 = &gFontC;
            unk_28->requestRedraw();
            unk_48 = 1;
        }
    }
}

void HudClock::createDayLabel() {
    if (unk_2c == NULL) {
        unk_2c = MsgTextLabel_CreateVram(unk_4f != 0 ? 0x97 : 0x83, 3, 2);
        MsgTextLabel *o = unk_2c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_2c->unk_50 = 2;
            unk_2c->unk_55 = 1;
            unk_2c->unk_39 = 0;
            unk_2c->unk_38 = 0xc;
            unk_2c->unk_28 = &gFontC;
            unk_2c->requestRedraw();
            unk_49 = 1;
        }
    }
}

void HudClock::createWeekdayLabel() {
    if (unk_30 == NULL) {
        unk_30 = MsgTextLabel_CreateVram(unk_4f != 0 ? 0x9a : 0x86, 2, 2);
        MsgTextLabel *o = unk_30;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_30->unk_50 = 2;
            unk_30->unk_55 = 1;
            unk_30->unk_39 = 0;
            unk_30->unk_38 = 0xa;
            unk_30->unk_28 = &gFontC;
            unk_30->requestRedraw();
            unk_4a = 1;
        }
    }
}

void HudClock::createAmPmLabel() {
    if (unk_34 == NULL) {
        unk_34 = MsgTextLabel_CreateVram(unk_4f != 0 ? 0xd4 : 0x88, 2, 1);
        MsgTextLabel *o = unk_34;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_34->unk_50 = 2;
            unk_34->unk_55 = 1;
            unk_34->unk_39 = 0;
            unk_34->unk_38 = 9;
            unk_34->unk_28 = &gFontD;
            unk_34->requestRedraw();
            unk_4b = 1;
        }
    }
}

void HudClock::createHourLabel() {
    if (unk_38 == NULL) {
        unk_38 = MsgTextLabel_CreateVram(unk_4f != 0 ? 0xf4 : 0xa8, 2, 1);
        MsgTextLabel *o = unk_38;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 9;
            unk_38->unk_28 = &gFontD;
            unk_38->requestRedraw();
            unk_4c = 1;
        }
    }
}

void HudClock::createMinuteLabel() {
    if (unk_3c == NULL) {
        unk_3c = MsgTextLabel_CreateVram(unk_4f != 0 ? 0xf6 : 0xaa, 2, 1);
        MsgTextLabel *o = unk_3c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_3c->unk_50 = 2;
            unk_3c->unk_55 = 1;
            unk_3c->unk_39 = 0;
            unk_3c->unk_38 = 9;
            unk_3c->unk_28 = &gFontD;
            unk_3c->requestRedraw();
            unk_4d = 1;
        }
    }
}

void HudClock::createColonLabel() {
    if (unk_40 == NULL) {
        unk_40 = MsgTextLabel_CreateVram(unk_4f != 0 ? 0xd8 : 0x8c, 1, 2);
        MsgTextLabel *o = unk_40;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_40->unk_10 = (u32)kHudColonString;
            unk_40->unk_50 = 2;
            unk_40->unk_55 = 1;
            unk_40->unk_28 = &gFontC;
            unk_40->alignCenter();
            unk_40->unk_39 = 0;
            unk_40->unk_38 = 9;
            unk_40->requestClear(0);
        }
    }
}

void HudClock::freeLabels() {
    if (unk_28 != NULL) {
        MsgTextLabel_Destroy(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        MsgTextLabel_Destroy(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        MsgTextLabel_Destroy(unk_30);
        unk_30 = NULL;
    }
    if (unk_34 != NULL) {
        MsgTextLabel_Destroy(unk_34);
        unk_34 = NULL;
    }
    if (unk_38 != NULL) {
        MsgTextLabel_Destroy(unk_38);
        unk_38 = NULL;
    }
    if (unk_3c != NULL) {
        MsgTextLabel_Destroy(unk_3c);
        unk_3c = NULL;
    }
    if (unk_40 != NULL) {
        MsgTextLabel_Destroy(unk_40);
        unk_40 = NULL;
    }
}

void HudClockLabels::refreshLabels() {
    refreshMonth();
    refreshDay();
    refreshWeekday();
    refreshAmPm();
    refreshHour();
    refreshMinute();
    blinkColon();
}

void HudClockLabels::refreshMonth() {
    if (unk_28 != 0 && unk_48 != 0) {
        unk_48 = 0;
        String_FormatNumber(&unk_68, unk_61, 2, 0, 0, 1);
        TextLabel *t = unk_28;
        t->unk_10 = unk_68.vfunc_0c();
        unk_28->alignRight();
        unk_28->requestRedraw();
    }
}

void HudClockLabels::refreshDay() {
    if (unk_2c != 0 && unk_49 != 0) {
        unk_49 = 0;
        String_FormatNumber(&unk_80, unk_60, 2, 0, 0, 1);
        TextLabel *t = unk_2c;
        t->unk_10 = unk_80.vfunc_0c();
        unk_2c->requestRedraw();
    }
}

void HudClockLabels::refreshWeekday() {
    if (unk_30 != 0 && unk_4a != 0) {
        unk_4a = 0;
        s32 i = *(volatile s32 *)&unk_64;
        const u16 *e = &kHudWeekdayGlyphs[i];
        unk_30->unk_10 = (u32)e;
        unk_30->alignCenter();
        unk_30->requestRedraw();
    }
}

void HudClockLabels::refreshAmPm() {
    if (unk_34 != 0 && unk_4b != 0) {
        unk_4b = 0;
        s32 i = 0;
        if (unk_63 >= 12) i = 1;
        unk_34->unk_10 = (u32)kHudAmPmStrings[i];
        unk_34->alignCenter();
        unk_34->requestRedraw();
    }
}

void HudClockLabels::refreshHour() {
    if (unk_38 != 0 && unk_4c != 0) {
        unk_4c = 0;
        u8 c = unk_63;
        if (c >= 12) c = (u8)(c - 12);
        if (c == 0) c = 12;
        String_FormatNumber(&unk_98, c, 2, 0, 0, 1);
        TextLabel *t = unk_38;
        t->unk_10 = unk_98.vfunc_0c();
        unk_38->alignRight();
        unk_38->requestRedraw();
    }
}

void HudClockLabels::refreshMinute() {
    if (unk_3c != 0 && unk_4d != 0) {
        unk_4d = 0;
        String_FormatNumber(&unk_b0, unk_62, 2, 6, 0, 1);
        TextLabel *t = unk_3c;
        t->unk_10 = unk_b0.vfunc_0c();
        unk_3c->alignCenter();
        unk_3c->requestRedraw();
    }
}

void HudClockLabels::blinkColon() {
    if (unk_40 != 0) {
        unk_44 = unk_44 - 1;
        s32 t = unk_44;
        if (t <= 0) {
            unk_44 = 0x14;
            unk_40->requestRedraw();
        } else if (t == 8) {
            unk_40->requestClear(0);
        }
    }
}

void HudClockLabels::pollDateTime() {
    u16 v[2];
    Clock_GetDayMonth(v);
    Clock_GetMinuteHour(&v[1]);
    s32 t = Clock_GetWeekday();
    if (v[0] != *(u16 *)&unk_60) {
        if (((u8 *)v)[1] != unk_61) unk_48 = 1;
        if (((u8 *)v)[0] != unk_60) unk_49 = 1;
        *(u16 *)&unk_60 = v[0];
    }
    if (v[1] != *(u16 *)&unk_62) {
        if (((u8 *)v)[3] != unk_63) {
            unk_4c = 1;
            unk_4b = 1;
        }
        if (((u8 *)v)[2] != unk_62) unk_4d = 1;
        *(u16 *)&unk_62 = v[1];
    }
    if (t != unk_64) {
        unk_4a = 1;
        unk_64 = t;
    }
}

void HudClockLabels::updateSlide() {
    s32 a = ChatBalloon_IsOwnBusy();
    s32 b = _ZN8HudClock7canShowEv(this);
    s32 t;
    if (a != 0 && b != 0) t = -0x14000; else t = 0;
    unk_58 = unk_58 + 0xa00;
    s32 v = unk_58;
    if (v < 0x2300) v = 0x2300; else if (v > 0x5000) v = 0x5000;
    unk_58 = v;
    if (t != unk_54) {
        s32 c = unk_5c;
        if (c < 0 || b == 0 || (unk_5c = c + 1, unk_5c > 10)) {
            unk_54 = t;
            unk_5c = 0;
        }
    } else {
        unk_5c = 0;
    }
    func_020e7870(&unk_50, unk_54, 0x600, unk_58, 0x2300);
}

void HudClockLabels::resetSlide() {
    unk_50 = 0;
    unk_54 = 0;
    unk_5c = -1;
    unk_58 = 0;
}

HudCountdown::HudCountdown() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0) {
    unk_94 = 0;
    unk_95 = 0;
    unk_96 = 0;
    unk_97 = 0;
    unk_98 = 0;
    unk_99 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_b4 = 0;
    unk_b8 = 0;
    unk_bc = 0;
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = -1;
    unk_cc = 0;
    unk_d0 = 0;
}

HudCountdown::~HudCountdown() {
    unk_0c.restart();
    release();
}

void HudCountdown::draw() {
    if (unk_20 != 0) {
        void *p = unk_0c.getCell();
        if (p != 0) {
            s32 a = unk_0c.getFrameX(-1);
            s32 b = unk_0c.getFrameY(-1);
            s32 c = getOriginX();
            s32 d = (unk_bc + 0x800) >> 12;
            s32 e = getOriginY();
            e += d;
            Oam_DrawCell(0, p, c + a, e + b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudCountdown::vfunc_0c() {
    _ZN18HudCountdownLabels15updateRemainingEv(this);
    static Unk_020e0f10_Fn tbl[4] = {(Unk_020e0f10_Fn)&HudCountdown::updateHidden, (Unk_020e0f10_Fn)&HudCountdown::updateAppearing,
                                     (Unk_020e0f10_Fn)&HudCountdown::updateShown, (Unk_020e0f10_Fn)&HudCountdown::updateHiding};
    (this->*tbl[unk_20])();
    _ZN18HudCountdownLabels13refreshLabelsEv(this);
    if (unk_20 != 0) _ZN18HudCountdownLabels11updateSlideEv(this);
}

void HudCountdown::reset() {
    unk_98 = 0;
    enterHidden();
}

void HudCountdown::release() {
    _ZN18HudCountdownLabels10freeLabelsEv(this);
}

void HudCountdown::callUpdate() {
    vfunc_0c();
}

void HudCountdown::callDraw() {
    draw();
}

BOOL HudCountdown::isStopped() {
    if (unk_a4 == 0) return TRUE;
    return FALSE;
}

void HudCountdown::start(s32 a, s32 b) {
    unk_a4 = a;
    unk_b8 = 0;
    if (a != 0) {
        Clock_GetRtcDateTime(&unk_a8);
        DateTime_AddSeconds(&unk_a8, kHudCountdownSeconds[a]);
        unk_9c = 0;
        unk_a0 = 0;
        unk_94 = 1;
        unk_95 = 1;
        unk_96 = 1;
        unk_97 = 1;
    }
    if (b == 0) {
        FieldInfoBalloon_ShowTimerMsg(a == 0 ? 2 : 1);
    }
}

void HudCountdown::incCountA() {
    if (unk_a4 != 0) {
        unk_9c = unk_9c + 1;
        unk_96 = 1;
    }
}

void HudCountdown::incCountB() {
    if (unk_a4 != 0) {
        unk_a0 = unk_a0 + 1;
        unk_97 = 1;
    }
}

void HudCountdown::show() {
    unk_98 = 1;
    BOOL t = TRUE;
    if (gFieldSceneKind != 1) t = FALSE;
    unk_99 = (t != 0) ? 1 : 0;
}

void HudCountdown::hide() {
    unk_98 = 0;
}

BOOL HudCountdown::isHidden() {
    if (unk_20 == 0) return TRUE;
    return FALSE;
}

BOOL HudCountdown::isFinished() {
    if (isStopped() != 0 && unk_b8 <= 0) return TRUE;
    return FALSE;
}

void HudCountdown::enterHidden() {
    unk_20 = 0;
}

void HudCountdown::updateHidden() {
    if (canShow() != 0) enterAppearing();
}

void HudCountdown::enterAppearing() {
    unk_20 = 1;
    _ZN18HudCountdownLabels10resetSlideEv(this);
    s32 i;
    if (unk_99 != 0) i = 0x2b; else i = 0x26;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d467c + i * 8));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
    _ZN18HudCountdownLabels12createLabelsEv(this);
}

void HudCountdown::updateAppearing() {
    unk_0c.update();
    if (unk_0c.isFinished() != 0) enterShown();
}

void HudCountdown::enterShown() {
    unk_20 = 2;
}

void HudCountdown::updateShown() {
    if (canShow() == 0) enterHiding();
}

void HudCountdown::enterHiding() {
    unk_20 = 3;
    s32 i;
    if (unk_99 != 0) i = 0x2c; else i = 0x27;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d467c + i * 8));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudCountdown::updateHiding() {
    unk_0c.update();
    if (unk_0c.isFinished() != 0) {
        _ZN18HudCountdownLabels10freeLabelsEv(this);
        enterHidden();
    }
}

u8 HudCountdown::canShow() {
    u8 r = unk_98;
    if (r != 0) {
        s32 a = TalkRequest_IsActive();
        s32 b = MenuCtrl_IsMenuOpen();
        BOOL c = FALSE;
        if (a != 0 && b == 0) c = TRUE;
        BOOL d = FALSE;
        if (a != 0 && b != 0) {
            s32 p = MenuCtrl_IsTransitionActive();
            s32 q = MenuCtrl_GetTransitionProgressOrFull();
            if (p != 0) {
                if (q < 0x1000) d = TRUE;
            } else {
                d = TRUE;
            }
        }
        if (c != 0 || d != 0) {
            r = 0;
            if (c != 0) unk_b8 = r;
        }
    } else {
        unk_b8 = 0;
    }
    return r;
}

void HudCountdownLabels::createLabels() {
    createMinutesLabel();
    createSecondsLabel();
    createCountALabel();
    createCountBLabel();
}

void HudCountdownLabels::createMinutesLabel() {
    unk_24 = MsgTextLabel_CreateVram(unk_99 != 0 ? 0x114 : 0x80, 3, 2);
    if (unk_24 != NULL) {
        unk_24->unk_2c = 4;
        unk_24->unk_50 = 2;
        unk_24->unk_55 = 1;
        unk_24->unk_39 = 0;
        unk_24->unk_38 = 0xc;
        unk_24->unk_28 = &gFontC;
        TextLabel *t = unk_24;
        t->unk_10 = (u32)((StrBuf *)unk_34)->data();
        unk_94 = 1;
    }
}

void HudCountdownLabels::createSecondsLabel() {
    unk_28 = MsgTextLabel_CreateVram(unk_99 != 0 ? 0x117 : 0x83, 3, 2);
    if (unk_28 != NULL) {
        unk_28->unk_2c = 4;
        unk_28->unk_50 = 2;
        unk_28->unk_55 = 1;
        unk_28->unk_39 = 0;
        unk_28->unk_38 = 0xc;
        unk_28->unk_28 = &gFontC;
        TextLabel *t = unk_28;
        t->unk_10 = (u32)((StrBuf *)unk_4c)->data();
        unk_95 = 1;
    }
}

void HudCountdownLabels::createCountALabel() {
    unk_2c = MsgTextLabel_CreateVram(unk_99 != 0 ? 0x174 : 0xa8, 2, 1);
    if (unk_2c != NULL) {
        unk_2c->unk_2c = 4;
        unk_2c->unk_50 = 2;
        unk_2c->unk_55 = 1;
        unk_2c->unk_39 = 0;
        unk_2c->unk_38 = 5;
        unk_2c->unk_28 = &gFontD;
        TextLabel *t = unk_2c;
        t->unk_10 = (u32)((StrBuf *)unk_64)->data();
        unk_96 = 1;
    }
}

void HudCountdownLabels::createCountBLabel() {
    unk_30 = MsgTextLabel_CreateVram(unk_99 != 0 ? 0x176 : 0xaa, 2, 1);
    if (unk_30 != NULL) {
        unk_30->unk_2c = 4;
        unk_30->unk_50 = 2;
        unk_30->unk_55 = 1;
        unk_30->unk_39 = 0;
        unk_30->unk_38 = 5;
        unk_30->unk_28 = &gFontD;
        TextLabel *t = unk_30;
        t->unk_10 = (u32)((StrBuf *)unk_7c)->data();
        unk_97 = 1;
    }
}

void HudCountdownLabels::freeLabels() {
    if (unk_24 != NULL) {
        MsgTextLabel_Destroy(unk_24);
        unk_24 = NULL;
    }
    if (unk_28 != NULL) {
        MsgTextLabel_Destroy(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        MsgTextLabel_Destroy(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        MsgTextLabel_Destroy(unk_30);
        unk_30 = NULL;
    }
}

void HudCountdownLabels::refreshLabels() {
    refreshMinutes();
    refreshSeconds();
    refreshCountA();
    refreshCountB();
}

void HudCountdownLabels::refreshMinutes() {
    if (unk_94 != 0 && unk_24 != NULL) {
        String_FormatNumber(&unk_34, unk_b0[1], 2, 6, 0, 1);
        unk_24->alignRight();
        unk_24->requestRedraw();
        unk_94 = 0;
    }
}

void HudCountdownLabels::refreshSeconds() {
    if (unk_95 != 0 && unk_28 != NULL) {
        String_FormatNumber(&unk_4c, unk_b0[0], 2, 6, 0, 1);
        unk_28->requestRedraw();
        unk_95 = 0;
    }
}

void HudCountdownLabels::refreshCountA() {
    if (unk_96 != 0 && unk_2c != NULL) {
        String_FormatNumber(&unk_64, unk_9c, 2, 6, 0, 1);
        unk_2c->alignCenter();
        unk_2c->requestRedraw();
        unk_96 = 0;
    }
}

void HudCountdownLabels::refreshCountB() {
    if (unk_97 != 0 && unk_30 != NULL) {
        String_FormatNumber(&unk_7c, unk_a0, 2, 6, 0, 1);
        unk_30->alignCenter();
        unk_30->requestRedraw();
        unk_97 = 0;
    }
}

void HudCountdownLabels::updateRemaining() {
    u8 a[8];
    u8 b[8];
    u8 c[8];
    BOOL x;
    BOOL y;
    BOOL t;
    s32 r;
    if (unk_b8 > 0) {
        unk_b8 = unk_b8 - 1;
    }
    if (unk_a4 != 0) {
        MI_CpuCopy8(unk_a8, a, 8);
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        Clock_GetRtcDateTime(b);
        r = DateTime_Compare(b, a, 0x3f);
        if (r == 0) {
            goto yes;
        }
        if (r == 1) {
        yes:
            x = TRUE;
        } else {
            x = FALSE;
        }
        y = x;
        if (x) {
            ((u32 *)a)[0] = 0;
            ((u32 *)a)[1] = 0;
        } else {
            u32 k;
            MI_CpuCopy8(b, c, 8);
            DateTime_Sub(a, c);
            k = x;
            t = DateTime_Compare(unk_b0, a, 1) ? TRUE : FALSE;
            x = (k | t) ? TRUE : FALSE;
            r = DateTime_Compare(unk_b0, a, 2) ? TRUE : FALSE;
            k |= r;
            y = k ? TRUE : FALSE;
        }
        u8 *p95 = &unk_95;
        *p95 = Unk_0208b9f0_Or(unk_95, x);
        u8 *p94 = &unk_94;
        *p94 = Unk_0208b9f0_Or(unk_94, y);
        if (x != 0 || y != 0) {
            u32 b0, b1;
            MI_CpuCopy8(a, unk_b0, 8);
            b0 = a[0];
            b1 = a[1];
            if (b1 == 0) {
                if (b0 == 0) {
                    unk_b8 = 0x258;
                    unk_a4 = 0;
                    if (Scene_GetCurrent() != 0x2e) {
                        Snd_PlaySe(0x65);
                    }
                    FieldInfoBalloon_ShowTimerMsg(3);
                } else if (b0 <= 10) {
                    u64 now = OS_GetTick();
                    u64 d = now - *(u64 *)&unk_cc;
                    u64 q = (d << 6) / 0x82ea;
                    if (q <= 0x44c) {
                        if (Scene_GetCurrent() != 0x2e) {
                            Snd_PlaySe(0x64);
                        }
                    }
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                } else if (b0 >= 0xb) {
                    u64 now = OS_GetTick();
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                }
            }
        }
    }
}

void HudCountdownLabels::updateSlide() {
    BOOL a = ChatBalloon_IsOwnBusy();
    BOOL b = _ZN12HudCountdown7canShowEv(this);
    s32 t;
    s32 c4;
    if (a && b) {
        t = 0xfffec000;
    } else {
        t = 0;
    }
    unk_c4 = unk_c4 + 0xa00;
    c4 = unk_c4;
    if (c4 < 0x2300) {
        c4 = 0x2300;
    } else if (c4 > 0x5000) {
        c4 = 0x5000;
    }
    unk_c4 = c4;
    if (t != unk_c0) {
        if (unk_c8 >= 0 && b) {
            unk_c8 = unk_c8 + 1;
            if (unk_c8 <= 10) {
                goto end;
            }
        }
        unk_c0 = t;
        unk_c8 = 0;
    } else {
        unk_c8 = 0;
    }
end:
    func_020e7870(&unk_bc, unk_c0, 0x600, unk_c4, 0x2300);
}

void HudCountdownLabels::resetSlide() {
    unk_bc = 0;
    unk_c0 = 0;
    unk_c8 = -1;
    unk_c4 = 0;
}

HudCameraGrid::HudCameraGrid() {
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    unk_d4 = 0;
}

HudCameraGrid::~HudCameraGrid() { resetCellAnims(); }

void HudCameraGrid::draw() {
    if (unk_c0 != 0) {
        s32 bx = getOriginX();
        s32 by = getOriginY();
        s32 i = 0;
        s32 nb = -1;
        s32 z = 0;
        for (; i < 9; i++) {
            SpriteAnim *e = &unk_0c[i];
            void *p = e->getCell();
            if (p != NULL) {
                s32 sx = e->getFrameX(nb);
                s32 sy = e->getFrameY(nb);
                s32 pal = (i == unk_d0) ? 6 : 5;
                Oam_DrawCell(z, p, bx + sx, by + sy, pal, nb, 0x1000, 0x1000, z, nb, z, z);
            }
        }
    }
}

void HudCameraGrid::vfunc_0c() {
    static Unk_0208b728_Fn tbl[4] = {(Unk_0208b728_Fn)&HudCameraGridStates::updateClosed, (Unk_0208b728_Fn)&HudCameraGridStates::updateOpening,
                                     (Unk_0208b728_Fn)&HudCameraGridStates::updateOpen, (Unk_0208b728_Fn)&HudCameraGridStates::updateClosing};
    (((HudCameraGridStates *)this)->*tbl[unk_c0])();
}

void HudCameraGrid::reset() {
    unk_d4 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    _ZN19HudCameraGridStates11enterClosedEv(this);
}

void HudCameraGrid::resetCellAnims() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_0c[i].restart();
    }
}

void HudCameraGrid::callUpdate() { vfunc_0c(); }

void HudCameraGrid::callDraw() {
    if (unk_c0 == 2) {
        Input_IsButtonMode();
    }
    draw();
}

void HudCameraGrid::setVisible(u32 v) { unk_d4 = v; }

BOOL HudCameraGrid::isClosed() {
    if (unk_c0 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudCameraGrid::isOpen() {
    if (unk_c0 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudCameraGrid::isSettled() {
    s32 s = unk_c0;
    BOOL two = (s == 2) ? TRUE : FALSE;
    BOOL r = FALSE;
    if (s == 0) {
        return TRUE;
    }
    if (two) {
        r = TRUE;
    }
    return r;
}

BOOL HudCameraGrid::isOtherDeviceTriggered() {
    BOOL r = FALSE;
    if (Input_IsTouchMode()) {
        if (Input_IsAnyKeyTrig()) {
            r = TRUE;
        }
    } else if (Input_IsButtonMode()) {
        if (Input_IsTouchTrig()) {
            r = TRUE;
        }
    }
    return r;
}

BOOL HudCameraGrid::pickCellByTouch() {
    BOOL r = FALSE;
    s32 i = 0;
    for (; i < 9; i++) {
        const u8 *q = &kHudCameraGridTouchPos[i * 2];
        s32 a = q[0] + 0x80;
        s32 b = q[1] + 0x60;
        if (Input_IsTouchTrigInRect(a, a + 0x10, b, b + 0x10)) {
            r = TRUE;
            unk_c4 = i;
            _ZN19HudCameraGridStates14setPosFromCellEv(this);
            break;
        }
    }
    return r;
}

BOOL HudCameraGridStates::moveByDpad() {
    s32 ox = unk_c8;
    s32 oy = unk_cc;
    u32 k = gPad[1];
    if ((k & 0x10) != 0) {
        unk_c8 = unk_c8 + 1;
    } else if ((k & 0x20) != 0) {
        unk_c8 = unk_c8 - 1;
    } else if ((k & 0x40) != 0) {
        unk_cc = unk_cc - 1;
    } else if ((k & 0x80) != 0) {
        unk_cc = unk_cc + 1;
    }
    s32 t = unk_c8;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_c8 = t;
    t = unk_cc;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_cc = t;
    setCellFromPos();
    if (ox != unk_c8 || oy != unk_cc) {
        return TRUE;
    }
    return FALSE;
}

void HudCameraGridStates::applySelection() {
    Camera_SetPresetCell((kHudCameraGridCells + 1)[unk_c4 * 2], kHudCameraGridCells[unk_c4 * 2]);
    s32 p = unk_d0;
    if (unk_c4 != p) {
        s32 a = (kHudCameraGridDirs + 1)[unk_c4 * 2];
        s32 b = (kHudCameraGridDirs + 1)[p * 2];
        s32 snd;
        if (a < b) {
            snd = 0x4d;
        } else if (a > b) {
            snd = 0x4c;
        } else {
            snd = 0x4e;
        }
        Snd_PlaySe(snd);
        unk_d0 = unk_c4;
    }
}

void HudCameraGridStates::setCellFromPos() {
    s32 i = 0;
    while (i < 9) {
        s32 n = i * 2;
        const s8 *e = kHudCameraGridDirs + n;
        if (unk_c8 == kHudCameraGridDirs[n] && unk_cc == e[1]) break;
        i++;
    }
    unk_c4 = i;
}

void HudCameraGridStates::setPosFromCell() {
    unk_c8 = kHudCameraGridDirs[unk_c4 * 2];
    unk_cc = (kHudCameraGridDirs + 1)[unk_c4 * 2];
}

void HudCameraGridStates::enterClosed() {
    unk_c0 = 0;
}

void HudCameraGridStates::updateClosed() {
    if (unk_d4 != 0) {
        enterOpening();
    }
}

void HudCameraGridStates::enterOpening() {
    s32 one = 1;
    unk_c0 = one;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &unk_0c[i];
        o->setSeq((SpriteAnimSeq *)(data_020d467c + (i + 0xe) * 8));
        o->setPlayOnce(one);
        o->restart();
    }
}

void HudCameraGridStates::updateOpening() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &unk_0c[i];
        o->update();
        if (!o->isFinished()) {
            r = z;
        }
    }
    if (r) {
        enterOpen();
    }
}

void HudCameraGridStates::enterOpen() {
    unk_c0 = 2;
}

void HudCameraGridStates::updateOpen() {
    if (unk_d4 == 0) {
        enterClosing();
    } else if (!_ZN13HudCameraGrid22isOtherDeviceTriggeredEv(this)) {
        BOOL f = FALSE;
        if (Input_IsTouchMode()) {
            if (_ZN13HudCameraGrid15pickCellByTouchEv(this)) {
                f = TRUE;
            }
        } else if (Input_IsButtonMode()) {
            if (moveByDpad()) {
                f = TRUE;
            }
        }
        if (f) {
            applySelection();
        }
    }
}

void HudCameraGridStates::enterClosing() {
    unk_c0 = 3;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &unk_0c[i];
        o->setSeq((SpriteAnimSeq *)(data_020d467c + (i + 0x17) * 8));
        o->setPlayOnce(1);
        o->restart();
    }
}

void HudCameraGridStates::updateClosing() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &unk_0c[i];
        o->update();
        if (!o->isFinished()) {
            r = z;
        }
    }
    if (r) {
        enterClosed();
    }
}

HudCameraButton::HudCameraButton() : unk_20(0), unk_24(0), unk_25(0), unk_26(0) {
}

HudCameraButton::~HudCameraButton() {
    release();
}

void HudCameraButton::draw() {
    if (unk_20 != 0) {
        void *v = unk_0c.getCell();
        if (v != 0) {
            s32 x = unk_0c.getFrameX(-1);
            s32 y = unk_0c.getFrameY(-1);
            s32 bx = getOriginX();
            s32 by = getOriginY();
            s32 t = ((u32)(unk_20 - 3) <= 2) ? 6 : 5;
            Oam_DrawCell(0, v, bx + x, by + y, t, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudCameraButton::vfunc_0c() {
    static Unk_020e0f2c_Fn tbl[7] = {
        (Unk_020e0f2c_Fn)&HudCameraButton::updateHidden, (Unk_020e0f2c_Fn)&HudCameraButton::updateAppearing,
        (Unk_020e0f2c_Fn)&HudCameraButton::updateShown, (Unk_020e0f2c_Fn)&HudCameraButton::updateGridOpening,
        (Unk_020e0f2c_Fn)&HudCameraButton::updateGridOpen, (Unk_020e0f2c_Fn)&HudCameraButton::updateGridClosing,
        (Unk_020e0f2c_Fn)&HudCameraButton::updateHiding,
    };
    (this->*tbl[unk_20])();
}

void HudCameraButton::reset() {
    unk_26 = 0;
    unk_24 = 0;
    unk_25 = 0;
    enterHidden();
    unk_28.reset();
}

void HudCameraButton::release() {
    unk_28.resetCellAnims();
    unk_0c.restart();
}

void HudCameraButton::callUpdate() {
    vfunc_0c();
    unk_28.callUpdate();
    updateInputMode();
}

void HudCameraButton::callDraw() {
    draw();
    unk_28.callDraw();
}

void HudCameraButton::enable() {
    unk_26 = 1;
}

void HudCameraButton::disable() {
    unk_26 = 0;
}

BOOL HudCameraButton::isHidden() {
    if (unk_20 == 0 && unk_28.isClosed()) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudCameraButton::canShow() {
    BOOL a;
    if (TalkRequest_IsActive()) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    u32 v = PlayerActor_GetAction(4);
    BOOL b, c;
    if (v - 8 <= 7) b = TRUE; else b = FALSE;
    if (v - 0x24 <= 8) c = TRUE; else c = FALSE;
    BOOL r;
    if (unk_26 != 0 && !a && !b && !c) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL HudCameraButton::isTogglePressed(s32 flag) {
    BOOL r = FALSE;
    BOOL f = r;
    if (unk_24 != 0) {
        if (Input_IsTouchMode()) {
            if (Input_IsAnyKeyTrig()) {
                f = TRUE;
            }
        } else if (Input_IsButtonMode()) {
            if (Input_IsTouchTrig()) {
                f = TRUE;
            }
        }
    }
    if (!f) {
        if (unk_28.isSettled()) {
            u32 k = gPad[1];
            if ((k & 0x400) != 0 || (flag != 0 && (k & 2) != 0)) {
                r = TRUE;
                unk_25 = 1;
            } else {
                BOOL c;
                if (gTouchHeld != 0 && gTouchChanged != 0) {
                    c = TRUE;
                } else {
                    c = FALSE;
                }
                if (c) {
                    s32 a = gTouchPressX;
                    if ((s32)gTouchPressY < 16 && a >= 0xc8 && a < 0xe8) {
                        r = TRUE;
                        unk_25 = 0;
                    }
                }
            }
        }
    }
    return r;
}

void HudCameraButton::updateInputMode() {
    if (unk_24 != 0) {
        if (Input_IsTouchMode()) {
            if (Input_IsAnyKeyTrig()) {
                Input_SetButtonMode();
            }
        } else if (Input_IsButtonMode()) {
            if (Input_IsTouchTrig()) {
                Input_SetTouchMode();
            }
        }
        Input_StoreMode();
    }
}

void HudCameraButton::enterHidden() {
    unk_20 = 0;
}

void HudCameraButton::updateHidden() {
    if (canShow()) {
        enterAppearing();
    }
}

void HudCameraButton::enterAppearing() {
    unk_20 = 1;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d477c));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudCameraButton::updateAppearing() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        enterShown();
    }
}

void HudCameraButton::enterShown() {
    unk_20 = 2;
    unk_25 = 0;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d4784));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
    unk_0c.pause();
}

void HudCameraButton::updateShown() {
    if (TalkRequest_IsCameraViewRunning()) {
        MenuCtrl_ResetForceClose();
        enterGridOpening();
    } else if (!canShow()) {
        enterHiding();
    } else if (isTogglePressed(0)) {
        TalkRequest_AddCameraView();
    }
}

void HudCameraButton::enterGridOpening() {
    unk_20 = 3;
    unk_28.setVisible(1);
    unk_24 = 1;
    if (unk_25 != 0) {
        Input_SetButtonMode();
    } else {
        Input_SetTouchMode();
    }
    Snd_PlaySe(0x4a);
}

void HudCameraButton::updateGridOpening() {
    if (unk_28.isOpen()) {
        enterGridOpen();
    }
}

void HudCameraButton::enterGridOpen() {
    unk_20 = 4;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d478c));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudCameraButton::updateGridOpen() {
    BOOL a = isTogglePressed(1);
    BOOL b = MenuCtrl_IsForceCloseDue();
    if (a || b) {
        enterGridClosing();
    }
}

void HudCameraButton::enterGridClosing() {
    unk_20 = 5;
    unk_28.setVisible(0);
    Snd_PlaySe(0x4b);
}

void HudCameraButton::updateGridClosing() {
    if (unk_28.isClosed()) {
        TalkRequest_FinishCameraView();
        unk_24 = 0;
        enterShown();
    }
}

void HudCameraButton::enterHiding() {
    unk_20 = 6;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d4784));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudCameraButton::updateHiding() {
    unk_0c.update();
    if (unk_0c.isFinished()) {
        enterHidden();
    }
}

HudWallet::HudWallet()
    : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_34(-1), unk_38(NULL) {
    unk_68 = 0;
    unk_6c = 0;
    unk_6d = 0;
    unk_6e = 0;
}

HudWallet::~HudWallet() {
    release();
}

void HudWallet::draw() {
    if (unk_20 != 0) {
        void *h = unk_0c.getCell();
        if (h != 0) {
            s32 a = getOriginX();
            s32 x = a + unk_0c.getFrameX(-1);
            s32 b = (unk_28 + 0x800) >> 12;
            s32 c = getOriginY();
            s32 e = unk_0c.getFrameY(-1);
            s32 y = b;
            y += unk_24 + (c + e);
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudWallet::vfunc_0c() {
    static Fn tbl[4] = {
        (Fn)&HudWallet::updateHidden, (Fn)&HudWallet::updateAppearing,
        (Fn)&HudWallet::updateShown, (Fn)&HudWallet::updateHiding,
    };
    (this->*tbl[unk_20])();
}

void HudWallet::reset() {
    unk_6c = 0;
    syncValue();
    resetSlide();
    enterHidden();
}

void HudWallet::release() {
    setRolling(0);
    unk_0c.restart();
    freeLabel();
}

void HudWallet::callUpdate() {
    vfunc_0c();
    updateSlide();
}

void HudWallet::callDraw() {
    updateBaseY();
    draw();
}

void HudWallet::show() {
    unk_6c = 1;
}

void HudWallet::hide() {
    unk_6c = 0;
}

BOOL HudWallet::isHidden() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void HudWallet::freezeValue() {
    unk_6e = 1;
}

void HudWallet::unfreezeValue() {
    unk_6e = 0;
}

void HudWallet::enterHidden() {
    unk_20 = 0;
}

void HudWallet::updateHidden() {
    if (unk_6c != 0) {
        enterAppearing();
    }
}

void HudWallet::enterAppearing() {
    unk_20 = 1;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d4794));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
    syncValue();
    createLabel();
}

void HudWallet::updateAppearing() {
    unk_0c.update();
    if (unk_0c.isFinished() != 0) {
        enterShown();
    }
}

void HudWallet::enterShown() {
    unk_20 = 2;
}

void HudWallet::updateShown() {
    BOOL r = rollTowardTarget();
    if (unk_6c == 0) {
        enterHiding();
        r = FALSE;
    }
    setRolling(r);
}

void HudWallet::enterHiding() {
    unk_20 = 3;
    unk_0c.setSeq((SpriteAnimSeq *)(data_020d479c));
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
}

void HudWallet::updateHiding() {
    unk_0c.update();
    if (unk_0c.isFinished() != 0) {
        freeLabel();
        enterHidden();
    }
}

void HudWallet::createLabel() {
    if (unk_38 == NULL) {
        unk_38 = MsgTextLabel_CreateVram(0x80, 8, 1);
        if (unk_38 != NULL) {
            unk_38->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 0xc;
            TextLabel *o = unk_38;
            StrBuf *s = &unk_3c;
            o->unk_10 = (u32)s->data();
            unk_38->unk_28 = &gFontD;
            unk_38->alignRight();
            unk_38->requestRedraw();
        }
    }
}

void HudWallet::freeLabel() {
    if (unk_38 != NULL) {
        MsgTextLabel_Destroy(unk_38);
        unk_38 = NULL;
    }
}

void HudWallet::syncValue() {
    unk_68 = Hud_GetBells();
    formatValue();
    unk_6d = 0;
    unk_6e = 0;
}

BOOL HudWallet::rollTowardTarget() {
    BOOL r = FALSE;
    if (unk_6e == 0) {
        s32 v = Unk_0208a814_NS::Hud_GetBells(this);
        if (unk_68 != v) {
            s32 d = v - unk_68;
            if (d < 0) {
                d = -d;
            }
            s32 t = (d / 6 + 0x32) / 10;
            func_020e759c(&unk_68, v, t * 10 + 7);
            formatValue();
            if (unk_38 != NULL) {
                unk_38->alignRight();
                unk_38->requestRedraw();
            }
            r = TRUE;
        }
    }
    return r;
}

void HudWallet::formatValue() {
    String_FormatNumber(&unk_3c, unk_68, 7, 1, 0, 1);
}

void HudWallet::setRolling(BOOL v) {
    if (unk_6d != 0) {
        if (v == 0) {
            func_02003edc();
            Snd_PlaySe(0x2e);
        }
    } else if (v != 0) {
        func_02003eec();
    }
    unk_6d = v;
}

extern "C" s32 Hud_GetBells() {
    s32 c = PlayerData_GetCurrent();
    s32 r = 0;
    if (c != 0) {
        s32 a = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(), 1);
        r = a + MenuCtrl_GetHandBells();
    }
    return r;
}

void HudWallet::updateBaseY() {
    s32 v = MenuCtrl_GetTransitionProgressOrFull();
    s32 a = func_01ffcb0c(0, v);
    s32 b = func_01ffcb0c(0xc0000, 0x1000 - v);
    unk_24 = (a + b) >> 12;
}

void HudWallet::updateSlide() {
    if (MenuCtrl_IsTransitionActive() != 0) {
        s32 r;
        if (ChatBalloon_IsRemoteBusy() != 0) {
            r = 0x28000;
        } else {
            r = 0;
        }
        unk_30 = unk_30 + 0xa00;
        s32 t = unk_30;
        if (t < 0x2300) {
            t = 0x2300;
        } else if (t > 0x5000) {
            t = 0x5000;
        }
        unk_30 = t;
        if (r != unk_2c) {
            if (unk_34 < 0 || (unk_34 = unk_34 + 1, unk_34 > 5)) {
                unk_2c = r;
                unk_34 = 0;
            }
        } else {
            unk_34 = 0;
        }
        func_020e7870(&unk_28, unk_2c, 0x600, unk_30, 0x2300);
    } else {
        resetSlide();
    }
}

void HudWallet::resetSlide() {
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_30 = 0;
}

HudController::HudController() : unk_04(0) {
    unk_314 = 0;
    unk_315 = 0;
    unk_316 = 0;
}

HudController::~HudController() {}

extern "C" void Hud_Init() { gHud.init(); }

extern "C" void Hud_Exit() { gHud.exit(); }

extern "C" void Hud_Update() { gHud.update(); }

extern "C" void Hud_Draw() { gHud.draw(); }

extern "C" void Hud_Hide() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->unk_14 = 1; }

extern "C" void Hud_Show() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->unk_14 = 0; }

extern "C" void Hud_ClearHideB() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->unk_15 = 0; }

extern "C" void *Hud_GetCountdown() { return &gHud.unk_d0; }

extern "C" void *Hud_GetWallet() { return &gHud.unk_2a4; }

void HudController::init() {
    Hud_Show();
    Hud_ClearHideB();
    _ZN19HudControllerStates16enterModeForRoomEv(this);
    _ZN8HudClock5resetEv(&unk_08);
    _ZN12HudCountdown5resetEv(&unk_d0);
    _ZN15HudCameraButton5resetEv(&unk_1a4);
    unk_2a4.reset();
    unk_316 = 0;
}

void HudController::exit() {
    unk_2a4.release();
    _ZN15HudCameraButton7releaseEv(&unk_1a4);
    _ZN12HudCountdown7releaseEv(&unk_d0);
    _ZN8HudClock7releaseEv(&unk_08);
}

void HudController::update() {
    static Fn tbl[6] = {
        (Fn)&HudController::updateOff, (Fn)&HudController::updateClock, (Fn)&HudControllerStates::updateCountdown,
        (Fn)&HudControllerStates::updateCameraButton, (Fn)&HudControllerStates::updateWallet, (Fn)&HudControllerStates::updateHidden,
    };
    (this->*tbl[unk_04])();
    _ZN8HudClock10callUpdateEv(&unk_08);
    _ZN12HudCountdown10callUpdateEv(&unk_d0);
    _ZN15HudCameraButton10callUpdateEv(&unk_1a4);
    unk_2a4.callUpdate();
    _ZN19HudControllerStates17updateInputLayoutEv(this);
}

void HudController::draw() {
    _ZN8HudClock8callDrawEv(&unk_08);
    _ZN12HudCountdown8callDrawEv(&unk_d0);
    _ZN15HudCameraButton8callDrawEv(&unk_1a4);
    unk_2a4.callDraw();
}

void HudController::enterOff() {
    unk_04 = 0;
}

void HudController::updateOff() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN19HudControllerStates11enterHiddenEv(this);
    }
}

void HudController::enterClock() {
    unk_04 = 1;
}

void HudController::updateClock() {
    BOOL a;
    BOOL b;
    if (unk_314 != 0 || unk_315 != 0) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    b = _ZN12HudCountdown10isFinishedEv(&unk_d0) == 0 ? TRUE : FALSE;
    if (a || b) {
        _ZN8HudClock4hideEv(&unk_08);
        if (_ZN8HudClock8isHiddenEv(&unk_08) != 0) {
            if (a) {
                _ZN19HudControllerStates11enterHiddenEv(this);
            } else {
                enterCountdown();
            }
        }
    } else {
        _ZN8HudClock4showEv(&unk_08);
    }
}

void HudController::enterCountdown() {
    unk_04 = 2;
    HudObjGfx_SetCountdownVariant(1);
    HudObjGfx_LoadKind(1, 1);
}

void HudControllerStates::updateCountdown() {
    BOOL r5;
    if (unk_314 != 0 || unk_315 != 0) {
        r5 = TRUE;
    } else {
        r5 = FALSE;
    }
    BOOL r0 = _ZN12HudCountdown10isFinishedEv(&unk_d0);
    if (r5 || r0) {
        _ZN12HudCountdown4hideEv(&unk_d0);
        if (_ZN12HudCountdown8isHiddenEv(&unk_d0)) {
            if (r5) {
                enterHidden();
            } else {
                HudObjGfx_SetCountdownVariant(0);
                HudObjGfx_LoadKind(4, 1);
                _ZN13HudController10enterClockEv(this);
            }
        }
    } else {
        _ZN12HudCountdown4showEv(&unk_d0);
    }
}

void HudControllerStates::enterCameraButton() { unk_04 = 3; }

void HudControllerStates::updateCameraButton() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN15HudCameraButton7disableEv(&unk_1a4);
        if (_ZN15HudCameraButton8isHiddenEv(&unk_1a4)) {
            enterHidden();
        }
    } else {
        _ZN15HudCameraButton6enableEv(&unk_1a4);
    }
    updateSharedPanels();
}

void HudControllerStates::enterWallet() { unk_04 = 4; }

void HudControllerStates::updateWallet() {
    _ZN9HudWallet4showEv(&unk_2a4);
    updateSharedPanels();
}

void HudControllerStates::enterHidden() {
    HudObjGfx_LoadKind(3, 1);
    unk_04 = 5;
}

void HudControllerStates::updateHidden() {
    if (unk_314 != 0 || unk_315 != 0) {
        _ZN9HudWallet4showEv(&unk_2a4);
    } else {
        _ZN9HudWallet4hideEv(&unk_2a4);
        if (_ZN9HudWallet8isHiddenEv(&unk_2a4)) {
            HudObjGfx_LoadKind(4, 1);
            enterModeForRoom();
        }
    }
    updateSharedPanels();
}

void HudControllerStates::updateSharedPanels() {
    if (Hud_GetSceneHudKind() != 0) {
        if (Unk_0208a150_IsOne(gFieldSceneKind)) {
            if (_ZN12HudCountdown10isFinishedEv(&unk_d0)) {
                _ZN12HudCountdown4hideEv(&unk_d0);
                if (_ZN12HudCountdown8isHiddenEv(&unk_d0)) {
                    _ZN8HudClock4showEv(&unk_08);
                }
            } else {
                _ZN8HudClock4hideEv(&unk_08);
                if (_ZN8HudClock8isHiddenEv(&unk_08)) {
                    _ZN12HudCountdown4showEv(&unk_d0);
                }
            }
        }
    }
}

void HudControllerStates::enterModeForRoom() {
    s32 r = Hud_GetSceneHudKind();
    if (r == 1) {
        if (HudObjGfx_GetCountdownVariant()) {
            _ZN13HudController14enterCountdownEv(this);
        } else {
            _ZN13HudController10enterClockEv(this);
        }
    } else if (r == 2) {
        enterCameraButton();
    } else if (r == 3) {
        enterWallet();
    } else {
        _ZN13HudController8enterOffEv(this);
    }
}

void HudControllerStates::updateInputLayout() {
    BOOL r = FALSE;
    if (unk_316 != 0) {
        if (InputMode_IsButtons()) {
            r = TRUE;
        }
    } else {
        if (InputMode_IsTouch()) {
            r = TRUE;
        }
    }
    if (r) {
        unk_316 = unk_316 == 0 ? 1 : 0;
        if (unk_04 == 3) {
            HudObjGfx_LoadCameraButton(unk_316, 1, 1);
        }
    }
}

extern "C" HudProc *HudProc_Create() { return new HudProc(); }

HudProc::HudProc() {}

HudProc::~HudProc() {}

BOOL HudProc::vfunc_00() {
    HudLinkIcon_Reset();
    HudUnkSlideIcon_Reset();
    HudUnkIcon_Reset();
    Hud_Init();
    return TRUE;
}

BOOL HudProc::vfunc_0c() {
    Hud_Exit();
    HudUnkIcon_Exit();
    HudUnkSlideIcon_Exit();
    HudLinkIcon_Exit();
    return TRUE;
}

BOOL HudProc::onExecute() {
    HudLinkIcon_Update();
    HudUnkSlideIcon_Update();
    HudUnkIcon_Update();
    Hud_Update();
    return TRUE;
}

BOOL HudProc::onDraw() {
    HudUnkSlideIcon_Draw();
    HudLinkIcon_Draw();
    Hud_Draw();
    HudUnkIcon_Draw();
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Data

char sHudColonStr[] = ":";
char sHudAmStr[] = "AM";
char sHudPmStr[] = "PM";

const char *const kHudColonString = sHudColonStr;
const char *const kHudAmPmStrings[2] = {sHudAmStr, sHudPmStr};
const s16 kHudCountdownSeconds[6] = {0, 180, 300, 600, 900, 0};
const u16 kHudWeekdayGlyphs[8] = {'g', 'a', 'b', 'c', 'd', 'e', 'f', 0};
const u8 kHudCameraGridTouchPos[18] = {0x5b, 0x3c, 0x49, 0x2b, 0x5b, 0x2b, 0x6c, 0x2b, 0x49,
                              0x3c, 0x6c, 0x3c, 0x49, 0x4c, 0x5b, 0x4c, 0x6c, 0x4c};
const s8 kHudCameraGridDirs[18] = {0, 0, -1, -1, 0, -1, 1, -1, -1, 0, 1, 0, -1, 1, 0, 1, 1, 1};
const u8 kHudCameraGridCells[18] = {1, 1, 0, 0, 1, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2};
// 0x020cf63c: last .rodata object of this file (0x14 bytes, continues the ascending size run); read by the unit at
// 0x0208d154 (0x0208d324)
extern const s32 kNameLabelBalloonKindAnims[5];
const s32 kNameLabelBalloonKindAnims[5] = {10, 11, 12, 13, 0x28};

struct Unk_020e0e74_Rec {
    HudProc *(*unk_00)();
    s16 unk_04;
    s16 unk_06;
};
Unk_020e0e74_Rec sHudProcProfile = {HudProc_Create, 0xca, 0x8e};

HudController gHud;
