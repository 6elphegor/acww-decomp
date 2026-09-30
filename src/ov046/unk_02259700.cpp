#include "types.h"

struct Unk_020660f8;
struct Unk_020aa3b8;

struct Unk_020aa72c {
    void func_020aa784(const u8 *p);
    void func_020aa780(const void *p);
    void func_020aa72c();
    void *func_020aa7a0();
};

struct Unk_020aa3b8 {
    void func_020aa5f4();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa4cc(s32 v);
    s32 func_020aa4b8();
};

struct Unk_020660f8 {
    Unk_020aa3b8 *func_020679b4();
    void func_020679c0(s32 v);
    void func_02067a1c(s32 a, void *b, void *c);
    void func_02067a3c(s32 a, void *b);
    void func_02067a84(u8 *a, void *b);
};

struct Unk_020b0960 {
    u32 pad[9];
    Unk_020b0960();
    ~Unk_020b0960();
};

struct Unk_020b40f4 {
    u32 pad[0x114 / 4];
    Unk_020b40f4();
    ~Unk_020b40f4();
};

extern "C" {
extern void *data_020cbb18;
extern u32 data_0213a740[];
extern u8 data_ov046_0225a9a8[];
extern u8 data_ov046_0225ade0[];
extern u8 data_ov046_0225adec[];

s32 func_02063b8c(u32 v);
s32 func_020b0564(void);
s32 func_020b058c(void);
s32 func_020b0334(s32 *out);
void func_020b031c(void);
void func_020b04cc(s32 idx);
void func_020b02ec(void *a, s32 idx);
s32 func_020b03a0(void *self, s32 idx);
void func_020b3558(void *o, u8 *p, u32 x);
void func_020a7a0c(void *a, void *b);
void func_020a7bd8(void *a, void *b);
BOOL func_020a032c(void);
void *func_0209750c(void);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_02072e44(void *p);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ec6c(void);
BOOL func_0206ed18(void);
const void *func_020aa3ac(u32 i);
}

// Base of the dialog-state object (ctor func_0202e2bc, D2 func_0202e26c), size 0xac.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();

    void func_02015158(u32 a, u32 b, u32 c);
    void func_020151d0(s32 a);
    void func_02015848(u32 a, u32 b);
    void func_02015878(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0x6c];
};

struct Unk_ov046_0225aa0c_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov046_0225a650_Entry {
    const void *p;
    u8 v;
};
extern "C" Unk_ov046_0225a650_Entry data_ov046_0225a650[];

class Unk_ov046_0225aa0c;
typedef void (Unk_ov046_0225aa0c::*Unk_ov046_0225aa0c_Fn)();

struct Unk_ov046_0225aa0c_Row {
    u32 id;
    Unk_ov046_0225aa0c_Fn f;
};

class Unk_ov046_0225aa0c : public Unk_0202e2bc {
public:
    Unk_ov046_0225aa0c();
    virtual ~Unk_ov046_0225aa0c();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_78(Unk_ov046_0225aa0c_Out *out);
    virtual void vfunc_84();
    virtual void vfunc_88();

    void func_02259694();
    void func_022596b8();
    void func_022596dc();
    void func_02259700();
    void func_02259714();
    void func_02259728();
    void func_0225975c();
    void func_022597a0();
    void func_022597f8();
    s32 func_02259ac0();
    void func_02259c2c(s32 v);
    void func_02259c34(void *p);
    void func_02259ce0();
    void func_02259d3c();
    void func_02259d8c();
    void func_02259de8();
    void func_02259eb4();
    void func_02259ed4(s32 idx);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 *unk_b0;
    /* 0xb4 */ Unk_ov046_0225aa0c_Fn unk_b4;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 pad_c2[2];
    /* 0xc4 */ s32 unk_c4[5];
    /* 0xd8 */ s32 unk_d8;
};

void Unk_ov046_0225aa0c::func_02259700() {
    vfunc_88();
}

void Unk_ov046_0225aa0c::func_02259714() {
    unk_d8 = func_02259ac0();
}

void Unk_ov046_0225aa0c::func_02259728() {
    s32 r = func_02063b8c(0x65);
    if (r < 0x46) {
        unk_d8 = func_02259ac0();
    } else if (r < 0x55) {
        unk_d8 = 0x32;
    } else {
        unk_d8 = 0x33;
    }
}

void Unk_ov046_0225aa0c::func_0225975c() {
    unk_bc = func_020b058c();
    if (unk_bc >= 0) {
        func_02015158(0x2e, (u8)unk_bc, 0);
        func_020151d0(3);
        func_02259ed4(1);
    } else {
        unk_d8 = 0x3e;
    }
}

void Unk_ov046_0225aa0c::func_022597a0() {
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x13;
        } else {
            unk_d8 = 0x10;
        }
    } else {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x14;
        } else {
            unk_d8 = 1;
        }
    }
}

void Unk_ov046_0225aa0c::func_022597f8() {
    s32 v = 0;
    if (func_020b0334(&v) == 0) {
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            unk_d8 = 0x2f;
        } else {
            unk_d8 = 0x11;
        }
    } else {
        if (func_020b0334(&v) == 1) {
            Unk_020b0960 s;
            func_020b03a0(&s, v);
            unk_3c->func_02067a3c(7, &s);
            unk_d8 = 0x39;
        } else {
            unk_d8 = 0x3a;
        }
        func_020b031c();
    }
}

void Unk_ov046_0225aa0c::vfunc_14() {
    if (func_020a032c() == 0) {
        func_0209750c();
        unk_d8 = 0xff;
        static Unk_ov046_0225aa0c_Row tbl[29] = {
            {0x00, &Unk_ov046_0225aa0c::func_022597f8},
            {0x04, &Unk_ov046_0225aa0c::func_022597a0},
            {0x05, &Unk_ov046_0225aa0c::func_022596dc},
            {0x07, &Unk_ov046_0225aa0c::func_0225975c},
            {0x09, &Unk_ov046_0225aa0c::func_022596dc},
            {0x0b, &Unk_ov046_0225aa0c::func_02259728},
            {0x0c, &Unk_ov046_0225aa0c::func_02259714},
            {0x12, &Unk_ov046_0225aa0c::func_02259714},
            {0x15, &Unk_ov046_0225aa0c::func_02259700},
            {0x16, &Unk_ov046_0225aa0c::func_02259714},
            {0x17, &Unk_ov046_0225aa0c::func_02259714},
            {0x1a, &Unk_ov046_0225aa0c::func_02259714},
            {0x1b, &Unk_ov046_0225aa0c::func_02259714},
            {0x1d, &Unk_ov046_0225aa0c::func_02259714},
            {0x1e, &Unk_ov046_0225aa0c::func_02259700},
            {0x1f, &Unk_ov046_0225aa0c::func_02259700},
            {0x21, &Unk_ov046_0225aa0c::func_02259714},
            {0x2c, &Unk_ov046_0225aa0c::func_022597f8},
            {0x2d, &Unk_ov046_0225aa0c::func_022597f8},
            {0x2e, &Unk_ov046_0225aa0c::func_022597f8},
            {0x30, &Unk_ov046_0225aa0c::func_02259694},
            {0x32, &Unk_ov046_0225aa0c::func_02259714},
            {0x33, &Unk_ov046_0225aa0c::func_02259714},
            {0x3b, &Unk_ov046_0225aa0c::func_022596b8},
            {0x3d, &Unk_ov046_0225aa0c::func_02259714},
            {0x3e, &Unk_ov046_0225aa0c::func_02259714},
            {0x3f, &Unk_ov046_0225aa0c::func_02259700},
            {0x40, &Unk_ov046_0225aa0c::func_02259700},
            {0x41, &Unk_ov046_0225aa0c::func_02259700},
        };
        s32 i = 0;
        u8 *p = &unk_1e;
        Unk_ov046_0225aa0c_Row *t = tbl;
        for (; (u32)i < 0x1d; i++) {
            u32 a = tbl[i].id;
            u32 b = *p;
            if (a == b) {
                (this->*t[i].f)();
            }
        }
        if (unk_d8 != 0xff) {
            u8 v = unk_d8;
            unk_3c->func_02067a84(&v, data_ov046_0225a9a8);
        }
    }
}

s32 Unk_ov046_0225aa0c::func_02259ac0() {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020b0564() < 0x10) {
            return 0x27;
        }
        return 0x26;
    }
    if (func_020b0564() < 0x10) {
        return 0x28;
    }
    return 0x29;
}

void Unk_ov046_0225aa0c::vfunc_78(Unk_ov046_0225aa0c_Out *out) {
    if (func_020a032c()) {
        out->unk_00 = data_ov046_0225adec;
        out->unk_04 = 0x14;
        return;
    }
    if (unk_ac == 5) {
        if (func_0202e1cc(2, 1) == 0) {
            if (unk_b0[0x73a] == 0) {
                unk_ac = 1;
            } else {
                unk_ac = 0;
            }
        } else {
            if (unk_b0[0x73a] == 0) {
                unk_ac = 3;
            } else {
                unk_ac = 2;
            }
        }
    }
    s32 t = unk_ac;
    if (t == 4 && unk_b0[0x73a] == 0) {
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            if (func_020b0564() < 0x10) {
                out->unk_04 = 0x13;
            } else {
                out->unk_04 = 0x10;
            }
        } else {
            if (func_020b0564() < 0x10) {
                out->unk_04 = 0x14;
            } else {
                out->unk_04 = 1;
            }
        }
        out->unk_00 = data_ov046_0225a9a8;
    } else if (t >= 0 && t < 5) {
        out->unk_04 = data_ov046_0225a650[t].v;
        out->unk_00 = data_ov046_0225a650[unk_ac].p;
    }
}

void Unk_ov046_0225aa0c::func_02259c2c(s32 v) {
    unk_ac = v;
}

void Unk_ov046_0225aa0c::func_02259c34(void *p) {
    vfunc_08();
    unk_b0 = (u8 *)p;
    unk_c0 = 0;
    unk_c1 = 0x10 - func_020b0564();
}

void Unk_ov046_0225aa0c::vfunc_08() {
    Unk_0202e2bc::vfunc_08();
    unk_b4 = *(Unk_ov046_0225aa0c_Fn *)data_0213a740;
    unk_bc = func_020b058c();
}

Unk_ov046_0225aa0c::Unk_ov046_0225aa0c() {}

Unk_ov046_0225aa0c::~Unk_ov046_0225aa0c() {}

void Unk_ov046_0225aa0c::func_02259ce0() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 5;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            v = 0x3d;
            Unk_020b0960 s;
            func_020b03a0(&s, unk_bc);
            unk_3c->func_02067a3c(0, &s);
        }
        o->func_02067a84(&v, data_ov046_0225a9a8);
    }
}

void Unk_ov046_0225aa0c::func_02259d3c() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 0x1d;
    if (func_0206ed18()) {
        v = 0x38;
    } else {
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        v = 0x1d;
    }
    o->func_02067a84(&v, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259d8c() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 5;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            Unk_020b0960 s;
            v = 0xb;
            func_020b03a0(&s, unk_bc);
            unk_3c->func_02067a3c(0, &s);
        }
        o->func_02067a84(&v, data_ov046_0225a9a8);
    }
}

struct Unk_ov046_02259de8_Time {
    u32 w0, w1;
};

void Unk_ov046_0225aa0c::func_02259de8() {
    Unk_020660f8 *o = unk_3c;
    u8 msg[4];
    Unk_ov046_02259de8_Time t;
    msg[0] = 0xc;
    if (func_0206ed18()) {
        t.w0 = 0;
        t.w1 = 0;
        func_020b02ec(&t, unk_bc);
        func_02015878(((u8 *)&t)[4], 2);
        func_02015848(((u8 *)&t)[3], 3);
        func_02015958(((u8 *)&t)[1], 5, 2, 0, 0);
        s32 h = 0x19;
        s32 m = ((u8 *)&t)[2];
        if (m > 0xc) {
            h = 0x1a;
            m -= 0xc;
        }
        if (m == 0) {
            m = 0xc;
        }
        func_02015958(m, 4, 2, 0, 0);
        msg[1] = h;
        o->func_02067a1c(8, &msg[1], data_ov046_0225ade0);
        msg[0] = 8;
    } else {
        func_020b04cc(unk_bc);
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
    }
    o->func_02067a84(msg, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259eb4() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 0x12;
    o->func_02067a84(&v, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259ed4(s32 idx) {
    static Unk_ov046_0225aa0c_Fn tbl[5] = {
        &Unk_ov046_0225aa0c::func_02259eb4,
        &Unk_ov046_0225aa0c::func_02259de8,
        &Unk_ov046_0225aa0c::func_02259d8c,
        &Unk_ov046_0225aa0c::func_02259d3c,
        &Unk_ov046_0225aa0c::func_02259ce0,
    };
    unk_b4 = tbl[idx];
}

void Unk_ov046_0225aa0c::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        unk_b4 = *(Unk_ov046_0225aa0c_Fn *)data_0213a740;
    }
}

void Unk_ov046_0225aa0c::vfunc_88() {
    Unk_020660f8 *o = unk_3c;
    Unk_020aa3b8 *r7 = o->func_020679b4();
    u8 v = 0xf;
    r7->func_020aa5f4();
    Unk_020b0960 a;
    Unk_020b0960 b;
    v = 0x7d;
    func_020b3558(&b, &v, 0);
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_c4[i] = -1;
    }
    s32 r6 = unk_c0;
    s32 r4 = 0;
    for (; r6 < 0x10 && r4 < 4 && unk_c1 != 0; r6++) {
        if (func_020b03a0(&a, r6)) {
            Unk_020b40f4 c;
            Unk_020aa72c *q = r7->func_020aa560(r4);
            func_020a7a0c(&c, &a);
            func_020a7a0c(&c, &b);
            func_020a7bd8(q->func_020aa7a0(), &c);
            unk_c4[r4] = r6;
            r4++;
            unk_c1 = unk_c1 - 1;
        }
    }
    unk_c0 = r6;
    if (unk_c0 >= 0x10) {
        unk_c0 = 0xf;
    }
    v = 0xf;
    if (unk_c1 == 0) {
        v = 0x10;
    }
    Unk_020aa72c *p = r7->func_020aa560(r4);
    p->func_020aa784(&v);
    p->func_020aa780(func_020aa3ac(1));
    p->func_020aa72c();
    r7->func_020aa4cc(r4 + 1);
    r7->func_020aa4b8();
    unk_3c->func_020679c0(1);
}
