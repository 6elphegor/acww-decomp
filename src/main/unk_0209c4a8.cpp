#include "types.h"

struct Unk_0209c82c_V {
    s32 x, y, z;
};
typedef Unk_0209c82c_V Unk_0209c614_Vec;

struct Unk_0209c614_S {
    u8 a, b, c, d;
    u16 e;
    s16 f;
};

struct Unk_0209c7a4_T {
    u8 unk_00, unk_01, unk_02, unk_03;
};

// 0x24-byte state object at data_021d7290
class Unk_0209c82c {
public:
    Unk_0209c82c();
    ~Unk_0209c82c();

    /* 0x00 */ u8 unk_00;
    /* 0x04 */ Unk_0209c82c_V unk_04;
    /* 0x10 */ Unk_0209c82c_V unk_10;
    /* 0x1c */ u16 unk_1c;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
};

// one-byte bit set (4 bits), no constructor (also used as a stack copy)
struct Unk_0209c980_Raw {
    u8 unk_00;
};

class Unk_0209c980 : public Unk_0209c980_Raw {
public:
    Unk_0209c980();
    ~Unk_0209c980();
};

class Unk_020cbb18 {
public:
    BOOL func_02072e44();
    void func_020728d4();
    void func_020728a4(u8 *buf, u32 n);
    void func_02072824(u32 cmd, u32 arg);
    u32 func_020729cc(u32 v);
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_0209c614_Actor {
public:
    u8 pad_00[0x5c];
    Unk_0209c614_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

extern "C" {
extern u8 data_020e416c;
extern const u8 data_020d064c[4];
extern u8 gVec3Zero[];

void func_020b4b68(void *o, u32 id, u32 *p24, s16 *f);
void func_020b4aec(void *o, u32 id, Unk_0209c614_Vec *v34, Unk_0209c614_Vec *v40);
void func_0204edd8(Unk_0209c614_Vec *a, Unk_0209c614_Vec *b);
void *func_020b4934();
s32 func_020b4c64(void *o, u32 id, u8 *a, Unk_0209c614_Vec *v, u32 *p20, u16 *e, u8 *c, u8 *b, s32 z0, s32 z1);
s32 func_020b50e8();
s32 func_020b50dc();
Unk_0209c614_Actor *func_02095204(u32 n);

u32 func_0209c7ec(u32 v);
void func_0209c82c(Unk_0209c82c *t, Unk_0209c82c_V *v);
void func_0209c83c(Unk_0209c82c *t, u32 v);
void func_0209c840(Unk_0209c82c *t, Unk_0209c82c_V *v);
void func_0209c850(Unk_0209c82c *t, u32 v);
void func_0209c854(Unk_0209c82c *t, u32 v);
void func_0209c85c(Unk_0209c82c *t, u32 v);
void func_0209c860(Unk_0209c82c *t, u32 v);
void func_0209c878(Unk_0209c82c *t);
s32 func_0209c8d4(Unk_0209c980_Raw *t, u32 i, u32 b);
void func_0209c8f0(Unk_0209c980_Raw *t, u32 i, u32 b);
void func_0209c908(Unk_0209c980_Raw *t, u32 i, u32 b);
void func_0209c920(Unk_0209c980_Raw *t);
s32 func_0209c93c(Unk_0209c980_Raw *t, u32 b);
s32 func_0209c95c(Unk_0209c980_Raw *t);
u32 func_0209c980(Unk_0209c980_Raw *t, u32 i);
void func_0209c994(Unk_0209c980_Raw *t, u32 i);
void func_0209c9ac(Unk_0209c980_Raw *t, u32 i);
void func_0209c9c4(Unk_0209c980_Raw *t);
}

// the 0x33-entry array object at data_021d72b4
class Unk_0209c980_Set {
public:
    Unk_0209c980_Set() { func_0209c920(e); }
    ~Unk_0209c980_Set();

    Unk_0209c980 e[0x33];
};

// data (rodata)

extern const u8 data_020d064c[4];
const u8 data_020d064c[4] = {0x1f, 0x1d, 0x22, 0x20};

// data (bss), in the order __sinit constructs them

Unk_0209c82c data_021d7290;
Unk_0209c980_Set data_021d72b4;

extern "C" void func_0209c5a0(u32 a, u32 b);

Unk_0209c980::Unk_0209c980() {
    func_0209c9c4(this);
}

Unk_0209c980_Set::~Unk_0209c980_Set() {}

extern "C" void func_0209c9c4(Unk_0209c980_Raw *t) {
    t->unk_00 = 0;
}

extern "C" void func_0209c9ac(Unk_0209c980_Raw *t, u32 i) {
    t->unk_00 |= 1 << (i & 3);
}

extern "C" void func_0209c994(Unk_0209c980_Raw *t, u32 i) {
    t->unk_00 &= ~(1 << (i & 3));
}

extern "C" u32 func_0209c980(Unk_0209c980_Raw *t, u32 i) {
    return ((t->unk_00 >> (i & 3)) & 1) != 0 ? TRUE : FALSE;
}

extern "C" s32 func_0209c95c(Unk_0209c980_Raw *t) {
    s32 n = 0;
    u32 i = n;
    for (; i < 4; i++) {
        if (func_0209c980(t, i)) {
            n++;
        }
    }
    return n;
}

Unk_0209c980::~Unk_0209c980() {}

extern "C" s32 func_0209c93c(Unk_0209c980_Raw *t, u32 b) {
    Unk_0209c980_Raw c;
    c.unk_00 = t->unk_00;
    func_0209c9ac(&c, b);
    return func_0209c95c(&c);
}

extern "C" void func_0209c920(Unk_0209c980_Raw *t) {
    u32 i;
    for (i = 0; i < 0x33; i++) {
        func_0209c9c4(t + i);
    }
}

extern "C" void func_0209c908(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        func_0209c9ac(t + i, b);
    }
}

extern "C" void func_0209c8f0(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        func_0209c994(t + i, b);
    }
}

extern "C" s32 func_0209c8d4(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        return func_0209c93c(t + i, b);
    }
    return 0;
}

Unk_0209c82c::Unk_0209c82c() {
    func_0209c878(this);
}

Unk_0209c82c::~Unk_0209c82c() {}

extern "C" void func_0209c878(Unk_0209c82c *t) {
    func_0209c860(t, 2);
    func_0209c85c(t, -1);
    func_0209c854(t, 0);
    func_0209c850(t, 0);
    func_0209c840(t, (Unk_0209c82c_V *)gVec3Zero);
    func_0209c83c(t, 0);
    func_0209c82c(t, (Unk_0209c82c_V *)gVec3Zero);
}

extern "C" u32 func_0209c874(Unk_0209c82c *t) {
    return t->unk_1f;
}

extern "C" u32 func_0209c86c(Unk_0209c82c *t) {
    return t->unk_20;
}

extern "C" void *func_0209c868(Unk_0209c82c *t) {
    return &t->unk_04;
}

extern "C" void *func_0209c864(Unk_0209c82c *t) {
    return &t->unk_10;
}

extern "C" void func_0209c860(Unk_0209c82c *t, u32 v) {
    t->unk_1f = v;
}

extern "C" void func_0209c85c(Unk_0209c82c *t, u32 v) {
    t->unk_1e = v;
}

extern "C" void func_0209c854(Unk_0209c82c *t, u32 v) {
    t->unk_20 = v;
}

extern "C" void func_0209c850(Unk_0209c82c *t, u32 v) {
    t->unk_00 = v;
}

extern "C" void func_0209c840(Unk_0209c82c *t, Unk_0209c82c_V *v) {
    t->unk_04.x = v->x;
    t->unk_04.y = v->y;
    t->unk_04.z = v->z;
}

extern "C" void func_0209c83c(Unk_0209c82c *t, u32 v) {
    t->unk_1c = v;
}

extern "C" void func_0209c82c(Unk_0209c82c *t, Unk_0209c82c_V *v) {
    t->unk_10.x = v->x;
    t->unk_10.y = v->y;
    t->unk_10.z = v->z;
}

extern "C" void func_0209c80c() {
    func_0209c878(&data_021d7290);
    func_0209c920(data_021d72b4.e);
}

extern "C" u32 func_0209c7ec(u32 v) {
    s32 i;
    for (i = 0; (u32)i < 2; i++) {
        if (v == data_020d064c[i * 2]) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 func_0209c7a4(void *p) {
    Unk_0209c7a4_T t;
    s32 b, a;
    u32 c[3];
    if (func_020b4c64(func_020b4934(), (u32)p, (u8 *)&t, (Unk_0209c614_Vec *)c, (u32 *)&a, (u16 *)&b, &t.unk_02, &t.unk_01, 0, 0)) {
        return func_0209c7ec(t.unk_00);
    }
    return 0;
}

extern "C" BOOL func_0209c614(u32 id) {
    Unk_0209c614_Actor *p = func_02095204(4);
    void *o = func_020b4934();
    Unk_0209c614_S s;
    u32 a20, a24;
    Unk_0209c614_Vec v28, v34, v40, v4c;
    s32 r = func_020b4c64(o, id, &s.a, &v28, &a20, &s.e, &s.c, &s.b, 0, 0);
    func_0209c860(&data_021d7290, 0);
    if (r != 0 && p != 0) {
        Unk_0209c614_Vec *pv = &p->unk_5c;
        v40.x = pv->x;
        v40.y = pv->y;
        v40.z = pv->z;
        s32 h = p->unk_8e;
        func_020b4b68(func_020b4934(), id, &a24, &s.f);
        func_020b4aec(func_020b4934(), id, &v34, &v40);
        func_0209c85c(&data_021d7290, id);
        func_0209c854(&data_021d7290, a24);
        func_0209c850(&data_021d7290, s.a);
        if (a24 != 0) {
            func_0209c840(&data_021d7290, &v34);
            func_0209c83c(&data_021d7290, s.f);
        } else {
            func_0209c840(&data_021d7290, &v40);
            func_0209c83c(&data_021d7290, h);
        }
        v4c.x = v40.x;
        v4c.y = v40.y;
        v4c.z = v40.z;
        v4c.z = v4c.z + 0x2000;
        func_0204edd8(&v4c, &v4c);
        v4c.x = v40.x;
        func_0209c82c(&data_021d7290, &v4c);
        if (func_0209c7ec(s.a)) {
            Unk_020cbb18 *g = data_020cbb18;
            if (!g->func_02072e44() || g->func_020729cc(0) != 0) {
                if ((u32)func_0209c8d4(data_021d72b4.e, s.a, 0) <= 1) {
                    func_0209c908(data_021d72b4.e, s.a, 0);
                    func_0209c860(&data_021d7290, 2);
                } else {
                    func_0209c860(&data_021d7290, 1);
                }
            } else {
                s.d = s.a;
                g = data_020cbb18;
                g->func_020728d4();
                g->func_020728a4(&s.d, 1);
                g->func_02072824(0x33, 0);
            }
        } else {
            func_0209c860(&data_021d7290, 2);
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void *func_0209c60c() {
    return &data_021d7290;
}

extern "C" void func_0209c5a0(u32 a, u32 b) {
    Unk_020cbb18 *g = data_020cbb18;
    if (!g->func_02072e44() || g->func_020729cc(0) != 0 || g->func_020729cc(4) != 0) {
        func_0209c8f0(data_021d72b4.e, a, b);
    } else {
        u8 v = a;
        g = data_020cbb18;
        g->func_020728d4();
        g->func_020728a4(&v, 1);
        g->func_02072824(0x35, 0);
    }
}

extern "C" void func_0209c540() {
    func_0209c878(&data_021d7290);
    BOOL is1;
    if (data_020e416c == 1) is1 = TRUE;
    else is1 = FALSE;
    if (is1) {
        u32 r6 = func_020b50e8();
        u32 r5 = func_020b50dc();
        u32 i = 0;
        u32 z = i;
        for (; i < 2; i++) {
            const u8 *e = &data_020d064c[i * 2];
            if (r6 == e[1] && r5 == e[0]) func_0209c5a0(r5, z);
        }
    }
}

extern "C" void func_0209c4e4(u8 *p, u32 x) {
    u32 b = *p;
    u8 flag;
    if ((u32)func_0209c8d4(data_021d72b4.e, b, x) <= 1) {
        func_0209c908(data_021d72b4.e, b, x);
        flag = 1;
    } else {
        flag = 0;
    }
    Unk_020cbb18 *g = data_020cbb18;
    g->func_020728d4();
    g->func_020728a4(&flag, 1);
    g->func_02072824(0x34, x);
}

extern "C" void func_0209c4bc(u8 *p) {
    if (*p) {
        func_0209c860(&data_021d7290, 2);
    } else {
        func_0209c860(&data_021d7290, 1);
    }
}

// code

extern "C" void func_0209c4a8(u8 *p, u32 x) {
    func_0209c8f0(data_021d72b4.e, *p, x);
}

