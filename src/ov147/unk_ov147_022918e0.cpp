#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov147_0229213c_Desc {
    u8 *unk_00;
    u8 *unk_04;
    u8 unk_08;
};

class Unk_020aa72c {
public:
    void func_020aa784(const u8 *p);
    void func_020aa780(const void *p);
    void func_020aa72c();
    void func_020aa778(const u8 *p);
    void *func_020aa7a0();
};

class Unk_020aa3b8 {
public:
    void func_020aa5f4();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa4cc(s32 v);
    s32 func_020aa4b8();
    s32 func_020aa514();
    void func_020aa680(s32 a, s32 b);
    void func_020aa638(s32 a, const u8 *b, s32 c, const u8 *d, const char *e, s32 f);
    void func_020aa608();
};

class Unk_020660f8 {
public:
    Unk_020aa3b8 *func_020679b4();
    void func_020679c0(s32 v);
    void func_02067a3c(s32 a, void *b);
    void func_02067a84(u8 *a, void *b);
    void func_02067934();
    void func_02067a78();
};

class Unk_0209865c {
public:
    void *func_0209888c();
};

class Unk_0209da44 {
public:
    s32 func_0209e1a0();
};

class Unk_02065554 {
public:
    u8 func_02065578();
};

class Unk_0208f238 {
public:
    s32 func_0208f15c();
};

class Unk_020e45f8 {
public:
    BOOL func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
};

class Unk_020940a0 {
public:
    void func_020940d0(void *p);
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 unk_04[0x18];
};

extern "C" {
Unk_020660f8 *func_02067918(s32 a);
void func_0200212c(s32 a);
void func_0203d4c4(s32 a);
void func_0203d4c8(s32 a);
void func_020020b8(s32 a);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_02002398(s32 a, s32 b);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_020641b4(void *a, void *b, u32 n);
void func_02116048(void *a, void *b, u32 n);
void func_02115fb4(void *a, s32 b, u32 n);
void func_0200402c(s32 a);
u32 func_0209ccd0();
void *func_0208f158(void *p);
BOOL func_020978c8(void *t, s32 i);
s32 func_020978a4(void *t);
void *func_02097868(void *t, s32 i);
void func_020a0420(s32 i);
void func_020a0364();
void func_020a0358();
void func_020a034c();
void func_020a7bd8(void *a, void *b);
const void *func_020aa3ac(u32 i);

extern u8 data_021e7f8c[];
extern u8 data_021d735c[];
extern Unk_0209da44 data_021d7350;
extern u8 data_021edb5c;
extern u8 data_021c3cc0;
extern void *data_021f482c;
}

class Unk_ov147_022933e8;

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual s32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// Sub-object (vtable 0x022933e8) on the Unk_020d8c7c library base, pointed to by Unk_ov147_022934a4::unk_44.
class Unk_ov147_022933e8 : public Unk_020d8c7c {
public:
    void func_ov147_022918e0(u32 *p, s32 x, s32 y);
    void func_ov147_02291914(u32 *p, s32 i);
    BOOL func_ov147_02291948();
    void func_ov147_022919c8();
    BOOL func_ov147_022919d8();
    void func_ov147_02291a9c();
    void func_ov147_02291ad8();
    void func_ov147_02291af4();
    void func_ov147_02291b14();
    void func_ov147_02291b28();
    void func_ov147_02291c08();
    void func_ov147_02292988(s32 state);

    /* 0x50 */ u8 unk_50[0x4e];
    /* 0x9e */ u8 unk_9e;
    u8 pad_9f;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u16 unk_a8;
    u8 pad_aa[2];
    /* 0xac */ u8 unk_ac[0x20];
    /* 0xcc */ Unk_020e45f8 unk_cc;
};

extern "C" {
extern u16 data_ov147_02293c8c[];
extern u32 data_ov147_0229448c[][8];
extern u32 data_ov147_02297c8c[][8];
extern u32 data_ov147_022937ec[][8];
extern u32 data_ov147_02293aac[][8];
extern u8 data_ov147_0229351c[];
extern u8 data_ov147_02293534[];
extern u8 data_ov147_0229354c[];
extern u8 data_ov147_02293564[];
extern u8 data_ov147_0229357c[];
extern u8 data_ov147_02293594[];
extern u8 data_ov147_022938cc[];
extern u8 data_ov147_022930bc[];
extern void *data_ov147_02293270;
extern Unk_ov147_0229213c_Desc data_ov147_02293430;
extern Unk_ov147_0229213c_Desc data_ov147_0229343c;
extern Unk_ov147_0229213c_Desc data_ov147_02293448;
extern Unk_ov147_0229213c_Desc data_ov147_02293454;
extern Unk_ov147_0229213c_Desc data_ov147_02293460;
extern Unk_ov147_0229213c_Desc data_ov147_0229346c;
extern Unk_ov147_0229213c_Desc data_ov147_02293478;
extern Unk_ov147_0229213c_Desc data_ov147_02293484;
extern Unk_ov147_0229213c_Desc data_ov147_02293490;
u8 func_ov147_02291ce0();
void func_ov147_02292ff0(void *p, s32 v);
}

static inline BOOL Unk_ov147_02291b28_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

class Unk_ov147_022934a4 : public Unk_020ddcf0 {
public:
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();

    void func_ov147_02291cf8();
    void func_ov147_02291d34();
    void func_ov147_02291dbc();
    void func_ov147_02291dc8();
    void func_ov147_02291dd4();
    void func_ov147_02292074();
    void func_ov147_0229213c(Unk_ov147_0229213c_Desc *d);

    /* 0x44 */ Unk_ov147_022933e8 *unk_44;
};

// ---- Unk_ov147_022933e8 ----

void Unk_ov147_022933e8::func_ov147_022918e0(u32 *p, s32 x, s32 y) {
    s32 v = data_ov147_02293c8c[x + (y << 5)] & 0x3ff;
    if (v != 0x10 && v >= 0x140) {
        func_ov147_02291914(p, v - 0x140);
    }
}

void Unk_ov147_022933e8::func_ov147_02291914(u32 *p, s32 i) {
    u32 *src = data_ov147_0229448c[i];
    u32 *dst = data_ov147_02297c8c[i];
    s32 j;
    for (j = 0; j < 8; j++) {
        *dst++ = *src & *p;
        p++;
        src++;
    }
}

BOOL Unk_ov147_022933e8::func_ov147_02291948() {
    if (unk_a0 == 0) {
        func_0200212c(5);
        func_0203d4c4(1);
        return TRUE;
    }
    unk_a0 = unk_a0 - 1;
    u32 *p = data_ov147_022937ec[unk_a0];
    s32 i;
    for (i = 0; i < 0x1c0; i++) {
        func_ov147_02291914(p, i);
    }
    unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
    return FALSE;
}

void Unk_ov147_022933e8::func_ov147_022919c8() {
    unk_a0 = 7;
    unk_a6 = 3;
}

BOOL Unk_ov147_022933e8::func_ov147_022919d8() {
    s32 y;
    s32 r4 = unk_a0;
    if (r4 < 0x36) {
        r4 += 9;
        s32 r6 = 0;
        for (; r6 < 0xf && r4 >= 9; r6++, r4--) {
            u32 *p = data_ov147_02293aac[r6];
            s32 x = r4;
            y = 0;
            if (r4 > 0x1f) {
                y = r4 - 0x1f;
                x = 0x1f;
            }
            for (; x >= 0 && y < 0x18; x--, y++) {
                if (y < 0x15) {
                    func_ov147_022918e0(p, x, y);
                }
            }
        }
        unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
        unk_a0 = unk_a0 + 1;
        goto ret0;
    }
    func_02116048(data_ov147_0229448c, data_ov147_02297c8c, 0x3800);
    unk_cc.func_020b8714((u32)data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
    return TRUE;
ret0:
    return FALSE;
}

void Unk_ov147_022933e8::func_ov147_02291a9c() {
    unk_a6 = 1;
    unk_a0 = 0;
    unk_a4 = 0x4b0;
    func_02115fb4(data_ov147_02297c8c, 0, 0x3800);
    func_020020b8(5);
}

void Unk_ov147_022933e8::func_ov147_02291ad8() {
    func_0200212c(5);
    func_0203d4c4(1);
    unk_a6 = 5;
}

void Unk_ov147_022933e8::func_ov147_02291af4() {
    if (unk_a6 == 2) {
        func_ov147_022919c8();
    } else {
        func_ov147_02291ad8();
    }
}

void Unk_ov147_022933e8::func_ov147_02291b14() {
    if (unk_a6 == 1) {
        unk_a0 = 0x64;
    }
}

void Unk_ov147_022933e8::func_ov147_02291b28() {
    switch (unk_a6) {
    case 0:
        if (Unk_ov147_02291b28_IsTwo(data_021c3cc0)) {
            func_ov147_02291c08();
            func_ov147_02291a9c();
        }
        break;
    case 6:
        if (Unk_ov147_02291b28_IsTwo(data_021c3cc0)) {
            func_ov147_02292ff0(unk_ac, 1);
            unk_a8 = 0xe10;
            unk_a6 = 5;
        }
        break;
    case 1:
        if (func_ov147_022919d8()) {
            unk_a6 = 2;
            if (unk_a7 == 0) {
                func_ov147_02292ff0(unk_ac, 0);
            }
        }
        break;
    case 2:
        if (unk_a4 != 0) {
            unk_a4 = *(volatile u16 *)&unk_a4 - 1;
        } else {
            func_ov147_022919c8();
            func_ov147_02292ff0(unk_ac, 1);
        }
        break;
    case 3:
        if (func_ov147_02291948()) {
            unk_a6 = 4;
        }
        break;
    case 4:
    case 5:
        break;
    }
}

void Unk_ov147_022933e8::func_ov147_02291c08() {
    func_0203d4c8(1);
    func_0200226c(5, 0, 0, 0);
    func_02002398(5, 1);
    func_020026c4(data_ov147_0229351c, (s32)data_021f482c, 5, 8, 8, 0xf);
    func_020641b4(data_ov147_02293534, data_ov147_02293c8c, 0x800);
    func_020024f0(data_ov147_02293c8c, 5, 0x800, 0);
    func_020641b4(data_ov147_0229354c, data_ov147_0229448c, 0x3800);
    func_02115fb4(data_ov147_02297c8c, 0, 0x3800);
    func_020641b4(data_ov147_02293564, data_ov147_022937ec, 0xe0);
    func_020641b4(data_ov147_0229357c, data_ov147_02293aac, 0x1e0);
    func_020641b4(data_ov147_02293594, data_ov147_022938cc, 0x1e0);
    func_02002438(data_ov147_02297c8c, 5, 0x140, 0x140, 0x2ff);
}

extern "C" u8 func_ov147_02291ce0() {
    return data_ov147_022930bc[func_0209ccd0()];
}

// ---- Unk_ov147_022934a4 ----

void Unk_ov147_022934a4::func_ov147_02291cf8() {
    u8 *g = data_021e7f8c;
    if (((Unk_02065554 *)func_0208f158(g))->func_02065578()) {
        if (((Unk_0208f238 *)g)->func_0208f15c() == 0) {
            u8 v = 0x35;
            unk_3c->func_02067a84(&v, 0);
        }
    }
}

void Unk_ov147_022934a4::func_ov147_02291d34() {
    Unk_020660f8 *r7 = func_02067918(0);
    s32 a = r7->func_020679b4()->func_020aa514();
    u8 r6 = 0x31;
    s32 r5 = 0;
    s32 r4;
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            if (a == r5) {
                func_020a0420(r4);
                Unk_020e1c64 o;
                ((Unk_020940a0 *)((Unk_0209865c *)func_02097868(data_021d735c, r4))->func_0209888c())->func_020940d0(&o);
                r7->func_02067a3c(0, &o);
                r6 = 4;
            }
            r5++;
        }
    }
    u8 v = r6;
    r7->func_02067a84(&v, data_ov147_02293270);
}

void Unk_ov147_022934a4::func_ov147_02291dbc() {
    unk_44->func_ov147_02292988(3);
}

void Unk_ov147_022934a4::func_ov147_02291dc8() {
    unk_44->func_ov147_02292988(6);
}

void Unk_ov147_022934a4::func_ov147_02291dd4() {
    func_020a0364();
    unk_44->func_ov147_02292988(7);
}

void Unk_ov147_022934a4::vfunc_18() {
    typedef void (Unk_ov147_022934a4::*Fn)();
    Unk_020660f8 *sp0 = func_02067918(0);
    s32 r5 = sp0->func_020679b4()->func_020aa514();
    s32 sp4 = func_020978a4(data_021d735c);
    s32 sp8 = data_021d7350.func_0209e1a0();
    static Fn t0[4] = { 0, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t1[4] = { &Unk_ov147_022934a4::func_ov147_02291dd4, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t2[4] = { &Unk_ov147_022934a4::func_ov147_02291dc8, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn t3[5] = { &Unk_ov147_022934a4::func_ov147_02291dc8, 0, &Unk_ov147_022934a4::func_ov147_02291cf8, 0, &Unk_ov147_022934a4::func_ov147_02291dbc };
    static Fn *const tbl[4] = { t0, t1, t2, t3 };
    s32 mode = 3;
    switch (unk_1e) {
    case 0:
        if (r5 == 0) {
            sp0->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(8);
        }
        break;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (sp4 <= 0 && sp8 != 0) {
            mode = 0;
        } else if (sp8 == 0) {
            mode = 1;
        } else if (sp4 == 4) {
            mode = 2;
        }
        {
            Fn *row = tbl[mode];
            if (row[r5]) {
                (this->*row[r5])();
            }
        }
        break;
    case 0x30:
        if (r5 == 0) {
            sp0->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(9);
        }
        break;
    case 0x32:
    case 0x33:
    case 0x34:
        break;
    case 0x35:
        if (r5 == 0) {
            unk_3c->func_02067a84(&data_021edb5c, 0);
            unk_44->func_ov147_02292988(10);
        }
        break;
    case 3:
        func_ov147_02291d34();
        break;
    }
}

void Unk_ov147_022934a4::vfunc_70() {
    if (unk_1e == 0x24 || unk_1e == 0x27) {
        func_0200402c(0x3a);
    }
}

void Unk_ov147_022934a4::func_ov147_02292074() {
    Unk_020660f8 *sp0 = unk_3c;
    Unk_020aa3b8 *r6 = sp0->func_020679b4();
    r6->func_020aa5f4();
    s32 r5 = 0;
    s32 r4 = 0;
    u8 buf[3];
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            Unk_020e1c64 o;
            ((Unk_020940a0 *)((Unk_0209865c *)func_02097868(data_021d735c, r4))->func_0209888c())->func_020940d0(&o);
            Unk_020aa72c *r7 = r6->func_020aa560(r5);
            buf[0] = 4;
            r7->func_020aa778(&buf[0]);
            func_020a7bd8(r7->func_020aa7a0(), &o);
            r5++;
        }
    }
    Unk_020aa72c *p = r6->func_020aa560(r5);
    buf[1] = 0x10;
    p->func_020aa784(&buf[1]);
    p->func_020aa780(func_020aa3ac(1));
    buf[2] = 0;
    p->func_020aa778(&buf[2]);
    p->func_020aa72c();
    r6->func_020aa4cc(r5 + 1);
    r6->func_020aa4b8();
    sp0->func_020679c0(1);
}

void Unk_ov147_022934a4::func_ov147_0229213c(Unk_ov147_0229213c_Desc *d) {
    Unk_020660f8 *sp0 = unk_3c;
    Unk_020aa3b8 *sp10 = sp0->func_020679b4();
    u8 *r5 = d->unk_00;
    u8 *r6 = d->unk_04;
    u32 r7 = d->unk_08;
    sp10->func_020aa680(r7, r7 - 1);
    s32 r4;
    s32 z0 = 0;
    s32 z1 = 0;
    for (r4 = 0; r4 < (s32)r7; r4++) {
        s32 f = z0;
        u8 c = r5[r4];
        u8 t[2];
        if (c == 0x12 || c <= 1) {
            f = 1;
        }
        t[0] = c;
        t[1] = r6[r4];
        sp10->func_020aa638(r4, t, 1, &t[1], (const char *)z1, f);
    }
    sp10->func_020aa608();
    sp0->func_020679c0(1);
}

void Unk_ov147_022934a4::vfunc_14() {
    static u8 s260[4] = { 2, 0x37, 1, data_021edb5c };
    static u8 s268[4] = { data_021edb5c, 0x37, 1, data_021edb5c };
    static u8 s254[4] = { data_021edb5c, 0x37, 1, data_021edb5c };
    static u8 s284[5] = { data_021edb5c, 2, 0x37, 1, data_021edb5c };
    static u8 s240[2] = { data_021edb5c, 0x31 };
    Unk_020660f8 *r5 = func_02067918(0);
    s32 r6 = func_020978a4(data_021d735c);
    s32 r0 = data_021d7350.func_0209e1a0();
    Unk_ov147_022933e8 *r2 = unk_44;
    if (r2->unk_9e != 0) {
        r5->func_02067a78();
        return;
    }
    switch (unk_1e) {
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (r6 <= 0 && r0 != 0) {
            func_ov147_0229213c(&data_ov147_02293430);
        } else if (r0 == 0) {
            func_ov147_0229213c(&data_ov147_0229343c);
        } else if (r6 == 4) {
            func_ov147_0229213c(&data_ov147_02293448);
        } else {
            func_ov147_0229213c(&data_ov147_02293454);
        }
        break;
    case 1:
        if (r6 <= 0 && r0 != 0) {
            func_ov147_0229213c(&data_ov147_02293460);
        } else if (r0 == 0) {
            func_ov147_0229213c(&data_ov147_0229346c);
        } else if (r6 == 4) {
            func_ov147_0229213c(&data_ov147_02293478);
        } else {
            func_ov147_0229213c(&data_ov147_02293484);
        }
        break;
    case 0x27:
        func_020a0358();
        r5->func_02067934();
        unk_44->func_ov147_02292988(7);
        break;
    case 3:
        func_ov147_02292074();
        break;
    case 6:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(4);
        break;
    case 0xb:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(5);
        break;
    case 5:
    case 0xa: {
        u8 v = 0x31;
        r5->func_02067a84(&v, data_ov147_02293270);
        break;
    }
    case 0x37:
        r2->func_ov147_02292988(3);
        break;
    case 0:
        func_ov147_0229213c(&data_ov147_02293490);
        break;
    case 0x30:
        func_ov147_0229213c(&data_ov147_02293490);
        break;
    case 0x35:
        func_ov147_0229213c(&data_ov147_02293490);
        break;
    case 0x24:
        r5->func_02067934();
        r5->func_02067a84(&data_021edb5c, 0);
        func_020a034c();
        unk_44->func_ov147_02292988(7);
        break;
    case 0x32:
        r5->func_02067a84(&data_021edb5c, 0);
        unk_44->func_ov147_02292988(3);
        break;
    }
}
