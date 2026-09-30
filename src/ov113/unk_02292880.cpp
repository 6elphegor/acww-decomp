#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_0200402c(s32 a);
void func_0200212c(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020020b8(s32 a);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020015e0(u32 a);
void func_02002398(s32 a, s32 b);
BOOL func_0206ef0c();
void *func_02077278(void *a);
s32 func_020974f8();
u8 *func_02077374(void *p);
s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_0206f994(void *dst, const void *s, s32 len);
void func_0206f9fc(void *o, u32 x);
void func_0206f920(void *dst, const void *s, s32 len, BOOL a, u32 b);
void func_0206fb04(void *o, void *a, u32 b, u32 x, u32 y);
void func_0206fab4(void *o, s32 a, s32 b);
void func_0206fc44(void *o);
void *func_0206fcc8(void *o);
void *func_0206fca8(void *o);
void func_020a7c3c(void *o);
void func_020b3544(s32 a, void *buf);
BOOL func_020b8714(void *o, void *a, u32 b, u32 c, u32 d, u32 e);
BOOL func_020b86c0(void *o, void *a, u32 b, u32 c, u32 d);
void func_020b87d0(void *o);
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
BOOL func_020641b4(void *a, void *b, s32 c);
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
extern void *data_021f482c;
extern u8 data_021e87d8[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_ov113_02293758[];
extern u8 data_ov113_0229376c[];
extern u8 data_ov113_02293784[];
}

class Unk_020772cc {
public:
    BOOL func_020772dc();
    void func_020772f0(s32 i);
    BOOL func_02077310(s32 i);
    u8 func_02077330();
    u8 func_02077338();
    u8 func_02077340();
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// Sub-object at +0x2968 of the scene (0x64 bytes)
class Unk_ov002_0220464c : public Unk_020e100c {
public:
    Unk_ov002_0220464c();
    virtual ~Unk_ov002_0220464c();

    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202d00(s32 idx);
    BOOL func_ov002_022028f0();
    void func_ov002_02202af0();

    u8 unk_4b[0x64 - 0x4b];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200980();
    u32 func_ov002_022009c8();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// 0x40-byte string object (ctor func_0206fcc8, dtor func_0206fca8)
struct Unk_ov113_Str {
    u32 pad[0x10];
};

// 0x24-byte button/window helper (ctor func_020b8800)
struct Unk_ov113_Btn {
    u32 pad[9];
};

struct Unk_ov113_022928f8_Str {
    u32 pad[0x10];
    Unk_ov113_022928f8_Str() { func_0206fcc8(this); }
    ~Unk_ov113_022928f8_Str() { func_0206fca8(this); }
};

class Unk_ov113_02293640 : public Unk_ov002_022044e4 {
public:
    // state/flag helpers (other groups)
    void func_ov113_0229226c();
    void func_ov113_0229228c();
    void func_ov113_022922ac();
    void func_ov113_022922cc();
    BOOL func_ov113_02292004(u32 a);
    void func_ov113_02292340();
    s32 func_ov113_02292364();
    s32 func_ov113_02292384();
    void func_ov113_02292404();
    void func_ov113_02292440();
    BOOL func_ov113_02292464();
    void func_ov113_02292604(s32 a);
    BOOL func_ov113_02292690();
    void func_ov113_02292744(u32 bits);
    void func_ov113_02292754(u32 bits);
    BOOL func_ov113_02292764(u32 bits);
    void func_ov113_02292778(s32 idx, s32 a, s32 b, s32 c, s32 d);
    void func_ov113_02292854(u32 v);

    // this group
    void func_ov113_02292880();
    void func_ov113_022928f8(s32 i);
    void func_ov113_0229297c();
    void func_ov113_02292a5c();
    void func_ov113_02292b38();
    void func_ov113_02292b54();
    void func_ov113_02292b6c();
    void func_ov113_02292b94();
    void func_ov113_02292be0();
    void func_ov113_02292c04();
    void func_ov113_02292cc0();
    void func_ov113_02292d10();
    void func_ov113_02292d78();
    void func_ov113_02292d9c();
    void func_ov113_02292ddc();
    void func_ov113_02292de4();
    void func_ov113_02292e48();
    void func_ov113_02292e50();
    void func_ov113_02292ec0();
    void func_ov113_02292ef0();
    void func_ov113_02292f50();
    void func_ov113_02292fdc();
    void func_ov113_0229300c();
    void func_ov113_022930a4();
    void func_ov113_022930f0();
    void func_ov113_02293120();
    void func_ov113_02293168();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ u8 unk_9a;
    /* 0x09b */ u8 unk_9b;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u16 unk_a0[0x400];
    /* 0x8a0 */ u8 unk_8a0[6][0x500];
    /* 0x26a0 */ Unk_ov113_Btn unk_26a0[2];
    /* 0x26e8 */ Unk_ov113_Str unk_26e8[4];
    /* 0x27e8 */ Unk_ov113_Str unk_27e8[6];
    /* 0x2968 */ Unk_ov002_0220464c unk_2968;
};

// ---------------------------------------------------------------------------------------------

void Unk_ov113_02293640::func_ov113_02292880() {
    Unk_020772cc *p = (Unk_020772cc *)func_02077278(data_021e87d8);
    s32 n = func_020974f8();
    s32 m;
    if (p->func_02077310(n)) {
        m = 8;
    } else {
        m = 0xa;
    }
    func_0206ee80(unk_a0, 0x10, 0, 0x12, 3, m);
    if (p->func_020772dc()) {
        m = 0xa;
    } else {
        m = 8;
    }
    func_0206ee80(unk_a0, 6, 5, 0x19, 6, m);
    func_ov113_02292754(1);
    p->func_020772f0(n);
}

void Unk_ov113_02293640::func_ov113_022928f8(s32 i) {
    u8 buf[4];
    if (i + 1 >= 10) {
        buf[0] = (i + 1) / 10 + 0x35;
        buf[1] = (i + 1) % 10 + 0x35;
        buf[2] = 0;
    } else {
        buf[0] = i + 0x36;
        buf[1] = 0;
    }
    Unk_ov113_022928f8_Str str;
    func_0206f994(&str, buf, 3);
    func_020b3544(0, &str);
    func_0206f9fc(&unk_26e8[2], 0x86);
    func_ov113_02292778(2, 0x11a, 5, 1, 0);
}

void Unk_ov113_02293640::func_ov113_0229297c() {
    Unk_020772cc *p = (Unk_020772cc *)func_02077278(data_021e87d8);
    u8 buf[8];
    buf[0] = 0x37;
    buf[1] = 0x35;
    buf[2] = p->func_02077330() / 10 + 0x35;
    buf[3] = p->func_02077330() % 10 + 0x35;
    buf[4] = 0;
    func_0206f994(&unk_26e8[0], buf, 5);
    func_ov113_02292778(0, 0x111, 4, 0, 1);
    buf[0] = p->func_02077338() / 10 + 0x35;
    buf[1] = p->func_02077338() % 10 + 0x35;
    buf[2] = p->func_02077340() / 10 + 0x35;
    buf[3] = p->func_02077340() % 10 + 0x35;
    func_0206f994(&unk_26e8[1], buf, 5);
    func_ov113_02292778(1, 0x116, 4, 0, 1);
}

void Unk_ov113_02293640::func_ov113_02292a5c() {
    void *p = func_02077278(data_021e87d8);
    s32 starts[7];
    s32 cnt;
    s32 i;
    s32 z1 = 0;
    s32 z2 = 0;
    func_0206cf4c(func_02077374(p), starts, &cnt, 0xc0, 0x28, 0x96, 6);
    for (i = 0; i < 6; i++) {
        s32 len = starts[i + 1] - starts[i];
        Unk_ov113_Str *o = &unk_27e8[i];
        func_020a7c3c(o);
        if (len != 0) {
            func_0206f920(o, func_02077374(p) + starts[i], len, z1, z1);
        }
    }
    for (i = 0; i < 6; i++) {
        Unk_ov113_Str *o = &unk_27e8[i];
        func_0206fb04(o, unk_8a0[i], 0x14, 0xe, 0xd);
        func_0206fab4(o, z2, z2);
    }
    func_020b8714(&unk_26a0[0], unk_8a0, 2, 0x11, 0x11, 0x100);
}

void Unk_ov113_02293640::func_ov113_02292b38() {
    func_ov113_02292404();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov113_02293640::func_ov113_02292b54() {
    func_ov113_02292340();
    func_ov002_02200a58(0);
}

void Unk_ov113_02293640::func_ov113_02292b6c() {
    if (unk_2968.func_0208d4fc()) {
        func_ov113_0229226c();
        func_ov002_02200a58(1);
    }
}

void Unk_ov113_02293640::func_ov113_02292b94() {
    if (unk_2968.func_0208d4fc()) {
        if (func_ov113_02292464()) {
            if ((u8)(unk_9b + 0xfe) <= 1) {
                func_ov113_02292340();
            } else {
                unk_2968.func_ov002_02202af0();
            }
        } else {
            func_ov113_0229228c();
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292be0() {
    if (!unk_2968.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_9c);
    }
}

void Unk_ov113_02293640::func_ov113_02292c04() {
    if (func_ov002_022009d4()) {
        func_ov113_02292b54();
    } else if (func_ov113_02292004(func_ov002_022009c8())) {
        func_ov113_022922cc();
    } else {
        u16 v = data_021f47d8[1];
        if ((v & 1) != 0) {
            func_ov113_022922ac();
        } else if ((v & 2) != 0) {
            unk_9b = 3;
            func_ov113_02292340();
            func_ov113_02292464();
        } else if ((v & 0x200) != 0) {
            unk_9b = 5;
            if (func_ov113_02292464()) {
                func_ov113_02292340();
            }
        } else if ((v & 0x100) != 0) {
            unk_9b = 4;
            if (func_ov113_02292464()) {
                func_ov113_02292340();
            }
        }
    }
}

static inline BOOL Unk_ov113_02292cc0_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292cc0() {
    if (func_ov002_02200a14(1)) {
        func_ov113_02292b38();
    } else if (Unk_ov113_02292cc0_Both()) {
        if (func_ov113_02292690()) {
            func_ov113_02292464();
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292d10() {
    void *h = data_021f482c;
    func_020026c4(data_ov113_02293758, h, 2, 8, 8, 0xe);
    func_020641b4(data_ov113_0229376c, unk_a0, 0x800);
    func_020024f0(unk_a0, 2, 0x800, 0);
    func_0200261c(data_ov113_02293784, h, 2, 0x10, 0x10, 0x13f);
}

void Unk_ov113_02293640::func_ov113_02292d78() {
    func_020015e0(0);
    func_02002398(2, 1);
    func_0200226c(2, 0, 0, 0);
}

void Unk_ov113_02293640::func_ov113_02292d9c() {
    if (func_ov113_02292764(1)) {
        if (func_020b86c0(&unk_26a0[1], unk_a0, 2, 0x800, 0)) {
            func_ov113_02292744(1);
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292de4() {
    unk_2968.vfunc_0c();
    func_0206fc44(&unk_26e8[0]);
    func_0206fc44(&unk_26e8[1]);
    func_0206fc44(&unk_26e8[2]);
    func_0206fc44(&unk_26e8[3]);
    for (s32 i = 0; i < 6; i++) {
        func_0206fc44(&unk_27e8[i]);
    }
}

void Unk_ov113_02293640::func_ov113_02292e50() {
    func_020b87d0(&unk_26a0[0]);
    func_020b87d0(&unk_26a0[1]);
    func_0206fc44(&unk_26e8[0]);
    func_0206fc44(&unk_26e8[1]);
    func_0206fc44(&unk_26e8[2]);
    func_0206fc44(&unk_26e8[3]);
    for (s32 i = 0; i < 6; i++) {
        func_0206fc44(&unk_27e8[i]);
    }
}

void Unk_ov113_02293640::func_ov113_02292ec0() {
    unk_94 = 0;
    unk_98 = 0;
    unk_9b = 3;
    func_ov113_02292440();
    unk_9a = unk_9d - 1;
}

void Unk_ov113_02293640::func_ov113_02292ef0() {
    if (func_ov002_02200908(1)) {
        func_ov002_02200a60(2);
        func_ov113_02292604(0);
        if (func_0206ef0c()) {
            func_ov113_02292b54();
        } else {
            func_ov002_02200980();
            func_ov002_02200a58(1);
            func_ov113_02292744(0x100);
            func_ov113_02292404();
        }
    }
    func_ov002_02200840(2, 0, 0);
}

void Unk_ov113_02293640::func_ov113_02292f50() {
    s32 m;
    switch (unk_9b) {
    case 1:
        func_ov113_02292604(0);
    case 4:
        m = 3;
        break;
    case 0:
        func_ov113_02292604(0);
    case 5:
        m = 2;
        break;
    default:
        if (func_ov113_02292764(0x40) == 0) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    func_ov002_022008a8(8, 6, m, 0x30);
    func_020020b8(2);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(8);
    func_ov113_02292854(unk_9a);
}

void Unk_ov113_02293640::func_ov113_02292fdc() {
    if (func_ov002_022008fc(1)) {
        func_0200212c(2);
        func_ov002_02200a50(7);
    } else {
        func_ov002_02200840(2, 0, 0);
    }
}

void Unk_ov113_02293640::func_ov113_0229300c() {
    s32 m;
    func_ov113_02292754(0x100);
    switch (unk_9b) {
    case 1:
    case 4:
        m = 2;
        break;
    case 0:
    case 5:
        m = 3;
        break;
    default:
        if (func_ov113_02292764(0x40)) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    switch (unk_9b) {
    case 0:
    case 1:
        func_0200402c(0x3c);
        break;
    default:
        func_0200402c(0x39);
        break;
    }
    func_ov002_0220088c(8, 0, m, 0x30);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(6);
}

void Unk_ov113_02293640::func_ov113_022930a4() {
    if (func_ov002_022008fc(1)) {
        func_0200212c(2);
        func_020021fc(2, 0, 0);
        func_ov002_02200a60(5);
        func_ov113_02292744(8);
    } else {
        func_ov002_02200840(2, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov113_02293640::func_ov113_022930f0() {
    func_ov002_0220088c(8, 0, 0, 0x30);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(4);
}

void Unk_ov113_02293640::func_ov113_02293120() {
    if (func_ov002_02200908(1)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov113_02292b54();
        } else {
            func_ov113_02292b38();
        }
    }
    func_ov002_02200840(2, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov113_02293640::func_ov113_02293168() {
    func_ov002_02200a50(2);
    func_ov113_02292854(unk_9a);
    unk_94 = func_ov002_02200920();
    func_ov113_02292754(8);
}

void Unk_ov113_02293640::func_ov113_02292e48() { func_ov113_02292de4(); }

void Unk_ov113_02293640::func_ov113_02292ddc() { func_ov113_02292d9c(); }
