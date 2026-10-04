#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "gfx/Mtx43.h"
#include "game/EventDayEntry.h"
#include "item/PickedItem.h"
#include "gfx/StarTwinkle.h"
#include "item/ItemPickSpec.h"
#include "snd/SndEnvChannel.h"
#include "gfx/SpriteAnim.h"
#include "game/WeatherRecord.h"
#include "item/Letter.h"
#include "game/FxVec3.h"
#include "snd/Unk_0213b938.h"
#include "snd/SkySndChannel.h"
#include "game/SkyProc.h"
#include "actor/Actor.h"
#include "gfx/Rgb555.h"
#include "actor/SpNpcActor.h"
#include "talk/SpNpcTalkRequest.h"
#include "talk/SpNpcKatieTalk.h"
#include "npc/SpNpcKatie.h"

// ======== class types (global scope) ========
class SkyProc;
struct MinuteHour;
struct WeatherManager;
struct SkyLightingLocals;
struct SkySpawnRate;
struct Unk_020bbcc8_Xxx;
struct Letter;
struct ItemPickSpec;
struct PickedItem;
struct StarWishLetterVars;
struct Unk_020bcb04_Ent;
struct SpriteAnim;
struct SkySprite;
struct SkyObjGfxSlot;
struct SkyObjGfxLoader;
struct SkyShotRequest;
struct SndEnvChannel;
struct SkySndChannel;
struct Unk_0213b938;
struct FxVec3;
struct SkySePlayer;
struct SkyShotSequence;
struct SkyObjPalette;
struct SkySprites;
struct SkyObjGfxDef;
struct SkyObjCharLayout;
struct SkySoundPosBuf;
struct SkyLookAtVec;
struct Unk_020bee28_Vec2;
struct FireworkColorPair;
struct Unk_020bee28_V;
struct SkyParticleStackPad;
struct SkyShootingStarStackPad;
struct Mtx43;
struct WeatherRecord;
struct EventDayEntry;
struct TalkStartMsg;
class SpNpcTalkRequest;
class SpNpcKatieTalk;
class SpNpcActor;
class SpNpcKatie;
// {minute, hour} as Clock_GetMinuteHour writes them
struct MinuteHour {
    /* 0x0 */ u8 minute;
    /* 0x1 */ u8 hour;
};
// Date and time as Clock_GetDateTime writes it (same record as in unk_0209cb74.cpp / unk_0201c050.cpp)
struct ClockDateTime {
    /* 0x0 */ u8 second;
    /* 0x1 */ u8 minute;
    /* 0x2 */ u8 hour;
    /* 0x3 */ u8 day;
    /* 0x4 */ u8 month;
    /* 0x5 */ u8 year;
    /* 0x6 */ u8 unk_06;
    /* 0x7 */ u8 unk_07;
};
// The weather code's ClockDateTime locals: cleared as two words before Clock_GetDateTime, read by field (word aligned)
union ClockDateTimeWords {
    ClockDateTime dt;
    u32 words[2];
};
// Per-line affine parameters of the cloud BG layer (BG3 reference point x/y and pa scale), written by
// Sky_UpdateLineTables, copied to the BG registers by the H-blank handler and the V-blank functions.
struct SkyLineAffine {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s16 pa;
    /* 0xa */ u8 pad_0a[2];
};
// Sky backdrop gradient (sSkyGradient): SkyGradient_Build interpolates the 192 line colours of one buffer between the
// two key colours/lines set by Sky_BlendPalettes (palette colours 4/5); bufferIndex is the buffer last built.
struct SkyGradient {
    /* 0x000 */ s32 bufferIndex;
    /* 0x004 */ u16 lineColors[2][0xc0];
    /* 0x304 */ u16 keyColors[2];
    /* 0x308 */ s32 keyLines[2];

    void setKey(s32 idx, u16 color, s32 line);
};
// Weather and sky state (gWeatherManager): cloud level 0..4 and its transitions, the line tables of the cloud BG,
// the star BG scroll and the sky palettes.
struct WeatherManager {
    /* 0x0000 */ s32 engine;
    /* 0x0004 */ s32 lineBufferIndex;
    /* 0x0008 */ SkyLineAffine lineAffine[2][0xc0];
    /* 0x1208 */ s32 cloudScroll;
    /* 0x120c */ s32 transitionProgress;
    /* 0x1210 */ u16 lineBlend[2][0xc0];
    /* 0x1510 */ u8 pad_1510[4];
    /* 0x1514 */ s32 screenOffsetY[2];
    /* 0x151c */ s32 bufferIndex;
    /* 0x1520 */ s32 transitionBusy;
    /* 0x1524 */ s32 level;
    /* 0x1528 */ s32 targetLevel;
    /* 0x152c */ s32 requestedLevel;
    /* 0x1530 */ s32 direction;
    /* 0x1534 */ s32 precipKind;
    /* 0x1538 */ s16 rainSlant;
    /* 0x153a */ u8 pad_153a[2];
    /* 0x153c */ u16 starScrollX;
    /* 0x153e */ u16 starScrollY;
    /* 0x1540 */ u8 pad_1540[4];
    /* 0x1544 */ u8 *paletteFiles[2][2];
    /* 0x1554 */ u32 paletteFileSizes[2][2];
    /* 0x1564 */ u16 *palettes[3]; // blended sky BG colours: [0] current level, [1] target level, [2] mix of both
    /* 0x1570 */ s32 cloudVariant;
    /* 0x1574 */ s32 nextCloudVariant;
    /* 0x1578 */ s32 streamBlock;
    /* 0x157c */ u8 *curCloudScreen;
    /* 0x1580 */ u32 curCloudScreenSize;
    /* 0x1584 */ u8 *cloudScreen;
    /* 0x1588 */ u32 cloudScreenSize;
    /* 0x158c */ s32 transitionStep;
    /* 0x1590 */ s32 transitionTimer;
    /* 0x1594 */ s32 prevPlayerZ;

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
    void updateTransitionTimed();
    void transitionTimedWait();
    void transitionTimedFinish();
    void transitionTimedBlend();
    void transitionTimedBegin();
    void updateTransitionStreamed();
    void streamCurrentCloudScreen();
    void reloadCurrentCloudGraphics();
};
enum Unk_020ba518_E { Unk_020ba518_E0 = 0 };
// Locals of Sky_UpdateLighting kept together in their stack order: room light colour, current time, 3D clear colour
// (gradient key 1) and the colour argument of NNS_G3dGlbMaterialColorSpecEmi
struct SkyLightingLocals {
    /* 0x0 */ u16 roomColor;
    /* 0x2 */ MinuteHour time;
    /* 0x4 */ u16 clearColor;
    /* 0x6 */ u16 roomColorArg;
};
// Slingshot shot request of one player (SkySprites::shotRequests): set by SkySprites::onSlingshotFired from the player's
// position, turned into kind 11 sprites (3 with the golden slingshot) by the shot spawner.
struct SkyShotRequest {
    /* 0x00 */ s32 playerSlot;
    /* 0x04 */ VecFx32 pos;
    /* 0x10 */ u8 golden;
    /* 0x11 */ u8 pending;

    SkyShotRequest();
    ~SkyShotRequest();
    void clear();
    void set(s32 a, s32 *p, u8 b);
};
enum Unk_020bb8a4_E { Unk_020bb8a4_E_0 = 0 };
// Row of sRainSpawnRates / sSnowSpawnRates (per precipitation strength): spawn interval = base + Random(random)
struct SkySpawnRate {
    /* 0x0 */ s32 baseInterval;
    /* 0x4 */ s32 randomInterval;
};
struct Unk_020bbcc8_Xxx {
    u32 a, b;
};
// Graphics slot of the sky sprites (SkySprites::gfxSlots, 5): which sky object's characters are loaded into the slot's
// OBJ VRAM area, by how many sprites it is used, and whether the characters still have to be loaded / uploaded.
struct SkyObjGfxSlot {
    /* 0x00 */ s32 gfxId;
    /* 0x04 */ s32 refCount;
    /* 0x08 */ u8 loaded;
    /* 0x09 */ u8 dirty;
    /* 0x0a */ u8 unk_0a[2];

    SkyObjGfxSlot();
};
// Row of sSkySpriteAnimSeqs: the animation sequence of a sky sprite and its play-once flag (SkySprite_StartAnim).
struct SkySpriteAnimDef {
    /* 0x00 */ SpriteAnimSeq seq;
    /* 0x08 */ s32 playOnce;
};
// Locals of SkySprites::sendWishLetters: variant of the "ev_star" letter and its present
struct StarWishLetterVars {
    /* 0x0 */ u8 msgVariant;
    /* 0x1 */ u8 pad_01;
    /* 0x2 */ u16 present;
};
struct Unk_020bcb04_Ent {
    u16 id;
    u8 pad[10];
};
struct SkyObjGfxLoader {
    u8 unk_00[0x134c];
    void init();
};
// Sky sprite (0x74; SkySprites::sprites holds 60): rain drop, snow flake, particle, shooting star, moon, balloon, UFO,
// Pete, lightning bolt, firework, rainbow, slingshot shot or bird (kind 0..12; 13 = free). initByKind/updateByKind/
// endByKind dispatch to the kind's functions (methods here, SkySprite_* free functions for kinds 1..5).
struct SkySprite {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 state; // 0 free, 1 starting, 2 running, 3 ending
    /* 0x08 */ s32 gfxId;
    /* 0x0c */ s32 animSeq;
    /* 0x10 */ SpriteAnim anim;
    /* 0x24 */ s32 gfxSlot;
    /* 0x28 */ s32 trackX;
    /* 0x2c */ s16 wavePhase;
    /* 0x2e */ u8 dir;
    /* 0x2f */ u8 localShot;
    /* 0x30 */ u8 hit;
    /* 0x31 */ u8 hidden;
    /* 0x32 */ u8 unk_32[2];
    /* 0x34 */ VecFx32 screenPos;
    /* 0x40 */ VecFx32 screenVel;
    /* 0x4c */ s32 scaleX;
    /* 0x50 */ s32 scaleY;
    /* 0x54 */ s16 angle;
    /* 0x56 */ s8 hFlip;
    /* 0x57 */ s8 vFlip;
    /* 0x58 */ s32 priority;
    /* 0x5c */ u8 cullRadius;
    /* 0x5d */ s8 palette;
    /* 0x5e */ u8 unk_5e[2];
    /* 0x60 */ u32 work0;
    /* 0x64 */ s32 work1;
    /* 0x68 */ u32 work2;
    /* 0x6c */ s32 work3;
    /* 0x70 */ s32 work4;

    SkySprite();
    ~SkySprite();
    SkySprite *construct();
    void clear();
    void resetFree();
    void initByKind(u32 a);
    void updateByKind();
    void endByKind();
    void release();
    void startAnim();
    void requestSe(s32 a);
    void requestSeSustained(s32 a);
    void requestSeSustainedOn(u32 a, u32 b);
    s32 checkShotHit(s32 a, s32 b, s32 c);
    void beginCrossing(s32 a, s32 b);
    s32 advanceCrossing(s32 a, s32 b, s32 c);
    // kind 0 rain drop
    void initRainDrop(BOOL flag);
    void updateRainDrop();
    void endRainDrop();
    // kind 6 UFO
    void initUfo();
    void updateUfo();
    void endUfo();
    void spawnUfoDebris();
    // kind 7 Pete
    void initPete();
    void updatePete();
    void endPete();
    // kind 8 lightning
    void initLightning();
    void updateLightning();
    void endLightning();
    // kind 9 firework
    void initFirework(u32 a);
    void initFireworkShell(u32 a);
    void initFireworkBurst(u32 a);
    void updateFirework();
    void updateFireworkShell();
    void updateFireworkBurst();
    void updateFireworkScale(s32 a);
    s32 riseDistance(s32 a);
    void updateFireworkPalette();
    void releaseFireworkPalette();
    void endFirework();
    // kind 10 rainbow
    void initRainbow();
    void updateRainbow();
    void endRainbow();
    // kind 11 slingshot shot
    void initShot(u32 a);
    void updateShot();
    void endShot();
    // kind 12 bird
    void initBird(u32 a);
    void updateBird();
    void endBird();
};
struct SkySePlayer {
    SkySndChannel channels[8];
    FxVec3 positions[8];
    u8 active;

    SkySePlayer();
    void update();
    void request(s32 idx, s32 a, VecFx32* p);
    void requestSustained(s32 idx, s32 a, VecFx32* p);
    void releaseAll();
    void resetAll();
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

    SkyObjPalette();
    void setOverride(s32 idx, u16* p);
    BOOL hasOverride(s32 idx);
    void clearOverride(s32 idx);
    void setLoadedRow(s32 a, s32 b);
    BOOL isLoaded(s32 idx);
    void invalidateFor(s32 idx);
    void invalidate(s32 v);
    void pickBalloonColor();
    BOOL applyOverrides(s32 v);
};
// The sky sprite system (gSkySprites): 60 sprites, their 5 graphics slots, the graphics loader and OBJ palette, the
// spawner state (rain, snow, lightning, moon, rainbow, birds, shooting stars, fireworks, balloon / UFO / Pete
// visitors), the slingshot shot requests and shot sequence, and the positional SE player.
struct SkySprites {
    /* 0x0000 */ SkySprite sprites[60];
    /* 0x1b30 */ SkyObjGfxSlot gfxSlots[5];
    /* 0x1b6c */ SkyObjGfxLoader loader;
    /* 0x2eb8 */ SkyObjPalette palette;
    /* 0x2f00 */ s32 spawnInterval;
    /* 0x2f04 */ s32 spawnAccum;
    /* 0x2f08 */ s32 precipIntensity;
    /* 0x2f0c */ s32 snowCounter;
    /* 0x2f10 */ s32 thunderTimer;
    /* 0x2f14 */ s32 spriteCount;
    union {
        /* 0x2f18 */ u16 minuteHour;     // {minute, hour} of this frame (Clock_GetMinuteHour)
        MinuteHour time;
    };
    union {
        /* 0x2f1a */ u16 prevMinuteHour; // ... and of the previous frame
        MinuteHour prevTime;
    };
    /* 0x2f1c */ s32 second;
    /* 0x2f20 */ s32 prevSecond;
    /* 0x2f24 */ u8 balloonChance;
    /* 0x2f25 */ u8 ufoChance;
    /* 0x2f26 */ u8 ufoEventToday;
    /* 0x2f27 */ u8 peteEventToday;
    /* 0x2f28 */ u8 fireworksToday;
    /* 0x2f29 */ u8 birdsRequested;
    /* 0x2f2a */ u8 unk_2f2a[2];
    /* 0x2f2c */ s32 fireworksPattern;
    /* 0x2f30 */ s32 fireworksPatternTime;
    /* 0x2f34 */ s32 fireworksBigTimer;
    /* 0x2f38 */ s32 fireworksSlotTimers[4];
    /* 0x2f48 */ s32 fireworksInterval;
    /* 0x2f4c */ s32 shootingStarDelay;
    /* 0x2f50 */ u8 shootingStarVisible;
    /* 0x2f51 */ u8 rainbowStrength;
    /* 0x2f52 */ u8 unk_2f52[2];
    /* 0x2f54 */ s32 rainStrength;
    /* 0x2f58 */ SkyShotRequest shotRequests[4];
    /* 0x2fa8 */ SkyShotSequence shotSeq;
    /* 0x2fcc */ SkySePlayer se;

    SkySprites();
    ~SkySprites();
    void start();
    void stop();
    void initClock();
    void tickClock();
    void checkTodayEvents();
    void onDayChange(BOOL a);
    void sendWishLetters();
    void onSlingshotFired(s32 i);
    SkyShotRequest *getShotRequest(s32 i);
    SkySprite *spawn(s32 kind, s32 idx, VecFx32 *vec, s32 arg);
    s32 getGfxIdForKind(s32 kind, s32 arg);
    s32 findFreeIndex(s32 kind, s32 idx);
    s32 findKind(s32 id);
    void killKind(s32 id);
    void killAll();
    s32 pickGfxSlot(s32 t);
    void releaseConflictingSlots(s32 k);
    void reloadAllGfx();
    void loadDirtyGfx();
    void uploadDirtyGfx();
    void spawnInitialPrecip();
    void updateLightning();
    void updateThunderFlash();
    void updateMoon();
    void updateRainbow();
    // spawners (event checks run by SkySprites_UpdateEvents)
    void updateRain();
    void updateSnow();
    void updateShootingStar();
    void updateFireworksShow();
    void updateBalloon();
    void updateUfo();
    void updatePete();
    void updateBirds();
    void spawnShots();
    void applyRainbowBlend();
    // fireworks show: launch slots 0..3 and the pattern acts (sFireworksPattern* tables)
    BOOL canLaunchBig(s32 idx);
    BOOL canLaunchSmall(s32 idx);
    void launchFirework(s32 idx, s32 a, s32 b);
    void rollLaunchInterval(s32 *out);
    void tickBigLaunch();
    void tickLowBigLaunch();
    void tickSmallLaunches();
    void tickPairLaunches();
    void tickTripleLaunches();
    void setFireworksTiming(s32 a, s32 b, s32 c);
    void selectFireworksPattern(s32 mode);
    void fireworksPatternAct01();
    void fireworksPatternAct02();
    void fireworksPatternAct03();
    void fireworksPatternAct04();
    void fireworksPatternAct05();
    void fireworksPatternAct06();
    void fireworksPatternAct07();
    void fireworksPatternAct08();
    void fireworksPatternAct09();
    void fireworksPatternAct0A();
    void fireworksPatternAct0B();
};
// The original computes the destination address BEFORE loading *p. An enum-typed local is not forwarded by mwcc,
// so holding the element base in one keeps the address computation where it is written.
enum Unk_020bd718_E { Unk_020bd718_E0 };
// Row of sSkyObjGfxTable (one per sky object graphic): char file (sSkyObjCharFiles), top/bottom tile numbers, char
// layout (sSkyObjCharLayouts), source palette row and OBJ palette; unk_0e/unk_0f are 0 in every row
struct SkyObjGfxDef { u32 charFile; u16 charTileA; u16 charTileB; u32 charLayout; s8 srcPalette; s8 objPalette; s8 unk_0e; s8 unk_0f; };
// Row of sSkyObjCharLayouts: where the top and bottom tile runs of a graphic go in its slot
struct SkyObjCharLayout { u32 topTileX; u32 topTileCount; u32 bottomTileX; u32 bottomTileCount; };
// 16-byte local of SkySprite_RequestSe / RequestSeSustained; SkySprite_GetSoundPos fills the first three words
struct SkySoundPosBuf {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 volume;
    /* 0xc */ s32 unk_0c;
};
// gCameraLookAt as SkySprite_ProjectWorldPos reads it, and its local copy (vector object, trivial ctor/dtor)
struct SkyLookAtVec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
    SkyLookAtVec() {}
    ~SkyLookAtVec() {}
};
enum Unk_020be0bc_E { Unk_020be0bc_E_0 = 0 };
enum Unk_020be820_E { Unk_020be820_E_0 = 0 };
struct Unk_020bee28_Vec2 {
    s32 x, y;
    Unk_020bee28_Vec2(s32 a, s32 b) { x = a; y = b; }
};
// sFireworkColors row: a burst fades from the first colour to the second (SkySprite::updateFireworkPalette)
struct FireworkColorPair {
    /* 0x0 */ Rgb555 start;
    /* 0x2 */ Rgb555 end;
};
struct Unk_020bee28_V {
    s32 x, y, z;
    Unk_020bee28_V(const VecFx32Copy &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_020bee28_V() {}
};
struct SkyParticleStackPad {
    s32 v[3];
    SkyParticleStackPad() {}
    ~SkyParticleStackPad() {}
};
struct SkyShootingStarStackPad {
    s32 v[4];
    SkyShootingStarStackPad() {}
    ~SkyShootingStarStackPad() {}
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
void _ZN9SkySprite7endPeteEv(void);
void _ZN9SkySprite11initRainbowEv(void);
void _ZN10SkySprites21fireworksPatternAct03Ev(void);
void _ZN10SkySprites21fireworksPatternAct08Ev(void);
void _ZN10SkySprites21fireworksPatternAct05Ev(void);
void _ZN10SkySprites21fireworksPatternAct07Ev(void);
void _ZN9SkySprite15updateLightningEv(void);
void _ZN15SkyShotSequence14actBalloonDropEv(void);
void SkySprites_FireworksPatternAct0E(void);
void SkySprites_FireworksPatternAct12(void);
void _ZN10SkySprites21fireworksPatternAct01Ev(void);
void _ZN9SkySprite8initPeteEv(void);
void SkySprites_FireworksPatternAct13(void);
void SkySprite_InitParticle(void);
void SkySprite_InitBalloon(void);
void SkySprite_EndParticle(void);
void _ZN15SkyShotSequence13actUfoCrashedEv(void);
void _ZN9SkySprite8initBirdEj(void);
void SkySprite_UpdateSnowFlake(void);
void SkySprites_FireworksPatternAct11(void);
void _ZN9SkySprite11endFireworkEv(void);
void _ZN15SkyShotSequence13actBalloonHitEv(void);
void _ZN10SkySprites21fireworksPatternAct02Ev(void);
void _ZN9SkySprite13updateRainbowEv(void);
void _ZN9SkySprite10updateShotEv(void);
void _ZN9SkySprite8initShotEj(void);
void _ZN15SkyShotSequence13actShotFlightEv(void);
void SkySprites_FireworksPatternAct0D(void);
void SkySprites_FireworksPatternAct0C(void);
void _ZN10SkySprites21fireworksPatternAct09Ev(void);
void _ZN10SkySprites21fireworksPatternAct0AEv(void);
void SkySprites_FireworksPatternAct10(void);
void _ZN9SkySprite13initLightningEv(void);
void SkySprite_InitSnowFlake(void);
void _ZN9SkySprite10updatePeteEv(void);
void _ZN15SkyShotSequence9actUfoHitEv(void);
void _ZN15SkyShotSequence13actPeteFallenEv(void);
void SkySprite_UpdateParticle(void);
void SkySprite_InitMoon(void);
void _ZN10SkySprites21fireworksPatternAct04Ev(void);
void _ZN9SkySprite7initUfoEv(void);
void _ZN9SkySprite7endBirdEv(void);
void _ZN9SkySprite7endShotEv(void);
void _ZN9SkySprite10endRainbowEv(void);
void _ZN9SkySprite12endLightningEv(void);
void _ZN9SkySprite6endUfoEv(void);
void SkySprite_EndBalloon(void);
void SkySprite_EndMoon(void);
void SkySprite_EndShootingStar(void);
void _ZN9SkySprite14updateRainDropEv(void);
void _ZN9SkySprite11endRainDropEv(void);
void SkySprite_UpdateShootingStar(void);
void _ZN9SkySprite9updateUfoEv(void);
void SkySprites_FireworksPatternAct0F(void);
void _ZN15SkyShotSequence10actUfoFallEv(void);
void _ZN10SkySprites21fireworksPatternAct06Ev(void);
void SkySprite_UpdateMoon(void);
void SkySprite_UpdateBalloon(void);
void _ZN9SkySprite10updateBirdEv(void);
void SkySprite_EndSnowFlake(void);
void _ZN9SkySprite12initFireworkEj(void);
void _ZN9SkySprite14updateFireworkEv(void);
void SkySprite_InitShootingStar(void);
void _ZN10SkySprites21fireworksPatternAct0BEv(void);
void _ZN9SkySprite12initRainDropEi(void);
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
extern SkyGradient sSkyGradient;
extern StarTwinkle data_021efc18;
extern WeatherManager gWeatherManager;
extern SkySprites gSkySprites;
}
}

// ======== unk_020bfe30.cpp ========
namespace n13 {
static inline void Unk_020bfe30_Set(VecFx32 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
extern "C" {
void SkySprite_Release(void *p);
}
extern "C" {
void VEC_Add(VecFx32 *a, VecFx32 *b, VecFx32 *c);
}
extern "C" {
Actor *PlayerActor_GetActor(s32 n);
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
BOOL _ZN10PlayerData8testFlagEj(s32 a, s32 b);
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
s32 _ZN10PlayerData7setFlagEj(s32 a, s32 b);
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
void _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
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
extern VecFx32 sSpNpcKatieReunionWalkPos;
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

extern "C" void Sky_ProjectToScreenX(s32 *out, VecFx32 *in);
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

extern "C" void Sky_ProjectToScreenX(s32 *out, VecFx32 *in) {
    Mtx43 *m = Camera_GetViewMatrix();
    data_021f47e0 = *m;
    VecFx32 v;
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
void SkySprite::initRainDrop(BOOL flag) {
    using namespace n13;
    s32 idx;
    s32 x = (sRainSideToggle * Random_GlobalBelow(0x8a) + 0x80) << 12;
    sRainSideToggle *= -1;
    s32 y = -0x14000 - (Random_GlobalBelow(0x10) << 12);
    VecFx32 *p34 = (VecFx32 *)&screenPos;
    p34->x = x;
    p34->y = y;
    p34->z = 0;
    s32 mul = n00::gSkySprites.rainStrength;
    s32 rr = Random_GlobalBelow(0xaac) - 0x556;
    s32 sh = ((mul * (rr + data_021f1448[0x38 / 2])) << 4) >> 16;
    idx = ((u16)sh >> 4) * 2;
    VecFx32 *p40 = (VecFx32 *)&screenVel;
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
void SkySprite::updateRainDrop() {
    using namespace n13;
    VecFx32 *p = (VecFx32 *)&screenPos;
    VEC_Add(p, (VecFx32 *)&screenVel, p);
    Actor *e = PlayerActor_GetActor(4);
    if (e) {
        s32 d = -(e->position.x - e->prevPosition.x);
        s32 m = sRainParallax[work2];
        d = (d * m) >> 12;
        p->x += d;
    }
    if (p->y > ((s32)work0 << 12) + 0x100000) {
        state = 3;
    } else if (p->x < -0x14000) {
        p->x += 0x11e000;
    } else if (p->x > 0x114000) {
        p->x -= 0x11e000;
    }
}
namespace n13 {

}
void SkySprite::endRainDrop() {
    using namespace n13;
    SkySprite_Release(this);
}
namespace n13 {

#undef data_021f1448
}

// ======== unk_020bf4ac.cpp ========
namespace n12 {
// Locals of SkySprite_CalcMoonColors: current time, the clear/cloudy colours of this hour and the next, the result
struct MoonColorBlend {
    /* 0x0 */ u8 minute;
    /* 0x1 */ u8 hour;
    /* 0x2 */ Rgb555 clearColor;
    /* 0x4 */ Rgb555 clearColorNext;
    /* 0x6 */ Rgb555 cloudyColor;
    /* 0x8 */ Rgb555 cloudyColorNext;
    /* 0xa */ u16 blended;
};
// One 16-colour row of the moon palette file (a_sky_moon_obj_ncl.bin, loaded at SkyObjGfxLoader+0x1208), one per
// night hour: colours 3..7 for a cloudy sky, 11..15 for a clear one (SkySprite_CalcMoonColors)
struct SkyMoonPaletteRow {
    /* 0x00 */ u16 unk_00[3];
    /* 0x06 */ u16 cloudyColors[5];
    /* 0x10 */ u16 unk_10[3];
    /* 0x16 */ u16 clearColors[5];
};
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
void _ZN13SkyObjPalette13clearOverrideEi(void *, s32);
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
s32 _ZN10SkySprites8findKindEi(void *, s32);
}
extern "C" {
BOOL SkySprite_FollowShootingStar(SkySprite *);
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
namespace L_021f4254 { extern "C" { extern struct S { u8 p[0x2d74]; SkyMoonPaletteRow v[1]; } gSkySprites; } }
#define data_021f4254 n12::L_021f4254::gSkySprites.v
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
void SkySprite_ResetMoonPalette(void);
}
extern "C" {
BOOL SkySprite_CalcMoonPos(void *out);
}
extern "C" {
void SkySprite_UpdateMoonPalette(SkySprite *this_);
}
extern "C" {
void SkySprite_InitMoonPalette(SkySprite *this_);
}
extern "C" {
void SkySprite_FadeMoonClarity(SkySprite *this_);
}
extern "C" {
void SkySprite_SetMoonClarity(SkySprite *this_);
}
extern "C" {
void SkySprite_CalcMoonColors(SkySprite *this_);
}

extern "C" u32 SkySprite_EndBalloon(void *a);
extern "C" void SkySprite_UpdateBalloon(SkySprite *this_);
extern "C" void SkySprite_InitBalloon(SkySprite *this_, u32 arg);
extern "C" void SkySprite_EndMoon(SkySprite *this_);
extern "C" void SkySprite_UpdateMoon(SkySprite *this_);
extern "C" void SkySprite_InitMoon(SkySprite *this_);
extern "C" void SkySprite_ResetMoonPalette(void);
extern "C" void SkySprite_UpdateMoonPalette(SkySprite *this_);
extern "C" void SkySprite_InitMoonPalette(SkySprite *this_);
extern "C" void SkySprite_FadeMoonClarity(SkySprite *this_);
extern "C" void SkySprite_SetMoonClarity(SkySprite *this_);
extern "C" void SkySprite_CalcMoonColors(SkySprite *this_);
extern "C" BOOL SkySprite_CalcMoonPos(void *out_);
extern "C" void SkySprite_EndShootingStar(SkySprite *this_);
extern "C" void SkySprite_UpdateShootingStar(SkySprite *this_);
extern "C" void SkySprite_InitShootingStar(SkySprite *this_);
extern "C" void SkySprite_EndParticle(void *a);
extern "C" void SkySprite_UpdateParticle(SkySprite *this_);
extern "C" void SkySprite_InitParticle(SkySprite *this_, s32 arg);
extern "C" BOOL SkySprite_FollowShootingStar(SkySprite *this_);
extern "C" void SkySprite_EndSnowFlake(void *a);
extern "C" void SkySprite_UpdateSnowFlake(SkySprite *this_);
extern "C" void SkySprite_InitSnowFlake(SkySprite *this_, s32 arg);

extern "C" void SkySprite_InitSnowFlake(SkySprite *this_, s32 arg) {
    s32 a = Random_GlobalBelow(3);
    s32 b = Random_GlobalBelow(0x80);
    s32 g = sSnowSideToggle;
    s32 x = (g * b + 0x80) << 12;
    VecFx32 *pos, *vel;
    sSnowSideToggle = g * 0xffffffff;
    pos = &this_->screenPos;
    this_->screenPos.x = x;
    pos->y = -0x14000;
    pos->z = 0;
    vel = &this_->screenVel;
    this_->screenVel.x = 0;
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
        this_->screenPos.y = this_->screenPos.y + (Random_GlobalBelow(0x1c1) << 12);
    }
}

extern "C" void SkySprite_UpdateSnowFlake(SkySprite *this_) {
    VecFx32 *pos = &this_->screenPos;
    Actor *o;
    s32 base, ang;
    VEC_Add(pos, &this_->screenVel, pos);
    o = (Actor *)PlayerActor_GetActor(4);
    if (o != NULL) {
        s32 dv = -(o->position.x - o->prevPosition.x);
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

extern "C" BOOL SkySprite_FollowShootingStar(SkySprite *this_) {
    SkyShootingStarStackPad pad;
    SkySprite *p = &n00::gSkySprites.sprites[_ZN10SkySprites8findKindEi(&n00::gSkySprites, 3)];
    BOOL result = FALSE;
    if (p != NULL && p->state == 2) {
        VecFx32 *pos = &p->screenPos;
        s32 k = ((s32)((u32)(p->angle << 16) >> 16) >> 4) * 2;
        s32 d = FX_Div(0x10000, p->scaleY);
        s32 y = pos->y + func_01ffcb0c(data_02135f44[k + 1], d);
        s32 x = pos->x - func_01ffcb0c(data_02135f44[k], d);
        VecFx32 *out = &this_->screenPos;
        out->x = x;
        out->y = y;
        out->z = 0;
        result = TRUE;
    }
    return result;
}

extern "C" void SkySprite_InitParticle(SkySprite *this_, s32 arg) {
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

extern "C" void SkySprite_UpdateParticle(SkySprite *this_) {
    s32 m = this_->work0 & 0xf;
    this_->work1 = this_->work1 + 1;
    if (m == 0) {
        Vec_Scale(&this_->screenVel, 0xe66);
        VEC_Add(&this_->screenPos, &this_->screenVel, &this_->screenPos);
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

extern "C" void SkySprite_InitShootingStar(SkySprite *this_) {
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
    this_->screenPos.x = x;
    this_->screenPos.y = y;
    this_->screenPos.z = 0;
    this_->screenVel.x = func_01ffcb0c(cs, 0x7800);
    this_->screenVel.y = func_01ffcb0c(sn, 0x7800);
    this_->screenVel.z = 0;
    this_->angle = ang - 0x4000;
    this_->animSeq = 0x11;
    this_->priority = 3;
    n00::gSkySprites.shootingStarVisible = 0;
    SkySprite_RequestSeSustainedOn(this_, 6, 0x801);
}

extern "C" void SkySprite_UpdateShootingStar(SkySprite *this_) {
    VEC_Add(&this_->screenPos, &this_->screenVel, &this_->screenPos);
    s32 x = this_->screenPos.x >> 12;
    BOOL out;
    s32 y = this_->screenPos.y >> 12;
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
    n00::gSkySprites.shootingStarVisible = in;
    if (out) {
        this_->state = 3;
    }
}

extern "C" void SkySprite_EndShootingStar(SkySprite *this_) {
    n00::gSkySprites.shootingStarVisible = 0;
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

extern "C" void SkySprite_CalcMoonColors(SkySprite *this_) {
    MoonColorBlend rec;
    SkyMoonPaletteRow *t0;
    SkyMoonPaletteRow *t1;
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
        *(u16 *)&rec.clearColor = t0->clearColors[i];
        *(u16 *)&rec.clearColorNext = t1->clearColors[i];
        *(u16 *)&rec.cloudyColor = t0->cloudyColors[i];
        *(u16 *)&rec.cloudyColorNext = t1->cloudyColors[i];
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

extern "C" void SkySprite_SetMoonClarity(SkySprite *this_) {
    s32 s = n00::gWeatherManager.level;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    this_->work3 = f;
}

extern "C" void SkySprite_FadeMoonClarity(SkySprite *this_) {
    s32 v;
    s32 s = n00::gWeatherManager.targetLevel;
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

extern "C" void SkySprite_InitMoonPalette(SkySprite *this_) {
    u8 *p = data_021f4398;
    SkySprite_SetMoonClarity(this_);
    SkySprite_CalcMoonColors(this_);
    for (u32 i = 0; i < 5; i++) {
        _ZN13SkyObjPalette11setOverrideEiPt(p, i + 10, &sMoonColors[i]);
    }
}

extern "C" void SkySprite_UpdateMoonPalette(SkySprite *this_) {
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
        _ZN13SkyObjPalette13clearOverrideEi(p, i + 10);
    }
}

extern "C" void SkySprite_InitMoon(SkySprite *this_) {
    if (SkySprite_CalcMoonPos(&this_->screenPos)) {
        this_->animSeq = 0x12;
        this_->priority = 3;
        SkySprite_InitMoonPalette(this_);
    } else {
        this_->state = 3;
    }
}

extern "C" void SkySprite_UpdateMoon(SkySprite *this_) {
    if ((gFrameCounter & 0x7f) == 0) {
        if (!SkySprite_CalcMoonPos(&this_->screenPos)) {
            this_->state = 3;
        }
        SkySprite_UpdateMoonPalette(this_);
    }
}

extern "C" void SkySprite_EndMoon(SkySprite *this_) {
    SkySprite_ResetMoonPalette();
    SkySprite_Release(this_);
}

extern "C" void SkySprite_InitBalloon(SkySprite *this_, u32 arg) {
    SkySprite_BeginCrossing(this_, Random_GlobalBelow(2) == 0 ? 1 : 0, 0x3e8);
    this_->animSeq = 1;
    this_->priority = 2;
    this_->work0 = 0;
    arg &= 1;
    this_->work1 = arg != 0 ? 1 : 0;
    this_->work2 = 0;
}

extern "C" void SkySprite_UpdateBalloon(SkySprite *this_) {
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
        this_->screenVel.x = 0;
        this_->screenVel.y = -0x800;
        this_->screenVel.z = 0;
        this_->work0 = 2;
        this_->work2 = 0;
    } else {
        this_->screenVel.y += 0x666;
        this_->screenVel.y = func_01ffcb0c(this_->screenVel.y, 0xfd7);
        VEC_Add(&this_->screenPos, &this_->screenVel, &this_->screenPos);
        if (this_->screenPos.y > 0xd0000) {
            _ZN15SkyShotSequence13onBalloonFellEv(data_021f4488);
            this_->state = 3;
        }
    }
    if ((s32)this_->work0 >= 1) {
        _ZN15SkyShotSequence9setTargetEiiih(data_021f4488, this_->screenPos.x, this_->screenPos.y, this_->scaleX, this_->dir == 0 ? 1 : 0);
    }
}

extern "C" u32 SkySprite_EndBalloon(void *a) { return SkySprite_Release(a); }

#undef data_021f3010
#undef data_021f4488
#undef data_021f4398
#undef data_021f4254
}

// ======== unk_020beb40.cpp ========
namespace n11 {
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
void VEC_Add(VecFx32 *a, VecFx32 *b, VecFx32 *out);
}
extern "C" {
void Vec_Scale(VecFx32 *v, s32 scale);
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
s32 SkyObjGfxSlot_RefreshPalette(SkyObjGfxSlot *p, s32 v);
}
extern "C" {
void SkyObjGfxSlot_SetGfx(SkyObjGfxSlot *p, s32 v);
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
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; SkyObjPalette v; } gSkySprites; } }
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
extern VecFx32Copy gCameraLookAt;
}
extern "C" {
extern VecFx32Copy gVec3Zero;
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
extern FireworkColorPair sFireworkColors[];
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
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; SkyObjGfxSlot v[1]; } gSkySprites; } }
#define data_021f3010 n11::L_021f3010::gSkySprites.v
extern "C" {
SkySprite *_ZN10SkySprites5spawnEiiP7VecFx32i(void *tab, s32 a, s32 b, void *pos, s32 c);
}
extern "C" {
void SkySprite_SpawnHitParticle(VecFx32 *pos, s32 scale, s32 speed);
}
extern "C" {
Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b);
}

extern "C" Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b);
extern "C" s32 SkySprite_GetFireworkPalIndex(s32 a, s32 flag);
extern "C" void SkySprite_SpawnHitParticle(VecFx32 *pos, s32 scale, s32 speed);

}
void SkySprite::spawnUfoDebris()
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
            VecFx32 pos;
            pos.x = screenPos.x + func_01ffcb0c(q, data_02135f44[idx + 1]);
            pos.y = y;
            pos.z = 0;
            SkySprite *o = _ZN10SkySprites5spawnEiiP7VecFx32i(gSkySprites, 2, 0x3c, &pos, r4 & 0xf);
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
void SkySprite::initUfo()
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
void SkySprite::updateUfo()
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
        if (_ZN10SpriteAnim10isFinishedEv(&anim)) {
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
        VecFx32Copy v = gVec3Zero;
        s32 sc;
        if ((s32)work0 >= 4) {
            v.x = dir ? 0x19a : -0x19a;
            v.y = 0x19a;
            sc = 0xfd7;
        } else {
            v.y = 0x800;
            sc = 0x1000;
        }
        VEC_Add(&screenVel, (VecFx32 *)&v, &screenVel);
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
void SkySprite::endUfo()
{
    using namespace n11;
    release();
}
namespace n11 {

extern "C" void SkySprite_SpawnHitParticle(VecFx32 *pos, s32 scale, s32 speed)
{
    SkyParticleStackPad tmp;
    SkySprite *o = _ZN10SkySprites5spawnEiiP7VecFx32i(gSkySprites, 2, 0x3c, pos, 0);
    if (o) {
        o->scaleX = scale;
        o->scaleY = scale;
        o->screenVel.x = func_01ffcb0c(speed, 0x800);
        o->screenVel.y = 0;
        o->screenVel.z = 0;
    }
}

}
void SkySprite::initPete()
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
void SkySprite::updatePete()
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
        } else if (_ZN10SpriteAnim13getFrameIndexEv(&anim) == 0) {
            if (work1++ == 0) requestSeSustained(0x7fe);
        } else {
            work1 = 0;
        }
    } else if (work0 == 1) {
        animSeq = 0x14;
        startAnim();
        _ZN10SpriteAnim5pauseEv(&anim);
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
            _ZN10SpriteAnim7restartEv(&anim);
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
void SkySprite::endPete()
{
    using namespace n11;
    release();
}
namespace n11 {

}
void SkySprite::initLightning()
{
    using namespace n11;
    s32 a = (Random_GlobalBelow(0x80) * (Random_GlobalBelow(2) * 2 - 1) + 0x80) << 12;
    s32 c = (Random_GlobalBelow(0x50) + 0x50) << 12;
    VecFx32 *p = &screenPos;
    screenPos.x = a;
    p->y = c;
    p->z = 0;
    animSeq = Random_GlobalBelow(8) + 8;
    priority = 2;
}
namespace n11 {

}
void SkySprite::updateLightning()
{
    using namespace n11;
    if (_ZN10SpriteAnim10isFinishedEv(&anim)) state = 3;
}
namespace n11 {

}
void SkySprite::endLightning()
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
void SkySprite::updateFireworkPalette()
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
    FireworkColorPair *e = &sFireworkColors[k];
    r = 0; g = 0; inv = 0x1000 - t;
    r = func_01ffcb0c(sFireworkColors[k].start.r << 12, inv) + func_01ffcb0c(e->end.r << 12, t);
    g = func_01ffcb0c(sFireworkColors[k].start.g << 12, inv) + func_01ffcb0c(e->end.g << 12, t);
    s32 b = func_01ffcb0c(sFireworkColors[k].start.b << 12, inv) + func_01ffcb0c(e->end.b << 12, t);
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
    SkyObjPalette *const pal = &data_021f4398;
    pal->setOverride(lo, &col[0]);
    pal->setOverride(hi, &col[1]);
    SkyObjGfxSlot_RefreshPalette(data_021f3010 + idx, u8v);
}
namespace n11 {

}
void SkySprite::releaseFireworkPalette()
{
    using namespace n11;
    u32 v = work0;
    BOOL f = ((v >> 31) & 1) != 0;
    s32 lo = SkySprite_GetFireworkPalIndex((v >> 8) & 3, f);
    s32 hi = lo + 1;
    if (lo < 15) data_021f4398.clearOverride(lo);
    if (hi < 15) data_021f4398.clearOverride(hi);
}
namespace n11 {

}
s32 SkySprite::riseDistance(s32 a)
{
    using namespace n11;
    return a << 14;
}
namespace n11 {

}
void SkySprite::updateFireworkScale(s32 a)
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
    if (a < 0) a = _ZN10SpriteAnim13getFrameIndexEv(&anim);
    if (a < 0) max = 0;
    else if (a <= max) max = a;
    s32 x = tab[max];
    scaleX = x;
    scaleY = x;
}
namespace n11 {

}
void SkySprite::initFirework(u32 a)
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
s32 _ZN9SkySprite12riseDistanceEi(s32 a, s32 b);
}
extern "C" {
void SkySprite_ProjectFirework(VecFx32 *v, s32 a, s32 b, BOOL c);
}
extern "C" {
void VEC_Add(VecFx32 *a, VecFx32 *b, VecFx32 *c);
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
void Vec_Scale(VecFx32 *v, s32 a);
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
void _ZN11SkySePlayer16requestSustainedEiiP7VecFx32(void *a, u32 b, u32 c, void *d);
}
extern "C" {
SkyShotRequest *_ZN10SkySprites14getShotRequestEi(void *a, u32 b);
}
extern "C" {
VecFx32 Sky_ProjectToScreenX(VecFx32 *v);
}
extern "C" {
s32 PlayerActor_GetLocalSessionSlot();
}
extern "C" {
s32 _ZN10SkySprites5spawnEiiP7VecFx32i(void *a, u32 b, u32 c, void *d, u32 e);
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
static inline void SkyVec_Set(VecFx32 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
static inline BOOL SkySprite_IsOffScreen(VecFx32 *v) {
    BOOL r = v->y < -0xa000 || v->y > 0xca000 || v->x < -0xa000 || v->x > 0x10a000;
    return r;
}
static inline BOOL Sky_TestBit(u32 v, u32 n) {
    BOOL r = ((v >> n) & 1) ? TRUE : FALSE;
    return r;
}
static inline u32 Firework_VariantOf(Unk_020be820_E v) { return (v - 0x1d) & 0xf; }

}
void SkySprite::initFireworkBurst(u32 a) {
    using namespace n10;
    BOOL b = Sky_TestBit(a, 31);
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
void SkySprite::initFireworkShell(u32 a) {
    using namespace n10;
    BOOL b = Sky_TestBit(a, 31);
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
void SkySprite::updateFirework() {
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
void SkySprite::updateFireworkBurst() {
    using namespace n10;
    u32 flags = work0;
    BOOL r4 = ((flags >> 30) & 1) ? FALSE : TRUE;
    BOOL r6 = Sky_TestBit(flags, 31);
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
void SkySprite::updateFireworkShell() {
    using namespace n10;
    s32 lim;
    u32 flags = work0;
    BOOL b31 = Sky_TestBit(flags, 31);
    BOOL done = FALSE;
    if (hidden) {
        work2++;
        if ((s32)work2 > 6) {
            done = TRUE;
        }
    } else {
        lim = 0xc0000 - screenPos.z;
        s32 r = _ZN9SkySprite12riseDistanceEi(lim, work1);
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
            a = m | Firework_VariantOf((Unk_020be820_E)(c - 2));
            m |= Firework_VariantOf((Unk_020be820_E)(c - 1)) | 0x40000000;
        }
        VecFx32 v;
        SkyVec_Set(&v, work3, screenPos.z - 0x2000, 0);
        _ZN10SkySprites5spawnEiiP7VecFx32i(gSkySprites, 9, 0x3c, &v, a);
        _ZN10SkySprites5spawnEiiP7VecFx32i(gSkySprites, 9, 0x3c, &v, m);
    }
}
namespace n10 {

}
void SkySprite::endFirework() {
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
void SkySprite::initRainbow() {
    using namespace n10;
    screenPos.x = 0xb0000;
    screenPos.y = 0x67000;
    animSeq = 0x15;
    priority = 3;
}
namespace n10 {

}
void SkySprite::updateRainbow() {
    using namespace n10;
}
namespace n10 {

}
void SkySprite::endRainbow() {
    using namespace n10;
    release();
}
namespace n10 {

}
void SkySprite::initShot(u32 a) {
    using namespace n10;
    SkyShotRequest *rec = _ZN10SkySprites14getShotRequestEi(gSkySprites, a & 0xf);
    s32 id;
    animSeq = 0x2d;
    priority = 2;
    work0 = 0x18;
    id = rec->playerSlot;
    work1 = id;
    VecFx32 *pos = &rec->pos;
    const VecFx32 &vt = Sky_ProjectToScreenX(pos);
    VecFx32 *p34 = &screenPos;
    p34->x = vt.x;
    p34->y = 0xc5000;
    p34->z = 0;
    VecFx32 *p40 = &screenVel;
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
void SkySprite::updateShot() {
    using namespace n10;
    u32 flags = work2;
    work0--;
    if ((s32)work0 < 0) {
        VecFx32 *pos = &screenPos;
        VecFx32 *vel = &screenVel;
        if ((s32)work0 == -2) {
            u32 t = (flags >> 4) & 0xf;
            if (t == 1) {
                vel->x = 0x2800;
            } else if (t == 2) {
                vel->x = -0x2800;
            }
        }
        VEC_Add(pos, vel, pos);
        if (SkySprite_IsOffScreen(pos) || hit) {
            state = 3;
        }
    }
    if (hidden && !((flags >> 31) & 1) && screenPos.y < 0xc0000) {
        hidden = 0;
    }
}
namespace n10 {

}
void SkySprite::endShot() {
    using namespace n10;
    release();
}
namespace n10 {

}
void SkySprite::initBird(u32 a) {
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
void SkySprite::updateBird() {
    using namespace n10;
    if (work1 > 0) {
        work1--;
        if (work1 <= 0 && (work0 & 3) == 0) {
            _ZN11SkySePlayer16requestSustainedEiiP7VecFx32(data_021f44ac, 7, 0x805, gVec3Zero);
        }
    } else {
        VecFx32 *pos = &screenPos;
        VecFx32 *vel = &screenVel;
        vel->x += work3;
        vel->y += work4;
        Vec_Scale(vel, 0xfc3);
        VEC_Add(pos, vel, pos);
        if (SkySprite_IsOffScreen(pos)) {
            state = 3;
        }
    }
}
namespace n10 {

}
void SkySprite::endBird() {
    using namespace n10;
    release();
}
namespace n10 {

}
SkySprite *SkySprite::construct() {
    using namespace n10;
    _ZN10SpriteAnimC1Ev(&anim);
    clear();
    resetFree();
    return this;
}
namespace n10 {

}
void SkySprite::clear() {
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
void SkySprite::resetFree() {
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
void SkySprite::initByKind(u32 a) {
    using namespace n10;
    static void (SkySprite::*tbl[13])(u32) = {
        *(void (SkySprite::**)(u32))n00::data_020e4a4c, *(void (SkySprite::**)(u32))n00::data_020e481c, *(void (SkySprite::**)(u32))n00::data_020e4714,
        *(void (SkySprite::**)(u32))n00::data_020e4a34, *(void (SkySprite::**)(u32))n00::data_020e48b4, *(void (SkySprite::**)(u32))n00::data_020e471c,
        *(void (SkySprite::**)(u32))n00::data_020e48fc, *(void (SkySprite::**)(u32))n00::data_020e46f4, *(void (SkySprite::**)(u32))n00::data_020e480c,
        *(void (SkySprite::**)(u32))n00::data_020e4a04, *(void (SkySprite::**)(u32))n00::data_020e468c,
        *(void (SkySprite::**)(u32))n00::data_020e47ac, *(void (SkySprite::**)(u32))n00::data_020e473c,
    };
    void (SkySprite::*fn)(u32) = tbl[kind];
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
void *data_020e49dc[2] = {(void *)_ZN9SkySprite10updateBirdEv, 0};
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
void *data_020e47e4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct0AEv, 0};
void *data_020e4834[2] = {(void *)_ZN9SkySprite10updatePeteEv, 0};
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
void *data_020e4904[2] = {(void *)_ZN9SkySprite7endBirdEv, 0};
WeatherManager gWeatherManager;
u32 data_020e5488[18] = {0x130002, 0x30f7, 0x31f500e5, 0x30f6, 0xc0007, 0x30f6, 0x200600e4, 0x30f6, 0x1e600fa,
    0x30b6, 0x101300f5, 0x30b6, 0x201300ea, 0x3097, 0x31eb00eb, 0x30d5, 0x11f20008, 0xffff3097};
u32 data_020e4a5c[2] = {0x400080f0, 0xffff0094};
u32 data_020e4cc4[4] = {0x91f880e0, 0x9a, 0x91f88000, 0xffff011a};
u32 data_020e4cd4[4] = {0x51fc80e0, 0x99, 0x51fc8000, 0xffff0119};
void *data_020e4ac4[3] = {(void *)data_020e46dc, (void *)0x1, 0};
void *data_020e480c[2] = {(void *)_ZN9SkySprite13initLightningEv, 0};
void *data_020e4a94[3] = {(void *)data_020e47c4, (void *)0x1, 0};
char data_020e4f88[30] = "/sky/d_2d_b_cld_f1_bg_ncl.bin";
u32 data_020e4cf4[4] = {0x61fc8000, 0x99, 0x61fc80e0, 0xffff0119};
U234_Record sSkyProcProfile = {(void *)SkyProc_Create, 0x89, 0x8f};
char data_020e4e10[27] = "/sky/d_2d_b_cld_bg_ncg.bin";
void *data_020e490c[2] = {(void *)_ZN9SkySprite7endShotEv, 0};
}
}
namespace n10 {
}
void SkySprite::updateByKind() {
    using namespace n10;
    static void (SkySprite::*tbl[13])() = {
        *(void (SkySprite::**)())n00::data_020e4954, *(void (SkySprite::**)())n00::data_020e4744, *(void (SkySprite::**)())n00::data_020e48ac,
        *(void (SkySprite::**)())n00::data_020e496c, *(void (SkySprite::**)())n00::data_020e49bc, *(void (SkySprite::**)())n00::data_020e49c4,
        *(void (SkySprite::**)())n00::data_020e4974, *(void (SkySprite::**)())n00::data_020e4834, *(void (SkySprite::**)())n00::data_020e46bc,
        *(void (SkySprite::**)())n00::data_020e4a2c, *(void (SkySprite::**)())n00::data_020e479c, *(void (SkySprite::**)())n00::data_020e47a4,
        *(void (SkySprite::**)())n00::data_020e49dc,
    };
    void (SkySprite::*fn)() = tbl[kind];
    if (fn) {
        (this->*fn)();
    }
}
namespace n10 {

#undef data_021f44ac
}

// ======== unk_020bd868.cpp ========
namespace n09 {
extern "C" {
extern SkyObjGfxDef sSkyObjGfxTable[];
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
s32 _ZN13SkyObjPalette14applyOverridesEi(SkyObjPalette*, s32);
}
extern "C" {
void _ZN13SkyObjPalette12setLoadedRowEii(SkyObjPalette*, s32, s32);
}
extern "C" {
void _ZN13SkyObjPalette10invalidateEi(SkyObjPalette*, s32);
}
extern "C" {
void _ZN13SkyObjPalette13invalidateForEi(void*, ...);
}
extern "C" {
void MI_CpuFill8(void*, u32, u32);
}
extern "C" {
extern SkyObjCharLayout sSkyObjCharLayouts[];
}
extern "C" {
void GX_LoadOBJ(u32, u32, u32);
}
extern "C" {
void GXS_LoadOBJ(u32, u32, u32);
}
extern "C" {
static inline void SkyObjGfx_LoadTileRow(u32 d, u32 a, u32 n, u32 k, BOOL flag) {
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
void _ZN11SkySePlayer16requestSustainedEiiP7VecFx32(void*, s32, s32, void*);
}
extern "C" {
void _ZN11SkySePlayer7requestEiiP7VecFx32(void*, s32, s32, void*);
}
extern "C" {
void SkySprite_GetPos(SkySprite*, VecFx32*);
}
extern "C" {
s32 SkySprite_MakeSoundPos(VecFx32*, s32, s32, s32);
}
extern "C" {
void SkySprite_GetSoundPos(SkySprite*, VecFx32*);
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
extern SkyLookAtVec gCameraLookAt;
}
extern "C" {
extern s16 data_02135f44[][2];
}
extern "C" {
s32 Camera_GetCloseUpFactor();
}
extern "C" {
void SkySprite_ProjectWorldPos(SkySprite*, VecFx32*, s32);
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; SkyObjGfxSlot v[1]; } gSkySprites; } }
#define data_021f3010 n09::L_021f3010::gSkySprites.v
extern "C" {
extern SkySpriteAnimDef sSkySpriteAnimSeqs[];
}
extern "C" {
void _ZN9SkySprite9resetFreeEv(SkySprite*);
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

extern "C" void SkyObjPalette_Load(SkyObjPalette* p, u8* base, u32 idx);
extern "C" SkyObjPalette* SkyObjPalette_Init(SkyObjPalette* p);
extern "C" void SkyObjGfxSlot_Release(SkyObjGfxSlot* p);
extern "C" void SkyObjGfxSlot_RefreshPalette(SkyObjGfxSlot* p, s32 a);
extern "C" void SkyObjGfxSlot_SetGfx(SkyObjGfxSlot* p, s32 v);
extern "C" void SkyObjGfxSlot_Acquire(SkyObjGfxSlot* p, s32 v, void* x);
extern "C" void SkyObjGfxSlot_Upload(SkyObjGfxSlot* p, u8* base);
extern "C" void SkyObjGfxSlot_Init(SkyObjGfxSlot* p);
extern "C" void SkyObjGfxLoader_FlushChars(u8* p);
extern "C" BOOL SkyObjGfxLoader_LoadPalettes(u8* p);
extern "C" BOOL SkyObjGfxLoader_LoadChars(u8* p, s32 idx);
extern "C" void SkyObjGfxLoader_Init(u8* p);
extern "C" void SkySprite_RequestSeSustainedOn(SkySprite* p, s32 a, s32 b);
extern "C" void SkySprite_RequestSe(SkySprite* p, s32 a);
extern "C" void SkySprite_RequestSeSustained(SkySprite* p, s32 a);
extern "C" void SkySprite_GetPos(SkySprite* p, VecFx32* out);
extern "C" void SkySprite_GetSoundPos(SkySprite* p, VecFx32* out);
extern "C" s32 SkySprite_MakeSoundPos(VecFx32* out, s32 a, s32 b, s32 c);
extern "C" BOOL SkySprite_CheckShotHit(SkySprite* p, s32 a, s32 b, s32 c);
extern "C" void SkySprite_ProjectCrossing(SkySprite* p, s32 a);
extern "C" void SkySprite_ProjectWorldPos(SkySprite* p, VecFx32* q, s32 a);
extern "C" BOOL SkySprite_AdvanceCrossing(SkySprite* p, s32 a, s32 b, s32 c);
extern "C" void SkySprite_BeginCrossing(SkySprite* p, u8 a, s32 b);
extern "C" void SkySprite_Release(SkySprite* p);
extern "C" void SkySprite_StartAnim(SkySprite* p);

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
void *data_020e4964[2] = {(void *)_ZN9SkySprite11endRainDropEv, 0};
void *data_020e4b30[3] = {(void *)data_020e498c, (void *)0x1, 0};
u32 data_020e4a54[2] = {0x81f880f0, 0xffff4118};
u32 data_020e4a3c[2] = {0x1fc80f8, 0xffff0094};
u32 data_020e4984[2] = {0x81f880f0, 0xffff4098};
const u32 sSkyStarBgLayer[1] = {0x4};
u32 data_020e49ec[2] = {0x81e003e0, 0xffff9098};
u32 data_020e476c[2] = {0x81f880f0, 0xffff4098};
void *data_020e4754[2] = {(void *)_ZN9SkySprite11endFireworkEv, 0};
void *data_020e4b3c[3] = {(void *)data_020e482c, (void *)0x1, 0};
void *data_020e53b0[18] = {(void *)data_020e466c, (void *)0x2, 0, (void *)data_020e495c, (void *)0x2, 0,
    (void *)data_020e4764, (void *)0x2, 0, (void *)data_020e48dc, (void *)0x2, 0, (void *)data_020e499c,
    (void *)0x2, 0, (void *)data_020e469c, (void *)0x2, 0};
void *data_020e4a2c[2] = {(void *)_ZN9SkySprite14updateFireworkEv, 0};
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
void *data_020e4954[2] = {(void *)_ZN9SkySprite14updateRainDropEv, 0};
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
void SkySprite::endByKind() {
    using namespace n09;
    static void (SkySprite::*tbl[13])() = {
        *(void (SkySprite::**)())n00::data_020e4964,
        *(void (SkySprite::**)())n00::data_020e49e4,
        *(void (SkySprite::**)())n00::data_020e4724,
        *(void (SkySprite::**)())n00::data_020e494c,
        *(void (SkySprite::**)())n00::data_020e4944,
        *(void (SkySprite::**)())n00::data_020e493c,
        *(void (SkySprite::**)())n00::data_020e4934,
        *(void (SkySprite::**)())n00::data_020e467c,
        *(void (SkySprite::**)())n00::data_020e4924,
        *(void (SkySprite::**)())n00::data_020e4754,
        *(void (SkySprite::**)())n00::data_020e4914,
        *(void (SkySprite::**)())n00::data_020e490c,
        *(void (SkySprite::**)())n00::data_020e4904,
    };
    void (SkySprite::*fn)() = tbl[kind];
    if (fn) (this->*fn)();
}
namespace n09 {

extern "C" void SkySprite_StartAnim(SkySprite* p) {
    Unk_020be0bc_E i = (Unk_020be0bc_E)p->animSeq;
    SkySpriteAnimDef* row = &sSkySpriteAnimSeqs[i];
    _ZN10SpriteAnim6setSeqEP13SpriteAnimSeq(&p->anim, row);
    _ZN10SpriteAnim11setPlayOnceEi(&p->anim, row->playOnce);
    _ZN10SpriteAnim7restartEv(&p->anim);
}

extern "C" void SkySprite_Release(SkySprite* p) {
    s32 i = p->gfxSlot;
    if (i != 6) {
        SkyObjGfxSlot_Release(&data_021f3010[i]);
    }
    _ZN9SkySprite9resetFreeEv(p);
}

extern "C" void SkySprite_BeginCrossing(SkySprite* p, u8 a, s32 b) {
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

extern "C" BOOL SkySprite_AdvanceCrossing(SkySprite* p, s32 a, s32 b, s32 c) {
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

extern "C" void SkySprite_ProjectWorldPos(SkySprite* p, VecFx32* q, s32 a) {
    SkyLookAtVec loc;
    loc.x = gCameraLookAt.x;
    loc.y = gCameraLookAt.y;
    loc.z = gCameraLookAt.z;
    s32 inv, idx, z, y, t;
    s32 sx, sy, sc, fx, k, dz;
    dz = loc.z - q->z;
    fx = FX_Div(q->x - loc.x, data_020c8cbc);
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
    p->screenPos.x = sx;
    p->screenPos.y = sy - idx;
    p->screenPos.z = 0;
    sc = func_01ffcb0c(-0xc00, k) + 0x1000;
    if (sc < 0x400) sc = 0x400;
    else if (sc > 0x1000) sc = 0x1000;
    z = FX_Inv(sc);
    p->scaleX = z;
    p->scaleY = z;
    idx = (u16)p->wavePhase >> 4;
    z = func_01ffcb0c(data_02135f44[idx][0], a);
    z = func_01ffcb0c(z, sc);
    p->screenPos.y += z;
}

extern "C" void SkySprite_ProjectCrossing(SkySprite* p, s32 a) {
    VecFx32 t;
    t.x = p->trackX;
    t.y = 0;
    t.z = data_020c8cb8;
    SkySprite_ProjectWorldPos(p, &t, a);
}

extern "C" BOOL SkySprite_CheckShotHit(SkySprite* p, s32 a, s32 b, s32 c) {
    s32 d;
    s32 w = func_01ffcb0c(a, p->scaleX);
    s32 h = func_01ffcb0c(b, p->scaleY);
    s32 dy = func_01ffcb0c(c, p->scaleY);
    s32 hw = _s32_div_f(w, 2);
    s32 hh = _s32_div_f(h, 2);
    s32 y = p->screenPos.y + dy;
    s32 x = p->screenPos.x;
    s32 left = x - hw;
    s32 right = x + hw;
    s32 top = y - hh;
    s32 bottom = y + hh;
    SkySprite* o = &n00::gSkySprites.sprites[33];
    BOOL found = FALSE;
    for (; o < &n00::gSkySprites.sprites[45]; o++) {
        if (o->state == 2 && o->localShot != 0) {
            d = o->screenVel.y;
            if (d < 0) d = -d;
            s32 xl = o->screenPos.x - 0x1000;
            s32 yt = o->screenPos.y - 0x1000;
            s32 yb = d + (o->screenPos.y + 0x1000);
            s32 xr = o->screenPos.x + 0x1000;
            if (left <= xr && right >= xl && top <= yb && bottom >= yt) {
                found = TRUE;
                o->hit = 1;
            }
        }
    }
    return found;
}

extern "C" s32 SkySprite_MakeSoundPos(VecFx32* out, s32 a, s32 b, s32 c) {
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

extern "C" void SkySprite_GetSoundPos(SkySprite* p, VecFx32* out) {
    SkySprite_MakeSoundPos(out, p->screenPos.x, p->screenPos.y, p->scaleX);
}

extern "C" void SkySprite_GetPos(SkySprite* p, VecFx32* out) {
    out->x = p->screenPos.x;
    out->y = p->screenPos.y;
    out->z = 0;
}

extern "C" void SkySprite_RequestSeSustained(SkySprite* p, s32 a) {
    SkySoundPosBuf out;
    SkySprite_GetSoundPos(p, (VecFx32*)&out);
    _ZN11SkySePlayer16requestSustainedEiiP7VecFx32(data_021f44ac, 0, a, &out);
}

extern "C" void SkySprite_RequestSe(SkySprite* p, s32 a) {
    SkySoundPosBuf out;
    SkySprite_GetSoundPos(p, (VecFx32*)&out);
    _ZN11SkySePlayer7requestEiiP7VecFx32(data_021f44ac, 0, a, &out);
}

extern "C" void SkySprite_RequestSeSustainedOn(SkySprite* p, s32 a, s32 b) {
    VecFx32 out;
    SkySprite_GetPos(p, &out);
    _ZN11SkySePlayer16requestSustainedEiiP7VecFx32(data_021f44ac, a, b, &out);
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
    SkyObjGfxDef* row = &sSkyObjGfxTable[idx];
    SkyObjCharLayout* t;
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
void *data_020e4924[2] = {(void *)_ZN9SkySprite12endLightningEv, 0};
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

extern "C" void SkyObjGfxSlot_Init(SkyObjGfxSlot* p) {
    p->gfxId = 0x34;
    p->refCount = 0;
    p->loaded = 0;
    p->dirty = 0;
}

extern "C" void SkyObjGfxSlot_Upload(SkyObjGfxSlot* p, u8* base) {
    SkyObjCharLayout* row;
    u32 dst;
    u32 o, k;
    BOOL flag;
    if (gWeatherManager == 0) flag = TRUE; else flag = FALSE;
    SkyObjGfxLoader_FlushChars(base);
    SkyObjGfxDef* ent = &sSkyObjGfxTable[p->gfxId];
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
            SkyObjGfx_LoadTileRow(d, a, n, k, flag);
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
            SkyObjGfx_LoadTileRow(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
}

extern "C" void SkyObjGfxSlot_Acquire(SkyObjGfxSlot* p, s32 v, void* x) {
    p->refCount++;
    if (v != p->gfxId) {
        p->loaded = 0;
        _ZN13SkyObjPalette13invalidateForEi(x);
        p->gfxId = v;
    }
}

extern "C" void SkyObjGfxSlot_SetGfx(SkyObjGfxSlot* p, s32 v) {
    if (v != p->gfxId) {
        p->loaded = 0;
        p->dirty = 1;
        p->gfxId = v;
    }
}

extern "C" void SkyObjGfxSlot_RefreshPalette(SkyObjGfxSlot* p, s32 a) {
    p->dirty = 1;
    _ZN13SkyObjPalette13invalidateForEi(data_021f4398, a);
}

extern "C" void SkyObjGfxSlot_Release(SkyObjGfxSlot* p) {
    s32 t = p->refCount - 1;
    if (t <= 0) t = 0;
    p->refCount = t;
}

extern "C" SkyObjPalette* SkyObjPalette_Init(SkyObjPalette* p) {
    volatile u16 tmp;
    u16* end;
    u16* q;
    p->balloonColor = 0;
    p->overrideMask = 0;
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

extern "C" void SkyObjPalette_Load(SkyObjPalette* p, u8* base, u32 idx) {
    SkyObjGfxDef* row = &sSkyObjGfxTable[idx];
    s32 a = row->srcPalette;
    u32 b;
    s32 res;
    if (idx - 0x1f <= 1) {
        a += p->balloonColor;
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
void SkySprite_MakeSoundPos(VecFx32* out, s32 a, s32 b, s32 c);
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
u32 _ZN10PlayerData14getSkyShotHitsEv(void* p);
}
extern "C" {
void _ZN10PlayerData14setSkyShotHitsEj(void* p, u8 v);
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
extern SkyObjGfxDef sSkyObjGfxTable[];
}
typedef void (SkyShotSequence::*SkyShotActFn)();

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
    SkyObjGfxDef* e = &sSkyObjGfxTable[idx];
    invalidate(e->objPalette);
}
namespace n08 {

}
BOOL SkyObjPalette::isLoaded(s32 idx) {
    using namespace n08;
    SkyObjGfxDef* e = &sSkyObjGfxTable[idx];
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
void SkyObjPalette::clearOverride(s32 idx) {
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
    pos.x = p[0];
    pos.y = p[1];
    pos.z = p[2];
    golden = b;
    pending = 1;
}
namespace n08 {

}
void SkyShotRequest::clear() {
    using namespace n08;
    playerSlot = 4;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
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
void *data_020e48fc[2] = {(void *)_ZN9SkySprite7initUfoEv, 0};
u8 sSkyLineTablesReady;
void *data_020e49e4[2] = {(void *)SkySprite_EndSnowFlake, 0};
void *data_020e47dc[2] = {(void *)_ZN10SkySprites21fireworksPatternAct09Ev, 0};
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
    static SkyShotActFn tbl[10] = {
        0,
        *(SkyShotActFn *)n00::data_020e47bc,
        *(SkyShotActFn *)n00::data_020e4784,
        *(SkyShotActFn *)n00::data_020e46c4,
        *(SkyShotActFn *)n00::data_020e4894,
        *(SkyShotActFn *)n00::data_020e49ac,
        *(SkyShotActFn *)n00::data_020e472c,
        *(SkyShotActFn *)n00::data_020e4664,
        *(SkyShotActFn *)n00::data_020e464c,
        *(SkyShotActFn *)n00::data_020e48a4,
    };
    SkyShotActFn f = tbl[state];
    if (f) {
        (this->*f)();
    }
}
namespace n08 {

extern "C" void SkyShot_AddHit() {
    void* p = PlayerData_GetCurrent();
    u32 n = _ZN10PlayerData14getSkyShotHitsEv(p);
    if (n < 0x10) {
        _ZN10PlayerData14setSkyShotHitsEj(p, n + 1);
    }
}

extern "C" BOOL SkyShot_HasMaxHits() {
    return _ZN10PlayerData14getSkyShotHitsEv(PlayerData_GetCurrent()) >= 0x10;
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
        VecFx32 v;
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
        VecFx32 v;
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
        VecFx32 v;
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
    for (SkySndChannel* e = channels; e < (SkySndChannel*)positions; e++) {
        e->callReset();
    }
    active = 1;
}
namespace n08 {

}
void SkySePlayer::releaseAll() {
    using namespace n08;
    active = 0;
    for (SkySndChannel* e = &channels[7]; e >= channels; e--) {
        e->callRelease();
    }
}
namespace n08 {

}
void SkySePlayer::requestSustained(s32 idx, s32 a, VecFx32* p) {
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
void SkySePlayer::request(s32 idx, s32 a, VecFx32* p) {
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
        SkySndChannel* a = channels;
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
    fireworksSlotTimers[0] = 0;
    fireworksSlotTimers[1] = 0;
    fireworksSlotTimers[2] = 0;
    fireworksSlotTimers[3] = 0;
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
void _ZN9SkySprite9endByKindEv(SkySprite *s);
}
extern "C" {
void _ZN9SkySprite5clearEv(SkySprite *s);
}
extern "C" {
void _ZN9SkySprite10initByKindEj(SkySprite *s, s32 a);
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
void _ZN14SkyShotRequest3setEiPih(SkyShotRequest *a, s32 b, s32 c, s32 d);
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
u32 _ZN10PlayerData8testFlagEj(void *p, u32 n);
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
void _ZN10PlayerData9clearFlagEj(void *p, u32 n);
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
void SkySprites::reloadAllGfx() {
    using namespace n07;
    SkyObjGfxSlot *p, *end = &gfxSlots[5];
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (id != 0x34) {
            s32 r;
            s32 flag = p->loaded;
            r = _ZN13SkyObjPalette8isLoadedEi(&palette, id);
            if (flag == 0) {
                SkyObjGfxLoader_LoadChars(&loader, id);
                SkyObjGfxSlot_Upload(p, &loader);
                p->loaded = 1;
                p->dirty = 0;
            }
            if (r == 0) {
                SkyObjPalette_Load(&palette, &loader, id);
            }
        }
    }
}
namespace n07 {

}
void SkySprites::loadDirtyGfx() {
    using namespace n07;
    SkyObjGfxSlot *end = &gfxSlots[5], *p;
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (p->dirty != 0) {
            if (id == 0x34) {
                p->dirty = 0;
            } else if (p->loaded == 0) {
                SkyObjGfxLoader_LoadChars(&loader, id);
            }
        }
    }
}
namespace n07 {

}
void SkySprites::uploadDirtyGfx() {
    using namespace n07;
    SkyObjGfxSlot *p, *end = &gfxSlots[5];
    for (p = &gfxSlots[0]; p < end; p++) {
        s32 id = p->gfxId;
        if (p->dirty != 0) {
            if (id != 0x34) {
                s32 r;
                s32 flag = p->loaded;
                r = _ZN13SkyObjPalette8isLoadedEi(&palette, id);
                if (flag == 0) {
                    SkyObjGfxSlot_Upload(p, &loader);
                    p->loaded = 1;
                }
                if (r == 0) {
                    SkyObjPalette_Load(&palette, &loader, id);
                }
            }
            p->dirty = 0;
        }
    }
}
namespace n07 {

}
s32 SkySprites::pickGfxSlot(s32 t) {
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
void SkySprites::releaseConflictingSlots(s32 k) {
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
s32 SkySprites::findFreeIndex(s32 kind, s32 idx) {
    using namespace n07;
    s32 r = 0x3c;
    if (idx != 0x3c) {
        if (sprites[idx].kind == 0xd) r = idx;
    } else if (kind == 9) {
        SkySprite *p = &sprites[0x2e];
        s32 i;
        for (i = 0x2e; i <= 0x3a; i++, p++) {
            if (p->kind == 0xd) {
                r = i;
                break;
            }
        }
    } else if (spriteCount < 0x1e) {
        s32 i;
        SkySprite *p = &sprites[0];
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
s32 SkySprites::findKind(s32 id) {
    using namespace n07;
    s32 r = 0x3c;
    s32 i;
    SkySprite *p = sprites;
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
void SkySprites::start() {
    using namespace n07;
    checkTodayEvents();
    spawnInitialPrecip();
    updateMoon();
    updateRainbow();
    balloonChance = 0;
}
namespace n07 {

}
void SkySprites::stop() {
    using namespace n07;
    killAll();
}
namespace n07 {

}
void SkySprites::checkTodayEvents() {
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
void SkySprites::onDayChange(BOOL a) {
    using namespace n07;
    if (a) {
        _ZN8SaveData9clearFlagEj(gSaveData, 9);
        checkTodayEvents();
        sendWishLetters();
    }
}
namespace n07 {

}
void SkySprites::onSlingshotFired(s32 i) {
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
        _ZN15SkyShotSequence9startShotEi(&shotSeq, i);
    } else {
        _ZN15SkyShotSequence8endWatchEi(&shotSeq, i);
    }
}
namespace n07 {

}
SkyShotRequest *SkySprites::getShotRequest(s32 i) {
    using namespace n07;
    return &shotRequests[i];
}
namespace n07 {

}
void SkySprites::sendWishLetters() {
    using namespace n07;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = PlayerData_GetResident(gSavePlayers, i);
        if (o != NULL && _ZN10PlayerData8testFlagEj(o, 0x32) != 0) {
            Letter ctx;
            StarWishLetterVars l;
            l.msgVariant = Random_GlobalBelow(3);
            Letter_ComposeFromMail(&ctx, &l, data_020e6794, data_020e4634, data_020e4630, _ZN10PlayerData11getPlayerIdEv(o));
            ItemPickSpec q(0, 4);
            ItemPick_One(&l.present, q, 0, 0, 1, 1, 0);
            _ZN10LetterView10setPresentEtj(&ctx, l.present, 1);
            if (LetterDelivery_PutInAddresseeMailbox(&ctx) != 0) {
                _ZN10PlayerData9clearFlagEj(o, 0x32);
            }
        }
    }
}
namespace n07 {

}
void SkySprites::initClock() {
    using namespace n07;
    Clock_GetMinuteHour(&minuteHour);
    second = Clock_GetSecond();
    prevMinuteHour = minuteHour;
    prevSecond = second;
}
namespace n07 {

}
void SkySprites::tickClock() {
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
s32 SkySprites::getGfxIdForKind(s32 kind, s32 arg) {
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
SkySprite *SkySprites::spawn(s32 kind, s32 idx, VecFx32 *vec, s32 arg) {
    using namespace n07;
    s32 t = getGfxIdForKind(kind, arg);
    SkySprite *slot = NULL;
    s32 grp = pickGfxSlot(t);
    if (grp != 5) {
        s32 n = findFreeIndex(kind, idx);
        if (n != 0x3c) {
            if (grp != 6) {
                SkyObjGfxSlot_Acquire(&gfxSlots[grp], t, &palette);
                releaseConflictingSlots(grp);
            }
            slot = &sprites[n];
            _ZN9SkySprite5clearEv(slot);
            sprites[n].kind = kind;
            slot->state = 1;
            slot->gfxSlot = grp;
            slot->gfxId = t;
            slot->palette = data_020d16f5[t * 16];
            if (vec != NULL) {
                slot->screenPos.x = vec->x;
                slot->screenPos.y = vec->y;
                slot->screenPos.z = vec->z;
            }
            _ZN9SkySprite10initByKindEj(slot, arg);
            spriteCount++;
        }
    }
    return slot;
}
namespace n07 {

}
void SkySprites::killKind(s32 id) {
    using namespace n07;
    SkySprite *p, *end = &sprites[0x3c];
    for (p = &sprites[0]; p < end; p++) {
        if (id == p->kind) {
            _ZN9SkySprite9endByKindEv(p);
            spriteCount--;
        }
    }
}
namespace n07 {

}
void SkySprites::killAll() {
    using namespace n07;
    SkySprite *p, *end = &sprites[0x3c];
    for (p = &sprites[0]; p < end; p++) {
        if (p->kind != 0xd) {
            _ZN9SkySprite9endByKindEv(p);
            spriteCount--;
        }
    }
}
namespace n07 {

}
void SkySprites::spawnInitialPrecip() {
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
void SkySprites::updateLightning() {
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
void SkySprites::updateThunderFlash() {
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
typedef void (SkySprites::*Unk_020bbeb8_Fn)();
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
extern SkySpawnRate sRainSpawnRates[];
}
extern "C" {
extern SkySpawnRate sSnowSpawnRates[];
}
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
BOOL _ZN10PlayerData8testFlagEj(void *, s32);
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
void SkySprites::updateRain() {
    using namespace n06;
    s32 kind = 0;
    s32 a = n00::gWeatherManager.level;
    s32 b = n00::gWeatherManager.targetLevel;
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
        SkySpawnRate *t = &sRainSpawnRates[kind - 1];
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
    Math_StepS32Alt(&rainStrength, b == 4 ? 0x1000 : 0x800, 2);
}
namespace n06 {

}
void SkySprites::updateSnow() {
    using namespace n06;
    s32 kind = 0;
    s32 a = n00::gWeatherManager.level;
    s32 b = n00::gWeatherManager.targetLevel;
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
        SkySpawnRate *t = &sSnowSpawnRates[kind - 1];
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
void SkySprites::updateShootingStar() {
    using namespace n06;
    u8 v = time.hour;
    BOOL a = TRUE;
    if (v < 0x13 && v >= 4) {
        a = FALSE;
    }
    s32 x = n00::gWeatherManager.level;
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
void SkySprites::updateMoon() {
    using namespace n06;
    u8 v = time.hour;
    BOOL b;
    if (sprites[31].kind == 4) {
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
void *data_020e46f4[2] = {(void *)_ZN9SkySprite8initPeteEv, 0};
void *data_020e46bc[2] = {(void *)_ZN9SkySprite15updateLightningEv, 0};
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
void *data_020e467c[2] = {(void *)_ZN9SkySprite7endPeteEv, 0};
const u32 data_020d1118[12] = {0x72d16eb1, 0x76f472d2, 0x7ef57af5, 0x7f567f14, 0x7fb97fb9, 0x7fb97fb9,
    0x7fb97fb9, 0x7fb97fb9, 0x7b397fb9, 0x76f676b6, 0x76f57716, 0x6eb272f4};
u32 data_020e4bc4[4] = {0x1400e7, 0x30f6, 0x1e70000, 0xffff30b7};
const u32 data_020d0ef8[6] = {0xb0b0b0b, 0x13000b0b, 0x15141413, 0x16161615, 0xb001315, 0xb0b0b0b};
void *data_020e4a04[2] = {(void *)_ZN9SkySprite12initFireworkEj, 0};
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
void *data_020e46b4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct07Ev, 0};
char data_020e5048[31] = "/sky/d_2d_b_cld_r_b_bg_nsc.bin";
void *data_020e47a4[2] = {(void *)_ZN9SkySprite10updateShotEv, 0};
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
void *data_020e479c[2] = {(void *)_ZN9SkySprite13updateRainbowEv, 0};
u32 data_020e4c44[4] = {0xb1f88000, 0x9e, 0xb1f880e0, 0xffff011e};
const u32 sRainSpawnRates[8] = {0x2d, 0x69, 0x1e, 0x5a, 0xf, 0x4b, 0x1, 0x3c};
u32 data_020e47fc[2] = {0x91f000f0, 0xffff211c};
void *data_020e51c0[9] = {(void *)data_020e4ce4, (void *)0x2, 0, (void *)data_020e4cf4, (void *)0x1, 0,
    (void *)data_020e4d04, (void *)0x1, 0};
u32 sSkyBlendLineCache[1] = {0xffffffff};
u32 data_020e4c74[4] = {0x61fc8000, 0x9d, 0x61fc80e0, 0xffff011d};
u32 data_020e4c84[4] = {0x61fc8000, 0x9c, 0x61fc80e0, 0xffff011c};
void *data_020e4a4c[2] = {(void *)_ZN9SkySprite12initRainDropEi, 0};
void *data_020e4af4[3] = {(void *)data_020e485c, (void *)0x4, 0};
void *data_020e4b00[3] = {(void *)data_020e487c, (void *)0x4, 0};
void *data_020e4ddc[6] = {(void *)data_020e4a3c, (void *)0x2, 0, (void *)data_020e483c, (void *)0x1, 0};
u32 data_020e5a34[48] = {0x800004d0, 0x1114, 0x802084d0, 0x1118, 0x3044d8, 0x113a, 0x403004e0, 0x115a,
    0x802004f0, 0x1098, 0x1804f0, 0x109f, 0x80400410, 0x111c, 0x380410, 0x111b, 0x80404400, 0x10dc, 0x404004f0,
    0x109c, 0x4004e8, 0x10bf, 0x91e004d0, 0x1114, 0x91d084d0, 0x1118, 0x11c044d8, 0x113a, 0x51c004e0, 0x115a,
    0x91c004f0, 0x1098, 0x11e004f0, 0x109f, 0x91a00410, 0x111c, 0x11c00410, 0x111b, 0x91a04400, 0x10dc,
    0x51b004f0, 0x109c, 0x11b804e8, 0x10bf, 0x5004f8, 0x10be, 0x11a804f8, 0xffff10be};
SkyGradient sSkyGradient;
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
void *data_020e4794[2] = {(void *)_ZN10SkySprites21fireworksPatternAct02Ev, 0};
void *data_020e51e4[9] = {(void *)data_020e4b94, (void *)0x2, 0, (void *)data_020e4d14, (void *)0x1, 0,
    (void *)data_020e4d24, (void *)0x1, 0};
char data_020e50a8[31] = "/sky/d_2d_b_cld_c_a_bg_nsc.bin";
SkySprites gSkySprites;
void *data_020e4974[2] = {(void *)_ZN9SkySprite9updateUfoEv, 0};
void *data_020e4994[2] = {(void *)SkySprites_FireworksPatternAct0F, 0};
u32 data_020e499c[2] = {0x91f000f0, 0xffff2118};
void *data_020e49b4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct06Ev, 0};
void *data_020e4b48[3] = {(void *)data_020e4734, (void *)0x4, 0};
void *const sSkyObjCharFiles[3] = {(void *)data_020e4dac, (void *)data_020e4df4, 0};
u32 data_020e477c[2] = {0x81f000f0, 0xffff311c};
void *data_020e46e4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct01Ev, 0};
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
void *data_020e46a4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct08Ev, 0};
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
void *data_020e48e4[2] = {(void *)_ZN10SkySprites21fireworksPatternAct04Ev, 0};
char data_020e4f08[30] = "/sky/d_2d_b_cld_r1_bg_nsc.bin";
u32 data_020e4884[2] = {0x81f000f0, 0xffff2098};
void *data_020e47bc[2] = {(void *)_ZN15SkyShotSequence13actShotFlightEv, 0};
void *data_020e4a44[2] = {(void *)_ZN10SkySprites21fireworksPatternAct0BEv, 0};
void *data_020e46c4[2] = {(void *)_ZN15SkyShotSequence14actBalloonDropEv, 0};
u32 sSkyHBlankTask[7];
void *data_020e468c[2] = {(void *)_ZN9SkySprite11initRainbowEv, 0};
void *data_020e473c[2] = {(void *)_ZN9SkySprite8initBirdEj, 0};
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
void *data_020e47ac[2] = {(void *)_ZN9SkySprite8initShotEj, 0};
void *data_020e5318[12] = {(void *)data_020e4814, (void *)0x1, 0, (void *)data_020e4684, (void *)0x1, 0,
    (void *)data_020e47f4, (void *)0x1, 0, (void *)data_020e47ec, (void *)0x1, 0};
void *data_020e4744[2] = {(void *)SkySprite_UpdateSnowFlake, 0};
void *data_020e5348[12] = {(void *)data_020e49cc, (void *)0x2, 0, (void *)data_020e4644, (void *)0x2, 0,
    (void *)data_020e4674, (void *)0x2, 0, (void *)data_020e465c, (void *)0x2, 0};
void *data_020e5914[27] = {(void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
void *data_020e4914[2] = {(void *)_ZN9SkySprite10endRainbowEv, 0};
void *data_020e4824[2] = {(void *)data_020d0ef8, (void *)data_020d0f10};
void *data_020e5764[27] = {(void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
char data_020e4fe8[31] = "/sky/d_2d_b_cld_b_b_bg_nsc.bin";
void *data_020e4934[2] = {(void *)_ZN9SkySprite6endUfoEv, 0};
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
void *data_020e46ac[2] = {(void *)_ZN10SkySprites21fireworksPatternAct05Ev, 0};
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
void *data_020e4694[2] = {(void *)_ZN10SkySprites21fireworksPatternAct03Ev, 0};
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
void SkySprites::updateFireworksShow() {
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
        u8 a = time.hour;
        u8 b = time.minute;
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
        fireworksSlotTimers[0] = 0;
        fireworksSlotTimers[1] = 0;
        fireworksSlotTimers[2] = 0;
        fireworksSlotTimers[3] = 0;
        fireworksInterval = 0;
    }
}
namespace n06 {

}
void SkySprites::updateBalloon() {
    using namespace n06;
    if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
        u8 v = time.hour;
        if (v >= 0xa && v < 0x10) {
            if (prevTime.minute != time.minute) {
                if ((u32)time.minute % 10 == 4) {
                    if (sprites[45].kind != 5) {
                        if (balloonChance == 0) {
                            balloonChance = Random_GlobalBelow(8) + 1;
                        }
                        u8 c = balloonChance;
                        if (Random_GlobalBelow(8) < c) {
                            if (!_ZN10PlayerData8testFlagEj(PlayerData_GetCurrent(), 0x30) && SkyShot_HasMaxHits() && !Random_GlobalBelow(4)) {
                                spawn(5, 0x2d, 0, 1);
                            } else {
                                spawn(5, 0x2d, 0, 0);
                                _ZN13SkyObjPalette16pickBalloonColorEv(&palette);
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
void SkySprites::updateUfo() {
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
            u8 v = time.minute;
            u32 m = (u32)v % 10;
            if (prevTime.minute != v) {
                if (m == 2 || m == 7) {
                    TownSessionState_Get();
                    TownSessionState_GetVisitorFlags();
                    if (!_ZN17VisitorSpawnFlags16isVisitorSpawnedEv()) {
                        if (sprites[45].kind != 6) {
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
void SkySprites::updatePete() {
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
                if (time.hour != prevTime.hour) {
                    if (time.hour == 9 || time.hour == 0x11) {
                        TownSessionState_Get();
                        TownSessionState_GetPeteFall();
                        if (!_ZN13PeteFallState15isVisitorActiveEv()) {
                            if (sprites[45].kind != 7) {
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
extern "C" void _ZN14SkyShotRequest5clearEv(SkyShotRequest *p);
extern "C" void _ZN15SkyShotSequence8endWatchEi(void *p, s32 v);

}
void SkySprites::updateRainbow() {
    using namespace n05;
    rainbowStrength = 0;
    u8 k = data_021ed2b0[0xa];
    if (k >= 0x13 && k <= 0x17) {
        if (*(data_020d0e04 + k - 0x13) == time.hour) {
            s32 n = time.minute;
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
    BOOL f = sprites[32].kind == 10 ? TRUE : FALSE;
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
void SkySprites::spawnShots() {
    using namespace n05;
    SkyShotRequest *p = &shotRequests[0];
    SkyShotRequest *end = p + 4;
    s32 slot = 0x21;
    s32 i = 0;
    s32 vals[3];
    vals[0] = 0;
    vals[1] = 0;
    vals[2] = 0;
    for (; p < end; p++, slot += 3, i++) {
        if (p->pending != 0) {
            u8 flag = p->golden;
            if (spawn(0xb, slot, (VecFx32 *)vals[0], i)) {
                if (flag != 0) {
                    spawn(0xb, slot + 1, (VecFx32 *)vals[1], i | 0x10);
                    spawn(0xb, slot + 2, (VecFx32 *)vals[2], i | 0x20);
                }
            } else {
                _ZN15SkyShotSequence8endWatchEi(&shotSeq, p->playerSlot);
            }
            _ZN14SkyShotRequest5clearEv(p);
        }
    }
}
namespace n05 {

}
void SkySprites::updateBirds() {
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
BOOL SkySprites::canLaunchBig(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    SkySprite *p = &sprites[46];
    SkySprite *end = &sprites[59];
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
BOOL SkySprites::canLaunchSmall(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    SkySprite *p = &sprites[46];
    SkySprite *end = &sprites[59];
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
void SkySprites::launchFirework(s32 idx, s32 a, s32 b) {
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
void SkySprites::rollLaunchInterval(s32 *out) {
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
void SkySprites::tickBigLaunch() {
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
void SkySprites::tickLowBigLaunch() {
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
void SkySprites::tickSmallLaunches() {
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
void SkySprites::tickPairLaunches() {
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
void SkySprites::tickTripleLaunches() {
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
void SkySprites::setFireworksTiming(s32 a, s32 b, s32 c) {
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
void SkySprites::selectFireworksPattern(s32 mode) {
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
void SkySprites::fireworksPatternAct01() {
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
void SkySprites::fireworksPatternAct02() {
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
void SkySprites::fireworksPatternAct03() {
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
void SkySprites::fireworksPatternAct04() {
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
void SkySprites::fireworksPatternAct05() {
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
void SkySprites::fireworksPatternAct06() {
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
void SkySprites::fireworksPatternAct07() {
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
void SkySprites::fireworksPatternAct08() {
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
void SkySprites::fireworksPatternAct09() {
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
void SkySprites::fireworksPatternAct0A() {
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
void SkySprites::fireworksPatternAct0B() {
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
extern "C" {
extern WeatherManager gWeatherManager;
}
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
void _ZN10SkySprites9tickClockEv(void*);
}
extern "C" {
void SkySprites_UpdateStub(void*);
}
extern "C" {
void SkySprites_UpdateEvents(SkySprites*);
}
extern "C" {
void _ZN10SkySprites12reloadAllGfxEv(void*);
}
extern "C" {
void SkySprite_StartAnim(void*);
}
extern "C" {
void _ZN9SkySprite12updateByKindEv(void*);
}
extern "C" {
void _ZN9SkySprite9endByKindEv(void*);
}
extern "C" {
void _ZN10SkySprites12loadDirtyGfxEv(void*);
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
s32 _ZN10SkySprites4stopEv(void*);
}
extern "C" {
s32 _ZN10SkySprites5startEv(void*);
}
extern "C" {
void _ZN11SkySePlayer8resetAllEv(void*);
}
extern "C" {
s32 _ZN10SkySprites8findKindEi(void*, s32);
}
extern "C" {
void _ZN10SkySprites5spawnEiiP7VecFx32i(void*, s32, s32, s32, s32);
}
extern "C" {
void _ZN10SkySprites18updateThunderFlashEv(void*);
}
extern "C" {
void _ZN10SkySprites19updateFireworksShowEv(void*);
}
extern "C" {
void _ZN10SkySprites10updateRainEv(void*);
}
extern "C" {
void _ZN10SkySprites10updateSnowEv(void*);
}
extern "C" {
void _ZN10SkySprites11updateBirdsEv(void*);
}
extern "C" {
void _ZN10SkySprites10updateMoonEv(void*);
}
extern "C" {
void _ZN10SkySprites13updateRainbowEv(void*);
}
extern "C" {
void _ZN10SkySprites18updateShootingStarEv(void*);
}
extern "C" {
s32 Scene_GetCurrent();
}
extern "C" {
void _ZN10SkySprites13updateBalloonEv(void*);
}
extern "C" {
void _ZN10SkySprites9updateUfoEv(void*);
}
extern "C" {
void _ZN10SkySprites10updatePeteEv(void*);
}
extern "C" {
void _ZN10SkySprites10spawnShotsEv(void*);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
extern "C" {
void _ZN10SkySprites18setFireworksTimingEiii(void*, s32, s32, s32);
}
extern "C" {
void _ZN10SkySprites22selectFireworksPatternEi(void*, s32);
}
extern "C" {
s32 _ZN10SkySprites16tickLowBigLaunchEv(void*);
}
extern "C" {
s32 _ZN10SkySprites17tickSmallLaunchesEv(void*);
}
extern "C" {
s32 _ZN10SkySprites13tickBigLaunchEv(void*);
}
extern "C" {
s32 _ZN10SkySprites18tickTripleLaunchesEv(void*);
}
extern "C" {
void SkySprites_UpdateEventsIndoor(SkySprites*);
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
s32 NNS_G3dGlbMaterialColorSpecEmi(s32, u32, s32);
}

extern "C" void RainSe_InitVolume(Unk_0213b938 *p);
extern "C" void RainSe_Release(void *p);
extern "C" void RainSe_Update(Unk_0213b938 *p);
extern "C" void RainSe_Init(Unk_0213b938 *p);
extern "C" u8 Sky_GetLightParam(s32 i);
extern "C" s16 Sky_GetLightColor(s32 i);
extern "C" void Sky_UpdateLighting(s32 a, s32 b);
extern "C" void Sky_CalcLightParams(s32 a, s32 b, u32 c, u32 d);
extern "C" void Sky_CalcFogOffset(s32 a, s32 b, u32 c, u32 d);
extern "C" void Sky_CalcLightColors(s32 a, s32 b, u32 c, u32 d);
extern "C" void SkySprites_Draw(SkySprites *obj);
extern "C" void SkySprites_UpdateIndoor(SkySprites *obj);
extern "C" void SkySprites_Update(SkySprites *obj);
extern "C" void SkySprites_UpdateStub(void *);
extern "C" void SkySprites_UpdateEventsIndoor(SkySprites *obj);
extern "C" void SkySprites_UpdateEvents(SkySprites *obj);
extern "C" void SkySprites_Stop(SkySprites *obj);
extern "C" void SkySprites_Start(SkySprites *obj);
extern "C" void SkySprites_OnStarWish(SkySprites *obj);
extern "C" void SkySprites_ApplyRainbowBlend(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct13(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct12(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct11(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct10(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct0F(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct0E(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct0D(SkySprites *obj);
extern "C" void SkySprites_FireworksPatternAct0C(SkySprites *obj);

extern "C" void SkySprites_FireworksPatternAct0C(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0x8c, 0x96, 0x258);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0x14);
    }
    _ZN10SkySprites18tickTripleLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct0D(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0x64, 0x96);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0x14);
    }
}

extern "C" void SkySprites_FireworksPatternAct0E(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0xf);
    }
    _ZN10SkySprites17tickSmallLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct0F(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0xc8, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 4);
    }
    _ZN10SkySprites13tickBigLaunchEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct10(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0x11);
    }
    _ZN10SkySprites13tickBigLaunchEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct11(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 1);
    }
    _ZN10SkySprites17tickSmallLaunchesEv(obj);
}

extern "C" void SkySprites_FireworksPatternAct12(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0xe1, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0x13);
    }
}

extern "C" void SkySprites_FireworksPatternAct13(SkySprites *obj) {
    if (obj->fireworksPatternTime < 0) {
        _ZN10SkySprites18setFireworksTimingEiii(obj, 0, 0x64, 0);
    } else if (obj->fireworksPatternTime == 0) {
        _ZN10SkySprites22selectFireworksPatternEi(obj, 0x10);
    }
    _ZN10SkySprites16tickLowBigLaunchEv(obj);
}

extern "C" void SkySprites_ApplyRainbowBlend(SkySprites *obj) {
    u16 *p = (u16 *)((u8 *)gWeatherManager.lineBlend + gWeatherManager.lineBufferIndex * 0x180);
    u16 *end1 = (u16 *)((u8 *)p + 0xee);
    u16 *end2 = (u16 *)((u8 *)p + 0x12e);
    u32 v = obj->rainbowStrength;
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

extern "C" void SkySprites_OnStarWish(SkySprites *obj) {
    SkySprite *e = &obj->sprites[_ZN10SkySprites8findKindEi(obj, 3)];
    if (e != NULL) {
        _ZN10SkySprites5spawnEiiP7VecFx32i(obj, 2, 0x3c, 0, 1);
        e->work0 = 1;
    }
}

extern "C" void SkySprites_Start(SkySprites *obj) {
    _ZN10SkySprites5startEv(obj);
    _ZN11SkySePlayer8resetAllEv((u8 *)obj + 0x2fcc);
}

extern "C" void SkySprites_Stop(SkySprites *obj) {
    _ZN11SkySePlayer10releaseAllEv((u8 *)obj + 0x2fcc);
    _ZN10SkySprites4stopEv(obj);
}

extern "C" void SkySprites_UpdateEvents(SkySprites *obj) {
    switch (gWeatherManager.precipKind) {
    case 1:
        _ZN10SkySprites10updateRainEv(obj);
        break;
    case 2:
        _ZN10SkySprites10updateSnowEv(obj);
        break;
    default:
        obj->precipIntensity = 0;
        obj->snowCounter = 0;
        break;
    }
    _ZN10SkySprites11updateBirdsEv(obj);
    _ZN10SkySprites10updateMoonEv(obj);
    _ZN10SkySprites13updateRainbowEv(obj);
    _ZN10SkySprites18updateShootingStarEv(obj);
    _ZN10SkySprites19updateFireworksShowEv(obj);
    if (Scene_GetCurrent() != 0x2c) {
        _ZN10SkySprites13updateBalloonEv(obj);
        _ZN10SkySprites9updateUfoEv(obj);
        _ZN10SkySprites10updatePeteEv(obj);
        _ZN10SkySprites10spawnShotsEv(obj);
    }
}

extern "C" void SkySprites_UpdateEventsIndoor(SkySprites *obj) {
    s32 r = Scene_GetSkyKind(0);
    if (r != 0 && r != 3) {
        if (gWeatherManager.precipKind == 1 && gWeatherManager.level == 4) {
            _ZN10SkySprites18updateThunderFlashEv(obj);
        }
        _ZN10SkySprites19updateFireworksShowEv(obj);
    }
}

extern "C" void SkySprites_UpdateStub(void *) {
}

extern "C" void SkySprites_Update(SkySprites *obj) {
    SkySprite *e = obj->sprites;
    SkySprite *end = obj->sprites + 0x3c;
    s32 *cnt;
    _ZN10SkySprites9tickClockEv(obj);
    SkySprites_UpdateStub(obj);
    SkySprites_UpdateEvents(obj);
    cnt = &obj->spriteCount;
    for (; e < end; e++) {
        if (e->gfxId != 0x34) {
            void *sub = &e->anim;
            switch (e->state) {
            case 1:
                if (e->gfxSlot != 6) {
                    _ZN10SkySprites12reloadAllGfxEv(obj);
                }
                SkySprite_StartAnim(e);
                e->state = 2;
                break;
            case 2:
                _ZN10SpriteAnim6updateEv(sub);
                _ZN9SkySprite12updateByKindEv(e);
                break;
            case 3:
                _ZN9SkySprite9endByKindEv(e);
                *cnt -= 1;
                break;
            }
        }
    }
    _ZN10SkySprites12loadDirtyGfxEv(obj);
    _ZN15SkyShotSequence6updateEv((u8 *)obj + 0x2fa8);
    _ZN11SkySePlayer6updateEv((u8 *)obj + 0x2fcc);
}

extern "C" void SkySprites_UpdateIndoor(SkySprites *obj) {
    SkySprites_UpdateEventsIndoor(obj);
}

extern "C" void SkySprites_Draw(SkySprites *obj) {
    SkySprite *e;
    SkySprite *end = obj->sprites + 0x3c;
    s32 yoff = gWeatherManager.screenOffsetY[gWeatherManager.bufferIndex ^ 1];
    s32 id = -1;
    for (e = obj->sprites; e < end; e++) {
        void *sub;
        void *r;
        Vec2 *pos;
        s32 a, b, x, y, py;
        if (e->kind == 0xd) continue;
        if (e->state != 2) continue;
        if (e->hidden != 0) continue;
        sub = &e->anim;
        r = _ZN10SpriteAnim7getCellEv(sub);
        if (r == NULL) continue;
        pos = (Vec2 *)&e->screenPos;
        a = _ZN10SpriteAnim9getFrameXEi(sub, id);
        b = _ZN10SpriteAnim9getFrameYEi(sub, id);
        x = a + ((pos->x + 0x800) >> 12);
        py = b + ((pos->y + 0x800) >> 12);
        y = py - yoff;
        if (gWeatherManager.engine == 1) {
            u8 k = e->cullRadius;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(0, r, x, y, e->palette, e->priority, e->scaleX, e->scaleY, (u16)e->angle, id, (u32)(e->hFlip << 24) >> 24, (u32)(e->vFlip << 24) >> 24);
        } else if (py < 0xc0) {
            u8 k = e->cullRadius;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(1, r, x, y, e->palette, e->priority, e->scaleX, e->scaleY, (u16)e->angle, id, (u8)e->hFlip, (u8)e->vFlip);
        } else if (py > 0x100) {
            u8 k;
            BOOL hidden;
            s32 y2 = y - 0x100;
            k = e->cullRadius;
            hidden = FALSE;
            if (k != 0) {
                s32 lo = y2 - k;
                s32 hi = y2 + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            Oam_DrawCell(0, r, x, y2, e->palette, e->priority, e->scaleX, e->scaleY, (u16)e->angle, id, (u32)(e->hFlip << 24) >> 24, (u32)(e->vFlip << 24) >> 24);
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
    if (gWeatherManager.targetLevel != gWeatherManager.level) {
        for (i = 0; i < 4; i++) {
            row = sSkyLightColorTables[gWeatherManager.level];
            t = row[i];
            Color_Lerp(&tmp[0], t + c, t + d, a);
            row = sSkyLightColorTables[gWeatherManager.targetLevel];
            t = row[i];
            Color_Lerp(&tmp[1], t + c, t + d, a);
            Color_Lerp(out, &tmp[0], &tmp[1], b);
            out++;
        }
    } else {
        row = sSkyLightColorTables[gWeatherManager.level];
        for (i = 0; i < 4; i++) {
            t = row[i];
            Color_Lerp(out, t + c, t + d, a);
            out++;
        }
    }
}

extern "C" void Sky_CalcFogOffset(s32 a, s32 b, u32 c, u32 d) {
    s32 cur = gWeatherManager.level;
    s32 next = gWeatherManager.targetLevel;
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
    if (gWeatherManager.targetLevel != gWeatherManager.level) {
        i = 0;
        ia = 0x1000 - a;
        ib = 0x1000 - b;
        for (; i < 2; i++) {
            u8 *p1 = sSkyLightParamTables[gWeatherManager.level][i];
            s32 t1 = (u16)((ia * p1[c] + a * p1[d]) >> 12);
            u8 *p2 = sSkyLightParamTables[gWeatherManager.targetLevel][i];
            t1 = t1 * ib;
            s32 t2 = (u16)((ia * p2[c] + a * p2[d]) >> 12);
            *out = (t1 + t2 * b) >> 12;
            out++;
        }
    } else {
        i = 0;
        ia2 = 0x1000 - a;
        for (; i < 2; i++) {
            u8 *p = sSkyLightParamTables[gWeatherManager.level][i];
            *out = (ia2 * p[c] + a * p[d]) >> 12;
            out++;
        }
    }
}

extern "C" void Sky_UpdateLighting(s32 a, s32 b) {
    SkyLightingLocals b0;
    u32 hour, rem;
    Clock_GetMinuteHour(&b0.time);
    hour = b0.time.hour;
    rem = (hour + 1) % 24;
    Sky_CalcLightColors(a, b, hour, rem);
    Sky_CalcLightParams(a, b, hour, rem);
    Sky_CalcFogOffset(a, b, hour, rem);
    if (sSkyOutdoors != 0) {
        Fog_SetAlpha(0);
        Gfx3d_SetClearDepth(0x1c2);
        b0.clearColor = n00::sSkyGradient.keyColors[1];
        Gfx3d_SetClearColor(b0.clearColor);
    }
    b0.roomColor = SceneLights_GetRoomColor();
    b0.roomColorArg = b0.roomColor;
    NNS_G3dGlbMaterialColorSpecEmi(0, b0.roomColorArg, 0);
}

extern "C" s16 Sky_GetLightColor(s32 i) {
    return sSkyLight[i];
}

extern "C" u8 Sky_GetLightParam(s32 i) {
    return data_021ef690[i];
}

extern "C" void RainSe_Init(Unk_0213b938 *p) {
    RainSe_InitVolume(p);
    _ZN13SndEnvChannel9callResetEv(p);
}

extern "C" void RainSe_Update(Unk_0213b938 *p) {
    s32 v[3];
    if (p->volume != 0) {
        s32 k = sRainSeIds[Scene_GetSkyKind(0)];
        if (k >= 0) {
            _ZN13SndEnvChannel11callRequestEPv(p, k);
        }
    }
    func_02133ef8(v, 12);
    v[2] = p->volume >> 8;
    _ZN13SndEnvChannel10callUpdateEPv(p, v);
    RainSe_FadeVolume(p);
}

extern "C" void RainSe_Release(void *p) {
    _ZN13SndEnvChannel11callReleaseEv(p);
}

extern "C" void RainSe_InitVolume(Unk_0213b938 *p) {
    BOOL a = gWeatherManager.level == 3;
    BOOL b = gWeatherManager.level == 4;
    BOOL c = gWeatherManager.precipKind == 1;
    p->volume = 0;
    if (c) {
        if (a) {
            p->volume = 0x99a00;
        } else if (b) {
            p->volume = 0x100000;
        }
    }
}

#undef data_021ef690
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
void RainSe_FadeVolume(Unk_0213b938 *o);
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
extern "C" {
extern s32 sSkyOutdoors;
}
extern "C" {
extern u8 sSkyPaletteLayer[];
}
extern "C" {
extern s32 sSkyPaletteSetByLevel[];
}
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
extern "C" void RainSe_FadeVolume(Unk_0213b938 *o);

extern "C" void RainSe_FadeVolume(Unk_0213b938 *o) {
    s32 a = gWeatherManager.targetLevel == 3;
    s32 b = gWeatherManager.targetLevel == 4;
    s32 on = gWeatherManager.precipKind == 1;
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
        if (v < o->volume) {
            w = 0x1eb;
        }
    } else {
        w = 0x5200;
    }
    Math_StepS32Alt(&o->volume, v, w);
}

extern "C" BOOL Sky_LoadPaletteFiles() {
    s32 i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (gWeatherManager.paletteFiles[i][j] == 0) {
                u8 **dst = &gWeatherManager.paletteFiles[i][j];
                *dst = File_LoadAlloc(sSkyPaletteFiles[i][j], (void *)gCurrentHeap, -4, &gWeatherManager.paletteFileSizes[i][j]);
                if (!*dst) {
                    return FALSE;
                }
            } else {
                File_LoadToBuffer(sSkyPaletteFiles[i][j], gWeatherManager.paletteFiles[i][j], gWeatherManager.paletteFileSizes[i][j]);
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
    ClockDateTimeWords t;
    u32 st;
    u16 buf[8];
    u32 seed;
    t.words[0] = 0;
    t.words[1] = 0;
    TownId_CopyTo(gSaveTownId, buf);
    Clock_GetDateTime(&t);
    seed = t.dt.day | ((t.dt.month << 5) | ((buf[0] << 16) | ((t.dt.year & 0x1f) << 9)));
    Random_SetSeed(&st, 1);
    Random_SetSeed(&st, seed);
    rainSlant = Random_NextBelow(&st, 0x2aaa) - 0x1555;
}
namespace n03 {

extern "C" void Color_Lerp(u16 *d, u16 *s1, u16 *s2, s32 t) {
    Rgb555 *dc = (Rgb555 *)d;
    Rgb555 *c1 = (Rgb555 *)s1;
    Rgb555 *c2 = (Rgb555 *)s2;
    s32 inv = 0x1000 - t;
    dc->r = (c1->r * inv + c2->r * t) >> 12;
    dc->g = (c1->g * inv + c2->g * t) >> 12;
    dc->b = (c1->b * inv + c2->b * t) >> 12;
    dc->x = 0;
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
    MinuteHour t;
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
    u16 **pal = gWeatherManager.palettes;
    s32 r;
    Sky_BlendPalettes();
    if (gWeatherManager.targetLevel != gWeatherManager.level) {
        r = Gfx2d_LoadPaletteRange((u8 *)pal[2], sSkyPaletteLayer[x], 1, 1, 1);
    } else {
        r = Gfx2d_LoadPaletteRange((u8 *)pal[0], sSkyPaletteLayer[x], 1, 1, 1);
    }
    return r;
}

extern "C" void Sky_BlendPalettes() {
    u16 **pal = gWeatherManager.palettes;
    MinuteHour t;
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
    Unk_020ba518_E set = (Unk_020ba518_E)sSkyPaletteSetByLevel[gWeatherManager.level];
    u16 *s1 = &((u16 *)((u8 **)((s32)gWeatherManager.paletteFiles + set * 8))[pm])[h * 16];
    u16 *s2 = &((u16 *)((u8 **)((s32)gWeatherManager.paletteFiles + set * 8))[pm2])[h2 * 16];
    Color_Lerp6(pal[0], s1, s2, a);
    if (gWeatherManager.targetLevel != gWeatherManager.level) {
        set = (Unk_020ba518_E)sSkyPaletteSetByLevel[gWeatherManager.targetLevel];
        s1 = &((u16 *)((u8 **)((s32)gWeatherManager.paletteFiles + set * 8))[pm])[h * 16];
        s2 = &((u16 *)((u8 **)((s32)gWeatherManager.paletteFiles + set * 8))[pm2])[h2 * 16];
        Color_Lerp6(pal[1], s1, s2, a);
        Color_Lerp6(pal[2], pal[0], pal[1], b);
        n00::sSkyGradient.setKey(0, pal[2][4], 0);
        n00::sSkyGradient.setKey(1, pal[2][5], 0xc0);
    } else {
        n00::sSkyGradient.setKey(0, pal[0][4], 0);
        n00::sSkyGradient.setKey(1, pal[0][5], 0xc0);
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
    screenOffsetY[0] = 0;
    screenOffsetY[1] = 0;
    bufferIndex = 0;
    palettes[0] = 0;
    palettes[1] = 0;
    palettes[2] = 0;
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
    ClockDateTimeWords t;
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
    t.words[0] = 0;
    t.words[1] = 0;
    Clock_GetDateTime(&t);
    starScrollY = Sky_CalcStarScrollY(this, &t);
    DateTime_SubHours(&t, 6);
    starScrollX = Sky_CalcStarScrollX(this, &t);
}
namespace n03 {

extern "C" s32 Sky_LoadPalettes(s32 x) {
    s32 r = 0;
    if (Sky_LoadPaletteFiles()) {
        if (Sky_AllocPaletteBufs(gWeatherManager.palettes)) {
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
    ClockDateTimeWords t;
    t.words[0] = 0;
    t.words[1] = 0;
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
    ClockDateTimeWords t;
    u8 *base = gSaveData;
    t.words[0] = 0;
    t.words[1] = 0;
    Clock_GetDateTime(&t);
    if ((L_021ed2b6::data_021ed2b0.v.hourBase + 6) % 24 != t.dt.hour) {
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
            s32 h = t.dt.hour - 6;
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

}

// ======== unk_020b96b8.cpp ========
namespace n02 {
extern "C" {
void Clock_GetMinuteHour(u8 *out);
}
extern "C" {
Actor *PlayerActor_GetActor(u32 x);
}
extern "C" {
s32 SceneLights_GetLightParam(u32 x);
}
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
void WeatherManager::reloadCurrentCloudGraphics()
{
    using namespace n02;
    s32 cur = level;
    if (loadCloudChars(cur, 6) != 0) {
        if (loadCloudScreen(&curCloudScreen, &curCloudScreenSize, 0, cur) != 0) {
            streamBlock = 0;
            transitionProgress = 0x20;
            transitionStep = 4;
        }
    }
}
namespace n02 {

}
void WeatherManager::streamCurrentCloudScreen()
{
    using namespace n02;
    s32 cur = streamBlock;
    s32 k = (((cloudScroll >> 8) - 8) & 0xff) >> 3;
    if (k == cur) {
        if (Gfx2d_LoadScreen(curCloudScreen + (k << 5), 6, 0x20, k << 5) != 0) {
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
void WeatherManager::updateTransitionStreamed()
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
void WeatherManager::transitionTimedBegin()
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
void WeatherManager::transitionTimedBlend()
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
void WeatherManager::transitionTimedFinish()
{
    using namespace n02;
    transitionProgress = 0x20;
    transitionStep = 4;
    transitionTimer = 0;
}
namespace n02 {

}
void WeatherManager::transitionTimedWait()
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
void WeatherManager::updateTransitionTimed()
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
void SkyGradient::setKey(s32 idx, u16 color, s32 line)
{
    using namespace n02;
    keyColors[idx] = color;
    keyLines[idx] = line;
}
namespace n02 {

extern "C" void SkyGradient_Build()
{
    s32 idx = (n00::sSkyGradient.bufferIndex + 1) % 2;
    volatile u16 out;
    Rgb555 c1, c2;
    volatile u16 in1, in2;
    in1 = n00::sSkyGradient.keyColors[0];
    c1 = *(Rgb555 *)&in1;
    in2 = n00::sSkyGradient.keyColors[1];
    c2 = *(Rgb555 *)&in2;
    u16 *dst = (u16 *)((u8 *)n00::sSkyGradient.lineColors + idx * 0x180);
    s32 s0 = n00::sSkyGradient.keyLines[0];
    s32 s1 = n00::sSkyGradient.keyLines[1];
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
    n00::sSkyGradient.bufferIndex = idx;
}

extern "C" void Sky_UpdateLineTables()
{
    u16 *pal;
    s32 a = 0, b = 0;
    s32 idx = (n00::gWeatherManager.lineBufferIndex + 1) % 2;
    s32 j, i;
    pal = (u16 *)((u8 *)n00::gWeatherManager.lineBlend + idx * 0x180);
    Actor *o = PlayerActor_GetActor(4);
    if (o) {
        VecFx32 *p = &o->position;
        if (p) {
            a = p->x >> 3;
            s32 *g = &n00::gWeatherManager.prevPlayerZ;
            s32 pos = p->z;
            s32 d = (pos - *g) >> 4;
            if (d < 0) {
                b = (d * -176) >> 8;
            } else {
                b = -(d << 7) >> 8;
            }
            *g = pos;
        }
    }
    s32 *gp = &n00::gWeatherManager.cloudScroll;
    s32 c = b; b = *gp; b += 0x60; b += c;
    if (b >= 0x10000) b -= 0x10000;
    *gp = b;
    if (sSkyLineTablesReady == 0) {
        sSkyLineTablesReady = 1;
        for (i = 0; i < 2; i++) {
            sSkyLineScrollX[i] = a;
            sSkyLineScrollY[i] = b;
            SkyLineAffine *q = (SkyLineAffine *)((u8 *)n00::gWeatherManager.lineAffine + i * 0x900);
            for (j = 0; j < 0xc0; j++) {
                s32 t = -(j << 8) / 0xc0;
                q->pa = 0x10000 / (t + 0x200);
                s32 n = (q->pa - 0x100) << 7;
                n = -n;
                q->x = a + n;
                s32 u = (j * 0xc000 / 0xc0 + 0x3000) / 0xc0;
                q->y = b + (u * u >> 8) * 0xc0;
                q = (SkyLineAffine *)((u8 *)q + 0xc);
            }
        }
    }
    s32 da = a - sSkyLineScrollX[idx];
    s32 db = b - sSkyLineScrollY[idx];
    if (da != 0 || db != 0) {
        sSkyLineScrollX[idx] = a;
        sSkyLineScrollY[idx] = b;
        s32 *end, *q;
        q = (s32 *)((u8 *)n00::gWeatherManager.lineAffine + idx * 0x900);
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
    n00::gWeatherManager.lineBufferIndex = idx;
}

extern "C" void Sky_VBlankSub()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = n00::gWeatherManager.screenOffsetY[n00::gWeatherManager.bufferIndex];
    v1 = n00::sSkyGradient.keyColors[0];
    REG16(0x5000400) = v1;
    v2 = n00::sSkyGradient.keyColors[1];
    REG16(0x5000000) = v2;
    SkyLineAffine *e = n00::gWeatherManager.lineAffine[n00::gWeatherManager.lineBufferIndex];
    REG16(0x4001030) = e->pa;
    REG32(0x4001038) = e->x;
    REG32(0x400103c) = e->y;
    Clock_GetMinuteHour(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4001000) = REG32(0x4001000) & 0xfffffdff;
        if (MenuCtrl_IsMenuOnTop() == 0) Gfx2d_HideSubPlanes(2);
    } else {
        REG32(0x4001000) |= 0x200;
        if (MenuCtrl_IsMenuOnTop() == 0) Gfx2d_ShowSubPlanes(2);
    }
    if (n00::gSkySprites.rainbowStrength != 0) {
        REG16(0x4001050) = 0x2040;
    } else {
        REG16(0x4001050) = 0x2042;
    }
    u16 s = y + n00::gWeatherManager.starScrollY;
    if (s > 0x100) s = 0x100;
    REG16(0x4001016) = s;
    REG16(0x4001014) = n00::gWeatherManager.starScrollX;
}

extern "C" void Sky_VBlankMain()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = n00::gWeatherManager.screenOffsetY[n00::gWeatherManager.bufferIndex];
    v1 = n00::sSkyGradient.keyColors[0];
    REG16(0x5000400) = v1;
    v2 = n00::sSkyGradient.keyColors[0];
    REG16(0x5000000) = v2;
    SkyLineAffine *e = n00::gWeatherManager.lineAffine[n00::gWeatherManager.lineBufferIndex];
    REG16(0x4000030) = e->pa;
    REG32(0x4000038) = e->x;
    REG32(0x400003c) = e->y;
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
        } else if (n00::gSkySprites.rainbowStrength != 0) {
            REG16(0x4000050) = 0x2040;
        } else {
            REG16(0x4000050) = 0x2042;
        }
    }
    r = 0xc0 - y;
    if (r < 0) r = 0;
    else if (r > 0xc0) r = 0xc0;
    u16 s = y + n00::gWeatherManager.starScrollY;
    if (s > 0x100) s = 0x100;
    REG16(0x4000016) = s;
    REG16(0x4000014) = n00::gWeatherManager.starScrollX;
    Gfx2d_EnableMainWindows(1);
    Gfx2d_SetMainWin0Planes(0x15);
    Gfx2d_SetMainWinOutPlanes(0x1f);
    Gfx2d_SetMainWin0Rect(0, r, 0xff, 0xc0);
}

#undef REG16
#undef REG32
}

// ======== unk_020b8d98.cpp ========
namespace n01 {
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern "C" {
extern WeatherManager gWeatherManager;
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
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; SkyObjGfxSlot v[5]; } gSkySprites; } }
#define data_021f3010 n01::L_021f3010::gSkySprites.v
extern "C" {
extern void *gCurrentHeap;
}
extern "C" {
extern u32 sSkyOutdoors;
}
extern "C" {
extern u32 gCamera;
}
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
void _ZN10PlayerData7setFlagEj(void *p, u32 x);
}
extern "C" {
void SkySprites_OnStarWish(void *p);
}
extern "C" {
void _ZN10SkySprites14uploadDirtyGfxEv(void *p);
}
extern "C" {
void _ZN10SkySprites16onSlingshotFiredEi(void *p, u32 x);
}
extern "C" {
void _ZN10SkySprites11onDayChangeEi(void *p, u32 x);
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
void _ZN10SkySprites12reloadAllGfxEv(void *p);
}
extern "C" {
void _ZN10SkySprites9initClockEv(void *p);
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
void _ZN14WeatherManager21updateTransitionTimedEv(void *p);
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
void _ZN14WeatherManager24updateTransitionStreamedEv(void *p);
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
extern "C" void Weather_RerollRainSlantAlt(void);
extern "C" void Weather_RerollRainSlantAlt2(void);
extern "C" void Weather_RerollRainSlantAlt3(void);
extern "C" void Sky_GetStarViewingTime(ClockDateTime *out, s32 a, s32 b);
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
    t = n00::sSkyGradient.keyColors[0];
    *(vu16 *)0x5000400 = t;
    *(vu16 *)0x5000000 = n00::sSkyGradient.lineColors[0][0xbf];
    *(vu32 *)0x4000000 = *(vu32 *)0x4000000 & 0xfffff5ff;
}

void Sky_FrameOutdoor(void) {
    s32 a, b;
    SkyGradient_Build();
    if (!MenuCtrl_IsMenuOnTop()) {
        Sky_UpdateLineTables();
        _ZN14WeatherManager24updateTransitionStreamedEv(&gWeatherManager);
    }
    Sky_ApplyPalettes(gWeatherManager.engine);
    if (gCamera != 0) {
        a = MenuCtrl_GetTransitionProgress() * 0x123 >> 12;
        b = Camera_GetCloseUpFactor() * 30 >> 12;
        gWeatherManager.screenOffsetY[gWeatherManager.bufferIndex ^ 1] = a + b;
    }
    gWeatherManager.starScrollY = Sky_GetStarScrollYNow(&gWeatherManager);
}

void Sky_FrameIndoor(void) {
    u32 a, b;
    if (!MenuCtrl_IsMenuOnTop()) {
        _ZN14WeatherManager21updateTransitionTimedEv(&gWeatherManager);
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
    u32 *p4 = (u32 *)&gWeatherManager.curCloudScreen;
    u32 v4 = *p4;
    if (v4 != 0) {
        Mem_Free(v4);
    }
    *p4 = 0;
    p4 = (u32 *)&gWeatherManager.cloudScreen;
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
    pp = (u32 *)gWeatherManager.palettes;
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
    r4 = gWeatherManager.level;
    result = FALSE;
    r5 = sSkyCloudBgLayer[idx];
    if (Sky_LoadPalettes(idx)) {
        if (_ZN14WeatherManager14loadCloudCharsEii(&gWeatherManager, r4, r5)) {
            u32 *r7 = &gWeatherManager.curCloudScreenSize;
            if (_ZN14WeatherManager15loadCloudScreenEPPhPjii(&gWeatherManager, &gWeatherManager.curCloudScreen, r7, 0, r4)) {
                if (Gfx2d_LoadScreen((void *)gWeatherManager.curCloudScreen, r5, *r7, 0)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}

extern "C" BOOL Sky_LoadNextCloudBg(u32 idx) {
    BOOL result = FALSE;
    if (gWeatherManager.transitionBusy != 0 && gWeatherManager.direction != 2) {
        s32 r3 = gWeatherManager.direction;
        s32 r5 = gWeatherManager.streamBlock;
        s32 r2 = gWeatherManager.level;
        s32 r1 = gWeatherManager.targetLevel;
        s32 r4;
        u32 r7;
        u32 stk4;
        if (r1 == r2) {
            if (r5 >= 0) {
                r5 = 0x20 - r5;
            } else if (r5 == 0) {
                switch (gWeatherManager.transitionStep) {
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
        switch (gWeatherManager.transitionStep) {
        case 3:
        case 4:
            if (r1 == r2) {
                r4 = r2;
            }
            break;
        }
        if (_ZN14WeatherManager14loadCloudCharsEii(&gWeatherManager, r4, r7)) {
            if (_ZN14WeatherManager15loadCloudScreenEPPhPjii(&gWeatherManager, &gWeatherManager.cloudScreen, &gWeatherManager.cloudScreenSize, stk4, r4)) {
                u8 *buf = gWeatherManager.cloudScreen;
                u32 off, n;
                if (r4 == gWeatherManager.level) {
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
    SkyObjGfxSlot *p = data_021f3010;
    s32 i;
    for (i = 0; i < 5; p++, i++) {
        p->loaded = 0;
    }
    _ZN13SkyObjPalette10invalidateEi(data_021f4398, -1);
    _ZN10SkySprites12reloadAllGfxEv(gSkySprites);
    _ZN10SkySprites9initClockEv(gSkySprites);
}

extern "C" BOOL Sky_SetEngine(s32 arg) {
    BOOL result = FALSE;
    MinuteHour t;
    if (arg == 0) {
        Gfx2d_SetSubBgModeState(1);
        Clock_GetMinuteHour(&t);
        if (t.hour >= 6 && t.hour < 0x12) {
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
        if (t.hour >= 6 && t.hour < 0x12) {
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
    u32 *dst = (u32 *)&gWeatherManager.prevPlayerZ;
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
    switch (gWeatherManager.level) {
    case 2:
    case 3:
    case 4:
        switch (gWeatherManager.precipKind) {
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
    *a = gWeatherManager.level;
    *b = gWeatherManager.targetLevel;
}

extern "C" u32 Weather_GetPrecipKind(void) { return gWeatherManager.precipKind; }

extern "C" u32 Sky_GetCurrentPalette(void) {
    if (gWeatherManager.targetLevel != gWeatherManager.level) {
        return (u32)gWeatherManager.palettes[2];
    }
    return (u32)gWeatherManager.palettes[0];
}

extern "C" u32 Sky_GetStarScrollX(void) { return gWeatherManager.starScrollX; }

extern "C" u32 Sky_GetStarScrollY(void) { return gWeatherManager.starScrollY; }

extern "C" void Sky_GetStarViewingTime(ClockDateTime *out, s32 a, s32 b) {
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
    out->minute = 0;
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

extern "C" void Weather_RerollRainSlantAlt3(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Weather_RerollRainSlantAlt2(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Weather_RerollRainSlantAlt(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Weather_RerollRainSlant(void) { _ZN14WeatherManager13rollRainSlantEv(&gWeatherManager); }

extern "C" void Sky_OnDayChange(u32 x) { _ZN10SkySprites11onDayChangeEi(gSkySprites, x); }

extern "C" void Sky_OnSlingshotFired(u32 x) { _ZN10SkySprites16onSlingshotFiredEi(gSkySprites, x); }

extern "C" void Sky_SwapBuffers(void) {
    gWeatherManager.bufferIndex ^= 1;
    _ZN10SkySprites14uploadDirtyGfxEv(gSkySprites);
}

extern "C" void Sky_EndBalloonDrop(void) { n00::gSkySprites.shotSeq.balloonDropEnded = 1; }

extern "C" void Sky_PlayBalloonDropSe(BOOL x) {
    if (x) {
        n00::gSkySprites.shotSeq.splashSePending = 1;
    } else {
        n00::gSkySprites.shotSeq.landSePending = 1;
    }
}

extern "C" u32 Sky_IsShootingStarVisible(void) { return n00::gSkySprites.shootingStarVisible; }

extern "C" void Sky_WishOnShootingStar(void) {
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        _ZN10PlayerData7setFlagEj(p, 0x32);
        SkySprites_OnStarWish(gSkySprites);
    }
}

extern "C" void Sky_RequestBirds(void) { n00::gSkySprites.birdsRequested = 1; }

#undef data_021f4398
#undef data_021f304c
#undef data_021f3010
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
