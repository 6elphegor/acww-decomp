#ifndef PROTO_PROTO_OV004_UNK_OV004_02228700_H
#define PROTO_PROTO_OV004_UNK_OV004_02228700_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02228700.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SewingMachine;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SewingMachine_Create
SewingMachine *SewingMachine_Create();
#endif
#ifndef PROTO_LOCAL_SewingMachine_Start
BOOL SewingMachine_Start();
#endif
#ifndef PROTO_LOCAL_SewingMachine_Stop
BOOL SewingMachine_Stop();
#endif
#ifndef PROTO_LOCAL_SewingMachine_IsStopped
BOOL SewingMachine_IsStopped();
#endif
#ifndef PROTO_LOCAL_SewingMachine_SetFrame
void SewingMachine_SetFrame(u32 x);
#endif
#ifndef PROTO_LOCAL_SewingMachine_GetFrame
u32 SewingMachine_GetFrame();
#endif
}
#endif

#endif
