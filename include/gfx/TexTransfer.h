#ifndef GFX_TEXTRANSFER_H
#define GFX_TEXTRANSFER_H

#include "types.h"

// Three-word texture / texture-palette VRAM transfer command. Members defined in src/main/unk_020b8594.cpp
// (0x020b8c1c-0x020b8cbe).
struct TexTransfer {
    /* 0x00 */ u32 dstAddr;
    /* 0x04 */ u32 src;
    /* 0x08 */ u32 size;

    u8 getResCost(void);
    u8 getTexCost(void);
    void loadTexResource(void);
    void loadTexPltt(void);
    void loadTex(void);
    void set(u32 a, u32 b, u32 c);
    void clear(void);
};

#endif // GFX_TEXTRANSFER_H
