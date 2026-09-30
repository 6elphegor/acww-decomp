// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02215c7c_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_ov003_02215c7c_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02215c7c_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// ---- main-module helper classes ----
class Unk_020b1ddc;

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void func_020566bc();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    void func_02055a9c(u32 a);
    void func_02055b38(s32 a, s32 b, s32 c, u16 d);
    BOOL func_02055bcc(void *a, void *c);

    s32 *unk_18;
    u32 unk_1c;
};

// model resource object (base at +0 of the actor part objects)
class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    void func_02055488(void *a, void *b);
    void *func_020554c0();
    void func_0205553c(s32 *p);
    void func_020555dc();
    void func_02055600(void *r, u32 a);

    u8 pad_04[0x64 - 4];
    Unk_ov003_02215c7c_Blk unk_64;
    u8 pad_94[4];
    u32 unk_98;
};

struct Unk_ov003_02217910_V3 {
    s32 x, y, z;
};

struct Unk_ov003_02217910_V3D {
    s32 x, y, z;
    Unk_ov003_02217910_V3D() {}
    ~Unk_ov003_02217910_V3D() {}
};

struct Unk_02003c30 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    void func_02003c30();
    void func_02003cbc();
};

struct Unk_02003c40 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08(void *a);
    virtual void vfunc_0c(void *a);
    virtual void vfunc_10(void *a);
    void func_02003c40(void *a);
    void func_02003c70(Unk_ov003_02217910_V3 *v);
};

struct Unk_ov003_02217970_Rec {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov003_022179b8_Ent {
    s32 kind;
    s32 x;
    s32 z;
};

struct Unk_ov003_02217a9c_Cell {
    u8 pad_00[0x20];
    void *unk_20;
    u8 pad_24[4];
};

struct Unk_ov003_02217a9c_Grid {
    Unk_ov003_02217a9c_Cell *cells;
    u32 w;
    u32 h;
};

struct Unk_ov003_02217a84_Sub {
    u8 pad_00[0x10];
    void *unk_10;
};

struct Unk_ov003_02217b78_Ent {
    u8 pad_00[8];
    void *unk_08;
};

struct Unk_ov003_02217c3c_P {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0c[0x14];
    u32 unk_20;
};

struct Unk_ov003_02217c3c_Obj {
    u8 pad_00[0x20];
    Unk_ov003_02217c3c_P *unk_20;
};

// ---- ov009 actor base ----
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_02215c7c_Vec *vfunc_50();
    virtual void vfunc_60(s32 a, Unk_020b1ddc *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual s32 vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    /* 0x10c */ u8 pad_10c[0x128 - 0x10c];
    /* 0x128 */ void *unk_128;
    /* 0x12c */ u8 pad_12c[4];
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[0x138 - 0x134];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_02215c7c_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_02215c7c_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_02215c7c_Vec unk_2a4;
};



extern "C" {
extern void *data_021c47c4;
extern void *data_021c3070;
extern void *data_021c620c;
extern s32 data_020c8cbc;
extern s32 data_020c8cb4;
extern u8 data_021f47e0[];
extern Unk_ov003_02217910_V3 data_021c309c;
extern u8 data_ov003_02232284[];
extern u8 data_ov003_02232460[];
extern s32 data_ov003_0222f010[];
extern u8 data_0213b91c[];
extern u8 data_0213b938[];

s32 func_0204b178(void *p);
void *func_020b50e8();
void func_02083d84(void *a, void *b, void *c);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 func_020e9650(Unk_ov003_02217910_V3 *a, Unk_ov003_02217910_V3 *b);
s32 func_02036c90();
Unk_ov003_022179b8_Ent func_02036c60(void *obj, u32 i);
void *func_02036c58();
void *func_02036d54(void *s, s32 i);
s32 func_02036ce0(void *s);
s32 func_02036cd4(void *s);
s32 func_02036cc8(void *s);
s32 func_020375d0(void *o);
s32 func_02037324(s32 a);
s32 func_02057110(void *o, void *name);
s16 func_0203ef38(Unk_ov003_02217910_V3 *out, Unk_ov003_02217910_V3 *v);
s32 func_0203edc8();
s32 func_0203bc90(void *cam);
void func_ov003_02218034(void *p, s32 a);
void func_ov003_02218784();
}

// ============================================================ class Unk_ov003_02232114
class Unk_ov003_02232114 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02232114();
    virtual ~Unk_ov003_02232114();

    virtual BOOL vfunc_70();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();

    /* 0x2b0 */ s32 unk_2b0;
};

BOOL Unk_ov003_02232114::vfunc_ac() {
    return Unk_ov009_0225e29c::vfunc_ac();
}

char *Unk_ov003_02232114::vfunc_a8() {
    return Unk_ov009_0225e29c::vfunc_a8();
}

char *Unk_ov003_02232114::vfunc_a4() {
    return Unk_ov009_0225e29c::vfunc_a4();
}

BOOL Unk_ov003_02232114::vfunc_70() {
    unk_2b0 = func_0204b178(&unk_132);
    return TRUE;
}

Unk_ov003_02232114::~Unk_ov003_02232114() {
}

Unk_ov003_02232114::Unk_ov003_02232114() {
}

extern "C" Unk_ov003_02232114 *func_ov003_022177c0() {
    return new Unk_ov003_02232114;
}

// ============================================================ class Unk_ov003_022322a8
class Unk_ov003_022322a8 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022322a8();
    virtual ~Unk_ov003_022322a8();

    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_70();
};

BOOL Unk_ov003_022322a8::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov003_022322a8::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov003_022322a8::vfunc_18() {
    return TRUE;
}

BOOL Unk_ov003_022322a8::vfunc_70() {
    func_02083d84(data_ov003_02232284, func_020b50e8(), &unk_5c);
    return TRUE;
}

Unk_ov003_022322a8::~Unk_ov003_022322a8() {
}

Unk_ov003_022322a8::Unk_ov003_022322a8() {
}

extern "C" Unk_ov003_022322a8 *func_ov003_022178b4() {
    return new Unk_ov003_022322a8;
}

// ============================================================ sound handle helpers
extern "C" void func_ov003_02217908(Unk_02003c30 *p) {
    p->func_02003c30();
}

extern "C" void func_ov003_02217910(Unk_02003c40 *p, Unk_ov003_02217910_V3 *v, void *a) {
    Unk_ov003_02217910_V3 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    p->func_02003c70(&t);
    p->func_02003c40(a);
}

extern "C" void func_ov003_0221793c(Unk_02003c30 *p) {
    p->func_02003cbc();
}

// ============================================================ nearest-record
extern "C" {
void func_ov003_02217970(Unk_ov003_02217970_Rec *r);
s32 func_ov003_02217990(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k);
void *func_ov003_02217a84(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
}

extern "C" void func_ov003_02217944() {
}

extern "C" void func_ov003_02217948(void *volatile *p) {
    *p = data_0213b91c;
    *p = data_0213b938;
}

extern "C" s32 func_ov003_0221795c(Unk_ov003_02217970_Rec *r) {
    return r->unk_14;
}

extern "C" s32 *func_ov003_02217960(Unk_ov003_02217970_Rec *r) {
    if (r->unk_00 != 0) {
        return &r->unk_04;
    }
    return 0;
}

extern "C" void func_ov003_02217970(Unk_ov003_02217970_Rec *r) {
    r->unk_00 = 0;
    r->unk_04 = 0;
    r->unk_08 = 0;
    r->unk_0c = 0;
    r->unk_14 = 0x11;
    r->unk_10 = data_020c8cbc << 3;
}

extern "C" void func_ov003_0221798c() {
}

extern "C" BOOL func_ov003_02217990(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k) {
    if (d < r->unk_10) {
        r->unk_04 = p->x;
        r->unk_08 = p->y;
        r->unk_0c = p->z;
        r->unk_10 = d;
        r->unk_14 = k;
        r->unk_00 = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov003_02217970_Rec *func_ov003_022179b8(Unk_ov003_02217970_Rec *out, Unk_ov003_02217910_V3 *pos) {
    void *obj;
    u32 n;
    func_ov003_02217970(out);
    s32 cx = pos->x >> 17;
    s32 cz = pos->z >> 17;
    s32 dy, dx;
    for (dy = -1; dy <= 1; dy++) {
        for (dx = -1; dx <= 1; dx++) {
            Unk_ov003_02217910_V3D base;
            s32 xx = cx + dx;
            base.x = xx << 17;
            base.z = (cz + dy) << 17;
            obj = func_ov003_02217a84(out, xx, cz + dy);
            if (obj != 0) {
                u32 i;
                n = func_02036c90();
                for (i = 0; i < n; i++) {
                    Unk_ov003_022179b8_Ent e = func_02036c60(obj, i);
                    switch (e.kind) {
                    case 5:
                    case 15:
                    case 17:
                    case 18: {
                        Unk_ov003_02217910_V3 p;
                        p.x = base.x + e.x;
                        p.y = 0;
                        p.z = base.z + e.z;
                        func_ov003_02217990(out, func_020e9650(&p, pos), &p, e.kind);
                    }
                    }
                }
            }
        }
    }
    return out;
}

extern "C" void *func_ov003_02217a84(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
extern "C" void *func_ov003_02217a9c(Unk_ov003_02217970_Rec *r, u32 x, u32 y);

extern "C" void *func_ov003_02217a84(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a84_Sub *s = (Unk_ov003_02217a84_Sub *)func_ov003_02217a9c(r, x, y);
    if (s != 0) {
        return s->unk_10;
    }
    return 0;
}

extern "C" void *func_ov003_02217a9c(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a9c_Grid *g = (Unk_ov003_02217a9c_Grid *)data_021c47c4;
    if (g != 0) {
        Unk_ov003_02217a9c_Cell *c;
        if (x < g->w && y < g->h && g->cells != 0) {
            c = &g->cells[y * g->w + x];
        } else {
            c = 0;
        }
        if (c != 0) {
            return c->unk_20;
        }
    }
    return 0;
}

extern "C" BOOL func_ov003_02217adc(Unk_020dbd34 *p) {
    p->func_020555dc();
    return TRUE;
}

extern "C" BOOL func_ov003_02217aec(Unk_020dbd34 *p) {
    if (data_021c3070 != 0) {
        p->func_0205553c(0);
        return TRUE;
    }
    return FALSE;
}

// ============================================================ Unk_ov003_02217b10 (camera-matrix part object)
class Unk_ov003_02217b10 {
public:
    Unk_ov003_02217b10();
    ~Unk_ov003_02217b10();
    BOOL func_02217b10();
    BOOL func_02217b78();
    void func_02217bb8();

    /* 0x00 */ Unk_020dbd34 unk_00;
    /* 0x9c */ void *unk_9c;
};

class Unk_ov003_02217be8 {
public:
    Unk_ov003_02217be8();
    BOOL func_02217be8();
    BOOL func_02217bfc();
    BOOL func_02217c10();
    BOOL func_02217c3c(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020dbd34 unk_04;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ Unk_020dbe4c unk_a8[2];
    /* 0xe8 */ s8 unk_e8;
};

BOOL Unk_ov003_02217b10::func_02217b10() {
    Unk_ov003_02217910_V3D v;
    void *cam = data_021c3070;
    if (cam != 0) {
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        func_020e8388(data_021f47e0, v.x - data_020c8cb4, 0, 0);
        func_020e8434(data_021f47e0, func_0203bc90(cam));
        unk_00.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217b10::func_02217b78() {
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)func_02036d54(func_02036c58(), 0x83);
    s32 t = func_02036ce0(func_02036c58());
    unk_9c = e->unk_08;
    unk_00.func_02055600(unk_9c, t);
    func_02217b10();
    return TRUE;
}

void Unk_ov003_02217b10::func_02217bb8() {
    unk_9c = 0;
}

Unk_ov003_02217b10::~Unk_ov003_02217b10() {
}

Unk_ov003_02217b10::Unk_ov003_02217b10() {
    func_02217bb8();
}

BOOL Unk_ov003_02217be8::func_02217be8() {
    unk_04.func_020555dc();
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217bfc() {
    unk_04.func_0205553c(0);
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217c10() {
    Unk_020dbe4c *e;
    Unk_020dbe4c *p;
    p = &unk_a8[0];
    e = &unk_a8[2];
    for (; p < e; p++) {
        p->func_020566bc();
        *p->unk_18 = p->unk_08;
    }
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217c3c(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b) {
    unk_a0 = a;
    unk_a4 = b;
    unk_00 = func_020375d0(o);
    u32 t = func_02036ce0(func_02036c58());
    Unk_ov003_02217c3c_P *p = o->unk_20;
    u32 q = p->unk_20;
    if (q != 0) t = q;
    void *res = p->unk_08;
    unk_04.func_02055600(res, t);
    if (unk_a8[0].func_02055bcc(res, data_021c620c)) {
        unk_a8[0].func_02055b38(func_02036cd4(func_02036c58()), 0, 0x1000, 0);
        unk_a8[0].func_02055a9c((u32)unk_04.func_020554c0());
    }
    if (unk_a8[1].func_02055bcc(res, data_021c620c)) {
        unk_a8[1].func_02055b38(func_02036cc8(func_02036c58()), 0, 0x1000, 0);
        unk_a8[1].func_02055a9c((u32)unk_04.func_020554c0());
    }
    func_020e8388(data_021f47e0, a * data_020c8cbc, 0, 0);
    s16 ang = b * func_0203edc8();
    func_020e8434(data_021f47e0, ang);
    unk_04.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    if (func_02037324(unk_00) & 8) {
        unk_e8 = func_02057110(res, data_ov003_02232460);
        if (unk_e8 != -1) {
            unk_04.func_02055488((void *)func_ov003_02218784, this);
        }
    }
    func_ov003_02218034(&unk_04, 1);
    return TRUE;
}

Unk_ov003_02217be8::Unk_ov003_02217be8() {
    unk_00 = 0;
    unk_a0 = 0;
    unk_a4 = 0;
}

// ============================================================ Unk_ov003_02217dbc (part object with V3 + s16)
class Unk_ov003_02217dbc {
public:
    Unk_ov003_02217dbc();
    ~Unk_ov003_02217dbc();
    BOOL func_02217dbc();
    BOOL func_02217df0();
    BOOL func_02217e10();
    BOOL func_02217e48(Unk_ov003_02217910_V3 *pos, s32 idx);
    BOOL func_02217f78();
    s32 func_02217fa4();
    s32 func_02217fac();
    Unk_ov003_02217910_V3 *func_02217fb4();
    s32 func_02217fb8();

    /* 0x00 */ Unk_020dbd34 unk_00;
    /* 0x9c */ Unk_ov003_02217910_V3 unk_9c;
    /* 0xa8 */ s16 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ Unk_020dbe4c unk_b4[2];
};

BOOL Unk_ov003_02217dbc::func_02217dbc() {
    if (func_02217f78()) {
        unk_00.func_020555dc();
        unk_b0 = -1;
        unk_ac = unk_b0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217df0() {
    if (func_02217f78()) {
        unk_00.func_0205553c(0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217e10() {
    if (func_02217f78()) {
        Unk_020dbe4c *p = &unk_b4[0];
        Unk_020dbe4c *e = &unk_b4[2];
        for (; p < e; p++) {
            p->func_020566bc();
            *p->unk_18 = p->unk_08;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217e48(Unk_ov003_02217910_V3 *pos, s32 idx) {
    if (func_02217f78()) {
        return FALSE;
    }
    unk_9c.x = pos->x;
    unk_9c.y = pos->y;
    unk_9c.z = pos->z;
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)func_02036d54(func_02036c58(), data_ov003_0222f010[idx]);
    s32 t = func_02036ce0(func_02036c58());
    void *res = e->unk_08;
    unk_00.func_02055600(res, t);
    if (unk_b4[0].func_02055bcc(res, data_021c620c)) {
        unk_b4[0].func_02055b38(func_02036cd4(func_02036c58()), 0, 0x1000, 0);
        unk_b4[0].func_02055a9c((u32)unk_00.func_020554c0());
    }
    if (unk_b4[1].func_02055bcc(res, data_021c620c)) {
        unk_b4[1].func_02055b38(func_02036cc8(func_02036c58()), 0, 0x1000, 0);
        unk_b4[1].func_02055a9c((u32)unk_00.func_020554c0());
    }
    Unk_ov003_02217910_V3 tmp;
    unk_a8 = func_0203ef38(&tmp, &unk_9c);
    func_020e8388(data_021f47e0, unk_9c.x, 0, 0);
    func_020e8434(data_021f47e0, unk_a8);
    unk_00.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    unk_ac = pos->x >> 17;
    unk_b0 = pos->z >> 17;
    return TRUE;
}

BOOL Unk_ov003_02217dbc::func_02217f78() {
    if (func_02217fac() != -1 && func_02217fa4() != -1) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov003_02217dbc::func_02217fa4() {
    return unk_b0;
}

s32 Unk_ov003_02217dbc::func_02217fac() {
    return unk_ac;
}

Unk_ov003_02217910_V3 *Unk_ov003_02217dbc::func_02217fb4() {
    return &unk_9c;
}

s32 Unk_ov003_02217dbc::func_02217fb8() {
    return unk_a8;
}

Unk_ov003_02217dbc::~Unk_ov003_02217dbc() {
}

Unk_ov003_02217dbc::Unk_ov003_02217dbc() {
    unk_ac = -1;
    unk_b0 = -1;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
}
