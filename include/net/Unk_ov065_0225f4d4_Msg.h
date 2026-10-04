#ifndef NET_UNK_OV065_0225F4D4_MSG_H
#define NET_UNK_OV065_0225F4D4_MSG_H

#include "types.h"

// Socket command message (handler, socket, reply queue, open parameters), used by
// src/ov065/unk_ov065_0225f5c8.cpp and unk_ov065_0225f378.cpp.

struct Unk_ov065_0225f378_Obj;

struct Unk_ov065_0225f4d4_Msg {
    /* 0x00 */ s32 (*unk_00)(Unk_ov065_0225f4d4_Msg *);
    /* 0x04 */ Unk_ov065_0225f378_Obj *sock;
    /* 0x08 */ void *replyQueue;
    /* 0x0c */ s8 sockType;
    /* 0x0d */ s8 blocking;
    /* 0x0e */ u8 unk_0e[2];
    /* 0x10 */ u16 localPort;
    /* 0x14 */ u32 *outPort;
    /* 0x18 */ u32 *outAddr;
};

#endif
