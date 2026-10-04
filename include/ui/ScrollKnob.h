#ifndef UI_SCROLLKNOB_H
#define UI_SCROLLKNOB_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"

// 0x48-byte scroll-bar knob widget (vtable _ZTV10ScrollKnob 0x020e1020): two animated sprite layers and a state.
// Defined in main, unk_0208d9d4.cpp / unk_0208dae4.cpp (0x0208d9a8..0x0208dd48).
class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);                       // C1 0x0208dcb8, C2 0x0208dd00
    virtual ~ScrollKnob();                      // D2 0x0208dc30, D0 0x0208dc5c, D1 0x0208dc8c
    virtual void draw();                        // 0x0208db10
    virtual void vfunc_0c();                    // 0x0208daf0

    BOOL areAnimsDone();                        // 0x0208d9a8
    s32 getState();                             // 0x0208d9d0
    void setState(s32 idx);                     // 0x0208d9d4
    void getAnimOffset(s32 *a, s32 *b);         // 0x0208da58
    void setPriority(s32 v);                    // 0x0208dae4
    void moveTo(s32 x, s32 y);                  // 0x0208dae8

    /* 0x0c */ s32 layer1;
    /* 0x10 */ s32 posY;
    /* 0x14 */ SpriteAnim layerAnim1;
    /* 0x28 */ SpriteAnim priority;
    /* 0x3c */ s32 state;
    /* 0x40 */ u8 anim;
    /* 0x44 */ s32 unk_44;
};

#endif
