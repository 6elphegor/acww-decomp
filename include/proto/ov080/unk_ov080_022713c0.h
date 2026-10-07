#ifndef PROTO_PROTO_OV080_UNK_OV080_022713C0_H
#define PROTO_PROTO_OV080_UNK_OV080_022713C0_H

// Prototypes of the functions defined in src/ov080/unk_ov080_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct SpNpcTortimerActEntry;
#ifdef __cplusplus
#include "types.h"
class SpNpcTortimer;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sSpNpcTortimerTexturePath
extern u8 sSpNpcTortimerTexturePath[27];
#endif
#ifndef PROTO_LOCAL_sSpNpcTortimerModelPath
extern u8 sSpNpcTortimerModelPath[23];
#endif
#ifndef PROTO_LOCAL_SpNpcTortimer_Create
SpNpcTortimer *SpNpcTortimer_Create();
#endif
}
#ifndef PROTO_LOCAL_sSpNpcTortimerActTable
extern SpNpcTortimerActEntry sSpNpcTortimerActTable[3];
#endif
#endif

#endif
