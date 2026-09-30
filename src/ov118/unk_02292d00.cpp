#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02004018(u32 a, s32 b);
void func_0200402c(s32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
s32 func_ov090_02291a78(s32 v);
s32 func_02133150(s32 a, s32 b);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8;
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

// 0x40-byte sub-objects with out-of-line dtor func_0206fca8
class Unk_ov118_0206fca8 {
public:
    Unk_ov118_0206fca8();
    ~Unk_ov118_0206fca8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x43c (dtor func_ov002_02202f70)
class Unk_ov118_02202f70 {
public:
    Unk_ov118_02202f70();
    ~Unk_ov118_02202f70();
    void func_ov002_02202e48();
    void func_ov002_02202e54();
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    void func_ov002_02202f00();
    u32 unk_00[0x48 / 4];
};

// sub-object at +0x484 (vtable 0x02202658, dtor func_ov002_02202640)
class Unk_ov118_02202658 {
public:
    Unk_ov118_02202658();
    virtual ~Unk_ov118_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u8 func_ov002_0220288c();
    u8 func_ov002_02202878();
    void func_ov002_02202c40();
    void func_ov002_02202be0();
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202d00(s32 a);
    u32 unk_04[0x60 / 4];
};

// ov117 array of 17 six-byte entries (dtor func_ov117_02292cac)
class Unk_ov118_ov117_02292c88 {
public:
    Unk_ov118_ov117_02292c88();
    ~Unk_ov118_ov117_02292c88();
    u8 unk_00[0x66];
};

// 3-byte element with empty out-of-line dtor (func_ov118_02292df8)
class Unk_ov118_02292df8 {
public:
    ~Unk_ov118_02292df8();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

#define A8V (*(volatile u8 *)&unk_a8)
#define ACV (*(volatile u8 *)&unk_ac)

// Vtable 0x022955c8
class Unk_ov118_022955c8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov118_022955c8();

    void func_ov118_02292e00(u32 m);
    void func_ov118_02292e10(u32 m);
    BOOL func_ov118_02292e20(u32 m);
    void func_ov118_02292e34(s32 a);
    s32 func_ov118_02292e78();
    s32 func_ov118_02292f7c(void *pad);
    void func_ov118_02293214();
    void func_ov118_02293234();
    void func_ov118_02293254();
    void func_ov118_02293274();
    void func_ov118_022932ec();
    s32 func_ov118_02293310();
    s32 func_ov118_0229336c();
    void func_ov118_022933cc();
    void func_ov118_02293458();
    void func_ov118_02293474();
    void func_ov118_02293498();
    s32 func_ov118_02293524();
    void func_ov118_022935a0();
    void func_ov118_02293604(s32 v);

    // callees in other groups
    void func_ov118_02293994(u8 v);
    BOOL func_ov118_02294df8(s32 v);
    s32 func_ov118_02293d34();
    s32 func_ov118_02293d50();
    void func_ov118_02293dfc();
    void func_ov118_02293e14();
    void func_ov118_022937a0(u32 v);
    void func_ov118_022937b0(u32 v);
    void func_ov118_02293924(u32 v);

    /* 0x0091 */ u8 unk_91[7];
    /* 0x0098 */ u16 unk_98;
    /* 0x009a */ u16 unk_9a;
    /* 0x009c */ u16 unk_9c;
    /* 0x009e */ u8 unk_9e[5];
    /* 0x00a3 */ u8 unk_a3;
    /* 0x00a4 */ u8 unk_a4[2];
    /* 0x00a6 */ u8 unk_a6;
    /* 0x00a7 */ u8 unk_a7;
    /* 0x00a8 */ u8 unk_a8;
    /* 0x00a9 */ u8 unk_a9;
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab;
    /* 0x00ac */ u8 unk_ac;
    /* 0x00ad */ u8 unk_ad;
    /* 0x00ae */ u8 unk_ae;
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0[0x4c];
    /* 0x00fc */ Unk_ov118_0206fca8 unk_fc[13];
    /* 0x043c */ Unk_ov118_02202f70 unk_43c;
    /* 0x0484 */ Unk_ov118_02202658 unk_484;
    /* 0x04e8 */ u8 unk_4e8[0x4000];
    /* 0x44e8 */ Unk_ov118_ov117_02292c88 unk_44e8;
    /* 0x454e */ u8 unk_454e[0x1a];
    /* 0x4568 */ Unk_ov118_02292df8 unk_4568[3];
    /* 0x4571 */ Unk_ov118_02292df8 unk_4571[14];
};

extern "C" {
Unk_ov118_022955c8 *func_ov118_02292d00(Unk_ov118_022955c8 *self);
}

Unk_ov118_022955c8::~Unk_ov118_022955c8() {}

void Unk_ov118_02292df8_dummy();

Unk_ov118_02292df8::~Unk_ov118_02292df8() {}

void Unk_ov118_022955c8::func_ov118_02292e34(s32 a) {
    u32 i = unk_a9;
    if (i != 0xe) {
        s32 v = (unk_4571[i].unk_00 - 0x18) * 2 - 0x7f;
        if (v < -0x7f) {
            v = -0x7f;
        } else if (v > 0x80) {
            v = 0x80;
        }
        func_02004018(a, v);
    }
}

s32 Unk_ov118_022955c8::func_ov118_02292e78() {
    if (func_ov118_02292e20(0x800)) {
        func_ov118_02293994(unk_ad + 1);
        func_ov118_02292e34(0x38);
        return 0;
    }
    u32 s = unk_ac;
    if (s == 0x10) {
        func_ov002_02200a58(7);
        unk_43c.func_ov002_02202f00();
        func_ov118_02292e10(0x1000);
        unk_43c.func_ov002_02202e48();
        return 1;
    } else if (s == 8) {
        if (func_ov118_02292e20(1)) {
            func_ov118_02293994(0);
            func_ov118_02293e14();
            func_0200402c(0x36);
            return 2;
        }
        return 0;
    } else if (s == 9) {
        if (!func_ov118_02292e20(1)) {
            func_ov118_02293994(0);
            func_ov118_02293dfc();
            func_0200402c(0x36);
            return 2;
        }
        return 0;
    } else if (s <= 7) {
        if (func_ov118_02294df8(s)) {
            return 1;
        }
        return 0;
    } else if (s >= 0xa && s <= 0xf) {
        { u32 t = unk_a3; func_ov118_02293994(t + s + 5); };
        func_ov118_02292e34(0x37);
        return 0;
    }
    return 0;
}

s32 Unk_ov118_022955c8::func_ov118_02292f7c(void *pad) {
    u32 old = unk_ac;
    if (old <= 7) {
        if (func_ov002_0220127c(pad)) {
            s32 cv = unk_ac;
            if (cv <= 3) {
                unk_ae = unk_484.func_ov002_0220288c();
                unk_af = 0x30;
                unk_484.func_ov002_02202c40();
                return 2;
            }
            if (cv >= 5) {
                unk_ac = 8;
            } else {
                unk_ac = 9;
            }
            unk_484.func_ov002_02202c40();
        } else if (func_ov002_0220126c(pad)) {
            if (ACV != 0) {
                ACV = ACV - 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (ACV < 7) {
                ACV = ACV + 1;
            }
        }
    } else if (old >= 0xa && old <= 0xf) {
        if (func_ov118_02292e20(8) && func_ov002_0220125c(pad)) {
            unk_ac = 0x10;
        } else if (func_ov002_0220128c(pad)) {
            if (ACV > 0xa) {
                ACV = ACV - 1;
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) > 0) {
                    func_ov118_022937a0(h - 0x10);
                    return 3;
                }
                unk_ac = 9;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 n = func_ov118_02293d50() - 1;
            u8 c = unk_ac;
            if (c < 0xf) {
                if (c < n + 0xa) {
                    ACV = ACV + 1;
                }
            } else {
                u32 h = unk_9a;
                if (((s32)h >> 4) + 5 < n) {
                    func_ov118_022937a0(h + 0x10);
                    return 3;
                }
            }
        } else if (func_ov002_0220126c(pad)) {
            unk_ae = 0x98;
            unk_af = unk_484.func_ov002_02202878();
            return 2;
        }
    } else if (old == 0x10) {
        if (func_ov002_0220128c(pad)) {
            unk_ac = 8;
        } else if (func_ov002_0220126c(pad)) {
            s32 v = unk_43c.func_ov002_02202e60();
            if (v < 0x50) {
                v = 0x50;
            }
            if (v >= 0xb0) {
                v = 0xaf;
            }
            unk_ac = ((v - 0x50) >> 4) + 0xa;
        }
    } else if ((u8)(old + 0xf8) <= 1) {
        if (func_ov002_0220128c(pad)) {
            unk_ac = 5;
            unk_484.func_ov002_02202be0();
        } else if (func_ov002_0220127c(pad)) {
            unk_ac = 0xa;
        } else if (func_ov002_0220126c(pad)) {
            if (unk_ac == 9) {
                unk_ae = 0x98;
                unk_af = unk_484.func_ov002_02202878();
                return 2;
            }
            unk_ac = 9;
        } else if (func_ov002_0220125c(pad)) {
            if (unk_ac == 8 && func_ov118_02292e20(8)) {
                unk_ac = 0x10;
            } else {
                unk_ac = 8;
            }
        }
    }
    if (old != unk_ac) {
        return 1;
    }
    return 0;
}

void Unk_ov118_022955c8::func_ov118_02293214() {
    unk_484.func_ov002_02202a78();
    unk_484.vfunc_0c();
}

void Unk_ov118_022955c8::func_ov118_02293234() {
    unk_484.func_ov002_02202af0();
    func_ov002_02200a58(6);
}

void Unk_ov118_022955c8::func_ov118_02293254() {
    unk_484.func_ov002_02202b68();
    func_ov002_02200a58(5);
}

void Unk_ov118_022955c8::func_ov118_02293274() {
    if (func_ov118_02292e20(0x4000)) {
        s32 a = func_ov118_0229336c();
        s32 b = func_ov118_02293310();
        unk_484.func_ov002_02202a40(a, b);
        func_ov118_02292e00(0x4000);
    } else {
        s32 a = func_ov118_0229336c();
        s32 b = func_ov118_02293310();
        unk_484.func_ov002_022029e8(a, b, 3, 1);
        unk_ab = unk_8d;
        func_ov002_02200a58(4);
    }
}

void Unk_ov118_022955c8::func_ov118_022932ec() {
    unk_484.func_ov002_02202d00(0);
    unk_484.vfunc_0c();
}

s32 Unk_ov118_022955c8::func_ov118_02293310() {
    if (func_ov118_02292e20(0x800)) {
        return unk_af;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return (c - 0xa) * 16 + 0x58;
    }
    if (c >= 8 && c <= 9) {
        return 0x40;
    }
    if (c <= 7) {
        return 8;
    }
    if (c == 0x10) {
        return unk_43c.func_ov002_02202e60();
    }
    return 0x60;
}

s32 Unk_ov118_022955c8::func_ov118_0229336c() {
    if (func_ov118_02292e20(0x800)) {
        return unk_ae;
    }
    u32 c = unk_ac;
    if (c >= 0xa && c <= 0xf) {
        return 0xa0;
    }
    if (c <= 7) {
        return func_ov090_02291a78(c);
    }
    if (c == 8) {
        return 0xd8;
    }
    if (c == 9) {
        return 0xb4;
    }
    if (c == 0x10) {
        return unk_43c.func_ov002_02202e84();
    }
    return 0x80;
}

void Unk_ov118_022955c8::func_ov118_022933cc() {
    if (!func_ov118_02292e20(8) && unk_ac == 0x10) {
        unk_ac = 8;
    }
    s32 a = func_ov118_0229336c();
    s32 b = func_ov118_02293310();
    unk_484.func_ov002_02202a40(a, b);
    if (unk_ac >= 0xa && unk_ac <= 0xf) {
        func_ov118_022937a0(unk_98 & ~0xf);
    }
    if (unk_ac <= 7) {
        unk_484.func_ov002_02202d00(0xd);
    } else {
        unk_484.func_ov002_02202d00(1);
    }
    func_ov118_02293214();
}

void Unk_ov118_022955c8::func_ov118_02293458() {
    func_ov118_02292e00(0x40);
    func_ov118_02292e00(0x100);
}

void Unk_ov118_022955c8::func_ov118_02293474() {
    func_ov118_02292e10(0x40);
    func_ov118_02292e00(0x100);
    unk_a8 = 0xf;
}

void Unk_ov118_022955c8::func_ov118_02293498() {
    if (func_ov118_02292e20(0x40)) {
        if (A8V != 0) {
            A8V = A8V - 1;
        }
        u32 v = unk_a8;
        if (v == 0) {
            if (func_ov118_02292e20(0x200)) {
                func_ov118_02292e00(0x100);
            } else {
                func_ov118_02293924(unk_aa);
            }
            unk_a8 = 0xf;
        } else if (unk_a8 == 5) {
            if (func_ov118_02292e20(0x200)) {
                func_ov118_02292e10(0x100);
            } else {
                func_ov118_02293924(0xe);
            }
        }
    }
}

s32 Unk_ov118_022955c8::func_ov118_02293524() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b < 0x33 || b > 0x4b) {
        return 0;
    }
    if (func_ov118_02292e20(1)) {
        if (a < 0xcd || a > 0xe5) {
            return 0;
        }
        func_ov118_02293994(0);
        func_ov118_02293e14();
    } else {
        if (a < 0xaa || a > 0xc2) {
            return 0;
        }
        func_ov118_02293994(0);
        func_ov118_02293dfc();
    }
    func_ov118_022937b0(0);
    unk_a3 = 0xff;
    return 1;
}

void Unk_ov118_022955c8::func_ov118_022935a0() {
    s32 pos = unk_9a;
    u16 pad = data_021f47d8;
    if (pad & 0x40) {
        pos -= 4;
    } else if (pad & 0x80) {
        pos += 4;
    }
    s32 m = func_ov118_02293d34();
    if (pos < 0) {
        pos = 0;
    } else if (pos > m) {
        pos = m;
    }
    if (pos != unk_9a) {
        unk_43c.func_ov002_02202e54();
    }
    func_ov118_022937b0(pos);
}

void Unk_ov118_022955c8::func_ov118_02293604(s32 v) {
    s32 t = v;
    if (t < 0) {
        t = 0;
    } else if (t > 0x58) {
        t = 0x58;
    }
    s32 d = t - unk_a6;
    if (d >= 4 || d <= -4) {
        unk_43c.func_ov002_02202e54();
        unk_a6 = t;
    }
    s32 m = func_ov118_02293d34();
    func_ov118_022937b0(func_02133150(t * m, 0x58));
}

void Unk_ov118_022955c8::func_ov118_02292e00(u32 m) { unk_9c = unk_9c & ~m; }

void Unk_ov118_022955c8::func_ov118_02292e10(u32 m) { unk_9c = unk_9c | m; }

BOOL Unk_ov118_022955c8::func_ov118_02292e20(u32 m) {
    if (unk_9c & m) {
        return TRUE;
    }
    return FALSE;
}
