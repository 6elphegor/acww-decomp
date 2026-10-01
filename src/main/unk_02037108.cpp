#include "types.h"

struct Unk_02037674_V3 {
    s32 x, y, z;
};
struct Unk_02037638_S8 {
    s32 a, b;
};

class Unk_02037108;
class Unk_020376f4;

extern "C" {
s32 func_020b50e8(void);
void func_0204df30(char *);
void func_0205c18c(s32, s32);
void func_02037074(Unk_02037108 *);
void func_02036fa4(Unk_02037108 *);
void *func_020641ec(void *, void *, s32, void *);
void func_020e8558(void *);
void *func_020e8628(void *, s32, s32);
void func_02115fb4(void *, s32, s32);
s32 func_0209c06c(s32);
s32 func_020303d0(s32, s32, s32, s32);
void func_02119d78(void *);
s32 func_02119a28(void *, char *);
void func_021198b4(void *, void *, s32);
void func_021199e0(void *);
void func_02115468(s32);
s32 func_020eaf18(void);
s32 func_0207235c(void *);
s32 func_020ea748(void);
u32 func_02072374(void *);
void func_02072380(void *, s32);
void func_020382fc(void);
void func_0204fe98(void);
void func_02073154(void);
s32 func_0207238c(void *);
void func_020a7bd8(void *, void *);
s32 func_02133150(s32, s32);

extern char data_021e3680[];
extern u8 data_020c8ba4[];
extern u32 data_020c8bd8[];
extern u32 data_021c21e0;
extern u8 *data_021c21dc;
extern char data_020d8ff4[];
extern void *data_021f482c;
extern char data_020d9004[];
extern u8 data_021c21e4[];
extern void *data_021c620c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern void *data_020cbb18;
extern u8 data_021c2408[];
extern u8 data_021c22f4[];
extern u8 data_021c22a0[];
}


struct Unk_0203718c_Ent {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20, unk_24, unk_28, unk_2c;
};
struct Unk_0203718c_Ent2 {
    u32 unk_00, unk_04;
};

class Unk_02037108 {
public:
    BOOL func_02037108(u32 flag);
    void func_0203718c();
    Unk_02037108 *func_02037234();

    Unk_0203718c_Ent unk_000[31];
    Unk_0203718c_Ent2 unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    u32 unk_61c;
    u32 unk_620;
    u32 unk_624;
    u32 unk_628;
    u32 unk_62c;
    u32 unk_630;
    u32 unk_634;
    u32 unk_638;
    u32 unk_63c;
    u32 unk_640;
};

BOOL Unk_02037108::func_02037108(u32 flag) {
    s32 t = func_020b50e8();
    if (t == 0x2c) {
        func_0204df30(data_021e3680);
    }
    func_0203718c();
    unk_618 = flag;
    t = func_020b50e8();
    u32 v;
    if ((u32)t < 0x33) {
        v = data_020c8ba4[t];
    } else {
        v = 0xac;
    }
    unk_61c = (u8)v << 10;
    func_0205c18c(unk_61c, 0);
    if (flag != 0 || t == 0xb || t == 0x2f || (u8)(t + 0xf4) <= 2) {
        func_02037074(this);
    }
    if (flag != 0) {
        func_02036fa4(this);
    }
    return TRUE;
}

void Unk_02037108::func_0203718c() {
    Unk_0203718c_Ent *p; Unk_0203718c_Ent2 *q; u32 i; u32 j;
    p = unk_000;
    for (i = 0; i < 0x1f; p++, i++) {
        p->unk_00 = 0xffff;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0c = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1c = 0;
        p->unk_10 = 0;
        p->unk_20 = 0;
        p->unk_28 = 0;
        p->unk_2c = 0;
    }
    q = unk_5d0;
    for (j = 0; j < 9; q++, j++) {
        q->unk_00 = 0xffff;
        q->unk_04 = 0;
    }
    unk_630 = 0;
    unk_634 = 0;
    unk_638 = 0;
    unk_63c = 0;
    unk_640 = 0;
    unk_618 = 0;
    unk_61c = 0;
    unk_620 = 0;
    unk_624 = 0;
    unk_628 = 0;
    unk_62c = 0;
}

extern "C" void func_02037230() {}

Unk_02037108 *Unk_02037108::func_02037234() {
    func_0203718c();
    return this;
}

extern "C" void *func_02037244(void *a, void *b) {
    return func_020641ec(a, data_021c620c, 4, b);
}

extern "C" u32 func_02037310(s32 i);
extern "C" u32 func_02037358(u32 i);

extern "C" u8 func_02037260(u32 x) {
    u32 m = func_02037310(x);
    if (m & 0x7f000) {
        u8 n = 0;
        if (m & 0x1000) n++;
        if (m & 0x2000) n++;
        if (m & 0x4000) n++;
        if (m & 0x8000) n++;
        if (m & 0x10000) n++;
        if (m & 0x20000) n++;
        if (m & 0x40000) n++;
        return n;
    }
    return 0;
}

extern "C" u32 func_02037310(s32 i) {
    if (i < 0x37) {
        return data_020c8bd8[i];
    }
    return 0;
}

extern "C" u32 func_02037324(u32 x) {
    return func_02037310(func_02037358(x));
}

extern "C" u32 func_02037338(u32 v) {
    u32 *p = data_020c8bd8;
    u32 i;
    for (i = 0; i < 0x37; i++) {
        if (v == *p++) {
            return i;
        }
    }
    return 0x36;
}

extern "C" u32 func_02037358(u32 i) {
    if (i < data_021c21e0) {
        return data_021c21dc[i];
    }
    return 0;
}

extern "C" BOOL func_02037374() {
    func_020e8558(data_021c21dc);
    data_021c21dc = 0;
    return TRUE;
}

extern "C" BOOL func_02037394() {
    data_021c21dc = (u8 *)func_020641ec(data_020d8ff4, data_021f482c, 4, &data_021c21e0);
    return TRUE;
}

extern "C" BOOL func_0203740c(void *, u16 *p, s32 bit);
extern "C" BOOL func_0203742c(void *, u16 *p, s32 bit);

extern "C" BOOL func_020373c4(void *base, u32 a, u32 b) {
    BOOL r = FALSE;
    if (a < 0x10 && b < 0x10) {
        r = func_0203740c(base, (u16 *)base + b, a);
    }
    return r;
}

extern "C" BOOL func_020373e8(void *base, u32 a, u32 b) {
    BOOL r = FALSE;
    if (a < 0x10 && b < 0x10) {
        r = func_0203742c(base, (u16 *)base + b, a);
    }
    return r;
}

extern "C" BOOL func_0203740c(void *, u16 *p, s32 bit) {
    BOOL r = FALSE;
    if (bit >= 0 && bit < 0x10) {
        *p &= ~(1 << bit);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_0203742c(void *, u16 *p, s32 bit) {
    BOOL r = FALSE;
    if (bit >= 0 && bit < 0x10) {
        *p |= (1 << bit);
        r = TRUE;
    }
    return r;
}

extern "C" void func_0203744c(void *p) {
    func_02115fb4(p, 0, 0x20);
}

extern "C" void func_02037458() {}
extern "C" void func_0203745c() {}

extern "C" void func_02037460(s32 *a, s32 *b, s32 v) {
    *a = v & 0xf;
    *b = (v >> 4) & 0xf;
}

struct Unk_02037478 {
    u32 unk_00;
    u8 pad_04[0x20];
    void *unk_24;
};

extern "C" BOOL func_02037478(Unk_02037478 *o, u32 a, u32 b) {
    BOOL r = FALSE;
    if (o->unk_24 != 0) {
        r = func_020373c4(o->unk_24, a, b);
    }
    return r;
}

extern "C" BOOL func_02037494(Unk_02037478 *o, u32 a, u32 b) {
    BOOL r = FALSE;
    if (o->unk_24 != 0) {
        r = func_020373e8(o->unk_24, a, b);
    }
    return r;
}

extern "C" u32 func_020374e8(Unk_02037478 *o);

extern "C" BOOL func_020374b0(Unk_02037478 *o, u32 mask) {
    if ((mask & func_020374e8(o)) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020374cc(Unk_02037478 *o, u32 mask) {
    u32 m = mask & func_020374e8(o);
    if (mask == m) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_020374e8(Unk_02037478 *o) {
    return func_02037324(o->unk_00);
}

struct Marker1 {
    u16 v;
};

extern "C" u16 *func_02037558(void *cell, u32 x, u32 y, u32 z);

static inline BOOL Unk_020374f4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" void func_02037460(s32 *a, s32 *b, s32 v);

extern "C" BOOL func_020374f4(void *cell, s32 *a, s32 *b, Marker1 *m, Marker1 *c, u8 d) {
    u16 *p = func_02037558(cell, 0, 0, d);
    BOOL found = FALSE;
    if (p != 0) {
        s32 i;
        for (i = 0; i < 0x100; i++) {
            if (Unk_020374f4_Range(p, m->v, c->v)) {
                func_02037460(a, b, i);
                found = TRUE;
                break;
            }
            p++;
        }
    }
    return found;
}

extern "C" BOOL func_02037590(void *cell, u16 *t, u32 x, u32 y, u8 z) {
    u16 *p = func_02037558(cell, x, y, z);
    BOOL r = FALSE;
    if (p != 0) {
        *p = *t;
        r = TRUE;
    }
    return r;
}

class Unk_020375d0 {
public:
    s32 func_020375bc();
    u32 func_020375d0();
    void func_020375d4(u32 v);
    u8 *func_020375d8();
    u32 unk_00;
};

s32 Unk_020375d0::func_020375bc() {
    return func_0209c06c(func_020375d0());
}

u32 Unk_020375d0::func_020375d0() { return unk_00; }
void Unk_020375d0::func_020375d4(u32 v) { unk_00 = v; }
u8 *Unk_020375d0::func_020375d8() { return (u8 *)this + 4; }

struct Unk_02037618_Sub {
    u8 pad_00[0xc];
    u32 unk_0c;
};

class Unk_02037618 {
public:
    void func_020376a8();
    void func_02037618(Unk_02037618_Sub *s, u32 t, u32 u);
    void func_02037674(s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, s32 k4, s32 k5, u32 k6);

    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_02037674_V3 unk_0c;
    s32 unk_18[2];
    Unk_02037618_Sub *unk_20;
    s32 unk_24;
};

extern "C" Unk_02037618 *func_020375dc(s32 n, void *heap, s32 x) {
    Unk_02037618 *p = (Unk_02037618 *)func_020e8628(heap, n * 0x28, x);
    if (p != 0) {
        s32 i;
        for (i = 0; i < n; i++) {
            Unk_02037618 *o = p + i;
            if (o != 0) {
                o->func_020376a8();
            }
        }
    }
    return p;
}

void Unk_02037618::func_02037618(Unk_02037618_Sub *s, u32 t, u32 u) {
    unk_20 = s;
    if (unk_20 != 0) {
        t = unk_20->unk_0c;
    }
    if (t != 0) {
        func_020303d0(unk_04, unk_08, t, u);
    }
}

extern "C" void func_02037638(Unk_02037618 *self, s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, Unk_02037638_S8 *k45, u32 k6) {
    Unk_02037674_V3 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    self->func_02037674(a, &t, b, k0, k1, k2, k3, k45->a, k45->b, k6);
}

void Unk_02037618::func_02037674(s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, s32 k4, s32 k5, u32 k6) {
    unk_00 = a;
    unk_0c.x = v->x;
    unk_0c.y = v->y;
    unk_0c.z = v->z;
    unk_18[0] = b;
    unk_18[1] = k0;
    unk_24 = k1;
    unk_04 = k4;
    unk_08 = k5;
    func_02037618(k2, k3, k6);
}

void Unk_02037618::func_020376a8() {
    unk_04 = 0;
    unk_08 = 0;
    for (s32 i = 0; i < 2; i++) {
        unk_18[i] = 0;
    }
}

extern "C" void func_020376c0() {
    u8 buf[0x4c];
    func_02119d78(buf);
    if (func_02119a28(buf, data_020d9004) == 1) {
        func_021198b4(buf, data_021c21e4, 0x20);
        func_021199e0(buf);
    }
}

class Unk_020376f4 {
public:
    void func_020376f4();
    void func_0203771c();
    void func_02037734();
    void func_020377c4();
    void func_020377f4();
    void func_02037810();
    void func_02037840();
    void func_020378f0();
    void func_02037924();
    void func_02037954();
    void func_02037978();
    void func_020379b0();
    void func_020379c8();
    void func_02037a04();
    void func_02037a20();
    void func_02037ab4();
    void func_02037ac8();
    void func_02037b10();
    void func_02037b90(s32, s32);
    void func_02037ce4();
    void func_02037d94();
    void func_02037dc8(s32);

    u8 pad_00[0xbc];
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    u8 unk_c8;
    u8 unk_c9;
    u8 pad_ca[0xe0 - 0xca];
    s32 unk_e0;
    s32 unk_e4;
    u8 unk_e8[0x114];
};

void Unk_020376f4::func_020376f4() {
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        func_02115468(0);
    }
}

void Unk_020376f4::func_0203771c() {
    unk_bc = 7;
    unk_c0 = 1;
    unk_c8 = 1;
}

void Unk_020376f4::func_02037734() {
    if (unk_c4 < 4) {
        func_02037b90(unk_c4, 1);
        func_02037ce4();
        func_02037dc8(unk_c4);
        unk_c4 = unk_c4 + 1;
    }
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        BOOL b, a;
        if (data_021f4770 != 0 && data_021f4774 != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
        b = (data_021f47d8[1] & 1) ? TRUE : FALSE;
        if (a != 0 || b != 0) {
            func_0203771c();
        }
    }
}

void Unk_020376f4::func_020377c4() {
    unk_bc = 6;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = -1;
    unk_c0 = 0x14;
}

void Unk_020376f4::func_020377f4() {
    func_020a7bd8(&unk_e8, data_021c2408);
    func_020377c4();
}

void Unk_020376f4::func_02037810() {
    unk_bc = 5;
    unk_c8 = 1;
    func_02037d94();
    func_02037ab4();
    func_020382fc();
    func_0204fe98();
    func_02073154();
}

void Unk_020376f4::func_02037840() {
    s32 q = func_02133150(unk_c0 + 0x13, 0x14);
    BOOL changed;
    if (unk_e4 != q) {
        changed = TRUE;
    } else {
        changed = FALSE;
    }
    unk_e4 = q;
    if (unk_c4 < 4) {
        func_02037b90(unk_c4, 0);
        func_02037ce4();
        func_02037dc8(unk_c4);
        unk_c4 = unk_c4 + 1;
    } else if (changed) {
        func_02037b90(3, 0);
        func_02037ce4();
        func_02037dc8(3);
    }
    if (unk_c9 == 0) {
        func_02037a04();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= -0x14) {
            func_02037810();
        }
    }
}

void Unk_020376f4::func_020378f0() {
    unk_bc = 4;
    unk_c0 = 0x12c;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = 0xf;
}

void Unk_020376f4::func_02037924() {
    func_020a7bd8(&unk_e8, data_021c22f4);
    func_020a7bd8((u8 *)this + 0x1fc, data_021c22a0);
    func_020378f0();
}

void Unk_020376f4::func_02037954() {
    unk_bc = 3;
    unk_c8 = 0;
    func_02037d94();
    func_02037b10();
}

void Unk_020376f4::func_02037978() {
    if (unk_c9 == 0) {
        func_02037a04();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= 0) {
            func_02037954();
        }
    }
}

void Unk_020376f4::func_020379b0() {
    unk_bc = 2;
    unk_c0 = 0x14;
    unk_c8 = 0;
}

void Unk_020376f4::func_020379c8() {
    if (unk_c9 != 0) {
        if ((func_0207238c(data_020cbb18) & 0x7c) != 0) {
            func_02037b10();
            func_02037810();
        } else {
            func_020379b0();
        }
    }
}

void Unk_020376f4::func_02037a04() {
    unk_bc = 1;
    unk_c8 = 0;
    func_02037ac8();
}

extern "C" void func_02037a1c() {}

void Unk_020376f4::func_02037a20() {
    unk_bc = 0;
}

extern "C" void func_02037a28() {
    s32 s = func_020eaf18();
    if (s != 0 && s != 6) {
        s32 r4 = func_0207235c(data_020cbb18);
        s32 v = func_020ea748();
        if ((r4 == 0 && v != 0 && v != 0x800c && v != 0x400b) ||
            (r4 == 1 && v != 0 && v != 0x80ff && v != 0x800c && v != 0x4006 && v != 0x400a && v != 0x400b)) {
            void *o = data_020cbb18;
            u32 f = func_02072374(o) | 0x10;
            func_02072380(o, f);
        }
    }
}

#pragma thumb off
extern "C" u16 *func_02037558(void *cell, u32 x, u32 y, u32 z) {
    u16 *r = 0;
    if (z < 2 && x < 0x10 && y < 0x10) {
        u16 *t = (u16 *)((Unk_02037618 *)cell)->unk_18[z];
        if (t != 0) {
            r = t + (x + y * 16);
        }
    }
    return r;
}
#pragma thumb reset
