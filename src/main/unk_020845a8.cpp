#include "types.h"

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; };
struct Unk_02084ae4_Vec { s32 x, y, z; };
struct Unk_020847b0_P0 { u8 pad[0x88]; };
struct Unk_020847b0_Q0 { u8 pad[0xc]; };
struct Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Mid : Unk_020847b0_Q0, Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Top : Unk_020847b0_P0, Unk_020847b0_Mid { u8 pad[8]; };


extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021dfd8c[];
extern u8 data_020e0994[];
extern u8 data_021cd654[];
extern u8 data_020e416c;
extern u32 data_020cf1c8;
extern u8 data_020e0a78[];
extern u8 data_021ed315[];
extern u8 data_020cf208[];
extern u8 data_020cf1d8[];
extern u32 data_020cf1cc;

extern "C" {
void func_02083c08();
void func_02083e60(void *p);
void func_020782c4();
s32 func_020b5184();
void func_0207af34(void *p);
s32 func_020b4994();
s32 func_020b51b8();
void *func_0207bdf4(void *p, s32 v);
void *func_020805c4(void *p);
s32 func_020030b4(void *p);
void func_0207e4f4(void *p);
void *func_020850e0();
void *func_02085174(void *p);
void *func_02085170(void *p);
void func_02086e78(void *p);
void func_02086b88(void *p);
void func_02086b7c(void *p);
s32 func_02086eb0(void *p);
void func_02086e6c(void *p);
void func_02079a0c(void *p);
void func_02079954(void *p);
void func_0207821c(s32 v);
s32 func_020b50dc();
s32 func_020b5198(s32 v);
s32 func_02078294();
void func_0209d498(void *p);
s32 func_02079ab0(void *p, void *q);
void func_020782ac(s32 v);
void func_0207827c(s32 v);
s32 func_02083b84();
s32 func_02072e88(void *g, s32 i);
s32 func_0209750c();
s32 func_0209888c(s32 p);
void func_020793e8(void *p, s32 v);
s32 func_020b51a4();
s32 func_020b52f8();
s32 func_02079fd8();
s32 func_02078204();
s32 func_020b101c();
s32 func_020b5328();
void func_02083d14(void *p);
void *func_02083c28(void *a, void *b, u32 c);
void func_020832c4(void *p);
s32 func_0209865c(s32 p);
s32 func_0209ad68(void *p);
s32 func_0209ac64(void *p);
s32 func_0209d374(void *p, void *q);
s32 func_0209abc4(void *p);
s32 func_0207bfb4(void *p, void *q);
s32 func_0207c014(s32 v);
void func_02076a2c(void *a, void *b, void *c);
void func_02116048(void *src, void *dst, u32 n);
s32 func_0207bf38(void *p, void *q);
s32 func_0207e310();
s32 func_020785a8();
void func_020798a0(void *p);
s32 func_02002cf8(s32 a, s32 b, void *c, void *d, void *e);
s32 func_020b51d4();
void *func_0207bf60(void *p, s32 i);
void *func_02084398(void *p);
s32 func_020a62a0();
s32 func_02063b8c(s32 n);
s32 func_02072e44(void *g);
s32 func_02078264();
s32 func_0207a484(void *p);
s32 func_0207a4b8(void *p);
s32 func_02099668(s32 v);
s32 func_0207e1f0(void *p);
s32 func_020812f4();
s32 func_0207b7d4(void *p, void *q);
void func_02076ae8(void *a, void *b, s32 c);
s32 func_020b50e8();
s32 func_020b5178(s32 v);
void *func_0207f170(void *p);
void func_0204ed8c(void *p, s32 x, s32 y);
s32 func_0207e278(void *p);
void func_020339bc(void *buf, void *v, s32 a, s32 b);
s32 func_02033914(void *buf, s32 f);
void func_02033988(void *buf);
s32 func_0209ea50(void *p);
void *func_020838f4(s32 v);
void *func_02083780(s32 v);
u16 *func_02083578(s32 v);
u16 *func_0208343c(s32 v);
u16 *func_0208336c(s32 v);
u16 *func_0208323c(s32 v);
u16 *func_02083058(void *a, void *b, u32 c, s32 d);
u16 *func_0208310c(s32 v);
BOOL func_02084de0(s32 a, s32 *p);
s32 func_0203f2e0(s32 a, void *b, s32 c);
s32 func_02083f44(void *p);
void func_02083ef4(void *p, s32 x, s32 y);
s32 func_02083ed4(void *p, s32 x, s32 y);
void func_02084ae4(void *a);
void func_02084960(u8 *a);
void func_020847b0(void *a);
s32 func_02084e20(u8 *a, void *v);
void func_02084c94(void *a, void *v);
}

static inline BOOL Unk_020845a8_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" BOOL func_020845a8()
{
    func_02083c08();
    func_02083e60(data_020e0994);
    func_020782c4();
    if (func_020b5184()) {
        void *g = data_021dfd8c;
        func_0207af34(g);
        s32 v = func_020b4994();
        if (func_020b51b8()) {
            void *r = func_0207bdf4(g, (s8)v);
            if (r) {
                if (func_020030b4(func_020805c4(r))) {
                    func_0207e4f4(r);
                }
            }
        }
    }
    return TRUE;
}

extern "C" BOOL func_0208460c(u8 *a)
{
    u32 saved = data_020cf1c8;
    u8 *g = data_021dfd8c;
    func_02086e78(func_02085174(func_020850e0()));
    func_02086b88(func_02085170(func_020850e0()));
    if (func_020b5184()) {
        if (g != 0) {
            func_02079a0c(g);
            func_02079954(g);
        }
        func_0207821c(-1);
    } else {
        if (func_020b5198(func_020b50dc())) {
            s32 sp[2];
            sp[0] = 0;
            sp[1] = 0;
            s32 r4 = func_02078294();
            func_0209d498(sp);
            s32 m = -1;
            if (r4 != m) {
                if (r4 != func_02079ab0(g, sp)) {
                    func_020782ac(-1);
                    func_0207827c(-1);
                    if (g != 0) {
                        func_02079954(g);
                    }
                }
            }
        }
    }
    if (Unk_020845a8_IsZero(data_020e416c)) {
        if (func_02083b84() == 0) {
            if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
                s32 r1;
                if (func_0209750c()) {
                    r1 = func_0209888c(func_0209750c());
                } else {
                    r1 = 0;
                }
                func_020793e8(g, r1);
            }
            func_02084ae4(a);
        }
    } else if (func_020b51a4()) {
        func_02084960(a);
    } else if (func_020b52f8()) {
        if (g != 0) {
            if (func_02079fd8() != 0xa) {
                s32 m = -1;
                if (func_02078204() != m) {
                    func_0207821c(m);
                    func_020b101c();
                }
            }
        }
        if (func_020b5328() == 0) {
            func_020847b0(a);
        }
    }
    func_02083d14(a);
    u16 *r4 = (u16 *)func_02083c28(a, data_020e0a78, saved);
    if (r4) {
        func_02086b7c(func_02085170(func_020850e0()));
        if (r4[1] != 0xd008 || func_02086eb0(func_02085174(func_020850e0())) != 0) {
            func_02086e6c(func_02085174(func_020850e0()));
        }
    }
    func_020832c4(a);
    if (func_020b5184()) {
        func_0207af34(g);
    }
    return TRUE;
}

extern "C" void func_020847b0(void *a)
{
    s32 t;
    s32 code;
    BOOL flag;
    Unk_02084ae4_Vec v;
    u16 h[4];
    s32 vv[2];
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        return;
    }
    code = 0x85;
    flag = FALSE;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[1] = 0;
    h[2] = 0;
    h[3] = 0;
    h[0] = 0xfff1;
    s32 st = func_02079fd8();
    if (st == 0xb) {
        Unk_020847b0_Top *top = (Unk_020847b0_Top *)func_0209865c(func_0209750c());
        Unk_020847b0_Mid &m = *top;
        Unk_020847b0_Q1 &q = m;
        u8 *r7 = (u8 *)&m;
        u8 *r4 = (u8 *)&q;
        s32 r5 = ~flag;
        if (func_0209ad68(r4)) {
            if (func_0209ac64(r4) == 0x15) {
                vv[0] = flag;
                vv[1] = flag;
                func_0209d498(vv);
                t = func_0209d374(r7 + 0x18, vv);
                if (func_0209abc4(r4) == 0) {
                    if (t <= 0x1e) {
                        r5 = func_0207bfb4(data_021dfd8c, r7);
                    }
                } else if ((u32)func_0209abc4(r4) < 4) {
                    if (t <= 0x3c) {
                        r5 = func_0207bfb4(data_021dfd8c, r7);
                        if (func_0207c014(r5)) {
                            u8 *e = data_021cd654 + r5 * 30;
                            if (e[0] != 0) {
                                func_02076a2c(e + 4, &v.x, &v.z);
                                func_02116048(e + 9, &h[2], 2);
                            }
                        }
                    } else {
                        func_020b101c();
                        if (func_0207bf38(data_021dfd8c, r7)) {
                            func_0207e310();
                            func_020785a8();
                        }
                    }
                }
            }
        }
        if (r5 != -1) {
            h[0] = (r5 & 0xfff) | 0xe000;
            code = 0x82;
            flag = TRUE;
        }
    } else if (st == 0xa) {
        if (func_020b5198(func_020b50dc())) {
            func_020798a0(data_021dfd8c);
        }
        s32 r4 = func_02078204();
        if (func_0207c014(r4)) {
            h[0] = (r4 & 0xfff) | 0xe000;
            code = 0x87;
            if (func_020b5198(func_020b50dc()) == 0) {
                u8 *e = data_021cd654 + r4 * 30;
                if (e[0] != 0) {
                    func_02076a2c(e + 4, &v.x, &v.z);
                    func_02116048(e + 9, &h[2], 2);
                }
            }
            flag = TRUE;
        }
    }
    if (flag) {
        func_02002cf8(code, h[0], &v, 0, a);
    }
}

extern "C" void func_02084960(u8 *a)
{
    s32 r7 = func_020b51d4();
    void *obj = func_0207bf60(data_021dfd8c, r7);
    if (obj == 0) {
        return;
    }
    if (func_020030b4(func_020805c4(obj)) == 0) {
        return;
    }
    u16 h[5];
    Unk_02084ae4_Vec v;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[2] = 0;
    h[3] = 0;
    h[4] = 0;
    h[0] = (r7 & 0xfff) | 0xe000;
    u8 *e = (u8 *)func_02084398(h);
    s32 r4;
    if (func_020a62a0()) {
        r4 = func_02084e20(a, &v);
        h[3] = func_02063b8c(4) << 14;
    } else if (e != 0 && e[0] != 0) {
        func_02076a2c(e + 4, &v.x, &v.z);
        func_02116048(e + 9, &h[3], 2);
        r4 = 1;
    } else {
        r4 = func_02084e20(a, &v);
        h[3] = func_02063b8c(4) << 14;
    }
    if (r4 != 0) {
        s32 c = 0x85;
        s32 r6 = 0xd8;
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
            if (r7 == func_02078294()) {
                c = 0x80;
                if (func_0207c014(func_02078264())) {
                    h[1] = (func_02078264() & 0xfff) | 0xe000;
                    r6 = 0x81;
                }
            } else if (r7 == func_0207a484(data_021dfd8c)) {
                if (func_02099668(func_0207a4b8(data_021dfd8c)) == 0) {
                    c = 0x83;
                }
            } else if (func_02079fd8() == 0xa) {
                if (func_0207e1f0(obj) == 3) {
                    c = 0x86;
                }
            }
        }
        func_02002cf8(c, h[0], &v, &h[2], a);
        if (r6 != 0xd8) {
            if (((s32)(h[1] & 0xf000) >> 12) == 0xe) {
                func_02084e20(a, &v);
                h[3] = func_02063b8c(4) << 14;
                func_02002cf8(r6, h[1], &v, &h[2], a);
            }
        }
    }
}

struct Unk_02084ae4_W {
    u8 b;
    u16 h[4];
};

extern "C" void func_02084ae4(void *a)
{
    Unk_02084ae4_W w;
    Unk_02084ae4_Vec v;
    s32 n, cnt, i;
    w.h[0] = 0xfff1;
    w.h[1] = 0;
    w.h[2] = 0;
    w.h[3] = 0;
    n = func_020812f4();
    cnt = 0;
    w.b = 0;
    if (n > 0) {
        i = cnt;
        goto test0;
    loop0:
        void *r7 = func_0207bf60(data_021dfd8c, i);
        if (r7 == 0) goto next0;
        if (func_020030b4(func_020805c4(r7)) == 0) goto next0;
        if (func_0207b7d4(data_021dfd8c, func_020805c4(r7)) == 0) goto next0;
        w.b = 0;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        w.h[1] = 0;
        w.h[2] = 0;
        w.h[3] = 0;
        w.h[0] = (i & 0xfff) | 0xe000;
        u8 *e = (u8 *)func_02084398(&w.h[0]);
        if (e != 0 && e[0] != 0) {
            func_02076ae8(e + 3, &w, 0);
            if (w.b == func_020b50e8()) {
                func_02076a2c(e + 4, &v.x, &v.z);
                func_02116048(e + 9, &w.h[2], 2);
            } else {
                u8 *p = (u8 *)func_0207f170(r7);
                func_0204ed8c(&v, p[0] + 1, p[1] + 2);
            }
        } else if (func_020a62a0() && ((u8 *)(data_021cd654 + i * 30))[0] != 0) {
            u8 *t = data_021cd654 + i * 30;
            func_02076ae8(t + 3, &w, 0);
            s32 wb = w.b;
            if (wb != func_020b50e8() && func_020b5198(wb) == 0 && func_020b5178(w.b) == 0 && w.b != 0x2c) {
                u8 *p = (u8 *)func_0207f170(r7);
                func_0204ed8c(&v, p[0] + 1, p[1] + 2);
            } else {
                func_02076a2c(t + 4, &v.x, &v.z);
                func_02084c94(r7, &v);
            }
        } else {
            u8 *p = (u8 *)func_0207f170(r7);
            func_0204ed8c(&v, p[0] + 1, p[1] + 2);
        }
        if (func_02002cf8(0x84, w.h[0], &v, &w.h[1], a)) {
            cnt++;
        }
    next0:
        i++;
    test0:
        if (i < 8 && cnt < n) goto loop0;
    }
}

extern "C" void func_02084c94(void *a, void *vec)
{
    u32 buf[17];
    void *u;
    func_020339bc(buf, u, 0, 0);
    if (func_0207e278(a) == 0) {
        if (func_02033914(buf, 0)) {
            u8 *p = (u8 *)func_0207f170(a);
            func_0204ed8c(vec, p[0] + 1, p[1] + 2);
        }
    }
    func_02033988(buf);
}

extern "C" void func_02084ce0(u16 *out)
{
    s32 r4 = func_0209ea50(data_021ed315);
    u16 *p;
    void *q = func_020838f4(0);
    if (q == 0) {
        q = func_02083780(0);
    }
    if (q) {
        *out = 0xfff1;
        return;
    }
    p = func_02083578(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = func_0208343c(0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && func_02084de0(0x3d, 0)) {
        *out = 0xd00e;
        return;
    }
    p = func_0208336c(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = func_0208323c(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = func_02083058(data_020cf208, data_020cf1d8, data_020cf1cc, 0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && func_02084de0(0x3f, 0)) {
        *out = 0xd00a;
        return;
    }
    if (r4 == 0 && func_02084de0(0x40, 0)) {
        *out = 0xd00b;
        return;
    }
    p = func_0208310c(0);
    if (p) {
        *out = p[1];
        return;
    }
    *out = 0xfff1;
}

extern "C" BOOL func_02084de0(s32 a, s32 *p)
{
    s32 t[2];
    u8 buf[8];
    t[0] = 0;
    t[1] = 0;
    if (p == 0) {
        func_0209d498(t);
        p = t;
    }
    func_02116048(p, buf, 8);
    if (func_0203f2e0(a, buf, 0)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02084e20(u8 *a, void *out)
{
    s32 r6;
    if (func_02083f44(a + 0x50)) {
        s32 cnt = 0;
        s32 x, y;
        for (x = 0; x < 16; x++) {
            func_02083ef4(a + 0x50, x, 14);
            func_02083ef4(a + 0x50, x, 15);
        }
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (func_02083ed4(a + 0x50, x, y)) cnt++;
            }
        }
        if (cnt > 0) {
            s32 y, x;
            r6 = func_02063b8c(cnt);
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (func_02083ed4(a + 0x50, x, y)) {
                        if (r6 == 0) {
                            func_0204ed8c(out, x, y);
                            return 1;
                        }
                        r6--;
                    }
                }
            }
        }
    }
    return 0;
}
