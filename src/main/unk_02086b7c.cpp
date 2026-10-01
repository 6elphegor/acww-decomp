#include "types.h"

struct Unk_02086ec4_Vec3 {
    s32 x, y, z;
};

// 0x02086e60 record (also used by the free functions below)
class Unk_02086e60;

extern "C" {
void *func_02115fb4(void *dst, s32 v, u32 n);
void *func_02116048(void *dst, const void *src, u32 n);
s32 func_02063b8c(s32 n);
void func_02063990(void *p);
s32 func_020639a0(void *p);
s32 func_020639b8(void *p);
void func_0204ed8c(Unk_02086ec4_Vec3 *out, s32 x, s32 y);
s32 func_0204ee10(s32 *x, s32 *y, s32 v);
s32 func_0204edf8(s32 *x, s32 *y, s32 a, s32 b, s32 c, s32 d);
void *func_0204da0c();
s32 func_02077f68();
u16 *func_0204ebd8(void *map, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
s32 func_0204bd14(u16 *p);
s32 func_0204b08c(u16 *p);
s32 func_02071e10(void *p, s32 v);
void *func_02071e04(void *p);
void *func_02071e5c(void *p);
void *func_02071e74(void *p);
s32 func_0207200c(void *p, s32 v);
s32 func_0209e170(void *p, s32 v);
void *func_0209750c();
void *func_020986a4();
s32 func_020e77cc(s32 a, s32 b, s32 c);
s32 func_02097ff4(void *p, s32 v);
void func_0209d498(void *p);
s32 func_0209d3d0(void *p, void *q, s32 v);
extern void *data_021c47c4;
extern u8 data_021d7350[];
extern u8 data_021ed31a[];
extern u32 data_021cdda8[];
extern u8 data_021c47c4_dummy[];
BOOL func_0208709c(s32 x, s32 y, void *map);
s32 func_02086d78(s32 *out, BOOL (*cb)(s32, s32, void *), s32 arg, s32 cur, s32 limit, void *m, u16 *buf, s32 n);
BOOL func_02086e48(s32 x, s32 y, void *map);
BOOL func_02086e50(s32 x, s32 y, void *map);
}

// ---- 0x02086b7c: random-flags byte
class Unk_02086b7c {
public:
    void func_02086b7c();
    void func_02086b88();
    BOOL func_02086b94();
    void func_02086ba8();
    void func_02086bf0();
    void func_02086bfc();
    void func_02086c00();

    u8 unk_00_0 : 1;
    u8 unk_00_1 : 1;
    u8 unk_00_2 : 2;
    u8 unk_00_4 : 2;
};

void Unk_02086b7c::func_02086b7c() { unk_00_0 = 1; }
void Unk_02086b7c::func_02086b88() { unk_00_0 = 0; }
BOOL Unk_02086b7c::func_02086b94() {
    if (unk_00_0) return TRUE;
    return FALSE;
}
void Unk_02086b7c::func_02086ba8() {
    unk_00_2 = func_02063b8c(3);
    unk_00_4 = func_02063b8c(4);
    unk_00_1 = 1;
}
void Unk_02086b7c::func_02086bf0() { func_02115fb4(this, 0, 1); }
void Unk_02086b7c::func_02086bfc() {}
void Unk_02086b7c::func_02086c00() {}

// ---- 0x02086c04: 12-byte position record with flag byte at +8
class Unk_02086c04 {
public:
    BOOL func_02086c04(s32 px, s32 flip);
    s16 func_02086e60();
    void func_02086e6c();
    void func_02086e78();
    BOOL func_02086e84();
    void func_02086e98();
    void func_02086ea4();
    BOOL func_02086eb0();
    void func_02086ec4(Unk_02086ec4_Vec3 *out);
    void func_02086ed0(Unk_02086ec4_Vec3 *v);
    void func_02086edc();
    void func_02086ee8();
    void func_02086eec();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08_0 : 1;
    u8 unk_08_1 : 1;
    u8 unk_08_2 : 2;
};

struct Unk_02086c04_Map {
    u32 pad[3];
    s32 w, h;
};

struct Unk_02086c04_Pair {
    s32 a, b;
};

BOOL Unk_02086c04::func_02086c04(s32 px, s32 flip) {
    s32 dir;
    Unk_02086c04_Map *map = (Unk_02086c04_Map *)data_021c47c4;
    if (map == 0) {
        func_02086e98();
        return FALSE;
    }
    s32 f1, f2, w, h;
    Unk_02086c04_Pair *sel = 0;
    s32 sx = 0, sy = 0;
    s32 *dims = &map->w;
    w = dims[0];
    h = dims[1];
    Unk_02086c04_Pair p1, p2;
    u16 buf1[4], buf2[4];
    Unk_02086ec4_Vec3 v;
    s32 a, b, c, d;
    s32 y;
    p1.a = 0;
    p1.b = 0;
    p2.a = 0;
    p2.b = 0;
    if (flip != 0) dir = -1; else dir = 1;
    func_0204ee10(&sx, &sy, px);
    a = sx + dir * 8 - flip;
    y = sy + 5;
    b = a;
    c = sy + 4;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    goto test;
loop:
    if (y < h) {
        p1.b = y;
        f1 = func_02086d78(&p1.a, func_02086e50, y, a, sx, map, buf1, 4);
        if (a > 0 && a < w - 1) a += dir;
        y++;
    }
    if (b >= 0 && b < w) {
        p2.a = b;
        f2 = func_02086d78(&p2.b, func_02086e48, b, sy, c, map, buf2, 4);
        b += dir;
        if (c < h - 1) c++;
    }
    if (f1 != 0) {
        if (f2 != 0) {
            if (func_02063b8c(10) & 1) {
                sel = &p2;
                goto done;
            }
        }
        sel = &p1;
        goto done;
    } else if (f2 != 0) {
        sel = &p2;
        goto done;
    }
test:
    if (y < h) goto loop;
    if (b < 0) goto done;
    if (b < w) goto loop;
done:
    if (sel != 0) {
        func_0204ed8c(&v, sel->a, sel->b);
        func_02086ed0(&v);
        unk_08_2 = func_02063b8c(4);
        func_02086ea4();
        return TRUE;
    }
    func_02086e98();
    return FALSE;
}

s16 Unk_02086c04::func_02086e60() { return (s16)(unk_08_2 << 14); }
void Unk_02086c04::func_02086e6c() { unk_08_1 = 1; }
void Unk_02086c04::func_02086e78() { unk_08_1 = 0; }
BOOL Unk_02086c04::func_02086e84() {
    if (unk_08_1) return TRUE;
    return FALSE;
}
void Unk_02086c04::func_02086e98() { unk_08_0 = 0; }
void Unk_02086c04::func_02086ea4() { unk_08_0 = 1; }
BOOL Unk_02086c04::func_02086eb0() {
    if (unk_08_0) return TRUE;
    return FALSE;
}
void Unk_02086c04::func_02086ec4(Unk_02086ec4_Vec3 *out) {
    out->x = unk_00;
    out->z = unk_04;
}
void Unk_02086c04::func_02086ed0(Unk_02086ec4_Vec3 *v) {
    unk_00 = v->x;
    unk_04 = v->z;
}
void Unk_02086c04::func_02086edc() { func_02115fb4(this, 0, 12); }
void Unk_02086c04::func_02086ee8() {}
void Unk_02086c04::func_02086eec() {}

extern "C" s32 func_02086d78(s32 *out, BOOL (*cb)(s32, s32, void *), s32 arg, s32 cur, s32 limit, void *m, u16 *buf, s32 n) {
    s32 r, bit = 0, i = 0, cnt = 0, bi, ii, k;
    if (cur > limit) {
        s32 t = cur;
        cur = limit;
        limit = t;
    }
    func_02115fb4(buf, 0, n * 2);
    k = cur;
    goto test1;
loop1:
    if (cb(arg, k, m) != 0) {
        buf[i] |= 1 << bit;
        cnt++;
    }
    bit++;
    if (bit >= 16) {
        bit = 0;
        i++;
    }
    if (i >= n) goto done1;
    k++;
test1:
    if (k <= limit) goto loop1;
done1:
    if (cnt > 0) {
        r = func_02063b8c(cnt);
        bi = 0; ii = 0;
        goto test2;
loop2:
        if (((buf[ii] >> bi) & 1) != 0) {
            if (r == 0) {
                *out = cur;
                return 1;
            }
            r--;
        }
        bi++;
        if (bi >= 16) {
            bi = 0;
            ii++;
        }
        if (ii >= n) goto fail;
        cur++;
test2:
        if (cur <= limit) goto loop2;
    }
fail:
    return 0;
}

extern "C" BOOL func_02086e48(s32 x, s32 y, void *map) { return func_0208709c(x, y, map); }
extern "C" BOOL func_02086e50(s32 x, s32 y, void *map) { return func_0208709c(y, x, map); }

// ---- 0x02086ef0: s16 + byte
class Unk_02086ef0 {
public:
    s16 func_02086ef0();
    void func_02086ef8(s32 v);
    u8 func_02086efc();
    void func_02086f00(u32 v);
    void func_02086f04();
    void func_02086f0c();
    void func_02086f10();

    s16 unk_00;
    u8 unk_02;
};

s16 Unk_02086ef0::func_02086ef0() { return unk_00; }
void Unk_02086ef0::func_02086ef8(s32 v) { unk_00 = v; }
u8 Unk_02086ef0::func_02086efc() { return unk_02; }
void Unk_02086ef0::func_02086f00(u32 v) { unk_02 = v; }
void Unk_02086ef0::func_02086f04() { unk_02 = 0; }
void Unk_02086ef0::func_02086f0c() {}
void Unk_02086ef0::func_02086f10() {}

// ---- 0x02086f14: three bytes
class Unk_02086f14 {
public:
    void func_02086f14(u32 v);
    BOOL func_02086f18();
    void func_02086f28();
    void func_02086f30();
    void func_02086f34();
    BOOL func_02086f38();
    void func_02086f68();

    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

void Unk_02086f14::func_02086f14(u32 v) { unk_00 = v; }
BOOL Unk_02086f14::func_02086f18() {
    if (unk_00 != 0) return TRUE;
    return FALSE;
}
void Unk_02086f14::func_02086f28() { unk_00 = 0; }
void Unk_02086f14::func_02086f30() {}
void Unk_02086f14::func_02086f34() {}

struct Unk_02086f38_Buf {
    s32 a, b;
};

BOOL Unk_02086f14::func_02086f38() {
    Unk_02086f38_Buf buf;
    buf.a = 0;
    buf.b = 0;
    func_0209d498(&buf);
    s32 t = func_0209d3d0(this, &buf, 0x3f);
    BOOL r = FALSE;
    if (t == -1) r = TRUE;
    return r;
}
void Unk_02086f14::func_02086f68() {
    func_0209d498(this);
    unk_02 = 0x17;
    unk_01 = 0;
    unk_00 = 0;
}

// ---- 0x02086f84: 2 words + byte
class Unk_02086f84 {
public:
    void func_02086f80();
    void func_02086f84();
    void func_02086f8c();
    void func_02086f90();
    void func_02086f98();
    void func_02086fa0();
    BOOL func_02086fa8();
    void func_02086fb8(Unk_02086ec4_Vec3 *out);
    void func_02086fc4(Unk_02086ec4_Vec3 *v);
    void func_02086fd0();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
};

void Unk_02086f84::func_02086f80() {}
void Unk_02086f84::func_02086f84() {
    unk_00 = 0;
    unk_04 = 0;
}
void Unk_02086f84::func_02086f8c() {}
void Unk_02086f84::func_02086f90() {
    unk_00 = 0;
    unk_04 = 0;
}
void Unk_02086f84::func_02086f98() { unk_08 = 0; }
void Unk_02086f84::func_02086fa0() { unk_08 = 1; }
BOOL Unk_02086f84::func_02086fa8() {
    if (unk_08 != 0) return TRUE;
    return FALSE;
}
void Unk_02086f84::func_02086fb8(Unk_02086ec4_Vec3 *out) {
    out->x = unk_00;
    out->z = unk_04;
}
void Unk_02086f84::func_02086fd0() {
    void *map = func_0204da0c();
    if (map != 0) {
        s32 cnt = 0;
        s32 bx = 0, by = 0;
        u32 *tbl = data_021cdda8;
        s32 x, y;
        func_02115fb4(tbl, 0, 0x80);
        func_0204edf8(&bx, &by, 2, 2, 0, 0);
        y = 0;
        do {
            x = 0;
            do {
                if (func_0208709c(bx + x, by + y, map) != 0) {
                    tbl[0] |= 1 << x;
                    cnt++;
                }
                x++;
            } while (x < 32);
            tbl++;
            y++;
        } while (y < 32);
        if (cnt > 0) {
            s32 x2, y2; s32 r = func_02063b8c(cnt);
            tbl = data_021cdda8;
            y2 = 0;
            goto testy2;
loopy2:
            x2 = 0;
            goto testx2;
loopx2:
            if (((tbl[0] >> x2) & 1) != 0) {
                if (r == 0) {
                    Unk_02086ec4_Vec3 v;
                    func_0204ed8c(&v, bx + x2, by + y2);
                    func_02086fc4(&v);
                    goto after;
                }
                r--;
            }
            x2++;
testx2:
            if (x2 < 32) goto loopx2;
after:
            if (x2 < 32) goto end;
            tbl++;
            y2++;
testy2:
            if (y2 < 32) goto loopy2;
        }
    }
end:
    unk_08 = 0;
}

void Unk_02086f84::func_02086fc4(Unk_02086ec4_Vec3 *v) {
    unk_00 = v->x;
    unk_04 = v->z;
}

// ---- 0x0208709c: walkability test
static inline BOOL Unk_0208709c_Chk(u16 *p) {
    BOOL f9 = TRUE;
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    BOOL f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (f1 == 0) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (f2 == 0) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (f3 == 0) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (f4 == 0) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (f5 == 0) {
        if (v != 0x69) f6 = FALSE;
    }
    if (f6 == 0) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (f7 == 0) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (f8 == 0) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

static inline u16 *Unk_0208709c_Cell(void *map, s32 x, s32 y) {
    s32 hx = x >> 4;
    s32 hy = y >> 4;
    s32 lx = x - (hx << 4);
    s32 ly = y - (hy << 4);
    return func_0204ebd8(map, hx, hy, lx, ly, 0);
}

static inline BOOL Unk_0208709c_In(u16 *p) {
    BOOL f = FALSE;
    if (*p >= 0x5000 && *p <= 0x5021) f = TRUE;
    return f;
}

#pragma opt_loop_invariants off
extern "C" BOOL func_0208709c(s32 x, s32 y, void *map) {
    if (map == 0) goto fail;
    if (func_02077f68() == 0) goto fail;
    for (s32 i = 1; i <= 2; i++) {
        s32 ty = y + i;
        s32 hx = x >> 4;
        s32 hy = ty >> 4;
        s32 lx = x - (hx << 4);
        u16 *p = func_0204ebd8(map, hx, hy, lx, ty - (hy << 4), 0);
        if (p == 0 || Unk_0208709c_In(p) || func_0204bd14(p) != 0 || (func_0204b08c(p) == 0 && Unk_0208709c_Chk(p))) {
            return FALSE;
        }
        p = Unk_0208709c_Cell(map, x, y - i);
        if (p == 0 || Unk_0208709c_In(p)) {
            return FALSE;
        }
    }
    return TRUE;
fail:
    return FALSE;
}

// ---- 0x02087210
class Unk_02087210 {
public:
    void func_02087210();
    void func_0208721c();
    void func_02087220();

    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
};

void Unk_02087210::func_02087210() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
}
void Unk_02087210::func_0208721c() {}
void Unk_02087210::func_02087220() {}

// ---- 0x02087224: big singleton (data_021d7350)
class Unk_02087224 {
public:
    u16 func_02087224();
    void func_02087230(u32 v);
    BOOL func_0208723c();
    u8 func_02087268();
    void func_02087274(u32 v);
    u8 func_02087280();
    void func_0208728c(u32 v);
    void *func_02087298();
    void func_0208729c();
    void func_020872c0();
    void func_020872c8();
    Unk_02087224 *func_020872dc();
    Unk_02087224 *func_020872ec();

    u32 unk_00[0x228 / 4];
    u16 unk_228;
    u8 unk_22a;
    u8 unk_22b;
};

u16 Unk_02087224::func_02087224() { return unk_228; }
void Unk_02087224::func_02087230(u32 v) { unk_228 = v; }
BOOL Unk_02087224::func_0208723c() {
    if (func_0209e170(data_021d7350, 0x13) == 0 && unk_22a == 2) return TRUE;
    return FALSE;
}
u8 Unk_02087224::func_02087268() { return unk_22b; }
void Unk_02087224::func_02087274(u32 v) { unk_22b = v; }
u8 Unk_02087224::func_02087280() { return unk_22a; }
void Unk_02087224::func_0208728c(u32 v) { unk_22a = v; }
void Unk_02087224::func_020872c0() { func_020872c8(); }
void Unk_02087224::func_020872c8() {
    unk_22a = 0;
    func_0208729c();
}
void Unk_02087224::func_0208729c() {
    func_02071e10(func_02087298(), 0xf);
    func_0207200c(func_02071e04(func_02087298()), 0);
}
Unk_02087224 *Unk_02087224::func_020872dc() {
    func_02071e5c(this);
    return this;
}
Unk_02087224 *Unk_02087224::func_020872ec() {
    func_02071e74(this);
    return this;
}

// ---- 0x020872fc: flag byte at +0xa
class Unk_020872fc {
public:
    void func_020872fc();
    void func_02087308();
    BOOL func_02087314();
    void func_02087328(u8 v);
    BOOL func_0208733c();
    void func_02087344(u8 v);
    u32 func_02087354();
    void func_0208735c();
    void func_02087364();
    void func_02087368();

    u32 unk_00[2];
    u16 unk_08;
    u8 unk_0a_0 : 4;
    u8 unk_0a_4 : 1;
    u8 unk_0a_5 : 1;
};

void Unk_020872fc::func_020872fc() { unk_0a_5 = 0; }
void Unk_020872fc::func_02087308() { unk_0a_5 = 1; }
BOOL Unk_020872fc::func_02087314() {
    if (unk_0a_5) return TRUE;
    return FALSE;
}
void Unk_020872fc::func_02087328(u8 v) { unk_0a_4 = v; }
BOOL Unk_020872fc::func_0208733c() { return unk_0a_4; }
void Unk_020872fc::func_02087344(u8 v) { unk_0a_0 = v; }
u32 Unk_020872fc::func_02087354() { return unk_0a_0; }
void Unk_020872fc::func_0208735c() { func_02063990(this); }
void Unk_020872fc::func_02087364() {}
void Unk_020872fc::func_02087368() {
    func_020639a0(this);
    unk_0a_0 = 0;
    unk_0a_4 = 0;
    unk_0a_5 = 0;
}

extern "C" void func_02087390() {
    u8 *const g = data_021d7350;
    void *a = func_0209750c();
    if (a != 0 && g != 0) {
        void *b = func_020986a4();
        func_02116048(g + 0x15fca, b, 12);
        if (func_020e77cc(((Unk_020872fc *)(g + 0x15fca))->func_02087354(), 1, 7) == 0) func_02097ff4(a, 0x33);
    }
}

extern "C" void func_020873e0() {
    u8 *const g = data_021d7350;
    if (func_0209750c() != 0 && g != 0) {
        func_02116048(func_020986a4(), g + 0x15fca, 12);
    }
}

extern "C" BOOL func_0208740c() {
    if (func_0209750c() != 0) {
        Unk_020872fc *p = (Unk_020872fc *)func_020986a4();
        if (p->func_0208733c() == 1) {
            if (func_020e77cc(p->func_02087354(), 1, 7) != 0) return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02087444() {
    if (func_0209750c() != 0) {
        Unk_020872fc *p = (Unk_020872fc *)func_020986a4();
        if (p->func_0208733c() == 0) {
            if (func_020e77cc(p->func_02087354(), 1, 7) != 0) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0208747c(s32 n) {
    if (n >= 1) {
        u8 *const g = data_021d7350;
        s32 v = ((Unk_020872fc *)data_021ed31a)->func_02087354() - n;
        if (v < 0) v = 0;
        if (v <= 0) {
            ((Unk_020872fc *)(g + 0x15fca))->func_02087368();
        } else {
            ((Unk_020872fc *)(g + 0x15fca))->func_02087344((u8)v);
        }
        func_02087390();
    }
}

extern "C" void *func_020874c8(void *p) {
    func_020639b8(p);
    return p;
}

void *Unk_02087224::func_02087298() {}
