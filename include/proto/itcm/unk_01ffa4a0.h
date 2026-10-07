#ifndef PROTO_PROTO_ITCM_UNK_01FFA4A0_H
#define PROTO_PROTO_ITCM_UNK_01FFA4A0_H

// Prototypes of the functions defined in src/itcm/unk_01ffa4a0.c (generated: tools/host_protos.py)

#include "types.h"
#include "types64.h"

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_OS_GetTick
u64 OS_GetTick(void);
#endif
#ifndef PROTO_LOCAL_PXIi_HandlerRecvFifoNotEmpty
void PXIi_HandlerRecvFifoNotEmpty(void);
#endif
#ifndef PROTO_LOCAL_OSi_IdleThreadProc
void OSi_IdleThreadProc(void);
#endif
#ifdef __cplusplus
}
#endif

#endif
