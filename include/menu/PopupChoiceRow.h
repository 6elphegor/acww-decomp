#ifndef MENU_POPUPCHOICEROW_H
#define MENU_POPUPCHOICEROW_H

// One row of the popup choice menu (0x48 bytes): a LabelString plus character base, layer and colours.
// Defined in ov002, unk_ov002_022013ac.cpp (0x022024f8..0x02202594).
#include "types.h"
#include "ui/LabelString.h"

class PopupChoiceRow : public LabelString {
public:
    PopupChoiceRow();                           // C1 0x02202594
    virtual ~PopupChoiceRow();                  // D0 0x0220255c, D1 0x0220257c

    void setup(u32 a, u16 b, u8 c, u8 d);       // 0x022024f8
    void render(s32 v);                         // 0x02202520

    /* 0x40 */ u16 charBase;
    /* 0x42 */ u8 layer;
    /* 0x43 */ u8 fgColor;
    /* 0x44 */ u8 bgColor;
};

#endif
