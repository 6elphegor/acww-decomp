#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov048_0225cc58;

struct Unk_ov048_02258e88_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov048_022594a8_Owner {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xc];
    s32 unk_14;
};

struct Unk_ov048_02258e88_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_ov048_02258e88_Loc : Unk_ov048_02258e88_Vec {
    Unk_ov048_02258e88_Loc() {}
};

extern "C" {
extern Unk_ov048_02258e88_Global *data_020cbb18;
extern Unk_ov048_02258e88_Vec data_ov048_0225c328;
extern void *data_ov048_0225c6e0;

s32 func_020b50e8();
BOOL func_020c03c8();
BOOL func_02072e44(void *g);
BOOL func_02072e88(void *g, s32 v);
BOOL func_0203e2f4();
Unk_ov048_02258e88_Vec *func_020947f0(s32 n);
s32 func_0209750c();
void func_ov048_0225b038(void *sub, s32 v);
void func_0203d704(void *self, s32 v);
s32 func_02019d8c(void *self);
s32 func_020eaf18();
s32 func_020eaf90();
BOOL func_020a62a0();
BOOL func_02014220(void *self);
void func_02015ab0(void *self, u32 v);
void func_ov048_0225bfb4(void *self, s32 s);
u8 *func_020721f8(void *g);
void func_020720f8();
s32 func_020eb650();
s32 func_020ea748();
void func_020a0408();
s32 func_02073204();
void func_020731d4();
BOOL func_02073230(u32 a);
void func_020a5f38(u32 a);
void func_020a5f18(u32 a);
void *func_020850e0();
void *func_02085178(void *p);
BOOL func_02086fa8(void *p);
void *func_020986a4(s32 a);
BOOL func_02087314(void *p);
void func_02087308(void *p);
void func_020872fc(void *p);
s32 func_020a5f6c();
BOOL func_02074e80(void *p, s32 v);
void func_02072368(void *g, s32 v);
void func_0209f1e4();
void func_0209f1c4();
s32 func_02098680();
void func_02076c80();
s64 func_020ea3c4();
void func_ov048_0225af48(void *self, s32 lo, s32 hi);
void func_ov048_0225ad38(void *self);
void func_ov048_0225a078(void *self, s32 s);
s32 func_ov048_022597e8(void *self, u32 a, u32 b);
BOOL func_ov048_02259924(void *self, BOOL b);
BOOL func_ov048_022598f0(void *self);
void func_02067a3c(void *self, s32 id, void *buf);
void func_02067a84(void *self, void *buf, void *cb);
s32 func_020e77cc(s32 a, s32 lo, s32 hi);
void func_020b4154(void *p);
void func_020b413c(void *p);
void func_020b3270(void *p, s32 v, s32 a, s32 b, s32 c, s32 d);
s32 func_020729cc(void *g, s32 a);
void func_02073348();
}

class Unk_ov048_0225cbc8 {
public:
    Unk_ov048_0225cbc8();
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_08();
    u8 pad_04[0x38];
    Unk_ov048_022594a8_Owner *unk_3c;
    u8 pad_40[0xb4 - 0x40];
    void *unk_b4;
    u8 pad_b8[0x7e2 - 0xb8];
    u8 unk_7e2;
    u8 unk_7e3;
    u8 pad_7e4[0x7ec - 0x7e4];

    s32 func_ov048_02259420();
    void func_ov048_022594a8();
    void func_ov048_0225950c();
    void func_ov048_02259524();
    void func_ov048_02259648();
    void func_ov048_02259690();
    u32 func_ov048_02259364();
    u32 func_ov048_02259390();
    u32 func_ov048_022593bc();
    s32 func_ov048_022593e4();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
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
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    void func_0203e468(s32 v);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xac - 0x96];
    s32 unk_ac;
    void *unk_b0;
    u8 pad_b4[0xc8 - 0xb4];
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
    s32 unk_cc;
    u8 pad_d0[0xea - 0xd0];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

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
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_7c();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov048_0225cc58 : public Unk_020d8bc8 {
public:
    Unk_ov048_0225cc58() {}
    virtual ~Unk_ov048_0225cc58();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_7c();

    BOOL func_ov048_02258e34();
    BOOL func_ov048_02258e88();
    s32 func_ov048_0225913c(s32 id);

    s32 unk_654;
    Unk_ov048_0225cbc8 unk_658;
};


struct Unk_ov048_0225913c_Str {
    u8 unk_00[0x2c];
    Unk_ov048_0225913c_Str();
    ~Unk_ov048_0225913c_Str();
    void func_020b3270(s32 v, s32 a, s32 b, s32 c, s32 d);
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov048_0225cc58::~Unk_ov048_0225cc58() {}

BOOL Unk_ov048_0225cc58::func_ov048_02258e34() {
    if (func_02019d8c(&unk_2ac) == 0xba && func_020c03c8() && unk_658.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cc58::vfunc_7c() {
    if (func_020b50e8() == 0xc) {
        return FALSE;
    }
    return Unk_020d8bc8::vfunc_7c();
}

BOOL Unk_ov048_0225cc58::func_ov048_02258e88() {
    Unk_ov048_02258e88_Global *g = data_020cbb18;
    Unk_ov048_02258e88_Loc v;
    if (func_02072e44(g)) {
        return FALSE;
    }
    if (func_020b50e8() == 0x2f) {
        return FALSE;
    }
    if (func_0203e2f4()) {
        return FALSE;
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        return FALSE;
    }
    Unk_ov048_02258e88_Vec *p = func_020947f0(4);
    *(Unk_ov048_02258e88_Vec *)&v = *p;
    if (v.unk_08 <= data_ov048_0225c328.unk_08) {
        func_0209750c();
        if (func_02072e44(g)) {
            func_ov048_0225b038(&unk_658, 9);
        } else {
            func_ov048_0225b038(&unk_658, 10);
        }
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov048_0225cc58::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov048_0225bfb4(this, 0x10);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            func_ov048_0225bfb4(this, 0x10);
        }
        break;
    case 1: {
        ((Unk_020d77a4 *)&unk_658)->vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov048_0225bfb4(this, 2);
        break;
    }
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov048_0225bfb4(this, 0x11);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            ((Unk_020d77a4 *)&unk_658)->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov048_0225bfb4(this, 2);
        }
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov048_0225bfb4(this, 4);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov048_0225bfb4(this, 0xf);
            }
        }
        func_ov048_0225b038(&unk_658, 0xb);
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov048_0225bfb4(this, 1);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov048_0225cc58::vfunc_58() {
    if (unk_558.unk_0b != 0) {
        return TRUE;
    }
    if (func_02014220(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_48() {
    if (func_02014220(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

#define RNG(v, lo, hi) (func_020e77cc((v), (lo), (hi)) != 0)

s32 Unk_ov048_0225cc58::func_ov048_0225913c(s32 id) {
    s32 r = 0x84;
    if (id == 0x4e85 || id == 0x5bcf || RNG(id, 0x59d8, 0x5dbf)) {
        r = 0x83;
    } else if (RNG(id, 0x4e86, 0x4e8b) || id == 0x4e8d || RNG(id, 0x4e8f, 0x5207) || RNG(id, 0xcb24, 0xcb82) ||
               RNG(id, 0xcc4c, 0xccaf) || RNG(id, 0xcf08, 0xcf6b) || RNG(id, 0xcf6c, 0xcfcf) ||
               RNG(id, 0xcfd0, 0xd033)) {
        r = 0x84;
    } else if (id == 0x4e8c) {
        r = 0x85;
    } else if (id == 0x4e8e) {
        r = 0x86;
    } else if (id == 0xc3b3) {
        r = 0x87;
    } else if (RNG(id, 0xc79b, 0xc79e) || RNG(id, 0xc7a0, 0xc7fe) || RNG(id, 0xc864, 0xc8c6)) {
        r = 0x88;
    } else if (id == 0xc79f) {
        r = 0x89;
    } else if (RNG(id, 0xc800, 0xc863)) {
        r = 0x8a;
    } else if (RNG(id, 0xcb20, 0xcb23) || RNG(id, 0xcb84, 0xcb87) || RNG(id, 0xcbe8, 0xcbeb)) {
        r = 0x8b;
    }
    s32 q = id / 1000;
    Unk_ov048_0225913c_Str a;
    Unk_ov048_0225913c_Str b;
    a.func_020b3270(q, 2, 6, 0, 0);
    b.func_020b3270(id - q * 1000, 3, 6, 0, 0);
    func_02067a3c(unk_3c, 6, &a);
    func_02067a3c(unk_3c, 7, &b);
    return r;
}


s32 Unk_ov048_0225cbc8::func_ov048_02259420() {
    u8 *p = func_020721f8(data_020cbb18);
    s32 n = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (*(p + i * 0x13 + 0x190) == 6) {
            n++;
        }
    }
    s32 r = 0;
    switch (unk_7e3) {
    case 0: {
        func_0209f1e4();
        r = 0x26;
        func_0209750c();
        func_02098680();
        func_02076c80();
        s64 t = func_020ea3c4();
        func_ov048_0225af48(this, (s32)t, (s32)(t >> 32));
        func_0209f1c4();
        break;
    }
    case 1:
        if (n != 0) {
            r = 0x6b;
        } else {
            r = 0x46;
        }
        break;
    case 2:
        r = 0x5d;
        break;
    }
    return r;
}

void Unk_ov048_0225cbc8::func_ov048_022594a8() {
    Unk_ov048_022594a8_Owner *o = unk_3c;
    s32 t = func_02073204();
    if ((u32)(t - 5) <= 1) {
        func_ov048_0225ad38(this);
        func_ov048_0225a078(this, 0);
        if (t == 5) {
            o->unk_14 = 0;
            func_ov048_0225bfb4(unk_b4, 0xd);
            func_020a5f38(1);
            func_020a5f18(1);
        } else {
            u8 b[4];
            b[0] = 0xc;
            func_02067a84(o, b, data_ov048_0225c6e0);
        }
        func_020731d4();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225950c() {
    func_02073230(1);
    func_ov048_0225a078(this, 9);
}

void Unk_ov048_0225cbc8::func_ov048_02259524() {
    func_020720f8();
    BOOL b;
    if (func_020eb650() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (func_ov048_02259924(this, b)) {
        func_020731d4();
        if (func_02086fa8(func_02085178(func_020850e0()))) {
            if (func_02087314(func_020986a4(func_0209750c()))) {
                func_020872fc(func_020986a4(func_0209750c()));
            }
        }
    } else {
        s32 t = func_02073204();
        if (t == 5) {
            if (func_02086fa8(func_02085178(func_020850e0()))) {
                if (func_02087314(func_020986a4(func_0209750c())) == 0) {
                    func_02087308(func_020986a4(func_0209750c()));
                }
            }
            if (func_02074e80(&unk_7e2, func_020a5f6c())) {
                func_02072368(data_020cbb18, 0);
                func_020a5f38(0);
                func_020a5f18(0);
                func_020eaf90();
                func_020a0408();
                func_020731d4();
                unk_3c->unk_14 = 0;
                func_ov048_0225ad38(this);
                func_ov048_0225a078(this, 0);
                func_ov048_0225bfb4(unk_b4, 0xc);
            }
        } else if (t == 6 || func_020ea748() == 0x800c) {
            func_020731d4();
            if (func_020ea748() == 0x800c) {
                func_ov048_022597e8(this, 0x79, 1);
            } else {
                func_ov048_022597e8(this, func_ov048_02259364(), 0);
            }
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259648() {
    func_020720f8();
    BOOL b;
    if (func_020eb650() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (func_ov048_02259924(this, b)) {
        func_020731d4();
    } else if (func_02073230(0)) {
        unk_7e2 = 0;
        func_ov048_0225a078(this, 7);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259690() {
    if (func_ov048_02259924(this, 0) == 0 && func_ov048_022598f0(this) == 0) {
        func_020720f8();
        if (func_020eb650()) {
            if (func_020eaf18() != 3) {
                func_020eaf18();
            }
            *(u16 *)((u8 *)unk_b4 + 0xe3e) = 200;
            func_ov048_0225a078(this, 6);
            func_020eaf90();
            func_02073348();
        }
    }
}

u32 Unk_ov048_0225cbc8::func_ov048_02259364() {
    BOOL r = TRUE;
    if (func_020eaf18() != 3 && func_020eaf18() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x80 : 0x63);
}

u32 Unk_ov048_0225cbc8::func_ov048_02259390() {
    BOOL r = TRUE;
    if (func_020eaf18() != 3 && func_020eaf18() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x82 : 0x65);
}

u32 Unk_ov048_0225cbc8::func_ov048_022593bc() {
    return (u8)(func_020729cc(data_020cbb18, 0) ? 0x21 : 0x22);
}

s32 Unk_ov048_0225cbc8::func_ov048_022593e4() {
    void *g = data_020cbb18;
    if (func_020729cc(g, 0)) {
        if (func_02072e44(g)) {
            return 0x17;
        }
        if (func_020eaf18() == 3) {
            return 0x3a;
        }
        return 0x38;
    }
    return 0x3d;
}
