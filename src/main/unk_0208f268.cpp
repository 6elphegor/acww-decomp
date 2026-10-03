#include "types.h"
#include "Unk_020d8c7c.h"

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
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 v);
void func_020e8464(void *m, s32 x, s32 y, s32 z);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
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

// Opaque views of library-side model classes (see unk_02054190.cpp / unk_020553f8.cpp for the full declarations)
class AnimModel {
public:
    AnimModel();
    virtual ~AnimModel();

    /* 0x04 */ u8 unk_04[0x58];
    /* 0x5c */ void *unk_5c;
    /* 0x60 */ u8 unk_60[4];
    /* 0x64 */ u8 unk_64[0x30];
    /* 0x94 */ u8 unk_94[8];
    /* 0x9c */ u8 unk_9c[0x1c];
};

class Unk_020dbe7c_Anim {
public:
    virtual ~Unk_020dbe7c_Anim();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
};

class ModelAnim : public Unk_020dbe7c_Anim {
public:
    ModelAnim();
    virtual ~ModelAnim();
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 unk_1c;
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

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04[3];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s16 unk_1c;
    /* 0x1e */ s16 unk_1e;
    /* 0x20 */ s16 unk_20;
    /* 0x24 */ AnimModel unk_24;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ s32 unk_e0;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ ModelAnim unk_e8[3];
};

// 0x530-byte group of four entries plus three resource pointers (dtor 0x0208f2e8, ctor 0x0209020c)
class EffectModelGroup {
public:
    EffectModelGroup();
    ~EffectModelGroup();

    /* 0x000 */ s32 unk_00;
    /* 0x004 */ EffectModel unk_04[4];
    /* 0x524 */ u32 unk_524[3];
};

struct EffectEmitterEntry;

struct EffectEmitterCbs {
    s32 (*unk_00)(EffectEmitterEntry *);
    s32 (*unk_04)(EffectEmitterEntry *);
};

struct Unk_0208f8fc_Obj {
    u8 unk_00[8];
    void *unk_08;
    u8 unk_0c[0x10];
    u32 unk_1c;
};

struct EffectEmitterTag {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct EffectEmitterEntry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ EffectEmitterTag unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0c */ Unk_0208f8fc_Obj *unk_0c;
    /* 0x10 */ EffectEmitterCbs unk_10;
};

struct EffectSplPool {
    EffectSplPool();
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ EffectEmitterEntry unk_04[32];
};

struct Unk_0208fb20_Sub {
    u8 unk_00[0x20];
    s16 unk_20;
};

struct Unk_0208fb20_Obj {
    u8 unk_00[8];
    Unk_0208fb20_Sub *unk_08;
    u8 unk_0c[0x10];
    u32 unk_1c;
};

struct EffectSplResEntry {
    u32 unk_00_0 : 1;
    u32 unk_00_1 : 1;
    u32 unk_00_rest : 30;
    u32 *unk_04;
    s32 unk_08;
};

struct Unk_0208fdcc_A {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x40];
    u8 unk_50;
};

struct Unk_0208fdcc_B {
    Unk_0208fdcc_A *unk_00;
};

struct EffectSplEmitter {
    u8 unk_00[0x18];
    Unk_0208fdcc_B *unk_18;
    u8 unk_1c[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c[0x2e];
    u16 unk_5a;
    u8 unk_5c[0x24];
    u8 unk_80;
};

struct Unk_0208ffe4_V {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_0208ffe4_V(s32 a, s32 b, s32 c)
    {
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
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
    u32 unk_18;
    u32 unk_1c;
    u8 unk_20[1];
};

struct Unk_02090168_Arg {
    u8 pad[0x50];
    u32 unk_50;
};

class EffectSplProc : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~EffectSplProc() {}

    /* 0x50 */ Unk_0209002c_Handle *unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ EffectSplPool unk_58;
    /* 0x35c */ EffectModelGroup unk_35c[4];
    /* 0x181c */ u32 unk_181c[20];
};

// Ten key/value pairs
struct EffectSplEmitterMapPair {
    void release();
    void clear();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct EffectSplEmitterMap {
    BOOL add(s32 key, s32 val);
    s32 find(s32 key);
    void releaseAll();
    void clearAll();

    /* 0x00 */ EffectSplEmitterMapPair unk_00[10];
};

// Three-slot resource pointer set (EffectModelGroup::unk_524)
struct EffectModelAnimFiles {
    void free();
    void load(EffectModelGroup *src);

    /* 0x00 */ u32 unk_00[3];
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
    r->unk_00 = p.unk_00;
    r->unk_01 = p.unk_01;
    r->unk_02 = p.unk_02;
    r->unk_03 = p.unk_03;
}

static inline void Unk_0208fb20_SetTag(EffectEmitterEntry *e, EffectEmitterTag t)
{
    e->unk_04 = t;
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
    if (SPL_LoadTexByVRAMManager(p->unk_50)) {
        if (SPL_LoadTexPlttByVRAMManager(p->unk_50)) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *EffectSpl_CopyResourceData(void *unused, Unk_02090140_Arg *p) {
    u32 size = p->unk_18;
    void *r = EffectSpl_Alloc(size);
    if (r) {
        MI_CpuCopy8(p->unk_20, r, size);
    }
    return r;
}

BOOL EffectSplProc::vfunc_00()
{
    BOOL result = FALSE;
    void *h;
    s32 r;

    sEffectSplProc = this;
    unk_50 = NULL;
    sEffectSplFrmHeap = NULL;
    unk_54 = 0;
    sEffectSplEmitPos = NULL;
    sEffectSplHeapMem = Mem_Alloc(0xc000);
    if (sEffectSplHeapMem != NULL) {
        sEffectSplFrmHeap = NNS_FndCreateFrmHeapEx(sEffectSplHeapMem, (void *)0xc000, NULL);
        unk_50 = SPL_Init((void *)EffectSpl_Alloc, 0x20, 0x64, 0x14, 0x15, 0x32);
        unk_50->unk_30 = 0x8800;
        if (unk_50 != NULL) {
            h = (void *)EffectSpl_LoadArchive(this);
            if (h != NULL) {
                func_020f92d4(unk_50, h);
                if (EffectSpl_LoadTextures((Unk_02090168_Arg *)this) != 0) {
                    r = (s32)EffectSpl_CopyResourceData(this, (Unk_02090140_Arg *)h);
                    if (r != 0) {
                        SPL_Load(unk_50, r);
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
            EffectSplPool_ReleaseAll(&unk_58);
            Mem_Free(sEffectSplHeapMem);
            sEffectSplHeapMem = NULL;
        }
    } else {
        MI_CpuFill8(unk_35c, 0, 0x14c0);
        EffectModels_LoadAll(unk_35c);
        _ZN19EffectSplEmitterMap8clearAllEv(unk_181c);
    }
    return result;
}

BOOL EffectSplProc::onExecute()
{
    EffectSplPool_Update(&unk_58);
    EffectModels_UpdateAll(unk_35c);
    SPL_Calc(unk_50);
    return TRUE;
}

extern "C" u16 EffectSpl_ToCurvedPos(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3)
{
    Unk_0208ffe4_V t(a1, a2, a3);
    return WorldCurve_ToCurved(a0, &t);
}

BOOL EffectSplProc::onDraw()
{
    func_020f8cb8(unk_50, gViewMtx, (void *)EffectSpl_ToCurvedPos);
    EffectModels_DrawAll(unk_35c);
    return TRUE;
}

BOOL EffectSplProc::vfunc_0c()
{
    if (sEffectSplFrmHeap != NULL) {
        NNS_FndDestroyFrmHeap(sEffectSplFrmHeap);
        sEffectSplFrmHeap = NULL;
    }
    if (sEffectSplHeapMem != NULL) {
        EffectSplPool_ReleaseAll(&unk_58);
        Mem_Free(sEffectSplHeapMem);
        sEffectSplHeapMem = NULL;
    }
    EffectModels_UnloadAll(unk_35c);
    _ZN19EffectSplEmitterMap10releaseAllEv(unk_181c);
    sEffectSplProc = NULL;
    return TRUE;
}

extern "C" s16 EffectSpl_GetSeasonTintVariant(EffectSplEmitter *o)
{
    s32 idx = TownState_GetSeasonPeriod();
    return sEffectSeasonTintTables[o->unk_80][idx];
}

extern "C" s16 EffectSpl_GetSeasonTint()
{
    return sEffectSeasonTint[TownState_GetSeasonPeriod()];
}

extern "C" void EffectSpl_ApplySceneTint(EffectSplEmitter *o)
{
    u32 f = o->unk_18->unk_00->unk_50;
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
        o->unk_5a = l6.v;
    }
}

extern "C" void EffectSpl_InitEmitterAtPos(EffectSplEmitter *o)
{
    s32 *v;
    EffectSpl_ApplySceneTint(o);
    v = sEffectSplEmitPos;
    if (v != NULL) {
        o->unk_20 = v[0] + o->unk_18->unk_00->unk_04;
        o->unk_24 = v[1] + o->unk_18->unk_00->unk_08;
        o->unk_28 = v[2] + o->unk_18->unk_00->unk_0c;
    }
}

extern "C" void EffectCb_InitAtPos(EffectEmitterEntry *e)
{
    EffectSpl_InitEmitterAtPos((EffectSplEmitter *)e->unk_0c);
}

extern "C" s32 EffectCb_UpdateTint(EffectEmitterEntry *e)
{
    EffectSpl_ApplySceneTint((EffectSplEmitter *)e->unk_0c);
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
    count = row->unk_08;
    ids = row->unk_04;
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
        ctx = &mgr->unk_181c;
        i = 0;
        zero18 = 0;
        zero14 = 0;
        for (; i < count; i++) {
            o = (Unk_0208fb20_Obj *)_ZN19EffectSplEmitterMap4findEi(ctx, *ids);
            if (o == NULL) {
                h = (Unk_0208fb20_Obj *)SPL_CreateWithInitialize(sEffectSplProc->unk_50, *ids, *p3);
                if (h != NULL) {
                    if (_ZN19EffectSplEmitterMap3addEii(ctx, *ids, h) != 0) {
                        h->unk_1c |= 2;
                        func_020f8b44(sEffectSplProc->unk_50, h, p1);
                        sub = h->unk_08;
                        if (p2 != NULL) {
                            sub->unk_20 = p2[zero14];
                        }
                    }
                }
            } else {
                func_020f8b44(sEffectSplProc->unk_50, o, p1);
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
            SPL_CreateWithInitialize(sEffectSplProc->unk_50, *ids, *p3);
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
    count = row->unk_08;
    ids = row->unk_04;
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
            e->unk_08 = 1;
            e->unk_09 = i;
            Unk_0208fb20_GetTag(&x, e->unk_04);
            x.unk_01 = sEffectSplProc->unk_54;
            x.unk_02 = i;
            Unk_0208fb20_SetTag(e, x);
            EffectEmitterCbs *cb = &e->unk_10;
            if (cb != NULL) {
                cb->unk_00(e);
            }
        } else {
            e = EffectSplPool_Alloc(pool, *ids, p1, (s32)p2, p3, sEffectSplProc->unk_54, i);
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
    sEffectSplProc->unk_54++;
    return ok;
}

extern "C" void EffectModel_Start(s32 a, void (*b)(EffectModel *))
{
    EffectModels_Start(sEffectSplProc->unk_35c, a, b);
}

extern "C" s32 EffectSplEntry_Start(EffectEmitterEntry *e, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, EffectEmitterTag tag)
{
    s32 r;
    u32 d, c, b;
    b = tag.unk_01;
    c = tag.unk_02;
    d = tag.unk_03;
    r = 0;
    e->unk_0c = (Unk_0208f8fc_Obj *)SPL_Create(sEffectSplProc->unk_50, id, a2);
    if (e->unk_0c != NULL) {
        e->unk_00 = id;
        e->unk_08 = 1;
        e->unk_10.unk_00 = cb->unk_00;
        e->unk_10.unk_04 = cb->unk_04;
        e->unk_04.unk_00 = tag.unk_00;
        e->unk_04.unk_01 = b;
        e->unk_04.unk_02 = c;
        e->unk_04.unk_03 = d;
        cb->unk_00(e);
        r = 1;
    }
    return r;
}

extern "C" void EffectSplEntry_Release(EffectEmitterEntry *e)
{
    if (e->unk_0c != NULL) {
        e->unk_0c->unk_1c = (e->unk_0c->unk_1c & ~1) | 1;
    }
    e->unk_00 = -1;
}


EffectSplPool::EffectSplPool()
{
    EffectSplPool *p = this;
    EffectEmitterEntry *e;
    s32 i;
    e = p->unk_04;
    do {
        e->unk_00 = -1;
        e++;
    } while (e != &p->unk_04[32]);
    p->unk_00 = 0;
    for (i = 0; i < 0x20; i++) {
        p->unk_04[i].unk_00 = -1;
    }
}

extern "C" void EffectSplPool_Update(EffectSplPool *p)
{
    s32 z = 0;
    s32 w = 0;
    EffectEmitterEntry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~w) {
            EffectEmitterCbs *cb = &e->unk_10;
            e->unk_08 = 0;
            if (cb != NULL) {
                if (cb->unk_04(e)) {
                    e->unk_08 = 1;
                }
            }
            {
                BOOL t;
                if (e->unk_08 == 1) {
                    t = TRUE;
                } else {
                    t = z;
                }
                if (t == 0) {
                    EffectSplEntry_Release(e);
                    p->unk_00 = i;
                }
            }
        }
        e++;
    }
}

extern "C" void EffectSplPool_ReleaseAll(EffectSplPool *p)
{
    s32 z = 0;
    EffectEmitterEntry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~z) {
            e->unk_08 = 0;
            EffectSplEntry_Release(e);
            p->unk_00 = i;
        }
        e++;
    }
}

extern "C" EffectEmitterEntry *EffectSplPool_FindInactive(EffectSplPool *p, s32 id)
{
    EffectEmitterEntry *e = p->unk_04;
    EffectEmitterEntry *r = NULL;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (id == e->unk_00) {
            BOOL f;
            if (e->unk_08 == 1) {
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
    tag.unk_01 = b;
    tag.unk_02 = c;
    for (i = 0; i < 0x20; i++) {
        cur = p->unk_00;
        if (p->unk_04[cur].unk_00 == -1) {
            tag.unk_00 = cur;
            if (EffectSplEntry_Start(&p->unk_04[cur], id, a2, a3, cb, tag)) {
                r = &p->unk_04[p->unk_00];
                p->unk_00 = (p->unk_00 + 1) % 0x20;
            }
            break;
        } else {
            p->unk_00 = (cur + 1) % 0x20;
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
    b->unk_00 = a;
    _ZN20EffectModelAnimFiles4loadEP16EffectModelGroup(b->unk_524, b);
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel4loadEP16EffectModelGroup(&b->unk_04[i], b);
    }
}

extern "C" void EffectModelGroup_Update(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel6updateEv(&b->unk_04[i]);
    }
}

extern "C" void EffectModelGroup_Draw(EffectModelGroup *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel4drawEv(&b->unk_04[i]);
    }
}

extern "C" void EffectModelGroup_Unload(EffectModelGroup *b)
{
    s32 i;
    _ZN20EffectModelAnimFiles4freeEv(b->unk_524);
    for (i = 0; i < 4; i++) {
        _ZN11EffectModel6unloadEv(&b->unk_04[i]);
    }
}

extern "C" void EffectModelGroup_Start(EffectModelGroup *b, void (*a)(EffectModel *))
{
    s32 i;
    EffectModel *c = b->unk_04;
    for (i = 0; i < 4; i++) {
        if (c->unk_00 == 0) {
            _ZN11EffectModel5startEP16EffectModelGroupPFvPS_E(c, b, a);
            break;
        }
        c++;
    }
}

void EffectModelAnimFiles::load(EffectModelGroup *src) {
    s32 idx = src->unk_00;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (sEffectModelAnimFiles[idx][i] != 0) {
            unk_00[i] = File_LoadAlloc(sEffectModelAnimFiles[idx][i], sEffectModelHeap, 4, 0);
        } else {
            unk_00[i] = 0;
        }
    }
}

void EffectModelAnimFiles::free() {
    s32 i;
    u32 *z = 0;
    for (i = 0; i < 3; i++) {
        if (unk_00[i] != 0) {
            Heap_Free(sEffectModelHeap, (void *)unk_00[i]);
            unk_00[i] = (u32)z;
        }
    }
}

BOOL EffectModel::loadModel(s32 idx) {
    BOOL r = TRUE;
    if (!_ZN11CachedModel10loadCachedEPvS0_(&unk_24, idx + 0x6d656666, sEffectModelFiles[idx])) {
        r = FALSE;
    }
    return r;
}

void EffectModel::load(EffectModelGroup *src) {
    s32 idx = src->unk_00;
    unk_00 = 0;
    if (loadModel(idx)) {
        u32 *r = src->unk_524;
        if (r[0] != 0) {
            _ZN11CachedModel16allocJointRecordEPv(&unk_24, sEffectModelHeap);
            _ZN9AnimModel11allocAnmObjEPv(&unk_24, sEffectModelHeap);
            s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
            _ZN14BlendAnimModel8initAnimEiiitt(&unk_24, t, 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(&unk_24);
        }
        if (r[1] != 0) {
            unk_e0 = 1;
            ModelAnim *e = &unk_e8[1];
            _ZN9ModelAnim11allocMatAnmEjPv(e, unk_24.unk_5c, sEffectModelHeap);
            s32 u = func_02106634(func_02106618((void *)r[1]), 0);
            _ZN9ModelAnim4initEiiit(e, u, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(e, _ZN5Model12getRenderObjEv(&unk_24));
        } else {
            unk_e0 = 0;
        }
        if (r[2] != 0) {
            unk_e4 = 1;
            ModelAnim *e = &unk_e8[2];
            _ZN9ModelAnim13allocJointAnmEjPv(e, unk_24.unk_5c, sEffectModelHeap);
            s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
            _ZN9ModelAnim4initEiiit(e, u, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(e, _ZN5Model12getRenderObjEv(&unk_24));
        } else {
            unk_e4 = 0;
        }
    }
}

void EffectModel::update() {
    if (unk_00 != 0) {
        _ZN9AnimModel8stepAnimEv(&unk_24);
        s32 i;
        for (i = 1; i < 3; i++) {
            if ((&unk_dc)[i] != 0) {
                _ZN13AnimFrameCtrl4stepEv(&unk_e8[i]);
                *unk_e8[i].unk_18 = unk_e8[i].unk_08;
            }
        }
        if (_ZN13AnimFrameCtrl10isFinishedEv(unk_24.unk_9c) != 0) {
            unk_00 = 0;
        }
    }
}

void EffectModel::draw() {
    if (unk_00 != 0) {
        s32 v[3];
        s32 r = WorldCurve_ToCurved(v, unk_04);
        func_020e8388(data_021f47e0, v[0], v[1], v[2]);
        func_020e8434(data_021f47e0, r);
        func_020e8464(data_021f47e0, unk_1c, unk_1e, unk_20);
        func_020e84f8(data_021f47e0, unk_10, unk_14, unk_18);
        *(Unk_0208f480_Mtx *)unk_24.unk_64 = *(Unk_0208f480_Mtx *)data_021f47e0;
        _ZN9AnimModel12drawAnimatedEPv(&unk_24, 0);
        volatile u16 a, b;
        a = SceneLights_GetRoomColor();
        b = a;
        NNS_G3dMdlSetMdlEmi(unk_24.unk_5c, 0, b);
    }
}

void EffectModel::unload() {
    _ZN11CachedModel7releaseEv(&unk_24);
}

void EffectModel::start(EffectModelGroup *src, void (*cb)(EffectModel *)) {
    unk_00 = 1;
    unk_10 = 0x1000;
    unk_14 = 0x1000;
    unk_18 = 0x1000;
    unk_1c = 0;
    unk_1e = 0;
    unk_20 = 0;
    u32 *r = src->unk_524;
    s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
    _ZN14BlendAnimModel8initAnimEiiitt(&unk_24, t, 1, 0x1000, 0, 0);
    if (unk_e0 != 0) {
        s32 u = func_02106634(func_02106618((void *)r[1]), 0);
        _ZN9ModelAnim4initEiiit(&unk_e8[1], u, 1, 0x1000, 0);
    }
    if (unk_e4 != 0) {
        s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
        _ZN9ModelAnim4initEiiit(&unk_e8[2], u, 1, 0x1000, 0);
    }
    cb(this);
}

void EffectSplEmitterMapPair::clear() {
    unk_00 = -1;
    unk_04 = 0;
}

void EffectSplEmitterMapPair::release() {}

void EffectSplEmitterMap::clearAll() {
    EffectSplEmitterMapPair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->clear();
    }
}

void EffectSplEmitterMap::releaseAll() {
    EffectSplEmitterMapPair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->release();
    }
}

s32 EffectSplEmitterMap::find(s32 key) {
    EffectSplEmitterMapPair *p = unk_00;
    s32 i;
    s32 r = 0;
    for (i = r; i < 10; p++, i++) {
        if (key == p->unk_00) {
            r = p->unk_04;
            break;
        }
    }
    return r;
}

BOOL EffectSplEmitterMap::add(s32 key, s32 val) {
    EffectSplEmitterMapPair *p = unk_00;
    s32 i;
    BOOL r = FALSE;
    for (i = r; i < 10; p++, i++) {
        if (p->unk_00 == -1) {
            p->unk_00 = key;
            p->unk_04 = val;
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

