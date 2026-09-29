#include "types.h"

struct Unk_0204d560_Vec { s32 x, y, z; };

struct Unk_0204dcd0_Elem {
    u16 v;
    Unk_0204dcd0_Elem();
    ~Unk_0204dcd0_Elem();
};

struct Unk_0204dcf0 {
    Unk_0204dcd0_Elem e[0x100];
    Unk_0204dcf0();
    ~Unk_0204dcf0();
};

struct Unk_0204da18 {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    u32 func_0204da18();
    void func_0204da24();
    void func_0204dab4();
    void func_0204db08(void *heap);
    BOOL func_0204db24(void *heap);
    void func_0204dc9c();
};

extern "C" {
u8 *func_0204dd1c(void *p);
u16 *func_0204dff8(void *t, s32 *idx);
void func_0204cdf0(u16 *t, s32 a, s32 b, s32 c);
void func_0204e038(void *t);
void func_0209b598(void *t);
u32 func_02063b8c(u32 a);
void func_0204dd74(void *t, s32 a);
BOOL func_0204de4c(void *t);
BOOL func_0204ddd4(void *t);
extern Unk_0204da18 *data_021c47c8;
extern void *data_021c6198;
extern u8 data_021e3680[];
extern s32 data_020c8cbc;
extern s32 data_020c8cb8;

BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204e9dc(void *m, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g, s32 h);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void func_0204ed8c(void *p, s32 a, s32 b);
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0204e49c(u32 a, u32 b, u32 c, u32 d);
s32 func_0204e51c(u32 a, u32 b, u32 c, u32 d);
s32 func_0204d9ec(u32 a, u32 b, u32 c, u32 d);
void func_0204d920(u16 *out, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void func_0204d7fc(u16 *out, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void *func_020b27a4(u16 *t);
u32 func_020b29e4(void *h);
s32 func_020b2958(void *h, Unk_0204d560_Vec *a, Unk_0204d560_Vec *b, Unk_0204d560_Vec *c, u32 i);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_02030814(s32 a);
u32 func_020302f8(s32 a);
void func_02030528(s32 a, s32 b, s32 c, s32 d);
void func_020e885c(void *p);
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, u32 sz);
u32 func_020375d0(void *p);
void func_020375d4(void *p, u32 v);
void *func_020375dc(u32 a, u32 b, u32 c);
void func_02036c58(void *p);
s32 func_02036f24(u32 a, void *b);
void func_02037618(void *c, s32 a, s32 b, s32 d);
void func_02037638(void *a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 *i, s32 j);
s32 *func_0204debc(void *a, void *b);
s32 func_0205b7fc();
void func_0205b818();
void func_02004b60();
void func_0203442c();
}

static inline BOOL Unk_0204d560_Chk(u16 *t) {
    if (func_0204b2d4(t)) {
        t[1] = 0xfff1;
        return func_0204b25c(t) == func_0204b25c(t + 1) ? TRUE : FALSE;
    } else {
        return t[0] == 0xfff1 ? TRUE : FALSE;
    }
}

extern "C" {
BOOL func_0204d560(void *a, void *b) {
    u16 t[2];
    s32 x, y;
    func_0204d920(t, a, b, &x, &y, 0x5020, 0x5020, 0);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

BOOL func_0204d5d8(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    if (!Unk_0204d560_Chk(t)) {
        pos[0] -= 0x2000;
        pos[2] += 0x8000;
        if (p3) *p3 -= 1;
        if (p4) *p4 += 4;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0204d684(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x500b, 0x500b, 0x400);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

BOOL func_0204d700(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5014, 0x501a, 1);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

BOOL func_0204d780(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

void func_0204d7fc(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    void *h; u32 n; s32 sx, sz, ax; u16 t[2]; s32 a, b; Unk_0204d560_Vec v; u32 i; s32 d, az, zz;
    func_0204d920(t, m, &v, &a, &b, a6, a7, a8);
    if (!Unk_0204d560_Chk(t)) {
        h = func_020b27a4(t);
        if (h) {
            n = func_020b29e4(h);
            sx = 0; sz = 0; i = 0;
            for (; i < n; i++) {
                Unk_0204d560_Vec v1, v2, v3;
                if (func_020b2958(h, &v1, &v2, &v3, i)) {
                    sx = sx + v1.x + v2.x + v3.x;
                    sz = sz + v1.z + v2.z + v3.z;
                }
            }
            d = (s32)func_020b29e4(h) * 3 << 12;
            ax = func_01ffc5a4(sx, d);
            az = func_01ffc5a4(sz, d);
            zz = v.z + az + 0x1000;
            pos[0] = v.x + ax;
            pos[1] = func_02030814(0);
            pos[2] = zz;
            if (p4) *p4 = a;
            if (p5) *p5 = b;
            *ret = t[0];
            return;
        }
    }
    *ret = 0xfff1;
}

struct Unk_0204d920_Pad { s32 v[4]; Unk_0204d920_Pad() {} ~Unk_0204d920_Pad() {} };

void func_0204d920(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    u16 t[2];
    s32 l1c, l20, l24, l28;
    Unk_0204d920_Pad pad;
    t[0] = a6;
    t[1] = a7;
    if (func_0204e9dc(m, &l24, &l28, &l1c, &l20, &t[0], &t[1], a8, 0)) {
        func_0204edf8(p4, p5, l24, l28, l1c, l20);
        func_0204ed8c(pos, *p4, *p5);
        s32 x = *p4;
        s32 y = *p5;
        s32 tx = x >> 4;
        s32 ty = y >> 4;
        u16 *r = func_0204ebd8(m, tx, ty, x - (tx << 4), y - (ty << 4), 0);
        if (r) {
            *ret = *r;
            return;
        }
    }
    *ret = 0xfff1;
}

void func_0204d9b4(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f) {
    s32 l8 = 0, lc = 0;
    func_0204edf8(&l8, &lc, b, c, d, e);
    func_0204d9ec(a, l8, lc, f);
}

s32 func_0204d9ec(u32 a, u32 b, u32 c, u32 d) {
    func_0204e49c(a, b, c, d);
}

s32 func_0204d9fc(u32 a, u32 b, u32 c, u32 d) {
    func_0204e51c(a, b, c, d);
}

Unk_0204da18 *func_0204da0c() {
    return data_021c47c8;
}
}

u32 Unk_0204da18::func_0204da18() {
    return func_020302f8(unk_1c);
}

void Unk_0204da18::func_0204da24() {
    s32 x, y;
    func_020e885c(data_021c6198);
    func_02030528(unk_04, unk_08, 0, unk_1c);
    for (y = 0; y < unk_08; y++) {
        for (x = 0; x < unk_04; x++) {
            u8 *c;
            if ((u32)x < (u32)unk_04 && (u32)y < (u32)unk_08 && unk_00) {
                c = unk_00 + (x + y * unk_04) * 0x28;
            } else {
                c = 0;
            }
            if (c) {
                u32 t = func_020375d0(c);
                void *d = data_021c6198;
                func_02036c58(d);
                func_02037618(c, 0, func_02036f24(t, d), unk_1c);
            }
        }
    }
}

void Unk_0204da18::func_0204dab4() {
    s32 x; u8 *p; s32 y; u8 *c;
    p = func_0204dd1c(data_021e3680);
    if (p) {
        c = unk_00;
        for (y = 0; y < unk_08; y++) {
            for (x = 0; x < unk_04; x++) {
                if (c) func_020375d4(c, *p);
                c += 0x28;
                p++;
            }
        }
    }
}

void Unk_0204da18::func_0204db08(void *heap) {
    if (unk_00) {
        func_020e85fc(heap, unk_00);
        unk_00 = 0;
    }
}

struct Unk_0204db24_L { volatile s32 xy[2]; Unk_0204d560_Vec v, w; };

BOOL Unk_0204da18::func_0204db24(void *heap) {
     BOOL result; Unk_0204db24_L l; u8 *cell; s32 *q; s32 *tbl; 
    result = FALSE;
    unk_1c = 1;
    if (!unk_00) unk_00 = (u8 *)func_020375dc(0x24, (u32)heap, 4);
    tbl = func_0204debc(data_021e3680, heap);
    if (unk_00 && tbl) {
        l.xy[0] = 0;
        l.xy[1] = 0;
        l.v.x = 0;
        l.v.y = 0;
        l.v.z = 0;
        cell = unk_00;
        q = tbl;
        unk_04 = 6;
        unk_08 = 6;
        unk_14 = unk_04 * data_020c8cbc;
        unk_18 = unk_08 * data_020c8cb8;
        func_0204edf8(&unk_0c, &unk_10, unk_04, unk_08, 0, 0);
        for (l.xy[1] = 0; l.xy[1] < unk_08; l.xy[1]++) {
            for (l.xy[0] = 0; l.xy[0] < unk_04; l.xy[0]++) {
                l.v.x = l.xy[0] << 17;
                l.v.z = l.xy[1] << 17;
                l.w.x = l.v.x;
                l.w.y = l.v.y;
                l.w.z = l.v.z;
                func_02037638(cell, q[0], &l.w, q[1], q[2], q[3], 0, 0, (s32 *)l.xy, unk_1c);
                cell += 0x28;
                q += 4;
            }
        }
        result = TRUE;
    }
    if (tbl) func_020e85fc(heap, tbl);
    return result;
}

void Unk_0204da18::func_0204dc9c() {
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_00 = 0;
    unk_1c = 1;
}

extern "C" {
s32 func_0204dc1c(void *heap) {
    if (data_021c47c8) {
        data_021c47c8->func_0204da18();
        data_021c47c8->func_0204db08(heap);
        func_020e85fc(heap, data_021c47c8);
        data_021c47c8 = 0;
    }
    func_0205b7fc();
}

BOOL func_0204dc54(void *heap) {
    BOOL r = TRUE;
    func_0205b818();
    if (!data_021c47c8) {
        data_021c47c8 = (Unk_0204da18 *)func_020e8608(heap, 0x20);
        if (data_021c47c8) {
            if (data_021c47c8) data_021c47c8->func_0204dc9c();
            r = data_021c47c8->func_0204db24(heap);
        }
    }
    return r;
}

void func_0204dcb0() {}

void func_0204dcb4(u16 *p) {
    s32 i;
    for (i = 0; i < 0x100; p++, i++) *p = 0xfff1;
}

u8 *func_0204dd1c(void *p) {
    return (u8 *)p;
}
}

Unk_0204dcf0::~Unk_0204dcf0() {}
Unk_0204dcf0::Unk_0204dcf0() {}

struct Unk_0204dd20_Obj {
    u8 pad[0x2224];
    u8 f : 2;
};

extern "C" {
void func_0204dd20(Unk_0204dd20_Obj *o, s32 arg) {
    func_0204e038(o);
    o->f = func_02063b8c(3);
    do {
        func_0209b598(o);
        func_0204dd74(o, arg);
    } while (!func_0204de4c(o) || !func_0204ddd4(o));
}

void func_0204dd74(void *ov, s32 arg) {
    u8 *o = (u8 *)ov;
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            u16 *p = func_0204dff8(o, xy);
            if (p) {
                func_0204cdf0(p, 0, (o + xy[1] * 6)[xy[0]] & 0xfff, arg);
            }
        }
    }
}

BOOL func_0204ddd4(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    BOOL f;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    f = FALSE;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = func_0204dff8(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    f = FALSE;
                    if (*p >= 0xe3 && *p <= 0xe7) f = TRUE;
                    if (f) cnt++;
                }
            }
        }
    }
    if (cnt >= 5) r = TRUE;
    return r;
}

BOOL func_0204de4c(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = func_0204dff8(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    if (*p == 0x500a) cnt++;
                }
            }
        }
    }
    if (cnt >= 9) r = TRUE;
    return r;
}
}
