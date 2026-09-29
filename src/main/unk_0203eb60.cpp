#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203eb78_Entry {
    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15[7];
};

struct Unk_0203ebdc_List {
    /* 0x00 */ Unk_0203eb78_Entry *head;
};

struct Unk_0203ec0c {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

struct Unk_0203ed90 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s16 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_0203ecec_Global {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

struct Unk_0203ef38_Global {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ volatile s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_0203f408_Entry {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

union Unk_0203f218_Ver {
    u32 word;
    u8 b[4];
};

struct Unk_0203f218_Date {
    u8 b[8];
};

struct Unk_0203f218_Slot {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04[0x18];
};

extern "C" {
extern Unk_0203f218_Slot data_020d9744[99];
extern s32 (*data_020d96d4[])(u8 *, s32);
extern Unk_0203eb78_Entry data_021c39f0[15];
extern u8 data_021e87d8[];
extern s32 data_021c3070;
extern Unk_0203ecec_Global *data_021ef2f0;
extern s32 data_021c3b94;
extern Unk_0203ef38_Global data_021c3ba4;
extern s16 data_02135f44[];
extern u32 data_020cbb18;
extern s32 data_021c3bbc;
extern u8 data_021c4890[];
extern Unk_0203f408_Entry data_021c3bdc[7];
extern u8 data_021c3bd8[];

s32 func_02115fb4(void *dst, s32 v, s32 n);
void func_02116048(void *src, void *dst, s32 n);
s32 func_020e79a0(void *list, void *node);
void func_02065cd4(void *p);
void func_02065cc8(void *p);
void func_02065e70(void *p, void *q);
void func_02065ba4(void *p, s32 q);
void func_02065ac0(void *p);
s32 func_0209750c(void);
s32 func_02097980(s32 p);
s32 func_02098878(s32 p);
s32 func_02096acc(void *p, s32 a, s32 b);
s32 func_02097954(s32 p, s32 v);
s32 func_020771e4(void *p);
s32 func_020771d8(void *p, s32 v);
s32 func_02076f88(void *p);
s32 func_0203bc7c(void);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc538(s32 a);
s32 func_020e7b98(s32 a, s32 b);
u32 func_0203efec(u32 x);
u8 *func_02098314(s32 p);
s32 func_0203f048(u32 id);
s32 func_0203f100(u8 *p, s32 i);
s32 func_0203f0fc(u8 *p, s32 i, u32 v);
s32 func_020a032c(void);
s32 func_02098044(s32 p, s32 v);
s32 func_02072e44(u32 v);
s32 func_0203f4c0(s32 v);
s32 func_0204ff6c(void *p);
s32 func_0203f484(void *p);
s32 func_02040264(s32 v);
s32 func_020400b0(void);
s32 func_0203f14c(void);
void func_0203f52c(void *out, void *in, s32 v);
s32 func_0209d374(void *a, void *b);
void func_0209d498(void *a);
s32 func_0209d3a4(void *a, void *b);
u32 func_0209ceac(u32 v, u32 a, u32 b);
void func_0203f7cc(void *a, s32 n);
s32 func_0203f600(Unk_0203f408_Entry *out, Unk_0203f218_Slot *e, u32 v, Unk_0203f218_Ver w);
s32 func_0203f69c(Unk_0203f218_Slot *e, Unk_0203f218_Ver w, Unk_0203f408_Entry *tmp, Unk_0203f408_Entry *out, s32 n, s32 x, s32 y);
void func_0203f678(Unk_0203f408_Entry *tmp, Unk_0203f218_Ver w);
s32 func_0203f31c(s32 a, u8 *b, s32 c);
s32 func_0203f3a0(s32 a, u8 *b, Unk_0203f408_Entry *c);
Unk_0203f408_Entry *func_0203f408(u32 id, Unk_0203f408_Entry *tbl);
}

static inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" {

s32 func_0203eb60(u8 *p, s32 x) {
    data_020d96d4[*p](p, x);
}

Unk_0203eb78_Entry *func_0203eb78(void) {
    for (s32 i = 0; i < 15; i++) {
        Unk_0203eb78_Entry *e = &data_021c39f0[i];
        if (IsZero(e->unk_14)) {
            return e;
        }
    }
    return NULL;
}

void func_0203ec00(Unk_0203eb78_Entry *e) {
    e->unk_14 = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
}

void func_0203ebb0(void) {
    for (s32 i = 0; i < 15; i++) {
        func_0203ec00(&data_021c39f0[i]);
    }
    func_02115fb4(data_021c39f0, 0, 15);
}

void func_0203ebdc(Unk_0203ebdc_List *l) {
    Unk_0203eb78_Entry *p = l->head;
    while (p) {
        Unk_0203eb78_Entry *next = *(Unk_0203eb78_Entry **)((u8 *)p + 4);
        func_020e79a0(l, p);
        func_0203ec00(p);
        p = next;
    }
}

void func_0203ec0c(Unk_0203ec0c *p) {
    p->unk_00 = 0;
    p->unk_04 = 0;
    p->unk_08 = 0xff;
}

BOOL func_0203ec18(u8 *p) {
    u8 *g = data_021e87d8;
    u32 v = *(u16 *)(p + 0xc0);
    if (v != func_020771e4(g)) {
        func_020771d8(g, v);
        func_02076f88(p);
        return TRUE;
    }
    return FALSE;
}

u8 *func_0203ec4c(u8 *p) { return p + 0xc2; }
void func_0203ec50(void) {}
void func_0203ec54(void) {}

BOOL func_0203ec58(u8 *p) {
    u8 l[0xf8];
    func_02065cd4(l);
    s32 h = func_0209750c();
    if (*(u16 *)(p + 0xf4) != func_02097980(h)) {
        func_02065e70(l, p);
        s32 q = func_02098878(h);
        func_02065ba4(l, q);
        func_02065ac0(l);
        if (func_02096acc(l, q, 0)) {
            func_02097954(h, *(u16 *)(p + 0xf4));
            func_02065cc8(l);
            return TRUE;
        }
    }
    func_02065cc8(l);
    return FALSE;
}

u8 *func_0203ecc8(u8 *p) { return p + 0xf6; }

void *func_0203eccc(void *p) {
    func_02065cc8(p);
    return p;
}

void *func_0203ecdc(void *p) {
    func_02065cd4(p);
    return p;
}

void func_0203ecec(Unk_0203ed90 *o, Unk_0203ed90 *in) {
    o->unk_00 = in->unk_00;
    o->unk_04 = in->unk_04;
    o->unk_08 = in->unk_08;
    if (data_021c3070) {
        s32 v = func_0203bc7c();
        if (v > 0x27f7) {
            v = 0x27f7;
        } else if (v < 0x21fd) {
            v = 0x21fd;
        }
        o->unk_10 = func_01ffcb0c(-0x2c00, func_01ffc5a4((v - 0x27f7) << 12, (s32)0xffa06000)) + 0xe000;
    }
    if (IsOne(data_021ef2f0->unk_04)) {
        o->unk_0c = (func_01ffc5a4(o->unk_08, data_021c3b94) * 0x2999) >> 12;
    } else {
        o->unk_0c = 0;
    }
}

void func_0203ed8c(void) {}

Unk_0203ed90 *func_0203ed90(Unk_0203ed90 *o) {
    o->unk_00 = 0;
    o->unk_04 = 0;
    o->unk_08 = 0;
    o->unk_0c = 0;
    o->unk_14 = func_01ffc5a4(0x1000, 0xa000);
    o->unk_10 = 0xe000;
    return o;
}

s32 func_0203edc0(void) { return 0x1f576; }
s32 func_0203edc8(void) { return 0x2999; }

s16 func_0203edd0(Unk_0203ed90 *o) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 a = func_01ffcb0c(o->unk_08, o->unk_08);
        s32 b = func_01ffcb0c(o->unk_04, o->unk_04);
        s32 c = func_01ffcb0c(0x1f576, 0x1f576);
        s32 r = func_01ffc538(b + a - c);
        s32 x = func_020e7b98(o->unk_08, o->unk_04);
        s32 y = func_020e7b98(r, 0x1f576);
        return x - y;
    }
    return 0;
}

s32 func_0203ee38(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 ang = func_020e7b98(in->unk_08, in->unk_04);
        out->unk_00 = in->unk_00;
        s32 a = func_01ffcb0c(in->unk_08, in->unk_08);
        s32 b = func_01ffcb0c(in->unk_04, in->unk_04);
        out->unk_04 = func_01ffc538(b + a) - 0x1f576;
        out->unk_08 = func_0203efec(ang);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

s32 func_0203eeac(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 base = in->unk_04 + 0x1f576;
        s32 ang = (func_01ffc5a4(in->unk_08, data_021c3b94) * 0x2999) << 4 >> 16;
        out->unk_00 = in->unk_00;
        s32 idx = (u16)ang >> 4;
        out->unk_04 = func_01ffcb0c(base, data_02135f44[idx * 2 + 1]);
        out->unk_08 = func_01ffcb0c(base, data_02135f44[idx * 2]);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

s32 func_0203ef38(Unk_0203ed90 *out, Unk_0203ed90 *in) {
    if (IsOne(data_021ef2f0->unk_04)) {
        s32 base = in->unk_04 + 0x1f576;
        if (in->unk_08 <= data_021c3ba4.unk_08 - data_021c3ba4.unk_10) {
            s32 t = in->unk_08 - (data_021c3ba4.unk_08 - data_021c3ba4.unk_10);
            if (t < 0) {
                t = -t;
            }
            base -= func_01ffcb0c(data_021c3ba4.unk_14, t);
        }
        s32 ang = (func_01ffc5a4(in->unk_08, data_021c3b94) * 0x2999) << 4 >> 16;
        out->unk_00 = in->unk_00;
        s32 idx = (u16)ang >> 4;
        out->unk_04 = func_01ffcb0c(base, data_02135f44[idx * 2 + 1]);
        out->unk_08 = func_01ffcb0c(base, data_02135f44[idx * 2]);
        return ang;
    }
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    out->unk_08 = in->unk_08;
    return 0;
}

#pragma thumb off
u32 func_0203efec(u32 x) {
    s32 v = func_01ffc5a4((x & 0xffff) << 12, 0x10000000);
    return (s32)(((s64)v * 0xc4ec6 + 0x800) >> 12);
}
#pragma thumb on

s32 func_0203f048(u32 id) {
    u8 *p = func_02098314(func_0209750c());
    for (s32 i = 0; i < 4; i++) {
        if (id == (u32)func_0203f100(p, i)) {
            return i;
        }
    }
    return -1;
}

s32 func_0203f07c(s32 i) { return func_0203f100(func_02098314(func_0209750c()), i); }

void func_0203f094(s32 i, s32 v) { func_0203f0fc(func_02098314(func_0209750c()), i, v); }

s32 func_0203f0b4(void) { return func_0203f048(0xff); }

s32 func_0203f0c0(void) {
    u8 *p; s32 i, n;
    p = func_02098314(func_0209750c());
    n = 0;
    for (i = 0; i < 4; i++) {
        if (func_0203f100(p, i) != 0xff) {
            n++;
        }
    }
    return n;
}

void func_0203f0ec(u8 *p) {
    for (s32 i = 0; i < 4; i++) {
        p[i] = 0xff;
    }
}

s32 func_0203f0fc(u8 *p, s32 i, u32 v) { p[i] = v; }
s32 func_0203f100(u8 *p, s32 i) { return p[i]; }

}

class Unk_020d96fc : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020d96fc();
};

BOOL Unk_020d96fc::vfunc_00() {
    if (func_02072e44(data_020cbb18) == 0) {
        if (data_021c3bbc) {
            func_0203f4c0(0);
        }
        data_021c3bbc = 0;
    } else {
        func_0203f4c0(0);
        data_021c3bbc = 1;
    }
    return TRUE;
}

BOOL Unk_020d96fc::vfunc_0c() { return TRUE; }
BOOL Unk_020d96fc::vfunc_24() { return TRUE; }

BOOL Unk_020d96fc::vfunc_18() {
    if (func_0204ff6c(data_021c4890) != 3) {
        func_02040264(func_0203f484(this));
    }
    return TRUE;
}

Unk_020d96fc::~Unk_020d96fc() {}

extern "C" {

BOOL func_0203f14c(void) {
    BOOL r = FALSE;
    if (func_020a032c()) {
        r = TRUE;
    } else {
        s32 p = func_0209750c();
        if (p == 0 || func_02098044(p, 1) != 0) {
            r = TRUE;
        }
    }
    return r;
}

Unk_0203f408_Entry *func_0203f408(u32 id, Unk_0203f408_Entry *e) {
    Unk_0203f408_Entry *r = NULL;
    for (s32 i = 0; i < 7; e++, i++) {
        if (e->unk_00 == id) {
            r = e;
            break;
        }
    }
    return r;
}

void func_0203f1e8(s32 *a, s32 *b, u32 id) {
    Unk_0203f408_Entry *e = func_0203f408(id, data_021c3bdc);
    if (e) {
        *a = e->unk_04;
        *b = e->unk_08;
    } else {
        *a = 1;
        *b = 1;
    }
}

Unk_0203f408_Entry *func_0203f2d8(void) { return data_021c3bdc; }

s32 func_0203f2e0(s32 a, void *b, s32 c) {
    s32 r = 0;
    u8 buf[8];
    if (func_020400b0() == 0) {
        func_02116048(b, buf, 8);
        r = func_0203f31c(a, buf, c);
        if (r == 1) {
            r = 0;
        }
    }
    return r;
}


s32 func_0203f218(Unk_0203f408_Entry *out, s32 n, u8 *p) {
    u32 p5;
    Unk_0203f218_Ver w;
    Unk_0203f408_Entry tmp;
    Unk_0203f218_Slot *e;
    s32 cnt;
    s32 zero;
    cnt = 0;
    p5 = p[5];
    w.b[3] = p[4];
    w.b[2] = p[3];
    w.b[1] = 0xc;
    w.b[0] = func_0209ceac(p5, p[4], p[3]);
    func_0203f7cc(out, n);
    zero = 0;
    e = data_020d9744;
    for (s32 i = 0; i < 99; e++, i++) {
        if (e->unk_02 == 5) {
            continue;
        }
        if (func_0203f600(&tmp, e, p5, w) == 0) {
            continue;
        }
        if (tmp.unk_04 >= w.word) {
            continue;
        }
        if (tmp.unk_08 <= w.word) {
            continue;
        }
        if (func_0203f69c(e, w, &tmp, out, cnt, 1, zero) != 0) {
            continue;
        }
        func_0203f678(&tmp, w);
        out[cnt].unk_00 = tmp.unk_00;
        out[cnt].unk_02 = tmp.unk_02;
        out[cnt].unk_04 = tmp.unk_04;
        out[cnt].unk_08 = tmp.unk_08;
        cnt++;
        if (cnt == n) {
            break;
        }
    }
    return cnt;
}

s32 func_0203f31c(s32 a, u8 *p, s32 c) {
    s32 r = 0;
    u8 d1[8];
    u8 d2[8];
    u8 d3[8];
    u8 tbl[0x58];
    if (p[5] == data_021c3bd8[2] && p[4] == data_021c3bd8[1] && p[3] == data_021c3bd8[0]) {
        if (c != 0 || func_0203f14c() == 0) {
            func_02116048(p, d1, 8);
            r = func_0203f3a0(a, d1, data_021c3bdc);
        }
    } else {
        func_02116048(p, d2, 8);
        func_0203f52c(tbl, d2, 0);
        func_02116048(p, d3, 8);
        r = func_0203f3a0(a, d3, (Unk_0203f408_Entry *)tbl);
    }
    return r;
}

union Unk_0203f3a0_L {
    u32 w[3];
    u8 b[12];
};

s32 func_0203f3a0(s32 a, u8 *p, Unk_0203f408_Entry *tbl) {
    s32 r = 0;
    Unk_0203f408_Entry *e = func_0203f408(a, tbl);
    if (e) {
        Unk_0203f3a0_L l;
        u32 z = 0;
        l.w[0] = z;
        l.b[3] = p[4];
        l.b[2] = p[3];
        l.b[1] = p[2];
        u32 lim = e->unk_04;
        if (lim <= l.w[0]) {
            l.w[1] = z;
            l.w[2] = z;
            l.w[1] = z;
            l.w[2] = z;
            l.b[9] = p[5];
            l.b[8] = ((u8 *)e)[0xb];
            l.b[7] = ((u8 *)e)[0xa];
            l.b[6] = ((u8 *)e)[9];
            s32 v = func_0209d374(p, &l.w[1]);
            if (v > 0) {
                if (v <= 5) {
                    r = 3;
                } else {
                    r = 2;
                }
            }
        } else {
            r = 1;
        }
    }
    return r;
}

union Unk_0203f42c_L {
    u32 w[4];
    u8 b[16];
};

s32 func_0203f42c(u32 id) {
    s32 r = -1;
    Unk_0203f408_Entry *e = func_0203f408(id, data_021c3bdc);
    if (e) {
        Unk_0203f42c_L l;
        l.w[0] = 0;
        l.w[1] = 0;
        l.w[2] = 0;
        l.w[3] = 0;
        func_0209d498(&l);
        l.b[2] = 0;
        l.b[1] = 0;
        l.b[0] = 0;
        u8 *e4 = (u8 *)&e->unk_04;
        l.w[2] = 0;
        l.w[3] = 0;
        l.b[13] = l.b[5];
        l.b[12] = e4[3];
        l.b[11] = e4[2];
        r = func_0209d3a4(&l.w[2], &l);
    }
    return r;
}

}
