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
class Unk_ov100_02297778 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov100_02297778();

    void func_ov100_02294d60(u32 mask);
    void func_ov100_02294d70(u32 mask);
    BOOL func_ov100_02294d80(u32 mask);
    BOOL func_ov100_02294d98();
    void func_ov100_02294de4(u8 v);
    s32 func_ov100_02294e50(u16 *p);
    void func_ov100_02294e80();
    void func_ov100_02294fac();
    void func_ov100_02294fe8(s32 flag);
    void func_ov100_0229502c(s32 flag);
    void *func_ov100_02295070();
    void func_ov100_022950a0();
    BOOL func_ov100_022950cc(void *pad, s32 mode);
    void func_ov100_0229519c(void *pad);
    void func_ov100_02295218(void *pad, s32 mode);
    void func_ov100_0229530c(void *pad, s32 mode);
    void func_ov100_02295400();
    s32 func_ov100_02295430();
    void func_ov100_02295454(u8 v);
    void func_ov100_022954a0(u8 v);
    void func_ov100_022954dc();
    void func_ov100_022954fc();
    void func_ov100_0229551c();
    void func_ov100_0229553c();

    // out-of-range callees (declarations only)
    void func_ov100_0229555c();
    void func_ov100_02296370();
    BOOL func_ov100_022960cc(u32 v);
    BOOL func_ov100_022960e0(u32 v);
    BOOL func_ov100_022960f0(u32 v);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 unk_94[0x38];
    /* 0xcc */ Unk_ov094_02293a60 unk_cc;
    /* 0xb2c */ Unk_ov094_0229469c unk_b2c;
    /* 0xb54 */ Unk_ov094_02292d50 unk_b54;
    /* 0x2134 */ Unk_ov002_022007e8 unk_2134;
    /* 0x21f4 */ Unk_ov002_022027c4 unk_21f4;
    /* 0x220c */ Unk_ov002_02202640 unk_220c;
    /* 0x2270 */ Unk_ov002_02202454 unk_2270;
    /* 0x2570 */ Unk_ov002_022043e8 unk_2570;
    /* 0x2678 */ Unk_0206fca8 unk_2678[2];
    /* 0x26f8 */ u32 unk_26f8;
    /* 0x26fc */ u8 unk_26fc[0x18];
    /* 0x2714 */ u16 unk_2714[15];
    /* 0x2732 */ u16 unk_2732[15];
    /* 0x2750 */ u8 unk_2750[2];
    /* 0x2752 */ s16 unk_2752;
    /* 0x2754 */ u8 unk_2754[5];
    /* 0x2759 */ u8 unk_2759;
    /* 0x275a */ u8 unk_275a;
    /* 0x275b */ u8 unk_275b;
    /* 0x275c */ u8 unk_275c;
    /* 0x275d */ u8 unk_275d;
    /* 0x275e */ u8 unk_275e;
    /* 0x275f */ u8 unk_275f;
    /* 0x2760 */ u8 unk_2760;
};

// ---------------------------------------------------------------------------------------------

Unk_ov100_02297778::~Unk_ov100_02297778() {}

void Unk_ov100_02297778::func_ov100_02294d60(u32 mask) { unk_26f8 &= ~mask; }

void Unk_ov100_02297778::func_ov100_02294d70(u32 mask) { unk_26f8 |= mask; }

BOOL Unk_ov100_02297778::func_ov100_02294d80(u32 mask) {
    if (unk_26f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov100_02297778::func_ov100_02294d98() {
    if (func_0206ed18() == 0) {
        return TRUE;
    }
    if (func_ov100_02294d80(8) == 0) {
        return TRUE;
    }
    if (func_02072e44(data_020cbb18)) {
        if (func_020740a0(unk_2752) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_ov100_02297778::func_ov100_02294de4(u8 v) {
    u8 buf[0x24];
    if (func_02072e44(data_020cbb18)) {
        func_ov100_02294d70(8);
        buf[0] = v;
        func_02116048(unk_2714, &buf[1], 0x1e);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 0x1f);
        func_02072824(g, 0x16, 4);
        unk_2752 = func_02072e34(g);
    }
}

s32 Unk_ov100_02297778::func_ov100_02294e50(u16 *p) {
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

void Unk_ov100_02297778::func_ov100_02294e80() {
    func_ov100_02294d60(8);
    func_0200402c(0x27);
    unk_2760 = 5;
    func_ov002_02200a58(0x15);
    func_ov100_0229502c(1);
    s32 n = func_ov100_02294e50(unk_2714);
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206eba4(unk_2714);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (unk_2714[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (unk_2714[i] == unk_2732[j]) {
                        unk_2732[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = func_ov100_02294e50(unk_2732);
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206ed2c((u8)n);
            func_0206eba4(unk_2732);
            func_02116048(unk_2714, data_021ed210, 0x1e);
            func_ov100_02294de4(3);
        }
        break;
    }
    case 0x20:
        func_02116048(unk_2714, data_021ed22e, 0x1e);
        func_ov100_02294de4(4);
        func_0206ecf8(1);
        break;
    }
}

void Unk_ov100_02297778::func_ov100_02294fac() {
    func_ov100_02294d60(8);
    func_0200402c(0x28);
    unk_2760 = 5;
    func_ov002_02200a58(0x15);
    func_ov100_02294fe8(1);
    func_0206ecf8(0);
    func_0206ebc0();
}

void Unk_ov100_02297778::func_ov100_02294fe8(s32 flag) {
    s32 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov100_02295070();
    func_0206fb9c(p, 4, 0x1d6, 6, v, 9, 0);
    func_0206f9fc(p, 0x65);
    func_0206fab4(p, 1, 0);
}

void Unk_ov100_02297778::func_ov100_0229502c(s32 flag) {
    s32 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov100_02295070();
    func_0206fb9c(p, 4, 0x1ca, 6, v, 9, 0);
    func_0206f9fc(p, 0x21);
    func_0206fab4(p, 1, 0);
}

void *Unk_ov100_02297778::func_ov100_02295070() {
    if (unk_275f >= 2) {
        return &unk_2678[1];
    }
    unk_275f++;
    return &unk_2678[unk_275f - 1];
}

void Unk_ov100_02297778::func_ov100_022950a0() {
    s32 i;
    unk_275f = 0;
    for (i = 0; i < 2; i++) {
        func_0206fc44(&unk_2678[i]);
    }
}

BOOL Unk_ov100_02297778::func_ov100_022950cc(void *pad, s32 mode) {
    u8 old = unk_2759;
    func_ov100_02294d60(0x30);
    func_ov100_02294d60(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov100_022960f0(unk_2759)) {
        func_ov100_0229530c(pad, mode);
    } else if (func_ov100_022960e0(unk_2759)) {
        func_ov100_02295218(pad, mode);
    } else if (func_ov100_022960cc(unk_2759)) {
        func_ov100_0229519c(pad);
    }
    BOOL a = func_ov100_022960cc(unk_2759);
    if (a != func_ov100_022960cc(old)) {
        if (func_ov100_022960cc(unk_2759)) {
            unk_220c.func_ov002_02202ca0();
        } else {
            unk_220c.func_ov002_02202c40();
        }
        func_ov100_02294d70(0x100);
    }
    if (old != unk_2759) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov100_02297778::func_ov100_0229519c(void *pad) {
    if (func_ov002_0220128c(pad)) {
        unk_2759 = 0x1e;
    } else if (func_ov002_0220127c(pad)) {
        unk_2759 = 0x1f;
    }
    if (func_ov002_0220125c(pad)) {
        if (unk_2759 == 0x1e) {
            unk_2759 = 0x19;
        } else {
            unk_2759 = 0;
        }
        func_ov100_02294d70(0x20);
    } else if (func_ov002_0220126c(pad)) {
        if (unk_2759 == 0x1e) {
            unk_2759 = 0x1d;
        } else {
            unk_2759 = 4;
        }
    }
}

void Unk_ov100_02297778::func_ov100_02295218(void *pad, s32 mode) {
    s32 r = unk_2759 - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_2759 += 4;
                } else {
                    unk_2759 = 0x1e;
                }
                func_ov100_02294d70(0x10);
                return;
            }
            unk_2759--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_2759 -= 4;
                    func_ov100_02294d70(0x20);
                } else {
                    unk_2759 = 0x1e;
                }
                return;
            }
            unk_2759++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_2759 -= 5;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_2759 += 5;
        } else {
            unk_2759 = r;
        }
    }
}

void Unk_ov100_02297778::func_ov100_0229530c(void *pad, s32 mode) {
    s32 r = unk_2759;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_2759 += 4;
                } else {
                    unk_2759 = 0x1f;
                }
                func_ov100_02294d70(0x10);
                return;
            }
            unk_2759--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_2759 -= 4;
                    func_ov100_02294d70(0x20);
                } else {
                    unk_2759 = 0x1f;
                }
                return;
            }
            unk_2759++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_2759 -= 5;
        } else {
            unk_2759 = r + 0x19;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_2759 += 5;
        }
    }
}

void Unk_ov100_02297778::func_ov100_02295400() {
    unk_275d = 1;
    func_ov100_0229555c();
    unk_2270.func_ov002_02202064(0);
    func_ov002_02200a58(0x13);
}

s32 Unk_ov100_02297778::func_ov100_02295430() {
    switch (unk_275d) {
    case 0:
        func_ov100_022954dc();
        break;
    case 1:
    default:
        func_ov100_02296370();
        break;
    }
}

void Unk_ov100_02297778::func_ov100_02295454(u8 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_275c = unk_8d;
    unk_275b = v;
    unk_220c.func_ov002_02202d00(6);
    func_ov002_02200a58(0xe);
}

void Unk_ov100_02297778::func_ov100_022954a0(u8 v) {
    unk_2134.func_ov002_022006e4(1);
    unk_275b = v;
    unk_220c.func_ov002_02202d00(5);
    func_ov002_02200a58(0xd);
}

void Unk_ov100_02297778::func_ov100_022954dc() {
    unk_220c.func_ov002_02202d00(4);
    func_ov002_02200a58(0xb);
}

void Unk_ov100_02297778::func_ov100_022954fc() {
    unk_220c.func_ov002_02202af0();
    func_ov002_02200a58(0xa);
}

void Unk_ov100_02297778::func_ov100_0229551c() {
    unk_220c.func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov100_02297778::func_ov100_0229553c() {
    unk_220c.func_ov002_02202a78();
    unk_220c.vfunc_0c();
}
