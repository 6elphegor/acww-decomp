#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov047_02258e34_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_ov047_02258e34_Global *data_020cbb18;
extern u8 data_021d7350[];
extern u8 data_021ed0a0[];
extern u8 data_ov047_0225b980[];

void func_ov047_0225a4a8();
void func_ov047_0225a5c0();
void func_ov047_0225a338(void *self);
BOOL func_020a62a0();
BOOL func_02072e44(void *g);
BOOL func_0202e148();
BOOL func_0202e18c(void *self, void *out, s32 x);
void func_0202e174(void *self, void *out);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_02014220(void *self);
void func_02014918(void *self);
void func_02015170(void *self, u32 a, u32 b);
void func_0201517c(void *self, void (*cb)(), u32 a, u32 b);
void func_020151d0(void *self, s32 a);
void func_02015ab0(void *self, u32 v);
BOOL func_0209e170(void *g, u32 n);
BOOL func_0206ea84(void (*cb)());
s32 func_0206fe80(void *g);
BOOL func_02070060(void *g);
u32 func_0209750c();
BOOL func_02098044(u32 a, u32 b);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02067a84(void *self, void *buf, void *cb);
void func_02015a5c();
u32 func_020aa514();
BOOL func_020a032c();
void func_0209865c();
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u32 pad_04[0xac / 4];
};

class Unk_ov047_0225a338 : public Unk_020d7714 {
public:
    ~Unk_ov047_0225a338();
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
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
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
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov047_0225b664 : public Unk_020d8bc8 {
public:
    Unk_ov047_0225b664() {}
    virtual ~Unk_ov047_0225b664();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);

    void func_ov047_02258ffc(u32 a);
    void func_ov047_02259048(u32 a);
    void func_ov047_0225905c(u32 a);
    void func_ov047_022590b0(u32 a);
    void func_ov047_022590e4(u32 a);
    void func_ov047_02259118(u32 a);
    void func_ov047_0225912c(u32 a);
    void func_ov047_02259140(u32 a);
    void func_ov047_0225914c(s32 a);
    void func_ov047_022592b8(u32 a);
    void func_ov047_02259448(s32 a);
    void func_ov047_022594d4(u32 a);
    void func_ov047_0225955c();
    void func_ov047_02259580();
    void func_ov047_022595a0();
    void func_ov047_0225965c();

    void func_ov047_0225a944(s32 s);
    void func_ov047_0225aeb4(s32 s);

    s32 unk_654;
    Unk_ov047_0225a338 unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov047_0225b664::~Unk_ov047_0225b664() {}

BOOL Unk_ov047_0225b664::vfunc_48() {
    if (func_02014220(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov047_0225b664::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov047_0225aeb4(8);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            func_ov047_0225aeb4(8);
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov047_0225aeb4(7);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            Unk_020d7714 *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov047_0225aeb4(3);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                Unk_ov047_02258e34_Global *gl = data_020cbb18;
                func_0201b9fc(1, gl->unk_64, 4);
                if (func_02072e44(gl) || *func_0209c37c(0, 0x4a) != 0) {
                    func_ov047_0225aeb4(0);
                } else {
                    func_ov047_0225aeb4(1);
                }
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov047_0225aeb4(6);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov047_0225aeb4(0);
                    }
                }
            }
        }
        break;
    case 1: case 2: case 5: case 6: case 7:
        break;
    }
}

void Unk_ov047_0225b664::func_ov047_02258ffc(u32 a) {
    if (a == 0) {
        func_0201517c(this, func_ov047_0225a4a8, 0xd, 0);
        func_020151d0(this, 0);
        func_ov047_0225a944(2);
    } else if (func_0209e170(data_021d7350, 0xc)) {
        unk_cc = 0xea;
    } else {
        unk_cc = 0xe9;
    }
}

void Unk_ov047_0225b664::func_ov047_02259048(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    } else {
        unk_cc = 0x28;
    }
}

void Unk_ov047_0225b664::func_ov047_0225905c(u32 a) {
    if (a == 0) {
        if (func_0202e148()) {
            if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
                unk_cc = 0x41;
            } else {
                unk_cc = 0x14;
            }
        } else {
            unk_cc = 0x40;
        }
    } else {
        unk_cc = 0x24;
    }
}

void Unk_ov047_0225b664::func_ov047_022590b0(u32 a) {
    if (a == 0) {
        if (func_02098044(func_0209750c(), 0x35) == 0) {
            unk_cc = 0x4b;
        } else {
            unk_cc = 0x19;
        }
    } else {
        unk_cc = 0x15;
    }
}

void Unk_ov047_0225b664::func_ov047_022590e4(u32 a) {
    if (a == 0) {
        if (func_0206ea84(func_ov047_0225a5c0) == 0) {
            unk_cc = 0x18;
        } else {
            unk_cc = 0x16;
        }
    } else {
        unk_cc = 0x3e;
    }
}

void Unk_ov047_0225b664::func_ov047_02259118(u32 a) {
    if (a == 0) {
        unk_cc = 0x2c;
    } else {
        unk_cc = 0x1f;
    }
}

void Unk_ov047_0225b664::func_ov047_0225912c(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    } else {
        unk_cc = 0x28;
    }
}

void Unk_ov047_0225b664::func_ov047_02259140(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    }
}

void Unk_ov047_0225b664::func_ov047_0225914c(s32 a) {
    if (func_0209e170(data_021d7350, 0xc)) {
        if (a == 2) {
            a = 4;
        } else if (a > 2) {
            a--;
        }
    }
    switch (a) {
    case 0:
        unk_c8 = 0;
        if (func_0202e148()) {
            if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
                unk_cc = 0x41;
            } else {
                unk_cc = 0x14;
            }
        } else {
            unk_cc = 0x40;
        }
        break;
    case 1: {
        unk_c8 = 0;
        u32 r = func_0209750c();
        if (func_0206ea84(func_ov047_0225a5c0) == 0) {
            unk_cc = 0x18;
        } else if (func_02098044(r, 0x35) == 0) {
            unk_c8 = 1;
            unk_cc = 0x17;
        } else {
            unk_c8 = 1;
            unk_cc = 0x16;
        }
        break;
    }
    case 2:
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            unk_cc = 0x4a;
        } else {
            unk_cc = 0xd;
        }
        break;
    case 3: {
        void *g = data_021ed0a0;
        s32 r = func_0206fe80(g);
        unk_cc = 0x13;
        if (r == 0) {
            unk_cc = 0x10;
        } else if (r <= 0x1e000) {
            unk_cc = 0x11;
        } else if (r <= 0x46000) {
            unk_cc = 0x12;
        } else if (func_02070060(g)) {
            unk_cc = 0x49;
        }
        break;
    }
    case 4:
        unk_cc = 0x3f;
        break;
    }
}

struct Unk_ov047_022592b8_Byte {
    u8 v;
    Unk_ov047_022592b8_Byte() {}
    ~Unk_ov047_022592b8_Byte() {}
};

struct Unk_ov047_022592b8_Ent {
    u32 id;
    void (Unk_ov047_0225b664::*fn)(u32);
};

void Unk_ov047_0225b664::func_ov047_022592b8(u32 a) {
    func_02015a5c();
    u32 arg = func_020aa514();
    unk_cc = 0xff;
    static Unk_ov047_022592b8_Ent tbl[17] = {
        {0xc, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0xe, &Unk_ov047_0225b664::func_ov047_02259140},
        {0x1e, &Unk_ov047_0225b664::func_ov047_02259118},
        {0x20, &Unk_ov047_0225b664::func_ov047_022590e4},
        {0x21, &Unk_ov047_0225b664::func_ov047_022590b0},
        {0x23, &Unk_ov047_0225b664::func_ov047_0225905c},
        {0x27, &Unk_ov047_0225b664::func_ov047_02259048},
        {0x44, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0x45, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0x46, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0x47, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0x48, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0x6b, &Unk_ov047_0225b664::func_ov047_0225912c},
        {0xe5, &Unk_ov047_0225b664::func_ov047_02258ffc},
        {0xe6, &Unk_ov047_0225b664::func_ov047_02258ffc},
        {0xe9, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
        {0xea, (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_0225914c},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov047_022592b8_Ent *)((u32)tbl + i * 12))->fn)(arg);
    }
    i++;
test0:
    if (i < 0x11) goto loop0;
    if (unk_cc != 0xff) {
        Unk_ov047_022592b8_Byte b;
        b.v = unk_cc;
        func_02067a84(unk_3c, &b, data_ov047_0225b980);
    }
}

void Unk_ov047_0225b664::func_ov047_02259448(s32 a) {
    u8 buf[4];
    a = unk_1e;
    if (a <= 0x15) {
        func_02015a5c();
        u32 r = func_020aa514();
        unk_cc = 0xff;
        if (r != 0) {
            if (func_0209e170(data_021d7350, 0xc)) {
                unk_cc = 0x47;
            } else {
                unk_cc = 0x48;
            }
            unk_ac = 0;
            buf[1] = unk_cc;
            func_02067a84(unk_3c, &buf[1], data_ov047_0225b980);
        } else {
            if (func_0202e18c(unk_b0, buf, 1)) {
                func_0202e174(unk_b0, buf);
            }
        }
    }
}

struct Unk_ov047_022594d4_Ent {
    void (Unk_ov047_0225b664::*fn)(u32);
};

void Unk_ov047_0225b664::func_ov047_022594d4(u32 a) {
    if (!func_020a032c()) {
        static void (Unk_ov047_0225b664::*tbl[2])(u32) = {
            (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_022592b8,
            (void (Unk_ov047_0225b664::*)(u32)) & Unk_ov047_0225b664::func_ov047_02259448,
        };
        u32 i = 0;
        func_0209750c();
        func_0209865c();
        if (unk_ac == 1) {
            i = 1;
        }
        (this->*tbl[i])(a);
    }
}

void Unk_ov047_0225b664::func_ov047_0225955c() {
    func_02015170(this, 0x41, 0);
    func_020151d0(this, 2);
    func_ov047_0225a944(3);
}

void Unk_ov047_0225b664::func_ov047_02259580() {
    func_02014918(this);
    unk_ca = 0xfff1;
    unk_cc = 0x23;
}

void Unk_ov047_0225b664::func_ov047_022595a0() {
    BOOL eq;
    if (func_0204b2d4(&unk_ca)) {
        u16 t = 0xfff1;
        s32 x = func_0204b25c(&unk_ca);
        if (x == func_0204b25c(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (unk_ca == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = unk_ca;
        if (v >= 0x450c && v <= 0x45db) {
            f = TRUE;
        }
        if (f) {
            unk_cc = 0x3a;
        } else if (v >= 0x12b0 && v <= 0x12e7) {
            unk_cc = 0x3b;
        } else if (v >= 0x12e8 && v <= 0x131f) {
            unk_cc = 0x3c;
        } else {
            unk_cc = 0x3d;
        }
    }
}

void Unk_ov047_0225b664::func_ov047_0225965c() {
    BOOL eq;
    if (func_0204b2d4(&unk_ca)) {
        u16 t = 0xfff1;
        s32 x = func_0204b25c(&unk_ca);
        if (x == func_0204b25c(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (unk_ca == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = unk_ca;
        if (v >= 0x12e8 && v <= 0x131f) {
            f = TRUE;
        }
        s32 t;
        if (f) {
            t = v - 0x12e8;
        } else {
            t = -1;
        }
        unk_cc = (u8)(t + 0xaa);
    }
}
