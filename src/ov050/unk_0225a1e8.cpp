#include "types.h"

struct Unk_ov050_0225a888_Owner {
    u8 pad_00[8];
    s32 unk_08;
    u16 unk_0c;
    u8 pad_0e[0x72e - 0xe];
    u16 unk_72e;
};

struct Unk_ov050_0225a888_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov050_0225a888_Buf {
    u8 lo : 2;
    u8 b : 3;
    u8 c : 3;
    u8 unk_01;
};

struct Unk_ov050_0225a888_Bytes {
    u8 b[4];
};

struct Unk_ov050_0225a288_Data;

extern "C" {
extern u8 data_ov050_0225da4c[];
extern u8 data_ov050_0225da5c[];
extern u8 data_ov050_0225daac[];
extern u8 data_ov050_0225dab0[];
extern u8 data_ov050_0225e83c[];
extern char data_ov050_0225e1a4[];
extern char data_ov050_0225e1b4[];
extern char data_ov050_0225e1c4[];
extern char data_ov050_0225e1d4[];
extern u8 data_021e58a8[];
extern u8 data_021edb5c[];
extern u8 data_021ed104[];
extern u8 data_021d7350[];
extern void *data_020cbb18;

u32 func_0209750c();
u32 func_0209865c(u32 a);
u32 func_02099864(u32 a);
s32 func_02098044(u32 h, u32 a);
void func_0209801c(u32 h, u32 a);
void func_02067a1c(void *o, s32 a, void *b, void *c);
void func_02067a84(void *o, void *b, void *c);
void func_020602cc(void *g, s32 a);
void func_02060340(void *g);
void func_02060430(void *g, u32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204bd80(u16 *p);
BOOL func_0202e148();
BOOL func_0202e18c(void *o, void *out, s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_ov050_02258ed0(void *o);
void *func_ov050_02259398(void *o);
void func_0201ad4c(void *a, s32 b);
s32 func_0212a438(const char *s);
s32 func_0212a15c(const char *a, const char *b, s32 n);
void func_02099014(u16 *p, s32 a);
void *func_02002d3c(void *p, s32 a);
s32 func_ov050_0225d1d4(void *p, s32 a);
u32 func_02099db4(u32 a, u32 b);
void *func_0209a4f0();
BOOL func_0209ad68(void *p);
s32 func_0209ac64(void *p);
BOOL func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_02098eb0(u16 *p);
BOOL func_02099f98(u32 a, u16 *p);
void *func_020aeac4(void *g);
s32 func_020ae02c(void *g);
void func_0209cf88(void *o);
s32 func_0209cd00(void *o, void *p);
u8 *func_02087c7c(void *p);
void *func_0209868c(u32 h);
BOOL func_0209e170(void *g, s32 a);
void func_0209e148(void *g, s32 a);
BOOL func_020ae8fc(void *g);
u32 func_020aea38(void *g);
BOOL func_020aeb14(void *g);
BOOL func_020aeb80(void *g);
BOOL func_020aeac8(void *g);
}

class Unk_ov050_0225e4b4;
typedef void (Unk_ov050_0225e4b4::*Unk_ov050_0225e4b4_Fn)();
typedef void (Unk_ov050_0225e4b4::*Unk_ov050_0225e4b4_ArgFn)(s32);

struct Unk_ov050_0225a6e0_Row {
    u32 id;
    Unk_ov050_0225e4b4_Fn f;
};

class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(s32 a);
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
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88(Unk_ov050_0225a888_Out *out);

    void func_02014e60(u16 *p, s32 a, s32 b, s32 c);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
    void func_02015848(u32 a, u32 b);
    void func_02015878(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    void func_0201578c(u16 *p, s32 a, s32 b);

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0x6c];
};

class Unk_ov050_0225e4b4 : public Unk_0202e2bc {
public:
    Unk_ov050_0225e4b4();
    virtual ~Unk_ov050_0225e4b4();
    virtual void vfunc_14();
    virtual void vfunc_18(s32 a);
    virtual void vfunc_78(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_8c(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_90(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_94(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_98(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_9c(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_a0(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_a4(Unk_ov050_0225a888_Out *out);
    virtual void vfunc_a8();

    void func_ov050_0225a288(s32 row, s32 col);
    void func_ov050_0225a2c0();
    void func_ov050_0225a2d0();
    void func_ov050_0225a570();
    void func_ov050_0225a634();
    void func_ov050_0225a658();
    void func_ov050_0225a66c();
    void func_ov050_0225a690();
    void func_ov050_0225a69c();

    // out of range
    void func_ov050_02259838(s32 a);
    void func_ov050_022598e0(s32 a);
    void func_ov050_02259f18(s32 a);
    void func_ov050_0225c000(s32 a);
    void func_ov050_0225c4fc(s32 a);
    u8 func_ov050_0225be88();

    s32 unk_ac;
    Unk_ov050_0225a888_Owner *unk_b0;
    u8 pad_b4[0xc0 - 0xb4];
    s32 unk_c0;
    u8 pad_c4[4];
    s32 unk_c8;
    s32 unk_cc;
};

static inline BOOL Unk_ov050_0225a2d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov050_0225a2d0_Same(u16 *p) {
    u16 t;
    if (func_0204b2d4(p)) {
        t = 0xfff1;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_0225a888_Same(u16 *p, u16 *t) {
    if (func_0204b2d4(p)) {
        *t = 0xfff1;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_0225a888_Eq(u32 v, u32 k) {
    return v == k ? TRUE : FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov050_0225e4b4::vfunc_18(s32 a) {
    static Unk_ov050_0225e4b4_ArgFn tbl[3] = {
        &Unk_ov050_0225e4b4::func_ov050_02259f18,
        &Unk_ov050_0225e4b4::func_ov050_022598e0,
        &Unk_ov050_0225e4b4::func_ov050_02259838,
    };
    s32 i = 0;
    u32 h = func_0209750c();
    func_0209865c(h);
    if (func_02098044(h, 1)) {
        i = 2;
    } else if (unk_ac == 0xf) {
        i = 1;
    }
    (this->*tbl[i])(a);
}

void Unk_ov050_0225e4b4::func_ov050_0225a288(s32 row, s32 col) {
    u8 *q = data_ov050_0225da4c + row * 4;
    u8 v = q[col];
    u8 b = v;
    func_02067a1c(unk_3c, 2, &b, data_ov050_0225e83c);
    func_020602cc(data_021e58a8, v);
}

void Unk_ov050_0225e4b4::func_ov050_0225a2c0() {
    func_02060340(data_021e58a8);
}

void Unk_ov050_0225e4b4::func_ov050_0225a634() {
    func_02015170(0x3e, 0);
    func_020151d0(2);
    func_ov050_0225c4fc(1);
}

void Unk_ov050_0225e4b4::func_ov050_0225a658() {
    func_0201ad4c(unk_b0, unk_c0);
}

void Unk_ov050_0225e4b4::func_ov050_0225a66c() {
    func_02015170(0x1d, 0);
    func_020151d0(2);
    func_ov050_0225c4fc(0);
}

void Unk_ov050_0225e4b4::func_ov050_0225a690() {
    unk_c8 = -2;
}

void Unk_ov050_0225e4b4::func_ov050_0225a69c() {
    u16 a = 0x4a30;
    func_02014e60(&a, 0, 5, 0);
    u16 b = 0x4a30;
    func_02099014(&b, 0);
    unk_c8 = -1;
    unk_cc = 0x38;
}

void Unk_ov050_0225e4b4::func_ov050_0225a2d0() {
    u16 *p = &unk_b0->unk_72e;
    if (Unk_ov050_0225a2d0_Same(p)) {
        return;
    }
    u32 h = func_0209750c();
    if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x1369, 0x1369) && func_02098044(h, 0x29) == 0) {
        unk_cc = 0x24;
        func_0209801c(h, 0x29);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x1376, 0x1376) && func_02098044(h, 0x2a) == 0) {
        unk_cc = 0x25;
        func_0209801c(h, 0x2a);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x1374, 0x1374) && func_02098044(h, 0x2b) == 0) {
        unk_cc = 0x26;
        func_0209801c(h, 0x2b);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x136b, 0x1372) && func_02098044(h, 0x2c) == 0) {
        unk_cc = 0x27;
        func_0209801c(h, 0x2c);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x1378, 0x1378) && func_02098044(h, 0x2d) == 0) {
        unk_cc = 0x28;
        func_0209801c(h, 0x2d);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x137a, 0x137a) && func_02098044(h, 0x2e) == 0) {
        unk_cc = 0x29;
        func_0209801c(h, 0x2e);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x151f, 0x151f) && func_02098044(h, 0x2f) == 0) {
        unk_cc = 0x39;
        func_0209801c(h, 0x2f);
    } else if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x156c, 0x156c) && func_02098044(h, 0x37) == 0) {
        unk_cc = 0x10;
        func_0209801c(h, 0x37);
    }
    if (unk_cc == 0xff) {
        if (func_0202e148()) {
            if (func_ov050_02258ed0(unk_b0)) {
                if (func_02098044(h, 0x38) == 0) {
                    unk_cc = 0x30;
                    func_0209801c(h, 0x38);
                    return;
                }
            }
        }
    }
    func_02067a84(unk_3c, data_021edb5c, 0);
}

void Unk_ov050_0225e4b4::func_ov050_0225a570() {
    u16 *p = &unk_b0->unk_72e;
    if (Unk_ov050_0225a2d0_Same(p)) {
        return;
    }
    if (Unk_ov050_0225a2d0_R(&unk_b0->unk_72e, 0x1521, 0x1530)) {
        unk_cc = 0x2f;
        BOOL r = FALSE;
        u32 v = unk_b0->unk_72e;
        if (v >= 0x1521 && v <= 0x1530) {
            r = TRUE;
        }
        s32 idx;
        if (r) {
            idx = v - 0x1521;
        } else {
            idx = -1;
        }
        func_02060430(data_021e58a8, (u8)idx);
    } else {
        unk_cc = 0x23;
    }
}

void Unk_ov050_0225e4b4::vfunc_14() {
    u32 h = func_0209750c();
    func_0209865c(h);
    if (func_02098044(h, 1)) {
        vfunc_a8();
        return;
    }
    if (func_ov050_02258ed0(unk_b0)) {
        if (func_0212a15c((char *)this + 4, data_ov050_0225e1c4, func_0212a438(data_ov050_0225e1c4)) != 0) {
            return;
        }
    }
    const char *name = func_ov050_02258ed0(unk_b0) ? data_ov050_0225e1c4 : data_ov050_0225e1a4;
    unk_cc = 0xff;
    static Unk_ov050_0225a6e0_Row tbl[13] = {
        {0x37, &Unk_ov050_0225e4b4::func_ov050_0225a69c},
        {0x36, &Unk_ov050_0225e4b4::func_ov050_0225a690},
        {0x07, &Unk_ov050_0225e4b4::func_ov050_0225a66c},
        {0x13, &Unk_ov050_0225e4b4::func_ov050_0225a658},
        {0x18, &Unk_ov050_0225e4b4::func_ov050_0225a634},
        {0x22, &Unk_ov050_0225e4b4::func_ov050_0225a570},
        {0x23, &Unk_ov050_0225e4b4::func_ov050_0225a2d0},
        {0x49, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
        {0x4b, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
        {0x4d, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
        {0x4f, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
        {0x51, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
        {0x53, &Unk_ov050_0225e4b4::func_ov050_0225a2c0},
    };
    u32 i = 0;
    u8 *q = &unk_1e;
    goto test;
loop:
    {
        u32 off = i * 12;
        u32 a = *(u32 *)((u8 *)tbl + off);
        u32 b = *q;
        if (a == b) {
            Unk_ov050_0225a6e0_Row *r = (Unk_ov050_0225a6e0_Row *)((u32)tbl + off);
            (this->*r->f)();
        }
    }
    i++;
test:
    if (i < 13) goto loop;
    if (unk_cc != 0xff) {
        u8 c = unk_cc;
        func_02067a84(unk_3c, &c, (void *)name);
    }
}

void Unk_ov050_0225e4b4::vfunc_78(Unk_ov050_0225a888_Out *out) {
    s32 flag;
    u32 x;
    Unk_ov050_0225a888_Buf l;
    u16 w0, w4, w6, w8, wa, t0, t1, t2, t3;
    Unk_ov050_0225a888_Bytes s, v, o1, o2, c;
    u32 h = func_0209750c();
    u32 r7 = func_02099864(func_0209865c(h));
    x = func_0209865c(h);
    if (func_02098044(h, 1)) {
        func_02099db4(x, 0);
        void *ev = func_0209a4f0();
        u32 t = unk_b0->unk_0c;
        if (Unk_ov050_0225a888_Eq(t, 0x75) || Unk_ov050_0225a888_Eq(t, 0x74)) {
            out->unk_00 = data_ov050_0225e1a4;
            out->unk_04 = 3;
            return;
        }
        out->unk_00 = data_ov050_0225e1d4;
        u16 *p = &unk_b0->unk_72e;
        if (!Unk_ov050_0225a888_Same(p, &t0)) {
            unk_b0->unk_72e = 0xfff1;
            out->unk_04 = 0xb;
            return;
        }
        if (unk_ac == 0x1e) {
            out->unk_04 = 0xc;
            unk_ac = 5;
            return;
        }
        out->unk_04 = 0;
        if (!func_0209ad68(ev)) {
            return;
        }
        if (func_0209ac64(ev) == 0x12) {
            vfunc_a4(out);
        }
        if (func_0209ac64(ev) == 0x11) {
            vfunc_a0(out);
        }
        if (func_0209ac64(ev) == 0x10) {
            vfunc_9c(out);
        }
        if (func_0209ac64(ev) == 0xf) {
            vfunc_98(out);
        }
        if (func_0209ac64(ev) == 0xe) {
            vfunc_94(out);
        }
        if (func_0209ac64(ev) == 0xd) {
            vfunc_90(out);
        }
        if (func_0209ac64(ev) == 0xc) {
            vfunc_8c(out);
        }
        if (func_0209ac64(ev) == 0xb) {
            vfunc_88(out);
        }
        return;
    }
    if (func_ov050_02258ed0(unk_b0) && unk_ac == 5 && !func_02072e44(data_020cbb18) && *func_0209c37c(0, 0x4a) == 0) {
        if (unk_c8 == -1) {
            w0 = 0x36fc;
            unk_c8 = func_02098eb0(&w0);
        }
        if (unk_c8 >= 0) {
            unk_ac = 0xe;
        } else {
            w4 = 0xd019;
            if (func_02099f98(r7, &w4) || (w6 = 0xd01a, func_02099f98(r7, &w6)) || (w8 = 0xd01b, func_02099f98(r7, &w8)) ||
                (wa = 0xd01c, func_02099f98(r7, &wa))) {
                unk_ac = 0x10;
            } else if (func_0202e18c(unk_b0, &l, 3)) {
                out->unk_00 = data_ov050_0225e1b4;
                out->unk_04 = (data_ov050_0225da5c + l.b * 6)[l.c];
                func_ov050_0225c000(0xf);
                return;
            }
        }
    }
    if (unk_ac == 0 || unk_ac == 0x11) {
        flag = 0;
        if (unk_ac == 0) {
            out->unk_00 = data_ov050_0225e1c4;
            if (func_02098044(h, 0x26) == 0) {
                v = *(Unk_ov050_0225a888_Bytes *)func_020aeac4(data_021ed104);
                func_0209cf88(&o1);
                out->unk_04 = 0;
                if (v.b[3] == 0) {
                    s32 r = func_0209cd00(&o1, &v);
                    if (unk_b0->unk_08 == 0xd01a && func_02098044(h, 0x24) == 0 && r == 0) {
                        out->unk_04 = func_020ae02c(data_021ed104) + 0x59;
                    }
                    if (unk_b0->unk_08 == 0xd01b && func_020ae02c(data_021ed104) == 2 && func_02098044(h, 0x25) == 0 && r == 0) {
                        out->unk_04 = func_020ae02c(data_021ed104) + 0x59;
                    }
                    if (unk_b0->unk_08 == 0xd01c && func_020ae02c(data_021ed104) == 3 && func_02098044(h, 0x26) == 0 && r == 0) {
                        out->unk_04 = func_020ae02c(data_021ed104) + 0x59;
                    }
                    switch (func_020ae02c(data_021ed104)) {
                    case 3:
                        func_0209801c(h, 0x26);
                    case 2:
                        func_0209801c(h, 0x25);
                    case 1:
                        func_0209801c(h, 0x24);
                    }
                    if (out->unk_04 != 0) {
                        return;
                    }
                }
            }
            if (func_02098044(h, 3) == 0) {
                u8 *q = func_02087c7c(func_0209868c(h));
                if (q[2] != 0 || q[1] != 0) {
                    func_0209cf88(&o2);
                    if (func_0209cd00(&o2, q)) {
                        out->unk_04 = 0x3b;
                        func_0209801c(h, 3);
                        return;
                    }
                }
            }
            if (func_0209e170(data_021d7350, 0x10) == 0) {
                out->unk_04 = func_ov050_0225be88();
                if (out->unk_04 != 0) {
                    func_0209e148(data_021d7350, 0x10);
                    return;
                }
            }
            if (func_0202e1cc(0, 0) == 0) {
                if (func_020ae8fc(data_021ed104)) {
                    u32 t = func_020aea38(data_021ed104);
                    s.b[0] = t;
                    t = (u32)(t >> 8);
                    s.b[1] = t;
                    t = (u32)(t >> 8);
                    s.b[2] = t;
                    t = (u32)(t >> 8);
                    s.b[3] = t;
                    c = s;
                    func_02015878(c.b[1], 7);
                    func_02015848(c.b[0], 8);
                    func_ov050_0225c000(7);
                    flag = 1;
                    func_0202e1cc(0, flag);
                }
            }
        }
        if (flag == 0) {
            if (func_020aeb14(data_021ed104)) {
                if (unk_ac == 0) {
                    func_ov050_0225c000(2);
                } else {
                    func_ov050_0225c000(0x1a);
                }
            } else if (func_020aeb80(data_021ed104)) {
                if (unk_ac == 0) {
                    func_ov050_0225c000(3);
                } else {
                    func_ov050_0225c000(0x1b);
                }
            } else if (func_020aeac8(data_021ed104)) {
                if (unk_ac == 0) {
                    func_ov050_0225c000(4);
                } else {
                    func_ov050_0225c000(0x1c);
                }
            }
        }
    } else {
        u16 *p = &unk_b0->unk_72e;
        if (!Unk_ov050_0225a888_Same(p, &t1)) {
            switch (unk_ac) {
            case 0xc:
            case 0xd:
            case 0x18:
            case 0x19: {
                if (!Unk_ov050_0225a888_Same(&unk_b0->unk_72e, &t2)) {
                    s32 idx;
                    BOOL r = FALSE;
                    if (unk_b0->unk_72e >= 0x1521 && unk_b0->unk_72e <= 0x1530) {
                        r = TRUE;
                    }
                    if (r) {
                        idx = unk_b0->unk_72e - 0x1521;
                    } else {
                        idx = -1;
                    }
                    l.unk_01 = idx;
                    func_02067a1c(unk_3c, 2, &l.unk_01, data_ov050_0225e83c);
                }
            }
            case 8:
            case 9:
            case 0xa:
            case 0xb:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
                if (!Unk_ov050_0225a888_Same(&unk_b0->unk_72e, &t3)) {
                    unk_c0 = func_0204bd80(&unk_b0->unk_72e);
                    func_02015958(unk_c0, 4, 10, 1, 0);
                    func_0201578c(&unk_b0->unk_72e, 1, 7);
                }
                break;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
                break;
            }
        }
    }
    if (unk_ac >= 0 && unk_ac < 0x1f) {
        out->unk_04 = data_ov050_0225dab0[unk_ac * 8];
        out->unk_00 = *(void **)(data_ov050_0225daac + unk_ac * 8);
        if (unk_ac == 0x12) {
            void *r = func_02002d3c(func_ov050_02259398(unk_b0), 0);
            if (r) {
                func_ov050_0225d1d4(r, 0xc);
            }
        }
    }
}
