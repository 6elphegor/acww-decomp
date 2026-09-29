#include "types.h"

struct Unk_02098ff4 {
    u16 unk_00;
    u8 unk_02;
};

struct Unk_020030d8_R256 {
    u8 pad[0xc];
};

class Unk_02002fc8 {
public:
    u32 func_020030b4();
};

struct Unk_020994cc_Ent {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a[0xc];
};

struct Unk_020994cc_Date {
    u32 v;
};

struct Unk_02099868_Cls {
    u8 pad_00[0x5c];
    u16 unk_5c;
    u8 unk_5e[8];
    u8 pad_66;
    u8 unk_67;
    BOOL func_02099c1c();
    BOOL func_02099868(Unk_02002fc8 *p);
};

class Unk_020994cc {
public:
    u8 unk_00[0xc];
    Unk_020030d8_R256 unk_0c;
    Unk_020994cc_Ent unk_18[5];
    u8 unk_86[4];
    u8 unk_8a[4];
    u8 unk_8e;
    Unk_020994cc_Ent *func_020994cc();
    BOOL func_02099624(Unk_020994cc_Date *d);
    BOOL func_02099668();
    void func_02099678(Unk_020994cc_Ent *e);
    BOOL func_02099690();
    BOOL func_020996b0(Unk_020994cc_Ent *e);
    Unk_020994cc_Ent *func_02099700();
    Unk_020994cc_Ent *func_02099710(u32 i);
    void func_02099724(Unk_020030d8_R256 *a, u8 *b);
    Unk_020030d8_R256 *func_02099788();
    Unk_020994cc *func_020997fc();
    Unk_020994cc *func_02099828();
    void func_0209978c();
    void func_02099790();
    u8 *func_02099864();
};

extern "C" {
void *func_0209750c();
void *func_02098750(void *);
s32 func_02097edc(void *);
s32 func_02097e0c(void *);
s32 func_02097e34(void *);
BOOL func_02097e98(void *, s32);
u16 *func_02097f6c(void *, s32);
BOOL func_02097f94(s32);
void func_02097f30(void *, u16 *, s32, s32);
s32 func_0204bb18(u16 *);
void func_02061478(u16 *, u16 *);
void func_0203c42c(void *, u16 *, s32, s32);
void *func_020986c8(void *);
void func_0206338c(void *, u32, u32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, u32, u32, u32, u32, u32);
s32 func_01ffcb0c(s32, s32);
s32 func_01ffc4c8(s32);
void *func_02115fb4(void *, s32, u32);
s32 func_02128930(void *, void *, u32);
s32 func_02116048(void *, void *, u32);
s32 func_02063b8c(u32);
BOOL func_02094218(void *);
BOOL func_020941e8(void *, void *);
void func_02094294(void *);
s32 func_020942b8(void *, void *);
void *func_020942c8(void *);
void *func_020942f8(void *);
s32 func_0209cd00(void *, void *);
s32 func_0209cf88(void *);
void func_020030d8(void *, void *);
void func_020030e8(void *);
void *func_02003100(void *);
void *func_02003130(void *);
void func_0209ad54(void *, u32, u16 *, u32);
void func_0209ad80(void *);
void *func_0209ada0(void *);
void *func_0209ada4(void *);
void *__cxa_vec_ctor(void *, s32, s32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, s32, s32, void *(*)(void *));
s32 func_020994ac(u32, u8 *, s32);
extern u8 data_020d0598[];
extern u8 data_020d05a0[];
}

static inline BOOL Unk_02099124_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" {

void func_02098ff4(Unk_02098ff4 *p);
s32 func_02098ffc();
s32 func_0209909c(u16 *a, s32 b, s32 c);
s32 func_02099160(u16 *a, s32 b);
u16 func_020991b0();

s32 func_02098f90(Unk_02098ff4 *self, s32 v) {
    void *r7 = func_0209750c();
    s32 i;
    func_02098ff4(self);
    u16 *tbl = func_02097f6c(func_02098750(r7), 0);
    for (i = 0; i < 15; i++) {
        if (func_02097e98(func_02098750(r7), i)) {
            if (v == func_0204bb18(tbl + i)) {
                self->unk_00 |= (1 << i);
                self->unk_02++;
            }
        }
    }
    return self->unk_02;
}

void func_02098ff4(Unk_02098ff4 *p) {
    p->unk_02 = 0;
    p->unk_00 = 0;
}

s32 func_02098ffc() {
    return func_02097edc(func_02098750(func_0209750c()));
}

BOOL func_02099014(u16 *a, s32 b) {
    u16 t;
    s32 r = func_02098ffc();
    if (r != -1) {
        func_02061478(&t, a);
        func_0209909c(&t, b, r);
        return TRUE;
    }
    return FALSE;
}

u16 func_02099048(s32 i) {
    return *func_02097f6c(func_02098750(func_0209750c()), i);
}

void func_02099064(s32 c) {
    void *r4 = func_0209750c();
    if (func_02097f94(c)) {
        u16 t = 0xfff1;
        func_02097f30(func_02098750(r4), &t, c, 0);
    }
}

s32 func_0209909c(u16 *a, s32 b, s32 c) {
    void *r6 = func_0209750c();
    if (func_02097f94(c)) {
        if (*a != 0xfff1 && b == 0) {
            func_0203c42c(func_020986c8(r6), a, 0, 1);
        }
        if (b == 0) {
            if (Unk_02099124_R(a, 0x151f, 0x151f)) {
                u16 t = 0x1033;
                func_0203c42c(func_020986c8(r6), &t, 0, 1);
            }
        }
        func_02097f30(func_02098750(r6), a, c, b);
    }
}

BOOL func_02099124(u16 *a) {
    s32 r = func_02098ffc();
    if (r == -1) return FALSE;
    if (*a == 0xfff1) return TRUE;
    if (*a >= 0xa7 && *a <= 0xc6) return TRUE;
    func_02099160(a, r);
    return TRUE;
}

s32 func_02099160(u16 *a, s32 b) {
    u16 v[2];
    BOOL r = FALSE;
    v[0] = 0xfff1;
    if (*a == 0x156b) {
        v[0] = func_020991b0();
        r = TRUE;
    } else {
        func_02061478(&v[1], a);
        v[0] = v[1];
    }
    func_0209909c(v, r, b);
}

u16 func_020991b0() {
    u16 out[2];
    u8 obj[0xc];
    func_0206338c(obj, 0, 3);
    func_02062f94(out, obj, 0, 0, 1, 1, 0);
    func_02063388(obj);
    return out[0];
}

s32 func_020991e4() {
    return func_02097e0c(func_02098750(func_0209750c()));
}

s32 func_020991fc() {
    return func_02097e34(func_02098750(func_0209750c()));
}

void func_02099214() {
}

void func_02099218(s32 *a, s32 *b, s32 *out) {
    s32 o0, o1, o2, o3;
    o3 = func_01ffcb0c(a[3], b[3]) - func_01ffcb0c(a[0], b[0]) - func_01ffcb0c(a[1], b[1]) - func_01ffcb0c(a[2], b[2]);
    o0 = func_01ffcb0c(a[1], b[2]) + (func_01ffcb0c(a[3], b[0]) + func_01ffcb0c(a[0], b[3])) - func_01ffcb0c(a[2], b[1]);
    o1 = func_01ffcb0c(a[2], b[0]) + (func_01ffcb0c(a[3], b[1]) + func_01ffcb0c(a[1], b[3])) - func_01ffcb0c(a[0], b[2]);
    o2 = func_01ffcb0c(a[0], b[1]) + (func_01ffcb0c(a[3], b[2]) + func_01ffcb0c(a[2], b[3])) - func_01ffcb0c(a[1], b[0]);
    out[0] = o0;
    out[1] = o1;
    out[2] = o2;
    out[3] = o3;
}

}

extern "C" {

void func_02099318(s32 *a, s32 *m);

void func_02099300(s32 *a, s32 *b) {
    func_02099318(a, b);
    b[9] = 0;
    b[10] = 0;
    b[11] = 0;
}

void func_02099318(s32 *a, s32 *m) {
    s32 xx = func_01ffcb0c(a[0], a[0]);
    s32 xy = func_01ffcb0c(a[0], a[1]);
    s32 xz = func_01ffcb0c(a[0], a[2]);
    s32 zz = func_01ffcb0c(a[2], a[2]);
    s32 zy = func_01ffcb0c(a[2], a[1]);
    s32 yy = func_01ffcb0c(a[1], a[1]);
    s32 wx = func_01ffcb0c(a[3], a[0]);
    s32 wy = func_01ffcb0c(a[3], a[1]);
    s32 wz = func_01ffcb0c(a[3], a[2]);
    m[0] = 0x1000 - 2 * (yy + zz);
    m[1] = 2 * (xy + wz);
    m[2] = 2 * (xz - wy);
    m[3] = 2 * (xy - wz);
    m[4] = 0x1000 - 2 * (xx + zz);
    m[5] = 2 * (zy + wx);
    m[6] = 2 * (wy + xz);
    m[7] = 2 * (zy - wx);
    m[8] = 0x1000 - 2 * (xx + yy);
}

#pragma thumb off
void func_020993dc(s32 *q) {
    s64 sum = (s64)q[0] * q[0];
    sum += (s64)q[1] * q[1];
    sum += (s64)q[2] * q[2];
    sum += (s64)q[3] * q[3];
    s32 len = func_01ffc4c8((s32)(sum >> 12));
    q[0] = (s32)(((s64)len * q[0] + 0x800) >> 12);
    q[1] = (s32)(((s64)len * q[1] + 0x800) >> 12);
    q[2] = (s32)(((s64)len * q[2] + 0x800) >> 12);
    q[3] = (s32)(((s64)len * q[3] + 0x800) >> 12);
}
#pragma thumb reset

s32 func_0209948c(u32 v) {
    return func_020994ac(v, data_020d0598, 4);
}

s32 func_0209949c(u32 v) {
    return func_020994ac(v, data_020d05a0, 4);
}

s32 func_020994ac(u32 v, u8 *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (v >= *tbl) return i;
        tbl++;
    }
    return n;
}

}

Unk_020994cc_Ent *Unk_020994cc::func_020994cc() {
    u8 counts[5];
    s32 mask;
    s32 i, j, k;
    s32 grp, f1, f2;
    Unk_020994cc_Ent *pi, *e;
    u8 *cnt;
    s32 off;
    if (!func_02099668()) goto ret0;
    mask = 0;
    func_02115fb4(counts, 0, 5);
    for (i = 0; i < 5; i++) {
        if ((mask >> i) & 1) continue;
        e = unk_18 + i;
        if (!func_02094218(e)) continue;
        grp = 0;
        mask |= 1 << i;
        mask = (u8)mask;
        cnt = &counts[i];
        counts[i] = 1;
        j = i + 1;
        pi = (Unk_020994cc_Ent *)((u8 *)this + i * 0x16);
        for (; j < 5; j++) {
            f1 = 0;
            f2 = 0;
            off = j;
            off = off * 0x16;
            if (*(u16 *)((u8 *)pi + 0x18) == *(u16 *)((u8 *)this + off + 0x18)) {
                if (func_02128930(e->unk_02, ((Unk_020994cc_Ent *)((u8 *)unk_18 + off))->unk_02, 8) == 0) f2 = 1;
            }
            if (f2 && func_020941e8(e, (Unk_020994cc_Ent *)((u8 *)unk_18 + off))) f1 = 1;
            if (f1) {
                grp |= 1 << j;
                grp = (u8)grp;
                mask |= 1 << j;
                mask = (u8)mask;
                (*cnt)++;
            }
        }
        if (grp) {
            for (k = i + 1; k < 5; k++) {
                if ((grp >> k) & 1) counts[k] = *cnt;
            }
        }
    }
    if (mask) {
        u8 *cp = counts;
        s32 maxc = 0;
        s32 best = -1;
        for (i = 0; i < 5; cp++, i++) {
            s32 c = *cp;
            if (c > maxc) {
                maxc = c;
                best = i;
            } else if (c != 0) {
                if (c == maxc) best = i;
            }
        }
        if ((u32)best < 5) return &unk_18[best];
    }
ret0:
    return NULL;
}

BOOL Unk_020994cc::func_02099624(Unk_020994cc_Date *d) {
    Unk_020994cc_Date local;
    if (d == NULL) {
        func_0209cf88(&local);
        d = &local;
    }
    if (func_02099668()) {
        s32 r = func_0209cd00(d, unk_8a);
        if (r >= 0 && r < 3) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_020994cc::func_02099668() {
    if (unk_8e == 5) return TRUE;
    return FALSE;
}

void Unk_020994cc::func_02099678(Unk_020994cc_Ent *e) {
    Unk_020994cc_Ent *p = func_02099700();
    if (p) func_020942b8(p, e);
}

BOOL Unk_020994cc::func_02099690() {
    Unk_020994cc_Ent *p = func_02099700();
    if (p && func_02094218(p)) return TRUE;
    return FALSE;
}

BOOL Unk_020994cc::func_020996b0(Unk_020994cc_Ent *e) {
    if (func_02094218(e)) {
        Unk_020994cc_Ent *p = unk_18;
        s32 i;
        for (i = 0; i < 5; i++) {
            if (e->unk_00 == p->unk_00 && func_02128930(e->unk_02, p->unk_02, 8) == 0 && func_020941e8(e, p)) return TRUE;
        }
    }
    return FALSE;
}

Unk_020994cc_Ent *Unk_020994cc::func_02099700() {
    return func_02099710(unk_8e);
}

Unk_020994cc_Ent *Unk_020994cc::func_02099710(u32 i) {
    if (i < 5) return &unk_18[i];
    return NULL;
}

void Unk_020994cc::func_02099724(Unk_020030d8_R256 *a, u8 *b) {
    u16 v;
    func_02099790();
    func_020030d8(&unk_0c, a);
    v = 0x155e;
    func_0209ad54(this, 9, &v, 0);
    func_02116048(b, unk_86, 4);
    func_02116048(b, unk_8a, 4);
    unk_8a[3] = 1;
    unk_8e = func_02063b8c(2) + 1;
}

Unk_020030d8_R256 *Unk_020994cc::func_02099788() {
    return &unk_0c;
}

void Unk_020994cc::func_0209978c() {
}

void Unk_020994cc::func_02099790() {
    s32 i;
    func_0209ad80(this);
    func_020030e8(&unk_0c);
    for (i = 0; i < 5; i++) func_02094294(&unk_18[i]);
    unk_86[0] = 1;
    unk_86[1] = 1;
    unk_86[2] = 0;
    unk_86[3] = 0;
    unk_8a[0] = 1;
    unk_8a[1] = 1;
    unk_8a[2] = 0;
    unk_8a[3] = 0;
    unk_8e = 5;
}

Unk_020994cc *Unk_020994cc::func_020997fc() {
    __cxa_vec_cleanup(unk_18, 5, 0x16, func_020942c8);
    func_02003100(&unk_0c);
    func_0209ada0(this);
    return this;
}

Unk_020994cc *Unk_020994cc::func_02099828() {
    func_0209ada4(this);
    func_02003130(&unk_0c);
    __cxa_vec_ctor(unk_18, 5, 0x16, func_020942f8, func_020942c8);
    func_02099790();
    return this;
}

u8 *Unk_020994cc::func_02099864() {
    return (u8 *)this + 0x78;
}
