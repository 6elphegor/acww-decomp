#include "types.h"
#include "Unk_020d8c7c.h"

#define reg_4000358 (*(u32 *)0x4000358)
#define reg_4000008 (*(u16 *)0x4000008)

struct Vec3 {
    s32 x, y, z;
};

// local static of ScenePos_Reset; destructor in another unit
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

static inline void setVec(Vec3* o, s32 x, s32 y, s32 z) {
    o->x = x;
    o->y = y;
    o->z = z;
}

struct Bits14 {
    u8 pad : 2;
    u8 v : 6;
};

static inline BOOL is0(u8 v) {
    if (v == 0) return TRUE;
    return FALSE;
}
static inline BOOL is1(u8 v) {
    if (v == 1) return TRUE;
    return FALSE;
}

// 0x1c-byte table entry (constructor func_020b4fc4, destructor func_020b4fc0)
struct SceneWarp {
    SceneWarp();
    ~SceneWarp();
    u8 type;      // 0x00
    u8 flag;      // 0x01
    s16 unk_02;   // 0x02
    Vec3 pos;     // 0x04
    u32 unk_10;   // 0x10
    u8 unk_14;    // 0x14
    u8 unk_15;    // 0x15
    s16 unk_16;   // 0x16
    u8 unk_18;    // 0x18
};

// 0x18-byte record (constructor func_020b50a4, destructor func_020b50a0)
struct ScenePos {
    ScenePos();
    ~ScenePos();
    Vec3 pos;     // 0x00
    u32 unk_0c;   // 0x0c
    s16 unk_10;   // 0x10
    u8 unk_12;    // 0x12
    s8 unk_13;    // 0x13
    s8 unk_14;    // 0x14
};

struct TileTable {
    SceneWarp* entries;
    u8 count;
};

struct TileData {
    u32 unk_00;
    u8 f4;
    u8 pad[3];
    u32 f8;
    TileTable* table;
};

struct S2f0 { u32 f0; u8 f4; u8 pad[3]; u32 f8; u16 fc; };

// 0x28-byte block: 0x20 bytes copied from a table, then three members
struct S394 {
    u8 b[0x20];
    u8 m20;
    u8 m21;
    u16 h22;
    u16 h24;
    u8 m26;
    u8 pad27;
};

struct Unk_020cbb18_t {
    u8 unk_00[0x64];
    u32 unk_64;
    u32 f68;
};

struct Unk_020d0d28_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[2];
    u32 unk_04;
};

struct B5890 { u8 pad[0x14]; u8 lo : 2; u8 idx : 6; };

struct Unk_020b5d5c_Rec {
    void *f;
    u16 a;
    u16 b;
};

// 0x5c-byte object (constructor/destructor in another unit)
class ViewFrustum {
public:
    ViewFrustum();
    virtual ~ViewFrustum();
    u8 d[0x58];
};

// 0x28-byte object (constructor/destructor in another unit)
class TouchPicker {
public:
    TouchPicker();
    ~TouchPicker();
    u8 d[0x28];
};

// Intermediate class (vtable 0x020e2988): its virtuals are defined by another unit, ctor/dtor inline
class SceneBase : public GameProc {
public:
    SceneBase() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~SceneBase() {}
};

// Vtable 0x020e4230
class FieldScene : public SceneBase {
public:
    FieldScene() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
};

// object sFieldGfxFrameHooks: only a vtable pointer; vfunc_00/04 are defined in another unit, vfunc_08 here
class GfxFrameHooks {
public:
    virtual inline void onPreTask();
    virtual inline void onPostTask();
    virtual void onVBlank();
};

// stand-in for the owner of the six pointer-to-member targets of the vfunc_00 table
class FieldSceneSteps {
public:
    BOOL stepFinish(u32, u32);
    BOOL stepRunSceneEntries(u32, u32);
    BOOL stepCreateSceneProc(u32, u32);
    BOOL stepLoadResources(u32, u32);
    BOOL stepSetupSystems(u32, u32);
    BOOL stepEnterScene(u32, u32);
};

extern "C" {
// ---- data of other units ----
extern s32 data_020c8cc0;
extern Unk_020cbb18_t* gCommManager;
extern u16 gNextSceneProfile;
extern u8 data_021e5890[];
extern S2f0* gActorDefaultParent;
extern u8 gTouchHeld;
extern u16 gTouchX;
extern u16 gTouchY;
extern u8 gScreenTransition;
extern u8 data_021c3cb8;
extern u32 gGfxFrameHooks;
extern u32 data_021ce63c;
extern u32 gVBlanksPerFrame;
extern u8 gSceneCreating;
extern u8 data_021eda50[];
extern u8 data_021eda58[];
extern u32 gCurrentHeap;
extern u32 OVERLAY_2_ID[];
extern u8 sFishShadows[];
extern u8 data_ov006_0225b7b4[];
extern u8 data_ov054_0225b7a8[];
extern u8 data_ov005_0225b79c[];

// ---- functions of other units ----
BOOL _ZN11CommManager12isSlotActiveEi(Unk_020cbb18_t* p, u32 i);
BOOL _ZN11CommManager7isMyAidEj(Unk_020cbb18_t* p, u32 i);
void _ZN11CommManager14setMemberCountEj(void*, s32);
u32 NetArea_GetSlotScene(u32 i);
void Scene_Request(s32 a, s32 b, s32 c, s32 d);
s32 Scene_SaveFadeIn(s32 a);
u32 PlayerActor_GetResumeTransform(Vec3* a, s16* b);
void FieldPos_ToUnit(s32* a, s32* b, Vec3* c);
void FieldPos_SnapToUnitCenter(Vec3* out, Vec3* in);
void* TownBlockMap_Get();
BOOL Town_FindPlayerHouse(void* o, Vec3* v, s32* a, s32* b);
BOOL Town_FindGateHouse(void* o, Vec3* v, s32* a, s32* b);
void Clock_GetDayMonth(u8 *out);
void OverlayMgr_Release(u32 v);
void OverlayMgr_Acquire(u32 v);
void TouchPick_Cast(s32, u32, u32, u32);
void PlayerSession_SetDataIndex(s32, s32);
void PlayerSession_ClearDataIndex(s32);
void PlayerSession_SetGfxSlot(s32, s32);
s32 PlayerSession_GetDataIndex(s32);
s32 _ZN12Unk_020afaa412runSpawnListEPhS0_y(void*, void*, void*, u32, u32);
void _ZN12Unk_020afaa420createSceneMapModuleEv(void*);
s32 NetSession_GetLastSyncSlot();
void NetSession_SetLastSyncSlot(s32);
BOOL PlayerData_Get(s32);
void _ZN10PlayerData5resetEv();
s32 BgModelCache_Get();
void _ZN15BgModelCacheObj5setupEj(s32, s32);
void FtrInfo_LoadIndoor(s32);
void ItemInfo_LoadIndoor(s32);
void _ZN15TouchPickerView5resetEv();
void _ZN11TouchPicker5resetEv();
void CommCaution_Release();
s32 ResCache_Destroy();
void ResCache_Init();
void CommCaution_Init();
void Gfx_ResetScene();
void VramQueue2d_Init();
void VramQueueTex_Init();
void Gfx_DisableAllBanks();
void GX_SetBankForTex(u32);
void GX_SetBankForTexPltt(u32);
void GX_SetBankForBG(u32);
void GX_SetBankForOBJ(u32);
void GX_SetBankForSubBG(u32);
void GX_SetBankForSubOBJ(u32);
void Gfx2d_SetMainBgMode(u32);
void Gfx2d_SetSubBgMode(u32);
void TexVram_InitManagers();
void Gfx2d_ShowMainPlanes(u32);
void Gfx2d_ShowSubPlanes(u32);
void G3X_SetFog(u32, u32, u32, u32);
void G3X_SetFogTable(const void *);
void NNS_G3dGeFlushBuffer();
void FieldScene_DebugDraw();
void func_02088d58();
void Collision_UpdateDigHoles();
void func_02089118();
u64 OS_GetTick();
void Comm_ProcessReceived(s32);
void NetSession_Update();
void Field_UpdateActions();
u8 NetSession_GetActiveSyncKind();
void NetSession_SetActiveSyncKind(s32);
void ScreenTransition_ShowCover();
void Character_ResetList();
void TalkRequestQueue_StartInitial();
void ChatBalloon_DismissAll();
void Bgm_StartSceneBgm();
void Effect_ResetAll();
void func_02089124();
void Bgm_EndSceneBgm();
void PlayerActorHeap_Destroy();
void func_02081d00();
void NpcHeapPools_DestroyAll();
void NpcRegistry_Clear();
void FishBobberPool_Destroy();
void HeldItemModels_Destroy();
void PlayerPalettePool_Destroy();
void PlayerGlassesModelPool_Destroy();
void PlayerHeadBank_Destroy();
void PlayerBodyModelPool_Destroy();
void PlayerBodyWorkPool_Destroy();
void CharaFaceAnimWorkPool_Destroy();
void CharaFaceAnimPool_Destroy();
void PlayerFaceTexPool_Destroy();
void CharaClothTexPool_Destroy();
void CharaAnimCache_Destroy();
void PatternTexCache_Get();
void _ZN15PatternTexCache6unloadEv();
void FtrInfo_FreeIndoor();
void ItemInfo_FreeIndoor();
void CharaShadow_Unload();
void ObjShadow_Exit();
void _ZN12BgModelCache5resetEv();
void _ZN15PatternTexCache4loadEv();
void CharaAnimCache_Create(u32);
void CharaClothTexPool_Create(u32);
void PlayerFaceTexPool_Create(u32);
void CharaFaceAnimPool_Create(u32);
void CharaFaceAnimWorkPool_Create(u32);
void PlayerBodyWorkPool_Create(u32);
void PlayerBodyModelPool_Create(u32);
void PlayerHeadBank_Init(u32);
void PlayerPalettePool_Create(u32);
void PlayerGlassesModelPool_Create(u32);
void HeldItemModels_Init(u32);
void FishBobberPool_Create(u32);
void ObjShadow_Init(s32);
void CharaShadow_Load();
void NpcHeapPools_CreateAll();
void func_02081d08();
void PlayerActorHeap_Create(u32);
void RoomEntry_OnSceneLoad();
void NookShop_OnSceneLoad();
void TransitionCommIcon_ResumeWinOut();
void Snd_CreateScene();
}

// ---- data of this unit ----
extern "C" {
// prototypes of the unit's functions
BOOL Scene_NoPlayerInUnsharedScene(void);
u8 Scene_GetMaxFurniture(u32 i);
u8 Scene_GetMaxSpNpcs(u32 i);
u8 Scene_GetMaxCharacters(u32 i);
u8 Scene_GetMaxPlayers(u32 i);
u8 *Scene_GetWarpRequest(void);
u8 SceneWarp_GetFadeIn(SceneWarp* e);
void SceneWarp_SetFadeOut(SceneWarp* e, u8 v);
u8 SceneWarp_GetFadeOut(SceneWarp* e);
BOOL SceneWarp_HasNoPos(SceneWarp* e);
u32 SceneWarp_GetSpawnParam(SceneWarp* e);
s32 SceneWarp_GetAngle(SceneWarp* e);
Vec3* SceneWarp_GetPos(SceneWarp* e);
void FieldScene_Request(s32 a, s32 b);
u8 Scene_GetRequestedScene();
u8 SceneWarp_GetScene(u8* p);
void SceneWarp_Clear(u8* p);
void Scene_ResetTownReturnPos(s32 unused);
BOOL Scene_SetTownReturnPos(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q);
BOOL Scene_SetSavedPos(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q);
BOOL SceneExit_GetDoor(s32 unused, s32 id, u32* type, s16* s);
BOOL SceneExit_SnapPos(s32 a, s32 id, Vec3* out, Vec3* in);
BOOL SceneWarp_RequestAt(SceneWarp* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q);
BOOL SceneWarp_RequestFade(SceneWarp* e, u8 id, u8 p, u8 q);
BOOL SceneWarp_RequestScene(SceneWarp* e, u8 id);
void SceneWarp_Init(SceneWarp* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);
BOOL SceneId_IsValid(u32 id);
s32 ScenePos_GetUnitZ(ScenePos* i);
s32 ScenePos_GetUnitX(ScenePos* i);
u8 ScenePos_GetScene(ScenePos* i);
s32 ScenePos_GetAngle(ScenePos* i);
u32 ScenePos_GetSpawnParam(ScenePos* i);
Vec3* ScenePos_GetPos(ScenePos* i);
void ScenePos_Set(ScenePos* i, s32 id, Vec3* v, u32 w, s16 s, s32 p, s32 q);
void ScenePos_Reset(ScenePos* i);
u8* Scene_GetTouchPicker();
BOOL GroundSeason_IsSnow();
BOOL GroundSeason_IsSnowPhase(s32 a);
u8 Scene_GetPrevious();
u32 Scene_GetCurrent();
BOOL Scene_AllowsLetterDelivery();
BOOL SceneId_AllowsLetterDelivery(u32 a);
BOOL Scene_InTownUnk31();
BOOL SceneId_IsTownUnk31(u32 a);
BOOL Scene_InTown();
BOOL SceneId_IsTown(u32 a);
BOOL Scene_InVillagerHouse();
BOOL SceneId_IsVillagerHouse(u32 a);
s32 Scene_GetVillagerHouse();
s32 SceneId_GetVillagerHouse(u32 a);
BOOL Scene_InMuseumRoom();
BOOL SceneId_IsMuseumRoom(u32 a);
s32 Scene_GetMuseumRoom();
s32 SceneId_GetMuseumRoom(u32 a);
BOOL Scene_InNookShop();
BOOL SceneId_IsNookShop(u32 a);
void Scene_SavePlayerPos(s32 unused, s32 add);
s32 SceneExit_ResolveSpecial(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q);
s32 SceneExit_Resolve(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy);
BOOL SceneWarp_RequestExit(s32 a, s32 id);
s32 Scene_GetNookShop(void);
s32 SceneId_GetNookShop(u32 x);
BOOL Scene_InUnk6Or7(void);
BOOL SceneId_IsUnk6Or7(s32 x);
BOOL Scene_InUnk6To8(void);
BOOL SceneId_IsUnk6To8(s32 x);
BOOL Scene_InHouseRoom(void);
BOOL SceneId_IsHouseRoom(s32 x);
s32 Scene_GetHouseRoom(void);
s32 SceneId_GetHouseRoom(u32 x);
u32 Scene_GetMapInfo(void);
u8 Scene_GetSkyKind(BOOL a);
void Fog_SetTable(s32 unused, u8* src);
void Fog_SetOffset(u16 v);
void Fog_SetAlpha(u32 v);
s32 Scene_ShutdownGraphics(void);
void Scene_SetupGraphics(void);
void Fog_Apply(s32 unused);
void Fog_InitDefault(s32 a);
u16 GroundSeason_GetColor(void);
u32 GroundSeason_CalcPhase(void);
void FieldScene_ReleaseOverlays(void);
void FieldScene_AcquireOverlays(void);
void FieldScene_ReleaseInfoOverlays(void);
void FieldScene_AcquireInfoOverlays(u8 *obj);
void FieldScene_ReleaseOv002(void);
void FieldScene_AcquireOv002(void);
FieldScene *FieldScene_Create(void);
}

extern const u16 sGroundSeasonColors[12];
extern const u8 sSceneMaxFurniture[0x34];
extern const u8 sSceneMaxPlayers[0x34];
extern const u8 sSceneSkyKinds[0x34];
extern const u8 sSceneMaxCharacters[0x34];
extern const u8 sSceneMaxSpNpcs[0x34];
extern const Unk_020d0d28_Ent sGroundSeasonDates[13];
extern u8 sDefaultFogTable[0x20];
extern u8 sSceneFieldKinds[0x34];
extern s32 sSceneOverlayIds[51];
extern u8 gFieldSceneKind;
extern u8 sCurSceneId;
extern u8 sPrevSceneId;
extern s32 sInfoOverlayA;
extern s32 sFieldOverlay;
extern s32 sInfoOverlayB;
extern s32 sSceneOverlay;
extern u32 sFieldOverlayIds[2];
extern TileData *sSceneInfoTable[51];
extern TileData *gCurSceneInfo;
extern u8 data_021ef2d4;
extern GfxFrameHooks sFieldGfxFrameHooks;
extern u32 sOverlaySceneId;
extern ScenePos sSavedScenePos;
extern ScenePos gTownReturnPos;
extern SceneWarp sSceneWarpRequest;
extern S394 sFogState;
extern TouchPicker sTouchPicker;
extern ViewFrustum gViewFrustum;































u8 sDefaultFogTable[0x20] = {
    0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x15, 0x19, 0x1d, 0x21, 0x25,
    0x2a, 0x2e, 0x32, 0x36, 0x3a, 0x3f, 0x43, 0x47, 0x49, 0x4b, 0x4d, 0x4d, 0x4e, 0x4e, 0x4f, 0x4f,
};

GfxFrameHooks sFieldGfxFrameHooks;

ViewFrustum gViewFrustum;

TileData *sSceneInfoTable[51] = {
    (TileData *)data_ov006_0225b7b4,
    (TileData *)(sFishShadows + 0xb08),
    (TileData *)(sFishShadows + 0x968),
    (TileData *)(sFishShadows + 0x968),
    (TileData *)(sFishShadows + 0x968),
    (TileData *)(sFishShadows + 0x9a8),
    (TileData *)(sFishShadows + 0x908),
    (TileData *)(sFishShadows + 0x900),
    (TileData *)(sFishShadows + 0x914),
    (TileData *)(sFishShadows + 0x94c),
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0x9cc),
    (TileData *)(sFishShadows + 0x9cc),
    (TileData *)(sFishShadows + 0x9cc),
    (TileData *)(sFishShadows + 0x9cc),
    (TileData *)(sFishShadows + 0x958),
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0xaa4),
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0x9e4),
    (TileData *)(sFishShadows + 0x9a4),
    (TileData *)(sFishShadows + 0x97c),
    (TileData *)(sFishShadows + 0xb20),
    (TileData *)(sFishShadows + 0x97c),
    (TileData *)(sFishShadows + 0x978),
    (TileData *)(sFishShadows + 0x9ec),
    (TileData *)(sFishShadows + 0x9ac),
    (TileData *)(sFishShadows + 0x9c8),
    (TileData *)(sFishShadows + 0x968),
    (TileData *)(sFishShadows + 0x9f0),
    (TileData *)(sFishShadows + 0x9ac),
    (TileData *)(sFishShadows + 0x97c),
    (TileData *)data_ov054_0225b7a8,
    (TileData *)data_ov005_0225b79c,
    (TileData *)data_ov005_0225b79c,
    (TileData *)(sFishShadows + 0x95c),
    (TileData *)(sFishShadows + 0x9a8),
    (TileData *)(sFishShadows + 0x988),
    (TileData *)(sFishShadows + 0x918),
    (TileData *)data_ov006_0225b7b4,
    (TileData *)(sFishShadows + 0x9a0),
};

s32 sSceneOverlayIds[51] = {
    5, 32, 31, 34, 33, 35, 11, 12,
    10, 36, 43, 15, 15, 15, 15, 14,
    17, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 38, 39, 40, 41, 42, 13,
    21, 20, 19, 22, 23, 24, 25, 26,
    27, 28, 7, 8, 6, 44, 37, 16,
    30, 5, 18,
};

TouchPicker sTouchPicker;

TileData *gCurSceneInfo;

SceneWarp sSceneWarpRequest;

const u16 sGroundSeasonColors[12] = {
    0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fdd,
    0x7fba, 0x7f98, 0x7f98, 0x7bbc,
};

u32 sFieldOverlayIds[2] = {3, 4};

s32 sInfoOverlayB = -1;

s32 sFieldOverlay = -1;

u8 sPrevSceneId = 0x3f;

const u8 sSceneMaxCharacters[0x34] = {
    0x05, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02,
    0x02, 0x05, 0x05, 0x00,
};

const u8 sSceneMaxSpNpcs[0x34] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04,
    0x01, 0x01, 0x01, 0x00,
};

s32 sSceneOverlay = -1;

u32 sOverlaySceneId;

u8 sCurSceneId = 0x3f;

ScenePos sSavedScenePos;

S394 sFogState;

ScenePos gTownReturnPos;

const u8 sSceneMaxFurniture[0x34] = {
    0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x08, 0x01, 0x0e, 0x01, 0x01, 0x01, 0x01, 0x0a,
    0x01, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x05,
    0x01, 0x04, 0x04, 0x01, 0x01, 0x1c, 0x1c, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x00, 0x01, 0x00,
};

u8 data_021ef2d4;

const u8 sSceneMaxPlayers[0x34] = {
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x02, 0x04, 0x02,
    0x01, 0x04, 0x04, 0x00,
};

u8 sSceneFieldKinds[0x34] = {
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x00, 0x01, 0x00,
};

Unk_020b5d5c_Rec sFieldSceneProfile = {(void *)FieldScene_Create, 6, 0xd4};

const u8 sSceneSkyKinds[0x34] = {
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00,
};

u8 gFieldSceneKind = 2;

s32 sInfoOverlayA = -1;

const Unk_020d0d28_Ent sGroundSeasonDates[13] = {
    {2, 0x03, {0, 0}, 9}, {2, 0x11, {0, 0}, 0xa}, {2, 0x18, {0, 0}, 0xb}, {3, 0x1f, {0, 0}, 0},
    {7, 0x16, {0, 0}, 1}, {9, 0x0f, {0, 0}, 2}, {9, 0x1e, {0, 0}, 3}, {0xa, 0x10, {0, 0}, 4},
    {0xa, 0x1e, {0, 0}, 5}, {0xb, 0x0d, {0, 0}, 6}, {0xb, 0x19, {0, 0}, 7}, {0xc, 0x0a, {0, 0}, 8},
    {0xc, 0x1f, {0, 0}, 9},
};

extern "C" FieldScene *FieldScene_Create(void) {
    return new FieldScene();
}

extern "C" void FieldScene_AcquireOv002(void) { OverlayMgr_Acquire((u32)OVERLAY_2_ID); }

extern "C" void FieldScene_ReleaseOv002(void) { OverlayMgr_Release((u32)OVERLAY_2_ID); }

extern "C" void FieldScene_AcquireInfoOverlays(u8 *obj) {
    s32 a = *(s32 *)(obj + 0x10);
    sInfoOverlayA = a;
    sInfoOverlayB = *(s32 *)(obj + 0x14);
    if (a != -1) {
        OverlayMgr_Acquire(a);
    }
    if (sInfoOverlayB != -1) {
        OverlayMgr_Acquire(sInfoOverlayB);
    }
}

extern "C" void FieldScene_ReleaseInfoOverlays(void) {
    if (sInfoOverlayA != -1) {
        OverlayMgr_Release(sInfoOverlayA);
        sInfoOverlayA = -1;
    }
    if (sInfoOverlayB != -1) {
        OverlayMgr_Release(sInfoOverlayB);
        sInfoOverlayB = -1;
    }
}

extern "C" void FieldScene_AcquireOverlays(void) {
    u8 idx = sSceneFieldKinds[sOverlaySceneId];
    u32 v = sFieldOverlayIds[idx];
    OverlayMgr_Acquire(v);
    sFieldOverlay = v;
    gFieldSceneKind = idx;
    if (sSceneOverlayIds[sOverlaySceneId] != -1) {
        OverlayMgr_Acquire(sSceneOverlayIds[sOverlaySceneId]);
        sSceneOverlay = sSceneOverlayIds[sOverlaySceneId];
    }
}

extern "C" void FieldScene_ReleaseOverlays(void) {
    FieldScene_ReleaseInfoOverlays();
    if (sSceneOverlay != -1) {
        OverlayMgr_Release(sSceneOverlay);
        sSceneOverlay = -1;
    }
    if (sFieldOverlay != -1) {
        OverlayMgr_Release(sFieldOverlay);
        sFieldOverlay = -1;
    }
}

// ----- 0x020b5bbc -----
extern "C" u32 GroundSeason_CalcPhase(void) {
    u8 buf[2];
    Clock_GetDayMonth(buf);
    u32 a = buf[1];
    u32 b = buf[0];
    for (u32 i = 0; i < 13; i++) {
        u32 t = sGroundSeasonDates[i].unk_00;
        if (a < t) {
            return sGroundSeasonDates[i].unk_04;
        }
        if (a == t && b <= sGroundSeasonDates[i].unk_01) {
            return sGroundSeasonDates[i].unk_04;
        }
    }
    return 0;
}

extern "C" u16 GroundSeason_GetColor(void) {
    s32 idx = ((struct B5890*)data_021e5890)->idx;
    if (idx < 0xc) return sGroundSeasonColors[idx];
    return sGroundSeasonColors[0];
}

BOOL FieldSceneSteps::stepEnterScene(u32, u32) {
    ScreenTransition_ShowCover();
    u8 m = sCurSceneId;
    u8 r0 = NetSession_GetActiveSyncKind();
    if (m == 0x2e || m == 0xd || m == 0xc || m == 0xe || m == 0x2f) {
        if (r0 != 4) NetSession_SetActiveSyncKind(4);
    }
    Character_ResetList();
    sPrevSceneId = sCurSceneId;
    sCurSceneId = SceneWarp_GetScene((u8*)&sSceneWarpRequest);
    FieldScene_AcquireOv002();
    gGfxFrameHooks = (u32)&sFieldGfxFrameHooks;
    Scene_GetTouchPicker();
    _ZN15TouchPickerView5resetEv();
    data_021ef2d4 = 0;
    sOverlaySceneId = sCurSceneId;
    FieldScene_AcquireOverlays();
    gCurSceneInfo = sSceneInfoTable[sCurSceneId];
    FieldScene_AcquireInfoOverlays((u8 *)gCurSceneInfo);
    return TRUE;
}

BOOL FieldSceneSteps::stepSetupSystems(u32, u32) {
    Scene_SetupGraphics();
    ScreenTransition_ShowCover();
    TransitionCommIcon_ResumeWinOut();
    Snd_CreateScene();
    Unk_020cbb18_t* p = gCommManager;
    s32 i;
    if (_ZN11CommManager12isSlotActiveEi(p, p->unk_64)) {
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, 4);
    } else if (Scene_InUnk6Or7()) {
        _ZN11CommManager14setMemberCountEj(p, 4);
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, i);
    } else {
        _ZN11CommManager14setMemberCountEj(p, 1);
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, 4);
    }
    if (Scene_InUnk6Or7()) {
        if (Scene_GetCurrent() == 6) {
            p->f68 = 4;
            for (i = 3; i >= 0; i--) PlayerSession_SetDataIndex(i, i);
        } else if (Scene_GetCurrent() == 7) {
            s32 a = p->f68;
            s32 b = PlayerSession_GetDataIndex(a);
            s32 c = 0;
            for (i = 3; i >= 0; i--) {
                if (i != a) {
                    if (c == b) c++;
                    PlayerSession_SetDataIndex(i, c);
                    c++;
                }
            }
        }
    } else if (Scene_GetCurrent() == 0x2c) {
        Unk_020cbb18_t* q = gCommManager;
        q->unk_64 = 4;
        q->f68 = 4;
        for (i = 3; i >= 0; i--) PlayerSession_ClearDataIndex(i);
    }
    return TRUE;
}

BOOL FieldSceneSteps::stepLoadResources(u32, u32) {
    s32 t = BgModelCache_Get();
    _ZN15BgModelCacheObj5setupEj(t, gCurSceneInfo->f4 == 1 ? TRUE : FALSE);
    FtrInfo_LoadIndoor(gCurSceneInfo->f4 == 1 ? TRUE : FALSE);
    ItemInfo_LoadIndoor(gCurSceneInfo->f4 == 1 ? TRUE : FALSE);
    PatternTexCache_Get();
    _ZN15PatternTexCache4loadEv();
    CharaAnimCache_Create(gCurrentHeap);
    CharaClothTexPool_Create(gCurrentHeap);
    PlayerFaceTexPool_Create(gCurrentHeap);
    CharaFaceAnimPool_Create(gCurrentHeap);
    CharaFaceAnimWorkPool_Create(gCurrentHeap);
    PlayerBodyWorkPool_Create(gCurrentHeap);
    PlayerBodyModelPool_Create(gCurrentHeap);
    PlayerHeadBank_Init(gCurrentHeap);
    PlayerPalettePool_Create(gCurrentHeap);
    PlayerGlassesModelPool_Create(gCurrentHeap);
    HeldItemModels_Init(gCurrentHeap);
    FishBobberPool_Create(gCurrentHeap);
    ObjShadow_Init(gCurSceneInfo->f4 == 1 ? TRUE : FALSE);
    CharaShadow_Load();
    NpcHeapPools_CreateAll();
    func_02081d08();
    NpcRegistry_Clear();
    PlayerActorHeap_Create(gCurrentHeap);
    RoomEntry_OnSceneLoad();
    if (Scene_GetCurrent() == 0x2c || Scene_GetCurrent() == 0x2d) {
        Scene_ResetTownReturnPos((s32)Scene_GetWarpRequest());
    }
    NookShop_OnSceneLoad();
    return TRUE;
}

BOOL FieldSceneSteps::stepCreateSceneProc(u32, u32) {
    _ZN12Unk_020afaa420createSceneMapModuleEv((void*)gCurSceneInfo);
    return TRUE;
}

BOOL FieldSceneSteps::stepRunSceneEntries(u32 a, u32 b) {
    return _ZN12Unk_020afaa412runSpawnListEPhS0_y((void*)gCurSceneInfo, data_021eda50, data_021eda58, a, b);
}

BOOL FieldSceneSteps::stepFinish(u32, u32) {
    Fog_InitDefault((s32)this);
    Effect_ResetAll();
    reg_4000008 = (reg_4000008 & ~3) | 2;
    func_02089124();
    data_021ce63c = 0;
    SceneWarp_Clear((u8*)&sSceneWarpRequest);
    gVBlanksPerFrame = 3;
    TalkRequestQueue_StartInitial();
    if (Scene_GetCurrent() == 0x2e || Scene_GetCurrent() == 0xd || Scene_GetCurrent() == 0x2f)
        ChatBalloon_DismissAll();
    Bgm_StartSceneBgm();
    return TRUE;
}

BOOL FieldScene::vfunc_00() {
    FieldSceneSteps* self = (FieldSceneSteps*)this;
    typedef BOOL (FieldSceneSteps::*M)(u32, u32);
    static M tbl[6] = {
        &FieldSceneSteps::stepEnterScene, &FieldSceneSteps::stepSetupSystems, &FieldSceneSteps::stepLoadResources,
        &FieldSceneSteps::stepCreateSceneProc, &FieldSceneSteps::stepRunSceneEntries, &FieldSceneSteps::stepFinish,
    };
    u64 start = OS_GetTick();
    u32 fail = 0;
    for (;;) {
        u32 idx = gSceneCreating - 1;
        if (idx >= 6) break;
        if ((self->*tbl[idx])((u32)start, (u32)(start >> 32))) {
            gSceneCreating++;
            if (gSceneCreating > 6) break;
            u64 now = OS_GetTick();
            u64 d = (now - start) << 6;
            if ((u32)(d / 0x82ea) > 0x28) {
                fail = 1;
                break;
            }
        } else {
            fail = 1;
            break;
        }
    }
    if (fail) {
        Comm_ProcessReceived(0);
        NetSession_Update();
        Field_UpdateActions();
        return -1;
    }
    return 1;
}

BOOL FieldScene::vfunc_0c() {
    Bgm_EndSceneBgm();
    Scene_GetTouchPicker();
    _ZN11TouchPicker5resetEv();
    gGfxFrameHooks = 0;
    PlayerActorHeap_Destroy();
    func_02081d00();
    NpcHeapPools_DestroyAll();
    NpcRegistry_Clear();
    FishBobberPool_Destroy();
    HeldItemModels_Destroy();
    PlayerPalettePool_Destroy();
    PlayerGlassesModelPool_Destroy();
    PlayerHeadBank_Destroy();
    PlayerBodyModelPool_Destroy();
    PlayerBodyWorkPool_Destroy();
    CharaFaceAnimWorkPool_Destroy();
    CharaFaceAnimPool_Destroy();
    PlayerFaceTexPool_Destroy();
    CharaClothTexPool_Destroy();
    CharaAnimCache_Destroy();
    PatternTexCache_Get();
    _ZN15PatternTexCache6unloadEv();
    FtrInfo_FreeIndoor();
    ItemInfo_FreeIndoor();
    CharaShadow_Unload();
    ObjShadow_Exit();
    BgModelCache_Get();
    _ZN12BgModelCache5resetEv();
    Scene_ShutdownGraphics();
    data_021ce63c = 0;
    if (Scene_GetCurrent() == 6) {
        u32 i = 0;
        Unk_020cbb18_t* p = gCommManager;
        for (; i < 4; i++) {
            if (i == 0) {
                PlayerSession_SetDataIndex(0, p->f68);
                p->f68 = 0;
            } else {
                PlayerSession_ClearDataIndex(i);
            }
        }
    } else if (Scene_GetCurrent() == 7) {
        s32 i = 2;
        for (; i >= 0; i--) PlayerSession_ClearDataIndex(i + 1);
    } else if (Scene_GetCurrent() == 0xe) {
        s32 v = NetSession_GetLastSyncSlot();
        if (v > 0 && v < 4) {
            if (PlayerData_Get(v + 3)) _ZN10PlayerData5resetEv();
            PlayerSession_ClearDataIndex(v);
        }
        NetSession_SetLastSyncSlot(4);
    }
    FieldScene_ReleaseOverlays();
    gCurSceneInfo = 0;
    FieldScene_ReleaseOv002();
    gFieldSceneKind = 2;
    return TRUE;
}

BOOL FieldScene::onExecute() {
    Collision_UpdateDigHoles();
    func_02089118();
    BOOL b;
    if (gScreenTransition == 2) b = TRUE; else b = FALSE;
    if (!b && data_021c3cb8 == 0) return TRUE;
    if (SceneId_IsValid(SceneWarp_GetScene((u8*)&sSceneWarpRequest))) {
        s32 r4 = SceneWarp_GetFadeOut((SceneWarp*)Scene_GetWarpRequest());
        FieldScene_Request(r4, SceneWarp_GetFadeIn((SceneWarp*)Scene_GetWarpRequest()));
    }
    return TRUE;
}

BOOL FieldScene::onDraw() {
    Fog_Apply((s32)this);
    NNS_G3dGeFlushBuffer();
    s32 r0 = (s32)Scene_GetTouchPicker();
    TouchPick_Cast(r0, (u8)gTouchX, (u8)gTouchY, gTouchHeld ? 1 : 0);
    FieldScene_DebugDraw();
    func_02088d58();
    return TRUE;
}

BOOL FieldScene::vfunc_30() {}

extern "C" void Fog_InitDefault(s32 a) {
    Fog_SetTable(a, sDefaultFogTable);
    BOOL b;
    if (gFieldSceneKind == 1) b = TRUE; else b = FALSE;
    if (b) sFogState.m20 = 0;
    else sFogState.m20 = 1;
    sFogState.m21 = 8;
    sFogState.h22 = 0xd2;
    sFogState.h24 = 0x7fff;
    sFogState.m26 = 0;
    Fog_Apply(a);
}

extern "C" void Fog_Apply(s32 unused) {
    S394* a = &sFogState;
    G3X_SetFog(a->m20, 1, a->m21, a->h22);
    reg_4000358 = a->h24 | (a->m26 << 16);
    G3X_SetFogTable(a);
}

extern "C" void Scene_SetupGraphics(void) {
    Gfx_ResetScene();
    VramQueue2d_Init();
    VramQueueTex_Init();
    Gfx_DisableAllBanks();
    GX_SetBankForTex(7);
    GX_SetBankForTexPltt(0x10);
    GX_SetBankForBG(0x20);
    GX_SetBankForOBJ(0x40);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0x100);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xffcfffef;
    *(volatile u32 *)0x4001000 = *(volatile u32 *)0x4001000 & 0xffcfffef;
    Gfx2d_SetMainBgMode(0);
    Gfx2d_SetSubBgMode(1);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xc7ffffff;
    TexVram_InitManagers();
    Gfx2d_ShowMainPlanes(0x11);
    Gfx2d_ShowSubPlanes(0x10);
    ResCache_Init();
    CommCaution_Init();
}

extern "C" s32 Scene_ShutdownGraphics(void) { CommCaution_Release(); return ResCache_Destroy(); }

extern "C" void Fog_SetAlpha(u32 v) { sFogState.m26 = v & 0x1f; }

extern "C" void Fog_SetOffset(u16 v) { sFogState.h22 = v; }

extern "C" void Fog_SetTable(s32 unused, u8* src) {
    u8* dst = (u8*)&sFogState;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        *dst = *src;
        dst++; src++;
    }
}

// ----- member functions and constructors -----
void GfxFrameHooks::onVBlank() {}

extern "C" u8 Scene_GetSkyKind(BOOL a) {
    u8 r = 0;
    if (gActorDefaultParent != NULL) {
        u16 x = gActorDefaultParent->fc;
        BOOL c3 = TRUE;
        BOOL c2 = TRUE;
        u8 m = gFieldSceneKind;
        BOOL LampLights = (m == 0) ? TRUE : FALSE;
        if (!LampLights) {
            BOOL LightLevel = (m == 1) ? TRUE : FALSE;
            if (!LightLevel) c2 = FALSE;
        }
        if (!c2) {
            if (!a || x != 5) c3 = FALSE;
        }
        if (c3) {
            s32 idx = Scene_GetCurrent();
            if (SceneId_IsValid(idx)) r = sSceneSkyKinds[idx];
        }
    }
    return r;
}

extern "C" u32 Scene_GetMapInfo(void) {
    u32 r = 0;
    if (gCurSceneInfo != NULL) r = gCurSceneInfo->f8;
    return r;
}

extern "C" s32 SceneId_GetHouseRoom(u32 x) {
    if (x >= 1 && x <= 5) return x - 1;
    return -1;
}

extern "C" s32 Scene_GetHouseRoom(void) { return SceneId_GetHouseRoom(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsHouseRoom(s32 x) {
    s32 v = SceneId_GetHouseRoom(x);
    BOOL r = FALSE;
    if (v != -1) r = TRUE;
    return r;
}

extern "C" BOOL Scene_InHouseRoom(void) { return SceneId_IsHouseRoom(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsUnk6To8(s32 x) {
    if ((u8)(x + 0xfa) <= 2) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InUnk6To8(void) { return SceneId_IsUnk6To8(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsUnk6Or7(s32 x) {
    switch (x) {
    case 6:
    case 7:
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Scene_InUnk6Or7(void) { return SceneId_IsUnk6Or7(Scene_GetCurrent()); }

extern "C" s32 SceneId_GetNookShop(u32 x) {
    if (x >= 0x1a && x <= 0x1f) return x - 0x1a;
    return -1;
}

// ----- 0x020b5284 -----
extern "C" s32 Scene_GetNookShop(void) { return SceneId_GetNookShop(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsNookShop(u32 a) {
    if (SceneId_GetNookShop(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InNookShop() { return SceneId_IsNookShop(Scene_GetCurrent()); }

extern "C" s32 SceneId_GetMuseumRoom(u32 a) {
    if (a >= 0x20 && a <= 0x29) return a - 0x20;
    return -1;
}

extern "C" s32 Scene_GetMuseumRoom() { return SceneId_GetMuseumRoom(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsMuseumRoom(u32 a) {
    if (SceneId_GetMuseumRoom(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InMuseumRoom() { return SceneId_IsMuseumRoom(Scene_GetCurrent()); }

extern "C" s32 SceneId_GetVillagerHouse(u32 a) {
    if (a >= 0x11 && a <= 0x18) return a - 0x11;
    return -1;
}

extern "C" s32 Scene_GetVillagerHouse() { return SceneId_GetVillagerHouse(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsVillagerHouse(u32 a) {
    if (SceneId_GetVillagerHouse(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InVillagerHouse() { return SceneId_IsVillagerHouse(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsTown(u32 a) {
    if (a == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InTown() { return SceneId_IsTown(Scene_GetCurrent()); }

extern "C" BOOL SceneId_IsTownUnk31(u32 a) {
    if (a == 0x31) return TRUE;
    return FALSE;
}

extern "C" BOOL Scene_InTownUnk31() { return SceneId_IsTownUnk31(Scene_GetCurrent()); }

extern "C" BOOL SceneId_AllowsLetterDelivery(u32 a) {
    if (SceneId_IsUnk6To8(a) || a == 0x2c || a == 0x2d || a == 0x2e || a == 0x2f || (u8)(a + 0xf4) <= 2) return FALSE;
    return TRUE;
}

extern "C" BOOL Scene_AllowsLetterDelivery() {
    u8 v = gFieldSceneKind;
    if (is0(v) || is1(v)) return SceneId_AllowsLetterDelivery(Scene_GetCurrent());
    return FALSE;
}

extern "C" u32 Scene_GetCurrent() { return sCurSceneId; }

extern "C" u8 Scene_GetPrevious() { return sPrevSceneId; }

extern "C" BOOL GroundSeason_IsSnowPhase(s32 a) {
    if (a < 9) return FALSE;
    return TRUE;
}

extern "C" BOOL GroundSeason_IsSnow() { return GroundSeason_IsSnowPhase(((Bits14*)&data_021e5890[0x14])->v); }

extern "C" u8* Scene_GetTouchPicker() { return (u8*)&sTouchPicker; }

ScenePos::ScenePos() { ScenePos_Reset(this); }

ScenePos::~ScenePos() {}


extern "C" void ScenePos_Reset(ScenePos* i) {
    static FxVec3 v(0x30000, 0, 0x30000);
    ScenePos_Set(i, 0, (Vec3*)&v, 0x800000, 0, -1, -1);
}

extern "C" void ScenePos_Set(ScenePos* i, s32 id, Vec3* v, u32 w, s16 s, s32 p, s32 q) {
    i->unk_12 = id;
    i->pos.x = v->x;
    i->pos.y = v->y;
    i->pos.z = v->z;
    i->unk_0c = w;
    i->unk_10 = s;
    i->unk_13 = p;
    i->unk_14 = q;
}

extern "C" Vec3* ScenePos_GetPos(ScenePos* i) { return &i->pos; }

extern "C" u32 ScenePos_GetSpawnParam(ScenePos* i) { return i->unk_0c; }

extern "C" s32 ScenePos_GetAngle(ScenePos* i) { return i->unk_10; }

extern "C" u8 ScenePos_GetScene(ScenePos* i) { return i->unk_12; }

extern "C" s32 ScenePos_GetUnitX(ScenePos* i) { return i->unk_13; }

extern "C" s32 ScenePos_GetUnitZ(ScenePos* i) { return i->unk_14; }

extern "C" BOOL SceneId_IsValid(u32 id) {
    if (id < 0x33) return TRUE;
    return FALSE;
}

SceneWarp::SceneWarp() {
    type = 0x3f;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    unk_10 = 0;
    unk_02 = 0;
    flag = 1;
    unk_14 = 2;
    unk_15 = 2;
    unk_16 = 0;
    unk_18 = 0;
}

SceneWarp::~SceneWarp() {}

extern "C" void SceneWarp_Init(SceneWarp* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t) {
    e->type = id;
    e->pos.x = v->x;
    e->pos.y = v->y;
    e->pos.z = v->z;
    e->unk_10 = w;
    e->unk_02 = s;
    e->unk_14 = p;
    e->unk_15 = q;
    e->unk_16 = r;
    e->unk_18 = t;
}

extern "C" BOOL SceneWarp_RequestScene(SceneWarp* e, u8 id) {
    if (e->type == 0x3f) {
        e->type = id;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL SceneWarp_RequestFade(SceneWarp* e, u8 id, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->unk_14 = p;
        e->unk_15 = q;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL SceneWarp_RequestAt(SceneWarp* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->pos.x = v->x;
        e->pos.y = v->y;
        e->pos.z = v->z;
        e->unk_10 = w;
        e->unk_02 = s;
        e->flag = 0;
        e->unk_14 = p;
        e->unk_15 = q;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 SceneExit_ResolveSpecial(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q) {
    if (id != -1) {
        TileData* d = gCurSceneInfo;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                SceneWarp* entries = t->entries;
                if (entries) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        SceneWarp* e = &entries[id];
                        void* o = TownBlockMap_Get();
                        s32 va, vb;
                        Vec3 v;
                        switch (entries[id].type) {
                        case 0x3e:
                            if (Town_FindPlayerHouse(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3d:
                            if (Town_FindGateHouse(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3f:
                            *type = ScenePos_GetScene(&sSavedScenePos);
                            {
                                Vec3* src = ScenePos_GetPos(&sSavedScenePos);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = ScenePos_GetSpawnParam(&sSavedScenePos);
                            *s = ScenePos_GetAngle(&sSavedScenePos);
                            *x = ScenePos_GetUnitX(&sSavedScenePos);
                            *y = ScenePos_GetUnitZ(&sSavedScenePos);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 2;
                        case 0x3c:
                            *type = ScenePos_GetScene(&gTownReturnPos);
                            {
                                Vec3* src = ScenePos_GetPos(&gTownReturnPos);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = ScenePos_GetSpawnParam(&gTownReturnPos);
                            *s = ScenePos_GetAngle(&gTownReturnPos);
                            *x = ScenePos_GetUnitX(&gTownReturnPos);
                            *y = ScenePos_GetUnitZ(&gTownReturnPos);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 3;
                        default:
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

extern "C" s32 SceneExit_Resolve(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy) {
    s32 x, y;
    s32 r = SceneExit_ResolveSpecial(a, id, type, pos, w, s, &x, &y, p, q);
    if (ox) *ox = x;
    if (oy) *oy = y;
    if (r == 1) {
        if (id != -1) {
            TileData* d = gCurSceneInfo;
            if (d) {
                TileTable* t = d->table;
                if (t) {
                    SceneWarp* entries = t->entries;
                    if (entries) {
                        u8 n = t->count;
                        if (id >= 0 && id < n) {
                            SceneWarp* e = &entries[id];
                            u8 ty = e->type;
                            if (e->pos.y == 0) e->pos.y = 0x200;
                            if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) && ty == 7) ty = 8;
                            *type = ty;
                            pos->x = e->pos.x;
                            pos->y = e->pos.y;
                            pos->z = e->pos.z;
                            *w = e->unk_10;
                            *s = e->unk_02;
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return r;
                        }
                    }
                }
            }
        }
        return 0;
    }
    return r;
}

extern "C" BOOL SceneWarp_RequestExit(s32 a, s32 id) {
    u8 t, u, v;
    s16 s;
    s32 w, x, y;
    Vec3 vec;
    s32 r = SceneExit_Resolve(a, id, &t, &vec, (u32*)&w, &s, &u, &v, &x, &y);
    switch (r) {
    case 0:
        goto fail;
    case 2:
        ScenePos_Set(&sSavedScenePos, t, &vec, w, s, x, y);
        break;
    case 3:
        ScenePos_Set(&gTownReturnPos, t, &vec, w, s, x, y);
        break;
    }
    if (SceneWarp_RequestAt((SceneWarp*)a, t, &vec, w, s, u, v)) return TRUE;
fail:
    return FALSE;
}

extern "C" BOOL SceneExit_GetDoor(s32 unused, s32 id, u32* type, s16* s) {
    *type = 0;
    *s = 0;
    if (id != -1) {
        TileData* d = gCurSceneInfo;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                SceneWarp* e = t->entries;
                if (e) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        SceneWarp* p = &e[id];
                        if (type) *type = p->unk_18;
                        if (s) *s = p->unk_16;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL SceneExit_SnapPos(s32 a, s32 id, Vec3* out, Vec3* in) {
    u32 type;
    s16 s;
    Vec3 t;
    if (SceneExit_GetDoor(a, id, &type, &s)) {
        FieldPos_SnapToUnitCenter(&t, in);
        setVec(out, t.x, in->y, t.z);
        if (s == 0 || s == -0x8000) {
            out->x = in->x;
            return TRUE;
        } else if (s == 0x4000 || s == -0x4000) {
            out->z = in->z;
            return TRUE;
        }
        return TRUE;
    }
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    return FALSE;
}

extern "C" BOOL Scene_SetSavedPos(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (SceneId_IsValid(id)) {
        ScenePos_Set(&sSavedScenePos, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}


extern "C" void Scene_SavePlayerPos(s32 unused, s32 add) {
    static s32 minZ = data_020c8cc0 + 0x1000;
    s16 s;
    s32 p, q;
    Vec3 v;
    u32 r = PlayerActor_GetResumeTransform(&v, &s);
    p = 0;
    q = 0;
    FieldPos_ToUnit(&p, &q, &v);
    if (Scene_GetCurrent() == 0xb && v.z < minZ) v.z = minZ;
    v.z += add;
    Scene_SetSavedPos((s32)Scene_GetWarpRequest(), Scene_GetCurrent(), &v, (r << 22) & 0x3fc00000, s, p, q);
}


extern "C" BOOL Scene_SetTownReturnPos(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (SceneId_IsValid(id)) {
        ScenePos_Set(&gTownReturnPos, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}

extern "C" void Scene_ResetTownReturnPos(s32 unused) { ScenePos_Reset(&gTownReturnPos); }

extern "C" void SceneWarp_Clear(u8* p) { *p = 0x3f; }

extern "C" u8 SceneWarp_GetScene(u8* p) { return *p; }

extern "C" u8 Scene_GetRequestedScene() { return SceneWarp_GetScene((u8*)Scene_GetWarpRequest()); }

extern "C" void FieldScene_Request(s32 a, s32 b) {
    if (gNextSceneProfile != 5) {
        Scene_Request(5, a, 3, 1);
        Scene_SaveFadeIn(b);
    }
}

extern "C" Vec3* SceneWarp_GetPos(SceneWarp* e) { return &e->pos; }

extern "C" s32 SceneWarp_GetAngle(SceneWarp* e) { return e->unk_02; }

extern "C" u32 SceneWarp_GetSpawnParam(SceneWarp* e) { return e->unk_10; }

extern "C" BOOL SceneWarp_HasNoPos(SceneWarp* e) {
    if (e->flag != 0) return TRUE;
    return FALSE;
}

extern "C" u8 SceneWarp_GetFadeOut(SceneWarp* e) { return e->unk_14; }

extern "C" void SceneWarp_SetFadeOut(SceneWarp* e, u8 v) { e->unk_14 = v; }

extern "C" u8 SceneWarp_GetFadeIn(SceneWarp* e) { return e->unk_15; }

extern "C" u8 *Scene_GetWarpRequest(void) { return (u8 *)&sSceneWarpRequest; }

extern "C" u8 Scene_GetMaxPlayers(u32 i) { return sSceneMaxPlayers[i]; }

extern "C" u8 Scene_GetMaxCharacters(u32 i) { return sSceneMaxCharacters[i]; }

extern "C" u8 Scene_GetMaxSpNpcs(u32 i) { return sSceneMaxSpNpcs[i]; }

extern "C" u8 Scene_GetMaxFurniture(u32 i) { return sSceneMaxFurniture[i]; }

// ---- code ----

// ----- 0x020b4828 -----
extern "C" BOOL Scene_NoPlayerInUnsharedScene(void) {
    u32 v;
    s32 i;
    Unk_020cbb18_t *p = gCommManager;
    if (!_ZN11CommManager12isSlotActiveEi(p, p->unk_64)) {
        v = Scene_GetCurrent();
        if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
    } else {
        for (i = 3; i >= 0; i--) {
            if (_ZN11CommManager12isSlotActiveEi(p, i) && !_ZN11CommManager7isMyAidEj(p, i)) {
                v = NetArea_GetSlotScene(i);
                if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
            }
        }
    }
    return TRUE;
}

