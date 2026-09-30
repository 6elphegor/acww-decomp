#include "types.h"

struct Unk_ov050_0225b908_Owner {
    u8 pad_00[0x72e];
    u16 unk_72e;
    u8 pad_730[0xa];
    u8 unk_73a;
};

struct Unk_ov050_0225b908_Out {
    u8 *unk_00;
    u8 unk_04;
};

struct Unk_ov050_0225b908_Obj {
    u8 pad_00[0x1c];
    Unk_ov050_0225b908_Obj();
    ~Unk_ov050_0225b908_Obj();
};

struct Unk_ov050_0225bc18_Buf {
    u16 v;
    u8 b;
    u8 pad;
};

struct Unk_ov050_0225c0a0_Msg {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
    u16 unk_04;
};

extern "C" {
extern u8 data_021dfd8c[];
extern u8 data_021d7350[];
extern u8 data_021e58a8[];
extern u32 data_0213a740[];
extern u8 data_ov050_0225e1c4[];
extern u8 data_ov050_0225e1a4[];

u32 func_0209750c();
u32 func_0209865c(u32 a);
u32 func_02099864(u32 a);
u32 func_0209a108(u32 a);
u16 *func_0209872c(u32 a);
u8 *func_02099db4(u32 a, s32 b);
u32 func_0209a4f0(u8 *a);
u8 *func_0209a4e4(u8 *a, s32 b);
s32 func_0209abc4(u32 a);
s32 func_0209ac64(u32 a);
BOOL func_0209a42c(u8 *a);
BOOL func_02099bc8(u32 a);
void func_0209abb4(u32 a, s32 b);
u16 *func_02098308(u32 a);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc(u32 a);
void func_02098f30(void *p, void *cb);
BOOL func_02099014(u16 *p, s32 a);
void func_02099be8(u32 a);
BOOL func_02098044(u32 a, s32 b);
u32 func_0209888c(u32 a);
BOOL func_02079678(void *a, u32 b);
void func_02002fc8(u8 *a, void *b);
void func_02067a3c(void *self, s32 a, void *obj);
void func_02067a84(void *self, void *buf, void *name);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_02014ce4(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02014e60(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02015958(void *self, void *p, s32 a, s32 b, s32 c, s32 d);
void func_0201578c(void *self, u16 *p, s32 a, s32 b);
s32 func_02063b8c(s32 a);
BOOL func_0206ed18();
s32 func_0206ed38();
u16 func_02099048(s32 a);
void func_02099064(s32 a);
BOOL func_0202e148();
s32 func_0206e72c();
void *func_0204bde8(u16 *p);
BOOL func_ov050_02258ed0(void *owner);
BOOL func_0209e170(void *g, s32 a);
void func_0209e120(void *g, s32 a);
void func_0209e148(void *g, s32 a);
BOOL func_020604d4(void *p);
s32 func_02060388(void *m);
s32 func_020604c4(void *m);
s32 func_02060308(void *m);
BOOL func_ov050_0225be74(u16 *p);
}

// Ordering matches the Unk_0202e2bc base (size 0xac) used by the sibling overlays.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u32 pad_04[0x38 / 4];
    void *unk_3c;
    u32 pad_40[(0xac - 0x40) / 4];
};

class Unk_ov050_0225e4b4 : public Unk_0202e2bc {
public:
    typedef void (Unk_ov050_0225e4b4::*Fn)();

    Unk_ov050_0225e4b4();
    virtual ~Unk_ov050_0225e4b4();
    virtual void vfunc_08();
    virtual void vfunc_88(Unk_ov050_0225b908_Out *out);
    virtual void vfunc_8c(Unk_ov050_0225b908_Out *out);
    virtual void vfunc_90(Unk_ov050_0225b908_Out *out);
    virtual void vfunc_94(Unk_ov050_0225b908_Out *out);
    virtual void vfunc_98(Unk_ov050_0225b908_Out *out);

    BOOL func_ov050_0225bd54(Unk_ov050_0225b908_Out *out);
    void func_ov050_0225bdc8();
    s32 func_ov050_0225bff8();
    void func_ov050_0225c000(s32 v);
    void func_ov050_0225c008(Unk_ov050_0225b908_Owner *owner);
    void func_ov050_0225c0a0();
    void func_ov050_0225c1a8();

    s32 unk_ac;
    Unk_ov050_0225b908_Owner *unk_b0;
    Fn unk_b4;
    u32 unk_bc;
    void *unk_c0;
    s32 unk_c4;
    s32 unk_c8;
};

static inline BOOL Unk_ov050_0225bd54_Same(u16 *p, u16 *t, u32 k) {
    if (func_0204b2d4(p)) {
        *t = k;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == k) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_0225bacc_Chk(u16 *p) {
    BOOL r = FALSE;
    if (func_02098eb0(p) >= 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov050_0225e4b4::vfunc_98(Unk_ov050_0225b908_Out *out) {
    if (!func_ov050_0225bd54(out)) {
        u32 g = func_0209750c();
        u8 *a = func_02099db4(func_0209865c(g), 0);
        u32 b = func_0209a4f0(a);
        u8 *c = func_0209a4e4(a, 1);
        Unk_ov050_0225b908_Obj o;
        if (func_0209abc4(b) == 2) {
            out->unk_04 = 0x28;
            return;
        }
        if (func_0209abc4(b) == 0) {
            u8 s = unk_b0->unk_73a;
            if (s == 0 || s == 2) {
                if (c) {
                    func_02002fc8(c, &o);
                    func_02067a3c(unk_3c, 0, &o);
                }
                out->unk_04 = 0x21;
                if (unk_b0->unk_73a == 2) {
                    unk_b0->unk_73a = 1;
                }
            } else {
                out->unk_04 = 0x10;
            }
            return;
        }
        if (func_0209abc4(b) == 1) {
            if (c) {
                func_02002fc8(c, &o);
                func_02067a3c(unk_3c, 0, &o);
            }
            out->unk_04 = 0x27;
            return;
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_94(Unk_ov050_0225b908_Out *out) {
    if (!func_ov050_0225bd54(out)) {
        if (func_0209abc4(func_0209a4f0(func_02099db4(func_0209865c(func_0209750c()), 0))) == 1) {
            out->unk_04 = 0x1e;
        } else if (unk_b0->unk_73a == 0) {
            out->unk_04 = 0x1c;
            unk_b0->unk_73a = 1;
        } else {
            out->unk_04 = 0x10;
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_90(Unk_ov050_0225b908_Out *out) {
    u32 g = func_0209750c();
    func_02098ffc(func_0209a4f0(func_02099db4(func_0209865c(g), 0)));
    if (!func_ov050_0225bd54(out)) {
        if (!(func_02098044(g, 10) && func_02079678(data_021dfd8c, func_0209888c(g)))) {
            if (unk_b0->unk_73a != 0) {
                out->unk_04 = 0x13;
            } else {
                out->unk_04 = 0x14;
            }
        } else {
            if (*func_02098308(func_0209750c()) == 0) {
                out->unk_04 = 0x15;
            } else {
                out->unk_04 = 0x16;
            }
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_8c(Unk_ov050_0225b908_Out *out) {
    u32 g = func_0209750c();
    u32 p = func_0209a4f0(func_02099db4(func_0209865c(g), 0));
    func_02098ffc(p);
    if (!func_ov050_0225bd54(out)) {
        BOOL k0 = FALSE, k1 = FALSE, k2 = FALSE, k3 = FALSE, k4 = FALSE;
        u16 l[5];
        s32 i;
        for (i = 0; i < 3; i++) {
            l[0] = 0x151d;
            if (func_02098eb0(&l[0]) >= 0 ? TRUE : k0) goto found;
            l[1] = 0x14fe + i;
            if (func_02098eb0(&l[1]) >= 0 ? TRUE : k1) goto found;
            l[2] = 0x1504 + i;
            if (func_02098eb0(&l[2]) >= 0 ? TRUE : k2) goto found;
            l[3] = 0x150a + i;
            if (func_02098eb0(&l[3]) >= 0 ? TRUE : k3) goto found;
            l[4] = 0x1510 + i;
            if (func_02098eb0(&l[4]) >= 0 ? TRUE : k4) {
            found:
                out->unk_04 = unk_b0->unk_73a + 0xf;
                unk_b0->unk_73a = 1;
                return;
            }
        }
        unk_b0->unk_73a = 1;
        if (func_02098044(g, 10) && func_02079678(data_021dfd8c, func_0209888c(g)) &&
            *func_02098308(func_0209750c()) != 0) {
            func_0209abb4(p, 1);
            out->unk_04 = 0x1a;
        } else {
            out->unk_04 = 0x11;
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_88(Unk_ov050_0225b908_Out *out) {
    u32 g = func_0209750c();
    u32 s0 = func_0209865c(g);
    u8 *a = func_02099db4(s0, 0);
    u32 r4 = func_0209a4f0(a);
    func_02098ffc(r4);
    u16 l[4];
    Unk_ov050_0225bc18_Buf r;
    if (func_0209ac64(r4) == 0xb && (u32)func_0209abc4(r4) >= 1 && func_0209a42c(a)) {
        if (!func_ov050_0225bd54(out)) {
            func_02098f30(&r, (void *)func_ov050_0225be74);
            if (r.b >= 7) {
                out->unk_04 = 8;
            } else {
                out->unk_04 = 9;
            }
        }
    } else if (func_0209ac64(r4) == 0xb && (u32)func_0209abc4(r4) >= 1) {
        u16 *p = func_0209872c(g);
        if (Unk_ov050_0225bd54_Same(p, &l[3], 0x11a8)) {
            out->unk_04 = 7;
        } else {
            l[0] = 0x11a8;
            BOOL n = func_02098eb0(&l[0]) < 0 ? TRUE : FALSE;
            if (n) {
                l[1] = 0x11a8;
                if (func_02099014(&l[1], 0)) {
                    out->unk_04 = 4;
                } else {
                    out->unk_04 = 2;
                }
            } else {
                out->unk_04 = 5;
            }
        }
    } else {
        l[2] = 0x11a8;
        if (func_02099014(&l[2], 0)) {
            func_02099be8(s0);
            out->unk_04 = 3;
        } else {
            out->unk_04 = 1;
        }
    }
}

BOOL Unk_ov050_0225e4b4::func_ov050_0225bd54(Unk_ov050_0225b908_Out *out) {
    u32 r4 = func_0209750c();
    if (func_02099bc8(func_0209865c(r4)) && r4) {
        u16 *p = func_0209872c(r4);
        u16 t;
        if (!Unk_ov050_0225bd54_Same(p, &t, 0x11a8)) {
            out->unk_04 = 0xe;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov050_0225e4b4::func_ov050_0225bdc8() {
    u16 l[6];
    l[0] = 0x14fe + func_02063b8c(3);
    func_02099014(&l[0], 0);
    l[1] = 0x1504 + func_02063b8c(3);
    func_02099014(&l[1], 0);
    l[2] = 0x150a + func_02063b8c(3);
    func_02099014(&l[2], 0);
    l[3] = 0x1510 + func_02063b8c(3);
    func_02099014(&l[3], 0);
    s32 i;
    for (i = 0; i < 3; i++) {
        l[4] = 0x151d;
        func_02099014(&l[4], 0);
    }
    l[5] = 0x151d;
    func_02014e60(this, &l[5], 0, 5, 0);
}

extern "C" BOOL func_ov050_0225be74(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov050_0225be88() {
    u8 *g = data_021d7350;
    u8 *const m = data_021e58a8;
    s32 r5 = func_02060388(m);
    s32 r4 = func_020604c4(m);
    s32 r6 = func_02060308(m);
    if (func_0209e170(g, 0xe)) {
        return 0;
    }
    if (r5 == 0 && r4 == 0 && !func_020604d4(g + 0xe558)) {
        return 0x41;
    }
    if (r4 == 1 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x49;
    }
    if (r5 == 0 && r4 == 1 && !func_020604d4(g + 0xe558)) {
        return 0x4a;
    }
    if (r4 == 2 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x4b;
    }
    if (r5 == 0 && r4 == 2 && !func_020604d4(g + 0xe558)) {
        return 0x4c;
    }
    if (r4 == 3 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x4d;
    }
    if (r5 == 0 && r4 == 3 && !func_020604d4(g + 0xe558)) {
        return 0x4e;
    }
    if (r4 == 4 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x4f;
    }
    if (r5 == 0 && r4 == 4 && !func_020604d4(g + 0xe558)) {
        return 0x50;
    }
    if (r4 == 5 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x51;
    }
    if (r5 == 0 && r4 == 5 && !func_020604d4(g + 0xe558)) {
        return 0x52;
    }
    if (r4 == 6 && r6 != 0) {
        func_0209e120(data_021d7350, 0xd);
        return 0x53;
    }
    if (r5 == 0 && r4 == 6 && !func_020604d4(g + 0xe558)) {
        func_0209e148(data_021d7350, 0xe);
        return 0x54;
    }
    return 0;
}

s32 Unk_ov050_0225e4b4::func_ov050_0225bff8() {
    return unk_ac;
}

void Unk_ov050_0225e4b4::func_ov050_0225c000(s32 v) {
    unk_ac = v;
}

void Unk_ov050_0225e4b4::func_ov050_0225c008(Unk_ov050_0225b908_Owner *owner) {
    vfunc_08();
    unk_b0 = owner;
    unk_c8 = -1;
}

void Unk_ov050_0225e4b4::vfunc_08() {
    Unk_0202e2bc::vfunc_08();
    unk_b4 = *(Fn *)data_0213a740;
}

Unk_ov050_0225e4b4::~Unk_ov050_0225e4b4() {}

Unk_ov050_0225e4b4::Unk_ov050_0225e4b4() {}

void Unk_ov050_0225e4b4::func_ov050_0225c0a0() {
    void *o = unk_3c;
    Unk_ov050_0225c0a0_Msg m;
    m.unk_00 = 4;
    if (func_0206ed18()) {
        u32 r7 = func_0209750c();
        if (func_0202e148()) {
            s32 r6 = func_0206ed38();
            m.unk_02 = func_02099048(r6);
            if (r6 >= 0) {
                func_02099064(r6);
            }
            if (!Unk_ov050_0225bd54_Same(&m.unk_02, &m.unk_04, 0xfff1)) {
                func_02014ce4(this, &m.unk_02, 2, 5, 0);
            }
            m.unk_00 = 3;
            func_0209abb4(func_0209a108(func_02099864(func_0209865c(r7))), 1);
        }
    }
    if (func_ov050_02258ed0(unk_b0)) {
        func_02067a84(o, &m, data_ov050_0225e1c4);
    } else {
        func_02067a84(o, &m, data_ov050_0225e1a4);
    }
}

extern "C" BOOL func_ov050_0225c180(u16 *p, s32 m) {
    if (m == 2) {
        BOOL r = FALSE;
        if (*p >= 0x155f && *p <= 0x1560) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov050_0225e4b4::func_ov050_0225c1a8() {
    void *o = unk_3c;
    Unk_ov050_0225c0a0_Msg m;
    m.unk_00 = 0x1b;
    if (func_0206ed18() == 1) {
        unk_b0->unk_72e = func_0206e72c();
        u16 *p = &unk_b0->unk_72e;
        if (!Unk_ov050_0225bd54_Same(p, &m.unk_02, 0xfff1)) {
            unk_c0 = func_0204bde8(&unk_b0->unk_72e);
            if (unk_c0) {
                func_02015958(this, unk_c0, 0, 10, 1, 0);
                func_0201578c(this, &unk_b0->unk_72e, 1, 7);
                m.unk_00 = 0x1a;
            }
        }
    }
    if (func_ov050_02258ed0(unk_b0)) {
        func_02067a84(o, &m, data_ov050_0225e1c4);
    } else {
        func_02067a84(o, &m, data_ov050_0225e1a4);
    }
}
