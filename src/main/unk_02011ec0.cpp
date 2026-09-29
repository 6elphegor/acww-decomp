#include "types.h"



struct Unk_02011b60 {
    u16 unk_00;
    u16 pad_02;
    u8 sub[0x20];

    BOOL func_02011ec0(u32 a, u16 *b, u32 c, u16 d);
    void func_02011e9c(u32 a, u32 b, u32 c);
    BOOL func_02011f08(u32 a);
    Unk_02011b60 *func_02011f40();
    Unk_02011b60 *func_02011f54();
};

extern "C" {
void *func_02081d4c(void *);
s32 func_0205e1a0(void *, u32, u32, u32);
void func_0205e24c(void *, void *, u32);
void func_02015fe0(void *, u32, void *, u32, u32);
s32 func_02082140(void *);
s32 func_02081d6c(void *, u32);
void func_02081db8(void *);
void func_02081dd0(void *);
}

void Unk_02011b60::func_02011e9c(u32 a, u32 b, u32 c)
{
    void *p = func_02081d4c(&sub);
    if (p) {
        func_0205e1a0(p, a, b, c);
    }
}

BOOL Unk_02011b60::func_02011ec0(u32 a, u16 *b, u32 c, u16 d)
{
    void *p = func_02081d4c(&sub);
    if (p) {
        func_0205e24c(p, b, 0);
        func_02015fe0((void *)(a + 0x334), a, b, c, d);
        unk_00 = *b;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02011b60::func_02011f08(u32 a)
{
    if (!func_02082140(&sub)) return FALSE;
    if (!func_02081d6c(&sub, a)) return FALSE;
    unk_00 = 0xfff1;
    return TRUE;
}

Unk_02011b60 *Unk_02011b60::func_02011f40()
{
    func_02081db8(&sub);
    return this;
}

Unk_02011b60 *Unk_02011b60::func_02011f54()
{
    unk_00 = 0xfff1;
    func_02081dd0(&sub);
    unk_00 = 0xfff1;
    return this;
}

struct Unk_02011f74_Pair {
    s32 a;
    s32 b;
};

struct Unk_02011f74_World {
    void *unk_00;
    Unk_02011f74_Pair size;
    Unk_02011f74_Pair unk_0c;
};

struct Unk_02011f74_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void *vfunc_64();
};

struct Unk_02011f74_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern Unk_02011f74_World *data_021c47c4;
extern u8 data_021dfd8c[];
extern u8 data_021c7c88[];
extern s16 data_02135f44[];
extern s32 data_021be02c[];
extern s32 data_021be028[];

extern "C" {
s32 func_020374b0(void *, u32);
void *func_020375d8();
s32 func_0207bcfc(u32, s32, s32);
s32 func_02063b8c(u32);
u8 *func_0207f170(...);
s32 func_020805c4(void *);
s32 func_0207bd3c(void *, void *, u32);
void func_02133ef8(void *, u32);
void func_02012b94(Unk_02011f74_Pair *out, void *self, void *a, Unk_02011f74_World *w);
void func_0204ee10(s32 *, s32 *, Unk_02011f74_Vec *);
void func_0204ed8c(Unk_02011f74_Vec *, s32, s32);
s32 func_0204ec14(Unk_02011f74_World *, s32, s32, u32);
s32 func_0204ecfc(Unk_02011f74_World *, u32);
s32 func_02002bdc(Unk_02011f74_Vec *, Unk_02011f74_Vec *);
s32 func_020e7fa8(void *);
s32 func_01ffcb0c(s32, s32);
void func_0204edd8(Unk_02011f74_Vec *, Unk_02011f74_Vec *);
s32 func_02077f40(Unk_02011f74_Vec *, s32);
s32 func_02077f68(s32, s32, Unk_02011f74_World *);
s32 func_0204e350(Unk_02011f74_World *, s32, s32);
}


struct Unk_02012164 {
    u32 unk_00;
    s32 unk_04;
    u32 unk_08;
    Unk_02011f74_Pair unk_0c;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 pad_24[0x88 - 0x24];
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;

    void func_02012810(Unk_02011f74_Vec *p);
    void func_02012df8();
    s32 func_02012ed0(Unk_02011f74_Vec *p);
    s32 func_02012eb0();
    void func_02013260();
    void func_020132c8();
    s32 func_020130f0();

    BOOL func_0201206c(Unk_02011f74_Vec *v);
    BOOL func_020120e4(Unk_02011f74_Vec *v);
    BOOL func_02012268(Unk_02011f74_Vec *v);
    BOOL func_02012164(Unk_02011f74_Vec *p);
    BOOL func_020121fc(Unk_02011f74_Vec *p);
    BOOL func_02012344(Unk_02011f74_Vec *p);
    BOOL func_02012308(Unk_02011f74_Vec *p);
    BOOL func_02012450(Unk_02011f74_Vec *p);
    BOOL func_02012584(Unk_02011f74_Vec *p);
    BOOL func_020125d8(Unk_02011f74_Vec *p, Unk_02011f74_World *w);
    BOOL func_020125e8(Unk_02011f74_Vec *p);
    BOOL func_02012620(Unk_02011f74_Vec *p, Unk_02011f74_World *w);
    BOOL func_020126f8(Unk_02011f74_Vec *p);
    BOOL func_0201273c(Unk_02011f74_Vec *p, Unk_02011f74_Pair *lim, Unk_02011f74_World *w);
    BOOL func_020123d0(Unk_02011f74_Vec *v);
};



struct Unk_02011f74_Cell {
    u8 data[0x28];
};

static inline Unk_02011f74_Cell *GetCell(Unk_02011f74_World *w, u32 x, u32 y)
{
    if (x < (u32)w->size.a && (u32)w->size.b > y && w->unk_00 != NULL) {
        return (Unk_02011f74_Cell *)w->unk_00 + (x + w->size.a * y);
    }
    return NULL;
}

static inline Unk_02011f74_Cell *GetCellD(Unk_02011f74_World *w, u32 x, u32 y, Unk_02011f74_Cell *volatile *dflt)
{
    if (x < (u32)w->size.a && (u32)w->size.b > y && w->unk_00 != NULL) {
        return (Unk_02011f74_Cell *)w->unk_00 + (x + w->size.a * y);
    }
    return *dflt;
}

extern "C" void func_02011f74(Unk_02011f74_Pair *out, void *self, Unk_02011f74_Vec *v)
{
    Unk_02011f74_World *world = data_021c47c4;
    u8 mask = 0;
    out->a = 0;
    out->b = 0;
    if (world) {
        Unk_02011f74_Pair *size = &world->size;
        Unk_02011f74_Pair szcopy;
        volatile s32 count;
        volatile s32 total;
        volatile s32 sz;
        szcopy = *size;
        sz = szcopy.a;
        count = 0;
        total = 0;
        if (size->b > 4 && sz <= 8) {
            volatile s32 px = v->x >> 17;
            volatile s32 pz = v->z >> 17;
            s32 i = 1;
            Unk_02011f74_Cell *volatile nullc = NULL;
            volatile s32 one = 1;
            for (; i < sz - 1; i++) {
                if (i != px || pz != 4) {
                    Unk_02011f74_Cell *c = GetCellD(world, i, 4, &nullc);
                    if (c && func_020374b0(c, 8)) {
                        mask |= one << (i - 1);
                        count++;
                    }
                }
                total++;
            }
        }
        u32 idx = func_0207bcfc(mask, count, total);
        if (idx < (u32)total) {
            Unk_02011f74_Cell *c = GetCell(world, idx + 1, 4);
            if (c) {
                Unk_02011f74_Pair t;
                func_02012b94(&t, self, func_020375d8(), world);
                *out = t;
            }
        }
    }
}

extern "C" void func_02012088(Unk_02011f74_Pair *out, void *self)
{
    Unk_02011f74_World *world = data_021c47c4;
    Unk_02011f74_Pair pos;
    out->a = 0;
    out->b = 0;
    if (world) {
        Unk_02011f74_Pair *size = &world->size;
        Unk_02011f74_Pair szcopy;
        szcopy = *size;
        s32 w = szcopy.a;
        s32 h = size->b;
        pos.a = 0;
        pos.b = 0;
        if (w >= 3) {
            pos.a = func_02063b8c(w - 2) + 1;
        }
        if (h >= 3) {
            pos.b = func_02063b8c(h - 2) + 1;
            Unk_02011f74_Pair t;
            func_02012b94(&t, self, &pos, world);
            *out = t;
        }
    }
}

extern "C" void func_02012100(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj)
{
    Unk_02011f74_World *world = data_021c47c4;
    out->a = 0;
    out->b = 0;
    if (world && obj->vfunc_64()) {
        u8 *p = func_0207f170(obj->vfunc_64());
        Unk_02011f74_Pair pos;
        pos.a = 0;
        pos.b = 0;
        s32 y = p[1];
        pos.a = p[0] >> 4;
        pos.b = y >> 4;
        Unk_02011f74_Pair t;
        func_02012b94(&t, self, &pos, world);
        *out = t;
    }
}

extern "C" void func_02012230(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj)
{
    out->a = 0;
    out->b = 0;
    if (obj->vfunc_64()) {
        u8 *p = func_0207f170(obj->vfunc_64());
        s32 z = p[1] + 1;
        out->a = p[0];
        out->b = z;
    }
}

extern "C" void func_02012284(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj)
{
    Unk_02011f74_World *world = data_021c47c4;
    out->a = 0;
    out->b = 0;
    if (world && obj->vfunc_64()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = func_020805c4(obj->vfunc_64());
        if (func_0207bd3c(data_021dfd8c, &key, 1)) {
            u8 *p = func_0207f170();
            Unk_02011f74_Pair pos;
            pos.a = 0;
            pos.b = 0;
            s32 y = p[1];
            pos.a = p[0] >> 4;
            pos.b = y >> 4;
            Unk_02011f74_Pair t;
            func_02012b94(&t, self, &pos, world);
            *out = t;
        }
    }
}

extern "C" void func_02012378(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj)
{
    out->a = 0;
    out->b = 0;
    if (obj->vfunc_64()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = func_020805c4(obj->vfunc_64());
        if (func_0207bd3c(data_021dfd8c, &key, 1)) {
            u8 *p = func_0207f170();
            s32 z = p[1] + 1;
            out->a = p[0];
            out->b = z;
        }
    }
}

extern "C" void func_02012404(Unk_02011f74_Pair *out, void *self)
{
    Unk_02011f74_World *world = data_021c47c4;
    out->a = 0;
    out->b = 0;
    if (world && func_0204ecfc(world, 0x200)) {
        Unk_02011f74_Pair t;
        func_02012b94(&t, self, func_020375d8(), world);
        *out = t;
    }
}

BOOL Unk_02012164::func_0201206c(Unk_02011f74_Vec *v)
{
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::func_020120e4(Unk_02011f74_Vec *v)
{
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::func_02012268(Unk_02011f74_Vec *v)
{
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::func_020121fc(Unk_02011f74_Vec *p)
{
    s32 a = 0;
    s32 b = 0;
    func_0204ee10(&a, &b, p);
    if (a == unk_0c.a && b == unk_0c.b) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::func_02012344(Unk_02011f74_Vec *p)
{
    s32 a = 0;
    s32 b = 0;
    func_0204ee10(&a, &b, p);
    if (a == unk_0c.a && b == unk_0c.b) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::func_020123d0(Unk_02011f74_Vec *v)
{
    Unk_02011f74_World *world = data_021c47c4;
    BOOL r = FALSE;
    if (world != NULL) {
        s32 x = v->x >> 17;
        s32 z = v->z >> 17;
        BOOL c = func_0204ec14(world, x, z, 0x200);
        if (c) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_02012164::func_02012308(Unk_02011f74_Vec *p)
{
    if (!func_02012ed0(p)) {
        func_02012df8();
        unk_88 = 0;
        unk_8c = 2;
        func_02012810(p);
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_02012164::func_020125d8(Unk_02011f74_Vec *p, Unk_02011f74_World *w)
{
    func_020130f0();
    return FALSE;
}

BOOL Unk_02012164::func_02012584(Unk_02011f74_Vec *p)
{
    Unk_02011f74_World *world = data_021c47c4;
    if (world) {
        func_020125d8(p, world);
        if (!func_02012ed0(p)) {
            func_02012df8();
            unk_88 = 0;
            unk_8c = 2;
            func_02012810(p);
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::func_020125e8(Unk_02011f74_Vec *p)
{
    Unk_02011f74_World *world = data_021c47c4;
    if (world) {
        func_02012620(p, world);
        if (func_02012ed0(p)) {
            unk_04 = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::func_020126f8(Unk_02011f74_Vec *p)
{
    Unk_02011f74_World *world = data_021c47c4;
    if (world) {
        Unk_02011f74_Pair lim;
        Unk_02011f74_Pair *sz = &world->unk_0c;
        lim = *sz;
        func_0201273c(p, &lim, world);
        if (func_02012ed0(p)) {
            unk_04 = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::func_02012164(Unk_02011f74_Vec *p)
{
    s32 a = 0;
    s32 b = 0;
    volatile s32 pad;
    func_0204ee10(&a, &b, p);
    if (a == unk_0c.a && b >= unk_0c.b && b <= unk_0c.b + 1) {
        func_0204ed8c(p, unk_0c.a, unk_0c.b);
    } else if (a >= unk_0c.a - 3 && a <= unk_0c.a + 4 && b >= unk_0c.b && b <= unk_0c.b + 5) {
        a = unk_0c.a;
        b = unk_0c.b + func_02063b8c(2);
        func_0204ed8c(p, a, b);
    } else {
        func_02012450(p);
    }
    func_020132c8();
    if (func_02012ed0(p)) {
        unk_04 = 2;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02012164::func_02012450(Unk_02011f74_Vec *p)
{
    u16 mag = 0x7fff;
    s32 mode = func_02063b8c(4);
    s32 base;
    volatile s32 i;
    volatile s32 len;
    volatile s32 zero0;
    volatile s32 zero1;
    Unk_02011f74_Vec tmp;
    func_0204ed8c(&tmp, unk_0c.a, unk_0c.b);
    if (mode == 0) {
        base = func_02002bdc(p, &tmp);
        mag = 0x1000;
    } else if (mode == 1) {
        base = (s16)func_020e7fa8(data_021c7c88);
    } else {
        base = (s16)func_020e7fa8(data_021c7c88);
        mag >>= 1;
    }
    i = 0;
    zero0 = 0;
    zero1 = 0;
    for (; i < 10; i++) {
        len = (func_02063b8c(5) + 3) << 13;
        s32 r6 = (s16)func_02063b8c(mag);
        if (func_02063b8c(2)) {
            r6 = (s16)(r6 * ~zero1);
        }
        r6 = ((u16)(s16)(r6 + base) >> 4) << 1;
        tmp.x = p->x + func_01ffcb0c(len, data_02135f44[r6]);
        tmp.z = p->z + func_01ffcb0c(len, data_02135f44[r6 + 1]);
        func_0204edd8(&tmp, &tmp);
        if (func_02077f40(&tmp, zero0)) {
            p->x = tmp.x;
            p->z = tmp.z;
            break;
        }
        if ((i & 1) && mag != 0xffff) {
            mag = (u16)(mag + 0x1000);
        }
    }
    func_020132c8();
    if (func_02012ed0(p)) {
        unk_04 = 2;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02012164::func_02012620(Unk_02011f74_Vec *p, Unk_02011f74_World *w)
{
    func_02013260();
    s32 flag = unk_88;
    if (flag != 0) {
        s32 k = func_02012eb0();
        s32 a = 0;
        s32 b = 0;
        func_0204ee10(&a, &b, p);
        a += data_021be028[k * 2];
        b += data_021be02c[k * 2];
        if (!func_0204e350(w, a, b)) {
            func_0204ed8c(p, a, b);
            func_02012df8();
            unk_88 = 0;
            unk_8c = 2;
            func_02012810(p);
            unk_90 = 4;
            return FALSE;
        }
        func_0204ed8c(p, a, b);
        if (a == unk_1c && b == unk_20) {
            func_02012810(p);
        }
        return FALSE;
    }
    func_02012df8();
    unk_88 = 0;
    unk_8c = 2;
    func_02012810(p);
    return FALSE;
}

BOOL Unk_02012164::func_0201273c(Unk_02011f74_Vec *p, Unk_02011f74_Pair *lim, Unk_02011f74_World *w)
{
    func_02013260();
    if ((u32)unk_90 < 4) {
        Unk_02011f74_Pair *tbl = (Unk_02011f74_Pair *)data_021be028;
        Unk_02011f74_Pair *e = &tbl[unk_90];
        s32 dx = tbl[unk_90].a;
        s32 dz = e->b;
        u32 a = 0;
        u32 b = 0;
        func_0204ee10((s32 *)&a, (s32 *)&b, p);
        for (; a < (u32)lim->a && b < (u32)lim->b;) {
            a += dx;
            b += dz;
            BOOL eq = FALSE;
            if (unk_1c == a && unk_20 == b) eq = TRUE;
            if (eq || func_0204e350(w, a, b)) {
                func_0204ed8c(p, a, b);
                func_02012810(p);
                break;
            }
            if (func_02077f68(a, b, w)) {
                func_0204ed8c(p, a, b);
                break;
            }
        }
    } else {
        func_02012df8();
        unk_88 = 0;
        unk_8c = 2;
        func_02012810(p);
    }
    return FALSE;
}
