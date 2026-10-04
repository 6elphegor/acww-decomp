#ifndef GFX_FXMTX43_H
#define GFX_FXMTX43_H

#include "types.h"

// 0x30-byte 4x3 fixed-point matrix object; constructor in itcm (0x01ffb7cc). Base of the camera Unk_020d93b8.
class FxMtx43 {
public:
    FxMtx43();
    /* 0x00 */ u8 pad_00[0x30];
};

#endif
