#ifndef PROTO_PROTO_OV065_UNK_OV065_0227931C_H
#define PROTO_PROTO_OV065_UNK_OV065_0227931C_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0227931c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/ghttpBuffer.h"
#include "net/ghttpConnection.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_ghttpStartup
void ghttpStartup();
#endif
#ifndef PROTO_LOCAL_ghttpCleanup
void ghttpCleanup();
#endif
#ifndef PROTO_LOCAL_ghttpThink
void ghttpThink();
#endif
#ifndef PROTO_LOCAL_ghiCleanupConnections
void ghiCleanupConnections();
#endif
#ifndef PROTO_LOCAL_ghiCreateLock
void ghiCreateLock();
#endif
#ifndef PROTO_LOCAL_ghiFreeLock
void ghiFreeLock();
#endif
#ifndef PROTO_LOCAL_ghiLock
void ghiLock();
#endif
#ifndef PROTO_LOCAL_ghiUnlock
void ghiUnlock();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ghttpGetA
s32 ghttpGetA(const char *a, s32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_ghttpGetExA
s32 ghttpGetExA(const char *a, const char *b, void *c, s32 d, GHIPost *e, u32 f, s32 g, u32 h, u32 i, u32 j);
#endif
#ifndef PROTO_LOCAL_ghttpPostA
s32 ghttpPostA(const char *a, GHIPost *b, s32 c, u32 d, u32 e);
#endif
#ifndef PROTO_LOCAL_ghttpPostExA
s32 ghttpPostExA(const char *a, const char *b, GHIPost *c, u32 d, s32 e, u32 f, u32 g, u32 h);
#endif
#ifndef PROTO_LOCAL_ghttpNewPost
s32 ghttpNewPost();
#endif
#ifndef PROTO_LOCAL_ghttpPostAddStringA
s32 ghttpPostAddStringA(void *a, const char *b, const char *c);
#endif
#ifndef PROTO_LOCAL_ghiFindFreeSlot
s32 ghiFindFreeSlot();
#endif
#ifndef PROTO_LOCAL_ghiFreeConnection
BOOL ghiFreeConnection(GHIConnection *s);
#endif
#ifndef PROTO_LOCAL_ghiEnumConnections
void ghiEnumConnections(BOOL (*cb)(GHIConnection *));
#endif
#ifndef PROTO_LOCAL_ghiDecryptReceivedData
BOOL ghiDecryptReceivedData(GHIConnection *self);
#endif
#ifndef PROTO_LOCAL_ghiDoReceive
s32 ghiDoReceive(GHIConnection *self, u8 *buf, s32 *plen);
#endif
#ifndef PROTO_LOCAL_ghiDoSend
s32 ghiDoSend(GHIConnection *self, u8 *buf, s32 len);
#endif
#ifndef PROTO_LOCAL_ghiTrySendThenBuffer
s32 ghiTrySendThenBuffer(GHIConnection *self, u8 *buf, s32 len);
#endif
#ifndef PROTO_LOCAL_ghiCallProgressCallback
void ghiCallProgressCallback(GHIConnection *self, u32 p1, u32 p2);
#endif
#ifndef PROTO_LOCAL_ghiResizeBuffer
s32 ghiResizeBuffer(GHIBuffer *o, s32 n);
#endif
#ifndef PROTO_LOCAL_ghiInitBuffer
s32 ghiInitBuffer(GHIConnection *ow, GHIBuffer *o, s32 size, s32 grow);
#endif
#ifndef PROTO_LOCAL_ghiInitFixedBuffer
s32 ghiInitFixedBuffer(GHIConnection *ow, GHIBuffer *o, char *buf, s32 size);
#endif
#ifndef PROTO_LOCAL_ghiAppendDataToBuffer
s32 ghiAppendDataToBuffer(GHIBuffer *o, char *s, s32 len);
#endif
}
#endif

#endif
