#ifndef GFX_NNSG3DRS_H
#define GFX_NNSG3DRS_H

#include "types.h"
#include "gfx/NNSG3dRenderObj.h"

// View of the NitroSystem G3D render state NNSG3dRS passed to SBC command callbacks: current command pointer,
// render object, flags and the per-command callback vectors / timings (NNS_G3D_SBC_COMMAND_NUM = 0x20;
// NODEDESC = 6, MAT = 4). Used by the ov009 building model callbacks.
struct NNSG3dRS {
    /* 0x00 */ u8 *c;
    /* 0x04 */ NNSG3dRenderObj *pRenderObj;
    /* 0x08 */ u32 flag;
    /* 0x0c */ void *cbVecFunc[0x20];
    /* 0x8c */ u8 cbVecTiming[0x20];
};

#endif
