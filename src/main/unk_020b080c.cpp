#include "types.h"
inline void *operator new(unsigned long, void *p) { return p; }

extern "C" {
// Other files
u32 func_02063b8c(u32 n);
u32 func_020b2bac(u32 a);
u32 func_020b2c14(u32 a);
u32 func_020b50e8(void);
BOOL func_020b5268(u32 a);
BOOL func_020b530c(u32 a);
BOOL func_020b52e4(u32 a);
BOOL func_020b5210(u32 a);
BOOL func_020b50bc(void);
BOOL func_020b51b8(u32 a);
u32 func_0202ffdc(void);
u32 func_0203107c(u32 a);
void func_020339bc(void *p, u32 a, u32 b, u32 c);
void func_02033988(void *p);
u16 *func_ov004_0222aaa0(void);
u32 func_02061950(u16 *p);
void func_020b16bc(void *p, const void *q);
void func_0206da9c(void *p, s32 a);
void func_02135558(void *obj, void *dtor, void *reg);
BOOL func_02072e44(void *p);
BOOL func_020729cc(void *p, u32 a);
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, u32 n);
void func_02072824(void *p, u32 a, u32 b);
u32 func_020b1690(void *p);
void func_020b16b8(void *p);
BOOL func_020b13e0(u32 a);
void func_02000c8c(void);
extern void *data_020cbb18;
extern u8 data_020e416c;
extern u32 data_021ee2a0;
extern u8 data_021ee288;
extern u8 data_021ee28c;
extern u8 data_021ee290;
extern u32 data_021ee2a8;
extern u32 data_021ee2e8[3];
extern u32 data_021ee2f4;
extern u16 data_020d0a14[];
extern u8 data_020d0a7c[];
extern u8 data_021ee330[];
void func_02116048(const void *src, void *dst, u32 size);
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02115ea8(u32 value, u32 dst, u32 size);
void func_020b87d0(void *p);
void func_020b8618(void *p, void *q, u32 a, u32 b, u32 c);
void func_020b8800(void *p);
void func_020a78ac(void *p);
void func_020a7c58(void *p);
void func_0205125c(void *p, u32 n);
u32 func_02094294(void *p);
void func_020942c8(void *p);
void func_020942f8(void *p);
void func_02114624(void);
void func_02114e48(void);
void func_0210f248(void);
void func_0210f9ac(u32 a);
void func_0210f554(void);
u32 func_01ffa314(void);
void func_01ffa3d4(u32 a);
void func_020fe5c0(u32 a, void (*cb)(u32, u32), u32 c);
void func_02097428(void);
void func_02119da8(u32 a);
void func_0204eeb4(void);
void func_020e914c(void);
void func_0204f054(void *p, void *a);
void func_021145cc(u32 a, u32 b);
void func_02114b4c(u32 a);
void func_02114710(u32 a, u32 b);
void func_0206d49c(void);
void func_01ffcb28(void);
void func_020e99a4(void);
void func_0205b794(void);
void func_01ffa404(u32 a, void (*cb)(void));
void func_01ffcc30(void);
void func_01ffcc60(void);
void func_01ff8128(u32 a);
void func_0210f1e8(u32 a);
void func_0210f218(u32 a);
void func_02050170(void);
void func_020376c0(void);
void func_02076c24(void *p, void *a);
void func_02076c50(void *p);
void func_020b7eec(void);
void func_020ec8b0(void);
void func_020e85d8(u32 a, u32 b);
void func_020537a4(void);
void func_02004520(void);
void func_020e7d2c(void);
void func_0209cfe4(void);
void func_02045c88(void);
void func_020380e0(void);
void func_02099214(void);
void func_02060b7c(void);
void func_0206d770(void);
void func_0209cb0c(void);

// This file
void func_020b0b18(void);
void func_020b0b54(void);
void func_020b0b74(u32 a, u32 b);
void func_020b0c80(void);
void func_020b0c84(void);
u32 func_020b0d24(u32 a);
u32 func_020b0d38(u32 a);
u32 func_020b0d60(u32 a);
u32 func_020b0d94(u32 a);
u32 func_020b0f80(u32 a);
u32 func_020b0fb0(u32 a);
u8 func_020b1034(void);

extern u32 OVERLAY_0_ID[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_69_ID[];
extern volatile u8 data_021ee284;
extern u8 data_0213af4c[];
extern u8 data_021cc7d0[];
extern u8 data_020e1e2c[];
extern u32 data_021f59e4;
extern u32 data_021cb3e4[2];
extern u32 data_021cb3ec[2];
extern u8 data_021cb3bc;
}

// ---- Unk_020e2f5c
class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();
    u32 unk_04;
    Unk_020e2a08 unk_08;
};

class Unk_020e2f5c : public Unk_020e2a60 {
public:
    Unk_020e2f5c();
    virtual ~Unk_020e2f5c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_0e[0x10];
};

class Unk_020e2f74 : public Unk_020e2a78 {
public:
    Unk_020e2f74();
    virtual ~Unk_020e2f74();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_12[0x11];
};

Unk_020e2f74::Unk_020e2f74() {
    func_020a7c3c();
}
Unk_020e2f74::~Unk_020e2f74() {}
u32 Unk_020e2f74::vfunc_08() { return 0x11; }
u8 *Unk_020e2f74::vfunc_0c() { return unk_12; }

Unk_020e2f5c::Unk_020e2f5c() {}
Unk_020e2f5c::~Unk_020e2f5c() {}
u32 Unk_020e2f5c::vfunc_08() { return 0x10; }
u8 *Unk_020e2f5c::vfunc_0c() { return unk_0e; }

extern "C" {
void *func_020b08b8(void *p) {
    func_020b8800(p);
    return p;
}
void func_020b08b4(void) {}
void func_020b0c80(void) {}
}

extern "C" {
void func_020b080c(u8 *p) {
    s32 i;
    BOOL changed;
    func_020b87d0(p);
    changed = FALSE;
    for (i = 0; i < 4; i++) {
        u8 *e = p + i;
        if (e[0x324] != 0) {
            e[0x324]--;
        } else {
            if (e[0x328] == 0) {
                e[0x328] = func_02063b8c(4) + 1;
                e[0x324] = func_02063b8c(15) + 5;
            } else {
                e[0x328] = 0;
                e[0x324] = func_02063b8c(30) + 10;
            }
            changed = TRUE;
            func_02116048(p + 0xa4 + e[0x328] * 128 + i * 32, p + 0x24 + i * 32, 0x20);
        }
    }
    if (changed) {
        func_020b8618(p, p + 0x24, p[0x32c], 4, 7);
    }
}

BOOL func_020b0980(u8 *p, u32 bit) {
    return (*(u16 *)(p + 0x460) & (1 << bit)) != 0;
}
void func_020b0998(u8 *p, u32 bit) {
    *(u16 *)(p + 0x460) &= ~(1 << bit);
}
void func_020b09ac(u8 *p, u32 bit) {
    *(u16 *)(p + 0x460) |= (1 << bit);
}
void func_020b09c0(u8 *p) {
    *(u16 *)(p + 0x460) = 0;
    *(u16 *)(p + 0x462) = 0;
}

void func_020b0a80(void) {
    vu16 *ime = (vu16 *)0x4000208;
    volatile u32 zero;
    u32 r5;
    u16 old;
    func_02114624();
    func_02114e48();
    func_0210f248();
    func_0210f9ac(8);
    zero = 0;
    func_02115ea8(zero, 0x6800000, 0x20000);
    func_0210f554();
    old = *ime;
    *ime = 1;
    r5 = func_01ffa314();
    data_021ee284 = 0;
    func_020fe5c0(8, func_020b0b74, 0);
    while (data_021ee284 == 0) {
    }
    func_01ffa3d4(r5);
    *ime;
    *ime = old;
    func_020b0b54();
    func_02097428();
    func_02119da8(2);
    func_020b0b18();
    func_0204eeb4();
    *(u16 *)data_0213af4c = 1;
    func_020e914c();
}

void func_020b0b18(void) {
    volatile u32 fill;
    u32 info[12];
    u32 start, size;
    func_0204f054(info, OVERLAY_0_ID);
    start = info[1];
    fill = 0xe7fee7fe;
    size = 0x229bdc0 - start;
    func_02115ea8(fill, start, size);
    func_021145cc(start, size);
}

void func_020b0b54(void) {
    func_02114b4c(0x23ff017);
    func_02114710(0, 0x23ff000);
}

void func_020b0b74(u32 a, u32 b) {
    if (b != 0) {
        func_0206d49c();
    }
    data_021ee284 = 1;
}

void func_020b0b90(void) {
    func_020b0c80();
    func_01ffcb28();
    func_020e99a4();
    func_0205b794();
    func_020b0c84();
    func_01ffa404(2, func_01ffcc30);
    func_01ff8128(3);
    *(vu16 *)0x4000208;
    *(vu16 *)0x4000208 = 1;
    func_01ffa314();
    func_0210f1e8(1);
    func_0210f218(1);
    func_02050170();
    func_020376c0();
    func_02076c24(data_021cc7d0, OVERLAY_69_ID);
    func_02076c50(data_021cc7d0);
    func_020b7eec();
    func_020ec8b0();
    func_020e85d8(0x13fc8, 0);
    func_020537a4();
    func_02004520();
    func_020e7d2c();
    func_0209cfe4();
    func_02045c88();
    func_020380e0();
    data_021f59e4 = (u32)data_020e1e2c;
    func_02099214();
    func_02060b7c();
    *(vu32 *)0x40004c8 = 0x296a5800;
    *(vu32 *)0x40004cc = 0x7fff;
    *(vu32 *)0x40004c0 = 0x7fff;
    *(vu32 *)0x40004c4 = 0;
    func_0206d770();
    func_0209cb0c();
    func_02076c24(data_021cc7d0, OVERLAY_68_ID);
}

void func_020b0c84(void) {
    data_021cb3e4[1] = 0;
    data_021cb3e4[0] = 0;
    data_021cb3ec[1] = 0;
    data_021cb3ec[0] = 0;
    func_01ffa404(1, func_01ffcc60);
    data_021cb3bc = 1;
}
}

// ---- array of 0x46-byte elements
class Unk_020b0a60 {
public:
    Unk_020b0a60();
    ~Unk_020b0a60();
    u8 unk_00[0x46];
};

Unk_020b0a60::Unk_020b0a60() {
    func_020942f8(this);
}
Unk_020b0a60::~Unk_020b0a60() {
    func_020942c8(this);
}

class Unk_020b09f0 {
public:
    Unk_020b09f0();
    ~Unk_020b09f0();
    Unk_020b0a60 unk_00[16];
};

Unk_020b09f0::Unk_020b09f0() {}
Unk_020b09f0::~Unk_020b09f0() {}


extern "C" {
void *func_020b0a18(void *p, const void *src) {
    func_02116048(src, p, 0x46);
    return p;
}

u32 func_020b0a30(u8 *p) {
    s32 i;
    for (i = 0; i < 16; i++) {
        ((u16 *)(p + 0x26))[i] = 0xffff;
    }
    func_0205125c(p + 0x16, 16);
    return func_02094294(p);
}
}

inline BOOL isFlag1() {
    return data_020e416c == 1;
}
inline BOOL isSpecial(u32 b) {
    BOOL r = TRUE;
    if ((u8)(b + 0xf5) > 3 && b != 0x2f) {
        r = FALSE;
    }
    return r;
}
inline BOOL isFlag0() {
    return data_020e416c == 0;
}

extern "C" {
void func_020b0cbc(u32 a) {
    if (func_0202ffdc() != (u32)-1) {
        u32 b = func_020b50e8();
        if (func_020b5268(b)) {
            func_020b0d24(5);
            return;
        }
        if (func_020b530c(b) || func_020b52e4(b)) {
            func_020b0d24(6);
            return;
        }
        if (func_020b5210(b)) {
            func_020b0d24(5);
            return;
        }
    }
    func_020b0d24(func_020b0d38(a));
}

u32 func_020b0d24(u32 a) {
    return func_020b0d94(func_020b0d60(a));
}

u32 func_020b0d38(u32 a) {
    u8 buf[0x40];
    u32 r;
    func_020339bc(buf, a, 0, 0);
    r = func_020b0d60(*(u32 *)(buf + 0x34));
    func_02033988(buf);
    return r;
}

u32 func_020b0d60(u32 a) {
    if (a == 0x1a) {
        if (isFlag1()) {
            u16 v = *func_ov004_0222aaa0();
            return func_02061950(&v);
        }
    }
    return a;
}
}

extern "C" {
u32 func_020b0d94(u32 a) {
    u32 b = func_020b50e8();
    u32 r = func_0203107c(a);
    if (r == 0xffff) {
        if (isFlag0()) {
            r = 0xc8;
        } else if (func_020b5268(b)) {
            r = func_020b0d24(5);
        } else if (func_020b530c(b) || func_020b52e4(b)) {
            r = func_020b0d24(6);
        } else if (func_020b5210(b)) {
            r = func_020b0d24(5);
        } else {
            r = 0x4a6;
        }
    }
    if (r == 0xc0) {
        if (func_020b50bc()) {
            if (isFlag0() || isSpecial(b)) {
                r = 0x877;
            }
        }
    }
    return r;
}
}

class Unk_021ee2e8 {
public:
    Unk_021ee2e8() : unk_00(0x10000), unk_04(0), unk_08(0x1e000) {}
    ~Unk_021ee2e8();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Nibbles {
    u8 lo : 4;
    u8 hi : 4;
};
extern Nibbles data_021ee330n[];

extern "C" {
void func_020b0e60(void) {
    u32 a = func_020b50e8();
    s32 r = -1;
    if (func_020b530c(a) || func_020b51b8(a)) {
        r = 0;
    } else if (a == 0x1a) {
        r = 1;
    } else if (a == 9) {
        r = 2;
    } else if (a == 10) {
        r = 3;
    }
    if (r != -1) {
        static Unk_021ee2e8 obj;
        func_0206da9c(&obj, r);
    }
}

u32 func_020b0ef4(void) {
    return data_021ee2a0;
}
void func_020b0f00(u32 a) {
    data_021ee2a0 = a;
}
u8 func_020b0f0c(void) {
    return data_021ee288;
}
void func_020b0f18(void) {
    data_021ee288 = 0;
}
void func_020b0f24(void) {
    data_021ee288 = 1;
}
u8 func_020b0f30(void) {
    return data_021ee28c;
}
void func_020b0f3c(void) {
    data_021ee28c = 0;
}
void func_020b0f48(void) {
    data_021ee28c = 1;
}

u32 func_020b0f54(void) {
    if (isFlag1()) {
        return func_020b0f80(func_020b50e8());
    }
    return 0;
}

u32 func_020b0f80(u32 a) {
    u32 r = func_020b2c14(func_020b0fb0(a));
    if (func_020b530c(a) && func_020b1034()) {
        return r + 2;
    }
    return r;
}

struct Id16 {
    u16 v;
};

inline BOOL inRange(Id16 id) {
    BOOL r = FALSE;
    if (id.v >= 0x5000 && id.v <= 0x5021) {
        r = TRUE;
    }
    return r;
}

inline u32 lookup(Id16 id) {
    BOOL ok = FALSE;
    if (inRange(id)) {
        ok = TRUE;
    }
    if (ok) {
        return data_021ee330n[func_020b2bac(id.v)].lo;
    }
    return 0;
}

u32 func_020b0fb0(u32 a) {
    void *p = data_020cbb18;
    if (!func_02072e44(p) || func_020729cc(p, 0)) {
        volatile u16 id = ((u16 *)data_020d0a14)[a];
        BOOL ok = FALSE;
        u16 v = id;
        if (v < 0x5000 || v > 0x5021) {
        } else {
            ok = TRUE;
        }
        if (ok) {
            return data_021ee330n[func_020b2bac(v)].lo;
        }
    }
    return 0;
}

void func_020b101c(void) {
    data_021ee290 = 0;
}
void func_020b1028(void) {
    data_021ee290 = 1;
}
u8 func_020b1034(void) {
    return data_021ee290;
}

void func_020b1040(u32 a, u32 b) {
    u32 i = func_020b2bac(a);
    void *p = data_020cbb18;
    if (!func_02072e44(p) || func_020729cc(p, 0) || func_020729cc(p, 4)) {
        data_021ee330n[i].lo &= ~(1 << b);
    } else {
        u8 x = i;
        p = data_020cbb18;
        func_020728d4(p);
        func_020728a4(p, &x, 1);
        func_02072824(p, 0x24, 0);
    }
}

u8 func_020b10c4(u32 a) {
    return data_021ee330n[func_020b2bac(a)].hi;
}
}

struct Bits {
    u8 a : 2;
    u8 b : 6;
};

extern "C" {
void func_020b10e0(u32 arg) {
    Bits bits;
    u16 buf[5];
    u32 idx = func_020b2bac(arg);
    void *p = data_020cbb18;
    if (!func_02072e44(p) || func_020729cc(p, 0)) {
        Nibbles *e = data_021ee330n + idx;
        u8 lo;
        u32 y, z;
        lo = e->lo;
        z = func_020b2c14(lo);
        lo = (u8)(lo | 1);
        y = func_020b2c14(lo);
        func_020b16bc(buf, idx < 0x22 ? data_020d0a7c + idx * 10 : data_020d0a7c);
        if (y > func_020b1690(buf)) {
            e->hi = 2;
        } else if (func_020b13e0(arg) && z == 0) {
            e->hi = 3;
        } else {
            e->lo = lo;
            e->hi = 1;
            func_020b13e0(arg);
        }
        func_020b16b8(buf);
    } else {
        data_021ee330n[idx].hi = 0;
        bits.a = 0;
        bits.b = idx;
        p = data_020cbb18;
        func_020728d4(p);
        func_020728a4(p, &bits, 1);
        func_02072824(p, 0x23, 0);
    }
}
}
