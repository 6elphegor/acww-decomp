#include "types.h"

struct Unk_02057940_V {
    s32 x, y, z;
};

class Unk_02057940_Target {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_5c(Unk_02057940_V *out);

    /* 0x04 */ u8 unk_04[0x88];
    /* 0x8c */ u16 unk_8c;
    /* 0x8e */ s16 unk_8e;
};

class Unk_02057940;

extern "C" {
void func_020e9960(Unk_02057940_V *out, Unk_02057940_V *a, Unk_02057940_V *b);
void func_020e761c(s32 *p, s32 target, s32 step);
void func_020e759c(s32 *p, s32 a, s32 b);
void func_020e93a0(Unk_02057940_V *v, s32 angle);
void func_01ffca8c(Unk_02057940_V *a, Unk_02057940_V *b, Unk_02057940_V *c);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_0204f334(s32 a);
s32 func_020594d0(s32 a);
s32 func_020902b0(s32 a, Unk_02057940_V *v, void *b, void *c);
Unk_02057940_V *func_020593b8(Unk_02057940_Target *t, s32 i);
Unk_02057940_V *func_02059384(Unk_02057940_Target *t, s32 i);
void func_02058c58(Unk_02057940_V *out, Unk_02057940 *self, s32 idx);
extern Unk_02057940_V data_021c5a84;
extern s32 data_020ca6c4[];
extern s32 data_021c5ae8[];
extern u8 data_020ca690[];
extern u8 data_021c5a30;
}

static inline BOOL Unk_020586bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

class Unk_02057940 {
public:
    /* 0x00 */ u8 unk_00[0x50];
    /* 0x50 */ u16 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59[3];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ Unk_02057940_V unk_60;
    /* 0x6c */ Unk_02057940_V unk_6c;
    /* 0x78 */ Unk_02057940_V unk_78;
    /* 0x84 */ Unk_02057940_V unk_84;
    /* 0x90 */ Unk_02057940_V unk_90;
    /* 0x9c */ Unk_02057940_V unk_9c;
    /* 0xa8 */ Unk_02057940_V unk_a8;
    /* 0xb4 */ u8 unk_b4[0xc];
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4[4];
    /* 0xc8 */ u8 unk_c8;
    /* 0xcc */ Unk_02057940_Target *unk_cc[2];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd6 */ volatile u16 unk_d6;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    void func_02058d34(u32 v);
    void func_02058d3c(Unk_02057940_V *out);

    void func_020582a0();
    void func_020582ec();
    void func_02058320();
    void func_02058350();
    void func_0205839c();
    void func_020583e4();
    void func_020583e8();
    void func_020583ec();
    void func_020584cc();
    void func_020585ac();
    void func_020585cc();
    void func_02058614();
    void func_020586bc();
    void func_020587b8();
    void func_0205881c();
    void func_02058930();
    void func_0205893c();
    void func_020589c4();
    void func_02058ae0();
    void func_02058b80();
    s32 func_02058cbc(Unk_02057940_V *dst, Unk_02057940_V *src, u32 idx);
};

void Unk_02057940::func_020582a0()
{
    Unk_02057940_V cur, t;
    func_02058d34(1);
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_02057940::func_020582ec()
{
    if ((s32)unk_d6 < 10) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02058320()
{
    func_02058d34(1);
    unk_d6 = 0;
    if (unk_54 == 2) {
        unk_54 = 0;
    }
    func_020902b0(0x93, &unk_60, 0, 0);
}

void Unk_02057940::func_02058350()
{
    if ((s32)unk_d6 < 9) {
        func_02058d3c(&unk_60);
        func_01ffca8c(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_0205839c()
{
    Unk_02057940_V cur, t;
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_02057940::func_020583e4() {}
void Unk_02057940::func_020583e8() {}

void Unk_02057940::func_020583ec()
{
    s32 v = unk_a8.x;
    if ((s32)unk_d6 < 8) {
        func_02058d3c(&unk_60);
        func_020e761c(&v, 0, unk_c0);
        s32 u = v;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_84.x, 0, unk_90.x);
        func_020e761c(&unk_84.y, 0, unk_90.y);
        func_020e761c(&unk_84.z, 0, unk_90.z);
        if (unk_cc[0] != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        func_01ffca8c(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 8) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_020584cc()
{
    Unk_02057940_V cur, t;
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    if (unk_cc[0] != NULL) {
        func_020e93a0(&unk_84, (s16)-unk_cc[0]->unk_8e);
    }
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
    a = unk_a8.x / 8;
    if (a < 0) a = -a;
    unk_c0 = a;
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_02057940::func_020585ac()
{
    func_02058d3c(&unk_60);
    func_01ffca8c(&unk_60, &unk_84, &unk_60);
}

void Unk_02057940::func_020585cc()
{
    Unk_02057940_V cur, t;
    func_02058d34(0);
    func_02058d3c(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
}

void Unk_02057940::func_02058614()
{
    Unk_02057940_V cur, t;
    s32 n = unk_d6;
    if (n < 9) {
        func_02058d3c(&cur);
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        unk_60.y = cur.y + unk_6c.y;
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            func_020e9960(&t, &unk_60, &cur);
            unk_84.x = t.x;
            unk_84.y = t.y;
            unk_84.z = t.z;
            func_02058d34(0);
        }
    } else if (n == 9) {
        func_02058d3c(&unk_60);
        func_01ffca8c(&unk_60, &unk_84, &unk_60);
    }
}

void Unk_02057940::func_020586bc()
{
    Unk_02057940_V cur, pos, off;
    s32 a, b;
    func_02058d3c(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = data_021c5a84;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        func_01ffca8c(&pos, func_020593b8(unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    func_02058c58(&off, this, 0);
    func_01ffca8c(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = unk_9c.y;
    unk_6c.z = unk_9c.z;
    a = (unk_6c.z - unk_60.z) / 2;
    if (a < 0) a = -a;
    b = (unk_6c.x - unk_60.x) / 2;
    if (b < 0) b = -b;
    unk_90.x = b;
    unk_90.y = 0;
    unk_90.z = a;
    unk_d6 = 0;
    func_02058d34(1);
}

void Unk_02057940::func_020587b8()
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

void Unk_02057940::func_0205881c()
{
    Unk_02057940_V cur, pos, off;
    s32 a, b, c;
    func_02058d3c(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = data_021c5a84;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        func_01ffca8c(&pos, func_02059384(unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    func_02058c58(&off, this, 0);
    func_01ffca8c(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = cur.y + unk_9c.y;
    unk_6c.z = unk_9c.z;
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

void Unk_02057940::func_02058930()
{
    func_02058d34(1);
}

void Unk_02057940::func_0205893c()
{
    static void (Unk_02057940::*const tbl[4])() = {
        &Unk_02057940::func_02058ae0,
        &Unk_02057940::func_020589c4,
        &Unk_02057940::func_020589c4,
        &Unk_02057940::func_020589c4,
    };
    if (unk_d4 < 4) {
        (this->*tbl[unk_d4])();
    }
}

void Unk_02057940::func_020589c4()
{
    Unk_02057940_V cur;
    s32 v = unk_a8.x;
    s32 a = data_020ca6c4[unk_d4];
    s32 b = data_021c5ae8[unk_d4];
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        s32 k = func_020594d0(func_0204f334(unk_50 - 0x12e8));
        a = func_01ffcb0c(a, k);
        b = func_01ffcb0c(b, k);
    }
    func_020e759c(&v, a, b);
    s32 u = v;
    unk_a8.x = u;
    unk_a8.y = u;
    unk_a8.z = u;
    func_02058d3c(&cur);
    func_020e761c(&unk_60.x, unk_9c.x, unk_90.x);
    func_020e761c(&unk_60.y, cur.y + unk_9c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_9c.z, unk_90.z);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        if ((*(volatile u8 *)&unk_d4) >= 4) {
            func_02058d34(0);
        }
    }
}

void Unk_02057940::func_02058ae0()
{
    func_02058d3c(&unk_60);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        s32 n, t;
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        n = data_021c5a30;
        t = (unk_9c.x - unk_60.x) / n;
        if (t < 0) t = -t;
        unk_90.x = t;
        t = unk_9c.y / n;
        if (t < 0) t = -t;
        unk_90.y = t;
        t = (unk_9c.z - unk_60.z) / n;
        if (t < 0) t = -t;
        unk_90.z = t;
    }
}

void Unk_02057940::func_02058b80()
{
    Unk_02057940_V pos, off;
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = data_021c5a84;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        func_01ffca8c(&pos, func_020593b8(unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    func_02058c58(&off, this, 0);
    func_01ffca8c(&pos, &off, &pos);
    func_02058cbc(&unk_9c, &pos, 0);
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    func_02058d34(1);
}
