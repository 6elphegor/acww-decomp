#ifndef MENU_DATETIMEPICKER_H
#define MENU_DATETIMEPICKER_H

// Date/time picker panel with drop-down lists and a clock (0x25c4 bytes), used by the ov134..ov138 menus.
// Defined in src/ov134/unk_ov134_02291f60.cpp (methods plus the DateTimePicker_* plain functions).
#include "types.h"
#include "gfx/BgVramTask.h"
#include "ui/LabelString.h"
#include "menu/MenuScrollKnob.h"

struct PickerDateTime {
    u8 b[8];
    PickerDateTime() {
        *(u32 *)&b[0] = 0;
        *(u32 *)&b[4] = 0;
    }
};

class DateTimePicker {
public:
    DateTimePicker();
    ~DateTimePicker();
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void blendListPalette(s32 t);
    void stepListScroll();
    s32 rowAtY(s32 y);
    BOOL moveListCursorDown();
    BOOL moveListCursorUp();
    BOOL pickListCursorRow();
    s32 navigateList(u32 pad);
    void setListCursorFromY(s32 y);
    s32 getListCursorY();
    s32 getListCursorX();
    void placeKnob();
    void syncScrollToKnob();
    void syncKnobToScroll();
    BOOL finishKnobRelease();
    void releaseKnob();
    void moveKnobByPad();
    void dragKnobToward(s32 x);
    void dragKnob(s32 x);
    void onKnobMoved();
    BOOL grabKnobByCursor();
    BOOL grabKnobAt(s32 x, s32 y);
    BOOL isRowDisabled(s32 v);
    BOOL isBelowMinimum(s32 v, u8 n);
    BOOL isAboveMaximum(s32 v, u8 n);
    BOOL applyPickedValue();

    /* 0x00 */ s32 listScroll;
    /* 0x04 */ s32 pendingScroll;
    /* 0x08 */ u8 rowCache[0x10];
    /* 0x18 */ MenuScrollKnob knob;
    /* 0x60 */ s32 knobX;
    /* 0x64 */ s32 knobY;
    /* 0x68 */ s32 knobGrabOffset;
    /* 0x6c */ s32 knobLastTickY;
    /* 0x70 */ u32 pickedRowCell;
    /* 0x74 */ void *listTopCell;
    /* 0x78 */ u32 listBottomCell;
    /* 0x7c */ u8 *listX;
    /* 0x80 */ s32 pickedRowY;
    /* 0x84 */ s32 clockMinutes;
    /* 0x88 */ s32 targetMinutes;
    /* 0x8c */ s32 scrollMax;
    /* 0x90 */ u16 flags;
    /* 0x92 */ u16 minuteHandAngle;
    /* 0x94 */ u16 hourHandAngle;
    /* 0x96 */ u16 lastTickAngle;
    /* 0x98 */ volatile u8 fieldFlash[6];
    /* 0x9e */ u8 grabbedHand;
    /* 0x9f */ u8 labelCount;
    /* 0xa0 */ u8 mode;
    /* 0xa1 */ u8 objVariant;
    /* 0xa2 */ u8 mainLayer;
    /* 0xa3 */ u8 fieldLayer;
    /* 0xa4 */ u8 listLayer;
    /* 0xa5 */ u8 listField;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 listFieldLeft;
    /* 0xa8 */ u8 listFieldTop;
    /* 0xa9 */ u8 listState;
    /* 0xaa */ u8 listOffsetX;
    /* 0xab */ u8 listTop;
    /* 0xac */ u8 listCount;
    /* 0xad */ u8 pickedRow;
    /* 0xae */ u8 listFieldBottomY;
    /* 0xaf */ volatile u8 listAnimTimer;
    /* 0xb0 */ u8 listCursorRow;
    /* 0xb1 */ u8 cursorField;
    /* 0xb2 */ u8 minHour;
    /* 0xb3 */ u8 maxHour;
    /* 0xb4 */ u8 minMinute;
    /* 0xb5 */ u8 windowTop;
    /* 0xb6 */ u8 windowBottom;
    /* 0xb7 */ s8 listKeyHoldCount;
    /* 0xb8 */ PickerDateTime dateTime;
    /* 0xc0 */ PickerDateTime dragDateTime;
    /* 0xc8 */ PickerDateTime minDateTime;
    /* 0xd0 */ PickerDateTime maxDateTime;
    /* 0xd8 */ LabelString labels[0x11];
    /* 0x518 */ BgVramTask fieldScreenTask;
    /* 0x53c */ BgVramTask listScreenTask;
    /* 0x560 */ BgVramTask listPaletteTask;
    /* 0x584 */ u8 fieldScreen[0x800];
    /* 0xd84 */ u8 listScreenBase[0x800];
    /* 0x1584 */ u8 listScreenWork[0x800];
    /* 0x1d84 */ u8 listScreen[0x800];
    /* 0x2584 */ u8 listPalette[0x20];
    /* 0x25a4 */ u8 listPaletteWork[0x20];
};

#endif // MENU_DATETIMEPICKER_H
