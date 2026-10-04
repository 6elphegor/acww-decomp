#ifndef UI_LABELBUTTON_H
#define UI_LABELBUTTON_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"
#include "talk/MsgString.h"

class TextLabel;

// 0x1c-byte 9-character caption buffer of a LabelButton (vtable _ZTV15LabelButtonText 0x020e1078).
// Defined in main, unk_0208e2e0.cpp (data 0x0208e678, capacity 0x0208e67c, D0 0x0208e680, D1 0x0208e6a0, C1 0x0208e6b8).
class LabelButtonText : public MsgString {
public:
    LabelButtonText();
    virtual ~LabelButtonText();
    virtual u32 capacity();
    virtual u8 *data();
    /* 0x12 */ u8 unk_12[9];
};

// 0x70-byte button widget with two animated sprite layers and a text label (vtable _ZTV11LabelButton 0x020e1090).
// Defined in main, unk_0208dff4.cpp (0x0208dff4..0x0208e2e0) and unk_0208e2e0.cpp (..0x0208e678, constructor).
class LabelButton : public UiWidget {
public:
    LabelButton(u8 a, s32 b);                   // C1 0x0208e590, C2 0x0208e604
    virtual ~LabelButton();                     // D2 0x0208e4e4, D0 0x0208e51c, D1 0x0208e558
    virtual void draw();                        // 0x0208e300
    virtual void update();                    // 0x0208e2e0

    void syncTextColor();                       // 0x0208dff4
    void freeLabel();                           // 0x0208e074
    void createLabel();                         // 0x0208e08c
    BOOL isAnimDone();                          // 0x0208e110
    s32 getState();                             // 0x0208e138
    void setState(s32 v);                       // 0x0208e13c
    void getAnimOffset(s32 *x, s32 *y);         // 0x0208e1fc
    void setPos(s32 x, s32 y);                  // 0x0208e288
    void setLabelText();                        // 0x0208e290
    void showLayer2();                          // 0x0208e2c8
    void hideLayer2();                          // 0x0208e2d0
    void enableObjWindow();                     // 0x0208e2d8

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 palette;
    /* 0x18 */ s32 kind;
    /* 0x1c */ SpriteAnim layer1;
    /* 0x30 */ SpriteAnim layer2;
    /* 0x44 */ s32 state;
    /* 0x48 */ TextLabel *label;
    /* 0x4c */ LabelButtonText text;
    /* 0x68 */ u16 textColor;
    /* 0x6a */ u8 onBufferA;
    /* 0x6b */ u8 objWindow;
    /* 0x6c */ u8 layer2Hidden;
    /* 0x6d */ u8 textColorDirty;
};

#endif
