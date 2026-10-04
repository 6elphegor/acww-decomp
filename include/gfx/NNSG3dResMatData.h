#ifndef GFX_NNSG3DRESMATDATA_H
#define GFX_NNSG3DRESMATDATA_H

#include "types.h"

// NitroSystem G3D material record (NNSG3dResMatData: itemTag/size, DIF_AMB, SPE_EMI, POLYGON_ATTR and its mask, TEXIMAGE_PARAM
// and its mask, palette base, flags, original texture size and magnification; layout as ResMatData of the matched ITCM G3D
// code, src/itcm/unk_01ffa3cc.c). sCharaShadowMatData (src/main/unk_020abbcc.cpp) points at material 0 of
// chara_shadow.nsbmd; RoomShell (ov004) reads the light bits of polyAttr and the texture size of the wall/floor material.
struct NNSG3dResMatData {
    /* 0x00 */ u16 itemTag, size;
    /* 0x04 */ u32 diffAmb, specEmi, polyAttr, polyAttrMask;
    /* 0x14 */ u32 texImageParam, texImageParamMask;
    /* 0x1c */ u16 texPlttBase, flag;
    /* 0x20 */ u16 origWidth, origHeight;
    /* 0x24 */ s32 magW, magH;
};

#endif
