#ifndef MENU_TITLEBLINKTEXT_H
#define MENU_TITLEBLINKTEXT_H

#include "types.h"

// 0x20-byte blinking title-screen prompt (vtable 0x022935e8, object at +0xac of the title scene).
// Defined in src/ov147/unk_ov147_02292c10.cpp.
class TitleBlinkText {
public:
    TitleBlinkText();
    virtual ~TitleBlinkText();
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 variant;
    /* 0x0c */ s32 requestedVariant;
    /* 0x10 */ s32 alpha;
    /* 0x14 */ s32 holdCount;
    /* 0x18 */ s32 showDelay;
    /* 0x1c */ u8 fadingOut;

    void updateShown();
    void show();
    void updateDelay();
    void startDelay();
    void updateIdle();
    void setIdle();
    void clearBlend();
    void applyBlendAlpha();
    BOOL stepBlink();
    void resetBlink();
    BOOL isHidden();
    void requestHide();
    void requestVariant(s32 v);
    void update();
    void shutdown();
    void init();
};

#endif
