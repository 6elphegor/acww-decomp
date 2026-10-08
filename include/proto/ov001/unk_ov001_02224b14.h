#ifndef PROTO_PROTO_OV001_UNK_OV001_02224B14_H
#define PROTO_PROTO_OV001_UNK_OV001_02224B14_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02224b14.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/WfcObjGroup.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcCell_Load
void WfcCell_Load(s32 which, u32 path);
#endif
#ifndef PROTO_LOCAL_WfcCell_Unload
void WfcCell_Unload(s32 which);
#endif
#ifndef PROTO_LOCAL_WfcCell_Copy
void WfcCell_Copy(s32 which, s32 idx, void *dst);
#endif
#ifndef PROTO_LOCAL_WfcObj_CreateSingle
GXOamAttr *WfcObj_CreateSingle(s32 which, s32 idx);
#endif
#ifndef PROTO_LOCAL_WfcObj_Create
WfcObjGroup *WfcObj_Create(s32 which, s32 idx, s32 flag);
#endif
}
#endif

#endif
