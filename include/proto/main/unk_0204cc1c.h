#ifndef PROTO_PROTO_MAIN_UNK_0204CC1C_H
#define PROTO_PROTO_MAIN_UNK_0204CC1C_H

// Prototypes of the functions defined in src/main/unk_0204cc1c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "town/MapBlockEntry.h"
#include "town/TownBlockCell.h"
#include "town/Unk_0204e858_Grid.h"
struct FgDataIndex;
struct RoomBlockMap;
struct Unk_0204d0f4_Info;
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
class TownMap;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_BlockMap_DebugStub
void BlockMap_DebugStub();
#endif
#ifndef PROTO_LOCAL_AcreItemGrid_Get
void *AcreItemGrid_Get(void *p);
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_Destroy
void HouseRoomMaps_Destroy(void *heap);
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_UpdateAll
void HouseRoomMaps_UpdateAll();
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_BindBg
void HouseRoomMaps_BindBg();
#endif
#ifndef PROTO_LOCAL_VillagerRoomMap_Destroy
void VillagerRoomMap_Destroy(void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_Unload
void FgData_Unload(void *heap);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_MapBlockEntry_NewArray
MapBlockEntry *MapBlockEntry_NewArray(s32 n, void *heap);
#endif
#ifndef PROTO_LOCAL_FieldPos_ToBlockUnit
void FieldPos_ToBlockUnit(s32 *ax, s32 *az, s32 *cx, s32 *cz, VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_FieldPos_ToBlockUnit2
void FieldPos_ToBlockUnit2(s32 *a, s32 *c, VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_FieldPos_ToUnit
void FieldPos_ToUnit(s32 *ox, s32 *oz, VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_FieldUnit_FromBlockUnit
void FieldUnit_FromBlockUnit(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_FieldPos_SnapToUnitCenter
void FieldPos_SnapToUnitCenter(VecFx32 *dst, VecFx32 *src);
#endif
#ifndef PROTO_LOCAL_FieldPos_FromBlockUnitCenter
void FieldPos_FromBlockUnitCenter(VecFx32 *v, s32 a, s32 b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_FieldPos_FromUnitCenter
void FieldPos_FromUnitCenter(VecFx32 *v, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_FieldPos_FromBlockUnit
void FieldPos_FromBlockUnit(VecFx32 *v, s32 a, s32 b, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindBlockAllAttr
TownBlockCell *BlockMap_FindBlockAllAttr(Unk_0204e858_Grid *g, s32 filter);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindBlockAnyAttr
TownBlockCell *BlockMap_FindBlockAnyAttr(Unk_0204e858_Grid *g, s32 filter);
#endif
#ifndef PROTO_LOCAL_BlockMap_GetBlockAttr
s32 BlockMap_GetBlockAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy);
#endif
#ifndef PROTO_LOCAL_BlockMap_BlockHasAllAttr
void *BlockMap_BlockHasAllAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a);
#endif
#ifndef PROTO_LOCAL_BlockMap_GetItemPtr
u16 *BlockMap_GetItemPtr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer);
#endif
#ifndef PROTO_LOCAL_BlockMap_GetItemPtrAtPos
u16 *BlockMap_GetItemPtrAtPos(Unk_0204e858_Grid *g, VecFx32 *v, s32 layer);
#endif
#ifndef PROTO_LOCAL_BlockMap_SetItem
void *BlockMap_SetItem(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);
#endif
#ifndef PROTO_LOCAL_BlockMap_SetItemAtUnit
void *BlockMap_SetItemAtUnit(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindItemAllAttr
BOOL BlockMap_FindItemAllAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindItemAnyAttr
BOOL BlockMap_FindItemAnyAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
#endif
#ifndef PROTO_LOCAL_BlockMap_SetBuried
s32 BlockMap_SetBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
#endif
#ifndef PROTO_LOCAL_BlockMap_SetBuriedAtUnit
s32 BlockMap_SetBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_BlockMap_ClearBuried
s32 BlockMap_ClearBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
#endif
#ifndef PROTO_LOCAL_BlockMap_ClearBuriedAtUnit
s32 BlockMap_ClearBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_BlockMap_IsBuried
s32 BlockMap_IsBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
#endif
#ifndef PROTO_LOCAL_BlockMap_IsBuriedAtUnit
s32 BlockMap_IsBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
#endif
#ifndef PROTO_LOCAL_BlockMap_IsBuriedAtPos
s32 BlockMap_IsBuriedAtPos(Unk_0204e858_Grid *g, VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_TownMap_HasEnoughSigns
BOOL TownMap_HasEnoughSigns(void *o);
#endif
#ifndef PROTO_LOCAL_TownMap_HasEnoughRocks
BOOL TownMap_HasEnoughRocks(void *o);
#endif
#ifndef PROTO_LOCAL_TownMap_ApplyAcreLayouts
void TownMap_ApplyAcreLayouts(void *ov, s32 arg);
#endif
#ifndef PROTO_LOCAL_TownMap_Generate
void TownMap_Generate(TownMap *o, s32 arg);
#endif
#ifndef PROTO_LOCAL_TownMap_GetAcres
u8 *TownMap_GetAcres(void *p);
#endif
#ifndef PROTO_LOCAL_ItemGrid_Clear
void ItemGrid_Clear(u16 *p);
#endif
#ifndef PROTO_LOCAL_TownBlockMap_Create
BOOL TownBlockMap_Create(void *heap);
#endif
#ifndef PROTO_LOCAL_TownBlockMap_Destroy
s32 TownBlockMap_Destroy(void *heap);
#endif
#ifndef PROTO_LOCAL_BlockMap_PutStructure
s32 BlockMap_PutStructure(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_BlockMap_RemoveStructure
s32 BlockMap_RemoveStructure(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_BlockMap_RemoveStructureAt
s32 BlockMap_RemoveStructureAt(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindItem
void BlockMap_FindItem(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
#endif
#ifndef PROTO_LOCAL_BlockMap_FindStructure
void BlockMap_FindStructure(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
#endif
#ifndef PROTO_LOCAL_Town_FindTownHall
BOOL Town_FindTownHall(void *a, s32 *pos, s32 *p3, s32 *p4);
#endif
#ifndef PROTO_LOCAL_Town_FindPlayerHouse
BOOL Town_FindPlayerHouse(void *a, s32 *pos, s32 *p3, s32 *p4);
#endif
#ifndef PROTO_LOCAL_Town_FindGateHouse
BOOL Town_FindGateHouse(void *a, s32 *pos, s32 *p3, s32 *p4);
#endif
#ifndef PROTO_LOCAL_Town_FindTownHallFront
BOOL Town_FindTownHallFront(void *a, s32 *pos, s32 *p3, s32 *p4);
#endif
#ifndef PROTO_LOCAL_Town_FindGulliverShip
BOOL Town_FindGulliverShip(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_Get
RoomBlockMap *HouseRoomMaps_Get(s32 i);
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_GetForScene
RoomBlockMap *HouseRoomMaps_GetForScene(s32 a);
#endif
#ifndef PROTO_LOCAL_HouseRoomMaps_Create
BOOL HouseRoomMaps_Create(void *heap);
#endif
#ifndef PROTO_LOCAL_HouseRoomMap_Update
void HouseRoomMap_Update(RoomBlockMap *p, s32 i);
#endif
#ifndef PROTO_LOCAL_HouseRoomMap_Init
BOOL HouseRoomMap_Init(RoomBlockMap *p, s32 i, void *heap);
#endif
#ifndef PROTO_LOCAL_VillagerRoom_BuildEntry
Unk_0204d0f4_Info *VillagerRoom_BuildEntry(u16 *dst, u32 b, void *heap);
#endif
#ifndef PROTO_LOCAL_VillagerRoom_LoadLayout
BOOL VillagerRoom_LoadLayout(u16 *dst, u32 b, void *heap);
#endif
#ifndef PROTO_LOCAL_VillagerRoomMap_Init
BOOL VillagerRoomMap_Init(RoomBlockMap *p, u32 a, void *heap);
#endif
#ifndef PROTO_LOCAL_VillagerRoomMap_Create
RoomBlockMap *VillagerRoomMap_Create(u32 a, void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_Load
BOOL FgData_Load(void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_LoadIndices
BOOL FgData_LoadIndices(FgDataIndex *t, void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_IsValidTable
BOOL FgData_IsValidTable(FgDataIndex *t, s32 i);
#endif
#ifndef PROTO_LOCAL_FgData_GetLayoutOffset
s32 FgData_GetLayoutOffset(FgDataIndex *t, s32 i, s32 j);
#endif
#ifndef PROTO_LOCAL_FgData_GetLayoutSize
s32 FgData_GetLayoutSize(FgDataIndex *t, s32 i, s32 j);
#endif
#ifndef PROTO_LOCAL_FgData_HasLayout
BOOL FgData_HasLayout(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_ItemGrid_Alloc
u16 *ItemGrid_Alloc(void *heap, s32 align);
#endif
#ifndef PROTO_LOCAL_FgData_ReadLayout
BOOL FgData_ReadLayout(FgDataIndex *t, void *dst, s32 i, s32 j, s32 n);
#endif
#ifndef PROTO_LOCAL_FgData_ApplyLayoutGlobal
BOOL FgData_ApplyLayoutGlobal(u16 *dst, s32 i, s32 j, void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_CreateLayoutGrid
u16 *FgData_CreateLayoutGrid(u16 *dst, s32 b, void *heap, s32 d);
#endif
#ifndef PROTO_LOCAL_FgData_ApplyLayout
BOOL FgData_ApplyLayout(FgDataIndex *t, u16 *dst, s32 i, s32 j, void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_ReadLayoutEntries
void *FgData_ReadLayoutEntries(void *a, s32 *b, s32 c, s32 d, void *heap);
#endif
#ifndef PROTO_LOCAL_FgData_ReadVillagerLayout
void *FgData_ReadVillagerLayout(void *a, s32 *b, s32 c, void *d);
#endif
#ifndef PROTO_LOCAL_FgData_GetVillagerLayout
s32 FgData_GetVillagerLayout(s32 a, s32 b, s32 c);
#endif
}
#endif

#endif
