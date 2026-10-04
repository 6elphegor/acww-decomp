#ifndef UI_HUDCONTROLLER_H
#define UI_HUDCONTROLLER_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"
#include "talk/MsgString3.h"
#include "ui/HudWallet.h"

class TextLabel;
class MsgTextLabel;

// The field HUD: HudController (0x318 bytes, vtable 0x020e0ec4) holds the clock, countdown, camera button (with its
// grid) and wallet panels by value; HudControllerStates are its state handlers.
// All defined in src/main/unk_02089fbc.cpp.

// Countdown timer panel (0xd4 bytes, vtable 0x020e0f08; 0x0208bf00..0x0208c3b0)
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

// 3x3 camera direction grid (0xd8 bytes, vtable 0x020e0f40; 0x0208b5e4..0x0208b8ac)
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

// Camera button panel (0x100 bytes, vtable 0x020e0f24; 0x0208ac84..0x0208b254)
class HudCameraButton : public UiWidget {
public:
    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ u8 gridActive;
    /* 0x25 */ u8 openedByButton;
    /* 0x26 */ u8 enabled;
    /* 0x28 */ HudCameraGrid grid;

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

// Date/time panel (0xc8 bytes, vtable 0x020e0f5c; 0x0208c89c..0x0208cfbc)
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

// 0x0208a328..0x0208a664
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

// State handlers that symbols.txt files under HudControllerStates (0x0208a0ac..0x0208a2ac)
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

#endif
