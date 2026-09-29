#include "types.h"

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};

struct Unk_0200e2c0 {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x10];
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(u32 a, u32 b, u32 c);
};

struct Unk_020d6df4_Vec { s32 x, y, z; };

struct Unk_020d6df4_Data {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_0205dfa4_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_0205dfa4_Base {
    u8 pad_00[0x9c];
};

struct Unk_0205dfa4 : Unk_0205dfa4_Base, Unk_0205dfa4_Sub {
};

extern "C" {
extern s16 data_02135f44[];
extern u8 data_020e416c;
extern u8 data_021c3cc0;
extern u8 data_ov003_022523c8;
extern Unk_020d6df4_Data *data_020cbb18;
extern u8 *data_021c1b3c;

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc538(s32 a);
s32 func_020e9650(void *a, void *b);
s32 func_020af3bc(void *out, void *a, void *b, s32 c, s32 d);
Unk_0205dfa4 &func_0205dfa4(void *p);
void func_02053f20(void *p);
BOOL func_020729bc(void *p, s32 v);
BOOL func_020b50e8();
s32 func_020b52f8();
s32 func_020b52d0();
s32 func_020b5184();
s32 func_020b4880();
void func_020b78c4();
s32 func_020b15ec();
void func_0201a0f4(void *p);
void func_02003ecc(void *p);
s32 func_0203081c(void *p, s32 a, s32 b);
void func_0203d76c();
void func_02035200(void *p);
void func_020e9b70();
s32 func_020eaf18();
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
s32 func_020952c8();
s32 func_02095180(s32 a, s32 b);
s32 func_02095574(void *p, s32 a, s32 b);
void func_02090330(s32 a, void *b, void *c, s32 d);
void func_02094574(s32 a, s32 b, s32 c);
s32 func_02010d68(s32 a, s32 b);
s32 func_02010d50(s32 a, s32 b);
void func_02010d98(void *p, s32 a);
void func_02010d74(void *p, s32 a);
void func_02010e48(void *p, s32 a);
void func_ov003_022247b8(void *t, s32 a, s32 b, s32 c);
void func_ov003_02210d54(void *t, s32 a, s32 b);
void func_ov003_02207c08(void *t, s32 a, s32 b, s32 c);
void func_ov003_022107a8(void *t, s32 a, s32 b);
void func_ov003_0220798c(void *t, s32 a, s32 b);
void func_ov004_0221ff68(void *t, s32 a, s32 b);
void func_ov004_0221fe30(void *t, s32 a, s32 b);
void func_ov004_022217c4(void *t, s32 a, s32 b, s32 c);
void func_ov004_0221f5f4(void *t, void *a, s32 b, s32 c);
void func_ov004_0221ee1c(void *t, void *a, s32 b, s32 c);
void func_0200cb90(u8 *p, u32 v);
void func_0200ced8(u16 *p, u32 v);
}

struct Unk_020d6df4_7d0 {
    s32 unk_00;
    void func_0200cb48();
};

class Unk_020d6df4 {
public:
    void func_0200c778();
    void func_0200c7dc();
    BOOL func_0200c900();
    void func_0200ca60();
    void func_0200caf4();
    void func_0200caf8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cb50(u32 a, u32 b, u32 c);
    void func_0200cb94();
    void func_0200cc08(u8 *p);
    void func_0200cc6c();
    BOOL func_0200cd54();
    void func_0200cdfc();
    void func_0200ce28(u32 a);
    void func_0200ce3c(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200ce98(u32 a, u32 b, u32 c);
    void func_0200cedc();
    void func_0200cee0();
    void func_0200ceec(u32 a);
    void func_0200cef8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cf04(u32 a, u32 b);
    void func_0200cf3c();
    void func_0200cf5c(s32 *p);

    // callees
    void func_02005ee0(s32 a, u32 b);
    void func_02010a44(s32 a);
    void func_02010a58(void *p);
    void func_02010a34(void *p);
    void func_02010380(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200f32c();
    s32 func_020100d0();
    s32 func_0200d5fc();
    void func_020109c4();
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void func_0200e8d0();
    void func_0200e870();
    BOOL func_0200e248(Unk_0200e2c0 *m);
    BOOL func_0200e35c(u8 *a, s32 *x, s32 *z, s16 *b);
    BOOL func_0200e2f0(s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
    s32 func_0200f5b0();
    BOOL func_0200f0fc();
    BOOL func_0200ff08();
    void func_02008770(s32 a, s32 b, s32 c);
    void func_0200ec1c(s32 id);
    void func_0200ec30(s32 id);
    BOOL func_0200ec44(s32 id);
    void func_0200ed48();
    s32 func_0200d2b4();
    s32 func_02007c08(s32 a);
    s32 func_0200e764();
    void func_0200bd60(u32 a, u32 b, s32 c);

    /* 0x000 */ u8 pad_000[0x8];
    /* 0x008 */ u32 unk_08;
    /* 0x00c */ u8 pad_00c[0x5c - 0xc];
    /* 0x05c */ Unk_020d6df4_Vec unk_5c;
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[0x98 - 0x90];
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ u8 pad_09c[0x130 - 0x9c];
    /* 0x130 */ s32 unk_130;
    /* 0x134 */ s16 unk_134;
    /* 0x136 */ u8 pad_136[0x164 - 0x136];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ u8 unk_168;
    /* 0x169 */ u8 pad_169[0x230 - 0x169];
    /* 0x230 */ u8 unk_230[4];
    /* 0x234 */ u8 pad_234[0x2d0 - 0x234];
    /* 0x2d0 */ s32 unk_2d0;
    /* 0x2d4 */ u8 pad_2d4[0x2dc - 0x2d4];
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ u8 pad_2e0[0x59c - 0x2e0];
    /* 0x59c */ u8 unk_59c[4];
    /* 0x5a0 */ u8 pad_5a0[0x6c4 - 0x5a0];
    /* 0x6c4 */ u8 unk_6c4[0xc];
    /* 0x6d0 */ u8 unk_6d0[0x30];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_020d6df4_7d0 unk_7d0;
    /* 0x7d4 */ u8 pad_7d4[0x7ec - 0x7d4];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[4];
    /* 0x7f4 */ s32 unk_7f4;
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x838 - 0x800];
    /* 0x838 */ u8 unk_838[0x44];
    /* 0x87c */ u8 unk_87c[0x8c];
    /* 0x908 */ u8 unk_908[0x18];
    /* 0x920 */ void *unk_920;
    /* 0x924 */ u8 pad_924[0x92e - 0x924];
    /* 0x92e */ u8 unk_92e;
};

void Unk_020d6df4::func_0200c778() {
    if (unk_700 != 2) {
        func_02005ee0(0x93, 1);
    } else {
        s32 t = unk_98 - 0x53f;
        if (t < 0) {
            func_02005ee0(0x93, 1);
        }
        s32 a = func_01ffc5a4(t, 0x1a3);
        s32 b = func_01ffcb0c(0xc17000, a);
        func_02010a44((b << 4) >> 16);
    }
}

void Unk_020d6df4::func_0200c7dc() {
    s32 v, c, r4;
    Unk_020d6df4_Vec out;
    s16 sx;
    v = unk_98;
    Unk_020d6df4_Vec old;
    Unk_020d6df4_Vec *pp = &unk_5c;
    old.x = pp->x;
    old.y = pp->y;
    old.z = pp->z;
    BOOL r6 = func_020af3bc(&out, &sx, &c, unk_130, unk_134);
    if (r6) {
        pp = &unk_5c;
        pp->x = out.x;
        pp->y = out.y;
        pp->z = out.z;
        func_02010a58(&sx);
        v = func_020e9650(&unk_5c, &old);
        func_02010a34(&v);
        v = c;
        v = v << 2;
    }
    r4 = func_01ffcb0c(v, 0x3ae1);
    if (r4 <= unk_2d0) {
        unk_2dc = r4;
        Unk_0205dfa4_Sub &p = func_0205dfa4(unk_59c);
        if (r4 <= p.unk_04) {
            Unk_0205dfa4_Sub &q = func_0205dfa4(unk_59c);
            q.unk_10 = r4;
        }
    }
    if (r6) {
        if (unk_700 != 3) {
            func_02010380(3, 3, 3);
        }
    } else if (v > 0x53f) {
        if (unk_700 != 2) {
            func_02010380(2, 3, 3);
        }
    } else if (unk_700 != 1) {
        func_02010380(1, 3, 3);
    }
    func_02053f20(unk_230);
    func_0200f32c();
}

BOOL Unk_020d6df4::func_0200c900() {
    u8 a;
    s16 b, c, e;
    s32 x, z, v;
    if (!func_0200e35c(&a, &x, &z, &b)) {
        return TRUE;
    }
    if (a != func_020b50e8()) {
        return TRUE;
    }
    s32 dx = x - unk_5c.x;
    s32 dz = z - unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    if (!func_0200e2f0(dx, dz, d2, b, &c)) {
        return TRUE;
    }
    e = unk_8e;
    func_02010d98(&e, c);
    func_02010a58(&e);
    v = unk_98;
    s32 r6 = func_01ffc538(d2);
    s32 m = r6;
    if (r6 > 0x6e2) {
        m = 0x6e2;
    }
    s32 s = data_02135f44[((u16)(s16)(e - c) >> 4) * 2 + 1];
    if (s < 0) {
        s = 0;
    }
    s32 r4 = func_01ffcb0c(m, s);
    if (r6 >= 0x2666) {
        if (r6 >= 0xe000) {
            unk_5c.x = x;
            unk_5c.z = z;
            unk_8e = b;
            return TRUE;
        }
    } else {
        s32 t = func_01ffcb0c(r6 - 0x108, func_01ffc5a4(0x5da, 0x255e)) + 0x108;
        if (t < 0x108) {
            t = 0x108;
        }
        if (r4 > t) {
            r4 = t;
        }
    }
    if (v < r4) {
        v = func_02010d68(v, r4);
    } else if (v > r4) {
        v = func_02010d50(v, r4);
    }
    func_02010a34(&v);
    return FALSE;
}

void Unk_020d6df4::func_0200ca60() {
    s32 *r6 = &unk_7d0.unk_00;
    s32 r4 = func_020100d0();
    s32 cur = *r6;
    if (cur < r4) {
        *r6 = func_02010d68(cur, r4);
    } else if (cur > r4) {
        *r6 = func_02010d50(cur, r4);
    }
    s32 r7 = func_0200d5fc();
    s16 buf = unk_8e;
    if (r4 > 0) {
        func_02010d98(&buf, r7);
        func_02010a58(&buf);
    }
    s32 r = func_01ffcb0c(*r6, data_02135f44[((u16)(s16)(buf - r7) >> 4) * 2 + 1]);
    if (r < 0) {
        r = -r;
    }
    s32 t = r;
    func_02010a34(&t);
}

void Unk_020d6df4::func_0200caf4() {
}

void Unk_020d6df4::func_0200caf8(Unk_02006d14_Item *item, u32 old) {
    u8 *p = &item->unk_0c[0];
    Unk_020d6df4_7d0 *q = &unk_7d0;
    func_020103b4(1, 3, 3);
    if (func_0200f5b0() == 4) {
        func_0205e1a0(unk_59c, 1, 3, 0);
    }
    q->func_0200cb48();
    if (*p != 0) {
        q->unk_00 = 0x456;
    }
}

BOOL Unk_020d6df4::func_0200cb50(u32 a, u32 b, u32 c) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(3, b, c);
    func_0200cb90(&m.unk_0c[0], a);
    BOOL r = func_0200e248(&m);
    return r;
}

void Unk_020d6df4::func_0200cb94() {
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_020109c4();
        func_02010914();
        func_0201071c();
        func_0201065c();
        func_0200cc6c();
    } else {
        u8 b = func_0200cd54();
        func_02010914();
        func_0200e8d0();
        func_0201065c();
        func_0200cc08(&b);
    }
    *(u8 *)&unk_7d0 = 0;
}

void Unk_020d6df4::func_0200cc08(u8 *p) {
    if (*p != 0) {
        func_0200cb50(0, 1, -1);
    }
    if (unk_7f4 == 0) {
        if (func_02095180(0x1b, 4)) {
            unk_7f4 = 1;
        } else {
            s32 buf;
            if (func_02095574(&buf, -1, unk_7fc)) {
                if (buf == 2 || buf == 0x40) {
                    unk_7f4 = 1;
                }
            }
        }
    }
}

void Unk_020d6df4::func_0200cc6c() {
    s16 buf;
    s32 r6 = func_020100d0();
    s32 r4 = 0;
    if (func_020b52f8()) {
        BOOL b = data_021c3cc0 == 2 ? TRUE : FALSE;
        if (b) {
            if (!(*(u8 *)func_020952c8() & 8)) {
                if (data_ov003_022523c8) {
                    *(u8 *)func_020952c8() |= 8;
                    func_02008770(unk_8e, 6, -1);
                    return;
                }
            }
        }
    }
    if (r6 > 0) {
        u32 v = *(u8 *)&unk_7d0;
        if (r6 < 0x53f) {
            v = 0;
        }
        r4 = func_0200cb50(v, 1, -1);
    }
    if (!func_0200ff08()) {
        r4 |= func_0200f0fc();
    } else {
        r4 = 1;
    }
    if (r4) {
        s32 h = unk_8e;
        buf = h + 0xaf0;
        func_02090330(0x27, unk_6d0, &buf, 0);
        buf = h - 0xaf0;
        func_02090330(0x27, unk_6c4, &buf, 0);
    }
}

BOOL Unk_020d6df4::func_0200cd54() {
    u8 a;
    s16 b, c, e;
    s32 x, z;
    if (!func_0200e35c(&a, &x, &z, &b)) {
        return FALSE;
    }
    if (a != func_020b50e8()) {
        return FALSE;
    }
    s32 dx = x - unk_5c.x;
    s32 dz = z - unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    BOOL r4 = func_0200e2f0(dx, dz, d2, b, &c);
    if (!r4) {
        e = unk_8e;
        func_02010d74(&e, b);
        func_02010a58(&e);
        func_02010e48(&unk_5c.x, x);
        func_02010e48(&unk_5c.z, z);
    }
    return r4;
}

void Unk_020d6df4::func_0200cdfc() {
    if (!func_020729bc(data_020cbb18, unk_7fc)) {
        unk_7f4 = 1;
    }
}

void Unk_020d6df4::func_0200ce28(u32 a) {
    func_0200ce98(3, 5, a);
}

void Unk_020d6df4::func_0200ce3c(Unk_02006d14_Item *item, u32 old) {
    if (!func_0200f0fc()) {
        u16 h = *(u16 *)&item->unk_0c[0];
        *(u8 *)&unk_7d0 = old == 4 ? 1 : 0;
        func_020103b4(0, h, h);
        func_0200e870();
        func_0200ec1c(9);
        unk_164 = 0;
        unk_168 = 0;
        func_02094574(0, 0, 4);
    }
}

BOOL Unk_020d6df4::func_0200ce98(u32 a, u32 b, u32 c) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(2, b, c);
    func_0200ced8((u16 *)&m.unk_0c[0], a);
    BOOL r = func_0200e248(&m);
    return r;
}

void Unk_020d6df4::func_0200cedc() {
}

void Unk_020d6df4::func_0200cee0() {
    unk_7f4 = 1;
}

void Unk_020d6df4::func_0200ceec(u32 a) {
    func_0200cf04(9, a);
}

void Unk_020d6df4::func_0200cef8(Unk_02006d14_Item *item, u32 old) {
    unk_7f4 = 0;
}

BOOL Unk_020d6df4::func_0200cf04(u32 a, u32 b) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(1, a, b);
    BOOL r = func_0200e248(&m);
    return r;
}

void Unk_020d6df4::func_0200cf3c() {
    s32 v = 0;
    v = func_0200d2b4();
    func_0200cf5c(&v);
}

void Unk_020d6df4::func_0200cf5c(s32 *p) {
    if (*p == 0) {
        return;
    }
    unk_7f8 = func_02007c08(unk_7ec);
    s32 r4 = unk_7d0.unk_00;
    s32 f;
    Unk_020d6df4_Data *r7;
    BOOL c = data_020e416c == 0 ? TRUE : FALSE;
    if (c && r4 != 1 && func_020729bc(data_020cbb18, unk_7fc)) {
        if (func_0203081c(&unk_5c, 0, 0x19) >= 0x800) {
            r4 = 0x6d;
        }
    }
    c = data_020e416c == 0 ? TRUE : FALSE;
    if (!c || func_020b5184()) {
        func_0201a0f4(unk_908);
        if (func_020729bc(data_020cbb18, unk_7fc) || (func_020b52d0() && r4 == 8)) {
            func_02003ecc(unk_838);
            unk_920 = unk_838;
            unk_92e = 1;
            func_0200ec30(0x19);
        } else {
            func_02003ecc(unk_87c);
            unk_920 = unk_87c;
        }
        func_0200ec30(0xa);
    }
    r7 = data_020cbb18;
    if (func_020729bc(r7, unk_7fc)) {
        s32 r0 = func_020b50e8();
        if (r0 != 0xc && r0 != 0x2f) {
            if (!func_020b4880() || func_0200e764() == 1) {
                func_020b78c4();
                func_0200ec30(0x1b);
            } else if (r7->unk_64 == 0) {
                if ((u8)(func_020eaf18() + 0xfd) <= 1) {
                    func_020e9b70();
                }
            }
        }
    }
    f = 0;
    switch (r4) {
    case 1:
        func_0200cf04(9, -1);
        break;
    case 8:
        if (func_020b52d0()) {
            func_ov003_022247b8(this, 0, 6, -1);
        } else {
            if (!func_0200ec44(0x1b)) {
                f = 1;
            }
            func_ov003_022247b8(this, 1, 6, -1);
        }
        break;
    case 0x3b:
        func_ov003_02210d54(this, 6, -1);
        break;
    case 0x3c:
        if (func_020729bc(r7, unk_7fc) && !func_020b15ec()) {
            func_02035200(data_021c1b3c + 0x2e4);
            func_ov003_02207c08(this, 0, 7, -1);
            r4 = 0x6d;
        } else {
            func_ov003_022107a8(this, 1, -1);
        }
        break;
    case 0x6d:
        func_02035200(data_021c1b3c + 0x2e4);
        func_ov003_02207c08(this, 1, 7, -1);
        break;
    case 0x6e:
        func_ov003_0220798c(this, 7, -1);
        break;
    case 0x43:
        func_ov004_0221ff68(this, 6, -1);
        break;
    case 0x44:
        func_ov004_0221fe30(this, 6, -1);
        break;
    case 0x28:
        if (!func_0200ec44(0x1b)) {
            f = 1;
        }
        func_ov004_022217c4(this, 0, 6, -1);
        break;
    case 0x10:
        unk_7f4 = 1;
        func_0200bd60(3, 5, -1);
        break;
    case 0x8b:
        func_ov004_0221f5f4(this, &unk_5c, 6, -1);
        func_0200ec30(5);
        break;
    case 0x8e:
        func_ov004_0221ee1c(this, &unk_5c, 6, -1);
        func_0200ec30(5);
        break;
    default:
        r4 = 2;
        func_0200ce98(0, 1, -1);
        if (!func_0200ec44(0x1b)) {
            f = 1;
        }
        func_0200ed48();
        break;
    }
    unk_08 = ((r4 << 22) & 0x3fc00000) | (unk_08 & 0xc03fffff);
    if (f) {
        if (func_020729bc(r7, unk_7fc)) {
            func_0203d76c();
        }
    }
}

void Unk_020d6df4_7d0::func_0200cb48() {
    unk_00 = 0;
}

extern "C" {
void func_0200cb90(u8 *p, u32 v) {
    *p = v;
}
void func_0200ced8(u16 *p, u32 v) {
    *p = v;
}
}
