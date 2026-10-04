#ifndef SYS_KEYREPEAT_H
#define SYS_KEYREPEAT_H

#include "types.h"

// Menu key-repeat object (at +0x50 of MenuProc). KeyRepeat is the vptr-only class (vtable 0x022044d4);
// KeyRepeatView is the view of the same object used by the repeat logic. Both defined in
// src/ov002/unk_ov002_02200840.cpp.
class KeyRepeat {
public:
    KeyRepeat();
    virtual ~KeyRepeat();
};

class KeyRepeatView {
public:
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s16 delay;
    /* 0x06 */ s16 minInterval;
    /* 0x08 */ s16 intervalStep;
    /* 0x0a */ s16 interval;
    /* 0x0c */ s16 countdown;
    /* 0x0e */ u8 heldKeys;
    /* 0x0f */ u8 pendingKeys;
    /* 0x10 */ u8 takenKeys;
    void init(s32 a, s32 b, s32 c);
    BOOL isRight();
    BOOL isLeft();
    BOOL isDown();
    BOOL isUp();
    u8 take();
    void update();
};

#endif
