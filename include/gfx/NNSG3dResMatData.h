#ifndef GFX_NNSG3DRESMATDATA_H
#define GFX_NNSG3DRESMATDATA_H

#include "types.h"

// NitroSystem G3D material record (NNSG3dResMatData, first 0x14 bytes: itemTag/size, DIF_AMB, SPE_EMI, POLYGON_ATTR and
// its mask). sCharaShadowMatData (src/main/unk_020abbcc.cpp) points at material 0 of chara_shadow.nsbmd.
struct NNSG3dResMatData {
    /* 0x00 */ u32 unk_00, diffAmb, specEmi, polyAttr, polyAttrMask;
};

#endif
