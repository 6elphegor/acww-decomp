#ifndef UI_HUDPROC_H
#define UI_HUDPROC_H

// Field HUD task (vtable 0x020e0f80, created by the factory HudProc_Create). Defined in src/main/unk_02089fbc.cpp.
#include "types.h"
#include "sys/ProcBase.h"

class HudProc : public GameProc {
public:
    HudProc();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~HudProc();
};

#endif // UI_HUDPROC_H
