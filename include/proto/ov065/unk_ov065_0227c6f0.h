#ifndef PROTO_PROTO_OV065_UNK_OV065_0227C6F0_H
#define PROTO_PROTO_OV065_UNK_OV065_0227C6F0_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0227c6f0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/gp.h"
#include "net/gpiProfile.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gpiInitialize
s32 gpiInitialize(GPConnection *h, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_gpiDestroy
s32 gpiDestroy(GPConnection *h);
#endif
#ifndef PROTO_LOCAL_gpiResetProfile
s32 gpiResetProfile(GPConnection *h, GPIProfile *n, s32 m);
#endif
#ifndef PROTO_LOCAL_gpiReset
s32 gpiReset(GPConnection *h);
#endif
#ifndef PROTO_LOCAL_gpiProcessConnectionManager
s32 gpiProcessConnectionManager(GPConnection *h);
#endif
#ifndef PROTO_LOCAL_gpiProcess
s32 gpiProcess(GPConnection *h, s32 arg);
#endif
}
#endif

#endif
