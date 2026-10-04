#ifndef TALK_MSGUIPROC_H
#define TALK_MSGUIPROC_H

#include "types.h"
#include "sys/ProcBase.h"

// Proc that drives the message UI (shows / hides the message object plane; vtable 0x020e2b68).
// Defined in src/main/unk_020a8ba0.cpp (0x020a8ba0..0x020a8c84).
class MsgUiProc : public GameProc {
public:
    MsgUiProc();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~MsgUiProc();
};

#endif
