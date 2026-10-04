#ifndef UI_INPUTMODEICON_H
#define UI_INPUTMODEICON_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"

// 0x2c-byte HUD input-mode (touch / buttons) icon widget (vtable _ZTV13InputModeIcon 0x020e115c). Defined in main,
// unk_0208e6d8.cpp / unk_0208eeac.cpp (0x0208ee40..0x0208efd0).
class InputModeIcon : public UiWidget {
public:
    InputModeIcon();                        // C1 0x0208eef8
    virtual ~InputModeIcon();               // D0 0x0208eeac, D1 0x0208eed4
    virtual void draw();                    // 0x0208ef54
    virtual void vfunc_0c();                // 0x0208ef28

    void startModeAnim();                   // 0x0208ee40
    BOOL isDrawBlocked();                   // 0x0208ee94
    void exit();                            // 0x0208ee8c
    void init();                            // 0x0208ee90

    /* 0x0c */ s32 inputMode;
    /* 0x10 */ s32 shownMode;
    /* 0x14 */ SpriteAnim anim;
    /* 0x28 */ u8 isVisible;
};

#endif
