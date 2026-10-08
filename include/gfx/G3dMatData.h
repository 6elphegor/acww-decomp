#ifndef GFX_G3DMATDATA_H
#define GFX_G3DMATDATA_H

#include "types.h"

// A G3D material record of a model resource (the bytes of an NNSG3dResMatData, gfx/NNSG3dResMatData.h), with the
// accessors for its texture: image size, image and palette VRAM offsets (TEXIMAGE_PARAM / palette base).
// Methods defined in src/main/unk_02055c38.cpp.
class G3dMatData {
public:
    u32 getPlttAddr(void);
    u32 getTexAddr(void);
    u32 getTexSize(void);

    /* 0x00 */ u32 unk_00[5];
    /* 0x14 */ u32 texImageParam;
    /* 0x18 */ u32 texImageParamMask;
    /* 0x1c */ u16 texPlttBase;
};

#endif
