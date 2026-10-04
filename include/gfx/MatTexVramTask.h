#ifndef GFX_MATTEXVRAMTASK_H
#define GFX_MATTEXVRAMTASK_H

#include "types.h"
#include "gfx/VramTask.h"
#include "gfx/TexTransfer.h"

// VRAM task that uploads a material's texture and palette (0x28 bytes, vtable 0x020e45d8).
// Defined in src/main/unk_020b8594.cpp (0x020b8840..0x020b895c).
class MatTexVramTask : public VramTask {
public:
    /* 0x10 */ TexTransfer texXfer;
    /* 0x1c */ TexTransfer plttXfer;

    MatTexVramTask();
    virtual BOOL execute();
    BOOL request(void *a, u32 b, void *c, u32 d, u32 e);
    void prepare(void);
    void cancel(void);
    void clear(void);
};

#endif
