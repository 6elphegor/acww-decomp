#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_02072e44(void *p);
s32 func_020740a0(s32 a);
void func_02116048(void *src, void *dst, u32 n);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
s32 func_02072e34(void *p);
void *func_020e8618(void *heap, s32 n);
void func_020e85fc(void *heap, void *p);
void func_0200140c();
void func_0200151c(s32 a);
void func_0200142c();
void func_020013cc(s32 a);
void func_02001710(s32 a, s32 b);
void func_0200152c(s32 a);
void func_02001608(s32 a, s32 b, s32 c, s32 d);
void func_0206fb48(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_020a7c3c(void *p);
void func_0209cf88(void *p);
void func_0206f994(void *p, void *s, s32 n);
void func_020a78a4(void *dst, void *src, s32 n);
s32 func_020b30bc(void *p);
void func_02050e90(void *p, void *buf, s32 n);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
void func_ov002_0220301c(void *p);
void func_ov002_02203044(void *p);
void func_ov002_022030ac(void *p, s32 a);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov095_02295194(void *p);
u32 func_ov095_02292580(void *p);
u32 func_ov095_02292544(void *p);
void func_ov095_022924f0(void *p);
BOOL func_ov095_02293ff0(void *p, void *a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022953c0(void *p, s32 a);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, u32 a);
void func_ov095_022951e4(void *p);
extern void *data_020cbb18;
extern void *data_021c6210;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
s32 func_02133150(s32 a, s32 b);
}

// Opaque sub-objects (only their out-of-line destructors / a few methods are used here)
class Unk_ov002_022043e8 {
public:
    ~Unk_ov002_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_0206fca8 {
public:
    ~Unk_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov002_022046b0 {
public:
    ~Unk_ov002_022046b0();
    u32 unk_00[0x48 / 4];
};

class Unk_ov002_022046cc {
public:
    ~Unk_ov002_022046cc();
    u32 unk_00[0x164 / 4];
};

class Unk_020e055c;
class Unk_020e0574 {
public:
    ~Unk_020e0574();
    void func_020a7aa0(Unk_020e055c *dst, s32 a, s32 b);
    u32 unk_00[0xc4 / 4];
};

class Unk_020e055c {
public:
    ~Unk_020e055c();
    void func_020a77f8(Unk_020e0574 *src);
    u32 unk_00[0xd0 / 4];
};

class Unk_ov002_02202640 {
public:
    virtual ~Unk_ov002_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202d00(s32 v);
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202a78();
    void func_ov002_0220298c(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    u32 unk_04[0x60 / 4];
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

// Vtable 0x02299b10
class Unk_ov112_02299b10 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov112_02299b10();

    BOOL func_ov112_0229695c();
    void func_ov112_02296988();
    void func_ov112_022969f8();
    void func_ov112_02296a18();
    void func_ov112_02296a54(s32 idx, u32 a, u32 b, s32 c);
    void func_ov112_02296a8c();
    void func_ov112_02296abc();
    void func_ov112_02296b80();
    void func_ov112_02296bdc();
    void func_ov112_02296bfc();
    void func_ov112_02296c28();
    void func_ov112_02296c48();
    void func_ov112_02296cb4(s32 a, s32 b);
    void func_ov112_02296ce8();
    void func_ov112_02296d6c();
    void func_ov112_02296d90();
    void func_ov112_02296de8(u8 v, s32 x);
    void func_ov112_02296e14();
    BOOL func_ov112_02296ef8(void *pad);
    s32 func_ov112_02296fbc(s32 v);
    void func_ov112_02296ff4();
    u8 func_ov112_02297044();
    void func_ov112_0229705c(u8 v);
    void func_ov112_0229706c();
    BOOL func_ov112_022970b0();
    void func_ov112_02297104();
    BOOL func_ov112_02297108();

    // out-of-range callees (declarations only)
    void func_ov112_022977f8(u32 mask);
    void func_ov112_02297808(u32 mask);
    BOOL func_ov112_02297818(u32 mask);
    BOOL func_ov112_02297280();
    void func_ov112_02297264();
    void func_ov112_02297434();
    u8 func_ov112_022971cc(s32 i, s32 *pv);
    void func_ov112_02297170(s32 a, s32 b);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ u8 unk_a0[0xc];
    /* 0xac */ u32 unk_ac;
    /* 0xb0 */ u8 unk_b0[4];
    /* 0xb4 */ s16 unk_b4;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8[4];
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3[0x244 - 0xc3];
    /* 0x244 */ Unk_ov002_022043e8 unk_244;
    /* 0x34c */ u32 unk_34c[(0x370 - 0x34c) / 4];
    /* 0x370 */ u32 unk_370[(0x26ac - 0x370) / 4];
    /* 0x26ac */ Unk_0206fca8 unk_26ac[2];
    /* 0x272c */ u32 unk_272c[(0x3f2c - 0x272c) / 4];
    /* 0x3f2c */ Unk_0206fca8 unk_3f2c[6];
    /* 0x40ac */ Unk_ov002_022046b0 unk_40ac;
    /* 0x40f4 */ Unk_ov002_022046cc unk_40f4;
    /* 0x4258 */ Unk_ov002_02202640 unk_4258;
    /* 0x42bc */ Unk_020e0574 unk_42bc;
    /* 0x4380 */ u32 unk_4380[(0x4390 - 0x4380) / 4];
    /* 0x4390 */ Unk_020e055c unk_4390;
    /* 0x4460 */ u32 unk_4460[(0x6a60 - 0x4460) / 4];
    /* 0x6a60 */ s32 unk_6a60[8];
};

// ---------------------------------------------------------------------------------------------

Unk_ov112_02299b10::~Unk_ov112_02299b10() {}

BOOL Unk_ov112_02299b10::func_ov112_0229695c() {
    if (func_02072e44(data_020cbb18)) {
        if (func_020740a0(unk_b4) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_02296988() {
    if (func_02072e44(data_020cbb18)) {
        void *heap = data_021c6210;
        u8 *buf = (u8 *)func_020e8618(heap, 0xc1);
        buf[0] = 0;
        func_02116048(unk_c3, &buf[1], 0xc0);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 0xc1);
        func_02072824(g, 0x16, 4);
        unk_b4 = func_02072e34(g);
        func_020e85fc(heap, buf);
    }
}

void Unk_ov112_02299b10::func_ov112_022969f8() {
    func_0200140c();
    func_ov002_0220301c(&unk_40f4);
    func_0200151c(2);
}

void Unk_ov112_02299b10::func_ov112_02296a18() {
    func_0200142c();
    func_020013cc(-6);
    func_ov002_02203044(&unk_40f4);
    func_02001710(0x1f, 0);
    func_0200152c(2);
    func_02001608(0x2c, 0x20, 0xd4, 0x80);
}

void Unk_ov112_02299b10::func_ov112_02296a54(s32 idx, u32 a, u32 b, s32 c) {
    Unk_0206fca8 *p = &unk_3f2c[idx];
    func_0206fb48(p, 4, a, b, 0xf, 0xa, c);
    func_0206fab4(p, 0, 0);
}

void Unk_ov112_02299b10::func_ov112_02296a8c() {
    func_020a7c3c(&unk_3f2c[2]);
    func_ov112_02296a54(2, 0x11a, 5, 0);
}

void Unk_ov112_02299b10::func_ov112_02296abc() {
    u8 t[16];
    s32 v;
    func_0209cf88(t);
    t[4] = 0x37;
    t[5] = 0x35;
    v = t[2];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    t[8] = 0;
    func_0206f994(&unk_3f2c[0], &t[4], 5);
    func_ov112_02296a54(0, 0x111, 4, 1);
    v = t[1];
    t[4] = v / 10 + 0x35;
    t[5] = v % 10 + 0x35;
    v = t[0];
    t[6] = v / 10 + 0x35;
    t[7] = v % 10 + 0x35;
    func_0206f994(&unk_3f2c[1], &t[4], 5);
    func_ov112_02296a54(1, 0x116, 4, 1);
}

void Unk_ov112_02299b10::func_ov112_02296b80() {
    u8 *c3 = unk_c3;
    func_020a78a4(&unk_4390, c3, 0xc0);
    unk_42bc.func_020a7aa0(&unk_4390, 0, 0);
    if (func_020b30bc(&unk_42bc)) {
        unk_4390.func_020a77f8(&unk_42bc);
        func_02050e90(&unk_4390, c3, 0xc0);
    }
}

void Unk_ov112_02299b10::func_ov112_02296bdc() {
    unk_4258.func_ov002_02202a78();
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296bfc() {
    func_ov095_02295194(unk_370);
    unk_4258.func_ov002_02202af0();
    func_ov002_02200a58(10);
}

void Unk_ov112_02299b10::func_ov112_02296c28() {
    unk_4258.func_ov002_02202b68();
    func_ov002_02200a58(8);
}

void Unk_ov112_02299b10::func_ov112_02296c48() {
    if (func_ov112_02297818(0x800)) {
        unk_4258.func_ov002_02202a40(unk_98, unk_9c - unk_b7);
    } else {
        u32 a = func_ov095_02292580(unk_370);
        u32 b = func_ov095_02292544(unk_370);
        unk_4258.func_ov002_02202a40(a, b);
    }
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296cb4(s32 a, s32 b) {
    unk_4258.func_ov002_0220298c(a, b, 3, 2);
    unk_c1 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov112_02299b10::func_ov112_02296ce8() {
    if (func_ov112_02297818(0x800)) {
        unk_4258.func_ov002_0220298c(unk_98, unk_9c - unk_b7, 3, 2);
        unk_c1 = 0xc;
    } else {
        u32 a = func_ov095_02292580(unk_370);
        u32 b = func_ov095_02292544(unk_370);
        unk_4258.func_ov002_0220298c(a, b, 3, 2);
        unk_c1 = 6;
    }
    func_ov002_02200a58(7);
}

void Unk_ov112_02299b10::func_ov112_02296d6c() {
    unk_4258.func_ov002_02202d00(0);
    unk_4258.vfunc_0c();
}

void Unk_ov112_02299b10::func_ov112_02296d90() {
    func_ov112_022977f8(0x800);
    func_ov095_022924f0(unk_370);
    u32 a = func_ov095_02292580(unk_370);
    u32 b = func_ov095_02292544(unk_370);
    unk_4258.func_ov002_02202a40(a, b);
    unk_4258.func_ov002_02202d00(1);
    func_ov112_02296bdc();
}

void Unk_ov112_02299b10::func_ov112_02296de8(u8 v, s32 x) {
    func_ov002_02200a50(v);
    func_ov002_022030ac(&unk_40f4, x);
    func_ov002_02200a58(0x15);
}

void Unk_ov112_02299b10::func_ov112_02296e14() {
    if (func_ov095_02293ff0(unk_370, unk_c3, 0x86, &unk_bd, 0xc0, 0x28, 6, 0x96, 1, 1)) {
        func_ov095_02295340(unk_370, 0);
    } else {
        func_ov095_022953c0(unk_370, 0);
    }
    if (func_ov112_02297280()) {
        func_ov095_02295340(unk_370, 0xb);
    } else {
        func_ov095_022953c0(unk_370, 0xb);
    }
    if (func_ov112_02297818(0x200)) {
        func_ov095_02295340(unk_370, 0xc);
    } else {
        func_ov095_022953c0(unk_370, 0xc);
    }
    if (func_ov112_02297280()) {
        func_ov095_022942c0(unk_370);
        func_ov095_02295340(unk_370, 6);
    } else if (unk_bd <= unk_c0) {
        func_ov095_022942c0(unk_370);
    } else {
        func_ov095_02294250(unk_370, func_ov112_02297044());
    }
}

BOOL Unk_ov112_02299b10::func_ov112_02296ef8(void *pad) {
    if (pad == 0) {
        return FALSE;
    }
    u8 cur = unk_bd;
    s32 t = func_ov112_02296fbc(cur);
    volatile s32 old = t;
    if (func_ov002_0220128c(pad)) {
        if (t > 1) {
            t--;
        }
    } else if (func_ov002_0220127c(pad)) {
        t++;
        if (t > unk_94 || t >= 6) {
            t--;
        }
    }
    s32 v = unk_98;
    if (t != old) {
        cur = func_ov112_022971cc(t, &v);
    }
    if (func_ov002_0220126c(pad)) {
        if (cur > unk_c0) {
            cur = cur - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        s32 n = func_020512e0(unk_c3, 0xc0);
        s32 nx = cur + 1;
        if (nx <= n) {
            cur = nx;
        }
    }
    if (cur == unk_bd) {
        return FALSE;
    }
    func_ov112_0229705c(cur);
    return TRUE;
}

s32 Unk_ov112_02299b10::func_ov112_02296fbc(s32 v) {
    s32 n, i;
    i = 0;
    n = unk_94;
    for (; i < n; i++) {
        if (v < unk_6a60[i + 1]) {
            return i;
        }
    }
    if (n >= 6) {
        n = 5;
    }
    return n;
}

void Unk_ov112_02299b10::func_ov112_02296ff4() {
    s32 k = func_ov112_02296fbc(unk_bd);
    unk_9c = k * 16 + 0x28;
    s32 b = unk_6a60[k];
    unk_98 = (u8)(func_02051348(&unk_c3[b], unk_bd - b) + 0x30);
    func_ov112_02297434();
}

u8 Unk_ov112_02299b10::func_ov112_02297044() {
    if (unk_bd == 0) {
        return 0;
    }
    return unk_c3[unk_bd - 1];
}

void Unk_ov112_02299b10::func_ov112_0229705c(u8 v) {
    unk_bd = v;
    unk_bc = 0x10;
}

void Unk_ov112_02299b10::func_ov112_0229706c() {
    func_ov112_02297808(0x40);
    unk_98 = 0x30;
    unk_9c = 0x38;
    func_ov112_0229705c(unk_c0);
    func_ov112_02297264();
    func_ov095_022951e4(unk_370);
    func_ov112_02296e14();
}

BOOL Unk_ov112_02299b10::func_ov112_022970b0() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    u8 old = unk_bd;
    if (a < 0x30) {
        a = 0x30;
    }
    b += unk_b7 + 8;
    func_ov112_02297170(a, b);
    unk_bf = unk_bd;
    if (unk_bd != old) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov112_02299b10::func_ov112_02297104() {}

BOOL Unk_ov112_02299b10::func_ov112_02297108() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b >= 0x48) {
        return FALSE;
    }
    if (a < 0x20 || a >= 0xe0) {
        return FALSE;
    }
    b += unk_b7 + 8;
    if (a < 0x30) {
        a = 0x30;
    }
    func_ov112_02297170(a, b);
    func_ov112_02297808(0x100);
    unk_be = unk_bd;
    unk_bf = unk_bd;
    return TRUE;
}
