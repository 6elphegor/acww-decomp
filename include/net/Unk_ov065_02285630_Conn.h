#ifndef NET_UNK_OV065_02285630_CONN_H
#define NET_UNK_OV065_02285630_CONN_H

#include "types.h"
#include "net/Unk_ov065_02285630_Item.h"

// GT2 connection (remote address, state, incoming buffer, message queues, ack state)
// (src/ov065/unk_ov065_02285778.cpp and src/ov065/unk_ov065_02283f34.cpp, namespace N02285630 in both).

struct Unk_ov065_02285630_Conn {
    /* 0x00 */ s32 remoteIp;
    /* 0x04 */ u16 remotePort;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ Unk_ov065_02285630_Peer *socket;
    /* 0x0c */ s32 state;
    /* 0x10 */ u8 pad_10[0x24];
    /* 0x34 */ s32 pingCallback;
    /* 0x38 */ void *initialMessage;
    /* 0x3c */ s32 initialMessageLen;
    /* 0x40 */ u8 pad_40[4];
    /* 0x44 */ Unk_ov065_02285630_Buf incomingBuffer;
    /* 0x4c */ s32 incomingBufferLen;
    /* 0x50 */ u8 pad_50[0xc];
    /* 0x5c */ void *incomingMessages;
    /* 0x60 */ void *outgoingMessages;
    /* 0x64 */ u8 pad_64[2];
    /* 0x66 */ u16 expectedSerialNumber;
    /* 0x68 */ u8 response[0x24];
    /* 0x8c */ s32 challengeTime;
    /* 0x90 */ s32 pendingAck;
    /* 0x94 */ s32 pendingAckTime;
};

#endif
