// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// ---- main-module library classes shared by several functions of this unit (global: their methods are called by symbol)
struct Unk_0203389c_Vec {
    s32 x, y, z;
};

class Unk_0203389c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    BOOL func_020338d0(s32 a);
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
void *_ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *self, Unk_0203389c_Vec *v, s32 a, s32 b);
s32 _ZN12Unk_0203389c13func_02033914Ei(void *self, s32 a);
void _ZN12Unk_0203398cD1Ev(void *self);
}

// byte offsets into the 0x25c-byte records / the 0x168 table (interior labels of symbols.txt)
struct Unk_ov003_Off130 { u8 pad[0x130]; u8 at; };
struct Unk_ov003_Off204 { u8 pad[0x204]; u8 at; };
struct Unk_ov003_Off240 { u8 pad[0x240]; u8 at; };
struct Unk_ov003_Off25c { u8 pad[0x25c]; u8 at; };
struct Unk_ov003_Off2 { u8 pad[0x2]; u8 at; };

// ---- main-module classes (declarations only)
class AnimFrameCtrl {
public:
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~AnimFrameCtrl();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();

    u32 unk_18;
    u32 unk_1c;
};

// ---- ov009 actor (only the methods used here)
class BuildingActor {
public:
    s32 callIsLit();
    u32 getGridZ();
    u32 getGridX();
};

// ---- class with vtable 0x02234aac (derived from ModelAnim)
class InsectMatAnim : public ModelAnim {
public:
    InsectMatAnim();
    virtual ~InsectMatAnim();
    static void *operator new(unsigned long, void *p) { return p; }
};

// ---- library sub-objects (declarations only; ctors/dtors live in main)
class Unk_02032238 {
public:
    Unk_02032238();
    ~Unk_02032238();
    u32 pad[0x30 / 4];
};

class AnimModel {
public:
    AnimModel();
    ~AnimModel();
    u32 pad[0xb8 / 4];
};

class Unk_02088b20 {
public:
    Unk_02088b20();
    ~Unk_02088b20();
    u32 pad[0x28 / 4];
};

class Unk_0209c0ac {
public:
    Unk_0209c0ac();
    ~Unk_0209c0ac();
    void func_0209c0c8();
    u32 pad[0x40 / 4];
};

class Unk_0209c364 {
public:
    Unk_0209c364();
    ~Unk_0209c364();
    u32 pad[2];
};

class FxVec3 {
public:
    FxVec3();
    ~FxVec3();
    u32 pad[3];
};

class SndEnvChannel {
public:
    SndEnvChannel() {}
    virtual void vfunc_00();
    u8 unk_04[0xc];
};

class Unk_0213b954 : public SndEnvChannel {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();
};

// ---- static object holding a InsectMatAnim plus library sub-objects (no vtable)
class Insect {
public:
    Insect();
    ~Insect();

    /* 0x000 */ InsectMatAnim unk_00;
    /* 0x020 */ Unk_02032238 unk_20;
    /* 0x050 */ AnimModel unk_50;
    /* 0x108 */ Unk_02088b20 unk_108;
    /* 0x130 */ Unk_0209c0ac unk_130;
    /* 0x170 */ u32 unk_170;
    /* 0x174 */ Unk_0213b954 unk_174;
    /* 0x184 */ u8 pad_184[0x1ec - 0x184];
    /* 0x1ec */ FxVec3 unk_1ec[2];
    /* 0x204 */ u8 unk_204[0xc];
    u8 pad_210[0x22c - 0x210];
    /* 0x22c */ s32 unk_22c;
    /* 0x230 */ Unk_0209c364 unk_230;
    /* 0x238 */ u16 unk_238;
    /* 0x23a */ u16 unk_23a;
    /* 0x23c */ u16 unk_23c;
    u8 pad_23e[2];
    /* 0x240 */ u8 unk_240[2];
    /* 0x242 */ u16 unk_242;
    /* 0x244 */ u8 pad_244[4];
    /* 0x248 */ u8 unk_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 unk_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
    u8 pad_253[0x25c - 0x253];
};

struct Unk_ov003_02228710_Vec {
    s32 x, y, z;
};

// Actor object (entity), 0x25c bytes; table sSpecialInsects.
struct Unk_ov003_02228710_Act {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1c;
    u8 pad_20[0x30];
    u8 unk_50[0x9c];
    u8 unk_ec[0x44];
    u8 unk_130[0x40];
    s32 unk_170;
    u8 unk_174[0x60];
    Unk_ov003_02228710_Vec unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    Unk_ov003_02228710_Vec unk_204;
    Unk_ov003_02228710_Vec unk_210;
    s32 unk_21c;
    s32 unk_220;
    s32 unk_224;
    s32 unk_228;
    u8 pad_22c[4];
    u8 unk_230[2];
    u16 unk_232;
    u8 pad_234[2];
    u16 unk_236;
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u16 unk_23e;
    u8 pad_240[2];
    u16 unk_242;
    u16 unk_244;
    u8 pad_246[2];
    u8 unk_248;
    u8 unk_249;
    u8 unk_24a;
    u8 pad_24b;
    u8 unk_24c;
    s8 unk_24d;
    u8 unk_24e;
    u8 pad_24f;
    u8 unk_250;
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 unk_255;
    u8 unk_256;
    u8 unk_257;
    u8 unk_258;
    u8 unk_259;
    u8 pad_25a[2];
};

class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    u32 unk_00[6];
};

class Unk_ov003_0222e708 {
public:
    Unk_ov003_0222e708();
    ~Unk_ov003_0222e708();
};

class InsectManager : public GameProc, public Unk_ov003_0222e708 {
public:
    InsectManager();
    virtual ~InsectManager();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    BOOL allocFieldInsect(Unk_ov003_02228710_Act *e);
    BOOL allocSpecialInsect(s32 id, s32 idx);
    BOOL allocHeldInsect(Unk_ov003_02228710_Act *e);
    void freeInsect(Unk_ov003_02228710_Act *e, s32 mode);

    /* 0x50 */ Unk_0209c15c unk_50;
    /* 0x68 */ Unk_0209c15c unk_68;
    /* 0x80 */ Unk_0209c15c unk_80;
    /* 0x98 */ u32 unk_98[2];
};

// global object whose destructor is main's FxVec3::~FxVec3 (0x02000c8c); no constructor call in the __sinit
class Unk_ov003_02258f18 {
public:
    ~Unk_ov003_02258f18();
    u32 pad[3];
};

// ---- TU25 own data (global definitions; the segments below access them through their own typed views)
struct Unk_ov003_02234a9c_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

extern "C" void InsectManager_Create();
extern "C" {
void Insect_UpdateKind38();
void Insect_InitKind38();
void Insect_UpdateDungBeetle();
void Insect_InitDungBeetle();
void Insect_UpdateAnt();
void Insect_InitAnt();
void Insect_InitScorpion();
void Insect_InitTarantula();
void Insect_UpdateStinger();
void Insect_UpdateSpider();
void Insect_InitSpider();
void Insect_UpdateFlea();
void Insect_InitFlea();
void Insect_UpdateFly();
void Insect_InitFly();
void Insect_UpdateHoneybee();
void Insect_InitHoneybee();
void Insect_UpdateBee();
void Insect_InitBee();
void Insect_UpdatePillBug();
void Insect_UpdateMoleCricket();
void Insect_InitBurrower();
void Insect_InitCrawler();
void Insect_UpdateCrawler();
void Insect_UpdatePondskater();
void Insect_InitPondskater();
void Insect_UpdateDragonfly();
void Insect_InitDragonfly();
void Insect_InitHopper();
void Insect_UpdateHopper();
void Insect_InitTreeBug();
void Insect_UpdateTreeBug();
void Insect_UpdateMosquito();
void Insect_InitMosquito();
void Insect_UpdateFirefly();
void Insect_InitFirefly();
void Insect_InitMoth();
void Insect_UpdateMoth();
void Insect_InitButterfly();
void Insect_UpdateButterfly();
}

extern "C" { Insect sFieldInsects[8]; }
extern "C" { u16 data_ov003_02258f10; }
extern "C" { u8 sWateringActive; }
extern "C" { u8 sInsectSpawnMaskDry[0x200]; }
extern "C" { Insect sSpecialInsects[2]; }
extern "C" { s8 sTrashFlySpawnEnabled; }
extern "C" { u8 sAntSpawnEnabled; }
extern "C" { Insect sHeldInsects[4]; }
extern "C" { u8 data_ov003_02258f08; }
extern "C" { u8 data_ov003_02258f04; }
extern "C" { u8 sInsectSpawnTimer; }
extern "C" { u8 sInsectSpawnMaskLand[0x200]; }
// table of 60 six-byte records at 0x02234b04 (label 0x02234b06 = +2, 0x02234b08 = +4)
extern "C" u16 sInsectModelParams[180] = {
    0x0, 0x514, 0x640, 0x0, 0x514, 0x640,
    0x0, 0x6a4, 0x6a4, 0x0, 0x6a4, 0x6a4,
    0x0, 0x6a4, 0x6a4, 0x0, 0x708, 0x708,
    0x0, 0x640, 0x640, 0x0, 0x898, 0x898,
    0x0, 0x6a4, 0x6a4, 0x0, 0x960, 0xbb8,
    0x1, 0x44c, 0x640, 0x1, 0x4b0, 0x578,
    0x1, 0x640, 0x640, 0x1, 0x514, 0x514,
    0x0, 0x578, 0x898, 0x0, 0x514, 0x640,
    0x1, 0x514, 0x9c4, 0x1, 0x514, 0x9c4,
    0x1, 0x4b0, 0x9c4, 0x1, 0x4b0, 0x9c4,
    0x0, 0x578, 0x9c4, 0x1, 0x578, 0x578,
    0x1, 0x708, 0x708, 0x1, 0x898, 0x898,
    0x1, 0x514, 0x3e8, 0x1, 0x514, 0xaf0,
    0x1, 0x3e8, 0x578, 0x1, 0x44c, 0x44c,
    0x1, 0x3e8, 0x3e8, 0x1, 0x4b0, 0x578,
    0x1, 0x3e8, 0x708, 0x1, 0x514, 0xaf0,
    0x1, 0x3e8, 0x578, 0x1, 0x4b0, 0x9c4,
    0x1, 0x4b0, 0x9c4, 0x1, 0x4b0, 0x898,
    0x1, 0x640, 0xa28, 0x0, 0x44c, 0x640,
    0x1, 0x4b0, 0x9c4, 0x1, 0x514, 0x9c4,
    0x1, 0x578, 0x9c4, 0x1, 0x578, 0x9c4,
    0x1, 0x578, 0x9c4, 0x1, 0x514, 0x9c4,
    0x1, 0x578, 0x9c4, 0x1, 0x640, 0xa28,
    0x1, 0x640, 0xa28, 0x1, 0x708, 0xaf0,
    0x1, 0x708, 0x708, 0x1, 0x190, 0x640,
    0x1, 0x1, 0x4b0, 0x1, 0x3e8, 0x4b0,
    0x1, 0x514, 0x9c4, 0x0, 0x3e8, 0x578,
    0x0, 0x7d0, 0x9c4, 0x0, 0x7d0, 0x9c4,
    0x0, 0x3e8, 0x3e8, 0x1, 0x44c, 0x640,
    0x0, 0xbb8, 0xbb8, 0x0, 0x7d0, 0x9c4,
};
extern "C" { u16 sFieldInsectPurgeTimer; }
extern "C" { u8 sInsectCatchResult; }
extern "C" Unk_ov003_02234a9c_Entry sInsectManagerProfile = {(void *)InsectManager_Create, 0xbc, 0xc0};
extern "C" void *sInsectBehaviours[120] = {
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitButterfly, (void *)Insect_UpdateButterfly,
    (void *)Insect_InitMoth, (void *)Insect_UpdateMoth,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitHoneybee, (void *)Insect_UpdateHoneybee,
    (void *)Insect_InitBee, (void *)Insect_UpdateBee,
    (void *)Insect_InitHopper, (void *)Insect_UpdateHopper,
    (void *)Insect_InitHopper, (void *)Insect_UpdateHopper,
    (void *)Insect_InitCrawler, (void *)Insect_UpdateCrawler,
    (void *)Insect_InitCrawler, (void *)Insect_UpdateCrawler,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitDragonfly, (void *)Insect_UpdateDragonfly,
    (void *)Insect_InitDragonfly, (void *)Insect_UpdateDragonfly,
    (void *)Insect_InitDragonfly, (void *)Insect_UpdateDragonfly,
    (void *)Insect_InitAnt, (void *)Insect_UpdateAnt,
    (void *)Insect_InitPondskater, (void *)Insect_UpdatePondskater,
    (void *)Insect_InitCrawler, (void *)Insect_UpdateCrawler,
    (void *)Insect_InitHopper, (void *)Insect_UpdateHopper,
    (void *)Insect_InitHopper, (void *)Insect_UpdateHopper,
    (void *)Insect_InitHopper, (void *)Insect_UpdateHopper,
    (void *)Insect_InitBurrower, (void *)Insect_UpdateMoleCricket,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitCrawler, (void *)Insect_UpdateCrawler,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitDungBeetle, (void *)Insect_UpdateDungBeetle,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitFirefly, (void *)Insect_UpdateFirefly,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitFlea, (void *)Insect_UpdateFlea,
    (void *)Insect_InitBurrower, (void *)Insect_UpdatePillBug,
    (void *)Insect_InitMosquito, (void *)Insect_UpdateMosquito,
    (void *)Insect_InitFly, (void *)Insect_UpdateFly,
    (void *)Insect_InitTreeBug, (void *)Insect_UpdateTreeBug,
    (void *)Insect_InitSpider, (void *)Insect_UpdateSpider,
    (void *)Insect_InitTarantula, (void *)Insect_UpdateStinger,
    (void *)Insect_InitScorpion, (void *)Insect_UpdateStinger,
    (void *)Insect_InitKind38, (void *)Insect_UpdateKind38,
    (void *)Insect_InitFirefly, (void *)Insect_UpdateFirefly,
    (void *)Insect_InitBee, (void *)Insect_UpdateBee,
    (void *)Insect_InitAnt, (void *)Insect_UpdateAnt,
};

extern "C" { Unk_ov003_02258f18 sWateringPos; }

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// ---- record used by FieldInsect_PurgeStale
struct Unk_ov003_02225cb0_Ent {
    /* 0x000 */ u8 pad_000[0x234];
    /* 0x234 */ s16 unk_234;
    /* 0x236 */ u8 pad_236[0x248 - 0x236];
    /* 0x248 */ u8 unk_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 pad_24a[3];
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e[2];
    /* 0x250 */ u8 unk_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 pad_252[0x25c - 0x252];
};

struct Unk_ov003_02225d38_Pair {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov003_02225d38_Ent {
    Unk_ov003_02225d38_Pair *unk_00;
    u8 unk_04;
    u8 pad_05[3];
};

struct Unk_ov003_02225dbc_Data {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02226058_Buf {
    u8 unk_00;
    u8 unk_01;
};

extern "C" {
extern u8 sAntSpawnEnabled;
extern u8 sWateringActive;
extern u8 data_ov003_02258f04;
extern u8 data_ov003_02258f08;
extern s8 sTrashFlySpawnEnabled;
extern u16 data_ov003_02258f10;
extern u16 sFieldInsectPurgeTimer;
extern u32 sWateringPos[];
extern u8 sInsectSpawnMaskDry[];
extern u8 sInsectSpawnMaskLand[];
extern Unk_ov003_02225cb0_Ent sFieldInsects[];
extern Unk_ov003_02225d38_Ent *data_020dcbd0[];
extern Unk_ov003_02225dbc_Data *gCommManager;
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
typedef void *(*Unk_ov003_02225ed0_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov003_02225ed0_Fn, Unk_ov003_02225ed0_Fn);
void *__cxa_vec_cleanup(void *, s32, s32, Unk_ov003_02225ed0_Fn);
void *func_02000c98(void *);
void *func_02000c8c(void *);
u32 Item_MakeBuilding(u32 a);
void *StrBSize_Get(u16 *p);
u32 func_020b2b98(void *p);
BOOL func_020b2ae0(void *p, s32 *x, s32 *y, u32 i);
BuildingActor *BuildingList_FindByItem(u32 id);
void func_02133150();
void *TownBlockMap_Get();
s32 func_02063b8c(s32 n);
BOOL InsectSpawn_FindUnitInBlock(void *a, s32 code, s32 *x, s32 *y, void *obj, u8 flag);
void *func_02095204(s32 n);
s32 func_020e9650(void *a, s32 *v);
void *MI_CpuCopy8(void *dst, void *src, s32 n);
s32 func_020b8fe8();
BOOL Town_GetRafflesiaPos(void *buf);
BOOL CommManager_isSlotActive(void *p, u32 v);
void Clock_GetMinuteHour(void *p);
void Clock_GetDayMonth(void *p);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
void func_0209c364(void *p);
void func_0209c370(void *p);
void func_0209c128(void *p);
void func_0209c140(void *p);
void func_0209c0c8(void *p);
void func_02088b6c(void *p);
void func_02088b7c(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
}

extern "C" {
s32 Insect_GetWeatherReaction(s32 a, s32 b);
BOOL Insect_RollFromSpawnTable(u32 a, u32 b, u8 *out);
BOOL Insect_IsAllowedOnline(s32 a);
s32 Insect_GetTimeSlot();
void InsectSpawn_ClearLitUnits(u16 (*arr)[4][16]);
}

// prototypes of this segment's own functions
extern "C" void InsectSpawn_ClearLitUnits(u16 (*arr)[4][16]);
extern "C" void InsectSpawn_BuildLightMask(u16 (*arr)[4][16]);
extern "C" s32 InsectSpawn_PickPos(u8 *self, void *a, s32 code, u32 flag);
extern "C" s32 InsectSpawn_CopyMask(void *p, s32 t);
extern "C" s32 Insect_GetWeatherReaction(s32 a, s32 b);
extern "C" void FieldInsect_PurgeStale();
extern "C" BOOL Insect_RollFromSpawnTable(u32 a, u32 b, u8 *out);
extern "C" BOOL Insect_IsAllowedOnline(s32 a);
extern "C" BOOL Insect_PickSpecialSpawn(u8 *a, u8 *b, s32 c);
extern "C" void Insect_SetAnimSpeed(u8 *self, u32 v);
extern "C" void Insect_TickFrame(u8 *self);
extern "C" s32 Insect_GetTimeSlot();
extern "C" BOOL Insect_RollKind(u8 *out);
extern "C" BOOL Insect_IsAtWateringPoint(void *p);
}

#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
struct Unk_ov003_02226180_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02226180_Blk {
    s64 v[6];
};

// One 0x25c-byte entry of the tables at sSpecialInsects (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_02226180_Rec {
    u32 unk_00[0x14];                  // 0x00
    u8 unk_50[0x9c];                   // 0x50
    u8 unk_ec[4];                      // 0xec
    s32 unk_f0;                        // 0xf0
    u32 unk_f4;                        // 0xf4
    u32 unk_f8[(0x180 - 0xf8) / 4];    // 0xf8
    Unk_ov003_02226180_Blk unk_180;    // 0x180
    u32 unk_1b0[(0x1c8 - 0x1b0) / 4];  // 0x1b0
    Unk_ov003_02226180_Vec unk_1c8;    // 0x1c8
    u32 unk_1d4[(0x204 - 0x1d4) / 4];  // 0x1d4
    Unk_ov003_02226180_Vec unk_204;    // 0x204
    u32 unk_210[(0x21c - 0x210) / 4];  // 0x210
    s32 unk_21c;                       // 0x21c
    u32 unk_220[(0x22c - 0x220) / 4];  // 0x220
    s32 unk_22c;                       // 0x22c
    u32 unk_230[(0x238 - 0x230) / 4];  // 0x230
    u16 unk_238;                       // 0x238
    u16 unk_23a;                       // 0x23a
    u16 unk_23c;                       // 0x23c
    u8 unk_23e[8];                     // 0x23e
    u8 unk_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 unk_248;                        // 0x248
    u8 unk_249;                        // 0x249
    u8 unk_24a[3];                     // 0x24a
    s8 unk_24d;                        // 0x24d
    u8 unk_24e[2];                     // 0x24e
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252[6];                     // 0x252
    u8 unk_258;                        // 0x258
    u8 unk_259[3];                     // 0x259
};

struct Unk_ov003_022264f0_Buf {
    u8 b[0x200];
};

struct Unk_ov003_022269b8_Obj {
    u8 unk_00[0x50];
    u8 unk_50[0x18];
    u8 unk_68[0x18];
    u8 unk_80[0x18];
    void *unk_98[2];
};

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02226768_Vec : Unk_ov003_02226180_Vec {
    Unk_ov003_02226768_Vec() {}
    ~Unk_ov003_02226768_Vec() {}
};

typedef Unk_ov003_02226180_Rec Rec;

typedef Unk_ov003_02226180_Vec Vec3;

typedef Unk_ov003_022264f0_Buf Buf;

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern void *gCamera;
extern Vec3 gCameraLookAt;
extern s16 data_02135f44[];
extern Rec sFieldInsects[];
extern Rec sSpecialInsects[];
extern Rec sHeldInsects[];
extern u8 sTrashFlySpawnEnabled;
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
s32 func_0209c0ac(void *p);
s32 func_02106020(s32 a, s32 b);
void WorldCurve_FromCurved(void *dst, void *src);
s32 func_01ffcb0c(s32 a, s32 b);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void AnimModel_setFrame(void *p, s32 v);
void func_020902f8(s32);
s32 func_020b8fe8(void);
s32 func_020a62a0(void);
u8 func_02060b9c(u8 v);
void *func_02095204(s32 v);
s32 PlayerActor_GetSlotPosXZ(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
s32 func_020e9650(void *a, void *b);
void Mem_Free(void *p);
s32 Math_AngleXZ(void *a, void *b);
void func_0209c15c(void *p);
void func_02043b90(void);
s32 Insect_RollKind(s8 *p);
void Insect_SetScale(Rec *e, s32 v);
void InsectSpawn_CopyMask(Buf *b, s32 v);
void InsectSpawn_BuildLightMask(Buf *b);
s32 SpawnMask_MarkRect(Buf *b, s32 x, s32 z, s32 a, s32 c, s32 d);
BOOL InsectSpawn_PickPos(Rec *e, Buf *b, s32 kind, s32 sub);
s32 Insect_GetWeatherReaction(s32 kind, s32 h);
s32 func_ov003_022287c8(void *obj, Rec *e, s32 v);
void func_ov003_022288dc(void *obj, Rec *e);
u8 *Snowball_GetLooseBall(s32 i);
s32 Snowball_GetRadius(void *o);
s32 Insect_RandomTurn(s32 a, s32 b);
BOOL Insect_Spawn(s32 obj, s32 kind, u8 sub, s32 flag);
}

// prototypes of this segment's own functions
extern "C" BOOL Insect_IsBeeSwarmOut(void);
extern "C" BOOL Insect_NetClaim(s32 x);
extern "C" BOOL HeldInsect_SetHandMatrix(s32 idx, s16 *p, Unk_ov003_02226180_Blk *q, s32 flag);
extern "C" void Insect_SpawnBeeSwarm(Vec3 *v);
extern "C" s32 Insect_TrySpawnRandom(s32 a, s32 b, s8 c, u32 d);
extern "C" BOOL Insect_Spawn(s32 obj, s32 kind, u8 sub, s32 flag);
extern "C" void Insect_EnableTrashFlies(void);
extern "C" void InsectPool_UpdateInView(s32 obj, s32 flag);
extern "C" void InsectPool_UpdateInViewOfPlayer(s32 obj, s32 flag, s32 idx, s32 x, s32 z);
}

#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
};

typedef Unk_ov003_0225980c_V3 V3;

struct Unk_ov003_0225980c_Blk {
    s32 v[12];
};

typedef Unk_ov003_0225980c_Blk Blk;

struct Unk_ov003_02234b06_Rec {
    u16 a, b, c;
};

struct Unk_ov003_0225980c_Obj {
    u8 pad_000[0x50];
    Blk unk_50;
    u8 pad_80[0xb4 - 0x80];
    Blk unk_b4;
    u8 pad_e4[0x130 - 0xe4];
    u8 unk_130[0x50];
    Blk unk_180;
    u8 pad_1b0[0x204 - 0x1b0];
    V3 unk_204;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    s32 unk_21c;
    u8 pad_220[0x22c - 0x220];
    s32 unk_22c;
    u8 pad_230[2];
    s16 unk_232;
    u8 pad_234[4];
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u8 pad_23e[4];
    s16 unk_242;
    u8 pad_244[0x24d - 0x244];
    s8 unk_24d;
    u8 pad_24e[2];
    u8 unk_250;
    u8 unk_251;
    u8 pad_252[0x25c - 0x252];
};

typedef Unk_ov003_0225980c_Obj Obj;

struct Unk_ov003_02226d54_Net {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Obj sFieldInsects[];
extern Obj sSpecialInsects[];
extern Obj sHeldInsects[];
extern u8 sInsectCatchResult;
extern Unk_ov003_02226d54_Net *gCommManager;
extern Blk data_021f47e0;
extern s16 data_02135f44[];
s32 InsectPool_Draw(Obj *self, void *a, s32 n);
s32 WorldCurve_ToCurved(V3 *out, void *in);
void WorldCurve_FromCurved(V3 *a, V3 *b);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8404(void *m, s32 a);
s32 func_020e83d4(void *m, s32 a);
s32 func_020e8434(void *m, s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void MTX_MultVec43(V3 *a, Blk *b, V3 *c);
s32 func_02090330(s32 a, V3 *v, s32 b, u16 *c);
s32 func_020902d4(s32 h, V3 *v, s32 a, u16 *c);
s32 func_020902f8(s32 h);
void *func_0209c0ac(void *p);
s32 func_02106020(void *a, s32 b);
s32 NNS_G3dMdlSetMdlAlpha(void *p, s32 a, s32 b);
s32 AnimModel_drawAnimated(void *p, void *q);
void func_020abdd0(void *p, s32 a, u32 b, u8 c);
BOOL CommManager_isSlotActive(void *p, s32 i);
BOOL func_020a62a0();
void *func_02095204(s32 a);
BOOL CommManager_isMyAid(void *g, s32 a);
void CommManager_beginRecord(void *g);
void CommManager_writeRecord(void *g, void *buf, s32 n);
void CommManager_endRecord(void *g, s32 a, s32 b);
s32 func_ov003_02226a5c(Obj *self);
void Insect_SetModelMatrix(void *a, Obj *o, s32 flag);
BOOL Insect_HasShadow(void *a, Obj *o);
void Insect_Draw(void *a, Obj *o);
void Insect_SetScale(Obj *o, s32 v);
s32 Insect_TryCatch(u8 id);
void Insect_CancelCatch(s32 id);
s32 Insect_GetCatchResult(s32 id);
s32 Insect_FinishCatch(u8 id);
void HeldInsect_Remove(u8 id, s32 flag);
void Insect_OnClaimGranted(s32 id);
BOOL Insect_CanHopAway(s32 t);
void Insect_OnNetRemove(s32 id);
void HeldInsect_Start(s32 t, s32 idx);
V3 *HeldInsect_GetPos(s32 idx);
BOOL Insect_IsTreeKindForCulling(s32 a, s32 t);
}

struct Unk_ov003_02226a9c_Pad { Unk_ov003_02226a9c_Pad() {} ~Unk_ov003_02226a9c_Pad() {} };

// prototypes of this segment's own functions
extern "C" void Insect_SetModelMatrix(void *a, Obj *o, s32 flag);
extern "C" BOOL Insect_HasShadow(void *a, Obj *o);
extern "C" void Insect_Draw(void *a, Obj *o);
extern "C" void Insect_SetScale(Obj *o, s32 v);
extern "C" s32 Insect_TryCatch(u8 id);
extern "C" void Insect_CancelCatch(s32 id);
extern "C" s32 Insect_GetCatchResult(s32 id);
extern "C" s32 Insect_FinishCatch(u8 id);
extern "C" void HeldInsect_Remove(u8 id, s32 flag);
extern "C" void Insect_OnClaimGranted(s32 id);
extern "C" BOOL Insect_CanHopAway(s32 t);
extern "C" void Insect_OnNetRemove(s32 id);
extern "C" void HeldInsect_Start(s32 t, s32 idx);
extern "C" V3 *HeldInsect_GetPos(s32 idx);
extern "C" BOOL Insect_IsTreeKindForCulling(s32 a, s32 t);
}

#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

typedef Unk_ov003_0225980c_V3 V3;

// One 0x25c-byte entry of the tables at sSpecialInsects (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0225980c_Rec {
    u8 pad_000[0x20];
    u8 unk_20[0x174 - 0x20];
    u8 unk_174[0x1c8 - 0x174];
    V3 unk_1c8;
    V3 unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    V3 unk_204;
    u8 pad_210[0x220 - 0x210];
    s32 unk_220;
    s32 unk_224;
    s32 unk_228;
    s32 unk_22c;
    u8 pad_230[0x238 - 0x230];
    u16 unk_238;
    s16 unk_23a;
    u16 unk_23c;
    u8 pad_23e[0x242 - 0x23e];
    s16 unk_242;
    u8 pad_244[0x246 - 0x244];
    u8 unk_246;
    u8 unk_247;
    u8 unk_248;
    u8 unk_249;
    u8 pad_24a[3];
    s8 unk_24d;
    u8 pad_24e[2];
    u8 unk_250;
    u8 unk_251;
    u8 pad_252[2];
    u8 unk_254;
    u8 pad_255[0x25c - 0x255];
};

typedef Unk_ov003_0225980c_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02234c6c_Ent {
    void (*fn)(Rec *);
    s32 unk_04;
};

struct Unk_ov003_02234b04_Ent {
    u16 a, b, c;
};

struct Unk_ov003_02227970_Loc {
    s8 a;
    u8 i;
    u8 c;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern Rec sFieldInsects[];
extern Rec sSpecialInsects[];
extern Rec sHeldInsects[];
extern Unk_ov003_02234c6c_Ent sInsectBehaviours[];
extern Unk_ov003_02234b04_Ent sInsectModelParams[];
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
s32 func_020a62a0(void);
s32 func_020b8fe8(void);
s32 PlayerActor_GetAction(s32 v);
void func_020902f8(s32 h);
BOOL func_0203a4c4(void *p, s32 a, s32 b);
void func_020309d4(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_020e9650(void *a, void *b);
void Unk_02003c40_callUpdateRelative(void *obj, V3 *v);
void CommManager_beginRecord(Unk_020cbb18_Ptr *g);
void CommManager_writeRecord(Unk_020cbb18_Ptr *g, void *buf, s32 n);
void func_020728c4(Unk_020cbb18_Ptr *g, s32 a, s32 b);
void CommManager_endRecord(Unk_020cbb18_Ptr *g, s32 a, s32 b);
void *TownBlockMap_Get(void);
void FieldPos_ToUnit(s32 *x, s32 *y, void *p);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL Insect_IsTreeKindForCulling(void *a, s32 t);
void Insect_Draw(void *a, Rec *o);
void Insect_SetScale(Rec *o, s32 v);
void HeldInsect_Remove(s32 id, s32 flag);
void Insect_TurnToTarget(Rec *o, s32 v);
s32 func_ov003_022287c8(void *a, Rec *o, s32 v);
s32 func_ov003_0222898c(void *a, Rec *o);
s32 Insect_LoadModel(void *a, Rec *o, s32 v);
s32 Insect_Update(void *a, Rec *o, s32 i, s32 v);
s32 InsectNetSync_Set(void *a, s32 i, s32 t, void *p, s32 b, s32 c);
s32 InsectNetSync_Get(void *a, s32 i, s8 *p, s32 *q, s32 *r, u8 *s);
s32 Insect_GetWeatherReaction(s32 a, s32 b);
}

static inline BOOL Unk_ov003_022277c0_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (v < 0x5d || v > 0x61) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) f3 = FALSE;
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) f4 = FALSE;
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) f9 = FALSE;
    }
    return f9;
}

// prototypes of this segment's own functions
extern "C" s32 InsectPool_Draw(void *a, Rec *o, s32 n);
extern "C" u32 HeldInsect_GetStage(s32 idx);
extern "C" void HeldInsect_Release(s32 idx, s32 v);
extern "C" BOOL Insect_UsesCollisionMove(void *a, Rec *o);
extern "C" void HeldInsect_UpdateAll(void *a);
extern "C" void SpecialInsect_UpdateAll(void *a);
extern "C" BOOL Insect_IsTreeStillThere(void *a, Rec *o);
extern "C" BOOL Insect_IsNetKindMismatch(void *a, Rec *o, s32 c, s32 d, s32 e);
extern "C" void FieldInsect_UpdateAll(void *a);
}

#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
struct Unk_ov003_02227cd0_Vec {
    s32 x, y, z;
};

typedef Unk_ov003_02227cd0_Vec Vec3;

struct Unk_ov003_02227cd0_Blk {
    s64 v[6];
};

struct Unk_ov003_02234b04_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
};

// One 0x25c-byte entry of the table at sFieldInsects (8 entries)
struct Unk_ov003_02227cd0_Rec {
    u8 unk_00[8];                      // 0x00
    s32 unk_08;                        // 0x08
    u8 unk_0c[0x18 - 0x0c];            // 0x0c
    s32 *unk_18;                       // 0x18
    u8 unk_1c[0x20 - 0x1c];            // 0x1c
    u8 unk_20[0x50 - 0x20];            // 0x20
    u8 unk_50[0x9c - 0x50];            // 0x50
    u8 unk_9c[0xec - 0x9c];            // 0x9c
    u32 unk_ec[(0xf4 - 0xec) / 4];     // 0xec
    u32 unk_f4;                        // 0xf4
    u32 unk_f8[(0x108 - 0xf8) / 4];    // 0xf8
    u8 unk_108[0x130 - 0x108];         // 0x108
    u8 unk_130[0x170 - 0x130];         // 0x130
    void (*unk_170)(Unk_ov003_02227cd0_Rec *);  // 0x170
    u8 unk_174[0x204 - 0x174];         // 0x174
    Vec3 unk_204;                      // 0x204
    Vec3 unk_210;                      // 0x210
    s32 unk_21c;                       // 0x21c
    u8 unk_220[4];                     // 0x220
    s32 unk_224;                       // 0x224
    u8 unk_228[0x230 - 0x228];         // 0x228
    u8 unk_230[2];                     // 0x230
    s16 unk_232;                       // 0x232
    s16 unk_234;                       // 0x234
    s16 unk_236;                       // 0x236
    u8 unk_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[0x249 - 0x23c];         // 0x23c
    u8 unk_249;                        // 0x249
    u8 unk_24a[3];                     // 0x24a
    s8 unk_24d;                        // 0x24d
    u8 unk_24e[2];                     // 0x24e
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 unk_256[2];                     // 0x256
    u8 unk_258;                        // 0x258
    u8 unk_259[3];                     // 0x259
};

typedef Unk_ov003_02227cd0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

class Unk_ov003_02227f20_Slot {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual BOOL vfunc_ac();
};

struct Unk_ov003_022283d0_Own {
    u8 unk_00[0x50];
    u8 unk_50[0x18];
    u8 unk_68[0x18];
    u8 unk_80[0x18];
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov003_02234c6c_Ent {
    void (*unk_00)(Rec *);
    u32 unk_04;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern Unk_ov003_02234c6c_Ent sInsectBehaviours[];
extern Rec sFieldInsects[];
extern u8 sInsectSpawnTimer;
extern u8 sAntSpawnEnabled;
extern Unk_ov003_02234b04_Rec sInsectModelParams[];
extern void *gCurrentHeap;
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 PlayerActor_GetSlotPosXZ(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
void *func_02095204(s32 a);
Unk_ov003_02227f20_Slot *NpcRegistry_FindVillager(s32 i);
s32 func_020e9650(void *a, void *b);
void func_ov068_022687c0(void *p);
BOOL File_Exists(char *s);
s32 func_020639e8(char *buf, char *fmt, ...);
void func_020309d4(void *obj, void *pos, void *prev, s32 a, s32 b, s32 c, s32 d);
void func_02088b20(void *obj, void *v, s32 a, s32 b, s32 flags);
void Unk_02003c40_callUpdateRelative(void *obj, void *v);
void Unk_02003c30_callReset(void *obj);
void AnimModel_stepAnim(void *obj);
void AnimFrameCtrl_step(void *e);
void func_02133ef8(void *p, s32 n);
void *func_0209c25c(void *sub, void *p);
BOOL func_0209c0d0(void *p, void *h, char *path);
void *func_0209c0ac(void *p);
void Model_setResource(void *o, void *a, s32 b);
void *func_0209c348(void *h);
void *File_LoadAlloc(char *path, void *h, s32 a, s32 b);
s32 func_02106788(void *r);
s32 func_021067a4(s32 a, s32 b);
s32 func_021065dc(void *r);
s32 func_021065f8(s32 a, s32 b);
BOOL AnimModel_allocAnmObj(void *o, void *h);
void BlendAnimModel_initAnim(void *o, s32 m, s32 a, s32 b, s32 c, s32 d);
void AnimModel_attachAnim(void *o);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
BOOL ModelAnim_allocMatAnm(Rec *e, void *a, void *b);
void ModelAnim_init(Rec *e, s32 m, s32 a, s32 b, s32 c);
void *Model_getRenderObj(void *o);
void ModelAnim_addToRenderObj(Rec *e, void *a);
void FieldInsect_PurgeStale();
BOOL Insect_PickSpecialSpawn(s8 *a, s8 *b, s32 c);
BOOL PlayerActor_TestSlotFlag9(s32 a);
s32 Insect_TrySpawnRandom(void *a, s32 b, s32 c, s32 d);
s32 Insect_Spawn(void *a, s32 kind, u32 sub, s32 flag);
void InsectPool_UpdateInView(void *a, s32 b);
void InsectPool_UpdateInViewOfPlayer(void *a, s32 flag, s32 idx, s32 x, s32 z);
void Insect_SetModelMatrix(void *a, Rec *e, s32 flag);
void Insect_TickFrame(Rec *e);
s32 Insect_UsesCollisionMove(void *a, Rec *e);
void HeldInsect_UpdateAll(void *a);
void SpecialInsect_UpdateAll(void *a);
void FieldInsect_UpdateAll(void *a);
s32 Insect_Despawn(Rec *e);
void func_ov003_022287c8(void *a, Rec *e, s32 v);
}

// prototypes of this segment's own functions
extern "C" void Insect_UpdateSpawning(void *self);
extern "C" s32 FieldInsect_GetPosAndKind(Vec3 *out, u32 idx);
extern "C" BOOL FieldInsect_IsTreeKind(u32 idx);
extern "C" s32 FieldInsect_GetKindAndAlarm(u8 *out, u32 idx);
extern "C" void Insect_CheckDisturbance(void *a, Rec *e);
extern "C" void Insect_UpdateHideTimer(void *a, Rec *e);
extern "C" void Insect_Update(void *a, Rec *e, s32 flags, s32 kind);
extern "C" void Insect_LoadModel(Unk_ov003_022283d0_Own *a, Rec *e, s32 mode);
}

#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
extern "C" {
extern u32 *gCommManager[];
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0205c088();
void func_0205c06c();
void func_0205c0f0();
void func_0205c0d4();
void func_0205c0bc();
void func_0205c0a0();
BOOL CommManager_isSlotActive(void *p, u32 v);
void InsectSpawn_BuildMasks();
void func_02041868();
void AnimModel_detachAnim(void *p);
void Unk_02003c30_callRelease(void *p);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
void func_0209c224(void *p, void *q);
void func_0209c25c(void *p, void *q);
void *func_0209c0ac(void *p);
s32 NNS_G3dMdlSetMdlAlpha(void *p, s32 a, s32 b);
s32 func_02063b8c(s32 n);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
s16 Insect_RandomAngle();
void Insect_InitBehaviour(Unk_ov003_02228710_Act *a, s32 v1, s32 v2, s32 v3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5);
void Insect_InitFlutter(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 s0, s32 s1);
s32 Insect_SetWanderBox(Unk_ov003_02228710_Act *a);
s32 Insect_PlaceOnPlantSide(Unk_ov003_02228710_Act *a);
void TreeBug_Update(Unk_ov003_02228710_Act *a);
void Insect_InitTreeBug(Unk_ov003_02228710_Act *a);
void DungBeetle_Update(Unk_ov003_02228710_Act *a);
void Ant_Update(Unk_ov003_02228710_Act *a);
void Stinger_Update(Unk_ov003_02228710_Act *a);
void Spider_Update(Unk_ov003_02228710_Act *a);
void Flea_Update(Unk_ov003_02228710_Act *a);
void Hoverer_Update(Unk_ov003_02228710_Act *a);
void Bee_Update(Unk_ov003_02228710_Act *a);
void PillBug_Update(Unk_ov003_02228710_Act *a);
void MoleCricket_Update(Unk_ov003_02228710_Act *a);
void Crawler_Update(Unk_ov003_02228710_Act *a);
void Pondskater_Update(Unk_ov003_02228710_Act *a);
void Dragonfly_Update(Unk_ov003_02228710_Act *a);
void Insect_InitOnPlant(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, s16 w);
void Insect_InitDragonflyParams(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 p4, u8 p5);
}

// prototypes of this segment's own functions
extern "C" void Insect_UpdateKind38(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitKind38(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateDungBeetle(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateAnt(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateStinger(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateSpider(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateFlea(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateFly(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateHoneybee(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateBee(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdatePillBug(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateMoleCricket(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateCrawler(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdatePondskater(Unk_ov003_02228710_Act *a);
extern "C" void Insect_UpdateDragonfly(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitDungBeetle(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitAnt(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitScorpion(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitTarantula(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitSpider(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitFlea(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitFly(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitHoneybee(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitBee(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitBurrower(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitCrawler(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitOnPlant(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, s16 w);
extern "C" void Insect_InitPondskater(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitDragonfly(Unk_ov003_02228710_Act *a);
extern "C" void Insect_InitDragonflyParams(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 p4, u8 p5);
extern "C" // factory (allocates 0xa0 bytes)
void *InsectManager_Create();
}

#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
struct Unk_ov003_02229050_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02229050_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02229698_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_02229050_Rec {
    u8 unk_00[0xec];                   // 0x00
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_02229050_Bits unk_f0;    // 0xf0
    Unk_ov003_02229050_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x80];                  // 0x130
    Unk_ov003_02229050_Vec unk_1b0;    // 0x1b0
    Unk_ov003_02229050_Vec unk_1bc;    // 0x1bc
    u8 unk_1c8[0x1d4 - 0x1c8];         // 0x1c8
    Unk_ov003_02229050_Vec unk_1d4;    // 0x1d4
    Unk_ov003_02229050_Vec unk_1e0;    // 0x1e0
    u8 unk_1ec[0x204 - 0x1ec];         // 0x1ec
    Unk_ov003_02229050_Vec unk_204;    // 0x204
    Unk_ov003_02229050_Vec unk_210;    // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    s32 unk_224;                       // 0x224
    s32 unk_228;                       // 0x228
    u8 unk_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 unk_234[2];                     // 0x234
    u16 unk_236;                       // 0x236
    s16 unk_238;                       // 0x238
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[2];                     // 0x23c
    u16 unk_23e;                       // 0x23e
    u8 unk_240[4];                     // 0x240
    s16 unk_244;                       // 0x244
    u8 unk_246;                        // 0x246
    u8 unk_247[5];                     // 0x247
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    u8 unk_24e;                        // 0x24e
    u8 unk_24f;                        // 0x24f
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252;                        // 0x252
    u8 unk_253;                        // 0x253
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 unk_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 unk_258;                        // 0x258
    u8 unk_259;                        // 0x259
};

typedef Unk_ov003_02229050_Rec Rec;

typedef Unk_ov003_02229050_Vec Vec3;

typedef Unk_ov003_02229698_Buf Buf;

extern "C" {
s32 func_02063b8c(s32 a);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(void *a, void *b, void *out);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void AnimModel_setFrame(void *p, s32 v);
void func_020339bc(Buf *b, void *pos, s32 a, s32 c);
void func_02033988(Buf *b);
void *func_0209c0ac(void *p);
s32 NNS_G3dMdlSetMdlAlpha(void *p, s32 a, s32 b);
s32 Insect_SetAnimSpeed(Rec *self, s32 a);
void TreeBug_Update(Rec *self);
void Mosquito_Update(Rec *self);
void Firefly_Update(Rec *self);
void Moth_Update(Rec *self);
void Hopper_Update(Rec *self);
void Butterfly_Update(Rec *self);
s32 Insect_CheckObstacle(Rec *self, s32 a, s32 b);
void Insect_GetDirVec(Vec3 *out, s32 a);
void Insect_FlapWings(Rec *self);
void Insect_PlaySe(Rec *self, s32 a, s32 b);
s32 Insect_FadeOut(Rec *self, s32 a);
s32 Insect_EscapeRun(Rec *self, s16 *cnt);
void Insect_InitHopper(Rec *self);
void Insect_UpdateHopper(Rec *self);
void Insect_InitHop(Rec *self, s32 a, s32 b, s32 c, u8 d);
void Insect_InitTreeBug(Rec *self);
void Insect_UpdateTreeBug(Rec *self);
void Insect_PlaceOnTrunk(Rec *self, s32 a, s32 b, s32 c, s32 d);
void Insect_UpdateMosquito(Rec *self);
void Insect_InitMosquito(Rec *self);
void Insect_UpdateFirefly(Rec *self);
void Insect_InitFirefly(Rec *self);
void Insect_InitMoth(Rec *self);
void Insect_UpdateMoth(Rec *self);
void Insect_InitButterfly(Rec *self);
void Insect_InitFlutter(Rec *self, s32 a, s32 b, s32 c, u8 d, s32 e);
void Insect_UpdateButterfly(Rec *self);
s16 Insect_RandomAngle();
void Insect_InitBehaviour(Rec *self, s16 a1, s32 a2, s32 a3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5);
void Crawler_Escape(Rec *self, s16 *pp);
void Insect_Despawn(Rec *self);
void Insect_SetWanderBox(Rec *self);
}

// prototypes of this segment's own functions
extern "C" void Insect_InitHopper(Rec *self);
extern "C" void Insect_UpdateHopper(Rec *self);
extern "C" void Insect_InitHop(Rec *self, s32 a, s32 b, s32 c, u8 d);
extern "C" void Insect_InitTreeBug(Rec *self);
extern "C" void Insect_UpdateTreeBug(Rec *self);
extern "C" void Insect_PlaceOnTrunk(Rec *self, s32 a, s32 b, s32 c, s32 d);
extern "C" void Insect_UpdateMosquito(Rec *self);
extern "C" void Insect_InitMosquito(Rec *self);
extern "C" void Insect_UpdateFirefly(Rec *self);
extern "C" void Insect_InitFirefly(Rec *self);
extern "C" void Insect_InitMoth(Rec *self);
extern "C" void Insect_UpdateMoth(Rec *self);
extern "C" void Insect_InitButterfly(Rec *self);
extern "C" void Insect_InitFlutter(Rec *self, s32 a, s32 b, s32 c, u8 d, s32 e);
extern "C" void Insect_UpdateButterfly(Rec *self);
extern "C" s16 Insect_RandomAngle();
extern "C" void Insect_InitBehaviour(Rec *self, s16 a1, s32 a2, s32 a3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5);
extern "C" void Crawler_Escape(Rec *self, s16 *pp);
extern "C" void Insect_Despawn(Rec *self);
extern "C" void Insect_SetWanderBox(Rec *self);
}

#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
struct Unk_ov003_02229a3c_V3 {
    s32 x, y, z;
    Unk_ov003_02229a3c_V3() {}
    Unk_ov003_02229a3c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

typedef Unk_ov003_02229a3c_V3 V3;

struct Unk_ov003_02229a3c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entity record (see ov003_058)
struct Unk_ov003_02229a3c_Rec {
    u8 unk_00[0x50];
    u8 unk_50[0x9c];
    u8 unk_ec[4];
    Unk_ov003_02229a3c_Bits unk_f0;
    Unk_ov003_02229a3c_Bits unk_f4;
    u8 pad_f8[0x130 - 0xf8];
    u8 unk_130[0x1b0 - 0x130];
    V3 unk_1b0;
    V3 unk_1bc;
    u8 pad_1c8[0x204 - 0x1c8];
    V3 unk_204;
    u8 pad_210[0x21c - 0x210];
    s32 unk_21c;
    u8 pad_220[4];
    s32 unk_224;
    u8 pad_228[0x238 - 0x228];
    u16 unk_238;
    s16 unk_23a;
    u8 pad_23c[0x240 - 0x23c];
    s16 unk_240;
    s16 unk_242;
    u8 pad_244[0x24a - 0x244];
    u8 unk_24a;
    u8 unk_24b;
    u8 pad_24c;
    s8 unk_24d;
    u8 pad_24e;
    u8 unk_24f;
    u8 pad_250;
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 unk_255;
    u8 pad_256;
    u8 unk_257;
    u8 pad_258[4];
};

typedef Unk_ov003_02229a3c_Rec Rec;

extern "C" {
s32 func_02063b8c(s32 n);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_02095204(s32 n);
s32 func_020e9650(void *a, void *b);
s32 AnimFrameCtrl_setup(void *o, s32 a, s32 b, s32 c, s32 d);
void AnimModel_setFrame(void *o, s32 v);
void *TownBlockMap_Get(void);
void FieldPos_ToUnit(s32 *x, s32 *y, void *p);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 Math_AngleXZ(void *a, void *b);
void *func_0209c0ac(void *p);
void NNS_G3dMdlSetMdlAlpha(void *a, s32 b, s32 c);
void Insect_Despawn(Rec *o);
void Crawler_Escape(Rec *o, s16 *p);
void Insect_HopArc(Rec *o, s16 *p);
void Insect_GetDirVec(V3 *v, s32 a);
void Insect_CheckAlarm(Rec *o);
s32 Insect_PlaySe(Rec *o, s32 a, s32 b);
void Insect_UpdateAlarm(Rec *o, s32 *out);
s32 Insect_FadeOut(Rec *o, s32 a);
void Insect_FlapWings(Rec *o);
BOOL Insect_IsOnFlower(void *p);
void Crawler_Wander(Rec *o);
void Crawler_Watch(Rec *o, s16 *p);
}

static inline BOOL Unk_ov003_02229dcc_Chk(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    BOOL f1 = FALSE;
    u32 v = *p;
    if (v <= 5) {
        f1 = TRUE;
    }
    if (f1 == FALSE) {
        if (v < 6 || v > 0xb) {
            f2 = FALSE;
        }
    }
    if (f2 == FALSE) {
        if (v < 0xc || v > 0x11) {
            f3 = FALSE;
        }
    }
    if (f3 == FALSE) {
        if (v < 0x12 || v > 0x19) {
            if (v != 0x1c) {
                f4 = FALSE;
            }
        }
    }
    if (f4 == FALSE) {
        if (v < 0x8a || v > 0x8f) {
            if (v < 0x90 || v > 0x95) {
                if (v < 0x96 || v > 0x9b) {
                    if (v < 0x9c || v > 0xa3) {
                        if (v != 0xa5) {
                            f5 = FALSE;
                        }
                    }
                }
            }
        }
    }
    if (f5 == FALSE) {
        if (v != 0x1a) {
            f6 = FALSE;
        }
    }
    if (f6 == FALSE) {
        if (v != 0xa4) {
            f7 = FALSE;
        }
    }
    if (f7 == FALSE) {
        if (v != 0x1d) {
            f8 = FALSE;
        }
    }
    return f8;
}

// prototypes of this segment's own functions
extern "C" void Insect_PlaceOnPlantSide(Rec *o);
extern "C" void Crawler_Wander(Rec *o);
extern "C" void Crawler_Watch(Rec *o, s16 *p);
extern "C" BOOL Insect_IsOnFlower(void *pp);
extern "C" void Crawler_Update(Rec *o);
extern "C" void TreeBug_CheckAlarm(Rec *o, s16 *p);
extern "C" void Walkingstick_CheckAlarm(Rec *o, s16 *p);
extern "C" void TreeBug_DropAndFly(Rec *o, s16 *p);
}

#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

typedef Unk_ov003_0225980c_V3 V3;

// One 0x25c-byte entry of the tables at sSpecialInsects (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0225980c_Rec {
    u8 unk_00[0x50];
    u8 unk_50[0x9c];       // 0x50 model sub-object
    u8 unk_ec[4];          // 0xec animation sub-object
    s32 unk_f0;
    u32 unk_f4;
    u8 unk_f8[8];
    u8 unk_100;
    u8 pad_101[0x130 - 0x101];
    u8 unk_130[0x1d4 - 0x130];
    V3 unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    V3 unk_204;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    s32 unk_21c;
    u8 pad_220[8];
    s32 unk_228;
    u8 pad_22c[0x232 - 0x22c];
    s16 unk_232;
    u8 pad_234[4];
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u8 pad_23e[4];
    s16 unk_242;
    u8 pad_244[2];
    u8 unk_246;
    u8 pad_247[0x24a - 0x247];
    u8 unk_24a;
    u8 unk_24b;
    u8 unk_24c;
    s8 unk_24d;
    u8 pad_24e[3];
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 pad_255[0x25c - 0x255];
};

typedef Unk_ov003_0225980c_Rec Rec;

struct Unk_ov003_0222abc0_Obj {
    u32 pad_00[12];
    s32 unk_30;
    u32 pad_34[4];
};

extern "C" {
extern s16 data_02135f44[];
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(V3 *dst, V3 *a, V3 *b);
s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void AnimModel_setFrame(void *p, u16 v);
s32 func_0209c0ac(void *p);
u32 func_02106020(u32 a, u32 b);
s32 NNS_G3dMdlSetMdlAlpha(s32 p, s32 a, s32 b);
void FieldPos_ToUnit(s32 *x, s32 *y, void *p);
void *TownBlockMap_Get(void);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_020a62a0(void);
void func_020339bc(Unk_ov003_0222abc0_Obj *o, V3 *p, s32 a, s32 b);
s32 func_020338d0(Unk_ov003_0222abc0_Obj *o, s32 v);
void func_02033988(Unk_ov003_0222abc0_Obj *o);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 Math_AngleXZ(V3 *a, V3 *b);
void Insect_GetDirVec(V3 *out, s32 ang);
void Insect_PlaySe(Rec *self, s32 a, s32 b);
s32 Insect_CheckObstacle(Rec *self, s32 a, s32 b);
s32 Insect_FadeOut(Rec *self, s32 a);
void Insect_Despawn(Rec *self);
void Insect_SplashIfWater(Rec *self);
s32 Insect_SteerAroundObstacle(Rec *self);
s32 Insect_SetMoveTarget(Rec *self, s32 a, s32 b);
void Walkingstick_CheckAlarm(Rec *self, s16 *cnt);
void TreeBug_CheckAlarm(Rec *self, s16 *cnt);
void TreeBug_DropAndFly(Rec *self, s16 *cnt);
void Insect_EscapeRun(Rec *self, s16 *cnt);
void Insect_HopArc(Rec *self, s16 *cnt);
s32 func_ov068_02269a28(Rec *self);
s32 func_ov068_02269aa4(Rec *self);
}

static inline BOOL Unk_ov003_0222a8d0_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

// prototypes of this segment's own functions
extern "C" void TreeBug_FlyOff(Rec *self, s16 *cnt);
extern "C" void TreeBug_Wiggle(Rec *self, s16 *cnt);
extern "C" void TreeBug_ClimbDown(Rec *self, s16 *cnt);
extern "C" void TreeBug_ClimbUp(Rec *self, s16 *cnt);
extern "C" void TreeBug_Idle(Rec *self, s16 *cnt);
extern "C" void TreeBug_Update(Rec *self);
extern "C" void Spider_Update(Rec *self);
extern "C" void Insect_ClampStepXZ(V3 *out, V3 *in, s32 c);
extern "C" s32 Insect_GroundWalkNet(Rec *self);
}

#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
struct Unk_ov003_0222adc4_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0222adc4_V3 V3;

struct Unk_ov003_0222aff0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_0222aff0_A {
    u8 pad_00[0x9c];
};

struct Unk_ov003_0222aff0_B {
    u8 pad_00[8];
    Unk_ov003_0222aff0_Bits bits;
    u8 pad_0c[0x44 - 0xc];
};

struct Unk_ov003_0222aff0_Sub : Unk_ov003_0222aff0_A, Unk_ov003_0222aff0_B {
};

struct Unk_ov003_0222adc4_Rec {
    u8 unk_00[0x50];                   // 0x00
    Unk_ov003_0222aff0_Sub unk_50;     // 0x50
    u8 unk_130[0x1d4 - 0x130];         // 0x130
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    u8 pad_220[0x228 - 0x220];         // 0x220
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 pad_234[2];                     // 0x234
    s16 unk_236;                       // 0x236
    u8 pad_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 pad_248[2];                     // 0x248
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};

typedef Unk_ov003_0222adc4_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 MenuCtrl_IsMenuOpen();
s32 func_0209c0ac(void *p);
s32 func_02106020(void *a, s32 b);
s32 NNS_G3dMdlSetMdlAlpha(void *p, s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_AngleXZ(void *a, void *b);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void AnimModel_setFrame(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_02063b8c(s32 n);
s32 func_020e7530(s16 *a, s32 b, s32 c);
BOOL PlayerActor_LocalHoldsNet();
s32 PlayerActor_GetStrikeCountdownAt(V3 *a, s32 b);
void Insect_SetScale(Rec *o, s32 v);
void Insect_Despawn(Rec *e);
void TreeBug_FlyOff(Rec *o, s16 *p);
BOOL Insect_GroundWalkNet(Rec *o);
void Insect_EscapeRun(Rec *o, s16 *p);
void Insect_HopArc(Rec *o, s16 *p);
s32 Insect_SteerAroundObstacle(Rec *o);
s32 Insect_RandomTurn(s32 a, s32 b);
void Insect_UpdateAlarm(Rec *o, s32 *out);
s32 Insect_FlyAwayArc(Rec *o, s32 v, u8 *p);
s32 Insect_TickTimer(Rec *o);
s32 Insect_FlutterFlight(Rec *o);
s32 Insect_PlaySe(Rec *o, s32 a, s32 b);
s32 Insect_CheckDigHit(Rec *o, V3 *p);
void Insect_SplashIfWater(Rec *o);
void *Insect_FindNearestPlayer(void *p);
void Insect_SetMoveTarget(Rec *o, s32 a, s32 b);
void Insect_GetDirVec(V3 *v, s32 a);
s32 func_ov068_02269040(Rec *o, s16 *p);
void func_ov068_02269110(Rec *o, s16 *p, s32 r);
void func_ov068_02269b20(Rec *o);
void func_ov068_02269d18(Rec *o);
void func_ov068_0226a004(Rec *o);
}

// prototypes of this segment's own functions
extern "C" BOOL Insect_GroundWalk(Rec *self);
extern "C" BOOL Insect_FadeOut(Rec *self, s32 a);
extern "C" void DungBeetle_Update(Rec *self);
extern "C" void Stinger_Update(Rec *self);
extern "C" void Flea_Update(Rec *self);
extern "C" void Moth_Update(Rec *self);
extern "C" BOOL Insect_CheckRockStrike(Rec *self, s16 *out);
extern "C" void PillBug_Walk(Rec *self);
extern "C" void PillBug_Curled(Rec *self);
}

#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
struct Unk_ov003_0222b6e0_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0222b6e0_V3 V3;

struct Unk_ov003_0222b6e0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_0222b6e0_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[8];                      // 0xec
    Unk_ov003_0222b6e0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x1d4 - 0x130];         // 0x130
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    u8 pad_220[0x228 - 0x220];         // 0x220
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 pad_234[2];                     // 0x234
    s16 unk_236;                       // 0x236
    s16 unk_238;                       // 0x238
    s16 unk_23a;                       // 0x23a
    s16 unk_23c;                       // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 pad_248[2];                     // 0x248
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252;                        // 0x252
    u8 pad_253;                        // 0x253
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};

typedef Unk_ov003_0222b6e0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_0222bb28_V3 : V3 {
    Unk_ov003_0222bb28_V3() {}
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern u8 data_020e12cc[];
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
BOOL func_02031218(s32 x, s32 y);
s32 func_0209c0ac(void *p);
s32 NNS_G3dMdlSetMdlAlpha(void *p, s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_AngleXZ(void *a, void *b);
s32 func_020e9650(void *a, void *b);
void AnimModel_setFrame(void *p, s32 v);
s32 func_02030814(u32 a);
void func_02041868();
void *TownBlockMap_Get();
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_0208fc88(u32 a, void *b, u32 c, void *d);
void Insect_Despawn(Rec *e);
void Crawler_Wander(Rec *o);
BOOL Insect_IsAtWateringPoint(void *p);
BOOL Insect_GroundWalkNet(Rec *o);
BOOL Insect_GroundWalk(Rec *o);
s32 Insect_FadeOut(Rec *o, s32 a);
void Insect_CheckRockStrike(Rec *o, s16 *p);
void PillBug_Walk(Rec *o);
void PillBug_Curled(Rec *o);
s32 Insect_FlyAwayArc(Rec *o, s32 v);
void Insect_FlapWings(Rec *o);
s32 Insect_PlaySe(Rec *o, s32 a, s32 b);
s32 Insect_CheckDigHit(Rec *o, V3 *p);
void Insect_SplashIfWater(Rec *o);
void Insect_UpdateRest(Rec *o);
void *Insect_FindNearestPlayer(void *p);
void Insect_SetMoveTarget(Rec *o, s32 a, s32 b);
void Insect_GetDirVec(V3 *v, s32 a);
s32 Insect_CheckObstacle(Rec *o, s32 a, s32 b);
void func_ov068_02269d58(Rec *o);
void MoleCricket_Burrow(Rec *self, s16 *cnt);
void Insect_EscapeRun(Rec *self, s16 *cnt);
void Insect_HopArc(Rec *self, s16 *cnt);
void MoleCricket_CheckDugUp(Rec *self, s16 *cnt);
}

// prototypes of this segment's own functions
extern "C" void PillBug_Update(Rec *self);
extern "C" s32 Insect_SteerAroundObstacle(Rec *self);
extern "C" void MoleCricket_Burrow(Rec *self, s16 *cnt);
extern "C" void Insect_EscapeRun(Rec *self, s16 *cnt);
extern "C" void Insect_HopArc(Rec *self, s16 *cnt);
extern "C" void MoleCricket_CheckDugUp(Rec *self, s16 *cnt);
extern "C" void MoleCricket_Update(Rec *self);
extern "C" void Ant_Update(Rec *self);
extern "C" void Hoverer_Update(Rec *self);
}

#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
struct Unk_ov003_0222adc4_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0222adc4_V3 V3;

struct Unk_ov003_0222aff0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_0222adc4_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[8];                      // 0xec
    Unk_ov003_0222aff0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x1c8 - 0x130];         // 0x130
    V3 unk_1c8;                        // 0x1c8
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    V3 unk_210;                        // 0x210
    s32 unk_21c;                       // 0x21c
    u8 pad_220[0x224 - 0x220];         // 0x220
    s32 unk_224;                       // 0x224
    u8 pad_228[0x232 - 0x228];         // 0x228
    s16 unk_232;                       // 0x232
    u8 pad_234[2];                     // 0x234
    s16 unk_236;                       // 0x236
    u8 pad_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 pad_248;                        // 0x248
    u8 unk_249;                        // 0x249
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};

typedef Unk_ov003_0222adc4_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_02095204_Obj {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_02063b8c(s32 n);
s32 FX_Div(s32 a, s32 b);
s32 Math_AngleXZ(void *a, void *b);
void AnimModel_setFrame(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_02133150(s32 a, s32 b);
s32 func_020e7d4c(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020e7870(void *a, s32 b, s32 c, s32 d, s32 e);
s32 func_020e9650(void *a, void *b);
Unk_02095204_Obj *func_02095204(u32 n);
void Insect_SetAnimSpeed(Rec *o, s32 a);
void Crawler_Escape(Rec *o, s16 *p);
void Insect_Despawn(Rec *e);
void TreeBug_FlyOff(Rec *o, s16 *p);
s32 Insect_FadeOut(Rec *o, s32 a);
s32 Insect_TurnToTarget(Rec *o, s32 a);
s32 Insect_ReflectAngle(s32 a, void *b);
s32 Insect_FlyAwayArc(Rec *o, s32 v);
s32 Insect_FlapWings(Rec *o);
s32 Insect_CheckAlarm(Rec *o);
s32 Insect_FlutterBob(Rec *o, s32 a, s32 b, s32 c);
s32 Insect_FlutterSteer(Rec *o, s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 Insect_GetFlutterRange(Rec *o);
s32 Insect_PlaySe(Rec *o, s32 a, s32 b);
void Insect_SplashIfWater(Rec *o);
void Insect_SetMoveTarget(Rec *o, s32 a, s32 b);
void Insect_CheckTurnCount(Rec *o, s32 a);
void *Insect_CheckObstacle(Rec *o, s32 a, s32 b);
void func_ov068_02269250(Rec *o);
void func_ov068_022694c0(Rec *o);
void func_ov068_022696e4(V3 *p, s32 a);
void func_ov068_02269714(Rec *o);
void func_ov068_022697b8(Rec *o);
void func_ov068_02269840(Rec *o, V3 *p);
void func_ov068_0226a2dc(Rec *o, s16 *p);
void func_ov068_0226a320(Rec *o, s16 *p);
void func_ov068_0226a3d4(Rec *o, s16 *p);
void func_ov068_0226a6ac(Rec *o, u8 *a, s32 *out);
}

namespace Unk_ov003_0222c7fc_Ns {
extern "C" void Insect_AccumAlarm(Rec *o, V3 *out, s32 *dist, u8 *flag, s32 a, s32 b);
}

// prototypes of this segment's own functions
extern "C" void Bee_Update(Rec *o);
extern "C" void Firefly_Wander(Rec *o);
extern "C" void Firefly_Update(Rec *o);
extern "C" void Mosquito_Update(Rec *o);
extern "C" void Pondskater_Update(Rec *o);
extern "C" void Cricket_Chirp(Rec *o);
extern "C" void Locust_PlaySe(Rec *o);
extern "C" void *Hopper_CheckObstacle(Rec *o, s16 *p);
extern "C" void Hopper_Jump(Rec *o);
extern "C" s16 Insect_RandomTurn(s32 a, s32 b);
extern "C" void Hopper_Rest(Rec *o, s16 *p);
extern "C" void Hopper_Update(Rec *o);
extern "C" s32 Insect_UpdateAlarm(Rec *o, s32 *out);
extern "C" void Insect_AccumAlarm(Rec *o, V3 *out, s32 *dist, u8 *flag, u8 a, u8 b);
}

#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
struct Unk_ov003_0222c9e0_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0222c9e0_V3 V3;

struct Unk_ov003_0222c9e0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0222c9e0_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xf4 - 0x50];            // 0x50
    Unk_ov003_0222c9e0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x1d4 - 0xf8];           // 0xf8
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    u32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 pad_224[4];                     // 0x224
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x23a - 0x22c];         // 0x22c
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246[0x24a - 0x246];         // 0x246
    u8 unk_24a;                        // 0x24a
    u8 pad_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    u8 pad_24e;                        // 0x24e
    u8 unk_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 pad_252[0x256 - 0x252];         // 0x252
    u8 unk_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258;                        // 0x258
    u8 unk_259;                        // 0x259
    u8 pad_25a[0x25c - 0x25a];         // 0x25a
};

typedef Unk_ov003_0222c9e0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(V3 *dst, V3 *a, V3 *b);
s32 Math_AngleXZ(V3 *a, V3 *b);
s32 func_02063b8c(s32 n);
s32 func_02133150(s32 a, s32 b);
void AnimModel_setFrame(void *p, s32 v);
void FieldPos_ToUnit(s32 *x, s32 *y, void *p);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_020e7d4c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_020e7870(s32 *a, s32 b, s32 c, s32 d, s32 e);
s32 Insect_RandomTurn(u8 a, s32 b);
void Insect_Despawn(Rec *self);
s32 Insect_FadeOut(Rec *self, s32 a);
void Insect_FlapWings(Rec *self);
void Insect_CheckAlarm(Rec *self);
s32 Insect_TickTimer(Rec *self);
s32 Insect_SetMoveTarget(Rec *self, s32 a, s32 b);
void Insect_CheckTurnCount(Rec *self, s32 a);
void Insect_GetDirVec(V3 *out, s32 ang);
s32 Insect_CheckObstacle(Rec *self, s32 a, s32 b);
void func_ov068_0226a1a0(Rec *self);
void func_ov068_0226a4f0(Rec *self);
}

extern "C" {
enum Unk_ov003_0222d1f0_K { K_300 = 0x300 };
}

// prototypes of this segment's own functions
extern "C" s32 Insect_TurnToTarget(Rec *self, u32 a);
extern "C" s32 Insect_ReflectAngle(s32 a, s32 mode);
extern "C" void Dragonfly_CheckObstacle(Rec *self);
extern "C" void Dragonfly_FlyOff(Rec *self, s16 *cnt);
extern "C" void Dragonfly_FlyToTarget(Rec *self);
extern "C" void Dragonfly_Hover(Rec *self, s16 *cnt);
extern "C" void Dragonfly_Update(Rec *self);
extern "C" s32 Insect_GetFlowerSpeciesMask(s32 a);
extern "C" void Insect_FlutterAltitude(Rec *self, s16 *cnt);
extern "C" void Insect_FlyAwayArc(Rec *self, s32 a);
}

#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
struct Unk_ov003_0222d350_Vec {
    s32 x, y, z;
};

typedef Unk_ov003_0222d350_Vec Vec3;

struct Unk_ov003_0222d350_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_0222d350_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_0222d350_Bits unk_f0;    // 0xf0
    Unk_ov003_0222d350_Bits unk_f4;    // 0xf4
    u8 unk_f8[4];                      // 0xf8
    s32 unk_fc;                        // 0xfc
    u8 unk_100[0x1c8 - 0x100];         // 0x100
    Vec3 unk_1c8;                      // 0x1c8
    Vec3 unk_1d4;                      // 0x1d4
    u8 unk_1e0[0x204 - 0x1e0];         // 0x1e0
    Vec3 unk_204;                      // 0x204
    u8 unk_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 unk_224[4];                     // 0x224
    s32 unk_228;                       // 0x228
    u8 unk_22c[0x232 - 0x22c];         // 0x22c
    s16 unk_232;                       // 0x232
    u8 unk_234[0x23a - 0x234];         // 0x234
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[0x240 - 0x23c];         // 0x23c
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 unk_246[0x24a - 0x246];         // 0x246
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    u8 unk_24e;                        // 0x24e
    u8 unk_24f;                        // 0x24f
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252;                        // 0x252
    u8 unk_253;                        // 0x253
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 unk_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 unk_258[0x25c - 0x258];         // 0x258
};

typedef Unk_ov003_0222d350_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern s16 data_02135f44[];
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
void *func_02095204(u32 a);
s32 Math_AngleXZ(void *a, void *b);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(void *a, void *b, void *out);
void VEC_Subtract(void *a, void *b, void *out);
void func_020e9960(Vec3 *out, void *a, void *b);
s32 func_020e9688(Vec3 *v);
s32 func_020e7d4c(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_021329d0(s32 a);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void AnimModel_setFrame(void *p, s32 v);
s32 func_02063b8c(s32 n);
s32 Insect_SetAnimSpeed(Rec *self, s32 a);
s32 Insect_ClampStepXZ(Vec3 *a, Vec3 *b, s32 c);
s32 Insect_RandomTurn(s32 a, s32 b);
s32 Insect_UpdateAlarm(Rec *self, Vec3 *out);
s32 Insect_ReflectAngle(s32 a, s32 b);
s32 Insect_FlutterAltitude(Rec *self, s16 *p);
s32 Insect_FlyAwayArc(Rec *self, s32 v);
s32 Insect_UpdateRest(Rec *self);
s32 Insect_FindNearestPlayer(void *p);
s32 Insect_SetMoveTarget(Rec *self, s32 a, s32 b);
void Insect_GetDirVec(Vec3 *out, s32 a);
s32 Insect_CheckObstacle(Rec *self, s32 a, s32 b);
s32 func_ov068_022687e8(Rec *self, Vec3 *p);
void func_ov068_02268864(Rec *self, s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov068_02268b70(Rec *self, s16 *p);
s32 func_ov068_02269f60(Rec *self, s16 *p, Vec3 *out);
}

extern "C" {
BOOL Insect_TickTimer(Rec *self);
void Insect_FlutterFlight(Rec *self);
void Butterfly_Update(Rec *self);
void Insect_FlapWings(Rec *self);
void Insect_FleeIfAlarmed(Rec *self, Vec3 *p);
s32 Insect_CheckAlarm(Rec *self);
void Insect_FlutterBob(Rec *self, s32 a, s32 b, s32 c);
void Insect_FlutterSteer(Rec *self, s16 *p, s32 a, s32 b, u8 e, s32 f);
s32 Insect_GetFlutterTargetSpeed(Rec *self);
s32 Insect_GetFlutterRange(Rec *self);
s32 Insect_GetFlutterLeash(Rec *self);
void Insect_SetFlutterTurnDelay(Rec *self);
void Insect_FlutterPullBack(Rec *self, Vec3 *p, s32 a);
s32 Insect_GetSeId(s32 a, s32 b);
}

static inline BOOL Gt(s32 a, s32 b) {
    if (a > b) return TRUE;
    return FALSE;
}

// prototypes of this segment's own functions
extern "C" BOOL Insect_TickTimer(Rec *self);
extern "C" void Insect_FlutterFlight(Rec *self);
extern "C" void Butterfly_Update(Rec *self);
extern "C" void Insect_FlapWings(Rec *self);
extern "C" void Insect_FleeIfAlarmed(Rec *self, Vec3 *p);
extern "C" s32 Insect_CheckAlarm(Rec *self);
extern "C" void Insect_FlutterBob(Rec *self, s32 a, s32 b, s32 c);
extern "C" void Insect_FlutterSteer(Rec *self, s16 *p, s32 a, s32 b, u8 e, s32 f);
extern "C" s32 Insect_GetFlutterTargetSpeed(Rec *self);
extern "C" s32 Insect_GetFlutterRange(Rec *self);
extern "C" s32 Insect_GetFlutterLeash(Rec *self);
extern "C" void Insect_SetFlutterTurnDelay(Rec *self);
extern "C" void Insect_FlutterPullBack(Rec *self, Vec3 *p, s32 a);
extern "C" s32 Insect_GetSeId(s32 a, s32 b);
}

#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
struct Unk_ov003_0222dd54_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0222dd54_V3 V3;

struct Unk_ov003_0222dd54_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at sSpecialInsects / 0225980c / 0225a17c
struct Unk_ov003_0222dd54_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_0222dd54_Bits unk_f0;    // 0xf0
    Unk_ov003_0222dd54_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x174 - 0xf8];           // 0xf8
    u8 unk_174[0x1d4 - 0x174];         // 0x174
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x1ec - 0x1e0];         // 0x1e0
    V3 unk_1ec[2];                     // 0x1ec
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 pad_224[0x228 - 0x224];         // 0x224
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x23a - 0x22c];         // 0x22c
    s16 unk_23a;                       // 0x23a
    s16 unk_23c;                       // 0x23c
    u8 pad_23e[0x244 - 0x23e];         // 0x23e
    s16 unk_244;                       // 0x244
    u8 pad_246[0x24d - 0x246];         // 0x246
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f[2];                     // 0x24f
    u8 unk_251;                        // 0x251
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 pad_255[0x25c - 0x255];         // 0x255
};

typedef Unk_ov003_0222dd54_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_02095204_Obj {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

extern "C" {
extern Unk_020cbb18_Ptr *gCommManager;
extern s16 data_02135f44[];
extern u8 sHeldInsects[];
extern u8 sSpecialInsects[];
extern u8 sFieldInsects[];
extern u8 sInsectNetSync[];
extern u8 data_ov003_0225b470[];
extern u8 data_ov003_0225b474[];
extern u8 data_ov003_0225b475[];
BOOL CommManager_isSlotActive(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_02063b8c(s32 n);
void AnimModel_setFrame(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
Unk_02095204_Obj *func_02095204(u32 n);
s32 Unk_02003c40_callRequest(void *p, s32 v);
s32 Unk_02003c40_callRequestSustained(void *p, s32 v);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
s32 Flower_GetColor(s32 a);
s32 Flower_GetSpecies(s32 a);
void AnimFrameCtrl_setup(void *p, u32 a, s32 b, s32 c, u32 d);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
s32 func_020312a8(s32 x, s32 y);
void func_020e93a0(V3 *o, s32 a);
BOOL CommManager_isOnline(void *g);
u8 *CommManager_getSyncVar(void *g, s32 a);
void NetBuf_UnpackPair20(void *p, s32 *a, s32 *b);
void NetBuf_PackPair20(void *p, s32 a, s32 b);
s32 CommSyncVar_GetVarSize(s32 a);
void MI_CpuCopy8(void *, void *, s32);
void *__cxa_vec_cleanup(void *, s32, s32, void *(*)(void *));
s32 Insect_GetSeId(s32 a);
s32 PlayerActor_GetDigCountdownAt(s32 a, s32 b);
void Insect_CheckAlarm(Rec *o);
s32 Insect_TickTimer(Rec *o);
void Crawler_Wander(Rec *o);
s32 Insect_IsOnFlower(V3 *p);
void Insect_SetFlutterTurnDelay(Rec *o);
void *func_ov003_02225ed0(void *p);
}

// prototypes of this segment's own functions
extern "C" s32 Insect_PlaySe(Rec *o, s32 a, s32 b);
extern "C" BOOL Insect_CheckDigHit(Rec *o, s32 a);
extern "C" BOOL Insect_SplashIfWater(Rec *o);
extern "C" BOOL Insect_LikesFlower(s32 a, s32 b);
extern "C" void Insect_UpdateRest(Rec *o);
extern "C" Unk_02095204_Obj *Insect_FindNearestPlayer(V3 *pos);
extern "C" BOOL Insect_SetGroundMoveTarget(Rec *o, u32 ang, s32 n);
extern "C" BOOL Insect_SetMoveTarget(Rec *o, u32 ang, s32 d);
extern "C" void Insect_CheckTurnCount(Rec *o, s32 n);
extern "C" BOOL Insect_IsOverWater(s32 v);
extern "C" void Insect_GetDirVec(V3 *o, s32 a);
extern "C" BOOL Insect_SetFeelers(Rec *o, s32 a, s32 b);
extern "C" u32 Insect_TestFeelersHole(Rec *o);
extern "C" u32 Insect_TestFeelers(Rec *o);
extern "C" s32 Insect_CheckObstacle(Rec *o, s32 a, s32 b);
}

#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e500
extern "C" s32 Insect_CheckObstacle(Rec *o, s32 a, s32 b) {
    if (!CommManager_isSlotActive(gCommManager, gCommManager->unk_64) || func_020a62a0() || o->unk_251 == 9 || o->unk_251 == 0xb) {
        Insect_SetFeelers(o, a, b);
        if ((u8)(s8)(o->unk_24d - 0x36) <= 1 && o->unk_251 == 4) {
            return Insect_TestFeelersHole(o);
        }
        return Insect_TestFeelers(o);
    }
    return 0;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e494
extern "C" u32 Insect_TestFeelers(Rec *o) {
    u8 r = 0;
    V3 *p = &o->unk_1ec[0];
    s32 y = o->unk_204.y;
    Unk_0203398c g0;
    Unk_0203398c g1;
    g0.func_020339bc((Unk_0203389c_Vec *)(p), 0, 0);
    if (g0.func_02033914(1) > y) r++;
    g1.func_020339bc((Unk_0203389c_Vec *)(p + 1), 0, 0);
    if (g1.func_02033914(1) > y) r += 2;
    return r;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e420
extern "C" u32 Insect_TestFeelersHole(Rec *o) {
    u8 r = 0;
    V3 *p = &o->unk_1ec[0];
    s32 y = o->unk_204.y;
    Unk_0203398c g0;
    Unk_0203398c g1;
    s32 v;
    g0.func_020339bc((Unk_0203389c_Vec *)(p), 0, 0);
    v = g0.func_02033914(1);
    if (v < 0 || v > y) r++;
    g1.func_020339bc((Unk_0203389c_Vec *)(p + 1), 0, 0);
    v = g1.func_02033914(1);
    if (v < 0 || v > y) r += 2;
    return r;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e33c
extern "C" BOOL Insect_SetFeelers(Rec *o, s32 a, s32 b) {
    V3 *out;
    V3 *pos = &o->unk_204;
    s32 h;
    if (o->unk_24d == 0x35) {
        h = o->unk_23c;
    } else {
        h = o->unk_23a;
    }
    out = &o->unk_1ec[0];
    *out = *pos;
    s32 i = ((u16)(s16)(h + b) >> 4) * 2;
    out->x += func_02133150(a * data_02135f44[i], 100);
    out->z += func_02133150(a * data_02135f44[i + 1], 100);
    out[1] = *pos;
    s32 j = ((u16)(s16)(h - b) >> 4) * 2;
    out[1].x += func_02133150(a * data_02135f44[j], 100);
    out[1].z += func_02133150(a * data_02135f44[j + 1], 100);
    return TRUE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e328
extern "C" void Insect_GetDirVec(V3 *o, s32 a) {
    o->x = 0;
    o->y = 0;
    o->z = 0x29;
    func_020e93a0(o, a);
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e2fc
extern "C" BOOL Insect_IsOverWater(s32 v) {
    s32 x = 0;
    s32 y = 0;
    FieldPos_ToUnit(&x, &y, v);
    if (func_020312a8(x, y)) return TRUE;
    return FALSE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e2e0
extern "C" void Insect_CheckTurnCount(Rec *o, s32 n) {
    s32 t = o->unk_21c & 0xf;
    if (t > n) o->unk_251 = 9;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e1e0
extern "C" BOOL Insect_SetMoveTarget(Rec *o, u32 ang, s32 d) {
    V3 *dst;
    V3 *src;
    switch (o->unk_24d) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 0x25:
        return Insect_SetGroundMoveTarget(o, ang, (u8)(d >> 12));
    case 0x1e:
    case 0x31:
        return Insect_SetGroundMoveTarget(o, ang, (u8)(d >> 12));
    case 0xc: case 0xd:
    case 0x1b: case 0x1c: case 0x1d:
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            return Insect_SetGroundMoveTarget(o, ang, (u8)(d >> 12));
        }
    default:
        break;
    }
    dst = &o->unk_1d4;
    src = &o->unk_204;
    s32 idx = ((u16)ang >> 4) * 2;
    dst->x = src->x + func_01ffcb0c(d, data_02135f44[idx]);
    dst->z = src->z + func_01ffcb0c(d, data_02135f44[idx + 1]);
    return TRUE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e0f0
extern "C" BOOL Insect_SetGroundMoveTarget(Rec *o, u32 ang, s32 n) {
    s32 lim;
    u8 i;
    s32 sx;
    s32 sz;
    V3 *dst;
    s32 n1;
    V3 *src;
    BOOL bad;
    s32 idx = ((u16)ang >> 4) * 2;
    sx = data_02135f44[idx];
    sz = data_02135f44[idx + 1];
    dst = &o->unk_1d4;
    src = &o->unk_204;
    lim = src->y;
    if (lim < func_02030814(0)) lim = func_02030814(0);
    i = 1;
    n1 = n + 1;
    for (; i < n1; i++) {
        V3 t;
        s32 off = i << 12;
        t.x = src->x + func_01ffcb0c(off, sx);
        t.z = src->z + func_01ffcb0c(off, sz);
        {
            Unk_0203398c g;
            g.func_020339bc((Unk_0203389c_Vec *)(&t), 0, 0);
            if (g.func_02033914(1) > lim) {
                bad = 1;
            } else {
                bad = 0;
            }
        }
        if (bad != 0) break;
    }
    u8 c = i - 1;
    if (c != 0) {
        s32 f = c << 12;
        dst->x = src->x + func_01ffcb0c(f, sx);
        dst->z = src->z + func_01ffcb0c(f, sz);
        Insect_SetFlutterTurnDelay(o);
        return TRUE;
    }
    return FALSE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222e098
extern "C" Unk_02095204_Obj *Insect_FindNearestPlayer(V3 *pos) {
    Unk_02095204_Obj *best = 0;
    s32 bestd = 0xfffffff;
    u8 i;
    for (i = 0; i < 4; i++) {
        s32 dx, dz, d;
        Unk_02095204_Obj *p;
        V3 *q;
        p = func_02095204(i);
        if (p != 0) {
            q = &p->unk_5c;
            dx = pos->x - p->unk_5c.x;
            if (dx < 0) dx = -dx;
            dz = pos->z - q->z;
            if (dz < 0) dz = -dz;
            d = dx + dz;
            if (d < bestd) {
                bestd = d;
                best = p;
            }
        }
    }
    return best;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222df80
extern "C" void Insect_UpdateRest(Rec *o) {
    Insect_CheckAlarm(o);
    if (Insect_TickTimer(o) == 0) {
        s32 st = o->unk_24d;
        if (st == 0xa || st == 0x33) {
            if (o->unk_f4.mid != 0) AnimModel_setFrame(o->unk_50, 0);
            Crawler_Wander(o);
        } else if (st == 0x33) {
        } else {
            if (Insect_IsOnFlower(&o->unk_204) == 0) o->unk_254 = 0xfe;
            if (o->unk_f0.mid < 0xc) {
                AnimFrameCtrl_setup(o->unk_ec, 0x11, 1, 0x1000, 9);
            } else if (o->unk_f4.mid == 0x10) {
                if (func_02063b8c(100) > 0x5f) {
                    AnimFrameCtrl_setup(o->unk_ec, 0x11, 1, 0x1000, 9);
                }
            }
        }
    } else {
        o->unk_251 = 0x13;
        o->unk_220 = o->unk_228;
        o->unk_244 = (func_02063b8c(6) + 7) * 20;
        s32 st = o->unk_24d;
        if (st != 0xa && st != 0x33) {
            AnimFrameCtrl_setup(o->unk_ec, 9, 0, o->unk_21c, 0);
        } else {
            AnimModel_setFrame(o->unk_50, 1);
        }
    }
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222dec8
extern "C" BOOL Insect_LikesFlower(s32 a, s32 b) {
    u32 t = Flower_GetColor(b);
    u32 c = Flower_GetSpecies(b);
    if (a == 0xf) {
        if (c == 0 || c == 3) {
            if (t == 2) return TRUE;
        } else if (c == 4 || t == 1) {
            return TRUE;
        }
    } else if (a == 3) {
        if (c == 0) {
            if (t - 5 <= 1) return TRUE;
        } else if (c == 1) {
            if (t == 4 || t == 6) return TRUE;
        } else if (c == 2) {
            if (t == 6) return TRUE;
        } else if (c == 3) {
            if (t - 6 <= 2) return TRUE;
        }
    } else if (a == 2) {
        if (c == 0) {
            if (t == 1 || t == 4) return TRUE;
        } else if (c == 1) {
            if (t == 3) return TRUE;
        } else if (c == 2) {
            if (t == 2 || t == 4) return TRUE;
        } else if (c == 3) {
            if (t == 1 || t == 4) return TRUE;
        }
    }
    return FALSE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222de04
extern "C" BOOL Insect_SplashIfWater(Rec *o) {
    V3 v;
    Unk_0203398c g;
    V3 *pv = &o->unk_204;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    g.func_020339bc((Unk_0203389c_Vec *)(&v), 0, 1);
    if (g.unk_30 != 0) {
        v.y = g.unk_3c + 0x100;
        Unk_02003c40_callRequestSustained(o->unk_174, 0x7e5);
        switch (o->unk_24d) {
        case 0xc:
        case 0xd:
        case 0x1e:
        case 0x1f:
            func_02090330(0x13, &v, 0, 0);
            break;
        case 0x36:
        case 0x37:
            func_02090330(0x14, &v, 0, 0);
            break;
        default:
            func_02090330(0x12, &v, 0, 0);
            break;
        }
        return TRUE;
    }
    return FALSE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222dd90
extern "C" BOOL Insect_CheckDigHit(Rec *o, s32 a) {
    s8 i;
    s8 *p = &o->unk_24e;
    if (*p <= 0) {
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            for (i = 0; i < 4; i++) {
                *p = PlayerActor_GetDigCountdownAt(a, i);
                if (*p > 0) break;
            }
        } else {
            *p = PlayerActor_GetDigCountdownAt(a, 4);
        }
    }
    if (*p > 0) {
        *p = *p - 1;
        if (*p == 0) return TRUE;
    }
    return FALSE;
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_getSyncVar _ZN11CommManager10getSyncVarEj
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov003_02225ed0 _ZN6InsectD1Ev
namespace s14 {
// 0x222dd54
extern "C" s32 Insect_PlaySe(Rec *o, s32 a, s32 b) {
    s32 r = Insect_GetSeId(o->unk_24d);
    if (r >= 0) {
        if (b != 0) {
            Unk_02003c40_callRequest(o->unk_174, r);
        } else {
            Unk_02003c40_callRequestSustained(o->unk_174, r);
        }
    }
}
}
#undef func_02003c40
#undef func_02003c50
#undef func_020547a4
#undef func_0205668c
#undef func_02072970
#undef func_02072e44
#undef func_02072e88
#undef func_02133150
#undef func_ov003_02225ed0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222dbdc
extern "C" s32 Insect_GetSeId(s32 a, s32 b) {
    switch (a) {
    case 51:
        return 0x823;
    case 11: case 58:
        if (b == 0) return 0x830;
        return 0x837;
    case 54:
        if (b == 1) return 0x834;
        return 0x833;
    case 55:
        if (b == 1) return 0x836;
        return 0x835;
    case 10:
        return 0x831;
    case 50:
        return 0x828;
    case 29:
        return 0x825;
    case 27:
        return 0x826;
    case 28:
        return 0x82c;
    case 12:
        return 0x82b;
    case 13:
        return 0x82d;
    case 15: case 25: case 32: case 57:
        return 0x812;
    case 14: case 33: case 34: case 35: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 52:
        return 0x811;
    case 36: case 45: case 46: case 47:
        return 0x810;
    case 20:
        if (b != 0) return 0x811;
        return -1;
    case 16:
        if (b == 0) return 0x822;
        return 0x80f;
    case 17:
        if (b == 0) return 0x827;
        return 0x80f;
    case 18:
        if (b == 0) return 0x82e;
        return 0x80f;
    case 19:
        if (b == 0) return 0x824;
        return 0x80f;
    case 30:
        if (b == 0) return 0x829;
        return 0x82a;
    }
    return -1;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222db74
extern "C" void Insect_FlutterPullBack(Rec *self, Vec3 *p, s32 a) {
    s16 ang;
    Vec3 v;
    Vec3 *r6;
    ang = self->unk_23a;
    v = *p;
    r6 = &self->unk_204;
    func_020e7530(&ang, Math_AngleXZ(r6, p), a);
    self->unk_23a = ang;
    VEC_Subtract(&v, r6, &v);
    Insect_ClampStepXZ(&v, &v, 1);
    VEC_Add(r6, &v, r6);
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222db34
extern "C" void Insect_SetFlutterTurnDelay(Rec *self) {
    switch (self->unk_24d) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 0x25:
        self->unk_253 = 0x14;
        break;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222dae0
extern "C" s32 Insect_GetFlutterLeash(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
    case 2:
    case 3:
        return 0xccd;
    case 4:
        return 0xb33;
    case 5:
        return 0xccd;
    case 6:
        return 0xb33;
    case 7:
    case 0x25:
        return 0xccd;
    }
    return 0;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222da7c
extern "C" s32 Insect_GetFlutterRange(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
        return 0x5000;
    case 2:
    case 3:
        return 0x4600;
    case 4:
        return 0x7800;
    case 5:
    case 6:
        return 0x5000;
    case 7:
        return 0xc800;
    case 0x25:
        return 0x3c00;
    }
    return 0;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222da1c
extern "C" s32 Insect_GetFlutterTargetSpeed(Rec *self) {
    switch (self->unk_24d) {
    case 0:
    case 1:
    case 2:
    case 3:
        return 0xf6;
    case 4:
        return 0x171;
    case 5:
        return 0x1ec;
    case 6:
        return 0x2b8;
    case 7:
        return 0x266;
    case 0x25:
        return 0xcd;
    }
    return 0;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d7d8
extern "C" void Insect_FlutterSteer(Rec *self, s16 *p, s32 a, s32 b, u8 e, s32 f) {
    s32 rnd;
    Vec3 *r6 = &self->unk_1c8;
    Vec3 *r10 = &self->unk_1d4;
    Vec3 *r4 = &self->unk_204;
    s32 hit = Insect_CheckObstacle(self, 0x50, 0xe38);
    u32 flag = self->unk_24b;
    rnd = func_02063b8c(100);
    Vec3 t;
    Vec3 d;
    if (hit != 0) {
        self->unk_23a = Insect_ReflectAngle(self->unk_23a, hit);
        *r6 = *r4;
        {
            s32 q = self->unk_23a;
            Insect_SetMoveTarget(self, q, Insect_GetFlutterRange(self));
        }
        return;
    }
    if (self->unk_24f % b == 0 && rnd > e) {
        self->unk_24b = flag == 0 ? 1 : 0;
    }
    if (rnd > self->unk_252) {
        if (flag != 0) {
            *p = *p + a;
            self->unk_23a = *p;
        } else {
            *p = *p - a;
            self->unk_23a = *p;
        }
    }
    Insect_GetDirVec(&t, *p);
    if (self->unk_24a != 0) {
        s32 m = func_021329d0(0x45a00400);
        r4->x = r4->x + func_01ffcb0c(func_01ffcb0c(f, t.x), m);
        r4->z = r4->z + func_01ffcb0c(func_01ffcb0c(f, t.z), m);
    } else {
        r4->x = r4->x + func_01ffcb0c(f, t.x);
        r4->z = r4->z + func_01ffcb0c(f, t.z);
    }
    func_020e9960(&d, r6, r4);
    s32 len = func_020e9688(&d);
    if (Gt(len, Insect_GetFlutterLeash(self))) {
        Insect_FlutterPullBack(self, r6, 0xaaa);
    }
    {
        s32 k = Insect_GetFlutterTargetSpeed(self);
        if (func_020e7d4c(r6, r10, 0x28, k + 0x19a, Insect_GetFlutterTargetSpeed(self)) == 0) {
            if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
                if (func_020a62a0() == 0) {
                    return;
                }
            }
            u8 *q253 = &self->unk_253;
            if (*q253 == 0) {
                s32 s = self->unk_23a;
                self->unk_23a = s + Insect_RandomTurn(6, 1);
                *r6 = *r4;
                if (self->unk_24a != 0) {
                    void *e2;
                    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
                        e2 = (void *)Insect_FindNearestPlayer(r4);
                    } else {
                        e2 = func_02095204(4);
                    }
                    if (e2 != NULL) {
                        self->unk_23a = Math_AngleXZ((u8 *)e2 + 0x5c, r4);
                    }
                }
                {
                    s32 q = self->unk_23a;
                    Insect_SetMoveTarget(self, q, Insect_GetFlutterRange(self));
                }
            } else {
                *q253 = *q253 - 1;
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d75c
extern "C" void Insect_FlutterBob(Rec *self, s32 a, s32 b, s32 c) {
    Vec3 *r6 = &self->unk_204;
    s32 r4 = FX_Div(data_02135f44[((u16)a >> 4) * 2], c);
    if (self->unk_220 != self->unk_228) {
        b = FX_Div(b, 0x2000);
    }
    if ((r4 > 0 && r6->y + r4 < b + self->unk_220) || (r4 < 0 && r6->y + r4 > self->unk_220 - b)) {
        r6->y = r6->y + r4;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d720
extern "C" s32 Insect_CheckAlarm(Rec *self) {
    Vec3 v;
    s32 r = Insect_UpdateAlarm(self, &v);
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        Insect_FleeIfAlarmed(self, &v);
    } else {
        func_ov068_022687e8(self, &v);
    }
    return r;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d6a0
extern "C" void Insect_FleeIfAlarmed(Rec *self, Vec3 *p) {
    s32 c = self->unk_254;
    if (func_020a62a0()) {
        if (p->x != 0 && self->unk_24a == 0 && c >= self->unk_255) {
            self->unk_240 = Math_AngleXZ(p, &self->unk_204);
            self->unk_251 = 7;
            self->unk_24a = 1;
        }
    } else {
        if (self->unk_24a == 0 && c >= self->unk_255) {
            self->unk_24a = 1;
            self->unk_251 = 7;
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d674
extern "C" void Insect_FlapWings(Rec *self) {
    if (self->unk_f4.mid == 1) {
        AnimModel_setFrame(&self->unk_50, 2);
    } else {
        AnimModel_setFrame(&self->unk_50, 1);
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d530
extern "C" void Butterfly_Update(Rec *self) {
    s32 c = self->unk_232;
    if (c > 0x8c) {
        self->unk_251 = 9;
    } else if (Insect_CheckObstacle(self, 0x50, 0xe38) != 0) {
        self->unk_232 = c + 1;
    } else {
        self->unk_232 = 0;
    }
    switch (self->unk_251) {
    case 0:
        Insect_FlutterFlight(self);
        break;
    case 6:
        Insect_UpdateRest(self);
        break;
    case 9:
    case 11:
        if (self->unk_f0.mid > 9) {
            AnimFrameCtrl_setup(&self->unk_ec, 9, 0, 0x1000, 0);
        }
        Insect_FlyAwayArc(self, 0x1ccd);
        break;
    case 7: {
        s32 t;
        Vec3 *src;
        Vec3 *dst;
        self->unk_251 = 0;
        self->unk_23a = self->unk_23a + self->unk_240;
        t = self->unk_23a;
        if (Insect_SetMoveTarget(self, t, Insect_GetFlutterRange(self)) != 0) {
            src = &self->unk_204;
            dst = &self->unk_1c8;
            *dst = *src;
        }
        break;
    }
    case 0x13: {
        s32 t;
        Vec3 *src;
        Vec3 *dst;
        self->unk_24a = 0;
        self->unk_251 = 0;
        t = self->unk_23a;
        if (Insect_SetMoveTarget(self, t, Insect_GetFlutterRange(self)) != 0) {
            src = &self->unk_204;
            dst = &self->unk_1c8;
            *dst = *src;
        }
        break;
    }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d350
extern "C" void Insect_FlutterFlight(Rec *self) {
    s16 ang;
    Vec3 v;
    Vec3 w;
    Vec3 *r7;
    s16 *r4;
    s32 r6;

    ang = self->unk_23a;
    r7 = &self->unk_204;
    r4 = &self->unk_242;
    if (self->unk_24d != 8 && self->unk_f0.mid > 9) {
        AnimFrameCtrl_setup(&self->unk_ec, 9, 0, self->unk_21c, 0);
    }
    if (Insect_CheckAlarm(self) == 2) {
        if (self->unk_24d != 8) {
            Insect_SetAnimSpeed(self, self->unk_21c);
        } else {
            Insect_SetAnimSpeed(self, 0x1000);
        }
        self->unk_24a = 0;
    }
    if (self->unk_24a != 0) {
        if (self->unk_24d != 8) {
            s32 t = func_01ffcb0c(self->unk_21c, 0x1333);
            if (t != self->unk_fc) {
                Insect_SetAnimSpeed(self, t);
            }
        } else {
            void *e = func_02095204(4);
            if (e != NULL) {
                func_020e9960(&w, r7, (u8 *)e + 0x5c);
                v = w;
                Insect_ClampStepXZ(&v, &v, 3);
                VEC_Add(r7, &v, r7);
            }
        }
    } else {
        if (self->unk_24d == 8) {
            if (func_ov068_02269f60(self, r4, &v) == 0) {
                return;
            }
        } else {
            if (self->unk_21c != self->unk_fc) {
                Insect_SetAnimSpeed(self, self->unk_21c);
            }
            if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0) {
                func_ov068_02268b70(self, &ang);
            }
        }
    }
    r6 = *r4;
    r6 = r6 * 0x44 + (r6 * r6 * -10) / 2;
    if (self->unk_24c != 0 && r6 >= 0) {
        func_01ffcb0c(r6, 0x2000);
    } else if (r6 < -0x333) {
        r6 = -0x333;
    }
    *r4 = *r4 + 4;
    Insect_FlutterAltitude(self, r4);
    r7->y = r7->y + r6;
    if (self->unk_24d == 8) {
        func_ov068_02268864(self, &ang, 0xaaa, 0x14, 0x3c, self->unk_257 << 12);
    } else {
        Insect_FlutterSteer(self, &ang, 0x38e, 0x14, 0x3c, self->unk_257 << 12);
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_021329d0 _ffix
#define func_ov068_022687e8 _ZN18Unk_ov068_0226821419func_ov068_022687e8EPi
#define func_ov068_02268864 _ZN18Unk_ov068_0226821419func_ov068_02268864EPsiihi
namespace s13 {
// 0x222d334
extern "C" BOOL Insect_TickTimer(Rec *self) {
    if (self->unk_244 > 0) {
        self->unk_244--;
    } else {
        return TRUE;
    }
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_021329d0
#undef func_ov068_022687e8
#undef func_ov068_02268864

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222d28c
extern "C" void Insect_FlyAwayArc(Rec *self, s32 a) {
    V3 *p = &self->unk_204;
    s16 *cnt = &self->unk_242;
    V3 v;
    Insect_GetDirVec(&v, self->unk_23a);
    if (Insect_FadeOut(self, 1) != 0) {
        Insect_Despawn(self);
    }
    s32 c = *cnt;
    s32 t = func_01ffcb0c(a, (c * 0x44) << 12);
    v.y = t >> (FX_Div((c * c) << 12, 0x1000) + 12);
    if (Insect_CheckObstacle(self, 0x50, 0xe38) == 0) {
        v.x = func_01ffcb0c(v.x, 0x10000);
        v.z = func_01ffcb0c(v.z, 0x10000);
    }
    (*cnt)++;
    VEC_Add(p, &v, p);
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222d1f0
extern "C" void Insect_FlutterAltitude(Rec *self, s16 *cnt) {
    s32 top;
    Unk_ov003_0222d1f0_K base = K_300;
    s32 a = self->unk_228;
    u8 flag = self->unk_24c;
    V3 *p = &self->unk_204;
    u8 *c = &self->unk_256;
    s32 b = self->unk_220;
    if (a != b) {
        top = base + b;
        a = b;
    } else {
        top = base + a;
    }
    if (*c < *cnt) {
        if (flag != 0) {
            *cnt = 0;
            *c = 0x10;
        } else {
            *cnt = 8;
            *c = 0x14;
        }
    }
    if (flag != 0) {
        if (p->y > top) {
            self->unk_24c = 0;
        }
    }
    if (p->y < a) {
        if (p->y > a - 0x320) {
            p->y = a;
        }
        self->unk_24c = 1;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222d1dc
extern "C" s32 Insect_GetFlowerSpeciesMask(s32 a) {
    if (a == 2) {
        return 0xf;
    }
    if (a == 3) {
        return 0xf;
    }
    return 0x3f;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222cfb0
extern "C" void Dragonfly_Update(Rec *self) {
    s16 *cnt = &self->unk_242;
    s32 lvl = ((s32)self->unk_21c & 0xf0) >> 4;
    BOOL flag = FALSE;
    if (lvl > 0 && self->unk_251 == 0x13) {
        if (self->unk_24f % 0x14 == 0) {
            s32 r = func_02063b8c(100);
            if (self->unk_f4.mid == 0 && r > 0x5c) {
                AnimModel_setFrame(self->unk_50, 2);
            } else if (r > 0x32) {
                AnimModel_setFrame(self->unk_50, 0);
            }
        } else if (self->unk_f4.mid != 0) {
            Insect_FlapWings(self);
        }
    } else {
        Insect_FlapWings(self);
    }
    if (self->unk_251 != 0xb && self->unk_251 != 9) {
        Insect_CheckAlarm(self);
    }
    Insect_CheckTurnCount(self, 5);
    u8 *st = &self->unk_251;
    switch (*st) {
    case 15:
        flag = TRUE;
    case 3:
        if (Insect_TurnToTarget(self, 0) != 0) {
            if (flag != FALSE) {
                self->unk_251 = 0x12;
            }
        }
        break;
    case 4:
        if (lvl > 0) {
            func_ov068_0226a1a0(self);
        } else {
            Dragonfly_FlyToTarget(self);
        }
        Dragonfly_CheckObstacle(self);
        *cnt = 0;
        break;
    case 12:
    case 13:
    case 14:
        if (self->unk_24d == 0x17) {
            *cnt = 100;
        }
        Dragonfly_Hover(self, cnt);
        break;
    case 7: {
        *st = 3;
        V3 *s = &self->unk_204;
        V3 *d = &self->unk_1d4;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        self->unk_21c |= 0xf00;
        break;
    }
    case 9:
    case 11:
        Dragonfly_FlyOff(self, cnt);
        break;
    default:
        if (lvl > 0) {
            (*cnt)++;
            if ((*cnt > 0x28 && *cnt % 10 == 0 && func_02063b8c(100) > 0x50) || *cnt > 0xc8) {
                self->unk_21c &= 0xff0f;
                *cnt = 0;
                self->unk_251 = 0xc;
                self->unk_244 = 100;
            }
        } else {
            s32 r = Insect_TickTimer(self);
            *cnt = 0;
            if (self->unk_24a == 0 && r != 0 && CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0) {
                func_ov068_0226a4f0(self);
            }
            if (self->unk_251 == 0x12) {
                self->unk_251 = 4;
            } else {
                self->unk_24a = 0;
                self->unk_251 = 0xc;
                self->unk_21c &= 0xfff0;
            }
        }
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222ce78
extern "C" void Dragonfly_Hover(Rec *self, s16 *cnt) {
    V3 *p = &self->unk_204;
    s32 r = func_02063b8c(100);
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) != 0 && func_020a62a0() == 0) {
        V3 *q = &self->unk_1d4;
        if (q->x != p->x || q->z != p->z) {
            self->unk_251 = 4;
            *cnt = 0;
            return;
        }
    } else {
        s32 c = *cnt;
        if ((c == 0 && r > 0x5f) || (c == 10 && r > 0x50) || ((c == 0x14 || c == 0x1e) && r > 0x32) || c >= 0x28) {
            if (self->unk_251 != 0xd && self->unk_251 != 0xe) {
                s32 m;
                if (self->unk_24d == 0x17) {
                    m = 5;
                } else {
                    m = 0xd;
                }
                s32 old = self->unk_23a;
                s32 g = Insect_RandomTurn(m, 1);
                self->unk_240 = g + old;
                V3 *s = &self->unk_204;
                V3 *d = &self->unk_1d4;
                d->x = s->x;
                d->y = s->y;
                d->z = s->z;
            }
            self->unk_251 = 3;
            self->unk_21c |= 0xf00;
            *cnt = 0;
            return;
        }
    }
    if (*cnt % 10 < 5) {
        if (p->y < self->unk_228 + 0x800) {
            p->y += 0x80;
        }
    } else {
        if (p->y > self->unk_228 - 0x800) {
            p->y -= 0x80;
        }
    }
    (*cnt)++;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222cd58
extern "C" void Dragonfly_FlyToTarget(Rec *self) {
    s32 r6, s;
    V3 *q = &self->unk_1d4;
    V3 *p = &self->unk_204;
    r6 = func_02133150(0x1000, self->unk_257);
    s8 t = self->unk_24d;
    switch (t) {
    case 0x15:
        s = 0xcd;
        break;
    case 0x16:
        s = 0x266;
        break;
    default:
        s = 0x385;
        break;
    }
    if (self->unk_24a != 0) {
        s = func_01ffcb0c(s, 0x2000);
    }
    if (func_020e7d4c(p, q, r6, 0x1000, s) == 0) {
        self->unk_251 = 0x13;
    } else {
        s32 x, y;
        self->unk_23a = Math_AngleXZ(p, q);
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) != 0) {
            if (func_020a62a0() == 0) {
                FieldPos_ToUnit(&x, &y, p);
                if (x < 0x10 || x > 0x4f || y < 0x10) {
                    self->unk_251 = 0x13;
                }
            }
        }
    }
    if (self->unk_24c != 0) {
        func_020e7870(&p->y, self->unk_228, r6, 0x1ec, 0xcd);
    } else {
        if (func_020e7870(&p->y, self->unk_228 - 0x1000, r6, 0x333, 0xcd) == 0) {
            self->unk_24c = 1;
        }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222cca8
extern "C" void Dragonfly_FlyOff(Rec *self, s16 *cnt) {
    V3 *p = &self->unk_204;
    s32 t;
    V3 v;
    if (self->unk_251 == 0xb && Insect_CheckObstacle(self, 0x50, 0xe38) == 0) {
        Insect_GetDirVec(&v, self->unk_23a);
        p->x += func_01ffcb0c(v.x, 0x10000);
        p->z += func_01ffcb0c(v.z, 0x10000);
    }
    t = *cnt << 12;
    s32 a = func_01ffcb0c(0x44000, t);
    s32 b = func_01ffcb0c(t, t);
    s32 c = FX_Div(b, 0x2000);
    p->y += (a >> 12) + (c >> 12);
    (*cnt)++;
    if (Insect_FadeOut(self, 1) != 0) {
        Insect_Despawn(self);
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222cc14
extern "C" void Dragonfly_CheckObstacle(Rec *self) {
    s32 m = Insect_CheckObstacle(self, 0x50, 0xe38);
    if (m != 0) {
        if (self->unk_24a != 0) {
            self->unk_251 = 0xf;
            self->unk_21c |= 0xf00;
        } else {
            self->unk_251 = 0xd;
        }
        self->unk_240 = Insect_ReflectAngle(self->unk_23a, m);
        self->unk_21c++;
        self->unk_242 = 0;
        V3 *s = &self->unk_204;
        V3 *d = &self->unk_1d4;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222cb3c
extern "C" s32 Insect_ReflectAngle(s32 a, s32 mode) {
    s32 orig = a;
    if (mode == 3) {
        s32 r = func_02063b8c(100);
        a = (s16)(a + 0x8000);
        if (r < 5) {
            a = (s16)(a + 0x2aaa);
        } else if (r < 10) {
            a = (s16)(a - 0x2aaa);
        }
    } else {
        if (mode == 1) {
            if (a < -0x4000) goto neg;
            if (a >= 0 && a < 0x4000) goto neg;
        }
        if (mode == 2) {
            if (a > 0x4000) goto neg;
            if (a <= 0 && a > -0x4000) {
            neg:
                a = (s16)-a;
                goto tail;
            }
        }
        if (a >= 0) {
            a = (s16)(0x8000 - a);
        } else {
            a = (s16)(-0x8000 - a);
        }
    }
tail:
    if (func_02063b8c(100) < 10) {
        if (a >= 0) {
            a = (s16)(a + 0xaaa);
        } else {
            a = (s16)(a - 0xaaa);
        }
    }
    if (a == orig) {
        if (a >= 0) {
            a = (s16)(a + 0xaaa);
        } else {
            a = (s16)(a - 0xaaa);
        }
    }
    return a;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
namespace s12 {
// 0x222c9e0
extern "C" s32 Insect_TurnToTarget(Rec *self, u32 a) {
    BOOL result = FALSE;
    s16 ang = self->unk_23a;
    if (self->unk_251 != 0xb) {
        if (func_020a62a0() == 0 && CommManager_isSlotActive(gCommManager, gCommManager->unk_64) != 0) {
            if (self->unk_204.x != self->unk_1d4.x && self->unk_204.z != self->unk_1d4.z) {
                self->unk_251 = 4;
                self->unk_24c = a;
            }
        } else {
            V3 *p = &self->unk_204;
            V3 *q = &self->unk_1d4;
            u32 fl = self->unk_21c;
            if ((p->x == q->x && p->z == q->z) || (fl & 0xf00) != 0) {
                u8 n = self->unk_259;
                n = n + func_02063b8c(3);
                if (self->unk_24a != 0) {
                    n = n + (u8)(func_02063b8c(2) + 2);
                }
                if (Insect_SetMoveTarget(self, self->unk_240, n << 12) != 0) {
                    self->unk_240 = Math_AngleXZ(&self->unk_204, &self->unk_1d4);
                    fl &= 0xf0ff;
                    self->unk_21c = fl;
                } else {
                    fl &= 0xf0ff;
                    self->unk_21c = fl;
                }
            }
            if (func_020e7530(&ang, self->unk_240, 0xe38) != 0) {
                self->unk_251 = 4;
                self->unk_24c = a;
                result = TRUE;
            }
            self->unk_23a = ang;
        }
    } else {
        Insect_SetMoveTarget(self, self->unk_23a, ((u32)(self->unk_259 << 25) >> 24) << 12);
        self->unk_24c = a;
    }
    return result;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c8f8
extern "C" void Insect_AccumAlarm(Rec *o, V3 *out, s32 *dist, u8 *flag, u8 a, u8 b) {
    Unk_02095204_Obj *p = func_02095204(a);
    if (p) {
        s32 r5 = o->unk_254;
        s32 lim = o->unk_224;
        s32 r4 = p->unk_98;
        V3 *pv = &p->unk_5c;
        out->x = p->unk_5c.x;
        out->y = pv->y;
        out->z = pv->z;
        *dist = func_020e9650(out, &o->unk_204);
        if (b) {
            *flag = 0;
            if (*dist < 0x2000) {
                r5 = (s16)(r5 + 0x19);
            } else if (*dist > lim || r4 == 0) {
                *flag = 1;
            } else if (r4 <= 0x3e8) {
                r5 = (s16)(r5 + 1);
            } else if (r4 <= 0x44c) {
                r5 = (s16)(r5 + 3);
            } else if (r4 <= 0x490) {
                r5 = (s16)(r5 + 5);
            } else if (r4 == 0x491) {
                r5 = (s16)(r5 + 8);
            } else {
                r5 = (s16)(r5 + 0xf);
            }
            if (r5 > 0xfe) r5 = 0xfe;
            o->unk_254 = r5;
        }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c7fc
extern "C" s32 Insect_UpdateAlarm(Rec *o, s32 *out) {
    s32 r = 0;
    s32 best;
    s32 flagC;
    u32 i;
    u32 s14;
    s32 zero;
    u8 b[2];
    s32 dist;
    V3 v;
    u32 r4;
    best = 0xfffffff;
    flagC = 1;
    b[0] = 1;
    b[1] = 1;
    s14 = o->unk_254;
    r4 = o->unk_255;
    out[0] = 0;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        if (func_020a62a0() == 0) {
            flagC = r;
        }
        i = 0;
        zero = 0;
        do {
            Unk_ov003_0222c7fc_Ns::Insect_AccumAlarm(o, &v, &dist, &b[1], i, flagC);
            b[0] = (b[0] & b[1]) ? 1 : zero;
            if (best > dist) {
                out[0] = v.x;
                out[1] = v.y;
                out[2] = v.z;
                best = dist;
            }
            i = (u8)(i + 1);
        } while (i < 4);
    } else {
        func_ov068_0226a6ac(o, b, out);
    }
    if (flagC) {
        u8 *pc = &o->unk_254;
        u32 r2 = *pc;
        if (b[0] && r2) {
            r2 = (u8)(r2 - 1);
            *pc = r2;
        }
        if (r4 <= r2) {
            if (r4 > s14) {
                r = 1;
            } else {
                r = 3;
            }
        } else if (r4 > r2) {
            if (r4 <= s14) {
                r = 2;
            }
        }
    }
    return r;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c718
extern "C" void Hopper_Update(Rec *o) {
    s16 *p = &o->unk_242;
    u32 st = o->unk_251;
    if (st != 0xb && st != 9 && st != 4) {
        Insect_CheckAlarm(o);
    }
    Insect_CheckTurnCount(o, 4);
    switch (st) {
    case 3:
    case 0xf:
        Insect_TurnToTarget(o, 1);
        break;
    case 7:
        o->unk_251 = 0xf;
        o->unk_21c |= 0xf00;
        Hopper_CheckObstacle(o, p);
        break;
    case 9:
    case 0xb:
        o->unk_24a = 1;
    case 4:
    case 0x11:
        Hopper_Jump(o);
        break;
    case 0x13:
        Cricket_Chirp(o);
        if (o->unk_f4.mid != 0) {
            AnimModel_setFrame((u8 *)o + 0x50, 0);
        }
        if (Hopper_CheckObstacle(o, p) == 0) {
            Hopper_Rest(o, p);
            o->unk_21c = 0;
        }
        break;
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 8:
    case 10:
    case 12:
    case 13:
    case 14:
    case 16:
    case 18:
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c668
extern "C" void Hopper_Rest(Rec *o, s16 *p) {
    *p = *p + 1;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) && !func_020a62a0()) {
        V3 *a = &o->unk_204;
        V3 *b = &o->unk_1d4;
        if (a->x != b->x || a->z != b->z) {
            o->unk_251 = 4;
            *p = 0;
            o->unk_24c = 1;
        }
    } else {
        if (*p >= o->unk_232) {
            s16 t = o->unk_23a;
            s32 g = Insect_RandomTurn(0xc, 1);
            o->unk_240 = g + t;
            o->unk_21c |= 0xf00;
            o->unk_251 = 3;
            *p = 0;
        }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c620
extern "C" s16 Insect_RandomTurn(s32 a, s32 b) {
    u8 r = func_02063b8c(a);
    if (r != 0) {
        if (b != 0 && func_02063b8c(100) > 0x32) {
            return (s16)(r * -0x38e);
        }
        return (s16)(r * 0x38e);
    }
    return 0;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c444
extern "C" void Hopper_Jump(Rec *o) {
    u32 st;
    V3 *dst = &o->unk_1d4;
    V3 *src = &o->unk_204;
    s32 q = func_02133150(0x1000, o->unk_257);
    s32 flag = 0;
    st = o->unk_251;
    if (o->unk_24a) {
        Insect_FlapWings(o);
        Locust_PlaySe(o);
    }
    if (Insect_CheckObstacle(o, 0x50, 0xe38) == 0) {
        if (func_020e7d4c(src, dst, q, 0x14000, 0x333) == 0) {
            flag = 1;
        } else {
            o->unk_23a = Math_AngleXZ(src, dst);
        }
    } else {
        flag = 1;
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    if (o->unk_24c) {
        if (!func_020e7870((u8 *)src + 4, 0x1400, q, 0x1000, 0xcd)) {
            o->unk_24c = 0;
        }
    } else {
        Unk_0203398c g;
        s32 v;
        g.func_020339bc((Unk_0203389c_Vec *)(src), 0, 1);
        if (g.unk_30 != 0) {
            v = g.unk_3c;
            if (o->unk_251 == 0x11) {
                Insect_SplashIfWater(o);
                o->unk_242 = 0;
                Insect_Despawn(o);
                return;
            }
        } else {
            v = g.func_02033914(1);
            if (v > 0x4000) {
                v = func_02030814(0);
            } else {
                v += func_02030814(0);
            }
        }
        if (!func_020e7870((u8 *)src + 4, v, q, 0x1000, 0x266) && flag != 0 && st != 0xb && st != 9) {
            o->unk_232 = (func_02063b8c(9) + 2) * 0x14;
            o->unk_251 = 0x13;
            AnimModel_setFrame((u8 *)o + 0x50, 0);
            if (v < 0) {
                Insect_SplashIfWater(o);
                o->unk_242 = 0;
                Insect_Despawn(o);
            } else if (o->unk_24a) {
                o->unk_254 = o->unk_255 - 10;
                o->unk_24a = 0;
            }
        }
    }
    if (st == 9 || st == 0xb) {
        if (Insect_FadeOut(o, 1)) {
            Insect_Despawn(o);
        }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c3c4
extern "C" void *Hopper_CheckObstacle(Rec *o, s16 *p) {
    if (!CommManager_isSlotActive(gCommManager, gCommManager->unk_64) || func_020a62a0()) {
        void *r = Insect_CheckObstacle(o, 0x50, 0xe38);
        if (r) {
            *p = 0;
            o->unk_251 = 0xf;
            o->unk_240 = Insect_ReflectAngle(o->unk_23a, r);
            o->unk_21c |= 0xf00;
            o->unk_21c++;
        }
        return r;
    }
    return 0;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c3a0
extern "C" void Locust_PlaySe(Rec *o) {
    s32 t = o->unk_24d;
    switch (t) {
    case 0xc:
    case 0xd:
        Insect_PlaySe(o, 0, 1);
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c36c
extern "C" void Cricket_Chirp(Rec *o) {
    s32 t = o->unk_24d;
    switch (t) {
    case 0x1b:
    case 0x1c:
    case 0x1d:
        if (*(u8 *)((u8 *)o + 0x254) < 5) {
            Insect_PlaySe(o, 0, 1);
        }
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c2e0
extern "C" void Pondskater_Update(Rec *o) {
    s16 *p = &o->unk_242;
    u8 *st = &o->unk_251;
    switch (*st) {
    case 3:
    case 0xf:
        func_ov068_0226a320(o, p);
        break;
    case 4:
        func_ov068_0226a3d4(o, p);
        func_ov068_0226a2dc(o, p);
        break;
    case 0xb:
        Crawler_Escape(o, p);
        *p = *p + 1;
        break;
    case 0x13:
        if (o->unk_232 <= 0) {
            *st = 3;
        } else {
            o->unk_232 = o->unk_232 - 1;
        }
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c240
extern "C" void Mosquito_Update(Rec *o) {
    s16 *p = &o->unk_242;
    switch (o->unk_251) {
    case 0:
        func_ov068_02269840(o, (V3 *)p);
        break;
    case 0xf: {
        s16 t = o->unk_23a;
        if (func_020e7530(&t, o->unk_240, 0x5b0)) {
            o->unk_251 = 0;
        }
        Insect_PlaySe(o, 0, 1);
        o->unk_23a = t;
        break;
    }
    case 9:
    case 0xb:
        Crawler_Escape(o, p);
        *p = *p + 1;
        break;
    case 0x13:
        o->unk_251 = 0;
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c188
extern "C" void Firefly_Update(Rec *o) {
    switch (o->unk_251) {
    case 0:
        Firefly_Wander(o);
        break;
    case 9:
    case 0xb:
        if (o->unk_242 == 0) {
            Insect_PlaySe(o, 1, 0);
        }
        TreeBug_FlyOff(o, &o->unk_242);
        break;
    case 7:
        o->unk_251 = 0;
        o->unk_23a = o->unk_23a + o->unk_240;
        break;
    case 0x13: {
        o->unk_24a = 0;
        o->unk_251 = 0;
        s16 t = o->unk_23a;
        Insect_SetMoveTarget(o, t, Insect_GetFlutterRange(o));
        V3 *s = &o->unk_204;
        V3 *d = &o->unk_1c8;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        break;
    }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c0d0
extern "C" void Firefly_Wander(Rec *o) {
    s16 t = o->unk_23a;
    s16 *p = &o->unk_242;
    if (!CommManager_isSlotActive(gCommManager, gCommManager->unk_64) || func_020a62a0()) {
        if (Insect_CheckAlarm(o) == 2) {
            Insect_SetAnimSpeed(o, 0x1000);
            o->unk_24a = 0;
        }
    }
    Insect_FlutterSteer(o, &t, 0x38e, 0x28, 0x50, o->unk_257 << 12);
    s32 r = func_02063b8c(4);
    r = FX_Div(0x2000, (r + 5) << 12);
    *p = *p + (s16)r;
    Insect_FlutterBob(o, *p, 0x1000, (func_02063b8c(4) + 10) << 12);
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02133150 _s32_div_f
#define func_ov068_022694c0 _ZN18Unk_ov068_0226821419func_ov068_022694c0Ev
#define func_ov068_02269714 _ZN18Unk_ov068_0226821419func_ov068_02269714Ev
#define func_ov068_022697b8 _ZN18Unk_ov068_0226821419func_ov068_022697b8Ev
#define func_ov068_02269840 _ZN18Unk_ov068_0226821419func_ov068_02269840EPs
namespace s11 {
// 0x222c024
extern "C" void Bee_Update(Rec *o) {
    switch (o->unk_251) {
    case 0:
        Insect_PlaySe(o, 0, 1);
        func_ov068_022694c0(o);
        break;
    case 2:
        Insect_PlaySe(o, 0, 1);
        func_ov068_02269714(o);
        break;
    case 3:
    case 7:
    case 8:
        func_ov068_022696e4(&o->unk_210, 0);
        func_ov068_02269250(o);
        break;
    case 0xb:
        Insect_PlaySe(o, 0, 1);
        Insect_FlapWings(o);
        Insect_FlyAwayArc(o, 0x1333);
        break;
    case 4:
        func_ov068_022697b8(o);
        break;
    case 1:
    case 5:
    case 6:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        break;
    }
    o->unk_249 = 1;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_02133150
#undef func_ov068_022694c0
#undef func_ov068_02269714
#undef func_ov068_022697b8
#undef func_ov068_02269840

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222bf7c
extern "C" void Hoverer_Update(Rec *self) {
    switch (self->unk_251) {
    case 0:
        func_ov068_02269d58(self);
        break;
    case 6:
        Crawler_Wander(self);
        Insect_UpdateRest(self);
        break;
    case 9:
    case 11:
        Insect_FlapWings(self);
        Insect_PlaySe(self, 0, 1);
        Insect_FlyAwayArc(self, 0x1ccd);
        break;
    case 7:
        self->unk_251 = 0;
        if (self->unk_24a != 0) {
            self->unk_23a = self->unk_23a + self->unk_240;
        }
        break;
    case 19:
        self->unk_24a = 0;
        self->unk_251 = 0;
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222be88
extern "C" void Ant_Update(Rec *self) {
    switch (self->unk_251) {
    case 11:
        Insect_HopArc(self, &self->unk_242);
        break;
    case 9:
        Insect_EscapeRun(self, &self->unk_242);
        break;
    case 7:
    case 8:
        if (Insect_FadeOut(self, 4)) {
            NNS_G3dMdlSetMdlAlpha((void *)func_0209c0ac(self->unk_130), 0, 0);
            self->unk_251 = 0x13;
            V3 *p = &self->unk_204;
            p->x = 0;
            p->y = 0;
            p->z = 0;
            func_02041868();
        }
        break;
    case 18: {
        void *g = TownBlockMap_Get();
        V3 *pos = &self->unk_204;
        s32 x, y;
        FieldPos_ToUnit(&x, &y, pos);
        s32 lx = *(volatile s32 *)&x;
        s32 ly = *(volatile s32 *)&y;
        s32 hx = lx >> 4;
        s32 hy = ly >> 4;
        u16 *p = BlockMap_GetItemPtr(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x154a && v <= 0x1553) {
            r = TRUE;
        }
        if (r == 0 || Insect_IsAtWateringPoint(pos) != 0) {
            self->unk_251 = 7;
        }
        break;
    }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222be0c
extern "C" void MoleCricket_Update(Rec *self) {
    s16 *cnt = &self->unk_242;
    switch (self->unk_251) {
    case 4:
    case 17:
        Insect_PlaySe(self, 1, 1);
        MoleCricket_Burrow(self, cnt);
        break;
    case 5:
    case 11:
        Insect_HopArc(self, cnt);
        break;
    case 9:
        Insect_EscapeRun(self, cnt);
        break;
    case 19:
        MoleCricket_CheckDugUp(self, cnt);
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222bd60
extern "C" void MoleCricket_CheckDugUp(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    void *o = Insect_FindNearestPlayer(pos);
    if (Insect_CheckDigHit(self, pos)) {
        if (o != 0) {
            s32 a = Math_AngleXZ(pos, (u8 *)o + 0x5c);
            self->unk_251 = 5;
            NNS_G3dMdlSetMdlAlpha((void *)func_0209c0ac(self->unk_130), 0, 0x1f);
            self->unk_23a = a + 0x8000;
            *cnt = 0;
        }
    } else {
        if (o != 0) {
            if (func_020e9650(pos, (u8 *)o + 0x5c) < 0x5000) {
                self->unk_252 = 0x3c;
            }
        }
        s32 t = self->unk_252;
        if (t > 0) {
            Insect_PlaySe(self, 0, 1);
            self->unk_252 = t - 1;
        }
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222bb28
extern "C" void Insect_HopArc(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    volatile V3 saved;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    V3 v;
    s32 lim;
    Unk_0203398c g;
    g.func_020339bc((Unk_0203389c_Vec *)(pos), 0, 1);
    if (self->unk_24d == 0x35) {
        self->unk_23a = 0;
        Insect_GetDirVec(&v, self->unk_23c);
    } else {
        Insect_GetDirVec(&v, self->unk_23a);
    }
    if (self->unk_251 == 5 || Insect_CheckObstacle(self, 0x50, 0xe38) == 0) {
        pos->x += func_01ffcb0c((self->unk_257 + 2) << 12, v.x);
        pos->z += func_01ffcb0c((self->unk_257 + 2) << 12, v.z);
    }
    if (self->unk_251 == 9 || self->unk_251 == 11) {
        switch (self->unk_24d) {
        case 0x1f:
        case 0x18:
        case 0x35:
        case 0x36:
        case 0x37: {
            s32 n = *cnt;
            pos->y = pos->y - n * (n * 10);
            break;
        }
        default: {
            s32 n = *cnt;
            pos->y = pos->y + n * (160 - n * 11);
            break;
        }
        }
    } else {
        s32 n = *cnt;
        pos->y = pos->y + n * (200 - n * 11);
    }
    if (g.unk_30 != 0) {
        lim = g.unk_3c;
    } else {
        lim = g.func_02033914(0);
        if (lim > 0x4000) {
            lim = 0;
            pos->x = saved.x;
            pos->z = saved.z;
        }
    }
    if (pos->y <= lim && *cnt > 0) {
        if (g.func_020338d0(pos->y)) {
            Insect_Despawn(self);
            Insect_SplashIfWater(self);
        } else {
            if (self->unk_251 == 0xb) {
                if (self->unk_24d == 0x1f) {
                    self->unk_257 = 4;
                } else if (self->unk_24d == 0x31) {
                    self->unk_232 = 0;
                    if (self->unk_f4.mid != 1) {
                        AnimModel_setFrame(self->unk_50, 1);
                    }
                }
                self->unk_251 = 9;
            } else {
                self->unk_251 = 4;
                if (self->unk_24d == 0x31) {
                    AnimModel_setFrame(self->unk_50, 1);
                }
                if (self->unk_24d == 0x31 || self->unk_24d == 0x1e) {
                    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) && func_020a62a0()) {
                        Insect_SetMoveTarget(self, self->unk_23a, 0xc000);
                    }
                }
            }
            self->unk_254 = 0;
            *cnt = 0;
            pos->y = lim + func_02030814(0);
            if (self->unk_24d != 0x35) {
                self->unk_238 = 0;
            }
        }
    } else {
        *cnt = *cnt + 2;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222b928
extern "C" void Insect_EscapeRun(Rec *self, s16 *cnt) {
    V3 *pos = &self->unk_204;
    s32 mul = 2;
    s8 r7 = self->unk_24d;
    V3 v;
    s16 r6;
    Unk_0203398c g;
    g.func_020339bc((Unk_0203389c_Vec *)(pos), 0, 1);
    if (Insect_FadeOut(self, 1)) {
        Insect_Despawn(self);
    }
    if (Insect_SteerAroundObstacle(self)) {
        return;
    }
    if (g.unk_30 != 0) {
        if (g.func_020338d0(pos->y)) {
            Insect_Despawn(self);
            Insect_SplashIfWater(self);
        } else {
            pos->y = pos->y - 0x100;
        }
        return;
    }
    pos->y = pos->y - 0x200;
    if (r7 == 0x35) {
        r6 = self->unk_23c;
        Insect_GetDirVec(&v, r6);
    } else {
        if ((u8)(s8)(r7 - 0x36) <= 1) {
            mul = 4;
        }
        r6 = self->unk_23a;
        Insect_GetDirVec(&v, r6);
    }
    if (r7 == 0x1f) {
        s32 c = *cnt;
        if (c == 0) {
            r6 = r6 + FX_Div(0x2000, 0x6000);
        } else if (c % 16 == 0) {
            r6 = r6 + 0x71c;
        } else if (c % 8 == 0) {
            r6 = r6 - 0x71c;
        }
    } else {
        s32 c = *cnt;
        if (c == 0) {
            r6 = r6 + FX_Div(0x2000, 0x6000);
        } else if (c % 4 == 0) {
            r6 = r6 + 0xaaa;
        } else if (c % 2 == 0) {
            r6 = r6 - 0xaaa;
        }
    }
    if (r7 == 0x35) {
        self->unk_23c = r6;
        self->unk_23a = 0;
    } else {
        self->unk_23a = r6;
    }
    if (r7 == 0x1a) {
        pos->z += func_01ffcb0c(func_01ffcb0c(self->unk_257 << 12, v.z), 0x400);
        pos->x += func_01ffcb0c(func_01ffcb0c(self->unk_257 << 12, v.x), 0x400);
    } else {
        pos->x += func_01ffcb0c(v.x, (mul * self->unk_257) << 12);
        s32 vz = *(volatile s32 *)&v.z;
        mul = mul * self->unk_257;
        pos->z += func_01ffcb0c(vz, mul << 12);
    }
    *cnt = *cnt + 1;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222b838
extern "C" void MoleCricket_Burrow(Rec *self, s16 *cnt) {
    s32 r4 = self->unk_232;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        if (Insect_GroundWalkNet(self) != 0) {
            return;
        }
    } else {
        if (Insect_GroundWalk(self) == 0) {
            return;
        }
    }
    self->unk_232 = r4 - 1;
    if (r4 == 5) {
        s32 x, y;
        FieldPos_ToUnit(&x, &y, &self->unk_204);
        if (func_02031218(x, y) == 0 && CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0) {
            func_0208fc88(0x80, &self->unk_204, 0, data_020e12cc);
        } else {
            self->unk_251 = 9;
        }
    } else if (r4 <= 0) {
        s32 c = *cnt;
        if (c < 2) {
            self->unk_23a = self->unk_23a - 0xaaa;
        } else {
            r4 = c + 1;
            if (r4 % 4 == 0) {
                self->unk_23a = self->unk_23a + 0xaaa;
            } else if (r4 % 2 == 0) {
                self->unk_23a = self->unk_23a - 0xaaa;
            }
        }
        *cnt = 0;
        Insect_Despawn(self);
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222b784
extern "C" s32 Insect_SteerAroundObstacle(Rec *self) {
    s32 t = Insect_CheckObstacle(self, 0x50, 0xe38);
    s32 ret = 0;
    u32 c = self->unk_252;
    if (t != 0) {
        s16 r;
        s32 m = self->unk_24d;
        if (m == 0x35) {
            r = self->unk_23c;
        } else {
            r = self->unk_23a;
        }
        if (t == 3) {
            if (c == 1 || c == 10) {
                r -= 0xaaa;
            } else {
                r += 0xaaa;
            }
        } else if (t == 1 || c == 1) {
            r -= 0x38e;
            c = 1;
        } else if (t == 2 || c == 2) {
            r += 0x38e;
            c = 2;
        }
        if (m == 0x35) {
            self->unk_23c = r;
        } else {
            self->unk_23a = r;
        }
        ret = 1;
    } else if (c < 10) {
        c = (u8)(c * 10);
    }
    self->unk_252 = c;
    return ret;
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269d58 _ZN18Unk_ov068_0226821419func_ov068_02269d58Ev
namespace s10 {
// 0x222b6e0
extern "C" void PillBug_Update(Rec *self) {
    s16 *cnt = &self->unk_242;
    switch (self->unk_251) {
    case 4:
    case 17:
        PillBug_Walk(self);
        break;
    case 11:
        if (self->unk_f4.mid == 1) {
            AnimModel_setFrame(self->unk_50, 0);
        }
    case 5:
        Insect_HopArc(self, cnt);
        break;
    case 9:
        Insect_EscapeRun(self, cnt);
        break;
    case 7:
        PillBug_Curled(self);
        break;
    case 19:
        Insect_CheckRockStrike(self, cnt);
        if (self->unk_f4.mid != 0) {
            AnimModel_setFrame(self->unk_50, 0);
        }
        break;
    }
}
}
#undef func_020547a4
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269d58

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222b620
extern "C" void PillBug_Curled(Rec *self) {
    s32 r4 = self->unk_232;
    V3 *pos = &self->unk_204;
    if (Insect_CheckDigHit(self, pos)) {
        r4 = 1;
    }
    if (r4 <= 0) {
        if (Insect_FadeOut(self, 1)) {
            Insect_Despawn(self);
        }
    } else {
        V3 out;
        Insect_UpdateAlarm(self, &out.x);
        if (out.x != 0) {
            self->unk_232 = r4 - 1;
            if (self->unk_254 < self->unk_255) {
                self->unk_251 = 4;
                AnimModel_setFrame(&self->unk_50, 1);
                s32 a = Math_AngleXZ(pos, &out);
                self->unk_23a = a + 0x8000;
                if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) && func_020a62a0()) {
                    Insect_SetMoveTarget(self, self->unk_23a, 0xc000);
                }
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222b518
extern "C" void PillBug_Walk(Rec *self) {
    V3 *pos = &self->unk_204;
    s32 r4 = self->unk_232;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        if (Insect_GroundWalkNet(self) != 0) {
            return;
        }
    } else {
        if (Insect_GroundWalk(self) == 0) {
            return;
        }
    }
    V3 out;
    Insect_UpdateAlarm(self, &out.x);
    if (self->unk_254 >= self->unk_255 &&
        (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0 || func_020a62a0() != 0 ||
         (self->unk_1d4.x == self->unk_204.x && self->unk_1d4.z == self->unk_204.z))) {
        self->unk_251 = 7;
        AnimModel_setFrame(&self->unk_50, 0);
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) && func_020a62a0()) {
            V3 *src = &self->unk_204;
            V3 *dst = &self->unk_1d4;
            dst->x = src->x;
            dst->y = src->y;
            dst->z = src->z;
        }
    } else if (r4 <= 0) {
        if (Insect_FadeOut(self, 1)) {
            Insect_Despawn(self);
        }
    } else {
        if (Insect_CheckDigHit(self, pos)) {
            r4 = 1;
        }
        self->unk_232 = r4 - 1;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222b450
extern "C" BOOL Insect_CheckRockStrike(Rec *self, s16 *out) {
    s8 *p = &self->unk_24e;
    V3 *sub = &self->unk_204;
    if (*p <= 0) {
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            s8 i;
            for (i = 0; i < 4; i++) {
                *p = PlayerActor_GetStrikeCountdownAt(sub, i);
                if (*p > 0) {
                    break;
                }
            }
        } else {
            *p = PlayerActor_GetStrikeCountdownAt(sub, 4);
        }
    }
    s8 c = *p;
    if (c > 0) {
        c--;
        *p = c;
        if (*p == 0) {
            void *o = Insect_FindNearestPlayer(sub);
            if (o) {
                s32 v = Math_AngleXZ(sub, (u8 *)o + 0x5c);
                self->unk_251 = 5;
                NNS_G3dMdlSetMdlAlpha((void *)func_0209c0ac(self->unk_130), 0, 0x1f);
                self->unk_23a = v + 0x8000;
                *out = 0;
                return TRUE;
            }
        }
    }
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222b3f4
extern "C" void Moth_Update(Rec *self) {
    u8 *p;
    p = &self->unk_251;
    switch (*p) {
    case 0:
        func_ov068_0226a004(self);
        break;
    case 9:
    case 11:
        Insect_FlyAwayArc(self, 0x1ccd, p);
        break;
    case 7:
        Insect_FlutterFlight(self);
        break;
    case 0x13:
        self->unk_24a = 0;
        *p = 0;
        break;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222b224
extern "C" void Flea_Update(Rec *self) {
    u32 st = self->unk_251;
    switch (st) {
    case 6:
        Insect_SteerAroundObstacle(self);
        if (Insect_TickTimer(self)) {
            self->unk_251 = 0xb;
        }
        break;
    case 11: {
        s16 *p = &self->unk_242;
        V3 *pos = &self->unk_204;
        s32 rnd, d1, d2;
        volatile V3 save;
        save.x = pos->x;
        save.y = pos->y;
        save.z = pos->z;
        s32 y0 = self->unk_228;
        Unk_0203398c g;
        g.func_020339bc((Unk_0203389c_Vec *)(pos), 0, 1);
        Insect_SetScale(self, 200);
        if (Insect_SteerAroundObstacle(self) == 0) {
            V3 v;
            Insect_GetDirVec(&v, self->unk_23a);
            pos->x += func_01ffcb0c(self->unk_257 << 12, v.x);
            pos->z += func_01ffcb0c(self->unk_257 << 12, v.z);
        }
        if (y0 > 0x1000) {
            d1 = *p << 12;
            pos->y = y0 + func_01ffcb0c(0x59a - func_01ffcb0c(0xcd, d1), d1);
        } else {
            d2 = *p << 12;
            pos->y = y0 + func_01ffcb0c(0x99a - func_01ffcb0c(0xcd, d2), d2);
        }
        if (g.unk_30 != 0) {
            y0 = g.unk_3c;
        } else {
            y0 = g.func_02033914(1);
            y0 += func_02030814(0);
            if (y0 > 0x1000) {
                if (y0 > 0x4000) {
                    y0 = func_02030814(0);
                } else {
                    pos->x = save.x;
                    pos->z = save.z;
                }
            }
        }
        if (pos->y < y0) {
            rnd = func_02063b8c(3);
            *p = 0;
            pos->y = y0;
            if (g.func_020338d0(pos->y)) {
                Insect_Despawn(self);
                Insect_SplashIfWater(self);
            } else {
                self->unk_251 = 6;
                self->unk_244 = 4;
                self->unk_228 = y0;
                s32 t;
                if (func_02063b8c(100) > 0x32 && (t = self->unk_21c - rnd) > 0) {
                    self->unk_257 = t;
                } else {
                    self->unk_257 = rnd + self->unk_21c;
                }
            }
        } else {
            *p = *p + 1;
        }
        if (Insect_FadeOut(self, 1)) {
            Insect_Despawn(self);
        }
        break;
    }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222aff0
extern "C" void Stinger_Update(Rec *self) {
    s32 r = 0;
    u8 st = self->unk_251;
    V3 *pos = &self->unk_204;
    s16 *p23e = &self->unk_23e;
    Unk_ov003_0222aff0_Sub *sub = &self->unk_50;
    if (MenuCtrl_IsMenuOpen() == 0) {
        if (PlayerActor_LocalHoldsNet()) {
            self->unk_247 = 1;
        } else {
            self->unk_247 = 0;
        }
    }
    if (self->unk_24c == 0 && st != 0xb && st != 9) {
        r = func_ov068_02269040(self, &self->unk_236);
        if (self->unk_251 != 5) {
            if (r == 1) {
                return;
            }
            if (self->unk_24d == 0x37 && r == 0) {
                u32 m = sub->bits.mid;
                if (m > 3) {
                    AnimFrameCtrl_setup((Unk_ov003_0222aff0_B *)&(Unk_ov003_0222aff0_B &)*sub, 3, 3, 0x1000, m);
                } else if (m == 3) {
                    AnimFrameCtrl_setup((Unk_ov003_0222aff0_B *)&(Unk_ov003_0222aff0_B &)*sub, 3, 0, 0x1000, 0);
                }
            }
        }
    }
    switch (st) {
    case 4:
    case 5:
    case 7:
        func_ov068_02269110(self, &self->unk_23e, r);
        break;
    case 11:
        Insect_HopArc(self, &self->unk_242);
        break;
    case 9:
        Insect_PlaySe(self, 0, 1);
        Insect_EscapeRun(self, &self->unk_242);
        break;
    case 3: {
        volatile u32 w32;
        *(volatile s16 *)&w32 = self->unk_23a;
        if (func_020e7530((s16 *)&w32, self->unk_240, 0x666)) {
            self->unk_251 = 4;
        }
        self->unk_23a = *(volatile s16 *)&w32;
        break;
    }
    case 0x13:
        if (self->unk_24c != 0) {
            s32 k = *p23e;
            if (k == 0 || self->unk_24d == 0x37) {
                self->unk_251 = 3;
                self->unk_244 = 100;
                s32 j = self->unk_23a;
                s32 t = Insect_RandomTurn(8, 1);
                self->unk_240 = t + j + 0x8000;
                *p23e = 0;
            } else if (pos->y > 0 && self->unk_24d == 0x36) {
                s32 t = func_01ffcb0c(FX_Div(0x1000, 0x12000), k << 12);
                pos->y += t + k * k * -10;
                *p23e = *p23e + 3;
                if (pos->y <= 0) {
                    *p23e = 0;
                }
            }
        } else if (Insect_TickTimer(self)) {
            self->unk_251 = 3;
            self->unk_244 = func_02063b8c(3) * 20;
            s32 j = self->unk_23a;
            s32 t = Insect_RandomTurn(16, 1);
            self->unk_240 = t + j;
        }
        break;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222af84
extern "C" void DungBeetle_Update(Rec *self) {
    switch (self->unk_251) {
    case 4:
        func_ov068_02269b20(self);
        break;
    case 5:
        func_ov068_02269d18(self);
        break;
    case 9:
    case 11:
        TreeBug_FlyOff(self, &self->unk_242);
        break;
    case 0x13:
        AnimModel_setFrame(&self->unk_50, 3);
        self->unk_251 = 4;
        break;
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222af48
extern "C" BOOL Insect_FadeOut(Rec *self, s32 a) {
    u8 *p = self->unk_130;
    s32 t = func_02106020((void *)func_0209c0ac(p), 0);
    if (t > 7) {
        NNS_G3dMdlSetMdlAlpha((void *)func_0209c0ac(p), 0, t - a);
    } else {
        return TRUE;
    }
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_ov068_02269b20 _ZN18Unk_ov068_0226821419func_ov068_02269b20Ev
#define func_ov068_02269d18 _ZN18Unk_ov068_0226821419func_ov068_02269d18Ev
namespace s09 {
// 0x222adc4
extern "C" BOOL Insect_GroundWalk(Rec *self) {
    BOOL result;
    s16 *cnt;
    V3 v;
    Unk_0203398c g;
    V3 *pos = &self->unk_204;
    cnt = &self->unk_242;
    s32 r6 = 2;
    result = TRUE;
    g.func_020339bc((Unk_0203389c_Vec *)(pos), 0, result);
    s8 r7 = self->unk_24d;
    Insect_GetDirVec(&v, self->unk_23a);
    if (g.unk_30 != 0) {
        if (g.func_020338d0(pos->y)) {
            Insect_Despawn(self);
            Insect_SplashIfWater(self);
            result = FALSE;
        } else {
            pos->y -= 0x200;
        }
    } else {
        pos->y -= 0x200;
    }
    if (Insect_SteerAroundObstacle(self)) {
        self->unk_24b = 0;
        return TRUE;
    }
    if ((u8)(s8)(r7 - 0x36) <= 1) {
        if (self->unk_251 == 5) {
            if (self->unk_23e > 0 && r7 != 0x37) {
                r6 = 12;
            } else {
                r6 = 7;
            }
        } else {
            r6 = 4;
        }
    }
    s32 o;
    s32 sp;
    if (self->unk_24d == 0x37) {
        sp = 0x71c;
    } else {
        sp = 0xaaa;
    }
    s32 c = *cnt;
    if (c == 0) {
        o = self->unk_23a;
        self->unk_23a = o + FX_Div(sp, 0x2000);
    } else if (c % 4 == 0) {
        self->unk_23a = sp + self->unk_23a;
    } else if (c % 2 == 0) {
        self->unk_23a = self->unk_23a - sp;
    }
    pos->x += func_01ffcb0c(v.x, (r6 * self->unk_257) << 12);
    pos->z += func_01ffcb0c(v.z, (r6 * self->unk_257) << 12);
    *cnt = *cnt + 1;
    self->unk_24b = 1;
    return result;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_ov068_02269b20
#undef func_ov068_02269d18

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222abc0
extern "C" s32 Insect_GroundWalkNet(Rec *self) {
    V3 *pos = &self->unk_204;
    s16 *cnt = &self->unk_242;
    s32 ret = 0;
    Unk_ov003_0222abc0_Obj o;
    func_020339bc(&o, pos, ret, 1);
    V3 *vel = &self->unk_1d4;
    V3 dir;
    Insect_GetDirVec(&dir, self->unk_23a);
    s32 nang;
    if (func_020a62a0() != 0 || self->unk_251 == 0x11) {
        if (o.unk_30 != 0) {
            if (func_020338d0(&o, pos->y) != 0) {
                Insect_Despawn(self);
                Insect_SplashIfWater(self);
                ret = 2;
            } else {
                pos->y = pos->y - 0x200;
                ret = 1;
            }
        }
    }
    if (Insect_SteerAroundObstacle(self) != 0) {
        self->unk_24b = 0;
        s32 c = *cnt;
        if (c < 2) {
            nang = (s16)(self->unk_23a - 0xaaa);
        } else {
            s32 n = c + 1;
            if (n % 4 == 0) {
                nang = (s16)(self->unk_23a + 0xaaa);
            } else if (n % 2 == 0) {
                nang = (s16)(self->unk_23a - 0xaaa);
            }
        }
        Insect_SetMoveTarget(self, nang, 0xc000);
        func_02033988(&o);
        return 0;
    }
    s32 r;
    if (self->unk_24d == 0x1e) {
        r = func_020e7d4c(pos, vel, 0x28, 0x1000, 0x19a);
    } else {
        r = func_020e7d4c(pos, vel, 8, 0x1000, 0x52);
    }
    if (r == 0) {
        if (func_020a62a0() != 0) {
            if (Insect_SetMoveTarget(self, self->unk_23a, 0xc000) == 0) {
                vel->x += data_02135f44[((u16)self->unk_23a >> 4) * 2];
                vel->z += data_02135f44[(((u16)self->unk_23a >> 4) * 2 + 1)];
                func_02033988(&o);
                return 0;
            }
        }
    } else {
        self->unk_23a = Math_AngleXZ(pos, vel);
    }
    s32 c = *cnt;
    if (c == 0) {
        s32 a = self->unk_23a;
        self->unk_23a = a + FX_Div(0x2000, 0x6000);
    } else if (c % 4 == 0) {
        self->unk_23a = self->unk_23a + 0xaaa;
    } else if (c % 2 == 0) {
        self->unk_23a = self->unk_23a - 0xaaa;
    }
    (*cnt)++;
    self->unk_24b = 1;
    func_02033988(&o);
    return ret;
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222ab68
extern "C" void Insect_ClampStepXZ(V3 *out, V3 *in, s32 c) {
    s32 lim = FX_Div(c << 12, 0x40000);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    out->y = 0;
    s32 x = in->x;
    if (x >= 0) {
        if (x > lim) {
            out->x = lim;
        }
    } else {
        s32 n = -lim;
        if (x < n) {
            out->x = n;
        }
    }
    s32 z = in->z;
    if (z >= 0) {
        if (z > lim) {
            out->z = lim;
        }
    } else {
        lim = -lim;
        if (z < lim) {
            out->z = lim;
        }
    }
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a8d0
extern "C" void Spider_Update(Rec *self) {
    s16 *cnt = &self->unk_242;
    func_02106020(func_0209c0ac(self->unk_130), 0);
    s32 st = self->unk_251;
    if (st != 0xb && st != 9) {
        s32 xy[2];
        V3 q(self->unk_21c, 0, self->unk_204.z + 0x3e8);
        FieldPos_ToUnit(&xy[0], &xy[1], &q);
        void *g = TownBlockMap_Get();
        if (g) {
            s32 x = *(volatile s32 *)&xy[0];
            s32 y = *(volatile s32 *)&xy[1];
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (cell) {
                if (!Unk_ov003_0222a8d0_Chk(cell)) {
                    if (Insect_FadeOut(self, 3)) {
                        Insect_Despawn(self);
                        return;
                    }
                }
            }
        }
    }
    switch (st) {
    case 2:
        if (self->unk_24c != 0) {
            self->unk_24c = 0;
            self->unk_23c = 0x6b;
        } else {
            self->unk_24c = 1;
            self->unk_23c = -0x6b;
        }
        if (((self->unk_f4 << 4) >> 16) == 0x38) {
            self->unk_251 = 0x13;
            self->unk_23c = 0;
            self->unk_204.x = self->unk_21c;
            NNS_G3dMdlSetMdlAlpha(func_0209c0ac(self->unk_130), 0, 0);
        }
        break;
    case 1:
        if (((self->unk_f4 << 4) >> 16) == 0x20) {
            self->unk_232 = (func_02063b8c(4) + 0xc) * 0x14;
            self->unk_251 = 0x12;
            *cnt = 0;
        }
        break;
    case 11:
        Insect_HopArc(self, cnt);
        break;
    case 9:
        Insect_EscapeRun(self, cnt);
        break;
    case 0x12:
        if (func_ov068_02269a28(self)) {
            self->unk_23a = 0;
            self->unk_251 = 2;
            AnimFrameCtrl_setup(self->unk_ec, 0x39, 1, 0x1000, 0x20);
        }
        break;
    case 0x13:
        if (func_ov068_02269aa4(self)) {
            self->unk_251 = 1;
            self->unk_254 = 0;
            AnimFrameCtrl_setup(self->unk_ec, 0x21, 1, 0x1000, 0);
            NNS_G3dMdlSetMdlAlpha(func_0209c0ac(self->unk_130), 0, 0x1f);
        } else {
            self->unk_100 = 1;
        }
        break;
    }
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a7d4
extern "C" void TreeBug_Update(Rec *self) {
    s16 *cnt = &self->unk_242;
    u32 st = self->unk_251;
    if (st != 0xb && st != 9 && st != 7) {
        if (self->unk_24d == 0x1f) {
            Walkingstick_CheckAlarm(self, cnt);
        } else {
            TreeBug_CheckAlarm(self, cnt);
            self->unk_24a = 0;
        }
    }
    switch (st) {
    case 3:
        TreeBug_Wiggle(self, cnt);
        break;
    case 2:
        TreeBug_ClimbUp(self, cnt);
        break;
    case 1:
        TreeBug_ClimbDown(self, cnt);
        break;
    case 9:
        Insect_EscapeRun(self, cnt);
        (*cnt)++;
        break;
    case 11:
        if (self->unk_24d != 0x1f) {
            TreeBug_FlyOff(self, cnt);
        } else {
            Insect_HopArc(self, cnt);
        }
        break;
    case 7:
        self->unk_24a = 1;
        TreeBug_DropAndFly(self, cnt);
        break;
    case 8:
        if (Insect_FadeOut(self, 2)) {
            Insect_Despawn(self);
        }
        break;
    case 0:
    case 4:
    case 5:
    case 6:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        break;
    case 19:
        TreeBug_Idle(self, cnt);
        break;
    }
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a6cc
extern "C" void TreeBug_Idle(Rec *self, s16 *cnt) {
    if ((u8)(s8)(self->unk_24d - 0x10) <= 4) {
        u8 f = self->unk_246;
        if (f != 0 && self->unk_254 < 10) {
            u8 c = self->unk_252;
            if (c == 0 && f != 0) {
                Insect_PlaySe(self, 0, 1);
            } else {
                self->unk_252 = c - 1;
            }
        } else {
            self->unk_252 = 0x3c;
        }
    } else {
        u8 rnd = func_02063b8c(100);
        if (self->unk_24d == 9) {
            u32 st = (self->unk_f4 << 4) >> 16;
            if (st == 0xd || st < 9) {
                AnimFrameCtrl_setup(self->unk_ec, 9, 1, 0, 9);
            }
            if (*cnt > 0x50) {
                if (rnd > 0x5c && st < 0xa) {
                    AnimFrameCtrl_setup(self->unk_ec, 0xe, 1, 0x1000, 9);
                }
                if (*cnt > 0xa0) {
                    *cnt = 0;
                }
            }
            (*cnt)++;
        } else if (rnd > 0x46) {
            (*cnt)++;
            if (*cnt % 0x14 == 0) {
                if (rnd < 0x55) {
                    self->unk_251 = 3;
                } else {
                    self->unk_251 = 2;
                }
                *cnt = 0;
            }
        }
    }
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a630
extern "C" void TreeBug_ClimbUp(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 lim = self->unk_228 + 0x400;
    V3 *pos = &self->unk_204;
    s32 c = *cnt;
    if (c >= 8) {
        if (func_02063b8c(100) > 0x46) {
            self->unk_251 = 1;
        }
        *cnt = 0;
    } else {
        if (c >= 2 && c < 6) {
            ang = (s16)(ang - 0x16b);
            self->unk_238 -= 0xb6;
        } else {
            ang = (s16)(ang + 0x16b);
            self->unk_238 += 0xb6;
        }
        pos->y += 0x20;
        (*cnt)++;
        if (pos->y > lim) {
            pos->y = lim;
        }
    }
    self->unk_23a = ang;
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a594
extern "C" void TreeBug_ClimbDown(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 lim = self->unk_228 - 0x100;
    V3 *pos = &self->unk_204;
    s32 c = *cnt;
    if (c >= 8) {
        if (func_02063b8c(100) > 0x46) {
            self->unk_251 = 0x13;
        }
        *cnt = 0;
    } else {
        if (c >= 2 && c < 6) {
            ang = (s16)(ang - 0x16b);
            self->unk_238 -= 0xb6;
        } else {
            ang = (s16)(ang + 0x16b);
            self->unk_238 += 0xb6;
        }
        pos->y -= 0x20;
        (*cnt)++;
        if (pos->y < lim) {
            pos->y = lim;
        }
    }
    self->unk_23a = ang;
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a4a0
extern "C" void TreeBug_Wiggle(Rec *self, s16 *cnt) {
    s32 ang = self->unk_23a;
    s32 c = *cnt;
    if (c == 0) {
        if (func_02063b8c(100) < 0x32) {
            *cnt = 1;
        } else {
            *cnt = -1;
        }
    } else if ((c > 0 && c <= 6) || (c > 0x12 && c <= 0x18) || !(c >= -6 || c < -0x12)) {
        if (c > 0) {
            (*cnt)++;
            self->unk_238 += 0xb6;
        } else {
            (*cnt)--;
            self->unk_238 -= 0xb6;
        }
        ang = (s16)(ang + 0x16b);
    } else if ((c > 6 && c <= 0x12) || (c < 0 && c >= -6) || !(c >= -0x12 || c < -0x18)) {
        if (c > 0) {
            (*cnt)++;
            self->unk_238 -= 0xb6;
        } else {
            (*cnt)--;
            self->unk_238 += 0xb6;
        }
        ang = (s16)(ang - 0x16b);
    } else {
        *cnt = 0;
        self->unk_251 = 0x13;
    }
    self->unk_23a = ang;
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define func_020338d0 _ZN12Unk_0203389c13func_020338d0Ei
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_02133150 _s32_div_f
#define func_ov068_02269a28 _ZN18Unk_ov068_0226821419func_ov068_02269a28Ev
#define func_ov068_02269aa4 _ZN18Unk_ov068_0226821419func_ov068_02269aa4Ev
namespace s08 {
// 0x222a36c
extern "C" void TreeBug_FlyOff(Rec *self, s16 *cnt) {
    s32 t, mode;
    V3 *pos;
    u32 st;
    pos = &self->unk_204;
    st = (self->unk_f4 << 4) >> 16;
    mode = self->unk_24d;
    t = FX_Div(*cnt << 12, 0x4000);
    u8 *s = self->unk_50;
    V3 v;
    Insect_GetDirVec(&v, self->unk_23a);
    if (*cnt == 0) {
        Insect_PlaySe(self, 1, 0);
    }
    v.y = func_01ffcb0c(func_01ffcb0c(0x100, t), t);
    if (Insect_CheckObstacle(self, 0x50, 0xe38) == 0) {
        v.x = v.x << 4;
        v.z = v.z << 4;
    }
    VEC_Add(pos, &v, pos);
    (*cnt)++;
    if (mode == 0x14) {
        if (((*(u32 *)(s + 0xa0) << 4) >> 16) < 0x18) {
            AnimFrameCtrl_setup(s + 0x9c, 0x1a, 0, 0x1000, 0x18);
        } else if (((*(u32 *)(s + 0xa4) << 4) >> 16) < 0x18) {
            *(u32 *)(s + 0xa4) = 0x18000;
        }
    } else if (self->unk_24d == 9) {
        if (*(u8 *)(s + 0xb0) != 0) {
            AnimFrameCtrl_setup(s + 0x9c, 9, 0, 0x1000, 0);
        }
    } else {
        AnimModel_setFrame(s, st == 1 ? 2 : 1);
    }
    if (Insect_FadeOut(self, 1)) {
        Insect_Despawn(self);
    }
}
}
#undef func_020338d0
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac
#undef func_02133150
#undef func_ov068_02269a28
#undef func_ov068_02269aa4

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x222a24c
extern "C" void TreeBug_DropAndFly(Rec *o, s16 *p) {
    V3 *pos = &o->unk_204;
    s32 st = o->unk_24d;
    if (st != 0x10 && st != 0x11 && st != 0x12 && st != 0x13) {
        Insect_PlaySe(o, 0, 1);
    }
    if (o->unk_23a >= 0) {
        pos->x += 0x200;
    } else {
        pos->x -= 0x200;
    }
    if (Insect_FadeOut(o, 1)) {
        Insect_Despawn(o);
    } else {
        s32 t = FX_Div(*p << 12, 0x4000);
        pos->y += func_01ffcb0c(func_01ffcb0c(0x100, t), t);
        *p = *p + 1;
        if (o->unk_251 == 0xb && (o->unk_23a == 0x6001 || o->unk_23a == -0x6001)) {
            pos->z -= 0x100;
        } else {
            pos->z += 0x100;
        }
        if (st == 0x14) {
            if (o->unk_f0.mid < 0x18) {
                AnimFrameCtrl_setup(o->unk_ec, 0x1a, 0, 0x1000, 0x18);
            } else if (o->unk_f4.mid < 0x18) {
                *(u32 *)&o->unk_f4 = 0x18000;
            }
        } else {
            Insect_FlapWings(o);
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x222a1c8
extern "C" void Walkingstick_CheckAlarm(Rec *o, s16 *p) {
    if (o->unk_254 == 0xfe) {
        o->unk_251 = 8;
    } else {
        V3 tv;
        Insect_UpdateAlarm(o, (s32 *)&tv);
        if (tv.x != 0) {
            s16 v = ((o->unk_255 - o->unk_254) * 31) / o->unk_255;
            if (v <= 0) {
                Insect_Despawn(o);
                o->unk_24a = 1;
                *p = 0;
            } else {
                if (v > 0x1f) {
                    v = 0x1f;
                }
                NNS_G3dMdlSetMdlAlpha(func_0209c0ac(o->unk_130), 0, v);
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x222a090
extern "C" void TreeBug_CheckAlarm(Rec *o, s16 *p) {
    V3 *pos = &o->unk_204;
    s32 n = o->unk_254;
    V3 tv;
    Insect_UpdateAlarm(o, (s32 *)&tv);
    if (tv.x != 0 && o->unk_24a == 0) {
        s32 lim = o->unk_255;
        if (n >= lim) {
            s32 a;
            if (tv.x > pos->x) {
                a = (s16)0xffff9554;
            } else {
                a = 0x6aac;
            }
            o->unk_23a = a;
            o->unk_238 = 0xd55;
            o->unk_251 = 7;
            o->unk_24a = 1;
            AnimModel_setFrame(o->unk_50, 1);
            s32 z = 0;
            *p = z;
            Insect_PlaySe(o, 1, z);
            if (o->unk_24d == 9) {
                AnimFrameCtrl_setup(o->unk_ec, 9, 0, 0x1000, 0);
            }
        } else if (o->unk_24d == 0x14) {
            if (n * 2 >= lim || o->unk_252 != 0) {
                if (o->unk_f4.mid == 0) {
                    AnimFrameCtrl_setup(o->unk_ec, 4, 1, 0x1000, 0);
                    o->unk_252 = 0x3c;
                } else if (o->unk_252 != 0) {
                    o->unk_252--;
                }
            } else {
                s32 m = (s32)(*(u32 *)&o->unk_f4) >> 12;
                if ((u16)m != 0 || o->unk_f0.mid != 0) {
                    AnimFrameCtrl_setup(o->unk_ec, 0, 3, 0x1000, (u16)m);
                }
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x2229eac
extern "C" void Crawler_Update(Rec *o) {
    s16 *p = &o->unk_242;
    if ((u8)(s8)(o->unk_24d - 0xe) <= 1 && o->unk_f4.mid != 0) {
        if (o->unk_251 == 4 || o->unk_251 == 0x13) {
            void *r = func_02095204(4);
            if (r != 0) {
                o->unk_23a = Math_AngleXZ(&o->unk_204, (u8 *)r + 0x5c);
            }
            o->unk_251 = 0x13;
        }
    }
    switch (o->unk_251) {
    case 4:
        Crawler_Wander(o);
        if (o->unk_24d == 0x1a) {
            if (*p > 0x140 || (*p % 20 == 0 && func_02063b8c(100) > 0x5a && *p > 0xa0)) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        } else {
            if (*p > 0xa0 || (*p % 20 == 0 && func_02063b8c(100) > 0x5a && *p > 0x50)) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        }
        Crawler_Watch(o, p);
        break;
    case 7:
        o->unk_251 = 9;
        o->unk_23a = o->unk_240;
        *p = 0;
    case 9:
        Crawler_Escape(o, p);
        break;
    case 11:
        if (o->unk_24d == 0x1a) {
            Insect_HopArc(o, p);
        } else {
            Crawler_Escape(o, p);
        }
        break;
    case 0x13:
        if (o->unk_24d == 0x1a) {
            if (o->unk_f4.mid == 2) {
                if (*p > 0xa0 || (*p % 20 == 0 && func_02063b8c(100) > 0x55 && *p >= 0x28)) {
                    *p = 0;
                    o->unk_251 = 4;
                }
            }
        } else {
            if (*p > 0x38 || (*p % 5 == 0 && func_02063b8c(100) > 0x55 && *p > 0)) {
                o->unk_251 = 4;
                *p = 0;
            }
        }
        Crawler_Watch(o, p);
        break;
    }
    *p = *p + 1;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x2229dcc
extern "C" BOOL Insect_IsOnFlower(void *pp) {
    void *g = TownBlockMap_Get();
    if (g != 0) {
        s32 xy[2];
        FieldPos_ToUnit(&xy[0], &xy[1], pp);
        s32 hy, hx, x, y;
        x = *(volatile s32 *)&xy[0];
        y = *(volatile s32 *)&xy[1];
        hx = x >> 4;
        hy = y >> 4;
        u16 *c = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            if (Unk_ov003_02229dcc_Chk(c)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x2229c1c
extern "C" void Crawler_Watch(Rec *o, s16 *p) {
    void *r4 = func_02095204(4);
    V3 *q = &o->unk_204;
    if (Insect_IsOnFlower(q) == 0) {
        o->unk_254 = 0xfe;
    }
    o->unk_24a = 0;
    Insect_CheckAlarm(o);
    if (r4 != 0) {
        s32 d = func_020e9650((u8 *)r4 + 0x5c, q);
        s32 n = o->unk_254;
        s32 st;
        if (d <= 0xccd) {
            o->unk_251 = 9;
            *p = 0;
        } else if (st = o->unk_24d, (u8)(s8)(st - 0xe) <= 1) {
            if (n > 0x14) {
                AnimFrameCtrl_setup(o->unk_ec, 9, 1, 0x1000, o->unk_f4.mid);
                o->unk_252 = 0x3c;
            } else if (o->unk_252 != 0) {
                o->unk_252--;
            } else if (d < o->unk_224) {
                u32 m = o->unk_f4.mid;
                if (m == 0) {
                    AnimFrameCtrl_setup(o->unk_ec, 4, 1, 0x1000, 0);
                } else if (m > 4) {
                    AnimFrameCtrl_setup(o->unk_ec, 4, 3, 0x1000, m);
                }
            } else {
                u32 m = o->unk_f4.mid;
                if (m != 0) {
                    AnimFrameCtrl_setup(o->unk_ec, 0, 3, 0x1000, m);
                }
            }
        } else if (st == 0x1a) {
            if (n > 0x14) {
                u32 m = o->unk_f4.mid;
                if (m == 2) {
                    AnimModel_setFrame(o->unk_50, 1);
                } else if (m == 1) {
                    AnimModel_setFrame(o->unk_50, 0);
                    o->unk_251 = 0x13;
                    o->unk_252 = 0x3c;
                }
            } else {
                s32 t = (s32)(*(u32 *)&o->unk_f4) >> 12;
                if ((u16)t == 0 && o->unk_252 == 0) {
                    AnimModel_setFrame(o->unk_50, 1);
                } else if ((u16)t == 1) {
                    AnimModel_setFrame(o->unk_50, 2);
                } else if (o->unk_252 != 0) {
                    o->unk_252--;
                }
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x2229ab4
extern "C" void Crawler_Wander(Rec *o) {
    V3 *hi = &o->unk_1bc;
    V3 *lo = &o->unk_1b0;
    s16 a = o->unk_23a;
    u8 flip = o->unk_24b;
    struct { V3 d; V3 save; } l;
    l.d.x = 0;
    l.d.y = 0;
    l.d.z = 0;
    V3 *p = &o->unk_204;
    l.save.x = p->x;
    l.save.y = p->y;
    l.save.z = p->z;
#define d l.d
#define save l.save
    if (func_02063b8c(100) > 0x50) {
        if (o->unk_24f % 20 == 0) {
            if (flip == 0) {
                flip = 1;
            } else {
                flip = 0;
            }
            o->unk_24b = flip;
        }
        if (flip != 0) {
            if (o->unk_24d == 0x33) {
                a = a + (s16)o->unk_21c;
            } else {
                a = a + 0xaaa;
            }
        } else {
            if (o->unk_24d == 0x33) {
                a = a + 0xaaa;
            } else {
                a = a - (s16)o->unk_21c;
            }
        }
    }
    Insect_GetDirVec(&d, a);
    o->unk_23a = a;
    p->z += FX_Div(func_01ffcb0c(o->unk_257 << 12, d.z), 0x20000);
    p->x += FX_Div(func_01ffcb0c(o->unk_257 << 12, d.x), 0x20000);
    if (p->x < lo->x || p->x > hi->x) {
        p->x = save.x;
    }
    if (p->z < lo->z || p->z > hi->z) {
        p->z = save.z;
    }
    if (o->unk_24d != 0x33) {
        if (p->z != save.z) {
            p->y = p->y - (p->z - save.z);
        }
        if (p->y < lo->y && p->y > hi->y) {
            p->y = save.y;
        }
    }
}
#undef d
#undef save
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s07 {
// 0x2229a3c
extern "C" void Insect_PlaceOnPlantSide(Rec *o) {
    V3 *p = &o->unk_204;
    if (func_02063b8c(2) == 0) {
        p->x += FX_Div(0x7000, 0x10000);
        p->y = FX_Div(0xc000, 0x10000);
        p->z += FX_Div(0x3000, 0x10000);
    } else {
        p->x -= FX_Div(0x7000, 0x10000);
        p->y = FX_Div(0xc000, 0x10000);
        p->z += FX_Div(0x3000, 0x10000);
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229938
extern "C" void Insect_SetWanderBox(Rec *self) {
    Vec3 *r5 = &self->unk_204;
    Vec3 *r4 = &self->unk_1b0;
    Vec3 *r6 = &self->unk_1bc;
    if (self->unk_24d == 0x33) {
        r4->x = r5->x - FX_Div(0x6000, 0x10000);
        r4->y = FX_Div(0xa000, 0x10000);
        r4->z = r5->z - FX_Div(0x4000, 0x10000);
        r6->x = r5->x + FX_Div(0x6000, 0x10000);
        r6->y = FX_Div(0xc000, 0x10000);
        r6->z = r5->z + FX_Div(0x4000, 0x10000);
    } else if (self->unk_24d == 0x19) {
        r4->x = r5->x - 0x6000;
        r4->z = r5->z + 0x6000;
        r6->x = r5->x + 0x6000;
        r6->z = r5->z - 0x6000;
    } else {
        r4->x = r5->x - FX_Div(0x9000, 0x10000);
        r4->y = FX_Div(0x9000, 0x10000);
        r4->z = r5->z - FX_Div(0x2000, 0x10000);
        r6->x = r5->x + FX_Div(0x9000, 0x10000);
        r6->y = 0x1000;
        r6->z = r5->z + FX_Div(0x5000, 0x10000);
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229910
extern "C" void Insect_Despawn(Rec *self) {
    self->unk_250 = 4;
    NNS_G3dMdlSetMdlAlpha(func_0209c0ac(self->unk_130), 0, 0);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22297c8
extern "C" void Crawler_Escape(Rec *self, s16 *pp) {
    if (self->unk_24d != 0x1a) {
        Vec3 *r6 = &self->unk_204;
        Vec3 v;
        if (Insect_CheckObstacle(self, 0x50, 0xe38) == 0) {
            Insect_GetDirVec(&v, self->unk_23a);
            if (self->unk_251 == 0xb) {
                v.x = func_01ffcb0c(v.x, 0xa000);
                v.z = func_01ffcb0c(v.z, 0xa000);
            } else {
                v.x = func_01ffcb0c(v.x, 0xf000);
                v.z = func_01ffcb0c(v.z, 0xf000);
            }
        } else {
            v.x = 0;
            v.z = 0;
        }
        s32 t = *pp;
        v.y = t * ((t + 0xc) * 2);
        if ((u8)(s8)(self->unk_24d - 0xe) <= 1) {
            if (self->unk_f0.mid != 0xb) {
                AnimFrameCtrl_setup(self->unk_ec, 0xb, 0, 0x1000, 9);
            } else if (self->unk_f4.mid < 9) {
                *(u32 *)&self->unk_f4 = 0x9000;
            }
        } else {
            Insect_FlapWings(self);
        }
        if (*pp == 0) {
            Insect_PlaySe(self, 1, 0);
        }
        if (Insect_FadeOut(self, 1)) {
            Insect_Despawn(self);
        }
        VEC_Add(r6, &v, r6);
    } else {
        Insect_EscapeRun(self, pp);
        u32 m = self->unk_f4.mid;
        if (m == 0) {
            AnimModel_setFrame((u8 *)self + 0x50, 1);
        } else if (m == 1) {
            AnimModel_setFrame((u8 *)self + 0x50, 2);
        }
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229698
extern "C" void Insect_InitBehaviour(Rec *self, s16 a1, s32 a2, s32 a3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5) {
    Buf b;
    Vec3 *p = &self->unk_204;
    func_020339bc(&b, p, 0, 0);
    Vec3 *q = &self->unk_210;
    s32 r6 = FX_Div(s2 << 12, 0x10000);
    s32 r0 = FX_Div(a3 << 12, 0x10000);
    if (self->unk_251 != 0xb && self->unk_251 != 0x10) {
        self->unk_251 = 0x13;
        self->unk_23a = s1;
        Vec3 *d = &self->unk_1d4;
        d->x = p->x;
        d->y = p->y;
        d->z = p->z;
        if (*(u8 *)&s5) {
            p->y = r6 + b.unk_3c;
        } else {
            p->y = r6;
        }
    }
    self->unk_238 = s0;
    self->unk_255 = a2;
    self->unk_224 = r0;
    if (self->unk_24d != 0x23) {
        self->unk_21c = 0;
    }
    self->unk_257 = *(u8 *)&s4;
    self->unk_23e = 0;
    self->unk_254 = 0;
    self->unk_228 = p->y + s3;
    self->unk_244 = a1;
    q->x = 0x1000;
    q->y = 0x1000;
    q->z = 0x1000;
    self->unk_220 = self->unk_228;
    self->unk_236 = 0;
    self->unk_24e = 0;
    func_02033988(&b);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229670
extern "C" s16 Insect_RandomAngle() {
    u32 r = (u8)func_02063b8c(0x10);
    if (r > 8) {
        r = -(r - 8);
    }
    return (s16)(r * 0xaaa);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229668
extern "C" void Insect_UpdateButterfly(Rec *self) {
    Butterfly_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22295ec
extern "C" void Insect_InitFlutter(Rec *self, s32 a, s32 b, s32 c, u8 d, s32 e) {
    s32 r = func_02063b8c(3);
    Insect_InitBehaviour(self, (s16)((r + 5) * 0x14), a, b, 0, Insect_RandomAngle(), c, 0, d, 0);
    self->unk_252 = 0x28;
    self->unk_256 = func_02063b8c(0x12);
    self->unk_24c = 1;
    self->unk_21c = e;
    self->unk_232 = 0;
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22294f8
extern "C" void Insect_InitButterfly(Rec *self) {
    switch (self->unk_24d) {
    case 0:
        Insect_InitFlutter(self, 0x64, 0x50, 0x25, 8, 0x119a);
        break;
    case 1:
        Insect_InitFlutter(self, 0x64, 0x50, 0x25, 8, 0x119a);
        break;
    case 2:
        Insect_InitFlutter(self, 0x50, 0x50, 0x28, 9, 0x1000);
        break;
    case 3:
        Insect_InitFlutter(self, 0x50, 0x50, 0x28, 9, 0x1000);
        break;
    case 4:
        Insect_InitFlutter(self, 0x3c, 0x50, 0x2f, 0xa, 0xe66);
        break;
    case 5:
        Insect_InitFlutter(self, 0x46, 0x50, 0x14, 0xc, 0x1000);
        break;
    case 6:
        Insect_InitFlutter(self, 0x64, 0x1e, 0x32, 0xf, 0x1000);
        break;
    case 7:
        Insect_InitFlutter(self, 0x3c, 0x50, 0x34, 0xc, 0x1000);
        break;
    default:
        Insect_InitFlutter(self, 0x3c, 0x50, 0x2d, 0xa, 0x1000);
        break;
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22294f0
extern "C" void Insect_UpdateMoth(Rec *self) {
    Moth_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229464
extern "C" void Insect_InitMoth(Rec *self) {
    Vec3 *d = &self->unk_1e0;
    Insect_InitBehaviour(self, 0x384, 0xc8, 0x28, 1, -0x8000, 0x2f, 0, 0xa, 0);
    self->unk_252 = 0x3c;
    self->unk_256 = func_02063b8c(0x12);
    self->unk_24c = 1;
    self->unk_220 = 0;
    Vec3 *s = &self->unk_204;
    self->unk_1e0.x = s->x;
    d->y = s->y;
    d->z = s->z;
    Insect_SetAnimSpeed(self, 0x1000);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229424
extern "C" void Insect_InitFirefly(Rec *self) {
    s32 t = self->unk_21c;
    Insect_InitBehaviour(self, 0, 0x5a, 0x3c, 0, 0, 0x3c, 0, 6, 1);
    self->unk_21c = t;
    self->unk_252 = 0x3c;
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x222941c
extern "C" void Insect_UpdateFirefly(Rec *self) {
    Firefly_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22293f8
extern "C" void Insect_InitMosquito(Rec *self) {
    Insect_InitBehaviour(self, 0, 0, 0, 0, 0, 0x19, 0, 0x19, 0);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22293f0
extern "C" void Insect_UpdateMosquito(Rec *self) {
    Mosquito_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229370
extern "C" void Insect_PlaceOnTrunk(Rec *self, s32 a, s32 b, s32 c, s32 d) {
    Vec3 *v = &self->unk_204;
    if (self->unk_24d == 0x1f && self->unk_251 == 0xb) {
        Insect_InitBehaviour(self, 0, a, b, 0, 0, 0, 0, 0, 0);
    } else {
        Insect_InitBehaviour(self, 0, a, b, 0x3556, -0x8000, c, 0, 0, 0);
        v->z += d;
        self->unk_246 = 1;
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229368
extern "C" void Insect_UpdateTreeBug(Rec *self) {
    TreeBug_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229144
extern "C" void Insect_InitTreeBug(Rec *self) {
    switch (self->unk_24d) {
    case 0x2f:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2e:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2d:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2c:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x28:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x29:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2a:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x26:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x21:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x27:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x2b:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x22:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x24:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    case 0x1f:
        Insect_PlaceOnTrunk(self, 0xfa, 0x50, 0x16, 0x1f4);
        self->unk_257 = 1;
        break;
    case 9:
        Insect_PlaceOnTrunk(self, 0x96, 0x46, 0x18, 0x3e8);
        self->unk_257 = 0xa;
        AnimFrameCtrl_setup(self->unk_ec, self->unk_f0.mid, 1, 0x1000, 0);
        break;
    case 0x10:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x11:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x12:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x13:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    case 0x14:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        self->unk_252 = 0;
        break;
    case 0x34:
        Insect_PlaceOnTrunk(self, 0x82, 0x3c, 0x16, 0x3e8);
        break;
    default:
        Insect_PlaceOnTrunk(self, 0x64, 0x50, 0x19, 0x3e8);
        break;
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22290e4
extern "C" void Insect_InitHop(Rec *self, s32 a, s32 b, s32 c, u8 d) {
    Insect_InitBehaviour(self, 0x3b6, a, b, 0, Insect_RandomAngle(), 0, 0, c, 0);
    self->unk_232 = (func_02063b8c(9) + 2) * 0x14;
    self->unk_259 = d;
    self->unk_204.y = 0;
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x22290dc
extern "C" void Insect_UpdateHopper(Rec *self) {
    Hopper_Update(self);
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
namespace s06 {
// 0x2229050
extern "C" void Insect_InitHopper(Rec *self) {
    switch (self->unk_24d) {
    case 0x1d:
        Insect_InitHop(self, 0x3c, 0x46, 6, 1);
        break;
    case 0x1b:
        Insect_InitHop(self, 0x3c, 0x46, 6, 1);
        break;
    case 0xc:
        Insect_InitHop(self, 0x3c, 0x50, 8, 2);
        break;
    case 0xd:
        Insect_InitHop(self, 0x3c, 0x50, 8, 3);
        break;
    case 0x1c:
        Insect_InitHop(self, 0x3c, 0x46, 8, 1);
        break;
    }
}
}
#undef func_020339bc
#undef func_020547a4
#undef func_0205668c
#undef func_0209c0ac

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2229010
extern "C" void Insect_InitDragonflyParams(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 p4, u8 p5) {
    s16 r = Insect_RandomAngle();
    Insect_InitBehaviour(a, 0, x, y, 0, r, z, 0, p4, 0);
    a->unk_259 = p5;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228fb4
extern "C" void Insect_InitDragonfly(Unk_ov003_02228710_Act *a) {
    switch (a->unk_24d) {
    case 0x15:
        Insect_InitDragonflyParams(a, 0xc8, 0x3c, 0x28, 0x14, 1);
        break;
    case 0x16:
        Insect_InitDragonflyParams(a, 0xc8, 0x28, 0x2d, 0x1e, 3);
        break;
    case 0x17:
        Insect_InitDragonflyParams(a, 0x64, 0x46, 0x32, 0x78, 0x1e);
        break;
    }
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228fac
extern "C" void Insect_UpdateDragonfly(Unk_ov003_02228710_Act *a) {
    Dragonfly_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228f6c
extern "C" void Insect_InitPondskater(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x28, 0x50, 0, 0, 0, 0, 3, 1);
    Insect_SetWanderBox(a);
    a->unk_232 = func_02063b8c(0x14) * 3;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228f64
extern "C" void Insect_UpdatePondskater(Unk_ov003_02228710_Act *a) {
    Pondskater_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228f0c
extern "C" void Insect_InitOnPlant(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, s16 w) {
    s16 r = Insect_RandomAngle();
    Insect_InitBehaviour(a, 0, x, y, 0, r, 0xe, 0, z, 0);
    Insect_SetWanderBox(a);
    if (a->unk_251 != 0xb) {
        Insect_PlaceOnPlantSide(a);
    }
    a->unk_21c = w;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228f04
extern "C" void Insect_UpdateCrawler(Unk_ov003_02228710_Act *a) {
    Crawler_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228e60
extern "C" void Insect_InitCrawler(Unk_ov003_02228710_Act *a) {
    switch (a->unk_24d) {
    case 0x1a:
        Insect_InitOnPlant(a, 0xc8, 0x3c, 4, 0x38e);
        break;
    case 0x20:
        Insect_InitOnPlant(a, 0x82, 0x3c, 0x10, 0x71c);
        break;
    case 0xe:
        Insect_InitOnPlant(a, 0x96, 0x32, 0x18, 0x71c);
        AnimFrameCtrl_setup(a->unk_ec, 0, 3, 0x1000, 1);
        break;
    case 0xf:
        Insect_InitOnPlant(a, 0x96, 0x32, 0x18, 0x71c);
        AnimFrameCtrl_setup(a->unk_ec, 0, 3, 0x1000, 1);
        break;
    }
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228de0
extern "C" void Insect_InitBurrower(Unk_ov003_02228710_Act *a) {
    if (a->unk_24d == 0x1e) {
        Insect_InitBehaviour(a, 0, 0x28, 0x50, 0, 0, 0, 0, 4, 0);
    } else {
        Insect_InitBehaviour(a, 0, 0xdc, 0x3c, 0, 0, 0, 0, 1, 0);
    }
    a->unk_232 = 0x168;
    if (a->unk_251 != 0xb && a->unk_251 != 0x10) {
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(a->unk_130), 0, 0);
    }
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228dd8
extern "C" void Insect_UpdateMoleCricket(Unk_ov003_02228710_Act *a) {
    MoleCricket_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228dd0
extern "C" void Insect_UpdatePillBug(Unk_ov003_02228710_Act *a) {
    PillBug_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d7c
extern "C" void Insect_InitBee(Unk_ov003_02228710_Act *a) {
    if (a->unk_251 == 0x13) {
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(a->unk_130), 0, 0);
    }
    Insect_InitBehaviour(a, 0, 0x5a, 0x3c, 0, 0, 2, 0, 0, 0);
    a->unk_21c = 0;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d74
extern "C" void Insect_UpdateBee(Unk_ov003_02228710_Act *a) {
    Bee_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d48
extern "C" void Insect_InitHoneybee(Unk_ov003_02228710_Act *a) {
    Insect_InitFlutter(a, 0xc8, 0x3c, 0x25, 9, 0x1000);
    Insect_SetWanderBox(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d40
extern "C" void Insect_UpdateHoneybee(Unk_ov003_02228710_Act *a) {
    Hoverer_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d14
extern "C" void Insect_InitFly(Unk_ov003_02228710_Act *a) {
    Insect_InitFlutter(a, 0x96, 0x1e, 0x25, 0x12, 0x1000);
    Insect_SetWanderBox(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228d0c
extern "C" void Insect_UpdateFly(Unk_ov003_02228710_Act *a) {
    Hoverer_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228cc4
extern "C" void Insect_InitFlea(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x5a, 0x3c, 0, 0, 0x3c, 0, 8, 1);
    a->unk_21c = a->unk_257;
    a->unk_228 = a->unk_204.y;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228cbc
extern "C" void Insect_UpdateFlea(Unk_ov003_02228710_Act *a) {
    Flea_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228c1c
extern "C" void Insect_InitSpider(Unk_ov003_02228710_Act *a) {
    s16 t = func_02063b8c(0xb) + 5;
    Unk_ov003_02228710_Vec *p = &a->unk_204;
    t = t * 0x14;
    Insect_InitBehaviour(a, t, 0x5a, 0x40, 0, 0, 0x28, 0, 3, 0);
    if (a->unk_251 != 0xb && a->unk_251 != 0x10) {
        a->unk_21c = p->x;
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(a->unk_130), 0, 0);
        p->z -= 0x7d0;
    } else {
        a->unk_238 = (s16)0xc000;
        a->unk_23c = a->unk_23a;
    }
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228c14
extern "C" void Insect_UpdateSpider(Unk_ov003_02228710_Act *a) {
    Spider_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228c0c
extern "C" void Insect_UpdateStinger(Unk_ov003_02228710_Act *a) {
    Stinger_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228bdc
extern "C" void Insect_InitTarantula(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x64, 0x5a, 0, 0, 0, 0, 4, 0);
    a->unk_24c = 0;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b98
extern "C" void Insect_InitScorpion(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x64, 0x50, 0, 0, 0, 0, 5, 0);
    a->unk_24c = 0;
    AnimFrameCtrl_setup(a->unk_ec, 3, 0, 0x1000, 0);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b74
extern "C" void Insect_InitAnt(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x50, 0x50, 0, 0, 0, 0, 1, 0);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b6c
extern "C" void Insect_UpdateAnt(Unk_ov003_02228710_Act *a) {
    Ant_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b48
extern "C" void Insect_InitDungBeetle(Unk_ov003_02228710_Act *a) {
    Insect_InitBehaviour(a, 0, 0x50, 0x50, 0, 0, 0, 0, 3, 0);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b40
extern "C" void Insect_UpdateDungBeetle(Unk_ov003_02228710_Act *a) {
    DungBeetle_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b38
extern "C" void Insect_InitKind38(Unk_ov003_02228710_Act *a) {
    Insect_InitTreeBug(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b30
extern "C" void Insect_UpdateKind38(Unk_ov003_02228710_Act *a) {
    TreeBug_Update(a);
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
namespace s05 {
// 0x2228b18
extern "C" // factory (allocates 0xa0 bytes)
void *InsectManager_Create() {
    return new InsectManager;
}
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x2228ad0
InsectManager::InsectManager() { using namespace s05;
    sWateringActive = 0;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x2228a48
InsectManager::~InsectManager() { using namespace s05;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x222898c
BOOL InsectManager::allocHeldInsect(Unk_ov003_02228710_Act *e) { using namespace s05;
    if (e->unk_250 != 0) {
        s8 a = e->unk_24d;
        u8 b = e->unk_251;
        Unk_ov003_02228710_Vec v;
        Unk_ov003_02228710_Vec w;
        Unk_ov003_02228710_Vec *pv = &e->unk_204;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        pv = &e->unk_1d4;
        w.x = pv->x;
        w.y = pv->y;
        w.z = pv->z;
        s16 c = e->unk_23a;
        freeInsect(e, 3);
        e->unk_24d = a;
        e->unk_251 = b;
        pv = &e->unk_204;
        pv->x = v.x;
        pv->y = v.y;
        pv->z = v.z;
        e->unk_23a = c;
        pv = &e->unk_1d4;
        pv->x = w.x;
        pv->y = w.y;
        pv->z = w.z;
    }
    e->unk_250 = 2;
    func_0209c25c(&unk_80, e->unk_230);
    func_0209c0c8(e->unk_130);
    e->unk_249 = 1;
    return TRUE;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x2228924
BOOL InsectManager::allocSpecialInsect(s32 id, s32 idx) { using namespace s05;
    Unk_ov003_02228710_Act *e = (Unk_ov003_02228710_Act *)&sSpecialInsects[idx];
    if (e->unk_250 == 0) {
        func_0209c25c(&unk_68, e->unk_230);
        func_0209c0c8(e->unk_130);
        e->unk_249 = 1;
        e->unk_18 = 0;
        e->unk_1c = 0;
        e->unk_24d = (s8)id;
        e->unk_250 = 2;
        return TRUE;
    }
    return FALSE;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x22288dc
BOOL InsectManager::allocFieldInsect(Unk_ov003_02228710_Act *e) { using namespace s05;
    if (e->unk_250 == 0) {
        e->unk_250 = 2;
        func_0209c25c(&unk_50, e->unk_230);
        func_0209c0c8(e->unk_130);
        e->unk_249 = 0;
        return TRUE;
    }
    return FALSE;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x22287c8
void InsectManager::freeInsect(Unk_ov003_02228710_Act *e, s32 mode) { using namespace s05;
    Unk_ov003_02228710_Vec *p = &e->unk_204;
    Unk_ov003_02228710_Vec *q = &e->unk_1d4;
    if (e->unk_24d == 0x33) {
        func_02041868();
    }
    if (e->unk_24d >= 0) {
        AnimModel_detachAnim(e->unk_50);
    }
    e->unk_250 = 0;
    e->unk_21c = 0;
    Unk_02003c30_callRelease(e->unk_174);
    p->x = 1;
    p->y = 1;
    p->z = 1;
    q->x = 1;
    q->y = 1;
    q->z = 1;
    e->unk_248 = 0;
    e->unk_249 = 0;
    e->unk_258 = 0;
    e->unk_24d = -1;
    e->unk_23a = 0;
    e->unk_242 = 0;
    e->unk_251 = 0x13;
    func_0209c0b4(e->unk_130);
    e->unk_18 = 0;
    e->unk_1c = 0;
    e->unk_254 = 0;
    e->unk_24a = 0;
    e->unk_236 = 0;
    if (mode == 1) {
        func_0209c224(&unk_50, e->unk_230);
    } else if (mode == 2) {
        func_0209c224(&unk_68, e->unk_230);
    } else {
        func_0209c224(&unk_80, e->unk_230);
    }
    e->unk_170 = 0;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define AnimModel_detachAnim _ZN9AnimModel10detachAnimEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
// 0x2228710
BOOL InsectManager::vfunc_00() { using namespace s05;
    func_0209c1a4(&unk_50, 8, 0x400, 0x40, 0x9c4, (void *)func_0205c088, (void *)func_0205c06c, 0);
    func_0209c1a4(&unk_68, 2, 0x400, 0x40, 0x6e8, (void *)func_0205c0f0, (void *)func_0205c0d4, 0);
    func_0209c1a4(&unk_80, 4, 0x400, 0x40, 0x9c4, (void *)func_0205c0bc, (void *)func_0205c0a0, 0);
    u32 *g = gCommManager[0];
    if (CommManager_isSlotActive(g, g[0x64 / 4]) == 0) {
        allocSpecialInsect(0x3a, 0);
        allocSpecialInsect(0x3b, 1);
    }
    InsectSpawn_BuildMasks();
    return TRUE;
}
#undef func_02003c30
#undef func_0205468c
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c0b4
#undef func_0209c0c8
#undef func_0209c1a4
#undef func_0209c224
#undef func_0209c25c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x22283d0
extern "C" void Insect_LoadModel(Unk_ov003_022283d0_Own *a, Rec *e, s32 mode) {
    struct { char name[0x11]; char path[0x17]; } l;
    s32 m;
    void *h2;
    BOOL ok;
    void *p130;
    u8 *obj;
    Unk_ov003_02234b04_Rec *rec;
    func_02133ef8(l.name, 0x11);
    func_02133ef8(l.path, 0x17);
    s32 t4 = e->unk_24d;
    if (t4 < 0 || t4 >= 0x3c) {
        return;
    }
    if (t4 < 10) {
        func_020639e8(l.name, sInsectPathFmt0x, t4);
    } else if (t4 < 0x14) {
        func_020639e8(l.name, sInsectPathFmt1x, t4);
    } else if (t4 < 0x1e) {
        func_020639e8(l.name, sInsectPathFmt2x, t4);
    } else if (t4 < 0x28) {
        func_020639e8(l.name, sInsectPathFmt3x, t4);
    } else if (t4 < 0x32) {
        func_020639e8(l.name, sInsectPathFmt4x, t4);
    } else {
        func_020639e8(l.name, sInsectPathFmt5x, t4);
    }
    func_020639e8(l.path, sInsectModelExtFmt, l.name);
    if (!File_Exists(l.path)) {
        return;
    }
    void *h;
    if (mode == 0) {
        h = func_0209c25c(a->unk_50, &e->unk_230);
    } else if (mode == 1) {
        h = func_0209c25c(a->unk_68, &e->unk_230);
    } else {
        h = func_0209c25c(a->unk_80, &e->unk_230);
    }
    p130 = e->unk_130;
    if (!func_0209c0d0(p130, h, l.path)) {
        return;
    }
    obj = e->unk_50;
    Model_setResource(obj, func_0209c0ac(p130), 0);
    rec = &sInsectModelParams[t4];
    if (rec->unk_00 != 0) {
        func_020639e8(l.path, sInsectVisAnimExtFmt, l.name);
    } else {
        func_020639e8(l.path, sInsectJointAnimExtFmt, l.name);
    }
    if (!File_Exists(l.path)) {
        return;
    }
    h2 = func_0209c348(h);
    void *r7;
    if (mode == 1) {
        if (t4 == 0x3a) {
            a->unk_98 = File_LoadAlloc(l.path, gCurrentHeap, 4, 0);
            r7 = a->unk_98;
        } else {
            a->unk_9c = File_LoadAlloc(l.path, gCurrentHeap, 4, 0);
            r7 = a->unk_9c;
        }
    } else {
        r7 = File_LoadAlloc(l.path, h2, 4, 0);
    }
    if (r7 == 0) {
        return;
    }
    if (rec->unk_00 != 0) {
        m = func_021067a4(func_02106788(r7), 0);
    } else {
        m = func_021065f8(func_021065dc(r7), 0);
    }
    if (!AnimModel_allocAnmObj(obj, h2)) {
        return;
    }
    ok = TRUE;
    s32 sc = 0x1000;
    if (t4 == 0x35 || t4 == 9) {
        sc = 0;
    }
    BlendAnimModel_initAnim(obj, m, 0, sc, 0, 0);
    AnimModel_attachAnim(obj);
    if (t4 == 9) {
        AnimFrameCtrl_setup(&e->unk_ec, 9, 1, 0, 9);
    }
    if ((u32)(t4 - 0x3a) <= 1) {
        func_020639e8(l.path, sInsectTexAnimPathFmt, t4);
        ok = FALSE;
        if (File_Exists(l.path)) {
            File_LoadAlloc(l.path, h2, 4, 0);
            if (r7 != 0) {
                r7 = (void *)func_02106670(func_02106654(), 0);
                if (ModelAnim_allocMatAnm(e, *(void **)(obj + 0x5c), h2)) {
                    ModelAnim_init(e, (s32)r7, 0, 0x1000, 0);
                    ModelAnim_addToRenderObj(e, Model_getRenderObj(obj));
                    ok = TRUE;
                }
            }
        }
    }
    if (ok) {
        Vec3 *pv = &e->unk_210;
        Vec3 sv = *pv;
        Unk_02003c30_callReset(e->unk_174);
        sInsectBehaviours[t4].unk_00(e);
        e->unk_170 = (void (*)(Rec *))sInsectBehaviours[t4].unk_04;
        e->unk_250 = 3;
        e->unk_24a[0] = 0;
        Insect_SetModelMatrix(a, e, 0);
        if (mode == 2) {
            pv = &e->unk_210;
            pv->x = sv.x;
            pv->y = sv.y;
            pv->z = sv.z;
        }
    }
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2228308
extern "C" void Insect_UpdateHideTimer(void *a, Rec *e) {
    if (e->unk_170 != 0) {
        s32 t = e->unk_24d;
        switch (t) {
        case 0x1e:
            if (e->unk_251 == 4 || e->unk_251 == 5 || e->unk_251 == 0x11) {
                s32 v = e->unk_232;
                if (v > 5) {
                    e->unk_232 = v - 1;
                } else {
                    Insect_Despawn(e);
                }
            }
            break;
        case 0x31:
            switch (e->unk_251) {
            case 4:
            case 5:
            case 7:
            case 0x11: {
                s32 v = e->unk_232;
                if (v > 0) {
                    e->unk_232 = v - 1;
                } else {
                    Insect_Despawn(e);
                }
                break;
            }
            }
            break;
        case 0x36:
        case 0x37: {
            s16 *p = &e->unk_236;
            s32 v = *p;
            if (v > 0 && v <= 0x12c) {
                if (v > 0x1f) {
                    *p = v - 1;
                } else {
                    Insect_Despawn(e);
                }
            }
            break;
        }
        }
    }
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2228060
extern "C" void Insect_Update(void *a, Rec *e, s32 flags, s32 kind) {
    u8 r4 = e->unk_249;
    s32 r7 = CommManager_isSlotActive(gCommManager, gCommManager->unk_64);
    if (r7 != 0 && e->unk_258 != 0) {
        r4 = 1;
    }
    if (r4 == 0) {
        Insect_UpdateHideTimer(a, e);
    }
    if (kind == 1) {
        if (r7 == 0 || func_020a62a0() != 0) {
            s16 *p = &e->unk_234;
            if (r4 != 0) {
                *p = 0x4b0;
            } else if (*p > 0) {
                s32 v = *p - 1;
                *p = v;
                if (*p == 0) {
                    e->unk_250 = 4;
                    return;
                }
            }
        }
    }
    if (e->unk_170 == 0) {
        return;
    }
    if (r4 == 0 && (u32)(kind - 2) > 1) {
        return;
    }
    s32 t4 = e->unk_24d;
    u32 t7 = e->unk_251;
    Insect_TickFrame(e);
    if (t7 == 0x10 || t4 < 0) {
        goto L258;
    }
    if (t7 == 0xa) {
        goto L226;
    }
    {
        volatile BOOL big;
        void *volatile pp;
        Vec3 v1, v2;
        Vec3 *pv = &e->unk_204;
        v1.x = pv->x;
        v1.y = pv->y;
        v1.z = pv->z;
        pp = &e->unk_108;
        Insect_CheckDisturbance(a, e);
        e->unk_170(e);
        if (Insect_UsesCollisionMove(a, e) != 0) {
            if (kind == 3) {
                {
                    struct { u8 b[0x44]; } w;
                    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&w, (Unk_0203389c_Vec *)(&e->unk_204), 0, 0);
                    if (_ZN12Unk_0203389c13func_02033914Ei(&w, 0) > 0x4000) {
                        big = TRUE;
                    } else {
                        big = FALSE;
                    }
                    _ZN12Unk_0203398cD1Ev(&w);
                }
                if (big) {
                    func_020309d4(&e->unk_20, &e->unk_204, &v1, e->unk_23a, sInsectModelParams[t4].unk_02, 0, 0xa);
                    goto after;
                }
            }
            func_020309d4(&e->unk_20, &e->unk_204, &v1, e->unk_23a, sInsectModelParams[t4].unk_02, 0, 0xb);
        }
    after:
        if (e->unk_24d == 0x33 && flags == 0) {
            e->unk_21c = 1;
        }
        flags |= 1 << (kind + 3);
        pv = &e->unk_204;
        v2.x = pv->x;
        v2.y = pv->y;
        v2.z = pv->z;
        if (e->unk_24d == 0x35) {
            u32 bits = (e->unk_f4 << 4) >> 16;
            if (bits >= 0x1e && bits < 0x28) {
                v2.y = v2.y - 0x1800;
            }
        }
        func_02088b20(pp, &v2, sInsectModelParams[t4].unk_04, 0xd48, (u8)flags);
    }
L226:
    if (sInsectModelParams[t4].unk_00 == 0) {
        AnimModel_stepAnim(e->unk_50);
        if ((u8)(s8)(t4 - 0x3a) <= 1) {
            AnimFrameCtrl_step(e);
            *e->unk_18 = e->unk_08;
        }
    }
    goto L268;
L258:
    if (t4 == 0x14 || t4 == 0x37) {
        AnimModel_stepAnim(e->unk_50);
    }
L268:
    if (t7 == 0xa) {
        func_ov003_022287c8(a, e, kind);
        return;
    }
    if (kind == 3 && t7 == 0x10) {
        Insect_SetModelMatrix(a, e, 1);
    } else {
        Insect_SetModelMatrix(a, e, 0);
    }
    {
        Vec3 v3;
        Vec3 *pv = &e->unk_204;
        v3.x = pv->x;
        v3.y = pv->y;
        v3.z = pv->z;
        Unk_02003c40_callUpdateRelative(e->unk_174, &v3);
    }
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
// 0x222802c
BOOL InsectManager::onExecute() { using namespace s04;
    void *self = this;
    FieldInsect_UpdateAll(self);
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) == 0) {
        SpecialInsect_UpdateAll(self);
    }
    HeldInsect_UpdateAll(self);
    Insect_UpdateSpawning(self);
    return TRUE;
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2227f20
extern "C" void Insect_CheckDisturbance(void *a, Rec *e) {
    Unk_ov003_02227f20_Slot *o;
    u8 ok;
    s32 px, py;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64) != 0) {
        if (func_020a62a0() != 0) {
            u8 i;
            s32 z0 = 0, z1 = 0;
            for (i = 0; i < 4; i++) {
                if (PlayerActor_GetSlotPosXZ(&ok, &px, &py, -1, i) && ok == 0 && PlayerActor_TestSlotFlag9(i)) {
                    Vec3 v;
                    v.x = px;
                    v.y = z0;
                    v.z = py;
                    s32 lim = e->unk_224;
                    BOOL t;
                    if (func_020e9650(&e->unk_204, &v) < lim) {
                        t = TRUE;
                    } else {
                        t = z1;
                    }
                    if (t) {
                        e->unk_254 = 0xfe;
                    }
                }
            }
        }
    } else {
        if (PlayerActor_TestSlotFlag9(4)) {
            u8 *p = (u8 *)func_02095204(4);
            if (p) {
                s32 lim = e->unk_224;
                if (func_020e9650(&e->unk_204, p + 0x5c) < lim) {
                    e->unk_254 = 0xfe;
                }
            }
        } else {
            u8 i;
            void *pv = &e->unk_204;
            for (i = 0; i < 8; i++) {
                o = NpcRegistry_FindVillager(i);
                if (o) {
                    s32 lim = e->unk_224;
                    if (func_020e9650(pv, (u8 *)o + 0x5c) < lim) {
                        if (o->vfunc_ac()) {
                            e->unk_254 = 0xfe;
                        }
                    }
                }
            }
        }
    }
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2227ed4
extern "C" s32 FieldInsect_GetKindAndAlarm(u8 *out, u32 idx) {
    Rec *e = &sFieldInsects[(u8)(idx & 0xf)];
    s32 r = e->unk_24d;
    if (r >= 0) {
        if (e->unk_254 >= e->unk_255) {
            *out = 1;
        } else {
            *out = 0;
        }
    }
    return r;
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2227e40
extern "C" BOOL FieldInsect_IsTreeKind(u32 idx) {
    Rec *e = &sFieldInsects[(u8)(idx & 0xf)];
    switch (e->unk_24d) {
    case 9:
    case 16: case 17: case 18: case 19: case 20:
    case 31:
    case 33: case 34:
    case 36:
    case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47:
    case 52:
        return TRUE;
    case 10: case 11: case 12: case 13: case 14: case 15:
    case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
    case 32:
    case 35:
    case 37:
    case 48: case 49: case 50: case 51:
        break;
    }
    return FALSE;
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2227e08
extern "C" s32 FieldInsect_GetPosAndKind(Vec3 *out, u32 idx) {
    Rec *e = &sFieldInsects[(u8)(idx & 0xf)];
    Vec3 *v = &e->unk_204;
    out->x = v->x;
    out->y = v->y;
    out->z = v->z;
    return e->unk_24d;
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_02088b20 _ZN12Unk_02088b2013func_02088b20EP4Vec3iS1_h
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov068_022687c0 _ZN18Unk_ov068_0226821419func_ov068_022687c0Ev
#define sInsectPathFmt0x "/insect/01/bug0%d"
#define sInsectPathFmt1x "/insect/11/bug%d"
#define sInsectPathFmt2x "/insect/21/bug%d"
#define sInsectPathFmt3x "/insect/31/bug%d"
#define sInsectPathFmt4x "/insect/41/bug%d"
#define sInsectPathFmt5x "/insect/51/bug%d"
#define sInsectModelExtFmt "%s.nsbmd"
#define sInsectVisAnimExtFmt "%s.nsbva"
#define sInsectJointAnimExtFmt "%s.nsbca"
#define sInsectTexAnimPathFmt "/insect/51/bug%d.nsbta"
#define data_ov003_022595b0 (*(u8 *)&::sSpecialInsects[1])
namespace s04 {
// 0x2227cd0
extern "C" void Insect_UpdateSpawning(void *self) {
    s8 b[8];
    s32 px, py;
    s32 r4 = CommManager_isSlotActive(gCommManager, gCommManager->unk_64);
    if (r4 == 0 || func_020a62a0() != 0) {
        if (sInsectSpawnTimer % 20 == 0) {
            FieldInsect_PurgeStale();
        }
        sInsectSpawnTimer++;
        u32 c = sInsectSpawnTimer;
        if (c == 0x3c) {
            Insect_TrySpawnRandom(self, 1, 0, -1);
            sInsectSpawnTimer = 0;
        } else if (c == 0x28 && r4 == 0) {
            b[0] = 0;
            b[1] = -1;
            if (Insect_PickSpecialSpawn(&b[0], &b[1], 1)) {
                if (Insect_TrySpawnRandom(self, 1, b[0], b[1])) {
                    sInsectSpawnTimer = 0;
                }
            }
        } else if (c == 0x14 && r4 == 0) {
            b[2] = 0;
            b[3] = -1;
            if (Insect_PickSpecialSpawn(&b[2], &b[3], 0)) {
if (Insect_Spawn(self, b[2], (u8)b[3], 2)) {
                    func_ov068_022687c0(&data_ov003_022595b0);
                    sAntSpawnEnabled = 0;
                }
            }
        }
    }
    if (r4 != 0) {
        u8 i;
        for (i = 0; i < 4; i++) {
            if (PlayerActor_GetSlotPosXZ((u8 *)&b[4], &px, &py, -1, i) && (u8)b[4] == 0) {
                InsectPool_UpdateInViewOfPlayer(self, 1, i, px, py);
            }
        }
    } else {
        InsectPool_UpdateInView(self, 1);
        InsectPool_UpdateInView(self, 2);
    }
}
}
#undef func_02003c70
#undef func_02003cbc
#undef func_02054710
#undef func_02054720
#undef func_020547e4
#undef func_02054800
#undef func_020554c0
#undef func_020555ec
#undef func_02055a9c
#undef func_02055b38
#undef func_02055bcc
#undef func_0205668c
#undef func_020566bc
#undef func_02072e88
#undef func_02088b20
#undef func_0209c0ac
#undef func_0209c0d0
#undef func_0209c25c
#undef func_0209c348
#undef func_ov003_022287c8
#undef func_ov068_022687c0
#undef sInsectPathFmt0x
#undef sInsectPathFmt1x
#undef sInsectPathFmt2x
#undef sInsectPathFmt3x
#undef sInsectPathFmt4x
#undef sInsectPathFmt5x
#undef sInsectModelExtFmt
#undef sInsectVisAnimExtFmt
#undef sInsectJointAnimExtFmt
#undef sInsectTexAnimPathFmt
#undef data_ov003_022595b0

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227970
extern "C" void FieldInsect_UpdateAll(void *a) {
    u32 k;
    Unk_020cbb18_Ptr *g;
    Unk_ov003_02227970_Loc l;
    s32 v18, v1c;
    V3 t1, t2;
    Rec *o = sFieldInsects;
    v18 = 0;
    v1c = 0;
    l.i = 0;
    g = gCommManager;
    s32 neg = -1;
    goto test0;
loop0:
    {
        k = o->unk_250;
        V3 *p204;
        V3 *p1d4;
        if (CommManager_isSlotActive(g, g->unk_64)) {
            p204 = &o->unk_204;
            p1d4 = &o->unk_1d4;
            l.a = neg;
            if (InsectNetSync_Set(a, l.i, o->unk_24d, p1d4, o->unk_254, 1) == 0) {
                l.c = 0;
                if (InsectNetSync_Get(a, l.i, &l.a, &v18, &v1c, &l.c)) {
                    if (k == 0) {
                        if (v18 > 1) {
                            s32 t = l.a;
                            if (t >= 0) {
                                p204->x = v18;
                                p204->z = v1c;
                                p1d4->x = p204->x;
                                p1d4->y = p204->y;
                                p1d4->z = p204->z;
                                o->unk_24d = t;
                                o->unk_248 = 1;
                                o->unk_249 = 0;
                                { V3 *q = &o->unk_1c8;
                                o->unk_1c8.x = p204->x;
                                q->y = p204->y;
                                q->z = p204->z; }
                                o->unk_250 = 2;
                            }
                        }
                    } else {
                        u32 c = l.c;
                        if (c == 0xff || v18 == 1) {
                            if (l.a == 0x1e) {
                                u32 st = o->unk_251;
                                if (st == 9 || st == 0x11) goto sw0;
                            }
                            func_ov003_022287c8(a, o, 1);
                        } else {
                            if (p1d4->x == v18 && p1d4->z == v1c) {
                            } else {
                                p1d4->x = v18;
                                p1d4->z = v1c;
                                { V3 *q = &o->unk_1c8;
                                o->unk_1c8.x = p204->x;
                                q->y = p204->y;
                                q->z = p204->z; }
                            }
                            o->unk_254 = c;
                        }
                    }
                }
            }
        }
    sw0:
        switch (k) {
        case 2:
            if (func_020a62a0() == 0 && CommManager_isSlotActive(g, g->unk_64)) {
                if (l.a != o->unk_24d && v18 > 0) {
                    func_ov003_022287c8(a, o, 1);
                } else {
                    if (Insect_IsTreeStillThere(a, o)) Insect_LoadModel(a, o, 0);
                }
            } else {
                Insect_LoadModel(a, o, 0);
            }
            break;
        case 3:
            if (CommManager_isSlotActive(g, g->unk_64)) {
                if (func_020a62a0() == 0) {
                    if (Insect_IsNetKindMismatch(a, o, l.a, v18, v1c)) {
                        o->unk_251 = 10;
                        func_ov003_022287c8(a, o, 1);
                    }
                }
                s32 kind = o->unk_24d;
                if (Insect_GetWeatherReaction(kind, func_020b8fe8()) == 5) {
                    o->unk_246 = 0;
                } else {
                    o->unk_246 = 1;
                }
            }
            Insect_Update(a, o, l.i, 1);
            break;
        case 4:
            if (CommManager_isSlotActive(g, g->unk_64) == 0) {
                o->unk_251 = 10;
                func_ov003_022287c8(a, o, 1);
            } else if (func_020a62a0()) {
                s16 *cnt = &o->unk_242;
                V3 *pv = &o->unk_204;
                t1.x = pv->x;
                t1.y = pv->y;
                t1.z = pv->z;
                Unk_02003c40_callUpdateRelative(o->unk_174, &t1);
                if (o->unk_254 != 0xff) {
                    o->unk_254 = 0xff;
                    l.i |= 0x10;
                    V3 *q1 = &o->unk_1d4;
                    o->unk_1d4.x = 1;
                    q1->y = 1;
                    q1->z = 1;
                    V3 *q2 = &o->unk_204;
                    o->unk_204.x = 1;
                    q2->y = 1;
                    q2->z = 1;
                    CommManager_beginRecord(g);
                    CommManager_writeRecord(g, &l.i, 1);
                    CommManager_endRecord(g, 0x30, 7);
                }
                *cnt = *cnt + 1;
                if (*cnt > 0xc8) {
                    o->unk_251 = 10;
                    func_ov003_022287c8(a, o, 1);
                }
            } else {
                V3 *pw = &o->unk_204;
                t2.x = pw->x;
                t2.y = pw->y;
                t2.z = pw->z;
                Unk_02003c40_callUpdateRelative(o->unk_174, &t2);
                if (o->unk_254 == 0xff) o->unk_251 = 10;
                if (o->unk_251 == 10) func_ov003_022287c8(a, o, 1);
            }
            break;
        }
    }
    o++;
    l.i++;
test0:
    if (l.i < 8) goto loop0;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227930
extern "C" BOOL Insect_IsNetKindMismatch(void *a, Rec *o, s32 c, s32 d, s32 e) {
    s32 t = o->unk_24d;
    if (d == 0) return FALSE;
    if (t < 0 || t != c) return TRUE;
    V3 v(d, 0, e);
    func_020e9650(&o->unk_204, &v);
    return FALSE;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x22277c0
extern "C" BOOL Insect_IsTreeStillThere(void *a, Rec *o) {
    if (o->unk_24d < 0) return FALSE;
    switch (o->unk_24d) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x34:
    {
        s32 x = 0, y = 0;
        FieldPos_ToUnit(&x, &y, &o->unk_204);
        void *grid = TownBlockMap_Get();
        if (grid == 0) goto yes;
        s32 px = *(volatile s32 *)&x, py = *(volatile s32 *)&y;
        s32 hx = px >> 4;
        s32 hy = py >> 4;
        u16 *p = BlockMap_GetItemPtr(grid, hx, hy, px - (hx << 4), py - (hy << 4), 0);
        if (p == 0) return FALSE;
        if (Unk_ov003_022277c0_Chk(p)) goto yes;
        return FALSE;
    }
    default:
        break;
    }
yes:
    return TRUE;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227740
extern "C" void SpecialInsect_UpdateAll(void *a) {
    Rec *o = sSpecialInsects;
    u8 i = 0;
    do {
        switch (o->unk_250) {
        case 2:
            Insect_LoadModel(a, o, 1);
            break;
        case 3:
            if (o->unk_204.x > 0x1000) Insect_Update(a, o, i, 2);
            break;
        case 4:
            o->unk_251 = 10;
            func_ov003_022287c8(a, o, 2);
            break;
        }
        o++;
        i++;
    } while (i < 2);
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227624
extern "C" void HeldInsect_UpdateAll(void *a) {
    Unk_020cbb18_Ptr *g = gCommManager;
    u32 cur = g->unk_64;
    if (cur == 4) cur = 0;
    Rec *o = sHeldInsects;
    u8 i = 0;
    s32 neg = -1;
    s32 zero = 0;
    do {
        s32 r = PlayerActor_GetAction(i);
        if (cur != i && o->unk_251 != 0xb && r != 0x57 && r != 0x58 && r != 0x76 && r != 6) {
            if (o->unk_24d == 0x39) {
                func_020902f8(o->unk_22c);
                o->unk_22c = neg;
            }
            func_ov003_022287c8(a, o, 3);
        } else {
            switch (o->unk_250) {
            case 0:
                break;
            case 1:
                func_ov003_0222898c(a, o);
                break;
            case 2:
                Insect_LoadModel(a, o, 2);
                func_020309d4(&o->unk_20, &o->unk_204, &o->unk_204, o->unk_23a, sInsectModelParams[o->unk_24d].b, zero, 10);
                break;
            case 3:
                Insect_Update(a, o, i, 3);
                break;
            case 4:
                o->unk_251 = 10;
                func_ov003_022287c8(a, o, 3);
                break;
            }
        }
        o++;
        i++;
    } while (i < 4);
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227544
extern "C" BOOL Insect_UsesCollisionMove(void *a, Rec *o) {
    s32 t;
    u32 st;
    st = o->unk_251;
    t = o->unk_24d;
    if (st == 9 || st == 0xb) goto yes;
    if (t != 0x3a && t != 0x3b) {
        Unk_020cbb18_Ptr *g = gCommManager;
        if (CommManager_isSlotActive(g, g->unk_64) == 0) goto cont;
        if (func_020a62a0() != 0) goto cont;
    }
    return FALSE;
cont:
    if (st == 7) goto yes;
    switch (t) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x1f: case 0x21: case 0x22: case 0x24: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x32: case 0x34: case 0x35:
        return FALSE;
    case 0x33:
        if (o->unk_220 == o->unk_228) goto yes;
        return FALSE;
    case 0x31:
        if (st != 6) goto yes;
        return FALSE;
    default:
        break;
    }
yes:
    return TRUE;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x222746c
extern "C" void HeldInsect_Release(s32 idx, s32 v) {
    Rec *o = &sHeldInsects[idx];
    o->unk_251 = 0xb;
    o->unk_238 = 0;
    o->unk_23c = 0;
    Insect_SetScale(o, 100);
    o->unk_23a = v;
    s32 st = o->unk_24d;
    if (st >= 0 && st < 0x3c) {
        sInsectBehaviours[st].fn(o);
        switch (o->unk_24d) {
        case 0xc:
        case 0xd:
        case 0x1b:
        case 0x1c:
        case 0x1d:
            Insect_TurnToTarget(o, 1);
            break;
        case 0x39:
            if (o->unk_22c != -1) {
                func_020902f8(o->unk_22c);
                o->unk_22c = -1;
            }
            break;
        }
    } else {
        HeldInsect_Remove(idx, 0);
        o->unk_250 = 4;
    }
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x2227434
extern "C" u32 HeldInsect_GetStage(s32 idx) {
    Rec *o = &sHeldInsects[idx];
    if (o->unk_24d < 0) {
        o->unk_251 = 10;
        o->unk_250 = 0;
    }
    return o->unk_250;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_0222898c _ZN13InsectManager15allocHeldInsectEP22Unk_ov003_02228710_Act
namespace s03 {
// 0x22273b4
extern "C" s32 InsectPool_Draw(void *a, Rec *o, s32 n) {
    s32 i = 0;
    goto test0;
loop0:
    if (o->unk_250 == 3 && o->unk_249 != 0) {
        if (n == 8) {
            if (Insect_IsTreeKindForCulling(a, *(u8 *)&o->unk_24d) == 0 || func_0203a4c4(&o->unk_204, 0x2000, 0x2000) == 0) {
                Insect_Draw(a, o);
            }
        } else {
            Insect_Draw(a, o);
        }
    }
    o++;
    i++;
test0:
    if (i < n) goto loop0;
    return TRUE;
}
}
#undef func_02003c70
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_02072e88
#undef func_ov003_022287c8
#undef func_ov003_0222898c

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x222733c
extern "C" BOOL Insect_IsTreeKindForCulling(s32 a, s32 t) {
    switch (t) {
    case 9:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 31:
    case 33:
    case 34:
    case 35:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 52:
    case 53:
        return TRUE;
    }
    return FALSE;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2227320
extern "C" V3 *HeldInsect_GetPos(s32 idx) {
    Obj *o = &sHeldInsects[idx];
    return &o->unk_204;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2227248
extern "C" void HeldInsect_Start(s32 t, s32 idx) {
    Obj *o = &sHeldInsects[idx];
    u8 *e = (u8 *)func_02095204(idx);
    if (e != 0) {
        V3 *pv = (V3 *)(e + 0x5c);
        V3 *d = &o->unk_204;
        d->x = *(s32 *)(e + 0x5c);
        d->y = pv->y;
        d->z = pv->z;
        d->y += 0x1b34;
        s16 ang = *(s16 *)(e + 0x8e);
        o->unk_23a = ang;
        s32 a = ((u16)ang >> 4) * 2;
        o->unk_204.x += func_01ffcb0c(0xfae, data_02135f44[a * 1]);
        d->z += func_01ffcb0c(0xfae, data_02135f44[a + 1]);
    }
    o->unk_250 = 1;
    o->unk_251 = 0x10;
    switch (t) {
    case 0x25:
        o->unk_24d = 0x39;
        break;
    case 0x3a:
        o->unk_24d = 0xb;
        break;
    case 0x3b:
        o->unk_24d = 0x18;
        break;
    default:
        o->unk_24d = t;
        break;
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x22271a8
extern "C" void Insect_OnNetRemove(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    o->unk_242 = 0;
    u32 st = o->unk_251;
    if (Insect_CanHopAway(o->unk_24d) && o->unk_250 != 4 && st != 0x10 && st != 10) {
        if (st != 0x11 && o->unk_232 > 6) {
            o->unk_232 = 6;
            o->unk_251 = 0x11;
        }
    } else {
        o->unk_250 = 4;
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x222716c
extern "C" BOOL Insect_CanHopAway(s32 t) {
    switch (t) {
    case 0xc:
    case 0xd:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x31:
        return TRUE;
    }
    return FALSE;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2227100
extern "C" void Insect_OnClaimGranted(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    if (o->unk_250 == 3) {
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(&o->unk_130), 0, 0);
    }
    o->unk_251 = 0x10;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2227074
extern "C" void HeldInsect_Remove(u8 id, s32 flag) {
    Obj *o = &sHeldInsects[id];
    Unk_ov003_02226d54_Net *g = gCommManager;
    if (CommManager_isSlotActive(g, g->unk_64) && flag && CommManager_isMyAid(g, id)) {
        Unk_ov003_02226d54_Net *g2 = gCommManager;
        CommManager_beginRecord(g2);
        CommManager_writeRecord(g2, &id, 1);
        CommManager_endRecord(g2, 0x30, 4);
    }
    if (o->unk_22c != -1) {
        func_020902f8(o->unk_22c);
        o->unk_22c = -1;
    }
    o->unk_251 = 10;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226fac
extern "C" s32 Insect_FinishCatch(u8 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    o->unk_242 = 0;
    o->unk_250 = 4;
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        Unk_ov003_02226d54_Net *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, &id, 1);
        CommManager_endRecord(g, 0x30, 4);
    }
    s32 c = o->unk_24d;
    switch (c) {
    case 0x3a:
        o->unk_251 = 8;
        o->unk_250 = 3;
        return 0xb;
    case 0x3b:
        o->unk_251 = 8;
        o->unk_250 = 3;
        return 0x18;
    }
    return c;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226ee8
extern "C" s32 Insect_GetCatchResult(s32 id) {
    Obj *o = 0;
    s32 r = 0;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    else r = 1;
    if (o == 0) r = 1;
    if (r != 1) {
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            if (!func_020a62a0()) r = sInsectCatchResult;
        }
    }
    if (r == 1) {
        u8 b;
        Insect_CancelCatch(id);
        b = id;
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            if (!func_020a62a0()) {
                Unk_ov003_02226d54_Net *g = gCommManager;
                CommManager_beginRecord(g);
                CommManager_writeRecord(g, &b, 1);
                CommManager_endRecord(g, 0x2f, 4);
            }
        }
    }
    return (u8)r;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226e70
extern "C" void Insect_CancelCatch(s32 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    if (o->unk_251 == 0x10 && o->unk_24d >= 0) {
        o->unk_251 = 0x13;
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(&o->unk_130), 0, 0x1f);
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226d54
extern "C" s32 Insect_TryCatch(u8 id) {
    Obj *o;
    s32 idx = (u8)(id & 0xf);
    if ((id >> 4) & 1) o = &sFieldInsects[idx];
    else if ((id >> 5) & 1) o = &sSpecialInsects[idx];
    else return 0;
    u32 t6 = o->unk_251;
    u32 c4 = (u8)o->unk_24d;
    if (c4 == -1 || o->unk_250 != 3 || t6 == 0xb || t6 == 9 || t6 == 0x10) return 0;
    if (c4 == 0x31 || c4 == 0x1e || c4 == 0x35) {
        if (func_02106020(func_0209c0ac(&o->unk_130), 0) < 0x1f) return 0;
    }
    if (c4 == 0x35 && t6 == 0x13) return 0;
    s32 c = o->unk_24d;
    if (c != 0x3a && c != 0x3b) {
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(&o->unk_130), 0, 0);
        o->unk_251 = 0x10;
    }
    if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        if (!func_020a62a0()) {
            sInsectCatchResult = 2;
            Unk_ov003_02226d54_Net *g = gCommManager;
            CommManager_beginRecord(g);
            CommManager_writeRecord(g, &id, 1);
            CommManager_endRecord(g, 0x28, 6);
        }
    }
    return 1;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226d08
extern "C" void Insect_SetScale(Obj *o, s32 v) {
    if (v == 100) {
        o->unk_210 = 0x1000;
        o->unk_214 = 0x1000;
        o->unk_218 = 0x1000;
    } else {
        s32 *p = &o->unk_210;
        *p = FX_Div(v << 12, 0x64000);
        o->unk_214 = *p;
        o->unk_218 = *p;
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226c88
extern "C" void Insect_Draw(void *a, Obj *o) {
    s32 *p = &o->unk_210;
    if (*p > 0) {
        void *t = func_0209c0ac(&o->unk_130);
        s32 r = func_02106020(t, 0);
        u32 c;
        r = (31 - r) << 1;
        if (r > 31) c = 0;
        else c = 31 - r;
        AnimModel_drawAnimated(&o->unk_50, p);
        if (Insect_HasShadow(a, o)) {
            func_020abdd0(&o->unk_204, data_ov003_02234b06[o->unk_24d].a, 0x9000, (u8)c);
        }
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226c14
extern "C" BOOL Insect_HasShadow(void *a, Obj *o) {
    s32 idx = o->unk_24d;
    if (data_ov003_02234b06[idx].a <= 1) return FALSE;
    switch (idx) {
    case 0x1e:
    case 0x31:
        if (o->unk_251 == 0x13) return FALSE;
        return TRUE;
    case 0x18:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x3a:
    case 0x3b:
        return FALSE;
    }
    return TRUE;
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
namespace s02 {
// 0x2226a9c
extern "C" void Insect_SetModelMatrix(void *a, Obj *o, s32 flag) {
    V3 v;
    u8 *pb = (u8 *)&o->unk_50;
    s32 r6 = WorldCurve_ToCurved(&v, &o->unk_204);
    if (flag) {
        data_021f47e0 = o->unk_180;
        func_020e8434(&data_021f47e0, o->unk_238);
    } else {
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8434(&data_021f47e0, (s16)(r6 + o->unk_238));
    }
    if (o->unk_23a != 0) func_020e8404(&data_021f47e0, o->unk_23a);
    if (o->unk_23c != 0) func_020e83d4(&data_021f47e0, o->unk_23c);
    pb += 0x64;
    *(Blk *)pb = data_021f47e0;
    if (flag && o->unk_24d == 0x39) {
        Blk m = data_021f47e0;
        V3 pos;
        pos.x = m.v[9];
        pos.y = m.v[10];
        pos.z = m.v[11];
        pb = (u8 *)o + 0x22c;
        s32 *h = (s32 *)pb;
        m.v[11] = 0;
        m.v[10] = 0;
        m.v[9] = 0;
        Blk m2 = m;
        V3 vin;
        V3 vout;
        u16 arr[2];
        vin.y = 0;
        vin.x = 0;
        vin.z = func_01ffcb0c(o->unk_210, -0x333);
        MTX_MultVec43(&vin, &m2, &vout);
        pos.x += vout.x;
        pos.y += vout.y;
        pos.z += vout.z;
        WorldCurve_FromCurved(&pos, &pos);
        if (o->unk_21c == 0) {
            arr[0] = o->unk_210;
            *h = func_02090330(0x3a, &pos, 0, &arr[0]);
            o->unk_21c = 1;
        } else {
            arr[1] = o->unk_210;
            s32 t = *h;
            if (t != -1) func_020902d4(t, &pos, 0, &arr[1]);
        }
    }
}
}
#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define CommManager_endRecord _ZN11CommManager9endRecordEjj
#define CommManager_writeRecord _ZN11CommManager11writeRecordEPhj
#define CommManager_beginRecord _ZN11CommManager11beginRecordEv
#define CommManager_isMyAid _ZN11CommManager7isMyAidEj
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define data_ov003_02234b06 ((Unk_ov003_02234b06_Rec *)&::sInsectModelParams[1])
#define sFieldInsects (*(Obj (*)[1])&::sFieldInsects)
#define sSpecialInsects (*(Obj (*)[1])&::sSpecialInsects)
#define sHeldInsects (*(Obj (*)[1])&::sHeldInsects)
// 0x2226a5c
BOOL InsectManager::onDraw() { using namespace s02;
    Obj *self = (Obj *)this;
    s32 r = InsectPool_Draw(self, sFieldInsects, 8);
    r &= InsectPool_Draw(self, sSpecialInsects, 2);
    r &= InsectPool_Draw(self, sHeldInsects, 4);
    return r;
}
#undef sFieldInsects

#undef sSpecialInsects

#undef sHeldInsects

#undef func_020547cc
#undef func_02072824
#undef func_020728a4
#undef func_020728d4
#undef func_020729cc
#undef func_02072e88
#undef func_0209c0ac
#undef data_ov003_02234b06

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
#define sFieldInsects (*(Rec (*)[1])&::sFieldInsects)
#define sSpecialInsects (*(Rec (*)[1])&::sSpecialInsects)
#define sHeldInsects (*(Rec (*)[1])&::sHeldInsects)
// 0x22269b8
BOOL InsectManager::vfunc_0c() { using namespace s01;
    Unk_ov003_022269b8_Obj *obj = (Unk_ov003_022269b8_Obj *)this;
    Rec *pa = sFieldInsects;
    Rec *pb = sSpecialInsects;
    Rec *pc = sHeldInsects;
    s32 i, j, k;
    for (i = 0; i < 8; i++) {
        func_ov003_022287c8(obj, pa++, 1);
    }
    j = 0;
    for (i = 0; i < 2; i++) {
        Rec *q = pb;
        pb++;
        func_ov003_022287c8(obj, q, 2);
        Mem_Free(obj->unk_98[i]);
        obj->unk_98[i] = 0;
    }
    for (k = 0; k < 4; k++) {
        Rec *q = pc;
        pc++;
        func_ov003_022287c8(obj, q, 3);
    }
    func_0209c15c(obj->unk_50);
    func_0209c15c(obj->unk_68);
    func_0209c15c(obj->unk_80);
    func_02043b90();
    return TRUE;
}
#undef sFieldInsects

#undef sSpecialInsects

#undef sHeldInsects

#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x2226874
extern "C" void InsectPool_UpdateInViewOfPlayer(s32 obj, s32 flag, s32 idx, s32 x, s32 z) {
    Rec *e;
    s32 n;
    if (flag == 1) {
        e = sFieldInsects;
        n = 8;
    } else {
        e = sSpecialInsects;
        n = 2;
    }
    s32 x0 = x - 0x10000;
    s32 z0 = z - 0x1c000;
    s32 x1 = x + 0x10000;
    s32 z1 = z + 0xc000;
    s32 h = func_020b8fe8();
    u8 i = 0;
    s32 m = 1;
    m = m << idx;
    s32 nm = ~(m & 0xf);
    for (; i < n; e++, i++) {
        if (e->unk_248 != 0 && e->unk_24d >= 0) {
            s32 r;
            Vec3 *p = &e->unk_204;
            u32 bits = e->unk_258;
            r = Insect_GetWeatherReaction(e->unk_24d, h);
            if (func_020a62a0() == 0 && r == 4) {
                r = 3;
            }
            u32 t = e->unk_249;
            if (t == 0 && r == 4) {
                func_ov003_022287c8((void *)obj, e, flag);
            } else if (x0 < p->x && x1 > p->x && z0 < p->z && z1 > p->z) {
                if (t == 0) {
                    e->unk_249 = 1;
                    e->unk_258 = bits | m;
                }
            } else if (((s32)bits >> idx) & 1) {
                e->unk_258 = bits & nm;
            } else if (t != 0 && bits == 0 && flag == 1) {
                e->unk_249 = 0;
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x2226768
extern "C" void InsectPool_UpdateInView(s32 obj, s32 flag) {
    void *c = gCamera;
    Rec *e;
    s32 n;
    if (flag == 1) {
        e = sFieldInsects;
        n = 8;
    } else {
        e = sSpecialInsects;
        n = 2;
    }
    if (c) {
        Unk_ov003_02226768_Vec cp;
        Vec3 *g = &gCameraLookAt;
        cp.x = g->x;
        cp.y = g->y;
        cp.z = g->z;
        s32 x0 = cp.x - 0x10000;
        s32 z0 = cp.z - 0x1c000;
        s32 x1 = cp.x + 0x10000;
        s32 z1 = cp.z + 0xc000;
        s32 h = func_020b8fe8();
        u8 i;
        for (i = 0; i < n; e++, i++) {
            if (e->unk_248 != 0 && e->unk_24d >= 0) {
                Vec3 *p = &e->unk_204;
                s32 r = Insect_GetWeatherReaction(e->unk_24d, h);
                if (e->unk_249 == 0 && r == 4) {
                    func_ov003_022287c8((void *)obj, e, flag);
                } else {
                    if (r == 5) {
                        e->unk_246 = 0;
                    } else {
                        e->unk_246 = 1;
                    }
                    if (x0 < p->x && x1 > p->x && z0 < p->z && z1 > p->z) {
                        e->unk_249 = 1;
                    } else {
                        e->unk_249 = 0;
                    }
                }
            }
        }
    }
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x222675c
extern "C" void Insect_EnableTrashFlies(void) {
    sTrashFlySpawnEnabled = 1;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x22264f0
extern "C" BOOL Insect_Spawn(s32 obj, s32 kind, u8 sub, s32 flag) {
    Rec *e = sFieldInsects;
    s32 found = -1;
    Buf buf;
    if (kind != 8) {
        InsectSpawn_CopyMask(&buf, sub);
    } else {
        InsectSpawn_BuildLightMask(&buf);
    }
    if (flag == 1) {
        u8 i;
        for (i = 0; i < 8; e++, i++) {
            if (e->unk_248 != 0) {
                if (kind != 0x33) {
                    Vec3 *v = &e->unk_204;
                    if (kind == 0x23 && e->unk_24d == 0x23) {
                        return FALSE;
                    }
                    if (kind != 8) {
                        SpawnMask_MarkRect(&buf, v->x, v->z, 1, 1, 1);
                    }
                }
            } else if (found < 0) {
                found = (s8)i;
            }
        }
    }
    if (found < 0 && flag != 2) {
        goto fail;
    }
    Vec3 *q = (Vec3 *)func_02095204(4);
    if (q != 0 && flag == 1 && kind != 0x33) {
        if (CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
            s32 k;
            u8 b0;
            s32 px, pz;
            for (k = 0; k < 4; k++) {
                if (PlayerActor_GetSlotPosXZ(&b0, &px, &pz, -1, k) && b0 == 0) {
                    SpawnMask_MarkRect(&buf, px, pz, 5, 8, 5);
                }
            }
        } else {
            Vec3 *pp = (Vec3 *)((u8 *)q + 0x5c);
            SpawnMask_MarkRect(&buf, pp->x, pp->z, 5, 8, 5);
        }
    }
    Rec *cur;
    if (flag == 1) {
        cur = sFieldInsects + found;
    } else {
        cur = &data_ov003_022595b0;
    }
    if (kind == 0x23 && !CommManager_isSlotActive(gCommManager, gCommManager->unk_64)) {
        u8 j;
        for (j = 0; j < 2; j++) {
            u8 *o = Snowball_GetLooseBall(j);
            if (o) {
                Vec3 *pos = (Vec3 *)(o + 0x5c);
                Vec3 *dst = &cur->unk_204;
                s32 s24 = Snowball_GetRadius(o);
                s32 s28 = Insect_RandomTurn(0x20, 1);
                if (q) {
                    if (func_020e9650((u8 *)q + 0x5c, pos) > 0xc000) {
                        dst->x = pos->x;
                        dst->y = pos->y;
                        dst->z = pos->z;
                        s32 idx = ((u16)s28 >> 4) * 2;
                        dst->x += func_01ffcb0c(data_02135f44[idx], s24);
                        dst->z += func_01ffcb0c(data_02135f44[idx + 1], s24);
                        cur->unk_23a = Math_AngleXZ(pos, dst);
                        cur->unk_248 = 1;
                        cur->unk_24d = kind;
                        cur->unk_249 = 0;
                        cur->unk_21c = j;
                        func_ov003_022288dc((void *)obj, cur);
                        return TRUE;
                    }
                }
            }
        }
        goto fail;
    } else {
        if (!InsectSpawn_PickPos(cur, &buf, kind, sub)) {
            goto fail;
        }
        cur->unk_248 = 1;
        cur->unk_24d = kind;
        cur->unk_249 = 0;
        Vec3 *s = &cur->unk_204;
        Vec3 *d = &cur->unk_1c8;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        if (flag == 1) {
            func_ov003_022288dc((void *)obj, cur);
        }
        return TRUE;
    }
fail:
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x222644c
extern "C" s32 Insect_TrySpawnRandom(s32 a, s32 b, s8 c, u32 d) {
    Rec *e;
    s32 r;
    u8 i;
    r = 0;
    e = sFieldInsects;
    for (i = 0; i < 8; e++, i++) {
        if (e->unk_248 == 0) {
            if (c == 0x33) {
                r = Insect_Spawn(a, c, (u8)d, b);
            } else if (Insect_RollKind(&c)) {
                r = Insect_Spawn(a, c, func_02060b9c(c), b);
            }
            if (r == 0 && c != 0x33) {
                e->unk_248 = 1;
                e->unk_24d = -10;
            }
            return r;
        }
    }
    return 0;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x2226428
extern "C" void Insect_SpawnBeeSwarm(Vec3 *v) {
    u32 d = (u32)&data_ov003_02259558;
    data_ov003_02259594[9] = 1;
    *(Vec3 *)d = *v;
    data_ov003_02259594[0x11] = 4;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x22261ec
extern "C" BOOL HeldInsect_SetHandMatrix(s32 idx, s16 *p, Unk_ov003_02226180_Blk *q, s32 flag) {
    Rec *e = sHeldInsects + idx;
    Vec3 *v = &e->unk_204;
    BOOL ret = TRUE;
    e->unk_180 = *q;
    s32 *b = (s32 *)&e->unk_180;
    Insect_SetScale(e, *p);
    v->x = b[9];
    v->y = b[10];
    v->z = b[11];
    WorldCurve_FromCurved(v, v);
    if (e->unk_251 != 0xb) {
        s32 t = e->unk_24d;
        if (t == 0x1a) {
            e->unk_238 = 0;
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x1e000);
        } else if (t == 0xc || t == 0xd || t == 0x1d) {
            e->unk_238 = func_01ffcb0c(0xb6, 0x91000);
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x96000);
        } else if (t == 0x35) {
            e->unk_238 = func_01ffcb0c(0xb6, 0x91000);
            e->unk_23a = func_01ffcb0c(0xb6, 0x64000);
            e->unk_23c = 0;
        } else {
            e->unk_238 = func_01ffcb0c(0xb6, 0x35000);
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x54000);
            if (e->unk_250 == 3) {
                u8 *s = e->unk_50;
                if (t == 0x14 && ((*(u32 *)(s + 0xa4) << 4) >> 16) == 0) {
                    AnimFrameCtrl_setup(s + 0x9c, 4, 1, 0x1000, 0);
                    *(u32 *)(s + 0xa4) = 0x4000;
                } else if ((u16)(s16)(t - 10) <= 1) {
                    if (((*(u32 *)(s + 0xa4) << 4) >> 16) == 0) {
                        AnimModel_setFrame(s, 1);
                    } else {
                        AnimModel_setFrame(s, 0);
                    }
                } else if (t == 0x37) {
                    s32 w = *(s32 *)(s + 0xa0) >> 12;
                    if ((u16)w == 0xe && ((*(u32 *)(s + 0xa4) << 4) >> 16) == 0xd) {
                        *(u32 *)(s + 0xa4) = 0xa000;
                    } else if ((u16)w != 0xe) {
                        AnimFrameCtrl_setup(s + 0x9c, 0xe, 0, 0x1000, 0xa);
                    }
                }
            }
        }
    }
    if (e->unk_250 == 2 || e->unk_250 == 0) {
        ret = FALSE;
    }
    if (flag != 0) {
        e->unk_251 = 0xa;
        if (e->unk_24d == 0x39) {
            s32 t = e->unk_22c;
            s32 m1 = -1;
            if (t != m1) {
                func_020902f8(t);
                e->unk_22c = -1;
            }
        }
    }
    return ret;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x2226180
extern "C" BOOL Insect_NetClaim(s32 x) {
    u8 idx = x & 0xf;
    Rec *r = (Rec *)x;
    if ((x >> 4) & 1) {
        r = sFieldInsects + idx;
    } else if ((x >> 5) & 1) {
        r = sSpecialInsects + idx;
    }
    u32 t = r->unk_251;
    if (t != 0xa && t != 0xb && t != 9 && t != 0x10 && r->unk_250 == 3) {
        r->unk_251 = 0x10;
        return FALSE;
    }
    return TRUE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_ov003_022287c8 _ZN13InsectManager10freeInsectEP22Unk_ov003_02228710_Acti
#define func_ov003_022288dc _ZN13InsectManager16allocFieldInsectEP22Unk_ov003_02228710_Act
#define data_ov003_02259484 ((u8 *)&::sSpecialInsects[0].unk_130)
#define data_ov003_02259558 (*(Vec3 *)&::sSpecialInsects[0].unk_204)
#define data_ov003_02259594 ((u8 *)&::sSpecialInsects[0].unk_240)
#define data_ov003_022595b0 (*(Rec *)&::sSpecialInsects[1])
namespace s01 {
// 0x222612c
extern "C" BOOL Insect_IsBeeSwarmOut(void) {
    Unk_020cbb18_Ptr *p = gCommManager;
    if (CommManager_isSlotActive(p, p->unk_64) == 0) {
        Rec *e = sSpecialInsects;
        if (func_02106020(func_0209c0ac(data_ov003_02259484), 0) > 0x1e && e->unk_250 == 3 && e->unk_24d != 0x13) {
            return TRUE;
        }
    }
    return FALSE;
}
}
#undef func_020547a4
#undef func_0205668c
#undef func_02072e88
#undef func_0209c0ac
#undef func_0209c15c
#undef func_ov003_022287c8
#undef func_ov003_022288dc
#undef data_ov003_02259484
#undef data_ov003_02259558
#undef data_ov003_02259594
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x22260e8
extern "C" BOOL Insect_IsAtWateringPoint(void *p)
{
    s32 c, d;
    s32 a, b;
    if (sWateringActive != 0) {
        FieldPos_ToUnit(&a, &b, p);
        FieldPos_ToUnit(&c, &d, sWateringPos);
        if (c == a && d == b) {
            return TRUE;
        }
    }
    return FALSE;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x22260ac
extern "C" BOOL Insect_RollKind(u8 *out)
{
    Unk_ov003_02226058_Buf l;
    u8 v;
    Clock_GetDayMonth(&l);
    v = l.unk_01 - 1;
    if (v > 11) {
        v = 0;
    }
    if (Insect_RollFromSpawnTable(v, Insect_GetTimeSlot(), out)) {
        return TRUE;
    }
    return FALSE;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2226058
extern "C" s32 Insect_GetTimeSlot()
{
    Unk_ov003_02226058_Buf l;
    u32 b;
    Clock_GetMinuteHour(&l);
    b = l.unk_01;
    if (b >= 4 && b <= 7) {
        return 1;
    }
    if (b >= 8 && b <= 15) {
        return 2;
    }
    if (b == 16) {
        return 3;
    }
    if ((u8)(b + 0xef) <= 1) {
        return 4;
    }
    if (b >= 19 && b <= 22) {
        return 5;
    }
    return 0;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x222603c
extern "C" void Insect_TickFrame(u8 *self)
{
    self += 0x24f;
    (*self)++;
    if (*self > 0x50) {
        *self = 0;
    }
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
// 0x2225f2c
Insect::Insect()
{ using namespace s00;
    unk_130.func_0209c0c8();
    unk_251 = 0x13;
    unk_24f = 0;
    unk_23a = 0;
    unk_23c = 0;
    unk_238 = 0;
    unk_24d = -1;
    unk_250 = 0;
    unk_170 = 0;
    unk_24c = 1;
    unk_242 = 0;
    unk_24b = 1;
    unk_24a = 0;
    unk_248 = 0;
    unk_249 = 0;
    unk_252 = 0;
    unk_22c = -1;
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
// 0x2225ed0
Insect::~Insect() { using namespace s00;}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225ec8
extern "C" void Insect_SetAnimSpeed(u8 *self, u32 v)
{
    *(u32 *)(self + 0xfc) = v;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225e34
extern "C" BOOL Insect_PickSpecialSpawn(u8 *a, u8 *b, s32 c)
{
    s32 r = func_020b8fe8();
    u8 buf[16];
    if (c != 0) {
        if (r == 0) {
            if (Town_GetRafflesiaPos(buf)) {
                *a = 0x33;
                *b = 8;
                return TRUE;
            }
            if (sTrashFlySpawnEnabled > 0) {
                if (func_02063b8c(100) < 20) {
                    *a = 0x33;
                    *b = 7;
                    return TRUE;
                }
            }
        }
    } else {
        if (r != 1) {
            u8 *const g = data_ov003_022595b0;
            if (sAntSpawnEnabled != 0) {
                if (g[0x250] == 3 && g[0x251] == 0x13) {
                    *a = 0x3b;
                    *b = 7;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225dbc
extern "C" BOOL Insect_IsAllowedOnline(s32 a)
{
    Unk_ov003_02225dbc_Data *p = gCommManager;
    if (!CommManager_isSlotActive(p, p->unk_64)) {
        return TRUE;
    }
    switch (a) {
    case 8:
    case 10:
    case 25:
    case 35:
    case 48:
    case 50:
    case 51:
    case 53:
    case 54:
    case 55:
    case 58:
    case 59:
        return FALSE;
    }
    return TRUE;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225d38
extern "C" BOOL Insect_RollFromSpawnTable(u32 a, u32 b, u8 *out)
{
    u8 r;
    Unk_ov003_02225d38_Ent *t;
    u32 cnt;
    s32 v;
    u8 i;
    Unk_ov003_02225d38_Ent *ent;
    r = func_02063b8c(100);
    t = data_020dcbd0[a];
    if (t == 0) {
        return FALSE;
    }
    cnt = t[b].unk_04;
    v = func_020b8fe8();
    i = 0;
    ent = &t[b];
    for (; i < cnt; i++) {
        Unk_ov003_02225d38_Pair *pp = ent->unk_00;
        u8 first = pp[i].unk_00;
        u8 second = pp[i].unk_01;
        if (second > r) {
            if (first != 0x30 && Insect_IsAllowedOnline(first) && Insect_GetWeatherReaction((s8)first, v) != 4) {
                *out = first;
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225cb0
extern "C" void FieldInsect_PurgeStale()
{
    Unk_ov003_02225cb0_Ent *e;
    s32 i;
    sFieldInsectPurgeTimer++;
    if (sFieldInsectPurgeTimer > 0x78) {
        e = sFieldInsects;
        sFieldInsectPurgeTimer = 0;
        for (i = 0; i < 8; e++, i++) {
            if (e->unk_24d == -10) {
                e->unk_24d = -1;
                e->unk_248 = 0;
            } else if (e->unk_249 == 0 && e->unk_234 == 0 && e->unk_250 == 3) {
                e->unk_250 = 4;
                e->unk_251 = 10;
            }
        }
    }
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225bf8
extern "C" s32 Insect_GetWeatherReaction(s32 a, s32 b)
{
    switch (a) {
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        if ((u32)(b - 1) <= 1) {
            return 5;
        }
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    case 10:
    case 12: case 13: case 14: case 15:
    case 21: case 22: case 23:
    case 25:
    case 27: case 28: case 29:
    case 32:
    case 37:
    case 50: case 51:
    case 54: case 55:
        if ((u32)(b - 1) <= 1) {
            return 4;
        }
        break;
    case 59:
        if (b == 1) {
            return 4;
        }
        break;
    case 26:
        if (b != 1) {
            return 4;
        }
        break;
    case 9: case 11: case 24: case 30: case 31: case 33: case 34: case 35: case 36:
    case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46:
    case 47: case 48: case 49: case 52: case 53: case 56: case 57: case 58:
    default:
        return 3;
    }
    return 3;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
// 0x2225be0
InsectMatAnim::InsectMatAnim() { using namespace s00;}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
// 0x2225ba8
InsectMatAnim::~InsectMatAnim() { using namespace s00;}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225b6c
extern "C" s32 InsectSpawn_CopyMask(void *p, s32 t)
{
    switch (t) {
    case 0:
    case 5:
    case 6:
        MI_CpuCopy8(sInsectSpawnMaskLand, p, 0x200);
        break;
    default:
        MI_CpuCopy8(sInsectSpawnMaskDry, p, 0x200);
        break;
    }
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225910
extern "C" s32 InsectSpawn_PickPos(u8 *self, void *a, s32 code, u32 flag)
{
    u32 mask = 0;
    s32 x = 0;
    s32 y = 0;
    BOOL found;
    s32 rndD;
    s32 rnd33;
    s32 *q;
    u32 n;
    void *obj = TownBlockMap_Get();
    if (obj == 0) {
        return 0;
    }
    if (code == 0x3b) {
        s32 rnd;
        s32 k;
        rnd = func_02063b8c(16 - data_ov003_02258f08);
        void *b;
        n = 0;
        k = n;
        mask = data_ov003_02258f10;
        for (; k < 16; n++, k++) {
            if ((((s32)mask >> k) & 1) == 0) {
                if (rnd-- == 0) {
                    data_ov003_02258f10 |= 1 << k;
                    break;
                }
            }
        }
        x = n >> 2;
        y = n & 3;
        data_ov003_02258f08++;
        if (InsectSpawn_FindUnitInBlock(a, code, &x, &y, obj, (u8)flag)) {
            b = func_02095204(4);
            data_ov003_02258f04 = 1;
            if (b) {
                s32 v[3];
                v[0] = x;
                v[1] = 0;
                v[2] = y;
                if (func_020e9650((u8 *)b + 0x5c, v) > 0x10000) {
                    q = (s32 *)(self + 0x204);
                    q[0] = x;
                    q[2] = y;
                    data_ov003_02258f10 = 0;
                    data_ov003_02258f08 = 0;
                    data_ov003_02258f04 = 0;
                    return 1;
                }
            }
        }
        if (data_ov003_02258f08 >= 0x10) {
            data_ov003_02258f10 = 0;
            data_ov003_02258f08 = 0;
            if (data_ov003_02258f04 != 0) {
                data_ov003_02258f04 = 0;
            } else {
                sAntSpawnEnabled = 0;
            }
        }
    } else if (code == 0x33) {
        found = FALSE;
        s32 i;
        u32 zero = 0;
        for (i = 0; i < 16; i++) {
            rnd33 = func_02063b8c(16 - i);
            s32 k;
            n = 0;
            for (k = n; k < 16; n++, k++) {
                if (((mask >> k) & 1) == 0) {
                    if (rnd33-- == 0) {
                        mask |= 1 << k;
                        break;
                    }
                }
            }
            x = n >> 2;
            y = n & 3;
            if (InsectSpawn_FindUnitInBlock(a, code, &x, &y, obj, (u8)flag)) {
                void *b = func_02095204(4);
                if (b) {
                    s32 v[3];
                    v[0] = x;
                    v[1] = zero;
                    v[2] = y;
                    if (func_020e9650((u8 *)b + 0x5c, v) > 0x10000) {
                        q = (s32 *)(self + 0x204);
                    q[0] = x;
                        q[2] = y;
                        return 1;
                    }
                }
                found = TRUE;
            }
        }
        if (!found) {
            sTrashFlySpawnEnabled = 0;
        }
    } else {
        s32 i;
        for (i = 0; i < 16; i++) {
            rndD = func_02063b8c(16 - i);
            s32 k;
            n = 0;
            for (k = n; k < 16; n++, k++) {
                if (((mask >> k) & 1) == 0) {
                    if (rndD-- == 0) {
                        mask |= 1 << k;
                        break;
                    }
                }
            }
            x = n >> 2;
            y = n & 3;
            if (InsectSpawn_FindUnitInBlock(a, code, &x, &y, obj, (u8)flag)) {
                q = (s32 *)(self + 0x204);
                    q[0] = x;
                q[2] = y;
                return 1;
            }
        }
    }
    return 0;
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x22258cc
extern "C" void InsectSpawn_BuildLightMask(u16 (*arr)[4][16])
{
    s32 i, j, k;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 16; j++) {
            for (k = 0; k < 4; k++) {
                arr[i][k][j] = 0xffff;
            }
        }
    }
    InsectSpawn_ClearLitUnits(arr);
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b2ae0 _ZN12Unk_020b28ac13func_020b2ae0EPiS0_j
#define func_020b2b98 _ZN12Unk_020b28ac13func_020b2b98Ev
#define func_02133150 _s32_div_f
#define data_ov003_022595b0 ((u8 *)&::sSpecialInsects[1])
namespace s00 {
// 0x2225800
extern "C" void InsectSpawn_ClearLitUnits(u16 (*arr)[4][16])
{
    u32 i;
    for (i = 0; i < 0x22; i++) {
        u16 id;
        void *p;
        u32 n;
        BuildingActor *o;
        id = Item_MakeBuilding(i);
        p = StrBSize_Get(&id);
        if (p != 0) {
            n = func_020b2b98(p);
            if (n != 0) {
                o = BuildingList_FindByItem(id);
                if (o != 0) {
                    u32 j;
                    for (j = 0; j < n; j++) {
                        s32 xy[2];
                        if (func_020b2ae0(p, &xy[0], &xy[1], j)) {
                            if (o->callIsLit() == 1) {
                                s32 px = xy[0] + o->getGridX();
                                s32 py = xy[1] + o->getGridZ();
                                s32 bx = (px - 16) / 16;
                                s32 by = (py - 16) / 16;
                                u16 *c = (u16 *)((u8 *)arr + bx * 32 + by * 128);
                                c[py % 16] &= 0xffff - (1 << (px % 16));
                            }
                        }
                    }
                }
            }
        }
    }
}
}
#undef func_02072e88
#undef func_020b2ae0
#undef func_020b2b98
#undef func_02133150
#undef data_ov003_022595b0

