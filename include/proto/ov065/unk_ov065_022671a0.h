#ifndef PROTO_PROTO_OV065_UNK_OV065_022671A0_H
#define PROTO_PROTO_OV065_UNK_OV065_022671A0_H

// Prototypes of the functions defined in src/ov065/unk_ov065_022671a0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/SslSession.h"
struct SslMd5Context;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sSslMd5WordIndex
extern u8 sSslMd5WordIndex[0x40];
#endif
#ifndef PROTO_LOCAL_sSslMd5Padding
extern u8 sSslMd5Padding[0x40];
#endif
#ifndef PROTO_LOCAL_sSslMd5SineTable
extern u32 sSslMd5SineTable[0x40];
#endif
#ifndef PROTO_LOCAL_SslMd5_Transform
void SslMd5_Transform(SslMd5Context *ctx, const u8 *block);
#endif
#ifndef PROTO_LOCAL_SslMd5_Update
void SslMd5_Update(SslMd5Context *ctx, const u8 *data, u32 n);
#endif
#ifndef PROTO_LOCAL_SslSession_FindByPeer
SslSession *SslSession_FindByPeer(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_Ssl_GetUnixTime
u32 Ssl_GetUnixTime(void);
#endif
#ifndef PROTO_LOCAL_Ssl_SetRootCaList
void Ssl_SetRootCaList(void *a, s32 b);
#endif
#ifndef PROTO_LOCAL_SslCert_ReadDerLength
s32 SslCert_ReadDerLength(u8 **pp);
#endif
#ifndef PROTO_LOCAL_SslCert_AppendName
void SslCert_AppendName(char *p, const char *src, s32 n);
#endif
#ifndef PROTO_LOCAL_SslCert_ParseTime
u32 SslCert_ParseTime(const u8 *p, s32 mode);
#endif
}
#endif

#endif
