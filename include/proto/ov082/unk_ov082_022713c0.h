#ifndef PROTO_PROTO_OV082_UNK_OV082_022713C0_H
#define PROTO_PROTO_OV082_UNK_OV082_022713C0_H

// Prototypes of the functions defined in src/ov082/unk_ov082_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct SpNpcTortimerBugOffActEntry;
#ifdef __cplusplus
#include "types.h"
class SpNpcTortimerBugOff;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcTortimerBugOff_Create
SpNpcTortimerBugOff *SpNpcTortimerBugOff_Create();
#endif
#ifndef PROTO_LOCAL_sSpNpcTortimerBugOffTexturePath
extern u8 sSpNpcTortimerBugOffTexturePath[];
#endif
#ifndef PROTO_LOCAL_sSpNpcTortimerBugOffModelPath
extern u8 sSpNpcTortimerBugOffModelPath[];
#endif
#ifndef PROTO_LOCAL_SpNpcTortimerBugOff_IsInsect
BOOL SpNpcTortimerBugOff_IsInsect(u16 *p, s32 x);
#endif
}
#ifndef PROTO_LOCAL_sSpNpcTortimerBugOffActTable
extern SpNpcTortimerBugOffActEntry sSpNpcTortimerBugOffActTable[3];
#endif
#endif

#endif
