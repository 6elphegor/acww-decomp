#ifndef NET_GT2MAIN_H
#define NET_GT2MAIN_H

#include "types.h"

// GameSpy gt2 (reliable UDP transport, gt2Main.h): a GTI2Socket owns a hash of GTI2Connections; packets start
// with fe fe (GTI2_MAGIC_STRING), reliable types 0-7 (data, challenge/response handshake, accept, reject, close,
// keep-alive) and control types 0x64-0x68 (ack, nack, ping "time", pong, closed). Used by unk_ov065_02283720.cpp,
// unk_ov065_02283f34.cpp and unk_ov065_02285778.cpp.

struct GTI2Socket;
struct GTI2Connection;

// Growable byte buffer (gti2AllocateBuffer, gti2BufferWrite*): the connections' incoming and outgoing buffers.
struct GTI2Buffer {
    /* 0x00 */ u8 *buffer;
    /* 0x04 */ s32 size;
    /* 0x08 */ s32 len;
};

// Sent reliable message kept for resending until acked (element of GTI2Connection::outgoingMessages).
struct GTI2OutgoingBufferMessage {
    /* 0x00 */ s32 start;
    /* 0x04 */ s32 len;
    /* 0x08 */ u16 serialNumber;
    /* 0x0a */ u16 pad_0a;
    /* 0x0c */ s32 lastSend;
};

// Reliable message received out of order (element of GTI2Connection::incomingMessages, sorted by serial).
struct GTI2IncomingBufferMessage {
    /* 0x00 */ s32 start;
    /* 0x04 */ s32 len;
    /* 0x08 */ s32 type;
    /* 0x0c */ u16 serialNumber;
    /* 0x0e */ u16 pad_0e;
};

// Incoming connection request: (socket, conn, ip, port, latency, message, len).
typedef s32 (*gt2ConnectAttemptCallback)(GTI2Socket *, GTI2Connection *, s32, s32, s32, s32, s32);
typedef s32 (*gt2SocketErrorCallback)(GTI2Socket *);
// Raw send/receive dump: (socket, conn, ip, port, reset, data, len).
typedef s32 (*gt2DumpCallback)(GTI2Socket *, GTI2Connection *, s32, s32, s32, s32, s32);
// Packet from an unknown sender: (socket, ip, port, data, len) -> handled.
typedef s32 (*gt2UnrecognizedMessageCallback)(GTI2Socket *, s32, s32, s32, s32);

struct GTI2Socket {
    /* 0x00 */ s32 socket;
    /* 0x04 */ u32 ip;
    /* 0x08 */ u16 port;
    /* 0x0a */ u8 pad_0a[2];
    /* 0x0c */ void *connections;
    /* 0x10 */ void *closedConnections;
    /* 0x14 */ s32 close;
    /* 0x18 */ s32 error;
    /* 0x1c */ s32 callbackLevel;
    /* 0x20 */ gt2ConnectAttemptCallback connectAttemptCallback;
    /* 0x24 */ gt2SocketErrorCallback socketErrorCallback;
    /* 0x28 */ gt2DumpCallback sendDumpCallback;
    /* 0x2c */ gt2DumpCallback receiveDumpCallback;
    /* 0x30 */ gt2UnrecognizedMessageCallback unrecognizedMessageCallback;
    /* 0x34 */ u8 pad_34[4];
    /* 0x38 */ u32 outgoingBufferSize;
    /* 0x3c */ u32 incomingBufferSize;
    /* 0x40 */ u8 pad_40[4];
};

// The four connection callbacks, copied as one block over GTI2Connection::connectedCallback by
// gti2StartConnectionAttempt/DoAccept.
struct GsTransportConnCallbacks {
    /* 0x00 */ s32 v[4];
};

typedef s32 (*GsTransportFilterCallback)(GTI2Connection *, s32, u32, u32, u32);

// 32-character challenge made by gti2GetChallenge (StartConnect's local).
struct GsTransportChallengeBuf {
    /* 0x00 */ u32 v[9];
};

struct GTI2Connection {
    /* 0x00 */ u32 ip;
    /* 0x04 */ u16 port;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ GTI2Socket *socket;
    /* 0x0c */ s32 state;
    /* 0x10 */ s32 initiated;
    /* 0x14 */ s32 freeAtAcceptReject;
    /* 0x18 */ s32 connectionResult;
    /* 0x1c */ u32 startTime;
    /* 0x20 */ u32 timeout;
    /* 0x24 */ s32 callbackLevel;
    /* 0x28 */ s32 (*connectedCallback)(GTI2Connection *, s32, s32, s32);
    /* 0x2c */ s32 (*receivedCallback)(GTI2Connection *, s32, s32, s32);
    /* 0x30 */ s32 (*closedCallback)(GTI2Connection *, s32);
    /* 0x34 */ s32 (*pingCallback)(GTI2Connection *, s32);
    /* 0x38 */ void *initialMessage;
    /* 0x3c */ s32 initialMessageLen;
    /* 0x40 */ s32 data;
    /* 0x44 */ GTI2Buffer incomingBuffer;
    /* 0x50 */ GTI2Buffer outgoingBuffer;
    /* 0x5c */ void *incomingBufferMessages;
    /* 0x60 */ void *outgoingBufferMessages;
    /* 0x64 */ u16 serialNumber;
    /* 0x66 */ u16 expectedSerialNumber;
    /* 0x68 */ u8 response[0x20];
    /* 0x88 */ u32 lastSend;
    /* 0x8c */ s32 challengeTime;
    /* 0x90 */ s32 pendingAck;
    /* 0x94 */ u32 pendingAckTime;
    /* 0x98 */ void *sendFilters;
    /* 0x9c */ void *receiveFilters;
};

#endif
