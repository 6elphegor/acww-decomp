#include "types.h"

extern "C" {
void* __cxa_vec_ctor(void* array, u32 count, u32 size, void* (*ctor)(void*), void* (*dtor)(void*, s32));
void* __cxa_vec_cleanup(void* array, u32 count, u32 size, void* (*dtor)(void*, s32));
}

struct Unk_02031b90_Vec {
    s32 x, y, z;
};

// ---------------------------------------------------------------- Unk_020d8cf4
struct Unk_0202f048 {
    s32 unk_00;
    s32 unk_04;
    Unk_0202f048(s32 a, s32 b);
};

struct Unk_0202ea3c : Unk_0202f048 {
    Unk_0202ea3c() : Unk_0202f048(0, 0) {}
    ~Unk_0202ea3c() {}
};

struct Unk_02000c8c {
    s32 unk_00, unk_04, unk_08;
    Unk_02000c8c() {}
    ~Unk_02000c8c() {}
};

extern "C" void func_02031960(void* self, Unk_02031b90_Vec* a, s32 b, Unk_02031b90_Vec* c);
extern "C" void func_0202f048(void* p, s32 a, s32 b);

struct Unk_020d8cf4 {
    virtual void vfunc_00();
    s32 unk_04, unk_08, unk_0c;
    s32 unk_10, unk_14, unk_18;
    s32 unk_1c, unk_20, unk_24;
    s16 unk_28;
    s16 unk_2a;
    s32 unk_2c;
    Unk_02000c8c unk_30[4];
    Unk_0202ea3c unk_60[4];
    u8 unk_80[0x18];
    u8 unk_98;

    Unk_020d8cf4();
    ~Unk_020d8cf4();
    void func_02031b90(s32 a, s32 b, s32 c, Unk_02031b90_Vec* p, s16 s, Unk_02031b90_Vec* q);
    void func_02031d04();
};

void Unk_020d8cf4::vfunc_00() {}

Unk_020d8cf4::Unk_020d8cf4() {
    func_02031d04();
}

Unk_020d8cf4::~Unk_020d8cf4() {}

void Unk_020d8cf4::func_02031b90(s32 a, s32 b, s32 c, Unk_02031b90_Vec* p, s16 s, Unk_02031b90_Vec* q) {
    unk_10 = a;
    unk_14 = b;
    unk_18 = c;
    func_02031960(this, p, s, q);
    unk_04 = p->x;
    unk_08 = p->y;
    unk_0c = p->z;
    unk_1c = q->x;
    unk_20 = q->y;
    unk_24 = q->z;
    unk_28 = s;
    unk_98 = 1;
}

void Unk_020d8cf4::func_02031d04() {
    Unk_02000c8c* a;
    Unk_0202ea3c* b;
    s32 i;
    unk_2a = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0x1000;
    unk_20 = 0x1000;
    unk_24 = 0x1000;
    unk_28 = 0;
    unk_2c = 0;
    unk_98 = 0;
    a = unk_30;
    b = unk_60;
    for (i = 0; i < 4; i++) {
        a->unk_00 = 0;
        a->unk_04 = 0;
        a->unk_08 = 0;
        func_0202f048(b, 0, 0);
        a++;
        b++;
    }
}

extern "C" {
extern s32 data_021bf9b4;
void func_02031b78() { data_021bf9b4 = 0; }
void func_02031b84() {}
void func_02031b88() {}
}

// ---------------------------------------------------------------- Unk_020d8ccc / Unk_020d8d74 (list node)
struct Unk_020d8ccc {
    virtual s32 vfunc_00(s32 a, s32 b, s32 c, s32 d);
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 a, s32 c, s32 b);
    s32 unk_04[9];
    s32 unk_28, unk_2c, unk_30, unk_34;
    Unk_020d8ccc();
    Unk_020d8ccc(void* a, void* b, void* c, void* d);
    ~Unk_020d8ccc();
};

struct Unk_02031e10_Vec {
    s32 x, y, z;
};

extern "C" {
s64 func_01ffd028(void* v, void* p);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02031574(Unk_02031e10_Vec* v, Unk_02031e10_Vec* w);
void func_02031554(Unk_02031e10_Vec* v, Unk_02031e10_Vec* w);
void func_0202f3a8(void* out, Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c);
void func_0202f364(void* self, Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, void* d);
}

struct Unk_020d8d74 : Unk_020d8ccc {
    Unk_020d8d74* unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;

    Unk_020d8d74();
    void func_02031e10(Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, s32 d);
    s32* func_02031ea0();
    void func_02031ea4();
};

extern "C" Unk_020d8d74* data_021bf9b0;

extern "C" void func_02031d5c(s32* a, s32 b, s32 c) {
    Unk_020d8d74* p;
    p = data_021bf9b0;
    if (p != NULL) {
        for (; p != NULL; p = p->unk_38) {
            if ((s64)p->unk_48 >= func_01ffd028(&p->unk_3c, a)) {
                p->vfunc_10((s32)a, c, b);
            }
        }
    }
}

void Unk_020d8d74::func_02031e10(Unk_02031e10_Vec* a, Unk_02031e10_Vec* b, Unk_02031e10_Vec* c, s32 d) {
    Unk_02031e10_Vec v0, v1;
    u32 out[3];
    unk_48 = func_01ffcb0c(d, d);
    v0.x = a->x;
    v0.y = a->y;
    v0.z = a->z;
    v1.x = a->x;
    v1.y = a->y;
    v1.z = a->z;
    func_02031574(&v0, b);
    func_02031554(&v1, b);
    func_02031574(&v0, c);
    func_02031554(&v1, c);
    s32 z = (v1.z + v0.z) >> 1;
    s32 y = (v1.y + v0.y) >> 1;
    s32 x = (v1.x + v0.x) >> 1;
    unk_3c = x;
    unk_40 = y;
    unk_44 = z;
    func_0202f3a8(out, a, b, c);
    func_0202f364(this, a, b, c, out);
}

s32* Unk_020d8d74::func_02031ea0() {
    return &unk_3c;
}

void Unk_020d8d74::func_02031ea4() {
    unk_38 = 0;
    unk_48 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
}

Unk_020d8d74::Unk_020d8d74() {
    func_02031ea4();
}

extern "C" s32 func_02031da4(Unk_020d8d74* node) {
    Unk_020d8d74* p;
    Unk_020d8d74* prev;
    for (p = data_021bf9b0, prev = NULL; p != NULL; prev = p, p = p->unk_38) {
        if (p == node) {
            if (prev != NULL) {
                prev->unk_38 = p->unk_38;
            } else {
                data_021bf9b0 = p->unk_38;
            }
            node->func_02031ea4();
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 func_02031de0(Unk_020d8d74* node) {
    if (node->unk_38 == NULL) {
        node->unk_38 = data_021bf9b0;
        data_021bf9b0 = node;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02031dfc() {
    data_021bf9b0 = NULL;
}

extern "C" {
void func_02031e08() {}
void func_02031e0c() {}
}

// ---------------------------------------------------------------- Unk_020d8d14 (triangle collision, three block layouts)
struct Unk_02031ed4_Vec {
    s32 x, y, z;
};

struct Unk_02031ed4_Tmp : Unk_02031ed4_Vec {
    Unk_02031ed4_Tmp() {}
};

struct Unk_02031ed4_Aux {
    u8 unk_00;
    s32 unk_04;
};

struct Unk_02031ed4_Ent {
    Unk_02031ed4_Vec unk_00;
    u8 unk_0c[8];
    Unk_02031ed4_Aux unk_14;
    u8 unk_1c[8];
};

extern "C" {
extern Unk_02031ed4_Vec data_021bfa4c;
s32 func_0202fc20(void* ent, Unk_02031ed4_Vec* a, void* b);
s32 func_0202fa70(void* ent, Unk_02031ed4_Vec* a, void* b);
void func_020339cc(void* dst, void* src);
s32 func_020e94f8(void* v);
s32 func_0202f274(void* a, void* b);
s32 func_0202f11c(void* a, void* out, void* b, void* c);
}

static inline BOOL Unk_02031f90_Ge0(s32 v) {
    if (v >= 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_020d8d00 {
    virtual void vfunc_00(u8* p);
    virtual void vfunc_04(u8* p);
    virtual void vfunc_08(u8* p);
};

struct Unk_02032028_V {
    s32 x, y, z;
    Unk_02032028_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_020d8d14 : Unk_020d8d00 {
    Unk_02031ed4_Vec* volatile unk_04;
    Unk_02031ed4_Vec unk_08;
    u8 unk_14[4];
    u8 unk_18;
    u8 unk_19[3];
    Unk_02031ed4_Aux unk_1c;
    Unk_02031ed4_Vec unk_24;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;

    virtual void vfunc_00(u8* p);
    virtual void vfunc_04(u8* p);
    virtual void vfunc_08(u8* p);
};

void Unk_020d8d14::vfunc_08(u8* p) {
    u8* r6;
    u8* e;
    volatile Unk_02031ed4_Vec t;
    Unk_02031ed4_Vec* q0;
    Unk_02031ed4_Vec* g;
    unk_3c = *(s32*)p;
    r6 = p + 4;
    e = r6;
    g = &data_021bfa4c;
    for (; e < r6 + unk_3c * 0x24; e += 0x24) {
        Unk_02031ed4_Ent* ent = (Unk_02031ed4_Ent*)e;
        q0 = unk_04;
        t.x = q0->x;
        t.y = q0->y;
        t.z = q0->z;
        if (func_0202fc20(e, unk_04, &unk_08)) {
            func_020339cc(&unk_1c, &ent->unk_14);
            unk_24.x = g->x;
            unk_24.y = g->y;
            unk_24.z = g->z;
            unk_30 = ent->unk_14.unk_00;
            unk_18 = 1;
        }
        q0 = unk_04;
        t.x = q0->x;
        t.y = q0->y;
        t.z = q0->z;
        if (func_0202fa70(e, unk_04, &unk_08)) {
            func_020339cc(&unk_1c, &ent->unk_14);
            Unk_02031ed4_Vec* q = unk_04;
            s32 z = q->z - ent->unk_00.z;
            s32 x = q->x - ent->unk_00.x;
            unk_24.x = x;
            unk_24.y = 0;
            unk_24.z = z;
            func_020e94f8(&unk_24);
            unk_30 = ent->unk_14.unk_00;
            unk_18 = 1;
        }
    }
}

struct Unk_02031f90_Ent {
    u8 unk_00[0x28];
    Unk_02031ed4_Vec unk_28;
    u8 unk_34[4];
    Unk_02031ed4_Aux unk_38;
};

void Unk_020d8d14::vfunc_04(u8* p) {
    Unk_02031ed4_Vec out;
    u8* e;
    u8* end;
    BOOL one = TRUE;
    unk_38 = *(s32*)(p + 0xa00);
    for (e = p; e < p + unk_38 * 0x40; e += 0x40) {
        Unk_02031f90_Ent* ent = (Unk_02031f90_Ent*)e;
        if (func_0202f274(e, &unk_08) >= 0) {
            if (Unk_02031f90_Ge0(func_0202f274(e, unk_04))) {
                continue;
            }
            if (func_0202f11c(e, &out, &unk_08, unk_04)) {
                Unk_02031ed4_Vec* d = unk_04;
                d->x = out.x;
                d->y = out.y;
                d->z = out.z;
                func_020339cc(&unk_1c, &ent->unk_38);
                Unk_02031ed4_Vec* n = &ent->unk_28;
                unk_24 = *n;
                unk_30 = ent->unk_38.unk_00;
                unk_18 = one;
            }
        }
    }
}

struct Unk_02032028_Ent {
    u8 unk_00[4];
    s32 unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18;
    u8 unk_1c[4];
    Unk_02031ed4_Aux unk_20;
    u8 unk_28[4];
    s32 unk_2c;
};

struct Unk_02032028_L4 {
    Unk_02032028_V v4;
    s32 pad[3];
    Unk_02032028_L4(s32 a, s32 b, s32 c) : v4(a, b, c) {}
};

void Unk_020d8d14::vfunc_00(u8* p) {
    Unk_02031ed4_Vec out;
    Unk_02032028_Ent* e;
    unk_34 = *(s32*)(p + 0x480);
    for (e = (Unk_02032028_Ent*)p; (u8*)e < p + unk_34 * 0x30; e++) {
        Unk_02032028_V v0(e->unk_14, 0, e->unk_18);
        Unk_02032028_V v1(e->unk_04, e->unk_2c, e->unk_08);
        Unk_02032028_V v2(e->unk_04, -0x8000, e->unk_08);
        Unk_02032028_V v3(e->unk_0c, -0x8000, e->unk_10);
        Unk_02032028_L4 l4(e->unk_0c, e->unk_2c, e->unk_10);
        Unk_020d8ccc a(&v1, &v2, &v3, &v0);
        Unk_020d8ccc b(&v1, &v3, &l4.v4, &v0);
        Unk_020d8ccc* r;
        for (r = &a; r < &b + 1; r++) {
            if (func_0202f274(r, &unk_08) >= 0) {
                if (Unk_02031f90_Ge0(func_0202f274(r, unk_04))) {
                    continue;
                }
                if (func_0202f11c(r, &out, &unk_08, unk_04)) {
                    s32 z = out.z;
                    Unk_02031ed4_Vec* d = unk_04;
                    s32 y = d->y;
                    s32 x = out.x;
                    d->x = x;
                    d->y = y;
                    d->z = z;
                    func_020339cc(&unk_1c, &e->unk_20);
                    Unk_02031ed4_Vec* n = (Unk_02031ed4_Vec*)((u8*)r + 0x28);
                    unk_24 = *n;
                    unk_30 = e->unk_20.unk_00;
                    unk_18 = 1;
                }
            }
        }
    }
}

// ---------------------------------------------------------------- Unk_02032238 (accumulated collision flags) and friends
struct Unk_020323f8 {
    s16 unk_00[2];
    u8 unk_04;
    u8 unk_05[3];
    s32 unk_08[2];
    s32 unk_10[2];

    Unk_020323f8();
    ~Unk_020323f8();
    BOOL func_020323f8(s32 a, s32 b, s32 c);
    void func_0203245c();
};

Unk_020323f8::~Unk_020323f8() {}

BOOL Unk_020323f8::func_020323f8(s32 a, s32 b, s32 c) {
    s16* p = unk_00;
    s32* q = unk_10;
    s32 i = 0;
    u8 n = unk_04;
    volatile s32 z = 0;
    for (; i < n; p++, q++, i++) {
        s32 t = *(s16*)((u8*)p + z);
        if (t == a && *q == b) {
            return FALSE;
        }
    }
    if (n < 2) {
        unk_00[n] = a;
        unk_10[unk_04] = b;
        unk_08[unk_04] = c;
        unk_04++;
        return TRUE;
    }
    return FALSE;
}

void Unk_020323f8::func_0203245c() {
    s32* a = unk_08;
    s32* b = unk_10;
    s16* p = unk_00;
    s32 i;
    unk_04 = 0;
    for (i = 0; i < 2; i++) {
        *p = 0;
        *a++ = 0;
        *b++ = 0;
        p++;
    }
}

Unk_020323f8::Unk_020323f8() {
    func_0203245c();
}

struct Unk_02032238 {
    u32 unk_00;
    volatile u32 unk_04;
    s32 unk_08;
    Unk_020323f8 unk_0c;
    s32 unk_24, unk_28, unk_2c;

    Unk_02032238();
    ~Unk_02032238();
    void func_020323c8();
    void func_020323d8();
    void func_02032238(s32 v);
};

Unk_02032238::~Unk_02032238() {}

void Unk_02032238::func_02032238(s32 v) {
    s32 i = 0;
    s32 base = v + 0x8000;
    for (; i < unk_0c.unk_04; i++) {
        u32 d = (u16)(unk_0c.unk_00[i] - base);
        if (d < 0x2000 || d >= 0xe000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x100;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 8;
            }
        } else if (d < 0x6000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x400;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x20;
            }
        } else if (d < 0xa000) {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x800;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x40;
            }
        } else {
            if (unk_0c.unk_10[i] == 2) {
                unk_04 = unk_04 | 0x80;
                unk_04 = unk_04 | 0x200;
            } else {
                unk_04 = unk_04 | 4;
                unk_04 = unk_04 | 0x10;
            }
        }
    }
    if (unk_0c.unk_04 == 2) {
        s32 mid = ((unk_0c.unk_00[0] + unk_0c.unk_00[1]) << 15) >> 16;
        s32 diff = v - (s16)(mid + 0x7fff);
        if (diff < 0) {
            diff = -diff;
        }
        if (diff < 0x2000) {
            unk_04 = unk_04 | 0x1000;
        }
        if ((s16)(unk_0c.unk_00[0] + unk_0c.unk_00[1]) == 0) {
            unk_04 = unk_04 | 0x2000;
        }
    }
}

Unk_02032238::Unk_02032238() {
    func_020323c8();
}

void Unk_02032238::func_020323c8() {
    unk_04 = 0;
    unk_00 = 0;
    unk_08 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

void Unk_02032238::func_020323d8() {
    unk_0c.func_0203245c();
    unk_08 = 0;
    unk_00 = unk_04;
    unk_04 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

// ---------------------------------------------------------------- Unk_020d8d28 (collision accumulator driver)
struct Unk_020d8d28_Best {
    s32 unk_00;
    s32 unk_04;
};

extern "C" {
s32 func_0203139c();
s32 func_02032604(u8* p, s32 a, void* b, s32* out, s32 c, s32 d);
void func_02032658(u8* p, s32 a, s32 b, void* c, s32 d, s32 e);
void func_02032dc4(u8* p, s32 a, void* b, s32 c, void* d, s32 e);
s32 func_0202f2d8(void* p, void* v);
void* func_020339e0(void* p);
void* func_020339f0(void* p);
}

struct Unk_020d8d28_Dead {
    s32 x, y, z;
    Unk_020d8d28_Dead() {}
    ~Unk_020d8d28_Dead() {}
};

struct Unk_020d8d28 : Unk_020d8d00 {
    Unk_02032238* unk_04;
    Unk_020d8d28_Best* unk_08;
    u8 unk_0c[0x10];
    s32 unk_1c;
    s32 unk_20;
    u32 unk_24;

    virtual void vfunc_00(u8* p);
    virtual void vfunc_04(u8* p);
    virtual void vfunc_08(u8* p);
};

void Unk_020d8d28::vfunc_00(u8* p) {
    func_02032dc4(p, (s32)unk_08, &unk_0c, unk_1c, unk_04, unk_20);
}

void Unk_020d8d28::vfunc_04(u8* p) {
    u8* e;
    Unk_020d8d28_Dead dead;
    u8* end = p + *(s32*)(p + 0xa00) * 0x40;
    for (e = p; e < end; e += 0x40) {
        if (unk_08->unk_04 < *(s32*)(e + 8)) {
            if (func_0202f2d8(e, unk_08)) {
                unk_08->unk_04 = *(s32*)(e + 8);
                unk_04->unk_04 |= 1;
                unk_04->unk_08 = *(u8*)(e + 0x38);
            }
        }
    }
}

void Unk_020d8d28::vfunc_08(u8* p) {
    s32 out;
    if (unk_24 & 1) {
        s32 t = func_0203139c();
        if (func_02032604(p, (s32)unk_08, &unk_0c, &out, unk_20, t)) {
            unk_04->unk_04 |= 1;
            unk_04->unk_08 = out;
        }
    }
    if (unk_24 & 6) {
        s32 t = func_0203139c();
        func_02032658(p, (s32)unk_08, unk_1c, unk_04, unk_20, t);
    }
}

extern "C" void* func_02032218(void* p) {
    func_020339e0(p);
    return p;
}

extern "C" void* func_02032228(void* p) {
    func_020339f0(p);
    return p;
}

