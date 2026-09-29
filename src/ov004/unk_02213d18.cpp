#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

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

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
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
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

class Unk_020dd324 {
public:
    Unk_020dd324(u16 *p);
    ~Unk_020dd324();
    u32 pad[9];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[7];
};

struct Unk_ov004_022142fc_Actor {
    u8 pad_00[0x5c];
    u8 unk_5c[0xc];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

class Unk_ov004_0224bda0;

extern "C" {
extern u8 data_021edb5c;
extern char data_021edb60[];
extern char data_ov004_0224be8c[];
extern u8 *data_ov004_022502d8;
extern u8 data_ov004_022502c4;
extern u8 data_ov004_022502c8;
extern Unk_ov004_0224bda0 *data_ov004_0225033c[0x20];

s32 func_02070358(void *self, u16 *p);
s32 func_02070370(void *self, u16 *p);
void func_020700a4(void *self, Unk_020e1c64 *a, u16 *p);
void *func_020679b4(void *self);
void func_020679c0(void *self, s32 a);
void func_020679ec(void *self, s32 a, Unk_020dd324 *b, u32 c);
void func_02067a3c(void *self, s32 a, Unk_020e1c64 *b);
void func_02067a84(void *self, u8 *a, void *b);
BOOL func_020aa514(void *self);
void func_020aa608(void *self);
void func_020aa638(void *self, s32 a, const u8 *b, s32 c, const char *d, s32 e, s32 f);
void func_020aa680(void *self, s32 a, s32 b);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
s32 func_0203d67c(void *self);
s32 func_0203d704(void *self, s32 a);
void func_020ed188(void *self);
void *func_020e8574(u32 size);
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
}
extern "C" { extern Unk_020660f8 data_021ed0a0; }

class Unk_ov004_0224bda0 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();

    void func_ov004_02213c58();
    BOOL func_ov004_02213c7c();
    void func_ov004_02213d18();
    BOOL func_ov004_02213d48();
    void func_ov004_02213d4c();
    BOOL func_ov004_02213d70();
    void func_ov004_02213e74();
    BOOL func_ov004_02213ea4();
    void func_ov004_02213ea8();
    BOOL func_ov004_02213f34(s32 idx);
    BOOL func_ov004_02214350();
    void func_ov004_02214364();
    u32 func_ov004_022143b8();
    BOOL func_ov004_02214404();
    BOOL func_ov004_0221444c();
    BOOL func_ov004_02214494();
    BOOL func_ov004_022145bc();
    BOOL func_ov004_02214608();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ u8 pad_134[0x150 - 0x134];
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 unk_151;
    /* 0x152 */ u8 pad_152[2];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ s16 unk_15c;
    /* 0x15e */ u8 pad_15e[2];
    /* 0x160 */ u16 *unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ u8 unk_168;
};

typedef void (Unk_ov004_0224bda0::*Unk_ov004_02213ea8_Fn)();
typedef BOOL (Unk_ov004_0224bda0::*Unk_ov004_02213f34_Fn)();

void Unk_ov004_0224bda0::func_ov004_02213d18() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

void Unk_ov004_0224bda0::func_ov004_02213d4c() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02213f34(2);
        }
    }
}

BOOL Unk_ov004_0224bda0::func_ov004_02213d70() {
    struct { u16 pad[3]; u16 w; u16 sel; } l;
    u32 i = 0;
    unk_151 = i;
    for (; i < unk_164; i++) {
        l.w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &l.w)) {
            unk_151 = i;
            break;
        }
    }
    l.sel = unk_160[unk_151];
    func_0203e488(this, this);
    Unk_020ddcf0 &s = *this;
    s.func_020a710c(data_ov004_0224be8c);
    if (func_ov004_0221444c() == 0) {
        unk_1e = 0;
    } else if (unk_158 == 3) {
        if (unk_164 == 1) {
            unk_1e = 5;
        } else {
            unk_1e = unk_15c;
        }
    } else if (unk_158 <= 1) {
        u32 n = func_ov004_022143b8();
        if (n > 3) n = 3;
        unk_1e = (n - 1) % 3 + 5;
    } else {
        if (func_02070370(&data_021ed0a0, &l.sel) != 2) {
            unk_1e = 1;
        } else {
            unk_1e = 2;
        }
    }
    unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224bda0::func_ov004_02213e74() {
    if (func_ov004_02214350()) {
        if (unk_168 == 0) {
            func_0203d704(this, 0);
        } else {
            func_020ed188(this);
        }
    }
}

void Unk_ov004_0224bda0::func_ov004_02213ea8() {
    static Unk_ov004_02213ea8_Fn tbl[4] = {
        &Unk_ov004_0224bda0::func_ov004_02213e74,
        &Unk_ov004_0224bda0::func_ov004_02213d4c,
        &Unk_ov004_0224bda0::func_ov004_02213d18,
        &Unk_ov004_0224bda0::func_ov004_02213c58,
    };
    if (unk_130 < 4) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov004_0224bda0::func_ov004_02213f34(s32 idx) {
    static Unk_ov004_02213f34_Fn tbl[4] = {
        &Unk_ov004_0224bda0::func_ov004_02213ea4,
        &Unk_ov004_0224bda0::func_ov004_02213d70,
        &Unk_ov004_0224bda0::func_ov004_02213d48,
        &Unk_ov004_0224bda0::func_ov004_02213c7c,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_130 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::vfunc_68() {
    if (func_ov004_02214350() == 0) {
        u8 a0, a1, a2, a3;
        u16 sel;
        if (func_020aa514(func_020679b4(unk_3c)) == 0) {
            sel = unk_160[unk_151];
            if (unk_158 <= 1) {
                u32 n = func_ov004_022143b8();
                if (n > 3) n = 3;
                a0 = (n - 1) % 3 + 5;
                func_02067a84(unk_3c, &a0, 0);
            } else if (func_02070370(&data_021ed0a0, &sel) != 2) {
                a1 = 1;
                func_02067a84(unk_3c, &a1, 0);
            } else {
                a2 = 2;
                func_02067a84(unk_3c, &a2, 0);
            }
        } else {
            a3 = data_021edb5c;
            func_02067a84(unk_3c, &a3, 0);
        }
    }
}

BOOL Unk_ov004_0224bda0::vfunc_64() {
    u8 b[7];
    if (func_ov004_02214350() == 0) {
        if (unk_158 == 3) {
            if (unk_1e != 5) {
                if (func_ov004_02214404()) {
                    u32 e = unk_1e;
                    if (unk_15c == e) {
                        b[0] = e + 1;
                        func_02067a84(unk_3c, &b[0], 0);
                    } else {
                        b[1] = data_021edb5c;
                        func_02067a84(unk_3c, &b[1], 0);
                    }
                } else {
                    b[2] = data_021edb5c;
                    func_02067a84(unk_3c, &b[2], 0);
                }
            } else {
                b[3] = data_021edb5c;
                func_02067a84(unk_3c, &b[3], 0);
            }
        } else if (func_ov004_022143b8() != 0) {
            void *o = func_020679b4(unk_3c);
            if (o) {
                func_020aa680(o, 2, 1);
                b[4] = 0xe5;
                func_020aa638(o, 0, &b[4], 0, data_021edb60, 0, 0);
                b[5] = 0xe6;
                func_020aa638(o, 1, &b[5], 0, data_021edb60, 0, 0);
                func_020aa608(o);
                func_020679c0(unk_3c, 1);
            }
        } else {
            b[6] = data_021edb5c;
            func_02067a84(unk_3c, &b[6], 0);
        }
    }
}

void Unk_ov004_0224bda0::vfunc_60() {
    if (func_ov004_02214350() == 0) {
        u16 w1, w2;
        if (unk_158 <= 1) {
            u32 n = 0;
            switch (unk_1e) {
            case 5: n = 1; break;
            case 6: n = 2; break;
            case 7: n = 3; break;
            }
            u32 i;
            for (i = 0; i < n; i++) {
                w1 = unk_160[unk_151];
                Unk_020dd324 o(&w1);
                func_020679ec(unk_3c, i, &o, 7);
                func_ov004_02214364();
            }
        } else {
            u32 idx = unk_151;
            if (idx < unk_164) {
                w2 = unk_160[idx];
                Unk_020e1c64 e;
                func_020700a4(&data_021ed0a0, &e, &w2);
                func_02067a3c(unk_3c, 0, &e);
                Unk_020dd324 o2(&w2);
                func_020679ec(unk_3c, 0, &o2, 7);
                if (unk_158 != 3) {
                    func_ov004_02214364();
                }
            }
        }
    }
}

void Unk_ov004_0224bda0::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        func_ov004_02213f34(3);
        break;
    case 0:
        func_ov004_02213f34(1);
        break;
    case 8:
        func_ov004_02213f34(0);
        break;
    }
}

BOOL Unk_ov004_0224bda0::vfunc_48(void *a0) {
    Unk_ov004_022142fc_Actor *a = (Unk_ov004_022142fc_Actor *)a0;
    if (a) {
        if (func_020e9650(a->unk_5c, (u8 *)this + 0x5c) < 0x2333) {
            if (func_020e780c((s16)(*(s16 *)((u8 *)this + 0x8e) + 0x8000), a->unk_8e) < unk_154) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214494() {
    if (func_ov004_02214350() == 0) {
        u16 **p = &unk_160;
        *p = (u16 *)func_020e8574(unk_164 * 2);
        if (*p) {
            u32 i;
            switch (unk_158) {
            case 0:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12b0; else r = 0x12b0;
                    unk_160[i] = r;
                }
                return TRUE;
            case 1:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u16 r;
                    if (v < 0x38) r = v + 0x12e8; else r = 0x12e8;
                    unk_160[i] = r;
                }
                return TRUE;
            case 2:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u32 r;
                    if (v < 0x14) r = v * 4 + 0x3894; else r = 0x3894;
                    unk_160[i] = r;
                }
                return TRUE;
            case 3:
                for (i = 0; i < unk_164; i++) {
                    u32 v = data_ov004_022502d8[i];
                    u32 r;
                    if (v < 0x34) r = v * 4 + 0x450c; else r = 0x450c;
                    unk_160[i] = r;
                }
                return TRUE;
            default:
                return FALSE;
            }
        }
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::func_ov004_022145bc() {
    if (func_ov004_02214350() == 0) {
        u32 idx = unk_150;
        if (idx < 0x20) {
            data_ov004_0225033c[idx] = 0;
            data_ov004_022502c8--;
            unk_150 = 0xff;
            return TRUE;
        }
    } else {
        data_ov004_022502c4 = 0;
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214608() {
    if (func_ov004_02214350()) {
        unk_150 = 0xff;
        data_ov004_022502c4 = 1;
        return TRUE;
    }
    unk_150 = data_ov004_022502c8;
    if (unk_150 < 0x20) {
        data_ov004_0225033c[unk_150] = this;
        data_ov004_022502c8++;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02213d48() {
    return TRUE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02213ea4() {
    return TRUE;
}

void Unk_ov004_0224bda0::func_ov004_02214364() {
    u32 i = unk_151 + 1;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            unk_151 = i;
            return;
        }
    }
    unk_151 = unk_164;
}

u32 Unk_ov004_0224bda0::func_ov004_022143b8() {
    u32 cnt = 0;
    u32 i = unk_151;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            cnt++;
        }
    }
    return cnt;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214404() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224bda0::func_ov004_0221444c() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (func_02070358(&data_021ed0a0, &w)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224bda0::func_ov004_02214350() {
    if (unk_158 == 4) {
        return TRUE;
    }
    return FALSE;
}
