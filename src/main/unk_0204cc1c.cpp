#include "types.h"

#include "Unk_020d8c7c.h"
#include "town/Unk_020b5350_Info.h"
#include "town/Unk_0204c3c0_Ver.h"
#include "game/Unk_0204da0c_Size.h"
#include "town/Unk_0204e858_Grid.h"


struct Unk_0204da0c_Map {
    u32 blocks;
    Unk_0204da0c_Size size;
};



struct TownState {
    /* 0x00 */ Unk_0204c3c0_Ver lastUpdate;
    /* 0x04 */ s32 nativeFruit;
    /* 0x08 */ u8 nextWeekDay;
    /* 0x09 */ u8 nextWeekMonth;
    /* 0x0a */ u8 nextWeekYear;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 perfectStreak;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 eventUpdateDay;
    /* 0x55 */ u8 eventUpdateMonth;
    /* 0x56 */ u8 eventUpdateYear;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot playerDates[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
}

extern "C" void Town_ClearBorderTrees(Unk_0204da0c_Map *p);

// ---- SceneMapModule ----
class SceneMapModule : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~SceneMapModule();

    /* 0x50 */ u16 moduleParam;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *ownedGrids;
    /* 0x58 */ s32 numOwnedGrids;

    s32 buildSceneMap(void *heap);
    void getHouseUnk(u32 *out, s32 n);
    void setOwnedGrid(u32 v, s32 idx);
    void freeOwnedGrids(void *heap);
    void allocOwnedGrids(void *heap);
    u32 *buildEntries(u32 *src, s32 n, void *heap);
    u32 loadLayoutGrid(u32 v, s32 idx, void *heap);
};

struct Unk_0204cf2c_Ent {
    u16 *data;
    s32 count;
};

struct Unk_0204cd00_Glyph {
    u16 v;
    u8 x;
    u8 y;
};

struct Unk_020ca2f4_Ent {
    u32 a;
    u32 b;
};

struct Unk_0204d0f4_V3 {
    s32 x, y, z;
};

struct Unk_0204d0f4_Info {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
};

struct Unk_0204d0a4 {
    u32 blocks;
    u32 width;
    u32 height;
    u32 unitsX;
    u32 unitsZ;
    u32 worldWidth;
    u32 worldHeight;
    u32 mapSlot;
    u32 itemGrid;
};

struct Unk_0204d560_Vec { s32 x, y, z; };

struct ItemId {
    u16 v;
    ItemId();
    ~ItemId();
};

struct AcreItemGrid {
    ItemId e[0x100];
    AcreItemGrid();
    ~AcreItemGrid();
};

struct TownBlockMap {
    u8 *blocks;
    s32 width;
    s32 height;
    s32 unitsX;
    s32 unitsZ;
    s32 worldWidth;
    s32 worldHeight;
    s32 mapSlot;
    u32 releaseBg();
    void bindBg();
    void updateAcreIds();
    void freeBlocks(void *heap);
    BOOL build(void *heap);
    void clear();
};

extern "C" {
struct Unk_0204d920_Pad { s32 v[4]; Unk_0204d920_Pad() {} ~Unk_0204d920_Pad() {} };
}

struct Unk_0204db24_L { volatile s32 xy[2]; Unk_0204d560_Vec v, w; };

struct Unk_0204dd20_Obj {
    u8 pad[0x2224];
    u8 f : 2;
};

struct Unk_0204debc_Pos {
    s32 x, y;
};

struct Unk_0204debc_Entry {
    u32 v;
    void *a;
    u32 z;
    void *b;
};

struct BuriedMask {
    u8 data[0x20];
    BuriedMask();
    ~BuriedMask();
};

struct Unk_0204e1a8_Out {
    s32 v[2];
};

struct Unk_0204e1a8_Vec {
    s32 x, y, z;
};

struct Unk_0204e1a8_Loc {
    volatile s32 x, y;
    Unk_0204e1a8_Vec v;
};

struct TownUnitShapeQuery {
    u8 data[4];
    TownUnitShapeQuery();
    ~TownUnitShapeQuery();
};

class TownMap {
public:
    u8 acres[0x24];
    AcreItemGrid items[16];
    BuriedMask buried[16];
    u8 unk_2224_lo : 2;
    u8 unk_2224_hi : 6;

    TownMap();
    ~TownMap();

    void *buildBlockEntries(s32 heap);
    void updateGroundSeason();
    u32 getGrassType();
    BOOL toTownAcreIndex(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in);
    BOOL isTownAcre(s32 x, s32 y);
    void *getAcreBuried(Unk_0204debc_Pos *in);
    void *getAcreItems(Unk_0204debc_Pos *in);
    void clear();
    BOOL placeStructure(u16 *a, s32 x, s32 y, u8 flag);
    BOOL putStructure(u16 *a, s32 x, s32 y);
    BOOL removeStructure(s32 x, s32 y, u16 *p);
    BOOL replaceStructure(u16 *a, u16 *b, u16 *c, s32 x, s32 y);
    BOOL replaceStructure(u16 *a, u16 *b, u16 *c, Unk_0204debc_Pos pos);
};

class BlockMap {
public:
    void *blocks;
    s32 width;
    s32 height;
    s32 unitsX;
    s32 unitsZ;
    s32 worldWidth;
    s32 worldHeight;
    s32 mapSlot;

    BOOL build(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap);
    void free(s32 heap);
    void clear();
    s32 clearPlantFlag(s32 a, s32 b);
    void getWalkLinksAtPos(void *a);
    s32 getWalkLinks(s32 a, s32 b);
    s32 getPlantFlag(s32 a, s32 b);
    s32 getDigKind(s32 a, s32 b);
    s32 isShore(s32 a, s32 b);
    s32 isGrassSurface(s32 a, s32 b);
    s32 isWalkable(s32 a, s32 b);
    void canPlaceItemAtBlockUnit(s32 a, s32 b, s32 c, s32 d);
    s32 canPlaceItem(s32 a, s32 b);
};




struct MapBlockEntry {
    u32 acreId;
    u32 layers[2];
    u32 buried;
    MapBlockEntry();
};

struct OverlaySlot {
    u8 overlayId;
    u8 refCount;
    u8 unk_02;
    u32 ramStart;
    u32 ramSize;
};

extern OverlaySlot sOverlaySlots[];

namespace Unk_0204eba0_Ns {
extern "C" u16 *BlockMap_GetItemPtr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
}

namespace Unk_0204eee4_Ns {
extern "C" s32 OverlayMgr_UnloadSlot(OverlaySlot *e);
}

// extern declarations
extern "C" {
extern char sFgDataFiPath[];
extern char sFgDataNrPath[];
extern char sFgDataFoPath[];
extern char sFgDataNfPath[];
extern char sFgDataFiIndexPath[];
extern char sFgDataNfIndexPath[];
extern char sFgDataNrIndexPath[];
extern char sFgDataFoIndexPath[];
extern TownBlockMap *gTownBlockMap;
extern Unk_0204cf2c_Ent *gFgDataIndex;
extern Unk_0204d0a4 *gVillagerRoomMap;
extern Unk_0204d0a4 *gHouseRoomMaps[5];
extern u16 sNativeFruitTrees[];
extern u8 gFieldSceneKind;
extern void *gCurrentHeap;
extern void *gSceneBlockMap;
extern u32 gSaveHouse[];
extern u32 gSaveTownMap[];
void TownState_ClearUnk0c(void *p);
void TownState_ClearUnk16(void *p);
void TownState_ClearEvents(void *p);
void TownState_PickNextWeekDate(void *p, void *q);
void Town_ReplaceSouthCedars(void *p);
void Town_InitNew();
s32 Random_GlobalBelow(s32 a);
BOOL Item_IsTreeStage0(u16 *p);
s32 FengShui_UpdateHouse();
s32 func_0204e2cc(void *a, void *heap);
void func_0204e2f0();
s32 func_0204e1a8(void *a, void *b, void *c, void *heap);
void Heap_Free(void *heap, void *p);
void *Heap_Alloc(void *heap, s32 size);
Unk_020b5350_Info *Scene_GetMapInfo();
s32 Scene_InUnk6To8();
u32 func_020603c8(void *p);
u32 _ZN9HouseData19buildRoomBlockEntryEiPv(void *p, u32 a, void *heap);
s32 Scene_GetCurrent();
s32 Scene_InHouseRoom();
u32 Scene_GetHouseRoom();
s32 Scene_InVillagerHouse();
u32 Scene_GetVillagerHouse();
s32 SceneId_IsHouseRoom();
void *_ZN7TownMap17buildBlockEntriesEi(void *p, void *heap);
extern const Unk_020ca2f4_Ent sFgDataFiles[4];
extern u32 gSaveVillagers;
extern u32 gRoomBclHeap;
extern u32 data_020c8cbc;
extern u32 data_020c8cb8;
void *Heap_AllocAligned(void *heap, s32 size, s32 align);
void *Heap_AllocTail(void *heap, s32 size);
void func_020e885c(u32 v);
u32 SaveVillagers_Get(u32 *a, s32 b);
s32 _ZN20VillagerDataItemView13getRoomLayoutEPiS0_(u32 h, s32 *a, s32 *b);
u32 _ZN20VillagerDataItemView13getInfo28ItemEv(u32 h);
void Villager_ResolveRoomLayout(u32 h, void *p);
void File_ReadRangeByPath(u32 a, void *dst, s32 size, s32 off);
void *File_LoadAlloc(u32 a, void *heap, s32 b, s32 *sizeOut);
u32 MapBlock_NewArray(s32 a, void *heap, s32 b);
void CollisionMap_Release(u32 h);
void CollisionMap_Bind(u32 w, u32 h, u32 c, u32 d);
u32 BgModelCache_Get();
u32 _ZN12BgModelCache10getAcreBclEi(u32 a, u32 b);
void _ZN8MapBlock4initEiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(u32 h, u32 a, Unk_0204d0f4_V3 *v, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h2, u32 i);
u32 _ZN12MapBlockAcre9getAcreIdEv(u32 h);
u32 BgModel_LoadBcl(u32 a, u32 b);
s32 _ZN8MapBlock6bindBgEP16Unk_02037618_Subjj(u32 h, s32 a, u32 b, u32 c);
u32 _ZN9HouseData13getRoomAcreIdEi(u32 *a);
void _ZN12MapBlockAcre9setAcreIdEj(u32 h, s32 i);
void RoomBclHeap_Destroy();
void RoomBclHeap_Create();
u32 SceneId_GetHouseRoom(u32 v);
s32 HouseData_IsValidRoomIndex();
u16 *_ZN7TownMap12getAcreItemsEP16Unk_0204debc_Pos(void *t, s32 *idx);
void _ZN7TownMap5clearEv(void *t);
void Town_GenerateAcres(void *t);
extern void *gTownBclHeap;
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 _ZN7TownMap15removeStructureEiiPt(u32 a, u32 b, u32 c, u32 d);
s32 _ZN7TownMap12putStructureEPtii(u32 a, u32 b, u32 c, u32 d);
void *StrBSize_Get(u16 *t);
u32 _ZN12StrBSizeData16getTriangleCountEv(void *h);
s32 _ZN12StrBSizeData11getTriangleEPiS0_S0_j(void *h, Unk_0204d560_Vec *a, Unk_0204d560_Vec *b, Unk_0204d560_Vec *c, u32 i);
s32 FX_Div(s32 a, s32 b);
s32 Ground_GetDefaultY(s32 a);
void MapBlock_Init(void *a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 *i, s32 j);
s32 TownBclHeap_Destroy();
void TownBclHeap_Create();
void func_02004b60();
void func_0203442c();
void CollisionMap_Select(s32 v);
s32 Ground_ClearPlantFlag(s32 a, s32 b);
s32 Ground_GetWalkLinks(s32 a, s32 b);
s32 Ground_GetPlantFlag(s32 a, s32 b);
s32 Ground_GetDigKind(s32 a, s32 b);
s32 Ground_IsShore(s32 a, s32 b);
s32 Ground_IsGrassSurface(s32 a, s32 b);
s32 Ground_IsWalkable(s32 a, s32 b);
s32 Ground_CanPlaceItem(s32 a, s32 b);
u32 _ZN12BgModelCache7getAcreEi(u32 a, u32 b);
u32 GroundSeason_CalcPhase();
void _ZN14SnowmanRecords11updateDailyEv(const char *s);
void BuriedMask_Reset(void *p);
BOOL Item_IsNormalItem(u16 *p);
void LostAndFound_Add(u16 v);
s32 FieldStructureMgr_Get();
BOOL FieldStructureMgr_SpawnBuilding(s32 a, void *b, s32 x, s32 y, s32 f);
u32 _ZN12StrBSizeData21getFootprintUnitCountEv(void *h);
u32 _ZN12StrBSizeData17getClearUnitCountEv(void *h);
BOOL _ZN12StrBSizeData16getFootprintUnitEPiS0_j(void *h, s32 *dx, s32 *dy, u32 i);
BOOL _ZN12StrBSizeData12getClearUnitEPiS0_j(void *h, s32 *dx, s32 *dy, u32 i);
BOOL _ZN11CommManager8isOnlineEv(void *g);
BOOL Item_IsSnowman(u16 *p);
s32 Item_GetSnowmanIndex(u16 *p);
s32 Item_GetStumpSize(u16 *p);
void _ZN14SnowmanRecords6removeEj(void *obj, s32 v);
extern char data_021ed2e6[];
extern void *gCommManager;
BOOL FishTable_IsLateMonth(u8 v);
void Fatal_Trap();
void OverlayMgr_UnloadSlot(OverlaySlot *e);
void OverlayMgr_LoadSlot(OverlaySlot *e, u32 id);
void OverlayMgr_UnloadOverlay(u32 id);
void OverlayMgr_LoadOverlay(u32 id);
void OverlayMgr_GetInfo(void *p, u32 id);
void File_UnloadOverlay(u32 id);
void File_LoadOverlay(u32 id);
void *FS_LoadOverlayInfo(void *p, s32 v, u32 n);
void FS_GetOverlayFileID(void *a, void *b);
s32 MapBlock_ClearBuried(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 MapBlock_SetBuried(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 MapBlock_HasAnyAttr(Unk_0204e858_Cell *c, s32 a);
s32 MapBlock_HasAllAttr(Unk_0204e858_Cell *c, s32 a);
s32 MapBlock_GetAttr(Unk_0204e858_Cell *c);
s32 MapBlock_FindItemInRange(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, s32 e, s32 f);
s32 MapBlock_GetItemPtr(Unk_0204e858_Cell *c, s32 a, s32 b, u8 d);
void *MapBlock_SetItem(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, u8 e);
void Clock_GetDayMonth(void *p);
void Clock_GetMinuteHour(void *p);
u8 FishTable_GetPeriod(u8 r);
u32 FishTable_GetHourSlot(u32 r);
void FishTable_Pick(void *a, void *b, s32 c, u32 d, u32 e);
}

// own functions
extern "C" {
s32 FgData_GetVillagerLayout(s32 a, s32 b, s32 c);
void *FgData_ReadVillagerLayout(void *a, s32 *b, s32 c, void *d);
void *FgData_ReadLayoutEntries(void *a, s32 *b, s32 c, s32 d, void *heap);
BOOL FgData_ApplyLayout(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap);
u16 *FgData_CreateLayoutGrid(u16 *dst, s32 b, void *heap, s32 d);
BOOL FgData_ApplyLayoutGlobal(u16 *dst, s32 i, s32 j, void *heap);
BOOL FgData_ReadLayout(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n);
u16 *ItemGrid_Alloc(void *heap, s32 align);
BOOL FgData_HasLayout(s32 a, s32 b);
s32 FgData_GetLayoutSize(Unk_0204cf2c_Ent *t, s32 i, s32 j);
s32 FgData_GetLayoutOffset(Unk_0204cf2c_Ent *t, s32 i, s32 j);
BOOL FgData_IsValidTable(Unk_0204cf2c_Ent *t, s32 i);
void FgData_FreeIndices(Unk_0204cf2c_Ent *t, void *heap);
BOOL FgData_LoadIndices(Unk_0204cf2c_Ent *t, void *heap);
void FgData_Unload(void *heap);
BOOL FgData_Load(void *heap);
void FgData_ClearIndices(Unk_0204cf2c_Ent *t);
void VillagerRoomMap_Destroy(void *heap);
void VillagerRoomMap_Free(Unk_0204d0a4 *p, void *heap);
Unk_0204d0a4 *VillagerRoomMap_Create(u32 a, void *heap);
BOOL VillagerRoomMap_Init(Unk_0204d0a4 *p, u32 a, void *heap);
BOOL VillagerRoom_LoadLayout(u16 *dst, u32 b, void *heap);
Unk_0204d0f4_Info *VillagerRoom_BuildEntry(u16 *dst, u32 b, void *heap);
void VillagerRoomMap_Clear(Unk_0204d0a4 *p);
void HouseRoomMap_FreeBlocks(Unk_0204d0a4 *p, void *heap);
BOOL HouseRoomMap_Init(Unk_0204d0a4 *p, s32 i, void *heap);
void HouseRoomMap_ReleaseBg(Unk_0204d0a4 *p);
void HouseRoomMap_BindBg(Unk_0204d0a4 *p);
void HouseRoomMaps_BindBg();
void HouseRoomMap_Update(Unk_0204d0a4 *p, s32 i);
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_Destroy(void *heap);
BOOL HouseRoomMaps_Create(void *heap);
Unk_0204d0a4 *HouseRoomMaps_GetForScene(s32 a);
Unk_0204d0a4 *HouseRoomMaps_Get(s32 i);
void HouseRoomMap_Clear(Unk_0204d0a4 *p);
BOOL Town_FindGulliverShip(void *a, void *b);
BOOL Town_FindTownHallFront(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL Town_FindGateHouse(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL Town_FindPlayerHouse(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL Town_FindTownHall(void *a, s32 *pos, s32 *p3, s32 *p4);
void BlockMap_FindStructure(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void BlockMap_FindItem(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void BlockMap_RemoveStructureAt(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f);
s32 BlockMap_RemoveStructure(u32 a, u32 b, u32 c, u32 d);
s32 BlockMap_PutStructure(u32 a, u32 b, u32 c, u32 d);
TownBlockMap *TownBlockMap_Get();
s32 TownBlockMap_Destroy(void *heap);
BOOL TownBlockMap_Create(void *heap);
void AcreItemGrid_Get();
void ItemGrid_Clear(u16 *p);
u8 *TownMap_GetAcres(void *p);
void TownMap_Generate(Unk_0204dd20_Obj *o, s32 arg);
void TownMap_ApplyAcreLayouts(void *ov, s32 arg);
BOOL TownMap_HasEnoughRocks(void *o);
BOOL TownMap_HasEnoughSigns(void *o);
s32 BlockMap_IsBuriedAtPos(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v);
s32 BlockMap_IsBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 BlockMap_IsBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 BlockMap_ClearBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 BlockMap_ClearBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 BlockMap_SetBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 BlockMap_SetBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
BOOL BlockMap_FindItemAnyAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
BOOL BlockMap_FindItemAllAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
void *BlockMap_SetItemAtUnit(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d);
void *BlockMap_SetItem(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);
u16 *BlockMap_GetItemPtrAtPos(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v, s32 layer);
void BlockMap_GetItemPtr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer);
void *BlockMap_BlockHasAllAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a);
s32 BlockMap_GetBlockAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy);
Unk_0204e858_Cell *BlockMap_FindBlockAnyAttr(Unk_0204e858_Grid *g, s32 filter);
Unk_0204e858_Cell *BlockMap_FindBlockAllAttr(Unk_0204e858_Grid *g, s32 filter);
void FieldPos_FromBlockUnit(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d);
void FieldPos_FromUnitCenter(Unk_0204e858_Vec *v, s32 x, s32 z);
void FieldPos_FromBlockUnitCenter(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d);
void FieldPos_SnapToUnitCenter(Unk_0204e858_Vec *dst, Unk_0204e858_Vec *src);
void FieldUnit_FromBlockUnit(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
void FieldPos_ToUnit(s32 *ox, s32 *oz, Unk_0204e858_Vec *v);
void FieldPos_ToBlockUnit2(s32 *a, s32 *c, Unk_0204e858_Vec *v);
void FieldPos_ToBlockUnit(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v);
MapBlockEntry *MapBlockEntry_NewArray(s32 n, void *heap);
MapBlockEntry::MapBlockEntry();
void BlockMap_DebugStub();
}

namespace Ns_0204c318 {
extern "C" {
Unk_0204da0c_Map *TownBlockMap_Get();
u16 *BlockMap_GetItemPtr(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
s32 BlockMap_SetItemAtUnit(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
s32 BlockMap_ClearBuriedAtUnit(Unk_0204da0c_Map *m, s32 x, s32 y);
void *ItemGrid_Alloc(void *heap, s32 n);
void *VillagerRoom_BuildEntry(void *a, u32 b, void *heap);
void *MapBlockEntry_NewArray(s32 n, void *heap);
s32 FgData_HasLayout(s32 a, u32 b);
u32 FgData_CreateLayoutGrid(s32 a, u32 b, void *heap, s32 n);
Unk_0204da0c_Map *HouseRoomMaps_GetForScene(s32 a);
s32 FgData_ReadVillagerLayout(void *a, s32 b, s32 c, s32 d);
}
}

namespace Ns_0204cc48 {
extern "C" {
extern u32 gSaveHouse;
void FieldUnit_FromBlockUnit(u32 *a, u32 *b, u32 w, u32 h, u32 c, u32 d);
Unk_0204d0f4_Info *MapBlockEntry_NewArray(s32 a, void *heap);
void *_ZN9HouseData19buildRoomBlockEntryEiPv(u32 *a, s32 b, void *heap);
}
}

namespace Ns_0204d560 {
extern "C" {
void FgData_ApplyLayoutGlobal(u16 *t, s32 a, s32 b, s32 c);
u32 Random_GlobalBelow(u32 a);
extern u8 gSaveTownMap[];
extern s32 data_020c8cbc;
extern s32 data_020c8cb8;
s32 BlockMap_FindItemAnyAttr(void *m, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g, s32 h);
void FieldPos_FromUnitCenter(void *p, s32 a, s32 b);
u16 *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
u32 CollisionMap_Release(s32 a);
void CollisionMap_Bind(s32 a, s32 b, s32 c, s32 d);
void func_020e885c(void *p);
void *Heap_Alloc(void *heap, u32 sz);
u32 _ZN12MapBlockAcre9getAcreIdEv(void *p);
void _ZN12MapBlockAcre9setAcreIdEj(void *p, u32 v);
void *MapBlock_NewArray(u32 a, u32 b, u32 c);
void BgModelCache_Get(void *p);
s32 BgModel_LoadBcl(u32 a, void *b);
void _ZN8MapBlock6bindBgEP16Unk_02037618_Subjj(void *c, s32 a, s32 b, s32 d);
s32 *_ZN7TownMap17buildBlockEntriesEi(void *a, void *b);
}
}

namespace Ns_0204debc {
extern "C" {
void *MapBlock_NewArray(s32 count, s32 heap, s32 align);
void CollisionMap_Bind(s32 w, s32 h, void *obj, s32 v);
s32 CollisionMap_Release(s32 v);
void Heap_Free(s32 heap, void *p);
void MapBlock_Init(void *a, u32 b, void *c, void *d, u32 e, void *f, u32 g, u32 h, void *i, u32 j);
extern s32 data_020c8cbc, data_020c8cb8;
void *MapBlockEntry_NewArray(s32 n, s32 heap);
void ItemGrid_Clear(void *p);
void *AcreItemGrid_Get(void *p);
void *BlockMap_GetItemPtr(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
void FieldPos_ToUnit(s32 *out1, s32 *out2, void *p);
void BlockMap_SetItemAtUnit(void *self, u16 *p, s32 x, s32 y, u32 flag);
void BlockMap_ClearBuriedAtUnit(void *self, s32 x, s32 y);
}
}

namespace Ns_0204e858 {
extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}
}

static inline BOOL Unk_0204c5c0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_0204cab4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

// ---- Town_SetNativeFruitTrees ----
static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

// ---- Town_ClearBorderTrees ----
static inline BOOL Unk_0204c6a4_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}

static inline BOOL Unk_0204cd00_R(Unk_0204cd00_Glyph *g) {
    u32 y = g->y;
    u32 x = g->x;
    BOOL r = FALSE;
    if (x < 0x10 && y < 0x10) r = TRUE;
    return r;
}

static inline BOOL Unk_0204d560_Chk(u16 *t) {
    if (Item_IsFurniture(t)) {
        t[1] = 0xfff1;
        return Item_GetFurnitureIndex(t) == Item_GetFurnitureIndex(t + 1) ? TRUE : FALSE;
    } else {
        return t[0] == 0xfff1 ? TRUE : FALSE;
    }
}

static inline BOOL Unk_0204e51c_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

inline void *operator new(unsigned long, void *p) {
    return p;
}

static inline Unk_0204e858_Cell *Unk_0204e858_GetCell(Unk_0204e858_Grid *g, u32 x, u32 y) {
    if (x < g->width && y < g->height && g->blocks != NULL) {
        return &g->blocks[y * g->width + x];
    }
    return NULL;
}

static inline BOOL Unk_0204e8b0_Bit(u16 *m, u32 x, u32 y) {
    BOOL r = FALSE;
    if (x >= 16 || y >= 16) {
    } else {
        r = TRUE;
    }
    if (r) {
        if (x < 16) {
            u32 v = m[y];
            r = TRUE;
            if ((v & (r << x)) != 0) {
                return r;
            }
        }
        r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

extern "C" void BlockMap_DebugStub() {}

extern "C" MapBlockEntry::MapBlockEntry() {
    u32 *p = layers;
    acreId = 0x102a;
    for (s32 i = 0; i < 2; i++) {
        *p++ = 0;
    }
    buried = 0;
}

extern "C" MapBlockEntry *MapBlockEntry_NewArray(s32 n, void *heap) {
    MapBlockEntry *p = (MapBlockEntry *)Ns_0204e858::Heap_AllocTail(heap, n * 16);
    if (p != NULL) {
        for (s32 i = 0; i < n; i++) {
            new (&p[i]) MapBlockEntry;
        }
    }
    return p;
}

extern "C" void FieldPos_ToBlockUnit(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v) {
    *ax = v->x >> 17;
    *az = v->z >> 17;
    *cx = (v->x >> 13) & 15;
    *cz = (v->z >> 13) & 15;
}

extern "C" void FieldPos_ToBlockUnit2(s32 *a, s32 *c, Unk_0204e858_Vec *v) {
    FieldPos_ToBlockUnit(a, a + 1, c, c + 1, v);
}

extern "C" void FieldPos_ToUnit(s32 *ox, s32 *oz, Unk_0204e858_Vec *v) {
    *ox = v->x >> 13;
    *oz = v->z >> 13;
}

extern "C" void FieldUnit_FromBlockUnit(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d) {
    *ox = (a << 4) + c;
    *oz = (b << 4) + d;
}

extern "C" void FieldPos_SnapToUnitCenter(Unk_0204e858_Vec *dst, Unk_0204e858_Vec *src) {
    FieldPos_FromUnitCenter(dst, src->x >> 13, src->z >> 13);
    dst->y = src->y;
}

extern "C" void FieldPos_FromBlockUnitCenter(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, z = 0;
    FieldUnit_FromBlockUnit(&x, &z, a, b, c, d);
    FieldPos_FromUnitCenter(v, x, z);
}

extern "C" void FieldPos_FromUnitCenter(Unk_0204e858_Vec *v, s32 x, s32 z) {
    v->x = (x << 13) + 0x1000;
    v->z = (z << 13) + 0x1000;
    v->y = 0;
}

extern "C" void FieldPos_FromBlockUnit(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    v->x = a << 17;
    v->z = b << 17;
    v->x = v->x + (c << 13);
    v->z = v->z + (d << 13);
}

extern "C" Unk_0204e858_Cell *BlockMap_FindBlockAllAttr(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    if (filter != 0) {
        u32 *sz = &g->width;
        s32 w = sz[0];
        s32 h = sz[1];
        s32 x0 = 0;
        Unk_0204e858_Cell *nullc = NULL;
        for (y = 0; y < h; y++) {
            for (x = x0; x < w; x++) {
                Unk_0204e858_Cell *cell;
                if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                    cell = &g->blocks[y * g->width + x];
                } else {
                    cell = nullc;
                }
                if (cell != NULL && MapBlock_HasAllAttr(cell, filter) != 0) {
                    return cell;
                }
            }
        }
    }
    return NULL;
}

extern "C" Unk_0204e858_Cell *BlockMap_FindBlockAnyAttr(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    u32 *sz = &g->width;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                cell = &g->blocks[y * g->width + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && MapBlock_HasAnyAttr(cell, filter) != 0) {
                return cell;
            }
        }
    }
    return NULL;
}

extern "C" s32 BlockMap_GetBlockAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy) {
    s32 r = 0;
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        r = MapBlock_GetAttr(cell);
    }
    return r;
}

extern "C" void *BlockMap_BlockHasAllAttr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = MapBlock_HasAllAttr(cell, a);
    }
    return (void *)r;
}

extern "C" void BlockMap_GetItemPtr(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        MapBlock_GetItemPtr(cell, lx, ly, layer);
    }
}

extern "C" u16 *BlockMap_GetItemPtrAtPos(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v, s32 layer) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    FieldPos_ToBlockUnit2(a, c, v);
    return Unk_0204eba0_Ns::BlockMap_GetItemPtr(g, a[0], a[1], c[0], c[1], layer);
}

extern "C" void *BlockMap_SetItem(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    void *r = NULL;
    if (cell != NULL) {
        r = MapBlock_SetItem(cell, a, lx, ly, d);
    }
    return r;
}

extern "C" void *BlockMap_SetItemAtUnit(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return BlockMap_SetItem(g, a, hx, hz, x - (hx << 4), z - (hz << 4), d);
}

extern "C" BOOL BlockMap_FindItemAllAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->width;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                cell = &g->blocks[y * g->width + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && MapBlock_HasAllAttr(cell, filter) != 0) {
                if (MapBlock_FindItemInRange(cell, a3, p4, p5, p6, p8) != 0) {
                    *outx = x;
                    *outz = y;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL BlockMap_FindItemAnyAttr(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->width;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                cell = &g->blocks[y * g->width + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL) {
                if (filter == 0 || MapBlock_HasAnyAttr(cell, filter) != 0) {
                    if (MapBlock_FindItemInRange(cell, a3, p4, p5, p6, p8) != 0) {
                        *outx = x;
                        *outz = y;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" s32 BlockMap_SetBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = MapBlock_SetBuried(cell, lx, ly);
    }
    return r;
}

extern "C" s32 BlockMap_SetBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return BlockMap_SetBuried(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 BlockMap_ClearBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = MapBlock_ClearBuried(cell, lx, ly);
    }
    return r;
}

extern "C" s32 BlockMap_ClearBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return BlockMap_ClearBuried(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 BlockMap_IsBuried(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    BOOL r = FALSE;
    if (cell != NULL && cell->buried != NULL) {
        r = Unk_0204e8b0_Bit(cell->buried, lx, ly);
    }
    return r;
}

extern "C" s32 BlockMap_IsBuriedAtUnit(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return BlockMap_IsBuried(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 BlockMap_IsBuriedAtPos(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    FieldPos_ToBlockUnit2(a, c, v);
    return BlockMap_IsBuried(g, a[0], a[1], c[0], c[1]);
}

BOOL TownMap::replaceStructure(u16 *a, u16 *b, u16 *c, volatile s32 x, volatile s32 y) {
    BOOL result;
    u32 cnt, cnt2;
    BOOL f9, f8, f7, f6, f5, f4, f3, f2, f1;
    s32 qy;
    s32 gx, gy;
    void *g;
    s32 py;
    u32 j;
    void *h;
    u16 tile, empty, key;
    s32 dx, dy;
    u32 i;
    s32 px, qx;
    u16 *p, *cell, *cell2;
    s32 hx, hy, tx, ty;
    BOOL ok;
    u32 v;
    h = NULL;
    result = FALSE;
    tx = x;
    ty = y;
    hx = tx >> 4;
    hy = ty >> 4;
    p = (u16 *)Ns_0204debc::BlockMap_GetItemPtr(this, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
    if (p) {
        tile = *p;
        if (Item_IsNormalItem(&tile) || Item_IsFurniture(&tile)) LostAndFound_Add(tile);
    }
    if (Unk_0204e51c_InRange(b, 0x5000, 0x5021)) h = StrBSize_Get(b);
    if (h) {
        cnt = _ZN12StrBSizeData21getFootprintUnitCountEv(h);
        i = 0;
        gx = x;
        gy = y;
        g = gCommManager;
        for (; i < cnt; i++) {
            if (_ZN12StrBSizeData16getFootprintUnitEPiS0_j(h, &dx, &dy, i)) {
                px = gx + dx;
                py = gy + dy;
                hx = px >> 4;
                hy = py >> 4;
                cell = (u16 *)Ns_0204debc::BlockMap_GetItemPtr(this, hx, hy, px - (hx << 4), py - (hy << 4), 0);
                if (cell) {
                    if (Item_IsFurniture(cell) || Item_IsNormalItem(cell)) {
                        if (!_ZN11CommManager8isOnlineEv(g)) LostAndFound_Add(*cell);
                    } else if (Item_IsSnowman(cell)) {
                        _ZN14SnowmanRecords6removeEj(data_021ed2e6, Item_GetSnowmanIndex(cell));
                    }
                }
                Ns_0204debc::BlockMap_SetItemAtUnit(this, c, px, py, 0);
                Ns_0204debc::BlockMap_ClearBuriedAtUnit(this, px, py);
            }
        }
        Ns_0204debc::BlockMap_SetItemAtUnit(this, a, x, y, 0);
        if (Item_IsFurniture(c)) {
            key = 0xf030;
            ok = Item_GetFurnitureIndex(c) == Item_GetFurnitureIndex(&key);
        } else {
            ok = *c == 0xf030;
        }
        if (ok) {
            cnt2 = _ZN12StrBSizeData17getClearUnitCountEv(h);
            for (j = 0; j < cnt2; j++) {
                if (_ZN12StrBSizeData12getClearUnitEPiS0_j(h, &dx, &dy, j)) {
                    qx = gx + dx;
                    qy = gy + dy;
                    hx = qx >> 4;
                    hy = qy >> 4;
                    cell2 = (u16 *)Ns_0204debc::BlockMap_GetItemPtr(this, hx, hy, qx - (hx << 4), qy - (hy << 4), 0);
                    if (cell2) {
                        f9 = TRUE; f8 = TRUE; f7 = TRUE; f6 = TRUE; f5 = TRUE; f4 = TRUE; f3 = TRUE; f2 = TRUE; f1 = FALSE;
                        v = *cell2;
                        if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
                        if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
                        if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
                        if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
                        if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
                        if (!f5 && !(v == 0x69)) f6 = FALSE;
                        if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
                        if (!f7 && !(v == 0x6d)) f8 = FALSE;
                        if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
                        if ((f9 && !Item_IsTreeStage0(cell2)) || Item_GetStumpSize(cell2) != -1) {
                            empty = 0xfff1;
                            Ns_0204debc::BlockMap_SetItemAtUnit(this, &empty, qx, qy, 0);
                        }
                    }
                }
            }
        }
        result = TRUE;
    }
    return result;
}

BOOL TownMap::putStructure(u16 *a, s32 x, s32 y) {
    BOOL r = FALSE;
    if (Unk_0204e51c_InRange(a, 0x5000, 0x5021)) {
        u16 t = 0xf030;
        r = replaceStructure(a, a, &t, x, y);
    }
    return r;
}

BOOL TownMap::removeStructure(s32 x, s32 y, u16 *p) {
    u16 t[2];
    s32 hx = x >> 4, hy = y >> 4;
    u16 *c = (u16 *)Ns_0204debc::BlockMap_GetItemPtr(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    BOOL r = FALSE;
    if (c) {
        if (Unk_0204e51c_InRange(c, 0x5000, 0x5021)) {
            t[0] = 0xfff1;
            if (p) t[0] = *p;
            t[1] = 0xfff1;
            r = replaceStructure(t, c, &t[1], x, y);
        }
    }
    return r;
}

s32 BlockMap::canPlaceItem(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_CanPlaceItem(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

void BlockMap::canPlaceItemAtBlockUnit(s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, y = 0;
    FieldUnit_FromBlockUnit(&x, &y, a, b, c, d);
    canPlaceItem(x, y);
}

s32 BlockMap::isWalkable(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_IsWalkable(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

s32 BlockMap::isGrassSurface(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_IsGrassSurface(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

s32 BlockMap::isShore(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_IsShore(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

s32 BlockMap::getDigKind(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_GetDigKind(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

s32 BlockMap::getPlantFlag(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_GetPlantFlag(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

s32 BlockMap::getWalkLinks(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_GetWalkLinks(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

void BlockMap::getWalkLinksAtPos(void *a) {
    s32 x = 0, y = 0;
    Ns_0204debc::FieldPos_ToUnit(&x, &y, a);
    getWalkLinks(x, y);
}

s32 BlockMap::clearPlantFlag(s32 a, s32 b) { 
    CollisionMap_Select(mapSlot); 
    s32 r = Ground_ClearPlantFlag(a, b); 
    CollisionMap_Select(0); 
    return r; 
}

void BlockMap::clear() {
    s32 z = 0;
    width = z;
    height = z;
    unitsX = z;
    unitsZ = z;
    blocks = (void *)z;
    mapSlot = z;
}

void BlockMap::free(s32 heap) {
    if (blocks) {
        Ns_0204debc::Heap_Free(heap, blocks);
        blocks = NULL;
    }
    Ns_0204debc::CollisionMap_Release(mapSlot);
}// Declarations for data defined further down (definition order sets the data layout)
extern TownBlockMap *gTownBlockMap;
extern char sFgDataFoIndexPath[];
extern Unk_0204d0a4 *gHouseRoomMaps[5];
extern char sFgDataNfIndexPath[];
extern char sFgDataNrPath[];
extern Unk_0204cf2c_Ent *gFgDataIndex;
extern const Unk_020ca2f4_Ent sFgDataFiles[4];
extern char sFgDataNrIndexPath[];
extern Unk_0204d0a4 *gVillagerRoomMap;
extern char sFgDataFoPath[];
extern char sFgDataFiPath[];
extern char sFgDataNfPath[];
extern char sFgDataFiIndexPath[];// Declarations for data defined further down (definition order sets the data layout)
extern char sFgDataFoIndexPath[];
extern Unk_0204cf2c_Ent *gFgDataIndex;
extern char sFgDataNfPath[];
extern TownBlockMap *gTownBlockMap;
extern char sFgDataFiPath[];
extern char sFgDataNrPath[];
extern char sFgDataNrIndexPath[];
extern Unk_0204d0a4 *gVillagerRoomMap;
extern char sFgDataFoPath[];
extern char sFgDataFiIndexPath[];
extern char sFgDataNfIndexPath[];
extern Unk_0204d0a4 *gHouseRoomMaps[5];
extern const Unk_020ca2f4_Ent sFgDataFiles[4];

char sFgDataFoIndexPath[] = "fg_data/fo_h.bin";

Unk_0204cf2c_Ent *gFgDataIndex;

char sFgDataNfPath[] = "fg_data/nf.bin";

TownBlockMap *gTownBlockMap;

char sFgDataFiPath[] = "fg_data/fi.bin";

char sFgDataNrPath[] = "fg_data/nr.bin";

char sFgDataNrIndexPath[] = "fg_data/nr_h.bin";

Unk_0204d0a4 *gVillagerRoomMap;

char sFgDataFoPath[] = "fg_data/fo.bin";

char sFgDataFiIndexPath[] = "fg_data/fi_h.bin";

BOOL BlockMap::build(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap) {
    s32 count = sz->v[0] * sz->v[1];
    BOOL r = FALSE;
    mapSlot = 0;
    if (blocks == NULL) blocks = Ns_0204debc::MapBlock_NewArray(count, heap, 4);
    if (blocks) {
        Unk_0204e1a8_Loc l;
        u8 *buf;
        s32 zero = 0;
        l.x = zero;
        l.y = zero;
        l.v.x = zero;
        l.v.y = zero;
        l.v.z = zero;
        buf = (u8 *)blocks;
        width = sz->v[0];
        height = sz->v[1];
        worldWidth = width * Ns_0204debc::data_020c8cbc;
        worldHeight = height * data_020c8cb8;
        FieldUnit_FromBlockUnit(&unitsX, &unitsZ, width, height, 0, 0);
        static TownUnitShapeQuery obj;
        Ns_0204debc::CollisionMap_Bind(width, height, &obj, mapSlot);
        for (l.y = 0; l.y < height; l.y++) {
            for (l.x = 0; l.x < width; l.x++) {
                Unk_0204e1a8_Vec w;
                l.v.x = l.x << 17;
                l.v.z = l.y << 17;
                w = l.v;
                u32 h = _ZN12BgModelCache7getAcreEi(BgModelCache_Get(), e->v);
                Ns_0204debc::MapBlock_Init(buf, e->v, &w, e->a, e->z, e->b, h, 0, (void *)&l, 0);
                buf += 0x28;
                e++;
            }
        }
        r = TRUE;
    }
    return r;
}

BOOL TownMap::placeStructure(u16 *a, s32 x, s32 y, u8 flag) {
    u16 tile;
    s32 hx = x >> 4, hy = y >> 4;
    u16 *p = (u16 *)Ns_0204debc::BlockMap_GetItemPtr(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    tile = 0xfff1;
    if (p) tile = *p;
    if (flag && FieldStructureMgr_Get()) {
        return FieldStructureMgr_SpawnBuilding(FieldStructureMgr_Get(), a, x, y, 1);
    }
    if (putStructure(a, x, y)) {
        if (Item_IsNormalItem(&tile) || Item_IsFurniture(&tile)) LostAndFound_Add(tile);
        return TRUE;
    }
    return FALSE;
}

TownMap::TownMap() {}

TownMap::~TownMap() {}

void TownMap::clear() {
    u8 *p = acres;
    AcreItemGrid *a = items;
    BuriedMask *b = buried;
    s32 i, j;
    for (i = 0; i < 0x24; i++) *p++ = 0x86;
    for (j = 0; j < 16; j++) {
        Ns_0204debc::ItemGrid_Clear(a);
        BuriedMask_Reset(b);
        a++;
        b++;
    }
    unk_2224_lo = 0;
}

void *TownMap::getAcreItems(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (toTownAcreIndex(&a, &b)) {
        r = Ns_0204debc::AcreItemGrid_Get((u8 *)this + 0x24 + a.y * 0x800 + a.x * 0x200);
    }
    return r;
}

void *TownMap::getAcreBuried(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (toTownAcreIndex(&a, &b)) {
        r = (u8 *)this + 0x2024 + a.y * 0x80 + a.x * 0x20;
    }
    return r;
}

BOOL TownMap::isTownAcre(s32 x, s32 y) {
    if (x > 0 && x < 5 && y > 0 && y < 5) return TRUE;
    return FALSE;
}

BOOL TownMap::toTownAcreIndex(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in) {
    BOOL r = FALSE;
    if (isTownAcre(in->x, in->y)) {
        out->x = in->x - 1;
        out->y = in->y - 1;
        r = TRUE;
    }
    return r;
}

u32 TownMap::getGrassType() {
    return unk_2224_lo;
}

void TownMap::updateGroundSeason() {
    u32 v = GroundSeason_CalcPhase();
    unk_2224_hi = v;
    _ZN14SnowmanRecords11updateDailyEv(data_021ed2e6);
}

void *TownMap::buildBlockEntries(s32 heap) {
    volatile s32 zero0, zero1;
    Unk_0204debc_Pos pos;
    Unk_0204debc_Entry *r;
    s32 idx;
    pos.x = 0;
    pos.y = 0;
    r = (Unk_0204debc_Entry *)Ns_0204debc::MapBlockEntry_NewArray(0x24, heap);
    if (r) {
        idx = 0;
        pos.y = 0;
        zero0 = 0;
        zero1 = 0;
        for (; pos.y < 6; pos.y++) {
            for (pos.x = zero0; pos.x < 6; pos.x++) {
                Unk_0204debc_Entry *e = &r[idx];
                e->v = ((u8 *)this + pos.y * 6)[pos.x];
                e->a = getAcreItems(&pos);
                e->z = zero1;
                e->b = getAcreBuried(&pos);
                idx++;
            }
        }
    }
    return r;
}

extern "C" BOOL TownMap_HasEnoughSigns(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = _ZN7TownMap12getAcreItemsEP16Unk_0204debc_Pos(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    if (*p == 0x500a) cnt++;
                }
            }
        }
    }
    if (cnt >= 9) r = TRUE;
    return r;
}

extern "C" BOOL TownMap_HasEnoughRocks(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    BOOL f;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    f = FALSE;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = _ZN7TownMap12getAcreItemsEP16Unk_0204debc_Pos(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    f = FALSE;
                    if (*p >= 0xe3 && *p <= 0xe7) f = TRUE;
                    if (f) cnt++;
                }
            }
        }
    }
    if (cnt >= 5) r = TRUE;
    return r;
}

extern "C" void TownMap_ApplyAcreLayouts(void *ov, s32 arg) {
    u8 *o = (u8 *)ov;
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            u16 *p = _ZN7TownMap12getAcreItemsEP16Unk_0204debc_Pos(o, xy);
            if (p) {
                Ns_0204d560::FgData_ApplyLayoutGlobal(p, 0, (o + xy[1] * 6)[xy[0]] & 0xfff, arg);
            }
        }
    }
}

extern "C" void TownMap_Generate(Unk_0204dd20_Obj *o, s32 arg) {
    _ZN7TownMap5clearEv(o);
    o->f = Ns_0204d560::Random_GlobalBelow(3);
    do {
        Town_GenerateAcres(o);
        TownMap_ApplyAcreLayouts(o, arg);
    } while (!TownMap_HasEnoughSigns(o) || !TownMap_HasEnoughRocks(o));
}

extern "C" u8 *TownMap_GetAcres(void *p) {
    return (u8 *)p;
}

AcreItemGrid::AcreItemGrid() {}

AcreItemGrid::~AcreItemGrid() {}

extern "C" void ItemGrid_Clear(u16 *p) {
    s32 i;
    for (i = 0; i < 0x100; p++, i++) *p = 0xfff1;
}

extern "C" void AcreItemGrid_Get() {}

void TownBlockMap::clear() {
    width = 0;
    height = 0;
    unitsX = 0;
    unitsZ = 0;
    blocks = 0;
    mapSlot = 1;
}

extern "C" BOOL TownBlockMap_Create(void *heap) {
    BOOL r = TRUE;
    TownBclHeap_Create();
    if (!gTownBlockMap) {
        gTownBlockMap = (TownBlockMap *)Ns_0204d560::Heap_Alloc(heap, 0x20);
        if (gTownBlockMap) {
            if (gTownBlockMap) gTownBlockMap->clear();
            r = gTownBlockMap->build(heap);
        }
    }
    return r;
}

extern "C" s32 TownBlockMap_Destroy(void *heap) {
    if (gTownBlockMap) {
        gTownBlockMap->releaseBg();
        gTownBlockMap->freeBlocks(heap);
        Heap_Free(heap, gTownBlockMap);
        gTownBlockMap = 0;
    }
    TownBclHeap_Destroy();
}

BOOL TownBlockMap::build(void *heap) {
     BOOL result; Unk_0204db24_L l; u8 *cell; s32 *q; s32 *tbl; 
    result = FALSE;
    mapSlot = 1;
    if (!blocks) blocks = (u8 *)Ns_0204d560::MapBlock_NewArray(0x24, (u32)heap, 4);
    tbl = Ns_0204d560::_ZN7TownMap17buildBlockEntriesEi(Ns_0204d560::gSaveTownMap, heap);
    if (blocks && tbl) {
        l.xy[0] = 0;
        l.xy[1] = 0;
        l.v.x = 0;
        l.v.y = 0;
        l.v.z = 0;
        cell = blocks;
        q = tbl;
        width = 6;
        height = 6;
        worldWidth = width * Ns_0204d560::data_020c8cbc;
        worldHeight = height * Ns_0204d560::data_020c8cb8;
        FieldUnit_FromBlockUnit(&unitsX, &unitsZ, width, height, 0, 0);
        for (l.xy[1] = 0; l.xy[1] < height; l.xy[1]++) {
            for (l.xy[0] = 0; l.xy[0] < width; l.xy[0]++) {
                l.v.x = l.xy[0] << 17;
                l.v.z = l.xy[1] << 17;
                l.w.x = l.v.x;
                l.w.y = l.v.y;
                l.w.z = l.v.z;
                MapBlock_Init(cell, q[0], &l.w, q[1], q[2], q[3], 0, 0, (s32 *)l.xy, mapSlot);
                cell += 0x28;
                q += 4;
            }
        }
        result = TRUE;
    }
    if (tbl) Heap_Free(heap, tbl);
    return result;
}

void TownBlockMap::freeBlocks(void *heap) {
    if (blocks) {
        Heap_Free(heap, blocks);
        blocks = 0;
    }
}

void TownBlockMap::updateAcreIds() {
    s32 x; u8 *p; s32 y; u8 *c;
    p = TownMap_GetAcres(Ns_0204d560::gSaveTownMap);
    if (p) {
        c = blocks;
        for (y = 0; y < height; y++) {
            for (x = 0; x < width; x++) {
                if (c) Ns_0204d560::_ZN12MapBlockAcre9setAcreIdEj(c, *p);
                c += 0x28;
                p++;
            }
        }
    }
}

void TownBlockMap::bindBg() {
    s32 x, y;
    Ns_0204d560::func_020e885c(gTownBclHeap);
    Ns_0204d560::CollisionMap_Bind(width, height, 0, mapSlot);
    for (y = 0; y < height; y++) {
        for (x = 0; x < width; x++) {
            u8 *c;
            if ((u32)x < (u32)width && (u32)y < (u32)height && blocks) {
                c = blocks + (x + y * width) * 0x28;
            } else {
                c = 0;
            }
            if (c) {
                u32 t = Ns_0204d560::_ZN12MapBlockAcre9getAcreIdEv(c);
                void *d = gTownBclHeap;
                Ns_0204d560::BgModelCache_Get(d);
                Ns_0204d560::_ZN8MapBlock6bindBgEP16Unk_02037618_Subjj(c, 0, Ns_0204d560::BgModel_LoadBcl(t, d), mapSlot);
            }
        }
    }
}

u32 TownBlockMap::releaseBg() {
    return Ns_0204d560::CollisionMap_Release(mapSlot);
}

extern "C" TownBlockMap *TownBlockMap_Get() {
    return gTownBlockMap;
}

extern "C" s32 BlockMap_PutStructure(u32 a, u32 b, u32 c, u32 d) {
    _ZN7TownMap12putStructureEPtii(a, b, c, d);
}

extern "C" s32 BlockMap_RemoveStructure(u32 a, u32 b, u32 c, u32 d) {
    _ZN7TownMap15removeStructureEiiPt(a, b, c, d);
}

extern "C" void BlockMap_RemoveStructureAt(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f) {
    s32 l8 = 0, lc = 0;
    FieldUnit_FromBlockUnit(&l8, &lc, b, c, d, e);
    BlockMap_RemoveStructure(a, l8, lc, f);
}

extern "C" void BlockMap_FindItem(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    u16 t[2];
    s32 l1c, l20, l24, l28;
    Unk_0204d920_Pad pad;
    t[0] = a6;
    t[1] = a7;
    if (Ns_0204d560::BlockMap_FindItemAnyAttr(m, &l24, &l28, &l1c, &l20, &t[0], &t[1], a8, 0)) {
        FieldUnit_FromBlockUnit(p4, p5, l24, l28, l1c, l20);
        Ns_0204d560::FieldPos_FromUnitCenter(pos, *p4, *p5);
        s32 x = *p4;
        s32 y = *p5;
        s32 tx = x >> 4;
        s32 ty = y >> 4;
        u16 *r = Ns_0204d560::BlockMap_GetItemPtr(m, tx, ty, x - (tx << 4), y - (ty << 4), 0);
        if (r) {
            *ret = *r;
            return;
        }
    }
    *ret = 0xfff1;
}

extern "C" void BlockMap_FindStructure(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    void *h; u32 n; s32 sx, sz, ax; u16 t[2]; s32 a, b; Unk_0204d560_Vec v; u32 i; s32 d, az, zz;
    BlockMap_FindItem(t, m, &v, &a, &b, a6, a7, a8);
    if (!Unk_0204d560_Chk(t)) {
        h = StrBSize_Get(t);
        if (h) {
            n = _ZN12StrBSizeData16getTriangleCountEv(h);
            sx = 0; sz = 0; i = 0;
            for (; i < n; i++) {
                Unk_0204d560_Vec v1, v2, v3;
                if (_ZN12StrBSizeData11getTriangleEPiS0_S0_j(h, &v1, &v2, &v3, i)) {
                    sx += v1.x; sx += v2.x; sx += v3.x;
                    sz += v1.z; sz += v2.z; sz += v3.z;
                }
            }
            d = (s32)_ZN12StrBSizeData16getTriangleCountEv(h) * 3 << 12;
            ax = FX_Div(sx, d);
            az = FX_Div(sz, d);
            zz = v.z + az + 0x1000;
            s32 yy = Ground_GetDefaultY(0);
            pos[0] = v.x + ax;
            pos[1] = yy;
            pos[2] = zz;
            if (p4) *p4 = a;
            if (p5) *p5 = b;
            *ret = t[0];
            return;
        }
    }
    *ret = 0xfff1;
}

extern "C" BOOL Town_FindTownHall(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    BlockMap_FindStructure(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL Town_FindPlayerHouse(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    BlockMap_FindStructure(t, a, pos, p3, p4, 0x5014, 0x501a, 1);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL Town_FindGateHouse(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    BlockMap_FindStructure(t, a, pos, p3, p4, 0x500b, 0x500b, 0x400);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL Town_FindTownHallFront(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    BlockMap_FindStructure(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    if (!Unk_0204d560_Chk(t)) {
        pos[0] -= 0x2000;
        pos[2] += 0x8000;
        if (p3) *p3 -= 1;
        if (p4) *p4 += 4;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Town_FindGulliverShip(void *a, void *b) {
    u16 t[2];
    s32 x, y;
    BlockMap_FindItem(t, a, b, &x, &y, 0x5020, 0x5020, 0);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" void HouseRoomMap_Clear(Unk_0204d0a4 *p) {
    p->width = 0;
    p->height = 0;
    p->unitsX = 0;
    p->unitsZ = 0;
    p->blocks = 0;
    p->mapSlot = 2;
}

extern "C" Unk_0204d0a4 *HouseRoomMaps_Get(s32 i) {
    Unk_0204d0a4 *r = 0;
    if (HouseData_IsValidRoomIndex()) r = gHouseRoomMaps[i];
    return r;
}

extern "C" Unk_0204d0a4 *HouseRoomMaps_GetForScene(s32 a) {
    Unk_0204d0a4 *r = 0;
    if (SceneId_IsHouseRoom()) {
        r = HouseRoomMaps_Get(SceneId_GetHouseRoom(a));
    }
    return r;
}

extern "C" BOOL HouseRoomMaps_Create(void *heap) {
    BOOL r = TRUE;
    s32 i;
    RoomBclHeap_Create();
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &gHouseRoomMaps[i];
        if (!*e) {
            *e = (Unk_0204d0a4 *)Heap_Alloc(heap, 0x20);
            if (*e) {
                if (*e) HouseRoomMap_Clear(*e);
                if (!HouseRoomMap_Init(*e, i, heap)) {
                    r = FALSE;
                    break;
                }
            } else {
                r = FALSE;
                break;
            }
        }
    }
    if (!r) HouseRoomMaps_Destroy(heap);
    return r;
}

extern "C" void HouseRoomMaps_Destroy(void *heap) {
    s32 i;
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &gHouseRoomMaps[i];
        if (*e) {
            HouseRoomMap_ReleaseBg(*e);
            HouseRoomMap_FreeBlocks(*e, heap);
            Heap_Free(heap, *e);
            *e = 0;
        }
    }
    RoomBclHeap_Destroy();
}

extern "C" void HouseRoomMaps_UpdateAll() {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (gHouseRoomMaps[i]) HouseRoomMap_Update(gHouseRoomMaps[i], i);
    }
}

extern "C" void HouseRoomMap_Update(Unk_0204d0a4 *p, s32 i) {
    u32 v = _ZN9HouseData13getRoomAcreIdEi(&Ns_0204cc48::gSaveHouse);
    if (p->blocks) _ZN12MapBlockAcre9setAcreIdEj(p->blocks, v);
}

extern "C" void HouseRoomMaps_BindBg() {
    s32 i;
    func_020e885c(gRoomBclHeap);
    for (i = 0; i < 5; i++) {
        if (gHouseRoomMaps[i]) HouseRoomMap_BindBg(gHouseRoomMaps[i]);
    }
}

extern "C" void HouseRoomMap_BindBg(Unk_0204d0a4 *p) {
    u32 h;
    CollisionMap_Bind(p->width, p->height, 0, p->mapSlot);
    if ((u8 *)p->width > (u8 *)0 && (u8 *)p->height > (u8 *)0) {
        h = p->blocks;
        if (h != 0) goto join;
    }
    h = 0;
join:
    if (h) {
        u32 a = _ZN12MapBlockAcre9getAcreIdEv(h);
        u32 g = gRoomBclHeap;
        BgModelCache_Get();
        _ZN8MapBlock6bindBgEP16Unk_02037618_Subjj(h, 0, BgModel_LoadBcl(a, g), p->mapSlot);
    }
}

extern "C" void HouseRoomMap_ReleaseBg(Unk_0204d0a4 *p) {
    CollisionMap_Release(p->mapSlot);
}

extern "C" BOOL HouseRoomMap_Init(Unk_0204d0a4 *p, s32 i, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->mapSlot = i + 2;
    if (!p->blocks) {
        p->blocks = MapBlock_NewArray(1, heap, 4);
    }
    info = (Unk_0204d0f4_Info *)Ns_0204cc48::_ZN9HouseData19buildRoomBlockEntryEiPv(&Ns_0204cc48::gSaveHouse, i, heap);
    if (p->blocks && info) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->width = 1;
        p->height = 1;
        p->worldWidth = data_020c8cbc;
        p->worldHeight = data_020c8cb8;
        Ns_0204cc48::FieldUnit_FromBlockUnit(&p->unitsX, &p->unitsZ, p->width, p->height, 0, 0);
        CollisionMap_Bind(p->width, p->height, 0, p->mapSlot);
        l.v.x = 0; l.v.z = 0;
        l.w = l.v;
        _ZN8MapBlock4initEiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(p->blocks, info->a, &l.w, info->b, info->c, info->d, 0, 0, 0, 0, p->mapSlot);
        Heap_Free(heap, info);
        r = TRUE;
    }
    return r;
}

extern "C" void HouseRoomMap_FreeBlocks(Unk_0204d0a4 *p, void *heap) {
    if (p->blocks) {
        Heap_Free(heap, (void *)p->blocks);
        p->blocks = 0;
    }
}

extern "C" void VillagerRoomMap_Clear(Unk_0204d0a4 *p) {
    p->width = 0;
    p->height = 0;
    p->unitsX = 0;
    p->unitsZ = 0;
    p->blocks = 0;
    p->mapSlot = 7;
    p->itemGrid = 0;
}

extern "C" Unk_0204d0f4_Info *VillagerRoom_BuildEntry(u16 *dst, u32 b, void *heap) {
    Unk_0204d0f4_Info *p = Ns_0204cc48::MapBlockEntry_NewArray(1, heap);
    if (p) {
        u32 h = SaveVillagers_Get(&gSaveVillagers, b);
        if (h) {
            p->a = _ZN20VillagerDataItemView13getInfo28ItemEv(h);
        } else {
            p->a = 0x1010;
        }
        VillagerRoom_LoadLayout(dst, b, heap);
        p->b = (u32)dst;
        p->c = 0;
        p->d = 0;
    }
    return p;
}

extern "C" BOOL VillagerRoom_LoadLayout(u16 *dst, u32 b, void *heap) {
    s32 x, y;
    u32 h;
    BOOL r;
    x = 2;
    y = 0;
    r = FALSE;
    h = SaveVillagers_Get(&gSaveVillagers, b);
    if (h) _ZN20VillagerDataItemView13getRoomLayoutEPiS0_(h, &x, &y);
    if (h) {
        if (FgData_ApplyLayoutGlobal(dst, x, y, heap)) {
            Villager_ResolveRoomLayout(h, dst);
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL VillagerRoomMap_Init(Unk_0204d0a4 *p, u32 a, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->mapSlot = 7;
    if (!p->blocks) {
        p->blocks = MapBlock_NewArray(1, heap, -4);
    }
    if (!p->itemGrid) {
        p->itemGrid = (u32)ItemGrid_Alloc(heap, -4);
    }
    info = VillagerRoom_BuildEntry((u16 *)p->itemGrid, a, heap);
    if (p->blocks && info && p->itemGrid) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->width = 1;
        p->height = 1;
        p->worldWidth = data_020c8cbc;
        p->worldHeight = data_020c8cb8;
        Ns_0204cc48::FieldUnit_FromBlockUnit(&p->unitsX, &p->unitsZ, p->width, p->height, 0, 0);
        CollisionMap_Bind(p->width, p->height, 0, p->mapSlot);
        l.v.x = 0; l.v.z = 0;
        u32 t = _ZN12BgModelCache10getAcreBclEi(BgModelCache_Get(), info->a);
        l.w = l.v;
        _ZN8MapBlock4initEiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(p->blocks, info->a, &l.w, info->b, info->c, info->d, 0, t, 0, 0, p->mapSlot);
        Heap_Free(heap, info);
        r = TRUE;
    }
    return r;
}

extern "C" Unk_0204d0a4 *VillagerRoomMap_Create(u32 a, void *heap) {
    Unk_0204d0a4 *r = 0;
    if (!gVillagerRoomMap) {
        gVillagerRoomMap = (Unk_0204d0a4 *)Heap_AllocTail(heap, 0x24);
        if (gVillagerRoomMap) {
            if (gVillagerRoomMap) VillagerRoomMap_Clear(gVillagerRoomMap);
            if (VillagerRoomMap_Init(gVillagerRoomMap, a, heap)) {
                r = gVillagerRoomMap;
            } else {
                VillagerRoomMap_Destroy(heap);
            }
        }
    }
    return r;
}

extern "C" void VillagerRoomMap_Free(Unk_0204d0a4 *p, void *heap) {
    if (p->blocks) {
        Heap_Free(heap, (void *)p->blocks);
        p->blocks = 0;
    }
    if (p->itemGrid) {
        Heap_Free(heap, (void *)p->itemGrid);
        p->itemGrid = 0;
    }
    CollisionMap_Release(p->mapSlot);
}

extern "C" void VillagerRoomMap_Destroy(void *heap) {
    if (gVillagerRoomMap) {
        VillagerRoomMap_Free(gVillagerRoomMap, heap);
        Heap_Free(heap, gVillagerRoomMap);
        gVillagerRoomMap = 0;
    }
}

extern "C" void FgData_ClearIndices(Unk_0204cf2c_Ent *t) {
    s32 i;
    for (i = 0; i < 4; i++) {
        t[i].data = 0;
        t[i].count = 0;
    }
}

extern "C" BOOL FgData_Load(void *heap) {
    BOOL r = FALSE;
    if (!gFgDataIndex) {
        gFgDataIndex = (Unk_0204cf2c_Ent *)Heap_Alloc(heap, 0x20);
        if (gFgDataIndex) {
            if (gFgDataIndex) FgData_ClearIndices(gFgDataIndex);
            if (FgData_LoadIndices(gFgDataIndex, heap)) {
                r = TRUE;
            } else {
                FgData_Unload(heap);
                gFgDataIndex = 0;
            }
        }
    }
    return r;
}

extern "C" void FgData_Unload(void *heap) {
    if (gFgDataIndex) {
        FgData_FreeIndices(gFgDataIndex, heap);
        Heap_Free(heap, gFgDataIndex);
        gFgDataIndex = 0;
    }
}

extern "C" BOOL FgData_LoadIndices(Unk_0204cf2c_Ent *t, void *heap) {
    const Unk_020ca2f4_Ent *e = sFgDataFiles;
    s32 i = 0;
    s32 size = 0;
    BOOL r = TRUE;
    for (; i < 4; t++, e++, i++) {
        t->data = (u16 *)File_LoadAlloc(e->a, heap, 4, &size);
        if (t->data) {
            t->count = (u32)size >> 1;
        } else {
            r = FALSE;
            t->count = 0;
            break;
        }
    }
    return r;
}

extern "C" void FgData_FreeIndices(Unk_0204cf2c_Ent *t, void *heap) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (t->data) {
            Heap_Free(heap, t->data);
            t->data = 0;
            t->count = 0;
            t++;
        }
    }
}

extern "C" BOOL FgData_IsValidTable(Unk_0204cf2c_Ent *t, s32 i) {
    if (i >= 0 && i < 4) return TRUE;
    return FALSE;
}

extern "C" s32 FgData_GetLayoutOffset(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (FgData_IsValidTable(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            s32 k;
            for (k = 0; k < j; d++, k++) {
                r += *d;
            }
        }
    }
    return r;
}

extern "C" s32 FgData_GetLayoutSize(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (FgData_IsValidTable(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            r = d[j];
        }
    }
    return r;
}

extern "C" BOOL FgData_HasLayout(s32 a, s32 b) {
    BOOL r = FALSE;
    if (gFgDataIndex) {
        if (FgData_GetLayoutSize(gFgDataIndex, a, b) > 0) r = TRUE;
    }
    return r;
}

extern "C" u16 *ItemGrid_Alloc(void *heap, s32 align) {
    u16 *p = (u16 *)Heap_AllocAligned(heap, 0x200, align);
    if (p) {
        s32 i;
        for (i = 0; i < 0x100; i++) {
            p[i] = 0xfff1;
        }
    }
    return p;
}

extern "C" BOOL FgData_ReadLayout(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n) {
    s32 off = FgData_GetLayoutOffset(t, i, j);
    const Unk_020ca2f4_Ent *e = &sFgDataFiles[i];
    File_ReadRangeByPath(e->b, dst, n, off);
    return TRUE;
}

extern "C" BOOL FgData_ApplyLayoutGlobal(u16 *dst, s32 i, s32 j, void *heap) {
    BOOL r = FALSE;
    if (gFgDataIndex) {
        r = FgData_ApplyLayout(gFgDataIndex, dst, i, j, heap);
    }
    return r;
}

extern "C" u16 *FgData_CreateLayoutGrid(u16 *dst, s32 b, void *heap, s32 d) {
    u16 *r = 0;
    if (gFgDataIndex) {
        r = ItemGrid_Alloc(heap, d);
        if (r) {
            if (!FgData_ApplyLayout(gFgDataIndex, r, (s32)dst, b, heap)) {
                Heap_Free(heap, r);
                r = 0;
            }
        }
    }
    return r;
}

extern "C" BOOL FgData_ApplyLayout(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap) {
    s32 n = FgData_GetLayoutSize(t, i, j);
    BOOL result = FALSE;
    if (dst && n > 0 && (n & 3) == 0 && FgData_IsValidTable(t, i)) {
        void *buf = Heap_AllocTail(heap, n);
        Unk_0204cd00_Glyph *p = (Unk_0204cd00_Glyph *)buf;
        if (p) {
            if (FgData_ReadLayout(t, buf, i, j, n)) {
                s32 cnt = n >> 2;
                s32 k;
                for (k = 0; k < cnt; p++, k++) {
                    if (Unk_0204cd00_R(p)) {
                        dst[(p->y << 4) + p->x] = p->v;
                    }
                }
            }
            Heap_Free(heap, buf);
            result = TRUE;
        }
    }
    return result;
}

extern "C" void *FgData_ReadLayoutEntries(void *a, s32 *b, s32 c, s32 d, void *heap) {
    Unk_0204cf2c_Ent *t = (Unk_0204cf2c_Ent *)a;
    s32 n = FgData_GetLayoutSize(t, c, d);
    if (n > 0 && (n & 3) == 0 && FgData_IsValidTable(t, c)) {
        void *buf = Heap_AllocAligned(heap, n, 4);
        if (buf) {
            if (FgData_ReadLayout(t, buf, c, d, n)) {
                *b = n >> 2;
                return buf;
            }
            Heap_Free(heap, buf);
        }
    }
    return 0;
}

extern "C" void *FgData_ReadVillagerLayout(void *a, s32 *b, s32 c, void *d) {
    u32 h = SaveVillagers_Get(&gSaveVillagers, c);
    s32 x = 2, y = 0;
    if (h && _ZN20VillagerDataItemView13getRoomLayoutEPiS0_(h, &x, &y)) {
        return FgData_ReadLayoutEntries(a, b, x, y, d);
    }
    return 0;
}

extern "C" s32 FgData_GetVillagerLayout(s32 a, s32 b, s32 c) {
    if (gFgDataIndex != NULL) return Ns_0204c318::FgData_ReadVillagerLayout(gFgDataIndex, a, b, c);
    return 0;
}

char sFgDataNfIndexPath[] = "fg_data/nf_h.bin";

Unk_0204d0a4 *gHouseRoomMaps[5];

const Unk_020ca2f4_Ent sFgDataFiles[4] = {
    {(u32)sFgDataFoIndexPath, (u32)sFgDataFoPath},
    {(u32)sFgDataFiIndexPath, (u32)sFgDataFiPath},
    {(u32)sFgDataNrIndexPath, (u32)sFgDataNrPath},
    {(u32)sFgDataNfIndexPath, (u32)sFgDataNfPath},
};
