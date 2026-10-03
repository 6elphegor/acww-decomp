#include "types.h"

struct Unk_02037674_V3 {
    s32 x, y, z;
};
struct Unk_02037638_S8 {
    s32 a, b;
};

extern "C" {
void *func_020641ec(const char *, void *, s32, void *);
void func_020e8558(void *);
void *func_020e8628(void *, s32, s32);
void MI_CpuFill8(void *, s32, s32);
s32 func_0209c06c(s32);
s32 func_020303d0(s32, s32, s32, s32);
u32 func_02037324(u32 x);
extern void *data_021f482c;
}

u8 *data_021c21dc;
u32 data_021c21e0;

struct Unk_02037478 {
    u32 unk_00;
    u8 pad_04[0x20];
    void *unk_24;
};

struct Marker1 {
    u16 v;
};

static inline BOOL Unk_020374f4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

class Unk_020375d0 {
public:
    s32 func_020375bc();
    u32 func_020375d0();
    void func_020375d4(u32 v);
    u8 *func_020375d8();
    u32 unk_00;
};

struct Unk_02037618_Sub {
    u8 pad_00[0xc];
    u32 unk_0c;
};

class Unk_02037618 {
public:
    void func_020376a8();
    void func_02037618(Unk_02037618_Sub *s, u32 t, u32 u);
    void func_02037674(s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, s32 k4, s32 k5, u32 k6);

    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_02037674_V3 unk_0c;
    s32 unk_18[2];
    Unk_02037618_Sub *unk_20;
    s32 unk_24;
};

extern "C" u32 func_02037358(u32 i);
extern "C" BOOL func_0203740c(void *, u16 *p, s32 bit);
extern "C" BOOL func_0203742c(void *, u16 *p, s32 bit);
extern "C" u32 func_020374e8(Unk_02037478 *o);
extern "C" u16 *func_02037558(void *cell, u32 x, u32 y, u32 z);
extern "C" void func_02037460(s32 *a, s32 *b, s32 v);

void Unk_02037618::func_020376a8() {
    unk_04 = 0;
    unk_08 = 0;
    for (s32 i = 0; i < 2; i++) {
        unk_18[i] = 0;
    }
}

void Unk_02037618::func_02037674(s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, s32 k4, s32 k5, u32 k6) {
    unk_00 = a;
    unk_0c.x = v->x;
    unk_0c.y = v->y;
    unk_0c.z = v->z;
    unk_18[0] = b;
    unk_18[1] = k0;
    unk_24 = k1;
    unk_04 = k4;
    unk_08 = k5;
    func_02037618(k2, k3, k6);
}

extern "C" void func_02037638(Unk_02037618 *self, s32 a, Unk_02037674_V3 *v, s32 b, s32 k0, s32 k1, Unk_02037618_Sub *k2, u32 k3, Unk_02037638_S8 *k45, u32 k6) {
    Unk_02037674_V3 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    self->func_02037674(a, &t, b, k0, k1, k2, k3, k45->a, k45->b, k6);
}

void Unk_02037618::func_02037618(Unk_02037618_Sub *s, u32 t, u32 u) {
    unk_20 = s;
    if (unk_20 != 0) {
        t = unk_20->unk_0c;
    }
    if (t != 0) {
        func_020303d0(unk_04, unk_08, t, u);
    }
}

extern "C" Unk_02037618 *func_020375dc(s32 n, void *heap, s32 x) {
    Unk_02037618 *p = (Unk_02037618 *)func_020e8628(heap, n * 0x28, x);
    if (p != 0) {
        s32 i;
        for (i = 0; i < n; i++) {
            Unk_02037618 *o = p + i;
            if (o != 0) {
                o->func_020376a8();
            }
        }
    }
    return p;
}

u8 *Unk_020375d0::func_020375d8() { return (u8 *)this + 4; }

void Unk_020375d0::func_020375d4(u32 v) { unk_00 = v; }

u32 Unk_020375d0::func_020375d0() { return unk_00; }

s32 Unk_020375d0::func_020375bc() {
    return func_0209c06c(func_020375d0());
}

extern "C" BOOL func_02037590(void *cell, u16 *t, u32 x, u32 y, u8 z) {
    u16 *p = func_02037558(cell, x, y, z);
    BOOL r = FALSE;
    if (p != 0) {
        *p = *t;
        r = TRUE;
    }
    return r;
}

#pragma thumb off
extern "C" u16 *func_02037558(void *cell, u32 x, u32 y, u32 z) {
    u16 *r = 0;
    if (z < 2 && x < 0x10 && y < 0x10) {
        u16 *t = (u16 *)((Unk_02037618 *)cell)->unk_18[z];
        if (t != 0) {
            r = t + (x + y * 16);
        }
    }
    return r;
}
#pragma thumb reset

extern "C" BOOL func_020374f4(void *cell, s32 *a, s32 *b, Marker1 *m, Marker1 *c, u8 d) {
    u16 *p = func_02037558(cell, 0, 0, d);
    BOOL found = FALSE;
    if (p != 0) {
        s32 i;
        for (i = 0; i < 0x100; i++) {
            if (Unk_020374f4_Range(p, m->v, c->v)) {
                func_02037460(a, b, i);
                found = TRUE;
                break;
            }
            p++;
        }
    }
    return found;
}

extern "C" u32 func_020374e8(Unk_02037478 *o) {
    return func_02037324(o->unk_00);
}

extern "C" BOOL func_020374cc(Unk_02037478 *o, u32 mask) {
    u32 m = mask & func_020374e8(o);
    if (mask == m) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020374b0(Unk_02037478 *o, u32 mask) {
    if ((mask & func_020374e8(o)) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020373e8(void *base, u32 a, u32 b);
extern "C" BOOL func_020373c4(void *base, u32 a, u32 b);

extern "C" BOOL func_02037494(Unk_02037478 *o, u32 a, u32 b) {
    BOOL r = FALSE;
    if (o->unk_24 != 0) {
        r = func_020373e8(o->unk_24, a, b);
    }
    return r;
}

extern "C" BOOL func_02037478(Unk_02037478 *o, u32 a, u32 b) {
    BOOL r = FALSE;
    if (o->unk_24 != 0) {
        r = func_020373c4(o->unk_24, a, b);
    }
    return r;
}

extern "C" void func_02037460(s32 *a, s32 *b, s32 v) {
    *a = v & 0xf;
    *b = (v >> 4) & 0xf;
}

extern "C" void func_0203745c() {}

extern "C" void func_02037458() {}

extern "C" void func_0203744c(void *p) {
    MI_CpuFill8(p, 0, 0x20);
}

extern "C" BOOL func_0203742c(void *, u16 *p, s32 bit) {
    BOOL r = FALSE;
    if (bit >= 0 && bit < 0x10) {
        *p |= (1 << bit);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_0203740c(void *, u16 *p, s32 bit) {
    BOOL r = FALSE;
    if (bit >= 0 && bit < 0x10) {
        *p &= ~(1 << bit);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_020373e8(void *base, u32 a, u32 b) {
    BOOL r = FALSE;
    if (a < 0x10 && b < 0x10) {
        r = func_0203742c(base, (u16 *)base + b, a);
    }
    return r;
}

extern "C" BOOL func_020373c4(void *base, u32 a, u32 b) {
    BOOL r = FALSE;
    if (a < 0x10 && b < 0x10) {
        r = func_0203740c(base, (u16 *)base + b, a);
    }
    return r;
}

extern "C" BOOL func_02037394() {
    data_021c21dc = (u8 *)func_020641ec("/bg/bkattr.bin", data_021f482c, 4, &data_021c21e0);
    return TRUE;
}

extern "C" BOOL func_02037374() {
    func_020e8558(data_021c21dc);
    data_021c21dc = 0;
    return TRUE;
}

extern "C" u32 func_02037358(u32 i) {
    if (i < data_021c21e0) {
        return data_021c21dc[i];
    }
    return 0;
}
