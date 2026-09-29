#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_0220bc80_V3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
    void func_020a710c(const char *s);
};

struct Unk_ov004_0220bdbc_P {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0220c0bc_Mtx {
    s32 m[9];
};

struct Unk_ov004_0220c0bc_B {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x24];
    /* 0x28 */ s32 unk_28[9];
};

struct Unk_ov004_0220c0bc_Obj {
    u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220c0bc_B *unk_b4;
};

struct Unk_ov004_0220c0bc_Actor {
    u8 pad_00[0x8e];
    /* 0x8e */ s16 unk_8e;
};

class Unk_ov004_0224882c;

extern "C" {
void *func_ov004_02209ef0(u32 size);
}

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void operator delete(void *p);
    static void *operator new(unsigned long size) { return func_ov004_02209ef0(size); }

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, Unk_ov004_0220c0bc_Obj *p);
    virtual BOOL vfunc_70(s32 a, u32 v);
    virtual BOOL vfunc_74();
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);

    u32 func_ov004_022087a4();
    Unk_ov004_0220c0bc_Actor *func_ov004_022087b0();

    /* 0x0f0 */ u8 f_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 f_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov004_0220bdbc_P *unk_128;
    /* 0x12c */ u8 f_12c[0x178 - 0x12c];
    /* 0x178 */ u8 f_178[0x188 - 0x178];
    /* 0x188 */ u8 f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 f_284[0x288 - 0x284];
    /* 0x288 */ u8 f_288[0x534 - 0x288];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 f_594[0x628 - 0x594];
    /* 0x628 */ u8 f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[2];
    /* 0x73e */ u8 f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 f_744[0x760 - 0x744];
    /* 0x760 */ u8 f_760[0x768 - 0x760];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u8 f_780[0x794 - 0x780];
    /* 0x794 */ u8 f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 unk_7b4;
    /* 0x7c0 */ u8 f_7c0[0x840 - 0x7c0];
};

struct Unk_ov004_0221076c_R {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

extern "C" {
void func_0204ed8c(void *out, s32 x, s32 y);
void func_0204ee10(s32 *x, s32 *y, void *v);
s32 func_020e9650(void *a, void *b);
void func_020e93a0(void *v, s32 a);
void func_01ffca8c(void *a, void *b, void *c);
void *func_02095204(s32 i);
BOOL func_ov004_022350c8(void);
BOOL func_ov004_022087e8(void *v, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov004_02234f80(s32 a, s32 b);
BOOL func_ov004_02234f6c(void *p);
s32 func_0202fff0(s32 a, s32 b);
s32 func_0202ffdc(void *p);
void *func_ov004_02235718(void);
Unk_ov004_0224882c *func_ov004_022355d8(void *mgr, s32 x, s32 y, s32 z);
u32 func_02052f44(u32 a);
extern char data_ov004_0224bbb0[];
extern char data_ov004_0224bbd0[];
extern char data_ov004_0224bbe4[];
extern s32 data_020c8cbc;
extern void *data_020cbb18;

s32 func_0206ea84(BOOL (*cb)(void *, s32));
s32 func_0206ead4(s32 a, s32 b);
BOOL func_0204b2d4(void);
s32 func_02052ff8(void *p);
void func_0203e47c(void *p, Unk_ov004_022488d8 *q);
void func_0203e488(void *p, Unk_ov004_022488d8 *q);
s32 func_0203d67c(void *p);
s32 func_0203d704(void *p, s32 a);
s32 func_020b4934(void);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
void func_020a0984(void);
BOOL func_020a0318(void);
BOOL func_020a0304(void);
s32 func_020974f8(void);
u32 func_020b0f54(void);
s32 func_02072e44(void *p);
void func_ov004_02224ad8(u32 a, u32 b);
BOOL func_ov004_02224b14(Unk_ov004_0221076c_R *a, s32 *b, u16 *c, s16 d, s32 e);
void *func_ov004_022354d8(void);
void *func_ov004_02235464(void *a, void *b);
u16 func_ov004_022354e0(void *o);
Unk_ov004_0221076c_R *func_ov004_022354f0(void *o);
s32 func_ov004_022354e8(void *o);
s32 func_ov004_022354f8(void *o);
}

struct Unk_ov004_02210d58_P {
    s32 x, y;
    Unk_ov004_02210d58_P() {
        x = 0;
        y = 0;
    }
};

extern "C" BOOL func_ov004_02210a98(Unk_ov004_02210d58_P *p);

class Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d68();
    ~Unk_ov004_02210d68();
    Unk_ov004_02210d58_P *func_ov004_02210d58(u32 i);

    Unk_ov004_02210d58_P v[2];
};

class Unk_ov004_02210d28 : public Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d28();
    ~Unk_ov004_02210d28();
};

class Unk_ov004_02210d48 : public Unk_ov004_02210d68 {
public:
    Unk_ov004_02210d48();
    ~Unk_ov004_02210d48();
};

struct Unk_ov004_022108f0_V {
    s32 x, y, z;
};

struct Unk_ov004_02210d7c_V {
    s32 x, y, z;
    Unk_ov004_02210d7c_V() {}
    ~Unk_ov004_02210d7c_V() {}
};

struct Unk_ov004_02210dd8_Chk {
    static inline BOOL R(u16 v) {
        return v == 0x37 ? TRUE : FALSE;
    }
};

struct Unk_ov004_022108f0_Pl {
    u8 pad_00[0x5c];
    s32 x, y, z;
};

struct Unk_ov004_022105d8_Pad {
    s32 v[2];
    Unk_ov004_022105d8_Pad() {}
    ~Unk_ov004_022105d8_Pad() {}
};

class Unk_ov004_0224ba18 : public Unk_ov004_0224882c {
public:
    virtual BOOL vfunc_70(s32 a, u32 v);

    // Callees outside this range
    void func_ov004_022103ac();
    BOOL func_ov004_022103ec();
    void func_ov004_022103fc();
    BOOL func_ov004_02210488();
    void func_ov004_022104b8();

    BOOL func_ov004_02210534();
    void func_ov004_02210538();
    BOOL func_ov004_0221059c();
    void func_ov004_022105a0();
    BOOL func_ov004_022105d0();
    void func_ov004_022105d4();
    BOOL func_ov004_022105d8();
    void func_ov004_0221061c();
    BOOL func_ov004_02210630();
    void func_ov004_02210634();
    BOOL func_ov004_02210678();
    void func_ov004_0221067c();
    BOOL func_ov004_022106bc();
    void func_ov004_022106c0();
    BOOL func_ov004_022106c4();
    void func_ov004_0221072c();
    BOOL func_ov004_0221075c();
    void func_ov004_0221076c();
    BOOL func_ov004_022107cc();
    void func_ov004_022107d0();
    BOOL func_ov004_0221087c();
    void func_ov004_022108f0();
    BOOL func_ov004_02210ac4();
    void func_ov004_02210ad4();
    void func_ov004_02210d7c(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt);
    s32 func_ov004_02210dd8(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c);
    u32 func_ov004_02210f0c(Unk_ov004_02210d28 *q);
    void func_ov004_02210f74(Unk_ov004_02210d48 *q);

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 pad_845;
    /* 0x846 */ u16 unk_846;
    /* 0x848 */ u8 pad_848[0x854 - 0x848];
    /* 0x854 */ s32 unk_854;
    /* 0x858 */ u8 pad_858[2];
    /* 0x85a */ u8 unk_85a;
    /* 0x85b */ u8 pad_85b[5];
};

extern "C" BOOL func_ov004_02210574(void *p, s32 b) {
    if (b == 0) {
        if (func_0204b2d4()) {
            if (func_02052ff8(p) == 5) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02210534() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_02210538() {
    if (unk_128) {
        if (unk_128->unk_04 == 0) {
            if (func_0206ead4(func_0206ea84(func_ov004_02210574), 0x28)) {
                vfunc_70(0xb, 0xff);
            }
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221059c() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022105a0() {
    if (unk_128) {
        if (unk_128->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022105d0() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022105d4() {
}

BOOL Unk_ov004_0224ba18::func_ov004_022105d8() {
    Unk_ov004_022105d8_Pad pad;
    func_0203e488(this, this);
    unk_128->unk_08 = 1;
    Unk_ov004_022488d8::func_020a710c(data_ov004_0224bbb0);
    unk_10a = 4;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221061c() {
    vfunc_70(8, 0xff);
}

BOOL Unk_ov004_0224ba18::func_ov004_02210630() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_02210634() {
    if (unk_128) {
        if (unk_128->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
            func_020b4f58(func_020b4934(), 0x2e, 2, 0);
            func_020a0984();
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_02210678() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221067c() {
    if (unk_128) {
        if (unk_128->unk_04 == 0) {
            func_ov004_02224ad8(unk_842, 0);
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022106bc() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022106c0() {
}

BOOL Unk_ov004_0224ba18::func_ov004_022106c4() {
    Unk_ov004_022105d8_Pad pad;
    func_0203e488(this, this);
    unk_128->unk_08 = 1;
    if (func_020a0318() || func_020a0304()) {
        Unk_ov004_022488d8::func_020a710c(data_ov004_0224bbd0);
        unk_10a = 0x19;
    } else {
        Unk_ov004_022488d8::func_020a710c(data_ov004_0224bbe4);
        unk_10a = 0;
    }
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221072c() {
    if (unk_846 < 0x18) {
        unk_846++;
    }
    if (unk_846 == 0x18) {
        vfunc_70(4, 0xff);
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221075c() {
    unk_846 = 0;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_0221076c() {
    void *o = func_ov004_02235464(func_ov004_022354d8(), this);
    u16 v = func_ov004_022354e0(o);
    Unk_ov004_0221076c_R *a = func_ov004_022354f0(o);
    Unk_ov004_0221076c_R *b = func_ov004_022354f0(o);
    if (func_ov004_02224b14(a, &b->unk_08, &v, (s16)(unk_8e - 0x4000), 1)) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_022107cc() {
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022107d0() {
    BOOL r4 = FALSE;
    unk_854 = 0;
    void *o = func_ov004_02235464(func_ov004_022354d8(), this);
    if (o) {
        if (unk_844 == func_020974f8()) {
            if (func_ov004_022354e8(o) == 2 || func_ov004_022354e8(o) == 0) {
                unk_854 = 1;
                if (unk_840 < 7) {
                    r4 = TRUE;
                    unk_840++;
                }
                if (func_ov004_022354f8(o) > 0x200) {
                    if (unk_840 >= 7) {
                        if (func_02072e44(data_020cbb18) == 0) {
                            func_0203d704(this, 0);
                        }
                    }
                }
            } else {
                if (func_020b0f54() <= 1) {
                    unk_854 = 2;
                }
            }
        }
    }
    if (r4 == 0) {
        unk_840 = 0;
    }
}

BOOL Unk_ov004_0224ba18::func_ov004_0221087c() {
    unk_842 = (unk_5c[0] < (data_020c8cbc >> 1)) ? 1 : 0;
    unk_843 = (unk_5c[2] < 0x16000) ? 1 : 0;
    if (unk_842) {
        if (unk_843) {
            unk_844 = 0;
        } else {
            unk_844 = 2;
        }
    } else {
        if (unk_843) {
            unk_844 = 1;
        } else {
            unk_844 = 3;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02210ac4() {
    unk_840 = 0;
    return TRUE;
}

void Unk_ov004_0224ba18::func_ov004_022108f0() {
    u16 v;
    BOOL r7 = FALSE;
    void *o = func_ov004_02235464(func_ov004_022354d8(), this);
    Unk_ov004_022108f0_Pl *pl = (Unk_ov004_022108f0_Pl *)func_02095204(4);
    if (o != 0) {
        if (pl != 0) {
            if (func_ov004_022350c8() != 0) {
                if (func_ov004_022354e8(o) == 2 || func_ov004_022354e8(o) == 0) {
                    Unk_ov004_02210d48 q;
                    Unk_ov004_022108f0_V a, b, c, e, f;
                    func_ov004_02210f74(&q);
                    Unk_ov004_02210d58_P *p0 = q.func_ov004_02210d58(0);
                    func_0204ed8c(&a, p0->x, p0->y);
                    Unk_ov004_02210d58_P *p1 = q.func_ov004_02210d58(1);
                    func_0204ed8c(&b, p1->x, p1->y);
                    s32 *pv = &pl->x;
                    c.x = pl->x;
                    c.y = pv[1];
                    c.z = pv[2];
                    s32 d0 = func_020e9650(&c, &a);
                    s32 d1 = func_020e9650(&c, &b);
                    Unk_ov004_02210d58_P sel;
                    if (d0 < d1) {
                        Unk_ov004_02210d58_P *t = q.func_ov004_02210d58(0);
                        sel.x = t->x;
                        sel.y = t->y;
                    } else {
                        Unk_ov004_02210d58_P *t = q.func_ov004_02210d58(1);
                        sel.x = t->x;
                        sel.y = t->y;
                    }
                    if (func_ov004_02210a98(&sel)) {
                        e.x = 0;
                        e.y = 0;
                        e.z = 0x2000;
                        func_020e93a0(&e, func_ov004_022354e0(o));
                        s32 z = e.z + func_ov004_022354f0(o)->unk_08;
                        f.x = e.x + func_ov004_022354f0(o)->unk_00;
                        f.y = 0;
                        f.z = z;
                        if (func_ov004_022087e8(&f, 0x800, 0x2000, 0x800, 0)) {
                            if (unk_840 < 7) {
                                r7 = TRUE;
                                unk_840++;
                            }
                            if (func_ov004_022354f8(o) > 0x200) {
                                if (unk_840 >= 7) {
                                    v = func_ov004_022354e0(o);
                                    Unk_ov004_0221076c_R *ra = func_ov004_022354f0(o);
                                    Unk_ov004_0221076c_R *rb = func_ov004_022354f0(o);
                                    func_ov004_02224b14(ra, &rb->unk_08, &v, (s16)(unk_8e - 0x4000), 0);
                                    unk_840 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r7 == 0) {
        unk_840 = 0;
    }
}

s32 Unk_ov004_0224ba18::func_ov004_02210dd8(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c) {
    Unk_ov004_022108f0_V out;
    s32 x, y;
    func_ov004_02210d7c(&out, a, b, c);
    func_0204ee10(&x, &y, &out);
    Unk_ov004_0224882c *obj = func_ov004_022355d8(func_ov004_02235718(), x, y, 0);
    if (func_ov004_022087e8(&out, 0x800, 0x2000, 0x800, 0) == 0) {
        return 0;
    }
    if (obj != 0) {
        if (obj == this) {
            return 1;
        }
        if (func_02052f44(obj->func_ov004_022087a4()) != 0) {
            return 2;
        }
        if (unk_8e == obj->unk_8e) {
            if (Unk_ov004_02210dd8_Chk::R(*(u16 *)((u8 *)obj + 0xc))) {
                Unk_ov004_02210d28 q1, q2;
                u32 n1 = func_ov004_02210f0c(&q1);
                u32 n2 = ((Unk_ov004_0224ba18 *)obj)->func_ov004_02210f0c(&q2);
                u32 i, j;
                for (i = 0; i < n1; i++) {
                    Unk_ov004_02210d58_P *p = q1.func_ov004_02210d58(i);
                    s32 px = p->x;
                    s32 py = p->y;
                    for (j = 0; j < n2; j++) {
                        Unk_ov004_02210d58_P *q = q2.func_ov004_02210d58(j);
                        s32 qy = q->y;
                        s32 qx = q->x;
                        qx = px - qx;
                        if (qx < 0) qx = -qx;
                        qy = py - qy;
                        if (qy < 0) qy = -qy;
                        if (qx + qy == 1) {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (func_ov004_02234f6c(&out) == 0) {
            if (func_0202ffdc(&out) == -1) {
                return 2;
            }
        }
    }
    return 0;
}

extern "C" BOOL func_ov004_02210a98(Unk_ov004_02210d58_P *p) {
    if (func_ov004_02234f80(p->x, p->y) == 0) {
        if (func_0202fff0(p->x, p->y) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

typedef void (Unk_ov004_0224ba18::*Unk_ov004_02210ad4_Fn)();
typedef BOOL (Unk_ov004_0224ba18::*Unk_ov004_02210bec_Fn)();

void Unk_ov004_0224ba18::func_ov004_02210ad4() {
    static Unk_ov004_02210ad4_Fn tbl[14] = {
        &Unk_ov004_0224ba18::func_ov004_022108f0,
        &Unk_ov004_0224ba18::func_ov004_022107d0,
        &Unk_ov004_0224ba18::func_ov004_0221076c,
        &Unk_ov004_0224ba18::func_ov004_0221072c,
        &Unk_ov004_0224ba18::func_ov004_022106c0,
        &Unk_ov004_0224ba18::func_ov004_0221067c,
        &Unk_ov004_0224ba18::func_ov004_02210634,
        &Unk_ov004_0224ba18::func_ov004_0221061c,
        &Unk_ov004_0224ba18::func_ov004_022105d4,
        &Unk_ov004_0224ba18::func_ov004_022105a0,
        &Unk_ov004_0224ba18::func_ov004_02210538,
        &Unk_ov004_0224ba18::func_ov004_022104b8,
        &Unk_ov004_0224ba18::func_ov004_022103fc,
        &Unk_ov004_0224ba18::func_ov004_022103ac,
    };
    if (unk_85a < 14) {
        (this->*tbl[unk_85a])();
    }
}

BOOL Unk_ov004_0224ba18::vfunc_70(s32 a, u32 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    static Unk_ov004_02210bec_Fn tbl[14] = {
        &Unk_ov004_0224ba18::func_ov004_02210ac4,
        &Unk_ov004_0224ba18::func_ov004_0221087c,
        &Unk_ov004_0224ba18::func_ov004_022107cc,
        &Unk_ov004_0224ba18::func_ov004_0221075c,
        &Unk_ov004_0224ba18::func_ov004_022106c4,
        &Unk_ov004_0224ba18::func_ov004_022106bc,
        &Unk_ov004_0224ba18::func_ov004_02210678,
        &Unk_ov004_0224ba18::func_ov004_02210630,
        &Unk_ov004_0224ba18::func_ov004_022105d8,
        &Unk_ov004_0224ba18::func_ov004_022105d0,
        &Unk_ov004_0224ba18::func_ov004_0221059c,
        &Unk_ov004_0224ba18::func_ov004_02210534,
        &Unk_ov004_0224ba18::func_ov004_02210488,
        &Unk_ov004_0224ba18::func_ov004_022103ec,
    };
    if ((u32)a < 14) {
        if ((this->*tbl[a])()) {
            unk_85a = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224ba18::func_ov004_02210d7c(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt) {
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    Unk_ov004_02210d7c_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0;
    if (opt) {
        t.x = opt->x;
        t.y = opt->y;
        t.z = opt->z;
    }
    Unk_ov004_02210d7c_V w;
    w.x = t.x;
    w.y = t.y;
    w.z = t.z + 0x1000;
    func_020e93a0(&w, ang);
    func_01ffca8c(out, &w, out);
}

Unk_ov004_02210d58_P *Unk_ov004_02210d68::func_ov004_02210d58(u32 i) {
    return &v[i & 1];
}

Unk_ov004_02210d68::Unk_ov004_02210d68() {
}

Unk_ov004_02210d68::~Unk_ov004_02210d68() {
}

Unk_ov004_02210d28::Unk_ov004_02210d28() {
}

Unk_ov004_02210d28::~Unk_ov004_02210d28() {
}

Unk_ov004_02210d48::Unk_ov004_02210d48() {
}

Unk_ov004_02210d48::~Unk_ov004_02210d48() {
}
