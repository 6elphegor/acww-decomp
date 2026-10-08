#ifndef PROTO_PROTO_OV065_UNK_OV065_02288C78_H
#define PROTO_PROTO_OV065_UNK_OV065_02288C78_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02288c78.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "types64.h"
#ifdef __cplusplus
#include "net/hashtable.h"
#include "net/sb_internal.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_ov065_0228e928
extern char *data_ov065_0228e928[2];
#endif
#ifndef PROTO_LOCAL_thestr
extern char *thestr;
#endif
#ifndef PROTO_LOCAL_ServerBrowserBeginUpdate2
s32 ServerBrowserBeginUpdate2(void *op, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_ServerBrowserLimitUpdateA
s32 ServerBrowserLimitUpdateA(void *o, s32 a, s32 b, u8 *c, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_ServerBrowserThink
s32 ServerBrowserThink(void *o);
#endif
#ifndef PROTO_LOCAL_ServerBrowserHalt
s32 ServerBrowserHalt(void *o);
#endif
#ifndef PROTO_LOCAL_RefStringHash
s32 RefStringHash(void **p, s32 numBuckets);
#endif
#ifndef PROTO_LOCAL_RefStringCompare
s32 RefStringCompare(char **a, char **b);
#endif
#ifndef PROTO_LOCAL_RefStringFree
void RefStringFree(void **p);
#endif
#ifndef PROTO_LOCAL_SBRefStrHashCleanup
void SBRefStrHashCleanup();
#endif
#ifndef PROTO_LOCAL_SBServerAddIntKeyValue
void SBServerAddIntKeyValue(void *a, char *b);
#endif
#ifndef PROTO_LOCAL_SBServerGetStringValueA
char *SBServerGetStringValueA(void *a, char *k, char *d);
#endif
#ifndef PROTO_LOCAL_SBServerGetIntValueA
s32 SBServerGetIntValueA(void *a, char *b, s32 c);
#endif
#ifndef PROTO_LOCAL_SBServerGetFloatValueA
u64 SBServerGetFloatValueA(void *a, char *b, u64 v);
#endif
#ifndef PROTO_LOCAL_SBServerGetPrivateInetAddress
s32 SBServerGetPrivateInetAddress(s32 *o);
#endif
#ifndef PROTO_LOCAL_CheckValidKey
s32 CheckValidKey(char *s);
#endif
#ifndef PROTO_LOCAL_mytok
char *mytok(char *s, s32 ch);
#endif
#ifndef PROTO_LOCAL_StringHash
u32 StringHash(u8 *s, u32 n);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_g_SBRefStrList
extern HashImplementation *g_SBRefStrList;
#endif
#ifndef PROTO_LOCAL_ServerBrowserSendMessageToServerA
s32 ServerBrowserSendMessageToServerA(_ServerBrowser *o, s32 a, u16 b, s32 c, s32 e);
#endif
#ifndef PROTO_LOCAL_ServerBrowserSendNatNegotiateCookieToServerA
s32 ServerBrowserSendNatNegotiateCookieToServerA(_ServerBrowser *o, s32 a, u16 b, s32 c);
#endif
#ifndef PROTO_LOCAL_ServerBrowserRemoveServer
void ServerBrowserRemoveServer(_ServerBrowser *o, _SBServer *key);
#endif
#ifndef PROTO_LOCAL_ServerBrowserClear
void ServerBrowserClear(_ServerBrowser *o);
#endif
#ifndef PROTO_LOCAL_ServerBrowserGetServer
_SBServer *ServerBrowserGetServer(_ServerBrowser *o, s32 index);
#endif
#ifndef PROTO_LOCAL_ServerBrowserCount
s32 ServerBrowserCount(_ServerBrowser *o);
#endif
#ifndef PROTO_LOCAL_ServerBrowserSortA
void ServerBrowserSortA(_ServerBrowser *o, s32 a, char *b, u32 mode);
#endif
#ifndef PROTO_LOCAL_ServerBrowserGetMyPublicIPAddr
s32 ServerBrowserGetMyPublicIPAddr(_ServerBrowser *o);
#endif
#ifndef PROTO_LOCAL_SBRefStrHash
HashImplementation *SBRefStrHash();
#endif
#ifndef PROTO_LOCAL_SBServerFree
void SBServerFree(_SBServer **pp);
#endif
#ifndef PROTO_LOCAL_SBServerAddKeyValue
s32 SBServerAddKeyValue(_SBServer *a, char *k, char *v);
#endif
#ifndef PROTO_LOCAL_SBServerGetPublicInetAddress
u32 SBServerGetPublicInetAddress(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerGetPublicQueryPort
u16 SBServerGetPublicQueryPort(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerGetPublicQueryPortNBO
u16 SBServerGetPublicQueryPortNBO(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerHasPrivateAddress
BOOL SBServerHasPrivateAddress(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerGetPrivateQueryPort
u16 SBServerGetPrivateQueryPort(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerSetNext
void SBServerSetNext(_SBServer *o, _SBServer *v);
#endif
#ifndef PROTO_LOCAL_SBServerGetNext
_SBServer *SBServerGetNext(_SBServer *o);
#endif
#ifndef PROTO_LOCAL_SBServerParseKeyVals
void SBServerParseKeyVals(_SBServer *c, char *s);
#endif
#ifndef PROTO_LOCAL_SBServerParseQR2FullKeysSingle
void SBServerParseQR2FullKeysSingle(_SBServer *c, char *p, s32 len);
#endif
#ifndef PROTO_LOCAL_KeyValFree
void KeyValFree(SBKeyValuePair *p);
#endif
#ifndef PROTO_LOCAL_KeyValHashKey
u32 KeyValHashKey(SBKeyValuePair *p, u32 n);
#endif
#ifndef PROTO_LOCAL_KeyValCompareKey
s32 KeyValCompareKey(SBKeyValuePair *a, SBKeyValuePair *b);
#endif
#ifndef PROTO_LOCAL_SBIsNullServer
BOOL SBIsNullServer(_SBServer *v);
#endif
}
#endif

#endif
