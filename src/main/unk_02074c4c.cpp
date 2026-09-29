#include "types.h"

struct Unk_02074c4c_G { u8 pad[0x64]; u32 unk_64; u32 unk_68; };

extern "C" {
extern Unk_02074c4c_G *data_020cbb18;
extern void (*data_020cbc60[])(u32, u32, u32, u32);

s32 func_020720f8();
BOOL func_020eaca0();
BOOL func_02076b40(u32);
void func_020729cc(void *, s32);
u8 *func_02072ddc(void *, s32);
void func_02076bf0(void *, s32, s32);
BOOL func_02072ee4(void *, void *, u32, u32, u32, u32, u32, u32, u32, u32);
s32 func_02073190();
u32 func_020723e0(void *);
void *func_02072998(void *);
u32 func_020952e0(u32);
u32 func_020974a0(u32);
void func_02133ef8(void *, u32);
void *func_0208f0b0(u32);
void func_02116048(void *, void *, u32);
BOOL func_0208f1c0(void *);
void *func_020a0394();
u32 func_0209f14c();
BOOL func_02072e88(void *, s32);
void func_020727a0(void *);
void func_02072770(void *, void *, u32);
u32 func_0207694c(void *);
void func_02076ae8(void *, void *, void *);
void func_0205f094(s32, s32, u32, u32, u32);
void func_0205f144(void *);
u32 func_02072478(void *);
void func_02072454(void *, void *);
u32 func_020724d8(void *);
void func_020724b8(void *, void *);
void func_020a5dd8();
void func_020a5e94(u32);
void func_020a5ea4(u32);
void func_020a5eb4(u32, u32);
void func_020a66f4(void *);
void func_020a66ac(void *, void *, void *, void *);
void func_020a5f48(u32, u32);
void func_020a5f38();
void func_020a5f5c();
void func_020a66f0(void *);
void func_020a68a8(void *);
void func_020a6858(void *, void *, void *, void *, void *);
void func_020a6388(u32, u32, u32, u32, u32);
void func_020a6898(void *);
void func_020a63a8(u32, u32);
void func_020a6848(void *);
void func_020a6804(void *, void *, void *, void *, void *, void *);
void func_020a63bc(u32, u32, u32, u32, u32);
void func_020a6838(void *);
void func_020a6970(void *);
void func_020a6960(void *, void *);
void func_020a6430(u32, u32);
void func_020a696c(void *);
s32 func_020b50e8();
u32 func_020a0370();
void func_020a02a8(u32, u32);
void func_020a024c(u32, u32, u32);
void func_02073e14(u32);

BOOL func_020750ac(u8 *p, void *data, u32 size, u32 type, u32 mask);

BOOL func_02074c4c() {
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            func_020729cc(g, 0);
            func_02076bf0(func_02072ddc(g, 4), 0, 9);
            return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

BOOL func_02074cb4(u32 a) {
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            func_02076bf0(func_02072ddc(g, 4), 0, 0xb);
            return func_02072ee4(g, func_02072ddc(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

BOOL func_02074d18() {
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            func_02076bf0(func_02072ddc(g, 4), 0, 7);
            return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

BOOL func_02074d78() {
    u32 a = func_02073190();
    if (a != 0) {
        func_020720f8();
        if (func_020eaca0()) {
            if (func_02076b40(a)) {
                void *g = data_020cbb18;
                func_020729cc(g, 0);
                u8 *b = func_02072ddc(g, 4);
                func_02076bf0(b, 0, 8);
                b[1] = 1;
                return func_02072ee4(g, func_02072ddc(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
            }
        }
        return FALSE;
    }
    return TRUE;
}

BOOL func_02074df4(u32 a) {
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            u8 *b = func_02072ddc(g, 4);
            return func_02072ee4(g, b, func_020723e0(g), a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

void func_02074e50(u8 *p, u32 v) {
    func_020750ac(p, func_02072998(data_020cbb18), 0x68c, 0xc, v);
}

void func_02074e80(u8 *p, u32 v) {
    func_020750ac(p, (void *)func_020974a0(func_020952e0(data_020cbb18->unk_68)), 0x228c, 4, v);
}

BOOL func_02074eb4(s32 a, void *b, s32 c, void *d, s32 e, void *f) {
    s32 vals[3];
    void *ptrs[3];
    u8 *bufs[3];
    s32 offs[3];
    u16 masks[3];
    u32 i;
    s32 mode;
    void *g;
    func_020720f8();
    if (!func_020eaca0()) goto fail;
    vals[0] = a; vals[1] = c; vals[2] = e;
    ptrs[0] = b; ptrs[1] = d; ptrs[2] = f;
    func_02133ef8(bufs, 0xc);
    func_02133ef8(offs, 0xc);
    func_02133ef8(masks, 6);
    i = 0;
    g = data_020cbb18;
    for (; i < 3; i++) {
        mode = vals[i];
        if (mode != 3) {
            bufs[i] = func_02072ddc(g, i + 1);
            u8 *bb = bufs[i];
            func_02076bf0(bb, 0, 3);
            offs[i] = offs[i] + 1;
            if (mode == 0) {
                bb[1] = 0;
                offs[i] = offs[i] + 1;
            } else if (mode == 1) {
                bb[1] = 1;
                offs[i] = offs[i] + 1;
            } else {
                func_02116048(func_0208f0b0((u32)ptrs[i]), bb + 1, 0x84c);
                offs[i] = offs[i] + 0x84c;
            }
            masks[i] = 1 << (i + 1);
        }
    }
    if (a == 3 && c == 3) {
        if (e == 3) goto yes;
    }
    if (func_02076b40((u16)(masks[0] | masks[1] | masks[2]))) {
        return func_02072ee4(g, bufs[0], offs[0], masks[0], (u32)bufs[1], offs[1], masks[1], (u32)bufs[2], offs[2], masks[2]);
    }
    return FALSE;
yes:
    return TRUE;
fail:
    return FALSE;
}

BOOL func_02074ff0(u8 *p) {
    void *d = func_0208f0b0(4);
    if (func_0208f1c0(d)) {
        return func_020750ac(p, d, 0x84c, 2, 1);
    }
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            func_02076bf0(func_02072ddc(g, 4), 0, 2);
            return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

void func_02075078(u8 *p, u32 v) {
    void *d = func_020a0394();
    u32 n = func_0209f14c();
    u32 sz;
    if (n == 0) sz = 0x15fe4; else sz = n + 4;
    func_020750ac(p, d, sz, 1, v);
}

BOOL func_020750ac(u8 *p, void *data, u32 size, u32 type, u32 maskw) {
    u32 cnt = size / 0xffb;
    u32 rem = size % 0xffb;
    if (rem != 0) cnt++;
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(*(u16 *)&maskw)) {
            u32 off = *p * 0xffb;
            u32 left = size - off;
            if (left > 0xffb) left = 0xffb;
            void *g = data_020cbb18;
            u8 *b = func_02072ddc(g, 4);
            func_02076bf0(b, 0, type);
            func_02116048(&off, b + 1, 4);
            func_02116048((u8 *)data + off, b + 5, left);
            if (func_02072ee4(g, func_02072ddc(g, 4), left + 5, *(u16 *)&maskw, 0, 0, 0, 0, 0, 0)) {
                (*p)++;
            }
        }
    }
    if (*p >= cnt) return TRUE;
    return FALSE;
}

BOOL func_02075170(u32 a) {
    func_020720f8();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            func_020729cc(g, 0);
            u8 *b = func_02072ddc(g, 4);
            func_02076bf0(b, 0, 0);
            u32 m = 0;
            u32 i = 0;
            for (i = 0; i < 4; i++) {
                if (func_02072e88(g, i)) {
                    m |= (u8)(1 << i);
                }
            }
            m &= 0xf;
            u32 r = (u8)m;
            r |= (((u8)func_020952e0(0)) << 6) & 0xc0;
            b[1] = r;
            g = data_020cbb18;
            return func_02072ee4(g, func_02072ddc(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}

void func_0207521c(u32 idx, u32 x, u32 a, u32 b, u8 c, u32 d) {
    func_020727a0(data_020cbb18);
    data_020cbc60[idx](a, b, c, d);
}

void func_0207524c(u32 n) {
    u32 i = 0;
    void *g = data_020cbb18;
    s32 z = 0;
    u8 buf[7];
    while (i < n) {
        func_02072770(g, buf + 2, 5);
        u32 v = func_0207694c(buf + 2);
        func_02076ae8(buf + 4, buf, buf + 1);
        func_0205f094(((s8 *)buf)[5], ((s8 *)buf)[6], buf[0], v, buf[1] ? 1 : z);
        i += 5;
    }
}

void func_020752b0(u32 n) {
    u32 i = 0;
    void *g = data_020cbb18;
    u8 buf[5];
    while (i < n) {
        func_02072770(g, buf, 5);
        func_0205f144(buf);
        i += 5;
    }
}

void func_020752e4() { func_020a5e94(1); }

void func_020752f0(u32 n) {
    void *g = data_020cbb18;
    func_02072770(g, (void *)func_02072478(g), n);
    func_02072454(g, (void *)n);
}

void func_02075320(u32 n) {
    void *g = data_020cbb18;
    func_02072770(g, (void *)func_020724d8(g), n);
    func_020724b8(g, (void *)n);
    func_020a5dd8();
}

void func_02075354(u32 a, u32 b, u32 c, u32 d) { func_020a5ea4(d); }
void func_02075360(u32 a, u32 b, u32 c, u32 d) { func_020a5eb4(d, 1); }

void func_0207536c(u32 a, u32 b, u32 c, u32 d) {
    s32 v[5];
    func_020a66f4(v);
    Unk_02074c4c_G *g = data_020cbb18;
    func_02072770(g, v, 1);
    func_020a66ac(v, v + 1, v + 2, v + 3);
    if (d == 0) func_020a5f48(g->unk_64, v[1]);
    else func_020a5f48(d, v[1]);
    if (v[2] < 4) func_020a5f38();
    if (v[3] < 4) func_020a5f5c();
    func_020a66f0(v);
}

void func_020753d0(u32 a, u32 b, u32 c, u32 d) {
    struct { u8 t[4]; u32 pad; u32 w; } l;
    func_020a68a8(l.t + 3);
    func_02072770(data_020cbb18, l.t + 3, 2);
    func_020a6858(l.t + 3, l.t, l.t + 1, l.t + 2, &l.w);
    func_020a6388(d, l.t[0], l.t[1], l.t[2], l.w);
    func_020a6898(l.t + 3);
}

void func_02075428(u32 a, u32 b, u32 c, u32 d) {
    u8 t[4];
    func_02072770(data_020cbb18, t, 1);
    func_020a63a8(d, t[0]);
}

void func_02075450() {
    struct { u8 t[4]; u32 pad; u32 w1; u32 w2; } l;
    func_020a6848(l.t + 3);
    func_02072770(data_020cbb18, l.t + 3, 2);
    func_020a6804(l.t + 3, &l.w1, l.t, l.t + 1, l.t + 2, &l.w2);
    func_020a63bc(l.w1, l.t[0], l.t[1], l.t[2], l.w2);
    func_020a6838(l.t + 3);
}

void func_020754a8(u32 a, u32 b, u32 c, u32 d) {
    u8 t[2];
    func_020a6970(t);
    func_02072770(data_020cbb18, t, 1);
    func_020a6960(t, t + 1);
    func_020a6430(d, t[1]);
    func_020a696c(t);
}

void func_020754e8() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370()) {
            func_020a02a8(func_020a0370(), 1);
        }
    }
}

void func_0207550c(u32 a, u32 b, u32 c, u32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370()) {
            func_020a024c(func_020a0370(), d, 1);
        }
    }
}

void func_02075534() {
    u8 t;
    func_02072770(data_020cbb18, &t, 1);
    func_02073e14(t);
}
}
