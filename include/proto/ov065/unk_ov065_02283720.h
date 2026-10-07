#ifndef PROTO_PROTO_OV065_UNK_OV065_02283720_H
#define PROTO_PROTO_OV065_UNK_OV065_02283720_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02283720.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_gti2GetResponse
char *gti2GetResponse(char *out, char *in);
#endif
#ifndef PROTO_LOCAL_CloseStatsConnection
void CloseStatsConnection();
#endif
#ifndef PROTO_LOCAL_value_for_key
char *value_for_key(char *s, char *key);
#endif
#ifndef PROTO_LOCAL_value_for_key_safe
char *value_for_key_safe(char *s, char *key);
#endif
#ifndef PROTO_LOCAL_ClosePendingCallbacks
void ClosePendingCallbacks(void);
#endif
#ifndef PROTO_LOCAL_gpiDebug
void gpiDebug(void *h, const char *fmt, ...);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gti2CheckResponse
BOOL gti2CheckResponse(u8 *a, u8 *b);
#endif
#ifndef PROTO_LOCAL_PersistThink
s32 PersistThink();
#endif
#ifndef PROTO_LOCAL_xcode_buf
void xcode_buf(char *p, s32 n);
#endif
#ifndef PROTO_LOCAL_SocketReadable
s32 SocketReadable(s32 a);
#endif
#ifndef PROTO_LOCAL_FindFinal
char *FindFinal(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_FindRequest
s32 FindRequest(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_ProcessPlayerAuth
void ProcessPlayerAuth(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_ProcessGetPid
void ProcessGetPid(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_ProcessGetData
void ProcessGetData(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_ProcessSetData
void ProcessSetData(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_ProcessStatement
void ProcessStatement(char *s, s32 len);
#endif
#ifndef PROTO_LOCAL_ProcessInBuffer
s32 ProcessInBuffer(char *p, s32 n);
#endif
#ifndef PROTO_LOCAL_CallReqCallback
void CallReqCallback(s32 idx, s32 a, s32 b, void *p3, s32 p4);
#endif
#ifndef PROTO_LOCAL_strzcpy
void strzcpy(char *dst, const char *src, s32 n);
#endif
}
#endif

#endif
