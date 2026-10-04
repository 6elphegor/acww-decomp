#ifndef TALK_TALKREQUESTQUEUE_H
#define TALK_TALKREQUESTQUEUE_H

#include "types.h"
#include "sys/ProcBase.h"

// Game process that runs the queued talk requests (vtable 0x020d9618, TalkRequestQueue_Create). Defined in
// src/main/unk_0203d4d8.cpp; the destructor is implicit there (D1 is at the lower address, at the start of the unit).

class TalkRequestQueue : public GameProc {
public:
    TalkRequestQueue() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL vfunc_20(u32 b);
    virtual BOOL onDraw();
};

#endif
