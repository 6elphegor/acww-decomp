#ifndef FIELD_GROUNDSOUNDSRC_H
#define FIELD_GROUNDSOUNDSRC_H

#include "types.h"
#include "gfx/VecFx32.h"

// The ambient sound source nearest to a position (river, sea, waterfall ... background objects of the 3x3 blocks around
// it): FieldGround_FindSoundSrc and its helpers (ov003, unk_ov003_02217908.cpp); FieldGround::updateAmbientSe keeps
// one on the stack.
class GroundSoundSrc {
public:
    /* 0x00 */ u8 found;
    /* 0x04 */ VecFx32 pos;
    /* 0x10 */ s32 distance;
    /* 0x14 */ s32 kind;
};

#endif
