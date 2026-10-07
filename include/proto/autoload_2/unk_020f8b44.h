#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020F8B44_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020F8B44_H

// Prototypes of the functions defined in src/autoload_2/unk_020f8b44.cpp (generated: tools/host_protos.py)

#include "types.h"
struct Fp;
struct Mgr;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SPL_Load
void SPL_Load(Fp *self, u8 *base);
#endif
#ifndef PROTO_LOCAL_SPL_LoadTexByVRAMManager
s32 SPL_LoadTexByVRAMManager(Fp *self);
#endif
#ifndef PROTO_LOCAL_SPL_LoadTexPlttByVRAMManager
s32 SPL_LoadTexPlttByVRAMManager(Fp *self);
#endif
#ifndef PROTO_LOCAL_SPL_Draw
void SPL_Draw(Mgr *m, u32 a1, u32 a2);
#endif
}
#ifndef PROTO_LOCAL_data_021f5c38
extern u16 data_021f5c38;
#endif
#endif

#endif
