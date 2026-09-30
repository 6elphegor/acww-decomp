#include "types.h"

extern "C" {
s32 func_02087dac(void *info, s32 x, s32 y, s32 a, s32 b);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 flag);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_020026c4(void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_0200261c(void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_02002654(void *name, s32 h, s32 a);
s32 func_02002700(u32 v);
s32 func_020b8670(void *a, void *b, s32 c, s32 d);
void func_020b87d0(void *p);
void func_020b8800(void *p);
void func_020b85f8(void *p);
void func_0208dae8(void *a, u32 b, u32 c);
void func_020641b4(const void *src, void *dst, s32 n);
void func_02115e48(void *, void *, u32);
void func_020a7c3c(void *p);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_02135714(void *, s32, s32, void (*)(void *), void (*)(void *));
void func_021355f0(void *, s32, s32, void (*)(void *));
s32 func_02133150(s32, s32);
extern s32 data_021f482c;
extern u8 data_ov114_022965c0[];
extern u8 data_ov114_022965c8[];
extern u8 data_ov114_022965d0[];
extern u8 data_ov114_02296588[];
extern u8 data_ov114_02296590[];
extern u8 data_ov114_0229668c[];
extern u8 data_ov114_022966a4[];
extern u8 data_ov114_022966b8[];
extern u8 data_ov114_022966cc[];
extern u8 data_ov114_022966e0[];
extern u8 data_ov114_022966f4[];
extern u8 data_ov114_02296708[];
extern u8 data_ov114_02296720[];
extern u8 data_ov114_02296734[];
extern u8 data_ov114_0229674c[];
extern u8 data_ov114_02296760[];
extern u8 data_ov114_02296774[];
extern u8 data_ov114_02296788[];
extern u8 *data_ov114_022967a4;
}

// Base (vtable 0x02294a40 in ov094)
class Unk_ov094_02294a40 {
public:
    Unk_ov094_02294a40();
    virtual ~Unk_ov094_02294a40();
    void func_ov094_02293b54();
    u8 unk_04[0x800];
    u8 unk_804;
};

// Member at +0x808 (vtable 0x022965b0 region: D1 = 02295bf0, D0 = 02295bd0)
class Unk_ov114_02295c08 {
public:
    Unk_ov114_02295c08();
    virtual ~Unk_ov114_02295c08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[(0x20 - 4) / 4];
};

class Unk_ov114_020b8800 {
public:
    Unk_ov114_020b8800() { func_020b8800(this); }
    u8 unk_00[0x24];
    u8 unk_24[0x20];
    u8 unk_44[0x4e4 - 0x44];
};

class Unk_ov114_020b85f8 {
public:
    Unk_ov114_020b85f8() { func_020b85f8(this); }
    u32 unk_00[0x38 / 4];
};

class Unk_ov114_0206fcc8 {
public:
    Unk_ov114_0206fcc8() { func_0206fcc8(this); }
    ~Unk_ov114_0206fcc8() { func_0206fca8(this); }
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x11f8 (ctor func_ov002_02202f88, dtor func_ov002_02202f70)
class Unk_ov114_02202f88 {
public:
    Unk_ov114_02202f88();
    virtual ~Unk_ov114_02202f88();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    void func_ov002_02202f00();
    void func_ov002_02202ed0();
    void func_ov002_02202f0c();
    u32 unk_04[(0x54 - 4) / 4];
};

class Unk_ov114_02294c40 {
public:
    Unk_ov114_02294c40();
    ~Unk_ov114_02294c40();

    BOOL func_ov114_02295eb4(s32 x, s32 y);
    void func_ov114_02295f80();
    void func_ov114_02295fc0();
    void func_ov114_02295fec(s32 x);
    void func_ov114_0229600c();
    BOOL func_ov114_02296024(s32 x, s32 y);
    void func_ov114_02296078(s32 y);
    void func_ov114_02296148();
    void func_ov114_022961c0();
    void func_ov114_022962e4();
    void func_ov114_0229633c();
    void func_ov114_0229636c();
    void func_ov114_02296390(u8 a, u8 b, u8 c, u8 d);

    // callees outside this group
    void func_ov114_02294c40(s32 a);
    BOOL func_ov114_02294c60(s32 a);
    void func_ov114_02294ca4();
    void func_ov114_022951e0();
    void func_ov114_0229549c();
    void func_ov114_0229559c();
    BOOL func_ov114_0229563c(s32 a);
    void func_ov114_02295860();
    void func_ov114_022958a4();
    BOOL func_ov114_022959a0();
    BOOL func_ov114_022959d8();
    void func_ov114_02295c28();

    /* 0x000 */ Unk_ov094_02294a40 unk_00;
    /* 0x808 */ Unk_ov114_02295c08 unk_808;
    /* 0x828 */ u8 unk_828[0x9b0 - 0x828];
    /* 0x9b0 */ Unk_ov114_020b8800 unk_9b0;
    /* 0xe94 */ Unk_ov114_020b85f8 unk_e94[9];
    /* 0x108c */ u8 unk_108c[0x10f8 - 0x108c];
    /* 0x10f8 */ Unk_ov114_0206fcc8 unk_10f8[4];
    /* 0x11f8 */ Unk_ov114_02202f88 unk_11f8;
    /* 0x124c */ s32 unk_124c;
    /* 0x1250 */ s32 unk_1250;
    /* 0x1254 */ s32 unk_1254;
    /* 0x1258 */ s32 unk_1258;
    /* 0x125c */ s32 unk_125c;
    /* 0x1260 */ u8 unk_1260[0x10];
    /* 0x1270 */ s32 unk_1270;
    /* 0x1274 */ s32 unk_1274;
    /* 0x1278 */ s32 unk_1278[2];
    /* 0x1280 */ s32 unk_1280;
    /* 0x1284 */ s32 unk_1284;
    /* 0x1288 */ u16 unk_1288;
    /* 0x128a */ u8 unk_128a[2];
    /* 0x128c */ u8 unk_128c;
    /* 0x128d */ u8 unk_128d;
    /* 0x128e */ u8 unk_128e;
    /* 0x128f */ u8 unk_128f;
    /* 0x1290 */ u8 unk_1290[3];
    /* 0x1293 */ u8 unk_1293;
    /* 0x1294 */ u8 unk_1294[3];
    /* 0x1297 */ u8 unk_1297;
    /* 0x1298 */ u8 unk_1298;
    /* 0x1299 */ u8 unk_1299;
};

BOOL Unk_ov114_02294c40::func_ov114_02295eb4(s32 x, s32 y) {
    if (unk_11f8.func_ov002_02202f18(x, y)) {
        unk_1250 = unk_124c - x;
        unk_11f8.func_ov002_02202f00();
        unk_1297 = 2;
        unk_1254 = unk_124c;
        return TRUE;
    }
    s32 xs = x - 0x80;
    s32 ys = y - 0x60;
    if (func_02087dac(data_ov114_022965c0, xs, ys, 2, 2)) {
        unk_1297 = 0;
        return TRUE;
    }
    if (func_02087dac(data_ov114_022965c8, xs, ys, 2, 2)) {
        unk_1297 = 1;
        return TRUE;
    }
    if (x > 0x3a && x < 0xc6 && y > 0xac && y < 0xb8) {
        unk_11f8.func_ov002_02202f00();
        unk_1297 = 3;
        unk_1254 = unk_124c;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov114_02294c40::func_ov114_02295f80() {
    if (func_ov114_0229563c(func_02133150(unk_124c * unk_1274, 0x8c))) {
        func_ov114_0229559c();
    }
    unk_125c = 0;
}

void Unk_ov114_02294c40::func_ov114_02295fc0() {
    unk_124c = func_02133150(unk_1258 * 0x8c, unk_1274);
}

void Unk_ov114_02294c40::func_ov114_02295fec(s32 x) {
    func_0208dae8(&unk_11f8, unk_124c - 0x4e, x + 0x4a);
}

void Unk_ov114_02294c40::func_ov114_0229600c() {
    unk_11f8.vfunc_08();
}

BOOL Unk_ov114_02294c40::func_ov114_02296024(s32 x, s32 y) {
    s32 xs = x - 0x80;
    s32 ys = y - 0x60;
    if (func_02087dac(data_ov114_02296588, xs, ys, 2, 2)) {
        return func_ov114_022959d8();
    }
    if (func_02087dac(data_ov114_02296590, xs, ys, 2, 2)) {
        return func_ov114_022959a0();
    }
    return FALSE;
}

void Unk_ov114_02294c40::func_ov114_02296078(s32 y) {
    s32 py = y + 0x60;
    s32 i = 0;
    s32 z = i;
    do {
        s32 pal = unk_1278[i];
        u8 *b = (u8 *)this + i;
        u8 *q = b + 0x128a;
        u32 v = *q;
        if (v != 0) {
            *q = v - 1;
            pal = 6;
        }
        func_02088730(1, data_ov114_02296588 + i * 8, 0x80, py, pal, 1, z);
        i++;
    } while (i < 2);
    s32 py1 = py;
    if (unk_1297 == 0) py1 = py + 2;
    func_02088730(1, data_ov114_022965c0, 0x80, py1, -1, 1, 0);
    s32 py2 = py;
    if (unk_1297 == 1) py2 = py + 2;
    func_02088730(1, data_ov114_022965c8, 0x80, py2, -1, 1, 0);
    func_02087e70(1, data_ov114_022965d0, 0x80, py, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov114_02294c40::func_ov114_02296148() {
    s32 h = data_021f482c;
    func_020026c4(data_ov114_0229668c, h, 8, 7, 7, 0xe);
    func_020026c4(data_ov114_022966a4, h, 8, 4, 4, 6);
    func_0200261c(data_ov114_022966b8, h, 8, 0xc0, 0xc0, 0x140);
    func_0200261c(data_ov114_022966cc, h, 8, 0x141, 0x141, 0x1bf);
}

void Unk_ov114_02294c40::func_ov114_022961c0() {
    s32 h = data_021f482c;
    func_0200261c(data_ov114_022966e0, h, unk_128d, 0x109, 0x109, 0x153);
    func_0200261c(data_ov114_022966f4, h, unk_128d, 0x154, 0x154, 0x19f);
    if (unk_1293 == 1) {
        func_0200261c(data_ov114_02296708, h, unk_128d, 0x150, 0x150, 0x164);
    }
    switch (unk_1293) {
    case 0:
        data_ov114_022967a4 = data_ov114_02296720;
        break;
    case 1:
        data_ov114_022967a4 = data_ov114_02296734;
        break;
    }
    func_020026c4(data_ov114_022967a4, h, unk_128d, 1, 1, 6);
    func_020641b4(data_ov114_0229674c, unk_9b0.unk_24, 0x20);
    func_02115e48(unk_9b0.unk_24, unk_9b0.unk_44, 0x20);
    func_02002654(data_ov114_02296760, h, unk_128d);
    func_02002654(data_ov114_02296774, h, unk_128e);
    func_02002654(data_ov114_02296788, h, unk_128f);
}

void Unk_ov114_02294c40::func_ov114_022962e4() {
    func_ov114_02295c28();
    unk_11f8.func_ov002_02202ed0();
    func_ov114_022951e0();
    if (func_ov114_02294c60(1)) {
        if (func_020b8670(&unk_9b0, unk_9b0.unk_44, unk_128d, 4)) {
            func_ov114_02294c40(1);
        }
    }
}

void Unk_ov114_02294c40::func_ov114_0229633c() {
    func_020b87d0(&unk_9b0);
    func_ov114_022958a4();
    unk_11f8.vfunc_0c();
    func_ov114_02295860();
}

void Unk_ov114_02294c40::func_ov114_0229636c() {
    func_020b87d0(&unk_9b0);
    func_ov114_022958a4();
    func_ov114_02295860();
}

void Unk_ov114_02294c40::func_ov114_02296390(u8 a, u8 b, u8 c, u8 d) {
    unk_1288 = 0;
    unk_128d = a;
    unk_128e = b;
    unk_128f = c;
    unk_1280 = func_02002700(b);
    unk_1284 = func_02002700(c);
    unk_1293 = d;
    unk_00.func_ov094_02293b54();
    func_ov114_0229549c();
    switch (d) {
    case 0:
        unk_1270 = 0x38;
        unk_1299 = 7;
        break;
    case 1:
        unk_1270 = 0x38;
        unk_1299 = 8;
        break;
    default:
        unk_1270 = 0x38;
        unk_1299 = 0;
        break;
    }
    func_ov114_02294ca4();
    unk_1298 = 0x10;
    unk_1274 = (unk_1270 - 8) * 0x1b;
    unk_125c = 0;
    unk_11f8.func_ov002_02202f0c();
    u8 *p = &unk_128a[1];
    *p = 0;
    unk_128a[0] = *p;
    func_020a7c3c(&unk_808);
    unk_1297 = 4;
}

Unk_ov114_02294c40::~Unk_ov114_02294c40() {}

Unk_ov114_02294c40::Unk_ov114_02294c40() {}
