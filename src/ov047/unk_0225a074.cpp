#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov047_0225b664;
class Unk_ov047_0225b5d4;

struct Unk_ov047_0225a074_Out {
    u8 *unk_00;
    u8 unk_04;
};

struct Unk_ov047_0225a074_Buf {
    u8 lo : 2;
    u8 b : 3;
    u8 c : 3;
    u8 pad_01;
    u16 unk_02;
};

struct Unk_ov047_0225a5e8_Obj {
    u8 pad_00[0x20];
    Unk_ov047_0225a5e8_Obj();
    ~Unk_ov047_0225a5e8_Obj();
};

struct Unk_ov047_0225a074_Global;

struct Unk_ov047_0225a3e4_Msg {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
    u16 unk_04;
};

struct Unk_ov047_0225a5e8_Msg {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
};

extern "C" {
extern Unk_ov047_0225a074_Global *data_020cbb18;
extern u16 data_020c6cc8;
extern u8 data_021ed0a0[];
extern u8 data_ov047_0225b980[];
extern u8 data_ov047_0225b98c[];
extern u8 data_ov047_0225b9a0[];
extern u8 data_ov047_0225b1d8[];
extern u32 data_0213a740[];

BOOL func_020a032c();
u32 func_0209750c();
u32 func_0209865c(u32 a);
u32 func_02099864(u32 a);
u32 func_0209a108(u32 a);
void func_0209abb4(u32 a, s32 b);
BOOL func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_02099f98(u32 a, u16 *p);
BOOL func_0202e18c(void *self, void *out, s32 x);
BOOL func_0202e148();
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
void func_020851a4(void *p, s32 a);
BOOL func_02070060(void *g);
s32 func_0206fe80(void *g);
BOOL func_0206ed18();
s32 func_0206ed38();
u16 func_02099048(s32 a);
void func_02099064(s32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_02014ce4(void *self, u16 *p, s32 a, s32 b, s32 c);
void func_02014f74(void *self);
void func_0201578c(void *self, u16 *p, s32 a, s32 b);
void func_02067a84(void *self, void *buf, void *name);
void func_02067a3c(void *self, s32 a, void *obj);
s32 func_02070358(void *g, u16 *p);
s32 func_02070370(void *g, u16 *p);
BOOL func_020700a4(void *g, void *obj, u16 *p);
s32 func_02063b8c(s32 a);
void func_0209909c(u16 *p, s32 a, s32 b);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
}


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

class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual void vfunc_08();
    u32 pad_04[0x38 / 4];
    void *unk_3c;
    u32 pad_40[(0xac - 0x40) / 4];
};

class Unk_ov047_0225b5d4 : public Unk_0202e2bc {
public:
    typedef void (Unk_ov047_0225b5d4::*Fn)();

    Unk_ov047_0225b5d4();
    virtual ~Unk_ov047_0225b5d4();
    virtual void vfunc_08();
    virtual void vfunc_78(Unk_ov047_0225a074_Out *out);

    void func_ov047_0225a28c(Unk_ov047_0225b664 *owner);
    void func_ov047_0225a3e4();
    void func_ov047_0225a4d0();
    void func_ov047_0225a548();
    void func_ov047_0225a5e0();
    void func_ov047_0225a5e8();
    void func_ov047_0225a934(s32 idx);
    void func_ov047_0225a944(s32 idx);

    s32 unk_ac;
    Unk_ov047_0225b664 *unk_b0;
    Fn unk_b4;
    Fn unk_bc;
    s32 unk_c4;
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
};

class Unk_ov047_0225b664 : public Unk_020d8bc8 {
public:
    Unk_ov047_0225b664();
    virtual ~Unk_ov047_0225b664();

    BOOL func_ov047_0225a374();
    BOOL func_ov047_0225a3b0();
    void func_ov047_0225aeb4(s32 s);

    s32 unk_654;
    Unk_ov047_0225b5d4 unk_658;
    u8 pad_724[4];
    u8 unk_728;
    u8 pad_729[3];
    u16 unk_72c;
    u8 pad_72e[4];
    u8 unk_732;
};

extern "C" void func_ov047_0225a954(Unk_ov047_0225b5d4 *self, Unk_ov047_0225b5d4::Fn *out, s32 idx);

static inline BOOL Unk_ov047_0225a4a8_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov047_0225a3e4_Same(u16 *p, u16 *t) {
    if (func_0204b2d4(p)) {
        *t = 0xfff1;
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov047_0225a864_R(u16 *p, u32 lo, u32 hi) {
    return (*p >= lo && *p <= hi) ? TRUE : FALSE;
}

static inline s32 Unk_ov047_0225a5e8_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return v - lo;
    }
    return -1;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov047_0225b5d4::vfunc_78(Unk_ov047_0225a074_Out *out) {
    if (func_020a032c()) {
        out->unk_00 = data_ov047_0225b98c;
        out->unk_04 = 8;
        return;
    }
    out->unk_00 = data_ov047_0225b980;
    u32 r7 = func_02099864(func_0209865c(func_0209750c()));
    void *g = data_020cbb18;
    Unk_ov047_0225a074_Buf l;
    if (!func_02072e44(g) && *func_0209c37c(0, 0x4a) == 0) {
        l.unk_02 = 0xd00c;
        if (func_02099f98(r7, &l.unk_02)) {
            if (unk_b0->unk_732 == 0) {
                out->unk_04 = 0xe6;
            } else {
                out->unk_04 = 0xe5;
            }
            return;
        }
    }
    if (unk_b0->unk_728 == 0 && unk_ac != 1 && !func_02072e44(g) && *func_0209c37c(0, 0x4a) == 0) {
        if (func_0202e18c(unk_b0, &l, 1)) {
            out->unk_00 = data_ov047_0225b9a0;
            out->unk_04 = (data_ov047_0225b1d8 + l.b * 6)[l.c];
            unk_ac = 1;
            unk_b0->unk_728 = 1;
            return;
        }
    }
    unk_ac = 0;
    if (func_0202e148() == 0) {
        if (func_020851bc(func_020850e0(), 9) == 0) {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 4;
            } else {
                out->unk_04 = 5;
            }
        } else {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 6;
            } else {
                out->unk_04 = 7;
            }
        }
        func_020851a4(func_020850e0(), 9);
    } else if (func_020851bc(func_020850e0(), 9) == 0) {
        if (func_02070060(data_021ed0a0)) {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 0;
            } else {
                out->unk_04 = 1;
            }
        } else {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 8;
            } else {
                out->unk_04 = 9;
            }
        }
        unk_b0->unk_732 = 0;
        func_020851a4(func_020850e0(), 9);
    } else if (func_02070060(data_021ed0a0)) {
        if (unk_b0->unk_732 != 0) {
            out->unk_04 = 3;
            unk_b0->unk_732 = 0;
        } else {
            out->unk_04 = 2;
        }
    } else {
        if (unk_b0->unk_732 != 0) {
            out->unk_04 = 10;
            unk_b0->unk_732 = 0;
        } else {
            out->unk_04 = 11;
        }
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225a28c(Unk_ov047_0225b664 *owner) {
    vfunc_08();
    unk_b0 = owner;
    unk_ac = 0;
    unk_c4 = -1;
    unk_c8 = 0;
    unk_ca = 0xfff1;
}

void Unk_ov047_0225b5d4::vfunc_08() {
    Unk_0202e2bc::vfunc_08();
    unk_c4 = -1;
    unk_ca = 0xfff1;
    Fn t = *(Fn *)data_0213a740;
    unk_b4 = t;
    unk_bc = t;
}

Unk_ov047_0225b5d4::~Unk_ov047_0225b5d4() {}

Unk_ov047_0225b5d4::Unk_ov047_0225b5d4() {
    unk_ca = 0xfff1;
}

BOOL Unk_ov047_0225b664::func_ov047_0225a374() {
    if (func_020197a8(&unk_564) == 10) {
        if (func_02019790(&unk_564)) {
            unk_72c = 0x18;
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225a3b0() {
    func_020196b4(&unk_564, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a3e4() {
    void *o = unk_3c;
    Unk_ov047_0225a3e4_Msg m;
    m.unk_00 = 0xe8;
    u32 r7 = func_0209750c();
    if (func_0206ed18() && func_0202e148()) {
        s32 r5 = func_0206ed38();
        m.unk_02 = func_02099048(r5);
        if (r5 >= 0) {
            func_02099064(r5);
        }
        if (!Unk_ov047_0225a3e4_Same(&m.unk_02, &m.unk_04)) {
            func_02014ce4(this, &m.unk_02, 2, 5, 0);
        }
        func_0209abb4(func_0209a108(func_02099864(func_0209865c(r7))), 1);
        m.unk_00 = 0xe7;
    }
    func_02067a84(o, &m, data_ov047_0225b980);
}

extern "C" BOOL func_ov047_0225a4a8(u16 *p, s32 m) {
    if (m == 2) {
        return Unk_ov047_0225a4a8_R(p, 0x155f, 0x1560);
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a4d0() {
    void *o = unk_3c;
    if (func_0206ed18()) {
        u8 cmd = 0x13;
        void *g = data_021ed0a0;
        s32 v = func_0206fe80(g);
        if (v == 0) {
            cmd = 0x10;
        } else if (v <= 0x1e000) {
            cmd = 0x11;
        } else if (v <= 0x46000) {
            cmd = 0x12;
        } else if (func_02070060(g)) {
            cmd = 0x49;
        }
        func_02067a84(o, &cmd, data_ov047_0225b980);
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225a548() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.unk_00 = 0x22;
    if (func_0206ed18()) {
        unk_c4 = func_0206ed38();
        unk_ca = func_02099048(unk_c4);
        func_02014ce4(this, &unk_ca, 0, 10, 0);
        m.unk_00 = 0x19;
    } else {
        unk_ca = 0xfff1;
        func_02014f74(this);
    }
    func_ov047_0225a934(4);
    func_02067a84(o, &m, data_ov047_0225b980);
}

extern "C" BOOL func_ov047_0225a5c0(u16 *p, s32 m) {
    if (m == 0) {
        return Unk_ov047_0225a4a8_R(p, 0x1549, 0x1549);
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a5e0() {
    func_02014f74(this);
}

void Unk_ov047_0225b5d4::func_ov047_0225a5e8() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.unk_00 = 0x22;
    if (func_0206ed18()) {
        Unk_ov047_0225a5e8_Obj ob;
        unk_c4 = -1;
        unk_c4 = func_0206ed38();
        unk_ca = func_02099048(unk_c4);
        if (!Unk_ov047_0225a3e4_Same(&unk_ca, &m.unk_02)) {
            func_0201578c(this, &unk_ca, 0, 7);
            if (Unk_ov047_0225a4a8_R(&unk_ca, 0x1549, 0x1549)) {
                m.unk_00 = 0x21;
            } else {
                void *g = data_021ed0a0;
                if (func_02070358(g, &unk_ca) == 0) {
                    if (Unk_ov047_0225a4a8_R(&unk_ca, 0x450c, 0x45db)) {
                        unk_c8 = 0;
                        m.unk_00 = 0x25;
                    } else if (unk_ca >= 0x3894 && unk_ca <= 0x38e3) {
                        m.unk_00 = func_02063b8c(3) + 0x2e;
                    } else if (unk_ca >= 0x12b0 && unk_ca <= 0x12e7) {
                        if (Unk_ov047_0225a5e8_Idx(unk_ca, 0x12b0, 0x12e7) != 0x34) {
                            m.unk_00 = 0x32;
                        } else {
                            m.unk_00 = 0x33;
                        }
                    } else if (unk_ca >= 0x12e8 && unk_ca <= 0x131f) {
                        m.unk_00 = 0x35;
                    } else if (unk_ca >= 0x38e4 && unk_ca <= 0x3933) {
                        s32 idx = unk_ca >= 0x38e4 && unk_ca <= 0x3933 ? (s32)(unk_ca - 0x38e4) >> 2 : -1;
                        unk_ca = (u32)idx < 0x14 ? idx * 4 + 0x3934 : 0x3934;
                        s32 t = unk_c4;
                        if (t >= 0) {
                            func_0209909c(&unk_ca, 0, t);
                        }
                        m.unk_00 = 0x42;
                    } else if (unk_ca >= 0x3934 && unk_ca <= 0x3983) {
                        m.unk_00 = 0x43;
                    }
                } else {
                    switch (func_02070370(g, &unk_ca)) {
                    case 0:
                        m.unk_00 = 0x39;
                        break;
                    case 1:
                        if (func_020700a4(g, &ob, &unk_ca)) {
                            func_02067a3c(o, 0, &ob);
                        }
                        m.unk_00 = 0x38;
                        break;
                    case 2:
                        m.unk_00 = 0x37;
                        break;
                    }
                }
            }
            func_02014ce4(this, &unk_ca, 0, 10, 0);
            func_ov047_0225a934(4);
        }
    } else {
        unk_ca = 0xfff1;
        func_02014f74(this);
    }
    func_02067a84(o, &m, data_ov047_0225b980);
}

extern "C" BOOL func_ov047_0225a864(u16 *p, s32 m) {
    if (m == 0) {
        BOOL a = Unk_ov047_0225a4a8_R(p, 0x450c, 0x45db);
        BOOL b = Unk_ov047_0225a864_R(p, 0x3934, 0x3983);
        BOOL c = Unk_ov047_0225a864_R(p, 0x38e4, 0x3933);
        BOOL d = Unk_ov047_0225a864_R(p, 0x12e8, 0x131f);
        BOOL e = Unk_ov047_0225a864_R(p, 0x12b0, 0x12e7);
        BOOL f = Unk_ov047_0225a864_R(p, 0x3894, 0x38e3);
        BOOL g = Unk_ov047_0225a864_R(p, 0x1549, 0x1549);
        return b | (c | (d | (e | (f | (g | a)))));
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a934(s32 idx) {
    func_ov047_0225a954(this, &unk_bc, idx);
}

void Unk_ov047_0225b5d4::func_ov047_0225a944(s32 idx) {
    func_ov047_0225a954(this, &unk_b4, idx);
}

extern "C" void func_ov047_0225a954(Unk_ov047_0225b5d4 *self, Unk_ov047_0225b5d4::Fn *out, s32 idx) {
    static Unk_ov047_0225b5d4::Fn tbl[5] = {
        &Unk_ov047_0225b5d4::func_ov047_0225a5e8,
        &Unk_ov047_0225b5d4::func_ov047_0225a548,
        &Unk_ov047_0225b5d4::func_ov047_0225a3e4,
        &Unk_ov047_0225b5d4::func_ov047_0225a4d0,
        &Unk_ov047_0225b5d4::func_ov047_0225a5e0,
    };
    *out = tbl[idx];
}
