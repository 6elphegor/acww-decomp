#ifndef GFX_TEXVRAMTASK_H
#define GFX_TEXVRAMTASK_H

#include "types.h"
#include "gfx/VramTask.h"
#include "gfx/TexTransfer.h"

// 0x1c-byte texture / palette VRAM upload task (vtable 0x020e45e4). Defined in src/main/unk_020b8594.cpp
// (0x020b8984..0x020b8b40); no destructor.
class TexVramTask : public VramTask {
public:
    /* 0x10 */ TexTransfer xfer;

    TexVramTask();
    virtual BOOL execute();
    BOOL requestMatTex(void *a, u32 b, void *c);
    void cancel(void);
    void prepare(void);
    BOOL requestTexResource(u32 *a, u8 b);
    BOOL requestPltt(void *src, u32 dst, u32 size, u8 prio);
    BOOL requestTex(void *src, u32 dst, u32 size, u8 prio);
    void clear(void);
};

#endif
