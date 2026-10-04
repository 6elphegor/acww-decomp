#ifndef NET_GSGPBUFFER_H
#define NET_GSGPBUFFER_H

#include "types.h"

// GP growable text buffer (cf. GameSpy GP SDK gpiBuffer.h GPIBuffer{buffer, size, len, pos}): GsGpBuf_* append, GsGp_SendBuffer /
// GsGp_RecvToBuffer (src/ov065/unk_ov065_0227d96c.cpp).

struct GsGpBuffer {
    /* 0x0 */ char *buffer;
    /* 0x4 */ s32 capacity;
    /* 0x8 */ s32 length;
    /* 0xc */ s32 pos;
};

#endif
