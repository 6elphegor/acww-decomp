#ifndef PROTO_PROTO_OV065_UNK_OV065_0226D128_H
#define PROTO_PROTO_OV065_UNK_OV065_0226D128_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0226d128.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/DwcHttp.h"
#include "net/NasAuthParams.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NasAuth_SetServerUrl
void NasAuth_SetServerUrl(char *s);
#endif
#ifndef PROTO_LOCAL_NasAuth_StartThread
void NasAuth_StartThread(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_Abort
void NasAuth_Abort(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_Destroy
void NasAuth_Destroy(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_JoinThread
void NasAuth_JoinThread(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_ThreadMain
void NasAuth_ThreadMain(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_NasAuth_Start
s32 NasAuth_Start(NasAuthParams *cfg, u32 a);
#endif
#ifndef PROTO_LOCAL_NasAuth_GetState
s32 NasAuth_GetState(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_GetResult
void NasAuth_GetResult(s32 *p);
#endif
#ifndef PROTO_LOCAL_NasAuth_SendRequest
s32 NasAuth_SendRequest(s32 a);
#endif
#ifndef PROTO_LOCAL_NasAuth_HandleResponse
s32 NasAuth_HandleResponse(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_ParseResponse
s32 NasAuth_ParseResponse(void);
#endif
#ifndef PROTO_LOCAL_NasAuth_BuildRequest
s32 NasAuth_BuildRequest(void *a0, const char *a1, const u16 *a2, DwcHttpField *a3, s32 a4, s32 a5);
#endif
#ifndef PROTO_LOCAL_NasAuth_SetState
void NasAuth_SetState(s32 v);
#endif
}
#endif

#endif
