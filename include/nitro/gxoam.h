#ifndef NITRO_GXOAM_H
#define NITRO_GXOAM_H

#include "types.h"

// NitroSDK GXOamAttr layout (attr0/1 word, attr2, affine parameter slot): the OAM shadow entries of main's OAM
// buffers and the OBJ entries the ov001 Wi-Fi utility gets from WfcObj_CreateSingle.
struct GXOamAttr {
    /* 0x0 */ u32 attr01;
    /* 0x4 */ u16 attr2;
    /* 0x6 */ u16 _3;
};

#endif
