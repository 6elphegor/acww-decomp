#ifndef NET_GSGPPEER_H
#define NET_GSGPPEER_H

#include "types.h"
#include "net/GsGpBuffer.h"

// GP peer connection (cf. GameSpy GP SDK gpiPeer.h GPIPeer, older TCP version with a socket instead of ip/port) and its queued
// message (GsGpPeerMessage) (src/ov065/unk_ov065_02280c08.cpp gpiPeer.c, unk_ov065_0227d96c.cpp, unk_ov065_0228176c.cpp).

struct GsArray;

struct GsGpPeer {
    /* 0x00 */ s32 peerState;
    /* 0x04 */ s32 isOutgoing;
    /* 0x08 */ s32 sock;
    /* 0x0c */ s32 profileId;
    /* 0x10 */ s32 expireTime;
    /* 0x14 */ s32 nackCount;
    /* 0x18 */ GsGpBuffer inputBuffer;
    /* 0x28 */ GsGpBuffer outputBuffer;
    /* 0x38 */ GsArray *messageQueue;
    /* 0x3c */ GsGpPeer *next;
};

struct GsGpPeerMessage {
    /* 0x00 */ GsGpBuffer buffer;
    /* 0x10 */ s32 msgType;
    /* 0x14 */ s32 msgOffset;
};

#endif
