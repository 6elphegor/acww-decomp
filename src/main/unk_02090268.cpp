
#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/Unk_0203389c_Vec.h"
#include "gfx/Unk_02093dc8_Obj.h"
#include "gfx/EffectSlot.h"
#include "gfx/EffectSplEmitter.h"
#include "gfx/SPLResource.h"
#include "gfx/P.h"
#include "game/GroundInfo.h"
#include "gfx/Rgb555.h"

typedef Unk_0203389c_Vec Unk_02093aa8_Vec;
typedef Unk_0203389c_Vec Unk_02093748_Vec;


struct Unk_020904f0_Vec {
    s32 x, y, z;
};

class EffectManager {
public:
    void end(s32 id);
    u32 getKind(s32 id);
    s32 create(u32 kind, s32 a, s32 b, s32 c, s32 d);
    void reset();
    void setLife(s32 id, s16 v);
    void setPosition(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b);
    EffectSlot *findSlot(s32 id, EffectSlot *e, s32 n);
    void clearSlots();

    /* 0x000 */ EffectSlot slots[32];
    /* 0x380 */ EffectSlot scratchSlot;
    /* 0x39c */ u16 nextHandle;
};

struct EffectKindEntry {
    s32 (*fn)(s32, s32, s32, s32, s32);
    s32 end;
};




struct Unk_02090bd8_Vec { s32 x, y, z; };

struct Unk_02090bd8_V {
    s32 x;
    s32 y;
    s32 z;
    Unk_02090bd8_V() {}
    ~Unk_02090bd8_V() {}
};

struct Unk_02090bd8_Obj {
    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ u8 *unk_0c;
    /* 0x10 */ u8 unk_10[8];
    /* 0x18 */ Unk_02093dc8_Root **resource;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 posX;
    /* 0x24 */ s32 posY;
    /* 0x28 */ s32 posZ;
    /* 0x2c */ u8 unk_2c[0x18];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
};




struct Unk_02091404_V {
    s32 x, y, z;
};

struct Unk_02091404_Node {
    /* 0x00 */ Unk_02091404_Node *next;
    /* 0x04 */ u8 unk_04[0x1c];
    /* 0x20 */ u16 rotation;
    /* 0x22 */ u16 unk_22;
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 unk_28[8];
    /* 0x30 */ s32 unk_30;
};

struct Unk_02091404_Obj {
    /* 0x00 */ u8 unk_00[8];
    /* 0x08 */ Unk_02091404_Node *particles;
    /* 0x0c */ u8 unk_0c[0x0c];
    /* 0x18 */ Unk_02093dc8_Root **resource;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 posX;
    /* 0x24 */ s32 posY;
    /* 0x28 */ s32 posZ;
    /* 0x2c */ u8 unk_2c[0x10];
    /* 0x3c */ s16 axisX;
    /* 0x3e */ s16 axisY;
    /* 0x40 */ s16 axisZ;
    /* 0x42 */ u8 unk_42[10];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58[0x10];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a[0x0e];
    /* 0x78 */ void (*callback)(Unk_02091404_Obj *, s32);
};

struct Unk_02091404_Arg {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ EffectEmitterTag idx;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ Unk_02091404_Obj *emitter;
};

struct Unk_02092388_Vec {
    s32 x, y, z;
};


struct Unk_02092388_Sub2 {
    Unk_02093dc8_Root *header;
};

struct Unk_02092388_Node {
    Unk_02092388_Node *next;
    u8 pad_04[0x1c];
    u16 rotation;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
};

struct Unk_02092388_Obj {
    u8 pad_00[8];
    Unk_02092388_Node *particles;
    s32 particleCount;
    u8 pad_10[8];
    Unk_02092388_Sub2 *resource;
    u32 stateFlags;
    s32 posX;
    s32 posY;
    s32 posZ;
    u8 pad_2c[0x10];
    s16 axisX;
    s16 axisY;
    s16 axisZ;
    u8 pad_42[0xa];
    s32 unk_4c;
    s32 unk_50;
    u8 pad_54[4];
    u16 unk_58;
    u8 pad_5a[0xe];
    u8 unk_68;
    u8 unk_69;
    u8 pad_6a[0xe];
    void *callback;
};

struct Unk_02092528_Outer {
    u32 unk_00;
    u8 tag[4];
    u32 unk_08;
    Unk_02092388_Obj *emitter;
};



namespace Unk_02091ea0_Ns {
extern "C" s32 EffectKind35_InitParams(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);
}

struct Unk_02092e98_Vec { s32 x, y, z; };

struct Unk_02092da4_X { Unk_02093dc8_Root *header; };

struct Unk_02092da4_B {
    u8 pad_00[0xc];
    s32 particleCount;
    u8 pad_10[8];
    Unk_02092da4_X *resource;
    u32 stateFlags;
    s32 posX;
    s32 posY;
    s32 posZ;
    u8 pad_2c[0x10];
    u16 axisX;
    u16 axisY;
    u16 axisZ;
    u8 pad_42[0xe];
    u32 unk_50;
    u32 unk_54;
};


struct Unk_02092830 {
    u32 unk_00;
    u8 tag[4];
    u32 unk_08;
    Unk_02092da4_B *emitter;
};

// EffectEmitterTag copied as a byte array (the EffectKind0E/11/26 updaters copy the tag this way)
struct EffectEmitterTagBytes {
    u8 b[4];
};

struct Unk_02092e98_Obj {
    u8 pad_00[0x24];
    Unk_02092e98_Vec unk_24;
    s32 unk_30;
    u8 pad_34[0xc];
};

struct Unk_020932bc_V32 {
    s32 x, y, z;
    void Set(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};




typedef void (*EffectModelInitFn)(void *);




class EffectModelObj {
public:
    void initAtSlot(s32 s);

    u8 pad_00[4];
    Unk_020932bc_V32 position;
    Unk_020932bc_V32 scale;
    Unk_020932bc_V16 rotation;
};

static inline BOOL Unk_020935e8_IsOne(u8 v)
{
    return v == 1 ? TRUE : FALSE;
}










namespace R1 {
extern "C" {
extern EffectManager gEffectManager;

extern EffectScratchSlot data_021d0830;

extern EffectKindEntry sEffectKindTable[];

extern void (*data_020e1918[])(s32);

extern u8 data_020e1464[];

extern u8 data_020e1490[];

extern u8 data_020e1564[];

extern u8 data_020e14c8[];

extern u8 data_020e162c[];

extern u8 data_020e163c[];

extern u8 data_020e1714[];

extern u8 sEffectDefaultTrackedCbs[];

extern u8 data_020d0384[];

extern u8 data_020d024c[];

extern u8 data_020d0264[];

extern u8 data_020d02d0[];

extern u8 data_020d0330[];

extern u8 data_020d02c4[];

extern u8 data_020d039c[];

extern u8 data_020d03a8[];

extern u8 data_020d02b8[];

extern u32 sEffectSplFrmHeap;

s32 File_Load(void *);

void *NNS_FndAllocFromFrmHeapEx(u32 heap, u32 size, s32 align);

void MI_CpuCopy8(void *dst, void *src, u32 size);

void MI_CpuFill8(void *dst, s32 v, u32 size);

s32 SPL_LoadTexByVRAMManager(u32 h);

s32 SPL_LoadTexPlttByVRAMManager(u32 h);

s32 Effect_StartOneShot(s32, s32, s32, s32, s32, void *);

s32 Effect_StartTracked(s32, s32, s32, s32, s32, void *);

s32 Effect_StartModel(s32, s32, s32, s32, s32, void *);

s32 EffectCb_InitOneShotOffset(s32, void *, void *);

s32 EffectCb_FollowTrackedOffset(void *, void *, void *);

s32 EffectSpl_CreateTracked(s32, s32, s32, void *);

void EffectSplPool_Construct(void *);

void *EffectSpl_Alloc(u32 size);


}
}

namespace R2 {
extern "C" {
extern EffectSlot gEffectManager[];

extern EffectSlot data_021d0830;

extern char data_020d03b4[], data_020d03c0[], data_020d0300[], data_020d039c[], data_020d03a8[], data_020d02b8[];

extern char data_020e18a8[][12], data_020e183c[][12];

extern char data_020e167c[], data_020e14b8[], data_020e16bc[], data_020e1000[];

extern char data_020e158c[], data_020e1514[], data_020e17fc[], data_020e168c[], data_020e14cc[];

extern char data_020d02c4[], data_020d02e8[], data_020d02a0[], data_020d0258[], data_020d0240[], data_020d021c[];

extern char data_020e15d4[], data_020e14a8[], data_020e16d4[], data_020e148c[], data_020e1498[];

s32 FX_Div(s32 a, s32 b);

s32 func_01ffcb0c(s32 a, s32 b);

void MI_CpuCopy8(void *, void *, u32);

s32 EffectCb_FollowTrackedOffset(void *p, const char *a, const char *b);

s32 EffectCb_InitTrackedOffset(void *p, const char *a, const char *b);

s32 Effect_StartTracked(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);

s32 Effect_StartOneShot(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);

s32 _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);

s32 Effect_StartWaterColumn(s32 a, s32 b, s32 c, void *p, const char *d, const char *e, void (*f)(s32));

s32 _ZN14EffectModelObj10initAtSlotEi(s32 a, s32 b);

s32 EffectCb_InitOneShotSetUnk54(s32 a, s32 b);

s32 EffectCb_InitTracked(void *p);

s32 EffectSpl_ApplySceneTint(void *p);

void EffectKind3F_InitModel(s32 p);


}
}

namespace R3 {
extern "C" {
extern EffectSlot gEffectManager[];

extern EffectScratchSlot data_021d0830;

extern char data_020e166c[], data_020e164c[], data_020e156c[], data_020e1544[], data_020d0324[];

extern char data_020e155c[], data_020e1554[], data_020e16d4[], data_020d030c[], data_020e14a0[];

extern char data_020e1784[], data_020e1734[];

extern Unk_02091404_V data_020d02c4;

extern s16 data_02135f44[];

s32 _ZN13EffectManager7setLifeEis(void *a, void *b, s32 c);

void _ZN10EffectSlot5clearEv(void *r);

s32 Effect_StartTracked(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);

s32 Effect_StartOneShot(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);

s32 EffectCb_FollowTrackedOffset(void *p, const char *a, const char *b);

s32 EffectCb_InitTrackedOffset(void *p, const char *a, const char *b);

s32 _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);

s32 EffectCb_InitTracked(void *p);

s32 EffectSpl_ApplySceneTint(void *p);

s32 EffectSpl_CreateTracked(s32 a, s32 b, s32 c, const char *d);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void MI_CpuCopy8(void *, void *, u32);

void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *buf, s32 b, s32 c, s32 d);

void GroundInfo_Destruct(void *buf);

s32 Weather_GetFallingPrecip(void);

s32 GroundSeason_IsSnow(void);

void Vec_RotateY(Unk_02091404_V *v, s16 a);

s32 Math_Atan2(s32 a, s32 b);

void EffectCb_AlignFirstParticle2(Unk_02091404_Obj *o, s32 k);


}
}

namespace R4 {
extern "C" {
extern u8 data_020d02c4[];

extern u8 data_020d02dc[];

extern u8 data_020d02ac[];

extern u8 data_020d0294[];

extern u8 data_020d0288[];

extern u8 data_020d0270[];

extern u8 data_020d0234[];

extern u8 data_020d0228[];

extern u8 data_020d0378[];

extern u8 data_020d036c[];

extern u8 data_020d0360[];

extern u8 data_020d0354[];

extern u8 data_020d0348[];

extern u8 data_020d033c[];

extern u8 data_020e15cc[];

extern u8 data_020e149c[];

extern u8 data_020e14f4[];

extern u8 data_020e159c[];

extern u8 data_020e14c0[];

extern u8 data_020e15fc[];

extern u8 sEffectDefaultOneShotCbs[];

extern u8 data_020e1488[];

extern u8 data_020e14b0[];

extern u8 data_020e14a4[];

extern u8 data_020e1478[];

extern u8 data_020e14ac[];

extern u8 data_020e1484[];

extern u8 data_020e16d4[];

extern u8 data_020e15bc[];

extern u8 data_020e175c[];

extern u8 data_020e165c[];

extern u8 data_020e14c4[];

extern u8 gFieldSceneKind;

extern EffectSlot data_021d0830;

extern EffectSlot gEffectManager[];

extern s16 data_02135f44[];

s32 EffectCb_InitTrackedOffset(void *a, s32 b, void *c);

s32 EffectCb_FollowTrackedOffset(void *a, s32 b, void *c);

s32 EffectCb_InitOneShotOffset(void *a, void *b, void *c);

s32 Effect_StartTracked(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 Effect_StartOneShot(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 EffectSpl_CreateOneShot(s32 a, s32 b, s32 c, void *d);

s32 _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(Unk_02092388_Obj *o, s32 a, void *b, s32 c, s32 d, s32 e, void *f, s32 g, void *h);

s32 Effect_StartModel(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void _ZN10EffectSlot5clearEv(void *e);

void EffectSpl_ApplySceneTint(void *o);

s32 Weather_GetFallingPrecip();

s32 GroundSeason_IsSnow();

void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *buf, s32 pos, s32 a, s32 b);

void GroundInfo_Destruct(void *buf);

s32 Sky_GetLightColor(s32 a);

void EffectCb_InitOneShot(void *a);

s32 _s32_div_f(s32 a, s32 b);

void Vec_RotateY(Unk_02092388_Vec *v, s16 a);

void VEC_Add(Unk_02092388_Vec *a, void *b, Unk_02092388_Vec *c);

s32 Math_Atan2(s32 a, s32 b);

void EffectKind35_InitParams(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);

s32 Effect_StartOnSandOrSnow(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void EffectCb_PlaceRotatedOffset(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang);

void EffectCb_AlignFirstParticle(Unk_02092388_Obj *o, s32 flag);

s32 EffectKind2E_Start(s32 a, s32 b, s32 c, s32 d, s32 e);

void EffectKind24_InitModel(EffectModelObj *o);

static inline BOOL Unk_02092770_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}


}
}

namespace R5 {
extern "C" {
extern Unk_02092e98_Vec data_021d0830;

extern u32 data_020e14dc[], data_020e14e4[], data_020e154c[], data_020e15ac[], data_020e153c[], data_020e1534[];

extern u32 data_020e15f4[], data_020e1494[], data_020e1524[], data_020e14bc[], data_020e1574[], data_020e147c[];

extern u32 data_020e1620[], data_020e151c[], data_020e1614[], data_020e15b4[], data_020e15a4[], data_020e157c[];

extern u32 data_020e16d4[], data_020e1584[], data_020e16a4[], data_020e1504[], data_020e15dc[], data_020e14fc[];

extern u32 data_020e15ec[];

extern EffectSlot gEffectManager[];

s32 Effect_StartTracked(s32, s32, s32, s32, s32, void *);

s32 EffectCb_InitTrackedOffset(void *, s32, s32);

s32 EffectCb_InitTracked(void *);

s32 EffectCb_InitOneShotSetUnk54(void *, s32);

s32 _ZN14EffectModelObj10initAtSlotEi(void *, s32);

s32 EffectCb_InitOneShot(void *);

s32 Effect_StartOneShot(s32, s32, s32, s32, s32, void *);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 EffectSpl_CreateTracked(s32, s32, s32, void *);

s32 _ZN10EffectSlot5clearEv(void *);

s32 _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 Effect_SpawnParticleLandings(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 Effect_StartWaterColumn(s32, s32, s32, s32, void *, void *, void *);

void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *, void *, s32, s32);

void GroundInfo_Destruct(void *);

s32 Vec_SafeNormalize(void *);

void EffectSpl_ApplySceneTint(void *);

void MI_CpuCopy8(void *, void *, u32);

extern "C" s32 EffectKind19_InitModel(void *p);

extern "C" s32 EffectKind17_InitModel(void *p);

extern "C" s32 EffectKind16_InitModel(void *p);


}
}

namespace R6 {
extern "C" {
extern u8 data_020e16d4[];

extern u8 data_020e152c[];

extern u8 data_020e1594[];

extern u8 data_020e15e4[];

extern u8 data_020e1608[];

extern u8 data_020e15c4[];

extern u8 data_020e150c[];

extern u8 data_020e1474[];

extern u8 data_020e14b4[];

extern u8 data_020e14d4[];

extern u8 data_020e14ec[];

extern u8 data_020e1480[];

extern u8 data_020d027c[];

extern u8 data_020d02f4[];

extern u8 data_020d0318[];

extern u8 data_020d0390[];

extern u8 gFieldSceneKind[];

extern EffectSlot data_021d0830;

extern EffectSlot gEffectManager[];

extern Unk_02093748_Vec gVec3Zero;

s32 Effect_StartOneShot(s32 kind, s32 a, void *b, void *c, s32 d, void *data);

s32 EffectCb_InitOneShotOffset(void *obj, const void *a, const void *b);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *obj, s32 h, s32 a, void *b, void *c, s32 d, s32 e);

s32 EffectSpl_CreateTracked(s32 kind, void *b, void *c, void *data);

s32 EffectModel_Start(s32 kind, EffectModelInitFn fn);

s32 EffectSpl_CreateOneShot(s32 kind, void *b, void *c, void *data);

s32 _ZN10EffectSlot5clearEv(void *obj);

s32 Weather_GetFallingPrecip();

s32 GroundSeason_IsSnow();

s32 EffectSpl_ApplySceneTint(void *obj);

void GroundInfo_Destruct(void *o);

void Vec_RotateX(Unk_02093748_Vec *v, s32 a);

void Vec_RotateY(Unk_02093748_Vec *v, s32 a);

void MI_CpuCopy8(void *src, void *dst, u32 n);

s32 Effect_StartModel(s32 kind, s32 a, void *b, void *c, s32 d, EffectModelInitFn fn);

s32 Effect_StartWaterColumn(s32 a, void *b, void *c, s32 d, void *e, s32 f, EffectModelInitFn fn);

void EffectModel_InitUnitScale(void *o);

void EffectModel_InitDefault(void *o);

s32 Effect_SpawnParticleLandings(void *o, s32 a, void *b, s32 c, void *d, s32 e, void *f, s32 g, void *h);
s32 _ZN14GroundInfoBase16getWaterSurfaceYEv(void *p);
}
}

namespace R7 {
extern "C" {
extern EffectSlot gEffectManager[];

extern EffectScratchSlot data_021d0830;

extern Unk_02093aa8_Vec gVec3Zero;

extern u32 sEffectDefaultTrackedCbs[];

extern u32 sEffectDefaultOneShotCbs[];

extern s16 data_02135f44[];

s32 EffectSpl_CreateTracked(void *, s32, s32, void *);

s32 EffectSpl_CreateOneShot(void *, s32, s32, void *);

s32 EffectSpl_ApplySceneTint(void *);

s32 _ZN13EffectManager7setLifeEis(void *, s32, s32);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 _ZN10EffectSlot5clearEv(void *);

void Vec_RotateY(void *, s32);

s32 Vec_SafeNormalize(void *);

void VEC_Add(void *, void *, void *);

s32 MI_CpuCopy8(const void *src, void *dst, u32 n);

s32 MI_CpuFill8(void *dst, u32 v, u32 n);

s32 memcmp(const void *, const void *, u32);

s32 EffectCb_FollowTrackedOffset(EffectEmitterEntry *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 EffectCb_InitTrackedOffset(EffectEmitterEntry *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 Effect_StartOneShot(s32 a, s32 b, void *c, s32 d, s32 e, void *f);

void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, EffectSlot *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, EffectSlot *e);

s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, EffectSlot *e);

s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o);


}
}

namespace R7 {
extern "C" s32 EffectCb_TintOnly(void *o)
{
    return EffectSpl_ApplySceneTint(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o)
{
    o->posX = (*(EffectScratchSlot *)&gEffectManager[32]).x + o->resource->header->posX;
    o->posY = (*(EffectScratchSlot *)&gEffectManager[32]).y + o->resource->header->posY;
    o->posZ = (*(EffectScratchSlot *)&gEffectManager[32]).z + o->resource->header->posZ;
    return EffectSpl_ApplySceneTint(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, EffectSlot *e)
{
    s32 idx;
    u16 ang = e->angle;
    o->posX = e->x + o->resource->header->posX;
    o->posY = e->y + o->resource->header->posY;
    o->posZ = e->z + o->resource->header->posZ;
    idx = (ang >> 4) * 2;
    o->axisX = data_02135f44[idx];
    o->axisY = 0;
    o->axisZ = data_02135f44[idx + 1];
    EffectSpl_ApplySceneTint(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotFacing(Unk_02093dc8_Obj *o)
{
    return EffectCb_PlaceFacing(o, &(*(EffectScratchSlot *)&gEffectManager[32]));
}
}

namespace R7 {
extern "C" s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, EffectSlot *e)
{
    s16 ang = (s16)(e->angle + 0x8000);
    s32 idx;
    o->posX = e->x + o->resource->header->posX;
    o->posY = e->y + o->resource->header->posY;
    o->posZ = e->z + o->resource->header->posZ;
    idx = ((u16)ang >> 4) * 2;
    o->axisX = data_02135f44[idx];
    o->axisY = 0;
    o->axisZ = data_02135f44[idx + 1];
    EffectSpl_ApplySceneTint(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotFacingBack(Unk_02093dc8_Obj *o)
{
    return EffectCb_PlaceFacingBack(o, &(*(EffectScratchSlot *)&gEffectManager[32]));
}
}

namespace R7 {
extern "C" void EffectCb_InitOneShotSetUnk54(Unk_02093dc8_Obj *o, s32 x)
{
    EffectCb_InitOneShot(o);
    o->unk_54 = x;
}
}

namespace R7 {
extern "C" void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, EffectSlot *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093aa8_Vec pos;
    Unk_02093aa8_Vec v1;
    Unk_02093aa8_Vec v2;
    pos.x = e->x;
    pos.y = e->y;
    pos.z = e->z;
    if (a != NULL) {
        v1.x = a->x;
        v1.y = a->y;
        v1.z = a->z;
        Vec_RotateY(&v1, e->angle);
        VEC_Add(&pos, &v1, &pos);
    }
    o->posX = pos.x + o->resource->header->posX;
    o->posY = pos.y + o->resource->header->posY;
    o->posZ = pos.z + o->resource->header->posZ;
    if (b != NULL) {
        v2.x = b->x;
        v2.y = b->y;
        v2.z = b->z;
        Vec_RotateY(&v2, e->angle);
        if (Vec_SafeNormalize(&v2) != 0) {
            s32 y = v2.y;
            s32 z = v2.z;
            s32 x = v2.x;
            o->axisX = x;
            o->axisY = y;
            o->axisZ = z;
        }
    }
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotOffset(Unk_02093dc8_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    EffectCb_PlaceEmitter(o, &(*(EffectScratchSlot *)&gEffectManager[32]), a, b);
    EffectSpl_ApplySceneTint(o);
}
}

namespace R7 {
extern "C" s32 Effect_StartOneShot(s32 p0, s32 p1, void *p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = sEffectDefaultOneShotCbs;
    r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectScratchSlot *)&gEffectManager[32]), -1, p1, (s32)p2, p3, e, -1);
    if (EffectSpl_CreateOneShot((void *)p0, (s32)p2, p3, t)) r = 1;
    return r;
}
}

namespace R7 {
extern "C" s32 Effect_EndDefault(s32 x)
{
    return _ZN13EffectManager7setLifeEis(gEffectManager, x, 0);
}
}

namespace R7 {
extern "C" s32 EffectCb_CountdownTracked(EffectEmitterEntry *o)
{
    EffectEmitterTag h = o->tag;
    EffectSlot *e = &gEffectManager[h.poolIndex];
    BOOL r = FALSE;
    if (e->handle != -1 && e->life != 0) {
        if (e->life > 0) e->life--;
        r = TRUE;
    }
    if (r == 0) _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R7 {
extern "C" s32 EffectCb_InitTrackedOffset(EffectEmitterEntry *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    EffectScratchSlot *const g = &(*(EffectScratchSlot *)&gEffectManager[32]);
    EffectEmitterTag h = o->tag;
    EffectCb_PlaceEmitter((Unk_02093dc8_Obj *)o->emitter, g, a, b);
    EffectSpl_ApplySceneTint(o->emitter);
    MI_CpuCopy8(g, &gEffectManager[h.poolIndex], 0x1c);
}
}

namespace R7 {
extern "C" s32 EffectCb_FollowTrackedOffset(EffectEmitterEntry *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    EffectEmitterTag h = o->tag;
    BOOL r;
    EffectSlot *e = &gEffectManager[h.poolIndex];
    r = FALSE;
    if (e->handle != -1 && e->life != 0) {
        EffectCb_PlaceEmitter((Unk_02093dc8_Obj *)o->emitter, e, a, b);
        if (e->life > 0) e->life--;
        r = TRUE;
    }
    if (r == 0) _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R7 {
extern "C" s32 EffectCb_InitTracked(EffectEmitterEntry *o)
{
    return EffectCb_InitTrackedOffset(o, NULL, NULL);
}
}

namespace R7 {
extern "C" s32 EffectCb_FollowTracked(EffectEmitterEntry *o)
{
    return EffectCb_FollowTrackedOffset(o, NULL, NULL);
}
}

namespace R7 {
extern "C" s32 Effect_StartTracked(void *p0, s32 p1, s32 p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = sEffectDefaultTrackedCbs;
    r = 3;
    EffectScratchSlot *const g = &(*(EffectScratchSlot *)&gEffectManager[32]);
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(g, g->nextHandle, p1, p2, p3, e, -1);
    if (EffectSpl_CreateTracked(p0, p2, p3, t)) r = 0;
    _ZN10EffectSlot5clearEv(g);
    return r;
}
}

namespace R7 {
extern "C" s32 Effect_SpawnParticleLandings(EffectSplEmitter *o, s32 p1, s32 p2, s32 p3, s32 s0, s32 p5, s32 s2, s32 p6, s32 s4)
{
    P *n;
    Unk_02093aa8_Vec pos;
    BOOL result;
    n = o->particles;
    pos = gVec3Zero;
    result = FALSE;
    if (n != NULL) {
        result = TRUE;
        while (n != NULL) {
            GroundInfo g;
            pos.x = n->pos.x + n->epos.x;
            pos.y = n->pos.y + n->epos.y;
            pos.z = n->pos.z + n->epos.z;
            g.initAtPos(&pos, 0, 0);
            if (g.waterKind != 0) {
                if (pos.y <= g.waterSurfaceY) {
                    pos.y = g.waterSurfaceY;
                    if (p1 != -1) Effect_StartOneShot(p1, 100, &pos, 0, 0, (void *)p2);
                    if (p3 != -1) Effect_StartOneShot(p3, 100, &pos, 0, 0, (void *)s0);
                    n->age = n->life;
                }
            } else if (pos.y <= 0) {
                if (p5 != -1) {
                    pos.y = 0;
                    Effect_StartOneShot(p5, 100, &pos, 0, 0, (void *)s2);
                }
                if (p6 != -1) {
                    pos.y = 0;
                    Effect_StartOneShot(p6, 100, &pos, 0, 0, (void *)s4);
                }
                n->age = n->life;
            }
            n = n->next;
        }
    }
    return result;
}
}

s32 EffectSplEmitter::spawnLandingEffects(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{ using namespace R6;
    Unk_02093748_Vec v;
    BOOL result;
    P *n;
    n = particles;
    v.x = gVec3Zero.x;
    v.y = gVec3Zero.y;
    v.z = gVec3Zero.z;
    result = FALSE;
    if (n) {
        result = TRUE;
        for (; n;) {
            GroundInfo o;
            v.x = n->pos.x + n->epos.x;
            v.y = n->pos.y + n->epos.y;
            v.z = n->pos.z + n->epos.z;
            o.initAtPos(&v, 0, 0);
            if (o.waterKind != 0) {
                s32 h = _ZN14GroundInfoBase16getWaterSurfaceYEv(&o);
                if (v.y <= h) {
                    v.y = h;
                    if (id1 != -1) {
                        Effect_StartOneShot(id1, 0x64, &v, 0, 0, d1);
                    }
                    if (id2 != -1) {
                        Effect_StartOneShot(id2, 0x64, &v, 0, 0, d2);
                    }
                    n->age = n->life;
                }
            } else if (v.y <= 0) {
                if (id3 != -1) {
                    v.y = 0;
                    Effect_StartOneShot(id3, 0x64, &v, 0, 0, d3);
                }
                if (id4 != -1) {
                    v.y = 0;
                    Effect_StartOneShot(id4, 0x64, &v, 0, 0, d4);
                }
                n->age = n->life;
            }
            n = n->next;
        }
    }
    return result;
}

s32 EffectEmitterEntry::updateLanding(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{ using namespace R6;
    EffectEmitterTag id = tag;
    BOOL r;
    EffectSlot *e;
    e = &gEffectManager[id.poolIndex];
    r = FALSE;
    if (e->handle != -1) {
        if (e->life == -1) {
            if (emitter->particleCount > 0) {
                e->life = 0;
            }
            r = TRUE;
        }
        if (e->life == 0) {
            r = Effect_SpawnParticleLandings(emitter, id1, d1, id2, d2, id3, d3, id4, d4);
        }
    }
    if (!r) {
        _ZN10EffectSlot5clearEv(e);
    }
    return r;
}

namespace R6 {
extern "C" void EffectModel_InitDefault(void *o)
{
    EffectModelObj *self = (EffectModelObj *)o;
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(EffectSlot *)&gEffectManager[32]);
    Unk_020932bc_V32 *p = &self->position;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &self->scale;
    q->x = 0x1000;
    q->y = 0x1000;
    q->z = 0x1000;
    Unk_020932bc_V16 *r = &self->rotation;
    r->x = 0;
    r->y = 0;
    r->z = 0;
}
}

namespace R6 {
extern "C" s32 Effect_StartModel(s32 kind, s32 a, void *b, void *c, s32 d, EffectModelInitFn fn)
{
    EffectModelInitFn f = fn;
    if (f == 0) {
        f = EffectModel_InitDefault;
    }
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), -1, a, b, c, d, -1);
    EffectModel_Start(kind, f);
    return 1;
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind00(s32 a, void *b, u16 *c, s32 d)
{
    GroundInfo o;
    s32 t, result, kind;
    const void *p;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    t = o.attr;
    p = data_020e1480;
    result = 3;
    kind = 2;
    if (Unk_020935e8_IsOne(*gFieldSceneKind)) {
        if (t == 9 || t == 3) {
            result = Effect_StartOneShot(2, a, b, c, d, (void *)p);
        }
    } else {
        if (t == 0x16) {
            kind = 0x21;
            if (c != 0) *c = 0;
            p = data_020e16d4;
        } else if (Weather_GetFallingPrecip() == 1) {
            kind = 0x20;
            if (c != 0) *c = 0;
            p = data_020e16d4;
        } else if (t != 3) {
            if (t == 0x13) kind = 0x17;
        } else if (GroundSeason_IsSnow() != 0) {
            kind = 0x18;
            p = 0;
        }
        result = Effect_StartOneShot(kind, a, b, c, d, (void *)p);
    }
    return result;
}
}

void EffectEmitterEntry::initAxisUpForward()
{ using namespace R6;
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    EffectEmitterTag id = tag;
    Unk_02093748_Vec v;
    EffectSplEmitter *p;
    v.x = 0;
    v.y = 0xb50;
    v.z = 0xb50;
    p = emitter;
    p->posX = g->x + p->resource->p_base->pos.x;
    p->posY = g->y + p->resource->p_base->pos.y;
    p->posZ = g->z + p->resource->p_base->pos.z;
    EffectSpl_ApplySceneTint(emitter);
    Vec_RotateY(&v, g->angle);
    s32 ty = v.y;
    s32 tz = v.z;
    p = emitter;
    s32 tx = v.x;
    p->axis.Set(tx, ty, tz);
    MI_CpuCopy8(g, &gEffectManager[id.poolIndex], 0x1c);
}

void EffectEmitterEntry::updateLanding1F1D()
{ using namespace R6;
    updateLanding(0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}

void EffectEmitterEntry::updateLanding1F1EB()
{ using namespace R6;
    updateLanding(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

namespace R6 {
extern "C" s32 Effect_CreateKind01(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)gEffectManager;
    GroundInfo o;
    s32 t, result;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    t = o.attr;
    result = 3;
    if (Unk_020935e8_IsOne(*gFieldSceneKind)) {
        if (t == 9 || t == 3) {
            result = Effect_StartOneShot(0x19, a, b, c, d, data_020e14b4);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (EffectSpl_CreateTracked(0x1b, b, c, data_020e14d4) != 0) {
            result = 2;
        }
    } else if (t == 3 && GroundSeason_IsSnow() != 0) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (EffectSpl_CreateTracked(0x1c, b, c, data_020e14ec) != 0) {
            result = 2;
        }
    } else {
        s32 kind;
        if (t == 0x13) {
            kind = 0x1a;
        } else {
            kind = 0x19;
        }
        result = Effect_StartOneShot(kind, a, b, c, d, data_020e14b4);
    }
    return result;
}
}

void EffectSplEmitter::initKind02()
{ using namespace R6;
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    s32 ang = (s16)(g->angle + 0x8000);
    Unk_02093748_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    posX = g->x + resource->p_base->pos.x;
    posY = g->y + resource->p_base->pos.y;
    posZ = g->z + resource->p_base->pos.z;
    unk_5c = g->y + 0x333;
    Vec_RotateX(&v, 0xffffe000);
    Vec_RotateY(&v, ang);
    s32 ty = v.y;
    s32 tz = v.z;
    s32 tx = v.x;
    axis.Set(tx, ty, tz);
    EffectSpl_ApplySceneTint(this);
}

namespace R6 {
extern "C" s32 Effect_CreateKind02(s32 a, void *b, void *c, s32 d)
{
    return Effect_StartOneShot(0x29, a, b, c, d, data_020e1474);
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind03(s32 a, void *b, void *c, s32 d)
{
    return Effect_StartOneShot(0x2a, a, b, c, d, data_020e150c);
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind06(s32 a, void *b, void *c, s32 d)
{
    GroundInfo o;
    s32 r, kind;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    if (o.attr == 0x13) {
        kind = 0x2d;
    } else {
        kind = 0x2b;
    }
    r = Effect_StartOneShot(kind, a, b, c, d, 0);
    return r;
}
}

namespace R6 {
extern "C" s32 EffectKind07_InitEmitter0(void *a)
{
    return EffectCb_InitOneShotOffset(a, 0, data_020d0390);
}
}

namespace R6 {
extern "C" s32 EffectKind07_InitEmitter1(void *a)
{
    return EffectCb_InitOneShotOffset(a, 0, data_020d0318);
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind07(s32 a, void *b, void *c, s32 d)
{
    GroundInfo o;
    s32 r, kind;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    if (o.attr == 0x13) {
        kind = 0x2e;
    } else {
        kind = 0x2c;
    }
    r = Effect_StartOneShot(kind, a, b, c, d, data_020e15c4);
    return r;
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind08(s32 a, void *b, void *c, s32 d)
{
    GroundInfo o;
    s32 r, kind;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    if (o.attr == 0x13) {
        kind = 0x30;
    } else {
        kind = 0x2f;
    }
    r = Effect_StartOneShot(kind, a, b, c, d, 0);
    return r;
}
}

namespace R6 {
extern "C" s32 EffectKind09_InitEmitter0(void *a)
{
    return EffectCb_InitOneShotOffset(a, data_020d027c, data_020d02f4);
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind09(s32 a, void *b, void *c, s32 d)
{
    GroundInfo o;
    s32 r, kind;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    if (o.attr == 0x13) {
        kind = 0x32;
    } else {
        kind = 0x31;
    }
    r = Effect_StartOneShot(kind, a, b, c, d, data_020e1608);
    return r;
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind0A(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)gEffectManager;
    GroundInfo o;
    s32 t, result;
    o.initAtPos((Unk_02093748_Vec *)b, 0, 0);
    t = o.attr;
    result = 3;
    if (Weather_GetFallingPrecip() == 1) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, d, -1);
        if (EffectSpl_CreateTracked(0x36, b, c, data_020e1594) != 0) {
            result = 2;
        }
    } else if (GroundSeason_IsSnow() != 0 && t == 3) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (EffectSpl_CreateTracked(0x35, b, c, data_020e15e4) != 0) {
            result = 2;
        }
    } else {
        s32 kind;
        if (t == 0x13) {
            kind = 0x34;
        } else {
            kind = 0x33;
        }
        result = Effect_StartOneShot(kind, a, b, c, d, 0);
    }
    return result;
}
}

void EffectModelObj::initAtSlot(s32 s)
{ using namespace R6;
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(EffectSlot *)&gEffectManager[32]);
    Unk_020932bc_V32 *p = &position;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &scale;
    q->x = s;
    q->y = s;
    q->z = s;
    Unk_020932bc_V16 *r = &rotation;
    r->x = 0;
    r->y = 0;
    r->z = 0;
}

namespace R6 {
extern "C" void EffectModel_InitUnitScale(void *o)
{
    ((EffectModelObj *)o)->initAtSlot(0x1000);
}
}

void EffectEmitterEntry::updateLanding1F1E()
{ using namespace R6;
    updateLanding(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

namespace R6 {
extern "C" s32 Effect_StartWaterColumn(s32 a, void *b, void *c, s32 d, void *e, s32 f, EffectModelInitFn fn)
{
    Unk_02093748_Vec *v = (Unk_02093748_Vec *)b;
    u8 *const g = (u8 *)gEffectManager;
    GroundInfo o;
    s32 result;
    o.initAtPos(v, 0, 0);
    result = 3;
    if (o.waterKind != 0) {
        v->y = o.waterSurfaceY;
    }
    if (Effect_StartOneShot(0x4a, a, v, c, d, (void *)f) < 3) {
        Effect_StartModel(2, a, v, c, d, fn);
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, v, c, d, -1);
        if (EffectSpl_CreateTracked(0x45, v, c, e) != 0) {
            result = 2;
        }
    }
    _ZN10EffectSlot5clearEv(&(*(EffectSlot *)&gEffectManager[32]));
    return result;
}
}

namespace R6 {
extern "C" void Effect_CreateKind0B(s32 a, void *b, void *c, s32 d)
{
    Effect_StartWaterColumn(a, b, c, d, data_020e152c, 0, EffectModel_InitUnitScale);
}
}

void EffectEmitterEntry::updateLanding5F()
{ using namespace R6;
    updateLanding(0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
}

namespace R5 {
extern "C" s32 Effect_CreateKind0C(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x37, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x5e, b, c, data_020e15ec) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 Effect_CreateKind0D(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x38, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x5e, b, c, data_020e14fc) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 Effect_CreateKind0F(s32 a, s32 b, s32 c, s32 d) { return Effect_StartOneShot(0x3a, a, b, c, d, 0); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind10(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x3b, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x5e, b, c, data_020e15dc) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 EffectKind0E_InitEmitter0(Unk_02092830 *p) {
    EffectEmitterTagBytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    Unk_02092da4_B *b;
    Unk_02092e98_Vec *const g = &(*(Unk_02092e98_Vec *)&gEffectManager[32]);
    id = *(EffectEmitterTagBytes *)p->tag;
    b = p->emitter;
    b->posX = g->x + b->resource->header->posX;
    b->posY = g->y + b->resource->header->posY;
    b->posZ = g->z + b->resource->header->posZ;
    EffectSpl_ApplySceneTint(p->emitter);
    pos.x = g->x;
    pos.y = g->y;
    pos.z = g->z;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&o, &pos, 0, 0);
    if (o.unk_30 != 0) {
        Unk_02092e98_Vec *pv = &o.unk_24;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        if (Vec_SafeNormalize(&v) != 0) {
            s32 vy = v.y;
            s32 vz = v.z;
            Unk_02092da4_B *b2 = p->emitter;
            b2->axisX = v.x;
            b2->axisY = vy;
            b2->axisZ = vz;
        }
    }
    MI_CpuCopy8(g, gEffectManager + id.b[0], 0x1c);
    GroundInfo_Destruct(&o);
}
}

namespace R5 {
extern "C" s32 EffectKind0E_UpdateEmitter0(Unk_02092830 *p) {
    EffectEmitterTagBytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    s32 s;
    EffectSlot *r;
    id = *(EffectEmitterTagBytes *)p->tag;
    r = gEffectManager + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->handle != m1 && r->life != 0) {
        Unk_02092da4_B *b = p->emitter;
        b->posX = r->x + b->resource->header->posX;
        b->posY = r->y + b->resource->header->posY;
        b->posZ = r->z + b->resource->header->posZ;
        pos.x = r->x;
        pos.y = r->y;
        pos.z = r->z;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&o, &pos, 0, 0);
        if (o.unk_30 != 0) {
            Unk_02092e98_Vec *pv = &o.unk_24;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (Vec_SafeNormalize(&v) != 0) {
                s32 vy = v.y;
                s32 vz = v.z;
                Unk_02092da4_B *b2 = p->emitter;
                b2->axisX = v.x;
                b2->axisY = vy;
                b2->axisZ = vz;
            }
        }
        if (r->life > 0) r->life--;
        s = 1;
        GroundInfo_Destruct(&o);
    }
    if (s == 0) _ZN10EffectSlot5clearEv(r);
    return s;
}
}

namespace R5 {
extern "C" s32 Effect_CreateKind0E(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x39, a, b, c, d, data_020e1504); }
}

namespace R5 {
extern "C" s32 EffectKind11_UpdateEmitter2(Unk_02092830 *p) {
    EffectEmitterTagBytes id;
    s32 s;
    EffectSlot *r;
    id = *(EffectEmitterTagBytes *)p->tag;
    r = gEffectManager + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->handle != m1 && r->life != 0) {
        Unk_02092da4_B *b = p->emitter;
        b->posX = r->x + b->resource->header->posX;
        b->posY = r->y + b->resource->header->posY;
        b->posZ = r->z + b->resource->header->posZ;
        Effect_SpawnParticleLandings(p->emitter, 0x5f, data_020e16d4, m1, 0, m1, 0, m1, 0);
        if (r->life > 0) r->life--;
        s = 1;
    }
    if (s == 0) {
        p->emitter->stateFlags |= 2;
        Unk_02092da4_B *b = p->emitter;
        if (b->particleCount > 0) s = Effect_SpawnParticleLandings(b, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
    }
    if (s == 0) _ZN10EffectSlot5clearEv(r);
    return s;
}
}

namespace R5 {
extern "C" s32 Effect_CreateKind11(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x3c, a, b, c, d, data_020e16a4); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind12(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x46, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x5e, b, c, data_020e1584) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 EffectKind13_InitEmitter0(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x1ccd); }
}

namespace R5 {
extern "C" s32 EffectKind13_InitEmitter1(void *p) { return EffectCb_InitOneShot(p); }
}

namespace R5 {
extern "C" s32 EffectKind13_UpdateEmitter0(void *p) { return _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(p, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind13(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x47, a, b, c, d, data_020e15a4); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x75, b, c, data_020e157c) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 EffectKind14_InitEmitter0B(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x1800); }
}

namespace R5 {
extern "C" s32 EffectKind14_InitEmitter2(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x1333); }
}

namespace R5 {
extern "C" void EffectKind14_InitEmitter0A(Unk_02092830 *p) { EffectCb_InitTracked(p); p->emitter->unk_54 = 0x1333; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind14(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x48, a, b, c, d, data_020e1614); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x75, b, c, data_020e15b4) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 EffectKind15_InitEmitter0(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x2000); }
}

namespace R5 {
extern "C" s32 EffectKind15_InitEmitter2(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x199a); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind15(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x49, a, b, c, d, data_020e1620); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (EffectSpl_CreateTracked(0x75, b, c, data_020e151c) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" void EffectKind16_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->emitter->unk_50 = 0x800; }
}

namespace R5 {
extern "C" s32 EffectKind16_InitEmitter0A(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x119a); }
}

namespace R5 {
extern "C" s32 EffectKind16_InitModel(void *p) { return _ZN14EffectModelObj10initAtSlotEi(p, 0xccd); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind16(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartWaterColumn(a, b, c, d, data_020e1574, data_020e147c, (void *)EffectKind16_InitModel);
}
}

namespace R5 {
extern "C" void EffectKind17_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->emitter->unk_50 = 0x99a; }
}

namespace R5 {
extern "C" s32 EffectKind17_InitEmitter0A(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x14cd); }
}

namespace R5 {
extern "C" s32 EffectKind17_InitModel(void *p) { return _ZN14EffectModelObj10initAtSlotEi(p, 0x119a); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind17(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartWaterColumn(a, b, c, d, data_020e1524, data_020e14bc, (void *)EffectKind17_InitModel);
}
}

namespace R5 {
extern "C" void EffectKind19_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->emitter->unk_50 = 0xc00; }
}

namespace R5 {
extern "C" s32 EffectKind19_InitEmitter0A(void *p) { return EffectCb_InitOneShotSetUnk54(p, 0x1ccd); }
}

namespace R5 {
extern "C" s32 EffectKind19_InitModel(void *p) { return _ZN14EffectModelObj10initAtSlotEi(p, 0x14cd); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind19(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartWaterColumn(a, b, c, d, data_020e15f4, data_020e1494, (void *)EffectKind19_InitModel);
}
}

namespace R5 {
extern "C" void EffectKind1A_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0x4cd; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1A(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e1534); }
}

namespace R5 {
extern "C" void EffectKind1B_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0x666; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1B(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e153c); }
}

namespace R5 {
extern "C" void EffectKind1C_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0x800; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1C(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e15ac); }
}

namespace R5 {
extern "C" void EffectKind1D_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0x99a; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1D(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e154c); }
}

namespace R5 {
extern "C" void EffectKind1E_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0xb33; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1E(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e14e4); }
}

namespace R5 {
extern "C" void EffectKind1F_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->emitter->unk_54 = 0xccd; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1F(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e14dc); }
}

namespace R5 {
extern "C" s32 Effect_CreateKind21(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, 0); }
}

namespace R4 {
extern "C" s32 Effect_CreateKind22(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[17];
    s32 r;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    r = 3;
    if (Unk_02092770_IsOne(gFieldSceneKind)) {
        if (t == 9 || t == 3) {
            r = Effect_StartOneShot(0x4b, a, b, c, d, 0);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        r = Effect_StartOneShot(0x4d, a, b, c, d, 0);
    } else if (t == 3 && GroundSeason_IsSnow()) {
        r = Effect_StartOneShot(0x4e, a, b, c, d, 0);
    } else {
        r = Effect_StartOneShot(t == 0x13 ? 0x4c : 0x4b, a, b, c, d, 0);
    }
    GroundInfo_Destruct(buf);
    return r;
}
}

namespace R4 {
extern "C" s32 EffectKind23_InitEmitter0(void *a) {
    return EffectCb_InitOneShotOffset(a, 0, data_020d033c);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind23(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    s32 id;
    if (buf[13] == 0x13) {
        id = 0x6f;
    } else {
        id = 0x6e;
    }
    s32 res = Effect_StartOneShot(id, a, b, c, d, data_020e14c4);
    GroundInfo_Destruct(buf);
    return res;
}
}

namespace R4 {
extern "C" s32 EffectKind24_InitEmitter0(void *a) {
    return EffectCb_InitOneShotOffset(a, 0, data_020d0348);
}
}

namespace R4 {
extern "C" void EffectKind24_InitModel(EffectModelObj *o) {
    EffectSlot *const d = &(*(EffectSlot *)&gEffectManager[32]);
    Unk_020932bc_V32 *pv = &o->position;
    pv->x = d->x;
    pv->y = d->y;
    pv->z = d->z;
    Unk_020932bc_V32 *ps = &o->scale;
    ps->x = 0x1000;
    ps->y = 0x1000;
    ps->z = 0x1000;
    o->rotation.x = 0;
    o->rotation.y = d->angle;
    o->rotation.z = 0;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind24(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    if (Effect_StartOneShot(0x59, a, b, c, d, data_020e165c) < 3) {
        Effect_StartModel(r, a, b, c, d, (void *)EffectKind24_InitModel);
        r = 1;
    }
    return r;
}
}

namespace R4 {
extern "C" s32 EffectKind25_UpdateEmitter0(Unk_02092528_Outer *o) {
    if (EffectCb_FollowTrackedOffset(o, 0, 0) == 0) {
        for (Unk_02092388_Node *n = o->emitter->particles; n != 0; n = n->next) {
            n->unk_26 = n->unk_24;
        }
        return 0;
    }
    return 1;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind25(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x5a, a, b, c, d, data_020e175c);
}
}

namespace R4 {
extern "C" s32 EffectKind26_InitEmitter0(void *a) {
    return EffectCb_InitTrackedOffset(a, 0, data_020d02c4);
}
}

namespace R4 {
extern "C" s32 EffectKind26_UpdateEmitter0(Unk_02092528_Outer *o) {
    s32 r;
    EffectEmitterTagBytes idx;
    Unk_02092388_Vec vec;
    idx = *(EffectEmitterTagBytes *)o->tag;
    EffectSlot *e = gEffectManager + idx.b[0];
    r = 0;
    if (e->handle != -1 && e->life != 0) {
        vec.x = r;
        vec.y = r;
        vec.z = 0x1000;
        Unk_02092388_Obj *in = o->emitter;
        in->posX = e->x + in->resource->header->posX;
        in->posY = e->y + in->resource->header->posY;
        in->posZ = e->z + in->resource->header->posZ;
        Vec_RotateY(&vec, e->angle);
        s32 ty = vec.y;
        s32 tz = vec.z;
        Unk_02092388_Obj *p = o->emitter;
        s32 tx = vec.x;
        p->axisX = tx;
        p->axisY = ty;
        p->axisZ = tz;
        _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(o->emitter, 0x71, data_020e16d4, -1, r, 0x71, data_020e16d4, 0x72, data_020e16d4);
        if (e->life > 0) {
            e->life = e->life - 1;
        }
        r = 1;
    }
    if (r == 0) {
        o->emitter->stateFlags |= 2;
        if (o->emitter->particleCount > 0) {
            r = _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(o->emitter, 0x71, data_020e16d4, -1, 0, 0x71, data_020e16d4, 0x72, data_020e16d4);
        }
    }
    if (r == 0) {
        _ZN10EffectSlot5clearEv(e);
    }
    return r;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind26(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x70, a, b, c, d, data_020e15bc);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind27(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (GroundSeason_IsSnow() && t == 3)) {
        s32 res = Effect_StartOneShot(0x55, a, b, c, d, data_020e16d4);
        GroundInfo_Destruct(buf);
        return res;
    }
    GroundInfo_Destruct(buf);
    return 3;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind28(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (GroundSeason_IsSnow() && t == 3)) {
        s32 res = Effect_StartOneShot(0x56, a, b, c, d, data_020e16d4);
        GroundInfo_Destruct(buf);
        return res;
    }
    GroundInfo_Destruct(buf);
    return 3;
}
}

namespace R4 {
extern "C" void EffectCb_AlignFirstParticle(Unk_02092388_Obj *o, s32 flag) {
    if (flag == 1) {
        Unk_02092388_Node *n = o->particles;
        if (n != 0) {
            n->rotation = Math_Atan2(o->axisX, o->axisZ);
            o->callback = 0;
        }
    }
}
}

namespace R4 {
extern "C" void EffectCb_PlaceRotatedOffset(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang) {
    EffectSlot *const d = &(*(EffectSlot *)&gEffectManager[32]);
    s16 a = (s16)(*(volatile s16 *)&d->angle + ang);
    Unk_02092388_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    Vec_RotateY(&t, *(volatile s16 *)&d->angle);
    VEC_Add(&t, &d->x, &t);
    s32 idx = ((u16)a >> 4) * 2;
    o->posX = t.x + o->resource->header->posX;
    o->posY = t.y + o->resource->header->posY;
    o->posZ = t.z + o->resource->header->posZ;
    o->axisX = data_02135f44[idx];
    o->axisY = 0;
    o->axisZ = data_02135f44[idx + 1];
    EffectSpl_ApplySceneTint(o);
    o->callback = (void *)EffectCb_AlignFirstParticle;
}
}

namespace R4 {
extern "C" void EffectKind29_InitEmitter0(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d0354, -0x7530);
}
}

namespace R4 {
extern "C" s32 Effect_StartOnSandOrSnow(s32 a, s32 b, s32 c, s32 d, s32 e, void *f) {
    u32 buf[16];
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    s32 r = -1;
    if (t == 0x13 || (GroundSeason_IsSnow() && t == 3)) {
        r = e;
    }
    if (r != -1) {
        s32 res = Effect_StartOneShot(e, a, b, c, d, f);
        GroundInfo_Destruct(buf);
        return res;
    }
    GroundInfo_Destruct(buf);
    return 3;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind29(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOnSandOrSnow(a, b, c, d, 0x58, data_020e1484);
}
}

namespace R4 {
extern "C" void EffectKind2A_InitEmitter0(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d0360, 0);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2A(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOnSandOrSnow(a, b, c, d, 0x58, data_020e14ac);
}
}

namespace R4 {
extern "C" void EffectKind2B_InitEmitter0B(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d036c, 0);
}
}

namespace R4 {
extern "C" void EffectKind2B_InitEmitter0A(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d0378, 0);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2B(s32 a, s32 b, s32 c, s32 d) {
    if (Effect_StartOnSandOrSnow(a, b, c, d, 0x57, data_020e14a4) == 1) {
        return Effect_StartOnSandOrSnow(a, b, c, d, 0x57, data_020e1478);
    }
    return 3;
}
}

namespace R4 {
extern "C" void EffectKind2C_InitEmitter0B(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d0228, 0);
}
}

namespace R4 {
extern "C" void EffectKind2C_InitEmitter0A(Unk_02092388_Obj *o) {
    EffectCb_PlaceRotatedOffset(o, (Unk_02092388_Vec *)data_020d0234, 0);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2C(s32 a, s32 b, s32 c, s32 d) {
    if (Effect_StartOnSandOrSnow(a, b, c, d, 0x57, data_020e1488) == 1) {
        return Effect_StartOnSandOrSnow(a, b, c, d, 0x57, data_020e14b0);
    }
    return 3;
}
}

namespace R4 {
extern "C" s32 EffectKind2D_InitEmitter0(void *a) {
    return EffectCb_InitOneShotOffset(a, 0, data_020d0270);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2D(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), -1, a, b, c, d, -1);
    if (EffectSpl_CreateOneShot(0x76, b, c, data_020e14c0) && EffectSpl_CreateOneShot(0x54, b, c, sEffectDefaultOneShotCbs)) {
        r = 1;
    }
    return r;
}
}

namespace R4 {
extern "C" s32 EffectKind2E_InitEmitter0(void *a) {
    return EffectCb_InitOneShotOffset(a, data_020d0288, 0);
}
}

namespace R4 {
extern "C" s32 EffectKind2E_InitEmitter1(void *a) {
    return EffectCb_InitOneShotOffset(a, data_020d0294, 0);
}
}

namespace R4 {
extern "C" s32 EffectKind2E_InitEmitter2(void *a) {
    return EffectCb_InitOneShotOffset(a, data_020d02ac, 0);
}
}

namespace R4 {
extern "C" s32 EffectKind2E_Start(s32 a, s32 b, s32 c, s32 d, s32 e) {
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(EffectSlot *)&gEffectManager[32]), -1, a, b, c, d, -1);
    if (EffectSpl_CreateOneShot(e, b, c, data_020e14c0) != 0) {
        for (s32 i = 0; i < 3; i++) {
            if (EffectSpl_CreateOneShot(0x54, b, c, data_020e15fc + i * 4) == 0) {
                return 3;
            }
        }
        return 1;
    }
    return 3;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2E(s32 a, s32 b, s32 c, s32 d) {
    return EffectKind2E_Start(a, b, c, d, 0x77);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind2F(s32 a, s32 b, s32 c, s32 d) {
    return EffectKind2E_Start(a, b, c, d, 0x78);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind30(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x79, a, b, c, d, data_020e159c);
}
}

namespace R4 {
extern "C" s32 EffectKind31_InitEmitter0(void *a) {
    return EffectCb_InitTrackedOffset(a, 0, data_020d02c4);
}
}

namespace R4 {
extern "C" s32 EffectKind31_UpdateEmitter0(void *a) {
    Unk_02092388_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    return EffectCb_FollowTrackedOffset(a, 0, &v);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind31(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x7a, a, b, c, d, data_020e14f4);
}
}

namespace R4 {
extern "C" void EffectKind32_InitEmitter0(u8 *p) {
    Rgb555 col[4];
    EffectCb_InitOneShot(p);
    *(u16 *)&col[0] = Sky_GetLightColor(3);
    col[3] = col[0];
    col[1] = col[3];
    *(u16 *)&col[2] = 0x7fff;
    col[1].r = _s32_div_f(col[2].r * col[1].r, 31);
    col[1].g = _s32_div_f(col[2].g * col[1].g, 31);
    col[1].b = _s32_div_f(col[2].b * col[1].b, 31);
    *(u16 *)(p + 0x5a) = *(u16 *)&col[1];
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind32(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x63, a, b, c, d, data_020e149c);
}
}

namespace R4 {
extern "C" s32 EffectKind33_InitEmitter0(void *a) {
    return EffectCb_InitTrackedOffset(a, 0, data_020d02dc);
}
}

namespace R4 {
extern "C" s32 EffectKind33_UpdateEmitter0(void *a) {
    return EffectCb_FollowTrackedOffset(a, 0, data_020d02dc);
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind33(s32 a, s32 b, s32 c, s32 d) {
    if (Weather_GetFallingPrecip() == 1) {
        return Effect_StartTracked(0x74, a, b, c, d, data_020e15cc);
    }
    return 3;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind34(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x52, a, b, c, d, 0);
}
}

namespace R4 {
extern "C" void EffectKind35_InitParams(Unk_02092528_Outer *o, u8 a, s32 b, s32 c) {
    EffectCb_InitTrackedOffset(o, 0, data_020d02c4);
    o->emitter->unk_68 = a;
    o->emitter->unk_4c = b;
    o->emitter->unk_50 = c;
}
}

namespace R4 {
extern "C" void EffectKind35_InitEmitter1(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::EffectKind35_InitParams(o, 5, 0xcd, 0x200);
}
}

namespace R4 {
extern "C" void EffectKind35_InitEmitter3(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::EffectKind35_InitParams(o, 5, 0xe1, 0x266);
}
}

namespace R4 {
extern "C" void EffectKind35_InitEmitter4(Unk_02092528_Outer *o) {
    EffectCb_InitTrackedOffset(o, 0, data_020d02c4);
    o->emitter->unk_69 = 0;
    o->emitter->unk_4c = 0x3d;
    o->emitter->unk_50 = 0x466;
}
}

namespace R3 {
extern "C" s32 EffectKind35_UpdateRamp(Unk_02091404_Arg *p, s32 a, s32 b, s32 c, s32 d0, s16 e1, s16 e2, s16 e3, s32 d4, s16 e5, s16 e6, s16 e7)
{
    EffectEmitterTag i = p->idx;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    Unk_02091404_V v2;
    BOOL ok;
    v2.x = data_020d02c4.x;
    v2.y = data_020d02c4.y;
    v2.z = data_020d02c4.z;
    ok = FALSE;
    if (r->handle != -1 && r->life != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile EffectSlot *)r)->life;
        Unk_02091404_Obj *o = p->emitter;
        o->posX = t0 + (*o->resource)->posX;
        o->posY = v.y + (*o->resource)->posY;
        o->posZ = v.z + (*o->resource)->posZ;
        Vec_RotateY(&v2, r->angle);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->emitter;
        o->axisX = v2.x;
        o->axisY = vy;
        o->axisZ = vz;
        if (t > 0) {
            r->life = r->life - 1;
            p->emitter->unk_68 = 5;
            p->emitter->unk_4c = d0;
            p->emitter->unk_50 = d4;
        } else if (t < -1) {
            u16 x8;
            s16 b16, c16;
            r->life = r->life + 1;
            s32 q = r->life;
            if (q <= -0xa1) {
                s32 w;
                x8 = a + 1 + ((b * (-0xa1 - q)) >> 12);
                w = q + 0xb4;
                b16 = d0 + (s16)(e2 * w);
                c16 = d4 + (s16)(e6 * w);
            } else if (q <= -0x3d) {
                x8 = a;
                b16 = e1;
                c16 = e5;
            } else {
                x8 = a + 1 + ((c * (q + 0x3c)) >> 12);
                q = -q;
                b16 = d0 + (s16)(e3 * q);
                c16 = d4 + (s16)(e7 * q);
            }
            p->emitter->unk_68 = x8;
            p->emitter->unk_4c = b16;
            p->emitter->unk_50 = c16;
        } else {
            p->emitter->unk_68 = 5;
            p->emitter->unk_4c = d0;
            p->emitter->unk_50 = d4;
        }
        ok = TRUE;
    }
    if (!ok) {
        _ZN10EffectSlot5clearEv(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" void EffectKind35_UpdateEmitter1(Unk_02091404_Arg *p)
{
    EffectKind35_UpdateRamp(p, 2, 0x266, 0xcd, 0xcd, 0x19a, 0xa, 3, 0x200, 0x400, 0x1a, 9);
}
}

namespace R3 {
extern "C" void EffectKind35_UpdateEmitter3(Unk_02091404_Arg *p)
{
    EffectKind35_UpdateRamp(p, 1, 0x333, 0x111, 0xe1, 0x1c3, 0xb, 4, 0x266, 0x4cd, 0x1f, 0xa);
}
}

namespace R3 {
extern "C" s32 EffectKind35_UpdateEmitter4(Unk_02091404_Arg *p)
{
    EffectEmitterTag i = p->idx;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    BOOL ok = FALSE;
    if (r->handle != -1 && r->life != 0) {
        volatile Unk_02091404_V v;
        Unk_02091404_V v2;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile EffectSlot *)r)->life;
        v2.x = data_020d02c4.x;
        v2.y = data_020d02c4.y;
        v2.z = data_020d02c4.z;
        Unk_02091404_Obj *o = p->emitter;
        o->posX = t0 + (*o->resource)->posX;
        o->posY = v.y + (*o->resource)->posY;
        o->posZ = v.z + (*o->resource)->posZ;
        Vec_RotateY(&v2, r->angle);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->emitter;
        o->axisX = v2.x;
        o->axisY = vy;
        o->axisZ = vz;
        if (t > 0) {
            r->life = r->life - 1;
            p->emitter->unk_54 = 0;
            p->emitter->unk_4c = 0x3d;
            p->emitter->unk_50 = 0x466;
        } else if (t < -1) {
            u8 a8;
            s16 b16, c16;
            r->life = r->life + 1;
            s32 q = r->life;
            if (q <= -0xa1) {
                s32 w = q + 0xb4;
                a8 = (w * 0xc00) >> 12;
                b16 = (s16)(w * 3) + 0x3d;
                c16 = (s16)(w * 0x38) + 0x466;
            } else if (q <= -0x3d) {
                a8 = 0xf;
                b16 = 0x7b;
                c16 = 0x8cd;
            } else {
                q = -q;
                a8 = (q * 0x400) >> 12;
                b16 = (s16)q + 0x3d;
                c16 = (s16)(q * 0x13) + 0x466;
            }
            p->emitter->unk_69 = a8;
            p->emitter->unk_4c = b16;
            p->emitter->unk_50 = c16;
        } else {
            p->emitter->unk_69 = 0;
            p->emitter->unk_4c = 0x3d;
            p->emitter->unk_50 = 0x466;
        }
        ok = TRUE;
    }
    if (!ok) {
        _ZN10EffectSlot5clearEv(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind35(s32 a, s32 b, s32 c, s32 d)
{
    EffectScratchSlot *e = &(*(EffectScratchSlot *)&gEffectManager[32]);
    s32 r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(e, e->nextHandle, a, b, c, d, -0xb5);
    if (EffectSpl_CreateTracked(0x7e, b, c, data_020e1734) != 0) {
        r = 0;
    }
    _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R3 {
extern "C" void EffectKind36_InitEmitter2(Unk_02091404_Arg *p)
{
    EffectCb_InitTracked(p);
    p->emitter->unk_68 = 1;
}
}

namespace R3 {
extern "C" s32 EffectKind36_UpdateEmitter2(Unk_02091404_Arg *p)
{
    EffectEmitterTag i = p->idx;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    BOOL ok = FALSE;
    if (r->handle != -1 && r->life != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile EffectSlot *)r)->life;
        Unk_02091404_Obj *o = p->emitter;
        o->posX = t0 + (*o->resource)->posX;
        o->posY = v.y + (*o->resource)->posY;
        o->posZ = v.z + (*o->resource)->posZ;
        if (t > 0) {
            r->life = r->life - 1;
            p->emitter->unk_68 = 5;
        } else if (t < -1) {
            u16 val;
            r->life = r->life + 1;
            s32 q = r->life;
            if (q <= -0x29) {
                val = 1;
            } else {
                val = ((q + 0x28) * 0x19a >> 12) + 1;
            }
            p->emitter->unk_68 = val;
        } else {
            p->emitter->unk_68 = 5;
        }
        ok = TRUE;
    }
    if (!ok) {
        _ZN10EffectSlot5clearEv(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind36(s32 a, s32 b, s32 c, s32 d)
{
    EffectScratchSlot *e = &(*(EffectScratchSlot *)&gEffectManager[32]);
    s32 r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(e, e->nextHandle, a, b, c, d, -0xb5);
    if (EffectSpl_CreateTracked(0x7f, b, c, data_020e1784) != 0) {
        r = 0;
    }
    _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R3 {
extern "C" void EffectCb_AlignFirstParticle2(Unk_02091404_Obj *o, s32 k)
{
    if (k == 1) {
        Unk_02091404_Node *n = o->particles;
        if (n != NULL) {
            n->rotation = Math_Atan2(o->axisX, o->axisZ);
            o->callback = NULL;
        }
    }
}
}

namespace R3 {
extern "C" void EffectKind37_InitEmitter0(Unk_02091404_Obj *p)
{
    EffectScratchSlot *const e = &(*(EffectScratchSlot *)&gEffectManager[32]);
    u32 ang = (u16)e->angle;
    p->posX = e->x + (*p->resource)->posX;
    p->posY = e->y + (*p->resource)->posY;
    p->posZ = e->z + (*p->resource)->posZ;
    s32 idx = ((s32)ang >> 4) * 2;
    p->axisX = data_02135f44[idx];
    p->axisY = 0;
    p->axisZ = data_02135f44[idx + 1];
    EffectSpl_ApplySceneTint(p);
    p->callback = EffectCb_AlignFirstParticle2;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind37(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 k;
    s32 id;
    s32 r;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (GroundSeason_IsSnow() != 0 && k == 3) {
        id = 0x88;
    } else if (k == 0x13) {
        id = 0x87;
    }
    if (id != -1) {
        r = Effect_StartOneShot(id, a, b, c, d, data_020e14a0);
        GroundInfo_Destruct(buf);
        return r;
    }
    GroundInfo_Destruct(buf);
    return 3;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind38(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 k;
    s32 id;
    s32 r;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (GroundSeason_IsSnow() != 0 && k == 3) {
        id = 0x8a;
    } else if (k == 0x13) {
        id = 0x89;
    }
    if (id != -1) {
        r = Effect_StartOneShot(id, a, b, c, d, data_020e14a0);
        GroundInfo_Destruct(buf);
        return r;
    }
    GroundInfo_Destruct(buf);
    return 3;
}
}

namespace R3 {
extern "C" s32 EffectKind39_InitEmitter0(void *p)
{
    return EffectCb_InitTrackedOffset(p, NULL, data_020d030c);
}
}

namespace R3 {
extern "C" s32 EffectKind39_UpdateEmitter0B(void *p)
{
    return _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}
}

namespace R3 {
extern "C" s32 EffectKind39_UpdateEmitter0A(void *p)
{
    return _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind39(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 result;
    s32 k;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    result = 3;
    if (k == 0x16 || Weather_GetFallingPrecip() == 1) {
        if (Effect_StartTracked(0x85, a, b, c, d, data_020e155c) == 0) {
            result = 2;
        }
    } else if (k == 3 && GroundSeason_IsSnow() != 0) {
        if (Effect_StartTracked(0x86, a, b, c, d, data_020e1554) == 0) {
            result = 2;
        }
    } else if (k == 0x13) {
        result = Effect_StartOneShot(0x84, a, b, c, d, NULL);
    } else {
        result = Effect_StartOneShot(0x83, a, b, c, d, NULL);
    }
    GroundInfo_Destruct(buf);
    return result;
}
}

namespace R3 {
extern "C" s32 EffectKind3A_InitEmitter0(Unk_02091404_Arg *p)
{
    EffectScratchSlot *const e = &(*(EffectScratchSlot *)&gEffectManager[32]);
    EffectEmitterTag i = p->idx;
    volatile Unk_02091404_V v;
    s32 t = e->x;
    v.x = t;
    v.y = e->y;
    v.z = e->z;
    Unk_02091404_Obj *o = p->emitter;
    o->posX = t + (*o->resource)->posX;
    o->posY = v.y + (*o->resource)->posY;
    o->posZ = v.z + (*o->resource)->posZ;
    EffectSpl_ApplySceneTint(p->emitter);
    MI_CpuCopy8(e, &gEffectManager[i.poolIndex], 0x1c);
}
}

namespace R3 {
extern "C" s32 EffectKind3A_UpdateEmitter0(Unk_02091404_Arg *p)
{
    EffectEmitterTag i = p->idx;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    BOOL ok = FALSE;
    if (r->handle != -1 && r->life != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        Unk_02091404_Obj *o = p->emitter;
        o->posX = t0 + (*o->resource)->posX;
        o->posY = v.y + (*o->resource)->posY;
        o->posZ = v.z + (*o->resource)->posZ;
        if (r->life > 0) {
            r->life = r->life - 1;
        }
        p->emitter->unk_54 = r->param;
        Unk_02091404_Node *n;
        for (n = p->emitter->particles; n != NULL; n = n->next) {
            n->unk_30 = r->param;
        }
        ok = TRUE;
    }
    if (!ok) {
        Unk_02091404_Node *n;
        for (n = p->emitter->particles; n != NULL; n = n->next) {
            n->unk_26 = n->unk_24;
        }
        _ZN10EffectSlot5clearEv(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind3A(s32 a, s32 b, s32 c, s32 d)
{
    return Effect_StartTracked(0x8d, a, b, c, d, data_020e1544);
}
}

namespace R3 {
extern "C" s32 EffectKind3B_InitEmitter0(void *p)
{
    return EffectCb_InitTrackedOffset(p, data_020d0324, NULL);
}
}

namespace R3 {
extern "C" s32 EffectKind3B_UpdateEmitter0(void *p)
{
    return EffectCb_FollowTrackedOffset(p, data_020d0324, NULL);
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind3B(s32 a, s32 b, s32 c, s32 d)
{
    return Effect_StartTracked(0x4f, a, b, c, d, data_020e156c);
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind3C(s32 a, s32 b, s32 c, s32 d)
{
    return Effect_StartTracked(0x92, a, b, c, d, data_020e164c);
}
}

namespace R3 {
extern "C" s32 EffectKind3D_InitEmitter0(void *p)
{
    return EffectCb_InitTrackedOffset(p, NULL, NULL);
}
}

namespace R3 {
extern "C" s32 EffectKind3D_UpdateEmitter0(Unk_02091404_Arg *p)
{
    EffectEmitterTag i = p->idx;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    BOOL ok = FALSE;
    if (r->handle != -1 && r->life != 0) {
        Unk_02091404_Obj *o = p->emitter;
        o->posX = r->x + (*o->resource)->posX;
        o->posY = r->y + (*o->resource)->posY;
        o->posZ = r->z + (*o->resource)->posZ;
        if (r->life > 0) {
            p->emitter->unk_69 = (r->life * 0x2955) >> 12;
            r->life = r->life - 1;
        }
        ok = TRUE;
    }
    if (!ok) {
        _ZN10EffectSlot5clearEv(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind3D(s32 a, s32 b, s32 c, s32 d)
{
    return Effect_StartTracked(0x53, a, b, c, d, data_020e166c);
}
}

namespace R3 {
extern "C" s32 Effect_EndKind3D(Unk_02091404_Arg *p)
{
    return _ZN13EffectManager7setLifeEis(gEffectManager, p, 0xb);
}
}

namespace R2 {
extern "C" s32 EffectKind3E_InitEmitter0B(Unk_02090bd8_Obj *o)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    s32 a, b, c;
    s32 f = g->param;
    if (f < 0xc00) {
        s32 t = FX_Div(f - 0x600, 0x600);
        a = (s16)((s16)func_01ffcb0c(0x266, t) + 0x266);
        c = (s16)((s16)func_01ffcb0c(0x400, t) + 0x400);
        b = (s16)((s16)func_01ffcb0c(0x52, t) + 0xcd);
    } else {
        s32 t = FX_Div(f - 0xc00, 0xc00);
        a = (s16)((s16)func_01ffcb0c(0x800, t) + 0x4cd);
        c = (s16)((s16)func_01ffcb0c(0x4cd, t) + 0x800);
        b = (s16)((s16)func_01ffcb0c(0x52, t) + 0x11f);
    }
    o->unk_44 = a;
    o->unk_4c = b;
    o->unk_54 = c;
    o->posX = g->x + (*o->resource)->posX;
    o->posY = g->y + (*o->resource)->posY;
    o->posZ = g->z + (*o->resource)->posZ;
    EffectSpl_ApplySceneTint(o);
}
}

namespace R2 {
extern "C" s32 EffectKind3E_InitEmitter0A(Unk_02090bd8_Obj *o)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    s32 f = g->param;
    Unk_02090bd8_V v;
    v.x = g->x;
    v.y = g->y;
    v.z = g->z;
    s32 t = FX_Div(f - 0xc00, 0xc00);
    s32 a = (s16)((s16)func_01ffcb0c(0x4cd, t) + 0xb33);
    s32 c = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x400);
    s32 b = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x333);
    o->unk_44 = a;
    o->unk_4c = b;
    o->unk_54 = c;
    o->posX = v.x + (*o->resource)->posX;
    o->posY = v.y + (*o->resource)->posY;
    o->posZ = v.z + (*o->resource)->posZ;
    o->unk_5c = 0x99a;
    EffectSpl_ApplySceneTint(o);
}
}

namespace R2 {
extern "C" s32 Effect_CreateKind3E(s32 a, s32 b, s32 c, s16 *d)
{
    s32 r = 3;
    if (d != 0) {
        Effect_StartOneShot(0x6c, a, b, c, d, data_020e148c);
        if (*d >= 0xc00) {
            Effect_StartOneShot(0x6d, a, b, c, d, data_020e1498);
        }
        r = 1;
    }
    return r;
}
}

namespace R2 {
extern "C" void EffectKind3F_InitEmitter0B(Unk_02090bd8_Obj *o)
{
    s32 f = (*(EffectSlot *)&gEffectManager[32]).param;
    s32 a = (s16)((s16)func_01ffcb0c(0x1333, f) + 0x4cd);
    s32 b = (s16)((s16)func_01ffcb0c(0x3ae, f) + 0x800);
    EffectCb_InitTracked(o);
    *(s32 *)(o->unk_0c + 0x44) = a;
    *(s32 *)(o->unk_0c + 0x50) = b;
}
}

namespace R2 {
extern "C" void EffectKind3F_InitEmitter0A(s32 p)
{
    s32 u = (s16)((s16)func_01ffcb0c(0x1e66, (*(EffectSlot *)&gEffectManager[32]).param) + 0xb33);
    EffectCb_InitOneShotSetUnk54(p, u);
}
}

namespace R2 {
extern "C" void EffectKind3F_InitModel(s32 p)
{
    s32 t = func_01ffcb0c(0x2000, (*(EffectSlot *)&gEffectManager[32]).param) + 0x99a;
    _ZN14EffectModelObj10initAtSlotEi(p, t);
}
}

namespace R2 {
extern "C" s32 EffectKind3F_UpdateEmitter0(void *p)
{
    _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}
}

namespace R2 {
extern "C" s32 Effect_CreateKind3F(s32 a, s32 b, s32 c, s16 *d)
{
    if (d != 0) {
        s16 t = FX_Div(*d - 0x600, 0x1200);
        return Effect_StartWaterColumn(a, b, c, &t, data_020e15d4, data_020e14a8, EffectKind3F_InitModel);
    }
    return 3;
}
}

namespace R2 {
extern "C" s32 EffectKind40_InitEmitter0(void *p) { return EffectCb_InitTrackedOffset(p, data_020d021c, 0); }
}

namespace R2 {
extern "C" s32 EffectKind40_UpdateEmitter0(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d021c, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind40(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x95, a, b, c, d, data_020e14cc); }
}

namespace R2 {
extern "C" s32 EffectKind41_InitEmitter0(void *p) { return EffectCb_InitTrackedOffset(p, data_020d0240, 0); }
}

namespace R2 {
extern "C" s32 EffectKind41_InitEmitter1(void *p) { return EffectCb_InitTrackedOffset(p, data_020d0258, 0); }
}

namespace R2 {
extern "C" s32 EffectKind41_InitEmitter2(void *p) { return EffectCb_InitTrackedOffset(p, data_020d02a0, 0); }
}

namespace R2 {
extern "C" s32 EffectKind41_UpdateEmitter0(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d0240, 0); }
}

namespace R2 {
extern "C" s32 EffectKind41_UpdateEmitter1(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d0258, 0); }
}

namespace R2 {
extern "C" s32 EffectKind41_UpdateEmitter2(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d02a0, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind41(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x96, a, b, c, d, data_020e168c); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind42(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x97, a, b, c, d, data_020e168c); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind43(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind44(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x1, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind45(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0x3, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind46(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0x4, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind47(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0x5, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind48(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x6, a, b, c, d, data_020e17fc); }
}

namespace R2 {
extern "C" s32 EffectKind49_InitEmitter0(void *p) { return EffectCb_InitTrackedOffset(p, data_020d02e8, 0); }
}

namespace R2 {
extern "C" s32 EffectKind49_UpdateEmitter0(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d02e8, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind49(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x7, a, b, c, d, data_020e1514); }
}

namespace R2 {
extern "C" s32 EffectKind4A_InitEmitter0(void *p) { return EffectCb_InitTrackedOffset(p, data_020d02c4, 0); }
}

namespace R2 {
extern "C" s32 EffectKind4A_UpdateEmitter0(void *p) { return EffectCb_FollowTrackedOffset(p, data_020d02c4, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind4A(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x5b, a, b, c, d, data_020e158c); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind4B(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x5c, a, b, c, d, data_020e158c); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind4C(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x8, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind4D(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x16, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 EffectKind4E_InitEmitter0(EffectEmitterEntry *p)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    EffectEmitterTag i = p->tag;
    EffectCb_InitTrackedOffset(p, data_020e183c[g->param], 0);
    MI_CpuCopy8(g, &gEffectManager[i.poolIndex], 0x1c);
}
}

namespace R2 {
extern "C" s32 EffectKind4E_InitEmitter1(EffectEmitterEntry *p)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    EffectEmitterTag i = p->tag;
    EffectCb_InitTrackedOffset(p, data_020e18a8[g->param], 0);
    MI_CpuCopy8(g, &gEffectManager[i.poolIndex], 0x1c);
}
}

namespace R2 {
extern "C" void EffectKind4E_UpdateEmitter0(EffectEmitterEntry *p)
{
    EffectEmitterTag i = p->tag;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    EffectCb_FollowTrackedOffset(p, data_020e183c[r->param], 0);
}
}

namespace R2 {
extern "C" void EffectKind4E_UpdateEmitter1(EffectEmitterEntry *p)
{
    EffectEmitterTag i = p->tag;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    EffectCb_FollowTrackedOffset(p, data_020e18a8[r->param], 0);
}
}

namespace R2 {
extern "C" s32 Effect_CreateKind4E(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0x9, a, b, c, d, data_020e16bc); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind4F(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0xa, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind50(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0xb, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind51(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0xc, a, b, c, d, 0); }
}

namespace R2 {
extern "C" void EffectKind52_InitEmitter0(Unk_02090bd8_Obj *o)
{
    Unk_02090bd8_V v;
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    v.x = g->x;
    v.y = g->y;
    v.z = g->z;
    v.y = 0;
    o->posX = v.x + (*o->resource)->posX;
    o->posY = v.y + (*o->resource)->posY;
    o->posZ = v.z + (*o->resource)->posZ;
    EffectSpl_ApplySceneTint(o);
}
}

namespace R2 {
extern "C" s32 Effect_CreateKind52(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0x5d, a, b, c, d, data_020e14b8); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind53(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0xd, a, b, c, d, data_020e167c); }
}

namespace R2 {
extern "C" void EffectKind54_InitEmitter0(EffectEmitterEntry *p)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    EffectEmitterTag i = p->tag;
    EffectCb_InitTrackedOffset(p, g->param != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
    MI_CpuCopy8(g, &gEffectManager[i.poolIndex], 0x1c);
}
}

namespace R2 {
extern "C" void EffectKind54_InitEmitter1(EffectEmitterEntry *p)
{
    EffectSlot *const g = &(*(EffectSlot *)&gEffectManager[32]);
    EffectEmitterTag i = p->tag;
    EffectCb_InitTrackedOffset(p, g->param != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
    MI_CpuCopy8(g, &gEffectManager[i.poolIndex], 0x1c);
}
}

namespace R2 {
extern "C" s32 EffectKind54_UpdateEmitter0(EffectEmitterEntry *p)
{
    EffectEmitterTag i = p->tag;
    EffectSlot *r = &gEffectManager[i.poolIndex];
    EffectCb_FollowTrackedOffset(p, r->param != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
}
}

void EffectEmitterEntry::updateKind54B() { using namespace R1;
    EffectEmitterTag bytes = tag;
    EffectSlot *e = &gEffectManager.slots[bytes.poolIndex];
    EffectCb_FollowTrackedOffset(this, e->param != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
}

namespace R1 {
extern "C" s32 Effect_CreateKind54(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0xe, a, b, c, d, data_020e162c);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind55(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    EffectScratchSlot *e = &(*(EffectScratchSlot *)&gEffectManager.scratchSlot);
    s32 r = 3;
    e->set(e->nextHandle, p0, p1, p2, p3, 0xf);
    if (EffectSpl_CreateTracked(0xf, (s32)p1, (s32)p2, sEffectDefaultTrackedCbs)) {
        r = 2;
    }
    e->clear();
    return r;
}
}

BOOL EffectEmitterEntry::updateKind56Main() { using namespace R1;
    EffectEmitterTag bytes = tag;
    EffectSlot *e = &gEffectManager.slots[bytes.poolIndex];
    BOOL r = FALSE;
    if (e->handle != -1) {
        if (e->life == -1) {
            EffectSplEmitter *b = emitter;
            b->posX = e->x + b->resource->p_base->pos.x;
            b->posY = e->y + b->resource->p_base->pos.y;
            b->posZ = e->z + b->resource->p_base->pos.z;
            r = TRUE;
        }
    }
    if (!r) {
        P *n = emitter->particles;
        for (; n; n = n->next) {
            n->age = n->life;
        }
        e->clear();
    }
    return r;
}

BOOL EffectEmitterEntry::updateKind56Fade() { using namespace R1;
    EffectEmitterTag bytes = tag;
    EffectSlot *e = &gEffectManager.slots[bytes.poolIndex];
    BOOL r = FALSE;
    if (e->handle != -1) {
        if (e->life != 0) {
            EffectSplEmitter *b = emitter;
            b->posX = e->x + b->resource->p_base->pos.x;
            b->posY = e->y + b->resource->p_base->pos.y;
            b->posZ = e->z + b->resource->p_base->pos.z;
            if (e->life > 0) {
                emitter->baseAlpha = e->life * 6;
                e->life = e->life - 1;
            }
            r = TRUE;
        }
    }
    if (!r) {
        e->clear();
    }
    return r;
}

namespace R1 {
extern "C" s32 Effect_CreateKind56(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x10, a, b, c, d, data_020e1714);
}
}

namespace R1 {
extern "C" void Effect_EndKind56(s32 id) {
    gEffectManager.setLife(id, 4);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind57(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x11, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind58(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x12, a, b, c, d, NULL);
}
}

BOOL EffectEmitterEntry::updateKind59() { using namespace R1;
    EffectEmitterTag bytes = tag;
    EffectSlot *e = &gEffectManager.slots[bytes.poolIndex];
    BOOL r = FALSE;
    if (e->handle != -1) {
        if (e->life != 0) {
            P *n = emitter->particles;
            u32 t = 0x30d4;
            if (e->angle < 0) {
                t = 0xffffcf2c;
            }
            u16 v = t;
            for (; n; n = n->next) {
                n->rot0 = v;
            }
            if (e->life > 0) {
                e->life--;
            }
            r = TRUE;
        }
    }
    if (!r) {
        e->clear();
    }
    return r;
}

namespace R1 {
extern "C" s32 Effect_CreateKind59(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    s32 r = 3;
    Effect_StartOneShot(0x13, p0, (s32)p1, (s32)p2, (s32)p3, NULL);
    EffectScratchSlot *e = &(*(EffectScratchSlot *)&gEffectManager.scratchSlot);
    e->set(e->nextHandle, p0, p1, p2, p3, 0x25);
    if (EffectSpl_CreateTracked(0x62, (s32)p1, (s32)p2, data_020e163c)) {
        r = 2;
    }
    e->clear();
    return r;
}
}

namespace R1 {
extern "C" s32 EffectKind5A_InitEmitter0(s32 x) {
    return EffectCb_InitOneShotOffset(x, data_020d0330, data_020d02c4);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5A(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x14, a, b, c, d, data_020e14c8);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5B(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x82, a, b, c, d, data_020e14c8);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5C(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x15, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5D(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartModel(0, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5E(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartModel(1, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 EffectKind5F_InitEmitter0(s32 x) {
    return EffectCb_InitOneShotOffset(x, data_020d0264, data_020d02d0);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind5F(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x51, a, b, c, d, data_020e1564);
}
}

namespace R1 {
extern "C" s32 EffectKind60_InitEmitter0(s32 x) {
    return EffectCb_InitOneShotOffset(x, data_020d0384, data_020d024c);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind60(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x7b, a, b, c, d, data_020e1490);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind61(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0x7c, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind62(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartOneShot(0x7d, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateNone() {
    return 3;
}
}

namespace R1 {
extern "C" s32 Effect_CreateOneShotRes(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return Effect_StartOneShot(id, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 Effect_CreateTrackedRes(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return Effect_StartTracked(id, a, b, c, d, NULL);
}
}

void EffectSlot::clear() { using namespace R1;
    MI_CpuFill8(this, 0, 0x14);
    life = -1;
    param = 0x1000;
    handle = -1;
    kind = 0x66;
}

void EffectSlot::set(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v) { using namespace R1;
    clear();
    handle = id;
    kind = type;
    x = pos->x;
    y = pos->y;
    z = pos->z;
    if (a) {
        angle = *a;
    }
    if (b) {
        param = *b;
    }
    life = v;
}

void EffectManager::clearSlots() { using namespace R1;
    scratchSlot.clear();
    for (s32 i = 0; i < 0x20; i++) {
        slots[i].clear();
    }
}

EffectSlot *EffectManager::findSlot(s32 id, EffectSlot *e, s32 n) { using namespace R1;
    EffectSlot *r = NULL;
    s32 i = 0;
    for (; i < n; e++, i++) {
        if (id == e->handle) {
            r = e;
            break;
        }
    }
    return r;
}

void EffectManager::setPosition(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) { using namespace R1;
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            EffectSlot *e = &slots[i];
            if (id == e->handle) {
                e->x = pos->x;
                e->y = pos->y;
                e->z = pos->z;
                if (a) {
                    e->angle = *a;
                }
                if (b) {
                    e->param = *b;
                }
            }
        }
    }
}

void EffectManager::setLife(s32 id, s16 v) { using namespace R1;
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            if (slots[i].handle == id) {
                slots[i].life = v;
            }
        }
    }
}

void EffectManager::reset() { using namespace R1;
    clearSlots();
    nextHandle = 0;
}

s32 EffectManager::create(u32 kind, s32 a, s32 b, s32 c, s32 d) { using namespace R1;
    s32 r = -1;
    if (kind < 0x66) {
        EffectKindEntry *ent = &sEffectKindTable[kind];
        if (ent->fn) {
            s32 ret = ent->fn(kind, a, b, c, d);
            if (ret == 0) {
                r = nextHandle;
                nextHandle = r + 1;
            } else if (ret == 2) {
                nextHandle = nextHandle + 1;
            }
        }
    }
    return r;
}

void EffectManager::end(s32 id) { using namespace R1;
    if (id != -1) {
        u32 t = getKind(id);
        if (t < 0x66) {
            void (*f)(s32) = ((void (**)(s32))((u8 *)sEffectKindTable + 4))[t * 2];
            if (f) {
                f(id);
            }
        }
    }
}

u32 EffectManager::getKind(s32 id) { using namespace R1;
    EffectSlot *e = findSlot(id, slots, 0x20);
    u32 r = 0x66;
    if (e) {
        r = e->kind;
    }
    return r;
}

namespace R1 {
extern "C" void Effect_ResetAll() {
    gEffectManager.reset();
}
}

namespace R1 {
extern "C" s32 Effect_Create(u32 kind, s32 a, s32 b, s32 c) {
    return gEffectManager.create(kind, a, b, c, -1);
}
}

namespace R1 {
extern "C" s32 Effect_CreateWithParam(u32 kind, u16 v0, s32 a, s32 b) {
    u16 v = v0;
    return gEffectManager.create(kind, a, b, (s32)&v, -1);
}
}

namespace R1 {
extern "C" void Effect_End(s32 id) {
    gEffectManager.end(id);
}
}

namespace R1 {
extern "C" void Effect_SetPosition(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) {
    gEffectManager.setPosition(id, pos, a, b);
}
}

namespace R1 {
extern "C" s32 Effect_PlayById(s32 a, s32 b, s32 c, s32 d) {
    return gEffectManager.create(0x64, b, c, d, a);
}
}

namespace R1 {
extern "C" s32 Effect_PlayById2(s32 a, s32 b, s32 c, s32 d) {
    return gEffectManager.create(0x64, b, c, d, a);
}
}

namespace R1 {
extern "C" s32 Effect_CreateById(s32 a, s32 b, s32 c, s32 d) {
    return gEffectManager.create(0x65, b, c, d, a);
}
}


// ---- Data
namespace DT {
extern "C" {
void _ZN18EffectEmitterEntry12updateKind59Ev();
void _ZN18EffectEmitterEntry16updateKind56FadeEv();
void _ZN18EffectEmitterEntry16updateKind56MainEv();
void _ZN18EffectEmitterEntry13updateKind54BEv();
void _ZN18EffectEmitterEntry15updateLanding5FEv();
void _ZN18EffectEmitterEntry17updateLanding1F1EEv();
void _ZN18EffectEmitterEntry18updateLanding1F1EBEv();
void _ZN18EffectEmitterEntry17updateLanding1F1DEv();
void _ZN18EffectEmitterEntry17initAxisUpForwardEv();
void _ZN16EffectSplEmitter10initKind02Ev();
void Effect_CreateTrackedRes();
void Effect_CreateOneShotRes();
void Effect_CreateNone();
void Effect_CreateKind62();
void Effect_CreateKind61();
void Effect_CreateKind60();
void EffectKind60_InitEmitter0();
void Effect_CreateKind5F();
void EffectKind5F_InitEmitter0();
void Effect_CreateKind5E();
void Effect_CreateKind5D();
void Effect_CreateKind5C();
void Effect_CreateKind5B();
void Effect_CreateKind5A();
void EffectKind5A_InitEmitter0();
void Effect_CreateKind59();
void Effect_CreateKind58();
void Effect_CreateKind57();
void Effect_EndKind56();
void Effect_CreateKind56();
void Effect_CreateKind55();
void Effect_CreateKind54();
void EffectKind54_UpdateEmitter0();
void EffectKind54_InitEmitter1();
void EffectKind54_InitEmitter0();
void Effect_CreateKind53();
void Effect_CreateKind52();
void EffectKind52_InitEmitter0();
void Effect_CreateKind51();
void Effect_CreateKind50();
void Effect_CreateKind4F();
void Effect_CreateKind4E();
void EffectKind4E_UpdateEmitter1();
void EffectKind4E_UpdateEmitter0();
void EffectKind4E_InitEmitter1();
void EffectKind4E_InitEmitter0();
void Effect_CreateKind4D();
void Effect_CreateKind4C();
void Effect_CreateKind4B();
void Effect_CreateKind4A();
void EffectKind4A_UpdateEmitter0();
void EffectKind4A_InitEmitter0();
void Effect_CreateKind49();
void EffectKind49_UpdateEmitter0();
void EffectKind49_InitEmitter0();
void Effect_CreateKind48();
void Effect_CreateKind47();
void Effect_CreateKind46();
void Effect_CreateKind45();
void Effect_CreateKind44();
void Effect_CreateKind43();
void Effect_CreateKind42();
void Effect_CreateKind41();
void EffectKind41_UpdateEmitter2();
void EffectKind41_UpdateEmitter1();
void EffectKind41_UpdateEmitter0();
void EffectKind41_InitEmitter2();
void EffectKind41_InitEmitter1();
void EffectKind41_InitEmitter0();
void Effect_CreateKind40();
void EffectKind40_UpdateEmitter0();
void EffectKind40_InitEmitter0();
void Effect_CreateKind3F();
void EffectKind3F_UpdateEmitter0();
void EffectKind3F_InitEmitter0A();
void EffectKind3F_InitEmitter0B();
void Effect_CreateKind3E();
void EffectKind3E_InitEmitter0A();
void EffectKind3E_InitEmitter0B();
void Effect_EndKind3D();
void Effect_CreateKind3D();
void EffectKind3D_UpdateEmitter0();
void EffectKind3D_InitEmitter0();
void Effect_CreateKind3C();
void Effect_CreateKind3B();
void EffectKind3B_UpdateEmitter0();
void EffectKind3B_InitEmitter0();
void Effect_CreateKind3A();
void EffectKind3A_UpdateEmitter0();
void EffectKind3A_InitEmitter0();
void Effect_CreateKind39();
void EffectKind39_UpdateEmitter0A();
void EffectKind39_UpdateEmitter0B();
void EffectKind39_InitEmitter0();
void Effect_CreateKind38();
void Effect_CreateKind37();
void EffectKind37_InitEmitter0();
void Effect_CreateKind36();
void EffectKind36_UpdateEmitter2();
void EffectKind36_InitEmitter2();
void Effect_CreateKind35();
void EffectKind35_UpdateEmitter4();
void EffectKind35_UpdateEmitter3();
void EffectKind35_UpdateEmitter1();
void EffectKind35_InitEmitter4();
void EffectKind35_InitEmitter3();
void EffectKind35_InitEmitter1();
void Effect_CreateKind34();
void Effect_CreateKind33();
void EffectKind33_UpdateEmitter0();
void EffectKind33_InitEmitter0();
void Effect_CreateKind32();
void EffectKind32_InitEmitter0();
void Effect_CreateKind31();
void EffectKind31_UpdateEmitter0();
void EffectKind31_InitEmitter0();
void Effect_CreateKind30();
void Effect_CreateKind2F();
void Effect_CreateKind2E();
void EffectKind2E_InitEmitter2();
void EffectKind2E_InitEmitter1();
void EffectKind2E_InitEmitter0();
void Effect_CreateKind2D();
void EffectKind2D_InitEmitter0();
void Effect_CreateKind2C();
void EffectKind2C_InitEmitter0A();
void EffectKind2C_InitEmitter0B();
void Effect_CreateKind2B();
void EffectKind2B_InitEmitter0A();
void EffectKind2B_InitEmitter0B();
void Effect_CreateKind2A();
void EffectKind2A_InitEmitter0();
void Effect_CreateKind29();
void EffectKind29_InitEmitter0();
void Effect_CreateKind28();
void Effect_CreateKind27();
void Effect_CreateKind26();
void EffectKind26_UpdateEmitter0();
void EffectKind26_InitEmitter0();
void Effect_CreateKind25();
void EffectKind25_UpdateEmitter0();
void Effect_CreateKind24();
void EffectKind24_InitEmitter0();
void Effect_CreateKind23();
void EffectKind23_InitEmitter0();
void Effect_CreateKind22();
void Effect_CreateKind21();
void Effect_CreateKind1F();
void EffectKind1F_InitEmitter0();
void Effect_CreateKind1E();
void EffectKind1E_InitEmitter0();
void Effect_CreateKind1D();
void EffectKind1D_InitEmitter0();
void Effect_CreateKind1C();
void EffectKind1C_InitEmitter0();
void Effect_CreateKind1B();
void EffectKind1B_InitEmitter0();
void Effect_CreateKind1A();
void EffectKind1A_InitEmitter0();
void Effect_CreateKind19();
void EffectKind19_InitEmitter0A();
void EffectKind19_InitEmitter0B();
void Effect_CreateKind17();
void EffectKind17_InitEmitter0A();
void EffectKind17_InitEmitter0B();
void Effect_CreateKind16();
void EffectKind16_InitEmitter0A();
void EffectKind16_InitEmitter0B();
void Effect_CreateKind15();
void EffectKind15_InitEmitter2();
void EffectKind15_InitEmitter0();
void Effect_CreateKind14();
void EffectKind14_InitEmitter0A();
void EffectKind14_InitEmitter2();
void EffectKind14_InitEmitter0B();
void Effect_CreateKind13();
void EffectKind13_UpdateEmitter0();
void EffectKind13_InitEmitter1();
void EffectKind13_InitEmitter0();
void Effect_CreateKind12();
void Effect_CreateKind11();
void EffectKind11_UpdateEmitter2();
void Effect_CreateKind0E();
void EffectKind0E_UpdateEmitter0();
void EffectKind0E_InitEmitter0();
void Effect_CreateKind10();
void Effect_CreateKind0F();
void Effect_CreateKind0D();
void Effect_CreateKind0C();
void Effect_CreateKind0B();
void Effect_CreateKind0A();
void Effect_CreateKind09();
void EffectKind09_InitEmitter0();
void Effect_CreateKind08();
void Effect_CreateKind07();
void EffectKind07_InitEmitter1();
void EffectKind07_InitEmitter0();
void Effect_CreateKind06();
void Effect_CreateKind03();
void Effect_CreateKind02();
void Effect_CreateKind01();
void Effect_CreateKind00();
void EffectCb_FollowTracked();
void EffectCb_InitTracked();
void EffectCb_CountdownTracked();
void Effect_EndDefault();
void EffectCb_InitOneShotFacingBack();
void EffectCb_InitOneShotFacing();
void EffectCb_InitOneShot();
void EffectCb_TintOnly();
}
}

void *data_020e14a4[1] = {(void *)DT::EffectKind2B_InitEmitter0B};
void *data_020e147c[1] = {(void *)DT::EffectKind16_InitEmitter0A};
void *data_020e1490[1] = {(void *)DT::EffectKind60_InitEmitter0};
void *data_020e14a0[1] = {(void *)DT::EffectKind37_InitEmitter0};
void *data_020e148c[1] = {(void *)DT::EffectKind3E_InitEmitter0B};
void *data_020e1494[1] = {(void *)DT::EffectKind19_InitEmitter0A};
void *data_020e1484[1] = {(void *)DT::EffectKind29_InitEmitter0};
void *data_020e14bc[1] = {(void *)DT::EffectKind17_InitEmitter0A};
void *data_020e1474[1] = {(void *)DT::_ZN16EffectSplEmitter10initKind02Ev};
void *data_020e149c[1] = {(void *)DT::EffectKind32_InitEmitter0};
void *data_020e14b4[1] = {(void *)DT::EffectCb_InitOneShotFacing};
void *data_020e14ac[1] = {(void *)DT::EffectKind2A_InitEmitter0};
void *data_020e14b0[1] = {(void *)DT::EffectKind2C_InitEmitter0A};
void *data_020e14c4[1] = {(void *)DT::EffectKind23_InitEmitter0};
void *data_020e14c8[1] = {(void *)DT::EffectKind5A_InitEmitter0};
void *data_020e14a8[1] = {(void *)DT::EffectKind3F_InitEmitter0A};
void *data_020e1478[1] = {(void *)DT::EffectKind2B_InitEmitter0A};
void *data_020e14c0[1] = {(void *)DT::EffectKind2D_InitEmitter0};
void *data_020e14b8[1] = {(void *)DT::EffectKind52_InitEmitter0};
void *data_020e1480[1] = {(void *)DT::EffectCb_InitOneShotFacingBack};
void *data_020e1498[1] = {(void *)DT::EffectKind3E_InitEmitter0A};
void *data_020e1488[1] = {(void *)DT::EffectKind2C_InitEmitter0B};
void *data_020e15b4[2] = {(void *)DT::EffectKind14_InitEmitter0A, (void *)DT::EffectKind13_UpdateEmitter0};
void *data_020e14f4[2] = {(void *)DT::EffectKind31_InitEmitter0, (void *)DT::EffectKind31_UpdateEmitter0};
void *data_020e14fc[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry15updateLanding5FEv};
void *data_020e150c[2] = {(void *)DT::EffectCb_InitOneShotFacingBack, (void *)DT::EffectCb_InitOneShotFacingBack};
void *data_020e15f4[2] = {(void *)DT::EffectKind19_InitEmitter0B, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1EEv};
void *data_020e1564[2] = {(void *)DT::EffectKind5F_InitEmitter0, (void *)DT::EffectKind5F_InitEmitter0};
void *data_020e152c[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1EEv};
void *data_020e1544[2] = {(void *)DT::EffectKind3A_InitEmitter0, (void *)DT::EffectKind3A_UpdateEmitter0};
void *data_020e1574[2] = {(void *)DT::EffectKind16_InitEmitter0B, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1EEv};
void *data_020e151c[2] = {(void *)DT::EffectKind14_InitEmitter0A, (void *)DT::EffectKind13_UpdateEmitter0};
void *data_020e157c[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind13_UpdateEmitter0};
void *data_020e156c[2] = {(void *)DT::EffectKind3B_InitEmitter0, (void *)DT::EffectKind3B_UpdateEmitter0};
void *data_020e1514[2] = {(void *)DT::EffectKind49_InitEmitter0, (void *)DT::EffectKind49_UpdateEmitter0};
void *data_020e1524[2] = {(void *)DT::EffectKind17_InitEmitter0B, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1EEv};
void *data_020e154c[2] = {(void *)DT::EffectKind1D_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e155c[2] = {(void *)DT::EffectKind39_InitEmitter0, (void *)DT::EffectKind39_UpdateEmitter0B};
void *data_020e14ec[2] = {(void *)DT::_ZN18EffectEmitterEntry17initAxisUpForwardEv, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1DEv};
void *data_020e1554[2] = {(void *)DT::EffectKind39_InitEmitter0, (void *)DT::EffectKind39_UpdateEmitter0A};
void *data_020e1534[2] = {(void *)DT::EffectKind1A_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e153c[2] = {(void *)DT::EffectKind1B_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e14e4[2] = {(void *)DT::EffectKind1E_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e1584[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry15updateLanding5FEv};
void *data_020e158c[2] = {(void *)DT::EffectKind4A_InitEmitter0, (void *)DT::EffectKind4A_UpdateEmitter0};
void *data_020e1594[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry18updateLanding1F1EBEv};
void *data_020e14dc[2] = {(void *)DT::EffectKind1F_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e159c[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_CountdownTracked};
void *data_020e15a4[2] = {(void *)DT::EffectKind13_InitEmitter0, (void *)DT::EffectKind13_InitEmitter1};
void *data_020e15ac[2] = {(void *)DT::EffectKind1C_InitEmitter0, (void *)DT::EffectCb_FollowTracked};
void *data_020e14d4[2] = {(void *)DT::_ZN18EffectEmitterEntry17initAxisUpForwardEv, (void *)DT::_ZN18EffectEmitterEntry18updateLanding1F1EBEv};
void *data_020e15bc[2] = {(void *)DT::EffectKind26_InitEmitter0, (void *)DT::EffectKind26_UpdateEmitter0};
void *data_020e15c4[2] = {(void *)DT::EffectKind07_InitEmitter0, (void *)DT::EffectKind07_InitEmitter1};
void *data_020e15cc[2] = {(void *)DT::EffectKind33_InitEmitter0, (void *)DT::EffectKind33_UpdateEmitter0};
void *data_020e15d4[2] = {(void *)DT::EffectKind3F_InitEmitter0B, (void *)DT::EffectKind3F_UpdateEmitter0};
void *data_020e15dc[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry15updateLanding5FEv};
void *data_020e15e4[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry17updateLanding1F1DEv};
void *data_020e15ec[2] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry15updateLanding5FEv};
void *data_020e1504[2] = {(void *)DT::EffectKind0E_InitEmitter0, (void *)DT::EffectKind0E_UpdateEmitter0};
void *data_020e14cc[2] = {(void *)DT::EffectKind40_InitEmitter0, (void *)DT::EffectKind40_UpdateEmitter0};
extern const s32 data_020d0228[3];
const s32 data_020d0228[3] = {-512, 0, -246};
extern const s32 data_020d0234[3];
const s32 data_020d0234[3] = {737, 0, 2048};
extern const s32 data_020d024c[3];
const s32 data_020d024c[3] = {0, -2048, 4096};
extern const s32 data_020d0258[3];
const s32 data_020d0258[3] = {6963, 0, 6963};
extern const s32 data_020d0270[3];
const s32 data_020d0270[3] = {1024, 4096, 0};
extern const s32 data_020d027c[3];
const s32 data_020d027c[3] = {2744, 0, 0};
extern const s32 data_020d0294[3];
const s32 data_020d0294[3] = {-1843, 0, -2253};
extern const s32 data_020d02a0[3];
const s32 data_020d02a0[3] = {6963, 0, -6963};
extern const s32 data_020d02b8[3];
const s32 data_020d02b8[3] = {-4096, 4096, 0};
extern const s32 data_020d02c4[3];
const s32 data_020d02c4[3] = {0, 0, 4096};
extern const s32 data_020d02dc[3];
const s32 data_020d02dc[3] = {0, 4096, -4096};
extern const s32 data_020d02e8[3];
const s32 data_020d02e8[3] = {0, 0, 3277};
extern const s32 data_020d0300[3];
const s32 data_020d0300[3] = {4096, 4096, 0};
extern const s32 data_020d030c[3];
const s32 data_020d030c[3] = {0, 4096, 4096};
extern const s32 data_020d0324[3];
const s32 data_020d0324[3] = {0, 0, 3277};
extern const s32 data_020d0330[3];
const s32 data_020d0330[3] = {0, 3277, 3277};
extern const s32 data_020d0348[3];
const s32 data_020d0348[3] = {0, 3482, 2130};
extern const s32 data_020d0354[3];
const s32 data_020d0354[3] = {-1516, 0, -2130};
extern const s32 data_020d036c[3];
const s32 data_020d036c[3] = {-1024, 0, 1229};
extern const s32 data_020d0378[3];
const s32 data_020d0378[3] = {901, 0, 2458};
extern const s32 data_020d0384[3];
const s32 data_020d0384[3] = {0, 0, 819};
extern const s32 data_020d0390[3];
const s32 data_020d0390[3] = {-614, 4096, -614};
extern const s32 data_020d039c[3];
const s32 data_020d039c[3] = {-1638, 0, 2048};
extern const s32 data_020d03a8[3];
const s32 data_020d03a8[3] = {-1638, 1925, 0};
extern const s32 data_020d03b4[3];
const s32 data_020d03b4[3] = {1638, 0, 2048};
extern const s32 data_020d03c0[3];
const s32 data_020d03c0[3] = {1638, 1925, 0};
void *data_020e15fc[3] = {(void *)DT::EffectKind2E_InitEmitter0, (void *)DT::EffectKind2E_InitEmitter1, (void *)DT::EffectKind2E_InitEmitter2};
void *data_020e1608[3] = {(void *)DT::EffectKind09_InitEmitter0, (void *)DT::EffectKind09_InitEmitter0, (void *)DT::EffectKind09_InitEmitter0};
void *data_020e1614[3] = {(void *)DT::EffectKind14_InitEmitter0B, (void *)DT::EffectKind14_InitEmitter0B, (void *)DT::EffectKind14_InitEmitter2};
void *data_020e1620[3] = {(void *)DT::EffectKind15_InitEmitter0, (void *)DT::EffectKind15_InitEmitter0, (void *)DT::EffectKind15_InitEmitter2};
extern const s32 data_020d021c[3];
const s32 data_020d021c[3] = {0, 0, 3277};
extern const s32 data_020d0240[3];
const s32 data_020d0240[3] = {-5734, 0, 6963};
extern const s32 data_020d0264[3];
const s32 data_020d0264[3] = {0, 0, 3359};
extern const s32 data_020d0288[3];
const s32 data_020d0288[3] = {2130, 0, 0};
extern const s32 data_020d02ac[3];
const s32 data_020d02ac[3] = {-1843, 0, 1516};
extern const s32 data_020d02d0[3];
const s32 data_020d02d0[3] = {0, -2048, 4096};
extern const s32 data_020d02f4[3];
const s32 data_020d02f4[3] = {-4096, 4096, 0};
extern const s32 data_020d0318[3];
const s32 data_020d0318[3] = {-819, 4096, -1638};
extern const s32 data_020d033c[3];
const s32 data_020d033c[3] = {0, 4096, 4096};
extern const s32 data_020d0360[3];
const s32 data_020d0360[3] = {1229, 0, -307};
void *data_020e162c[4] = {(void *)DT::EffectKind54_InitEmitter0, (void *)DT::EffectKind54_UpdateEmitter0, (void *)DT::EffectKind54_InitEmitter1, (void *)DT::_ZN18EffectEmitterEntry13updateKind54BEv};
void *data_020e163c[4] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry12updateKind59Ev, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry12updateKind59Ev};
void *data_020e164c[4] = {(void *)DT::EffectKind3B_InitEmitter0, (void *)DT::EffectKind3B_UpdateEmitter0, (void *)DT::EffectKind3B_InitEmitter0, (void *)DT::EffectKind3B_UpdateEmitter0};
void *data_020e165c[4] = {(void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0};
void *data_020e166c[4] = {(void *)DT::EffectKind3D_InitEmitter0, (void *)DT::EffectKind3D_UpdateEmitter0, (void *)DT::EffectKind3D_InitEmitter0, (void *)DT::EffectKind3D_UpdateEmitter0};
void *data_020e167c[4] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_CountdownTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_CountdownTracked};
void *data_020e168c[6] = {(void *)DT::EffectKind41_InitEmitter0, (void *)DT::EffectKind41_UpdateEmitter0, (void *)DT::EffectKind41_InitEmitter1, (void *)DT::EffectKind41_UpdateEmitter1, (void *)DT::EffectKind41_InitEmitter2, (void *)DT::EffectKind41_UpdateEmitter2};
void *data_020e16a4[6] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind11_UpdateEmitter2};
void *data_020e16bc[6] = {(void *)DT::EffectKind4E_InitEmitter0, (void *)DT::EffectKind4E_UpdateEmitter0, (void *)DT::EffectKind4E_InitEmitter1, (void *)DT::EffectKind4E_UpdateEmitter1, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *data_020e16d4[8] = {(void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly};
void *sEffectDefaultOneShotCbs[8] = {(void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot};
void *data_020e1714[8] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry16updateKind56MainEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry16updateKind56FadeEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry16updateKind56FadeEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN18EffectEmitterEntry16updateKind56FadeEv};
void *data_020e1734[10] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectKind35_InitEmitter1, (void *)DT::EffectKind35_UpdateEmitter1, (void *)DT::EffectKind35_InitEmitter1, (void *)DT::EffectKind35_UpdateEmitter1, (void *)DT::EffectKind35_InitEmitter3, (void *)DT::EffectKind35_UpdateEmitter3, (void *)DT::EffectKind35_InitEmitter4, (void *)DT::EffectKind35_UpdateEmitter4};
void *data_020e175c[10] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0};
void *data_020e1784[14] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectKind36_InitEmitter2, (void *)DT::EffectKind36_UpdateEmitter2, (void *)DT::EffectKind36_InitEmitter2, (void *)DT::EffectKind36_UpdateEmitter2, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *sEffectDefaultTrackedCbs[16] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *data_020e17fc[16] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
s32 data_020e18a8[27] = {-3277, 410, 1434, -3809, -778, 451, -2908, -410, -164, -3154, 1229, 0, -2867, -1638, -1229, -4096, 287, 1966, -2458, 1229, 614, -3482, 614, 1434, -3154, 1229, 0};
s32 data_020e183c[27] = {819, -205, 3277, 2294, -1679, 2580, 1966, -778, 1679, 2458, 410, 2048, 2458, -2458, 778, 1679, -819, 3809, 1434, 614, 2048, 1638, 205, 3277, 2458, 410, 2048};
void *sEffectKindTable[204] = {(void *)DT::Effect_CreateKind00, 0, (void *)DT::Effect_CreateKind01, 0, (void *)DT::Effect_CreateKind02, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind06, 0, (void *)DT::Effect_CreateKind07, 0, (void *)DT::Effect_CreateKind08, 0, (void *)DT::Effect_CreateKind09, 0, (void *)DT::Effect_CreateKind0A, 0, (void *)DT::Effect_CreateKind0B, 0, (void *)DT::Effect_CreateKind0C, 0, (void *)DT::Effect_CreateKind0D, 0, (void *)DT::Effect_CreateKind0E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind0F, 0, (void *)DT::Effect_CreateKind10, 0, (void *)DT::Effect_CreateKind11, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind12, 0, (void *)DT::Effect_CreateKind13, 0, (void *)DT::Effect_CreateKind14, 0, (void *)DT::Effect_CreateKind15, 0, (void *)DT::Effect_CreateKind16, 0, (void *)DT::Effect_CreateKind17, 0, (void *)DT::Effect_CreateKind14, 0, (void *)DT::Effect_CreateKind19, 0, (void *)DT::Effect_CreateKind1A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1D, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1F, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind21, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind22, 0, (void *)DT::Effect_CreateKind23, 0, (void *)DT::Effect_CreateKind24, 0, (void *)DT::Effect_CreateKind25, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind26, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind27, 0, (void *)DT::Effect_CreateKind28, 0, (void *)DT::Effect_CreateKind29, 0, (void *)DT::Effect_CreateKind2A, 0, (void *)DT::Effect_CreateKind2B, 0, (void *)DT::Effect_CreateKind2C, 0, (void *)DT::Effect_CreateKind2D, 0, (void *)DT::Effect_CreateKind2E, 0, (void *)DT::Effect_CreateKind2F, 0, (void *)DT::Effect_CreateKind30, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind31, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind32, 0, (void *)DT::Effect_CreateKind33, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind34, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind35, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind36, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind37, 0, (void *)DT::Effect_CreateKind38, 0, (void *)DT::Effect_CreateKind39, 0, (void *)DT::Effect_CreateKind3A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3D, (void *)DT::Effect_EndKind3D, (void *)DT::Effect_CreateKind3E, 0, (void *)DT::Effect_CreateKind3F, 0, (void *)DT::Effect_CreateKind40, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind41, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind42, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind43, 0, (void *)DT::Effect_CreateKind44, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind45, 0, (void *)DT::Effect_CreateKind46, 0, (void *)DT::Effect_CreateKind47, 0, (void *)DT::Effect_CreateKind48, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind49, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4D, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4F, 0, (void *)DT::Effect_CreateKind50, 0, (void *)DT::Effect_CreateKind51, 0, (void *)DT::Effect_CreateKind52, 0, (void *)DT::Effect_CreateKind53, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind54, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind55, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind56, (void *)DT::Effect_EndKind56, (void *)DT::Effect_CreateKind57, 0, (void *)DT::Effect_CreateKind58, 0, (void *)DT::Effect_CreateKind59, 0, (void *)DT::Effect_CreateKind5A, 0, (void *)DT::Effect_CreateKind5B, 0, (void *)DT::Effect_CreateKind5C, 0, (void *)DT::Effect_CreateKind5D, 0, (void *)DT::Effect_CreateKind5E, 0, (void *)DT::Effect_CreateKind5F, 0, (void *)DT::Effect_CreateKind60, 0, (void *)DT::Effect_CreateKind61, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind62, 0, (void *)DT::Effect_CreateNone, 0, (void *)DT::Effect_CreateOneShotRes, 0, (void *)DT::Effect_CreateTrackedRes, (void *)DT::Effect_EndDefault};
EffectManager gEffectManager;

