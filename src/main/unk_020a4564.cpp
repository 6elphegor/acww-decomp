#include "types.h"

// Local copies of the library base classes with the parameters these overrides forward.
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual void vfunc_08(s32 a);
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

class Unk_020872fc {
public:
    BOOL func_02087314();
    u16 *func_02087364();
};

class Unk_020cbb18 {
public:
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ s32 unk_64;

    BOOL func_02072e88(s32 i);
    void func_02072204(u32 v);
    u32 func_02072374();
    void func_02072380(u32 v);
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *p, u32 n);
    void func_020728d4();
    BOOL func_020729cc(u32 v);
};

// Static object registered with the atexit-style helper (dtor at func_02000c8c).
struct Unk_020a4778_Static {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_020a4778_Static() {
        unk_00 = 0x10000;
        unk_04 = 0;
        unk_08 = 0x5000;
    }
    ~Unk_020a4778_Static();
};

// Singleton at data_021eda94 (no vtable); the fields below are what this range touches.
class Unk_020a4738 {
public:
    /* 0x00 */ u8 pad_00[0x84];
    /* 0x84 */ s32 unk_84[4];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8[4];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ u8 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4;

    u8 func_020a4738();
    void func_020a4740(u8 v);
    s32 func_020a4748();
    void func_020a4750(s32 v);
    u8 func_020a4758();
    void func_020a4760(u8 v);
    s32 func_020a4768();
    void func_020a4770(s32 v);
    void func_020a4778();
    void func_020a4bc0();
    void func_020a4bd4(s32 i);
    s32 func_020a4be0(s32 i);
    void func_020a4bec(s32 i, s32 v);
    void func_020a4bf8();
    s32 func_020a4c00();
    void func_020a4c08(s32 v);
    void func_020a4c10();
    s32 func_020a4c18();
    void func_020a4c20(s32 v);
    void func_020a4c28();
    s32 func_020a4c30();
    void func_020a4c38(s32 v);
    u16 func_020a4c40();
    void func_020a4c48(u16 v);
    s32 func_020a4c50();
    void func_020a4c58(s32 v);
    void func_020a4c60();

    // Outside this range
    s32 func_020a5198(s32 i);
    void func_020a51a4(s32 i, s32 v);
    void func_020a512c(s32 i, s32 v);
};

// Vtable at 0x020e2988; its constructor and destructor are inline.
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual ~Unk_020e2988() {}
};

extern "C" {
extern u8 data_020e2970;
extern u8 data_021d726c;
extern void *data_021eda68;
extern u8 data_021eda64;
extern u8 data_021eda54;
extern u8 data_021eda50;
extern u8 data_021eda58;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_020a4738 data_021eda94;
struct Unk_020a4778_Id { u16 unk_00; u8 unk_02[8]; };
extern Unk_020a4778_Id data_021d7352;
extern u32 data_021eda6c;

void func_0209caf4(void);
void func_02004074(void);
void func_02041104(void);
void func_020739b8(s32 a);
void func_020a5c30(void);
void func_02045c68(void);
void func_0203d4c0(void);
void func_0208e968(void);
void func_020a6470(void);
void func_020a5dac(void);
s32 func_020a5ec8(void);
void func_020a5ed8(s32 a);
void func_020535e0(void);
void func_02111110(void);
void func_021101f4(s32 a);
void func_02110088(s32 a);
void func_0210ff74(s32 a);
void func_0210fcb8(s32 a);
void func_0210fbc4(s32 a);
void func_02002918(void);

s32 func_020b50e8(void);
s32 func_020b4934(void);
s32 func_020b49a8(s32 a);
BOOL func_0203d56c(void);
void func_020a66f4(void *p);
void func_020a66f0(void *p);
void func_020a66d4(void *p, u32 a, u32 b, u32 c);
void func_020b78f4(s32 a);
void func_020b7914(s32 a);
void func_020b78dc(void);
void func_0203d544(void);
void func_0206e660(void);
s32 func_02073168(void);
s32 func_02097444(s32 a);
s32 func_020974a0(s32 a);
Unk_020872fc *func_020986a4(s32 a);
void func_020a0408(s32 a);
void func_020b4a08(s32 a, s32 b);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
void func_020b4f18(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
void func_020a0924(void);
void func_020a0900(void);
void func_020a0918(void);
void func_020a08f4(void);
void func_020a08dc(void);
void func_0209f230(s32 a);
u32 func_020eaf28(void);
s32 func_02128930(const void *a, const void *b, u32 n);
void func_020a5cfc(s32 a);
void func_020e9b70(void);
}

// Group r275, class Unk_020e2988 overrides

BOOL Unk_020e2988::vfunc_14(s32 a) {
    if (a == 2) {
        data_020e2970 = 0;
        if (data_021d726c != 0) {
            func_0209caf4();
        }
        data_021eda68 = 0;
        func_02004074();
    }
    return Unk_020d8c7c_Base::vfunc_14(a);
}

BOOL Unk_020e2988::vfunc_10() {
    if (Unk_020d8c7c_Base::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e2988::vfunc_08(s32 a) {
    if (a == 2) {
        data_021eda64 = 0;
        if (*(u16 *)&unk_04[8] != 6) {
            func_02041104();
        }
        func_020739b8(0);
        func_020a5c30();
        func_02045c68();
        func_0203d4c0();
    }
    Unk_020d8c7c::vfunc_08(a);
}

BOOL Unk_020e2988::vfunc_04() {
    if (!Unk_020d8c7c_Base::vfunc_04()) {
        return FALSE;
    }
    if (data_021eda64 != 0) {
        return TRUE;
    }
    extern void func_020a4698(void);
    func_020a4698();
    func_0208e968();
    data_021eda68 = this;
    data_021eda54 = 4;
    func_020a6470();
    func_020a5dac();
    data_021eda64++;
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        switch (func_020a5ec8()) {
        case 6:
            func_020a5ed8(7);
            break;
        case 0xd:
            func_020a5ed8(0xe);
            break;
        }
    }
    data_021eda50 = 0;
    data_021eda58 = 0;
    return TRUE;
}

extern "C" {

void func_020a4698(void) {
    func_020535e0();
    func_02111110();
    func_021101f4(0x20);
    func_02110088(1);
    func_0210ff74(0x40);
    func_0210fcb8(6);
    func_0210fbc4(0x10);
    *(volatile u32 *)0x40004c8 = 0x20000000;
    *(volatile u32 *)0x40004cc = 0x7fff;
    *(volatile u32 *)0x40004c0 = 0x7fff;
    *(volatile u32 *)0x40004c4 = 0;
    func_02002918();
}

Unk_020e2988 *func_020a46fc(void) {
    return new Unk_020e2988();
}

}

// Unk_020a4738 methods

void Unk_020a4738::func_020a4778() {
    Unk_020cbb18 *g = data_020cbb18;
    s32 st = g->unk_64;
    s32 mode;
    s32 v;
    s32 st2;
    u8 m[4];
    if (func_020a4be0(st) == 0) {
        func_020a4770(0);
        func_020a4bec(st, 1);
    }
    st = g->unk_64;
    if (func_020a4be0(st) == 1) {
        BOOL r7 = FALSE;
        s32 t = func_020b50e8();
        if (t != 0x2e && t != 0xc && t != 0xd && t != 0xe && t != 0x2f) {
            if (func_020b49a8(func_020b4934()) == 0x3f && data_021eda64 == 0) {
                if (func_0203d56c()) {
                    r7 = TRUE;
                }
            }
        }
        mode = func_020a4c00();
        if (r7) {
            func_020a4760(0x28);
            func_020a4770(0);
            if (st != 0) {
                func_020a66f4(&m[0]);
                func_020a66d4(&m[0], 2, 4, func_020a4c18());
                Unk_020cbb18 *g2 = data_020cbb18;
                g2->func_020728d4();
                g2->func_020728a4(&m[0], 1);
                g2->func_02072824(0xc, 0);
                func_020a66f0(&m[0]);
            }
            func_020b78f4(mode);
            func_020a4bec(st, 2);
            g->func_02072204(func_02073168());
        } else {
            u32 n = func_020a4768() + 1;
            if (n >= 0xa0) {
                if (st == 0) {
                    func_020a4bec(0, 3);
                } else {
                    func_020a66f4(&m[1]);
                    func_020a66d4(&m[1], 3, 4, func_020a4c18());
                    Unk_020cbb18 *g2 = data_020cbb18;
                    g2->func_020728d4();
                    g2->func_020728a4(&m[1], 1);
                    g2->func_02072824(0xc, 0);
                    func_020a4bec(st, 6);
                    func_020a66f0(&m[1]);
                }
                func_0206e660();
                func_020a4770(0);
            } else {
                func_020a4770(n);
            }
            func_020b7914(mode);
        }
    }
    st2 = g->unk_64;
    v = func_020a4be0(st2);
    if (v == 2) {
        func_020b78f4(func_020a4c00());
    } else if (v == 4) {
        func_0203d544();
        func_0206e660();
        func_020b78dc();
        func_020a4760(0);
        if (st2 != 0) {
            func_020a66f4(&m[2]);
            func_020a66d4(&m[2], 6, 4, func_020a4c18());
            Unk_020cbb18 *g3 = data_020cbb18;
            g3->func_020728d4();
            g3->func_020728a4(&m[2], 1);
            g3->func_02072824(0xc, 0);
            func_020a66f0(&m[2]);
        }
        func_020a4bec(st2, 6);
    } else if (v == 5) {
        BOOL r7;
        s32 md = func_020a4c00();
        s32 sl;
        func_020b78f4(md);
        u8 u = data_021eda94.func_020a4758();
        if (u != 0) {
            data_021eda94.func_020a4760(u - 1);
        }
        r7 = FALSE;
        if (func_020a4758() != 0) {
            r7 = TRUE;
        }
        if (!r7) {
            if (md == 0) {
                sl = func_020a4c18();
                if (func_02097444(sl + 3) == 0) {
                    r7 = TRUE;
                    if (st2 == 0) {
                        u32 irq = func_020eaf28();
                        u16 mask = 1 << sl;
                        if (mask != (mask & irq)) {
                            u32 f = g->func_02072374();
                            if ((f & 4) == 0) {
                                g->func_02072380(f | 4);
                            }
                        }
                    }
                }
            } else if (md == 1) {
                func_020a4c58(func_020a4c18());
            }
        }
        if (r7) {
            return;
        }
        func_020a4750(func_020a4c00());
        func_020a0408(func_020a4c18());
        func_020b4a08(func_020b4934(), 0);
        if (func_020a4c00() == 0) {
            s32 x = func_020974a0(func_020a4c18() + 3);
            u16 *p;
            u8 *idb = (u8 *)&data_021d7352;
            if (x != 0 && func_020986a4(x)->func_02087314() && (p = func_020986a4(x)->func_02087364(), p[0] == *(u16 *)idb) &&
                func_02128930(p + 1, idb + 2, 8) == 0) {
                func_020b4f58(func_020b4934(), 0x2f, 2, 2);
            } else {
                static Unk_020a4778_Static s;
                func_020b4f18(func_020b4934(), 0xd, &s, 0x800000, 0, 2, 2);
            }
        } else {
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        }
        if (g->func_020729cc(0)) {
            if (md == 0) {
                func_020a0924();
            } else if (md == 1) {
                func_020a0900();
            }
        } else {
            if (md == 0) {
                func_020a0918();
            } else if (md == 1) {
                func_020a08f4();
            } else if (md == 2) {
                func_020a08dc();
                func_0209f230(0);
            } else {
                func_020a08dc();
                func_0209f230(1);
            }
        }
        if (st2 != 0) {
            func_020a66f4(&m[3]);
            func_020a66d4(&m[3], 6, 4, func_020a4c18());
            Unk_020cbb18 *g3 = data_020cbb18;
            g3->func_020728d4();
            g3->func_020728a4(&m[3], 1);
            g3->func_02072824(0xc, 0);
            func_020a66f0(&m[3]);
        }
        func_020a4bec(st2, 6);
    }
}

void Unk_020a4738::func_020a4c60() {
    u32 i;
    u32 slot;
    s32 ok;
    s32 j;
    s32 z24 = 0, z28 = 0, z14 = 0, z18 = 0, z1c = 0, z20 = 0, z2c = 0;
    u8 m[5];
    s32 mode;
    Unk_020cbb18 *g;
    s32 c18;
    s32 k;
    BOOL all;
    BOOL all2;
    i = 0;
    do {
        slot = func_020a5198(i);
        if (slot <= 3) {
            ok = TRUE;
            for (j = 3; j >= 0; j--) {
                switch (func_020a5198(j)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 7:
                    break;
                default:
                    ok = z14;
                    break;
                }
                if (!ok) {
                    break;
                }
            }
            if (ok) {
                if (func_020a4c30() != 4) {
                    ok = z18;
                }
            }
            if (ok) {
                if (func_020b50e8() == 0x2e || func_020b50e8() == 0x2f || func_020b50e8() == 0xd) {
                    ok = z1c;
                }
            }
            if (ok) {
                if (func_020b49a8(func_020b4934()) == 0x2e || func_020b49a8(func_020b4934()) == 0x2f ||
                    func_020b49a8(func_020b4934()) == 0xd) {
                    ok = z20;
                }
            }
            if (ok) {
                func_020a4c38(z24);
                func_020a4c20(i);
                if (slot == 0) {
                    func_020a4c08(z28);
                } else if (slot == 1) {
                    func_020a4c08(1);
                } else if (slot == 2) {
                    func_020a4c08(2);
                } else {
                    func_020a4c08(3);
                }
                func_020a51a4(i, 4);
            } else {
                func_020a512c(i, slot == 0 ? 1 : z2c);
            }
        }
        i++;
    } while (i < 4);

    if (func_020a4c30() == 0) {
        c18 = func_020a4c18();
        k = 3;
        g = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18 && g->func_02072e88(k)) {
                if (k == 0) {
                    func_020a4bec(0, 0);
                } else {
                    func_020a66f4(&m[0]);
                    mode = func_020a4c00();
                    func_020a66d4(&m[0], 0, mode, func_020a4c18());
                    g->func_020728d4();
                    g->func_020728a4(&m[0], 1);
                    g->func_02072824(0xc, k);
                    func_020a4bec(k, 1);
                    func_020a66f0(&m[0]);
                }
            }
        }
        func_020a4c38(1);
    }
    if (func_020a4c30() == 1) {
        all = TRUE;
        c18 = func_020a4c18();
        k = 3;
        g = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18 && g->func_02072e88(k)) {
                s32 v = func_020a4be0(k);
                if (v != 2 && v != 3) {
                    all = FALSE;
                    break;
                }
            }
        }
        if (all) {
            all2 = TRUE;
            for (k = 3; k >= 0; k--) {
                if (k != c18 && g->func_02072e88(k) && func_020a4be0(k) == 3) {
                    all2 = FALSE;
                    break;
                }
            }
            if (all2) {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->func_02072e88(k)) {
                        if (k == 0) {
                            func_020a4bec(0, 5);
                        } else {
                            func_020a66f4(&m[1]);
                            func_020a66d4(&m[1], 5, 4, func_020a4c18());
                            g->func_020728d4();
                            g->func_020728a4(&m[1], 1);
                            g->func_02072824(0xc, k);
                            func_020a4bec(k, 5);
                            func_020a66f0(&m[1]);
                        }
                    }
                }
                if (func_020a4c00() == 0 || g->func_020729cc(c18) != 0) {
                    func_020a51a4(c18, 5);
                } else {
                    m[2] = 5;
                    Unk_020cbb18 *g5 = data_020cbb18;
                    g5->func_020728d4();
                    g5->func_020728a4(&m[2], 1);
                    g5->func_02072824(1, c18);
                    func_020a51a4(c18, 7);
                }
                if (func_020a4c00() == 0) {
                    func_020a5cfc(0);
                }
                func_020a4c58(c18);
                func_020a4c38(2);
            } else {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->func_02072e88(k)) {
                        if (func_020a4be0(k) == 2) {
                            if (k == 0) {
                                func_020a4bec(0, 4);
                            } else {
                                func_020a66f4(&m[3]);
                                func_020a66d4(&m[3], 4, 4, func_020a4c18());
                                g->func_020728d4();
                                g->func_020728a4(&m[3], 1);
                                g->func_02072824(0xc, k);
                                func_020a4bec(k, 4);
                                func_020a66f0(&m[3]);
                            }
                        } else {
                            func_020a4bec(k, 6);
                        }
                    }
                }
                func_020a4c38(3);
            }
        }
    }
    if (func_020a4c30() == 2) {
        BOOL all3 = TRUE;
        s32 c18b = func_020a4c18();
        k = 3;
        Unk_020cbb18 *g6 = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18b && g6->func_02072e88(k) && func_020a4be0(k) != 6) {
                all3 = FALSE;
                break;
            }
        }
        if (all3) {
            func_020a4c38(4);
        }
    }
    if (func_020a4c30() == 3) {
        BOOL all4 = TRUE;
        s32 c18c = func_020a4c18();
        k = 3;
        Unk_020cbb18 *g7 = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18c && g7->func_02072e88(k) && func_020a4be0(k) != 6) {
                all4 = FALSE;
                break;
            }
        }
        if (all4) {
            if (func_020a4c00() == 0 || g7->func_020729cc(c18c) != 0) {
                func_020a51a4(c18c, 6);
            } else {
                m[4] = 6;
                Unk_020cbb18 *g8 = data_020cbb18;
                g8->func_020728d4();
                g8->func_020728a4(&m[4], 1);
                g8->func_02072824(1, c18c);
                func_020a51a4(c18c, 7);
            }
            if (func_020a4c00() == 0) {
                func_020e9b70();
            }
            func_020a4c38(4);
        }
    }
}

// End of file: small accessors (defined last so they are not inlined into callers)

u8 Unk_020a4738::func_020a4738() { return unk_c4; }
void Unk_020a4738::func_020a4740(u8 v) { unk_c4 = v; }
s32 Unk_020a4738::func_020a4748() { return unk_c0; }
void Unk_020a4738::func_020a4750(s32 v) { unk_c0 = v; }
u8 Unk_020a4738::func_020a4758() { return unk_bc; }
void Unk_020a4738::func_020a4760(u8 v) { unk_bc = v; }
s32 Unk_020a4738::func_020a4768() { return unk_b8; }
void Unk_020a4738::func_020a4770(s32 v) { unk_b8 = v; }
void Unk_020a4738::func_020a4bc0() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        unk_a8[i] = 6;
    }
}
void Unk_020a4738::func_020a4bd4(s32 i) { unk_a8[i] = 6; }
s32 Unk_020a4738::func_020a4be0(s32 i) { return unk_a8[i]; }
void Unk_020a4738::func_020a4bec(s32 i, s32 v) { unk_a8[i] = v; }
void Unk_020a4738::func_020a4bf8() { unk_a4 = 4; }
s32 Unk_020a4738::func_020a4c00() { return unk_a4; }
void Unk_020a4738::func_020a4c08(s32 v) { unk_a4 = v; }
void Unk_020a4738::func_020a4c10() { unk_a0 = 4; }
s32 Unk_020a4738::func_020a4c18() { return unk_a0; }
void Unk_020a4738::func_020a4c20(s32 v) { unk_a0 = v; }
void Unk_020a4738::func_020a4c28() { unk_9c = 4; }
s32 Unk_020a4738::func_020a4c30() { return unk_9c; }
void Unk_020a4738::func_020a4c38(s32 v) { unk_9c = v; }
u16 Unk_020a4738::func_020a4c40() { return unk_98; }
void Unk_020a4738::func_020a4c48(u16 v) { unk_98 = v; }
s32 Unk_020a4738::func_020a4c50() { return unk_94; }
void Unk_020a4738::func_020a4c58(s32 v) { unk_94 = v; }
