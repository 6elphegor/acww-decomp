#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_021093F4_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_021093F4_H

// Prototypes of the functions defined in src/autoload_2/unk_021093f4.c (generated: tools/host_protos.py)

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NNS_SndInit
void NNS_SndInit(void);
#endif
#ifndef PROTO_LOCAL_NNS_SndMain
void NNS_SndMain(void);
#endif
#ifndef PROTO_LOCAL_NNS_SndSetMasterVolume
void NNS_SndSetMasterVolume(u32 a);
#endif
#ifndef PROTO_LOCAL_NNS_SndUpdateDriverInfo
BOOL NNS_SndUpdateDriverInfo(void);
#endif
#ifndef PROTO_LOCAL_NNSi_SndReadDriverPlayerInfo
u32 NNSi_SndReadDriverPlayerInfo(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_NNSi_SndReadDriverTrackInfo
u32 NNSi_SndReadDriverTrackInfo(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_BeginSleep
u32 BeginSleep(void);
#endif
#ifndef PROTO_LOCAL_EndSleep
void EndSleep(void);
#endif
#ifdef __cplusplus
}
#endif

#endif
