#ifndef PROTO_PROTO_OV001_UNK_OV001_0220CBD0_H
#define PROTO_PROTO_OV001_UNK_OV001_0220CBD0_H

// Prototypes of the functions defined in src/ov001/unk_ov001_0220cbd0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct WfcMsgBank;
#ifndef __cplusplus
typedef struct WfcMsgBank WfcMsgBank;
#endif
#ifdef __cplusplus
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcMsg_InitPool
void WfcMsg_InitPool();
#endif
#ifndef PROTO_LOCAL_WfcMsg_FreePool
void WfcMsg_FreePool();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcMsg_Load
WfcMsgBank *WfcMsg_Load(void *a);
#endif
#ifndef PROTO_LOCAL_WfcMsg_Unload
void WfcMsg_Unload(WfcMsgBank *e);
#endif
#ifndef PROTO_LOCAL_WfcMsg_GetString
u8 *WfcMsg_GetString(WfcMsgBank *t, u32 i);
#endif
#ifndef PROTO_LOCAL_WfcMsg_GetStringWithDigit
u16 *WfcMsg_GetStringWithDigit(WfcMsgBank *t, u32 i, s32 j, u32 v);
#endif
}
#endif

#endif
