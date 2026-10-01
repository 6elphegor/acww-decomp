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
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_020cbb18 *p, s32 v);
}

extern "C" {
u32 func_02072970(Unk_020cbb18 *p, u32 v);
}

extern "C" {
u32 _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *p, s32 v);
}

extern "C" {
u32 func_020729cc(Unk_020cbb18 *p, s32 v);
}

extern "C" {
BOOL func_02072e44(Unk_020cbb18 *p);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
void func_02076a2c(u32 a, s32 *x, s32 *y);
}

extern "C" {
void func_02076ae8(u32 a, u8 *b, s32 c);
}

extern "C" {
void func_02076280(s32 a, void *b, s32 c, s32 d);
}

extern "C" {
s32 func_02095478(void *p, s32 i);
}

extern "C" {
BOOL func_02095574(s32 *out, s32 a, s32 idx);
}

extern "C" {
BOOL func_020955e8(s16 *out, s32 a, s32 idx);
}

extern "C" {
u32 func_02095720(s32 idx);
}

extern "C" {
u32 func_02095758(s32 idx);
}

extern "C" {
Unk_02095774_Ent *func_02095774(s32 idx);
}

extern "C" {
BOOL func_02095670(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);
}

extern "C" {
s32 func_020a03f0();
}

extern "C" {
s32 func_020a0414();
}

extern "C" {
s32 func_020a5ef8();
}

extern "C" {
Unk_0209579c_Rec *_ZN12Unk_020d5d8413func_02002d3cEjPS_(s32 a, s32 b);
}

extern "C" {
Unk_02095774_Ent *func_02095204(s32 idx);
}

extern "C" {
u32 func_0209521c();
}

extern "C" {
void func_0209524c(s32 idx, u32 v);
}

extern "C" {
s32 func_02094348();
}

extern "C" {
void func_02094308(s32 idx, void *pos, void *rot, u32 flags);
}

extern "C" {
BOOL func_02095180(s32 a, s32 b);
}

extern "C" {
u8 *func_020952b0(s32 idx);
}

extern "C" {
s32 *func_020952bc(s32 idx);
}

extern "C" {
s32 *func_020952a0(s32 idx);
}

extern "C" {
s16 *func_02095294(s32 idx);
}

extern "C" {
void func_020ed188(void *p);
}

extern "C" {
u8 func_020a6358(s32 idx);
}

extern "C" {
void func_02094360(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);
}

extern "C" {
s32 func_0208f1c0(void *p);
}

extern "C" {
void *func_0208f158(void *p);
}

extern "C" {
s32 func_02065578(void *p);
}

extern "C" {
s32 func_0208f198(void *p);
}

extern "C" {
s32 func_0208f15c(void *p);
}

extern "C" {
s32 func_02063b8c(u32 n);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_02065b28(void *p);
}

extern "C" {
void *func_02096f44(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_02065c94(void *p);
}

extern "C" {
s32 func_02095dcc();
}

extern "C" {
s32 func_02095e34();
}

extern "C" {
s32 func_02095e48(u8 *p);
}

extern "C" {
s32 func_02096e78(void *p);
}

extern "C" {
void func_02096f10(void *p, s32 v);
}

extern "C" {
Unk_02095dcc_Grid *func_0204da0c();
}

extern "C" {
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void func_02045de4();
}

extern "C" {
s32 func_020464bc();
}

extern "C" {
void func_02065640(void *a, void *b, void *c);
}

extern "C" {
void *func_020991e4();
}

extern "C" {
void *func_0209750c();
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
void func_0203c42c(void *a, u16 *b, s32 c, s32 d);
}

extern "C" {
void func_0206f604(s32 a, s32 b);
}

extern "C" {
void func_02062f94(u16 *a, Unk_02063380 *o, s32 b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
void func_02062ad4(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}

extern "C" {
void func_02063388(Unk_02063380 *o);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

class Unk_020e1c30 {
public:
    static Unk_020d8c7c *vfunc_48();
};

struct Unk_020e1c78_Rec {
    Unk_020d8c7c *(*fn)();
    s16 a;
    s16 b;
};

class Unk_020e1c88 : public Unk_020d8c7c {
public:
    Unk_020e1c88();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e1c88();
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
static inline void Unk_0209579c_Set(s16 *d, s16 a, s16 b, s16 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

Unk_020e1c78_Rec data_020e1c78 = {&Unk_020e1c30::vfunc_48, 8, 12};

Unk_020d8c7c *Unk_020e1c30::vfunc_48() { return new Unk_020e1c88(); }

Unk_020e1c88::Unk_020e1c88() {}

Unk_020e1c88::~Unk_020e1c88() {}

BOOL Unk_020e1c88::vfunc_00() { return TRUE; }

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
    s32 j;
    if (func_020b50e8() == 0x2e) goto ret1;
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f || func_020b50e8() == 0xe) {
        if (func_020a03f0()) return TRUE;
        Unk_0209579c_Rec *rec = _ZN12Unk_020d5d8413func_02002d3cEjPS_(0x72, 0);
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
    if (!_ZN12Unk_020cbb1813func_02072e88Ei(g, mode)) goto ret1;
    if (!func_02095204(4)) goto ret1;
    ob = func_02094348();
    i = 0;
    do {
        if (!_ZN12Unk_020cbb1813func_020729bcEj(g, i) && _ZN12Unk_020cbb1813func_02072e88Ei(g, i) && !func_02095204(i)) {
            if (func_02095574(&lv1, -1, i) && lv1 < 0x93 && func_02095670(&la, &lx1, &ly1, -1, i) &&
                la == func_020b50e8() && func_020955e8(&lc, -1, i)) {
                p2.x = lx1;
                p2.y = 2;
                p2.z = ly1;
                Unk_0209579c_Set(lr2, 0, lc, 0);
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
                    Unk_0209579c_Set(lr3, 0, *func_02095294(i), 0);
                    func_0209524c(i, func_0209521c());
                    func_02094308(i, &p3, lr3, (*ip << 22) & 0x3fc00000);
                }
            }
        }
        i++;
    } while ((u32)i < 4);
    j = 0;
    do {
        if (!_ZN12Unk_020cbb1813func_020729bcEj(g, j) && !func_02095180(0x1b, ob)) {
            Unk_02095774_Ent *e = func_02095204(j);
            if (e) {
                if (!Unk_0209579c_IsTwo(((Unk_0209579c_Rec *)e)->unk_0e)) {
                    if (func_02095574(&lv2, -1, j)) {
                        if (lv2 >= 0x93) {
                            func_020ed188(e);
                        } else if (func_02095670(&lb, &lx2, &ly2, -1, j)) {
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
        j++;
    } while ((u32)j < 4);
ret1:
    return TRUE;
}

BOOL Unk_020e1c88::vfunc_24() { return TRUE; }

BOOL Unk_020e1c88::vfunc_0c() { return TRUE; }

