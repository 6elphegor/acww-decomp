#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

BOOL func_0206ef0c();
void func_0200402c(u32 v);
void func_02116048(void *src, void *dst, u32 n);
void func_020733bc();
s32 func_020eae78();
void func_0207217c();
u32 *func_020ea65c();
u32 func_020ea6c8(void *e);
void *func_020ea6f4(void *e);
BOOL func_020b86c0(void *a, void *b, u32 c, u32 d, u32 e);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);

// ov139 library (object at +0x94)
void func_ov139_022922a0(void *p, s32 i, u32 v, s32 n, s32 k);
void func_ov139_02292154(void *p, s32 i);
void func_ov139_0229217c(void *p, s32 i, void *q);
}

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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

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

// Library object at +0x94 (dtor func_ov139_02292548, size 0x624)
class Unk_ov141_ov139_obj {
public:
    Unk_ov141_ov139_obj();
    ~Unk_ov141_ov139_obj();
    u32 unk_00[0x624 / 4];
};

// Sub-object at +0x6b8 (vtable 0x02204614, size 0x64)
class Unk_ov141_02204614 {
public:
    Unk_ov141_02204614();
    virtual ~Unk_ov141_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_0208d534();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
    u32 unk_04[0x60 / 4];
};

// Sub-object at +0x71c (D1 func_ov002_02203968, size 0x108)
class Unk_ov141_022046cc {
public:
    Unk_ov141_022046cc();
    ~Unk_ov141_022046cc();
    u32 unk_00[0x108 / 4];
};

static inline BOOL Unk_ov141_02293194_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov141_02292a48_Rec {
    u16 hdr;
    u8 id[6];
    u8 rest[0xd8];
};

struct Unk_ov141_02292b94_Buf {
    u8 b[0x10];
    u8 flag;
};

// Vtable 0x02293968
class Unk_ov141_02293968 : public Unk_ov002_022044e4 {
public:
    Unk_ov141_02293968() {}
    virtual ~Unk_ov141_02293968();

    void func_ov141_0229297c(u32 m);
    void func_ov141_0229298c(u32 m);
    BOOL func_ov141_0229299c(u32 m);
    BOOL func_ov141_022929b4(s32 v);
    void func_ov141_022929e8();
    void func_ov141_022929ec();
    void func_ov141_022929f0(s32 idx, void *src);
    s32 func_ov141_02292a24();
    s32 func_ov141_02292a48(u8 *e);
    void func_ov141_02292afc();
    void func_ov141_02292b94();
    void func_ov141_02292ca0();
    BOOL func_ov141_02292ce4(u32 pad);
    void func_ov141_02292d78();
    void func_ov141_02292da4();
    void func_ov141_02292dc4();
    void func_ov141_02292de4(s32 a, s32 b);
    void func_ov141_02292e48();
    void func_ov141_02292e6c();
    s32 func_ov141_02292e90();
    s32 func_ov141_02292eb0();
    void func_ov141_02292ecc();
    void func_ov141_02292f08();
    void func_ov141_02292f44();
    void func_ov141_02292f80();
    void func_ov141_02292fa0();
    void func_ov141_02292fbc();
    void func_ov141_02292fd4();
    void func_ov141_02293000();
    void func_ov141_02293054();
    void func_ov141_022930d4();
    void func_ov141_02293104();
    void func_ov141_02293194();

    // callees in other groups
    void func_ov141_022935e0();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov141_ov139_obj unk_94;
    /* 0x6b8 */ Unk_ov141_02204614 unk_6b8;
    /* 0x71c */ Unk_ov141_022046cc unk_71c;
    /* 0x824 */ u8 unk_824[0x5c];
    /* 0x880 */ u8 unk_880[0x24];
    /* 0x8a4 */ u8 unk_8a4[6][0xe0];
    /* 0xde4 */ u8 unk_de4[6][0x11];
    /* 0xe4a */ u8 unk_e4a[0xa];
    /* 0xe54 */ s32 unk_e54;
    /* 0xe58 */ s32 unk_e58;
    /* 0xe5c */ s32 unk_e5c;
    /* 0xe60 */ u8 unk_e60[0x800];
    /* 0x1660 */ u16 unk_1660;
    /* 0x1662 */ u8 unk_1662;
    /* 0x1663 */ u8 unk_1663[6];
    /* 0x1669 */ u8 unk_1669[6];
    /* 0x166f */ u8 unk_166f;
    /* 0x1670 */ u8 unk_1670;
};

Unk_ov141_02293968::~Unk_ov141_02293968() {}

void Unk_ov141_02293968::func_ov141_0229297c(u32 m) { unk_1660 = unk_1660 & ~m; }

void Unk_ov141_02293968::func_ov141_0229298c(u32 m) { unk_1660 = unk_1660 | m; }

BOOL Unk_ov141_02293968::func_ov141_0229299c(u32 m) {
    if (unk_1660 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov141_02293968::func_ov141_022929b4(s32 v) {
    BOOL changed = unk_e54 != v ? TRUE : FALSE;
    unk_e54 = v;
    if (v == -1) {
        unk_e58 = 9;
    } else {
        unk_e58 = 8;
    }
    return changed;
}

void Unk_ov141_02293968::func_ov141_022929e8() {}

void Unk_ov141_02293968::func_ov141_022929ec() {}

void Unk_ov141_02293968::func_ov141_022929f0(s32 idx, void *src) {
    func_02116048(src, unk_8a4[idx], 0xe0);
    unk_1663[idx] = 1;
}

s32 Unk_ov141_02293968::func_ov141_02292a24() {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 0) {
            return i;
        }
    }
    return -1;
}

s32 Unk_ov141_02293968::func_ov141_02292a48(u8 *e) {
    for (s32 i = 0; i < 6; i++) {
        if (unk_1663[i] == 2) {
            BOOL fE = FALSE, fD = FALSE, fC = FALSE, fB = FALSE, fA = FALSE;
            u8 *s = unk_8a4[i] + 2;
            if (e[2] == s[0] && e[3] == s[1]) {
                fA = TRUE;
            }
            if (fA && e[4] == s[2]) {
                fB = TRUE;
            }
            if (fB && e[5] == s[3]) {
                fC = TRUE;
            }
            if (fC && e[6] == s[4]) {
                fD = TRUE;
            }
            if (fD && e[7] == s[5]) {
                fE = TRUE;
            }
            if (fE) {
                return i;
            }
        }
    }
    return -1;
}

void Unk_ov141_02293968::func_ov141_02292afc() {
    s32 i;
    s32 none = -1;
    u32 zero = 0;
    for (i = 0; i < 6; i++) {
        u8 *e = (u8 *)this + i;
        u8 *st = e + 0x1663;
        switch (e[0x1663]) {
        case 1:
            if (e[0x1669] < 5) {
                e[0x1669] = e[0x1669] + 1;
                func_ov139_022922a0(&unk_94, i, e[0x1669], 5, 0xe);
            }
            break;
        case 2:
            if (e[0x1669] > 1) {
                e[0x1669]--;
                func_ov139_022922a0(&unk_94, i, e[0x1669], 5, 0xe);
            } else {
                *st = zero;
                func_ov139_02292154(&unk_94, i);
                if (unk_e54 == i) {
                    func_ov141_022929b4(none);
                }
            }
            break;
        }
    }
}

void Unk_ov141_02293968::func_ov141_02292b94() {
    s32 cnt;
    u32 *list;
    s32 n2;
    s32 z[3];
    Unk_ov141_02292b94_Buf buf;
    s32 i;
    func_020733bc();
    cnt = func_020eae78();
    for (i = 0; i < 6; i++) {
        if (unk_1663[i] == 1) {
            unk_1663[i] = 2;
        }
    }
    func_0207217c();
    list = func_020ea65c();
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    for (u8 j = 0; j < cnt; j = j + 1) {
        u32 e = list[j];
        if (e != 0) {
            func_0207217c();
            u32 n = func_020ea6c8((void *)e);
            if (n == 0x11) {
                func_0207217c();
                func_02116048(func_020ea6f4((void *)e), &buf, n);
                if (buf.flag == 0) {
                    s32 idx = func_ov141_02292a48((u8 *)e);
                    if (idx == ~z[1]) {
                        s32 idx2 = func_ov141_02292a24();
                        if (idx2 != ~z[2]) {
                            func_ov141_022929f0(idx2, (void *)e);
                            func_0207217c();
                            n2 = func_020ea6c8((void *)e);
                            func_0207217c();
                            void *q = func_020ea6f4((void *)e);
                            u8 *dst = unk_de4[idx2];
                            func_02116048(q, dst, n2);
                            func_ov139_0229217c(&unk_94, idx2, dst);
                            *((u8 *)this + idx2 + 0x1669) = z[0];
                        }
                    } else {
                        func_ov141_022929f0(idx, (void *)e);
                    }
                }
            }
        }
    }
    func_ov141_02292afc();
}

void Unk_ov141_02293968::func_ov141_02292ca0() {
    if (func_ov141_0229299c(4)) {
        if (func_020b86c0(unk_880, unk_e60, 6, 0x800, 0)) {
            func_ov141_0229297c(4);
        }
    }
}

BOOL Unk_ov141_02293968::func_ov141_02292ce4(u32 pad) {
    u32 old = unk_1670;
    if (old <= 5) {
        if (func_ov002_0220128c(pad)) {
            if (unk_1670 != 0) {
                unk_1670 = unk_1670 - 1;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (unk_1670 < 5) {
                unk_1670 = unk_1670 + 1;
            } else {
                unk_1670 = 6;
            }
        }
    } else {
        if (func_ov002_0220128c(pad)) {
            unk_1670 = 5;
        } else if (func_ov002_0220126c(pad)) {
            unk_1670 = 6;
        } else if (func_ov002_0220125c(pad)) {
            unk_1670 = 7;
        }
    }
    if (old != unk_1670) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov141_02293968::func_ov141_02292d78() {
    unk_6b8.func_ov002_02202af0();
    unk_1662 = unk_8d;
    func_ov002_02200a58(4);
}

void Unk_ov141_02293968::func_ov141_02292da4() {
    unk_6b8.func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov141_02293968::func_ov141_02292dc4() {
    unk_6b8.func_ov002_02202a78();
    unk_6b8.vfunc_0c();
}

void Unk_ov141_02293968::func_ov141_02292de4(s32 a, s32 b) {
    if (func_ov141_0229299c(0x10)) {
        unk_6b8.func_ov002_022029e8(a, b, 3, 0);
        func_ov141_0229297c(0x10);
    } else {
        unk_6b8.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_1662 = unk_8d;
    func_ov002_02200a58(2);
}

void Unk_ov141_02293968::func_ov141_02292e48() {
    s32 a = func_ov141_02292eb0();
    s32 b = func_ov141_02292e90();
    func_ov141_02292de4(a, b);
}

void Unk_ov141_02293968::func_ov141_02292e6c() {
    unk_6b8.func_ov002_02202d00(0);
    unk_6b8.vfunc_0c();
}

s32 Unk_ov141_02293968::func_ov141_02292e90() {
    u32 c = unk_1670;
    if ((u8)(c + 0xfa) <= 1) {
        return 0xae;
    }
    return c * 16 + 0x46;
}

s32 Unk_ov141_02293968::func_ov141_02292eb0() {
    u32 c = unk_1670;
    if (c == 6) {
        return 0x43;
    }
    if (c == 7) {
        return 0x95;
    }
    return 0x2c;
}

void Unk_ov141_02293968::func_ov141_02292ecc() {
    s32 a = func_ov141_02292eb0();
    s32 b = func_ov141_02292e90();
    unk_6b8.func_ov002_02202a40(a, b);
    unk_6b8.func_ov002_02202d00(7);
    func_ov141_02292dc4();
}

void Unk_ov141_02293968::func_ov141_02292f08() {
    func_ov141_0229298c(2);
    unk_e5c = 10;
    unk_166f = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    func_0200402c(0x28);
}

void Unk_ov141_02293968::func_ov141_02292f44() {
    func_ov141_0229297c(2);
    unk_e58 = 10;
    unk_166f = 5;
    func_ov002_02200a50(3);
    func_ov002_02200a58(5);
    func_0200402c(0x27);
}

void Unk_ov141_02293968::func_ov141_02292f80() {
    if (func_0206ef0c()) {
        func_ov141_02292fbc();
    } else {
        func_ov141_02292fa0();
    }
}

void Unk_ov141_02293968::func_ov141_02292fa0() {
    func_ov141_02292ecc();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov141_02293968::func_ov141_02292fbc() {
    func_ov141_02292e6c();
    func_ov002_02200a58(0);
}

void Unk_ov141_02293968::func_ov141_02292fd4() {
    if (unk_166f != 0) {
        unk_166f--;
    } else {
        func_ov141_02292e6c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov141_02293968::func_ov141_02293000() {
    if (unk_6b8.func_0208d4fc()) {
        func_ov141_02292dc4();
        func_ov002_02200a58(unk_1662);
        if (func_ov141_0229299c(8)) {
            func_ov141_0229297c(8);
            unk_1670 = 7;
            func_ov141_02292e48();
        }
    }
}

void Unk_ov141_02293968::func_ov141_02293054() {
    if (unk_6b8.func_0208d4fc()) {
        u32 c = unk_1670;
        if (c == 7) {
            if (unk_e58 == 8) {
                func_ov141_02292f44();
                return;
            }
        } else if (c == 6) {
            func_ov141_02292f08();
            return;
        } else if (unk_1663[c] != 0) {
            func_ov141_022929b4(c);
            func_0200402c(0x29);
            func_ov141_0229298c(8);
            func_ov141_0229298c(0x10);
        }
        func_ov002_02200a58(1);
        func_ov141_02292d78();
    }
}

void Unk_ov141_02293968::func_ov141_022930d4() {
    if (!unk_6b8.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_1662);
        func_ov141_022935e0();
    }
}

void Unk_ov141_02293968::func_ov141_02293104() {
    if (func_ov002_022009d4()) {
        func_ov141_02292fbc();
    } else if (func_ov141_02292ce4(func_ov002_022009c8())) {
        func_ov141_02292e48();
    } else {
        u32 t = data_021f47d8[1];
        if (t & 1) {
            func_ov141_02292da4();
        } else if (t & 2) {
            func_ov141_02292e6c();
            func_ov141_02292f08();
        } else if ((t & 8) && unk_e58 == 8) {
            func_ov141_02292e6c();
            func_ov141_02292f44();
        } else {
            func_ov141_02292b94();
        }
    }
}

void Unk_ov141_02293968::func_ov141_02293194() {
    if (func_ov002_02200a14(1)) {
        func_ov141_02292fa0();
        return;
    }
    if (Unk_ov141_02293194_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            if (unk_1663[i] != 0) {
                if (func_ov141_022929b4(i)) {
                    func_0200402c(0x29);
                }
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x37 && x < 0x7b) {
                func_ov141_02292f08();
            } else if (x >= 0x89 && x < 0xc5) {
                if (unk_e58 == 8) {
                    func_ov141_02292f44();
                }
            }
        }
    } else {
        func_ov141_02292b94();
    }
}
