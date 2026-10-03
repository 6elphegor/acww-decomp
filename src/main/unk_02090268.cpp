
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203389c_Vec {
    s32 x, y, z;
};
typedef Unk_0203389c_Vec Unk_02093aa8_Vec;
typedef Unk_0203389c_Vec Unk_02093748_Vec;

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

struct Unk_020904f0_Vec {
    s32 x, y, z;
};

// 0x1c-byte effect/slot entry (32 of them in EffectManager, plus one scratch entry at data_021d0830)
class EffectSlot {
public:
    void clear();
    void set(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u16 unk_18;
    /* 0x1a */ u16 unk_1a;
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

    /* 0x000 */ EffectSlot unk_000[32];
    /* 0x380 */ EffectSlot unk_380;
    /* 0x39c */ u16 unk_39c;
};

struct Unk_0209073c_Scratch : public EffectSlot {
    u16 unk_1c;
};

struct Unk_020e1914_Ent {
    s32 (*fn)(s32, s32, s32, s32, s32);
    s32 fn2;
};

struct Unk_020907a0_Bytes {
    u8 b[4];
};

struct Unk_020907a0_Node {
    Unk_020907a0_Node *unk_00;
    u8 pad[0x1c];
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
};

struct Unk_020908a8_C {
    u32 pad0;
    s32 x, y, z;
};

struct Unk_020908a8_B {
    u8 pad0[8];
    Unk_020907a0_Node *unk_08;
    u8 pad1[0xc];
    Unk_020908a8_C **unk_18;
    u8 pad2[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad3[0x3d];
    u8 unk_69;
};

class EffectEmitterEntryView {
public:
    BOOL updateKind59();
    BOOL updateKind56Fade();
    BOOL updateKind56Main();
    void updateKind54B();

    u32 unk_00;
    Unk_020907a0_Bytes unk_04;
    u32 unk_08;
    Unk_020908a8_B *unk_0c;
};

struct Unk_02090a80_Rec {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02090a80_Idx {
    u8 b[4];
};

struct Unk_02090a80_Arg {
    u8 unk_00[4];
    Unk_02090a80_Idx idx;
};

struct Unk_02090bd8_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02090bd8_Vec { s32 x, y, z; };

struct Unk_02090bd8_V {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_02090bd8_V() {}
    ~Unk_02090bd8_V() {}
};

struct Unk_02090bd8_Obj {
    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ u8 *unk_0c;
    /* 0x10 */ u8 unk_10[8];
    /* 0x18 */ Unk_02090bd8_Sub **unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u8 unk_2c[0x18];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
};

struct Unk_02091404_Rec {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02091404_Ext {
    Unk_02091404_Rec rec;
    u16 unk_1c;
};

struct Unk_02091404_Idx {
    u8 b[4];
};

struct Unk_02091404_V {
    s32 x, y, z;
};

struct Unk_02091404_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02091404_Node {
    /* 0x00 */ Unk_02091404_Node *next;
    /* 0x04 */ u8 unk_04[0x1c];
    /* 0x20 */ u16 unk_20;
    /* 0x22 */ u16 unk_22;
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 unk_28[8];
    /* 0x30 */ s32 unk_30;
};

struct Unk_02091404_Obj {
    /* 0x00 */ u8 unk_00[8];
    /* 0x08 */ Unk_02091404_Node *unk_08;
    /* 0x0c */ u8 unk_0c[0x0c];
    /* 0x18 */ Unk_02091404_Sub **unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u8 unk_2c[0x10];
    /* 0x3c */ s16 unk_3c;
    /* 0x3e */ s16 unk_3e;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ u8 unk_42[10];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58[0x10];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a[0x0e];
    /* 0x78 */ void (*unk_78)(Unk_02091404_Obj *, s32);
};

struct Unk_02091404_Arg {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ Unk_02091404_Idx idx;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ Unk_02091404_Obj *unk_0c;
};

struct Unk_02092388_Vec {
    s32 x, y, z;
};

struct Unk_02092388_Data {
    Unk_02092388_Vec pos;
    s16 ang;
};

struct Unk_02092388_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_02092388_Sub2 {
    Unk_02092388_Sub *unk_00;
};

struct Unk_02092388_Node {
    Unk_02092388_Node *unk_00;
    u8 pad_04[0x1c];
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
};

struct Unk_02092388_Obj {
    u8 pad_00[8];
    Unk_02092388_Node *unk_08;
    s32 unk_0c;
    u8 pad_10[8];
    Unk_02092388_Sub2 *unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x10];
    s16 unk_3c;
    s16 unk_3e;
    s16 unk_40;
    u8 pad_42[0xa];
    s32 unk_4c;
    s32 unk_50;
    u8 pad_54[4];
    u16 unk_58;
    u8 pad_5a[0xe];
    u8 unk_68;
    u8 unk_69;
    u8 pad_6a[0xe];
    void *unk_78;
};

struct Unk_02092528_Outer {
    u32 unk_00;
    u8 unk_04[4];
    u32 unk_08;
    Unk_02092388_Obj *unk_0c;
};

struct Unk_02092528_Idx {
    u8 b[4];
};

struct Unk_02092528_Entry {
    s32 x, y, z;
    s16 ang;
    s16 cnt;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_02091fa4_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

struct Unk_020926d4_Obj {
    u32 unk_00;
    Unk_02092388_Vec unk_04;
    Unk_02092388_Vec unk_10;
    s16 unk_1c;
    s16 unk_1e;
    s16 unk_20;
};

namespace Unk_02091ea0_Ns {
extern "C" s32 EffectKind35_InitParams(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);
}

struct Unk_02092e98_Vec { s32 x, y, z; };

struct Unk_02092da4_Y { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0c; };

struct Unk_02092da4_X { Unk_02092da4_Y *unk_00; };

struct Unk_02092da4_B {
    u8 pad_00[0xc];
    s32 unk_0c;
    u8 pad_10[8];
    Unk_02092da4_X *unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x10];
    u16 unk_3c;
    u16 unk_3e;
    u16 unk_40;
    u8 pad_42[0xe];
    u32 unk_50;
    u32 unk_54;
};

struct Unk_02092da4_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[2];
    s16 unk_0e;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[4];
};

struct Unk_02092830 {
    u32 unk_00;
    u8 unk_04[4];
    u32 unk_08;
    Unk_02092da4_B *unk_0c;
};

struct Unk_02092da4_Bytes { u8 b[4]; };

struct Unk_02092e98_Bytes { u8 b[4]; };

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

struct Unk_020932bc_V16 {
    s16 x, y, z;
    void Set(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_021d0830 {
    s32 x, y, z;
    s16 ang;
    s16 pad_e;
};

struct Unk_0209355c_Pos {
    u32 pad_00;
    Unk_02093748_Vec pos;
};

struct Unk_0209355c_Ref {
    Unk_0209355c_Pos *unk_00;
};

struct Unk_02093914_Ent {
    u8 pad_00[0xe];
    s16 unk_0e;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[4];
};

struct Unk_02093914_Id {
    u8 b[4];
};

typedef void (*Unk_0209389c_Fn)(void *);

struct Unk_02093998_Node {
    Unk_02093998_Node *unk_00;
    u8 pad_04[4];
    s32 unk_08, unk_0c, unk_10;
    u8 pad_14[0x10];
    u16 unk_24, unk_26;
    u8 pad_28[0x10];
    s32 unk_38, unk_3c, unk_40;
};

class EffectSplEmitter {
public:
    s32 spawnLandingEffects(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    s32 Effect_SpawnParticleLandings(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    void initKind02();

    u8 pad_00[8];
    Unk_02093998_Node *unk_08;
    s32 unk_0c;
    u8 pad_10[8];
    Unk_0209355c_Ref *unk_18;
    u8 pad_1c[4];
    s32 unk_20, unk_24, unk_28;
    u8 pad_2c[0x10];
    Unk_020932bc_V16 unk_3c;
    u8 pad_42[0x1a];
    s32 unk_5c;
};

class EffectEmitterEntry {
public:
    void updateLanding5F();
    void updateLanding1F1E();
    void updateLanding1F1D();
    void updateLanding1F1EB();
    void initAxisUpForward();
    s32 updateLanding(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);

    u8 pad_00[4];
    Unk_02093914_Id unk_04;
    u8 pad_08[4];
    EffectSplEmitter *unk_0c;
};

class EffectModelObj {
public:
    void initAtSlot(s32 s);

    u8 pad_00[4];
    Unk_020932bc_V32 unk_04;
    Unk_020932bc_V32 unk_10;
    Unk_020932bc_V16 unk_1c;
};

static inline BOOL Unk_020935e8_IsOne(u8 v)
{
    return v == 1 ? TRUE : FALSE;
}

// Effect entry (0x1c bytes), array gEffectManager[32], scratch entry at data_021d0830
struct Unk_02093c28_Entry {
    /* 0x00 */ s32 x, y, z;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02093bb4_Scratch {
    Unk_02093c28_Entry e;
    /* 0x1c */ u16 unk_1c;
};

struct Unk_02093c28_Handle {
    u8 b[4];
};

struct Unk_02093dc8_Root {
    s32 unk_00;
    s32 unk_04, unk_08, unk_0c;
};

struct Unk_02093dc8_Ptr {
    Unk_02093dc8_Root *unk_00;
};

// Particle object
struct Unk_02093c28_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_02093c28_Handle unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ struct Unk_02093dc8_Obj *unk_0c;
};

struct Unk_02093dc8_Obj {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ Unk_02093dc8_Ptr *unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ s32 unk_20, unk_24, unk_28;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ s16 unk_3c;
    /* 0x3e */ s16 unk_3e;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ u8 pad_42[0x12];
    /* 0x54 */ s32 unk_54;
};

struct Unk_02093aa8_Node {
    /* 0x00 */ Unk_02093aa8_Node *next;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 x, y, z;
    /* 0x14 */ u8 pad_14[0x10];
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 pad_28[0x10];
    /* 0x38 */ s32 ox, oy, oz;
};

struct Unk_02093aa8_Owner {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02093aa8_Node *unk_08;
};

namespace R1 {
extern "C" {
extern EffectManager gEffectManager;

extern Unk_0209073c_Scratch data_021d0830;

extern Unk_020e1914_Ent sEffectKindTable[];

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

extern u32 data_021d04a4;

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

s32 func_0208fb20(s32, s32, s32, void *);

void func_0208fa54(void *);

void *func_0209019c(u32 size);


}
}

namespace R2 {
extern "C" {
extern Unk_02090a80_Rec gEffectManager[];

extern Unk_02090a80_Rec data_021d0830;

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

s32 func_0208fe0c(void *p);

void EffectKind3F_InitModel(s32 p);


}
}

namespace R3 {
extern "C" {
extern Unk_02091404_Rec gEffectManager[];

extern Unk_02091404_Ext data_021d0830;

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

s32 func_0208fe0c(void *p);

s32 func_0208fb20(s32 a, s32 b, s32 c, const char *d);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void MI_CpuCopy8(void *, void *, u32);

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *buf, s32 b, s32 c, s32 d);

void func_02033988(void *buf);

s32 Weather_GetFallingPrecip(void);

s32 func_020b50bc(void);

void func_020e93a0(Unk_02091404_V *v, s16 a);

s32 func_020e7b98(s32 a, s32 b);

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

extern u8 data_020e416c;

extern Unk_02092388_Data data_021d0830;

extern Unk_02092528_Entry gEffectManager[];

extern s16 data_02135f44[];

s32 EffectCb_InitTrackedOffset(void *a, s32 b, void *c);

s32 EffectCb_FollowTrackedOffset(void *a, s32 b, void *c);

s32 EffectCb_InitOneShotOffset(void *a, void *b, void *c);

s32 Effect_StartTracked(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 Effect_StartOneShot(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 func_0208fc88(s32 a, s32 b, s32 c, void *d);

s32 _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(Unk_02092388_Obj *o, s32 a, void *b, s32 c, s32 d, s32 e, void *f, s32 g, void *h);

s32 Effect_StartModel(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void _ZN10EffectSlot5clearEv(void *e);

void func_0208fe0c(void *o);

s32 Weather_GetFallingPrecip();

s32 func_020b50bc();

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *buf, s32 pos, s32 a, s32 b);

void func_02033988(void *buf);

s32 Sky_GetLightColor(s32 a);

void EffectCb_InitOneShot(void *a);

s32 _s32_div_f(s32 a, s32 b);

void func_020e93a0(Unk_02092388_Vec *v, s16 a);

void VEC_Add(Unk_02092388_Vec *a, void *b, Unk_02092388_Vec *c);

s32 func_020e7b98(s32 a, s32 b);

void EffectKind35_InitParams(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);

s32 Effect_StartOnSandOrSnow(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void EffectCb_PlaceRotatedOffset(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang);

void EffectCb_AlignFirstParticle(Unk_02092388_Obj *o, s32 flag);

s32 EffectKind2E_Start(s32 a, s32 b, s32 c, s32 d, s32 e);

void EffectKind24_InitModel(Unk_020926d4_Obj *o);

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

extern Unk_02092da4_Rec gEffectManager[];

s32 Effect_StartTracked(s32, s32, s32, s32, s32, void *);

s32 EffectCb_InitTrackedOffset(void *, s32, s32);

s32 EffectCb_InitTracked(void *);

s32 EffectCb_InitOneShotSetUnk54(void *, s32);

s32 _ZN14EffectModelObj10initAtSlotEi(void *, s32);

s32 EffectCb_InitOneShot(void *);

s32 Effect_StartOneShot(s32, s32, s32, s32, s32, void *);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 func_0208fb20(s32, s32, s32, void *);

s32 _ZN10EffectSlot5clearEv(void *);

s32 _ZN18EffectEmitterEntry13updateLandingEiPviS0_iS0_iS0_(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 Effect_SpawnParticleLandings(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 Effect_StartWaterColumn(s32, s32, s32, s32, void *, void *, void *);

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *, void *, s32, s32);

void func_02033988(void *);

s32 func_020e94f8(void *);

void func_0208fe0c(void *);

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

extern u8 data_020e416c[];

extern Unk_021d0830 data_021d0830;

extern Unk_02093914_Ent gEffectManager[];

extern Unk_02093748_Vec gVec3Zero;

s32 Effect_StartOneShot(s32 kind, s32 a, void *b, void *c, s32 d, void *data);

s32 EffectCb_InitOneShotOffset(void *obj, const void *a, const void *b);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *obj, s32 h, s32 a, void *b, void *c, s32 d, s32 e);

s32 func_0208fb20(s32 kind, void *b, void *c, void *data);

s32 func_0208fb00(s32 kind, Unk_0209389c_Fn fn);

s32 func_0208fc88(s32 kind, void *b, void *c, void *data);

s32 _ZN10EffectSlot5clearEv(void *obj);

s32 Weather_GetFallingPrecip();

s32 func_020b50bc();

s32 func_0208fe0c(void *obj);

void func_02033988(void *o);

void func_020e944c(Unk_02093748_Vec *v, s32 a);

void func_020e93a0(Unk_02093748_Vec *v, s32 a);

void MI_CpuCopy8(void *src, void *dst, u32 n);

s32 Effect_StartModel(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn);

s32 Effect_StartWaterColumn(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn);

void EffectModel_InitUnitScale(void *o);

void EffectModel_InitDefault(void *o);

s32 Effect_SpawnParticleLandings(void *o, s32 a, void *b, s32 c, void *d, s32 e, void *f, s32 g, void *h);
s32 _ZN12Unk_0203389c13func_020338e8Ev(void *p);
}
}

namespace R7 {
extern "C" {
extern Unk_02093c28_Entry gEffectManager[];

extern Unk_02093bb4_Scratch data_021d0830;

extern Unk_02093aa8_Vec gVec3Zero;

extern u32 sEffectDefaultTrackedCbs[];

extern u32 sEffectDefaultOneShotCbs[];

extern s16 data_02135f44[];

s32 func_0208fb20(void *, s32, s32, void *);

s32 func_0208fc88(void *, s32, s32, void *);

s32 func_0208fe0c(void *);

s32 _ZN13EffectManager7setLifeEis(void *, s32, s32);

s32 _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 _ZN10EffectSlot5clearEv(void *);

void func_020e93a0(void *, s32);

s32 func_020e94f8(void *);

void VEC_Add(void *, void *, void *);

s32 MI_CpuCopy8(const void *src, void *dst, u32 n);

s32 MI_CpuFill8(void *dst, u32 v, u32 n);

s32 memcmp(const void *, const void *, u32);

s32 EffectCb_FollowTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 EffectCb_InitTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 Effect_StartOneShot(s32 a, s32 b, void *c, s32 d, s32 e, void *f);

void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);

s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);

s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o);


}
}

namespace R7 {
extern "C" s32 EffectCb_TintOnly(void *o)
{
    return func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o)
{
    o->unk_20 = (*(Unk_02093bb4_Scratch *)&gEffectManager[32]).e.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = (*(Unk_02093bb4_Scratch *)&gEffectManager[32]).e.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = (*(Unk_02093bb4_Scratch *)&gEffectManager[32]).e.z + o->unk_18->unk_00->unk_0c;
    return func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
{
    s32 idx;
    u16 ang = e->unk_0c;
    o->unk_20 = e->x + o->unk_18->unk_00->unk_04;
    o->unk_24 = e->y + o->unk_18->unk_00->unk_08;
    o->unk_28 = e->z + o->unk_18->unk_00->unk_0c;
    idx = (ang >> 4) * 2;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotFacing(Unk_02093dc8_Obj *o)
{
    return EffectCb_PlaceFacing(o, (Unk_02093c28_Entry *)&(*(Unk_02093bb4_Scratch *)&gEffectManager[32]));
}
}

namespace R7 {
extern "C" s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
{
    s16 ang = (s16)(e->unk_0c + 0x8000);
    s32 idx;
    o->unk_20 = e->x + o->unk_18->unk_00->unk_04;
    o->unk_24 = e->y + o->unk_18->unk_00->unk_08;
    o->unk_28 = e->z + o->unk_18->unk_00->unk_0c;
    idx = ((u16)ang >> 4) * 2;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotFacingBack(Unk_02093dc8_Obj *o)
{
    return EffectCb_PlaceFacingBack(o, (Unk_02093c28_Entry *)&(*(Unk_02093bb4_Scratch *)&gEffectManager[32]));
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
extern "C" void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
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
        func_020e93a0(&v1, e->unk_0c);
        VEC_Add(&pos, &v1, &pos);
    }
    o->unk_20 = pos.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = pos.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = pos.z + o->unk_18->unk_00->unk_0c;
    if (b != NULL) {
        v2.x = b->x;
        v2.y = b->y;
        v2.z = b->z;
        func_020e93a0(&v2, e->unk_0c);
        if (func_020e94f8(&v2) != 0) {
            s32 y = v2.y;
            s32 z = v2.z;
            s32 x = v2.x;
            o->unk_3c = x;
            o->unk_3e = y;
            o->unk_40 = z;
        }
    }
}
}

namespace R7 {
extern "C" s32 EffectCb_InitOneShotOffset(Unk_02093dc8_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    EffectCb_PlaceEmitter(o, &(*(Unk_02093bb4_Scratch *)&gEffectManager[32]).e, a, b);
    func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 Effect_StartOneShot(s32 p0, s32 p1, void *p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = sEffectDefaultOneShotCbs;
    r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02093bb4_Scratch *)&gEffectManager[32]), -1, p1, (s32)p2, p3, e, -1);
    if (func_0208fc88((void *)p0, (s32)p2, p3, t)) r = 1;
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
extern "C" s32 EffectCb_CountdownTracked(Unk_02093c28_Obj *o)
{
    Unk_02093c28_Handle h = o->unk_04;
    Unk_02093c28_Entry *e = &gEffectManager[h.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R7 {
extern "C" s32 EffectCb_InitTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093bb4_Scratch *const g = &(*(Unk_02093bb4_Scratch *)&gEffectManager[32]);
    Unk_02093c28_Handle h = o->unk_04;
    EffectCb_PlaceEmitter(o->unk_0c, &g->e, a, b);
    func_0208fe0c(o->unk_0c);
    MI_CpuCopy8(g, &gEffectManager[h.b[0]], 0x1c);
}
}

namespace R7 {
extern "C" s32 EffectCb_FollowTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093c28_Handle h = o->unk_04;
    BOOL r;
    Unk_02093c28_Entry *e = &gEffectManager[h.b[0]];
    r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        EffectCb_PlaceEmitter(o->unk_0c, e, a, b);
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) _ZN10EffectSlot5clearEv(e);
    return r;
}
}

namespace R7 {
extern "C" s32 EffectCb_InitTracked(Unk_02093c28_Obj *o)
{
    return EffectCb_InitTrackedOffset(o, NULL, NULL);
}
}

namespace R7 {
extern "C" s32 EffectCb_FollowTracked(Unk_02093c28_Obj *o)
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
    Unk_02093bb4_Scratch *const g = &(*(Unk_02093bb4_Scratch *)&gEffectManager[32]);
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(g, g->unk_1c, p1, p2, p3, e, -1);
    if (func_0208fb20(p0, p2, p3, t)) r = 0;
    _ZN10EffectSlot5clearEv(g);
    return r;
}
}

namespace R7 {
extern "C" s32 Effect_SpawnParticleLandings(Unk_02093aa8_Owner *o, s32 p1, s32 p2, s32 p3, s32 s0, s32 p5, s32 s2, s32 p6, s32 s4)
{
    Unk_02093aa8_Node *n;
    Unk_02093aa8_Vec pos;
    BOOL result;
    n = o->unk_08;
    pos = gVec3Zero;
    result = FALSE;
    if (n != NULL) {
        result = TRUE;
        while (n != NULL) {
            Unk_0203398c g;
            pos.x = n->x + n->ox;
            pos.y = n->y + n->oy;
            pos.z = n->z + n->oz;
            g.func_020339bc(&pos, 0, 0);
            if (g.unk_30 != 0) {
                if (pos.y <= g.unk_3c) {
                    pos.y = g.unk_3c;
                    if (p1 != -1) Effect_StartOneShot(p1, 100, &pos, 0, 0, (void *)p2);
                    if (p3 != -1) Effect_StartOneShot(p3, 100, &pos, 0, 0, (void *)s0);
                    n->unk_26 = n->unk_24;
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
                n->unk_26 = n->unk_24;
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
    Unk_02093998_Node *n;
    n = unk_08;
    v.x = gVec3Zero.x;
    v.y = gVec3Zero.y;
    v.z = gVec3Zero.z;
    result = FALSE;
    if (n) {
        result = TRUE;
        for (; n;) {
            Unk_0203398c o;
            v.x = n->unk_08 + n->unk_38;
            v.y = n->unk_0c + n->unk_3c;
            v.z = n->unk_10 + n->unk_40;
            o.func_020339bc(&v, 0, 0);
            if (o.unk_30 != 0) {
                s32 h = _ZN12Unk_0203389c13func_020338e8Ev(&o);
                if (v.y <= h) {
                    v.y = h;
                    if (id1 != -1) {
                        Effect_StartOneShot(id1, 0x64, &v, 0, 0, d1);
                    }
                    if (id2 != -1) {
                        Effect_StartOneShot(id2, 0x64, &v, 0, 0, d2);
                    }
                    n->unk_26 = n->unk_24;
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
                n->unk_26 = n->unk_24;
            }
            n = n->unk_00;
        }
    }
    return result;
}

s32 EffectEmitterEntry::updateLanding(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{ using namespace R6;
    Unk_02093914_Id id = unk_04;
    BOOL r;
    Unk_02093914_Ent *e;
    e = &gEffectManager[id.b[0]];
    r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e == -1) {
            if (unk_0c->unk_0c > 0) {
                e->unk_0e = 0;
            }
            r = TRUE;
        }
        if (e->unk_0e == 0) {
            r = Effect_SpawnParticleLandings(unk_0c, id1, d1, id2, d2, id3, d3, id4, d4);
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
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(Unk_021d0830 *)&gEffectManager[32]);
    Unk_020932bc_V32 *p = &self->unk_04;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &self->unk_10;
    q->x = 0x1000;
    q->y = 0x1000;
    q->z = 0x1000;
    Unk_020932bc_V16 *r = &self->unk_1c;
    r->x = 0;
    r->y = 0;
    r->z = 0;
}
}

namespace R6 {
extern "C" s32 Effect_StartModel(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn)
{
    Unk_0209389c_Fn f = fn;
    if (f == 0) {
        f = EffectModel_InitDefault;
    }
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), -1, a, b, c, d, -1);
    func_0208fb00(kind, f);
    return 1;
}
}

namespace R6 {
extern "C" s32 Effect_CreateKind00(s32 a, void *b, u16 *c, s32 d)
{
    Unk_0203398c o;
    s32 t, result, kind;
    const void *p;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    p = data_020e1480;
    result = 3;
    kind = 2;
    if (Unk_020935e8_IsOne(*data_020e416c)) {
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
        } else if (func_020b50bc() != 0) {
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
    Unk_021d0830 *const g = &(*(Unk_021d0830 *)&gEffectManager[32]);
    Unk_02093914_Id id = unk_04;
    Unk_02093748_Vec v;
    EffectSplEmitter *p;
    v.x = 0;
    v.y = 0xb50;
    v.z = 0xb50;
    p = unk_0c;
    p->unk_20 = g->x + p->unk_18->unk_00->pos.x;
    p->unk_24 = g->y + p->unk_18->unk_00->pos.y;
    p->unk_28 = g->z + p->unk_18->unk_00->pos.z;
    func_0208fe0c(unk_0c);
    func_020e93a0(&v, g->ang);
    s32 ty = v.y;
    s32 tz = v.z;
    p = unk_0c;
    s32 tx = v.x;
    p->unk_3c.Set(tx, ty, tz);
    MI_CpuCopy8(g, &gEffectManager[id.b[0]], 0x1c);
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
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (Unk_020935e8_IsOne(*data_020e416c)) {
        if (t == 9 || t == 3) {
            result = Effect_StartOneShot(0x19, a, b, c, d, data_020e14b4);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x1b, b, c, data_020e14d4) != 0) {
            result = 2;
        }
    } else if (t == 3 && func_020b50bc() != 0) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x1c, b, c, data_020e14ec) != 0) {
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
    Unk_021d0830 *const g = &(*(Unk_021d0830 *)&gEffectManager[32]);
    s32 ang = (s16)(g->ang + 0x8000);
    Unk_02093748_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    unk_20 = g->x + unk_18->unk_00->pos.x;
    unk_24 = g->y + unk_18->unk_00->pos.y;
    unk_28 = g->z + unk_18->unk_00->pos.z;
    unk_5c = g->y + 0x333;
    func_020e944c(&v, 0xffffe000);
    func_020e93a0(&v, ang);
    s32 ty = v.y;
    s32 tz = v.z;
    s32 tx = v.x;
    unk_3c.Set(tx, ty, tz);
    func_0208fe0c(this);
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
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
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
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
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
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
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
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
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
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (Weather_GetFallingPrecip() == 1) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, d, -1);
        if (func_0208fb20(0x36, b, c, data_020e1594) != 0) {
            result = 2;
        }
    } else if (func_020b50bc() != 0 && t == 3) {
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x35, b, c, data_020e15e4) != 0) {
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
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(Unk_021d0830 *)&gEffectManager[32]);
    Unk_020932bc_V32 *p = &unk_04;
    p->x = g->x;
    p->y = g->y;
    p->z = g->z;
    Unk_020932bc_V32 *q = &unk_10;
    q->x = s;
    q->y = s;
    q->z = s;
    Unk_020932bc_V16 *r = &unk_1c;
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
extern "C" s32 Effect_StartWaterColumn(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn)
{
    Unk_02093748_Vec *v = (Unk_02093748_Vec *)b;
    u8 *const g = (u8 *)gEffectManager;
    Unk_0203398c o;
    s32 result;
    o.func_020339bc(v, 0, 0);
    result = 3;
    if (o.unk_30 != 0) {
        v->y = o.unk_3c;
    }
    if (Effect_StartOneShot(0x4a, a, v, c, d, (void *)f) < 3) {
        Effect_StartModel(2, a, v, c, d, fn);
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&gEffectManager[32]), *(u16 *)(g + 0x39c), a, v, c, d, -1);
        if (func_0208fb20(0x45, v, c, e) != 0) {
            result = 2;
        }
    }
    _ZN10EffectSlot5clearEv(&(*(Unk_021d0830 *)&gEffectManager[32]));
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
        if (func_0208fb20(0x5e, b, c, data_020e15ec) != 0) r = 2; 
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
        if (func_0208fb20(0x5e, b, c, data_020e14fc) != 0) r = 2; 
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
        if (func_0208fb20(0x5e, b, c, data_020e15dc) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 EffectKind0E_InitEmitter0(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    Unk_02092da4_B *b;
    Unk_02092e98_Vec *const g = &(*(Unk_02092e98_Vec *)&gEffectManager[32]);
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    b = p->unk_0c;
    b->unk_20 = g->x + b->unk_18->unk_00->unk_04;
    b->unk_24 = g->y + b->unk_18->unk_00->unk_08;
    b->unk_28 = g->z + b->unk_18->unk_00->unk_0c;
    func_0208fe0c(p->unk_0c);
    pos.x = g->x;
    pos.y = g->y;
    pos.z = g->z;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&o, &pos, 0, 0);
    if (o.unk_30 != 0) {
        Unk_02092e98_Vec *pv = &o.unk_24;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        if (func_020e94f8(&v) != 0) {
            s32 vy = v.y;
            s32 vz = v.z;
            Unk_02092da4_B *b2 = p->unk_0c;
            b2->unk_3c = v.x;
            b2->unk_3e = vy;
            b2->unk_40 = vz;
        }
    }
    MI_CpuCopy8(g, gEffectManager + id.b[0], 0x1c);
    func_02033988(&o);
}
}

namespace R5 {
extern "C" s32 EffectKind0E_UpdateEmitter0(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = gEffectManager + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->unk_14 != m1 && r->unk_0e != 0) {
        Unk_02092da4_B *b = p->unk_0c;
        b->unk_20 = r->unk_00 + b->unk_18->unk_00->unk_04;
        b->unk_24 = r->unk_04 + b->unk_18->unk_00->unk_08;
        b->unk_28 = r->unk_08 + b->unk_18->unk_00->unk_0c;
        pos.x = r->unk_00;
        pos.y = r->unk_04;
        pos.z = r->unk_08;
        _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&o, &pos, 0, 0);
        if (o.unk_30 != 0) {
            Unk_02092e98_Vec *pv = &o.unk_24;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e94f8(&v) != 0) {
                s32 vy = v.y;
                s32 vz = v.z;
                Unk_02092da4_B *b2 = p->unk_0c;
                b2->unk_3c = v.x;
                b2->unk_3e = vy;
                b2->unk_40 = vz;
            }
        }
        if (r->unk_0e > 0) r->unk_0e--;
        s = 1;
        func_02033988(&o);
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
    Unk_02092e98_Bytes id;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = gEffectManager + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->unk_14 != m1 && r->unk_0e != 0) {
        Unk_02092da4_B *b = p->unk_0c;
        b->unk_20 = r->unk_00 + b->unk_18->unk_00->unk_04;
        b->unk_24 = r->unk_04 + b->unk_18->unk_00->unk_08;
        b->unk_28 = r->unk_08 + b->unk_18->unk_00->unk_0c;
        Effect_SpawnParticleLandings(p->unk_0c, 0x5f, data_020e16d4, m1, 0, m1, 0, m1, 0);
        if (r->unk_0e > 0) r->unk_0e--;
        s = 1;
    }
    if (s == 0) {
        p->unk_0c->unk_1c |= 2;
        Unk_02092da4_B *b = p->unk_0c;
        if (b->unk_0c > 0) s = Effect_SpawnParticleLandings(b, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
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
        if (func_0208fb20(0x5e, b, c, data_020e1584) != 0) r = 2; 
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
        if (func_0208fb20(0x75, b, c, data_020e157c) != 0) r = 2; 
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
extern "C" void EffectKind14_InitEmitter0A(Unk_02092830 *p) { EffectCb_InitTracked(p); p->unk_0c->unk_54 = 0x1333; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind14(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)gEffectManager; 
    s32 r = 3; 
    s32 t = Effect_StartOneShot(0x48, a, b, c, d, data_020e1614); 
    if (t < 3) { 
        _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&gEffectManager[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x75, b, c, data_020e15b4) != 0) r = 2; 
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
        if (func_0208fb20(0x75, b, c, data_020e151c) != 0) r = 2; 
    } 
    _ZN10EffectSlot5clearEv(&(*(Unk_02092e98_Vec *)&gEffectManager[32])); 
    return r; 
}
}

namespace R5 {
extern "C" void EffectKind16_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->unk_0c->unk_50 = 0x800; }
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
extern "C" void EffectKind17_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->unk_0c->unk_50 = 0x99a; }
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
extern "C" void EffectKind19_InitEmitter0B(Unk_02092830 *p) { EffectCb_InitTracked(p); p->unk_0c->unk_50 = 0xc00; }
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
extern "C" void EffectKind1A_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0x4cd; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1A(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e1534); }
}

namespace R5 {
extern "C" void EffectKind1B_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0x666; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1B(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e153c); }
}

namespace R5 {
extern "C" void EffectKind1C_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0x800; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1C(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e15ac); }
}

namespace R5 {
extern "C" void EffectKind1D_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0x99a; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1D(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e154c); }
}

namespace R5 {
extern "C" void EffectKind1E_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0xb33; }
}

namespace R5 {
extern "C" s32 Effect_CreateKind1E(s32 a, s32 b, s32 c, s32 d) { return Effect_StartTracked(0x73, a, b, c, d, data_020e14e4); }
}

namespace R5 {
extern "C" void EffectKind1F_InitEmitter0(Unk_02092830 *p) { EffectCb_InitTrackedOffset(p, 0, 0); p->unk_0c->unk_54 = 0xccd; }
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    r = 3;
    if (Unk_02092770_IsOne(data_020e416c)) {
        if (t == 9 || t == 3) {
            r = Effect_StartOneShot(0x4b, a, b, c, d, 0);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        r = Effect_StartOneShot(0x4d, a, b, c, d, 0);
    } else if (t == 3 && func_020b50bc()) {
        r = Effect_StartOneShot(0x4e, a, b, c, d, 0);
    } else {
        r = Effect_StartOneShot(t == 0x13 ? 0x4c : 0x4b, a, b, c, d, 0);
    }
    func_02033988(buf);
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    s32 id;
    if (buf[13] == 0x13) {
        id = 0x6f;
    } else {
        id = 0x6e;
    }
    s32 res = Effect_StartOneShot(id, a, b, c, d, data_020e14c4);
    func_02033988(buf);
    return res;
}
}

namespace R4 {
extern "C" s32 EffectKind24_InitEmitter0(void *a) {
    return EffectCb_InitOneShotOffset(a, 0, data_020d0348);
}
}

namespace R4 {
extern "C" void EffectKind24_InitModel(Unk_020926d4_Obj *o) {
    Unk_02092388_Data *const d = &(*(Unk_02092388_Data *)&gEffectManager[32]);
    Unk_02092388_Vec *pv = &o->unk_04;
    pv->x = d->pos.x;
    pv->y = d->pos.y;
    pv->z = d->pos.z;
    Unk_02092388_Vec *ps = &o->unk_10;
    ps->x = 0x1000;
    ps->y = 0x1000;
    ps->z = 0x1000;
    o->unk_1c = 0;
    o->unk_1e = d->ang;
    o->unk_20 = 0;
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
        for (Unk_02092388_Node *n = o->unk_0c->unk_08; n != 0; n = n->unk_00) {
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
    Unk_02092528_Idx idx;
    Unk_02092388_Vec vec;
    idx = *(Unk_02092528_Idx *)o->unk_04;
    Unk_02092528_Entry *e = gEffectManager + idx.b[0];
    r = 0;
    if (e->unk_14 != -1 && e->cnt != 0) {
        vec.x = r;
        vec.y = r;
        vec.z = 0x1000;
        Unk_02092388_Obj *in = o->unk_0c;
        in->unk_20 = e->x + in->unk_18->unk_00->unk_04;
        in->unk_24 = e->y + in->unk_18->unk_00->unk_08;
        in->unk_28 = e->z + in->unk_18->unk_00->unk_0c;
        func_020e93a0(&vec, e->ang);
        s32 ty = vec.y;
        s32 tz = vec.z;
        Unk_02092388_Obj *p = o->unk_0c;
        s32 tx = vec.x;
        p->unk_3c = tx;
        p->unk_3e = ty;
        p->unk_40 = tz;
        _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(o->unk_0c, 0x71, data_020e16d4, -1, r, 0x71, data_020e16d4, 0x72, data_020e16d4);
        if (e->cnt > 0) {
            e->cnt = e->cnt - 1;
        }
        r = 1;
    }
    if (r == 0) {
        o->unk_0c->unk_1c |= 2;
        if (o->unk_0c->unk_0c > 0) {
            r = _ZN16EffectSplEmitter19spawnLandingEffectsEiPviS0_iS0_iS0_(o->unk_0c, 0x71, data_020e16d4, -1, 0, 0x71, data_020e16d4, 0x72, data_020e16d4);
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = Effect_StartOneShot(0x55, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R4 {
extern "C" s32 Effect_CreateKind28(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = Effect_StartOneShot(0x56, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R4 {
extern "C" void EffectCb_AlignFirstParticle(Unk_02092388_Obj *o, s32 flag) {
    if (flag == 1) {
        Unk_02092388_Node *n = o->unk_08;
        if (n != 0) {
            n->unk_20 = func_020e7b98(o->unk_3c, o->unk_40);
            o->unk_78 = 0;
        }
    }
}
}

namespace R4 {
extern "C" void EffectCb_PlaceRotatedOffset(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang) {
    Unk_02092388_Data *const d = &(*(Unk_02092388_Data *)&gEffectManager[32]);
    s16 a = (s16)(*(volatile s16 *)&d->ang + ang);
    Unk_02092388_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_020e93a0(&t, *(volatile s16 *)&d->ang);
    VEC_Add(&t, &d->pos, &t);
    s32 idx = ((u16)a >> 4) * 2;
    o->unk_20 = t.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = t.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = t.z + o->unk_18->unk_00->unk_0c;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
    o->unk_78 = (void *)EffectCb_AlignFirstParticle;
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    s32 r = -1;
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        r = e;
    }
    if (r != -1) {
        s32 res = Effect_StartOneShot(e, a, b, c, d, f);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
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
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092388_Data *)&gEffectManager[32]), -1, a, b, c, d, -1);
    if (func_0208fc88(0x76, b, c, data_020e14c0) && func_0208fc88(0x54, b, c, sEffectDefaultOneShotCbs)) {
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
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092388_Data *)&gEffectManager[32]), -1, a, b, c, d, -1);
    if (func_0208fc88(e, b, c, data_020e14c0) != 0) {
        for (s32 i = 0; i < 3; i++) {
            if (func_0208fc88(0x54, b, c, data_020e15fc + i * 4) == 0) {
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
    Unk_02091fa4_Color col[4];
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
    o->unk_0c->unk_68 = a;
    o->unk_0c->unk_4c = b;
    o->unk_0c->unk_50 = c;
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
    o->unk_0c->unk_69 = 0;
    o->unk_0c->unk_4c = 0x3d;
    o->unk_0c->unk_50 = 0x466;
}
}

namespace R3 {
extern "C" s32 EffectKind35_UpdateRamp(Unk_02091404_Arg *p, s32 a, s32 b, s32 c, s32 d0, s16 e1, s16 e2, s16 e3, s32 d4, s16 e5, s16 e6, s16 e7)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &gEffectManager[i.b[0]];
    Unk_02091404_V v2;
    BOOL ok;
    v2.x = data_020d02c4.x;
    v2.y = data_020d02c4.y;
    v2.z = data_020d02c4.z;
    ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        func_020e93a0(&v2, r->unk_0c);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->unk_0c;
        o->unk_3c = v2.x;
        o->unk_3e = vy;
        o->unk_40 = vz;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_68 = 5;
            p->unk_0c->unk_4c = d0;
            p->unk_0c->unk_50 = d4;
        } else if (t < -1) {
            u16 x8;
            s16 b16, c16;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
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
            p->unk_0c->unk_68 = x8;
            p->unk_0c->unk_4c = b16;
            p->unk_0c->unk_50 = c16;
        } else {
            p->unk_0c->unk_68 = 5;
            p->unk_0c->unk_4c = d0;
            p->unk_0c->unk_50 = d4;
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
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &gEffectManager[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        Unk_02091404_V v2;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        v2.x = data_020d02c4.x;
        v2.y = data_020d02c4.y;
        v2.z = data_020d02c4.z;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        func_020e93a0(&v2, r->unk_0c);
        s32 vy = v2.y;
        s32 vz = v2.z;
        o = p->unk_0c;
        o->unk_3c = v2.x;
        o->unk_3e = vy;
        o->unk_40 = vz;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_54 = 0;
            p->unk_0c->unk_4c = 0x3d;
            p->unk_0c->unk_50 = 0x466;
        } else if (t < -1) {
            u8 a8;
            s16 b16, c16;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
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
            p->unk_0c->unk_69 = a8;
            p->unk_0c->unk_4c = b16;
            p->unk_0c->unk_50 = c16;
        } else {
            p->unk_0c->unk_69 = 0;
            p->unk_0c->unk_4c = 0x3d;
            p->unk_0c->unk_50 = 0x466;
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
    Unk_02091404_Ext *e = &(*(Unk_02091404_Ext *)&gEffectManager[32]);
    s32 r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7e, b, c, data_020e1734) != 0) {
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
    p->unk_0c->unk_68 = 1;
}
}

namespace R3 {
extern "C" s32 EffectKind36_UpdateEmitter2(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &gEffectManager[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        s32 t = ((volatile Unk_02091404_Rec *)r)->unk_0e;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        if (t > 0) {
            r->unk_0e = r->unk_0e - 1;
            p->unk_0c->unk_68 = 5;
        } else if (t < -1) {
            u16 val;
            r->unk_0e = r->unk_0e + 1;
            s32 q = r->unk_0e;
            if (q <= -0x29) {
                val = 1;
            } else {
                val = ((q + 0x28) * 0x19a >> 12) + 1;
            }
            p->unk_0c->unk_68 = val;
        } else {
            p->unk_0c->unk_68 = 5;
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
    Unk_02091404_Ext *e = &(*(Unk_02091404_Ext *)&gEffectManager[32]);
    s32 r = 3;
    _ZN10EffectSlot3setEijP16Unk_020904f0_VecPsS2_s(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7f, b, c, data_020e1784) != 0) {
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
        Unk_02091404_Node *n = o->unk_08;
        if (n != NULL) {
            n->unk_20 = func_020e7b98(o->unk_3c, o->unk_40);
            o->unk_78 = NULL;
        }
    }
}
}

namespace R3 {
extern "C" void EffectKind37_InitEmitter0(Unk_02091404_Obj *p)
{
    Unk_02091404_Ext *const e = &(*(Unk_02091404_Ext *)&gEffectManager[32]);
    u32 ang = (u16)e->rec.unk_0c;
    p->unk_20 = e->rec.x + (*p->unk_18)->unk_04;
    p->unk_24 = e->rec.y + (*p->unk_18)->unk_08;
    p->unk_28 = e->rec.z + (*p->unk_18)->unk_0c;
    s32 idx = ((s32)ang >> 4) * 2;
    p->unk_3c = data_02135f44[idx];
    p->unk_3e = 0;
    p->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(p);
    p->unk_78 = EffectCb_AlignFirstParticle2;
}
}

namespace R3 {
extern "C" s32 Effect_CreateKind37(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 k;
    s32 id;
    s32 r;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (func_020b50bc() != 0 && k == 3) {
        id = 0x88;
    } else if (k == 0x13) {
        id = 0x87;
    }
    if (id != -1) {
        r = Effect_StartOneShot(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    id = -1;
    if (func_020b50bc() != 0 && k == 3) {
        id = 0x8a;
    } else if (k == 0x13) {
        id = 0x89;
    }
    if (id != -1) {
        r = Effect_StartOneShot(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
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
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    result = 3;
    if (k == 0x16 || Weather_GetFallingPrecip() == 1) {
        if (Effect_StartTracked(0x85, a, b, c, d, data_020e155c) == 0) {
            result = 2;
        }
    } else if (k == 3 && func_020b50bc() != 0) {
        if (Effect_StartTracked(0x86, a, b, c, d, data_020e1554) == 0) {
            result = 2;
        }
    } else if (k == 0x13) {
        result = Effect_StartOneShot(0x84, a, b, c, d, NULL);
    } else {
        result = Effect_StartOneShot(0x83, a, b, c, d, NULL);
    }
    func_02033988(buf);
    return result;
}
}

namespace R3 {
extern "C" s32 EffectKind3A_InitEmitter0(Unk_02091404_Arg *p)
{
    Unk_02091404_Ext *const e = &(*(Unk_02091404_Ext *)&gEffectManager[32]);
    Unk_02091404_Idx i = p->idx;
    volatile Unk_02091404_V v;
    s32 t = e->rec.x;
    v.x = t;
    v.y = e->rec.y;
    v.z = e->rec.z;
    Unk_02091404_Obj *o = p->unk_0c;
    o->unk_20 = t + (*o->unk_18)->unk_04;
    o->unk_24 = v.y + (*o->unk_18)->unk_08;
    o->unk_28 = v.z + (*o->unk_18)->unk_0c;
    func_0208fe0c(p->unk_0c);
    MI_CpuCopy8(e, &gEffectManager[i.b[0]], 0x1c);
}
}

namespace R3 {
extern "C" s32 EffectKind3A_UpdateEmitter0(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &gEffectManager[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        volatile Unk_02091404_V v;
        s32 t0 = r->x;
        v.x = t0;
        v.y = r->y;
        v.z = r->z;
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = t0 + (*o->unk_18)->unk_04;
        o->unk_24 = v.y + (*o->unk_18)->unk_08;
        o->unk_28 = v.z + (*o->unk_18)->unk_0c;
        if (r->unk_0e > 0) {
            r->unk_0e = r->unk_0e - 1;
        }
        p->unk_0c->unk_54 = r->unk_10;
        Unk_02091404_Node *n;
        for (n = p->unk_0c->unk_08; n != NULL; n = n->next) {
            n->unk_30 = r->unk_10;
        }
        ok = TRUE;
    }
    if (!ok) {
        Unk_02091404_Node *n;
        for (n = p->unk_0c->unk_08; n != NULL; n = n->next) {
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
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &gEffectManager[i.b[0]];
    BOOL ok = FALSE;
    if (r->unk_14 != -1 && r->unk_0e != 0) {
        Unk_02091404_Obj *o = p->unk_0c;
        o->unk_20 = r->x + (*o->unk_18)->unk_04;
        o->unk_24 = r->y + (*o->unk_18)->unk_08;
        o->unk_28 = r->z + (*o->unk_18)->unk_0c;
        if (r->unk_0e > 0) {
            p->unk_0c->unk_69 = (r->unk_0e * 0x2955) >> 12;
            r->unk_0e = r->unk_0e - 1;
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
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    s32 a, b, c;
    s32 f = g->unk_10;
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
    o->unk_20 = g->x + (*o->unk_18)->unk_04;
    o->unk_24 = g->y + (*o->unk_18)->unk_08;
    o->unk_28 = g->z + (*o->unk_18)->unk_0c;
    func_0208fe0c(o);
}
}

namespace R2 {
extern "C" s32 EffectKind3E_InitEmitter0A(Unk_02090bd8_Obj *o)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    s32 f = g->unk_10;
    Unk_02090bd8_V v;
    v.unk_00 = g->x;
    v.unk_04 = g->y;
    v.unk_08 = g->z;
    s32 t = FX_Div(f - 0xc00, 0xc00);
    s32 a = (s16)((s16)func_01ffcb0c(0x4cd, t) + 0xb33);
    s32 c = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x400);
    s32 b = (s16)((s16)func_01ffcb0c(0x19a, t) + 0x333);
    o->unk_44 = a;
    o->unk_4c = b;
    o->unk_54 = c;
    o->unk_20 = v.unk_00 + (*o->unk_18)->unk_04;
    o->unk_24 = v.unk_04 + (*o->unk_18)->unk_08;
    o->unk_28 = v.unk_08 + (*o->unk_18)->unk_0c;
    o->unk_5c = 0x99a;
    func_0208fe0c(o);
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
    s32 f = (*(Unk_02090a80_Rec *)&gEffectManager[32]).unk_10;
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
    s32 u = (s16)((s16)func_01ffcb0c(0x1e66, (*(Unk_02090a80_Rec *)&gEffectManager[32]).unk_10) + 0xb33);
    EffectCb_InitOneShotSetUnk54(p, u);
}
}

namespace R2 {
extern "C" void EffectKind3F_InitModel(s32 p)
{
    s32 t = func_01ffcb0c(0x2000, (*(Unk_02090a80_Rec *)&gEffectManager[32]).unk_10) + 0x99a;
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
extern "C" s32 EffectKind4E_InitEmitter0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    Unk_02090a80_Idx i = p->idx;
    EffectCb_InitTrackedOffset(p, data_020e183c[g->unk_10], 0);
    MI_CpuCopy8(g, &gEffectManager[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" s32 EffectKind4E_InitEmitter1(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    Unk_02090a80_Idx i = p->idx;
    EffectCb_InitTrackedOffset(p, data_020e18a8[g->unk_10], 0);
    MI_CpuCopy8(g, &gEffectManager[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" void EffectKind4E_UpdateEmitter0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &gEffectManager[i.b[0]];
    EffectCb_FollowTrackedOffset(p, data_020e183c[r->unk_10], 0);
}
}

namespace R2 {
extern "C" void EffectKind4E_UpdateEmitter1(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &gEffectManager[i.b[0]];
    EffectCb_FollowTrackedOffset(p, data_020e18a8[r->unk_10], 0);
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
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    v.unk_00 = g->x;
    v.unk_04 = g->y;
    v.unk_08 = g->z;
    v.unk_04 = 0;
    o->unk_20 = v.unk_00 + (*o->unk_18)->unk_04;
    o->unk_24 = v.unk_04 + (*o->unk_18)->unk_08;
    o->unk_28 = v.unk_08 + (*o->unk_18)->unk_0c;
    func_0208fe0c(o);
}
}

namespace R2 {
extern "C" s32 Effect_CreateKind52(s32 a, s32 b, s32 c, void *d) { return Effect_StartOneShot(0x5d, a, b, c, d, data_020e14b8); }
}

namespace R2 {
extern "C" s32 Effect_CreateKind53(s32 a, s32 b, s32 c, void *d) { return Effect_StartTracked(0xd, a, b, c, d, data_020e167c); }
}

namespace R2 {
extern "C" void EffectKind54_InitEmitter0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    Unk_02090a80_Idx i = p->idx;
    EffectCb_InitTrackedOffset(p, g->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
    MI_CpuCopy8(g, &gEffectManager[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" void EffectKind54_InitEmitter1(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&gEffectManager[32]);
    Unk_02090a80_Idx i = p->idx;
    EffectCb_InitTrackedOffset(p, g->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
    MI_CpuCopy8(g, &gEffectManager[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" s32 EffectKind54_UpdateEmitter0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &gEffectManager[i.b[0]];
    EffectCb_FollowTrackedOffset(p, r->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
}
}

void EffectEmitterEntryView::updateKind54B() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    EffectSlot *e = &gEffectManager.unk_000[bytes.b[0]];
    EffectCb_FollowTrackedOffset(this, e->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
}

namespace R1 {
extern "C" s32 Effect_CreateKind54(s32 a, s32 b, s32 c, s32 d) {
    return Effect_StartTracked(0xe, a, b, c, d, data_020e162c);
}
}

namespace R1 {
extern "C" s32 Effect_CreateKind55(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    Unk_0209073c_Scratch *e = &(*(Unk_0209073c_Scratch *)&gEffectManager.unk_380);
    s32 r = 3;
    e->set(e->unk_1c, p0, p1, p2, p3, 0xf);
    if (func_0208fb20(0xf, (s32)p1, (s32)p2, sEffectDefaultTrackedCbs)) {
        r = 2;
    }
    e->clear();
    return r;
}
}

BOOL EffectEmitterEntryView::updateKind56Main() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    EffectSlot *e = &gEffectManager.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e == -1) {
            Unk_020908a8_B *b = unk_0c;
            b->unk_20 = e->unk_00 + (*b->unk_18)->x;
            b->unk_24 = e->unk_04 + (*b->unk_18)->y;
            b->unk_28 = e->unk_08 + (*b->unk_18)->z;
            r = TRUE;
        }
    }
    if (!r) {
        Unk_020907a0_Node *n = unk_0c->unk_08;
        for (; n; n = n->unk_00) {
            n->unk_26 = n->unk_24;
        }
        e->clear();
    }
    return r;
}

BOOL EffectEmitterEntryView::updateKind56Fade() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    EffectSlot *e = &gEffectManager.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e != 0) {
            Unk_020908a8_B *b = unk_0c;
            b->unk_20 = e->unk_00 + (*b->unk_18)->x;
            b->unk_24 = e->unk_04 + (*b->unk_18)->y;
            b->unk_28 = e->unk_08 + (*b->unk_18)->z;
            if (e->unk_0e > 0) {
                unk_0c->unk_69 = e->unk_0e * 6;
                e->unk_0e = e->unk_0e - 1;
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

BOOL EffectEmitterEntryView::updateKind59() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    EffectSlot *e = &gEffectManager.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e != 0) {
            Unk_020907a0_Node *n = unk_0c->unk_08;
            u32 t = 0x30d4;
            if (e->unk_0c < 0) {
                t = 0xffffcf2c;
            }
            u16 v = t;
            for (; n; n = n->unk_00) {
                n->unk_20 = v;
            }
            if (e->unk_0e > 0) {
                e->unk_0e--;
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
    Unk_0209073c_Scratch *e = &(*(Unk_0209073c_Scratch *)&gEffectManager.unk_380);
    e->set(e->unk_1c, p0, p1, p2, p3, 0x25);
    if (func_0208fb20(0x62, (s32)p1, (s32)p2, data_020e163c)) {
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
    unk_0e = -1;
    unk_10 = 0x1000;
    unk_14 = -1;
    unk_18 = 0x66;
}

void EffectSlot::set(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v) { using namespace R1;
    clear();
    unk_14 = id;
    unk_18 = type;
    unk_00 = pos->x;
    unk_04 = pos->y;
    unk_08 = pos->z;
    if (a) {
        unk_0c = *a;
    }
    if (b) {
        unk_10 = *b;
    }
    unk_0e = v;
}

void EffectManager::clearSlots() { using namespace R1;
    unk_380.clear();
    for (s32 i = 0; i < 0x20; i++) {
        unk_000[i].clear();
    }
}

EffectSlot *EffectManager::findSlot(s32 id, EffectSlot *e, s32 n) { using namespace R1;
    EffectSlot *r = NULL;
    s32 i = 0;
    for (; i < n; e++, i++) {
        if (id == e->unk_14) {
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
            EffectSlot *e = &unk_000[i];
            if (id == e->unk_14) {
                e->unk_00 = pos->x;
                e->unk_04 = pos->y;
                e->unk_08 = pos->z;
                if (a) {
                    e->unk_0c = *a;
                }
                if (b) {
                    e->unk_10 = *b;
                }
            }
        }
    }
}

void EffectManager::setLife(s32 id, s16 v) { using namespace R1;
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            if (unk_000[i].unk_14 == id) {
                unk_000[i].unk_0e = v;
            }
        }
    }
}

void EffectManager::reset() { using namespace R1;
    clearSlots();
    unk_39c = 0;
}

s32 EffectManager::create(u32 kind, s32 a, s32 b, s32 c, s32 d) { using namespace R1;
    s32 r = -1;
    if (kind < 0x66) {
        Unk_020e1914_Ent *ent = &sEffectKindTable[kind];
        if (ent->fn) {
            s32 ret = ent->fn(kind, a, b, c, d);
            if (ret == 0) {
                r = unk_39c;
                unk_39c = r + 1;
            } else if (ret == 2) {
                unk_39c = unk_39c + 1;
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
    EffectSlot *e = findSlot(id, unk_000, 0x20);
    u32 r = 0x66;
    if (e) {
        r = e->unk_18;
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
void _ZN22EffectEmitterEntryView12updateKind59Ev();
void _ZN22EffectEmitterEntryView16updateKind56FadeEv();
void _ZN22EffectEmitterEntryView16updateKind56MainEv();
void _ZN22EffectEmitterEntryView13updateKind54BEv();
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
void *data_020e162c[4] = {(void *)DT::EffectKind54_InitEmitter0, (void *)DT::EffectKind54_UpdateEmitter0, (void *)DT::EffectKind54_InitEmitter1, (void *)DT::_ZN22EffectEmitterEntryView13updateKind54BEv};
void *data_020e163c[4] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView12updateKind59Ev, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView12updateKind59Ev};
void *data_020e164c[4] = {(void *)DT::EffectKind3B_InitEmitter0, (void *)DT::EffectKind3B_UpdateEmitter0, (void *)DT::EffectKind3B_InitEmitter0, (void *)DT::EffectKind3B_UpdateEmitter0};
void *data_020e165c[4] = {(void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0, (void *)DT::EffectKind24_InitEmitter0};
void *data_020e166c[4] = {(void *)DT::EffectKind3D_InitEmitter0, (void *)DT::EffectKind3D_UpdateEmitter0, (void *)DT::EffectKind3D_InitEmitter0, (void *)DT::EffectKind3D_UpdateEmitter0};
void *data_020e167c[4] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_CountdownTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_CountdownTracked};
void *data_020e168c[6] = {(void *)DT::EffectKind41_InitEmitter0, (void *)DT::EffectKind41_UpdateEmitter0, (void *)DT::EffectKind41_InitEmitter1, (void *)DT::EffectKind41_UpdateEmitter1, (void *)DT::EffectKind41_InitEmitter2, (void *)DT::EffectKind41_UpdateEmitter2};
void *data_020e16a4[6] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind11_UpdateEmitter2};
void *data_020e16bc[6] = {(void *)DT::EffectKind4E_InitEmitter0, (void *)DT::EffectKind4E_UpdateEmitter0, (void *)DT::EffectKind4E_InitEmitter1, (void *)DT::EffectKind4E_UpdateEmitter1, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *data_020e16d4[8] = {(void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly, (void *)DT::EffectCb_TintOnly};
void *sEffectDefaultOneShotCbs[8] = {(void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot, (void *)DT::EffectCb_InitOneShot};
void *data_020e1714[8] = {(void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView16updateKind56MainEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView16updateKind56FadeEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView16updateKind56FadeEv, (void *)DT::EffectCb_InitTracked, (void *)DT::_ZN22EffectEmitterEntryView16updateKind56FadeEv};
void *data_020e1734[10] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectKind35_InitEmitter1, (void *)DT::EffectKind35_UpdateEmitter1, (void *)DT::EffectKind35_InitEmitter1, (void *)DT::EffectKind35_UpdateEmitter1, (void *)DT::EffectKind35_InitEmitter3, (void *)DT::EffectKind35_UpdateEmitter3, (void *)DT::EffectKind35_InitEmitter4, (void *)DT::EffectKind35_UpdateEmitter4};
void *data_020e175c[10] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectKind25_UpdateEmitter0};
void *data_020e1784[14] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectKind36_InitEmitter2, (void *)DT::EffectKind36_UpdateEmitter2, (void *)DT::EffectKind36_InitEmitter2, (void *)DT::EffectKind36_UpdateEmitter2, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *sEffectDefaultTrackedCbs[16] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
void *data_020e17fc[16] = {(void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked, (void *)DT::EffectCb_InitTracked, (void *)DT::EffectCb_FollowTracked};
s32 data_020e18a8[27] = {-3277, 410, 1434, -3809, -778, 451, -2908, -410, -164, -3154, 1229, 0, -2867, -1638, -1229, -4096, 287, 1966, -2458, 1229, 614, -3482, 614, 1434, -3154, 1229, 0};
s32 data_020e183c[27] = {819, -205, 3277, 2294, -1679, 2580, 1966, -778, 1679, 2458, 410, 2048, 2458, -2458, 778, 1679, -819, 3809, 1434, 614, 2048, 1638, 205, 3277, 2458, 410, 2048};
void *sEffectKindTable[204] = {(void *)DT::Effect_CreateKind00, 0, (void *)DT::Effect_CreateKind01, 0, (void *)DT::Effect_CreateKind02, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind03, 0, (void *)DT::Effect_CreateKind06, 0, (void *)DT::Effect_CreateKind07, 0, (void *)DT::Effect_CreateKind08, 0, (void *)DT::Effect_CreateKind09, 0, (void *)DT::Effect_CreateKind0A, 0, (void *)DT::Effect_CreateKind0B, 0, (void *)DT::Effect_CreateKind0C, 0, (void *)DT::Effect_CreateKind0D, 0, (void *)DT::Effect_CreateKind0E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind0F, 0, (void *)DT::Effect_CreateKind10, 0, (void *)DT::Effect_CreateKind11, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind12, 0, (void *)DT::Effect_CreateKind13, 0, (void *)DT::Effect_CreateKind14, 0, (void *)DT::Effect_CreateKind15, 0, (void *)DT::Effect_CreateKind16, 0, (void *)DT::Effect_CreateKind17, 0, (void *)DT::Effect_CreateKind14, 0, (void *)DT::Effect_CreateKind19, 0, (void *)DT::Effect_CreateKind1A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1D, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1F, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind1B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind21, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind22, 0, (void *)DT::Effect_CreateKind23, 0, (void *)DT::Effect_CreateKind24, 0, (void *)DT::Effect_CreateKind25, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind26, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind27, 0, (void *)DT::Effect_CreateKind28, 0, (void *)DT::Effect_CreateKind29, 0, (void *)DT::Effect_CreateKind2A, 0, (void *)DT::Effect_CreateKind2B, 0, (void *)DT::Effect_CreateKind2C, 0, (void *)DT::Effect_CreateKind2D, 0, (void *)DT::Effect_CreateKind2E, 0, (void *)DT::Effect_CreateKind2F, 0, (void *)DT::Effect_CreateKind30, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind31, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind32, 0, (void *)DT::Effect_CreateKind33, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind34, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind35, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind36, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind37, 0, (void *)DT::Effect_CreateKind38, 0, (void *)DT::Effect_CreateKind39, 0, (void *)DT::Effect_CreateKind3A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind3D, (void *)DT::Effect_EndKind3D, (void *)DT::Effect_CreateKind3E, 0, (void *)DT::Effect_CreateKind3F, 0, (void *)DT::Effect_CreateKind40, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind41, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind42, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind43, 0, (void *)DT::Effect_CreateKind44, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind45, 0, (void *)DT::Effect_CreateKind46, 0, (void *)DT::Effect_CreateKind47, 0, (void *)DT::Effect_CreateKind48, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind49, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4A, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4B, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4C, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4D, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4E, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind4F, 0, (void *)DT::Effect_CreateKind50, 0, (void *)DT::Effect_CreateKind51, 0, (void *)DT::Effect_CreateKind52, 0, (void *)DT::Effect_CreateKind53, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind54, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind55, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind56, (void *)DT::Effect_EndKind56, (void *)DT::Effect_CreateKind57, 0, (void *)DT::Effect_CreateKind58, 0, (void *)DT::Effect_CreateKind59, 0, (void *)DT::Effect_CreateKind5A, 0, (void *)DT::Effect_CreateKind5B, 0, (void *)DT::Effect_CreateKind5C, 0, (void *)DT::Effect_CreateKind5D, 0, (void *)DT::Effect_CreateKind5E, 0, (void *)DT::Effect_CreateKind5F, 0, (void *)DT::Effect_CreateKind60, 0, (void *)DT::Effect_CreateKind61, (void *)DT::Effect_EndDefault, (void *)DT::Effect_CreateKind62, 0, (void *)DT::Effect_CreateNone, 0, (void *)DT::Effect_CreateOneShotRes, 0, (void *)DT::Effect_CreateTrackedRes, (void *)DT::Effect_EndDefault};
EffectManager gEffectManager;

