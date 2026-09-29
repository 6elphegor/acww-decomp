#include "types.h"

extern "C" {
void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor);
extern u16 data_020ca488;
extern u8 data_020cba14[];
extern u8 data_020cba0c[];
extern u8 data_021edb60;

void *func_0207e310(void *);
u32 func_0207856c(void *);
BOOL func_0203cb38();
void func_02003f8c();
void func_02003fc8(s32);
void func_02003f7c(s32);
void func_02003fa4(s32, s32, u32, u32);
void func_0200402c(u32);
void func_02067724(void *, s32);
void func_02067708(void *);
BOOL func_02050244(u8 *);
s32 func_020501d4(u32);
void func_0208ec50(void *, s32, s32);
void func_0208ec58(void *);
void func_0208ec68(void *);
void func_0208ee30(void *);
void func_0208ee38(void *);
s32 func_020892ac(void *);
BOOL func_02089284(void *);
void func_02089320(void *, s32, s32);
void func_020892b0(void *, s32);
void func_02001804(s32, s32);
void func_02001674(s32, s32, s32, s32);
void func_020014e4(s32);
void func_02001554(s32);
void func_020014f4(s32);
void func_02001564(s32);
void func_02001750(s32);
void func_020016cc(s32);
void func_021145cc(void *, u32);
void func_02111ec8(void *, s32, u32);
void func_0211172c(void *, s32, u32);
void func_02111a6c(void *, s32, u32);
void func_02115fb4(void *, s32, u32);
void func_020e8558(void *);
}

// helper classes constructed by the big object
struct Unk_02067c70;
class Unk_02068808 { public: u32 pad[0x80 / 4]; Unk_02068808(); };
struct Unk_02067c70_Z { u32 a; u16 b; u32 c, d, e, f; Unk_02067c70_Z() { a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; } };
class Unk_020a8da0 { public: u32 pad[0x260 / 4]; Unk_020a8da0(); };
class Unk_020aa6d8 { public: u32 pad[0x274 / 4]; Unk_020aa6d8(); };
class Unk_0206b754 { public: u32 pad[0x490 / 4]; Unk_0206b754(Unk_02067c70 *o); };
class Unk_0206c74c { public: u32 pad[0x8a4 / 4]; Unk_0206c74c(); };
class Unk_0206b1dc { public: u32 pad[0xe4 / 4]; Unk_0206b1dc(Unk_02067c70 *o, Unk_0206b754 *p); };
class Unk_020a853c { public: u32 pad[0xc / 4]; Unk_020a853c(Unk_0206b1dc *p); };
class Unk_020a7290 { public: u32 pad[0xc / 4]; Unk_020a7290(); };
class Unk_020a71d0 { public: u32 pad[0x34 / 4]; Unk_020a71d0(); ~Unk_020a71d0(); };
class Unk_020b4154 { public: u32 pad[0x2c / 4]; Unk_020b4154(); };
class Unk_02081270 { public: u32 pad[0x20 / 4]; Unk_02081270(); };
class Unk_02063888 { public: u32 pad[0x1c / 4]; Unk_02063888(); };
class Unk_02094030 { public: u32 pad[0x1c / 4]; Unk_02094030(); };
class Unk_020811b0 { public: u32 pad[0x24 / 4]; Unk_020811b0(); };
class Unk_02081100 { public: u32 pad[0x24 / 4]; Unk_02081100(); };

struct Unk_02067f44_Sel {
    virtual void vfunc_00(); virtual void vfunc_04(); virtual void vfunc_08(); virtual void vfunc_0c();
    virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1c();
    virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2c();
    virtual void vfunc_30(); virtual void vfunc_34(); virtual void vfunc_38(); virtual void vfunc_3c();
    virtual void vfunc_40(); virtual void vfunc_44(); virtual void vfunc_48(); virtual void vfunc_4c();
    virtual void vfunc_50(); virtual void vfunc_54(); virtual void vfunc_58(); virtual void vfunc_5c();
    virtual void vfunc_60(); virtual void vfunc_64();
    virtual void *vfunc_68();
    virtual s32 vfunc_6c();
};

class Unk_020ddc24 {
public:
    Unk_02067c70 *unk_04;
    u16 unk_08, unk_0a, unk_0c;
    s32 unk_10, unk_14, unk_18;
    u8 unk_1c, unk_1d, unk_1e;
    s32 unk_20, unk_24, unk_28;

    Unk_020ddc24(Unk_02067c70 *o);
    virtual ~Unk_020ddc24();
    void func_02067efc();
    void func_02067f44();
    u8 func_02067f88();
    u32 func_02067fbc();
    void func_02068000();
    void func_02068018();
    void func_02068064(s32 v);
    void func_02068068();
    void func_02068114();
    void func_020681c4(s32 flag);
    void func_02068244();
    void func_02068268(s32 r);
    void func_02068290();
    void func_02068298(s32 v);
    void func_0206829c();
    void func_020682a4(s32 v);
};

struct Unk_02067c70 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14;
    u8 unk_18;
    Unk_02068808 unk_1c;
    Unk_02067c70_Z unk_9c;
    Unk_020a8da0 unk_b4;
    Unk_020aa6d8 unk_314;
    u32 unk_588;
    Unk_0206b754 unk_58c;
    Unk_0206c74c unk_a1c;
    Unk_0206b1dc unk_12c0;
    Unk_020a853c unk_13a4;
    Unk_02067f44_Sel *unk_13b0;
    Unk_020a7290 unk_13b4;
    Unk_020a71d0 unk_13c0[11];
    Unk_020a71d0 unk_15fc[4];
    u8 unk_pad_16cc[0x10];
    Unk_020ddc24 unk_16dc;
    u32 unk_1708;
    u32 unk_170c_pad;
    u32 unk_1710, unk_1714, unk_1718;
    Unk_020b4154 unk_171c;
    Unk_020a71d0 unk_1748;
    Unk_020b4154 unk_177c_a;
    Unk_020a71d0 unk_17a8;
    Unk_020b4154 unk_17dc, unk_1808, unk_1834;
    Unk_02081270 unk_1860;
    Unk_02063888 unk_1880;
    Unk_02094030 unk_189c, unk_18b8, unk_18d4, unk_18f0, unk_190c;
    Unk_020a71d0 unk_1928, unk_195c;
    Unk_02094030 unk_1990;
    Unk_020811b0 unk_19ac;
    Unk_02081100 unk_19d0;
    u8 unk_19f4, unk_19f5, unk_19f6, unk_19f7;
    u8 unk_19f8[0x1a];
    u8 unk_1a12, unk_1a13, unk_1a14, unk_1a15, unk_1a16, unk_1a17, unk_1a18, unk_1a19, unk_1a1a;

    Unk_02067c70();
};

Unk_02067c70::Unk_02067c70()
    : unk_00(0), unk_04(0), unk_08(6), unk_0c(0), unk_10(0), unk_14(4), unk_18(0),
      unk_588(0), unk_58c(this), unk_12c0(this, &unk_58c), unk_13a4(&unk_12c0),
      unk_13b0(0), unk_16dc(this), unk_1708(0), unk_1710(0), unk_1714(0), unk_1718(0),
      unk_19f4(0), unk_19f5(0), unk_19f6(0), unk_19f7(data_021edb60),
      unk_1a12(0), unk_1a13(0), unk_1a14(0), unk_1a15(0), unk_1a16(0), unk_1a17(0), unk_1a18(0), unk_1a19(0), unk_1a1a(0)
{
    func_02115fb4(unk_19f8, 0, 0x1a);
}

Unk_020ddc24::Unk_020ddc24(Unk_02067c70 *o)
    : unk_04(o), unk_14(7), unk_18(0), unk_1c(0), unk_1d(0), unk_1e(0), unk_20(5), unk_24(5), unk_28(0)
{
    func_020681c4(1);
}

Unk_020ddc24::~Unk_020ddc24() {}

void Unk_020ddc24::func_02067efc()
{
    if (unk_10 == 0) {
        u16 c = data_020ca488;
        if (unk_0c != c) {
            unk_08 = unk_0c;
            unk_0c = c;
            unk_10++;
        }
    } else if (unk_10 == 1) {
        if (unk_0c != data_020ca488) {
            unk_0a = unk_08;
            unk_08 = unk_0c;
            unk_0c = unk_0a;
            unk_10++;
        }
    } else {
        unk_0c = unk_0a;
    }
}

void Unk_020ddc24::func_02067f44()
{
    s32 r = 5;
    if (unk_24 == 0) {
        if (unk_28 == 9) r = 4;
    } else if (unk_24 == 4) {
        if (unk_28 != 9) r = ((Unk_02067c70 *)unk_04)->unk_13b0->vfunc_6c();
    }
    if (r != 5) func_02068268(r);
}

u8 Unk_020ddc24::func_02067f88()
{
    u32 i = 0;
    void *p = unk_04->unk_13b0->vfunc_68();
    if (p) {
        p = func_0207e310(p);
        if (p) i = func_0207856c(p);
    }
    return data_020cba14[i];
}

u32 Unk_020ddc24::func_02067fbc()
{
    u32 r = func_0203cb38();
    s32 a = unk_18;
    BOOL b = r == 0 ? TRUE : FALSE;
    if (unk_14 != 7) a = unk_14;
    if (a != 0 && a != 3 && b) r = 1;
    if (unk_28 == 4 && b) r = 1;
    return data_020cba0c[r];
}

void Unk_020ddc24::func_02068000()
{
    if (unk_24 != 5) func_02003f8c();
    unk_24 = 5;
}

void Unk_020ddc24::func_02068018()
{
    s32 r = 5;
    if (unk_20 != 5) {
        r = unk_20;
    } else if (func_02067fbc() == 0) {
        if (unk_18 == 3) r = 1;
        else r = unk_04->unk_13b0->vfunc_6c();
    }
    unk_24 = r;
    if (r != 5) func_02003fc8(r);
}

void Unk_020ddc24::func_02068064(s32 v) { unk_18 = v; }

void Unk_020ddc24::func_02068068()
{
    func_02067f44();
    func_02067efc();
    if (unk_1c == 0 && unk_1d == 0) {
        s32 a = func_02067fbc();
        s32 b = func_02067f88();
        if (unk_10 >= 1) {
            if (unk_24 == 5) {
                if (a != 2) func_0200402c(0x2c);
            } else {
                func_02003fa4(a, b, unk_08, unk_0a);
            }
        }
        s32 flag = 0;
        if (unk_28 != 4) {
            s32 i = 0;
            u16 d = data_020ca488;
            for (; i < unk_10; i++) {
                u16 h = (&unk_08)[i];
                if (h != d && h != 0x2a && h != 0x2b && h != 0x29 && h != 0x26 && h != 0x28 && h != 0x27 && h != 0x25)
                    flag = 1;
            }
        }
        func_02067724(unk_04, flag);
    }
    if (unk_1e != 0) func_02067708(unk_04);
}

void Unk_020ddc24::func_02068114()
{
    u32 cur = data_020ca488;
    u32 nw = cur;
    s32 low;
    if (unk_10 < 2) low = 1; else low = 0;
    BOOL a, b;
    if (unk_08 == 0x2a) a = 1; else a = 0;
    if (unk_0a == 0x2a) b = 1; else b = 0;
    if (low != 0 || a != 0 || b != 0) {
        u8 buf;
        if (func_02050244(&buf)) {
            s32 v = func_020501d4(buf);
            if (v != cur) {
                if (v == 0x26 && unk_1e != 0) v = 0x27;
                nw = v;
            }
        }
    }
    if (nw != cur) {
        if (low == 0) {
            if (a != 0) {
                unk_08 = unk_0a;
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            } else if (b != 0) {
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            }
        }
        s32 n = unk_10;
        if (n < 2) {
            unk_10 = n + 1;
            (&unk_08)[n] = nw;
        }
    }
}

void Unk_020ddc24::func_020681c4(s32 flag)
{
    s32 i = 0;
    u16 d = data_020ca488;
    for (; i < 2; i++) (&unk_08)[i] = d;
    if (flag != 0) unk_0c = d;
    unk_10 = 0;
}

void Unk_020ddc24::func_02068244()
{
    func_02068268(unk_04->unk_13b0->vfunc_6c());
}

void Unk_020ddc24::func_02068268(s32 r)
{
    if (unk_20 == 5 && unk_24 != 5 && unk_24 != r) {
        func_02003f7c(r);
        unk_24 = r;
    }
}

void Unk_020ddc24::func_02068290() { unk_14 = 7; }
void Unk_020ddc24::func_02068298(s32 v) { unk_14 = v; }
void Unk_020ddc24::func_0206829c() { unk_20 = 5; }
void Unk_020ddc24::func_020682a4(s32 v) { unk_20 = v; }

extern "C" u8 func_020682a8(u32 x)
{
    if (x == 9) x = 2;
    return x + 1;
}

struct Unk_020682b8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_020682b8 {
public:
    u8 pad_00[0x0c];
    Unk_020682b8_Sub unk_0c;
    u8 pad_10[0x74 - 0x10];
    s32 unk_74, unk_78, unk_7c;
    void func_020682b8();
    void func_020682c4();
    void func_020682f0();
    void func_02068304();
    BOOL func_0206831c();
    BOOL func_0206834c();
    BOOL func_0206837c();
    BOOL func_0206839c();
    void func_020683bc();
    void func_020683d0();
    void func_020683f4();
    void func_02068400();
    void func_0206840c();
    void func_02068418();
    void func_02068424(s32 a, s32 b);
    void func_02068454(s32 b);
};

void Unk_020682b8::func_020682b8() { func_0208ec58((u8 *)this + 0x50); }

void Unk_020682b8::func_020682c4()
{
    func_0208ec50((u8 *)this + 0x50, unk_74 + 0x59, unk_78 + 0x4b);
    func_0208ec68((u8 *)this + 0x50);
    if (unk_7c > 0) unk_7c--;
}

void Unk_020682b8::func_020682f0()
{
    func_0208ee30((u8 *)this + 0x50);
    unk_7c = 4;
}

void Unk_020682b8::func_02068304()
{
    func_0208ee38((u8 *)this + 0x50);
    unk_7c = -1;
}

BOOL Unk_020682b8::func_0206831c()
{
    if (unk_7c == 0 && func_020892ac(&unk_0c) == 3 && func_02089284(&unk_0c)) return TRUE;
    return FALSE;
}

BOOL Unk_020682b8::func_0206834c()
{
    if (unk_7c == 0 && func_020892ac(&unk_0c) == 2 && func_02089284(&unk_0c)) return TRUE;
    return FALSE;
}

BOOL Unk_020682b8::func_0206837c()
{
    if (unk_7c == 0 && func_020892ac(&unk_0c) == 1) return TRUE;
    return FALSE;
}

BOOL Unk_020682b8::func_0206839c()
{
    if (unk_7c == 0 && func_020892ac(&unk_0c) == 0) return TRUE;
    return FALSE;
}

void Unk_020682b8::func_020683bc() { unk_0c.vfunc_08(); }

void Unk_020682b8::func_020683d0()
{
    func_02089320(&unk_0c, unk_74 + 0x55, unk_78 + 0x47);
    unk_0c.vfunc_0c();
}

void Unk_020682b8::func_020683f4() { func_020892b0(&unk_0c, 3); }
void Unk_020682b8::func_02068400() { func_020892b0(&unk_0c, 2); }
void Unk_020682b8::func_0206840c() { func_020892b0(&unk_0c, 1); }
void Unk_020682b8::func_02068418() { func_020892b0(&unk_0c, 0); }

void Unk_020682b8::func_02068424(s32 a, s32 b)
{
    unk_74 = a;
    unk_78 = b;
    func_02001804(a, b);
    s32 hi = 0xff - a;
    s32 lo = -a;
    if (lo < 0) lo = 0;
    if (hi > 0xff) hi = 0xff;
    func_02001674(lo, 0x3c, hi, 0xc0);
}

void Unk_020682b8::func_02068454(s32 b) { func_02068424(0, b); }

extern "C" void func_02068460()
{
    func_020014e4(4);
    func_02001554(1);
}

extern "C" void func_02068478()
{
    func_020014f4(4);
    func_02001564(1);
}

struct Unk_02068490_Ptrs {
    void *a;
    u16 *b;
    void *c;
};

extern "C" void func_02068490(Unk_02068490_Ptrs *p)
{
    u16 *q = p->b;
    func_021145cc(q + 1, 0x17e);
    func_02111ec8(q + 1, 2, 0x17e);
    func_021145cc(p->c, 0x2800);
    func_0211172c(p->c, 0, 0x2800);
    func_021145cc(p->a, 0x800);
    func_02111a6c(p->a, 0, 0x800);
}

extern "C" void func_020684e4()
{
    volatile u16 *r = (volatile u16 *)0x400000c;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x600;
    *r = *r & ~0x40;
    func_02001750(0x1f);
    func_020016cc(0x1b);
}

extern "C" void func_02068524(Unk_02068490_Ptrs *p)
{
    if (p->a) { func_020e8558(p->a); p->a = 0; }
    if (p->b) { func_020e8558(p->b); p->b = 0; }
    if (p->c) { func_020e8558(p->c); p->c = 0; }
}
