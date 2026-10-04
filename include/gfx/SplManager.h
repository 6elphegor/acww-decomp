#ifndef GFX_SPLMANAGER_H
#define GFX_SPLMANAGER_H

// Views of the SPL-style particle manager and of a resolved resource-unit record, used by the particle drawers /
// updaters (src/autoload_2/unk_020f92d4.cpp, unk_020fa0f4.cpp, unk_020fa39c.cpp, unk_020fa488.cpp). Declarations only.
#include "types.h"

struct TexEnt;
struct HdrP;
struct B4;
struct B8;
struct B10;
struct B12;
struct B14;
struct ItemU;

// manager, view used by the drawers (texture table at +0x20)
struct Pm {
    /* 0x00 */ void *(*alloc)(u32);
    /* 0x04 */ u8 p4[0x1c];
    /* 0x20 */ TexEnt *tex;
    /* 0x24 */ u16 h24;
    /* 0x26 */ u16 h26;
};

// manager, view used by the manager constructor
struct PmNew {
    /* 0x00 */ void *(*alloc)(u32);
    /* 0x04 */ u32 w4;
    /* 0x08 */ u32 w8;
    /* 0x0c */ u32 w12;
    /* 0x10 */ u32 w16;
    /* 0x14 */ u32 w20;
    /* 0x18 */ u32 w24;
    /* 0x1c */ u32 w28;
    /* 0x20 */ u32 w32;
    /* 0x24 */ u16 h36;
    /* 0x26 */ u16 h38;
    /* 0x28 */ u16 h40;
    /* 0x2a */ u16 h42;
    /* 0x2c */ u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad24 : 8;
    /* 0x30 */ u32 w48;
};

// resolved resource unit: pointers to the header and the optional animation blocks
struct RU {
    /* 0x00 */ HdrP *p0;
    /* 0x04 */ B4 *p4;
    /* 0x08 */ B8 *p8;
    /* 0x0c */ B12 *pc;
    /* 0x10 */ B10 *p10;
    /* 0x14 */ B14 *p14;
    /* 0x18 */ ItemU *p18;
    /* 0x1c */ u16 h1c;
};

#endif // GFX_SPLMANAGER_H
