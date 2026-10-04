#ifndef GFX_CAMERASETUP_H
#define GFX_CAMERASETUP_H

#include "types.h"

// 0x20-byte camera setup record (sCameraSavedSetup, static camera tables). Destructor in src/main/unk_0203a0cc.cpp.
// ov004/unk_ov004_0223f43c.cpp keeps its own view (vector members with constructors, needed for its __sinit).
struct CameraSetup {
    /* 0x00 */ s16 a, b;
    /* 0x04 */ s32 c0, c1, c2, c3, c4, c5, c6;
    ~CameraSetup();
};

#endif
