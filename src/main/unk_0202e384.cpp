#include "types.h"
#define Unk_020d8c7c Unk_020d8c7c_Hdr
#include "Unk_020d8c7c.h"
#undef Unk_020d8c7c

extern "C" {
extern u8 data_021bf980;
extern s32 data_021bf984;
extern u32 data_020d6f54[];
extern u32 data_020cbb18;
extern u32 data_021f4880;
}

// Real vtable class for the library base: its D1/D0 are out of line here.
class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8c7c();
    u8 unk_04[0x4c];
};

Unk_020d8c7c::~Unk_020d8c7c() {}

extern "C" {
void func_020ec8bc();
s32 func_020ec8d4(u32 a, void *b, u32 c, u32 d);
s32 func_0211c618(s32 *out);
}

// ---- Unk_020d8bc8 (scene object derived from Unk_020d77a4) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(Unk_02053d3c, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
MEMBER(Unk_02088d00, 0x514 - 0x4cc);
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); ~Unk_020135e4(); };
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
MEMBER(Unk_02082014, 8);

extern "C" void func_020f43c8(void *p);

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080() {
        *(u32 *)this = (u32)data_020d6f54;
        func_020f43c8(this);
    }
};

struct Unk_0203e7a4_Vec {
    s32 x, y, z;
};

struct Unk_0203e7a4 : Unk_020d8c7c_Base {
    u8 pad_04[0x58];
    Unk_0203e7a4_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xe6 - 0x92];
    Unk_0203e7a4();
    virtual ~Unk_0203e7a4();
};

struct Unk_020d77a4 : Unk_0203e7a4 {
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
    Unk_020d77a4();
    virtual ~Unk_020d77a4() {}
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();
    u16 func_0201bdec();
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8();
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    BOOL func_0202e55c();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

extern "C" {
void func_020815f8(void *p);
BOOL func_02072e44(u32 v);
BOOL func_020a62a0();
BOOL func_020e96ec(void *a, void *b);
void *func_02081fb8(void *p);
BOOL func_02082140(void *p);
BOOL func_02019cac(void *p, void *q);
BOOL func_020162c4(void *p, void *q, s32 r);
void func_020197ac(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02088c98(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f, s32 g);
BOOL func_02081608(void *p, void *q);
void func_020135c4(void *p);
s32 func_0201b888(void *self, void *a, void *b);
s32 func_02077ac4(void *p);
BOOL func_02054b38(void *p, s32 v);
BOOL func_02053a14(void *p, s32 v);
}
BOOL Unk_020d8bc8::vfunc_10() {
    if (!Unk_020d77a4::vfunc_10()) {
        return FALSE;
    }
    func_020815f8(&unk_ea);
    return TRUE;
}

BOOL Unk_020d8bc8::vfunc_00() {
    if (!Unk_020d77a4::vfunc_00()) {
        return FALSE;
    }
    if (!func_020a62a0() && func_02072e44(data_020cbb18) && !unk_558.unk_0b) {
        Unk_0203e7a4_Vec v;
        s16 s;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s = 0;
        if (func_0201b888(this, &v, &s) && func_020e96ec(&v, &data_021f4880)) {
            Unk_0203e7a4_Vec *p = &unk_5c;
            p->x = v.x;
            p->y = v.y;
            p->z = v.z;
            unk_8e = s;
            unk_94 = s;
        }
    }
    if (!func_02081fb8(&unk_640)) {
        if (!func_02082140(&unk_640)) {
            return FALSE;
        }
        if (!func_0202e55c()) {
            return FALSE;
        }
    }
    if (!func_02019cac(&unk_2ac, this)) {
        return FALSE;
    }
    if (!func_020162c4(&unk_334, this, vfunc_a8())) {
        return FALSE;
    }
    func_020197ac(&unk_564, this, 0, 1, 0, 0, 0, 0, 0);
    func_02088c98(&unk_4cc, this, unk_648, unk_64c, 8, 0x2fc, 3, (u8)func_0201bdec(), 0x1000);
    if (!func_02081608(this, &unk_ea)) {
        return FALSE;
    }
    func_020135c4(&unk_558);
    return TRUE;
}

BOOL Unk_020d8bc8::vfunc_04() {
    if (!Unk_020d77a4::vfunc_04()) {
        return FALSE;
    }
    func_0202e548(0x1000, 0x2000);
    unk_650 = 0;
    return TRUE;
}

void Unk_020d8bc8::func_0202e548(s32 a, s32 b) {
    unk_648 = a;
    unk_64c = b;
}

BOOL Unk_020d8bc8::func_0202e55c() {
    void *p = func_02081fb8(&unk_640);
    if (!func_02054b38(&unk_ec, func_02077ac4(p))) {
        return FALSE;
    }
    if (func_02053a14(&unk_ec, func_02077ac4(p))) {
        return TRUE;
    }
    return FALSE;
}

Unk_020d8bc8::~Unk_020d8bc8() {}

extern "C" void func_0202e878() { func_020ec8bc(); }
extern "C" void func_0202e880(u32 a, void *b, u32 c, u32 d) { func_020ec8d4(a, b, c, d); }

extern "C" void func_0202e8b0() {
    data_021bf980 = 0;
    data_021bf984 = 0x14;
}

extern "C" void func_0202e8c8() { data_021bf980 = 1; }

extern "C" BOOL func_0202e8d4() {
    BOOL r = FALSE;
    if (data_021bf980 == 0) {
        if (--data_021bf984 <= 0) {
            s32 v;
            data_021bf984 = 0x14;
            if (func_0211c618(&v) == 0 && v == 1) {
                r = TRUE;
            }
        }
    }
    return r;
}

// ---- Sphere (position + radius), vtable-less ----
struct Unk_0202e918_Vec3 {
    s32 x, y, z;
    Unk_0202e918_Vec3(s32 px, s32 py, s32 pz) { x = px; y = py; z = pz; }
};

struct Unk_0202e918_Cap {
    u8 pad_00[0x18];
    s32 unk_18, unk_1c, unk_20;
};

extern "C" {
s32 func_0202f758(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
s64 func_01ffd028(void *a, void *b);
}

struct Unk_0202e9c8 {
    s32 unk_00, unk_04, unk_08, unk_0c;
    Unk_0202e9c8();
    ~Unk_0202e9c8();
    BOOL func_0202e918(Unk_0202e918_Vec3 *out, Unk_0202e918_Cap *cap);
    void func_0202e9b4(Unk_0202e918_Vec3 *p, s32 r);
};

BOOL Unk_0202e9c8::func_0202e918(Unk_0202e918_Vec3 *out, Unk_0202e918_Cap *cap) {
    s32 z;
    s32 r = unk_0c;
    if (func_0202f758(cap, this) <= r) {
        z = unk_08 + func_01ffcb0c(cap->unk_20, unk_0c);
        s32 y = unk_04 + func_01ffcb0c(cap->unk_1c, unk_0c);
        s32 x = unk_00 + func_01ffcb0c(cap->unk_18, unk_0c);
        Unk_0202e918_Vec3 a(x, y, z);
        Unk_0202e918_Vec3 b(unk_00 - x, unk_04 - y, unk_08 - z);
        s64 s1 = func_01ffd028(cap, &a);
        s64 s2 = func_01ffd028(cap, &b);
        if (s1 < s2) {
            out->x = a.x;
            out->y = a.y;
            out->z = a.z;
        } else {
            out->x = b.x;
            out->y = b.y;
            out->z = b.z;
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_0202e9c8::func_0202e9b4(Unk_0202e918_Vec3 *p, s32 r) {
    unk_00 = p->x;
    unk_04 = p->y;
    unk_08 = p->z;
    unk_0c = r;
}

Unk_0202e9c8::Unk_0202e9c8() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}

Unk_0202e9c8::~Unk_0202e9c8() {}

// ---- 2D line segment with normal (vtable 0x020d8ce4) ----
struct Unk_0202f048 {
    s32 unk_00, unk_04;
    Unk_0202f048() {}
    void operator=(const Unk_0202f048 &o) { unk_00 = o.unk_00; unk_04 = o.unk_04; }
    void func_0202f048(s32 x, s32 y);
    Unk_0202f048(s32 x, s32 y);
    Unk_0202f048(const Unk_0202f048 &o) { unk_00 = o.unk_00; unk_04 = o.unk_04; }
    Unk_0202f048 func_0202f014(Unk_0202f048 *o);
    Unk_0202f048 func_0202efe4(Unk_0202f048 *o);
    Unk_0202f048 *func_0202efc0(s32 s);
    void func_0202f000(Unk_0202f048 *o);
    BOOL func_0202ef40();
    s64 func_0202ef84(Unk_0202f048 *o);
};

extern "C" {
s32 func_01ffc538(s64 v);
}

class Unk_020d8ce4 {
public:
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b);
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
    ~Unk_020d8ce4();
    virtual BOOL vfunc_00();

    BOOL func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202ebb0(Unk_0202f048 *a);
    BOOL func_0202ec6c(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202edac(Unk_0202f048 *p);

    /* 0x04 */ Unk_0202f048 unk_04;
    /* 0x0c */ Unk_0202f048 unk_0c;
    /* 0x14 */ Unk_0202f048 unk_14;
    /* 0x1c */ s32 unk_1c;
};

BOOL Unk_020d8ce4::func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    if (func_0202edac(b) > 0) {
        Unk_0202f048 v(0, 0);
        if (func_0202ec6c(&v, a, b)) {
            s32 d = c - func_0202edac(a);
            if (d < 0) {
                d = -d;
            }
            Unk_0202f048 *q = &unk_14;
            Unk_0202f048 t = *q;
            t.func_0202efc0(d);
            a->func_0202f000(&t);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020d8ce4::func_0202ec6c(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b) {
    s32 x = func_0202edac(a);
    if (func_01ffcb0c(x, func_0202edac(b)) < 0) {
        Unk_020d8ce4 seg(a, b);
        s32 y = seg.func_0202edac(&unk_04);
        if (func_01ffcb0c(y, seg.func_0202edac(&unk_0c)) < 0) {
            return func_0202ece8(out, a, b);
        }
    }
    return FALSE;
}

struct Unk_0202ea40_Pair {
    Unk_0202f048 a, b;
    Unk_0202ea40_Pair(Unk_0202f048 *x, Unk_0202f048 *y) : a(*x), b(*y) {}
};

BOOL Unk_020d8ce4::func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    Unk_0202f048 *q;
    if (!vfunc_00()) {
        return FALSE;
    }
    s32 d = func_0202edac(a);
    if (d >= 0 && d < c + 0x200 && func_0202edac(b) > 0) {
        if (d < c) {
            if (func_0202edac(b) <= 0) {
                return FALSE;
            }
            Unk_0202f048 arr[2];
            q = &unk_04;
            arr[0] = *q;
            q = &unk_0c;
            Unk_0202f048 *dd = &arr[1];
            *dd = *q;
            for (Unk_0202f048 *p = arr; p < arr + 2; p++) {
                s32 dist = func_01ffc538(p->func_0202ef84(a));
                if (dist < c) {
                    Unk_0202f048 t = a->func_0202efe4(p);
                    if (!t.func_0202ef40()) {
                        q = &unk_14;
                        t.func_0202f048(q->unk_00, q->unk_04);
                    } else {
                        c -= dist;
                    }
                    t.unk_00 = func_01ffcb0c(t.unk_00, c);
                    t.unk_04 = func_01ffcb0c(t.unk_04, c);
                    a->unk_00 += t.unk_00;
                    a->unk_04 += t.unk_04;
                    return TRUE;
                }
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0202ea3c() {}

BOOL Unk_020d8ce4::vfunc_00() { return TRUE; }

BOOL Unk_020d8ce4::func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    s32 d = func_0202edac(a);
    if (func_0202edac(b) >= 0) {
        s32 ad = d < 0 ? -d : d;
        if (ad <= c) {
            if (func_0202ebb0(b) || func_0202ebb0(a)) {
                Unk_0202f048 *q = &unk_14;
                Unk_0202f048 t = *q;
                t.func_0202efc0(c - d);
                a->func_0202f000(&t);
                return TRUE;
            }
        } else if (d < c + 0x200) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020d8ce4::func_0202ebb0(Unk_0202f048 *p) {
    Unk_0202f048 d = unk_04.func_0202efe4(&unk_0c);
    if (d.func_0202ef40()) {
        Unk_0202f048 n(-d.unk_00, -d.unk_04);
        Unk_0202f048 e = unk_04.func_0202f014(&unk_14);
        Unk_020d8ce4 sa(&unk_04, &e, &d);
        Unk_0202f048 f = unk_0c.func_0202f014(&unk_14);
        Unk_020d8ce4 sb(&unk_0c, &f, &n);
        s32 x = sa.func_0202edac(p);
        s32 y = sb.func_0202edac(p);
        if (x >= 0 && y >= 0) {
            return TRUE;
        }
        if (x <= 0 && y <= 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}
