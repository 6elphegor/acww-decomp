#include "types.h"

struct Unk_02093aa8_Vec {
    s32 x, y, z;
};

// Effect entry (0x1c bytes), array data_021d04b0[32], scratch entry at data_021d0830
struct Unk_02093c28_Entry {
    /* 0x00 */ s32 x, y, z;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02093bb4_Scratch {
    Unk_02093c28_Entry e;
    /* 0x1c */ u16 unk_1c;
};

struct Unk_02093c28_Handle {
    u8 b[4];
};

struct Unk_02093dc8_Root {
    s32 unk_00;
    s32 unk_04, unk_08, unk_0c;
};

struct Unk_02093dc8_Ptr {
    Unk_02093dc8_Root *unk_00;
};

// Particle object
struct Unk_02093c28_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_02093c28_Handle unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ struct Unk_02093dc8_Obj *unk_0c;
};

struct Unk_02093dc8_Obj {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ Unk_02093dc8_Ptr *unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ s32 unk_20, unk_24, unk_28;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ s16 unk_3c;
    /* 0x3e */ s16 unk_3e;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ u8 pad_42[0x12];
    /* 0x54 */ s32 unk_54;
};

struct Unk_02093aa8_Node {
    /* 0x00 */ Unk_02093aa8_Node *next;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 x, y, z;
    /* 0x14 */ u8 pad_14[0x10];
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 pad_28[0x10];
    /* 0x38 */ s32 ox, oy, oz;
};

struct Unk_02093aa8_Owner {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02093aa8_Node *unk_08;
};

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_02093aa8_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern Unk_02093c28_Entry data_021d04b0[];
extern Unk_02093bb4_Scratch data_021d0830;
extern Unk_02093aa8_Vec data_021f4880;
extern u32 data_020e17bc[];
extern u32 data_020e16f4[];
extern s16 data_02135f44[];

s32 func_0208fb20(void *, s32, s32, void *);
s32 func_0208fc88(void *, s32, s32, void *);
s32 func_0208fe0c(void *);
s32 func_02090424(void *, s32, s32);
s32 func_020904f0(void *, s32, s32, s32, s32, s32, s32);
s32 func_02090538(void *);
void func_020e93a0(void *, s32);
s32 func_020e94f8(void *);
void func_01ffca8c(void *, void *, void *);
s32 func_02116048(const void *src, void *dst, u32 n);
s32 func_02115fb4(void *dst, u32 v, u32 n);
s32 func_02128930(const void *, const void *, u32);

s32 func_02093c28(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
s32 func_02093c94(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
s32 func_02093d54(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
void func_02093dc8(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
s32 func_02093e88(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
s32 func_02093efc(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
s32 func_02093f50(Unk_02093dc8_Obj *o);

s32 func_02093aa8(Unk_02093aa8_Owner *o, s32 p1, s32 p2, s32 p3, s32 s0, s32 p5, s32 s2, s32 p6, s32 s4)
{
    Unk_02093aa8_Node *n;
    Unk_02093aa8_Vec pos;
    BOOL result;
    n = o->unk_08;
    pos = data_021f4880;
    result = FALSE;
    if (n != NULL) {
        result = TRUE;
        while (n != NULL) {
            Unk_0203398c g;
            pos.x = n->x + n->ox;
            pos.y = n->y + n->oy;
            pos.z = n->z + n->oz;
            g.func_020339bc(&pos, 0, 0);
            if (g.unk_30 != 0) {
                if (pos.y <= g.unk_3c) {
                    pos.y = g.unk_3c;
                    if (p1 != -1) func_02093d54(p1, 100, &pos, 0, 0, (void *)p2);
                    if (p3 != -1) func_02093d54(p3, 100, &pos, 0, 0, (void *)s0);
                    n->unk_26 = n->unk_24;
                }
            } else if (pos.y <= 0) {
                if (p5 != -1) {
                    pos.y = 0;
                    func_02093d54(p5, 100, &pos, 0, 0, (void *)s2);
                }
                if (p6 != -1) {
                    pos.y = 0;
                    func_02093d54(p6, 100, &pos, 0, 0, (void *)s4);
                }
                n->unk_26 = n->unk_24;
            }
            n = n->next;
        }
    }
    return result;
}

s32 func_02093bb4(void *p0, s32 p1, s32 p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = data_020e17bc;
    r = 3;
    Unk_02093bb4_Scratch *const g = &data_021d0830;
    func_020904f0(g, g->unk_1c, p1, p2, p3, e, -1);
    if (func_0208fb20(p0, p2, p3, t)) r = 0;
    func_02090538(g);
    return r;
}

s32 func_02093c10(Unk_02093c28_Obj *o)
{
    return func_02093c28(o, NULL, NULL);
}

s32 func_02093c1c(Unk_02093c28_Obj *o)
{
    return func_02093c94(o, NULL, NULL);
}

s32 func_02093c28(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093c28_Handle h = o->unk_04;
    BOOL r;
    Unk_02093c28_Entry *e = &data_021d04b0[h.b[0]];
    r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        func_02093dc8(o->unk_0c, e, a, b);
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) func_02090538(e);
    return r;
}

s32 func_02093c94(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093bb4_Scratch *const g = &data_021d0830;
    Unk_02093c28_Handle h = o->unk_04;
    func_02093dc8(o->unk_0c, &g->e, a, b);
    func_0208fe0c(o->unk_0c);
    func_02116048(g, &data_021d04b0[h.b[0]], 0x1c);
}

s32 func_02093ce8(Unk_02093c28_Obj *o)
{
    Unk_02093c28_Handle h = o->unk_04;
    Unk_02093c28_Entry *e = &data_021d04b0[h.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1 && e->unk_0e != 0) {
        if (e->unk_0e > 0) e->unk_0e--;
        r = TRUE;
    }
    if (r == 0) func_02090538(e);
    return r;
}

s32 func_02093d40(s32 x)
{
    return func_02090424(data_021d04b0, x, 0);
}

s32 func_02093d54(s32 p0, s32 p1, void *p2, s32 p3, s32 e, void *f)
{
    void *t = f;
    s32 r;
    if (t == NULL) t = data_020e16f4;
    r = 3;
    func_020904f0(&data_021d0830, -1, p1, (s32)p2, p3, e, -1);
    if (func_0208fc88((void *)p0, (s32)p2, p3, t)) r = 1;
    return r;
}

s32 func_02093da4(Unk_02093dc8_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    func_02093dc8(o, &data_021d0830.e, a, b);
    func_0208fe0c(o);
}

void func_02093dc8(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b)
{
    Unk_02093aa8_Vec pos;
    Unk_02093aa8_Vec v1;
    Unk_02093aa8_Vec v2;
    pos.x = e->x;
    pos.y = e->y;
    pos.z = e->z;
    if (a != NULL) {
        v1.x = a->x;
        v1.y = a->y;
        v1.z = a->z;
        func_020e93a0(&v1, e->unk_0c);
        func_01ffca8c(&pos, &v1, &pos);
    }
    o->unk_20 = pos.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = pos.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = pos.z + o->unk_18->unk_00->unk_0c;
    if (b != NULL) {
        v2.x = b->x;
        v2.y = b->y;
        v2.z = b->z;
        func_020e93a0(&v2, e->unk_0c);
        if (func_020e94f8(&v2) != 0) {
            s32 y = v2.y;
            s32 z = v2.z;
            s32 x = v2.x;
            o->unk_3c = x;
            o->unk_3e = y;
            o->unk_40 = z;
        }
    }
}

void func_02093e60(Unk_02093dc8_Obj *o, s32 x)
{
    func_02093f50(o);
    o->unk_54 = x;
}

s32 func_02093e78(Unk_02093dc8_Obj *o)
{
    return func_02093e88(o, (Unk_02093c28_Entry *)&data_021d0830);
}

s32 func_02093e88(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
{
    s16 ang = (s16)(e->unk_0c + 0x8000);
    s32 idx;
    o->unk_20 = e->x + o->unk_18->unk_00->unk_04;
    o->unk_24 = e->y + o->unk_18->unk_00->unk_08;
    o->unk_28 = e->z + o->unk_18->unk_00->unk_0c;
    idx = ((u16)ang >> 4) * 2;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
}

s32 func_02093eec(Unk_02093dc8_Obj *o)
{
    return func_02093efc(o, (Unk_02093c28_Entry *)&data_021d0830);
}

s32 func_02093efc(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e)
{
    s32 idx;
    u16 ang = e->unk_0c;
    o->unk_20 = e->x + o->unk_18->unk_00->unk_04;
    o->unk_24 = e->y + o->unk_18->unk_00->unk_08;
    o->unk_28 = e->z + o->unk_18->unk_00->unk_0c;
    idx = (ang >> 4) * 2;
    o->unk_3c = data_02135f44[idx];
    o->unk_3e = 0;
    o->unk_40 = data_02135f44[idx + 1];
    func_0208fe0c(o);
}

s32 func_02093f50(Unk_02093dc8_Obj *o)
{
    o->unk_20 = data_021d0830.e.x + o->unk_18->unk_00->unk_04;
    o->unk_24 = data_021d0830.e.y + o->unk_18->unk_00->unk_08;
    o->unk_28 = data_021d0830.e.z + o->unk_18->unk_00->unk_0c;
    return func_0208fe0c(o);
}

s32 func_02093f84(void *o)
{
    return func_0208fe0c(o);
}
} // extern "C"

// ---------------------------------------------------------------------------------------------------------------------
// Message buffers (see unk_0206c714.cpp for the bases)

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

extern "C" BOOL func_020a78a4(void *, const void *, s32);

// 8-byte destination buffer at +0xe
class Unk_020e1c4c : public Unk_020e2a60 {
public:
    Unk_020e1c4c();
    virtual ~Unk_020e1c4c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_02093f90(void *dst, u32 n);

    /* 0x0e */ u8 unk_0e[8];
};

// 9-byte source buffer at +0x12
class Unk_020e1c64 : public Unk_020e2a78 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[9];
};

// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14

class Unk_02063954 {
public:
    Unk_02063954();
    Unk_02063954(void *o);
    s32 func_02063954();
    void func_02063968(Unk_02063954 *o);
    void func_0206397c(Unk_02063954 *o);
    void func_02063990(Unk_02063954 *o);
    void func_020639a0();

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];

    s32 func_02094058();
    void func_02094094(Unk_02063954 *o);
};

class Unk_020940a0 : public Unk_02063954 {
public:
    Unk_020940a0();
    Unk_020940a0(void *o);
    Unk_020940a0(const Unk_020940a0 &o);

    void func_020940a0(Unk_020e2a78 *x);
    void func_020940d0(Unk_020e2a78 *x);
    u8 *func_02094104();
    void func_02094108(void *src);
    s8 func_0209411c();
    void func_02094124(u8 v);
    void func_02094128(u16 v);
    u16 func_0209412c();
    void func_020941b4(void *src, u16 a, s8 b, Unk_02063954 *p);
    BOOL func_020941e8(Unk_020940a0 *o);
    BOOL func_02094218();
    void func_02094238(Unk_020940a0 *o);
    void func_02094264(Unk_020940a0 *o);
    void func_02094294();
    void func_020942b8(void *src);

    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
};

extern "C" {
extern Unk_02063954 data_021d7352;
extern u8 data_021d735c[];
s32 func_02097740(void *, void *);
s32 func_02095774(s32);
s32 func_02002cf8(u32, u32, u32, u32, u32);
u32 func_02063b8c(u32);
s32 func_020b50e8();
s32 func_02095204(s32);
BOOL func_02094184(u16 v, u16 *arr, s32 n);
s32 func_02095154(s32, s32);
s32 func_0204ee10(s32 *, s32 *, void *);
s32 func_0204989c(s32, s32, s32, s32, s32);

}

Unk_020e1c4c::~Unk_020e1c4c() {}
Unk_020e1c4c::Unk_020e1c4c() {}
u32 Unk_020e1c4c::vfunc_08() { return 8; }
u8 *Unk_020e1c4c::vfunc_0c() { return unk_0e; }
void Unk_020e1c4c::func_02093f90(void *dst, u32 n) { func_02116048(unk_0e, dst, n); }

Unk_020e1c64::~Unk_020e1c64() {}
Unk_020e1c64::Unk_020e1c64() {}
u32 Unk_020e1c64::vfunc_08() { return 9; }
u8 *Unk_020e1c64::vfunc_0c() { return unk_12; }

extern "C" s32 func_02094048(void *x)
{
    return func_02097740(data_021d735c, x);
}

s32 Unk_02063954::func_02094058()
{
    s32 r = 2;
    if (func_02063954() != 0) {
        Unk_02063954 *p = &data_021d7352;
        if (unk_00 == p->unk_00 && func_02128930(unk_02, p->unk_02, 8) == 0) {
            r = 0;
        } else {
            r = 1;
        }
    }
    return r;
}

void Unk_02063954::func_02094094(Unk_02063954 *o) { func_02063990(o); }

extern "C" void func_0209409c() {}

void Unk_020940a0::func_020940a0(Unk_020e2a78 *x)
{
    Unk_020e1c4c buf;
    buf.func_020a77f8(x);
    buf.func_02093f90(unk_0c, 8);
}

void Unk_020940a0::func_020940d0(Unk_020e2a78 *x)
{
    Unk_020e1c4c buf;
    func_020a78a4(&buf, unk_0c, 8);
    x->func_020a7aa0(&buf, 0, 0);
}

u8 *Unk_020940a0::func_02094104() { return unk_0c; }
void Unk_020940a0::func_02094108(void *src) { func_02116048(src, unk_0c, 8); }
s8 Unk_020940a0::func_0209411c() { return unk_14; }
void Unk_020940a0::func_02094124(u8 v) { unk_14 = v; }
void Unk_020940a0::func_02094128(u16 v) { unk_0a = v; }
u16 Unk_020940a0::func_0209412c() { return unk_0a; }

extern "C" u16 func_02094130()
{
    return (u16)((u16)func_02063b8c(0x7ffc) | 0x8000);
}

extern "C" u16 func_02094154(u16 *arr, s32 n)
{
    u16 t;
    t = func_02094130();
    while (t == 0 || func_02094184(t, arr, n) == 1) {
        t = func_02094130();
    }
    return t;
}

extern "C" BOOL func_02094184(u16 v, u16 *arr, s32 n)
{
    BOOL r = FALSE;
    if (n != 0 && arr != NULL) {
        s32 i = 0;
        for (; i < n; arr++, i++) {
            if (v == *arr) {
                r = TRUE;
                break;
            }
        }
    }
    return r;
}

void Unk_020940a0::func_020941b4(void *src, u16 a, s8 b, Unk_02063954 *p)
{
    func_02116048(src, unk_0c, 8);
    unk_0a = a;
    unk_14 = b;
    if (p == NULL) p = &data_021d7352;
    func_02063990(p);
}

BOOL Unk_020940a0::func_020941e8(Unk_020940a0 *o)
{
    if (unk_0a == o->unk_0a && unk_14 == o->unk_14 && func_02128930(unk_0c, o->unk_0c, 8) == 0) return TRUE;
    return FALSE;
}

BOOL Unk_020940a0::func_02094218()
{
    if (func_02063954() == 1 && unk_0a != 0) return TRUE;
    return FALSE;
}

void Unk_020940a0::func_02094238(Unk_020940a0 *o)
{
    func_02116048(unk_0c, o->unk_0c, 8);
    o->unk_0a = unk_0a;
    o->unk_14 = unk_14;
    func_02063968(o);
}

void Unk_020940a0::func_02094264(Unk_020940a0 *o)
{
    func_02116048(o->unk_0c, unk_0c, 8);
    unk_0a = o->unk_0a;
    unk_14 = o->unk_14;
    func_0206397c(o);
}

void Unk_020940a0::func_02094294()
{
    func_02115fb4(unk_0c, 0, 8);
    unk_0a = 0;
    unk_14 = 2;
    func_020639a0();
}

void Unk_020940a0::func_020942b8(void *src) { func_02116048(src, this, 0x16); }

Unk_020940a0::Unk_020940a0() {}
Unk_020940a0::Unk_020940a0(const Unk_020940a0 &o) : Unk_02063954((void *)&o) { func_02094264((Unk_020940a0 *)&o); }
Unk_020940a0::Unk_020940a0(void *o) : Unk_02063954(o) {}

extern "C" {
s32 func_02094308(u32 a, u32 b, u32 c, u32 d)
{
    return func_02002cf8(9, ((a << 30) & 0xc0000000) | (d & 0x3fffffff), b, c, 0);
}

s32 func_0209433c() { return 4; }
s32 func_02094340() { return 0xc9c; }

s32 func_02094348()
{
    return *(s32 *)((u8 *)func_02095774(4) + 0x7fc);
}

void func_02094360(s32 *a, u8 *b, s32 *c, s32 *d, s32 *e, s32 *f)
{
    if (*b == func_020b50e8()) {
        if (*c != 0x75 || *d == 0x75) return;
        if (func_02095204(*a) != 0 && func_02095154(0x75, *a) != 0) return;
    } else {
        if (*d != 0x75 || *c == 0x75) return;
    }
    {
        s32 o1, o2;
        s32 s[3];
        s32 fv = *f;
        s[0] = *e;
        s[1] = 0;
        s[2] = fv;
        func_0204ee10(&o1, &o2, s);
        func_0204989c(0, o1, o2, 0xfff1, 0);
    }
}
}
