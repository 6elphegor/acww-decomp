#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
void func_0200402c(u32 v);
s32 func_020512e0(void *p, s32 n);
s32 func_0205125c(void *p, s32 n);
s32 func_02051268(void *dst, void *src, u32 n);
BOOL func_0206e61c();
s32 func_ov095_02292404(void *st);
u32 func_ov095_02292458(void *st, u32 v);
s32 func_ov095_02293dc8(void *st, s32 k, s32 v);
BOOL func_ov095_0229423c(void *st, s32 v);
BOOL func_ov095_02295264(void *st);
BOOL func_ov095_02295258(void *st);
s32 func_ov095_02293dc0(void *st);
s32 func_ov095_02293d94(void *st);
s32 func_ov095_02293d88(void *st);
s32 func_ov095_022923ec(void *st);
s32 func_ov095_022923f8(void *st);
BOOL func_ov095_02293ff0(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL func_ov095_022940f0(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f);
u8 *func_ov095_02293f90(void *st, u8 *p);
u8 *func_ov095_02293f8c(void *st, u8 *p);
u8 *func_ov095_02293f88(void *st, u8 *p);
BOOL func_ov095_02293f94(void *st, u8 *a, u8 *b, s32 c, s32 d, s32 e);
s32 func_ov095_02295194(void *st);
s32 func_ov095_02294a44(void *st, s32 a, s32 b);
s32 func_ov095_02294864(void *st, s32 a, s32 b);
s32 func_ov095_02294d40(void *st, s32 a);
s32 func_ov095_02294318(void *st);
BOOL func_ov095_022942e8(void *st);
s32 func_ov095_02294a40(void *st);
BOOL func_ov095_02294324(void *st);
BOOL func_ov095_02293990(void *st);
s32 func_ov095_02294648(void *st, s32 a, s32 b, s32 c);
void func_ov002_02202c40(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202f00(void *p);
s32 func_ov002_02203110(void *p, s32 v);
s32 func_ov002_022014ac(void *p, s32 a, s32 b);
void func_ov002_02201a3c(void *p, s32 v);
u32 func_ov002_0220144c(void *p, s32 a, u32 b);
}

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

    BOOL func_ov002_022009d4();
    u8 func_ov002_022009c8();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

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

// Vtable 0x0229a1b8
class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    // callees in other groups (return types chosen to match call sites)
    s32 func_ov122_02296968(u32 mask);
    s32 func_ov122_02296978(u32 mask);
    BOOL func_ov122_02296988(u32 mask);
    s32 func_ov122_02296a48();
    s32 func_ov122_02296bf0();
    s32 func_ov122_02296c70();
    s32 func_ov122_02296ce8(u32 i);
    s32 func_ov122_02296d28();
    s32 func_ov122_02296d34();
    s32 func_ov122_02296df4(s32 v);
    s32 func_ov122_02296e80();
    BOOL func_ov122_02296ee0();
    s32 func_ov122_02296f30(u32 v);
    u8 func_ov122_02296f40();
    u32 func_ov122_02296f68();
    u8 *func_ov122_02296f98();
    u8 *func_ov122_02296fd4();
    s32 func_ov122_02297238();
    s32 func_ov122_022972dc();
    BOOL func_ov122_022972f4();
    u8 *func_ov122_0229731c();
    s32 func_ov122_02297340();
    BOOL func_ov122_022974e8();
    s32 func_ov122_022975c0();
    BOOL func_ov122_022975c4();
    s32 func_ov122_022978c0();
    s32 func_ov122_02297940();
    s32 func_ov122_022979ac(u8 a, s32 b);
    s32 func_ov122_02297a08();
    s32 func_ov122_02297a24();
    BOOL func_ov122_02297a3c();
    BOOL func_ov122_02297a68();
    BOOL func_ov122_02297ac8();
    BOOL func_ov122_02297b30();
    BOOL func_ov122_02297bcc();
    BOOL func_ov122_02297c14();
    s32 func_ov122_02298ec4();
    s32 func_ov122_02298fbc(s32 a, s32 b);

    // in range
    void func_ov122_022984f4();
    s32 func_ov122_022985d8(s32 key);
    void func_ov122_02298714();
    void func_ov122_022987ac();
    void func_ov122_02298814();
    void func_ov122_02298820();
    void func_ov122_0229882c();
    BOOL func_ov122_02298874(u32 key);
    BOOL func_ov122_022988b8(u32 a, u32 b);
    BOOL func_ov122_0229899c(u32 key);
    BOOL func_ov122_02298a54(BOOL flag);
    s32 func_ov122_02298b14();
    void func_ov122_02298b70();
    void func_ov122_02298c24();
    void func_ov122_02298c94();
    void func_ov122_02298cf4();
    void func_ov122_02298d30();
    void func_ov122_02298d84();

    /* 0x91 */ u8 unk_91[0x9c - 0x91];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 unk_a4[4];
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 *unk_bc;
    /* 0xc0 */ u32 unk_c0[(0x3e8c - 0xc0) / 4];
    /* 0x3e8c */ u32 unk_3e8c[0x48 / 4];
    /* 0x3ed4 */ u32 unk_3ed4[0x98 / 4];
    /* 0x3f6c */ u32 unk_3f6c[(0x4084 - 0x3f6c) / 4];
    /* 0x4084 */ u8 unk_4084[0x80];
    /* 0x4104 */ u32 unk_4104[0x2f4 / 4];
    /* 0x43f8 */ u32 unk_43f8[0x164 / 4];
};

static inline BOOL Unk_ov122_02298b70_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

#define C Unk_ov122_0229a1b8


void C::func_ov122_022984f4() {
    if (func_ov002_022009d4()) {
        func_ov122_02297a24();
        return;
    }
    u8 b = func_ov002_022009c8();
    if (func_ov122_02296988(0x10) == 1) {
        if (func_ov095_02292404(unk_c0) == 0xd6) {
            if (func_ov002_022009a4()) {
                b &= ~0x20;
            }
        }
    }
    switch (func_ov095_02292458(unk_c0, b)) {
    case 1:
        func_ov002_02202c40(unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 2:
        func_ov002_02202be0(unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 3:
        func_ov002_02202ca0(unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 0:
    default:
        if (func_ov122_02297c14()) return;
        if (func_ov122_02297bcc()) return;
        if (func_ov122_02297b30()) return;
        if (func_ov122_02297a68()) return;
        if (func_ov122_02297ac8()) return;
        if (func_ov122_02297a3c()) return;
        break;
    }
}

s32 C::func_ov122_022985d8(s32 key) {
    s32 r = 1;
    s32 t = func_ov095_02293dc8(unk_c0, key, 6);
    if (t != 0) {
        func_ov122_02298fbc(0, r);
        return t;
    }
    if (func_ov095_0229423c(unk_c0, key)) {
        switch (key) {
        case 0x100:
            func_ov122_02298a54(r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!func_ov122_0229899c(key)) {
                func_ov122_02296d28();
            }
            r = 2;
            break;
        case 0x113:
            func_ov122_02298820();
            r = 3;
            break;
        case 0x114:
            func_ov122_02298814();
            r = 3;
            break;
        case 0x118:
            func_ov122_022987ac();
            r = 2;
            break;
        case 0x119:
            func_ov122_02298714();
            r = 2;
            break;
        }
    } else {
        BOOL ok = func_ov122_02298874((u8)key);
        if (func_ov095_02295264(unk_c0)) {
            func_ov122_022979ac(0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(unk_c0)) {
            func_ov122_022979ac(0x1c, r);
            return 4;
        }
        if (!ok) {
            func_ov122_02296d28();
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

void C::func_ov122_02298714() {
    if (func_ov122_02296988(0x400)) {
        if (func_ov122_022972f4()) {
            func_ov122_02297238();
        }
        func_ov095_02293dc0(unk_c0);
        func_ov095_02293d94(unk_c0);
        s32 n = func_020512e0(unk_4084, 0x80);
        s32 i;
        for (i = 0; i < n; i++) {
            if (!func_ov122_022988b8(*((u8 *)this + i + 0x4084), 0)) {
                if (i == 0) {
                    func_ov122_02296d28();
                }
                i = n;
            }
        }
        func_ov095_022923ec(unk_c0);
        func_ov122_02298fbc(0, 1);
        func_ov122_02297340();
        func_ov095_02293d88(unk_c0);
    }
}

void C::func_ov122_022987ac() {
    if (func_ov122_022972f4()) {
        u32 a = unk_ae;
        u32 b = unk_ad;
        u32 lo, n;
        if (b > a) {
            lo = a;
            n = b - a;
        } else {
            lo = b;
            n = a - b;
        }
        func_0205125c(unk_4084, 0x80);
        func_02051268(func_ov122_02296fd4() + lo, unk_4084, n);
        func_ov122_02296978(0x400);
        func_ov095_022923f8(unk_c0);
        func_ov122_02298ec4();
    }
}

void C::func_ov122_02298814() { func_ov122_02296ce8(0); }

void C::func_ov122_02298820() { func_ov122_02296ce8(1); }

void C::func_ov122_0229882c() {
    unk_8c = 4;
    func_ov002_02200a60(1);
    func_ov122_02296df4(0);
    func_ov122_02296968(4);
    func_ov122_022972dc();
    func_ov095_02293dc0(unk_c0);
    func_ov122_02298fbc(1, 0);
    func_ov122_02296c70();
}

BOOL C::func_ov122_02298874(u32 key) {
    if (func_ov122_022972f4()) {
        func_ov122_02297238();
        func_ov095_02293dc0(unk_c0);
    }
    BOOL r = func_ov122_022988b8(key, 1);
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return r;
}

BOOL C::func_ov122_022988b8(u32 a, u32 b) {
    u8 v;
    v = func_ov122_02296f40();
    u8 old = v;
    u8 *p = func_ov122_02296f98();
    u32 sz = func_ov122_02296f68();
    if (unk_aa == 2) {
        if (func_ov095_02293ff0(unk_c0, p, a, &v, 0x80, 0x28, 4, 0x96, 0, b)) {
            func_ov122_02296f30(v);
            goto ok;
        }
        return FALSE;
    }
    s32 h = 0xa0;
    if (unk_aa != 3) {
        h = h - 0x40;
    }
    if (func_ov095_022940f0(unk_c0, p, a, &v, sz, h, 0, 1)) {
        switch (unk_aa) {
        case 0:
            if (old != v) {
                unk_bc[0xec] = unk_bc[0xec] + v - old;
            }
            break;
        case 1:
            v = v - unk_bc[0xec];
            break;
        }
        func_ov122_02296f30(v);
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL C::func_ov122_0229899c(u32 key) {
    u8 *p = func_ov122_0229731c();
    if (p == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        p = func_ov095_02293f90(unk_c0, p);
        break;
    case 0x104:
        p = func_ov095_02293f8c(unk_c0, p);
        break;
    case 0x105:
        p = func_ov095_02293f88(unk_c0, p);
        break;
    }
    if (p == 0) {
        return FALSE;
    }
    u8 v = func_ov122_02296f40();
    u8 *q = func_ov122_02296f98();
    u32 sz = func_ov122_02296f68();
    if (!func_ov095_02293f94(unk_c0, q, p, v, sz, 0x2710)) {
        return FALSE;
    }
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return TRUE;
}

BOOL C::func_ov122_02298a54(BOOL flag) {
    if (func_ov122_022972f4()) {
        func_ov095_02293dc0(unk_c0);
        func_0200402c(0x35);
    } else {
        u8 a = unk_ac;
        if (a != 0) {
            unk_ad = a;
            unk_ae = unk_ac - 1;
            func_0200402c(0x35);
        } else {
            u8 *q = func_ov122_02296fd4();
            u8 m = unk_aa;
            if ((m == 0 && unk_bc[0xec] == 0) || (m == 1 && unk_bc[0xec] == 0x18) || q[0] == 0) {
                if (flag) {
                    func_ov122_02296d28();
                }
                return FALSE;
            }
            unk_ad = 0;
            unk_ae = 1;
            func_0200402c(0x35);
        }
    }
    func_ov122_02297238();
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return TRUE;
}

s32 C::func_ov122_02298b14() {
    func_ov095_02295194(unk_c0);
    s32 t = func_ov095_02294a44(unk_c0, data_021ef5f0, data_021ef5ec);
    if (t == -1) {
        return 0;
    }
    s32 h = func_ov095_02294864(unk_c0, t, 8);
    s32 r = func_ov122_022985d8(h);
    func_ov095_02294d40(unk_c0, t);
    func_ov095_02294318(unk_c0);
    return r;
}

void C::func_ov122_02298b70() {
    if (func_0206e61c()) {
        func_ov122_02296978(0x2000);
        func_ov122_02296a48();
    } else if (func_ov002_02200a14(1)) {
        func_ov122_022978c0();
    } else if (Unk_ov122_02298b70_Both()) {
        s32 t = func_ov002_022014ac(unk_4104, data_021ef5f0, data_021ef5ec);
        if (t >= 0) {
            func_ov002_02201a3c(unk_4104, t);
            unk_b6 = func_ov002_0220144c(unk_4104, unk_b7, (u8)t);
            func_ov002_02200a58(0x17);
        } else {
            func_ov122_02296a48();
        }
    }
}

void C::func_ov122_02298c24() {
    if (func_ov002_02200a14(1)) {
        func_ov122_02297940();
    } else if (Unk_ov122_02298b70_Both()) {
        if (func_ov002_02203110(unk_43f8, 3)) {
            func_ov122_02296ce8(3);
        } else if (func_ov002_02203110(unk_43f8, 4)) {
            func_ov122_02296ce8(4);
        }
    }
}

void C::func_ov122_02298c94() {
    BOOL r;
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        if (unk_ad == unk_ae) {
            func_ov122_02296968(8);
        }
        r = TRUE;
    } else {
        r = func_ov122_022974e8();
        if (r) {
            func_0200402c(0x15);
        }
    }
    if (r) {
        func_ov122_02296d34();
        func_ov122_02298fbc(0, 1);
    }
}

void C::func_ov122_02298cf4() {
    unk_ab = 0;
    if (data_021f4770 == 0) {
        func_ov122_022975c0();
        func_ov002_02202ef4(unk_3e8c);
        func_ov122_02297a24();
    } else {
        func_ov122_02296e80();
    }
}

void C::func_ov122_02298d30() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(unk_c0)) {
        s32 t = func_ov095_02294a40(unk_c0);
        s32 h = func_ov095_02294864(unk_c0, t, 8);
        func_ov122_022985d8(h);
        func_ov095_02294d40(unk_c0, t);
    }
}

void C::func_ov122_02298d84() {
    if (func_ov002_02200a14(1)) {
        func_ov122_02297a08();
        return;
    }
    BOOL hit = FALSE;
    if (func_ov095_02294324(unk_c0)) {
        hit = TRUE;
    }
    if (Unk_ov122_02298b70_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        if (func_ov002_02203110(unk_43f8, 9)) {
            func_ov122_02298820();
            return;
        }
        if (!func_ov122_02296988(0x10)) {
            if (func_ov002_02203110(unk_43f8, 0)) {
                func_ov122_02298814();
                return;
            }
        }
        if (func_ov095_02293990(unk_c0)) {
            func_ov095_02294648(unk_c0, 8, 6, 1);
            func_ov122_02298fbc(0, 1);
            return;
        }
        if (y < 0x48) {
            if (x < 0xe0) {
                if (func_ov122_022975c4()) {
                    func_ov002_02200a58(3);
                    func_ov095_02293dc0(unk_c0);
                    func_ov122_02298fbc(1, 1);
                    return;
                }
            } else {
                if (func_ov122_02296ee0()) {
                    func_ov002_02202f00(unk_3e8c);
                    func_ov002_02200a58(2);
                    func_ov122_022972dc();
                    func_ov122_02298fbc(1, 1);
                    return;
                }
            }
        }
        if (y >= 0x48) {
            if (!hit) {
                s32 r = func_ov122_02298b14();
                if (r == 0) {
                } else if (r == 1) {
                    func_ov002_02200a58(1);
                }
            }
        }
    }
}
