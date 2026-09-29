#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_02226724_Model {
    u8 unk_00[0xb8];
};
struct Unk_ov004_02226724_Res {
    u8 unk_00[0xa4];
};
struct Unk_ov004_022264a0_Obj {
    u8 pad_00[0x290];
    Unk_ov004_02226724_Model unk_290[4];
    u8 pad_570[0x908 - 0x570];
    Unk_ov004_02226724_Res unk_908[4];
    u8 pad_b98[0xecc - 0xb98];
    u32 unk_ecc[4];
    u8 pad_edc[0xef0 - 0xedc];
    u8 unk_ef0, unk_ef1, unk_ef2;
    u8 pad_ef3[3];
    u8 unk_ef6, unk_ef7;
    u8 unk_ef8, unk_ef9;
    u8 pad_efa[2];
    s32 unk_efc;
    u8 pad_f00[0xf38 - 0xf00];
    void *unk_f38;
};

struct Unk_ov004_02226574_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02226458_Obj {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x14];
    void (*unk_1c)(void *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
};

struct Unk_ov004_02226468_Sub {
    u8 pad_00[0x2c];
    u32 unk_2c;
};
struct Unk_ov004_02226468_Ctx {
    u8 unk_00[2];
    u8 pad_02[2];
};
struct Unk_ov004_02226468_Obj {
    Unk_ov004_02226468_Ctx *unk_00;
    Unk_ov004_02226468_Sub *unk_04;
};

typedef Unk_ov004_022264a0_Obj Obj;

extern "C" {
extern Obj *volatile data_ov004_02250cd0;
extern void *data_021c620c;

void func_02031c10(void *p);
void func_02031c48(void *p);
void func_02055c70(void *p);
void func_02055c88(void *p);
u32 func_0205458c(void *p);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_02054710(void *p);
s32 func_02054800(void *p, void *q);
BOOL func_02056654(void *p);
s32 func_020555ec(void *p, u32 a, u32 b);
u32 func_ov004_02224d8c(void *p, u32 i);
s32 func_ov004_02224d9c(void *p);
s32 func_ov004_02224d08(void *p);
s32 func_ov004_02224d10(void *p, u32 x);
s32 func_ov004_02224dbc(void *p, u32 id);
u32 func_ov004_02224d68(void *p);
u32 func_ov004_02224d04(void *p);
s32 func_ov004_02225cf4(u32 a, u32 b, void *c);
s32 func_ov004_02227104(Obj *o, u32 n);
s32 func_ov004_02227228(Obj *o);
s32 func_021039ec(u32 a, u32 b);
s32 func_02103830(u32 a, u32 b);
s32 func_0203a5ac(void);
s32 func_0203a264(void);
s32 func_0203a598(void);
s32 func_020902f8(void *p);
void *func_02090268(u32 a, void *b, void *c, u32 d);
u32 func_ov004_0221c08c(void);
u32 func_ov004_0221c070(void);
}

class Unk_ov004_0224d4e8 : public Unk_020d8c7c_Base {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    u8 pad_04[0x290 - 4];
};

struct Unk_02055c88 {
    u8 pad_00[0x2c];
    Unk_02055c88();
    ~Unk_02055c88();
};
struct Unk_02031c48 {
    u8 pad_00[0x9c];
    Unk_02031c48();
    ~Unk_02031c48();
};

class Unk_ov004_0224d80c : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224d80c();
    virtual ~Unk_ov004_0224d80c();
    Unk_02055c88 unk_290;
    Unk_02031c48 unk_2bc;
    Unk_02031c48 unk_358;
    Unk_02031c48 unk_3f4;
    u8 pad_490[8];
};

Unk_ov004_0224d80c::Unk_ov004_0224d80c() {}
Unk_ov004_0224d80c::~Unk_ov004_0224d80c() {}

extern "C" {
Unk_ov004_0224d80c *func_ov004_02226484() {
    return new Unk_ov004_0224d80c();
}

void func_ov004_02226468(Unk_ov004_02226458_Obj *o);
void func_ov004_02226458(Unk_ov004_02226458_Obj *o) {
    o->unk_1c = (void (*)(void *))func_ov004_02226468;
    o->unk_90 = 2;
}

void func_ov004_02226468(Unk_ov004_02226458_Obj *o) {
    Unk_ov004_02226468_Obj *t = (Unk_ov004_02226468_Obj *)o;
    Unk_ov004_02226468_Sub *s = t->unk_04;
    if (s->unk_2c != 0) {
        func_ov004_02225cf4(s->unk_2c, t->unk_00->unk_00[1], o);
    }
}

void func_ov004_022264a0(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        g->unk_ef8 = 1;
    }
}

void func_ov004_022264b8(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        g->unk_ef6 = 1;
        data_ov004_02250cd0->unk_ef7 = 1;
    }
}

s32 func_ov004_022264dc(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8) {
    u32 t = func_0205458c(m);
    if (t != func_ov004_02224d8c(res, id)) {
        func_02054720(m, func_ov004_02224d8c(res, id), a5, a6, *(u16 *)&a7, *(u16 *)&a8);
    }
}

BOOL func_ov004_02226520(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        u32 t = func_0205458c((u8 *)g + 0x348);
        if (t == func_ov004_02224d8c((u8 *)g + 0x9ac, 0xc)) {
            if (func_02056654((u8 *)data_ov004_02250cd0 + 0x3e4)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL func_ov004_02226574(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        u32 t = func_0205458c((u8 *)g + 0x348);
        if (t == func_ov004_02224d8c((u8 *)g + 0x9ac, 0xb)) {
            if (((Unk_ov004_02226574_Bits *)((u8 *)data_ov004_02250cd0 + 0x3ec))->mid == 9) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 func_ov004_022265c8(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        return g->unk_efc;
    }
    return 0;
}

#define GETTER(addr, n) \
    s32 func_ov004_##addr(void) { \
        Obj *g = data_ov004_02250cd0; \
        if (g) { \
            return func_ov004_02227104(g, n); \
        } \
        return 0; \
    }
GETTER(022265e4, 9)
GETTER(02226604, 8)
GETTER(02226624, 7)
GETTER(02226644, 6)
GETTER(02226664, 5)
GETTER(02226684, 4)
GETTER(022266a4, 3)
GETTER(022266c4, 2)
GETTER(022266e4, 1)
GETTER(02226704, 0)

void func_ov004_02226724(Obj *o, u32 idx) {
    Unk_ov004_02226724_Res *r = &o->unk_908[idx];
    if (func_ov004_02224d8c(r, 0)) {
        if (func_02054800(&o->unk_290[idx], data_021c620c)) {
            u32 off = idx * 0xb8;
            void *m = (u8 *)o->unk_290 + off;
            func_02054720(m, func_ov004_02224d8c(r, 0), 1, 0x1000, 0, 0);
            func_02054710(m);
            *(u32 *)((u8 *)o + off + 0x33c) = 0;
        }
    }
}

s32 func_ov004_022267a8(Obj *o, u32 idx) {
    func_ov004_02224d9c(&o->unk_908[idx]);
    func_ov004_02224d08(&o->unk_ecc[idx]);
}

void func_ov004_022267dc(Obj *o, u32 idx, u32 id, u32 x) {
    u8 *b = (u8 *)o;
    void *r = b + 0x908 + idx * 0xa4;
    void *q;
    func_ov004_02224dbc(r, id);
    q = b + 0xecc + idx * 4;
    func_ov004_02224d10(q, x);
    func_020555ec(b + 0x290 + idx * 0xb8, func_ov004_02224d68(r), 0);
    func_021039ec(func_ov004_02224d68(r), func_ov004_02224d04(q));
    func_02103830(func_ov004_02224d68(r), func_ov004_02224d04(q));
}

void func_ov004_02226860(void) {
    Obj *g = data_ov004_02250cd0;
    if (g) {
        func_ov004_02227228(g);
    }
}

#define M0 (&o->unk_290[0])
#define M1 (&o->unk_290[1])
#define M2 (&o->unk_290[2])
#define R0 (&o->unk_908[0])
#define R1 (&o->unk_908[1])
#define R2 (&o->unk_908[2])
#define UP(id, m, r, a5, a7) func_ov004_022264dc(o, id, m, r, a5, 0x1000, a7, 0)

void func_ov004_0222687c(Obj *o) {
    if (func_0205458c(M1) == func_ov004_02224d8c(R1, 0xb)) {
        if (func_02056654((u8 *)o + 0x3e4)) {
            UP(0xc, M1, R1, 1, 0);
            UP(0xa, M2, R2, 1, 0);
        }
    }
}

BOOL func_ov004_02226904(void) {
    func_0203a5ac();
    return TRUE;
}

void func_ov004_02226914(Obj *o) {
    if (func_0205458c(M1) == func_ov004_02224d8c(R1, 6) && func_02056654((u8 *)o + 0x3e4)) {
        UP(9, M1, R1, 1, 0);
        UP(7, M2, R2, 1, 0);
    } else if (func_0205458c(M1) == func_ov004_02224d8c(R1, 9) && func_02056654((u8 *)o + 0x3e4)) {
        UP(0xa, M1, R1, 1, 0);
        UP(8, M2, R2, 1, 0);
    } else if (func_0205458c(M1) == func_ov004_02224d8c(R1, 0xa) && func_02056654((u8 *)o + 0x3e4)) {
        func_0203a264();
        func_0203a598();
        UP(0xb, M1, R1, 1, 0);
        UP(9, M2, R2, 1, 0);
    }
}

BOOL func_ov004_02226a68(Obj *o) {
    func_020902f8(o->unk_f38);
    return TRUE;
}

void func_ov004_02226a80(Obj *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf8) {
        UP(7, M1, R1, 3, t);
        UP(5, M2, R2, 3, t);
    }
}

BOOL func_ov004_02226aec(void) {
    return TRUE;
}

void func_ov004_02226af0(Obj *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf8) {
        UP(6, M1, R1, 1, 0);
        UP(4, M2, R2, 1, 0);
        if (t == 0x3b) {
            o->unk_f38 = func_02090268(0x6b, (u8 *)o + 0xf10, (u8 *)o + 0x8e, 0);
        }
    }
}

BOOL func_ov004_02226b7c(void) {
    return TRUE;
}

void func_ov004_02226b80(Obj *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf7) {
        UP(5, M1, R1, 0, 0);
        UP(3, M2, R2, 0, 0);
    }
}

BOOL func_ov004_02226be8(Obj *o) {
    func_02054720(&o->unk_290[3], func_ov004_02224d8c(&o->unk_908[3], 0), 1, 0x1000, 0, 0);
    return TRUE;
}

void func_ov004_02226c24(Obj *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf2) {
        UP(0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(0, M0, R0, 0, 0);
    } else if (func_ov004_0221c070() == 0xf4) {
        UP(1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(1, M0, R0, 0, 0);
    } else if (func_ov004_0221c070() == 0xf6) {
        if (t <= 6) {
            o->unk_ef9 = 1;
            o->unk_ef0 = 1;
        } else {
            o->unk_ef9 = 0;
            o->unk_ef0 = 0;
        }
        if (t >= 0x12) {
            o->unk_ef1 = 1;
            o->unk_ef2 = 1;
        } else {
            o->unk_ef1 = 0;
            o->unk_ef2 = 0;
        }
        UP(2, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(2, M0, R0, 0, 0);
        UP(2, M1, R1, 0, 0);
        UP(2, M2, R2, 0, 0);
    } else if (func_ov004_0221c070() == 0xf3) {
        UP(0, M1, R1, 0, 0);
        UP(0, M2, R2, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        UP(1, M1, R1, 0, 0);
        UP(1, M2, R2, 0, 0);
    }
}
}
