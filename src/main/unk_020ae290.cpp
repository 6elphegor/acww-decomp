#include "types.h"

struct D {
    u8 a, b, c, d, e, f;
    u16 g;
};

struct X {
    u32 p, q;
    X(int, int);
    ~X();
};

struct Z {
    u16 v;
    Z();
};

struct Flags {
    u16 v : 5;
    u16 rest : 11;
};

struct S4 {
    u8 a, b, c, flag;
};

struct Obj {
    u32 timer;
    u16 items[0x25];
    u8 date[4];
    u8 date2[3];
    u8 pad;
    S4 s;
    Flags flags;
    u8 mask[5];
};

extern "C" {
extern u8 data_021ed2d4[], data_020cbb18[], data_021d735c[], data_021ee1f4[], data_021ee17c[], data_021ee180[],
    data_021ee20c[], data_021d7350[], data_021ed104[];
void func_02116048(void*, void*, int);
void func_020ad9c4(void*);
int func_020ac79c();
void func_020ac790(int);
void func_020b4994();
int func_020b5268();
int func_020b50e8();
void func_0209d498(D*);
void func_0209d164(D*, int);
void func_0209d2c0(D*, int);
int func_0209d3d0(D*, D*, int);
int func_02072e44(int);
void func_020ace7c();
int func_020978a4(void*);
void* func_02097868(void*, int);
int func_02098a48(void*);
int func_02098044(void*, int);
int func_02063394(void*, int);
void func_020aed48(u8);
void func_020aed14(u16*);
void func_020aece4(u8, u8);
int func_0204b2d4(u16*);
Z func_02062f94(X, int, void*, int, int, int);
int func_020626cc(u16*, int);
int func_020aec74(D*);
void func_020633a0(void*, int, int, int);
void func_020add64(Obj*, int*);
void func_020add3c(Obj*, int*);
void func_020adcec(Obj*, int*);
void func_020adcbc(Obj*, int*);
void func_020adc94(Obj*, int*);
void func_020adc6c(Obj*, int*);
void func_020adc44(Obj*, int*);
void func_020adbd0(Obj*, int*);
void func_020adba0(Obj*, int*);
void func_020adb70(Obj*, int*);
int func_020ae02c(Obj*);
void func_020ae03c(Obj*);
void func_020ae040(Obj*, D*);
int func_0209e170(void*, int);
void func_0209e148(void*, int);
int func_020aef80(int, u16*, u8*, int);
u16* func_020af034(int, u16*, u8*, int, u16*);
int func_020af0a4(int, int, u8*);
int func_020aebbc(int);
void func_020af0c4(u16*, u8*, int);
}

static inline BOOL inRange(u16 v, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

extern "C" {
S4* func_020aeac4(Obj* self);
void func_020ae778(Obj* self);
u16* func_020ae844(Obj* self, int idx, u16* p);
int func_020ae860(Obj* self, int idx);
void func_020ae870(Obj* self);
u32 func_020ae8d0(Obj* self, int mode);
int func_020ae888(Obj* self);
int func_020ae964(Obj* self, D* d);
int func_020aeb38(Obj* self, D* d);
int func_020ae920(Obj* self, D* d);
void func_020ae648(Obj* self, int f);
void func_020aece4(u8, u8);
int func_020aea04(Obj* self, D* d);
int func_020ae8fc(Obj*);
int func_020ae638(void*);
void func_020ae320(Obj* self, int a, int b, int c);
int func_020ae2d4(Obj* self, D* d);
void func_020ae29c(Obj* self, D* d);

BOOL func_020ae290(int x) {
    if (x < 0x1c) return TRUE;
    return FALSE;
}

void func_020ae29c(Obj* self, D* d) {
    D t;
    func_02116048(d, &t, 8);
    self->date[2] = t.f;
    self->date[1] = t.e;
    self->date[0] = t.d;
    self->date[3] = 0;
}

int func_020ae2d4(Obj* self, D* d) {
    D t;
    func_02116048(d, &t, 8);
    if (self->date[2] != t.f || self->date[1] != t.e || self->date[0] != t.d || self->date[3] != 0) return TRUE;
    return FALSE;
}

void func_020ae320(Obj* self, int a, int b, int c) {
    int z;
    func_020ae870(self);
    z = 0;
    func_020633a0(data_021ee1f4, a, b, c);
    func_020add64(self, &z);
    func_020add3c(self, &z);
    func_020adcec(self, &z);
    func_020adcbc(self, &z);
    func_020adc94(self, &z);
    func_020adc6c(self, &z);
    func_020adc44(self, &z);
    func_020adbd0(self, &z);
    func_020adba0(self, &z);
    func_020adb70(self, &z);
    func_020ae03c(self);
}

}

extern "C" {

void func_020ae3a4(Obj* self, int force) {
    int fresh;
    D d;
    int ok;
    int i;
    int n;
    void* p;

    func_020ad9c4(data_021ed2d4);
    if (func_020ac79c() == 1) {
        func_020ac790(2);
        return;
    }
    func_020b4994();
    if (func_020b5268() == 0) {
        int r = func_020b50e8();
        if (r == 0x2c) return;
        if (r == 0x3f) return;
    }
    fresh = 1;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    if (d.c < 6) {
        func_0209d164(&d, fresh);
        fresh = 0;
    }
    if (force == 0 && func_020ae2d4(self, &d) == 0) return;
    self->flags.v = 0;
    if (func_02072e44(*(int*)data_020cbb18) != 0) return;
    func_020ace7c();
    func_020ae29c(self, &d);
    func_020ae320(self, d.f, d.e, d.d);
    ok = 1;
    int cnt = func_020978a4(data_021d735c);
    if (cnt != 0 && cnt != 1) {
        for (i = 0; i < 4; i++) {
            p = func_02097868(data_021d735c, i);
            if (p != 0 && func_02098a48(p) != 0 && func_02098044(p, 1) == 0) {
                ok = 0;
                break;
            }
        }
    }
    if (ok == 0 && func_020aeac4(self)->flag == 0) {
        func_020ae040(self, &d);
        if (func_02063394(data_021ee1f4, 0xe) == 0) {
            self->flags.v = (u8)(func_02063394(data_021ee1f4, 4) + 0x11);
            if (fresh != 0) func_020aed48(self->flags.v);
        }
        if (self->flags.v == 0 && func_020aeb38(self, &d) == 0) {
            static X sx(0, 4);
            if (func_02063394(data_021ee1f4, 5) == 0) {
                for (i = 0; (u32)i < 0x25; i++) {
                    u16* q = &self->items[i];
                    if (func_0204b2d4(q) != 0) {
                        *q = func_02062f94(sx, 0, data_021ee1f4, 0, 1, 0).v;
                        if (fresh != 0) func_020aed14(q);
                        break;
                    }
                }
            }
        }
    }
    if (d.e == 0xc) {
        u8 v = d.d;
        int t = 0x2e;
        if (v >= 0xa && v <= 0x18)
            t = 0x2b;
        else if (v >= 0x1a && v <= 0x1f)
            t = 0x2c;
        if (t == 0x2e) return;
        n = 0;
        for (i = 0; (u32)i < 0x25; i++) {
            u16* q = &self->items[i];
            if (func_0204b2d4(q) != 0) {
                if (n == 1) {
                    X tmp(0, t);
                    *q = func_02062f94(tmp, 0, data_021ee1f4, 0, 1, 0).v;
                    break;
                }
                n++;
            }
        }
    }
}

}

extern "C" {

static inline BOOL inRangeP(u16* p, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

struct Rgba {
    u8 a, b, c, d;
};

int func_020ae638(void*) {
    return func_0209e170(data_021d7350, 7);
}

void func_020ae648(Obj* self, int flag) {
    if (flag == 0) func_0209e148(data_021d7350, 7);
}

BOOL func_020ae664(Obj* self, u32 idx, int add, int arg) {
    if (idx < 0x25) {
        u32 lim = func_020ae8d0(self, func_020ae02c(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        if (func_020ae860(self, idx) == 0) {
            u32 byte = idx >> 3;
            u32 bit = idx & 7;
            if (!inRangeP(func_020ae844(self, idx, 0), 0x1000, 0x10ff)) {
                if (!inRangeP(func_020ae844(self, idx, 0), 0x151f, 0x151f)) {
                    self->mask[byte] |= 1 << bit;
                }
            }
        }
        func_020ae648(self, arg);
        func_020ae778(self);
        return TRUE;
    } else {
        u32 lim = func_020ae8d0(self, func_020ae02c(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        func_020ae648(self, arg);
        func_020ae778(self);
        return FALSE;
    }
}

void func_020ae740(Obj* self, int add, int arg) {
    u32 lim = func_020ae8d0(self, func_020ae02c(self));
    self->timer += add;
    if (self->timer > lim) self->timer = lim;
    func_020ae648(self, arg);
    func_020ae778(self);
}

void func_020ae778(Obj* self) {
    D d;
    D t;
    int r4 = func_020ae888(self);
    if (func_02072e44(*(int*)data_020cbb18) != 0) return;
    if (func_020ae02c(self) >= r4) return;
    if (func_020aeac4(self)->flag != 0) return;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    func_0209d2c0(&d, 2);
    func_02116048(&d, &t, 8);
    func_0209d164(&t, 1);
    if (func_020aeb38(self, &t) != 0) func_0209d2c0(&d, 1);
    func_020aeac4(self)->flag = 1;
    u8 u;
    u = d.f;
    func_020aeac4(self)->c = u;
    u = d.e;
    func_020aeac4(self)->b = u;
    u = d.d;
    func_020aeac4(self)->a = u;
    func_0209d164(&d, 1);
    func_020aece4(d.e, d.d);
}

int func_020ae82c(Obj* self, int arg) {
    return func_020aef80(arg, self->items, self->mask, 0x25);
}

u16* func_020ae844(Obj* self, int idx, u16* p) {
    return func_020af034(idx, self->items, self->mask, 0x25, p);
}

int func_020ae860(Obj* self, int idx) {
    return func_020af0a4(idx, 0x25, self->mask);
}

void func_020ae870(Obj* self) {
    func_020af0c4(self->items, self->mask, 0x25);
}

int func_020ae880(int a) {
    return func_020aebbc(a);
}

int func_020ae888(Obj* self) {
    int t = func_020ae02c(self);
    if (t == 3) return t;
    if (self->timer >= func_020ae8d0(self, t)) {
        int r = func_020ae638(data_021ed104);
        if (t == 2) {
            if (r != 0) return t + 1;
        } else {
            return t + 1;
        }
    }
    return func_020ae02c(self);
}

u32 func_020ae8d0(Obj* self, int mode) {
    switch (mode) {
    case 0: return 0x61a8;
    case 1: return 0x15f90;
    case 2: return 0x3a980;
    default: return 0x3a980;
    }
}

int func_020ae8fc(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020ae920(self, &d);
}

int func_020ae920(Obj* self, D* d) {
    func_0209d2c0(d, 1);
    return func_020ae964(self, d);
}

int func_020ae940(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020ae964(self, &d);
}

int func_020ae964(Obj* self, D* d) {
    D t;
    if (func_020aeac4(self)->flag != 0) {
        ((u32*)&t)[0] = 0;
        ((u32*)&t)[1] = 0;
        t.f = func_020aeac4(self)->c;
        t.e = func_020aeac4(self)->b;
        t.d = func_020aeac4(self)->a;
        t.c = 6;
        t.b = 0;
        t.a = 0;
        t.g = 0;
        func_0209d164(&t, 1);
        if (t.f == d->f && t.e == d->e && t.d == d->d) return TRUE;
        return FALSE;
    }
    return FALSE;
}

int func_020ae9e0(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020aea04(self, &d);
}

int func_020aea04(Obj* self, D* d) {
    D t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    if (func_020aec74(&t) != 0) {
        if ((u32)(func_0209d3d0(&t, d, 0x3c) + 1) <= 1) return TRUE;
    }
    return FALSE;
}

Rgba func_020aea38(Obj* self) {
    Rgba r;
    D d;
    r.d = 0;
    r.a = r.d;
    r.b = r.a;
    r.c = r.b;
    if (func_020aeac4(self)->flag != 0) {
        ((u32*)&d)[0] = 0;
        ((u32*)&d)[1] = 0;
        d.f = func_020aeac4(self)->c;
        d.e = func_020aeac4(self)->b;
        d.d = func_020aeac4(self)->a;
        d.c = 6;
        d.b = 0;
        d.a = 0;
        d.g = 0;
        func_0209d164(&d, 1);
        r.c = d.f;
        r.b = d.e;
        r.a = d.d;
    }
    return r;
}

S4* func_020aeac4(Obj* self) {
    return &self->s;
}

BOOL func_020aeac8(Obj* self) {
    int z = 0;
    u32 i;
    for (i = 0; i < 0x25; i++) {
        u16 v = 0xfff1;
        u16* p = func_020ae844(self, i, &v);
        if (func_0204b2d4(p) != 0 && func_020626cc(p, z) == 4) return TRUE;
    }
    return FALSE;
}

int func_020aeb14(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020aeb38(self, &d);
}

int func_020aeb38(Obj* self, D* d) {
    if (func_0209e170(data_021d7350, 5) != 0 && self->date2[2] == d->f && self->date2[1] == d->e &&
        self->date2[0] == d->d)
        return TRUE;
    return FALSE;
}

BOOL func_020aeb80(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    int v = self->flags.v;
    if (v != 0) {
        if (d.c >= v && d.c < 0x17) return TRUE;
        return FALSE;
    }
    return FALSE;
}

}
