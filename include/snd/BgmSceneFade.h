#ifndef SND_BGMSCENEFADE_H
#define SND_BGMSCENEFADE_H

// Scene-change BGM fade controller (vtable 0x020d8e0c). Methods at 0x02035284..0x0203569c
// (src/main/unk_02034438.cpp).
#include "types.h"

class BgmSceneFade {
public:
    BgmSceneFade(u32 owner);
    virtual ~BgmSceneFade();
    void update();
    BOOL hasExitSilence();
    BOOL isKeepingBgm();
    void setKeepBgm();
    void setFadeDelay(s32 i);
    void prepareEventReturn(s32 a, s32 b);
    void prepareEventWarp(s32 a, s32 b);
    void reset();
    void init();
    void onFadeIn();
    void onFadeOut();

    /* 0x04 */ u32 manager;
    /* 0x08 */ u8 keepForWarp;
    /* 0x09 */ u8 sameSceneBgm;
    /* 0x0a */ u8 keepRequested;
    /* 0x0b */ u8 exitSilenceState;
    /* 0x0c */ s32 fadeDelay;
    /* 0x10 */ s32 releaseTimer;
};

#endif
