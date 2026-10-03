#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern u8 gFieldSceneKind;
extern u8 sSceneCarpets[];
extern u8 sSceneWallpapers[];
extern u8 sRoomWallFloorNoItem[];
extern void *gCommManager;
extern u8 gSavePlayers[];
void *RoomShell_GetPrevCarpet();
void *RoomShell_GetPrevWallpaper();
void *RoomShell_SetCarpet(u16 *id, s32 a, s32 b);
void *RoomShell_SetWallpaper(u16 *id, s32 a, s32 b);
void *RoomWallFloor_SetCarpet(u16 *id, s32 a, s32 b, s32 c);
void *RoomWallFloor_SetWallpaper(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_Send(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_MakeDesignItem(u16 *out, s32 a);
void func_02004b60();
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 func_0209888c();
u32 PlayerDataArray_FindById(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 Scene_GetCurrent();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL Scene_GetSkyKind(s32 v);
BOOL Scene_InTown();
BOOL Taxi_IsArriving();
void Melody_StartTrackA();
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
s32 Weather_GetPrecipKind(void);
void Weather_GetLevels(s32 *a, s32 *b);
s32 Scene_GetPrevious(void);
s32 Scene_InTownUnk31(void);
s32 Scene_GetWarpRequest(void);
s32 SceneWarp_GetScene(void);
s32 Snd_SetBgmTrackVariant(s32 a);
void Snd_FadeInBgmTracks(s32 a);
void Snd_FadeOutBgmTracks(s32 a);
void PlayerActor_GetSlotHeldItem(void *p, s32 n);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 PlayerActor_GetActionOrSpawnAction(void);
s32 _ZN7RoomBgm7setKeepEj(void *p, s32 a);
s32 _ZN8FieldBgm7setKeepEj(void *p, s32 a);
void Snd_DuckSubPlayers(s32);
void Snd_RestoreSubPlayers(void);
void Snd_MoveBgmVolume(s32 a, s32 b);
void Snd_StopBgm(s32 a);
void Snd_PlayBgm(u32 a);
s32 _ZN12Unk_02097ff48testFlagEj(void *p, s32 id);
s32 _ZN8BgmClock13isTimeInRangeEjjjjjj(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN12BgmSceneFade6updateEv(void *p);
s32 _ZN12BgmSceneFade14hasExitSilenceEv(s32 a);
s32 _ZN8BgmClock14hasYearChangedEv(s32 a);
s32 EventAnnounce_GetActiveEvent(void);
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 Event_GetState(u32, void *, u32);
s32 Taxi_IsLeaving(void);
s32 _ZN10PlayerData10getErrandsEv(s32 a);
s32 PlayerErrands_IsJobActive(s32 a);
extern u16 data_020c8b9c[];
void func_02133ef8(void *, u32);
s32 Clock_GetYear(void);
void Clock_GetDayMonth(u16 *);
void Clock_GetMinuteHour(u16 *);
s32 Clock_GetSecond(void);
void BgHeap_Destroy(void);
void func_020639e8(void *buf, const void *fmt, ...);
void *BgModel_LoadFile(void *, void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void Gfx3d_LoadTexAndPltt(void *, s32);
void *Gfx3d_CopyTex(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void *func_0204df64(void *);
extern u8 sBgAcreArcPathFmt[], sBgArchiveName[], sBgAcreBmdPath[], sBgAcreBclPath[], sBgAcreBsdPath[];
extern u8 sBgAcreBcaPath[], sBgAcreBmaPath[], sBgAcreBtaPath[], sBgAcreMgtPath[], sBgAcreTexPathFmt[];
extern u8 sBgGroundAnimArcPath[], sBgGroundSetBmaPath[], sBgGroundSetBtaPath[], sBgRiverBtpPath[], sBgRiverItpTexPath[];
extern u8 sBgBeBBtpPath[], sBgBeBItpTexPath[], sBgGroundSetTexPathFmt[];
extern void *gBgHeap;
extern void *gCurrentHeap;
extern u8 gSaveTownMap[];
extern u8 gBgModelCache[];
void *BgModel_LoadBcl(s32 id, void *heap);
s32 BgModel_GetGrassType(void *);
}
// ---- unified class definitions of the unit (union of the views of the five source files) ----
class BgmRequest;
class BgmManagerView;
class BgmManagerOwnerView;
class BgmVolumeMixer;
class BgmVolumeChannel;

// 0x1c-byte slot
class BgmRequest {
public:
    BgmRequest();
    BgmRequest(s32 a, u32 b, s32 c, s32 d, u8 e);
    ~BgmRequest();

    BOOL tickLifetime();
    void copyFrom(BgmRequest *src);
    void clear();
    void func_02036c18();
    BgmRequest *init(s32 a, u32 b, s32 c, s32 d, u8 e);
    BgmRequest *initEmpty();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ s32 unk_18;
};

// the symbols name this class in the parameter of three methods of the composite
class BgmRequestView : public BgmRequest {
public:
    BOOL clearPlaying();
};

typedef BOOL (BgmRequestView::*Unk_02034574_Fn)();

class EventBgm {
public:
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    virtual ~EventBgm();
    EventBgm(u32 a);
    void updateYearChanged();
    void stopCountdownFade();
    void startCountdownFade(u32 a);
    void stopFireworks();
    void stopCountdown();
    void stopNewYearDay();
    s32 stopNewYearDayAlias(); // alias of func_02036220 declared s32 so the caller emits bl instead of a tail branch
    void stopNewYearNight();
    void stopNewYearFanfare();
    void playFireworks(u32 a);
    void playCountdown(u32 a);
    void playNewYearDay(u32 a);
    void playNewYearNight(u32 a);
    void playNewYearFanfare(u32 a);
    s32 updateFireworks(BOOL a);
    void updateCountdown(BOOL a);
    void updateNewYearDay(BOOL a);
    void updateEvents();
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class FieldSpecialBgm {
public:
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;

    FieldSpecialBgm(u32 a);
    virtual ~FieldSpecialBgm();
    void stopBgm();
    void play(s32 a, u32 b, u32 c);
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class HourlyBgm {
public:
    u32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;

    HourlyBgm(u32 v);
    virtual ~HourlyBgm();
    void updateHourFade();
    void stopHourFade();
    void startHourFade(u32 x);
    void updateHour();
    void stopHourBgm();
    void playHourBgm();
    void setKeep(u32 v);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class BgmCommandQueue {
public:
    BgmCommandQueue(void *owner);
    ~BgmCommandQueue();
    void flush();
    void clear();
    BgmCommandQueue *init(void *owner);
    void requestVolume(s32 a, s32 b);
    void requestStop(s32 a);
    void requestPlay(u16 a);
    void func_02035740();

    u32 unk_00;
    u8 unk_04;
    u8 pad_05;
    u16 unk_06;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
};

typedef void (BgmManagerOwnerView::*Unk_02035780_OwnerFn)();

class BgmManagerOwnerView {
public:
    void forEachRequest(Unk_02035780_OwnerFn fn);
    void clearVolumePending();

    u8 pad_00[4];
    u16 unk_04;
    u8 pad_06[6];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11;
    u8 unk_12;
    u8 pad_13;
    u8 unk_14;
    u8 pad_15[0x1c0 - 0x15];
    s32 unk_1c0;
    u8 pad_1c4[0x2b4 - 0x1c4];
    BgmCommandQueue unk_2b4;
};

class BgmVolumeChannel {
public:
    BgmVolumeChannel();
    ~BgmVolumeChannel();
    void set(s32 a, s32 b, u8 c);
    void clear();

    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

class BgmVolumeMixer {
public:
    BgmVolumeMixer(BgmManagerOwnerView *owner);
    ~BgmVolumeMixer();
    void clearMasks();
    void clearChanged();
    void applyVolume();
    void maskForTopRequest();
    void updateRequestVolume(BgmVolumeChannel *e);
    void updateSceneDuck(BgmVolumeChannel *e);
    void updatePositionDuck(BgmVolumeChannel *e);
    void updateFireworkDuck(BgmVolumeChannel *e);
    void updateFishDuck(BgmVolumeChannel *e);
    void updateTalkDuck(BgmVolumeChannel *e);
    void updateMenuDuck(BgmVolumeChannel *e);
    void updateChannel0(BgmVolumeChannel *e);
    void updateChannels();
    void endFireworkDuck();
    void startFireworkDuck();
    void endFishDuck();
    void startFishDuck();
    void endMenuDuck();
    void setMenuDuck(s32 i);
    void endTalkDuck();
    void startTalkDuck();
    void reset();
    void update();
    void exit();
    void init();

    BgmManagerOwnerView *unk_00;
    BgmVolumeChannel unk_04[8];
    s32 unk_84;
};

typedef void (BgmVolumeMixer::*Unk_02035758_Fn)(BgmVolumeChannel *);

// 0x18-byte object
class BgmClock {
public:
    BgmClock();
    ~BgmClock();
    s32 unk_00;
    u16 unk_04;
    u8 unk_06;
    u8 unk_07;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    s32 unk_14;

    void update();
    BOOL hasYearChanged();
    BOOL hasHourChanged();
    BOOL isTimeInRange(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    BOOL isMinuteInRange(u32 a, u32 b, u32 c, u32 d);
    BOOL isAt(u16 *a, u16 *b);
};

class FieldBgm {
public:
    HourlyBgm unk_04;
    FieldSpecialBgm unk_18;
    EventBgm unk_24;
    virtual ~FieldBgm();
    FieldBgm(u32 a);
    void setKeep(u32 a);
    void end();
    void start();
    void stop();
    void update();
    void exit();
    void init();
};

class RoomBgm {
public:
    u32 unk_04;
    u8 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    virtual ~RoomBgm();
    void stopClosingMusic();
    void updateSceneBgm();
    void updateClosingMusic();
    void stopSceneBgm();
    void playSceneBgm(s32 a);
    void setKeep(u32 a);
    void end();
    void start();
    void forceClosingMusic();
    void stop();
    void update();
    void exit();
    void init();
    RoomBgm(u32 a);
};

class BgmSceneFade {
public:
    BgmSceneFade(u32 owner);
    virtual ~BgmSceneFade();
    void update();
    BOOL hasExitSilence();
    BOOL isKeepingBgm();
    void setKeepBgm();
    void setFadeDelay(s32 i);
    void func_02035368(s32 a, s32 b);
    void func_020353b0(s32 a, s32 b);
    void reset();
    void init();
    void onFadeIn();
    void onFadeOut();

    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    s32 unk_0c;
    s32 unk_10;
};

class FaintBgm {
public:
    virtual ~FaintBgm();
    BgmManagerView *unk_04;
    u16 unk_08;
    u8 unk_0a;
    FaintBgm(BgmManagerView *o);
    void stop();
    void exit();
    void init();
    void fadeOut();
    void startSilence();
    void play();
};

class BgmTracks {
public:
    virtual ~BgmTracks();
    BgmTracks();
};

// composite object seen by the first file (data_021c1b3c)
class BgmManager {
public:
    BgmManager();
    ~BgmManager();

    void updateHourChime();
    void exit();
    void init();
    void forEachRequest(Unk_02034574_Fn fn);
    void insertAt(s32 idx);
    BgmRequest *findKeptBefore(s32 n);
    s32 findByBgm(u16 id);
    s32 findByPriority(s32 v);
    s32 findPlaying();
    s32 findInsertPos(BgmRequestView *key);
    void tickRequests();
    void startTop();
    void clearPlaying();
    void removeMarked();
    void updateStop();
    void updateRequests();
    void releaseBgm(u16 id);
    void releasePriority(s32 v);
    void push(BgmRequestView *e);
    s32 func_02034514();
    void update();

    /* 0x000 */ BgmRequest unk_00[16];
    /* 0x1c0 */ s32 unk_1c0;
    /* 0x1c4 */ BgmVolumeMixer unk_1c4;
    /* 0x24c */ BgmClock unk_24c;
    /* 0x264 */ FieldBgm unk_264;
    /* 0x2a0 */ RoomBgm unk_2a0;
    /* 0x2b4 */ BgmCommandQueue unk_2b4;
    /* 0x2d0 */ BgmSceneFade unk_2d0;
    /* 0x2e4 */ FaintBgm unk_2e4;
    /* 0x2f0 */ BgmTracks unk_2f0;
    /* 0x2f4 */ u8 unk_2f4;
    /* 0x2f5 */ u8 pad_2f5[3];
};

// Vtable at 0x020d8e74.
class BgmProc : public GameProc {
public:
    BgmProc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual ~BgmProc();
    static BgmProc *create();

    /* 0x50 */ BgmManager unk_50;
};

// composite object seen by the second file
class BgmManagerView {
public:
    BgmRequest unk_000[16];
    s32 unk_1c0;
    BgmVolumeMixer unk_1c4;
    BgmClock unk_24c;
    FieldBgm unk_264;
    RoomBgm unk_2a0;
    BgmCommandQueue unk_2b4;
    BgmSceneFade unk_2d0;
    FaintBgm unk_2e4;
    BgmTracks unk_2f0;
    u8 unk_2f4;
    BgmManagerView();
    ~BgmManagerView();
    void exit();
    void init();
};

// plain functions that take the sub-object as `this`
namespace Ns_this {
extern "C" {
void BgmClock_Init(void *);
void BgmClock_Exit(void *);
void BgmClock_Update(void *);
void BgmClock_Reset(void *);
void BgmSceneFade_Reset(void *);
void BgmSceneFade_Update(void *);
void FaintBgm_Update(void *);
void BgmTracks_Update(void *);
}
}

struct Unk_020d8dbc_Rec {
    BgmProc *(*fn)();
    s16 a;
    s16 b;
};

struct Unk_02034250_Id {
    u16 v;
};

class BgmRequest;

struct Unk_02034320_Pkt {
    u16 a;
    u16 b;
};

class BgmManagerView;

extern "C" {
struct Unk_020353b0_Rec { s32 unk_00; u16 unk_04; };
}

class BgmManagerOwnerView;

class RoomBgmClosingView {
public:
    void updateClosingMusic();
    void stopClosingMusic();

    u8 pad_00[0xc];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
};

class RoomBgmSceneView {
public:
    void updateSceneBgm();
    void stopSceneBgm();
    void playSceneBgm(s32 t);

    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
};

struct Unk_020355dc_Data {
    u8 pad_00[0xc];
    u16 unk_0c;
};

struct Unk_020358d4_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
};

struct Unk_020358d4_Vec {
    s32 x, y, z;
};

struct Unk_020358d4_Src {
    s32 x, y, z;
    Unk_020358d4_Src() {}
    Unk_020358d4_Src(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" {
struct Unk_021e5890_T { u8 pad[0x14]; u8 unk_14; };
}

struct Unk_02036c60_Vec { s32 x, y, z; };

struct Unk_02036c60_Ent { u8 a; u8 pad; s16 b; s16 c; };

// ---- BgModelCache ----
struct Unk_02036cec_Entry {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u8 unk_24[4];
    void *unk_28;
    s32 unk_2c;
};

struct Unk_02036cec_Small {
    s32 unk_00;
    void *unk_04;
};

struct BgModelCache {
    Unk_02036cec_Entry unk_000[31];
    Unk_02036cec_Small unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    s32 unk_61c;
    u8 pad_620[0x10];
    s32 unk_630;
    s32 unk_634;
    s32 unk_638;
    s32 unk_63c;
    s32 unk_640;
    s32 unk_644;
    s32 unk_648;

    s32 getBeBPatTex();
    s32 getBeBPatAnm();
    s32 getRiverPatTex();
    s32 getRiverPatAnm();
    s32 getGroundTexSrtAnm();
    s32 getGroundMatAnm();
    s32 getGroundTex();
    BOOL reset();
    Unk_02036cec_Entry *getAcre(s32 id);
    void *getAcreBcl(s32 id);
    void loadGroundAnims();
    void loadGroundTexture();
};

// extern declarations
extern "C" {
extern u8 gFieldSceneKind;
extern u8 sSceneCarpets[];
extern u8 sSceneWallpapers[];
extern u8 sRoomWallFloorNoItem[];
extern void *gCommManager;
extern u8 gSavePlayers[];
extern Unk_02034574_Fn data_020d8dac;
void *RoomShell_GetPrevCarpet();
void *RoomShell_GetPrevWallpaper();
void *RoomShell_SetCarpet(u16 *id, s32 a, s32 b);
void *RoomShell_SetWallpaper(u16 *id, s32 a, s32 b);
void *RoomWallFloor_SetCarpet(u16 *id, s32 a, s32 b, s32 c);
void *RoomWallFloor_SetWallpaper(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_Send(u16 *id, s32 a, s32 b, s32 c);
void RoomWallFloor_MakeDesignItem(u16 *out, s32 a);
void func_02004b60();
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 func_0209888c();
u32 PlayerDataArray_FindById(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 Scene_GetCurrent();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL Scene_GetSkyKind(s32 v);
BOOL Scene_InTown();
BOOL Taxi_IsArriving();
void Melody_StartTrackA();
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
extern BgmManager *data_021c1b3c;
s32 _ZN10BgmManager11findPlayingEv(BgmManagerView *o);
void _ZN10BgmManager10releaseBgmEt(BgmManagerView *o, s32 a, s32 b);
void _ZN10BgmManager15releasePriorityEi(BgmManagerView *o, s32 a);
void _ZN10BgmManager4pushEP14BgmRequestView(BgmManagerView *o, BgmRequest *e);
s32 Weather_GetPrecipKind(void);
void Weather_GetLevels(s32 *a, s32 *b);
s32 Scene_GetPrevious(void);
s32 Scene_InTownUnk31(void);
s32 Scene_GetWarpRequest(void);
s32 SceneWarp_GetScene(void);
s32 Snd_SetBgmTrackVariant(s32 a);
void Snd_FadeInBgmTracks(s32 a);
void Snd_FadeOutBgmTracks(s32 a);
void PlayerActor_GetSlotHeldItem(void *p, s32 n);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
extern Unk_020355dc_Data *gActorDefaultParent;
s32 PlayerActor_GetActionOrSpawnAction(void);
s32 _ZN7RoomBgm7setKeepEj(void *p, s32 a);
s32 _ZN8FieldBgm7setKeepEj(void *p, s32 a);
void Snd_DuckSubPlayers(s32);
void Snd_RestoreSubPlayers(void);
void Snd_MoveBgmVolume(s32 a, s32 b);
void Snd_StopBgm(s32 a);
void Snd_PlayBgm(u32 a);
Unk_020358d4_Src *PlayerActor_GetBodyPos(u32 n);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_020358d4_Buf *p, Unk_020358d4_Src *pos, s32 a, s32 b);
void GroundInfo_Destruct(Unk_020358d4_Buf *p);
s32 _ZN12Unk_02097ff48testFlagEj(void *p, s32 id);
s32 _ZN8BgmClock13isTimeInRangeEjjjjjj(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN12BgmSceneFade6updateEv(void *p);
s32 _ZN12BgmSceneFade14hasExitSilenceEv(s32 a);
s32 _ZN8BgmClock14hasYearChangedEv(s32 a);
s32 EventAnnounce_GetActiveEvent(void);
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 Event_GetState(u32, void *, u32);
s32 Taxi_IsLeaving(void);
s32 _ZN10PlayerData10getErrandsEv(s32 a);
s32 PlayerErrands_IsJobActive(s32 a);
extern u16 data_020c8b9c[];
void func_02133ef8(void *, u32);
s32 Clock_GetYear(void);
void Clock_GetDayMonth(u16 *);
void Clock_GetMinuteHour(u16 *);
s32 Clock_GetSecond(void);
void BgHeap_Destroy(void);
void func_020639e8(void *buf, const void *fmt, ...);
void *BgModel_LoadFile(void *, void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void Gfx3d_LoadTexAndPltt(void *, s32);
void *Gfx3d_CopyTex(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void *func_0204df64(void *);
extern u8 sBgAcreArcPathFmt[], sBgArchiveName[], sBgAcreBmdPath[], sBgAcreBclPath[], sBgAcreBsdPath[];
extern u8 sBgAcreBcaPath[], sBgAcreBmaPath[], sBgAcreBtaPath[], sBgAcreMgtPath[], sBgAcreTexPathFmt[];
extern u8 sBgGroundAnimArcPath[], sBgGroundSetBmaPath[], sBgGroundSetBtaPath[], sBgRiverBtpPath[], sBgRiverItpTexPath[];
extern u8 sBgBeBBtpPath[], sBgBeBItpTexPath[], sBgGroundSetTexPathFmt[];
extern void *gBgHeap;
extern void *gCurrentHeap;
extern u8 gSaveTownMap[];
extern u8 gBgModelCache[];
void *BgModel_LoadBcl(s32 id, void *heap);
s32 BgModel_GetGrassType(void *);
extern Unk_021e5890_T data_021e5890;
}

// Declarations for data defined further down
// Data order: this unit is placed object by object (see object_order.txt).
extern const u16 sSceneBgmTable[0x3a];
extern u16 sNewYearEveDate[2];
extern u16 sNewYearEveTime[2];
extern u16 sNewYearDayDate[2];
extern Unk_020d8dbc_Rec sBgmProcProfile;
extern const u8 sBgmSceneFadeDelays[8];
extern const s32 sBgmMenuDuckStates[3];
extern const u16 sHourlyBgmIds[0x18];

// own functions
extern "C" {
BgmRequest *Bgm_GetPlayingRequest();
void Bgm_EndSceneBgm();
void Bgm_StartSceneBgm();
void Bgm_ResetAll();
void Bgm_DisableHourChime(void);
void Bgm_EnableHourChime(void);
u16 Bgm_GetCurrent(void);
void Bgm_ReleaseTransient(s32 a);
void Bgm_ReleasePriority(s32 a);
void Bgm_Release(s32 a);
void Bgm_RequestTransient(s32 a, s32 b);
void Bgm_RequestSilence(s32 a, s32 b, s32 c);
void Bgm_Request(s32 a, s32 b, s32 c, u8 d);
void BgmTracks_UpdateWeatherVariant(s32 x);
void BgmTracks_ApplySceneMask(void);
void BgmTracks_Update(s32 a);
void BgmTracks_OnBgmStart(s32 a, s32 b);
void BgmTracks_FadeInScene22(void);
void BgmTracks_FadeOutScene22(void);
void BgmTracks_FadeInForScene(void);
void BgmTracks_FadeOutForScene(void);
void FaintBgm_Update(void);
BgmSceneFade *Bgm_GetSceneFade(void);
void *Bgm_GetRoomBgm(void);
void *Bgm_GetFieldBgm(void);
void *Bgm_GetTracks(void);
void *Bgm_GetClock(void);
void BgmSceneFade_Update(void *p);
void BgmSceneFade_Reset(BgmSceneFade *p);
s32 Bgm_IsSameSceneBgm(void);
s32 Bgm_GetSceneBgmId(s32 a);
void BgmClock_Reset(BgmClock *p);
void BgmClock_Update(BgmClock *p);
void BgmClock_Exit(void);
void BgmClock_Init(BgmClock *p);
void func_02036b9c(void);
void func_02036ba0(void);
}

namespace Ns_02034ae8 {
extern "C" {
extern BgmManagerView *data_021c1b3c;
s32 Scene_GetCurrent(void);
s32 Scene_InTown(void);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
Unk_020353b0_Rec *Bgm_GetPlayingRequest(void);
}
}

namespace Ns_020354d8 {
extern "C" {
extern u8 *data_021c1b3c;
s32 Bgm_ReleasePriority(s32 a);
s32 Bgm_Release(s32 a);
s32 Bgm_RequestSilence(s32 a, s32 b, s32 c);
s32 Bgm_Request(s32 a, s32 b, s32 c, s32 d);
s32 BgmTracks_FadeInForScene(void *p);
s32 BgmTracks_FadeOutForScene(void *p);
s32 BgmTracks_OnBgmStart(void *p, u32 a);
s32 Scene_GetCurrent(void);
void *PlayerData_GetCurrent(void);
}
}

namespace Ns_02035e2c {
extern "C" {
void Bgm_Request(u32 a, u32 b, u32 c, u32 d);
void Bgm_ReleasePriority(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Bgm_Release(u32 a);
void Bgm_ReleaseTransient(u32 a);
void Bgm_RequestTransient(u32 a);
s32 Scene_GetCurrent(void);
s32 Bgm_GetSceneFade(void);
s32 Scene_InTown(void);
s32 Bgm_GetClock(void);
s32 _ZN8BgmClock13isTimeInRangeEjjjjjj(s32 o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern u32 gCommManager;
s32 _ZN11CommManager8isOnlineEv(u32 a);
s32 PlayerData_GetCurrent(void);
s32 Taxi_IsArriving(void);
s32 _ZN12Unk_02097ff48testFlagEj(s32 a, s32 b);
}
}

namespace Ns_020367e8 {
extern "C" {
void Bgm_ReleasePriority(u32);
void Bgm_RequestSilence(u32, u32, u32);
void Bgm_Request(u32, u32, u32, u32);
void Bgm_Release(u32 a);
BgmClock *Bgm_GetClock(void);
}
}

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

static inline BOOL Unk_02034938_IsA() { return gFieldSceneKind == 0; }

static inline BOOL Unk_02034938_IsB() { return gFieldSceneKind == 1; }

static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

BgmRequest *BgmRequest::initEmpty()
{
    clear();
    return this;
}

BgmRequest *BgmRequest::init(s32 a, u32 b, s32 c, s32 d, u8 e)
{
    clear();
    unk_00 = a;
    unk_04 = b;
    unk_0c = c;
    unk_08 = d;
    unk_10 = e;
    return this;
}

void BgmRequest::func_02036c18()
{
}

void BgmRequest::clear()
{
    unk_00 = 0x25;
    unk_04 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void BgmRequest::copyFrom(BgmRequest *src)
{
    clear();
    unk_00 = src->unk_00;
    unk_04 = src->unk_04;
    unk_08 = src->unk_08;
    unk_0c = src->unk_0c;
    unk_10 = src->unk_10;
    unk_11 = src->unk_11;
    unk_12 = src->unk_12;
    unk_13 = src->unk_13;
    unk_14 = src->unk_14;
    unk_18 = src->unk_18;
}

BOOL BgmRequest::tickLifetime()
{
    BOOL r = FALSE;
    if (unk_18 > 0) {
        unk_18 = unk_18 - 1;
        if (unk_18 <= 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_02036ba0(void)
{
}

extern "C" void func_02036b9c(void)
{
}

extern "C" void BgmClock_Init(BgmClock *p)
{
    p->update();
    p->update();
}

extern "C" void BgmClock_Exit(void)
{
}

extern "C" void BgmClock_Update(BgmClock *p)
{
    p->update();
}

extern "C" void BgmClock_Reset(BgmClock *p)
{
    p->update();
    p->update();
}

BOOL BgmClock::isAt(u16 *a, u16 *b)
{
    if (unk_04 == *a && *(u16 *)&unk_06 == *b) {
        return TRUE;
    }
    return FALSE;
}

BOOL BgmClock::isMinuteInRange(u32 a, u32 b, u32 c, u32 d)
{
    u32 t = unk_08 + unk_06 * 0x3c;
    u32 lo = b + a * 0x3c;
    u32 hi = d + c * 0x3c;
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL BgmClock::isTimeInRange(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f)
{
    u32 t = unk_08 + (unk_07 * 0xe10 + unk_06 * 0x3c);
    u32 lo = c + (a * 0xe10 + b * 0x3c);
    u32 hi = f + (d * 0xe10 + e * 0x3c);
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL BgmClock::hasHourChanged()
{
    if (*((u8 *)this + 0x13) != unk_07) {
        return TRUE;
    }
    return FALSE;
}

BOOL BgmClock::hasYearChanged()
{
    if (unk_0c != unk_00) {
        return TRUE;
    }
    return FALSE;
}

// ---- BgmClock methods ----
void BgmClock::update()
{
    unk_0c = unk_00;
    unk_10 = unk_04;
    unk_12 = *(u16 *)&unk_06;
    unk_14 = unk_08;
    unk_00 = Clock_GetYear();
    Clock_GetDayMonth(&unk_04);
    Clock_GetMinuteHour((u16 *)&unk_06);
    unk_08 = Clock_GetSecond();
}

HourlyBgm::HourlyBgm(u32 v) : unk_04(v), unk_08(0x18), unk_0c(0xffff), unk_0e(0), unk_0f(0), unk_10(0)
{
}

HourlyBgm::~HourlyBgm()
{
}

void HourlyBgm::init()
{
    unk_0c = 0xffff;
    unk_08 = 0x18;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

void HourlyBgm::exit()
{
    stop();
}

void HourlyBgm::update()
{
    if (unk_10 != 0) {
        updateHour();
        updateHourFade();
    }
}

void HourlyBgm::stop()
{
    stopHourBgm();
    unk_08 = 0x18;
    stopHourFade();
    unk_0f = 0;
    unk_10 = 0;
}

void HourlyBgm::start()
{
    unk_10 = 1;
    updateHour();
    updateHourFade();
}

void HourlyBgm::end()
{
    if (unk_0f == 0) {
        stopHourBgm();
        unk_08 = 0x18;
        stopHourFade();
    }
    unk_10 = 0;
}

void HourlyBgm::setKeep(u32 v)
{
    unk_0f = v;
}

void HourlyBgm::playHourBgm()
{
    u16 t = sHourlyBgmIds[unk_08];
    Ns_020367e8::Bgm_Request(0x24, t, 0x7f, 0);
    unk_0c = t;
}

void HourlyBgm::stopHourBgm()
{
    u16 t = unk_0c;
    if (t != 0xffff) {
        Ns_020367e8::Bgm_Release(t);
        unk_0c = 0xffff;
    }
}

void HourlyBgm::updateHour()
{
    u32 v = Ns_020367e8::Bgm_GetClock()->unk_07;
    if (v != unk_08) {
        stopHourBgm();
        unk_08 = v;
        playHourBgm();
    }
}

void HourlyBgm::startHourFade(u32 x)
{
    if (unk_0e == 0) {
        Ns_020367e8::Bgm_RequestSilence(0x1b, x, 0);
        unk_0e = 1;
    }
}

void HourlyBgm::stopHourFade()
{
    if (unk_0e != 0) {
        Ns_020367e8::Bgm_ReleasePriority(0x1b);
        unk_0e = 0;
    }
}

void HourlyBgm::updateHourFade()
{
    BgmClock *p = Ns_020367e8::Bgm_GetClock();
    BOOL r = p->isMinuteInRange(0x3b, 0x32, 0, 0x10);
    u16 a[4];
    a[0] = sNewYearEveDate[0];
    a[1] = sNewYearDayDate[0];
    a[2] = sNewYearEveTime[0];
    func_02133ef8(&a[3], 2);
    if (p->isAt(&a[0], &a[2]) || p->isAt(&a[1], &a[3])) {
        r = FALSE;
    }
    if (r) {
        startHourFade(200);
    } else {
        stopHourFade();
    }
}

FieldSpecialBgm::FieldSpecialBgm(u32 v) : unk_04(v), unk_08(0xffff), unk_0a(0), unk_0b(0)
{
}

FieldSpecialBgm::~FieldSpecialBgm()
{
}

void FieldSpecialBgm::init()
{
    unk_08 = 0xffff;
    unk_0a = 0;
    unk_0b = 0;
}

void FieldSpecialBgm::exit()
{
    stop();
}

void FieldSpecialBgm::update()
{
}

void FieldSpecialBgm::stop()
{
    stopBgm();
    unk_0a = 0;
    unk_0b = 0;
}

void FieldSpecialBgm::start() {
    unk_0b = 1;
    if (unk_08 == 0xffff) {
        s32 r5 = Ns_02035e2c::PlayerData_GetCurrent();
        if (Ns_02035e2c::Taxi_IsArriving() != 0) {
            Ns_02035e2c::Bgm_RequestSilence(3, 0, 5);
            play(4, 0x45, 1);
        } else if (Taxi_IsLeaving() != 0) {
            play(0xd, 0x4a, 0);
        } else if (r5 != 0 && (Ns_02035e2c::_ZN12Unk_02097ff48testFlagEj(r5, 0x23) != 0 || (Ns_02035e2c::_ZN12Unk_02097ff48testFlagEj(r5, 1) != 0 && PlayerErrands_IsJobActive(_ZN10PlayerData10getErrandsEv(r5)) == 0))) {
            play(0x1c, 0x46, 0);
        } else if (r5 != 0 && Ns_02035e2c::_ZN12Unk_02097ff48testFlagEj(r5, 1) != 0) {
            play(0x1d, 0x48, 0);
        }
    }
}

void FieldSpecialBgm::end() {
    if (unk_0a == 0) stopBgm();
    unk_0b = 0;
}

void FieldSpecialBgm::setKeep(u32 a) { unk_0a = a; }

void FieldSpecialBgm::play(s32 a, u32 b, u32 c) {
    Ns_02035e2c::Bgm_Request(a, b, 0x7f, c);
    unk_08 = b;
}

void FieldSpecialBgm::stopBgm() {
    if (unk_08 != 0xffff) { Ns_02035e2c::Bgm_Release(unk_08); unk_08 = 0xffff; }
}

EventBgm::EventBgm(u32 a) {
    unk_04 = a;
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

EventBgm::~EventBgm() {}

void EventBgm::init() {
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void EventBgm::exit() { stop(); }

void EventBgm::update() {
    if (unk_15 != 0) {
        updateYearChanged();
        updateEvents();
    }
}

void EventBgm::stop() {
    stopNewYearFanfare();
    stopNewYearNight();
    stopNewYearDay();
    stopCountdown();
    stopFireworks();
    stopCountdownFade();
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void EventBgm::start() {
    unk_15 = 1;
    updateEvents();
}

void EventBgm::end() {
    if (unk_14 == 0) {
        stopNewYearFanfare();
        stopNewYearNight();
        stopNewYearDay();
        stopCountdown();
        stopFireworks();
        stopCountdownFade();
    }
    unk_15 = 0;
}

void EventBgm::setKeep(u32 a) { unk_14 = a; }

void EventBgm::updateEvents() {
    s32 r5 = EventAnnounce_GetActiveEvent();
    u32 t[2];
    u32 b0[2], b1[2], b2[2];
    BOOL r6, r7;
    t[0] = 0;
    t[1] = 0;
    Clock_GetDateTime(t);
    MI_CpuCopy8(t, b0, 8);
    if (Event_GetState(0x13, b0, 0) != 0) r6 = TRUE; else r6 = FALSE;
    r7 = TRUE;
    if (r5 != 0x12) {
        MI_CpuCopy8(t, b1, 8);
        if (Event_GetState(0x12, b1, 0) != 3) r7 = FALSE;
    }
    if (Ns_02035e2c::_ZN11CommManager8isOnlineEv(Ns_02035e2c::gCommManager) != 0) {
        MI_CpuCopy8(t, b2, 8);
        r5 = Event_GetState(0xf, b2, 0);
    } else if (r5 == 0xf) {
        r5 = 1;
    } else {
        r5 = 0;
    }
    updateNewYearDay(r6);
    updateCountdown(r7);
    BOOL v;
    if (r5 != 0) v = TRUE; else v = FALSE;
    updateFireworks(v);
}

void EventBgm::updateNewYearDay(BOOL a) {
    if (a != 0) {
        s32 o = Ns_02035e2c::Bgm_GetClock();
        s32 r0 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0, 0, 0, 2, 0, 0);
        s32 r1 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 2, 0, 0, 0, 0, 0);
        if (r0 != 0) {
            if (unk_13 != 0) {
                if (unk_08 != 0x35) {
                    stopNewYearFanfare();
                    playNewYearFanfare(0x35);
                }
                unk_13 = 0;
            }
            if (unk_0a != 0x36) {
                stopNewYearNight();
                playNewYearNight(0x36);
            }
        } else {
            stopNewYearFanfare();
            stopNewYearNight();
        }
        if (r1 != 0) {
            if (unk_0c != 0x37) {
                stopNewYearDay();
                playNewYearDay(0x37);
            }
        } else {
            stopNewYearDay();
        }
    } else {
        stopNewYearFanfare();
        stopNewYearNight();
        stopNewYearDayAlias();
    }
}

void EventBgm::updateCountdown(BOOL a) {
    if (a != 0) {
        s32 o = Ns_02035e2c::Bgm_GetClock();
        u32 c = 0xffff;
        s32 r0 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0, 0, 0x17, 0x1e, 0);
        s32 r1 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x1e, 0, 0x17, 0x32, 0);
        s32 r2 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x32, 0, 0x17, 0x37, 0);
        s32 r3 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x37, 0, 0, 0, 0);
        if (r0 != 0) c = 0x31;
        else if (r1 != 0) c = 0x32;
        else if (r2 != 0) c = 0x33;
        else if (r3 != 0) c = 0x34;
        if (c != 0xffff) {
            if (unk_0e != c) {
                stopCountdown();
                playCountdown(c);
            }
        } else {
            stopCountdown();
        }
        s32 q0 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x1d, 0x32, 0x17, 0x1e, 0);
        s32 q1 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x31, 0x32, 0x17, 0x32, 0);
        s32 q2 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x36, 0x32, 0x17, 0x37, 0);
        s32 q3 = Ns_02035e2c::_ZN8BgmClock13isTimeInRangeEjjjjjj(o, 0x17, 0x3a, 0x32, 0, 0, 0);
        if (q0 != 0 || q1 != 0 || q2 != 0 || q3 != 0) {
            startCountdownFade(200);
        } else {
            stopCountdownFade();
        }
    } else {
        stopCountdown();
        stopCountdownFade();
    }
}

s32 EventBgm::updateFireworks(BOOL a) {
    if (a != 0) {
        if (unk_10 != 0x30) {
            stopFireworks();
            playFireworks(0x30);
        }
    } else {
        stopFireworks();
    }
}

void EventBgm::playNewYearFanfare(u32 a) { Ns_02035e2c::Bgm_RequestTransient(0x1f); unk_08 = a; }

void EventBgm::playNewYearNight(u32 a) { Ns_02035e2c::Bgm_Request(0x20, a, 0x7f, 0); unk_0a = a; }

void EventBgm::playNewYearDay(u32 a) { Ns_02035e2c::Bgm_Request(0x21, a, 0x7f, 0); unk_0c = a; }

void EventBgm::playCountdown(u32 a) { Ns_02035e2c::Bgm_Request(0x22, a, 0x7f, 0); unk_0e = a; }

void EventBgm::playFireworks(u32 a) { Ns_02035e2c::Bgm_Request(0x23, a, 0x7f, 0); unk_10 = a; }

void EventBgm::stopNewYearFanfare() {
    if (unk_08 != 0xffff) { Ns_02035e2c::Bgm_ReleaseTransient(unk_08); unk_08 = 0xffff; }
}

void EventBgm::stopNewYearNight() {
    if (unk_0a != 0xffff) { Ns_02035e2c::Bgm_Release(unk_0a); unk_0a = 0xffff; }
}

void EventBgm::stopNewYearDay() {
    if (unk_0c != 0xffff) { Ns_02035e2c::Bgm_Release(unk_0c); unk_0c = 0xffff; }
}

void EventBgm::stopCountdown() {
    if (unk_0e != 0xffff) { Ns_02035e2c::Bgm_Release(unk_0e); unk_0e = 0xffff; }
}

void EventBgm::stopFireworks() {
    if (unk_10 != 0xffff) { Ns_02035e2c::Bgm_Release(unk_10); unk_10 = 0xffff; }
}

void EventBgm::startCountdownFade(u32 a) {
    if (unk_12 == 0) {
        Ns_02035e2c::Bgm_RequestSilence(0x1e, a, 0);
        unk_12 = 1;
    }
}

void EventBgm::stopCountdownFade() {
    if (unk_12 != 0) {
        Ns_02035e2c::Bgm_ReleasePriority(0x1e);
        unk_12 = 0;
    }
}

void EventBgm::updateYearChanged() {
    u8 *p = &unk_13;
    s32 r = _ZN8BgmClock14hasYearChangedEv(Ns_02035e2c::Bgm_GetClock());
    if ((unk_13 | r) != 0) r = 1; else r = 0;
    *p = r;
}

FieldBgm::FieldBgm(u32 a) : unk_04(a), unk_18(a), unk_24(a) {}

FieldBgm::~FieldBgm() {}

void FieldBgm::init() {
    unk_04.init();
    unk_18.init();
    unk_24.init();
}

void FieldBgm::exit() {
    unk_24.exit();
    unk_18.exit();
    unk_04.exit();
}

void FieldBgm::update() {
    unk_04.update();
    unk_18.update();
    unk_24.update();
}

void FieldBgm::stop() {
    unk_04.stop();
    unk_18.stop();
    unk_24.stop();
}

void FieldBgm::start() {
    if (Ns_02035e2c::Scene_InTown() != 0 || Scene_InTownUnk31() != 0) {
        unk_04.start();
        unk_18.start();
        unk_24.start();
    }
}

void FieldBgm::end() {
    if (Ns_02035e2c::Scene_InTown() != 0 || Scene_InTownUnk31() != 0) {
        unk_24.end();
        unk_18.end();
        unk_04.end();
    }
}

void FieldBgm::setKeep(u32 a) {
    unk_04.setKeep(a);
    unk_18.setKeep(a);
    unk_24.setKeep(a);
}

RoomBgm::RoomBgm(u32 a) {
    unk_04 = a;
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

RoomBgm::~RoomBgm() {}

void RoomBgm::init() {
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

void RoomBgm::exit() { stop(); }

void RoomBgm::update() {
    if (unk_0f != 0) {
        updateSceneBgm();
        updateClosingMusic();
    }
}

void RoomBgm::stop() {
    stopSceneBgm();
    unk_08 = 0x3f;
    stopClosingMusic();
    unk_10 = 0;
    unk_0f = 0;
}

void RoomBgm::forceClosingMusic() { unk_0e = 1; }

void RoomBgm::start() {
    unk_0f = 1;
    updateSceneBgm();
    updateClosingMusic();
}

void RoomBgm::end() {
    if (unk_10 == 0) {
        BOOL r;
        if (unk_0d != 0 && _ZN12BgmSceneFade14hasExitSilenceEv(Ns_02035e2c::Bgm_GetSceneFade()) != 0) r = TRUE; else r = FALSE;
        stopSceneBgm();
        unk_08 = 0x3f;
        stopClosingMusic();
        unk_0e = r;
    }
    unk_0f = 0;
}

void RoomBgm::setKeep(u32 a) { unk_10 = a; }

extern "C" s32 Bgm_GetSceneBgmId(s32 a) {
    u16 *e = data_020c8b9c;
    u32 r = 0xffff;
    const u16 *p;
    for (p = sSceneBgmTable; p < e; p += 2) {
        if (((u8 *)p)[0] == a) { r = p[1]; break; }
    }
    return r;
}

extern "C" s32 Bgm_IsSameSceneBgm(void) {
    s32 a = Ns_02035e2c::Scene_GetCurrent();
    Scene_GetWarpRequest();
    s32 b = SceneWarp_GetScene();
    s32 x = Bgm_GetSceneBgmId(a);
    s32 y = Bgm_GetSceneBgmId(b);
    if (x == y && x != 0xffff) return TRUE;
    return FALSE;
}

void RoomBgm::playSceneBgm(s32 a) {
    s32 r = Bgm_GetSceneBgmId(a);
    u32 c = 0x7f, d = 0;
    if (r == 1) c = 0x38;
    if (r == 0x14 || r == 0x5c) d = 1;
    Ns_02035e2c::Bgm_Request(0x11, r, c, d);
    unk_0a = r;
}

void RoomBgmSceneView::stopSceneBgm() {
    if (unk_0a != 0xffff) {
        Ns_020354d8::Bgm_Release(unk_0a);
        unk_0a = 0xffff;
    }
}

void RoomBgmSceneView::updateSceneBgm() {
    s32 t = Ns_020354d8::Scene_GetCurrent();
    if (unk_08 != t) {
        if (unk_0a != Bgm_GetSceneBgmId(t)) {
            stopSceneBgm();
            playSceneBgm(t);
        }
        unk_08 = t;
    }
}

void RoomBgmClosingView::stopClosingMusic() {
    if (unk_0c != 0) {
        Ns_020354d8::Bgm_ReleasePriority(0x10);
        unk_0c = 0;
    }
    if (unk_0d != 0) {
        Ns_020354d8::Bgm_Release(0x51);
        unk_0d = 0;
    }
    unk_0e = 0;
}

extern "C" void *Bgm_GetClock(void) { return Ns_020354d8::data_021c1b3c + 0x24c; }

void RoomBgmClosingView::updateClosingMusic() {
    BOOL a;
    void *p = Ns_020354d8::PlayerData_GetCurrent();
    if (p) {
        if (_ZN12Unk_02097ff48testFlagEj(p, 0x23) != 0 || _ZN12Unk_02097ff48testFlagEj(p, 1) != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
    } else {
        a = FALSE;
    }
    s32 t = Ns_020354d8::Scene_GetCurrent();
    BOOL b = t == 0x1f ? TRUE : FALSE;
    BOOL c = TRUE;
    if ((u8)(t + 0xe6) > 4 && b == 0) {
        c = FALSE;
    }
    if (a == 0 && c != 0) {
        void *pl = Bgm_GetClock();
        if (unk_0c == 0) {
            if (_ZN8BgmClock13isTimeInRangeEjjjjjj(pl, 0x16, 0x31, 0x32, 0x16, 0x32, 0) != 0) {
                Ns_020354d8::Bgm_RequestSilence(0x10, 0xc8, 0);
                unk_0c = 1;
            }
        }
        if (unk_0d == 0) {
            if (_ZN8BgmClock13isTimeInRangeEjjjjjj(pl, 0x16, 0x32, 0, 0, 0, 0) != 0 || unk_0e != 0) {
                Ns_020354d8::Bgm_Request(0xf, 0x51, 0x7f, 0);
                unk_0d = 1;
            }
        }
    }
}

BgmVolumeChannel::BgmVolumeChannel() {
    clear();
}

BgmVolumeChannel::~BgmVolumeChannel() {}

void BgmVolumeChannel::clear() {
    unk_00 = 0;
    unk_01 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}

void BgmVolumeChannel::set(s32 a, s32 b, u8 c) {
    unk_04 = a;
    unk_08 = b;
    unk_00 = c;
}

BgmVolumeMixer::BgmVolumeMixer(BgmManagerOwnerView *owner) : unk_00(owner) {}

BgmVolumeMixer::~BgmVolumeMixer() {}

void BgmVolumeMixer::init() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].clear();
    }
    unk_84 = 0;
}

void BgmVolumeMixer::exit() {}

void BgmVolumeMixer::update() {
    updateChannels();
    maskForTopRequest();
    applyVolume();
    clearChanged();
    clearMasks();
}

void BgmVolumeMixer::reset() {
    if ((u32)(unk_04[2].unk_0c - 8) <= 1) {
        Snd_RestoreSubPlayers();
    }
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].clear();
    }
    unk_84 = 0;
}

void BgmVolumeMixer::startTalkDuck() { unk_04[2].unk_0c = 7; }

void BgmVolumeMixer::endTalkDuck() { unk_04[2].unk_0c = 9; }

void BgmVolumeMixer::setMenuDuck(s32 i) { unk_04[1].unk_0c = sBgmMenuDuckStates[i]; }

void BgmVolumeMixer::endMenuDuck() { unk_04[1].unk_0c = 6; }

void BgmVolumeMixer::startFishDuck() { unk_04[3].unk_0c = 0xa; }

void BgmVolumeMixer::endFishDuck() { unk_04[3].unk_0c = 0xc; }

void BgmVolumeMixer::startFireworkDuck() { unk_04[4].unk_0c = 0xd; }

void BgmVolumeMixer::endFireworkDuck() { unk_04[4].unk_0c = 0xf; }//DEF sSceneBgmTable
const u16 sSceneBgmTable[0x3a] = {
    0x1a, 0x4d, 0x1b, 0x4e, 0x1c, 0x4f, 0x1d, 0x50,
    0x1e, 0x50, 0xa, 0x58, 0xb, 0x53, 0xc, 0x53,
    0xd, 0x53, 0xe, 0x53, 0x2f, 0x53, 0x2d, 0x1,
    0x20, 0x62, 0x21, 0x60, 0x22, 0x62, 0x23, 0x62,
    0x24, 0x62, 0x25, 0x62, 0x26, 0x62, 0x27, 0x62,
    0x28, 0x62, 0x29, 0x62, 0xf, 0x5a, 0x10, 0x5c,
    0x1f, 0x5e, 0x6, 0x4b, 0x7, 0x4b, 0x8, 0x4b,
    0x30, 0x14,
};

//DEF sNewYearEveDate
u16 sNewYearEveDate[2] = {0xc1f, 0};

//DEF sNewYearEveTime
u16 sNewYearEveTime[2] = {0x173b, 0};

//DEF sNewYearDayDate
u16 sNewYearDayDate[2] = {0x101, 0};

//DEF sBgmProcProfile
Unk_020d8dbc_Rec sBgmProcProfile = {&BgmProc::create, 0xcf, 0xcb};

void BgmVolumeMixer::updateChannels() {
    static Unk_02035758_Fn tbl[8] = {
        &BgmVolumeMixer::updateChannel0, &BgmVolumeMixer::updateMenuDuck, &BgmVolumeMixer::updateTalkDuck,
        &BgmVolumeMixer::updateFishDuck, &BgmVolumeMixer::updateFireworkDuck, &BgmVolumeMixer::updatePositionDuck,
        &BgmVolumeMixer::updateSceneDuck, &BgmVolumeMixer::updateRequestVolume,
    };
    for (s32 i = 0; i < 8; i++) {
        (this->*tbl[i])(&unk_04[i]);
    }
}

void BgmVolumeMixer::updateChannel0(BgmVolumeChannel *e) {}

void BgmVolumeMixer::updateMenuDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    if (st == 2) {
        e->set(0x28, 5, 1);
        e->unk_0c = 5;
    } else if (st == 3) {
        e->set(0x7f, 5, 1);
        e->unk_0c = 5;
    } else if (st == 4) {
        e->set(0, 5, 1);
        e->unk_0c = 5;
    } else if (st != 5) {
        if (st == 6) {
            e->set(0x7f, 5, 1);
            e->unk_0c = 0;
        }
    }
}

void BgmVolumeMixer::updateTalkDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    if (st == 7) {
        e->set(0x28, 5, 1);
        e->unk_0c = 8;
        unk_84 = 0;
        Snd_DuckSubPlayers(0);
    } else if (st != 8) {
        if (st == 9) {
            if (unk_84 > 0) {
                unk_84 = unk_84 - 1;
            }
            if (unk_84 <= 0) {
                e->set(0x7f, 5, 1);
                e->unk_0c = 0;
                Snd_RestoreSubPlayers();
            }
        }
    }
}

void BgmVolumeMixer::updateFishDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    if (st == 0xa) {
        e->set(0x28, 0xf, 1);
        e->unk_0c = 0xb;
    } else if (st != 0xb) {
        if (st == 0xc) {
            e->set(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void BgmVolumeMixer::updateFireworkDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    if (st == 0xd) {
        e->set(0x28, 0xf, 1);
        e->unk_0c = 0xe;
    } else if (st != 0xe) {
        if (st == 0xf) {
            e->set(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void BgmVolumeMixer::updatePositionDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    s32 flag = 0;
    Unk_020358d4_Src *p = PlayerActor_GetBodyPos(4);
    if (p) {
        Unk_020358d4_Buf b1;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&b1, p, 0, 0);
        s32 k = b1.unk_34;
        Unk_020358d4_Src v(p->x, p->y, p->z + 0x2000);
        Unk_020358d4_Buf b2;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&b2, &v, 0, 0);
        s32 m = b2.unk_30;
        if (k == 0x13 || k == 0x16 || m == 1) {
            flag = 1;
        }
        GroundInfo_Destruct(&b2);
        GroundInfo_Destruct(&b1);
    }
    if (st == 0) {
        if (flag != 0) {
            e->set(0x28, 0x3c, 1);
            e->unk_0c = 0x10;
        }
    } else if (st == 0x10) {
        if (flag == 0) {
            e->set(0x7f, 0x3c, 1);
            e->unk_0c = 0;
        }
    }
}

void BgmVolumeMixer::updateSceneDuck(BgmVolumeChannel *e) {
    s32 st = e->unk_0c;
    s32 t = Ns_020354d8::Scene_GetCurrent();
    BOOL a = t == 0x27 ? TRUE : FALSE;
    BOOL b = t == 0x28 ? TRUE : FALSE;
    if (st == 0) {
        if (a || b) {
            e->set(0x40, 0x28, 1);
            e->unk_0c = 0x11;
        }
    } else if (st == 0x11) {
        if (!a && !b) {
            e->set(0x7f, 0x28, 1);
            e->unk_0c = 0;
        }
    }
}

void BgmManagerOwnerView::clearVolumePending() {
    unk_14 = 0;
}
//DEF sBgmSceneFadeDelays
const u8 sBgmSceneFadeDelays[8] = {0x01, 0x2f, 0x1b, 0x34, 0x2f, 0x00, 0x00, 0x00};

void BgmVolumeMixer::updateRequestVolume(BgmVolumeChannel *e) {
    BgmManagerOwnerView *o = unk_00;
    if (o->unk_1c0 > 0) {
        if (o->unk_14 != 0 && o->unk_0c != 0) {
            e->set(o->unk_0c, 0, 1);
        }
        unk_00->forEachRequest(&BgmManagerOwnerView::clearVolumePending);
        e->unk_0c = 0x12;
    } else {
        e->unk_0c = 0;
    }
}

void BgmVolumeMixer::maskForTopRequest() {
    BgmManagerOwnerView *o = unk_00;
    if (o->unk_1c0 > 0 && o->unk_10 != 0) {
        BgmVolumeChannel *p = &unk_04[2];
        BgmVolumeChannel *end = &unk_04[7];
        for (; p < end; p++) {
            p->unk_01 = 1;
        }
    }
}

void BgmVolumeMixer::applyVolume() {
    BgmVolumeChannel *end;
    s32 f;
    s32 a;
    BOOL ok = FALSE;
    s32 t;
    s32 b;
    BgmManagerOwnerView *o = unk_00;
    BgmVolumeChannel *p;
    if (o->unk_1c0 > 0 && o->unk_12 != 0 && o->unk_04 != 0xffff) {
        ok = TRUE;
    }
    if (ok) {
        p = &unk_04[7];
        end = &unk_04[0];
        f = 0;
        a = 0;
        b = 0;
        for (; p >= end; p--) {
            if (p->unk_01 == 0) {
                t = p->unk_0c;
                if (p->unk_00 != 0) {
                    f = 1;
                    b = p->unk_08;
                }
                if (t != 0) {
                    a = p->unk_04;
                }
            }
        }
        if (f != 0) {
            o->unk_2b4.requestVolume(a, b);
        }
    }
}

void BgmVolumeMixer::clearChanged() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_00 = 0;
    }
}

void BgmVolumeMixer::clearMasks() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_01 = 0;
    }
}

BgmCommandQueue *BgmCommandQueue::init(void *owner) {
    unk_00 = (u32)owner;
    clear();
    return this;
}

void BgmCommandQueue::func_02035740() {}

void BgmCommandQueue::requestPlay(u16 a) {
    unk_04 = 1;
    unk_06 = a;
}

void BgmCommandQueue::requestStop(s32 a) {
    unk_08 = 1;
    unk_0c = a;
}

void BgmCommandQueue::requestVolume(s32 a, s32 b) {
    unk_10 = 1;
    unk_14 = a;
    unk_18 = b;
}

void BgmCommandQueue::clear() {
    unk_04 = 0;
    unk_06 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void BgmCommandQueue::flush() {
    if (unk_08 != 0) {
        unk_08 = 0;
        Snd_StopBgm(unk_0c);
    }
    if (unk_04 != 0) {
        unk_04 = 0;
        Snd_PlayBgm(unk_06);
        Ns_020354d8::BgmTracks_OnBgmStart(Ns_020354d8::data_021c1b3c + 0x2f0, unk_06);
    }
    if (unk_10 != 0) {
        unk_10 = 0;
        Snd_MoveBgmVolume(unk_14, unk_18);
    }
}

BgmSceneFade::BgmSceneFade(u32 owner) {
    unk_04 = owner;
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    unk_0c = 0;
    unk_10 = 0;
}

BgmSceneFade::~BgmSceneFade() {}

void BgmSceneFade::onFadeOut() {
    if (gActorDefaultParent->unk_0c != 5) {
        if (unk_0b == 1) {
            Ns_020354d8::Bgm_RequestSilence(8, 0xf, 0);
            unk_0b = 2;
        } else if (unk_0b == 3) {
            Ns_020354d8::Bgm_ReleasePriority(8);
            unk_0b = 0;
        }
        unk_09 = Bgm_IsSameSceneBgm();
        _ZN7RoomBgm7setKeepEj(Bgm_GetRoomBgm(), unk_09);
        if (unk_08 == 0 && unk_09 == 0 && unk_0a == 0) {
            if (unk_0c != 0 || unk_10 != 0) {
                Ns_020354d8::Bgm_ReleasePriority(7);
            }
            unk_0c = -1;
            unk_10 = 0;
            Ns_020354d8::Bgm_RequestSilence(7, 0xf, 0);
        } else {
            _ZN8FieldBgm7setKeepEj(Bgm_GetFieldBgm(), 1);
            if (unk_09 != 0) {
                Ns_020354d8::BgmTracks_FadeOutForScene(Bgm_GetTracks());
            }
        }
    }
}

extern "C" void *Bgm_GetTracks(void) { return Ns_020354d8::data_021c1b3c + 0x2f0; }

extern "C" void *Bgm_GetFieldBgm(void) { return Ns_020354d8::data_021c1b3c + 0x264; }

extern "C" void *Bgm_GetRoomBgm(void) { return Ns_020354d8::data_021c1b3c + 0x2a0; }

void BgmSceneFade::onFadeIn() {
    if (gActorDefaultParent->unk_0c != 5) {
        if (unk_0c < 0) {
            s32 r = PlayerActor_GetActionOrSpawnAction();
            if (r != 0x3c) {
                if (r == 0x8b) {
                    unk_0c = 0x21;
                } else if (r == 0x8e) {
                    unk_0c = 0x21;
                } else if (r == 0x43) {
                    unk_0c = 0x21;
                } else if (r == 0x44) {
                    unk_0c = 0x21;
                } else if (r == 2) {
                    unk_0c = 0x19;
                } else {
                    unk_0c = 0x14;
                }
            }
        }
        if (unk_09 != 0) {
            Ns_020354d8::BgmTracks_FadeInForScene(Bgm_GetTracks());
        }
        unk_08 = 0;
        unk_09 = 0;
        unk_0a = 0;
        _ZN8FieldBgm7setKeepEj(Bgm_GetFieldBgm(), 0);
        _ZN7RoomBgm7setKeepEj(Bgm_GetRoomBgm(), 0);
    }
}

void BgmSceneFade::init() {}

extern "C" void BgmSceneFade_Reset(BgmSceneFade *p) { p->reset(); }

extern "C" void BgmSceneFade_Update(void *p) { _ZN12BgmSceneFade6updateEv(p); }

void BgmSceneFade::reset() {
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    if (unk_0c != 0 || unk_10 != 0) {
        Ns_020354d8::Bgm_ReleasePriority(7);
        unk_0c = 0;
        unk_10 = 0;
    }
}

void BgmSceneFade::func_020353b0(s32 a, s32 b) {
    s32 res = 0;
    s32 f = 0;
    if (Ns_02034ae8::Scene_InTown()) {
        s32 a0 = (a == 0) ? 1 : 0;
        s32 a1 = (a == 1) ? 1 : 0;
        s32 a2 = (a == 2) ? 1 : 0;
        s32 b9 = (b == 9) ? 1 : 0;
        s32 b6 = (b == 6) ? 1 : 0;
        Unk_020353b0_Rec *rec = Ns_02034ae8::Bgm_GetPlayingRequest();
        u32 x;
        s32 y;
        if (rec) x = rec->unk_04; else x = 0xffff;
        if (rec) y = rec->unk_00; else y = 0x25;
        s32 ff = (x == 0xffff) ? 1 : 0;
        s32 y24 = (y == 0x24) ? 1 : 0;
        s32 y1a = (y == 0x1a) ? 1 : 0;
        if (a1) {
            if (b6) res = 1;
            else if (b9) {
                if (y1a || ff) res = 1;
                else if (y24) {
                    if ((u16)(x + 0xffd4) <= 1) res = 1;
                }
            } else {
                if (y1a || ff) res = 1;
            }
        } else if (a2) {
            if (b6) {
                res = 1;
                f = 1;
            } else if (b9) {
            } else if (y1a || ff) res = 1;
        } else if (a0) {
            if (y1a || ff) res = 1;
        }
    } else {
        res = 1;
        f = 1;
    }
    if (!res) unk_08 = 1;
    if (f) unk_0b = 1;
}

void BgmSceneFade::func_02035368(s32 a, s32 b) {
    if (unk_0b == 2) {
        unk_0b = 3;
    } else {
        BOOL c = (a == 0) ? TRUE : FALSE;
        BOOL d = (a == 1) ? TRUE : FALSE;
        BOOL e = FALSE;
        if (a == 2 && b == 6) e = TRUE;
        if (c || d || !e) unk_08 = 1;
    }
}

void BgmSceneFade::setFadeDelay(s32 i) { unk_0c = sBgmSceneFadeDelays[i]; }

void BgmSceneFade::setKeepBgm() { unk_0a = 1; }

BOOL BgmSceneFade::isKeepingBgm() {
    if (unk_08 || unk_09 || unk_0a) return TRUE;
    return FALSE;
}

BOOL BgmSceneFade::hasExitSilence() {
    if (unk_0b) return TRUE;
    return FALSE;
}

void BgmSceneFade::update() {
    if (unk_0c > 0) {
        unk_0c--;
        if (unk_0c <= 0) {
            s32 v = 1;
            if (IsZero(gFieldSceneKind) && Ns_02034ae8::Scene_InTown()) {
                u16 buf[2];
                BOOL ok;
                PlayerActor_GetSlotHeldItem(buf, 4);
                if (Item_IsFurniture(buf)) {
                    buf[1] = 0xfff1;
                    if (Item_GetFurnitureIndex(buf) == Item_GetFurnitureIndex(&buf[1])) ok = TRUE;
                    else ok = FALSE;
                } else {
                    if (buf[0] == 0xfff1) ok = TRUE;
                    else ok = FALSE;
                }
                if (!ok) v = 20;
            }
            unk_10 = v;
        }
    }
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 <= 0) Bgm_ReleasePriority(7);
    }
}

FaintBgm::FaintBgm(BgmManagerView *o) {
    unk_04 = o;
    unk_08 = 0xffff;
    unk_0a = 0;
}

FaintBgm::~FaintBgm() {}

extern "C" BgmSceneFade *Bgm_GetSceneFade(void) { return &Ns_02034ae8::data_021c1b3c->unk_2d0; }

void FaintBgm::play() {
    unk_08 = 0x41;
    Ns_02034ae8::Bgm_Request(0xb, 0x41, 0x7f, 1);
    Bgm_GetSceneFade()->setKeepBgm();
}

void FaintBgm::startSilence() {
    unk_0a = 1;
    Bgm_RequestSilence(10, 15, 0);
}

void FaintBgm::fadeOut() {
    if (unk_08 != 0xffff) {
        Bgm_RequestSilence(10, 5, 5);
        Bgm_Release(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        Bgm_ReleasePriority(10);
        Bgm_RequestSilence(10, 5, 5);
        unk_0a = 0;
    }
}

void FaintBgm::init() {}

void FaintBgm::exit() { stop(); }

extern "C" void FaintBgm_Update(void) {}

void FaintBgm::stop() {
    if (unk_08 != 0xffff) {
        Bgm_Release(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        Bgm_ReleasePriority(10);
        unk_0a = 0;
    }
}

BgmTracks::BgmTracks() {}

BgmTracks::~BgmTracks() {}

extern "C" void BgmTracks_FadeOutForScene(void) {
    s32 r = Ns_02034ae8::Scene_GetCurrent();
    s32 s;
    Scene_GetWarpRequest();
    s = SceneWarp_GetScene();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 e20 = (s == 0x20) ? 1 : 0;
    s32 b22 = (s == 0x22) ? 1 : 0;
    s32 b23 = (s == 0x23) ? 1 : 0;
    s32 b25 = (s == 0x25) ? 1 : 0;
    s32 b27 = (s == 0x27) ? 1 : 0;
    s32 b29 = (s == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (b22 || b23 || b25 || b27 || b29)) v = 1;
    else if (a29 && e20) v = 2;
    else if (a25 && e20) v = 3;
    else if (a22 && e20) v = 4;
    if (v) Snd_FadeOutBgmTracks(v);
}

extern "C" void BgmTracks_FadeInForScene(void) {
    s32 t = Scene_GetPrevious();
    s32 r = Ns_02034ae8::Scene_GetCurrent();
    s32 e20 = (t == 0x20) ? 1 : 0;
    s32 a22 = (t == 0x22) ? 1 : 0;
    s32 a23 = (t == 0x23) ? 1 : 0;
    s32 a25 = (t == 0x25) ? 1 : 0;
    s32 a27 = (t == 0x27) ? 1 : 0;
    s32 a29 = (t == 0x29) ? 1 : 0;
    s32 b22 = (r == 0x22) ? 1 : 0;
    s32 b25 = (r == 0x25) ? 1 : 0;
    s32 b29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (a22 || a23 || a25 || a27 || a29)) v = 1;
    else if (b29 && e20) v = 2;
    else if (b25 && e20) v = 3;
    else if (b22 && e20) v = 4;
    if (v) Snd_FadeInBgmTracks(v);
}

extern "C" void BgmTracks_FadeOutScene22(void) {
    if (Ns_02034ae8::Scene_GetCurrent() == 0x22) Snd_FadeOutBgmTracks(5);
}

extern "C" void BgmTracks_FadeInScene22(void) {
    if (Ns_02034ae8::Scene_GetCurrent() == 0x22) Snd_FadeInBgmTracks(5);
}

extern "C" void BgmTracks_OnBgmStart(s32 a, s32 b) {
    if (b == 0x62) BgmTracks_ApplySceneMask();
}

extern "C" void BgmTracks_Update(s32 a) {
    if (Ns_02034ae8::Scene_InTown() || Scene_InTownUnk31()) BgmTracks_UpdateWeatherVariant(a);
}

extern "C" void BgmTracks_ApplySceneMask(void) {
    s32 r = Ns_02034ae8::Scene_GetCurrent();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a23 = (r == 0x23) ? 1 : 0;
    s32 a24 = (r == 0x24) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a26 = (r == 0x26) ? 1 : 0;
    s32 a27 = (r == 0x27) ? 1 : 0;
    s32 a28 = (r == 0x28) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20) v = 6;
    else if (a23 || a24 || a27 || a28) v = 0xb;
    else if (a29) v = 0xc;
    else if (a25 || a26) v = 0xd;
    else if (a22) v = 0xe;
    if (v) Snd_FadeOutBgmTracks(v);
}

extern "C" void BgmTracks_UpdateWeatherVariant(s32 x) {
    s32 r = Weather_GetPrecipKind();
    s32 a, b;
    BOOL c, d, e;
    Weather_GetLevels(&a, &b);
    if (b >= 3) c = TRUE; else c = FALSE;
    d = FALSE;
    if (c && r == 1) d = TRUE;
    e = FALSE;
    if (c && r == 2) e = TRUE;
    s32 v;
    if (d) v = 0xc;
    else if (e) v = 0xd;
    else v = 0xb;
    Snd_SetBgmTrackVariant(v);
}

extern "C" void Bgm_Request(s32 a, s32 b, s32 c, u8 d) {
    BgmRequest e(a, b, c, 0, d);
    _ZN10BgmManager4pushEP14BgmRequestView(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void Bgm_RequestSilence(s32 a, s32 b, s32 c) {
    BgmRequest e(a, 0xffff, 0, b, 0);
    if (c > 0) e.unk_18 = c;
    _ZN10BgmManager4pushEP14BgmRequestView(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void Bgm_RequestTransient(s32 a, s32 b) {
    BgmRequest e(a, b, 0x7f, 0, 0);
    e.unk_11 = 1;
    _ZN10BgmManager4pushEP14BgmRequestView(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void Bgm_Release(s32 a) { _ZN10BgmManager10releaseBgmEt(Ns_02034ae8::data_021c1b3c, a, 0); }

extern "C" void Bgm_ReleasePriority(s32 a) { _ZN10BgmManager15releasePriorityEi(Ns_02034ae8::data_021c1b3c, a); }

extern "C" void Bgm_ReleaseTransient(s32 a) { _ZN10BgmManager10releaseBgmEt(Ns_02034ae8::data_021c1b3c, a, 1); }

extern "C" u16 Bgm_GetCurrent(void) {
    s32 i = _ZN10BgmManager11findPlayingEv(Ns_02034ae8::data_021c1b3c);
    u16 r = 0xffff;
    if (i >= 0) r = Ns_02034ae8::data_021c1b3c->unk_000[i].unk_04;
    return r;
}

extern "C" void Bgm_EnableHourChime(void) { Ns_02034ae8::data_021c1b3c->unk_2f4 = 0; }

extern "C" void Bgm_DisableHourChime(void) { Ns_02034ae8::data_021c1b3c->unk_2f4 = 1; }

BgmManagerView::BgmManagerView() : unk_1c0(0), unk_1c4((BgmManagerOwnerView *)this), unk_264((u32)this), unk_2a0((u32)this), unk_2b4(this), unk_2d0((u32)this), unk_2e4(this) {
    unk_2f4 = 0;
}

BgmManagerView::~BgmManagerView() {}

void BgmManagerView::init() {
    BgmRequest *p, *end;
    Ns_02034ae8::data_021c1b3c = this;
    end = (BgmRequest *)&unk_1c0;
    for (p = unk_000; p < end; p++) {
        p->clear();
    }
    unk_1c0 = 0;
    unk_1c4.init();
    Ns_this::BgmClock_Init(&unk_24c);
    unk_264.init();
    unk_2a0.init();
    unk_2b4.clear();
    unk_2d0.init();
    unk_2e4.init();
    unk_2f4 = 0;
}

void BgmManagerView::exit() {
    unk_2e4.exit();
    Ns_this::BgmSceneFade_Reset(&unk_2d0);
    unk_2b4.clear();
    unk_2a0.exit();
    unk_264.exit();
    Ns_this::BgmClock_Exit(&unk_24c);
    unk_1c4.exit();
    Ns_02034ae8::data_021c1b3c = 0;
}

void BgmManager::update() {
    Ns_this::FaintBgm_Update(&unk_2e4);
    Ns_this::BgmSceneFade_Update(&unk_2d0);
    Ns_this::BgmClock_Update(&unk_24c);
    unk_264.update();
    unk_2a0.update();
    updateRequests();
    updateHourChime();
    func_02034514();
}

extern "C" void Bgm_ResetAll() {
    BgmManager *p;
    BgmRequest *e, *end;
    data_021c1b3c->unk_2e4.stop();
    data_021c1b3c->unk_2d0.reset();
    data_021c1b3c->unk_2b4.clear();
    data_021c1b3c->unk_2a0.stop();
    data_021c1b3c->unk_264.stop();
    Ns_this::BgmClock_Reset(&data_021c1b3c->unk_24c);
    data_021c1b3c->unk_1c4.reset();
    e = data_021c1b3c->unk_00;
    end = &data_021c1b3c->unk_00[16];
    for (; e < end; e++) {
        e->clear();
    }
    data_021c1b3c->unk_1c0 = 0;
    data_021c1b3c->unk_2f4 = 0;
}

extern "C" void Bgm_StartSceneBgm() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.start();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.start();
    }
}

extern "C" void Bgm_EndSceneBgm() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.end();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.end();
    }
}

extern "C" BgmRequest *Bgm_GetPlayingRequest() {
    s32 i = data_021c1b3c->findPlaying();
    BgmRequest *p = NULL;
    if (i >= 0) {
        p = &data_021c1b3c->unk_00[i];
    }
    return p;
}

void BgmManager::push(BgmRequestView *e) {
    s32 i = findInsertPos(e);
    if (i >= 0) {
        insertAt(i);
        unk_00[i].copyFrom(e);
    }
}

void BgmManager::releasePriority(s32 v) {
    s32 i = findByPriority(v);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void BgmManager::releaseBgm(u16 id) {
    s32 i = findByBgm(id);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void BgmManager::updateRequests() {
    updateStop();
    removeMarked();
    startTop();
    unk_1c4.update();
    unk_2b4.flush();
    Ns_this::BgmTracks_Update(&unk_2f0);
    tickRequests();
}

void BgmManager::updateStop() {
    s32 i = findPlaying();
    BgmRequest *p;
    if (i >= 0) {
        p = &unk_00[i];
        if (p->unk_04 != 0xffff) {
            BOOL done = FALSE;
            if (i > 0) {
                BgmRequest *q = findKeptBefore(i);
                if (q != NULL) {
                    unk_2b4.requestStop(q->unk_08);
                    done = TRUE;
                }
            }
            if (!done) {
                if (p->unk_13 != 0) {
                    unk_2b4.requestStop(p->unk_08);
                }
            }
        }
    }
}

void BgmManager::removeMarked() {
    s32 i, j, last;
    for (i = unk_1c0 - 1; i >= 0; i--) {
        if (unk_00[i].unk_13 != 0) {
            last = unk_1c0 - 1;
            for (j = i; j < last; j++) {
                unk_00[j].copyFrom(&unk_00[j + 1]);
            }
            unk_00[last].clear();
            unk_1c0 = last;
        }
    }
}

void BgmManager::clearPlaying() { unk_00[0].unk_12 = 0; }
//DEF sBgmMenuDuckStates
const s32 sBgmMenuDuckStates[3] = {2, 3, 4};

void BgmManager::startTop() {
    if (unk_1c0 > 0 && unk_00[0].unk_12 == 0) {
        if (unk_00[0].unk_04 != 0xffff) {
            unk_2b4.requestPlay(unk_00[0].unk_04);
            unk_00[0].unk_14 = 1;
        }
        forEachRequest(&BgmRequestView::clearPlaying);
        unk_00[0].unk_12 = 1;
    }
}

void BgmManager::tickRequests() {
    BgmRequest *end = &unk_00[unk_1c0];
    BgmRequest *p;
    for (p = unk_00; p < end; p++) {
        if (p->tickLifetime()) {
            p->unk_13 = 1;
        }
        if (p != unk_00 && p->unk_11 != 0) {
            p->unk_13 = 1;
        }
    }
}

s32 BgmManager::findInsertPos(BgmRequestView *key) {
    s32 r = -1;
    s32 n = unk_1c0;
    if (n < 16) {
        for (r = 0; r < n; r++) {
            if (unk_00[r].unk_00 > key->unk_00) {
                break;
            }
        }
    }
    return r;
}

s32 BgmManager::findPlaying() {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        if (unk_00[i].unk_12 != 0) {
            r = i;
            break;
        }
    }
    return r;
}

s32 BgmManager::findByPriority(s32 v) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        s32 c = unk_00[i].unk_00;
        if (c == v) {
            r = i;
            break;
        }
    }
    return r;
}

s32 BgmManager::findByBgm(u16 id) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        u16 c = unk_00[i].unk_04;
        if (c == id) {
            r = i;
            break;
        }
    }
    return r;
}

BgmRequest *BgmManager::findKeptBefore(s32 n) {
    BgmRequest *r = NULL;
    s32 i;
    for (i = 0; i < n; i++) {
        BgmRequest *p = &unk_00[i];
        if (p->unk_13 == 0) {
            r = p;
            break;
        }
    }
    return r;
}

void BgmManager::insertAt(s32 idx) {
    s32 i;
    if (unk_1c0 > 0) {
        for (i = unk_1c0 - 1; i >= idx; i--) {
            unk_00[i + 1].copyFrom(&unk_00[i]);
        }
    }
    unk_1c0++;
}

void BgmManager::forEachRequest(Unk_02034574_Fn fn) {
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        (((BgmRequestView *)&unk_00[i])->*fn)();
    }
}

void BgmManager::updateHourChime() {
    if (unk_24c.hasHourChanged()) {
        BOOL ok = TRUE;
        if (!Scene_GetSkyKind(1)) {
            ok = FALSE;
        }
        if (Scene_InTown()) {
            if (Taxi_IsArriving()) {
                ok = FALSE;
            }
        }
        if (unk_2f4) {
            ok = FALSE;
        }
        if (ok) {
            unk_24c.hasYearChanged();
            Melody_StartTrackA();
        }
    }
}

s32 BgmManager::func_02034514() {}

BgmProc *BgmProc::create() { return new BgmProc(); }

BgmProc::BgmProc() {}

BgmProc::~BgmProc() {}

BOOL BgmProc::vfunc_00() {
    unk_50.init();
    return TRUE;
}

BOOL BgmProc::onExecute() {
    unk_50.update();
    return TRUE;
}

BOOL BgmProc::vfunc_0c() {
    unk_50.exit();
    return TRUE;
}

//DEF sHourlyBgmIds
const u16 sHourlyBgmIds[0x18] = {
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,
};
