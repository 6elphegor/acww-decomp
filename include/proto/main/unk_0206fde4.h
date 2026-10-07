#ifndef PROTO_PROTO_MAIN_UNK_0206FDE4_H
#define PROTO_PROTO_MAIN_UNK_0206FDE4_H

// Prototypes of the functions defined in src/main/unk_0206fde4.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/Mtx43.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Museum_CountDonatedFossilsInGroup
s32 Museum_CountDonatedFossilsInGroup(u32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_CpuMtx_StoreToStack
void CpuMtx_StoreToStack(u32 i);
#endif
#ifndef PROTO_LOCAL_CpuMtx_RestoreFromStack
void CpuMtx_RestoreFromStack(u32 i);
#endif
}
#ifndef PROTO_LOCAL_sCpuMtxStack
extern Mtx43 sCpuMtxStack[31];
#endif
#endif

#endif
