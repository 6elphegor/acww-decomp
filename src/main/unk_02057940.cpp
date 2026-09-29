#include "types.h"

struct Unk_02057940_V {
    s32 x, y, z;
};

struct Unk_02057940_S {
    s32 x, y, z;
    Unk_02057940_S(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~Unk_02057940_S() {}
};

struct Unk_02057940_Owner {
    u8 pad_00[0x5c];
    Unk_02057940_V unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

class Unk_02057940;
typedef void (Unk_02057940::*Unk_02057940_Fn)();

extern "C" {
extern Unk_02057940_V data_021c5a78;
extern u8 data_020ca67c[];
extern u8 data_020ca680[];
extern u8 data_021c5a2c[];
extern u8 data_021c5a24[];
void func_020e761c(s32 *p, s32 target, s32 step);
void func_020e93a0(Unk_02057940_V *v, s32 angle);
void func_01ffca8c(Unk_02057940_V *a, Unk_02057940_V *b, Unk_02057940_V *out);
void func_0204edd8(Unk_02057940_V *a, Unk_02057940_V *b);
s32 func_020b50e8();
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
}

class Unk_02057940 {
public:
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0x60 - 0x52];
    Unk_02057940_V unk_60;
    Unk_02057940_V unk_6c;
    Unk_02057940_V unk_78;
    Unk_02057940_V unk_84;
    Unk_02057940_V unk_90;
    u8 pad_9c[0xa8 - 0x9c];
    s32 unk_a8;
    s32 unk_ac;
    s32 unk_b0;
    u8 pad_b4[0xc0 - 0xb4];
    s32 unk_c0;
    u8 pad_c4[0xcc - 0xc4];
    Unk_02057940_Owner *unk_cc;
    u8 unk_d0[4];
    u8 unk_d4;
    u8 pad_d5;
    volatile u16 unk_d6;
    u8 unk_d8;
    u8 unk_d9;
    u8 pad_da[2];
    u8 unk_dc[4];

    void func_02057940();
    void func_020579dc();
    void func_02057a58();
    void func_02057a70();
    void func_02057ad4();
    void func_02057b84();
    void func_02057be8();
    void func_02057cf4();
    void func_02057d70();
    void func_02057e48();
    void func_02058024();
    void func_020580d0();
    void func_0205811c();
    void func_02058188();
    void func_0205821c();

    void func_02058d34(u32 v);
    void func_02058d3c(Unk_02057940_V *out);
};

void Unk_02057940::func_02057940()
{
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    unk_84.x = data_021c5a78.x;
    unk_84.y = data_021c5a78.y;
    unk_84.z = data_021c5a78.z;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    s32 a, b, c;
    c = unk_84.z / 8;
    if (c < 0) c = -c;
    b = unk_84.y / 8;
    if (b < 0) b = -b;
    a = unk_84.x / 8;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_02057940::func_020579dc()
{
    if ((s32)unk_d6 < 10) {
        func_02058d3c(&unk_60);
        if (unk_cc != NULL) {
            unk_78.x = data_021c5a78.x;
            unk_78.y = data_021c5a78.y;
            unk_78.z = data_021c5a78.z;
            func_020e93a0(&unk_78, unk_cc->unk_8e);
        }
        func_01ffca8c(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02057a58()
{
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_02057940::func_02057a70()
{
    if ((s32)unk_d6 < 2) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 2) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02057ad4()
{
    func_02058d3c(&unk_6c);
    if (unk_cc != NULL) {
        unk_78.x = data_021c5a78.x;
        unk_78.y = data_021c5a78.y;
        unk_78.z = data_021c5a78.z;
        func_020e93a0(&unk_78, unk_cc->unk_8e);
    }
    func_01ffca8c(&unk_6c, &unk_78, &unk_6c);
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 2;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 2;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 2;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_02057940::func_02057b84()
{
    if ((s32)unk_d6 < 4) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 4) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02057be8()
{
    static Unk_02057940_S s(0x10000, 0, 0x17000);
    Unk_02057940_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0x2000;
    if (func_020b50e8() == 0x10) {
        unk_6c.x = s.x;
        unk_6c.y = s.y;
        unk_6c.z = s.z;
    } else {
        func_020e93a0(&t, unk_cc->unk_8e);
        func_01ffca8c(&t, &unk_cc->unk_5c, &t);
        func_0204edd8(&unk_6c, &t);
    }
    unk_6c.y = unk_6c.y + 0x1000;
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 4;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 4;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 4;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_02057940::func_02057cf4()
{
    static Unk_02057940_Fn tbl[3] = { &Unk_02057940::func_02058024, &Unk_02057940::func_02057e48, &Unk_02057940::func_02057d70 };
    u32 i = unk_d4;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

void Unk_02057940::func_02057d70()
{
    s32 n = data_020ca680[2];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8;
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8 = u;
        unk_ac = u;
        unk_b0 = u;
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            BOOL r = FALSE;
            if (unk_50 >= 0x1492 && unk_50 <= 0x14fd) r = TRUE;
            if (r) {
                func_02003e70(unk_dc, 0x70, 0x7f, 0);
            }
            unk_d4 = 3;
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02057e48()
{
    s32 n = data_020ca680[1];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8;
        func_02058d3c(&unk_60);
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8 = u;
        unk_ac = u;
        unk_b0 = u;
        func_020e761c(&unk_84.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_84.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_84.z, unk_6c.z, unk_90.z);
        if (unk_cc != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc->unk_8e);
        }
        func_01ffca8c(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            static Unk_02057940_S s(0x10000, 0, 0x17000);
            Unk_02057940_V t2;
            t2.x = 0;
            t2.y = 0;
            t2.z = 0x2000;
            if (func_020b50e8() == 0x10) {
                unk_6c.x = s.x;
                unk_6c.y = s.y;
                unk_6c.z = s.z;
            } else {
                func_020e93a0(&t2, unk_cc->unk_8e);
                func_01ffca8c(&t2, &unk_cc->unk_5c, &t2);
                func_0204edd8(&unk_6c, &t2);
            }
            unk_6c.y = unk_6c.y + 0x1000;
            s32 m = data_021c5a2c[1];
            s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / m;
            if (c < 0) c = -c;
            b = (unk_6c.y - unk_60.y) / m;
            if (b < 0) b = -b;
            a = (unk_6c.x - unk_60.x) / m;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 2;
        }
    }
}

void Unk_02057940::func_02058024()
{
    s32 n = data_020ca680[0];
    if ((s32)unk_d6 < n) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            unk_84.x = 0;
            unk_84.y = 0;
            unk_84.z = 0;
            unk_78.x = 0;
            unk_78.y = 0;
            unk_78.z = 0;
            unk_6c.x = data_021c5a78.x;
            unk_6c.y = data_021c5a78.y;
            unk_6c.z = data_021c5a78.z;
            s32 a, b, c;
    c = unk_6c.z / 12;
            if (c < 0) c = -c;
            b = unk_6c.y / 12;
            if (b < 0) b = -b;
            a = unk_6c.x / 12;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 1;
        }
    }
}

void Unk_02057940::func_020580d0()
{
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_02057940::func_0205811c()
{
    static Unk_02057940_Fn tbl[2] = { &Unk_02057940::func_0205821c, &Unk_02057940::func_02058188 };
    u32 i = unk_d4;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

void Unk_02057940::func_02058188()
{
    if ((s32)unk_d6 < data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
        s32 t = unk_a8;
        func_020e761c(&t, 0, unk_c0);
        s32 u = t;
        unk_a8 = u;
        unk_ac = u;
        unk_b0 = u;
        func_02058d3c(&unk_60);
        func_01ffca8c(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
            (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        }
    }
}

void Unk_02057940::func_0205821c()
{
    if ((s32)unk_d6 < data_020ca67c[unk_d4]) {
        func_02058d3c(&unk_60);
        func_01ffca8c(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[unk_d4]) {
            s32 a, b, c;
    c = unk_a8 / data_021c5a24[unk_d4];
            if (c < 0) c = -c;
            unk_c0 = c;
            unk_d4 = unk_d4 + 1;
        }
    }
}
