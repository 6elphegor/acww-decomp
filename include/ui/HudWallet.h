#ifndef UI_HUDWALLET_H
#define UI_HUDWALLET_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"
#include "talk/MsgString25.h"

class TextLabel;

// HUD wallet (bells) panel (0x70 bytes, vtable 0x020e0eec), a by-value member of HudController.
// Defined in src/main/unk_02089fbc.cpp (0x0208a6c0..0x0208ac34).
class HudWallet : public UiWidget {
public:
    HudWallet();
    virtual ~HudWallet();
    virtual void draw();
    virtual void vfunc_0c();

    typedef void (HudWallet::*Fn)();

    void resetSlide();
    void updateSlide();
    void updateBaseY();
    void setRolling(BOOL v);
    void formatValue();
    BOOL rollTowardTarget();
    void syncValue();
    void freeLabel();
    void createLabel();
    void updateHiding();
    void enterHiding();
    void updateShown();
    void enterShown();
    void updateAppearing();
    void enterAppearing();
    void updateHidden();
    void enterHidden();
    void unfreezeValue();
    void freezeValue();
    BOOL isHidden();
    void hide();
    void show();
    void callDraw();
    void callUpdate();
    void release();
    void reset();

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ s32 baseY;
    /* 0x28 */ s32 slideY;
    /* 0x2c */ s32 slideTarget;
    /* 0x30 */ s32 slideSpeed;
    /* 0x34 */ s32 slideDelay;
    /* 0x38 */ TextLabel *label;
    /* 0x3c */ MsgString25 text;
    /* 0x68 */ s32 shownBells;
    /* 0x6c */ u8 showRequested;
    /* 0x6d */ u8 rolling;
    /* 0x6e */ u8 valueFrozen;
};

#endif
