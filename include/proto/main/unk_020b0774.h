#ifndef PROTO_PROTO_MAIN_UNK_020B0774_H
#define PROTO_PROTO_MAIN_UNK_020B0774_H

// Prototypes of the functions defined in src/main/unk_020b0774.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_ConstellationRecord_Copy
void *ConstellationRecord_Copy(void *p, const void *src);
#endif
#ifndef PROTO_LOCAL_StarTwinkle_Stop
void *StarTwinkle_Stop(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ConstellationRecord_Clear
u32 ConstellationRecord_Clear(u8 *p);
#endif
#ifndef PROTO_LOCAL_ConstellationStore_Clear
void ConstellationStore_Clear(u8 *p);
#endif
#ifndef PROTO_LOCAL_ConstellationStore_SetUsed
void ConstellationStore_SetUsed(u8 *p, u32 bit);
#endif
#ifndef PROTO_LOCAL_ConstellationStore_ClearUsed
void ConstellationStore_ClearUsed(u8 *p, u32 bit);
#endif
#ifndef PROTO_LOCAL_ConstellationStore_IsUsed
BOOL ConstellationStore_IsUsed(u8 *p, u32 bit);
#endif
#ifndef PROTO_LOCAL_StarTwinkle_Update
void StarTwinkle_Update(u8 *p);
#endif
#ifndef PROTO_LOCAL_StarTwinkle_Init
void StarTwinkle_Init(u8 *self, s32 arg);
#endif
#ifndef PROTO_LOCAL_Constellation_GetLineCells
u8 *Constellation_GetLineCells(s32 n);
#endif
}
#ifndef PROTO_LOCAL_sConstellationLineCells
extern u16 sConstellationLineCells[0x718];
#endif
#ifndef PROTO_LOCAL_sStarPalPathA
extern char sStarPalPathA[0x14];
#endif
#ifndef PROTO_LOCAL_sStarPalPathB1
extern char sStarPalPathB1[0x14];
#endif
#ifndef PROTO_LOCAL_sStarPalPathB3
extern char sStarPalPathB3[0x14];
#endif
#ifndef PROTO_LOCAL_sStarPalPathB2
extern char sStarPalPathB2[0x14];
#endif
#ifndef PROTO_LOCAL_sStarTwinklePalettePaths
extern char *sStarTwinklePalettePaths[5];
#endif
#ifndef PROTO_LOCAL_sStarPalPathB4
extern char sStarPalPathB4[0x14];
#endif
#endif

#endif
