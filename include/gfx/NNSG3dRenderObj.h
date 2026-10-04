#ifndef GFX_NNSG3DRENDEROBJ_H
#define GFX_NNSG3DRENDEROBJ_H

#include "types.h"

// View of the NitroSystem G3D render object (NNSG3dRenderObj): only the user pointer at 0x2c is used here
// (model callbacks of ov003 CountdownSign and ov009 BuildingActor).
struct NNSG3dRenderObj {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ u32 ptrUser;
};

#endif
