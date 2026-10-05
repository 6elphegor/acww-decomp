#ifndef NET_GPICALLBACK_H
#define NET_GPICALLBACK_H

#include "types.h"

// GP callback (cf. GameSpy GP SDK gpiCallback.h GPICallback) and a queued callback call (GPICallbackData), see gpiAddCallback /
// gpiCallCallback (src/ov065/unk_ov065_0227df0c.cpp gpiCallback.c).

struct GPICallback {
    /* 0x0 */ s32 callback;
    /* 0x4 */ s32 param;
};

// One-member wrapper of a GPICallback (not an SDK type): the code copies callbacks through it, and a plain GPICallback
// copy allocates registers differently (checked in gpiProcessRecvBuddyMessage, gpiProcessRegisterUniqueNick).
struct GPICallbackCopy {
    /* 0x0 */ GPICallback p;
};

// GPICallbackData: the SDK has a GPICallback member at 0x00; here it is spelled out as callback / param.
struct GPICallbackData {
    /* 0x00 */ void (*callback)(void *, void *, s32);
    /* 0x04 */ s32 param;
    /* 0x08 */ void *arg;
    /* 0x0c */ s32 type;
    /* 0x10 */ void *operationID;
    /* 0x14 */ GPICallbackData *pnext;
};

#endif
