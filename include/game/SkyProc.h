#ifndef GAME_SKYPROC_H
#define GAME_SKYPROC_H

#include "types.h"
#include "sys/ProcBase.h"
#include "snd/RainSndChannel.h"

// Sky / weather process (profile sSkyProcProfile, vtable 0x020e5660) with its environment sound channel. Defined in
// src/main/unk_020b8d9c.cpp; constructor and destructor are implicit (emitted there by SkyProc_Create).
class SkyProc : public GameProc {
public:
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x50 */ RainSndChannel envSndChannel;
};

#endif
