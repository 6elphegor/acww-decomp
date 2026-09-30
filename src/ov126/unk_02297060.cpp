#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021eca50[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern char data_ov126_02299b48[];
extern char data_ov126_02299b54[];

s32 func_0206ed50();
s32 func_0206ed38();
void func_0206ecf8(s32 a);
void *func_0206ecf0();
void func_0206ed2c(u8 a);
void func_020a78a4(void *a, void *b, s32 c);
void func_020a7aa0(void *a, void *b, s32 c, s32 d);
s32 func_020b30bc(void *a);
void func_020a77f8(void *a, void *b);
void func_02050e90(void *a, void *b, s32 c);
void *func_02076cec(void *a);
void *func_02076ce8(void *a);
void func_02051268(void *a, void *b, s32 c);
s32 func_02051218(void *a, void *b, s32 c);
void *func_02087298(void *a);
void *func_02071e04(void *a);
void func_02071ef4(void *a, void *b);
void func_02071f48(void *a, void *b);
BOOL func_020b0084(void *a, s32 b);
void func_020b0428(void *a, s32 b);
void func_020b03f0(void *a, s32 b);
s32 func_02063904(void *a, void *b);
s32 func_0209750c();
s32 func_0209888c(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
s32 func_02097868(void *a, s32 b);
s32 func_02094104(s32 a);
void func_02094108(s32 a, void *b);
void func_0206fcc8(void *p);
void func_0206f9e4(void *p, const char *fmt, s32 a);
BOOL func_0206f88c(void *p, void *q, u32 n);
void func_0206fca8(void *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
void func_02062564(void *p, void *q);
void func_020a7bd8(void *p, void *q);
s32 func_020986d4(s32 a);
s32 func_02098674(s32 a);
void *func_02071c68(s32 a, s32 b);
void *func_02076db4(s32 a);

BOOL func_ov095_02295440(void *p, s32 a);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02293da8(void *p);
void func_ov095_02294318(void *p);
s32 func_ov095_02292404(void *p);
void func_ov095_02294864(void *p, s32 a, s32 b);
s32 func_ov095_02292580(void *p);
s32 func_ov095_02292544(void *p);
BOOL func_ov002_02202fac(void *p, s32 a);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_0220298c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov095_02295194(void *p);
}

class Unk_0206fca8 {
public:
    ~Unk_0206fca8();
    u32 unk_00[0x40 / 4];
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

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x3e64 sub-object (0x64 bytes; D1 func_ov002_02202640)
class Unk_ov002_02204614 : public Unk_020e100c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();

    u8 unk_4b[0x64 - 0x4b];
};

// +0x3d00 sub-object (D1 func_ov002_02203968)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();

    u8 unk_00[0x164];
};

// +0x3f80 holder object (D1 func_ov002_022043e8), 0x108 bytes
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();

    u8 unk_00[0x108];
};

// +0x3f48 object (dtor func_0206f85c), 0x38 bytes
class Unk_ov126_0206f85c {
public:
    Unk_ov126_0206f85c();
    ~Unk_ov126_0206f85c();

    u8 unk_00[0x38];
};

// +0xb0 menu sub-object (dtor func_ov110_02296df0), 0x94 bytes
class Unk_ov126_02296df0 {
public:
    Unk_ov126_02296df0();
    ~Unk_ov126_02296df0();

    u8 unk_00[0x94];
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

// Vtable 0x02299ae8
class Unk_ov126_02299ae8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov126_02299ae8();

    void func_ov126_02297168(u32 mask);
    void func_ov126_02297178(u32 mask);
    BOOL func_ov126_02297188(u32 mask);
    void func_ov126_0229719c();
    void func_ov126_022971fc();
    void func_ov126_022972a8();
    void func_ov126_022972cc();
    void func_ov126_022972f0();
    void func_ov126_02297328();
    s32 func_ov126_02297360();
    void func_ov126_02297378();
    void func_ov126_022973f8();
    void func_ov126_02297440();
    void func_ov126_022974d0();
    void func_ov126_02297518();
    void func_ov126_0229755c();
    void func_ov126_022975d4();
    void func_ov126_022975f4();
    u8 *func_ov126_02297614();
    void func_ov126_0229763c();
    void func_ov126_02297658();
    BOOL func_ov126_02297698();
    BOOL func_ov126_022976bc();
    BOOL func_ov126_02297720();
    BOOL func_ov126_0229778c();
    BOOL func_ov126_022977e8();
    void func_ov126_02297858();
    void func_ov126_02297878();
    void func_ov126_022978a4();
    void func_ov126_022978c4();
    void func_ov126_02297920();

    // out-of-range callees (declarations only)
    void func_ov126_02297d94(s32 a);
    BOOL func_ov126_02297c4c(s32 a);
    void func_ov126_02298430();
    void func_ov126_02298470();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ u8 unk_9c[8];
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7[7];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ Unk_ov126_02296df0 unk_b0;
    /* 0x144 */ u8 unk_144[0x2480 - 0x144];
    /* 0x2480 */ Unk_0206fca8 unk_2480[2];
    /* 0x2500 */ u8 unk_2500[0x3d00 - 0x2500];
    /* 0x3d00 */ Unk_ov002_022046cc unk_3d00;
    /* 0x3e64 */ Unk_ov002_02204614 unk_3e64;
    /* 0x3ec8 */ Unk_0206fca8 unk_3ec8;
    /* 0x3f08 */ Unk_0206fca8 unk_3f08;
    /* 0x3f48 */ Unk_ov126_0206f85c unk_3f48;
    /* 0x3f80 */ Unk_ov002_022040ec unk_3f80;
    /* 0x4088 */ u8 unk_4088[0x10];
};

// ---------------------------------------------------------------------------------------------

Unk_ov126_02299ae8::~Unk_ov126_02299ae8() {}

void Unk_ov126_02299ae8::func_ov126_02297168(u32 mask) {
    unk_a4 = unk_a4 & ~mask;
}

void Unk_ov126_02299ae8::func_ov126_02297178(u32 mask) {
    unk_a4 = unk_a4 | mask;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297188(u32 mask) {
    if ((unk_a4 & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov126_02299ae8::func_ov126_0229719c() {
    u8 *buf = unk_4088;
    u32 n = unk_a6;
    func_020a78a4(&unk_3f48, buf, n);
    func_020a7aa0(&unk_3f08, &unk_3f48, 0, 0);
    if (func_020b30bc(&unk_3f08)) {
        func_020a77f8(&unk_3f48, &unk_3f08);
        func_02050e90(&unk_3f48, buf, n);
    }
}

void Unk_ov126_02299ae8::func_ov126_022971fc() {
    s32 r = func_0206ed50();
    if (r != 0xc && r != 0xd && r != 0xe) {
        func_ov126_0229719c();
    }
    switch (r) {
    case 0xb: func_ov126_02297518(); break;
    case 0xc: func_ov126_022974d0(); break;
    case 0xd: func_ov126_02297440(); break;
    case 0xe: func_ov126_022973f8(); break;
    case 0xf: func_ov126_02297378(); break;
    case 0x10: func_ov126_02297360(); break;
    case 0x11: break;
    case 0x12: func_ov126_02297328(); break;
    case 0x13: break;
    case 0x14: func_ov126_022972f0(); break;
    case 0x15: break;
    case 0x16: break;
    case 0x17: break;
    case 0x18:
    case 0x19: func_ov126_022972cc(); break;
    case 0x1a:
    case 0x1b: func_ov126_022972a8(); break;
    }
}

void Unk_ov126_02299ae8::func_ov126_022972a8() {
    func_02051268(unk_4088, func_02076cec(func_ov126_02297614()), 8);
}

void Unk_ov126_02299ae8::func_ov126_022972cc() {
    func_02051268(unk_4088, func_02076ce8(func_ov126_02297614()), 8);
}

void Unk_ov126_02299ae8::func_ov126_022972f0() {
    u8 buf[0x10];
    void *p = func_02087298(data_021eca50);
    func_02051268(unk_4088, buf, 0x10);
    func_02071ef4(func_02071e04(p), buf);
}

void Unk_ov126_02299ae8::func_ov126_02297328() {
    s32 t = func_0206ed38();
    if (func_020b0084(unk_4088, t)) {
        func_0206ecf8(0);
    }
    func_020b0428(unk_4088, t);
}

s32 Unk_ov126_02299ae8::func_ov126_02297360() {
    return func_02063904(data_021d7352, unk_4088);
}

void Unk_ov126_02299ae8::func_ov126_02297378() {
    s32 t = func_0209750c();
    func_0209888c();
    s32 u = func_0209888c(t);
    s32 n = func_02097740(data_021d735c, u);
    s32 i;
    for (i = 0; i < 4; i++) {
        if (i != n && func_020978c8(data_021d735c, i)) {
            if (func_02051218((void *)func_02094104(func_0209888c(func_02097868(data_021d735c, i))), unk_4088, 8)) {
                func_0206ecf8(2);
                return;
            }
        }
    }
    func_02094108(func_0209888c(t), unk_4088);
}

struct Unk_ov126_022973f8_Buf {
    u32 v[0x10];
    Unk_ov126_022973f8_Buf() { func_0206fcc8(this); }
    ~Unk_ov126_022973f8_Buf() { func_0206fca8(this); }
};

void Unk_ov126_02299ae8::func_ov126_022973f8() {
    Unk_ov126_022973f8_Buf b;
    func_0206f9e4(&b, data_ov126_02299b48, func_0206ed38());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        func_0206ecf8(0);
    }
}

struct Unk_ov126_02297440_Rec {
    u32 v[9];
    Unk_ov126_02297440_Rec() { func_0206267c(this); }
    ~Unk_ov126_02297440_Rec() { func_0206260c(this); }
};

void Unk_ov126_02299ae8::func_ov126_02297440() {
    u16 id;
    Unk_ov126_02297440_Rec rec;
    Unk_ov126_022973f8_Buf b;
    u16 i;
    for (i = 0x1323; i <= 0x1368; i++) {
        id = i;
        func_02062564(&rec, &id);
        func_020a7bd8(&b, &rec);
        if (func_0206f88c(&b, unk_4088, unk_a6)) {
            func_0206ed2c((u8)(i - 0x1323));
            func_0206ecf8(1);
            return;
        }
    }
    func_0206ecf8(0);
}

void Unk_ov126_02299ae8::func_ov126_022974d0() {
    Unk_ov126_022973f8_Buf b;
    func_0206f9e4(&b, data_ov126_02299b54, func_0206ed38());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        func_0206ecf8(0);
    }
}

void Unk_ov126_02299ae8::func_ov126_02297518() {
    u8 buf[0x10];
    s32 a = func_020986d4(func_0209750c());
    void *p = func_02071c68(a, func_0206ed38());
    func_02051268(unk_4088, buf, 0x10);
    func_02071ef4(func_02071e04(p), buf);
}

void Unk_ov126_02299ae8::func_ov126_0229755c() {
    switch (func_0206ed50()) {
    case 0x11:
    case 0x15:
    case 0x16:
    case 0x17:
        func_02051268(func_0206ecf0(), unk_4088, unk_a6);
        break;
    case 0xb: func_ov126_02297658(); break;
    case 0x12: func_ov126_0229763c(); break;
    case 0x18:
    case 0x19: func_ov126_022975f4(); break;
    case 0x1a:
    case 0x1b: func_ov126_022975d4(); break;
    }
}

void Unk_ov126_02299ae8::func_ov126_022975d4() {
    func_02051268(func_02076cec(func_ov126_02297614()), unk_4088, 8);
}

void Unk_ov126_02299ae8::func_ov126_022975f4() {
    func_02051268(func_02076ce8(func_ov126_02297614()), unk_4088, 8);
}

void Unk_ov126_02299ae8::func_ov126_0229763c() {
    func_020b03f0(unk_4088, func_0206ed38());
}

void Unk_ov126_02299ae8::func_ov126_02297658() {
    u8 buf[0x10];
    s32 a = func_020986d4(func_0209750c());
    func_02071f48(func_02071e04(func_02071c68(a, func_0206ed38())), buf);
    func_02051268(buf, unk_4088, 0x10);
}

BOOL Unk_ov126_02299ae8::func_ov126_02297698() {
    if ((data_021f47d8[1] & 8) == 0) {
        return FALSE;
    }
    func_ov126_02298470();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_022976bc() {
    if ((data_021f47d8[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(unk_144, 0xb)) {
        return FALSE;
    }
    func_ov126_02297d94(0x118);
    func_ov095_02294d40(unk_144, 0xdb);
    unk_ae = unk_8d;
    func_ov002_02200a58(0xd);
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297720() {
    if ((data_021f47d8[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(unk_144, 0xc)) {
        return FALSE;
    }
    func_ov126_02297d94(0x119);
    func_ov095_02294d40(unk_144, 0xdc);
    func_ov126_022978c4();
    unk_ae = unk_8d;
    func_ov002_02200a58(0xe);
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_0229778c() {
    if ((data_021f47d8[0] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(unk_144);
    if (func_ov126_02297c4c(0)) {
        func_ov095_02294318(unk_144);
        unk_ae = unk_8d;
        func_ov002_02200a58(0xc);
    } else {
        func_ov126_02298430();
    }
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_022977e8() {
    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    s32 t = func_ov095_02292404(unk_144);
    if (t == -1) {
        return FALSE;
    }
    if (func_ov002_02202fac(&unk_3d00, 6) && t == 0xd9) {
        return FALSE;
    }
    func_ov095_02294864(unk_144, t, 8);
    func_ov095_02294d40(unk_144, t);
    func_ov126_022978a4();
    return TRUE;
}

void Unk_ov126_02299ae8::func_ov126_02297858() {
    func_ov002_02202a78(&unk_3e64);
    unk_3e64.vfunc_0c();
}

void Unk_ov126_02299ae8::func_ov126_02297878() {
    func_ov095_02295194(unk_144);
    func_ov002_02202af0(&unk_3e64);
    func_ov002_02200a58(0xb);
}

void Unk_ov126_02299ae8::func_ov126_022978a4() {
    func_ov002_02202b68(&unk_3e64);
    func_ov002_02200a58(9);
}

void Unk_ov126_02299ae8::func_ov126_022978c4() {
    if (func_ov126_02297188(0x80)) {
        func_ov002_02202a40(&unk_3e64, unk_98, 0x28);
    } else {
        s32 a = func_ov095_02292580(unk_144);
        s32 b = func_ov095_02292544(unk_144);
        func_ov002_02202a40(&unk_3e64, a, b);
    }
    unk_3e64.vfunc_0c();
}

void Unk_ov126_02299ae8::func_ov126_02297920() {
    if (func_ov126_02297188(0x80)) {
        func_ov002_0220298c(&unk_3e64, unk_98, 0x28, 3, 2);
        unk_ae = 6;
    } else {
        s32 a = func_ov095_02292580(unk_144);
        s32 b = func_ov095_02292544(unk_144);
        func_ov002_0220298c(&unk_3e64, a, b, 3, 2);
        unk_ae = 4;
    }
    func_ov002_02200a58(8);
}

u8 *Unk_ov126_02299ae8::func_ov126_02297614() {
    s32 t = func_0209750c();
    s32 p = func_02098674(t);
    s32 idx = func_0206ed38();
    u8 *q = (u8 *)func_02076db4(p);
    return q + idx * 0x1c;
}
