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

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(void *src, BOOL a, BOOL b);
    void func_020a7bd8(Unk_020e2a78 *o);
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
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    u8 unk_00[0x48];
};

// object at +0x194 (size 0x164)
class Unk_ov002_02202fac {
public:
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

// ---- ov142 scene ----
class Unk_ov142_02294da8 : public Unk_ov002_022044e4 {
public:
    // other groups
    s32 func_ov142_02293098();
    s32 func_ov142_022930a8();
    u16 *func_ov142_02293004(s32 i);
    s32 func_ov142_022930b8(u16 *out, u32 start, s32 count, s32 idx);
    s32 func_ov142_0229312c(u16 *out, u32 start, s32 count, s32 idx);
    void func_ov142_02292364();
    void func_ov142_02292414();
    void func_ov142_02292478();
    void func_ov142_02292e94(s32 a);
    void func_ov142_022923ac();
    void func_ov142_022923c8();
    void func_ov142_02292018(s32 a);
    void func_ov142_02292008(s32 a);
    BOOL func_ov142_02292028(s32 a);

    // this group
    void func_ov142_02293240();
    void func_ov142_02293274();
    void func_ov142_022932a8();
    void func_ov142_022932dc();
    void func_ov142_02293314();
    void func_ov142_02293348();
    void func_ov142_0229337c();
    void func_ov142_02293528(u32 v);
    void func_ov142_02293540(u8 v);
    void func_ov142_022935bc();
    void func_ov142_022935f8();
    void func_ov142_02293618(s32 a, s32 b, s32 c, u8 d, s32 e);
    void func_ov142_0229365c(s32 a);
    void func_ov142_022936a4();
    void func_ov142_02293734();
    void func_ov142_02293820();
    Unk_020e0488 *func_ov142_0229384c();
    void func_ov142_02293884();
    void func_ov142_022938a8();
    void func_ov142_022938c0();
    void func_ov142_022938dc(s32 a, s32 b);
    void func_ov142_0229390c();
    void func_ov142_02293954();
    s32 func_ov142_02293970();
    s32 func_ov142_02293a0c();
    void func_ov142_02293a94();
    void func_ov142_02293acc();
    void func_ov142_02293af8();
    void func_ov142_02293b34();

    /* 0x091 */ u8 unk_91[0xf];
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ u8 unk_a8[0xc];
    /* 0x0b4 */ s16 unk_b4;
    /* 0x0b6 */ u8 unk_b6[4];
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ s16 unk_c4[9];
    /* 0x0d6 */ s16 unk_d6[9];
    /* 0x0e8 */ Unk_ov002_0220464c unk_e8;
    /* 0x14c */ Unk_ov002_022046b0 unk_14c;
    /* 0x194 */ Unk_ov002_02202fac unk_194;
    /* 0x2f8 */ Unk_020e0488 unk_2f8[14];
    /* 0x678 */ u8 unk_678[0x708 - 0x678];
    /* 0x708 */ u16 unk_708[0x800 / 2];
    /* 0xf08 */ u16 unk_f08[0x88 / 2];
    /* 0xf90 */ u16 unk_f90[0x88 / 2];
    /* 0x1018 */ u16 unk_1018[0x200 / 2];
    /* 0x1218 */ u16 unk_1218[0x40 / 2];
    /* 0x1258 */ u16 unk_1258[0x140 / 2];
    /* 0x1398 */ u16 unk_1398[0x80 / 2];
    /* 0x1418 */ u16 unk_1418[0xfe / 2];
    /* 0x1516 */ u16 unk_1516[0x68 / 2];
    /* 0x157e */ u16 unk_157e[9];
};

extern "C" {
u32 func_0209750c();
BOOL func_0204b8ac(u16 *p);
void *func_020986c8(u32 h);
BOOL func_0203c4cc(void *a, u16 *b);
}

void Unk_ov142_02294da8::func_ov142_02293240() {
    unk_d6[7] = 0;
    unk_c4[7] = func_ov142_0229312c(unk_1418, 0x45dc, 0x7f, 7);
}

void Unk_ov142_02294da8::func_ov142_02293274() {
    unk_d6[6] = 0;
    unk_c4[6] = func_ov142_0229312c(unk_1398, 0x1003, 0x40, 6);
}

void Unk_ov142_02294da8::func_ov142_022932a8() {
    unk_d6[4] = 0;
    unk_c4[4] = func_ov142_0229312c(unk_1218, 0x3e24, 0x20, 4);
}

void Unk_ov142_02294da8::func_ov142_022932dc() {
    unk_d6[3] = 0;
    unk_c4[3] = func_ov142_0229312c(unk_1018, 0x3984, 0x100, 3);
}

void Unk_ov142_02294da8::func_ov142_02293314() {
    unk_d6[2] = 0;
    unk_c4[2] = func_ov142_022930b8(unk_f90, 0x1144, 0x44, 2);
}

void Unk_ov142_02294da8::func_ov142_02293348() {
    unk_d6[1] = 0;
    unk_c4[1] = func_ov142_022930b8(unk_f08, 0x1100, 0x44, 1);
}

void Unk_ov142_02294da8::func_ov142_0229337c() {
    s32 n = 0;
    u32 cur;
    u16 id;
    u32 h;
    s32 i;
    unk_c4[0] = 0;
    unk_d6[0] = 0;
    cur = 0x3000;
    id = 0xfff1;
    h = func_0209750c();
    for (i = 0; i < 0x6e9; i++) {
        BOOL r;
        id = cur;
        u32 v = id;
        r = (v >= 0x45dc && v <= 0x47d7) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x4384 && v <= 0x4463) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x42a4 && v <= 0x4383) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3e24 && v <= 0x3ea3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3984 && v <= 0x3d83) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x450c && v <= 0x45db) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x3fa4 && v <= 0x40a3) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x4124 && v <= 0x4223) ? TRUE : FALSE;
        if (r) goto next;
        r = (v >= 0x40a4 && v <= 0x4123) ? TRUE : FALSE;
        if (r) goto next;
        if (func_0204b8ac(&id)) {
            unk_d6[0] = unk_d6[0] + 1;
            if (func_0203c4cc(func_020986c8(h), &id)) {
                *(u16 *)((u8 *)this + n * 2 + 0x708) = cur;
                n++;
            }
        }
    next:
        cur = (u16)(cur + 4);
    }
    unk_c4[0] = n;
}

void Unk_ov142_02294da8::func_ov142_02293528(u32 v) {
    if (v != unk_bd) {
        unk_bd = v;
        unk_c2 = 1;
    }
}

void Unk_ov142_02294da8::func_ov142_02293540(u8 v) {
    if (unk_bc != v) {
        unk_bc = v;
        unk_bd = v;
        unk_a4 = (func_ov142_02293098() - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        func_ov142_02292e94(0);
        unk_a0 = 0;
        func_ov142_02292414();
        if (unk_a4 == 0) {
            func_ov142_022923ac();
        } else {
            func_ov142_022923c8();
        }
        func_ov142_02292478();
        func_ov142_02292018(8);
    }
}

void Unk_ov142_02294da8::func_ov142_022935bc() {
    Unk_020e0488 *w = func_ov142_0229384c();
    w->func_020a7c3c();
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void Unk_ov142_02294da8::func_ov142_022935f8() {
    func_ov142_02293618(0x53, 0x15d, 8, 0xe, 1);
}

void Unk_ov142_02294da8::func_ov142_02293618(s32 a, s32 b, s32 c, u8 d, s32 e) {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9fc(w, a);
    w->func_0206fb9c(6, b, c, d, 4, 0);
    w->func_0206fab4(e, 0);
}

void Unk_ov142_02294da8::func_ov142_0229365c(s32 a) {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9c8(w, a, 8, 1, 0, 1);
    w->func_0206fb9c(6, 0x15d, 8, 0xe, 4, 1);
    w->func_0206fa4c();
}

void Unk_ov142_02294da8::func_ov142_022936a4() {
    Unk_020e0488 *w = func_ov142_0229384c();
    func_0206f9c8(w, func_ov142_02293098(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x156, 3, 0xe, 4, 0);
    w->func_0206fa4c();
    w = func_ov142_0229384c();
    func_0206f9c8(w, func_ov142_022930a8(), 3, 0, 0, 0);
    w->func_0206fb48(6, 0x15a, 3, 0xe, 4, 0);
    w->func_0206fab4(0, 0);
}

void Unk_ov142_02294da8::func_ov142_02293734() {
    Unk_020dd324 buf;
    s32 i;
    Unk_020e0488 *w;
    s32 cnt;
    s32 z4 = 0, z1 = 0, z2 = 0, z3 = 0;
    s32 cur = unk_b4;
    u16 *list = func_ov142_02293004(cur);
    s32 col = (cur + 9) % 9;
    cnt = func_ov142_02293098();
    for (i = 0; i < 9; i++) {
        w = (Unk_020e0488 *)z4;
        if (cur < 0 || cur >= cnt) {
            unk_157e[col] = 0xfff1;
            w = func_ov142_0229384c();
            w->func_020a7c3c();
        } else {
            if (*list != unk_157e[col]) {
                unk_157e[col] = *list;
                w = func_ov142_0229384c();
                u16 id = *list;
                buf.func_02062564(&id);
                w->func_020a7bd8(&buf);
            }
            list++;
        }
        if (w) {
            w->func_0206fb9c(4, col * 26 + 0x52, 0xd, 0xf, 8, z1);
            w->func_0206fab4(z2, z2);
        }
        cur++;
        col++;
        if (col >= 9) col = z3;
    }
}

void Unk_ov142_02294da8::func_ov142_02293820() {
    s32 i = 0;
    unk_bb = 0;
    Unk_020e0488 *w = unk_2f8;
    for (; i < 14; i++) {
        (w + i)->func_0206fc44();
    }
}

Unk_020e0488 *Unk_ov142_02294da8::func_ov142_0229384c() {
    if (*(volatile u8 *)&unk_bb >= 14) {
        return &unk_2f8[13];
    }
    *(volatile u8 *)&unk_bb = *(volatile u8 *)&unk_bb + 1;
    return &unk_2f8[*(volatile u8 *)&unk_bb - 1];
}

void Unk_ov142_02294da8::func_ov142_02293884() {
    unk_e8.func_ov002_02202af0();
    unk_ba = unk_8d;
    func_ov002_02200a58(10);
}

void Unk_ov142_02294da8::func_ov142_022938a8() {
    unk_e8.func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov142_02294da8::func_ov142_022938c0() {
    unk_e8.func_ov002_02202a78();
    unk_e8.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_022938dc(s32 a, s32 b) {
    unk_e8.func_ov002_022029e8(a, b, 3, 1);
    unk_ba = unk_8d;
    func_ov002_02200a58(8);
}

void Unk_ov142_02294da8::func_ov142_0229390c() {
    u32 c = unk_c0;
    if (c == 0x13 || (c >= 9 && c <= 0x11)) {
        unk_e8.func_ov002_02202ca0();
    } else {
        unk_e8.func_ov002_02202c40();
    }
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    func_ov142_022938dc(a, b);
}

void Unk_ov142_02294da8::func_ov142_02293954() {
    unk_e8.func_ov002_02202d00(0);
    unk_e8.vfunc_0c();
}

s32 Unk_ov142_02294da8::func_ov142_02293970() {
    u32 c = unk_c0;
    if (c <= 8) {
        return c * 16 + 0x1f;
    }
    if (c >= 9 && c <= 0x11) {
        return (c - 9) * 16 + 0x28 - (unk_a0 & 0xf);
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.func_ov002_022030b8(6);
    case 0:
        return 0x57;
    case 2:
        return unk_14c.func_ov002_02202e60();
    case 5:
        return unk_194.func_ov002_022030b8(3);
    case 6:
        return unk_194.func_ov002_022030b8(4);
    case 3:
        return 0x23;
    case 4:
        return 0x9b;
    default:
        return 0x60;
    }
}

s32 Unk_ov142_02294da8::func_ov142_02293a0c() {
    u32 c = unk_c0;
    if (c <= 8) {
        return 0x17;
    }
    if (c >= 9 && c <= 0x11) {
        return 0x40;
    }
    switch (c - 0x12) {
    case 1:
        return unk_194.func_ov002_022030f4(6);
    case 0:
        return 0xe8;
    case 2:
        return unk_14c.func_ov002_02202e84();
    case 5:
        return unk_194.func_ov002_022030f4(3);
    case 6:
        return unk_194.func_ov002_022030f4(4);
    case 3:
    case 4:
        return 0xc0;
    default:
        return 0x80;
    }
}

void Unk_ov142_02294da8::func_ov142_02293a94() {
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    unk_e8.func_ov002_02202a40(a, b);
    unk_e8.func_ov002_02202d00(1);
    func_ov142_022938c0();
}

void Unk_ov142_02294da8::func_ov142_02293acc() {
    func_0206ecf8(0);
    unk_194.func_ov002_022030ac(6);
    func_ov002_02200a58(0xd);
    func_ov142_02293b34();
}

void Unk_ov142_02294da8::func_ov142_02293af8() {
    unk_bf = 7;
    func_ov142_02293954();
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov002_0220085c(0, 0);
    func_ov142_02292364();
    func_0200402c(0x59);
}

static inline BOOL Unk_ov142_02293b34_IsOne() {
    if (data_020e416c == 1) return TRUE;
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02293b34() {
    func_ov002_02200a50(2);
    if (Unk_ov142_02293b34_IsOne()) {
        if (func_ov142_02292028(0x40)) {
            func_ov142_02292008(0x40);
            func_ov004_02235a04();
            func_ov004_02235a2c();
        }
    }
}
