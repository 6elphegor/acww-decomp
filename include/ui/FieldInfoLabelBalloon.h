#ifndef UI_FIELDINFOLABELBALLOON_H
#define UI_FIELDINFOLABELBALLOON_H

// Field info balloon (0xdc bytes, vtable 0x020e4514): a LabelBalloon with a blinking marker sprite.
// Defined in main, unk_020b7190.cpp (0x020b7a24..0x020b7ba8) and unk_020b7bb0.cpp (virtuals, ctor, dtor).
#include "types.h"
#include "ui/LabelBalloon.h"
#include "gfx/SpriteAnim.h"

class FieldInfoLabelBalloon : public LabelBalloon {
public:
    FieldInfoLabelBalloon();                    // C1 0x020b7cc8
    virtual ~FieldInfoLabelBalloon();           // D0 0x020b7c7c, D1 0x020b7ca4
    virtual void draw();                        // 0x020b7bd0
    virtual void update();                    // 0x020b7bb0

    void restartMarkerAnim();                   // 0x020b7ae4
    BOOL isBlinkVisible();                      // 0x020b7b34
    BOOL isBlinkCycleEnd();                     // 0x020b7b50
    void setBlink(u8 v);                        // 0x020b7b6c
    void resetBalloon();                        // 0x020b7b74
    void requestMarker();                       // 0x020b7ba8
    void updateBlink();                         // 0x020b7a24

    /* 0xbc */ SpriteAnim markerAnim;
    /* 0xd0 */ s32 blinkFrame;
    /* 0xd4 */ u8 markerRequest;
    /* 0xd5 */ u8 markerShown;
    /* 0xd6 */ u8 markerDrawn;
    /* 0xd7 */ u8 markerDrawnPrev;
    /* 0xd8 */ u8 blinkEnabled;
};

#endif
