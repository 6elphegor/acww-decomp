#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

struct Unk_ov009_0225cb4c_V3 : Unk_ov009_0225b880_Vec3 {
    Unk_ov009_0225cb4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov009_0225cb4c_V3() {}
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
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u16 pad_d2;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e47c(Unk_020e2a30 *a);
    void func_0203e488(Unk_020e2a30 *a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

// ---- main-module helper classes (declarations only)
struct Unk_020e44d4 {
    Unk_020e44d4();
    static void *operator new(unsigned long, void *p) { return p; }
    u8 pad[0x44];
};

struct Unk_020b6960 {
    BOOL func_020b6818(Unk_020e44d4 *o, Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225b880_Vec3 *b,
                       Unk_ov009_0225b880_Vec3 *c, s32 d, u8 e);
    BOOL func_020b6848(Unk_020e44d4 *o);
};

struct Unk_020b28ac {
    void func_020b28ac(s32 *a, s32 *b, s32 *c, s32 *d);
    BOOL func_020b2958(s32 *a, s32 *b, s32 *c, u32 i);
    u32 func_020b29e4();
};

class Unk_020abea8 {
public:
    void func_020abed4(Unk_ov009_0225b880_Vec3 *pos);
    BOOL func_020ac0c4(Unk_ov009_0225b880_Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    Unk_020abea8 *func_020ac1e0();

    u8 pad[0x34];
};

struct Unk_020d8e14 {
    void func_0203535c(s32 a);
};

struct Unk_02034518 {
    u8 pad_00[0x2d0];
    Unk_020d8e14 unk_2d0;
};

class Unk_ov009_0225e29c;
struct Unk_ov009_0225cc24_Obj;

class Unk_020d8ccc {
public:
    Unk_020d8ccc();
    virtual s32 vfunc_00(s32 a, s32 b, s32 c, s32 d);
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    s32 func_0202f274(Unk_ov009_0225b880_Vec3 *p);
    BOOL func_0202f050(Unk_ov009_0225b880_Vec3 *out, Unk_ov009_0225b880_Vec3 *p, Unk_ov009_0225b880_Vec3 *q);

    s32 unk_04[9];
    s32 unk_28, unk_2c, unk_30, unk_34;
};

class Unk_020d8d74 : public Unk_020d8ccc {
public:
    Unk_020d8d74();
    void func_02031e10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225b880_Vec3 *b, Unk_ov009_0225b880_Vec3 *c, s32 d);

    Unk_020d8d74 *unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;
};

// ---- ov009 element (vtable 0x0225e280, size 0x54), one per ground-collision triangle
class Unk_ov009_0225e280 : public Unk_020d8d74 {
public:
    Unk_ov009_0225e280();
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    BOOL func_ov009_0225cc24(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ Unk_ov009_0225e29c *unk_4c;
    /* 0x50 */ s32 unk_50;
};

struct Unk_ov009_0225cc24_Obj {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 pad_0e[0x8e - 0xe];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x98 - 0x90];
    /* 0x98 */ s32 unk_98;
};

struct Unk_ov009_0225cd48_Item {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_ov009_0225cd48_Tbl {
    Unk_ov009_0225cd48_Item *func_ov009_0225cd48(u32 i);
    u32 func_ov009_0225cd54();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_ov009_0225cd48_Item unk_04[1];
};

struct Unk_ov009_0225d244_Entry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_ov009_0225cd48_Tbl *unk_1c;
    /* 0x20 */ s32 unk_20[4];
    /* 0x30 */ s32 unk_30[4];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
};

struct Unk_ov009_0225d2a4_Obj {
    u32 pad[0x6c / 4];
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual void vfunc_9c();
    virtual s32 vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8(Unk_ov009_0225bc88_Blk *out);

    s32 func_ov009_0225d650();

    // out-of-range members (declarations only)
    BOOL func_ov009_0225c454();
    BOOL func_ov009_0225c46c();
    BOOL func_ov009_0225c4f4();
    BOOL func_ov009_0225c568();
    BOOL func_ov009_0225c644();
    BOOL func_ov009_0225c818();
    BOOL func_ov009_0225ca50();
    BOOL func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang);

    // in range
    void func_ov009_0225cd58();
    void func_ov009_0225cdb4();
    void func_ov009_0225ce04(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225cf40();
    void func_ov009_0225cf78(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225cfd8(Unk_ov009_0225bc88_Blk *m);
    void func_ov009_0225d078(Unk_ov009_0225bc88_Blk *out);
    void func_ov009_0225d0d8();
    Unk_ov009_0225d244_Entry *func_ov009_0225d244();
    void func_ov009_0225d264(Unk_ov009_0225bc88_Blk *out);
    BOOL func_ov009_0225d2a4(char *a, char *b, char *c);

    /* 0x10c */ u8 pad_10c[0x128 - 0x10c];
    /* 0x128 */ void *unk_128;
    /* 0x12c */ u8 pad_12c[4];
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u32 unk_134;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x230 - 0x1cc];
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ u8 pad_232[0x280 - 0x232];
    /* 0x280 */ Unk_020abea8 *unk_280;
    /* 0x284 */ Unk_020e44d4 *unk_284;
    /* 0x288 */ Unk_ov009_0225e280 *unk_288;
    /* 0x28c */ u8 unk_28c;
};

extern "C" {
extern void *data_021c6204;
extern void *data_021f482c;
extern Unk_02034518 *data_021c1b3c;
extern Unk_ov009_0225d244_Entry data_ov009_0225e674[];
extern char data_ov009_0225e3e8[];
extern char data_ov009_0225e3ec[];
extern char data_ov009_0225e3fc[];
extern char data_ov009_0225e40c[];
extern char data_ov009_0225e41c[];
extern char data_ov009_0225e42c[];
extern char data_ov009_0225e43c[];
extern char data_ov009_0225e44c[];
extern char data_ov009_0225e45c[];

BOOL func_020b1d3c(u32 a, u32 b);
void *func_02095204(u32 x);
Unk_020b28ac *func_020b27a4(u16 *p);
Unk_020b6960 *func_020b50b4();
void *func_020e8608(void *heap, u32 size);
u32 func_ov003_02218b1c(void *p);
void func_ov003_02218d6c(u32 a);
BOOL func_ov003_0221240c();
void func_ov009_0225e020(Unk_ov009_0225b880_Vec3 *out, Unk_ov009_0225b880_Vec3 *in, Unk_ov009_0225bc88_Blk *m);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
s32 func_020e780c(s32 a, s32 b);
s32 func_02031da4(void *node);
void func_02031de0(void *node);
s32 func_0203ef38(void *out, void *in);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
BOOL func_02094e3c();
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_020639e8(char *buf, char *fmt, ...);
void *func_020641ec(void *a, void *heap, s32 c, s32 d);
BOOL func_02063f18(void *p);
s32 func_02101340(void *buf, char *name, void *data);
void *func_021012bc(void *name);
void func_02101310(void *buf);
void *func_02106654();
void *func_02106670(void *p, s32 a);
void *func_02106690();
void *func_021066ac(void *p, s32 a);
void *func_0210629c(void *p);
void func_020e8558(void *p);
BOOL func_020557a0(void *p, u32 a);
BOOL func_02055724(void *p, u32 a);
void *func_0205588c(void *p, void *g);
BOOL func_ov009_0225dfb8(Unk_ov009_0225d244_Entry *e);
void *func_ov009_0225df58(void *p);
void *func_ov009_0225df6c(void *p);
}

static inline BOOL Unk_ov009_0225d0d8_Match(u16 *p, u32 v) {
    BOOL r;
    if (func_0204b2d4(p)) {
        u16 t;
        t = v;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(&t);
        if (a == b) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == v) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov009_0225cc24_IsNine(u16 v) {
    if (v == 9) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- vfunc_6c
s32 Unk_ov009_0225e29c::vfunc_6c(s32 a) {
    static BOOL (Unk_ov009_0225e29c::*tbl[7])() = {
        &Unk_ov009_0225e29c::func_ov009_0225ca50, &Unk_ov009_0225e29c::func_ov009_0225c818,
        &Unk_ov009_0225e29c::func_ov009_0225c644, &Unk_ov009_0225e29c::func_ov009_0225c568,
        &Unk_ov009_0225e29c::func_ov009_0225c4f4, &Unk_ov009_0225e29c::func_ov009_0225c46c,
        &Unk_ov009_0225e29c::func_ov009_0225c454,
    };
    if ((u32)a < 7) {
        if ((this->*tbl[a])()) {
            if (func_020b1d3c(unk_132, a)) {
                unk_130 = a;
                return TRUE;
            }
        }
    }
    return FALSE;
}

// ---------------------------------------------------------------- element
BOOL Unk_ov009_0225e280::func_ov009_0225cc24(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o) {
    s16 ang;
    Unk_ov009_0225b880_Vec3 p;
    Unk_ov009_0225b880_Vec3 a;
    Unk_ov009_0225b880_Vec3 b;
    Unk_ov009_0225b880_Vec3 c;
    if (o != NULL) {
        if (unk_4c != NULL) {
            if (Unk_ov009_0225cc24_IsNine(o->unk_0c)) {
                if (func_02095204(4) == o) {
                    s32 d = func_0202f274(v);
                    if (d >= 0) {
                        if (d <= off + 0x666) {
                            if (unk_4c->func_ov009_0225bbdc(&p, &ang)) {
                                if (func_020e780c(ang, o->unk_8e) <= 0x1100) {
                                    a.x = v->x;
                                    a.y = v->y;
                                    a.z = v->z;
                                    a.y = a.y + off;
                                    b.x = a.x;
                                    b.y = a.y;
                                    b.z = a.z;
                                    b.x = b.x - func_01ffcb0c(unk_28, 0x2000);
                                    b.z = b.z - func_01ffcb0c(unk_30, 0x2000);
                                    if (func_0202f050(&c, &a, &b)) {
                                        return TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

void Unk_ov009_0225e280::vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off) {
    if (func_ov009_0225cc24(a, off, o)) {
        unk_4c->unk_231 |= 2;
        if (o->unk_98 >= 0x200) {
            unk_4c->unk_231 |= 4;
        }
    }
}

Unk_ov009_0225e280::Unk_ov009_0225e280() {}

// ---------------------------------------------------------------- actor
void Unk_ov009_0225e29c::func_ov009_0225cd58() {
    if (unk_284 != NULL) {
        unk_284 = NULL;
    }
    Unk_ov009_0225e280 *p = unk_288;
    if (p != NULL) {
        for (; p < unk_288 + unk_28c; p += 2) {
            func_02031da4(p);
            p->unk_4c = NULL;
        }
        unk_288 = NULL;
    }
    unk_28c = 0;
}

void Unk_ov009_0225e29c::func_ov009_0225cdb4() {
    if ((unk_231 & 1) == 0) {
        Unk_020e44d4 *p = unk_284;
        if (p != NULL) {
            for (; p < unk_284 + unk_28c; p++) {
                func_020b50b4()->func_020b6848(p);
            }
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225ce04(Unk_ov009_0225bc88_Blk *m) {
    unk_28c = 0;
    Unk_020b28ac *h = func_020b27a4(&unk_132);
    if (h != NULL) {
        unk_28c = h->func_020b29e4();
        if (unk_28c != 0) {
            Unk_ov009_0225e280 *e4;
            Unk_020e44d4 *e6;
            u8 k;
            u32 i;
            Unk_ov009_0225b880_Vec3 a, b, c;
            Unk_ov009_0225b880_Vec3 wa, wb, wc;
            Unk_ov009_0225b880_Vec3 la, lb, lc;
            unk_284 = (Unk_020e44d4 *)func_020e8608(data_021c6204, unk_28c * 0x44);
            unk_288 = (Unk_ov009_0225e280 *)func_020e8608(data_021c6204, unk_28c * 0x54);
            e4 = unk_288;
            e6 = unk_284;
            k = func_ov003_02218b1c(this);
            for (i = 0; i < unk_28c; e4++, e6++, i++) {
                if (h->func_020b2958(&a.x, &b.x, &c.x, i)) {
                    func_ov009_0225e020(&wa, &a, m);
                    func_ov009_0225e020(&wb, &b, m);
                    func_ov009_0225e020(&wc, &c, m);
                    func_01ffd070(&la, unk_5c, &a);
                    func_01ffd070(&lb, unk_5c, &b);
                    func_01ffd070(&lc, unk_5c, &c);
                    e6 = new (e6) Unk_020e44d4;
                    func_020b50b4()->func_020b6818(e6, &wa, &wb, &wc, 7, k);
                    e4 = new (e4) Unk_ov009_0225e280;
                    e4->unk_4c = this;
                    e4->unk_50 = func_ov009_0225d650();
                    e4->func_02031e10(&la, &lb, &lc, 0x3000);
                    func_02031de0(e4);
                }
            }
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225cf40() {
    Unk_ov009_0225d244_Entry *e = func_ov009_0225d244();
    if (e != NULL) {
        if (unk_280 != NULL) {
            u32 i;
            for (i = 0; i < e->unk_1c->func_ov009_0225cd54(); i++) {
            }
            unk_280 = NULL;
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225cf78(Unk_ov009_0225bc88_Blk *m) {
    Unk_ov009_0225d244_Entry *e = func_ov009_0225d244();
    if (e != NULL) {
        Unk_020abea8 *p = unk_280;
        if (p != NULL) {
            s32 i = 0;
            s32 zero = i;
            for (; (u32)i < e->unk_1c->func_ov009_0225cd54(); p++, i++) {
                Unk_ov009_0225cd48_Item *it = e->unk_1c->func_ov009_0225cd48(i);
                Unk_ov009_0225cb4c_V3 v(it->unk_04, zero, it->unk_08);
                Unk_ov009_0225b880_Vec3 out;
                func_ov009_0225e020(&out, &v, m);
                p->func_020abed4(&out);
            }
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225cfd8(Unk_ov009_0225bc88_Blk *m) {
    Unk_ov009_0225d244_Entry *e = func_ov009_0225d244();
    if (e != NULL) {
        if (e->unk_1c != NULL) {
            void *heap = data_021c6204;
            u32 n = e->unk_1c->func_ov009_0225cd54();
            unk_280 = (Unk_020abea8 *)func_020e8608(heap, n * 0x34);
            Unk_020abea8 *p = unk_280;
            u32 i;
            s32 zero;
            i = 0;
            zero = i;
            for (; i < n; p++, i++) {
                if (p != NULL) {
                    p = p->func_020ac1e0();
                }
                Unk_ov009_0225cd48_Item *it = e->unk_1c->func_ov009_0225cd48(i);
                Unk_ov009_0225cb4c_V3 v(it->unk_04, zero, it->unk_08);
                Unk_ov009_0225b880_Vec3 out;
                func_ov009_0225e020(&out, &v, m);
                p->func_020ac0c4(&out, it->unk_0c, it->unk_10, it->unk_00, it->unk_14, it->unk_18, (s32)heap);
            }
        }
    }
}

void Unk_ov009_0225e29c::func_ov009_0225d078(Unk_ov009_0225bc88_Blk *out) {
    Unk_ov009_0225bc88_Blk blk;
    if (!vfunc_b8(&blk)) {
        unk_d0 = func_0203ef38(&unk_c4, unk_5c);
        func_ov009_0225d264(&blk);
    }
    unk_19c = blk;
    if (out != NULL) {
        *out = blk;
    }
}

void Unk_ov009_0225e29c::func_ov009_0225d0d8() {
    if (unk_230 >= 1) {
        if (unk_230 == 3) {
            if (func_02094e3c()) {
                switch (func_ov009_0225d650()) {
                case 2:
                    func_ov003_02218d6c(1);
                    data_021c1b3c->unk_2d0.func_0203535c(1);
                    if (func_ov003_0221240c()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                case 3:
                    func_ov003_02218d6c(0);
                    data_021c1b3c->unk_2d0.func_0203535c(2);
                    if (func_ov003_0221240c()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                case 1:
                    func_ov003_02218d6c(0);
                    if (Unk_ov009_0225d0d8_Match(&unk_132, 0x5012) || Unk_ov009_0225d0d8_Match(&unk_132, 0x5013)) {
                        data_021c1b3c->unk_2d0.func_0203535c(4);
                    } else {
                        data_021c1b3c->unk_2d0.func_0203535c(3);
                    }
                    if (func_ov003_0221240c()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                default:
                    unk_230 = 0;
                    return;
                }
            }
        }
        if (unk_230 < 3) {
            unk_230++;
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225d2a4(char *a, char *b, char *c) {
    BOOL result = FALSE;
    Unk_ov009_0225d244_Entry *e = func_ov009_0225d244();
    if (func_ov009_0225dfb8(e)) {
        return TRUE;
    }
    Unk_020b28ac *h = func_020b27a4(&unk_132);
    if (h != NULL) {
        h->func_020b28ac(&e->unk_40, &e->unk_44, &e->unk_48, &e->unk_4c);
    }
    if (a != NULL) {
        void *data = func_020641ec(a, data_021c6204, 4, 0);
        if (data != NULL) {
            char b1[0x1e];
            char b2[0x1e];
            Unk_ov009_0225d2a4_Obj obj;
            s32 z1, z2;
            u32 i;
            if (func_02101340(&obj, data_ov009_0225e3e8, data)) {
                void *t;
                t = func_021012bc(data_ov009_0225e3ec);
                if (t) {
                    e->unk_08 = (s32)func_ov009_0225df58(t);
                }
                t = func_021012bc(data_ov009_0225e3fc);
                if (t) {
                    e->unk_0c = (s32)func_ov009_0225df58(t);
                }
                t = func_021012bc(data_ov009_0225e40c);
                if (t) {
                    e->unk_10 = (s32)func_ov009_0225df58(t);
                }
                i = 0;
                z1 = i;
                for (; i < 4; i++) {
                    func_020639e8(b1, data_ov009_0225e41c, i);
                    if (func_021012bc(b1)) {
                        e->unk_20[i] = (s32)func_02106670(func_02106654(), z1);
                    }
                }
                i = 0;
                z2 = i;
                for (; i < 4; i++) {
                    func_020639e8(b2, data_ov009_0225e42c, i);
                    if (func_021012bc(b2)) {
                        e->unk_30[i] = (s32)func_021066ac(func_02106690(), z2);
                    }
                }
                e->unk_00 = (s32)func_ov009_0225df6c(func_021012bc(data_ov009_0225e43c));
                t = func_021012bc(data_ov009_0225e44c);
                if (t) {
                    e->unk_04 = (s32)func_ov009_0225df6c(t);
                }
                e->unk_1c = (Unk_ov009_0225cd48_Tbl *)func_021012bc(data_ov009_0225e45c);
                func_02101310(&obj);
            }
            result = TRUE;
        }
    }
    if (b != NULL) {
        if (func_02063f18(b)) {
            void *r5 = func_020641ec(b, data_021f482c, -4, 0);
            if (r5 != NULL) {
                e->unk_14 = (s32)func_0210629c(r5);
                if (func_020557a0((void *)e->unk_14, 0)) {
                    e->unk_14 = (s32)func_0205588c((void *)e->unk_14, data_021c6204);
                }
                func_020e8558(r5);
            }
        }
    }
    if (c != NULL) {
        if (func_02063f18(c)) {
            void *r5 = func_020641ec(c, data_021f482c, -4, 0);
            if (r5 != NULL) {
                e->unk_18 = (s32)func_0210629c(r5);
                if (func_02055724((void *)e->unk_18, 0)) {
                    e->unk_18 = (s32)func_0205588c((void *)e->unk_18, data_021c6204);
                }
                func_020e8558(r5);
            }
        }
    }
    return result;
}

// tiny callees defined last so they stay out of line
Unk_ov009_0225d244_Entry *Unk_ov009_0225e29c::func_ov009_0225d244() {
    if (unk_134 < 0x22) {
        return &data_ov009_0225e674[unk_134];
    }
    return NULL;
}

void Unk_ov009_0225e29c::func_ov009_0225d264(Unk_ov009_0225bc88_Blk *out) {
    Unk_ov009_0225bc88_Blk m;
    func_020e8388(&m, unk_c4, unk_c8, unk_cc);
    func_020e8434(&m, unk_d0);
    *out = m;
}

Unk_ov009_0225cd48_Item *Unk_ov009_0225cd48_Tbl::func_ov009_0225cd48(u32 i) {
    return &unk_04[i];
}

u32 Unk_ov009_0225cd48_Tbl::func_ov009_0225cd54() {
    return unk_00;
}
