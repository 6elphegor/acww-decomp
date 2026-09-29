#include "types.h"

struct Unk_02013b10_Vec { s32 x, y, z; };
struct Unk_02013b10_VecT : Unk_02013b10_Vec { Unk_02013b10_VecT() {} Unk_02013b10_VecT(const Unk_02013b10_Vec &o) { x = o.x; y = o.y; z = o.z; } void set(const Unk_02013b10_Vec &o) { x = o.x; y = o.y; z = o.z; } };

struct Unk_02013b10_Sub {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_020140d0_X;
struct Unk_020140d0_Out { s32 pad; s32 a; u8 b; };

struct Unk_02013b10_Obj {
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
    virtual void vfunc_74(Unk_020140d0_X *v);
    virtual void vfunc_78(s32 *out);
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual s32 vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_02013b10_Sub *unk_3c;
    u8 pad_40[0x5c - 0x40];
    Unk_02013b10_Vec unk_5c;
};

struct Unk_02013b10_Ctx : Unk_02013b10_Obj {
    u8 pad_68[0x8e - sizeof(Unk_02013b10_Obj)];
    s16 unk_8e;
    u8 pad_90[0x4e8 - 0x90 ];
    u32 unk_4e8;
    u8 pad_4ec[0x564 - 0x4ec];
    u8 unk_564[0xd0];
    Unk_02013b10_Obj *unk_634;
};

struct Unk_020140d0_X {
    Unk_020140d0_X();
    ~Unk_020140d0_X();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
    u8 pad_04[0x18];
};

class Unk_02013b10;

class Unk_02014258;
extern "C" {
Unk_02013b10_Ctx *func_02015720(Unk_02014258 *p, u8 idx);
s32 func_02015314(Unk_02014258 *p, s32 a);
u32 func_0203a488(void);
u32 func_0203a430(void);
void func_02065f14(Unk_02014258 *p, Unk_020140d0_X *x, u8 *b);
void func_0203a528(Unk_02013b10_Vec *v);
void func_02065f90(Unk_02013b10_Obj *o, s32 a, u8 *b);
void func_020a710c(Unk_02013b10_Obj *o, s32 a);
s32 func_020679a8(Unk_02013b10_Sub *p);
s32 func_02019518(void *p);
s32 func_02019520(void *p);
s32 func_020197a8(void *p);
s32 func_02019790(void *p);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0206dab0(void);
Unk_02013b10_Ctx *func_02015a7c(Unk_02013b10_Obj *o);
u8 *func_02015710(Unk_02013b10_Obj *o);
void func_0201a174(void *p);
void func_0201a17c(void *p);
void func_0203e47c(Unk_02013b10_Ctx *ctx, Unk_02013b10_Obj *o);
void func_0203e488(Unk_02013b10_Ctx *ctx, Unk_02013b10_Obj *o);
void func_020159cc(Unk_02013b10_Obj *o, s32 a, s32 b);
void func_02015ab8(Unk_02013b10_Obj *o);
void func_0203a608(Unk_02013b10_Vec *a, Unk_02013b10_Vec *b);
void func_0203a680(Unk_02013b10_Vec *a);
void func_0203a844(void);
s32 func_02094574(s32 a, s32 b, s32 c);
u8 *func_0201bbf8(void *p);
}
extern u16 data_020c6cc8;

class Unk_02013b10 {
public:
    s32 unk_00;
    s16 unk_04;
    s16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;

    void func_02013b10(Unk_02013b10_Ctx *ctx);
    void func_02013b7c(Unk_02013b10_Ctx *ctx);
    void func_02013ba0(Unk_02013b10_Ctx *ctx);
    void func_02013bfc(Unk_02013b10_Ctx *ctx);
    void func_02013c9c(Unk_02013b10_Ctx *ctx);
    void func_02013d18(Unk_02013b10_Ctx *ctx);
    void func_02013d8c(Unk_02013b10_Ctx *ctx);
    void func_02013e80(Unk_02013b10_Ctx *ctx);
    void func_02013ee8(Unk_02013b10_Ctx *ctx);
    void func_02013fe4(Unk_02013b10_Ctx *ctx);
    void func_020140d0(Unk_02013b10_Ctx *ctx);
    void func_020141d4(Unk_02013b10_Ctx *ctx);
    void func_02014040(Unk_02013b10_Ctx *ctx);
    void func_02014084(Unk_02013b10_Ctx *ctx);
    BOOL func_02014140(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g);
    BOOL func_02014170(u32 c, s32 d, s16 e, u8 g);
    BOOL func_02014198(u8 f, u8 g);
    BOOL func_020141b4(s16 d, s16 e, u8 g);
    BOOL func_02014220();
    void func_02014234();
};

struct Unk_02014040_Ent {
    void (Unk_02013b10::*a)(Unk_02013b10_Ctx *);
    void (Unk_02013b10::*b)(Unk_02013b10_Ctx *);
};
extern Unk_02014040_Ent data_021be0c0[5];

void Unk_02013b10::func_02013b10(Unk_02013b10_Ctx *ctx) {
    static void (Unk_02013b10::*tbl[2])(Unk_02013b10_Ctx *) = { &Unk_02013b10::func_02013ba0, &Unk_02013b10::func_02013b7c };
    if (unk_0a < 2) (this->*tbl[unk_0a])(ctx);
}

void Unk_02013b10::func_02013b7c(Unk_02013b10_Ctx *ctx) {
    if (unk_0e) {
        func_02019518(ctx->unk_564);
        unk_0a = 2;
        unk_08 = 5;
    }
}

void Unk_02013b10::func_02013ba0(Unk_02013b10_Ctx *ctx) {
    if (func_020197a8(ctx->unk_564) == 3) {
        if (func_02019790(ctx->unk_564)) {
            func_020196b4(ctx->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            func_02019520(ctx->unk_564);
            unk_0a = 1;
        }
    }
}

void Unk_02013b10::func_02013bfc(Unk_02013b10_Ctx *ctx) {
    volatile Unk_02013b10_Vec v;
    Unk_02013b10_Vec *pv = &ctx->unk_5c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    func_020196b4(ctx->unk_564, 3, 2, 0, 0, unk_04, unk_06, 0, 0, data_020c6cc8, 0);
    if (!(ctx->unk_4e8 & 2)) unk_0b = 1;
    ctx->unk_4e8 |= 2;
    if (ctx->vfunc_7c()) {
        if (ctx->vfunc_84() != 0xffff) func_0206dab0();
        ctx->vfunc_80();
    }
    unk_0a = 0;
}

void Unk_02013b10::func_02013c9c(Unk_02013b10_Ctx *ctx) {
    static void (Unk_02013b10::*tbl[3])(Unk_02013b10_Ctx *) = { &Unk_02013b10::func_02013e80, &Unk_02013b10::func_02013d8c, &Unk_02013b10::func_02013d18 };
    if (unk_0a < 3) (this->*tbl[unk_0a])(ctx);
}

void Unk_02013b10::func_02013d18(Unk_02013b10_Ctx *ctx) {
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && func_02015a7c(o) != 0 && func_020197a8(func_02015a7c(o)->unk_564) == 8 && func_02019790(func_02015a7c(o)->unk_564) == 0) return;
    if (func_020197a8(ctx->unk_564) == 8 && func_02019790(ctx->unk_564) == 0) return;
    func_02013fe4(ctx);
    unk_0a = 3;
    unk_08 = 5;
}

void Unk_02013b10::func_02013d8c(Unk_02013b10_Ctx *ctx) {
    Unk_02013b10_Obj *o = ctx->unk_634;
    s32 a, b;
    if (o != 0 && o->unk_3c != 0) {
        if (o->unk_3c->unk_04 == 0) {
            o->vfunc_7c();
            func_0203e47c(ctx, o);
            u8 *e = func_02015710(o);
            if (e) func_0201a174(e + 0x418);
            a = 0;
            if (func_02015a7c(o) != 0 && func_020197a8(func_02015a7c(o)->unk_564) == 8 && func_02019790(func_02015a7c(o)->unk_564) == 0) a = 1;
            b = 0;
            if (func_020197a8(ctx->unk_564) == 8 && func_02019790(ctx->unk_564) == 0) b = 1;
            if (a != 0 || b != 0) {
                if (b != 0) func_020159cc(o, 0, 0);
                if (a != 0) func_020159cc(o, 0, 1);
                unk_0a = 2;
            } else {
                func_02013fe4(ctx);
                unk_0a = 3;
                unk_08 = 5;
            }
        } else {
            func_02015ab8(o);
            func_020141d4(ctx);
        }
    }
}

void Unk_02013b10::func_02013e80(Unk_02013b10_Ctx *ctx) {
    if (unk_06 == ctx->unk_8e) {
        if (func_020197a8(ctx->unk_564) == 3) {
            if (func_02019790(ctx->unk_564)) {
                func_020196b4(ctx->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                func_020140d0(ctx);
                unk_0a = 1;
            }
        }
    }
}

void Unk_02013b10::func_02013ee8(Unk_02013b10_Ctx *ctx) {
    volatile Unk_02013b10_Vec v;
    Unk_02013b10_Vec w;
    Unk_02013b10_Vec *pv = &ctx->unk_5c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    func_020196b4(ctx->unk_564, 3, 2, 0, 0, unk_04, unk_06, 0, 0, data_020c6cc8, 0);
    if (unk_0c == 0) {
        Unk_02013b10_Obj *o = ctx->unk_634;
        if (o != 0 && func_02015a7c(o) != 0) {
            Unk_02013b10_Vec *pw = &func_02015a7c(o)->unk_5c;
            w.x = pw->x;
            w.y = pw->y;
            w.z = pw->z;
            v.y += 0x2000;
            w.y += 0x2000;
            func_0203a608((Unk_02013b10_Vec *)&v, &w);
        } else {
            v.y += 0x2000;
            func_0203a680((Unk_02013b10_Vec *)&v);
        }
    }
    if (!(ctx->unk_4e8 & 2)) unk_0b = 1;
    ctx->unk_4e8 |= 2;
    if (ctx->vfunc_7c()) {
        if (ctx->vfunc_84() != 0xffff) func_0206dab0();
        ctx->vfunc_80();
    }
    unk_0a = 0;
}

void Unk_02013b10::func_02013fe4(Unk_02013b10_Ctx *ctx) {
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && func_02015a7c(o) != 0) func_02015a7c(o)->vfunc_90();
    if (unk_0c == 0) func_0203a844();
    if (unk_0b == 1) ctx->unk_4e8 &= ~2;
    func_02094574(0, 0, 4);
}

void Unk_02013b10::func_02014040(Unk_02013b10_Ctx *ctx) {
    func_02014084(ctx);
    if (unk_08 < 5) (this->*data_021be0c0[unk_08].b)(ctx);
}

void Unk_02013b10::func_02014084(Unk_02013b10_Ctx *ctx) {
    u8 b = unk_09;
    if (b < 5 && unk_08 == 5) {
        unk_08 = b;
        unk_0a = 0;
        unk_0e = 0;
        (this->*data_021be0c0[unk_08].a)(ctx);
        unk_09 = 5;
    }
}

void Unk_02013b10::func_020140d0(Unk_02013b10_Ctx *ctx) {
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0) {
        Unk_020140d0_Out out;
        Unk_020140d0_X x;
        ctx->vfunc_74(&x);
        Unk_020140d0_X *px = &x;
        s32 r = px->vfunc_0c();
        func_02065f90(o, r, func_0201bbf8(ctx));
        func_0203e488(ctx, o);
        o->vfunc_78(&out.a);
        func_020a710c(o, out.a);
        o->unk_1e = out.b;
        o->unk_3c->unk_08 = 1;
    }
}

BOOL Unk_02013b10::func_02014140(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g) {
    BOOL r = FALSE;
    if (unk_09 == 5) {
        unk_09 = b;
        unk_04 = d;
        unk_06 = e;
        unk_00 = c;
        unk_0d = f;
        unk_0c = g;
        r = TRUE;
    }
    return r;
}

BOOL Unk_02013b10::func_02014170(u32 c, s32 d, s16 e, u8 g) {
    return func_02014140(4, c, d, e, 1, g);
}

BOOL Unk_02013b10::func_02014198(u8 f, u8 g) {
    return func_02014140(1, 0, 0, 0, f, g);
}

BOOL Unk_02013b10::func_020141b4(s16 d, s16 e, u8 g) {
    return func_02014140(0, 0, d, e, 1, g);
}

void Unk_02013b10::func_020141d4(Unk_02013b10_Ctx *ctx) {
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && o->unk_3c != 0) {
        u8 *e = func_02015710(o);
        if (e != 0) {
            if (func_020679a8(o->unk_3c)) func_0201a17c(e + 0x418);
            else func_0201a174(e + 0x418);
        }
    }
}

BOOL Unk_02013b10::func_02014220() {
    if (unk_09 < 5 || unk_08 < 5) return TRUE;
    return FALSE;
}

void Unk_02013b10::func_02014234() {
    unk_08 = 5;
    unk_09 = 5;
    unk_0a = 0;
    unk_04 = 0;
    unk_06 = 0;
    unk_0b = 0;
    unk_00 = 5;
    unk_0d = 1;
    unk_0c = 0;
    unk_0e = 0;
}

extern "C" void func_02014250(void) {}
extern "C" void func_02014254(void) {}

class Unk_02014258 {
public:
    u8 pad_00[0x3c];
    Unk_02013b10_Sub *unk_3c;
    u8 pad_40[0x51 - 0x40];
    u8 unk_51;
    u8 pad_52[0xa0 - 0x52];
    u8 unk_a0;
    u8 pad_a1[7];
    u8 unk_a8;

    BOOL func_02014258();
    BOOL func_020142d8();
    BOOL func_0201437c();
    BOOL func_020143d8();
    BOOL func_020143fc(u8 v);
};

BOOL Unk_02014258::func_02014258() {
    static BOOL (Unk_02014258::*tbl[3])() = { &Unk_02014258::func_020143d8, &Unk_02014258::func_0201437c, &Unk_02014258::func_020142d8 };
    if (unk_a8 < 3) return (this->*tbl[unk_a8])();
    return FALSE;
}

BOOL Unk_02014258::func_020142d8() {
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0 && q->unk_04 == 5) {
        if (func_0203a488() == 0 || func_0203a430() < 0x11) {
            Unk_02013b10_Ctx *e = func_02015720(this, unk_51);
            if (e) func_0201a174((u8 *)e + 0x418);
            unk_51 = (unk_51 + 1) & 1;
            Unk_02013b10_Ctx *n = func_02015720(this, unk_51);
            if (n != 0) {
                Unk_020140d0_X x;
                n->vfunc_74(&x);
                func_02065f14(this, &x, func_0201bbf8(n));
                unk_3c->unk_08 = 1;
                unk_a8 = 3;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_02014258::func_0201437c() {
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0 && q->unk_04 == 5) {
        Unk_02013b10_Ctx *e = func_02015720(this, (unk_51 + 1) & 1);
        if (e != 0) {
            Unk_02013b10_Vec v;
            Unk_02013b10_Vec *pv = &e->unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y += 0x2000;
            func_0203a528(&v);
        }
        unk_a8 = 2;
    }
    return FALSE;
}

BOOL Unk_02014258::func_020143d8() {
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0) {
        q->unk_14 = 2;
        if (unk_a0 != 0) unk_a8 = 1;
        else unk_a8 = 2;
    }
    return FALSE;
}

BOOL Unk_02014258::func_020143fc(u8 v) {
    if (func_02015314(this, 0xb)) {
        unk_a0 = v;
        return TRUE;
    }
    return FALSE;
}
