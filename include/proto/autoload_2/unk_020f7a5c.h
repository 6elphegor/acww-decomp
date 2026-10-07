#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020F7A5C_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020F7A5C_H

// Prototypes of the functions defined in src/autoload_2/unk_020f7a5c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "snd/SndBgmViews.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_BgmSyncSnd_Init
void BgmSyncSnd_Init(Rb *r, u16 v);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_SetState
void BgmSyncSnd_SetState(Rb *r, u32 mode);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_ReadBeat
u32 BgmSyncSnd_ReadBeat(void);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_SetStartBeat
void BgmSyncSnd_SetStartBeat(Rb *r, s8 v);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_PollStarted
s32 BgmSyncSnd_PollStarted(Rb *r);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_Update
s32 BgmSyncSnd_Update(Rb *r, void *arg);
#endif
#ifndef PROTO_LOCAL_BgmSyncSnd_CalcPhase
s32 BgmSyncSnd_CalcPhase(Rb *r);
#endif
}
#endif

#endif
