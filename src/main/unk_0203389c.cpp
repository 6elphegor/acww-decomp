#include "types.h"

struct Unk_0203389c_Vec {
    s32 x, y, z;
};

extern "C" {
void func_020e93a0(void *p, s32 v);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb2c(s32 a, s32 b);
long long func_020e9600(void *a, void *b);
BOOL func_020307c4(s32 a, s32 b, s32 *c, s32 *d, s32 *e);
s32 func_020b50e8();
BOOL func_020b530c(s32 a);
BOOL func_0203411c(u32 i, u16 *v);
BOOL func_0203414c(u32 i, u16 *v);
void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e);
void *func_02060550(void *a, s32 b);
void func_02060808(void *a, void *b, s32 c);
void func_020607e0(void *a, void *b, s32 c);
void func_020342cc(void *a, s32 b, s32 c, s32 d);
void func_02034250(void *a, s32 b, s32 c, s32 d);
extern u8 data_020c7c58[];
extern u8 data_020c7c59[];
extern u8 data_020c7c5a[];
extern u8 data_020c7c5b[];
extern u8 data_020c7c5c[];
extern u8 data_020c7c5d[];
extern u8 data_020c7c5e[];
extern u8 data_020c7c5f[];
extern s16 data_020c7c68[];
extern u32 data_020c7c20[];
extern s16 data_020c8adc[];
extern s16 data_020c8ad4[];
extern u16 data_021c1ad4[];
extern u16 data_021c1a6c[];
extern u16 data_021c1a44[];
extern s32 data_021c1a10;
extern s32 data_021c1a14;
extern u8 data_021e58a8[];
}

class Unk_0203389c {
public:
    void func_0203389c(s32 a, s32 b, s32 c);
    BOOL func_020338d0(s32 x);
    s32 func_020338e8();
    s32 func_02033914(s32 flag);

    u8 pad_00[0x10];
    u8 unk_10[0xc];
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
};

void Unk_0203389c::func_0203389c(s32 a, s32 b, s32 c)
{
    b -= a;
    s32 v = 0;
    unk_24 = v;
    unk_28 = v;
    unk_2c = 0x1000;
    if (b <= 0) {
        v = 0x8000;
    }
    func_020e93a0(&unk_24, (s16)(c + (s16)v));
}

BOOL Unk_0203389c::func_020338d0(s32 x)
{
    if (unk_30 != 0) {
        if (x <= unk_3c) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 Unk_0203389c::func_020338e8()
{
    if (unk_34 == 0x16) {
        s32 t = func_01ffc5a4(0x1e000, 0x64000);
        return func_01ffcb0c(unk_3c, t);
    }
    return unk_3c;
}

s32 Unk_0203389c::func_02033914(s32 flag)
{
    if (flag == 0) {
        return unk_38;
    }
    s32 a, b, c;
    Unk_0203389c_Vec v;
    if (func_020307c4(unk_1c, unk_20, &a, &b, &c) && c != 2) {
        s32 z = unk_20;
        v.x = (unk_1c << 13) + 0x1000;
        v.y = 0;
        v.z = (z << 13) + 0x1000;
        s32 r7 = a;
        long long d = func_020e9600(&v, unk_10);
        s32 m = func_01ffcb0c(r7, r7);
        if ((long long)m >= d) {
            return unk_38 + b;
        }
    }
    return unk_38;
}

class Unk_020339cc {
public:
    Unk_020339cc();
    ~Unk_020339cc();
    void func_020339cc(const Unk_020339cc *o);
    void func_020339d8(u8 a, s32 b);

    u8 unk_00;
    s32 unk_04;
};

void Unk_020339cc::func_020339cc(const Unk_020339cc *o)
{
    unk_00 = o->unk_00;
    unk_04 = o->unk_04;
}

void Unk_020339cc::func_020339d8(u8 a, s32 b)
{
    unk_00 = a;
    unk_04 = b;
}

Unk_020339cc::~Unk_020339cc()
{
}

Unk_020339cc::Unk_020339cc()
{
    unk_00 = 0;
    unk_04 = 0;
}

class Unk_020339f8 {
public:
    BOOL func_020339f8(s32 v);
    s32 unk_00;
};

BOOL Unk_020339f8::func_020339f8(s32 v)
{
    if (v >= 0 && v < 8) {
        unk_00 = v;
        return TRUE;
    }
    return FALSE;
}

class Unk_02033b3c {
public:
    Unk_02033b3c();
    ~Unk_02033b3c();
    void func_02033b94(s32 x, s32 y, s32 flag);
    Unk_02033b3c *func_02033d2c(Unk_0203389c_Vec *p, s32 flag);

    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
};

Unk_02033b3c::Unk_02033b3c()
{
}

void Unk_02033b3c::func_02033b94(s32 x, s32 y, s32 flag)
{
    if (flag == 0) {
        unk_14 = func_01ffcb2c(x, y);
        s32 a = unk_14;
        unk_10 = a < 0x7c ? data_020c7c58[a * 0x1e] : 0;
        s32 b0 = unk_10;
        unk_00 = b0 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b0 * 0x1e) << 8 : 0;
        unk_11 = a < 0x7c ? data_020c7c59[a * 0x1e] : 0;
        s32 b1 = unk_11;
        unk_04 = b1 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b1 * 0x1e) << 8 : 0;
        unk_12 = a < 0x7c ? data_020c7c5a[a * 0x1e] : 0;
        s32 b2 = unk_12;
        unk_08 = b2 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b2 * 0x1e) << 8 : 0;
        unk_13 = a < 0x7c ? data_020c7c5b[a * 0x1e] : 0;
        s32 b3 = unk_13;
        unk_0c = b3 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b3 * 0x1e) << 8 : 0;
    } else {
        unk_14 = func_01ffcb2c(x, y);
        s32 a = unk_14;
        unk_10 = a < 0x7c ? data_020c7c5c[a * 0x1e] : 0;
        s32 b0 = unk_10;
        unk_00 = b0 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b0 * 0x1e) << 8 : 0;
        unk_11 = a < 0x7c ? data_020c7c5d[a * 0x1e] : 0;
        s32 b1 = unk_11;
        unk_04 = b1 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b1 * 0x1e) << 8 : 0;
        unk_12 = a < 0x7c ? data_020c7c5e[a * 0x1e] : 0;
        s32 b2 = unk_12;
        unk_08 = b2 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b2 * 0x1e) << 8 : 0;
        unk_13 = a < 0x7c ? data_020c7c5f[a * 0x1e] : 0;
        s32 b3 = unk_13;
        unk_0c = b3 < 0x7c ? *(s16 *)((u8 *)data_020c7c68 + b3 * 0x1e) << 8 : 0;
    }
}

Unk_02033b3c *Unk_02033b3c::func_02033d2c(Unk_0203389c_Vec *p, s32 flag)
{
    func_02033b94(p->x >> 13, p->z >> 13, flag);
    return this;
}

class Unk_02033b40 {
public:
    Unk_02033b40();
    Unk_02033b3c *func_02033a0c(s32 x, s32 z);
    void func_02033a5c(s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);

    Unk_02033b3c unk_00[0x31];
    s32 unk_498;
    s32 unk_49c;
    s32 unk_4a0;
    s32 unk_4a4;
};

Unk_02033b3c *Unk_02033b40::func_02033a0c(s32 x, s32 z)
{
    if (x >= unk_498 && x <= unk_49c && z >= unk_4a0 && z <= unk_4a4) {
        return (Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18);
    }
    return NULL;
}

void Unk_02033b40::func_02033a5c(s32 x0, s32 x1, s32 z0, s32 z1, s32 flag)
{
    s32 z, x;
    s32 dz = z1 - z0 + 1;
    s32 dx = x1 - x0 + 1;
    if (dx <= 7 && dz <= 7) {
        unk_498 = x0;
        unk_49c = x1;
        unk_4a0 = z0;
        unk_4a4 = z1;
        for (z = unk_4a0; z <= unk_4a4; z++) {
            for (x = unk_498; x <= unk_49c; x++) {
                ((Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18))->func_02033b94(x, z, flag);
            }
        }
    } else {
        unk_498 = x0;
        unk_49c = x0 + 6;
        unk_4a0 = z0;
        unk_4a4 = z0 + 6;
        for (z = unk_4a0; z <= unk_4a4; z++) {
            for (x = unk_498; x <= unk_49c; x++) {
                ((Unk_02033b3c *)((u8 *)this + (z - unk_4a0) * 0xa8 + (x - unk_498) * 0x18))->func_02033b94(x, z, flag);
            }
        }
    }
}

Unk_02033b40::Unk_02033b40()
{
    unk_498 = unk_49c = unk_4a0 = unk_4a4 = 0;
}

class Unk_0203398c {
public:
    Unk_0203398c *func_0203398c(s32 x, s32 z, s32 a, s32 b);
    Unk_0203398c *func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b);
    void func_02033438(Unk_0203389c_Vec *v, s32 a, s32 b);
};

Unk_0203398c *Unk_0203398c::func_0203398c(s32 x, s32 z, s32 a, s32 b)
{
    Unk_0203389c_Vec v;
    v.x = (x << 13) + 0x1000;
    v.y = 0;
    v.z = (z << 13) + 0x1000;
    func_02033438(&v, a, b);
    return this;
}

Unk_0203398c *Unk_0203398c::func_020339bc(Unk_0203389c_Vec *v, s32 a, s32 b)
{
    func_02033438(v, a, b);
    return this;
}

class Unk_02033d4c {
public:
    u32 func_02033d4c(s32 a, s32 b);
    void func_02033db0();
    s32 func_02033df0();
    BOOL func_02033e10(s32 a, s32 b);
    void func_02033e48();

    u8 unk_00;
    u8 unk_01[4];
    s8 unk_05[4];
    s8 unk_09[4];
};

u32 Unk_02033d4c::func_02033d4c(s32 a, s32 b)
{
    u32 i = 0;
    s8 *p5 = unk_05;
    s8 *p9 = unk_09;
    u8 *p1 = unk_01;
    for (; p1 < (u8 *)unk_05; p5++, p9++, i++, p1++) {
        if (((unk_00 >> i) & 1) != 0 && *p1 < 3 && a == *p5 && b == *p9) {
            return data_020c7c20[*p1];
        }
    }
    return 0;
}

void Unk_02033d4c::func_02033db0()
{
    s32 i;
    u8 *p;
    for (i = 0, p = unk_01; p < (u8 *)unk_05; i++, p++) {
        if (((unk_00 >> i) & 1) != 0 && *p < 3) {
            (*p)++;
        } else {
            *p = 0xff;
            unk_00 &= ~(1 << i);
        }
    }
}

s32 Unk_02033d4c::func_02033df0()
{
    u32 i;
    for (i = 0; i < 4; i++) {
        if (((unk_00 >> i) & 1) == 0) {
            return i;
        }
    }
    return -1;
}

BOOL Unk_02033d4c::func_02033e10(s32 a, s32 b)
{
    s32 i = func_02033df0();
    if (i != -1) {
        unk_00 |= 1 << i;
        unk_05[i] = a;
        unk_09[i] = b;
        unk_01[i] = 0;
        return TRUE;
    }
    return FALSE;
}

void Unk_02033d4c::func_02033e48()
{
    u8 *p;
    unk_00 = 0;
    for (p = unk_01; p < (u8 *)unk_05; p++) {
        *p = 0xff;
    }
}

class Unk_02033f9c {
public:
    Unk_02033f9c();
    ~Unk_02033f9c();

    s32 unk_00;
    s32 unk_04;
};

Unk_02033f9c::~Unk_02033f9c()
{
}

Unk_02033f9c::Unk_02033f9c()
{
    unk_00 = 0;
    unk_04 = 0;
}

class Unk_02033f70 {
public:
    Unk_02033f70();
    ~Unk_02033f70();
    void func_02033e60();

    Unk_02033f9c unk_00[6][6];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    s32 unk_12c;
    u8 unk_130;
    u8 pad_131;
    u16 unk_132;
    u16 unk_134;
};

Unk_02033f70::~Unk_02033f70()
{
}

Unk_02033f70::Unk_02033f70()
{
    func_02033e60();
}

void Unk_02033f70::func_02033e60()
{
    s32 i, j;
    unk_124 = 0;
    unk_128 = 0;
    unk_120 = 0;
    unk_132 = 0;
    unk_134 = 0;
    unk_12c = -1;
    unk_130 = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            unk_00[i][j].unk_00 = 0;
            unk_00[i][j].unk_04 = 0;
        }
    }
}

class Unk_020d8d50 {
public:
    virtual BOOL vfunc_00();

    u8 pad_04[0x24];
    s32 unk_28;
};

BOOL Unk_020d8d50::vfunc_00()
{
    if (unk_28 == 3) {
        return FALSE;
    }
    return TRUE;
}

struct Unk_02032fc4 {
    ~Unk_02032fc4();
    u8 pad[0x484];
};

struct Unk_02033378 {
    ~Unk_02033378();
    u8 pad[0xa04];
};

struct Unk_020326c4 {
    ~Unk_020326c4();
    u8 pad[0x244];
};

struct Unk_02031b84 {
    ~Unk_02031b84();
};

struct Unk_02031e08 {
    ~Unk_02031e08();
};

class Unk_02033edc {
public:
    ~Unk_02033edc();

    s32 unk_00;
    Unk_02033f70 unk_04[8];
    Unk_02032fc4 unk_9c4;
    Unk_02033378 unk_e48;
    Unk_020326c4 unk_184c;
    Unk_02031b84 unk_1a90;
    Unk_02031e08 unk_1a91;
    Unk_02033b40 unk_1a94;
};

Unk_02033edc::~Unk_02033edc()
{
}

class Unk_02034014 {
public:
    Unk_02034014 *func_02034014();
    ~Unk_02034014();
    void func_02033fa4();
    void func_02033fd8(u32 i, s16 a, s16 b);
    void func_02033fe4();

    s16 unk_00[3];
    s16 unk_06[3];
    s16 unk_0c[3];
    u8 unk_12;
};

void Unk_02034014::func_02033fa4()
{
    u8 i;
    for (i = 0; i < 3; i++) {
        func_02033fd8(i, data_020c8adc[i], data_020c8ad4[i]);
    }
}

void Unk_02034014::func_02033fd8(u32 i, s16 a, s16 b)
{
    unk_06[i] = a;
    unk_0c[i] = b;
}

void Unk_02034014::func_02033fe4()
{
    u32 i;
    unk_12 = 0;
    for (i = 0; i < 3; i++) {
        unk_00[i] = unk_06[i] = unk_0c[i] = 0;
    }
}

Unk_02034014 *Unk_02034014::func_02034014()
{
    func_02033fe4();
    func_02033fa4();
    return this;
}

Unk_02034014::~Unk_02034014()
{
}

extern "C" void func_0203402c(s32 v)
{
    data_021c1a10 = v;
}

extern "C" void func_02034038(s32 v)
{
    data_021c1a14 = v;
}

extern "C" u16 *func_02034104(u32 i)
{
    if (i < 0x33) {
        return &data_021c1ad4[i];
    }
    return data_021c1a44;
}

extern "C" BOOL func_0203411c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1ad4[i] = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *func_02034134(u32 i)
{
    if (i < 0x33) {
        return &data_021c1a6c[i];
    }
    return data_021c1a44;
}

extern "C" BOOL func_0203414c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1a6c[i] = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02034164()
{
    u32 i;
    for (i = 0; i < 0x33; i++) {
        data_021c1ad4[i] = 0xfff1;
        data_021c1a6c[i] = data_021c1ad4[i];
    }
}

extern "C" void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e)
{
    if (c != 0) {
        func_020342cc(a, b, d, e);
    } else {
        func_02034250(a, b, d, e);
    }
}

struct Unk_02034048_Pkt {
    u16 unk_00;
    u16 id : 6;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
};

extern "C" void func_02034048(Unk_02034048_Pkt *p)
{
    u16 tmp = p->unk_00;
    u8 id = p->id;
    u32 f7 = p->f7;
    BOOL f6;
    if (p->f6 != 0) {
        f6 = TRUE;
    } else {
        f6 = FALSE;
    }
    s32 f8;
    if (p->f8 != 0) {
        f8 = 1;
    } else {
        f8 = 0;
    }
    if (p->id == func_020b50e8()) {
        func_02034194(&tmp, f7, f6, f8, 0);
    } else if (func_020b530c(id)) {
        void *r = func_02060550(data_021e58a8, id);
        if (r != NULL) {
            if (f6) {
                func_02060808(r, &tmp, f7);
                func_0203414c(id, &tmp);
            } else {
                func_020607e0(r, &tmp, f7);
                func_0203411c(id, &tmp);
            }
        }
    } else if (f6) {
        func_0203414c(id, &tmp);
    } else {
        func_0203411c(id, &tmp);
    }
}

extern "C" void func_02033988()
{
}

extern "C" void func_02034044()
{
}
