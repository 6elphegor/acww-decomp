#ifndef GFX_ABALLOBJGFX_H
#define GFX_ABALLOBJGFX_H

#include "types.h"

// Shared OBJ character/palette graphics loaded from a file into two heap buffers, one global instance sAbAllObjGfx.
// Members and sAbAllObjGfx defined in src/main/unk_020029e8.cpp (0x020029e8-0x02002b1c).
class AbAllObjGfx {
public:
    AbAllObjGfx();
    ~AbAllObjGfx();
    void uploadChars();
    void uploadPalette();
    void freeChars();
    void freePalette();
    BOOL loadChars();
    BOOL loadPalette();

    /* 0x00 */ u8 unk_00[0x48];
    /* 0x48 */ void *paletteBuf;
    /* 0x4c */ void *charBuf;
};

#endif // GFX_ABALLOBJGFX_H
