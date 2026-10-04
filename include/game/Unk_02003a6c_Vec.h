#ifndef GAME_UNK_02003A6C_VEC_H
#define GAME_UNK_02003A6C_VEC_H

#include "types.h"

// s32 position vector (gCameraEye, sound emitter positions).
// Used by the SndEnvChannel / SndSeEmitter call wrappers in src/main/unk_020039ec.cpp.

struct Unk_02003a6c_Vec {
    /* 0x0 */ s32 x, y, z;
};

#endif
