#ifndef GFX_VRAMTASK_H
#define GFX_VRAMTASK_H

#include "types.h"
#include "sys/Unk_020b83b0.h"

// Abstract VRAM transfer task queued on the 2D VRAM queue (base of Bg/Tex/MatTex VramTask).
// Constructor in unk_020b8cd0.cpp, enqueueTex/dequeueTex in unk_020b8340.cpp, resetState in unk_020b8594.cpp.
class VramTask : public Unk_020b83b0 {
public:
    u8 state;
    u8 kind;
    u8 cost;

    VramTask();
    virtual BOOL execute() = 0;
    void dequeueTex(void);
    BOOL enqueueTex(void);
    void resetState(void);
};

#endif
