#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02064674_Vec { s32 x, y, z; };

struct Unk_020b22ac {
    s32 func_020b22ac();
    BOOL func_020b22c4(BOOL on, s32 a, s32 b, u32 param);
    void func_020b231c();
    ~Unk_020b22ac();
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_020d93b8 {
    s16 func_0203bc90();
};

struct Unk_02064674_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
};

struct Unk_02064674_G {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[0x124 - 0x54];
    s32 unk_124;
    u8 pad_128[0x16a - 0x128];
    Unk_02064674_Color unk_16a;
    Unk_02064674_Color unk_16c;
};

struct Unk_02064870_Time {
    u16 v;
};

extern Unk_02064674_G *data_021c9f44;
extern Unk_020d93b8 *data_021c3070;
extern char data_020dd39c[];
extern u8 data_021c9f5c[];
extern u32 data_021c9f60[];
extern u32 data_021c9f68[];
extern u16 data_020cb728[];
extern u16 data_020cb6f8[];
extern u16 data_020cb6fc[];

extern "C" {
void func_02001314(const char *fmt, ...);
void func_02119d78(void *f);
BOOL func_02119a28(void *f, const char *path);
BOOL func_0211a0dc(void *f);
void func_02110bb0(void *m);
void func_02104270(s32 id, s32 x, s32 y, s32 z);
void func_0210425c(s32 id, u32 c);
u16 func_020baa04(s32 a);
void func_020e944c(Unk_02064674_Vec *v, s32 a);
void func_020e93a0(Unk_02064674_Vec *v, s32 a);
s32 func_020e94f8(Unk_02064674_Vec *v);
s32 func_01ffc854(Unk_02064674_Vec *v);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0209cf18(Unk_02064870_Time *t);
void func_0209cdf8(Unk_02064870_Time a, Unk_02064870_Time b, Unk_02064870_Time *out);
s32 func_020b5184();
s32 func_020b5164();
void func_0200402c(u32 a);
void func_0206481c(Unk_02064674_Vec *in, Unk_02064674_Vec *out);
}

extern "C" void func_02064398(void *file, const char *path);
extern "C" BOOL func_020643b8(void *file, const char *path)
{
    func_02119d78(file);
    return func_02119a28(file, path);
}

extern "C" void func_02064398(void *file, const char *path)
{
    if (!func_020643b8(file, path)) {
        func_02001314(data_020dd39c, path);
    }
}

extern "C" BOOL func_020643d4(void *file)
{
    return func_0211a0dc(file);
}

struct Unk_020648dc {
    BOOL func_020648dc(s32 mode);
    u8 unk_00;
    s32 unk_04;
    Unk_020b22ac unk_08;
    s32 unk_1c;
};

struct Unk_02064b98 {
    void func_02064b98(s32 a, s32 b);
    s32 func_02064bc4();
    s32 func_02064be0();
    s32 func_02064bfc();
    s32 func_02064c18(s32 a, s32 b);
    s32 func_02064c20();
    void func_02064c24();
    s32 func_02064c78();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct Unk_02064944 {
    s32 func_02064944();
    s32 func_020649dc();
    s32 func_020649f4();
    s32 func_02064a14();
    s32 func_02064a70();
    s32 func_02064a90();
    s32 func_02064ab0();
    void func_02064abc(void *m);
    void func_02064b10();
    s32 func_02064b88();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
    /* 0x08 */ Unk_02064674_Vec unk_08;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ Unk_02064b98 unk_24[4];
};

struct Unk_0206444c {
    ~Unk_0206444c();
    void func_0206449c(void *m);
    void func_020644e8();
    void func_020645b8();
    void func_02064644();
    void func_02064674();
    void func_020646e0();
    void func_0206476c();
    void func_020647d0(Unk_02064674_Vec *out);
    s16 func_02064870();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ Unk_020648dc unk_14;
    /* 0x34 */ u16 unk_34;
    /* 0x38 */ Unk_02064674_Vec unk_38;
};

class Unk_020dd408 : public Unk_020d8c7c {
public:
    virtual ~Unk_020dd408();

    /* 0x50 */ u8 unk_50[8];
    /* 0x58 */ Unk_0206444c unk_58[3];
};

Unk_020dd408::~Unk_020dd408() {}

Unk_0206444c::~Unk_0206444c() {}

extern "C" void func_02064460(s32 i, u32 v)
{
    data_021c9f5c[i] = 0;
    data_021c9f68[i] = v;
}

extern "C" void func_02064478(s32 i, u32 a, u32 b)
{
    data_021c9f5c[i] = 1;
    data_021c9f68[i] = a;
    data_021c9f60[i] = b;
}

void Unk_0206444c::func_0206449c(void *m)
{
    s32 id = unk_04;
    *(volatile s32 *)0x4000440 = 2;
    *(volatile s32 *)0x4000454 = 0;
    func_02110bb0(m);
    func_02104270(id, (s16)unk_38.x, (s16)unk_38.y, (s16)unk_38.z);
    func_0210425c(id, unk_34);
}

void Unk_0206444c::func_020644e8()
{
    if (data_021c9f44->unk_50 == 0) {
        func_0206476c();
        return;
    }
    if (unk_14.func_020648dc(unk_00)) {
        if (unk_14.unk_00 != 0) {
            switch (unk_14.unk_04) {
            case 0:
            case 3:
                unk_14.unk_08.func_020b22c4(1, 1, 0, 0x1000 / unk_14.unk_1c);
                break;
            case 1:
                unk_14.unk_08.func_020b22c4(1, 1, 1, 0x800);
                break;
            default:
                unk_14.unk_08.func_020b22c4(1, 0, 0, 0x800);
                break;
            }
        } else {
            switch (unk_14.unk_04) {
            case 0:
            case 3:
                unk_14.unk_08.func_020b22c4(0, 1, 0, 0x1000 / unk_14.unk_1c);
                break;
            default:
                unk_14.unk_08.func_020b22c4(0, 0, 0, 0x800);
                break;
            }
        }
    }
    unk_14.unk_08.func_020b231c();
    func_020645b8();
}

void Unk_0206444c::func_020645b8()
{
    Unk_02064674_Color c0;
    volatile u16 c1;
    Unk_02064674_Vec v, w;
    switch (unk_00) {
    case 3:
        func_020646e0();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    case 4:
        func_02064674();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    case 5:
        func_02064644();
        v.x = 0;
        v.y = -0x1000;
        v.z = 0;
        break;
    default:
        *(u16 *)&c0 = func_020baa04(unk_0c);
        c1 = *(u16 *)&c0;
        unk_34 = c1;
        v.x = 0;
        v.y = 0;
        v.z = -0x1000;
        break;
    }
    func_020647d0(&v);
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    func_0206481c(&w, &unk_38);
}

void Unk_0206444c::func_02064644()
{
    s32 t = unk_14.unk_08.func_020b22ac();
    unk_34 = ((((t << 4) >> 12) + 15) << 10) | ((((t << 2) >> 12) + 25) | (((t * 9 >> 12) + 20) << 5));
}

void Unk_0206444c::func_02064674()
{
    s32 t = unk_14.unk_08.func_020b22ac();
    Unk_02064674_G *g = data_021c9f44;
    Unk_02064674_Color *pa = &g->unk_16c;
    Unk_02064674_Color *pb = &g->unk_16a;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    unk_34 = (bl << 10) | (r | (gr << 5));
}

void Unk_0206444c::func_020646e0()
{
    s32 t = unk_14.unk_08.func_020b22ac();
    Unk_02064674_G *g = data_021c9f44;
    Unk_02064674_Color *pa = &g->unk_16c;
    Unk_02064674_Color *pb = &g->unk_16a;
    Unk_02064674_Color &ca = *pa;
    Unk_02064674_Color &cb = *pb;
    s32 r = ca.r + (((cb.r - ca.r) * t) >> 12);
    s32 gr = ca.g + (((cb.g - ca.g) * t) >> 12);
    s32 bl = ca.b + (((cb.b - ca.b) * t) >> 12);
    if (unk_14.unk_00 == 0) {
        if (unk_14.unk_04 != 0) {
            r = 0;
            gr = 0;
            bl = 0;
        }
    } else if (unk_14.unk_04 == 2) {
        r = 0x10;
        gr = 0x10;
        bl = 0xd;
    }
    unk_34 = (bl << 10) | (r | (gr << 5));
}

void Unk_0206444c::func_0206476c()
{
    Unk_02064674_Color c0;
    volatile u16 c1;
    Unk_02064674_Vec v, w;
    v.x = 0;
    v.y = 0;
    v.z = -0x1000;
    func_020647d0(&v);
    if (data_021c3070) {
        func_020e944c(&v, data_021c3070->func_0203bc90());
    }
    *(u16 *)&c0 = func_020baa04(unk_0c);
    c1 = *(u16 *)&c0;
    unk_34 = c1;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    func_0206481c(&w, &unk_38);
}

void Unk_0206444c::func_020647d0(Unk_02064674_Vec *out)
{
    switch (unk_00) {
    case 0:
    case 1:
    case 2:
        func_020e944c(out, unk_10);
        func_020e93a0(out, func_02064870());
        break;
    default:
        func_020e944c(out, unk_10);
        func_020e93a0(out, unk_12);
        break;
    }
}

extern "C" void func_0206481c(Unk_02064674_Vec *in, Unk_02064674_Vec *out)
{
    if (func_020e94f8(in)) {
        if (func_01ffc854(in) >= 0xff0) {
            in->x = func_01ffcb0c(in->x, 0xff0);
            in->y = func_01ffcb0c(in->y, 0xff0);
            in->z = func_01ffcb0c(in->z, 0xff0);
        }
    }
    if (out) {
        out->x = in->x;
        out->y = in->y;
        out->z = in->z;
    }
}

s16 Unk_0206444c::func_02064870()
{
    Unk_02064870_Time res, tm, now;
    tm.v = unk_08;
    func_0209cf18(&now);
    func_0209cdf8(now, tm, &res);
    u8 *p = (u8 *)&res;
    return -(((p[0] + p[1] * 60) << 15) / 0x5a0 - 0x4000);
}

extern "C" void func_020648d8() {}

BOOL Unk_020648dc::func_020648dc(s32 mode)
{
    BOOL r = FALSE;
    u8 v;
    switch (mode) {
    case 3:
    case 4:
        v = data_021c9f5c[0];
        if (unk_00 != v) {
            unk_00 = v;
            unk_04 = *(u32 *)(data_021c9f5c + 4);
            unk_1c = *(u32 *)(data_021c9f5c + 0xc);
            r = TRUE;
        }
        break;
    case 5:
        v = data_021c9f5c[1];
        if (unk_00 != v) {
            unk_00 = v;
            unk_04 = *(u32 *)(data_021c9f5c + 8);
            unk_1c = *(u32 *)(data_021c9f5c + 0x10);
            r = TRUE;
        }
        break;
    }
    return r;
}

extern "C" void func_02064928(u32 v)
{
    Unk_02064674_G *g = data_021c9f44;
    if (g != 0) {
        u32 *p = (u32 *)((u8 *)g + 0x124);
        p[0] = v;
        p[5] = 1;
    }
}

s32 Unk_02064944::func_02064944()
{
    unk_08.x = 0;
    unk_08.y = -0x1000;
    unk_08.z = 0;
    unk_1c = unk_1c + unk_20;
    if (unk_18 == 0) {
        if (unk_1c >= 0x1000) {
            unk_1c = 0x1000;
            unk_20 = -0x266;
            unk_18 = 1;
        }
    } else if (unk_1c < 0) {
        unk_1c = 0;
        unk_00 = 9;
        unk_14 = 0;
    }
    if (unk_00 != 9) {
        s32 t = unk_1c;
        u16 c = data_020cb728[unk_00 - 1];
        s32 hi = ((c & 0x7c00) >> 10) * t >> 12;
        s32 lo = (c & 0x1f) * t >> 12;
        s32 mid = ((c & 0x3e0) >> 5) * t >> 12;
        unk_04 = (hi << 10) | (lo | (mid << 5));
    }
}

s32 Unk_02064944::func_020649dc()
{
    unk_04 = 0;
    unk_14 = 2;
    unk_1c = 0;
    unk_20 = 0x548;
    unk_18 = 0;
}

s32 Unk_02064944::func_020649f4()
{
    switch (unk_14) {
    case 1:
        func_020649dc();
        break;
    case 2:
        func_02064944();
        break;
    }
}

s32 Unk_02064944::func_02064a14()
{
    unk_08.x = 0;
    unk_08.y = -0x1000;
    unk_08.z = 0;
    unk_1c = unk_1c + unk_20;
    if (unk_18 == 0) {
        if (unk_1c >= 0x1000) {
            unk_1c = 0x1000;
            unk_20 = -0x333;
            unk_18 = 1;
        }
    } else if (unk_1c < 0) {
        unk_1c = 0;
        unk_20 = 0;
        unk_00 = 9;
        unk_14 = 0;
    }
    s32 c = unk_1c * 9 >> 12;
    unk_04 = (c << 10) | (c | (c << 5));
}

s32 Unk_02064944::func_02064a70()
{
    unk_04 = 0;
    unk_14 = 2;
    unk_1c = 0;
    unk_20 = 0x800;
    unk_18 = 0;
    unk_24[0].func_02064b98(0, 0xb4);
}

s32 Unk_02064944::func_02064a90()
{
    switch (unk_14) {
    case 1:
        func_02064a70();
        break;
    case 2:
        func_02064a14();
        break;
    }
}

s32 Unk_02064944::func_02064ab0()
{
    return unk_24[0].func_02064bc4();
}

void Unk_02064944::func_02064abc(void *m)
{
    if (unk_00 != 9) {
        *(volatile s32 *)0x4000440 = 2;
        *(volatile s32 *)0x4000454 = 0;
        func_02110bb0(m);
        func_02104270(2, (s16)unk_08.x, (s16)unk_08.y, (s16)unk_08.z);
        func_0210425c(2, unk_04);
    } else {
        func_0210425c(2, 0);
    }
}

void Unk_02064944::func_02064b10()
{
    Unk_02064674_Vec v;
    switch (unk_00) {
    case 0:
        func_02064a90();
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020649f4();
        break;
    }
    if (data_021c3070) {
        func_020e944c(&unk_08, data_021c3070->func_0203bc90());
    }
    v.x = unk_08.x;
    v.y = unk_08.y;
    v.z = unk_08.z;
    func_0206481c(&v, &unk_08);
    unk_24[0].func_02064be0();
}

s32 Unk_02064944::func_02064b88()
{
    unk_00 = 9;
    return unk_24[0].func_02064bfc();
}

void Unk_02064b98::func_02064b98(s32 a, s32 b)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        if (unk_00 == 2) {
            func_02064c18(a, b);
        }
    }
}

s32 Unk_02064b98::func_02064bc4()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02064c20();
    }
}

s32 Unk_02064b98::func_02064be0()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02064c24();
    }
}

s32 Unk_02064b98::func_02064bfc()
{
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02064c78();
    }
}

s32 Unk_02064b98::func_02064c18(s32 a, s32 b)
{
    unk_00 = a;
    unk_04 = b;
}

s32 Unk_02064b98::func_02064c20() {}

void Unk_02064b98::func_02064c24()
{
    u32 x;
    if (unk_00 == 0) {
        unk_04--;
        if (unk_04 < 0) {
            if (func_020b5184() || func_020b5164()) {
                x = data_020cb6fc[unk_00];
            } else {
                x = data_020cb6f8[unk_00];
            }
            func_0200402c(x);
            unk_00 = 2;
        }
    } else {
        unk_00 = 2;
    }
}

s32 Unk_02064b98::func_02064c78()
{
    unk_00 = 2;
    unk_04 = 0;
}
