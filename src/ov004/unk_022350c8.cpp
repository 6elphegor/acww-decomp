#include "types.h"

struct Unk_ov004_02235528_V3 {
    s32 x, y, z;
};

extern "C" {
u32 func_020b50e8();
s32 func_020b52f8();
s32 func_020b51a4();
s32 func_ov004_02235d10();
u32 func_ov004_02208750(void *);
s32 func_ov004_02205820(void *, s32);
s32 func_ov004_022058c0(void *, s32);
s32 func_ov004_02207598(void *, void *);
s32 func_ov004_02205954(void *, s32);
s32 func_ov004_022075a4(void *, s32);
u32 func_ov004_022087a4(void *);
s32 func_ov004_0220875c(void *);
u32 func_ov004_02234af8();
u32 func_ov004_022359f0();
s32 func_02053194(s32);
s32 func_ov004_0223598c();
u32 func_ov004_02235990(u32);
s32 func_020e93a0(Unk_ov004_02235528_V3 *, s32);
s32 func_020e9650(Unk_ov004_02235528_V3 *, Unk_ov004_02235528_V3 *);
void func_020e85fc(u32, void *);
void func_020e8608(u32, s32);
void func_020e8c88(u32);
u32 func_020e8e7c(u32, u32);
void func_0204ee10(s32 *, s32 *, void *);
void func_02003cd0(void *, u32);
void func_02003cd8(void *);
void func_02003ce0(void *, u32);
void func_02003d34(void *, u32, u32);
void func_02003d74(void *, u32, u32);
void func_02003db4(void *, u32);
extern u32 data_021f482c;
}

class Unk_ov004_0223583c;
class Unk_ov004_02235708;
class Unk_ov004_022351bc;
class Unk_ov004_022358c8;

extern "C" Unk_ov004_0223583c *func_ov004_0223584c();
extern "C" Unk_ov004_022351bc *func_ov004_022354d8();
extern "C" Unk_ov004_02235708 *func_ov004_02235718();
extern "C" Unk_ov004_022358c8 *func_ov004_022358d8();

extern "C" s32 func_ov004_022350f4();

extern "C" s32 func_ov004_022350c8() {
    if (func_ov004_022350f4()) {
        return TRUE;
    }
    switch (func_020b50e8()) {
    case 0x1f:
    case 0x21:
    case 0x22:
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov004_022350f4() {
    if (func_ov004_02235d10()) {
        return FALSE;
    }
    if (func_020b52f8() || func_020b51a4()) {
        return TRUE;
    }
    return FALSE;
}

// table of 0x1c object pointers
class Unk_ov004_0223583c {
public:
    void *unk_00[0x1c];
    Unk_ov004_0223583c();
    ~Unk_ov004_0223583c();
    void *func_ov004_02235720(u32 idx);
    s32 func_ov004_02235740(void *v);
    s32 func_ov004_0223576c();
    s32 func_ov004_02235788();
    s32 func_ov004_022357b0(void *v);
    s32 func_ov004_022357e0(void *v);
    void func_ov004_02235828();
};

// slot (0x40)
class Unk_ov004_022355ac {
public:
    s32 unk_00;
    Unk_ov004_02235528_V3 unk_04;
    Unk_ov004_02235528_V3 unk_10;
    s32 unk_1c;
    Unk_ov004_02235528_V3 unk_20;
    Unk_ov004_02235528_V3 unk_2c;
    s16 unk_38;
    s32 unk_3c;
    Unk_ov004_022355ac();
    ~Unk_ov004_022355ac();
    s32 func_ov004_022354f8();
    void func_ov004_02235528(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void func_ov004_02235580();
    s32 func_ov004_02235524();
    s16 func_ov004_022354e0();
    s32 func_ov004_022354e8();
    Unk_ov004_02235528_V3 *func_ov004_022354ec();
    Unk_ov004_02235528_V3 *func_ov004_022354f0();
    s32 func_ov004_022354f4();
    Unk_ov004_02235528_V3 *func_ov004_0223551c();
    Unk_ov004_02235528_V3 *func_ov004_02235520();
};

class Unk_ov004_022351bc {
public:
    Unk_ov004_022355ac unk_00[2];
    Unk_ov004_022351bc();
    ~Unk_ov004_022351bc();
    BOOL func_ov004_02235120(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                              Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g);
    void func_ov004_02235180();
    void *func_ov004_022351e8();
    void *func_ov004_02235224();
    void *func_ov004_02235234();
    void *func_ov004_02235270();
    Unk_ov004_02235528_V3 *func_ov004_0223527c(s16 v);
    void *func_ov004_022352d0(s32 v);
    void *func_ov004_0223531c();
    void *func_ov004_0223532c();
    void *func_ov004_0223533c();
    void *func_ov004_0223534c();
    void *func_ov004_0223535c(s32 v);
    void *func_ov004_0223537c(s32 v);
    void func_ov004_0223539c();
    void *func_ov004_02235434(u32 idx);
    Unk_ov004_022355ac *func_ov004_02235464(void *v);
    Unk_ov004_022355ac *func_ov004_022354a4(u32 idx);
};

BOOL Unk_ov004_022351bc::func_ov004_02235120(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id == -1) {
        return FALSE;
    }
    {
        void *o = func_ov004_0223584c()->func_ov004_02235720(id);
        if (o != 0) {
            u32 k = func_ov004_02208750(o);
            unk_00[k & 1].func_ov004_02235528(id, a, b, c, d, e, f, g);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_022351bc::func_ov004_02235180() {
    for (u32 i = 0; i < 2; i++) {
        unk_00[i].func_ov004_02235580();
    }
}

Unk_ov004_022351bc::Unk_ov004_022351bc() {
    func_ov004_02235180();
}

Unk_ov004_022351bc::~Unk_ov004_022351bc() {
}

void *Unk_ov004_022351bc::func_ov004_022351e8() {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_02205820(o, s->func_ov004_022354e0());
    }
    return 0;
}

void *Unk_ov004_022351bc::func_ov004_02235224() {
    return func_ov004_022352d0(-0x8000);
}

void *Unk_ov004_022351bc::func_ov004_02235234() {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_022058c0(o, s->func_ov004_022354e0());
    }
    return 0;
}

void *Unk_ov004_022351bc::func_ov004_02235270() {
    return func_ov004_022352d0(0);
}

struct Unk_ov004_0223527c_Vec : Unk_ov004_02235528_V3 {
    ~Unk_ov004_0223527c_Vec() {}
};

Unk_ov004_02235528_V3 *Unk_ov004_022351bc::func_ov004_0223527c(s16 v) {
    static Unk_ov004_0223527c_Vec r;
    r.x = 0;
    r.y = 0;
    r.z = 0x2000;
    func_020e93a0(&r, v);
    return &r;
}

void *Unk_ov004_022351bc::func_ov004_022352d0(s32 v) {
    Unk_ov004_022355ac *s = func_ov004_022354a4(0);
    void *o = func_ov004_02235434(0);
    if (s != 0 && o != 0) {
        return (void *)func_ov004_02207598(o, func_ov004_0223527c((s16)(v + s->func_ov004_022354e0())));
    }
    return 0;
}

void *Unk_ov004_022351bc::func_ov004_0223531c() {
    return func_ov004_0223535c(0x4000);
}
void *Unk_ov004_022351bc::func_ov004_0223532c() {
    return func_ov004_0223537c(0x4000);
}
void *Unk_ov004_022351bc::func_ov004_0223533c() {
    return func_ov004_0223535c(-0x4000);
}
void *Unk_ov004_022351bc::func_ov004_0223534c() {
    return func_ov004_0223537c(-0x4000);
}

void *Unk_ov004_022351bc::func_ov004_0223535c(s32 v) {
    void *o = func_ov004_02235434(0);
    if (o != 0) {
        return (void *)func_ov004_02205954(o, v);
    }
    return 0;
}

void *Unk_ov004_022351bc::func_ov004_0223537c(s32 v) {
    void *o = func_ov004_02235434(0);
    if (o != 0) {
        return (void *)func_ov004_022075a4(o, v);
    }
    return 0;
}

void Unk_ov004_022351bc::func_ov004_0223539c() {
    void *o1 = func_ov004_02235434(1);
    Unk_ov004_022355ac *s1 = func_ov004_022354a4(1);
    if (o1 != 0 && s1 != 0) {
        BOOL k1 = TRUE;
        if (func_02053194(func_ov004_022087a4(o1))) {
            if (s1->func_ov004_022354e8()) {
                k1 = FALSE;
            }
        }
        if (k1) {
            if (func_ov004_0220875c(o1) != 0) {
                return;
            }
        }
    }
    void *o2 = func_ov004_02235434(0);
    Unk_ov004_022355ac *s2 = func_ov004_022354a4(0);
    if (o2 != 0 && s2 != 0) {
        BOOL k2 = TRUE;
        if (func_02053194(func_ov004_022087a4(o2))) {
            if (s2->func_ov004_022354e8()) {
                k2 = FALSE;
            }
        }
        if (k2) {
            if (func_ov004_0220875c(o2) != 0) {
                return;
            }
        }
    }
}

void *Unk_ov004_022351bc::func_ov004_02235434(u32 idx) {
    Unk_ov004_022355ac *s = func_ov004_022354a4(idx);
    if (s != 0) {
        Unk_ov004_0223583c *t = func_ov004_0223584c();
        return t->func_ov004_02235720(s->func_ov004_02235524());
    }
    return 0;
}

Unk_ov004_022355ac *Unk_ov004_022351bc::func_ov004_02235464(void *v) {
    s32 idx = func_ov004_0223584c()->func_ov004_02235740(v);
    if (idx != -1) {
        for (u32 i = 0; i < 2; i++) {
            Unk_ov004_022355ac *s = &unk_00[i];
            if (idx == s->func_ov004_02235524()) {
                return s;
            }
        }
    }
    return 0;
}

Unk_ov004_022355ac *Unk_ov004_022351bc::func_ov004_022354a4(u32 idx) {
    if (func_ov004_022350f4()) {
        Unk_ov004_022355ac *s = &unk_00[idx & 1];
        if (s->func_ov004_02235524() != -1) {
            return s;
        }
    }
    return 0;
}

extern Unk_ov004_022351bc data_ov004_02252144;
extern "C" Unk_ov004_022351bc *func_ov004_022354d8() {
    return &data_ov004_02252144;
}

s32 Unk_ov004_022355ac::func_ov004_022354e8() {
    return unk_3c;
}
s16 Unk_ov004_022355ac::func_ov004_022354e0() {
    return unk_38;
}
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_022354ec() {
    return &unk_2c;
}
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_022354f0() {
    return &unk_20;
}
s32 Unk_ov004_022355ac::func_ov004_022354f4() {
    return unk_1c;
}

s32 Unk_ov004_022355ac::func_ov004_022354f8() {
    Unk_ov004_02235528_V3 *a = func_ov004_0223551c();
    Unk_ov004_02235528_V3 *b = func_ov004_02235520();
    return func_020e9650(a, b);
}

Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_0223551c() {
    return &unk_10;
}
Unk_ov004_02235528_V3 *Unk_ov004_022355ac::func_ov004_02235520() {
    return &unk_04;
}
s32 Unk_ov004_022355ac::func_ov004_02235524() {
    return unk_00;
}

void Unk_ov004_022355ac::func_ov004_02235528(s32 id, Unk_ov004_02235528_V3 *a, Unk_ov004_02235528_V3 *b, s32 c,
                                             Unk_ov004_02235528_V3 *d, Unk_ov004_02235528_V3 *e, s16 f, s32 g) {
    if (id != -1) {
        unk_00 = id;
        unk_04.x = a->x;
        unk_04.y = a->y;
        unk_04.z = a->z;
        unk_10.x = b->x;
        unk_10.y = b->y;
        unk_10.z = b->z;
        unk_1c = c;
        unk_20.x = d->x;
        unk_20.y = d->y;
        unk_20.z = d->z;
        unk_2c.x = e->x;
        unk_2c.y = e->y;
        unk_2c.z = e->z;
        unk_38 = f;
        unk_3c = g;
    }
}

void Unk_ov004_022355ac::func_ov004_02235580() {
    unk_00 = -1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
    unk_10.x = 0;
    unk_10.y = 0;
    unk_10.z = 0;
    unk_1c = 0;
    unk_20.x = 0;
    unk_20.y = 0;
    unk_20.z = 0;
    unk_2c.x = 0;
    unk_2c.y = 0;
    unk_2c.z = 0;
    unk_38 = 0;
    unk_3c = 4;
}

Unk_ov004_022355ac::~Unk_ov004_022355ac() {
}

Unk_ov004_022355ac::Unk_ov004_022355ac() {
}

// 16x16 x 2 cell grid
class Unk_ov004_02235708 {
public:
    u8 unk_00[2][16][16];
    Unk_ov004_02235708();
    ~Unk_ov004_02235708();
    void *func_ov004_022355b0(void *p, s32 layer);
    void *func_ov004_022355d8(s32 x, s32 y, s32 layer);
    s32 func_ov004_02235624(s32 x, s32 y, s32 layer);
    BOOL func_ov004_02235648(s32 id, s32 x, s32 y, u8 layer);
    BOOL func_ov004_0223568c(s32 id, s32 x, s32 y, u8 layer);
    void func_ov004_022356cc();
};

void *Unk_ov004_02235708::func_ov004_022355b0(void *p, s32 layer) {
    s32 x, y;
    func_0204ee10(&x, &y, p);
    return func_ov004_022355d8(x, y, layer);
}

void *Unk_ov004_02235708::func_ov004_022355d8(s32 x, s32 y, s32 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    u32 c = *p;
    if (c != 0xff && c < func_ov004_02234af8()) {
        if (func_ov004_0223584c()->func_ov004_02235720(c) != 0) {
            return func_ov004_0223584c()->func_ov004_02235720(*p);
        }
    }
    return 0;
}

s32 Unk_ov004_02235708::func_ov004_02235624(s32 x, s32 y, s32 layer) {
    u32 c = unk_00[layer & 1][y & 15][x & 15];
    if (c == 0xff) {
        return -1;
    }
    return c;
}

BOOL Unk_ov004_02235708::func_ov004_02235648(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    if (func_ov004_0223584c()->func_ov004_02235740((void *)id) != -1) {
        *p = 0xff;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_02235708::func_ov004_0223568c(s32 id, s32 x, s32 y, u8 layer) {
    u8 *p = &unk_00[layer & 1][y & 15][x & 15];
    s32 i = func_ov004_0223584c()->func_ov004_02235740((void *)id);
    if (i != -1) {
        *p = i;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_02235708::func_ov004_022356cc() {
    for (u32 l = 0; l < 2; l++) {
        for (u32 y = 0; y < 16; y++) {
            for (u32 x = 0; x < 16; x++) {
                unk_00[l][y][x] = 0xff;
            }
        }
    }
}

Unk_ov004_02235708::~Unk_ov004_02235708() {
}

Unk_ov004_02235708::Unk_ov004_02235708() {
    func_ov004_022356cc();
}

extern Unk_ov004_02235708 data_ov004_022521c4;
extern "C" Unk_ov004_02235708 *func_ov004_02235718() {
    return &data_ov004_022521c4;
}

void *Unk_ov004_0223583c::func_ov004_02235720(u32 idx) {
    if (idx < func_ov004_02234af8()) {
        return unk_00[idx];
    }
    return 0;
}

s32 Unk_ov004_0223583c::func_ov004_02235740(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            return i;
        }
    }
    return -1;
}

s32 Unk_ov004_0223583c::func_ov004_0223576c() {
    u32 n = func_ov004_02234af8();
    return n - func_ov004_02235788();
}

s32 Unk_ov004_0223583c::func_ov004_02235788() {
    u32 n = 0;
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] != 0) {
            n++;
        }
    }
    return n;
}

s32 Unk_ov004_0223583c::func_ov004_022357b0(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            unk_00[i] = 0;
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_ov004_0223583c::func_ov004_022357e0(void *v) {
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == v) {
            return TRUE;
        }
    }
    for (u32 i = 0; i < func_ov004_02234af8(); i++) {
        if (unk_00[i] == 0) {
            unk_00[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0223583c::func_ov004_02235828() {
    for (u32 i = 0; i < 0x1c; i++) {
        unk_00[i] = 0;
    }
}

Unk_ov004_0223583c::~Unk_ov004_0223583c() {
}

Unk_ov004_0223583c::Unk_ov004_0223583c() {
    func_ov004_02235828();
}

extern Unk_ov004_0223583c data_ov004_022520d4;
extern "C" Unk_ov004_0223583c *func_ov004_0223584c() {
    return &data_ov004_022520d4;
}

// heap wrapper
class Unk_ov004_022358c8 {
public:
    u32 unk_00;
    Unk_ov004_022358c8();
    ~Unk_ov004_022358c8();
    void func_ov004_02235854(void *p);
    void func_ov004_02235860();
    void func_ov004_02235870();
    BOOL func_ov004_0223588c(s32 n);
    void func_ov004_022358bc();
};

void Unk_ov004_022358c8::func_ov004_02235854(void *p) {
    func_020e85fc(unk_00, p);
}

void Unk_ov004_022358c8::func_ov004_02235860() {
    func_020e8608(unk_00, 0x8d6);
}

void Unk_ov004_022358c8::func_ov004_02235870() {
    if (unk_00 != 0) {
        func_020e8c88(unk_00);
    }
    func_ov004_022358bc();
}

BOOL Unk_ov004_022358c8::func_ov004_0223588c(s32 n) {
    if (unk_00 == 0) {
        unk_00 = func_020e8e7c(n * 0x93a, data_021f482c);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_022358c8::func_ov004_022358bc() {
    unk_00 = 0;
}

Unk_ov004_022358c8::~Unk_ov004_022358c8() {
}

Unk_ov004_022358c8::Unk_ov004_022358c8() {
    func_ov004_022358bc();
}

extern Unk_ov004_022358c8 data_ov004_02251f84;
extern "C" Unk_ov004_022358c8 *func_ov004_022358d8() {
    return &data_ov004_02251f84;
}

// sound handle wrapper
class Unk_ov004_02235cc0 {
public:
    u8 unk_00[0x1c];
    u8 unk_1c;
    void func_ov004_022358e0(u32 a);
    void func_ov004_022358f4(u32 a);
    void func_ov004_02235908(u32 a, u32 b);
    void func_ov004_0223591c(u32 a, u32 b);
    void func_ov004_02235930();
    void func_ov004_02235948();
};

void Unk_ov004_02235cc0::func_ov004_022358e0(u32 a) {
    if (unk_1c) {
        func_02003cd0(this, a);
    }
}
void Unk_ov004_02235cc0::func_ov004_022358f4(u32 a) {
    if (unk_1c) {
        func_02003ce0(this, a);
    }
}
void Unk_ov004_02235cc0::func_ov004_02235908(u32 a, u32 b) {
    if (unk_1c) {
        func_02003d34(this, a, b);
    }
}
void Unk_ov004_02235cc0::func_ov004_0223591c(u32 a, u32 b) {
    if (unk_1c) {
        func_02003d74(this, a, b);
    }
}
void Unk_ov004_02235cc0::func_ov004_02235930() {
    if (unk_1c) {
        func_02003cd8(this);
        unk_1c = 0;
    }
}
void Unk_ov004_02235cc0::func_ov004_02235948() {
    if (!unk_1c) {
        u32 h = func_ov004_022359f0();
        if (h != 0) {
            if (func_ov004_0223598c()) {
                func_02003db4(this, func_ov004_02235990(h));
                unk_1c = 1;
            }
        }
    }
}

extern "C" void func_ov004_02235980() {
}
