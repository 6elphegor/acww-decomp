#ifndef GFX_ANIMFRAMECTRL_H
#define GFX_ANIMFRAMECTRL_H

#include "types.h"

// 0x18-byte animation frame counter (vtable 0x020dbe74); base of AnimModel and member of many actors.
// Defined in src/main/unk_02055c38.cpp (the constructor is inline).
class AnimFrameCtrl {
public:
    /* 0x04 */ u32 numFrames;
    /* 0x08 */ s32 curFrame;
    /* 0x0c */ s32 prevFrame;
    /* 0x10 */ s32 frameStep;
    /* 0x14 */ u8 playMode;
    inline AnimFrameCtrl() : curFrame(0), prevFrame(0), frameStep(0x1000) {}
    virtual ~AnimFrameCtrl();
    BOOL isFinished();
    void setup(s32 frames, u8 mode, s32 speed, u16 last);
    void step();
    BOOL hasPassedFrame(s32 x);
};

#endif
