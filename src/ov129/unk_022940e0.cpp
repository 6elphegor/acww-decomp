#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov129_02296498[];
extern s32 data_ov129_022964bc[];
extern s32 data_ov129_022964d0[];

void func_0200402c(u32 id);
void *func_0206ed38();
u8 *func_020b053c(void *p);

u8 *func_ov127_0229207c(s32 i);
u32 func_ov127_02292088(s32 i);
u32 func_ov127_02292098(s32 i);
s32 func_ov127_022920a4(u16 *out, s32 x, s32 y);
s32 func_ov127_02292204(s32 x, s32 y);
s32 func_ov127_022921c4(s32 x, s32 y);
s32 func_ov127_022923d8(void *s, s32 x, s32 y, s32 *ox, s32 *oy);
void func_ov127_02292454(void *s, s32 x, s32 y);
void func_ov127_022923c0(void *s, s32 i, u32 v);
void func_ov002_02202fe4(void *p, u32 v);
}

class Unk_ov129_sub_022043e8 {
public:
    ~Unk_ov129_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov129_sub_02203968 {
public:
    ~Unk_ov129_sub_02203968();
    u32 unk_00[0x164 / 4];
};

class Unk_ov129_sub_02202640 {
public:
    virtual ~Unk_ov129_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov129_sub_020b08b4 {
public:
    ~Unk_ov129_sub_020b08b4();
    u32 unk_00[0x330 / 4];
};

class Unk_ov129_sub_02292aa8 {
public:
    ~Unk_ov129_sub_02292aa8();
    u32 unk_00[0x2838 / 4];
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

struct Unk_ov129_0229497c_Save {
    u8 unk_00[0x16];
    u8 unk_16[16];
    u16 unk_26[16];
};

// Vtable 0x022965f8
class Unk_ov129_022965f8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov129_022965f8();

    void func_ov129_0229418c(u32 mask);
    void func_ov129_0229419c(u32 mask);
    BOOL func_ov129_022941ac(u32 mask);
    s32 func_ov129_022941c0();
    s32 func_ov129_0229421c();
    s32 func_ov129_022942d0();
    void func_ov129_02294360();
    s32 func_ov129_02294398();
    s32 func_ov129_022943ec();
    u32 func_ov129_02294598(u32 id, u32 val);
    s32 func_ov129_022945f4(u32 id);
    BOOL func_ov129_02294664(u32 id);
    s32 func_ov129_022946b0(u32 v);
    s32 func_ov129_022946dc();
    BOOL func_ov129_0229470c(s32 x, s32 y);
    void func_ov129_022947c4(u32 id);
    void func_ov129_02294818(u32 a, u32 b);
    BOOL func_ov129_0229483c(u32 a, u32 b);
    void func_ov129_022948a4(BOOL flag);
    void func_ov129_022948d0();
    void func_ov129_022948f0(s32 i);
    void func_ov129_02294914();
    s32 func_ov129_02294948();
    void func_ov129_0229497c();

    // out-of-range callees (declarations only)
    void func_ov129_02294aa4();
    s32 func_ov129_02294fcc(u32 v);

    /* 0x91 */ u8 unk_91[0x13];
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6[4];
    /* 0xaa */ u16 unk_aa;
    /* 0xac */ u8 unk_ac[4];
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4[4];
    /* 0xb8 */ Unk_ov129_sub_022043e8 unk_b8;
    /* 0x1c0 */ Unk_ov129_sub_02203968 unk_1c0;
    /* 0x324 */ Unk_ov129_sub_02202640 unk_324;
    /* 0x388 */ Unk_ov129_sub_020b08b4 unk_388;
    /* 0x6b8 */ Unk_ov129_sub_02292aa8 unk_6b8;
    /* 0x2ef0 */ u8 unk_2ef0[16];
    /* 0x2f00 */ u16 unk_2f00[16];
    /* 0x2f20 */ u8 unk_2f20[0x1c8];
};

// ---------------------------------------------------------------------------------------------

Unk_ov129_022965f8::~Unk_ov129_022965f8() {}

void Unk_ov129_022965f8::func_ov129_0229418c(u32 mask) { unk_a4 = unk_a4 & ~mask; }

void Unk_ov129_022965f8::func_ov129_0229419c(u32 mask) { unk_a4 = unk_a4 | mask; }

BOOL Unk_ov129_022965f8::func_ov129_022941ac(u32 mask) {
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov129_022965f8::func_ov129_022941c0() {
    s32 r = 0;
    switch (unk_b1) {
    case 0:
        r = func_ov129_02294398();
        break;
    case 1:
        r = func_ov129_022942d0();
        break;
    case 2:
        r = func_ov129_0229421c();
        break;
    }
    if (r == 1) {
        func_0200402c(0x880);
    }
    if (r == 1) {
        goto upd;
    }
    if (r == 2) {
    upd:
        func_ov129_022948a4(TRUE);
    }
    return r;
}

s32 Unk_ov129_022965f8::func_ov129_0229421c() {
    u32 a = unk_b0;
    if (a != 0xff) {
        u32 b = unk_b3;
        if (b != a) {
            if (b == 0xff) {
                unk_b3 = a;
                return 1;
            }
            u32 t = func_ov129_02294598(b, a);
            if (t != 0xffff && unk_2f20[t] == 3) {
                unk_aa = t;
            } else if (func_ov129_02294664(unk_b0)) {
                unk_b3 = unk_b0;
                return 1;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff) {
        u32 s = unk_2f20[cur];
        if (s != 2) {
            if (s == 3) {
                s32 i = func_ov129_022946dc();
                unk_2f00[i] = unk_aa;
                func_ov129_02294360();
                return 2;
            }
        } else {
            return func_ov129_022943ec();
        }
    }
    return 0;
}

s32 Unk_ov129_022965f8::func_ov129_022942d0() {
    u32 a = unk_b0;
    u32 b = unk_b2;
    if (b != a) {
        u32 t = func_ov129_02294598(b, a);
        if (t != 0xffff && unk_2f20[t] == 3) {
            unk_aa = t;
        } else {
            s32 r = func_ov129_02294398();
            if (r != 0) {
                return r;
            }
        }
    }
    u32 cur = unk_aa;
    if (cur != 0xffff && unk_2f20[cur] == 3) {
        unk_b1 = 2;
        unk_2f00[0] = unk_aa;
        func_ov002_02202fe4(&unk_1c0, 6);
        func_ov129_02294360();
        return 2;
    }
    return 0;
}

void Unk_ov129_022965f8::func_ov129_02294360() {
    func_0200402c(0x881);
    u8 *q = func_ov127_0229207c(unk_aa);
    u32 c = q[0];
    if (c == unk_b3) {
        unk_b3 = q[1];
    } else {
        unk_b3 = c;
    }
}

s32 Unk_ov129_022965f8::func_ov129_02294398() {
    s32 r = 0;
    if (unk_b0 != 0xff) {
        r = func_ov129_022945f4(unk_b0);
        if (r != 1) {
            if (r == 3) {
                func_ov129_02294fcc(0x16);
            }
        } else {
            unk_b1 = 1;
            unk_b2 = unk_b0;
            unk_b3 = unk_b0;
        }
    }
    return r;
}

s32 Unk_ov129_022965f8::func_ov129_022943ec() {
    volatile u8 *q;
    s32 n;
    u16 *slot;
    s32 idx = func_ov129_022946b0(unk_aa);
    if (idx == -1) {
        return 0;
    }
    slot = &unk_2f00[idx];
    *slot = 0xffff;
    u32 more = 1;
    s32 cnt = 0;
    u8 st[16];
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
            st[i] = 3;
        } else {
            if (cnt > 0) {
                st[i] = 0;
            } else {
                st[i] = 1;
            }
            cnt++;
        }
    }
    if (cnt == 0) {
        func_ov002_02202fe4(&unk_1c0, 6);
        unk_b1 = 0;
        unk_b3 = 0xff;
        func_0200402c(0x882);
        return 2;
    }
    while (more != 0) {
        more = 0;
        for (i = 0; i < 16; i++) {
            if (st[i] == 1) {
                q = func_ov127_0229207c(unk_2f00[i]);
                s32 j;
                for (j = 0; j < 2; j++) {
                    u32 x = func_ov127_02292098(q[j]);
                    u32 y = func_ov127_02292088(q[j]);
                    u16 nb[8];
                    n = func_ov127_022920a4(nb, x, y);
                    s32 m;
                    for (m = 0; m < n; m++) {
                        s32 t = func_ov129_022946b0(nb[m]);
                        if (t != -1 && st[t] == 0) {
                            st[t] = 1;
                        }
                    }
                }
                st[i] = 2;
            }
        }
        for (i = 0; i < 16; i++) {
            if (st[i] == 1) {
                more = 1;
            }
        }
    }
    for (i = 0; i < 16; i++) {
        if (st[i] == 0) {
            *slot = unk_aa;
            return 0;
        }
    }
    u8 *q2 = func_ov127_0229207c(unk_aa);
    u32 r = 0xff;
    u32 c = unk_b3;
    u32 q0 = q2[0];
    if (q0 == c) {
        r = q2[1];
    } else if (q2[1] == c) {
        r = q0;
    }
    if (r != 0xff) {
        unk_2f20[unk_aa] = 0;
        if (func_ov129_02294664(unk_b3) == 0) {
            unk_b3 = r;
        }
    }
    func_0200402c(0x882);
    return 2;
}

u32 Unk_ov129_022965f8::func_ov129_02294598(u32 id, u32 val) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        u8 *q = func_ov127_0229207c(nb[i]);
        s32 j;
        for (j = 0; j < 2; j++) {
            if (val == q[j]) {
                return nb[i];
            }
        }
    }
    return 0xffff;
}

s32 Unk_ov129_022965f8::func_ov129_022945f4(u32 id) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (unk_2f20[nb[i]] == 1) {
            return 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (func_ov129_0229483c(nb[i], id) == 0) {
            return 1;
        }
    }
    return 3;
}

BOOL Unk_ov129_022965f8::func_ov129_02294664(u32 id) {
    u32 x = func_ov127_02292098(id);
    u32 y = func_ov127_02292088(id);
    u16 nb[8];
    s32 n = func_ov127_022920a4(nb, x, y);
    s32 i;
    for (i = 0; i < n; i++) {
        if (unk_2f20[nb[i]] == 2) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov129_022965f8::func_ov129_022946b0(u32 v) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (v == unk_2f00[i]) {
            return i;
        }
    }
    return -1;
}

s32 Unk_ov129_022965f8::func_ov129_022946dc() {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (unk_2f00[i] == 0xffff) {
            return i;
        }
    }
    return -1;
}

BOOL Unk_ov129_022965f8::func_ov129_0229470c(s32 x, s32 y) {
    unk_b0 = 0xff;
    unk_aa = 0xffff;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 5; i++) {
        s32 ox, oy;
        if (func_ov127_022923d8(&unk_6b8, x + data_ov129_022964bc[i], y + data_ov129_022964d0[i], &ox, &oy)) {
            if (unk_b0 == 0xff) {
                s32 r = func_ov127_02292204(ox, oy);
                if (r != ~z1) {
                    unk_b0 = r;
                }
            }
            if (unk_aa == 0xffff) {
                s32 r = func_ov127_022921c4(ox, oy);
                if (r != ~z2) {
                    unk_aa = r;
                }
            }
        }
    }
    if (unk_b0 != 0xff || unk_aa != 0xffff) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov129_022965f8::func_ov129_022947c4(u32 id) {
    if (id != 0xff) {
        if (func_ov129_022946dc() != -1) {
            u32 x = func_ov127_02292098(id);
            u32 y = func_ov127_02292088(id);
            u16 nb[8];
            s32 n = func_ov127_022920a4(nb, x, y);
            s32 i;
            for (i = 0; i < n; i++) {
                func_ov129_02294818(nb[i], id);
            }
        }
    }
}

void Unk_ov129_022965f8::func_ov129_02294818(u32 a, u32 b) {
    if (unk_2f20[a] == 0) {
        if (func_ov129_0229483c(a, b) == 0) {
            unk_2f20[a] = 3;
        }
    }
}

BOOL Unk_ov129_022965f8::func_ov129_0229483c(u32 a, u32 b) {
    u8 *q = func_ov127_0229207c(a);
    s32 i;
    for (i = 0; i < 2; i++) {
        u32 c = q[i];
        if (b != c) {
            u32 x = func_ov127_02292098(c);
            u32 y = func_ov127_02292088(c);
            u16 nb[8];
            s32 n = func_ov127_022920a4(nb, x, y);
            s32 j;
            for (j = 0; j < n; j++) {
                if (unk_2f20[nb[j]] == 1) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void Unk_ov129_022965f8::func_ov129_022948a4(BOOL flag) {
    func_ov129_02294aa4();
    func_ov129_02294948();
    if (flag) {
        func_ov129_02294914();
    }
    func_ov129_022948d0();
}

void Unk_ov129_022965f8::func_ov129_022948d0() {
    s32 i;
    for (i = 0; i < 0x1c6; i++) {
        func_ov129_022948f0(i);
    }
}

void Unk_ov129_022965f8::func_ov129_022948f0(s32 i) {
    func_ov127_022923c0(&unk_6b8, i, data_ov129_02296498[unk_2f20[i]]);
}

void Unk_ov129_022965f8::func_ov129_02294914() {
    switch (unk_b1) {
    case 0:
        break;
    case 1:
        func_ov129_022947c4(unk_b2);
        break;
    case 2:
        func_ov129_022947c4(unk_b3);
        break;
    }
}

s32 Unk_ov129_022965f8::func_ov129_02294948() {
    s32 i;
    u16 *p = unk_2f00;
    for (i = 0; i < 16; p++, i++) {
        if (*p != 0xffff) {
            unk_2f20[*p] = 2;
        }
    }
}

void Unk_ov129_022965f8::func_ov129_0229497c() {
    Unk_ov129_0229497c_Save *t = (Unk_ov129_0229497c_Save *)func_020b053c(func_0206ed38());
    s32 i;
    u16 *p = unk_2f00;
    u32 first = 0xffff;
    if (t) {
        for (i = 0; i < 16; p++, i++) {
            *p = t->unk_26[i];
            u32 v = *p;
            if (v != 0xffff && first == 0xffff) {
                first = v;
            }
        }
        unk_b1 = 2;
        unk_b3 = func_ov127_0229207c(first)[0];
        u32 x = func_ov127_02292098(unk_b3) << 3;
        u32 y = func_ov127_02292088(unk_b3) << 3;
        u32 ax = (x + 4) & 0xfffc;
        u32 ay = (y + 4) & 0xfffc;
        void *sub = &unk_6b8;
        func_ov127_02292454(sub, ax, ay);
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = t->unk_16[i];
        }
    } else {
        for (i = 0; i < 16; p++, i++) {
            *p = first;
        }
        u32 z = 0;
        for (i = 0; i < 16; i++) {
            unk_2ef0[i] = z;
        }
        unk_b1 = z;
    }
    func_ov129_02294948();
}
