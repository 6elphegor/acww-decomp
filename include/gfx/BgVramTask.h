#ifndef GFX_BGVRAMTASK_H
#define GFX_BGVRAMTASK_H

// VRAM tasks that upload BG chars/screens/palettes: BgVramTask (0x24 bytes, vtable 0x020e45f0) and BgVramTaskPair
// (two transfers, 0x38 bytes, vtable 0x020e4600). Defined in src/main/unk_020b8594.cpp / unk_020b8340.cpp.
#include "types.h"
#include "gfx/VramTask.h"
#include "gfx/BgTransfer.h"

class BgVramTask : public VramTask {
public:
    /* 0x10 */ BgTransfer xfer;

    BgVramTask();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestPaletteRange(u32 a, u8 b, u32 c, u8 d);
    BOOL requestPalette(u32 a, u8 b, u32 c);
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    BOOL requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void prepare(void);
    void cancel(void);
};

class BgVramTaskPair : public BgVramTask {
public:
    /* 0x24 */ BgTransfer xfer2;

    BgVramTaskPair();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

#endif
