#ifndef GFX_BGTRANSFER_H
#define GFX_BGTRANSFER_H

#include "types.h"

// Five-word BG VRAM transfer command (chars / screen / palette / palette range; the fields depend on the mode it
// was set up for). Members defined in src/main/unk_020b8594.cpp (0x020b8b44-0x020b8c1c).
struct BgTransfer {
    /* 0x00 */ u32 buf;
    /* 0x04 */ u8 layer;
    /* 0x08 */ u32 loadArg0;
    /* 0x0c */ u32 loadArg1;
    /* 0x10 */ u32 loadArg2;

    void loadPaletteRange(void);
    void setPaletteRange(u32 a, u8 b, u32 c, u8 d);
    void loadPalette(void);
    void setPalette(u32 a, u8 b, u32 c);
    void loadScreen(void);
    void setScreen(u32 a, u8 b, u32 c, u32 d);
    u8 getCharCost(void);
    void loadChars(void);
    void setChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void clear(void);
};

#endif // GFX_BGTRANSFER_H
