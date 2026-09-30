#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
s32 func_0206ed18();
s32 func_0206ed50();
void func_0206ecf8(s32 a);
void func_0206ed2c(u32 a);
void func_0206eba4(void *p);
s32 func_0206ebc0();
BOOL func_02072e44(void *p);
s32 func_020740a0(s32 a);
void func_02116048(void *src, void *dst, u32 n);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
s32 func_02072e34(void *p);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206f9fc(void *p, s32 a);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fc44(void *p);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
extern void *data_020cbb18;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
}

// Opaque sub-objects (only their out-of-line destructors / a few methods are used here)
class Unk_ov094_02293a60 {
public:
    ~Unk_ov094_02293a60();
    u32 unk_00[0xa60 / 4];
};

class Unk_ov094_0229469c {
public:
    ~Unk_ov094_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov094_02292d50 {
public:
    ~Unk_ov094_02292d50();
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov002_022007e8 {
public:
    ~Unk_ov002_022007e8();
    void func_ov002_022006e4(s32 v);
    u32 unk_00[0xc0 / 4];
};

class Unk_ov002_022027c4 {
public:
    ~Unk_ov002_022027c4();
    u32 unk_00[0x18 / 4];
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
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202a40(s32 a, s32 b);
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02202454 {
public:
    ~Unk_ov002_02202454();
    void func_ov002_02202064(s32 v);
    u32 unk_00[0x300 / 4];
};

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

// Vtable 0x02297778
class Unk_ov110_02297778 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov110_02297778();

    void func_ov110_02294d68(u32 mask);
    void func_ov110_02294d78(u32 mask);
    BOOL func_ov110_02294d88(u32 mask);
    BOOL func_ov110_02294d9c();
    void func_ov110_02294de4(u8 v);
    s32 func_ov110_02294e48(u16 *p);
    void func_ov110_02294e78(s32 flag);
    void func_ov110_02294fb8(s32 flag);
    void *func_ov110_02294ffc();
    void func_ov110_02295034();
    BOOL func_ov110_02295060(void *pad, s32 mode);
    void func_ov110_02295138(void *pad);
    void func_ov110_022951ac(void *pad, s32 mode);
    void func_ov110_022952b0(void *pad, s32 mode);
    void func_ov110_022953b4();
    s32 func_ov110_022953e0();
    void func_ov110_02295404(u8 v);
    void func_ov110_0229544c(u8 v);
    void func_ov110_02295488();
    void func_ov110_022954a8();
    void func_ov110_022954c8();
    void func_ov110_022954e8();
    void func_ov110_02295508();
    void func_ov110_0229553c();

    // out-of-range callees (declarations only)
    s32 func_ov110_022956c4();
    s32 func_ov110_022956d4();
    void func_ov110_02296300();
    BOOL func_ov110_02296088(u32 v);
    BOOL func_ov110_02296094(u32 v);
    BOOL func_ov110_022960a4(u32 v);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u8 unk_98[0x18];
    /* 0xb0 */ u16 unk_b0[15];
    /* 0xce */ u16 unk_ce[15];
    /* 0xec */ u8 unk_ec[2];
    /* 0xee */ s16 unk_ee;
    /* 0xf0 */ u8 unk_f0[5];
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
    /* 0xf8 */ u8 unk_f8;
    /* 0xf9 */ u8 unk_f9;
    /* 0xfa */ u8 unk_fa;
    /* 0xfb */ u8 unk_fb;
    /* 0xfc */ u8 unk_fc;
    /* 0xfd */ u8 unk_fd[3];
    /* 0x100 */ u8 unk_100[0x38];
    /* 0x138 */ Unk_ov094_02293a60 unk_138;
    /* 0xb98 */ Unk_ov094_0229469c unk_b98;
    /* 0xbc0 */ Unk_ov094_02292d50 unk_bc0;
    /* 0x21a0 */ Unk_ov002_022007e8 unk_21a0;
    /* 0x2260 */ Unk_ov002_022027c4 unk_2260;
    /* 0x2278 */ Unk_ov002_02202640 unk_2278;
    /* 0x22dc */ Unk_ov002_02202454 unk_22dc;
    /* 0x25dc */ Unk_ov002_022043e8 unk_25dc;
    /* 0x26e4 */ Unk_0206fca8 unk_26e4[2];
};

// ---------------------------------------------------------------------------------------------

Unk_ov110_02297778::~Unk_ov110_02297778() {}

void Unk_ov110_02297778::func_ov110_02294d68(u32 mask) { unk_94 &= ~mask; }

void Unk_ov110_02297778::func_ov110_02294d78(u32 mask) { unk_94 |= mask; }

BOOL Unk_ov110_02297778::func_ov110_02294d88(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov110_02297778::func_ov110_02294d9c() {
    if (func_0206ed18() == 0) {
        return TRUE;
    }
    if (func_ov110_02294d88(8) == 0) {
        return TRUE;
    }
    if (func_02072e44(data_020cbb18)) {
        if (func_020740a0(unk_ee) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_ov110_02297778::func_ov110_02294de4(u8 v) {
    u8 buf[0x24];
    if (func_02072e44(data_020cbb18)) {
        func_ov110_02294d78(8);
        buf[0] = v;
        func_02116048(unk_b0, &buf[1], 0x1e);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 0x1f);
        func_02072824(g, 0x16, 4);
        unk_ee = func_02072e34(g);
    }
}

s32 Unk_ov110_02297778::func_ov110_02294e48(u16 *p) {
    s32 i = 0;
    s32 n = i;
    for (; i < 15; i++) {
        u16 v = p[i];
        if (v != 0xfff1) {
            if (i != n) {
                p[n] = v;
                p[i] = 0xfff1;
            }
            n++;
        }
    }
    return n;
}

void Unk_ov110_02297778::func_ov110_02294e78(s32 flag) {
    func_ov110_02294d68(8);
    s32 r = func_0206ed50();
    if (r == 0x20) {
        func_0200402c(0x28);
    } else {
        func_0200402c(0x27);
    }
    if (flag != 0) {
        unk_fc = 5;
    } else {
        unk_fc = 0;
    }
    func_ov002_02200a58(0x15);
    func_ov110_02294fb8(1);
    s32 n = func_ov110_02294e48(unk_b0);
    switch (r) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206eba4(unk_b0);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (unk_b0[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (unk_b0[i] == unk_ce[j]) {
                        unk_ce[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = func_ov110_02294e48(unk_ce);
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206ed2c((u8)n);
            func_0206eba4(unk_ce);
            func_02116048(unk_b0, data_021ed210, 0x1e);
            func_ov110_02294de4(3);
        }
        break;
    }
    case 0x20:
        func_02116048(unk_b0, data_021ed22e, 0x1e);
        func_ov110_02294de4(4);
        func_0206ecf8(1);
        break;
    }
}

void Unk_ov110_02297778::func_ov110_02294fb8(s32 flag) {
    s32 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov110_02294ffc();
    func_0206fb9c(p, 4, 0x1ca, 6, v, 9, 0);
    func_0206f9fc(p, 0x88);
    func_0206fab4(p, 1, 0);
}

void *Unk_ov110_02297778::func_ov110_02294ffc() {
    if (unk_fb >= 2) {
        return &unk_26e4[1];
    }
    unk_fb++;
    return &unk_26e4[unk_fb - 1];
}

void Unk_ov110_02297778::func_ov110_02295034() {
    s32 i;
    unk_fb = 0;
    for (i = 0; i < 2; i++) {
        func_0206fc44(&unk_26e4[i]);
    }
}

BOOL Unk_ov110_02297778::func_ov110_02295060(void *pad, s32 mode) {
    u8 old = unk_f5;
    func_ov110_02294d68(0x30);
    func_ov110_02294d68(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov110_022960a4(unk_f5)) {
        func_ov110_022952b0(pad, mode);
    } else if (func_ov110_02296094(unk_f5)) {
        func_ov110_022951ac(pad, mode);
    } else if (func_ov110_02296088(unk_f5)) {
        func_ov110_02295138(pad);
    }
    BOOL a = func_ov110_02296088(unk_f5);
    if (a != func_ov110_02296088(old)) {
        if (func_ov110_02296088(unk_f5)) {
            unk_2278.func_ov002_02202ca0();
        } else {
            unk_2278.func_ov002_02202c40();
        }
        func_ov110_02294d78(0x100);
    }
    if (old != unk_f5) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov110_02297778::func_ov110_02295138(void *pad) {
    if (func_ov002_0220125c(pad)) {
        if (func_ov002_0220128c(pad)) {
            unk_f5 = 0x19;
        } else {
            unk_f5 = 0;
        }
        func_ov110_02294d78(0x20);
    } else if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad)) {
            unk_f5 = 0x1d;
        } else {
            unk_f5 = 4;
        }
    } else if (func_ov002_0220128c(pad)) {
        unk_f5 = 0x1d;
    }
}

void Unk_ov110_02297778::func_ov110_022951ac(void *pad, s32 mode) {
    s32 r = unk_f5 - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                func_ov110_02294d78(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    func_ov110_02294d78(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        } else {
            unk_f5 = r;
        }
    }
}

void Unk_ov110_02297778::func_ov110_022952b0(void *pad, s32 mode) {
    s32 r = unk_f5;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                func_ov110_02294d78(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    func_ov110_02294d78(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        } else {
            unk_f5 = r + 0x19;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        }
    }
}

void Unk_ov110_02297778::func_ov110_022953b4() {
    unk_f9 = 1;
    func_ov110_02295508();
    unk_22dc.func_ov002_02202064(0);
    func_ov002_02200a58(0x13);
}

s32 Unk_ov110_02297778::func_ov110_022953e0() {
    switch (unk_f9) {
    case 0:
        func_ov110_02295488();
        break;
    case 1:
    default:
        func_ov110_02296300();
        break;
    }
}

void Unk_ov110_02297778::func_ov110_02295404(u8 v) {
    unk_21a0.func_ov002_022006e4(1);
    unk_f8 = unk_8d;
    unk_f7 = v;
    unk_2278.func_ov002_02202d00(6);
    func_ov002_02200a58(0xe);
}

void Unk_ov110_02297778::func_ov110_0229544c(u8 v) {
    unk_21a0.func_ov002_022006e4(1);
    unk_f7 = v;
    unk_2278.func_ov002_02202d00(5);
    func_ov002_02200a58(0xd);
}

void Unk_ov110_02297778::func_ov110_02295488() {
    unk_2278.func_ov002_02202d00(4);
    func_ov002_02200a58(0xb);
}

void Unk_ov110_02297778::func_ov110_022954a8() {
    unk_2278.func_ov002_02202af0();
    func_ov002_02200a58(0xa);
}

void Unk_ov110_02297778::func_ov110_022954c8() {
    unk_2278.func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov110_02297778::func_ov110_022954e8() {
    unk_2278.func_ov002_02202a78();
    unk_2278.vfunc_0c();
}

void Unk_ov110_02297778::func_ov110_02295508() {
    s32 a = func_ov110_022956d4();
    s32 b = func_ov110_022956c4();
    unk_2278.func_ov002_02202a40(a, b);
    unk_2278.func_ov002_02202d00(1);
}

void Unk_ov110_02297778::func_ov110_0229553c() {
    unk_fa = 0;
    s32 a = func_ov002_022014a4(&unk_22dc);
    s32 b = func_ov002_02201498(&unk_22dc, unk_fa);
    unk_2278.func_ov002_02202a40(a, b);
    unk_2278.func_ov002_02202d00(7);
}
