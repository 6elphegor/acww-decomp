#include "types.h"

struct Unk_020be018_Vec { s32 x, y, z; };
struct Unk_020bee28_Vec2 {
    s32 x, y;
    Unk_020bee28_Vec2(s32 a, s32 b) { x = a; y = b; }
};
struct Unk_020bf1d8_Vec {
    s32 x, y, z;
    Unk_020bf1d8_Vec(const Unk_020bf1d8_Vec &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_020bec40_Col { u16 r : 5; u16 g : 5; u16 b : 5; };
struct Unk_020bec40_Pair { Unk_020bec40_Col a; Unk_020bec40_Col b; };
struct Unk_021f4398 {
    void func_020bd718(s32 i, u16 *col);
    void func_020bd758(s32 i);
};
struct Unk_021f3010 { s32 unk_00; s32 unk_04; u8 unk_08; u8 unk_09; u8 pad[2]; };

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffca8c(Unk_020be018_Vec *a, Unk_020be018_Vec *b, Unk_020be018_Vec *out);
void func_020e9888(Unk_020be018_Vec *v, s32 scale);
s32 func_02133150(s32 a, s32 b);
s32 func_02063b8c(s32 n);
s32 func_02089244(void *p);
s32 func_020891d8(void *p);
void func_020891d0(void *p);
void func_020891bc(void *p);
s32 func_020bd950(Unk_021f3010 *p, s32 v);
void func_020bd964(Unk_021f3010 *p, s32 v);
void func_020bd604(void *p, s32 a, s32 b, s32 c, BOOL d);
void func_020bd618(void *p);
void func_020bd624(void *p);
void func_020bd640(void *p);
void func_020bd64c(void *p);
void func_02040208(s32 a);
s32 func_02094348();
s32 func_020947f0();
void func_020b17e0(s32 a, BOOL b);
void func_0209e148(void *p, s32 a);
s32 func_020beef8(s32 a, s32 flag);

extern Unk_021f4398 data_021f4398;
extern u8 data_021f4488[];
extern u8 data_021d7350[];
extern u8 data_021f14e0[];
extern Unk_020bf1d8_Vec data_021c309c;
extern Unk_020bf1d8_Vec data_021f4880;
extern s32 data_020c8cb8;
extern s32 data_020c8cbc;
extern s32 data_020d0e0c[];
extern Unk_020bec40_Pair data_020d0e80[];
extern s32 data_020d0f80[];
extern s32 data_020d0fa4[];
extern s32 data_020d1288[];
extern s32 data_020d1338[];
extern s16 data_02135f44[];
extern Unk_021f3010 data_021f3010[];
}

struct Unk_020be018 {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x14];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ Unk_020be018_Vec unk_34;
    /* 0x40 */ Unk_020be018_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;

    s32 func_020be018(s32 a, s32 b, s32 c);
    void func_020be06c(s32 a, s32 b);
    void func_020be094();
    void func_020be0bc();
    s32 func_020bde0c(s32 a, s32 b, s32 c);
    void func_020bdd70(s32 a);
    void func_020bdd4c(s32 a);
    s32 func_020bea24(u32 a);
    s32 func_020beac8(u32 a);
    void func_020beb40(u32 a);
    void func_020beb88(s32 a);
    s32 func_020bebfc(s32 a);
    void func_020bec00();
    void func_020bec40();
    void func_020bef24();
    void func_020bef2c();
    void func_020bef44();
    void func_020bef90();
    void func_020bef98();
    void func_020bf15c();
    void func_020bf1d0();
    void func_020bf1d8();
    void func_020bf3bc();
    void func_020bf400();
};

extern "C" {
Unk_020be018 *func_020bc754(void *tab, s32 a, s32 b, void *pos, s32 c);
void func_020bf18c(Unk_020be018_Vec *pos, s32 scale, s32 speed);
Unk_020bee28_Vec2 func_020bee28(s32 a, s32 b);
}

void Unk_020be018::func_020beb40(u32 a)
{
    s32 id = (a & 0xf) + 0x1d;
    unk_0c = id;
    unk_58 = 2;
    unk_60 = a;
    unk_64 = 0;
    unk_68 = 0;
    BOOL r = FALSE;
    s32 t = id - 0x21;
    if ((u32)t <= 9 && ((1 << t) & 0x249)) r = TRUE;
    if (r) {
        func_020bea24(a);
    } else {
        func_020beac8(a);
    }
}

void Unk_020be018::func_020beb88(s32 a)
{
    s32 max;
    s32 *tab;
    u32 v = unk_60;
    BOOL f = ((v >> 30) & 1) != 0;
    if ((v >> 31) & 1) {
        if (f) { tab = data_020d1288; max = 0xb0; }
        else { tab = data_020d0f80; max = 0x24; }
    } else {
        if (f) { tab = data_020d1338; max = 0xb0; }
        else { tab = data_020d0fa4; max = 0x24; }
    }
    if (a < 0) a = func_02089244(unk_10);
    if (a < 0) max = 0;
    else if (a <= max) max = a;
    s32 x = tab[max];
    unk_4c = x;
    unk_50 = x;
}

s32 Unk_020be018::func_020bebfc(s32 a)
{
    return a << 14;
}

void Unk_020be018::func_020bec00()
{
    u32 v = unk_60;
    BOOL f = ((v >> 31) & 1) != 0;
    s32 lo = func_020beef8((v >> 8) & 3, f);
    s32 hi = lo + 1;
    if (lo < 15) data_021f4398.func_020bd758(lo);
    if (hi < 15) data_021f4398.func_020bd758(hi);
}

extern "C" s32 func_020beef8(s32 a, s32 flag)
{
    s32 r = 0xf;
    if (flag != 0) {
        r = 0;
    } else if (a == 0) {
        r = 2;
    } else if (a == 1) {
        r = 4;
    } else if (a == 2) {
        r = 6;
    } else if (a == 3) {
        r = 8;
    }
    return r;
}

void Unk_020be018::func_020bec40()
{
    s32 n = unk_64;
    s32 t, lo, hi, r, g, inv;
    if (n < 0x10) {
        t = 0;
    } else if (n < 0x1b) {
        t = func_02133150((n - 0x10) << 12, 11);
    } else {
        t = 0x1000;
    }
    u32 v = unk_60;
    s32 k = (v >> 8) & 3;
    BOOL f = ((v >> 31) & 1) != 0;
    lo = func_020beef8(k, f);
    hi = lo + 1;
    s32 i1, i0;
    i0 = 0;
    i1 = i0;
    if (n >= 0xb) {
        s32 x = n & 2;
        if (x == 0) i0 = 1;
        if (x != 0) i1 = 1;
        else i1 = 0;
    }
    s32 *p0 = data_020d0e0c + i0;
    s32 *p1 = data_020d0e0c + i1;
    if (k >= 4 || lo >= 15 || hi >= 15) return;
    Unk_020bec40_Pair *e = &data_020d0e80[k];
    r = 0; g = 0; inv = 0x1000 - t;
    r = func_01ffcb0c(data_020d0e80[k].a.r << 12, inv) + func_01ffcb0c(e->b.r << 12, t);
    g = func_01ffcb0c(data_020d0e80[k].a.g << 12, inv) + func_01ffcb0c(e->b.g << 12, t);
    s32 b = func_01ffcb0c(data_020d0e80[k].a.b << 12, inv) + func_01ffcb0c(e->b.b << 12, t);
    u32 B1, G1, R0, R1, B0, G0;
    s32 r0 = func_01ffcb0c(r, *p0);
    s32 g0 = func_01ffcb0c(g, *p0);
    s32 b0 = func_01ffcb0c(b, *p0);
    s32 r1 = func_01ffcb0c(r, *p1);
    s32 g1 = func_01ffcb0c(g, *p1);
    s32 b1 = func_01ffcb0c(b, *p1);
    G0 = (g0 + 0x800) >> 12;
    B0 = (b0 + 0x800) >> 12;
    R1 = (r1 + 0x800) >> 12;
    G1 = (g1 + 0x800) >> 12;
    B1 = (b1 + 0x800) >> 12;
    R0 = (r0 + 0x800) >> 12;
    if (R0 > 0x1f) R0 = 0x1f;
    if (G0 > 0x1f) G0 = 0x1f;
    if (B0 > 0x1f) B0 = 0x1f;
    if (R1 > 0x1f) R1 = 0x1f;
    if (G1 > 0x1f) G1 = 0x1f;
    if (B1 > 0x1f) B1 = 0x1f;
    u16 col[2];
    col[0] = R0 | (G0 << 5) | (B0 << 10);
    col[1] = R1 | (G1 << 5) | (B1 << 10);
    s32 idx = unk_24;
    s32 u8v = unk_08;
    Unk_021f4398 *pal = &data_021f4398;
    pal->func_020bd718(lo, &col[0]);
    pal->func_020bd718(hi, &col[1]);
    func_020bd950(data_021f3010 + idx, u8v);
}

extern "C" Unk_020bee28_Vec2 func_020bee28(s32 a, s32 b)
{
    Unk_020bf1d8_Vec v = data_021c309c;
    s32 base = data_020c8cb8;
    s32 d = v.z - base;
    s32 cnt = data_020c8cbc;
    s32 h = func_02133150(cnt << 2, 2);
    s32 p = func_01ffc5a4((v.x - cnt * 3) << 4, h);
    s32 q = func_01ffc5a4(d, base << 2);
    if (p < -0x10000) p = -0x10000;
    else if (p > 0x10000) p = 0x10000;
    if (q < 0) q = 0;
    else if (q > 0x1000) q = 0x1000;
    q = func_01ffcb0c(q - 0x1000, q - 0x1000);
    p = -p;
    s32 e = 0x1000 - q;
    s32 w = (e - 0x800) << 5;
    s32 c;
    if (b < 0) c = 0;
    else if (b > 0xbf000) c = 0xbf000;
    else c = b;
    s32 m = func_01ffcb0c(w, func_01ffc5a4(0xbf000 - c, 0xbf000));
    s32 ry = b + m;
    return Unk_020bee28_Vec2(a + p, ry);
}

void Unk_020be018::func_020bef24()
{
    func_020be094();
}

void Unk_020be018::func_020bef2c()
{
    if (func_020891d8(unk_10)) unk_04 = 3;
}

void Unk_020be018::func_020bef44()
{
    s32 a = (func_02063b8c(0x80) * (func_02063b8c(2) * 2 - 1) + 0x80) << 12;
    s32 c = (func_02063b8c(0x50) + 0x50) << 12;
    Unk_020be018_Vec *p = &unk_34;
    unk_34.x = a;
    p->y = c;
    p->z = 0;
    unk_0c = func_02063b8c(8) + 8;
    unk_58 = 2;
}

void Unk_020be018::func_020bef90()
{
    func_020be094();
}

void Unk_020be018::func_020bef98()
{
    if (unk_60 == 0) {
        if (func_020be018(0x30a, 0x8000, -100)) {
            unk_04 = 3;
        } else if (func_020bde0c(0x1b000, 0x15000, 0)) {
            s32 t = unk_08 + 1;
            func_020bd964(data_021f3010 + unk_24, t);
            unk_08 = t;
            func_020bd624(data_021f4488);
            func_020bdd70(0x7ff);
            unk_60 = 1;
            unk_64 = 0;
        } else if (func_02089244(unk_10) == 0) {
            if (unk_64++ == 0) func_020bdd70(0x7fe);
        } else {
            unk_64 = 0;
        }
    } else if (unk_60 == 1) {
        unk_0c = 0x14;
        func_020be0bc();
        func_020891d0(unk_10);
        unk_40.x = unk_2e ? 0x3c00 : -0x3c00;
        unk_40.y = -0x4000;
        unk_40.z = 0;
        func_020bf18c(&unk_34, unk_4c, unk_40.x);
        unk_4c = func_01ffcb0c(unk_4c, 0xe8c);
        unk_50 = func_01ffcb0c(unk_50, 0xe8c);
        unk_60 = 2;
        unk_64 = 0;
    } else if (unk_60 == 2) {
        unk_64 = unk_64 + 1;
        if (unk_64 >= 1) {
            unk_4c = func_01ffcb0c(unk_4c, 0x119a);
            unk_50 = func_01ffcb0c(unk_50, 0x119a);
            unk_60 = 6;
            unk_64 = 0;
            func_020891bc(unk_10);
        }
    }
    if ((s32)unk_60 >= 6) {
        unk_40.y += 0x59a;
        func_020e9888(&unk_40, 0x1000);
        func_01ffca8c(&unk_34, &unk_40, &unk_34);
    }
    if ((s32)unk_60 >= 6 && unk_34.y > 0xd0000) {
        func_020bd618(data_021f4488);
        func_02040208(0x45);
        unk_04 = 3;
    }
    if ((s32)unk_60 >= 1) {
        func_020bd604(data_021f4488, unk_34.x, unk_34.y, unk_4c, unk_2e == 0 ? 1 : 0);
    }
}

void Unk_020be018::func_020bf15c()
{
    func_020be06c(unk_08 == 0x28 ? 1 : 0, 0x8000);
    unk_0c = 0x13;
    unk_58 = 2;
    unk_60 = 0;
    unk_64 = 0;
}

extern "C" void func_020bf18c(Unk_020be018_Vec *pos, s32 scale, s32 speed)
{
    volatile Unk_020be018_Vec tmp;
    Unk_020be018 *o = func_020bc754(data_021f14e0, 2, 0x3c, pos, 0);
    if (o) {
        o->unk_4c = scale;
        o->unk_50 = scale;
        o->unk_40.x = func_01ffcb0c(speed, 0x800);
        o->unk_40.y = 0;
        o->unk_40.z = 0;
    }
}

void Unk_020be018::func_020bf1d0()
{
    func_020be094();
}

void Unk_020be018::func_020bf1d8()
{
    if (unk_60 == 0) {
        if (func_020be018(0x385, 0x1000, 0xfa0)) {
            unk_04 = 3;
        } else if (func_020bde0c(0x1a000, 0xc000, 0x5000)) {
            func_020bd964(data_021f3010 + unk_24, 0x24);
            unk_08 = 0x24;
            func_020bdd70(0x7fc);
            func_020bd64c(data_021f4488);
            unk_60 = 1;
        } else {
            func_020bdd4c(0x7fb);
        }
    } else if (unk_60 == 1) {
        unk_0c = 0x17;
        func_020be0bc();
        unk_40.x = unk_2e ? 0x2666 : -0x2666;
        unk_40.y = -0x399a;
        unk_40.z = 0;
        unk_60 = 2;
    } else if (unk_60 == 2) {
        if (func_020891d8(unk_10)) {
            func_020bd964(data_021f3010 + unk_24, 0x25);
            unk_08 = 0x25;
            unk_60 = 3;
            unk_64 = 1;
        }
    } else if (unk_60 == 3) {
        unk_0c = 0x18;
        func_020be0bc();
        unk_60 = 4;
        unk_68 = 0;
    } else if (unk_60 == 4) {
        if (unk_34.y > 0xd0000) {
            func_02040208(0x44);
            func_02094348();
            s32 obj = func_020947f0();
            func_020b17e0(obj, unk_2e == 0 ? 1 : 0);
            func_020bd640(data_021f4488);
            unk_04 = 3;
        }
    }
    if ((s32)unk_60 >= 2) {
        Unk_020bf1d8_Vec v = data_021f4880;
        s32 sc;
        if ((s32)unk_60 >= 4) {
            v.x = unk_2e ? 0x19a : -0x19a;
            v.y = 0x19a;
            sc = 0xfd7;
        } else {
            v.y = 0x800;
            sc = 0x1000;
        }
        func_01ffca8c(&unk_40, (Unk_020be018_Vec *)&v, &unk_40);
        func_020e9888(&unk_40, sc);
        func_01ffca8c(&unk_34, &unk_40, &unk_34);
    }
    if ((s32)unk_60 >= 1) {
        func_020bd604(data_021f4488, unk_34.x, unk_34.y, unk_4c, unk_2e == 0 ? 1 : 0);
    }
    func_020bf400();
}

void Unk_020be018::func_020bf3bc()
{
    func_020be06c(func_02063b8c(2) == 0 ? 1 : 0, 0x1000);
    unk_0c = 0x16;
    unk_58 = 2;
    func_0209e148(data_021d7350, 9);
    unk_60 = 0;
    unk_64 = 0;
    unk_68 = 0;
}

void Unk_020be018::func_020bf400()
{
    if (unk_64 > 0) {
        if (unk_64 == 1) {
            s32 r4, scale, y, q, idx;
            unk_64 = func_02063b8c(2) + 1;
            r4 = func_02063b8c(2) + 2;
            scale = unk_4c;
            q = func_01ffc5a4(func_02063b8c(0x10) << 12, scale);
            idx = ((u16)(s16)func_02063b8c(0x10000) >> 4) << 1;
            y = unk_34.y + func_01ffcb0c(q, data_02135f44[idx]);
            Unk_020be018_Vec pos;
            pos.x = unk_34.x + func_01ffcb0c(q, data_02135f44[idx + 1]);
            pos.y = y;
            pos.z = 0;
            Unk_020be018 *o = func_020bc754(data_021f14e0, 2, 0x3c, &pos, r4 & 0xf);
            if (o) {
                o->unk_4c = scale;
                o->unk_50 = scale;
            }
        } else {
            unk_64 = unk_64 - 1;
        }
    }
}
