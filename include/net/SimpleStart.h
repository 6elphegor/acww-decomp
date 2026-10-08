#ifndef NET_SIMPLESTART_H
#define NET_SIMPLESTART_H

#include "types.h"

// The ov001 one-touch ("simple start") setup client (src/ov001/unk_ov001_02203b1c.cpp): SimpleStart_Start takes the
// caller's status callback and allocator (unk_ov001_0220d1d8.cpp); SimpleStart_GetStatus fills the status.
typedef struct SimpleStartStatus SimpleStartStatus;
struct SimpleStartStatus {
    s32 state;        // 1..5 running, 6 done, 7 failed / stopped
    s32 remainingMs;  // -1: no deadline
    s32 result;
};

typedef void (*SimpleStartStatusFunc)(SimpleStartStatus *status);
typedef void *(*SimpleStartAllocFunc)(u32 size);
typedef void (*SimpleStartFreeFunc)(void *p);
// the wireless connection manager's notification: a message (pushed to the client's queue) and an argument
typedef void (*SimpleStartWcmNotifyFunc)(u32 msg, u32 arg);

#endif
