#ifndef PROTO_PROTO_OV065_UNK_OV065_02283F34_H
#define PROTO_PROTO_OV065_UNK_OV065_02283F34_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02283f34.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/gt2Main.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gt2CreateSocket
s32 gt2CreateSocket(s32 a, s32 b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_gt2Listen
s32 gt2Listen(void *p, s32 callback);
#endif
#ifndef PROTO_LOCAL_gt2Connect
s32 gt2Connect(GTI2Socket *s, GTI2Connection **out, u32 host, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7);
#endif
#ifndef PROTO_LOCAL_gt2Send
void gt2Send(GTI2Connection *c, s32 msg, s32 len, s32 p3);
#endif
#ifndef PROTO_LOCAL_gt2Ping
s32 gt2Ping(GTI2Connection *c);
#endif
#ifndef PROTO_LOCAL_gt2CloseAllConnectionsHard
s32 gt2CloseAllConnectionsHard(GTI2Socket *s);
#endif
#ifndef PROTO_LOCAL_gt2GetConnectionState
s32 gt2GetConnectionState(GTI2Connection *c);
#endif
#ifndef PROTO_LOCAL_gt2GetLocalPort
u32 gt2GetLocalPort(GTI2Socket *c);
#endif
#ifndef PROTO_LOCAL_gt2GetOutgoingBufferFreeSpace
s32 gt2GetOutgoingBufferFreeSpace(GTI2Connection *c);
#endif
#ifndef PROTO_LOCAL_gt2GetRemoteIP
s32 gt2GetRemoteIP(GTI2Connection *c);
#endif
#ifndef PROTO_LOCAL_gt2SetUnrecognizedMessageCallback
void gt2SetUnrecognizedMessageCallback(GTI2Socket *c, s32 v);
#endif
#ifndef PROTO_LOCAL_gt2SetConnectionData
void gt2SetConnectionData(GTI2Connection *c, s32 v);
#endif
#ifndef PROTO_LOCAL_gt2GetConnectionData
s32 gt2GetConnectionData(GTI2Connection *c);
#endif
#ifndef PROTO_LOCAL_gti2NewOutgoingConnection
s32 gti2NewOutgoingConnection(GTI2Socket *s, GTI2Connection **pc, u32 ip, u32 port);
#endif
#ifndef PROTO_LOCAL_gti2NewIncomingConnection
s32 gti2NewIncomingConnection(GTI2Socket *s, GTI2Connection **pc, u32 ip, u32 port);
#endif
#ifndef PROTO_LOCAL_gti2StartConnectionAttempt
s32 gti2StartConnectionAttempt(GTI2Connection *c, s32 msg, s32 len, GsTransportConnCallbacks *x);
#endif
#ifndef PROTO_LOCAL_gti2AcceptConnection
s32 gti2AcceptConnection(GTI2Connection *c, GsTransportConnCallbacks *x);
#endif
#ifndef PROTO_LOCAL_gti2RejectConnection
void gti2RejectConnection(GTI2Connection *c, s32 msg, s32 len);
#endif
#ifndef PROTO_LOCAL_gti2ConnectionSendData
s32 gti2ConnectionSendData(GTI2Connection *c, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_gti2CheckTimeout
s32 gti2CheckTimeout(GTI2Connection *c, u32 t);
#endif
#ifndef PROTO_LOCAL_gti2SendRetries
s32 gti2SendRetries(GTI2Connection *c, u32 t);
#endif
#ifndef PROTO_LOCAL_gti2CheckPendingAck
s32 gti2CheckPendingAck(GTI2Connection *c, u32 t);
#endif
#ifndef PROTO_LOCAL_gti2CheckKeepAlive
s32 gti2CheckKeepAlive(GTI2Connection *c, u32 t);
#endif
#ifndef PROTO_LOCAL_gti2ConnectionThink
s32 gti2ConnectionThink(GTI2Connection *c, u32 t);
#endif
#ifndef PROTO_LOCAL_gti2CloseConnection
void gti2CloseConnection(GTI2Connection *c, s32 x);
#endif
#ifndef PROTO_LOCAL_gti2SocketErrorCallback
s32 gti2SocketErrorCallback(GTI2Socket *s);
#endif
#ifndef PROTO_LOCAL_gti2ConnectAttemptCallback
s32 gti2ConnectAttemptCallback(GTI2Socket *s, GTI2Connection *c, s32 a, s32 b, s32 p4, s32 p5, s32 p6);
#endif
#ifndef PROTO_LOCAL_gti2ConnectedCallback
s32 gti2ConnectedCallback(GTI2Connection *c, s32 a, s32 b, s32 d);
#endif
#ifndef PROTO_LOCAL_gti2ReceivedCallback
s32 gti2ReceivedCallback(GTI2Connection *c, s32 a, s32 b, s32 d);
#endif
#ifndef PROTO_LOCAL_gti2ClosedCallback
s32 gti2ClosedCallback(GTI2Connection *c, s32 a);
#endif
#ifndef PROTO_LOCAL_gti2PingCallback
s32 gti2PingCallback(GTI2Connection *c, s32 a);
#endif
#ifndef PROTO_LOCAL_gti2SendFilterCallback
s32 gti2SendFilterCallback(GTI2Connection *c, s32 a, u32 msg, u32 len, u32 rel);
#endif
#ifndef PROTO_LOCAL_gti2ReceiveFilterCallback
s32 gti2ReceiveFilterCallback(GTI2Connection *c, s32 a, u32 msg, u32 len, u32 rel);
#endif
#ifndef PROTO_LOCAL_gti2DumpCallback
s32 gti2DumpCallback(GTI2Socket *o, GTI2Connection *x, s32 u2, s32 u3, s32 s4, s32 s5, s32 s6, s32 s7);
#endif
#ifndef PROTO_LOCAL_gti2UnrecognizedMessageCallback
s32 gti2UnrecognizedMessageCallback(GTI2Socket *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 *out);
#endif
#ifndef PROTO_LOCAL_gti2AllocateBuffer
s32 gti2AllocateBuffer(GTI2Buffer *b, s32 size);
#endif
#ifndef PROTO_LOCAL_gti2GetBufferFreeSpace
s32 gti2GetBufferFreeSpace(GTI2Buffer *b);
#endif
#ifndef PROTO_LOCAL_gti2BufferWriteByte
void gti2BufferWriteByte(GTI2Buffer *b, s32 v);
#endif
#ifndef PROTO_LOCAL_gti2BufferWriteUShort
void gti2BufferWriteUShort(GTI2Buffer *b, s32 v);
#endif
#ifndef PROTO_LOCAL_gti2BufferWriteData
void gti2BufferWriteData(GTI2Buffer *b, char *s, s32 n);
#endif
#ifndef PROTO_LOCAL_gti2BufferShorten
void gti2BufferShorten(GTI2Buffer *b, s32 pos, s32 n);
#endif
#ifndef PROTO_LOCAL_gti2VerifyChallenge
BOOL gti2VerifyChallenge(u8 *p);
#endif
#ifndef PROTO_LOCAL_gti2GetChallenge
char *gti2GetChallenge(u8 *out);
#endif
}
#endif

#endif
