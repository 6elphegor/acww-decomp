#ifndef GFX_NNSG3DRESANMCOMMON_H
#define GFX_NNSG3DRESANMCOMMON_H

#include "types.h"

// NitroSystem G3D animation resource header (NNSG3dResAnmCommon: anmHeader, numFrame; layout of pokeheartgold
// res_struct.h, dummy_ not declared). Read for numFrame by the ov003 mailbox door (.bca) and the ov004 furniture
// animations (FtrAnimSet::getBca/getBma/getBva/getBta/getBtp results).
struct NNSG3dResAnmCommon {
    /* 0x0 */ u32 anmHeader;
    /* 0x4 */ u16 numFrame;
};

#endif
