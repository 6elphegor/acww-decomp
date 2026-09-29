#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02095774_Ent {
    u8 pad_00[0x5c];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_0209579c_Rec {
    u8 pad_00[0xe];
    u8 unk_0e;
};

struct Unk_02095dcc_Grid {
    u8 pad_00[0xc];
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_02063380 {
    void func_0206338c(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

struct Unk_0209579c_Pos {
    s32 x, y, z;
    Unk_0209579c_Pos() {}
};

struct Unk_0209579c_L {
    u8 a, b;
    s16 c;
    s16 r1[3];
    s16 pad;
    s32 v1, x1, y1;
    s16 r2[3];
    s16 r3[3];
    s32 v2, x2, y2;
};

inline BOOL Unk_0209579c_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

inline u16 Unk_02095f38_F(u32 v) {
    if (v < 5) return (u16)(v + 0x1518);
    return 0x1518;
}

extern Unk_020cbb18 *data_020cbb18;
extern u32 data_020d03d8[];
extern u32 data_020d03e8[];
extern u32 data_020d03f8[];
extern u8 data_020d043c[];
extern u8 data_021d085c[];
extern u8 data_021e7f8c[];
extern u8 data_021eceac[];
extern u8 data_021edb68[];
extern u8 data_020e1d68[];
struct Unk_02095f38_G {
    u8 pad_00[0x58];
    u32 unk_58;
};
extern Unk_02095f38_G data_021ed150;

extern "C" {
BOOL func_020729bc(Unk_020cbb18 *p, s32 v);
u32 func_02072970(Unk_020cbb18 *p, u32 v);
u32 func_02072e88(Unk_020cbb18 *p, s32 v);
u32 func_020729cc(Unk_020cbb18 *p, s32 v);
BOOL func_02072e44(Unk_020cbb18 *p);
s32 func_020b50e8();
void func_02076a2c(u32 a, s32 *x, s32 *y);
void func_02076ae8(u32 a, u8 *b, s32 c);
void func_02076280(s32 a, void *b, s32 c, s32 d);
s32 func_02095478(void *p, s32 i);
BOOL func_02095574(s32 *out, s32 a, s32 idx);
BOOL func_020955e8(s16 *out, s32 a, s32 idx);
u32 func_02095720(s32 idx);
u32 func_02095758(s32 idx);
Unk_02095774_Ent *func_02095774(s32 idx);
BOOL func_02095670(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);

s32 func_020a03f0();
s32 func_020a0414();
s32 func_020a5ef8();
Unk_0209579c_Rec *func_02002d3c(s32 a, s32 b);
Unk_02095774_Ent *func_02095204(s32 idx);
u32 func_0209521c();
void func_0209524c(s32 idx, u32 v);
s32 func_02094348();
void func_02094308(s32 idx, void *pos, void *rot, u32 flags);
BOOL func_02095180(s32 a, s32 b);
u8 *func_020952b0(s32 idx);
s32 *func_020952bc(s32 idx);
s32 *func_020952a0(s32 idx);
s16 *func_02095294(s32 idx);
void func_020ed188(void *p);
u8 func_020a6358(s32 idx);
void func_02094360(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);

s32 func_0208f1c0(void *p);
void *func_0208f158(void *p);
s32 func_02065578(void *p);
s32 func_0208f198(void *p);
s32 func_0208f15c(void *p);
s32 func_02063b8c(u32 n);
void func_0208f168(void *p);
void func_02065b28(void *p);
void *func_02096f44(void *p);
void func_02065e70(void *p, void *q);
void func_02065c94(void *p);
s32 func_02095dcc();
s32 func_02095e34();
s32 func_02095e48(u8 *p);
s32 func_02096e78(void *p);
void func_02096f10(void *p, s32 v);
Unk_02095dcc_Grid *func_0204da0c();
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02045de4();
s32 func_020464bc();
void func_02065640(void *a, void *b, void *c);
void *func_020991e4();
void *func_0209750c();
void *func_020986c8(void *a);
void func_0203c42c(void *a, u16 *b, s32 c, s32 d);
void func_0206f604(s32 a, s32 b);
void func_02062f94(u16 *a, Unk_02063380 *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02062ad4(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_02063388(Unk_02063380 *o);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

void Unk_02063380::func_0206338c(s32 a, s32 b) {
    unk_00 = a;
    unk_04 = b;
}

class Unk_020e1c30 : public Unk_020d8c7c {
public:
    virtual Unk_020d8c7c *vfunc_48();
};

class Unk_020e1c88 : public Unk_020d8c7c {
public:
    Unk_020e1c88();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e1c88();
    virtual Unk_020d8c7c *vfunc_48();
};

class Unk_020e1ce0 : public Unk_020d8c7c {
public:
    Unk_020e1ce0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e1ce0();
};

extern "C" {
BOOL func_02095670(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx) {
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (func_020729bc(data_020cbb18, idx)) {
        Unk_02095774_Ent *e = func_02095774(4);
        if (e != NULL) {
            s32 *p = e->unk_5c;
            *outb = func_020b50e8();
            *x = e->unk_5c[0];
            *y = p[2];
            return TRUE;
        }
        return FALSE;
    }
    u32 t = func_02095720(idx);
    if (t == 0) return FALSE;
    s32 v;
    if (!func_02095574(&v, mode, idx)) return FALSE;
    if (v >= 0x93) return FALSE;
    u32 t2 = func_02095758(idx);
    if (t2 == 0) return FALSE;
    s32 a, b;
    func_02076a2c(t2, &a, &b);
    *x = a;
    *y = b;
    func_02076ae8(t, outb, 0);
    return TRUE;
}

u32 func_02095720(s32 idx) { return func_02072970(data_020cbb18, data_020d03f8[idx]); }
u32 func_0209573c(s32 idx) { return func_02072970(data_020cbb18, data_020d03e8[idx]); }
u32 func_02095758(s32 idx) { return func_02072970(data_020cbb18, data_020d03d8[idx]); }

Unk_02095774_Ent *func_02095774(s32 idx) {
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    return (Unk_02095774_Ent *)func_02095478(data_021d085c, idx);
}
}
BOOL Unk_020e1c88::vfunc_0c() { return TRUE; }
BOOL Unk_020e1c88::vfunc_24() { return TRUE; }
BOOL Unk_020e1c88::vfunc_00() { return TRUE; }
Unk_020e1c88::~Unk_020e1c88() {}
Unk_020e1c88::Unk_020e1c88() {}
Unk_020d8c7c *Unk_020e1c88::vfunc_48() { return new Unk_020e1ce0(); }
Unk_020d8c7c *Unk_020e1c30::vfunc_48() { return new Unk_020e1c88(); }

BOOL Unk_020e1ce0::vfunc_00() { return TRUE; }
BOOL Unk_020e1ce0::vfunc_0c() { return TRUE; }
BOOL Unk_020e1ce0::vfunc_24() { return TRUE; }
Unk_020e1ce0::~Unk_020e1ce0() {}
Unk_020e1ce0::Unk_020e1ce0() {}
BOOL Unk_020e1c88::vfunc_18() {
    Unk_020cbb18 *g = data_020cbb18;
    s32 mode = g->unk_64;
    u8 la, lb;
    s16 lc;
    s16 lr1[3];
    s32 lv1, lx1, ly1;
    s16 lr2[3], lr3[3];
    s32 lv2, lx2, ly2;
    Unk_0209579c_Pos p1, p2, p3;
    s32 ob;
    s32 i;
    if (func_020b50e8() == 0x2e) goto ret1;
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f || func_020b50e8() == 0xe) {
        if (func_020a03f0()) return TRUE;
        Unk_0209579c_Rec *rec = func_02002d3c(0x72, 0);
        if (rec == NULL) goto ret1;
        if (Unk_0209579c_IsTwo(rec->unk_0e)) goto ret1;
        if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
            mode = func_020a0414();
        } else {
            mode = func_020a5ef8();
        }
        if (mode >= 4) goto ret1;
        if (func_02095204(mode)) goto ret1;
        p1.x = 0;
        p1.y = 0;
        p1.z = 0;
        lr1[0] = 0;
        lr1[1] = 0;
        lr1[2] = 0;
        if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
            p1.x = 0x10000;
            p1.y = 2;
            p1.z = 0x5000;
            lr1[0] = 0;
            lr1[1] = 0;
            lr1[2] = 0;
        } else {
            p1.x = 0x10000;
            p1.y = 2;
            p1.z = 0x11800;
            lr1[0] = 0;
            lr1[1] = (s16)0x8000;
            lr1[2] = 0;
        }
        func_0209524c(mode, func_0209521c());
        func_02094308(mode, &p1, lr1, 0x4000000);
        goto ret1;
    }
    if (!func_02072e88(g, mode)) goto ret1;
    if (!func_02095204(4)) goto ret1;
    ob = func_02094348();
    i = 0;
    do {
        if (!func_020729bc(g, i) && func_02072e88(g, i) && !func_02095204(i)) {
            if (func_02095574(&lv1, -1, i) && lv1 < 0x93 && func_02095670(&la, &lx1, &ly1, -1, i) &&
                la == func_020b50e8() && func_020955e8(&lc, -1, i)) {
                p2.x = lx1;
                p2.y = 2;
                p2.z = ly1;
                lr2[0] = 0;
                lr2[1] = lr1[0];
                lr2[2] = 0;
                func_0209524c(i, func_0209521c());
                func_02094308(i, &p2, lr2, 0x800000);
            } else if (func_02095180(0x1b, ob)) {
                u8 *bp = func_020952b0(i);
                s32 *ip = func_020952bc(i);
                if (*bp == func_020b50e8() && *ip != 0x93) {
                    s32 *pp = func_020952a0(i);
                    p3.x = pp[0];
                    p3.y = pp[1];
                    p3.z = pp[2];
                    lr3[0] = 0;
                    lr3[1] = *func_02095294(i);
                    lr3[2] = 0;
                    func_0209524c(i, func_0209521c());
                    func_02094308(i, &p3, lr3, (*ip << 22) & 0x3fc00000);
                }
            }
        }
        i++;
    } while ((u32)i < 4);
    i = 0;
    do {
        if (!func_020729bc(g, i) && !func_02095180(0x1b, ob)) {
            Unk_02095774_Ent *e = func_02095204(i);
            if (e) {
                BOOL f = FALSE;
                if (((Unk_0209579c_Rec *)e)->unk_0e == 2) f = TRUE;
                if (!f) {
                    if (func_02095574(&lv2, -1, i)) {
                        if (lv2 >= 0x93) {
                            func_020ed188(e);
                        } else if (func_02095670(&lb, &lx2, &ly2, -1, i)) {
                            if (lb != func_020b50e8()) func_020ed188(e);
                        } else {
                            func_020ed188(e);
                        }
                    } else {
                        func_020ed188(e);
                    }
                }
            }
        }
        i++;
    } while ((u32)i < 4);
ret1:
    return TRUE;
}
BOOL Unk_020e1ce0::vfunc_18() {
    Unk_020cbb18 *g;
    s32 i, m1;
    s32 *p8;
    u8 *pc;
    s32 *r4;
    s16 *p10;
    s32 idx;
    u8 c;
    s16 s;
    s32 v, x, y;
    i = 3;
    g = data_020cbb18;
    m1 = -1;
    do {
        if (func_02072e88(g, i) && !func_020729cc(g, i)) {
            idx = i;
            c = func_020a6358(i);
            p8 = func_020952bc(idx);
            pc = func_020952b0(idx);
            r4 = func_020952a0(idx);
            p10 = func_02095294(idx);
            if (c != 0xc && c != 0xd && c != 0xe && c != 0x2f && c != 0x2e) {
                if (func_02095574(&v, m1, idx)) {
                    if (func_02095670(&c, &x, &y, m1, idx)) {
                        if (func_020955e8(&s, m1, idx)) {
                            func_02094360(&idx, &c, p8, &v, &x, &y);
                            *p8 = v;
                            *pc = c;
                            s32 yt = y;
                            r4[0] = x;
                            r4[1] = 0;
                            r4[2] = yt;
                            *p10 = s;
                        }
                    }
                }
            }
        }
        i--;
    } while (i >= 0);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        Unk_02095774_Ent *o = func_02095204(4);
        if (o) {
            s32 n = g->unk_68;
            if (n < 4) {
                func_02076280(n + 4, (u8 *)o + 0x8e, 0, 0);
                func_02076280(n, o->unk_5c, 0, 0);
                func_02076280(n + 8, 0, 0, 0);
            }
        }
    }
    return TRUE;
}
extern "C" u16 func_02095f38(s32 code) {
    u16 buf[4];
    Unk_02063380 o1;
    Unk_02063380 o2;
    buf[0] = 0xfff1;
    switch (code) {
    case 0x23:
    case 0x32:
    case 0x5f:
    case 0x73:
        o1.func_0206338c(2, 0);
        func_02062f94(&buf[1], &o1, 0, 0, 1, 1, 0);
        buf[0] = buf[1];
        func_02063388(&o1);
        return buf[0];
    case 0x4a:
        func_02062ad4(&buf[2], 0x1380, 0x20, 0, 0, 0, 1, 10, 0, 1);
        buf[0] = buf[2];
        return buf[0];
    case 0x1e:
    case 0x1f:
        o2.func_0206338c(0, 0);
        func_02062f94(&buf[3], &o2, 0, 0, 1, 1, 0);
        buf[0] = buf[3];
        func_02063388(&o2);
        return buf[0];
    case 0x25:
    case 0x37:
    case 0x38:
    case 0x51: {
        u16 r4 = Unk_02095f38_F(data_021ed150.unk_58);
        s32 n = func_02063b8c(4);
        u32 j;
        for (j = 0; j < 5; j++) {
            u16 k = Unk_02095f38_F(j);
            if (k == r4) continue;
            if (n > 0) {
                n--;
            } else {
                return k;
            }
        }
        return 0x1518;
    }
    case 0x2e:
        return 0x149b;
    case 0:
    case 1:
        return 0x14a4;
    case 0x6e:
    case 0x6f:
        return 0x1542;
    case 0x72:
        return 0x1518;
    case 0x48:
        return 0x3648;
    case 0x47:
        return 0x3420;
    }
    return 0xfff1;
}
extern "C" {
void func_02095cdc() {
    void *const o = data_021e7f8c;
    if (func_0208f1c0(o)) {
        void *r4 = func_0208f158(o);
        if (func_02065578(r4)) {
            s32 t = func_0208f198(o);
            switch (t) {
            case 0: {
                s32 u = func_0208f15c(o);
                if (u == 0) return;
                if (u < 5) {
                    if (func_02063b8c(data_020d043c[u]) != 1) return;
                }
                break;
            }
            case 1:
                break;
            }
            func_0208f168(o);
            func_02065b28(r4);
            func_02065e70(func_02096f44(data_021eceac), r4);
            func_02065c94(r4);
            if (func_02095dcc() == 0) func_02095e34();
        }
    }
}

void func_02095d64(s32 a) {
    if (a > 0) {
        if (func_02095dcc() == 0) {
            void *const o = data_021eceac;
            if (func_02065578(func_02096f44(o))) {
                func_02095e34();
            } else if (func_02063b8c(10) == 7) {
                u8 v = data_021edb68[0];
                s32 r = func_02096e78(o);
                v = r;
                if (func_02095e48(&v)) func_02096f10(o, r);
            }
        }
    }
}

s32 func_02095e48(u8 *p) {
    void *o = func_02096f44(data_021eceac);
    if (func_02065578(o)) return FALSE;
    if (func_02095e34() == 0) return FALSE;
    func_02065640(o, p, data_020e1d68);
    return TRUE;
}

s32 func_02095e8c() {
    void *r5 = func_020991e4();
    if (r5 == NULL) return FALSE;
    void *o = func_02096f44(data_021eceac);
    if (!func_02065578(o)) {
        func_02065c94(o);
        return TRUE;
    }
    void *t = func_0209750c();
    u16 buf = 0x1033;
    func_0203c42c(func_020986c8(t), &buf, 0, 1);
    func_02065e70(r5, o);
    func_02065c94(o);
    Unk_020cbb18 *g = data_020cbb18;
    if (func_02072e44(g) && g->unk_64 != 0) func_0206f604(7, 0);
    return TRUE;
}

u8 func_02095f10(s32 x) {
    if (x >= 0 && x < 0x22) return x;
    if (x >= 0x22 && x < 0x5a) return x - 0x22;
    return x - 0x5a;
}

s32 func_02095dcc() {
    Unk_02095dcc_Grid *g = func_0204da0c();
    s32 y, x, hx, hy;
    u16 *c;
    for (y = 0; y < g->unk_10; y++) {
        x = 0;
        if (x < g->unk_0c) {
            goto test0;
        loop0:
            hx = x >> 4;
            hy = y >> 4;
            c = (u16 *)func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (c) {
                if (Unk_02095dcc_R(c, 0x1520, 0x1520)) return TRUE;
            }
            x++;
        test0:
            if (x < g->unk_0c) goto loop0;
        }
    }
    return FALSE;
}

s32 func_02095e34() {
    func_02045de4();
    func_020464bc();
}
}
