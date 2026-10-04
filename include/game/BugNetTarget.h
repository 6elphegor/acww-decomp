#ifndef GAME_BUGNETTARGET_H
#define GAME_BUGNETTARGET_H

// Touch-pickable bug-net target (0x28 bytes): a TouchPickSphere linked into the net target list. Defined in
// src/main/unk_02087e70.cpp, which keeps its own declaration on a raw TouchPickSphere view (explicit C1/D2 calls).
#include "types.h"
#include "game/TouchPickSphere.h"

class BugNetTarget : public TouchPickSphere {
public:
    BugNetTarget();
    ~BugNetTarget();
    void submit(Vec3 *a, s32 b, Vec3 *c, u8 d);
    /* 0x1c */ BugNetTarget *nextTarget;
    /* 0x20 */ u8 isHit;
    /* 0x24 */ s32 hitRadius;
};

#endif
