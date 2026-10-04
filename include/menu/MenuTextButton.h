#ifndef MENU_MENUTEXTBUTTON_H
#define MENU_MENUTEXTBUTTON_H

// Menu text button (0x50 bytes, vtable 0x022046dc): a LabelString caption drawn over a row of sprite cells.
// Defined in ov002, unk_ov002_02202fac.cpp (0x02203ab8..0x02203d50).
#include "types.h"
#include "ui/LabelString.h"
#include "ui/OamCellEntry.h"

class MenuTextButton {
public:
    MenuTextButton();                           // C1 0x02203d50
    virtual ~MenuTextButton();                  // D0 0x02203d08, D1 0x02203d30

    u32 getPressOffset();                       // 0x02203c0c
    void freeText();                            // 0x02203c1c
    void clearFlags(u32 m);                     // 0x02203c28
    void setFlags(u32 m);                       // 0x02203c38
    BOOL testFlags(u32 m);                      // 0x02203c48
    void renderText(u8 a, u8 b);                // 0x02203c5c
    void setLabelNoShadow(u8 v);                // 0x02203ca4
    void setLabelWithShadow(u8 v);              // 0x02203cc4
    void setLabel(u8 v);                        // 0x02203ce4
    void setup(OamCellEntry *p, u8 a, u8 b); // 0x02203cf8
    BOOL isDisabled();                          // 0x02203ab8
    void setEnabled();                          // 0x02203ac4
    void setDisabled();                         // 0x02203ad0
    void disableObjWindow();                    // 0x02203adc
    void enableObjWindow();                     // 0x02203ae8
    BOOL stepPress();                           // 0x02203af4
    void drawAt(s32 x, s32 y, s32 c);           // 0x02203b30

    /* 0x04 */ LabelString caption;
    /* 0x44 */ OamCellEntry *cells;
    /* 0x48 */ u8 widthTiles;
    /* 0x49 */ u8 pressStep;
    /* 0x4a */ u8 frameCellCount;
    /* 0x4b */ u8 msgId;
    /* 0x4c */ u8 flags;
};

#endif
