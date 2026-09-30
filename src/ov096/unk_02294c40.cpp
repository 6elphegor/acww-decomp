#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
void *func_0209750c();
u16 *func_020983cc(void *p);
void func_0206e240(void *a, void *b, void *c, void *d);
void func_02065c34(void *p, u8 v);
void func_0206ed5c(void *p);
s32 func_0204b354(u16 *p);
u32 func_0204b338(u16 *p);
s32 func_0204b318(s32 a, s32 b);
BOOL func_0203a35c();
void func_0203a32c();
void func_0203a344();
void *func_020ed174(void *p);
void func_ov090_02291d8c(void *p, s32 idx);
void func_ov002_022013e4(void *self, void *p, u32 v);
void func_ov002_02202be0(void *self);
void func_ov002_02202c40(void *self);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_020dd458 {
public:
    virtual ~Unk_020dd458();

    /* 0x04 */ u8 unk_04[0x12];
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 pad_17;
};

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();

    u32 unk_00[0x210 / 4];
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

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208e13c(s32 v);
    void func_0208e288(s32 x, s32 y);

    /* 0x0c */ u8 unk_0c[0x64];
};

// +0x2b14 sub-object (0x70 bytes)
class Unk_ov002_02204738 : public Unk_020e1098 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();
};

// Opaque sub-objects (only their out-of-line destructors are called here)
class Unk_ov094_02294a50 {
public:
    ~Unk_ov094_02294a50();
    u32 unk_00[0xa60 / 4];
};

class Unk_ov094_02294bd4 {
public:
    ~Unk_ov094_02294bd4();
    u32 unk_00[0x28 / 4];
};

class Unk_ov094_02292d50 {
public:
    ~Unk_ov094_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov002_02204468 {
public:
    ~Unk_ov002_02204468();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov002_02204604 {
public:
    ~Unk_ov002_02204604();
    u32 unk_00[0x18 / 4];
};

class Unk_ov002_02204614 {
public:
    ~Unk_ov002_02204614();
    u32 unk_00[0x64 / 4];
};

class Unk_ov002_02204558 {
public:
    ~Unk_ov002_02204558();
    u32 unk_00[0x300 / 4];
};

class Unk_ov002_022040ec {
public:
    ~Unk_ov002_022040ec();
    u32 unk_00[0x108 / 4];
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

// Vtable 0x0229aea8
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov096_0229aea8();

    void func_ov096_02294d9c(u32 mask);
    void func_ov096_02294dac(u32 mask);
    BOOL func_ov096_02294dbc(u32 mask);
    BOOL func_ov096_02294dd0();
    void func_ov096_02294e08();
    void func_ov096_02294e84();
    void func_ov096_02294ed4();
    void func_ov096_02294ef4();
    void func_ov096_02294f14();
    void *func_ov096_02294f9c();
    void func_ov096_02294fac();
    void func_ov096_02294fd4();
    void func_ov096_02294ff8();
    BOOL func_ov096_02295020(void *pad, s32 mode);
    void func_ov096_022950fc(void *pad, s32 mode);
    void func_ov096_022952a0(void *pad, s32 mode);
    void func_ov096_02295348(void *pad, s32 mode);
    void func_ov096_02295538(void *pad, s32 mode);

    // out-of-range callees (declarations only)
    void func_ov096_02297160();
    void func_ov096_022972ec(s32 v);
    void *func_ov096_02297b14(u32 idx);
    u16 func_ov096_02297b9c(u32 idx);
    s32 func_ov096_022980a0(u32 idx, s32 a, s32 b);
    BOOL func_ov096_022978d0(s32 mode);
    BOOL func_ov096_022978f8(s32 mode);
    BOOL func_ov096_02297910(s32 mode);
    void func_ov096_022982a0();
    BOOL func_ov096_022982c0(u32 v);
    BOOL func_ov096_022982d0(u32 v);
    BOOL func_ov096_022982e0(u32 v);
    BOOL func_ov096_022982f0(u32 v);
    void func_ov096_0229a000();
    void func_ov096_0229a39c(u32 v);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x14];
    /* 0xac */ u16 unk_ac;
    /* 0xae */ u8 unk_ae[2];
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2[3];
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[5];
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf[9];
    /* 0xc8 */ u8 unk_c8[0x20];
    /* 0xe8 */ u8 unk_e8[0x238];
    /* 0x320 */ u8 unk_320[0x38];
    /* 0x358 */ Unk_ov094_02294a50 unk_358;
    /* 0xdb8 */ Unk_ov094_02294bd4 unk_db8;
    /* 0xde0 */ Unk_ov094_02292d50 unk_de0;
    /* 0xf40 */ u32 unk_f40[0x1480 / 4];
    /* 0x23c0 */ Unk_ov002_02204468 unk_23c0;
    /* 0x2480 */ Unk_ov002_02204604 unk_2480;
    /* 0x2498 */ Unk_ov002_02204614 unk_2498;
    /* 0x24fc */ Unk_ov002_02204558 unk_24fc;
    /* 0x27fc */ Unk_ov002_022040ec unk_27fc;
    /* 0x2904 */ Unk_0206d0a0 unk_2904;
    /* 0x2b14 */ Unk_ov002_02204738 unk_2b14;
    /* 0x2b84 */ u8 unk_2b84[0x14];
    /* 0x2b98 */ Unk_020dd458 unk_2b98;
    /* 0x2bb0 */ u8 unk_2bb0[0xdc];
    /* 0x2c8c */ Unk_020dd458 unk_2c8c;
};

// ---------------------------------------------------------------------------------------------

Unk_ov096_0229aea8::~Unk_ov096_0229aea8() {}

void Unk_ov096_0229aea8::func_ov096_02294e08() {
    struct {
        u16 a;
        u16 b;
    } l;
    l.a = *func_020983cc(func_0209750c());
    l.b = unk_ac;
    func_0206e240(&l.b, &unk_320, &unk_e8, &unk_c8);
    BOOL ok = FALSE;
    volatile u16 *pv = &l.a;
    u16 a = *pv;
    u16 b = *pv;
    if (b >= 0x11a8 && a <= 0x12a7) {
        ok = TRUE;
    }
    if (ok) {
        unk_ac = a;
        func_ov096_022972ec(1);
    } else {
        func_ov096_02297160();
    }
    func_0200402c(0x6b);
}

void Unk_ov096_0229aea8::func_ov096_02294e84() {
    if (func_ov096_02294dbc(0x800)) {
        if (func_0203a35c()) {
            if (!func_ov096_02294dbc(0x400)) {
                func_0203a32c();
            }
        } else {
            if (func_ov096_02294dbc(0x400)) {
                func_0203a344();
            }
        }
        func_ov096_02294d9c(0x800);
    }
}

void Unk_ov096_0229aea8::func_ov096_02294ed4() {
    func_ov096_02294d9c(0x400);
    func_ov096_02294dac(0x800);
}

void Unk_ov096_0229aea8::func_ov096_02294ef4() {
    func_ov096_02294dac(0x400);
    func_ov096_02294dac(0x800);
}

void Unk_ov096_0229aea8::func_ov096_02294f14() {
    u16 v;
    void *r4 = func_ov096_02294f9c();
    v = func_ov096_02297b9c(unk_b8);
    s32 r6 = func_0204b354(&v);
    func_02065c34(r4, (u8)r6);
    func_ov002_022013e4(&unk_24fc, r4, unk_be);
    func_0206ed5c(r4);
    func_ov096_0229a39c(8);
    func_ov096_0229a000();
    u32 n = func_0204b338(&v);
    s32 r2;
    if (n <= 1) {
        r2 = 0xfff1;
    } else {
        r2 = func_0204b318(r6, n - 1);
    }
    func_ov096_022980a0(unk_b8, r2, 0);
}

void *Unk_ov096_0229aea8::func_ov096_02294f9c() { return func_ov096_02297b14(unk_b6); }

void Unk_ov096_0229aea8::func_ov096_02294fac() {
    func_ov096_02294fd4();
    func_ov090_02291d8c(func_020ed174(this), 7);
    func_ov096_02294dac(0x20000);
}

void Unk_ov096_0229aea8::func_ov096_02294fd4() {
    func_ov002_02200a58(0x21);
    unk_2b14.func_0208e13c(2);
    func_0200402c(0x29);
}

void Unk_ov096_0229aea8::func_ov096_02294ff8() {
    func_ov002_02200a50(5);
    func_ov002_02200a60(1);
    func_ov096_02294dac(0x80);
    func_ov096_0229a000();
}

BOOL Unk_ov096_0229aea8::func_ov096_02295020(void *pad, s32 mode) {
    u8 old = unk_b5;
    func_ov096_02294d9c(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov096_022982f0(unk_b5)) {
        func_ov096_02295538(pad, mode);
    } else if (func_ov096_022982e0(unk_b5)) {
        func_ov096_02295348(pad, mode);
    } else if (func_ov096_022982d0(unk_b5)) {
        func_ov096_022952a0(pad, mode);
    } else if (func_ov096_022982c0(unk_b5)) {
        func_ov096_022950fc(pad, mode);
    } else if (unk_b5 == 0x21) {
        if (func_ov002_0220125c(pad)) {
            unk_b5 = 0xa;
        } else if (func_ov002_0220126c(pad)) {
            unk_b5 = 0x18;
            func_ov096_02294dac(0x10);
        }
    }
    if (old != unk_b5) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_022950fc(void *pad, s32 mode) {
    u32 v = unk_b5;
    if (v == 0x24) {
        if (func_ov002_0220126c(pad)) {
            if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                func_ov096_02294dac(0x10);
                unk_b5 = 0x10;
            }
        } else if (func_ov002_0220125c(pad)) {
            unk_b5 = 0xf;
        } else if (func_ov002_0220128c(pad)) {
            if (mode == 0) {
                func_ov096_022982a0();
                func_ov002_02202be0(&unk_2498);
            }
        } else if (func_ov002_0220127c(pad)) {
            if (func_ov096_022978f8(mode)) {
                unk_b5 = 0x22;
            } else {
                unk_b5 = 4;
            }
        }
    } else if ((u8)(v + 0xde) <= 1) {
        if (func_ov002_0220126c(pad)) {
            if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                func_ov096_02294dac(0x10);
                unk_b5 = 0x12;
            }
        } else if (func_ov002_0220125c(pad)) {
            unk_b5 = 0x11;
        } else if (func_ov002_0220128c(pad)) {
            if (func_ov096_02297910(mode)) {
                unk_b5 = 0x24;
            }
        } else if (func_ov002_0220127c(pad)) {
            unk_b5 = 4;
        }
    } else if (v == 0x25) {
        if (func_ov002_0220126c(pad)) {
            func_ov096_02294dac(0x10);
            unk_b5 = 0x12;
        } else if (func_ov002_0220125c(pad)) {
            if (func_ov096_022978f8(mode)) {
                unk_b5 = 0x22;
            } else if (func_ov096_02297910(mode)) {
                unk_b5 = 0x24;
            } else {
                unk_b5 = 0x11;
            }
        } else if (func_ov002_0220128c(pad)) {
            if (mode == 0) {
                func_ov096_022982a0();
                func_ov002_02202be0(&unk_2498);
            }
        } else if (func_ov002_0220127c(pad)) {
            unk_b5 = 1;
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022952a0(void *pad, s32 mode) {
    if (func_ov002_0220126c(pad)) {
        if (*(volatile u8 *)&unk_b5 > 0x19) {
            unk_b5 = unk_b5 - 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (*(volatile u8 *)&unk_b5 < 0x20) {
            unk_b5 = unk_b5 + 1;
        }
    }
    if (func_ov002_0220127c(pad)) {
        s32 d = unk_b5 - 0x19;
        if (d == 7) {
            unk_b5 = 0x10;
        } else if (d == 6) {
            unk_b5 = 0xf;
        } else if (d == 0) {
            unk_b5 = 0x25;
        } else {
            unk_b5 = 0x24;
        }
        func_ov002_02202c40(&unk_2498);
    }
}

void Unk_ov096_0229aea8::func_ov096_02295348(void *pad, s32 mode) {
    s32 t = unk_b5 - 0xf;
    s32 row = t >> 1;
    if (func_ov002_0220126c(pad)) {
        if ((t & 1) > 0) {
            unk_b5 = unk_b5 - 1;
        } else if (mode == 2) {
        } else if (row >= 2) {
            unk_b5 = (row - 2) * 5 + 4;
        } else {
            s32 a = func_ov096_022978f8(mode);
            s32 b = func_ov096_02297910(mode);
            if (a & b) {
                if (row == 0) {
                    unk_b5 = 0x24;
                } else {
                    unk_b5 = 0x22;
                }
            } else if (a != 0) {
                unk_b5 = 0x22;
            } else if (b != 0) {
                unk_b5 = 0x24;
            } else if (func_ov096_022978d0(mode)) {
                unk_b5 = 0x25;
            } else {
                unk_b5 = 4;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if ((t & 1) < 1) {
            unk_b5 = unk_b5 + 1;
        } else if (mode == 2) {
        } else {
            func_ov096_02294dac(0x20);
            if (row < 2) {
                if (func_ov096_022978d0(mode)) {
                    unk_b5 = 0x25;
                } else {
                    s32 a = func_ov096_022978f8(mode);
                    s32 b = func_ov096_02297910(mode);
                    if (a & b) {
                        if (row == 0) {
                            unk_b5 = 0x24;
                        } else {
                            unk_b5 = 0x22;
                        }
                    } else if (a != 0) {
                        unk_b5 = 0x22;
                    } else if (b != 0) {
                        unk_b5 = 0x24;
                    } else {
                        unk_b5 = 0;
                    }
                }
            } else {
                if (row == 4 && func_ov096_02294dd0()) {
                    unk_b5 = 0x21;
                    return;
                }
                unk_b5 = (row - 2) * 5;
            }
        }
    }
    if (func_ov096_022982e0(unk_b5)) {
        if (!func_ov096_02294dbc(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_b5 = unk_b5 - 2;
                } else if (mode == 0) {
                    func_ov096_022982a0();
                    func_ov002_02202be0(&unk_2498);
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 4) {
                    unk_b5 = unk_b5 + 2;
                }
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02295538(void *pad, s32 mode) {
    s32 col = unk_b5;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                if (row == 2 && func_ov096_02294dd0()) {
                    unk_b5 = 0x21;
                    return;
                }
                unk_b5 = (row + 2) * 2 + 0x10;
                func_ov096_02294dac(0x10);
            } else {
                unk_b5 = unk_b5 - 1;
                col = col - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                unk_b5 = (row + 2) * 2 + 0xf;
            } else {
                unk_b5 = unk_b5 + 1;
                col = col + 1;
            }
        }
    }
    if (func_ov096_022982f0(unk_b5)) {
        if (!func_ov096_02294dbc(0x30)) {
            if (func_ov002_0220128c(pad)) {
                if (row > 0) {
                    unk_b5 = unk_b5 - 5;
                } else if (col <= 2 && func_ov096_022978d0(mode)) {
                    unk_b5 = 0x25;
                } else if (func_ov096_022978f8(mode)) {
                    unk_b5 = 0x22;
                } else if (func_ov096_02297910(mode)) {
                    unk_b5 = 0x24;
                }
            } else if (func_ov002_0220127c(pad)) {
                if (row < 2) {
                    unk_b5 = unk_b5 + 5;
                }
            }
        }
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_02294dd0() {
    struct Pad {
        s32 v[2];
        Pad() {}
        ~Pad() {}
    } pad;
    BOOL r;
    if (unk_b1 == 2 && unk_b0 == 0 && unk_ac >= 0x11a8 && unk_ac <= 0x12a7) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void Unk_ov096_0229aea8::func_ov096_02294d9c(u32 mask) { unk_94 = unk_94 & ~mask; }

void Unk_ov096_0229aea8::func_ov096_02294dac(u32 mask) { unk_94 = unk_94 | mask; }

BOOL Unk_ov096_0229aea8::func_ov096_02294dbc(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}
