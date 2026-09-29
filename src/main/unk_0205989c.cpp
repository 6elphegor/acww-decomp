#include "types.h"

extern "C" {
// callees
void *func_0207bf38(void *tbl, s32 id);
void *func_0207fae4(void *p);
void func_0203ce38(s32 slot, s32 v);
void func_0203ce24(s32 slot, s32 v);
s32 func_02063b8c(s32 v);
void func_0200301c(s32 a, void *b, s32 c, s32 d);
void func_02003098(s32 a);
s32 func_020966b0();
void func_02065cd4(void *obj);
void func_02065cc8(void *obj);
void func_02065920(void *obj, u8 *b, void *fmt, u8 *c, s32 a, s32 b2, s32 c2);
void func_02065588(void *obj, u32 v, s32 f);
s32 func_02096aac(void *obj);
s32 func_02096a50(void *obj, s32 v);
void *func_0209750c();
s32 func_02098044(void *p, s32 v);
void *func_0209888c(void *p);
void func_020656dc(void *obj, u8 *b, void *fmt, void *s, void *s2, void *p);
s32 func_0209801c(void *p, s32 v);
s32 func_0204e474(void *grid, s32 x, s32 y);
s32 func_0209e170(void *tbl, s32 v);
void func_0209e148(void *tbl, s32 v);
void *func_02097868(void *tbl, s32 i);
s32 func_02098a48(void *p);
s32 func_02096b24(s32 i);
void func_020b4154(void *o);
void func_020b413c(void *o);
s32 func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ce4c(s32 slot, void *o);
void func_02062624(void *o, s32 a);
void func_0206260c(void *o);
void func_020a71d0(void *o);
void func_020a71b8(void *o);
void func_020b35ac(void *o, u8 *b, void *fmt);
s16 *func_0209c37c(s32 a, s32 b);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_02052f84(s32 v);
BOOL func_02053194(s32 v);
s32 func_0204b274(u16 *p);
BOOL func_0204b300(u16 *p);
s32 func_020531d4(u16 *p);
s32 func_020530f0(u16 *p);
s32 func_0205304c(u16 *p);
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_01ffc5a4(s32 a, s32 b);

extern u8 data_021dfd8c[], data_020dc0c4[], data_021c5dec[], data_020dc090[], data_020dc0d0[], data_020dc080[];
extern u8 data_021d7350[], data_021d735c[], data_020dc08c[], data_020dc084[], data_020dc0e0[], data_020dc07c[], data_020dc088[];
extern u8 data_021c5e5c[];

BOOL func_02059900(void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v);
}

extern "C" BOOL func_0205989c(s32 a, s32 b)
{
    void *r = func_0207bf38(data_021dfd8c, b);
    if (r) {
        func_0203ce38(2, *(u8 *)func_0207fae4(r));
        func_0203ce24(3, ((u8 *)func_0207fae4(r))[1]);
        return func_02059900(data_020dc0c4, func_02063b8c(3), a, b, 0, 0x1a);
    }
    return FALSE;
}

extern "C" BOOL func_02059900(void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v)
{
    if (func_0207bf38(data_021dfd8c, r3)) {
        u8 buf[2];
        u32 obj[0x3d];
        func_0200301c(r3, data_021c5dec, 0x28, (s32)r0);
        buf[0] = r1;
        func_02003098(r3);
        buf[1] = func_020966b0();
        if (v != -1) buf[1] = v;
        func_02065cd4(obj);
        func_02065920(obj, buf, data_021c5dec, &buf[1], r3, r2, 1);
        if (p) func_02065588(obj, *p, 1);
        if (func_02096aac(obj)) {
            func_02065cc8(obj);
            return TRUE;
        }
        if (func_02096a50(obj, 0)) {
            func_02065cc8(obj);
            return TRUE;
        }
        func_02065cc8(obj);
    }
    return FALSE;
}

extern "C" BOOL func_020599b0()
{
    u32 obj[0x3d];
    u8 b;
    void *p = func_0209750c();
    if (p && func_02098044(p, 3) && !func_02098044(p, 0xe)) {
        func_02065cd4(obj);
        b = 0x1b;
        func_020656dc(obj, &b, data_020dc0d0, data_020dc080, data_020dc090, func_0209888c(p));
        if (func_02096aac(obj)) {
            func_0209801c(p, 0xe);
            func_02065cc8(obj);
            return TRUE;
        }
        func_02065cc8(obj);
    }
    return FALSE;
}

extern "C" BOOL func_02059a30(s32 *a, s32 *b, s32 *c, s32 *d, void *grid)
{
    BOOL f0, f1, f2, f3;
    s32 y, x;
    *c = 16;
    *a = *c;
    *d = -16;
    *b = *d;
    f0 = FALSE; f1 = FALSE; f2 = FALSE; f3 = FALSE;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_0204e474(grid, x, y)) {
                if (x <= *a) { *a = x; f0 = TRUE; }
                if (x >= *b) { *b = x; f1 = TRUE; }
                if (y <= *c) { *c = y; f2 = TRUE; }
                if (y >= *d) { *d = y; f3 = TRUE; }
            }
        }
    }
    f0 = f0 & f1;
    f2 = f2 & f0;
    f3 = f3 & f2;
    if (f3) return TRUE;
    return FALSE;
}

extern "C" void func_02059adc(void *self, s32 n)
{
    s32 t = 1;
    s32 id = -1;
    s32 off = 0xfff1;
    if (func_0209e170(data_021d7350, t) == 0) {
        if (n >= 0x11170) { id = 0x18; off = 0x3854; }
    } else if (func_0209e170(data_021d7350, 2) == 0) {
        if (n >= 0x186a0) { id = 0x19; t = 2; off = 0x3858; }
    } else if (func_0209e170(data_021d7350, 0xb) == 0) {
        if (n >= 0x249f0) { id = 0x1a; t = 0xb; off = 0x385c; }
    }
    if (id != -1) {
        s32 i;
        s32 zero = 0;
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            u32 obj[0x3e];
            u8 b;
            if (p && func_02098a48(p) && func_02098044(p, 0xe) && !func_02096b24(i)) {
                func_02065cd4(obj);
                b = id;
                func_020656dc(obj, &b, data_020dc0d0, data_020dc084, data_020dc08c, func_0209888c(p));
                func_02065588(obj, off, 1);
                if (func_02096aac(obj)) {
                    func_0209e148(data_021d7350, t);
                    func_02065cc8(obj);
                    break;
                }
                if (func_02096a50(obj, zero)) {
                    func_0209e148(data_021d7350, t);
                    func_02065cc8(obj);
                    break;
                }
                func_02065cc8(obj);
            }
        }
    }
}

extern "C" BOOL func_02059c14(void *self, u8 a, s32 b, s32 c, s32 n)
{
    u32 objA[0xb];
    u32 objB[9];
    u32 objC[0xd];
    u32 objD[0x3e];
    u8 by[2];
    s32 i;
    s32 z = 0;
    func_020b4154(objA);
    if (func_020b3270(objA, b, 10, 1, 0, 0)) {
        func_0203ce4c(1, objA);
        func_02062624(objB, c);
        func_0203ce4c(2, objB);
        if (n < 4) {
            func_020a71d0(objC);
            by[1] = n;
            func_020b35ac(objC, &by[1], data_020dc0e0);
            func_0203ce4c(3, objC);
            func_020a71b8(objC);
        }
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            if (p && func_02098a48(p)) {
                if (func_0209c37c(z, 0x22)[0] != 0 || func_02098044(p, 0xe)) {
                    func_02065cd4(objD);
                    by[0] = a;
                    func_020656dc(objD, &by[0], data_020dc0d0, data_020dc088, data_020dc07c, func_0209888c(p));
                    func_02096aac(objD);
                    func_02065cc8(objD);
                }
            }
        }
        func_0206260c(objB);
        func_020b413c(objA);
        return TRUE;
    }
    func_020b413c(objA);
    return FALSE;
}

class Unk_02059d1c {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    void func_02059d1c(void *grid);
    s32 func_02059db0(void *grid, u8 *f1, u8 *f2);
    s32 func_02059e94(void *grid, s32 *out);
    s32 func_02059f3c(void *grid, s32 *out1, s32 *out2);
};

void Unk_02059d1c::func_02059d1c(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            volatile s32 hy = (s32)y >> 4;
            for (; x <= unk_08; x++) {
                s32 hx = (s32)x >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 v = func_0204b25c(p);
                    if (func_02052f84(v)) {
                        data_021c5e5c[v >> 3] |= 1 << (v & 7);
                    }
                }
            }
            }
        }
    }
}

s32 Unk_02059d1c::func_02059db0(void *grid, u8 *f1, u8 *f2)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            volatile s32 hy = (s32)y >> 4;
            for (; x <= unk_08; x++) {
                s32 hx = (s32)x >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p) {
                    if (func_0204b2d4(p)) {
                        if (func_02053194(func_0204b25c(p))) {
                            s32 r = func_0204b274(p);
                            if (x == unk_00 && r == 3) { *f1 = 1; total += 100; }
                            if (x == unk_08 && r == 1) { *f1 = 1; total += 100; }
                            if (y == unk_04 && r == 2) { *f1 = 1; total += 100; }
                            if (y == unk_0c && r == 0) { *f1 = 1; total += 100; }
                        }
                    } else if (func_0204b300(p)) {
                        *f2 = 1;
                        total += 1;
                    }
                }
            }
            }
        }
    }
    return total;
}

s32 Unk_02059d1c::func_02059e94(void *grid, s32 *out)
{
    u8 counts[5];
    u8 layer;
    u32 y, x;
    s32 total;
    u32 i;
    func_02115fb4(counts, 0, 5);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            volatile s32 hy = (s32)y >> 4;
            for (; x <= unk_08; x++) {
                s32 hx = (s32)x >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 k = func_020531d4(p);
                    counts[k] = counts[k] + 1;
                }
            }
            }
        }
    }
    total = 0;
    for (i = 0; i < 5; i++) {
        if (i != 4) {
            u8 *q = &counts[i];
            if (counts[i] >= 8) {
                *out = i;
                total += *q * 400;
            }
        }
    }
    return total;
}

s32 Unk_02059d1c::func_02059f3c(void *grid, s32 *out1, s32 *out2)
{
    u8 a_[3];
    u8 b_[3];
    u16 arr_[24];
    s32 total, k;
    volatile s32 cnt, cnt2;
    u32 i, j;
    u8 layer;
    u32 y, x;
    func_02115fb4(a_, 0, 3);
    func_02115fb4(b_, 0, 3);
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    total = 0;
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            volatile s32 hy = (s32)y >> 4;
            for (; x <= unk_08; x++) {
                s32 hx = (s32)x >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 v = func_0204b25c(p);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = func_020530f0(p);
                    a_[k] = a_[k] + 1;
                    cnt++;
                }
            }
            }
        }
    }
    if ((u32)cnt >= 10) {
        s32 n = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) n++;
        i = 0;
        s32 d = cnt << 12;
        s32 big = n * 300;
        s32 small = n * 100;
        for (; i < 3; i++) {
            if (i != 0) {
                s32 r = func_01ffc5a4(a_[i] << 12, d);
                if (r >= 0xe66) { *out1 = i; total += big; }
                else if (r >= 0xb33) { *out1 = i; total += small; }
            }
        }
    }
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt2 = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            volatile s32 hy = (s32)y >> 4;
            for (; x <= unk_08; x++) {
                s32 hx = (s32)x >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 v = func_0204b25c(p);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = func_0205304c(p);
                    b_[k] = b_[k] + 1;
                    cnt2++;
                }
            }
            }
        }
    }
    if ((u32)cnt2 >= 10) {
        s32 n = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) n++;
        i = 0;
        s32 d = cnt2 << 12;
        s32 big = n * 300;
        s32 small = n * 100;
        for (; i < 3; i++) {
            if (i != 0) {
                s32 r = func_01ffc5a4(b_[i] << 12, d);
                if (r >= 0xe66) { *out2 = i; total += big; }
                else if (r >= 0xb33) { *out2 = i; total += small; }
            }
        }
    }
    return total;
}
