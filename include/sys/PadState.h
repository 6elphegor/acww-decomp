#ifndef SYS_PADSTATE_H
#define SYS_PADSTATE_H

// The key state read once per frame (src/autoload_2/unk_020e8208.cpp: gPad): held keys, keys pressed this frame,
// direction of the d-pad as an angle
#include "types.h"

struct PadState {
    /* 0x0 */ u16 cur;
    /* 0x2 */ u16 trig;
    /* 0x4 */ s16 dir;
}; // size 0x6

extern PadState gPad;

#endif // SYS_PADSTATE_H
