#ifndef PROTO_PROTO_MAIN_UNK_02060B9C_H
#define PROTO_PROTO_MAIN_UNK_02060B9C_H

// Prototypes of the functions defined in src/main/unk_02060b9c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Grid_ConvertFakePaintings
void Grid_ConvertFakePaintings(void *g);
#endif
#ifndef PROTO_LOCAL_Save_ConvertFakePaintings
void Save_ConvertFakePaintings();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Item_ToPlacedForm
void Item_ToPlacedForm(u16 *out, u16 *in, s32 n);
#endif
#ifndef PROTO_LOCAL_Item_ConvertFakePainting
void Item_ConvertFakePainting(u16 *out, u16 *in);
#endif
#ifndef PROTO_LOCAL_Insect_GetSpawnTable
void *Insect_GetSpawnTable(s32 i);
#endif
#ifndef PROTO_LOCAL_Insect_HourToTimeSlot
s32 Insect_HourToTimeSlot(u32 x);
#endif
#ifndef PROTO_LOCAL_Insect_GetBaseSize
s32 Insect_GetBaseSize(u32 x);
#endif
#ifndef PROTO_LOCAL_Insect_GetHabitat
s32 Insect_GetHabitat(u32 x);
#endif
}
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot3
extern u8 sInsectSpawnAugSlot3[60];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot3
extern u8 sInsectSpawnJulSlot3[56];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot2
extern u8 sInsectSpawnAugSlot2[56];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJul
extern void *sInsectSpawnJul[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJan
extern void *sInsectSpawnJan[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFeb
extern void *sInsectSpawnFeb[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSep
extern void *sInsectSpawnSep[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAug
extern void *sInsectSpawnAug[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNov
extern void *sInsectSpawnNov[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot2
extern u8 sInsectSpawnJulSlot2[48];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMar
extern void *sInsectSpawnMar[12];
#endif
#ifndef PROTO_LOCAL_gInsectSpawnTables
extern void *gInsectSpawnTables[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnApr
extern void *sInsectSpawnApr[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDec
extern void *sInsectSpawnDec[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMay
extern void *sInsectSpawnMay[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJun
extern void *sInsectSpawnJun[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOct
extern void *sInsectSpawnOct[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot0
extern u8 sInsectSpawnJulSlot0[44];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot0
extern u8 sInsectSpawnAugSlot0[44];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot2
extern u8 sInsectSpawnSepSlot2[44];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot1
extern u8 sInsectSpawnAugSlot1[40];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot3
extern u8 sInsectSpawnSepSlot3[40];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot1
extern u8 sInsectSpawnJulSlot1[40];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot2
extern u8 sInsectSpawnJunSlot2[36];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot3
extern u8 sInsectSpawnJunSlot3[36];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot5
extern u8 sInsectSpawnJulSlot5[36];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot5
extern u8 sInsectSpawnAugSlot5[36];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot1
extern u8 sInsectSpawnJunSlot1[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot4
extern u8 sInsectSpawnJunSlot4[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot5
extern u8 sInsectSpawnJunSlot5[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAugSlot4
extern u8 sInsectSpawnAugSlot4[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot5
extern u8 sInsectSpawnSepSlot5[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJunSlot0
extern u8 sInsectSpawnJunSlot0[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot0
extern u8 sInsectSpawnSepSlot0[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot4
extern u8 sInsectSpawnSepSlot4[28];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot2
extern u8 sInsectSpawnNovSlot2[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot3
extern u8 sInsectSpawnNovSlot3[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot2
extern u8 sInsectSpawnMarSlot2[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJulSlot4
extern u8 sInsectSpawnJulSlot4[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot3
extern u8 sInsectSpawnMarSlot3[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot3
extern u8 sInsectSpawnMaySlot3[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot2
extern u8 sInsectSpawnOctSlot2[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot3
extern u8 sInsectSpawnOctSlot3[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnSepSlot1
extern u8 sInsectSpawnSepSlot1[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot3
extern u8 sInsectSpawnAprSlot3[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot2
extern u8 sInsectSpawnAprSlot2[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot2
extern u8 sInsectSpawnMaySlot2[24];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot4
extern u8 sInsectSpawnNovSlot4[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot4
extern u8 sInsectSpawnMarSlot4[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot4
extern u8 sInsectSpawnAprSlot4[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot1
extern u8 sInsectSpawnMaySlot1[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot4
extern u8 sInsectSpawnMaySlot4[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot4
extern u8 sInsectSpawnOctSlot4[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot1
extern u8 sInsectSpawnAprSlot1[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot1
extern u8 sInsectSpawnMarSlot1[20];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot1
extern u8 sInsectSpawnNovSlot1[16];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot5
extern u8 sInsectSpawnMaySlot5[16];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMaySlot0
extern u8 sInsectSpawnMaySlot0[16];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot1
extern u8 sInsectSpawnOctSlot1[16];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot0
extern u8 sInsectSpawnMarSlot0[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnMarSlot5
extern u8 sInsectSpawnMarSlot5[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot5
extern u8 sInsectSpawnOctSlot5[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot0
extern u8 sInsectSpawnAprSlot0[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot0
extern u8 sInsectSpawnNovSlot0[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnOctSlot0
extern u8 sInsectSpawnOctSlot0[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnAprSlot5
extern u8 sInsectSpawnAprSlot5[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnNovSlot5
extern u8 sInsectSpawnNovSlot5[12];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot0
extern u8 sInsectSpawnFebSlot0[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot3
extern u8 sInsectSpawnDecSlot3[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot5
extern u8 sInsectSpawnJanSlot5[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot4
extern u8 sInsectSpawnFebSlot4[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot1
extern u8 sInsectSpawnJanSlot1[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot1
extern u8 sInsectSpawnDecSlot1[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot3
extern u8 sInsectSpawnFebSlot3[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot0
extern u8 sInsectSpawnJanSlot0[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot1
extern u8 sInsectSpawnFebSlot1[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot2
extern u8 sInsectSpawnJanSlot2[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot2
extern u8 sInsectSpawnFebSlot2[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnFebSlot5
extern u8 sInsectSpawnFebSlot5[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot2
extern u8 sInsectSpawnDecSlot2[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot4
extern u8 sInsectSpawnDecSlot4[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot5
extern u8 sInsectSpawnDecSlot5[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot3
extern u8 sInsectSpawnJanSlot3[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnDecSlot0
extern u8 sInsectSpawnDecSlot0[8];
#endif
#ifndef PROTO_LOCAL_sInsectSpawnJanSlot4
extern u8 sInsectSpawnJanSlot4[8];
#endif
#endif

#endif
