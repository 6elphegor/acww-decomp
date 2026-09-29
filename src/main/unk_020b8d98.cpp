#include "types.h"
#include "Unk_020d8c7c.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

struct Unk_021f4400 { u8 pad[9]; u8 unk_09; };
struct Unk_021f4420 { u8 pad[0x10]; u8 unk_10; };
struct Unk_021f44a0 { u8 pad[6]; u8 unk_06; u8 unk_07; u8 unk_08; };
struct Unk_021f1448 {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u16 unk_3c;
    /* 0x3e */ u16 unk_3e;
    /* 0x40 */ u8 pad_40[0x24];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u8 pad_70[8];
    /* 0x78 */ s32 unk_78;
};
struct Unk_021eff48 {
    /* 0x0000 */ s32 unk_0000;
    /* 0x0004 */ u8 pad_0004[0x1540];
    /* 0x1544 */ u32 unk_1544[2][2];
};
struct Unk_021f3010 { u8 pad[8]; u8 unk_08; u8 pad2[3]; };
struct Unk_021f14c8 { u8 pad[0xc]; s32 unk_0c; };
struct Unk_020b8ec0_Time { u8 unk_00; u8 unk_01; u8 unk_02; u8 pad[5]; };
struct Unk_02095204 { u8 pad[0x5c]; struct { u32 unk_00; u32 unk_04; u32 unk_08; } unk_5c; };
struct Unk_021efc08 { u8 pad[4]; u16 unk_04; };
struct Unk_021efa88 { u8 pad[2]; u16 unk_02; };

extern "C" {
extern Unk_021f4400 data_021f4400;
extern Unk_021f4420 data_021f4420;
extern Unk_021f44a0 data_021f44a0;
extern Unk_021f1448 data_021f1448;
extern Unk_021eff48 data_021eff48;
extern u8 data_021f14e0[];
extern u8 data_021ef6c4[];
extern u8 data_021efc18[];
extern u8 data_021f4398[];
extern u8 data_021f304c[];
extern u8 data_021ef658[];
extern Unk_021f3010 data_021f3010[5];
extern void *data_021f482c;
extern Unk_021f14c8 data_021f14c8;
extern u32 data_021f14c4;
extern u32 data_021f14cc;
extern u32 data_021f14d0;
extern u32 data_021f146c;
extern u32 data_021f14dc;
extern u32 data_021f14ac[3];
extern u32 data_021ef670;
extern u32 data_021c3070;
extern u32 data_021f145c[];
extern Unk_021efc08 data_021efc08;
extern Unk_021efa88 data_021efa88;
extern u8 data_020d0df4[];
extern u8 data_020d0df8[];
extern u8 data_020d0dec[];
extern u8 data_020e416c;
extern char data_020e676c[];
extern u8 data_020e6780[];

void *func_0209750c(void);
void func_0209801c(void *p, u32 x);
void func_020bb018(void *p);
void func_020bcdd8(void *p);
void func_020bca6c(void *p, u32 x);
void func_020bcadc(void *p, u32 x);
void func_020ba794(void *p);
void func_0209d498(void *p);
void func_020b9cd8(void *p, void *q);
void func_0209d124(void *p, u32 x);
s32 func_020b9d18(void *p, void *q);
void func_02116048(const void *src, void *dst, u32 size);
void func_0209d2c0(void *p, s32 x);
void func_0209d258(void *p, s32 x);
BOOL func_0209d3d0(void *p, void *q, u32 x);
s32 func_02133150(s32 a, s32 b);
void func_020ba1b4(void *p, u32 x);
void func_0205b690(void *p, void *fn, void *cb);
u32 func_0205b69c(void *p);
u32 func_0205b6e4(void *p, void *fn, void *cb, void *cb2);
void func_020014e4(u32 x);
void func_020014ac(u32 x);
void func_020014bc(u32 x);
void func_020014f4(u32 x);
void func_020015b8(u32 x);
void func_020015e0(u32 x);
void func_0209cf18(void *p);
void func_01ffcd4c(void);
void func_01ffcd50(void);
void func_01ffceb8(void);
void func_020b9848(void);
void func_020b96b8(void);
void func_020b9678(void);
void func_020b9608(void);
void func_020b95dc(void);
void *func_02095204(u32 x);
void func_020bd7c0(void *p, s32 x);
void func_020bce8c(void *p);
void func_020bc960(void *p);
BOOL func_0200261c(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *ptr);
void func_020e8558(u32 p);
void func_020641b4(void *a, void *b, u32 c);
void func_020aff60(void *p);
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
void func_020b0788(void *p, u32 x);
void func_020b0780(void *p);
BOOL func_020ba170(void *p, u32 a, u32 b);
BOOL func_020ba10c(void *p, void *a, void *b, u32 c, u32 d);
BOOL func_020ba3a0(u32 x);
void func_02111ec8(void *p, u32 a, u32 b);
void func_02111e60(void *p, u32 a, u32 b);
void func_020bafe0(void *p);
void func_020ba990(void *p);
void func_020bacc0(void *p);
BOOL func_0206ef50(void);
void func_020b080c(void *p);
void func_020bae8c(void *p);
void func_020bae84(void *p);
void func_020ba1dc(void *p);
void func_020ba998(void *p);
void func_020ba3e4(void *p);
BOOL func_020bdaa4(void *p);
void func_020baffc(void *p);
void func_020ba9e4(void *p);
void func_020b9d44(void *p);
void func_020ba670(void *p, u32 *a, u32 *b);
void func_020ba518(void);
void func_020b9b94(void);
void func_020b9964(void);
void func_020b9ea8(void *p);
void func_020ba624(s32 x);
s32 func_0206ede0(void);
s32 func_0203a4b0(void);
u16 func_020b9cb4(void *p);

void func_020b8d98(void) {}

void func_020b8de4(void) { data_021f4400.unk_09 = 1; }

void func_020b8df0(void) {
    void *p = func_0209750c();
    if (p != NULL) {
        func_0209801c(p, 0x32);
        func_020bb018(data_021f14e0);
    }
}

u32 func_020b8e14(void) { return data_021f4420.unk_10; }

void func_020b8e20(BOOL x) {
    if (x) {
        data_021f44a0.unk_08 = 1;
    } else {
        data_021f44a0.unk_07 = 1;
    }
}

void func_020b8e38(void) { data_021f44a0.unk_06 = 1; }

void func_020b8e44(void) {
    data_021f1448.unk_1c ^= 1;
    func_020bcdd8(data_021f14e0);
}

void func_020b8e60(u32 x) { func_020bca6c(data_021f14e0, x); }
void func_020b8e70(u32 x) { func_020bcadc(data_021f14e0, x); }
void func_020b8e80(void) { func_020ba794(&data_021eff48); }
void func_020b8e90(void) { func_020ba794(&data_021eff48); }
void func_020b8ea0(void) { func_020ba794(&data_021eff48); }
void func_020b8eb0(void) { func_020ba794(&data_021eff48); }

void func_020b8ec0(Unk_020b8ec0_Time *out, s32 a, s32 b) {
    u32 tmp[2];
    s32 r7;
    tmp[0] = 0;
    tmp[1] = 0;
    func_0209d498(tmp);
    func_020b9cd8(&data_021eff48, tmp);
    func_0209d124(tmp, 6);
    r7 = func_020b9d18(&data_021eff48, tmp);
    func_02116048(tmp, out, 8);
    if (a < 0) {
        a += 0x200;
    }
    if (a < r7) {
        a += 0x200;
    }
    func_0209d2c0(out, (a - r7) / 8);
    if (b < 0) {
        b = 0;
    } else if (b > 0x68) {
        b = 0x68;
    }
    out->unk_02 = 0x12;
    out->unk_01 = 0;
    out->unk_00 = 0;
    func_0209d258(out, b * 0x2d0 / 0x68);
    if (out->unk_02 == 6) {
        func_0209d124(out, 1);
    }
    func_0209d498(tmp);
    func_0209d258(tmp, 0x1e);
    if (func_0209d3d0(tmp, out, 0x3c) == 1) {
        func_0209d2c0(out, 0x40);
    }
}

u32 func_020b8f8c(void) { return data_021f1448.unk_3e; }
u32 func_020b8f98(void) { return data_021f1448.unk_3c; }

u32 func_020b8fa4(void) {
    if (data_021f1448.unk_28 != data_021f1448.unk_24) {
        return data_021f1448.unk_6c;
    }
    return data_021f1448.unk_64;
}

u32 func_020b8fbc(void) { return data_021f1448.unk_34; }

void func_020b8fc8(s32 *a, s32 *b) {
    *a = data_021f1448.unk_24;
    *b = data_021f1448.unk_28;
}

void func_020b8fd8(void) { func_020ba1b4(&data_021eff48, 0); }

s32 func_020b8fe8(void) {
    switch (data_021f1448.unk_24) {
    case 2:
    case 3:
    case 4:
        switch (data_021f1448.unk_34) {
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 0;
        }
    default:
        return 0;
    }
}

void func_020b901c(void) {
    func_0205b690(data_021ef6c4, (void *)func_01ffcd4c, (void *)func_020b9678);
    func_020014e4(0xa);
}

BOOL func_020b91f8(u32 idx);
BOOL func_020b9290(u32 idx);
BOOL func_020b9370(u32 idx);
void func_020b91bc(void);

BOOL func_020b9044(s32 arg) {
    BOOL result = FALSE;
    Unk_020b8ec0_Time t;
    if (arg == 0) {
        func_020015b8(1);
        func_0209cf18(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            func_020014ac(2);
        } else {
            func_020014bc(2);
        }
        func_020014bc(0x10);
        func_020014bc(8);
        vu16 *ra = (vu16 *)0x400100a;
        vu16 *rb = (vu16 *)0x400100e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4c00;
        *rb = (*rb & 0x43) | 0x6f00;
        func_0205b690(data_021ef6c4, (void *)func_01ffceb8, (void *)func_020b9848);
    } else {
        func_020015e0(1);
        func_0209cf18(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            func_020014e4(2);
        } else {
            func_020014f4(2);
        }
        func_020014f4(0x10);
        func_020014f4(8);
        vu16 *ra = (vu16 *)0x400000a;
        vu16 *rb = (vu16 *)0x400000e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4400;
        *rb = (*rb & 0x43) | 0x6700;
        func_0205b690(data_021ef6c4, (void *)func_01ffcd50, (void *)func_020b96b8);
    }
    if (arg != data_021eff48.unk_0000 || arg == 1) {
        if (func_020b9370(arg) && func_020b9290(arg) && func_020b91f8(arg)) {
            data_021eff48.unk_0000 = arg;
            func_020b91bc();
            result = TRUE;
        }
    }
    void *p = func_02095204(4);
    u32 *dst = &data_021f14dc;
    *dst = 0;
    if (p != NULL) {
        p = (u8 *)p + 0x5c;
        if (p != NULL) {
            *dst = ((u32 *)p)[2];
        }
    }
    return result;
}

void func_020b91bc(void) {
    Unk_021f3010 *p = data_021f3010;
    s32 i;
    for (i = 0; i < 5; p++, i++) {
        p->unk_08 = 0;
    }
    func_020bd7c0(data_021f4398, -1);
    func_020bce8c(data_021f14e0);
    func_020bc960(data_021f14e0);
}

BOOL func_020b91f8(u32 idx) {
    void *heap = data_021f482c;
    u8 v6 = data_020d0df4[idx];
    void *buf;
    if (!func_0200261c(data_020e676c, heap, v6, 0x10, 0x10, 0x1f)) {
        return FALSE;
    }
    buf = func_020e8618(heap, 0x1000);
    if (buf == NULL) {
        return FALSE;
    }
    func_020641b4(data_020e6780, buf, 0x1000);
    func_020aff60(buf);
    if (!func_020024f0(buf, v6, 0x1000, 0)) {
        func_020e85fc(heap, buf);
        return FALSE;
    }
    func_020e85fc(heap, buf);
    func_020b0788(data_021efc18, v6);
    return TRUE;
}

BOOL func_020b9290(u32 idx) {
    BOOL result = FALSE;
    if (data_021f1448.unk_20 != 0 && data_021f1448.unk_30 != 2) {
        s32 r3 = data_021f1448.unk_30;
        s32 r5 = data_021f1448.unk_78;
        s32 r2 = data_021f146c;
        s32 r1 = data_021f1448.unk_28;
        s32 r4;
        u32 r7;
        u32 stk4;
        if (r1 == r2) {
            if (r5 >= 0) {
                r5 = 0x20 - r5;
            } else if (r5 == 0) {
                switch (data_021f14c8.unk_0c) {
                case 3:
                case 4:
                    r5 = 0x20 - r5;
                    break;
                }
            }
        }
        if (r5 <= 0) {
            result = TRUE;
            goto end;
        }
        r7 = data_020d0df8[idx];
        if (r3 == 0) {
            r4 = r2 + 1;
            stk4 = 1;
        } else {
            r4 = r2 - 1;
            stk4 = 2;
        }
        switch (data_021f14c8.unk_0c) {
        case 3:
        case 4:
            if (r1 == r2) {
                r4 = r2;
            }
            break;
        }
        if (func_020ba170(&data_021eff48, r4, r7)) {
            if (func_020ba10c(&data_021eff48, &data_021f14cc, &data_021f14d0, stk4, r4)) {
                u8 *buf = (u8 *)data_021f14cc;
                u32 off, n;
                if (r4 == (s32)data_021f146c) {
                    n = r5 << 5;
                    off = (0x20 - r5) << 5;
                    buf += off;
                } else {
                    n = r5 << 5;
                    off = 0;
                }
                if (func_020024f0(buf, r7, n, off)) {
                    result = TRUE;
                }
            }
        }
    } else {
        result = TRUE;
    }
end:
    return result;
}

BOOL func_020b9370(u32 idx) {
    u8 r5;
    s32 r4;
    BOOL result;
    r4 = data_021f1448.unk_24;
    result = FALSE;
    r5 = data_020d0dec[idx];
    if (func_020ba3a0(idx)) {
        if (func_020ba170(&data_021eff48, r4, r5)) {
            u32 *r7 = (u32 *)&data_021f14c8;
            if (func_020ba10c(&data_021eff48, &data_021f14c4, r7, 0, r4)) {
                if (func_020024f0((void *)data_021f14c4, r5, *r7, 0)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}

}

class Unk_020e5668 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e5668();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
};

Unk_020e5668::~Unk_020e5668() {}

BOOL Unk_020e5668::vfunc_0c() {
    u32 saved = func_0205b69c(data_021ef6c4);
    s32 i, j, k;
    u32 *pp;
    func_02111ec8(data_021ef658, 0, 2);
    func_02111e60(data_021ef658, 0, 2);
    u32 *p4 = &data_021f14c4;
    u32 v4 = *p4;
    if (v4 != 0) {
        func_020e8558(v4);
    }
    *p4 = 0;
    p4 = &data_021f14cc;
    v4 = *p4;
    if (v4 != 0) {
        func_020e8558(v4);
    }
    *p4 = 0;
    for (i = 0; i < 2; i++) {
        u8 *row;
        j = 0;
        row = (u8 *)&data_021eff48 + i * 8;
        for (; j < 2; j++) {
            u8 *r0 = row + j * 4;
            u32 *q = (u32 *)(r0 + 0x1544);
            if (*(u32 *)(r0 + 0x1544) != 0) {
                func_020e8558(*(u32 *)(r0 + 0x1544));
            }
            *q = 0;
        }
    }
    pp = data_021f14ac;
    for (k = 0; k < 3; k++) {
        if (*pp != 0) {
            func_020e8558(*pp);
            *pp = 0;
        }
        pp++;
    }
    if (data_021ef670 != 0) {
        func_020bafe0(data_021f14e0);
    }
    func_020b0780(data_021efc18);
    func_020ba990((u8 *)this + 0x50);
    return saved;
}

BOOL Unk_020e5668::vfunc_24() {
    if (data_021ef670 != 0) {
        func_020bacc0(data_021f14e0);
    }
    return TRUE;
}

BOOL Unk_020e5668::vfunc_18() {
    if (data_021ef670 != 0) {
        if (!func_0206ef50()) {
            func_020b080c(data_021efc18);
        }
        func_020bae8c(data_021f14e0);
    } else {
        func_020bae84(data_021f14e0);
    }
    func_020ba1dc(&data_021eff48);
    func_020ba998((u8 *)this + 0x50);
    return TRUE;
}

BOOL Unk_020e5668::vfunc_00() {
    u32 r4 = 0;
    u32 v = 0;
    BOOL t = (data_020e416c == 0);
    if (t) {
        v = 1;
    }
    data_021ef670 = v;
    func_020ba3e4(&data_021eff48);
    if (data_021ef670 != 0) {
        if (func_020bdaa4(data_021f304c)) {
            if (func_020b9044(0)) {
                func_020baffc(data_021f14e0);
                r4 = func_0205b6e4(data_021ef6c4, (void *)func_01ffceb8, (void *)func_020b9848, (void *)func_020b9608);
            }
        }
    } else {
        if (func_020ba3a0(0)) {
            r4 = func_0205b6e4(data_021ef6c4, 0, 0, (void *)func_020b95dc);
        }
    }
    if (r4 != 0) {
        func_020ba9e4((u8 *)this + 0x50);
    }
    return r4;
}

void func_020b95dc(void) {
    u32 a, b;
    if (!func_0206ef50()) {
        func_020b9d44(&data_021eff48);
    }
    func_020ba670(&data_021eff48, &a, &b);
    func_020ba518();
}

void func_020b9608(void) {
    s32 a, b;
    func_020b9b94();
    if (!func_0206ef50()) {
        func_020b9964();
        func_020b9ea8(&data_021eff48);
    }
    func_020ba624(data_021eff48.unk_0000);
    if (data_021c3070 != 0) {
        a = func_0206ede0() * 0x123 >> 12;
        b = func_0203a4b0() * 30 >> 12;
        data_021f145c[data_021f1448.unk_1c ^ 1] = a + b;
    }
    data_021f1448.unk_3e = func_020b9cb4(&data_021eff48);
}

void func_020b9678(void) {
    vu16 t;
    t = data_021efc08.unk_04;
    *(vu16 *)0x5000400 = t;
    *(vu16 *)0x5000000 = data_021efa88.unk_02;
    *(vu32 *)0x4000000 = *(vu32 *)0x4000000 & 0xfffff5ff;
}
