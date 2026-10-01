#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_0203d99c();
s32 func_02065578();
void func_02065c94(void *p);
void func_02065cc8(void *p);
void func_02065cd4(void *p);
void func_020874c8(void *p);
void func_020874d8(void *p);
void func_020789ac(void *p);
void func_020789bc(void *p);
void func_020b0a30(void *p);
void func_020b0a60(void *p);
void func_020b0a70(void *p);
void func_02115fb4(void *p, s32 v, u32 n);
void __cxa_vec_cleanup(void *arr, u32 n, u32 size, void *dtor);
void __cxa_vec_ctor(void *arr, u32 n, u32 size, void *ctor, void *dtor);
void func_0208ee8c();
void func_0208ee90();
void *func_0208f0e8(s32 i);
void *func_0208f204(void *p);
void *func_0208f238(void *p);
extern u8 data_021cebb8[][0x84c];
extern u8 data_021e7f8c[];
extern u32 data_020d5b0c[][2];
extern u32 data_021d04a0;
extern u32 data_020e13e4[][3];
extern u32 data_020e1190[];
extern u8 data_021f47e0[];

void func_020548a0(void *p);
void func_02054b14(void *p);
void func_02054b38(void *p, u32 h);
void func_02054800(void *p, u32 h);
void func_02054710(void *p);
void func_020547cc(void *p, s32 q);
void func_020547e4(void *p);
void func_02054720(void *p, s32 a, s32 b, s32 c, u16 d, u16 e);
BOOL func_02054c2c(void *p, u32 a, u32 b);
void func_02055c70(void *p);
void func_02055b38(void *p, s32 a, s32 b, s32 c, u16 e);
void func_02055bcc(void *p, void *a, u32 c);
void func_02055b90(void *p, void *a, u32 c);
void func_02055a9c(void *p, u32 a);
u32 func_020554c0(void *p);
s32 func_02056654(void *p);
void func_020566bc(void *p);
s32 func_021065dc(void *p);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106618(void *p);
s32 func_02106634(s32 a, s32 b);
s32 func_02106788(void *p);
s32 func_021067a4(s32 a, s32 b);
void func_0210612c(void *p, s32 a, u32 b);
s32 func_0203ef38(void *out, void *in);
s32 func_02064cc4();
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 v);
void func_020e8464(void *m, s32 x, s32 y, s32 z);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
void func_020e85fc(u32 heap, void *p);
u32 func_020641ec(u32 res, u32 heap, u32 a, s32 b);
}

// Sub-object at +0x14 of Unk_020e1164 (ctor 0x02089270, dtor 0x0208926c)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

// Vtable at 0x020e10dc
class Unk_020e10dc : public Unk_020e0db4 {
public:
    Unk_020e10dc();
    virtual ~Unk_020e10dc();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ee30();
    void func_0208ee38(u32 v);

    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20;
};

// Vtable at 0x020e1164; singleton data_021ceb80
class Unk_020e1164 : public Unk_020e0db4 {
public:
    Unk_020e1164();
    virtual ~Unk_020e1164();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ee40();
    BOOL func_0208ee94();
    void func_0208ee8c();
    void func_0208ee90();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ u8 unk_28;
};

extern Unk_020e1164 data_021ceb80;

Unk_020e10dc::Unk_020e10dc() {
    unk_0c = 0;
    unk_10 = 0;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0;
    unk_20 = 0;
}

void Unk_020e10dc::func_0208ee30() {
    unk_13 = 0;
}

void Unk_020e10dc::func_0208ee38(u32 v) {
    unk_13 = 1;
    unk_1c = v;
}

void Unk_020e1164::func_0208ee40() {
    if (unk_0c == 0) {
        unk_28 = 0;
    } else {
        s32 i;
        if (unk_0c == 1) {
            i = 0x43;
        } else {
            i = 0x44;
        }
        unk_14.func_02089268(data_020d5b0c[i]);
        unk_14.func_02089264(1);
        unk_14.func_020891bc();
        unk_28 = 1;
    }
}

void Unk_020e1164::func_0208ee8c() {}
void Unk_020e1164::func_0208ee90() {}

BOOL Unk_020e1164::func_0208ee94() {
    BOOL r = FALSE;
    if (func_0203d99c()) {
        r = TRUE;
    }
    return r;
}

Unk_020e1164::~Unk_020e1164() {
}

Unk_020e1164::Unk_020e1164() : unk_0c(0), unk_10(0) {
    unk_28 = 0;
}

void Unk_020e1164::vfunc_0c() {
    if (unk_28 != 0) {
        unk_14.func_02089140();
    }
    if (unk_0c != unk_10) {
        func_0208ee40();
        unk_10 = unk_0c;
    }
}

void Unk_020e1164::vfunc_08() {
    if (unk_28 != 0) {
        if (!func_0208ee94()) {
            void *h = unk_14.func_02089248();
            s32 x = func_02089f68() + unk_14.func_02089228(-1);
            s32 y = func_02089f64() + unk_14.func_02089210(-1);
            func_02087e70(3, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

extern "C" void func_0208efd0() { data_021ceb80.vfunc_08(); }
extern "C" void func_0208efe0() { data_021ceb80.vfunc_0c(); }
extern "C" void func_0208eff0() { data_021ceb80.func_0208ee8c(); }
extern "C" void func_0208f000() { data_021ceb80.func_0208ee90(); }

extern "C" BOOL func_0208f010() {
    if (data_021ceb80.unk_0c == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0208f024() {
    if (data_021ceb80.unk_0c == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0208f038() { data_021ceb80.unk_0c = 2; }
extern "C" void func_0208f044() { data_021ceb80.unk_0c = 1; }
extern "C" void func_0208f050() { data_021ceb80.unk_0c = 0; }

extern "C" void func_0208f05c() {}

struct Unk_0208f238_Bits {
    u8 b0 : 1;
};

// Player-slot style record, 0x84c bytes (ctor 0x0208f238, dtor 0x0208f204)
class Unk_0208f238 {
public:
    u8 func_0208f060();
    void func_0208f068(u32 v);
    void *func_0208f148();
    void *func_0208f154();
    u32 func_0208f15c();
    void func_0208f168();
    void func_0208f174();
    void *func_0208f18c();
    u32 func_0208f198();
    void func_0208f1a8(u32 v);
    s32 func_0208f1c0();
    u32 func_0208f1c4();
    void func_0208f1d0(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
    /* 0x0f5 */ u8 unk_0f5[0x47];
    /* 0x13c */ u8 unk_13c[0x700];
    /* 0x83c */ u8 unk_83c;
    /* 0x83d */ u8 unk_83d;
    /* 0x83e */ u8 unk_83e[0xc];
    /* 0x84a */ u16 unk_84a;
};

u8 Unk_0208f238::func_0208f060() { return unk_0f4; }
void Unk_0208f238::func_0208f068(u32 v) { unk_0f4 = v; }

extern "C" BOOL func_0208f070() {
    if (func_02065578()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0208f088(void *p) { func_02065c94(p); }
extern "C" void *func_0208f090(void *p) { func_02065cc8(p); return p; }
extern "C" void *func_0208f0a0(void *p) { func_02065cd4(p); return p; }

extern "C" void *func_0208f0b0(s32 i) {
    switch (i) {
    case 1:
        return func_0208f0e8(0);
    case 2:
        return func_0208f0e8(1);
    case 3:
        return func_0208f0e8(2);
    default:
        return data_021e7f8c;
    }
}

extern "C" void *func_0208f0e8(s32 i) { return data_021cebb8[i]; }

extern "C" void *func_0208f0fc(void *p) {
    __cxa_vec_cleanup(p, 3, 0x84c, (void *)func_0208f204);
    return p;
}

extern "C" void *func_0208f11c(void *p) {
    __cxa_vec_ctor(p, 3, 0x84c, (void *)func_0208f238, (void *)func_0208f204);
    return p;
}

void *Unk_0208f238::func_0208f148() { return unk_13c; }
void *Unk_0208f238::func_0208f154() { return &unk_0f4; }
extern "C" void func_0208f158() {}
u32 Unk_0208f238::func_0208f15c() { return unk_83c; }
void Unk_0208f238::func_0208f168() { unk_83c = 0; }

void Unk_0208f238::func_0208f174() {
    s32 v = unk_83c + 1;
    if (v > 5) {
        v = 5;
    }
    unk_83c = v;
}

void *Unk_0208f238::func_0208f18c() { return unk_83e; }
u32 Unk_0208f238::func_0208f198() { return ((Unk_0208f238_Bits *)&unk_83d)->b0; }
void Unk_0208f238::func_0208f1a8(u32 v) { unk_83d = (unk_83d & ~1) | (v & 1); }
s32 Unk_0208f238::func_0208f1c0() { return 1; }
u32 Unk_0208f238::func_0208f1c4() { return unk_84a; }
void Unk_0208f238::func_0208f1d0(u32 v) { unk_84a = v; }

extern "C" void func_0208f1dc(void *p) {
    func_02115fb4(p, 0, 0x84c);
    func_02065c94(p);
    func_020b0a30((u8 *)p + 0xf4);
}

extern "C" void func_0208f200() {}

extern "C" void *func_0208f204(void *p) {
    func_020874c8((u8 *)p + 0x83e);
    func_020789ac((u8 *)p + 0x13c);
    func_020b0a60((u8 *)p + 0xf4);
    func_02065cc8(p);
    return p;
}

extern "C" void *func_0208f238(void *p) {
    func_02065cd4(p);
    func_020b0a70((u8 *)p + 0xf4);
    func_020789bc((u8 *)p + 0x13c);
    func_020874d8((u8 *)p + 0x83e);
    return p;
}

// Opaque views of library-side model classes (see unk_02054190.cpp / unk_020553f8.cpp for the full declarations)
class Unk_020dbd54 {
public:
    virtual ~Unk_020dbd54();

    /* 0x04 */ u8 unk_04[0x58];
    /* 0x5c */ void *unk_5c;
    /* 0x60 */ u8 unk_60[4];
    /* 0x64 */ u8 unk_64[0x30];
    /* 0x94 */ u8 unk_94[8];
    /* 0x9c */ u8 unk_9c[0x1c];
};

class Unk_020dbe7c_Anim {
public:
    virtual ~Unk_020dbe7c_Anim();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c_Anim {
public:
    virtual ~Unk_020dbe4c();
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 unk_1c;
};

struct Unk_0208f480_Mtx {
    s64 v[6];
};

class Unk_0208f2e8;

// 0x148-byte effect entry (dtor 0x0208f308)
class Unk_0208f308 {
public:
    ~Unk_0208f308();
    void func_0208f3c8(Unk_0208f2e8 *src, void (*cb)(Unk_0208f308 *));
    void func_0208f474();
    void func_0208f480();
    void func_0208f508();
    void func_0208f568(Unk_0208f2e8 *src);
    BOOL func_0208f694(s32 idx);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04[3];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s16 unk_1c;
    /* 0x1e */ s16 unk_1e;
    /* 0x20 */ s16 unk_20;
    /* 0x24 */ Unk_020dbd54 unk_24;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ s32 unk_e0;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ Unk_020dbe4c unk_e8[3];
};

// 0x530-byte group of four entries plus three resource pointers (dtor 0x0208f2e8)
class Unk_0208f2e8 {
public:
    ~Unk_0208f2e8();

    /* 0x000 */ s32 unk_00;
    /* 0x004 */ Unk_0208f308 unk_04[4];
    /* 0x524 */ u32 unk_524[3];
};

// Vtable at 0x020e141c (size 0x175c)
class Unk_020e141c : public Unk_020d8c7c {
public:
    virtual ~Unk_020e141c();

    /* 0x050 */ u8 unk_50[0x30c];
    /* 0x35c */ Unk_0208f2e8 unk_35c[4];
};

Unk_020e141c::~Unk_020e141c() {
}

Unk_0208f2e8::~Unk_0208f2e8() {
}

Unk_0208f308::~Unk_0208f308() {
}

// Ten key/value pairs
struct Unk_0208f32c_Pair {
    void func_0208f3b8();
    void func_0208f3bc();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct Unk_0208f32c {
    BOOL func_0208f32c(s32 key, s32 val);
    s32 func_0208f354(s32 key);
    void func_0208f378();
    void func_0208f398();

    /* 0x00 */ Unk_0208f32c_Pair unk_00[10];
};

BOOL Unk_0208f32c::func_0208f32c(s32 key, s32 val) {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    BOOL r = FALSE;
    for (i = r; i < 10; p++, i++) {
        if (p->unk_00 == -1) {
            p->unk_00 = key;
            p->unk_04 = val;
            r = TRUE;
            break;
        }
    }
    return r;
}

s32 Unk_0208f32c::func_0208f354(s32 key) {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    s32 r = 0;
    for (i = r; i < 10; p++, i++) {
        if (key == p->unk_00) {
            r = p->unk_04;
            break;
        }
    }
    return r;
}

void Unk_0208f32c::func_0208f378() {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->func_0208f3b8();
    }
}

void Unk_0208f32c::func_0208f398() {
    Unk_0208f32c_Pair *p = unk_00;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        p->func_0208f3bc();
    }
}

void Unk_0208f32c_Pair::func_0208f3b8() {}

void Unk_0208f32c_Pair::func_0208f3bc() {
    unk_00 = -1;
    unk_04 = 0;
}

void Unk_0208f308::func_0208f3c8(Unk_0208f2e8 *src, void (*cb)(Unk_0208f308 *)) {
    unk_00 = 1;
    unk_10 = 0x1000;
    unk_14 = 0x1000;
    unk_18 = 0x1000;
    unk_1c = 0;
    unk_1e = 0;
    unk_20 = 0;
    u32 *r = src->unk_524;
    s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
    func_02054720(&unk_24, t, 1, 0x1000, 0, 0);
    if (unk_e0 != 0) {
        s32 u = func_02106634(func_02106618((void *)r[1]), 0);
        func_02055b38(&unk_e8[1], u, 1, 0x1000, 0);
    }
    if (unk_e4 != 0) {
        s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
        func_02055b38(&unk_e8[2], u, 1, 0x1000, 0);
    }
    cb(this);
}

void Unk_0208f308::func_0208f474() {
    func_02054b14(&unk_24);
}

void Unk_0208f308::func_0208f480() {
    if (unk_00 != 0) {
        s32 v[3];
        s32 r = func_0203ef38(v, unk_04);
        func_020e8388(data_021f47e0, v[0], v[1], v[2]);
        func_020e8434(data_021f47e0, r);
        func_020e8464(data_021f47e0, unk_1c, unk_1e, unk_20);
        func_020e84f8(data_021f47e0, unk_10, unk_14, unk_18);
        *(Unk_0208f480_Mtx *)unk_24.unk_64 = *(Unk_0208f480_Mtx *)data_021f47e0;
        func_020547cc(&unk_24, 0);
        volatile u16 a, b;
        a = func_02064cc4();
        b = a;
        func_0210612c(unk_24.unk_5c, 0, b);
    }
}

void Unk_0208f308::func_0208f508() {
    if (unk_00 != 0) {
        func_020547e4(&unk_24);
        s32 i;
        for (i = 1; i < 3; i++) {
            if ((&unk_dc)[i] != 0) {
                func_020566bc(&unk_e8[i]);
                *unk_e8[i].unk_18 = unk_e8[i].unk_08;
            }
        }
        if (func_02056654(unk_24.unk_9c) != 0) {
            unk_00 = 0;
        }
    }
}

void Unk_0208f308::func_0208f568(Unk_0208f2e8 *src) {
    s32 idx = src->unk_00;
    unk_00 = 0;
    if (func_0208f694(idx)) {
        u32 *r = src->unk_524;
        if (r[0] != 0) {
            func_02054b38(&unk_24, data_021d04a0);
            func_02054800(&unk_24, data_021d04a0);
            s32 t = func_021065f8(func_021065dc((void *)r[0]), 0);
            func_02054720(&unk_24, t, 1, 0x1000, 0, 0);
            func_02054710(&unk_24);
        }
        if (r[1] != 0) {
            unk_e0 = 1;
            Unk_020dbe4c *e = &unk_e8[1];
            func_02055bcc(e, unk_24.unk_5c, data_021d04a0);
            s32 u = func_02106634(func_02106618((void *)r[1]), 0);
            func_02055b38(e, u, 1, 0x1000, 0);
            func_02055a9c(e, func_020554c0(&unk_24));
        } else {
            unk_e0 = 0;
        }
        if (r[2] != 0) {
            unk_e4 = 1;
            Unk_020dbe4c *e = &unk_e8[2];
            func_02055b90(e, unk_24.unk_5c, data_021d04a0);
            s32 u = func_021067a4(func_02106788((void *)r[2]), 0);
            func_02055b38(e, u, 1, 0x1000, 0);
            func_02055a9c(e, func_020554c0(&unk_24));
        } else {
            unk_e4 = 0;
        }
    }
}

BOOL Unk_0208f308::func_0208f694(s32 idx) {
    BOOL r = TRUE;
    if (!func_02054c2c(&unk_24, idx + 0x6d656666, data_020e1190[idx])) {
        r = FALSE;
    }
    return r;
}

// Three-slot resource pointer set (Unk_0208f2e8::unk_524)
struct Unk_0208f6c0 {
    void func_0208f6c0();
    void func_0208f6f0(Unk_0208f2e8 *src);

    /* 0x00 */ u32 unk_00[3];
};

void Unk_0208f6c0::func_0208f6c0() {
    s32 i;
    u32 *z = 0;
    for (i = 0; i < 3; i++) {
        if (unk_00[i] != 0) {
            func_020e85fc(data_021d04a0, (void *)unk_00[i]);
            unk_00[i] = (u32)z;
        }
    }
}

void Unk_0208f6c0::func_0208f6f0(Unk_0208f2e8 *src) {
    s32 i = 0;
    volatile s32 a, b;
    u32 *tbl = data_020e13e4[src->unk_00];
    b = 0;
    a = 0;
    for (; i < 3; i++) {
        if (tbl[i] != 0) {
            unk_00[i] = func_020641ec(tbl[i], data_021d04a0, 4, a);
        } else {
            unk_00[i] = b;
        }
    }
}
