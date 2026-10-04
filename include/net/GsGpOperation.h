#ifndef NET_GSGPOPERATION_H
#define NET_GSGPOPERATION_H

#include "types.h"
#include "net/GsGpCallbackPair.h"

// GP pending operation (cf. GameSpy GP SDK gpiOperation.h GPIOperation): connect, new profile, get info, search, "rn" reply
// (src/ov065/unk_ov065_02280740.cpp gpiOperation.c: GsGp_AddOperation, gpiProcessOperation).

struct GsGpOperation {
    /* 0x00 */ s32 type;
    /* 0x04 */ void *data;
    /* 0x08 */ s32 blocking;
    /* 0x0c */ Unk_ov065_0227e0e8_Wrap callback;
    /* 0x14 */ s32 state;
    /* 0x18 */ s32 id;
    /* 0x1c */ s32 result;
    /* 0x20 */ GsGpOperation *next;
};

#endif
