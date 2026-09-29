#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
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
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
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
};

struct Unk_ov004_02209d40_Bits {
    u32 a : 4;
    u32 b : 4;
    u32 c : 16;
    u32 d : 2;
    u32 e : 2;
    u32 f : 1;
    u32 w1;
};

class Unk_ov004_02209e44_Target {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_64(u32 a, void *b);
};

struct Unk_ov004_02209e44_Inner {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

struct Unk_ov004_02209e44_Outer {
    /* 0x00 */ Unk_ov004_02209e44_Inner *unk_00;
    /* 0x04 */ struct {
        u8 pad_00[0x2c];
        Unk_ov004_02209e44_Target *unk_2c;
    } *unk_04;
};

struct Unk_ov004_02209e14_Obj {
    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ void *unk_14;
    /* 0x18 */ u8 pad_18[4];
    /* 0x1c */ void *unk_1c;
    /* 0x20 */ u8 pad_20[4];
    /* 0x24 */ void *unk_24;
    /* 0x28 */ u8 pad_28[0x8e - 0x28];
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 pad_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91;
    /* 0x92 */ u8 unk_92;
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void operator delete(void *p);

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
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_74();
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    // Callees outside this range
    BOOL func_ov004_02206f8c();
    void func_ov004_022077a4();
    void func_ov004_02207ef0();
    u32 func_ov004_022071cc(s32 a, s32 b);
    void func_ov004_02207e48();
    BOOL func_ov004_0220579c(s32 a);
    u32 func_ov004_022087a4();
    BOOL func_ov004_02209bb4();
    BOOL func_ov004_02209c10();
    BOOL func_ov004_02209c44();
    BOOL func_ov004_02209c58();
    BOOL func_ov004_02209c88();
    BOOL func_ov004_02209ccc();

    /* 0x0f0 */ u8 f_0f0[0x12e - 0xf0];
    /* 0x12e */ u8 f_12e[0x178 - 0x12e];
    /* 0x178 */ u8 f_178[0x188 - 0x178];
    /* 0x188 */ u8 f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 f_284[0x288 - 0x284];
    /* 0x288 */ u8 f_288[0x534 - 0x288];
    /* 0x534 */ u8 f_534[0x628 - 0x534];
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
    /* 0x794 */ u8 f_794[0x7c0 - 0x794];
    /* 0x7c0 */ u8 f_7c0[0x840 - 0x7c0];
};

extern "C" {
extern u16 data_ov004_022486f8;
extern u8 data_ov004_02252058[];
typedef void (*Unk_ov004_02209578_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov004_02209578_Fn, Unk_ov004_02209578_Fn);
void __cxa_vec_cleanup(void *, s32, s32, Unk_ov004_02209578_Fn);

void func_ov004_02235980(void *);
void func_ov004_022059ec(void *);
void func_ov004_02205c1c(void *);
void func_ov004_02205d78(void *);
void func_ov004_02205d4c(void *);
void func_ov004_02206e1c(void *);
void func_ov004_022069b4(void *);
void func_020544d8(void *);
void func_020b6df4(void *);
void func_ov004_02233c10(void *);
void func_ov004_022061e8(void *);
void func_ov004_02205e9c(void *);
void func_0209c364(void *);
void func_ov004_02206e98(void *);
void func_020b69fc(void *);
void func_ov004_02206eb0(void *);
void func_020b6a0c(void *);
void func_0209c370(void *);
void func_ov004_02205ea0(void *);
void func_ov004_02206204(void *);
void func_ov004_02233c18(void *);
void func_020b6e10(void *);
void func_02054514(void *);
void func_ov004_022069cc(void *);
void func_ov004_02206e38(void *);
void func_ov004_02205d50(void *);
void func_ov004_02205d7c(void *);
void func_ov004_02205c2c(void *);
void func_ov004_022059f0(void *);
void func_ov004_02235984(void *);

void *func_ov004_0223584c(void);
void func_ov004_022357e0(void *, void *);
void *func_0209c25c(void *, void *);
BOOL func_0203e630(void *);
void func_0203e624(void *, u32);
void func_ov004_02206b64(void *, void *, u32, u32);
BOOL func_ov004_02206a44(void *, void *, u32, u32);
void *func_ov004_02206a2c(void *);
void *func_ov004_02206a14(void *);
void func_020555ec(void *, void *, void *);
void func_0203e678(void *, s32);
u32 func_ov004_022330f8(u32);
BOOL func_ov004_02205c7c(void *);
BOOL func_02052e80(u32);
void func_02064478(u32, u32, u32);
u32 func_020b50e8(void);
s32 func_020516a4(u32, u32);
void func_ov004_02209ebc(void);
BOOL func_ov004_02209cf0(Unk_ov004_0224882c *p);
u32 func_ov004_02209e08(u32 a);
void func_ov004_02209e90(void);
void func_ov004_02209e44(Unk_ov004_02209e44_Outer *o);
}

Unk_ov004_0224882c::~Unk_ov004_0224882c() {
    __cxa_vec_cleanup(f_7c0, 4, 0x20, func_ov004_02206e98);
    func_ov004_02235980(f_794);
    func_ov004_022059ec(f_760);
    func_ov004_02205c1c(f_744);
    func_ov004_02205d78(f_73e);
    func_ov004_02205d4c(f_73c);
    func_ov004_02206e1c(f_6c8);
    func_ov004_022069b4(f_628);
    func_020544d8(f_534);
    func_020b6df4(f_288);
    func_ov004_02233c10(f_24c);
    __cxa_vec_cleanup(f_1cc, 4, 0x20, func_020b69fc);
    func_ov004_022061e8(f_188);
    func_ov004_02205e9c(f_178);
    func_0209c364(f_12e);
}

Unk_ov004_0224882c::Unk_ov004_0224882c() {
    func_0209c370(f_12e);
    func_ov004_02205ea0(f_178);
    func_ov004_02206204(f_188);
    __cxa_vec_ctor(f_1cc, 4, 0x20, func_020b6a0c, func_020b69fc);
    func_ov004_02233c18(f_24c);
    func_020b6e10(f_288);
    func_02054514(f_534);
    func_ov004_022069cc(f_628);
    func_ov004_02206e38(f_6c8);
    func_ov004_02205d50(f_73c);
    func_ov004_02205d7c(f_73e);
    func_ov004_02205c2c(f_744);
    func_ov004_022059f0(f_760);
    func_ov004_02235984(f_794);
    __cxa_vec_ctor(f_7c0, 4, 0x20, func_ov004_02206eb0, func_ov004_02206e98);
}

extern "C" u32 func_ov004_02209d40(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.e;
}

extern "C" u32 func_ov004_02209d4c(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.c;
}

void Unk_ov004_0224882c::vfunc_08(s32 a) {
    if (a == 2) {
        func_ov004_022077a4();
    }
    func_0203e678(this, a);
}

BOOL Unk_ov004_0224882c::vfunc_00() {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = *(u32 *)((u8 *)this + 8);
    u32 t = l.e;
    unk_768 = t;
    func_ov004_022357e0(func_ov004_0223584c(), this);
    void *r = func_0209c25c(data_ov004_02252058, f_12e);
    func_ov004_02207ef0();
    if (func_0203e630(this) == 0) {
        func_0203e624(this, func_ov004_022071cc(0, 0));
    }
    if (unk_768 == 0) {
        func_ov004_02206b64(f_6c8, r, unk_280, vfunc_8c());
        void *p = func_ov004_02206a2c(f_6c8);
        func_020555ec(f_534, p, func_ov004_02206a14(f_6c8));
        unk_77a = 1;
        func_ov004_02207e48();
        if (vfunc_7c()) {
            unk_77a = 0;
            return 1;
        }
        return 0;
    } else {
        if (func_ov004_02206a44(f_6c8, r, unk_280, vfunc_8c()) != 0) {
            void *p = func_ov004_02206a2c(f_6c8);
            func_020555ec(f_534, p, func_ov004_02206a14(f_6c8));
            unk_77a = 1;
            func_ov004_02207e48();
            if (vfunc_7c()) {
                unk_77a = 0;
                return 1;
            }
            return 0;
        }
        return -1;
    }
}

BOOL Unk_ov004_0224882c::func_ov004_02209bb4() {
    if (func_ov004_0220579c(0) == 0) {
        if (func_ov004_0220579c(5) == 0) {
            switch (unk_77c) {
            case 0x10:
                return TRUE;
            case 0x11:
            case 0x2b:
                u32 c = func_ov004_022330f8(func_ov004_022087a4());
                if (c != data_ov004_022486f8) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209c10() {
    if (func_ov004_0220579c(0) == 0) {
        if (func_ov004_0220579c(5) == 0) {
            if (unk_77c == 0x10) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209c44() {
    if (unk_77c == 0x18) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209c58() {
    BOOL r = TRUE;
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    if (v == 0x36) a = TRUE; else a = FALSE;
    if (a == 0) {
        BOOL b;
        if (v == 0x37) b = TRUE; else b = FALSE;
        if (b == 0) r = FALSE;
    }
    if (r != 0) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224882c::func_ov004_02209c88() {
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    BOOL b;
    BOOL r;
    if (v == 0x3b) a = TRUE; else a = FALSE;
    if (a != 0 || ((v == 0x3c ? (b = TRUE) : (b = FALSE)), b != 0)) {
        if (func_ov004_02205c7c(f_73c)) r = TRUE; else r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL Unk_ov004_0224882c::func_ov004_02209ccc() {
    if (func_ov004_02209cf0(this)) {
        return func_ov004_02205c7c(f_73c);
    }
    return FALSE;
}

BOOL Unk_ov004_0224882c::vfunc_7c() {
    return TRUE;
}

extern "C" BOOL func_ov004_02209cf0(Unk_ov004_0224882c *p) {
    if (p != NULL) {
        u32 v = *(u16 *)((u8 *)p + 0xc);
        BOOL r;
        if (v == 0x3a) r = TRUE; else r = FALSE;
        if (r != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02209d10(Unk_ov004_0224882c *p) {
    if (p != NULL) {
        if (func_02052e80(p->func_ov004_022087a4()) != 0) {
            if (p->func_ov004_02206f8c() == 0) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" u32 func_ov004_02209d58(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e) {
    Unk_ov004_02209d40_Bits l;
    l.a = a;
    l.b = b;
    l.c = c;
    l.d = d;
    l.e = e;
    l.f = f;
    l.w1 = (l.w1 & ~0x1f) | 1;
    return *(u32 *)&l;
}

extern "C" void func_ov004_02209dd8(u32 a) {
    u32 t = func_ov004_02209e08(a);
    if (a == 2) {
        func_02064478(0, 8, t);
    } else {
        func_02064478(0, 0xc, t);
    }
    func_020516a4(func_020b50e8(), 1);
}

extern "C" u32 func_ov004_02209e08(u32 a) {
    if (a == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_ov004_02209e14(Unk_ov004_02209e14_Obj *o) {
    o->unk_1c = (void *)func_ov004_02209ebc;
    o->unk_90 = 2;
    o->unk_14 = (void *)func_ov004_02209e44;
    o->unk_8e = 2;
    o->unk_24 = (void *)func_ov004_02209e90;
    o->unk_92 = 1;
}

extern "C" void func_ov004_02209e44(Unk_ov004_02209e44_Outer *o) {
    Unk_ov004_02209e44_Target *t = o->unk_04->unk_2c;
    if (t != NULL) {
        t->vfunc_64(o->unk_00->unk_01, o);
    }
}
