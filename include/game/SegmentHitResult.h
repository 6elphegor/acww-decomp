#ifndef GAME_SEGMENTHITRESULT_H
#define GAME_SEGMENTHITRESULT_H

#include "types.h"
#include "gfx/VecFx32.h"

// Result of Collision_TestSegment (main, unk_0202fa70.cpp): a CollisionTagX (built / torn down by the explicit
// CollisionTag_Construct / CollisionTag_Destruct calls) and the hit data. Users: Ground_GetHeightAt (main) and
// PlayerActor_BugNetSwingCheckGround (ov003).
struct SegmentHitResult {
    /* 0x00 */ u8 attr;
    /* 0x04 */ u32 callback;
    /* 0x08 */ VecFx32 hitNormal;
};

#endif
