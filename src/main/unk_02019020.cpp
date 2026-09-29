#include "types.h"

extern "C" {
void *func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(const void *src, void *dst, u32 size);
u16 func_0207694c(void *p);
void func_02076964(void *p, u16 v);
void func_02076a2c(void *p, u32 a, u32 b);
void func_02076a6c(void *p, u32 a, u32 b);
void func_0201ab30(void *p);
BOOL func_0201a9a0(void *p, void *owner, u32 v);
BOOL func_0201a968(void *p);
void func_0201a9ec(void *p, void *v);
void func_0201a97c(void *p, void *v);
void func_0201a99c(void *p, s32 v);
void func_0201ab4c(void *p, void *owner, s32 a, s32 b, u32 c);
void func_0201acf8(void *p, s32 v);
s32 func_0201a15c(void *p);
BOOL func_0201a164(void *p);
BOOL func_020565e8(void *p, u32 v);
BOOL func_02063ca0(void *p);
s32 func_02055e38(void *p);
extern u16 data_020c6cc8;
extern u32 data_021f4880[3];
}

struct Unk_02011b60 {
    void func_02011da4(u32 a, u32 b);
    void func_02011dfc(u32 a, u32 b);
};

struct Unk_02019848 {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14;
    s16 unk_18, unk_1a;
    u16 unk_1c, unk_1e;
    u8 unk_20, unk_21;
    u16 unk_22;
    s32 unk_24, unk_28;
    u8 unk_2c;
    s32 unk_30;
    void *func_02019848();
    void func_02019828(Unk_02019848 *src);
};

struct Unk_02019858_Vec { s32 x, y, z; Unk_02019858_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; } };

struct Unk_02019858;
typedef void (Unk_02019858::*Unk_02019858_FnA)(u8 *owner);
typedef void (Unk_02019858::*Unk_02019858_FnB)(u8 *arg);
typedef void (Unk_02019858::*Unk_02019858_FnC)(u8 *arg);
struct Unk_02019858_Entry {
    Unk_02019858_FnA a;
    Unk_02019858_FnB b;
    Unk_02019858_FnC c;
};
extern "C" Unk_02019858_Entry data_021be3d0[];

struct Unk_02019858 {
    Unk_02019858();
    void func_02019020(u8 *o);
    s32 func_02019090(u8 *o);
    void func_0201913c(u8 *o);
    s32 func_020191ac(u8 *o);
    void func_02019258();
    s32 func_02019264(u8 *o);
    void func_020192f0(u8 *arg);
    void func_02019334(u8 *arg);
    void func_02019468_dummy();
    void func_02019498(s32 v);
    void func_020194a0(u8 *arg);
    void func_02019508();
    void func_02019510();
    void func_02019518();
    void func_02019520();
    BOOL func_02019528(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL func_02019578(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL func_020195c8(s32 a, s32 b, u32 c, u16 s0, u16 s1);
    void func_02019614(u32 a, u16 b);
    BOOL func_02019638(s32 a, u8 b, u16 c);
    BOOL func_02019670(s32 a, s32 b, s32 c, s32 d, u16 e);
    BOOL func_020196b4(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6);
    void func_02019718(s32 a, s32 b);
    void func_02019720();
    void func_0201973c(u8 *o, s32 idx, s32 state);
    Unk_02019848 *func_0201978c();
    BOOL func_02019790();
    u8 func_020197a0();
    s32 func_020197a8();
    void func_020197ac(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4);
    void func_02019854();

    u8 unk_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0xe];
    s32 unk_14;
    u8 unk_18;
    u8 unk_19;
    u8 pad_1a[2];
    s32 unk_1c;
    Unk_02019858_Entry *unk_20;
    s32 unk_24;
    s32 unk_28;
    Unk_02019848 unk_2c;
    Unk_02019848 unk_60;
    s32 unk_94;
    u8 unk_98;
    u8 unk_99;
    u8 pad_9a[2];
    s32 unk_9c;
    u16 unk_a0;
    u8 pad_a2[2];
    s32 unk_a4;
    u8 unk_a8;
    u8 unk_a9;
    u8 pad_aa[2];
    s32 unk_ac;
    s32 unk_b0;
};

extern "C" {
void func_02019468(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
}

void Unk_02019858::func_02019020(u8 *o)
{
    func_0201ab30(o + 0x350);
    if (func_0201a9a0(o + 0x350, o, 0)) {
        if (func_0201a968(o + 0x350)) {
            Unk_02019848 *c = func_0201978c();
            func_020196b4(1, 1, c->unk_04, c->unk_08, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            func_02019498(1);
        }
    }
}

s32 Unk_02019858::func_02019090(u8 *o)
{
    Unk_02019848 *c = func_0201978c();
    Unk_02019858_Vec v0(c->unk_04, 0, c->unk_08);
    Unk_02019858_Vec v1(c->unk_0c, 0, c->unk_10);
    func_0201a9ec(o + 0x350, &v0);
    func_0201a97c(o + 0x350, &v1);
    func_0201ab4c(o + 0x350, o, 2, c->unk_1a, c->unk_1c);
    func_0201acf8(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((Unk_02011b60 *)*(u32 *)(o + 0x628))->func_02011da4(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    func_02019468(&unk_06[0], c->unk_04, c->unk_08, c->unk_0c, c->unk_10, c->unk_1a, c->unk_1c);
    func_02019498(0);
    return 0;
}

void Unk_02019858::func_0201913c(u8 *o)
{
    func_0201ab30(o + 0x350);
    if (func_0201a9a0(o + 0x350, o, 0)) {
        if (func_0201a968(o + 0x350)) {
            Unk_02019848 *c = func_0201978c();
            func_020196b4(1, 1, c->unk_04, c->unk_08, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            func_02019498(1);
        }
    }
}

s32 Unk_02019858::func_020191ac(u8 *o)
{
    Unk_02019848 *c = func_0201978c();
    Unk_02019858_Vec v0(c->unk_04, 0, c->unk_08);
    Unk_02019858_Vec v1(c->unk_0c, 0, c->unk_10);
    func_0201a9ec(o + 0x350, &v0);
    func_0201a97c(o + 0x350, &v1);
    func_0201ab4c(o + 0x350, o, 1, c->unk_1a, c->unk_1c);
    func_0201acf8(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((Unk_02011b60 *)*(u32 *)(o + 0x628))->func_02011da4(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    func_02019468(&unk_06[0], c->unk_04, c->unk_08, c->unk_0c, c->unk_10, c->unk_1a, c->unk_1c);
    func_02019498(0);
    return 0;
}

void Unk_02019858::func_02019258()
{
    func_02019498(1);
}

s32 Unk_02019858::func_02019264(u8 *o)
{
    Unk_02019848 *c = func_0201978c();
    func_0201ab4c(o + 0x350, o, 0, 0, c->unk_1c);
    func_0201a9ec(o + 0x350, data_021f4880);
    func_0201a97c(o + 0x350, data_021f4880);
    func_0201a99c(o + 0x350, *(s16 *)(o + 0x8e));
    func_0201acf8(o + 0x3aa, -2);
    if (*(u32 *)(o + 0x628) != 0) {
        ((Unk_02011b60 *)*(u32 *)(o + 0x628))->func_02011dfc(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    func_02019498(0);
    return 0;
}

void Unk_02019858::func_020192f0(u8 *arg)
{
    if (unk_20 != NULL && unk_20->c != NULL) {
        (this->*(unk_20->c))(arg);
    }
    if (func_02019790()) {
        unk_14 = 0;
    }
}

void Unk_02019858::func_02019334(u8 *arg)
{
    func_020194a0(arg);
    Unk_02019858_Entry *e = unk_20;
    if (e != NULL && e->b != NULL) {
        (this->*(e->b))(arg);
    }
    if (func_02019790()) {
        unk_14 = 0;
    }
}

extern "C" void func_02019380(u16 *out, void *in)
{
    *out = func_0207694c(in);
}

extern "C" void func_02019394(void *unused, void *p, u16 *v)
{
    func_02076964(p, *v);
}

extern "C" void func_020193a0(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src)
{
    *a = src[0];
    *b = src[1];
    *c = src[2];
    *d = src[3];
}

extern "C" void func_020193c0(u8 *p, u32 a, u32 b, u32 c, u16 d)
{
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
}

extern "C" void func_020193d4(void *a, void *b, u16 *c, u8 *d)
{
    func_02116048(d, a, 2);
    func_02116048(d + 2, b, 2);
    *c = d[4];
}

extern "C" void func_02019400(u8 *out, u16 a, u16 b, u32 c)
{
    func_02116048(&a, out, 2);
    func_02116048(&b, out + 2, 2);
    out[4] = c;
}

extern "C" void func_0201942c(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out)
{
    func_02076a2c(out, a, b);
    func_02076a2c(out + 5, c, d);
    func_02116048(out + 10, s0, 2);
    *s1 = out[12];
}

extern "C" void func_02019468(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2)
{
    func_02076a6c(out, a, b);
    func_02076a6c(out + 5, c, s0);
    func_02116048(&s1, out + 10, 2);
    out[12] = s2;
}

void Unk_02019858::func_02019498(s32 v)
{
    unk_94 = v;
}

void Unk_02019858::func_020194a0(u8 *arg)
{
    if (unk_28 != 0) {
        if (unk_28 >= unk_14 || func_02019790() || unk_14 == 3) {
            unk_60.func_02019828(&unk_2c);
            func_0201973c(arg, unk_24, unk_28);
        }
    }
    u8 t = unk_19;
    if (t == 1) {
        func_02019510();
        unk_19 = 0;
    } else if (t == 2) {
        func_02019508();
        unk_19 = 0;
    }
    func_02019720();
}

void Unk_02019858::func_02019508() { unk_18 = 0; }
void Unk_02019858::func_02019510() { unk_18 = 1; }
void Unk_02019858::func_02019518() { unk_19 = 2; }
void Unk_02019858::func_02019520() { unk_19 = 1; }

BOOL Unk_02019858::func_02019528(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2)
{
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        Unk_02019848 *p = &unk_2c;
        func_02019718(0xe, a);
        p->func_02019848();
        p->unk_22 = *b;
        p->unk_24 = c;
        p->unk_2c = s0;
        p->unk_30 = s1;
        p->unk_28 = s2;
        r = TRUE;
    }
    return r;
}

BOOL Unk_02019858::func_02019578(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2)
{
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        Unk_02019848 *p = &unk_2c;
        func_02019718(0xd, a);
        p->func_02019848();
        p->unk_22 = *b;
        p->unk_24 = c;
        p->unk_2c = s0;
        p->unk_30 = s1;
        p->unk_28 = s2;
        r = TRUE;
    }
    return r;
}

BOOL Unk_02019858::func_020195c8(s32 a, s32 b, u32 c, u16 s0, u16 s1)
{
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        Unk_02019848 *p = &unk_2c;
        func_02019718(0xc, a);
        p->func_02019848();
        p->unk_00 = b;
        p->unk_20 = c;
        p->unk_1c = s0;
        p->unk_1e = s1;
        r = TRUE;
    }
    return r;
}

void Unk_02019858::func_02019614(u32 a, u16 b)
{
    func_020196b4(0, a, 0, 0, 0, 0, 0, 0, b, 0);
}

BOOL Unk_02019858::func_02019638(s32 a, u8 b, u16 c)
{
    BOOL r = FALSE;
    if (func_020196b4(8, a, 0, 0, 0, 0, 0, 0, c, 0)) {
        unk_2c.unk_21 = b;
        r = TRUE;
    }
    return r;
}

BOOL Unk_02019858::func_02019670(s32 a, s32 b, s32 c, s32 d, u16 e)
{
    BOOL r = FALSE;
    if (func_020196b4(7, a, 0, 0, b, c, 0, 0, e, 0)) {
        unk_2c.unk_14 = d;
        r = TRUE;
    }
    return r;
}

BOOL Unk_02019858::func_020196b4(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6)
{
    BOOL r = FALSE;
    if (b >= unk_28 || unk_28 == 3) {
        if (a != 0xc) {
            Unk_02019848 *p = &unk_2c;
            func_02019718(a, b);
            p->func_02019848();
            p->unk_04 = c;
            p->unk_08 = s0;
            if (s3 == 0 && s4 == 0) {
                p->unk_0c = c;
                p->unk_10 = s0;
            } else {
                p->unk_0c = s3;
                p->unk_10 = s4;
            }
            p->unk_18 = s2;
            p->unk_1a = s1;
            p->unk_1c = s5;
            p->unk_1e = s6;
            r = TRUE;
        }
    }
    return r;
}

void Unk_02019858::func_02019718(s32 a, s32 b)
{
    unk_24 = a;
    unk_28 = b;
}

void Unk_02019858::func_02019720()
{
    func_02019718(0x16, 0);
    unk_2c.func_02019848();
}

void Unk_02019858::func_0201973c(u8 *o, s32 idx, s32 state)
{
    unk_1c = idx;
    if (idx < 0 || idx >= 0x16) {
        unk_1c = 0;
    }
    unk_14 = state;
    unk_20 = &data_021be3d0[unk_1c];
    unk_98 = 0;
    if (unk_20 != NULL) {
        (this->*(unk_20->a))(o);
    }
}

Unk_02019848 *Unk_02019858::func_0201978c()
{
    return &unk_60;
}

BOOL Unk_02019858::func_02019790()
{
    if (unk_94 == 1) {
        return TRUE;
    }
    return FALSE;
}

u8 Unk_02019858::func_020197a0()
{
    return unk_a9;
}

s32 Unk_02019858::func_020197a8()
{
    return unk_1c;
}

void Unk_02019858::func_020197ac(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4)
{
    Unk_02019848 *p = &unk_2c;
    func_02019718(a, b);
    p->func_02019848();
    p->unk_04 = s0;
    p->unk_08 = s1;
    if (s3 == 0 && s4 == 0) {
        p->unk_0c = s0;
        p->unk_10 = s1;
    } else {
        p->unk_0c = s3;
        p->unk_10 = s4;
    }
    p->unk_18 = s2;
    p->unk_1c = data_020c6cc8;
    unk_60.func_02019828(&unk_2c);
    func_02115fb4(&unk_04, 0, 0xf);
    unk_18 = 0;
    unk_19 = 0;
    func_0201973c(o, unk_24, unk_28);
}

void Unk_02019848::func_02019828(Unk_02019848 *src)
{
    func_02116048(src, this, 0x34);
    unk_28 = src->unk_28;
}

void *Unk_02019848::func_02019848()
{
    return func_02115fb4(this, 0, 0x34);
}

void Unk_02019858::func_02019854()
{
}

Unk_02019858::Unk_02019858()
{
    unk_2c.unk_22 = 0xfff1;
    unk_60.unk_22 = 0xfff1;
    unk_1c = 0x16;
    unk_20 = NULL;
    unk_14 = 0;
    func_02019720();
    func_02019498(1);
    unk_99 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 1;
    unk_a9 = 0;
    unk_b0 = 5;
    unk_ac = -1;
}

struct Unk_02019dd8 {
    BOOL func_02019d90();
    BOOL func_02019c90(s32 v);
    void func_02019b44(s32 v);
    void func_02019c24();
    BOOL func_02019bdc();
    void func_02019b1c();
    void func_020198c4(u8 *o);
    u8 pad_00[0x1c];
    u8 unk_1c[0x2c];
    u8 unk_48[0x2c];
    s32 unk_74;
    s32 unk_78;
};

void Unk_02019dd8::func_020198c4(u8 *o)
{
    if (func_02019d90()) {
        if (unk_74 == 0) {
            if (!func_020565e8(unk_1c, 0) || func_02063ca0(this)) {
                func_02055e38(unk_1c);
            }
        } else {
            func_02055e38(unk_1c);
        }
        if (func_0201a15c(o + 0x418) < 2) {
            if (func_0201a164(o + 0x418)) {
                if (!func_02019c90(unk_78)) {
                    func_02019b44(func_0201a15c(o + 0x418));
                    func_02019c24();
                } else if (func_02019bdc()) {
                    func_02019c24();
                }
            } else if (func_02019c90(unk_78)) {
                if (func_02019bdc()) {
                    func_02019b1c();
                }
            }
        } else if (func_02019c90(unk_78)) {
            func_02019b1c();
        }
        func_02055e38(unk_48);
    }
}
