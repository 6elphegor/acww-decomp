#ifndef NET_GSGPCALLBACKPAIR_H
#define NET_GSGPCALLBACKPAIR_H

#include "types.h"

// GP callback (cf. GameSpy GP SDK gpiCallback.h GPICallback) and a queued callback call (GsGpQueuedCallback), see GsGp_QueueCallback /
// GsGp_CallCallback (src/ov065/unk_ov065_0227df0c.cpp gpiCallback.c).

struct GsGpCallbackPair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
};

// One-member wrapper of a GsGpCallbackPair: the code copies callbacks through it (struct copy codegen).
struct Unk_ov065_0227e0e8_Wrap {
    /* 0x0 */ GsGpCallbackPair p;
};

struct GsGpQueuedCallback {
    /* 0x00 */ void (*unk_00)(void *, void *, s32);
    /* 0x04 */ s32 param;
    /* 0x08 */ void *arg;
    /* 0x0c */ s32 argType;
    /* 0x10 */ void *operationId;
    /* 0x14 */ GsGpQueuedCallback *next;
};

#endif
