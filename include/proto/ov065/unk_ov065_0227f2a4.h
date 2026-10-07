#ifndef PROTO_PROTO_OV065_UNK_OV065_0227F2A4_H
#define PROTO_PROTO_OV065_UNK_OV065_0227F2A4_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0227f2a4.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/gp.h"
#include "net/gpiBuffer.h"
#include "net/gpiInfo.h"
#include "net/gpiOperation.h"
#include "net/gpiProfile.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Unk_ov065_0227f54c_pool_order
__declspec(weak) void Unk_ov065_0227f54c_pool_order(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gpiIntToDate
s32 gpiIntToDate(void *ctx, s32 packed, s32 *pa, s32 *pb, s32 *pc);
#endif
#ifndef PROTO_LOCAL_gpiProcessGetInfo
s32 gpiProcessGetInfo(void *h, GPIOperation *req, char *str);
#endif
#ifndef PROTO_LOCAL_gpiAddLocalInfo
s32 gpiAddLocalInfo(void *h, GPIBuffer *p);
#endif
#ifndef PROTO_LOCAL_gpiSendLocalInfo
s32 gpiSendLocalInfo(void *h, char *a, char *b);
#endif
#ifndef PROTO_LOCAL_gpiSendUserInfo
s32 gpiSendUserInfo(void *h, char *a, char *b);
#endif
#ifndef PROTO_LOCAL_gpiSetInfoi
s32 gpiSetInfoi(void *h, s32 code, s32 val);
#endif
#ifndef PROTO_LOCAL_gpiSetInfos
s32 gpiSetInfos(GPConnection *h, s32 cmd, char *val);
#endif
#ifndef PROTO_LOCAL_gpiSendGetInfo
s32 gpiSendGetInfo(GPConnection *h, s32 a1, s32 a2);
#endif
#ifndef PROTO_LOCAL_gpiGetInfo
s32 gpiGetInfo(GPConnection *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);
#endif
#ifndef PROTO_LOCAL_gpiSetInfoCache
s32 gpiSetInfoCache(GPConnection *h, GPIProfile *p, GPIInfoCache *q);
#endif
}
#endif

#endif
