#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/EffectSplEmitter.h"
#include "gfx/AnimModel.h"
#include "gfx/ModelAnim.h"

struct Unk_0209002c_Handle;

extern "C" {
s32 func_021065dc(void *p);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106618(void *p);
s32 func_02106634(s32 a, s32 b);
s32 func_02106788(void *p);
s32 func_021067a4(s32 a, s32 b);
void NNS_G3dMdlSetMdlEmi(void *p, s32 a, u32 b);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN11CachedModel16allocJointRecordEPv(void *p, void *h);
void _ZN9AnimModel11allocAnmObjEPv(void *p, void *h);
void _ZN9AnimModel10attachAnimEv(void *p);
void _ZN9AnimModel12drawAnimatedEPv(void *p, s32 q);
void _ZN9AnimModel8stepAnimEv(void *p);
void _ZN14BlendAnimModel8initAnimEiiitt(void *p, s32 a, s32 b, s32 c, u16 d, u16 e);
BOOL _ZN11CachedModel10loadCachedEPvS0_(void *p, u32 a, u32 b);
void _ZN9ModelAnim4initEiiit(void *p, s32 a, s32 b, s32 c, u16 e);
void _ZN9ModelAnim11allocMatAnmEjPv(void *p, void *a, void *c);
void _ZN9ModelAnim13allocJointAnmEjPv(void *p, void *a, void *c);
void _ZN9ModelAnim14addToRenderObjEj(void *p, u32 a);
u32 _ZN5Model12getRenderObjEv(void *p);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void _ZN13AnimFrameCtrl4stepEv(void *p);
s32 WorldCurve_ToCurved(void *out, void *in);
s32 SceneLights_GetRoomColor();
void Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
void Mtx43_RotateX(void *m, s32 v);
void Mtx43_RotateXYZ(void *m, s32 x, s32 y, s32 z);
void Mtx43_Scale(void *m, s32 x, s32 y, s32 z);
void Heap_Free(void *heap, void *p);
u32 File_LoadAlloc(u32 res, void *heap, u32 a, s32 b);
void func_020e8c94(void *);
void *ExpHeap_Create(u32, s32);
void *Mem_Alloc(u32);
void Mem_Free(void *);
void *SPL_Create(void *, s32, s32);
void *SPL_CreateWithInitialize(void *, u32, u32);
Unk_0209002c_Handle *SPL_Init(void *, s32, s32, s32, s32, s32);
void func_020f8b44(void *, void *, s32);
void func_020f8cb8(void *, void *, void *);
void SPL_Calc(void *);
void func_020f92d4(void *, void *);
void SPL_Load(void *, s32);
void NNS_FndDestroyFrmHeap(void *);
void *NNS_FndCreateFrmHeapEx(void *, void *, void *);
void MIi_CpuClear32(s32, void *, s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *dst, void *src, u32 size);
u16 SceneLights_GetBaseColor();
u16 GroundSeason_GetColor();
s32 TownState_GetSeasonPeriod();
s32 File_Load(void *);
void *NNS_FndAllocFromFrmHeapEx(u32 heap, u32 size, s32 align);
s32 SPL_LoadTexByVRAMManager(u32 h);
s32 SPL_LoadTexPlttByVRAMManager(u32 h);
}


class Unk_020dbe7c_Anim {
public:
    virtual ~Unk_020dbe7c_Anim();
    /* 0x04 */ u32 numFrames;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 prevFrame;
    /* 0x10 */ u32 frameStep;
    /* 0x14 */ u32 playMode;
};


struct Unk_0208f480_Mtx {
    s64 v[6];
};

class EffectModelGroup;

// 0x148-byte effect entry (dtor 0x0208f308, ctor 0x02090238)
class EffectModel {
public:
    EffectModel();
    ~EffectModel();
    void start(EffectModelGroup *src, void (*cb)(EffectModel *));
    void unload();
    void draw();
    void update();
    void load(EffectModelGroup *src);
    BOOL loadModel(s32 idx);

    /* 0x00 */ s32 active;
    /* 0x04 */ s32 position[3];
    /* 0x10 */ s32 scaleX;
    /* 0x14 */ s32 scaleY;
    /* 0x18 */ s32 scaleZ;
    /* 0x1c */ s16 rotX;
    /* 0x1e */ s16 rotY;
    /* 0x20 */ s16 rotZ;
    /* 0x24 */ AnimModel model;
    /* 0xdc */ u32 animSlot0Used;
    /* 0xe0 */ s32 hasMatAnim;
    /* 0xe4 */ s32 hasJointAnim;
    /* 0xe8 */ ModelAnim anims[3];
};

// 0x530-byte group of four entries plus three resource pointers (dtor 0x0208f2e8, ctor 0x0209020c)
class EffectModelGroup {
public:
    EffectModelGroup();
    ~EffectModelGroup();

    /* 0x000 */ s32 modelIndex;
    /* 0x004 */ EffectModel models[4];
    /* 0x524 */ u32 animFiles[3];
};

struct EffectEmitterEntry;


struct Unk_0208f8fc_Obj {
    u8 unk_00[8];
    void *unk_08;
    u8 unk_0c[0x10];
    u32 stateFlags;
};



struct EffectSplPool {
    EffectSplPool();
    /* 0x00 */ u8 cursor;
    /* 0x04 */ EffectEmitterEntry entries[32];
};

struct Unk_0208fb20_Sub {
    u8 unk_00[0x20];
    s16 unk_20;
};

struct Unk_0208fb20_Obj {
    u8 unk_00[8];
    Unk_0208fb20_Sub *unk_08;
    u8 unk_0c[0x10];
    u32 stateFlags;
};

struct EffectSplResEntry {
    u32 unk_00_0 : 1;
    u32 unk_00_1 : 1;
    u32 unk_00_rest : 30;
    u32 *emitterIds;
    s32 emitterCount;
};

struct Unk_0208fdcc_A {
    s32 unk_00;
    s32 posX;
    s32 posY;
    s32 posZ;
    u8 unk_10[0x40];
    u8 tintFlags;
};

struct Unk_0208fdcc_B {
    Unk_0208fdcc_A *header;
};


struct Unk_0208ffe4_V {
    s32 x;
    s32 y;
    s32 z;
    Unk_0208ffe4_V(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_0208fe0c_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

union Unk_0208fe0c_U {
    u16 v;
    Unk_0208fe0c_Col c;
};

struct Unk_0209002c_Handle {
    u8 unk_00[0x30];
    u32 unk_30;
};

struct Unk_02090140_Arg {
    u8 pad[0x18];
    u32 resDataSize;
    u32 unk_1c;
    u8 resData[1];
};

struct Unk_02090168_Arg {
    u8 pad[0x50];
    u32 splManager;
};

class EffectSplProc : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~EffectSplProc() {}

    /* 0x50 */ Unk_0209002c_Handle *splManager;
    /* 0x54 */ s32 groupCounter;
    /* 0x58 */ EffectSplPool pool;
    /* 0x35c */ EffectModelGroup modelGroups[4];
    /* 0x181c */ u32 emitterMap[20];
};

// Ten key/value pairs
struct EffectSplEmitterMapPair {
    void release();
    void clear();

    /* 0x00 */ s32 resId;
    /* 0x04 */ s32 emitter;
};

struct EffectSplEmitterMap {
    BOOL add(s32 key, s32 val);
    s32 find(s32 key);
    void releaseAll();
    void clearAll();

    /* 0x00 */ EffectSplEmitterMapPair pairs[10];
};

// Three-slot resource pointer set (EffectModelGroup::unk_524)
struct EffectModelAnimFiles {
    void free();
    void load(EffectModelGroup *src);

    /* 0x00 */ u32 files[3];
};

extern "C" {
extern EffectSplProc *sEffectSplProc;
extern void *sEffectModelHeap;
extern void *sEffectSplFrmHeap;
extern void *sEffectSplHeapMem;
extern s32 *sEffectSplEmitPos;
extern s32 gCurrentHeap;
extern u32 gViewMtx[];
extern u8 data_021f47e0[];
void *EffectSpl_Alloc(u32 size);

void _ZN11EffectModel5startEP16EffectModelGroupPFvPS_E(EffectModel *, EffectModelGroup *, void (*)(EffectModel *));
s32 _ZN11EffectModel6unloadEv(EffectModel *);
s32 _ZN11EffectModel4drawEv(EffectModel *);
s32 _ZN11EffectModel6updateEv(EffectModel *);
s32 _ZN11EffectModel4loadEP16EffectModelGroup(EffectModel *, EffectModelGroup *);
s32 _ZN20EffectModelAnimFiles4freeEv(void *);
s32 _ZN20EffectModelAnimFiles4loadEP16EffectModelGroup(void *, EffectModelGroup *);
s32 _ZN19EffectSplEmitterMap10releaseAllEv(void *);
s32 _ZN19EffectSplEmitterMap8clearAllEv(void *);
s32 _ZN19EffectSplEmitterMap4findEi(void *, u32);
s32 _ZN19EffectSplEmitterMap3addEii(void *, u32, void *);
void EffectSplEntry_Release(EffectEmitterEntry *);
s32 EffectSplEntry_Start(EffectEmitterEntry *, s32, s32, s32, EffectEmitterCbs *, EffectEmitterTag);
void EffectModels_DrawAll(EffectModelGroup *);
void EffectModels_Start(EffectModelGroup *, s32, void (*)(EffectModel *));
void EffectModelGroup_Start(EffectModelGroup *, void (*)(EffectModel *));
void EffectModelGroup_Unload(EffectModelGroup *);
void EffectModelGroup_Draw(EffectModelGroup *);
void EffectModelGroup_Update(EffectModelGroup *);
void EffectModelGroup_Load(EffectModelGroup *, s32);
void EffectModels_UnloadAll(EffectModelGroup *);
void EffectModels_UpdateAll(EffectModelGroup *);
void EffectModels_LoadAll(EffectModelGroup *);
EffectEmitterEntry *EffectSplPool_Alloc(EffectSplPool *p, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, u32 b, u32 c);
EffectEmitterEntry *EffectSplPool_FindInactive(EffectSplPool *p, s32 id);
void EffectSplPool_ReleaseAll(EffectSplPool *p);
void EffectSplPool_Update(EffectSplPool *p);
s16 EffectSpl_GetSeasonTint();
s16 EffectSpl_GetSeasonTintVariant(EffectSplEmitter *o);
void EffectSpl_ApplySceneTint(EffectSplEmitter *o);
void EffectSpl_InitEmitterAtPos(EffectSplEmitter *o);
u16 EffectSpl_ToCurvedPos(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3);
BOOL EffectSpl_LoadTextures(Unk_02090168_Arg *p);
s32 EffectSpl_LoadArchive(void *unused);
void *EffectSpl_CopyResourceData(void *unused, Unk_02090140_Arg *p);
}

extern const EffectSplResEntry sEffectResTable[152];
extern s16 sEffectSeasonTint0[24];
extern s16 sEffectSeasonTint1[24];
extern s16 sEffectSeasonTint2[24];
extern s16 sEffectSeasonTint3[24];
extern s16 sEffectSeasonTint[24];
extern u32 sEffectModelAnimFiles[4][3];
extern void (*gEffectSplDefaultInitCbs[10])(EffectSplEmitter *);
extern const u32 sEffectRes06EmitterIds[8];
extern const u32 sEffectRes7FEmitterIds[7];
extern const u32 sEffectRes12EmitterIds[7];
extern char sPathEfWaterColNsbca[24];
extern char sPathEfWaterColNsbma[24];
extern char sPathEfWaterColNsbmd[24];
extern char sPathCraRibbon1Nsbmd[23];
extern char sPathCraRibbon1Nsbca[23];
extern char sPathCraRibbon1Nsbma[23];
extern char sPathMpSiturenNsbma[22];
extern char sPathMpSiturenNsbva[22];
extern char sPathMpSiturenNsbmd[22];
extern char sPathMpSiturenNsbca[22];
extern const u32 sEffectRes7EEmitterIds[5];
extern const u32 sEffectRes5AEmitterIds[5];
extern char sPathMpLoveNsbca[19];
extern char sPathMpLoveNsbma[19];
extern char sPathMpLoveNsbmd[19];
extern u32 sEffectModelFiles[4];
extern const u32 sEffectRes01EmitterIds[4];
extern const u32 sEffectRes05EmitterIds[4];
extern const u32 sEffectRes10EmitterIds[4];
extern const u32 sEffectRes13EmitterIds[4];
extern const u32 sEffectRes62EmitterIds[4];
extern const u32 sEffectRes59EmitterIds[4];
extern s16 *sEffectSeasonTintTables[4];
extern const u32 sEffectRes31EmitterIds[3];
extern const u32 sEffectRes32EmitterIds[3];
extern const u32 sEffectRes93EmitterIds[3];
extern const u32 sEffectRes37EmitterIds[3];
extern const u32 sEffectRes09EmitterIds[3];
extern const u32 sEffectRes3BEmitterIds[3];
extern const u32 sEffectRes3CEmitterIds[3];
extern const u32 sEffectRes96EmitterIds[3];
extern const u32 sEffectRes97EmitterIds[3];
extern const u32 sEffectRes48EmitterIds[3];
extern const u32 sEffectRes49EmitterIds[3];
extern const u32 sEffectRes04EmitterIds[3];
extern const u32 sEffectRes0AEmitterIds[3];
extern const u32 sEffectRes0BEmitterIds[3];
extern const u32 sEffectRes0FEmitterIds[3];
extern const u32 sEffectRes11EmitterIds[3];
extern const u32 sEffectRes25EmitterIds[2];
extern const u32 sEffectRes27EmitterIds[2];
extern const u32 sEffectRes2AEmitterIds[2];
extern const u32 sEffectRes2CEmitterIds[2];
extern const u32 sEffectRes24EmitterIds[2];
extern const u32 sEffectRes2EEmitterIds[2];
extern const u32 sEffectRes92EmitterIds[2];
extern const u32 sEffectRes53EmitterIds[2];
extern const u32 sEffectRes0EEmitterIds[2];
extern const u32 sEffectRes46EmitterIds[2];
extern const u32 sEffectRes47EmitterIds[2];
extern const u32 sEffectRes03EmitterIds[2];
extern const u32 sEffectRes51EmitterIds[2];
extern const u32 sEffectRes0DEmitterIds[2];
extern const u32 sEffectRes15EmitterIds[2];
extern const u32 sEffectRes21EmitterIds[2];
extern const u32 sEffectRes22EmitterIds[2];
extern const u32 sEffectRes39EmitterIds[1];
extern const u32 sEffectRes3AEmitterIds[1];
extern const u32 sEffectRes78EmitterIds[1];
extern const u32 sEffectRes79EmitterIds[1];
extern const u32 sEffectRes3DEmitterIds[1];
extern const u32 sEffectRes3EEmitterIds[1];
extern const u32 sEffectRes3FEmitterIds[1];
extern const u32 sEffectRes63EmitterIds[1];
extern const u32 sEffectRes40EmitterIds[1];
extern const u32 sEffectRes41EmitterIds[1];
extern const u32 sEffectRes42EmitterIds[1];
extern const u32 sEffectRes43EmitterIds[1];
extern const u32 sEffectRes44EmitterIds[1];
extern const u32 sEffectRes64EmitterIds[1];
extern const u32 sEffectRes65EmitterIds[1];
extern const u32 sEffectRes66EmitterIds[1];
extern const u32 sEffectRes67EmitterIds[1];
extern const u32 sEffectRes68EmitterIds[1];
extern const u32 sEffectRes69EmitterIds[1];
extern const u32 sEffectRes45EmitterIds[1];
extern const u32 sEffectRes1DEmitterIds[1];
extern const u32 sEffectRes02EmitterIds[1];
extern const u32 sEffectRes1CEmitterIds[1];
extern const u32 sEffectRes84EmitterIds[1];
extern const u32 sEffectRes50EmitterIds[1];
extern const u32 sEffectRes30EmitterIds[1];
extern const u32 sEffectRes4EEmitterIds[1];
extern const u32 sEffectRes1AEmitterIds[1];
extern const u32 sEffectRes72EmitterIds[1];
extern const u32 sEffectRes1EEmitterIds[1];
extern const u32 sEffectRes19EmitterIds[1];
extern const u32 sEffectRes14EmitterIds[1];
extern const u32 sEffectRes56EmitterIds[1];
extern const u32 sEffectRes55EmitterIds[1];
extern const u32 sEffectRes8FEmitterIds[1];
extern const u32 sEffectRes6EEmitterIds[1];
extern const u32 sEffectRes2BEmitterIds[1];
extern const u32 sEffectRes8EEmitterIds[1];
extern const u32 sEffectRes58EmitterIds[1];
extern const u32 sEffectRes08EmitterIds[1];
extern const u32 sEffectRes28EmitterIds[1];
extern const u32 sEffectRes88EmitterIds[1];
extern const u32 sEffectRes70EmitterIds[1];
extern const u32 sEffectRes1FEmitterIds[1];
extern const u32 sEffectRes6FEmitterIds[1];
extern const u32 sEffectRes36EmitterIds[1];
extern const u32 sEffectRes6CEmitterIds[1];
extern const u32 sEffectRes61EmitterIds[1];
extern const u32 sEffectRes86EmitterIds[1];
extern const u32 sEffectRes90EmitterIds[1];
extern const u32 sEffectRes5CEmitterIds[1];
extern const u32 sEffectRes5EEmitterIds[1];
extern const u32 sEffectRes38EmitterIds[1];
extern const u32 sEffectRes73EmitterIds[1];
extern const u32 sEffectRes74EmitterIds[1];
extern const u32 sEffectRes94EmitterIds[1];
extern const u32 sEffectRes77EmitterIds[1];
extern const u32 sEffectRes95EmitterIds[1];
extern const u32 sEffectRes8AEmitterIds[1];
extern const u32 sEffectRes7AEmitterIds[1];
extern const u32 sEffectRes7BEmitterIds[1];
extern const u32 sEffectRes7CEmitterIds[1];
extern const u32 sEffectRes7DEmitterIds[1];
extern const u32 sEffectRes4CEmitterIds[1];
extern const u32 sEffectRes81EmitterIds[1];
extern const u32 sEffectRes34EmitterIds[1];
extern const u32 sEffectRes85EmitterIds[1];
extern const u32 sEffectRes89EmitterIds[1];
extern const u32 sEffectRes16EmitterIds[1];
extern const u32 sEffectRes35EmitterIds[1];
extern const u32 sEffectRes2DEmitterIds[1];
extern const u32 sEffectRes1BEmitterIds[1];
extern const u32 sEffectRes5FEmitterIds[1];
extern const u32 sEffectRes5BEmitterIds[1];
extern const u32 sEffectRes8CEmitterIds[1];
extern const u32 sEffectRes00EmitterIds[1];
extern const u32 sEffectRes29EmitterIds[1];
extern const u32 sEffectRes2FEmitterIds[1];
extern const u32 sEffectRes6BEmitterIds[1];
extern const u32 sEffectRes26EmitterIds[1];
extern const u32 sEffectRes76EmitterIds[1];
extern const u32 sEffectRes23EmitterIds[1];
extern const u32 sEffectRes20EmitterIds[1];
extern const u32 sEffectRes52EmitterIds[1];
extern const u32 sEffectRes4FEmitterIds[1];
extern const u32 sEffectRes75EmitterIds[1];
extern const u32 sEffectRes33EmitterIds[1];
extern const u32 sEffectRes6AEmitterIds[1];
extern const u32 sEffectRes83EmitterIds[1];
extern const u32 sEffectRes87EmitterIds[1];
extern const u32 sEffectRes8BEmitterIds[1];
extern const u32 sEffectRes54EmitterIds[1];
extern const u32 sEffectRes8DEmitterIds[1];
extern const u32 sEffectRes60EmitterIds[1];
extern const u32 sEffectRes91EmitterIds[1];
extern const u32 sEffectRes0CEmitterIds[1];
extern const u32 sEffectRes4BEmitterIds[1];
extern const u32 sEffectRes5DEmitterIds[1];
extern const u32 sEffectRes4AEmitterIds[1];
extern const u32 sEffectRes4DEmitterIds[1];
extern const u32 sEffectRes07EmitterIds[1];
extern const u32 sEffectRes17EmitterIds[1];
extern const u32 sEffectRes71EmitterIds[1];
extern const u32 sEffectRes6DEmitterIds[1];
extern const u32 sEffectRes80EmitterIds[1];
extern const u32 sEffectRes82EmitterIds[1];
extern const u32 sEffectRes18EmitterIds[1];
extern const u32 sEffectRes57EmitterIds[1];

const EffectSplResEntry sEffectResTable[152] = {
    {0, 0, 0, (u32 *)sEffectRes00EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes01EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes02EmitterIds, 1},
    {1, 0, 0, (u32 *)sEffectRes03EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes04EmitterIds, 3},
    {1, 0, 0, (u32 *)sEffectRes05EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes06EmitterIds, 8},
    {0, 0, 0, (u32 *)sEffectRes07EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes08EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes09EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes0AEmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes0BEmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes0CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes0DEmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes0EEmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes0FEmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes10EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes11EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes12EmitterIds, 7},
    {1, 0, 0, (u32 *)sEffectRes13EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes14EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes15EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes16EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes17EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes18EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes19EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes1AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes1BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes1CEmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes1DEmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes1EEmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes1FEmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes20EmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes21EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes22EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes23EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes24EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes25EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes26EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes27EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes28EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes29EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes2AEmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes2BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes2CEmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes2DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes2EEmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes2FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes30EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes31EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes32EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes33EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes34EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes35EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes36EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes37EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes38EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes39EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes3AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes3BEmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes3CEmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes3DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes3EEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes3FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes40EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes41EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes42EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes43EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes44EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes45EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes46EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes47EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes48EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes49EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes4AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes4BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes4CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes4DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes4EEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes4FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes50EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes51EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes52EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes53EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes54EmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes55EmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes56EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes57EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes58EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes59EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes5AEmitterIds, 5},
    {0, 0, 0, (u32 *)sEffectRes5BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes5CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes5DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes5EEmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes5FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes60EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes61EmitterIds, 1},
    {1, 0, 0, (u32 *)sEffectRes62EmitterIds, 4},
    {0, 0, 0, (u32 *)sEffectRes63EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes64EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes65EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes66EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes67EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes68EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes69EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6EEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes6FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes70EmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes71EmitterIds, 1},
    {0, 1, 0, (u32 *)sEffectRes72EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes73EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes74EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes75EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes76EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes77EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes78EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes79EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes7AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes7BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes7CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes7DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes7EEmitterIds, 5},
    {0, 0, 0, (u32 *)sEffectRes7FEmitterIds, 7},
    {0, 0, 0, (u32 *)sEffectRes80EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes81EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes82EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes83EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes84EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes85EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes86EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes87EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes88EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes89EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8AEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8BEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8CEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8DEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8EEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes8FEmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes90EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes91EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes92EmitterIds, 2},
    {0, 0, 0, (u32 *)sEffectRes93EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes94EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes95EmitterIds, 1},
    {0, 0, 0, (u32 *)sEffectRes96EmitterIds, 3},
    {0, 0, 0, (u32 *)sEffectRes97EmitterIds, 3},
};
s16 sEffectSeasonTint0[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x66ff, 0x66ff, 0x5be7, 0x73a4, 0x17af, 0x17af, 0x17af, 0x17af, 0x1ff5, 0x1ff5, 0x1ff5, 0x1ff5, 0x2fbf, 0x27f, 0x19f, 0x2e5f, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 sEffectSeasonTint1[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x33eb, 0x66ff, 0x5be7, 0x73a4, 0x17af, 0x1ff5, 0x1ff5, 0x2fbf, 0x16df, 0x16df, 0x16df, 0x167f, 0xdbf, 0x19f, 0x11f, 0x3ddf, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 sEffectSeasonTint2[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x33eb, 0x5be7, 0x5be7, 0x73a4, 0x17af, 0x17af, 0x1ff5, 0x275f, 0x275f, 0x165f, 0x9ff, 0x5bf, 0xd5f, 0x11f, 0x289f, 0x3ddf, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 sEffectSeasonTint3[24] = {0x7f72, 0x7f2c, 0x4ff8, 0x53ea, 0x53ea, 0x67ea, 0x67ea, 0x7f85, 0x4fee, 0x238f, 0x238f, 0x27b5, 0x27b5, 0x27b5, 0x27b5, 0x27b5, 0x3f4c, 0x5b0d, 0x5b0d, 0x5b0d, 0x6f0e, 0x7f72, 0x7f72, 0x0};
s16 sEffectSeasonTint[24] = {0x4a97, 0x4a97, 0x4a97, 0x4bc6, 0x53a3, 0x53a3, 0x53a3, 0x52e0, 0x3344, 0xb71, 0xb71, 0xb71, 0xb56, 0xb56, 0xb56, 0x39a, 0x39a, 0x39a, 0x22fb, 0x22fb, 0x329c, 0x329c, 0x4a97, 0x0};
u32 sEffectModelAnimFiles[4][3] = {{(u32)sPathMpSiturenNsbca, (u32)sPathMpSiturenNsbma, (u32)sPathMpSiturenNsbva}, {(u32)sPathMpLoveNsbca, (u32)sPathMpLoveNsbma, 0}, {(u32)sPathEfWaterColNsbca, (u32)sPathEfWaterColNsbma, 0}, {(u32)sPathCraRibbon1Nsbca, (u32)sPathCraRibbon1Nsbma, 0}};
void (*gEffectSplDefaultInitCbs[10])(EffectSplEmitter *) = {EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos, EffectSpl_InitEmitterAtPos};
const u32 sEffectRes06EmitterIds[8] = {4, 5, 6, 7, 8, 9, 0xa, 0xb};
const u32 sEffectRes7FEmitterIds[7] = {0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca};
const u32 sEffectRes12EmitterIds[7] = {0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a};
char sPathEfWaterColNsbca[] = "/spl/ef_water_col.nsbca";
char sPathEfWaterColNsbma[] = "/spl/ef_water_col.nsbma";
char sPathEfWaterColNsbmd[] = "/spl/ef_water_col.nsbmd";
char sPathCraRibbon1Nsbmd[] = "/spl/cra_ribbon1.nsbmd";
char sPathCraRibbon1Nsbca[] = "/spl/cra_ribbon1.nsbca";
char sPathCraRibbon1Nsbma[] = "/spl/cra_ribbon1.nsbma";
char sPathMpSiturenNsbma[] = "/spl/mp_situren.nsbma";
char sPathMpSiturenNsbva[] = "/spl/mp_situren.nsbva";
char sPathMpSiturenNsbmd[] = "/spl/mp_situren.nsbmd";
char sPathMpSiturenNsbca[] = "/spl/mp_situren.nsbca";
const u32 sEffectRes7EEmitterIds[5] = {0xcb, 0xcc, 0xcd, 0xce, 0xcf};
const u32 sEffectRes5AEmitterIds[5] = {0xac, 0xab, 0xaa, 0xad, 0xae};
char sPathMpLoveNsbca[] = "/spl/mp_love.nsbca";
char sPathMpLoveNsbma[] = "/spl/mp_love.nsbma";
char sPathMpLoveNsbmd[] = "/spl/mp_love.nsbmd";
u32 sEffectModelFiles[4] = {(u32)sPathMpSiturenNsbmd, (u32)sPathMpLoveNsbmd, (u32)sPathEfWaterColNsbmd, (u32)sPathCraRibbon1Nsbmd};
const u32 sEffectRes01EmitterIds[4] = {0x42, 0x43, 0x44, 0x45};
const u32 sEffectRes05EmitterIds[4] = {0x1e, 0x20, 0x1f, 0x21};
const u32 sEffectRes10EmitterIds[4] = {0x30, 0x31, 0x32, 0x33};
const u32 sEffectRes13EmitterIds[4] = {0x25, 0x26, 0x29, 0x2a};
const u32 sEffectRes62EmitterIds[4] = {0x27, 0x28, 0x2b, 0x2c};
const u32 sEffectRes59EmitterIds[4] = {0xa9, 0xa6, 0xa7, 0xa8};
s16 *sEffectSeasonTintTables[4] = {sEffectSeasonTint0, sEffectSeasonTint1, sEffectSeasonTint2, sEffectSeasonTint3};
const u32 sEffectRes31EmitterIds[3] = {0x62, 0x61, 0x63};
const u32 sEffectRes32EmitterIds[3] = {0x74, 0x73, 0x6e};
const u32 sEffectRes93EmitterIds[3] = {0xe4, 0xe2, 0xe3};
const u32 sEffectRes37EmitterIds[3] = {0x7f, 0x80, 0x81};
const u32 sEffectRes09EmitterIds[3] = {0x1b, 0x1c, 0x1d};
const u32 sEffectRes3BEmitterIds[3] = {0x75, 0x76, 0x77};
const u32 sEffectRes3CEmitterIds[3] = {0x7a, 0x7b, 0x7c};
const u32 sEffectRes96EmitterIds[3] = {0xea, 0xea, 0xea};
const u32 sEffectRes97EmitterIds[3] = {0xe9, 0xe9, 0xe9};
const u32 sEffectRes48EmitterIds[3] = {0x7f, 0x80, 0x81};
const u32 sEffectRes49EmitterIds[3] = {0x7f, 0x80, 0x81};
const u32 sEffectRes04EmitterIds[3] = {0x10, 0x11, 0x12};
const u32 sEffectRes0AEmitterIds[3] = {0, 1, 2};
const u32 sEffectRes0BEmitterIds[3] = {0x18, 0x19, 0x1a};
const u32 sEffectRes0FEmitterIds[3] = {0x2d, 0x2e, 0x2f};
const u32 sEffectRes11EmitterIds[3] = {0x3f, 0x40, 0x41};
const u32 sEffectRes25EmitterIds[2] = {0x4e, 0x48};
const u32 sEffectRes27EmitterIds[2] = {0x4a, 0x4b};
const u32 sEffectRes2AEmitterIds[2] = {0x60, 0x5f};
const u32 sEffectRes2CEmitterIds[2] = {0x67, 0x68};
const u32 sEffectRes24EmitterIds[2] = {0x4d, 0x47};
const u32 sEffectRes2EEmitterIds[2] = {0x70, 0x6f};
const u32 sEffectRes92EmitterIds[2] = {0xdf, 0xe0};
const u32 sEffectRes53EmitterIds[2] = {0x9d, 0x9f};
const u32 sEffectRes0EEmitterIds[2] = {0x3b, 0x3c};
const u32 sEffectRes46EmitterIds[2] = {0x78, 0x79};
const u32 sEffectRes47EmitterIds[2] = {0x78, 0x79};
const u32 sEffectRes03EmitterIds[2] = {0xc, 0xd};
const u32 sEffectRes51EmitterIds[2] = {0xa0, 0x9c};
const u32 sEffectRes0DEmitterIds[2] = {0x23, 0x24};
const u32 sEffectRes15EmitterIds[2] = {0x3d, 0x3e};
const u32 sEffectRes21EmitterIds[2] = {0x5c, 0x54};
const u32 sEffectRes22EmitterIds[2] = {0x4f, 0x50};
s32 *sEffectSplEmitPos;
void *sEffectSplHeapMem;
void *sEffectSplFrmHeap;
void *sEffectModelHeap;
EffectSplProc *sEffectSplProc;
const u32 sEffectRes39EmitterIds[1] = {0x7e};
const u32 sEffectRes3AEmitterIds[1] = {0x7d};
const u32 sEffectRes78EmitterIds[1] = {0xbe};
const u32 sEffectRes79EmitterIds[1] = {0xbf};
const u32 sEffectRes3DEmitterIds[1] = {0x92};
const u32 sEffectRes3EEmitterIds[1] = {0x84};
const u32 sEffectRes3FEmitterIds[1] = {0x87};
const u32 sEffectRes63EmitterIds[1] = {0x85};
const u32 sEffectRes40EmitterIds[1] = {0x89};
const u32 sEffectRes41EmitterIds[1] = {0x8b};
const u32 sEffectRes42EmitterIds[1] = {0x8d};
const u32 sEffectRes43EmitterIds[1] = {0x8f};
const u32 sEffectRes44EmitterIds[1] = {0x91};
const u32 sEffectRes64EmitterIds[1] = {0x86};
const u32 sEffectRes65EmitterIds[1] = {0x83};
const u32 sEffectRes66EmitterIds[1] = {0x88};
const u32 sEffectRes67EmitterIds[1] = {0x8a};
const u32 sEffectRes68EmitterIds[1] = {0x8c};
const u32 sEffectRes69EmitterIds[1] = {0x8e};
const u32 sEffectRes45EmitterIds[1] = {0x93};
const u32 sEffectRes1DEmitterIds[1] = {0x57};
const u32 sEffectRes02EmitterIds[1] = {0x46};
const u32 sEffectRes1CEmitterIds[1] = {0x5a};
const u32 sEffectRes84EmitterIds[1] = {0xd1};
const u32 sEffectRes50EmitterIds[1] = {0x9b};
const u32 sEffectRes30EmitterIds[1] = {0x72};
const u32 sEffectRes4EEmitterIds[1] = {0x98};
const u32 sEffectRes1AEmitterIds[1] = {0x58};
const u32 sEffectRes72EmitterIds[1] = {0xb9};
const u32 sEffectRes1EEmitterIds[1] = {0x5d};
const u32 sEffectRes19EmitterIds[1] = {0x59};
const u32 sEffectRes14EmitterIds[1] = {0xe};
const u32 sEffectRes56EmitterIds[1] = {0xa4};
const u32 sEffectRes55EmitterIds[1] = {0xa5};
const u32 sEffectRes8FEmitterIds[1] = {0xdb};
const u32 sEffectRes6EEmitterIds[1] = {0xb5};
const u32 sEffectRes2BEmitterIds[1] = {0x66};
const u32 sEffectRes8EEmitterIds[1] = {0xde};
const u32 sEffectRes58EmitterIds[1] = {0xa3};
const u32 sEffectRes08EmitterIds[1] = {3};
const u32 sEffectRes28EmitterIds[1] = {0x4c};
const u32 sEffectRes88EmitterIds[1] = {0xd6};
const u32 sEffectRes70EmitterIds[1] = {0xb7};
const u32 sEffectRes1FEmitterIds[1] = {0x54};
const u32 sEffectRes6FEmitterIds[1] = {0xb6};
const u32 sEffectRes36EmitterIds[1] = {0x6d};
const u32 sEffectRes6CEmitterIds[1] = {0xb4};
const u32 sEffectRes61EmitterIds[1] = {0xb1};
const u32 sEffectRes86EmitterIds[1] = {0xd2};
const u32 sEffectRes90EmitterIds[1] = {0xdd};
const u32 sEffectRes5CEmitterIds[1] = {0x17};
const u32 sEffectRes5EEmitterIds[1] = {0x82};
const u32 sEffectRes38EmitterIds[1] = {0x79};
const u32 sEffectRes73EmitterIds[1] = {0xba};
const u32 sEffectRes74EmitterIds[1] = {0xbb};
const u32 sEffectRes94EmitterIds[1] = {0xe6};
const u32 sEffectRes77EmitterIds[1] = {0xbd};
const u32 sEffectRes95EmitterIds[1] = {0xe5};
const u32 sEffectRes8AEmitterIds[1] = {0xe8};
const u32 sEffectRes7AEmitterIds[1] = {0xc0};
const u32 sEffectRes7BEmitterIds[1] = {0xc2};
const u32 sEffectRes7CEmitterIds[1] = {0xc1};
const u32 sEffectRes7DEmitterIds[1] = {0xc3};
const u32 sEffectRes4CEmitterIds[1] = {0x97};
const u32 sEffectRes81EmitterIds[1] = {0xd5};
const u32 sEffectRes34EmitterIds[1] = {0x6a};
const u32 sEffectRes85EmitterIds[1] = {0xd3};
const u32 sEffectRes89EmitterIds[1] = {0xe7};
const u32 sEffectRes16EmitterIds[1] = {0xe1};
const u32 sEffectRes35EmitterIds[1] = {0x6c};
const u32 sEffectRes2DEmitterIds[1] = {0x71};
const u32 sEffectRes1BEmitterIds[1] = {0x5b};
const u32 sEffectRes5FEmitterIds[1] = {0xaf};
const u32 sEffectRes5BEmitterIds[1] = {0x16};
const u32 sEffectRes8CEmitterIds[1] = {0xd8};
const u32 sEffectRes00EmitterIds[1] = {0x22};
const u32 sEffectRes29EmitterIds[1] = {0x5e};
const u32 sEffectRes2FEmitterIds[1] = {0x69};
const u32 sEffectRes6BEmitterIds[1] = {0xb2};
const u32 sEffectRes26EmitterIds[1] = {0x49};
const u32 sEffectRes76EmitterIds[1] = {0xbc};
const u32 sEffectRes23EmitterIds[1] = {0x51};
const u32 sEffectRes20EmitterIds[1] = {0x5c};
const u32 sEffectRes52EmitterIds[1] = {0x9e};
const u32 sEffectRes4FEmitterIds[1] = {0x9a};
const u32 sEffectRes75EmitterIds[1] = {0x95};
const u32 sEffectRes33EmitterIds[1] = {0x6b};
const u32 sEffectRes6AEmitterIds[1] = {0x90};
const u32 sEffectRes83EmitterIds[1] = {0xd0};
const u32 sEffectRes87EmitterIds[1] = {0xd7};
const u32 sEffectRes8BEmitterIds[1] = {0xda};
const u32 sEffectRes54EmitterIds[1] = {0xa1};
const u32 sEffectRes8DEmitterIds[1] = {0xd9};
const u32 sEffectRes60EmitterIds[1] = {0xb0};
const u32 sEffectRes91EmitterIds[1] = {0xdc};
const u32 sEffectRes0CEmitterIds[1] = {0x13};
const u32 sEffectRes4BEmitterIds[1] = {0x96};
const u32 sEffectRes5DEmitterIds[1] = {0x14};
const u32 sEffectRes4AEmitterIds[1] = {0x94};
const u32 sEffectRes4DEmitterIds[1] = {0x99};
const u32 sEffectRes07EmitterIds[1] = {0x15};
const u32 sEffectRes17EmitterIds[1] = {0x55};
const u32 sEffectRes71EmitterIds[1] = {0xb8};
const u32 sEffectRes6DEmitterIds[1] = {0xb3};
const u32 sEffectRes80EmitterIds[1] = {0xd4};
const u32 sEffectRes82EmitterIds[1] = {0xf};
const u32 sEffectRes18EmitterIds[1] = {0x56};
const u32 sEffectRes57EmitterIds[1] = {0xa2};

static inline void Unk_0208fb20_GetTag(EffectEmitterTag *r, EffectEmitterTag p)
{
    r->poolIndex = p.poolIndex;
    r->group = p.group;
    r->emitterIndex = p.emitterIndex;
    r->unk_03 = p.unk_03;
}

static inline void Unk_0208fb20_SetTag(EffectEmitterEntry *e, EffectEmitterTag t)
{
    e->tag = t;
}

static inline void Unk_0208fb20_Fill(void *p, s32 v, u32 n)
{
    volatile s32 d = v;
    MIi_CpuClear32(d, p, n);
}

static inline void Unk_0208fb20_Clear(void *p, u32 n)
{
    Unk_0208fb20_Fill(p, 0, n);
}

EffectModel::EffectModel() {}
EffectModelGroup::EffectModelGroup() {}

extern "C" EffectSplProc *EffectSplProc_Create() {
    return new EffectSplProc();
}



extern "C" void *EffectSpl_Alloc(u32 size) {
    return NNS_FndAllocFromFrmHeapEx((u32)sEffectSplFrmHeap, size, 4);
}

extern "C" s32 EffectSpl_LoadArchive(void *unused) {
    return File_Load((void *)"/spl/spl.spa");
}

extern "C" BOOL EffectSpl_LoadTextures(Unk_02090168_Arg *p) {
    if (SPL_LoadTexByVRAMManager(p->splManager)) {
        if (SPL_LoadTexPlttByVRAMManager(p->splManager)) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *EffectSpl_CopyResourceData(void *unused, Unk_02090140_Arg *p) {
    u32 size = p->resDataSize;
    void *r = EffectSpl_Alloc(size);
    if (r) {
        MI_CpuCopy8(p->resData, r, size);
    }
    return r;
}

BOOL EffectSplProc::vfunc_00()
{
    BOOL result = FALSE;
    void *h;
    s32 r;

    sEffectSplProc = this;
    splManager = NULL;
    sEffectSplFrmHeap = NULL;
    groupCounter = 0;
    sEffectSplEmitPos = NULL;
    sEffectSplHeapMem = Mem_Alloc(0xc000);
    if (sEffectSplHeapMem != NULL) {
        sEffectSplFrmHeap = NNS_FndCreateFrmHeapEx(sEffectSplHeapMem, (void *)0xc000, NULL);
        splManager = SPL_Init((void *)EffectSpl_Alloc, 0x20, 0x64, 0x14, 0x15, 0x32);
        splManager->unk_30 = 0x8800;
        if (splManager != NULL) {
            h = (void *)EffectSpl_LoadArchive(this);
            if (h != NULL) {
                func_020f92d4(splManager, h);
                if (EffectSpl_LoadTextures((Unk_02090168_Arg *)this) != 0) {
                    r = (s32)EffectSpl_CopyResourceData(this, (Unk_02090140_Arg *)h);
                    if (r != 0) {
                        SPL_Load(splManager, r);
                        result = TRUE;
                    }
                }
                Mem_Free(h);
            }
        }
    }
    if (result == FALSE) {
        if (sEffectSplFrmHeap != NULL) {
            NNS_FndDestroyFrmHeap(sEffectSplFrmHeap);
            sEffectSplFrmHeap = NULL;
        }
        if (sEffectSplHeapMem != NULL) {
            EffectSplPool_ReleaseAll(&pool);
            Mem_Free(sEffectSplHeapMem);
            sEffectSplHeapMem = NULL;
        }
    } else {
        MI_CpuFill8(modelGroups, 0, 0x14c0);
        EffectModels_LoadAll(modelGroups);
        _ZN19EffectSplEmitterMap8clearAllEv(emitterMap);
    }
    return result;
}

BOOL EffectSplProc::onExecute()
{
    EffectSplPool_Update(&pool);
    EffectModels_UpdateAll(modelGroups);
    SPL_Calc(splManager);
    return TRUE;
}

extern "C" u16 EffectSpl_ToCurvedPos(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3)
{
    Unk_0208ffe4_V t(a1, a2, a3);
    return WorldCurve_ToCurved(a0, &t);
}

BOOL EffectSplProc::onDraw()
{
    func_020f8cb8(splManager, gViewMtx, (void *)EffectSpl_ToCurvedPos);
    EffectModels_DrawAll(modelGroups);
    return TRUE;
}

BOOL EffectSplProc::vfunc_0c()
{
    if (sEffectSplFrmHeap != NULL) {
        NNS_FndDestroyFrmHeap(sEffectSplFrmHeap);
        sEffectSplFrmHeap = NULL;
    }
    if (sEffectSplHeapMem != NULL) {
        EffectSplPool_ReleaseAll(&pool);
        Mem_Free(sEffectSplHeapMem);
        sEffectSplHeapMem = NULL;
    }
    EffectModels_UnloadAll(modelGroups);
    _ZN19EffectSplEmitterMap10releaseAllEv(emitterMap);
    sEffectSplProc = NULL;
    return TRUE;
}

extern "C" s16 EffectSpl_GetSeasonTintVariant(EffectSplEmitter *o)
{
    s32 idx = TownState_GetSeasonPeriod();
    return sEffectSeasonTintTables[o->tintVariant][idx];
}

extern "C" s16 EffectSpl_GetSeasonTint()
{
    return sEffectSeasonTint[TownState_GetSeasonPeriod()];
}

extern "C" void EffectSpl_ApplySceneTint(EffectSplEmitter *o)
{
    u32 f = ((Unk_0208fdcc_B *)o->resource)->header->tintFlags;
    if ((f & 0x80) != 0) {
        volatile Unk_0208fe0c_U l0, l2, l4, l6, l8, la, lc, le;
        l4.v = SceneLights_GetBaseColor();
        la.v = l4.v;
        l6.v = la.v;
        if ((f & 0x40) != 0) {
            l8.v = GroundSeason_GetColor();
        } else if ((f & 0x20) != 0) {
            l2.v = EffectSpl_GetSeasonTintVariant(o);
            lc.v = l2.v;
            l8.v = lc.v;
        } else if ((f & 8) != 0) {
            l0.v = EffectSpl_GetSeasonTint();
            le.v = l0.v;
            l8.v = le.v;
        } else {
            l8.v = 0x7fff;
        }
        l6.c.r = (u16)(l8.c.r * l6.c.r / 31);
        l6.c.g = (u16)(l8.c.g * l6.c.g / 31);
        l6.c.b = (u16)(l8.c.b * l6.c.b / 31);
        o->color = l6.v;
    }
}

extern "C" void EffectSpl_InitEmitterAtPos(EffectSplEmitter *o)
{
    s32 *v;
    EffectSpl_ApplySceneTint(o);
    v = sEffectSplEmitPos;
    if (v != NULL) {
        o->posX = v[0] + ((Unk_0208fdcc_B *)o->resource)->header->posX;
        o->posY = v[1] + ((Unk_0208fdcc_B *)o->resource)->header->posY;
        o->posZ = v[2] + ((Unk_0208fdcc_B *)o->resource)->header->posZ;
    }
}

extern "C" void EffectCb_InitAtPos(EffectEmitterEntry *e)
{
    EffectSpl_InitEmitterAtPos((EffectSplEmitter *)e->emitter);
}

extern "C" s32 EffectCb_UpdateTint(EffectEmitterEntry *e)
{
    EffectSpl_ApplySceneTint((EffectSplEmitter *)e->emitter);
    return 1;
}

extern "C" s32 EffectSpl_CreateOneShot(s32 idx, s32 p1, s16 *p2, u32 *p3)
{
    EffectSplPool *pool;
    EffectSplProc *mgr;
    const EffectSplResEntry *row;
    s32 count;
    u32 *ids;
    s32 i;
    void *ctx;
    Unk_0208fb20_Sub *sub;
    s32 zero14;
    s32 zero18;
    Unk_0208fb20_Obj *o;
    Unk_0208fb20_Obj *h;

    if (p1 == 0) {
        return 0;
    }
    mgr = sEffectSplProc;
    row = &sEffectResTable[idx];
    count = row->emitterCount;
    ids = row->emitterIds;
    if (p2 != NULL) {
        if (row->unk_00_0 == 1) {
            count = count >> 1;
            if (*p2 >= 0) {
                ids += count;
            }
        }
    }
    sEffectSplEmitPos = (s32 *)p1;
    if (row->unk_00_1 != 0) {
        ctx = &mgr->emitterMap;
        i = 0;
        zero18 = 0;
        zero14 = 0;
        for (; i < count; i++) {
            o = (Unk_0208fb20_Obj *)_ZN19EffectSplEmitterMap4findEi(ctx, *ids);
            if (o == NULL) {
                h = (Unk_0208fb20_Obj *)SPL_CreateWithInitialize(sEffectSplProc->splManager, *ids, *p3);
                if (h != NULL) {
                    if (_ZN19EffectSplEmitterMap3addEii(ctx, *ids, h) != 0) {
                        h->stateFlags |= 2;
                        func_020f8b44(sEffectSplProc->splManager, h, p1);
                        sub = h->unk_08;
                        if (p2 != NULL) {
                            sub->unk_20 = p2[zero14];
                        }
                    }
                }
            } else {
                func_020f8b44(sEffectSplProc->splManager, o, p1);
                sub = o->unk_08;
                if (p2 != NULL) {
                    sub->unk_20 = p2[zero18];
                }
            }
            ids++;
            p3++;
        }
    } else {
        for (i = 0; i < count; i++) {
            SPL_CreateWithInitialize(sEffectSplProc->splManager, *ids, *p3);
            ids++;
            p3++;
        }
    }
    sEffectSplEmitPos = NULL;
    return 1;
}

extern "C" s32 EffectSpl_CreateTracked(s32 idx, s32 p1, s16 *p2, EffectEmitterCbs *p3)
{
    EffectSplPool *pool;
    s32 count;
    s32 ok = 1;
    s32 zero;
    EffectEmitterTag x;
    void *list[10];
    const EffectSplResEntry *row;
    u32 *ids;
    EffectEmitterEntry *e;
    s32 i;
    s32 j;

    Unk_0208fb20_Clear(list, 0x28);
    if (p1 == 0) {
        return 0;
    }
    pool = (EffectSplPool *)sEffectSplProc;
    pool = (EffectSplPool *)((u8 *)pool + 0x58);
    row = &sEffectResTable[idx];
    count = row->emitterCount;
    ids = row->emitterIds;
    if (p2 != NULL) {
        if (row->unk_00_0 == 1) {
            count = count >> 1;
            if (*p2 >= 0) {
                ids += count;
            }
        }
    }
    sEffectSplEmitPos = (s32 *)p1;
    zero = 0;
    for (i = 0; i < count; i++) {
        e = EffectSplPool_FindInactive(pool, *ids);
        if (e != NULL) {
            e->isActive = 1;
            e->emitterIndex = i;
            Unk_0208fb20_GetTag(&x, e->tag);
            x.group = sEffectSplProc->groupCounter;
            x.emitterIndex = i;
            Unk_0208fb20_SetTag(e, x);
            EffectEmitterCbs *cb = &e->callbacks;
            if (cb != NULL) {
                cb->unk_00(e);
            }
        } else {
            e = EffectSplPool_Alloc(pool, *ids, p1, (s32)p2, p3, sEffectSplProc->groupCounter, i);
            if (e == NULL) {
                ok = zero;
            }
        }
        if (ok == 0) {
            for (j = 0; j < i; j++) {
                EffectSplEntry_Release((EffectEmitterEntry *)list[j]);
            }
            break;
        }
        list[i] = e;
        ids++;
        p3++;
    }
    sEffectSplEmitPos = NULL;
    sEffectSplProc->groupCounter++;
    return ok;
}

extern "C" void EffectModel_Start(s32 a, void (*b)(EffectModel *))
{
    EffectModels_Start(sEffectSplProc->modelGroups, a, b);
}

extern "C" s32 EffectSplEntry_Start(EffectEmitterEntry *e, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, EffectEmitterTag tag)
{
    s32 r;
    u32 d, c, b;
    b = tag.group;
    c = tag.emitterIndex;
    d = tag.unk_03;
    r = 0;
    e->emitter = (EffectSplEmitter *)SPL_Create(sEffectSplProc->splManager, id, a2);
    if (e->emitter != NULL) {
        e->resourceId = id;
        e->isActive = 1;
        e->callbacks.unk_00 = cb->unk_00;
        e->callbacks.unk_04 = cb->unk_04;
        e->tag.poolIndex = tag.poolIndex;
        e->tag.group = b;
        e->tag.emitterIndex = c;
        e->tag.unk_03 = d;
        cb->unk_00(e);
        r = 1;
    }
    return r;
}

extern "C" void EffectSplEntry_Release(EffectEmitterEntry *e)
{
    if (e->emitter != NULL) {
        e->emitter->stateFlags = (e->emitter->stateFlags & ~1) | 1;
    }
    e->resourceId = -1;
}


EffectSplPool::EffectSplPool()
{
    EffectSplPool *p = this;
    EffectEmitterEntry *e;
    s32 i;
    e = p->entries;
    do {
        e->resourceId = -1;
        e++;
    } while (e != &p->entries[32]);
    p->cursor = 0;
    for (i = 0; i < 0x20; i++) {
        p->entries[i].resourceId = -1;
    }
}

extern "C" void EffectSplPool_Update(EffectSplPool *p)
{
    s32 z = 0;
    s32 w = 0;
    EffectEmitterEntry *e = p->entries;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->resourceId != ~w) {
            EffectEmitterCbs *cb = &e->callbacks;
            e->isActive = 0;
            if (cb != NULL) {
                if (cb->unk_04(e)) {
                    e->isActive = 1;
                }
            }
            {
                BOOL t;
                if (e->isActive == 1) {
                    t = TRUE;
                } else {
                    t = z;
                }
                if (t == 0) {
                    EffectSplEntry_Release(e);
                    p->cursor = i;
                }
            }
        }
        e++;
    }
}

extern "C" void EffectSplPool_ReleaseAll(EffectSplPool *p)
{
    s32 z = 0;
    EffectEmitterEntry *e = p->entries;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->resourceId != ~z) {
            e->isActive = 0;
            EffectSplEntry_Release(e);
            p->cursor = i;
        }
        e++;
    }
}

extern "C" EffectEmitterEntry *EffectSplPool_FindInactive(EffectSplPool *p, s32 id)
{
    EffectEmitterEntry *e = p->entries;
    EffectEmitterEntry *r = NULL;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (id == e->resourceId) {
            BOOL f;
            if (e->isActive == 1) {
                f = TRUE;
            } else {
                f = FALSE;
            }
            if (f == 0) {
                r = e;
                break;
            }
        }
        e++;
    }
    return r;
}

extern "C" EffectEmitterEntry *EffectSplPool_Alloc(EffectSplPool *p, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, u32 b, u32 c)
{
    EffectEmitterEntry *r = NULL;
    EffectEmitterTag tag;
    s32 i;
    s32 cur;
    tag.group = b;
    tag.emitterIndex = c;
    for (i = 0; i < 0x20; i++) {
        cur = p->cursor;
        if (p->entries[cur].resourceId == -1) {
            tag.poolIndex = cur;
            if (EffectSplEntry_Start(&p->entries[cur], id, a2, a3, cb, tag)) {
                r = &p->entries[p->cursor];
                p->cursor = (p->cursor + 1) % 0x20;
            }
            break;
        } else {
            p->cursor = (cur + 1) % 0x20;
        }
    }
    return r;
}

extern "C" void EffectModels_LoadAll(EffectModelGroup *b)
{
    s32 i;
    if (sEffectModelHeap == NULL) {
        sEffectModelHeap = ExpHeap_Create(0x2800, gCurrentHeap);
    }
    for (i = 0; i < 4; i++) {
        EffectModelGroup_Load(&b[i], i);
    }
}

extern "C" void EffectModels_UpdateAll(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        EffectModelGroup_Update(&b[i]);
    }
}

extern "C" void EffectModels_DrawAll(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        EffectModelGroup_Draw(&b[i]);
    }
}

extern "C" void EffectModels_UnloadAll(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        EffectModelGroup_Unload(&b[i]);
    }
    if (sEffectModelHeap != NULL) {
        func_020e8c94(sEffectModelHeap);
        sEffectModelHeap = NULL;
    }
}

extern "C" void EffectModels_Start(EffectModelGroup *b, s32 idx, void (*a)(EffectModel *))
{
    EffectModelGroup_Start(&b[idx], a);
}

extern "C" void EffectModelGroup_Load(EffectModelGroup *b, s32 a)
{
    s32 i;
    b->modelIndex = a;
    _ZN20EffectModelAnimFiles4loadEP16EffectModelGroup(b->animFiles, b);
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel4loadEP16EffectModelGroup(&b->models[i], b);
    }
}

extern "C" void EffectModelGroup_Update(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel6updateEv(&b->models[i]);
    }
}

extern "C" void EffectModelGroup_Draw(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel4drawEv(&b->models[i]);
    }
}

extern "C" void EffectModelGroup_Unload(EffectModelGroup *b)
{
    s32 i;
    _ZN20EffectModelAnimFiles4freeEv(b->animFiles);
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel6unloadEv(&b->models[i]);
    }
}

extern "C" void EffectModelGroup_Start(EffectModelGroup *b, void (*a)(EffectModel *))
{
    s32 i;
    EffectModel *c = b->models;
    for (i = 0; i < 4; i++) {
        if (c->active == 0) {
            _ZN11EffectModel5startEP16EffectModelGroupPFvPS_E(c, b, a);
            break;
        }
        c++;
    }
}

void EffectModelAnimFiles::load(EffectModelGroup *src) {
    s32 idx = src->modelIndex;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (sEffectModelAnimFiles[idx][i] != 0) {
            files[i] = File_LoadAlloc(sEffectModelAnimFiles[idx][i], sEffectModelHeap, 4, 0);
        } else {
            files[i] = 0;
        }
    }
}

void EffectModelAnimFiles::free() {
    s32 i;
    u32 *z = 0;
    for (i = 0; i < 3; i++) {
        if (files[i] != 0) {
            Heap_Free(sEffectModelHeap, (void *)files[i]);
            files[i] = (u32)z;
        }
    }
}

BOOL EffectModel::loadModel(s32 idx) {
    BOOL r = TRUE;
    if (!_ZN11CachedModel10loadCachedEPvS0_(&model, idx + 0x6d656666, sEffectModelFiles[idx])) {
        r = FALSE;
    }
    return r;
}

void EffectModel::load(EffectModelGroup *src) {
    s32 idx = src->modelIndex;
    active = 0;
    if (loadModel(idx)) {
        u32 *r = src->animFiles;
        if (r[0] != 0) {
            _ZN11CachedModel16allocJointRecordEPv(&model, sEffectModelHeap);
            _ZN9AnimModel11allocAnmObjEPv(&model, sEffectModelHeap);
            s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
            _ZN14BlendAnimModel8initAnimEiiitt(&model, t, 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(&model);
        }
        if (r[1] != 0) {
            hasMatAnim = 1;
            ModelAnim *e = &anims[1];
            _ZN9ModelAnim11allocMatAnmEjPv(e, model.unk_5c, sEffectModelHeap);
            s32 u = func_02106634(func_02106618((void *)r[1]), 0);
            _ZN9ModelAnim4initEiiit(e, u, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(e, _ZN5Model12getRenderObjEv(&model));
        } else {
            hasMatAnim = 0;
        }
        if (r[2] != 0) {
            hasJointAnim = 1;
            ModelAnim *e = &anims[2];
            _ZN9ModelAnim13allocJointAnmEjPv(e, model.unk_5c, sEffectModelHeap);
            s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
            _ZN9ModelAnim4initEiiit(e, u, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(e, _ZN5Model12getRenderObjEv(&model));
        } else {
            hasJointAnim = 0;
        }
    }
}

void EffectModel::update() {
    if (active != 0) {
        _ZN9AnimModel8stepAnimEv(&model);
        s32 i;
        for (i = 1; i < 3; i++) {
            if ((&animSlot0Used)[i] != 0) {
                _ZN13AnimFrameCtrl4stepEv(&anims[i]);
                *(u32 *)anims[i].anmObj = anims[i].curFrame;
            }
        }
        if (_ZN13AnimFrameCtrl10isFinishedEv((AnimFrameCtrl *)&model) != 0) {
            active = 0;
        }
    }
}

void EffectModel::draw() {
    if (active != 0) {
        s32 v[3];
        s32 r = WorldCurve_ToCurved(v, position);
        Mtx43_SetTranslate(data_021f47e0, v[0], v[1], v[2]);
        Mtx43_RotateX(data_021f47e0, r);
        Mtx43_RotateXYZ(data_021f47e0, rotX, rotY, rotZ);
        Mtx43_Scale(data_021f47e0, scaleX, scaleY, scaleZ);
        *(Unk_0208f480_Mtx *)model.unk_64 = *(Unk_0208f480_Mtx *)data_021f47e0;
        _ZN9AnimModel12drawAnimatedEPv(&model, 0);
        volatile u16 a, b;
        a = SceneLights_GetRoomColor();
        b = a;
        NNS_G3dMdlSetMdlEmi(model.unk_5c, 0, b);
    }
}

void EffectModel::unload() {
    _ZN11CachedModel7releaseEv(&model);
}

void EffectModel::start(EffectModelGroup *src, void (*cb)(EffectModel *)) {
    active = 1;
    scaleX = 0x1000;
    scaleY = 0x1000;
    scaleZ = 0x1000;
    rotX = 0;
    rotY = 0;
    rotZ = 0;
    u32 *r = src->animFiles;
    s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&model, t, 1, 0x1000, 0, 0);
    if (hasMatAnim != 0) {
        s32 u = func_02106634(func_02106618((void *)r[1]), 0);
        _ZN9ModelAnim4initEiiit(&anims[1], u, 1, 0x1000, 0);
    }
    if (hasJointAnim != 0) {
        s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
        _ZN9ModelAnim4initEiiit(&anims[2], u, 1, 0x1000, 0);
    }
    cb(this);
}

void EffectSplEmitterMapPair::clear() {
    resId = -1;
    emitter = 0;
}

void EffectSplEmitterMapPair::release() {}

void EffectSplEmitterMap::clearAll() {
    EffectSplEmitterMapPair *p = pairs;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->clear();
    }
}

void EffectSplEmitterMap::releaseAll() {
    EffectSplEmitterMapPair *p = pairs;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->release();
    }
}

s32 EffectSplEmitterMap::find(s32 key) {
    EffectSplEmitterMapPair *p = pairs;
    s32 i;
    s32 r = 0;
    for (i = r; i < 10; p++, i++) {
        if (key == p->resId) {
            r = p->emitter;
            break;
        }
    }
    return r;
}

BOOL EffectSplEmitterMap::add(s32 key, s32 val) {
    EffectSplEmitterMapPair *p = pairs;
    s32 i;
    BOOL r = FALSE;
    for (i = r; i < 10; p++, i++) {
        if (p->resId == -1) {
            p->resId = key;
            p->emitter = val;
            r = TRUE;
            break;
        }
    }
    return r;
}

EffectModel::~EffectModel() {
}

EffectModelGroup::~EffectModelGroup() {
}

