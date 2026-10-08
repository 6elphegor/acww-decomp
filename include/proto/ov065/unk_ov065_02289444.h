#ifndef PROTO_PROTO_OV065_UNK_OV065_02289444_H
#define PROTO_PROTO_OV065_UNK_OV065_02289444_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02289444.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "net/sb_internal.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_ov065_0228e954
extern char *data_ov065_0228e954;
#endif
#ifndef PROTO_LOCAL_SBOverrideMasterServer
extern char *SBOverrideMasterServer;
#endif
#ifndef PROTO_LOCAL_g_sortserverlist
extern void *g_sortserverlist;
#endif
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
#ifndef PROTO_LOCAL_StringHash__sb_serverlist
u32 StringHash__sb_serverlist(const char *s, u32 n);
#endif
#ifndef PROTO_LOCAL_BufferAddInt
void BufferAddInt(u8 **cur, u32 v, s32 *len);
#endif
#ifndef PROTO_LOCAL_BufferAddData
void BufferAddData(u8 **cur, const void *src, s32 n, s32 *len);
#endif
#ifndef PROTO_LOCAL_ServerSizeForFlags
s32 ServerSizeForFlags(u32 flags);
#endif
#ifndef PROTO_LOCAL_FullRulesPresent
s32 FullRulesPresent(u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_SBListThink
s32 SBListThink(void *sub);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SBNullServer
extern _SBServer *SBNullServer;
#endif
#ifndef PROTO_LOCAL_SetupListChallenge
void SetupListChallenge(SBServerList *ctx);
#endif
#ifndef PROTO_LOCAL_FreePopularValues
void FreePopularValues(SBServerList *ctx);
#endif
#ifndef PROTO_LOCAL_AllKeysPresent
s32 AllKeysPresent(SBServerList *ctx, u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_ParseServer
s32 ParseServer(SBServerList *ctx, _SBServer *ent, u8 *buf, s32 n, s32 flag);
#endif
#ifndef PROTO_LOCAL_IncomingListParseServer
s32 IncomingListParseServer(SBServerList *ctx, u8 *buf, s32 n);
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
#ifndef PROTO_LOCAL_ProcessLanData
s32 ProcessLanData(SBServerList *s);
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
#ifndef PROTO_LOCAL_ServerBrowserFree
void ServerBrowserFree(_ServerBrowser *o);
#endif
}
#endif

#endif
