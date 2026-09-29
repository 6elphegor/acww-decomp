#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020dc034_V {
    s32 x, y, z;
};

struct Unk_02058ddc_V {
    s32 x, y, z;
    Unk_02058ddc_V(const Unk_02058ddc_V &o) : x(o.x), y(o.y), z(o.z) {}
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

extern "C" {
extern u8 data_020e416c[];
extern u8 data_020ca678[];
extern Unk_020dc034_V data_020ca694, data_020ca6a0, data_020ca6ac, data_020ca6b8;
extern s32 data_020ca688, data_020ca68c;
extern Unk_020dc034_Entry data_021c5b48[12][2];
extern Unk_020dc034 *data_021c5a38;
extern Unk_02059384_Rec *data_020dc014[];
extern u8 data_021dfd8c[];
extern u32 data_020ca6d4[];

void func_020e93a0(Unk_020dc034_V *v, s32 angle);
void func_01ffca8c(Unk_020dc034_V *a, Unk_020dc034_V *b, Unk_020dc034_V *out);
void func_ov003_0221d078(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov004_0222c524(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov003_0221d028(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void func_ov004_0222c4d8(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
s32 func_0204f3e4(s32 c4, s32 idx, Unk_020dc034_V *p, Unk_020dc034_V *q, s32 a0, s32 a1, s32 a2, s32 z0, s32 z1, s32 k);
s32 func_020572b0(u32 v);
s32 func_0203e630(void *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_020b50e8();
s32 func_0204f49c();
void func_02003e50(void *p);
void func_02003ecc(void *p);
void func_02003e80(void *p, Unk_020dc034_V *v);
void func_020f440c(void *p);
void func_020e7518(void *p);
void func_0207bf60(void *p, u32 v);
u32 func_0207f9a4();
u32 func_020593e8(Unk_020593e8_Obj *o);
}

class Unk_020dc034 : public Unk_020d8c7c {
public:
    Unk_020dc034() { unk_50 = 0xfff1; func_020f440c(unk_dc); }

    /* 0x50 */ u16 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ Unk_020dc034_V unk_60;
    /* 0x6c */ Unk_020dc034_V unk_6c;
    /* 0x78 */ Unk_020dc034_V unk_78;
    /* 0x84 */ Unk_020dc034_V unk_84;
    /* 0x90 */ Unk_020dc034_V unk_90;
    u8 pad_9c[0xa8 - 0x9c];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s16 unk_b4[3];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 unk_c8;
    u8 pad_c9[3];
    /* 0xcc */ Unk_020dc034_Owner_Base *unk_cc[2];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 unk_d5;
    /* 0xd6 */ u16 unk_d6;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xda */ u8 unk_da;
    u8 pad_db;
    /* 0xdc */ u8 unk_dc[0x40];

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    Unk_020dc034_V func_02058c58(u32 idx);
    void func_02058cbc(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx);
    BOOL func_02058cfc(u8 v, void *p);
    void func_02058d34(u32 v);
    void func_02058d3c(Unk_020dc034_V *out);
    void func_02058d54();
    void func_02058f5c_dummy();
    BOOL func_02058f5c();
    BOOL func_02058f9c(u8 v, void *p);
    void func_02058fc4(u8 v);
    void func_02058fe0();
    BOOL func_02058fec(void *p);
    BOOL func_0205902c(void *p, u32 idx);
    BOOL func_02059068(u16 *id, s32 a, u8 b, s32 c, Unk_020dc034_Owner_Base *o0, Unk_020dc034_Owner_Base *o1);
    void func_02059184();
};

extern "C" {
void func_02058ddc(void *unused, u32 id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
void func_02058e68(Unk_020dc034 *self, u16 *id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
}

static inline BOOL Unk_02058ddc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

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

void Unk_020dc034::func_02058cbc(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx)
{
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (idx < 2) {
        if (unk_cc[idx] != NULL) {
            func_020e93a0(out, ((Unk_020dc034_Owner_Base *)unk_cc[idx])->unk_8e);
            func_01ffca8c(out, &unk_cc[idx]->unk_5c, out);
        }
    }
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

void Unk_020dc034::func_02058d34(u32 v)
{
    unk_d9 = v;
}

void Unk_020dc034::func_02058d3c(Unk_020dc034_V *out)
{
    if (unk_cc[0] != NULL) {
        unk_cc[0]->vfunc_5c(out);
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

BOOL Unk_020dc034::func_02058f9c(u8 v, void *p)
{
    BOOL r = FALSE;
    if (func_0205902c(p, 0) == 1) {
        func_02058fc4(v);
        r = TRUE;
    }
    return r;
}

void Unk_020dc034::func_02058fe0()
{
    func_02058fc4(0xc);
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

void Unk_020dc034::func_02058fc4(u8 v)
{
    unk_da = v;
    if (v == 1 || v == 7) {
        unk_d5 = data_020ca678[0];
    }
}

BOOL Unk_020dc034::func_0205902c(void *p, u32 idx)
{
    if (idx < 2 && unk_cc[idx] != NULL) {
        if (func_0203e630(p) == func_0203e630(*(Unk_020dc034_Owner_Base **)((u8 *)this + idx * 4 + 0xcc))) {
            return TRUE;
        }
    }
    return FALSE;
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
        if (func_0204b2d4(&unk_50)) {
            u16 tmp = 0x1565;
            x = func_0204b25c(&unk_50) == func_0204b25c(&tmp);
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
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_d8 = 0;
    func_02058d34(0);
    unk_bc = data_020ca68c;
    unk_c4 = -1;
}

BOOL Unk_020dc034::vfunc_24()
{
    func_02058d54();
    return TRUE;
}

BOOL Unk_020dc034::vfunc_18()
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
                func_02003e80(unk_dc, &v);
            }
        }
        if (func_02058f5c()) {
            func_020e7518(&unk_d5);
        }
    }
    return TRUE;
}

BOOL Unk_020dc034::vfunc_0c()
{
    func_02003e50(data_021c5a38->unk_dc);
    data_021c5a38 = NULL;
    return TRUE;
}

BOOL Unk_020dc034::vfunc_00()
{
    func_02059184();
    func_02003ecc(unk_dc);
    data_021c5a38 = this;
    return TRUE;
}

extern "C" Unk_020dc034 *func_02059340()
{
    return new Unk_020dc034;
}

extern "C" u8 *func_02059384(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return data_020dc014[3][idx].unk_0c;
    }
    return data_020dc014[func_020593e8(o)][idx].unk_0c;
}

extern "C" u8 *func_020593b8(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return (u8 *)&data_020dc014[3][idx];
    }
    return (u8 *)&data_020dc014[func_020593e8(o)][idx];
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

extern "C" u32 func_020594d0(u32 i)
{
    return data_020ca6d4[i];
}

struct Unk_02063388 {
    u32 v[2];
    Unk_02063388(s32 a, s32 b);
    Unk_02063388(const Unk_02063388 &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~Unk_02063388();
};

struct Unk_020594dc_H {
    u16 v;
    Unk_020594dc_H(u16 x) : v(x) {}
};

extern "C" {
extern Unk_02063388 data_021c5dd4[3];
extern u32 data_020cab74[];
extern u8 data_021d735c[];
extern u8 data_020dc0bc[];
Unk_020594dc_H func_02062f94(Unk_02063388 o, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020594dc_H func_02062f44(Unk_02063388 o);
s32 func_02063b8c(s32 n);
s32 func_0209788c(void *p, s32 q);
s32 func_02059900(void *self, u8 idx, s32 b, s32 c, Unk_020594dc_H *res, s32 k);
}

extern "C" s32 func_020594dc(u32 a, s32 b, s32 c)
{
    if (a < 1) {
        return 0;
    }
    if (a > 5) {
        return 0;
    }
    Unk_020594dc_H res(0xfff1);
    func_02063b8c(3);
    func_02063b8c(3);
    switch (a) {
    case 1:
        res = func_02062f94(Unk_02063388(0, 0), 0, 0, 1, 1, 0);
        break;
    case 2: {
        static Unk_02063388 t[3] = { Unk_02063388(0, 1), Unk_02063388(0, 2), Unk_02063388(0, 3) };
        res = func_02062f94(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 3: {
        static Unk_02063388 t[3] = { Unk_02063388(0, 0), Unk_02063388(4, 0), Unk_02063388(3, 0) };
        res = func_02062f94(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 4: {
        static Unk_02063388 t[9] = { Unk_02063388(0, 1), Unk_02063388(0, 2), Unk_02063388(0, 3),
                                     Unk_02063388(4, 1), Unk_02063388(4, 2), Unk_02063388(4, 3),
                                     Unk_02063388(3, 1), Unk_02063388(3, 2), Unk_02063388(3, 3) };
        res = func_02062f94(t[func_02063b8c(9)], 0, 0, 1, 1, 0);
        break;
    }
    case 0:
    default: {
        s32 r6 = func_0209788c(data_021d735c, b);
        u32 r4 = data_020cab74[func_02063b8c(3)];
        Unk_02063388 o(r4, 0);
        s32 x;
        res = func_02062f94(o, r6, 0, 1, 1, (s32)&x);
        if (res.v == 0xfff1) {
            res = func_02062f44(Unk_02063388(r4, x));
        }
        break;
    }
    }
    return func_02059900(data_020dc0bc, func_02063b8c(3), b, c, &res, -1);
}
