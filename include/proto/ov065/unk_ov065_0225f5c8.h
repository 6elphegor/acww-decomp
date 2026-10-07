#ifndef PROTO_PROTO_OV065_UNK_OV065_0225F5C8_H
#define PROTO_PROTO_OV065_UNK_OV065_0225F5C8_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0225f5c8.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/SockCoreSocket.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SockCore_Create
s32 SockCore_Create(SockCreateParams *p);
#endif
#ifndef PROTO_LOCAL_SockCore_CalcSize
u32 SockCore_CalcSize(SockCreateParams *p);
#endif
#ifndef PROTO_LOCAL_SockCore_CalcThreadAreaSize
u32 SockCore_CalcThreadAreaSize(SockThreadParams *t);
#endif
#ifndef PROTO_LOCAL_SockCore_CarveBuffer
u8 *SockCore_CarveBuffer(u8 *base, SockBuffer *dst, u32 n);
#endif
#ifndef PROTO_LOCAL_SockCore_StartCommandThread
u32 SockCore_StartCommandThread(void *a, void *b, SockThreadParams *c);
#endif
}
#endif

#endif
