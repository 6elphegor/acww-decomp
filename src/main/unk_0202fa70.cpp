#include "types.h"

struct Unk_0202f660_V3 { s32 x, y, z; };
struct Unk_0202f2ac_V3 {
    s32 x, y, z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
    Unk_0202f2ac_V3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
};
struct Unk_0202ff44_V3;
struct Unk_02030608_Obj;
struct Unk_02031304_Vec;
struct Unk_020314f4_Vec;
struct Unk_020d8d3cX;
class Unk_02032dc4_Cb;
class Unk_02033edc;

struct Unk_020331a8_Cell {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11, unk_12, unk_13, unk_14;
};

// one entry of the terrain attribute table data_020c7c4c (0x7c entries of 30 bytes)
struct Unk_020c7c4c_Ent {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ u8 unk_08, unk_09, unk_0a, unk_0b;
    /* 0x0c */ u8 unk_0c, unk_0d, unk_0e, unk_0f;
    /* 0x10 */ u8 unk_10, unk_11, unk_12, unk_13;
    /* 0x14 */ u8 unk_14, unk_15, unk_16, unk_17;
    /* 0x18 */ u8 unk_18, unk_19, unk_1a, unk_1b;
    /* 0x1c */ s16 unk_1c;
};
typedef u32 (*Unk_020c7c3c_Fn)(s32);

extern const u8 data_020c7c18[4];
extern const s32 data_020c7c1c;
extern const u32 data_020c7c20[3];
extern const Unk_020c7c3c_Fn data_020c7c2c[4];
extern const Unk_020c7c3c_Fn data_020c7c3c[4];
extern const Unk_020c7c4c_Ent data_020c7c4c[0x7c];

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffcb2c(...);
void func_01ffd070(void *out, void *a, void *b);
void VEC_Subtract(void *a, void *b, void *c);
void func_020e9960(void *out, void *a, void *b);
s32 func_020e94f8(void *v);
void func_020e93a0(void *v, ...);

// functions of this unit that the files declared with different stand-in prototypes
void func_02030608(Unk_0202ff44_V3 *a, Unk_0202ff44_V3 *b, Unk_02030608_Obj *o, u32 flags, u8 p5, u8 p6);
s32 func_0203081c(Unk_0202ff44_V3 *p, u32 *out, u32 flags0);
u32 func_02030d58(s32 a);
u32 func_02031154(s32 x, s32 y);
BOOL func_02031304(Unk_02031304_Vec *v);
Unk_020d8d3cX *func_0203139c();
u32 func_020313f4(s32 x, s32 y, u32 c);
u32 func_02031474(s32 x, s32 y, u32 c);
s32 func_020314f4(Unk_020314f4_Vec *p);
void func_02031554(s32 *a, s32 *b);
void func_02031574(s32 *a, s32 *b);
u32 func_02031594(s32 i);
void func_02031b78(void *p);
void func_02031d5c(s32 *a, s32 b, s32 c);
void func_02031dfc(void *p);
void *func_02032218(void *p);
void *func_02032228(void *p);
void func_02033988(void *obj);

// methods called through a pointer to another view of the object (the names are the symbols)
void _ZN12Unk_0202f04813func_0202f048Eii(void *p, s32 a, s32 b);
void _ZN12Unk_0203343813func_02033438EP15Unk_0202f2ac_V3ii(void *self, void *v, s32 a, s32 b);
void _ZN12Unk_0203389c13func_0203389cEiii(void *self, s32 a, s32 b, s32 c);
s32 _ZN12Unk_0203389c13func_02033914Ei(void *obj, s32 a);
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *obj, void *v, s32 a, s32 b);
Unk_020331a8_Cell *_ZN12Unk_02033b4013func_02033a0cEii(void *grid, s32 x, s32 z);
}

// ---- 2D vector; its functions and the empty destructor at 0x0202ea3c belong to the unit at 0x0202e9d4
class Unk_0202f048 {
public:
    s32 x, y;
    void func_0202f048(s32 a, s32 b);
    Unk_0202f048 *func_0202f030(Unk_0202f048 *p);
    s64 func_0202ef84(Unk_0202f048 *p);
};

struct Unk_0202ea3c : Unk_0202f048 {
    Unk_0202ea3c() { func_0202f048(0, 0); }
    ~Unk_0202ea3c();
};

// ---- 3D vector with the destructor at 0x02000c8c
struct Unk_02000c8c {
    s32 unk_00, unk_04, unk_08;
    Unk_02000c8c();
    Unk_02000c8c(s32 a, s32 b, s32 c) { unk_00 = a; unk_04 = b; unk_08 = c; }
    ~Unk_02000c8c();
};
extern Unk_02000c8c data_021bfa4c;
extern Unk_02000c8c data_021bfa70;
extern Unk_02033edc data_021bfab8;

// ---- triangle (vtable 0x020d8cc4, unit at 0x0202e9d4)
class Unk_020d8cccX {
public:
    Unk_020d8cccX();
    Unk_020d8cccX(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
    ~Unk_020d8cccX();
    virtual BOOL vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    Unk_0202f2ac_V3 unk_04, unk_10, unk_1c, unk_28;
    s32 unk_34;
    BOOL func_0202f2d8(Unk_0202f2ac_V3 *p);
    BOOL func_0202f364(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
};

// ---- {attribute, callback} pair (functions 0x020339cc-0x020339f8; symbols.txt: Unk_020339cc, see aliases.txt)
class Unk_020339ccX {
public:
    Unk_020339ccX();
    ~Unk_020339ccX();
    void func_020339cc(const Unk_020339ccX &o);
    void func_020339d8(u32 a, u32 b);

    u8 unk_00;
    Unk_02032dc4_Cb *f_04;
};

// ---- the two list owners inside data_021bfab8 (empty classes)
class Unk_02031b84 {
public:
    Unk_02031b84();
    ~Unk_02031b84();
};

class Unk_02031e08 {
public:
    Unk_02031e08();
    ~Unk_02031e08();
};

// ---------------------------------------------------------------- unk_0202f600.cpp
struct Unk_0202f7b8_V3 : Unk_0202f660_V3 {
    Unk_0202f7b8_V3() {}
    Unk_0202f7b8_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};
extern "C" s32 FX_Div(s32 a, s32 b);
extern "C" s32 FX_Sqrt(s32 a);
extern "C" s32 func_020e9650(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
class Unk_0202fdf0 {
public:
    Unk_0202f660_V3 unk_00;
    s32 unk_0c;

    BOOL func_0202fdf0(Unk_0202f660_V3 *pt);
    void func_0202fe54(Unk_0202f660_V3 *pos, s32 radius);
    ~Unk_0202fdf0();
    Unk_0202fdf0(Unk_0202f660_V3 *pos, s32 radius);
    Unk_0202fdf0();
};
class Unk_0202f7b8X : public Unk_0202fdf0 {
public:
    s32 unk_10;

    BOOL func_0202fa70(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fc20(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fccc(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fcfc(Unk_0202f660_V3 *pos, s32 r);
    void func_0202fd8c(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    ~Unk_0202f7b8X();
    Unk_0202f7b8X(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    Unk_0202f7b8X();
};
struct Unk_0202fe84_Range { s32 lo, hi; };
struct Unk_0202fe84_Pad { s32 v[6]; Unk_0202fe84_Pad() {} ~Unk_0202fe84_Pad() {} };

// ---------------------------------------------------------------- unk_0202ff44.cpp
struct Unk_0202ff44_V3 { s32 x, y, z; };
struct Unk_0202ff44_Obj {
    virtual void vfunc_00(void *a);
    virtual void vfunc_04(void *a);
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};
struct Unk_02030608_Obj {
    virtual void vfunc_00(void *a);
    virtual void vfunc_04(void *a);
    virtual void vfunc_08(void *a);
};
struct Unk_01ffcb5c_Chunk { u8 *unk_00; u8 *unk_04; };
extern "C" Unk_01ffcb5c_Chunk *func_01ffcb5c(s32 x, s32 z);
extern "C" void func_020304b4(s32 x, s32 z, s32 v);
extern "C" void func_02030494(s32 x, s32 z, s32 v);
#define TB(i, f, d) ((i) < 0x7c ? data_020c7c4c[i].f : (d))
#define TS(i, d) ((i) < 0x7c ? ((v = data_020c7c4c[i].unk_06) > 0 ? 1 : v) : (d))
extern "C" s32 _ZN12Unk_02033f7013func_02033e60Ev(void *p);
extern "C" s32 _ZN12Unk_02033d4c13func_02033e48Ev(void *p);
extern "C" void _ZN12Unk_02033d4c13func_02033e10Eii(void *p, s32 a, s32 b);
extern "C" void _ZN12Unk_02033d4c13func_02033db0Ev(void *p);
extern "C" BOOL _ZN12Unk_020339f813func_020339f8Ei(void *p, s32 v);
extern "C" void func_02030380(s32 idx);
extern "C" void func_0203030c(s32 idx);
extern "C" void func_02030598(s32 v);
extern "C" void _ZN12Unk_02033b4013func_02033a5cEiiiii(void *p, s32 a, s32 b, s32 c, s32 d, u32 e);
extern "C" void _ZN12Unk_0203249413func_020324d8EPviiiii(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern "C" void _ZN12Unk_0203249413func_02032494EP12Unk_02032d60(void *a, void *b);
extern "C" void _ZN12Unk_02032d6013func_02032864EPviiiii(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern "C" void _ZN12Unk_0203317013func_020331a8EP12Unk_02033a0ciiii(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
extern "C" BOOL func_020307c4(s32 x, s32 z, s32 *p, s32 *q, s32 *r);
extern "C" s32 func_020307ac(s32 x, s32 z);
struct Unk_0203081c_A {
    u8 unk_00;
    u8 pad_01[0x13];
};
struct Unk_0203081c_B {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x0c];
};
enum Unk_0203081c_Flags { Unk_0203081c_Flags_0 = 0, Unk_0203081c_Flags_2 = 2, Unk_0203081c_Flags_4 = 4, Unk_0203081c_Flags_All = 0x7fffffff };

// ---------------------------------------------------------------- unk_020308b4.cpp
struct Unk_02030e48_Vec { s32 x, y, z; };
static inline void Unk_02030e48_Set(Unk_02030e48_Vec *v, s32 x, s32 y, s32 z) { v->x = x; v->y = y; v->z = z; }
struct Unk_02033b94 {
    s32 unk_00[4];
    u8 unk_10[4];
    u8 unk_14;
};
extern "C" s32 func_02031284(s32 a, s32 b);
extern "C" BOOL func_020311c0(s32 a, s32 b);
extern "C" BOOL func_02030e48(Unk_02030e48_Vec *pos, s32 r, s32 *out, s32 flags);
extern "C" BOOL func_02030d9c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, u32 dist, s32 *dir, u32 count, s32 r, s32 flags);
struct Unk_020310f8_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 d, s32 e);
};
extern "C" BOOL func_02031260(s32 a, s32 b);
struct Unk_02030f10_Vec : Unk_02030e48_Vec { Unk_02030f10_Vec() {} };
static inline BOOL Unk_02030f10_Flat(Unk_02033b94 *T)
{
    BOOL f = FALSE, e = FALSE;
    if (T->unk_00[0] == T->unk_00[1] && T->unk_00[0] == T->unk_00[2]) e = TRUE;
    if (e && T->unk_00[0] == T->unk_00[3]) f = TRUE;
    return f;
}
struct Unk_02030f10_L { Unk_02030f10_Vec R; Unk_02033b94 T; Unk_02030f10_Vec S; Unk_02033b94 T2; };
static inline BOOL Unk_02030be4_A(Unk_02033b94 *T)
{
    BOOL g = FALSE, f = FALSE, e = FALSE;
    if (T->unk_10[0] == 0x14 && T->unk_10[1] == 0x14) e = TRUE;
    if (e && T->unk_10[2] == 0x14) f = TRUE;
    if (f && T->unk_10[3] == 0x14) g = TRUE;
    return g;
}
static inline BOOL Unk_02030be4_B(Unk_02033b94 *T)
{
    if (T->unk_10[0] == 0x14 && T->unk_10[1] == 0x14 && T->unk_10[2] == 0x14 && T->unk_10[3] == 0x14) return TRUE;
    return FALSE;
}
// result of func_02030908 (an Unk_020339ccX and the hit data)
struct Unk_02030908_D {
    u8 unk_00;
    u32 unk_04;
    Unk_02030e48_Vec unk_08;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};
struct Unk_020309d4_Owner {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    Unk_02030e48_Vec unk_24;
};
extern "C" void VEC_Add(Unk_02030e48_Vec *out, Unk_02030e48_Vec *a, Unk_02030e48_Vec *b);
extern "C" void _ZN12Unk_0203223813func_020323d8Ev(Unk_020309d4_Owner *o);
extern "C" void _ZN12Unk_0203223813func_02032238Ei(Unk_020309d4_Owner *o, s32 v);
extern "C" Unk_02033b94 *_ZN12Unk_02033b3c13func_02033b94Eiii(Unk_02033b94 *out, s32 x, s32 z, s32 flag);
extern "C" Unk_02033b94 *_ZN12Unk_02033b3c13func_02033d2cEP16Unk_0203389c_Veci(Unk_02033b94 *out, Unk_02030e48_Vec *pos, s32 flag);

// ---------------------------------------------------------------- unk_020311c0.cpp
struct Unk_0203182c_Vec { s32 x, y, z; };
struct Unk_02031304_Vec { s32 x, y, z; };
extern "C" BOOL func_020307c4(s32 x, s32 z, s32 *a, s32 *b, s32 *c);
struct Unk_020314f4_Vec { s32 x, y, z; };
struct Unk_020d8d3cX {
    Unk_020d8d3cX();
    virtual ~Unk_020d8d3cX();
    virtual s32 vfunc_08();
};
struct Unk_020d8ce8 {
    u8 pad_000[0x120];
    Unk_020d8d3cX *unk_120;
};
struct Unk_020318cc_Node {
    u8 pad_00[0x2c];
    Unk_020318cc_Node *unk_2c;
};
extern "C" s32 _ZN13Unk_020d8cf4X13func_02031d04Ev(Unk_020318cc_Node *n);
struct Unk_02031908_Vec { s32 x, y, z; };
extern "C" BOOL _ZN13Unk_020d8cf4X13func_02031b90EiiiP16Unk_02031b90_VecsS1_(Unk_020318cc_Node *n, s32 a, s32 b, s32 c, s32 d, s32 e, Unk_02031908_Vec *v);
struct Unk_02031960_P8 { s32 a, b; };
struct Unk_02031618 {
    u8 pad_00[4];
    Unk_0203182c_Vec unk_04;
    Unk_0203182c_Vec unk_10;
    Unk_0203182c_Vec unk_1c;
    s16 unk_28;
    s16 unk_2a;
    Unk_02031618 *unk_2c;
    Unk_0203182c_Vec unk_30[4];
    Unk_02031960_P8 unk_60[4];
    Unk_0203182c_Vec unk_80;
    Unk_0203182c_Vec unk_8c;

    BOOL func_02031960(Unk_0203182c_Vec *a, s32 ang, Unk_0203182c_Vec *b);
};
extern u8 data_021f47e0[];
struct Unk_02031960_V : Unk_0203182c_Vec { Unk_02031960_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; } };
extern "C" s32 func_020e96ec(void *a, void *b);
extern "C" void func_020e8388(void *m, s32 x, s32 y, s32 z);
extern "C" void func_020e8404(void *m, s32 ang);
extern "C" void func_020e84f8(void *m, s32 x, s32 y, s32 z);
extern "C" void MTX_MultVec43(Unk_0203182c_Vec *p, void *m, Unk_0203182c_Vec *out);
extern "C" void _ZN12Unk_0202f04813func_0202ef18Es(Unk_02031960_P8 *o, s32 ang);
extern "C" void _ZN12Unk_020d8d50C1EP12Unk_0202f048S1_S1_iijj(void *out, Unk_02031960_P8 *a, Unk_02031960_P8 *b, Unk_02031960_P8 *c, s32 d, s32 e, s32 f, Unk_02031618 *n);
extern "C" void _ZN12Unk_02032d6013func_02032d98EP17Unk_02032d60_Elem(s32 a, void *o);
extern "C" void _ZN12Unk_020d8d50D1Ev(void *o);
extern "C" void _ZN12Unk_0203317013func_02033170EP15Unk_0202f2ac_V3S1_S1_S1_jj(s32 a, Unk_0203182c_Vec *p, Unk_0203182c_Vec *q, Unk_0203182c_Vec *r, void *d, s32 e, Unk_02031618 *n);
static inline s32 Unk_02031618_Abs(s32 v) { if (v < 0) v = -v; return v; }
extern "C" BOOL func_0203182c(Unk_0203182c_Vec *a, Unk_0203182c_Vec *b, Unk_0203182c_Vec *c, Unk_0203182c_Vec *d);

// ---------------------------------------------------------------- unk_02031b78.cpp
struct Unk_02031b90_Vec {
    s32 x, y, z;
};
extern "C" void _ZN12Unk_0203161813func_02031960EP16Unk_0203182c_VeciS1_(void* self, Unk_02031b90_Vec* a, s32 b, Unk_02031b90_Vec* c);
struct Unk_020d8cf4X {
    virtual void vfunc_00();
    s32 unk_04, unk_08, unk_0c;
    s32 unk_10, unk_14, unk_18;
    s32 unk_1c, unk_20, unk_24;
    s16 unk_28;
    s16 unk_2a;
    s32 unk_2c;
    Unk_02000c8c unk_30[4];
    Unk_0202ea3c unk_60[4];
    u8 unk_80[0x18];
    u8 unk_98;

    Unk_020d8cf4X();
    ~Unk_020d8cf4X();
    void func_02031b90(s32 a, s32 b, s32 c, Unk_02031b90_Vec* p, s16 s, Unk_02031b90_Vec* q);
    void func_02031d04();
};
struct Unk_02031e10_Vec {
    s32 x, y, z;
};
extern "C" s64 func_01ffd028(void* v, void* p);
extern "C" void func_0202f3a8(void* out, Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c);
extern "C" void _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(void* self, Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, void* d);
struct Unk_020d8d74 : Unk_020d8cccX {
    Unk_020d8d74* unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;

    Unk_020d8d74();
    virtual void vfunc_10(s32 a, s32 c, s32 b) = 0;
    void func_02031e10(Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, s32 d);
    s32* func_02031ea0();
    void func_02031ea4();
};
// ---------------------------------------------------------------- Unk_020d8d14 (triangle collision, three block layouts)
struct Unk_02031ed4_Vec {
    s32 x, y, z;
};
struct Unk_02031ed4_Tmp : Unk_02031ed4_Vec {
    Unk_02031ed4_Tmp() {}
};
struct Unk_02031ed4_Aux {
    u8 unk_00;
    s32 unk_04;
};
struct Unk_02031ed4_Ent {
    Unk_02031ed4_Vec unk_00;
    u8 unk_0c[8];
    Unk_02031ed4_Aux unk_14;
    u8 unk_1c[8];
};
extern "C" s32 _ZN13Unk_0202f7b8X13func_0202fc20EP15Unk_0202f660_V3S1_(void* ent, Unk_02031ed4_Vec* a, void* b);
extern "C" s32 _ZN13Unk_0202f7b8X13func_0202fa70EP15Unk_0202f660_V3S1_(void* ent, Unk_02031ed4_Vec* a, void* b);
extern "C" void _ZN13Unk_020339ccX13func_020339ccERKS_(void* dst, void* src);
extern "C" s32 _ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(void* a, void* b);
extern "C" s32 _ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(void* a, void* out, void* b, void* c);
static inline BOOL Unk_02031f90_Ge0(s32 v) {
    if (v >= 0) {
        return TRUE;
    }
    return FALSE;
}
// ---- collision visitor base (vtable 0x020d8cf8)
struct Unk_020d8d00 {
    Unk_020d8d00();
    ~Unk_020d8d00();
    virtual void vfunc_00(u8 *p);
    virtual void vfunc_04(u8 *p);
    virtual void vfunc_08(u8 *p);
};
struct Unk_02032028_V {
    s32 x, y, z;
    Unk_02032028_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_02031f90_Ent {
    u8 unk_00[0x28];
    Unk_02031ed4_Vec unk_28;
    u8 unk_34[4];
    Unk_02031ed4_Aux unk_38;
};
struct Unk_02032028_Ent {
    u8 unk_00[4];
    s32 unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18;
    u8 unk_1c[4];
    Unk_02031ed4_Aux unk_20;
    u8 unk_28[4];
    s32 unk_2c;
};
struct Unk_02032028_L4 {
    Unk_02032028_V v4;
    s32 pad[3];
    Unk_02032028_L4(s32 a, s32 b, s32 c) : v4(a, b, c) {}
};
// ---------------------------------------------------------------- Unk_02032238 (accumulated collision flags) and friends
struct Unk_020323f8 {
    s16 unk_00[2];
    u8 unk_04;
    u8 unk_05[3];
    s32 unk_08[2];
    s32 unk_10[2];

    Unk_020323f8();
    ~Unk_020323f8();
    BOOL func_020323f8(s32 a, s32 b, s32 c);
    void func_0203245c();
};
struct Unk_02032238 {
    u32 unk_00;
    volatile u32 unk_04;
    s32 unk_08;
    Unk_020323f8 unk_0c;
    s32 unk_24, unk_28, unk_2c;

    Unk_02032238();
    ~Unk_02032238();
    void func_020323c8();
    void func_020323d8();
    void func_02032238(s32 v);
};
// ---------------------------------------------------------------- Unk_020d8d28 (collision accumulator driver)
struct Unk_020d8d28_Best {
    s32 unk_00;
    s32 unk_04;
};
extern "C" s32 _ZN12Unk_0203249413func_02032604EP15Unk_02032808_V3iPj(u8* p, s32 a, void* b, s32* out, s32 c, s32 d);
extern "C" void _ZN12Unk_0203249413func_02032658EP15Unk_02032808_V3iPv(u8* p, s32 a, s32 b, void* c, s32 d, s32 e);
extern "C" void _ZN12Unk_02032dc413func_02032dc4EP15Unk_0202f2ac_V3S1_iP16Unk_02032dc4_Outi(u8* p, s32 a, void* b, s32 c, void* d, s32 e);
extern "C" s32 _ZN12Unk_020d8ccc13func_0202f2d8EP15Unk_0202f2ac_V3(void* p, void* v);
extern "C" void* _ZN13Unk_020339ccXD2Ev(void* p);
extern "C" void* _ZN13Unk_020339ccXC2Ev(void* p);
struct Unk_020d8d28_Dead {
    s32 x, y, z;
    Unk_020d8d28_Dead() {}
    ~Unk_020d8d28_Dead() {}
};
struct Unk_020d8d28 : Unk_020d8d00 {
    Unk_02032238* unk_04;
    Unk_020d8d28_Best* unk_08;
    Unk_02030e48_Vec unk_0c;
    u16 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u32 unk_24;

    Unk_020d8d28() {}
    virtual void vfunc_00(u8* p);
    virtual void vfunc_04(u8* p);
    virtual void vfunc_08(u8* p);
};

struct Unk_020d8d14 : Unk_020d8d00 {
    Unk_02031ed4_Vec* volatile unk_04;
    Unk_02031ed4_Vec unk_08;
    u32 unk_14;
    u8 unk_18;
    u8 unk_19[3];
    Unk_020339ccX unk_1c;
    Unk_02031ed4_Vec unk_24;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;

    Unk_020d8d14() {}
    virtual void vfunc_00(u8* p);
    virtual void vfunc_04(u8* p);
    virtual void vfunc_08(u8* p);
};

// ---------------------------------------------------------------- unk_02032494.cpp
struct Unk_02032808_V2 {
    s32 x, z;
};
struct Unk_02032808_V3 {
    s32 x, y, z;
};
extern "C" void _ZN12Unk_0202f04813func_0202efe4EPS_S0_(Unk_02032808_V2 *out, Unk_02032808_V2 *a, Unk_02032808_V2 *b);
extern "C" void _ZN12Unk_0202f04813func_0202ef40Ev(Unk_02032808_V2 *v);
extern "C" void _ZN12Unk_0202f04813func_0202eeecEPS_S0_(Unk_02032808_V2 *out, Unk_02032808_V2 *a, Unk_02032808_V2 *b);
extern "C" s32 func_020e7b98(s32 x, s32 z);
extern "C" void _ZN12Unk_020323f813func_020323f8Eiii(void *p, s32 ang, s32 a, s32 b);
struct Unk_02032864_Static : Unk_02032808_V2 {
    inline Unk_02032864_Static(s32 x, s32 z) {
        _ZN12Unk_0202f04813func_0202f048Eii(this, x, z);
    }
    ~Unk_02032864_Static();
};
struct Unk_02032808 : Unk_0202f7b8X, Unk_020339ccX {
    Unk_02032808();
    ~Unk_02032808();
    void func_02032808(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5);
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s16 unk_20;
    /* 0x22 */ s16 unk_22;
};

// the same object without its base classes
struct Unk_02032808_Flat {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10;
    u8 unk_14;
    u8 pad[7];
    s32 unk_1c;
    s16 unk_20;
    s16 unk_22;
};
struct Unk_02032d60_Elem {
    u8 pad[0x30];
};
extern "C" void _ZN12Unk_020d8d5013func_02033044EPS_(void *dst, void *src);
struct Unk_02032d60 {
    BOOL func_02032d60(void *a, void *b, void *c, s32 d0, s32 d1, s32 d2, s32 d3);
    BOOL func_02032d98(Unk_02032d60_Elem *e);
    
    void func_02032864(void *grid, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);
    Unk_02032d60_Elem unk_00[0x18];
    /* 0x480 */ volatile u32 unk_480;
};
extern "C" void *_ZN12Unk_02033d4c13func_02033d4cEii(void *p, s32 x, s32 z);
BOOL func_0203270c(Unk_02032808 *a, Unk_02032d60 *out, Unk_02032808 *b);
struct Unk_02032494 {
    Unk_02032494();
    ~Unk_02032494();
    void func_02032494(Unk_02032d60 *out);
    void func_020324d8(void *obj, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);
    BOOL func_020325cc(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5);
    BOOL func_02032604(Unk_02032808_V3 *pos, s32 x, u32 *out);
    BOOL func_02032658(Unk_02032808_V3 *pos, s32 x, void *q);
    volatile u32 unk_00;
    Unk_02032808 unk_04[16];
};
struct Unk_020324d8_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};

// ---------------------------------------------------------------- unk_02032dc4.cpp
extern "C" s32 func_020e7b98(s32 a, s32 b);
extern "C" BOOL func_02031360(s32 id, s32 a);
extern s32 data_021bf988[];
struct Unk_02032dc4_Out {
    s32 unk_00, unk_04, unk_08;
    Unk_020323f8 unk_0c;
};
static inline void Unk_02032dc4_Set(Unk_0202f2ac_V3 *p, s32 y, s32 x, s32 z) {
    p->x = x;
    p->y = y;
    p->z = z;
}
struct Unk_02032dc4_V3 : Unk_0202f2ac_V3 {
    Unk_02032dc4_V3() {}
    Unk_02032dc4_V3(s32 b, s32 a, s32 c, s32 dummy) : Unk_0202f2ac_V3(a, b, c) {}
};
class Unk_020d8d50;
class Unk_02032dc4_Cb {
public:
    virtual void vfunc_00(Unk_020d8d50 *e, s32 arg, s32 r);
};
class Unk_020d8ce4 {
public:
    virtual BOOL vfunc_00();
    Unk_020d8ce4() {
        unk_04.func_0202f048(0, 0);
        unk_0c.func_0202f048(0, 0);
        unk_14.func_0202f048(0, 0);
    }
    ~Unk_020d8ce4();
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    void func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
    BOOL func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
    BOOL func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
    BOOL func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
};
// declared before Unk_020d8d50: the three weak vtables (0x020d8d48, d54, d6c) come out in reverse declaration order
class Unk_020d8d5c : public Unk_020d8cccX, public Unk_020339ccX {
public:
    Unk_020d8d5c();
    ~Unk_020d8d5c();
    BOOL func_020333c4(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f);
};

class Unk_020d8d50 : public Unk_020d8ce4, public Unk_020339ccX {
public:
    Unk_020d8d50();
    Unk_020d8d50(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7);
    ~Unk_020d8d50();
    virtual BOOL vfunc_00()
    {
        if (unk_28 == 3) {
            return FALSE;
        }
        return TRUE;
    }
    s32 unk_28, unk_2c;
    BOOL func_02033010(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7);
    BOOL func_02033044(Unk_020d8d50 *o);
};
class Unk_02032dc4 {
public:
    Unk_020d8d50 unk_00[24];
    u32 unk_480;
    Unk_02032dc4();
    ~Unk_02032dc4();
    BOOL func_02032dc4(Unk_0202f2ac_V3 *pos, Unk_0202f2ac_V3 *q, s32 r, Unk_02032dc4_Out *out, s32 arg);
};
class Unk_02033170 {
public:
    Unk_020d8d5c unk_00[40];
    volatile u32 unk_a00;
    Unk_02033170();
    ~Unk_02033170();
    void func_020331a8(class Unk_02033a0c *grid, s32 x0, s32 x1, s32 y0, s32 y1);
    BOOL func_02033170(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f);
};
static inline void Unk_020331a8_SetU(u32 *v, s32 a, s32 b, s32 c) { v[0] = a; v[1] = b; v[2] = c; }
struct Unk_02033438_G {
    u8 pad_00[0x132];
    s16 unk_132;
    s16 unk_134;
};
static inline void Unk_02033438_Set(Unk_0202f2ac_V3 *p, s32 x, s32 y, s32 z) {
    p->x = x;
    p->y = y;
    p->z = z;
}
class Unk_02033438 {
public:
    u8 unk_00;
    Unk_0202f2ac_V3 unk_04;
    Unk_0202f2ac_V3 unk_10;
    s32 unk_1c, unk_20;
    Unk_0202f2ac_V3 unk_24;
    s32 unk_30, unk_34, unk_38, unk_3c;
    void func_02033438(Unk_0202f2ac_V3 *pos, s32 flag, s32 arg);
};

// ---------------------------------------------------------------- unk_0203389c.cpp
struct Unk_0203389c_Vec {
    s32 x, y, z;
};
extern "C" s32 FX_Div(s32 a, s32 b);
extern "C" long long func_020e9600(void *a, void *b);
extern "C" BOOL func_020307c4(s32 a, s32 b, s32 *c, s32 *d, s32 *e);
class Unk_0203389c {
public:
    void func_0203389c(s32 a, s32 b, s32 c);
    BOOL func_020338d0(s32 x);
    s32 func_020338e8();
    s32 func_02033914(s32 flag);

    u8 pad_00[0x10];
    u8 unk_10[0xc];
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
};
class Unk_020339f8 {
public:
    BOOL func_020339f8(s32 v);
    s32 unk_00;
};
class Unk_02033b3c {
public:
    Unk_02033b3c();
    ~Unk_02033b3c();
    void func_02033b94(s32 x, s32 y, s32 flag);
    Unk_02033b3c *func_02033d2c(Unk_0203389c_Vec *p, s32 flag);

    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
};
class Unk_02033b40 {
public:
    Unk_02033b40();
    Unk_02033b3c *func_02033a0c(s32 x, s32 z);
    void func_02033a5c(s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);

    Unk_02033b3c unk_00[0x31];
    s32 unk_498;
    s32 unk_49c;
    s32 unk_4a0;
    s32 unk_4a4;
};
// the constructors and the destructor of the object whose other methods are Unk_02033438's and Unk_0203389c's
class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c(Unk_0203389c_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
    Unk_0203398c *func_0203398c(s32 x, s32 z, s32 a, s32 b);
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
};
class Unk_02033d4c {
public:
    Unk_02033d4c() { func_02033e48(); }
    u32 func_02033d4c(s32 a, s32 b);
    void func_02033db0();
    s32 func_02033df0();
    BOOL func_02033e10(s32 a, s32 b);
    void func_02033e48();

    u8 unk_00;
    u8 unk_01[4];
    s8 unk_05[4];
    s8 unk_09[4];
};
class Unk_02033f9c {
public:
    Unk_02033f9c()
    {
        unk_00 = 0;
        unk_04 = 0;
    }
    ~Unk_02033f9c() {}

    s32 unk_00;
    s32 unk_04;
};
// one map slot, size 0x138
class Unk_02033f70 {
public:
    Unk_02033f70() { func_02033e60(); }
    ~Unk_02033f70() {}
    void func_02033e60();

    Unk_02033f9c unk_00[6][6];
    Unk_0202ff44_Obj *unk_120;
    u32 unk_124;
    u32 unk_128;
    s32 unk_12c;
    u8 unk_130;
    u8 pad_131;
    s16 unk_132;
    s16 unk_134;
};
// the collision work area data_021bfab8
class Unk_02033edc {
public:
    ~Unk_02033edc() {}

    /* 0x0000 */ s32 unk_00;
    /* 0x0004 */ Unk_02033f70 unk_04[8];
    /* 0x09c4 */ Unk_02032dc4 unk_9c4;
    /* 0x0e48 */ Unk_02033170 unk_e48;
    /* 0x184c */ Unk_02032494 unk_184c;
    /* 0x1a90 */ Unk_02031b84 unk_1a90;
    /* 0x1a91 */ Unk_02031e08 unk_1a91;
    /* 0x1a94 */ Unk_02033b40 unk_1a94;
    /* 0x1f3c */ Unk_02033d4c unk_1f3c;
};

// ---------------------------------------------------------------- inline helpers
static inline Unk_02033f9c *Unk_0203030c_Get(Unk_02033f70 *m, s32 x, s32 y) {
    if (x >= 0 && y >= 0 && (u32)x < m->unk_124 && (u32)y < m->unk_128) return &m->unk_00[y][x];
    return NULL;
}
static inline BOOL Unk_020303d0_IsSet(Unk_02033f9c *c) {
    if (c->unk_00 != 0 && c->unk_04 != 0) return TRUE;
    return FALSE;
}
static inline u8 Unk_020303d0_All(s32 idx) {
    s32 i, j;
    for (i = data_021bfab8.unk_04[idx].unk_128 - 1; i >= 0; i--) {
        for (j = data_021bfab8.unk_04[idx].unk_124 - 1; j >= 0; j--) {
            Unk_02033f9c *row = data_021bfab8.unk_04[idx].unk_00[i];
            if (!Unk_020303d0_IsSet(&row[j])) return 0;
        }
    }
    return 1;
}

// ---------------------------------------------------------------- functions of this unit
extern "C" BOOL func_0202fe84(s32 *a, s32 *b, s32 *c, s32 *d);
extern "C" BOOL func_0202ff44(void);
extern "C" BOOL func_0202ff64(Unk_0202ff44_V3 *p);
extern "C" BOOL func_0202ffb0(s32 v);
extern "C" s32 func_0202ffdc(Unk_0202ff44_V3 *p);
extern "C" s32 func_0202fff0(s32 x, s32 z);
extern "C" void func_0203002c(s32 x, s32 z);
extern "C" BOOL func_0203006c(s32 x, s32 z, s32 mask);
extern "C" BOOL func_02030164(s32 x, s32 z);
extern "C" void func_020302cc(s32 v);
extern "C" void func_020302f8(s32 idx);
extern "C" void func_0203030c(s32 idx);
extern "C" void func_02030380(s32 idx);
extern "C" BOOL func_020303d0(s32 x, s32 y, s32 val, s32 idx);
extern "C" void func_02030494(s32 x, s32 z, s32 mask);
extern "C" void func_020304b4(s32 x, s32 z, s32 v);
extern "C" void func_02030504(s32 a, s32 b);
extern "C" void func_02030518(void);
extern "C" BOOL func_02030528(u32 a, u32 b, Unk_0202ff44_Obj *o, s32 idx);
extern "C" void func_02030598(s32 v);
extern "C" void func_02030608(Unk_0202ff44_V3 *a, Unk_0202ff44_V3 *b, Unk_02030608_Obj *o, u32 flags, u8 p5, u8 p6);
extern "C" s32 func_02030798(Unk_0202ff44_V3 *p);
extern "C" s32 func_020307ac(s32 x, s32 z);
extern "C" BOOL func_020307c4(s32 x, s32 z, s32 *p, s32 *q, s32 *r);
extern "C" s32 func_02030814(void);
extern "C" s32 func_0203081c(Unk_0202ff44_V3 *p, u32 *out, u32 flags0);
extern "C" BOOL func_020308b4(s32 *p, s32 a, s32 *c, s32 w, s32 h);
extern "C" u8 func_02030908(Unk_02030908_D *out, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u32 flags);
extern "C" void func_020309d4(Unk_020309d4_Owner *self, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u16 hh, s32 arg5, s32 arg6, u32 flags);
extern "C" s32 func_02030bc4();
extern "C" s32 func_02030be4(s32 *a, s32 *b, s32 c, s32 d);
extern "C" u32 func_02030d58(s32 a);
extern "C" BOOL func_02030d60(Unk_02030e48_Vec *pos);
extern "C" BOOL func_02030d78(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, s32 *dir, u32 dist, u32 s5, s32 s6);
extern "C" BOOL func_02030d9c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, u32 dist, s32 *dir, u32 count, s32 r, s32 flags);
extern "C" BOOL func_02030e48(Unk_02030e48_Vec *pos, s32 r, s32 *out, s32 flags);
extern "C" BOOL func_02030f10(s32 a, s32 b, s32 c, s32 d, u8 flag);
extern "C" u16 func_02031060(s32 i);
extern "C" u16 func_0203107c(s32 i);
extern "C" BOOL func_02031098(u8 *out, s32 a, s32 b);
extern "C" BOOL func_020310f8(s32 a, s32 b);
extern "C" BOOL func_02031130(s32 a, s32 b);
extern "C" u32 func_02031154(s32 x, s32 y);
extern "C" BOOL func_02031194(s32 a, s32 b);
extern "C" BOOL func_020311c0(s32 x, s32 y);
extern "C" s32 func_020311ec(s32 x, s32 y);
extern "C" s32 func_02031218(s32 x, s32 y);
extern "C" s32 func_0203123c(s32 x, s32 y);
extern "C" s32 func_02031260(s32 x, s32 y);
extern "C" s32 func_02031284(s32 x, s32 y);
extern "C" s32 func_020312a8(s32 x, s32 y);
extern "C" BOOL func_020312d0(s32 x, s32 y);
extern "C" BOOL func_020312ec(s32 x, s32 y);
extern "C" BOOL func_02031304(Unk_02031304_Vec *v);
extern "C" BOOL func_02031360(s32 t, s32 k);
extern "C" Unk_020d8d3cX *func_0203139c();
extern "C" u32 func_020313f4(s32 x, s32 y, u32 c);
extern "C" u32 func_02031414(s32 t);
extern "C" u32 func_0203142c(s32 t);
extern "C" u32 func_02031444(s32 t);
extern "C" u32 func_0203145c(s32 t);
extern "C" u32 func_02031474(s32 x, s32 y, u32 c);
extern "C" u32 func_02031494(s32 t);
extern "C" u32 func_020314ac(s32 t);
extern "C" u32 func_020314c4(s32 t);
extern "C" u32 func_020314dc(s32 t);
extern "C" s32 func_020314f4(Unk_020314f4_Vec *p);
extern "C" void func_02031554(s32 *a, s32 *b);
extern "C" void func_02031574(s32 *a, s32 *b);
extern "C" u32 func_02031594(s32 i);
extern "C" void func_02031618(s32 unused, Unk_0203182c_Vec *pos, Unk_0203182c_Vec *size, s32 a3, s32 a4, u32 flags, s32 mode);
extern "C" BOOL func_0203182c(Unk_0203182c_Vec *a, Unk_0203182c_Vec *b, Unk_0203182c_Vec *c, Unk_0203182c_Vec *d);
extern "C" BOOL func_020318cc(Unk_020318cc_Node *n);
extern "C" BOOL func_02031908(Unk_020318cc_Node *n, s32 a, s32 b, s32 c, s32 d, s16 e, Unk_02031908_Vec *v);
extern "C" void func_02031b78(void *p);
extern "C" void func_02031d5c(s32* a, s32 b, s32 c);
extern "C" s32 func_02031da4(Unk_020d8d74* node);
extern "C" s32 func_02031de0(Unk_020d8d74* node);
extern "C" void func_02031dfc(void *p);
extern "C" void* func_02032218(void* p);
extern "C" void* func_02032228(void* p);
BOOL func_0203270c(Unk_02032808 *a, Unk_02032d60 *out, Unk_02032808 *b);
extern "C" void func_02033078(Unk_0202f048 *out, Unk_020d8d50 *e);
extern "C" void func_02033988(void *obj);

// ---------------------------------------------------------------- objects
// Data order: this unit is placed object by object (see object_order.txt).
Unk_020d8d74 *data_021bf9b0;
const Unk_020c7c4c_Ent data_020c7c4c[0x7c] = {
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xc0, 0xcd, 1, 1, 1, 1, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xc8, 0xce, 1, 1, -1, 0, 2, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 7, 7, 7, 7, 0},
    {0x4a6, 0x4c1, 0, 1, -1, 0, 2, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4ba, 0x4c0, 0, 1, -1, 0, 2, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0x4c1, 0, 0, -1, 0, 3, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0x4c1, 0, 0, -1, 0, 3, 0, 1, 8, 8, 8, 8, 8, 8, 8, 8, 1, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xc4, 0xcc, 1, 1, 1, 0, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0x4c1, 0, 0, -1, 0, 2, 0, 0, 10, 10, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 80},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 16, 11, 11, 11, 11, 11, 11, 11, 11, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 32, 12, 12, 12, 12, 12, 12, 12, 12, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 64, 13, 13, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 128, 14, 14, 14, 14, 14, 14, 14, 14, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 1, 15, 15, 15, 15, 15, 15, 15, 15, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 2, 16, 16, 16, 16, 16, 16, 16, 16, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 4, 17, 17, 17, 17, 17, 17, 17, 17, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 8, 18, 18, 18, 18, 18, 18, 18, 18, 2, 0, 0, 0, 3, 3, 3, 3, -64},
    {0x87b, 0x4c2, 1, 1, 0, 0, 1, 0, 0, 19, 19, 19, 19, 19, 19, 19, 19, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xc8, 0x4c1, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 20, 20, 20, 20, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0x4c1, 0, 0, -1, 0, 2, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 0, 0, 0, 0, 0, 0, 0, 0, 192},
    {0x873, 0x4c1, 0, 0, -1, 0, 2, 0, 0, 22, 22, 22, 22, 22, 22, 22, 22, 1, 0, 0, 0, 3, 3, 3, 3, 0},
    {0x873, 0x4c1, 0, 0, -1, 0, 3, 0, 1, 23, 23, 23, 23, 23, 23, 23, 23, 1, 0, 0, 0, 3, 3, 3, 3, -16},
    {0x4ae, 0x4be, 1, 1, -1, 0, 2, 0, 0, 24, 24, 24, 24, 24, 24, 24, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xc8, 0xce, 1, 1, -1, 0, 2, 0, 0, 25, 25, 25, 25, 25, 25, 25, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4a6, 0x4c1, 1, 1, -1, 0, 2, 0, 0, 26, 26, 26, 26, 26, 26, 26, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0x4c1, 1, 0, -1, 0, 2, 0, 0, 27, 27, 27, 27, 27, 27, 27, 27, 0, 0, 0, 0, 0, 0, 0, 0, 16},
    {0xffff, 0x4c1, 1, 0, -1, 0, 2, 0, 0, 28, 28, 28, 28, 28, 28, 28, 28, 0, 0, 0, 0, 0, 0, 0, 0, 8},
    {0xffff, 0xffff, 1, 1, 0, 1, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xffff, 0xffff, 1, 1, 0, 0, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0xffff, 1, 1, 0, 1, 0, 0, 0, 9, 9, 3, 3, 9, 9, 3, 3, 0, 0, 0, 0, 5, 2, 2, 1, 0},
    {0xffff, 0xffff, 1, 1, 0, 1, 0, 0, 0, 3, 9, 9, 3, 3, 9, 9, 3, 0, 0, 0, 0, 2, 1, 5, 2, 0},
    {0xffff, 0xffff, 1, 1, 0, 1, 0, 0, 0, 3, 3, 9, 9, 3, 3, 9, 9, 0, 0, 0, 0, 1, 2, 2, 5, 0},
    {0xffff, 0xffff, 1, 1, 0, 1, 0, 0, 0, 9, 3, 3, 9, 9, 3, 3, 9, 0, 0, 0, 0, 2, 5, 1, 2, 0},
    {0xffff, 0xffff, 1, 1, 1, 1, 0, 0, 0, 9, 9, 3, 3, 9, 9, 3, 3, 0, 0, 0, 0, 5, 2, 2, 1, 0},
    {0xffff, 0xffff, 1, 1, 1, 1, 0, 0, 0, 3, 9, 9, 3, 3, 9, 9, 3, 0, 0, 0, 0, 2, 1, 5, 2, 0},
    {0xffff, 0xffff, 1, 1, 1, 1, 0, 0, 0, 3, 3, 9, 9, 3, 3, 9, 9, 0, 0, 0, 0, 1, 2, 2, 5, 0},
    {0xffff, 0xffff, 1, 1, 1, 1, 0, 0, 0, 9, 3, 3, 9, 9, 3, 3, 9, 0, 0, 0, 0, 2, 5, 1, 2, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 12, 12, 9, 9, 12, 12, 9, 9, 0, 0, 0, 0, 3, 4, 4, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 9, 14, 14, 9, 9, 14, 14, 9, 0, 0, 0, 0, 4, 5, 3, 4, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 9, 9, 16, 16, 9, 9, 16, 16, 0, 0, 0, 0, 5, 4, 4, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 18, 9, 9, 18, 18, 9, 9, 18, 0, 0, 0, 0, 4, 3, 5, 4, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 11, 11, 11, 11, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 13, 13, 13, 13, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 15, 15, 15, 15, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 17, 17, 17, 17, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 12, 12, 12, 12, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 14, 14, 14, 14, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 16, 16, 16, 16, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 20, 20, 20, 20, 18, 18, 18, 18, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 2, 0, 0, 20, 20, 9, 9, 12, 12, 9, 9, 0, 0, 0, 0, 3, 4, 4, 5, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 2, 0, 0, 9, 20, 20, 9, 9, 14, 14, 9, 0, 0, 0, 0, 4, 5, 3, 4, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 2, 0, 0, 9, 9, 20, 20, 9, 9, 16, 16, 0, 0, 0, 0, 5, 4, 4, 3, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 2, 0, 0, 20, 9, 9, 20, 18, 9, 9, 18, 0, 0, 0, 0, 4, 3, 5, 4, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 14, 20, 20, 14, 14, 14, 14, 14, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 16, 16, 20, 20, 16, 16, 16, 16, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 18, 18, 20, 18, 18, 18, 18, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 18, 20, 20, 18, 18, 18, 18, 18, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 12, 12, 20, 20, 12, 12, 12, 12, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 14, 14, 20, 14, 14, 14, 14, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 11, 11, 11, 11, 11, 11, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 15, 20, 20, 15, 15, 15, 15, 15, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 15, 15, 20, 20, 15, 15, 15, 15, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 11, 11, 20, 11, 11, 11, 11, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 15, 15, 15, 15, 15, 15, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 11, 20, 20, 11, 11, 11, 11, 11, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 11, 11, 20, 20, 11, 11, 11, 11, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 15, 15, 20, 15, 15, 15, 15, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 13, 13, 13, 13, 13, 13, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 13, 20, 20, 13, 13, 13, 13, 13, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 17, 17, 20, 20, 17, 17, 17, 17, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 17, 17, 20, 17, 17, 17, 17, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 20, 17, 17, 17, 17, 17, 17, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 17, 20, 20, 17, 17, 17, 17, 17, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 13, 13, 20, 20, 13, 13, 13, 13, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 20, 13, 13, 20, 13, 13, 13, 13, 0, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 9, 9, 8, 8, 9, 9, 8, 8, 0, 0, 0, 0, 5, 4, 4, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 9, 8, 8, 9, 9, 8, 8, 9, 0, 0, 0, 0, 4, 5, 3, 4, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 3, 0, 0, 19, 19, 22, 22, 19, 19, 22, 22, 0, 0, 0, 1, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 3, 0, 0, 19, 22, 22, 19, 19, 22, 22, 19, 0, 0, 0, 1, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 0, -1, 0, 3, 16, 0, 22, 22, 22, 22, 22, 22, 22, 22, 0, 0, 0, 1, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 32, 0, 22, 22, 23, 23, 22, 22, 23, 23, 1, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 8, 0, 22, 23, 23, 22, 22, 23, 23, 22, 1, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 23, 23, 8, 8, 23, 23, 8, 8, 1, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 23, 8, 8, 23, 23, 8, 8, 23, 1, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 10, 3, 3, 10, 10, 3, 3, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 3, 10, 10, 3, 3, 10, 10, 3, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 3, 3, 10, 10, 3, 3, 10, 10, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 3, 3, 10, 10, 3, 3, 10, 0, 0, 0, 0, 1, 1, 1, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 10, 9, 9, 10, 10, 3, 3, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 9, 10, 10, 9, 9, 10, 10, 3, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 9, 9, 10, 10, 9, 3, 10, 10, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 9, 9, 10, 10, 3, 3, 10, 0, 0, 0, 0, 5, 5, 5, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 10, 9, 3, 10, 10, 9, 3, 0, 0, 0, 0, 2, 1, 5, 2, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 10, 3, 9, 10, 10, 3, 9, 0, 0, 0, 0, 2, 5, 1, 2, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 9, 10, 10, 3, 9, 10, 10, 3, 0, 0, 0, 0, 5, 2, 2, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 3, 10, 10, 9, 3, 10, 10, 9, 0, 0, 0, 0, 1, 2, 2, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 9, 3, 10, 10, 9, 3, 10, 10, 0, 0, 0, 0, 2, 5, 1, 2, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 3, 9, 10, 10, 3, 9, 10, 10, 0, 0, 0, 0, 2, 1, 5, 2, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 3, 9, 10, 10, 3, 9, 10, 0, 0, 0, 0, 1, 2, 2, 5, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 9, 3, 10, 10, 9, 3, 10, 0, 0, 0, 0, 5, 2, 2, 1, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 1, 15, 15, 15, 15, 15, 15, 15, 15, 2, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 3, 0, 1, 15, 15, 15, 15, 15, 15, 15, 15, 2, 0, 0, 0, 3, 3, 3, 3, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 4, 4, 9, 9, 4, 4, 9, 9, 0, 0, 0, 0, 7, 6, 6, 5, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 9, 4, 4, 9, 9, 4, 4, 9, 0, 0, 0, 0, 6, 7, 5, 6, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 9, 9, 4, 4, 9, 9, 4, 4, 0, 0, 0, 0, 5, 6, 6, 7, 0},
    {0xffff, 0xffff, 1, 1, -1, 0, 2, 0, 0, 4, 9, 9, 4, 4, 9, 9, 4, 0, 0, 0, 0, 6, 5, 7, 6, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 10, 4, 4, 10, 10, 4, 4, 0, 0, 0, 0, 7, 7, 7, 7, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 4, 10, 10, 4, 4, 10, 10, 4, 0, 0, 0, 0, 7, 7, 7, 7, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 4, 4, 10, 10, 4, 4, 10, 10, 0, 0, 0, 0, 7, 7, 7, 7, 0},
    {0xffff, 0xffff, 0, 0, -1, 0, 2, 0, 0, 10, 4, 4, 10, 10, 4, 4, 10, 0, 0, 0, 0, 7, 7, 7, 7, 0},
    {0x4aa, 0x4c3, 1, 1, -1, 0, 2, 0, 0, 121, 121, 121, 121, 121, 121, 121, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4b6, 0x4bf, 1, 1, -1, 0, 2, 0, 0, 122, 122, 122, 122, 122, 122, 122, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4b2, 0x4c2, 1, 1, -1, 0, 2, 0, 0, 123, 123, 123, 123, 123, 123, 123, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
s32 data_021bf9a0 = func_01ffcb0c(0x20000, 0x800);
Unk_02000c8c data_021bfa4c(0, 0x1000, 0);
Unk_020318cc_Node *data_021bf9b4;
Unk_02000c8c data_021bfa70(0x1000, 0x1000, 0x1000);
Unk_02033f70 *data_020d8ce8 = &data_021bfab8.unk_04[0];
const Unk_020c7c3c_Fn data_020c7c3c[4] = {func_02031414, func_0203142c, func_02031444, func_0203145c};
const u32 data_020c7c20[3] = {0x800, 0xc00, 0x1000};
const s32 data_020c7c1c = -0x1000;
const u8 data_020c7c18[4] = {0, 0, 0, 0};

void Unk_02033f70::func_02033e60()
{
    s32 i, j;
    unk_124 = 0;
    unk_128 = 0;
    unk_120 = 0;
    unk_132 = 0;
    unk_134 = 0;
    unk_12c = -1;
    unk_130 = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            unk_00[i][j].unk_00 = 0;
            unk_00[i][j].unk_04 = 0;
        }
    }
}

void Unk_02033d4c::func_02033e48()
{
    u8 *p;
    unk_00 = 0;
    for (p = unk_01; p < (u8 *)unk_05; p++) {
        *p = 0xff;
    }
}

BOOL Unk_02033d4c::func_02033e10(s32 a, s32 b)
{
    s32 i = func_02033df0();
    if (i != -1) {
        unk_00 |= 1 << i;
        unk_05[i] = a;
        unk_09[i] = b;
        unk_01[i] = 0;
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02033d4c::func_02033df0()
{
    u32 i;
    for (i = 0; i < 4; i++) {
        if (((unk_00 >> i) & 1) == 0) {
            return i;
        }
    }
    return -1;
}

void Unk_02033d4c::func_02033db0()
{
    s32 i;
    u8 *p;
    for (i = 0, p = unk_01; p < (u8 *)unk_05; i++, p++) {
        if (((unk_00 >> i) & 1) != 0 && *p < 3) {
            (*p)++;
        } else {
            *p = 0xff;
            unk_00 &= ~(1 << i);
        }
    }
}

u32 Unk_02033d4c::func_02033d4c(s32 a, s32 b)
{
    u32 i = 0;
    s8 *p5 = unk_05;
    s8 *p9 = unk_09;
    u8 *p1 = unk_01;
    for (; p1 < (u8 *)unk_05; p5++, p9++, i++, p1++) {
        if (((unk_00 >> i) & 1) != 0 && *p1 < 3 && a == *p5 && b == *p9) {
            return data_020c7c20[*p1];
        }
    }
    return 0;
}

Unk_02033b3c *Unk_02033b3c::func_02033d2c(Unk_0203389c_Vec *p, s32 flag)
{
    func_02033b94(p->x >> 13, p->z >> 13, flag);
    return this;
}

void Unk_02033b3c::func_02033b94(s32 x, s32 y, s32 flag)
{
    if (flag == 0) {
        unk_14 = func_01ffcb2c(x, y);
        s32 a = unk_14;
        unk_10 = a < 0x7c ? data_020c7c4c[a].unk_0c : 0;
        s32 b0 = unk_10;
        unk_00 = b0 < 0x7c ? data_020c7c4c[b0].unk_1c << 8 : 0;
        unk_11 = a < 0x7c ? data_020c7c4c[a].unk_0d : 0;
        s32 b1 = unk_11;
        unk_04 = b1 < 0x7c ? data_020c7c4c[b1].unk_1c << 8 : 0;
        unk_12 = a < 0x7c ? data_020c7c4c[a].unk_0e : 0;
        s32 b2 = unk_12;
        unk_08 = b2 < 0x7c ? data_020c7c4c[b2].unk_1c << 8 : 0;
        unk_13 = a < 0x7c ? data_020c7c4c[a].unk_0f : 0;
        s32 b3 = unk_13;
        unk_0c = b3 < 0x7c ? data_020c7c4c[b3].unk_1c << 8 : 0;
    } else {
        unk_14 = func_01ffcb2c(x, y);
        s32 a = unk_14;
        unk_10 = a < 0x7c ? data_020c7c4c[a].unk_10 : 0;
        s32 b0 = unk_10;
        unk_00 = b0 < 0x7c ? data_020c7c4c[b0].unk_1c << 8 : 0;
        unk_11 = a < 0x7c ? data_020c7c4c[a].unk_11 : 0;
        s32 b1 = unk_11;
        unk_04 = b1 < 0x7c ? data_020c7c4c[b1].unk_1c << 8 : 0;
        unk_12 = a < 0x7c ? data_020c7c4c[a].unk_12 : 0;
        s32 b2 = unk_12;
        unk_08 = b2 < 0x7c ? data_020c7c4c[b2].unk_1c << 8 : 0;
        unk_13 = a < 0x7c ? data_020c7c4c[a].unk_13 : 0;
        s32 b3 = unk_13;
        unk_0c = b3 < 0x7c ? data_020c7c4c[b3].unk_1c << 8 : 0;
    }
}

Unk_02033b40::Unk_02033b40()
{
    unk_498 = unk_49c = unk_4a0 = unk_4a4 = 0;
}

Unk_02033b3c::Unk_02033b3c()
{
}

void Unk_02033b40::func_02033a5c(s32 x0, s32 x1, s32 z0, s32 z1, s32 flag)
{
    s32 z, x;
    s32 dz = z1 - z0 + 1;
    s32 dx = x1 - x0 + 1;
    if (dx <= 7 && dz <= 7) {
        unk_498 = x0;
        unk_49c = x1;
        unk_4a0 = z0;
        unk_4a4 = z1;
        for (z = unk_4a0; z <= unk_4a4; z++) {
            for (x = unk_498; x <= unk_49c; x++) {
                ((Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18))->func_02033b94(x, z, flag);
            }
        }
    } else {
        unk_498 = x0;
        unk_49c = x0 + 6;
        unk_4a0 = z0;
        unk_4a4 = z0 + 6;
        for (z = unk_4a0; z <= unk_4a4; z++) {
            for (x = unk_498; x <= unk_49c; x++) {
                ((Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18))->func_02033b94(x, z, flag);
            }
        }
    }
}

Unk_02033b3c *Unk_02033b40::func_02033a0c(s32 x, s32 z)
{
    if (x >= unk_498 && x <= unk_49c && z >= unk_4a0 && z <= unk_4a4) {
        return (Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18);
    }
    return NULL;
}

BOOL Unk_020339f8::func_020339f8(s32 v)
{
    if (v >= 0 && v < 8) {
        unk_00 = v;
        return TRUE;
    }
    return FALSE;
}

Unk_020339ccX::Unk_020339ccX()
{
    unk_00 = 0;
    f_04 = 0;
}

Unk_020339ccX::~Unk_020339ccX()
{
}

void Unk_020339ccX::func_020339d8(u32 a, u32 b)
{
    unk_00 = a;
    f_04 = (Unk_02032dc4_Cb *)b;
}

void Unk_020339ccX::func_020339cc(const Unk_020339ccX &o)
{
    unk_00 = o.unk_00;
    f_04 = o.f_04;
}

Unk_0203398c::Unk_0203398c(Unk_0203389c_Vec *v, s32 a, s32 b)
{
    _ZN12Unk_0203343813func_02033438EP15Unk_0202f2ac_V3ii(this, v, a, b);
}

Unk_0203398c *Unk_0203398c::func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b)
{
    _ZN12Unk_0203343813func_02033438EP15Unk_0202f2ac_V3ii(this, v, a, b);
    return this;
}

Unk_0203398c *Unk_0203398c::func_0203398c(s32 x, s32 z, s32 a, s32 b)
{
    Unk_0203389c_Vec v;
    v.x = (x << 13) + 0x1000;
    v.y = 0;
    v.z = (z << 13) + 0x1000;
    _ZN12Unk_0203343813func_02033438EP15Unk_0202f2ac_V3ii(this, &v, a, b);
    return this;
}

Unk_0203398c::~Unk_0203398c()
{
}

extern "C" void func_02033988(void *obj)
{
}

s32 Unk_0203389c::func_02033914(s32 flag)
{
    if (flag == 0) {
        return unk_38;
    }
    s32 a, b, c;
    Unk_0203389c_Vec v;
    if (func_020307c4(unk_1c, unk_20, &a, &b, &c) && c != 2) {
        s32 z = unk_20;
        v.x = (unk_1c << 13) + 0x1000;
        v.y = 0;
        v.z = (z << 13) + 0x1000;
        s32 r7 = a;
        long long d = func_020e9600(&v, unk_10);
        s32 m = func_01ffcb0c(r7, r7);
        if ((long long)m >= d) {
            return unk_38 + b;
        }
    }
    return unk_38;
}

s32 Unk_0203389c::func_020338e8()
{
    if (unk_34 == 0x16) {
        s32 t = FX_Div(0x1e000, 0x64000);
        return func_01ffcb0c(unk_3c, t);
    }
    return unk_3c;
}

BOOL Unk_0203389c::func_020338d0(s32 x)
{
    if (unk_30 != 0) {
        if (x <= unk_3c) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_0203389c::func_0203389c(s32 a, s32 b, s32 c)
{
    b -= a;
    s32 v = 0;
    unk_24 = v;
    unk_28 = v;
    unk_2c = 0x1000;
    if (b <= 0) {
        v = 0x8000;
    }
    func_020e93a0(&unk_24, (s16)(c + (s16)v));
}

void Unk_02033438::func_02033438(Unk_0202f2ac_V3 *pos, s32 flag, s32 arg) {
    Unk_02033438_G *g = (Unk_02033438_G *)data_020d8ce8;
    s32 gc = g->unk_132;
    s32 sl = g->unk_134;
    volatile Unk_0202f2ac_V3 ctr;
    s32 cx, cz;
    s32 r;
    unk_00 = 0;
    unk_10.x = pos->x;
    unk_10.y = pos->y;
    unk_10.z = pos->z;
    unk_1c = pos->x >> 13;
    unk_20 = pos->z >> 13;
    r = func_01ffcb2c(unk_1c, unk_20);
    s32 k = func_020314f4((Unk_020314f4_Vec *)(pos));
    if (flag != 0) {
        unk_34 = func_020313f4(unk_1c, unk_20, k);
    } else {
        unk_34 = func_02031474(unk_1c, unk_20, k);
    }
    unk_38 = unk_34 < 0x7c ? (data_020c7c4c[unk_34].unk_1c << 8) : 0;
    unk_3c = 0xfffee000;
    unk_30 = unk_34 < 0x7c ? data_020c7c4c[unk_34].unk_14 : 0;
    unk_24.x = 0;
    unk_24.y = 0;
    unk_24.z = 0x1000;
    if (func_02031360(unk_34, arg)) {
        if (r == 0x52) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx - 0x1000, 0, cz + 0x1000);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z - func_01ffcb0c(sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x + func_01ffcb0c(sl, 0x1666), a.y, a.z);
            Unk_020d8cccX tri((Unk_0202f660_V3 *)&b, (Unk_0202f660_V3 *)&a, (Unk_0202f660_V3 *)&c, (Unk_0202f660_V3 *)&data_021bfa4c);
            if (tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                _ZN12Unk_0203389c13func_0203389cEiii(this, gc, sl, 0x6000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x55) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx + 0xb33, 0, cz - 0xb33);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z + func_01ffcb0c(0x1000 - sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x - func_01ffcb0c(0x1000 - sl, 0x1666), a.y, a.z);
            Unk_020d8cccX tri((Unk_0202f660_V3 *)&a, (Unk_0202f660_V3 *)&c, (Unk_0202f660_V3 *)&b, (Unk_0202f660_V3 *)&data_021bfa4c);
            if (!tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                _ZN12Unk_0203389c13func_0203389cEiii(this, gc, sl, 0x6000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x51) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx + 0x1000, 0, cz + 0x1000);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z - func_01ffcb0c(sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x - func_01ffcb0c(sl, 0x1666), a.y, a.z);
            Unk_020d8cccX tri((Unk_0202f660_V3 *)&b, (Unk_0202f660_V3 *)&c, (Unk_0202f660_V3 *)&a, (Unk_0202f660_V3 *)&data_021bfa4c);
            if (tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                _ZN12Unk_0203389c13func_0203389cEiii(this, gc, sl, 0xffffa000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x54) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx - 0xb33, 0, cz - 0xb33);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z + func_01ffcb0c(0x1000 - sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x + func_01ffcb0c(0x1000 - sl, 0x1666), a.y, a.z);
            Unk_020d8cccX tri((Unk_0202f660_V3 *)&a, (Unk_0202f660_V3 *)&b, (Unk_0202f660_V3 *)&c, (Unk_0202f660_V3 *)&data_021bfa4c);
            if (!tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                _ZN12Unk_0203389c13func_0203389cEiii(this, gc, sl, 0xffffa000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x53) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            s32 e = cz + 0x1000;
            e = e - func_01ffcb0c(sl, 0x1666);
            if (e > pos->z) {
                unk_30 = 0;
                unk_34 = 0x13;
            } else {
                unk_34 = 0x16;
                _ZN12Unk_0203389c13func_0203389cEiii(this, gc, sl, 0xffff8000);
            }
            unk_00 = 1;
            unk_04.x = ctr.x;
            unk_04.y = 0;
            unk_04.z = e;
        } else {
            u32 t = unk_34 < 0x7c ? data_020c7c4c[unk_34].unk_0b : 0;
            if (t != 0) {
                s32 ang = 0;
                s32 i;
                for (i = 0; i < 8; i++) {
                    if (t & (1 << i)) {
                        ang = (i << 29) >> 16;
                        break;
                    }
                }
                func_020e93a0(&unk_24, ang);
            }
        }
        if (unk_30 != 0) {
            unk_3c = 0xfffff000;
        }
    } else {
        unk_30 = 0;
    }
}

Unk_020d8d5c::Unk_020d8d5c() {}

Unk_020d8d5c::~Unk_020d8d5c() {}

BOOL Unk_020d8d5c::func_020333c4(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f) {
    func_020339d8(e, f);
    func_0202f364(a, b, c, d);
    return TRUE;
}

Unk_02033170::Unk_02033170() : unk_a00(0) {}

Unk_02033170::~Unk_02033170() {}

void Unk_02033170::func_020331a8(Unk_02033a0c *grid, s32 x0, s32 x1, s32 y0, s32 y1) {
    s32 y, x;
    for (y = y0; y <= y1; y++) {
        for (x = x0; x <= x1; x++) {
            Unk_020331a8_Cell *cell = _ZN12Unk_02033b4013func_02033a0cEii(grid, x, y);
            if (cell == NULL) {
                continue;
            }
            s32 xc = (x << 13) + 0x1000;
            s32 yc = (y << 13) + 0x1000;
            Unk_0202f2ac_V3 ctr;
            Unk_020331a8_SetU((u32 *)&ctr, xc, 0, yc);
            s32 xr = xc + 0x1000;
            s32 xl = xc - 0x1000;
            s32 zr = yc + 0x1000;
            s32 zl = yc - 0x1000;
            u32 t = (s32)cell->unk_14 < 0x7c ? data_020c7c4c[cell->unk_14].unk_15 : 0;
            if (t != 0) {
                Unk_0202f2ac_V3 a(xl, cell->unk_00, zl);
                Unk_0202f2ac_V3 b(xl, cell->unk_00, zr);
                Unk_0202f2ac_V3 c(xr, cell->unk_00, zr);
                Unk_0202f2ac_V3 d(xr, cell->unk_00, zl);
                func_02033170(&a, &b, &c, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_10, 0);
                func_02033170(&a, &c, &d, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_10, 0);
            } else {
                Unk_0202f2ac_V3 a0(xc, cell->unk_00, yc);
                Unk_0202f2ac_V3 a1(xr, cell->unk_00, zl);
                Unk_0202f2ac_V3 a2(xl, cell->unk_00, zl);
                func_02033170(&a0, &a1, &a2, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_10, 0);
                Unk_0202f2ac_V3 b0(ctr.x, cell->unk_04, ctr.z);
                Unk_0202f2ac_V3 b1(xl, cell->unk_04, zl);
                Unk_0202f2ac_V3 b2(xl, cell->unk_04, zr);
                func_02033170(&b0, &b1, &b2, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_11, 0);
                Unk_0202f2ac_V3 c0(ctr.x, cell->unk_08, ctr.z);
                Unk_0202f2ac_V3 c1(xl, cell->unk_08, zr);
                Unk_0202f2ac_V3 c2(xr, cell->unk_08, zr);
                func_02033170(&c0, &c1, &c2, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_12, 0);
                Unk_0202f2ac_V3 d0(ctr.x, cell->unk_0c, ctr.z);
                Unk_0202f2ac_V3 d1(xr, cell->unk_0c, zr);
                Unk_0202f2ac_V3 d2(xr, cell->unk_0c, zl);
                func_02033170(&d0, &d1, &d2, (Unk_0202f2ac_V3 *)&data_021bfa4c, cell->unk_13, 0);
            }
        }
    }
}

BOOL Unk_02033170::func_02033170(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f) {
    if (unk_a00 < 40) {
        u32 i = unk_a00;
        unk_a00 = i + 1;
        return unk_00[i].func_020333c4(a, b, c, d, e, f);
    }
    return FALSE;
}

Unk_020d8d50::Unk_020d8d50() {}

Unk_020d8d50::~Unk_020d8d50() {}

Unk_020d8d50::Unk_020d8d50(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7) {
    func_02033010(a, b, c, p4, p5, p6, p7);
}

extern "C" void func_02033078(Unk_0202f048 *out, Unk_020d8d50 *e) {
    out->func_0202f048((e->unk_04.x + e->unk_0c.x) >> 1, (e->unk_04.y + e->unk_0c.y) >> 1);
}

BOOL Unk_020d8d50::func_02033044(Unk_020d8d50 *o) {
    func_020339cc(*o);
    func_0202edf8(&o->unk_04, &o->unk_0c, &o->unk_14);
    unk_28 = o->unk_28;
    unk_2c = o->unk_2c;
    return TRUE;
}

BOOL Unk_020d8d50::func_02033010(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7) {
    func_020339d8(p6, p7);
    func_0202edf8(a, b, c);
    unk_28 = p5;
    unk_2c = p4;
    return TRUE;
}

Unk_02032dc4::Unk_02032dc4() : unk_480(0) {}

Unk_02032dc4::~Unk_02032dc4() {}

BOOL Unk_02032dc4::func_02032dc4(Unk_0202f2ac_V3 *pos, Unk_0202f2ac_V3 *q, s32 r, Unk_02032dc4_Out *out, s32 arg) {
    Unk_020d8d50 *e;
    s32 py;
    BOOL result = FALSE;
    Unk_0202f048 a, b, d;
    a.func_0202f048(pos->x, pos->z);
    b.func_0202f048(q->x, q->z);
    d.func_0202f048(pos->x - q->x, pos->z - q->z);
    s64 dist = d.func_0202ef84((Unk_0202f048 *)data_021bf988);
    if (dist >= (s64)func_01ffcb0c(r, r)) {
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t1a;
        t1a.x = pos->x;
        t1a.y = pos->y;
        t1a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202e9d4(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t1b;
                py = *(volatile s32 *)&pos->y;
                t1b.x = a.x;
                t1b.y = py;
                t1b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    }
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t2a;
        t2a.x = pos->x;
        t2a.y = pos->y;
        t2a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202eb30(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t2b;
                py = *(volatile s32 *)&pos->y;
                t2b.x = a.x;
                t2b.y = py;
                t2b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t3a;
        t3a.x = pos->x;
        t3a.y = pos->y;
        t3a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202ea40(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t3b;
                py = *(volatile s32 *)&pos->y;
                t3b.x = a.x;
                t3b.y = py;
                t3b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    pos->x = a.x;
    pos->z = a.y;
    return result;
}

BOOL Unk_02032d60::func_02032d98(Unk_02032d60_Elem *e) {
    if (unk_480 < 0x18) {
        u32 n = unk_480;
        unk_480 = n + 1;
        _ZN12Unk_020d8d5013func_02033044EPS_(&unk_00[n], e);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02032d60::func_02032d60(void *a, void *b, void *c, s32 d0, s32 d1, s32 d2, s32 d3) {
    Unk_020d8d50 t((Unk_0202f048 *)a, (Unk_0202f048 *)b, (Unk_0202f048 *)c, d0, d1, d2, d3);
    BOOL r = func_02032d98((Unk_02032d60_Elem *)&t);
    return r;
}

void Unk_02032d60::func_02032864(void *grid, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag) {
    s32 z, x;
    Unk_020331a8_Cell *qx, *qz;
    s32 zw;
    Unk_02032808_V2 t30, t38, t40, t48, t50, t58, t60, t68;
    volatile Unk_02032808_V3 p;
    for (z = z1; z >= z0; z--) {
        x = x1;
        zw = (z << 13) + 0x1000;
        for (; x >= x0; x--) {
            Unk_020331a8_Cell *q = _ZN12Unk_02033b4013func_02033a0cEii(grid, x, z);
            if (q == 0) continue;
            qx = _ZN12Unk_02033b4013func_02033a0cEii(grid, x + 1, z);
            qz = _ZN12Unk_02033b4013func_02033a0cEii(grid, x, z + 1);
            p.x = (x << 13) + 0x1000;
            p.y = 0;
            p.z = zw;
            if (qx != 0 && q->unk_0c != qx->unk_04) {
                static Unk_02032864_Static sA(0x1000, 0);
                static Unk_02032864_Static sB(-0x1000, 0);
                _ZN12Unk_0202f04813func_0202f048Eii(&t30, p.x + 0x1000, p.z - 0x1000);
                _ZN12Unk_0202f04813func_0202f048Eii(&t38, t30.x, p.z + 0x1000);
                if (q->unk_0c > qx->unk_04) {
                    func_02032d60(&t30, &t38, &sA, q->unk_0c, 1, q->unk_13, 0);
                    if (flag) func_02032d60(&t30, &t38, &sB, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t30, &t38, &sB, qx->unk_00, 1, qx->unk_10, 0);
                    if (flag) func_02032d60(&t30, &t38, &sA, 0x8000, 2, 2, 0);
                }
            }
            if (qz != 0 && q->unk_08 != qz->unk_00) {
                static Unk_02032864_Static sC(0, 0x1000);
                static Unk_02032864_Static sD(0, -0x1000);
                _ZN12Unk_0202f04813func_0202f048Eii(&t40, p.x - 0x1000, p.z + 0x1000);
                _ZN12Unk_0202f04813func_0202f048Eii(&t48, p.x + 0x1000, t40.z);
                if (q->unk_08 > qz->unk_00) {
                    func_02032d60(&t40, &t48, &sC, q->unk_08, 1, q->unk_12, 0);
                    if (flag) func_02032d60(&t40, &t48, &sD, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t40, &t48, &sD, qz->unk_00, 1, qz->unk_10, 0);
                    if (flag) func_02032d60(&t40, &t48, &sC, 0x8000, 2, 2, 0);
                }
            }
            if (q->unk_00 != q->unk_04) {
                static Unk_02032864_Static sE(-0xb50, 0xb50);
                static Unk_02032864_Static sF(-sE.x, -sE.z);
                _ZN12Unk_0202f04813func_0202f048Eii(&t50, p.x - 0x1000, p.z - 0x1000);
                _ZN12Unk_0202f04813func_0202f048Eii(&t58, p.x + 0x1000, p.z + 0x1000);
                if (q->unk_00 > q->unk_04) {
                    func_02032d60(&t50, &t58, &sE, q->unk_00, 1, q->unk_10, 0);
                    if (flag) func_02032d60(&t50, &t58, &sF, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t50, &t58, &sF, q->unk_04, 1, q->unk_11, 0);
                    if (flag) func_02032d60(&t50, &t58, &sE, 0x8000, 2, 2, 0);
                }
            } else if (q->unk_00 != q->unk_0c) {
                static Unk_02032864_Static sG(0xb50, 0xb50);
                static Unk_02032864_Static sH(-sG.x, -sG.z);
                _ZN12Unk_0202f04813func_0202f048Eii(&t60, p.x - 0x1000, p.z + 0x1000);
                _ZN12Unk_0202f04813func_0202f048Eii(&t68, p.x + 0x1000, p.z - 0x1000);
                if (q->unk_00 > q->unk_0c) {
                    func_02032d60(&t60, &t68, &sG, q->unk_00, 1, q->unk_10, 0);
                    if (flag) func_02032d60(&t60, &t68, &sH, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t60, &t68, &sH, q->unk_0c, 1, q->unk_13, 0);
                    if (flag) func_02032d60(&t60, &t68, &sG, 0x8000, 2, 2, 0);
                }
            }
        }
    }
}

const Unk_020c7c3c_Fn data_020c7c2c[4] = {func_02031494, func_020314ac, func_020314c4, func_020314dc};
Unk_02033edc data_021bfab8;

Unk_02032808::Unk_02032808() {
}

Unk_02032808::~Unk_02032808() {
}

void Unk_02032808::func_02032808(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5) {
    s32 z = pos->z >> 13;
    s32 x = pos->x >> 13;
    unk_20 = x;
    unk_22 = z;
    func_0202fd8c((Unk_0202f660_V3 *)pos, b, c);
    unk_1c = a4;
    func_020339d8(a5, 0);
}

BOOL func_0203270c(Unk_02032808 *a, Unk_02032d60 *out, Unk_02032808 *b) {
    s32 dx = ((Unk_02032808_Flat *)b)->unk_20 - ((Unk_02032808_Flat *)a)->unk_20;
    s32 dz = ((Unk_02032808_Flat *)b)->unk_22 - ((Unk_02032808_Flat *)a)->unk_22;
    if ((dx == 0 && dz == 1) || (dx == 1 && (u32)(dz + 1) <= 2)) {
        Unk_02032808_V2 p10, p18, p20, p28, p30, p38, p40;
        s32 r;
        _ZN12Unk_0202f04813func_0202f048Eii(&p10, ((Unk_02032808_Flat *)a)->unk_00, ((Unk_02032808_Flat *)a)->unk_08);
        _ZN12Unk_0202f04813func_0202f048Eii(&p18, ((Unk_02032808_Flat *)b)->unk_00, ((Unk_02032808_Flat *)b)->unk_08);
        _ZN12Unk_0202f04813func_0202efe4EPS_S0_(&p20, &p18, &p10);
        _ZN12Unk_0202f04813func_0202ef40Ev(&p20);
        r = p10.z - func_01ffcb0c(p20.z, ((Unk_02032808_Flat *)a)->unk_0c);
        s32 x = p10.x - func_01ffcb0c(p20.x, ((Unk_02032808_Flat *)a)->unk_0c);
        _ZN12Unk_0202f04813func_0202f048Eii(&p28, x, r);
        r = p18.z + func_01ffcb0c(p20.z, ((Unk_02032808_Flat *)b)->unk_0c);
        x = p18.x + func_01ffcb0c(p20.x, ((Unk_02032808_Flat *)b)->unk_0c);
        _ZN12Unk_0202f04813func_0202f048Eii(&p30, x, r);
        _ZN12Unk_0202f04813func_0202f048Eii(&p38, 0, 0);
        _ZN12Unk_0202f04813func_0202eeecEPS_S0_(&p38, &p10, &p18);
        _ZN12Unk_0202f04813func_0202f048Eii(&p40, -p38.x, -p38.z);
        s32 m = ((Unk_02032808_Flat *)b)->unk_10;
        if (m > ((Unk_02032808_Flat *)a)->unk_10) m = ((Unk_02032808_Flat *)a)->unk_10;
        out->func_02032d60(&p28, &p30, &p38, m, 3, 0, 0);
        out->func_02032d60(&p28, &p30, &p40, m, 3, 0, 0);
        return TRUE;
    }
    return FALSE;
}

Unk_02032494::Unk_02032494() {
    unk_00 = 0;
}

Unk_02032494::~Unk_02032494() {
}

BOOL Unk_02032494::func_02032658(Unk_02032808_V3 *pos, s32 x, void *q) {
    BOOL r = FALSE;
    Unk_02032808 *base = unk_04;
    Unk_02032808 *e;
    for (e = base; e < base + unk_00; e++) {
        volatile Unk_02032808_V3 d;
        d.x = pos->x;
        d.y = pos->y;
        d.z = pos->z;
        if (e->func_0202fcfc((Unk_0202f660_V3 *)pos, x)) {
            Unk_02032808_V3 t;
            func_020e9960(&t, pos, (Unk_02032808_V3 *)e);
            s32 ang = func_020e7b98(t.x, t.z);
            _ZN12Unk_020323f813func_020323f8Eiii((u8 *)q + 0xc, ang, e->unk_1c, e->Unk_020339ccX::unk_00);
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_02032494::func_02032604(Unk_02032808_V3 *pos, s32 x, u32 *out) {
    Unk_02032808 *base = unk_04;
    Unk_02032808 *e;
    for (e = base; e < base + unk_00; e++) {
        volatile Unk_02032808_V3 d;
        d.x = pos->x;
        d.y = pos->y;
        d.z = pos->z;
        if (e->unk_1c == 1 && e->func_0202fccc((Unk_0202f660_V3 *)pos, (Unk_0202f660_V3 *)x)) {
            *out = e->Unk_020339ccX::unk_00;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02032494::func_020325cc(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5) {
    if (unk_00 < 16) {
        unk_04[unk_00].func_02032808(pos, b, c, a4, a5);
        unk_00++;
        return TRUE;
    }
    return FALSE;
}

void Unk_02032494::func_020324d8(void *obj, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag) {
    s32 z, x;
    for (z = z0; z <= z1; z++) {
        x = x0;
        s32 zw = (z << 13) + 0x1000;
        for (; x <= x1; x++) {
            s32 a, b;
            volatile s32 c;
            if (((Unk_020324d8_Obj *)obj)->vfunc_08(&a, &b, (s32 *)&c, x, z)) {
                if (c == 2) {
                    if (flag) {
                        Unk_02032808_V3 p;
                        p.x = (x << 13) + 0x1000;
                        p.y = 0;
                        p.z = zw;
                        p.y = 0;
                        func_020325cc(&p, a, b, 2, c);
                    }
                } else {
                    Unk_02032808_V3 p;
                    p.x = (x << 13) + 0x1000;
                    p.y = 0;
                    p.z = zw;
                    p.y = 0;
                    func_020325cc(&p, a, b, 1, c);
                }
            } else if (flag) {
                if (data_021bfab8.unk_1f3c.unk_00 != 0) {
                    void *r = _ZN12Unk_02033d4c13func_02033d4cEii(&data_021bfab8.unk_1f3c, x, z);
                    if (r != 0) {
                        Unk_02032808_V3 p;
                        p.x = (x << 13) + 0x1000;
                        p.y = 0;
                        p.z = zw;
                        p.y = 0;
                        func_020325cc(&p, (s32)r, 0x1000, 2, 2);
                    }
                }
            }
        }
    }
}

void Unk_02032494::func_02032494(Unk_02032d60 *out) {
    u32 n = unk_00;
    Unk_02032808 *p = unk_04;
    u32 i;
    for (i = 0; i < n; p++, i++) {
        Unk_02032808 *q = unk_04;
        u32 j;
        for (j = 0; j < n; q++, j++) {
            func_0203270c(p, out, q);
        }
    }
}

Unk_020323f8::Unk_020323f8() {
    func_0203245c();
}

Unk_020323f8::~Unk_020323f8() {}

void Unk_020323f8::func_0203245c() {
    s32* a = unk_08;
    s32* b = unk_10;
    s16* p = unk_00;
    s32 i;
    unk_04 = 0;
    for (i = 0; i < 2; i++) {
        *p = 0;
        *a++ = 0;
        *b++ = 0;
        p++;
    }
}

BOOL Unk_020323f8::func_020323f8(s32 a, s32 b, s32 c) {
    s16* p = unk_00;
    s32* q = unk_10;
    s32 i = 0;
    u8 n = unk_04;
    volatile s32 z = 0;
    for (; i < n; p++, q++, i++) {
        s32 t = *(s16*)((u8*)p + z);
        if (t == a && *q == b) {
            return FALSE;
        }
    }
    if (n < 2) {
        unk_00[n] = a;
        unk_10[unk_04] = b;
        unk_08[unk_04] = c;
        unk_04++;
        return TRUE;
    }
    return FALSE;
}

void Unk_02032238::func_020323d8() {
    unk_0c.func_0203245c();
    unk_08 = 0;
    unk_00 = unk_04;
    unk_04 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

void Unk_02032238::func_020323c8() {
    unk_04 = 0;
    unk_00 = 0;
    unk_08 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

Unk_02032238::Unk_02032238() {
    func_020323c8();
}

Unk_02032238::~Unk_02032238() {}

void Unk_02032238::func_02032238(s32 v) {
    s32 i = 0;
    s32 base = v + 0x8000;
    for (; i < unk_0c.unk_04; i++) {
        u32 d = (u16)(unk_0c.unk_00[i] - base);
        if (d < 0x2000 || d >= 0xe000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x100;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 8;
            }
        } else if (d < 0x6000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x400;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x20;
            }
        } else if (d < 0xa000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x800;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x40;
            }
        } else {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x200;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x10;
            }
        }
    }
    if (unk_0c.unk_04 == 2) {
        s32 mid = ((unk_0c.unk_00[0] + unk_0c.unk_00[1]) << 15) >> 16;
        s32 diff = v - (s16)(mid + 0x7fff);
        if (diff < 0) {
            diff = -diff;
        }
        if (diff < 0x2000) {
            unk_04 = unk_04 | 0x1000;
        }
        if ((s16)(unk_0c.unk_00[0] + unk_0c.unk_00[1]) == 0) {
            unk_04 = unk_04 | 0x2000;
        }
    }
}

extern "C" void* func_02032228(void* p) {
    _ZN13Unk_020339ccXC2Ev(p);
    return p;
}

extern "C" void* func_02032218(void* p) {
    _ZN13Unk_020339ccXD2Ev(p);
    return p;
}

void Unk_020d8d28::vfunc_00(u8* p) {
    _ZN12Unk_02032dc413func_02032dc4EP15Unk_0202f2ac_V3S1_iP16Unk_02032dc4_Outi(p, (s32)unk_08, &unk_0c, unk_1c, unk_04, unk_20);
}

void Unk_020d8d28::vfunc_04(u8* p) {
    u8* e;
    Unk_020d8d28_Dead dead;
    u8* end = p + *(s32*)(p + 0xa00) * 0x40;
    for (e = p; e < end; e += 0x40) {
        if (unk_08->unk_04 < *(s32*)(e + 8)) {
            if (_ZN12Unk_020d8ccc13func_0202f2d8EP15Unk_0202f2ac_V3(e, unk_08)) {
                unk_08->unk_04 = *(s32*)(e + 8);
                unk_04->unk_04 |= 1;
                unk_04->unk_08 = *(u8*)(e + 0x38);
            }
        }
    }
}

void Unk_020d8d28::vfunc_08(u8* p) {
    s32 out;
    if (unk_24 & 1) {
        s32 t = (s32)func_0203139c();
        if (_ZN12Unk_0203249413func_02032604EP15Unk_02032808_V3iPj(p, (s32)unk_08, &unk_0c, &out, unk_20, t)) {
            unk_04->unk_04 |= 1;
            unk_04->unk_08 = out;
        }
    }
    if (unk_24 & 6) {
        s32 t = (s32)func_0203139c();
        _ZN12Unk_0203249413func_02032658EP15Unk_02032808_V3iPv(p, (s32)unk_08, unk_1c, unk_04, unk_20, t);
    }
}

void Unk_020d8d14::vfunc_00(u8* p) {
    Unk_02031ed4_Vec out;
    Unk_02032028_Ent* e;
    unk_34 = *(s32*)(p + 0x480);
    for (e = (Unk_02032028_Ent*)p; (u8*)e < p + unk_34 * 0x30; e++) {
        Unk_02032028_V v0(e->unk_14, 0, e->unk_18);
        Unk_02032028_V v1(e->unk_04, e->unk_2c, e->unk_08);
        Unk_02032028_V v2(e->unk_04, -0x8000, e->unk_08);
        Unk_02032028_V v3(e->unk_0c, -0x8000, e->unk_10);
        Unk_02032028_L4 l4(e->unk_0c, e->unk_2c, e->unk_10);
        Unk_020d8cccX a((Unk_0202f660_V3 *)&v1, (Unk_0202f660_V3 *)&v2, (Unk_0202f660_V3 *)&v3, (Unk_0202f660_V3 *)&v0);
        Unk_020d8cccX b((Unk_0202f660_V3 *)&v1, (Unk_0202f660_V3 *)&v3, (Unk_0202f660_V3 *)&l4.v4, (Unk_0202f660_V3 *)&v0);
        Unk_020d8cccX* r;
        for (r = &a; r < &b + 1; r++) {
            if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(r, &unk_08) >= 0) {
                if (Unk_02031f90_Ge0(_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(r, unk_04))) {
                    continue;
                }
                if (_ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(r, &out, &unk_08, unk_04)) {
                    s32 z = out.z;
                    Unk_02031ed4_Vec* d = unk_04;
                    s32 y = d->y;
                    s32 x = out.x;
                    d->x = x;
                    d->y = y;
                    d->z = z;
                    _ZN13Unk_020339ccX13func_020339ccERKS_(&unk_1c, &e->unk_20);
                    Unk_02031ed4_Vec* n = (Unk_02031ed4_Vec*)((u8*)r + 0x28);
                    unk_24 = *n;
                    unk_30 = e->unk_20.unk_00;
                    unk_18 = 1;
                }
            }
        }
    }
}

void Unk_020d8d14::vfunc_04(u8* p) {
    Unk_02031ed4_Vec out;
    u8* e;
    u8* end;
    BOOL one = TRUE;
    unk_38 = *(s32*)(p + 0xa00);
    for (e = p; e < p + unk_38 * 0x40; e += 0x40) {
        Unk_02031f90_Ent* ent = (Unk_02031f90_Ent*)e;
        if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(e, &unk_08) >= 0) {
            if (Unk_02031f90_Ge0(_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(e, unk_04))) {
                continue;
            }
            if (_ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(e, &out, &unk_08, unk_04)) {
                Unk_02031ed4_Vec* d = unk_04;
                d->x = out.x;
                d->y = out.y;
                d->z = out.z;
                _ZN13Unk_020339ccX13func_020339ccERKS_(&unk_1c, &ent->unk_38);
                Unk_02031ed4_Vec* n = &ent->unk_28;
                unk_24 = *n;
                unk_30 = ent->unk_38.unk_00;
                unk_18 = one;
            }
        }
    }
}

void Unk_020d8d14::vfunc_08(u8* p) {
    u8* r6;
    u8* e;
    volatile Unk_02031ed4_Vec t;
    Unk_02031ed4_Vec* q0;
    Unk_02031ed4_Vec* g;
    unk_3c = *(s32*)p;
    r6 = p + 4;
    e = r6;
    g = (Unk_02031ed4_Vec *)&data_021bfa4c;
    for (; e < r6 + unk_3c * 0x24; e += 0x24) {
        Unk_02031ed4_Ent* ent = (Unk_02031ed4_Ent*)e;
        q0 = unk_04;
        t.x = q0->x;
        t.y = q0->y;
        t.z = q0->z;
        if (_ZN13Unk_0202f7b8X13func_0202fc20EP15Unk_0202f660_V3S1_(e, unk_04, &unk_08)) {
            _ZN13Unk_020339ccX13func_020339ccERKS_(&unk_1c, &ent->unk_14);
            unk_24.x = g->x;
            unk_24.y = g->y;
            unk_24.z = g->z;
            unk_30 = ent->unk_14.unk_00;
            unk_18 = 1;
        }
        q0 = unk_04;
        t.x = q0->x;
        t.y = q0->y;
        t.z = q0->z;
        if (_ZN13Unk_0202f7b8X13func_0202fa70EP15Unk_0202f660_V3S1_(e, unk_04, &unk_08)) {
            _ZN13Unk_020339ccX13func_020339ccERKS_(&unk_1c, &ent->unk_14);
            Unk_02031ed4_Vec* q = unk_04;
            s32 z = q->z - ent->unk_00.z;
            s32 x = q->x - ent->unk_00.x;
            unk_24.x = x;
            unk_24.y = 0;
            unk_24.z = z;
            func_020e94f8(&unk_24);
            unk_30 = ent->unk_14.unk_00;
            unk_18 = 1;
        }
    }
}

Unk_020d8d74::Unk_020d8d74() {
    func_02031ea4();
}

void Unk_020d8d74::func_02031ea4() {
    unk_38 = 0;
    unk_48 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
}

s32* Unk_020d8d74::func_02031ea0() {
    return &unk_3c;
}

void Unk_020d8d74::func_02031e10(Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, s32 d) {
    Unk_02031e10_Vec v0, v1;
    u32 out[3];
    unk_48 = func_01ffcb0c(d, d);
    v0.x = a->x;
    v0.y = a->y;
    v0.z = a->z;
    v1.x = a->x;
    v1.y = a->y;
    v1.z = a->z;
    func_02031574((s32 *)(&v0), (s32 *)(b));
    func_02031554((s32 *)(&v1), (s32 *)(b));
    func_02031574((s32 *)(&v0), (s32 *)(c));
    func_02031554((s32 *)(&v1), (s32 *)(c));
    s32 z = (v1.z + v0.z) >> 1;
    s32 y = (v1.y + v0.y) >> 1;
    s32 x = (v1.x + v0.x) >> 1;
    unk_3c = x;
    unk_40 = y;
    unk_44 = z;
    func_0202f3a8(out, a, b, c);
    _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(this, a, b, c, out);
}

Unk_02031e08::Unk_02031e08() {}

Unk_02031e08::~Unk_02031e08() {}

extern "C" void func_02031dfc(void *p) {
    data_021bf9b0 = NULL;
}

extern "C" s32 func_02031de0(Unk_020d8d74* node) {
    if (node->unk_38 == NULL) {
        node->unk_38 = data_021bf9b0;
        data_021bf9b0 = node;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02031da4(Unk_020d8d74* node) {
    Unk_020d8d74* p;
    Unk_020d8d74* prev;
    for (p = data_021bf9b0, prev = NULL; p != NULL; prev = p, p = p->unk_38) {
        if (p == node) {
            if (prev != NULL) {
                prev->unk_38 = p->unk_38;
            } else {
                data_021bf9b0 = p->unk_38;
            }
            node->func_02031ea4();
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_02031d5c(s32* a, s32 b, s32 c) {
    Unk_020d8d74* p;
    p = data_021bf9b0;
    if (p != NULL) {
        for (; p != NULL; p = p->unk_38) {
            if ((s64)p->unk_48 >= func_01ffd028(&p->unk_3c, a)) {
                p->vfunc_10((s32)a, c, b);
            }
        }
    }
}

void Unk_020d8cf4X::func_02031d04() {
    Unk_02000c8c* a;
    Unk_0202ea3c* b;
    s32 i;
    unk_2a = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0x1000;
    unk_20 = 0x1000;
    unk_24 = 0x1000;
    unk_28 = 0;
    unk_2c = 0;
    unk_98 = 0;
    a = unk_30;
    b = unk_60;
    for (i = 0; i < 4; i++) {
        a->unk_00 = 0;
        a->unk_04 = 0;
        a->unk_08 = 0;
        _ZN12Unk_0202f04813func_0202f048Eii(b, 0, 0);
        a++;
        b++;
    }
}

Unk_020d8cf4X::Unk_020d8cf4X() {
    func_02031d04();
}

Unk_020d8cf4X::~Unk_020d8cf4X() {}

void Unk_020d8cf4X::func_02031b90(s32 a, s32 b, s32 c, Unk_02031b90_Vec* p, s16 s, Unk_02031b90_Vec* q) {
    unk_10 = a;
    unk_14 = b;
    unk_18 = c;
    _ZN12Unk_0203161813func_02031960EP16Unk_0203182c_VeciS1_(this, p, s, q);
    unk_04 = p->x;
    unk_08 = p->y;
    unk_0c = p->z;
    unk_1c = q->x;
    unk_20 = q->y;
    unk_24 = q->z;
    unk_28 = s;
    unk_98 = 1;
}

void Unk_020d8cf4X::vfunc_00() {}

Unk_02031b84::Unk_02031b84() {}

Unk_02031b84::~Unk_02031b84() {}

extern "C" void func_02031b78(void *p) { data_021bf9b4 = 0; }

BOOL Unk_02031618::func_02031960(Unk_0203182c_Vec *a, s32 ang, Unk_0203182c_Vec *b)
{
    Unk_0203182c_Vec corners[4];
    Unk_0203182c_Vec hi, lo;
    Unk_0203182c_Vec *p, *q;
    Unk_0203182c_Vec *pv;
    Unk_02031960_P8 *as;
    s32 i, k;
    s32 hx, hy, hz;
    s32 cx, cy, cz, dx, dy, dz;
    BOOL result;
    if (ang == unk_28) {
        if (func_020e96ec(&unk_04, a) == 0) {
            if (func_020e96ec(&unk_1c, b) == 0) goto end0;
        }
    }
    unk_04.x = a->x;
    unk_04.y = a->y;
    unk_04.z = a->z;
    unk_1c.x = b->x;
    unk_1c.y = b->y;
    unk_1c.z = b->z;
    unk_28 = ang;
    hx = unk_10.x >> 1;
    hz = unk_10.y >> 1;
    hy = unk_10.z;
    corners[0].x = -hx;
    corners[0].y = hy;
    corners[0].z = hz;
    q = &corners[1];
    q->x = hx;
    q->y = hy;
    q->z = hz;
    q = &corners[2];
    q->x = hx;
    q->y = hy;
    q->z = -hz;
    q = &corners[3];
    q->x = -hx;
    q->y = hy;
    q->z = -hz;
    func_020e8388(data_021f47e0, a->x, a->y, a->z);
    func_020e8404(data_021f47e0, ang);
    func_020e84f8(data_021f47e0, b->x, b->y, b->z);
    p = corners;
    pv = unk_30;
    as = unk_60;
    if (unk_10.x == 0 || unk_10.y == 0) {
        k = 1;
        if (unk_10.y == 0) k = 0;
        unk_2a = 2;
        for (i = 0; i < 4; p++, i++) {
            if ((i & 1) == k) {
                MTX_MultVec43(p, data_021f47e0, pv);
                if (i == k) {
                    hi.x = pv->x; hi.y = pv->y; hi.z = pv->z;
                    lo.x = pv->x; lo.y = pv->y; lo.z = pv->z;
                } else {
                    func_02031574(&hi.x, &pv->x);
                    func_02031554(&lo.x, &pv->x);
                }
                _ZN12Unk_0202f04813func_0202f048Eii(as, 0, 0x1000);
                _ZN12Unk_0202f04813func_0202ef18Es(as, (s16)(ang + (i << 14)));
                pv++;
                as++;
            }
        }
    } else {
        unk_2a = 4;
        for (i = 0; i < unk_2a; i++) {
            MTX_MultVec43(p, data_021f47e0, pv);
            if (i == 0) {
                hi.x = pv->x; hi.y = pv->y; hi.z = pv->z;
                lo.x = pv->x; lo.y = pv->y; lo.z = pv->z;
            } else {
                func_02031574(&hi.x, &pv->x);
                func_02031554(&lo.x, &pv->x);
            }
            _ZN12Unk_0202f04813func_0202f048Eii(as, 0, 0x1000);
            _ZN12Unk_0202f04813func_0202ef18Es(as, (s16)(ang + (i << 14)));
            pv++;
            p++;
            as++;
        }
    }
    cz = (hi.z + lo.z) >> 1;
    cy = (hi.y + lo.y) >> 1;
    cx = (hi.x + lo.x) >> 1;
    unk_80.x = cx;
    unk_80.y = cy;
    unk_80.z = cz;
    dz = hi.z - unk_80.z;
    dy = hi.y - unk_80.y;
    dx = hi.x - unk_80.x;
    unk_8c.x = dx;
    unk_8c.y = dy;
    unk_8c.z = dz;
    result = TRUE;
    goto end;
end0:
    result = FALSE;
end:
    return result;
}

extern "C" BOOL func_02031908(Unk_020318cc_Node *n, s32 a, s32 b, s32 c, s32 d, s16 e, Unk_02031908_Vec *v)
{
    Unk_02031908_Vec s;
    s.x = 0x1000;
    s.y = 0x1000;
    s.z = 0x1000;
    if (v != 0) {
        s.x = v->x;
        s.y = v->y;
        s.z = v->z;
    }
    if (_ZN13Unk_020d8cf4X13func_02031b90EiiiP16Unk_02031b90_VecsS1_(n, a, b, c, d, e, &s)) {
        n->unk_2c = data_021bf9b4;
        data_021bf9b4 = n;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020318cc(Unk_020318cc_Node *n)
{
    Unk_020318cc_Node *cur = data_021bf9b4;
    Unk_020318cc_Node *prev = 0;
    while (cur != 0) {
        if (cur == n) {
            if (prev != 0) {
                prev->unk_2c = cur->unk_2c;
            } else {
                data_021bf9b4 = cur->unk_2c;
            }
            _ZN13Unk_020d8cf4X13func_02031d04Ev(n);
            return TRUE;
        }
        prev = cur;
        cur = cur->unk_2c;
    }
    return FALSE;
}

extern "C" BOOL func_0203182c(Unk_0203182c_Vec *a, Unk_0203182c_Vec *b, Unk_0203182c_Vec *c, Unk_0203182c_Vec *d)
{
    Unk_0203182c_Vec mn, mx;
    Unk_0203182c_Vec *pts[2];
    s32 mask, i;
    pts[0] = c;
    pts[1] = d;
    func_020e9960(&mn, a, b);
    func_01ffd070(&mx, a, b);
    mask = 0xff;
    for (i = 0; i < 2; i++) {
        Unk_0203182c_Vec *p = pts[i];
        s32 f = 0;
        if (p->x < mn.x) f |= 1;
        else if (p->x > mx.x) f |= 2;
        if (p->z < mn.z) f |= 4;
        else if (p->z > mx.z) f |= 8;
        if (f == 0) return FALSE;
        mask &= f;
    }
    if (mask == 1) return TRUE;
    if (mask == 2) return TRUE;
    if (mask == 4) return TRUE;
    if (mask == 8) return TRUE;
    return FALSE;
}

extern "C" void func_02031618(s32 unused, Unk_0203182c_Vec *pos, Unk_0203182c_Vec *size, s32 a3, s32 a4, u32 flags, s32 mode)
{
    u8 *q;
    Unk_02031618 *n = (Unk_02031618 *)data_021bf9b4;
    u32 m2 = flags & 2;
    u32 m1 = flags & 1;
    for (; n != 0; n = n->unk_2c) {
        BOOL skip = FALSE;
        Unk_0203182c_Vec c, d;
        s32 i;
        if (mode == 0) {
            if (n->unk_04.y <= 0) skip = TRUE;
        } else {
            if (n->unk_04.y > 0) skip = TRUE;
        }
        if (skip) continue;
        c.x = n->unk_80.x;
        c.y = n->unk_80.y;
        c.z = n->unk_80.z;
        func_020e9960(&d, &c, pos);
        if (Unk_02031618_Abs(d.x) >= n->unk_8c.x + size->x) continue;
        if (Unk_02031618_Abs(d.z) >= n->unk_8c.z + size->z) continue;
        if (m2 != 0) {
            u8 res[4];
            q = res;
            s32 base;
            for (i = 0; i < ((volatile Unk_02031618 *)n)->unk_2a; i++) {
                *q = func_0203182c(pos, size, &n->unk_30[i & (n->unk_2a - 1)], &n->unk_30[(i + 1) & (n->unk_2a - 1)]);
                q++;
            }
            base = n->unk_04.y + func_01ffcb0c(n->unk_10.z, n->unk_1c.y);
            for (i = 0; i < ((volatile Unk_02031618 *)n)->unk_2a; i++) {
                if (res[i & 3] == 0) {
                    Unk_02031960_P8 e0, e1;
                    u8 obj[0x34];
                    _ZN12Unk_0202f04813func_0202f048Eii(&e0, n->unk_30[i & (n->unk_2a - 1)].x, n->unk_30[i & (n->unk_2a - 1)].z);
                    _ZN12Unk_0202f04813func_0202f048Eii(&e1, n->unk_30[(i + 1) & (n->unk_2a - 1)].x, n->unk_30[(i + 1) & (n->unk_2a - 1)].z);
                    _ZN12Unk_020d8d50C1EP12Unk_0202f048S1_S1_iijj(obj, &e0, &e1, &n->unk_60[i & (n->unk_2a - 1)], base, 1, 1, n);
                    _ZN12Unk_02032d6013func_02032d98EP17Unk_02032d60_Elem(a3, obj);
                    _ZN12Unk_020d8d50D1Ev(obj);
                }
            }
        }
        if (m1 != 0) {
            s32 cc = n->unk_2a - 1;
            _ZN12Unk_0203317013func_02033170EP15Unk_0202f2ac_V3S1_S1_S1_jj(a4, &n->unk_30[0], &n->unk_30[cc & 1], &n->unk_30[cc & 3], &data_021bfa4c, 1, n);
            cc = n->unk_2a - 1;
            _ZN12Unk_0203317013func_02033170EP15Unk_0202f2ac_V3S1_S1_S1_jj(a4, &n->unk_30[cc & 1], &n->unk_30[cc & 2], &n->unk_30[cc & 3], &data_021bfa4c, 1, n);
        }
    }
}

Unk_020d8d3cX::Unk_020d8d3cX() {}

Unk_020d8d3cX::~Unk_020d8d3cX() {}

s32 Unk_020d8d3cX::vfunc_08() { return 0; }

Unk_020d8d00::Unk_020d8d00() {}

Unk_020d8d00::~Unk_020d8d00() {}

void Unk_020d8d00::vfunc_00(u8 *p) {}

void Unk_020d8d00::vfunc_04(u8 *p) {}

void Unk_020d8d00::vfunc_08(u8 *p) {}

extern "C" u32 func_02031594(s32 i)
{
    return data_021bfab8.unk_04[i].unk_130;
}

extern "C" void func_02031574(s32 *a, s32 *b)
{
    if (b[0] > a[0]) a[0] = b[0];
    if (b[1] > a[1]) a[1] = b[1];
    if (b[2] > a[2]) a[2] = b[2];
}

extern "C" void func_02031554(s32 *a, s32 *b)
{
    if (b[0] < a[0]) a[0] = b[0];
    if (b[1] < a[1]) a[1] = b[1];
    if (b[2] < a[2]) a[2] = b[2];
}

extern "C" s32 func_020314f4(Unk_020314f4_Vec *p)
{
    Unk_020314f4_Vec v, w;
    s32 s, d;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    w.x = (v.x & 0xffffe000) + 0x1000;
    w.y = 0;
    w.z = (v.z & 0xffffe000) + 0x1000;
    VEC_Subtract(&v, &w, &v);
    d = v.z - v.x;
    s = v.x + v.z;
    if (s > 0) {
        if (d > 0) return 2;
        return 3;
    }
    if (d > 0) return 1;
    return 0;
}

extern "C" u32 func_020314dc(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_0f : 0; }

extern "C" u32 func_020314c4(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_0e : 0; }

extern "C" u32 func_020314ac(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_0d : 0; }

extern "C" u32 func_02031494(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_0c : 0; }

extern "C" u32 func_02031474(s32 x, s32 y, u32 c)
{
    return data_020c7c2c[c & 3](func_01ffcb2c(x, y));
}

extern "C" u32 func_0203145c(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_13 : 0; }

extern "C" u32 func_02031444(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_12 : 0; }

extern "C" u32 func_0203142c(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_11 : 0; }

extern "C" u32 func_02031414(s32 t) { return t < 0x7c ? data_020c7c4c[t].unk_10 : 0; }

extern "C" u32 func_020313f4(s32 x, s32 y, u32 c)
{
    return data_020c7c3c[c & 3](func_01ffcb2c(x, y));
}

extern "C" Unk_020d8d3cX *func_0203139c()
{
    static Unk_020d8d3cX inst;
    Unk_020d8d3cX *p = ((Unk_020d8ce8 *)data_020d8ce8)->unk_120;
    if (p == 0) p = &inst;
    return p;
}

extern "C" BOOL func_02031360(s32 t, s32 k)
{
    u32 v = t < 0x7c ? data_020c7c4c[t].unk_14 : 0;
    if (v != 0) {
        switch (k) {
        case 1:
            if (t == 0x16) return FALSE;
            break;
        case 2:
            if (t == 0x16) return FALSE;
            break;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02031304(Unk_02031304_Vec *v)
{
    u32 obj[16];
    s32 a, b, c;
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(obj, v, 0, 0);
    if (_ZN12Unk_0203389c13func_02033914Ei(obj, 0)) {
        func_02033988(obj);
        return TRUE;
    }
    if (func_020307c4(v->x >> 13, v->z >> 13, &a, &b, &c)) {
        func_02033988(obj);
        return TRUE;
    }
    func_02033988(obj);
    return FALSE;
}

extern "C" BOOL func_020312ec(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 7) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020312d0(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 3 || t == 0x1d) return TRUE;
    return FALSE;
}

extern "C" s32 func_020312a8(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t == 8) return 1;
    if (t == 7 || (t >= 0xb && t <= 0x12)) return 2;
    return 0;
}

extern "C" s32 func_02031284(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c4c[t].unk_04;
    return 0;
}

extern "C" s32 func_02031260(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c4c[t].unk_08;
    return 0;
}

extern "C" s32 func_0203123c(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c4c[t].unk_05;
    return 0;
}

extern "C" s32 func_02031218(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) return data_020c7c4c[t].unk_09;
    return 2;
}

extern "C" s32 func_020311ec(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    if (t < 0x7c) {
        s32 v = data_020c7c4c[t].unk_06;
        if (v > 0) v = 1;
        return v;
    }
    return -1;
}

extern "C" BOOL func_020311c0(s32 x, s32 y)
{
    s32 t = func_01ffcb2c(x, y);
    u32 v = t < 0x7c ? data_020c7c4c[t].unk_17 : 0;
    return v != 0 ? TRUE : FALSE;
}

extern "C" BOOL func_02031194(s32 a, s32 b)
{
    if (func_01ffcb2c(a, b) == 0x1e && func_01ffcb2c(a, b + 1) == 8) return TRUE;
    return FALSE;
}

extern "C" u32 func_02031154(s32 x, s32 y)
{
    Unk_01ffcb5c_Chunk *p = func_01ffcb5c(x >> 4, y >> 4);
    if (p) {
        s32 i, b;
        x &= 15;
        y &= 15;
        i = x + y * 16;
        b = p->unk_04[i >> 1];
        if (i & 1) return (b >> 4) & 15;
        return b & 15;
    }
    return 0;
}

extern "C" BOOL func_02031130(s32 a, s32 b)
{
    if (func_02031154(a, b)) return FALSE;
    return func_020310f8(a, b);
}

extern "C" BOOL func_020310f8(s32 a, s32 b)
{
    Unk_020310f8_Obj *o = (Unk_020310f8_Obj *)func_0203139c();
    if (o) {
        s32 x, y, z;
        if (o->vfunc_08(&x, &y, &z, a, b)) return FALSE;
    }
    return func_02031260(a, b);
}

extern "C" BOOL func_02031098(u8 *out, s32 a, s32 b)
{
    s32 i = func_01ffcb2c(a, b);
    if (i < 0x7c) {
        out[0] = data_020c7c4c[i].unk_18;
        out[1] = data_020c7c4c[i].unk_19;
        out[2] = data_020c7c4c[i].unk_1a;
        out[3] = data_020c7c4c[i].unk_1b;
        return TRUE;
    }
    out[0] = data_020c7c18[0];
    out[1] = data_020c7c18[1];
    out[2] = data_020c7c18[2];
    out[3] = data_020c7c18[3];
    return FALSE;
}

extern "C" u16 func_0203107c(s32 i)
{
    if (i < 0x7c) return data_020c7c4c[i].unk_00;
    return 0xffff;
}

extern "C" u16 func_02031060(s32 i)
{
    if (i < 0x7c) return data_020c7c4c[i].unk_02;
    return 0xffff;
}

extern "C" BOOL func_02030f10(s32 a, s32 b, s32 c, s32 d, u8 flag)
{
    s32 dy, dx;
    s32 r5;
    volatile Unk_02030f10_Vec A;
    Unk_02030f10_Vec Q;
    dx = a - c;
    if (dx < 0) dx = -dx;
    if (dx > 1) return FALSE;
    dy = b - d;
    if (dy < 0) dy = -dy;
    if (dy > 1) return FALSE;
    if (flag) {
        if (!func_02031284(c, d) || func_020311c0(c, d)) return FALSE;
    } else {
        if (!func_02031284(c, d)) return FALSE;
    }
    A.x = (a << 13) + 0x1000;
    A.y = 0;
    A.z = (b << 13) + 0x1000;
    Q.x = (c << 13) + 0x1000;
    Q.y = 0;
    Q.z = (d << 13) + 0x1000;
    dx += dy;
    r5 = func_0203081c((Unk_0202ff44_V3 *)(&Q), 0, 25);
    if (dx == 1) {
        if (r5 != 0) return FALSE;
    } else if (dx == 2) {
        Unk_02030f10_L l;
        s32 tR, tS;
        l.R.x = Q.x;
        l.R.y = 0;
        l.R.z = A.z;
        tR = func_0203081c((Unk_0202ff44_V3 *)(&l.R), 0, 25);
        if (tR == 0 && r5 == tR) {
            _ZN12Unk_02033b3c13func_02033d2cEP16Unk_0203389c_Veci(&l.T, &l.R, 0);
            if (Unk_02030f10_Flat(&l.T)) return TRUE;
        }
        l.S.x = A.x;
        l.S.y = 0;
        l.S.z = Q.z;
        tS = func_0203081c((Unk_0202ff44_V3 *)(&l.S), 0, 25);
        if (tS == 0 && r5 == tS) {
            _ZN12Unk_02033b3c13func_02033d2cEP16Unk_0203389c_Veci(&l.T2, &l.S, 0);
            if (Unk_02030f10_Flat(&l.T2)) return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_02030e48(Unk_02030e48_Vec *pos, s32 r, s32 *out, s32 flags)
{
    Unk_0203398c a((Unk_0203389c_Vec *)pos, 0, flags);
    if (a.unk_30) {
        Unk_02030e48_Vec tmp;
        Unk_02030e48_Vec d[8];
        s32 nr = -r;
        s32 z = 0;
        s32 best;
        s32 i;
        d[0].x = nr; d[0].y = 0; d[0].z = nr;
        { s32 *q = (s32 *)&d[1]; q[0] = nr; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[2]; q[0] = r; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[3]; q[0] = r; q[1] = z; q[2] = nr; }
        { s32 *q = (s32 *)&d[4]; q[0] = nr; q[1] = z; q[2] = z; }
        { s32 *q = (s32 *)&d[5]; q[0] = r; q[1] = z; q[2] = z; }
        { s32 *q = (s32 *)&d[6]; q[0] = z; q[1] = z; q[2] = r; }
        { s32 *q = (s32 *)&d[7]; q[0] = z; q[1] = z; q[2] = nr; }
        best = z;
        for (i = 0; i < 8; i++) {
            func_01ffd070(&tmp, pos, &d[i]);
            Unk_0203398c b((Unk_0203389c_Vec *)&tmp, z, flags);
            if (!b.unk_30) return FALSE;
            best = a.unk_3c;
        }
        if (out) *out = best;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02030d9c(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, u32 dist, s32 *dir, u32 count, s32 r, s32 flags)
{
    if (count >= 1) {
        u32 step = dist / count;
        Unk_02030e48_Vec v;
        u32 i;
        v.x = 0;
        v.y = 0;
        v.z = 0x1000;
        func_020e93a0(&v, dir);
        for (i = 0; i <= count; i++) {
            s32 t = i;
            s32 u, s, res;
            Unk_02030e48_Vec p;
            t = t * step;
            s = pos->z + func_01ffcb0c(v.z, t);
            u = pos->y + func_01ffcb0c(v.y, t);
            p.x = pos->x + func_01ffcb0c(v.x, t);
            p.y = u;
            p.z = s;
            if (func_02030e48(&p, r, &res, flags)) {
                out->x = p.x;
                out->y = p.y;
                out->z = p.z;
                out->y = res;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02030d78(Unk_02030e48_Vec *out, Unk_02030e48_Vec *pos, s32 *dir, u32 dist, u32 s5, s32 s6)
{
    return func_02030d9c(out, pos, dist, dir, s6, s5, 2);
}

extern "C" BOOL func_02030d60(Unk_02030e48_Vec *pos)
{
    return func_02030e48(pos, 0xa00, 0, 2);
}

extern "C" u32 func_02030d58(s32 a) { return func_02031594(a); }

Unk_02033b3c::~Unk_02033b3c()
{
}

extern "C" s32 func_02030be4(s32 *a, s32 *b, s32 c, s32 d)
{
    s32 bx, bz, j, i;
    Unk_02033b94 X, Y, Z;
    if (func_01ffcb5c(c, d) == 0) return 4;
    bx = c << 4;
    bz = d << 4;
    for (j = 0; j < 16; j++) {
        for (i = 0; i < 16; i++) {
            *a = bx + i;
            *b = bz + j;
            _ZN12Unk_02033b3c13func_02033b94Eiii(&X, *a, *b, 0);
            _ZN12Unk_02033b3c13func_02033b94Eiii(&Y, *a + 1, *b, 0);
            if (Unk_02030be4_A(&X)) {
                if (Unk_02030be4_B(&Y)) {
                    _ZN12Unk_02033b3c13func_02033b94Eiii(&Z, *a + 2, *b, 0);
                    if (Unk_02030be4_B(&Z)) return 1;
                    return 0;
                }
            }
            if (X.unk_10[0] != 0x14 && X.unk_10[1] != 0x14 && X.unk_10[2] == 0x14 && X.unk_10[3] == 0x14
                && Y.unk_10[0] != 0x14 && Y.unk_10[1] == 0x14 && Y.unk_10[2] == 0x14 && Y.unk_10[3] != 0x14) {
                s32 idx = Y.unk_10[3];
                s32 v;
                if (idx < 0x7c) v = data_020c7c4c[idx].unk_14;
                else v = 0;
                if (v == 0) return 2;
                return 3;
            }
        }
    }
    return 4;
}

extern "C" s32 func_02030bc4()
{
    s32 r = func_01ffcb2c();
    if (r >= 0x6f && r <= 0x70) return r - 0x6f;
    return -1;
}

extern "C" void func_020309d4(Unk_020309d4_Owner *self, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u16 hh, s32 arg5, s32 arg6, u32 flags)
{
    struct { Unk_02030e48_Vec A, B, V1, C, D; } l;
    s32 lim, dx, dz;
    BOOL fl;
    l.A = *pos;
    l.B = *tgt;
    lim = (data_021bfa70.unk_00 + arg5) * 2;
    dx = l.A.x - tgt->x;
    if (dx < 0) dx = -dx;
    if (lim + dx > 0xc000) goto reset;
    dz = l.A.z - tgt->z;
    if (dz < 0) dz = -dz;
    if (lim + dz > 0xc000) {
    reset:
        l.B = l.A;
    }
    l.V1.x = arg5;
    l.V1.y = arg5;
    l.V1.z = arg5;
    l.C = l.B;
    l.D = l.B;
    func_02031574((s32 *)(&l.C), (s32 *)(&l.A));
    func_02031554((s32 *)(&l.D), (s32 *)(&l.A));
    VEC_Add(&l.C, &l.V1, &l.C);
    VEC_Subtract(&l.D, &l.V1, &l.D);
    Unk_020d8d28 o;
    o.unk_04 = (Unk_02032238 *)self;
    o.unk_08 = (Unk_020d8d28_Best *)&l.A;
    o.unk_0c.x = l.B.x;
    o.unk_0c.y = l.B.y;
    o.unk_0c.z = l.B.z;
    o.unk_18 = hh;
    o.unk_1c = arg5;
    o.unk_20 = arg6;
    o.unk_24 = flags;
    _ZN12Unk_0203223813func_020323d8Ev(self);
    fl = (self->unk_00 & 2) ? TRUE : FALSE;
    ((void (*)(void *, void *, void *, u32, s32, s32))func_02030608)(&l.D, &l.C, &o, flags, 0, fl);
    if ((flags & 4) && func_02031304((Unk_02031304_Vec *)(&l.A))) {
        l.A.x = tgt->x;
        l.A.y = tgt->y;
        l.A.z = tgt->z;
    }
    if (flags & 1) {
        s32 r2 = 1;
        s32 r3;
        if (!(self->unk_00 & 2)) r2 = 0;
        r3 = (flags & 0x80) ? 1 : 0;
        Unk_0203398c E((Unk_0203389c_Vec *)&l.A, r2, r3);
        if (l.A.y < E.func_02033914(0) + 0x200) {
            self->unk_04 |= 1;
            self->unk_08 = E.unk_34;
            l.A.y = E.func_02033914(0) + 0x200;
        }
        if (E.func_020338d0(l.A.y)) self->unk_04 |= 2;
    }
    _ZN12Unk_0203223813func_02032238Ei(self, hh);
    Unk_02030e48_Vec F;
    func_020e9960(&F, &l.A, pos);
    self->unk_24.x = F.x;
    self->unk_24.y = F.y;
    self->unk_24.z = F.z;
    if (flags & 8) {
        pos->x = l.A.x;
        pos->y = l.A.y;
        pos->z = l.A.z;
    }
    if (arg6) func_02031d5c((s32 *)(&l.A), arg5, arg6);
}

extern "C" u8 func_02030908(Unk_02030908_D *out, Unk_02030e48_Vec *pos, Unk_02030e48_Vec *tgt, u32 flags)
{
    Unk_02030e48_Vec A, B, C;
    A = *pos;
    B = *tgt;
    C = *tgt;
    func_02031554((s32 *)(&B), (s32 *)(&A));
    func_02031574((s32 *)(&C), (s32 *)(&A));
    Unk_020d8d14 o;
    o.unk_30 = 0;
    o.unk_04 = (Unk_02031ed4_Vec *)&A;
    o.unk_08.x = tgt->x;
    o.unk_08.y = tgt->y;
    o.unk_08.z = tgt->z;
    o.unk_14 = flags;
    o.unk_18 = 0;
    o.unk_34 = 0;
    o.unk_38 = 0;
    o.unk_3c = 0;
    ((void (*)(void *, void *, void *, u32, s32, s32))func_02030608)(&B, &C, &o, flags, 1, 0);
    if (flags & 8) *pos = A;
    out->unk_08.x = o.unk_24.x;
    out->unk_08.y = o.unk_24.y;
    out->unk_08.z = o.unk_24.z;
    ((Unk_020339ccX *)out)->func_020339cc(o.unk_1c);
    return o.unk_18;
}

extern "C" BOOL func_020308b4(s32 *p, s32 a, s32 *c, s32 w, s32 h)
{
    s32 hw = w >> 1;
    s32 hh = h >> 1;
    s32 cx = c[0];
    s32 lox = a + (cx - hw);
    s32 hix = cx + hw - a;
    s32 cz = c[2];
    s32 loz = a + (cz - hh);
    s32 hiz = cz + hh - a;
    BOOL r = FALSE;
    if (p[0] < lox) { p[0] = lox; r = TRUE; }
    else if (p[0] > hix) { p[0] = hix; r = TRUE; }
    if (p[2] < loz) { p[2] = loz; r = TRUE; }
    else if (p[2] > hiz) { p[2] = hiz; r = TRUE; }
    return r;
}

extern "C" s32 func_0203081c(Unk_0202ff44_V3 *p, u32 *out, u32 flags0) {
    Unk_0203081c_A a;
    Unk_0202ff44_V3 v14, v20;
    Unk_0203081c_B b;
    s32 r;
    func_02032228(&a);
    Unk_0203081c_Flags flags = (Unk_0203081c_Flags)(flags0 & ~6);
    v14.x = p->x;
    v14.y = p->y;
    v14.z = p->z;
    v20.x = p->x;
    v20.y = p->y;
    v20.z = p->z;
    v14.y = 0x64000;
    v20.y = 0xfff9c000;
    if (func_02030908((Unk_02030908_D *)(&a), (Unk_02030e48_Vec *)(&v20), (Unk_02030e48_Vec *)(&v14), flags)) {
        if (out) *out = a.unk_00;
        r = v20.y;
        func_02032218(&a);
        return r;
    }
    _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&b, p, 0, 0);
    if (out) *out = b.unk_34;
    r = _ZN12Unk_0203389c13func_02033914Ei(&b, 0);
    func_02033988(&b);
    func_02032218(&a);
    return r;
}

extern "C" s32 func_02030814(void) {
    return 0x200;
}

extern "C" BOOL func_020307c4(s32 x, s32 z, s32 *p, s32 *q, s32 *r) {
    Unk_0202ff44_Obj *o = data_020d8ce8->unk_120;
    if (o) {
        s32 a, b, c;
        if (o->vfunc_08(&a, &b, &c, x, z)) {
            *p = a;
            *q = b;
            *r = c;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 func_020307ac(s32 x, s32 z) {
    s32 a, b, c;
    return func_020307c4(x, z, &a, &b, &c);
}

extern "C" s32 func_02030798(Unk_0202ff44_V3 *p) {
    return func_020307ac(p->x >> 13, p->z >> 13);
}

extern "C" void func_02030608(Unk_0202ff44_V3 *a, Unk_0202ff44_V3 *b, Unk_02030608_Obj *o, u32 flags, u8 p5, u8 p6) {
    Unk_0202ff44_V3 v18, v24, v30, v3c;
    s32 x1, x2, z1, z2;
    BOOL f4 = (flags & 4) ? TRUE : FALSE;
    func_020e9960(&v18, a, &data_021bfa70);
    func_01ffd070(&v24, b, &data_021bfa70);
    x1 = v18.x >> 13;
    z1 = v18.z >> 13;
    x2 = v24.x >> 13;
    z2 = v24.z >> 13;
    func_01ffd070(&v30, &v18, &v24);
    v30.x >>= 1;
    v30.y >>= 1;
    v30.z >>= 1;
    func_020e9960(&v3c, &v24, &v18);
    v3c.x >>= 1;
    v3c.y >>= 1;
    v3c.z >>= 1;
    data_021bfab8.unk_184c.unk_00 = 0;
    data_021bfab8.unk_9c4.unk_480 = 0;
    data_021bfab8.unk_e48.unk_a00 = 0;
    _ZN12Unk_02033b4013func_02033a5cEiiiii(&data_021bfab8.unk_1a94, x1, x2, z1, z2, p6);
    if ((flags & 7) && !(flags & 0x20)) {
        _ZN12Unk_0203249413func_020324d8EPviiiii(&data_021bfab8.unk_184c, (s32)func_0203139c(), x1, x2, z1, z2, f4);
    }
    if (!(flags & 0x40)) {
        func_02031618((s32)(&data_021bfab8.unk_1a90), (Unk_0203182c_Vec *)(&v30), (Unk_0203182c_Vec *)(&v3c), (s32)(&data_021bfab8.unk_9c4), (s32)(&data_021bfab8.unk_e48), flags, 0);
        func_02031618((s32)(&data_021bfab8.unk_1a90), (Unk_0203182c_Vec *)(&v30), (Unk_0203182c_Vec *)(&v3c), (s32)(&data_021bfab8.unk_9c4), (s32)(&data_021bfab8.unk_e48), flags, 1);
    }
    if (flags & 6) {
        if (!(flags & 0x10)) _ZN12Unk_0203249413func_02032494EP12Unk_02032d60(&data_021bfab8.unk_184c, &data_021bfab8.unk_9c4);
        _ZN12Unk_02032d6013func_02032864EPviiiii(&data_021bfab8.unk_9c4, &data_021bfab8.unk_1a94, x1, x2, z1, z2, f4);
    }
    if (p5 && flags) {
        _ZN12Unk_0203317013func_020331a8EP12Unk_02033a0ciiii(&data_021bfab8.unk_e48, &data_021bfab8.unk_1a94, x1, x2, z1, z2);
    }
    o->vfunc_08(&data_021bfab8.unk_184c);
    o->vfunc_00(&data_021bfab8.unk_9c4);
    o->vfunc_04(&data_021bfab8.unk_e48);
}

extern "C" void func_02030598(s32 v) {
    if (!_ZN12Unk_020339f813func_020339f8Ei(&data_021bfab8, v)) {
        if (v < 0) {
            _ZN12Unk_020339f813func_020339f8Ei(&data_021bfab8, 0);
            data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
        } else {
            _ZN12Unk_020339f813func_020339f8Ei(&data_021bfab8, 7);
            data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
        }
    } else {
        data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
    }
}

extern "C" BOOL func_02030528(u32 a, u32 b, Unk_0202ff44_Obj *o, s32 idx) {
    Unk_02033f70 *m = &data_021bfab8.unk_04[idx];
    BOOL ok = TRUE;
    func_02030380(idx);
    if (a <= 6) m->unk_124 = (u8)a; else ok = FALSE;
    if (b <= 6) m->unk_128 = (u8)b; else ok = FALSE;
    m->unk_120 = o;
    m->unk_130 = 0;
    func_02030598(0);
    return ok;
}

extern "C" void func_02030518(void) {
    _ZN12Unk_02033d4c13func_02033db0Ev(&data_021bfab8.unk_1f3c);
}

extern "C" void func_02030504(s32 a, s32 b) {
    _ZN12Unk_02033d4c13func_02033e10Eii(&data_021bfab8.unk_1f3c, a, b);
}

extern "C" void func_020304b4(s32 x, s32 z, s32 v) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        s32 n;
        u8 *p;
        x &= 0xf;
        z &= 0xf;
        n = x + (z << 4);
        p = ch->unk_04 + (n >> 1);
        if (n & 1) {
            *p = *p & ~0xf0;
            *p = *p | (v << 4);
        } else {
            *p = *p & ~0xf;
            *p = *p | v;
        }
    }
}

extern "C" void func_02030494(s32 x, s32 z, s32 mask) {
    s32 t = func_02031154(x, z) & ~mask;
    func_020304b4(x, z, t);
}

extern "C" BOOL func_020303d0(s32 x, s32 y, s32 val, s32 idx) {
    Unk_02033f9c *c = Unk_0203030c_Get(&data_021bfab8.unk_04[idx], x, y);
    if (c) {
        c->unk_00 = val;
        c->unk_04 = val + 0x100;
        data_021bfab8.unk_04[idx].unk_130 = Unk_020303d0_All(idx);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02030380(s32 idx) {
    _ZN12Unk_02033f7013func_02033e60Ev(&data_021bfab8.unk_04[idx]);
    data_021bfab8.unk_9c4.unk_480 = 0;
    data_021bfab8.unk_e48.unk_a00 = 0;
    data_021bfab8.unk_184c.unk_00 = 0;
    func_02031b78(&data_021bfab8.unk_1a90);
    func_02031dfc(&data_021bfab8.unk_1a91);
    _ZN12Unk_02033d4c13func_02033e48Ev(&data_021bfab8.unk_1f3c);
}

extern "C" void func_0203030c(s32 idx) {
    Unk_02033f70 *m = &data_021bfab8.unk_04[idx];
    s32 y, x;
    for (y = 0; (u32)y < m->unk_128; y++) {
        for (x = 0; (u32)x < m->unk_124; x++) {
            Unk_02033f9c *c = Unk_0203030c_Get(m, x, y);
            if (c) {
                c->unk_00 = 0;
                c->unk_04 = 0;
            }
        }
    }
}

extern "C" void func_020302f8(s32 idx) {
    func_0203030c(idx);
    func_02030380(idx);
}

extern "C" void func_020302cc(s32 v) {
    Unk_02033f70 *c = data_020d8ce8;
    s16 t = c->unk_134;
    if (t != v) {
        c->unk_132 = t;
        data_020d8ce8->unk_134 = v;
    }
}

extern "C" BOOL func_02030164(s32 x, s32 z) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        u8 *base = ch->unk_00;
        s32 i;
        u8 *cell;
        s32 old, t, v;
        u32 e0, e1, e2, e3;
        s32 d0, d1, d2, d3, d4;
        x &= 0xf;
        z &= 0xf;
        cell = base + (x + (z << 4));
        old = *cell;
        t = old < 0x7c ? ((v = data_020c7c4c[old].unk_06) > 0 ? 1 : v) : -1;
        if (t == 1) {
            if (old == 3) {
                *cell = 0x1d;
                return TRUE;
            }
            if (old == 9) {
                *cell = 0x1e;
                return TRUE;
            }
            e0 = old < 0x7c ? data_020c7c4c[old].unk_0c : 0;
            e1 = old < 0x7c ? data_020c7c4c[old].unk_0d : 0;
            e2 = old < 0x7c ? data_020c7c4c[old].unk_0e : 0;
            e3 = old < 0x7c ? data_020c7c4c[old].unk_0f : 0;
            d0 = -1;
            d1 = d2 = d3 = d4 = 0;
            for (i = 0; (u32)i < 0x7c; i++) {
                if (TS(i, d0) == 0 && e0 == TB(i, unk_0c, d1) && e1 == TB(i, unk_0d, d2) && e2 == TB(i, unk_0e, d3) && e3 == TB(i, unk_0f, d4)) {
                    *cell = i;
                    return TRUE;
                }
            }
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0203006c(s32 x, s32 z, s32 mask) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        s32 c;
        s32 old;
 u8 *base;
        s32 a;
        s32 b;
        s32 i;
        s32 d0, d1, d2, d3;
        s32 was;
        u8 *cell;
        base = ch->unk_00;
        x &= 0xf;
        z &= 0xf;
        cell = base + (x + (z << 4));
        old = *cell;
        was = old;
        a = (mask & 1) ? 10 : old;
        b = ((mask >> 1) & 1) ? 10 : old;
        c = ((mask >> 2) & 1) ? 10 : old;
        if ((mask >> 3) & 1) old = 10;
        d0 = d1 = d2 = d3 = 0;
        for (i = 0; (u32)i < 0x7c; i++) {
            if (a == TB(i, unk_0c, d0) && b == TB(i, unk_0d, d1) && c == TB(i, unk_0e, d2) && old == TB(i, unk_0f, d3)) goto found;
        }
        i = 0;
    found:
        if (was != 0) {
            *cell = i;
            return TRUE;
        }
        *cell = 10;
        return FALSE;
    }
    return FALSE;
}

extern "C" void func_0203002c(s32 x, s32 z) {
    func_020304b4(x, z, 0);
    func_02030494(x, z - 1, 4);
    func_02030494(x, z + 1, 1);
    func_02030494(x - 1, z, 8);
    func_02030494(x + 1, z, 2);
}

extern "C" s32 func_0202fff0(s32 x, s32 z) {
    s32 i = func_01ffcb2c(x, z);
    if (i >= 0x68 && i <= 0x6e) i -= 0x68; else i = -1;
    if (i < 0 || i == data_020d8ce8->unk_12c) return -1;
    return i;
}

extern "C" s32 func_0202ffdc(Unk_0202ff44_V3 *p) {
    return func_0202fff0(p->x >> 13, p->z >> 13);
}

extern "C" BOOL func_0202ffb0(s32 v) {
    Unk_02033f70 *c = data_020d8ce8;
    s32 m = 0;
    if (c->unk_12c == -1) {
        c->unk_12c = v;
        return TRUE;
    }
    return m;
}

extern "C" BOOL func_0202ff64(Unk_0202ff44_V3 *p) {
    s32 i = func_01ffcb2c(p->x >> 13, p->z >> 13);
    if (i >= 0x68 && i <= 0x6e) i -= 0x68; else i = -1;
    if (i >= 0) {
        if (i == data_020d8ce8->unk_12c) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_0202ff44(void) {
    Unk_02033f70 *c = data_020d8ce8;
    s32 m = 0;
    if (c->unk_12c != -1) {
        c->unk_12c = -1;
        return TRUE;
    }
    return m;
}

extern "C" BOOL func_0202fe84(s32 *a, s32 *b, s32 *c, s32 *d) {
    if (func_02030d58(0)) {
        struct { Unk_0202fe84_Range xr, yr; } l;
        Unk_0202fe84_Pad pad;
        s32 y, x;
        l.xr.lo = 0x10;
        l.xr.hi = 0;
        l.yr = l.xr;
        for (y = 0; y < 0x20; y++) {
            for (x = 0; x < 0x20; x++) {
                if (func_01ffcb2c(x, y) != 0x15) {
                    if (x < l.xr.lo) {
                        l.xr.lo = x;
                    } else if (x > l.xr.hi) {
                        l.xr.hi = x;
                    }
                    if (y < l.yr.lo) {
                        l.yr.lo = y;
                    } else if (y > l.yr.hi) {
                        l.yr.hi = y;
                    }
                }
            }
        }
        s32 e = (l.yr.hi << 13) + 0x1000;
        *a = l.xr.lo << 13;
        *b = (l.xr.hi << 13) + 0x2000;
        *c = l.yr.lo << 13;
        if (d) {
            *d = e + 0x1000;
        }
        return TRUE;
    }
    *a = *b = *c = 0;
    if (d) {
        *d = 0;
    }
    return FALSE;
}

Unk_0202fdf0::Unk_0202fdf0() {
    unk_00.x = 0;
    unk_00.y = 0;
    unk_00.z = 0;
    unk_0c = 0;
}

Unk_0202fdf0::Unk_0202fdf0(Unk_0202f660_V3 *pos, s32 radius) {
    func_0202fe54(pos, radius);
}

Unk_0202fdf0::~Unk_0202fdf0() {}

void Unk_0202fdf0::func_0202fe54(Unk_0202f660_V3 *pos, s32 radius) {
    unk_00 = *pos;
    unk_0c = radius;
}

BOOL Unk_0202fdf0::func_0202fdf0(Unk_0202f660_V3 *pt) {
    s32 dx = pt->x - unk_00.x;
    s32 dz = pt->z - unk_00.z;
    if ((dx < 0 ? -dx : dx) > unk_0c) {
        return FALSE;
    }
    if ((dz < 0 ? -dz : dz) > unk_0c) {
        return FALSE;
    }
    s32 a = func_01ffcb0c(dz, dz);
    s32 b = func_01ffcb0c(dx, dx);
    if (b + a > func_01ffcb0c(unk_0c, unk_0c)) {
        return FALSE;
    }
    return TRUE;
}

Unk_0202f7b8X::Unk_0202f7b8X() {
    unk_10 = 0;
}

Unk_0202f7b8X::Unk_0202f7b8X(Unk_0202f660_V3 *pos, s32 radius, s32 height) : Unk_0202fdf0(pos, radius) {
    unk_10 = height;
}

Unk_0202f7b8X::~Unk_0202f7b8X() {}

void Unk_0202f7b8X::func_0202fd8c(Unk_0202f660_V3 *pos, s32 radius, s32 height) {
    func_0202fe54(pos, radius);
    unk_10 = height;
}

BOOL Unk_0202f7b8X::func_0202fcfc(Unk_0202f660_V3 *pos, s32 r) {
    s32 d = func_020e9650(&unk_00, pos);
    s32 lim = r + unk_0c;
    if (d < lim) {
        if (pos->y < unk_00.y + unk_10) {
            Unk_0202f7b8_V3 v(pos->x - unk_00.x, 0, pos->z - unk_00.z);
            if (func_020e94f8(&v)) {
                s32 s = r + unk_0c - d;
                pos->x = pos->x + func_01ffcb0c(v.x, s);
                pos->z = pos->z + func_01ffcb0c(v.z, s);
                return TRUE;
            }
        }
    } else if (d <= lim + 0x200 && pos->y < unk_00.y + unk_10) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0202f7b8X::func_0202fccc(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 top = unk_00.y + unk_10;
    if (a->y >= top && out->y < top && func_0202fdf0(out)) {
        out->y = top;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0202f7b8X::func_0202fc20(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 top = unk_00.y + unk_10;
    s32 t;
    s32 y, z;
    struct { Unk_0202f7b8_V3 A, B, D, P; } l;
    l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
    if (l.A.y > top) {
        l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
        if (l.B.y < top) {
            func_020e9960(&l.D, &l.B, &l.A);
            if (func_020e94f8(&l.D)) {
                s32 dy = l.D.y;
                if ((dy < 0 ? -dy : dy) >= 4) {
                    t = FX_Div(top - l.A.y, l.D.y);
                    z = l.A.z + func_01ffcb0c(l.D.z, t);
                    y = l.A.y + func_01ffcb0c(l.D.y, t);
                    l.P.x = l.A.x + func_01ffcb0c(l.D.x, t);
                    l.P.y = y;
                    l.P.z = z;
                    if (func_0202fdf0(&l.P)) {
                        *out = l.P;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0202f7b8X::func_0202fa70(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 ymax, y1, z1, z2;
    if (!func_0202fdf0(a)) {
        struct { Unk_0202f7b8_V3 A, B, C, D; u32 pad[6]; } l;
        l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
        l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
        l.C = Unk_0202f7b8_V3(unk_00.x, unk_00.y, unk_00.z);
        s32 r = unk_0c;
        s32 h = unk_10;
        func_020e9960(&l.D, &l.B, &l.A);
        s32 t = func_01ffcb0c(l.D.z, l.D.z);
        s32 q = func_01ffcb0c(l.D.x, l.D.x);
        q += t;
        s32 aq = q < 0 ? -q : q;
        if (aq < 4) {
            return FALSE;
        }
        s32 b = FX_Div(func_01ffcb0c(l.D.x, l.A.x - l.C.x) + func_01ffcb0c(l.D.z, l.A.z - l.C.z), q) << 1;
        s32 zz = func_01ffcb0c(l.A.z - l.C.z, l.A.z - l.C.z);
        s32 xx = func_01ffcb0c(l.A.x - l.C.x, l.A.x - l.C.x);
        s32 c = FX_Div(xx + zz - func_01ffcb0c(r, r), q);
        s32 disc = func_01ffcb0c(b, b) - (c << 2);
        if (disc < 0) {
            return FALSE;
        }
        s32 s = FX_Sqrt(disc);
        if (s < 0) {
            s = -s;
        }
        s32 t1 = -(b + s) >> 1;
        s32 t2 = (s - b) >> 1;
        ymax = l.C.y + h;
        if ((t1 < 0 ? -t1 : t1) < 4 || (t1 >= 0 && t1 <= 0x1000)) {
            z1 = l.A.z + func_01ffcb0c(t1, l.D.z);
            y1 = l.A.y + func_01ffcb0c(t1, l.D.y);
            s32 x1 = l.A.x + func_01ffcb0c(t1, l.D.x);
            if (y1 <= ymax) {
                out->x = x1;
                out->y = y1;
                out->z = z1;
                return TRUE;
            }
        }
        if ((t2 < 0 ? -t2 : t2) < 4 || (t2 >= 0 && t2 <= 0x1000)) {
            z2 = a->z + func_01ffcb0c(t2, l.D.z);
            s32 y2 = a->y + func_01ffcb0c(t2, l.D.y);
            s32 x2 = a->x + func_01ffcb0c(t2, l.D.x);
            if (y2 <= ymax) {
                out->x = x2;
                out->y = y2;
                out->z = z2;
                return TRUE;
            }
        }
    }
    return FALSE;
}

