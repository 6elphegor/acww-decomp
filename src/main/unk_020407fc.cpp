#include "types.h"

#include "Unk_020d8c7c.h"

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    ~Unk_020ddcf0();
    u8 unk_00[0x44];
};

class Unk_020da258 : public Unk_020d8c7c {
public:
    Unk_020da258();
    virtual ~Unk_020da258();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();

    /* 0x50 */ u32 unk_50;
    /* 0x54 */ Unk_020ddcf0 unk_54;
};

struct Unk_02040754_Time { u8 b[4]; };
struct Unk_020407fc_Data { u8 b[0x64]; };

struct Unk_02040974_State {
    Unk_02040974_State() { unk_00 = 0; unk_04 = 0; unk_01 = 0; }
    ~Unk_02040974_State();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
};

struct Unk_02040974_Obj { u8 pad[0x64]; s32 unk_64; };
struct Unk_02040974_Rtc { s32 a; s32 b; };
struct Unk_02040cac_Rtc { u8 b0; u8 b1; u8 b2; u8 b3; s32 b; };
union Unk_02040cac_Rtc2 { s32 w[2]; Unk_02040cac_Rtc v; };
struct Unk_02040ad8_Member {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};
struct Unk_02040ad8_Owner {
    u8 pad[0x54];
    Unk_02040ad8_Member unk_54;
};
struct Unk_02040a84_Obj { s32 unk_00; s32 unk_04; s32 unk_08; };
static inline s32 Unk_02040a84_Get(Unk_02040a84_Obj *p)
{
    s32 v = p->unk_04;
    return v;
}
static inline BOOL Unk_02040ad8_IsTwo(u8 v)
{
    return v == 2 ? TRUE : FALSE;
}
struct Unk_02040d80_Obj {
    u8 pad[0xc];
    u16 unk_0c;
};

extern "C" {
s32 func_02063b8c(s32);
void func_0209d2c0(s32, s32);
void func_02116048(void *, void *, u32);
s32 func_0203f218(void *, s32, void *);
void func_0209cf88(void *);
s32 func_0209cd00(void *, void *);
void func_02040df0(void);
void func_02040864(u8 *);
void func_02040a60(s32);
void func_020402f8(void *, s32);
void func_0203f4c0(s32);
void func_02040684(void *);
s32 func_020b50e8(void);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *);
s32 func_020850e0(void);
s32 func_0208517c(void);
s32 _ZN12Unk_02086f1413func_02086f18Ev(void);
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *, s32);
void func_0209d498(void *);
void *func_02067918(s32);
void _ZN12Unk_020660f813func_02067958Ev(void *p);
s32 func_020b4934(void);
void func_020b4bbc(s32, s32);
void _ZN12Unk_020d8e1413func_02035368Eii(void *, s32, s32);
void _ZN12Unk_020d8e1413func_020353b0Eii(void *, s32, s32);
void _ZN12Unk_020e2a3013func_020a710cEPKc(void *, void *);
void _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(void *, void *);
s32 func_0203d9cc(void);
BOOL func_02040c10(void);
void func_02040c6c(s32);
void func_02040c50(s32);
void func_02040c38(s32);
void func_02040b48(s32);
void func_02040ad8(Unk_02040ad8_Owner *);
void func_02040a84(s32);
void func_02040c94(void);
void func_02040e14(void);
BOOL func_02040d80(void);
void func_02040cac(void);
s32 func_0203d9d8(void);
s32 func_0203d9c0(void);
s32 func_0206da30(void);
s32 func_0204da0c(void);
s32 func_0204d560(s32, void *);
s32 func_0204d780(s32, void *, s32, s32);
void func_020b4a08(s32, s32);
void func_020b4f18(s32, s32, void *, s32, ...);
s32 func_020a5cc0(s32);
s32 func_0203f31c(s32, void *, s32);
s32 func_0203f2e0(s32, void *, s32);
s32 func_0203d99c(void);
s32 func_0203d984(void);
s32 func_0203d990(void);
s32 func_020b5164(void);
void func_02046c24(void);
void func_020460dc(s32);
s32 func_020b101c(void);
void func_02115e30(u32 v, u32 dst, u32 size);
u32 func_021108e8();
u32 func_0211065c();
u32 func_02110868();
u32 func_02110614();
void func_020014f4(u32);
void func_020014bc(u32);
void func_02041104();
BOOL func_02040908(void);
void func_02040974(s32 a, s32 b, s32 c);
}

extern Unk_02040974_Obj *data_020cbb18;
extern u8 data_021c3cc0;
extern "C" Unk_020da258 *func_020410ec();
struct Unk_020da224_Rec { void *(*unk_00)(); s16 unk_04; s16 unk_06; };
extern Unk_02040d80_Obj *data_021eda68;
extern u8 data_021ed170[];
extern u8 data_021d7350[];
extern u8 *data_021c1b3c;

static inline u8 Unk_02040cac_B2(u8 *p)
{
    return p[2];
}

s32 data_021c3c98;
Unk_020da224_Rec data_020da224 = { (void *(*)())func_020410ec, 0xd6, 0xd1 };
const char *data_020da22c[2] = { "obj_ev_start", "obj_ev_end" };
s32 data_021c3c90;
s32 data_021c3c94;
s32 data_020da220 = 99;
s32 data_020da218 = 99;
s32 data_020da21c = 99;
extern const u8 data_020c9098[12];
const u8 data_020c9098[12] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0};
Unk_02040974_State data_021c3ca8;

static inline void Unk_02041104_Fill(u16 v, u32 dst, u32 size) {
    volatile u16 t = v;
    func_02115e30(t, dst, size);
}

extern "C" void func_02041104() {
    volatile u16 *r;
    r = (volatile u16 *)0x400000c;
    *r &= ~3;
    *r = (*r & 0x43) | 0x600;
    Unk_02041104_Fill(0, func_021108e8(), 0x800);
    Unk_02041104_Fill(0x1111, func_0211065c(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000000, 4);
    func_020014f4(4);
    r = (volatile u16 *)0x400100c;
    *r &= ~3;
    *r = (*r & 0x43) | 0xe04;
    Unk_02041104_Fill(0, func_02110868(), 0x800);
    Unk_02041104_Fill(0x1111, func_02110614(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000400, 4);
    func_020014bc(4);
}

extern "C" Unk_020da258 *func_020410ec() {
    return new Unk_020da258();
}

Unk_020da258::Unk_020da258() {}

Unk_020da258::~Unk_020da258() {}

BOOL Unk_020da258::vfunc_00()
{
    u8 *r5;
    Unk_02040974_Rtc t;
    u8 buf[8];
    s32 r;
    s32 v;
    if (func_02040908()) {
        return FALSE;
    }
    r5 = data_021d7350;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0 && func_020b50e8() != 0xd) {
        if (data_021c3c90 != 0) {
            u32 k;
            t.a = 0;
            t.b = 0;
            func_0209d498(&t);
            func_02040e14();
            k = r5[0x15e29];
            func_02116048(&t, buf, 8);
            r = func_0203f2e0(k, buf, 0);
            if (r != 0 && r != 3) {
                data_020da218 = k;
                data_020da220 = k;
                data_020da21c = k;
            }
        }
        r5[0x15e29] = 99;
        data_021c3c90 = 0;
        if (func_020b5164() != 0 && data_021c3ca8.unk_03 == 0) {
            func_02046c24();
        }
    } else {
        func_02040e14();
        v = r5[0x15e29];
        data_020da218 = v;
        data_020da220 = v;
        data_020da21c = v;
        data_021c3c90 = 1;
    }
    switch (data_021c3ca8.unk_00) {
    case 0:
        break;
    case 1:
        func_02040e14();
        break;
    case 2:
    case 3:
        break;
    default:
        if (func_020b5164() == 0) {
            func_02040e14();
        } else {
            func_0203d990();
            data_021c3ca8.unk_00 = 5;
            if (data_021c3ca8.unk_03 != 0) {
                func_020460dc(0);
                data_021c3ca8.unk_03 = 0;
            }
            v = data_020da220;
            if (v != 99) {
                data_020da218 = v;
            }
            func_020b101c();
        }
        break;
    }
    return TRUE;
}

BOOL Unk_020da258::vfunc_18()
{
    s32 x = (s32)this;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0) {
        func_02040c94();
        switch (data_021c3ca8.unk_00) {
        case 0:
            func_02040c6c(x);
            break;
        case 1:
            func_02040c50(x);
            break;
        case 2:
            func_02040c38(x);
            break;
        case 3:
            func_02040b48(x);
            break;
        case 4:
            func_02040c6c(x);
            break;
        case 5:
            func_02040ad8((Unk_02040ad8_Owner *)x);
            break;
        case 6:
            func_02040a84(x);
            break;
        }
    }
    return TRUE;
}

BOOL Unk_020da258::vfunc_0c()
{
    if (func_02040908()) {
        return TRUE;
    }
    if (func_0203d99c()) {
        func_0203d984();
        data_021c3c98 = 0;
        data_021c3ca8.unk_00 = 0;
        data_021c3ca8.unk_02 = 0;
    }
    switch (data_021c3ca8.unk_00) {
    case 0:
        if (data_020da21c == 99) {
            func_02040e14();
        }
        break;
    case 1:
        data_021c3ca8.unk_00 = 2;
        break;
    }
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0) {
        data_021ed170[9] = data_020da21c;
    }
    return TRUE;
}

extern "C" void func_02040e14(void)
{
    data_020da220 = 99;
    data_020da21c = 99;
    data_020da218 = 99;
    data_021c3ca8.unk_00 = 0;
    data_021c3ca8.unk_02 = 0;
    data_021c3ca8.unk_03 = 0;
}

extern "C" void func_02040df0(void)
{
    func_02040e14();
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0) {
        func_02040cac();
    }
}

extern "C" BOOL func_02040d80(void)
{
    if (!Unk_02040ad8_IsTwo(data_021c3cc0)) {
        return FALSE;
    }
    if (func_020b50e8() == 0x3f) {
        return FALSE;
    }
    if (func_020b50e8() == 0x2c) {
        return FALSE;
    }
    if (func_020b50e8() == 6) {
        return FALSE;
    }
    if (func_020a5cc0(func_020b50e8()) != 0) {
        return FALSE;
    }
    if (data_021eda68 != 0 && data_021eda68->unk_0c != 6) {
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_02040cac(void)
{
    s32 zero;
    Unk_02040974_Rtc t;
    u8 buf[8];
    u8 buf2[8];
    s32 i;
    t.a = 0;
    t.b = 0;
    func_0209d498(&t);
    if (data_020da220 == 99) {
        zero = 0;
        for (i = 0; i < 11; i++) {
            u32 k;
            s32 r;
            func_02116048(&t, buf, 8);
            k = data_020c9098[i];
            r = func_0203f31c(k, buf, 0);
            switch (r) {
            case 2:
                if (k == 0x13) {
                    data_020da220 = k;
                    data_020da21c = k;
                } else if (Unk_02040cac_B2((u8 *)&t) < 6) {
                    data_020da21c = k;
                } else {
                    func_02040974(k, k, zero);
                }
                break;
            case 3:
                if (k == 0x12) {
                    data_020da220 = 0x12;
                    data_020da21c = 0x12;
                    data_020da218 = 0x12;
                }
                break;
            }
        }
    }
    if (data_020da21c != 99) {
        func_02116048(&t, buf2, 8);
        if (func_0203f31c(data_020da21c, buf2, 0) == 0) {
            if (data_020da21c == 0x13) {
                data_020da220 = 99;
                data_020da21c = 99;
            } else {
                func_02040974(data_020da21c, 99, 1);
            }
        }
    }
}

extern "C" void func_02040c94(void)
{
    if (func_02040d80()) {
        func_02040cac();
    }
}

extern "C" s32 func_02040c88(void)
{
    return data_021c3c98;
}

extern "C" s32 func_02040c7c(void)
{
    return data_020da218;
}

extern "C" s32 func_02040c70(void)
{
    return data_020da21c;
}

extern "C" void func_02040c6c(s32)
{
}

extern "C" void func_02040c50(s32)
{
    if (func_0206da30() != 0) {
        data_021c3ca8.unk_00 = 2;
    }
}

extern "C" void func_02040c38(s32)
{
    if (func_0206da30() == 0) {
        func_02040a60(3);
    }
}

extern "C" BOOL func_02040c10(void)
{
    BOOL r = FALSE;
    if (func_0203d9d8() == 0) {
        data_021c3ca8.unk_00 = r;
        data_021c3ca8.unk_02 = r;
    } else {
        r = TRUE;
        data_021c3ca8.unk_02 = r;
    }
    return r;
}

extern "C" void func_02040b48(s32)
{
    u8 buf[0x10];
    s32 r;
    if (func_0203d9cc() == 0) {
        if (func_0203d9d8() == 0) {
            data_021c3ca8.unk_00 = 0;
            data_021c3ca8.unk_02 = 0;
        }
    } else {
        s32 v = data_021c3ca8.unk_08;
        data_020da220 = v;
        data_020da21c = v;
        if (func_0203d9c0() != 0 && func_0206da30() == 0) {
            r = func_0204da0c();
            if (r != 0) {
                if (data_021c3ca8.unk_04 == 14) {
                    r = func_0204d560(r, buf);
                } else {
                    r = func_0204d780(r, buf, 0, 0);
                }
                if (r != 0) {
                    func_020b4a08(func_020b4934(), 0);
                    func_020b4f18(func_020b4934(), 0x31, buf, 0x400000, 0, 2, 2);
                    _ZN12Unk_020d8e1413func_020353b0Eii(data_021c1b3c + 0x2d0, data_021c3c94, data_021c3ca8.unk_04);
                    data_021c3ca8.unk_00 = 4;
                    data_021c3c98 = 1;
                }
            }
        }
    }
}

extern "C" void func_02040ad8(Unk_02040ad8_Owner *o)
{
    if (Unk_02040ad8_IsTwo(data_021c3cc0)) {
        Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)func_02067918(0);
        o->unk_54.vfunc_08();
        _ZN12Unk_020e2a3013func_020a710cEPKc(&o->unk_54, (void *)data_020da22c[data_021c3ca8.unk_01]);
        *((u8 *)o + 0x72) = data_021c3ca8.unk_04;
        _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0(p, &o->unk_54);
        p->unk_08 = 1;
        data_021c3ca8.unk_00 = 6;
    }
}

extern "C" void func_02040a84(s32)
{
    Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)func_02067918(0);
    if (p->unk_04 == 0) {
        _ZN12Unk_020660f813func_02067958Ev(p);
        func_020b4bbc(func_020b4934(), 20);
        _ZN12Unk_020d8e1413func_02035368Eii(data_021c1b3c + 0x2d0, data_021c3c94, data_021c3ca8.unk_04);
        data_021c3c94 = 0;
        data_021c3ca8.unk_00 = 0;
        data_021c3ca8.unk_02 = 0;
    }
}

extern "C" void func_02040a60(s32 v)
{
    BOOL r;
    if (v == 3) {
        r = func_02040c10();
    } else {
        r = TRUE;
    }
    if (r) {
        data_021c3ca8.unk_00 = v;
    }
}

Unk_02040974_State::~Unk_02040974_State()
{
}

extern "C" void func_02040974(s32 a, s32 b, s32 c)
{
    s32 r4;
    s32 r6;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        return;
    }
    if (func_020b50e8() == 0) {
        func_020850e0();
        func_0208517c();
        if (_ZN12Unk_02086f1413func_02086f18Ev()) {
            if (!_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
                return;
            }
        }
    }
    if (data_021c3ca8.unk_02 != 0) {
        return;
    }
    r4 = -1;
    if (a >= 9 && a <= 0x12) {
        r4 = a;
        r4 -= 9;
        if (c == 0) {
            data_021c3c94 = 1;
        } else {
            data_021c3c94 = 2;
        }
        r6 = 2;
    } else if (a == 0x44) {
        if (data_021c3ca8.unk_00 == 0) {
            r4 = 14;
            data_021c3c94 = 0;
            r6 = 2;
        }
    } else if (a < 0) {
        switch (data_021c3ca8.unk_00) {
        case 0: {
            Unk_02040974_Rtc t;
            t.a = 0;
            t.b = 0;
            r4 = 15;
            data_021c3c94 = 0;
            data_021c3ca8.unk_03 = 1;
            func_0209d498(&t);
            if (((u8 *)&t)[1] == 0) {
                r6 = 1;
            } else {
                r6 = 3;
            }
            break;
        }
        case 2:
            data_021c3ca8.unk_03 = 1;
            break;
        }
    }
    if (r4 >= 0) {
        func_02040a60(r6);
        data_021c3ca8.unk_04 = r4;
        data_021c3ca8.unk_01 = c;
        data_021c3ca8.unk_08 = b;
    }
}

extern "C" BOOL func_02040908(void)
{
    switch (func_020b50e8()) {
    case 6:
    case 12:
    case 13:
    case 14:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x32:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02040900(u8 *p)
{
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
}

extern "C" void func_020408fc(void)
{
}

extern "C" void func_02040864(u8 *p)
{
    Unk_02040754_Time t;
    func_0209cf88(&t);
    Unk_02040754_Time t1 = t;
    p[0] = t1.b[0];
    p[1] = t1.b[1];
    p[2] = t1.b[2];
    p[3] = t1.b[3];
    Unk_02040754_Time t2 = t;
    p[4] = t2.b[0];
    p[5] = t2.b[1];
    p[6] = t2.b[2];
    p[7] = t2.b[3];
    p[8] = 1;
    p[9] = 1;
    p[10] = 0;
    p[11] = 0;
    p[12] = 1;
    p[13] = 1;
    p[14] = 0;
    p[15] = 0;
    p[16] = func_02063b8c(5) + 1;
    p[17] = 99;
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
    func_02040684(p);
    func_020402f8(p, 1);
}

extern "C" void func_0204085c(u8 *p)
{
    func_02040864(p);
}

extern "C" void func_020407fc(u8 *p)
{
    Unk_02040754_Time a;
    Unk_02040754_Time b;
    func_0209cf88(&a);
    if (func_0209cd00(&a, p + 8) >= 7) {
        p[8] = 1;
        p[9] = 1;
        p[10] = 0;
        p[11] = 0;
    }
    func_0209cf88(&b);
    if (func_0209cd00(&b, p + 12) >= 7) {
        p[12] = 1;
        p[13] = 1;
        p[14] = 0;
        p[15] = 0;
    }
    func_020402f8(p, 0);
    func_0203f4c0(1);
    func_02040df0();
}

