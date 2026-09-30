#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov071_02272c38;

typedef void (*Unk_ov071_0227160c_Cb)(void);

extern "C" {
void *func_0209750c();
s32 func_02098044(void *h, s32 n);
void func_0209801c(void *h, s32 n);
void *func_0209868c(void *h);
s32 func_02087b14(void *h);
void func_02087af0(void *h);
void func_02087ad8(void *h);
void func_0209cf88(void *p);
s32 func_0209cd00(void *p, s32 v);
void func_0208a598();
void func_0208a58c();
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02063b8c(s32 n);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02040144(s32 a, s32 b);
void func_02067a84(void *self, u8 *buf, void *name);
s32 func_020aa514(void *h);
u32 func_0201bc4c(void *p, s32 n);
BOOL func_0206ed18();
s32 func_0206ed38();
u32 func_02099048();
BOOL func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void func_02099064(s32 n);
s32 func_0206ea84(void *cb);
s32 func_0201ade4(void *owner, s32 n);
void func_0201adc8(void *owner, s32 n);
u32 func_020951ec(s32 n);
s32 func_02002bdc(void *a, void *b);
BOOL func_0201bd84(s16 a);
u32 func_020e7fa8(void *p);
extern u16 data_020c6cc8;
extern u32 data_021f4880[];
extern u32 data_021c7c88;
extern u8 data_021d7350[];
extern u32 data_0213a740[];
extern char data_ov071_02272b40[];
extern u32 data_ov071_0227297c[];
extern u8 data_ov071_02272980[];
BOOL func_ov071_02271ab0(u16 *p, s32 x);
}

// Member object types, named after their constructors.
struct Unk_02053d3c { Unk_02053d3c(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc {
    Unk_0201accc();
    void *func_0201a978();
    u32 pad[0x58 / 4];
};
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); s32 func_0201acfc(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); void func_020135bc(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 {
    Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u32 pad[0xb4 / 4];
};
struct Unk_02014254 {
    Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u32 pad[0x28 / 4];
};
struct Unk_02082014 { Unk_02082014(); u32 pad[0x14 / 4]; };

struct Unk_0209cf88_Obj {
    void func_0209cf88();
    s32 func_0209cd00(s32 v);
    u32 pad[2];
};

// Message sent to the scene (func_02067a84): id byte, then two halfwords.
struct Unk_ov071_0227160c_Msg {
    u8 id;
    u8 pad;
    u16 a;
    u16 b;
};

struct Unk_ov071_02271ca0_Vec {
    s32 x, y, z;
};

struct Unk_ov071_02271800_Out {
    const char *unk_00;
    u8 unk_04;
};

// Library menu-state base (vtable 0x020d8b38 shape)
class Unk_020d8b38 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov071_02271800_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void *func_02015a5c();
    void func_02015ab0(u32 a);
    void func_02014f74();
    void func_02014a4c();
    void func_0201517c(u32 cb, u32 b, u32 c);
    void func_020151d0(s32 a);
    void func_02014ce4(u16 *p, u32 a, u32 b, u32 c);

    /* 0x04 */ u8 pad_04[0x18];
    /* 0x1c */ u8 unk_1c[2];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0x6c];
};

class Unk_ov071_02272ba8;
typedef void (Unk_ov071_02272ba8::*Unk_ov071_02272ba8_Fn)();

// Menu-state sub-object at +0x658 of the scene (vtable 0x02272ba8)
class Unk_ov071_02272ba8 : public Unk_020d8b38 {
public:
    Unk_ov071_02272ba8();
    virtual ~Unk_ov071_02272ba8();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov071_02271800_Out *out);
    virtual void vfunc_84();

    void func_ov071_022718dc(Unk_ov071_02272c38 *o);
    void func_ov071_022719e4();
    void func_ov071_022719ec();
    void func_ov071_02271ad8(s32 idx);
    void func_ov071_02271ae8(s32 idx);
    void func_ov071_02271af8(Unk_ov071_02272ba8_Fn *out, s32 idx);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov071_02272c38 *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 pad_b5[3];
    /* 0xb8 */ Unk_ov071_02272ba8_Fn unk_b8;
    /* 0xc0 */ Unk_ov071_02272ba8_Fn unk_c0;
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0xd4 - 0x9c];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
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

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_a8();
    Unk_02082014 unk_640;
    u32 unk_654;
};

// Scene class (vtable 0x02272c38)
class Unk_ov071_02272c38 : public Unk_020d8bc8 {
public:
    Unk_ov071_02272c38() {}
    virtual ~Unk_ov071_02272c38();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    s32 func_ov071_02271990(u8 *p, s32 n);
    s32 func_ov071_022719c4(u8 *p, s32 n);
    BOOL func_ov071_02271bcc();
    BOOL func_ov071_02271bd0();
    BOOL func_ov071_02271c50();
    BOOL func_ov071_02271ca0();

    BOOL func_ov071_022724ec(s32 mask);
    BOOL func_ov071_022725c8(s32 *p);
    BOOL func_ov071_022725d8(s32 a);
    void func_ov071_022726c4(s32 state);
    BOOL func_ov071_02271f30();
    BOOL func_ov071_02272090(s32 *x, s32 *z);

    Unk_ov071_02272ba8 unk_658;
    u8 unk_720[5];
    u8 pad_725[3];
    s32 unk_728;
    s32 unk_72c;
    u32 unk_730;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov071_02272c38::~Unk_ov071_02272c38() {}

void Unk_ov071_02272c38::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov071_022726c4(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_ov071_022726c4(5);
        break;
    case 8:
        func_ov071_022726c4(3);
        break;
    }
}

BOOL Unk_ov071_02272c38::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov071_02272ba8::vfunc_18() {
    u8 m;
    s32 t = func_020aa514(func_02015a5c());
    char *const name = data_ov071_02272b40;
    s32 r5 = 0xff;
    u8 *g = data_021d7350;
    s32 x = unk_1e;
    if (x > 0x15) {
        goto hi;
    }
    if (x >= 0x15) {
        goto blkA;
    }
    if (x <= 0xc) {
        if (x >= 8) {
            switch (x) {
            case 8:
                goto blk8;
            case 0xc:
                goto blkC;
            }
        }
    }
    goto end;
hi:
    switch (x) {
    case 0x17:
        goto blkA;
    case 0x1d:
    case 0x27:
        goto blkB;
    case 0x20:
    case 0x21:
        goto blkC2;
    case 0x23:
        goto blkD;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
        goto blkE;
    default:
        goto end;
    }
blkE:
    switch (t) {
    case 0:
        r5 = 4;
        break;
    case 1:
        r5 = 2;
        break;
    }
    goto end;
blk8:
    r5 = (u8)(x + 1);
    g[0x15e28] = t + 1;
    goto end;
blkC:
    switch (t) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        r5 = 0xd;
        func_02115fb4((u8 *)unk_b0 + 0x720, 0, 5);
        unk_b4 = 0;
        if (t == 4) {
            func_02040144(0, 1);
        } else {
            func_02040144(0, 0);
        }
        break;
    }
    goto end;
blkA:
    if (t == 0) {
        func_0202e1cc(0x28, 1);
        if (func_0201ade4(unk_b0, 0xbb8) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkB:
    if (t == 0) {
        func_0202e1cc(0x28, 1);
        if (func_0201ade4(unk_b0, 0x1770) != 0) {
            r5 = 0x18;
        } else {
            r5 = 0x16;
        }
    }
    goto end;
blkC2:
    if (t == 0) {
        r5 = 0x23;
    }
    goto end;
blkD:
    func_0201517c((u32)func_ov071_02271ab0, 0xd, 1);
    func_020151d0(0);
    func_ov071_02271ae8(0);
end:
    if (r5 != 0xff) {
        m = r5;
        func_02067a84(unk_3c, &m, name);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov071_02272ba8::vfunc_14() {
    char *const name = data_ov071_02272b40;
    Unk_ov071_0227160c_Msg m;
    s32 r5 = 0xff;
    void *h = func_0209750c();
    switch (unk_1e) {
    case 5:
    case 0x14:
    case 0x1c:
        func_0208a598();
        r5 = 0x15;
        if (func_02098044(h, 0x17) != 0) {
            r5 = 0x1d;
        }
        break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12: {
        Unk_ov071_02272c38 *o = unk_b0;
        s32 idx = o->func_ov071_02271990(o->unk_720, 5);
        u8 *q = &unk_b0->unk_720[idx];
        if (*q == 0) {
            *q = 1;
        }
        r5 = (u8)(idx + 0xe);
        unk_b4 = unk_b4 + 1;
        if (unk_b4 >= 4) {
            if (func_02098044(h, 0x18) == 0) {
                r5 = 0x13;
            } else {
                r5 = 0x1b;
                func_0202e1cc(0x28, 1);
            }
            unk_b4 = 0;
            func_02115fb4(unk_b0->unk_720, 0, 5);
        }
        break;
    }
    case 0x13:
        if (func_02098044(h, 0x17) == 0) {
            r5 = 0x14;
        } else {
            r5 = 0x1c;
        }
        break;
    case 0x18:
        if (func_02098044(h, 0x17) == 0) {
            r5 = 0x19;
        } else {
            r5 = 0x1e;
        }
        break;
    case 0x19:
        m.a = 0x149d;
        func_02014ce4(&m.a, 0, 5, 0);
        func_0201adc8(unk_b0, 0xbb8);
        r5 = 0x1a;
        func_0209801c(h, 0x17);
        func_02087af0(func_0209868c(h));
        break;
    case 0x16:
    case 0x1a:
    case 0x1f:
        func_0208a58c();
        break;
    case 0x1e:
        m.b = 0x14a0;
        func_02014ce4(&m.b, 0, 5, 0);
        func_0201adc8(unk_b0, 0x1770);
        r5 = 0x1f;
        func_0209801c(h, 0x18);
        break;
    case 0x23:
        func_0201517c((u32)func_ov071_02271ab0, 0xd, 1);
        func_020151d0(0);
        func_ov071_02271ae8(0);
        break;
    case 0x25:
        func_02014a4c();
        if (func_0206ea84((void *)func_ov071_02271ab0) != 0) {
            r5 = 0x21;
        } else {
            r5 = 0x26;
        }
        break;
    }
    if (r5 != 0xff) {
        m.id = r5;
        func_02067a84(unk_3c, &m.id, name);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov071_02272ba8::vfunc_78(Unk_ov071_02271800_Out *out) {
    BOOL b = FALSE;
    void *h = func_0209750c();
    if (func_02098044(h, 0x17) != 0) {
        s32 v = func_02087b14(func_0209868c(h));
        Unk_0209cf88_Obj obj;
        obj.func_0209cf88();
        if (obj.func_0209cd00(v) < 1) {
            unk_ac = 1;
        } else if (func_02098044(h, 0x18) != 0) {
            if (func_0202e1cc(0x28, b) != 0) {
                unk_ac = 2;
            } else {
                b = TRUE;
            }
        } else if (func_0202e1cc(0x28, b) != 0) {
            unk_ac = b;
        } else {
            b = TRUE;
        }
    } else if (func_0202e1cc(0x28, b) != 0) {
        unk_ac = b;
    } else {
        b = TRUE;
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = data_ov071_02272980[unk_ac * 8];
        if (b) {
            out->unk_04 = func_02063b8c(5) + 0x28;
        }
        out->unk_00 = (const char *)data_ov071_0227297c[unk_ac * 2];
    }
}

void Unk_ov071_02272ba8::func_ov071_022718dc(Unk_ov071_02272c38 *o) {
    vfunc_08();
    unk_b0 = o;
    unk_ac = 0;
    unk_b4 = 0;
}

void Unk_ov071_02272ba8::vfunc_08() {
    Unk_020d8b38::vfunc_08();
    Unk_ov071_02272ba8_Fn t = *(Unk_ov071_02272ba8_Fn *)data_0213a740;
    unk_b8 = t;
    unk_c0 = t;
}

Unk_ov071_02272ba8::~Unk_ov071_02272ba8() {}

Unk_ov071_02272ba8::Unk_ov071_02272ba8() {}

s32 Unk_ov071_02272c38::func_ov071_02271990(u8 *p, s32 n) {
    s32 c = func_ov071_022719c4(p, n);
    s32 r = 0;
    s32 k = func_02063b8c(c);
    s32 i = r;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

void Unk_ov071_02272ba8::func_ov071_022719e4() {
    func_02014f74();
}

void Unk_ov071_02272ba8::func_ov071_022719ec() {
    void *scene = unk_3c;
    Unk_ov071_0227160c_Msg m;
    m.id = 0x24;
    if (func_0206ed18() != 0) {
        s32 r4 = func_0206ed38();
        m.a = func_02099048();
        BOOL same;
        if (func_0204b2d4(&m.a) != 0) {
            m.b = 0xfff1;
            if (func_0204b25c(&m.a) == func_0204b25c(&m.b)) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        } else {
            if (m.a == 0xfff1) {
                same = TRUE;
            } else {
                same = FALSE;
            }
        }
        if (same == 0) {
            void *w = func_0209868c(func_0209750c());
            m.id = 0x25;
            func_02087ad8(w);
            func_02014ce4(&m.a, 0, 4, 0);
            if (r4 >= 0) {
                func_02099064(r4);
            }
            func_ov071_02271ad8(1);
        } else {
            func_02014f74();
        }
    } else {
        func_02014f74();
    }
    func_02067a84(scene, &m.id, data_ov071_02272b40);
}

extern "C" BOOL func_ov071_02271ab0(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x3934 && v <= 0x3983) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov071_02272ba8::func_ov071_02271ad8(s32 idx) {
    func_ov071_02271af8(&unk_c0, idx);
}

void Unk_ov071_02272ba8::func_ov071_02271ae8(s32 idx) {
    func_ov071_02271af8(&unk_b8, idx);
}

void Unk_ov071_02272ba8::func_ov071_02271af8(Unk_ov071_02272ba8_Fn *out, s32 idx) {
    static Unk_ov071_02272ba8_Fn tbl[2] = {&Unk_ov071_02272ba8::func_ov071_022719ec,
                                           &Unk_ov071_02272ba8::func_ov071_022719e4};
    *out = tbl[idx];
}

void Unk_ov071_02272ba8::vfunc_84() {
    if (unk_b8) {
        (this->*unk_b8)();
        Unk_ov071_02272ba8_Fn t = *(Unk_ov071_02272ba8_Fn *)data_0213a740;
        unk_b8 = t;
        if (unk_c0) {
            unk_b8 = unk_c0;
            unk_c0 = t;
        }
    }
}

BOOL Unk_ov071_02272c38::func_ov071_02271bcc() {
    return TRUE;
}

BOOL Unk_ov071_02272c38::func_ov071_02271bd0() {
    unk_730 = func_020951ec(4);
    if (func_0202e1cc(0x28, 0) != 0) {
        if (func_ov071_022725d8(1) != 0) {
            func_ov071_022726c4(3);
            return TRUE;
        }
    } else {
        if (func_ov071_022725d8(0) != 0) {
            if (func_ov071_022724ec(0x3000) == 0) {
                if (func_ov071_022724ec(0x8000) != 0) {
                    func_ov071_022726c4(1);
                    return TRUE;
                }
            }
        }
        func_ov071_022726c4(3);
    }
    return TRUE;
}

BOOL Unk_ov071_02272c38::func_ov071_02271c50() {
    unk_558.func_020135bc();
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_728 = 0x28;
    return TRUE;
}

BOOL Unk_ov071_02272c38::func_ov071_02271ca0() {
    Unk_02019858 *p = &unk_564;
    Unk_ov071_02271ca0_Vec v;
    Unk_ov071_02271ca0_Vec v2;
    if (func_ov071_022725c8(&unk_72c) == 0) {
        if (func_0202e1cc(0x28, 0) == 0) {
            if (func_ov071_022725d8(0) != 0) {
                if (func_ov071_022724ec(0x8000) != 0) {
                    func_ov071_022726c4(1);
                    return TRUE;
                }
            }
        }
    }
    func_ov071_022725c8(&unk_728);
    if (func_ov071_022725d8(1) != 0) {
        if (func_ov071_02271f30() == 0) {
            if (p->func_02019790() != 0) {
                if (unk_3aa.func_0201acfc() == 2) {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((func_020e7fa8(&data_021c7c88) & 7) == 0) {
                    u32 *d = data_021f4880;
                    v.x = d[0];
                    v.y = d[1];
                    v.z = d[2];
                    if (func_ov071_02272090(&v.x, &v.z) != 0) {
                        s32 ang = func_02002bdc(&unk_5c, &v);
                        if (func_0201bd84((s16)(ang - unk_8e)) != 0) {
                            s32 kind = 1;
                            if (func_02063b8c(4) == 0) {
                                kind = 2;
                            }
                            if (kind != unk_564.func_020197a8()) {
                                p->func_020196b4(kind, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_728 = 0x64;
                            }
                        } else if (unk_564.func_020197a8() != 4) {
                            p->func_020196b4(4, 1, v.x, v.z, 0, ang, 0, 0, data_020c6cc8, 0);
                            unk_728 = 0x50;
                        }
                    } else {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (unk_564.func_020197a8() == 1 || unk_564.func_020197a8() == 2 || unk_564.func_020197a8() == 4) {
                    if (unk_728 == 0) {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        u32 *q = (u32 *)unk_350.func_0201a978();
                        v2.x = q[0];
                        v2.y = q[1];
                        v2.z = q[2];
                        s32 a = func_02002bdc(&unk_5c, &v2);
                        if (func_0201bd84((s16)(a - unk_8e)) == 0) {
                            p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_ov071_022726c4(4);
    }
    return FALSE;
}

s32 Unk_ov071_02272c38::func_ov071_022719c4(u8 *p, s32 n) {
    s32 c = 0;
    s32 i = c;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}
