#ifndef NET_UNK_OV065_0227DC48_CONN_H
#define NET_UNK_OV065_0227DC48_CONN_H

#include "types.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"

// GameSpy connection view: socket, output buffer and message queue (src/ov065/unk_ov065_0227df0c.cpp,
// unk_ov065_0227d96c.cpp, unk_ov065_0227cd34.cpp (namespace Nf), unk_ov065_0227e160.cpp (namespace Na)).

struct Unk_ov065_0227dc48_Conn {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ s32 sock;
    /* 0x0c */ u8 pad_0c[0x28 - 0xc];
    /* 0x28 */ Unk_ov065_0227d8e0_Buf outputBuffer;
    /* 0x38 */ s32 messageQueue;
};

#endif
