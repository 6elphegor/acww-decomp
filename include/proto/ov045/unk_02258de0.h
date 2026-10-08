#ifndef PROTO_PROTO_OV045_UNK_02258DE0_H
#define PROTO_PROTO_OV045_UNK_02258DE0_H

// Prototypes of the functions defined in src/ov045/unk_02258de0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct SpNpcKatrinaActEntry;
struct SpNpcKatrinaTalkScript;
#ifdef __cplusplus
#include "types.h"
class SpNpcKatrina;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcKatrina_Create
SpNpcKatrina *SpNpcKatrina_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcKatrina_GetAnimFrame
u32 SpNpcKatrina_GetAnimFrame();
#endif
}
#ifndef PROTO_LOCAL_sSpNpcKatrinaModelPath
extern u8 sSpNpcKatrinaModelPath[23];
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaTexturePath
extern u8 sSpNpcKatrinaTexturePath[27];
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaMsgKey
extern void *sSpNpcKatrinaMsgKey;
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaKey
extern u8 sSpNpcKatrinaKey[15];
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaTalkScripts
extern SpNpcKatrinaTalkScript sSpNpcKatrinaTalkScripts[2];
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaActTable
extern SpNpcKatrinaActEntry sSpNpcKatrinaActTable[4];
#endif
#ifndef PROTO_LOCAL_sSpNpcKatrinaInstance
extern SpNpcKatrina *sSpNpcKatrinaInstance;
#endif
#endif

#endif
