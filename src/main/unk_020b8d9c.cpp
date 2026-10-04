#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "gfx/Unk_020bfe30_Vec.h"
#include "game/EventDayEntry.h"
#include "game/Unk_021eff48.h"
#include "item/PickedItem.h"
#include "gfx/StarTwinkle.h"
#include "item/ItemPickSpec.h"
#include "snd/SndEnvChannel.h"
#include "gfx/SpriteAnim.h"
#include "game/WeatherRecord.h"
#include "item/Letter.h"
#include "gfx/Unk_020bfe30.h"
#include "game/FxVec3.h"
#include "snd/Unk_0213b938.h"
#include "snd/Unk_0213b970.h"
#include "game/SkyProc.h"
#include "actor/SpNpcActor.h"
#include "talk/SpNpcTalkRequest.h"
#include "talk/SpNpcKatieTalk.h"
#include "npc/SpNpcKatie.h"

// ======== class types (global scope) ========
struct Unk_021f4400;
struct Unk_021f4420;
struct Unk_021f44a0;
struct Unk_021f14c8;
struct Unk_020b8ec0_Time;
struct Unk_02095204;
struct Unk_021efc08;
struct Unk_021efa88;
class SkyProc;
struct Unk_020b96b8_Ent;
struct Unk_020b96b8_Cfg;
struct Unk_020b9964_Src;
struct Unk_020b9964_Obj;
struct Unk_020b9b94_Src;
struct Unk_020b9b94_Col;
struct Unk_020b9c90;
struct Unk_020ba1dc_Time;
struct Unk_020ba518_Time;
struct Unk_020ba6f4_Color;
struct Unk_020ba8cc_Obj;
struct Unk_020ba8cc_State;
struct WeatherManager;
struct Unk_020ba93c_Obj;
struct Unk_020baa10_Time;
struct Unk_020baa10_Buf;
struct Unk_020bacc0_Vec;
struct Unk_020bacc0_P;
struct Unk_020bacc0_Entry;
struct Unk_020bacc0_Obj;
struct Unk_020baa10_Ptr;
struct Unk_020bb25c_Ent14;
struct Unk_020bb25c_Ent74;
class Unk_020bb25c;
struct Unk_020d0f40;
struct Unk_020bbcc8_Xxx;
struct Unk_020bbc28;
struct Unk_020bc754_Slot;
struct Unk_020bccc8_Entry;
struct Unk_020bca5c_Elem;
struct Unk_020bc754_Vec;
struct Letter;
struct ItemPickSpec;
struct PickedItem;
struct Unk_020bc99c_Loc;
struct Unk_020bcb04_Ent;
class Unk_020bc58c;
struct SpriteAnim;
struct SkySprite;
struct SkyObjGfxSlot;
struct SkyObjGfxLoader;
struct Unk_020bd8f8;
struct SkyShotRequest;
struct SndEnvChannel;
struct Unk_0213b970;
struct Unk_0213b938;
struct FxVec3;
struct Unk_020bd0a4_Vec3;
struct SkySePlayer;
struct Unk_020bd774_Entry;
struct SkyShotSequence;
struct SkyObjPalette;
struct SkySprites;
struct Unk_020d16e8;
struct Unk_020bd868;
struct Unk_020bd9a0_Row;
struct Unk_020bdd94_Out;
struct Unk_020bdd94;
struct Unk_020bdd4c_Out;
struct Unk_021f23d4;
struct Unk_020bdef0_Vec;
struct Unk_020be0bc;
struct Unk_020be0f4;
struct Unk_020be204_Vec;
struct Unk_020bca5c_Rec;
class Unk_020be204;
struct Unk_020be018_Vec;
struct Unk_020bee28_Vec2;
struct Unk_020bf1d8_Vec;
struct Unk_020bec40_Col;
struct Unk_020bec40_Pair;
struct Unk_021f4398;
struct Unk_020be018;
struct Unk_020bee28_V;
struct Unk_020bf18c_Pad;
struct Unk_020bfc48_Pad;
struct Unk_020bfe30_Vec;
struct Unk_020bfe38_Ent;
struct Unk_020bfec0_Ent;
struct Mtx43;
class Unk_020bfe30;
struct WeatherRecord;
struct EventDayEntry;
struct TalkStartMsg;
class SpNpcTalkRequest;
class SpNpcKatieTalk;
class SpNpcActor;
class SpNpcKatie;
struct Unk_021f4400 { u8 pad[9]; u8 birdsRequested; };
struct Unk_021f4420 { u8 pad[0x10]; u8 shootingStarVisible; };
struct Unk_021f44a0 { u8 pad[6]; u8 balloonDropEnded; u8 landSePending; u8 splashSePending; };
struct Unk_021f14c8 { u8 pad[0xc]; s32 unk_0c; };
struct Unk_020b8ec0_Time { u8 second; u8 unk_01; u8 hour; u8 pad[5]; };
struct Unk_02095204 { u8 pad[0x5c]; struct { u32 unk_00; u32 unk_04; u32 unk_08; } unk_5c; };
struct Unk_021efc08 { u8 pad[4]; u16 unk_04; };
struct Unk_021efa88 { u8 pad[2]; u16 unk_02; };
struct Unk_020b96b8_Ent {
    s32 a;
    s32 b;
    s16 c;
    u8 pad[0x900 - 10];
};
struct Unk_020b96b8_Cfg {
    u8 pad0[0x1c];
    s32 idx;
    u8 pad1[0x1c];
    u16 h3c;
    u16 h3e;
};
struct Unk_020b9964_Src {
    u32 w0;
    u32 pad[1];
    s32 pos;
};
struct Unk_020b9964_Obj {
    u8 pad[0x5c];
    Unk_020b9964_Src src;
};
struct Unk_020b9b94_Src {
    u16 h0, h2, h4, h6;
    s32 s0, s1;
};
struct Unk_020b9b94_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 pad : 1;
};
struct Unk_020b9c90 {
    u16 unk_000[0x304 / 2];
    u16 unk_304[1];
    u8 pad0[0x1208 - 0x306];
    s32 cloudScroll;
    s32 transitionProgress;
    u8 pad1[0x1520 - 0x1210];
    s32 transitionBusy;
    s32 level;
    s32 targetLevel;
    s32 requestedLevel;
    s32 direction;
    u8 pad2[0x1578 - 0x1534];
    s32 streamBlock;
    u8 *curCloudScreen;
    s32 curCloudScreenSize;
    u8 pad3[0x158c - 0x1584];
    s32 transitionStep;
    s32 transitionTimer;

    void setGradientKey(s32 idx, u16 a, s32 b);
    void updateTransitionTimed();
    void transitionTimedWait();
    void transitionTimedFinish();
    void transitionTimedBlend();
    void transitionTimedBegin();
    void updateTransitionStreamed();
    void streamCurrentCloudScreen();
    void reloadCurrentCloudGraphics();
    void setLevels(s32 a, s32 b);
    void loadNextCloudGraphics();
    void streamCloudScreen();
    s32 loadCloudChars(s32 a, s32 b);
    s32 loadCloudScreen(s32 *a, s32 *b, s32 c, s32 d);
};
struct Unk_020ba1dc_Time {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_020ba518_Time {
    u8 minute;
    u8 hour;
    u8 unk_02;
    u8 unk_03;
};
struct Unk_020ba6f4_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};
struct Unk_020ba8cc_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 rainVolume;
};
struct Unk_020ba8cc_State {
    u8 pad_00[0x24];
    s32 level;
    s32 targetLevel;
    u8 pad_2c[8];
    s32 precipKind;
};
struct WeatherManager {
    s32 engine;
    u8 pad_0004[0x1204];
    s32 cloudScroll;
    s32 transitionProgress;
    u8 pad_1210[0x304];
    s32 unk_1514;
    s32 unk_1518;
    s32 unk_151c;
    s32 transitionBusy;
    s32 level;
    s32 targetLevel;
    s32 requestedLevel;
    s32 direction;
    s32 precipKind;
    s16 rainSlant;
    u8 pad_153a[2];
    u16 starScrollX;
    u16 starScrollY;
    u8 pad_1540[4];
    s32 unk_1544[2][2];
    s32 unk_1554[2][2];
    s32 unk_1564;
    s32 unk_1568;
    s32 unk_156c;
    s32 cloudVariant;
    s32 nextCloudVariant;
    s32 streamBlock;
    s32 curCloudScreen;
    u8 pad_1580[4];
    u8 *cloudScreen;
    u32 cloudScreenSize;
    s32 transitionStep;
    u8 pad_1590[8];

    WeatherManager();
    ~WeatherManager();
    void streamCloudScreen();
    void loadNextCloudGraphics();
    BOOL loadCloudScreen(u8 **p1, u32 *p2, s32 mode, s32 idx);
    BOOL loadCloudChars(s32 idx, s32 unused);
    s32 getPatternWeather(s32 a, s32 b);
    s32 getWeatherAtOffset(s32 v);
    void updateHourly();
    BOOL requestLevel(s32 v);
    void startTransition(s32 v);
    void setLevels(s32 a, s32 b);
    s32 getPrecipKind(s32 v);
    void init();
    void func_020ba49c();
    void getSkyBlend(s32 *a, s32 *b);
    void rollRainSlant();
};
enum Unk_020ba518_E { Unk_020ba518_E0 = 0 };
struct Unk_020ba93c_Obj { u32 pad[3]; s32 f0c; };
struct Unk_020baa10_Time { u8 lo; u8 hi; };
struct Unk_020baa10_Buf { u16 x; Unk_020baa10_Time t; u16 y; u16 z; };
struct Unk_020bacc0_Vec { s32 x; s32 y; };
struct Unk_020bacc0_P { s32 x; s32 y; };
struct Unk_020bacc0_Entry {
    s32 f00; s32 f04; s32 f08; s32 f0c;
    u8 f10[0x14];
    s32 f24;
    u8 pad28[9];
    u8 f31;
    u8 pad32[2];
    s32 f34; s32 f38;
    u8 pad3c[0x10];
    s32 f4c; s32 f50;
    u16 f54;
    s8 f56; s8 f57;
    s32 f58;
    u8 f5c; s8 f5d;
    u8 pad5e[2];
    s32 f60;
    u8 pad64[0x10];
};
struct Unk_020bacc0_Obj {
    Unk_020bacc0_Entry e[0x3c];
    u8 pad1b30[0x13d8];
    s32 f2f08; s32 f2f0c;
    u8 pad2f10[4];
    s32 f2f14;
    u8 pad2f18[0x18];
    s32 f2f30;
    u8 pad2f34[0x1d];
    u8 f2f51;
};
struct Unk_020baa10_Ptr { u16 pad[3]; u16 h6; };
struct Unk_020bb25c_Ent14 {
    s32 playerSlot;
    u8 unk_04[0xc];
    u8 golden;
    u8 pending;
    u8 unk_12[2];
};
struct Unk_020bb25c_Ent74 {
    s32 kind;
    u8 unk_04[0x5c];
    u32 work0;
    u8 unk_64[0x10];
};
class Unk_020bb25c {
public:
    u8 unk_0000[0xe80];
    s32 rainbowSpriteKind;
    u8 unk_0e84[0x14d8 - 0xe84];
    Unk_020bb25c_Ent74 fireworkSprites[13];
    u8 unk_1abc[0x2f18 - 0x1abc];
    u8 minute;
    u8 hour;
    u8 unk_2f1a[0x2f29 - 0x2f1a];
    u8 birdsRequested;
    u8 unk_2f2a[2];
    s32 fireworksPattern;
    s32 fireworksPatternTime;
    s32 fireworksBigTimer;
    s32 fireworksSlotTimers[4];
    s32 fireworksInterval;
    u8 unk_2f4c[0x2f51 - 0x2f4c];
    u8 rainbowStrength;
    u8 unk_2f52[0x2f58 - 0x2f52];
    Unk_020bb25c_Ent14 shotRequests[4];
    u8 shotSeq[4];

    void fireworksPatternAct0B();
    void fireworksPatternAct0A();
    void fireworksPatternAct09();
    void fireworksPatternAct08();
    void fireworksPatternAct07();
    void fireworksPatternAct06();
    void fireworksPatternAct05();
    void fireworksPatternAct04();
    void fireworksPatternAct03();
    void fireworksPatternAct02();
    void fireworksPatternAct01();
    void selectFireworksPattern(s32 mode);
    void setFireworksTiming(s32 a, s32 b, s32 c);
    void tickTripleLaunches();
    void tickPairLaunches();
    void tickSmallLaunches();
    void tickLowBigLaunch();
    void tickBigLaunch();
    void rollLaunchInterval(s32 *out);
    void launchFirework(s32 idx, s32 a, s32 b);
    BOOL canLaunchSmall(s32 idx);
    BOOL canLaunchBig(s32 idx);
    void updateBirds();
    void spawnShots();
    void updateRainbow();

    BOOL spawn(s32 a, s32 b, s32 c, s32 d);
    void killKind(s32 a);
    void applyRainbowBlend();
};
enum Unk_020bb8a4_E { Unk_020bb8a4_E_0 = 0 };
struct Unk_020d0f40 {
    s32 baseInterval;
    s32 randomInterval;
};
struct Unk_020bbcc8_Xxx {
    u32 a, b;
};
struct Unk_020bbc28 {
    char pad_0000[0xe0c];
    s32 moonSpriteKind;
    char pad_0e10[0x1464 - 0xe10];
    s32 visitorSpriteKind;
    char pad_1468[0x2eb8 - 0x1468];
    char palette[0x48];
    s32 spawnInterval;
    s32 spawnAccum;
    s32 precipIntensity;
    s32 snowCounter;
    char pad_2f10[8];
    u8 minute;
    u8 hour;
    u8 prevMinute;
    u8 prevHour;
    s32 second;
    s32 prevSecond;
    u8 balloonChance;
    u8 ufoChance;
    u8 ufoEventToday;
    u8 peteEventToday;
    s32 unk_2f28;
    s32 fireworksPattern;
    s32 fireworksPatternTime;
    s32 fireworksBigTimer;
    s32 fireworksSlotTimers;
    s32 fireworksSlotTimers1;
    s32 fireworksSlotTimers2;
    s32 fireworksSlotTimers3;
    s32 fireworksInterval;
    s32 shootingStarDelay;
    s32 unk_2f50;
    char rainStrength[8];

    void updatePete();
    void updateUfo();
    void updateBalloon();
    void updateFireworksShow();
    void updateMoon();
    void updateShootingStar();
    void updateSnow();
    void updateRain();
    void spawn(s32 a, s32 b, s32 c, s32 d);
    void killKind(s32 a);
    void selectFireworksPattern(s32 a);
    s32 findKind(s32 a);
    void updateLightning();
    void func_020bb490();
    void func_020bb458();
    void func_020bb420();
    void func_020bb3e8();
    void func_020bb3b0();
    void func_020bb374();
    void func_020bb33c();
    void func_020bb304();
    void func_020bb2cc();
    void func_020bb294();
    void func_020bb25c();
    void SkySprites_FireworksPatternAct0C();
    void SkySprites_FireworksPatternAct0D();
    void SkySprites_FireworksPatternAct0E();
    void SkySprites_FireworksPatternAct0F();
    void SkySprites_FireworksPatternAct10();
    void SkySprites_FireworksPatternAct11();
    void SkySprites_FireworksPatternAct12();
    void SkySprites_FireworksPatternAct13();
};
struct Unk_020bc754_Slot {
    s32 kind;
    s32 state;
    s32 gfxId;
    u8 unk_0c[0x18];
    s32 gfxSlot;
    u8 unk_28[0xc];
    s32 screenPosX;
    s32 screenPosY;
    s32 screenPosZ;
    u8 unk_40[0x1d];
    s8 palette;
    u8 unk_5e[0x16];
};
struct Unk_020bccc8_Entry {
    s32 gfxId;
    s32 refCount;
    u8 loaded;
    u8 dirty;
    u8 unk_0a[2];
};
struct Unk_020bca5c_Elem {
    u8 unk_00[0x14];
};
struct Unk_020bc754_Vec {
    s32 x, y, z;
};
struct Unk_020bc99c_Loc {
    u8 a;
    u8 pad;
    u16 b;
};
struct Unk_020bcb04_Ent {
    u16 id;
    u8 pad[10];
};
class Unk_020bc58c {
public:
    void updateThunderFlash();
    void updateLightning();
    void spawnInitialPrecip();
    void killAll();
    void killKind(s32 id);
    Unk_020bc754_Slot *spawn(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg);
    s32 getGfxIdForKind(s32 kind, s32 arg);
    void tickClock();
    void initClock();
    void sendWishLetters();
    Unk_020bca5c_Elem *getShotRequest(s32 i);
    void onSlingshotFired(s32 i);
    void onDayChange(BOOL a);
    void checkTodayEvents();
    void stop();
    void start();
    s32 findKind(s32 id);
    s32 findFreeIndex(s32 kind, s32 idx);
    void releaseConflictingSlots(s32 k);
    s32 pickGfxSlot(s32 t);
    void uploadDirtyGfx();
    void loadDirtyGfx();
    void reloadAllGfx();
    void updateMoon();
    void updateRainbow();

    Unk_020bc754_Slot sprites[0x3c];
    Unk_020bccc8_Entry gfxSlots[5];
    u8 loader[0x2eb8 - 0x1b6c];
    u8 palette[0x2f08 - 0x2eb8];
    s32 precipIntensity;
    s32 snowCounter;
    s32 thunderTimer;
    s32 spriteCount;
    u16 minuteHour;
    u16 prevMinuteHour;
    s32 second;
    s32 prevSecond;
    u8 balloonChance;
    u8 ufoChance;
    u8 ufoEventToday;
    u8 peteEventToday;
    u8 fireworksToday;
    u8 unk_2f29[0x2f54 - 0x2f29];
    s32 rainStrength;
    Unk_020bca5c_Elem shotRequests[4];
    u8 shotSeq[0x10];
};
// 0x74-byte element of the 60-element array at the start of SkySprites
struct SkySprite {
    u8 unk_00[0x10];
    SpriteAnim unk_10;
    u8 unk_24[0x74 - 0x24];
    SkySprite();
    ~SkySprite();
};
// 0xc-byte element (5 of them at 0x1b30)
struct SkyObjGfxSlot {
    u8 unk_00[0xc];
    SkyObjGfxSlot();
};
struct SkyObjGfxLoader {
    u8 unk_00[0x134c];
    void init();
};
struct Unk_020bd8f8 {
    u8 unk_00[0x48];
    Unk_020bd8f8();
};
struct SkyShotRequest {
    s32 playerSlot;
    s32 pos;
    s32 posY;
    s32 posZ;
    u8 golden;
    u8 pending;
    SkyShotRequest();
    ~SkyShotRequest();
    void clear();
    void set(s32 a, s32* p, u8 b);
};
struct Unk_020bd0a4_Vec3 {
    s32 x, y, z;
};
struct SkySePlayer {
    Unk_0213b970 channels[8];
    FxVec3 positions[8];
    u8 active;

    SkySePlayer();
    void update();
    void request(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void requestSustained(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void releaseAll();
    void resetAll();
};
struct Unk_020bd774_Entry {
    u8 unk_00[0xc];
    s8 srcPalette;
    s8 objPalette;
    u8 unk_0e[2];
};
struct SkyShotSequence {
    s32 state;
    s32 playerSlot;
    s32 timer;
    s32 targetX;
    s32 targetY;
    s32 targetScale;
    u8 fallDir;
    s16 headPitch;
    s16 headYaw;
    u8 balloonDropEnded;
    u8 landSePending;
    u8 splashSePending;
    u8 goldenBalloon;

    SkyShotSequence();
    void relaxHead(s32 a, s32 b);
    void lookAtTarget();
    void reset();
    void actPeteFallen();
    void actPeteFall();
    void actPeteHit();
    void actUfoCrashed();
    void actUfoFall();
    void actUfoHit();
    void actBalloonDrop();
    void actBalloonHit();
    void actShotFlight();
    void update();
    void setTarget(s32 a, s32 b, s32 c, u8 d);
    void onPeteFell();
    void onPeteHit();
    void onUfoFell();
    void onUfoHit();
    void onBalloonFell();
    void onBalloonHit(u8 a);
    void endWatch(s32 a);
    void startShot(s32 a);
};
struct SkyObjPalette {
    s32 balloonColor;
    s8 loadedSrcPalettes[4];
    u16 overrideMask;
    u16 overrideColors[15];
    u16 colors[16];

    void setOverride(s32 idx, u16* p);
    BOOL hasOverride(s32 idx);
    void func_020bd758(s32 idx);
    void setLoadedRow(s32 a, s32 b);
    BOOL isLoaded(s32 idx);
    void invalidateFor(s32 idx);
    void invalidate(s32 v);
    void pickBalloonColor();
    BOOL applyOverrides(s32 v);
};
struct SkySprites {
    SkySprite sprites[60];
    SkyObjGfxSlot gfxSlots[5];
    SkyObjGfxLoader loader;
    Unk_020bd8f8 palette;
    u32 spawnInterval;
    u32 spawnAccum;
    u32 precipIntensity;
    u32 snowCounter;
    u32 thunderTimer;
    u32 spriteCount;
    u8 unk_2f18[0xc];
    u8 balloonChance;
    u8 ufoChance;
    u8 ufoEventToday;
    u8 peteEventToday;
    u8 fireworksToday;
    u8 birdsRequested;
    u8 unk_2f2a[2];
    u32 fireworksPattern;
    u32 fireworksPatternTime;
    u32 fireworksBigTimer;
    u32 fireworksSlotTimers;
    u32 fireworksSlotTimers1;
    u32 fireworksSlotTimers2;
    u32 fireworksSlotTimers3;
    u32 fireworksInterval;
    u32 shootingStarDelay;
    u8 shootingStarVisible;
    u8 rainbowStrength;
    u8 unk_2f52[2];
    u32 rainStrength;
    SkyShotRequest shotRequests[4];
    SkyShotSequence shotSeq;
    SkySePlayer se;

    SkySprites();
    ~SkySprites();
};
// The original computes the destination address BEFORE loading *p. An enum-typed local is not forwarded by mwcc,
// so holding the element base in one keeps the address computation where it is written.
enum Unk_020bd718_E { Unk_020bd718_E0 };
struct Unk_020d16e8 { u32 charFile; u16 charTileA; u16 charTileB; u32 charLayout; s8 srcPalette; s8 objPalette; s8 unk_0e; s8 unk_0f; };
struct Unk_020bd868 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 refCount;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 dirty;
    /* 0x0a */ u16 overrideColors[15];
    /* 0x28 */ u8 colors[0x20];
};
struct Unk_020bd9a0_Row { u32 topTileX; u32 topTileCount; u32 bottomTileX; u32 bottomTileCount; };
struct Unk_020bdd94_Out { s32 x; s32 y; s32 z; };
struct Unk_020bdd94 {
    /* 0x00 */ u8 unk_00[0x24];
    /* 0x24 */ s32 gfxSlot;
    /* 0x28 */ s32 trackX;
    /* 0x2c */ s16 wavePhase;
    /* 0x2e */ u8 dir;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u8 unk_30[4];
    /* 0x34 */ s32 screenPosX;
    /* 0x38 */ s32 screenPosY;
    /* 0x3c */ s32 screenPosZ;
    /* 0x40 */ u8 unk_40[0xc];
    /* 0x4c */ s32 scaleX;
    /* 0x50 */ s32 scaleY;
};
struct Unk_020bdd4c_Out { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0c; };
struct Unk_021f23d4 {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk_08[0x2c];
    /* 0x34 */ s32 posX;
    /* 0x38 */ s32 posY;
    /* 0x3c */ u8 unk_3c[0x8];
    /* 0x44 */ s32 velY;
    /* 0x48 */ u8 unk_48[0x2c];
};
struct Unk_020bdef0_Vec { s32 unk_00[3]; Unk_020bdef0_Vec() {} ~Unk_020bdef0_Vec() {} };
struct Unk_020be0bc {
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 animSeq;
    /* 0x10 */ u8 anim[1];
};
enum Unk_020be0bc_E { Unk_020be0bc_E_0 = 0 };
struct Unk_020be0f4 {
    s32 kind;
    void func_020be4d0();
    void func_020be61c();
    void func_020be7b4();
    void func_020be7dc();
    void func_020bef24();
    void func_020bef90();
    void func_020bf1d0();
    void SkySprite_EndBalloon();
    void SkySprite_EndMoon();
    void SkySprite_EndShootingStar();
    void SkySprite_EndParticle();
    void SkySprite_EndSnowFlake();
    void func_020bfe30();
    void endByKind();
};
struct Unk_020be204_Vec {
    s32 x, y, z;
};
struct Unk_020bca5c_Rec {
    u32 playerSlot;
    Unk_020be204_Vec pos;
};
class Unk_020be204 {
public:
    void updateByKind();
    void initByKind(u32 a);
    void resetFree();
    void clear();
    Unk_020be204 *construct();
    void endBird();
    void updateBird();
    void initBird(u32 a);
    void endShot();
    void updateShot();
    void initShot(u32 a);
    void endRainbow();
    void updateRainbow();
    void initRainbow();
    void endFirework();
    void updateFireworkShell();
    void updateFireworkBurst();
    void updateFirework();
    void initFireworkShell(u32 a);
    void initFireworkBurst(u32 a);

    // other methods
    void release();
    void releaseFireworkPalette();
    void updateFireworkPalette();
    void updateFireworkScale(s32 a);
    void requestSeSustainedOn(u32 a, u32 b);
    void func_020bfe38();
    void SkySprite_UpdateSnowFlake();
    void SkySprite_UpdateParticle();
    void SkySprite_UpdateShootingStar();
    void SkySprite_UpdateMoon();
    void SkySprite_UpdateBalloon();
    void func_020bf1d8();
    void func_020bef98();
    void func_020bef2c();
    void func_020bfec0(u32 a);
    void SkySprite_InitSnowFlake(u32 a);
    void SkySprite_InitParticle(u32 a);
    void SkySprite_InitShootingStar(u32 a);
    void SkySprite_InitMoon(u32 a);
    void SkySprite_InitBalloon(u32 a);
    void func_020bf3bc(u32 a);
    void func_020bf15c(u32 a);
    void func_020bef44(u32 a);
    void func_020beb40(u32 a);

    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 gfxId;
    /* 0x0c */ s32 animSeq;
    /* 0x10 */ u32 anim[5];
    /* 0x24 */ s32 gfxSlot;
    /* 0x28 */ s32 trackX;
    /* 0x2c */ u16 wavePhase;
    /* 0x2e */ u8 dir;
    /* 0x2f */ u8 localShot;
    /* 0x30 */ u8 hit;
    /* 0x31 */ u8 hidden;
    /* 0x32 */ u8 unk_32[2];
    /* 0x34 */ Unk_020be204_Vec screenPos;
    /* 0x40 */ Unk_020be204_Vec screenVel;
    /* 0x4c */ s32 scaleX;
    /* 0x50 */ s32 scaleY;
    /* 0x54 */ u16 angle;
    /* 0x56 */ u8 hFlip;
    /* 0x57 */ u8 vFlip;
    /* 0x58 */ s32 priority;
    /* 0x5c */ u8 cullRadius;
    /* 0x5d */ u8 palette;
    /* 0x5e */ u8 unk_5e[2];
    /* 0x60 */ u32 work0;
    /* 0x64 */ s32 work1;
    /* 0x68 */ u32 work2;
    /* 0x6c */ s32 work3;
    /* 0x70 */ s32 work4;
};
enum Unk_020be820_E { Unk_020be820_E_0 = 0 };
struct Unk_020be018_Vec { s32 x, y, z; };
struct Unk_020bee28_Vec2 {
    s32 x, y;
    Unk_020bee28_Vec2(s32 a, s32 b) { x = a; y = b; }
};
struct Unk_020bf1d8_Vec {
    s32 x, y, z;
    Unk_020bf1d8_Vec(const Unk_020bf1d8_Vec &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_020bec40_Col { u16 r : 5; u16 g : 5; u16 b : 5; };
struct Unk_020bec40_Pair { Unk_020bec40_Col a; Unk_020bec40_Col b; };
struct Unk_021f4398 {
    void setOverride(s32 i, u16 *col);
    void func_020bd758(s32 i);
};
struct Unk_020be018 {
    /* 0x00 */ u32 kind;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 gfxId;
    /* 0x0c */ s32 animSeq;
    /* 0x10 */ u8 anim[0x14];
    /* 0x24 */ s32 gfxSlot;
    /* 0x28 */ s32 trackX;
    /* 0x2c */ s16 wavePhase;
    /* 0x2e */ u8 dir;
    /* 0x2f */ u8 localShot;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ Unk_020be018_Vec screenPos;
    /* 0x40 */ Unk_020be018_Vec screenVel;
    /* 0x4c */ s32 scaleX;
    /* 0x50 */ s32 scaleY;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 priority;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u32 work0;
    /* 0x64 */ s32 work1;
    /* 0x68 */ s32 work2;

    s32 advanceCrossing(s32 a, s32 b, s32 c);
    void beginCrossing(s32 a, s32 b);
    void release();
    void startAnim();
    s32 checkShotHit(s32 a, s32 b, s32 c);
    void requestSeSustained(s32 a);
    void requestSe(s32 a);
    s32 initFireworkShell(u32 a);
    s32 initFireworkBurst(u32 a);
    void initFirework(u32 a);
    void updateFireworkScale(s32 a);
    s32 riseDistance(s32 a);
    void releaseFireworkPalette();
    void updateFireworkPalette();
    void endLightning();
    void updateLightning();
    void initLightning();
    void endPete();
    void updatePete();
    void initPete();
    void endUfo();
    void updateUfo();
    void initUfo();
    void spawnUfoDebris();
};
struct Unk_020bee28_V {
    s32 x, y, z;
    Unk_020bee28_V(const Unk_020bf1d8_Vec &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_020bee28_V() {}
};
struct Unk_020bf18c_Pad {
    s32 v[3];
    Unk_020bf18c_Pad() {}
    ~Unk_020bf18c_Pad() {}
};
struct Unk_020bfc48_Pad {
    s32 v[4];
    Unk_020bfc48_Pad() {}
    ~Unk_020bfc48_Pad() {}
};
// ---------------------------------------------------------------------------------------------------------------------

struct U234_Record {
    void *fn;
    u16 executePriority;
    u16 drawPriority;
};
namespace n00 {
extern "C" {
extern const s32 data_020c8cbc;
void SkyProc_Create(void);
}
}

// ======== the unit's objects (defined further down, in creation order) ========
namespace n00 {
extern "C" {
void _ZN15SkyShotSequence11actPeteFallEv(void);
void _ZN15SkyShotSequence10actPeteHitEv(void);
void _ZN12Unk_020be0187endPeteEv(void);
void _ZN12Unk_020be20411initRainbowEv(void);
void _ZN12Unk_020bb25c21fireworksPatternAct03Ev(void);
void _ZN12Unk_020bb25c21fireworksPatternAct08Ev(void);
void _ZN12Unk_020bb25c21fireworksPatternAct05Ev(void);
void _ZN12Unk_020bb25c21fireworksPatternAct07Ev(void);
void _ZN12Unk_020be01815updateLightningEv(void);
void _ZN15SkyShotSequence14actBalloonDropEv(void);
void SkySprites_FireworksPatternAct0E(void);
void SkySprites_FireworksPatternAct12(void);
void _ZN12Unk_020bb25c21fireworksPatternAct01Ev(void);
void _ZN12Unk_020be0188initPeteEv(void);
void SkySprites_FireworksPatternAct13(void);
void SkySprite_InitParticle(void);
void SkySprite_InitBalloon(void);
void SkySprite_EndParticle(void);
void _ZN15SkyShotSequence13actUfoCrashedEv(void);
void _ZN12Unk_020be2048initBirdEj(void);
void SkySprite_UpdateSnowFlake(void);
void SkySprites_FireworksPatternAct11(void);
void _ZN12Unk_020be20411endFireworkEv(void);
void _ZN15SkyShotSequence13actBalloonHitEv(void);
void _ZN12Unk_020bb25c21fireworksPatternAct02Ev(void);
void _ZN12Unk_020be20413updateRainbowEv(void);
void _ZN12Unk_020be20410updateShotEv(void);
void _ZN12Unk_020be2048initShotEj(void);
void _ZN15SkyShotSequence13actShotFlightEv(void);
void SkySprites_FireworksPatternAct0D(void);
void SkySprites_FireworksPatternAct0C(void);
void _ZN12Unk_020bb25c21fireworksPatternAct09Ev(void);
void _ZN12Unk_020bb25c21fireworksPatternAct0AEv(void);
void SkySprites_FireworksPatternAct10(void);
void _ZN12Unk_020be01813initLightningEv(void);
void SkySprite_InitSnowFlake(void);
void _ZN12Unk_020be01810updatePeteEv(void);
void _ZN15SkyShotSequence9actUfoHitEv(void);
void _ZN15SkyShotSequence13actPeteFallenEv(void);
void SkySprite_UpdateParticle(void);
void SkySprite_InitMoon(void);
void _ZN12Unk_020bb25c21fireworksPatternAct04Ev(void);
void _ZN12Unk_020be0187initUfoEv(void);
void _ZN12Unk_020be2047endBirdEv(void);
void _ZN12Unk_020be2047endShotEv(void);
void _ZN12Unk_020be20410endRainbowEv(void);
void _ZN12Unk_020be01812endLightningEv(void);
void _ZN12Unk_020be0186endUfoEv(void);
void SkySprite_EndBalloon(void);
void SkySprite_EndMoon(void);
void SkySprite_EndShootingStar(void);
void _ZN12Unk_020bfe3014updateRainDropEv(void);
void _ZN12Unk_020bfe3011endRainDropEv(void);
void SkySprite_UpdateShootingStar(void);
void _ZN12Unk_020be0189updateUfoEv(void);
void SkySprites_FireworksPatternAct0F(void);
void _ZN15SkyShotSequence10actUfoFallEv(void);
void _ZN12Unk_020bb25c21fireworksPatternAct06Ev(void);
void SkySprite_UpdateMoon(void);
void SkySprite_UpdateBalloon(void);
void _ZN12Unk_020be20410updateBirdEv(void);
void SkySprite_EndSnowFlake(void);
void _ZN12Unk_020be01812initFireworkEj(void);
void _ZN12Unk_020be20414updateFireworkEv(void);
void SkySprite_InitShootingStar(void);
void _ZN12Unk_020bb25c21fireworksPatternAct0BEv(void);
void _ZN12Unk_020bfe3012initRainDropEi(void);
extern const u32 sSkyCloudBgLayer[1];
extern const u32 sSkyPaletteLayer[1];
extern const u32 sSkyStarBgLayer[1];
extern const u32 sSkyNextCloudBgLayer[1];
extern const u32 sSkyObjPalDefaultColor[1];
extern const u32 sBirdDelays[1];
extern const u8 data_020d0e04[5];
extern const u32 sFireworkFlicker[2];
extern void *const sSkyObjCharFiles[3];
extern const u32 sRainParallax[3];
extern const u32 sSnowAnimIds[3];
extern const u32 sSnowFallSpeeds[3];
extern const u32 sSnowParallax[3];
extern const u8 sFireworksPatternWeights[14];
extern const u8 sSkyObjPalOverrideSlots[15];
extern const u32 sRainSeIds[4];
extern const u32 sFireworkColors[4];
extern const u32 sFireworkShellTypes[4];
extern const u32 sSkyPaletteSetByLevel[5];
extern const u32 sFireworksPatternDelays[5];
extern const u32 data_020d0ec8[6];
extern const u32 data_020d0ee0[6];
extern const u32 data_020d0ef8[6];
extern const u32 data_020d0f10[6];
extern const u32 sParticleAnimIds[6];
extern const u32 sRainSpawnRates[8];
extern const u32 sSnowSpawnRates[8];
extern const u32 sFireworkScaleBig[9];
extern const u32 sFireworkScaleSmall[9];
extern const u32 data_020d0fc8[12];
extern const u32 data_020d0ff8[12];
extern const u32 data_020d1028[12];
extern const u32 data_020d1058[12];
extern const u32 data_020d1088[12];
extern const u32 data_020d10b8[12];
extern const u32 data_020d10e8[12];
extern const u32 data_020d1118[12];
extern const u32 data_020d1148[12];
extern const u32 data_020d1178[12];
extern const u32 sSkySpriteDefaultGfx[13];
extern const u32 sSkyObjCharLayouts[20];
extern const u32 sParticleTrailScales[23];
extern const u32 sFireworkScaleBigLong[44];
extern const u32 sFireworkScaleSmallLong[44];
extern const u32 sWeatherHourTable[192];
extern const u32 sSkyObjGfxTable[208];
extern u32 data_020e4630[1];
extern u32 data_020e4634[1];
extern u32 sSnowSideToggle[1];
extern u32 sRainSideToggle[1];
extern u32 sSkyBlendLineCache[1];
extern u32 data_020e4644[2];
extern void *data_020e464c[2];
extern U234_Record sSkyProcProfile;
extern u32 data_020e465c[2];
extern void *data_020e4664[2];
extern u32 data_020e466c[2];
extern u32 data_020e4674[2];
extern void *data_020e467c[2];
extern u32 data_020e4684[2];
extern void *data_020e468c[2];
extern void *data_020e4694[2];
extern u32 data_020e469c[2];
extern void *data_020e46a4[2];
extern void *data_020e46ac[2];
extern void *data_020e46b4[2];
extern void *data_020e46bc[2];
extern void *data_020e46c4[2];
extern void *data_020e46cc[2];
extern void *data_020e46d4[2];
extern u32 data_020e46dc[2];
extern void *data_020e46e4[2];
extern u32 data_020e46ec[2];
extern void *data_020e46f4[2];
extern u32 data_020e46fc[2];
extern void *data_020e4704[2];
extern u32 data_020e470c[2];
extern void *data_020e4714[2];
extern void *data_020e471c[2];
extern void *data_020e4724[2];
extern void *data_020e472c[2];
extern u32 data_020e4734[2];
extern void *data_020e473c[2];
extern void *data_020e4744[2];
extern void *data_020e474c[2];
extern void *data_020e4754[2];
extern u32 data_020e475c[2];
extern u32 data_020e4764[2];
extern u32 data_020e476c[2];
extern u32 data_020e4774[2];
extern u32 data_020e477c[2];
extern void *data_020e4784[2];
extern void *data_020e478c[2];
extern void *data_020e4794[2];
extern void *data_020e479c[2];
extern void *data_020e47a4[2];
extern void *data_020e47ac[2];
extern u32 data_020e47b4[2];
extern void *data_020e47bc[2];
extern u32 data_020e47c4[2];
extern void *data_020e47cc[2];
extern void *data_020e47d4[2];
extern void *data_020e47dc[2];
extern void *data_020e47e4[2];
extern u32 data_020e47ec[2];
extern u32 data_020e47f4[2];
extern u32 data_020e47fc[2];
extern void *data_020e4804[2];
extern void *data_020e480c[2];
extern u32 data_020e4814[2];
extern void *data_020e481c[2];
extern void *data_020e4824[2];
extern u32 data_020e482c[2];
extern void *data_020e4834[2];
extern u32 data_020e483c[2];
extern u32 data_020e4844[2];
extern u32 data_020e484c[2];
extern u32 data_020e4854[2];
extern u32 data_020e485c[2];
extern u32 data_020e4864[2];
extern u32 data_020e486c[2];
extern u32 data_020e4874[2];
extern u32 data_020e487c[2];
extern u32 data_020e4884[2];
extern u32 data_020e488c[2];
extern void *data_020e4894[2];
extern u32 data_020e489c[2];
extern void *data_020e48a4[2];
extern void *data_020e48ac[2];
extern void *data_020e48b4[2];
extern u32 data_020e48bc[2];
extern u32 data_020e48c4[2];
extern u32 data_020e48cc[2];
extern u32 data_020e48d4[2];
extern u32 data_020e48dc[2];
extern void *data_020e48e4[2];
extern u32 data_020e48ec[2];
extern u32 data_020e48f4[2];
extern void *data_020e48fc[2];
extern void *data_020e4904[2];
extern void *data_020e490c[2];
extern void *data_020e4914[2];
extern u32 data_020e491c[2];
extern void *data_020e4924[2];
extern u32 data_020e492c[2];
extern void *data_020e4934[2];
extern void *data_020e493c[2];
extern void *data_020e4944[2];
extern void *data_020e494c[2];
extern void *data_020e4954[2];
extern u32 data_020e495c[2];
extern void *data_020e4964[2];
extern void *data_020e496c[2];
extern void *data_020e4974[2];
extern u32 data_020e497c[2];
extern u32 data_020e4984[2];
extern u32 data_020e498c[2];
extern void *data_020e4994[2];
extern u32 data_020e499c[2];
extern u32 data_020e49a4[2];
extern void *data_020e49ac[2];
extern void *data_020e49b4[2];
extern void *data_020e49bc[2];
extern void *data_020e49c4[2];
extern u32 data_020e49cc[2];
extern u32 data_020e49d4[2];
extern void *data_020e49dc[2];
extern void *data_020e49e4[2];
extern u32 data_020e49ec[2];
extern u32 data_020e49f4[2];
extern u32 data_020e49fc[2];
extern void *data_020e4a04[2];
extern u32 data_020e4a0c[2];
extern u32 data_020e4a14[2];
extern u32 data_020e4a1c[2];
extern u32 data_020e4a24[2];
extern void *data_020e4a2c[2];
extern void *data_020e4a34[2];
extern u32 data_020e4a3c[2];
extern void *data_020e4a44[2];
extern void *data_020e4a4c[2];
extern u32 data_020e4a54[2];
extern u32 data_020e4a5c[2];
extern void *data_020e4a64[3];
extern void *data_020e4a70[3];
extern void *data_020e4a7c[3];
extern void *data_020e4a88[3];
extern void *data_020e4a94[3];
extern void *data_020e4aa0[3];
extern void *data_020e4aac[3];
extern void *data_020e4ab8[3];
extern void *data_020e4ac4[3];
extern void *sCloudScreenFiles[3];
extern void *data_020e4adc[3];
extern void *data_020e4ae8[3];
extern void *data_020e4af4[3];
extern void *data_020e4b00[3];
extern void *data_020e4b0c[3];
extern void *data_020e4b18[3];
extern void *data_020e4b24[3];
extern void *data_020e4b30[3];
extern void *data_020e4b3c[3];
extern void *data_020e4b48[3];
extern u32 data_020e4b54[4];
extern u32 data_020e4b64[4];
extern void *data_020e4b74[4];
extern void *data_020e4b84[4];
extern u32 data_020e4b94[4];
extern u32 data_020e4ba4[4];
extern u32 data_020e4bb4[4];
extern u32 data_020e4bc4[4];
extern u32 data_020e4bd4[4];
extern u32 data_020e4be4[4];
extern u32 data_020e4bf4[4];
extern u32 data_020e4c04[4];
extern u32 data_020e4c14[4];
extern u32 data_020e4c24[4];
extern u32 data_020e4c34[4];
extern u32 data_020e4c44[4];
extern u32 data_020e4c54[4];
extern u32 data_020e4c64[4];
extern u32 data_020e4c74[4];
extern u32 data_020e4c84[4];
extern u32 data_020e4c94[4];
extern void *sSkyPaletteFiles[4];
extern u32 data_020e4cb4[4];
extern u32 data_020e4cc4[4];
extern u32 data_020e4cd4[4];
extern u32 data_020e4ce4[4];
extern u32 data_020e4cf4[4];
extern u32 data_020e4d04[4];
extern u32 data_020e4d14[4];
extern u32 data_020e4d24[4];
extern void *sCloudCharFiles[5];
extern void *sSkyLightColorTables[5];
extern void *sSkyFogOffsetTables[5];
extern void *data_020e4d70[5];
extern void *sSkyLightParamTables[5];
extern void *data_020e4d98[5];
extern char data_020e4dac[23];
extern void *data_020e4ddc[6];
extern char data_020e4df4[27];
extern char data_020e4e10[27];
extern char data_020e4e48[30];
extern char data_020e4e68[30];
extern char data_020e4e88[30];
extern char data_020e4ea8[30];
extern char data_020e4ec8[30];
extern char data_020e4ee8[30];
extern char data_020e4f08[30];
extern char data_020e4f28[30];
extern char data_020e4f48[30];
extern char data_020e4f68[30];
extern char data_020e4f88[30];
extern char data_020e4fa8[30];
extern char data_020e4fc8[30];
extern char data_020e4fe8[31];
extern char data_020e5008[31];
extern char data_020e5028[31];
extern char data_020e5048[31];
extern char data_020e5068[31];
extern char data_020e5088[31];
extern char data_020e50a8[31];
extern char data_020e50c8[31];
extern void *data_020e50e8[9];
extern void *data_020e510c[9];
extern void *data_020e5130[9];
extern void *data_020e5154[9];
extern void *data_020e5178[9];
extern void *data_020e519c[9];
extern void *data_020e51c0[9];
extern void *data_020e51e4[9];
extern u32 data_020e5208[10];
extern void *data_020e5230[10];
extern void *data_020e5258[12];
extern void *data_020e5288[12];
extern u32 data_020e52b8[12];
extern u32 data_020e52e8[12];
extern void *data_020e5318[12];
extern void *data_020e5348[12];
extern u32 data_020e5378[14];
extern void *data_020e53b0[18];
extern u32 data_020e53f8[18];
extern u32 data_020e5440[18];
extern u32 data_020e5488[18];
extern u32 data_020e54d0[20];
extern u32 data_020e5520[20];
extern u32 data_020e5570[20];
extern u32 data_020e55c0[20];
extern u32 data_020e5610[20];
extern void *data_020e56b0[21];
extern void *data_020e5704[24];
extern void *data_020e5764[27];
extern void *data_020e57d0[27];
extern void *data_020e583c[27];
extern void *data_020e58a8[27];
extern void *data_020e5914[27];
extern void *data_020e5980[45];
extern u32 data_020e5a34[48];
extern void *data_020e5af4[132];
extern void *data_020e5d04[132];
extern void *data_020e5f14[132];
extern void *data_020e6124[132];
extern void *data_020e6334[132];
extern void *sSkySpriteAnimSeqs[138];
extern u8 sSkyLineTablesReady;
extern u32 sSkyBlackBackdrop[1];
extern u32 sSkyOutdoors;
extern s32 sSkyCrossingWidth;
extern u32 sSkyLineScrollY[2];
extern u32 sSkyLineScrollX[2];
extern u32 sSkyLight[3];
extern u32 sMoonColors[3];
extern u32 sSkyHBlankTask[7];
extern u32 sSkyGradient[196];
extern StarTwinkle data_021efc18;
extern WeatherManager gWeatherManager;
extern SkySprites gSkySprites;
}
}

// ======== unk_020bfe30.cpp ========
namespace n13 {
static inline void Unk_020bfe30_Set(Unk_020bfe30_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
extern "C" {
void SkySprite_Release(void *p);
}
extern "C" {
void VEC_Add(Unk_020bfe30_Vec *a, Unk_020bfe30_Vec *b, Unk_020bfe30_Vec *c);
}
extern "C" {
Unk_020bfe38_Ent *PlayerActor_GetActor(s32 n);
}
extern "C" {
u32 Random_GlobalBelow(u32 n);
}
extern "C" {
Mtx43 *Camera_GetViewMatrix(void);
}
extern "C" {
void WorldCurve_Apply(void *out, void *in);
}
extern "C" {
void MTX_MultVec43(void *a, void *b, void *c);
}
extern "C" {
s32 _ZN6Camera9getFovTanEv(s32 a);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void Vec_Scale(void *a, s32 b);
}
extern "C" {
s32 __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*dtor)(void *));
}
extern "C" {
void _ZN6FxVec3D1Ev(void *p);
}
extern "C" {
void _ZN14SkyShotRequestD1Ev(void *p);
}
extern "C" {
void _ZN9SkySpriteD1Ev(void *p);
}
extern "C" {
s32 DateTime_GetWeatherPeriod(void *p);
}
extern "C" {
s32 _ZN11CommManager8isOnlineEv(CommManager *p);
}
extern "C" {
void MI_CpuCopy8(void *a, void *b, s32 n);
}
extern "C" {
void DateTime_SubHours(void *p, s32 n);
}
extern "C" {
s32 DateTime_DiffMinutes(void *a, void *b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void DateTime_AddDays(void *p, s32 n);
}
extern "C" {
s32 Scene_GetCurrent(void);
}
extern "C" {
BOOL GameStart_IsActive(void);
}
extern "C" {
s32 PlayerData_GetCurrent(void);
}
extern "C" {
BOOL _ZN12Unk_02097ff48testFlagEj(s32 a, s32 b);
}
extern "C" {
u16 *Event_GetTodayList(void);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
void Clock_GetDate(void *p);
}
extern "C" {
void _ZN10SpNpcActorD2Ev(void *p);
}
extern "C" {
s32 _ZN11NpcFaceAnim12getMouthAnimEv(void *p);
}
extern "C" {
s32 _ZN15TalkWindowState13getChoiceListEv(void *p);
}
extern "C" {
s32 _ZN10ChoiceList9getResultEv(void);
}
extern "C" {
void _ZN15TalkWindowState14setNextMessageEPhPv(void *a, void *b, u32 c);
}
extern "C" {
void TownSessionState_Get(void);
}
extern "C" {
void TownSessionState_GetKatieState(void);
}
extern "C" {
void _ZN15KatieVisitState12setFollowingEv(void);
}
extern "C" {
void _ZN15KatieVisitState14clearFollowingEv(void);
}
extern "C" {
s32 _ZN10PlayerData18getLostChildRecordEv(s32 a);
}
extern "C" {
s32 _ZN15LostChildRecord9getTownIdEv(s32 a);
}
extern "C" {
s32 _ZN16ActorTalkRequest15setTownNameSlotEjj(void *p, s32 a, s32 b);
}
extern "C" {
s32 _ZN12Unk_02097ff47setFlagEj(s32 a, s32 b);
}
extern "C" {
void Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
}
extern "C" {
s32 _ZN14NpcMoveAnimSet12setStandAnimEi(void *p, s32 a);
}
extern "C" {
s32 _ZN14NpcMoveAnimSet11setWalkAnimEi(void *p, s32 a);
}
extern "C" {
s32 _ZN16ActorTalkRequest10onEventTagEj(void *p, void *q);
}
extern "C" {
void _ZN16SpNpcTalkRequestD2Ev(void *p);
}
extern "C" {
void _ZN16SpNpcTalkRequestC2Ev(void *p);
}
extern "C" {
void func_020c11b8(void *p, s32 n);
}
extern "C" {
s32 Net_GetJoiningAid(void);
}
extern "C" {
s32 PlayerData_GetBySessionSlot(s32 a);
}
extern "C" {
BOOL PlayerActor_SetNetFollowPaused(s32 a, s32 b);
}
extern "C" {
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
}
extern "C" {
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}
extern "C" {
BOOL PlayerActor_IsScriptedWalking(s32 a);
}
extern "C" {
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *p);
}
extern "C" {
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
}
extern "C" {
void _ZN11NpcTalkCtrl11requestTalkEhh(void *p, s32 a, s32 b);
}
extern "C" {
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
}
extern "C" {
void _Z13func_020c22fcv(void);
}
extern "C" {
void Camera_SetMode19(void);
}
extern "C" {
s32 NpcRegistry_FindSpNpc(s32 a);
}
extern "C" {
void _ZN16ActorTalkRequest15setPartnerActorEP8NpcActor(void *p, s32 a);
}
extern "C" {
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
}
extern "C" {
s32 _ZN11NpcTalkCtrl6isBusyEv(void *p);
}
extern "C" {
s32 Math_AngleXZ(void *a, void *b);
}
extern "C" {
void PlayerActor_RequestTurnTo(s32 a, s32 b);
}
extern "C" {
void _Z13func_020c22e0v(void);
}
extern "C" {
BOOL SaveManager_IsSessionJoined(void);
}
extern "C" {
void FieldInfoBalloon_ShowPleaseWait(void);
}
extern "C" {
BOOL _ZN11CommManager7isMyAidEj(CommManager *p, s32 a);
}
extern "C" {
s32 _ZN15LostChildRecord13isKaitlinRoleEv(void);
}
extern "C" {
void _ZN15LostChildRecord5clearEv(s32 a);
}
extern "C" {
void _ZN15KatieVisitState5clearEv(void);
}
extern "C" {
s32 Scene_GetWarpRequest(void);
}
extern "C" {
void SceneWarp_RequestExit(s32 a, s32 b);
}
extern "C" {
extern u8 gScreenTransition;
}
extern "C" {
extern Unk_020bfe30_Vec sSpNpcKatieReunionWalkPos;
}
extern "C" {
extern u16 data_020c6cc8;
}
extern "C" {
extern u32 data_020c6d1c;
}
extern "C" {
extern u8 gVec3Zero[];
}
extern "C" {
extern s32 sRainParallax[];
}
extern "C" {
extern s32 sRainSideToggle;
}
namespace L_021f43e0 { extern "C" { extern struct S { u8 p[0x2f00]; Unk_020bfec0_Ent v; } gSkySprites; } }
#define data_021f43e0 n13::L_021f43e0::gSkySprites.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; s16 v[1]; } gWeatherManager; } }
#define data_021f1448 n13::L_021f1448::gWeatherManager.v
extern "C" {
extern s16 data_02135f44[];
}
extern "C" {
extern Mtx43 data_021f47e0;
}
extern "C" {
extern s32 gCamera;
}
extern "C" {
extern u8 sWeatherPrevDayRain;
}
extern "C" {
extern s32 sWeatherRolledAtLoad;
}
extern "C" {
extern SpNpcKatie *sSpNpcKatieInstance;
}
extern "C" {
extern u8 sWeatherPatternWeights[];
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern u32 sSpNpcKatieMsgKey;
}
// ---------------------------------------------------------------------------------------------------------------------
static inline void Unk_020bfe38_Add(s32 *dst, s32 v) {
    *dst += v;
}
static inline BOOL Unk_020c06a0_IsMode2() {
    return gScreenTransition == 2;
}

extern "C" void Sky_ProjectToScreenX(s32 *out, Unk_020bfe30_Vec *in);
extern "C" SkyProc *SkyProc_Create();
extern "C" void *SkySprites_Destruct(void *p);

extern "C" void *SkySprites_Destruct(void *p) {
    __cxa_vec_cleanup((u8 *)p + 0x302c, 8, 0xc, _ZN6FxVec3D1Ev);
    __cxa_vec_cleanup((u8 *)p + 0x2f58, 4, 0x14, _ZN14SkyShotRequestD1Ev);
    __cxa_vec_cleanup(p, 0x3c, 0x74, _ZN9SkySpriteD1Ev);
    return p;
}

// ---------------------------------------------------------------------------------------------------------------------
// Vtable classes of the library (autoload_2)

extern "C" SkyProc *SkyProc_Create() {
    return new SkyProc();
}

extern "C" void Sky_ProjectToScreenX(s32 *out, Unk_020bfe30_Vec *in) {
    Mtx43 *m = Camera_GetViewMatrix();
    data_021f47e0 = *m;
    Unk_020bfe30_Vec v;
    v.x = in->x;
    v.y = in->y;
    v.z = in->z;
    u8 a[12];
    s32 b[3];
    WorldCurve_Apply(a, &v);
    MTX_MultVec43(a, &data_021f47e0, b);
    s32 c = _ZN6Camera9getFovTanEv(gCamera);
    s32 q = -FX_Div(0x60000, c);
    Vec_Scale(b, FX_Div(q, b[2]));
    *out = b[0] + 0x80000;
}

}
void Unk_020bfe30::initRainDrop(BOOL flag) {
    using namespace n13;
    s32 idx;
    s32 x = (sRainSideToggle * Random_GlobalBelow(0x8a) + 0x80) << 12;
    sRainSideToggle *= -1;
    s32 y = -0x14000 - (Random_GlobalBelow(0x10) << 12);
    Unk_020bfe30_Vec *p34 = &screenPos;
    p34->x = x;
    p34->y = y;
    p34->z = 0;
    s32 mul = data_021f43e0.rainStrength;
    s32 rr = Random_GlobalBelow(0xaac) - 0x556;
    s32 sh = ((mul * (rr + data_021f1448[0x38 / 2])) << 4) >> 16;
    idx = ((u16)sh >> 4) * 2;
    Unk_020bfe30_Vec *p40 = &screenVel;
    s16 *tab = data_02135f44;
    p40->x = tab[idx] * -0x24;
    p40->y = tab[idx + 1] * 0x24;
    p40->z = 0;
    scaleY = 0x800;
    angle = (u16)sh;
    s32 r = Random_GlobalBelow(3);
    animSeq = r + 2;
    s32 v;
    switch (r) {
    case 0:
        v = Random_GlobalBelow(0x40) + 0x80;
        break;
    case 1:
        v = Random_GlobalBelow(0x40) + 0x40;
        break;
    default:
        v = Random_GlobalBelow(0x40);
        break;
    }
    work0 = v;
    if (flag == 1) {
        screenPos.y += Random_GlobalBelow(v + 0x101) << 12;
    }
    priority = 2;
}
namespace n13 {

}
void Unk_020bfe30::updateRainDrop() {
    using namespace n13;
    Unk_020bfe30_Vec *p = &screenPos;
    VEC_Add(p, &screenVel, p);
    Unk_020bfe38_Ent *e = PlayerActor_GetActor(4);
    if (e) {
        s32 d = -(e->position - e->prevPosition);
        s32 m = sRainParallax[work2];
        d = (d * m) >> 12;
        p->x += d;
    }
    if (p->y > (work0 << 12) + 0x100000) {
        state = 3;
    } else if (p->x < -0x14000) {
        p->x += 0x11e000;
    } else if (p->x > 0x114000) {
        p->x -= 0x11e000;
    }
}
namespace n13 {

}
void Unk_020bfe30::endRainDrop() {
    using namespace n13;
    SkySprite_Release(this);
}
namespace n13 {

#undef data_021f43e0
#undef data_021f1448
}

// ======== unk_020bf4ac.cpp ========
namespace n12 {
struct Unk_020bf4b4;
struct Unk_020bf4b4;
typedef struct { s32 x, y, z; }
 Unk_020bf4b4_Vec;
struct Unk_020bf4b4 {
    u32 kind;
    s32 state;
    s32 gfxId;
    s32 animSeq;
    u8 anim[0x14];
    s32 gfxSlot;
    u8 unk_28[6];
    u8 dir;
    u8 unk_2f[5];
    s32 screenPosX;
    s32 screenPosY;
    s32 screenPosZ;
    s32 screenVelX;
    s32 screenVelY;
    s32 screenVelZ;
    s32 scaleX;
    s32 scaleY;
    s16 angle;
    s16 unk_56;
    s32 priority;
    s32 unk_5c;
    s32 work0;
    s32 work1;
    s32 work2;
    s32 work3;
    s32 work4;
};
typedef struct { u8 unk_00[12]; }
 Unk_020bf4b4_Elem;
typedef struct { u16 r:5; u16 g:5; u16 b:5; u16 pad:1; }
 Unk_020bf77c_Col;
typedef struct { u8 minute; u8 hour; Unk_020bf77c_Col clearColor; Unk_020bf77c_Col clearColorNext; Unk_020bf77c_Col cloudyColor; Unk_020bf77c_Col cloudyColorNext; u16 blended; }
 Unk_020bf77c_Rec;
typedef struct { u8 pad0[6]; u16 a[5]; u8 pad1[6]; u16 b[5]; }
 Unk_020bf77c_Tbl;
typedef struct { u8 pad[0x10]; u8 shootingStarVisible; }
 Unk_020bfa08_Data;
typedef struct { u8 pad[0x24]; s32 level; s32 targetLevel; }
 Unk_020bf720_Data;
typedef struct { u8 pad[0x5c]; s32 position; u8 pad2[8]; s32 prevPosition; }
 Unk_020bfcd0_Obj;
typedef struct { u8 pad[4]; s32 state; u8 pad2[0x2c]; s32 posX; s32 posY; u8 pad3[0x18]; s32 scaleY; s16 angle; }
 Unk_020bfc48_Slot;
extern "C" {
u32 SkySprite_Release(void *);
}
extern "C" {
s32 SkySprite_AdvanceCrossing(void *, s32, s32, s32);
}
extern "C" {
s32 SkySprite_CheckShotHit(void *, s32, s32, s32);
}
extern "C" {
void SkyObjGfxSlot_SetGfx(void *, s32);
}
extern "C" {
void _ZN15SkyShotSequence12onBalloonHitEh(void *, s32);
}
extern "C" {
void SkySprite_RequestSeSustained(void *, s32);
}
extern "C" {
void SkySprite_RequestSe(void *, s32);
}
extern "C" {
void SkySprite_StartAnim(void *);
}
extern "C" {
s32 func_01ffcb0c(s32, s32);
}
extern "C" {
void VEC_Add(void *, void *, void *);
}
extern "C" {
void _ZN15SkyShotSequence13onBalloonFellEv(void *);
}
extern "C" {
void _ZN15SkyShotSequence9setTargetEiiih(void *, s32, s32, s32, s32);
}
extern "C" {
s32 Random_GlobalBelow(s32);
}
extern "C" {
void SkySprite_BeginCrossing(void *, s32, s32);
}
extern "C" {
void _ZN13SkyObjPalette13func_020bd758Ei(void *, s32);
}
extern "C" {
void _ZN13SkyObjPalette11setOverrideEiPt(void *, s32, void *);
}
extern "C" {
void Math_StepS32Alt(void *, s32, s32);
}
extern "C" {
void Clock_GetMinuteHour(void *);
}
extern "C" {
u32 Clock_GetSecond(void);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}
extern "C" {
s32 FX_Sqrt(s32);
}
extern "C" {
s32 FX_Div(s32, s32);
}
extern "C" {
s32 Math_Atan2(s32, s32);
}
extern "C" {
void SkySprite_RequestSeSustainedOn(void *, s32, s32);
}
extern "C" {
void Vec_Scale(void *, s32);
}
extern "C" {
BOOL _ZN10SpriteAnim10isFinishedEv(void *);
}
extern "C" {
s32 _ZN12Unk_020bc58c8findKindEi(void *, s32);
}
extern "C" {
BOOL SkySprite_FollowShootingStar(Unk_020bf4b4 *);
}
extern "C" {
void *PlayerActor_GetActor(s32);
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; u8 v[1]; } gSkySprites; } }
#define data_021f3010 n12::L_021f3010::gSkySprites.v
namespace L_021f4488 { extern "C" { extern struct S { u8 p[0x2fa8]; u8 v[1]; } gSkySprites; } }
#define data_021f4488 n12::L_021f4488::gSkySprites.v
extern "C" {
extern u32 gFrameCounter;
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } gSkySprites; } }
#define data_021f4398 n12::L_021f4398::gSkySprites.v
extern "C" {
extern u16 sMoonColors[];
}
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020bf720_Data v; } gWeatherManager; } }
#define data_021f1448 n12::L_021f1448::gWeatherManager.v
namespace L_021f4254 { extern "C" { extern struct S { u8 p[0x2d74]; Unk_020bf77c_Tbl v[1]; } gSkySprites; } }
#define data_021f4254 n12::L_021f4254::gSkySprites.v
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; Unk_020bfa08_Data v; } gSkySprites; } }
#define data_021f4420 n12::L_021f4420::gSkySprites.v
extern "C" {
extern s16 data_02135f44[];
}
extern "C" {
extern s32 sParticleTrailScales[];
}
extern "C" {
extern s32 sParticleAnimIds[];
}
extern "C" {
extern s32 sSnowParallax[];
}
extern "C" {
extern s32 sSnowFallSpeeds[];
}
extern "C" {
extern s32 sSnowAnimIds[];
}
extern "C" {
extern s32 sSnowSideToggle;
}
extern "C" {
extern Unk_020bf4b4 gSkySprites[];
}
extern "C" {
void SkySprite_ResetMoonPalette(void);
}
extern "C" {
BOOL SkySprite_CalcMoonPos(void *out);
}
extern "C" {
void SkySprite_UpdateMoonPalette(Unk_020bf4b4 *this_);
}
extern "C" {
void SkySprite_InitMoonPalette(Unk_020bf4b4 *this_);
}
extern "C" {
void SkySprite_FadeMoonClarity(Unk_020bf4b4 *this_);
}
extern "C" {
void SkySprite_SetMoonClarity(Unk_020bf4b4 *this_);
}
extern "C" {
void SkySprite_CalcMoonColors(Unk_020bf4b4 *this_);
}

extern "C" u32 SkySprite_EndBalloon(void *a);
extern "C" void SkySprite_UpdateBalloon(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitBalloon(Unk_020bf4b4 *this_, u32 arg);
extern "C" void SkySprite_EndMoon(Unk_020bf4b4 *this_);
extern "C" void SkySprite_UpdateMoon(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitMoon(Unk_020bf4b4 *this_);
extern "C" void SkySprite_ResetMoonPalette(void);
extern "C" void SkySprite_UpdateMoonPalette(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitMoonPalette(Unk_020bf4b4 *this_);
extern "C" void SkySprite_FadeMoonClarity(Unk_020bf4b4 *this_);
extern "C" void SkySprite_SetMoonClarity(Unk_020bf4b4 *this_);
extern "C" void SkySprite_CalcMoonColors(Unk_020bf4b4 *this_);
extern "C" BOOL SkySprite_CalcMoonPos(void *out_);
extern "C" void SkySprite_EndShootingStar(Unk_020bf4b4 *this_);
extern "C" void SkySprite_UpdateShootingStar(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitShootingStar(Unk_020bf4b4 *this_);
extern "C" void SkySprite_EndParticle(void *a);
extern "C" void SkySprite_UpdateParticle(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitParticle(Unk_020bf4b4 *this_, s32 arg);
extern "C" BOOL SkySprite_FollowShootingStar(Unk_020bf4b4 *this_);
extern "C" void SkySprite_EndSnowFlake(void *a);
extern "C" void SkySprite_UpdateSnowFlake(Unk_020bf4b4 *this_);
extern "C" void SkySprite_InitSnowFlake(Unk_020bf4b4 *this_, s32 arg);

extern "C" void SkySprite_InitSnowFlake(Unk_020bf4b4 *this_, s32 arg) {
    s32 a = Random_GlobalBelow(3);
    s32 b = Random_GlobalBelow(0x80);
    s32 g = sSnowSideToggle;
    s32 x = (g * b + 0x80) << 12;
    Unk_020bf4b4_Vec *pos, *vel;
    sSnowSideToggle = g * 0xffffffff;
    pos = (Unk_020bf4b4_Vec *)&this_->screenPosX;
    this_->screenPosX = x;
    pos->y = -0x14000;
    pos->z = 0;
    vel = (Unk_020bf4b4_Vec *)&this_->screenVelX;
    this_->screenVelX = 0;
    vel->y = sSnowFallSpeeds[a];
    vel->z = 0;
    this_->work0 = Random_GlobalBelow(0x300) + 0x180;
    this_->work1 = Random_GlobalBelow(0x10000);
    this_->work2 = a;
    this_->work3 = x;
    this_->work4 = Random_GlobalBelow(2) + 0x5000;
    this_->animSeq = sSnowAnimIds[a];
    this_->priority = 2;
    if (arg == 1) {
        this_->screenPosY = this_->screenPosY + (Random_GlobalBelow(0x1c1) << 12);
    }
}

extern "C" void SkySprite_UpdateSnowFlake(Unk_020bf4b4 *this_) {
    Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&this_->screenPosX;
    Unk_020bfcd0_Obj *o;
    s32 base, ang;
    VEC_Add(pos, &this_->screenVelX, pos);
    o = (Unk_020bfcd0_Obj *)PlayerActor_GetActor(4);
    if (o != NULL) {
        s32 dv = -(o->position - o->prevPosition);
        dv = (dv * sSnowParallax[this_->work2]) >> 12;
        dv += this_->work3;
        this_->work3 = dv;
    }
    base = this_->work3;
    ang = (s16)((s16)this_->work1 + this_->work0);
    this_->work1 = ang;
    { s32 tv = data_02135f44[((u16)ang >> 4) * 2]; s32 sc = this_->work4; pos->x = base + ((tv * sc) >> 12); }
    if (pos->y > 0x1d4000) {
        this_->state = 3;
    } else if (pos->x < -0x14000) {
        pos->x = pos->x + 0x11e000;
    } else if (pos->x > 0x114000) {
        pos->x = pos->x - 0x11e000;
    }
}

extern "C" void SkySprite_EndSnowFlake(void *a) { SkySprite_Release(a); }

extern "C" BOOL SkySprite_FollowShootingStar(Unk_020bf4b4 *this_) {
    Unk_020bfc48_Pad pad;
    Unk_020bf4b4 *p = &gSkySprites[_ZN12Unk_020bc58c8findKindEi(gSkySprites, 3)];
    BOOL result = FALSE;
    if (p != NULL && p->state == 2) {
        Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&p->screenPosX;
        s32 k = ((s32)((u32)(p->angle << 16) >> 16) >> 4) * 2;
        s32 d = FX_Div(0x10000, p->scaleY);
        s32 y = pos->y + func_01ffcb0c(data_02135f44[k + 1], d);
        s32 x = pos->x - func_01ffcb0c(data_02135f44[k], d);
        Unk_020bf4b4_Vec *out = (Unk_020bf4b4_Vec *)&this_->screenPosX;
        out->x = x;
        out->y = y;
        out->z = 0;
        result = TRUE;
    }
    return result;
}

extern "C" void SkySprite_InitParticle(Unk_020bf4b4 *this_, s32 arg) {
    s32 m = arg & 0xf;
    this_->animSeq = sParticleAnimIds[m];
    if (m == 1) {
        this_->priority = 3;
    } else {
        this_->priority = 2;
    }
    this_->work0 = arg;
    this_->work1 = 0;
    if (m == 1) {
        s32 v = sParticleTrailScales[0];
        this_->scaleX = v;
        this_->scaleY = v;
        if (!SkySprite_FollowShootingStar(this_)) {
            this_->state = 3;
        }
    }
}

extern "C" void SkySprite_UpdateParticle(Unk_020bf4b4 *this_) {
    s32 m = this_->work0 & 0xf;
    this_->work1 = this_->work1 + 1;
    if (m == 0) {
        Vec_Scale(&this_->screenVelX, 0xe66);
        VEC_Add(&this_->screenPosX, &this_->screenVelX, &this_->screenPosX);
        if (_ZN10SpriteAnim10isFinishedEv(&this_->anim)) {
            this_->state = 3;
        }
    } else if (m == 1) {
        s32 n = this_->work1;
        s32 v = sParticleTrailScales[n];
        if (n >= 0x17) {
            this_->state = 3;
        } else {
            this_->scaleX = v;
            this_->scaleY = v;
            *(u16 *)&this_->angle += 0xe39;
            if (!SkySprite_FollowShootingStar(this_)) {
                this_->state = 3;
            }
        }
    } else if (this_->work1 >= 6) {
        this_->state = 3;
    }
}

extern "C" void SkySprite_EndParticle(void *a) { SkySprite_Release(a); }

extern "C" void SkySprite_InitShootingStar(Unk_020bf4b4 *this_) {
    s32 ang, x, y, sn, cs, k, nx, ny;
    this_->scaleX = 0x1000;
    this_->scaleY = 0x800;
    if (Random_GlobalBelow(2) == 0) {
        x = (Random_GlobalBelow(0x3c) + 0xc4) << 12;
        y = 0;
    } else {
        x = 0x100000;
        y = Random_GlobalBelow(0x30) << 12;
    }
    ang = Math_Atan2((Random_GlobalBelow(0x17) + 0x80 << 12) - y, -x);
    k = ((u16)ang >> 4) * 2;
    sn = data_02135f44[k];
    cs = data_02135f44[k + 1];
    x -= cs * 0x23;
    y -= sn * 0x23;
    this_->screenPosX = x;
    this_->screenPosY = y;
    this_->screenPosZ = 0;
    this_->screenVelX = func_01ffcb0c(cs, 0x7800);
    this_->screenVelY = func_01ffcb0c(sn, 0x7800);
    this_->screenVelZ = 0;
    this_->angle = ang - 0x4000;
    this_->animSeq = 0x11;
    this_->priority = 3;
    data_021f4420.shootingStarVisible = 0;
    SkySprite_RequestSeSustainedOn(this_, 6, 0x801);
}

extern "C" void SkySprite_UpdateShootingStar(Unk_020bf4b4 *this_) {
    VEC_Add(&this_->screenPosX, &this_->screenVelX, &this_->screenPosX);
    s32 x = this_->screenPosX >> 12;
    BOOL out;
    s32 y = this_->screenPosY >> 12;
    if (y < -0x23 || y > 0xca || x < -0x23 || x > 0x123) {
        out = TRUE;
    } else {
        out = FALSE;
    }
    s32 in;
    if (this_->work0 == 0 && !out && y > 0 && y < 0xc0 && x > 0 && x < 0x100) {
        in = 1;
    } else {
        in = 0;
    }
    data_021f4420.shootingStarVisible = in;
    if (out) {
        this_->state = 3;
    }
}

extern "C" void SkySprite_EndShootingStar(Unk_020bf4b4 *this_) {
    data_021f4420.shootingStarVisible = 0;
    SkySprite_Release(this_);
}

extern "C" BOOL SkySprite_CalcMoonPos(void *out_) {
    s32 *out = (s32 *)out_;
    BOOL ok = TRUE;
    u8 d[4];
    u32 b, a, base, off, x;
    s32 r, y;
    Clock_GetMinuteHour(d);
    b = d[1];
    a = d[0];
    base = Clock_GetSecond();
    off = 0;
    if (b >= 0x13) {
        off = base + (a * 0x3c + (b - 0x13) * 0xe10);
    } else if (b < 4) {
        off = base + (b * 0xe10 + 0x4650 + a * 0x3c);
    } else {
        ok = FALSE;
    }
    if (ok) {
        x = _u32_div_f(off << 12, 0x7e90);
        r = func_01ffcb0c(0xffee0000, x) + 0x110000;
        y = func_01ffcb0c(x - 0x800, x - 0x800);
        y = FX_Sqrt(0x1000 - y);
        y = FX_Div(y - 0xddb, 0x225);
        out[0] = r;
        y <<= 4;
        y = -y;
        out[1] = y + 0x3c000;
        out[2] = 0;
    }
    return ok;
}

extern "C" void SkySprite_CalcMoonColors(Unk_020bf4b4 *this_) {
    Unk_020bf77c_Rec rec;
    Unk_020bf77c_Tbl *t0;
    Unk_020bf77c_Tbl *t1;
    s32 inv, v0, v1, v2, v3, v4, v5, w0, w1, t;
    u32 i;
    s32 r7, r5;
    Clock_GetMinuteHour(&rec);
    u32 idx = rec.hour;
    u32 mon = rec.minute;
    if (idx >= 0x13) idx -= 0x13; else idx += 5;
    t0 = &data_021f4254[idx];
    t1 = &data_021f4254[idx + 1];
    t = this_->work3;
    inv = 0x1000 - t;
    r7 = _s32_div_f(mon << 12, 60);
    r5 = 0x1000 - r7;
    for (i = 0; i < 5; i++) {
        s32 w2;
        *(u16 *)&rec.clearColor = t0->b[i];
        *(u16 *)&rec.clearColorNext = t1->b[i];
        *(u16 *)&rec.cloudyColor = t0->a[i];
        *(u16 *)&rec.cloudyColorNext = t1->a[i];
        v0 = func_01ffcb0c(rec.clearColor.r << 12, r5) + func_01ffcb0c(rec.clearColorNext.r << 12, r7);
        v1 = func_01ffcb0c(rec.clearColor.g << 12, r5) + func_01ffcb0c(rec.clearColorNext.g << 12, r7);
        v2 = func_01ffcb0c(rec.clearColor.b << 12, r5) + func_01ffcb0c(rec.clearColorNext.b << 12, r7);
        v3 = func_01ffcb0c(rec.cloudyColor.r << 12, r5) + func_01ffcb0c(rec.cloudyColorNext.r << 12, r7);
        v4 = func_01ffcb0c(rec.cloudyColor.g << 12, r5) + func_01ffcb0c(rec.cloudyColorNext.g << 12, r7);
        v5 = func_01ffcb0c(rec.cloudyColor.b << 12, r5) + func_01ffcb0c(rec.cloudyColorNext.b << 12, r7);
        w0 = func_01ffcb0c(v0, t) + func_01ffcb0c(v3, inv);
        w1 = func_01ffcb0c(v1, t) + func_01ffcb0c(v4, inv);
        w2 = func_01ffcb0c(v2, t) + func_01ffcb0c(v5, inv);
        rec.blended = (((w2 + 0x800) >> 12) << 10) | (((w0 + 0x800) >> 12) | (((w1 + 0x800) >> 12) << 5));
        sMoonColors[i] = rec.blended;
    }
}

extern "C" void SkySprite_SetMoonClarity(Unk_020bf4b4 *this_) {
    s32 s = data_021f1448.level;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    this_->work3 = f;
}

extern "C" void SkySprite_FadeMoonClarity(Unk_020bf4b4 *this_) {
    s32 v;
    s32 s = data_021f1448.targetLevel;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    v = this_->work3;
    Math_StepS32Alt(&v, f, 0x100);
    this_->work3 = v;
}

extern "C" void SkySprite_InitMoonPalette(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    SkySprite_SetMoonClarity(this_);
    SkySprite_CalcMoonColors(this_);
    for (u32 i = 0; i < 5; i++) {
        _ZN13SkyObjPalette11setOverrideEiPt(p, i + 10, &sMoonColors[i]);
    }
}

extern "C" void SkySprite_UpdateMoonPalette(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    SkySprite_FadeMoonClarity(this_);
    SkySprite_CalcMoonColors(this_);
    for (u32 i = 0; i < 5; i++) {
        _ZN13SkyObjPalette11setOverrideEiPt(p, i + 10, &sMoonColors[i]);
    }
}

extern "C" void SkySprite_ResetMoonPalette(void) {
    u8 *p = data_021f4398;
    for (u32 i = 0; i < 5; i++) {
        _ZN13SkyObjPalette13func_020bd758Ei(p, i + 10);
    }
}

extern "C" void SkySprite_InitMoon(Unk_020bf4b4 *this_) {
    if (SkySprite_CalcMoonPos(&this_->screenPosX)) {
        this_->animSeq = 0x12;
        this_->priority = 3;
        SkySprite_InitMoonPalette(this_);
    } else {
        this_->state = 3;
    }
}

extern "C" void SkySprite_UpdateMoon(Unk_020bf4b4 *this_) {
    if ((gFrameCounter & 0x7f) == 0) {
        if (!SkySprite_CalcMoonPos(&this_->screenPosX)) {
            this_->state = 3;
        }
        SkySprite_UpdateMoonPalette(this_);
    }
}

extern "C" void SkySprite_EndMoon(Unk_020bf4b4 *this_) {
    SkySprite_ResetMoonPalette();
    SkySprite_Release(this_);
}

extern "C" void SkySprite_InitBalloon(Unk_020bf4b4 *this_, u32 arg) {
    SkySprite_BeginCrossing(this_, Random_GlobalBelow(2) == 0 ? 1 : 0, 0x3e8);
    this_->animSeq = 1;
    this_->priority = 2;
    this_->work0 = 0;
    arg &= 1;
    this_->work1 = arg != 0 ? 1 : 0;
    this_->work2 = 0;
}

extern "C" void SkySprite_UpdateBalloon(Unk_020bf4b4 *this_) {
    s32 t;
    if (this_->work0 == 0) {
        if (SkySprite_AdvanceCrossing(this_, 0x1ec, 0x5000, 0x3e8)) {
            this_->state = 3;
        } else if (SkySprite_CheckShotHit(this_, 0xe000, 0x1a000, -0x3000)) {
            t = this_->gfxId + 1;
            SkyObjGfxSlot_SetGfx(data_021f3010 + this_->gfxSlot * 12, t);
            this_->gfxId = t;
            _ZN15SkyShotSequence12onBalloonHitEh(data_021f4488, this_->work1 != 0 ? 1 : 0);
            SkySprite_RequestSeSustained(this_, 0x7f8);
            this_->work0 = 1;
        } else {
            SkySprite_RequestSe(this_, 0x7f7);
        }
    } else if (this_->work0 == 1) {
        this_->animSeq = 0;
        SkySprite_StartAnim(this_);
        this_->screenVelX = 0;
        this_->screenVelY = -0x800;
        this_->screenVelZ = 0;
        this_->work0 = 2;
        this_->work2 = 0;
    } else {
        this_->screenVelY += 0x666;
        this_->screenVelY = func_01ffcb0c(this_->screenVelY, 0xfd7);
        VEC_Add(&this_->screenPosX, &this_->screenVelX, &this_->screenPosX);
        if (this_->screenPosY > 0xd0000) {
            _ZN15SkyShotSequence13onBalloonFellEv(data_021f4488);
            this_->state = 3;
        }
    }
    if (this_->work0 >= 1) {
        _ZN15SkyShotSequence9setTargetEiiih(data_021f4488, this_->screenPosX, this_->screenPosY, this_->scaleX, this_->dir == 0 ? 1 : 0);
    }
}

extern "C" u32 SkySprite_EndBalloon(void *a) { return SkySprite_Release(a); }

#undef data_021f3010
#undef data_021f4488
#undef data_021f4398
#undef data_021f1448
#undef data_021f4254
#undef data_021f4420
}

// ======== unk_020beb40.cpp ========
namespace n11 {
struct Unk_021f3010;
struct Unk_021f3010 { s32 unk_00; s32 unk_04; u8 unk_08; u8 unk_09; u8 pad[2]; };
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void VEC_Add(Unk_020be018_Vec *a, Unk_020be018_Vec *b, Unk_020be018_Vec *out);
}
extern "C" {
void Vec_Scale(Unk_020be018_Vec *v, s32 scale);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
s32 Random_GlobalBelow(s32 n);
}
extern "C" {
s32 _ZN10SpriteAnim13getFrameIndexEv(void *p);
}
extern "C" {
s32 _ZN10SpriteAnim10isFinishedEv(void *p);
}
extern "C" {
void _ZN10SpriteAnim5pauseEv(void *p);
}
extern "C" {
void _ZN10SpriteAnim7restartEv(void *p);
}
extern "C" {
s32 SkyObjGfxSlot_RefreshPalette(Unk_021f3010 *p, s32 v);
}
extern "C" {
void SkyObjGfxSlot_SetGfx(Unk_021f3010 *p, s32 v);
}
extern "C" {
void _ZN15SkyShotSequence9setTargetEiiih(void *p, s32 a, s32 b, s32 c, BOOL d);
}
extern "C" {
void _ZN15SkyShotSequence10onPeteFellEv(void *p);
}
extern "C" {
void _ZN15SkyShotSequence9onPeteHitEv(void *p);
}
extern "C" {
void _ZN15SkyShotSequence9onUfoFellEv(void *p);
}
extern "C" {
void _ZN15SkyShotSequence8onUfoHitEv(void *p);
}
extern "C" {
void EventWeekSlots_MarkTodaySeen(s32 a);
}
extern "C" {
s32 PlayerActor_GetLocalSessionSlot();
}
extern "C" {
s32 PlayerActor_GetBodyPos();
}
extern "C" {
void Town_PlaceGulliverShip(s32 a, BOOL b);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void *p, s32 a);
}
extern "C" {
s32 SkySprite_GetFireworkPalIndex(s32 a, s32 flag);
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; Unk_021f4398 v; } gSkySprites; } }
#define data_021f4398 n11::L_021f4398::gSkySprites.v
namespace L_021f4488 { extern "C" { extern struct S { u8 p[0x2fa8]; u8 v[1]; } gSkySprites; } }
#define data_021f4488 n11::L_021f4488::gSkySprites.v
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 gSkySprites[];
}
extern "C" {
extern Unk_020bf1d8_Vec gCameraLookAt;
}
extern "C" {
extern Unk_020bf1d8_Vec gVec3Zero;
}
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 data_020c8cbc;
}
extern "C" {
extern s32 sFireworkFlicker[];
}
extern "C" {
extern Unk_020bec40_Pair sFireworkColors[];
}
extern "C" {
extern s32 sFireworkScaleBig[];
}
extern "C" {
extern s32 sFireworkScaleSmall[];
}
extern "C" {
extern s32 sFireworkScaleBigLong[];
}
extern "C" {
extern s32 sFireworkScaleSmallLong[];
}
extern "C" {
extern s16 data_02135f44[];
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[1]; } gSkySprites; } }
#define data_021f3010 n11::L_021f3010::gSkySprites.v
extern "C" {
Unk_020be018 *_ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(void *tab, s32 a, s32 b, void *pos, s32 c);
}
extern "C" {
void SkySprite_SpawnHitParticle(Unk_020be018_Vec *pos, s32 scale, s32 speed);
}
extern "C" {
Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b);
}

extern "C" Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b);
extern "C" s32 SkySprite_GetFireworkPalIndex(s32 a, s32 flag);
extern "C" void SkySprite_SpawnHitParticle(Unk_020be018_Vec *pos, s32 scale, s32 speed);

}
void Unk_020be018::spawnUfoDebris()
{
    using namespace n11;
    if (work1 > 0) {
        if (work1 == 1) {
            s32 r4, scale, y, q, idx;
            work1 = Random_GlobalBelow(2) + 1;
            r4 = Random_GlobalBelow(2) + 2;
            scale = scaleX;
            q = FX_Div(Random_GlobalBelow(0x10) << 12, scale);
            idx = ((u16)(s16)Random_GlobalBelow(0x10000) >> 4) << 1;
            y = screenPos.y + func_01ffcb0c(q, data_02135f44[idx]);
            Unk_020be018_Vec pos;
            pos.x = screenPos.x + func_01ffcb0c(q, data_02135f44[idx + 1]);
            pos.y = y;
            pos.z = 0;
            Unk_020be018 *o = _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(gSkySprites, 2, 0x3c, &pos, r4 & 0xf);
            if (o) {
                o->scaleX = scale;
                o->scaleY = scale;
            }
        } else {
            work1 = work1 - 1;
        }
    }
}
namespace n11 {

}
void Unk_020be018::initUfo()
{
    using namespace n11;
    beginCrossing(Random_GlobalBelow(2) == 0 ? 1 : 0, 0x1000);
    animSeq = 0x16;
    priority = 2;
    _ZN8SaveData7setFlagEj(gSaveData, 9);
    work0 = 0;
    work1 = 0;
    work2 = 0;
}
namespace n11 {

}
void Unk_020be018::updateUfo()
{
    using namespace n11;
    if (work0 == 0) {
        if (advanceCrossing(0x385, 0x1000, 0xfa0)) {
            state = 3;
        } else if (checkShotHit(0x1a000, 0xc000, 0x5000)) {
            SkyObjGfxSlot_SetGfx(data_021f3010 + gfxSlot, 0x24);
            gfxId = 0x24;
            requestSeSustained(0x7fc);
            _ZN15SkyShotSequence8onUfoHitEv(data_021f4488);
            work0 = 1;
        } else {
            requestSe(0x7fb);
        }
    } else if (work0 == 1) {
        animSeq = 0x17;
        startAnim();
        screenVel.x = dir ? 0x2666 : -0x2666;
        screenVel.y = -0x399a;
        screenVel.z = 0;
        work0 = 2;
    } else if (work0 == 2) {
        if (_ZN10SpriteAnim10isFinishedEv(anim)) {
            SkyObjGfxSlot_SetGfx(data_021f3010 + gfxSlot, 0x25);
            gfxId = 0x25;
            work0 = 3;
            work1 = 1;
        }
    } else if (work0 == 3) {
        animSeq = 0x18;
        startAnim();
        work0 = 4;
        work2 = 0;
    } else if (work0 == 4) {
        if (screenPos.y > 0xd0000) {
            EventWeekSlots_MarkTodaySeen(0x44);
            PlayerActor_GetLocalSessionSlot();
            s32 obj = PlayerActor_GetBodyPos();
            Town_PlaceGulliverShip(obj, dir == 0 ? 1 : 0);
            _ZN15SkyShotSequence9onUfoFellEv(data_021f4488);
            state = 3;
        }
    }
    if ((s32)work0 >= 2) {
        Unk_020bf1d8_Vec v = gVec3Zero;
        s32 sc;
        if ((s32)work0 >= 4) {
            v.x = dir ? 0x19a : -0x19a;
            v.y = 0x19a;
            sc = 0xfd7;
        } else {
            v.y = 0x800;
            sc = 0x1000;
        }
        VEC_Add(&screenVel, (Unk_020be018_Vec *)&v, &screenVel);
        Vec_Scale(&screenVel, sc);
        VEC_Add(&screenPos, &screenVel, &screenPos);
    }
    if ((s32)work0 >= 1) {
        _ZN15SkyShotSequence9setTargetEiiih(data_021f4488, screenPos.x, screenPos.y, scaleX, dir == 0 ? 1 : 0);
    }
    spawnUfoDebris();
}
namespace n11 {

}
void Unk_020be018::endUfo()
{
    using namespace n11;
    release();
}
namespace n11 {

extern "C" void SkySprite_SpawnHitParticle(Unk_020be018_Vec *pos, s32 scale, s32 speed)
{
    Unk_020bf18c_Pad tmp;
    Unk_020be018 *o = _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(gSkySprites, 2, 0x3c, pos, 0);
    if (o) {
        o->scaleX = scale;
        o->scaleY = scale;
        o->screenVel.x = func_01ffcb0c(speed, 0x800);
        o->screenVel.y = 0;
        o->screenVel.z = 0;
    }
}

}
void Unk_020be018::initPete()
{
    using namespace n11;
    beginCrossing(gfxId == 0x28 ? 1 : 0, 0x8000);
    animSeq = 0x13;
    priority = 2;
    work0 = 0;
    work1 = 0;
}
namespace n11 {

}
void Unk_020be018::updatePete()
{
    using namespace n11;
    if (work0 == 0) {
        if (advanceCrossing(0x30a, 0x8000, -100)) {
            state = 3;
        } else if (checkShotHit(0x1b000, 0x15000, 0)) {
            s32 t = gfxId + 1;
            SkyObjGfxSlot_SetGfx(data_021f3010 + gfxSlot, t);
            gfxId = t;
            _ZN15SkyShotSequence9onPeteHitEv(data_021f4488);
            requestSeSustained(0x7ff);
            work0 = 1;
            work1 = 0;
        } else if (_ZN10SpriteAnim13getFrameIndexEv(anim) == 0) {
            if (work1++ == 0) requestSeSustained(0x7fe);
        } else {
            work1 = 0;
        }
    } else if (work0 == 1) {
        animSeq = 0x14;
        startAnim();
        _ZN10SpriteAnim5pauseEv(anim);
        screenVel.x = dir ? 0x3c00 : -0x3c00;
        screenVel.y = -0x4000;
        screenVel.z = 0;
        SkySprite_SpawnHitParticle(&screenPos, scaleX, screenVel.x);
        scaleX = func_01ffcb0c(scaleX, 0xe8c);
        scaleY = func_01ffcb0c(scaleY, 0xe8c);
        work0 = 2;
        work1 = 0;
    } else if (work0 == 2) {
        work1 = work1 + 1;
        if (work1 >= 1) {
            scaleX = func_01ffcb0c(scaleX, 0x119a);
            scaleY = func_01ffcb0c(scaleY, 0x119a);
            work0 = 6;
            work1 = 0;
            _ZN10SpriteAnim7restartEv(anim);
        }
    }
    if ((s32)work0 >= 6) {
        screenVel.y += 0x59a;
        Vec_Scale(&screenVel, 0x1000);
        VEC_Add(&screenPos, &screenVel, &screenPos);
    }
    if ((s32)work0 >= 6 && screenPos.y > 0xd0000) {
        _ZN15SkyShotSequence10onPeteFellEv(data_021f4488);
        EventWeekSlots_MarkTodaySeen(0x45);
        state = 3;
    }
    if ((s32)work0 >= 1) {
        _ZN15SkyShotSequence9setTargetEiiih(data_021f4488, screenPos.x, screenPos.y, scaleX, dir == 0 ? 1 : 0);
    }
}
namespace n11 {

}
void Unk_020be018::endPete()
{
    using namespace n11;
    release();
}
namespace n11 {

}
void Unk_020be018::initLightning()
{
    using namespace n11;
    s32 a = (Random_GlobalBelow(0x80) * (Random_GlobalBelow(2) * 2 - 1) + 0x80) << 12;
    s32 c = (Random_GlobalBelow(0x50) + 0x50) << 12;
    Unk_020be018_Vec *p = &screenPos;
    screenPos.x = a;
    p->y = c;
    p->z = 0;
    animSeq = Random_GlobalBelow(8) + 8;
    priority = 2;
}
namespace n11 {

}
void Unk_020be018::updateLightning()
{
    using namespace n11;
    if (_ZN10SpriteAnim10isFinishedEv(anim)) state = 3;
}
namespace n11 {

}
void Unk_020be018::endLightning()
{
    using namespace n11;
    release();
}
namespace n11 {

extern "C" s32 SkySprite_GetFireworkPalIndex(s32 a, s32 flag)
{
    s32 r = 0xf;
    if (flag != 0) {
        r = 0;
    } else if (a == 0) {
        r = 2;
    } else if (a == 1) {
        r = 4;
    } else if (a == 2) {
        r = 6;
    } else if (a == 3) {
        r = 8;
    }
    return r;
}

extern "C" Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b)
{
    Unk_020bee28_V v = gCameraLookAt;
    s32 base = data_020c8cb8;
    s32 d = v.z - base;
    s32 cnt = data_020c8cbc;
    s32 h = _s32_div_f(cnt << 2, 2);
    s32 p = FX_Div((v.x - cnt * 3) << 4, h);
    s32 q = FX_Div(d, base << 2);
    if (p < -0x10000) p = -0x10000;
    else if (p > 0x10000) p = 0x10000;
    if (q < 0) q = 0;
    else if (q > 0x1000) q = 0x1000;
    q = func_01ffcb0c(q - 0x1000, q - 0x1000);
    s32 e = 0x1000;
    e -= q;
    p = -p;
    s32 w = (e - 0x800) << 5;
    s32 c;
    if (b < 0) c = 0;
    else if (b > 0xbf000) c = 0xbf000;
    else c = b;
    s32 m = func_01ffcb0c(w, FX_Div(0xbf000 - c, 0xbf000));
    b = b + m;
    return Unk_020bee28_Vec2(a + p, b);
}

}
void Unk_020be018::updateFireworkPalette()
{
    using namespace n11;
    s32 n = work1;
    s32 t, lo, hi, r, g, inv;
    if (n < 0x10) {
        t = 0;
    } else if (n < 0x1b) {
        t = _s32_div_f((n - 0x10) << 12, 11);
    } else {
        t = 0x1000;
    }
    u32 v = work0;
    s32 k = (v >> 8) & 3;
    BOOL f = ((v >> 31) & 1) != 0;
    lo = SkySprite_GetFireworkPalIndex(k, f);
    hi = lo + 1;
    s32 i1, i0;
    i0 = 0;
    i1 = i0;
    if (n >= 0xb) {
        s32 x = n & 2;
        if (x == 0) i0 = 1;
        if (x != 0) i1 = 1;
        else i1 = 0;
    }
    s32 *p0 = sFireworkFlicker + i0;
    s32 *p1 = sFireworkFlicker + i1;
    if (k >= 4 || lo >= 15 || hi >= 15) return;
    Unk_020bec40_Pair *e = &sFireworkColors[k];
    r = 0; g = 0; inv = 0x1000 - t;
    r = func_01ffcb0c(sFireworkColors[k].a.r << 12, inv) + func_01ffcb0c(e->b.r << 12, t);
    g = func_01ffcb0c(sFireworkColors[k].a.g << 12, inv) + func_01ffcb0c(e->b.g << 12, t);
    s32 b = func_01ffcb0c(sFireworkColors[k].a.b << 12, inv) + func_01ffcb0c(e->b.b << 12, t);
    u32 B1, G1, R0, R1, B0, G0;
    s32 r0 = func_01ffcb0c(r, *p0);
    s32 g0 = func_01ffcb0c(g, *p0);
    s32 b0 = func_01ffcb0c(b, *p0);
    s32 r1 = func_01ffcb0c(r, *p1);
    s32 g1 = func_01ffcb0c(g, *p1);
    s32 b1 = func_01ffcb0c(b, *p1);
    G0 = (g0 + 0x800) >> 12;
    B0 = (b0 + 0x800) >> 12;
    R1 = (r1 + 0x800) >> 12;
    G1 = (g1 + 0x800) >> 12;
    B1 = (b1 + 0x800) >> 12;
    R0 = (r0 + 0x800) >> 12;
    if (R0 > 0x1f) R0 = 0x1f;
    if (G0 > 0x1f) G0 = 0x1f;
    if (B0 > 0x1f) B0 = 0x1f;
    if (R1 > 0x1f) R1 = 0x1f;
    if (G1 > 0x1f) G1 = 0x1f;
    if (B1 > 0x1f) B1 = 0x1f;
    u16 col[2];
    col[0] = R0 | (G0 << 5) | (B0 << 10);
    col[1] = R1 | (G1 << 5) | (B1 << 10);
    s32 idx = gfxSlot;
    s32 u8v = gfxId;
    Unk_021f4398 *const pal = &data_021f4398;
    pal->setOverride(lo, &col[0]);
    pal->setOverride(hi, &col[1]);
    SkyObjGfxSlot_RefreshPalette(data_021f3010 + idx, u8v);
}
namespace n11 {

}
void Unk_020be018::releaseFireworkPalette()
{
    using namespace n11;
    u32 v = work0;
    BOOL f = ((v >> 31) & 1) != 0;
    s32 lo = SkySprite_GetFireworkPalIndex((v >> 8) & 3, f);
    s32 hi = lo + 1;
    if (lo < 15) data_021f4398.func_020bd758(lo);
    if (hi < 15) data_021f4398.func_020bd758(hi);
}
namespace n11 {

}
s32 Unk_020be018::riseDistance(s32 a)
{
    using namespace n11;
    return a << 14;
}
namespace n11 {

}
void Unk_020be018::updateFireworkScale(s32 a)
{
    using namespace n11;
    s32 max;
    s32 *tab;
    u32 v = work0;
    BOOL f = ((v >> 30) & 1) != 0;
    if ((v >> 31) & 1) {
        if (f) { tab = sFireworkScaleBigLong; max = 0xb0; }
        else { tab = sFireworkScaleBig; max = 0x24; }
    } else {
        if (f) { tab = sFireworkScaleSmallLong; max = 0xb0; }
        else { tab = sFireworkScaleSmall; max = 0x24; }
    }
    if (a < 0) a = _ZN10SpriteAnim13getFrameIndexEv(anim);
    if (a < 0) max = 0;
    else if (a <= max) max = a;
    s32 x = tab[max];
    scaleX = x;
    scaleY = x;
}
namespace n11 {

}
void Unk_020be018::initFirework(u32 a)
{
    using namespace n11;
    s32 id = (a & 0xf) + 0x1d;
    animSeq = id;
    priority = 2;
    work0 = a;
    work1 = 0;
    work2 = 0;
    BOOL r = FALSE;
    s32 t = id - 0x21;
    if ((u32)t <= 9 && ((1 << t) & 0x249)) r = TRUE;
    if (r) {
        initFireworkShell(a);
    } else {
        initFireworkBurst(a);
    }
}
namespace n11 {

#undef data_021f4398
#undef data_021f4488
#undef data_021f3010
}

// ======== unk_020be204.cpp ========
namespace n10 {
extern "C" {
s32 _ZN12Unk_020be01812riseDistanceEi(s32 a, s32 b);
}
extern "C" {
void SkySprite_ProjectFirework(Unk_020be204_Vec *v, s32 a, s32 b, BOOL c);
}
extern "C" {
void VEC_Add(Unk_020be204_Vec *a, Unk_020be204_Vec *b, Unk_020be204_Vec *c);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void Vec_Scale(Unk_020be204_Vec *v, s32 a);
}
extern "C" {
u32 Random_GlobalBelow(u32 n);
}
extern "C" {
s32 Random_GlobalBelow2(s32 n);
}
extern "C" {
void _ZN10SpriteAnimC1Ev(void *p);
}
extern "C" {
s32 _ZN10SpriteAnim10isFinishedEv(void *p);
}
extern "C" {
void _ZN11SkySePlayer16requestSustainedEiiP17Unk_020bd0a4_Vec3(void *a, u32 b, u32 c, void *d);
}
extern "C" {
Unk_020bca5c_Rec *_ZN12Unk_020bc58c14getShotRequestEi(void *a, u32 b);
}
extern "C" {
Unk_020be204_Vec Sky_ProjectToScreenX(Unk_020be204_Vec *v);
}
extern "C" {
s32 PlayerActor_GetLocalSessionSlot();
}
extern "C" {
s32 _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(void *a, u32 b, u32 c, void *d, u32 e);
}
extern "C" {
void SceneLights_StartFlash(u32 a);
}
extern "C" {
extern s8 sBirdDelays[];
}
extern "C" {
extern u32 kFireworkBurstFlag29;
}
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 gCameraLookAt[];
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; u8 v[1]; } gSkySprites; } }
#define data_021f44ac n10::L_021f44ac::gSkySprites.v
extern "C" {
extern u8 gVec3Zero[];
}
extern "C" {
extern u8 gSkySprites[];
}
static inline void Unk_020be204_Set(Unk_020be204_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
static inline BOOL Unk_020be204_Outside(Unk_020be204_Vec *v) {
    BOOL r = v->y < -0xa000 || v->y > 0xca000 || v->x < -0xa000 || v->x > 0x10a000;
    return r;
}
static inline BOOL Unk_020be204_Bit(u32 v, u32 n) {
    BOOL r = ((v >> n) & 1) ? TRUE : FALSE;
    return r;
}
static inline u32 Unk_020be820_Nib(s32 v) {
    return (v - 0x1d) & 0xf;
}
static inline u32 Unk_020be820_NibE(Unk_020be820_E v) { return (v - 0x1d) & 0xf; }

}
void Unk_020be204::initFireworkBurst(u32 a) {
    using namespace n10;
    BOOL b = Unk_020be204_Bit(a, 31);
    updateFireworkScale(0);
    work3 = screenPos.x;
    work4 = screenPos.y;
    SkySprite_ProjectFirework(&screenPos, work3, work4, b);
    u32 r2 = b ? 0x804 : 0x803;
    u32 m = (a >> 8) & 3;
    requestSeSustainedOn(b ? 1 : m + 2, r2);
    if (b) {
        cullRadius = 4;
        SceneLights_StartFlash(m + 5);
    } else {
        SceneLights_StartFlash(m + 1);
    }
}
namespace n10 {

}
void Unk_020be204::initFireworkShell(u32 a) {
    using namespace n10;
    BOOL b = Unk_020be204_Bit(a, 31);
    s32 x, y;
    if (b) {
        x = Random_GlobalBelow(0x60) + 0x50;
        if ((a >> 28) & 1) {
            y = 0;
        } else {
            y = Random_GlobalBelow(0x20);
        }
        y += 0x52;
    } else {
        x = Random_GlobalBelow(0xa0) + 0x30;
        y = Random_GlobalBelow(0x60) + 0x32;
    }
    work3 = x << 12;
    work4 = 0xbf000;
    screenPos.z = y << 12;
    SkySprite_ProjectFirework(&screenPos, work3, work4, b);
    screenVel.x = 0;
    screenVel.y = -0x3800;
    screenVel.z = 0;
    scaleY = 0xa000;
    u32 m = (a >> 8) & 3;
    if (b) {
        m = 1;
    } else {
        m += 2;
    }
    requestSeSustainedOn(m, 0x802);
}
namespace n10 {

}
void Unk_020be204::updateFirework() {
    using namespace n10;
    work1++;
    u32 t = animSeq;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (m) {
        updateFireworkShell();
    } else {
        updateFireworkBurst();
    }
}
namespace n10 {

}
void Unk_020be204::updateFireworkBurst() {
    using namespace n10;
    u32 flags = work0;
    BOOL r4 = ((flags >> 30) & 1) ? FALSE : TRUE;
    BOOL r6 = Unk_020be204_Bit(flags, 31);
    if (_ZN10SpriteAnim10isFinishedEv(&anim)) {
        if (r4) {
            releaseFireworkPalette();
        }
        state = 3;
    } else {
        updateFireworkScale(-1);
        SkySprite_ProjectFirework(&screenPos, work3, work4, r6);
        if (r4) {
            updateFireworkPalette();
        }
    }
    if (work1 == 0x1d) {
        work0 |= kFireworkBurstFlag29;
    }
}
namespace n10 {

}
void Unk_020be204::updateFireworkShell() {
    using namespace n10;
    s32 lim;
    u32 flags = work0;
    BOOL b31 = Unk_020be204_Bit(flags, 31);
    BOOL done = FALSE;
    if (hidden) {
        work2++;
        if ((s32)work2 > 6) {
            done = TRUE;
        }
    } else {
        lim = 0xc0000 - screenPos.z;
        s32 r = _ZN12Unk_020be01812riseDistanceEi(lim, work1);
        if (r <= 0x20000) {
            scaleY = FX_Div(0x20000, r);
            work4 = 0xc0000 - _s32_div_f(r, 2);
        } else {
            if (r < lim) {
                scaleY = 0x1000;
            } else {
                scaleY = func_01ffcb0c(scaleY, 0x14cd);
                if (scaleY >= 0xa000) {
                    scaleY = 0xa000;
                    hidden = 1;
                }
                r = lim;
            }
            work4 = 0xc0000 - (r - FX_Div(0x10000, scaleY));
        }
        SkySprite_ProjectFirework(&screenPos, work3, work4, b31);
    }
    if (done) {
        u32 m, a;
        state = 3;
        m = (flags >> 8) & 3;
        if ((work0 >> 31) & 1) {
            m = (m & 3) << 8;
            a = m | 0x80000000;
            m |= 0xc0000001;
        } else {
            s32 c = animSeq;
            m = (m & 3) << 8;
            a = m | Unk_020be820_NibE((Unk_020be820_E)(c - 2));
            m |= Unk_020be820_NibE((Unk_020be820_E)(c - 1)) | 0x40000000;
        }
        Unk_020be204_Vec v;
        Unk_020be204_Set(&v, work3, screenPos.z - 0x2000, 0);
        _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(gSkySprites, 9, 0x3c, &v, a);
        _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(gSkySprites, 9, 0x3c, &v, m);
    }
}
namespace n10 {

}
void Unk_020be204::endFirework() {
    using namespace n10;
    u32 t = animSeq;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (!m && !((work0 >> 30) & 1)) {
        releaseFireworkPalette();
    }
    release();
}
namespace n10 {

}
void Unk_020be204::initRainbow() {
    using namespace n10;
    screenPos.x = 0xb0000;
    screenPos.y = 0x67000;
    animSeq = 0x15;
    priority = 3;
}
namespace n10 {

}
void Unk_020be204::updateRainbow() {
    using namespace n10;
}
namespace n10 {

}
void Unk_020be204::endRainbow() {
    using namespace n10;
    release();
}
namespace n10 {

}
void Unk_020be204::initShot(u32 a) {
    using namespace n10;
    Unk_020bca5c_Rec *rec = _ZN12Unk_020bc58c14getShotRequestEi(gSkySprites, a & 0xf);
    s32 id;
    animSeq = 0x2d;
    priority = 2;
    work0 = 0x18;
    id = rec->playerSlot;
    work1 = id;
    Unk_020be204_Vec *pos = &rec->pos;
    const Unk_020be204_Vec &vt = Sky_ProjectToScreenX(pos);
    Unk_020be204_Vec *p34 = &screenPos;
    p34->x = vt.x;
    p34->y = 0xc5000;
    p34->z = 0;
    Unk_020be204_Vec *p40 = &screenVel;
    p40->x = 0;
    p40->y = -0xc000;
    p40->z = 0;
    s32 lim = data_020c8cb8 * 2;
    if (id == PlayerActor_GetLocalSessionSlot() && pos->z < lim) {
        localShot = 1;
    }
    s32 d = pos->z - gCameraLookAt[2];
    BOOL far = (d < -0x14000 || d > 0xf000) ? TRUE : FALSE;
    a |= far << 31;
    if (far || screenPos.y >= 0xc0000) {
        hidden = 1;
    }
    work2 = a;
}
namespace n10 {

}
void Unk_020be204::updateShot() {
    using namespace n10;
    u32 flags = work2;
    work0--;
    if ((s32)work0 < 0) {
        Unk_020be204_Vec *pos = &screenPos;
        Unk_020be204_Vec *vel = &screenVel;
        if ((s32)work0 == -2) {
            u32 t = (flags >> 4) & 0xf;
            if (t == 1) {
                vel->x = 0x2800;
            } else if (t == 2) {
                vel->x = -0x2800;
            }
        }
        VEC_Add(pos, vel, pos);
        if (Unk_020be204_Outside(pos) || hit) {
            state = 3;
        }
    }
    if (hidden && !((flags >> 31) & 1) && screenPos.y < 0xc0000) {
        hidden = 0;
    }
}
namespace n10 {

}
void Unk_020be204::endShot() {
    using namespace n10;
    release();
}
namespace n10 {

}
void Unk_020be204::initBird(u32 a) {
    using namespace n10;
    work0 = a;
    work1 = sBirdDelays[a & 3] + 0x14;
    animSeq = 0x2c;
    priority = 2;
    s32 y = (Random_GlobalBelow(0x38) + 0x90) << 12;
    screenPos.x = -0x8000;
    screenPos.y = y;
    screenPos.z = 0;
    screenVel.x = 0x1000;
    screenVel.y = 0x2000;
    screenVel.z = 0;
    screenVel.x += Random_GlobalBelow2(0x8000);
    screenVel.y -= Random_GlobalBelow2(0x2000);
    work3 = -0x666;
    work4 = 0xcd;
    work3 += 0x8cd;
    work4 -= 0x666;
}
namespace n10 {

}
void Unk_020be204::updateBird() {
    using namespace n10;
    if (work1 > 0) {
        work1--;
        if (work1 <= 0 && (work0 & 3) == 0) {
            _ZN11SkySePlayer16requestSustainedEiiP17Unk_020bd0a4_Vec3(data_021f44ac, 7, 0x805, gVec3Zero);
        }
    } else {
        Unk_020be204_Vec *pos = &screenPos;
        Unk_020be204_Vec *vel = &screenVel;
        vel->x += work3;
        vel->y += work4;
        Vec_Scale(vel, 0xfc3);
        VEC_Add(pos, vel, pos);
        if (Unk_020be204_Outside(pos)) {
            state = 3;
        }
    }
}
namespace n10 {

}
void Unk_020be204::endBird() {
    using namespace n10;
    release();
}
namespace n10 {

}
Unk_020be204 *Unk_020be204::construct() {
    using namespace n10;
    _ZN10SpriteAnimC1Ev(&anim);
    clear();
    resetFree();
    return this;
}
namespace n10 {

}
void Unk_020be204::clear() {
    using namespace n10;
    u32 z = 0;
    u32 m = ~z;
    scaleX = 0x1000;
    scaleY = 0x1000;
    screenPos.x = 0;
    screenPos.y = 0;
    screenPos.z = 0;
    screenVel.x = 0;
    screenVel.y = 0;
    screenVel.z = 0;
    angle = 0;
    trackX = 0;
    wavePhase = 0;
    dir = 1;
    localShot = 0;
    hit = 0;
    hidden = 0;
    hFlip = 0;
    vFlip = 0;
    priority = m;
    cullRadius = 0;
    *(s8 *)&palette = m;
    work0 = 0;
    work1 = 0;
    work2 = 0;
    work3 = 0;
    work4 = 0;
}
namespace n10 {

}
void Unk_020be204::resetFree() {
    using namespace n10;
    kind = 0xd;
    state = 0;
    gfxId = 0x34;
    animSeq = 0x2e;
    gfxSlot = 5;
    scaleX = 0x1000;
    scaleY = 0x1000;
    angle = 0;
}
namespace n10 {

}
namespace n00 {
extern "C" {
const u32 sSkyObjGfxTable[208] = {0x0, 0xffff0000, 0x0, 0xc00, 0x0, 0xffff000c, 0x0, 0xc00, 0x0, 0xffff008c, 0x0,
    0xc00, 0x0, 0x200ffff, 0x1, 0xc00, 0x0, 0x204ffff, 0x1, 0xc00, 0x0, 0x208ffff, 0x1, 0xc00, 0x0, 0x20cffff,
    0x1, 0xc00, 0x0, 0x210ffff, 0x1, 0xc00, 0x0, 0x214ffff, 0x1, 0xc00, 0x0, 0x218ffff, 0x1, 0xc00, 0x0,
    0x21cffff, 0x1, 0xc00, 0x0, 0x280ffff, 0x1, 0xc00, 0x0, 0x284ffff, 0x1, 0xc00, 0x0, 0x288ffff, 0x1, 0xc00,
    0x0, 0x28cffff, 0x1, 0xc00, 0x0, 0x290ffff, 0x1, 0xc00, 0x0, 0x294ffff, 0x1, 0xc00, 0x0, 0x298ffff, 0x1,
    0xc00, 0x0, 0x29cffff, 0x1, 0xc00, 0x0, 0x300ffff, 0x1, 0xc00, 0x0, 0x304ffff, 0x1, 0xc00, 0x0, 0x308ffff,
    0x1, 0xc00, 0x0, 0x30cffff, 0x1, 0xc00, 0x0, 0x310ffff, 0x1, 0xc00, 0x0, 0x314ffff, 0x1, 0xc00, 0x0,
    0x318ffff, 0x1, 0xc00, 0x0, 0x31cffff, 0x1, 0xc00, 0x0, 0x380ffff, 0x1, 0xc00, 0x0, 0x384ffff, 0x1, 0xc00,
    0x0, 0x388ffff, 0x1, 0xc00, 0x0, 0x38cffff, 0x1, 0xc00, 0x1, 0x2800200, 0x2, 0xe04, 0x1, 0x2880208, 0x2,
    0xe04, 0x1, 0x3800300, 0x2, 0xe0d, 0x1, 0x3880308, 0x2, 0xe0d, 0x1, 0x800000, 0x2, 0xe02, 0x1, 0x880008, 0x2,
    0xe02, 0x1, 0x900010, 0x2, 0xe02, 0x1, 0x1800100, 0x2, 0xe03, 0x1, 0x1880108, 0x2, 0xe03, 0x1, 0x1900110,
    0x2, 0xe03, 0x1, 0x1980118, 0x2, 0xe03, 0x0, 0x1800100, 0x2, 0xc00, 0x0, 0xffff010c, 0x0, 0xd09, 0x0,
    0x1900110, 0x2, 0xd09, 0x0, 0x1980118, 0x2, 0xd09, 0x0, 0x800004, 0x4, 0xd01, 0x1, 0xffff0210, 0x0, 0xe03,
    0x2, 0xffffffff, 0x6, 0xffff, 0x2, 0xffffffff, 0x6, 0xffff, 0x2, 0xffffffff, 0x6, 0xffff, 0x0, 0xffff0010,
    0x0, 0xc00};
const u32 sSkyNextCloudBgLayer[1] = {0x206};
void *data_020e6124[132] = {0, (void *)0x2, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, (void *)0x10000, (void *)data_020e49f4, (void *)0x1, (void *)0x20000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x20000, (void *)data_020e49f4, (void *)0x1, (void *)0x30000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x30000, (void *)data_020e49f4, (void *)0x1, (void *)0x40000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x40000, (void *)data_020e49f4, (void *)0x1, (void *)0x50000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x50000, (void *)data_020e49f4, (void *)0x1, (void *)0x60000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x60000, (void *)data_020e49f4, (void *)0x1, (void *)0x60000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x70000, (void *)data_020e49f4, (void *)0x1, (void *)0x70000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x80000, (void *)data_020e49f4, (void *)0x1, (void *)0x80000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x90000, (void *)data_020e49f4, (void *)0x1, (void *)0x90000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49f4, (void *)0x1, (void *)0xa0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49f4, (void *)0x1, (void *)0xb0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49f4, (void *)0x1, (void *)0xc0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49f4, (void *)0x1, (void *)0xc0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49f4, (void *)0x1, (void *)0xd0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49f4, (void *)0x1, (void *)0xe0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49f4, (void *)0x1, (void *)0xe0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49f4, (void *)0x1, (void *)0xf0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49f4, (void *)0x1, (void *)0xf0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4c24[4] = {0x91f880e0, 0x9e, 0x91f88000, 0xffff011e};
}
}
namespace n10 {
}
void Unk_020be204::initByKind(u32 a) {
    using namespace n10;
    static void (Unk_020be204::*tbl[13])(u32) = {
        *(void (Unk_020be204::**)(u32))n00::data_020e4a4c, *(void (Unk_020be204::**)(u32))n00::data_020e481c, *(void (Unk_020be204::**)(u32))n00::data_020e4714,
        *(void (Unk_020be204::**)(u32))n00::data_020e4a34, *(void (Unk_020be204::**)(u32))n00::data_020e48b4, *(void (Unk_020be204::**)(u32))n00::data_020e471c,
        *(void (Unk_020be204::**)(u32))n00::data_020e48fc, *(void (Unk_020be204::**)(u32))n00::data_020e46f4, *(void (Unk_020be204::**)(u32))n00::data_020e480c,
        *(void (Unk_020be204::**)(u32))n00::data_020e4a04, *(void (Unk_020be204::**)(u32))n00::data_020e468c,
        *(void (Unk_020be204::**)(u32))n00::data_020e47ac, *(void (Unk_020be204::**)(u32))n00::data_020e473c,
    };
    void (Unk_020be204::*fn)(u32) = tbl[kind];
    if (fn) {
        (this->*fn)(a);
    }
}
namespace n10 {

}
namespace n00 {
extern "C" {
const u32 data_020d1148[12] = {0xcb00d2, 0xbb00c3, 0xb400b4, 0xd200b4, 0x10400f0, 0x12c0118, 0x1400140,
    0x1400140, 0x1400140, 0x1400140, 0x11b0140, 0xee00ff};
u32 data_020e4644[2] = {0x81f000f0, 0xffff309c};
void *data_020e4804[2] = {(void *)SkySprites_FireworksPatternAct10, 0};
const u32 sSnowAnimIds[3] = {0x5, 0x6, 0x7};
u32 data_020e4c34[4] = {0x51fc80e0, 0x9d, 0x51fc8000, 0xffff011d};
const u8 sSkyObjPalOverrideSlots[15] = {0xde, 0xdf, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xcb, 0xcc, 0xcd, 0xce,
    0xcf};
void *data_020e4d70[5] = {(void *)data_020e4fe8, (void *)data_020e5008, (void *)data_020e5028,
    (void *)data_020e5048, (void *)data_020e5048};
const u32 data_020d1178[12] = {0x8f0096, 0x800087, 0x780078, 0x960078, 0xbc00b4, 0xc100c3, 0xd200d2, 0xd200d2,
    0xd200d2, 0xd200d2, 0xc300d2, 0xa500b4};
void *data_020e49dc[2] = {(void *)_ZN12Unk_020be20410updateBirdEv, 0};
void *data_020e4ae8[3] = {(void *)data_020e4864, (void *)0x4, 0};
u32 data_020e4c54[4] = {0x71fc8000, 0x9d, 0x71fc80e0, 0xffff011d};
u32 data_020e497c[2] = {0x81f000f0, 0xffff211c};
void *data_020e49ac[2] = {(void *)_ZN15SkyShotSequence10actUfoFallEv, 0};
void *data_020e5258[12] = {(void *)data_020e49a4, (void *)0x1, 0, (void *)data_020e4a1c, (void *)0x1, 0,
    (void *)data_020e486c, (void *)0x1, 0, (void *)data_020e477c, (void *)0x1, 0};
const u32 sFireworkShellTypes[4] = {0x21, 0x24, 0x27, 0x2a};
u32 sSnowSideToggle[1] = {0x1};
const u32 sWeatherHourTable[192] = {0x0, 0x101, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1010000, 0x1010101, 0x1, 0x0, 0x0,
    0x0, 0x1010100, 0x10101, 0x0, 0x1010101, 0x1, 0x1010100, 0x1010101, 0x0, 0x0, 0x1000000, 0x1010101,
    0x1010101, 0x1010000, 0x1, 0x0, 0x1010100, 0x1010101, 0x2010101, 0x1020202, 0x1010101, 0x1010101, 0x1010101,
    0x1020202, 0x1010101, 0x1010101, 0x1010202, 0x1010101, 0x1010101, 0x2020202, 0x2020101, 0x2010102, 0x2020202,
    0x1010102, 0x2020201, 0x2020202, 0x1020202, 0x2020202, 0x1020202, 0x2010101, 0x2020202, 0x3030202, 0x2020203,
    0x2020303, 0x2020202, 0x2020202, 0x2020202, 0x1020203, 0x3030302, 0x2030303, 0x3030202, 0x2020203, 0x3030302,
    0x2030303, 0x2030302, 0x3030202, 0x2030303, 0x3020202, 0x3030303, 0x3030303, 0x3030203, 0x3030203, 0x3030303,
    0x2020303, 0x3030303, 0x4030303, 0x4030304, 0x3040404, 0x3030303, 0x3030202, 0x3030303, 0x4040403, 0x4040404,
    0x4030304, 0x4040404, 0x3030304, 0x3040404, 0x4040404, 0x4040404, 0x4040404, 0x3030404, 0x3020203, 0x4040303,
    0x2020202, 0x1010102, 0x1010101, 0x2020101, 0x2020202, 0x3020202, 0x1010101, 0x1010101, 0x3020201, 0x2020203,
    0x2020202, 0x2020202, 0x1010000, 0x2020201, 0x2020202, 0x2020202, 0x3030302, 0x2020202, 0x2030303, 0x2020202,
    0x1010102, 0x1010101, 0x1000000, 0x2010101, 0x2020203, 0x2030202, 0x1010101, 0x1010101, 0x1010101, 0x1010101,
    0x2030202, 0x1010202, 0x101, 0x0, 0x1010000, 0x10101, 0x1, 0x3010000, 0x1010101, 0x1010101, 0x1010101,
    0x1010101, 0x0, 0x1030101, 0x1010101, 0x1010101, 0x1010101, 0x1010101, 0x0, 0x1000000, 0x1020401, 0x0, 0x0,
    0x10100, 0x101, 0x1010100, 0x1010204, 0x1010101, 0x1010101, 0x1010101, 0x2010202, 0x3030202, 0x3040403,
    0x3030303, 0x3030303, 0x3030303, 0x2020202, 0x2030303, 0x3030202, 0x2030303, 0x3030303, 0x2020303, 0x2020202,
    0x2020202, 0x3030303, 0x3030303, 0x3030303, 0x3040303, 0x2020303, 0x2030302, 0x1010202, 0x2020202, 0x2020202,
    0x2020202, 0x3030303, 0x3030303, 0x2020203, 0x2020202, 0x2020101, 0x2020202, 0x3030404, 0x3020203, 0x2020202,
    0x2020202, 0x1010202, 0x2020202};
u32 data_020e5610[20] = {0x1ff0009, 0x30d4, 0x300300e6, 0x3094, 0x201100ff, 0x30b6, 0x1e900fa, 0x30b6, 0xd00f4,
    0x30b6, 0x1f700e9, 0x3095, 0x300f000c, 0x30b4, 0x1000ea, 0x30d7, 0x1f000ef, 0x30b4, 0x1ec0005, 0xffff3097};
u32 data_020e5440[18] = {0x1f500e5, 0x30b7, 0x30130001, 0x30b7, 0x100d0009, 0x30b6, 0x200600e3, 0x30b6,
    0x1e800f9, 0x30b6, 0x301000f7, 0x30b6, 0x201100ea, 0x3097, 0x31ed00ed, 0x3094, 0x11ed0006, 0xffff3097};
u32 data_020e4634[1] = {0x9};
u32 data_020e48d4[2] = {0x81f000f0, 0xffff2098};
void *data_020e47cc[2] = {(void *)SkySprites_FireworksPatternAct0D, 0};
void *data_020e47e4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct0AEv, 0};
void *data_020e4834[2] = {(void *)_ZN12Unk_020be01810updatePeteEv, 0};
const u32 sSnowSpawnRates[8] = {0x3e8, 0x7d0, 0x3e8, 0x7d0, 0x320, 0x3e8, 0x258, 0x320};
void *data_020e472c[2] = {(void *)_ZN15SkyShotSequence13actUfoCrashedEv, 0};
void *data_020e58a8[27] = {(void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
const u32 sParticleAnimIds[6] = {0x2b, 0x10, 0x19, 0x1a, 0x1b, 0x1c};
u32 data_020e470c[2] = {0x1fc00fc, 0xffff0078};
const u32 sFireworkScaleSmallLong[44] = {0x1000, 0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c,
    0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835,
    0x835, 0x835, 0x835, 0x835, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800,
    0x800, 0x800, 0x800};
void *data_020e481c[2] = {(void *)SkySprite_InitSnowFlake, 0};
char data_020e5088[31] = "/sky/d_2d_b_cld_f_a_bg_nsc.bin";
u32 data_020e52b8[12] = {0x1700f7, 0x30b7, 0x11f0000c, 0x3095, 0x100f000c, 0x30d4, 0x11e200fc, 0x3095,
    0x101400e8, 0x30d6, 0x11ea00e9, 0xffff30b6};
void *data_020e4664[2] = {(void *)_ZN15SkyShotSequence10actPeteHitEv, 0};
void *data_020e4904[2] = {(void *)_ZN12Unk_020be2047endBirdEv, 0};
WeatherManager gWeatherManager;
u32 data_020e5488[18] = {0x130002, 0x30f7, 0x31f500e5, 0x30f6, 0xc0007, 0x30f6, 0x200600e4, 0x30f6, 0x1e600fa,
    0x30b6, 0x101300f5, 0x30b6, 0x201300ea, 0x3097, 0x31eb00eb, 0x30d5, 0x11f20008, 0xffff3097};
u32 data_020e4a5c[2] = {0x400080f0, 0xffff0094};
u32 data_020e4cc4[4] = {0x91f880e0, 0x9a, 0x91f88000, 0xffff011a};
u32 data_020e4cd4[4] = {0x51fc80e0, 0x99, 0x51fc8000, 0xffff0119};
void *data_020e4ac4[3] = {(void *)data_020e46dc, (void *)0x1, 0};
void *data_020e480c[2] = {(void *)_ZN12Unk_020be01813initLightningEv, 0};
void *data_020e4a94[3] = {(void *)data_020e47c4, (void *)0x1, 0};
char data_020e4f88[30] = "/sky/d_2d_b_cld_f1_bg_ncl.bin";
u32 data_020e4cf4[4] = {0x61fc8000, 0x99, 0x61fc80e0, 0xffff0119};
U234_Record sSkyProcProfile = {(void *)SkyProc_Create, 0x89, 0x8f};
char data_020e4e10[27] = "/sky/d_2d_b_cld_bg_ncg.bin";
void *data_020e490c[2] = {(void *)_ZN12Unk_020be2047endShotEv, 0};
}
}
namespace n10 {
}
void Unk_020be204::updateByKind() {
    using namespace n10;
    static void (Unk_020be204::*tbl[13])() = {
        *(void (Unk_020be204::**)())n00::data_020e4954, *(void (Unk_020be204::**)())n00::data_020e4744, *(void (Unk_020be204::**)())n00::data_020e48ac,
        *(void (Unk_020be204::**)())n00::data_020e496c, *(void (Unk_020be204::**)())n00::data_020e49bc, *(void (Unk_020be204::**)())n00::data_020e49c4,
        *(void (Unk_020be204::**)())n00::data_020e4974, *(void (Unk_020be204::**)())n00::data_020e4834, *(void (Unk_020be204::**)())n00::data_020e46bc,
        *(void (Unk_020be204::**)())n00::data_020e4a2c, *(void (Unk_020be204::**)())n00::data_020e479c, *(void (Unk_020be204::**)())n00::data_020e47a4,
        *(void (Unk_020be204::**)())n00::data_020e49dc,
    };
    void (Unk_020be204::*fn)() = tbl[kind];
    if (fn) {
        (this->*fn)();
    }
}
namespace n10 {

#undef data_021f44ac
}

// ======== unk_020bd868.cpp ========
namespace n09 {
struct Unk_021f3010;
extern "C" {
extern Unk_020d16e8 sSkyObjGfxTable[];
}
extern "C" {
extern s32 gWeatherManager;
}
extern "C" {
extern u16 sSkyObjPalDefaultColor;
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } gSkySprites; } }
#define data_021f4398 n09::L_021f4398::gSkySprites.v
extern "C" {
void MI_CpuCopy8(void*, void*, u32);
}
extern "C" {
void DC_FlushRange(void*, u32);
}
extern "C" {
void GX_LoadOBJPltt(void*, u32, u32);
}
extern "C" {
void GXS_LoadOBJPltt(void*, u32, u32);
}
extern "C" {
s32 _ZN13SkyObjPalette14applyOverridesEi(Unk_020bd868*, s32);
}
extern "C" {
void _ZN13SkyObjPalette12setLoadedRowEii(Unk_020bd868*, s32, s32);
}
extern "C" {
void _ZN13SkyObjPalette10invalidateEi(Unk_020bd868*, s32);
}
extern "C" {
void _ZN13SkyObjPalette13invalidateForEi(void*, ...);
}
extern "C" {
void MI_CpuFill8(void*, u32, u32);
}
extern "C" {
extern Unk_020bd9a0_Row sSkyObjCharLayouts[];
}
extern "C" {
void GX_LoadOBJ(u32, u32, u32);
}
extern "C" {
void GXS_LoadOBJ(u32, u32, u32);
}
extern "C" {
static inline void Unk_020bd9a0_Copy(u32 d, u32 a, u32 n, u32 k, BOOL flag) {
    u32 sz = n << 5;
    u32 src = (k + a) << 5;
    GX_LoadOBJ(d, src, sz);
    if (flag) GXS_LoadOBJ(d, src, sz);
}
}
extern "C" {
s32 FS_OpenFile(void*, const char*);
}
extern "C" {
s32 FS_ReadFile(void*, void*, u32);
}
extern "C" {
s32 FS_CloseFile(void*);
}
extern "C" {
s32 FS_SeekFile(void*, u32, u32);
}
extern "C" {
void FS_InitFile(void*);
}
extern "C" {
extern const char* sSkyObjCharFiles[];
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; u8 v[1]; } gSkySprites; } }
#define data_021f44ac n09::L_021f44ac::gSkySprites.v
extern "C" {
void _ZN11SkySePlayer16requestSustainedEiiP17Unk_020bd0a4_Vec3(void*, s32, s32, void*);
}
extern "C" {
void _ZN11SkySePlayer7requestEiiP17Unk_020bd0a4_Vec3(void*, s32, s32, void*);
}
extern "C" {
void SkySprite_GetPos(Unk_020bdd94*, Unk_020bdd94_Out*);
}
extern "C" {
s32 SkySprite_MakeSoundPos(Unk_020bdd94_Out*, s32, s32, s32);
}
extern "C" {
void SkySprite_GetSoundPos(Unk_020bdd94*, Unk_020bdd94_Out*);
}
extern "C" {
s32 func_01ffcb0c(s32, s32);
}
extern "C" {
s32 FX_Div(s32, s32);
}
extern "C" {
s32 FX_Inv(s32);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
namespace L_021f23d4 { extern "C" { extern struct S { u8 p[0xef4]; Unk_021f23d4 v[1]; } gSkySprites; } }
#define data_021f23d4 n09::L_021f23d4::gSkySprites.v
namespace L_021f2944 { extern "C" { extern struct S { u8 p[0x1464]; Unk_021f23d4 v[1]; } gSkySprites; } }
#define data_021f2944 n09::L_021f2944::gSkySprites.v
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 data_020c8cbc;
}
extern "C" {
extern s32 gCamera;
}
extern "C" {
extern s32 sSkyCrossingWidth;
}
extern "C" {
extern Unk_020bdef0_Vec gCameraLookAt;
}
extern "C" {
extern s16 data_02135f44[][2];
}
extern "C" {
s32 Camera_GetCloseUpFactor();
}
extern "C" {
void SkySprite_ProjectWorldPos(Unk_020bdd94*, Unk_020bdd94_Out*, s32);
}
struct Unk_021f3010 { u8 unk_00[8]; s32 unk_08; };
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[1]; } gSkySprites; } }
#define data_021f3010 n09::L_021f3010::gSkySprites.v
extern "C" {
extern Unk_021f3010 sSkySpriteAnimSeqs[];
}
extern "C" {
void _ZN12Unk_020be2049resetFreeEv(Unk_020bdd94*);
}
extern "C" {
void _ZN10SpriteAnim6setSeqEP13SpriteAnimSeq(void*, void*);
}
extern "C" {
void _ZN10SpriteAnim11setPlayOnceEi(void*, s32);
}
extern "C" {
s32 _ZN10SpriteAnim7restartEv(void*);
}
extern "C" {
static inline Unk_021f3010* Unk_020be0bc_Get(s32 i) { return &sSkySpriteAnimSeqs[i]; }
}

extern "C" void SkyObjPalette_Load(Unk_020bd868* p, u8* base, u32 idx);
extern "C" Unk_020bd868* SkyObjPalette_Init(Unk_020bd868* p);
extern "C" void SkyObjGfxSlot_Release(Unk_020bd868* p);
extern "C" void SkyObjGfxSlot_RefreshPalette(Unk_020bd868* p, s32 a);
extern "C" void SkyObjGfxSlot_SetGfx(Unk_020bd868* p, s32 v);
extern "C" void SkyObjGfxSlot_Acquire(Unk_020bd868* p, s32 v, void* x);
extern "C" void SkyObjGfxSlot_Upload(Unk_020bd868* p, u8* base);
extern "C" void SkyObjGfxSlot_Init(Unk_020bd868* p);
extern "C" void SkyObjGfxLoader_FlushChars(u8* p);
extern "C" BOOL SkyObjGfxLoader_LoadPalettes(u8* p);
extern "C" BOOL SkyObjGfxLoader_LoadChars(u8* p, s32 idx);
extern "C" void SkyObjGfxLoader_Init(u8* p);
extern "C" void SkySprite_RequestSeSustainedOn(Unk_020bdd94* p, s32 a, s32 b);
extern "C" void SkySprite_RequestSe(Unk_020bdd94* p, s32 a);
extern "C" void SkySprite_RequestSeSustained(Unk_020bdd94* p, s32 a);
extern "C" void SkySprite_GetPos(Unk_020bdd94* p, Unk_020bdd94_Out* out);
extern "C" void SkySprite_GetSoundPos(Unk_020bdd94* p, Unk_020bdd94_Out* out);
extern "C" s32 SkySprite_MakeSoundPos(Unk_020bdd94_Out* out, s32 a, s32 b, s32 c);
extern "C" BOOL SkySprite_CheckShotHit(Unk_020bdd94* p, s32 a, s32 b, s32 c);
extern "C" void SkySprite_ProjectCrossing(Unk_020bdd94* p, s32 a);
extern "C" void SkySprite_ProjectWorldPos(Unk_020bdd94* p, Unk_020bdd94_Out* q, s32 a);
extern "C" BOOL SkySprite_AdvanceCrossing(Unk_020bdd94* p, s32 a, s32 b, s32 c);
extern "C" void SkySprite_BeginCrossing(Unk_020bdd94* p, u8 a, s32 b);
extern "C" void SkySprite_Release(Unk_020bdd94* p);
extern "C" void SkySprite_StartAnim(Unk_020be0bc* p);

}
namespace n00 {
extern "C" {
u32 data_020e47f4[2] = {0x81f000f0, 0xffff4118};
u32 data_020e4d14[4] = {0x71fc8000, 0x99, 0x71fc80e0, 0xffff0119};
u32 data_020e4d24[4] = {0x71fc8000, 0x98, 0x71fc80e0, 0xffff0118};
const u32 sSkyObjCharLayouts[20] = {0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x4, 0x8, 0x4, 0x8, 0x0, 0xc, 0x4, 0x8,
    0x4, 0x8, 0x0, 0xc};
u32 sSkyOutdoors;
u32 data_020e487c[2] = {0x0, 0xffff0094};
void *data_020e4a34[2] = {(void *)SkySprite_InitShootingStar, 0};
void *data_020e49bc[2] = {(void *)SkySprite_UpdateMoon, 0};
void *data_020e4d98[5] = {(void *)data_020e5068, (void *)data_020e5068, (void *)data_020e5088,
    (void *)data_020e50a8, (void *)data_020e50c8};
char data_020e4fa8[30] = "/sky/d_2d_b_cld_r0_bg_ncl.bin";
void *sSkySpriteAnimSeqs[138] = {(void *)data_020e5318, (void *)0x4, (void *)0x1, (void *)data_020e5704, (void *)0x8,
    0, (void *)data_020e4adc, (void *)0x1, (void *)0x1, (void *)data_020e4ae8, (void *)0x1, (void *)0x1,
    (void *)data_020e4af4, (void *)0x1, (void *)0x1, (void *)data_020e4b00, (void *)0x1, (void *)0x1,
    (void *)data_020e4b0c, (void *)0x1, (void *)0x1, (void *)data_020e4b18, (void *)0x1, (void *)0x1,
    (void *)data_020e50e8, (void *)0x3, (void *)0x1, (void *)data_020e510c, (void *)0x3, (void *)0x1,
    (void *)data_020e5130, (void *)0x3, (void *)0x1, (void *)data_020e5154, (void *)0x3, (void *)0x1,
    (void *)data_020e5178, (void *)0x3, (void *)0x1, (void *)data_020e519c, (void *)0x3, (void *)0x1,
    (void *)data_020e51c0, (void *)0x3, (void *)0x1, (void *)data_020e51e4, (void *)0x3, (void *)0x1,
    (void *)data_020e4b30, (void *)0x1, (void *)0x1, (void *)data_020e4b3c, (void *)0x1, (void *)0x1,
    (void *)data_020e4b48, (void *)0x1, (void *)0x1, (void *)data_020e5348, (void *)0x4, 0,
    (void *)data_020e5258, (void *)0x4, 0, (void *)data_020e4a64, (void *)0x1, (void *)0x1,
    (void *)data_020e56b0, (void *)0x7, 0, (void *)data_020e5288, (void *)0x4, (void *)0x1,
    (void *)data_020e53b0, (void *)0x6, 0, (void *)data_020e4a70, (void *)0x1, (void *)0x1,
    (void *)data_020e4b24, (void *)0x1, (void *)0x1, (void *)data_020e4a7c, (void *)0x1, (void *)0x1,
    (void *)data_020e4a88, (void *)0x1, (void *)0x1, (void *)data_020e5764, (void *)0x9, (void *)0x1,
    (void *)data_020e5af4, (void *)0x2c, (void *)0x1, (void *)data_020e57d0, (void *)0x9, (void *)0x1,
    (void *)data_020e5d04, (void *)0x2c, (void *)0x1, (void *)data_020e4a94, (void *)0x1, (void *)0x1,
    (void *)data_020e583c, (void *)0x9, (void *)0x1, (void *)data_020e5f14, (void *)0x2c, (void *)0x1,
    (void *)data_020e4aa0, (void *)0x1, (void *)0x1, (void *)data_020e58a8, (void *)0x9, (void *)0x1,
    (void *)data_020e6124, (void *)0x2c, (void *)0x1, (void *)data_020e4aac, (void *)0x1, (void *)0x1,
    (void *)data_020e5914, (void *)0x9, (void *)0x1, (void *)data_020e6334, (void *)0x2c, (void *)0x1,
    (void *)data_020e4ab8, (void *)0x1, (void *)0x1, (void *)data_020e5980, (void *)0xf, (void *)0x1,
    (void *)data_020e4ddc, (void *)0x2, 0, (void *)data_020e4ac4, (void *)0x1, (void *)0x1};
char data_020e50c8[31] = "/sky/d_2d_b_cld_r_a_bg_nsc.bin";
void *data_020e4964[2] = {(void *)_ZN12Unk_020bfe3011endRainDropEv, 0};
void *data_020e4b30[3] = {(void *)data_020e498c, (void *)0x1, 0};
u32 data_020e4a54[2] = {0x81f880f0, 0xffff4118};
u32 data_020e4a3c[2] = {0x1fc80f8, 0xffff0094};
u32 data_020e4984[2] = {0x81f880f0, 0xffff4098};
const u32 sSkyStarBgLayer[1] = {0x4};
u32 data_020e49ec[2] = {0x81e003e0, 0xffff9098};
u32 data_020e476c[2] = {0x81f880f0, 0xffff4098};
void *data_020e4754[2] = {(void *)_ZN12Unk_020be20411endFireworkEv, 0};
void *data_020e4b3c[3] = {(void *)data_020e482c, (void *)0x1, 0};
void *data_020e53b0[18] = {(void *)data_020e466c, (void *)0x2, 0, (void *)data_020e495c, (void *)0x2, 0,
    (void *)data_020e4764, (void *)0x2, 0, (void *)data_020e48dc, (void *)0x2, 0, (void *)data_020e499c,
    (void *)0x2, 0, (void *)data_020e469c, (void *)0x2, 0};
void *data_020e4a2c[2] = {(void *)_ZN12Unk_020be20414updateFireworkEv, 0};
u32 data_020e49d4[2] = {0x1fc00fc, 0xffff0077};
void *data_020e46cc[2] = {(void *)SkySprites_FireworksPatternAct0E, 0};
void *data_020e5980[45] = {(void *)data_020e5208, (void *)0x1, 0, (void *)data_020e54d0, (void *)0x1, 0,
    (void *)data_020e5520, (void *)0x1, 0, (void *)data_020e5570, (void *)0x1, 0, (void *)data_020e55c0,
    (void *)0x1, 0, (void *)data_020e5610, (void *)0x1, 0, (void *)data_020e53f8, (void *)0x3, 0,
    (void *)data_020e5440, (void *)0x3, 0, (void *)data_020e5488, (void *)0x3, 0, (void *)data_020e5378,
    (void *)0x3, 0, (void *)data_020e52b8, (void *)0x3, 0, (void *)data_020e52e8, (void *)0x3, 0,
    (void *)data_020e4bc4, (void *)0x3, 0, (void *)data_020e4bd4, (void *)0x3, 0, (void *)data_020e4be4,
    (void *)0x3, 0};
u32 sSkyLight[3];
void *data_020e478c[2] = {(void *)data_020d0ec8, (void *)data_020d0ee0};
u32 data_020e469c[2] = {0x91f000f0, 0xffff2098};
char data_020e4e48[30] = "/sky/d_2d_b_cld_b0_bg_nsc.bin";
u32 data_020e495c[2] = {0x81f000f0, 0xffff2118};
u32 data_020e4764[2] = {0x81f000f0, 0xffff211c};
void *data_020e4954[2] = {(void *)_ZN12Unk_020bfe3014updateRainDropEv, 0};
u32 data_020e4874[2] = {0x81f880f0, 0xffff409e};
u32 sMoonColors[3];
char data_020e4e68[30] = "/sky/d_2d_b_cld_f0_bg_nsc.bin";
u32 data_020e5378[14] = {0x301500f7, 0x30f6, 0x11f1000a, 0x3095, 0xe000b, 0x30d4, 0x11e300fb, 0x3095, 0x200600e4,
    0x30d4, 0x101300e8, 0x30d5, 0x31ea00ea, 0xffff30f5};
const u32 sFireworkScaleSmall[9] = {0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c};
char data_020e4e88[30] = "/sky/d_2d_b_cld_f1_bg_nsc.bin";
}
}
namespace n09 {
}
void Unk_020be0f4::endByKind() {
    using namespace n09;
    static void (Unk_020be0f4::*tbl[13])() = {
        *(void (Unk_020be0f4::**)())n00::data_020e4964,
        *(void (Unk_020be0f4::**)())n00::data_020e49e4,
        *(void (Unk_020be0f4::**)())n00::data_020e4724,
        *(void (Unk_020be0f4::**)())n00::data_020e494c,
        *(void (Unk_020be0f4::**)())n00::data_020e4944,
        *(void (Unk_020be0f4::**)())n00::data_020e493c,
        *(void (Unk_020be0f4::**)())n00::data_020e4934,
        *(void (Unk_020be0f4::**)())n00::data_020e467c,
        *(void (Unk_020be0f4::**)())n00::data_020e4924,
        *(void (Unk_020be0f4::**)())n00::data_020e4754,
        *(void (Unk_020be0f4::**)())n00::data_020e4914,
        *(void (Unk_020be0f4::**)())n00::data_020e490c,
        *(void (Unk_020be0f4::**)())n00::data_020e4904,
    };
    void (Unk_020be0f4::*fn)() = tbl[kind];
    if (fn) (this->*fn)();
}
namespace n09 {

extern "C" void SkySprite_StartAnim(Unk_020be0bc* p) {
    Unk_020be0bc_E i = (Unk_020be0bc_E)p->animSeq;
    Unk_021f3010* row = &sSkySpriteAnimSeqs[i];
    _ZN10SpriteAnim6setSeqEP13SpriteAnimSeq(p->anim, row);
    _ZN10SpriteAnim11setPlayOnceEi(p->anim, row->unk_08);
    _ZN10SpriteAnim7restartEv(p->anim);
}

extern "C" void SkySprite_Release(Unk_020bdd94* p) {
    s32 i = p->gfxSlot;
    if (i != 6) {
        SkyObjGfxSlot_Release((Unk_020bd868*)&data_021f3010[i]);
    }
    _ZN12Unk_020be2049resetFreeEv(p);
}

extern "C" void SkySprite_BeginCrossing(Unk_020bdd94* p, u8 a, s32 b) {
    p->dir = a;
    s32 v;
    if (p->dir != 0) {
        v = 0;
    } else {
        v = sSkyCrossingWidth;
    }
    p->trackX = v;
    return SkySprite_ProjectCrossing(p, b);
}

extern "C" BOOL SkySprite_AdvanceCrossing(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    if (p->dir != 0) {
        p->trackX += a;
        if (p->trackX > sSkyCrossingWidth) r = TRUE;
    } else {
        p->trackX -= a;
        if (p->trackX < 0) r = TRUE;
    }
    if (!r) {
        p->wavePhase += c;
        SkySprite_ProjectCrossing(p, b);
    }
    return r;
}

extern "C" void SkySprite_ProjectWorldPos(Unk_020bdd94* p, Unk_020bdd94_Out* q, s32 a) {
    Unk_020bdef0_Vec loc;
    loc.unk_00[0] = gCameraLookAt.unk_00[0];
    loc.unk_00[1] = gCameraLookAt.unk_00[1];
    loc.unk_00[2] = gCameraLookAt.unk_00[2];
    s32 inv, idx, z, y, t;
    s32 sx, sy, sc, fx, k, dz;
    dz = loc.unk_00[2] - q->z;
    fx = FX_Div(q->x - loc.unk_00[0], data_020c8cbc);
    dz = FX_Div(dz, data_020c8cb8 << 2);
    t = func_01ffcb0c(-0x1000, dz - 0x1000);
    k = func_01ffcb0c(dz, t + 0x1000);
    s32 w = func_01ffcb0c(-0x666, k) + 0xe66;
    y = func_01ffcb0c(fx, w);
    z = func_01ffcb0c(y + 0x800, 0x1000);
    sx = z << 8;
    sy = func_01ffcb0c(0x50000, k) + 0x50000;
    inv = 0x1000 - k;
    if (gCamera != 0) {
        idx = func_01ffcb0c(Camera_GetCloseUpFactor(), inv);
    } else {
        idx = 0;
    }
    idx = func_01ffcb0c(idx, 0x10000);
    p->screenPosX = sx;
    p->screenPosY = sy - idx;
    p->screenPosZ = 0;
    sc = func_01ffcb0c(-0xc00, k) + 0x1000;
    if (sc < 0x400) sc = 0x400;
    else if (sc > 0x1000) sc = 0x1000;
    z = FX_Inv(sc);
    p->scaleX = z;
    p->scaleY = z;
    idx = (u16)p->wavePhase >> 4;
    z = func_01ffcb0c(data_02135f44[idx][0], a);
    z = func_01ffcb0c(z, sc);
    p->screenPosY += z;
}

extern "C" void SkySprite_ProjectCrossing(Unk_020bdd94* p, s32 a) {
    Unk_020bdd94_Out t;
    t.x = p->trackX;
    t.y = 0;
    t.z = data_020c8cb8;
    SkySprite_ProjectWorldPos(p, &t, a);
}

extern "C" BOOL SkySprite_CheckShotHit(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    s32 d;
    s32 w = func_01ffcb0c(a, p->scaleX);
    s32 h = func_01ffcb0c(b, p->scaleY);
    s32 dy = func_01ffcb0c(c, p->scaleY);
    s32 hw = _s32_div_f(w, 2);
    s32 hh = _s32_div_f(h, 2);
    s32 y = p->screenPosY + dy;
    s32 x = p->screenPosX;
    s32 left = x - hw;
    s32 right = x + hw;
    s32 top = y - hh;
    s32 bottom = y + hh;
    Unk_021f23d4* o = data_021f23d4;
    BOOL found = FALSE;
    for (; o < data_021f2944; o++) {
        if (o->state == 2 && ((u8*)o)[0x2f] != 0) {
            d = o->velY;
            if (d < 0) d = -d;
            s32 xl = o->posX - 0x1000;
            s32 yt = o->posY - 0x1000;
            s32 yb = d + (o->posY + 0x1000);
            s32 xr = o->posX + 0x1000;
            if (left <= xr && right >= xl && top <= yb && bottom >= yt) {
                found = TRUE;
                ((u8*)o)[0x30] = 1;
            }
        }
    }
    return found;
}

extern "C" s32 SkySprite_MakeSoundPos(Unk_020bdd94_Out* out, s32 a, s32 b, s32 c) {
    s32 t = func_01ffcb0c(0x400, c);
    s32 u = func_01ffcb0c(0x1000, c);
    s32 v = FX_Div(0x1000 - t, u - t);
    if (v < 0) v = 0;
    else if (v > 0x1000) v = 0x1000;
    out->x = a;
    out->y = b;
    out->z = v;
    return v;
}

extern "C" void SkySprite_GetSoundPos(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    SkySprite_MakeSoundPos(out, p->screenPosX, p->screenPosY, p->scaleX);
}

extern "C" void SkySprite_GetPos(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    out->x = p->screenPosX;
    out->y = p->screenPosY;
    out->z = 0;
}

extern "C" void SkySprite_RequestSeSustained(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    SkySprite_GetSoundPos(p, (Unk_020bdd94_Out*)&out);
    _ZN11SkySePlayer16requestSustainedEiiP17Unk_020bd0a4_Vec3(data_021f44ac, 0, a, &out);
}

extern "C" void SkySprite_RequestSe(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    SkySprite_GetSoundPos(p, (Unk_020bdd94_Out*)&out);
    _ZN11SkySePlayer7requestEiiP17Unk_020bd0a4_Vec3(data_021f44ac, 0, a, &out);
}

extern "C" void SkySprite_RequestSeSustainedOn(Unk_020bdd94* p, s32 a, s32 b) {
    Unk_020bdd94_Out out;
    SkySprite_GetPos(p, &out);
    _ZN11SkySePlayer16requestSustainedEiiP17Unk_020bd0a4_Vec3(data_021f44ac, a, b, &out);
}

extern "C" void SkyObjGfxLoader_Init(u8* p) {
    FS_InitFile(p);
    MI_CpuFill8(p + 0x48, 0, 0x400);
    MI_CpuFill8(p + 0x448, 0, 0xc00);
    MI_CpuFill8(p + 0x1048, 0, 0x1c0);
    MI_CpuFill8(p + 0x1208, 0, 0x140);
    *(u32*)(p + 0x1348) = 0x12345678;
}

extern "C" BOOL SkyObjGfxLoader_LoadChars(u8* p, s32 idx) {
    Unk_020d16e8* row = &sSkyObjGfxTable[idx];
    Unk_020bd9a0_Row* t;
    s32 a = FS_OpenFile(p, sSkyObjCharFiles[row->charFile]);
    BOOL ok1 = TRUE;
    BOOL ok2 = TRUE;
    u8* src;
    s32 i;
    s32 f;
    t = &sSkyObjCharLayouts[row->charLayout];
    if (row->charTileA != 0xffff) {
        src = p + 0x448;
        ok1 &= FS_SeekFile(p, (row->charTileA & ~0x1f) << 5, 0);
        for (i = 0; i < 4; i++) {
            if (t->topTileCount != 0) {
                ok2 &= FS_ReadFile(p, p + 0x48, 0x400) > 0;
                MI_CpuCopy8(p + 0x48 + ((row->charTileA & 0x1f) << 5), src + (t->topTileX << 5), t->topTileCount << 5);
            }
            src += 0x180;
        }
    }
    if (row->charTileB != 0xffff) {
        src = p + 0xa48;
        ok1 &= FS_SeekFile(p, (row->charTileB & ~0x1f) << 5, 0);
        for (i = 4; i < 8; i++) {
            if (t->bottomTileCount != 0) {
                ok2 &= FS_ReadFile(p, p + 0x48, 0x400) > 0;
                MI_CpuCopy8(p + 0x48 + ((row->charTileB & 0x1f) << 5), src + (t->bottomTileX << 5), t->bottomTileCount << 5);
            }
            src += 0x180;
        }
    }
    f = FS_CloseFile(p);
    if (a && ok1 && ok2 && f) return TRUE;
    return FALSE;
}

}
namespace n00 {
extern "C" {
void *data_020e4924[2] = {(void *)_ZN12Unk_020be01812endLightningEv, 0};
const u32 sSkyPaletteSetByLevel[5] = {0x0, 0x0, 0x0, 0x1, 0x1};
}
}
namespace n09 {
extern "C" BOOL SkyObjGfxLoader_LoadPalettes(u8* p) {
    char name1[0x17] = "/sky/a_sky_obj_ncl.bin";
    s32 a = FS_OpenFile(p, name1);
    BOOL b = FS_ReadFile(p, p + 0x1048, 0x1c0) > 0;
    s32 c = FS_CloseFile(p);
    char name2[0x1c] = "/sky/a_sky_moon_obj_ncl.bin";
    s32 d = FS_OpenFile(p, name2);
    BOOL e = FS_ReadFile(p, p + 0x1208, 0x140) > 0;
    s32 f = FS_CloseFile(p);
    if (a && b && c && d && e && f) return TRUE;
    return FALSE;
}

extern "C" void SkyObjGfxLoader_FlushChars(u8* p) {
    DC_FlushRange(p + 0x448, 0xc00);
}

extern "C" void SkyObjGfxSlot_Init(Unk_020bd868* p) {
    p->unk_00 = 0x34;
    p->refCount = 0;
    p->unk_08 = 0;
    p->dirty = 0;
}

extern "C" void SkyObjGfxSlot_Upload(Unk_020bd868* p, u8* base) {
    Unk_020bd9a0_Row* row;
    u32 dst;
    u32 o, k;
    BOOL flag;
    if (gWeatherManager == 0) flag = TRUE; else flag = FALSE;
    SkyObjGfxLoader_FlushChars(base);
    Unk_020d16e8* ent = &sSkyObjGfxTable[p->unk_00];
    row = &sSkyObjCharLayouts[ent->charLayout];
    dst = (u32)base + 0x448;
    o = 0;
    k = 0x94;
    for (s32 i = 0; i < 4; i++) {
        u32 d;
        u32 n = row->topTileCount;
        if (n != 0) {
            u32 a = row->topTileX;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
    for (s32 i = 4; i < 8; i++) {
        u32 d;
        u32 n = row->bottomTileCount;
        if (n != 0) {
            u32 a = row->bottomTileX;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
}

extern "C" void SkyObjGfxSlot_Acquire(Unk_020bd868* p, s32 v, void* x) {
    p->refCount++;
    if (v != p->unk_00) {
        p->unk_08 = 0;
        _ZN13SkyObjPalette13invalidateForEi(x);
        p->unk_00 = v;
    }
}

extern "C" void SkyObjGfxSlot_SetGfx(Unk_020bd868* p, s32 v) {
    if (v != p->unk_00) {
        p->unk_08 = 0;
        p->dirty = 1;
        p->unk_00 = v;
    }
}

extern "C" void SkyObjGfxSlot_RefreshPalette(Unk_020bd868* p, s32 a) {
    p->dirty = 1;
    _ZN13SkyObjPalette13invalidateForEi(data_021f4398, a);
}

extern "C" void SkyObjGfxSlot_Release(Unk_020bd868* p) {
    s32 t = p->refCount - 1;
    if (t <= 0) t = 0;
    p->refCount = t;
}

extern "C" Unk_020bd868* SkyObjPalette_Init(Unk_020bd868* p) {
    volatile u16 tmp;
    u16* end;
    u16* q;
    p->unk_00 = 0;
    *(u16*)&p->unk_08 = 0;
    _ZN13SkyObjPalette10invalidateEi(p, -1);
    end = (u16*)p->colors;
    q = p->overrideColors;
    tmp = sSkyObjPalDefaultColor;
    for (; q < end; q++) {
        *q = tmp;
    }
    MI_CpuFill8(p->colors, 0, 0x20);
    return p;
}

extern "C" void SkyObjPalette_Load(Unk_020bd868* p, u8* base, u32 idx) {
    Unk_020d16e8* row = &sSkyObjGfxTable[idx];
    s32 a = row->srcPalette;
    u32 b;
    s32 res;
    if (idx - 0x1f <= 1) {
        a += p->unk_00;
    }
    b = row->objPalette << 5;
    MI_CpuCopy8(base + 0x1048 + a * 32, p->colors, 0x20);
    res = _ZN13SkyObjPalette14applyOverridesEi(p, row->objPalette);
    DC_FlushRange(p->colors, 0x20);
    GX_LoadOBJPltt(p->colors, b, 0x20);
    if (gWeatherManager == 0) {
        GXS_LoadOBJPltt(p->colors, b, 0x20);
    }
    if (res == 0) {
        _ZN13SkyObjPalette12setLoadedRowEii(p, row->objPalette, a);
    }
}

#undef data_021f4398
#undef data_021f44ac
#undef data_021f23d4
#undef data_021f2944
#undef data_021f3010
}

// ======== unk_020bcf04.cpp ========
namespace n08 {
extern "C" {
void* __cxa_vec_ctor(void* array, u32 count, u32 size, void* (*ctor)(void*), void* (*dtor)(void*, s32));
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; SkySePlayer v; } gSkySprites; } }
#define data_021f44ac n08::L_021f44ac::gSkySprites.v
extern "C" {
void Math_StepAngle(s16* p, s32 target, s32 step);
}
extern "C" {
void PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
}
extern "C" {
void* PlayerActor_GetBodyPos(s32 a);
}
extern "C" {
void Sky_ProjectToScreenX(s32* out, void* p);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void TownSessionState_Get();
}
extern "C" {
s32 TownSessionState_GetPeteFall();
}
extern "C" {
void _ZN13PeteFallState11pickFallPosEii(s32 a, void* p, u8 b);
}
extern "C" {
void PlayerActor_LocalEndWatch();
}
extern "C" {
void Camera_RestorePrevMode();
}
extern "C" {
void Camera_StartShake(s32 a);
}
extern "C" {
void SkySprite_MakeSoundPos(Unk_020bd0a4_Vec3* out, s32 a, s32 b, s32 c);
}
extern "C" {
void* PlayerData_GetResident(void* a, s32 i);
}
extern "C" {
s32 _ZN10PlayerData6isUsedEv(void* p);
}
extern "C" {
void* _ZN10PlayerData17getDailyTalkFlagsEv(void* p);
}
extern "C" {
void _ZN20PlayerDailyTalkFlags5clearEj(void* p, s32 a);
}
extern "C" {
void GulliverQuest_Clear(void* p);
}
extern "C" {
void EventAnnounce_Request(s32 a, s32 b, s32 c);
}
extern "C" {
s32 FieldItemFx_StartBalloonDrop(s32 a, s32 b);
}
extern "C" {
void PlayerActor_SetWatchMode(s32 a, s32 b);
}
extern "C" {
void* PlayerData_GetCurrent();
}
extern "C" {
u32 _ZN12Unk_02097ff414getSkyShotHitsEv(void* p);
}
extern "C" {
void _ZN12Unk_02097ff414setSkyShotHitsEj(void* p, u8 v);
}
extern "C" {
s32 PlayerActor_GetLocalSessionSlot();
}
extern "C" {
s32 Random_GlobalBelow(s32 a);
}
extern "C" {
BOOL SkyShot_HasMaxHits();
}
extern "C" {
void SkyShot_AddHit();
}
extern "C" {
extern u8 gSavePlayers[];
}
extern "C" {
extern u8 data_021e58a6[];
}
extern "C" {
extern u8 sSkyObjPalOverrideSlots[];
}
namespace L_020d18c8 { extern "C" { extern struct S { u8 p[0x1e0]; s8 v[1]; } sSkyObjGfxTable; } }
#define data_020d18c8 n08::L_020d18c8::sSkyObjGfxTable.v
extern "C" {
extern Unk_020bd774_Entry sSkyObjGfxTable[];
}
typedef void (SkyShotSequence::*Unk_020bd520_Fn)();

extern "C" BOOL SkyShot_HasMaxHits();
extern "C" void SkyShot_AddHit();

}
BOOL SkyObjPalette::applyOverrides(s32 v) {
    using namespace n08;
    BOOL result = FALSE;
    if (overrideMask != 0) {
        for (s32 i = 0; i < 15; i++) {
            BOOL has = hasOverride(i);
            s32 s = sSkyObjPalOverrideSlots[i];
            BOOL match = ((s >> 4) & 0xf) == v;
            if (has && match) {
                colors[s & 0xf] = overrideColors[i];
                result = TRUE;
            }
        }
    }
    return result;
}
namespace n08 {

}
void SkyObjPalette::pickBalloonColor() {
    using namespace n08;
    balloonColor = Random_GlobalBelow(5);
    invalidate(data_020d18c8[0x1d]);
}
namespace n08 {

}
void SkyObjPalette::invalidate(s32 v) {
    using namespace n08;
    if (v < 0) {
        for (s32 i = 0; (u32)i < 4; i++) {
            loadedSrcPalettes[i] = -1;
        }
    } else {
        loadedSrcPalettes[v - 12] = -1;
    }
}
namespace n08 {

}
void SkyObjPalette::invalidateFor(s32 idx) {
    using namespace n08;
    Unk_020bd774_Entry* e = &sSkyObjGfxTable[idx];
    invalidate(e->objPalette);
}
namespace n08 {

}
BOOL SkyObjPalette::isLoaded(s32 idx) {
    using namespace n08;
    Unk_020bd774_Entry* e = &sSkyObjGfxTable[idx];
    s32 y = e->objPalette;
    s32 x = e->srcPalette;
    BOOL result = TRUE;
    if (y >= 0 && x >= 0) {
        if (x != loadedSrcPalettes[y - 12]) {
            result = FALSE;
        }
    }
    return result;
}
namespace n08 {

}
void SkyObjPalette::setLoadedRow(s32 a, s32 b) {
    using namespace n08;
    if (a >= 0 && b >= 0) {
        loadedSrcPalettes[a - 12] = b;
    }
}
namespace n08 {

}
void SkyObjPalette::func_020bd758(s32 idx) {
    using namespace n08;
    overrideMask &= ~(1 << idx);
}
namespace n08 {

}
BOOL SkyObjPalette::hasOverride(s32 idx) {
    using namespace n08;
    if (overrideMask & (1 << idx)) {
        return TRUE;
    }
    return FALSE;
}
namespace n08 {

}
void SkyObjPalette::setOverride(s32 idx, u16* p) {
    using namespace n08;
    overrideMask |= 1 << idx;
    Unk_020bd718_E o = (Unk_020bd718_E)((u32)this + (idx << 1));
    *(u16 *)(o + 10) = *p; // unk_0a[idx] = *p
    invalidate((sSkyObjPalOverrideSlots[idx] >> 4) & 0xf);
}
namespace n08 {

}
SkyShotRequest::SkyShotRequest() {
    using namespace n08;
    clear();
}
namespace n08 {

}
void SkyShotRequest::set(s32 a, s32* p, u8 b) {
    using namespace n08;
    playerSlot = a;
    pos = p[0];
    posY = p[1];
    posZ = p[2];
    golden = b;
    pending = 1;
}
namespace n08 {

}
void SkyShotRequest::clear() {
    using namespace n08;
    playerSlot = 4;
    pos = 0;
    posY = 0;
    posZ = 0;
    golden = 0;
    pending = 0;
}
namespace n08 {

}
SkyShotSequence::SkyShotSequence() {
    using namespace n08;
    reset();
}
namespace n08 {

}
void SkyShotSequence::startShot(s32 a) {
    using namespace n08;
    if (a == PlayerActor_GetLocalSessionSlot()) {
        state = 1;
        playerSlot = a;
        timer = 0x2b;
    }
}
namespace n08 {

}
void SkyShotSequence::endWatch(s32 a) {
    using namespace n08;
    PlayerActor_SetWatchMode(0, a);
}
namespace n08 {

}
void SkyShotSequence::onBalloonHit(u8 a) {
    using namespace n08;
    goldenBalloon = a;
    state = 2;
    PlayerActor_SetWatchMode(1, playerSlot);
    SkyShot_AddHit();
}
namespace n08 {

}
void SkyShotSequence::onBalloonFell() {
    using namespace n08;
    state = 3;
    timer = 2;
    balloonDropEnded = 0;
    landSePending = 0;
    splashSePending = 0;
}
namespace n08 {

}
void SkyShotSequence::onUfoHit() {
    using namespace n08;
    state = 4;
    PlayerActor_SetWatchMode(1, playerSlot);
    SkyShot_AddHit();
}
namespace n08 {

}
void SkyShotSequence::onUfoFell() {
    using namespace n08;
    state = 5;
    timer = 0x1e;
}
namespace n08 {

}
void SkyShotSequence::onPeteHit() {
    using namespace n08;
    state = 7;
    PlayerActor_SetWatchMode(1, playerSlot);
    SkyShot_AddHit();
}
namespace n08 {

}
void SkyShotSequence::onPeteFell() {
    using namespace n08;
    state = 8;
    timer = 0x14;
}
namespace n08 {

}
void SkyShotSequence::setTarget(s32 a, s32 b, s32 c, u8 d) {
    using namespace n08;
    targetX = a;
    targetY = b;
    targetScale = c;
    fallDir = d;
}
namespace n08 {

}
namespace n00 {
extern "C" {
const u32 data_020d0ff8[12] = {0x53f953f9, 0x53f953f9, 0x428f53f9, 0x18823105, 0x4200820, 0x400, 0x4000000,
    0xc010800, 0x24441001, 0x468f38a8, 0x53f953f9, 0x53f953f9};
char data_020e4ea8[30] = "/sky/d_2d_b_cld_c0_bg_nsc.bin";
u32 data_020e485c[2] = {0x400080f0, 0xffff0096};
const u32 sSnowParallax[3] = {0x7fff, 0x6667, 0x4cce};
void *data_020e4784[2] = {(void *)_ZN15SkyShotSequence13actBalloonHitEv, 0};
void *data_020e5704[24] = {(void *)data_020e476c, (void *)0x2, 0, (void *)data_020e4a14, (void *)0x3, 0,
    (void *)data_020e489c, (void *)0x4, 0, (void *)data_020e4874, (void *)0xa, 0, (void *)data_020e48f4,
    (void *)0x2, 0, (void *)data_020e4a54, (void *)0x3, 0, (void *)data_020e4984, (void *)0x4, 0,
    (void *)data_020e48ec, (void *)0xa, 0};
u32 data_020e491c[2] = {0x91f000f0, 0xffff209c};
u32 data_020e4b64[4] = {0x41fc80e0, 0x99, 0x41fc8000, 0xffff0119};
void *data_020e4a70[3] = {(void *)data_020e46ec, (void *)0x1, 0};
void *data_020e48fc[2] = {(void *)_ZN12Unk_020be0187initUfoEv, 0};
u8 sSkyLineTablesReady;
void *data_020e49e4[2] = {(void *)SkySprite_EndSnowFlake, 0};
void *data_020e47dc[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct09Ev, 0};
const u8 data_020d0e04[5] = {0xf, 0xe, 0xd, 0xe, 0xd};
StarTwinkle data_021efc18;
u32 data_020e47b4[2] = {0x41fb80f0, 0xffff9097};
const u32 data_020d1028[12] = {0x50a550a5, 0x50a550a5, 0x4cc650a5, 0x4d4a4ce7, 0x4d8c4d8c, 0x4d6b4d6b,
    0x494a4d4a, 0x494a494a, 0x4929494a, 0x4ca54ce7, 0x50a550a5, 0x50a550a5};
void *data_020e4b74[4] = {(void *)data_020d0fc8, (void *)data_020d0ff8, (void *)data_020d1028,
    (void *)data_020d1058};
u32 data_020e47ec[2] = {0x81f000f0, 0xffff411c};
void *data_020e47d4[2] = {(void *)SkySprites_FireworksPatternAct0C, 0};
void *data_020e4b84[4] = {(void *)data_020d1088, (void *)data_020d10b8, (void *)data_020d10e8,
    (void *)data_020d1118};
}
}
namespace n08 {
}
void SkyShotSequence::update() {
    using namespace n08;
    static Unk_020bd520_Fn tbl[10] = {
        0,
        *(Unk_020bd520_Fn *)n00::data_020e47bc,
        *(Unk_020bd520_Fn *)n00::data_020e4784,
        *(Unk_020bd520_Fn *)n00::data_020e46c4,
        *(Unk_020bd520_Fn *)n00::data_020e4894,
        *(Unk_020bd520_Fn *)n00::data_020e49ac,
        *(Unk_020bd520_Fn *)n00::data_020e472c,
        *(Unk_020bd520_Fn *)n00::data_020e4664,
        *(Unk_020bd520_Fn *)n00::data_020e464c,
        *(Unk_020bd520_Fn *)n00::data_020e48a4,
    };
    Unk_020bd520_Fn f = tbl[state];
    if (f) {
        (this->*f)();
    }
}
namespace n08 {

extern "C" void SkyShot_AddHit() {
    void* p = PlayerData_GetCurrent();
    u32 n = _ZN12Unk_02097ff414getSkyShotHitsEv(p);
    if (n < 0x10) {
        _ZN12Unk_02097ff414setSkyShotHitsEj(p, n + 1);
    }
}

extern "C" BOOL SkyShot_HasMaxHits() {
    return _ZN12Unk_02097ff414getSkyShotHitsEv(PlayerData_GetCurrent()) >= 0x10;
}

}
void SkyShotSequence::actShotFlight() {
    using namespace n08;
    timer--;
    if (timer <= 0) {
        endWatch(playerSlot);
        reset();
    }
}
namespace n08 {

}
void SkyShotSequence::actBalloonHit() {
    using namespace n08;
    lookAtTarget();
}
namespace n08 {

}
void SkyShotSequence::actBalloonDrop() {
    using namespace n08;
    relaxHead(0x190, 0x190);
    if (timer > 0) {
        timer--;
        if (timer == 0) {
            if (FieldItemFx_StartBalloonDrop(goldenBalloon != 0 ? 1 : 0, ((targetX + 0x800) >> 12) - 0x80) == 0) {
                balloonDropEnded = 1;
            }
        }
    }
    if (landSePending != 0 || splashSePending != 0) {
        s32 id = landSePending != 0 ? 0x7f9 : 0x7fa;
        Unk_020bd0a4_Vec3 v;
        SkySprite_MakeSoundPos(&v, targetX, targetY, targetScale);
        data_021f44ac.requestSustained(0, id, &v);
        landSePending = 0;
        splashSePending = 0;
    }
    if (balloonDropEnded != 0) {
        PlayerActor_LocalEndWatch();
        reset();
    }
}
namespace n08 {

}
void SkyShotSequence::actUfoHit() {
    using namespace n08;
    lookAtTarget();
}
namespace n08 {

}
void SkyShotSequence::actUfoFall() {
    using namespace n08;
    relaxHead(0x50, 0);
    timer--;
    if (timer <= 0) {
        Unk_020bd0a4_Vec3 v;
        Camera_StartShake(0xa3d);
        SkySprite_MakeSoundPos(&v, targetX, targetY, targetScale);
        data_021f44ac.requestSustained(0, 0x7fd, &v);
        timer = 0x32;
        state = 6;
    }
}
namespace n08 {

}
void SkyShotSequence::actUfoCrashed() {
    using namespace n08;
    relaxHead(0x190, 0x190);
    timer--;
    if (timer <= 0) {
        PlayerActor_LocalEndWatch();
        Camera_RestorePrevMode();
        for (s32 i = 0; i < 4; i++) {
            void* p = PlayerData_GetResident(gSavePlayers, i);
            if (p && _ZN10PlayerData6isUsedEv(p)) {
                _ZN20PlayerDailyTalkFlags5clearEj(_ZN10PlayerData17getDailyTalkFlagsEv(p), 0x14);
            }
        }
        GulliverQuest_Clear(data_021e58a6);
        EventAnnounce_Request(0x44, 0x63, 0);
        reset();
    }
}
namespace n08 {

}
void SkyShotSequence::actPeteHit() {
    using namespace n08;
    lookAtTarget();
}
namespace n08 {

}
void SkyShotSequence::actPeteFall() {
    using namespace n08;
    relaxHead(0x50, 0);
    if (timer > 0) {
        timer--;
    } else {
        Unk_020bd0a4_Vec3 v;
        Camera_StartShake(0x5c3);
        SkySprite_MakeSoundPos(&v, targetX, targetY, targetScale);
        data_021f44ac.requestSustained(0, 0x800, &v);
        timer = 0x1e;
        state = 9;
    }
}
namespace n08 {

}
void SkyShotSequence::actPeteFallen() {
    using namespace n08;
    relaxHead(0x190, 0x190);
    timer--;
    if (timer <= 0) {
        void* p = PlayerActor_GetBodyPos(playerSlot);
        if (p) {
            TownSessionState_Get();
            _ZN13PeteFallState11pickFallPosEii(TownSessionState_GetPeteFall(), p, fallDir);
        }
        PlayerActor_LocalEndWatch();
        Camera_RestorePrevMode();
        reset();
    }
}
namespace n08 {

}
void SkyShotSequence::reset() {
    using namespace n08;
    state = 0;
    playerSlot = 4;
    timer = 0;
    targetX = 0;
    targetY = 0;
    targetScale = 0x1000;
    fallDir = 0;
    headPitch = 0;
    headYaw = 0;
    balloonDropEnded = 0;
    landSePending = 0;
    splashSePending = 0;
    goldenBalloon = 0;
}
namespace n08 {

}
void SkyShotSequence::lookAtTarget() {
    using namespace n08;
    void* p = PlayerActor_GetBodyPos(4);
    s32 x = 0x80000;
    if (p) {
        Sky_ProjectToScreenX(&x, p);
    }
    s32 t = (FX_Div(targetX - x, 0x100000) * -10000) >> 12;
    if (t < -5000) {
        t = -5000;
    } else if (t > 5000) {
        t = 5000;
    }
    s16 v = t;
    PlayerActor_SetHeadTilt(4000, v, 4);
    headPitch = 4000;
    headYaw = v;
}
namespace n08 {

}
void SkyShotSequence::relaxHead(s32 a, s32 b) {
    using namespace n08;
    Math_StepAngle(&headPitch, 0, a);
    Math_StepAngle(&headYaw, 0, b);
    PlayerActor_SetHeadTilt(headPitch, headYaw, 4);
}
namespace n08 {

}
SkySePlayer::SkySePlayer() {
    using namespace n08;
    active = 0;
    for (FxVec3* p = positions; p < (FxVec3*)&active; p++) {
        p->x = 0;
        p->y = 0;
        p->z = 0;
    }
}
namespace n08 {

}
void SkySePlayer::resetAll() {
    using namespace n08;
    for (Unk_0213b970* e = channels; e < (Unk_0213b970*)positions; e++) {
        e->callReset();
    }
    active = 1;
}
namespace n08 {

}
void SkySePlayer::releaseAll() {
    using namespace n08;
    active = 0;
    for (Unk_0213b970* e = &channels[7]; e >= channels; e--) {
        e->callRelease();
    }
}
namespace n08 {

}
void SkySePlayer::requestSustained(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    using namespace n08;
    if (active) {
        channels[idx].callRequestSustained((void *)a);
        positions[idx].x = p->x;
        positions[idx].y = p->y;
        positions[idx].z = p->z;
    }
}
namespace n08 {

}
void SkySePlayer::request(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    using namespace n08;
    if (active) {
        channels[idx].callRequest((void *)a);
        positions[idx].x = p->x;
        positions[idx].y = p->y;
        positions[idx].z = p->z;
    }
}
namespace n08 {

}
void SkySePlayer::update() {
    using namespace n08;
    if (active) {
        Unk_0213b970* a = channels;
        FxVec3* b = positions;
        for (s32 i = 0; i < 8; i++, a++, b++) {
            a->callUpdate(i == 7 ? NULL : b);
        }
    }
}
namespace n08 {

}
SkySprite::~SkySprite() {
    using namespace n08;}
namespace n08 {

}
SkyShotRequest::~SkyShotRequest() {
    using namespace n08;}
namespace n08 {

}
SkySprites::SkySprites() {
    using namespace n08;
    spawnInterval = 0;
    spawnAccum = 0;
    precipIntensity = 0;
    snowCounter = 0;
    thunderTimer = 0;
    spriteCount = 0;
    balloonChance = 0;
    ufoChance = 0;
    ufoEventToday = 0;
    peteEventToday = 0;
    fireworksToday = 0;
    birdsRequested = 0;
    fireworksPattern = 0;
    fireworksPatternTime = 0;
    fireworksBigTimer = 0;
    fireworksSlotTimers = 0;
    fireworksSlotTimers1 = 0;
    fireworksSlotTimers2 = 0;
    fireworksSlotTimers3 = 0;
    fireworksInterval = 0;
    shootingStarDelay = 0;
    shootingStarVisible = 0;
    rainbowStrength = 0;
    rainStrength = 0;
    loader.init();
}
namespace n08 {

#undef data_021f44ac
#undef data_020d18c8
}

// ======== unk_020bc58c.cpp ========
namespace n07 {
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; s32 v[1]; } gWeatherManager; } }
#define data_021f1448 n07::L_021f1448::gWeatherManager.v
extern "C" {
extern s32 sSkySpriteDefaultGfx[];
}
namespace L_020d16f0 { extern "C" { extern struct S { u8 p[0x8]; s32 v[1]; } sSkyObjGfxTable; } }
#define data_020d16f0 n07::L_020d16f0::sSkyObjGfxTable.v
namespace L_020d16f5 { extern "C" { extern struct S { u8 p[0xd]; s8 v[1]; } sSkyObjGfxTable; } }
#define data_020d16f5 n07::L_020d16f5::sSkyObjGfxTable.v
extern "C" {
extern u8 gSavePlayers[];
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 data_020e4630[];
}
#define data_020e6794 ((u8 *)"ev_star")
extern "C" {
extern u8 data_020e4634[];
}
extern "C" {
void SceneLights_StartFlash(s32 a);
}
extern "C" {
s32 Random_GlobalBelow(s32 a);
}
extern "C" {
void _ZN12Unk_020be0f49endByKindEv(Unk_020bc754_Slot *s);
}
extern "C" {
void _ZN12Unk_020be2045clearEv(Unk_020bc754_Slot *s);
}
extern "C" {
void _ZN12Unk_020be20410initByKindEj(Unk_020bc754_Slot *s, s32 a);
}
extern "C" {
void SkyObjGfxSlot_Acquire(void *a, s32 b, void *c);
}
extern "C" {
void SkyObjGfxSlot_Upload(void *a, void *b);
}
extern "C" {
s32 _ZN13SkyObjPalette8isLoadedEi(void *a, s32 b);
}
extern "C" {
void SkyObjPalette_Load(void *a, void *b, s32 c);
}
extern "C" {
void SkyObjGfxLoader_LoadChars(void *a, s32 b);
}
extern "C" {
void _ZN14SkyShotRequest3setEiPih(Unk_020bca5c_Elem *a, s32 b, s32 c, s32 d);
}
extern "C" {
void _ZN15SkyShotSequence9startShotEi(void *a, s32 b);
}
extern "C" {
void _ZN15SkyShotSequence8endWatchEi(void *a, s32 b);
}
extern "C" {
void Clock_GetDate(void *a);
}
extern "C" {
void Clock_GetMinuteHour(void *a);
}
extern "C" {
s32 Date_DaysBetween(void *a, void *b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
u32 Clock_GetSecond();
}
extern "C" {
void *PlayerData_GetResident(void *p, u32 i);
}
extern "C" {
u32 _ZN12Unk_02097ff48testFlagEj(void *p, u32 n);
}
extern "C" {
u32 _ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}
extern "C" {
void _ZN10LetterView10setPresentEtj(void *a, u32 b, s32 c);
}
extern "C" {
u32 LetterDelivery_PutInAddresseeMailbox(void *c);
}
extern "C" {
void _ZN12Unk_02097ff49clearFlagEj(void *p, u32 n);
}
extern "C" {
void ItemPick_One(u16 *ret, ItemPickSpec q, u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
s32 SkySprites_GetMoonPhaseGfx();
}
extern "C" {
s32 PlayerActor_GetBodyPos(s32 i);
}
extern "C" {
void PlayerActor_GetSlotHeldItem(void *p, s32 i);
}
extern "C" {
void _ZN8SaveData9clearFlagEj(void *p, u32 n);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}
extern "C" {
s32 EventSchedule_CollectDay(void *a, void *b, s32 c);
}
extern "C" {
BOOL Event_GetState(u32 a, void *b, s32 c);
}

extern "C" s32 SkySprites_GetMoonPhaseGfx();

}
void Unk_020bc58c::reloadAllGfx() {
    using namespace n07;
    Unk_020bccc8_Entry *p, *end = &gfxSlots[5];
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (id != 0x34) {
            s32 r;
            s32 flag = p->loaded;
            r = _ZN13SkyObjPalette8isLoadedEi(palette, id);
            if (flag == 0) {
                SkyObjGfxLoader_LoadChars(loader, id);
                SkyObjGfxSlot_Upload(p, loader);
                p->loaded = 1;
                p->dirty = 0;
            }
            if (r == 0) {
                SkyObjPalette_Load(palette, loader, id);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::loadDirtyGfx() {
    using namespace n07;
    Unk_020bccc8_Entry *end = &gfxSlots[5], *p;
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (p->dirty != 0) {
            if (id == 0x34) {
                p->dirty = 0;
            } else if (p->loaded == 0) {
                SkyObjGfxLoader_LoadChars(loader, id);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::uploadDirtyGfx() {
    using namespace n07;
    Unk_020bccc8_Entry *p, *end = &gfxSlots[5];
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (p->dirty != 0) {
            if (id != 0x34) {
                s32 r;
                s32 flag = p->loaded;
                r = _ZN13SkyObjPalette8isLoadedEi(palette, id);
                if (flag == 0) {
                    SkyObjGfxSlot_Upload(p, loader);
                    p->loaded = 1;
                }
                if (r == 0) {
                    SkyObjPalette_Load(palette, loader, id);
                }
            }
            p->dirty = 0;
        }
    }
}
namespace n07 {

}
s32 Unk_020bc58c::pickGfxSlot(s32 t) {
    using namespace n07;
    s32 grp;
    BOOL ok;
    grp = data_020d16f0[t * 4];
    ok = FALSE;
    if (grp == 6) {
        ok = TRUE;
    } else if (t == gfxSlots[grp].gfxId) {
        ok = TRUE;
    } else {
        BOOL c0 = gfxSlots[0].refCount > 0 ? 1 : 0;
        BOOL c1 = gfxSlots[1].refCount > 0 ? 1 : 0;
        BOOL c2 = gfxSlots[2].refCount > 0 ? 1 : 0;
        BOOL c3 = gfxSlots[3].refCount > 0 ? 1 : 0;
        BOOL c4 = gfxSlots[4].refCount > 0 ? 1 : 0;
        if (grp == 0) {
            ok = (c0 == 0 && c3 == 0) ? TRUE : FALSE;
        } else if (grp == 1) {
            ok = (c1 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 2) {
            ok = (c2 == 0 && c3 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 3) {
            ok = (c3 == 0 && c0 == 0 && c2 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 4) {
            ok = (c4 == 0 && c1 == 0 && c2 == 0 && c3 == 0) ? TRUE : FALSE;
        }
    }
    if (!ok) return 5;
    return grp;
}
namespace n07 {

}
void Unk_020bc58c::releaseConflictingSlots(s32 k) {
    using namespace n07;
    if (k == 0) {
        gfxSlots[3].gfxId = 0x34;
        return;
    }
    if (k == 1) {
        gfxSlots[4].gfxId = 0x34;
        return;
    }
    if (k == 2) {
        gfxSlots[3].gfxId = 0x34;
        gfxSlots[4].gfxId = 0x34;
        return;
    }
    if (k == 3) {
        gfxSlots[0].gfxId = 0x34;
        gfxSlots[2].gfxId = 0x34;
        gfxSlots[4].gfxId = 0x34;
        return;
    }
    if (k == 4) {
        gfxSlots[1].gfxId = 0x34;
        gfxSlots[2].gfxId = 0x34;
        gfxSlots[3].gfxId = 0x34;
    }
}
namespace n07 {

}
s32 Unk_020bc58c::findFreeIndex(s32 kind, s32 idx) {
    using namespace n07;
    s32 r = 0x3c;
    if (idx != 0x3c) {
        if (sprites[idx].kind == 0xd) r = idx;
    } else if (kind == 9) {
        Unk_020bc754_Slot *p = &sprites[0x2e];
        s32 i;
        for (i = 0x2e; i <= 0x3a; i++, p++) {
            if (p->kind == 0xd) {
                r = i;
                break;
            }
        }
    } else if (spriteCount < 0x1e) {
        s32 i;
        Unk_020bc754_Slot *p = &sprites[0];
        for (i = 0; i < 0x1e; p++, i++) {
            if (p->kind == 0xd) {
                r = i;
                break;
            }
        }
    }
    return r;
}
namespace n07 {

}
s32 Unk_020bc58c::findKind(s32 id) {
    using namespace n07;
    s32 r = 0x3c;
    s32 i;
    Unk_020bc754_Slot *p = sprites;
    for (i = 0; i < 0x3c; i++, p++) {
        if (id == p->kind) {
            r = i;
            break;
        }
    }
    return r;
}
namespace n07 {

}
void Unk_020bc58c::start() {
    using namespace n07;
    checkTodayEvents();
    spawnInitialPrecip();
    updateMoon();
    updateRainbow();
    balloonChance = 0;
}
namespace n07 {

}
void Unk_020bc58c::stop() {
    using namespace n07;
    killAll();
}
namespace n07 {

}
void Unk_020bc58c::checkTodayEvents() {
    using namespace n07;
    u32 a[2];
    u32 b[2];
    u32 c[2];
    Unk_020bcb04_Ent arr[7];
    Unk_020bcb04_Ent *p, *end;
    ufoEventToday = 0;
    peteEventToday = 0;
    fireworksToday = 0;
    a[0] = 0;
    a[1] = 0;
    Clock_GetDateTime(a);
    MI_CpuCopy8(a, b, 8);
    end = arr + EventSchedule_CollectDay(arr, b, 0);
    for (p = arr; p < end; p++) {
        u32 id = p->id;
        BOOL ok;
        MI_CpuCopy8(a, c, 8);
        if (Event_GetState(id, c, 0)) ok = TRUE; else ok = FALSE;
        if (ok) {
            if (id == 0x44) {
                ufoEventToday = 1;
            } else if (id == 0x45) {
                peteEventToday = 1;
            } else if (id == 0x13 || id == 0xf) {
                fireworksToday = 1;
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::onDayChange(BOOL a) {
    using namespace n07;
    if (a) {
        _ZN8SaveData9clearFlagEj(gSaveData, 9);
        checkTodayEvents();
        sendWishLetters();
    }
}
namespace n07 {

}
void Unk_020bc58c::onSlingshotFired(s32 i) {
    using namespace n07;
    s32 j = 0;
    if (i < 4) j = i;
    s32 v = PlayerActor_GetBodyPos(i);
    if (v != 0) {
        u16 buf[4];
        PlayerActor_GetSlotHeldItem(buf, i);
        s32 flag = 0;
        if (buf[0] >= 0x137b && buf[0] <= 0x137b) flag = 1;
        _ZN14SkyShotRequest3setEiPih(getShotRequest(j), i, v, flag);
        _ZN15SkyShotSequence9startShotEi(shotSeq, i);
    } else {
        _ZN15SkyShotSequence8endWatchEi(shotSeq, i);
    }
}
namespace n07 {

}
Unk_020bca5c_Elem *Unk_020bc58c::getShotRequest(s32 i) {
    using namespace n07;
    return &shotRequests[i];
}
namespace n07 {

}
void Unk_020bc58c::sendWishLetters() {
    using namespace n07;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = PlayerData_GetResident(gSavePlayers, i);
        if (o != NULL && _ZN12Unk_02097ff48testFlagEj(o, 0x32) != 0) {
            Letter ctx;
            Unk_020bc99c_Loc l;
            l.a = Random_GlobalBelow(3);
            Letter_ComposeFromMail(&ctx, &l, data_020e6794, data_020e4634, data_020e4630, _ZN10PlayerData11getPlayerIdEv(o));
            ItemPickSpec q(0, 4);
            ItemPick_One(&l.b, q, 0, 0, 1, 1, 0);
            _ZN10LetterView10setPresentEtj(&ctx, l.b, 1);
            if (LetterDelivery_PutInAddresseeMailbox(&ctx) != 0) {
                _ZN12Unk_02097ff49clearFlagEj(o, 0x32);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::initClock() {
    using namespace n07;
    Clock_GetMinuteHour(&minuteHour);
    second = Clock_GetSecond();
    prevMinuteHour = minuteHour;
    prevSecond = second;
}
namespace n07 {

}
void Unk_020bc58c::tickClock() {
    using namespace n07;
    prevMinuteHour = minuteHour;
    prevSecond = second;
    Clock_GetMinuteHour(&minuteHour);
    second = Clock_GetSecond();
}
namespace n07 {

extern "C" s32 SkySprites_GetMoonPhaseGfx() {
    u8 buf[12];
    buf[2] = 1;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 0;
    Clock_GetDate(buf + 6);
    Clock_GetMinuteHour(buf);
    s32 t = Date_DaysBetween(buf + 6, buf + 2);
    if (buf[1] < 12) t--;
    if (t < 0) t = 0;
    t = t * 100 + 0x974;
    t = ((t % 0xb89) << 12) / 100;
    t = FX_Div(t, 0x1d87b);
    t = (t * 0x1c - 0x800) >> 12;
    if (t < 0) t = 0x1b;
    if (t > 0x1b) t = 0x1b;
    return t + 3;
}

}
s32 Unk_020bc58c::getGfxIdForKind(s32 kind, s32 arg) {
    using namespace n07;
    s32 r = sSkySpriteDefaultGfx[kind];
    if (kind == 4) {
        r = SkySprites_GetMoonPhaseGfx();
    } else if (kind == 7) {
        if (Random_GlobalBelow(2) != 0) r = 0x28;
    } else if (kind == 5) {
        if ((arg & 1) != 0) r = 0x21;
    } else if (kind == 9) {
        s32 v = (arg & 0xf) + 0x1d;
        if ((u32)(v - 0x1d) <= 1) {
            r = 0x2d;
        } else if (v == 0x21 || v == 0x24 || v == 0x27 || v == 0x2a) {
            r = 0x2b;
        } else {
            r = 0x2c;
        }
    } else if (kind == 2) {
        s32 v = arg & 0xf;
        if (v == 0) r = 0x2f;
        else if (v == 1) r = 0x31;
        else r = 0x30;
    }
    return r;
}
namespace n07 {

}
Unk_020bc754_Slot *Unk_020bc58c::spawn(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg) {
    using namespace n07;
    s32 t = getGfxIdForKind(kind, arg);
    Unk_020bc754_Slot *slot = NULL;
    s32 grp = pickGfxSlot(t);
    if (grp != 5) {
        s32 n = findFreeIndex(kind, idx);
        if (n != 0x3c) {
            if (grp != 6) {
                SkyObjGfxSlot_Acquire(&gfxSlots[grp], t, palette);
                releaseConflictingSlots(grp);
            }
            slot = &sprites[n];
            _ZN12Unk_020be2045clearEv(slot);
            sprites[n].kind = kind;
            slot->state = 1;
            slot->gfxSlot = grp;
            slot->gfxId = t;
            slot->palette = data_020d16f5[t * 16];
            if (vec != NULL) {
                slot->screenPosX = vec->x;
                slot->screenPosY = vec->y;
                slot->screenPosZ = vec->z;
            }
            _ZN12Unk_020be20410initByKindEj(slot, arg);
            spriteCount++;
        }
    }
    return slot;
}
namespace n07 {

}
void Unk_020bc58c::killKind(s32 id) {
    using namespace n07;
    Unk_020bc754_Slot *p, *end = &sprites[0x3c];
    for (p = &sprites[0]; p < end; p++) {
        if (id == p->kind) {
            _ZN12Unk_020be0f49endByKindEv(p);
            spriteCount--;
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::killAll() {
    using namespace n07;
    Unk_020bc754_Slot *p, *end = &sprites[0x3c];
    for (p = &sprites[0]; p < end; p++) {
        if (p->kind != 0xd) {
            _ZN12Unk_020be0f49endByKindEv(p);
            spriteCount--;
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::spawnInitialPrecip() {
    using namespace n07;
    BOOL a, b;
    s32 v = data_021f1448[9];
    a = (v == 3);
    b = (v == 4);
    if (a || b) {
        s32 w = data_021f1448[13];
        s32 idx = 0xd;
        if (w == 1) idx = 0;
        else if (w == 2) idx = 1;
        precipIntensity = 0x6400;
        snowCounter = 0x32;
        if (idx != 0xd) {
            s32 n = a ? 15 : 20;
            s32 i;
            for (i = 0; i < n; i++) {
                spawn(idx, 0x3c, NULL, 1);
            }
        }
        if (a) rainStrength = 0x800;
        else rainStrength = 0x1000;
    } else {
        precipIntensity = 0;
        snowCounter = 0;
        rainStrength = 0;
    }
}
namespace n07 {

}
void Unk_020bc58c::updateLightning() {
    using namespace n07;
    if (thunderTimer <= 0) thunderTimer = 0x32;
    thunderTimer--;
    if (thunderTimer <= 0) {
        if (Random_GlobalBelow(8) == 0) {
            spawn(8, 0x3b, NULL, 0);
        }
        SceneLights_StartFlash(0);
        thunderTimer = Random_GlobalBelow(200) + 10;
    }
}
namespace n07 {

}
void Unk_020bc58c::updateThunderFlash() {
    using namespace n07;
    if (thunderTimer <= 0) thunderTimer = 0x32;
    thunderTimer--;
    if (thunderTimer <= 0) {
        SceneLights_StartFlash(0);
        thunderTimer = Random_GlobalBelow(200) + 10;
    }
}
namespace n07 {

#undef data_021f1448
#undef data_020d16f0
#undef data_020d16f5
#undef data_020e6794
}

// ======== unk_020bbc28.cpp ========
namespace n06 {
typedef void (Unk_020bbc28::*Unk_020bbeb8_Fn)();
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
BOOL NpcRegistry_FindSpNpc(s32);
}
extern "C" {
BOOL _ZN8NpcActor10isUpdatingEv();
}
extern "C" {
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *, s32);
}
extern "C" {
s32 Weather_GetFallingPrecip();
}
extern "C" {
void TownSessionState_Get();
}
extern "C" {
void TownSessionState_GetPeteFall();
}
extern "C" {
s32 _ZN13PeteFallState15isVisitorActiveEv();
}
extern "C" {
void TownSessionState_GetVisitorFlags();
}
extern "C" {
s32 _ZN17VisitorSpawnFlags16isVisitorSpawnedEv();
}
extern "C" {
s32 _ZN8SaveData8testFlagEj(void *, s32);
}
extern "C" {
extern char gSaveData[];
}
extern "C" {
extern Unk_020d0f40 sRainSpawnRates[];
}
extern "C" {
extern Unk_020d0f40 sSnowSpawnRates[];
}
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } gWeatherManager; } }
#define data_021f1448 n06::L_021f1448::gWeatherManager.v
namespace L_021ed2b6 { extern "C" { extern struct S { u8 p[6]; WeatherRecord v; } data_021ed2b0; } }
extern "C" {
void Clock_GetDateTime(void *);
}
extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}
extern "C" {
s32 Event_GetState(s32, void *, s32);
}
extern "C" {
s32 Random_GlobalBelow(s32);
}
extern "C" {
s32 EventAnnounce_GetActiveEvent();
}
extern "C" {
BOOL Scene_InTownUnk31();
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(CommManager *);
}
extern "C" {
s32 Scene_GetCurrent();
}
extern "C" {
void Math_StepS32Alt(void *, s32, s32);
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
BOOL _ZN12Unk_02097ff48testFlagEj(void *, s32);
}
extern "C" {
BOOL SkyShot_HasMaxHits();
}
extern "C" {
void _ZN13SkyObjPalette16pickBalloonColorEv(void *);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}

}
void Unk_020bbc28::updateRain() {
    using namespace n06;
    s32 kind = 0;
    s32 a = data_021f1448.level;
    s32 b = data_021f1448.targetLevel;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        precipIntensity = 0;
    } else {
        Unk_020d0f40 *t = &sRainSpawnRates[kind - 1];
        if (spawnInterval == 0) {
            spawnInterval = t->baseInterval + Random_GlobalBelow(t->randomInterval);
        }
        if (b >= 3) {
            precipIntensity += 2;
            if (precipIntensity > 0x6400) {
                precipIntensity = 0x6400;
            }
        } else {
            precipIntensity -= 2;
            if (precipIntensity < 0) {
                precipIntensity = 0;
            }
        }
        spawnAccum += precipIntensity >> 8;
        while (spawnAccum >= spawnInterval) {
            spawn(0, 0x3c, 0, 0);
            spawnAccum -= spawnInterval;
            if (spawnAccum <= spawnInterval) {
                spawnInterval = t->baseInterval + Random_GlobalBelow(t->randomInterval);
                if (spawnInterval < 0x23) {
                    spawnInterval = 0x23;
                }
                spawnAccum = 0;
                break;
            }
        }
    }
    if (kind == 4) {
        updateLightning();
    }
    Math_StepS32Alt(rainStrength, b == 4 ? 0x1000 : 0x800, 2);
}
namespace n06 {

}
void Unk_020bbc28::updateSnow() {
    using namespace n06;
    s32 kind = 0;
    s32 a = data_021f1448.level;
    s32 b = data_021f1448.targetLevel;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        spawnInterval = 0;
        snowCounter = 0;
    } else {
        Unk_020d0f40 *t = &sSnowSpawnRates[kind - 1];
        if (spawnInterval == 0) {
            spawnInterval = 0x3e8;
        }
        if (snowCounter > 2) {
            if (b >= 3) {
                precipIntensity += 2;
                if (precipIntensity > 0x6400) {
                    precipIntensity = 0x6400;
                }
            } else {
                precipIntensity -= 2;
                if (precipIntensity < 0) {
                    precipIntensity = 0;
                }
            }
        } else {
            if (b >= 3) {
                precipIntensity = 0x6400;
            } else {
                precipIntensity -= 2;
                if (precipIntensity < 0) {
                    precipIntensity = 0;
                }
            }
        }
        spawnAccum += precipIntensity >> 8;
        while (spawnAccum >= spawnInterval) {
            spawn(1, 0x3c, 0, 0);
            spawnAccum -= spawnInterval;
            if (spawnAccum <= spawnInterval) {
                switch (snowCounter) {
                case 0:
                    spawnInterval = 0x2af8;
                    spawnAccum = 0;
                    break;
                case 1:
                    spawnInterval = 0x2328;
                    spawnAccum = 0;
                    break;
                default:
                    spawnInterval = t->baseInterval + Random_GlobalBelow(t->randomInterval);
                    if (snowCounter < 0x32) {
                        spawnAccum = 0x4b;
                    } else {
                        spawnAccum = 0;
                    }
                    break;
                }
                snowCounter++;
                if (snowCounter > 0x32) {
                    snowCounter = 0x32;
                }
                break;
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::updateShootingStar() {
    using namespace n06;
    u8 v = hour;
    BOOL a = TRUE;
    if (v < 0x13 && v >= 4) {
        a = FALSE;
    }
    s32 x = data_021f1448.level;
    BOOL c = FALSE;
    if (x != 3 && x != 4) {
        c = TRUE;
    }
    BOOL d = FALSE;
    if (fireworksPattern == 0 && findKind(9) == 0x3c) {
        d = TRUE;
    }
    if (a && c && d) {
        if (shootingStarDelay > 0) {
            shootingStarDelay--;
            if (shootingStarDelay == 0) {
                spawn(3, 0x1e, 0, 0);
            }
        } else if (second == 0x1e && second != prevSecond) {
            if (!Random_GlobalBelow(L_021ed2b6::data_021ed2b0.v.todayPattern == 0 ? 4 : 0x100)) {
                shootingStarDelay = Random_GlobalBelow(0x258);
            }
        }
    } else {
        shootingStarDelay = 0;
    }
}
namespace n06 {

}
void Unk_020bbc28::updateMoon() {
    using namespace n06;
    u8 v = hour;
    BOOL b;
    if (moonSpriteKind == 4) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (v >= 0x13 || v < 4) {
        if (!b) {
            spawn(4, 0x1f, 0, 0);
        }
    } else if (b) {
        killKind(4);
    }
}
namespace n06 {

}
namespace n00 {
extern "C" {
void *data_020e510c[9] = {(void *)data_020e4c24, (void *)0x2, 0, (void *)data_020e4c34, (void *)0x1, 0,
    (void *)data_020e4bf4, (void *)0x1, 0};
void *data_020e4a88[3] = {(void *)data_020e470c, (void *)0x1, 0};
u32 data_020e46dc[2] = {0x1fc00fc, 0xffff0040};
u32 data_020e46fc[2] = {0x81f000f0, 0xffff209c};
void *data_020e46f4[2] = {(void *)_ZN12Unk_020be0188initPeteEv, 0};
void *data_020e46bc[2] = {(void *)_ZN12Unk_020be01815updateLightningEv, 0};
u32 data_020e4ba4[4] = {0xa1f88000, 0x9e, 0xa1f880e0, 0xffff011e};
void *data_020e4aa0[3] = {(void *)data_020e48c4, (void *)0x1, 0};
void *data_020e4aac[3] = {(void *)data_020e4a0c, (void *)0x1, 0};
void *data_020e5130[9] = {(void *)data_020e4c44, (void *)0x2, 0, (void *)data_020e4c54, (void *)0x1, 0,
    (void *)data_020e4c64, (void *)0x1, 0};
char data_020e4ec8[30] = "/sky/d_2d_b_cld_c1_bg_nsc.bin";
void *data_020e4894[2] = {(void *)_ZN15SkyShotSequence9actUfoHitEv, 0};
const u32 data_020d10e8[12] = {0x48a548a5, 0x48a548a5, 0x48c648a5, 0x4d2948e7, 0x4d4a4d4a, 0x4d4a4d4a,
    0x4d4a4d4a, 0x4d4a4d4a, 0x4d294d4a, 0x4ca54ce7, 0x48a548a5, 0x48a548a5};
u32 data_020e4bb4[4] = {0x41fc80e0, 0x9d, 0x41fc8000, 0xffff011d};
void *data_020e467c[2] = {(void *)_ZN12Unk_020be0187endPeteEv, 0};
const u32 data_020d1118[12] = {0x72d16eb1, 0x76f472d2, 0x7ef57af5, 0x7f567f14, 0x7fb97fb9, 0x7fb97fb9,
    0x7fb97fb9, 0x7fb97fb9, 0x7b397fb9, 0x76f676b6, 0x76f57716, 0x6eb272f4};
u32 data_020e4bc4[4] = {0x1400e7, 0x30f6, 0x1e70000, 0xffff30b7};
const u32 data_020d0ef8[6] = {0xb0b0b0b, 0x13000b0b, 0x15141413, 0x16161615, 0xb001315, 0xb0b0b0b};
void *data_020e4a04[2] = {(void *)_ZN12Unk_020be01812initFireworkEj, 0};
void *data_020e5154[9] = {(void *)data_020e4ba4, (void *)0x2, 0, (void *)data_020e4c74, (void *)0x1, 0,
    (void *)data_020e4c84, (void *)0x1, 0};
u32 data_020e4bd4[4] = {0x1600e7, 0x30d4, 0x1e90002, 0xffff30f6};
void *data_020e5230[10] = {(void *)data_020e4e48, (void *)data_020e4e48, (void *)data_020e4e68,
    (void *)data_020e4e88, (void *)data_020e4ea8, (void *)data_020e4ec8, (void *)data_020e4ee8,
    (void *)data_020e4f08, (void *)data_020e4f28, (void *)data_020e4f48};
void *data_020e4944[2] = {(void *)SkySprite_EndMoon, 0};
u32 data_020e4a24[2] = {0x81f000f0, 0xffff2118};
u32 data_020e4be4[4] = {0x1800e7, 0x30f7, 0x1eb0004, 0xffff30d4};
void *sCloudScreenFiles[3] = {(void *)data_020e5230, (void *)data_020e4d98, (void *)data_020e4d70};
void *sSkyLightColorTables[5] = {(void *)data_020e4b74, (void *)data_020e4b74, (void *)data_020e4b84,
    (void *)data_020e4b84, (void *)data_020e4b84};
u32 data_020e488c[2] = {0x0, 0xffff00b4};
u32 data_020e55c0[20] = {0x300200e8, 0x3094, 0x201000fe, 0x30b6, 0x10000009, 0x30b6, 0x1eb00fa, 0x30b6, 0xc00f4,
    0x30b6, 0x1f800eb, 0x3095, 0x300f000c, 0x30b4, 0x200f00ea, 0x30d7, 0x1f200f1, 0x30d7, 0x1ed0004,
    0xffff3097};
const u32 data_020d0f10[6] = {0xc0c0c0c, 0x60a, 0x0, 0x0, 0x6000000, 0xc0c0c0a};
void *data_020e46b4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct07Ev, 0};
char data_020e5048[31] = "/sky/d_2d_b_cld_r_b_bg_nsc.bin";
void *data_020e47a4[2] = {(void *)_ZN12Unk_020be20410updateShotEv, 0};
u32 sSkyLineScrollY[2];
const u32 sSkySpriteDefaultGfx[13] = {0x0, 0x1, 0x2f, 0x2, 0x3, 0x1f, 0x23, 0x26, 0x2a, 0x2b, 0x2e, 0x32, 0x33};
char data_020e4df4[27] = "/sky/a_sky_fly_obj_ncg.bin";
u32 data_020e4bf4[4] = {0x51fc80e0, 0x9c, 0x51fc8000, 0xffff011c};
u32 data_020e482c[2] = {0x81f004f0, 0xffff0094};
u32 data_020e4684[2] = {0x81f000f0, 0xffff409c};
u32 data_020e4c04[4] = {0x81f880e0, 0x9e, 0x81f88000, 0xffff011e};
u32 data_020e4674[2] = {0x81f000f0, 0xffff3118};
char data_020e4ee8[30] = "/sky/d_2d_b_cld_r0_bg_nsc.bin";
u32 data_020e49a4[2] = {0x81f000f0, 0xffff3098};
u32 data_020e484c[2] = {0x81e003e0, 0xffff9118};
char data_020e4f28[30] = "/sky/d_2d_b_cld_h0_bg_nsc.bin";
void *data_020e519c[9] = {(void *)data_020e4cc4, (void *)0x2, 0, (void *)data_020e4cd4, (void *)0x1, 0,
    (void *)data_020e4b54, (void *)0x1, 0};
void *data_020e479c[2] = {(void *)_ZN12Unk_020be20413updateRainbowEv, 0};
u32 data_020e4c44[4] = {0xb1f88000, 0x9e, 0xb1f880e0, 0xffff011e};
const u32 sRainSpawnRates[8] = {0x2d, 0x69, 0x1e, 0x5a, 0xf, 0x4b, 0x1, 0x3c};
u32 data_020e47fc[2] = {0x91f000f0, 0xffff211c};
void *data_020e51c0[9] = {(void *)data_020e4ce4, (void *)0x2, 0, (void *)data_020e4cf4, (void *)0x1, 0,
    (void *)data_020e4d04, (void *)0x1, 0};
u32 sSkyBlendLineCache[1] = {0xffffffff};
u32 data_020e4c74[4] = {0x61fc8000, 0x9d, 0x61fc80e0, 0xffff011d};
u32 data_020e4c84[4] = {0x61fc8000, 0x9c, 0x61fc80e0, 0xffff011c};
void *data_020e4a4c[2] = {(void *)_ZN12Unk_020bfe3012initRainDropEi, 0};
void *data_020e4af4[3] = {(void *)data_020e485c, (void *)0x4, 0};
void *data_020e4b00[3] = {(void *)data_020e487c, (void *)0x4, 0};
void *data_020e4ddc[6] = {(void *)data_020e4a3c, (void *)0x2, 0, (void *)data_020e483c, (void *)0x1, 0};
u32 data_020e5a34[48] = {0x800004d0, 0x1114, 0x802084d0, 0x1118, 0x3044d8, 0x113a, 0x403004e0, 0x115a,
    0x802004f0, 0x1098, 0x1804f0, 0x109f, 0x80400410, 0x111c, 0x380410, 0x111b, 0x80404400, 0x10dc, 0x404004f0,
    0x109c, 0x4004e8, 0x10bf, 0x91e004d0, 0x1114, 0x91d084d0, 0x1118, 0x11c044d8, 0x113a, 0x51c004e0, 0x115a,
    0x91c004f0, 0x1098, 0x11e004f0, 0x109f, 0x91a00410, 0x111c, 0x11c00410, 0x111b, 0x91a04400, 0x10dc,
    0x51b004f0, 0x109c, 0x11b804e8, 0x10bf, 0x5004f8, 0x10be, 0x11a804f8, 0xffff10be};
u32 sSkyGradient[196];
u32 data_020e4a1c[2] = {0x81f000f0, 0xffff309c};
u32 sSkyLineScrollX[2];
void *data_020e464c[2] = {(void *)_ZN15SkyShotSequence11actPeteFallEv, 0};
u32 data_020e4814[2] = {0x81f000f0, 0xffff4098};
u32 data_020e4ce4[4] = {0xa1f88000, 0x9a, 0xa1f880e0, 0xffff011a};
void *data_020e4b18[3] = {(void *)data_020e4854, (void *)0x4, 0};
u32 data_020e4d04[4] = {0x61fc8000, 0x98, 0x61fc80e0, 0xffff0118};
u32 data_020e4630[1] = {0x3d};
void *sSkyLightParamTables[5] = {(void *)data_020e478c, (void *)data_020e478c, (void *)data_020e4824,
    (void *)data_020e4824, (void *)data_020e4824};
const u32 sSkyCloudBgLayer[1] = {0x206};
void *data_020e4794[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct02Ev, 0};
void *data_020e51e4[9] = {(void *)data_020e4b94, (void *)0x2, 0, (void *)data_020e4d14, (void *)0x1, 0,
    (void *)data_020e4d24, (void *)0x1, 0};
char data_020e50a8[31] = "/sky/d_2d_b_cld_c_a_bg_nsc.bin";
SkySprites gSkySprites;
void *data_020e4974[2] = {(void *)_ZN12Unk_020be0189updateUfoEv, 0};
void *data_020e4994[2] = {(void *)SkySprites_FireworksPatternAct0F, 0};
u32 data_020e499c[2] = {0x91f000f0, 0xffff2118};
void *data_020e49b4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct06Ev, 0};
void *data_020e4b48[3] = {(void *)data_020e4734, (void *)0x4, 0};
void *const sSkyObjCharFiles[3] = {(void *)data_020e4dac, (void *)data_020e4df4, 0};
u32 data_020e477c[2] = {0x81f000f0, 0xffff311c};
void *data_020e46e4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct01Ev, 0};
u32 data_020e4774[2] = {0x1fc00fc, 0xffff0057};
u32 data_020e492c[2] = {0x91f000f0, 0xffff2118};
const u32 data_020d0ec8[6] = {0xe0e0e0e, 0x18000e0e, 0x1a191918, 0x1b1b1b1a, 0xe00181a, 0xe0e0e0e};
const u32 sFireworkColors[4] = {0x21b0340, 0x340021b, 0x7c7b7e24, 0x211f7c7b};
u32 data_020e486c[2] = {0x81f000f0, 0xffff3118};
u32 data_020e4a14[2] = {0x81f880f0, 0xffff409a};
const u32 data_020d0fc8[12] = {0x4000000, 0xc200820, 0x3e0a1440, 0x67fb67f4, 0x67ff67ff, 0x67ff67ff, 0x5bff67ff,
    0x3fdf4bdf, 0x1abf33df, 0x16d021f, 0x6300a5, 0x210042};
char data_020e4dac[23] = "/sky/a_sky_obj_ncg.bin";
const u32 sSnowFallSpeeds[3] = {0x2402, 0x123a, 0x17e2};
void *data_020e4714[2] = {(void *)SkySprite_InitParticle, 0};
u32 data_020e5520[20] = {0x300000ed, 0x3094, 0x200a00fc, 0x30b6, 0x10010007, 0x30b6, 0x1ee00fa, 0x30b6, 0x900f3,
    0x30b6, 0x1f900ee, 0x3095, 0x300b0008, 0x30b4, 0x100c00ed, 0x3097, 0x1f500f3, 0x30b4, 0x1ef0002,
    0xffff3097};
u32 data_020e49f4[2] = {0x81e003e0, 0xffff911c};
const u32 sParticleTrailScales[23] = {0x5000, 0x16db, 0x1000, 0xe8c, 0xd55, 0xc4f, 0xc4f, 0xc4f, 0xc4f, 0xc4f, 0xc4f,
    0xd55, 0xe8c, 0x1000, 0x11c7, 0x1400, 0x16db, 0x1aab, 0x2000, 0x2800, 0x3555, 0x5000, 0xa000};
void *data_020e46a4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct08Ev, 0};
u32 data_020e48f4[2] = {0x81f880f0, 0xffff409c};
char data_020e5028[31] = "/sky/d_2d_b_cld_c_b_bg_nsc.bin";
u32 data_020e4734[2] = {0x81f000f0, 0xffff0114};
void *data_020e56b0[21] = {(void *)data_020e48d4, (void *)0x2, 0, (void *)data_020e46fc, (void *)0x2, 0,
    (void *)data_020e475c, (void *)0x2, 0, (void *)data_020e4844, (void *)0x2, 0, (void *)data_020e47fc,
    (void *)0x2, 0, (void *)data_020e492c, (void *)0x2, 0, (void *)data_020e491c, (void *)0x2, 0};
u32 sSkyBlackBackdrop[1];
u32 data_020e5570[20] = {0x300100ea, 0x3094, 0x200d00fd, 0x30b6, 0x10000008, 0x30b6, 0x1ec00fa, 0x30b6, 0xb00f3,
    0x30b6, 0x1f800ec, 0x3095, 0x300e000b, 0x30b4, 0x100e00eb, 0x3097, 0x1f300f2, 0x30d7, 0x1ed0003,
    0xffff3097};
void *data_020e5d04[132] = {0, (void *)0x2, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, (void *)0x10000, (void *)data_020e49ec, (void *)0x1, (void *)0x20000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x20000, (void *)data_020e49ec, (void *)0x1, (void *)0x30000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x30000, (void *)data_020e49ec, (void *)0x1, (void *)0x40000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x40000, (void *)data_020e49ec, (void *)0x1, (void *)0x50000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x50000, (void *)data_020e49ec, (void *)0x1, (void *)0x60000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x60000, (void *)data_020e49ec, (void *)0x1, (void *)0x60000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x70000, (void *)data_020e49ec, (void *)0x1, (void *)0x70000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x80000, (void *)data_020e49ec, (void *)0x1, (void *)0x80000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x90000, (void *)data_020e49ec, (void *)0x1, (void *)0x90000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49ec, (void *)0x1, (void *)0xa0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49ec, (void *)0x1, (void *)0xb0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49ec, (void *)0x1, (void *)0xc0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49ec, (void *)0x1, (void *)0xc0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49ec, (void *)0x1, (void *)0xd0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49ec, (void *)0x1, (void *)0xe0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49ec, (void *)0x1, (void *)0xe0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49ec, (void *)0x1, (void *)0xf0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49ec, (void *)0x1, (void *)0xf0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xf0000};
const u32 data_020d0ee0[6] = {0x10101010, 0x80d, 0x0, 0x0, 0x8000000, 0x1010100d};
void *data_020e48b4[2] = {(void *)SkySprite_InitMoon, 0};
void *data_020e48ac[2] = {(void *)SkySprite_UpdateParticle, 0};
u32 sRainSideToggle[1] = {0x1};
const u32 data_020d10b8[12] = {0x3ed03ed0, 0x3ed03ed0, 0x31e93ed0, 0x106024e2, 0x4200820, 0x400, 0x4000000,
    0xc010800, 0x18011001, 0x31ea2443, 0x3ed03ed0, 0x3ed03ed0};
u32 data_020e465c[2] = {0x81f000f0, 0xffff311c};
void *data_020e57d0[27] = {(void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
void *data_020e494c[2] = {(void *)SkySprite_EndShootingStar, 0};
u32 data_020e48bc[2] = {0x81f000f0, 0xffff209c};
void *data_020e4ab8[3] = {(void *)data_020e47b4, (void *)0x1, 0};
void *data_020e48e4[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct04Ev, 0};
char data_020e4f08[30] = "/sky/d_2d_b_cld_r1_bg_nsc.bin";
u32 data_020e4884[2] = {0x81f000f0, 0xffff2098};
void *data_020e47bc[2] = {(void *)_ZN15SkyShotSequence13actShotFlightEv, 0};
void *data_020e4a44[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct0BEv, 0};
void *data_020e46c4[2] = {(void *)_ZN15SkyShotSequence14actBalloonDropEv, 0};
u32 sSkyHBlankTask[7];
void *data_020e468c[2] = {(void *)_ZN12Unk_020be20411initRainbowEv, 0};
void *data_020e473c[2] = {(void *)_ZN12Unk_020be2048initBirdEj, 0};
u32 data_020e4c14[4] = {0x41fc80e0, 0x9c, 0x41fc8000, 0xffff011c};
u32 data_020e466c[2] = {0x81f000f0, 0xffff209c};
void *data_020e49c4[2] = {(void *)SkySprite_UpdateBalloon, 0};
void *data_020e583c[27] = {(void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
char data_020e4f48[30] = "/sky/d_2d_b_cld_h1_bg_nsc.bin";
u32 data_020e49cc[2] = {0x81f000f0, 0xffff3098};
u32 data_020e4c64[4] = {0x71fc8000, 0x9c, 0x71fc80e0, 0xffff011c};
void *data_020e493c[2] = {(void *)SkySprite_EndBalloon, 0};
void *data_020e5288[12] = {(void *)data_020e4884, (void *)0x2, 0, (void *)data_020e48bc, (void *)0x2, 0,
    (void *)data_020e4a24, (void *)0x2, 0, (void *)data_020e497c, (void *)0x2, 0};
u32 data_020e46ec[2] = {0x1fc00fc, 0xffff0058};
void *sSkyPaletteFiles[4] = {(void *)data_020e4f68, (void *)data_020e4f88, (void *)data_020e4fa8,
    (void *)data_020e4fc8};
u32 data_020e49fc[2] = {0x81e003e0, 0xffff909c};
u32 data_020e4a0c[2] = {0x41fb80f0, 0xffff9096};
void *data_020e6334[132] = {0, (void *)0x2, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, (void *)0x10000, (void *)data_020e49fc, (void *)0x1, (void *)0x20000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x20000, (void *)data_020e49fc, (void *)0x1, (void *)0x30000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x30000, (void *)data_020e49fc, (void *)0x1, (void *)0x40000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x40000, (void *)data_020e49fc, (void *)0x1, (void *)0x50000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x50000, (void *)data_020e49fc, (void *)0x1, (void *)0x60000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x60000, (void *)data_020e49fc, (void *)0x1, (void *)0x60000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x70000, (void *)data_020e49fc, (void *)0x1, (void *)0x70000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x80000, (void *)data_020e49fc, (void *)0x1, (void *)0x80000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x90000, (void *)data_020e49fc, (void *)0x1, (void *)0x90000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49fc, (void *)0x1, (void *)0xa0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49fc, (void *)0x1, (void *)0xb0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49fc, (void *)0x1, (void *)0xc0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49fc, (void *)0x1, (void *)0xc0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49fc, (void *)0x1, (void *)0xd0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49fc, (void *)0x1, (void *)0xe0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49fc, (void *)0x1, (void *)0xe0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49fc, (void *)0x1, (void *)0xf0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49fc, (void *)0x1, (void *)0xf0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xf0000};
u32 data_020e48cc[2] = {0xc1c003c0, 0xffff9098};
u32 data_020e475c[2] = {0x81f000f0, 0xffff2118};
void *data_020e47ac[2] = {(void *)_ZN12Unk_020be2048initShotEj, 0};
void *data_020e5318[12] = {(void *)data_020e4814, (void *)0x1, 0, (void *)data_020e4684, (void *)0x1, 0,
    (void *)data_020e47f4, (void *)0x1, 0, (void *)data_020e47ec, (void *)0x1, 0};
void *data_020e4744[2] = {(void *)SkySprite_UpdateSnowFlake, 0};
void *data_020e5348[12] = {(void *)data_020e49cc, (void *)0x2, 0, (void *)data_020e4644, (void *)0x2, 0,
    (void *)data_020e4674, (void *)0x2, 0, (void *)data_020e465c, (void *)0x2, 0};
void *data_020e5914[27] = {(void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
void *data_020e4914[2] = {(void *)_ZN12Unk_020be20410endRainbowEv, 0};
void *data_020e4824[2] = {(void *)data_020d0ef8, (void *)data_020d0f10};
void *data_020e5764[27] = {(void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
char data_020e4fe8[31] = "/sky/d_2d_b_cld_b_b_bg_nsc.bin";
void *data_020e4934[2] = {(void *)_ZN12Unk_020be0186endUfoEv, 0};
void *data_020e5af4[132] = {0, (void *)0x2, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, (void *)0x10000, (void *)data_020e48cc, (void *)0x1, (void *)0x20000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x20000, (void *)data_020e48cc, (void *)0x1, (void *)0x30000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x30000, (void *)data_020e48cc, (void *)0x1, (void *)0x40000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x40000, (void *)data_020e48cc, (void *)0x1, (void *)0x50000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x50000, (void *)data_020e48cc, (void *)0x1, (void *)0x60000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x60000, (void *)data_020e48cc, (void *)0x1, (void *)0x60000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x70000, (void *)data_020e48cc, (void *)0x1, (void *)0x70000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x80000, (void *)data_020e48cc, (void *)0x1, (void *)0x80000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x90000, (void *)data_020e48cc, (void *)0x1, (void *)0x90000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xa0000, (void *)data_020e48cc, (void *)0x1, (void *)0xa0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e48cc, (void *)0x1, (void *)0xb0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e48cc, (void *)0x1, (void *)0xc0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xc0000, (void *)data_020e48cc, (void *)0x1, (void *)0xc0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e48cc, (void *)0x1, (void *)0xd0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e48cc, (void *)0x1, (void *)0xe0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e48cc, (void *)0x1, (void *)0xe0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e48cc, (void *)0x1, (void *)0xf0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xf0000, (void *)data_020e48cc, (void *)0x1, (void *)0xf0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4b54[4] = {0x51fc80e0, 0x98, 0x51fc8000, 0xffff0118};
const u32 sFireworksPatternDelays[5] = {0xfa780000, 0xfa7828, 0x0, 0x280000, 0x2800};
const u32 sSkyObjPalDefaultColor[1] = {0x0};
u32 data_020e47c4[2] = {0x41fb80f0, 0xffff9094};
const u32 data_020d1058[12] = {0x6b516731, 0x73516f51, 0x7fb47792, 0x7ffc7ff5, 0x7fff7fff, 0x7fff7fff,
    0x7fff7fff, 0x6fdf77df, 0x6f7f6bdf, 0x5ef566ff, 0x6f756f97, 0x6b526f74};
void *data_020e4a7c[3] = {(void *)data_020e49d4, (void *)0x1, 0};
const u32 data_020d1088[12] = {0x10010000, 0x30232022, 0x48a83c44, 0x5dee554c, 0x668f668f, 0x668f668f,
    0x668f668f, 0x668f668f, 0x5a2f668f, 0x45084d8c, 0x2c633cc6, 0xc211c42};
u32 data_020e498c[2] = {0x41f003f0, 0xffff0810};
u32 data_020e489c[2] = {0x81f880f0, 0xffff409c};
void *sCloudCharFiles[5] = {(void *)data_020e4e10, (void *)data_020e4e10, (void *)data_020e4e10,
    (void *)data_020e4e10, (void *)data_020e4e10};
void *data_020e471c[2] = {(void *)SkySprite_InitBalloon, 0};
void *data_020e5f14[132] = {0, (void *)0x2, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, (void *)0x10000, (void *)data_020e484c, (void *)0x1, (void *)0x20000, (void *)data_020e484c,
    (void *)0x1, (void *)0x20000, (void *)data_020e484c, (void *)0x1, (void *)0x30000, (void *)data_020e484c,
    (void *)0x1, (void *)0x30000, (void *)data_020e484c, (void *)0x1, (void *)0x40000, (void *)data_020e484c,
    (void *)0x1, (void *)0x40000, (void *)data_020e484c, (void *)0x1, (void *)0x50000, (void *)data_020e484c,
    (void *)0x1, (void *)0x50000, (void *)data_020e484c, (void *)0x1, (void *)0x60000, (void *)data_020e484c,
    (void *)0x1, (void *)0x60000, (void *)data_020e484c, (void *)0x1, (void *)0x60000, (void *)data_020e484c,
    (void *)0x1, (void *)0x70000, (void *)data_020e484c, (void *)0x1, (void *)0x70000, (void *)data_020e484c,
    (void *)0x1, (void *)0x80000, (void *)data_020e484c, (void *)0x1, (void *)0x80000, (void *)data_020e484c,
    (void *)0x1, (void *)0x90000, (void *)data_020e484c, (void *)0x1, (void *)0x90000, (void *)data_020e484c,
    (void *)0x1, (void *)0xa0000, (void *)data_020e484c, (void *)0x1, (void *)0xa0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xb0000, (void *)data_020e484c, (void *)0x1, (void *)0xb0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xb0000, (void *)data_020e484c, (void *)0x1, (void *)0xc0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xc0000, (void *)data_020e484c, (void *)0x1, (void *)0xc0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xd0000, (void *)data_020e484c, (void *)0x1, (void *)0xd0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xd0000, (void *)data_020e484c, (void *)0x1, (void *)0xe0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xe0000, (void *)data_020e484c, (void *)0x1, (void *)0xe0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xe0000, (void *)data_020e484c, (void *)0x1, (void *)0xf0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xf0000, (void *)data_020e484c, (void *)0x1, (void *)0xf0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4854[2] = {0x0, 0xffff00d4};
void *sSkyFogOffsetTables[5] = {(void *)data_020d1148, (void *)data_020d1148, (void *)data_020d1178,
    (void *)data_020d1178, (void *)data_020d1178};
void *data_020e4adc[3] = {(void *)data_020e4a5c, (void *)0x4, 0};
void *data_020e46ac[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct05Ev, 0};
const u32 sFireworkScaleBigLong[44] = {0x1000, 0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c,
    0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835,
    0x835, 0x835, 0x835, 0x835, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800,
    0x800, 0x800, 0x800};
void *data_020e496c[2] = {(void *)SkySprite_UpdateShootingStar, 0};
void *data_020e4a64[3] = {(void *)data_020e5a34, (void *)0x4, 0};
void *data_020e4b24[3] = {(void *)data_020e4774, (void *)0x1, 0};
u32 data_020e4c94[4] = {0x81f880e0, 0x9a, 0x81f88000, 0xffff011a};
u32 data_020e4cb4[4] = {0x41fc80e0, 0x98, 0x41fc8000, 0xffff0118};
s32 sSkyCrossingWidth = data_020c8cbc * 6;
u32 data_020e52e8[12] = {0x101400e8, 0x30b6, 0x1ef000d, 0x30b7, 0x11e300fe, 0x3095, 0x3012000a, 0x30d4,
    0x101800f8, 0x30d4, 0x21e800e8, 0xffff30b7};
char data_020e4fc8[30] = "/sky/d_2d_b_cld_r1_bg_ncl.bin";
void *data_020e48a4[2] = {(void *)_ZN15SkyShotSequence13actPeteFallenEv, 0};
const u32 sRainSeIds[4] = {0xffffffff, 0x80a, 0x4ce, 0xffffffff};
const u32 sFireworkScaleBig[9] = {0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c};
char data_020e5008[31] = "/sky/d_2d_b_cld_f_b_bg_nsc.bin";
void *data_020e474c[2] = {(void *)SkySprites_FireworksPatternAct11, 0};
u32 data_020e48ec[2] = {0x81f880f0, 0xffff411a};
u32 data_020e4b94[4] = {0xb1f88000, 0x9a, 0xb1f880e0, 0xffff011a};
void *data_020e46d4[2] = {(void *)SkySprites_FireworksPatternAct12, 0};
void *data_020e4694[2] = {(void *)_ZN12Unk_020bb25c21fireworksPatternAct03Ev, 0};
u32 data_020e48c4[2] = {0x41fb80f0, 0xffff9095};
u32 data_020e4844[2] = {0x81f000f0, 0xffff211c};
u32 data_020e483c[2] = {0x1fc80f8, 0xffff0095};
void *data_020e5178[9] = {(void *)data_020e4c94, (void *)0x2, 0, (void *)data_020e4b64, (void *)0x1, 0,
    (void *)data_020e4cb4, (void *)0x1, 0};
char data_020e5068[31] = "/sky/d_2d_b_cld_b_a_bg_nsc.bin";
const u32 sBirdDelays[1] = {0x50301};
void *data_020e4b0c[3] = {(void *)data_020e488c, (void *)0x4, 0};
void *data_020e4704[2] = {(void *)SkySprites_FireworksPatternAct13, 0};
const u32 sRainParallax[3] = {0x7fff, 0x6667, 0x4cce};
u32 data_020e54d0[20] = {0x31ff00f0, 0x3094, 0x200700fb, 0x30b6, 0x10020005, 0x30b6, 0x1f200fa, 0x30b6, 0x400f5,
    0x30b6, 0x1f900f0, 0x3095, 0x30090006, 0x30b4, 0x100800ef, 0x3097, 0x1f600f4, 0x30b4, 0x1f00002,
    0xffff3097};
void *data_020e50e8[9] = {(void *)data_020e4c04, (void *)0x2, 0, (void *)data_020e4bb4, (void *)0x1, 0,
    (void *)data_020e4c14, (void *)0x1, 0};
u32 data_020e5208[10] = {0x1fb00f1, 0x3095, 0x30060004, 0x30b4, 0x100500f1, 0x3097, 0x1fb00f8, 0x30b4, 0x1f20002,
    0xffff3097};
u32 data_020e4864[2] = {0x400080f0, 0xffff0095};
u32 data_020e53f8[18] = {0x1f700e7, 0x30b7, 0x120000, 0x30f6, 0x1010000c, 0x3097, 0x300400e4, 0x3095, 0x1e900f9,
    0x30b6, 0xe00f5, 0x30b6, 0x1100ea, 0x30d7, 0x11ef00ed, 0x30d7, 0x11ec0006, 0xffff3097};
void *data_020e4724[2] = {(void *)SkySprite_EndParticle, 0};
}
}
namespace n06 {
}
void Unk_020bbc28::updateFireworksShow() {
    using namespace n06;
    BOOL r4 = FALSE;
    BOOL r6 = FALSE;
    Unk_020bbcc8_Xxx s;
    Unk_020bbeb8_Fn fn;
    Unk_020bbcc8_Xxx t1, t2, t3, t4;
    s.a = 0;
    s.b = 0;
    s32 kind = EventAnnounce_GetActiveEvent();
    Clock_GetDateTime(&s);
    MI_CpuCopy8(&s, &t1, 8);
    if (Event_GetState(0x13, &t1, 1)) {
        u8 a = hour;
        u8 b = minute;
        s32 c = second;
        if (a < 2) {
            r4 = TRUE;
            if (a == 0 && b == 0 && c == 0) {
                r6 = TRUE;
            }
        }
    } else if (kind == 0xf) {
        if (Scene_InTownUnk31()) {
            MI_CpuCopy8(&s, &t2, 8);
            if (Event_GetState(0xf, &t2, r4)) {
                r4 = TRUE;
            }
        } else if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            MI_CpuCopy8(&s, &t3, 8);
            if (Event_GetState(0xf, &t3, r4)) {
                r4 = TRUE;
            }
        } else {
            r4 = TRUE;
        }
    } else if (Scene_GetCurrent() == 0x2c) {
        BOOL x;
        MI_CpuCopy8(&s, &t4, 8);
        if (Event_GetState(0xf, &t4, 1) == 2) {
            x = TRUE;
        } else {
            x = r4;
        }
        if (x) {
            r4 = TRUE;
        }
    }
    if (r4) {
        static Unk_020bbeb8_Fn tbl[20] = {
            0, *(Unk_020bbeb8_Fn *)n00::data_020e46e4, *(Unk_020bbeb8_Fn *)n00::data_020e4794, *(Unk_020bbeb8_Fn *)n00::data_020e4694,
            *(Unk_020bbeb8_Fn *)n00::data_020e48e4, *(Unk_020bbeb8_Fn *)n00::data_020e46ac, *(Unk_020bbeb8_Fn *)n00::data_020e49b4,
            *(Unk_020bbeb8_Fn *)n00::data_020e46b4, *(Unk_020bbeb8_Fn *)n00::data_020e46a4, *(Unk_020bbeb8_Fn *)n00::data_020e47dc,
            *(Unk_020bbeb8_Fn *)n00::data_020e47e4, *(Unk_020bbeb8_Fn *)n00::data_020e4a44, *(Unk_020bbeb8_Fn *)n00::data_020e47d4,
            *(Unk_020bbeb8_Fn *)n00::data_020e47cc, *(Unk_020bbeb8_Fn *)n00::data_020e46cc, *(Unk_020bbeb8_Fn *)n00::data_020e4994,
            *(Unk_020bbeb8_Fn *)n00::data_020e4804, *(Unk_020bbeb8_Fn *)n00::data_020e474c, *(Unk_020bbeb8_Fn *)n00::data_020e46d4,
            *(Unk_020bbeb8_Fn *)n00::data_020e4704,
        };
        if (fireworksPattern == 0) {
            s32 v;
            if (r6) {
                v = 0x12;
            } else if (Random_GlobalBelow(2) == 0) {
                v = 0xe;
            } else {
                v = 0x10;
            }
            selectFireworksPattern(v);
            fireworksPatternTime = 0;
        }
        fireworksPatternTime--;
        fn = tbl[fireworksPattern];
        (this->*fn)();
    } else {
        fireworksPattern = 0;
        fireworksPatternTime = 0;
        fireworksBigTimer = 0;
        fireworksSlotTimers = 0;
        fireworksSlotTimers1 = 0;
        fireworksSlotTimers2 = 0;
        fireworksSlotTimers3 = 0;
        fireworksInterval = 0;
    }
}
namespace n06 {

}
void Unk_020bbc28::updateBalloon() {
    using namespace n06;
    if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
        u8 v = hour;
        if (v >= 0xa && v < 0x10) {
            if (prevMinute != minute) {
                if ((u32)minute % 10 == 4) {
                    if (visitorSpriteKind != 5) {
                        if (balloonChance == 0) {
                            balloonChance = Random_GlobalBelow(8) + 1;
                        }
                        u8 c = balloonChance;
                        if (Random_GlobalBelow(8) < c) {
                            if (!_ZN12Unk_02097ff48testFlagEj(PlayerData_GetCurrent(), 0x30) && SkyShot_HasMaxHits() && !Random_GlobalBelow(4)) {
                                spawn(5, 0x2d, 0, 1);
                            } else {
                                spawn(5, 0x2d, 0, 0);
                                _ZN13SkyObjPalette16pickBalloonColorEv(palette);
                            }
                            balloonChance = 1;
                        } else if (c < 8) {
                            balloonChance++;
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::updateUfo() {
    using namespace n06;
    if (ufoEventToday != 0) {
        if (_ZN8SaveData8testFlagEj(gSaveData, 9)) {
            ufoEventToday = 0;
        } else {
            Unk_020bbcc8_Xxx s;
            Unk_020bbcc8_Xxx t;
            s.a = 0;
            s.b = 0;
            BOOL b;
            Clock_GetDateTime(&s);
            MI_CpuCopy8(&s, &t, 8);
            if (Event_GetState(0x44, &t, 0) == 0) {
                b = TRUE;
            } else {
                b = FALSE;
            }
            if (b) {
                ufoEventToday = 0;
            }
        }
    }
    if (ufoEventToday != 0) {
        if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
            u8 v = minute;
            u32 m = (u32)v % 10;
            if (prevMinute != v) {
                if (m == 2 || m == 7) {
                    TownSessionState_Get();
                    TownSessionState_GetVisitorFlags();
                    if (!_ZN17VisitorSpawnFlags16isVisitorSpawnedEv()) {
                        if (visitorSpriteKind != 6) {
                            if (ufoChance == 0) {
                                ufoChance = Random_GlobalBelow(8) + 1;
                            }
                            u8 c = ufoChance;
                            if (Random_GlobalBelow(8) < c) {
                                spawn(6, 0x2d, 0, 0);
                                ufoChance = 1;
                            } else if (c < 8) {
                                ufoChance++;
                            }
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::updatePete() {
    using namespace n06;
    if (peteEventToday != 0) {
        if (NpcRegistry_FindSpNpc(8)) {
            if (_ZN8NpcActor10isUpdatingEv()) {
                peteEventToday = 0;
            }
        }
    }
    if (peteEventToday != 0) {
        if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
            s32 r = Weather_GetFallingPrecip();
            if (r != 1 && r != 2) {
                if (hour != prevHour) {
                    if (hour == 9 || hour == 0x11) {
                        TownSessionState_Get();
                        TownSessionState_GetPeteFall();
                        if (!_ZN13PeteFallState15isVisitorActiveEv()) {
                            if (visitorSpriteKind != 7) {
                                spawn(7, 0x2d, 0, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

#undef data_021f1448
}

// ======== unk_020bb25c.cpp ========
namespace n05 {
extern "C" {
u32 Random_GlobalBelow(u32 n);
}
extern "C" {
void SceneLights_StartFlash(s32 a);
}
extern "C" {
BOOL Weather_GetFallingPrecip(void);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
u32 DateTime_Compare(void *a, void *b, s32 n);
}
extern "C" {
void MI_CpuCopy8(void *a, void *b, s32 n);
}
namespace L_020d0e51 { extern "C" { extern struct S { u8 p[0x1]; u8 v[1]; } sFireworksPatternWeights; } }
#define data_020d0e51 n05::L_020d0e51::sFireworksPatternWeights.v
extern "C" {
extern u8 sFireworksPatternDelays[];
}
extern "C" {
extern u8 data_020d0e04[];
}
extern "C" {
extern u32 sFireworkShellTypes[];
}
extern "C" {
extern s32 sSkyOutdoors;
}
extern "C" {
extern u8 data_021ed2b0[];
}
extern "C" void _ZN14SkyShotRequest5clearEv(Unk_020bb25c_Ent14 *p);
extern "C" void _ZN15SkyShotSequence8endWatchEi(void *p, s32 v);

}
void Unk_020bb25c::updateRainbow() {
    using namespace n05;
    rainbowStrength = 0;
    u8 k = data_021ed2b0[0xa];
    if (k >= 0x13 && k <= 0x17) {
        if (*(data_020d0e04 + k - 0x13) == hour) {
            s32 n = minute;
            if (n < 0x2d) {
                s32 v;
                if (n <= 0xf) {
                    v = n * 0xccc;
                } else {
                    v = (n - 0xf) * -0x666 + 0xc000;
                }
                if (v < 0) {
                    v = 0;
                } else if (v > 0xc000) {
                    v = 0xc000;
                }
                rainbowStrength = (v + 0x800) >> 12;
            }
        }
    }
    BOOL f = rainbowSpriteKind == 10 ? TRUE : FALSE;
    if (rainbowStrength != 0) {
        applyRainbowBlend();
        if (!f) {
            if (!spawn(10, 0x20, 0, 0)) {
                rainbowStrength = 0;
            }
        }
    } else if (f) {
        killKind(10);
    }
}
namespace n05 {

}
void Unk_020bb25c::spawnShots() {
    using namespace n05;
    Unk_020bb25c_Ent14 *p = &shotRequests[0];
    Unk_020bb25c_Ent14 *end = p + 4;
    s32 slot = 0x21;
    s32 i = 0;
    s32 vals[3];
    vals[0] = 0;
    vals[1] = 0;
    vals[2] = 0;
    for (; p < end; p++, slot += 3, i++) {
        if (p->pending != 0) {
            u8 flag = p->golden;
            if (spawn(0xb, slot, vals[0], i)) {
                if (flag != 0) {
                    spawn(0xb, slot + 1, vals[1], i | 0x10);
                    spawn(0xb, slot + 2, vals[2], i | 0x20);
                }
            } else {
                _ZN15SkyShotSequence8endWatchEi(&shotSeq[0], p->playerSlot);
            }
            _ZN14SkyShotRequest5clearEv(p);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::updateBirds() {
    using namespace n05;
    if (birdsRequested != 0) {
        birdsRequested = 0;
        BOOL a = Weather_GetFallingPrecip() == 0 ? TRUE : FALSE;
        u32 x[6];
        x[0] = 0;
        x[1] = 0;
        x[2] = 0;
        x[3] = 0;
        x[4] = 0;
        x[5] = 0;
        Clock_GetDateTime(&x[4]);
        MI_CpuCopy8(&x[4], &x[0], 8);
        MI_CpuCopy8(&x[4], &x[2], 8);
        ((u8 *)x)[4] = 3;
        ((u8 *)x)[3] = 0x10;
        ((u8 *)x)[12] = 9;
        ((u8 *)x)[11] = 0xf;
        u32 r5 = DateTime_Compare(&x[0], &x[4], 0x18);
        u32 r0 = DateTime_Compare(&x[4], &x[2], 0x18);
        BOOL b = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1 || r0 == 0) {
                b = TRUE;
            }
        }
        ((u8 *)x)[2] = 6;
        ((u8 *)x)[10] = 9;
        r5 = DateTime_Compare(&x[0], &x[4], 4);
        r0 = DateTime_Compare(&x[4], &x[2], 4);
        BOOL c = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1) {
                c = TRUE;
            }
        }
        if (a && b && c) {
            spawn(0xc, 0x3c, 0, 0);
            spawn(0xc, 0x3c, 0, 1);
            spawn(0xc, 0x3c, 0, 2);
        }
    }
}
namespace n05 {

}
BOOL Unk_020bb25c::canLaunchBig(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &fireworkSprites[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->kind == 9) {
            u32 f = p->work0;
            s32 slot = (f >> 8) & 3;
            BOOL b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            if (slot == idx || !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}
namespace n05 {

}
BOOL Unk_020bb25c::canLaunchSmall(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &fireworkSprites[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->kind == 9) {
            s32 slot;
            BOOL b1, b2;
            u32 f = p->work0;
            slot = (f >> 8) & 3;
            b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            b2 = ((f >> 31) & 1) ? TRUE : FALSE;
            if (slot == idx) {
                result = FALSE;
                break;
            }
            if (b2 && !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}
namespace n05 {

}
void Unk_020bb25c::launchFirework(s32 idx, s32 a, s32 b) {
    using namespace n05;
    if (sSkyOutdoors != 0) {
        Unk_020bb8a4_E fa = (Unk_020bb8a4_E)(a << 31); Unk_020bb8a4_E lo = (Unk_020bb8a4_E)((sFireworkShellTypes[idx] - 0x1d) & 0xf); Unk_020bb8a4_E i8 = (Unk_020bb8a4_E)((idx & 3) << 8); Unk_020bb8a4_E fb = (Unk_020bb8a4_E)(b << 28); spawn(9, 0x3c, 0, fb | (i8 | (lo | fa)));
    } else if (a != 0) {
        SceneLights_StartFlash(idx + 5);
    } else {
        SceneLights_StartFlash(idx + 1);
    }
}
namespace n05 {

}
void Unk_020bb25c::rollLaunchInterval(s32 *out) {
    using namespace n05;
    s32 r;
    if (fireworksInterval > 0) {
        r = Random_GlobalBelow(fireworksInterval);
    } else {
        r = 0;
    }
    *out = r + 0x41;
}
namespace n05 {

}
void Unk_020bb25c::tickBigLaunch() {
    using namespace n05;
    fireworksBigTimer = fireworksBigTimer - 1;
    if (fireworksBigTimer <= 0) {
        s32 r = Random_GlobalBelow(4);
        if (canLaunchBig(r)) {
            launchFirework(r, 1, 0);
            rollLaunchInterval(&fireworksBigTimer);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::tickLowBigLaunch() {
    using namespace n05;
    fireworksBigTimer = fireworksBigTimer - 1;
    if (fireworksBigTimer <= 0) {
        s32 r = Random_GlobalBelow(4);
        if (canLaunchBig(r)) {
            launchFirework(r, 1, 1);
            rollLaunchInterval(&fireworksBigTimer);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::tickSmallLaunches() {
    using namespace n05;
    s32 *ptrs[4] = {&fireworksSlotTimers[0], &fireworksSlotTimers[1], &fireworksSlotTimers[2], &fireworksSlotTimers[3]};
    s32 **pp = ptrs;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        *c = *c - 1;
        if (*c <= 0) {
            if (canLaunchSmall(i)) {
                launchFirework(i, 0, 0);
                rollLaunchInterval(c);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::tickPairLaunches() {
    using namespace n05;
    s32 *ptrs[4] = {&fireworksSlotTimers[0], &fireworksSlotTimers[1], &fireworksSlotTimers[2], &fireworksSlotTimers[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (canLaunchSmall(i)) {
                    launchFirework(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 a = Random_GlobalBelow(4);
        s32 b = (a + 1 + Random_GlobalBelow(3)) & 3;
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (a == i || b == i) {
                *(*p2) = fireworksInterval + Random_GlobalBelow(30);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::tickTripleLaunches() {
    using namespace n05;
    s32 *ptrs[4] = {&fireworksSlotTimers[0], &fireworksSlotTimers[1], &fireworksSlotTimers[2], &fireworksSlotTimers[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (canLaunchSmall(i)) {
                    launchFirework(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 skip = Random_GlobalBelow(4);
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (i != skip) {
                *(*p2) = fireworksInterval + Random_GlobalBelow(30);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::setFireworksTiming(s32 a, s32 b, s32 c) {
    using namespace n05;
    fireworksInterval = a;
    s32 r;
    if (c > 0) {
        r = Random_GlobalBelow(c);
    } else {
        r = 0;
    }
    fireworksPatternTime = b + r;
}
namespace n05 {

}
void Unk_020bb25c::selectFireworksPattern(s32 mode) {
    using namespace n05;
    if (mode == 0x14) {
        u32 r = Random_GlobalBelow(100);
        u8 *p = data_020d0e51;
        s32 m = 5;
        s32 i;
        for (i = 1; i < 14; i++, p++) {
            if (r < *p) {
                m = i;
                break;
            }
        }
        fireworksPattern = m;
    } else {
        fireworksPattern = mode;
    }
    s32 idx = fireworksPattern;
    s32 cnt = sFireworksPatternDelays[idx];
    if (cnt > 0) {
        BOOL flag = FALSE;
        u32 sh = idx - 1;
        if (sh <= 18 && ((1 << sh) & 0x4c007) != 0) {
            flag = TRUE;
        }
        if (flag) {
            fireworksBigTimer = Random_GlobalBelow(cnt);
        } else {
            fireworksSlotTimers[0] = Random_GlobalBelow(cnt);
            fireworksSlotTimers[1] = Random_GlobalBelow(cnt);
            fireworksSlotTimers[2] = Random_GlobalBelow(cnt);
            fireworksSlotTimers[3] = Random_GlobalBelow(cnt);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct01() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x14, 0x64, 400); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickBigLaunch(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct02() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x64, 0x64, 500); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickBigLaunch(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct03() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0xc8, 0x64, 600); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickBigLaunch(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct04() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x32, 0x64, 400); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickSmallLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct05() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0xa0, 0x64, 500); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickSmallLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct06() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x12c, 0x64, 600); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickSmallLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct07() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x1e, 0x96, 400); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickPairLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct08() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x3c, 0x96, 500); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickPairLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct09() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x64, 0x96, 600); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickPairLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct0A() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x28, 0x96, 400); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickTripleLaunches(); 
}
namespace n05 {

}
void Unk_020bb25c::fireworksPatternAct0B() {
    using namespace n05; 
    s32 v = fireworksPatternTime; 
    if (v < 0) { 
        setFireworksTiming(0x50, 0x96, 500); 
    } else if (v == 0) { 
        selectFireworksPattern(0x14); 
    } 
    tickTripleLaunches(); 
}
namespace n05 {

#undef data_020d0e51
}

// ======== unk_020ba93c.cpp ========
namespace n04 {
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } gWeatherManager; } }
#define data_021f1448 n04::L_021f1448::gWeatherManager.v
extern "C" {
extern s32 sRainSeIds[];
}
namespace L_021ef690 { extern "C" { extern struct S { u8 p[0x8]; u8 v[1]; } sSkyLight; } }
#define data_021ef690 n04::L_021ef690::sSkyLight.v
extern "C" {
extern u16 sSkyLight[];
}
extern "C" {
extern s32 sSkyOutdoors;
}
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; s32 v[1]; } gWeatherManager; } }
#define data_021f145c n04::L_021f145c::gWeatherManager.v
extern "C" {
extern Unk_021eff48 gWeatherManager;
}
namespace L_021f1158 { extern "C" { extern struct S { u8 p[0x1210]; u8 v[1]; } gWeatherManager; } }
#define data_021f1158 n04::L_021f1158::gWeatherManager.v
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; s32 v; } gWeatherManager; } }
#define data_021f146c n04::L_021f146c::gWeatherManager.v
namespace L_021f1470 { extern "C" { extern struct S { u8 p[0x1528]; s32 v; } gWeatherManager; } }
#define data_021f1470 n04::L_021f1470::gWeatherManager.v
extern "C" {
extern u8 **sSkyLightParamTables[];
}
extern "C" {
extern u16 *sSkyFogOffsetTables[];
}
extern "C" {
extern u16 **sSkyLightColorTables[];
}
extern "C" {
extern u8 data_021ef690_out[];
}
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; Unk_020baa10_Ptr v; } sSkyGradient; } }
#define data_021efc08 n04::L_021efc08::sSkyGradient.v
extern "C" {
void _ZN13SndEnvChannel11callReleaseEv(void*);
}
extern "C" {
void _ZN13SndEnvChannel11callRequestEPv(void*, s32);
}
extern "C" {
void _ZN13SndEnvChannel10callUpdateEPv(void*, void*);
}
extern "C" {
void _ZN13SndEnvChannel9callResetEv(void*);
}
extern "C" {
s32 Scene_GetSkyKind(s32);
}
extern "C" {
void RainSe_FadeVolume(void*);
}
extern "C" {
void func_02133ef8(void *p, u32 n);
}
extern "C" {
void Clock_GetMinuteHour(void*);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}
extern "C" {
void Sky_CalcLightColors(s32, s32, u32, u32);
}
extern "C" {
void Sky_CalcLightParams(s32, s32, u32, u32);
}
extern "C" {
void Sky_CalcFogOffset(s32, s32, u32, u32);
}
extern "C" {
s32 Fog_SetOffset(u32);
}
extern "C" {
void *_ZN10SpriteAnim7getCellEv(void*);
}
extern "C" {
s32 _ZN10SpriteAnim9getFrameXEi(void*, s32);
}
extern "C" {
s32 _ZN10SpriteAnim9getFrameYEi(void*, s32);
}
extern "C" {
void Oam_DrawCell(s32, void*, s32, s32, s32, s32, s32, s32, u32, s32, u32, u32);
}
extern "C" {
void _ZN10SpriteAnim6updateEv(void*);
}
extern "C" {
void _ZN12Unk_020bc58c9tickClockEv(void*);
}
extern "C" {
void SkySprites_UpdateStub(void*);
}
extern "C" {
void SkySprites_UpdateEvents(Unk_020bacc0_Obj*);
}
extern "C" {
void _ZN12Unk_020bc58c12reloadAllGfxEv(void*);
}
extern "C" {
void SkySprite_StartAnim(void*);
}
extern "C" {
void _ZN12Unk_020be20412updateByKindEv(void*);
}
extern "C" {
void _ZN12Unk_020be0f49endByKindEv(void*);
}
extern "C" {
void _ZN12Unk_020bc58c12loadDirtyGfxEv(void*);
}
extern "C" {
void _ZN15SkyShotSequence6updateEv(void*);
}
extern "C" {
void _ZN11SkySePlayer6updateEv(void*);
}
extern "C" {
void _ZN11SkySePlayer10releaseAllEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c4stopEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c5startEv(void*);
}
extern "C" {
void _ZN11SkySePlayer8resetAllEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c8findKindEi(void*, s32);
}
extern "C" {
void _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(void*, s32, s32, s32, s32);
}
extern "C" {
void _ZN12Unk_020bc58c18updateThunderFlashEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2819updateFireworksShowEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2810updateRainEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2810updateSnowEv(void*);
}
extern "C" {
void _ZN12Unk_020bb25c11updateBirdsEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2810updateMoonEv(void*);
}
extern "C" {
void _ZN12Unk_020bb25c13updateRainbowEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2818updateShootingStarEv(void*);
}
extern "C" {
s32 Scene_GetCurrent();
}
extern "C" {
void _ZN12Unk_020bbc2813updateBalloonEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc289updateUfoEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2810updatePeteEv(void*);
}
extern "C" {
void _ZN12Unk_020bb25c10spawnShotsEv(void*);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
extern "C" {
void _ZN12Unk_020bb25c18setFireworksTimingEiii(void*, s32, s32, s32);
}
extern "C" {
void _ZN12Unk_020bb25c22selectFireworksPatternEi(void*, s32);
}
extern "C" {
s32 _ZN12Unk_020bb25c16tickLowBigLaunchEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c17tickSmallLaunchesEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c13tickBigLaunchEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c18tickTripleLaunchesEv(void*);
}
extern "C" {
void SkySprites_UpdateEventsIndoor(Unk_020bacc0_Obj*);
}
extern "C" {
void Color_Lerp(u16*, u16*, u16*, s32);
}
extern "C" {
void Fog_SetAlpha(s32);
}
extern "C" {
void Gfx3d_SetClearDepth(s32);
}
extern "C" {
void Gfx3d_SetClearColor(u32);
}
extern "C" {
u16 SceneLights_GetRoomColor();
}
extern "C" {
s32 func_02104238(s32, u32, s32);
}

extern "C" void RainSe_InitVolume(Unk_020ba93c_Obj *p);
extern "C" void RainSe_Release(void *p);
extern "C" void RainSe_Update(Unk_020ba93c_Obj *p);
extern "C" void RainSe_Init(Unk_020ba93c_Obj *p);
extern "C" u8 Sky_GetLightParam(s32 i);
extern "C" s16 Sky_GetLightColor(s32 i);
extern "C" void Sky_UpdateLighting(s32 a, s32 b);
extern "C" void Sky_CalcLightParams(s32 a, s32 b, u32 c, u32 d);
extern "C" void Sky_CalcFogOffset(s32 a, s32 b, u32 c, u32 d);
extern "C" void Sky_CalcLightColors(s32 a, s32 b, u32 c, u32 d);
extern "C" void SkySprites_Draw(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_UpdateIndoor(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_Update(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_UpdateStub(void *);
extern "C" void SkySprites_UpdateEventsIndoor(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_UpdateEvents(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_Stop(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_Start(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_OnStarWish(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_ApplyRainbowBlend(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct13(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct12(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct11(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct10(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct0F(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct0E(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct0D(Unk_020bacc0_Obj *obj);
extern "C" void SkySprites_FireworksPatternAct0C(Unk_020bacc0_Obj *obj);

extern "C" void SkySprites_FireworksPatternAct0C(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0x8c, 0x96, 0x258);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0x14);
    }
    _ZN12Unk_020bb25c18tickTripleLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct0D(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0x64, 0x96);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0x14);
    }
}

extern "C" void SkySprites_FireworksPatternAct0E(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0xf);
    }
    _ZN12Unk_020bb25c17tickSmallLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct0F(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0xc8, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 4);
    }
    _ZN12Unk_020bb25c13tickBigLaunchEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct10(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0x11);
    }
    _ZN12Unk_020bb25c13tickBigLaunchEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct11(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 1);
    }
    _ZN12Unk_020bb25c17tickSmallLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct12(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0xe1, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0x13);
    }
}

extern "C" void SkySprites_FireworksPatternAct13(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c22selectFireworksPatternEi(obj, 0x10);
    }
    _ZN12Unk_020bb25c16tickLowBigLaunchEv(obj);
}

extern "C" void SkySprites_ApplyRainbowBlend(Unk_020bacc0_Obj *obj) {
    u16 *p = (u16 *)(data_021f1158 + gWeatherManager.unk_04 * 0x180);
    u16 *end1 = (u16 *)((u8 *)p + 0xee);
    u16 *end2 = (u16 *)((u8 *)p + 0x12e);
    u32 v = obj->f2f51;
    u16 h = v | 0x1000;
    s32 step, i;
    for (; p < end1; p++) {
        *p = h;
    }
    step = _s32_div_f(-(v << 12), 0x20);
    i = 0;
    for (; p < end2; p++, i++) {
        *p = (v + ((step * i + 0x800) >> 12)) | 0x1000;
    }
}

extern "C" void SkySprites_OnStarWish(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = &obj->e[_ZN12Unk_020bc58c8findKindEi(obj, 3)];
    if (e != NULL) {
        _ZN12Unk_020bc58c5spawnEiiP16Unk_020bc754_Veci(obj, 2, 0x3c, 0, 1);
        e->f60 = 1;
    }
}

extern "C" void SkySprites_Start(Unk_020bacc0_Obj *obj) {
    _ZN12Unk_020bc58c5startEv(obj);
    _ZN11SkySePlayer8resetAllEv((u8 *)obj + 0x2fcc);
}

extern "C" void SkySprites_Stop(Unk_020bacc0_Obj *obj) {
    _ZN11SkySePlayer10releaseAllEv((u8 *)obj + 0x2fcc);
    _ZN12Unk_020bc58c4stopEv(obj);
}

extern "C" void SkySprites_UpdateEvents(Unk_020bacc0_Obj *obj) {
    switch (data_021f1448.precipKind) {
    case 1:
        _ZN12Unk_020bbc2810updateRainEv(obj);
        break;
    case 2:
        _ZN12Unk_020bbc2810updateSnowEv(obj);
        break;
    default:
        obj->f2f08 = 0;
        obj->f2f0c = 0;
        break;
    }
    _ZN12Unk_020bb25c11updateBirdsEv(obj);
    _ZN12Unk_020bbc2810updateMoonEv(obj);
    _ZN12Unk_020bb25c13updateRainbowEv(obj);
    _ZN12Unk_020bbc2818updateShootingStarEv(obj);
    _ZN12Unk_020bbc2819updateFireworksShowEv(obj);
    if (Scene_GetCurrent() != 0x2c) {
        _ZN12Unk_020bbc2813updateBalloonEv(obj);
        _ZN12Unk_020bbc289updateUfoEv(obj);
        _ZN12Unk_020bbc2810updatePeteEv(obj);
        _ZN12Unk_020bb25c10spawnShotsEv(obj);
    }
}

extern "C" void SkySprites_UpdateEventsIndoor(Unk_020bacc0_Obj *obj) {
    s32 r = Scene_GetSkyKind(0);
    if (r != 0 && r != 3) {
        if (data_021f1448.precipKind == 1 && data_021f1448.level == 4) {
            _ZN12Unk_020bc58c18updateThunderFlashEv(obj);
        }
        _ZN12Unk_020bbc2819updateFireworksShowEv(obj);
    }
}

extern "C" void SkySprites_UpdateStub(void *) {
}

extern "C" void SkySprites_Update(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = obj->e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 *cnt;
    _ZN12Unk_020bc58c9tickClockEv(obj);
    SkySprites_UpdateStub(obj);
    SkySprites_UpdateEvents(obj);
    cnt = &obj->f2f14;
    for (; e < end; e++) {
        if (e->f08 != 0x34) {
            void *sub = e->f10;
            switch (e->f04) {
            case 1:
                if (e->f24 != 6) {
                    _ZN12Unk_020bc58c12reloadAllGfxEv(obj);
                }
                SkySprite_StartAnim(e);
                e->f04 = 2;
                break;
            case 2:
                _ZN10SpriteAnim6updateEv(sub);
                _ZN12Unk_020be20412updateByKindEv(e);
                break;
            case 3:
                _ZN12Unk_020be0f49endByKindEv(e);
                *cnt -= 1;
                break;
            }
        }
    }
    _ZN12Unk_020bc58c12loadDirtyGfxEv(obj);
    _ZN15SkyShotSequence6updateEv((u8 *)obj + 0x2fa8);
    _ZN11SkySePlayer6updateEv((u8 *)obj + 0x2fcc);
}

extern "C" void SkySprites_UpdateIndoor(Unk_020bacc0_Obj *obj) {
    SkySprites_UpdateEventsIndoor(obj);
}

extern "C" void SkySprites_Draw(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 yoff = data_021f145c[data_021f1448.bufferIndex ^ 1];
    s32 id = -1;
    for (e = obj->e; e < end; e++) {
        void *sub;
        void *r;
        Unk_020bacc0_P *pos;
        s32 a, b, x, y, py;
        if (e->f00 == 0xd) continue;
        if (e->f04 != 2) continue;
        if (e->f31 != 0) continue;
        sub = e->f10;
        r = _ZN10SpriteAnim7getCellEv(sub);
        if (r == NULL) continue;
        pos = (Unk_020bacc0_P *)&e->f34;
        a = _ZN10SpriteAnim9getFrameXEi(sub, id);
        b = _ZN10SpriteAnim9getFrameYEi(sub, id);
        x = a + ((pos->x + 0x800) >> 12);
        py = b + ((pos->y + 0x800) >> 12);
        y = py - yoff;
        if (gWeatherManager.engine == 1) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(0, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        } else if (py < 0xc0) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(1, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u8)e->f56, (u8)e->f57);
        } else if (py > 0x100) {
            u8 k;
            BOOL hidden;
            s32 y2 = y - 0x100;
            k = e->f5c;
            hidden = FALSE;
            if (k != 0) {
                s32 lo = y2 - k;
                s32 hi = y2 + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(0, r, x, y2, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        }
    }
}

extern "C" void Sky_CalcLightColors(s32 a, s32 b, u32 c, u32 d) {
    u16 *out = (u16 *)sSkyLight;
    u16 tmp[2];
    u16 **tbl;
    u16 **row;
    u16 *t;
    s32 i;
    if (data_021f1470 != data_021f146c) {
        for (i = 0; i < 4; i++) {
            row = sSkyLightColorTables[data_021f146c];
            t = row[i];
            Color_Lerp(&tmp[0], t + c, t + d, a);
            row = sSkyLightColorTables[data_021f1470];
            t = row[i];
            Color_Lerp(&tmp[1], t + c, t + d, a);
            Color_Lerp(out, &tmp[0], &tmp[1], b);
            out++;
        }
    } else {
        row = sSkyLightColorTables[data_021f146c];
        for (i = 0; i < 4; i++) {
            t = row[i];
            Color_Lerp(out, t + c, t + d, a);
            out++;
        }
    }
}

extern "C" void Sky_CalcFogOffset(s32 a, s32 b, u32 c, u32 d) {
    s32 cur = data_021f1448.level;
    s32 next = data_021f1448.targetLevel;
    if (next != cur) {
        u16 *pc = sSkyFogOffsetTables[cur];
        u32 t1 = (u16)(((0x1000 - a) * pc[c] + a * pc[d]) >> 12);
        u16 *pn = sSkyFogOffsetTables[next];
        t1 = t1 * (0x1000 - b);
        u32 t2 = (u16)(((0x1000 - a) * pn[c] + a * pn[d]) >> 12);
        Fog_SetOffset((u16)((t1 + t2 * b) >> 12));
    } else {
        Fog_SetOffset((u16)(((0x1000 - a) * sSkyFogOffsetTables[cur][c] + a * sSkyFogOffsetTables[cur][d]) >> 12));
    }
}

extern "C" void Sky_CalcLightParams(s32 a, s32 b, u32 c, u32 d) {
    u8 *out = data_021ef690;
    s32 i;
    s32 ia2, ia, ib;
    if (data_021f1470 != data_021f146c) {
        i = 0;
        ia = 0x1000 - a;
        ib = 0x1000 - b;
        for (; i < 2; i++) {
            u8 *p1 = sSkyLightParamTables[data_021f146c][i];
            s32 t1 = (u16)((ia * p1[c] + a * p1[d]) >> 12);
            u8 *p2 = sSkyLightParamTables[data_021f1470][i];
            t1 = t1 * ib;
            s32 t2 = (u16)((ia * p2[c] + a * p2[d]) >> 12);
            *out = (t1 + t2 * b) >> 12;
            out++;
        }
    } else {
        i = 0;
        ia2 = 0x1000 - a;
        for (; i < 2; i++) {
            u8 *p = sSkyLightParamTables[data_021f146c][i];
            *out = (ia2 * p[c] + a * p[d]) >> 12;
            out++;
        }
    }
}

extern "C" void Sky_UpdateLighting(s32 a, s32 b) {
    Unk_020baa10_Buf b0;
    u32 hour, rem;
    Clock_GetMinuteHour(&b0.t);
    hour = b0.t.hi;
    rem = (hour + 1) % 24;
    Sky_CalcLightColors(a, b, hour, rem);
    Sky_CalcLightParams(a, b, hour, rem);
    Sky_CalcFogOffset(a, b, hour, rem);
    if (sSkyOutdoors != 0) {
        Fog_SetAlpha(0);
        Gfx3d_SetClearDepth(0x1c2);
        b0.y = data_021efc08.h6;
        Gfx3d_SetClearColor(b0.y);
    }
    b0.x = SceneLights_GetRoomColor();
    b0.z = b0.x;
    func_02104238(0, b0.z, 0);
}

extern "C" s16 Sky_GetLightColor(s32 i) {
    return sSkyLight[i];
}

extern "C" u8 Sky_GetLightParam(s32 i) {
    return data_021ef690[i];
}

extern "C" void RainSe_Init(Unk_020ba93c_Obj *p) {
    RainSe_InitVolume(p);
    _ZN13SndEnvChannel9callResetEv(p);
}

extern "C" void RainSe_Update(Unk_020ba93c_Obj *p) {
    s32 v[3];
    if (p->f0c != 0) {
        s32 k = sRainSeIds[Scene_GetSkyKind(0)];
        if (k >= 0) {
            _ZN13SndEnvChannel11callRequestEPv(p, k);
        }
    }
    func_02133ef8(v, 12);
    v[2] = p->f0c >> 8;
    _ZN13SndEnvChannel10callUpdateEPv(p, v);
    RainSe_FadeVolume(p);
}

extern "C" void RainSe_Release(void *p) {
    _ZN13SndEnvChannel11callReleaseEv(p);
}

extern "C" void RainSe_InitVolume(Unk_020ba93c_Obj *p) {
    BOOL a = data_021f1448.level == 3;
    BOOL b = data_021f1448.level == 4;
    BOOL c = data_021f1448.precipKind == 1;
    p->f0c = 0;
    if (c) {
        if (a) {
            p->f0c = 0x99a00;
        } else if (b) {
            p->f0c = 0x100000;
        }
    }
}

#undef data_021f1448
#undef data_021ef690
#undef data_021f145c
#undef data_021f1158
#undef data_021f146c
#undef data_021f1470
#undef data_021efc08
}

// ======== unk_020b9fe4.cpp ========
namespace n03 {
extern "C" {
BOOL Sky_AllocPaletteBufs(u16 **p);
}
extern "C" {
BOOL Sky_LoadPaletteFiles();
}
extern "C" {
void Sky_BlendPalettes();
}
extern "C" {
s32 Sky_ApplyPalettes(s32 x);
}
extern "C" {
void Color_Lerp6(u16 *d, u16 *s1, u16 *s2, s32 t);
}
extern "C" {
void Color_Lerp(u16 *d, u16 *s1, u16 *s2, s32 t);
}
extern "C" {
void RainSe_FadeVolume(Unk_020ba8cc_Obj *o);
}
extern "C" {
BOOL Gfx2d_LoadScreen(void *p, s32 a, s32 b, s32 off);
}
extern "C" {
BOOL Gfx2d_LoadCharFile8bpp(u32 res, void *heap, s32 c, s32 d, s32 e, s32 f);
}
extern "C" {
s32 Gfx2d_LoadPaletteRange(u8 *a, s32 b, s32 c, s32 d, s32 e);
}
extern "C" {
u8 *File_LoadAlloc(u32 res, void *heap, s32 a, void *b);
}
extern "C" {
BOOL File_LoadToBuffer(u32 res, u8 *a, s32 b);
}
extern "C" {
s32 Random_GlobalBelow(s32 a);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void TownId_CopyTo(void *a, void *b);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
s32 DateTime_GetWeatherPeriod(void *p);
}
extern "C" {
void DateTime_SubHours(void *p, s32 a);
}
extern "C" {
void Clock_GetMinuteHour(void *p);
}
extern "C" {
void Weather_UpdateDaily(void *dst, void *src);
}
extern "C" {
u16 Sky_CalcStarScrollY(WeatherManager *self, void *t);
}
extern "C" {
u16 Sky_CalcStarScrollX(WeatherManager *self, void *t);
}
extern "C" {
void _ZN12Unk_020b9c9014setGradientKeyEiti(void *a, s32 b, s32 c, s32 d);
}
extern "C" {
void Sky_UpdateLighting(s32 a, s32 b);
}
extern "C" {
u32 _u32_div_f(u32 a, u32 b);
}
extern "C" {
void Random_SetSeed(void *st, u32 v);
}
extern "C" {
s32 Random_NextBelow(void *st, s32 n);
}
extern "C" {
void *Mem_AllocTail(s32 n);
}
extern "C" {
void Math_StepS32Alt(s32 *p, s32 a, s32 b);
}
extern "C" {
extern u32 gCurrentHeap;
}
extern "C" {
extern WeatherManager gWeatherManager;
}
extern "C" {
extern u32 *sCloudScreenFiles[];
}
extern "C" {
extern u32 sCloudCharFiles[];
}
extern "C" {
extern s8 sWeatherHourTable[];
}
namespace L_021ed2b6 { extern "C" { extern struct S { u8 p[6]; WeatherRecord v; } data_021ed2b0; } }
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 gSaveTownId[];
}
namespace L_021f14ac { extern "C" { extern struct S { u8 p[0x1564]; u16 * v[3]; } gWeatherManager; } }
#define data_021f14ac n03::L_021f14ac::gWeatherManager.v
extern "C" {
extern s32 sSkyOutdoors;
}
extern "C" {
extern u8 sSkyPaletteLayer[];
}
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; s32 v; } gWeatherManager; } }
#define data_021f146c n03::L_021f146c::gWeatherManager.v
extern "C" {
extern s32 sSkyPaletteSetByLevel[];
}
namespace L_021f148c { extern "C" { extern struct S { u8 p[0x1544]; u8 * v[1][2]; } gWeatherManager; } }
#define data_021f148c n03::L_021f148c::gWeatherManager.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020ba8cc_State v; } gWeatherManager; } }
#define data_021f1448 n03::L_021f1448::gWeatherManager.v
extern "C" {
extern u8 sSkyGradient[];
}
namespace L_021f149c { extern "C" { extern struct S { u8 p[0x1554]; u32 v[2][2]; } gWeatherManager; } }
#define data_021f149c n03::L_021f149c::gWeatherManager.v
extern "C" {
extern u32 sSkyPaletteFiles[2][2];
}

extern "C" s32 Sky_LoadPalettes(s32 x);
extern "C" void Sky_BlendPalettes();
extern "C" s32 Sky_ApplyPalettes(s32 x);
extern "C" void Color_Lerp6(u16 *d, u16 *s1, u16 *s2, s32 t);
extern "C" void Color_Lerp(u16 *d, u16 *s1, u16 *s2, s32 t);
extern "C" BOOL Sky_AllocPaletteBufs(u16 **p);
extern "C" BOOL Sky_LoadPaletteFiles();
extern "C" void RainSe_FadeVolume(Unk_020ba8cc_Obj *o);

extern "C" void RainSe_FadeVolume(Unk_020ba8cc_Obj *o) {
    s32 a = data_021f1448.targetLevel == 3;
    s32 b = data_021f1448.targetLevel == 4;
    s32 on = data_021f1448.precipKind == 1;
    s32 v = 0;
    s32 w;
    if (on) {
        if (a) {
            v = 0x99a00;
        } else if (b) {
            v = 0x100000;
        }
    }
    w = 0xdf;
    if (on) {
        if (v < o->rainVolume) {
            w = 0x1eb;
        }
    } else {
        w = 0x5200;
    }
    Math_StepS32Alt(&o->rainVolume, v, w);
}

extern "C" BOOL Sky_LoadPaletteFiles() {
    s32 i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (gWeatherManager.unk_1544[i][j] == 0) {
                u8 **dst = &data_021f148c[i][j];
                *dst = File_LoadAlloc(sSkyPaletteFiles[i][j], (void *)gCurrentHeap, -4, &data_021f149c[i][j]);
                if (!*dst) {
                    return FALSE;
                }
            } else {
                File_LoadToBuffer(sSkyPaletteFiles[i][j], (u8 *)gWeatherManager.unk_1544[i][j], gWeatherManager.unk_1554[i][j]);
            }
        }
    }
    return TRUE;
}

extern "C" BOOL Sky_AllocPaletteBufs(u16 **p) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (*p == 0) {
            *p = (u16 *)Mem_AllocTail(32);
            if (*p == 0) {
                return FALSE;
            }
        }
        p++;
    }
    return TRUE;
}

}
void WeatherManager::rollRainSlant() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    u32 st;
    u16 buf[8];
    u32 seed;
    t.unk_00 = 0;
    t.unk_04 = 0;
    TownId_CopyTo(gSaveTownId, buf);
    Clock_GetDateTime(&t);
    seed = ((u8 *)&t)[3] | ((((u8 *)&t)[4] << 5) | ((buf[0] << 16) | ((((u8 *)&t)[5] & 0x1f) << 9)));
    Random_SetSeed(&st, 1);
    Random_SetSeed(&st, seed);
    rainSlant = Random_NextBelow(&st, 0x2aaa) - 0x1555;
}
namespace n03 {

extern "C" void Color_Lerp(u16 *d, u16 *s1, u16 *s2, s32 t) {
    Unk_020ba6f4_Color *dc = (Unk_020ba6f4_Color *)d;
    Unk_020ba6f4_Color *c1 = (Unk_020ba6f4_Color *)s1;
    Unk_020ba6f4_Color *c2 = (Unk_020ba6f4_Color *)s2;
    s32 inv = 0x1000 - t;
    dc->r = (c1->r * inv + c2->r * t) >> 12;
    dc->g = (c1->g * inv + c2->g * t) >> 12;
    dc->b = (c1->b * inv + c2->b * t) >> 12;
    dc->a = 0;
}

extern "C" void Color_Lerp6(u16 *d, u16 *s1, u16 *s2, s32 t) {
    s32 i;
    for (i = 0; i < 6; i++) {
        Color_Lerp(d, s1, s2, t);
        d++;
        s1++;
        s2++;
    }
}

}
void WeatherManager::getSkyBlend(s32 *a, s32 *b) {
    using namespace n03;
    Unk_020ba518_Time t;
    Clock_GetMinuteHour(&t);
    *a = (u32)(t.minute * 0x44445) >> 12;
    if (targetLevel != level) {
        *b = _s32_div_f(transitionProgress << 12, 32);
    } else {
        *b = 0;
    }
}
namespace n03 {

extern "C" s32 Sky_ApplyPalettes(s32 x) {
    u16 **pal = data_021f14ac;
    s32 r;
    Sky_BlendPalettes();
    if (data_021f1448.targetLevel != data_021f1448.level) {
        r = Gfx2d_LoadPaletteRange((u8 *)pal[2], sSkyPaletteLayer[x], 1, 1, 1);
    } else {
        r = Gfx2d_LoadPaletteRange((u8 *)pal[0], sSkyPaletteLayer[x], 1, 1, 1);
    }
    return r;
}

extern "C" void Sky_BlendPalettes() {
    u16 **pal = data_021f14ac;
    Unk_020ba518_Time t;
    s32 a = 0;
    s32 b = 0;
    s32 h, pm;
    s32 h2, pm2;
    gWeatherManager.getSkyBlend(&a, &b);
    Clock_GetMinuteHour(&t);
    h = t.hour;
    if ((s32)t.hour < 12) {
        pm = 0;
    } else {
        h -= 12;
        pm = 1;
    }
    h2 = (u32)(t.hour + 1) % 24;
    if (h2 < 12) {
        pm2 = 0;
    } else {
        h2 -= 12;
        pm2 = 1;
    }
    Unk_020ba518_E set = (Unk_020ba518_E)sSkyPaletteSetByLevel[data_021f146c];
    u16 *s1 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm])[h * 16];
    u16 *s2 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm2])[h2 * 16];
    Color_Lerp6(pal[0], s1, s2, a);
    if (data_021f1448.targetLevel != data_021f146c) {
        set = (Unk_020ba518_E)sSkyPaletteSetByLevel[data_021f1448.targetLevel];
        s1 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm])[h * 16];
        s2 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm2])[h2 * 16];
        Color_Lerp6(pal[1], s1, s2, a);
        Color_Lerp6(pal[2], pal[0], pal[1], b);
        _ZN12Unk_020b9c9014setGradientKeyEiti(sSkyGradient, 0, pal[2][4], 0);
        _ZN12Unk_020b9c9014setGradientKeyEiti(sSkyGradient, 1, pal[2][5], 0xc0);
    } else {
        _ZN12Unk_020b9c9014setGradientKeyEiti(sSkyGradient, 0, pal[0][4], 0);
        _ZN12Unk_020b9c9014setGradientKeyEiti(sSkyGradient, 1, pal[0][5], 0xc0);
    }
    Sky_UpdateLighting(a, b);
}

}
WeatherManager::WeatherManager() {
    using namespace n03;
    engine = 0;
    transitionBusy = 0;
    curCloudScreen = 0;
    cloudScreen = 0;
    transitionStep = 0;
    streamBlock = -1;
    unk_1514 = 0;
    unk_1518 = 0;
    unk_151c = 0;
    unk_1564 = 0;
    unk_1568 = 0;
    unk_156c = 0;
    precipKind = 0;
    rollRainSlant();
}
namespace n03 {

}
void WeatherManager::func_020ba49c() {
    using namespace n03;
}
namespace n03 {

}
void WeatherManager::init() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    s32 r = getWeatherAtOffset(0);
    switch (r) {
    case 3:
    case 4:
        L_021ed2b6::data_021ed2b0.v.rained = 1;
        break;
    }
    setLevels(r, r);
    engine = 1;
    transitionStep = 0;
    requestedLevel = -1;
    direction = 2;
    nextCloudVariant = Random_GlobalBelow(2);
    cloudVariant = nextCloudVariant;
    transitionBusy = 0;
    streamBlock = 0;
    transitionProgress = 0;
    t.unk_00 = 0;
    t.unk_04 = 0;
    Clock_GetDateTime(&t);
    starScrollY = Sky_CalcStarScrollY(this, &t);
    DateTime_SubHours(&t, 6);
    starScrollX = Sky_CalcStarScrollX(this, &t);
}
namespace n03 {

extern "C" s32 Sky_LoadPalettes(s32 x) {
    s32 r = 0;
    if (Sky_LoadPaletteFiles()) {
        if (Sky_AllocPaletteBufs(data_021f14ac)) {
            if (sSkyOutdoors != 0) {
                r = Sky_ApplyPalettes(x);
            } else {
                Sky_BlendPalettes();
                r = TRUE;
            }
        }
    }
    return r;
}

}
s32 WeatherManager::getPrecipKind(s32 v) {
    using namespace n03;
    s32 r = 0;
    Unk_020ba1dc_Time t;
    t.unk_00 = 0;
    t.unk_04 = 0;
    Clock_GetDateTime(&t);
    switch (v) {
    case 3:
    case 4:
        switch (DateTime_GetWeatherPeriod(&t)) {
        case 0:
        case 1:
        case 2:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            r = 2;
            break;
        default:
            r = 1;
            break;
        }
        break;
    }
    return r;
}
namespace n03 {

}
void WeatherManager::setLevels(s32 a, s32 b) {
    using namespace n03;
    s32 x = getPrecipKind(a);
    s32 y = getPrecipKind(b);
    if (x != 0) {
        precipKind = x;
    } else if (y != 0) {
        precipKind = y;
    } else {
        precipKind = 0;
    }
    level = a;
    targetLevel = b;
}
namespace n03 {

}
void WeatherManager::startTransition(s32 v) {
    using namespace n03;
    requestedLevel = v;
    if (v > level) {
        direction = 0;
    } else {
        direction = 1;
    }
    nextCloudVariant = Random_GlobalBelow(2);
}
namespace n03 {

}
BOOL WeatherManager::requestLevel(s32 v) {
    using namespace n03;
    BOOL r = FALSE;
    if (v == -1) {
    } else if (v == level) {
        r = TRUE;
    } else if (transitionBusy == 0) {
        startTransition(v);
        r = TRUE;
        transitionStep = r;
        transitionBusy = r;
    }
    return r;
}
namespace n03 {

}
void WeatherManager::updateHourly() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    u8 *base = gSaveData;
    t.unk_00 = 0;
    t.unk_04 = 0;
    Clock_GetDateTime(&t);
    if ((L_021ed2b6::data_021ed2b0.v.hourBase + 6) % 24 != ((u8 *)&t)[2]) {
        s32 r;
        Weather_UpdateDaily(base + 0x15f66, &t);
        r = getWeatherAtOffset(1);
        switch (r) {
        case 3:
        case 4:
            base[0x15f6d] = 1;
            break;
        }
        if (requestLevel(r)) {
            s32 h = ((u8 *)&t)[2] - 6;
            if (h < 0) {
                h += 24;
            }
            base[0x15f6c] = h;
        }
    }
}
namespace n03 {

}
s32 WeatherManager::getWeatherAtOffset(s32 v) {
    using namespace n03;
    s32 t = v + L_021ed2b6::data_021ed2b0.v.hourBase;
    return getPatternWeather(L_021ed2b6::data_021ed2b0.v.todayPattern, t % 24);
}
namespace n03 {

}
s32 WeatherManager::getPatternWeather(s32 a, s32 b) {
    using namespace n03;
    s8 *p = sWeatherHourTable + a * 24;
    return p[b];
}
namespace n03 {

}
BOOL WeatherManager::loadCloudChars(s32 idx, s32 unused) {
    using namespace n03;
    BOOL ok = FALSE;
    if (Gfx2d_LoadCharFile8bpp(sCloudCharFiles[idx], (void *)gCurrentHeap, unused, 16, 16, 47)) {
        ok = TRUE;
    }
    return ok;
}
namespace n03 {

}
BOOL WeatherManager::loadCloudScreen(u8 **p1, u32 *p2, s32 mode, s32 idx) {
    using namespace n03;
    BOOL ok = FALSE;
    s32 i;
    u32 res;
    if (mode == 0) {
        s32 t = idx * 2;
        i = t + cloudVariant;
    } else {
        i = idx;
    }
    res = sCloudScreenFiles[mode][i];
    if (*p1 == NULL) {
        *p1 = File_LoadAlloc(res, (void *)gCurrentHeap, -4, p2);
        if (*p1 != NULL) {
            ok = TRUE;
        }
    } else if (File_LoadToBuffer(res, *p1, *p2)) {
        ok = TRUE;
    }
    return ok;
}
namespace n03 {

}
void WeatherManager::loadNextCloudGraphics() {
    using namespace n03;
    s32 mode, next;
    if (direction == 0) {
        mode = 1;
        next = level + 1;
    } else {
        mode = 2;
        next = level - 1;
    }
    if (loadCloudChars(next, 6)) {
        if (loadCloudScreen(&cloudScreen, &cloudScreenSize, mode, next)) {
            setLevels(level, next);
            if (level < 3 && targetLevel >= 3) {
                rollRainSlant();
            }
            streamBlock = 0;
            transitionProgress = 0;
            transitionStep = 2;
        }
    }
}
namespace n03 {

}
void WeatherManager::streamCloudScreen() {
    using namespace n03;
    s32 idx = streamBlock;
    s32 blk = (((cloudScroll >> 8) - 8) & 0xff) >> 3;
    if (blk == idx) {
        if (Gfx2d_LoadScreen(cloudScreen + (blk << 5), 6, 32, blk << 5)) {
            s32 cnt = transitionProgress;
            idx = idx + 1;
            cnt = cnt + 1;
            if (idx >= 32) {
                idx = -1;
                cnt = 32;
                setLevels(targetLevel, targetLevel);
                cloudVariant = nextCloudVariant;
                transitionStep = 3;
            }
            streamBlock = idx;
            transitionProgress = cnt;
        }
    }
}
namespace n03 {

#undef data_021f14ac
#undef data_021f146c
#undef data_021f148c
#undef data_021f1448
#undef data_021f149c
}

// ======== unk_020b96b8.cpp ========
namespace n02 {
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020b96b8_Cfg v; } gWeatherManager; } }
#define data_021f1448 n02::L_021f1448::gWeatherManager.v
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; s32 v[1]; } gWeatherManager; } }
#define data_021f145c n02::L_021f145c::gWeatherManager.v
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; volatile u16 v[1]; } sSkyGradient; } }
#define data_021efc08 n02::L_021efc08::sSkyGradient.v
namespace L_021eff50 { extern "C" { extern struct S { u8 p[0x8]; Unk_020b96b8_Ent v[1]; } gWeatherManager; } }
#define data_021eff50 n02::L_021eff50::gWeatherManager.v
extern "C" {
extern s32 gWeatherManager[];
}
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; u8 v[1]; } gSkySprites; } }
#define data_021f4420 n02::L_021f4420::gSkySprites.v
extern "C" {
void Clock_GetMinuteHour(u8 *out);
}
extern "C" {
Unk_020b9964_Obj *PlayerActor_GetActor(u32 x);
}
extern "C" {
s32 SceneLights_GetLightParam(u32 x);
}
namespace L_021f1158 { extern "C" { extern struct S { u8 p[0x1210]; u16 v[1]; } gWeatherManager; } }
#define data_021f1158 n02::L_021f1158::gWeatherManager.v
namespace L_021f14dc { extern "C" { extern struct S { u8 p[0x1594]; s32 v; } gWeatherManager; } }
#define data_021f14dc n02::L_021f14dc::gWeatherManager.v
namespace L_021f1150 { extern "C" { extern struct S { u8 p[0x1208]; s32 v; } gWeatherManager; } }
#define data_021f1150 n02::L_021f1150::gWeatherManager.v
extern "C" {
extern u8 sSkyLineTablesReady;
}
extern "C" {
extern s32 sSkyLineScrollX[];
}
extern "C" {
extern s32 sSkyLineScrollY[];
}
extern "C" {
extern u16 sSkyBlendLineCache[];
}
extern "C" {
extern s32 sSkyGradient;
}
namespace L_021ef90c { extern "C" { extern struct S { u8 p[0x4]; u16 v[1]; } sSkyGradient; } }
#define data_021ef90c n02::L_021ef90c::sSkyGradient.v
extern "C" {
void Gfx2d_HideMainPlanes(u32 x);
}
extern "C" {
void Gfx2d_HideSubPlanes(u32 x);
}
extern "C" {
void Gfx2d_ShowSubPlanes(u32 x);
}
extern "C" {
s32 MenuCtrl_IsMenuOnTop();
}
extern "C" {
void Gfx2d_ShowMainPlanes(u32 x);
}
extern "C" {
void Gfx2d_EnableMainWindows(u32 x);
}
extern "C" {
void Gfx2d_SetMainWin0Planes(u32 x);
}
extern "C" {
void Gfx2d_SetMainWinOutPlanes(u32 x);
}
extern "C" {
void Gfx2d_SetMainWin0Rect(u32 a, u32 b, u32 c, u32 d);
}
#define REG16(a) (*(volatile u16 *)(a))
#define REG32(a) (*(volatile u32 *)(a))
extern "C" s32 Gfx2d_LoadScreen(void *p, u32 a, u32 b, u32 off);
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
s32 DateTime_DiffDays(void *a, void *b);
}
extern "C" {
u32 Sky_CalcStarScrollY(u32 unused, u8 *d);
}

extern "C" void Sky_VBlankMain();
extern "C" void Sky_VBlankSub();
extern "C" void Sky_UpdateLineTables();
extern "C" void SkyGradient_Build();
extern "C" u32 Sky_GetStarScrollYNow(u32 x);
extern "C" u32 Sky_CalcStarScrollY(u32 unused, u8 *d);
extern "C" u16 Sky_CalcStarScrollX(u32 unused, void *unused2);

}
void Unk_020b9c90::reloadCurrentCloudGraphics()
{
    using namespace n02;
    s32 cur = level;
    if (loadCloudChars(cur, 6) != 0) {
        if (loadCloudScreen((s32 *)&curCloudScreen, &curCloudScreenSize, 0, cur) != 0) {
            streamBlock = 0;
            transitionProgress = 0x20;
            transitionStep = 4;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::streamCurrentCloudScreen()
{
    using namespace n02;
    s32 cur = streamBlock;
    s32 k = (((cloudScroll >> 8) - 8) & 0xff) >> 3;
    if (k == cur) {
        if (Gfx2d_LoadScreen((u8 *)curCloudScreen + (k << 5), 6, 0x20, k << 5) != 0) {
            cur++;
            if (cur >= 0x20) {
                cur = -1;
                if (requestedLevel == level) {
                    transitionStep = 0;
                    requestedLevel = cur;
                    direction = 2;
                    transitionBusy = 0;
                } else {
                    transitionStep = 1;
                }
            }
            streamBlock = cur;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::updateTransitionStreamed()
{
    using namespace n02;
    if (transitionBusy != 0) {
        switch (transitionStep) {
        case 1:
            loadNextCloudGraphics();
            break;
        case 2:
            streamCloudScreen();
            break;
        case 3:
            reloadCurrentCloudGraphics();
            break;
        case 4:
            streamCurrentCloudScreen();
            break;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::transitionTimedBegin()
{
    using namespace n02;
    s32 cur = level;
    s32 next;
    if (requestedLevel > cur) {
        next = cur + 1;
    } else {
        next = cur - 1;
    }
    setLevels(cur, next);
    transitionProgress = 0;
    transitionStep = 2;
    transitionTimer = 0;
}
namespace n02 {

}
void Unk_020b9c90::transitionTimedBlend()
{
    using namespace n02;
    transitionTimer++;
    if (transitionTimer >= 0x2a8) {
        setLevels(targetLevel, targetLevel);
        transitionStep = 3;
    }
    transitionProgress = (transitionTimer << 5) / 0x2a8;
}
namespace n02 {

}
void Unk_020b9c90::transitionTimedFinish()
{
    using namespace n02;
    transitionProgress = 0x20;
    transitionStep = 4;
    transitionTimer = 0;
}
namespace n02 {

}
void Unk_020b9c90::transitionTimedWait()
{
    using namespace n02;
    transitionTimer++;
    if (transitionTimer >= 0x2a8) {
        if (requestedLevel == level) {
            transitionStep = 0;
            requestedLevel = -1;
            direction = 2;
            transitionBusy = 0;
        } else {
            transitionStep = 1;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::updateTransitionTimed()
{
    using namespace n02;
    if (transitionBusy != 0) {
        switch (transitionStep) {
        case 1:
            transitionTimedBegin();
            break;
        case 2:
            transitionTimedBlend();
            break;
        case 3:
            transitionTimedFinish();
            break;
        case 4:
            transitionTimedWait();
            break;
        }
    }
}
namespace n02 {

extern "C" u16 Sky_CalcStarScrollX(u32 unused, void *unused2)
{
    u64 d = 0;
    u64 t = 0x100000000ULL | 0x1000000;
    d = t;
    return (u16)((DateTime_DiffDays(&d, unused2) % 0x40) << 3);
}

extern "C" u32 Sky_CalcStarScrollY(u32 unused, u8 *d)
{
    s32 m = (d[2] + 6) % 0x18;
    if (m >= 0xc) return 0x100;
    s32 t = m * 0x3c;
    t += d[1];
    return (u32)((t * 0x68000) / 0x2d0 << 4) >> 16;
}

extern "C" u32 Sky_GetStarScrollYNow(u32 x)
{
    u8 d[8];
    ((u32 *)d)[0] = 0;
    ((u32 *)d)[1] = 0;
    Clock_GetDateTime(d);
    return Sky_CalcStarScrollY(x, d);
}

}
void Unk_020b9c90::setGradientKey(s32 idx, u16 a, s32 b)
{
    using namespace n02;
    *(u16 *)((u8 *)this + idx * 2 + 0x304) = a;
    *(s32 *)((u8 *)this + idx * 4 + 0x308) = b;
}
namespace n02 {

extern "C" void SkyGradient_Build()
{
    s32 idx = (sSkyGradient + 1) % 2;
    volatile u16 out;
    Unk_020b9b94_Col c1, c2;
    volatile u16 in1, in2;
    in1 = data_021efc08[2];
    c1 = *(Unk_020b9b94_Col *)&in1;
    in2 = data_021efc08[3];
    c2 = *(Unk_020b9b94_Col *)&in2;
    u16 *dst = (u16 *)((u8 *)data_021ef90c + idx * 0x180);
    s32 s0 = ((volatile s32 *)data_021efc08)[2];
    s32 s1 = ((volatile s32 *)data_021efc08)[3];
    s32 i = 0;
    s32 span = s1 - s0;
    s32 c2g = c2.g;
    s32 c1g = c1.g;
    s32 c2r = c2.r;
    s32 c1r = c1.r;
    s32 c2b = c2.b;
    s32 c1b = c1.b;
    do {
        if (i <= s0) {
            out = in1;
        } else if (i >= s1) {
            out = in2;
        } else {
            s32 t = ((i - s0) << 8) / span;
            s32 u = 0x100 - t;
            u32 col = (u16)((c1b * u + c2b * t) >> 8) << 10;
            col |= (u16)((c1r * u + c2r * t) >> 8) | (u16)((c1g * u + c2g * t) >> 8) << 5;
            out = col;
        }
        *dst++ = out;
        i++;
    } while (i < 0xc0);
    sSkyGradient = idx;
}

extern "C" void Sky_UpdateLineTables()
{
    u16 *pal;
    s32 a = 0, b = 0;
    s32 idx = (gWeatherManager[1] + 1) % 2;
    s32 j, i;
    pal = (u16 *)((u8 *)data_021f1158 + idx * 0x180);
    Unk_020b9964_Obj *o = PlayerActor_GetActor(4);
    if (o) {
        Unk_020b9964_Src *p = &o->src;
        if (p) {
            a = (s32)p->w0 >> 3;
            s32 *g = &data_021f14dc;
            s32 pos = p->pos;
            s32 d = (pos - *g) >> 4;
            if (d < 0) {
                b = (d * -176) >> 8;
            } else {
                b = -(d << 7) >> 8;
            }
            *g = pos;
        }
    }
    s32 *gp = &data_021f1150;
    s32 c = b; b = *gp; b += 0x60; b += c;
    if (b >= 0x10000) b -= 0x10000;
    *gp = b;
    if (sSkyLineTablesReady == 0) {
        sSkyLineTablesReady = 1;
        for (i = 0; i < 2; i++) {
            sSkyLineScrollX[i] = a;
            sSkyLineScrollY[i] = b;
            Unk_020b96b8_Ent *q = (Unk_020b96b8_Ent *)((u8 *)data_021eff50 + i * 0x900);
            for (j = 0; j < 0xc0; j++) {
                s32 t = -(j << 8) / 0xc0;
                q->c = 0x10000 / (t + 0x200);
                s32 n = (q->c - 0x100) << 7;
                n = -n;
                q->a = a + n;
                s32 u = (j * 0xc000 / 0xc0 + 0x3000) / 0xc0;
                q->b = b + (u * u >> 8) * 0xc0;
                q = (Unk_020b96b8_Ent *)((u8 *)q + 0xc);
            }
        }
    }
    s32 da = a - sSkyLineScrollX[idx];
    s32 db = b - sSkyLineScrollY[idx];
    if (da != 0 || db != 0) {
        sSkyLineScrollX[idx] = a;
        sSkyLineScrollY[idx] = b;
        s32 *end, *q;
        q = (s32 *)((u8 *)data_021eff50 + idx * 0x900);
        end = (s32 *)((u8 *)q + 0x900);
        if (db == 0) {
            for (; q < end; q += 3) q[0] += da;
        } else if (da == 0) {
            for (; q < end; q += 3) q[1] += db;
        } else {
            for (; q < end; q += 3) {
                q[0] += da;
                q[1] += db;
            }
        }
    }
    i = 0;
    u32 w = SceneLights_GetLightParam(1);
    if (w != sSkyBlendLineCache[idx]) {
        sSkyBlendLineCache[idx] = w;
        u16 c = w | 0x1000;
        for (; i < 0x77; i++) *pal++ = c;
        for (; i < 0x97; i++) *pal++ = (w - (w * (i - 0x77) >> 5)) | 0x1000;
        for (; i < 0x98; i++) *pal++ = 0x10;
        for (; i < 0xa8; i++) {
            u32 t = (u32)((i - 0x98) << 4) >> 4;
            u32 v = 0x10 - t;
            *pal++ = v | ((0x10 - v) << 8);
        }
        for (; i < 0xc0; i++) *pal++ = 0x1000;
    }
    gWeatherManager[1] = idx;
}

extern "C" void Sky_VBlankSub()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[3];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[gWeatherManager[1]];
    REG16(0x4001030) = e->c;
    REG32(0x4001038) = e->a;
    REG32(0x400103c) = e->b;
    Clock_GetMinuteHour(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4001000) = REG32(0x4001000) & 0xfffffdff;
        if (MenuCtrl_IsMenuOnTop() == 0) Gfx2d_HideSubPlanes(2);
    } else {
        REG32(0x4001000) |= 0x200;
        if (MenuCtrl_IsMenuOnTop() == 0) Gfx2d_ShowSubPlanes(2);
    }
    if (data_021f4420[0x11] != 0) {
        REG16(0x4001050) = 0x2040;
    } else {
        REG16(0x4001050) = 0x2042;
    }
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4001016) = s;
    REG16(0x4001014) = data_021f1448.h3c;
}

extern "C" void Sky_VBlankMain()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[2];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[gWeatherManager[1]];
    REG16(0x4000030) = e->c;
    REG32(0x4000038) = e->a;
    REG32(0x400003c) = e->b;
    Clock_GetMinuteHour(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
        Gfx2d_HideMainPlanes(2);
    } else {
        REG32(0x4000000) |= 0x200;
        Gfx2d_ShowMainPlanes(2);
    }
    s32 r;
    if (y > 0xa8) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffff5ff;
        Gfx2d_HideMainPlanes(0xa);
        REG16(0x4000050) = 0x2040;
    } else {
        REG32(0x4000000) |= 0x800;
        Gfx2d_ShowMainPlanes(8);
        if (y > 0x97) {
            REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
            Gfx2d_HideMainPlanes(2);
            REG16(0x4000050) = 0x2048;
        } else if (data_021f4420[0x11] != 0) {
            REG16(0x4000050) = 0x2040;
        } else {
            REG16(0x4000050) = 0x2042;
        }
    }
    r = 0xc0 - y;
    if (r < 0) r = 0;
    else if (r > 0xc0) r = 0xc0;
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4000016) = s;
    REG16(0x4000014) = data_021f1448.h3c;
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x15);
    Gfx2d_SetMainWinOutPlanes(0x1f);
    Gfx2d_SetMainWin0Rect(0, r, 0xff, 0xc0);
}

#undef data_021f1448
#undef data_021f145c
#undef data_021efc08
#undef data_021eff50
#undef data_021f4420
#undef data_021f1158
#undef data_021f14dc
#undef data_021f1150
#undef data_021ef90c
#undef REG16
#undef REG32
}

// ======== unk_020b8d98.cpp ========
namespace n01 {
struct Unk_021f3010;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
struct Unk_021f3010 { u8 pad[8]; u8 unk_08; u8 pad2[3]; };
namespace L_021f4400 { extern "C" { extern struct S { u8 p[0x2f20]; Unk_021f4400 v; } gSkySprites; } }
#define data_021f4400 n01::L_021f4400::gSkySprites.v
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; Unk_021f4420 v; } gSkySprites; } }
#define data_021f4420 n01::L_021f4420::gSkySprites.v
namespace L_021f44a0 { extern "C" { extern struct S { u8 p[0x2fc0]; Unk_021f44a0 v; } gSkySprites; } }
#define data_021f44a0 n01::L_021f44a0::gSkySprites.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } gWeatherManager; } }
#define data_021f1448 n01::L_021f1448::gWeatherManager.v
extern "C" {
extern Unk_021eff48 gWeatherManager;
}
extern "C" {
extern u8 gSkySprites[];
}
extern "C" {
extern u8 sSkyHBlankTask[];
}
extern "C" {
extern u8 data_021efc18[];
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } gSkySprites; } }
#define data_021f4398 n01::L_021f4398::gSkySprites.v
namespace L_021f304c { extern "C" { extern struct S { u8 p[0x1b6c]; u8 v[1]; } gSkySprites; } }
#define data_021f304c n01::L_021f304c::gSkySprites.v
extern "C" {
extern u8 sSkyBlackBackdrop[];
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[5]; } gSkySprites; } }
#define data_021f3010 n01::L_021f3010::gSkySprites.v
extern "C" {
extern void *gCurrentHeap;
}
namespace L_021f14c8 { extern "C" { extern struct S { u8 p[0x1580]; Unk_021f14c8 v; } gWeatherManager; } }
#define data_021f14c8 n01::L_021f14c8::gWeatherManager.v
namespace L_021f14c4 { extern "C" { extern struct S { u8 p[0x157c]; u32 v; } gWeatherManager; } }
#define data_021f14c4 n01::L_021f14c4::gWeatherManager.v
namespace L_021f14cc { extern "C" { extern struct S { u8 p[0x1584]; u32 v; } gWeatherManager; } }
#define data_021f14cc n01::L_021f14cc::gWeatherManager.v
namespace L_021f14d0 { extern "C" { extern struct S { u8 p[0x1588]; u32 v; } gWeatherManager; } }
#define data_021f14d0 n01::L_021f14d0::gWeatherManager.v
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; u32 v; } gWeatherManager; } }
#define data_021f146c n01::L_021f146c::gWeatherManager.v
namespace L_021f14dc { extern "C" { extern struct S { u8 p[0x1594]; u32 v; } gWeatherManager; } }
#define data_021f14dc n01::L_021f14dc::gWeatherManager.v
namespace L_021f14ac { extern "C" { extern struct S { u8 p[0x1564]; u32 v[3]; } gWeatherManager; } }
#define data_021f14ac n01::L_021f14ac::gWeatherManager.v
extern "C" {
extern u32 sSkyOutdoors;
}
extern "C" {
extern u32 gCamera;
}
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; u32 v[1]; } gWeatherManager; } }
#define data_021f145c n01::L_021f145c::gWeatherManager.v
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; Unk_021efc08 v; } sSkyGradient; } }
#define data_021efc08 n01::L_021efc08::sSkyGradient.v
namespace L_021efa88 { extern "C" { extern struct S { u8 p[0x180]; Unk_021efa88 v; } sSkyGradient; } }
#define data_021efa88 n01::L_021efa88::sSkyGradient.v
extern "C" {
extern u8 sSkyStarBgLayer[];
}
extern "C" {
extern u8 sSkyNextCloudBgLayer[];
}
extern "C" {
extern u8 sSkyCloudBgLayer[];
}
extern "C" {
extern u8 gFieldSceneKind;
}
#define data_020e676c ((char *)"menu/star/a_bg.bch")
#define data_020e6780 ((u8 *)"menu/star/bg.bsc")
extern "C" {
void *PlayerData_GetCurrent(void);
}
extern "C" {
void _ZN12Unk_02097ff47setFlagEj(void *p, u32 x);
}
extern "C" {
void SkySprites_OnStarWish(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c14uploadDirtyGfxEv(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c16onSlingshotFiredEi(void *p, u32 x);
}
extern "C" {
void _ZN12Unk_020bc58c11onDayChangeEi(void *p, u32 x);
}
extern "C" {
void _ZN14WeatherManager13rollRainSlantEv(void *p);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
void Sky_CalcStarScrollY(void *p, void *q);
}
extern "C" {
void DateTime_SubHours(void *p, u32 x);
}
extern "C" {
s32 Sky_CalcStarScrollX(void *p, void *q);
}
extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}
extern "C" {
void DateTime_AddDays(void *p, s32 x);
}
extern "C" {
void DateTime_AddMinutes(void *p, s32 x);
}
extern "C" {
BOOL DateTime_Compare(void *p, void *q, u32 x);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void _ZN14WeatherManager18getWeatherAtOffsetEi(void *p, u32 x);
}
extern "C" {
void HBlank_Replace(void *p, void *fn, void *cb);
}
extern "C" {
u32 HBlank_Remove(void *p);
}
extern "C" {
u32 HBlank_Add(void *p, void *fn, void *cb, void *cb2);
}
extern "C" {
void Gfx2d_HideMainPlanes(u32 x);
}
extern "C" {
void Gfx2d_HideSubPlanes(u32 x);
}
extern "C" {
void Gfx2d_ShowSubPlanes(u32 x);
}
extern "C" {
void Gfx2d_ShowMainPlanes(u32 x);
}
extern "C" {
void Gfx2d_SetSubBgModeState(u32 x);
}
extern "C" {
void Gfx2d_SetMainBgModeState(u32 x);
}
extern "C" {
void Clock_GetMinuteHour(void *p);
}
extern "C" {
void Sky_HBlankNone(void);
}
extern "C" {
void Sky_HBlankMain(void);
}
extern "C" {
void Sky_HBlankSub(void);
}
extern "C" {
void Sky_VBlankSub(void);
}
extern "C" {
void Sky_VBlankMain(void);
}
extern "C" {
void Sky_VBlankDisabled(void);
}
extern "C" {
void Sky_FrameOutdoor(void);
}
extern "C" {
void Sky_FrameIndoor(void);
}
extern "C" {
void *PlayerActor_GetActor(u32 x);
}
extern "C" {
void _ZN13SkyObjPalette10invalidateEi(void *p, s32 x);
}
extern "C" {
void _ZN12Unk_020bc58c12reloadAllGfxEv(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c9initClockEv(void *p);
}
extern "C" {
BOOL Gfx2d_LoadCharFile(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
}
extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}
extern "C" {
void Heap_Free(void *heap, void *ptr);
}
extern "C" {
void Mem_Free(u32 p);
}
extern "C" {
void File_LoadToBuffer(void *a, void *b, u32 c);
}
extern "C" {
void Constellation_MaskSkyScreen(void *p);
}
extern "C" {
BOOL Gfx2d_LoadScreen(void *p, u32 a, u32 b, u32 c);
}
extern "C" {
void StarTwinkle_Init(void *p, u32 x);
}
extern "C" {
void StarTwinkle_Stop(void *p);
}
extern "C" {
BOOL _ZN14WeatherManager14loadCloudCharsEii(void *p, u32 a, u32 b);
}
extern "C" {
BOOL _ZN14WeatherManager15loadCloudScreenEPPhPjii(void *p, void *a, void *b, u32 c, u32 d);
}
extern "C" {
BOOL Sky_LoadPalettes(u32 x);
}
extern "C" {
void GX_LoadBGPltt(void *p, u32 a, u32 b);
}
extern "C" {
void GXS_LoadBGPltt(void *p, u32 a, u32 b);
}
extern "C" {
void SkySprites_Stop(void *p);
}
extern "C" {
void RainSe_Release(void *p);
}
extern "C" {
void SkySprites_Draw(void *p);
}
extern "C" {
BOOL MenuCtrl_IsMenuOnTop(void);
}
extern "C" {
void StarTwinkle_Update(void *p);
}
extern "C" {
void SkySprites_Update(void *p);
}
extern "C" {
void SkySprites_UpdateIndoor(void *p);
}
extern "C" {
void _ZN14WeatherManager12updateHourlyEv(void *p);
}
extern "C" {
void RainSe_Update(void *p);
}
extern "C" {
void _ZN14WeatherManager4initEv(void *p);
}
extern "C" {
BOOL SkyObjGfxLoader_LoadPalettes(void *p);
}
extern "C" {
void SkySprites_Start(void *p);
}
extern "C" {
void RainSe_Init(void *p);
}
extern "C" {
void _ZN12Unk_020b9c9021updateTransitionTimedEv(void *p);
}
extern "C" {
void _ZN14WeatherManager11getSkyBlendEPiS0_(void *p, u32 *a, u32 *b);
}
extern "C" {
void Sky_BlendPalettes(void);
}
extern "C" {
void SkyGradient_Build(void);
}
extern "C" {
void Sky_UpdateLineTables(void);
}
extern "C" {
void _ZN12Unk_020b9c9024updateTransitionStreamedEv(void *p);
}
extern "C" {
void Sky_ApplyPalettes(s32 x);
}
extern "C" {
s32 MenuCtrl_GetTransitionProgress(void);
}
extern "C" {
s32 Camera_GetCloseUpFactor(void);
}
extern "C" {
u16 Sky_GetStarScrollYNow(void *p);
}
extern "C" {
BOOL Sky_LoadStarBg(u32 idx);
}
extern "C" {
BOOL Sky_LoadNextCloudBg(u32 idx);
}
extern "C" {
BOOL Sky_LoadCloudBg(u32 idx);
}
extern "C" {
void Sky_ResetObjGfx(void);
}

extern "C" void Sky_RequestBirds(void);
extern "C" void Sky_WishOnShootingStar(void);
extern "C" u32 Sky_IsShootingStarVisible(void);
extern "C" void Sky_PlayBalloonDropSe(BOOL x);
extern "C" void Sky_EndBalloonDrop(void);
extern "C" void Sky_SwapBuffers(void);
extern "C" void Sky_OnSlingshotFired(u32 x);
extern "C" void Sky_OnDayChange(u32 x);
extern "C" void Weather_RerollRainSlant(void);
extern "C" void func_020b8e90(void);
extern "C" void func_020b8ea0(void);
extern "C" void func_020b8eb0(void);
extern "C" void Sky_GetStarViewingTime(Unk_020b8ec0_Time *out, s32 a, s32 b);
extern "C" u32 Sky_GetStarScrollY(void);
extern "C" u32 Sky_GetStarScrollX(void);
extern "C" u32 Sky_GetCurrentPalette(void);
extern "C" u32 Weather_GetPrecipKind(void);
extern "C" void Weather_GetLevels(s32 *a, s32 *b);
extern "C" void Weather_GetCurrent(void);
extern "C" s32 Weather_GetFallingPrecip(void);
extern "C" void Sky_Disable(void);
extern "C" BOOL Sky_SetEngine(s32 arg);
extern "C" void Sky_ResetObjGfx(void);
extern "C" BOOL Sky_LoadStarBg(u32 idx);
extern "C" BOOL Sky_LoadNextCloudBg(u32 idx);
extern "C" BOOL Sky_LoadCloudBg(u32 idx);
void Sky_FrameIndoor(void);
void Sky_FrameOutdoor(void);
void Sky_VBlankDisabled(void);

void Sky_VBlankDisabled(void) {
    vu16 t;
    t = data_021efc08.unk_04;
    *(vu16 *)0x5000400 = t;
    *(vu16 *)0x5000000 = data_021efa88.unk_02;
    *(vu32 *)0x4000000 = *(vu32 *)0x4000000 & 0xfffff5ff;
}

void Sky_FrameOutdoor(void) {
    s32 a, b;
    SkyGradient_Build();
    if (!MenuCtrl_IsMenuOnTop()) {
        Sky_UpdateLineTables();
        _ZN12Unk_020b9c9024updateTransitionStreamedEv(&gWeatherManager);
    }
    Sky_ApplyPalettes(gWeatherManager.engine);
    if (gCamera != 0) {
        a = MenuCtrl_GetTransitionProgress() * 0x123 >> 12;
        b = Camera_GetCloseUpFactor() * 30 >> 12;
        data_021f145c[data_021f1448.bufferIndex ^ 1] = a + b;
    }
    data_021f1448.starScrollY = Sky_GetStarScrollYNow(&gWeatherManager);
}

void Sky_FrameIndoor(void) {
    u32 a, b;
    if (!MenuCtrl_IsMenuOnTop()) {
        _ZN12Unk_020b9c9021updateTransitionTimedEv(&gWeatherManager);
    }
    _ZN14WeatherManager11getSkyBlendEPiS0_(&gWeatherManager, &a, &b);
    Sky_BlendPalettes();
}

}
BOOL SkyProc::onCreate() {
    using namespace n01;
    u32 r4 = 0;
    u32 v = 0;
    BOOL t = (gFieldSceneKind == 0);
    if (t) {
        v = 1;
    }
    sSkyOutdoors = v;
    _ZN14WeatherManager4initEv(&gWeatherManager);
    if (sSkyOutdoors != 0) {
        if (SkyObjGfxLoader_LoadPalettes(data_021f304c)) {
            if (Sky_SetEngine(0)) {
                SkySprites_Start(gSkySprites);
                r4 = HBlank_Add(sSkyHBlankTask, (void *)Sky_HBlankSub, (void *)Sky_VBlankSub, (void *)Sky_FrameOutdoor);
            }
        }
    } else {
        if (Sky_LoadPalettes(0)) {
            r4 = HBlank_Add(sSkyHBlankTask, 0, 0, (void *)Sky_FrameIndoor);
        }
    }
    if (r4 != 0) {
        RainSe_Init((u8 *)this + 0x50);
    }
    return r4;
}
namespace n01 {

}
BOOL SkyProc::onExecute() {
    using namespace n01;
    if (sSkyOutdoors != 0) {
        if (!MenuCtrl_IsMenuOnTop()) {
            StarTwinkle_Update(data_021efc18);
        }
        SkySprites_Update(gSkySprites);
    } else {
        SkySprites_UpdateIndoor(gSkySprites);
    }
    _ZN14WeatherManager12updateHourlyEv(&gWeatherManager);
    RainSe_Update((u8 *)this + 0x50);
    return TRUE;
}
namespace n01 {

}
BOOL SkyProc::onDraw() {
    using namespace n01;
    if (sSkyOutdoors != 0) {
        SkySprites_Draw(gSkySprites);
    }
    return TRUE;
}
namespace n01 {

}
BOOL SkyProc::onDelete() {
    using namespace n01;
    u32 saved = HBlank_Remove(sSkyHBlankTask);
    s32 i, j, k;
    u32 *pp;
    GX_LoadBGPltt(sSkyBlackBackdrop, 0, 2);
    GXS_LoadBGPltt(sSkyBlackBackdrop, 0, 2);
    u32 *p4 = &data_021f14c4;
    u32 v4 = *p4;
    if (v4 != 0) {
        Mem_Free(v4);
    }
    *p4 = 0;
    p4 = &data_021f14cc;
    v4 = *p4;
    if (v4 != 0) {
        Mem_Free(v4);
    }
    *p4 = 0;
    for (i = 0; i < 2; i++) {
        u8 *row;
        j = 0;
        row = (u8 *)&gWeatherManager + i * 8;
        for (; j < 2; j++) {
            u8 *r0 = row + j * 4;
            u32 *q = (u32 *)(r0 + 0x1544);
            if (*(u32 *)(r0 + 0x1544) != 0) {
                Mem_Free(*(u32 *)(r0 + 0x1544));
            }
            *q = 0;
        }
    }
    pp = data_021f14ac;
    for (k = 0; k < 3; k++) {
        if (*pp != 0) {
            Mem_Free(*pp);
            *pp = 0;
        }
        pp++;
    }
    if (sSkyOutdoors != 0) {
        SkySprites_Stop(gSkySprites);
    }
    StarTwinkle_Stop(data_021efc18);
    RainSe_Release((u8 *)this + 0x50);
    return saved;
}
namespace n01 {

extern "C" BOOL Sky_LoadCloudBg(u32 idx) {
    u8 r5;
    s32 r4;
    BOOL result;
    r4 = data_021f1448.level;
    result = FALSE;
    r5 = sSkyCloudBgLayer[idx];
    if (Sky_LoadPalettes(idx)) {
        if (_ZN14WeatherManager14loadCloudCharsEii(&gWeatherManager, r4, r5)) {
            u32 *r7 = (u32 *)&data_021f14c8;
            if (_ZN14WeatherManager15loadCloudScreenEPPhPjii(&gWeatherManager, &data_021f14c4, r7, 0, r4)) {
                if (Gfx2d_LoadScreen((void *)data_021f14c4, r5, *r7, 0)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}

extern "C" BOOL Sky_LoadNextCloudBg(u32 idx) {
    BOOL result = FALSE;
    if (data_021f1448.unk_20 != 0 && data_021f1448.direction != 2) {
        s32 r3 = data_021f1448.direction;
        s32 r5 = data_021f1448.unk_78;
        s32 r2 = data_021f146c;
        s32 r1 = data_021f1448.targetLevel;
        s32 r4;
        u32 r7;
        u32 stk4;
        if (r1 == r2) {
            if (r5 >= 0) {
                r5 = 0x20 - r5;
            } else if (r5 == 0) {
                switch (data_021f14c8.unk_0c) {
                case 3:
                case 4:
                    r5 = 0x20 - r5;
                    break;
                }
            }
        }
        if (r5 <= 0) {
            result = TRUE;
            goto end;
        }
        r7 = sSkyNextCloudBgLayer[idx];
        if (r3 == 0) {
            r4 = r2 + 1;
            stk4 = 1;
        } else {
            r4 = r2 - 1;
            stk4 = 2;
        }
        switch (data_021f14c8.unk_0c) {
        case 3:
        case 4:
            if (r1 == r2) {
                r4 = r2;
            }
            break;
        }
        if (_ZN14WeatherManager14loadCloudCharsEii(&gWeatherManager, r4, r7)) {
            if (_ZN14WeatherManager15loadCloudScreenEPPhPjii(&gWeatherManager, &data_021f14cc, &data_021f14d0, stk4, r4)) {
                u8 *buf = (u8 *)data_021f14cc;
                u32 off, n;
                if (r4 == (s32)data_021f146c) {
                    n = r5 << 5;
                    off = (0x20 - r5) << 5;
                    buf += off;
                } else {
                    n = r5 << 5;
                    off = 0;
                }
                if (Gfx2d_LoadScreen(buf, r7, n, off)) {
                    result = TRUE;
                }
            }
        }
    } else {
        result = TRUE;
    }
end:
    return result;
}

extern "C" BOOL Sky_LoadStarBg(u32 idx) {
    void *heap = gCurrentHeap;
    u8 v6 = sSkyStarBgLayer[idx];
    void *buf;
    if (!Gfx2d_LoadCharFile(data_020e676c, heap, v6, 0x10, 0x10, 0x1f)) {
        return FALSE;
    }
    buf = Heap_AllocTail(heap, 0x1000);
    if (buf == NULL) {
        return FALSE;
    }
    File_LoadToBuffer(data_020e6780, buf, 0x1000);
    Constellation_MaskSkyScreen(buf);
    if (!Gfx2d_LoadScreen(buf, v6, 0x1000, 0)) {
        Heap_Free(heap, buf);
        return FALSE;
    }
    Heap_Free(heap, buf);
    StarTwinkle_Init(data_021efc18, v6);
    return TRUE;
}

extern "C" void Sky_ResetObjGfx(void) {
    Unk_021f3010 *p = data_021f3010;
    s32 i;
    for (i = 0; i < 5; p++, i++) {
        p->unk_08 = 0;
    }
    _ZN13SkyObjPalette10invalidateEi(data_021f4398, -1);
    _ZN12Unk_020bc58c12reloadAllGfxEv(gSkySprites);
    _ZN12Unk_020bc58c9initClockEv(gSkySprites);
}

extern "C" BOOL Sky_SetEngine(s32 arg) {
    BOOL result = FALSE;
    Unk_020b8ec0_Time t;
    if (arg == 0) {
        Gfx2d_SetSubBgModeState(1);
        Clock_GetMinuteHour(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            Gfx2d_HideSubPlanes(2);
        } else {
            Gfx2d_ShowSubPlanes(2);
        }
        Gfx2d_ShowSubPlanes(0x10);
        Gfx2d_ShowSubPlanes(8);
        vu16 *ra = (vu16 *)0x400100a;
        vu16 *rb = (vu16 *)0x400100e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4c00;
        *rb = (*rb & 0x43) | 0x6f00;
        HBlank_Replace(sSkyHBlankTask, (void *)Sky_HBlankSub, (void *)Sky_VBlankSub);
    } else {
        Gfx2d_SetMainBgModeState(1);
        Clock_GetMinuteHour(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            Gfx2d_HideMainPlanes(2);
        } else {
            Gfx2d_ShowMainPlanes(2);
        }
        Gfx2d_ShowMainPlanes(0x10);
        Gfx2d_ShowMainPlanes(8);
        vu16 *ra = (vu16 *)0x400000a;
        vu16 *rb = (vu16 *)0x400000e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4400;
        *rb = (*rb & 0x43) | 0x6700;
        HBlank_Replace(sSkyHBlankTask, (void *)Sky_HBlankMain, (void *)Sky_VBlankMain);
    }
    if (arg != gWeatherManager.engine || arg == 1) {
        if (Sky_LoadCloudBg(arg) && Sky_LoadNextCloudBg(arg) && Sky_LoadStarBg(arg)) {
            gWeatherManager.engine = arg;
            Sky_ResetObjGfx();
            result = TRUE;
        }
    }
    void *p = PlayerActor_GetActor(4);
    u32 *dst = &data_021f14dc;
    *dst = 0;
    if (p != NULL) {
        p = (u8 *)p + 0x5c;
        if (p != NULL) {
            *dst = ((u32 *)p)[2];
        }
    }
    return result;
}

extern "C" void Sky_Disable(void) {
    HBlank_Replace(sSkyHBlankTask, (void *)Sky_HBlankNone, (void *)Sky_VBlankDisabled);
    Gfx2d_HideMainPlanes(0xa);
}

extern "C" s32 Weather_GetFallingPrecip(void) {
    switch (data_021f1448.level) {
    case 2:
    case 3:
    case 4:
        switch (data_021f1448.precipKind) {
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 0;
        }
    default:
        return 0;
    }
}

extern "C" void Weather_GetCurrent(void) { _ZN14WeatherManager18getWeatherAtOffsetEi(&gWeatherManager, 0); }

extern "C" void Weather_GetLevels(s32 *a, s32 *b) {
    *a = data_021f1448.level;
    *b = data_021f1448.targetLevel;
}

extern "C" u32 Weather_GetPrecipKind(void) { return data_021f1448.precipKind; }

extern "C" u32 Sky_GetCurrentPalette(void) {
    if (data_021f1448.targetLevel != data_021f1448.level) {
        return data_021f1448.transitionPalette;
    }
    return data_021f1448.curPalette;
}

extern "C" u32 Sky_GetStarScrollX(void) { return data_021f1448.starScrollX; }

extern "C" u32 Sky_GetStarScrollY(void) { return data_021f1448.starScrollY; }

extern "C" void Sky_GetStarViewingTime(Unk_020b8ec0_Time *out, s32 a, s32 b) {
    u32 tmp[2];
    s32 r7;
    tmp[0] = 0;
    tmp[1] = 0;
    Clock_GetDateTime(tmp);
    Sky_CalcStarScrollY(&gWeatherManager, tmp);
    DateTime_SubHours(tmp, 6);
    r7 = Sky_CalcStarScrollX(&gWeatherManager, tmp);
    MI_CpuCopy8(tmp, out, 8);
    if (a < 0) {
        a += 0x200;
    }
    if (a < r7) {
        a += 0x200;
    }
    DateTime_AddDays(out, (a - r7) / 8);
    if (b < 0) {
        b = 0;
    } else if (b > 0x68) {
        b = 0x68;
    }
    out->hour = 0x12;
    out->unk_01 = 0;
    out->second = 0;
    DateTime_AddMinutes(out, b * 0x2d0 / 0x68);
    if (out->hour == 6) {
        DateTime_SubHours(out, 1);
    }
    Clock_GetDateTime(tmp);
    DateTime_AddMinutes(tmp, 0x1e);
    if (DateTime_Compare(tmp, out, 0x3c) == 1) {
        DateTime_AddDays(out, 0x40);
    }
}

extern "C" void func_020b8eb0(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void func_020b8ea0(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void func_020b8e90(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Weather_RerollRainSlant(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Sky_OnDayChange(u32 x) { _ZN12Unk_020bc58c11onDayChangeEi(gSkySprites, x); }

extern "C" void Sky_OnSlingshotFired(u32 x) { _ZN12Unk_020bc58c16onSlingshotFiredEi(gSkySprites, x); }

extern "C" void Sky_SwapBuffers(void) {
    data_021f1448.bufferIndex ^= 1;
    _ZN12Unk_020bc58c14uploadDirtyGfxEv(gSkySprites);
}

extern "C" void Sky_EndBalloonDrop(void) { data_021f44a0.balloonDropEnded = 1; }

extern "C" void Sky_PlayBalloonDropSe(BOOL x) {
    if (x) {
        data_021f44a0.splashSePending = 1;
    } else {
        data_021f44a0.landSePending = 1;
    }
}

extern "C" u32 Sky_IsShootingStarVisible(void) { return data_021f4420.shootingStarVisible; }

extern "C" void Sky_WishOnShootingStar(void) {
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        _ZN12Unk_02097ff47setFlagEj(p, 0x32);
        SkySprites_OnStarWish(gSkySprites);
    }
}

extern "C" void Sky_RequestBirds(void) { data_021f4400.birdsRequested = 1; }

#undef data_021f4400
#undef data_021f4420
#undef data_021f44a0
#undef data_021f1448
#undef data_021f4398
#undef data_021f304c
#undef data_021f3010
#undef data_021f14c8
#undef data_021f14c4
#undef data_021f14cc
#undef data_021f14d0
#undef data_021f146c
#undef data_021f14dc
#undef data_021f14ac
#undef data_021f145c
#undef data_021efc08
#undef data_021efa88
#undef data_020e676c
#undef data_020e6780
}

namespace n00 {
extern "C" {
u32 data_020e48dc[2] = {0x91f000f0, 0xffff211c};
const u32 sFireworkFlicker[2] = {0x1000, 0x800};
const u32 sSkyPaletteLayer[1] = {0x206};
const u8 sFireworksPatternWeights[14] = {0x0, 0x5, 0xa, 0xf, 0x19, 0x23, 0x2d, 0x37, 0x41, 0x4b, 0x51, 0x59, 0x5f, 0x64};
char data_020e4f68[30] = "/sky/d_2d_b_cld_f0_bg_ncl.bin";
}
}
