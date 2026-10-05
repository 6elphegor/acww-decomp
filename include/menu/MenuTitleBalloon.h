#ifndef MENU_MENUTITLEBALLOON_H
#define MENU_MENUTITLEBALLOON_H

// Menu title balloon (0xbc bytes, vtable 0x02204770): a LabelBalloon showing a message as the menu title.
// Defined in ov002, unk_ov002_02202fac.cpp (0x022039d8..0x02203a98).
#include "types.h"
#include "ui/LabelBalloon.h"

class MenuTitleBalloon : public LabelBalloon {
public:
    MenuTitleBalloon();                         // C1 0x02203a98
    virtual ~MenuTitleBalloon();                // D0 0x02203a60, D1 0x02203a80
    virtual void setOrigin(s32 a, s32 b);       // 0x02203a54

    void hideNow();                             // 0x022039d8
    void showText(u8 a, s32 b, s32 c);          // 0x022039f8
};

#endif
