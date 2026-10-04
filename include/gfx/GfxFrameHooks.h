#ifndef GFX_GFXFRAMEHOOKS_H
#define GFX_GFXFRAMEHOOKS_H

#include "types.h"

// Per-scene graphics frame hooks called through gGfxFrameHooks by Gfx_PreTaskUpdate / Gfx_PostTaskUpdate /
// Gfx_VBlankFlush (src/main/unk_020536dc.cpp, which also holds the empty onPreTask / onPostTask bodies,
// GfxFrameHooks_PreTaskStub / _PostTaskStub). The field scene's instance sFieldGfxFrameHooks and onVBlank are in
// src/main/unk_020b4828.cpp (vtable 0x020e41c8).
class GfxFrameHooks {
public:
    virtual inline void onPreTask();
    virtual inline void onPostTask();
    virtual void onVBlank();
};

#endif
