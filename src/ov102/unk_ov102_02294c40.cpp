#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u16 data_ov102_0229741c[];
extern u8 data_ov102_02297580[];
void func_0200402c(u32 v);
BOOL func_02087dac(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02088730(u32 a, void *p, u32 b, u32 c, s32 d, u32 e, u32 f);
void func_0206fb9c(void *o, u32 id, u32 a, u32 b, u32 x, u32 y, s32 flag);
void func_0206f9fc(void *o, u32 v);
void func_0206fab4(void *o, s32 a, s32 b);
void func_0206fc44(void *o);
void func_0206ecf8(u32 v);
void *func_0209750c();
void func_020979b0();
void *func_02039d74();
void func_02116048(void *, void *, u32);
void func_0208d538(void *p, u32 v);
void func_ov002_022006e4(void *p, u32 v);
void func_ov002_02202b68(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202d00(void *p, u32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_ov102_sub_020e0488 {
public:
    ~Unk_ov102_sub_020e0488();
    u32 unk_00[0x40 / 4];
};

class Unk_ov099_sub_022043e8 {
public:
    ~Unk_ov099_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov099_sub_02202640 {
public:
    virtual ~Unk_ov099_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov099_sub_022027c4 {
public:
    ~Unk_ov099_sub_022027c4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov099_sub_022007e8 {
public:
    ~Unk_ov099_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

class Unk_ov099_sub_02292d50 {
public:
    ~Unk_ov099_sub_02292d50();
    u32 unk_00[0x160 / 4];
};

class Unk_ov099_sub_0229469c {
public:
    ~Unk_ov099_sub_0229469c();
    u32 unk_00[0x28 / 4];
};

class Unk_ov099_sub_02293a60 {
public:
    ~Unk_ov099_sub_02293a60();
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

// Vtable 0x02297520
class Unk_ov102_02297520 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov102_02297520();

    void func_ov102_02294d48(u32 mask);
    void func_ov102_02294d58(u32 mask);
    BOOL func_ov102_02294d68(u32 mask);
    s32 func_ov102_02294d80();
    void func_ov102_02294dd8();
    BOOL func_ov102_02294e24(s32 x, s32 y);
    void func_ov102_02294e7c();
    void func_ov102_02294f20(s32 v);
    void func_ov102_02294f80(s32 v);
    Unk_ov102_sub_020e0488 *func_ov102_02294fc4();
    void func_ov102_02294ff4();
    BOOL func_ov102_02295020(void *pad, u32 b);
    void func_ov102_02295144(void *pad, u32 b);
    void func_ov102_02295200(void *pad);
    void func_ov102_02295250(void *pad, u32 b);
    void func_ov102_0229537c(void *pad, u32 b);
    void func_ov102_02295470(u32 v);
    void func_ov102_022954bc(u32 v);
    void func_ov102_022954f8();
    void func_ov102_02295518();
    void func_ov102_02295538();

    // out-of-range callees (declarations only)
    void func_ov102_02295610();
    BOOL func_ov102_02295ef8(u32 idx);
    BOOL func_ov102_02295f04(u32 idx);
    BOOL func_ov102_02295f14(u32 idx);
    BOOL func_ov102_02295f24(u32 idx);

    /* 0x91 */ u8 unk_91[0xcc - 0x91];
    /* 0xcc */ Unk_ov099_sub_02293a60 unk_cc;
    /* 0xb2c */ Unk_ov099_sub_0229469c unk_b2c;
    /* 0xb54 */ Unk_ov099_sub_02292d50 unk_b54;
    /* 0xcb4 */ u32 unk_cb4[0x1480 / 4];
    /* 0x2134 */ Unk_ov099_sub_022007e8 unk_2134;
    /* 0x21f4 */ Unk_ov099_sub_022027c4 unk_21f4;
    /* 0x220c */ Unk_ov099_sub_02202640 unk_220c;
    /* 0x2270 */ Unk_ov099_sub_022043e8 unk_2270;
    /* 0x2378 */ Unk_ov102_sub_020e0488 unk_2378[2];
    /* 0x23f8 */ u32 unk_23f8;
    /* 0x23fc */ u32 unk_23fc;
    /* 0x2400 */ u32 unk_2400;
    /* 0x2404 */ u32 unk_2404[4];
    /* 0x2414 */ u8 unk_2414[0xb4];
    /* 0x24c8 */ u8 unk_24c8[9];
    /* 0x24d1 */ u8 unk_24d1;
    /* 0x24d2 */ u8 unk_24d2;
    /* 0x24d3 */ u8 unk_24d3;
    /* 0x24d4 */ u8 unk_24d4;
    /* 0x24d5 */ u8 unk_24d5;
    /* 0x24d6 */ u8 unk_24d6;
};

// ---------------------------------------------------------------------------------------------

Unk_ov102_02297520::~Unk_ov102_02297520() {}

void Unk_ov102_02297520::func_ov102_02294d48(u32 mask) { unk_23f8 = unk_23f8 & ~mask; }

void Unk_ov102_02297520::func_ov102_02294d58(u32 mask) { unk_23f8 = unk_23f8 | mask; }

BOOL Unk_ov102_02297520::func_ov102_02294d68(u32 mask) {
    if (unk_23f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov102_02297520::func_ov102_02294d80() {
    s32 dir = 0;
    u32 keys = data_021f47d8[1];
    if (keys & 0x200) {
        dir = -1;
    } else if (keys & 0x100) {
        dir = 1;
    }
    if (dir) {
        dir = dir + unk_24d6;
        if (dir < 0) {
            dir = 5;
        } else if (dir >= 6) {
            dir = 0;
        }
        unk_24d6 = dir;
        func_ov102_02294dd8();
    }
    return 0;
}

void Unk_ov102_02297520::func_ov102_02294dd8() {
    func_ov002_022006e4(&unk_2134, 1);
    func_ov102_02295610();
    unk_8c = 7;
    func_ov002_02200a60(1);
    func_0200402c(data_ov102_0229741c[unk_24d6]);
    func_ov102_02294d58(0x40);
}

BOOL Unk_ov102_02297520::func_ov102_02294e24(s32 x, s32 y) {
    s32 i, j;
    s32 px = x - 0x80;
    s32 py = y - 0x60;
    for (i = 0, j = 0; i < 6; i++, j += 3) {
        if (i != unk_24d6) {
            if (func_02087dac(data_ov102_02297580 + j * 8, px, py, 2, 2)) {
                unk_24d6 = i;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov102_02297520::func_ov102_02294e7c() {
    u32 p0 = unk_2400 + 0x60;
    s32 i = 0, j = 0;
    s32 m = -1;
    u32 z0 = 0, z1 = 0, z2 = 0;
    do {
        u32 p;
        u32 q;
        if (i == unk_24d6) {
            p = p0 + 2;
            q = 4;
        } else {
            p = p0;
            q = 5;
        }
        func_02088730(1, data_ov102_02297580 + j * 8, 0x80, p, m, 1, z0);
        func_02088730(1, data_ov102_02297580 + (j + 1) * 8, 0x80, p, q, 1, z1);
        func_02088730(1, data_ov102_02297580 + (j + 2) * 8, 0x80, p0, m, 1, z2);
        i++;
        j += 3;
    } while (i < 6);
}

void Unk_ov102_02297520::func_ov102_02294f20(s32 v) {
    func_0200402c(0x27);
    if (v) {
        unk_24d5 = 5;
    } else {
        unk_24d5 = 0;
    }
    func_ov002_02200a58(0xf);
    func_ov102_02294f80(1);
    func_0206ecf8(1);
    func_0209750c();
    func_020979b0();
    func_02116048(unk_2414, (u8 *)func_02039d74(), 0xb4);
}

void Unk_ov102_02297520::func_ov102_02294f80(s32 v) {
    u32 c = 1;
    if (v) {
        c = 0xf;
    }
    Unk_ov102_sub_020e0488 *o = func_ov102_02294fc4();
    func_0206fb9c(o, 4, 0x1d6, 6, c, 9, 0);
    func_0206f9fc(o, 0x88);
    func_0206fab4(o, 1, 0);
}

Unk_ov102_sub_020e0488 *Unk_ov102_02297520::func_ov102_02294fc4() {
    if (unk_24d4 >= 2) {
        return &unk_2378[1];
    }
    unk_24d4 = unk_24d4 + 1;
    return &unk_2378[unk_24d4 - 1];
}

void Unk_ov102_02297520::func_ov102_02294ff4() {
    s32 i;
    unk_24d4 = 0;
    for (i = 0; i < 2; i++) {
        func_0206fc44(&unk_2378[i]);
    }
}

BOOL Unk_ov102_02297520::func_ov102_02295020(void *pad, u32 b) {
    u8 old = unk_24d1;
    func_ov102_02294d48(0x30);
    func_ov102_02294d48(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov102_02295f24(unk_24d1)) {
        func_ov102_0229537c(pad, b);
    } else if (func_ov102_02295f14(unk_24d1)) {
        func_ov102_02295250(pad, b);
        if (b == 1) {
            if (func_ov102_02295f04(unk_24d1)) {
                func_ov002_02202d00(&unk_220c, 1);
            }
        }
    } else if (func_ov102_02295ef8(unk_24d1)) {
        func_ov102_02295200(pad);
    } else if (func_ov102_02295f04(unk_24d1)) {
        func_ov102_02295144(pad, b);
        if (b == 1) {
            if (!func_ov102_02295f04(unk_24d1)) {
                func_0208d538(&unk_220c, 4);
            }
        }
    }
    if (func_ov102_02295ef8(unk_24d1) != func_ov102_02295ef8(old)) {
        if (func_ov102_02295ef8(unk_24d1)) {
            func_ov002_02202ca0(&unk_220c);
        } else {
            func_ov002_02202c40(&unk_220c);
        }
        func_ov102_02294d58(0x100);
    }
    if (old != unk_24d1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov102_02297520::func_ov102_02295144(void *pad, u32 b) {
    s32 col = unk_24d1 - 0x1e;
    s32 row = 0;
    while (col >= 3) {
        col -= 3;
        row++;
    }
    if (func_ov002_0220125c(pad)) {
        if (col < 2) {
            unk_24d1 = unk_24d1 + 1;
        } else {
            func_ov102_02294d58(0x20);
            unk_24d1 = row * 5 + 0xf;
            return;
        }
    } else if (func_ov002_0220126c(pad)) {
        if (col > 0) {
            unk_24d1 = unk_24d1 - 1;
        } else {
            unk_24d1 = row * 5 + 0x13;
            return;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 3;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (row < 1) {
            unk_24d1 = unk_24d1 + 3;
        } else if (b != 1) {
            unk_24d1 = 0x24;
        }
    }
}

void Unk_ov102_02297520::func_ov102_02295200(void *pad) {
    if (func_ov002_0220128c(pad)) {
        unk_24d1 = 0x21;
    }
    if (func_ov002_0220125c(pad)) {
        unk_24d1 = 0;
        func_ov102_02294d58(0x20);
    } else if (func_ov002_0220126c(pad)) {
        unk_24d1 = 4;
    }
}

void Unk_ov102_02297520::func_ov102_02295250(void *pad, u32 b) {
    s32 col = unk_24d1 - 0xf;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                switch (row) {
                case 0:
                    unk_24d1 = 0x20;
                    break;
                case 1:
                    unk_24d1 = 0x23;
                    break;
                case 2:
                default:
                    if (b == 1) {
                        unk_24d1 = unk_24d1 + 4;
                    } else {
                        unk_24d1 = 0x24;
                    }
                    break;
                }
                func_ov102_02294d58(0x10);
                return;
            } else {
                unk_24d1 = unk_24d1 - 1;
                col = col - 1;
                goto next;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                switch (row) {
                case 0:
                    unk_24d1 = 0x1e;
                    break;
                case 1:
                    unk_24d1 = 0x21;
                    break;
                case 2:
                default:
                    if (b == 1) {
                        unk_24d1 = unk_24d1 - 4;
                        func_ov102_02294d58(0x20);
                    } else {
                        unk_24d1 = 0x24;
                    }
                    break;
                }
                return;
            }
            unk_24d1 = unk_24d1 + 1;
            col = col + 1;
        }
    }
next:
    if (func_ov002_0220128c(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 5;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (row < 2) {
            unk_24d1 = unk_24d1 + 5;
        } else {
            unk_24d1 = col;
        }
    }
}

void Unk_ov102_02297520::func_ov102_0229537c(void *pad, u32 b) {
    s32 col = unk_24d1;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || row == 0) {
            if (col == 0) {
                if (b == 1) {
                    unk_24d1 = unk_24d1 + 4;
                } else {
                    unk_24d1 = 0x24;
                }
                func_ov102_02294d58(0x10);
                return;
            } else {
                unk_24d1 = unk_24d1 - 1;
                col = col - 1;
                goto next;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (col == 4) {
                if (b == 1) {
                    unk_24d1 = unk_24d1 - 4;
                    func_ov102_02294d58(0x20);
                } else {
                    unk_24d1 = 0x24;
                }
                return;
            }
            unk_24d1 = unk_24d1 + 1;
            col = col + 1;
        }
    }
next:
    if (func_ov002_0220128c(pad)) {
        if (row > 0) {
            unk_24d1 = unk_24d1 - 5;
        } else {
            unk_24d1 = col + 0x19;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (row < 2) {
            unk_24d1 = unk_24d1 + 5;
        }
    }
}

void Unk_ov102_02297520::func_ov102_02295470(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_24d3 = unk_8d;
    unk_24d2 = v;
    func_ov002_02202d00(&unk_220c, 6);
    func_ov002_02200a58(0xb);
}

void Unk_ov102_02297520::func_ov102_022954bc(u32 v) {
    func_ov002_022006e4(&unk_2134, 1);
    unk_24d2 = v;
    func_ov002_02202d00(&unk_220c, 5);
    func_ov002_02200a58(0xa);
}

void Unk_ov102_02297520::func_ov102_022954f8() {
    func_ov002_02202d00(&unk_220c, 4);
    func_ov002_02200a58(8);
}

void Unk_ov102_02297520::func_ov102_02295518() {
    func_ov002_02202af0(&unk_220c);
    func_ov002_02200a58(7);
}

void Unk_ov102_02297520::func_ov102_02295538() {
    func_ov002_02202b68(&unk_220c);
    func_ov002_02200a58(6);
}
