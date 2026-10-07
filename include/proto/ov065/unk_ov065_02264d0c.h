#ifndef PROTO_PROTO_OV065_UNK_OV065_02264D0C_H
#define PROTO_PROTO_OV065_UNK_OV065_02264D0C_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02264d0c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/IpSocket.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Ssl_ClearSessionCache
void Ssl_ClearSessionCache(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SslCert_LabelLength
s32 SslCert_LabelLength(char *s);
#endif
#ifndef PROTO_LOCAL_SslCert_MatchHostName
s32 SslCert_MatchHostName(char *a, char *b);
#endif
#ifndef PROTO_LOCAL_Ssl_ListContains
s32 Ssl_ListContains(u8 *p, s32 cnt, s32 size, u32 key);
#endif
#ifndef PROTO_LOCAL_Ssl_ChooseCipherSuite
u32 Ssl_ChooseCipherSuite(u8 *p, s32 cnt, s32 size);
#endif
#ifndef PROTO_LOCAL_Ssl_IsVersion3
s32 Ssl_IsVersion3(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Ssl_IncrementSeqNum
void Ssl_IncrementSeqNum(u8 *p);
#endif
#ifndef PROTO_LOCAL_SslRand_GetNonZeroBytes
void SslRand_GetNonZeroBytes(u8 *out, s32 n);
#endif
#ifndef PROTO_LOCAL_SslRand_AddSeed
void SslRand_AddSeed(u8 *p, u32 n);
#endif
#ifndef PROTO_LOCAL_Ssl_Read
u8 *Ssl_Read(u32 *out, IpSocket *o);
#endif
#ifndef PROTO_LOCAL_Ssl_Consume
void Ssl_Consume(u32 n, IpSocket *o);
#endif
#ifndef PROTO_LOCAL_Ssl_GetReadLength
s32 Ssl_GetReadLength(IpSocket *o);
#endif
#ifndef PROTO_LOCAL_Ssl_Write
u32 Ssl_Write(u8 *p1, u32 n1, u8 *p2, u32 n2, IpSocket *o);
#endif
#ifndef PROTO_LOCAL_Ssl_EnableOnCurrentSocket
void Ssl_EnableOnCurrentSocket(u32 v);
#endif
#ifndef PROTO_LOCAL_Ssl_ExpireSessions
void Ssl_ExpireSessions(s32 now);
#endif
}
#endif

#endif
