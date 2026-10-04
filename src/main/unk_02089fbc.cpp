#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"

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

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};



class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
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
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[3];
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

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ s32 minutesLabel;
    /* 0x28 */ s32 secondsLabel;
    /* 0x2c */ s32 countALabel;
    /* 0x30 */ s32 countBLabel;
    /* 0x34 */ MsgString3 minutesText;
    /* 0x4c */ MsgString3 secondsText;
    /* 0x64 */ MsgString3 countAText;
    /* 0x7c */ MsgString3 countBText;
    /* 0x94 */ u8 minutesDirty;
    /* 0x95 */ u8 secondsDirty;
    /* 0x96 */ u8 countADirty;
    /* 0x97 */ u8 countBDirty;
    /* 0x98 */ u8 showRequested;
    /* 0x99 */ u8 altLayout;
    /* 0x9c */ s32 countA;
    /* 0xa0 */ s32 countB;
    /* 0xa4 */ s32 durationKind;
    /* 0xa8 */ s32 endTime;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 remaining;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 finishTimer;
    /* 0xbc */ s32 slideY;
    /* 0xc0 */ s32 slideTarget;
    /* 0xc4 */ s32 slideSpeed;
    /* 0xc8 */ s32 slideDelay;
    /* 0xcc */ s32 lastTickTime;
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
    /* 0x24 */ TextLabel *minutesLabel;
    /* 0x28 */ TextLabel *secondsLabel;
    /* 0x2c */ TextLabel *countALabel;
    /* 0x30 */ TextLabel *countBLabel;
    /* 0x34 */ u32 minutesText[6];
    /* 0x4c */ u32 secondsText[6];
    /* 0x64 */ u32 countAText[6];
    /* 0x7c */ u32 countBText[6];
    /* 0x94 */ u8 minutesDirty;
    /* 0x95 */ u8 secondsDirty;
    /* 0x96 */ u8 countADirty;
    /* 0x97 */ u8 countBDirty;
    /* 0x98 */ u8 showRequested;
    /* 0x99 */ u8 altLayout;
    /* 0x9a */ u8 unk_9a[2];
    /* 0x9c */ s32 countA;
    /* 0xa0 */ s32 countB;
    /* 0xa4 */ s32 durationKind;
    /* 0xa8 */ u8 endTime[8];
    /* 0xb0 */ u8 remaining[8];
    /* 0xb8 */ s32 finishTimer;
    /* 0xbc */ s32 slideY;
    /* 0xc0 */ s32 slideTarget;
    /* 0xc4 */ s32 slideSpeed;
    /* 0xc8 */ s32 slideDelay;
    /* 0xcc */ u32 lastTickTime;
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

    /* 0x0c */ SpriteAnim cellAnims[9];
    /* 0xc0 */ s32 state;
    /* 0xc4 */ s32 cell;
    /* 0xc8 */ s32 cellX;
    /* 0xcc */ s32 cellY;
    /* 0xd0 */ s32 activeCell;
    /* 0xd4 */ u8 visible;
};

// Methods that symbols.txt files under HudCameraGridStates (same object layout as HudCameraGrid)
class HudCameraGridStates {
public:
    u32 unk_00[3];
    SpriteAnim cellAnims[9];
    s32 state;
    s32 cell;
    s32 cellX;
    s32 cellY;
    s32 activeCell;
    u8 visible;

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
    SpriteAnim anim;
    s32 state;
    u8 gridActive;
    u8 openedByButton;
    u8 enabled;
    HudCameraGrid grid;

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

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ s32 showDelay;
    /* 0x28 */ MsgTextLabel *monthLabel;
    /* 0x2c */ MsgTextLabel *dayLabel;
    /* 0x30 */ MsgTextLabel *weekdayLabel;
    /* 0x34 */ MsgTextLabel *amPmLabel;
    /* 0x38 */ MsgTextLabel *hourLabel;
    /* 0x3c */ MsgTextLabel *minuteLabel;
    /* 0x40 */ MsgTextLabel *colonLabel;
    /* 0x44 */ u32 colonTimer;
    /* 0x48 */ u8 monthDirty;
    /* 0x49 */ u8 dayDirty;
    /* 0x4a */ u8 weekdayDirty;
    /* 0x4b */ u8 amPmDirty;
    /* 0x4c */ u8 hourDirty;
    /* 0x4d */ u8 minuteDirty;
    /* 0x4e */ u8 showRequested;
    /* 0x4f */ u8 altLayout;
    /* 0x50 */ s32 slideY;
    /* 0x54 */ s32 slideTarget;
    /* 0x58 */ s32 slideSpeed;
    /* 0x5c */ s32 slideDelay;
    /* 0x60 */ u16 dayMonth;
    /* 0x62 */ u16 minuteHour;
    /* 0x64 */ s32 weekday;
    /* 0x68 */ MsgString3 monthText;
    /* 0x80 */ MsgString3 dayText;
    /* 0x98 */ MsgString3 hourText;
    /* 0xb0 */ MsgString3 minuteText;
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
    /* 0x28 */ TextLabel *monthLabel;
    /* 0x2c */ TextLabel *dayLabel;
    /* 0x30 */ TextLabel *weekdayLabel;
    /* 0x34 */ TextLabel *amPmLabel;
    /* 0x38 */ TextLabel *hourLabel;
    /* 0x3c */ TextLabel *minuteLabel;
    /* 0x40 */ TextLabel *colonLabel;
    /* 0x44 */ s32 colonTimer;
    /* 0x48 */ u8 monthDirty;
    /* 0x49 */ u8 dayDirty;
    /* 0x4a */ u8 weekdayDirty;
    /* 0x4b */ u8 amPmDirty;
    /* 0x4c */ u8 hourDirty;
    /* 0x4d */ u8 minuteDirty;
    /* 0x50 */ s32 slideY;
    /* 0x54 */ s32 slideTarget;
    /* 0x58 */ s32 slideSpeed;
    /* 0x5c */ s32 slideDelay;
    /* 0x60 */ u8 day;
    /* 0x61 */ u8 month;
    /* 0x62 */ u8 minute;
    /* 0x63 */ u8 hour;
    /* 0x64 */ s32 weekday;
    /* 0x68 */ Unk_0208c478_Obj monthText;
    /* 0x80 */ Unk_0208c478_Obj dayText;
    /* 0x98 */ Unk_0208c478_Obj hourText;
    /* 0xb0 */ Unk_0208c478_Obj minuteText;
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

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ s32 baseY;
    /* 0x28 */ s32 slideY;
    /* 0x2c */ s32 slideTarget;
    /* 0x30 */ s32 slideSpeed;
    /* 0x34 */ s32 slideDelay;
    /* 0x38 */ TextLabel *label;
    /* 0x3c */ MsgString25 text;
    /* 0x68 */ s32 shownBells;
    /* 0x6c */ u8 showRequested;
    /* 0x6d */ u8 rolling;
    /* 0x6e */ u8 valueFrozen;
};

struct Unk_0208a328_Pa {
    u8 unk_00;
    u8 unk_01;
    u8 pad[0x12];
    u8 hideRequest;
    u8 hideRequestB;
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

    /* 0x004 */ s32 state;
    /* 0x008 */ HudClock clock;
    /* 0x0d0 */ HudCountdown countdown;
    /* 0x1a4 */ HudCameraButton cameraButton;
    /* 0x2a4 */ HudWallet wallet;
    /* 0x314 */ u8 hideRequest;
    /* 0x315 */ u8 hideRequestB;
    /* 0x316 */ u8 buttonLayout;
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
    /* 0x0c */ s32 kind;
    u32 pad_10[0x5c / 4];
    /* 0x6c */ MsgTextLabel *textLabel;
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
    if (textLabel == NULL) {
        BOOL c = kind == 4 ? TRUE : FALSE;
        s32 width = c ? 0x1c8 : (kind << 6) + 0xc0;
        u8 t = c ? 0xe : 0xf;
        textLabel = MsgTextLabel_CreateVram(width, 0x14, 2);
        MsgTextLabel *o = textLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            MsgTextLabel *p = textLabel;
            p->textStart = (u32)((MsgString *)((u8 *)this + 0x38))->data();
            textLabel->copyMode = 2;
            textLabel->rowStride1K = 1;
            textLabel->bgColor = t;
            textLabel->fgColor = 0xd;
            textLabel->requestRedraw();
        }
    }
}

void NameLabelBalloonView::freeLabel() {
    if (textLabel != NULL) {
        MsgTextLabel_Destroy(textLabel);
        textLabel = NULL;
    }
}

MsgString3::MsgString3() {
    clear();
}

MsgString3::~MsgString3() {}

u32 MsgString3::capacity() {
    return 3;
}

u8 *MsgString3::data() {
    return text;
}

HudClock::HudClock()
    : state(0), showDelay(0), monthLabel(NULL), dayLabel(NULL), weekdayLabel(NULL), amPmLabel(NULL), hourLabel(NULL), minuteLabel(NULL),
      colonLabel(NULL), colonTimer(0), monthDirty(0), dayDirty(0), weekdayDirty(0), amPmDirty(0), hourDirty(0), minuteDirty(0), showRequested(0),
      altLayout(0), slideY(0), slideTarget(0), slideSpeed(0), slideDelay(-1), weekday(0) {
    dayMonth = 0;
    minuteHour = 0;
}

HudClock::~HudClock() {
    anim.restart();
    release();
}

void HudClock::draw() {
    if (state != 0) {
        void *a = anim.getCell();
        if (a != 0) {
            s32 x = anim.getFrameX(-1);
            s32 y = anim.getFrameY(-1);
            s32 bx = getOriginX();
            s32 t = (slideY + 0x800) >> 12;
            s32 g = getOriginY();
            s32 by = g + t;
            s32 f = weekday == 0 ? 0xf : 9;
            Oam_DrawCell(0, a, bx + x, by + y, f, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudClock::vfunc_0c() {
    static Unk_020e0f64_Fn tbl[4] = {(Unk_020e0f64_Fn)&HudClock::updateHidden, (Unk_020e0f64_Fn)&HudClock::updateAppearing,
                                     (Unk_020e0f64_Fn)&HudClock::updateShown, (Unk_020e0f64_Fn)&HudClock::updateHiding};
    (this->*tbl[state])();
    _ZN14HudClockLabels12pollDateTimeEv(this);
    _ZN14HudClockLabels13refreshLabelsEv(this);
    if (state != 0) {
        _ZN14HudClockLabels11updateSlideEv(this);
    }
}

void HudClock::reset() {
    showRequested = 0;
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
    showRequested = 1;
    BOOL v = TRUE;
    if (gFieldSceneKind != 1) {
        v = FALSE;
    }
    altLayout = v ? 1 : 0;
}

void HudClock::hide() {
    showRequested = 0;
}

BOOL HudClock::isHidden() {
    if (state == 0) {
        return TRUE;
    }
    return FALSE;
}

void HudClock::enterHidden() {
    state = 0;
}

void HudClock::updateHidden() {
    if (canShow() != 0) {
        showDelay = showDelay - 1;
        if (showDelay <= 0) {
            enterAppearing();
        }
    }
}

void HudClock::enterAppearing() {
    state = 1;
    _ZN14HudClockLabels10resetSlideEv(this);
    s32 i = altLayout != 0 ? 0x29 : 4;
    anim.setSeq((SpriteAnimSeq *)((u8 *)data_020d467c + (i << 3)));
    anim.setPlayOnce(1);
    anim.restart();
    createLabels();
}

void HudClock::updateAppearing() {
    anim.update();
    if (anim.isFinished()) {
        enterShown();
    }
}

void HudClock::enterShown() {
    state = 2;
}

void HudClock::updateShown() {
    if (canShow() == 0) {
        enterHiding();
    }
}

void HudClock::enterHiding() {
    state = 3;
    s32 i = altLayout != 0 ? 0x2a : 5;
    anim.setSeq((SpriteAnimSeq *)((u8 *)data_020d467c + (i << 3)));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudClock::updateHiding() {
    anim.update();
    if (anim.isFinished()) {
        freeLabels();
        enterHidden();
    }
}

u32 HudClock::canShow() {
    u32 r = showRequested;
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
                showDelay = 0x1e;
            } else {
                showDelay = 1;
            }
        }
    } else {
        showDelay = 10;
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
    if (monthLabel == NULL) {
        monthLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x94 : 0x80, 3, 2);
        MsgTextLabel *o = monthLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            monthLabel->copyMode = 2;
            monthLabel->rowStride1K = 1;
            monthLabel->bgColor = 0;
            monthLabel->fgColor = 0xc;
            monthLabel->font = &gFontC;
            monthLabel->requestRedraw();
            monthDirty = 1;
        }
    }
}

void HudClock::createDayLabel() {
    if (dayLabel == NULL) {
        dayLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x97 : 0x83, 3, 2);
        MsgTextLabel *o = dayLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            dayLabel->copyMode = 2;
            dayLabel->rowStride1K = 1;
            dayLabel->bgColor = 0;
            dayLabel->fgColor = 0xc;
            dayLabel->font = &gFontC;
            dayLabel->requestRedraw();
            dayDirty = 1;
        }
    }
}

void HudClock::createWeekdayLabel() {
    if (weekdayLabel == NULL) {
        weekdayLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x9a : 0x86, 2, 2);
        MsgTextLabel *o = weekdayLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            weekdayLabel->copyMode = 2;
            weekdayLabel->rowStride1K = 1;
            weekdayLabel->bgColor = 0;
            weekdayLabel->fgColor = 0xa;
            weekdayLabel->font = &gFontC;
            weekdayLabel->requestRedraw();
            weekdayDirty = 1;
        }
    }
}

void HudClock::createAmPmLabel() {
    if (amPmLabel == NULL) {
        amPmLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0xd4 : 0x88, 2, 1);
        MsgTextLabel *o = amPmLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            amPmLabel->copyMode = 2;
            amPmLabel->rowStride1K = 1;
            amPmLabel->bgColor = 0;
            amPmLabel->fgColor = 9;
            amPmLabel->font = &gFontD;
            amPmLabel->requestRedraw();
            amPmDirty = 1;
        }
    }
}

void HudClock::createHourLabel() {
    if (hourLabel == NULL) {
        hourLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0xf4 : 0xa8, 2, 1);
        MsgTextLabel *o = hourLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            hourLabel->copyMode = 2;
            hourLabel->rowStride1K = 1;
            hourLabel->bgColor = 0;
            hourLabel->fgColor = 9;
            hourLabel->font = &gFontD;
            hourLabel->requestRedraw();
            hourDirty = 1;
        }
    }
}

void HudClock::createMinuteLabel() {
    if (minuteLabel == NULL) {
        minuteLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0xf6 : 0xaa, 2, 1);
        MsgTextLabel *o = minuteLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            minuteLabel->copyMode = 2;
            minuteLabel->rowStride1K = 1;
            minuteLabel->bgColor = 0;
            minuteLabel->fgColor = 9;
            minuteLabel->font = &gFontD;
            minuteLabel->requestRedraw();
            minuteDirty = 1;
        }
    }
}

void HudClock::createColonLabel() {
    if (colonLabel == NULL) {
        colonLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0xd8 : 0x8c, 1, 2);
        MsgTextLabel *o = colonLabel;
        if (o != NULL) {
            o->vramLoader = 4;
            colonLabel->textStart = (u32)kHudColonString;
            colonLabel->copyMode = 2;
            colonLabel->rowStride1K = 1;
            colonLabel->font = &gFontC;
            colonLabel->alignCenter();
            colonLabel->bgColor = 0;
            colonLabel->fgColor = 9;
            colonLabel->requestClear(0);
        }
    }
}

void HudClock::freeLabels() {
    if (monthLabel != NULL) {
        MsgTextLabel_Destroy(monthLabel);
        monthLabel = NULL;
    }
    if (dayLabel != NULL) {
        MsgTextLabel_Destroy(dayLabel);
        dayLabel = NULL;
    }
    if (weekdayLabel != NULL) {
        MsgTextLabel_Destroy(weekdayLabel);
        weekdayLabel = NULL;
    }
    if (amPmLabel != NULL) {
        MsgTextLabel_Destroy(amPmLabel);
        amPmLabel = NULL;
    }
    if (hourLabel != NULL) {
        MsgTextLabel_Destroy(hourLabel);
        hourLabel = NULL;
    }
    if (minuteLabel != NULL) {
        MsgTextLabel_Destroy(minuteLabel);
        minuteLabel = NULL;
    }
    if (colonLabel != NULL) {
        MsgTextLabel_Destroy(colonLabel);
        colonLabel = NULL;
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
    if (monthLabel != 0 && monthDirty != 0) {
        monthDirty = 0;
        String_FormatNumber(&monthText, month, 2, 0, 0, 1);
        TextLabel *t = monthLabel;
        t->textStart = monthText.vfunc_0c();
        monthLabel->alignRight();
        monthLabel->requestRedraw();
    }
}

void HudClockLabels::refreshDay() {
    if (dayLabel != 0 && dayDirty != 0) {
        dayDirty = 0;
        String_FormatNumber(&dayText, day, 2, 0, 0, 1);
        TextLabel *t = dayLabel;
        t->textStart = dayText.vfunc_0c();
        dayLabel->requestRedraw();
    }
}

void HudClockLabels::refreshWeekday() {
    if (weekdayLabel != 0 && weekdayDirty != 0) {
        weekdayDirty = 0;
        s32 i = *(volatile s32 *)&weekday;
        const u16 *e = &kHudWeekdayGlyphs[i];
        weekdayLabel->textStart = (u32)e;
        weekdayLabel->alignCenter();
        weekdayLabel->requestRedraw();
    }
}

void HudClockLabels::refreshAmPm() {
    if (amPmLabel != 0 && amPmDirty != 0) {
        amPmDirty = 0;
        s32 i = 0;
        if (hour >= 12) i = 1;
        amPmLabel->textStart = (u32)kHudAmPmStrings[i];
        amPmLabel->alignCenter();
        amPmLabel->requestRedraw();
    }
}

void HudClockLabels::refreshHour() {
    if (hourLabel != 0 && hourDirty != 0) {
        hourDirty = 0;
        u8 c = hour;
        if (c >= 12) c = (u8)(c - 12);
        if (c == 0) c = 12;
        String_FormatNumber(&hourText, c, 2, 0, 0, 1);
        TextLabel *t = hourLabel;
        t->textStart = hourText.vfunc_0c();
        hourLabel->alignRight();
        hourLabel->requestRedraw();
    }
}

void HudClockLabels::refreshMinute() {
    if (minuteLabel != 0 && minuteDirty != 0) {
        minuteDirty = 0;
        String_FormatNumber(&minuteText, minute, 2, 6, 0, 1);
        TextLabel *t = minuteLabel;
        t->textStart = minuteText.vfunc_0c();
        minuteLabel->alignCenter();
        minuteLabel->requestRedraw();
    }
}

void HudClockLabels::blinkColon() {
    if (colonLabel != 0) {
        colonTimer = colonTimer - 1;
        s32 t = colonTimer;
        if (t <= 0) {
            colonTimer = 0x14;
            colonLabel->requestRedraw();
        } else if (t == 8) {
            colonLabel->requestClear(0);
        }
    }
}

void HudClockLabels::pollDateTime() {
    u16 v[2];
    Clock_GetDayMonth(v);
    Clock_GetMinuteHour(&v[1]);
    s32 t = Clock_GetWeekday();
    if (v[0] != *(u16 *)&day) {
        if (((u8 *)v)[1] != month) monthDirty = 1;
        if (((u8 *)v)[0] != day) dayDirty = 1;
        *(u16 *)&day = v[0];
    }
    if (v[1] != *(u16 *)&minute) {
        if (((u8 *)v)[3] != hour) {
            hourDirty = 1;
            amPmDirty = 1;
        }
        if (((u8 *)v)[2] != minute) minuteDirty = 1;
        *(u16 *)&minute = v[1];
    }
    if (t != weekday) {
        weekdayDirty = 1;
        weekday = t;
    }
}

void HudClockLabels::updateSlide() {
    s32 a = ChatBalloon_IsOwnBusy();
    s32 b = _ZN8HudClock7canShowEv(this);
    s32 t;
    if (a != 0 && b != 0) t = -0x14000; else t = 0;
    slideSpeed = slideSpeed + 0xa00;
    s32 v = slideSpeed;
    if (v < 0x2300) v = 0x2300; else if (v > 0x5000) v = 0x5000;
    slideSpeed = v;
    if (t != slideTarget) {
        s32 c = slideDelay;
        if (c < 0 || b == 0 || (slideDelay = c + 1, slideDelay > 10)) {
            slideTarget = t;
            slideDelay = 0;
        }
    } else {
        slideDelay = 0;
    }
    func_020e7870(&slideY, slideTarget, 0x600, slideSpeed, 0x2300);
}

void HudClockLabels::resetSlide() {
    slideY = 0;
    slideTarget = 0;
    slideDelay = -1;
    slideSpeed = 0;
}

HudCountdown::HudCountdown() : state(0), minutesLabel(0), secondsLabel(0), countALabel(0), countBLabel(0) {
    minutesDirty = 0;
    secondsDirty = 0;
    countADirty = 0;
    countBDirty = 0;
    showRequested = 0;
    altLayout = 0;
    countA = 0;
    countB = 0;
    durationKind = 0;
    endTime = 0;
    unk_ac = 0;
    remaining = 0;
    unk_b4 = 0;
    finishTimer = 0;
    slideY = 0;
    slideTarget = 0;
    slideSpeed = 0;
    slideDelay = -1;
    lastTickTime = 0;
    unk_d0 = 0;
}

HudCountdown::~HudCountdown() {
    anim.restart();
    release();
}

void HudCountdown::draw() {
    if (state != 0) {
        void *p = anim.getCell();
        if (p != 0) {
            s32 a = anim.getFrameX(-1);
            s32 b = anim.getFrameY(-1);
            s32 c = getOriginX();
            s32 d = (slideY + 0x800) >> 12;
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
    (this->*tbl[state])();
    _ZN18HudCountdownLabels13refreshLabelsEv(this);
    if (state != 0) _ZN18HudCountdownLabels11updateSlideEv(this);
}

void HudCountdown::reset() {
    showRequested = 0;
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
    if (durationKind == 0) return TRUE;
    return FALSE;
}

void HudCountdown::start(s32 a, s32 b) {
    durationKind = a;
    finishTimer = 0;
    if (a != 0) {
        Clock_GetRtcDateTime(&endTime);
        DateTime_AddSeconds(&endTime, kHudCountdownSeconds[a]);
        countA = 0;
        countB = 0;
        minutesDirty = 1;
        secondsDirty = 1;
        countADirty = 1;
        countBDirty = 1;
    }
    if (b == 0) {
        FieldInfoBalloon_ShowTimerMsg(a == 0 ? 2 : 1);
    }
}

void HudCountdown::incCountA() {
    if (durationKind != 0) {
        countA = countA + 1;
        countADirty = 1;
    }
}

void HudCountdown::incCountB() {
    if (durationKind != 0) {
        countB = countB + 1;
        countBDirty = 1;
    }
}

void HudCountdown::show() {
    showRequested = 1;
    BOOL t = TRUE;
    if (gFieldSceneKind != 1) t = FALSE;
    altLayout = (t != 0) ? 1 : 0;
}

void HudCountdown::hide() {
    showRequested = 0;
}

BOOL HudCountdown::isHidden() {
    if (state == 0) return TRUE;
    return FALSE;
}

BOOL HudCountdown::isFinished() {
    if (isStopped() != 0 && finishTimer <= 0) return TRUE;
    return FALSE;
}

void HudCountdown::enterHidden() {
    state = 0;
}

void HudCountdown::updateHidden() {
    if (canShow() != 0) enterAppearing();
}

void HudCountdown::enterAppearing() {
    state = 1;
    _ZN18HudCountdownLabels10resetSlideEv(this);
    s32 i;
    if (altLayout != 0) i = 0x2b; else i = 0x26;
    anim.setSeq((SpriteAnimSeq *)(data_020d467c + i * 8));
    anim.setPlayOnce(1);
    anim.restart();
    _ZN18HudCountdownLabels12createLabelsEv(this);
}

void HudCountdown::updateAppearing() {
    anim.update();
    if (anim.isFinished() != 0) enterShown();
}

void HudCountdown::enterShown() {
    state = 2;
}

void HudCountdown::updateShown() {
    if (canShow() == 0) enterHiding();
}

void HudCountdown::enterHiding() {
    state = 3;
    s32 i;
    if (altLayout != 0) i = 0x2c; else i = 0x27;
    anim.setSeq((SpriteAnimSeq *)(data_020d467c + i * 8));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudCountdown::updateHiding() {
    anim.update();
    if (anim.isFinished() != 0) {
        _ZN18HudCountdownLabels10freeLabelsEv(this);
        enterHidden();
    }
}

u8 HudCountdown::canShow() {
    u8 r = showRequested;
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
            if (c != 0) finishTimer = r;
        }
    } else {
        finishTimer = 0;
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
    minutesLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x114 : 0x80, 3, 2);
    if (minutesLabel != NULL) {
        minutesLabel->vramLoader = 4;
        minutesLabel->copyMode = 2;
        minutesLabel->rowStride1K = 1;
        minutesLabel->bgColor = 0;
        minutesLabel->fgColor = 0xc;
        minutesLabel->font = &gFontC;
        TextLabel *t = minutesLabel;
        t->textStart = (u32)((StrBuf *)minutesText)->data();
        minutesDirty = 1;
    }
}

void HudCountdownLabels::createSecondsLabel() {
    secondsLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x117 : 0x83, 3, 2);
    if (secondsLabel != NULL) {
        secondsLabel->vramLoader = 4;
        secondsLabel->copyMode = 2;
        secondsLabel->rowStride1K = 1;
        secondsLabel->bgColor = 0;
        secondsLabel->fgColor = 0xc;
        secondsLabel->font = &gFontC;
        TextLabel *t = secondsLabel;
        t->textStart = (u32)((StrBuf *)secondsText)->data();
        secondsDirty = 1;
    }
}

void HudCountdownLabels::createCountALabel() {
    countALabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x174 : 0xa8, 2, 1);
    if (countALabel != NULL) {
        countALabel->vramLoader = 4;
        countALabel->copyMode = 2;
        countALabel->rowStride1K = 1;
        countALabel->bgColor = 0;
        countALabel->fgColor = 5;
        countALabel->font = &gFontD;
        TextLabel *t = countALabel;
        t->textStart = (u32)((StrBuf *)countAText)->data();
        countADirty = 1;
    }
}

void HudCountdownLabels::createCountBLabel() {
    countBLabel = MsgTextLabel_CreateVram(altLayout != 0 ? 0x176 : 0xaa, 2, 1);
    if (countBLabel != NULL) {
        countBLabel->vramLoader = 4;
        countBLabel->copyMode = 2;
        countBLabel->rowStride1K = 1;
        countBLabel->bgColor = 0;
        countBLabel->fgColor = 5;
        countBLabel->font = &gFontD;
        TextLabel *t = countBLabel;
        t->textStart = (u32)((StrBuf *)countBText)->data();
        countBDirty = 1;
    }
}

void HudCountdownLabels::freeLabels() {
    if (minutesLabel != NULL) {
        MsgTextLabel_Destroy(minutesLabel);
        minutesLabel = NULL;
    }
    if (secondsLabel != NULL) {
        MsgTextLabel_Destroy(secondsLabel);
        secondsLabel = NULL;
    }
    if (countALabel != NULL) {
        MsgTextLabel_Destroy(countALabel);
        countALabel = NULL;
    }
    if (countBLabel != NULL) {
        MsgTextLabel_Destroy(countBLabel);
        countBLabel = NULL;
    }
}

void HudCountdownLabels::refreshLabels() {
    refreshMinutes();
    refreshSeconds();
    refreshCountA();
    refreshCountB();
}

void HudCountdownLabels::refreshMinutes() {
    if (minutesDirty != 0 && minutesLabel != NULL) {
        String_FormatNumber(&minutesText, remaining[1], 2, 6, 0, 1);
        minutesLabel->alignRight();
        minutesLabel->requestRedraw();
        minutesDirty = 0;
    }
}

void HudCountdownLabels::refreshSeconds() {
    if (secondsDirty != 0 && secondsLabel != NULL) {
        String_FormatNumber(&secondsText, remaining[0], 2, 6, 0, 1);
        secondsLabel->requestRedraw();
        secondsDirty = 0;
    }
}

void HudCountdownLabels::refreshCountA() {
    if (countADirty != 0 && countALabel != NULL) {
        String_FormatNumber(&countAText, countA, 2, 6, 0, 1);
        countALabel->alignCenter();
        countALabel->requestRedraw();
        countADirty = 0;
    }
}

void HudCountdownLabels::refreshCountB() {
    if (countBDirty != 0 && countBLabel != NULL) {
        String_FormatNumber(&countBText, countB, 2, 6, 0, 1);
        countBLabel->alignCenter();
        countBLabel->requestRedraw();
        countBDirty = 0;
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
    if (finishTimer > 0) {
        finishTimer = finishTimer - 1;
    }
    if (durationKind != 0) {
        MI_CpuCopy8(endTime, a, 8);
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
            t = DateTime_Compare(remaining, a, 1) ? TRUE : FALSE;
            x = (k | t) ? TRUE : FALSE;
            r = DateTime_Compare(remaining, a, 2) ? TRUE : FALSE;
            k |= r;
            y = k ? TRUE : FALSE;
        }
        u8 *p95 = &secondsDirty;
        *p95 = Unk_0208b9f0_Or(secondsDirty, x);
        u8 *p94 = &minutesDirty;
        *p94 = Unk_0208b9f0_Or(minutesDirty, y);
        if (x != 0 || y != 0) {
            u32 b0, b1;
            MI_CpuCopy8(a, remaining, 8);
            b0 = a[0];
            b1 = a[1];
            if (b1 == 0) {
                if (b0 == 0) {
                    finishTimer = 0x258;
                    durationKind = 0;
                    if (Scene_GetCurrent() != 0x2e) {
                        Snd_PlaySe(0x65);
                    }
                    FieldInfoBalloon_ShowTimerMsg(3);
                } else if (b0 <= 10) {
                    u64 now = OS_GetTick();
                    u64 d = now - *(u64 *)&lastTickTime;
                    u64 q = (d << 6) / 0x82ea;
                    if (q <= 0x44c) {
                        if (Scene_GetCurrent() != 0x2e) {
                            Snd_PlaySe(0x64);
                        }
                    }
                    lastTickTime = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                } else if (b0 >= 0xb) {
                    u64 now = OS_GetTick();
                    lastTickTime = (u32)now;
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
    slideSpeed = slideSpeed + 0xa00;
    c4 = slideSpeed;
    if (c4 < 0x2300) {
        c4 = 0x2300;
    } else if (c4 > 0x5000) {
        c4 = 0x5000;
    }
    slideSpeed = c4;
    if (t != slideTarget) {
        if (slideDelay >= 0 && b) {
            slideDelay = slideDelay + 1;
            if (slideDelay <= 10) {
                goto end;
            }
        }
        slideTarget = t;
        slideDelay = 0;
    } else {
        slideDelay = 0;
    }
end:
    func_020e7870(&slideY, slideTarget, 0x600, slideSpeed, 0x2300);
}

void HudCountdownLabels::resetSlide() {
    slideY = 0;
    slideTarget = 0;
    slideDelay = -1;
    slideSpeed = 0;
}

HudCameraGrid::HudCameraGrid() {
    state = 0;
    cell = 0;
    cellX = 0;
    cellY = 0;
    activeCell = 0;
    visible = 0;
}

HudCameraGrid::~HudCameraGrid() { resetCellAnims(); }

void HudCameraGrid::draw() {
    if (state != 0) {
        s32 bx = getOriginX();
        s32 by = getOriginY();
        s32 i = 0;
        s32 nb = -1;
        s32 z = 0;
        for (; i < 9; i++) {
            SpriteAnim *e = &cellAnims[i];
            void *p = e->getCell();
            if (p != NULL) {
                s32 sx = e->getFrameX(nb);
                s32 sy = e->getFrameY(nb);
                s32 pal = (i == activeCell) ? 6 : 5;
                Oam_DrawCell(z, p, bx + sx, by + sy, pal, nb, 0x1000, 0x1000, z, nb, z, z);
            }
        }
    }
}

void HudCameraGrid::vfunc_0c() {
    static Unk_0208b728_Fn tbl[4] = {(Unk_0208b728_Fn)&HudCameraGridStates::updateClosed, (Unk_0208b728_Fn)&HudCameraGridStates::updateOpening,
                                     (Unk_0208b728_Fn)&HudCameraGridStates::updateOpen, (Unk_0208b728_Fn)&HudCameraGridStates::updateClosing};
    (((HudCameraGridStates *)this)->*tbl[state])();
}

void HudCameraGrid::reset() {
    visible = 0;
    cell = 0;
    cellX = 0;
    cellY = 0;
    activeCell = 0;
    _ZN19HudCameraGridStates11enterClosedEv(this);
}

void HudCameraGrid::resetCellAnims() {
    s32 i;
    for (i = 0; i < 9; i++) {
        cellAnims[i].restart();
    }
}

void HudCameraGrid::callUpdate() { vfunc_0c(); }

void HudCameraGrid::callDraw() {
    if (state == 2) {
        Input_IsButtonMode();
    }
    draw();
}

void HudCameraGrid::setVisible(u32 v) { visible = v; }

BOOL HudCameraGrid::isClosed() {
    if (state == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudCameraGrid::isOpen() {
    if (state == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudCameraGrid::isSettled() {
    s32 s = state;
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
            cell = i;
            _ZN19HudCameraGridStates14setPosFromCellEv(this);
            break;
        }
    }
    return r;
}

BOOL HudCameraGridStates::moveByDpad() {
    s32 ox = cellX;
    s32 oy = cellY;
    u32 k = gPad[1];
    if ((k & 0x10) != 0) {
        cellX = cellX + 1;
    } else if ((k & 0x20) != 0) {
        cellX = cellX - 1;
    } else if ((k & 0x40) != 0) {
        cellY = cellY - 1;
    } else if ((k & 0x80) != 0) {
        cellY = cellY + 1;
    }
    s32 t = cellX;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    cellX = t;
    t = cellY;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    cellY = t;
    setCellFromPos();
    if (ox != cellX || oy != cellY) {
        return TRUE;
    }
    return FALSE;
}

void HudCameraGridStates::applySelection() {
    Camera_SetPresetCell((kHudCameraGridCells + 1)[cell * 2], kHudCameraGridCells[cell * 2]);
    s32 p = activeCell;
    if (cell != p) {
        s32 a = (kHudCameraGridDirs + 1)[cell * 2];
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
        activeCell = cell;
    }
}

void HudCameraGridStates::setCellFromPos() {
    s32 i = 0;
    while (i < 9) {
        s32 n = i * 2;
        const s8 *e = kHudCameraGridDirs + n;
        if (cellX == kHudCameraGridDirs[n] && cellY == e[1]) break;
        i++;
    }
    cell = i;
}

void HudCameraGridStates::setPosFromCell() {
    cellX = kHudCameraGridDirs[cell * 2];
    cellY = (kHudCameraGridDirs + 1)[cell * 2];
}

void HudCameraGridStates::enterClosed() {
    state = 0;
}

void HudCameraGridStates::updateClosed() {
    if (visible != 0) {
        enterOpening();
    }
}

void HudCameraGridStates::enterOpening() {
    s32 one = 1;
    state = one;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &cellAnims[i];
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
        SpriteAnim *o = &cellAnims[i];
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
    state = 2;
}

void HudCameraGridStates::updateOpen() {
    if (visible == 0) {
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
    state = 3;
    s32 i;
    for (i = 0; i < 9; i++) {
        SpriteAnim *o = &cellAnims[i];
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
        SpriteAnim *o = &cellAnims[i];
        o->update();
        if (!o->isFinished()) {
            r = z;
        }
    }
    if (r) {
        enterClosed();
    }
}

HudCameraButton::HudCameraButton() : state(0), gridActive(0), openedByButton(0), enabled(0) {
}

HudCameraButton::~HudCameraButton() {
    release();
}

void HudCameraButton::draw() {
    if (state != 0) {
        void *v = anim.getCell();
        if (v != 0) {
            s32 x = anim.getFrameX(-1);
            s32 y = anim.getFrameY(-1);
            s32 bx = getOriginX();
            s32 by = getOriginY();
            s32 t = ((u32)(state - 3) <= 2) ? 6 : 5;
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
    (this->*tbl[state])();
}

void HudCameraButton::reset() {
    enabled = 0;
    gridActive = 0;
    openedByButton = 0;
    enterHidden();
    grid.reset();
}

void HudCameraButton::release() {
    grid.resetCellAnims();
    anim.restart();
}

void HudCameraButton::callUpdate() {
    vfunc_0c();
    grid.callUpdate();
    updateInputMode();
}

void HudCameraButton::callDraw() {
    draw();
    grid.callDraw();
}

void HudCameraButton::enable() {
    enabled = 1;
}

void HudCameraButton::disable() {
    enabled = 0;
}

BOOL HudCameraButton::isHidden() {
    if (state == 0 && grid.isClosed()) {
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
    if (enabled != 0 && !a && !b && !c) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL HudCameraButton::isTogglePressed(s32 flag) {
    BOOL r = FALSE;
    BOOL f = r;
    if (gridActive != 0) {
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
        if (grid.isSettled()) {
            u32 k = gPad[1];
            if ((k & 0x400) != 0 || (flag != 0 && (k & 2) != 0)) {
                r = TRUE;
                openedByButton = 1;
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
                        openedByButton = 0;
                    }
                }
            }
        }
    }
    return r;
}

void HudCameraButton::updateInputMode() {
    if (gridActive != 0) {
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
    state = 0;
}

void HudCameraButton::updateHidden() {
    if (canShow()) {
        enterAppearing();
    }
}

void HudCameraButton::enterAppearing() {
    state = 1;
    anim.setSeq((SpriteAnimSeq *)(data_020d477c));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudCameraButton::updateAppearing() {
    anim.update();
    if (anim.isFinished()) {
        enterShown();
    }
}

void HudCameraButton::enterShown() {
    state = 2;
    openedByButton = 0;
    anim.setSeq((SpriteAnimSeq *)(data_020d4784));
    anim.setPlayOnce(1);
    anim.restart();
    anim.pause();
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
    state = 3;
    grid.setVisible(1);
    gridActive = 1;
    if (openedByButton != 0) {
        Input_SetButtonMode();
    } else {
        Input_SetTouchMode();
    }
    Snd_PlaySe(0x4a);
}

void HudCameraButton::updateGridOpening() {
    if (grid.isOpen()) {
        enterGridOpen();
    }
}

void HudCameraButton::enterGridOpen() {
    state = 4;
    anim.setSeq((SpriteAnimSeq *)(data_020d478c));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudCameraButton::updateGridOpen() {
    BOOL a = isTogglePressed(1);
    BOOL b = MenuCtrl_IsForceCloseDue();
    if (a || b) {
        enterGridClosing();
    }
}

void HudCameraButton::enterGridClosing() {
    state = 5;
    grid.setVisible(0);
    Snd_PlaySe(0x4b);
}

void HudCameraButton::updateGridClosing() {
    if (grid.isClosed()) {
        TalkRequest_FinishCameraView();
        gridActive = 0;
        enterShown();
    }
}

void HudCameraButton::enterHiding() {
    state = 6;
    anim.setSeq((SpriteAnimSeq *)(data_020d4784));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudCameraButton::updateHiding() {
    anim.update();
    if (anim.isFinished()) {
        enterHidden();
    }
}

HudWallet::HudWallet()
    : state(0), baseY(0), slideY(0), slideTarget(0), slideSpeed(0), slideDelay(-1), label(NULL) {
    shownBells = 0;
    showRequested = 0;
    rolling = 0;
    valueFrozen = 0;
}

HudWallet::~HudWallet() {
    release();
}

void HudWallet::draw() {
    if (state != 0) {
        void *h = anim.getCell();
        if (h != 0) {
            s32 a = getOriginX();
            s32 x = a + anim.getFrameX(-1);
            s32 b = (slideY + 0x800) >> 12;
            s32 c = getOriginY();
            s32 e = anim.getFrameY(-1);
            s32 y = b;
            y += baseY + (c + e);
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudWallet::vfunc_0c() {
    static Fn tbl[4] = {
        (Fn)&HudWallet::updateHidden, (Fn)&HudWallet::updateAppearing,
        (Fn)&HudWallet::updateShown, (Fn)&HudWallet::updateHiding,
    };
    (this->*tbl[state])();
}

void HudWallet::reset() {
    showRequested = 0;
    syncValue();
    resetSlide();
    enterHidden();
}

void HudWallet::release() {
    setRolling(0);
    anim.restart();
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
    showRequested = 1;
}

void HudWallet::hide() {
    showRequested = 0;
}

BOOL HudWallet::isHidden() {
    if (state == 0) {
        return TRUE;
    }
    return FALSE;
}

void HudWallet::freezeValue() {
    valueFrozen = 1;
}

void HudWallet::unfreezeValue() {
    valueFrozen = 0;
}

void HudWallet::enterHidden() {
    state = 0;
}

void HudWallet::updateHidden() {
    if (showRequested != 0) {
        enterAppearing();
    }
}

void HudWallet::enterAppearing() {
    state = 1;
    anim.setSeq((SpriteAnimSeq *)(data_020d4794));
    anim.setPlayOnce(1);
    anim.restart();
    syncValue();
    createLabel();
}

void HudWallet::updateAppearing() {
    anim.update();
    if (anim.isFinished() != 0) {
        enterShown();
    }
}

void HudWallet::enterShown() {
    state = 2;
}

void HudWallet::updateShown() {
    BOOL r = rollTowardTarget();
    if (showRequested == 0) {
        enterHiding();
        r = FALSE;
    }
    setRolling(r);
}

void HudWallet::enterHiding() {
    state = 3;
    anim.setSeq((SpriteAnimSeq *)(data_020d479c));
    anim.setPlayOnce(1);
    anim.restart();
}

void HudWallet::updateHiding() {
    anim.update();
    if (anim.isFinished() != 0) {
        freeLabel();
        enterHidden();
    }
}

void HudWallet::createLabel() {
    if (label == NULL) {
        label = MsgTextLabel_CreateVram(0x80, 8, 1);
        if (label != NULL) {
            label->vramLoader = 4;
            label->copyMode = 2;
            label->rowStride1K = 1;
            label->bgColor = 0;
            label->fgColor = 0xc;
            TextLabel *o = label;
            StrBuf *s = &text;
            o->textStart = (u32)s->data();
            label->font = &gFontD;
            label->alignRight();
            label->requestRedraw();
        }
    }
}

void HudWallet::freeLabel() {
    if (label != NULL) {
        MsgTextLabel_Destroy(label);
        label = NULL;
    }
}

void HudWallet::syncValue() {
    shownBells = Hud_GetBells();
    formatValue();
    rolling = 0;
    valueFrozen = 0;
}

BOOL HudWallet::rollTowardTarget() {
    BOOL r = FALSE;
    if (valueFrozen == 0) {
        s32 v = Unk_0208a814_NS::Hud_GetBells(this);
        if (shownBells != v) {
            s32 d = v - shownBells;
            if (d < 0) {
                d = -d;
            }
            s32 t = (d / 6 + 0x32) / 10;
            func_020e759c(&shownBells, v, t * 10 + 7);
            formatValue();
            if (label != NULL) {
                label->alignRight();
                label->requestRedraw();
            }
            r = TRUE;
        }
    }
    return r;
}

void HudWallet::formatValue() {
    String_FormatNumber(&text, shownBells, 7, 1, 0, 1);
}

void HudWallet::setRolling(BOOL v) {
    if (rolling != 0) {
        if (v == 0) {
            func_02003edc();
            Snd_PlaySe(0x2e);
        }
    } else if (v != 0) {
        func_02003eec();
    }
    rolling = v;
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
    baseY = (a + b) >> 12;
}

void HudWallet::updateSlide() {
    if (MenuCtrl_IsTransitionActive() != 0) {
        s32 r;
        if (ChatBalloon_IsRemoteBusy() != 0) {
            r = 0x28000;
        } else {
            r = 0;
        }
        slideSpeed = slideSpeed + 0xa00;
        s32 t = slideSpeed;
        if (t < 0x2300) {
            t = 0x2300;
        } else if (t > 0x5000) {
            t = 0x5000;
        }
        slideSpeed = t;
        if (r != slideTarget) {
            if (slideDelay < 0 || (slideDelay = slideDelay + 1, slideDelay > 5)) {
                slideTarget = r;
                slideDelay = 0;
            }
        } else {
            slideDelay = 0;
        }
        func_020e7870(&slideY, slideTarget, 0x600, slideSpeed, 0x2300);
    } else {
        resetSlide();
    }
}

void HudWallet::resetSlide() {
    slideY = 0;
    slideTarget = 0;
    slideDelay = -1;
    slideSpeed = 0;
}

HudController::HudController() : state(0) {
    hideRequest = 0;
    hideRequestB = 0;
    buttonLayout = 0;
}

HudController::~HudController() {}

extern "C" void Hud_Init() { gHud.init(); }

extern "C" void Hud_Exit() { gHud.exit(); }

extern "C" void Hud_Update() { gHud.update(); }

extern "C" void Hud_Draw() { gHud.draw(); }

extern "C" void Hud_Hide() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->hideRequest = 1; }

extern "C" void Hud_Show() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->hideRequest = 0; }

extern "C" void Hud_ClearHideB() { ((Unk_0208a328_Pa *)((u8 *)&gHud + 0x300))->hideRequestB = 0; }

extern "C" void *Hud_GetCountdown() { return &gHud.countdown; }

extern "C" void *Hud_GetWallet() { return &gHud.wallet; }

void HudController::init() {
    Hud_Show();
    Hud_ClearHideB();
    _ZN19HudControllerStates16enterModeForRoomEv(this);
    _ZN8HudClock5resetEv(&clock);
    _ZN12HudCountdown5resetEv(&countdown);
    _ZN15HudCameraButton5resetEv(&cameraButton);
    wallet.reset();
    buttonLayout = 0;
}

void HudController::exit() {
    wallet.release();
    _ZN15HudCameraButton7releaseEv(&cameraButton);
    _ZN12HudCountdown7releaseEv(&countdown);
    _ZN8HudClock7releaseEv(&clock);
}

void HudController::update() {
    static Fn tbl[6] = {
        (Fn)&HudController::updateOff, (Fn)&HudController::updateClock, (Fn)&HudControllerStates::updateCountdown,
        (Fn)&HudControllerStates::updateCameraButton, (Fn)&HudControllerStates::updateWallet, (Fn)&HudControllerStates::updateHidden,
    };
    (this->*tbl[state])();
    _ZN8HudClock10callUpdateEv(&clock);
    _ZN12HudCountdown10callUpdateEv(&countdown);
    _ZN15HudCameraButton10callUpdateEv(&cameraButton);
    wallet.callUpdate();
    _ZN19HudControllerStates17updateInputLayoutEv(this);
}

void HudController::draw() {
    _ZN8HudClock8callDrawEv(&clock);
    _ZN12HudCountdown8callDrawEv(&countdown);
    _ZN15HudCameraButton8callDrawEv(&cameraButton);
    wallet.callDraw();
}

void HudController::enterOff() {
    state = 0;
}

void HudController::updateOff() {
    if (hideRequest != 0 || hideRequestB != 0) {
        _ZN19HudControllerStates11enterHiddenEv(this);
    }
}

void HudController::enterClock() {
    state = 1;
}

void HudController::updateClock() {
    BOOL a;
    BOOL b;
    if (hideRequest != 0 || hideRequestB != 0) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    b = _ZN12HudCountdown10isFinishedEv(&countdown) == 0 ? TRUE : FALSE;
    if (a || b) {
        _ZN8HudClock4hideEv(&clock);
        if (_ZN8HudClock8isHiddenEv(&clock) != 0) {
            if (a) {
                _ZN19HudControllerStates11enterHiddenEv(this);
            } else {
                enterCountdown();
            }
        }
    } else {
        _ZN8HudClock4showEv(&clock);
    }
}

void HudController::enterCountdown() {
    state = 2;
    HudObjGfx_SetCountdownVariant(1);
    HudObjGfx_LoadKind(1, 1);
}

void HudControllerStates::updateCountdown() {
    BOOL r5;
    if (hideRequest != 0 || hideRequestB != 0) {
        r5 = TRUE;
    } else {
        r5 = FALSE;
    }
    BOOL r0 = _ZN12HudCountdown10isFinishedEv(&countdown);
    if (r5 || r0) {
        _ZN12HudCountdown4hideEv(&countdown);
        if (_ZN12HudCountdown8isHiddenEv(&countdown)) {
            if (r5) {
                enterHidden();
            } else {
                HudObjGfx_SetCountdownVariant(0);
                HudObjGfx_LoadKind(4, 1);
                _ZN13HudController10enterClockEv(this);
            }
        }
    } else {
        _ZN12HudCountdown4showEv(&countdown);
    }
}

void HudControllerStates::enterCameraButton() { state = 3; }

void HudControllerStates::updateCameraButton() {
    if (hideRequest != 0 || hideRequestB != 0) {
        _ZN15HudCameraButton7disableEv(&cameraButton);
        if (_ZN15HudCameraButton8isHiddenEv(&cameraButton)) {
            enterHidden();
        }
    } else {
        _ZN15HudCameraButton6enableEv(&cameraButton);
    }
    updateSharedPanels();
}

void HudControllerStates::enterWallet() { state = 4; }

void HudControllerStates::updateWallet() {
    _ZN9HudWallet4showEv(&wallet);
    updateSharedPanels();
}

void HudControllerStates::enterHidden() {
    HudObjGfx_LoadKind(3, 1);
    state = 5;
}

void HudControllerStates::updateHidden() {
    if (hideRequest != 0 || hideRequestB != 0) {
        _ZN9HudWallet4showEv(&wallet);
    } else {
        _ZN9HudWallet4hideEv(&wallet);
        if (_ZN9HudWallet8isHiddenEv(&wallet)) {
            HudObjGfx_LoadKind(4, 1);
            enterModeForRoom();
        }
    }
    updateSharedPanels();
}

void HudControllerStates::updateSharedPanels() {
    if (Hud_GetSceneHudKind() != 0) {
        if (Unk_0208a150_IsOne(gFieldSceneKind)) {
            if (_ZN12HudCountdown10isFinishedEv(&countdown)) {
                _ZN12HudCountdown4hideEv(&countdown);
                if (_ZN12HudCountdown8isHiddenEv(&countdown)) {
                    _ZN8HudClock4showEv(&clock);
                }
            } else {
                _ZN8HudClock4hideEv(&clock);
                if (_ZN8HudClock8isHiddenEv(&clock)) {
                    _ZN12HudCountdown4showEv(&countdown);
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
    if (buttonLayout != 0) {
        if (InputMode_IsButtons()) {
            r = TRUE;
        }
    } else {
        if (InputMode_IsTouch()) {
            r = TRUE;
        }
    }
    if (r) {
        buttonLayout = buttonLayout == 0 ? 1 : 0;
        if (state == 3) {
            HudObjGfx_LoadCameraButton(buttonLayout, 1, 1);
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
    HudProc *(*create)();
    s16 executePriority;
    s16 drawPriority;
};
Unk_020e0e74_Rec sHudProcProfile = {HudProc_Create, 0xca, 0x8e};

HudController gHud;
