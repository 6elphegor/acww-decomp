#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// ---- main-module classes (copied from src/main) ----
class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(void *src, BOOL a, BOOL b);
    void func_020a7bd8(Unk_020e2a78 *o);
    void func_020a7bd8(Unk_020e1c64 *o);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_02050288;

class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fa4c();
    void func_0206f9fc(u32 id);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

class Unk_020dd324 : public Unk_020e2a78 {
public:
    Unk_020dd324();
    virtual ~Unk_020dd324();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL func_02062564(u16 *p);

    /* 0x12 */ u8 unk_12[0x11];
};

extern "C" {
void func_0206f9c8(Unk_020e0488 *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206ecf8(s32 a);
void func_0200402c(s32 a);
void func_ov004_02235a04();
void func_ov004_02235a2c();
}
extern u8 data_020e416c;

// ---- ov002 sub-objects (opaque bodies) ----
class Unk_020e0db4 {
public:
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    u32 unk_04[2];
};

// object at +0xe8 of the scene (size 0x64)
class Unk_ov002_0220464c : public Unk_020e0db4 {
public:
    virtual ~Unk_ov002_0220464c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    u8 unk_0c[0x64 - 0xc];
};

// object at +0x14c (size 0x48)
class Unk_ov002_022046b0 {
public:
    ~Unk_ov002_022046b0();
    s32 func_ov002_02202e60();
    void func_ov002_02202e48();
    void func_ov002_02202f00();
    s32 func_ov002_02202e84();
    u8 unk_00[0x48];
};

// object at +0x194 (size 0x164)
class Unk_ov002_02202fac {
public:
    ~Unk_ov002_02202fac();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u8 unk_00[0x164];
};

// ---- ov002 scene base (vtable 0x022044e4) ----
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
    void func_ov002_0220085c(s32 a, s32 mode);
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

typedef Unk_020e1c64 Unk_ov145_02292600_A;
typedef Unk_020dd324 Unk_ov145_02292600_B;

extern "C" {
extern u8 data_021ed0a0;
void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u16 v, void *dst, u32 n);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_020b8670(void *a, void *b, u32 c, u32 d);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021fc(s32 a, s32 b, s32 c);
void func_02094030(void *p);
void func_02094018(void *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
BOOL func_020700a4(void *a, void *b, void *c);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
}

// ---- ov145 scene (vtable 0x022937c0) ----
class Unk_ov145_022937c0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov145_022937c0();

    // this group
    void func_ov145_02292008(u32 m);
    void func_ov145_02292018(u32 m);
    BOOL func_ov145_02292028(u32 m);
    void func_ov145_0229203c();
    void func_ov145_022920b0(u32 t);
    BOOL func_ov145_02292190(u32 pad);
    u32 func_ov145_02292284(s32 x, s32 y);
    BOOL func_ov145_022922b0(u32 t);
    void func_ov145_02292314(u8 v);
    void func_ov145_0229232c(u8 v);
    u16 *func_ov145_02292384(s32 i);
    s32 func_ov145_022923e4();
    void func_ov145_022923f4();
    void func_ov145_0229246c();
    void func_ov145_022924dc();
    void func_ov145_02292554(s32 v);
    void func_ov145_02292590();
    void func_ov145_02292600();
    void func_ov145_02292764();
    Unk_020e0488 *func_ov145_02292790();
    void func_ov145_022927c8();
    void func_ov145_022927ec();
    void func_ov145_02292804();
    void func_ov145_02292820(s32 a, s32 b);
    void func_ov145_02292850();

    // other groups
    void func_ov145_02292ca0();
    void func_ov145_02292a90();
    void func_ov145_02292af4();
    s32 func_ov145_022928ac();
    s32 func_ov145_022928f0();

    /* 0x091 */ u8 unk_91[0xb];
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ u8 unk_a8[0xc];
    /* 0x0b4 */ u16 unk_b4;
    /* 0x0b6 */ s16 unk_b6;
    /* 0x0b8 */ s16 unk_b8[4];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ u8 unk_c4;
    /* 0x0c5 */ u8 unk_c5;
    /* 0x0c6 */ u8 unk_c6;
    /* 0x0c7 */ u8 unk_c7;
    /* 0x0c8 */ Unk_ov002_0220464c unk_c8;
    /* 0x12c */ Unk_ov002_022046b0 unk_12c;
    /* 0x174 */ Unk_ov002_02202fac unk_174;
    /* 0x2d8 */ Unk_020e0488 unk_2d8[18];
    /* 0x758 */ u8 unk_758[0x24];
    /* 0x77c */ u8 unk_77c[0x24];
    /* 0x7a0 */ u8 unk_7a0[0x24];
    /* 0x7c4 */ u8 unk_7c4[0x68];
    /* 0x82c */ u8 unk_82c[0x70];
    /* 0x89c */ u8 unk_89c[0x70];
    /* 0x90c */ u8 unk_90c[0x28];
    /* 0x934 */ u16 unk_934[9];
    /* 0x946 */ u8 unk_946[0x800];
    /* 0x1146 */ u8 unk_1146[0x800];
    /* 0x1946 */ u8 unk_1946[0x800];
    /* 0x2146 */ u16 unk_2146[16];
    /* 0x2166 */ u16 unk_2166[16];
};

// ---------------------------------------------------------------------------------------------

Unk_ov145_022937c0::~Unk_ov145_022937c0() {}

void Unk_ov145_022937c0::func_ov145_02292008(u32 m) { unk_b4 = unk_b4 & ~m; }

void Unk_ov145_022937c0::func_ov145_02292018(u32 m) { unk_b4 = unk_b4 | m; }

BOOL Unk_ov145_022937c0::func_ov145_02292028(u32 m) {
    if (unk_b4 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_0229203c() {
    switch (unk_c6) {
    case 0:
        return;
    case 1:
        if (unk_c5 != 0) {
            unk_c5 = *(volatile u8 *)&unk_c5 - 1;
        } else {
            unk_c6 = 2;
            func_ov145_0229232c(unk_c1);
        }
        break;
    case 2:
        if (unk_c5 < 3) {
            unk_c5 = *(volatile u8 *)&unk_c5 + 1;
        } else {
            unk_c6 = 0;
            return;
        }
        break;
    }
    func_ov145_022920b0(unk_c5);
}

void Unk_ov145_022937c0::func_ov145_022920b0(u32 t) {
    func_02115e48(unk_2146, unk_2166, 0x20);
    s32 y = unk_2146[7];
    u8 r = y & 0x1f;
    u8 g = (y & 0x3e0) >> 5;
    u8 b = (y & 0x7c00) >> 10;
    s32 n = 3 - t;
    s32 x = unk_2146[15];
    r = ((u8)(x & 0x1f) * (s32)t + r * n) / 3;
    g = ((u8)((x & 0x3e0) >> 5) * (s32)t + g * n) / 3;
    b = ((u8)((x & 0x7c00) >> 10) * (s32)t + b * n) / 3;
    unk_2166[15] = r | (g << 5) | (b << 10);
    func_020b8670(unk_7a0, unk_2166, 4, 3);
}

BOOL Unk_ov145_022937c0::func_ov145_02292190(u32 pad) {
    u32 old = unk_c2;
    if (old <= 3) {
        if (func_ov002_0220126c(pad)) {
            if (unk_c2 < 3) {
                unk_c2 = *(volatile u8 *)&unk_c2 + 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_c2 != 0) {
                unk_c2 = *(volatile u8 *)&unk_c2 - 1;
            } else {
                unk_c2 = 4;
            }
        } else if (func_ov002_0220128c(pad)) {
            if (unk_a4 > 0) {
                unk_c2 = 5;
            }
        }
    } else {
        switch (old) {
        case 4:
            if (func_ov002_0220128c(pad)) {
                if (unk_a4 > 0) {
                    unk_c2 = 5;
                }
            } else if (func_ov002_0220126c(pad)) {
                unk_c2 = 0;
            }
            break;
        case 5:
            if (func_ov002_0220127c(pad)) {
                unk_c2 = 4;
            } else if (func_ov002_0220126c(pad)) {
                unk_c2 = 0;
            }
            break;
        }
    }
    if (old != unk_c2) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov145_022937c0::func_ov145_02292284(s32 x, s32 y) {
    if (y >= 0x9d && y < 0xbd) {
        s32 i;
        y = 0x84;
        for (i = 0; i < 4; i++) {
            if (y <= x && y + 0x20 > x) {
                return (u8)i;
            }
            y -= 0x24;
        }
    }
    return 6;
}

BOOL Unk_ov145_022937c0::func_ov145_022922b0(u32 t) {
    if (t <= 3) {
        if (t != unk_c1) {
            func_0200402c(0xc);
            func_ov145_02292314((u8)t);
        }
        return FALSE;
    } else {
        switch (t) {
        case 4:
            func_ov145_02292ca0();
            return TRUE;
        case 5:
            unk_12c.func_ov002_02202f00();
            unk_12c.func_ov002_02202e48();
            func_ov002_02200a58(4);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292314(u8 v) {
    if (v != unk_c1) {
        unk_c1 = v;
        unk_c6 = 1;
    }
}

void Unk_ov145_022937c0::func_ov145_0229232c(u8 v) {
    if (unk_c0 != v) {
        unk_c0 = v;
        unk_a4 = (func_ov145_022923e4() - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        func_ov145_02292554(0);
        unk_a0 = 0;
        func_ov145_02292a90();
        func_ov145_02292af4();
    }
}

u16 *Unk_ov145_022937c0::func_ov145_02292384(s32 i) {
    static u16 *tbl[4] = { (u16 *)unk_90c, (u16 *)unk_82c, (u16 *)unk_89c, (u16 *)unk_7c4 };
    if (i < 0) {
        i = 0;
    }
    return tbl[unk_c0] + i;
}

s32 Unk_ov145_022937c0::func_ov145_022923e4() {
    return unk_b8[unk_c0];
}

void Unk_ov145_022937c0::func_ov145_022923f4() {
    if (unk_9c != unk_a0) {
        if (unk_9c > unk_a0) {
            unk_9c = unk_9c - 4;
            if (unk_9c < unk_a0) {
                unk_9c = unk_a0;
            }
        } else {
            unk_9c = unk_9c + 4;
            if (unk_9c > unk_a0) {
                unk_9c = unk_a0;
            }
        }
        func_ov145_02292554(unk_9c);
        func_ov145_02292a90();
    }
}

void Unk_ov145_022937c0::func_ov145_0229246c() {
    func_0206ee80(unk_1146, 0, 0, 0x1f, 0x1f, 3);
    s32 n = func_ov145_022923e4();
    if (n < 9) {
        func_0206ee80(unk_1146, 0, n * 2, 0x1f, 0x12, 4);
    }
    if (func_020b86c0(unk_758, unk_1146, 4, 0x800, 0)) {
        func_ov145_02292008(8);
    }
}

void Unk_ov145_022937c0::func_ov145_022924dc() {
    s32 cur = unk_b6;
    s32 r6 = (cur + 9) % 9;
    s32 r4 = cur & 0xf;
    volatile u16 fill = 0x10;
    s32 i;
    func_02115e30(fill, unk_1146, 0x800);
    for (i = 0; i < 9; i++) {
        func_02115e48(unk_946 + r6 * 0x80, unk_1146 + r4 * 0x80, 0x80);
        r6++;
        if (r6 >= 9) {
            r6 = 0;
        }
        r4 = (r4 + 1) & 0xf;
    }
    func_ov145_02292018(8);
}

void Unk_ov145_022937c0::func_ov145_02292554(s32 v) {
    unk_9c = v;
    func_020021fc(4, 0, unk_9c - 0x18);
    unk_b6 = (s16)(v >> 4);
    func_ov145_022924dc();
    func_ov145_02292018(4);
}

void Unk_ov145_022937c0::func_ov145_02292590() {
    if (func_ov145_02292028(8)) {
        func_ov145_0229246c();
    }
    if (func_ov145_02292028(2)) {
        if (func_020b86c0(unk_77c, unk_1946, 6, 0x800, 0)) {
            func_ov145_02292008(2);
        }
    }
    if (func_ov145_02292028(4)) {
        func_ov145_02292008(4);
        func_ov145_02292600();
    }
}

void Unk_ov145_022937c0::func_ov145_02292600() {
    Unk_ov145_02292600_A a;
    Unk_ov145_02292600_B b;
    u16 s[2];
    s32 k;
    Unk_020e0488 *w;
    Unk_020e0488 *w2;
    s32 cur = unk_b6;
    u16 *list = func_ov145_02292384(cur);
    s32 col = (cur + 9) % 9;
    s32 cnt = func_ov145_022923e4();
    for (k = 0; k < 9; k++) {
        w = 0;
        if (cur < 0 || cur >= cnt) {
            unk_934[col] = 0xfff1;
            w = func_ov145_02292790();
            w->func_020a7c3c();
            w2 = func_ov145_02292790();
            w2->func_020a7c3c();
        } else {
            if (*list != unk_934[col]) {
                unk_934[col] = *list;
                w = func_ov145_02292790();
                s[0] = *list;
                b.func_02062564(&s[0]);
                w->func_020a7bd8(&b);
                w2 = func_ov145_02292790();
                s[1] = *list;
                if (func_020700a4(&data_021ed0a0, &a, &s[1])) {
                    w2->func_020a7bd8(&a);
                } else {
                    w2->func_0206f9fc(0xcc);
                }
            }
            list++;
        }
        if (w) {
            w->func_0206fb9c(4, col * 26 + 0x184, 0xd, 0xf, 7, 0);
            w->func_0206fab4(0, 0);
            w2->func_0206fb9c(4, col * 16 + 0xf4, 8, 0xf, 7, 0);
            w2->func_0206fab4(0, 0);
        }
        cur++;
        col++;
        if (col >= 9) {
            col = 0;
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02292764() {
    s32 i = 0;
    unk_c4 = 0;
    for (; i < 18; i++) {
        unk_2d8[i].func_0206fc44();
    }
}

Unk_020e0488 *Unk_ov145_022937c0::func_ov145_02292790() {
    if (*(volatile u8 *)&unk_c4 >= 18) {
        return &unk_2d8[17];
    }
    *(volatile u8 *)&unk_c4 = *(volatile u8 *)&unk_c4 + 1;
    return &unk_2d8[*(volatile u8 *)&unk_c4 - 1];
}

void Unk_ov145_022937c0::func_ov145_022927c8() {
    unk_c8.func_ov002_02202af0();
    unk_c3 = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov145_022937c0::func_ov145_022927ec() {
    unk_c8.func_ov002_02202b68();
    func_ov002_02200a58(7);
}

void Unk_ov145_022937c0::func_ov145_02292804() {
    unk_c8.func_ov002_02202a78();
    unk_c8.vfunc_0c();
}

void Unk_ov145_022937c0::func_ov145_02292820(s32 a, s32 b) {
    unk_c8.func_ov002_022029e8(a, b, 3, 1);
    unk_c3 = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov145_022937c0::func_ov145_02292850() {
    if (unk_c2 == 4) {
        unk_c8.func_ov002_02202ca0();
    } else {
        unk_c8.func_ov002_02202c40();
    }
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    func_ov145_02292820(a, b);
}
