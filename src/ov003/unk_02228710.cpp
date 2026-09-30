#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_02228710_Vec {
    s32 x, y, z;
};

// Actor object (entity), 0x25c bytes; table data_ov003_02259354.
struct Unk_ov003_02228710_Act {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1c;
    u8 pad_20[0x30];
    u8 unk_50[0x9c];
    u8 unk_ec[0x44];
    u8 unk_130[0x40];
    s32 unk_170;
    u8 unk_174[0x60];
    Unk_ov003_02228710_Vec unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    Unk_ov003_02228710_Vec unk_204;
    Unk_ov003_02228710_Vec unk_210;
    s32 unk_21c;
    s32 unk_220;
    s32 unk_224;
    s32 unk_228;
    u8 pad_22c[4];
    u8 unk_230[2];
    u16 unk_232;
    u8 pad_234[2];
    u16 unk_236;
    s16 unk_238;
    s16 unk_23a;
    s16 unk_23c;
    u16 unk_23e;
    u8 pad_240[2];
    u16 unk_242;
    u16 unk_244;
    u8 pad_246[2];
    u8 unk_248;
    u8 unk_249;
    u8 unk_24a;
    u8 pad_24b;
    u8 unk_24c;
    s8 unk_24d;
    u8 unk_24e;
    u8 pad_24f;
    u8 unk_250;
    u8 unk_251;
    u8 unk_252;
    u8 pad_253;
    u8 unk_254;
    u8 unk_255;
    u8 unk_256;
    u8 unk_257;
    u8 unk_258;
    u8 unk_259;
    u8 pad_25a[2];
};

class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    u32 unk_00[6];
};

class Unk_ov003_0222e708 {
public:
    Unk_ov003_0222e708();
    ~Unk_ov003_0222e708();
};

class Unk_ov003_02234abc : public Unk_020d8c7c, public Unk_ov003_0222e708 {
public:
    Unk_ov003_02234abc();
    virtual ~Unk_ov003_02234abc();
    virtual BOOL vfunc_00();

    BOOL func_022288dc(Unk_ov003_02228710_Act *e);
    BOOL func_02228924(s32 id, s32 idx);
    BOOL func_0222898c(Unk_ov003_02228710_Act *e);
    void func_022287c8(Unk_ov003_02228710_Act *e, s32 mode);

    /* 0x50 */ Unk_0209c15c unk_50;
    /* 0x68 */ Unk_0209c15c unk_68;
    /* 0x80 */ Unk_0209c15c unk_80;
    /* 0x98 */ u32 unk_98[2];
};

extern "C" {
extern Unk_ov003_02228710_Act data_ov003_02259354[];
extern u8 data_ov003_02258f00;
extern u32 *data_020cbb18[];

void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0205c088();
void func_0205c06c();
void func_0205c0f0();
void func_0205c0d4();
void func_0205c0bc();
void func_0205c0a0();
BOOL func_02072e88(void *p, u32 v);
void func_ov003_02225108();
void func_02041868();
void func_0205468c(void *p);
void func_02003c30(void *p);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
void func_0209c224(void *p, void *q);
void func_0209c25c(void *p, void *q);
void *func_0209c0ac(void *p);
s32 func_02106054(void *p, s32 a, s32 b);
s32 func_02063b8c(s32 n);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
s16 func_ov003_02229670();
void func_ov003_02229698(Unk_ov003_02228710_Act *a, s32 v1, s32 v2, s32 v3, s16 s0, s16 s1, s32 s2, s32 s3, u32 s4, u32 s5);
void func_ov003_022295ec(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 s0, s32 s1);
s32 func_ov003_02229938(Unk_ov003_02228710_Act *a);
s32 func_ov003_02229a3c(Unk_ov003_02228710_Act *a);
void func_ov003_0222a7d4(Unk_ov003_02228710_Act *a);
void func_ov003_02229144(Unk_ov003_02228710_Act *a);
void func_ov003_0222af84(Unk_ov003_02228710_Act *a);
void func_ov003_0222be88(Unk_ov003_02228710_Act *a);
void func_ov003_0222aff0(Unk_ov003_02228710_Act *a);
void func_ov003_0222a8d0(Unk_ov003_02228710_Act *a);
void func_ov003_0222b224(Unk_ov003_02228710_Act *a);
void func_ov003_0222bf7c(Unk_ov003_02228710_Act *a);
void func_ov003_0222c024(Unk_ov003_02228710_Act *a);
void func_ov003_0222b6e0(Unk_ov003_02228710_Act *a);
void func_ov003_0222be0c(Unk_ov003_02228710_Act *a);
void func_ov003_02229eac(Unk_ov003_02228710_Act *a);
void func_ov003_0222c2e0(Unk_ov003_02228710_Act *a);
void func_ov003_0222cfb0(Unk_ov003_02228710_Act *a);

void func_ov003_02228b30(Unk_ov003_02228710_Act *a) {
    func_ov003_0222a7d4(a);
}
void func_ov003_02228b38(Unk_ov003_02228710_Act *a) {
    func_ov003_02229144(a);
}
void func_ov003_02228b40(Unk_ov003_02228710_Act *a) {
    func_ov003_0222af84(a);
}
void func_ov003_02228b6c(Unk_ov003_02228710_Act *a) {
    func_ov003_0222be88(a);
}
void func_ov003_02228c0c(Unk_ov003_02228710_Act *a) {
    func_ov003_0222aff0(a);
}
void func_ov003_02228c14(Unk_ov003_02228710_Act *a) {
    func_ov003_0222a8d0(a);
}
void func_ov003_02228cbc(Unk_ov003_02228710_Act *a) {
    func_ov003_0222b224(a);
}
void func_ov003_02228d0c(Unk_ov003_02228710_Act *a) {
    func_ov003_0222bf7c(a);
}
void func_ov003_02228d40(Unk_ov003_02228710_Act *a) {
    func_ov003_0222bf7c(a);
}
void func_ov003_02228d74(Unk_ov003_02228710_Act *a) {
    func_ov003_0222c024(a);
}
void func_ov003_02228dd0(Unk_ov003_02228710_Act *a) {
    func_ov003_0222b6e0(a);
}
void func_ov003_02228dd8(Unk_ov003_02228710_Act *a) {
    func_ov003_0222be0c(a);
}
void func_ov003_02228f04(Unk_ov003_02228710_Act *a) {
    func_ov003_02229eac(a);
}
void func_ov003_02228f64(Unk_ov003_02228710_Act *a) {
    func_ov003_0222c2e0(a);
}
void func_ov003_02228fac(Unk_ov003_02228710_Act *a) {
    func_ov003_0222cfb0(a);
}

void func_ov003_02228b48(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x50, 0x50, 0, 0, 0, 0, 3, 0);
}

void func_ov003_02228b74(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x50, 0x50, 0, 0, 0, 0, 1, 0);
}

void func_ov003_02228b98(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x64, 0x50, 0, 0, 0, 0, 5, 0);
    a->unk_24c = 0;
    func_0205668c(a->unk_ec, 3, 0, 0x1000, 0);
}

void func_ov003_02228bdc(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x64, 0x5a, 0, 0, 0, 0, 4, 0);
    a->unk_24c = 0;
}

void func_ov003_02228c1c(Unk_ov003_02228710_Act *a) {
    s16 t = func_02063b8c(0xb) + 5;
    Unk_ov003_02228710_Vec *p = &a->unk_204;
    t = t * 0x14;
    func_ov003_02229698(a, t, 0x5a, 0x40, 0, 0, 0x28, 0, 3, 0);
    if (a->unk_251 != 0xb && a->unk_251 != 0x10) {
        a->unk_21c = p->x;
        func_02106054(func_0209c0ac(a->unk_130), 0, 0);
        p->z -= 0x7d0;
    } else {
        a->unk_238 = (s16)0xc000;
        a->unk_23c = a->unk_23a;
    }
}

void func_ov003_02228cc4(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x5a, 0x3c, 0, 0, 0x3c, 0, 8, 1);
    a->unk_21c = a->unk_257;
    a->unk_228 = a->unk_204.y;
}

void func_ov003_02228d14(Unk_ov003_02228710_Act *a) {
    func_ov003_022295ec(a, 0x96, 0x1e, 0x25, 0x12, 0x1000);
    func_ov003_02229938(a);
}

void func_ov003_02228d48(Unk_ov003_02228710_Act *a) {
    func_ov003_022295ec(a, 0xc8, 0x3c, 0x25, 9, 0x1000);
    func_ov003_02229938(a);
}

void func_ov003_02228d7c(Unk_ov003_02228710_Act *a) {
    if (a->unk_251 == 0x13) {
        func_02106054(func_0209c0ac(a->unk_130), 0, 0);
    }
    func_ov003_02229698(a, 0, 0x5a, 0x3c, 0, 0, 2, 0, 0, 0);
    a->unk_21c = 0;
}

void func_ov003_02228de0(Unk_ov003_02228710_Act *a) {
    if (a->unk_24d == 0x1e) {
        func_ov003_02229698(a, 0, 0x28, 0x50, 0, 0, 0, 0, 4, 0);
    } else {
        func_ov003_02229698(a, 0, 0xdc, 0x3c, 0, 0, 0, 0, 1, 0);
    }
    a->unk_232 = 0x168;
    if (a->unk_251 != 0xb && a->unk_251 != 0x10) {
        func_02106054(func_0209c0ac(a->unk_130), 0, 0);
    }
}

void func_ov003_02228f0c(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, s16 w);

void func_ov003_02228e60(Unk_ov003_02228710_Act *a) {
    switch (a->unk_24d) {
    case 0x1a:
        func_ov003_02228f0c(a, 0xc8, 0x3c, 4, 0x38e);
        break;
    case 0x20:
        func_ov003_02228f0c(a, 0x82, 0x3c, 0x10, 0x71c);
        break;
    case 0xe:
        func_ov003_02228f0c(a, 0x96, 0x32, 0x18, 0x71c);
        func_0205668c(a->unk_ec, 0, 3, 0x1000, 1);
        break;
    case 0xf:
        func_ov003_02228f0c(a, 0x96, 0x32, 0x18, 0x71c);
        func_0205668c(a->unk_ec, 0, 3, 0x1000, 1);
        break;
    }
}

void func_ov003_02228f0c(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, s16 w) {
    s16 r = func_ov003_02229670();
    func_ov003_02229698(a, 0, x, y, 0, r, 0xe, 0, z, 0);
    func_ov003_02229938(a);
    if (a->unk_251 != 0xb) {
        func_ov003_02229a3c(a);
    }
    a->unk_21c = w;
}

void func_ov003_02228f6c(Unk_ov003_02228710_Act *a) {
    func_ov003_02229698(a, 0, 0x28, 0x50, 0, 0, 0, 0, 3, 1);
    func_ov003_02229938(a);
    a->unk_232 = func_02063b8c(0x14) * 3;
}

void func_ov003_02229010(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 p4, u8 p5);

void func_ov003_02228fb4(Unk_ov003_02228710_Act *a) {
    switch (a->unk_24d) {
    case 0x15:
        func_ov003_02229010(a, 0xc8, 0x3c, 0x28, 0x14, 1);
        break;
    case 0x16:
        func_ov003_02229010(a, 0xc8, 0x28, 0x2d, 0x1e, 3);
        break;
    case 0x17:
        func_ov003_02229010(a, 0x64, 0x46, 0x32, 0x78, 0x1e);
        break;
    }
}

void func_ov003_02229010(Unk_ov003_02228710_Act *a, s32 x, s32 y, s32 z, u8 p4, u8 p5) {
    s16 r = func_ov003_02229670();
    func_ov003_02229698(a, 0, x, y, 0, r, z, 0, p4, 0);
    a->unk_259 = p5;
}

// factory (allocates 0xa0 bytes)
void *func_ov003_02228b18() {
    return new Unk_ov003_02234abc;
}
}

BOOL Unk_ov003_02234abc::vfunc_00() {
    func_0209c1a4(&unk_50, 8, 0x400, 0x40, 0x9c4, (void *)func_0205c088, (void *)func_0205c06c, 0);
    func_0209c1a4(&unk_68, 2, 0x400, 0x40, 0x6e8, (void *)func_0205c0f0, (void *)func_0205c0d4, 0);
    func_0209c1a4(&unk_80, 4, 0x400, 0x40, 0x9c4, (void *)func_0205c0bc, (void *)func_0205c0a0, 0);
    u32 *g = data_020cbb18[0];
    if (func_02072e88(g, g[0x64 / 4]) == 0) {
        func_02228924(0x3a, 0);
        func_02228924(0x3b, 1);
    }
    func_ov003_02225108();
    return TRUE;
}

BOOL Unk_ov003_02234abc::func_0222898c(Unk_ov003_02228710_Act *e) {
    if (e->unk_250 != 0) {
        s8 a = e->unk_24d;
        u8 b = e->unk_251;
        Unk_ov003_02228710_Vec v;
        Unk_ov003_02228710_Vec w;
        Unk_ov003_02228710_Vec *pv = &e->unk_204;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        pv = &e->unk_1d4;
        w.x = pv->x;
        w.y = pv->y;
        w.z = pv->z;
        s16 c = e->unk_23a;
        func_022287c8(e, 3);
        e->unk_24d = a;
        e->unk_251 = b;
        pv = &e->unk_204;
        pv->x = v.x;
        pv->y = v.y;
        pv->z = v.z;
        e->unk_23a = c;
        pv = &e->unk_1d4;
        pv->x = w.x;
        pv->y = w.y;
        pv->z = w.z;
    }
    e->unk_250 = 2;
    func_0209c25c(&unk_80, e->unk_230);
    func_0209c0c8(e->unk_130);
    e->unk_249 = 1;
    return TRUE;
}

void Unk_ov003_02234abc::func_022287c8(Unk_ov003_02228710_Act *e, s32 mode) {
    Unk_ov003_02228710_Vec *p = &e->unk_204;
    Unk_ov003_02228710_Vec *q = &e->unk_1d4;
    if (e->unk_24d == 0x33) {
        func_02041868();
    }
    if (e->unk_24d >= 0) {
        func_0205468c(e->unk_50);
    }
    e->unk_250 = 0;
    e->unk_21c = 0;
    func_02003c30(e->unk_174);
    p->x = 1;
    p->y = 1;
    p->z = 1;
    q->x = 1;
    q->y = 1;
    q->z = 1;
    e->unk_248 = 0;
    e->unk_249 = 0;
    e->unk_258 = 0;
    e->unk_24d = -1;
    e->unk_23a = 0;
    e->unk_242 = 0;
    e->unk_251 = 0x13;
    func_0209c0b4(e->unk_130);
    e->unk_18 = 0;
    e->unk_1c = 0;
    e->unk_254 = 0;
    e->unk_24a = 0;
    e->unk_236 = 0;
    if (mode == 1) {
        func_0209c224(&unk_50, e->unk_230);
    } else if (mode == 2) {
        func_0209c224(&unk_68, e->unk_230);
    } else {
        func_0209c224(&unk_80, e->unk_230);
    }
    e->unk_170 = 0;
}

BOOL Unk_ov003_02234abc::func_022288dc(Unk_ov003_02228710_Act *e) {
    if (e->unk_250 == 0) {
        e->unk_250 = 2;
        func_0209c25c(&unk_50, e->unk_230);
        func_0209c0c8(e->unk_130);
        e->unk_249 = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02234abc::func_02228924(s32 id, s32 idx) {
    Unk_ov003_02228710_Act *e = &data_ov003_02259354[idx];
    if (e->unk_250 == 0) {
        func_0209c25c(&unk_68, e->unk_230);
        func_0209c0c8(e->unk_130);
        e->unk_249 = 1;
        e->unk_18 = 0;
        e->unk_1c = 0;
        e->unk_24d = (s8)id;
        e->unk_250 = 2;
        return TRUE;
    }
    return FALSE;
}

Unk_ov003_02234abc::~Unk_ov003_02234abc() {
}

Unk_ov003_02234abc::Unk_ov003_02234abc() {
    data_ov003_02258f00 = 0;
}
