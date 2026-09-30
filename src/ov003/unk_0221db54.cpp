#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_0221db54_V3 {
    s32 x, y, z;
    Unk_ov003_0221db54_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0221db54_V3(const Unk_ov003_0221db54_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_0221db54_Blk {
    s64 v[6];
};

struct Unk_ov003_0221e398_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_0221db54_V3 V3;
typedef Unk_ov003_0221db54_Blk Blk;

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 pad_60;
    u8 unk_64[0x30];
    u32 pad_94[2];
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

class Unk_ov003_0221c4e4 {
public:
    Unk_ov003_0221c4e4();
    ~Unk_ov003_0221c4e4();
    u32 pad[4];
};

class Unk_ov003_0223463c : public Unk_020d8c7c {
public:
    Unk_ov003_0223463c();
    virtual ~Unk_ov003_0223463c();

    /* 0x050 */ u8 pad_050[0x174 - 0x50];
    /* 0x174 */ Unk_020dbd34 unk_174[0x12];
    /* 0xc6c */ Unk_020dbd34 unk_c6c[6];
    /* 0x1014 */ Unk_020dbd34 unk_1014[3];
    /* 0x11e8 */ Unk_020dbd34 unk_11e8[6];
    /* 0x1590 */ Unk_020dbd34 unk_1590[4][10];
    /* 0x2df0 */ Unk_020dbd34 unk_2df0[4];
    /* 0x3060 */ Unk_020dbd34 *unk_3060;
    /* 0x3064 */ Unk_020dbd34 *unk_3064;
    /* 0x3068 */ Unk_020dbd34 unk_3068[0x20];
    /* 0x43e8 */ Unk_020dbd34 unk_43e8[5];
    /* 0x46f4 */ Unk_020dbd34 *unk_46f4[5];
    /* 0x4708 */ Unk_020dbd34 unk_4708[2];
    /* 0x4840 */ Unk_020dbd34 unk_4840[2];
    /* 0x4978 */ Unk_020dbd34 *unk_4978[12];
    /* 0x49a8 */ Unk_020dbd34 unk_49a8[2];
    /* 0x4ae0 */ Unk_020dbd44 unk_4ae0;
    /* 0x4af0 */ Unk_020dbd44 unk_4af0;
    /* 0x4b00 */ Unk_020dbd44 unk_4b00;
    /* 0x4b10 */ Unk_020dbd44 unk_4b10;
    /* 0x4b20 */ Unk_ov003_0221c4e4 unk_4b20;
    /* 0x4b30 */ u8 pad_4b30[0x6a6c - 0x4b30];
    /* 0x6a6c */ s32 unk_6a6c;
};

typedef Unk_ov003_0223463c O;
typedef Unk_020dbd34 M;

extern "C" {
extern Blk data_021f47e0;
extern V3 data_ov003_0222f510[];
extern V3 data_ov003_0222f4f8[];
extern u16 data_ov003_0222f028[];

void func_02055550(M *p, s32 a);
u16 func_02064cc4();
void func_02105fd8(u32 a, u32 b);
s32 func_020ac22c(s32 a);
void func_020ac23c(V3 *v, u8 n);
s32 func_020494bc(u16 *p);
s32 func_02049370(u16 *p);
s32 func_0204ad98(u16 *p);
s32 func_0204ad08(u16 *p);
s32 func_0204af08(u16 *p);
s32 func_02045d48(s32 a, s32 b);
s32 func_0203ef38(Unk_ov003_0221e398_V3 *out, Unk_ov003_0221e398_V3 *p);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
s32 func_02133150(s32 a, s32 b);

s32 func_ov003_0221e750(O *o, u32 id, V3 *p, s32 k, V3 *q, s32 a, s32 b, s32 c);
void func_ov003_0221e440(O *o, u16 *p, Unk_ov003_0221e398_V3 *v);
void func_ov003_0221e398(O *o, Unk_ov003_0221e398_V3 *p, s32 a, s32 b);
M *func_ov003_0221e118(O *o, u16 *p, s32 a, s32 b, V3 v, Blk m);
}

extern "C" void func_ov003_0221db54(O *o, M *p, Blk m);
extern "C" M *func_ov003_0221db98(O *o, u16 *t, Blk m);
extern "C" M *func_ov003_0221dbf0(O *o, u16 *t, Blk m);
extern "C" void func_ov003_0221dc50(O *o, u16 *t, Blk m);
extern "C" M *func_ov003_0221dcac(O *o, u16 *t, Blk m);
extern "C" M *func_ov003_0221dd58(O *o, u16 *t, Blk m);

extern "C" void func_ov003_0221db54(O *o, M *p, Blk m)
{
    if (p != NULL) {
        *(Blk *)p->unk_64 = m;
        func_02055550(p, 0);
        volatile u16 a = func_02064cc4();
        volatile u16 b = a;
        func_02105fd8(p->unk_5c, b);
    }
}

extern "C" M *func_ov003_0221db98(O *o, u16 *t, Blk m)
{
    M *q = &o->unk_3068[*t - 0xa7];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221dbf0(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xe2) {
        k = 1;
    }
    M *q = &o->unk_49a8[k];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" void func_ov003_0221dc50(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xfe) {
        k = 1;
    }
    func_ov003_0221db54(o, &o->unk_4840[k], m);
}

extern "C" M *func_ov003_0221dcac(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xfd) {
        k = 1;
    }
    M *q = &o->unk_4708[k];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" s32 func_ov003_0221dd0c(O *o, u16 *t, s32 r, Blk m)
{
    func_ov003_0221dd58(o, t, m);
    return func_020ac22c(r);
}

extern "C" M *func_ov003_0221dd58(O *o, u16 *t, Blk m)
{
    M *q = o->unk_46f4[(*t - 0xe3) % 5];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221ddb4(O *o, u16 *t, Blk m)
{
    BOOL f = FALSE;
    u32 v = *t;
    if (v < 0x1f || v > 0x20) {
    } else {
        f = TRUE;
    }
    s32 k;
    if (f) {
        k = 4;
    } else {
        k = v - 0x21;
    }
    M *q = &o->unk_43e8[k];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221de24(O *o, u16 *t, Blk m)
{
    M *q;
    switch (*t) {
    case 0x1a:
        q = &o->unk_2df0[0];
        break;
    case 0x1b:
        q = &o->unk_2df0[2];
        break;
    case 0x1c:
        break;
    case 0x1d:
        q = o->unk_3060;
        break;
    case 0x1e:
        q = o->unk_3064;
        break;
    case 0x88:
    case 0xa4:
        q = &o->unk_2df0[1];
        break;
    case 0x89:
        q = &o->unk_2df0[3];
        break;
    }
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221dee8(O *o, u16 *t, Blk m)
{
    M *q = &o->unk_1590[func_020494bc(t)][0];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221df48(O *o, u16 *t, Blk m)
{
    s32 a = func_020494bc(t);
    s32 b = func_02049370(t);
    M *q = &o->unk_1590[a][b];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221dfb8(O *o, u16 *t, Blk m)
{
    BOOL f = FALSE;
    u32 v = *t;
    if (v < 0x2b || v > 0x2e) {
    } else {
        f = TRUE;
    }
    if (f) {
        v -= 0x2b;
    } else if (v >= 0xff && v <= 0x102) {
        v -= 0xff;
    } else if (v >= 0x62 && v <= 0x65) {
        v -= 0x5e;
    } else {
        v -= 0xc8;
    }
    M *q = o->unk_4978[v];
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" M *func_ov003_0221e044(O *o, u16 *t, s32 a, s32 b, Blk m)
{
    M *q;
    if (*t == 0x25) {
        q = (M *)((u8 *)o + 0x480 + ((a ^ b) & 1) * 0x3a8);
    } else if (*t == 0xc7) {
        q = (M *)((u8 *)o + 0x14f4);
    } else {
        q = (M *)((u8 *)o + 0xf78);
    }
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" void func_ov003_0221e0c4(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m)
{
    func_ov003_0221e118(o, t, a, b, v, m);
    func_020ac23c(&v, func_0204ad98(t));
}

extern "C" M *func_ov003_0221e118(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m)
{
    M *q;
    struct {
        Unk_ov003_0221e398_V3 a1, a2, t1, t2, b1, sc, t3, b2;
    } l;
    s32 n = func_0204ad98(t);
    BOOL f = FALSE;
    u32 id = *t;
    if (id >= 0x2f && id <= 0x56) {
        f = TRUE;
    }
    if (f) {
        if (func_0204af08(t)) {
            l.t1.x = v.x;
            l.t1.y = v.y;
            l.t1.z = v.z;
            func_ov003_0221e440(o, t, &l.t1);
        }
        q = (M *)((u8 *)o + 0x8c4) + n;
    } else if (id >= 0x57 && id <= 0x5b) {
        a = (a ^ b) & 1;
        if (func_0204af08(t)) {
            l.t2.x = v.x;
            l.t2.y = v.y;
            l.t2.z = v.z;
            func_ov003_0221e440(o, t, &l.t2);
        }
        u8 *base = (u8 *)o + 0x174;
        a = a * 0x3a8;
        q = (M *)(base + a) + n;
    } else if (id == 0x69) {
        s32 i, z;
        i = 0;
        z = 0;
        do {
            l.a1.x = v.x + data_ov003_0222f510[i].x;
            l.a1.y = v.y + data_ov003_0222f510[i].y;
            l.a1.z = v.z + data_ov003_0222f510[i].z;
            l.b1.x = l.a1.x;
            l.b1.y = l.a1.y;
            l.b1.z = l.a1.z;
            l.sc.x = 0x1000;
            l.sc.y = 0x1000;
            l.sc.z = 0x1000;
            func_ov003_0221e750(o, 0x1542, (V3 *)&l.b1, 0x1f, (V3 *)&l.sc, z, z, z);
            i++;
        } while (i < 3);
        q = (M *)((u8 *)o + 0x8c4) + n;
    } else if (id >= 0x6a && id <= 0x6c) {
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id == 0x6d) {
        l.t3.x = v.x;
        l.t3.y = v.y;
        l.t3.z = v.z;
        func_ov003_0221e398(o, &l.t3, a, b);
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id >= 0x5d && id <= 0x61) {
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id >= 0xc8 && id <= 0xcf) {
        if (func_0204af08(t)) {
            s32 i, z;
            i = 0;
            z = 0;
            do {
                l.a2.x = v.x + data_ov003_0222f4f8[i].x;
                l.a2.y = v.y + data_ov003_0222f4f8[i].y;
                l.a2.z = v.z + data_ov003_0222f4f8[i].z;
                l.b2.x = l.a2.x;
                l.b2.y = l.a2.y;
                l.b2.z = l.a2.z;
                l.sc.x = 0x1000;
                l.sc.y = 0x1000;
                l.sc.z = 0x1000;
                func_ov003_0221e750(o, 0x1548, (V3 *)&l.b2, 0x1f, (V3 *)&l.sc, z, z, z);
                i++;
            } while (i < 2);
        }
        q = (M *)((u8 *)o + 0x11e8) + n;
    } else {
        q = (M *)((u8 *)o + 0x174 + ((a ^ b) & 1) * 0x3a8) + n;
    }
    func_ov003_0221db54(o, q, m);
    return q;
}

extern "C" void func_ov003_0221e398(O *o, Unk_ov003_0221e398_V3 *t, s32 a, s32 b)
{
    M *q = NULL;
    s32 idx = func_02045d48(a, b);
    if (idx != -1) {
        s32 d = (o->unk_6a6c + idx * 15) / 20;
        q = &o->unk_1014[(idx + d) % 3];
    }
    Unk_ov003_0221e398_V3 v;
    s32 r = func_0203ef38(&v, t);
    func_020e8388(&data_021f47e0, v.x, v.y, v.z);
    func_020e8434(&data_021f47e0, r);
    func_ov003_0221db54(o, q, data_021f47e0);
}

extern "C" void func_ov003_0221e440(O *o, u16 *t, Unk_ov003_0221e398_V3 *v)
{
    u32 id;
    u32 k = 0;
    u32 w = *t;
    if (w >= 0x57 && w <= 0x5b) {
        k = 1;
    }
    if (k) {
        id = 0x14b8;
    } else {
        id = data_ov003_0222f028[func_0204ad08(t)];
    }
    s32 i = 0;
    s32 z = i;
    do {
        struct {
            Unk_ov003_0221e398_V3 a, b, c;
        } l;
        l.a.x = v->x + data_ov003_0222f510[i].x;
        l.a.y = v->y + data_ov003_0222f510[i].y;
        l.a.z = v->z + data_ov003_0222f510[i].z;
        l.b.x = l.a.x;
        l.b.y = l.a.y;
        l.b.z = l.a.z;
        l.c.x = 0x1000;
        l.c.y = 0x1000;
        l.c.z = 0x1000;
        func_ov003_0221e750(o, id, (V3 *)&l.b, 0x1f, (V3 *)&l.c, z, z, z);
        i++;
    } while (i < 3);
}
