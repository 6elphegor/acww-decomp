#ifndef UI_HUDUNKICON_H
#define UI_HUDUNKICON_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"

// 0x24-byte HUD icon widget with a show/hide state machine (vtable _ZTV10HudUnkIcon 0x020e105c). Defined in main:
// the state handlers in unk_0208dae4.cpp (0x0208ddb8..0x0208de68), the rest in unk_0208de68.cpp (..0x0208dff4).
class HudUnkIcon : public UiWidget {
public:
    HudUnkIcon();                           // C1 0x0208dfd0
    virtual ~HudUnkIcon();                  // D0 0x0208df84, D1 0x0208dfac
    virtual void draw();                    // 0x0208df18
    virtual void vfunc_0c();                // 0x0208de98

    void updateHiding();                    // 0x0208ddb8
    void updateShown();                     // 0x0208ddd8
    void updateAppearing();                 // 0x0208de10
    void updateHidden();                    // 0x0208de30

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
};

#endif
