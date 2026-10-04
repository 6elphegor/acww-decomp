#ifndef UI_TALKARROW_H
#define UI_TALKARROW_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"

// 0x44-byte talk-window "next" arrow widget (vtable _ZTV9TalkArrow 0x020e0d3c). Defined in main, unk_020891bc.cpp /
// unk_02089330.cpp (0x02089284..0x02089508).
class TalkArrow : public UiWidget {
public:
    TalkArrow(u8 flag);                     // C1 0x020894c0
    virtual ~TalkArrow();                   // D0 0x02089464, D1 0x02089494
    virtual void draw();                    // 0x02089350
    virtual void vfunc_0c();                // 0x02089330

    BOOL isAnimDone();                      // 0x02089284
    s32 getState();                         // 0x020892ac
    void setState(s32 idx);                 // 0x020892b0
    void setOffset(s32 x, s32 y);           // 0x02089320
    void setAltStyle();                     // 0x02089328

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ SpriteAnim subAnim;
    /* 0x34 */ s32 state;
    /* 0x38 */ s32 offsetX;
    /* 0x3c */ s32 offsetY;
    /* 0x40 */ u8 useAltStyle;
    /* 0x41 */ u8 unk_41;
};

#endif
