#ifndef NET_GSTRANSPORT_H
#define NET_GSTRANSPORT_H

#include "types.h"

// GameSpy reliable UDP transport (gt2-style, ov065 GsTransport_*): a socket owns a hash of connections; packets
// start with fe fe, reliable types 0-7 (data, challenge/response handshake, accept, reject, close, keep-alive)
// and control types 0x64-0x68 (ack, nack, ping "time", pong, closed). Used by unk_ov065_02283720.cpp,
// unk_ov065_02283f34.cpp and unk_ov065_02285778.cpp.

struct GsTransportSocket;
struct GsTransportConn;

// Growable byte buffer (GsTransport_Buf*): the connections' incoming and outgoing buffers.
struct GsTransportBuffer {
    /* 0x00 */ u8 *data;
    /* 0x04 */ s32 size;
    /* 0x08 */ s32 len;
};

// Sent reliable message kept for resending until acked (element of GsTransportConn::outgoingMessages).
struct GsTransportOutMsg {
    /* 0x00 */ s32 offset;
    /* 0x04 */ s32 len;
    /* 0x08 */ u16 serialNumber;
    /* 0x0a */ u16 pad_0a;
    /* 0x0c */ s32 lastSendTime;
};

// Reliable message received out of order (element of GsTransportConn::incomingMessages, sorted by serial).
struct GsTransportInMsg {
    /* 0x00 */ s32 offset;
    /* 0x04 */ s32 len;
    /* 0x08 */ s32 type;
    /* 0x0c */ u16 serialNumber;
    /* 0x0e */ u16 pad_0e;
};

// Incoming connection request: (socket, conn, ip, port, latency, message, len).
typedef s32 (*GsTransportConnectAttemptCallback)(GsTransportSocket *, GsTransportConn *, s32, s32, s32, s32, s32);
typedef s32 (*GsTransportSocketErrorCallback)(GsTransportSocket *);
// Raw send/receive dump: (socket, conn, ip, port, reset, data, len).
typedef s32 (*GsTransportDumpCallback)(GsTransportSocket *, GsTransportConn *, s32, s32, s32, s32, s32);
// Packet from an unknown sender: (socket, ip, port, data, len) -> handled.
typedef s32 (*GsTransportUnrecognizedMessageCallback)(GsTransportSocket *, s32, s32, s32, s32);

struct GsTransportSocket {
    /* 0x00 */ s32 sock;
    /* 0x04 */ u32 localIp;
    /* 0x08 */ u16 localPort;
    /* 0x0a */ u8 pad_0a[2];
    /* 0x0c */ void *connections;
    /* 0x10 */ void *closedConnections;
    /* 0x14 */ s32 freePending;
    /* 0x18 */ s32 hasError;
    /* 0x1c */ s32 callbackLevel;
    /* 0x20 */ GsTransportConnectAttemptCallback connectAttemptCallback;
    /* 0x24 */ GsTransportSocketErrorCallback socketErrorCallback;
    /* 0x28 */ GsTransportDumpCallback sendDumpCallback;
    /* 0x2c */ GsTransportDumpCallback receiveDumpCallback;
    /* 0x30 */ GsTransportUnrecognizedMessageCallback unrecognizedMessageCallback;
    /* 0x34 */ u8 pad_34[4];
    /* 0x38 */ u32 outgoingBufferSize;
    /* 0x3c */ u32 incomingBufferSize;
    /* 0x40 */ u8 pad_40[4];
};

// The four connection callbacks, copied as one block over GsTransportConn::connectedCallback by
// GsTransport_StartConnect/DoAccept.
struct GsTransportConnCallbacks {
    /* 0x00 */ s32 v[4];
};

typedef s32 (*GsTransportFilterCallback)(GsTransportConn *, s32, u32, u32, u32);

// 32-character challenge made by GsTransport_MakeChallenge (StartConnect's local).
struct GsTransportChallengeBuf {
    /* 0x00 */ u32 v[9];
};

struct GsTransportConn {
    /* 0x00 */ u32 remoteIp;
    /* 0x04 */ u16 remotePort;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ GsTransportSocket *socket;
    /* 0x0c */ s32 state;
    /* 0x10 */ s32 initiated;
    /* 0x14 */ s32 freeAtAcceptReject;
    /* 0x18 */ s32 connectResult;
    /* 0x1c */ u32 startTime;
    /* 0x20 */ u32 connectTimeout;
    /* 0x24 */ s32 callbackLevel;
    /* 0x28 */ s32 (*connectedCallback)(GsTransportConn *, s32, s32, s32);
    /* 0x2c */ s32 (*receivedCallback)(GsTransportConn *, s32, s32, s32);
    /* 0x30 */ s32 (*closedCallback)(GsTransportConn *, s32);
    /* 0x34 */ s32 (*pingCallback)(GsTransportConn *, s32);
    /* 0x38 */ void *initialMessage;
    /* 0x3c */ s32 initialMessageLen;
    /* 0x40 */ s32 userData;
    /* 0x44 */ GsTransportBuffer incomingBuffer;
    /* 0x50 */ GsTransportBuffer outgoingBuffer;
    /* 0x5c */ void *incomingMessages;
    /* 0x60 */ void *outgoingMessages;
    /* 0x64 */ u16 serialNumber;
    /* 0x66 */ u16 expectedSerialNumber;
    /* 0x68 */ u8 response[0x20];
    /* 0x88 */ u32 lastSendTime;
    /* 0x8c */ s32 challengeTime;
    /* 0x90 */ s32 pendingAck;
    /* 0x94 */ u32 pendingAckTime;
    /* 0x98 */ void *sendFilters;
    /* 0x9c */ void *receiveFilters;
};

#endif
