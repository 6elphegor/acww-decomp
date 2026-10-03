#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203389c_Vec { s32 x, y, z; };
typedef Unk_0203389c_Vec Unk_02083c28_Vec;
struct VisitorSpawner;
struct VisitorSchedule;
typedef void (VisitorSpawner::*Unk_02083c28_Fn)(Unk_02083c28_Vec *, u16 *, VisitorSchedule *);
typedef u16 *(VisitorSpawner::*Unk_02083d14_Fn)();

struct Unk_02083c28_VecZ {
    s32 x, y, z;
    Unk_02083c28_VecZ() { x = 0; y = 0; z = 0; }
    ~Unk_02083c28_VecZ() {}
};

struct VisitorSchedule {
    Unk_02083c28_VecZ pos;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
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

struct Unk_02083c28_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 pad[0x1b];
};

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL isSlotActive(s32 i);
};


struct VisitorSpawner {
    u8 pad[0x70];
    u8 unk_70;
    u8 pad2[3];
    u32 unk_74;

    u16 *spawnScheduledVisitor(VisitorSpawnEntry *tbl, s32 n);
    BOOL pickVisitor();
    void clearVisitorOverlay();
    void setVisitorOverlay(u32 *p);
};

struct Unk_02083c08 {
    u8 pad_00[0x70];
    u8 unk_70;
    u8 pad_71[3];
    u32 unk_74;

    void releaseVisitorOverlay();
};

struct Unk_02083314_V3 {
    s32 x;
    s32 y;
    s32 z;
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

struct Unk_02082dd0_V { s32 x, y, z; };
struct Unk_02082e80_Cell { u8 pad_00[0x28]; };
struct Unk_02082e80_Grid {
    Unk_02082e80_Cell *unk_00;
    u32 unk_04[2];
};
struct Unk_02082e80_Pos {
    s32 x, y;
    Unk_02082e80_Pos() { x = 0; y = 0; }
};

struct Unk_02084ae4_Vec { s32 x, y, z; };
struct Unk_020847b0_P0 { u8 pad[0x88]; };
struct Unk_020847b0_Q0 { u8 pad[0xc]; };
struct Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Mid : Unk_020847b0_Q0, Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Top : Unk_020847b0_P0, Unk_020847b0_Mid { u8 pad[8]; };
struct Unk_02084ae4_W {
    u8 b;
    u16 h[4];
};

struct Unk_02084ecc_Vec {
    s32 x, y, z;
};

struct GroundInfoBase {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
    BOOL getHeight(s32 a);
};

struct GroundInfo : GroundInfoBase {
    GroundInfo() {}
    GroundInfo(Unk_0203389c_Vec *v, s32 a, s32 b);
    GroundInfo *initAtUnit(s32 x, s32 z, s32 a, s32 b);
    ~GroundInfo();
};

struct Unk_020cbb18_Data {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_02084ffc_Grid {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_02084038 {
    u8 pad_00[0x28];
    Unk_02084038();
    ~Unk_02084038();
};

class NpcSpawner : public GameProc {
public:
    NpcSpawner() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    Unk_02084038 unk_50;
};

namespace Dp {
extern "C" {
void func_02082dd0();
void func_02082e08();
void func_02082e2c();
void func_02082e58();
void func_02082e80();
void func_02082ff4();
void Visitor_CheckPete();
void Visitor_CheckDateVisitors();
void Visitor_CheckBlanca();
void func_02083214();
void Visitor_CheckKaitlin();
void func_02083314();
void Visitor_CheckKatie();
void Visitor_CheckJoan();
void func_020834cc();
void Visitor_CheckLyle();
void func_02083608();
void func_02083614();
void func_02083644();
void Visitor_CheckEventHost();
void Visitor_CheckTortimer();
void func_02083984();
void Visitor_CheckTomNook();
void func_02083a9c();
void Visitor_CheckResetti();
void NpcSpawner_Create();
}
}

struct Unk_02084f84_Scene { void *fn; u16 a; u16 b; };
extern void *data_020e087c[2];
extern void *data_020e0884[2];
extern void *data_020e088c[2];
extern void *data_020e0894[2];
extern void *data_020e089c[2];
extern void *data_020e08a4[2];
extern void *data_020e08ac[2];
extern void *data_020e08b4[2];
extern void *data_020e08bc[2];
extern void *data_020e08c4[2];
extern void *data_020e08cc[2];
extern void *data_020e08d4[2];
extern void *data_020e08dc[2];
extern void *data_020e08e4[2];
extern void *data_020e08ec[2];
extern void *data_020e08f4[2];
extern void *data_020e08fc[2];
extern void *data_020e0904[2];
extern void *data_020e090c[2];
extern void *data_020e0914[2];
extern void *data_020e091c[2];
extern void *data_020e0924[2];
extern void *data_020e0934[2];
extern void *data_020e093c[2];
extern void *data_020e0944[2];
extern void *data_020e094c[2];
extern void *data_020e0954[2];
extern void *data_020e095c[2];
extern void *data_020e0964[2];
extern void *data_020e096c[2];
extern void *data_020e0974[2];
extern void *data_020e097c[2];
extern void *data_020e0984[2];
extern void *data_020e098c[2];
extern const s32 sVisitorSpawnTableCount;
extern const s32 data_020cf1cc;
extern const EventVisitorEntry sPeteVisitTable[1];
extern void *const sDateVisitorChecks[4];
extern const s32 data_020cf1e8[8];
extern const EventVisitorEntry sDateVisitorTable[4];
extern const EventVisitorEntry sEventHostTable[8];
extern u32 data_020e0870;
extern u32 data_020e0874[2];
extern Unk_02084f84_Scene sNpcSpawnerProfile;
extern VisitorSchedule sVisitorSchedule;
extern VisitorCheckEntry sVisitorCheckTable[11];
extern VisitorSpawnEntry sVisitorSpawnTable[23];
extern Unk_02083c28_Rec data_021cd654[8];
extern Unk_02083c28_Rec data_021cd844[0x26];
extern u8 data_021cd640;

Unk_02083c28_Rec data_021cd654[8];
void *data_020e095c[2] = {(void *)Dp::func_02083644, 0};
void *data_020e08b4[2] = {(void *)Dp::func_02082e08, 0};
u32 data_020e0874[2] = {0x56, 0};
void *data_020e08e4[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e097c[2] = {(void *)Dp::Visitor_CheckResetti, 0};
const s32 data_020cf1cc = 4;
void *data_020e0884[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0894[2] = {(void *)Dp::func_02082e80, 0};
void *data_020e08bc[2] = {(void *)Dp::func_02082dd0, 0};
void *data_020e08ec[2] = {(void *)Dp::Visitor_CheckTomNook, 0};
VisitorSchedule sVisitorSchedule = {Unk_02083c28_VecZ(), 0xfff1, 0x33, 0};
void *data_020e0984[2] = {(void *)Dp::Visitor_CheckKaitlin, 0};
void *data_020e08dc[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0974[2] = {(void *)Dp::Visitor_CheckBlanca, 0};
void *data_020e096c[2] = {(void *)Dp::Visitor_CheckPete, 0};
void *data_020e0964[2] = {(void *)Dp::func_02083644, 0};
void *data_020e08cc[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0954[2] = {(void *)Dp::func_02083614, 0};
Unk_02083c28_Rec data_021cd844[0x26];
const EventVisitorEntry sDateVisitorTable[4] = {{0x3e, 0x6a, 0}, {0x41, 0x6b, 0}, {0x42, 0x68, 0}, {0x43, 0x62, 0}};
void *data_020e0944[2] = {(void *)Dp::func_02083644, 0};
void *data_020e0934[2] = {(void *)Dp::func_02083214, 0};
Unk_02084f84_Scene sNpcSpawnerProfile = {(void *)Dp::NpcSpawner_Create, 0xd0, 0xcc};
VisitorCheckEntry sVisitorCheckTable[11] = {
    {*(Unk_02083d14_Fn *)data_020e08a4, 4},
    {*(Unk_02083d14_Fn *)data_020e097c, 4},
    {*(Unk_02083d14_Fn *)data_020e08ec, 4},
    {*(Unk_02083d14_Fn *)data_020e088c, 4},
    {*(Unk_02083d14_Fn *)data_020e08d4, 4},
    {*(Unk_02083d14_Fn *)data_020e08ac, 4},
    {*(Unk_02083d14_Fn *)data_020e098c, 3},
    {*(Unk_02083d14_Fn *)data_020e0984, 3},
    {*(Unk_02083d14_Fn *)data_020e08c4, 2},
    {*(Unk_02083d14_Fn *)data_020e0974, 2},
    {*(Unk_02083d14_Fn *)data_020e096c, 2},
};
u32 data_020e0870 = 0x56;
void *data_020e087c[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e090c[2] = {(void *)Dp::func_02083314, 0};
void *data_020e0904[2] = {(void *)Dp::func_02083984, 0};
void *data_020e08fc[2] = {(void *)Dp::func_02083644, 0};
const EventVisitorEntry sEventHostTable[8] = {{0x14, 0x57, 0}, {0x15, 0x58, 0}, {0x16, 0x59, 0}, {0x17, 0x5a, 0}, {0x18, 0x5f, 0}, {0x19, 0x5b, 0}, {0x1a, 0x5c, 0}, {0x1b, 0x5c, 0}};
void *data_020e088c[2] = {(void *)Dp::Visitor_CheckEventHost, 0};
const EventVisitorEntry sPeteVisitTable[1] = {{0x45, 0x54, 0}};
const s32 sVisitorSpawnTableCount = 0x17;
void *data_020e08c4[2] = {(void *)Dp::Visitor_CheckDateVisitors, 0};
void *data_020e08d4[2] = {(void *)Dp::Visitor_CheckLyle, 0};
u8 data_021cd640;
void *data_020e093c[2] = {(void *)Dp::func_02083644, 0};
const s32 data_020cf1e8[8] = {9, 10, 14, 15, 16, 17, 18, 19};
void *data_020e0924[2] = {(void *)Dp::func_02083644, 0};
void *data_020e0914[2] = {(void *)Dp::func_02083608, 0};
void *data_020e089c[2] = {(void *)Dp::func_02082e58, 0};
void *const sDateVisitorChecks[4] = {0, 0, (void *)Dp::func_02082ff4, 0};
void *data_020e098c[2] = {(void *)Dp::Visitor_CheckKatie, 0};

namespace F1 {
extern "C" {
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern Unk_02082e80_Grid *gSceneBlockMap;
extern u8 sPeteVisitTable[], sDateVisitorTable[], sDateVisitorChecks[], sVisitorSpawnTable[];
extern s32 sVisitorSpawnTableCount;
extern u8 data_021ed315, gSaveGameStats;
void FieldPos_SnapToUnitCenter(void *g, void *v);
void *TownSessionState_Get();
void *func_02085170(void *p);
void *TownSessionState_GetVisitorPos(void *p);
void *TownSessionState_GetPeteFall(void *p);
void *func_02085178(void *p);
void _ZN12Unk_02086af016getGulliverSpawnEPvPtP17Unk_020868cc_Vec3(void *a, void *b, u16 *c, void *d);
void _ZNK10VisitorPos6getPosEP17Unk_020868cc_Vec3(void *a, void *b);
void _ZN13PeteFallState6getPosEP17Unk_02086ec4_Vec3(void *a, void *b);
s32 _ZN13PeteFallState9getFacingEv(void *a);
void _ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(void *a, void *b);
s32 _ZN12Unk_02086f8412pickKatiePosEv(void *a);
s32 func_02063b8c(s32 a);
s32 PlayerData_GetCurrent();
void *_ZN10PlayerData17getDailyTalkFlagsEv();
s32 _ZN20PlayerDailyTalkFlags4testEj(void *a, s32 b);
s32 _ZN11SaveRecord412isDateActiveEv(void *a);
s32 Scene_GetCurrent();
s32 func_02083ba4();
s32 func_02083b84();
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
static inline Unk_02082e80_Cell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04[0] && y < g->unk_04[1] && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04[0] + x];
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
extern u8 data_020e0874[];
extern u8 data_020e0870[];
extern EventVisitorEntry sEventHostTable[];
extern s32 data_020cf1e8[];
s32 Scene_GetCurrent();
s32 Scene_GetPrevious();
s32 func_02040c70();
s32 SceneId_IsHouseRoom(s32);
s32 func_020b0f0c();
s32 func_020b0f30();
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *);
void *PlayerErrands_GetSlot(void *, s32);
void *PlayerErrandSlot_GetRecord(void *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord11getSubGroupEv(void *);
s32 _ZN12Unk_02097ff48testFlagEj(void *, s32);
void Clock_GetDateTime(void *);
void *_ZN11SaveRecord412isDateActiveEv(void *);
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
BOOL _ZN11CommManager8isOnlineEv(CommManager *g);
s32 TownSessionState_Get();
s32 func_02085178(s32);
s32 TownSessionState_GetResettiFlag(s32);
s32 TownSessionState_TestFlag(s32, s32);
s32 _ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(s32, void *);
s32 _ZN12Unk_02086f8411isFollowingEv(s32);
s32 _ZN16ResettiVisitFlag5isSetEv(s32);
s32 LostChild_IsKatieDue();
s32 Event_IsActive(u32, void *);
s32 FieldPos_FromUnitCenter(void *, s32, s32);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnitCenter(void *, s32, s32, s32, s32);
void FieldPos_FromBlockUnit(void *, s32, s32, s32, s32);
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02063b8c(s32);
void OverlayMgr_Release(u32);
void *VisitorTable_FindByNpc(u16 *, void *, s32);
void *VisitorTable_FindByProfile(void *, void *, s32);
BOOL func_02083314(s32 a, Unk_02083314_V3 *p);
BOOL Visitor_CheckKatie(s32 a, s32 b, s32 c);
BOOL Visitor_FindKatie(s32 flag);
BOOL Visitor_CheckJoan(s32 a, s32 b, s32 c);
BOOL Visitor_FindJoan(s32 flag);
BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL Visitor_CheckLyle(s32 a, s32 b, s32 c);
BOOL Visitor_FindLyle(s32 flag);
BOOL func_02083608(s32 a, Unk_02083314_V3 *p);
BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL Visitor_CheckEventHost(s32 a, s32 b, s32 c);
BOOL Visitor_FindEventHost(s32 flag);
BOOL func_02083898();
BOOL Visitor_CheckTortimer(s32 a, s32 b, s32 c);
BOOL Visitor_FindTortimer(s32 flag);
BOOL func_02083944();
BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL Visitor_CheckTomNook();
BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p);
BOOL Visitor_CheckResetti();
BOOL func_02083b84();
BOOL func_02083ba4();
s32 Visitor_FindActiveEventEntry(EventVisitorEntry *p, s32 n);
}

}

namespace F3 {
extern "C" {
extern VisitorSchedule sVisitorSchedule;
extern u32 data_020e0874[2];
extern VisitorCheckEntry sVisitorCheckTable[11];
extern u8 gFieldSceneKind;
extern CommManager *gCommManager;
extern Unk_02083c28_Vec gVec3Zero;
extern Unk_02083c28_Rec data_021cd844[0x26];
extern Unk_02083c28_Rec data_021cd654[8];
extern u8 data_021cd640;
extern u8 gSaveVillagers[];
extern u16 *gSceneBlockMap;
s32 Scene_GetCurrent();
s32 Scene_InTown();
s32 _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 i);
void OverlayMgr_Acquire(u32 ovl);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32 a, u32 b, void *c, void *d, void *e);
s32 Field_ClearObjectFcFdAt(Unk_02083c28_Vec *v);
s32 func_02083ba4(u16 *p);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void FieldPos_FromUnitCenter(Unk_02083c28_Vec *out, s32 x, s32 y);
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
void VisitorSchedule_Set(VisitorSchedule *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos);
BOOL Visitor_ScheduleIfHigher(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos);
BOOL func_02083ed4(u16 *arr, s32 x, s32 y);
BOOL func_02083ef4(u16 *arr, s32 x, s32 y);
BOOL func_02083f1c(u16 *arr, s32 x, s32 y);
u8 *func_020841fc(u16 *p);
BOOL func_0208416c(s32 *a, s32 *b, u16 *p);
void func_0208419c(u32 a, u32 b, u32 c, u16 *p);
u8 *func_02084398(u16 *p);
u8 *func_02084294(u16 *p);
BOOL func_02084430(u16 *p, u32 b, u32 c);
BOOL func_020842f8(u16 *p, u32 b, u32 c);
BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
void func_020843c4(void *src, s32 id);
BOOL func_02084228(u16 *p, u32 b, u32 c);
}
static inline BOOL Unk_02083c28_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F4 {
extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveVillagers[];
extern u8 sVisitorSchedule[];
extern u8 data_021cd654[];
extern u8 gFieldSceneKind;
extern u32 sVisitorSpawnTableCount;
extern u8 sVisitorSpawnTable[];
extern u8 data_021ed315[];
extern u8 sDateVisitorTable[];
extern u8 sDateVisitorChecks[];
extern u32 data_020cf1cc;
void _ZN12Unk_02083c0821releaseVisitorOverlayEv();
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
void *func_02085170(void *p);
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
s32 func_02083b84();
s32 _ZN11CommManager12isSlotActiveEi(void *g, s32 i);
s32 PlayerData_GetCurrent();
s32 _ZN10PlayerData11getPlayerIdEv(s32 p);
void SaveVillagers_PickFleaVillager(void *p, s32 v);
s32 Scene_InVillagerHouse();
s32 Scene_InHouseRoom();
s32 VillagerEvent_GetTodayIndex();
s32 VillagerStates_GetFleaMarketBuyer();
s32 func_020b101c();
s32 Scene_GetHouseRoom();
void _ZN14VisitorSpawner11pickVisitorEv(void *p);
void *_ZN14VisitorSpawner21spawnScheduledVisitorEP17VisitorSpawnEntryi(void *a, void *b, u32 c);
void func_020832c4(void *p);
s32 _ZN10PlayerData13func_0209865cEv(s32 p);
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
void *func_02084398(void *p);
s32 NetArea_IsLocalOwner();
s32 func_02063b8c(s32 n);
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
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *buf, void *v, s32 a, s32 b);
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
s32 func_02083f44(void *p);
void func_02083ef4(void *p, s32 x, s32 y);
s32 func_02083ed4(void *p, s32 x, s32 y);
void NpcSpawner_SpawnVillagers(void *a);
void NpcSpawner_SpawnHouseOwner(u8 *a);
void func_020847b0(void *a);
s32 func_02084e20(u8 *a, void *v);
void func_02084c94(void *a, void *v);
}
static inline BOOL Unk_020845a8_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F5 {
extern "C" {
extern u8 data_021cd640;
extern u8 data_021cd654[];
extern u8 data_021cd844[];
extern u8 sVisitorSchedule[];
extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind;
extern Unk_020cbb18_Data *gCommManager;
void MI_CpuFill8(void *p, u32 v, u32 n);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
void FieldPos_FromUnitCenter(Unk_02084ecc_Vec *out, s32 x, s32 z);
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

extern "C" void func_02084ffc()
{
    Unk_02084ffc_Grid *g = (Unk_02084ffc_Grid *)F5::TownBlockMap_Get();
    s32 x, y;
    if (g != NULL) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                u8 *cell;
                u16 *p;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    cell = g->unk_00 + (y * g->unk_04 + x) * 0x28;
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

extern "C" s32 func_02084fbc()
{
    BOOL b = (F5::gFieldSceneKind == 0);
    if (b) {
        Unk_020cbb18_Data *d = F5::gCommManager;
        if (F5::_ZN11CommManager12isSlotActiveEi(d, d->unk_64)) {
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
    F5::data_021cd640 = 0;
    F5::MI_CpuFill8(F5::data_021cd654, 0, 0xf0);
    F5::MI_CpuFill8(F5::data_021cd844, 0, 0x474);
    F5::VisitorSchedule_Clear(F5::sVisitorSchedule);
}

extern "C" void func_02084ecc()
{
    u8 *p = F5::data_021cd654;
    s32 i;
    s32 z = 0;
    F5::MI_CpuFill8(p, 0, 0xf0);
    for (i = 0; i < 8; p += 0x1e, i++) {
        void *o = F5::SaveVillagers_Get(F5::gSaveVillagers, i);
        if (o != NULL && F5::_ZN10VillagerId7isValidEv(F5::_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
            Unk_02084ecc_Vec v;
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

extern "C" s32 func_02084e20(u8 *a, void *out)
{
    s32 r6;
    if (F4::func_02083f44(a + 0x50)) {
        s32 cnt = 0;
        s32 x, y;
        for (x = 0; x < 16; x++) {
            F4::func_02083ef4(a + 0x50, x, 14);
            F4::func_02083ef4(a + 0x50, x, 15);
        }
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (F4::func_02083ed4(a + 0x50, x, y)) cnt++;
            }
        }
        if (cnt > 0) {
            s32 y, x;
            r6 = F4::func_02063b8c(cnt);
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F4::func_02083ed4(a + 0x50, x, y)) {
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
    p = F4::Visitor_FindInEventTable(F4::sDateVisitorTable, F4::sDateVisitorChecks, F4::data_020cf1cc, 0);
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

extern "C" void func_02084c94(void *a, void *vec)
{
    u32 buf[17];
    void *u;
    F4::_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, u, 0, 0);
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
    Unk_02084ae4_W w;
    Unk_02084ae4_Vec v;
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
        u8 *e = (u8 *)F4::func_02084398(&w.h[0]);
        if (e != 0 && e[0] != 0) {
            F4::CommRecord_UnpackSource(e + 3, &w, 0);
            if (w.b == F4::Scene_GetCurrent()) {
                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                F4::MI_CpuCopy8(e + 9, &w.h[2], 2);
            } else {
                u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(r7);
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            }
        } else if (F4::NetArea_IsLocalOwner() && ((u8 *)(F4::data_021cd654 + i * 30))[0] != 0) {
            u8 *t = F4::data_021cd654 + i * 30;
            F4::CommRecord_UnpackSource(t + 3, &w, 0);
            s32 wb = w.b;
            if (wb != F4::Scene_GetCurrent() && F4::SceneId_IsTown(wb) == 0 && F4::SceneId_IsTownUnk31(w.b) == 0 && w.b != 0x2c) {
                u8 *p = (u8 *)F4::_ZN20VillagerDataItemView11getHousePosEv(r7);
                F4::FieldPos_FromUnitCenter(&v, p[0] + 1, p[1] + 2);
            } else {
                F4::NetBuf_UnpackPair20(t + 4, &v.x, &v.z);
                F4::func_02084c94(r7, &v);
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
    Unk_02084ae4_Vec v;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[2] = 0;
    h[3] = 0;
    h[4] = 0;
    h[0] = (r7 & 0xfff) | 0xe000;
    u8 *e = (u8 *)F4::func_02084398(h);
    s32 r4;
    if (F4::NetArea_IsLocalOwner()) {
        r4 = F4::func_02084e20(a, &v);
        h[3] = F4::func_02063b8c(4) << 14;
    } else if (e != 0 && e[0] != 0) {
        F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
        F4::MI_CpuCopy8(e + 9, &h[3], 2);
        r4 = 1;
    } else {
        r4 = F4::func_02084e20(a, &v);
        h[3] = F4::func_02063b8c(4) << 14;
    }
    if (r4 != 0) {
        s32 c = 0x85;
        s32 r6 = 0xd8;
        if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->unk_64) == 0) {
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
                F4::func_02084e20(a, &v);
                h[3] = F4::func_02063b8c(4) << 14;
                F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(r6, h[1], &v, &h[2], a);
            }
        }
    }
}

extern "C" void func_020847b0(void *a)
{
    s32 t;
    s32 code;
    BOOL flag;
    Unk_02084ae4_Vec v;
    u16 h[4];
    s32 vv[2];
    if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->unk_64)) {
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
        Unk_020847b0_Top *top = (Unk_020847b0_Top *)F4::_ZN10PlayerData13func_0209865cEv(F4::PlayerData_GetCurrent());
        Unk_020847b0_Mid &m = *top;
        Unk_020847b0_Q1 &q = m;
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
                            u8 *e = F4::data_021cd654 + r5 * 30;
                            if (e[0] != 0) {
                                F4::NetBuf_UnpackPair20(e + 4, &v.x, &v.z);
                                F4::MI_CpuCopy8(e + 9, &h[2], 2);
                            }
                        }
                    } else {
                        F4::func_020b101c();
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
                u8 *e = F4::data_021cd654 + r4 * 30;
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

BOOL NpcSpawner::vfunc_00()
{
    u8 *a = (u8 *)this;
    u32 saved = F4::sVisitorSpawnTableCount;
    u8 *g = F4::gSaveVillagers;
    F4::_ZN13PeteFallState18clearVisitorActiveEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get()));
    F4::_ZN17VisitorSpawnFlags19clearVisitorSpawnedEv(F4::func_02085170(F4::TownSessionState_Get()));
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
        if (F4::func_02083b84() == 0) {
            if (F4::_ZN11CommManager12isSlotActiveEi(F4::gCommManager, F4::gCommManager->unk_64) == 0) {
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
                    F4::func_020b101c();
                }
            }
        }
        if (F4::Scene_GetHouseRoom() == 0) {
            F4::func_020847b0(a);
        }
    }
    F4::_ZN14VisitorSpawner11pickVisitorEv(a);
    u16 *r4 = (u16 *)F4::_ZN14VisitorSpawner21spawnScheduledVisitorEP17VisitorSpawnEntryi(a, F4::sVisitorSpawnTable, saved);
    if (r4) {
        F4::_ZN17VisitorSpawnFlags17setVisitorSpawnedEv(F4::func_02085170(F4::TownSessionState_Get()));
        if (r4[1] != 0xd008 || F4::_ZN13PeteFallState10hasFallPosEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get())) != 0) {
            F4::_ZN13PeteFallState16setVisitorActiveEv(F4::TownSessionState_GetPeteFall(F4::TownSessionState_Get()));
        }
    }
    F4::func_020832c4(a);
    if (F4::Scene_InTown()) {
        F4::SaveVillagers_UpdatePlansNow(g);
    }
    return TRUE;
}

BOOL NpcSpawner::vfunc_0c()
{
    F4::_ZN12Unk_02083c0821releaseVisitorOverlayEv();
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
        if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->unk_64) == 0) {
            if (g) F3::SaveVillagers_UpdatePlans(g);
        }
    }
    if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->unk_64) == 0) {
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

extern "C" BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        F3::CommRecord_PackSource((u8 *)r + 3, b, 0);
        F3::NetBuf_PackPair20((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02084430(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02084404(void *dst, s32 id) {
    void *o;
    F3::func_020843c4(dst, id);
    o = F3::VillagerStates_GetEntry(id - 0xc);
    if (o) {
        F3::VillagerState_SetMood(o, 0);
        F3::VillagerState_SetMoodTimer(o, 0);
    }
}

extern "C" void func_020843c4(void *dst, s32 id) {
    u32 i = id - 0xc;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        F3::MI_CpuCopy8(r, dst, F3::CommSyncVar_GetVarSize(id));
        F3::data_021cd640 = 1;
    }
}

extern "C" u8 *func_02084398(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 8) return F3::_ZN11CommManager10getSyncVarEj(F3::gCommManager, i + 0xc);
    return 0;
}

extern "C" BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        F3::CommRecord_PackSource((u8 *)r + 3, b, 0);
        F3::NetBuf_PackPair20((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020842f8(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020842c0(void *dst, s32 id) {
    u32 i = id - 0x20;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        F3::MI_CpuCopy8(r, dst, F3::CommSyncVar_GetVarSize(id));
    }
}

extern "C" u8 *func_02084294(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 0x26) return F3::_ZN11CommManager10getSyncVarEj(F3::gCommManager, i + 0x20);
    return 0;
}

extern "C" BOOL func_02084254(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084464(p, b, v, c, d, e);
    if (k == 0xd) return F3::func_0208432c(p, b, v, c, d, e);
    return 0;
}

extern "C" BOOL func_02084228(u16 *p, u32 b, u32 c) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084430(p, b, c);
    if (k == 0xd) return F3::func_020842f8(p, b, c);
    return 0;
}

extern "C" u8 *func_020841fc(u16 *p) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084398(p);
    if (k == 0xd) return F3::func_02084294(p);
    return 0;
}

extern "C" void func_0208419c(u32 a, u32 b, u32 c, u16 *p) {
    F3::func_02084228(p, b, c);
    if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->unk_64)) {
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

extern "C" BOOL func_0208416c(s32 *a, s32 *b, u16 *p) {
    u8 *rec = F3::func_020841fc(p);
    if (rec && rec[0] != 0) {
        *a = rec[1];
        *b = rec[2];
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02084040() {
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
        rec = F3::func_020841fc(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        F3::func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
    for (i = 0; i < 0x26; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xd000;
        rec = F3::func_020841fc(&l.id);
        if (rec) {
            F3::CommRecord_UnpackSource(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        F3::func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
}

Unk_02084038::Unk_02084038() {}

Unk_02084038::~Unk_02084038() {}

extern "C" BOOL func_02083f44(u16 *out) {
    s32 y, x;
    u16 *grid = F3::gSceneBlockMap;
    F3::MI_CpuFill8(out, 0, 0x20);
    if (grid) {
        u16 *p = F3::BlockMap_GetItemPtr(grid, 0, 0, 0, 0, 0);
        if (p) {
            for (y = 0; y < 16; y++) {
                for (x = 0; x < 16; x++) {
                    Unk_02083c28_Vec v;
                    F3::FieldPos_FromUnitCenter(&v, x, y);
                    GroundInfo o(&v, 0, 0);
                    if (*p == 0xfff1 && !o.getHeight(1)) {
                        F3::func_02083f1c(out, x, y);
                    }
                    p++;
                }
            }
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F3::func_02083ed4(out, x, y) && !F3::func_02083ed4(out, x + 1, y) && !F3::func_02083ed4(out, x - 1, y)
                        && !F3::func_02083ed4(out, x, y + 1) && !F3::func_02083ed4(out, x, y - 1)) {
                        F3::func_02083ef4(out, x, y);
                    }
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083f1c(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] |= (1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02083ef4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] &= ~(1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02083ed4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02083eb4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 14) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" void VisitorSchedule_Set(VisitorSchedule *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos) {
    out->unk_0c = *idp;
    out->unk_0e = b;
    out->unk_0f = c;
    if (pos) {
        *(Unk_02083c28_Vec *)&out->pos = *pos;
    } else {
        *(Unk_02083c28_Vec *)&out->pos = F3::gVec3Zero;
    }
}

extern "C" void VisitorSchedule_Clear(VisitorSchedule *g) {
    F3::VisitorSchedule_Set(g, (u16 *)&F3::data_020e0874[1], 0x33, 0, 0);
}

extern "C" BOOL VisitorSchedule_IsSet(void *p, VisitorSchedule *g) {
    BOOL r = FALSE;
    u32 v = g->unk_0f;
    if (v != 0 && v < 5) r = TRUE;
    return r;
}

void VisitorSpawner::setVisitorOverlay(u32 *p) {
    unk_70 = 1;
    unk_74 = *p;
}

void VisitorSpawner::clearVisitorOverlay() { unk_70 = 0; }

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

extern "C" BOOL Visitor_ScheduleIfHigher(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos) {
    if (F3::sVisitorSchedule.unk_0f < lvl) {
        F3::VisitorSchedule_Set(&F3::sVisitorSchedule, p, b, lvl, pos);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Visitor_ScheduleLow(u16 *p, u8 b, Unk_02083c28_Vec *pos) {
    if (F3::func_02083ba4(p) == 0 && F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->unk_64) == 0) {
        return F3::Visitor_ScheduleIfHigher(p, 1, b, pos);
    }
    return 0;
}

BOOL VisitorSpawner::pickVisitor() {
    VisitorCheckEntry *e = F3::sVisitorCheckTable;
    s32 ovl = F3::Scene_GetCurrent();
    s32 i = 0;
    Unk_02083c28_Vec *z = 0;
    for (; i < 11; e++, i++) {
        if (e->lvl <= F3::sVisitorSchedule.unk_0f) break;
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
        VisitorSpawnEntry *e = (VisitorSpawnEntry *)F3::VisitorTable_FindByProfile(&F3::sVisitorSchedule.unk_0c, tbl, n);
        if (e) {
            if (F3::sVisitorSchedule.unk_0e == F3::Scene_GetCurrent()) {
                Unk_02083c28_Vec v;
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
                        if (F3::_ZN11CommManager12isSlotActiveEi(F3::gCommManager, F3::gCommManager->unk_64) == 0) {
                            Unk_02083c28_Vec w;
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

void Unk_02083c08::releaseVisitorOverlay()
{
    if (unk_70 != 0) {
        F2::OverlayMgr_Release(unk_74);
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

extern "C" BOOL func_02083ba4()
{
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0 && F2::_ZN12Unk_02097ff48testFlagEj(r, 1) != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL func_02083b84()
{
    if (F2::func_020b0f0c() != 0 || F2::func_020b0f30() != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL Visitor_CheckResetti()
{
    u16 k;
    if (F2::Scene_GetCurrent() == 0 && F2::_ZN16ResettiVisitFlag5isSetEv(F2::TownSessionState_GetResettiFlag(F2::TownSessionState_Get())) != 0 && F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
        k = 0xd011;
        return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
    return FALSE;
}

extern "C" BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p)
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
    if (F2::Scene_GetCurrent() == 0 && F2::func_02083b84() == 0 && F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0 && r4 != 0 && F2::_ZN12Unk_02097ff48testFlagEj(r4, 0x23) != 0) {
        if (F2::SceneId_IsHouseRoom(F2::Scene_GetPrevious()) != 0 || F2::Scene_GetPrevious() == 6) {
            k = 0xd019;
            return (BOOL)F2::VisitorTable_FindByNpc(&k, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
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

extern "C" BOOL func_02083944()
{
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
        if (F2::TownSessionState_TestFlag(F2::TownSessionState_Get(), 8) != 0 && F2::func_02083b84() == 0 && F2::func_02083ba4() == 0)
            return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Visitor_FindTortimer(s32 flag)
{
    if (F2::func_02083944() != 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail;
        }
        return (BOOL)F2::VisitorTable_FindByProfile(F2::data_020e0870, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
    }
  fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckTortimer(s32 a, s32 b, s32 c)
{
    return F2::Visitor_FindTortimer(1);
}

extern "C" BOOL func_02083898()
{
    void *r4;
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0)
        r4 = F2::PlayerErrands_GetSlot(F2::_ZN10PlayerData13func_0209865cEv(r), 0);
    else
        r4 = 0;
    if (r4 != 0) {
        if (F2::_ZN12ErrandRecord8isActiveEv(F2::PlayerErrandSlot_GetRecord(r4)) != 0) {
            if (F2::_ZN12ErrandRecord11getSubGroupEv(F2::PlayerErrandSlot_GetRecord(r4)) == 1) {
                if (F2::func_02083b84() == 0)
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
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
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
        if (F2::func_02083898() != 0) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::VisitorTable_FindByProfile(F2::data_020e0874, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        idx = -1;
        if (F2::func_02083b84() == 0)
            idx = F2::Visitor_FindActiveEventEntry(F2::sEventHostTable, 8);
        if (idx != -1) {
            r6 = F2::data_020cf1e8[idx];
            if (r6 != F2::func_02040c70() && r6 != 0x13)
                idx = -1;
        }
        if (idx != -1) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::VisitorTable_FindByProfile(&F2::sEventHostTable[idx].b, F2::sVisitorSpawnTable, F2::sVisitorSpawnTableCount);
        }
        if (F2::func_02083944() == 0 && F2::Scene_GetCurrent() == 9) {
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

extern "C" BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
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
            q->b = F2::func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
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
            q->b = F2::func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    return F2::func_020836e4(a, p, q);
}

extern "C" BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    F2::PlayerData_GetCurrent();
    if (F2::func_02083ba4() != 0)
        return F2::func_020836e4(a, p, q);
    return F2::func_0208364c(a, p, q);
}

extern "C" BOOL func_02083608(s32 a, Unk_02083314_V3 *p)
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
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail2;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail2;
        }
        {
            if (r4 == 0 && F2::func_02083ba4() == 0 && F2::func_02083b84() == 0 && F2::Event_IsActive(0x3c, 0) != 0) {
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

extern "C" BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
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
    if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
            if (!c)
                goto fail1;
            if (F2::Scene_GetCurrent() == 0x2c)
                goto fail1;
        }
        {
            if (r4 == 0 && F2::func_02083ba4() == 0 && F2::func_02083b84() == 0 && F2::Event_IsActive(0x3b, 0) != 0) {
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
    if (F2::func_02083ba4() == 0 && F2::func_02083b84() == 0) {
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
            if (F2::_ZN11CommManager12isSlotActiveEi(F2::gCommManager, F2::gCommManager->unk_64) == 0) {
                if (F2::Event_IsActive(0x3d, 0) == 0)
                    goto fe;
            }
        }
    c2:
        if (F2::_ZN12Unk_02086f8411isFollowingEv(F2::func_02085178(F2::TownSessionState_Get())) != 0) {
            if (F2::Scene_GetCurrent() == 0xb) {
                if (F2::_ZN11CommManager8isOnlineEv(F2::gCommManager) == 0)
                    goto fe;
            }
        }
        if (F2::_ZN12Unk_02086f8411isFollowingEv(F2::func_02085178(F2::TownSessionState_Get())) != 0) {
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

extern "C" BOOL func_02083314(s32 a, Unk_02083314_V3 *p)
{
    BOOL c = F2::gFieldSceneKind == 0 ? TRUE : FALSE;
    if (c) {
        F2::_ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(F2::func_02085178(F2::TownSessionState_Get()), p);
        return TRUE;
    }
    F2::FieldPos_FromUnitCenter(p, 6, 0x11);
    p->x = p->x + 0x1000;
    return TRUE;
}

extern "C" void func_020832c4() {
    if (F1::gCommManager->isSlotActive(F1::gCommManager->unk_64) != 0) {
        if (F1::func_02083ba4() == 0) {
            if (F1::LostChild_IsKatieDue() != 0) {
                if (F1::Unk_02083058_IsA()) {
                    F1::_ZN12Unk_02086f8412pickKatiePosEv(F1::func_02085178(F1::TownSessionState_Get()));
                }
            }
        }
    }
}

extern "C" BOOL Visitor_FindKaitlin(BOOL flag) {
    u16 v;
    if (F1::LostChild_IsKaitlinDue() == 0) goto fail;
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->unk_64) != 0) goto fail;
    if (F1::Event_IsActive(0x3d, NULL) != 0) goto fail;
    v = 0xd023;
    return F1::VisitorTable_FindByNpc(&v, F1::sVisitorSpawnTable, F1::sVisitorSpawnTableCount);
fail:
    return FALSE;
}

extern "C" BOOL Visitor_CheckKaitlin() {
    return F1::Visitor_FindKaitlin(1);
}

extern "C" BOOL func_02083214(void *self, void *b) {
    F1::_ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(F1::func_02085178(F1::TownSessionState_Get()), b);
    return TRUE;
}

extern "C" BOOL Visitor_FindBlanca(BOOL flag) {
    u16 v;
    s32 loc[2];
    loc[0] = 0;
    loc[1] = 0;
    F1::Clock_GetDateTime(loc);
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::Scene_GetCurrent() == 0x2c) goto fail;
    }
    if (F1::gCommManager->isSlotActive(F1::gCommManager->unk_64) != 0) goto fail;
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
    if (F1::_ZN16BlancaFaceRecord11isBlancaDueEv(&F1::gSaveGameStats) == 0) goto fail;
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
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (F1::gCommManager->isSlotActive(F1::gCommManager->unk_64) != 0) goto fail;
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

extern "C" BOOL func_02082ff4() {
    if (F1::PlayerData_GetCurrent()) {
        if (F1::_ZN20PlayerDailyTalkFlags4testEj(F1::_ZN10PlayerData17getDailyTalkFlagsEv(), 0x18) == 0) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02082e80(void *self, void *p1) {
    static Unk_02082e80_Pos list[32];
    Unk_02082e80_Cell *c;
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
    sz = &m->unk_04[0];
    w = sz[0];
    h = sz[1];
    count = 0;
    y = 0;
    goto ytest;
yloop:
    x = 0;
    goto xtest;
xloop:
    if ((u32)x < m->unk_04[0] && (u32)y < m->unk_04[1] && m->unk_00 != NULL) {
        c = &m->unk_00[y * m->unk_04[0] + x];
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
        s32 i = F1::func_02063b8c(count);
        F1::FieldPos_FromUnitCenter(p1, list[i].x, list[i].y);
        return TRUE;
    }
fail:
    return FALSE;
}

extern "C" BOOL func_02082e58(void *self, void *b, u16 *out) {
    void *p = F1::TownSessionState_GetPeteFall(F1::TownSessionState_Get());
    F1::_ZN13PeteFallState6getPosEP17Unk_02086ec4_Vec3(p, b);
    out[1] = F1::_ZN13PeteFallState9getFacingEv(p);
    return TRUE;
}

extern "C" BOOL func_02082e2c(void *self, void *b, u16 *out) {
    F1::_ZNK10VisitorPos6getPosEP17Unk_020868cc_Vec3(F1::TownSessionState_GetVisitorPos(F1::TownSessionState_Get()), b);
    out[1] = F1::func_02063b8c(0xffff);
    return TRUE;
}

extern "C" BOOL func_02082e08(void *self, void *b, u16 *out, void *d) {
    F1::_ZN12Unk_02086af016getGulliverSpawnEPvPtP17Unk_020868cc_Vec3(F1::func_02085170(F1::TownSessionState_Get()), b, out + 1, d);
    return TRUE;
}

extern "C" BOOL func_02082dd0(void *self, void *g, u16 *out, s32 *a) {
    Unk_02082dd0_V v;
    s32 z = a[2] + 0x6000;
    s32 x = a[0] - 0x4000;
    v.x = x;
    v.y = 0;
    v.z = z;
    F1::FieldPos_SnapToUnitCenter(g, &v);
    out[1] = 0;
    return TRUE;
}

void *data_020e08ac[2] = {(void *)Dp::Visitor_CheckJoan, 0};
VisitorSpawnEntry sVisitorSpawnTable[23] = {
    {0x56, 0xd012, 0x50, *(Unk_02083c28_Fn *)data_020e0954, 1},
    {0x65, 0xd011, 0x4d, *(Unk_02083c28_Fn *)data_020e094c, 1},
    {0x7d, 0xd019, 0x0, *(Unk_02083c28_Fn *)data_020e0904, 0},
    {0x7e, 0xd022, 0x0, *(Unk_02083c28_Fn *)data_020e090c, 0},
    {0x7f, 0xd023, 0x0, *(Unk_02083c28_Fn *)data_020e0934, 0},
    {0x5d, 0xd025, 0x0, *(Unk_02083c28_Fn *)data_020e0914, 0},
    {0x69, 0xd00d, 0x47, *(Unk_02083c28_Fn *)data_020e091c, 1},
    {0x5f, 0xd01e, 0x57, *(Unk_02083c28_Fn *)data_020e0924, 1},
    {0x57, 0xd012, 0x51, *(Unk_02083c28_Fn *)data_020e093c, 1},
    {0x58, 0xd012, 0x52, *(Unk_02083c28_Fn *)data_020e0944, 1},
    {0x59, 0xd012, 0x53, *(Unk_02083c28_Fn *)data_020e095c, 1},
    {0x5a, 0xd012, 0x54, *(Unk_02083c28_Fn *)data_020e0964, 1},
    {0x5b, 0xd012, 0x55, *(Unk_02083c28_Fn *)data_020e08fc, 1},
    {0x5c, 0xd012, 0x56, *(Unk_02083c28_Fn *)data_020e08f4, 1},
    {0x6f, 0xd002, 0x49, *(Unk_02083c28_Fn *)data_020e087c, 1},
    {0x6a, 0xd003, 0x4e, *(Unk_02083c28_Fn *)data_020e0884, 1},
    {0x6b, 0xd013, 0x4f, *(Unk_02083c28_Fn *)data_020e08dc, 1},
    {0x68, 0xd016, 0x4c, *(Unk_02083c28_Fn *)data_020e0894, 1},
    {0x62, 0xd021, 0x58, *(Unk_02083c28_Fn *)data_020e08cc, 1},
    {0x54, 0xd008, 0x4b, *(Unk_02083c28_Fn *)data_020e089c, 1},
    {0x60, 0xd015, 0x48, *(Unk_02083c28_Fn *)data_020e08b4, 1},
    {0x6c, 0xd00b, 0x46, *(Unk_02083c28_Fn *)data_020e08bc, 1},
    {0x67, 0xd020, 0x4a, *(Unk_02083c28_Fn *)data_020e08e4, 1},
};
void *data_020e08f4[2] = {(void *)Dp::func_02083644, 0};
void *data_020e091c[2] = {(void *)Dp::func_020834cc, 0};
void *data_020e08a4[2] = {(void *)Dp::Visitor_CheckTortimer, 0};
void *data_020e094c[2] = {(void *)Dp::func_02083a9c, 0};
