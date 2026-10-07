#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020F30FC_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020F30FC_H

// Prototypes of the functions defined in src/autoload_2/unk_020f30fc.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SndPosList;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Snd_InstallListenerCallbacks
void Snd_InstallListenerCallbacks(void);
#endif
#ifndef PROTO_LOCAL_Snd_ClearListenerCallbacks
void Snd_ClearListenerCallbacks(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Snd_CalcSeVolume
s32 Snd_CalcSeVolume(s32 a, s32 b);
#endif
}
#ifndef PROTO_LOCAL_gSndPosList
extern SndPosList *gSndPosList;
#endif
#endif

#endif
