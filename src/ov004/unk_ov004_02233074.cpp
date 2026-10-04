// mwcc-version: 1.2/base
// ov004 TU32: .text 0x02233074-0x02235fd0 (furniture/TV resource slots, tile placement helpers, actor tables, scene object 0224e9d8)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/Unk_ov004_Vec3.h"
#include "game/Unk_0203389c_Vec.h"
#include "gfx/ModelSlotPool.h"
#include "room/FtrActorTable.h"
#include "room/FtrPreviewer.h"
#include "room/FtrSwitch.h"
#include "snd/TvSound.h"
#include "game/GroundInfoBase.h"
#include "game/GroundInfo.h"
#include "room/FtrActor.h"

// other modules' symbols by their real names
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define TvSound_callRelease _ZN7TvSound11callReleaseEv
#define TvSound_callReset _ZN7TvSound9callResetEv
#define func_02004b60 _ZN6ItemIdD1Ev
#define func_0203442c _ZN6ItemIdC1Ev
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_drawNoGeCmd _ZN5Model11drawNoGeCmdEv
#define Model_setResourceAndBind _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define TexPatVramAnim_update _ZN14TexPatVramAnim6updateEv
#define TexPatVramAnim_init _ZN14TexPatVramAnim4initEPhPKcS2_S0_S0_h
#define func_02056d54 _ZN14TexPatVramAnimD1Ev
#define func_02056d8c _ZN14TexPatVramAnimC1Ev
#define ActorPlacedCollider_setupForActorAt _ZN19ActorPlacedCollider15setupForActorAtEPvP4Vec3iijjjhi
#define ActorCollider_submit _ZN13ActorCollider6submitEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ModelSlotPool_init _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE
#define func_02133150 _s32_div_f
#define FtrActor_startPull _ZN8FtrActor9startPullEs
#define FtrActor_startPush _ZN8FtrActor9startPushEs
#define FtrActor_startRotate _ZN8FtrActor11startRotateEi
#define FtrActor_canMoveBy _ZN8FtrActor9canMoveByEi
#define FtrActor_canRotateBy _ZN8FtrActor11canRotateByEi
#define FtrActor_playSound2 _ZN8FtrActor10playSound2Ev
#define FtrActor_playSound1 _ZN8FtrActor10playSound1Ev
#define FtrActor_playSound0 _ZN8FtrActor10playSound0Ev
#define FtrActor_isSoundingClock _ZN8FtrActor15isSoundingClockEv
#define FtrActor_isCabinClock _ZN8FtrActor12isCabinClockEv
#define FtrActor_isGyroid _ZN8FtrActor8isGyroidEv
#define FtrActor_isTvOn _ZN8FtrActor6isTvOnEv
#define func_ov004_0220af14 _ZN11FtrHeadwear8syncAct1Ev
#define func_ov004_0220af28 _ZN11FtrHeadwear8syncAct0Ev
#define FtrShirt_syncAct0 _ZN8FtrShirt8syncAct0Ev
#define FtrShirt_syncAct1 _ZN8FtrShirt8syncAct1Ev
#define func_ov004_0220e738 _ZN5FtrTv19func_ov004_0220e738Ev
#define func_ov004_0220f29c _ZN9FtrStereo19func_ov004_0220f29cEv
#define func_ov004_0220f2a8 _ZN9FtrStereo19func_ov004_0220f2a8Ev
#define FtrBed_checkStepTile _ZN6FtrBed13checkStepTileEP20Unk_ov004_022108f0_ViS1_
#define func_ov004_022326fc _ZN14MuseumAquariumC1Ev




struct Unk_ov004_02235528_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0224e98c_Entry {
    void *(*create)();
    u16 executePriority;
    u16 drawPriority;
};

extern s32 data_020c8cb8;

// Zero-initialised 3-word object whose (empty) destructor lives in main
class FxVec3 {
public:
    FxVec3() {}
    FxVec3(s32 v) {
        x = v;
        y = 0;
        z = 0;
    }
    ~FxVec3();
    s32 x, y, z;
};

// ---- records / tables
struct FtrSoundRecord {
    u16 se0;
    u16 se1;
    u16 se2;
    u16 se3;
};

struct TvScheduleDay {
    const u8 *entries;
    s32 numEntries;
};

struct Unk_ov004_02233330_Time {
    u16 hourMinute;
    u8 minute;
    u8 hour;
    u32 unk_04;
};

struct Unk_ov004_02233244_Src {
    u8 pad_00[0xb];
    u8 unk_0b;
};

struct Unk_ov004_022332b8_Buf {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

// P: 0xa8-byte TV/ftr resource slot (member sub-object TexPatVramAnim at +0x10)
struct TvProgSlot {
    void *heap;
    u32 screenTex;
    u32 progTex;
    u32 progTexPat;
    u32 texPatAnim[0x90 / 4];
    s32 program;
    s16 weather;
    u16 loopCount;
};

// Q: holder of two P slots
struct TvScreen {
    s16 curSlot;
    TvProgSlot slots[2];
    u32 screenTex;
    void *soundHeap;
    void *tvSound;
};

struct Unk_ov004_02233b3c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02233b3c_Mat {
    s32 v[12];
};

// R: furniture model wrapper (AnimModel at +0x2c)
struct FtrMoveAnim {
    u8 isPlaying;
    s32 posX;
    s32 posY;
    s32 posZ;
    void *heap;
    void *anmArc;
    u32 pushAnim;
    u32 pullAnim;
    u32 haniwaAnim;
    void *modelArc;
    u32 resMdl;
    u8 model[0x64];
    Unk_ov004_02233b3c_Mat modelMtx;
    u8 unk_c0[8];
    u8 animFrameCtrl[0x1c];
};

struct Unk_ov004_02233b90_In {
    u8 pad_00[0x4c];
    Unk_ov004_02233b3c_V3 trans;
};

struct Unk_ov004_02233b90_Vt {
    u8 command;
    u8 nodeId;
};

struct Unk_ov004_02233b90_Sub {
    u8 pad_00[0x2c];
    FtrMoveAnim *ptrUser;
};

struct Unk_ov004_02233b90_Obj {
    Unk_ov004_02233b90_Vt *c;
    Unk_ov004_02233b90_Sub *pRenderObj;
    u8 pad_08[0xb4 - 0x8];
    Unk_ov004_02233b90_In *pJntAnmResult;
};

struct Unk_ov004_022337d4_Path {
    u16 item;
    char path[0x2a];
};

struct Unk_ov004_022337d4_Arc {
    u32 unk_00[0x68 / 4];
};

struct Unk_ov004_02233d2c_Obj {
    u8 pad_00[0x77c];
    s32 kind;
};

struct Unk_ov004_02233f3c_P {
    s16 x, y;
    Unk_ov004_02233f3c_P(s16 a, s16 b) : x(a), y(b) {}
};

struct Unk_ov004_022341c0_Buf {
    u32 unk_00, unk_04;
};

struct Unk_ov004_02233f3c_World {
    void *cells;
    u32 w, h;
};
typedef Unk_ov004_02233f3c_World Unk_ov004_02234a48_Grid;

struct Unk_ov004_02233f3c_V3 {
    s32 x, y, z;
    Unk_ov004_02233f3c_V3() {}
    ~Unk_ov004_02233f3c_V3() {}
};







// main's 0x18-byte pool object
typedef void *(*Unk_0209c1a4_Alloc)(u32, u32);
typedef void (*Unk_0209c15c_Fn)();

// ---- classes of unk_022350c8 (symbols name their methods)

class FtrActorTable;
class FtrActorGrid;
class FtrContactSet;
class FtrActorHeap;


// slot (0x40)
class FtrContact {
public:
    s32 actorIndex;
    Unk_ov004_02235528_V3 prevPlayerPos;
    Unk_ov004_02235528_V3 playerPos;
    s32 depth;
    Unk_ov004_02235528_V3 contactPoint;
    Unk_ov004_02235528_V3 clampedContactPoint;
    s16 pushAngle;
    s32 side;
    FtrContact();
    ~FtrContact();
    s32 getStepDistance();
    void set(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void clear();
    s32 getActorIndex();
    s16 getPushAngle();
    s32 getSide();
    Unk_ov004_02235528_V3 *getClampedContactPoint();
    Unk_ov004_02235528_V3 *getContactPoint();
    s32 getDepth();
    Unk_ov004_02235528_V3 *getPlayerPos();
    Unk_ov004_02235528_V3 *getPrevPlayerPos();
};

class FtrContactSet {
public:
    FtrContact contacts[2];
    FtrContactSet();
    ~FtrContactSet();
    BOOL setContact(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void clear();
    void *startPull();
    void *canPull();
    void *startPush();
    void *canPush();
    Unk_ov004_02235528_V3 *makeStepVec(s16 v);
    void *canMoveAt(s32 v);
    void *startRotatePlus90();
    void *canRotatePlus90();
    void *startRotateMinus90();
    void *canRotateMinus90();
    void *startRotateBy(s32 v);
    void *canRotateBy(s32 v);
    void requestToggle();
    void *getActor(u32 idx);
    FtrContact *findContact(void *v);
    FtrContact *getContact(u32 idx);
};

// 16x16 x 2 cell grid
class FtrActorGrid {
public:
    u8 cells[2][16][16];
    FtrActorGrid();
    ~FtrActorGrid();
    FtrActor *getActorAtPos(void *p, s32 layer);
    FtrActor *getActor(s32 x, s32 y, s32 layer);
    s32 getIndex(s32 x, s32 y, s32 layer);
    BOOL clearCell(s32 id, s32 x, s32 y, u8 layer);
    BOOL setCell(s32 id, s32 x, s32 y, u8 layer);
    void clear();
};

// heap wrapper
class FtrActorHeap {
public:
    u32 heap;
    FtrActorHeap();
    ~FtrActorHeap();
    void free(void *p);
    void alloc();
    void destroy();
    BOOL create(s32 n);
    void reset();
};

// sound handle wrapper
class FtrSoundEmitter {
public:
    u8 posNode[0x1c];
    u8 isAttached;
    void setPitch(u32 a);
    void setPan(u32 a);
    void playOnce(u32 a, u32 b);
    void play(u32 a, u32 b);
    void release();
    void attach();
};

// ---- classes of unk_02235984


// object with a byte flag at +0x1c
class Unk_ov004_02235984 {
public:
    /* 0x00 */ u8 posNode[0x1c];
    /* 0x1c */ u8 isAttached;

    void resetAttached();
};

// small helper at +0x50 of the main object, flag at +0x10
class FtrSoundList {
public:
    /* 0x00 */ u8 posList[0x10];
    /* 0x10 */ u8 initialized;

    void update();
    void tryInit();
    void *destroy();
    void reset();
    void getList();
    u32 checkInitialized();
    u32 isInitialized();
};

// main object, vtable 0x0224e9d8
class FurnitureManager : public GameProc {
public:
    FurnitureManager();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FurnitureManager();

    /* 0x50 */ FtrSoundList soundList;
    /* 0x64 */ TvScreen tvScreen;
    /* 0x1c4 */ FtrMoveAnim moveAnim;
    /* 0x2a8 */ u8 tvSoundStarted;
    /* 0x2a9 */ u8 tvWasOff;
    /* 0x2ac */ s32 lastTvProgram;
    /* 0x2b0 */ u8 tvProgramChanged;
};

extern FtrPreviewer sFtrPreviewer;
extern FtrActorTable sFtrActorTable;
extern FtrContactSet sFtrContactSet;
extern FtrActorGrid sFtrActorGrid;
extern FtrActorHeap sFtrActorHeap;
extern ModelSlotPool sFtrMgrPool;
extern FxVec3 sFtrRemovePos;
extern s32 sFtrMgrSoundRangeSq;

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
extern s16 data_02135f44[];
extern Unk_ov004_02233f3c_World *gSceneBlockMap;
extern u8 gBackup[];
extern void *gBgHeap;
extern u8 gSavePlayers[];
extern Unk_ov004_02233244_Src data_021ed2b0;
extern s32 data_021f47e0[];
extern void *gCurrentHeap;
extern Unk_ov004_Vec3 gVec3Zero;
extern const u8 sFtrPlaceDirOrder[4];
extern const s8 sFtrProbeDirOffsets[4];
extern const FtrSoundRecord sFtrSoundNoneRecord;
extern const s32 sFtrPickRangeByLayer[2];
extern const TvScheduleDay sTvScheduleByWeekday[7];
extern const u8 sTvScheduleDay0[0x44];
extern const u8 sTvScheduleDay6[0x4c];
extern const u8 sTvScheduleDay1[0x50];
extern const u8 sTvScheduleDay2[0x50];
extern const u8 sTvScheduleDay5[0x50];
extern const u8 sTvScheduleDay3[0x54];
extern const u8 sTvScheduleDay4[0x54];
extern const u16 sFtrKindProfiles[0x30];
extern const FtrSoundRecord sFtrSoundTable[0x6e9];
extern const char *sFtrMoveAnimModelNamePtr;
extern const char *sTvWeatherNames[11];
extern u8 sFtrMgrSaleMode;
extern u8 sFtrMgrTvSoundEnabled;
extern u16 sFtrMgrCycleCounter;
extern FurnitureManager *sFurnitureManager;
extern s8 sHouseRoachTurnCounter;
extern u8 *sHouseRoachVillager;
void MTX_MultVec43(void *v, void *m, void *out);
void VEC_Add(void *, void *, void *);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffd028(void *, void *);
s32 Math_AngleXZ(void *a, void *b);
s32 Actor_spawn(u32, void *, s32, s32, u32);
void TvSound_callRelease(void *);
void TvSound_callReset(void *);
u32 TvSound_GetMaxSize(void);
void *TvSound_Create(void *, s32);
s32 Snd_PosListCanInit();
void Snd_PosNodeSetPitch(void *, u32);
void Snd_PosNodeRelease(void *);
void Snd_SetBgmPan(void *, u32);
void Snd_PosNodePlayOnce(void *, u32, u32);
void Snd_PosNodePlay(void *, u32, u32);
void Snd_PosNodeInit(void *, u32);
void Snd_PosListUpdate(void *);
void Snd_PosListInit(void *);
void func_02004b60();
s32 Ground_GetExitAtPos(void *);
s32 Ground_CanPlaceItem(s32 x, s32 y);
void func_0203442c();
void *MapBlock_GetItemPtr(void *, u32, u32, u8);
void *CarpetTex_Init(void *);
s32 Item_MakeFurniture(s32 a, s32 b);
s32 Item_GetFurnitureIndex(void *p);
s32 Item_GetFurnitureDirection(void *);
s32 Item_IsFurniture(void *p);
s32 Item_IsNormalItem(u16 *p);
u32 Item_GetPaperIndex(u16 *p);
u16 *BlockMap_GetItemPtrAtPos(Unk_ov004_02233f3c_World *w, void *q, u32 z);
u16 *BlockMap_GetItemPtr(Unk_ov004_02233f3c_World *w, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void FieldPos_FromUnitCenter(Unk_ov004_Vec3 *out, s32 x, s32 z);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
s32 Backup_GetStatus(void *p);
s32 FtrSync_RequestToggleGyroid(s32, void *, s32);
s32 FtrSync_ChangeAct(void *, s32, s32, s32);
s16 *FtrFootprint_GetTileOffset(Unk_ov004_022341c0_Buf *b, u32 i);
u32 FtrFootprint_GetTileCount(Unk_ov004_022341c0_Buf *b);
void FtrFootprint_Destruct(Unk_ov004_022341c0_Buf *b);
void FtrFootprint_Init(Unk_ov004_022341c0_Buf *b, void *cell);
s32 FtrInfo_TestIndoorFlag2(s32 a);
s32 FtrInfo_GetDmaUnk04(s32 a);
s32 FtrInfo_TestAlwaysFlag4(s32);
s32 FtrInfo_GetUnk05(s32 a);
s32 FtrInfo_GetDmaUnk02(s32);
void AnimModel_attachAnim(void *self);
void BlendAnimModel_initAnim(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void AnimModel_setFrame(void *p);
void AnimModel_stepAnim(void *p);
BOOL AnimModel_allocAnmObj(void *self, void *x);
void func_020548a0(void *self);
void func_020548d0(void *self);
void Model_setInitCallback(void *self, void *cb, void *arg);
void Model_drawNoGeCmd(void *self);
BOOL Model_setResourceAndBind(void *self, void *res, u32 a);
void Gfx3d_LoadTexAndPltt(void *a, void *b);
void *Gfx3d_CopyTex(void *a, void *heap);
BOOL AnimFrameCtrl_hasPassedFrame(void *p, u32 a);
BOOL AnimFrameCtrl_isFinished(void *self);
BOOL TexPatVramAnim_update(void *p);
BOOL TexPatVramAnim_init(void *self, void *hdr, const char *n1, const char *n2, void *x, void *y, u32 flag);
void func_02056d54(void *p);
void func_02056d8c(void *p);
void FurnitureHeap_Destroy();
void FurnitureHeap_Create();
void Item_ToPlacedForm(u16 *out, u16 *in, s32 n);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 Random_GlobalBelow(s32 a);
void *File_LoadAlloc(const char *a, void *b, s32 c, s32 d);
s32 ActorPlacedCollider_setupForActorAt(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 ActorCollider_submit(void *a);
FtrActor *PlayerActor_GetActor(s32 a);
s32 PlayerData_GetCurrent(void);
s32 PlayerDataArray_FindById(void *a, s32 b);
s32 PlayerData_getPlayerId(...);
void ModelSlotPool_init(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
s32 Date_GetWeatherPeriod(void *);
s32 Clock_GetWeekday();
void Clock_GetMinuteHour(void *);
void Clock_GetDateTime(void *);
s32 Scene_GetMaxFurniture(s32);
s32 Scene_GetCurrent();
BOOL Scene_InVillagerHouse();
BOOL Scene_InMuseumRoom();
s32 Scene_InNookShop();
BOOL Scene_InUnk6Or7();
BOOL Scene_InUnk6To8();
BOOL Scene_InHouseRoom();
void *WallpaperTexBuf_Init(void *);
s32 Math_AngleDiffAbs(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
void Mtx43_SetTranslate(s32 *m, s32 x, s32 y, s32 z);
void Mtx43_RotateY(s32 *m, s32 a);
void *Mem_Free(void *p);
void Heap_Free(void *heap, void *p);
void *Heap_Alloc(void *heap, s32 size);
#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_destroy2 _ZN4Heap8destroy2Ev
void Heap_destroy2(void *p);
void *FrameHeap_Create(u32 size, void *heap);
u32 ExpHeap_Create(u32, u32);
s32 Vec_RotateY(Unk_ov004_02235528_V3 *, s32);
s32 Vec_DistXZ(void *a, void *b);
void Vec_DivScalar(void *, s32);
void Vec_Sub(void *out, void *a, void *b);
void ProcBase_RequestDelete(void *p);
#define SndPosList_release _ZN10SndPosList7releaseEv
void SndPosList_release(void *);
void *func_021012bc(const char *name);
void func_02101310(void *buf);
BOOL func_02101340(void *buf, const char *name, void *data);
void *NNS_G3dGetTex(void *p);
void *NNS_G3dGetMdlSet(void *p);
void *func_021065dc(void *p);
void *func_021065f8(void *p, s32 a);
void *func_02106690(void *p);
void *func_021066ac(void *p, s32 a);
s32 func_02133150(s32 a, s32 b);
s32 FtrActor_startPull(void *, s32);
s32 FtrActor_startPush(void *, s32);
s32 FtrActor_startRotate(void *, s32);
void FtrActor_GetItemId(u16 *out, FtrActor *o);
s32 FtrActor_PredIsSeatOrBed();
BOOL FtrActor_PredIsStereo(FtrActor *);
s32 FtrActor_canMoveBy(void *, void *);
s32 FtrActor_canRotateBy(void *, s32);
s32 FtrActor_AngleToDir(s32 a);
u32 FtrActor_GetLayer(void *);
s32 FtrActor_RequestToggle(void *);
u32 FtrActor_GetFtrIndex(void *o);
BOOL FtrActor_IsPosClearOfCharacters(Unk_ov004_Vec3 *, s32, s32, s32, s32);
void FtrActor_playSound2(void *);
void FtrActor_playSound1(void *);
void FtrActor_playSound0(void *);
BOOL FtrActor_isSoundingClock(FtrActor *);
BOOL FtrActor_isCabinClock(FtrActor *);
BOOL FtrActor_isGyroid(FtrActor *);
BOOL FtrActor_isTvOn(FtrActor *);
s32 FtrActor_GetArgMode(FtrActor *);
s32 FtrActor_GetArgFtrIndex(FtrActor *);
FtrActor *FtrActor_MakeSpawnArg(s32 a, s32 b, s32 c, s32 d, u32 e, s32 f);
s32 func_ov004_0220af14(void *p);
s32 func_ov004_0220af28(void *p);
s32 FtrShirt_syncAct0(void *p);
s32 FtrShirt_syncAct1(void *p);
void func_ov004_0220e738(FtrActor *);
void func_ov004_0220f29c(FtrActor *);
void func_ov004_0220f2a8(FtrActor *);
BOOL FtrBed_checkStepTile(FtrActor *, Unk_ov004_Vec3 *, s32, Unk_ov004_Vec3 *);
void func_ov004_022326fc(void *);
void func_ov004_02235180();
void func_ov004_022356cc();
u32 _ZN12FtrSoundList7getListEv(FtrSoundList *);
}


extern "C" FurnitureManager *FurnitureManager_Create();
extern "C" u32 FtrMgr_IsSaleMode();
extern "C" void FtrMgr_SetSaleMode();
extern "C" FtrPreviewer *FtrPreviewer_GetInstance();
extern "C" FtrSoundList *FurnitureManager_GetSoundList();
extern "C" void FtrSoundEmitter_Destroy();
extern "C" FtrActorHeap *FtrActorHeap_GetInstance();
extern "C" FtrActorTable *FtrActorTable_GetInstance();
extern "C" FtrActorGrid *FtrActorGrid_GetInstance();
extern "C" FtrContactSet *FtrContactSet_GetInstance();
extern "C" s32 FtrMgr_IsFurnitureEditable();
extern "C" s32 FtrMgr_IsFurnitureUsable();
extern "C" s32 FtrMgr_SpawnFromArg(FtrActor *self);
extern "C" s32 FtrMgr_SpawnFurniture(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d);
extern "C" s32 FtrMgr_GetSurfaceHeight(s32 x, s32 y);
extern "C" s32 FtrMgr_GetSurfaceHeightAtPos(Unk_ov004_Vec3 *p);
extern "C" s32 FtrMgr_CheckBedStep(Unk_ov004_Vec3 *pos, s32 ang, Unk_ov004_Vec3 *out);
extern "C" s32 FtrMgr_CheckBedStepFront(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" s32 FtrMgr_CheckBedStepBack(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" s32 FtrMgr_TestStepTarget(Unk_ov004_Vec3 *p, s16 ang, s32 dist);
extern "C" BOOL FtrMgr_CanStepForward(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL FtrMgr_CanStepSidePlus90(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL FtrMgr_CanStepSideMinus90(Unk_ov004_Vec3 *pos, s32 ang);
extern "C" BOOL FtrMgr_BroadcastStereosAct0();
extern "C" void FtrMgr_SetSwitchAll(u32 v, BOOL (*f)(FtrActor *), s32 a);
extern "C" s32 FtrMgr_CountSwitchedOn(BOOL (*f)(FtrActor *));
extern "C" FtrActor *FtrMgr_SwitchOffRandom(BOOL (*f)(FtrActor *), s32 a);
extern "C" u16 FtrMgr_GetCycleCounter();
extern "C" s32 FtrMgr_PickFurnitureComment(u32 key);
extern "C" u32 FtrMgr_GetMaxFurniture();
extern "C" BOOL FtrMgr_IsShopScene();
extern "C" void func_ov004_02234ad0(void *);
extern "C" void FtrMgr_SpawnAllFromMap(void *);
extern "C" void FtrMgr_NotifyNearestCabinClock(void *);
extern "C" void FtrMgr_NotifyNearestSoundingClock(void *);
extern "C" void FurnitureManager_UpdateTvSound(FurnitureManager *self);
extern "C" s32 FtrMgr_FindFacingFurniture(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2);
extern "C" s32 FtrMgr_FindFurnitureFacingPlayer(s32 *a, s32 *b, u16 *c, u16 *d);
extern "C" u8 FtrMgr_GetActorLayer(u32 i);
extern "C" s32 FtrMgr_RemoveActor(s32 idx, u16 *p1, u16 *p2);
extern "C" s32 FtrMgr_RemoveActorByIndex(s32 idx);
extern "C" Unk_ov004_Vec3 *FtrMgr_PollRemovedPos(s32 idx);
extern "C" void FtrMgr_SetRemovePos(Unk_ov004_Vec3 *v);
extern "C" s32 FtrMgr_IsPickable(FtrActor *p);
extern "C" s32 FtrMgr_IsPickableByIndex(s32 i);
extern "C" s32 FtrMgr_GetProbeTile(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx);
extern "C" s32 FtrMgr_TryPlaceAt(void *out, s32 x, s32 y, s32 dir, s32 pl, u32 layer, s32 cx, s32 cy);
extern "C" s32 FtrMgr_FindPlacement(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode);
extern "C" s32 FtrMgr_FindPlacementForPlayer(void *a, u16 *b, u32 c);
extern "C" s32 FtrMgr_GetCurPlayerIndex();
extern "C" s32 FtrMgr_FindPlacementMyDesignA(void *a, u32 b, u32 c);
extern "C" s32 FtrMgr_FindPlacementMyDesignB(void *a, u32 b, u32 c);
extern "C" s32 FtrMgr_FindPlacementMyDesignD(void *a, u32 b, u32 c);
extern "C" s32 FtrMgr_FindPlacementMyDesignC(void *a, u32 b, u32 c);
extern "C" s32 FtrMgr_TakeDisplayedWearable(void *o0);
extern "C" s32 FtrMgr_TakeDisplayedWearableAt(s32 a, s32 b);
extern "C" s32 FtrMgr_RestoreDisplayedWearable(void *o0);
extern "C" s32 FtrMgr_RestoreDisplayedWearableAt(s32 a, s32 b);
extern "C" BOOL func_ov004_02233d04(void);
extern "C" BOOL func_ov004_02233d00(void);
extern "C" BOOL func_ov004_02233cfc(void);
extern "C" s32 FurnitureManager_GetTvTex(void);
extern "C" s32 FurnitureManager_GetTvProgram(void);
extern "C" TvSound *FurnitureManager_GetTvSound(void);
extern "C" s32 FurnitureManager_GetTvLoopCount(void);
extern "C" s32 FurnitureManager_GetTvFrame(void);
extern "C" void FurnitureManager_SetTvProgramChanged(void);
extern "C" u8 FurnitureManager_IsTvProgramChanged(void);
extern "C" void FtrMoveFlag_Init(u8 *p);
extern "C" void FtrMoveFlag_Destroy(u8 *p);
extern "C" void *FurnitureManager_GetMoveAnim(void);
extern "C" void FtrMoveAnim_NodeCallback(Unk_ov004_02233b90_Obj *o);
extern "C" void FtrMoveAnim_InstallCallback(FtrMoveAnim *r);
extern "C" void *FtrMoveAnim_Construct(FtrMoveAnim *r);
extern "C" void *FtrMoveAnim_Destruct(FtrMoveAnim *r);
extern "C" void FtrMoveAnim_Load(FtrMoveAnim *r);
extern "C" void FtrMoveAnim_Unload(FtrMoveAnim *r);
extern "C" void *FtrMoveAnim_GetMtx(FtrMoveAnim *r);
extern "C" void FtrMoveAnim_SetPos(FtrMoveAnim *r, Unk_ov004_02233b3c_V3 *v);
extern "C" BOOL FtrMoveAnim_Start(FtrMoveAnim *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e);
extern "C" BOOL FtrMoveAnim_StartPush(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c);
extern "C" BOOL FtrMoveAnim_StartPull(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c);
extern "C" BOOL FtrMoveAnim_Step(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *out);
extern "C" BOOL FtrMoveAnim_CreateHeap(FtrMoveAnim *r);
extern "C" BOOL FtrMoveAnim_DestroyHeap(FtrMoveAnim *r);
extern "C" BOOL FtrMoveAnim_LoadAnims(FtrMoveAnim *r);
extern "C" BOOL FtrMoveAnim_ClearAnims(FtrMoveAnim *r);
extern "C" BOOL FtrMoveAnim_LoadModel(FtrMoveAnim *r);
extern "C" BOOL FtrMoveAnim_ClearModel(FtrMoveAnim *r);
extern "C" u32 FtrMoveAnim_GetPushAnim(FtrMoveAnim *r);
extern "C" u32 FtrMoveAnim_GetPullAnim(FtrMoveAnim *r);
extern "C" u32 FtrMoveAnim_GetHaniwaAnim(FtrMoveAnim *r);
extern "C" void *TvProgSlot_Construct(TvProgSlot *p);
extern "C" void *TvProgSlot_Destruct(TvProgSlot *p);
extern "C" void *TvProgSlot_Init(TvProgSlot *p, u32 a);
extern "C" s32 TvWeather_GetName(u32 i);
extern "C" BOOL TvProgSlot_Load(TvProgSlot *p, u32 id, s32 x);
extern "C" void TvProgSlot_FreeFiles(TvProgSlot *p);
extern "C" void TvProgSlot_Update(TvProgSlot *p);
extern "C" void TvProgSlot_Release(TvProgSlot *p);
extern "C" s32 TvProgSlot_GetProgram(TvProgSlot *p);
extern "C" s32 TvProgSlot_GetWeather(TvProgSlot *p);
extern "C" u16 TvProgSlot_GetLoopCount(TvProgSlot *p);
extern "C" u32 TvProgSlot_GetFrame(TvProgSlot *p);
extern "C" void *TvScreen_Construct(TvScreen *q);
extern "C" void *TvScreen_Destruct(TvScreen *q);
extern "C" void TvScreen_Load(TvScreen *q);
extern "C" BOOL TvScreen_SetProgram(TvScreen *o, s32 a, s32 b);
extern "C" void TvScreen_UpdateSchedule(TvScreen *o);
extern "C" void TvScreen_Update(TvScreen *o);
extern "C" u8 TvSchedule_GetCurrentProgram(void *);
extern "C" s32 TvWeather_IsUnkPeriod();
extern "C" s32 TvWeather_GetForecastIndex(void *);
extern "C" void TvScreen_Release(TvScreen *o);
extern "C" BOOL TvScreen_IsLoaded(TvScreen *o);
extern "C" s32 TvScreen_GetProgram(TvScreen *o);
extern "C" s32 TvScreen_GetWeather(TvScreen *o);
extern "C" s32 TvScreen_GetTex(TvScreen *o);
extern "C" s32 TvScreen_GetSound(TvScreen *o);
extern "C" s32 TvScreen_GetLoopCount(TvScreen *o);
extern "C" s32 TvScreen_GetFrame(TvScreen *o);
extern "C" const FtrSoundRecord *FtrSound_GetRecord(s32 idx);
extern "C" u16 FtrSound_GetSe0(s32 idx);
extern "C" u16 FtrSound_GetSe1(s32 idx);
extern "C" u16 FtrSound_GetSe2(s32 idx);
extern "C" u16 FtrSound_GetSe3(s32 idx);
extern "C" void FtrMgr_PlaySeatSound1At(s32 a);
extern "C" void FtrMgr_PlaySeatSound0At(s32 a);
extern "C" void FtrMgr_PlaySeatSound2At(s32 a);

#define TILE_ENTRY(name, base)                                              \
    extern "C" s32 name(void *a, u32 b, u32 c) {                            \
        s32 idx = FtrMgr_GetCurPlayerIndex();                                    \
        s32 r;                                                              \
        if (idx != -1) {                                                    \
            u32 v = b + idx * 8;                                            \
            u16 t = (v < 0x20) ? (base + v * 4) : base;                     \
            r = FtrMgr_FindPlacementForPlayer(a, &t, c);                              \
        } else {                                                            \
            r = 2;                                                          \
        }                                                                   \
        return r;                                                           \
    }


// forward declarations of the unit's data
extern "C" const u8 sFtrPlaceDirOrder[4];
extern "C" const s8 sFtrProbeDirOffsets[4];
extern "C" const FtrSoundRecord sFtrSoundNoneRecord;
extern "C" const s32 sFtrPickRangeByLayer[2];
extern "C" const TvScheduleDay sTvScheduleByWeekday[7];
extern "C" const u8 sTvScheduleDay0[0x44];
extern "C" const u8 sTvScheduleDay6[0x4c];
extern "C" const u8 sTvScheduleDay1[0x50];
extern "C" const u8 sTvScheduleDay2[0x50];
extern "C" const u8 sTvScheduleDay5[0x50];
extern "C" const u8 sTvScheduleDay3[0x54];
extern "C" const u8 sTvScheduleDay4[0x54];
extern "C" const u16 sFtrKindProfiles[0x30];
extern "C" const FtrSoundRecord sFtrSoundTable[0x6e9];
extern "C" char data_ov004_0224e934[8];
extern "C" char data_ov004_0224e93c[8];
extern "C" char data_ov004_0224e944[8];
extern "C" char data_ov004_0224e94c[8];
extern "C" char data_ov004_0224e954[8];
extern "C" char data_ov004_0224e95c[8];
extern "C" char data_ov004_0224e964[8];
extern "C" char data_ov004_0224e96c[8];
extern "C" char data_ov004_0224e974[8];
extern "C" char data_ov004_0224e97c[8];
extern "C" char data_ov004_0224e984[8];
extern "C" Unk_ov004_0224e98c_Entry sFurnitureManagerProfile;
extern "C" char sFtrMoveAnimModelName[0x10];
extern "C" const char *sFtrMoveAnimModelNamePtr;
extern "C" const char *sTvWeatherNames[11];
extern "C" u8 sFtrMgrSaleMode;
extern "C" u8 sFtrMgrTvSoundEnabled;
extern "C" u16 sFtrMgrCycleCounter;
extern "C" FurnitureManager *sFurnitureManager;

namespace Unk_ov004_02233f3c_Ns {
extern "C" s32 FtrMgr_TryPlaceAt(void *out, s32 x, s32 y, s32 dir, s32 pl, u8 layer, s32 cx, s32 cy);
}

static inline BOOL Unk_ov004_02234f30_Is37(FtrActor *m) {
    if (*(u16 *)((u8 *)m + 0xc) == 0x37) {
        return TRUE;
    }
    return FALSE;
}

// @0x2235fb4 unk_02235984.cpp
extern "C" FurnitureManager *FurnitureManager_Create() {
    FurnitureManager *p = new FurnitureManager;
    return p;
}

// @0x2235f78 unk_02235984.cpp
FurnitureManager::FurnitureManager() {
    soundList.reset();
    TvScreen_Construct(&tvScreen);
    FtrMoveAnim_Construct(&moveAnim);
}

// @0x2235ef4 unk_02235984.cpp
FurnitureManager::~FurnitureManager() {
    FtrMoveAnim_Destruct(&moveAnim);
    TvScreen_Destruct(&tvScreen);
    soundList.destroy();
}

// @0x2235dfc unk_02235984.cpp
BOOL FurnitureManager::onCreate() {
    if (Scene_InHouseRoom() || Scene_InVillagerHouse()) {
        sFtrMgrTvSoundEnabled = 1;
    }
    tvWasOff = 1;
    tvSoundStarted = 0;
    lastTvProgram = 0;
    tvProgramChanged = 0;
    sFtrMgrSaleMode = FtrMgr_IsShopScene();
    sFtrActorHeap.create(FtrMgr_GetMaxFurniture());
    sFurnitureManager = this;
    FtrActorGrid_GetInstance()->clear();
    FtrContactSet_GetInstance()->clear();
    s32 flags = 0x1cc4;
    if (Scene_InMuseumRoom()) {
        flags = 0x1c00;
    }
    ModelSlotPool_init(&sFtrMgrPool, FtrMgr_GetMaxFurniture(), 0x2000, 0x80, flags, (void *)FurnitureHeap_Create,
                  (void *)FurnitureHeap_Destroy, (void *)"\x89\xc6\x8b\xef\x83\x7d\x83\x6c\x81\x5b\x83\x57\x83\x83\x81\x5b");
    func_ov004_02234ad0(this);
    if (FtrMgr_GetMaxFurniture() > 1) {
        TvScreen_Load(&tvScreen);
    }
    FtrMoveAnim_Load(&moveAnim);
    FtrPreviewer_GetInstance()->allocBuffers();
    FtrMgr_SpawnAllFromMap(this);
    return TRUE;
}

// @0x2235d7c unk_02235984.cpp
BOOL FurnitureManager::onExecute() {
    soundList.tryInit();
    soundList.update();
    sFtrMgrCycleCounter = (sFtrMgrCycleCounter + 1) % 0x28;
    if (FtrMgr_GetMaxFurniture() > 1) {
        if (Backup_GetStatus(gBackup) == 4) {
            if (!Scene_InUnk6To8()) {
                if (!Scene_InUnk6Or7()) {
                    TvScreen_UpdateSchedule(&tvScreen);
                    FurnitureManager_UpdateTvSound(this);
                    TvScreen_Update(&tvScreen);
                }
            }
        }
    }
    FtrMgr_NotifyNearestSoundingClock(this);
    FtrMgr_NotifyNearestCabinClock(this);
    FtrContactSet_GetInstance()->clear();
    return TRUE;
}

// @0x2235d78 unk_02235984.cpp
BOOL FurnitureManager::onDraw() {
    return TRUE;
}

// @0x2235d1c unk_02235984.cpp
BOOL FurnitureManager::onDelete() {
    soundList.checkInitialized();
    FtrMoveAnim_Unload(&moveAnim);
    if (FtrMgr_GetMaxFurniture() > 1) {
        TvScreen_Release(&tvScreen);
    }
    FtrPreviewer_GetInstance()->freeBuffers();
    sFtrMgrPool.destroy();
    sFurnitureManager = 0;
    FtrContactSet_GetInstance()->clear();
    sFtrActorHeap.destroy();
    return TRUE;
}

// @0x2235d10 unk_02235984.cpp
extern "C" u32 FtrMgr_IsSaleMode() {
    return sFtrMgrSaleMode;
}

// @0x2235d04 unk_02235984.cpp
extern "C" void FtrMgr_SetSaleMode() {
    sFtrMgrSaleMode = 1;
}

// @0x2235cc0 unk_02235984.cpp
FtrPreviewer::FtrPreviewer() {
    __cxa_vec_ctor(shownItems, 2, 2, (void *(*)(void *))func_0203442c, (void *(*)(void *, s32))func_02004b60);
    reset();
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        wallTexBuffers[i] = z;
        floorTexBuffers[i] = z;
    }
}

// @0x2235c9c unk_02235984.cpp
FtrPreviewer::~FtrPreviewer() {
    reset();
    __cxa_vec_cleanup(shownItems, 2, 2, (void *(*)(void *, s32))func_02004b60);
}

// @0x2235c78 unk_02235984.cpp
void FtrPreviewer::reset() {
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        actors[i] = z;
        shownItems[i] = 0xfff1;
        curSlot = z;
    }
}

// @0x2235c74 unk_02235984.cpp
s32 FtrPreviewer::getSampleIndex() {
    return sampleIndex;
}

// @0x2235c10 unk_02235984.cpp
void FtrPreviewer::allocBuffers() {
    u32 *g = (u32 *)gCurrentHeap;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5] == 0) {
            p[5] = (u32)Heap_Alloc(g, 0x10c4);
            u32 t5 = *(volatile u32 *)&p[5];
            if (t5) {
                t5 = (u32)WallpaperTexBuf_Init((void *)t5);
            }
            p[5] = t5;
        }
        if (p[7] == 0) {
            p[7] = (u32)Heap_Alloc(g, 0x20c4);
            u32 t7 = *(volatile u32 *)&p[7];
            if (t7) {
                t7 = (u32)CarpetTex_Init((void *)t7);
            }
            p[7] = t7;
        }
    }
}

// @0x2235bc8 unk_02235984.cpp
void FtrPreviewer::freeBuffers() {
    u32 *g = (u32 *)gCurrentHeap;
    volatile s32 z0 = 0;
    volatile s32 z1 = 0;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5]) {
            Heap_Free(g, (void *)p[5]);
            p[5] = z0;
        }
        if (p[7]) {
            Heap_Free(g, (void *)p[7]);
            p[7] = z1;
        }
    }
}

// @0x2235a54 unk_02235984.cpp
BOOL FtrPreviewer::showItem(u16 *p) {
    u16 v;
    s32 out;
    Item_ToPlacedForm(&v, p, 1);
    BOOL r = FALSE;
    volatile u16 *pv0 = &v;
    u32 a = *pv0;
    u32 b = *pv0;
    if (b >= 0x1100 && a <= 0x1143) {
        r = TRUE;
    }
    if (r) {
        BOOL in = FALSE;
        u32 x = *p;
        if (x < 0x1100 || x > 0x1143) {
        } else {
            in = TRUE;
        }
        sampleIndex = in ? x - 0x1100 : -1;
        v = 0x4a64;
    } else if (a >= 0x1144 && a <= 0x1187) {
        {
            BOOL in = FALSE;
            u32 x = *p;
            if (x < 0x1144 || x > 0x1187) {
            } else {
                in = TRUE;
            }
            sampleIndex = in ? x - 0x1144 : -1;
            v = 0x4a60;
        }
    } else if (a >= 0x1000 && a <= 0x10ff) {
        u32 idx = Item_GetPaperIndex(&v);
        u32 t;
        if (idx < 0x40) {
            t = idx * 4 + 0x4a68;
        } else {
            t = 0x4a68;
        }
        v = t;
    }
    u16 *pv = &shownItems[curSlot & 1];
    BOOL same;
    if (Item_IsFurniture(p)) {
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(pv);
        if (a == b) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == *pv) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same) {
        u32 *slot = &actors[curSlot & 1];
        if (*slot) {
            ProcBase_RequestDelete((void *)*slot);
            actors[curSlot & 1] = 0;
        }
        u8 n = (u8)((curSlot + 1) & 1);
        u32 *slot2 = &actors[n];
        if (*slot2 == 0) {
            if (FtrMgr_FindPlacementForPlayer(&out, &v, 2) == 3) {
                *slot2 = FtrMgr_SpawnFromArg((FtrActor *)out);
                shownItems[n] = *p;
                curSlot = n;
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @0x2235a2c unk_02235984.cpp
void FtrPreviewer::clear() {
    for (u32 i = 0; i < 2; i++) {
        if (actors[i]) {
            ProcBase_RequestDelete((void *)actors[i]);
        }
    }
    reset();
}

// @0x2235a1c unk_02235984.cpp
u32 FtrPreviewer::getWallBuffer() {
    return wallTexBuffers[curSlot & 1];
}

// @0x2235a0c unk_02235984.cpp
u32 FtrPreviewer::getFloorBuffer() {
    return floorTexBuffers[curSlot & 1];
}

// @0x2235a04 unk_02235984.cpp
extern "C" FtrPreviewer *FtrPreviewer_GetInstance() {
    return &sFtrPreviewer;
}

// @0x22359f0 unk_02235984.cpp
extern "C" FtrSoundList *FurnitureManager_GetSoundList() {
    FurnitureManager *o = sFurnitureManager;
    if (o) {
        return &o->soundList;
    }
    return 0;
}

// @0x22359e8 unk_02235984.cpp
void FtrSoundList::reset() {
    initialized = 0;
}

// @0x22359d8 unk_02235984.cpp
void *FtrSoundList::destroy() {
    SndPosList_release(this);
    return this;
}

// @0x22359b4 unk_02235984.cpp
void FtrSoundList::tryInit() {
    if (isInitialized() == 0) {
        if (Snd_PosListCanInit()) {
            Snd_PosListInit(this);
            initialized = 1;
        }
    }
}

// @0x223599c unk_02235984.cpp
void FtrSoundList::update() {
    if (isInitialized()) {
        Snd_PosListUpdate(this);
    }
}

// @0x2235994 unk_02235984.cpp
u32 FtrSoundList::checkInitialized() {
    return isInitialized();
}

// @0x2235990 unk_02235984.cpp
void FtrSoundList::getList() {
}

// @0x223598c unk_02235984.cpp
u32 FtrSoundList::isInitialized() {
    return initialized;
}

// @0x2235984 unk_02235984.cpp
void Unk_ov004_02235984::resetAttached() {
    isAttached = 0;
}

// @0x2235980 unk_022350c8.cpp
extern "C" void FtrSoundEmitter_Destroy() {
}

// @0x2235948 unk_022350c8.cpp
void FtrSoundEmitter::attach() {
    if (!isAttached) {
        FtrSoundList *h = FurnitureManager_GetSoundList();
        if (h != 0) {
            if (h->isInitialized()) {
                Snd_PosNodeInit(this, _ZN12FtrSoundList7getListEv(h));
                isAttached = 1;
            }
        }
    }
}

// @0x2235930 unk_022350c8.cpp
void FtrSoundEmitter::release() {
    if (isAttached) {
        Snd_PosNodeRelease(this);
        isAttached = 0;
    }
}

// @0x223591c unk_022350c8.cpp
void FtrSoundEmitter::play(u32 a, u32 b) {
    if (isAttached) {
        Snd_PosNodePlay(this, a, b);
    }
}

// @0x2235908 unk_022350c8.cpp
void FtrSoundEmitter::playOnce(u32 a, u32 b) {
    if (isAttached) {
        Snd_PosNodePlayOnce(this, a, b);
    }
}

// @0x22358f4 unk_022350c8.cpp
void FtrSoundEmitter::setPan(u32 a) {
    if (isAttached) {
        Snd_SetBgmPan(this, a);
    }
}

// @0x22358e0 unk_022350c8.cpp
void FtrSoundEmitter::setPitch(u32 a) {
    if (isAttached) {
        Snd_PosNodeSetPitch(this, a);
    }
}

// @0x22358d8 unk_022350c8.cpp
extern "C" FtrActorHeap *FtrActorHeap_GetInstance() {
    return &sFtrActorHeap;
}

// @0x22358c8 unk_022350c8.cpp
FtrActorHeap::FtrActorHeap() {
    reset();
}

// @0x22358c4 unk_022350c8.cpp
FtrActorHeap::~FtrActorHeap() {
}

// @0x22358bc unk_022350c8.cpp
void FtrActorHeap::reset() {
    heap = 0;
}

// @0x223588c unk_022350c8.cpp
BOOL FtrActorHeap::create(s32 n) {
    if (heap == 0) {
        heap = ExpHeap_Create(n * 0x93a, (u32)gCurrentHeap);
        return TRUE;
    }
    return FALSE;
}

// @0x2235870 unk_022350c8.cpp
void FtrActorHeap::destroy() {
    if (heap != 0) {
        Heap_destroy2((void *)heap);
    }
    reset();
}

// @0x2235860 unk_022350c8.cpp
void FtrActorHeap::alloc() {
    Heap_Alloc((void *)heap, 0x8d6);
}

// @0x2235854 unk_022350c8.cpp
void FtrActorHeap::free(void *p) {
    Heap_Free((void *)heap, p);
}

// @0x223584c unk_022350c8.cpp
extern "C" FtrActorTable *FtrActorTable_GetInstance() {
    return &sFtrActorTable;
}

// @0x223583c unk_022350c8.cpp
FtrActorTable::FtrActorTable() {
    clear();
}

// @0x2235838 unk_022350c8.cpp
FtrActorTable::~FtrActorTable() {
}

// @0x2235828 unk_022350c8.cpp
void FtrActorTable::clear() {
    for (u32 i = 0; i < 0x1c; i++) {
        actors[i] = 0;
    }
}

// @0x22357e0 unk_022350c8.cpp
s32 FtrActorTable::add(void *v) {
    for (u32 i = 0; i < FtrMgr_GetMaxFurniture(); i++) {
        if (actors[i] == v) {
            return TRUE;
        }
    }
    for (u32 i = 0; i < FtrMgr_GetMaxFurniture(); i++) {
        if (actors[i] == 0) {
            actors[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22357b0 unk_022350c8.cpp
s32 FtrActorTable::remove(void *v) {
    for (u32 i = 0; i < FtrMgr_GetMaxFurniture(); i++) {
        if (actors[i] == v) {
            actors[i] = 0;
            return TRUE;
        }
    }
    return FALSE;
}

// @0x2235788 unk_022350c8.cpp
s32 FtrActorTable::countUsed() {
    u32 n = 0;
    for (u32 i = 0; i < FtrMgr_GetMaxFurniture(); i++) {
        if (actors[i] != 0) {
            n++;
        }
    }
    return n;
}

// @0x223576c unk_022350c8.cpp
s32 FtrActorTable::countFree() {
    u32 n = FtrMgr_GetMaxFurniture();
    return n - countUsed();
}

// @0x2235740 unk_022350c8.cpp
s32 FtrActorTable::indexOf(void *v) {
    for (u32 i = 0; i < FtrMgr_GetMaxFurniture(); i++) {
        if (actors[i] == v) {
            return i;
        }
    }
    return -1;
}

// @0x2235720 unk_022350c8.cpp
FtrActor *FtrActorTable::get(u32 idx) {
    if (idx < FtrMgr_GetMaxFurniture()) {
        return (FtrActor *)actors[idx];
    }
    return 0;
}

// @0x2235718 unk_022350c8.cpp
extern "C" FtrActorGrid *FtrActorGrid_GetInstance() {
    return &sFtrActorGrid;
}

// @0x2235708 unk_022350c8.cpp
FtrActorGrid::FtrActorGrid() {
    clear();
}

// @0x2235704 unk_022350c8.cpp
FtrActorGrid::~FtrActorGrid() {
}

// @0x22356cc unk_022350c8.cpp
void FtrActorGrid::clear() {
    for (u32 l = 0; l < 2; l++) {
        for (u32 y = 0; y < 16; y++) {
            for (u32 x = 0; x < 16; x++) {
                cells[l][y][x] = 0xff;
            }
        }
    }
}

// @0x223568c unk_022350c8.cpp
BOOL FtrActorGrid::setCell(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &cells[layer & 1][y & 15][x & 15];
    s32 i = FtrActorTable_GetInstance()->indexOf((void *)id);
    if (i != -1) {
        *p = i;
        return TRUE;
    }
    return FALSE;
}

// @0x2235648 unk_022350c8.cpp
BOOL FtrActorGrid::clearCell(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &cells[layer & 1][y & 15][x & 15];
    if (FtrActorTable_GetInstance()->indexOf((void *)id) != -1) {
        *p = 0xff;
        return TRUE;
    }
    return FALSE;
}

// @0x2235624 unk_022350c8.cpp
s32 FtrActorGrid::getIndex(s32 x, s32 y, s32 layer) {
    u32 c = cells[layer & 1][y & 15][x & 15];
    if (c == 0xff) {
        return -1;
    }
    return c;
}

// @0x22355d8 unk_022350c8.cpp
FtrActor *FtrActorGrid::getActor(s32 x, s32 y, s32 layer) {
    u8 *p = &cells[layer & 1][y & 15][x & 15];
    u32 c = *p;
    if (c != 0xff && c < FtrMgr_GetMaxFurniture()) {
        if (FtrActorTable_GetInstance()->get(c) != 0) {
            return FtrActorTable_GetInstance()->get(*p);
        }
    }
    return 0;
}

// @0x22355b0 unk_022350c8.cpp
FtrActor *FtrActorGrid::getActorAtPos(void *p, s32 layer) {
    s32 x, y;
    FieldPos_ToUnit(&x, &y, p);
    return getActor(x, y, layer);
}

// @0x22355ac unk_022350c8.cpp
FtrContact::FtrContact() {
}

// @0x22355a8 unk_022350c8.cpp
FtrContact::~FtrContact() {
}

// @0x2235580 unk_022350c8.cpp
void FtrContact::clear() {
    actorIndex = -1;
    prevPlayerPos.x = 0;
    prevPlayerPos.y = 0;
    prevPlayerPos.z = 0;
    playerPos.x = 0;
    playerPos.y = 0;
    playerPos.z = 0;
    depth = 0;
    contactPoint.x = 0;
    contactPoint.y = 0;
    contactPoint.z = 0;
    clampedContactPoint.x = 0;
    clampedContactPoint.y = 0;
    clampedContactPoint.z = 0;
    pushAngle = 0;
    side = 4;
}

// @0x2235528 unk_022350c8.cpp
void FtrContact::set(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id != -1) {
        actorIndex = id;
        prevPlayerPos.x = a->x;
        prevPlayerPos.y = a->y;
        prevPlayerPos.z = a->z;
        playerPos.x = b->x;
        playerPos.y = b->y;
        playerPos.z = b->z;
        depth = c;
        contactPoint.x = d->x;
        contactPoint.y = d->y;
        contactPoint.z = d->z;
        clampedContactPoint.x = e->x;
        clampedContactPoint.y = e->y;
        clampedContactPoint.z = e->z;
        pushAngle = f;
        side = g;
    }
}

// @0x2235524 unk_022350c8.cpp
s32 FtrContact::getActorIndex() {
    return actorIndex;
}

// @0x2235520 unk_022350c8.cpp
Unk_ov004_02235528_V3 *FtrContact::getPrevPlayerPos() {
    return &prevPlayerPos;
}

// @0x223551c unk_022350c8.cpp
Unk_ov004_02235528_V3 *FtrContact::getPlayerPos() {
    return &playerPos;
}

// @0x22354f8 unk_022350c8.cpp
s32 FtrContact::getStepDistance() {
    Unk_ov004_02235528_V3 *a = getPlayerPos();
    Unk_ov004_02235528_V3 *b = getPrevPlayerPos();
    return Vec_DistXZ(a, b);
}

// @0x22354f4 unk_022350c8.cpp
s32 FtrContact::getDepth() {
    return depth;
}

// @0x22354f0 unk_022350c8.cpp
Unk_ov004_02235528_V3 *FtrContact::getContactPoint() {
    return &contactPoint;
}

// @0x22354ec unk_022350c8.cpp
Unk_ov004_02235528_V3 *FtrContact::getClampedContactPoint() {
    return &clampedContactPoint;
}

// @0x22354e8 unk_022350c8.cpp
s32 FtrContact::getSide() {
    return side;
}

// @0x22354e0 unk_022350c8.cpp
s16 FtrContact::getPushAngle() {
    return pushAngle;
}

// @0x22354d8 unk_022350c8.cpp
extern "C" FtrContactSet *FtrContactSet_GetInstance() {
    return &sFtrContactSet;
}

// @0x22354a4 unk_022350c8.cpp
FtrContact *FtrContactSet::getContact(u32 idx) {
    if (FtrMgr_IsFurnitureEditable()) {
        FtrContact *s = &contacts[idx & 1];
        if (s->getActorIndex() != -1) {
            return s;
        }
    }
    return 0;
}

// @0x2235464 unk_022350c8.cpp
FtrContact *FtrContactSet::findContact(void *v) {
    s32 idx = FtrActorTable_GetInstance()->indexOf(v);
    if (idx != -1) {
        for (u32 i = 0; i < 2; i++) {
            FtrContact *s = &contacts[i];
            if (idx == s->getActorIndex()) {
                return s;
            }
        }
    }
    return 0;
}

// @0x2235434 unk_022350c8.cpp
void *FtrContactSet::getActor(u32 idx) {
    FtrContact *s = getContact(idx);
    if (s != 0) {
        FtrActorTable *t = FtrActorTable_GetInstance();
        return t->get(s->getActorIndex());
    }
    return 0;
}

// @0x223539c unk_022350c8.cpp
void FtrContactSet::requestToggle() {
    void *o1 = getActor(1);
    FtrContact *s1 = getContact(1);
    if (o1 != 0 && s1 != 0) {
        BOOL k1 = TRUE;
        if (FtrInfo_TestAlwaysFlag4(FtrActor_GetFtrIndex(o1))) {
            if (s1->getSide()) {
                k1 = FALSE;
            }
        }
        if (k1) {
            if (FtrActor_RequestToggle(o1) != 0) {
                return;
            }
        }
    }
    void *o2 = getActor(0);
    FtrContact *s2 = getContact(0);
    if (o2 != 0 && s2 != 0) {
        BOOL k2 = TRUE;
        if (FtrInfo_TestAlwaysFlag4(FtrActor_GetFtrIndex(o2))) {
            if (s2->getSide()) {
                k2 = FALSE;
            }
        }
        if (k2) {
            if (FtrActor_RequestToggle(o2) != 0) {
                return;
            }
        }
    }
}

// @0x223537c unk_022350c8.cpp
void *FtrContactSet::canRotateBy(s32 v) {
    void *o = getActor(0);
    if (o != 0) {
        return (void *)FtrActor_canRotateBy(o, v);
    }
    return 0;
}

// @0x223535c unk_022350c8.cpp
void *FtrContactSet::startRotateBy(s32 v) {
    void *o = getActor(0);
    if (o != 0) {
        return (void *)FtrActor_startRotate(o, v);
    }
    return 0;
}

// @0x223534c unk_022350c8.cpp
void *FtrContactSet::canRotateMinus90() {
    return canRotateBy(-0x4000);
}

// @0x223533c unk_022350c8.cpp
void *FtrContactSet::startRotateMinus90() {
    return startRotateBy(-0x4000);
}

// @0x223532c unk_022350c8.cpp
void *FtrContactSet::canRotatePlus90() {
    return canRotateBy(0x4000);
}

// @0x223531c unk_022350c8.cpp
void *FtrContactSet::startRotatePlus90() {
    return startRotateBy(0x4000);
}

// @0x22352d0 unk_022350c8.cpp
void *FtrContactSet::canMoveAt(s32 v) {
    FtrContact *s = getContact(0);
    void *o = getActor(0);
    if (s != 0 && o != 0) {
        return (void *)FtrActor_canMoveBy(o, makeStepVec((s16)(v + s->getPushAngle())));
    }
    return 0;
}

extern "C" char data_ov004_0224e934[8] = "tv_cc";

ModelSlotPool sFtrMgrPool;

extern "C" char sFtrMoveAnimModelName[0x10] = "FTT:a/bmd/bmd0";

extern "C" const u8 sTvScheduleDay3[0x54] = {6, 0, 0, 4, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 7, 19, 0, 4, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 5, 23, 0};

extern "C" char data_ov004_0224e954[8] = "tv_fr";

extern "C" const s32 sFtrPickRangeByLayer[2] = {0x3000, 0x319a};

extern "C" const u8 sTvScheduleDay1[0x50] = {1, 0, 0, 0, 1, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 8, 19, 0, 5, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 8, 23, 0, 0, 0};

extern "C" const char *sTvWeatherNames[11] = {data_ov004_0224e97c, data_ov004_0224e934, data_ov004_0224e93c,
                                                  data_ov004_0224e944, data_ov004_0224e96c, data_ov004_0224e954,
                                                  data_ov004_0224e964, data_ov004_0224e974, data_ov004_0224e95c,
                                                  data_ov004_0224e984, data_ov004_0224e94c};

FtrActorTable sFtrActorTable;

extern "C" char data_ov004_0224e964[8] = "tv_cr";

extern "C" char data_ov004_0224e944[8] = "tv_fc";

extern "C" const s8 sFtrProbeDirOffsets[4] = {0, 0, 2, -2};

// @0x223527c unk_022350c8.cpp
Unk_ov004_02235528_V3 *FtrContactSet::makeStepVec(s16 v) {
    static FxVec3 r;
    r.x = 0;
    r.y = 0;
    r.z = 0x2000;
    Vec_RotateY((Unk_ov004_02235528_V3 *)&r, v);
    return (Unk_ov004_02235528_V3 *)&r;
}

// @0x2235270 unk_022350c8.cpp
void *FtrContactSet::canPush() {
    return canMoveAt(0);
}

// @0x2235234 unk_022350c8.cpp
void *FtrContactSet::startPush() {
    FtrContact *s = getContact(0);
    void *o = getActor(0);
    if (s != 0 && o != 0) {
        return (void *)FtrActor_startPush(o, s->getPushAngle());
    }
    return 0;
}

// @0x2235224 unk_022350c8.cpp
void *FtrContactSet::canPull() {
    return canMoveAt(-0x8000);
}

// @0x22351e8 unk_022350c8.cpp
void *FtrContactSet::startPull() {
    FtrContact *s = getContact(0);
    void *o = getActor(0);
    if (s != 0 && o != 0) {
        return (void *)FtrActor_startPull(o, s->getPushAngle());
    }
    return 0;
}

// @0x22351bc unk_022350c8.cpp
FtrContactSet::FtrContactSet() {
    clear();
}

// @0x22351a0 unk_022350c8.cpp
FtrContactSet::~FtrContactSet() {
}

// @0x2235180 unk_022350c8.cpp
void FtrContactSet::clear() {
    for (u32 i = 0; i < 2; i++) {
        contacts[i].clear();
    }
}

// @0x2235120 unk_022350c8.cpp
BOOL FtrContactSet::setContact(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id == -1) {
        return FALSE;
    }
    {
        void *o = FtrActorTable_GetInstance()->get(id);
        if (o != 0) {
            u32 k = FtrActor_GetLayer(o);
            contacts[k & 1].set(id, a, b, c, d, e, f, g);
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22350f4 unk_022350c8.cpp
extern "C" s32 FtrMgr_IsFurnitureEditable() {
    if (FtrMgr_IsSaleMode()) {
        return FALSE;
    }
    if (Scene_InHouseRoom() || Scene_InVillagerHouse()) {
        return TRUE;
    }
    return FALSE;
}

// @0x22350c8 unk_022350c8.cpp
extern "C" s32 FtrMgr_IsFurnitureUsable() {
    if (FtrMgr_IsFurnitureEditable()) {
        return TRUE;
    }
    switch (Scene_GetCurrent()) {
    case 0x1f:
    case 0x21:
    case 0x22:
        return TRUE;
    }
    return FALSE;
}

// @0x2235028 unk_02234774.cpp
extern "C" s32 FtrMgr_SpawnFromArg(FtrActor *self) {
    if (FtrActorTable_GetInstance()->countFree()) {
        s32 a = FtrInfo_GetDmaUnk02(FtrActor_GetArgFtrIndex(self));
        s32 b = FtrActor_GetArgMode(self);
        u16 v;
        if (a >= 0 && a < 0x30) {
            v = sFtrKindProfiles[a];
        } else {
            v = sFtrKindProfiles[0];
        }
        if (a == 0x18 && b == 1) {
            if ((u32)FtrMgr_CountSwitchedOn(FtrActor_isGyroid) >= 4) {
                FtrActor *e = FtrMgr_SwitchOffRandom(FtrActor_isGyroid, 0);
                if (e != NULL) {
                    ((FtrSwitch *)e->switchState)->set(1, 0);
                    FtrSync_RequestToggleGyroid(Scene_GetCurrent(), (u8 *)e + 0x5c, 0);
                }
            }
        }
        return Actor_spawn(v, self, 0, 0, (u32)sFurnitureManager);
    }
    return 0;
}

// @0x2234ff4 unk_02234774.cpp
extern "C" s32 FtrMgr_SpawnFurniture(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d) {
    FtrInfo_GetDmaUnk02(a);
    return FtrMgr_SpawnFromArg(FtrActor_MakeSpawnArg(x, y, a, b, c, d));
}

// @0x2234f80 unk_02234774.cpp
extern "C" s32 FtrMgr_GetSurfaceHeight(s32 x, s32 y) {
    FtrActor *e = FtrActorGrid_GetInstance()->getActor(x, y, 0);
    if (e != NULL) {
        if (e->noCollision == 1) {
            return e->position.y;
        }
        return e->surfaceHeight + e->position.y;
    }
    Unk_0203389c_Vec v;
    GroundInfo g;
    v.x = (x << 13) + 0x1000;
    v.y = 0;
    v.z = (y << 13) + 0x1000;
    g.initAtPos(&v, 0, 0);
    return g.getHeight(0);
}

// @0x2234f6c unk_02234774.cpp
extern "C" s32 FtrMgr_GetSurfaceHeightAtPos(Unk_ov004_Vec3 *p) {
    return FtrMgr_GetSurfaceHeight(p->x >> 13, p->z >> 13);
}

// @0x2234f30 unk_02234774.cpp
extern "C" s32 FtrMgr_CheckBedStep(Unk_ov004_Vec3 *pos, s32 ang, Unk_ov004_Vec3 *out) {
    FtrActor *m = FtrActorGrid_GetInstance()->getActorAtPos(pos, 0);
    if (m != NULL && Unk_ov004_02234f30_Is37(m)) {
        return FtrBed_checkStepTile(m, pos, ang, out);
    }
    return 0;
}

extern "C" const FtrSoundRecord sFtrSoundTable[0x6e9] = {
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42d},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x428, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x46b, 0x46b, 0xffff},
    {0xffff, 0x46c, 0x46c, 0xffff},
    {0xffff, 0x46d, 0x46d, 0xffff},
    {0xffff, 0x46e, 0x46e, 0xffff},
    {0xffff, 0x46f, 0x46f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x439, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x443, 0xffff, 0xffff},
    {0xffff, 0x49f, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0x418, 0x48f, 0x490, 0xffff},
    {0x3ea, 0xffff, 0xffff, 0xffff},
    {0x413, 0xffff, 0xffff, 0xffff},
    {0x3f1, 0x484, 0x485, 0xffff},
    {0x3f2, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49c, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x4a3, 0xffff, 0xffff},
    {0x414, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ee, 0x498, 0x499, 0xffff},
    {0xffff, 0x433, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x421, 0x47c, 0x47d, 0xffff},
    {0x420, 0x47e, 0x47f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x415, 0x493, 0x494, 0xffff},
    {0xffff, 0x463, 0x464, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3eb, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x469, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x470, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45e, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45f, 0x460, 0xffff},
    {0xffff, 0x465, 0x467, 0xffff},
    {0xffff, 0x466, 0x468, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x456, 0x456, 0xffff},
    {0xffff, 0x457, 0x457, 0xffff},
    {0xffff, 0x458, 0x458, 0xffff},
    {0xffff, 0x459, 0x459, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49e, 0xffff, 0xffff},
    {0xffff, 0x4a1, 0x4a2, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40d, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x429},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x419, 0x419, 0xffff},
    {0xffff, 0x41a, 0x41a, 0xffff},
    {0xffff, 0x41c, 0xffff, 0xffff},
    {0xffff, 0x41b, 0x41b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x452, 0x453, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xc0, 0xc0, 0xffff},
    {0xffff, 0xc1, 0xc1, 0xffff},
    {0xffff, 0xc2, 0xc2, 0xffff},
    {0xffff, 0xc3, 0xc3, 0xffff},
    {0xffff, 0xc4, 0xc4, 0xffff},
    {0xffff, 0xc5, 0xc5, 0xffff},
    {0xffff, 0xc6, 0xc6, 0xffff},
    {0xffff, 0xc7, 0xc7, 0xffff},
    {0xffff, 0xc8, 0xc8, 0xffff},
    {0xffff, 0xc9, 0xc9, 0xffff},
    {0xffff, 0xd0, 0xd0, 0xffff},
    {0xffff, 0xca, 0xca, 0xffff},
    {0xffff, 0xcb, 0xcb, 0xffff},
    {0xffff, 0xcc, 0xcc, 0xffff},
    {0xffff, 0xcd, 0xcd, 0xffff},
    {0xffff, 0xce, 0xce, 0xffff},
    {0xffff, 0xcf, 0xcf, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42a},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44c, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44d, 0x44e, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x454, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49d, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x442, 0x442, 0xffff},
    {0x41d, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ec, 0x482, 0x483, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x46a, 0xffff, 0xffff},
    {0x417, 0x491, 0x492, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44f, 0x44f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40b, 0xffff, 0xffff, 0xffff},
    {0x40c, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x446, 0x447, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0x422, 0x480, 0x481, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x41f, 0x478, 0x479, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0xffff, 0x49a, 0x49b, 0xffff},
    {0x408, 0x486, 0x487, 0xffff},
    {0xffff, 0x455, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x409, 0x498, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x416, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x42e, 0x42f, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x448, 0x3f4, 0xffff},
    {0xffff, 0x448, 0x3f4, 0xffff},
    {0xffff, 0x41e, 0x41e, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45a, 0x45b, 0xffff},
    {0xffff, 0x438, 0xffff, 0xffff},
    {0x404, 0xffff, 0x48a, 0xffff},
    {0x407, 0x48d, 0x48e, 0xffff},
    {0x405, 0x48b, 0x48c, 0xffff},
    {0x40e, 0xffff, 0xffff, 0xffff},
    {0x40f, 0xffff, 0xffff, 0xffff},
    {0x410, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x4ef, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0xffff, 0xffff, 0x4d1},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x431, 0x432, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x4a0, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x45c, 0x45d, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f3, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0x412, 0x488, 0x489, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x426, 0x497, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x444, 0x445, 0xffff},
    {0xffff, 0x450, 0x451, 0xffff},
    {0xffff, 0x461, 0x462, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x40a, 0x476, 0x477, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x42b},
    {0xffff, 0xffff, 0xffff, 0x42c},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x411, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3ef, 0x498, 0x3f0, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x44a, 0x44b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x498, 0x499, 0xffff},
    {0xffff, 0x473, 0x474, 0xffff},
    {0xffff, 0x471, 0x472, 0xffff},
    {0xffff, 0x473, 0x499, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x471, 0x472, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x423, 0x495, 0x496, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0x434, 0x449, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f5, 0xffff, 0xffff, 0xffff},
    {0x3f6, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3f9, 0xffff, 0xffff, 0xffff},
    {0x3fa, 0xffff, 0xffff, 0xffff},
    {0x3fb, 0xffff, 0xffff, 0xffff},
    {0x3fc, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x3fd, 0xffff, 0xffff, 0xffff},
    {0x3fe, 0xffff, 0xffff, 0xffff},
    {0x3ff, 0xffff, 0xffff, 0xffff},
    {0x400, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x401, 0xffff, 0xffff, 0xffff},
    {0x402, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0x403, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0x13c},
    {0xffff, 0xffff, 0xffff, 0x13d},
    {0xffff, 0xffff, 0xffff, 0x13f},
    {0xffff, 0xffff, 0xffff, 0x13e},
    {0xffff, 0xffff, 0xffff, 0x136},
    {0xffff, 0xffff, 0xffff, 0x137},
    {0xffff, 0xffff, 0xffff, 0x139},
    {0xffff, 0xffff, 0xffff, 0x13a},
    {0xffff, 0xffff, 0xffff, 0x13b},
    {0xffff, 0xffff, 0xffff, 0x138},
    {0xffff, 0xffff, 0xffff, 0x14e},
    {0xffff, 0xffff, 0xffff, 0x14f},
    {0xffff, 0xffff, 0xffff, 0xff},
    {0xffff, 0xffff, 0xffff, 0xfe},
    {0xffff, 0xffff, 0xffff, 0xfd},
    {0xffff, 0xffff, 0xffff, 0x100},
    {0xffff, 0xffff, 0xffff, 0x153},
    {0xffff, 0xffff, 0xffff, 0x154},
    {0xffff, 0xffff, 0xffff, 0x150},
    {0xffff, 0xffff, 0xffff, 0x151},
    {0xffff, 0xffff, 0xffff, 0x152},
    {0xffff, 0xffff, 0xffff, 0x165},
    {0xffff, 0xffff, 0xffff, 0x167},
    {0xffff, 0xffff, 0xffff, 0x168},
    {0xffff, 0xffff, 0xffff, 0x166},
    {0xffff, 0xffff, 0xffff, 0x115},
    {0xffff, 0xffff, 0xffff, 0x113},
    {0xffff, 0xffff, 0xffff, 0x114},
    {0xffff, 0xffff, 0xffff, 0x116},
    {0xffff, 0xffff, 0xffff, 0x121},
    {0xffff, 0xffff, 0xffff, 0x120},
    {0xffff, 0xffff, 0xffff, 0x11f},
    {0xffff, 0xffff, 0xffff, 0x122},
    {0xffff, 0xffff, 0xffff, 0x119},
    {0xffff, 0xffff, 0xffff, 0x117},
    {0xffff, 0xffff, 0xffff, 0x118},
    {0xffff, 0xffff, 0xffff, 0x172},
    {0xffff, 0xffff, 0xffff, 0x173},
    {0xffff, 0xffff, 0xffff, 0x174},
    {0xffff, 0xffff, 0xffff, 0x12c},
    {0xffff, 0xffff, 0xffff, 0x12d},
    {0xffff, 0xffff, 0xffff, 0x12e},
    {0xffff, 0xffff, 0xffff, 0x10f},
    {0xffff, 0xffff, 0xffff, 0x111},
    {0xffff, 0xffff, 0xffff, 0x112},
    {0xffff, 0xffff, 0xffff, 0x110},
    {0xffff, 0xffff, 0xffff, 0x169},
    {0xffff, 0xffff, 0xffff, 0x16a},
    {0xffff, 0xffff, 0xffff, 0x16b},
    {0xffff, 0xffff, 0xffff, 0x101},
    {0xffff, 0xffff, 0xffff, 0x102},
    {0xffff, 0xffff, 0xffff, 0x103},
    {0xffff, 0xffff, 0xffff, 0x123},
    {0xffff, 0xffff, 0xffff, 0x125},
    {0xffff, 0xffff, 0xffff, 0x126},
    {0xffff, 0xffff, 0xffff, 0x124},
    {0xffff, 0xffff, 0xffff, 0x162},
    {0xffff, 0xffff, 0xffff, 0x163},
    {0xffff, 0xffff, 0xffff, 0x164},
    {0xffff, 0xffff, 0xffff, 0x161},
    {0xffff, 0xffff, 0xffff, 0x141},
    {0xffff, 0xffff, 0xffff, 0x140},
    {0xffff, 0xffff, 0xffff, 0x143},
    {0xffff, 0xffff, 0xffff, 0x142},
    {0xffff, 0xffff, 0xffff, 0x10a},
    {0xffff, 0xffff, 0xffff, 0x109},
    {0xffff, 0xffff, 0xffff, 0x176},
    {0xffff, 0xffff, 0xffff, 0x175},
    {0xffff, 0xffff, 0xffff, 0x177},
    {0xffff, 0xffff, 0xffff, 0x15c},
    {0xffff, 0xffff, 0xffff, 0x15b},
    {0xffff, 0xffff, 0xffff, 0x15a},
    {0xffff, 0xffff, 0xffff, 0x16c},
    {0xffff, 0xffff, 0xffff, 0x16e},
    {0xffff, 0xffff, 0xffff, 0x16d},
    {0xffff, 0xffff, 0xffff, 0x170},
    {0xffff, 0xffff, 0xffff, 0x16f},
    {0xffff, 0xffff, 0xffff, 0x171},
    {0xffff, 0xffff, 0xffff, 0xfa},
    {0xffff, 0xffff, 0xffff, 0xfc},
    {0xffff, 0xffff, 0xffff, 0xfb},
    {0xffff, 0xffff, 0xffff, 0xf9},
    {0xffff, 0xffff, 0xffff, 0x144},
    {0xffff, 0xffff, 0xffff, 0x146},
    {0xffff, 0xffff, 0xffff, 0x147},
    {0xffff, 0xffff, 0xffff, 0x145},
    {0xffff, 0xffff, 0xffff, 0x11e},
    {0xffff, 0xffff, 0xffff, 0x11d},
    {0xffff, 0xffff, 0xffff, 0x11b},
    {0xffff, 0xffff, 0xffff, 0x11c},
    {0xffff, 0xffff, 0xffff, 0x156},
    {0xffff, 0xffff, 0xffff, 0x157},
    {0xffff, 0xffff, 0xffff, 0x158},
    {0xffff, 0xffff, 0xffff, 0x10b},
    {0xffff, 0xffff, 0xffff, 0x108},
    {0xffff, 0xffff, 0xffff, 0x15d},
    {0xffff, 0xffff, 0xffff, 0x15e},
    {0xffff, 0xffff, 0xffff, 0x160},
    {0xffff, 0xffff, 0xffff, 0x15f},
    {0xffff, 0xffff, 0xffff, 0x11a},
    {0xffff, 0xffff, 0xffff, 0x106},
    {0xffff, 0xffff, 0xffff, 0x105},
    {0xffff, 0xffff, 0xffff, 0x104},
    {0xffff, 0xffff, 0xffff, 0x107},
    {0xffff, 0xffff, 0xffff, 0x12f},
    {0xffff, 0xffff, 0xffff, 0x131},
    {0xffff, 0xffff, 0xffff, 0x130},
    {0xffff, 0xffff, 0xffff, 0x129},
    {0xffff, 0xffff, 0xffff, 0x128},
    {0xffff, 0xffff, 0xffff, 0x127},
    {0xffff, 0xffff, 0xffff, 0x159},
    {0xffff, 0xffff, 0xffff, 0x10d},
    {0xffff, 0xffff, 0xffff, 0x10c},
    {0xffff, 0xffff, 0xffff, 0x10e},
    {0xffff, 0xffff, 0xffff, 0x149},
    {0xffff, 0xffff, 0xffff, 0x14a},
    {0xffff, 0xffff, 0xffff, 0x148},
    {0xffff, 0xffff, 0xffff, 0x133},
    {0xffff, 0xffff, 0xffff, 0x132},
    {0xffff, 0xffff, 0xffff, 0x12b},
    {0xffff, 0xffff, 0xffff, 0x12a},
    {0xffff, 0xffff, 0xffff, 0x135},
    {0xffff, 0xffff, 0xffff, 0x134},
    {0xffff, 0xffff, 0xffff, 0x155},
    {0xffff, 0xffff, 0xffff, 0x14b},
    {0xffff, 0xffff, 0xffff, 0x14c},
    {0xffff, 0xffff, 0xffff, 0x14d},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0x436, 0x437, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x43a, 0x43a, 0xffff},
    {0xffff, 0x43d, 0x43d, 0xffff},
    {0xffff, 0x43c, 0x43c, 0xffff},
    {0xffff, 0x43f, 0x43f, 0xffff},
    {0xffff, 0x43b, 0x43b, 0xffff},
    {0xffff, 0x43e, 0x43e, 0xffff},
    {0xffff, 0x440, 0x440, 0xffff},
    {0x3ed, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x441, 0x441, 0xffff},
    {0xffff, 0x475, 0xffff, 0xffff},
    {0x424, 0xffff, 0xffff, 0xffff},
    {0xffff, 0x425, 0xffff, 0xffff},
    {0x427, 0x47a, 0x47b, 0xffff},
    {0xffff, 0xffff, 0xffff, 0xffff},
};

extern "C" const u8 sTvScheduleDay5[0x50] = {8, 0, 0, 6, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 5, 23, 0, 0, 0};

extern "C" const u16 sFtrKindProfiles[0x30] = {0x2f, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x36, 0x37, 0x38, 0x38, 0x38, 0x38, 0x38, 0x39, 0x39, 0x3a, 0x3a, 0x3b, 0x3c, 0x3d, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x36, 0x4c, 0x4d, 0x3a, 0x37, 0x39, 0x36, 0x4f, 0x4e, 0x50};

extern "C" Unk_ov004_0224e98c_Entry sFurnitureManagerProfile = {(void *(*)())FurnitureManager_Create, 0xc5, 0x34};

extern "C" char data_ov004_0224e96c[8] = "tv_cf";

// @0x2234ed8 unk_02234774.cpp
extern "C" s32 FtrMgr_CheckBedStepFront(Unk_ov004_Vec3 *pos, s32 ang) {
    static FxVec3 dflt(0x2000);
    return FtrMgr_CheckBedStep(pos, ang, (Unk_ov004_Vec3 *)&dflt);
}

extern "C" char data_ov004_0224e974[8] = "tv_rc";

// @0x2234e80 unk_02234774.cpp
extern "C" s32 FtrMgr_CheckBedStepBack(Unk_ov004_Vec3 *pos, s32 ang) {
    static FxVec3 dflt(-0x2000);
    return FtrMgr_CheckBedStep(pos, ang, (Unk_ov004_Vec3 *)&dflt);
}

// @0x2234df8 unk_02234774.cpp
extern "C" s32 FtrMgr_TestStepTarget(Unk_ov004_Vec3 *p, s16 ang, s32 dist) {
    s32 y;
    s32 z;
    s32 idx = ((u16)ang >> 4) * 2;
    Unk_ov004_Vec3 v;
    z = p->z + func_01ffcb0c(dist, data_02135f44[idx + 1]);
    y = p->y;
    s32 x = p->x + func_01ffcb0c(dist, data_02135f44[idx]);
    v.x = x;
    v.y = y;
    v.z = z;
    if (FtrMgr_GetSurfaceHeightAtPos(&v)) {
        return 0;
    }
    if (FtrActor_IsPosClearOfCharacters(&v, 0x800, 0x2000, 0x800, 0) == 0) {
        return 1;
    }
    s32 t = Ground_GetExitAtPos(&v);
    s32 zz = 0;
    if (t == -1) goto two;
    return zz;
two:
    return 2;
}

// @0x2234dd4 unk_02234774.cpp
extern "C" BOOL FtrMgr_CanStepForward(Unk_ov004_Vec3 *pos, s32 ang) {
    if (FtrMgr_TestStepTarget(pos, ang, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234d80 unk_02234774.cpp
extern "C" BOOL FtrMgr_CanStepSidePlus90(Unk_ov004_Vec3 *pos, s32 ang) {
    FtrActor *m = FtrActorGrid_GetInstance()->getActorAtPos(pos, 0);
    if (m != NULL && m->kind != 0x26) {
        return FALSE;
    }
    if (FtrMgr_TestStepTarget(pos, ang + 0x4000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234d2c unk_02234774.cpp
extern "C" BOOL FtrMgr_CanStepSideMinus90(Unk_ov004_Vec3 *pos, s32 ang) {
    FtrActor *m = FtrActorGrid_GetInstance()->getActorAtPos(pos, 0);
    if (m != NULL && m->kind != 0x26) {
        return FALSE;
    }
    if (FtrMgr_TestStepTarget(pos, ang + 0xc000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234cd8 unk_02234774.cpp
extern "C" BOOL FtrMgr_BroadcastStereosAct0() {
    s32 i = 0;
    s32 z = 0;
    for (; (u32)i < FtrMgr_GetMaxFurniture(); i++) {
        FtrActor *e = FtrActorTable_GetInstance()->get(i);
        if (e != NULL && FtrActor_PredIsStereo(e) && ((FtrSwitch *)e->switchState)->isOn()) {
            FtrSync_ChangeAct(e, z, 0xff, 1);
        }
    }
    return TRUE;
}

// @0x2234c7c unk_02234774.cpp
extern "C" void FtrMgr_SetSwitchAll(u32 v, BOOL (*f)(FtrActor *), s32 a) {
    u32 i = 0;
    for (; i < FtrMgr_GetMaxFurniture(); i++) {
        FtrActor *e = FtrActorTable_GetInstance()->get(i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e))) {
                if (v != ((FtrSwitch *)e->switchState)->isOn()) {
                    ((FtrSwitch *)e->switchState)->set(v, a);
                }
            }
        }
    }
}

// @0x2234c2c unk_02234774.cpp
extern "C" s32 FtrMgr_CountSwitchedOn(BOOL (*f)(FtrActor *)) {
    s32 cnt = 0;
    u32 i = 0;
    for (; i < FtrMgr_GetMaxFurniture(); i++) {
        FtrActor *e = FtrActorTable_GetInstance()->get(i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e) && ((FtrSwitch *)e->switchState)->isOn())) {
                cnt++;
            }
        }
    }
    return cnt;
}

// @0x2234bb4 unk_02234774.cpp
extern "C" FtrActor *FtrMgr_SwitchOffRandom(BOOL (*f)(FtrActor *), s32 a) {
    s32 n = FtrMgr_CountSwitchedOn(f);
    if (n != 0) {
        s32 pick = Random_GlobalBelow(n);
        s32 cnt = 0;
        u32 i = 0;
        for (; i < FtrMgr_GetMaxFurniture(); i++) {
            FtrActor *e = FtrActorTable_GetInstance()->get(i);
            if (e != NULL) {
                if (f == NULL || (f != NULL && f(e))) {
                    if (((FtrSwitch *)e->switchState)->isOn()) {
                        if (cnt == pick) {
                            ((FtrSwitch *)e->switchState)->set(0, a);
                            return e;
                        }
                        cnt++;
                    }
                }
            }
        }
    }
    return NULL;
}

// @0x2234ba8 unk_02234774.cpp
extern "C" u16 FtrMgr_GetCycleCounter() {
    return sFtrMgrCycleCounter;
}

// @0x2234b0c unk_02234774.cpp
extern "C" s32 FtrMgr_PickFurnitureComment(u32 key) {
    u32 n = FtrMgr_GetMaxFurniture();
    FtrActorTable *mgr = FtrActorTable_GetInstance();
    s32 cnt = 0;
    u32 i = 0;
    for (; i < n; i++) {
        FtrActor *e = mgr->get(i);
        if (e != NULL && e->commentId != -1 && key == e->commentPersonality) {
            cnt++;
        }
    }
    if (cnt != 0) {
        s32 pick = Random_GlobalBelow(cnt);
        cnt = 0;
        i = 0;
        for (; i < n; i++) {
            FtrActor *e = mgr->get(i);
            if (e != NULL && e->commentId != -1 && key == e->commentPersonality) {
                if (cnt == pick) {
                    return e->commentId;
                }
                cnt++;
            }
        }
    }
    return -1;
}

// @0x2234af8 unk_02234774.cpp
extern "C" u32 FtrMgr_GetMaxFurniture() {
    return Scene_GetMaxFurniture(Scene_GetCurrent());
}

// @0x2234ad4 unk_02234774.cpp
extern "C" BOOL FtrMgr_IsShopScene() {
    s32 t = Scene_GetCurrent();
    if (Scene_InNookShop() != 0 || t == 10 || t == 15) {
        return TRUE;
    }
    return FALSE;
}

// @0x2234ad0 unk_02234774.cpp
extern "C" void func_ov004_02234ad0(void *) {
}

// @0x2234a48 unk_02234774.cpp
extern "C" void FtrMgr_SpawnAllFromMap(void *) {
    Unk_ov004_02234a48_Grid *g = gSceneBlockMap;
    void *cells;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells != NULL) {
        cells = g->cells;
    } else {
        cells = NULL;
    }
    u32 layer;
    for (layer = 0; layer < 2; layer++) {
        s32 y;
        for (y = 0; y < 16; y++) {
            s32 x;
            for (x = 0; x < 16; x++) {
                void *c = MapBlock_GetItemPtr(cells, x, y, layer);
                if (c != NULL && Item_IsFurniture(c)) {
                    s32 a = Item_GetFurnitureIndex(c);
                    FtrMgr_SpawnFurniture(x, y, a, Item_GetFurnitureDirection(c), layer, 0);
                }
            }
        }
    }
}

// @0x22349a8 unk_02234774.cpp
extern "C" void FtrMgr_NotifyNearestCabinClock(void *) {
    u8 *p = (u8 *)PlayerActor_GetActor(4);
    if (p != NULL) {
        Unk_ov004_Vec3 v0;
        Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = sFtrMgrSoundRangeSq;
        for (; i < FtrMgr_GetMaxFurniture(); i++) {
            FtrActor *e = FtrActorTable_GetInstance()->get(i);
            if (e != NULL && FtrActor_isCabinClock(e)) {
                Unk_ov004_Vec3 v0c;
                Unk_ov004_Vec3 t = *(Unk_ov004_Vec3 *)e->centerPos;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            FtrActor *e = FtrActorTable_GetInstance()->get(best);
            if (e != NULL) {
                func_ov004_0220f29c(e);
            }
        }
    }
}

// @0x2234908 unk_02234774.cpp
extern "C" void FtrMgr_NotifyNearestSoundingClock(void *) {
    u8 *p = (u8 *)PlayerActor_GetActor(4);
    if (p != NULL) {
        Unk_ov004_Vec3 v0;
        Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = sFtrMgrSoundRangeSq;
        for (; i < FtrMgr_GetMaxFurniture(); i++) {
            FtrActor *e = FtrActorTable_GetInstance()->get(i);
            if (e != NULL && FtrActor_isSoundingClock(e)) {
                Unk_ov004_Vec3 v0c;
                Unk_ov004_Vec3 t = *(Unk_ov004_Vec3 *)e->centerPos;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            FtrActor *e = FtrActorTable_GetInstance()->get(best);
            if (e != NULL) {
                func_ov004_0220f2a8(e);
            }
        }
    }
}

// @0x2234774 unk_02234774.cpp
extern "C" void FurnitureManager_UpdateTvSound(FurnitureManager *self) {
    if (sFtrMgrTvSoundEnabled != 0) {
        BOOL r6 = TRUE;
        Unk_ov004_Vec3 v8;
        v8.x = gVec3Zero.x;
        v8.y = gVec3Zero.y;
        v8.z = gVec3Zero.z;
        u8 *p = (u8 *)PlayerActor_GetActor(4);
        if (p != NULL) {
            Unk_ov004_Vec3 v14;
            Unk_ov004_Vec3 *pv = (Unk_ov004_Vec3 *)(p + 0x5c);
            v14.x = pv->x;
            v14.y = pv->y;
            v14.z = pv->z;
            u32 i = 0;
            s32 best = -1;
            s32 minv = sFtrMgrSoundRangeSq;
            for (; i < FtrMgr_GetMaxFurniture(); i++) {
                FtrActor *e = FtrActorTable_GetInstance()->get(i);
                if (e != NULL && FtrActor_isTvOn(e)) {
                    Unk_ov004_Vec3 v20;
                    Unk_ov004_Vec3 t = *(Unk_ov004_Vec3 *)e->centerPos;
                    v20.x = t.x;
                    v20.y = t.y;
                    v20.z = t.z;
                    s32 d = func_01ffd028(&v20, &v14);
                    if (d < minv) {
                        best = i;
                        minv = d;
                    }
                }
            }
            if (best != -1) {
                FtrActor *e = FtrActorTable_GetInstance()->get(best);
                if (e != NULL) {
                    func_ov004_0220e738(e);
                    Unk_ov004_Vec3 t = *(Unk_ov004_Vec3 *)e->centerPos;
                    v8.x = t.x;
                    v8.y = t.y;
                    v8.z = t.z;
                    r6 = FALSE;
                }
            }
        }
        TvSound *r4 = FurnitureManager_GetTvSound();
        if (r4 != NULL) {
            if (r6) {
                if (self->tvWasOff == 0 || self->tvSoundStarted == 0) {
                    r4->callTurnOff();
                    self->tvSoundStarted = 1;
                }
                r4->callUpdate(FurnitureManager_GetTvFrame(), NULL);
            } else {
                if (self->tvWasOff == 0 && self->tvSoundStarted != 0 && self->lastTvProgram == FurnitureManager_GetTvProgram()) {
                } else {
                    s32 r7 = FurnitureManager_GetTvFrame() - 1;
                    if (r7 < 0) r7 = 0;
                    BOOL f;
                    if (FurnitureManager_GetTvLoopCount() == 0 && r7 == 0 && FurnitureManager_IsTvProgramChanged() != 0) {
                        f = TRUE;
                    } else {
                        f = FALSE;
                    }
                    r4->callTurnOn(f);
                    self->tvSoundStarted = 1;
                }
                r4->callUpdate(FurnitureManager_GetTvFrame(), &v8);
            }
        }
        self->tvWasOff = r6;
        self->lastTvProgram = FurnitureManager_GetTvProgram();
    }
}

// @0x22345c4 unk_02233dc0.cpp
extern "C" s32 FtrMgr_FindFacingFurniture(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, u16 *p1, u16 *p2) {
    s32 i;
    Unk_ov004_02233f3c_World *w;
    s32 b24, b28;
    s32 c2c, c30;
    s32 layer;
    s32 t, idx;
    s32 hx, hy, sx, sy;
    u16 tmp;
    FtrActor *o;
    u16 *cell;
    u16 *cell2;
    Unk_ov004_02233f3c_V3 v34;
    Unk_ov004_02233f3c_V3 v40;
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    FieldPos_ToUnit(&b24, &b28, pos);
    w = gSceneBlockMap;
    if (w != 0) {
        idx = ((s32)(u16)ang >> 4) * 2;
        t = pos->z + func_01ffcb0c(data_02135f44[idx + 1], 0x10cd);
        v34.x = pos->x + func_01ffcb0c(data_02135f44[idx], 0x10cd);
        v34.y = 0;
        v34.z = t;
        cell = BlockMap_GetItemPtrAtPos(w, &v34, 0);
        if (cell != 0) {
            if (Item_IsNormalItem(cell) != 0) {
                return -1;
            }
        }
    }
    for (i = 0; (u32)i < 4; i++) {
        for (layer = 1; layer >= 0; layer--) {
            if (FtrMgr_GetProbeTile(&c2c, &c30, pos, ang, i) == 0) {
                continue;
            }
            FieldPos_FromUnitCenter((Unk_ov004_Vec3 *)&v40, c2c, c30);
            if (Vec_DistXZ(pos, &v40) > sFtrPickRangeByLayer[layer & 1]) {
                continue;
            }
            o = FtrActorGrid_GetInstance()->getActor(c2c, c30, (u8)layer);
            *ox = c2c;
            *oy = c30;
            if (o != 0 && o->isReady() != 0 && o->hasItemOnTop() == 0) {
                if (p1 != 0) {
                    FtrActor_GetItemId(&tmp, o);
                    *p1 = tmp;
                }
                if (p2 != 0) {
                    *p2 = Item_MakeFurniture(FtrActor_GetFtrIndex(o), 0);
                }
                return FtrActorTable_GetInstance()->indexOf(o);
            }
            if (layer == 1 && o == 0) {
                sx = *(volatile s32 *)&c2c;
                sy = *(volatile s32 *)&c30;
                hx = sx >> 4;
                hy = sy >> 4;
                cell2 = BlockMap_GetItemPtr(w, hx, hy, sx - (hx << 4), sy - (hy << 4), (u8)layer);
                if (cell2 != 0 && Item_IsNormalItem(cell2) != 0) {
                    if (p1 != 0) *p1 = *cell2;
                    if (p2 != 0) *p2 = *cell2;
                    return -2;
                }
            }
        }
    }
    return -1;
}

// @0x2234588 unk_02233dc0.cpp
extern "C" s32 FtrMgr_FindFurnitureFacingPlayer(s32 *a, s32 *b, u16 *c, u16 *d) {
    FtrActor *o = PlayerActor_GetActor(4);
    if (o != 0) {
        return FtrMgr_FindFacingFurniture(a, b, (Unk_ov004_Vec3 *)&o->position, o->rotY, c, d);
    }
    return -1;
}

// @0x2234550 unk_02233dc0.cpp
extern "C" u8 FtrMgr_GetActorLayer(u32 i) {
    if (i < FtrMgr_GetMaxFurniture()) {
        if (FtrActorTable_GetInstance()->get(i) != 0) {
            return FtrActorTable_GetInstance()->get(i)->mapLayer;
        }
    }
    return 0;
}

// @0x22344e8 unk_02233dc0.cpp
extern "C" s32 FtrMgr_RemoveActor(s32 idx, u16 *p1, u16 *p2) {
    if (p1 != 0) *p1 = 0xfff1;
    if (p2 != 0) *p2 = 0xfff1;
    FtrActor *o = FtrActorTable_GetInstance()->get(idx);
    if (o != 0) {
        o->setAct(5);
        if (p1 != 0) {
            u16 t[2];
            FtrActor_GetItemId(t, o);
            *p1 = t[0];
        }
        if (p2 != 0) {
            *p2 = Item_MakeFurniture(FtrActor_GetFtrIndex(o), 0);
        }
        return 1;
    }
    return 0;
}

// @0x22344dc unk_02233dc0.cpp
extern "C" s32 FtrMgr_RemoveActorByIndex(s32 idx) {
    return FtrMgr_RemoveActor(idx, 0, 0);
}

// @0x22344a4 unk_02233dc0.cpp
extern "C" Unk_ov004_Vec3 *FtrMgr_PollRemovedPos(s32 idx) {
    FtrActor *o = FtrActorTable_GetInstance()->get(idx);
    if (o == 0) {
        return (Unk_ov004_Vec3 *)&sFtrRemovePos;
    }
    if (o->drawScale < 0x4cd) {
        return (Unk_ov004_Vec3 *)&sFtrRemovePos;
    }
    return 0;
}

// @0x2234490 unk_02233dc0.cpp
extern "C" void FtrMgr_SetRemovePos(Unk_ov004_Vec3 *v) {
    sFtrRemovePos.x = v->x;
    sFtrRemovePos.y = v->y;
    sFtrRemovePos.z = v->z;
}

// @0x2234464 unk_02233dc0.cpp
extern "C" s32 FtrMgr_IsPickable(FtrActor *p) {
    if (p != 0) {
        if (p->isReady() != 0) {
            if (p->hasItemOnTop() == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// @0x2234440 unk_02233dc0.cpp
extern "C" s32 FtrMgr_IsPickableByIndex(s32 i) {
    if (i >= 0) {
        FtrActor *o = FtrActorTable_GetInstance()->get(i);
        if (o != 0) {
            return FtrMgr_IsPickable(o);
        }
    }
    return 0;
}

extern "C" const u8 sTvScheduleDay4[0x54] = {8, 0, 0, 10, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 8, 13, 30, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 8, 19, 0, 6, 20, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 8, 23, 0};

// @0x2234320 unk_02233dc0.cpp
extern "C" s32 FtrMgr_GetProbeTile(s32 *ox, s32 *oy, Unk_ov004_Vec3 *pos, s32 ang, s32 idx) {
    static Unk_ov004_02233f3c_P dirs[16] = {
        Unk_ov004_02233f3c_P(0, 1),  Unk_ov004_02233f3c_P(1, 1),   Unk_ov004_02233f3c_P(1, 1),
        Unk_ov004_02233f3c_P(1, 0),  Unk_ov004_02233f3c_P(1, 0),   Unk_ov004_02233f3c_P(1, -1),
        Unk_ov004_02233f3c_P(1, -1), Unk_ov004_02233f3c_P(0, -1),  Unk_ov004_02233f3c_P(0, -1),
        Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, -1), Unk_ov004_02233f3c_P(-1, 0),
        Unk_ov004_02233f3c_P(-1, 0), Unk_ov004_02233f3c_P(-1, 1),  Unk_ov004_02233f3c_P(-1, 1),
        Unk_ov004_02233f3c_P(0, 1)};
    FieldPos_ToUnit(ox, oy, pos);
    if (idx == 0) {
        return 1;
    }
    if (idx < 4) {
        if (idx != 0) {
            s32 t = (ang >> 12) & 0xf;
            s32 k = (t + sFtrProbeDirOffsets[idx]) & 0xf;
            *ox = *ox + dirs[k].x;
            *oy = *oy + dirs[k].y;
        }
        return 1;
    }
    return 0;
}

// @0x22341c0 unk_02233dc0.cpp
extern "C" s32 FtrMgr_TryPlaceAt(void *out, s32 x, s32 y, s32 dir, s32 pl, u32 layer, s32 cx, s32 cy) {
    s32 l18 = FtrInfo_TestIndoorFlag2(pl);
    s32 l1c = FtrInfo_GetUnk05(pl);
    s32 l20 = FtrInfo_GetDmaUnk04(pl);
    s32 z2, z;
    s32 py, px;
    u16 s34;
    Unk_ov004_022341c0_Buf b;
    s34 = Item_MakeFurniture(pl, dir);
    FtrFootprint_Init(&b, &s34);
    Unk_ov004_02233f3c_World *w = gSceneBlockMap;
    BOOL ok = TRUE;
    u32 i = 0;
    z2 = i;
    z = i;
    for (; i < FtrFootprint_GetTileCount(&b); i++) {
        px = x + *(s16 *)((u8 *)FtrFootprint_GetTileOffset(&b, i) + z);
        py = y + FtrFootprint_GetTileOffset(&b, i)[1];
        s32 hx = px >> 4;
        s32 hy = py >> 4;
        u16 *cell = BlockMap_GetItemPtr(w, hx, hy, px - (hx << 4), py - (hy << 4), layer);
        if (l18 == 0 && px == cx && py == cy) {
            ok = FALSE;
            break;
        }
        if (cell == 0) {
            ok = FALSE;
            break;
        }
        if (*cell != 0xfff1) {
            ok = FALSE;
            break;
        }
        if (Ground_CanPlaceItem(px, py) == 0) {
            ok = FALSE;
            break;
        }
        if (layer == 1) {
            if (l1c != 0) {
                ok = FALSE;
                break;
            }
            if (l20 != 2) {
                ok = FALSE;
                break;
            }
            FtrActor *o = FtrActorGrid_GetInstance()->getActor(px, py, z2);
            if (o == 0 || (o != 0 && o->hasTopSurface != 1) || (o != 0 && o->isNotReady() != 0)) {
                ok = FALSE;
                break;
            }
        }
    }
    if (ok) {
        *(u32 *)out = (u32)FtrActor_MakeSpawnArg(x, y, pl, dir, layer, 1);
        FtrFootprint_Destruct(&b);
        return 3;
    }
    FtrFootprint_Destruct(&b);
    return 2;
}

FtrActorHeap sFtrActorHeap;

FtrPreviewer sFtrPreviewer;

FtrActorGrid sFtrActorGrid;

FtrContactSet sFtrContactSet;

// @0x2233f3c unk_02233dc0.cpp
extern "C" s32 FtrMgr_FindPlacement(void *out, u16 *tile, Unk_ov004_Vec3 *pos, s32 ang, s32 mode) {
    s32 pl, kind, base;
    s32 bx, by;
    s32 layer, n;
    u32 k;
    s16 d;
    u32 e, cnt, i, m;
    s32 px, py, dr, z, q3c, r7, y3c;
    u16 s48;
    s32 c54, c58;
    Unk_ov004_022341c0_Buf buf;
    Unk_ov004_02233f3c_V3 v64, v70, v7c, v88;
    if (Item_IsFurniture(tile) == 0) {
        return 0;
    }
    if (FtrActorTable_GetInstance()->countFree() == 0) {
        return 1;
    }
    if (mode == 2) {
        *(u32 *)out = (u32)FtrActor_MakeSpawnArg(0, 0, Item_GetFurnitureIndex(tile), 0, 0, 2);
        return 3;
    }
    if (Scene_InHouseRoom() == 0) {
        return 0;
    }
    pl = Item_GetFurnitureIndex(tile);
    kind = FtrInfo_GetUnk05(pl);
    base = FtrActor_AngleToDir((s16)(ang + 0x8000));
    FieldPos_ToUnit(&bx, &by, pos);
    static Unk_ov004_02233f3c_P dirs[4] = {Unk_ov004_02233f3c_P(0, 0), Unk_ov004_02233f3c_P(-1, 0),
                                           Unk_ov004_02233f3c_P(0, -1), Unk_ov004_02233f3c_P(-1, -1)};
    n = layer = 1;
    goto testL;
loopL:
    k = 0;
    goto testK;
loopK:
    if (FtrMgr_GetProbeTile(&c54, &c58, pos, ang, k) == 0) {
        goto nextK;
    }
    FieldPos_FromUnitCenter((Unk_ov004_Vec3 *)&v64, c54, c58);
    d = 0;
    goto testD;
loopD:
    r7 = (base + sFtrPlaceDirOrder[d]) & 3;
    if (kind == 2) {
        cnt = 4;
    } else {
        cnt = n;
    }
    e = 0;
    goto testE;
loopE:
    px = c54 + dirs[e].x;
    py = c58 + dirs[e].y;
    if (Unk_ov004_02233f3c_Ns::FtrMgr_TryPlaceAt(out, px, py, r7, pl, layer, bx, by) == 3) {
        if (kind == 1) {
            s48 = Item_MakeFurniture(pl, r7);
            dr = (s32)(r7 << 30) >> 16;
            FtrFootprint_Init(&buf, &s48);
            v70.x = 0;
            v70.y = 0;
            v70.z = 0;
            m = FtrFootprint_GetTileCount(&buf);
            i = 0;
            z = i;
            for (; i < m; i++) {
                q3c = px + *(s16 *)((u8 *)FtrFootprint_GetTileOffset(&buf, i) + z);
                y3c = py + FtrFootprint_GetTileOffset(&buf, i)[1];
                FieldPos_FromUnitCenter((Unk_ov004_Vec3 *)&v7c, q3c, y3c);
                VEC_Add(&v70, &v7c, &v70);
            }
            Vec_DivScalar(&v70, m << 12);
            Vec_Sub(&v88, pos, &v70);
            if (Math_AngleDiffAbs(dr, Math_Atan2(v88.x, v88.z)) > 0x4000) {
                s16 *p1 = FtrFootprint_GetTileOffset(&buf, 1);
                s16 *p2 = FtrFootprint_GetTileOffset(&buf, 1);
                if (Unk_ov004_02233f3c_Ns::FtrMgr_TryPlaceAt(out, px + p1[0], py + p2[1], (r7 + 2) & 3, pl, layer, bx, by) == 3) {
                    FtrFootprint_Destruct(&buf);
                    return 3;
                }
            }
            FtrFootprint_Destruct(&buf);
        }
        return 3;
    }
    e++;
testE:
    if (e < cnt) goto loopE;
    d = d + 1;
testD:
    if (d < 4) goto loopD;
nextK:
    k++;
testK:
    if (k < 4) goto loopK;
    layer--;
testL:
    if (layer >= 0) goto loopL;
    return 2;
}

// @0x2233f08 unk_02233dc0.cpp
extern "C" s32 FtrMgr_FindPlacementForPlayer(void *a, u16 *b, u32 c) {
    FtrActor *o = PlayerActor_GetActor(4);
    if (o != 0) {
        return FtrMgr_FindPlacement(a, b, (Unk_ov004_Vec3 *)&o->position, o->rotY, c);
    }
    return 0;
}

// @0x2233ee0 unk_02233dc0.cpp
extern "C" s32 FtrMgr_GetCurPlayerIndex() {
    if (PlayerData_GetCurrent() != 0) {
        return PlayerDataArray_FindById(gSavePlayers, PlayerData_getPlayerId());
    }
    return -1;
}

// @0x2233e98 unk_02233dc0.cpp
TILE_ENTRY(FtrMgr_FindPlacementMyDesignA, 0x3d84)

// @0x2233e50 unk_02233dc0.cpp
TILE_ENTRY(FtrMgr_FindPlacementMyDesignB, 0x3ea4)

// @0x2233e08 unk_02233dc0.cpp
TILE_ENTRY(FtrMgr_FindPlacementMyDesignD, 0x4224)

// @0x2233dc0 unk_02233dc0.cpp
TILE_ENTRY(FtrMgr_FindPlacementMyDesignC, 0x3f24)

// @0x2233d88 unk_0223349c.cpp
extern "C" s32 FtrMgr_TakeDisplayedWearable(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->kind) {
        case 0x1b:
            if (o) {
                return FtrShirt_syncAct1(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af28(o);
            }
            break;
        }
    }
    return 0;
}

// @0x2233d64 unk_0223349c.cpp
extern "C" s32 FtrMgr_TakeDisplayedWearableAt(s32 a, s32 b) {
    return FtrMgr_TakeDisplayedWearable(FtrActorGrid_GetInstance()->getActor(a, b, 0));
}

// @0x2233d2c unk_0223349c.cpp
extern "C" s32 FtrMgr_RestoreDisplayedWearable(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->kind) {
        case 0x1b:
            if (o) {
                return FtrShirt_syncAct0(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af14(o);
            }
            break;
        }
    }
    return 0;
}

// @0x2233d08 unk_0223349c.cpp
extern "C" s32 FtrMgr_RestoreDisplayedWearableAt(s32 a, s32 b) {
    return FtrMgr_RestoreDisplayedWearable(FtrActorGrid_GetInstance()->getActor(a, b, 0));
}

// @0x2233d04 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233d04(void) {
    return TRUE;
}

// @0x2233d00 unk_0223349c.cpp
extern "C" BOOL func_ov004_02233d00(void) {
    return TRUE;
}

// @0x2233cfc unk_0223349c.cpp
extern "C" BOOL func_ov004_02233cfc(void) {
    return TRUE;
}

// @0x2233cdc unk_0223349c.cpp
extern "C" s32 FurnitureManager_GetTvTex(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return TvScreen_GetTex(&s->tvScreen);
    }
    return 0;
}

// @0x2233cb4 unk_0223349c.cpp
extern "C" s32 FurnitureManager_GetTvProgram(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return (s16)TvScreen_GetProgram(&s->tvScreen);
    }
    return -1;
}

// @0x2233c94 unk_0223349c.cpp
extern "C" TvSound *FurnitureManager_GetTvSound(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return (TvSound *)TvScreen_GetSound(&s->tvScreen);
    }
    return 0;
}

// @0x2233c74 unk_0223349c.cpp
extern "C" s32 FurnitureManager_GetTvLoopCount(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return TvScreen_GetLoopCount(&s->tvScreen);
    }
    return 0xff;
}

// @0x2233c54 unk_0223349c.cpp
extern "C" s32 FurnitureManager_GetTvFrame(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return TvScreen_GetFrame(&s->tvScreen);
    }
    return 0;
}

// @0x2233c3c unk_0223349c.cpp
extern "C" void FurnitureManager_SetTvProgramChanged(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        s->tvProgramChanged = 1;
    }
}

// @0x2233c20 unk_0223349c.cpp
extern "C" u8 FurnitureManager_IsTvProgramChanged(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return s->tvProgramChanged;
    }
    return 0;
}

// @0x2233c18 unk_0223349c.cpp
extern "C" void FtrMoveFlag_Init(u8 *p) {
    *p = 0;
}

// @0x2233c10 unk_0223349c.cpp
extern "C" void FtrMoveFlag_Destroy(u8 *p) {
    *p = 0;
}

// @0x2233bf4 unk_0223349c.cpp
extern "C" void *FurnitureManager_GetMoveAnim(void) {
    FurnitureManager *s = sFurnitureManager;
    if (s) {
        return &s->moveAnim;
    }
    return 0;
}

// @0x2233b90 unk_0223349c.cpp
extern "C" void FtrMoveAnim_NodeCallback(Unk_ov004_02233b90_Obj *o) {
    Unk_ov004_02233b3c_V3 v;
    Unk_ov004_02233b3c_V3 out;
    FtrMoveAnim *r;
    if (o != 0 && o->c->nodeId == 0) {
        Unk_ov004_02233b3c_V3 *pv = &o->pJntAnmResult->trans;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        r = o->pRenderObj->ptrUser;
        if (r != 0) {
            *(Unk_ov004_02233b3c_Mat *)data_021f47e0 = *(Unk_ov004_02233b3c_Mat *)FtrMoveAnim_GetMtx(r);
            MTX_MultVec43(&v, data_021f47e0, &out);
            FtrMoveAnim_SetPos(r, &out);
        }
    }
}

// @0x2233b80 unk_0223349c.cpp
extern "C" void FtrMoveAnim_InstallCallback(FtrMoveAnim *r) {
    r->modelArc = (void *)FtrMoveAnim_NodeCallback;
    ((u8 *)&r->modelMtx)[2] = 2;
}

// @0x2233b54 unk_0223349c.cpp
extern "C" void *FtrMoveAnim_Construct(FtrMoveAnim *r) {
    func_020548d0(r->model);
    r->heap = 0;
    r->modelArc = 0;
    r->resMdl = 0;
    r->pushAnim = 0;
    r->pullAnim = 0;
    r->haniwaAnim = 0;
    r->anmArc = 0;
    r->isPlaying = 0;
    r->posX = 0;
    r->posY = 0;
    r->posZ = 0;
    return r;
}

// @0x2233b3c unk_0223349c.cpp
extern "C" void *FtrMoveAnim_Destruct(FtrMoveAnim *r) {
    r->isPlaying = 0;
    func_020548a0(r->model);
    return r;
}

// @0x2233b20 unk_0223349c.cpp
extern "C" void FtrMoveAnim_Load(FtrMoveAnim *r) {
    FtrMoveAnim_CreateHeap(r);
    FtrMoveAnim_LoadAnims(r);
    FtrMoveAnim_LoadModel(r);
}

// @0x2233b04 unk_0223349c.cpp
extern "C" void FtrMoveAnim_Unload(FtrMoveAnim *r) {
    FtrMoveAnim_ClearModel(r);
    FtrMoveAnim_ClearAnims(r);
    FtrMoveAnim_DestroyHeap(r);
}

// @0x2233b00 unk_0223349c.cpp
extern "C" void *FtrMoveAnim_GetMtx(FtrMoveAnim *r) {
    return &r->modelMtx;
}

// @0x2233af0 unk_0223349c.cpp
extern "C" void FtrMoveAnim_SetPos(FtrMoveAnim *r, Unk_ov004_02233b3c_V3 *v) {
    r->posX = v->x;
    r->posY = v->y;
    r->posZ = v->z;
}

// @0x2233a70 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_Start(FtrMoveAnim *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e) {
    if (*flag == 0 && r->isPlaying == 0 && x != 0) {
        BlendAnimModel_initAnim(r->model, x, 1, 0x1000, 0, 0);
        r->isPlaying = 1;
        *flag = r->isPlaying;
        r->posX = pos->x;
        r->posY = pos->y;
        r->posZ = pos->z;
        Mtx43_SetTranslate(data_021f47e0, pos->x, pos->y, pos->z);
        Mtx43_RotateY(data_021f47e0, *(s16 *)&e);
        r->modelMtx = *(Unk_ov004_02233b3c_Mat *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}

// @0x2233a48 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_StartPush(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return FtrMoveAnim_Start(r, FtrMoveAnim_GetPushAnim(r), a, b, c);
}

// @0x2233a20 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_StartPull(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return FtrMoveAnim_Start(r, FtrMoveAnim_GetPullAnim(r), a, b, c);
}

// @0x22339cc unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_Step(FtrMoveAnim *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *out) {
    if (r->isPlaying != 0 && *a != 0) {
        AnimModel_stepAnim(r->model);
        Model_drawNoGeCmd(r->model);
        out->x = r->posX;
        out->y = r->posY;
        out->z = r->posZ;
        if (AnimFrameCtrl_isFinished(r->animFrameCtrl)) {
            *a = 0;
            r->isPlaying = *a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// @0x223399c unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_CreateHeap(FtrMoveAnim *r) {
    if (r->heap == 0) {
        r->heap = FrameHeap_Create(0x2800, gCurrentHeap);
        if (r->heap) {
            return TRUE;
        }
    }
    return FALSE;
}

// @0x223397c unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_DestroyHeap(FtrMoveAnim *r) {
    if (r->heap) {
        Heap_destroy2(r->heap);
        r->heap = 0;
        return TRUE;
    }
    return FALSE;
}

// @0x22338e0 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_LoadAnims(FtrMoveAnim *r) {
    Unk_ov004_022337d4_Arc arc;
    if (r->anmArc == 0) {
        r->anmArc = File_LoadAlloc("/ftr/anm/anm.arc", r->heap, 4, 0);
        if (r->anmArc == 0) {
            return FALSE;
        }
        if (func_02101340(&arc, "ANM", r->anmArc)) {
            void *x = func_021012bc("ANM:a/bca/ft_push1.nsbca");
            if (x) {
                r->pushAnim = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc("ANM:a/bca/ft_pull1.nsbca");
            if (x) {
                r->pullAnim = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc("ANM:a/bca/ft_kb_hw_def_anim.nsbca");
            if (x) {
                r->haniwaAnim = (u32)func_021065f8(func_021065dc(x), 0);
            }
            func_02101310(&arc);
            return TRUE;
        }
    }
    return FALSE;
}

// @0x22338d0 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_ClearAnims(FtrMoveAnim *r) {
    r->anmArc = 0;
    r->pushAnim = 0;
    r->pullAnim = 0;
    r->haniwaAnim = 0;
    return TRUE;
}

// @0x22337d4 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_LoadModel(FtrMoveAnim *r) {
    Unk_ov004_022337d4_Path path;
    Unk_ov004_022337d4_Arc arc;
    if (r->heap == 0) {
        return FALSE;
    }
    if (r->modelArc != 0) {
        return FALSE;
    }
    if (r->resMdl != 0) {
        return FALSE;
    }
    path.item = 0x3984;
    s32 v = Item_GetFurnitureIndex(&path.item);
    func_020639e8(path.path, "/ftr/%d/%d/%04x.arc", v >> 8, (v & 0xff) >> 4, v);
    r->modelArc = File_LoadAlloc(path.path, r->heap, 4, 0);
    if (r->modelArc != 0) {
        if (func_02101340(&arc, "FTT", r->modelArc)) {
            BOOL ok = FALSE;
            u8 *p;
            p = (u8 *)NNS_G3dGetMdlSet(func_021012bc(sFtrMoveAnimModelNamePtr));
            r->resMdl = (u32)p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
            if (Model_setResourceAndBind(r->model, (void *)r->resMdl, ok)) {
                if (AnimModel_allocAnmObj(r->model, r->heap)) {
                    BlendAnimModel_initAnim(r->model, FtrMoveAnim_GetPushAnim(r), 1, 0x1000, ok, ok);
                    AnimModel_attachAnim(r->model);
                    Model_setInitCallback(r->model, (void *)FtrMoveAnim_InstallCallback, r);
                    ok = TRUE;
                }
            }
            func_02101310(&arc);
            return ok;
        }
    }
    return FALSE;
}

// @0x22337c8 unk_0223349c.cpp
extern "C" BOOL FtrMoveAnim_ClearModel(FtrMoveAnim *r) {
    r->modelArc = 0;
    r->resMdl = 0;
    return TRUE;
}

// @0x22337c4 unk_0223349c.cpp
extern "C" u32 FtrMoveAnim_GetPushAnim(FtrMoveAnim *r) {
    return r->pushAnim;
}

// @0x22337c0 unk_0223349c.cpp
extern "C" u32 FtrMoveAnim_GetPullAnim(FtrMoveAnim *r) {
    return r->pullAnim;
}

// @0x22337bc unk_0223349c.cpp
extern "C" u32 FtrMoveAnim_GetHaniwaAnim(FtrMoveAnim *r) {
    return r->haniwaAnim;
}

// @0x2233790 unk_0223349c.cpp
extern "C" void *TvProgSlot_Construct(TvProgSlot *p) {
    func_02056d8c(&p->texPatAnim);
    p->program = -1;
    p->weather = -1;
    p->heap = 0;
    p->loopCount = 0;
    return p;
}

// @0x223377c unk_0223349c.cpp
extern "C" void *TvProgSlot_Destruct(TvProgSlot *p) {
    func_02056d54(&p->texPatAnim);
    return p;
}

// @0x2233744 unk_0223349c.cpp
extern "C" void *TvProgSlot_Init(TvProgSlot *p, u32 a) {
    p->program = -1;
    p->weather = -1;
    p->heap = FrameHeap_Create(0xe00, gCurrentHeap);
    p->screenTex = a;
}

// @0x223372c unk_0223349c.cpp
extern "C" s32 TvWeather_GetName(u32 i) {
    if (i < 0xb) {
        return (s32)sTvWeatherNames[i];
    }
    return (s32)sTvWeatherNames[0];
}

// @0x2233660 unk_0223349c.cpp
extern "C" BOOL TvProgSlot_Load(TvProgSlot *p, u32 id, s32 x) {
    char buf1[0x28];
    char buf2[0x28];
    s32 r6;
    TvProgSlot_FreeFiles(p);
    r6 = -1;
    if (id != 0xff) {
        func_020639e8(buf1, "/ftr/tv/prog/tv_program%d.nsbtx", id);
        func_020639e8(buf2, "/ftr/tv/prog/tv_program%d.nsbtp", id);
    } else {
        r6 = TvWeather_GetName(x);
        func_020639e8(buf1, "/ftr/tv/weather/%s.nsbtx", r6);
        func_020639e8(buf2, "/ftr/tv/weather/%s.nsbtp", r6);
        r6 = x;
    }
    p->progTex = (u32)NNS_G3dGetTex(File_LoadAlloc(buf1, p->heap, 4, 0));
    p->progTexPat = (u32)func_021066ac(func_02106690(File_LoadAlloc(buf2, p->heap, 4, 0)), 0);
    if (TexPatVramAnim_init(&p->texPatAnim, (void *)p->screenTex, "tv.0", "tv_pl", (void *)p->progTex, (void *)p->progTexPat, 0)) {
        p->program = id;
        p->weather = r6;
        p->loopCount = 0;
        return TRUE;
    }
    return FALSE;
}

// @0x2233644 unk_0223349c.cpp
extern "C" void TvProgSlot_FreeFiles(TvProgSlot *p) {
    if (p->heap) {
        Heap_freeAll(p->heap);
    }
    p->progTex = 0;
    p->progTexPat = 0;
}

// @0x22335fc unk_0223349c.cpp
extern "C" void TvProgSlot_Update(TvProgSlot *p) {
    if (p->progTex && p->progTexPat) {
        TexPatVramAnim_update(&p->texPatAnim);
        if (AnimFrameCtrl_hasPassedFrame(&p->texPatAnim, 0)) {
            s32 t = p->loopCount + 1;
            if (t > 0xffff) {
                p->loopCount = 0xffff;
            } else {
                p->loopCount = t;
            }
        }
    }
}

// @0x22335dc unk_0223349c.cpp
extern "C" void TvProgSlot_Release(TvProgSlot *p) {
    if (p->heap) {
        Heap_destroy2(p->heap);
        p->heap = 0;
    }
    p->progTexPat = 0;
    p->progTex = 0;
    p->screenTex = 0;
}

// @0x22335d4 unk_0223349c.cpp
extern "C" s32 TvProgSlot_GetProgram(TvProgSlot *p) {
    return p->program;
}

// @0x22335b8 unk_0223349c.cpp
extern "C" s32 TvProgSlot_GetWeather(TvProgSlot *p) {
    if (TvProgSlot_GetProgram(p) == 0xff) {
        return p->weather;
    }
    return -1;
}

// @0x22335b0 unk_0223349c.cpp
extern "C" u16 TvProgSlot_GetLoopCount(TvProgSlot *p) {
    return p->loopCount;
}

// @0x22335a8 unk_0223349c.cpp
extern "C" u32 TvProgSlot_GetFrame(TvProgSlot *p) {
    return (u32)(p->texPatAnim[2] << 4) >> 16;
}

// @0x2233560 unk_0223349c.cpp
extern "C" void *TvScreen_Construct(TvScreen *q) {
    __cxa_vec_ctor(&q->slots, 2, 0xa8, (void *(*)(void *))TvProgSlot_Construct, (void *(*)(void *, s32))TvProgSlot_Destruct);
    q->curSlot = -1;
    q->screenTex = 0;
    q->soundHeap = 0;
    q->tvSound = 0;
    return q;
}

// @0x2233544 unk_0223349c.cpp
extern "C" void *TvScreen_Destruct(TvScreen *q) {
    __cxa_vec_cleanup(&q->slots, 2, 0xa8, (void *(*)(void *, s32))TvProgSlot_Destruct);
    return q;
}

// @0x223349c unk_0223349c.cpp
extern "C" void TvScreen_Load(TvScreen *q) {
    void *h;
    q->curSlot = -1;
    q->screenTex = 0;
    h = File_LoadAlloc("/ftr/tv/tv.nsbtx", gCurrentHeap, 4, 0);
    if (h) {
        void *r6 = NNS_G3dGetTex(h);
        Gfx3d_LoadTexAndPltt(r6, 0);
        q->screenTex = (u32)Gfx3d_CopyTex(r6, gBgHeap);
        Mem_Free(h);
    }
    TvProgSlot_Init(&q->slots[0], q->screenTex);
    TvProgSlot_Init(&q->slots[1], q->screenTex);
    if (sFtrMgrTvSoundEnabled) {
        q->soundHeap = FrameHeap_Create(TvSound_GetMaxSize() + 0x60, gCurrentHeap);
    }
    s32 a = TvSchedule_GetCurrentProgram(q);
    s32 b = TvWeather_GetForecastIndex(q);
    TvScreen_SetProgram(q, a, b);
}

// @0x22333f8 unk_02232b1c.cpp
extern "C" BOOL TvScreen_SetProgram(TvScreen *o, s32 a, s32 b) {
    s8 idx;
    TvProgSlot_FreeFiles(&o->slots[o->curSlot & 1]);
    idx = (o->curSlot + 1) & 1;
    if (TvProgSlot_Load(&o->slots[idx], a, b)) {
        o->curSlot = idx;
        if (sFtrMgrTvSoundEnabled) {
            if (o->soundHeap) {
                if (o->tvSound) {
                    TvSound_callRelease(o->tvSound);
                    o->tvSound = 0;
                }
                Heap_freeAll(o->soundHeap);
                o->tvSound = TvSound_Create(o->soundHeap, a);
                if (o->tvSound) TvSound_callReset(o->tvSound);
            }
        }
        return TRUE;
    }
    return FALSE;
}

// @0x22333a8 unk_02232b1c.cpp
extern "C" void TvScreen_UpdateSchedule(TvScreen *o) {
    s32 t = TvSchedule_GetCurrentProgram(o);
    if (t == 0xff) {
        s32 u = TvWeather_GetForecastIndex(o);
        if (u != TvScreen_GetWeather(o)) {
            TvScreen_SetProgram(o, t, u);
            FurnitureManager_SetTvProgramChanged();
        }
    } else {
        if (t != TvScreen_GetProgram(o)) {
            TvScreen_SetProgram(o, t, 0xff);
            FurnitureManager_SetTvProgramChanged();
        }
    }
}

// @0x2233380 unk_02232b1c.cpp
extern "C" void TvScreen_Update(TvScreen *o) {
    if (TvScreen_IsLoaded(o)) TvProgSlot_Update(&o->slots[o->curSlot & 1]);
}

// @0x2233330 unk_02232b1c.cpp
extern "C" u8 TvSchedule_GetCurrentProgram(void *) {
    const TvScheduleDay *t = &sTvScheduleByWeekday[Clock_GetWeekday()];
    Unk_ov004_02233330_Time l;
    s32 i;
    u16 y;
    Clock_GetMinuteHour(&l);
    i = t->numEntries - 1;
    y = l.hourMinute;
    for (; i >= 0; i--) {
        const u8 *e = t->entries + i * 3;
        l.hour = e[1];
        l.minute = e[2];
        if (y >= *(u16 *)&l.minute) return e[0];
    }
    return 0xff;
}

// @0x22332b8 unk_02232b1c.cpp
extern "C" s32 TvWeather_IsUnkPeriod() {
    Unk_ov004_022332b8_Buf l;
    s32 r;
    l.unk_00 = 0;
    l.unk_04 = 0;
    Clock_GetDateTime(&l);
    l.unk_08 = 1;
    l.unk_09 = 1;
    l.unk_0a = 0;
    l.unk_0b = 0;
    l.unk_0a = ((u8 *)&l)[5];
    l.unk_09 = ((u8 *)&l)[4];
    l.unk_08 = ((u8 *)&l)[3];
    r = Date_GetWeatherPeriod(&l.unk_08);
    switch (r) {
    case 0:
    case 1:
    case 2:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        return TRUE;
    }
    return FALSE;
}

// @0x2233244 unk_02232b1c.cpp
extern "C" s32 TvWeather_GetForecastIndex(void *) {
    s32 t = data_021ed2b0.unk_0b & 0x1f;
    if (t <= 6) return 0;
    if (t <= 9) return 1;
    if (t <= 15) {
        if (TvWeather_IsUnkPeriod()) return 8;
        return 2;
    }
    if (t <= 18) return 3;
    if (t <= 21) return 4;
    if (t <= 25) return 5;
    if (t <= 28) {
        if (TvWeather_IsUnkPeriod()) return 9;
        return 6;
    }
    if (TvWeather_IsUnkPeriod()) return 10;
    return 7;
}

// @0x22331e0 unk_02232b1c.cpp
extern "C" void TvScreen_Release(TvScreen *o) {
    o->curSlot = -1;
    o->screenTex = 0;
    if (sFtrMgrTvSoundEnabled) {
        if (o->soundHeap) {
            if (o->tvSound) {
                TvSound_callRelease(o->tvSound);
                o->tvSound = 0;
            }
            Heap_destroy2(o->soundHeap);
            o->soundHeap = 0;
        }
    }
    TvProgSlot_Release(&o->slots[0]);
    TvProgSlot_Release(&o->slots[1]);
}

// @0x22331d0 unk_02232b1c.cpp
extern "C" BOOL TvScreen_IsLoaded(TvScreen *o) {
    BOOL r = FALSE;
    if (o->curSlot != -1) r = TRUE;
    return r;
}

// @0x22331b8 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetProgram(TvScreen *o) {
    return TvProgSlot_GetProgram(&o->slots[o->curSlot & 1]);
}

// @0x22331a0 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetWeather(TvScreen *o) {
    return TvProgSlot_GetWeather(&o->slots[o->curSlot & 1]);
}

// @0x2233194 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetTex(TvScreen *o) {
    return o->screenTex;
}

// @0x2233188 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetSound(TvScreen *o) {
    return (s32)o->tvSound;
}

// @0x2233170 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetLoopCount(TvScreen *o) {
    return TvProgSlot_GetLoopCount(&o->slots[o->curSlot & 1]);
}

// @0x2233158 unk_02232b1c.cpp
extern "C" s32 TvScreen_GetFrame(TvScreen *o) {
    return TvProgSlot_GetFrame(&o->slots[o->curSlot & 1]);
}

// @0x2233138 unk_02232b1c.cpp
extern "C" const FtrSoundRecord *FtrSound_GetRecord(s32 idx) {
    if (idx < 0x6e9) return &sFtrSoundTable[idx];
    return &sFtrSoundNoneRecord;
}

// @0x2233128 unk_02232b1c.cpp
extern "C" u16 FtrSound_GetSe0(s32 idx) {
    return FtrSound_GetRecord(idx)->se0;
}

// @0x2233118 unk_02232b1c.cpp
extern "C" u16 FtrSound_GetSe1(s32 idx) {
    return FtrSound_GetRecord(idx)->se1;
}

// @0x2233108 unk_02232b1c.cpp
extern "C" u16 FtrSound_GetSe2(s32 idx) {
    return FtrSound_GetRecord(idx)->se2;
}

// @0x22330f8 unk_02232b1c.cpp
extern "C" u16 FtrSound_GetSe3(s32 idx) {
    return FtrSound_GetRecord(idx)->se3;
}

// @0x22330cc unk_02232b1c.cpp
extern "C" void FtrMgr_PlaySeatSound1At(s32 a) {
    void *p = FtrActorGrid_GetInstance()->getActorAtPos((void *)a, 0);
    if (p) {
        if (FtrActor_PredIsSeatOrBed()) FtrActor_playSound1(p);
    }
}

// @0x22330a0 unk_02232b1c.cpp
extern "C" void FtrMgr_PlaySeatSound0At(s32 a) {
    void *p = FtrActorGrid_GetInstance()->getActorAtPos((void *)a, 0);
    if (p) {
        if (FtrActor_PredIsSeatOrBed()) FtrActor_playSound0(p);
    }
}

// @0x2233074 unk_02232b1c.cpp
extern "C" void FtrMgr_PlaySeatSound2At(s32 a) {
    void *p = FtrActorGrid_GetInstance()->getActorAtPos((void *)a, 0);
    if (p) {
        if (FtrActor_PredIsSeatOrBed()) FtrActor_playSound2(p);
    }
}

extern "C" char data_ov004_0224e95c[8] = "tv_ss";

extern "C" u8 sFtrMgrTvSoundEnabled = 0;

extern "C" char data_ov004_0224e97c[8] = "tv_ff";

extern "C" const u8 sFtrPlaceDirOrder[4] = {0, 2, 1, 3};

s32 sFtrMgrSoundRangeSq = (s32)(((s64)data_020c8cb8 * data_020c8cb8 + 0x800) >> 12);

extern "C" u8 sFtrMgrSaleMode = 0;

extern "C" const u8 sTvScheduleDay6[0x4c] = {4, 0, 0, 9, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 8, 8, 0, 6, 9, 0, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 6, 14, 0, 10, 15, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 5, 19, 0, 8, 20, 0, 9, 21, 0, 255, 22, 45, 2, 23, 0, 0};

extern "C" const FtrSoundRecord sFtrSoundNoneRecord = {0xffff, 0xffff, 0xffff, 0xffff};

extern "C" const TvScheduleDay sTvScheduleByWeekday[7] = {{sTvScheduleDay0, 22}, {sTvScheduleDay1, 26}, {sTvScheduleDay2, 26}, {sTvScheduleDay3, 28}, {sTvScheduleDay4, 28}, {sTvScheduleDay5, 26}, {sTvScheduleDay6, 25}};

extern "C" char data_ov004_0224e93c[8] = "tv_rr";

extern "C" char data_ov004_0224e984[8] = "tv_cs";

extern "C" const char *sFtrMoveAnimModelNamePtr = sFtrMoveAnimModelName;

FxVec3 sFtrRemovePos(0);

extern "C" const u8 sTvScheduleDay2[0x50] = {8, 0, 0, 9, 1, 0, 1, 3, 0, 0, 4, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 2, 7, 0, 255, 7, 45, 3, 8, 0, 6, 8, 30, 7, 10, 0, 2, 11, 0, 255, 11, 45, 8, 12, 0, 3, 13, 0, 6, 15, 0, 7, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 3, 21, 0, 2, 22, 0, 255, 22, 45, 6, 23, 0, 0, 0};

extern "C" const u8 sTvScheduleDay0[0x44] = {1, 0, 0, 0, 1, 0, 1, 5, 0, 2, 6, 0, 255, 6, 45, 7, 7, 0, 6, 8, 0, 5, 9, 0, 8, 10, 0, 2, 11, 0, 255, 11, 45, 7, 12, 0, 10, 13, 0, 5, 15, 0, 6, 16, 0, 8, 17, 0, 2, 18, 0, 255, 18, 45, 10, 19, 0, 9, 21, 0, 255, 22, 45, 2, 23, 0, 0, 0};

extern "C" u16 sFtrMgrCycleCounter = 0;

extern "C" FurnitureManager *sFurnitureManager = 0;

extern "C" char data_ov004_0224e94c[8] = "tv_sc";
