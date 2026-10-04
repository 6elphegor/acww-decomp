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

// Material animation result (NNSG3dMatAnmResult, 0x38 bytes; layout as in the matched ITCM G3D code, MatAnm in
// src/itcm/unk_01ffa3cc.c). RoomShell::onMatCallback (ov004) rewrites the texture fields of the wall/floor material.
struct NNSG3dMatAnmResult {
    /* 0x00 */ u32 flag;
    /* 0x04 */ u32 prmMatColor0;
    /* 0x08 */ u32 prmMatColor1;
    /* 0x0c */ u32 prmPolygonAttr;
    /* 0x10 */ u32 prmTexImage;
    /* 0x14 */ u32 prmTexPltt;
    /* 0x18 */ s32 scaleS;
    /* 0x1c */ s32 scaleT;
    /* 0x20 */ s16 sinR;
    /* 0x22 */ s16 cosR;
    /* 0x24 */ s32 transS;
    /* 0x28 */ s32 transT;
    /* 0x2c */ u16 origWidth;
    /* 0x2e */ u16 origHeight;
    /* 0x30 */ s32 magW;
    /* 0x34 */ s32 magH;
};

struct NNSG3dRenderObj {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ u32 ptrUser;
    /* 0x30 */ u8 *ptrUserSbc;
    /* 0x34 */ NNSG3dJntAnmResult *recJntAnm;
};

#endif
