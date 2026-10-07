#ifndef PROTO_PROTO_OV001_UNK_OV001_022265AC_H
#define PROTO_PROTO_OV001_UNK_OV001_022265AC_H

// Prototypes of the functions defined in src/ov001/unk_ov001_022265ac.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcIrq_Init
void WfcIrq_Init();
#endif
#ifndef PROTO_LOCAL_WfcIrq_Restore
void WfcIrq_Restore();
#endif
#ifndef PROTO_LOCAL_WfcIrq_VBlank
void WfcIrq_VBlank();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sWfcSavedVBlankHandler
extern u32 sWfcSavedVBlankHandler;
#endif
#ifndef PROTO_LOCAL_sWfcSavedIrqMask
extern u32 sWfcSavedIrqMask;
#endif
}
#endif

#endif
