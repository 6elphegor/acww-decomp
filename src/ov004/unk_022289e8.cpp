#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_02228a40_Vec {
    s32 x, y, z;
    Unk_ov004_02228a40_Vec() {}
    ~Unk_ov004_02228a40_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_02228a40_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// 3x4 matrix (48 bytes)
struct Unk_ov004_02228a40_Mtx {
    u32 v[12];
};

// Model/animation slot (0xb8 bytes)
struct Unk_ov004_02228a40_A {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ Unk_ov004_02228a40_Mtx unk_64;
    /* 0x94 */ u8 pad_94[8];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u32 pad_a8;
    /* 0xac */ u32 unk_ac;
    /* 0xb0 */ u8 pad_b0[8];
};

// Resource handle table (0xa4 bytes)
struct Unk_ov004_02228a40_T1 {
    u8 pad_00[0xa4];
};

struct Unk_ov004_02228a40_T2 {
    u32 unk_00;
};

struct Unk_ov004_02228a40_C {
    /* 0x00 */ u32 pad_00[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 pad_14;
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u8 pad_1c[0x28 - 0x1c];
};

struct Unk_ov004_02229004_D {
    /* 0x00 */ u32 pad_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u32 pad_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 pad_14[0x20 - 0x14];
};

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();

    /* 0x0ec */ Unk_ov004_02228a40_A unk_ec;
    /* 0x1a4 */ Unk_ov004_02228a40_T1 unk_1a4;
    /* 0x248 */ Unk_ov004_02228a40_T2 unk_248;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ u8 pad_24d[3];
    /* 0x250 */ u8 pad_250[0x40];
};

extern "C" {
extern void *data_021c620c;
extern Unk_ov004_02228a40_Mtx data_021f47e0;
extern u8 data_ov004_0224df60[];
extern u8 data_ov004_0224df7c[];
extern u8 data_ov004_0224df98[];
extern u8 data_ov004_0224dfb4[];
extern u8 data_ov004_0224dfd0[];
extern u8 data_ov004_02250f6c[];

void func_ov004_02224f60(void *p);
s32 func_ov004_02224d9c(void *p);
s32 func_ov004_02224d08(void *p);
s32 func_ov004_02224fc8(void *p, void *a, void *b);
s32 func_ov004_02224dbc(void *p, void *a);
s32 func_ov004_02224d10(void *p, void *a);
u32 func_ov004_02224d68(void *p);
u32 func_ov004_02224d04(void *p);
u32 func_ov004_02224d8c(void *p, u32 i);
u32 func_ov004_02224d6c(void *p, u32 i);
void func_ov004_02224d5c(void *p);
void func_ov004_02224d60(void *p);
void func_ov004_02224f00(void *p);
void func_ov004_02224f10(void *p);
void func_ov004_02225168(void *p);
void func_ov004_02225244(void *p);
s32 func_ov004_022288bc(void *p);
s32 func_ov004_022288c0(void *p);
s32 func_020547cc(void *p, u32 a);
s32 func_020547e4(void *p);
s32 func_020566bc(void *p);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020555ec(void *p, u32 a, u32 b);
s32 func_021039ec(u32 a, u32 b);
s32 func_02103830(u32 a, u32 b);
s32 func_02054800(void *p, void *q);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_02054710(void *p);
s32 func_02055bcc(void *p, u32 a, void *b);
s32 func_02055b38(void *p, u32 a, u32 b, u32 c, u32 d);
u32 func_020554c0(void *p);
s32 func_02055a9c(void *p, u32 a);
void func_020634b4(void *p);
void func_0206349c(void *p);
void func_0206338c(void *p, s32 a, s32 b);
void func_02063388(void *p);
void func_02062f94(u16 *out, void *p, u32 a, void *q, u32 b, u32 c, u32 d);
s32 func_0203c764(void *p, void *q, u32 a);
void *func_0203c6c8(void *p);
s32 func_020b8840(void *p, u32 a, void *b, void *c, u32 d, u32 e);
void func_020b895c(void *p);
void func_02055c70(void *p);
void func_02055c88(void *p);
void func_020548d0(void *p);
void func_020548a0(void *p);
s32 func_02056654(void *p);
s32 func_ov045_02258fd8(void);
Unk_ov004_02228a40_Mtx *func_ov045_02258ff0(void);
}

class Unk_ov004_0224def8 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224def8();
    virtual ~Unk_ov004_0224def8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    /* 0x290 */ Unk_ov004_02228a40_A unk_290;
    /* 0x348 */ Unk_ov004_02228a40_T1 unk_348;
    /* 0x3ec */ Unk_ov004_02228a40_T2 unk_3ec;
    /* 0x3f0 */ u8 unk_3f0[0x28];
    /* 0x418 */ Unk_ov004_02228a40_C unk_418;
};

class Unk_ov004_0224e034 : public Unk_ov004_0224d4e8 {
public:
    virtual BOOL vfunc_0c();
    void func_02228dcc(s32 i);
    void func_02228e00(s32 i, void *a, void *b);
    void func_02228f00();
    BOOL func_02228f68();
    void func_02228fe8();
    BOOL func_02229004();
    void func_02229070();
    BOOL func_02229098();
    void func_02229118();
    BOOL func_0222911c();
    void func_02229148();
    BOOL func_022291d4(s32 i);
    void func_022292a4();

    /* 0x290 */ Unk_ov004_02228a40_A unk_290[3];
    /* 0x4b8 */ Unk_ov004_02228a40_T1 unk_4b8[3];
    /* 0x6a4 */ Unk_ov004_02228a40_T2 unk_6a4[3];
    /* 0x6b0 */ u8 unk_6b0[3];
    /* 0x6b3 */ u8 pad_6b3;
    /* 0x6b4 */ Unk_ov004_02229004_D unk_6b4;
    /* 0x6d4 */ u8 unk_6d4;
    /* 0x6d5 */ u8 pad_6d5[3];
    /* 0x6d8 */ s32 unk_6d8;
};

extern "C" {
extern Unk_ov004_0224def8 *data_ov004_02250f18;
extern Unk_ov004_0224e034 *data_ov004_02251230;
}

// ---------------------------------------------------------------------------
// Unk_ov004_0224def8

BOOL Unk_ov004_0224def8::vfunc_0c() {
    func_ov004_02224f60(this);
    func_ov004_02224d9c(&unk_348);
    func_ov004_02224d08(&unk_3ec);
    data_ov004_02250f18 = NULL;
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_24() {
    func_020547cc(&unk_ec, 0);
    func_020547cc(&unk_290, 0);
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_18() {
    func_020547e4(&unk_ec);
    func_020547e4(&unk_290);
    func_020566bc(&unk_418);
    *unk_418.unk_18 = unk_418.unk_08;
    func_020e8388(&data_021f47e0, unk_5c[0], unk_5c[1], unk_5c[2]);
    unk_ec.unk_64 = data_021f47e0;
    unk_290.unk_64 = data_021f47e0;
    func_ov004_022288c0(this);
    return TRUE;
}

BOOL Unk_ov004_0224def8::vfunc_00() {
    data_ov004_02250f18 = this;
    func_ov004_02224fc8(this, data_ov004_0224df60, data_ov004_0224df7c);
    func_ov004_02224dbc(&unk_348, data_ov004_0224df98);
    func_ov004_02224d10(&unk_3ec, data_ov004_0224dfb4);
    func_020555ec(&unk_290, func_ov004_02224d68(&unk_348), 0);
    {
        u32 a = func_ov004_02224d68(&unk_348);
        func_021039ec(a, func_ov004_02224d04(&unk_3ec));
    }
    {
        u32 a = func_ov004_02224d68(&unk_348);
        func_02103830(a, func_ov004_02224d04(&unk_3ec));
    }
    if (func_ov004_02224d8c(&unk_1a4, 0) && func_02054800(&unk_ec, data_021c620c)) {
        func_02054720(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
        func_02054710(&unk_ec);
        *(u32 *)((u8 *)this + 0x198) = 0;
    }
    if (func_02055bcc(&unk_418, unk_ec.unk_5c, data_021c620c)) {
        func_02055b38(&unk_418, func_ov004_02224d6c(&unk_1a4, 0), 0, 0x1000, 0);
        func_02055a9c(&unk_418, func_020554c0(&unk_ec));
        unk_418.unk_10 = 0;
    }
    if (func_ov004_02224d8c(&unk_348, 0) && func_02054800(&unk_290, data_021c620c)) {
        func_02054720(&unk_290, func_ov004_02224d8c(&unk_348, 0), 0, 0x1000, 0, 0);
        func_02054710(&unk_290);
        unk_290.unk_ac = 0;
    }
    {
        u32 x[3];
        u32 y[2];
        u16 z;
        func_020634b4(x);
        func_0206338c(y, 2, 0);
        func_02062f94(&z, y, 0, x, 1, 1, 0);
        func_02063388(y);
        func_0203c764(data_ov004_02250f6c, &z, 0);
        u32 r5 = unk_290.unk_5c;
        void *t = func_0203c6c8(data_ov004_02250f6c);
        func_020b8840(unk_3f0, r5, data_ov004_0224dfd0, t, 0, 0);
        func_ov004_022288bc(this);
        func_0206349c(x);
    }
    return TRUE;
}

Unk_ov004_0224def8::~Unk_ov004_0224def8() {
    func_02055c70(&unk_418);
    func_ov004_02224d5c(&unk_3ec);
    func_ov004_02224f00(&unk_348);
    func_020548a0(&unk_290);
}

Unk_ov004_0224def8::Unk_ov004_0224def8() {
    func_020548d0(&unk_290);
    func_ov004_02224f10(&unk_348);
    func_ov004_02224d60(&unk_3ec);
    func_020b895c(unk_3f0);
    func_02055c88(&unk_418);
}

extern "C" Unk_ov004_0224def8 *func_ov004_02228db0() {
    return new Unk_ov004_0224def8();
}

// ---------------------------------------------------------------------------
// Unk_ov004_0224e034

void Unk_ov004_0224e034::func_02228dcc(s32 i) {
    func_ov004_02224d9c(&unk_4b8[i]);
    func_ov004_02224d08(&unk_6a4[i]);
}

void Unk_ov004_0224e034::func_02228e00(s32 i, void *a, void *b) {
    Unk_ov004_02228a40_T1 *t1 = &unk_4b8[i];
    func_ov004_02224dbc(t1, a);
    Unk_ov004_02228a40_T2 *t2 = &unk_6a4[i];
    func_ov004_02224d10(t2, b);
    func_020555ec(&unk_290[i], func_ov004_02224d68(t1), 0);
    {
        u32 x = func_ov004_02224d68(t1);
        func_021039ec(x, func_ov004_02224d04(t2));
    }
    {
        u32 x = func_ov004_02224d68(t1);
        func_02103830(x, func_ov004_02224d04(t2));
    }
}

extern "C" void func_ov004_02228e84() {
    if (data_ov004_02251230) {
        data_ov004_02251230->func_022292a4();
    }
}

extern "C" BOOL func_ov004_02228ea0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(3);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02228ec0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(2);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02228ee0() {
    if (data_ov004_02251230) {
        return data_ov004_02251230->func_022291d4(1);
    }
    return FALSE;
}

void Unk_ov004_0224e034::func_02228f00() {
    if (func_ov045_02258fd8() == 7) {
        unk_6b0[0] = 0;
    }
    if (func_ov045_02258fd8() == 0x12) {
        unk_6b0[2] = 0;
    }
    if (func_ov045_02258fd8() == 0x13) {
        unk_6d4 = 1;
    }
    if (func_ov045_02258fd8() == 0x25) {
        unk_6d4 = 0;
    }
    if (func_02056654(&unk_290[2].unk_9c)) {
        func_022291d4(0);
    }
}

BOOL Unk_ov004_0224e034::func_02228f68() {
    unk_6d4 = 0;
    unk_6b0[0] = 1;
    unk_6b0[1] = 1;
    unk_6b0[2] = 1;
    func_02054720(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 1), 1, 0x1000, 0, 0);
    func_02055b38(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 1), 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224e034::func_02228fe8() {
    if (func_ov045_02258fd8() == 9) {
        unk_6b0[0] = 1;
    }
}

BOOL Unk_ov004_0224e034::func_02229004() {
    unk_6d4 = 0;
    unk_6b0[0] = 0;
    unk_6b0[1] = 1;
    unk_6b0[2] = 1;
    unk_290[2].unk_a4 = (u32)(unk_290[2].unk_a0 >> 12) << 16 >> 4;
    unk_290[2].unk_ac = 0;
    unk_6b4.unk_08 = (u32)(unk_6b4.unk_04 >> 12) << 16 >> 4;
    unk_6b4.unk_10 = 0;
    return TRUE;
}

void Unk_ov004_0224e034::func_02229070() {
    if (func_ov045_02258fd8() == 0xb) {
        unk_6d4 = 0;
        unk_6b0[2] = 1;
    }
}

BOOL Unk_ov004_0224e034::func_02229098() {
    unk_6d4 = 1;
    unk_6b0[0] = 0;
    unk_6b0[1] = 1;
    unk_6b0[2] = 0;
    func_02054720(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 0), 1, 0x1000, 0, 0);
    func_02055b38(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 0), 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224e034::func_02229118() {}

BOOL Unk_ov004_0224e034::func_0222911c() {
    u8 i;
    unk_6d4 = 0;
    for (i = 0; i < 3; i++) {
        unk_6b0[i] = 0;
    }
    return TRUE;
}

void Unk_ov004_0224e034::func_02229148() {
    typedef void (Unk_ov004_0224e034::*Fn)();
    static Fn tbl[4] = { &Unk_ov004_0224e034::func_02229118, &Unk_ov004_0224e034::func_02229070,
                         &Unk_ov004_0224e034::func_02228fe8, &Unk_ov004_0224e034::func_02228f00 };
    if (unk_6d8 < 4) {
        (this->*tbl[unk_6d8])();
    }
}

BOOL Unk_ov004_0224e034::func_022291d4(s32 i) {
    typedef BOOL (Unk_ov004_0224e034::*Fn)();
    static Fn tbl[4] = { &Unk_ov004_0224e034::func_0222911c, &Unk_ov004_0224e034::func_02229098,
                         &Unk_ov004_0224e034::func_02229004, &Unk_ov004_0224e034::func_02228f68 };
    if (i < 4) {
        if ((this->*tbl[i])()) {
            unk_6d8 = i;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224e034::vfunc_0c() {
    func_ov004_02224f60(this);
    func_02228dcc(0);
    func_02228dcc(1);
    func_02228dcc(2);
    data_ov004_02251230 = NULL;
    return TRUE;
}

void Unk_ov004_0224e034::func_022292a4() {
    Unk_ov004_02228a40_Mtx *m = func_ov045_02258ff0();
    u8 i;
    data_021f47e0 = *m;
    unk_ec.unk_64 = data_021f47e0;
    unk_290[0].unk_64 = data_021f47e0;
    if (unk_6d4) {
        func_020547cc(&unk_ec, 0);
    }
    for (i = 0; i < 3; i++) {
        if (unk_6b0[i]) {
            func_020547cc(&unk_290[i], 0);
        }
    }
}
