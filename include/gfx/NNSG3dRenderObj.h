#ifndef GFX_NNSG3DRENDEROBJ_H
#define GFX_NNSG3DRENDEROBJ_H

#include "types.h"
#include "gfx/Mtx33.h"
#include "gfx/VecFx32.h"

// NitroSystem G3D render object and joint animation result (NNSG3dRenderObj / NNSG3dJntAnmResult, partial, layouts
// of the SDK's g3d headers). Used by the model callbacks of ov003 CountdownSign and ov009 BuildingActor (ptrUser),
// the joint callbacks in src/main/unk_02053848.cpp and unk_02055c38.cpp (JointBlend) and HeldItemModels_OnJointCalcPre.

struct NNSG3dJntAnmResult {
    /* 0x00 */ u32 flag; // bit 1: rotation is identity, bit 2: translation is zero
    /* 0x04 */ s32 scale[9]; // scale, scaleEx0, scaleEx1
    /* 0x28 */ Mtx33 rot;
    /* 0x4c */ VecFx32 trans;
};

struct NNSG3dRenderObj {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ u32 ptrUser;
    /* 0x30 */ u8 *ptrUserSbc;
    /* 0x34 */ NNSG3dJntAnmResult *recJntAnm;
};

#endif
