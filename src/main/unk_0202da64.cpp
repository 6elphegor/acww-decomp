#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern u8 data_020e416c;
extern u8 data_021be680[];
extern u8 data_021be6a0[];
extern u8 data_020d8b00[];
extern u8 data_020d8b18[];
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern s32 data_021bf97c;

u32 func_02077b04(u32 a);
void func_020639e8(u8 *dst, u8 *fmt, s32 v);
u32 func_02063b8c(u32 a);
void func_0207fd90(void *o, u16 *p);
void func_02077450(void *o, u16 *p);
void *func_020805c4(void *o);
u32 func_020030b4(void *o);
u16 func_02002ff8(void *o);
u32 func_02003070(void *o);
void func_02002fc8(void *o, u32 v);
void *func_0207bf60(void *a, u16 b);
void *func_0207e310(void *o);
u32 func_02072e44(void *g);
u32 func_020729cc(void *g, u32 v);
void *func_0209750c();
void *func_020986b0(void *p);
void func_020877a0(void *a, u32 b);
void func_0209d498(void *p);
u32 func_020874e8(u32 a, u32 b, u32 c, u8 *d);
void *func_02098698(void *p);
u32 func_02087838(void *o, u32 a);
void func_02087804(void *o, u32 a);
void *func_02015a5c(u32 a);
void func_020aa680(void *h, s32 a, s32 b);
void func_020aa608(void *h);
void func_020aa638(void *h, s32 a, u8 *b, s32 c, u8 *d, s32 e, s32 f);
s32 func_02081428(u16 *p);
void func_020814ec(u32 a, u16 *p);
}

// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    u32 func_02054b38(u32 a);
    u32 func_02053a14(u32 a);
    u32 pad[0x1b4 / 4];
};
struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); ~Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); ~Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); ~Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); ~Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); ~Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class Unk_020f43c8 {
public:
    Unk_020f43c8();
    virtual ~Unk_020f43c8();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public Unk_020f43c8 {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

// Members added by the 0x020d89c8 class
struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    void func_0202d664(void *owner, u16 *p);
    u32 pad[0x34 / 4];
};
struct Unk_0202d5e8 { Unk_0202d5e8(); ~Unk_0202d5e8(); u32 pad[0x1a0 / 4]; u8 unk_1a0; u8 pad_1a1[3]; };
struct Unk_02082088 {
    Unk_02082088();
    ~Unk_02082088();
    void *func_0208202c();
    u32 pad[2];
};
struct Unk_0201c078 {
    Unk_0201c078();
    ~Unk_0201c078();
    BOOL func_0201c6d4();
    void func_0201c614(u32 a, s32 b);
    void func_0201c704();
    u32 pad[0x5c / 4];
};
struct Unk_02082014 {
    Unk_02082014();
    void func_0208211c();
    u8 pad[0x10];
    u8 unk_10;
    u8 pad_11[3];
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 pad_68[0x6c / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    u16 func_0201bdec();

    u16 pad_e0[5];
    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

extern "C" void func_0201c790(void *self);

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_04();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    BOOL func_0202da64();
    void func_0202dcd8();
    s32 func_0202dc9c();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ Unk_0201c078 unk_838;
};

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_020d89c8::func_0202da64() {
    u32 t = (u32)unk_824.func_0208202c();
    if (!unk_ec.func_02054b38(func_02077b04(t))) {
        return FALSE;
    }
    if (unk_ec.func_02053a14(func_02077b04(t))) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d89c8::vfunc_04() {
    if (!Unk_020d77a4::vfunc_04()) {
        return FALSE;
    }
    func_0202dcd8();
    unk_644 = 0;
    unk_680.unk_1a0 = func_02063b8c(2);
    unk_838.func_0201c704();
    func_0201c790(this);
    return TRUE;
}

static inline BOOL Unk_0202daf8_InRange(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_020d89c8::vfunc_88(u16 *p, BOOL flag) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) {
        in = TRUE;
    }
    if (in || (v >= 0x12a8 && v <= 0x12af)) {
        void *o = vfunc_64();
        unk_64c.func_0202d664(this, p);
        if (o != NULL) {
            func_0207fd90(o, p);
            if (flag) {
                func_02077450(o, p);
            }
        }
    }
}

BOOL Unk_020d89c8::vfunc_b0() { return FALSE; }
BOOL Unk_020d89c8::vfunc_ac() { return FALSE; }
BOOL Unk_020d89c8::vfunc_a8() { return TRUE; }

void Unk_020d89c8::vfunc_a4(u32 a, s32 b) {
    if (unk_838.func_0201c6d4()) {
        unk_838.func_0201c614(a, b);
    }
}

void *Unk_020d89c8::vfunc_64() { return unk_82c; }

u8 *Unk_020d89c8::vfunc_70() {
    s32 v = func_0202dc9c();
    if (v == -1) {
        v = 0;
    }
    func_020639e8(data_021be6a0, data_020d8b00, v & 0xf8);
    return data_021be6a0;
}

u8 *Unk_020d89c8::vfunc_6c() {
    s32 v = func_0202dc9c();
    if (v == -1) {
        v = 0;
    }
    func_020639e8(data_021be680, data_020d8b18, v & 0xf8);
    return data_021be680;
}

u16 Unk_020d89c8::vfunc_84() {
    if (((unk_ea & 0xf000) >> 12) == 0xe && unk_82c != NULL) {
        return func_02002ff8(func_020805c4(unk_82c));
    }
    return 0xffff;
}

void Unk_020d89c8::vfunc_80() {}

BOOL Unk_020d89c8::vfunc_7c() { return TRUE; }

u32 Unk_020d89c8::vfunc_78() {
    u32 r = 2;
    if (unk_82c != NULL) {
        r = func_02003070(func_020805c4(unk_82c));
    }
    return r;
}

void Unk_020d89c8::vfunc_74(u32 a) {
    if (unk_82c != NULL) {
        func_02002fc8(func_020805c4(unk_82c), a);
    }
}

s32 Unk_020d89c8::func_0202dc9c() {
    s32 r = -1;
    if (unk_82c != NULL) {
        if (func_020030b4(func_020805c4(unk_82c)) == 1) {
            r = func_02002ff8(func_020805c4(unk_82c));
        }
    }
    return r;
}

void Unk_020d89c8::func_0202dcd8() {
    if (((unk_ea & 0xf000) >> 12) == 0xe) {
        unk_82c = func_0207bf60(data_021dfd8c, func_0201bdec());
        if (unk_82c != NULL) {
            unk_830 = func_0207e310(unk_82c);
        } else {
            unk_830 = NULL;
        }
    }
}

Unk_020d89c8::Unk_020d89c8() {}

Unk_020d89c8::~Unk_020d89c8() {}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" BOOL func_0202e148() {
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020729cc(g, 0) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" void func_0202e174(void *unused, u32 a) {
    func_020877a0(func_020986b0(func_0209750c()), a);
}

struct Unk_0202e18c_Buf {
    u32 unk_00;
    u32 unk_04;
};

extern "C" BOOL func_0202e18c(void *unused, u8 *p, u32 mode) {
    Unk_0202e18c_Buf buf;
    buf.unk_00 = 0;
    buf.unk_04 = 0;
    func_0209d498(&buf);
    u8 *b = (u8 *)&buf;
    if (func_020874e8(b[5], b[4], b[3], p)) {
        if (((u32)(*p << 30) >> 30) == mode) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_0202e1cc(u32 a, BOOL flag) {
    void *o = func_0209750c();
    if (o == NULL) {
        return FALSE;
    }
    void *h = func_02098698(o);
    BOOL r = TRUE;
    if (func_02087838(h, a) == 0) {
        r = FALSE;
    }
    if (flag) {
        func_02087804(h, a);
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0202e214(u32 a, u8 *src, s32 n, s32 m) {
    void *h = func_02015a5c(a);
    func_020aa680(h, n, m);
    s32 zero = 0;
    u8 buf[2];
    for (s32 i = 0; i < n; src++, i++) {
        buf[0] = *src;
        buf[1] = 0xff;
        func_020aa638(h, i, buf, zero, buf + 1, zero, zero);
    }
    func_020aa608(h);
}

// ---------------------------------------------------------------------------------------------------------------------
// Library base, out-of-line ctor/dtor
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    u32 pad_04[0xb0 / 4];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

Unk_020d8b38::~Unk_020d8b38() {}

Unk_020d8b38::Unk_020d8b38() {}

// ---------------------------------------------------------------------------------------------------------------------
class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    virtual BOOL vfunc_0c();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual BOOL vfunc_a8();

    Unk_02082014 unk_640;
};

static inline BOOL Unk_0202e318_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d8bc8::vfunc_a8() { return data_021bf97c; }

u16 Unk_020d8bc8::vfunc_84() {
    u16 v = unk_ea;
    if (((v & 0xf000) >> 12) == 0xd) {
        return (v & 0xfff) + 0xc8;
    }
    return 0xffff;
}

void Unk_020d8bc8::vfunc_80() { unk_640.unk_10 = 1; }

BOOL Unk_020d8bc8::vfunc_7c() {
    if (!Unk_0202e318_IsOne(data_020e416c) || unk_640.unk_10 == 0) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_020d8bc8::vfunc_78() { return func_02081428(&unk_ea); }

void Unk_020d8bc8::vfunc_74(u32 a) { func_020814ec(a, &unk_ea); }

BOOL Unk_020d8bc8::vfunc_0c() {
    if (!Unk_020d77a4::vfunc_0c()) {
        return FALSE;
    }
    unk_640.func_0208211c();
    return TRUE;
}
