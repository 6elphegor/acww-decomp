#ifndef PROTO_PROTO_OV065_UNK_OV065_02289444_H
#define PROTO_PROTO_OV065_UNK_OV065_02289444_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02289444.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/sb_internal.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_IntKeyCompare
s32 IntKeyCompare(void **a, void **b);
#endif
#ifndef PROTO_LOCAL_FloatKeyCompare
s32 FloatKeyCompare(void **a, void **b);
#endif
#ifndef PROTO_LOCAL_StrCaseKeyCompare
s32 StrCaseKeyCompare(void **a, void **b);
#endif
#ifndef PROTO_LOCAL_StrNoCaseKeyCompare
s32 StrNoCaseKeyCompare(void **a, void **b);
#endif
#ifndef PROTO_LOCAL_NTSLengthSB
s32 NTSLengthSB(const char *s, s32 n);
#endif
#ifndef PROTO_LOCAL_StringHash__sb_serverlist
u32 StringHash__sb_serverlist(const char *s, u32 n);
#endif
#ifndef PROTO_LOCAL_BufferAddNTS
void BufferAddNTS(char **p, char *s, s32 *n);
#endif
#ifndef PROTO_LOCAL_BufferAddByte
void BufferAddByte(char **p, u8 c, s32 *n);
#endif
#ifndef PROTO_LOCAL_BufferAddInt
void BufferAddInt(u8 **cur, u32 v, s32 *len);
#endif
#ifndef PROTO_LOCAL_BufferAddData
void BufferAddData(u8 **cur, const void *src, s32 n, s32 *len);
#endif
#ifndef PROTO_LOCAL_SendWithRetry
s32 SendWithRetry(SBServerList *ctx, void *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_SBServerListConnectAndQuery
s32 SBServerListConnectAndQuery(SBServerList *ctx, const char *user, const char *pass, u32 flags, u32 extra);
#endif
#ifndef PROTO_LOCAL_InitCryptKey
void InitCryptKey(SBServerList *ctx, s8 *key, s32 n);
#endif
#ifndef PROTO_LOCAL_ServerSizeForFlags
s32 ServerSizeForFlags(u32 flags);
#endif
#ifndef PROTO_LOCAL_FullRulesPresent
s32 FullRulesPresent(u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_AllKeysPresent
s32 AllKeysPresent(SBServerList *ctx, u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_ParseServerIPPort
void ParseServerIPPort(SBServerList *ctx, u8 *buf, s32 n, u32 *ip, u16 *volatile port);
#endif
#ifndef PROTO_LOCAL_ParseServer
s32 ParseServer(SBServerList *ctx, _SBServer *ent, u8 *buf, s32 n, s32 flag);
#endif
#ifndef PROTO_LOCAL_IncomingListParseServer
s32 IncomingListParseServer(SBServerList *ctx, u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_SBSetLastListErrorPtr
void SBSetLastListErrorPtr(SBServerList *ctx, u32 v);
#endif
#ifndef PROTO_LOCAL_ProcessMainListData
s32 ProcessMainListData(SBServerList *c);
#endif
#ifndef PROTO_LOCAL_ProcessPushKeyList
s32 ProcessPushKeyList(SBServerList *c, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_ProcessPlayerSearch
s32 ProcessPlayerSearch(SBServerList *c, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_ProcessMaploop
s32 ProcessMaploop(SBServerList *c, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_ProcessDeleteServer
s32 ProcessDeleteServer(SBServerList *c, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_ProcessPushServer
s32 ProcessPushServer(SBServerList *c, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_ProcessAdHocData
s32 ProcessAdHocData(SBServerList *c);
#endif
#ifndef PROTO_LOCAL_ProcessIncomingData
s32 ProcessIncomingData(SBServerList *c);
#endif
#ifndef PROTO_LOCAL_SBSendMessageToServer
s32 SBSendMessageToServer(SBServerList *c, u32 a1, u32 a2, u8 *data, s32 len);
#endif
#ifndef PROTO_LOCAL_SBSendNatNegotiateCookieToServer
s32 SBSendNatNegotiateCookieToServer(SBServerList *c, u32 a1, u32 a2, u32 ip);
#endif
#ifndef PROTO_LOCAL_ProcessLanData
s32 ProcessLanData(SBServerList *s);
#endif
#ifndef PROTO_LOCAL_SBListThink
s32 SBListThink(void *sub);
#endif
#ifndef PROTO_LOCAL_ListCallback
void ListCallback(SBServerList *s, s32 code, _SBServer *p, _ServerBrowser *o);
#endif
#ifndef PROTO_LOCAL_EngineCallback
void EngineCallback(void *a, s32 code, _SBServer *p, _ServerBrowser *o);
#endif
#ifndef PROTO_LOCAL_ServerBrowserNewA
_ServerBrowser *ServerBrowserNewA(s32 a, s32 b, s32 c, s32 d, s32 s5, s32 s6, s32 s7, void *s8, void *s9);
#endif
}
#endif

#endif
