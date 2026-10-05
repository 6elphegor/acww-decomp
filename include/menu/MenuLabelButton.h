#ifndef MENU_MENULABELBUTTON_H
#define MENU_MENULABELBUTTON_H

// ov002 menu label buttons (0x70 bytes): MenuLabelButtonBase (a LabelButton with its own setOrigin) and its two
// subclasses (vtables 0x02204738 / 0x0220471c). Defined in ov002, unk_ov002_02202fac.cpp (0x02203d7c..0x02204024).
#include "types.h"
#include "ui/LabelButton.h"

class MenuLabelButtonBase : public LabelButton {
public:
    MenuLabelButtonBase(u8 a, s32 b);           // C2 0x02204024
    virtual ~MenuLabelButtonBase();             // D2 0x02203fd4, D0 0x02203fec, D1 0x0220400c
    virtual void setOrigin(s32 a, s32 b);       // 0x02203fc8
};

class MenuLabelButton : public MenuLabelButtonBase {
public:
    MenuLabelButton();                          // C1 0x02203e08
    virtual ~MenuLabelButton();                 // D0 0x02203dd0, D1 0x02203df0

    BOOL isTouched();                           // 0x02203e24
    void showAt(s32 v, s32 x, s32 y);           // 0x02203e88
    void showDefault(s32 v);                    // 0x02203ec8
    void setLabel2d(s32 v);                     // 0x02203edc
    BOOL stepAnim();                            // 0x02203f08
    s32 getAnchorY(s32 k);                      // 0x02203f28
    s32 getAnchorX(s32 k);                      // 0x02203f78
};

class MenuLabelButtonStyle1 : public MenuLabelButtonBase {
public:
    MenuLabelButtonStyle1();                    // C1 0x02203db4
    virtual ~MenuLabelButtonStyle1();           // D0 0x02203d7c, D1 0x02203d9c
};

#endif
