#ifndef GFX_NNSG3DRS_H
#define GFX_NNSG3DRS_H

#include "types.h"
#include "gfx/NNSG3dRenderObj.h"

// View of the NitroSystem G3D render state NNSG3dRS passed to SBC command callbacks: current command pointer,
// render object, flags and the per-command callback vectors / timings (NNS_G3D_SBC_COMMAND_NUM = 0x20;
// NODEDESC = 6, MAT = 4), current node/material and the joint animation result (0xb4). Used by the ov009 building
// model callbacks and JointBlend::capturePose/blendPose (src/main/unk_02055c38.cpp).
struct NNSG3dRS {
    /* 0x00 */ u8 *c;
    /* 0x04 */ NNSG3dRenderObj *pRenderObj;
    /* 0x08 */ u32 flag;
    /* 0x0c */ void *cbVecFunc[0x20];
    /* 0x8c */ u8 cbVecTiming[0x20];
    /* 0xac */ u8 currentNode;
    /* 0xad */ u8 currentMat;
    /* 0xae */ u8 currentNodeDesc;
    /* 0xaf */ u8 dummy_;
    /* 0xb0 */ void *pMatAnmResult;
    /* 0xb4 */ NNSG3dJntAnmResult *pJntAnmResult;
};

#endif
