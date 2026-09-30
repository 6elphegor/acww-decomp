#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
BOOL func_02072e44(void *p);
void func_02116048(void *src, void *dst, u32 n);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
void *func_020e8618(void *heap, u32 n);
void func_020e85fc(void *heap, void *p);
void func_0206f638(s32 a);
s32 func_0206f644();
s32 func_02065554(void *p);
s32 func_02065578(void *p);
void func_02065c94(void *p);
s32 func_02096914(void *p, s32 n);
s32 func_020968e4(void *p, s32 n);
s32 func_02096960(void *p);
void func_02096a9c(void *p);
s32 func_02096a0c(void *p);
s32 func_020969b8(void *p);
s32 func_02096acc(void *p, s32 a, s32 b);
s32 func_02096a50(void *p, s32 a);
void func_0206ea2c(void *p);
s32 func_02067918(s32 a);
void func_02094030(void *p);
void func_02094018(void *p);
void func_020940d0(s32 a, void *p);
s32 func_02097868(void *p, s32 a);
s32 func_0209888c(...);
void func_02067a3c(s32 o, s32 a, void *p);
void func_ov002_022030ac(void *p, s32 a);
extern u8 data_021d735c[];
extern void *data_021c6210;
struct Unk_ov104_Comm {
    u32 unk_00[0x64 / 4];
    u32 unk_64;
};
extern Unk_ov104_Comm *data_020cbb18;
}

class Unk_ov104_sub_02065cc8 {
public:
    ~Unk_ov104_sub_02065cc8();
    u32 unk_00[0xf4 / 4];
};
class Unk_ov104_sub_02203968 {
public:
    ~Unk_ov104_sub_02203968();
    u32 unk_00[0x10 / 4];
};
class Unk_ov104_sub_02203df0 {
public:
    ~Unk_ov104_sub_02203df0();
    u32 unk_00[0x70 / 4];
};
class Unk_ov104_sub_0206d40c {
public:
    ~Unk_ov104_sub_0206d40c();
    u32 unk_00[0x210 / 4];
};
class Unk_ov104_sub_022043e8 {
public:
    ~Unk_ov104_sub_022043e8();
    u32 unk_00[0x108 / 4];
};
class Unk_ov104_sub_02202454 {
public:
    ~Unk_ov104_sub_02202454();
    u32 unk_00[0x300 / 4];
};
class Unk_ov104_sub_02202640 {
public:
    virtual ~Unk_ov104_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};
class Unk_ov104_sub_022027c4 {
public:
    ~Unk_ov104_sub_022027c4();
    u32 unk_00[0x18 / 4];
};
class Unk_ov104_sub_022007e8 {
public:
    ~Unk_ov104_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};
class Unk_ov104_sub_02292d50 {
public:
    ~Unk_ov104_sub_02292d50();
    u32 unk_00[0x15e0 / 4];
};
class Unk_ov104_sub_0229469c {
public:
    ~Unk_ov104_sub_0229469c();
    u32 unk_00[0x28 / 4];
};
class Unk_ov104_sub_02293a60 {
public:
    ~Unk_ov104_sub_02293a60();
    u32 unk_00[0xa60 / 4];
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

    void func_ov002_02200a50(u8 v);
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

// Vtable 0x02298170
class Unk_ov104_02298170 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov104_02298170();

    void func_ov104_02294dfc(u32 mask);
    void func_ov104_02294e0c(u32 mask);
    BOOL func_ov104_02294e1c(u32 mask);
    BOOL func_ov104_02294e30(void *p);
    void func_ov104_02294e8c();
    void func_ov104_02295008();
    u32 func_ov104_022950f8(void *p);
    u32 func_ov104_0229514c(void *p);
    s32 func_ov104_02295284(void *p);
    u32 func_ov104_02295290(void *p);
    u32 func_ov104_02295310(void *p, s32 flag);
    u32 func_ov104_022953e0(void *p);
    BOOL func_ov104_0229545c(void *p);
    void func_ov104_02295490();
    void func_ov104_022954d8();
    void func_ov104_02295534(s32 flag);

    // out-of-range callees (declarations only)
    s32 func_ov104_02296568();
    void func_ov104_022963cc(s32 a, void *p);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x18];
    /* 0xb0 */ u16 unk_b0;
    /* 0xb2 */ u16 unk_b2;
    /* 0xb4 */ u8 unk_b4[0xa];
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ Unk_ov104_sub_02065cc8 unk_c0;
    /* 0x1b4 */ Unk_ov104_sub_02065cc8 unk_1b4;
    /* 0x2a8 */ u8 unk_2a8[0x38];
    /* 0x2e0 */ Unk_ov104_sub_02293a60 unk_2e0;
    /* 0xd40 */ Unk_ov104_sub_0229469c unk_d40;
    /* 0xd68 */ Unk_ov104_sub_02292d50 unk_d68;
    /* 0x2348 */ Unk_ov104_sub_022007e8 unk_2348;
    /* 0x2408 */ Unk_ov104_sub_022027c4 unk_2408;
    /* 0x2420 */ Unk_ov104_sub_02202640 unk_2420;
    /* 0x2484 */ Unk_ov104_sub_02202454 unk_2484;
    /* 0x2784 */ Unk_ov104_sub_022043e8 unk_2784;
    /* 0x288c */ Unk_ov104_sub_0206d40c unk_288c;
    /* 0x2a9c */ Unk_ov104_sub_02203df0 unk_2a9c;
    /* 0x2b0c */ Unk_ov104_sub_02065cc8 unk_2b0c[10];
    /* 0x3494 */ Unk_ov104_sub_02065cc8 unk_3494[10];
    /* 0x3e1c */ Unk_ov104_sub_02203968 unk_3e1c;
};

// ---------------------------------------------------------------------------------------------

Unk_ov104_02298170::~Unk_ov104_02298170() {}

void Unk_ov104_02298170::func_ov104_02294dfc(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov104_02298170::func_ov104_02294e0c(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov104_02298170::func_ov104_02294e1c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov104_02298170::func_ov104_02294e30(void *p) {
    void *heap = data_021c6210;
    u8 *buf = (u8 *)func_020e8618(heap, 0xf5);
    buf[0] = 8;
    func_02116048(p, buf + 1, 0xf4);
    void *g = data_020cbb18;
    func_020728d4(g);
    func_020728a4(g, buf, 0xf5);
    func_02072824(g, 0x16, 0);
    func_020e85fc(heap, buf);
    func_0206f638(8);
    return TRUE;
}

void Unk_ov104_02298170::func_ov104_02294e8c() {
    if (func_ov104_02294e1c(0x800) == 0) {
        func_ov104_02294dfc(0x1000);
        return;
    }
    if (func_ov104_02294e1c(0x1000) == 0) {
        return;
    }
    s32 r6 = 0x18;
    if (func_ov104_02294e1c(0x2000) != 0) {
        r6 = func_0206f644();
        switch (r6 - 8) {
        case 0:
            return;
        case 3:
            unk_b0 |= 0x400;
            func_ov104_02294dfc(0x1000);
            func_ov104_02294dfc(0x2000);
            return;
        case 1:
        case 2:
            unk_b0 |= 0x200;
            unk_b2 |= 1 << unk_be;
            unk_be++;
            func_ov104_02294dfc(0x2000);
            break;
        }
    }
    while (unk_be < 10) {
        void *e = &unk_2b0c[unk_be];
        if (func_02065554(e) == 0) {
            if (func_02065578(e) == 1) {
                unk_b0 |= 0x100;
                if (func_02096a0c(e) != 0) {
                    if (r6 == 10) {
                        unk_b0 |= 0x400;
                        func_ov104_02294dfc(0x1000);
                        return;
                    }
                    if (func_ov104_02294e30(e) != 0) {
                        func_ov104_02294e0c(0x2000);
                        return;
                    }
                } else {
                    unk_b0 |= 8;
                }
            }
        }
        unk_be++;
    }
    func_ov104_02294dfc(0x1000);
}

void Unk_ov104_02298170::func_ov104_02295008() {
    Unk_ov104_Comm *g = data_020cbb18;
    if (func_02072e44(g)) {
        func_ov104_02294e0c(0x800);
        unk_b2 = 0;
        s32 n = func_020968e4(unk_2b0c, 10);
        unk_b0 = 0;
        if (n <= 0) {
            unk_b0 = 4;
            func_ov104_02294dfc(0x1000);
            return;
        }
        if (func_ov104_0229545c(unk_2b0c)) {
            unk_b0 |= 0x800;
        }
        if (g->unk_64 != 0) {
            func_ov104_02294e0c(0x1000);
            unk_be = 0;
            func_ov104_02294dfc(0x2000);
            func_ov104_02294e8c();
        } else {
            func_ov104_02294e0c(0x4000);
            u32 r = func_ov104_02295310(unk_2b0c, 1);
            unk_b0 |= r;
            if (unk_b0 & 0x10) {
                unk_b0 |= 0x400;
            }
        }
    }
}

u32 Unk_ov104_02298170::func_ov104_022950f8(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (func_02096960(q) >= 0) {
            func_02096a9c(q);
            func_02065c94(q);
            r |= 0x200;
        }
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_0229514c(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return r;
    }
    s32 t;
    u32 mask = 0;
    u8 *q = (u8 *)p;
    s32 cnt = 0;
    s32 i = 0;
    s32 obj;
    s32 z;
    s32 j;
    for (; i < n; q += 0xf4, i++) {
        if (func_02065554(q) == 0) {
            t = func_020969b8(q);
            if (t != -2) {
                if (t != -1) {
                    if (func_02096acc(q, t, 1) != 0) {
                        func_02065c94(q);
                        r |= 0x200;
                    } else {
                        u32 bit = 1 << t;
                        if ((mask & bit) == 0) {
                            mask |= bit;
                            cnt++;
                        }
                    }
                } else {
                    if (func_02096960(q) >= 0) {
                        func_02096a9c(q);
                        func_02065c94(q);
                        r |= 0x200;
                    }
                }
            }
        }
    }
    if (cnt != 0) {
        z = 0;
        obj = func_02067918(0);
        u32 buf[8];
        func_02094030(buf);
        for (j = 0; j < 4; j++) {
            if (mask & (1 << j)) {
                func_020940d0(func_0209888c(func_02097868(data_021d735c, j)), buf);
                switch (z) {
                case 0:
                    func_02067a3c(obj, 7, buf);
                    break;
                case 1:
                    func_02067a3c(obj, 8, buf);
                    break;
                case 2:
                    func_02067a3c(obj, 9, buf);
                    break;
                }
                z++;
            }
        }
        r |= cnt << 6;
        func_02094018(buf);
    }
    return r;
}

s32 Unk_ov104_02298170::func_ov104_02295284(void *p) {
    return func_02096a50(p, 1);
}

u32 Unk_ov104_02298170::func_ov104_02295290(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (func_02065578(q) != 1) {
            func_02065c94(q);
        } else if (func_02065554(q) == 0) {
            if (func_02096a0c(q) != 0) {
                if (func_ov104_02295284(q) != 0) {
                    func_02065c94(q);
                    r |= 0x200;
                } else {
                    r |= 0x20;
                }
            }
        }
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_02295310(void *p, s32 flag) {
    if (func_020968e4(p, 10) == 0) {
        return 0;
    }
    u16 r = 0;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (func_02065578(q) != 0) {
            if (func_02065578(q) != 1) {
                if (flag != 0) {
                    unk_b2 |= 1 << i;
                } else {
                    func_02065c94(q);
                }
            } else if (func_02065554(q) == 0) {
                if (func_02096a0c(q) != 0) {
                    if (func_ov104_02295284(q) != 0) {
                        if (flag != 0) {
                            unk_b2 |= 1 << i;
                        } else {
                            func_02065c94(q);
                        }
                        r |= 0x300;
                    } else {
                        r |= 0x110;
                    }
                } else {
                    r |= 0x108;
                }
            }
        }
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_022953e0(void *p) {
    u16 r = 0;
    s32 t = -1;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (func_02065578(q) == 1 && func_02065554(q) != 0) {
            if (t == -1) {
                t = i;
            } else {
                t = -2;
            }
        }
    }
    if (t != -1) {
        if (t == -2) {
            r |= 2;
        } else {
            r |= 1;
            u8 *e = (u8 *)p + t * 0xf4;
            func_0206ea2c(e);
            func_02065c94(e);
        }
    }
    return r;
}

BOOL Unk_ov104_02298170::func_ov104_0229545c(void *p) {
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (func_02065578(q) == 1 && func_02065554(q) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov104_02298170::func_ov104_02295490() {
    func_0200402c(0x28);
    func_ov104_02294e0c(0x400);
    func_ov002_022030ac(&unk_3e1c, 7);
    func_ov002_02200a58(0x1b);
    unk_8c = 4;
    func_ov104_02294dfc(0x100);
}

void Unk_ov104_02298170::func_ov104_022954d8() {
    func_0200402c(0x27);
    func_ov104_02294dfc(0x400);
    func_ov002_022030ac(&unk_3e1c, 9);
    func_ov002_02200a58(0x1b);
    unk_8c = 4;
    func_ov104_02294dfc(0x100);
    if (func_02072e44(data_020cbb18)) {
        func_ov104_02295008();
    }
}

void Unk_ov104_02298170::func_ov104_02295534(s32 flag) {
    s32 i;
    u8 *e = (u8 *)unk_2b0c;
    for (i = 0; i < 10; e += 0xf4, i++) {
        if (flag != 0 && (unk_b2 & (1 << i))) {
            func_02065c94(e);
        } else if (func_02065578(e) != 0) {
            s32 r = func_ov104_02296568();
            if (r != 0x21) {
                func_ov104_022963cc(r, e);
            }
        }
    }
}
