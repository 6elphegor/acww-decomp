#ifndef MENU_MENUSCROLLKNOB_H
#define MENU_MENUSCROLLKNOB_H

// Menu scroll-bar knob (0x48 bytes): ScrollKnob with grab/release states and grip helpers.
// Defined in ov002, unk_ov002_02202e60.cpp (0x02202e60..0x02202f88).
#include "types.h"
#include "ui/ScrollKnob.h"

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();                           // C1 0x02202f88
    virtual ~MenuScrollKnob();                  // D0 0x02202f50, D1 0x02202f70

    s32 getGripY();                             // 0x02202e60
    s32 getGripX();                             // 0x02202e84
    s32 getScreenY();                           // 0x02202ea8
    s32 getScreenX();                           // 0x02202ebc
    s32 updateRelease();                        // 0x02202ed0
    void release();                             // 0x02202ef4
    void grab();                                // 0x02202f00
    void show();                                // 0x02202f0c
    BOOL hitTest(s32 x, s32 y);                 // 0x02202f18
};

#endif
