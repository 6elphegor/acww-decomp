
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

// 0x1c-byte effect/slot entry (32 of them in Unk_021d04b0, plus one scratch entry at data_021d0830)
class Unk_02090538 {
public:
    void func_02090538();
    void func_020904f0(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v);

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

class Unk_021d04b0 {
public:
    void func_02090388(s32 id);
    u32 func_0209036c(s32 id);
    s32 func_020903b4(u32 kind, s32 a, s32 b, s32 c, s32 d);
    void func_0209040c();
    void func_02090424(s32 id, s16 v);
    void func_0209044c(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b);
    Unk_02090538 *func_020904a0(s32 id, Unk_02090538 *e, s32 n);
    void func_020904c4();

    /* 0x000 */ Unk_02090538 unk_000[32];
    /* 0x380 */ Unk_02090538 unk_380;
    /* 0x39c */ u16 unk_39c;
};

struct Unk_0209073c_Scratch : public Unk_02090538 {
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

class Unk_020907a0 {
public:
    BOOL func_020907a0();
    BOOL func_020908a8();
    BOOL func_02090934();
    void func_02090a30();

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
extern "C" s32 func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);
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

class Unk_0209355c {
public:
    s32 func_02093998(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    s32 func_02093aa8(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    void func_0209355c();

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

class Unk_020931a0 {
public:
    void func_020931a0();
    void func_02093284();
    void func_02093720();
    void func_020936f8();
    void func_02093748();
    s32 func_02093914(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);

    u8 pad_00[4];
    Unk_02093914_Id unk_04;
    u8 pad_08[4];
    Unk_0209355c *unk_0c;
};

class Unk_020932ac {
public:
    void func_020932bc(s32 s);

    u8 pad_00[4];
    Unk_020932bc_V32 unk_04;
    Unk_020932bc_V32 unk_10;
    Unk_020932bc_V16 unk_1c;
};

static inline BOOL Unk_020935e8_IsOne(u8 v)
{
    return v == 1 ? TRUE : FALSE;
}

// Effect entry (0x1c bytes), array data_021d04b0[32], scratch entry at data_021d0830
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
extern Unk_021d04b0 data_021d04b0;

extern Unk_0209073c_Scratch data_021d0830;

extern Unk_020e1914_Ent data_020e1914[];

extern void (*data_020e1918[])(s32);

extern u8 data_020e1464[];

extern u8 data_020e1490[];

extern u8 data_020e1564[];

extern u8 data_020e14c8[];

extern u8 data_020e162c[];

extern u8 data_020e163c[];

extern u8 data_020e1714[];

extern u8 data_020e17bc[];

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

s32 func_02093d54(s32, s32, s32, s32, s32, void *);

s32 func_02093bb4(s32, s32, s32, s32, s32, void *);

s32 func_0209389c(s32, s32, s32, s32, s32, void *);

s32 func_02093da4(s32, void *, void *);

s32 func_02093c28(void *, void *, void *);

s32 func_0208fb20(s32, s32, s32, void *);

void func_0208fa54(void *);

void *func_0209019c(u32 size);


}
}

namespace R2 {
extern "C" {
extern Unk_02090a80_Rec data_021d04b0[];

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

s32 func_02093c28(void *p, const char *a, const char *b);

s32 func_02093c94(void *p, const char *a, const char *b);

s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);

s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, void *d, const char *e);

s32 _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);

s32 func_020931e8(s32 a, s32 b, s32 c, void *p, const char *d, const char *e, void (*f)(s32));

s32 _ZN12Unk_020932ac13func_020932bcEi(s32 a, s32 b);

s32 func_02093e60(s32 a, s32 b);

s32 func_02093c1c(void *p);

s32 func_0208fe0c(void *p);

void func_02091140(s32 p);


}
}

namespace R3 {
extern "C" {
extern Unk_02091404_Rec data_021d04b0[];

extern Unk_02091404_Ext data_021d0830;

extern char data_020e166c[], data_020e164c[], data_020e156c[], data_020e1544[], data_020d0324[];

extern char data_020e155c[], data_020e1554[], data_020e16d4[], data_020d030c[], data_020e14a0[];

extern char data_020e1784[], data_020e1734[];

extern Unk_02091404_V data_020d02c4;

extern s16 data_02135f44[];

s32 _ZN12Unk_021d04b013func_02090424Eis(void *a, void *b, s32 c);

void _ZN12Unk_0209053813func_02090538Ev(void *r);

s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);

s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, s32 d, const char *e);

s32 func_02093c28(void *p, const char *a, const char *b);

s32 func_02093c94(void *p, const char *a, const char *b);

s32 _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(void *p, s32 a, const char *b, s32 c, const char *d, s32 e, const char *f, s32 g, s32 h);

s32 func_02093c1c(void *p);

s32 func_0208fe0c(void *p);

s32 func_0208fb20(s32 a, s32 b, s32 c, const char *d);

s32 _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void MI_CpuCopy8(void *, void *, u32);

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *buf, s32 b, s32 c, s32 d);

void func_02033988(void *buf);

s32 Weather_GetFallingPrecip(void);

s32 func_020b50bc(void);

void func_020e93a0(Unk_02091404_V *v, s16 a);

s32 func_020e7b98(s32 a, s32 b);

void func_020918f4(Unk_02091404_Obj *o, s32 k);


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

extern u8 data_020e16f4[];

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

extern Unk_02092528_Entry data_021d04b0[];

extern s16 data_02135f44[];

s32 func_02093c94(void *a, s32 b, void *c);

s32 func_02093c28(void *a, s32 b, void *c);

s32 func_02093da4(void *a, void *b, void *c);

s32 func_02093bb4(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 func_02093d54(s32 id, s32 a, s32 b, s32 c, s32 d, void *e);

s32 _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 func_0208fc88(s32 a, s32 b, s32 c, void *d);

s32 _ZN12Unk_0209355c13func_02093998EiPviS0_iS0_iS0_(Unk_02092388_Obj *o, s32 a, void *b, s32 c, s32 d, s32 e, void *f, s32 g, void *h);

s32 func_0209389c(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void _ZN12Unk_0209053813func_02090538Ev(void *e);

void func_0208fe0c(void *o);

s32 Weather_GetFallingPrecip();

s32 func_020b50bc();

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *buf, s32 pos, s32 a, s32 b);

void func_02033988(void *buf);

s32 Sky_GetLightColor(s32 a);

void func_02093f50(void *a);

s32 _s32_div_f(s32 a, s32 b);

void func_020e93a0(Unk_02092388_Vec *v, s16 a);

void VEC_Add(Unk_02092388_Vec *a, void *b, Unk_02092388_Vec *c);

s32 func_020e7b98(s32 a, s32 b);

void func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c);

s32 func_02092310(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);

void func_02092388(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang);

void func_0209241c(Unk_02092388_Obj *o, s32 flag);

s32 func_020920fc(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020926d4(Unk_020926d4_Obj *o);

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

extern Unk_02092da4_Rec data_021d04b0[];

s32 func_02093bb4(s32, s32, s32, s32, s32, void *);

s32 func_02093c94(void *, s32, s32);

s32 func_02093c1c(void *);

s32 func_02093e60(void *, s32);

s32 _ZN12Unk_020932ac13func_020932bcEi(void *, s32);

s32 func_02093f50(void *);

s32 func_02093d54(s32, s32, s32, s32, s32, void *);

s32 _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 func_0208fb20(s32, s32, s32, void *);

s32 _ZN12Unk_0209053813func_02090538Ev(void *);

s32 _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 func_02093aa8(void *, s32, void *, s32, s32, s32, s32, s32, s32);

s32 func_020931e8(s32, s32, s32, s32, void *, void *, void *);

void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *, void *, s32, s32);

void func_02033988(void *);

s32 func_020e94f8(void *);

void func_0208fe0c(void *);

void MI_CpuCopy8(void *, void *, u32);

extern "C" s32 func_02092a14(void *p);

extern "C" s32 func_02092a74(void *p);

extern "C" s32 func_02092ad4(void *p);


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

extern Unk_02093914_Ent data_021d04b0[];

extern Unk_02093748_Vec gVec3Zero;

s32 func_02093d54(s32 kind, s32 a, void *b, void *c, s32 d, void *data);

s32 func_02093da4(void *obj, const void *a, const void *b);

s32 _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(void *obj, s32 h, s32 a, void *b, void *c, s32 d, s32 e);

s32 func_0208fb20(s32 kind, void *b, void *c, void *data);

s32 func_0208fb00(s32 kind, Unk_0209389c_Fn fn);

s32 func_0208fc88(s32 kind, void *b, void *c, void *data);

s32 _ZN12Unk_0209053813func_02090538Ev(void *obj);

s32 Weather_GetFallingPrecip();

s32 func_020b50bc();

s32 func_0208fe0c(void *obj);

void func_02033988(void *o);

void func_020e944c(Unk_02093748_Vec *v, s32 a);

void func_020e93a0(Unk_02093748_Vec *v, s32 a);

void MI_CpuCopy8(void *src, void *dst, u32 n);

s32 func_0209389c(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn);

s32 func_020931e8(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn);

void func_020932ac(void *o);

void func_020938e0(void *o);

s32 func_02093aa8(void *o, s32 a, void *b, s32 c, void *d, s32 e, void *f, s32 g, void *h);
s32 _ZN12Unk_0203389c13func_020338e8Ev(void *p);
}
}

namespace R7 {
extern "C" {
extern Unk_02093c28_Entry data_021d04b0[];

extern Unk_02093bb4_Scratch data_021d0830;

extern Unk_02093aa8_Vec gVec3Zero;

extern u32 data_020e17bc[];

extern u32 data_020e16f4[];

extern s16 data_02135f44[];

s32 func_0208fb20(void *, s32, s32, void *);

s32 func_0208fc88(void *, s32, s32, void *);

s32 func_0208fe0c(void *);

s32 _ZN12Unk_021d04b013func_02090424Eis(void *, s32, s32);

s32 _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(void *, s32, s32, s32, s32, s32, s32);

s32 _ZN12Unk_0209053813func_02090538Ev(void *);

void func_020e93a0(void *, s32);

s32 func_020e94f8(void *);

void VEC_Add(void *, void *, void *);

s32 MI_CpuCopy8(const void *src, void *dst, u32 n);

s32 MI_CpuFill8(void *dst, u32 v, u32 n);

s32 memcmp(const void *, const void *, u32);

s32 func_02093c28(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 func_02093c94(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 func_02093d54(s32 a, s32 b, void *c, s32 d, s32 e, void *f);

void func_02093dc8(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);

s32 func_02093e88(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);

s32 func_02093efc(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);

s32 func_02093f50(Unk_02093dc8_Obj *o);


}
}

namespace R7 {
extern "C" s32 func_02093f84(void *o)
{
    return func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 func_02093f50(Unk_02093dc8_Obj *o)
{
    o->unk_20 = (*(Unk_02093bb4_Scratch *)&data_021d04b0[32]).e.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = (*(Unk_02093bb4_Scratch *)&data_021d04b0[32]).e.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = (*(Unk_02093bb4_Scratch *)&data_021d04b0[32]).e.z + o->unk_18->unk_00->unk_0c;
    return func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 func_02093efc(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
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
extern "C" s32 func_02093eec(Unk_02093dc8_Obj *o)
{
    return func_02093efc(o, (Unk_02093c28_Entry *)&(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]));
}
}

namespace R7 {
extern "C" s32 func_02093e88(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
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
extern "C" s32 func_02093e78(Unk_02093dc8_Obj *o)
{
    return func_02093e88(o, (Unk_02093c28_Entry *)&(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]));
}
}

namespace R7 {
extern "C" void func_02093e60(Unk_02093dc8_Obj *o, s32 x)
{
    func_02093f50(o);
    o->unk_54 = x;
}
}

namespace R7 {
extern "C" void func_02093dc8(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
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
extern "C" s32 func_02093da4(Unk_02093dc8_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    func_02093dc8(o, &(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]).e, a, b);
    func_0208fe0c(o);
}
}

namespace R7 {
extern "C" s32 func_02093d54(s32 p0, s32 p1, void *p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = data_020e16f4;
    r = 3;
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]), -1, p1, (s32)p2, p3, e, -1);
    if (func_0208fc88((void *)p0, (s32)p2, p3, t)) r = 1;
    return r;
}
}

namespace R7 {
extern "C" s32 func_02093d40(s32 x)
{
    return _ZN12Unk_021d04b013func_02090424Eis(data_021d04b0, x, 0);
}
}

namespace R7 {
extern "C" s32 func_02093ce8(Unk_02093c28_Obj *o)
{
    Unk_02093c28_Handle h = o->unk_04;
    Unk_02093c28_Entry *e = &data_021d04b0[h.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) _ZN12Unk_0209053813func_02090538Ev(e);
    return r;
}
}

namespace R7 {
extern "C" s32 func_02093c94(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093bb4_Scratch *const g = &(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]);
    Unk_02093c28_Handle h = o->unk_04;
    func_02093dc8(o->unk_0c, &g->e, a, b);
    func_0208fe0c(o->unk_0c);
    MI_CpuCopy8(g, &data_021d04b0[h.b[0]], 0x1c);
}
}

namespace R7 {
extern "C" s32 func_02093c28(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093c28_Handle h = o->unk_04;
    BOOL r;
    Unk_02093c28_Entry *e = &data_021d04b0[h.b[0]];
    r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        func_02093dc8(o->unk_0c, e, a, b);
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) _ZN12Unk_0209053813func_02090538Ev(e);
    return r;
}
}

namespace R7 {
extern "C" s32 func_02093c1c(Unk_02093c28_Obj *o)
{
    return func_02093c94(o, NULL, NULL);
}
}

namespace R7 {
extern "C" s32 func_02093c10(Unk_02093c28_Obj *o)
{
    return func_02093c28(o, NULL, NULL);
}
}

namespace R7 {
extern "C" s32 func_02093bb4(void *p0, s32 p1, s32 p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = data_020e17bc;
    r = 3;
    Unk_02093bb4_Scratch *const g = &(*(Unk_02093bb4_Scratch *)&data_021d04b0[32]);
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(g, g->unk_1c, p1, p2, p3, e, -1);
    if (func_0208fb20(p0, p2, p3, t)) r = 0;
    _ZN12Unk_0209053813func_02090538Ev(g);
    return r;
}
}

namespace R7 {
extern "C" s32 func_02093aa8(Unk_02093aa8_Owner *o, s32 p1, s32 p2, s32 p3, s32 s0, s32 p5, s32 s2, s32 p6, s32 s4)
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
                    if (p1 != -1) func_02093d54(p1, 100, &pos, 0, 0, (void *)p2);
                    if (p3 != -1) func_02093d54(p3, 100, &pos, 0, 0, (void *)s0);
                    n->unk_26 = n->unk_24;
                }
            } else if (pos.y <= 0) {
                if (p5 != -1) {
                    pos.y = 0;
                    func_02093d54(p5, 100, &pos, 0, 0, (void *)s2);
                }
                if (p6 != -1) {
                    pos.y = 0;
                    func_02093d54(p6, 100, &pos, 0, 0, (void *)s4);
                }
                n->unk_26 = n->unk_24;
            }
            n = n->next;
        }
    }
    return result;
}
}

s32 Unk_0209355c::func_02093998(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
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
                        func_02093d54(id1, 0x64, &v, 0, 0, d1);
                    }
                    if (id2 != -1) {
                        func_02093d54(id2, 0x64, &v, 0, 0, d2);
                    }
                    n->unk_26 = n->unk_24;
                }
            } else if (v.y <= 0) {
                if (id3 != -1) {
                    v.y = 0;
                    func_02093d54(id3, 0x64, &v, 0, 0, d3);
                }
                if (id4 != -1) {
                    v.y = 0;
                    func_02093d54(id4, 0x64, &v, 0, 0, d4);
                }
                n->unk_26 = n->unk_24;
            }
            n = n->unk_00;
        }
    }
    return result;
}

s32 Unk_020931a0::func_02093914(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4)
{ using namespace R6;
    Unk_02093914_Id id = unk_04;
    BOOL r;
    Unk_02093914_Ent *e;
    e = &data_021d04b0[id.b[0]];
    r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e == -1) {
            if (unk_0c->unk_0c > 0) {
                e->unk_0e = 0;
            }
            r = TRUE;
        }
        if (e->unk_0e == 0) {
            r = func_02093aa8(unk_0c, id1, d1, id2, d2, id3, d3, id4, d4);
        }
    }
    if (!r) {
        _ZN12Unk_0209053813func_02090538Ev(e);
    }
    return r;
}

namespace R6 {
extern "C" void func_020938e0(void *o)
{
    Unk_020932ac *self = (Unk_020932ac *)o;
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(Unk_021d0830 *)&data_021d04b0[32]);
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
extern "C" s32 func_0209389c(s32 kind, s32 a, void *b, void *c, s32 d, Unk_0209389c_Fn fn)
{
    Unk_0209389c_Fn f = fn;
    if (f == 0) {
        f = func_020938e0;
    }
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), -1, a, b, c, d, -1);
    func_0208fb00(kind, f);
    return 1;
}
}

namespace R6 {
extern "C" s32 func_020937dc(s32 a, void *b, u16 *c, s32 d)
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
            result = func_02093d54(2, a, b, c, d, (void *)p);
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
        result = func_02093d54(kind, a, b, c, d, (void *)p);
    }
    return result;
}
}

void Unk_020931a0::func_02093748()
{ using namespace R6;
    Unk_021d0830 *const g = &(*(Unk_021d0830 *)&data_021d04b0[32]);
    Unk_02093914_Id id = unk_04;
    Unk_02093748_Vec v;
    Unk_0209355c *p;
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
    MI_CpuCopy8(g, &data_021d04b0[id.b[0]], 0x1c);
}

void Unk_020931a0::func_02093720()
{ using namespace R6;
    func_02093914(0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}

void Unk_020931a0::func_020936f8()
{ using namespace R6;
    func_02093914(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

namespace R6 {
extern "C" s32 func_020935e8(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (Unk_020935e8_IsOne(*data_020e416c)) {
        if (t == 9 || t == 3) {
            result = func_02093d54(0x19, a, b, c, d, data_020e14b4);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
        if (func_0208fb20(0x1b, b, c, data_020e14d4) != 0) {
            result = 2;
        }
    } else if (t == 3 && func_020b50bc() != 0) {
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
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
        result = func_02093d54(kind, a, b, c, d, data_020e14b4);
    }
    return result;
}
}

void Unk_0209355c::func_0209355c()
{ using namespace R6;
    Unk_021d0830 *const g = &(*(Unk_021d0830 *)&data_021d04b0[32]);
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
extern "C" s32 func_02093534(s32 a, void *b, void *c, s32 d)
{
    return func_02093d54(0x29, a, b, c, d, data_020e1474);
}
}

namespace R6 {
extern "C" s32 func_0209350c(s32 a, void *b, void *c, s32 d)
{
    return func_02093d54(0x2a, a, b, c, d, data_020e150c);
}
}

namespace R6 {
extern "C" s32 func_020934c8(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x2d;
    } else {
        kind = 0x2b;
    }
    r = func_02093d54(kind, a, b, c, d, 0);
    return r;
}
}

namespace R6 {
extern "C" s32 func_020934b8(void *a)
{
    return func_02093da4(a, 0, data_020d0390);
}
}

namespace R6 {
extern "C" s32 func_020934a8(void *a)
{
    return func_02093da4(a, 0, data_020d0318);
}
}

namespace R6 {
extern "C" s32 func_02093460(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x2e;
    } else {
        kind = 0x2c;
    }
    r = func_02093d54(kind, a, b, c, d, data_020e15c4);
    return r;
}
}

namespace R6 {
extern "C" s32 func_0209341c(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x30;
    } else {
        kind = 0x2f;
    }
    r = func_02093d54(kind, a, b, c, d, 0);
    return r;
}
}

namespace R6 {
extern "C" s32 func_02093408(void *a)
{
    return func_02093da4(a, data_020d027c, data_020d02f4);
}
}

namespace R6 {
extern "C" s32 func_020933c0(s32 a, void *b, void *c, s32 d)
{
    Unk_0203398c o;
    s32 r, kind;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    if (o.unk_34 == 0x13) {
        kind = 0x32;
    } else {
        kind = 0x31;
    }
    r = func_02093d54(kind, a, b, c, d, data_020e1608);
    return r;
}
}

namespace R6 {
extern "C" s32 func_020932f0(s32 a, void *b, void *c, s32 d)
{
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 t, result;
    o.func_020339bc((Unk_02093748_Vec *)b, 0, 0);
    t = o.unk_34;
    result = 3;
    if (Weather_GetFallingPrecip() == 1) {
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), *(u16 *)(g + 0x39c), a, b, c, d, -1);
        if (func_0208fb20(0x36, b, c, data_020e1594) != 0) {
            result = 2;
        }
    } else if (func_020b50bc() != 0 && t == 3) {
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), *(u16 *)(g + 0x39c), a, b, c, 0, -1);
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
        result = func_02093d54(kind, a, b, c, d, 0);
    }
    return result;
}
}

void Unk_020932ac::func_020932bc(s32 s)
{ using namespace R6;
    Unk_02093748_Vec *g = (Unk_02093748_Vec *)&(*(Unk_021d0830 *)&data_021d04b0[32]);
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
extern "C" void func_020932ac(void *o)
{
    ((Unk_020932ac *)o)->func_020932bc(0x1000);
}
}

void Unk_020931a0::func_02093284()
{ using namespace R6;
    func_02093914(0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}

namespace R6 {
extern "C" s32 func_020931e8(s32 a, void *b, void *c, s32 d, void *e, s32 f, Unk_0209389c_Fn fn)
{
    Unk_02093748_Vec *v = (Unk_02093748_Vec *)b;
    u8 *const g = (u8 *)data_021d04b0;
    Unk_0203398c o;
    s32 result;
    o.func_020339bc(v, 0, 0);
    result = 3;
    if (o.unk_30 != 0) {
        v->y = o.unk_3c;
    }
    if (func_02093d54(0x4a, a, v, c, d, (void *)f) < 3) {
        func_0209389c(2, a, v, c, d, fn);
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_021d0830 *)&data_021d04b0[32]), *(u16 *)(g + 0x39c), a, v, c, d, -1);
        if (func_0208fb20(0x45, v, c, e) != 0) {
            result = 2;
        }
    }
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_021d0830 *)&data_021d04b0[32]));
    return result;
}
}

namespace R6 {
extern "C" void func_020931c4(s32 a, void *b, void *c, s32 d)
{
    func_020931e8(a, b, c, d, data_020e152c, 0, func_020932ac);
}
}

void Unk_020931a0::func_020931a0()
{ using namespace R6;
    func_02093914(0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
}

namespace R5 {
extern "C" s32 func_0209312c(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x37, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x5e, b, c, data_020e15ec) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_020930b8(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x38, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x5e, b, c, data_020e14fc) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_02093094(s32 a, s32 b, s32 c, s32 d) { return func_02093d54(0x3a, a, b, c, d, 0); }
}

namespace R5 {
extern "C" s32 func_02093020(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x3b, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x5e, b, c, data_020e15dc) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_02092f68(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    Unk_02092da4_B *b;
    Unk_02092e98_Vec *const g = &(*(Unk_02092e98_Vec *)&data_021d04b0[32]);
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
    MI_CpuCopy8(g, data_021d04b0 + id.b[0], 0x1c);
    func_02033988(&o);
}
}

namespace R5 {
extern "C" s32 func_02092e98(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = data_021d04b0 + id.b[0];
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
    if (s == 0) _ZN12Unk_0209053813func_02090538Ev(r);
    return s;
}
}

namespace R5 {
extern "C" s32 func_02092e70(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x39, a, b, c, d, data_020e1504); }
}

namespace R5 {
extern "C" s32 func_02092da4(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = data_021d04b0 + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->unk_14 != m1 && r->unk_0e != 0) {
        Unk_02092da4_B *b = p->unk_0c;
        b->unk_20 = r->unk_00 + b->unk_18->unk_00->unk_04;
        b->unk_24 = r->unk_04 + b->unk_18->unk_00->unk_08;
        b->unk_28 = r->unk_08 + b->unk_18->unk_00->unk_0c;
        func_02093aa8(p->unk_0c, 0x5f, data_020e16d4, m1, 0, m1, 0, m1, 0);
        if (r->unk_0e > 0) r->unk_0e--;
        s = 1;
    }
    if (s == 0) {
        p->unk_0c->unk_1c |= 2;
        Unk_02092da4_B *b = p->unk_0c;
        if (b->unk_0c > 0) s = func_02093aa8(b, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
    }
    if (s == 0) _ZN12Unk_0209053813func_02090538Ev(r);
    return s;
}
}

namespace R5 {
extern "C" s32 func_02092d7c(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x3c, a, b, c, d, data_020e16a4); }
}

namespace R5 {
extern "C" s32 func_02092d08(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x46, a, b, c, d, 0); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x5e, b, c, data_020e1584) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_02092cf8(void *p) { return func_02093e60(p, 0x1ccd); }
}

namespace R5 {
extern "C" s32 func_02092cf0(void *p) { return func_02093f50(p); }
}

namespace R5 {
extern "C" s32 func_02092ccc(void *p) { return _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(p, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0); }
}

namespace R5 {
extern "C" s32 func_02092c54(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x47, a, b, c, d, data_020e15a4); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x75, b, c, data_020e157c) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_02092c44(void *p) { return func_02093e60(p, 0x1800); }
}

namespace R5 {
extern "C" s32 func_02092c34(void *p) { return func_02093e60(p, 0x1333); }
}

namespace R5 {
extern "C" void func_02092c1c(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_54 = 0x1333; }
}

namespace R5 {
extern "C" s32 func_02092ba4(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x48, a, b, c, d, data_020e1614); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x75, b, c, data_020e15b4) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" s32 func_02092b94(void *p) { return func_02093e60(p, 0x2000); }
}

namespace R5 {
extern "C" s32 func_02092b84(void *p) { return func_02093e60(p, 0x199a); }
}

namespace R5 {
extern "C" s32 func_02092b0c(s32 a, s32 b, s32 c, s32 d) { 
    u8 *s = (u8 *)data_021d04b0; 
    s32 r = 3; 
    s32 t = func_02093d54(0x49, a, b, c, d, data_020e1620); 
    if (t < 3) { 
        _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092e98_Vec *)&data_021d04b0[32]), *(u16 *)(s + 0x39c), a, b, c, d, -1); 
        if (func_0208fb20(0x75, b, c, data_020e151c) != 0) r = 2; 
    } 
    _ZN12Unk_0209053813func_02090538Ev(&(*(Unk_02092e98_Vec *)&data_021d04b0[32])); 
    return r; 
}
}

namespace R5 {
extern "C" void func_02092af4(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_50 = 0x800; }
}

namespace R5 {
extern "C" s32 func_02092ae4(void *p) { return func_02093e60(p, 0x119a); }
}

namespace R5 {
extern "C" s32 func_02092ad4(void *p) { return _ZN12Unk_020932ac13func_020932bcEi(p, 0xccd); }
}

namespace R5 {
extern "C" s32 func_02092aac(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e1574, data_020e147c, (void *)func_02092ad4);
}
}

namespace R5 {
extern "C" void func_02092a94(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_50 = 0x99a; }
}

namespace R5 {
extern "C" s32 func_02092a84(void *p) { return func_02093e60(p, 0x14cd); }
}

namespace R5 {
extern "C" s32 func_02092a74(void *p) { return _ZN12Unk_020932ac13func_020932bcEi(p, 0x119a); }
}

namespace R5 {
extern "C" s32 func_02092a4c(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e1524, data_020e14bc, (void *)func_02092a74);
}
}

namespace R5 {
extern "C" void func_02092a34(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_50 = 0xc00; }
}

namespace R5 {
extern "C" s32 func_02092a24(void *p) { return func_02093e60(p, 0x1ccd); }
}

namespace R5 {
extern "C" s32 func_02092a14(void *p) { return _ZN12Unk_020932ac13func_020932bcEi(p, 0x14cd); }
}

namespace R5 {
extern "C" s32 func_020929ec(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e15f4, data_020e1494, (void *)func_02092a14);
}
}

namespace R5 {
extern "C" void func_020929d0(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0x4cd; }
}

namespace R5 {
extern "C" s32 func_020929a8(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e1534); }
}

namespace R5 {
extern "C" void func_0209298c(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0x666; }
}

namespace R5 {
extern "C" s32 func_02092964(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e153c); }
}

namespace R5 {
extern "C" void func_02092948(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0x800; }
}

namespace R5 {
extern "C" s32 func_02092920(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e15ac); }
}

namespace R5 {
extern "C" void func_02092904(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0x99a; }
}

namespace R5 {
extern "C" s32 func_020928dc(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e154c); }
}

namespace R5 {
extern "C" void func_020928c0(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0xb33; }
}

namespace R5 {
extern "C" s32 func_02092898(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e14e4); }
}

namespace R5 {
extern "C" void func_0209287c(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = 0xccd; }
}

namespace R5 {
extern "C" s32 func_02092854(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, data_020e14dc); }
}

namespace R5 {
extern "C" s32 func_02092830(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, 0); }
}

namespace R4 {
extern "C" s32 func_02092770(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[17];
    s32 r;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    r = 3;
    if (Unk_02092770_IsOne(data_020e416c)) {
        if (t == 9 || t == 3) {
            r = func_02093d54(0x4b, a, b, c, d, 0);
        }
    } else if (t == 0x16 || Weather_GetFallingPrecip() == 1) {
        r = func_02093d54(0x4d, a, b, c, d, 0);
    } else if (t == 3 && func_020b50bc()) {
        r = func_02093d54(0x4e, a, b, c, d, 0);
    } else {
        r = func_02093d54(t == 0x13 ? 0x4c : 0x4b, a, b, c, d, 0);
    }
    func_02033988(buf);
    return r;
}
}

namespace R4 {
extern "C" s32 func_02092760(void *a) {
    return func_02093da4(a, 0, data_020d033c);
}
}

namespace R4 {
extern "C" s32 func_02092718(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    s32 id;
    if (buf[13] == 0x13) {
        id = 0x6f;
    } else {
        id = 0x6e;
    }
    s32 res = func_02093d54(id, a, b, c, d, data_020e14c4);
    func_02033988(buf);
    return res;
}
}

namespace R4 {
extern "C" s32 func_02092708(void *a) {
    return func_02093da4(a, 0, data_020d0348);
}
}

namespace R4 {
extern "C" void func_020926d4(Unk_020926d4_Obj *o) {
    Unk_02092388_Data *const d = &(*(Unk_02092388_Data *)&data_021d04b0[32]);
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
extern "C" s32 func_02092684(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    if (func_02093d54(0x59, a, b, c, d, data_020e165c) < 3) {
        func_0209389c(r, a, b, c, d, (void *)func_020926d4);
        r = 1;
    }
    return r;
}
}

namespace R4 {
extern "C" s32 func_02092658(Unk_02092528_Outer *o) {
    if (func_02093c28(o, 0, 0) == 0) {
        for (Unk_02092388_Node *n = o->unk_0c->unk_08; n != 0; n = n->unk_00) {
            n->unk_26 = n->unk_24;
        }
        return 0;
    }
    return 1;
}
}

namespace R4 {
extern "C" s32 func_02092630(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x5a, a, b, c, d, data_020e175c);
}
}

namespace R4 {
extern "C" s32 func_02092620(void *a) {
    return func_02093c94(a, 0, data_020d02c4);
}
}

namespace R4 {
extern "C" s32 func_02092528(Unk_02092528_Outer *o) {
    s32 r;
    Unk_02092528_Idx idx;
    Unk_02092388_Vec vec;
    idx = *(Unk_02092528_Idx *)o->unk_04;
    Unk_02092528_Entry *e = data_021d04b0 + idx.b[0];
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
        _ZN12Unk_0209355c13func_02093998EiPviS0_iS0_iS0_(o->unk_0c, 0x71, data_020e16d4, -1, r, 0x71, data_020e16d4, 0x72, data_020e16d4);
        if (e->cnt > 0) {
            e->cnt = e->cnt - 1;
        }
        r = 1;
    }
    if (r == 0) {
        o->unk_0c->unk_1c |= 2;
        if (o->unk_0c->unk_0c > 0) {
            r = _ZN12Unk_0209355c13func_02093998EiPviS0_iS0_iS0_(o->unk_0c, 0x71, data_020e16d4, -1, 0, 0x71, data_020e16d4, 0x72, data_020e16d4);
        }
    }
    if (r == 0) {
        _ZN12Unk_0209053813func_02090538Ev(e);
    }
    return r;
}
}

namespace R4 {
extern "C" s32 func_02092500(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x70, a, b, c, d, data_020e15bc);
}
}

namespace R4 {
extern "C" s32 func_020924a4(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = func_02093d54(0x55, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R4 {
extern "C" s32 func_02092448(s32 a, s32 b, s32 c, s32 d) {
    u32 buf[16];
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        s32 res = func_02093d54(0x56, a, b, c, d, data_020e16d4);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R4 {
extern "C" void func_0209241c(Unk_02092388_Obj *o, s32 flag) {
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
extern "C" void func_02092388(Unk_02092388_Obj *o, Unk_02092388_Vec *v, s32 ang) {
    Unk_02092388_Data *const d = &(*(Unk_02092388_Data *)&data_021d04b0[32]);
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
    o->unk_78 = (void *)func_0209241c;
}
}

namespace R4 {
extern "C" void func_02092374(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0354, -0x7530);
}
}

namespace R4 {
extern "C" s32 func_02092310(s32 a, s32 b, s32 c, s32 d, s32 e, void *f) {
    u32 buf[16];
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    u32 t = buf[13];
    s32 r = -1;
    if (t == 0x13 || (func_020b50bc() && t == 3)) {
        r = e;
    }
    if (r != -1) {
        s32 res = func_02093d54(e, a, b, c, d, f);
        func_02033988(buf);
        return res;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R4 {
extern "C" s32 func_020922f4(s32 a, s32 b, s32 c, s32 d) {
    return func_02092310(a, b, c, d, 0x58, data_020e1484);
}
}

namespace R4 {
extern "C" void func_020922e4(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0360, 0);
}
}

namespace R4 {
extern "C" s32 func_020922c8(s32 a, s32 b, s32 c, s32 d) {
    return func_02092310(a, b, c, d, 0x58, data_020e14ac);
}
}

namespace R4 {
extern "C" void func_020922b8(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d036c, 0);
}
}

namespace R4 {
extern "C" void func_020922a8(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0378, 0);
}
}

namespace R4 {
extern "C" s32 func_02092264(s32 a, s32 b, s32 c, s32 d) {
    if (func_02092310(a, b, c, d, 0x57, data_020e14a4) == 1) {
        return func_02092310(a, b, c, d, 0x57, data_020e1478);
    }
    return 3;
}
}

namespace R4 {
extern "C" void func_02092254(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0228, 0);
}
}

namespace R4 {
extern "C" void func_02092244(Unk_02092388_Obj *o) {
    func_02092388(o, (Unk_02092388_Vec *)data_020d0234, 0);
}
}

namespace R4 {
extern "C" s32 func_02092200(s32 a, s32 b, s32 c, s32 d) {
    if (func_02092310(a, b, c, d, 0x57, data_020e1488) == 1) {
        return func_02092310(a, b, c, d, 0x57, data_020e14b0);
    }
    return 3;
}
}

namespace R4 {
extern "C" s32 func_020921f0(void *a) {
    return func_02093da4(a, 0, data_020d0270);
}
}

namespace R4 {
extern "C" s32 func_02092198(s32 a, s32 b, s32 c, s32 d) {
    s32 r = 3;
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092388_Data *)&data_021d04b0[32]), -1, a, b, c, d, -1);
    if (func_0208fc88(0x76, b, c, data_020e14c0) && func_0208fc88(0x54, b, c, data_020e16f4)) {
        r = 1;
    }
    return r;
}
}

namespace R4 {
extern "C" s32 func_02092188(void *a) {
    return func_02093da4(a, data_020d0288, 0);
}
}

namespace R4 {
extern "C" s32 func_02092178(void *a) {
    return func_02093da4(a, data_020d0294, 0);
}
}

namespace R4 {
extern "C" s32 func_02092168(void *a) {
    return func_02093da4(a, data_020d02ac, 0);
}
}

namespace R4 {
extern "C" s32 func_020920fc(s32 a, s32 b, s32 c, s32 d, s32 e) {
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(&(*(Unk_02092388_Data *)&data_021d04b0[32]), -1, a, b, c, d, -1);
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
extern "C" s32 func_020920e8(s32 a, s32 b, s32 c, s32 d) {
    return func_020920fc(a, b, c, d, 0x77);
}
}

namespace R4 {
extern "C" s32 func_020920d4(s32 a, s32 b, s32 c, s32 d) {
    return func_020920fc(a, b, c, d, 0x78);
}
}

namespace R4 {
extern "C" s32 func_020920ac(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x79, a, b, c, d, data_020e159c);
}
}

namespace R4 {
extern "C" s32 func_0209209c(void *a) {
    return func_02093c94(a, 0, data_020d02c4);
}
}

namespace R4 {
extern "C" s32 func_0209207c(void *a) {
    Unk_02092388_Vec v;
    v.x = 0;
    v.y = 0;
    v.z = 0x1000;
    return func_02093c28(a, 0, &v);
}
}

namespace R4 {
extern "C" s32 func_02092054(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x7a, a, b, c, d, data_020e14f4);
}
}

namespace R4 {
extern "C" void func_02091fa4(u8 *p) {
    Unk_02091fa4_Color col[4];
    func_02093f50(p);
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
extern "C" s32 func_02091f7c(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x63, a, b, c, d, data_020e149c);
}
}

namespace R4 {
extern "C" s32 func_02091f6c(void *a) {
    return func_02093c94(a, 0, data_020d02dc);
}
}

namespace R4 {
extern "C" s32 func_02091f5c(void *a) {
    return func_02093c28(a, 0, data_020d02dc);
}
}

namespace R4 {
extern "C" s32 func_02091f24(s32 a, s32 b, s32 c, s32 d) {
    if (Weather_GetFallingPrecip() == 1) {
        return func_02093bb4(0x74, a, b, c, d, data_020e15cc);
    }
    return 3;
}
}

namespace R4 {
extern "C" s32 func_02091f00(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x52, a, b, c, d, 0);
}
}

namespace R4 {
extern "C" void func_02091ed0(Unk_02092528_Outer *o, u8 a, s32 b, s32 c) {
    func_02093c94(o, 0, data_020d02c4);
    o->unk_0c->unk_68 = a;
    o->unk_0c->unk_4c = b;
    o->unk_0c->unk_50 = c;
}
}

namespace R4 {
extern "C" void func_02091eb8(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::func_02091ed0(o, 5, 0xcd, 0x200);
}
}

namespace R4 {
extern "C" void func_02091ea0(Unk_02092528_Outer *o) {
    Unk_02091ea0_Ns::func_02091ed0(o, 5, 0xe1, 0x266);
}
}

namespace R4 {
extern "C" void func_02091e70(Unk_02092528_Outer *o) {
    func_02093c94(o, 0, data_020d02c4);
    o->unk_0c->unk_69 = 0;
    o->unk_0c->unk_4c = 0x3d;
    o->unk_0c->unk_50 = 0x466;
}
}

namespace R3 {
extern "C" s32 func_02091cb4(Unk_02091404_Arg *p, s32 a, s32 b, s32 c, s32 d0, s16 e1, s16 e2, s16 e3, s32 d4, s16 e5, s16 e6, s16 e7)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
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
        _ZN12Unk_0209053813func_02090538Ev(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" void func_02091c70(Unk_02091404_Arg *p)
{
    func_02091cb4(p, 2, 0x266, 0xcd, 0xcd, 0x19a, 0xa, 3, 0x200, 0x400, 0x1a, 9);
}
}

namespace R3 {
extern "C" void func_02091c28(Unk_02091404_Arg *p)
{
    func_02091cb4(p, 1, 0x333, 0x111, 0xe1, 0x1c3, 0xb, 4, 0x266, 0x4cd, 0x1f, 0xa);
}
}

namespace R3 {
extern "C" s32 func_02091aa8(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
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
        _ZN12Unk_0209053813func_02090538Ev(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 func_02091a58(s32 a, s32 b, s32 c, s32 d)
{
    Unk_02091404_Ext *e = &(*(Unk_02091404_Ext *)&data_021d04b0[32]);
    s32 r = 3;
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7e, b, c, data_020e1734) != 0) {
        r = 0;
    }
    _ZN12Unk_0209053813func_02090538Ev(e);
    return r;
}
}

namespace R3 {
extern "C" void func_02091a40(Unk_02091404_Arg *p)
{
    func_02093c1c(p);
    p->unk_0c->unk_68 = 1;
}
}

namespace R3 {
extern "C" s32 func_02091970(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
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
        _ZN12Unk_0209053813func_02090538Ev(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 func_02091920(s32 a, s32 b, s32 c, s32 d)
{
    Unk_02091404_Ext *e = &(*(Unk_02091404_Ext *)&data_021d04b0[32]);
    s32 r = 3;
    _ZN12Unk_0209053813func_020904f0EijP16Unk_020904f0_VecPsS2_s(e, e->unk_1c, a, b, c, d, -0xb5);
    if (func_0208fb20(0x7f, b, c, data_020e1784) != 0) {
        r = 0;
    }
    _ZN12Unk_0209053813func_02090538Ev(e);
    return r;
}
}

namespace R3 {
extern "C" void func_020918f4(Unk_02091404_Obj *o, s32 k)
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
extern "C" void func_0209188c(Unk_02091404_Obj *p)
{
    Unk_02091404_Ext *const e = &(*(Unk_02091404_Ext *)&data_021d04b0[32]);
    u32 ang = (u16)e->rec.unk_0c;
    p->unk_20 = e->rec.x + (*p->unk_18)->unk_04;
    p->unk_24 = e->rec.y + (*p->unk_18)->unk_08;
    p->unk_28 = e->rec.z + (*p->unk_18)->unk_0c;
    s32 idx = ((s32)ang >> 4) * 2;
    p->unk_3c = data_02135f44[idx];
    p->unk_3e = 0;
    p->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(p);
    p->unk_78 = func_020918f4;
}
}

namespace R3 {
extern "C" s32 func_02091820(s32 a, s32 b, s32 c, s32 d)
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
        r = func_02093d54(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R3 {
extern "C" s32 func_020917b4(s32 a, s32 b, s32 c, s32 d)
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
        r = func_02093d54(id, a, b, c, d, data_020e14a0);
        func_02033988(buf);
        return r;
    }
    func_02033988(buf);
    return 3;
}
}

namespace R3 {
extern "C" s32 func_020917a4(void *p)
{
    return func_02093c94(p, NULL, data_020d030c);
}
}

namespace R3 {
extern "C" s32 func_0209177c(void *p)
{
    return _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}
}

namespace R3 {
extern "C" s32 func_02091754(void *p)
{
    return _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1d, data_020e16d4, 0x1d, data_020e16d4, -1, 0);
}
}

namespace R3 {
extern "C" s32 func_020916a0(s32 a, s32 b, s32 c, s32 d)
{
    u32 buf[17];
    s32 result;
    s32 k;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, b, 0, 0);
    k = buf[13];
    result = 3;
    if (k == 0x16 || Weather_GetFallingPrecip() == 1) {
        if (func_02093bb4(0x85, a, b, c, d, data_020e155c) == 0) {
            result = 2;
        }
    } else if (k == 3 && func_020b50bc() != 0) {
        if (func_02093bb4(0x86, a, b, c, d, data_020e1554) == 0) {
            result = 2;
        }
    } else if (k == 0x13) {
        result = func_02093d54(0x84, a, b, c, d, NULL);
    } else {
        result = func_02093d54(0x83, a, b, c, d, NULL);
    }
    func_02033988(buf);
    return result;
}
}

namespace R3 {
extern "C" s32 func_0209162c(Unk_02091404_Arg *p)
{
    Unk_02091404_Ext *const e = &(*(Unk_02091404_Ext *)&data_021d04b0[32]);
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
    MI_CpuCopy8(e, &data_021d04b0[i.b[0]], 0x1c);
}
}

namespace R3 {
extern "C" s32 func_02091578(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
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
        _ZN12Unk_0209053813func_02090538Ev(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 func_02091550(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x8d, a, b, c, d, data_020e1544);
}
}

namespace R3 {
extern "C" s32 func_02091540(void *p)
{
    return func_02093c94(p, data_020d0324, NULL);
}
}

namespace R3 {
extern "C" s32 func_02091530(void *p)
{
    return func_02093c28(p, data_020d0324, NULL);
}
}

namespace R3 {
extern "C" s32 func_02091508(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x4f, a, b, c, d, data_020e156c);
}
}

namespace R3 {
extern "C" s32 func_020914e0(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x92, a, b, c, d, data_020e164c);
}
}

namespace R3 {
extern "C" s32 func_020914d4(void *p)
{
    return func_02093c94(p, NULL, NULL);
}
}

namespace R3 {
extern "C" s32 func_02091440(Unk_02091404_Arg *p)
{
    Unk_02091404_Idx i = p->idx;
    Unk_02091404_Rec *r = &data_021d04b0[i.b[0]];
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
        _ZN12Unk_0209053813func_02090538Ev(r);
    }
    return ok;
}
}

namespace R3 {
extern "C" s32 func_02091418(s32 a, s32 b, s32 c, s32 d)
{
    return func_02093bb4(0x53, a, b, c, d, data_020e166c);
}
}

namespace R3 {
extern "C" s32 func_02091404(Unk_02091404_Arg *p)
{
    return _ZN12Unk_021d04b013func_02090424Eis(data_021d04b0, p, 0xb);
}
}

namespace R2 {
extern "C" s32 func_02091310(Unk_02090bd8_Obj *o)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
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
extern "C" s32 func_02091254(Unk_02090bd8_Obj *o)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
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
extern "C" s32 func_020911fc(s32 a, s32 b, s32 c, s16 *d)
{
    s32 r = 3;
    if (d != 0) {
        func_02093d54(0x6c, a, b, c, d, data_020e148c);
        if (*d >= 0xc00) {
            func_02093d54(0x6d, a, b, c, d, data_020e1498);
        }
        r = 1;
    }
    return r;
}
}

namespace R2 {
extern "C" void func_020911a0(Unk_02090bd8_Obj *o)
{
    s32 f = (*(Unk_02090a80_Rec *)&data_021d04b0[32]).unk_10;
    s32 a = (s16)((s16)func_01ffcb0c(0x1333, f) + 0x4cd);
    s32 b = (s16)((s16)func_01ffcb0c(0x3ae, f) + 0x800);
    func_02093c1c(o);
    *(s32 *)(o->unk_0c + 0x44) = a;
    *(s32 *)(o->unk_0c + 0x50) = b;
}
}

namespace R2 {
extern "C" void func_0209116c(s32 p)
{
    s32 u = (s16)((s16)func_01ffcb0c(0x1e66, (*(Unk_02090a80_Rec *)&data_021d04b0[32]).unk_10) + 0xb33);
    func_02093e60(p, u);
}
}

namespace R2 {
extern "C" void func_02091140(s32 p)
{
    s32 t = func_01ffcb0c(0x2000, (*(Unk_02090a80_Rec *)&data_021d04b0[32]).unk_10) + 0x99a;
    _ZN12Unk_020932ac13func_020932bcEi(p, t);
}
}

namespace R2 {
extern "C" s32 func_02091118(void *p)
{
    _ZN12Unk_020931a013func_02093914EiPviS0_iS0_iS0_(p, 0x1f, data_020e16d4, 0x1e, data_020e16d4, 0x1e, data_020e16d4, -1, 0);
}
}

namespace R2 {
extern "C" s32 func_020910c0(s32 a, s32 b, s32 c, s16 *d)
{
    if (d != 0) {
        s16 t = FX_Div(*d - 0x600, 0x1200);
        return func_020931e8(a, b, c, &t, data_020e15d4, data_020e14a8, func_02091140);
    }
    return 3;
}
}

namespace R2 {
extern "C" s32 func_020910b0(void *p) { return func_02093c94(p, data_020d021c, 0); }
}

namespace R2 {
extern "C" s32 func_020910a0(void *p) { return func_02093c28(p, data_020d021c, 0); }
}

namespace R2 {
extern "C" s32 func_02091078(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x95, a, b, c, d, data_020e14cc); }
}

namespace R2 {
extern "C" s32 func_02091068(void *p) { return func_02093c94(p, data_020d0240, 0); }
}

namespace R2 {
extern "C" s32 func_02091058(void *p) { return func_02093c94(p, data_020d0258, 0); }
}

namespace R2 {
extern "C" s32 func_02091048(void *p) { return func_02093c94(p, data_020d02a0, 0); }
}

namespace R2 {
extern "C" s32 func_02091038(void *p) { return func_02093c28(p, data_020d0240, 0); }
}

namespace R2 {
extern "C" s32 func_02091028(void *p) { return func_02093c28(p, data_020d0258, 0); }
}

namespace R2 {
extern "C" s32 func_02091018(void *p) { return func_02093c28(p, data_020d02a0, 0); }
}

namespace R2 {
extern "C" s32 func_02090ff0(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x96, a, b, c, d, data_020e168c); }
}

namespace R2 {
extern "C" s32 func_02090fc8(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x97, a, b, c, d, data_020e168c); }
}

namespace R2 {
extern "C" s32 func_02090fa4(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090f80(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x1, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090f5c(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0x3, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090f38(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0x4, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090f14(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0x5, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090eec(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x6, a, b, c, d, data_020e17fc); }
}

namespace R2 {
extern "C" s32 func_02090edc(void *p) { return func_02093c94(p, data_020d02e8, 0); }
}

namespace R2 {
extern "C" s32 func_02090ecc(void *p) { return func_02093c28(p, data_020d02e8, 0); }
}

namespace R2 {
extern "C" s32 func_02090ea4(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x7, a, b, c, d, data_020e1514); }
}

namespace R2 {
extern "C" s32 func_02090e94(void *p) { return func_02093c94(p, data_020d02c4, 0); }
}

namespace R2 {
extern "C" s32 func_02090e84(void *p) { return func_02093c28(p, data_020d02c4, 0); }
}

namespace R2 {
extern "C" s32 func_02090e5c(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x5b, a, b, c, d, data_020e158c); }
}

namespace R2 {
extern "C" s32 func_02090e34(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x5c, a, b, c, d, data_020e158c); }
}

namespace R2 {
extern "C" s32 func_02090e10(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x8, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090dec(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x16, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090d98(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, data_020e183c[g->unk_10], 0);
    MI_CpuCopy8(g, &data_021d04b0[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" s32 func_02090d44(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, data_020e18a8[g->unk_10], 0);
    MI_CpuCopy8(g, &data_021d04b0[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" void func_02090cfc(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, data_020e183c[r->unk_10], 0);
}
}

namespace R2 {
extern "C" void func_02090cb4(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, data_020e18a8[r->unk_10], 0);
}
}

namespace R2 {
extern "C" s32 func_02090c8c(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0x9, a, b, c, d, data_020e16bc); }
}

namespace R2 {
extern "C" s32 func_02090c68(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0xa, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090c44(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0xb, a, b, c, d, 0); }
}

namespace R2 {
extern "C" s32 func_02090c20(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0xc, a, b, c, d, 0); }
}

namespace R2 {
extern "C" void func_02090bd8(Unk_02090bd8_Obj *o)
{
    Unk_02090bd8_V v;
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
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
extern "C" s32 func_02090bb0(s32 a, s32 b, s32 c, void *d) { return func_02093d54(0x5d, a, b, c, d, data_020e14b8); }
}

namespace R2 {
extern "C" s32 func_02090b88(s32 a, s32 b, s32 c, void *d) { return func_02093bb4(0xd, a, b, c, d, data_020e167c); }
}

namespace R2 {
extern "C" void func_02090b2c(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, g->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
    MI_CpuCopy8(g, &data_021d04b0[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" void func_02090ad0(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Rec *const g = &(*(Unk_02090a80_Rec *)&data_021d04b0[32]);
    Unk_02090a80_Idx i = p->idx;
    func_02093c94(p, g->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
    MI_CpuCopy8(g, &data_021d04b0[i.b[0]], 0x1c);
}
}

namespace R2 {
extern "C" s32 func_02090a80(Unk_02090a80_Arg *p)
{
    Unk_02090a80_Idx i = p->idx;
    Unk_02090a80_Rec *r = &data_021d04b0[i.b[0]];
    func_02093c28(p, r->unk_10 != 3 ? data_020d03b4 : data_020d03c0, data_020d0300);
}
}

void Unk_020907a0::func_02090a30() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
    func_02093c28(this, e->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
}

namespace R1 {
extern "C" s32 func_02090a08(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0xe, a, b, c, d, data_020e162c);
}
}

namespace R1 {
extern "C" s32 func_020909bc(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    Unk_0209073c_Scratch *e = &(*(Unk_0209073c_Scratch *)&data_021d04b0.unk_380);
    s32 r = 3;
    e->func_020904f0(e->unk_1c, p0, p1, p2, p3, 0xf);
    if (func_0208fb20(0xf, (s32)p1, (s32)p2, data_020e17bc)) {
        r = 2;
    }
    e->func_02090538();
    return r;
}
}

BOOL Unk_020907a0::func_02090934() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
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
        e->func_02090538();
    }
    return r;
}

BOOL Unk_020907a0::func_020908a8() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
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
        e->func_02090538();
    }
    return r;
}

namespace R1 {
extern "C" s32 func_02090880(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x10, a, b, c, d, data_020e1714);
}
}

namespace R1 {
extern "C" void func_0209086c(s32 id) {
    data_021d04b0.func_02090424(id, 4);
}
}

namespace R1 {
extern "C" s32 func_02090848(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x11, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_02090824(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x12, a, b, c, d, NULL);
}
}

BOOL Unk_020907a0::func_020907a0() { using namespace R1;
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
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
        e->func_02090538();
    }
    return r;
}

namespace R1 {
extern "C" s32 func_0209073c(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    s32 r = 3;
    func_02093d54(0x13, p0, (s32)p1, (s32)p2, (s32)p3, NULL);
    Unk_0209073c_Scratch *e = &(*(Unk_0209073c_Scratch *)&data_021d04b0.unk_380);
    e->func_020904f0(e->unk_1c, p0, p1, p2, p3, 0x25);
    if (func_0208fb20(0x62, (s32)p1, (s32)p2, data_020e163c)) {
        r = 2;
    }
    e->func_02090538();
    return r;
}
}

namespace R1 {
extern "C" s32 func_02090728(s32 x) {
    return func_02093da4(x, data_020d0330, data_020d02c4);
}
}

namespace R1 {
extern "C" s32 func_02090700(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x14, a, b, c, d, data_020e14c8);
}
}

namespace R1 {
extern "C" s32 func_020906d8(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x82, a, b, c, d, data_020e14c8);
}
}

namespace R1 {
extern "C" s32 func_020906b4(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x15, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_02090690(s32 a, s32 b, s32 c, s32 d) {
    return func_0209389c(0, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_0209066c(s32 a, s32 b, s32 c, s32 d) {
    return func_0209389c(1, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_02090658(s32 x) {
    return func_02093da4(x, data_020d0264, data_020d02d0);
}
}

namespace R1 {
extern "C" s32 func_02090630(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x51, a, b, c, d, data_020e1564);
}
}

namespace R1 {
extern "C" s32 func_0209061c(s32 x) {
    return func_02093da4(x, data_020d0384, data_020d024c);
}
}

namespace R1 {
extern "C" s32 func_020905f4(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x7b, a, b, c, d, data_020e1490);
}
}

namespace R1 {
extern "C" s32 func_020905d0(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x7c, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_020905ac(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x7d, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_020905a8() {
    return 3;
}
}

namespace R1 {
extern "C" s32 func_02090584(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return func_02093d54(id, a, b, c, d, NULL);
}
}

namespace R1 {
extern "C" s32 func_02090560(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return func_02093bb4(id, a, b, c, d, NULL);
}
}

void Unk_02090538::func_02090538() { using namespace R1;
    MI_CpuFill8(this, 0, 0x14);
    unk_0e = -1;
    unk_10 = 0x1000;
    unk_14 = -1;
    unk_18 = 0x66;
}

void Unk_02090538::func_020904f0(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v) { using namespace R1;
    func_02090538();
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

void Unk_021d04b0::func_020904c4() { using namespace R1;
    unk_380.func_02090538();
    for (s32 i = 0; i < 0x20; i++) {
        unk_000[i].func_02090538();
    }
}

Unk_02090538 *Unk_021d04b0::func_020904a0(s32 id, Unk_02090538 *e, s32 n) { using namespace R1;
    Unk_02090538 *r = NULL;
    s32 i = 0;
    for (; i < n; e++, i++) {
        if (id == e->unk_14) {
            r = e;
            break;
        }
    }
    return r;
}

void Unk_021d04b0::func_0209044c(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) { using namespace R1;
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            Unk_02090538 *e = &unk_000[i];
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

void Unk_021d04b0::func_02090424(s32 id, s16 v) { using namespace R1;
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            if (unk_000[i].unk_14 == id) {
                unk_000[i].unk_0e = v;
            }
        }
    }
}

void Unk_021d04b0::func_0209040c() { using namespace R1;
    func_020904c4();
    unk_39c = 0;
}

s32 Unk_021d04b0::func_020903b4(u32 kind, s32 a, s32 b, s32 c, s32 d) { using namespace R1;
    s32 r = -1;
    if (kind < 0x66) {
        Unk_020e1914_Ent *ent = &data_020e1914[kind];
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

void Unk_021d04b0::func_02090388(s32 id) { using namespace R1;
    if (id != -1) {
        u32 t = func_0209036c(id);
        if (t < 0x66) {
            void (*f)(s32) = ((void (**)(s32))((u8 *)data_020e1914 + 4))[t * 2];
            if (f) {
                f(id);
            }
        }
    }
}

u32 Unk_021d04b0::func_0209036c(s32 id) { using namespace R1;
    Unk_02090538 *e = func_020904a0(id, unk_000, 0x20);
    u32 r = 0x66;
    if (e) {
        r = e->unk_18;
    }
    return r;
}

namespace R1 {
extern "C" void func_0209035c() {
    data_021d04b0.func_0209040c();
}
}

namespace R1 {
extern "C" s32 func_02090330(u32 kind, s32 a, s32 b, s32 c) {
    return data_021d04b0.func_020903b4(kind, a, b, c, -1);
}
}

namespace R1 {
extern "C" s32 func_02090308(u32 kind, u16 v0, s32 a, s32 b) {
    u16 v = v0;
    return data_021d04b0.func_020903b4(kind, a, b, (s32)&v, -1);
}
}

namespace R1 {
extern "C" void func_020902f8(s32 id) {
    data_021d04b0.func_02090388(id);
}
}

namespace R1 {
extern "C" void func_020902d4(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) {
    data_021d04b0.func_0209044c(id, pos, a, b);
}
}

namespace R1 {
extern "C" s32 func_020902b0(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x64, b, c, d, a);
}
}

namespace R1 {
extern "C" s32 func_0209028c(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x64, b, c, d, a);
}
}

namespace R1 {
extern "C" s32 func_02090268(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x65, b, c, d, a);
}
}


// ---- Data
namespace DT {
extern "C" {
void _ZN12Unk_020907a013func_020907a0Ev();
void _ZN12Unk_020907a013func_020908a8Ev();
void _ZN12Unk_020907a013func_02090934Ev();
void _ZN12Unk_020907a013func_02090a30Ev();
void _ZN12Unk_020931a013func_020931a0Ev();
void _ZN12Unk_020931a013func_02093284Ev();
void _ZN12Unk_020931a013func_020936f8Ev();
void _ZN12Unk_020931a013func_02093720Ev();
void _ZN12Unk_020931a013func_02093748Ev();
void _ZN12Unk_0209355c13func_0209355cEv();
void func_02090560();
void func_02090584();
void func_020905a8();
void func_020905ac();
void func_020905d0();
void func_020905f4();
void func_0209061c();
void func_02090630();
void func_02090658();
void func_0209066c();
void func_02090690();
void func_020906b4();
void func_020906d8();
void func_02090700();
void func_02090728();
void func_0209073c();
void func_02090824();
void func_02090848();
void func_0209086c();
void func_02090880();
void func_020909bc();
void func_02090a08();
void func_02090a80();
void func_02090ad0();
void func_02090b2c();
void func_02090b88();
void func_02090bb0();
void func_02090bd8();
void func_02090c20();
void func_02090c44();
void func_02090c68();
void func_02090c8c();
void func_02090cb4();
void func_02090cfc();
void func_02090d44();
void func_02090d98();
void func_02090dec();
void func_02090e10();
void func_02090e34();
void func_02090e5c();
void func_02090e84();
void func_02090e94();
void func_02090ea4();
void func_02090ecc();
void func_02090edc();
void func_02090eec();
void func_02090f14();
void func_02090f38();
void func_02090f5c();
void func_02090f80();
void func_02090fa4();
void func_02090fc8();
void func_02090ff0();
void func_02091018();
void func_02091028();
void func_02091038();
void func_02091048();
void func_02091058();
void func_02091068();
void func_02091078();
void func_020910a0();
void func_020910b0();
void func_020910c0();
void func_02091118();
void func_0209116c();
void func_020911a0();
void func_020911fc();
void func_02091254();
void func_02091310();
void func_02091404();
void func_02091418();
void func_02091440();
void func_020914d4();
void func_020914e0();
void func_02091508();
void func_02091530();
void func_02091540();
void func_02091550();
void func_02091578();
void func_0209162c();
void func_020916a0();
void func_02091754();
void func_0209177c();
void func_020917a4();
void func_020917b4();
void func_02091820();
void func_0209188c();
void func_02091920();
void func_02091970();
void func_02091a40();
void func_02091a58();
void func_02091aa8();
void func_02091c28();
void func_02091c70();
void func_02091e70();
void func_02091ea0();
void func_02091eb8();
void func_02091f00();
void func_02091f24();
void func_02091f5c();
void func_02091f6c();
void func_02091f7c();
void func_02091fa4();
void func_02092054();
void func_0209207c();
void func_0209209c();
void func_020920ac();
void func_020920d4();
void func_020920e8();
void func_02092168();
void func_02092178();
void func_02092188();
void func_02092198();
void func_020921f0();
void func_02092200();
void func_02092244();
void func_02092254();
void func_02092264();
void func_020922a8();
void func_020922b8();
void func_020922c8();
void func_020922e4();
void func_020922f4();
void func_02092374();
void func_02092448();
void func_020924a4();
void func_02092500();
void func_02092528();
void func_02092620();
void func_02092630();
void func_02092658();
void func_02092684();
void func_02092708();
void func_02092718();
void func_02092760();
void func_02092770();
void func_02092830();
void func_02092854();
void func_0209287c();
void func_02092898();
void func_020928c0();
void func_020928dc();
void func_02092904();
void func_02092920();
void func_02092948();
void func_02092964();
void func_0209298c();
void func_020929a8();
void func_020929d0();
void func_020929ec();
void func_02092a24();
void func_02092a34();
void func_02092a4c();
void func_02092a84();
void func_02092a94();
void func_02092aac();
void func_02092ae4();
void func_02092af4();
void func_02092b0c();
void func_02092b84();
void func_02092b94();
void func_02092ba4();
void func_02092c1c();
void func_02092c34();
void func_02092c44();
void func_02092c54();
void func_02092ccc();
void func_02092cf0();
void func_02092cf8();
void func_02092d08();
void func_02092d7c();
void func_02092da4();
void func_02092e70();
void func_02092e98();
void func_02092f68();
void func_02093020();
void func_02093094();
void func_020930b8();
void func_0209312c();
void func_020931c4();
void func_020932f0();
void func_020933c0();
void func_02093408();
void func_0209341c();
void func_02093460();
void func_020934a8();
void func_020934b8();
void func_020934c8();
void func_0209350c();
void func_02093534();
void func_020935e8();
void func_020937dc();
void func_02093c10();
void func_02093c1c();
void func_02093ce8();
void func_02093d40();
void func_02093e78();
void func_02093eec();
void func_02093f50();
void func_02093f84();
}
}

void *data_020e14a4[1] = {(void *)DT::func_020922b8};
void *data_020e147c[1] = {(void *)DT::func_02092ae4};
void *data_020e1490[1] = {(void *)DT::func_0209061c};
void *data_020e14a0[1] = {(void *)DT::func_0209188c};
void *data_020e148c[1] = {(void *)DT::func_02091310};
void *data_020e1494[1] = {(void *)DT::func_02092a24};
void *data_020e1484[1] = {(void *)DT::func_02092374};
void *data_020e14bc[1] = {(void *)DT::func_02092a84};
void *data_020e1474[1] = {(void *)DT::_ZN12Unk_0209355c13func_0209355cEv};
void *data_020e149c[1] = {(void *)DT::func_02091fa4};
void *data_020e14b4[1] = {(void *)DT::func_02093eec};
void *data_020e14ac[1] = {(void *)DT::func_020922e4};
void *data_020e14b0[1] = {(void *)DT::func_02092244};
void *data_020e14c4[1] = {(void *)DT::func_02092760};
void *data_020e14c8[1] = {(void *)DT::func_02090728};
void *data_020e14a8[1] = {(void *)DT::func_0209116c};
void *data_020e1478[1] = {(void *)DT::func_020922a8};
void *data_020e14c0[1] = {(void *)DT::func_020921f0};
void *data_020e14b8[1] = {(void *)DT::func_02090bd8};
void *data_020e1480[1] = {(void *)DT::func_02093e78};
void *data_020e1498[1] = {(void *)DT::func_02091254};
void *data_020e1488[1] = {(void *)DT::func_02092254};
void *data_020e15b4[2] = {(void *)DT::func_02092c1c, (void *)DT::func_02092ccc};
void *data_020e14f4[2] = {(void *)DT::func_0209209c, (void *)DT::func_0209207c};
void *data_020e14fc[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_020931a0Ev};
void *data_020e150c[2] = {(void *)DT::func_02093e78, (void *)DT::func_02093e78};
void *data_020e15f4[2] = {(void *)DT::func_02092a34, (void *)DT::_ZN12Unk_020931a013func_02093284Ev};
void *data_020e1564[2] = {(void *)DT::func_02090658, (void *)DT::func_02090658};
void *data_020e152c[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_02093284Ev};
void *data_020e1544[2] = {(void *)DT::func_0209162c, (void *)DT::func_02091578};
void *data_020e1574[2] = {(void *)DT::func_02092af4, (void *)DT::_ZN12Unk_020931a013func_02093284Ev};
void *data_020e151c[2] = {(void *)DT::func_02092c1c, (void *)DT::func_02092ccc};
void *data_020e157c[2] = {(void *)DT::func_02093c1c, (void *)DT::func_02092ccc};
void *data_020e156c[2] = {(void *)DT::func_02091540, (void *)DT::func_02091530};
void *data_020e1514[2] = {(void *)DT::func_02090edc, (void *)DT::func_02090ecc};
void *data_020e1524[2] = {(void *)DT::func_02092a94, (void *)DT::_ZN12Unk_020931a013func_02093284Ev};
void *data_020e154c[2] = {(void *)DT::func_02092904, (void *)DT::func_02093c10};
void *data_020e155c[2] = {(void *)DT::func_020917a4, (void *)DT::func_0209177c};
void *data_020e14ec[2] = {(void *)DT::_ZN12Unk_020931a013func_02093748Ev, (void *)DT::_ZN12Unk_020931a013func_02093720Ev};
void *data_020e1554[2] = {(void *)DT::func_020917a4, (void *)DT::func_02091754};
void *data_020e1534[2] = {(void *)DT::func_020929d0, (void *)DT::func_02093c10};
void *data_020e153c[2] = {(void *)DT::func_0209298c, (void *)DT::func_02093c10};
void *data_020e14e4[2] = {(void *)DT::func_020928c0, (void *)DT::func_02093c10};
void *data_020e1584[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_020931a0Ev};
void *data_020e158c[2] = {(void *)DT::func_02090e94, (void *)DT::func_02090e84};
void *data_020e1594[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_020936f8Ev};
void *data_020e14dc[2] = {(void *)DT::func_0209287c, (void *)DT::func_02093c10};
void *data_020e159c[2] = {(void *)DT::func_02093c1c, (void *)DT::func_02093ce8};
void *data_020e15a4[2] = {(void *)DT::func_02092cf8, (void *)DT::func_02092cf0};
void *data_020e15ac[2] = {(void *)DT::func_02092948, (void *)DT::func_02093c10};
void *data_020e14d4[2] = {(void *)DT::_ZN12Unk_020931a013func_02093748Ev, (void *)DT::_ZN12Unk_020931a013func_020936f8Ev};
void *data_020e15bc[2] = {(void *)DT::func_02092620, (void *)DT::func_02092528};
void *data_020e15c4[2] = {(void *)DT::func_020934b8, (void *)DT::func_020934a8};
void *data_020e15cc[2] = {(void *)DT::func_02091f6c, (void *)DT::func_02091f5c};
void *data_020e15d4[2] = {(void *)DT::func_020911a0, (void *)DT::func_02091118};
void *data_020e15dc[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_020931a0Ev};
void *data_020e15e4[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_02093720Ev};
void *data_020e15ec[2] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020931a013func_020931a0Ev};
void *data_020e1504[2] = {(void *)DT::func_02092f68, (void *)DT::func_02092e98};
void *data_020e14cc[2] = {(void *)DT::func_020910b0, (void *)DT::func_020910a0};
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
void *data_020e15fc[3] = {(void *)DT::func_02092188, (void *)DT::func_02092178, (void *)DT::func_02092168};
void *data_020e1608[3] = {(void *)DT::func_02093408, (void *)DT::func_02093408, (void *)DT::func_02093408};
void *data_020e1614[3] = {(void *)DT::func_02092c44, (void *)DT::func_02092c44, (void *)DT::func_02092c34};
void *data_020e1620[3] = {(void *)DT::func_02092b94, (void *)DT::func_02092b94, (void *)DT::func_02092b84};
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
void *data_020e162c[4] = {(void *)DT::func_02090b2c, (void *)DT::func_02090a80, (void *)DT::func_02090ad0, (void *)DT::_ZN12Unk_020907a013func_02090a30Ev};
void *data_020e163c[4] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_020907a0Ev, (void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_020907a0Ev};
void *data_020e164c[4] = {(void *)DT::func_02091540, (void *)DT::func_02091530, (void *)DT::func_02091540, (void *)DT::func_02091530};
void *data_020e165c[4] = {(void *)DT::func_02092708, (void *)DT::func_02092708, (void *)DT::func_02092708, (void *)DT::func_02092708};
void *data_020e166c[4] = {(void *)DT::func_020914d4, (void *)DT::func_02091440, (void *)DT::func_020914d4, (void *)DT::func_02091440};
void *data_020e167c[4] = {(void *)DT::func_02093c1c, (void *)DT::func_02093ce8, (void *)DT::func_02093c1c, (void *)DT::func_02093ce8};
void *data_020e168c[6] = {(void *)DT::func_02091068, (void *)DT::func_02091038, (void *)DT::func_02091058, (void *)DT::func_02091028, (void *)DT::func_02091048, (void *)DT::func_02091018};
void *data_020e16a4[6] = {(void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02092da4};
void *data_020e16bc[6] = {(void *)DT::func_02090d98, (void *)DT::func_02090cfc, (void *)DT::func_02090d44, (void *)DT::func_02090cb4, (void *)DT::func_02093c1c, (void *)DT::func_02093c10};
void *data_020e16d4[8] = {(void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84, (void *)DT::func_02093f84};
void *data_020e16f4[8] = {(void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50, (void *)DT::func_02093f50};
void *data_020e1714[8] = {(void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_02090934Ev, (void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_020908a8Ev, (void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_020908a8Ev, (void *)DT::func_02093c1c, (void *)DT::_ZN12Unk_020907a013func_020908a8Ev};
void *data_020e1734[10] = {(void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02091eb8, (void *)DT::func_02091c70, (void *)DT::func_02091eb8, (void *)DT::func_02091c70, (void *)DT::func_02091ea0, (void *)DT::func_02091c28, (void *)DT::func_02091e70, (void *)DT::func_02091aa8};
void *data_020e175c[10] = {(void *)DT::func_02093c1c, (void *)DT::func_02092658, (void *)DT::func_02093c1c, (void *)DT::func_02092658, (void *)DT::func_02093c1c, (void *)DT::func_02092658, (void *)DT::func_02093c1c, (void *)DT::func_02092658, (void *)DT::func_02093c1c, (void *)DT::func_02092658};
void *data_020e1784[14] = {(void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02091a40, (void *)DT::func_02091970, (void *)DT::func_02091a40, (void *)DT::func_02091970, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10};
void *data_020e17bc[16] = {(void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10};
void *data_020e17fc[16] = {(void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10, (void *)DT::func_02093c1c, (void *)DT::func_02093c10};
s32 data_020e18a8[27] = {-3277, 410, 1434, -3809, -778, 451, -2908, -410, -164, -3154, 1229, 0, -2867, -1638, -1229, -4096, 287, 1966, -2458, 1229, 614, -3482, 614, 1434, -3154, 1229, 0};
s32 data_020e183c[27] = {819, -205, 3277, 2294, -1679, 2580, 1966, -778, 1679, 2458, 410, 2048, 2458, -2458, 778, 1679, -819, 3809, 1434, 614, 2048, 1638, 205, 3277, 2458, 410, 2048};
void *data_020e1914[204] = {(void *)DT::func_020937dc, 0, (void *)DT::func_020935e8, 0, (void *)DT::func_02093534, 0, (void *)DT::func_0209350c, 0, (void *)DT::func_0209350c, 0, (void *)DT::func_0209350c, 0, (void *)DT::func_020934c8, 0, (void *)DT::func_02093460, 0, (void *)DT::func_0209341c, 0, (void *)DT::func_020933c0, 0, (void *)DT::func_020932f0, 0, (void *)DT::func_020931c4, 0, (void *)DT::func_0209312c, 0, (void *)DT::func_020930b8, 0, (void *)DT::func_02092e70, (void *)DT::func_02093d40, (void *)DT::func_02093094, 0, (void *)DT::func_02093020, 0, (void *)DT::func_02092d7c, (void *)DT::func_02093d40, (void *)DT::func_02092d08, 0, (void *)DT::func_02092c54, 0, (void *)DT::func_02092ba4, 0, (void *)DT::func_02092b0c, 0, (void *)DT::func_02092aac, 0, (void *)DT::func_02092a4c, 0, (void *)DT::func_02092ba4, 0, (void *)DT::func_020929ec, 0, (void *)DT::func_020929a8, (void *)DT::func_02093d40, (void *)DT::func_02092964, (void *)DT::func_02093d40, (void *)DT::func_02092920, (void *)DT::func_02093d40, (void *)DT::func_020928dc, (void *)DT::func_02093d40, (void *)DT::func_02092898, (void *)DT::func_02093d40, (void *)DT::func_02092854, (void *)DT::func_02093d40, (void *)DT::func_02092964, (void *)DT::func_02093d40, (void *)DT::func_02092830, (void *)DT::func_02093d40, (void *)DT::func_02092770, 0, (void *)DT::func_02092718, 0, (void *)DT::func_02092684, 0, (void *)DT::func_02092630, (void *)DT::func_02093d40, (void *)DT::func_02092500, (void *)DT::func_02093d40, (void *)DT::func_020924a4, 0, (void *)DT::func_02092448, 0, (void *)DT::func_020922f4, 0, (void *)DT::func_020922c8, 0, (void *)DT::func_02092264, 0, (void *)DT::func_02092200, 0, (void *)DT::func_02092198, 0, (void *)DT::func_020920e8, 0, (void *)DT::func_020920d4, 0, (void *)DT::func_020920ac, (void *)DT::func_02093d40, (void *)DT::func_02092054, (void *)DT::func_02093d40, (void *)DT::func_02091f7c, 0, (void *)DT::func_02091f24, (void *)DT::func_02093d40, (void *)DT::func_02091f00, (void *)DT::func_02093d40, (void *)DT::func_02091a58, (void *)DT::func_02093d40, (void *)DT::func_02091920, (void *)DT::func_02093d40, (void *)DT::func_02091820, 0, (void *)DT::func_020917b4, 0, (void *)DT::func_020916a0, 0, (void *)DT::func_02091550, (void *)DT::func_02093d40, (void *)DT::func_02091508, (void *)DT::func_02093d40, (void *)DT::func_020914e0, (void *)DT::func_02093d40, (void *)DT::func_02091418, (void *)DT::func_02091404, (void *)DT::func_020911fc, 0, (void *)DT::func_020910c0, 0, (void *)DT::func_02091078, (void *)DT::func_02093d40, (void *)DT::func_02090ff0, (void *)DT::func_02093d40, (void *)DT::func_02090fc8, (void *)DT::func_02093d40, (void *)DT::func_02090fa4, 0, (void *)DT::func_02090f80, (void *)DT::func_02093d40, (void *)DT::func_02090f5c, 0, (void *)DT::func_02090f38, 0, (void *)DT::func_02090f14, 0, (void *)DT::func_02090eec, (void *)DT::func_02093d40, (void *)DT::func_02090ea4, (void *)DT::func_02093d40, (void *)DT::func_02090e5c, (void *)DT::func_02093d40, (void *)DT::func_02090e34, (void *)DT::func_02093d40, (void *)DT::func_02090e10, (void *)DT::func_02093d40, (void *)DT::func_02090dec, (void *)DT::func_02093d40, (void *)DT::func_02090c8c, (void *)DT::func_02093d40, (void *)DT::func_02090c68, 0, (void *)DT::func_02090c44, 0, (void *)DT::func_02090c20, 0, (void *)DT::func_02090bb0, 0, (void *)DT::func_02090b88, (void *)DT::func_02093d40, (void *)DT::func_02090a08, (void *)DT::func_02093d40, (void *)DT::func_020909bc, (void *)DT::func_02093d40, (void *)DT::func_02090880, (void *)DT::func_0209086c, (void *)DT::func_02090848, 0, (void *)DT::func_02090824, 0, (void *)DT::func_0209073c, 0, (void *)DT::func_02090700, 0, (void *)DT::func_020906d8, 0, (void *)DT::func_020906b4, 0, (void *)DT::func_02090690, 0, (void *)DT::func_0209066c, 0, (void *)DT::func_02090630, 0, (void *)DT::func_020905f4, 0, (void *)DT::func_020905d0, (void *)DT::func_02093d40, (void *)DT::func_020905ac, 0, (void *)DT::func_020905a8, 0, (void *)DT::func_02090584, 0, (void *)DT::func_02090560, (void *)DT::func_02093d40};
Unk_021d04b0 data_021d04b0;

