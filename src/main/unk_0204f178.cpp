#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020db984_Vec3 {
    s32 x, y, z;
};

struct Unk_0204f178_Item {
    u8 unk_00, unk_01, unk_02;
};

struct Unk_0204f178_Row {
    Unk_0204f178_Item *unk_00;
    u8 unk_04;
};

struct Unk_020db984_Ent {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x44];
    Unk_020db984_Vec3 unk_8c;
    u8 pad_98[0xb8];
    Unk_020db984_Vec3 unk_150;
    s16 unk_15c, unk_15e, unk_160;
    u8 pad_162[2];
    u32 unk_164;
    u8 unk_168;
    u8 unk_169;
    u8 pad_16a[2];
};

class Unk_020db984;

extern "C" {
u32 func_02063b8c(u32);
s32 func_02072e44(void *);
void func_0209c2d8(void *);
void func_0209c15c(void *);
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
void func_0204fcfc(void *);
void func_0209c15c(void *);
s32 func_0204fcb8(void);
s32 func_020565e8(void *, s32);
void func_0204f674(Unk_020db984_Ent *, Unk_020db984_Vec3 *);
void func_020547cc(void *, void *);
extern void *data_020cbb18;
extern Unk_0204f178_Row **data_020db3f0[];
extern u8 data_020ca314[];
extern u8 data_020ca318[];
extern s32 data_020db8b4;
extern Unk_020db984 *data_021c488c;
extern u8 data_020db94c[];
extern u8 data_020db94d[];
extern u32 data_020db950[];
extern u32 data_020db954[];
extern u8 data_020e416c;
}

class Unk_020db984 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    ~Unk_020db984();
    void func_0204fbec(s32);
    void func_0204f98c(Unk_020db984_Ent *);
    BOOL func_0204f738(void *, Unk_020db984_Ent *);
    BOOL func_0204f808(void *, Unk_020db984_Ent *);
    BOOL func_0204f874(void *, Unk_020db984_Ent *);

    Unk_020db984_Ent unk_50[4];
    u8 unk_600[0x18];
};

struct Unk_0204f98c_Mtx {
    s32 v[12];
};

extern "C" {
void *func_0209c25c(void *, void *);
s32 func_0209c0d0(void *, void *, const char *);
void *func_0209c0ac(void *);
void func_020555ec(void *, void *, s32);
void *func_0209c348(void *);
void *func_020641ec(void *, void *, s32, s32);
s32 func_021065dc(void);
s32 func_021065f8(s32, s32);
s32 func_02054800(void *, void *);
void func_02054720(void *, s32, s32, s32, s32, s32);
void func_02054710(void *);
void func_02106054(void *, s32, u32);
s32 func_0203ef38(void *, void *);
void func_020e8388(void *, s32, s32, s32);
void func_020e8434(void *, s32);
void func_020e8464(void *, s32, s32, s32);
void func_020e8404(void *, s32);
void func_020e83d4(void *, s32);
s32 func_020639e8(char *, const char *, ...);
extern char *data_020db8b0;
extern void *data_020db8ac;
extern char *data_020db8c0[];
extern char data_020db9cc[];
extern char data_020db9e4[];
extern char data_020db9fc[];
extern char data_020dba14[];
extern u8 data_021f47e0[];
}

extern "C" {
s32 func_0204f178(u32 *out0, u32 *out1, s32 a, s32 b, s32 c) {
    s32 lim;
    s32 sum = 0;
    s32 res = -1;
    s32 off;
    s32 i;
    if (func_02072e44(data_020cbb18)) {
        off = 3;
        lim = func_02063b8c(0x60);
    } else {
        off = 0;
        lim = func_02063b8c(0x64);
    }
    for (i = 0; i < data_020db3f0[b - 1][c][a].unk_04 - off; i++) {
        sum += data_020db3f0[b - 1][c][a].unk_00[i].unk_02;
        if (sum > lim) {
            res = i;
            break;
        }
    }
    if (res != -1) {
        *out0 = data_020db3f0[b - 1][c][a].unk_00[res].unk_00;
        *out1 = data_020db3f0[b - 1][c][a].unk_00[res].unk_01;
        return 1;
    }
    return 0;
}

u32 *func_0204f234(u32 id, s32 k) {
    if (id >= 1 && id <= 7) {
        return (u32 *)data_020db3f0 + (id - 1);
    }
    if (id == 8) {
        if (k == 0) return (u32 *)data_020db3f0 + (id - 1);
        if (k == 1) return (u32 *)data_020db3f0 + id;
        return 0;
    }
    if (id == 9) {
        if (k == 0) return (u32 *)data_020db3f0 + id;
        if (k == 1) return (u32 *)data_020db3f0 + (id + 1);
        return 0;
    }
    if (id >= 10 && id <= 12) {
        return (u32 *)data_020db3f0 + (id + 1);
    }
    return 0;
}
}


extern "C" {
u32 func_0204f334(u32 x) {
    if (x >= 0x3b) return 3;
    return data_020ca314[x * 6];
}

u32 func_0204f34c(u32 x) {
    if (x >= 0x38) return 10;
    return *(u16 *)(data_020ca318 + x * 6);
}

BOOL func_0204f364(s32 idx, s32 unused) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < data_020db8b4) {
        Unk_020db984_Ent *e = &data_021c488c->unk_50[idx];
        s32 t = e->unk_40;
        if (t < 0 || t >= 0x38) return FALSE;
        if (func_020565e8((u8 *)e + 0x134, unused)) r = TRUE;
    }
    return r;
}

void func_0204f3b4(s32 idx) {
    if (data_021c488c != NULL && idx >= 0 && idx < data_020db8b4) {
        data_021c488c->unk_50[idx].unk_44 = 4;
    }
}

BOOL func_0204f3e4(s32 idx, s32 id, Unk_020db984_Vec3 *pos, Unk_020db984_Vec3 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10) {
    BOOL r = FALSE;
    Unk_020db984 *g = data_021c488c;
    if (g != NULL && idx >= 0 && idx < data_020db8b4 && id >= 0 && id < 0x3c) {
        Unk_020db984_Ent *e = &g->unk_50[idx];
        e->unk_40 = id;
        Unk_020db984_Vec3 *d = &e->unk_8c;
        d->x = pos->x; d->y = pos->y; d->z = pos->z;
        Unk_020db984_Vec3 t;
        t.x = vec->x; t.y = vec->y; t.z = vec->z;
        func_0204f674(e, &t);
        e->unk_15c = a5;
        e->unk_15e = a6;
        e->unk_160 = a7;
        e->unk_168 = a8;
        e->unk_169 = a9;
        e->unk_164 = a10;
        r = TRUE;
    }
    return r;
}

s32 func_0204f49c(void) {
    return func_0204fcb8();
}

BOOL func_0204f4a4(u32 *a, u32 *b, u32 i) {
    if (i >= 4) return FALSE;
    *a = *(u32 *)((u8 *)data_020db950 + i * 12);
    *b = *(u32 *)((u8 *)data_020db954 + i * 12);
    return TRUE;
}

u32 func_0204f4c8(u32 i) {
    if (i >= 4) return 0xff;
    return data_020db94d[i * 12];
}

u32 func_0204f4e0(u32 i) {
    if (i >= 4) return 9;
    return data_020db94c[i * 12];
}

void func_0204f674(Unk_020db984_Ent *e, Unk_020db984_Vec3 *v) {
    e->unk_150.x = v->x;
    e->unk_150.y = v->y;
    e->unk_150.z = v->z;
}
}

extern "C" {
static inline BOOL Unk_0204f4f8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

void func_0204f4f8(u32 a, u32 b, s32 c, u32 d, u32 e) {
    if (a < 4 && c < 0x38) {
        switch (b) {
        case 0:
            data_020db94c[a * 12] = b;
            data_020db94d[a * 12] = c;
            *(u32 *)((u8 *)data_020db950 + a * 12) = d;
            *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            break;
        case 3:
            data_020db94c[a * 12] = b;
            break;
        case 1:
            if (Unk_0204f4f8_IsZero(data_020e416c)) {
                if (func_0204f4e0(a) == 3) {
                    data_020db94c[a * 12] = b;
                } else {
                    data_020db94c[a * 12] = 8;
                }
                data_020db94d[a * 12] = c;
                *(u32 *)((u8 *)data_020db950 + a * 12) = d;
                *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            } else {
                data_020db94c[a * 12] = 8;
                data_020db94d[a * 12] = c;
                *(u32 *)((u8 *)data_020db950 + a * 12) = d;
                *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            }
            break;
        case 2:
            if (Unk_0204f4f8_IsZero(data_020e416c)) {
                if (func_0204f4e0(a) == 3 || func_0204f4e0(a) == 8 || func_0204f4e0(a) == 1) {
                    data_020db94c[a * 12] = b;
                } else {
                    data_020db94c[a * 12] = 8;
                }
                data_020db94d[a * 12] = c;
                *(u32 *)((u8 *)data_020db950 + a * 12) = d;
                *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            } else {
                data_020db94c[a * 12] = 8;
                data_020db94d[a * 12] = c;
                *(u32 *)((u8 *)data_020db950 + a * 12) = d;
                *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            }
            break;
        case 4:
            data_020db94c[a * 12] = b;
            break;
        case 5:
            data_020db94c[a * 12] = b;
            break;
        case 8:
            data_020db94c[a * 12] = 8;
            data_020db94d[a * 12] = c;
            *(u32 *)((u8 *)data_020db950 + a * 12) = d;
            *(u32 *)((u8 *)data_020db954 + a * 12) = e;
            break;
        case 6:
        case 7:
        default:
            data_020db94c[a * 12] = b;
            break;
        }
    }
}
}

Unk_020db984::~Unk_020db984() {
    func_0209c2d8(unk_600);
    func_021355f0(unk_50, 4, 0x16c, (void *)func_0204fcfc);
}

BOOL Unk_020db984::vfunc_00() {
    return TRUE;
}

BOOL Unk_020db984::vfunc_0c() {
    for (s32 i = 0; i < data_020db8b4; i++) {
        func_0204fbec(i);
    }
    func_0209c15c(unk_600);
    data_021c488c = NULL;
    return TRUE;
}

BOOL Unk_020db984::vfunc_24() {
    Unk_020db984 *g = data_021c488c;
    if (g == NULL) return FALSE;
    Unk_020db984_Ent *e = g->unk_50;
    for (s32 i = 0; i < data_020db8b4; e++, i++) {
        if (e->unk_44 == 3) {
            Unk_020db984_Vec3 v;
            v.x = e->unk_150.x;
            v.y = e->unk_150.y;
            v.z = e->unk_150.z;
            func_020547cc((u8 *)e + 0x98, &v);
        }
    }
    return TRUE;
}

BOOL Unk_020db984::func_0204f738(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = func_0209c25c(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (func_0209c0d0(y, x, data_020db8b0)) {
        u8 *m = (u8 *)e + 0x98;
        func_020555ec(m, func_0209c0ac(y), r);
        void *t = func_0209c348(x);
        func_020641ec(data_020db8ac, t, 4, r);
        s32 u = func_021065f8(func_021065dc(), r);
        if (func_02054800(m, t)) {
            func_02054720(m, u, r, 0x1000, 1, r);
            func_02054710(m);
            e->unk_44 = 3;
            func_0204f98c(e);
            if (id == 0x3b) {
                func_02106054(func_0209c0ac(y), r, e->unk_164);
            }
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020db984::func_0204f808(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = func_0209c25c(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (func_0209c0d0(y, x, data_020db8c0[id - 0x38])) {
        func_020555ec((u8 *)e + 0x98, func_0209c0ac(y), r);
        e->unk_44 = 3;
        func_0204f98c(e);
        r = TRUE;
    }
    return r;
}

BOOL Unk_020db984::func_0204f874(void *p, Unk_020db984_Ent *e) {
    BOOL r = FALSE;
    char buf[0x18];
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = func_0209c25c(p, (u8 *)e + 0x48);
    void *t;
    void *y = (u8 *)e + 0x4c;
    s32 q = id / 16;
    if (id < 10) {
        func_020639e8(buf, data_020db9cc, q, id);
    } else {
        func_020639e8(buf, data_020db9e4, q, id);
    }
    if (func_0209c0d0(y, x, buf)) {
        u8 *m = (u8 *)e + 0x98;
        func_020555ec(m, func_0209c0ac(y), 0);
        t = func_0209c348(x);
        if (id < 10) {
            func_020639e8(buf, data_020db9fc, q, id);
        } else {
            func_020639e8(buf, data_020dba14, q, id);
        }
        func_020641ec(buf, t, 4, 0);
        s32 u = func_021065f8(func_021065dc(), 0);
        s32 flag = 0x1000;
        if (e->unk_168 == 0) flag = 0;
        if (func_02054800(m, t)) {
            func_02054720(m, u, 0, flag, 1, 0);
            func_02054710(m);
            e->unk_44 = 3;
            func_0204f98c(e);
            r = TRUE;
        }
    }
    return r;
}

void Unk_020db984::func_0204f98c(Unk_020db984_Ent *e) {
    u8 *m = (u8 *)e + 0x98;
    s32 id = e->unk_40;
    Unk_020db984_Vec3 v;
    Unk_020db984_Vec3 o;
    s32 ang;
    Unk_020db984_Vec3 *pv = &e->unk_8c;
    v.x = pv->x; v.y = pv->y; v.z = pv->z;
    s32 mode = *(s32 *)((u8 *)this + 8);
    if (mode == 0) {
        ang = func_0203ef38(&o, &v);
    } else if (mode == 1) {
        ang = 0;
        o = v;
    }
    func_020e8388(data_021f47e0, o.x, o.y, o.z);
    func_020e8434(data_021f47e0, ang);
    if (id != 0xf) {
        func_020e8464(data_021f47e0, e->unk_15c, e->unk_15e, e->unk_160);
    } else {
        func_020e8404(data_021f47e0, e->unk_15e);
        func_020e83d4(data_021f47e0, e->unk_160);
        func_020e8434(data_021f47e0, e->unk_15c);
    }
    *(Unk_0204f98c_Mtx *)(m + 0x64) = *(Unk_0204f98c_Mtx *)data_021f47e0;
}
