#ifndef NET_PLAYERNETSYNC_H
#define NET_PLAYERNETSYNC_H

#include "types.h"
#include "sys/ProcBase.h"

// Game process that syncs the remote players' state over comm (profile sPlayerNetSyncProfile, vtable 0x020e1cd8).
// Defined in src/main/unk_02095b1c.cpp.

class PlayerNetSync : public GameProc {
public:
    static GameProc *create();
    PlayerNetSync();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~PlayerNetSync();
};

#endif
