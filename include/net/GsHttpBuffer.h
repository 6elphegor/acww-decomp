#ifndef NET_GSHTTPBUFFER_H
#define NET_GSHTTPBUFFER_H

#include "types.h"

// GameSpy HTTP buffer (GsHttpBuf_*, src/ov065/unk_ov065_0227931c.cpp, src/ov065/unk_ov065_022789fc.cpp); four of them
// live in GsHttpConnection (send, receive, raw receive, body).

struct GsHttpConnection;

struct GsHttpBuffer {
    /* 0x00 */ GsHttpConnection *connection;
    /* 0x04 */ char *data;
    /* 0x08 */ s32 capacity;
    /* 0x0c */ s32 length;
    /* 0x10 */ s32 readPos;
    /* 0x14 */ s32 growBy;
    /* 0x18 */ s32 isFixed;
    /* 0x1c */ s32 keepData;
    /* 0x20 */ s32 isEncrypted;
};

#endif
