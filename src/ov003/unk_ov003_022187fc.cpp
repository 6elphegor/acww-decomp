// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "sys/ProcProfile.h"
#include "town/BuildingActor.h"

// TU21 of ov003: house models, scene 0x022324ec (0x022187fc-0x02219294)
// mwcc samples optimiser pragmas at the end of the file, so this applies to the whole TU
// (Building_FindNearPos needs it; all other functions of the TU still match with it)
#pragma opt_loop_invariants off

struct Unk_ov003_02218c60_Grid {
    /* 0x00 */ u8 *cells;
    /* 0x04 */ u32 w;
    /* 0x08 */ u32 h;
};

// ---- the three statically constructed objects (constructors/destructors are this TU's own) ----
// 4-byte object at 0x02235818
class PlayerHouseTex {
public:
    PlayerHouseTex();
    ~PlayerHouseTex();
    s32 tex;
};

// 0x20-byte object at 0x02235840
class HouseLightUpDeco {
public:
    HouseLightUpDeco();
    ~HouseLightUpDeco();
    /* 0x00 */ u32 tex;
    /* 0x04 */ u32 models[5];
    /* 0x18 */ u32 texPattern;
    /* 0x1c */ u8 isLoaded;
};

// 0x28-byte object at 0x02235860
class VillagerHouseTex {
public:
    VillagerHouseTex();
    ~VillagerHouseTex();
    /* 0x00 */ u32 houseTextures[4];
    /* 0x10 */ u32 lightTextures[4];
    /* 0x20 */ u32 doorInAnim;
    /* 0x24 */ u32 doorOutAnim;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define MapBlockAcre_getAcreId _ZN12MapBlockAcre9getAcreIdEv
#define TownMap_placeStructure _ZN7TownMap14placeStructureEPtiih
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define TownStyleRecordView_getHouseStyles _ZN19TownStyleRecordView14getHouseStylesEv
#define StrBSizeData_getSolidUnit _ZN12StrBSizeData12getSolidUnitEPiS0_S0_j
#define StrBSizeData_getSolidUnitCount _ZN12StrBSizeData17getSolidUnitCountEv
#define BuildingActor_getItemId _ZN13BuildingActor9getItemIdEv
#define BuildingActor_tryOpenDoorForExit _ZN13BuildingActor18tryOpenDoorForExitEv
#define BuildingActor_openDoorForExit _ZN13BuildingActor15openDoorForExitEv
#define BuildingActor_tryOpenDoorForEntry _ZN13BuildingActor19tryOpenDoorForEntryEv
#define BuildingActor_openDoorForEntry _ZN13BuildingActor16openDoorForEntryEv

extern "C" {
extern void *gFieldStructureHeap;
extern u8 gSaveTownFlag[];
extern void *gCurrentHeap;
extern BuildingActor *sBuildingList[0x20];
extern Unk_ov003_02218c60_Grid *gSceneBlockMap;
extern u8 data_020d0a7c[];
extern u32 *gActorDefaultParent;
extern u32 *gCommManager;
}

class FieldStructureMgr : public GameProc {
public:
    FieldStructureMgr();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FieldStructureMgr();
};

extern "C" {
s32 Taxi_IsArriving();
s32 Taxi_IsLeaving();
s32 MapBlockAcre_getAcreId(void *c);
void MapBlock_SetItem(void *c, u16 *p, s32 a, s32 b, s32 d);
void *MapBlock_GetItemPtr(void *c, u32 i, u32 j, s32 k);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 x, s32 y, u32 i, u32 j);
s32 Scene_InTown();
s32 CommManager_isSlotActive(void *self, u32 v);
s32 TownBlockMap_Get();
s32 Town_FindTownHallFront(s32 k, s32 *a, s32 *b, s32 *c);
void *TownStyleRecordView_getHouseStyles(void *p);
s32 TownStyle_GetVillagerHouseStyle(void *p, s32 i);
void *File_LoadAllocF(void *heap, s32 a, const char *fmt, ...);
void *NNS_G3dGetTex(...);
s32 Gfx3d_LoadTex(void *p, s32 a);
void *Gfx3d_CopyTex(void *p, void *heap);
void Mem_Free(void *p);
s32 Gfx3d_LoadTexAndPltt(void *p, s32 a);
void *File_LoadAlloc(const char *s, void *heap, s32 a, s32 b);
void *func_021065dc();
void *func_021065f8(void *p, s32 a);
u16 *BuildingActor_getItemId(void *p);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 GroundSeason_IsSnow();
s32 BuildingActor_tryOpenDoorForExit(void *p);
s32 BuildingActor_tryOpenDoorForEntry(void *p);
s32 BuildingActor_openDoorForExit(void *p);
s32 BuildingActor_openDoorForEntry(void *p);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void FieldStructureHeap_Destroy(s32 a);
void FieldStructureHeap_Create(s32 a, s32 b);
void *StrBSize_Get(s32 p);
s32 StrBSizeData_getSolidUnitCount(void *self);
s32 StrBSizeData_getSolidUnit(void *self, s32 *a, s32 *b, s32 *c, u32 i);
void Ground_SetQuadrantsBlocked(s32 x, s32 y, u32 v);
void FieldPos_FromUnitCenter(VecFx32 *v, s32 x, s32 y);
void BuildingInfo_Copy(void *o, void *p);
s32 BuildingInfo_GetKind(void *o);
s32 BuildingInfo_GetProfile(void *o);
void BuildingInfo_Destroy(void *o);
s32 Actor_spawn(s32 self, void *b, void *c, void *d, void *e);
void TownMap_placeStructure(void *self, u16 *p, s32 x, s32 y, u8 z);
void FieldStructureMgr_Unregister(s32 a);
void Field_CacheExitedBuildingKey();
void FieldStructureMgr_Register(s32 a);
void GameProc_CreateChild(s32 a, u32 *b, s32 c, s32 d);
void Gfx3d_LoadPltt(void *, s32);
extern u32 gSaveTownState[];
s32 TownState_FindEvent(void *, s32);
s32 func_02101340(char *, const char *, void *);
void Str_SPrintf(char *, const char *, ...);
void *func_021012bc(const char *);
void *NNS_G3dGetMdlSet(void *);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void func_02101310(char *);
}

extern "C" {
void BuildingList_Clear();
void BuildingList_Init();
void FieldStructureMgr_DestroyHeap(s32 a);
void FieldStructureMgr_CreateHeap(s32 a);
void func_ov003_02219160(s32 a);
void func_ov003_02219164(s32 a);
void *BuildingList_FindByItem(u32 id);
void *Building_FindNearPos(s32 a);
s32 FieldStructureMgr_ApplyFootprint(s32 a, u16 *b, s32 x, s32 y);
s32 FieldStructureMgr_SpawnBuilding(void *self, u16 *pv, s32 x, s32 y, u8 flag);
s32 FieldStructureMgr_SpawnAll(void *self);
s32 VillagerHouseTex_Load(VillagerHouseTex *self);
void VillagerHouseTex_Clear(VillagerHouseTex *o);
void HouseLightUpDeco_Clear(HouseLightUpDeco *o);
void HouseLightUpDeco_Release(void *p);
s32 Field_GetStructureTexSuffix();
s32 HouseLightUpDeco_Load(HouseLightUpDeco *r);
s32 PlayerHouseTex_Load(void **out);
void PlayerHouseTex_Release(void *p);
}


extern "C" void *FieldStructureMgr_Create();

// the TU's bss objects; the three static objects have constructors and destructors (see __sinit)
extern "C" {
PlayerHouseTex sPlayerHouseTex;
VillagerHouseTex sVillagerHouseTex;
HouseLightUpDeco sHouseLightUpDeco;
ProcProfile sFieldStructureMgrProfile = {(void *(*)())FieldStructureMgr_Create, 0xc4, 0x1f};
u8 sDoorExitMode;
u16 sSpawnedBuildingCount1;
char data_ov003_02235888[0x28];
BuildingActor *sBuildingList[0x20];
const char sStructureTexSuffixes[3] = "sw";
}

// ---------------------------------------------------------------- functions

extern "C" void *FieldStructureMgr_Create() {
    return new FieldStructureMgr;
}

FieldStructureMgr::FieldStructureMgr() {
    BuildingList_Init();
}

FieldStructureMgr::~FieldStructureMgr() {}

BOOL FieldStructureMgr::onCreate() {
    BuildingList_Init();
    Field_CacheExitedBuildingKey();
    FieldStructureMgr_Register((s32)this);
    FieldStructureMgr_CreateHeap((s32)this);
    PlayerHouseTex_Load((void **)&sPlayerHouseTex);
    VillagerHouseTex_Load(&sVillagerHouseTex);
    HouseLightUpDeco_Load(&sHouseLightUpDeco);
    func_ov003_02219164((s32)this);
    func_ov003_02219160((s32)this);
    FieldStructureMgr_SpawnAll(this);
    GameProc_CreateChild(0xf, gActorDefaultParent, 0, 0);
    return TRUE;
}

BOOL FieldStructureMgr::onExecute() { return TRUE; }

BOOL FieldStructureMgr::onDraw() { return TRUE; }

BOOL FieldStructureMgr::onDelete() {
    BuildingList_Clear();
    FieldStructureMgr_Unregister((s32)this);
    VillagerHouseTex_Clear(&sVillagerHouseTex);
    HouseLightUpDeco_Release(&sHouseLightUpDeco);
    PlayerHouseTex_Release(&sPlayerHouseTex);
    FieldStructureMgr_DestroyHeap((s32)this);
    return TRUE;
}

extern "C" {

void func_ov003_02219164(s32 a) {}

void func_ov003_02219160(s32 a) {}

s32 FieldStructureMgr_SpawnAll(void *self) {
    BOOL go;
    u32 gw, gh;
    u32 ii, jj;
    s32 count;
    s32 r24;
    u8 *cell;
    BOOL a;
    u16 buf[3];
    u32 obj[3];
    s32 ax, ay;
    s32 bx, by;
    struct { s32 cx; u32 pad[3]; } tl;
    u32 x, y;
    u16 *p;
    Unk_ov003_02218c60_Grid *g;
    sSpawnedBuildingCount1 = 0;
    g = gSceneBlockMap;
    gw = g->w;
    gh = g->h;
    a = TRUE;
    if (Taxi_IsArriving() == 0) {
        if (Taxi_IsLeaving() == 0) {
            a = FALSE;
        }
    }
    count = 0;
    for (y = 0; y < gh; y++) {
        for (x = 0; x < gw; x++) {
            if (x < g->w && y < g->h && g->cells != 0) {
                cell = g->cells + (x + y * g->w) * 0x28;
            } else {
                cell = 0;
            }
            s32 t = MapBlockAcre_getAcreId(cell);
            switch (t) {
            case 0x1a:
            case 0x1b:
            case 0x1c:
                buf[1] = 0x500b;
                MapBlock_SetItem(cell, &buf[1], 7, 0, 0);
            }
            for (jj = 0; jj < 0x10; jj++) {
                for (ii = 0; ii < 0x10; ii++) {
                    p = (u16 *)MapBlock_GetItemPtr(cell, ii, jj, 0);
                    if (p != 0) {
                        BOOL f = FALSE;
                        if (*p >= 0x5000 && *p <= 0x5021) {
                            f = TRUE;
                        }
                        if (f) {
                            u32 idx;
                            FieldUnit_FromBlockUnit(&ax, &ay, x, y, ii, jj);
                            BOOL f2 = FALSE;
                            u32 v = *p;
                            if (v >= 0x5000 && v <= 0x5021) {
                                f2 = TRUE;
                            }
                            if (f2) {
                                idx = v & 0xfff;
                            } else {
                                idx = -1;
                            }
                            u8 *q;
                            if (idx < 0x22) {
                                q = data_020d0a7c + idx * 10;
                            } else {
                                q = data_020d0a7c;
                            }
                            BuildingInfo_Copy(obj, q);
                            r24 = BuildingInfo_GetKind(obj);
                            if (a == 0 || r24 != 2) {
                                go = 1;
                            } else {
                                go = 0;
                            }
                            BOOL m;
                            if (Item_IsFurniture(p) != 0) {
                                buf[2] = 0x501e;
                                s32 k = Item_GetFurnitureIndex(p);
                                m = (k == Item_GetFurnitureIndex(&buf[2])) ? 1 : 0;
                            } else {
                                m = (*p == 0x501e) ? 1 : 0;
                            }
                            if (m) {
                                if (GroundSeason_IsSnow() == 0) {
                                    go = 0;
                                }
                            }
                            if (go) {
                                if (FieldStructureMgr_SpawnBuilding(self, p, ax, ay, 1)) {
                                    if (r24 == 1) {
                                        sSpawnedBuildingCount1 = sSpawnedBuildingCount1 + 1;
                                    }
                                    count++;
                                }
                            }
                            BuildingInfo_Destroy(obj);
                        }
                    }
                }
            }
        }
    }
    if (Scene_InTown()) {
        if (!CommManager_isSlotActive(gCommManager, gCommManager[0x64 / 4])) {
            s32 k = TownBlockMap_Get();
            if (Taxi_IsArriving() != 0 || Taxi_IsLeaving() != 0) {
                if (Town_FindTownHallFront(k, &tl.cx, &bx, &by)) {
                    buf[0] = 0x501b;
                    FieldStructureMgr_SpawnBuilding(self, &buf[0], bx, by + 1, 0);
                }
            }
        }
    }
    return count;
}

s32 FieldStructureMgr_SpawnBuilding(void *self, u16 *pv, s32 x, s32 y, u8 flag) {
    VecFx32 vec;
    u32 obj[3];
    u32 idx;
    vec.x = 0;
    vec.y = 0;
    vec.z = 0;
    FieldPos_FromUnitCenter(&vec, x, y);
    BOOL f = FALSE;
    u32 v = *pv;
    if (v >= 0x5000 && v <= 0x5021) {
        f = TRUE;
    }
    if (f) {
        idx = v & 0xfff;
    } else {
        idx = -1;
    }
    u8 *q;
    if (idx < 0x22) {
        q = data_020d0a7c + idx * 10;
    } else {
        q = data_020d0a7c;
    }
    BuildingInfo_Copy(obj, q);
    if (Actor_spawn(BuildingInfo_GetProfile(obj), (void *)*pv, &vec, 0, 0) != 0) {
        if (flag != 0) {
            TownMap_placeStructure(gSceneBlockMap, pv, x, y, 0);
            FieldStructureMgr_ApplyFootprint((s32)self, pv, x, y);
        }
        BuildingInfo_Destroy(obj);
        return 1;
    }
    BuildingInfo_Destroy(obj);
    return 0;
}

s32 FieldStructureMgr_ApplyFootprint(s32 a, u16 *b, s32 x, s32 y) {
    s32 va, vb, vc;
    void *p = StrBSize_Get((s32)b);
    if (p != 0) {
        u32 n = StrBSizeData_getSolidUnitCount(p);
        u32 i;
        for (i = 0; i < n; i++) {
            if (StrBSizeData_getSolidUnit(p, &vc, &va, &vb, i)) {
                Ground_SetQuadrantsBlocked(x + va, y + vb, (u8)vc);
            }
        }
    }
    return 1;
}

void FieldStructureMgr_CreateHeap(s32 a) { FieldStructureHeap_Create(0x1f000, 0); }

void FieldStructureMgr_DestroyHeap(s32 a) { FieldStructureHeap_Destroy(a); }

s32 Field_GetStructureTexSuffix() { return ((s8 *)sStructureTexSuffixes)[GroundSeason_IsSnow()]; }

u32 Field_GetSpawnedKind1Count() { return sSpawnedBuildingCount1; }

void *FieldStructureMgr_GetPlayerHouseTex() { return &sPlayerHouseTex; }

void *FieldStructureMgr_GetVillagerHouseTex() { return &sVillagerHouseTex; }

void *FieldStructureMgr_GetLightUpDeco() { return &sHouseLightUpDeco; }

u32 Field_GetDoorExitMode() { return sDoorExitMode; }

void Field_SetDoorExitMode(u32 v) { sDoorExitMode = v; }

s32 Building_OpenDoorForEntryAt(s32 a) {
    void *r = Building_FindNearPos(a);
    if (r != 0) {
        return BuildingActor_openDoorForEntry(r);
    }
    return 0;
}

s32 Building_OpenDoorForExitAt(s32 a) {
    void *r = Building_FindNearPos(a);
    if (r != 0) {
        return BuildingActor_openDoorForExit(r);
    }
    return 0;
}

s32 VillagerHouse_TryOpenDoorForEntry(s32 a) {
    void *r = BuildingList_FindByItem((u16)(a + 0x5001));
    if (r != 0) {
        return BuildingActor_tryOpenDoorForEntry(r);
    }
    return 0;
}

s32 VillagerHouse_TryOpenDoorForExit(s32 a) {
    void *r = BuildingList_FindByItem((u16)(a + 0x5001));
    if (r != 0) {
        return BuildingActor_tryOpenDoorForExit(r);
    }
    return 0;
}

void *Building_FindNearPos(s32 a) {
    Unk_ov003_02218c60_Grid *g = gSceneBlockMap;
    s32 xy[2];
    if (g != 0) {
        FieldPos_ToUnit(&xy[0], &xy[1], a);
        for (s32 y = xy[1]; y >= xy[1] - 5; y--) {
            for (s32 x = xy[0] - 3; x <= xy[0] + 3; x++) {
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (cell != 0) {
                    BOOL f = FALSE;
                    u16 v = *cell;
                    if (v >= 0x5000 && v <= 0x5021) {
                        f = TRUE;
                    }
                    if (f) {
                        void *r = BuildingList_FindByItem(v);
                        if (r != 0) {
                            return r;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 BuildingList_Add(void *p) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        if (sBuildingList[i] == 0) {
            sBuildingList[i] = (BuildingActor *)p;
            return 1;
        }
    }
    return 0;
}

s32 BuildingList_IndexOf(void *p);

s32 BuildingList_Remove(void *p) {
    s32 i = BuildingList_IndexOf(p);
    s32 m = -1;
    if (i != m) {
        *(u32 *)&sBuildingList[i] = 0;
        return 1;
    }
    return 0;
}

void *BuildingList_FindByGrid(s32 a, s32 b) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        BuildingActor *e = sBuildingList[i];
        if (e != 0 && e->gridX == a && e->gridZ == b) {
            return e;
        }
    }
    return 0;
}

void *BuildingList_GetAt(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return sBuildingList[i];
    }
    return 0;
}

void *BuildingList_FindByItem(u32 id) {
    s32 i;
    s32 z0 = 0;
    s32 z1 = 0;
    for (i = 0; (u32)i < 0x20; i++) {
        BuildingActor *e = sBuildingList[i];
        if (e != 0) {
            u16 *r = BuildingActor_getItemId(e);
            BOOL ok;
            if (Item_IsFurniture(r) != 0) {
                u16 tmp;
                tmp = id;
                s32 a = Item_GetFurnitureIndex(r);
                ok = (a == Item_GetFurnitureIndex(&tmp)) ? 1 : z0;
            } else {
                ok = (*r == id) ? 1 : z1;
            }
            if (ok != 0) {
                return e;
            }
        }
    }
    return 0;
}

s32 BuildingList_IndexOf(void *p) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        if (p == sBuildingList[i]) {
            return i;
        }
    }
    return -1;
}

void BuildingList_Init() {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 0x20; i++) {
        *(u32 *)&sBuildingList[i] = z;
    }
}

void BuildingList_Clear() {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 0x20; i++) {
        *(u32 *)&sBuildingList[i] = z;
    }
}

}

VillagerHouseTex::VillagerHouseTex() {
    VillagerHouseTex_Clear(this);
}

VillagerHouseTex::~VillagerHouseTex() {}

extern "C" {

s32 VillagerHouseTex_Load(VillagerHouseTex *self) {
    void *str;
    void *heap = gFieldStructureHeap;
    u8 i = 0;
    s32 m3 = -4;
    s32 zb = 0;
    s32 za = 0;
    do {
        s32 v = TownStyle_GetVillagerHouseStyle(TownStyleRecordView_getHouseStyles(gSaveTownFlag), i);
        s32 c = (s8)(v / 5 + 0x41);
        s32 rem = v % 5;
                void *h2 = gCurrentHeap;
        s32 a = Field_GetStructureTexSuffix();
        str = File_LoadAllocF(h2, m3, "/str/npcHsTex/%c/house_%c%d%c.nsbtx", c, c, rem, a);
        u32 off = i << 2;
        u32 *e = &self->houseTextures[i];
        self->houseTextures[i] = (u32)NNS_G3dGetTex(str);
        if (Gfx3d_LoadTex((void *)self->houseTextures[i], za)) {
            *e = (u32)Gfx3d_CopyTex((void *)*e, gFieldStructureHeap);
        }
        Mem_Free(str);
        str = File_LoadAllocF(gCurrentHeap, m3, "/str/npcHsTex/%c/light_%c%d.nsbtx", c, c, rem);
        e[4] = (u32)NNS_G3dGetTex(str);
        if (Gfx3d_LoadTexAndPltt((void *)e[4], zb)) {
            e[4] = (u32)Gfx3d_CopyTex((void *)e[4], heap);
        }
        Mem_Free(str);
        i = i + 1;
    } while (i < 4);
    File_LoadAlloc("/str/obj_house_i.nsbca", heap, 4, 0);
    self->doorInAnim = (u32)func_021065f8(func_021065dc(), 0);
    File_LoadAlloc("/str/obj_house_o.nsbca", heap, 4, 0);
    self->doorOutAnim = (u32)func_021065f8(func_021065dc(), 0);
    return 1;
}

void VillagerHouseTex_Clear(VillagerHouseTex *o) {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        u32 *e = &o->houseTextures[i];
        o->houseTextures[i] = z;
        e[4] = z;
    }
    o->doorOutAnim = z;
    o->doorInAnim = o->doorOutAnim;
}

s32 VillagerHouseTex_GetHouseTex(VillagerHouseTex *o, u32 i) { return o->houseTextures[i & 3]; }

s32 VillagerHouseTex_GetLightTex(VillagerHouseTex *o, u32 i) { return o->lightTextures[i & 3]; }

s32 VillagerHouseTex_GetDoorInAnim(VillagerHouseTex *o) { return o->doorInAnim; }

s32 VillagerHouseTex_GetDoorOutAnim(VillagerHouseTex *o) { return o->doorOutAnim; }

}

HouseLightUpDeco::HouseLightUpDeco() {
    HouseLightUpDeco_Clear(this);
}

HouseLightUpDeco::~HouseLightUpDeco() {}

extern "C" {

void HouseLightUpDeco_Clear(HouseLightUpDeco *o) {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 5; i++) {
        o->models[i] = z;
    }
    o->tex = z;
    o->texPattern = z;
    o->isLoaded = z;
}

s32 HouseLightUpDeco_Load(HouseLightUpDeco *r) {
    u32 buf[0x6c / 4];
    u32 i;
    BOOL z;
    HouseLightUpDeco_Clear(r);
    s32 c = TownState_FindEvent(gSaveTownState, 0x11);
    z = FALSE;
    if (c == ~z) {
        return z;
    }
    void *t = File_LoadAlloc("/str/npcHsX.arc", gFieldStructureHeap, 4, z);
    if (func_02101340((char *)buf, "STR", t) != 0) {
        for (i = 0; i < 5; i++) {
            Str_SPrintf(data_ov003_02235888, "STR:a/obj_x_house%d.nsbmd", i);
            u8 *p = (u8 *)NNS_G3dGetMdlSet(func_021012bc(data_ov003_02235888));
            r->models[i] = (s32)(p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc));
        }
        r->tex = (s32)NNS_G3dGetTex(func_021012bc("STR:a/obj_x_house0.nsbtx"));
        Gfx3d_LoadTexAndPltt((void *)r->tex, 0);
        r->texPattern = (s32)func_021066ac(func_02106690(func_021012bc("STR:a/obj_x_deco.nsbtp")), 0);
        r->isLoaded = 1;
        func_02101310((char *)buf);
    }
    return 1;
}

void HouseLightUpDeco_Release(void *p) {
    HouseLightUpDeco_Clear((HouseLightUpDeco *)p);
}

s32 HouseLightUpDeco_GetTex(s32 *p) {
    return *p;
}

s32 HouseLightUpDeco_GetModel(HouseLightUpDeco *r, u32 idx) {
    if (idx < 5) {
        return r->models[idx];
    }
    return 0;
}

s32 HouseLightUpDeco_GetTexPattern(HouseLightUpDeco *r) {
    return r->texPattern;
}

u8 HouseLightUpDeco_IsLoaded(HouseLightUpDeco *r) {
    return r->isLoaded;
}

}

PlayerHouseTex::PlayerHouseTex() {
    tex = 0;
}

PlayerHouseTex::~PlayerHouseTex() {}

extern "C" {

s32 PlayerHouseTex_Load(void **out) {
    void *r4 = gCurrentHeap;
    s32 r3 = Field_GetStructureTexSuffix();
    void *t = File_LoadAllocF(r4, -4, "/str/house_pl/house_pl_%c.nsbtx", r3);
    if (t != 0) {
        *out = NNS_G3dGetTex();
        Gfx3d_LoadPltt(*out, 0);
        *out = Gfx3d_CopyTex(*out, gFieldStructureHeap);
        Mem_Free(t);
        return 1;
    }
    return 0;
}

void PlayerHouseTex_Release(void *p) {
}

}
