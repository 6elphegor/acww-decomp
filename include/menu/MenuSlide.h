#ifndef MENU_MENUSLIDE_H
#define MENU_MENUSLIDE_H

#include "types.h"
#include "menu/MenuTween.h"

// Menu slide-in/slide-out tween (0x1c bytes). Defined in src/ov002/unk_ov002_02200840.cpp.
class MenuSlide : public MenuTween {
public:
    MenuSlide();
    virtual ~MenuSlide();
    /* 0x0c */ s32 offset;
    /* 0x10 */ s32 extent;
    /* 0x14 */ s32 edgeDistance;
    /* 0x18 */ u8 direction;
    void updateSlideOutHorizontal(s32 mode);
    void updateSlideOutVertical(s32 mode);
    BOOL stepSlideIn(s32 mode);
    void updateSlideInHorizontal(s32 mode);
    void updateSlideInVertical(s32 mode);
    s32 getOffsetX();
    s32 getOffsetY();
};

#endif
