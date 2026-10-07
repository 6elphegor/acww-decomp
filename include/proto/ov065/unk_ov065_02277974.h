#ifndef PROTO_PROTO_OV065_UNK_OV065_02277974_H
#define PROTO_PROTO_OV065_UNK_OV065_02277974_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02277974.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "types64.h"
struct DwcInetControl;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_DwcInet_StartConnect
void DwcInet_StartConnect();
#endif
#ifndef PROTO_LOCAL_DwcInet_Process
void DwcInet_Process();
#endif
#ifndef PROTO_LOCAL_DwcInet_WaitDisconnect
void DwcInet_WaitDisconnect();
#endif
#ifndef PROTO_LOCAL_DwcNet_GetTimeMs
u64 DwcNet_GetTimeMs();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_DwcInet_InitEx
void DwcInet_InitEx(DwcInetControl *p, s32 x, s32 y, u32 z);
#endif
#ifndef PROTO_LOCAL_DwcInet_SelectAuthServer
void DwcInet_SelectAuthServer(s32 x);
#endif
#ifndef PROTO_LOCAL_DwcInet_IsConnectDone
BOOL DwcInet_IsConnectDone();
#endif
#ifndef PROTO_LOCAL_DwcInet_UpdateStatus
s32 DwcInet_UpdateStatus();
#endif
#ifndef PROTO_LOCAL_DwcInet_Disconnect
BOOL DwcInet_Disconnect();
#endif
#ifndef PROTO_LOCAL_DwcInet_IsLinkLost
BOOL DwcInet_IsLinkLost();
#endif
#ifndef PROTO_LOCAL_DwcInet_GetLinkLevel
s32 DwcInet_GetLinkLevel();
#endif
#ifndef PROTO_LOCAL_DwcNet_Alloc
void *DwcNet_Alloc(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_DwcNet_AllocAligned
void *DwcNet_AllocAligned(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_DwcNet_Free
void *DwcNet_Free(s32 a, void *b, s32 c);
#endif
#ifndef PROTO_LOCAL_DwcNet_Realloc
void *DwcNet_Realloc(s32 a, s32 b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_DwcNet_ReallocAligned
void *DwcNet_ReallocAligned(s32 a, void *b, s32 c, s32 d, s32 e);
#endif
#ifndef PROTO_LOCAL_GsUtil_Alloc
void *GsUtil_Alloc(s32 a);
#endif
#ifndef PROTO_LOCAL_GsUtil_Realloc
void *GsUtil_Realloc(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_GsUtil_Free
void *GsUtil_Free(s32 a);
#endif
#ifndef PROTO_LOCAL_GsUtil_FormatKeyValue
s32 GsUtil_FormatKeyValue(s32 a, s32 b, char *dst, s32 d);
#endif
#ifndef PROTO_LOCAL_GsUtil_AppendKeyValue
s32 GsUtil_AppendKeyValue(s32 a, s32 b, char *s, s32 d);
#endif
#ifndef PROTO_LOCAL_GsUtil_GetKeyValue
s32 GsUtil_GetKeyValue(char *key, char *out, char *src, s32 sep);
#endif
}
#endif

#endif
