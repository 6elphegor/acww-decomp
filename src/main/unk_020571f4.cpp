#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020dc034_V {
    s32 x, y, z;
};

struct Unk_02058ddc_V {
    s32 x, y, z;
    Unk_02058ddc_V(const Unk_02058ddc_V &o) : x(o.x), y(o.y), z(o.z) {}
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

struct Unk_02059384_Rec {
    u8 pad_00[0xc];
    u8 unk_0c[0xc];
};

struct Unk_020593e8_Obj {
    u8 pad_00[8];
    u32 unk_08;
    u16 unk_0c;
};

struct Unk_02057328_Obj {
    u8 unk_00[0x5c];
    Unk_020dc034_V unk_5c;
};

class Unk_020dc034_Owner_Base {
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
    virtual void vfunc_5c(Unk_020dc034_V *out);
    u8 pad_04[0x5c - 4];
    Unk_020dc034_V unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

class Unk_020dc034;
typedef void (Unk_020dc034::*Unk_020dc034_Fn)();

struct Unk_020dc034_Entry {
    Unk_020dc034_Fn a;
    Unk_020dc034_Fn b;
};

class Unk_020dc034_Dtor {
public:
    ~Unk_020dc034_Dtor();
    u8 unk_00[0x40];
};

extern "C" {
void func_020f440c(void *p);
}

class Unk_020dc034 : public GameProc {
public:
    Unk_020dc034() { unk_50 = 0xfff1; func_020f440c(&unk_dc); }

    /* 0x50 */ u16 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ Unk_020dc034_V unk_60;
    /* 0x6c */ Unk_020dc034_V unk_6c;
    /* 0x78 */ Unk_020dc034_V unk_78;
    /* 0x84 */ Unk_020dc034_V unk_84;
    /* 0x90 */ Unk_020dc034_V unk_90;
    /* 0x9c */ Unk_020dc034_V unk_9c;
    /* 0xa8 */ Unk_020dc034_V unk_a8;
    /* 0xb4 */ s16 unk_b4[3];
    u8 pad_ba[2];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 unk_c8;
    u8 pad_c9[3];
    /* 0xcc */ Unk_020dc034_Owner_Base *unk_cc[2];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 unk_d5;
    /* 0xd6 */ volatile u16 unk_d6;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xda */ u8 unk_da;
    u8 pad_db;
    /* 0xdc */ Unk_020dc034_Dtor unk_dc;

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void func_02057450(void);
    void func_020574cc(void);
    void func_020575f8(void);
    void func_02057724(void);
    void func_02057800(void);
    void func_0205781c(void);
    void func_02057824(void);
    void func_0205783c(void);

    void func_02057940();
    void func_020579dc();
    void func_02057a58();
    void func_02057a70();
    void func_02057ad4();
    void func_02057b84();
    void func_02057be8();
    void func_02057cf4();
    void func_02057d70();
    void func_02057e48();
    void func_02058024();
    void func_020580d0();
    void func_0205811c();
    void func_02058188();
    void func_0205821c();

    void func_020582a0();
    void func_020582ec();
    void func_02058320();
    void func_02058350();
    void func_0205839c();
    void func_020583e4();
    void func_020583e8();
    void func_020583ec();
    void func_020584cc();
    void func_020585ac();
    void func_020585cc();
    void func_02058614();
    void func_020586bc();
    void func_020587b8();
    void func_0205881c();
    void func_02058930();
    void func_0205893c();
    void func_020589c4();
    void func_02058ae0();
    void func_02058b80();

    Unk_020dc034_V func_02058c58(u32 idx);
    void func_02058cbc(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx);
    BOOL func_02058cfc(u8 v, void *p);
    void func_02058d34(u32 v);
    void func_02058d3c(Unk_020dc034_V *out);
    void func_02058d54();
    BOOL func_02058f5c();
    BOOL func_02058f9c(u8 v, void *p);
    void func_02058fc4(u8 v);
    void func_02058fe0();
    BOOL func_02058fec(void *p);
    BOOL func_0205902c(void *p, u32 idx);
    BOOL func_02059068(u16 *id, s32 a, u8 b, s32 c, Unk_020dc034_Owner_Base *o0, Unk_020dc034_Owner_Base *o1);
    void func_02059184();
};

static inline s32 Unk_020574cc_Abs(s32 v) {
    return v < 0 ? -v : v;
}

static inline BOOL Unk_020586bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02058ddc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

struct Unk_02063388 {
    u32 v[2];
    Unk_02063388(s32 a, s32 b);
    Unk_02063388(const Unk_02063388 &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~Unk_02063388();
};

// ---- externals ----
extern "C" {
extern u8 data_020e416c[];
extern u8 data_021dfd8c[];

void func_0204f3b4(s32 a);
s32 func_020e9650(void *a, void *b);
void func_020e761c(s32 *p, s32 target, s32 step);
void func_020e93a0(Unk_020dc034_V *v, s32 angle);
void VEC_Add(Unk_020dc034_V *a, Unk_020dc034_V *b, Unk_020dc034_V *out);
void func_0204edd8(Unk_020dc034_V *a, Unk_020dc034_V *b);
s32 func_020b50e8();
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
void func_020e9960(Unk_020dc034_V *out, Unk_020dc034_V *a, Unk_020dc034_V *b);
void func_020e759c(s32 *p, s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_0204f334(s32 a);
s32 func_020902b0(s32 a, Unk_020dc034_V *v, void *b, void *c);
void func_ov003_0221d078(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov004_0222c524(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov003_0221d028(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov004_0222c4d8(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
s32 func_0204f3e4(s32 c4, s32 idx, Unk_020dc034_V *p, Unk_020dc034_V *q, s32 a0, s32 a1, s32 a2, s32 z0, s32 z1, s32 k);
s32 _ZN9Character9getCharIdEv(void *p);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 func_0204f49c();
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *p, Unk_020dc034_V *v);
void func_020e7518(void *p);
void func_0207bf60(void *p, u32 v);
u32 func_0207f9a4();

// ---- own data (defined below / after the functions) ----
extern const u8 data_020ca678[4];
extern const u8 data_020ca67c[4];
extern const u8 data_020ca680[4];
extern const u8 data_020ca684[4];
extern const s32 data_020ca688;
extern const s32 data_020ca68c;
extern const u8 data_020ca690[4];
extern const Unk_020dc034_V data_020ca694;
extern const Unk_020dc034_V data_020ca6a0;
extern const Unk_020dc034_V data_020ca6ac;
extern const Unk_020dc034_V data_020ca6b8;
extern const s32 data_020ca6c4[4];
extern const u32 data_020ca6d4[8];
extern const s32 data_020ca6f4[0x30];
extern const s32 data_020ca7b4[0x30];
extern const s32 data_020ca874[0x30];
extern const s32 data_020ca934[0x30];
extern const s32 data_020ca9f4[0x30];
extern const s32 data_020caab4[0x30];

struct Unk_020dbeb4_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

extern "C" Unk_020dc034 *func_02059340();
extern Unk_02059384_Rec *data_020dc014[6];

Unk_020dc034 *data_021c5a38;
Unk_020dc034_Entry data_021c5b48[12][2] = {
    { { NULL, NULL }, { NULL, NULL } },
    { { &Unk_020dc034::func_02058b80, &Unk_020dc034::func_0205893c }, { &Unk_020dc034::func_020580d0, &Unk_020dc034::func_02057cf4 } },
    { { &Unk_020dc034::func_02058930, NULL }, { &Unk_020dc034::func_02057be8, &Unk_020dc034::func_02057b84 } },
    { { &Unk_020dc034::func_0205881c, &Unk_020dc034::func_020587b8 }, { &Unk_020dc034::func_02057ad4, &Unk_020dc034::func_02057a70 } },
    { { &Unk_020dc034::func_020586bc, &Unk_020dc034::func_02058614 }, { &Unk_020dc034::func_02057a58, &Unk_020dc034::func_020579dc } },
    { { &Unk_020dc034::func_020584cc, &Unk_020dc034::func_020583ec }, { &Unk_020dc034::func_02057940, &Unk_020dc034::func_0205783c } },
    { { &Unk_020dc034::func_020583e8, &Unk_020dc034::func_020583e4 }, { NULL, NULL } },
    { { &Unk_020dc034::func_0205839c, &Unk_020dc034::func_02058350 }, { &Unk_020dc034::func_02057824, &Unk_020dc034::func_0205781c } },
    { { &Unk_020dc034::func_02058320, &Unk_020dc034::func_020582ec }, { NULL, NULL } },
    { { NULL, NULL }, { &Unk_020dc034::func_02057800, &Unk_020dc034::func_02057450 } },
    { { &Unk_020dc034::func_020585cc, &Unk_020dc034::func_020585ac }, { NULL, NULL } },
    { { &Unk_020dc034::func_020582a0, &Unk_020dc034::func_0205811c }, { NULL, NULL } },
};

u8 data_021c5a30[4] = { data_020ca690[1] - data_020ca690[0], data_020ca690[2] - data_020ca690[1], data_020ca690[3] - data_020ca690[2] };
FxVec3 data_021c5a78(-0x400, -0x300, 0x1100);
u8 data_021c5a2c[4] = { data_020ca680[1] - data_020ca680[0], data_020ca680[2] - data_020ca680[1] };
u8 data_021c5a28[4] = { data_020ca684[1] - data_020ca684[0], data_020ca684[2] - data_020ca684[1] };
u8 data_021c5a24[4] = { data_020ca67c[1] - data_020ca67c[0] };
FxVec3 data_021c5acc(0, 0, 0xd00);
s32 data_021c5ae8[4] = { 0, Unk_020574cc_Abs(data_020ca6c4[1] / data_021c5a30[0]), Unk_020574cc_Abs(data_020ca6c4[2] / data_021c5a30[1]), Unk_020574cc_Abs(data_020ca6c4[3] / data_021c5a30[2]) };
FxVec3 data_021c5a84(0, 0, 0x1300);

// ---- own functions (declared for forward references) ----
s32 func_020573f4(s32 a);
s32 func_020572b0(u32 v);
u32 func_020593e8(Unk_020593e8_Obj *o);
Unk_020dc034_V *func_020593b8(Unk_020593e8_Obj *t, u32 i);
Unk_020dc034_V *func_02059384(Unk_020593e8_Obj *t, u32 i);
u32 func_020594d0(u32 a);
void func_02058ddc(void *unused, u32 id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
void _ZN12Unk_020dc03413func_02058c58Ej(Unk_020dc034_V *out, Unk_020dc034 *self, s32 idx);
void func_02058e68(Unk_020dc034 *self, u16 *id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
}

extern "C" u32 func_020594d0(u32 i)
{
    return data_020ca6d4[i];
}

extern "C" u32 func_020593e8(Unk_020593e8_Obj *o)
{
    u32 r = 3;
    volatile u16 h = 0xfff1;
    h = o->unk_08;
    s32 a = h;
    u32 b = h;
    s32 t = (s32)(b & 0xf000) >> 12;
    if (t != 0xd) {
      if (t == 0xe) {
        func_0207bf60(data_021dfd8c, b & 0xfff);
        switch (func_0207f9a4()) {
        case 0: case 5: case 6: case 10: case 12: case 15: case 16: case 21: case 25: case 31: case 32:
            r = 4; break;
        case 1: case 2: case 4: case 7: case 9: case 13: case 14: case 17: case 19: case 20: case 22: case 23: case 26: case 27: case 29:
            r = 5; break;
        }
      }
    } else {
        switch (a) {
        case 0xd00c: r = 0; break;
        case 0xd013: r = 1; break;
        case 0xd012:
        case 0xd025: r = 2; break;
        }
    }
    return r;
}

extern "C" Unk_020dc034_V *func_020593b8(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return (Unk_020dc034_V *)&data_020dc014[3][idx];
    }
    return (Unk_020dc034_V *)&data_020dc014[func_020593e8(o)][idx];
}

extern "C" Unk_020dc034_V *func_02059384(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return (Unk_020dc034_V *)data_020dc014[3][idx].unk_0c;
    }
    return (Unk_020dc034_V *)data_020dc014[func_020593e8(o)][idx].unk_0c;
}

extern "C" Unk_020dc034 *func_02059340()
{
    return new Unk_020dc034;
}

BOOL Unk_020dc034::vfunc_00()
{
    func_02059184();
    _ZN12Unk_02003c3013func_02003eccEv(&unk_dc);
    data_021c5a38 = this;
    return TRUE;
}

BOOL Unk_020dc034::vfunc_0c()
{
    _ZN12Unk_02003c3013func_02003e50Ev(&data_021c5a38->unk_dc);
    data_021c5a38 = NULL;
    return TRUE;
}

BOOL Unk_020dc034::onExecute()
{
    if (unk_5c >= 0 && unk_5c < 2) {
        if (unk_da < 0xc) {
            unk_c8 = unk_da;
            unk_d6 = 0;
            Unk_020dc034_Entry *e = &data_021c5b48[unk_c8][unk_5c];
            if (e->a != 0) {
                (this->*(e->a))();
            }
            func_02058fe0();
        }
        if (unk_c8 < 0xc) {
            if (data_021c5b48[unk_c8][unk_5c].b != 0) {
                (this->*(data_021c5b48[unk_c8][unk_5c].b))();
                Unk_020dc034_V v;
                v.x = unk_60.x;
                v.y = unk_60.y;
                v.z = unk_60.z;
                _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(&unk_dc, &v);
            }
        }
        if (func_02058f5c()) {
            func_020e7518(&unk_d5);
        }
    }
    return TRUE;
}

BOOL Unk_020dc034::onDraw()
{
    func_02058d54();
    return TRUE;
}

void Unk_020dc034::func_02059184()
{
    unk_c8 = 0;
    for (s32 i = 0; i < 2; i++) unk_cc[i] = NULL;
    unk_50 = 0xfff1;
    unk_58 = 0xc;
    unk_d6 = 0;
    unk_d4 = 0;
    func_02058fe0();
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 0;
    func_02058d34(0);
    unk_bc = data_020ca68c;
    unk_c4 = -1;
}

BOOL Unk_020dc034::func_02059068(u16 *id, s32 a, u8 b, s32 c, Unk_020dc034_Owner_Base *o0, Unk_020dc034_Owner_Base *o1)
{
    if (unk_c8 == 0 && o0 != NULL) {
        unk_50 = *id;
        unk_54 = a;
        unk_58 = b;
        unk_5c = c;
        unk_cc[0] = o0;
        unk_cc[1] = o1;
        BOOL x;
        if (Item_IsFurniture(&unk_50)) {
            u16 tmp = 0x1565;
            x = Item_GetFurnitureIndex(&unk_50) == Item_GetFurnitureIndex(&tmp);
        } else {
            x = unk_50 == 0x1565;
        }
        BOOL rr;
        if (x && unk_54 == 0) {
            goto near;
        }
        rr = FALSE;
        if (unk_50 >= 0x1492 && unk_50 <= 0x14fd) rr = TRUE;
        if (rr == 1 && unk_54 == 2) {
        near:
            if (func_020b50e8() == 9 || func_020b50e8() == 0x10) {
                unk_bc = data_020ca688;
            } else {
                unk_bc = data_020ca68c;
            }
        } else {
            unk_bc = data_020ca68c;
        }
        BOOL r2 = FALSE;
        if (unk_50 >= 0x12e8 && unk_50 <= 0x131f) r2 = TRUE;
        if (r2) {
            unk_c4 = func_0204f49c();
        }
    }
    return FALSE;
}

BOOL Unk_020dc034::func_0205902c(void *p, u32 idx)
{
    if (idx < 2 && unk_cc[idx] != NULL) {
        if (_ZN9Character9getCharIdEv(p) == _ZN9Character9getCharIdEv(*(Unk_020dc034_Owner_Base **)((u8 *)this + idx * 4 + 0xcc))) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020dc034::func_02058fec(void *p)
{
    BOOL r = FALSE;
    if (func_0205902c(p, 1) == 1) {
        unk_cc[1] = unk_cc[0];
        unk_cc[0] = (Unk_020dc034_Owner_Base *)p;
        r = TRUE;
    } else if (func_0205902c(p, 0) == 1) {
        r = TRUE;
    }
    return r;
}

void Unk_020dc034::func_02058fe0()
{
    func_02058fc4(0xc);
}

void Unk_020dc034::func_02058fc4(u8 v)
{
    unk_da = v;
    if (v == 1 || v == 7) {
        unk_d5 = data_020ca678[0];
    }
}

BOOL Unk_020dc034::func_02058f9c(u8 v, void *p)
{
    BOOL r = FALSE;
    if (func_0205902c(p, 0) == 1) {
        func_02058fc4(v);
        r = TRUE;
    }
    return r;
}

BOOL Unk_020dc034::func_02058f5c()
{
    BOOL r5 = TRUE;
    BOOL r4 = TRUE;
    if (unk_c8 != 2) {
        if (unk_c8 != 1 || func_020572b0(1) != 0) r4 = FALSE;
    }
    if (!r4) {
        if (unk_c8 != 7 || func_020572b0(7) != 0) r5 = FALSE;
    }
    return r5;
}

void func_02058e68(Unk_020dc034 *self, u16 *id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang)
{
    BOOL r = FALSE;
    if (*id >= 0x12e8 && *id <= 0x131f) r = TRUE;
    if (r) {
        s32 c4 = self->unk_c4;
        if (c4 != -1) {
            s32 idx;
            if (*id >= 0x12e8 && *id <= 0x131f) idx = *id - 0x12e8; else idx = -1;
            func_0204f3e4(c4, idx, p, q, ang[0], ang[1], ang[2], 0, 0, 0x1f);
            return;
        }
    }
    if (Unk_02058ddc_IsZero(*data_020e416c) == 1) {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        func_ov003_0221d028(*id, &a, &b, ang[0], ang[1], ang[2]);
    } else {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        func_ov004_0222c4d8(*id, &a, &b, ang[0], ang[1], ang[2]);
    }
}

void func_02058ddc(void *unused, u32 id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang)
{
    if (Unk_02058ddc_IsZero(*data_020e416c) == 1) {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        func_ov003_0221d078(id, &a, &b, ang[0], ang[1], ang[2]);
    } else {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        func_ov004_0222c524(id, &a, &b, ang[0], ang[1], ang[2]);
    }
}

void Unk_020dc034::func_02058d54()
{
    if (unk_c8 < 0xc && unk_50 != 0xfff1 && unk_d8 == 1) {
        if (unk_54 == 2 && !(unk_50 >= 0x1561 && unk_50 <= 0x1564) && !(unk_50 >= 0x155f && unk_50 <= 0x1560)) {
            func_02058ddc(this, 0x27, &unk_60, (Unk_020dc034_V *)&unk_a8, unk_b4);
        } else {
            func_02058e68(this, &unk_50, &unk_60, (Unk_020dc034_V *)&unk_a8, unk_b4);
        }
    }
}

void Unk_020dc034::func_02058d3c(Unk_020dc034_V *out)
{
    if (unk_cc[0] != NULL) {
        unk_cc[0]->vfunc_5c(out);
    }
}

void Unk_020dc034::func_02058d34(u32 v)
{
    unk_d9 = v;
}

BOOL Unk_020dc034::func_02058cfc(u8 v, void *p)
{
    BOOL r = FALSE;
    if (unk_c8 != 0 && unk_d9 != 1 && func_0205902c(p, 0) == 1) {
        unk_58 = v;
        r = TRUE;
    }
    return r;
}

void Unk_020dc034::func_02058cbc(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx)
{
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (idx < 2) {
        if (unk_cc[idx] != NULL) {
            func_020e93a0(out, ((Unk_020dc034_Owner_Base *)unk_cc[idx])->unk_8e);
            VEC_Add(out, &unk_cc[idx]->unk_5c, out);
        }
    }
}

Unk_020dc034_V Unk_020dc034::func_02058c58(u32 idx)
{
    u32 t = 0xd8;
    Unk_020dc034_Owner_Base *o = unk_cc[idx];
    if (o != NULL) {
        t = *(u16 *)((u8 *)o + 0xc);
    }
    if (t == 0x6b) {
        return data_020ca6a0;
    } else if (t == 0x6a) {
        return data_020ca6ac;
    } else if (t == 0x76) {
        return data_020ca6b8;
    } else {
        return data_020ca694;
    }
}

void Unk_020dc034::func_02058b80()
{
    Unk_020dc034_V pos, off;
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5acc;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, func_020593b8((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12Unk_020dc03413func_02058c58Ej(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_02058ae0()
{
    func_02058d3c(&unk_60);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        s32 n, t;
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        n = data_021c5a30[0];
        t = (unk_9c.x - unk_60.x) / n;
        if (t < 0) t = -t;
        unk_90.x = t;
        t = unk_9c.y / n;
        if (t < 0) t = -t;
        unk_90.y = t;
        t = (unk_9c.z - unk_60.z) / n;
        if (t < 0) t = -t;
        unk_90.z = t;
    }
}

void Unk_020dc034::func_020589c4()
{
    Unk_020dc034_V cur;
    s32 v = unk_a8.x;
    s32 a = data_020ca6c4[unk_d4];
    s32 b = data_021c5ae8[unk_d4];
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        s32 k = func_020594d0(func_0204f334(unk_50 - 0x12e8));
        a = func_01ffcb0c(a, k);
        b = func_01ffcb0c(b, k);
    }
    func_020e759c(&v, a, b);
    s32 u = v;
    unk_a8.x = u;
    unk_a8.y = u;
    unk_a8.z = u;
    func_02058d3c(&cur);
    func_020e761c(&unk_60.x, unk_9c.x, unk_90.x);
    func_020e761c(&unk_60.y, cur.y + unk_9c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_9c.z, unk_90.z);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        if ((*(volatile u8 *)&unk_d4) >= 4) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_0205893c()
{
    static void (Unk_020dc034::*const tbl[4])() = {
        &Unk_020dc034::func_02058ae0,
        &Unk_020dc034::func_020589c4,
        &Unk_020dc034::func_020589c4,
        &Unk_020dc034::func_020589c4,
    };
    if (unk_d4 < 4) {
        (this->*tbl[unk_d4])();
    }
}

void Unk_020dc034::func_02058930()
{
    func_02058d34(1);
}

void Unk_020dc034::func_0205881c()
{
    Unk_020dc034_V cur, pos, off;
    s32 a, b, c;
    func_02058d3c(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5a84;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, func_02059384((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12Unk_020dc03413func_02058c58Ej(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = cur.y + unk_9c.y;
    unk_6c.z = unk_9c.z;
    c = (unk_6c.z - unk_60.z) / 2;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 2;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 2;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_020587b8()
{
    if ((s32)unk_d6 < 2) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 2) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_020586bc()
{
    Unk_020dc034_V cur, pos, off;
    s32 a, b;
    func_02058d3c(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5acc;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, func_020593b8((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12Unk_020dc03413func_02058c58Ej(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = unk_9c.y;
    unk_6c.z = unk_9c.z;
    a = (unk_6c.z - unk_60.z) / 2;
    if (a < 0) a = -a;
    b = (unk_6c.x - unk_60.x) / 2;
    if (b < 0) b = -b;
    unk_90.x = b;
    unk_90.y = 0;
    unk_90.z = a;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_02058614()
{
    Unk_020dc034_V cur, t;
    s32 n = unk_d6;
    if (n < 9) {
        func_02058d3c(&cur);
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        unk_60.y = cur.y + unk_6c.y;
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            func_020e9960(&t, &unk_60, &cur);
            unk_84.x = t.x;
            unk_84.y = t.y;
            unk_84.z = t.z;
            func_02058d34(0);
        }
    } else if (n == 9) {
        func_02058d3c(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
    }
}

void Unk_020dc034::func_020585cc()
{
    Unk_020dc034_V cur, t;
    func_02058d34(0);
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
}

void Unk_020dc034::func_020585ac()
{
    func_02058d3c(&unk_60);
    VEC_Add(&unk_60, &unk_84, &unk_60);
}

void Unk_020dc034::func_020584cc()
{
    Unk_020dc034_V cur, t;
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    if (unk_cc[0] != NULL) {
        func_020e93a0(&unk_84, (s16)-unk_cc[0]->unk_8e);
    }
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    s32 a, b, c;
    c = unk_84.z / 8;
    if (c < 0) c = -c;
    b = unk_84.y / 8;
    if (b < 0) b = -b;
    a = unk_84.x / 8;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    a = unk_a8.x / 8;
    if (a < 0) a = -a;
    unk_c0 = a;
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_020dc034::func_020583ec()
{
    s32 v = unk_a8.x;
    if ((s32)unk_d6 < 8) {
        func_02058d3c(&unk_60);
        func_020e761c(&v, 0, unk_c0);
        s32 u = v;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_84.x, 0, unk_90.x);
        func_020e761c(&unk_84.y, 0, unk_90.y);
        func_020e761c(&unk_84.z, 0, unk_90.z);
        if (unk_cc[0] != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 8) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_020583e8() {}

void Unk_020dc034::func_020583e4() {}

void Unk_020dc034::func_0205839c()
{
    Unk_020dc034_V cur, t;
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_020dc034::func_02058350()
{
    if ((s32)unk_d6 < 9) {
        func_02058d3c(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_02058320()
{
    func_02058d34(1);
    unk_d6 = 0;
    if (unk_54 == 2) {
        unk_54 = 0;
    }
    func_020902b0(0x93, &unk_60, 0, 0);
}

void Unk_020dc034::func_020582ec()
{
    if ((s32)unk_d6 < 10) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_020582a0()
{
    Unk_020dc034_V cur, t;
    func_02058d34(1);
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_020dc034::func_0205821c()
{
    if ((s32)unk_d6 < data_020ca67c[unk_d4]) {
        func_02058d3c(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[unk_d4]) {
            s32 a, b, c;
    c = unk_a8.x / data_021c5a24[unk_d4];
            if (c < 0) c = -c;
            unk_c0 = c;
            unk_d4 = unk_d4 + 1;
        }
    }
}

void Unk_020dc034::func_02058188()
{
    if ((s32)unk_d6 < data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
        s32 t = unk_a8.x;
        func_020e761c(&t, 0, unk_c0);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_02058d3c(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
            (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        }
    }
}

void Unk_020dc034::func_0205811c()
{
    static Unk_020dc034_Fn tbl[2] = { &Unk_020dc034::func_0205821c, &Unk_020dc034::func_02058188 };
    u32 i = unk_d4;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

void Unk_020dc034::func_020580d0()
{
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_02058024()
{
    s32 n = data_020ca680[0];
    if ((s32)unk_d6 < n) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            unk_84.x = 0;
            unk_84.y = 0;
            unk_84.z = 0;
            unk_78.x = 0;
            unk_78.y = 0;
            unk_78.z = 0;
            unk_6c.x = data_021c5a78.x;
            unk_6c.y = data_021c5a78.y;
            unk_6c.z = data_021c5a78.z;
            s32 a, b, c;
    c = unk_6c.z / 12;
            if (c < 0) c = -c;
            b = unk_6c.y / 12;
            if (b < 0) b = -b;
            a = unk_6c.x / 12;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 1;
        }
    }
}

void Unk_020dc034::func_02057e48()
{
    s32 n = data_020ca680[1];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8.x;
        func_02058d3c(&unk_60);
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_84.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_84.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_84.z, unk_6c.z, unk_90.z);
        if (unk_cc[0] != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            static FxVec3 s(0x10000, 0, 0x17000);
            Unk_020dc034_V t2;
            t2.x = 0;
            t2.y = 0;
            t2.z = 0x2000;
            if (func_020b50e8() == 0x10) {
                unk_6c.x = s.x;
                unk_6c.y = s.y;
                unk_6c.z = s.z;
            } else {
                func_020e93a0(&t2, unk_cc[0]->unk_8e);
                VEC_Add(&t2, &unk_cc[0]->unk_5c, &t2);
                func_0204edd8(&unk_6c, &t2);
            }
            unk_6c.y = unk_6c.y + 0x1000;
            s32 m = data_021c5a2c[1];
            s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / m;
            if (c < 0) c = -c;
            b = (unk_6c.y - unk_60.y) / m;
            if (b < 0) b = -b;
            a = (unk_6c.x - unk_60.x) / m;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 2;
        }
    }
}

void Unk_020dc034::func_02057d70()
{
    s32 n = data_020ca680[2];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8.x;
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            BOOL r = FALSE;
            if (unk_50 >= 0x1492 && unk_50 <= 0x14fd) r = TRUE;
            if (r) {
                func_02003e70(&unk_dc, 0x70, 0x7f, 0);
            }
            unk_d4 = 3;
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_02057cf4()
{
    static Unk_020dc034_Fn tbl[3] = { &Unk_020dc034::func_02058024, &Unk_020dc034::func_02057e48, &Unk_020dc034::func_02057d70 };
    u32 i = unk_d4;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

void Unk_020dc034::func_02057be8()
{
    static FxVec3 s(0x10000, 0, 0x17000);
    Unk_020dc034_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0x2000;
    if (func_020b50e8() == 0x10) {
        unk_6c.x = s.x;
        unk_6c.y = s.y;
        unk_6c.z = s.z;
    } else {
        func_020e93a0(&t, unk_cc[0]->unk_8e);
        VEC_Add(&t, &unk_cc[0]->unk_5c, &t);
        func_0204edd8(&unk_6c, &t);
    }
    unk_6c.y = unk_6c.y + 0x1000;
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 4;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 4;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 4;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_02057b84()
{
    if ((s32)unk_d6 < 4) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 4) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_02057ad4()
{
    func_02058d3c(&unk_6c);
    if (unk_cc[0] != NULL) {
        unk_78.x = data_021c5a78.x;
        unk_78.y = data_021c5a78.y;
        unk_78.z = data_021c5a78.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_6c, &unk_78, &unk_6c);
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 2;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 2;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 2;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_020dc034::func_02057a70()
{
    if ((s32)unk_d6 < 2) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 2) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_02057a58()
{
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_020dc034::func_020579dc()
{
    if ((s32)unk_d6 < 10) {
        func_02058d3c(&unk_60);
        if (unk_cc[0] != NULL) {
            unk_78.x = data_021c5a78.x;
            unk_78.y = data_021c5a78.y;
            unk_78.z = data_021c5a78.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            func_02058d34(0);
        }
    }
}

void Unk_020dc034::func_02057940()
{
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    unk_84.x = data_021c5a78.x;
    unk_84.y = data_021c5a78.y;
    unk_84.z = data_021c5a78.z;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    s32 a, b, c;
    c = unk_84.z / 8;
    if (c < 0) c = -c;
    b = unk_84.y / 8;
    if (b < 0) b = -b;
    a = unk_84.x / 8;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_020dc034::func_0205783c(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / 8);
    s32 tmp = unk_a8.x;
    if ((s32)unk_d6 >= 8) {
        return;
    }
    func_02058d3c(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8.x = t2;
    unk_a8.y = t2;
    unk_a8.z = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc[0]) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if ((s32)unk_d6 >= 8) {
        func_02058d34(0);
    }
}

void Unk_020dc034::func_02057824(void) {
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_020dc034::func_0205781c(void) {
    func_02058614();
}

void Unk_020dc034::func_02057800(void) {
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_020dc034::func_02057724(void) {
    s32 c, b, a;
    s32 n = data_020ca684[0];
    if (unk_d6 >= n) {
        return;
    }
    unk_d6++;
    if (unk_d6 >= n) {
        func_02058d3c(&unk_6c);
        if (unk_cc[0]) {
            unk_78.x = data_021c5a78.x;
            unk_78.y = data_021c5a78.y;
            unk_78.z = data_021c5a78.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_6c, &unk_78, &unk_6c);
        u32 d = data_021c5a28[0];
        a = Unk_020574cc_Abs((unk_6c.z - unk_60.z) / (s32)d);
        b = Unk_020574cc_Abs((unk_6c.y - unk_60.y) / (s32)d);
        c = Unk_020574cc_Abs((unk_6c.x - unk_60.x) / (s32)d);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 1;
    }
}

void Unk_020dc034::func_020575f8(void) {
    s32 c, b, a;
    s32 n = data_020ca684[1];
    if (unk_d6 >= n) {
        return;
    }
    func_02058d3c(&unk_6c);
    if (unk_cc[0]) {
        unk_78.x = data_021c5a78.x;
        unk_78.y = data_021c5a78.y;
        unk_78.z = data_021c5a78.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_6c, &unk_78, &unk_6c);
    func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
    func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_6c.x = 0;
        unk_6c.y = 0;
        unk_6c.z = 0;
        unk_84.x = data_021c5a78.x;
        unk_84.y = data_021c5a78.y;
        unk_84.z = data_021c5a78.z;
        unk_78.x = 0;
        unk_78.y = 0;
        unk_78.z = 0;
        a = Unk_020574cc_Abs(unk_84.z / 8);
        b = Unk_020574cc_Abs(unk_84.y / 8);
        c = Unk_020574cc_Abs(unk_84.x / 8);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 2;
    }
}

void Unk_020dc034::func_020574cc(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / data_021c5a28[1]);
    s32 tmp = unk_a8.x;
    s32 n = data_020ca684[2];
    if (unk_d6 >= n) {
        return;
    }
    func_02058d3c(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8.x = t2;
    unk_a8.y = t2;
    unk_a8.z = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc[0]) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_d4 = 3;
        func_02058d34(0);
    }
}

void Unk_020dc034::func_02057450(void) {
    static void (Unk_020dc034::*tbl[3])(void) = {
        &Unk_020dc034::func_02057724,
        &Unk_020dc034::func_020575f8,
        &Unk_020dc034::func_020574cc,
    };
    u32 state = unk_d4;
    if (state < 3) {
        (this->*tbl[state])();
    }
}

extern "C" s32 func_02057418(s32 a, s32 b, u8 c, s32 d, s32 e, s32 f) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02059068((u16 *)a, b, c, d, (Unk_020dc034_Owner_Base *)e, (Unk_020dc034_Owner_Base *)f);
    }
    return r;
}

extern "C" s32 func_020573f4(s32 a) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_0205902c((void *)a, 0);
    }
    return r;
}

extern "C" s32 func_020573cc(u8 a, s32 b) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058f9c(a, (void *)b);
    }
    return r;
}

extern "C" u8 func_020573b4(void) {
    if (data_021c5a38) {
        return data_021c5a38->unk_58;
    }
    return 0xc;
}

extern "C" void func_02057378(s32 a) {
    if (data_021c5a38) {
        if (func_020573f4(a) == 1) {
            if (data_021c5a38->unk_c4 != -1) {
                func_0204f3b4(data_021c5a38->unk_c4);
            }
            data_021c5a38->func_02059184();
        }
    }
}

extern "C" BOOL func_02057328(Unk_02057328_Obj *p) {
    BOOL r = FALSE;
    if (p) {
        Unk_020dc034 *g = data_021c5a38;
        if (g) {
            if (func_020e9650(&p->unk_5c, &g->unk_60) <= g->unk_bc) {
                r = TRUE;
            } else if (g->func_02058f5c()) {
                if (data_021c5a38->unk_d5 == 0) {
                    r = TRUE;
                }
            }
        }
    }
    return r;
}

extern "C" BOOL func_02057304(Unk_020dc034_V *out) {
    BOOL r = FALSE;
    Unk_020dc034 *g = data_021c5a38;
    if (g) {
        Unk_020dc034_V *pv = &g->unk_60;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_020572e0(s32 a) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058fec((void *)a);
    }
    return r;
}

extern "C" BOOL func_020572b0(u32 a) {
    BOOL r = FALSE;
    Unk_020dc034 *g = data_021c5a38;
    if (g) {
        if ((g->unk_c8 == a && g->unk_d9 == 1) || g->unk_da == a) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL func_02057294(void) {
    BOOL r = FALSE;
    if (data_021c5a38) {
        if (data_021c5a38->unk_c8 != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_02057278(u16 *out) {
    *out = 0xfff1;
    if (data_021c5a38) {
        *out = data_021c5a38->unk_50;
    }
}

// ======== FUNCTIONS ========

extern "C" s32 func_02057250(u8 a, s32 b) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058cfc(a, (void *)b);
    }
    return r;
}

Unk_020dbeb4_Entry data_020dbeb4 = { (void *)func_02059340, 0xd1, 0xcd };
Unk_02059384_Rec *data_020dc014[6] = { (Unk_02059384_Rec *)data_020caab4, (Unk_02059384_Rec *)data_020ca6f4, (Unk_02059384_Rec *)data_020ca7b4, (Unk_02059384_Rec *)data_020ca874, (Unk_02059384_Rec *)data_020ca934, (Unk_02059384_Rec *)data_020ca9f4 };

const u8 data_020ca678[4] = { 0x28, 0x0, 0x0, 0x0 };
const u8 data_020ca67c[4] = { 0xa, 0x16, 0x0, 0x0 };
const u8 data_020ca680[4] = { 0xb, 0x11, 0x15, 0x0 };
const u8 data_020ca684[4] = { 0x6, 0x9, 0x15, 0x0 };
const u8 data_020ca690[4] = { 0xb, 0x14, 0x16, 0x18 };
const s32 data_020ca688 = 0x4000;
const s32 data_020ca68c = 0x1500;
const Unk_020dc034_V data_020ca694 = { 0x0, -0x600, 0x0 };
const Unk_020dc034_V data_020ca6a0 = { 0x0, -0x1000, 0x0 };
const Unk_020dc034_V data_020ca6ac = { 0x0, -0x1000, 0x200 };
const Unk_020dc034_V data_020ca6b8 = { 0x0, -0x900, 0x300 };
const s32 data_020ca6c4[4] = { 0x0, 0x1100, 0xf80, 0x1000 };
const u32 data_020ca6d4[8] = { 0x1666, 0x14cd, 0x1333, 0x10cd, 0x1000, 0x1000, 0x1000, 0xe66 };
const s32 data_020ca6f4[0x30] = {
    0x0, 0xb00, 0x200, 0x0, 0xb00, 0x0,
    0x0, 0xa00, 0x200, 0x0, 0xa00, 0x0,
    0x0, 0x900, 0x200, 0x0, 0x900, 0x0,
    0x0, 0x800, 0x200, 0x0, 0x800, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0,
    0x0, 0x600, 0x400, 0x0, 0x600, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0
};
const s32 data_020ca7b4[0x30] = {
    0x0, -0x200, 0x300, 0x0, -0x200, 0x0,
    0x0, -0x200, 0x400, 0x0, -0x200, 0x0,
    0x0, -0x300, 0x400, 0x0, -0x300, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x200, 0x400, 0x0, 0x200, 0x0,
    0x800, 0x200, 0x300, 0x0, 0x200, 0x0
};
const s32 data_020ca874[0x30] = {
    0x0, 0x500, 0x0, 0x0, 0x500, -0x500,
    0x0, 0x400, 0x0, 0x0, 0x400, -0x500,
    0x0, 0x300, 0x100, 0x0, 0x300, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x200, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500
};
const s32 data_020ca934[0x30] = {
    0x0, 0x800, 0x0, 0x0, 0x800, -0x500,
    0x0, 0x700, 0x100, 0x0, 0x700, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x200, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500
};
const s32 data_020ca9f4[0x30] = {
    0x0, 0x100, 0x0, 0x0, 0x100, -0x500,
    0x0, 0x100, 0x0, 0x0, 0x100, -0x500,
    0x0, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x200, 0x0, 0x100, -0x500,
    0x800, 0x100, 0x100, 0x0, 0x100, -0x500
};
const s32 data_020caab4[0x30] = {
    0x0, 0x500, 0x0, 0x0, 0x500, -0x500,
    0x0, 0x400, 0x0, 0x0, 0x400, -0x500,
    0x0, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x200, 0x0, 0x300, -0x500,
    -0x800, 0x300, 0x100, 0x0, 0x300, -0x500
};
