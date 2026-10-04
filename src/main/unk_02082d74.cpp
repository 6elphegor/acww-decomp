#include "types.h"
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
    u8 pad[0x70];
    u8 overlayLoaded;
    u8 pad2[3];
    u32 overlayId;

    u16 *spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n);
    BOOL pickVisitor();
    void clearVisitorOverlay();
    void setVisitorOverlay(u32 *p);
};

struct NpcSpawnerOverlayView {
    u8 pad_00[0x70];
    u8 overlayLoaded;
    u8 pad_71[3];
    u32 overlayId;

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


struct PlayerErrandsHeadPad { u8 pad[0x88]; };
struct HouseVisitInviteIdPart { u8 pad[0xc]; };
struct HouseVisitInviteErrandPart { u8 pad[0x20]; };
struct HouseVisitInviteLayoutView : HouseVisitInviteIdPart, HouseVisitInviteErrandPart { u8 pad[0x20]; };
struct PlayerErrandsInviteView : PlayerErrandsHeadPad, HouseVisitInviteLayoutView { u8 pad[8]; };
struct VillagerSpawnLocals {
    u8 b;
    u16 h[4];
};







namespace Dp {
extern "C" {
void VisitorPlace_Gracie();
void VisitorPlace_Gulliver();
void VisitorPlace_AtVisitorPos();
void VisitorPlace_Pete();
void VisitorPlace_Beach();
void Visitor_CanPascalVisit();
void Visitor_CheckPete();
void Visitor_CheckDateVisitors();
void Visitor_CheckBlanca();
void VisitorPlace_Kaitlin();
void Visitor_CheckKaitlin();
void VisitorPlace_Katie();
void Visitor_CheckKatie();
void Visitor_CheckJoan();
void VisitorPlace_Lyle();
void Visitor_CheckLyle();
void VisitorPlace_Origin();
void VisitorPlace_Tortimer();
void VisitorPlace_EventHost();
void Visitor_CheckEventHost();
void Visitor_CheckTortimer();
void VisitorPlace_TomNook();
void Visitor_CheckTomNook();
void VisitorPlace_Resetti();
void Visitor_CheckResetti();
void NpcSpawner_Create();
}
}

extern void *sVisitorPlacePmf_Joan[2];
extern void *sVisitorPlacePmf_Saharah[2];
extern void *sVisitorCheckPmf_EventHost[2];
extern void *sVisitorPlacePmf_Pascal[2];
extern void *sVisitorPlacePmf_Pete[2];
extern void *sVisitorCheckPmf_Tortimer[2];
extern void *sVisitorCheckPmf_Joan[2];
extern void *sVisitorPlacePmf_Gulliver[2];
extern void *sVisitorPlacePmf_Gracie[2];
extern void *sVisitorCheckPmf_DateVisitors[2];
extern void *sVisitorPlacePmf_Shrunk[2];
extern void *sVisitorCheckPmf_Lyle[2];
extern void *sVisitorPlacePmf_Wendell[2];
extern void *sVisitorPlacePmf_Blanca[2];
extern void *sVisitorCheckPmf_TomNook[2];
extern void *sVisitorPlacePmf_Countdown[2];
extern void *sVisitorPlacePmf_BrightNights[2];
extern void *sVisitorPlacePmf_TomNook[2];
extern void *sVisitorPlacePmf_Katie[2];
extern void *sVisitorPlacePmf_TortimerTti[2];
extern void *sVisitorPlacePmf_Lyle[2];
extern void *sVisitorPlacePmf_Cornimer[2];
extern void *sVisitorPlacePmf_Kaitlin[2];
extern void *sVisitorPlacePmf_FishingTourney[2];
extern void *sVisitorPlacePmf_BugOff[2];
extern void *sVisitorPlacePmf_Resetti[2];
extern void *sVisitorPlacePmf_Tortimer[2];
extern void *sVisitorPlacePmf_FlowerFest[2];
extern void *sVisitorPlacePmf_Fireworks[2];
extern void *sVisitorCheckPmf_Pete[2];
extern void *sVisitorCheckPmf_Blanca[2];
extern void *sVisitorCheckPmf_Resetti[2];
extern void *sVisitorCheckPmf_Kaitlin[2];
extern void *sVisitorCheckPmf_Katie[2];
extern const s32 sVisitorSpawnTableCount;
extern const s32 sDateVisitorTableCount;
extern const EventVisitorEntry sPeteVisitTable[1];
extern void *const sDateVisitorChecks[4];
extern const s32 sEventHostCheckValues[8];
extern const EventVisitorEntry sDateVisitorTable[4];
extern const EventVisitorEntry sEventHostTable[8];
extern u32 sTortimerVisitorProfile;
extern u32 sEventTortimerProfile[2];
extern ProcProfile sNpcSpawnerProfile;
extern VisitorSchedule sVisitorSchedule;
extern VisitorCheckEntry sVisitorCheckTable[11];
extern VisitorSpawnEntry sVisitorSpawnTable[23];
extern NpcNetRecord sVillagerNetRecords[8];
extern NpcNetRecord sSpNpcNetRecords[0x26];
extern u8 sVillagerNetRecordPacked;

NpcNetRecord sVillagerNetRecords[8];
void *sVisitorPlacePmf_FlowerFest[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Gulliver[2] = {(void *)Dp::VisitorPlace_Gulliver, 0};
u32 sEventTortimerProfile[2] = {0x56, 0};
void *sVisitorPlacePmf_Blanca[2] = {(void *)Dp::VisitorPlace_AtVisitorPos, 0};
void *sVisitorCheckPmf_Resetti[2] = {(void *)Dp::Visitor_CheckResetti, 0};
const s32 sDateVisitorTableCount = 4;
void *sVisitorPlacePmf_Saharah[2] = {(void *)Dp::VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Pascal[2] = {(void *)Dp::VisitorPlace_Beach, 0};
void *sVisitorPlacePmf_Gracie[2] = {(void *)Dp::VisitorPlace_Gracie, 0};
void *sVisitorCheckPmf_TomNook[2] = {(void *)Dp::Visitor_CheckTomNook, 0};
VisitorSchedule sVisitorSchedule = {Unk_02083c28_VecZ(), 0xfff1, 0x33, 0};
void *sVisitorCheckPmf_Kaitlin[2] = {(void *)Dp::Visitor_CheckKaitlin, 0};
void *sVisitorPlacePmf_Wendell[2] = {(void *)Dp::VisitorPlace_AtVisitorPos, 0};
void *sVisitorCheckPmf_Blanca[2] = {(void *)Dp::Visitor_CheckBlanca, 0};
void *sVisitorCheckPmf_Pete[2] = {(void *)Dp::Visitor_CheckPete, 0};
void *sVisitorPlacePmf_Fireworks[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Shrunk[2] = {(void *)Dp::VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Tortimer[2] = {(void *)Dp::VisitorPlace_Tortimer, 0};
NpcNetRecord sSpNpcNetRecords[0x26];
const EventVisitorEntry sDateVisitorTable[4] = {{0x3e, 0x6a, 0}, {0x41, 0x6b, 0}, {0x42, 0x68, 0}, {0x43, 0x62, 0}};
void *sVisitorPlacePmf_BugOff[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Kaitlin[2] = {(void *)Dp::VisitorPlace_Kaitlin, 0};
ProcProfile sNpcSpawnerProfile = {(void *(*)())Dp::NpcSpawner_Create, 0xd0, 0xcc};
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
u32 sTortimerVisitorProfile = 0x56;
void *sVisitorPlacePmf_Joan[2] = {(void *)Dp::VisitorPlace_AtVisitorPos, 0};
void *sVisitorPlacePmf_Katie[2] = {(void *)Dp::VisitorPlace_Katie, 0};
void *sVisitorPlacePmf_TomNook[2] = {(void *)Dp::VisitorPlace_TomNook, 0};
void *sVisitorPlacePmf_BrightNights[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
const EventVisitorEntry sEventHostTable[8] = {{0x14, 0x57, 0}, {0x15, 0x58, 0}, {0x16, 0x59, 0}, {0x17, 0x5a, 0}, {0x18, 0x5f, 0}, {0x19, 0x5b, 0}, {0x1a, 0x5c, 0}, {0x1b, 0x5c, 0}};
void *sVisitorCheckPmf_EventHost[2] = {(void *)Dp::Visitor_CheckEventHost, 0};
const EventVisitorEntry sPeteVisitTable[1] = {{0x45, 0x54, 0}};
const s32 sVisitorSpawnTableCount = 0x17;
void *sVisitorCheckPmf_DateVisitors[2] = {(void *)Dp::Visitor_CheckDateVisitors, 0};
void *sVisitorCheckPmf_Lyle[2] = {(void *)Dp::Visitor_CheckLyle, 0};
u8 sVillagerNetRecordPacked;
void *sVisitorPlacePmf_FishingTourney[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
const s32 sEventHostCheckValues[8] = {9, 10, 14, 15, 16, 17, 18, 19};
void *sVisitorPlacePmf_Cornimer[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_TortimerTti[2] = {(void *)Dp::VisitorPlace_Origin, 0};
void *sVisitorPlacePmf_Pete[2] = {(void *)Dp::VisitorPlace_Pete, 0};
void *const sDateVisitorChecks[4] = {0, 0, (void *)Dp::Visitor_CanPascalVisit, 0};
void *sVisitorCheckPmf_Katie[2] = {(void *)Dp::Visitor_CheckKatie, 0};

namespace F1 {
extern "C" {
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern Unk_02082e80_Grid *gSceneBlockMap;
extern u8 sPeteVisitTable[], sDateVisitorTable[], sDateVisitorChecks[], sVisitorSpawnTable[];
extern s32 sVisitorSpawnTableCount;
extern u8 data_021ed315, gSaveBlancaFace;
void FieldPos_SnapToUnitCenter(void *g, void *v);
void *TownSessionState_Get();
void *TownSessionState_GetVisitorFlags(void *p);
void *TownSessionState_GetVisitorPos(void *p);
void *TownSessionState_GetPeteFall(void *p);
void *TownSessionState_GetKatieState(void *p);
void _ZN17VisitorSpawnFlags16getGulliverSpawnEPvPtP7VecFx32(void *a, void *b, u16 *c, void *d);
void _ZNK10VisitorPos6getPosEP7VecFx32(void *a, void *b);
void _ZN13PeteFallState6getPosEP7VecFx32(void *a, void *b);
s32 _ZN13PeteFallState9getFacingEv(void *a);
void _ZN15KatieVisitState6getPosEP7VecFx32(void *a, void *b);
s32 _ZN15KatieVisitState12pickKatiePosEv(void *a);
s32 Random_GlobalBelow(s32 a);
s32 PlayerData_GetCurrent();
void *_ZN10PlayerData17getDailyTalkFlagsEv();
s32 _ZN20PlayerDailyTalkFlags4testEj(void *a, s32 b);
s32 _ZN11SaveRecord412isDateActiveEv(void *a);
s32 Scene_GetCurrent();
s32 Visitor_IsNookJobActive();
s32 Visitor_IsTaxiActive();
s32 Visitor_FindActiveEventEntry(void *tbl, s32 x);
s32 VisitorTable_FindByProfile(void *a, void *b, s32 c);
s32 VisitorTable_FindByNpc(void *a, void *b, s32 c);
void Clock_GetDateTime(void *p);
s32 Event_IsActive(s32 a, void *p);
s32 _ZN16BlancaFaceRecord11isBlancaDueEv(void *p);
s32 LostChild_IsKaitlinDue();
s32 LostChild_IsKatieDue();
s32 MapBlock_HasAnyAttr(void *c, s32 v);
s32 MapBlock_HasAllAttr(void *c, s32 v);
s32 Ground_IsSandAboveSea(s32 x, s32 y);
void FieldUnit_FromBlockUnit(s32 *o1, s32 *o2, s32 a, s32 b, s32 c, s32 d);
void FieldPos_FromUnitCenter(void *a, s32 x, s32 y);
BOOL Visitor_FindBlanca(BOOL flag);
BOOL Visitor_FindKaitlin(BOOL flag);
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
extern u8 sVisitorSpawnTable[];
extern u8 sEventTortimerProfile[];
extern u8 sTortimerVisitorProfile[];
extern EventVisitorEntry sEventHostTable[];
extern s32 sEventHostCheckValues[];
s32 Scene_GetCurrent();
s32 Scene_GetPrevious();
s32 EventAnnounce_GetCurrentEvent();
s32 SceneId_IsHouseRoom(s32);
s32 Taxi_IsArriving();
s32 Taxi_IsLeaving();
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *);
void *PlayerErrands_GetSlot(void *, s32);
void *PlayerErrandSlot_GetRecord(void *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord11getSubGroupEv(void *);
s32 _ZN10PlayerData8testFlagEj(void *, s32);
void Clock_GetDateTime(void *);
void *_ZN11SaveRecord412isDateActiveEv(void *);
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
BOOL _ZN11CommManager8isOnlineEv(CommManager *g);
s32 TownSessionState_Get();
s32 TownSessionState_GetKatieState(s32);
s32 TownSessionState_GetResettiFlag(s32);
s32 TownSessionState_TestFlag(s32, s32);
s32 _ZN15KatieVisitState6getPosEP7VecFx32(s32, void *);
s32 _ZN15KatieVisitState11isFollowingEv(s32);
s32 _ZN16ResettiVisitFlag5isSetEv(s32);
s32 LostChild_IsKatieDue();
s32 Event_IsActive(u32, void *);
s32 FieldPos_FromUnitCenter(void *, s32, s32);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnitCenter(void *, s32, s32, s32, s32);
void FieldPos_FromBlockUnit(void *, s32, s32, s32, s32);
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
s32 Random_GlobalBelow(s32);
void OverlayMgr_Release(u32);
void *VisitorTable_FindByNpc(u16 *, void *, s32);
void *VisitorTable_FindByProfile(void *, void *, s32);
BOOL VisitorPlace_Katie(s32 a, VecFx32 *p);
BOOL Visitor_CheckKatie(s32 a, s32 b, s32 c);
BOOL Visitor_FindKatie(s32 flag);
BOOL Visitor_CheckJoan(s32 a, s32 b, s32 c);
BOOL Visitor_FindJoan(s32 flag);
BOOL VisitorPlace_Lyle(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL Visitor_CheckLyle(s32 a, s32 b, s32 c);
BOOL Visitor_FindLyle(s32 flag);
BOOL VisitorPlace_Origin(s32 a, VecFx32 *p);
BOOL VisitorPlace_Tortimer(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL VisitorPlace_EventHost(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL VisitorPlace_NearPlayerHouse(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL VisitorPlace_NearTownHall(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL Visitor_CheckEventHost(s32 a, s32 b, s32 c);
BOOL Visitor_FindEventHost(s32 flag);
BOOL Visitor_IsNookJobErrandActive();
BOOL Visitor_CheckTortimer(s32 a, s32 b, s32 c);
BOOL Visitor_FindTortimer(s32 flag);
BOOL Visitor_IsTortimerDue();
BOOL VisitorPlace_TomNook(s32 a, VecFx32 *p, Unk_02083314_K *q);
BOOL Visitor_CheckTomNook();
BOOL VisitorPlace_Resetti(s32 a, VecFx32 *p);
BOOL Visitor_CheckResetti();
BOOL Visitor_IsTaxiActive();
BOOL Visitor_IsNookJobActive();
s32 Visitor_FindActiveEventEntry(EventVisitorEntry *p, s32 n);
}

}

namespace F3 {
extern "C" {
extern VisitorSchedule sVisitorSchedule;
extern u32 sEventTortimerProfile[2];
extern VisitorCheckEntry sVisitorCheckTable[11];
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern VecFx32 gVec3Zero;
extern NpcNetRecord sSpNpcNetRecords[0x26];
extern NpcNetRecord sVillagerNetRecords[8];
extern u8 sVillagerNetRecordPacked;
extern u8 gSaveVillagers[];
extern u16 *gSceneBlockMap;
s32 Scene_GetCurrent();
s32 Scene_InTown();
s32 _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
void OverlayMgr_Acquire(u32 ovl);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32 a, u32 b, void *c, void *d, void *e);
s32 Field_ClearObjectFcFdAt(VecFx32 *v);
s32 Visitor_IsNookJobActive(u16 *p);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 y);
void MI_CpuFill8(void *dst, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 CommRecord_UnpackSource(u8 *p, u8 *dst, s32 z);
s32 CommSyncVar_SetVar(u32 a, u8 *p, s32 b, s32 c);
s32 CommSyncVar_GetVarSize(u32 id);
void CommRecord_PackSource(u8 *p, u32 a, s32 b);
void NetBuf_PackPair20(u8 *p, s32 a, s32 b);
u8 *_ZN11CommManager10getSyncVarEj(CommManager *g, s32 i);
void *VillagerStates_GetEntry(s32 i);
s32 VillagerState_SetMood(void *p, s32 v);
s32 VillagerState_SetMoodTimer(void *p, s32 v);
s32 VillagerTrend_TickIdle();
s32 SaveVillagers_UpdatePlans(void *p);
void *SaveVillagers_Get(void *p, s32 i);
s32 _ZN12VillagerData13getVillagerIdEv();
s32 _ZN10VillagerId7isValidEv();
void *Villager_GetState(void *p);
s32 NpcRegistry_FindVillagerByHandle(u16 *p);
s32 VillagerState_GetMood(void *p);
s32 VillagerState_TickMoodTimer(void *p);
s32 VillagerState_GetMoodTimer(void *p);
void *VillagerState_GetTalkRepeat(void *p);
s32 TalkRepeat_Tick(void *p, s32 v);
u16 *VisitorTable_FindByProfile(u16 *key, VisitorSpawnEntry *tbl, s32 n);
BOOL VisitorSchedule_IsSet(void *p, VisitorSchedule *g);
void VisitorSchedule_Clear(VisitorSchedule *g);
void VisitorSchedule_Set(VisitorSchedule *out, u16 *idp, u32 b, u32 c, VecFx32 *pos);
BOOL Visitor_ScheduleIfHigher(u16 *p, u32 lvl, u32 b, VecFx32 *pos);
BOOL RoomFreeUnitMap_Test(u16 *arr, s32 x, s32 y);
BOOL RoomFreeUnitMap_Clear(u16 *arr, s32 x, s32 y);
BOOL RoomFreeUnitMap_Set(u16 *arr, s32 x, s32 y);
u8 *NpcNetRecord_GetVar(u16 *p);
BOOL NpcNetRecord_GetSlots(s32 *a, s32 *b, u16 *p);
void NpcNetRecord_SetSlotsAndSync(u32 a, u32 b, u32 c, u16 *p);
u8 *NpcNetRecord_GetVillagerVar(u16 *p);
u8 *NpcNetRecord_GetSpNpcVar(u16 *p);
BOOL NpcNetRecord_SetVillagerSlots(u16 *p, u32 b, u32 c);
BOOL NpcNetRecord_SetSpNpcSlots(u16 *p, u32 b, u32 c);
BOOL NpcNetRecord_SetVillagerState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e);
BOOL NpcNetRecord_SetSpNpcState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e);
void NpcNetRecord_PackVillager(void *src, s32 id);
BOOL NpcNetRecord_SetSlots(u16 *p, u32 b, u32 c);
}
static inline BOOL Unk_02083c28_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F4 {
extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveVillagers[];
extern u8 sVisitorSchedule[];
extern u8 sVillagerNetRecords[];
extern u8 gFieldSceneKind;
extern u32 sVisitorSpawnTableCount;
extern u8 sVisitorSpawnTable[];
extern u8 data_021ed315[];
extern u8 sDateVisitorTable[];
extern u8 sDateVisitorChecks[];
extern u32 sDateVisitorTableCount;
void _ZN21NpcSpawnerOverlayView21releaseVisitorOverlayEv();
void VisitorSchedule_Clear(void *p);
void VillagerStates_ClearFleaVillager();
s32 Scene_InTown();
void SaveVillagers_UpdatePlansNow(void *p);
s32 Scene_GetRequestedScene();
s32 SceneId_IsVillagerHouse();
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
s32 Visitor_IsTaxiActive();
s32 _ZN11CommManager12isSlotActiveEi(void *g, s32 i);
s32 PlayerData_GetCurrent();
s32 _ZN10PlayerData11getPlayerIdEv(s32 p);
void SaveVillagers_PickFleaVillager(void *p, s32 v);
s32 Scene_InVillagerHouse();
s32 Scene_InHouseRoom();
s32 VillagerEvent_GetTodayIndex();
s32 VillagerStates_GetFleaMarketBuyer();
s32 HouseVisitor_ClearPresent();
s32 Scene_GetHouseRoom();
void _ZN14VisitorSpawner11pickVisitorEv(void *p);
void *_ZN14VisitorSpawner21spawnScheduledVisitorEP17VisitorSpawnEntryi(void *a, void *b, u32 c);
void NpcSpawner_RepickKatiePosOnline(void *p);
s32 _ZN10PlayerData10getErrandsEv(s32 p);
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord7getKindEv(void *p);
s32 DateTime_DiffMinutes(void *p, void *q);
s32 _ZN12ErrandRecord7getStepEv(void *p);
s32 SaveVillagers_FindIndex(void *p, void *q);
s32 SaveVillagers_IsValidIndex(s32 v);
void NetBuf_UnpackPair20(void *a, void *b, void *c);
void MI_CpuCopy8(void *src, void *dst, u32 n);
s32 SaveVillagers_Find(void *p, void *q);
s32 Villager_GetState();
s32 VillagerState_ResetRole();
void SaveVillagers_PickFleaMarketBuyerNow(void *p);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, void *d, void *e);
s32 Scene_GetVillagerHouse();
void *SaveVillagers_Get(void *p, s32 i);
void *NpcNetRecord_GetVillagerVar(void *p);
s32 NetArea_IsLocalOwner();
s32 Random_GlobalBelow(s32 n);
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
void _ZN10GroundInfo9initAtPosEP7VecFx32ii(void *buf, void *v, s32 a, s32 b);
s32 _ZN14GroundInfoBase9getHeightEi(void *buf, s32 f);
void GroundInfo_Destruct(void *buf);
s32 _ZN11SaveRecord412isDateActiveEv(void *p);
void *Visitor_FindTortimer(s32 v);
void *Visitor_FindEventHost(s32 v);
u16 *Visitor_FindLyle(s32 v);
u16 *Visitor_FindJoan(s32 v);
u16 *Visitor_FindKatie(s32 v);
u16 *Visitor_FindKaitlin(s32 v);
u16 *Visitor_FindInEventTable(void *a, void *b, u32 c, s32 d);
u16 *Visitor_FindBlanca(s32 v);
BOOL Event_IsActive(s32 a, s32 *p);
s32 Event_GetState(s32 a, void *b, s32 c);
s32 RoomFreeUnitMap_Build(void *p);
void RoomFreeUnitMap_Clear(void *p, s32 x, s32 y);
s32 RoomFreeUnitMap_Test(void *p, s32 x, s32 y);
void NpcSpawner_SpawnVillagers(void *a);
void NpcSpawner_SpawnHouseOwner(u8 *a);
void NpcSpawner_SpawnPlayerHouseVisitor(void *a);
s32 NpcSpawner_PickFreeRoomPos(u8 *a, void *v);
void NpcSpawn_FixVillagerPos(void *a, void *v);
}
static inline BOOL Unk_020845a8_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F5 {
extern "C" {
extern u8 sVillagerNetRecordPacked;
extern u8 sVillagerNetRecords[];
extern u8 sSpNpcNetRecords[];
extern u8 sVisitorSchedule[];
extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
void MI_CpuFill8(void *p, u32 v, u32 n);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
void FieldPos_FromUnitCenter(VecFx32 *out, s32 x, s32 z);
void NetBuf_PackPair20(void *, s32, s32);
void CommRecord_PackSource(void *, s32, s32);
s32 VisitorSchedule_Clear(void *);
BOOL _ZN11CommManager12isSlotActiveEi(void *, u32);
s32 Scene_GetCurrent();
s32 Scene_GetMaxSpNpcs();
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
                    cell = g->blocks + (y * g->width + x) * 0x28;
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
    F5::Scene_GetCurrent();
    return F5::Scene_GetMaxSpNpcs();
}

VisitorSchedule::~VisitorSchedule() {}

extern "C" NpcSpawner *NpcSpawner_Create()
{
    return new NpcSpawner();
}

extern "C" void NpcSpawn_ResetAll()
{
    F5::sVillagerNetRecordPacked = 0;
    F5::MI_CpuFill8(F5::sVillagerNetRecords, 0, 0xf0);
    F5::MI_CpuFill8(F5::sSpNpcNetRecords, 0, 0x474);
    F5::VisitorSchedule_Clear(F5::sVisitorSchedule);
}

extern "C" void NpcNetRecords_InitVillagers()
{
    u8 *p = F5::sVillagerNetRecords;
    s32 i;
    s32 z = 0;
    F5::MI_CpuFill8(p, 0, 0xf0);
    for (i = 0; i < 8; p += 0x1e, i++) {
        void *o = F5::SaveVillagers_Get(F5::gSaveVillagers, i);
        if (o != NULL && F5::_ZN10VillagerId7isValidEv(F5::_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            VecFx32 v;
            v.x = 0;
            v.y = 0;
            v.z = 0;
            u8 *q = F5::_ZN20VillagerDataItemView11getHousePosEv(o);
            F5::FieldPos_FromUnitCenter(&v, q[0] + 1, q[1] + 2);
            F5::NetBuf_PackPair20(p + 4, v.x, v.z);
            F5::CommRecord_PackSource(p + 3, z, z);
            p[0] = 1;
        }
    }
}

extern "C" s32 NpcSpawner_PickFreeRoomPos(u8 *a, void *out)
{
    s32 r6;
    if (F4::RoomFreeUnitMap_Build(a + 0x50)) {
        s32 cnt = 0;
        s32 x, y;
        for (x = 0; x < 16; x++) {
            F4::RoomFreeUnitMap_Clear(a + 0x50, x, 14);
            F4::RoomFreeUnitMap_Clear(a + 0x50, x, 15);
        }
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (F4::RoomFreeUnitMap_Test(a + 0x50, x, y)) cnt++;
            }
        }
        if (cnt > 0) {
            s32 y, x;
            r6 = F4::Random_GlobalBelow(cnt);
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F4::RoomFreeUnitMap_Test(a + 0x50, x, y)) {
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
    void *q = F4::Visitor_FindTortimer(0);
    if (q == 0) {
        q = F4::Visitor_FindEventHost(0);
    }
    if (q) {
        *out = 0xfff1;
        return;
    }
    p = F4::Visitor_FindLyle(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::Visitor_FindJoan(0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && F4::Event_IsActive(0x3d, 0)) {
        *out = 0xd00e;
        return;
    }
    p = F4::Visitor_FindKatie(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::Visitor_FindKaitlin(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::Visitor_FindInEventTable(F4::sDateVisitorTable, F4::sDateVisitorChecks, F4::sDateVisitorTableCount, 0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && F4::Event_IsActive(0x3f, 0)) {
        *out = 0xd00a;
        return;
    }
    if (r4 == 0 && F4::Event_IsActive(0x40, 0)) {
        *out = 0xd00b;
        return;
    }
    p = F4::Visitor_FindBlanca(0);
    if (p) {
        *out = p[1];
        return;
    }
    *out = 0xfff1;
}

extern "C" void NpcSpawn_FixVillagerPos(void *a, void *vec)
{
    u32 buf[17];
    void *u;
    F4::_ZN10GroundInfo9initAtPosEP7VecFx32ii(buf, u, 0, 0);
    if (F4::Villager_GetWhereabouts(a) == 0) {
        if (F4::_ZN14GroundInfoBase9getHeightEi(buf, 0)) {
            u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(a);
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
        void *r7 = F4::SaveVillagers_Get(F4::gSaveVillagers, i);
        if (r7 == 0) goto next0;
        if (F4::_ZN10VillagerId7isValidEv(F4::_ZN12VillagerData13getVillagerIdEv(r7)) == 0) goto next0;
        if (F4::SaveVillagers_IsOutdoors(F4::gSaveVillagers, F4::_ZN12VillagerData13getVillagerIdEv(r7)) == 0) goto next0;
        w.b = 0;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        w.h[1] = 0;
        w.h[2] = 0;
        w.h[3] = 0;
        w.h[0] = (i & 0xfff) | 0xe000;
        u8 *e = (u8 *)F4::NpcNetRecord_GetVillagerVar(&w.h[0]);
        if (e != 0 && e[0] != 0) {
            F4::CommRecord_UnpackSource(e + 3, &w, 0);
            if (w.b == F4::Scene_GetCurrent()) {
                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                F4::MI_CpuCopy8(e + 9, &w.h[2], 2);
            } else {
                u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(r7);
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            }
        } else if (F4::NetArea_IsLocalOwner() && ((u8 *)(F4::sVillagerNetRecords + i * 30))[0] != 0) {
            u8 *t = F4::sVillagerNetRecords + i * 30;
            F4::CommRecord_UnpackSource(t + 3, &w, 0);
            s32 wb = w.b;
            if (wb != F4::Scene_GetCurrent() && F4::SceneId_IsTown(wb) == 0 && F4::SceneId_IsTownUnk31(w.b) == 0 && w.b != 0x2c) {
                u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(r7);
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            } else {
                F4::NetBuf_UnpackPair20(t + 4, &v.x, &v.z);
                F4::NpcSpawn_FixVillagerPos(r7, &v);
            }
        } else {
            u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(r7);
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

extern "C" void NpcSpawner_SpawnHouseOwner(u8 *a)
{
    s32 r7 = F4::Scene_GetVillagerHouse();
    void *obj = F4::SaveVillagers_Get(F4::gSaveVillagers, r7);
    if (obj == 0) {
        return;
    }
    if (F4::_ZN10VillagerId7isValidEv(F4::_ZN12VillagerData13getVillagerIdEv(obj)) == 0) {
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
    u8 *e = (u8 *)F4::NpcNetRecord_GetVillagerVar(h);
    s32 r4;
    if (F4::NetArea_IsLocalOwner()) {
        r4 = F4::NpcSpawner_PickFreeRoomPos(a, &v);
        h[3] = F4::Random_GlobalBelow(4) << 14;
    } else if (e != 0 && e[0] != 0) {
        F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
        F4::MI_CpuCopy8(e + 9, &h[3], 2);
        r4 = 1;
    } else {
        r4 = F4::NpcSpawner_PickFreeRoomPos(a, &v);
        h[3] = F4::Random_GlobalBelow(4) << 14;
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
                F4::NpcSpawner_PickFreeRoomPos(a, &v);
                h[3] = F4::Random_GlobalBelow(4) << 14;
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
                            u8 *e = F4::sVillagerNetRecords + r5 * 30;
                            if (e[0] != 0) {
                                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                                F4::MI_CpuCopy8(e + 9, &h[2], 2);
                            }
                        }
                    } else {
                        F4::HouseVisitor_ClearPresent();
                        if (F4::SaveVillagers_Find(F4::gSaveVillagers, r7)) {
                            F4::Villager_GetState();
                            F4::VillagerState_ResetRole();
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
                u8 *e = F4::sVillagerNetRecords + r4 * 30;
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
        if (F4::Visitor_IsTaxiActive() == 0) {
            if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->myAid) == 0) {
                s32 r1;
                if (F4::PlayerData_GetCurrent()) {
                    r1 = F4::_ZN10PlayerData11getPlayerIdEv(F4::PlayerData_GetCurrent());
                } else {
                    r1 = 0;
                }
                F4::SaveVillagers_PickFleaVillager(g, r1);
            }
            F4::NpcSpawner_SpawnVillagers(a);
        }
    } else if (F4::Scene_InVillagerHouse()) {
        F4::NpcSpawner_SpawnHouseOwner(a);
    } else if (F4::Scene_InHouseRoom()) {
        if (g != 0) {
            if (F4::VillagerEvent_GetTodayIndex() != 0xa) {
                s32 m = -1;
                if (F4::VillagerStates_GetFleaMarketBuyer() != m) {
                    F4::VillagerStates_SetFleaMarketBuyer(m);
                    F4::HouseVisitor_ClearPresent();
                }
            }
        }
        if (F4::Scene_GetHouseRoom() == 0) {
            F4::NpcSpawner_SpawnPlayerHouseVisitor(a);
        }
    }
    F4::_ZN14VisitorSpawner11pickVisitorEv(a);
    u16 *r4 = (u16 *)F4::_ZN14VisitorSpawner21spawnScheduledVisitorEP17VisitorSpawnEntryi(a, F4::sVisitorSpawnTable, saved);
    if (r4) {
        F4::_ZN17VisitorSpawnFlags17setVisitorSpawnedEv(F4::TownSessionState_GetVisitorFlags(F4::TownSessionState_Get()));
        if (r4[1] != 0xd008 || F4::_ZN13PeteFallState10hasFallPosEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get())) != 0) {
            F4::_ZN13PeteFallState16setVisitorActiveEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get()));
        }
    }
    F4::NpcSpawner_RepickKatiePosOnline(a);
    if (F4::Scene_InTown()) {
        F4::SaveVillagers_UpdatePlansNow(g);
    }
    return TRUE;
}

BOOL NpcSpawner::onDelete()
{
    F4::_ZN21NpcSpawnerOverlayView21releaseVisitorOverlayEv();
    F4::VisitorSchedule_Clear(F4::sVisitorSchedule);
    F4::VillagerStates_ClearFleaVillager();
    if (F4::Scene_InTown()) {
        void *g = F4::gSaveVillagers;
        F4::SaveVillagers_UpdatePlansNow(g);
        s32 v = F4::Scene_GetRequestedScene();
        if (F4::SceneId_IsVillagerHouse()) {
            void *r = F4::SaveVillagers_GetByHouseRoom(g, (s8)v);
            if (r) {
                if (F4::_ZN10VillagerId7isValidEv(F4::_ZN12VillagerData13getVillagerIdEv(r))) {
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
        if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->myAid) == 0) {
            if (g) F3::SaveVillagers_UpdatePlans(g);
        }
    }
    if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->myAid) == 0) {
        if (g) {
            id = 0xfff1;
            for (i = 0; i < 8; i++) {
                a = F3::SaveVillagers_Get(g, i);
                if (a) {
                    F3::_ZN12VillagerData13getVillagerIdEv();
                    if (F3::_ZN10VillagerId7isValidEv()) {
                        b = F3::Villager_GetState(a);
                        if (b) {
                            id = (i & 0xfff) | 0xe000;
                            if (F3::NpcRegistry_FindVillagerByHandle(&id) == 0) {
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
        NpcNetRecord *r = &F3::sVillagerNetRecords[i];
        r->isSet = 1;
        F3::CommRecord_PackSource((u8 *)r + 3, b, 0);
        F3::NetBuf_PackPair20((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL NpcNetRecord_SetVillagerSlots(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        NpcNetRecord *r = &F3::sVillagerNetRecords[i];
        r->isSet = 1;
        r->slotA = b;
        r->slotB = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void NpcNetRecord_InitVillagerVar(void *dst, s32 id) {
    void *o;
    F3::NpcNetRecord_PackVillager(dst, id);
    o = F3::VillagerStates_GetEntry(id - 0xc);
    if (o) {
        F3::VillagerState_SetMood(o, 0);
        F3::VillagerState_SetMoodTimer(o, 0);
    }
}

extern "C" void NpcNetRecord_PackVillager(void *dst, s32 id) {
    u32 i = id - 0xc;
    if (i < 8) {
        NpcNetRecord *r = &F3::sVillagerNetRecords[i];
        r->isSet = 1;
        F3::MI_CpuCopy8(r, dst, F3::CommSyncVar_GetVarSize(id));
        F3::sVillagerNetRecordPacked = 1;
    }
}

extern "C" u8 *NpcNetRecord_GetVillagerVar(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 8) return F3::_ZN11CommManager10getSyncVarEj(F3::gCommManager, i + 0xc);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetSpNpcState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        NpcNetRecord *r = &F3::sSpNpcNetRecords[i];
        r->isSet = 1;
        F3::CommRecord_PackSource((u8 *)r + 3, b, 0);
        F3::NetBuf_PackPair20((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL NpcNetRecord_SetSpNpcSlots(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        NpcNetRecord *r = &F3::sSpNpcNetRecords[i];
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
        NpcNetRecord *r = &F3::sSpNpcNetRecords[i];
        r->isSet = 1;
        F3::MI_CpuCopy8(r, dst, F3::CommSyncVar_GetVarSize(id));
    }
}

extern "C" u8 *NpcNetRecord_GetSpNpcVar(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 0x26) return F3::_ZN11CommManager10getSyncVarEj(F3::gCommManager, i + 0x20);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetState(u16 *p, u32 b, VecFx32 *v, u16 c, u8 *d, u8 *e) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::NpcNetRecord_SetVillagerState(p, b, v, c, d, e);
    if (k == 0xd) return F3::NpcNetRecord_SetSpNpcState(p, b, v, c, d, e);
    return 0;
}

extern "C" BOOL NpcNetRecord_SetSlots(u16 *p, u32 b, u32 c) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::NpcNetRecord_SetVillagerSlots(p, b, c);
    if (k == 0xd) return F3::NpcNetRecord_SetSpNpcSlots(p, b, c);
    return 0;
}

extern "C" u8 *NpcNetRecord_GetVar(u16 *p) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::NpcNetRecord_GetVillagerVar(p);
    if (k == 0xd) return F3::NpcNetRecord_GetSpNpcVar(p);
    return 0;
}

extern "C" void NpcNetRecord_SetSlotsAndSync(u32 a, u32 b, u32 c, u16 *p) {
    F3::NpcNetRecord_SetSlots(p, b, c);
    if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->myAid)) {
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
    u8 *rec = F3::NpcNetRecord_GetVar(p);
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
        rec = F3::NpcNetRecord_GetVar(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::NpcNetRecord_GetSlots(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::NpcNetRecord_SetSlotsAndSync(1, 4, 4, &l.id);
                    } else if (s8 == d->myAid && s8 != s4) {
                        F3::NpcNetRecord_SetSlotsAndSync(1, d->myAid, 4, &l.id);
                    }
                }
            }
        }
    }
    for (i = 0; i < 0x26; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xd000;
        rec = F3::NpcNetRecord_GetVar(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::NpcNetRecord_GetSlots(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::NpcNetRecord_SetSlotsAndSync(1, 4, 4, &l.id);
                    } else if (s8 == d->myAid && s8 != s4) {
                        F3::NpcNetRecord_SetSlotsAndSync(1, d->myAid, 4, &l.id);
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
                        F3::RoomFreeUnitMap_Set(out, x, y);
                    }
                    p++;
                }
            }
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F3::RoomFreeUnitMap_Test(out, x, y) && !F3::RoomFreeUnitMap_Test(out, x + 1, y) && !F3::RoomFreeUnitMap_Test(out, x - 1, y)
                        && !F3::RoomFreeUnitMap_Test(out, x, y + 1) && !F3::RoomFreeUnitMap_Test(out, x, y - 1)) {
                        F3::RoomFreeUnitMap_Clear(out, x, y);
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
    F3::VisitorSchedule_Set(g, (u16 *)&F3::sEventTortimerProfile[1], 0x33, 0, 0);
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

extern "C" u16 *VisitorTable_FindByNpc(u16 *key, VisitorSpawnEntry *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (tbl->id2 == *key) return (u16 *)tbl;
    }
    return 0;
}

extern "C" u16 *VisitorTable_FindByProfile(u16 *key, VisitorSpawnEntry *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (*key == tbl->id) return (u16 *)tbl;
    }
    return 0;
}

extern "C" BOOL Visitor_ScheduleIfHigher(u16 *p, u32 lvl, u32 b, VecFx32 *pos) {
    if (F3::sVisitorSchedule.priority < lvl) {
        F3::VisitorSchedule_Set(&F3::sVisitorSchedule, p, b, lvl, pos);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Visitor_ScheduleLow(u16 *p, u8 b, VecFx32 *pos) {
    if (F3::Visitor_IsNookJobActive(p) == 0 && F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->myAid) == 0) {
        return F3::Visitor_ScheduleIfHigher(p, 1, b, pos);
    }
    return 0;
}

BOOL VisitorSpawner::pickVisitor() {
    VisitorCheckEntry *e = F3::sVisitorCheckTable;
    s32 ovl = F3::Scene_GetCurrent();
    s32 i = 0;
    VecFx32 *z = 0;
    for (; i < 11; e++, i++) {
        if (e->lvl <= F3::sVisitorSchedule.priority) break;
        if (e->fn) {
            u16 *r = (this->*(e->fn))();
            if (r) {
                if (F3::Visitor_ScheduleIfHigher(r, e->lvl, ovl, z)) return TRUE;
            }
        }
    }
    return FALSE;
}

u16 *VisitorSpawner::spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n) {
    u16 *result = 0;
    if (F3::VisitorSchedule_IsSet(this, &F3::sVisitorSchedule)) {
        VisitorSpawnEntry *e = (VisitorSpawnEntry *)F3::VisitorTable_FindByProfile(&F3::sVisitorSchedule.profile, tbl, n);
        if (e) {
            if (F3::sVisitorSchedule.sceneId == F3::Scene_GetCurrent()) {
                VecFx32 v;
                u16 t[3];
                t[0] = 0;
                t[1] = 0;
                t[2] = 0;
                if (e->fn) {
                    (this->*(e->fn))(&v, t, &F3::sVisitorSchedule);
                }
                if (e->flag) {
                    F3::OverlayMgr_Acquire(e->ovl);
                    setVisitorOverlay(&e->ovl);
                } else {
                    clearVisitorOverlay();
                }
                if (F3::_ZN5Actor5spawnEPvS0_S0_S0_S0_(e->id, e->id2, &v, t, this)) {
                    if (F3::Unk_02083c28_IsZero(F3::gFieldSceneKind)) {
                        if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->myAid) == 0) {
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
        F3::VisitorSchedule_Clear(&F3::sVisitorSchedule);
    }
    return result;
}

void NpcSpawnerOverlayView::releaseVisitorOverlay()
{
    if (overlayLoaded != 0) {
        F2::OverlayMgr_Release(overlayId);
        ((VisitorSpawner *)this)->clearVisitorOverlay();
    }
}

extern "C" s32 Visitor_FindActiveEventEntry(EventVisitorEntry *p, s32 n)
{
    u32 buf[3];
    s32 i;
    buf[0] = 0;
    buf[1] = 0;
    F2::Clock_GetDateTime(buf);
    for (i = 0; i < n; p++, i++) {
        if (F2::Event_IsActive(p->a, buf) != 0)
            return i;
    }
    return -1;
}

extern "C" BOOL Visitor_IsNookJobActive()
{
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0 && F2::_ZN10PlayerData8testFlagEj(r, 1) != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL Visitor_IsTaxiActive()
{
    if (F2::Taxi_IsArriving() != 0 || F2::Taxi_IsLeaving() != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL Visitor_CheckResetti()
{
    u16 k;
    if (F2::Scene_GetCurrent() == 0 && F2::_ZN16ResettiVisitFlag5isSetEv(F2::TownSessionState_GetResettiFlag(F2::TownSessionState_Get())) != 0 && F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
        k = 0xd011;
        return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
    return FALSE;
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

extern "C" BOOL Visitor_CheckTomNook()
{
    u16 k;
    void *r4 = F2::PlayerData_GetCurrent();
    if (F2::Scene_GetCurrent() == 0 && F2::Visitor_IsTaxiActive() == 0 && F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0 && r4 != 0 && F2::_ZN10PlayerData8testFlagEj(r4, 0x23) != 0) {
        if (F2::SceneId_IsHouseRoom(F2::Scene_GetPrevious()) != 0 || F2::Scene_GetPrevious() == 6) {
            k = 0xd019;
            return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
    }
    return FALSE;
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
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
        if (F2::TownSessionState_TestFlag(F2::TownSessionState_Get(), 8) != 0 && F2::Visitor_IsTaxiActive() == 0 && F2::Visitor_IsNookJobActive() == 0)
            return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Visitor_FindTortimer(s32 flag)
{
    if (F2::Visitor_IsTortimerDue() != 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail;
        }
        return (BOOL)F2::VisitorTable_FindByProfile(F2::sTortimerVisitorProfile, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
  fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckTortimer(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindTortimer(1);
}

extern "C" BOOL Visitor_IsNookJobErrandActive()
{
    void *r4;
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0)
        r4 = F2::PlayerErrands_GetSlot(F2::_ZN10PlayerData10getErrandsEv(r), 0);
    else
        r4 = 0;
    if (r4 != 0) {
        if (F2::_ZN12ErrandRecord8isActiveEv(F2::PlayerErrandSlot_GetRecord(r4)) != 0) {
            if (F2::_ZN12ErrandRecord11getSubGroupEv(F2::PlayerErrandSlot_GetRecord(r4)) == 1) {
                if (F2::Visitor_IsTaxiActive() == 0)
                    return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL Visitor_FindEventHost(s32 flag)
{
    s32 pass; s32 idx; s32 ok; s32 r6;
    u16 k1, k2;
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
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
        if (F2::Visitor_IsNookJobErrandActive() != 0) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::VisitorTable_FindByProfile(F2::sEventTortimerProfile, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        idx = -1;
        if (F2::Visitor_IsTaxiActive() == 0)
            idx = F2::Visitor_FindActiveEventEntry(F2::sEventHostTable, 8);
        if (idx != -1) {
            r6 = F2::sEventHostCheckValues[idx];
            if (r6 != F2::EventAnnounce_GetCurrentEvent() && r6 != 0x13)
                idx = -1;
        }
        if (idx != -1) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::VisitorTable_FindByProfile(&F2::sEventHostTable[idx].b, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        if (F2::Visitor_IsTortimerDue() == 0 && F2::Scene_GetCurrent() == 9) {
            k1 = 0xd025;
            return (BOOL)F2::VisitorTable_FindByNpc(&k1, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
    } else if (F2::Scene_GetCurrent() == 9) {
        k2 = 0xd025;
        return (BOOL)F2::VisitorTable_FindByNpc(&k2, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
  fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckEventHost(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindEventHost(1);
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
            q->b = F2::Random_GlobalBelow(0xffff);
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
            q->b = F2::Random_GlobalBelow(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL VisitorPlace_EventHost(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    return F2::VisitorPlace_NearTownHall(a, p, q);
}

extern "C" BOOL VisitorPlace_Tortimer(s32 a, VecFx32 *p, Unk_02083314_K *q)
{
    F2::PlayerData_GetCurrent();
    if (F2::Visitor_IsNookJobActive() != 0)
        return F2::VisitorPlace_NearTownHall(a, p, q);
    return F2::VisitorPlace_NearPlayerHouse(a, p, q);
}

extern "C" BOOL VisitorPlace_Origin(s32 a, VecFx32 *p)
{
    p->x = 0;
    p->y = 0;
    p->z = 0;
    return TRUE;
}

extern "C" BOOL Visitor_FindLyle(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord412isDateActiveEv(&F2::data_021ed315);
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail2;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail2;
        }
        {
            if (r4 == 0 && F2::Visitor_IsNookJobActive() == 0 && F2::Visitor_IsTaxiActive() == 0 && F2::Event_IsActive(0x3c, 0) != 0) {
                k = 0xd00d;
                return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
  fail2:
    return FALSE;
}

extern "C" BOOL Visitor_CheckLyle(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindLyle(1);
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

extern "C" BOOL Visitor_FindJoan(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord412isDateActiveEv(&F2::data_021ed315);
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail1;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail1;
        }
        {
            if (r4 == 0 && F2::Visitor_IsNookJobActive() == 0 && F2::Visitor_IsTaxiActive() == 0 && F2::Event_IsActive(0x3b, 0) != 0) {
                k = 0xd002;
                return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
  fail1:
    return FALSE;
}

extern "C" BOOL Visitor_CheckJoan(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindJoan(1);
}

extern "C" BOOL Visitor_FindKatie(s32 flag)
{
    u16 k;
    if (F2::Visitor_IsNookJobActive() == 0 && F2::Visitor_IsTaxiActive() == 0) {
        if (F2::LostChild_IsKatieDue() != 0) {
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
            if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->myAid) == 0) {
                if (F2::Event_IsActive(0x3d, 0) == 0)
                    goto fe;
            }
        }
    c2:
        if (F2::_ZN15KatieVisitState11isFollowingEv(F2::TownSessionState_GetKatieState(F2::TownSessionState_Get())) != 0) {
            if (F2::Scene_GetCurrent() == 0xb) {
                if (F2::_ZN11CommManager8isOnlineEv(F2::gCommManager) == 0)
                    goto fe;
            }
        }
        if (F2::_ZN15KatieVisitState11isFollowingEv(F2::TownSessionState_GetKatieState(F2::TownSessionState_Get())) != 0) {
            if (F2::Scene_GetCurrent() == 0xc) {
            fe:
                k = 0xd022;
                return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
            }
        }
    }
    return FALSE;
}

extern "C" BOOL Visitor_CheckKatie(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindKatie(1);
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
        if (F1::Visitor_IsNookJobActive() == 0) {
            if (F1::LostChild_IsKatieDue() != 0) {
                if (F1::Unk_02083058_IsA()) {
                    F1::_ZN15KatieVisitState12pickKatiePosEv(F1::TownSessionState_GetKatieState(F1::TownSessionState_Get()));
                }
            }
        }
    }
}

extern "C" BOOL Visitor_FindKaitlin(BOOL flag) {
    u16 v;
    if (F1::LostChild_IsKaitlinDue() == 0) goto fail;
    if (F1::Visitor_IsNookJobActive() != 0) goto fail;
    if (F1::Visitor_IsTaxiActive() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    if (F1::Event_IsActive(0x3d, NULL) != 0) goto fail;
    v = 0xd023;
    return F1::VisitorTable_FindByNpc(&v, F1::sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckKaitlin() {
    return F1::Visitor_FindKaitlin(1);
}

extern "C" BOOL VisitorPlace_Kaitlin(void *self, void *b) {
    F1::_ZN15KatieVisitState6getPosEP7VecFx32(F1::TownSessionState_GetKatieState(F1::TownSessionState_Get()), b);
    return TRUE;
}

extern "C" BOOL Visitor_FindBlanca(BOOL flag) {
    u16 v;
    s32 loc[2];
    loc[0] = 0;
    loc[1] = 0;
    F1::Clock_GetDateTime(loc);
    if (F1::Visitor_IsNookJobActive() != 0) goto fail;
    if (F1::Visitor_IsTaxiActive() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    if (F1::Event_IsActive(0x3b, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x3c, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x3d, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x3e, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x3f, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x40, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x41, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x42, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x43, loc) != 0) goto fail;
    if (F1::Event_IsActive(0x44, loc) != 0) goto fail;
    if (F1::_ZN16BlancaFaceRecord11isBlancaDueEv(&F1::gSaveBlancaFace) == 0) goto fail;
    v = 0xd020;
    return F1::VisitorTable_FindByNpc(&v, F1::sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckBlanca() {
    return F1::Visitor_FindBlanca(1);
}

extern "C" BOOL Visitor_FindInEventTable(void *tbl, void *fn, s32 x, BOOL flag) {
    s32 r7 = F1::_ZN11SaveRecord412isDateActiveEv(&F1::data_021ed315);
    s32 idx;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (r7 != 0) goto fail;
    if (F1::Visitor_IsNookJobActive() != 0) goto fail;
    if (F1::Visitor_IsTaxiActive() != 0) goto fail;
    if (F1::gCommManager->isSlotActive(F1::gCommManager->myAid) != 0) goto fail;
    idx = F1::Visitor_FindActiveEventEntry(tbl, x);
    if (idx == -1) goto fail;
    if (fn != NULL) {
        BOOL (*f)() = ((BOOL (**)())fn)[idx];
        if (f != NULL) {
            if (f() == 0) goto fail;
        }
    }
    return F1::VisitorTable_FindByProfile((u8 *)tbl + idx * 8 + 4, F1::sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckDateVisitors() {
    return Visitor_FindInEventTable(F1::sDateVisitorTable, F1::sDateVisitorChecks, 4, 1);
}

extern "C" BOOL Visitor_CheckPete() {
    return Visitor_FindInEventTable(F1::sPeteVisitTable, NULL, 1, 1);
}

extern "C" BOOL Visitor_CanPascalVisit() {
    if (F1::PlayerData_GetCurrent()) {
        if (F1::_ZN20PlayerDailyTalkFlags4testEj(F1::_ZN10PlayerData17getDailyTalkFlagsEv(), 0x18) == 0) return TRUE;
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
        s32 i = F1::Random_GlobalBelow(count);
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
    F1::_ZNK10VisitorPos6getPosEP7VecFx32(F1::TownSessionState_GetVisitorPos(F1::TownSessionState_Get()), b);
    out[1] = F1::Random_GlobalBelow(0xffff);
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

void *sVisitorCheckPmf_Joan[2] = {(void *)Dp::Visitor_CheckJoan, 0};
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
void *sVisitorPlacePmf_Countdown[2] = {(void *)Dp::VisitorPlace_EventHost, 0};
void *sVisitorPlacePmf_Lyle[2] = {(void *)Dp::VisitorPlace_Lyle, 0};
void *sVisitorCheckPmf_Tortimer[2] = {(void *)Dp::Visitor_CheckTortimer, 0};
void *sVisitorPlacePmf_Resetti[2] = {(void *)Dp::VisitorPlace_Resetti, 0};
