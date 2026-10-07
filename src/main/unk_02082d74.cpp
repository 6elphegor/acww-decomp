#include "uptr.h"
#include "town/TownBlockCell.h"
#include "types.h"
#include "player/PlayerErrandsInviteView.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "town/Unk_02082e80_Grid.h"
#include "room/RoomFreeUnitMap.h"
#include "game/GroundInfoBase.h"
#include "game/GroundInfo.h"
#include "npc/NpcSpawner.h"
#include "sys/ProcProfile.h"
#include "town/TownBlockMap.h"
#include "actor/Actor.h"
#include "npc/VillagerDataItemView.h"
#include "npc/VillagerId.h"
#include "player/PlayerData.h"
#include "save/BlancaFaceRecord.h"
#include "save/SaveRecord4.h"
#include "town/VisitorPos.h"
#define PROTO_LOCAL_CommRecord_UnpackSource  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_CommSyncVar_SetVar  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_NetBuf_UnpackPair20  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerData_GetCurrent  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_Get  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetKatieState  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetPeteFall  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetResettiFlag  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetVisitorFlags  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_GetVisitorPos  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TownSessionState_TestFlag  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_02082d74.h"
#include "proto/main/unk_020407fc.h"
#include "proto/main/unk_0204eeb4.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_020815f8.h"
#include "proto/main/unk_02085940.h"
#include "proto/main/unk_02098e90.h"
#include "proto/main/unk_020a427c.h"
#include "proto/main/unk_020b0e60.h"

struct VisitorSpawner;
struct VisitorSchedule;
typedef void (VisitorSpawner::*Unk_02083c28_Fn)(VecFx32 *, u16 *, VisitorSchedule *);
typedef u16 *(VisitorSpawner::*Unk_02083d14_Fn)();

struct Unk_02083c28_VecZ {
    s32 x, y, z;
    Unk_02083c28_VecZ() { x = 0; y = 0; z = 0; }
    ~Unk_02083c28_VecZ() {}
};

struct VisitorSchedule {
    Unk_02083c28_VecZ pos;
    u16 profile;
    u8 sceneId;
    u8 priority;
    ~VisitorSchedule();
};

struct VisitorSpawnEntry {
    u16 id;
    u16 id2;
    u32 ovl;
    Unk_02083c28_Fn fn;
    u8 flag : 1;
};

struct VisitorCheckEntry {
    Unk_02083d14_Fn fn;
    u8 lvl;
};

struct NpcNetRecord {
    u8 isSet;
    u8 slotA;
    u8 slotB;
    u8 pad[0x1b];
};



struct VisitorSpawner {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in NpcSpawner)
    u8 pad[0xb0];  // DS +0x0 [0x70]
    u8 overlayLoaded;  // DS +0x70
    u8 pad2[0x3];  // DS +0x71 [0x3]
    u32 overlayId;  // DS +0x74
#else
    u8 pad[0x70];
    u8 overlayLoaded;
    u8 pad2[3];
    u32 overlayId;
#endif

    u16 *spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n);
    BOOL pickVisitor();
    void clearVisitorOverlay();
    void setVisitorOverlay(u32 *p);
};

struct NpcSpawnerOverlayView {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in NpcSpawner)
    u8 pad_00[0xb0];  // DS +0x0 [0x70]
    u8 overlayLoaded;  // DS +0x70
    u8 pad_71[0x3];  // DS +0x71 [0x3]
    u32 overlayId;  // DS +0x74
#else
    u8 pad_00[0x70];
    u8 overlayLoaded;
    u8 pad_71[3];
    u32 overlayId;
#endif

    void releaseVisitorOverlay();
};

struct Unk_02083314_K {
    u16 a;
    s16 b;
    u16 c;
};

struct EventVisitorEntry {
    u32 a;
    u16 b;
    u16 c;
};


struct VillagerSpawnLocals {
    u8 b;
    u16 h[4];
};







namespace Dp {
extern "C" {
}
}

extern const s32 sVisitorSpawnTableCount;
extern const s32 sDateVisitorTableCount;
extern const EventVisitorEntry sPeteVisitTable[1];
extern void *const sDateVisitorChecks[4];
extern const s32 sEventHostCheckValues[8];
extern const EventVisitorEntry sDateVisitorTable[4];
extern const EventVisitorEntry sEventHostTable[8];

NpcNetRecord sVillagerNetRecords[8];

void *sVisitorPlacePmf_FlowerFest[2] = {(void *)VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Gulliver[2] = {(void *)VisitorPlace_Gulliver, 0};
u16 sEventTortimerProfile[4] = {0x56, 0, 0, 0};
void *sVisitorPlacePmf_Blanca[2] = {(void *)VisitorPlace_AtVisitorPos, 0};
void *sVisitorCheckPmf_Resetti[2] = {(void *)Visitor_CheckResetti, 0};
const s32 sDateVisitorTableCount = 4;
void *sVisitorPlacePmf_Saharah[2] = {(void *)VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Pascal[2] = {(void *)VisitorPlace_Beach, 0};
void *sVisitorPlacePmf_Gracie[2] = {(void *)VisitorPlace_Gracie, 0};
void *sVisitorCheckPmf_TomNook[2] = {(void *)Visitor_CheckTomNook, 0};
VisitorSchedule sVisitorSchedule = {Unk_02083c28_VecZ(), 0xfff1, 0x33, 0};

NpcNetRecord sSpNpcNetRecords[0x26];
void *sVisitorCheckPmf_Kaitlin[2] = {(void *)Visitor_CheckKaitlin, 0};
void *sVisitorPlacePmf_Wendell[2] = {(void *)VisitorPlace_AtVisitorPos, 0};
void *sVisitorCheckPmf_Blanca[2] = {(void *)Visitor_CheckBlanca, 0};
void *sVisitorCheckPmf_Pete[2] = {(void *)Visitor_CheckPete, 0};
void *sVisitorPlacePmf_Fireworks[2] = {(void *)VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Shrunk[2] = {(void *)VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Tortimer[2] = {(void *)VisitorPlace_Tortimer, 0};
const EventVisitorEntry sDateVisitorTable[4] = {{0x3e, 0x6a, 0}, {0x41, 0x6b, 0}, {0x42, 0x68, 0}, {0x43, 0x62, 0}};
void *sVisitorPlacePmf_BugOff[2] = {(void *)VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Kaitlin[2] = {(void *)VisitorPlace_Kaitlin, 0};
ProcProfile sNpcSpawnerProfile = {(void *(*)())NpcSpawner_Create, 0xd0, 0xcc};
VisitorCheckEntry sVisitorCheckTable[11] = {
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Tortimer, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Resetti, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_TomNook, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_EventHost, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Lyle, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Joan, 4},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Katie, 3},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Kaitlin, 3},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_DateVisitors, 2},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Blanca, 2},
    {*(Unk_02083d14_Fn *)sVisitorCheckPmf_Pete, 2},
};
u16 sTortimerVisitorProfile[2] = {0x56, 0};
void *sVisitorPlacePmf_Joan[2] = {(void *)VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Katie[2] = {(void *)VisitorPlace_Katie, 0};
void *sVisitorPlacePmf_TomNook[2] = {(void *)VisitorPlace_TomNook, 0};
void *sVisitorPlacePmf_BrightNights[2] = {(void *)VisitorPlace_EventHost, 0};
const EventVisitorEntry sEventHostTable[8] = {{0x14, 0x57, 0}, {0x15, 0x58, 0}, {0x16, 0x59, 0}, {0x17, 0x5a, 0}, {0x18, 0x5f, 0}, {0x19, 0x5b, 0}, {0x1a, 0x5c, 0}, {0x1b, 0x5c, 0}};
void *sVisitorCheckPmf_EventHost[2] = {(void *)Visitor_CheckEventHost, 0};
const EventVisitorEntry sPeteVisitTable[1] = {{0x45, 0x54, 0}};
const s32 sVisitorSpawnTableCount = 0x17;

u8 sVillagerNetRecordPacked;
void *sVisitorCheckPmf_DateVisitors[2] = {(void *)Visitor_CheckDateVisitors, 0};
void *sVisitorCheckPmf_Lyle[2] = {(void *)Visitor_CheckLyle, 0};
void *sVisitorPlacePmf_FishingTourney[2] = {(void *)VisitorPlace_EventHost, 0};
const s32 sEventHostCheckValues[8] = {9, 10, 14, 15, 16, 17, 18, 19};
void *sVisitorPlacePmf_Cornimer[2] = {(void *)VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_TortimerTti[2] = {(void *)VisitorPlace_Origin, 0};
void *sVisitorPlacePmf_Pete[2] = {(void *)VisitorPlace_Pete, 0};
void *const sDateVisitorChecks[4] = {0, 0, (void *)Visitor_CanPascalVisit, 0};
void *sVisitorCheckPmf_Katie[2] = {(void *)Visitor_CheckKatie, 0};

namespace F1 {
extern "C" {
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern Unk_02082e80_Grid *gSceneBlockMap;
extern s32 sVisitorSpawnTableCount;
extern u8 data_021ed315, gSaveBlancaFace;
void FieldPos_SnapToUnitCenter(void *g, void *v);
void *TownSessionState_Get();
void *TownSessionState_GetVisitorFlags(void *p);
void *TownSessionState_GetVisitorPos(void *p);
void *TownSessionState_GetPeteFall(void *p);
void *TownSessionState_GetKatieState(void *p);
void _ZN17VisitorSpawnFlags16getGulliverSpawnEPvPtP7VecFx32(void *a, void *b, u16 *c, void *d);
void _ZN13PeteFallState6getPosEP7VecFx32(void *a, void *b);
s32 _ZN13PeteFallState9getFacingEv(void *a);
void _ZN15KatieVisitState6getPosEP7VecFx32(void *a, void *b);
s32 _ZN15KatieVisitState12pickKatiePosEv(void *a);
s32 PlayerData_GetCurrent();
s32 _ZN20PlayerDailyTalkFlags4testEj(void *a, s32 b);
s32 _ZN11SaveRecord412isDateActiveEv(void *a);
s32 Scene_GetCurrent();
void Clock_GetDateTime(void *p);
s32 MapBlock_HasAnyAttr(void *c, s32 v);
s32 MapBlock_HasAllAttr(void *c, s32 v);
s32 Ground_IsSandAboveSea(s32 x, s32 y);
void FieldUnit_FromBlockUnit(s32 *o1, s32 *o2, s32 a, s32 b, s32 c, s32 d);
void FieldPos_FromUnitCenter(void *a, s32 x, s32 y);
}
static inline BOOL Unk_02083058_IsA() { return gFieldSceneKind == 0 ? TRUE : FALSE; }
static inline TownBlockCell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->size[0] && y < g->size[1] && g->blocks != NULL) {
        return &g->blocks[y * g->size[0] + x];
    }
    return NULL;
}
}

namespace F2 {
extern "C" {
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern u8 data_021ed315;
extern void *gSceneBlockMap;
extern s32 sVisitorSpawnTableCount;
extern EventVisitorEntry sEventHostTable[];
extern s32 sEventHostCheckValues[];
s32 Scene_GetCurrent();
s32 Scene_GetPrevious();
s32 SceneId_IsHouseRoom(s32);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord11getSubGroupEv(void *);
void Clock_GetDateTime(void *);
void *_ZN11SaveRecord412isDateActiveEv(void *);
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
s32 TownSessionState_Get();
s32 TownSessionState_GetKatieState(s32);
s32 TownSessionState_GetResettiFlag(s32);
s32 TownSessionState_TestFlag(s32, s32);
s32 _ZN15KatieVisitState6getPosEP7VecFx32(s32, void *);
s32 _ZN15KatieVisitState11isFollowingEv(s32);
s32 _ZN16ResettiVisitFlag5isSetEv(s32);
s32 FieldPos_FromUnitCenter(void *, s32, s32);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnitCenter(void *, s32, s32, s32, s32);
void FieldPos_FromBlockUnit(void *, s32, s32, s32, s32);
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
}

}

namespace F3 {
extern "C" {
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern VecFx32 gVec3Zero;
extern u8 gSaveVillagers[];
extern u16 *gSceneBlockMap;
s32 Scene_GetCurrent();
s32 Scene_InTown();
s32 _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32 a, u32 b, void *c, void *d, void *e);
s32 Field_ClearObjectFcFdAt(VecFx32 *v);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 y);
void MI_CpuFill8(void *dst, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 CommRecord_UnpackSource(u8 *p, u8 *dst, s32 z);
s32 CommSyncVar_SetVar(u32 a, u8 *p, s32 b, s32 c);
void *VillagerStates_GetEntry(s32 i);
s32 VillagerState_SetMood(void *p, s32 v);
s32 VillagerState_SetMoodTimer(void *p, s32 v);
s32 VillagerTrend_TickIdle();
s32 SaveVillagers_UpdatePlans(void *p);
void *SaveVillagers_Get(void *p, s32 i);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
s32 _ZN10VillagerId7isValidEv(void *p);
void *Villager_GetState(void *p);
s32 VillagerState_GetMood(void *p);
s32 VillagerState_TickMoodTimer(void *p);
s32 VillagerState_GetMoodTimer(void *p);
void *VillagerState_GetTalkRepeat(void *p);
s32 TalkRepeat_Tick(void *p, s32 v);
void VisitorSchedule_Clear(VisitorSchedule *g);
}
static inline BOOL Unk_02083c28_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F4 {
extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind;
extern u32 sVisitorSpawnTableCount;
extern u8 data_021ed315[];
void VisitorSchedule_Clear(void *p);
void VillagerStates_ClearFleaVillager();
s32 Scene_InTown();
void SaveVillagers_UpdatePlansNow(void *p);
s32 Scene_GetRequestedScene();
s32 SceneId_IsVillagerHouse(u32 a);
void *SaveVillagers_GetByHouseRoom(void *p, s32 v);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
s32 _ZN10VillagerId7isValidEv(void *p);
void Villager_PlaceReceivedItems(void *p);
void *TownSessionState_Get();
void *TownSessionState_GetPeteFall(void *p);
void *TownSessionState_GetVisitorFlags(void *p);
void _ZN13PeteFallState18clearVisitorActiveEv(void *p);
void _ZN17VisitorSpawnFlags19clearVisitorSpawnedEv(void *p);
void _ZN17VisitorSpawnFlags17setVisitorSpawnedEv(void *p);
s32 _ZN13PeteFallState10hasFallPosEv(void *p);
void _ZN13PeteFallState16setVisitorActiveEv(void *p);
void SaveVillagers_UpdateBirthdayParty(void *p);
void SaveVillagers_ApplyBirthdayParty(void *p);
void VillagerStates_SetFleaMarketBuyer(s32 v);
s32 Scene_GetPrevious();
s32 SceneId_IsTown(s32 v);
s32 VillagerStates_GetBirthdayHost();
void Clock_GetDateTime(void *p);
s32 SaveVillagers_FindBirthdayVillager(void *p, void *q);
void VillagerStates_SetBirthdayHost(s32 v);
void VillagerStates_SetBirthdayGuest(s32 v);
s32 _ZN11CommManager12isSlotActiveEi(void *g, s32 i);
s32 PlayerData_GetCurrent();
s32 _ZN10PlayerData11getPlayerIdEv(s32 p);
void SaveVillagers_PickFleaVillager(void *p, s32 v);
s32 Scene_InVillagerHouse();
s32 Scene_InHouseRoom();
s32 VillagerEvent_GetTodayIndex();
s32 VillagerStates_GetFleaMarketBuyer();
s32 Scene_GetHouseRoom();
s32 _ZN10PlayerData10getErrandsEv(s32 p);
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord7getKindEv(void *p);
s32 DateTime_DiffMinutes(void *p, void *q);
s32 _ZN12ErrandRecord7getStepEv(void *p);
s32 SaveVillagers_FindIndex(void *p, void *q);
s32 SaveVillagers_IsValidIndex(s32 v);
void NetBuf_UnpackPair20(void *a, void *b, void *c);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *SaveVillagers_Find(void *p, void *q);
void *Villager_GetState(void *p);
void VillagerState_ResetRole(void *e);
void SaveVillagers_PickFleaMarketBuyerNow(void *p);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, void *d, void *e);
s32 Scene_GetVillagerHouse();
void *SaveVillagers_Get(void *p, s32 i);
s32 VillagerStates_GetBirthdayGuest();
s32 SaveVillagers_GetUnk3830Index(void *p);
s32 SaveVillagers_GetUnk3830(void *p);
s32 _ZN18SickVillagerRecord11isRecoveredEv(s32 v);
s32 Villager_GetResidentStatus(void *p);
s32 Town_GetMaxOutdoorVillagers();
s32 SaveVillagers_IsOutdoors(void *p, void *q);
void CommRecord_UnpackSource(void *a, void *b, s32 c);
s32 Scene_GetCurrent();
s32 SceneId_IsTownUnk31(s32 v);
void *_ZN20VillagerDataItemView11getHousePosEv(void *p);
void FieldPos_FromUnitCenter(void *p, s32 x, s32 y);
s32 Villager_GetWhereabouts(void *p);
void GroundInfo_Destruct(void *buf);
s32 _ZN11SaveRecord412isDateActiveEv(void *p);
s32 Event_GetState(s32 a, void *b, s32 c);
}
static inline BOOL Unk_020845a8_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F5 {
extern "C" {
extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
void MI_CpuFill8(void *p, u32 v, u32 n);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
void FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 z);
s32 VisitorSchedule_Clear(void *);
BOOL _ZN11CommManager12isSlotActiveEi(void *, u32);
s32 Scene_GetCurrent();
s32 Scene_GetMaxSpNpcs(u32 i);
void *TownBlockMap_Get();
void *MapBlock_GetItemPtr(void *, s32, s32, s32);
void MapBlock_SetItem(void *, u16 *, s32, s32, s32);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
}

}

extern "C" void Town_RemoveShipParts()
{
    TownBlockMap *g = (TownBlockMap *)F5::TownBlockMap_Get();
    s32 x, y;
    if (g != NULL) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                u8 *cell;
                u16 *p;
                if ((u32)x < g->width && (u32)y < g->height && g->blocks != NULL) {
                    cell = g->blocks + (y * g->width + x) * MAPBLOCK_SIZE;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    p = (u16 *)F5::MapBlock_GetItemPtr(cell, 0, 0, 0);
                    if (p != NULL) {
                        s32 i, j;
                        for (j = 0; j < 16; j++) {
                            for (i = 0; i < 16; i++) {
                                u16 v[2];
                                BOOL ok;
                                if (F5::Item_IsFurniture(p)) {
                                    v[1] = 0x1568;
                                    s32 t = F5::Item_GetFurnitureIndex(p);
                                    ok = (t == F5::Item_GetFurnitureIndex(&v[1])) ? TRUE : FALSE;
                                } else {
                                    if (*p == 0x1568) ok = TRUE; else ok = FALSE;
                                }
                                if (ok) {
                                    v[0] = 0xfff1;
                                    F5::MapBlock_SetItem(cell, v, i, j, 0);
                                }
                                p++;
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" s32 NpcSpawn_GetSpNpcSlotCount()
{
    BOOL b = (F5::gFieldSceneKind == 0);
    if (b) {
        CommManager *d = F5::gCommManager;
        if (F5::_ZN11CommManager12isSlotActiveEi(d, d->myAid)) {
            return 0;
        }
    }
    return F5::Scene_GetMaxSpNpcs(F5::Scene_GetCurrent());
}

VisitorSchedule::~VisitorSchedule() {}

extern "C" NpcSpawner *NpcSpawner_Create()
{
    return new NpcSpawner();
}

extern "C" void NpcSpawn_ResetAll()
{
    sVillagerNetRecordPacked = 0;
    F5::MI_CpuFill8(sVillagerNetRecords, 0, 0xf0);
    F5::MI_CpuFill8(sSpNpcNetRecords, 0, 0x474);
    F5::VisitorSchedule_Clear(&sVisitorSchedule);
}

extern "C" void NpcNetRecords_InitVillagers()
{
    u8 *p = (u8 *)sVillagerNetRecords;
    s32 i;
    s32 z = 0;
    F5::MI_CpuFill8(p, 0, 0xf0);
    for (i = 0; i < 8; p += 0x1e, i++) {
        void *o = F5::SaveVillagers_Get(F5::gSaveVillagers, i);
        if (o != NULL && ((VillagerId *)(F5::_ZN12VillagerData13getVillagerIdEv(o)))->isValid() != 0) {
            VecFx32 v;
            v.x = 0;
            v.y = 0;
            v.z = 0;
            u8 *q = F5::_ZN20VillagerDataItemView11getHousePosEv(o);
            F5::FieldPos_FromUnitCenter(&v, q[0] + 1, q[1] + 2);
            NetBuf_PackPair20(p + 4, v.x, v.z);
            CommRecord_PackSource(p + 3, z, z);
            p[0] = 1;
        }
    }
}

extern "C" s32 NpcSpawner_PickFreeRoomPos(NpcSpawner *a, void *out)
{
    s32 r6;
    if (RoomFreeUnitMap_Build(a->freeUnitMap.rows)) {
        s32 cnt = 0;
        s32 x, y;
        for (x = 0; x < 16; x++) {
            RoomFreeUnitMap_Clear(a->freeUnitMap.rows, x, 14);
            RoomFreeUnitMap_Clear(a->freeUnitMap.rows, x, 15);
        }
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (RoomFreeUnitMap_Test(a->freeUnitMap.rows, x, y)) cnt++;
            }
        }
        if (cnt > 0) {
            s32 y, x;
            r6 = Random_GlobalBelow(cnt);
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (RoomFreeUnitMap_Test(a->freeUnitMap.rows, x, y)) {
                        if (r6 == 0) {
                            F4::FieldPos_FromUnitCenter(out, x, y);
                            return 1;
                        }
                        r6--;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL Event_IsActive(s32 a, s32 *p)
{
    s32 t[2];
    u8 buf[8];
    t[0] = 0;
    t[1] = 0;
    if (p == 0) {
        F4::Clock_GetDateTime(t);
        p = t;
    }
    F4::MI_CpuCopy8(p, buf, 8);
    if (F4::Event_GetState(a, buf, 0)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void Visitor_GetTodaysNpc(u16 *out)
{
    s32 r4 = F4::_ZN11SaveRecord412isDateActiveEv(F4::data_021ed315);
    u16 *p;
    void *q = Visitor_FindTortimer(0);
    if (q == 0) {
        q = Visitor_FindEventHost(0);
    }
    if (q) {
        *out = 0xfff1;
        return;
    }
    p = Visitor_FindLyle(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = Visitor_FindJoan(0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && Event_IsActive(0x3d, 0)) {
        *out = 0xd00e;
        return;
    }
    p = Visitor_FindKatie(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = Visitor_FindKaitlin(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = Visitor_FindInEventTable(sDateVisitorTable, sDateVisitorChecks, sDateVisitorTableCount, 0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && Event_IsActive(0x3f, 0)) {
        *out = 0xd00a;
        return;
    }
    if (r4 == 0 && Event_IsActive(0x40, 0)) {
        *out = 0xd00b;
        return;
    }
    p = Visitor_FindBlanca(0);
    if (p) {
        *out = p[1];
        return;
    }
    *out = 0xfff1;
}

extern "C" void NpcSpawn_FixVillagerPos(void *a, void *vec)
{
    u32 buf[17];
    ((GroundInfo *)(buf))->initAtPos((VecFx32 *)(vec), 0, 0);
    if (F4::Villager_GetWhereabouts(a) == 0) {
        if (((GroundInfoBase *)(buf))->getHeight(0)) {
            u8 *p = (u8 *)((VillagerDataItemView *)(a))->getHousePos();
            F4::FieldPos_FromUnitCenter(vec, p[0] + 1, p[1] + 2);
        }
    }
    F4::GroundInfo_Destruct(buf);
}

extern "C" void NpcSpawner_SpawnVillagers(void *a)
{
    VillagerSpawnLocals w;
    VecFx32 v;
    s32 n, cnt, i;
    w.h[0] = 0xfff1;
    w.h[1] = 0;
    w.h[2] = 0;
    w.h[3] = 0;
    n = F4::Town_GetMaxOutdoorVillagers();
    cnt = 0;
    w.b = 0;
    if (n > 0) {
        i = cnt;
        goto test0;
    loop0:
        void *r7;
        r7 = F4::SaveVillagers_Get(F4::gSaveVillagers, i);
        if (r7 == 0) goto next0;
        if (((VillagerId *)(F4::_ZN12VillagerData13getVillagerIdEv(r7)))->isValid() == 0) goto next0;
        if (F4::SaveVillagers_IsOutdoors(F4::gSaveVillagers, F4::_ZN12VillagerData13getVillagerIdEv(r7)) == 0) goto next0;
        w.b = 0;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        w.h[1] = 0;
        w.h[2] = 0;
        w.h[3] = 0;
        w.h[0] = (i & 0xfff) | 0xe000;
        u8 *e;
        e = (u8 *)NpcNetRecord_GetVillagerVar(&w.h[0]);
        if (e != 0 && e[0] != 0) {
            F4::CommRecord_UnpackSource(e + 3, &w, 0);
            if (w.b == F4::Scene_GetCurrent()) {
                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                F4::MI_CpuCopy8(e + 9, &w.h[2], 2);
            } else {
                u8 *p = (u8 *)((VillagerDataItemView *)(r7))->getHousePos();
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            }
        } else if (NetArea_IsLocalOwner() && ((u8 *)&sVillagerNetRecords[i])[0] != 0) {
            u8 *t = (u8 *)&sVillagerNetRecords[i];
            F4::CommRecord_UnpackSource(t + 3, &w, 0);
            s32 wb = w.b;
            if (wb != F4::Scene_GetCurrent() && F4::SceneId_IsTown(wb) == 0 && F4::SceneId_IsTownUnk31(w.b) == 0 && w.b != 0x2c) {
                u8 *p = (u8 *)((VillagerDataItemView *)(r7))->getHousePos();
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            } else {
                F4::NetBuf_UnpackPair20(t + 4, &v.x, &v.z);
                NpcSpawn_FixVillagerPos(r7, &v);
            }
        } else {
            u8 *p = (u8 *)((VillagerDataItemView *)(r7))->getHousePos();
            F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
        }
        if (F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(0x84, w.h[0], &v, &w.h[1], a)) {
            cnt++;
        }
    next0:
        i++;
    test0:
        if (i < 8 && cnt < n) goto loop0;
    }
}

extern "C" void NpcSpawner_SpawnHouseOwner(NpcSpawner *a)
{
    s32 r7 = F4::Scene_GetVillagerHouse();
    void *obj = F4::SaveVillagers_Get(F4::gSaveVillagers, r7);
    if (obj == 0) {
        return;
    }
    if (((VillagerId *)(F4::_ZN12VillagerData13getVillagerIdEv(obj)))->isValid() == 0) {
        return;
    }
    u16 h[5];
    VecFx32 v;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[2] = 0;
    h[3] = 0;
    h[4] = 0;
    h[0] = (r7 & 0xfff) | 0xe000;
    u8 *e = (u8 *)NpcNetRecord_GetVillagerVar(h);
    s32 r4;
    if (NetArea_IsLocalOwner()) {
        r4 = NpcSpawner_PickFreeRoomPos(a, &v);
        h[3] = Random_GlobalBelow(4) << 14;
    } else if (e != 0 && e[0] != 0) {
        F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
        F4::MI_CpuCopy8(e + 9, &h[3], 2);
        r4 = 1;
    } else {
        r4 = NpcSpawner_PickFreeRoomPos(a, &v);
        h[3] = Random_GlobalBelow(4) << 14;
    }
    if (r4 != 0) {
        s32 c = 0x85;
        s32 r6 = 0xd8;
        if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->myAid) == 0) {
            if (r7 == F4::VillagerStates_GetBirthdayHost()) {
                c = 0x80;
                if (F4::SaveVillagers_IsValidIndex(F4::VillagerStates_GetBirthdayGuest())) {
                    h[1] = (F4::VillagerStates_GetBirthdayGuest() & 0xfff) | 0xe000;
                    r6 = 0x81;
                }
            } else if (r7 == F4::SaveVillagers_GetUnk3830Index(F4::gSaveVillagers)) {
                if (F4::_ZN18SickVillagerRecord11isRecoveredEv(F4::SaveVillagers_GetUnk3830(F4::gSaveVillagers)) == 0) {
                    c = 0x83;
                }
            } else if (F4::VillagerEvent_GetTodayIndex() == 0xa) {
                if (F4::Villager_GetResidentStatus(obj) == 3) {
                    c = 0x86;
                }
            }
        }
        F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(c, h[0], &v, &h[2], a);
        if (r6 != 0xd8) {
            if (((s32)(h[1] & 0xf000) >> 12) == 0xe) {
                NpcSpawner_PickFreeRoomPos(a, &v);
                h[3] = Random_GlobalBelow(4) << 14;
                F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(r6, h[1], &v, &h[2], a);
            }
        }
    }
}

extern "C" void NpcSpawner_SpawnPlayerHouseVisitor(void *a)
{
    s32 t;
    s32 code;
    BOOL flag;
    VecFx32 v;
    u16 h[4];
    s32 vv[2];
    if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->myAid)) {
        return;
    }
    code = 0x85;
    flag = FALSE;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[1] = 0;
    h[2] = 0;
    h[3] = 0;
    h[0] = 0xfff1;
    s32 st = F4::VillagerEvent_GetTodayIndex();
    if (st == 0xb) {
        PlayerErrandsInviteView *top = (PlayerErrandsInviteView *)F4::_ZN10PlayerData10getErrandsEv(F4::PlayerData_GetCurrent());
        HouseVisitInviteLayoutView &m = *top;
        HouseVisitInviteErrandPart &q = m;
        u8 *r7 = (u8 *)&m;
        u8 *r4 = (u8 *)&q;
        s32 r5 = ~flag;
        if (F4::_ZN12ErrandRecord8isActiveEv(r4)) {
            if (F4::_ZN12ErrandRecord7getKindEv(r4) == 0x15) {
                vv[0] = flag;
                vv[1] = flag;
                F4::Clock_GetDateTime(vv);
                t = F4::DateTime_DiffMinutes(r7 + 0x18, vv);
                if (F4::_ZN12ErrandRecord7getStepEv(r4) == 0) {
                    if (t <= 0x1e) {
                        r5 = F4::SaveVillagers_FindIndex(F4::gSaveVillagers, r7);
                    }
                } else if ((u32)F4::_ZN12ErrandRecord7getStepEv(r4) < 4) {
                    if (t <= 0x3c) {
                        r5 = F4::SaveVillagers_FindIndex(F4::gSaveVillagers, r7);
                        if (F4::SaveVillagers_IsValidIndex(r5)) {
                            u8 *e = (u8 *)&sVillagerNetRecords[r5];
                            if (e[0] != 0) {
                                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                                F4::MI_CpuCopy8(e + 9, &h[2], 2);
                            }
                        }
                    } else {
                        HouseVisitor_ClearPresent();
                        void *f = F4::SaveVillagers_Find(F4::gSaveVillagers, r7);
                        if (f) {
                            F4::VillagerState_ResetRole(F4::Villager_GetState(f));
                        }
                    }
                }
            }
        }
        if (r5 != -1) {
            h[0] = (r5 & 0xfff) | 0xe000;
            code = 0x82;
            flag = TRUE;
        }
    } else if (st == 0xa) {
        if (F4::SceneId_IsTown(F4::Scene_GetPrevious())) {
            F4::SaveVillagers_PickFleaMarketBuyerNow(F4::gSaveVillagers);
        }
        s32 r4 = F4::VillagerStates_GetFleaMarketBuyer();
        if (F4::SaveVillagers_IsValidIndex(r4)) {
            h[0] = (r4 & 0xfff) | 0xe000;
            code = 0x87;
            if (F4::SceneId_IsTown(F4::Scene_GetPrevious()) == 0) {
                u8 *e = (u8 *)&sVillagerNetRecords[r4];
                if (e[0] != 0) {
                    F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                    F4::MI_CpuCopy8(e + 9, &h[2], 2);
                }
            }
            flag = TRUE;
        }
    }
    if (flag) {
        F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(code, h[0], &v, 0, a);
    }
}

BOOL NpcSpawner::onCreate()
{
    u8 *a = (u8 *)this;
    u32 saved = F4::sVisitorSpawnTableCount;
    u8 *g = F4::gSaveVillagers;
    F4::_ZN13PeteFallState18clearVisitorActiveEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get()));
    F4::_ZN17VisitorSpawnFlags19clearVisitorSpawnedEv(F4::TownSessionState_GetVisitorFlags(F4::TownSessionState_Get()));
    if (F4::Scene_InTown()) {
        if (g != 0) {
            F4::SaveVillagers_UpdateBirthdayParty(g);
            F4::SaveVillagers_ApplyBirthdayParty(g);
        }
        F4::VillagerStates_SetFleaMarketBuyer(-1);
    } else {
        if (F4::SceneId_IsTown(F4::Scene_GetPrevious())) {
            s32 sp[2];
            sp[0] = 0;
            sp[1] = 0;
            s32 r4 = F4::VillagerStates_GetBirthdayHost();
            F4::Clock_GetDateTime(sp);
            s32 m = -1;
            if (r4 != m) {
                if (r4 != F4::SaveVillagers_FindBirthdayVillager(g, sp)) {
                    F4::VillagerStates_SetBirthdayHost(-1);
                    F4::VillagerStates_SetBirthdayGuest(-1);
                    if (g != 0) {
                        F4::SaveVillagers_ApplyBirthdayParty(g);
                    }
                }
            }
        }
    }
    if (F4::Unk_020845a8_IsZero(F4::gFieldSceneKind)) {
        if (Visitor_IsTaxiActive() == 0) {
            if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->myAid) == 0) {
                s32 r1;
                if (F4::PlayerData_GetCurrent()) {
                    r1 = F4::_ZN10PlayerData11getPlayerIdEv(F4::PlayerData_GetCurrent());
                } else {
                    r1 = 0;
                }
                F4::SaveVillagers_PickFleaVillager(g, r1);
            }
            NpcSpawner_SpawnVillagers(a);
        }
    } else if (F4::Scene_InVillagerHouse()) {
        NpcSpawner_SpawnHouseOwner(this);
    } else if (F4::Scene_InHouseRoom()) {
        if (g != 0) {
            if (F4::VillagerEvent_GetTodayIndex() != 0xa) {
                s32 m = -1;
                if (F4::VillagerStates_GetFleaMarketBuyer() != m) {
                    F4::VillagerStates_SetFleaMarketBuyer(m);
                    HouseVisitor_ClearPresent();
                }
            }
        }
        if (F4::Scene_GetHouseRoom() == 0) {
            NpcSpawner_SpawnPlayerHouseVisitor(a);
        }
    }
    ((VisitorSpawner *)(a))->pickVisitor();
    u16 *r4 = (u16 *)((VisitorSpawner *)(a))->spawnScheduledVisitor(sVisitorSpawnTable, saved);
    if (r4) {
        F4::_ZN17VisitorSpawnFlags17setVisitorSpawnedEv(F4::TownSessionState_GetVisitorFlags(F4::TownSessionState_Get()));
        if (r4[1] != 0xd008 || F4::_ZN13PeteFallState10hasFallPosEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get())) != 0) {
            F4::_ZN13PeteFallState16setVisitorActiveEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get()));
        }
    }
    NpcSpawner_RepickKatiePosOnline();
    if (F4::Scene_InTown()) {
        F4::SaveVillagers_UpdatePlansNow(g);
    }
    return TRUE;
}

BOOL NpcSpawner::onDelete()
{
    ((NpcSpawnerOverlayView *)(this))->releaseVisitorOverlay();
    F4::VisitorSchedule_Clear(&sVisitorSchedule);
    F4::VillagerStates_ClearFleaVillager();
    if (F4::Scene_InTown()) {
        void *g = F4::gSaveVillagers;
        F4::SaveVillagers_UpdatePlansNow(g);
        s32 v = F4::Scene_GetRequestedScene();
        if (F4::SceneId_IsVillagerHouse(v)) {
            void *r = F4::SaveVillagers_GetByHouseRoom(g, (s8)v);
            if (r) {
                if (((VillagerId *)(F4::_ZN12VillagerData13getVillagerIdEv(r)))->isValid()) {
                    F4::Villager_PlaceReceivedItems(r);
                }
            }
        }
    }
    return TRUE;
}

BOOL NpcSpawner::onExecute()
{
    u8 *g = F3::gSaveVillagers;
    void *a, *b;
    s32 i;
    u16 id;
    if (F3::Scene_InTown()) {
        F3::VillagerTrend_TickIdle();
        if ((F3::gCommManager)->isSlotActive(F3::gCommManager->myAid) == 0) {
            if (g) F3::SaveVillagers_UpdatePlans(g);
        }
    }
    if ((F3::gCommManager)->isSlotActive(F3::gCommManager->myAid) == 0) {
        if (g) {
            id = 0xfff1;
            for (i = 0; i < 8; i++) {
                a = F3::SaveVillagers_Get(g, i);
                if (a) {
                    if (((VillagerId *)(F3::_ZN12VillagerData13getVillagerIdEv(a)))->isValid()) {
                        b = F3::Villager_GetState(a);
                        if (b) {
                            id = (i & 0xfff) | 0xe000;
                            if (NpcRegistry_FindVillagerByHandle(&id) == 0) {
                                if (F3::VillagerState_GetMood(b)) {
                                    F3::VillagerState_TickMoodTimer(b);
                                    if (F3::VillagerState_GetMoodTimer(b) == 0) F3::VillagerState_SetMood(b, 0);
                                    F3::TalkRepeat_Tick(F3::VillagerState_GetTalkRepeat(b), 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return TRUE;
}

extern "C" BOOL NpcNetRecord_SetVillagerState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        NpcNetRecord *r = &sVillagerNetRecords[i];
        r->isSet = 1;
        CommRecord_PackSource(HOST_AT(r, 3, pad[0], 0), b, 0);
        NetBuf_PackPair20(HOST_AT(r, 4, pad[1], 0), v->x, v->z);
        F3::MI_CpuCopy8(&c, HOST_AT(r, 9, pad[6], 0), 2);
        F3::MI_CpuCopy8(d, HOST_AT(r, 0xf, pad[12], 0), 0xf);
        F3::MI_CpuCopy8(e, HOST_AT(r, 0xb, pad[8], 0), 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL NpcNetRecord_SetVillagerSlots(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        NpcNetRecord *r = &sVillagerNetRecords[i];
        r->isSet = 1;
        r->slotA = b;
        r->slotB = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void NpcNetRecord_InitVillagerVar(void *dst, s32 id) {
    void *o;
    NpcNetRecord_PackVillager(dst, id);
    o = F3::VillagerStates_GetEntry(id - 0xc);
    if (o) {
        F3::VillagerState_SetMood(o, 0);
        F3::VillagerState_SetMoodTimer(o, 0);
    }
}

extern "C" void NpcNetRecord_PackVillager(void *dst, s32 id) {
    u32 i = id - 0xc;
    if (i < 8) {
        NpcNetRecord *r = &sVillagerNetRecords[i];
        r->isSet = 1;
        F3::MI_CpuCopy8(r, dst, CommSyncVar_GetVarSize(id));
        sVillagerNetRecordPacked = 1;
    }
}

extern "C" u8 *NpcNetRecord_GetVillagerVar(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 8) return (F3::gCommManager)->getSyncVar(i + 0xc);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetSpNpcState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        NpcNetRecord *r = &sSpNpcNetRecords[i];
        r->isSet = 1;
        CommRecord_PackSource(HOST_AT(r, 3, pad[0], 0), b, 0);
        NetBuf_PackPair20(HOST_AT(r, 4, pad[1], 0), v->x, v->z);
        F3::MI_CpuCopy8(&c, HOST_AT(r, 9, pad[6], 0), 2);
        F3::MI_CpuCopy8(d, HOST_AT(r, 0xf, pad[12], 0), 0xf);
        F3::MI_CpuCopy8(e, HOST_AT(r, 0xb, pad[8], 0), 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL NpcNetRecord_SetSpNpcSlots(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        NpcNetRecord *r = &sSpNpcNetRecords[i];
        r->isSet = 1;
        r->slotA = b;
        r->slotB = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void NpcNetRecord_PackSpNpc(void *dst, s32 id) {
    u32 i = id - 0x20;
    if (i < 0x26) {
        NpcNetRecord *r = &sSpNpcNetRecords[i];
        r->isSet = 1;
        F3::MI_CpuCopy8(r, dst, CommSyncVar_GetVarSize(id));
    }
}

extern "C" u8 *NpcNetRecord_GetSpNpcVar(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 0x26) return (F3::gCommManager)->getSyncVar(i + 0x20);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return NpcNetRecord_SetVillagerState(p, b, v, c, d, e);
    if (k == 0xd) return NpcNetRecord_SetSpNpcState(p, b, v, c, d, e);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetSlots(u16 *p, u32 b, u32 c) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return NpcNetRecord_SetVillagerSlots(p, b, c);
    if (k == 0xd) return NpcNetRecord_SetSpNpcSlots(p, b, c);
    return 0;
}

extern "C" u8 *NpcNetRecord_GetVar(u16 *p) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return NpcNetRecord_GetVillagerVar(p);
    if (k == 0xd) return NpcNetRecord_GetSpNpcVar(p);
    return 0;
}

extern "C" void NpcNetRecord_SetSlotsAndSync(u32 a, u32 b, u32 c, u16 *p) {
    NpcNetRecord_SetSlots(p, b, c);
    if ((F3::gCommManager)->isSlotActive(F3::gCommManager->myAid)) {
        u32 v = *p;
        s32 k = (s32)(v & 0xf000) >> 12;
        u32 idx = v & 0xfff;
        if (k == 0xe) {
            F3::CommSyncVar_SetVar(idx + 0xc, (u8 *)&a, 0, 0);
        } else if (k == 0xd) {
            F3::CommSyncVar_SetVar(idx + 0x20, (u8 *)&a, 0, 0);
        }
    }
}

extern "C" BOOL NpcNetRecord_GetSlots(s32 *a, s32 *b, u16 *p) {
    u8 *rec = NpcNetRecord_GetVar(p);
    if (rec && rec[0] != 0) {
        *a = rec[1];
        *b = rec[2];
        return TRUE;
    }
    return FALSE;
}

extern "C" void NpcNetRecord_ResetTalkSlots() {
    struct {
        u8 b[2];
        u16 id;
    } l;
    s32 s4, s8;
    s32 i;
    s32 ovl = F3::Scene_GetCurrent();
    CommManager *d;
    s4 = 4;
    s8 = 4;
    l.id = 0xfff1;
    i = 0;
    d = F3::gCommManager;
    for (; i < 8; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xe000;
        rec = NpcNetRecord_GetVar(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (NpcNetRecord_GetSlots(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        NpcNetRecord_SetSlotsAndSync(1, 4, 4, &l.id);
                    } else if (s8 == d->myAid && s8 != s4) {
                        NpcNetRecord_SetSlotsAndSync(1, d->myAid, 4, &l.id);
                    }
                }
            }
        }
    }
    for (i = 0; i < 0x26; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xd000;
        rec = NpcNetRecord_GetVar(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (NpcNetRecord_GetSlots(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        NpcNetRecord_SetSlotsAndSync(1, 4, 4, &l.id);
                    } else if (s8 == d->myAid && s8 != s4) {
                        NpcNetRecord_SetSlotsAndSync(1, d->myAid, 4, &l.id);
                    }
                }
            }
        }
    }
}

RoomFreeUnitMap::RoomFreeUnitMap() {}

RoomFreeUnitMap::~RoomFreeUnitMap() {}

extern "C" BOOL RoomFreeUnitMap_Build(u16 *out) {
    s32 y, x;
    u16 *grid = F3::gSceneBlockMap;
    F3::MI_CpuFill8(out, 0, 0x20);
    if (grid) {
        u16 *p = F3::BlockMap_GetItemPtr(grid, 0, 0, 0, 0, 0);
        if (p) {
            for (y = 0; y < 16; y++) {
                for (x = 0; x < 16; x++) {
                    VecFx32 v;
                    F3::FieldPos_FromUnitCenter(&v, x, y);
                    GroundInfo o(&v, 0, 0);
                    if (*p == 0xfff1 && !o.getHeight(1)) {
                        RoomFreeUnitMap_Set(out, x, y);
                    }
                    p++;
                }
            }
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (RoomFreeUnitMap_Test(out, x, y) && !RoomFreeUnitMap_Test(out, x + 1, y) && !RoomFreeUnitMap_Test(out, x - 1, y)
                        && !RoomFreeUnitMap_Test(out, x, y + 1) && !RoomFreeUnitMap_Test(out, x, y - 1)) {
                        RoomFreeUnitMap_Clear(out, x, y);
                    }
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL RoomFreeUnitMap_Set(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] |= (1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL RoomFreeUnitMap_Clear(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] &= ~(1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL RoomFreeUnitMap_Test(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL RoomFreeUnitMap_TestUpper(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 14) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" void VisitorSchedule_Set(VisitorSchedule *out, u16 *idp, u32 b, u32 c, VecFx32 *pos) {
    out->profile = *idp;
    out->sceneId = b;
    out->priority = c;
    if (pos) {
        *(VecFx32 *)&out->pos = *pos;
    } else {
        *(VecFx32 *)&out->pos = F3::gVec3Zero;
    }
}

extern "C" void VisitorSchedule_Clear(VisitorSchedule *g) {
    VisitorSchedule_Set(g, &sEventTortimerProfile[2], 0x33, 0, 0);
}

extern "C" BOOL VisitorSchedule_IsSet(void *p, VisitorSchedule *g) {
    BOOL r = FALSE;
    u32 v = g->priority;
    if (v != 0 && v < 5) r = TRUE;
    return r;
}

void VisitorSpawner::setVisitorOverlay(u32 *p) {
    overlayLoaded = 1;
    overlayId = *p;
}

void VisitorSpawner::clearVisitorOverlay() { overlayLoaded = 0; }

extern "C" u16 *VisitorTable_FindByNpc(const u16 *key, VisitorSpawnEntry *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (tbl->id2 == *key) return (u16 *)tbl;
    }
    return 0;
}

extern "C" u16 *VisitorTable_FindByProfile(const u16 *key, VisitorSpawnEntry *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (*key == tbl->id) return (u16 *)tbl;
    }
    return 0;
}

extern "C" BOOL Visitor_ScheduleIfHigher(u16 *p, u32 lvl, u32 b, VecFx32 *pos) {
    if (sVisitorSchedule.priority < lvl) {
        VisitorSchedule_Set(&sVisitorSchedule, p, b, lvl, pos);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Visitor_ScheduleLow(u16 *p, u8 b, VecFx32 *pos) {
    if (Visitor_IsNookJobActive() == 0 && (F3::gCommManager)->isSlotActive(F3::gCommManager->myAid) == 0) {
        return Visitor_ScheduleIfHigher(p, 1, b, pos);
    }
    return 0;
}

BOOL VisitorSpawner::pickVisitor() {
    VisitorCheckEntry *e = sVisitorCheckTable;
    s32 ovl = F3::Scene_GetCurrent();
    s32 i = 0;
    VecFx32 *z = 0;
    for (; i < 11; e++, i++) {
        if (e->lvl <= sVisitorSchedule.priority) break;
        if (e->fn) {
            u16 *r = (this->*(e->fn))();
            if (r) {
                if (Visitor_ScheduleIfHigher(r, e->lvl, ovl, z)) return TRUE;
            }
        }
    }
    return FALSE;
}

u16 *VisitorSpawner::spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n) {
    u16 *result = 0;
    if (VisitorSchedule_IsSet(this, &sVisitorSchedule)) {
        VisitorSpawnEntry *e = (VisitorSpawnEntry *)VisitorTable_FindByProfile(&sVisitorSchedule.profile, tbl, n);
        if (e) {
            if (sVisitorSchedule.sceneId == F3::Scene_GetCurrent()) {
                VecFx32 v;
                u16 t[3];
                t[0] = 0;
                t[1] = 0;
                t[2] = 0;
                if (e->fn) {
                    (this->*(e->fn))(&v, t, &sVisitorSchedule);
                }
                if (e->flag) {
                    OverlayMgr_Acquire(e->ovl);
                    setVisitorOverlay(&e->ovl);
                } else {
                    clearVisitorOverlay();
                }
                if (Actor::spawn((void *)(e->id), (void *)(e->id2), &v, t, this)) {
                    if (F3::Unk_02083c28_IsZero(F3::gFieldSceneKind)) {
                        if ((F3::gCommManager)->isSlotActive(F3::gCommManager->myAid) == 0) {
                            VecFx32 w;
                            w.x = v.x;
                            w.y = v.y;
                            w.z = v.z;
                            F3::Field_ClearObjectFcFdAt(&w);
                        }
                    }
                    result = (u16 *)e;
                }
            }
        }
        F3::VisitorSchedule_Clear(&sVisitorSchedule);
    }
    return result;
}

void NpcSpawnerOverlayView::releaseVisitorOverlay()
{
    if (overlayLoaded != 0) {
        OverlayMgr_Release(overlayId);
        ((VisitorSpawner *)this)->clearVisitorOverlay();
    }
}

extern "C" s32 Visitor_FindActiveEventEntry(const EventVisitorEntry *p, s32 n)
{
    s32 buf[3];
    s32 i;
    buf[0] = 0;
    buf[1] = 0;
    F2::Clock_GetDateTime(buf);
    for (i = 0; i < n; p++, i++) {
        if (Event_IsActive(p->a, buf) != 0)
            return i;
    }
    return -1;
}

extern "C" BOOL Visitor_IsNookJobActive()
{
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0 && ((PlayerData *)(r))->testFlag(1) != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL Visitor_IsTaxiActive()
{
    if (Taxi_IsArriving() != 0 || Taxi_IsLeaving() != 0)
        return TRUE;
    return FALSE;
}

extern "C" u16 *Visitor_CheckResetti()
{
    u16 k;
    if (F2::Scene_GetCurrent() == 0 && F2::_ZN16ResettiVisitFlag5isSetEv(F2::TownSessionState_GetResettiFlag(F2::TownSessionState_Get())) != 0 && (F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
        k = 0xd011;
        return VisitorTable_FindByNpc(&k, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
    return NULL;
}

extern "C" BOOL VisitorPlace_Resetti(s32 a, VecFx32 *p)
{
    u16 k[2];
    BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
    if (c) {
        void *g = F2::gSceneBlockMap;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
                k[0] = 0x5014;
            k[1] = 0x501a;
            if (F2::BlockMap_FindItemAllAttr(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                F2::FieldPos_FromBlockUnitCenter(p, x, y, z, w);
                p->z = p->z + 0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" u16 *Visitor_CheckTomNook()
{
    u16 k;
    void *r4 = F2::PlayerData_GetCurrent();
    if (F2::Scene_GetCurrent() == 0 && Visitor_IsTaxiActive() == 0 && (F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0 && r4 != 0 && ((PlayerData *)(r4))->testFlag(0x23) != 0) {
        if (F2::SceneId_IsHouseRoom(F2::Scene_GetPrevious()) != 0 || F2::Scene_GetPrevious() == 6) {
            k = 0xd019;
            return VisitorTable_FindByNpc(&k, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
    }
    return NULL;
}

extern "C" BOOL VisitorPlace_TomNook(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = F2::gSceneBlockMap;
    s32 x = 0, y = 0, z = 0, w = 0;
    if (g != 0) {
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (F2::BlockMap_FindItemAllAttr(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            q->a = 0;
            q->b = 0x4000;
            q->c = 0;
            F2::FieldPos_FromBlockUnit(p, x, y, z, w);
            p->x = p->x - 0x8000;
            p->z = p->z + 0x6000;
            p->y = 0;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL Visitor_IsTortimerDue()
{
    if ((F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
        if (F2::TownSessionState_TestFlag(F2::TownSessionState_Get(), 8) != 0 && Visitor_IsTaxiActive() == 0 && Visitor_IsNookJobActive() == 0)
            return TRUE;
    }
    return FALSE;
}

extern "C" u16 *Visitor_FindTortimer(s32 flag)
{
    if (Visitor_IsTortimerDue() != 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail;
        }
        return VisitorTable_FindByProfile(sTortimerVisitorProfile, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
  fail:
    return NULL;
}

extern "C" u16 *Visitor_CheckTortimer(s32 a, s32 b, s32 c)
{
    return Visitor_FindTortimer(1);
}

extern "C" BOOL Visitor_IsNookJobErrandActive()
{
    PlayerErrandSlot *r4;
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0)
        r4 = PlayerErrands_GetSlot((PlayerErrands *)((PlayerData *)(r))->getErrands(), 0);
    else
        r4 = 0;
    if (r4 != 0) {
        if (F2::_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(r4)) != 0) {
            if (F2::_ZN12ErrandRecord11getSubGroupEv(PlayerErrandSlot_GetRecord(r4)) == 1) {
                if (Visitor_IsTaxiActive() == 0)
                    return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" u16 *Visitor_FindEventHost(s32 flag)
{
    s32 pass; s32 idx; s32 ok; s32 r6;
    u16 k1, k2;
    if ((F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
        ok = TRUE;
        if (flag != 0) {
            pass = FALSE;
            if ((F2::gFieldSceneKind == 0 ? ok : pass) != 0) {
                if (F2::Scene_GetCurrent() != 0x2c)
                    pass = TRUE;
            }
            if (pass == 0)
                ok = FALSE;
        }
        if (Visitor_IsNookJobErrandActive() != 0) {
            if (ok == 0)
                goto fail;
            return VisitorTable_FindByProfile(sEventTortimerProfile, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        idx = -1;
        if (Visitor_IsTaxiActive() == 0)
            idx = Visitor_FindActiveEventEntry(F2::sEventHostTable, 8);
        if (idx != -1) {
            r6 = F2::sEventHostCheckValues[idx];
            if (r6 != EventAnnounce_GetCurrentEvent() && r6 != 0x13)
                idx = -1;
        }
        if (idx != -1) {
            if (ok == 0)
                goto fail;
            return VisitorTable_FindByProfile(&F2::sEventHostTable[idx].b, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        if (Visitor_IsTortimerDue() == 0 && F2::Scene_GetCurrent() == 9) {
            k1 = 0xd025;
            return VisitorTable_FindByNpc(&k1, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
    } else if (F2::Scene_GetCurrent() == 9) {
        k2 = 0xd025;
        return VisitorTable_FindByNpc(&k2, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
  fail:
    return NULL;
}

extern "C" u16 *Visitor_CheckEventHost(s32 a, s32 b, s32 c)
{
    return Visitor_FindEventHost(1);
}

extern "C" BOOL VisitorPlace_NearTownHall(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    void *g = F2::gSceneBlockMap;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        u16 k;
        s32 bx, bz;
        k = 0x5000;
        if (F2::BlockMap_FindItemAllAttr(g, &x, &y, &z, &w, &k, &k, 0x200, 0) != 0) {
            bx = 0;
            bz = 0;
            F2::FieldUnit_FromBlockUnit(&bx, &bz, x, y, z, w);
            bx -= 2;
            bz += 3;
            F2::FieldPos_FromUnitCenter(p, bx, bz);
            q->b = Random_GlobalBelow(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL VisitorPlace_NearPlayerHouse(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = F2::gSceneBlockMap;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        s32 bx, bz;
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (F2::BlockMap_FindItemAllAttr(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            bx = 0;
            bz = 0;
            F2::FieldUnit_FromBlockUnit(&bx, &bz, x, y, z, w);
            bx += 2;
            bz += 2;
            F2::FieldPos_FromUnitCenter(p, bx, bz);
            q->b = Random_GlobalBelow(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL VisitorPlace_EventHost(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    return VisitorPlace_NearTownHall(a, p, q);
}

extern "C" BOOL VisitorPlace_Tortimer(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    F2::PlayerData_GetCurrent();
    if (Visitor_IsNookJobActive() != 0)
        return VisitorPlace_NearTownHall(a, p, q);
    return VisitorPlace_NearPlayerHouse(a, p, q);
}

extern "C" BOOL VisitorPlace_Origin(s32 a, VecFx32 *p)
{
    p->x = 0;
    p->y = 0;
    p->z = 0;
    return TRUE;
}

extern "C" u16 *Visitor_FindLyle(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord412isDateActiveEv(&F2::data_021ed315);
    if ((F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail2;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail2;
        }
        {
            if (r4 == 0 && Visitor_IsNookJobActive() == 0 && Visitor_IsTaxiActive() == 0 && Event_IsActive(0x3c, 0) != 0) {
                k = 0xd00d;
                return VisitorTable_FindByNpc(&k, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
  fail2:
    return NULL;
}

extern "C" u16 *Visitor_CheckLyle(s32 a, s32 b, s32 c)
{
    return Visitor_FindLyle(1);
}

extern "C" BOOL VisitorPlace_Lyle(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    u16 k[2];
    BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
    if (c) {
        void *g = F2::gSceneBlockMap;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
            k[0] = 0x5014;
            k[1] = 0x501a;
            if (F2::BlockMap_FindItemAllAttr(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                F2::FieldPos_FromBlockUnitCenter(p, x, y, z, w);
                p->x = p->x + 0x4000;
                p->z = p->z + 0x4000;
                q->b = -0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" u16 *Visitor_FindJoan(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord412isDateActiveEv(&F2::data_021ed315);
    if ((F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail1;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail1;
        }
        {
            if (r4 == 0 && Visitor_IsNookJobActive() == 0 && Visitor_IsTaxiActive() == 0 && Event_IsActive(0x3b, 0) != 0) {
                k = 0xd002;
                return VisitorTable_FindByNpc(&k, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
  fail1:
    return NULL;
}

extern "C" u16 *Visitor_CheckJoan(s32 a, s32 b, s32 c)
{
    return Visitor_FindJoan(1);
}

extern "C" u16 *Visitor_FindKatie(s32 flag)
{
    u16 k;
    if (Visitor_IsNookJobActive() == 0 && Visitor_IsTaxiActive() == 0) {
        if (LostChild_IsKatieDue() != 0) {
            if (flag == 0)
                goto a8;
            {
                BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
                if (c) {
                    if (F2::Scene_GetCurrent() != 0x2c)
                        goto a8;
                }
            }
            goto c2;
        a8:
            if ((F2::gCommManager)->isSlotActive(F2::gCommManager->myAid) == 0) {
                if (Event_IsActive(0x3d, 0) == 0)
                    goto fe;
            }
        }
    c2:
        if (F2::_ZN15KatieVisitState11isFollowingEv(F2::TownSessionState_GetKatieState(F2::TownSessionState_Get())) != 0) {
            if (F2::Scene_GetCurrent() == 0xb) {
                if ((F2::gCommManager)->isOnline() == 0)
                    goto fe;
            }
        }
        if (F2::_ZN15KatieVisitState11isFollowingEv(F2::TownSessionState_GetKatieState(F2::TownSessionState_Get())) != 0) {
            if (F2::Scene_GetCurrent() == 0xc) {
            fe:
                k = 0xd022;
                return VisitorTable_FindByNpc(&k, sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
    return NULL;
}

extern "C" u16 *Visitor_CheckKatie(s32 a, s32 b, s32 c)
{
    return Visitor_FindKatie(1);
}

extern "C" BOOL VisitorPlace_Katie(s32 a, VecFx32 *p)
{
    BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
    if (c) {
        F2::_ZN15KatieVisitState6getPosEP7VecFx32(F2::TownSessionState_GetKatieState(F2::TownSessionState_Get()), p);
        return TRUE;
    }
    F2::FieldPos_FromUnitCenter(p, 6, 0x11);
    p->x = p->x + 0x1000;
    return TRUE;
}

extern "C" void NpcSpawner_RepickKatiePosOnline() {
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) {
        if (Visitor_IsNookJobActive() == 0) {
            if (LostChild_IsKatieDue() != 0) {
                if (F1::Unk_02083058_IsA()) {
                    F1::_ZN15KatieVisitState12pickKatiePosEv(F1::TownSessionState_GetKatieState(F1::TownSessionState_Get()));
                }
            }
        }
    }
}

extern "C" u16 *Visitor_FindKaitlin(BOOL flag) {
    u16 v;
    if (LostChild_IsKaitlinDue() == 0) goto fail;
    if (Visitor_IsNookJobActive() != 0) goto fail;
    if (Visitor_IsTaxiActive() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    if (Event_IsActive(0x3d, NULL) != 0) goto fail;
    v = 0xd023;
    return VisitorTable_FindByNpc(&v, sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return NULL;
}

extern "C" u16 *Visitor_CheckKaitlin() {
    return Visitor_FindKaitlin(1);
}

extern "C" BOOL VisitorPlace_Kaitlin(void *self, void *b) {
    F1::_ZN15KatieVisitState6getPosEP7VecFx32(F1::TownSessionState_GetKatieState(F1::TownSessionState_Get()), b);
    return TRUE;
}

extern "C" u16 *Visitor_FindBlanca(BOOL flag) {
    u16 v;
    s32 loc[2];
    loc[0] = 0;
    loc[1] = 0;
    F1::Clock_GetDateTime(loc);
    if (Visitor_IsNookJobActive() != 0) goto fail;
    if (Visitor_IsTaxiActive() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    if (Event_IsActive(0x3b, loc) != 0) goto fail;
    if (Event_IsActive(0x3c, loc) != 0) goto fail;
    if (Event_IsActive(0x3d, loc) != 0) goto fail;
    if (Event_IsActive(0x3e, loc) != 0) goto fail;
    if (Event_IsActive(0x3f, loc) != 0) goto fail;
    if (Event_IsActive(0x40, loc) != 0) goto fail;
    if (Event_IsActive(0x41, loc) != 0) goto fail;
    if (Event_IsActive(0x42, loc) != 0) goto fail;
    if (Event_IsActive(0x43, loc) != 0) goto fail;
    if (Event_IsActive(0x44, loc) != 0) goto fail;
    if (((BlancaFaceRecord *)(&F1::gSaveBlancaFace))->isBlancaDue() == 0) goto fail;
    v = 0xd020;
    return VisitorTable_FindByNpc(&v, sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return NULL;
}

extern "C" u16 *Visitor_CheckBlanca() {
    return Visitor_FindBlanca(1);
}

extern "C" u16 *Visitor_FindInEventTable(const EventVisitorEntry *tbl, const void *fn, s32 x, BOOL flag) {
    s32 r7 = ((SaveRecord4 *)(&F1::data_021ed315))->isDateActive();
    s32 idx;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (r7 != 0) goto fail;
    if (Visitor_IsNookJobActive() != 0) goto fail;
    if (Visitor_IsTaxiActive() != 0) goto fail;
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    idx = Visitor_FindActiveEventEntry(tbl, x);
    if (idx == -1) goto fail;
    if (fn != NULL) {
        BOOL (*f)() = ((BOOL (*const *)())fn)[idx];
        if (f != NULL) {
            if (f() == 0) goto fail;
        }
    }
    return VisitorTable_FindByProfile(&tbl[idx].b, sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return NULL;
}

extern "C" u16 *Visitor_CheckDateVisitors() {
    return Visitor_FindInEventTable(sDateVisitorTable, sDateVisitorChecks, 4, 1);
}

extern "C" u16 *Visitor_CheckPete() {
    return Visitor_FindInEventTable(sPeteVisitTable, NULL, 1, 1);
}

extern "C" BOOL Visitor_CanPascalVisit() {
    s32 p = F1::PlayerData_GetCurrent();
    if (p) {
        if (F1::_ZN20PlayerDailyTalkFlags4testEj(((PlayerData *)((void *)p))->getDailyTalkFlags(), 0x18) == 0) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL VisitorPlace_Beach(void *self, void *p1) {
    static Unk_02082e80_Pos list[32];
    TownBlockCell *c;
    Unk_02082e80_Grid *m;
    s32 w;
    s32 count;
    s32 x;
    s32 y;
    s32 bx;
    s32 h;
    s32 x1;
    s32 y1;
    s32 xx;
    s32 yy;
    s32 by;
    u32 *sz;
    if (!F1::Unk_02083058_IsA()) goto fail;
    m = F1::gSceneBlockMap;
    if (m == NULL) return FALSE;
    sz = &m->size[0];
    w = sz[0];
    h = sz[1];
    count = 0;
    y = 0;
    goto ytest;
yloop:
    x = 0;
    goto xtest;
xloop:
    if ((u32)x < m->size[0] && (u32)y < m->size[1] && m->blocks != NULL) {
        c = &m->blocks[y * m->size[0] + x];
    } else {
        c = NULL;
    }
    if (c != NULL && F1::MapBlock_HasAnyAttr(c, 0x7f000) && F1::MapBlock_HasAllAttr(c, 8)) {
        bx = 0;
        by = 0;
        F1::FieldUnit_FromBlockUnit(&bx, &by, x, y, 0, 0);
        x1 = bx + 0x10;
        yy = by;
        y1 = by + 0x10;
        goto ytest2;
    yloop2:
        xx = bx;
        goto xtest2;
    xloop2:
        if (F1::Ground_IsSandAboveSea(xx, yy)) {
            list[count].x = xx;
            list[count].y = yy;
            count++;
        }
        if (count >= 32) goto xbreak2;
        xx++;
    xtest2:
        if (xx < x1) goto xloop2;
    xbreak2:
        if (count >= 32) goto ybreak2;
        yy++;
    ytest2:
        if (yy < y1) goto yloop2;
    ybreak2:
        if (count >= 32) goto xbreak;
    }
    x++;
xtest:
    if (x < w) goto xloop;
xbreak:
    if (count >= 32) goto ybreak;
    y++;
ytest:
    if (y < h) goto yloop;
ybreak:
    if (count > 0) {
        s32 i = Random_GlobalBelow(count);
        F1::FieldPos_FromUnitCenter(p1, list[i].x, list[i].y);
        return TRUE;
    }
fail:
    return FALSE;
}

extern "C" BOOL VisitorPlace_Pete(void *self, void *b, u16 *out) {
    void *p = F1::TownSessionState_GetPeteFall(F1::TownSessionState_Get());
    F1::_ZN13PeteFallState6getPosEP7VecFx32(p, b);
    out[1] = F1::_ZN13PeteFallState9getFacingEv(p);
    return TRUE;
}

extern "C" BOOL VisitorPlace_AtVisitorPos(void *self, void *b, u16 *out) {
    ((VisitorPos *)(F1::TownSessionState_GetVisitorPos(F1::TownSessionState_Get())))->getPos((VecFx32 *)(b));
    out[1] = Random_GlobalBelow(0xffff);
    return TRUE;
}

extern "C" BOOL VisitorPlace_Gulliver(void *self, void *b, u16 *out, void *d) {
    F1::_ZN17VisitorSpawnFlags16getGulliverSpawnEPvPtP7VecFx32(F1::TownSessionState_GetVisitorFlags(F1::TownSessionState_Get()), b, out + 1, d);
    return TRUE;
}

extern "C" BOOL VisitorPlace_Gracie(void *self, void *g, u16 *out, s32 *a) {
    VecFx32 v;
    s32 z = a[2] + 0x6000;
    s32 x = a[0] - 0x4000;
    v.x = x;
    v.y = 0;
    v.z = z;
    F1::FieldPos_SnapToUnitCenter(g, &v);
    out[1] = 0;
    return TRUE;
}

void *sVisitorCheckPmf_Joan[2] = {(void *)Visitor_CheckJoan, 0};
VisitorSpawnEntry sVisitorSpawnTable[23] = {
    {0x56, 0xd012, 0x50, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Tortimer, 1},
    {0x65, 0xd011, 0x4d, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Resetti, 1},
    {0x7d, 0xd019, 0x0, *(Unk_02083c28_Fn *)sVisitorPlacePmf_TomNook, 0},
    {0x7e, 0xd022, 0x0, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Katie, 0},
    {0x7f, 0xd023, 0x0, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Kaitlin, 0},
    {0x5d, 0xd025, 0x0, *(Unk_02083c28_Fn *)sVisitorPlacePmf_TortimerTti, 0},
    {0x69, 0xd00d, 0x47, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Lyle, 1},
    {0x5f, 0xd01e, 0x57, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Cornimer, 1},
    {0x57, 0xd012, 0x51, *(Unk_02083c28_Fn *)sVisitorPlacePmf_FishingTourney, 1},
    {0x58, 0xd012, 0x52, *(Unk_02083c28_Fn *)sVisitorPlacePmf_BugOff, 1},
    {0x59, 0xd012, 0x53, *(Unk_02083c28_Fn *)sVisitorPlacePmf_FlowerFest, 1},
    {0x5a, 0xd012, 0x54, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Fireworks, 1},
    {0x5b, 0xd012, 0x55, *(Unk_02083c28_Fn *)sVisitorPlacePmf_BrightNights, 1},
    {0x5c, 0xd012, 0x56, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Countdown, 1},
    {0x6f, 0xd002, 0x49, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Joan, 1},
    {0x6a, 0xd003, 0x4e, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Saharah, 1},
    {0x6b, 0xd013, 0x4f, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Wendell, 1},
    {0x68, 0xd016, 0x4c, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Pascal, 1},
    {0x62, 0xd021, 0x58, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Shrunk, 1},
    {0x54, 0xd008, 0x4b, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Pete, 1},
    {0x60, 0xd015, 0x48, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Gulliver, 1},
    {0x6c, 0xd00b, 0x46, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Gracie, 1},
    {0x67, 0xd020, 0x4a, *(Unk_02083c28_Fn *)sVisitorPlacePmf_Blanca, 1},
};
void *sVisitorPlacePmf_Countdown[2] = {(void *)VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Lyle[2] = {(void *)VisitorPlace_Lyle, 0};
void *sVisitorCheckPmf_Tortimer[2] = {(void *)Visitor_CheckTortimer, 0};
void *sVisitorPlacePmf_Resetti[2] = {(void *)VisitorPlace_Resetti, 0};

#ifdef HOST64
static_assert(__builtin_offsetof(NpcSpawnerOverlayView, pad_00) == 0x0, "NpcSpawnerOverlayView.pad_00");
static_assert(__builtin_offsetof(NpcSpawnerOverlayView, overlayLoaded) == 0xb0, "NpcSpawnerOverlayView.overlayLoaded");
static_assert(__builtin_offsetof(NpcSpawnerOverlayView, pad_71) == 0xb1, "NpcSpawnerOverlayView.pad_71");
static_assert(__builtin_offsetof(NpcSpawnerOverlayView, overlayId) == 0xb4, "NpcSpawnerOverlayView.overlayId");
static_assert(sizeof(NpcSpawnerOverlayView) == sizeof(NpcSpawner), "NpcSpawnerOverlayView: regenerate (tools/host_view_layout.py --remove)");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(VisitorSpawner, pad) == 0x0, "VisitorSpawner.pad");
static_assert(__builtin_offsetof(VisitorSpawner, overlayLoaded) == 0xb0, "VisitorSpawner.overlayLoaded");
static_assert(__builtin_offsetof(VisitorSpawner, pad2) == 0xb1, "VisitorSpawner.pad2");
static_assert(__builtin_offsetof(VisitorSpawner, overlayId) == 0xb4, "VisitorSpawner.overlayId");
static_assert(sizeof(VisitorSpawner) == sizeof(NpcSpawner), "VisitorSpawner: regenerate (tools/host_view_layout.py --remove)");
#endif
