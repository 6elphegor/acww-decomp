#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_02022608_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_02022608_Ent {
    Unk_02022608_Rec *unk_00;
    u8 unk_04;
};

struct Unk_02022608_Time {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02022bb4_Pair {
    u32 unk_00;
    u32 unk_04;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0209d498(void *);
void *func_0204f0f4(u32);
void func_020228b0(void *, s32, u16 *, s32, Unk_02022608_Ent **, s32);
void *func_0204f234(u32, void *);
s32 func_0202c2d0(void *, s32 *, s32 *, s32 *, void *);
s32 func_02022880(s32);
s32 func_0202c7c0(void *, s32 *, s32 *, s32 *, void *);
s32 func_0202c120(s32);
void func_0201578c(void *, void *, u32, u32);
void func_0201577c(void *, u32, void *, void *, void *);
s32 func_0209948c(u32);
void func_0209750c();
void *func_0209865c();
void func_02099f1c(void *);
void func_020289f8(void *, void *);
void func_0206e8b8(void *);
void func_02099e88(void *, void *, void *);
void func_0207e310(void *);
void func_02078578();
void func_0209ad80();
void func_0207a624(void *);

void func_02116048(void *, void *, u32);
void func_0209d374_dummy();
s32 func_0209d374(void *, void *);
void func_0202d1d4(void *, void *);
s32 func_0207c618(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_02015170(void *, u32, u32);
void func_020151d0(void *, u32);
}

extern Unk_0201d2d0_Data data_020c75d8;
extern Unk_0201d2d0_Data data_020c75e0;
extern Unk_0201d2d0_Data data_020c7728;
extern Unk_0201d2d0_Data data_020c7980;
extern Unk_0201d2d0_Data data_020c7990;
extern Unk_0201d2d0_Data data_020c75f0;
extern Unk_0201d2d0_Data data_020c7740;
extern Unk_0201d2d0_Data data_020c75f8;
extern Unk_0201d2d0_Data data_020c79d8;
extern Unk_0201d2d0_Data data_020c79e8;
extern Unk_0201d2d0_Data data_020c7a00;
extern Unk_0201d2d0_Data data_020c7768;
extern Unk_0201d2d0_Data data_020c7778;
extern Unk_0201d2d0_Data data_020c7788;
extern Unk_0201d2d0_Data data_020c7590;
extern u8 data_020d8ab4[];
extern u8 data_020d8ac4[];
extern u8 data_021dfd8c[];
extern u8 data_021bf8ec[];
extern u8 data_021bf91c[];
extern u8 data_021bf904[];
extern u8 data_021bf934[];
extern Unk_0201d2d0_Fn data_020d79d0;
extern Unk_0201d2d0_Fn data_020d7be8;

class Unk_0201d2d0 {
public:
    BOOL func_02022608();
    BOOL func_0202265c();
    BOOL func_020226b0();
    BOOL func_02022704();
    BOOL func_02022758();
    s32 func_020227ac();
    void func_020228b0(s32 a, u16 *p, s32 c, Unk_02022608_Ent **arr, s32 last);
    s32 func_02022994();
    void func_02022a6c(Unk_0201d2d0_Out *out);
    void func_02022acc(Unk_0201d2d0_Out *out);
    void func_02022b40(Unk_0201d2d0_Out *out);
    void func_02022bb4();
    void func_02022c14(Unk_0201d2d0_Out *out);
    void func_02022ca0(Unk_0201d2d0_Out *out);
    void func_02022d00(Unk_0201d2d0_Out *out);
    void func_02022d60(Unk_0201d2d0_Out *out);
    void func_02022dc0();
    void func_02022e8c();
    void func_02022eb4(Unk_0201d2d0_Out *out);
    void func_0202d294(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xfc - 0xb4];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x156 - 0x11f];
    u16 unk_156;
};

BOOL Unk_0201d2d0::func_02022608() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75d8.unk_00, data_020c75d8.unk_04, 0, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_0202265c() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75e0.unk_00, data_020c75e0.unk_04, 0, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_020226b0() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7728.unk_00, data_020c7728.unk_04, 0, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_02022704() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7980.unk_00, data_020c7980.unk_04, 0, 0);
    return TRUE;
}

BOOL Unk_0201d2d0::func_02022758() {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7990.unk_00, data_020c7990.unk_04, 0, 0);
    return TRUE;
}

void Unk_0201d2d0::func_02022a6c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75f8.unk_00, data_020c75f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022acc(Unk_0201d2d0_Out *out) {
    func_0209750c();
    u8 *p = (u8 *)func_0209865c();
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79d8.unk_00, data_020c79d8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_02099f1c(p + 0x88);
}

void Unk_0201d2d0::func_02022b40(Unk_0201d2d0_Out *out) {
    func_0209750c();
    u8 *p = (u8 *)func_0209865c();
    func_020289f8(this, p + 0xa0);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79e8.unk_00, data_020c79e8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022bb4() {
    func_0209750c();
    u8 *p = (u8 *)func_0209865c();
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    func_0206e8b8(&s);
    func_02099e88(p + 0x88, func_020805c4(unk_fc->unk_82c), &s);
    func_0207e310(unk_fc->unk_82c);
    func_02078578();
    func_0209ad80();
    func_0207a624(data_021dfd8c);
}

void Unk_0201d2d0::func_02022c14(Unk_0201d2d0_Out *out) {
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    func_0206e8b8(&s);
    func_020289f8(this, &s);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7a00.unk_00, data_020c7a00.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
    func_0202d294(data_020d79d0);
}

void Unk_0201d2d0::func_02022ca0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7768.unk_00, data_020c7768.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022d00(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7778.unk_00, data_020c7778.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022d60(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7788.unk_00, data_020c7788.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022eb4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7590.unk_00, data_020c7590.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02022e8c() {
    func_02015170(this, 0x31, 0);
    func_020151d0(this, 2);
    func_0202d33c(data_020d7be8);
}

s32 func_02022880(s32 v) {
    s32 r = 0;
    switch (v) {
    case 0:
    case 2:
    case 4:
        r = 0;
        break;
    case 5:
    case 6:
        r = 1;
        break;
    case 1:
    case 3:
        r = 2;
        break;
    }
    return r;
}

s32 Unk_0201d2d0::func_020227ac() {
    struct {
        u16 unk_00;
        u16 pad_02;
        u32 unk_04;
        u32 unk_08;
        s32 a, b, c;
    } l;
    s32 r;
    void *q;
    r = 0;
    l.unk_04 = 0;
    l.unk_08 = 0;
    l.a = 5;
    l.unk_00 = 0xfff1;
    l.b = 0;
    l.c = 0;
    func_0209d498(&l.unk_04);
    u32 x = ((u8 *)&l)[8];
    q = func_0204f0f4(((u8 *)&l)[7]);
    q = func_0204f234(x, q);
    if (q && func_0202c2d0(&l, &l.a, &l.b, &l.c, q) == 1) {
        r = (l.a >= 3 ? 1 : r) * 3 + func_02022880(l.b);
        func_0201578c(this, &l, 0, 7);
        ::func_020228b0(this, l.c, &l.unk_00, l.a, *(Unk_02022608_Ent ***)q, 1);
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75f0.unk_00, data_020c75f0.unk_04, r, 0);
        r = 1;
    }
    return r;
}

void Unk_0201d2d0::func_020228b0(s32 a, u16 *p, s32 c, Unk_02022608_Ent **arr, s32 last) {
    Unk_02022608_Ent **pp = arr;
    s32 idx;
    s32 x = (u8)a;
    if (pp) {
        BOOL ok = FALSE;
        u16 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            ok = TRUE;
        }
        if (ok && c <= 1) {
            Unk_02022608_Ent *e;
            Unk_02022608_Rec *rec;
            s32 i, j, k;
            if (v >= 0x12e8 && v <= 0x131f) {
                idx = v - 0x12e8;
            } else {
                idx = -1;
            }
            i = 0;
            j = 0;
            k = 0;
            for (; i < 3; pp++, i++) {
                e = *pp;
                if (e) {
                    for (j = 0; j < 2; e++, j++) {
                        rec = e->unk_00;
                        if (rec) {
                            for (k = 0; k < e->unk_04; rec++, k++) {
                                if (rec->unk_00 == idx && func_0209948c(rec->unk_02) <= 1) {
                                    break;
                                }
                            }
                            if (e->unk_04 < k) {
                                break;
                            }
                        }
                    }
                    if (j == 2) {
                        break;
                    }
                }
            }
            if (i == 3) {
                x = 3;
            }
        }
    }
    u8 buf[2];
    buf[0] = x;
    buf[1] = 0;
    func_0201577c(this, last, buf, data_020d8ab4, &buf[1]);
}

s32 Unk_0201d2d0::func_02022994() {
    struct {
        u8 buf[2];
        u16 h;
        u32 t0;
        u32 t1;
        s32 a, b, c;
    } l;
    s32 r = 0;
    l.t0 = 0;
    l.t1 = 0;
    l.a = 5;
    l.h = 0xfff1;
    l.b = 0;
    l.c = 0;
    func_0209d498(&l.t0);
    if (func_0202c7c0(&l.h, &l.a, &l.b, &l.c, &l.t0) == 1) {
        if (l.a >= 3) {
            r = 1;
        }
        r = r * 3 + func_0202c120(l.b);
        func_0201578c(this, &l.h, 0, 7);
        if (l.c >= 3) {
            l.c--;
        }
        l.buf[0] = l.c;
        l.buf[1] = 0;
        func_0201577c(this, 3, l.buf, data_020d8ac4, &l.buf[1]);
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7740.unk_00, data_020c7740.unk_04, r, 0);
        r = 1;
    }
    return r;
}

void Unk_0201d2d0::func_02022dc0() {
    struct {
        u8 unk_00;
        u8 pad_01[3];
        u32 a0;
        u32 a1;
        u32 b0;
        u32 b1;
        Unk_0201d2d0_Out o;
    } l;
    l.a0 = 0;
    l.a1 = 0;
    l.b0 = 0;
    l.b1 = 0;
    func_0209d498(&l.b0);
    func_02116048(&l.b0, &l.a0, 8);
    func_0206e8b8(&l.a0);
    if (func_0209d374(&l.b0, &l.a0) <= 30) {
        func_0202d1d4(this, data_021bf8ec);
    } else if (func_0207c618(unk_fc->unk_82c, &l.a0) != 0) {
        func_0202d1d4(this, data_021bf91c);
    } else if (((u8 *)&l)[6] < 6) {
        func_0202d1d4(this, data_021bf904);
    } else {
        func_0202d1d4(this, data_021bf934);
    }
    if (unk_ac) {
        (this->*unk_ac)(&l.o);
    }
    l.unk_00 = l.o.unk_04;
    func_02067a84(unk_3c, &l.unk_00, l.o.unk_00);
}
