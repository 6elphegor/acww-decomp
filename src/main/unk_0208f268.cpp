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
void func_0210612c(void *p, s32 a, u32 b);
void _ZN12Unk_020dbd3413func_02054b14Ev(void *p);
void _ZN12Unk_020dbd3413func_02054b38EPv(void *p, void *h);
void _ZN12Unk_020dbd5413func_02054800EPv(void *p, void *h);
void _ZN12Unk_020dbd5413func_02054710Ev(void *p);
void _ZN12Unk_020dbd5413func_020547ccEPv(void *p, s32 q);
void _ZN12Unk_020dbd5413func_020547e4Ev(void *p);
void _ZN12Unk_0205454c13func_02054720Eiiitt(void *p, s32 a, s32 b, s32 c, u16 d, u16 e);
BOOL _ZN12Unk_020dbd3413func_02054c2cEPvS0_(void *p, u32 a, u32 b);
void _ZN12Unk_020dbe4c13func_02055b38Eiiit(void *p, s32 a, s32 b, s32 c, u16 e);
void _ZN12Unk_020dbe4c13func_02055bccEjPv(void *p, void *a, void *c);
void _ZN12Unk_020dbe4c13func_02055b90EjPv(void *p, void *a, void *c);
void _ZN12Unk_020dbe4c13func_02055a9cEj(void *p, u32 a);
u32 _ZN12Unk_020dbe3413func_020554c0Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
void _ZN12Unk_020dbe7c13func_020566bcEv(void *p);
s32 func_0203ef38(void *out, void *in);
s32 func_02064cc4();
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 v);
void func_020e8464(void *m, s32 x, s32 y, s32 z);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
void func_020e85fc(void *heap, void *p);
u32 func_020641ec(u32 res, void *heap, u32 a, s32 b);
void func_020e8c94(void *);
void *func_020e8e7c(u32, s32);
void *func_020e8574(u32);
void func_020e8558(void *);
void *func_020f8c44(void *, s32, s32);
void *func_020f8bb0(void *, u32, u32);
Unk_0209002c_Handle *func_020f94a8(void *, s32, s32, s32, s32, s32);
void func_020f8b44(void *, void *, s32);
void func_020f8cb8(void *, void *, void *);
void func_020f8d24(void *);
void func_020f92d4(void *, void *);
void func_020f9018(void *, s32);
void func_021010d0(void *);
void *func_021010dc(void *, void *, void *);
void func_02115e64(s32, void *, s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *dst, void *src, u32 size);
u16 func_02064f18();
u16 func_020b5b98();
s32 func_0204c0ac();
s32 func_020641d8(void *);
void *func_02101088(u32 heap, u32 size, s32 align);
s32 func_020f8e84(u32 h);
s32 func_020f8e70(u32 h);
}

// Opaque views of library-side model classes (see unk_02054190.cpp / unk_020553f8.cpp for the full declarations)
class Unk_020dbd54 {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();

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

class Unk_020dbe4c : public Unk_020dbe7c_Anim {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 unk_1c;
};

struct Unk_0208f480_Mtx {
    s64 v[6];
};

class Unk_0208f2e8;

// 0x148-byte effect entry (dtor 0x0208f308, ctor 0x02090238)
class Unk_0208f308 {
public:
    Unk_0208f308();
    ~Unk_0208f308();
    void func_0208f3c8(Unk_0208f2e8 *src, void (*cb)(Unk_0208f308 *));
    void func_0208f474();
    void func_0208f480();
    void func_0208f508();
    void func_0208f568(Unk_0208f2e8 *src);
    BOOL func_0208f694(s32 idx);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04[3];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s16 unk_1c;
    /* 0x1e */ s16 unk_1e;
    /* 0x20 */ s16 unk_20;
    /* 0x24 */ Unk_020dbd54 unk_24;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ s32 unk_e0;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ Unk_020dbe4c unk_e8[3];
};

// 0x530-byte group of four entries plus three resource pointers (dtor 0x0208f2e8, ctor 0x0209020c)
class Unk_0208f2e8 {
public:
    Unk_0208f2e8();
    ~Unk_0208f2e8();

    /* 0x000 */ s32 unk_00;
    /* 0x004 */ Unk_0208f308 unk_04[4];
    /* 0x524 */ u32 unk_524[3];
};

struct Unk_0208f8fc_Entry;

struct Unk_0208f8fc_Cb {
    s32 (*unk_00)(Unk_0208f8fc_Entry *);
    s32 (*unk_04)(Unk_0208f8fc_Entry *);
};

struct Unk_0208f8fc_Obj {
    u8 unk_00[8];
    void *unk_08;
    u8 unk_0c[0x10];
    u32 unk_1c;
};

struct Unk_0208f8fc_Tag {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0208f8fc_Entry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_0208f8fc_Tag unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0c */ Unk_0208f8fc_Obj *unk_0c;
    /* 0x10 */ Unk_0208f8fc_Cb unk_10;
};

struct Unk_0208f8fc_Pool {
    Unk_0208f8fc_Pool();
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ Unk_0208f8fc_Entry unk_04[32];
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

struct Unk_0208fb20_Row {
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

struct Unk_0208fdcc_Obj {
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

class Unk_020e141c : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e141c() {}

    /* 0x50 */ Unk_0209002c_Handle *unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ Unk_0208f8fc_Pool unk_58;
    /* 0x35c */ Unk_0208f2e8 unk_35c[4];
    /* 0x181c */ u32 unk_181c[20];
};

// Ten key/value pairs
struct Unk_0208f32c_Pair {
    void func_0208f3b8();
    void func_0208f3bc();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct Unk_0208f32c {
    BOOL func_0208f32c(s32 key, s32 val);
    s32 func_0208f354(s32 key);
    void func_0208f378();
    void func_0208f398();

    /* 0x00 */ Unk_0208f32c_Pair unk_00[10];
};

// Three-slot resource pointer set (Unk_0208f2e8::unk_524)
struct Unk_0208f6c0 {
    void func_0208f6c0();
    void func_0208f6f0(Unk_0208f2e8 *src);

    /* 0x00 */ u32 unk_00[3];
};

extern "C" {
extern Unk_020e141c *data_021d049c;
extern void *data_021d04a0;
extern void *data_021d04a4;
extern void *data_021d04a8;
extern s32 *data_021d04ac;
extern s32 data_021f482c;
extern u32 data_0213c7e0[];
extern u8 data_021f47e0[];
void *func_0209019c(u32 size);

void _ZN12Unk_0208f30813func_0208f3c8EP12Unk_0208f2e8PFvPS_E(Unk_0208f308 *, Unk_0208f2e8 *, void (*)(Unk_0208f308 *));
s32 _ZN12Unk_0208f30813func_0208f474Ev(Unk_0208f308 *);
s32 _ZN12Unk_0208f30813func_0208f480Ev(Unk_0208f308 *);
s32 _ZN12Unk_0208f30813func_0208f508Ev(Unk_0208f308 *);
s32 _ZN12Unk_0208f30813func_0208f568EP12Unk_0208f2e8(Unk_0208f308 *, Unk_0208f2e8 *);
s32 _ZN12Unk_0208f6c013func_0208f6c0Ev(void *);
s32 _ZN12Unk_0208f6c013func_0208f6f0EP12Unk_0208f2e8(void *, Unk_0208f2e8 *);
s32 _ZN12Unk_0208f32c13func_0208f378Ev(void *);
s32 _ZN12Unk_0208f32c13func_0208f398Ev(void *);
s32 _ZN12Unk_0208f32c13func_0208f354Ei(void *, u32);
s32 _ZN12Unk_0208f32c13func_0208f32cEii(void *, u32, void *);
void func_0208fa88(Unk_0208f8fc_Entry *);
s32 func_0208faa0(Unk_0208f8fc_Entry *, s32, s32, s32, Unk_0208f8fc_Cb *, Unk_0208f8fc_Tag);
void func_0208f86c(Unk_0208f2e8 *);
void func_0208f820(Unk_0208f2e8 *, s32, void (*)(Unk_0208f308 *));
void func_0208f738(Unk_0208f2e8 *, void (*)(Unk_0208f308 *));
void func_0208f76c(Unk_0208f2e8 *);
void func_0208f79c(Unk_0208f2e8 *);
void func_0208f7c0(Unk_0208f2e8 *);
void func_0208f7e4(Unk_0208f2e8 *, s32);
void func_0208f834(Unk_0208f2e8 *);
void func_0208f890(Unk_0208f2e8 *);
void func_0208f8b4(Unk_0208f2e8 *);
Unk_0208f8fc_Entry *func_0208f8fc(Unk_0208f8fc_Pool *p, s32 id, s32 a2, s32 a3, Unk_0208f8fc_Cb *cb, u32 b, u32 c);
Unk_0208f8fc_Entry *func_0208f98c(Unk_0208f8fc_Pool *p, s32 id);
void func_0208f9c4(Unk_0208f8fc_Pool *p);
void func_0208f9f8(Unk_0208f8fc_Pool *p);
s16 func_0208ff18();
s16 func_0208ff30(Unk_0208fdcc_Obj *o);
void func_0208fe0c(Unk_0208fdcc_Obj *o);
void func_0208fdcc(Unk_0208fdcc_Obj *o);
u16 func_0208ffe4(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3);
BOOL func_02090168(Unk_02090168_Arg *p);
s32 func_0209018c(void *unused);
void *func_02090140(void *unused, Unk_02090140_Arg *p);
}

extern const Unk_0208fb20_Row data_020cfafc[152];
extern s16 data_020e12f4[24];
extern s16 data_020e1324[24];
extern s16 data_020e1354[24];
extern s16 data_020e1384[24];
extern s16 data_020e13b4[24];
extern u32 data_020e13e4[4][3];
extern void (*data_020e12cc[10])(Unk_0208fdcc_Obj *);
extern const u32 data_020cfadc[8];
extern const u32 data_020cfaa4[7];
extern const u32 data_020cfac0[7];
extern char data_020e1284[24];
extern char data_020e129c[24];
extern char data_020e12b4[24];
extern char data_020e123c[23];
extern char data_020e1254[23];
extern char data_020e126c[23];
extern char data_020e11dc[22];
extern char data_020e11f4[22];
extern char data_020e120c[22];
extern char data_020e1224[22];
extern const u32 data_020cfa7c[5];
extern const u32 data_020cfa90[5];
extern char data_020e11a0[19];
extern char data_020e11b4[19];
extern char data_020e11c8[19];
extern u32 data_020e1190[4];
extern const u32 data_020cfa1c[4];
extern const u32 data_020cfa2c[4];
extern const u32 data_020cfa3c[4];
extern const u32 data_020cfa4c[4];
extern const u32 data_020cfa5c[4];
extern const u32 data_020cfa6c[4];
extern s16 *data_020e1180[4];
extern const u32 data_020cf95c[3];
extern const u32 data_020cf968[3];
extern const u32 data_020cf974[3];
extern const u32 data_020cf980[3];
extern const u32 data_020cf9e0[3];
extern const u32 data_020cf98c[3];
extern const u32 data_020cf998[3];
extern const u32 data_020cf9a4[3];
extern const u32 data_020cf9b0[3];
extern const u32 data_020cf9bc[3];
extern const u32 data_020cf9c8[3];
extern const u32 data_020cf9d4[3];
extern const u32 data_020cf9ec[3];
extern const u32 data_020cf9f8[3];
extern const u32 data_020cfa04[3];
extern const u32 data_020cfa10[3];
extern const u32 data_020cf93c[2];
extern const u32 data_020cf944[2];
extern const u32 data_020cf94c[2];
extern const u32 data_020cf954[2];
extern const u32 data_020cf934[2];
extern const u32 data_020cf8d4[2];
extern const u32 data_020cf8dc[2];
extern const u32 data_020cf8e4[2];
extern const u32 data_020cf914[2];
extern const u32 data_020cf8ec[2];
extern const u32 data_020cf8f4[2];
extern const u32 data_020cf8fc[2];
extern const u32 data_020cf904[2];
extern const u32 data_020cf90c[2];
extern const u32 data_020cf91c[2];
extern const u32 data_020cf924[2];
extern const u32 data_020cf92c[2];
extern const u32 data_020cf8d0[1];
extern const u32 data_020cf8cc[1];
extern const u32 data_020cf8c8[1];
extern const u32 data_020cf8c4[1];
extern const u32 data_020cf8c0[1];
extern const u32 data_020cf8bc[1];
extern const u32 data_020cf8b8[1];
extern const u32 data_020cf8b4[1];
extern const u32 data_020cf8b0[1];
extern const u32 data_020cf8ac[1];
extern const u32 data_020cf8a8[1];
extern const u32 data_020cf8a4[1];
extern const u32 data_020cf8a0[1];
extern const u32 data_020cf89c[1];
extern const u32 data_020cf898[1];
extern const u32 data_020cf894[1];
extern const u32 data_020cf890[1];
extern const u32 data_020cf88c[1];
extern const u32 data_020cf888[1];
extern const u32 data_020cf880[1];
extern const u32 data_020cf774[1];
extern const u32 data_020cf864[1];
extern const u32 data_020cf7c8[1];
extern const u32 data_020cf870[1];
extern const u32 data_020cf770[1];
extern const u32 data_020cf76c[1];
extern const u32 data_020cf85c[1];
extern const u32 data_020cf7c0[1];
extern const u32 data_020cf744[1];
extern const u32 data_020cf7b8[1];
extern const u32 data_020cf84c[1];
extern const u32 data_020cf7b0[1];
extern const u32 data_020cf83c[1];
extern const u32 data_020cf7b4[1];
extern const u32 data_020cf81c[1];
extern const u32 data_020cf7a0[1];
extern const u32 data_020cf760[1];
extern const u32 data_020cf7a4[1];
extern const u32 data_020cf834[1];
extern const u32 data_020cf7a8[1];
extern const u32 data_020cf75c[1];
extern const u32 data_020cf7ac[1];
extern const u32 data_020cf740[1];
extern const u32 data_020cf79c[1];
extern const u32 data_020cf73c[1];
extern const u32 data_020cf724[1];
extern const u32 data_020cf808[1];
extern const u32 data_020cf754[1];
extern const u32 data_020cf810[1];
extern const u32 data_020cf814[1];
extern const u32 data_020cf798[1];
extern const u32 data_020cf738[1];
extern const u32 data_020cf728[1];
extern const u32 data_020cf7fc[1];
extern const u32 data_020cf7f8[1];
extern const u32 data_020cf7f4[1];
extern const u32 data_020cf7f0[1];
extern const u32 data_020cf7ec[1];
extern const u32 data_020cf7e8[1];
extern const u32 data_020cf7e4[1];
extern const u32 data_020cf7e0[1];
extern const u32 data_020cf7dc[1];
extern const u32 data_020cf7d8[1];
extern const u32 data_020cf7d4[1];
extern const u32 data_020cf7cc[1];
extern const u32 data_020cf748[1];
extern const u32 data_020cf86c[1];
extern const u32 data_020cf868[1];
extern const u32 data_020cf7bc[1];
extern const u32 data_020cf730[1];
extern const u32 data_020cf768[1];
extern const u32 data_020cf850[1];
extern const u32 data_020cf828[1];
extern const u32 data_020cf830[1];
extern const u32 data_020cf838[1];
extern const u32 data_020cf840[1];
extern const u32 data_020cf820[1];
extern const u32 data_020cf72c[1];
extern const u32 data_020cf790[1];
extern const u32 data_020cf794[1];
extern const u32 data_020cf758[1];
extern const u32 data_020cf800[1];
extern const u32 data_020cf788[1];
extern const u32 data_020cf784[1];
extern const u32 data_020cf780[1];
extern const u32 data_020cf77c[1];
extern const u32 data_020cf778[1];
extern const u32 data_020cf884[1];
extern const u32 data_020cf878[1];
extern const u32 data_020cf860[1];
extern const u32 data_020cf848[1];
extern const u32 data_020cf844[1];
extern const u32 data_020cf82c[1];
extern const u32 data_020cf824[1];
extern const u32 data_020cf80c[1];
extern const u32 data_020cf78c[1];
extern const u32 data_020cf750[1];
extern const u32 data_020cf74c[1];
extern const u32 data_020cf87c[1];
extern const u32 data_020cf7c4[1];
extern const u32 data_020cf854[1];
extern const u32 data_020cf764[1];
extern const u32 data_020cf804[1];
extern const u32 data_020cf734[1];
extern const u32 data_020cf7d0[1];
extern const u32 data_020cf858[1];
extern const u32 data_020cf818[1];
extern const u32 data_020cf874[1];

const Unk_0208fb20_Row data_020cfafc[152] = {
    {0, 0, 0, (u32 *)data_020cf840, 1},
    {0, 0, 0, (u32 *)data_020cfa1c, 4},
    {0, 0, 0, (u32 *)data_020cf864, 1},
    {1, 0, 0, (u32 *)data_020cf8fc, 2},
    {0, 0, 0, (u32 *)data_020cf9d4, 3},
    {1, 0, 0, (u32 *)data_020cfa2c, 4},
    {0, 0, 0, (u32 *)data_020cfadc, 8},
    {0, 0, 0, (u32 *)data_020cf854, 1},
    {0, 0, 0, (u32 *)data_020cf7a8, 1},
    {0, 0, 0, (u32 *)data_020cf9e0, 3},
    {0, 0, 0, (u32 *)data_020cf9ec, 3},
    {0, 0, 0, (u32 *)data_020cf9f8, 3},
    {0, 0, 0, (u32 *)data_020cf78c, 1},
    {0, 0, 0, (u32 *)data_020cf90c, 2},
    {0, 0, 0, (u32 *)data_020cf914, 2},
    {0, 0, 0, (u32 *)data_020cfa04, 3},
    {0, 0, 0, (u32 *)data_020cfa3c, 4},
    {0, 0, 0, (u32 *)data_020cfa10, 3},
    {0, 0, 0, (u32 *)data_020cfac0, 7},
    {1, 0, 0, (u32 *)data_020cfa4c, 4},
    {0, 0, 0, (u32 *)data_020cf7b0, 1},
    {0, 0, 0, (u32 *)data_020cf91c, 2},
    {0, 0, 0, (u32 *)data_020cf7bc, 1},
    {0, 0, 0, (u32 *)data_020cf764, 1},
    {0, 0, 0, (u32 *)data_020cf818, 1},
    {0, 0, 0, (u32 *)data_020cf84c, 1},
    {0, 0, 0, (u32 *)data_020cf7c0, 1},
    {0, 0, 0, (u32 *)data_020cf850, 1},
    {0, 0, 0, (u32 *)data_020cf7c8, 1},
    {0, 1, 0, (u32 *)data_020cf774, 1},
    {0, 1, 0, (u32 *)data_020cf7b8, 1},
    {0, 1, 0, (u32 *)data_020cf79c, 1},
    {0, 1, 0, (u32 *)data_020cf788, 1},
    {0, 1, 0, (u32 *)data_020cf924, 2},
    {0, 0, 0, (u32 *)data_020cf92c, 2},
    {0, 0, 0, (u32 *)data_020cf800, 1},
    {0, 0, 0, (u32 *)data_020cf934, 2},
    {0, 0, 0, (u32 *)data_020cf93c, 2},
    {0, 0, 0, (u32 *)data_020cf794, 1},
    {0, 0, 0, (u32 *)data_020cf944, 2},
    {0, 0, 0, (u32 *)data_020cf75c, 1},
    {0, 0, 0, (u32 *)data_020cf820, 1},
    {0, 0, 0, (u32 *)data_020cf94c, 2},
    {0, 0, 0, (u32 *)data_020cf760, 1},
    {0, 0, 0, (u32 *)data_020cf954, 2},
    {0, 0, 0, (u32 *)data_020cf768, 1},
    {0, 0, 0, (u32 *)data_020cf8d4, 2},
    {0, 0, 0, (u32 *)data_020cf72c, 1},
    {0, 0, 0, (u32 *)data_020cf76c, 1},
    {0, 0, 0, (u32 *)data_020cf95c, 3},
    {0, 0, 0, (u32 *)data_020cf968, 3},
    {0, 0, 0, (u32 *)data_020cf778, 1},
    {0, 0, 0, (u32 *)data_020cf748, 1},
    {0, 0, 0, (u32 *)data_020cf730, 1},
    {0, 0, 0, (u32 *)data_020cf724, 1},
    {0, 0, 0, (u32 *)data_020cf980, 3},
    {0, 0, 0, (u32 *)data_020cf728, 1},
    {0, 0, 0, (u32 *)data_020cf8d0, 1},
    {0, 0, 0, (u32 *)data_020cf8cc, 1},
    {0, 0, 0, (u32 *)data_020cf98c, 3},
    {0, 0, 0, (u32 *)data_020cf998, 3},
    {0, 0, 0, (u32 *)data_020cf8c0, 1},
    {0, 0, 0, (u32 *)data_020cf8bc, 1},
    {0, 0, 0, (u32 *)data_020cf8b8, 1},
    {0, 0, 0, (u32 *)data_020cf8b0, 1},
    {0, 0, 0, (u32 *)data_020cf8ac, 1},
    {0, 0, 0, (u32 *)data_020cf8a8, 1},
    {0, 0, 0, (u32 *)data_020cf8a4, 1},
    {0, 0, 0, (u32 *)data_020cf8a0, 1},
    {0, 0, 0, (u32 *)data_020cf880, 1},
    {0, 0, 0, (u32 *)data_020cf8ec, 2},
    {0, 0, 0, (u32 *)data_020cf8f4, 2},
    {0, 0, 0, (u32 *)data_020cf9bc, 3},
    {0, 0, 0, (u32 *)data_020cf9c8, 3},
    {0, 0, 0, (u32 *)data_020cf87c, 1},
    {0, 0, 0, (u32 *)data_020cf750, 1},
    {0, 0, 0, (u32 *)data_020cf7d4, 1},
    {0, 0, 0, (u32 *)data_020cf7c4, 1},
    {0, 0, 0, (u32 *)data_020cf85c, 1},
    {0, 0, 0, (u32 *)data_020cf780, 1},
    {0, 0, 0, (u32 *)data_020cf770, 1},
    {0, 0, 0, (u32 *)data_020cf904, 2},
    {0, 0, 0, (u32 *)data_020cf784, 1},
    {0, 0, 0, (u32 *)data_020cf8e4, 2},
    {0, 0, 0, (u32 *)data_020cf844, 1},
    {0, 1, 0, (u32 *)data_020cf7b4, 1},
    {0, 1, 0, (u32 *)data_020cf83c, 1},
    {0, 0, 0, (u32 *)data_020cf874, 1},
    {0, 0, 0, (u32 *)data_020cf834, 1},
    {0, 0, 0, (u32 *)data_020cfa6c, 4},
    {0, 0, 0, (u32 *)data_020cfa90, 5},
    {0, 0, 0, (u32 *)data_020cf830, 1},
    {0, 0, 0, (u32 *)data_020cf798, 1},
    {0, 0, 0, (u32 *)data_020cf74c, 1},
    {0, 0, 0, (u32 *)data_020cf738, 1},
    {0, 1, 0, (u32 *)data_020cf828, 1},
    {0, 0, 0, (u32 *)data_020cf824, 1},
    {0, 0, 0, (u32 *)data_020cf754, 1},
    {1, 0, 0, (u32 *)data_020cfa5c, 4},
    {0, 0, 0, (u32 *)data_020cf8b4, 1},
    {0, 0, 0, (u32 *)data_020cf89c, 1},
    {0, 0, 0, (u32 *)data_020cf898, 1},
    {0, 0, 0, (u32 *)data_020cf894, 1},
    {0, 0, 0, (u32 *)data_020cf890, 1},
    {0, 0, 0, (u32 *)data_020cf88c, 1},
    {0, 0, 0, (u32 *)data_020cf888, 1},
    {0, 0, 0, (u32 *)data_020cf884, 1},
    {0, 0, 0, (u32 *)data_020cf790, 1},
    {0, 0, 0, (u32 *)data_020cf808, 1},
    {0, 0, 0, (u32 *)data_020cf734, 1},
    {0, 0, 0, (u32 *)data_020cf7a0, 1},
    {0, 0, 0, (u32 *)data_020cf73c, 1},
    {0, 0, 0, (u32 *)data_020cf740, 1},
    {0, 1, 0, (u32 *)data_020cf804, 1},
    {0, 1, 0, (u32 *)data_020cf744, 1},
    {0, 0, 0, (u32 *)data_020cf7fc, 1},
    {0, 0, 0, (u32 *)data_020cf7f8, 1},
    {0, 0, 0, (u32 *)data_020cf77c, 1},
    {0, 0, 0, (u32 *)data_020cf758, 1},
    {0, 0, 0, (u32 *)data_020cf7f0, 1},
    {0, 0, 0, (u32 *)data_020cf8c8, 1},
    {0, 0, 0, (u32 *)data_020cf8c4, 1},
    {0, 0, 0, (u32 *)data_020cf7e4, 1},
    {0, 0, 0, (u32 *)data_020cf7e0, 1},
    {0, 0, 0, (u32 *)data_020cf7dc, 1},
    {0, 0, 0, (u32 *)data_020cf7d8, 1},
    {0, 0, 0, (u32 *)data_020cfa7c, 5},
    {0, 0, 0, (u32 *)data_020cfaa4, 7},
    {0, 0, 0, (u32 *)data_020cf7d0, 1},
    {0, 0, 0, (u32 *)data_020cf7cc, 1},
    {0, 0, 0, (u32 *)data_020cf858, 1},
    {0, 0, 0, (u32 *)data_020cf878, 1},
    {0, 0, 0, (u32 *)data_020cf870, 1},
    {0, 0, 0, (u32 *)data_020cf86c, 1},
    {0, 0, 0, (u32 *)data_020cf810, 1},
    {0, 0, 0, (u32 *)data_020cf860, 1},
    {0, 0, 0, (u32 *)data_020cf7ac, 1},
    {0, 0, 0, (u32 *)data_020cf868, 1},
    {0, 0, 0, (u32 *)data_020cf7e8, 1},
    {0, 0, 0, (u32 *)data_020cf848, 1},
    {0, 0, 0, (u32 *)data_020cf838, 1},
    {0, 0, 0, (u32 *)data_020cf82c, 1},
    {0, 0, 0, (u32 *)data_020cf7a4, 1},
    {0, 0, 0, (u32 *)data_020cf81c, 1},
    {0, 0, 0, (u32 *)data_020cf814, 1},
    {0, 0, 0, (u32 *)data_020cf80c, 1},
    {0, 0, 0, (u32 *)data_020cf8dc, 2},
    {0, 0, 0, (u32 *)data_020cf974, 3},
    {0, 0, 0, (u32 *)data_020cf7f4, 1},
    {0, 0, 0, (u32 *)data_020cf7ec, 1},
    {0, 0, 0, (u32 *)data_020cf9a4, 3},
    {0, 0, 0, (u32 *)data_020cf9b0, 3},
};
s16 data_020e12f4[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x66ff, 0x66ff, 0x5be7, 0x73a4, 0x17af, 0x17af, 0x17af, 0x17af, 0x1ff5, 0x1ff5, 0x1ff5, 0x1ff5, 0x2fbf, 0x27f, 0x19f, 0x2e5f, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 data_020e1324[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x33eb, 0x66ff, 0x5be7, 0x73a4, 0x17af, 0x1ff5, 0x1ff5, 0x2fbf, 0x16df, 0x16df, 0x16df, 0x167f, 0xdbf, 0x19f, 0x11f, 0x3ddf, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 data_020e1354[24] = {0x55f9, 0x61f1, 0x3330, 0x33eb, 0x33eb, 0x5be7, 0x5be7, 0x73a4, 0x17af, 0x17af, 0x1ff5, 0x275f, 0x275f, 0x165f, 0x9ff, 0x5bf, 0xd5f, 0x11f, 0x289f, 0x3ddf, 0x4e5e, 0x4e5e, 0x55f9, 0x0};
s16 data_020e1384[24] = {0x7f72, 0x7f2c, 0x4ff8, 0x53ea, 0x53ea, 0x67ea, 0x67ea, 0x7f85, 0x4fee, 0x238f, 0x238f, 0x27b5, 0x27b5, 0x27b5, 0x27b5, 0x27b5, 0x3f4c, 0x5b0d, 0x5b0d, 0x5b0d, 0x6f0e, 0x7f72, 0x7f72, 0x0};
s16 data_020e13b4[24] = {0x4a97, 0x4a97, 0x4a97, 0x4bc6, 0x53a3, 0x53a3, 0x53a3, 0x52e0, 0x3344, 0xb71, 0xb71, 0xb71, 0xb56, 0xb56, 0xb56, 0x39a, 0x39a, 0x39a, 0x22fb, 0x22fb, 0x329c, 0x329c, 0x4a97, 0x0};
u32 data_020e13e4[4][3] = {{(u32)data_020e1224, (u32)data_020e11dc, (u32)data_020e11f4}, {(u32)data_020e11a0, (u32)data_020e11b4, 0}, {(u32)data_020e1284, (u32)data_020e129c, 0}, {(u32)data_020e1254, (u32)data_020e126c, 0}};
void (*data_020e12cc[10])(Unk_0208fdcc_Obj *) = {func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc, func_0208fdcc};
const u32 data_020cfadc[8] = {4, 5, 6, 7, 8, 9, 0xa, 0xb};
const u32 data_020cfaa4[7] = {0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca};
const u32 data_020cfac0[7] = {0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a};
char data_020e1284[] = "/spl/ef_water_col.nsbca";
char data_020e129c[] = "/spl/ef_water_col.nsbma";
char data_020e12b4[] = "/spl/ef_water_col.nsbmd";
char data_020e123c[] = "/spl/cra_ribbon1.nsbmd";
char data_020e1254[] = "/spl/cra_ribbon1.nsbca";
char data_020e126c[] = "/spl/cra_ribbon1.nsbma";
char data_020e11dc[] = "/spl/mp_situren.nsbma";
char data_020e11f4[] = "/spl/mp_situren.nsbva";
char data_020e120c[] = "/spl/mp_situren.nsbmd";
char data_020e1224[] = "/spl/mp_situren.nsbca";
const u32 data_020cfa7c[5] = {0xcb, 0xcc, 0xcd, 0xce, 0xcf};
const u32 data_020cfa90[5] = {0xac, 0xab, 0xaa, 0xad, 0xae};
char data_020e11a0[] = "/spl/mp_love.nsbca";
char data_020e11b4[] = "/spl/mp_love.nsbma";
char data_020e11c8[] = "/spl/mp_love.nsbmd";
u32 data_020e1190[4] = {(u32)data_020e120c, (u32)data_020e11c8, (u32)data_020e12b4, (u32)data_020e123c};
const u32 data_020cfa1c[4] = {0x42, 0x43, 0x44, 0x45};
const u32 data_020cfa2c[4] = {0x1e, 0x20, 0x1f, 0x21};
const u32 data_020cfa3c[4] = {0x30, 0x31, 0x32, 0x33};
const u32 data_020cfa4c[4] = {0x25, 0x26, 0x29, 0x2a};
const u32 data_020cfa5c[4] = {0x27, 0x28, 0x2b, 0x2c};
const u32 data_020cfa6c[4] = {0xa9, 0xa6, 0xa7, 0xa8};
s16 *data_020e1180[4] = {data_020e12f4, data_020e1324, data_020e1354, data_020e1384};
const u32 data_020cf95c[3] = {0x62, 0x61, 0x63};
const u32 data_020cf968[3] = {0x74, 0x73, 0x6e};
const u32 data_020cf974[3] = {0xe4, 0xe2, 0xe3};
const u32 data_020cf980[3] = {0x7f, 0x80, 0x81};
const u32 data_020cf9e0[3] = {0x1b, 0x1c, 0x1d};
const u32 data_020cf98c[3] = {0x75, 0x76, 0x77};
const u32 data_020cf998[3] = {0x7a, 0x7b, 0x7c};
const u32 data_020cf9a4[3] = {0xea, 0xea, 0xea};
const u32 data_020cf9b0[3] = {0xe9, 0xe9, 0xe9};
const u32 data_020cf9bc[3] = {0x7f, 0x80, 0x81};
const u32 data_020cf9c8[3] = {0x7f, 0x80, 0x81};
const u32 data_020cf9d4[3] = {0x10, 0x11, 0x12};
const u32 data_020cf9ec[3] = {0, 1, 2};
const u32 data_020cf9f8[3] = {0x18, 0x19, 0x1a};
const u32 data_020cfa04[3] = {0x2d, 0x2e, 0x2f};
const u32 data_020cfa10[3] = {0x3f, 0x40, 0x41};
const u32 data_020cf93c[2] = {0x4e, 0x48};
const u32 data_020cf944[2] = {0x4a, 0x4b};
const u32 data_020cf94c[2] = {0x60, 0x5f};
const u32 data_020cf954[2] = {0x67, 0x68};
const u32 data_020cf934[2] = {0x4d, 0x47};
const u32 data_020cf8d4[2] = {0x70, 0x6f};
const u32 data_020cf8dc[2] = {0xdf, 0xe0};
const u32 data_020cf8e4[2] = {0x9d, 0x9f};
const u32 data_020cf914[2] = {0x3b, 0x3c};
const u32 data_020cf8ec[2] = {0x78, 0x79};
const u32 data_020cf8f4[2] = {0x78, 0x79};
const u32 data_020cf8fc[2] = {0xc, 0xd};
const u32 data_020cf904[2] = {0xa0, 0x9c};
const u32 data_020cf90c[2] = {0x23, 0x24};
const u32 data_020cf91c[2] = {0x3d, 0x3e};
const u32 data_020cf924[2] = {0x5c, 0x54};
const u32 data_020cf92c[2] = {0x4f, 0x50};
s32 *data_021d04ac;
void *data_021d04a8;
void *data_021d04a4;
void *data_021d04a0;
Unk_020e141c *data_021d049c;
const u32 data_020cf8d0[1] = {0x7e};
const u32 data_020cf8cc[1] = {0x7d};
const u32 data_020cf8c8[1] = {0xbe};
const u32 data_020cf8c4[1] = {0xbf};
const u32 data_020cf8c0[1] = {0x92};
const u32 data_020cf8bc[1] = {0x84};
const u32 data_020cf8b8[1] = {0x87};
const u32 data_020cf8b4[1] = {0x85};
const u32 data_020cf8b0[1] = {0x89};
const u32 data_020cf8ac[1] = {0x8b};
const u32 data_020cf8a8[1] = {0x8d};
const u32 data_020cf8a4[1] = {0x8f};
const u32 data_020cf8a0[1] = {0x91};
const u32 data_020cf89c[1] = {0x86};
const u32 data_020cf898[1] = {0x83};
const u32 data_020cf894[1] = {0x88};
const u32 data_020cf890[1] = {0x8a};
const u32 data_020cf88c[1] = {0x8c};
const u32 data_020cf888[1] = {0x8e};
const u32 data_020cf880[1] = {0x93};
const u32 data_020cf774[1] = {0x57};
const u32 data_020cf864[1] = {0x46};
const u32 data_020cf7c8[1] = {0x5a};
const u32 data_020cf870[1] = {0xd1};
const u32 data_020cf770[1] = {0x9b};
const u32 data_020cf76c[1] = {0x72};
const u32 data_020cf85c[1] = {0x98};
const u32 data_020cf7c0[1] = {0x58};
const u32 data_020cf744[1] = {0xb9};
const u32 data_020cf7b8[1] = {0x5d};
const u32 data_020cf84c[1] = {0x59};
const u32 data_020cf7b0[1] = {0xe};
const u32 data_020cf83c[1] = {0xa4};
const u32 data_020cf7b4[1] = {0xa5};
const u32 data_020cf81c[1] = {0xdb};
const u32 data_020cf7a0[1] = {0xb5};
const u32 data_020cf760[1] = {0x66};
const u32 data_020cf7a4[1] = {0xde};
const u32 data_020cf834[1] = {0xa3};
const u32 data_020cf7a8[1] = {3};
const u32 data_020cf75c[1] = {0x4c};
const u32 data_020cf7ac[1] = {0xd6};
const u32 data_020cf740[1] = {0xb7};
const u32 data_020cf79c[1] = {0x54};
const u32 data_020cf73c[1] = {0xb6};
const u32 data_020cf724[1] = {0x6d};
const u32 data_020cf808[1] = {0xb4};
const u32 data_020cf754[1] = {0xb1};
const u32 data_020cf810[1] = {0xd2};
const u32 data_020cf814[1] = {0xdd};
const u32 data_020cf798[1] = {0x17};
const u32 data_020cf738[1] = {0x82};
const u32 data_020cf728[1] = {0x79};
const u32 data_020cf7fc[1] = {0xba};
const u32 data_020cf7f8[1] = {0xbb};
const u32 data_020cf7f4[1] = {0xe6};
const u32 data_020cf7f0[1] = {0xbd};
const u32 data_020cf7ec[1] = {0xe5};
const u32 data_020cf7e8[1] = {0xe8};
const u32 data_020cf7e4[1] = {0xc0};
const u32 data_020cf7e0[1] = {0xc2};
const u32 data_020cf7dc[1] = {0xc1};
const u32 data_020cf7d8[1] = {0xc3};
const u32 data_020cf7d4[1] = {0x97};
const u32 data_020cf7cc[1] = {0xd5};
const u32 data_020cf748[1] = {0x6a};
const u32 data_020cf86c[1] = {0xd3};
const u32 data_020cf868[1] = {0xe7};
const u32 data_020cf7bc[1] = {0xe1};
const u32 data_020cf730[1] = {0x6c};
const u32 data_020cf768[1] = {0x71};
const u32 data_020cf850[1] = {0x5b};
const u32 data_020cf828[1] = {0xaf};
const u32 data_020cf830[1] = {0x16};
const u32 data_020cf838[1] = {0xd8};
const u32 data_020cf840[1] = {0x22};
const u32 data_020cf820[1] = {0x5e};
const u32 data_020cf72c[1] = {0x69};
const u32 data_020cf790[1] = {0xb2};
const u32 data_020cf794[1] = {0x49};
const u32 data_020cf758[1] = {0xbc};
const u32 data_020cf800[1] = {0x51};
const u32 data_020cf788[1] = {0x5c};
const u32 data_020cf784[1] = {0x9e};
const u32 data_020cf780[1] = {0x9a};
const u32 data_020cf77c[1] = {0x95};
const u32 data_020cf778[1] = {0x6b};
const u32 data_020cf884[1] = {0x90};
const u32 data_020cf878[1] = {0xd0};
const u32 data_020cf860[1] = {0xd7};
const u32 data_020cf848[1] = {0xda};
const u32 data_020cf844[1] = {0xa1};
const u32 data_020cf82c[1] = {0xd9};
const u32 data_020cf824[1] = {0xb0};
const u32 data_020cf80c[1] = {0xdc};
const u32 data_020cf78c[1] = {0x13};
const u32 data_020cf750[1] = {0x96};
const u32 data_020cf74c[1] = {0x14};
const u32 data_020cf87c[1] = {0x94};
const u32 data_020cf7c4[1] = {0x99};
const u32 data_020cf854[1] = {0x15};
const u32 data_020cf764[1] = {0x55};
const u32 data_020cf804[1] = {0xb8};
const u32 data_020cf734[1] = {0xb3};
const u32 data_020cf7d0[1] = {0xd4};
const u32 data_020cf858[1] = {0xf};
const u32 data_020cf818[1] = {0x56};
const u32 data_020cf874[1] = {0xa2};

static inline void Unk_0208fb20_GetTag(Unk_0208f8fc_Tag *r, Unk_0208f8fc_Tag p)
{
    r->unk_00 = p.unk_00;
    r->unk_01 = p.unk_01;
    r->unk_02 = p.unk_02;
    r->unk_03 = p.unk_03;
}

static inline void Unk_0208fb20_SetTag(Unk_0208f8fc_Entry *e, Unk_0208f8fc_Tag t)
{
    e->unk_04 = t;
}

static inline void Unk_0208fb20_Fill(void *p, s32 v, u32 n)
{
    volatile s32 d = v;
    func_02115e64(d, p, n);
}

static inline void Unk_0208fb20_Clear(void *p, u32 n)
{
    Unk_0208fb20_Fill(p, 0, n);
}

Unk_0208f308::Unk_0208f308() {}
Unk_0208f2e8::Unk_0208f2e8() {}

extern "C" Unk_020e141c *func_020901b0() {
    return new Unk_020e141c();
}



extern "C" void *func_0209019c(u32 size) {
    return func_02101088((u32)data_021d04a4, size, 4);
}

extern "C" s32 func_0209018c(void *unused) {
    return func_020641d8((void *)"/spl/spl.spa");
}

extern "C" BOOL func_02090168(Unk_02090168_Arg *p) {
    if (func_020f8e84(p->unk_50)) {
        if (func_020f8e70(p->unk_50)) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *func_02090140(void *unused, Unk_02090140_Arg *p) {
    u32 size = p->unk_18;
    void *r = func_0209019c(size);
    if (r) {
        MI_CpuCopy8(p->unk_20, r, size);
    }
    return r;
}

BOOL Unk_020e141c::vfunc_00()
{
    BOOL result = FALSE;
    void *h;
    s32 r;

    data_021d049c = this;
    unk_50 = NULL;
    data_021d04a4 = NULL;
    unk_54 = 0;
    data_021d04ac = NULL;
    data_021d04a8 = func_020e8574(0xc000);
    if (data_021d04a8 != NULL) {
        data_021d04a4 = func_021010dc(data_021d04a8, (void *)0xc000, NULL);
        unk_50 = func_020f94a8((void *)func_0209019c, 0x20, 0x64, 0x14, 0x15, 0x32);
        unk_50->unk_30 = 0x8800;
        if (unk_50 != NULL) {
            h = (void *)func_0209018c(this);
            if (h != NULL) {
                func_020f92d4(unk_50, h);
                if (func_02090168((Unk_02090168_Arg *)this) != 0) {
                    r = (s32)func_02090140(this, (Unk_02090140_Arg *)h);
                    if (r != 0) {
                        func_020f9018(unk_50, r);
                        result = TRUE;
                    }
                }
                func_020e8558(h);
            }
        }
    }
    if (result == FALSE) {
        if (data_021d04a4 != NULL) {
            func_021010d0(data_021d04a4);
            data_021d04a4 = NULL;
        }
        if (data_021d04a8 != NULL) {
            func_0208f9c4(&unk_58);
            func_020e8558(data_021d04a8);
            data_021d04a8 = NULL;
        }
    } else {
        MI_CpuFill8(unk_35c, 0, 0x14c0);
        func_0208f8b4(unk_35c);
        _ZN12Unk_0208f32c13func_0208f398Ev(unk_181c);
    }
    return result;
}

BOOL Unk_020e141c::vfunc_18()
{
    func_0208f9f8(&unk_58);
    func_0208f890(unk_35c);
    func_020f8d24(unk_50);
    return TRUE;
}

extern "C" u16 func_0208ffe4(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3)
{
    Unk_0208ffe4_V t(a1, a2, a3);
    return func_0203ef38(a0, &t);
}

BOOL Unk_020e141c::vfunc_24()
{
    func_020f8cb8(unk_50, data_0213c7e0, (void *)func_0208ffe4);
    func_0208f86c(unk_35c);
    return TRUE;
}

BOOL Unk_020e141c::vfunc_0c()
{
    if (data_021d04a4 != NULL) {
        func_021010d0(data_021d04a4);
        data_021d04a4 = NULL;
    }
    if (data_021d04a8 != NULL) {
        func_0208f9c4(&unk_58);
        func_020e8558(data_021d04a8);
        data_021d04a8 = NULL;
    }
    func_0208f834(unk_35c);
    _ZN12Unk_0208f32c13func_0208f378Ev(unk_181c);
    data_021d049c = NULL;
    return TRUE;
}

extern "C" s16 func_0208ff30(Unk_0208fdcc_Obj *o)
{
    s32 idx = func_0204c0ac();
    return data_020e1180[o->unk_80][idx];
}

extern "C" s16 func_0208ff18()
{
    return data_020e13b4[func_0204c0ac()];
}

extern "C" void func_0208fe0c(Unk_0208fdcc_Obj *o)
{
    u32 f = o->unk_18->unk_00->unk_50;
    if ((f & 0x80) != 0) {
        volatile Unk_0208fe0c_U l0, l2, l4, l6, l8, la, lc, le;
        l4.v = func_02064f18();
        la.v = l4.v;
        l6.v = la.v;
        if ((f & 0x40) != 0) {
            l8.v = func_020b5b98();
        } else if ((f & 0x20) != 0) {
            l2.v = func_0208ff30(o);
            lc.v = l2.v;
            l8.v = lc.v;
        } else if ((f & 8) != 0) {
            l0.v = func_0208ff18();
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

extern "C" void func_0208fdcc(Unk_0208fdcc_Obj *o)
{
    s32 *v;
    func_0208fe0c(o);
    v = data_021d04ac;
    if (v != NULL) {
        o->unk_20 = v[0] + o->unk_18->unk_00->unk_04;
        o->unk_24 = v[1] + o->unk_18->unk_00->unk_08;
        o->unk_28 = v[2] + o->unk_18->unk_00->unk_0c;
    }
}

extern "C" void func_0208fdc0(Unk_0208f8fc_Entry *e)
{
    func_0208fdcc((Unk_0208fdcc_Obj *)e->unk_0c);
}

extern "C" s32 func_0208fdac(Unk_0208f8fc_Entry *e)
{
    func_0208fe0c((Unk_0208fdcc_Obj *)e->unk_0c);
    return 1;
}

extern "C" s32 func_0208fc88(s32 idx, s32 p1, s16 *p2, u32 *p3)
{
    Unk_0208f8fc_Pool *pool;
    Unk_020e141c *mgr;
    const Unk_0208fb20_Row *row;
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
    mgr = data_021d049c;
    row = &data_020cfafc[idx];
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
    data_021d04ac = (s32 *)p1;
    if (row->unk_00_1 != 0) {
        ctx = &mgr->unk_181c;
        i = 0;
        zero18 = 0;
        zero14 = 0;
        for (; i < count; i++) {
            o = (Unk_0208fb20_Obj *)_ZN12Unk_0208f32c13func_0208f354Ei(ctx, *ids);
            if (o == NULL) {
                h = (Unk_0208fb20_Obj *)func_020f8bb0(data_021d049c->unk_50, *ids, *p3);
                if (h != NULL) {
                    if (_ZN12Unk_0208f32c13func_0208f32cEii(ctx, *ids, h) != 0) {
                        h->unk_1c |= 2;
                        func_020f8b44(data_021d049c->unk_50, h, p1);
                        sub = h->unk_08;
                        if (p2 != NULL) {
                            sub->unk_20 = p2[zero14];
                        }
                    }
                }
            } else {
                func_020f8b44(data_021d049c->unk_50, o, p1);
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
            func_020f8bb0(data_021d049c->unk_50, *ids, *p3);
            ids++;
            p3++;
        }
    }
    data_021d04ac = NULL;
    return 1;
}

extern "C" s32 func_0208fb20(s32 idx, s32 p1, s16 *p2, Unk_0208f8fc_Cb *p3)
{
    Unk_0208f8fc_Pool *pool;
    s32 count;
    s32 ok = 1;
    s32 zero;
    Unk_0208f8fc_Tag x;
    void *list[10];
    const Unk_0208fb20_Row *row;
    u32 *ids;
    Unk_0208f8fc_Entry *e;
    s32 i;
    s32 j;

    Unk_0208fb20_Clear(list, 0x28);
    if (p1 == 0) {
        return 0;
    }
    pool = (Unk_0208f8fc_Pool *)data_021d049c;
    pool = (Unk_0208f8fc_Pool *)((u8 *)pool + 0x58);
    row = &data_020cfafc[idx];
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
    data_021d04ac = (s32 *)p1;
    zero = 0;
    for (i = 0; i < count; i++) {
        e = func_0208f98c(pool, *ids);
        if (e != NULL) {
            e->unk_08 = 1;
            e->unk_09 = i;
            Unk_0208fb20_GetTag(&x, e->unk_04);
            x.unk_01 = data_021d049c->unk_54;
            x.unk_02 = i;
            Unk_0208fb20_SetTag(e, x);
            Unk_0208f8fc_Cb *cb = &e->unk_10;
            if (cb != NULL) {
                cb->unk_00(e);
            }
        } else {
            e = func_0208f8fc(pool, *ids, p1, (s32)p2, p3, data_021d049c->unk_54, i);
            if (e == NULL) {
                ok = zero;
            }
        }
        if (ok == 0) {
            for (j = 0; j < i; j++) {
                func_0208fa88((Unk_0208f8fc_Entry *)list[j]);
            }
            break;
        }
        list[i] = e;
        ids++;
        p3++;
    }
    data_021d04ac = NULL;
    data_021d049c->unk_54++;
    return ok;
}

extern "C" void func_0208fb00(s32 a, void (*b)(Unk_0208f308 *))
{
    func_0208f820(data_021d049c->unk_35c, a, b);
}

extern "C" s32 func_0208faa0(Unk_0208f8fc_Entry *e, s32 id, s32 a2, s32 a3, Unk_0208f8fc_Cb *cb, Unk_0208f8fc_Tag tag)
{
    s32 r;
    u32 d, c, b;
    b = tag.unk_01;
    c = tag.unk_02;
    d = tag.unk_03;
    r = 0;
    e->unk_0c = (Unk_0208f8fc_Obj *)func_020f8c44(data_021d049c->unk_50, id, a2);
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

extern "C" void func_0208fa88(Unk_0208f8fc_Entry *e)
{
    if (e->unk_0c != NULL) {
        e->unk_0c->unk_1c = (e->unk_0c->unk_1c & ~1) | 1;
    }
    e->unk_00 = -1;
}


Unk_0208f8fc_Pool::Unk_0208f8fc_Pool()
{
    Unk_0208f8fc_Pool *p = this;
    Unk_0208f8fc_Entry *e;
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

extern "C" void func_0208f9f8(Unk_0208f8fc_Pool *p)
{
    s32 z = 0;
    s32 w = 0;
    Unk_0208f8fc_Entry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~w) {
            Unk_0208f8fc_Cb *cb = &e->unk_10;
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
                    func_0208fa88(e);
                    p->unk_00 = i;
                }
            }
        }
        e++;
    }
}

extern "C" void func_0208f9c4(Unk_0208f8fc_Pool *p)
{
    s32 z = 0;
    Unk_0208f8fc_Entry *e = p->unk_04;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (e->unk_00 != ~z) {
            e->unk_08 = 0;
            func_0208fa88(e);
            p->unk_00 = i;
        }
        e++;
    }
}

extern "C" Unk_0208f8fc_Entry *func_0208f98c(Unk_0208f8fc_Pool *p, s32 id)
{
    Unk_0208f8fc_Entry *e = p->unk_04;
    Unk_0208f8fc_Entry *r = NULL;
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

extern "C" Unk_0208f8fc_Entry *func_0208f8fc(Unk_0208f8fc_Pool *p, s32 id, s32 a2, s32 a3, Unk_0208f8fc_Cb *cb, u32 b, u32 c)
{
    Unk_0208f8fc_Entry *r = NULL;
    Unk_0208f8fc_Tag tag;
    s32 i;
    s32 cur;
    tag.unk_01 = b;
    tag.unk_02 = c;
    for (i = 0; i < 0x20; i++) {
        cur = p->unk_00;
        if (p->unk_04[cur].unk_00 == -1) {
            tag.unk_00 = cur;
            if (func_0208faa0(&p->unk_04[cur], id, a2, a3, cb, tag)) {
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

extern "C" void func_0208f8b4(Unk_0208f2e8 *b)
{
    s32 i;
    if (data_021d04a0 == NULL) {
        data_021d04a0 = func_020e8e7c(0x2800, data_021f482c);
    }
    for (i = 0; i < 4; i++) {
        func_0208f7e4(&b[i], i);
    }
}

extern "C" void func_0208f890(Unk_0208f2e8 *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f7c0(&b[i]);
    }
}

extern "C" void func_0208f86c(Unk_0208f2e8 *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f79c(&b[i]);
    }
}

extern "C" void func_0208f834(Unk_0208f2e8 *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_0208f76c(&b[i]);
    }
    if (data_021d04a0 != NULL) {
        func_020e8c94(data_021d04a0);
        data_021d04a0 = NULL;
    }
}

extern "C" void func_0208f820(Unk_0208f2e8 *b, s32 idx, void (*a)(Unk_0208f308 *))
{
    func_0208f738(&b[idx], a);
}

extern "C" void func_0208f7e4(Unk_0208f2e8 *b, s32 a)
{
    s32 i;
    b->unk_00 = a;
    _ZN12Unk_0208f6c013func_0208f6f0EP12Unk_0208f2e8(b->unk_524, b);
    for (i = 0; i < 4; i++) {
        _ZN12Unk_0208f30813func_0208f568EP12Unk_0208f2e8(&b->unk_04[i], b);
    }
}

extern "C" void func_0208f7c0(Unk_0208f2e8 *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN12Unk_0208f30813func_0208f508Ev(&b->unk_04[i]);
    }
}

extern "C" void func_0208f79c(Unk_0208f2e8 *b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN12Unk_0208f30813func_0208f480Ev(&b->unk_04[i]);
    }
}

extern "C" void func_0208f76c(Unk_0208f2e8 *b)
{
    s32 i;
    _ZN12Unk_0208f6c013func_0208f6c0Ev(b->unk_524);
    for (i = 0; i < 4; i++) {
        _ZN12Unk_0208f30813func_0208f474Ev(&b->unk_04[i]);
    }
}

extern "C" void func_0208f738(Unk_0208f2e8 *b, void (*a)(Unk_0208f308 *))
{
    s32 i;
    Unk_0208f308 *c = b->unk_04;
    for (i = 0; i < 4; i++) {
        if (c->unk_00 == 0) {
            _ZN12Unk_0208f30813func_0208f3c8EP12Unk_0208f2e8PFvPS_E(c, b, a);
            break;
        }
        c++;
    }
}

void Unk_0208f6c0::func_0208f6f0(Unk_0208f2e8 *src) {
    s32 idx = src->unk_00;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (data_020e13e4[idx][i] != 0) {
            unk_00[i] = func_020641ec(data_020e13e4[idx][i], data_021d04a0, 4, 0);
        } else {
            unk_00[i] = 0;
        }
    }
}

void Unk_0208f6c0::func_0208f6c0() {
    s32 i;
    u32 *z = 0;
    for (i = 0; i < 3; i++) {
        if (unk_00[i] != 0) {
            func_020e85fc(data_021d04a0, (void *)unk_00[i]);
            unk_00[i] = (u32)z;
        }
    }
}

BOOL Unk_0208f308::func_0208f694(s32 idx) {
    BOOL r = TRUE;
    if (!_ZN12Unk_020dbd3413func_02054c2cEPvS0_(&unk_24, idx + 0x6d656666, data_020e1190[idx])) {
        r = FALSE;
    }
    return r;
}

void Unk_0208f308::func_0208f568(Unk_0208f2e8 *src) {
    s32 idx = src->unk_00;
    unk_00 = 0;
    if (func_0208f694(idx)) {
        u32 *r = src->unk_524;
        if (r[0] != 0) {
            _ZN12Unk_020dbd3413func_02054b38EPv(&unk_24, data_021d04a0);
            _ZN12Unk_020dbd5413func_02054800EPv(&unk_24, data_021d04a0);
            s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
            _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_24, t, 1, 0x1000, 0, 0);
            _ZN12Unk_020dbd5413func_02054710Ev(&unk_24);
        }
        if (r[1] != 0) {
            unk_e0 = 1;
            Unk_020dbe4c *e = &unk_e8[1];
            _ZN12Unk_020dbe4c13func_02055bccEjPv(e, unk_24.unk_5c, data_021d04a0);
            s32 u = func_02106634(func_02106618((void *)r[1]), 0);
            _ZN12Unk_020dbe4c13func_02055b38Eiiit(e, u, 1, 0x1000, 0);
            _ZN12Unk_020dbe4c13func_02055a9cEj(e, _ZN12Unk_020dbe3413func_020554c0Ev(&unk_24));
        } else {
            unk_e0 = 0;
        }
        if (r[2] != 0) {
            unk_e4 = 1;
            Unk_020dbe4c *e = &unk_e8[2];
            _ZN12Unk_020dbe4c13func_02055b90EjPv(e, unk_24.unk_5c, data_021d04a0);
            s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
            _ZN12Unk_020dbe4c13func_02055b38Eiiit(e, u, 1, 0x1000, 0);
            _ZN12Unk_020dbe4c13func_02055a9cEj(e, _ZN12Unk_020dbe3413func_020554c0Ev(&unk_24));
        } else {
            unk_e4 = 0;
        }
    }
}

void Unk_0208f308::func_0208f508() {
    if (unk_00 != 0) {
        _ZN12Unk_020dbd5413func_020547e4Ev(&unk_24);
        s32 i;
        for (i = 1; i < 3; i++) {
            if ((&unk_dc)[i] != 0) {
                _ZN12Unk_020dbe7c13func_020566bcEv(&unk_e8[i]);
                *unk_e8[i].unk_18 = unk_e8[i].unk_08;
            }
        }
        if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_24.unk_9c) != 0) {
            unk_00 = 0;
        }
    }
}

void Unk_0208f308::func_0208f480() {
    if (unk_00 != 0) {
        s32 v[3];
        s32 r = func_0203ef38(v, unk_04);
        func_020e8388(data_021f47e0, v[0], v[1], v[2]);
        func_020e8434(data_021f47e0, r);
        func_020e8464(data_021f47e0, unk_1c, unk_1e, unk_20);
        func_020e84f8(data_021f47e0, unk_10, unk_14, unk_18);
        *(Unk_0208f480_Mtx *)unk_24.unk_64 = *(Unk_0208f480_Mtx *)data_021f47e0;
        _ZN12Unk_020dbd5413func_020547ccEPv(&unk_24, 0);
        volatile u16 a, b;
        a = func_02064cc4();
        b = a;
        func_0210612c(unk_24.unk_5c, 0, b);
    }
}

void Unk_0208f308::func_0208f474() {
    _ZN12Unk_020dbd3413func_02054b14Ev(&unk_24);
}

void Unk_0208f308::func_0208f3c8(Unk_0208f2e8 *src, void (*cb)(Unk_0208f308 *)) {
    unk_00 = 1;
    unk_10 = 0x1000;
    unk_14 = 0x1000;
    unk_18 = 0x1000;
    unk_1c = 0;
    unk_1e = 0;
    unk_20 = 0;
    u32 *r = src->unk_524;
    s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
    _ZN12Unk_0205454c13func_02054720Eiiitt(&unk_24, t, 1, 0x1000, 0, 0);
    if (unk_e0 != 0) {
        s32 u = func_02106634(func_02106618((void *)r[1]), 0);
        _ZN12Unk_020dbe4c13func_02055b38Eiiit(&unk_e8[1], u, 1, 0x1000, 0);
    }
    if (unk_e4 != 0) {
        s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
        _ZN12Unk_020dbe4c13func_02055b38Eiiit(&unk_e8[2], u, 1, 0x1000, 0);
    }
    cb(this);
}

void Unk_0208f32c_Pair::func_0208f3bc() {
    unk_00 = -1;
    unk_04 = 0;
}

void Unk_0208f32c_Pair::func_0208f3b8() {}

void Unk_0208f32c::func_0208f398() {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->func_0208f3bc();
    }
}

void Unk_0208f32c::func_0208f378() {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->func_0208f3b8();
    }
}

s32 Unk_0208f32c::func_0208f354(s32 key) {
    Unk_0208f32c_Pair *p = unk_00;
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

BOOL Unk_0208f32c::func_0208f32c(s32 key, s32 val) {
    Unk_0208f32c_Pair *p = unk_00;
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

Unk_0208f308::~Unk_0208f308() {
}

Unk_0208f2e8::~Unk_0208f2e8() {
}

