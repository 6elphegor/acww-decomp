#ifndef GFX_UNK_OV003_02215A04_OBJ_H
#define GFX_UNK_OV003_02215A04_OBJ_H

#include "types.h"
#include "gfx/NNSG3dRenderObj.h"

// Views of the G3D render state passed to CountdownSign_MaterialCallback (ov003 0x02215a04, src/ov003/unk_ov003_022150ec.cpp).

struct Unk_ov003_02215a04_Ctx {
    /* 0x00 */ u8 cmd[2];
    /* 0x02 */ u8 pad_02[2];
};

struct Unk_ov003_02215a04_Obj {
    /* 0x00 */ Unk_ov003_02215a04_Ctx *c;
    /* 0x04 */ NNSG3dRenderObj *pRenderObj;
    /* 0x08 */ u8 pad_08[0x14];
    /* 0x1c */ void (*cbVecFuncMat)(void *);
    /* 0x20 */ u8 pad_20[0x90 - 0x20];
    /* 0x90 */ u8 cbVecTimingMat;
    /* 0x91 */ u8 pad_91[0xb0 - 0x91];
    /* 0xb0 */ NNSG3dMatAnmResult *pMatAnmResult;
};

#endif
