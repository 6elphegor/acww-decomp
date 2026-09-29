#include "types.h"

struct Unk_02006d14_Vec { s32 x, y, z; };

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};

// Pair passed by value
struct Unk_0200b750_Pair { u32 unk_00; u32 unk_04; Unk_0200b750_Pair(u32 a, u32 b) : unk_00(a), unk_04(b) {} Unk_0200b750_Pair(const Unk_0200b750_Pair &o) : unk_00(o.unk_00), unk_04(o.unk_04) {} };

// Sub-object at +0x8ec
struct Unk_0200b750 {
    u8 unk_00, unk_01;
    u8 pad_02[2];
    s32 unk_04;
    void func_0200b750(Unk_0200b750_Pair *pr, s32 *out);
    void func_0200b760(Unk_0200b750_Pair pr, s32 v);
    void func_0200ba78(u8 *a, u8 *b);
    void func_0200ba84(u8 a, u8 b);
};

struct Unk_0200b7bc {
    u32 unk_00;
    u8 unk_04, unk_05;
    void func_0200b7bc(Unk_0200b750_Pair pr, u32 v);
};

struct Unk_0200bda0 {
    s16 unk_00;
    void func_0200bda0(s16 v);
};

struct Unk_0200b76c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b7bc unk_0c;
    u8 pad_14[8];
};

struct Unk_0200b868_Msg {
    u32 unk_00, unk_04, unk_08;
    u8 pad_0c[0x14];
};

struct Unk_0200ba8c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b750 unk_0c;
    u8 pad_14[0x8];
};

struct Unk_0200bd60_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200bda0 unk_0c;
    u8 pad_0e[0xe];
};


static inline void func_0200bc78_sub(Unk_02006d14_Vec *o, Unk_02006d14_Vec *a, Unk_02006d14_Vec *b) {
    o->x = a->x - b->x;
    o->z = a->z - b->z;
}

struct Unk_0200bc78_Vec : Unk_02006d14_Vec { Unk_0200bc78_Vec() {} };

class Unk_0200bc78_Obj {
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
    virtual Unk_02006d14_Vec *vfunc_50();
};

struct Unk_0200bc08_Obj {
    u32 unk_00, unk_04, unk_08;
};

struct Unk_02006d14_7d0 {
    union {
        struct { s32 w0; u8 b4, b5, b6; };
        struct { u8 c0, c1; };
    };
};

struct Unk_0200b908_Obj { u32 unk_00; u8 pad_04[8]; volatile u32 unk_0c; u8 pad_10[8]; u8 unk_18; };

class Unk_02006d14 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ Unk_02006d14_Vec unk_5c;
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[0x16c - 0x90 - 0];
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 pad_170[0x2cc - 0x170];
    /* 0x2cc */ u8 unk_2cc[4];
    /* 0x2d0 */ s32 unk_2d0;
    /* 0x2d4 */ u32 unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[8];
    /* 0x2e0 */ u8 unk_2e0;
    /* 0x2e1 */ u8 pad_2e1[0x59c - 0x2e1];
    /* 0x59c */ u8 pad_59c[0x6dc - 0x59c];
    /* 0x6dc */ u8 unk_6dc[0x6fc - 0x6dc];
    /* 0x6fc */ u8 unk_6fc[4];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_02006d14_7d0 unk_7d0;
    /* 0x7d8 */ s32 unk_7d8;
    /* 0x7dc */ u8 pad_7dc[0x7ec - 0x7dc];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[8];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x814 - 0x800];
    /* 0x814 */ s32 unk_814;
    /* 0x818 */ u8 pad_818[4];
    /* 0x81c */ u16 unk_81c;
    /* 0x81e */ u16 unk_81e;
    /* 0x820 */ u8 unk_820[0x82c - 0x820];
    /* 0x82c */ s32 unk_82c, unk_830, unk_834;
    /* 0x838 */ u8 pad_838[0x8ec - 0x838];
    /* 0x8ec */ Unk_0200b750 unk_8ec;
    /* 0x8f4 */ u8 pad_8f4[0x904 - 0x8f4];
    /* 0x904 */ Unk_0200b908_Obj *unk_904;
    /* 0x908 */ u8 unk_908[0x92d - 0x908];
    /* 0x92d */ u8 unk_92d;
    /* 0x92e */ u8 pad_92e[2];
    /* 0xc80 is beyond */

    void func_0200b510();
    void func_0200b578(s16 v);
    void func_0200b5e8(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b76c(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void func_0200b7c8();
    void func_0200b7e4();
    void func_0200b80c();
    s32 func_0200b848(u32 v);
    void func_0200b854(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b868(u32 a, u32 b);
    void func_0200b8a0();
    void func_0200b8c0();
    void func_0200b908();
    void func_0200b9bc();
    s32 func_0200b9cc(s16 v);
    void func_0200ba00(Unk_02006d14_Item *item, u32 old);
    s32 func_0200ba8c(u8 a, u8 b, u32 c, s16 d);
    void func_0200bad0();
    void func_0200bb08();
    s32 func_0200bb48(u32 v);
    void func_0200bb54(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200bb68(u32 a, u32 b);
    void func_0200bbb0();
    void func_0200bc08();
    void func_0200bc78();
    void func_0200bcec();
    void func_0200bd18(u32 v);
    void func_0200bd2c(Unk_02006d14_Item *item, u32 old);
    s32 func_0200bd60(s16 a, u32 b, s32 c);
    void func_0200bda4();
    void func_0200bdcc();

    s32 func_0200bff8();
    void func_0200be7c();
    void func_0200be2c();
    void func_0201071c();
    void func_02010914();
    s32 func_0200ef08();
    void func_020109c4();
    void func_0200ec1c(u32 id);
    BOOL func_0200ec44(u32 id);
    void func_0200e870();
    void func_0200ecdc(u32 id);
    s32 func_0200f5b0();
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103dc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
    s32 func_0200b1ec(Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
    s32 func_0200c358(u32 a, u32 b, s32 c);
    BOOL func_0200e248(void *msg);
    void func_02010a58(void *p);
};

extern "C" {
extern u8 data_020e416c;
extern void *data_021c47c4;
extern void *data_020cbb18;
extern u8 data_020c61d0[];
extern u16 data_021f47d8[];

s32 func_02098ffc();
BOOL func_020b52f8();
void func_0204ed8c(void *, u32, u32);
u16 *func_0204eba0(void *, void *, u32);
void func_ov004_022344e8(s32, void *, void *);
u32 func_020b0f54();
void func_0205e1a0(void *, u32, u32, u32);
void *func_0200e2e0(void *);
void func_0200e2c0(void *, u32, u32, s32);
void *func_0200e2d0(void *);
BOOL func_02056654(void *);
BOOL func_020565e8(void *, u32);
void func_02090330(u32, void *, u32, u32);
u32 func_0205c240(void *);
void func_02019e34(void *, void *, s32, u32, u32);
void func_0201a040(void *, void *, u32);
void func_02019e2c(void *);
void *func_02018984(u32);
BOOL func_020729bc(void *, s32);
void *func_0203d608();
void *func_0208169c(void *);
s32 func_020e7b98(s32, s32);
void func_02010d98(void *, s32);
void func_02094c38();
}

void Unk_02006d14::func_0200b510() {
    Unk_02006d14_7d0 *p = &unk_7d0;
    s32 a = p->w0;
    u32 b = p->b5;
    u32 c = p->b6;
    u32 d = p->b4;
    if (d >= 3) {
        func_02010914();
    } else {
        if (a >= 0) {
            Unk_0200b750_Pair pr(b, c);
            func_0200b1ec(pr, a, 0, 6, -1);
        } else if (d == 0) {
            if (unk_814 == 2) {
                p->b4 = 2;
            } else if (unk_814 == 1) {
                p->b4 = 1;
            }
        }
        func_02010914();
    }
}

void Unk_02006d14::func_0200b578(s16 v) {
    BOOL f;
    if (data_020e416c == 1) f = TRUE; else f = FALSE;
    if (!f) {
        if (unk_7ec == 0x18) {
            *(s16 *)((u8 *)this + 0xc80) = v;
        } else {
            Unk_0200b750_Pair pr(0, 0);
            s32 x;
            unk_8ec.func_0200b750(&pr, &x);
            if (x < 0) {
                func_0200b76c(pr, -1, 6, v);
            }
        }
    }
}

void Unk_02006d14::func_0200b5e8(Unk_02006d14_Item *item, u32 old) {
    u8 *q = item->unk_0c;
    u8 a = q[4];
    u8 b = q[5];
    s32 c = *(s32 *)item->unk_0c;
    Unk_02006d14_7d0 *p;
    func_0200ec1c(0xd);
    p = &unk_7d0;
    p->w0 = c;
    p->b5 = a;
    p->b6 = b;
    p->b4 = 0;
    unk_8ec.func_0200b760(Unk_0200b750_Pair(a, b), c);
    if (c < 0) {
        func_0204ed8c(unk_820, a, b);
        unk_82c = 0x1000;
        unk_830 = 0x1000;
        unk_834 = 0x1000;
        unk_81e = *func_0204eba0(data_021c47c4, unk_820, 0);
        unk_81c = unk_81e;
    }
    if (func_02098ffc() == -1 && func_020b52f8()) {
        BOOL f = FALSE;
        if (unk_81c >= 0xa7 && unk_81c <= 0xc6) f = TRUE;
        if (!f) {
            func_020103b4(0, 3, 0);
            p->b4 = 3;
            goto end;
        }
    }
    if (c >= 0) {
        if (func_020b0f54() <= 1) {
            func_ov004_022344e8(p->w0, &unk_81c, &unk_81e);
            func_02010358(0x15, 3, 0);
        } else {
            p->b4 = 7;
            func_020103b4(0, 3, 0);
        }
    } else if (c == -3) {
        p->b4 = 7;
        func_020103b4(0, 3, 0);
    } else {
        func_020103b4(0x15, 3, 0);
    }
end:
    if (unk_700 == 0x15 && func_0200f5b0() == 4) {
        func_0205e1a0(&pad_59c, 0xb, 3, 0);
    }
}

void Unk_0200b750::func_0200b750(Unk_0200b750_Pair *pr, s32 *out) {
    pr->unk_00 = unk_00;
    pr->unk_04 = unk_01;
    *out = unk_04;
}

void Unk_0200b750::func_0200b760(Unk_0200b750_Pair pr, s32 v) {
    unk_00 = pr.unk_00;
    unk_01 = pr.unk_04;
    unk_04 = v;
}

s32 Unk_02006d14::func_0200b76c(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c) {
    Unk_0200b76c_Msg m;
    s32 r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x18, b, c);
    m.unk_0c.func_0200b7bc(pr, a);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_0200b7bc::func_0200b7bc(Unk_0200b750_Pair pr, u32 v) {
    unk_04 = pr.unk_00;
    unk_05 = pr.unk_04;
    unk_00 = v;
}

void Unk_02006d14::func_0200b7c8() {
    func_0200b80c();
    func_0201071c();
    func_0200b7e4();
}

void Unk_02006d14::func_0200b7e4() {
    if (func_02056654(unk_2cc)) {
        func_0200bd60(5, 5, -1);
    }
}

void Unk_02006d14::func_0200b80c() {
    func_02010914();
    if (func_020565e8(unk_2cc, 6)) {
        func_02090330(0x50, unk_6dc, 0, 0);
        func_0200ecdc(0x68);
    }
}

s32 Unk_02006d14::func_0200b848(u32 v) {
    return func_0200b868(5, v);
}

void Unk_02006d14::func_0200b854(Unk_02006d14_Item *item, u32 old) {
    func_02010358(0x9d, 3, 0);
}

s32 Unk_02006d14::func_0200b868(u32 a, u32 b) {
    Unk_0200b868_Msg m;
    s32 r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x15, a, b);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_0200b8a0() {
    func_0200b908();
    func_0200ef08();
    func_0201071c();
    func_0200b8c0();
}

void Unk_02006d14::func_0200b8c0() {
    Unk_02006d14_7d0 *p = &unk_7d0;
    u8 *q = &p->c1;
    if (*q != 0) {
        *q = *q - 1;
    }
    if (unk_2e0 == 0 && *q == 0) {
        func_0200c358(data_020c61d0[p->c0 - 1], 5, -1);
    }
}

void Unk_02006d14::func_0200b908() {
    Unk_0200b908_Obj *p;
    u32 t = func_0205c240(unk_6fc);
    func_02019e34(unk_908, unk_6dc, unk_8e, t, (u32)(unk_2d4 << 4) >> 16);
    func_02010914();
    if (func_02056654(unk_2cc)) {
        p = unk_904;
        if (p->unk_0c != 0x137) {
            func_020103dc(0x12, 0, 0, 0x1000, 0, 0, p->unk_0c);
            func_0201a040(unk_908, p, 1);
        } else {
            func_0200bd60(data_020c61d0[unk_7d0.c0 - 1], 5, -1);
        }
    }
}

void Unk_02006d14::func_0200b9bc() {
    func_02019e2c(unk_908);
}

s32 Unk_02006d14::func_0200b9cc(s16 v) {
    u8 a, b;
    unk_8ec.func_0200ba78(&a, &b);
    return func_0200ba8c(a, b, 5, v);
}

void Unk_02006d14::func_0200ba00(Unk_02006d14_Item *item, u32 old) {
    u8 *q = item->unk_0c;
    u8 a = q[1];
    u8 b = q[0];
    Unk_0200b908_Obj *p;
    Unk_02006d14_7d0 *pp;
    unk_8ec.func_0200ba84(a, b);
    pp = &unk_7d0;
    pp->c0 = a;
    pp->c1 = b;
    p = (Unk_0200b908_Obj *)func_02018984(a);
    unk_904 = p;
    unk_92d = a;
    func_0201a040(unk_908, p, 0);
    func_020103dc(0x12, 5, p->unk_18, 0x1000, 0, 5, p->unk_00);
}

void Unk_0200b750::func_0200ba78(u8 *a, u8 *b) {
    *a = unk_01;
    *b = unk_00;
}

void Unk_0200b750::func_0200ba84(u8 a, u8 b) {
    unk_01 = a;
    unk_00 = b;
}

s32 Unk_02006d14::func_0200ba8c(u8 a, u8 b, u32 c, s16 d) {
    Unk_0200ba8c_Msg m;
    s32 r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x14, c, d);
    Unk_0200b750 *pl = &m.unk_0c;
    pl->unk_01 = a;
    pl->unk_00 = b;
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_0200bad0() {
    func_02010914();
    if (!func_020729bc(data_020cbb18, unk_7fc)) {
        func_0200ef08();
    }
    func_0201071c();
    func_0200bb08();
}

void Unk_02006d14::func_0200bb08() {
    if (func_02056654(unk_2cc)) {
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200c358(7, 5, -1);
    }
}

s32 Unk_02006d14::func_0200bb48(u32 v) {
    return func_0200bb68(5, v);
}

void Unk_02006d14::func_0200bb54(Unk_02006d14_Item *item, u32 old) {
    func_02010358(0x84, 3, 0);
}

BOOL Unk_02006d14::func_0200bb68(u32 a, u32 b) {
    Unk_0200b868_Msg m;
    BOOL r;
    if (unk_700 != 0x12) return TRUE;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x13, a, b);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_0200bbb0() {
    func_0200bcec();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0200bc78();
        func_020109c4();
        func_0201071c();
        func_0200bc08();
    } else {
        if (func_0200ef08() != 0) {
            func_020109c4();
        }
        func_0201071c();
    }
}

void Unk_02006d14::func_0200bc08() {
    Unk_0200bc08_Obj *p = 0;
    s16 tmp;
    void *o;
    if (unk_16c == 2) {
        p = *(Unk_0200bc08_Obj **)((u8 *)this + 0x138);
    } else if (unk_16c == 1) {
        if (data_021f47d8[1] & 0x400) {
            p = (Unk_0200bc08_Obj *)func_0203d608();
        }
    }
    if (p != 0) {
        tmp = p->unk_08;
        o = func_0208169c(&tmp);
        if (o != 0) {
            if ((*(s32 (**)(void *))(*(u32 *)o + 0xa0))(o) != -1) {
                func_0200b868(5, -1);
            }
        }
    }
}

void Unk_02006d14::func_0200bc78() {
    Unk_0200bc78_Obj *o;
    s16 res;
    s16 h;
    Unk_0200bc78_Vec d;
    Unk_02006d14_Vec *pv;
    s16 *pr;
    o = (Unk_0200bc78_Obj *)func_0203d608();
    pr = 0;
    if (func_0200ec44(0xe)) o = 0;
    if (o != 0) {
        Unk_02006d14_Vec *ov;
        pv = &unk_5c;
        ov = o->vfunc_50();
        func_0200bc78_sub(&d, ov, pv);
        res = func_020e7b98(d.x, d.z);
        pr = &res;
    }
    if (pr != 0) {
        h = unk_8e;
        func_02010d98(&h, *pr);
        func_02010a58(&h);
    }
}

void Unk_02006d14::func_0200bcec() {
    func_02010914();
    if (func_02056654(unk_2cc)) {
        func_020103b4(0, 3, 0);
    }
}

void Unk_02006d14::func_0200bd18(u32 v) {
    func_0200bd60(3, 5, v);
}

void Unk_02006d14::func_0200bd2c(Unk_02006d14_Item *item, u32 old) {
    u16 v = *(u16 *)&item->unk_0c[0];
    if (!func_0200ec44(0x17)) {
        func_020103b4(0, v, 0);
    }
    func_0200e870();
    func_0200ec1c(0x1d);
}

s32 Unk_02006d14::func_0200bd60(s16 a, u32 b, s32 c) {
    Unk_0200bd60_Msg m;
    s32 r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x10, b, c);
    m.unk_0c.func_0200bda0(a);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_0200bda0::func_0200bda0(s16 v) {
    unk_00 = v;
}

void Unk_02006d14::func_0200bda4() {
    func_0200bff8();
    func_0200be7c();
    func_0200be2c();
    func_0201071c();
    func_0200bdcc();
}

void Unk_02006d14::func_0200bdcc() {
    if (func_02056654(unk_2cc)) {
        unk_7f8 = func_02007c08(unk_7ec);
        s32 t = unk_7d8;
        if (t == 5) {
            func_0200c358(0, 5, -1);
        } else if (t == 0x10) {
            func_0200bd60(0, 5, -1);
        } else {
            func_02094c38();
        }
    }
}

