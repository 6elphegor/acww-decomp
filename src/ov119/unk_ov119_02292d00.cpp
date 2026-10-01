#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_02098680(s32 p);
s32 func_0209750c();
s32 func_02076c8c(s32 p);
s32 func_02076c84(s32 p);
u64 func_02076c94(s32 p);
void *func_02076cf0(void *p);
s32 func_02076f04(void *p);
s32 func_02076ce8(void *p);
s32 func_02076cec(void *p);
s32 func_02076e20(void *p);
s32 func_02076f28(void *p, void *q);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206f9fc(void *p, s32 a);
void func_0206f994(void *p, void *s, s32 n);
void func_020a78a4(void *dst, void *src, s32 n);
void func_020a7aa0(void *a, void *b, s32 c, s32 d);
void func_020b3544(s32 a, void *p);
void func_020b3558(void *p, void *q, s32 a);
s32 func_020a6b9c(void *p, s32 i);
void func_020a7a64(void *a, s32 b);
void func_020a7c3c(void *p);
void func_020a7bd8(void *a, void *b);
void func_02063888(void *p);
void func_02063870(void *p);
void func_02063830(void *p);
void func_02063818(void *p);
void func_02094030(void *p);
void func_02094018(void *p);
void func_020940d0(s32 a, void *p);
s32 func_0209409c(s32 a);
s32 func_0209888c(s32 a);
void func_020638d0(s32 a, void *p);
s32 func_02097520(s32 a);
BOOL func_02072e44(void *p);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_02202098(void *p, u32 v);
void func_ov002_0220160c(void *p, void *q, u32 v);
void func_ov002_02202278(void *p, u32 a, u32 b);
struct Unk_ov119_Comm {
    u32 unk_00[0x64 / 4];
    s32 unk_64;
};
extern Unk_ov119_Comm *data_020cbb18;
extern u8 data_021edb68;
}

class Unk_ov119_sub_02202454 {
public:
    ~Unk_ov119_sub_02202454();
    u8 unk_00[0x300];
};

class Unk_ov119_sub_0206fca8 {
public:
    ~Unk_ov119_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov119_sub_02077160 {
public:
    ~Unk_ov119_sub_02077160();
    u32 unk_00[0xd4 / 4];
};

class Unk_ov119_sub_02202640 {
public:
    virtual ~Unk_ov119_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov119_sub_022043e8 {
public:
    ~Unk_ov119_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};


struct Unk_ov119_A {
    u32 pad[7];
    Unk_ov119_A() { func_02063888(this); }
    ~Unk_ov119_A() { func_02063870(this); }
};
struct Unk_ov119_B {
    u32 pad[7];
    Unk_ov119_B() { func_02094030(this); }
    ~Unk_ov119_B() { func_02094018(this); }
};

struct Unk_ov119_C {
    u32 pad[6];
    Unk_ov119_C() { func_02063830(this); }
    ~Unk_ov119_C() { func_02063818(this); }
};

// Vtable 0x02295840
class Unk_ov119_02295840 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov119_02295840();

    void func_ov119_02292dc0(u32 mask);
    void func_ov119_02292dd0(u32 mask);
    BOOL func_ov119_02292de0(u32 mask);
    void func_ov119_02292df4();
    void func_ov119_02292e2c();
    void func_ov119_02292e5c();
    void func_ov119_02292ea4();
    void func_ov119_02292ecc(u32 x);
    void func_ov119_02292f20();
    u8 func_ov119_02292f8c(u32 idx);
    void func_ov119_02292f98();
    u32 func_ov119_02293010(s32 idx);
    void func_ov119_0229305c(u8 s);
    void func_ov119_022930d4();
    void func_ov119_02293124();
    void func_ov119_022932ac(u16 *p, u32 v);
    void func_ov119_02293328();
    void func_ov119_022933d8();
    void func_ov119_0229348c();
    BOOL func_ov119_022935fc(void *p);

    // out-of-range callees (declarations only)
    void func_ov119_02294364();
    void func_ov119_02293dc8();
    void func_ov119_02293e10();
    void func_ov119_02293d9c(u32 a);
    void func_ov119_02293d4c();
    void func_ov119_02293c44();
    void func_ov119_022945a4();
    void *func_ov119_02293810();
    void *func_ov119_02294504();
    void func_ov119_0229448c(u32 a);

    /* 0x91 */ u8 unk_91[7];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 unk_9a[2];
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e[2];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[12];
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0[2];
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4[8];
    /* 0xbc */ u8 unk_bc[0x20];
    /* 0xdc */ Unk_ov119_sub_02202454 unk_dc;
    /* 0x3dc */ Unk_ov119_sub_0206fca8 unk_3dc[0x13];
    /* 0x89c */ Unk_ov119_sub_02077160 unk_89c;
    /* 0x970 */ Unk_ov119_sub_02202640 unk_970;
    /* 0x9d4 */ u16 unk_9d4[0x800];
    /* 0x19d4 */ void *unk_19d4;
    /* 0x19d8 */ u8 unk_19d8[0xec];
    /* 0x1ac4 */ Unk_ov119_sub_022043e8 unk_1ac4;
};

// ---------------------------------------------------------------------------------------------

Unk_ov119_02295840::~Unk_ov119_02295840() {}

void Unk_ov119_02295840::func_ov119_02292dc0(u32 mask) { unk_98 = unk_98 & ~mask; }

void Unk_ov119_02295840::func_ov119_02292dd0(u32 mask) { unk_98 = unk_98 | mask; }

BOOL Unk_ov119_02295840::func_ov119_02292de0(u32 mask) {
    if (unk_98 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02292df4() {
    unk_b3 = unk_b3 + 1;
    u8 c = unk_b3;
    if (c == 10) {
        func_ov119_02292e5c();
    } else if (c >= 0x19) {
        func_ov119_02292e2c();
        unk_b3 = 0;
    }
}

void Unk_ov119_02295840::func_ov119_02292e2c() {
    func_0206ee80(unk_9d4, 3, 6, 4, 0x15, 3);
    func_ov119_02292dd0(2);
}

void Unk_ov119_02295840::func_ov119_02292e5c() {
    s32 i;
    func_ov119_02292e2c();
    for (i = 0; i < 8; i++) {
        if (unk_b2 & (1 << i)) {
            func_0206ee80(unk_9d4, 3, i * 2 + 6, 4, i * 2 + 7, 5);
        }
    }
}

void Unk_ov119_02295840::func_ov119_02292ea4() {
    unk_ad = 10;
    func_ov119_02294364();
    func_ov002_02202064(&unk_dc, 0);
    func_ov002_02200a58(0xc);
}

void Unk_ov119_02295840::func_ov119_02292ecc(u32 x) {
    func_ov002_0220160c(&unk_dc, (u8 *)this + 0x3d0, x);
    u32 r;
    if (unk_a0 == 0x16) {
        r = 0x9c;
    } else {
        r = 0xb8;
    }
    func_ov002_02202278(&unk_dc, 0x100, r);
    func_ov002_02202098(&unk_dc, 0);
    func_ov002_02200a58(10);
    func_ov119_02292dc0(0x10);
}

void Unk_ov119_02295840::func_ov119_02292f20() {
    switch (unk_ad) {
    case 1:
        func_ov119_02293dc8();
        break;
    case 0:
        func_ov119_02293e10();
        break;
    case 2:
        func_ov119_02293d9c(9);
        break;
    case 3:
        func_ov119_02293d9c(0xb);
        break;
    case 4:
        func_ov119_02293d9c(0xd);
        break;
    case 5:
        func_ov119_02293d4c();
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        func_ov119_02293c44();
        break;
    case 10:
    default:
        func_ov119_022945a4();
        break;
    }
}

u8 Unk_ov119_02295840::func_ov119_02292f8c(u32 idx) { return *((u8 *)this + idx + 0x3d5); }

void Unk_ov119_02295840::func_ov119_02292f98() {
    s32 p = func_0209750c();
    s32 i;
    if ((func_02076c8c(func_02098680(p)) & func_02076c84(func_02098680(p))) == 0) {
        for (i = 0; i < 12; i++) {
            unk_a1[i] = 10;
        }
    } else {
        u64 v = func_02076c94(func_02098680(p));
        for (i = 11; i >= 0; i--) {
            unk_a1[i] = (u8)(v % 10);
            v = v / 10;
        }
    }
}

u32 Unk_ov119_02295840::func_ov119_02293010(s32 idx) {
    u8 *base = (u8 *)func_ov119_02293810();
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(base + i * 0x1c))) {
            cnt++;
            if (i >= idx) {
                i = 0x20;
            }
        }
    }
    if (cnt > 0) {
        return ((u32)(cnt - 1) << 21) >> 24;
    }
    return 0;
}

void Unk_ov119_02295840::func_ov119_0229305c(u8 s) {
    if (s != unk_9c) {
        unk_9d = s;
        unk_9c = s;
        u8 t = unk_9c;
        if (t == 5) {
            func_ov119_0229448c(0xeb);
            unk_19d4 = unk_9d4;
        } else if (t == 4) {
            func_ov119_0229448c(0xea);
            unk_19d4 = &unk_9d4[0x400];
        } else {
            func_ov119_0229448c(0xcd);
            unk_19d4 = unk_9d4;
        }
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
    }
}

void Unk_ov119_02295840::func_ov119_022930d4() {
    unk_b2 = 0;
    unk_b3 = 0;
    func_ov119_02292e2c();
    unk_af = 0;
    u8 t = unk_9c;
    switch (t) {
    case 5:
        func_ov119_0229348c();
        break;
    case 4:
        func_ov119_022933d8();
        break;
    default:
        func_ov119_02292dd0(4);
        func_ov119_02293124();
        break;
    }
}

void Unk_ov119_02295840::func_ov119_02293124() {
    s32 i;
    u8 *recs;
    void *a;
    void *b;
    recs = (u8 *)func_ov119_02293810();
    s32 base = unk_9c << 3;
    s32 x = 0x1ce;
    s32 y = 0x14e;
    s32 pos = 0xc3;
    Unk_ov119_A A;
    Unk_ov119_C B;
    for (i = 0; i < 8; i++) {
        a = func_ov119_02294504();
        b = func_ov119_02294504();
        s32 idx = unk_bc[base];
        u8 *rec;
        if (idx < 0x20) {
            rec = recs + idx * 0x1c;
        } else {
            rec = 0;
        }
        if (rec != 0 && func_02076f04(func_02076cf0(rec))) {
            func_020a78a4(&B, (void *)func_02076ce8(rec), 8);
            func_020a7aa0(&A, &B, 0, 0);
            func_020b3544(0, &A);
            func_0206f9fc(a, 0x66);
            func_0206f994(b, (void *)func_02076cec(rec), 8);
            unk_af = unk_af + 1;
            if (func_02076e20(func_02076cf0(rec))) {
                func_ov119_022932ac(&unk_9d4[pos], 0x50);
            } else {
                func_ov119_022932ac(&unk_9d4[pos], 0x54);
            }
        } else {
            func_020a7c3c(a);
            func_020a7c3c(b);
            func_ov119_022932ac(&unk_9d4[pos], 0x10);
        }
        func_0206fb9c(a, 4, x, 10, 0xf, 0, 0);
        func_0206fab4(a, 0, 0);
        func_0206fb9c(b, 4, y, 8, 0xf, 0, 0);
        func_0206fab4(b, 0, 0);
        x += 0x14;
        y += 0x10;
        base++;
        pos += 0x40;
    }
}

void Unk_ov119_02295840::func_ov119_022932ac(u16 *p, u32 v) {
    p[0] = p[0] & ~0x3ff;
    p[0] = p[0] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[1] = p[1] & ~0x3ff;
    p[1] = p[1] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x20] = p[0x20] & ~0x3ff;
    p[0x20] = p[0x20] | v;
    if (v != 0x10) {
        v = (u16)(v + 1);
    }
    p[0x21] = p[0x21] & ~0x3ff;
    p[0x21] = p[0x21] | v;
}

void Unk_ov119_02295840::func_ov119_02293328() {
    u8 ch = data_021edb68;
    s32 p = func_0209750c();
    s32 i;
    if (func_02076c8c(func_02098680(p)) == 0) {
        ch = 0xd4;
    } else if (func_02076c84(func_02098680(p)) == 0) {
        ch = 0xec;
    } else {
        ch = 0xd5;
    }
    func_020b3558(&unk_89c, &ch, 0);
    for (i = 0; i < 3; i++) {
        void *o = func_ov119_02294504();
        func_020a7a64(o, func_020a6b9c((u8 *)this + 0x8ae, i));
        func_0206fb9c(o, 4, i * 0x28 + 0x8a, 0x14, 0xf, 0, 0);
        func_0206fab4(o, 0, 0);
    }
}

void Unk_ov119_02295840::func_ov119_022933d8() {
    s32 g = func_0209888c(func_0209750c());
    void *a = func_ov119_02294504();
    Unk_ov119_A A;
    func_020638d0(func_0209409c(g), &A);
    func_020b3544(0, &A);
    func_0206f9fc(a, 0x66);
    func_0206fb9c(a, 4, 0x102, 10, 0xf, 0, 0);
    func_0206fab4(a, 0, 0);
    void *b = func_ov119_02294504();
    Unk_ov119_B B;
    func_020940d0(g, &B);
    func_020a7bd8(b, &B);
    func_0206fb9c(b, 4, 0x116, 8, 0xf, 0, 0);
    func_0206fab4(b, 0, 0);
}

void Unk_ov119_02295840::func_ov119_0229348c() {
    s32 x = 0x1ce;
    s32 i;
    s32 y = 0x14e;
    s32 rec;
    s32 cur;
    void *a;
    void *b;
    Unk_ov119_Comm *g;
    s32 pos = 0xc3;
    g = data_020cbb18;
    cur = g->unk_64;
    s32 n = 0;
    Unk_ov119_A A;
    Unk_ov119_B B;
    for (i = 0; i < 8; i++) {
        a = func_ov119_02294504();
        b = func_ov119_02294504();
        rec = 0;
        if (func_02072e44(g)) {
            if (cur == n) {
                n++;
            }
            if (n < 4) {
                rec = func_02097520(n);
                n++;
            }
        }
        if (rec != 0) {
            s32 g2 = func_0209888c(rec);
            func_020638d0(func_0209409c(g2), &A);
            func_020b3544(0, &A);
            func_0206f9fc(a, 0x66);
            func_020940d0(g2, &B);
            func_020a7bd8(b, &B);
            func_ov119_022932ac(&unk_9d4[pos], 0x58);
            unk_b2 = unk_b2 | (1 << i);
        } else {
            func_020a7c3c(a);
            func_020a7c3c(b);
            func_ov119_022932ac(&unk_9d4[pos], 0x10);
        }
        func_0206fb9c(a, 4, x, 10, 0xf, 0, 0);
        func_0206fab4(a, 0, 0);
        func_0206fb9c(b, 4, y, 8, 0xf, 0, 0);
        func_0206fab4(b, 0, 0);
        x += 0x14;
        y += 0x10;
        pos += 0x40;
    }
    func_0206ee80(unk_9d4, 5, 6, 0x17, 0x15, 5);
}

BOOL Unk_ov119_02295840::func_ov119_022935fc(void *p) {
    u8 *r = (u8 *)func_ov119_02293810();
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (func_02076f04(func_02076cf0(r))) {
            if (func_02076f28(p, func_02076cf0(r))) {
                return TRUE;
            }
        }
        r += 0x1c;
    }
    return FALSE;
}
