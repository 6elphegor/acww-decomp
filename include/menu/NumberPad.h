#ifndef MENU_NUMBERPAD_H
#define MENU_NUMBERPAD_H

// Numeric entry pad of the bank/amount menus (0x11b4 bytes). Defined in src/ov130/unk_ov130_02292360.cpp.
#include "types.h"
#include "gfx/BgVramTask.h"
#include "ui/LabelString.h"

class NumberPad {
public:
    NumberPad();
    ~NumberPad();

    void flushScreens();
    void update();
    void shutdown();
    void loadObj();
    void loadBg();
    void init(u32 mode, u32 a, u32 b);

    /* 0x00 */ u16 flags;
    /* 0x02 */ u8 repeatTimer;
    /* 0x03 */ u8 highlightTimer;
    /* 0x04 */ u8 pressedKey;
    /* 0x05 */ u8 cursorKey;
    /* 0x06 */ u8 labelCount;
    /* 0x07 */ u8 entryMode;
    /* 0x08 */ u8 layout;
    /* 0x09 */ u8 objVariant;
    /* 0x0a */ u8 mainLayer;
    /* 0x0b */ u8 keyLayer;
    /* 0x0c */ u32 value;
    /* 0x10 */ u32 maxValue;
    /* 0x14 */ u32 topAmount;
    /* 0x18 */ u32 bottomAmount;
    /* 0x1c */ u8 unk_1c[0x2c - 0x1c];
    /* 0x2c */ LabelString labels[5];
    /* 0x16c */ BgVramTask screenTasks[2];
    /* 0x1b4 */ u8 mainScreen[0x800];
    /* 0x9b4 */ u8 keyScreen[0x800];
};

#endif // MENU_NUMBERPAD_H
