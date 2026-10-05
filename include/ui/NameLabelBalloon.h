#ifndef UI_NAMELABELBALLOON_H
#define UI_NAMELABELBALLOON_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"
#include "talk/ChatBalloonText.h"

class TextLabel;

// 0x80-byte HUD name-label balloon widget (vtable _ZTV16NameLabelBalloon 0x020e0fe8). Defined in main: the state
// machine in unk_0208d154.cpp (0x0208d154..0x0208d33c), vfunc_0c / draw / destructor / constructor in unk_0208d33c.cpp.
class NameLabelBalloon : public UiWidget {
public:
    typedef void (NameLabelBalloon::*Fn)();

    NameLabelBalloon();                     // C1 0x0208d4b0
    virtual ~NameLabelBalloon();            // D0 0x0208d44c, D1 0x0208d480
    virtual void draw();                    // 0x0208d3cc
    virtual void update();                // 0x0208d33c

    void fitToLabel();                      // 0x0208d154
    void applyKindAnim();                   // 0x0208d1bc
    void updateHiding();                    // 0x0208d1ec
    void enterHiding();                     // 0x0208d214
    void updateShown();                     // 0x0208d220
    void enterShown();                      // 0x0208d234
    void updateAppearing();                 // 0x0208d244
    void enterAppearing();                  // 0x0208d278
    void updateHidden();                    // 0x0208d28c
    void enterHidden();                     // 0x0208d2b8
    static void loadKind4Palette();         // 0x0208d2c4
    BOOL requestHide();                     // 0x0208d2d8
    BOOL requestShow();                     // 0x0208d2f0
    void setText(void *p);                  // 0x0208d308
    void setOffset(s32 a, s32 b);           // 0x0208d314
    void release();                         // 0x0208d31c
    void setKind(s32 a);                    // 0x0208d324

    /* 0x0c */ s32 kind;
    /* 0x10 */ s32 seqIndex;
    /* 0x14 */ SpriteAnim anim;
    /* 0x28 */ s32 offsetX;
    /* 0x2c */ s32 offsetY;
    /* 0x30 */ s32 slideY;
    /* 0x34 */ s32 alignX;
    /* 0x38 */ ChatBalloonText text;
    /* 0x6c */ TextLabel *textLabel;
    /* 0x70 */ s32 state;
    /* 0x74 */ s32 showRequested;
    /* 0x78 */ s32 stateTimer;
    /* 0x7c */ u8 isVisible;
};

#endif
