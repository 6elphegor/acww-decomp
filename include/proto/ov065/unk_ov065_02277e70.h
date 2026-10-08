#ifndef PROTO_PROTO_OV065_UNK_OV065_02277E70_H
#define PROTO_PROTO_OV065_UNK_OV065_02277E70_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02277e70.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/DwcGsHttpCallbackCtx.h"
struct GsAvailQuery;
#ifndef __cplusplus
typedef struct GsAvailQuery GsAvailQuery;
#endif
#ifdef __cplusplus
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_SendPacket
void SendPacket();
#endif
#ifndef PROTO_LOCAL_GSIStartAvailableCheckA
void GSIStartAvailableCheckA(char *url);
#endif
#ifndef PROTO_LOCAL_HandlePacket
s32 HandlePacket(s8 *b, s32 n, u8 *addr, u32 *out);
#endif
#ifndef PROTO_LOCAL_GSIAvailableCheckThink
s32 GSIAvailableCheckThink();
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_Startup
s32 DwcGsHttp_Startup();
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_Cleanup
s32 DwcGsHttp_Cleanup();
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_Process
s32 DwcGsHttp_Process();
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_PostCreate
void DwcGsHttp_PostCreate(s32 *p);
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_PostAddString
s32 DwcGsHttp_PostAddString(s32 *p, const char *name, const char *value);
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_Post
s32 DwcGsHttp_Post(s32 a, s32 *pa, void (*cb)(s32, s32, s32, u32), u32 ud);
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_Get
s32 DwcGsHttp_Get(s32 a, void (*cb)(s32, s32, s32, u32), u32 ud);
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_ReportError
s32 DwcGsHttp_ReportError(s32 e);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_AC
extern GsAvailQuery AC;
#endif
#ifndef PROTO_LOCAL_DwcGsHttp_OnRequestDone
s32 DwcGsHttp_OnRequestDone(s32 a, s32 e, s32 c, s32 d, DwcGsHttpCallbackCtx *p);
#endif
}
#endif

#endif
