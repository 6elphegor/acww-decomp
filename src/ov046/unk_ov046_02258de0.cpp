#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov046_0225aa0c;
typedef void (Unk_ov046_0225aa0c::*Unk_ov046_02259480_Fn)(s32);

struct Unk_ov046_02258e68_Vec {
    s32 x, y, z;
};

struct Unk_ov046_02258e68_Actor {
    u8 pad_00[0x5c];
    Unk_ov046_02258e68_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov046_02259480_Ent {
    u32 id;
    Unk_ov046_02259480_Fn fn;
};

extern "C" {
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern u16 data_021f47d8[];
extern u8 data_ov046_0225ade0[];
extern u8 data_ov046_0225a9a8[];

Unk_ov046_02258e68_Actor *func_02095204(s32 n);
s32 func_02014220(void *p);
s32 func_020e9650(Unk_ov046_02258e68_Vec *a, Unk_ov046_02258e68_Vec *b);
void *func_020b50b4();
s32 func_020b6080(void *a, void *b, void *c, s32 d);
void func_0203a304();
void func_0203d704(void *p, s32 v);
s32 func_020b0564();
void func_020b0960(void *p);
void func_020b0948(void *p);
void func_020b03a0(void *p, s32 v);
void func_020b04cc(s32 v);
void func_020b02ec(void *p, s32 v);
void func_02067a3c(void *o, s32 a, void *p);
void func_02067a1c(void *o, s32 a, void *p, void *q);
void func_02067a84(void *o, void *p, void *q);
void func_02015878(void *self, u32 a, u32 b);
void func_02015848(void *self, u32 a, u32 b);
void func_02015958(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02015158(void *self, u32 a, u32 b, u32 c);
void func_02015170(void *self, u32 a, u32 b);
s32 func_020151d0(void *self, s32 a);
void func_02015ab0(void *self, u32 v);
s32 func_020aa514();
}

// Menu-state machine base
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
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
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    s32 func_02015a5c();
};

class Unk_ov046_0225aa0c : public Unk_02015b54 {
public:
    Unk_ov046_0225aa0c();
    virtual ~Unk_ov046_0225aa0c();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();

    s32 func_ov046_02259ac0();
    s32 func_ov046_02259ed4(s32 a);
    void func_ov046_02259c2c(s32 a);
    void func_ov046_02259004(s32 a);
    void func_ov046_02259024(s32 a);
    void func_ov046_0225904c(s32 a);
    void func_ov046_022590a0(s32 a);
    void func_ov046_022590b4(s32 a);
    void func_ov046_022590e0(s32 a);
    void func_ov046_0225913c(s32 a);
    void func_ov046_022591b0(s32 a);
    void func_ov046_0225922c(s32 a);
    void func_ov046_02259264(s32 a);
    void func_ov046_022592a4(s32 a);
    void func_ov046_022592d4(s32 idx);
    void func_ov046_0225946c(s32 a);
    void func_ov046_02259694();
    void func_ov046_022596b8();
    void func_ov046_022596dc();

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xbc - 0x40];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 pad_c3;
    /* 0xc4 */ s32 unk_c4[5];
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ u8 pad_dc[4];
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
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
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

class Unk_ov046_0225aaa0 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov046_0225aaa0();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();

    BOOL func_ov046_02258e34();
    BOOL func_ov046_02258e68();
    void func_ov046_0225a398(s32 a);

    s32 unk_654;
    Unk_ov046_0225aa0c unk_658;
};


// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov046_0225aaa0

Unk_ov046_0225aaa0::~Unk_ov046_0225aaa0() {}

BOOL Unk_ov046_0225aaa0::func_ov046_02258e34() {
    if (func_ov046_02258e68()) {
        unk_658.func_ov046_02259c2c(4);
        func_0203a304();
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov046_02258e68_Both() {
    if (data_021ef5d0 != 0 && data_021ef5cc != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_02258e68() {
    Unk_ov046_02258e68_Vec v0;
    Unk_ov046_02258e68_Vec v1;
    u32 out;
    u32 buf[3];
    BOOL result;
    Unk_ov046_02258e68_Actor *p = func_02095204(4);
    BOOL r6;
    if (Unk_ov046_02258e68_Both()) {
        r6 = TRUE;
    } else {
        r6 = FALSE;
    }
    if (p == 0 || func_02014220(&unk_618) != 0) {
        unk_658.func_ov046_02259c2c(5);
        result = FALSE;
        goto end;
    }
    Unk_ov046_02258e68_Vec *pv = &p->unk_5c;
    v0.x = p->unk_5c.x;
    v0.y = pv->y;
    v0.z = pv->z;
    v1.x = p->unk_5c.x;
    v1.y = pv->y;
    v1.z = pv->z;
    v1.x = 0x10800;
    v1.z = 0x17000;
    s32 d = func_020e9650(&v0, &v1);
    s32 a = p->unk_8e;
    if (d < 0x1000) {
        a = a & 0xffff;
        if (a < 0x6000 || a > 0xa000) {
            unk_658.func_ov046_02259c2c(5);
            result = FALSE;
            goto end;
        }
        if (r6 == 0) {
            if ((data_021f47d8[1] & 1) != 0) {
                result = TRUE;
                goto end;
            }
        }
        if (r6 != 0) {
            if (func_020b6080(func_020b50b4(), &buf, &out, 0) != 0) {
                if (out == 0x16) {
                    result = TRUE;
                    goto end;
                }
            }
        }
    }
    result = FALSE;
end:
    return result;
}

void Unk_ov046_0225aaa0::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
    case 1:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov046_0225a398(3);
        break;
    case 8:
        func_ov046_0225a398(1);
        break;
    }
}

BOOL Unk_ov046_0225aaa0::vfunc_58() {
    return func_02014220(&unk_618) == 0 ? TRUE : FALSE;
}

BOOL Unk_ov046_0225aaa0::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov046_0225aa0c

void Unk_ov046_0225aa0c::func_ov046_02259004(s32 a) {
    if (a == 0) {
        unk_d8 = 0x3b;
    } else {
        unk_d8 = func_ov046_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_02259024(s32 a) {
    if (a == 0) {
        unk_d8 = 0x30;
    } else if (a == 1) {
        unk_c2 = 1;
        unk_d8 = 0x15;
    } else {
        unk_d8 = 0x16;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225904c(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        unk_c2 = 2;
        unk_d8 = 0x1e;
    } else if (func_020b0564() < 0x10) {
        unk_d8 = 0x25;
    } else {
        unk_d8 = func_ov046_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590a0(s32 a) {
    if (a == 0) {
        unk_d8 = 7;
    } else {
        unk_d8 = 0xc;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590b4(s32 a) {
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x35;
        } else {
            unk_d8 = 0x30;
        }
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590e0(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        if (func_020b0564() == 0) {
            unk_d8 = 0x3e;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_c2 = 2;
        unk_d8 = 0x1e;
    } else {
        unk_d8 = 0xc;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225913c(s32 a) {
    u32 buf[9];
    unk_c0 = 0;
    if (a == 0) {
        if (unk_bc >= 0) {
            func_020b0960(buf);
            func_020b03a0(buf, unk_bc);
            func_02067a3c(unk_3c, 6, buf);
            func_020b04cc(unk_bc);
            func_020b0948(buf);
        }
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        unk_d8 = 0x1b;
    } else {
        unk_d8 = func_ov046_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_022591b0(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x18;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_d8 = 0x35;
    } else if (a == 2) {
        unk_c1 = 0x10 - func_020b0564();
        u8 z = 0;
        unk_c0 = z;
        unk_d8 = 0x1f;
        unk_c2 = z;
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225922c(s32 a) {
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x18;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_d8 = 0x30;
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_02259264(s32 a) {
    if (a == 0) {
        if (unk_bc >= 0) {
            func_020b04cc(unk_bc);
        }
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        unk_d8 = 0x21;
    } else {
        unk_d8 = 9;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022592a4(s32 a) {
    if (a == 0) {
        unk_d8 = 7;
    } else if (func_020b0564() < 0x10) {
        unk_d8 = 0x2a;
    } else {
        unk_d8 = func_ov046_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_022592d4(s32 idx) {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    void *o = unk_3c;
    unk_bc = unk_c4[idx];
    if (unk_bc >= 0) {
        u32 buf[9];
        func_020b0960(buf);
        func_020b03a0(buf, unk_bc);
        func_02067a3c(unk_3c, 6, buf);
        if (unk_c2 == 0) {
            unk_d8 = 0x19;
            unk_c0 = 0;
        } else if (unk_c2 == 1) {
            l.w[0] = 0;
            l.w[1] = 0;
            func_020b02ec(&l.w, unk_bc);
            func_02015878(this, ((u8 *)l.w)[4], 2);
            func_02015848(this, ((u8 *)l.w)[3], 3);
            func_02015958(this, ((u8 *)l.w)[1], 5, 2, 0, 0);
            s32 t4 = ((u8 *)l.w)[2];
            s32 r1 = 0x19;
            if (t4 > 0xc) {
                r1 = 0x1a;
                t4 -= 0xc;
            }
            if (t4 == 0) {
                t4 = 0xc;
            }
            l.msg = r1;
            func_02067a1c(o, 8, &l.msg, data_ov046_0225ade0);
            func_02015958(this, t4, 4, 2, 0, 0);
            unk_d8 = 0x17;
        } else if (unk_c2 == 2) {
            func_02015158(this, 0x2e, (u8)unk_bc, 0);
            func_020151d0(this, 3);
            func_ov046_02259ed4(3);
        }
        unk_c2 = 0;
        func_020b0948(buf);
    } else {
        if (unk_c1 == 0) {
            unk_d8 = func_ov046_02259ac0();
            if ((u8)(unk_c2 + 0xff) <= 1) {
                if (func_020b0564() < 0x10) {
                    if (unk_c2 == 1) {
                        unk_d8 = 0x16;
                    } else {
                        unk_d8 = 0x1d;
                    }
                }
            }
            unk_c2 = 0;
        } else {
            if (unk_1e == 0x15) {
                goto set3f;
            }
            if (unk_1e == 0x1e) {
                goto set3f;
            }
            if (unk_1e == 0x1f) {
            set3f:
                unk_d8 = 0x3f;
            } else if (unk_1e == 0x3f) {
                unk_d8 = 0x40;
            } else if (unk_1e == 0x40) {
                unk_d8 = 0x41;
            }
        }
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225946c(s32 a) {
    if (a == 0) {
        unk_d8 = 9;
    } else {
        unk_d8 = 0x23;
    }
}

void Unk_ov046_0225aa0c::vfunc_18() {
    func_02015a5c();
    s32 t = func_020aa514();
    unk_d8 = 0xff;
    static Unk_ov046_02259480_Ent tbl[26] = {
        {0x01, &Unk_ov046_0225aa0c::func_ov046_0225922c},
        {0x08, &Unk_ov046_0225aa0c::func_ov046_0225946c},
        {0x10, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x13, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x14, &Unk_ov046_0225aa0c::func_ov046_022591b0},
        {0x15, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x18, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x19, &Unk_ov046_0225aa0c::func_ov046_0225913c},
        {0x1e, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x1f, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x20, &Unk_ov046_0225aa0c::func_ov046_022590a0},
        {0x23, &Unk_ov046_0225aa0c::func_ov046_02259264},
        {0x24, &Unk_ov046_0225aa0c::func_ov046_0225904c},
        {0x25, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x26, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x27, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x28, &Unk_ov046_0225aa0c::func_ov046_022591b0},
        {0x29, &Unk_ov046_0225aa0c::func_ov046_0225922c},
        {0x2a, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x2b, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x31, &Unk_ov046_0225aa0c::func_ov046_022592a4},
        {0x35, &Unk_ov046_0225aa0c::func_ov046_02259024},
        {0x38, &Unk_ov046_0225aa0c::func_ov046_02259004},
        {0x3f, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x40, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x41, &Unk_ov046_0225aa0c::func_ov046_022592d4},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 26) {
        goto loop;
    }
    if (unk_d8 != 0xff) {
        u8 b = unk_d8;
        func_02067a84(unk_3c, &b, data_ov046_0225a9a8);
    }
}

void Unk_ov046_0225aa0c::func_ov046_02259694() {
    func_02015170(this, 0x2d, 0);
    func_020151d0(this, 2);
    func_ov046_02259ed4(0);
}

void Unk_ov046_0225aa0c::func_ov046_022596b8() {
    func_02015170(this, 0x12, 0);
    func_020151d0(this, 2);
    func_ov046_02259ed4(4);
}

void Unk_ov046_0225aa0c::func_ov046_022596dc() {
    func_02015170(this, 0x12, 0);
    func_020151d0(this, 2);
    func_ov046_02259ed4(2);
}
