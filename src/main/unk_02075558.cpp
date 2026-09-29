#include "types.h"

struct Unk_02075558_Obj {
    u32 pad_00[0x19];
    void *unk_64;
};

extern "C" {
s32 func_020b50e8();
void *func_020a0370();
s32 func_020a028c(void *, s32, s32);
s32 func_020a0254(s32);
s32 func_020a0284(void *, s32, s32);
s32 func_020a5f9c(void *, u32);
void func_02072770(void *, void *, s32);
void func_02077404(u32 *, u16 *, void *);
void *func_0207bf60(void *, u32);
void *func_0207d074(void *, s32);
void func_020774f0(u32 *, u16 *, void *);
s32 func_0207fd90(void *, u16 *);
void func_0207e268();
void *func_0209a60c();
void *func_0209a940(void *);
s32 func_0209ad68(void *);
s32 func_0209ac64(void *);
u16 *func_0209a8e8(void *);
s32 func_0207764c(u32 *, u8 *, u16 *, s32 *, u8 *, u32 *);
void func_0207e310(void *);
void func_02078578();
void func_0209ad80();
void *func_02097520(void *);
void *func_0209888c(void *);
s32 func_0209a9f0(void *, u32, u16 *, void *, s32);
void func_02077780(u32 *, u8 *, u8 *, u16 *);
s32 func_0209abb4(void *, u32);
s32 func_0209aaa0(void *);
s32 func_0209a944(void *);
s32 func_0209a8c8(void *, u32);
s32 func_0209a8b4(void *, u32);
void func_0207783c(u32 *, u32 *, u16 *, u8 *);
void *func_0207f86c(void *, u32);
s32 func_02080f94(void *);
s32 func_02080b78(void *, u16 *);
void func_02077a9c(u32 *, u32 *, void *);
s32 func_02080dd0(void *, s32);
s32 func_02080b38(void *, u32);
s32 func_02080ecc(void *, void *, u8 *, s32);
s32 func_02080f4c(void *, void *, u8 *, s32);
s32 func_0209c4a8(void *, s32);
s32 func_0209c4bc(void *);
s32 func_0209c4e4(void *, s32);
s32 func_02044490(void *, s32);
s32 func_020945b4(u32, s32);
s32 func_020945d4(u32, s32);
s32 func_0209549c(u8 *, u8 *, u8 *);
s32 func_02098824(void *, u32);
s32 func_020987fc(void *, u32);
s32 func_0204fe7c(void *, s32);
s32 func_020954c8(void *, u16 *, u32 *);
s32 func_0209463c(u16 *, u32, void *);
void *func_02098744(void *);
s32 func_0204b2d4(u16 *);
s32 func_0204b25c(void *);
s32 func_02098738(void *, u16 *);
u16 func_02061794(u16 *);
s32 func_020946f0(s32, void *);
void func_ov003_02227074(u32, s32);
void func_ov003_022271a8(u32);
struct Unk_02075bc4_Buf {
    u8 kind : 2;
    u8 pad0 : 6;
    u8 pad1 : 7;
    u8 flag : 1;
    u16 pos;
    u16 id;
    u16 pad2;
};
struct Unk_02075bc4_Q {
    u8 a : 3;
    u8 pad0 : 5;
    u8 pad1 : 7;
    u8 b : 1;
    u8 c : 1;
    u8 pad2 : 7;
};
struct Unk_02075bc4_Pt {
    s32 x, y;
};
void *func_0204da0c();
u16 *func_0204ebd8(void *, s32, s32, s32, s32, u32);
s32 func_020453e8(Unk_02075bc4_Pt *, u32);
s32 func_0204510c(Unk_02075bc4_Pt *, void *);
Unk_02075bc4_Q *func_02045214();
s32 func_02044774(void *, BOOL, void *);
extern void *data_020cbb18;
extern u32 data_021dfd8c[];
extern u8 data_021d7352[];
extern u8 data_020e416c;
}

static inline void *G() { return data_020cbb18; }

extern "C" void func_02075558(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a028c(func_020a0370(), d, 1);
        }
    }
}

extern "C" void func_02075580() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0370();
            func_020a0254(1);
        }
    }
}

extern "C" void func_020755a4(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0284(func_020a0370(), d, 1);
        }
    }
}

extern "C" void func_020755cc() {
    Unk_02075558_Obj *o = (Unk_02075558_Obj *)data_020cbb18;
    u8 b;
    func_02072770(o, &b, 1);
    func_020a5f9c(o->unk_64, b);
}

extern "C" void func_020755f4(s32 a, s32 b, s32 c, void *d) {
    u8 v;
    func_02072770(data_020cbb18, &v, 1);
    func_020a5f9c(d, v);
}

extern "C" void func_0207561c() {
    u32 id;
    u16 arr[4];
    u8 buf[9];
    void *r5;
    s32 i;
    arr[0] = 0xfff1;
    arr[1] = 0xfff1;
    arr[2] = 0xfff1;
    arr[3] = 0xfff1;
    func_02072770(data_020cbb18, buf, 9);
    func_02077404(&id, arr, buf);
    r5 = func_0207bf60(data_021dfd8c, id);
    if (r5 != NULL) {
        for (i = 0; i < 4; i++) {
            u16 *p = (u16 *)func_0207d074(r5, i);
            if (p != NULL) {
                *p = arr[i];
            }
        }
    }
}

struct Unk_02075680_Pad {
    s32 v[1];
    Unk_02075680_Pad() {}
    ~Unk_02075680_Pad() {}
};

static inline BOOL Unk_02075680_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

extern "C" void func_02075680() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    Unk_02075680_Pad pad;
    l.x = 0xfff1;
    func_02072770(data_020cbb18, l.y, 3);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        BOOL r4 = Unk_02075680_R(&l.x, 0x11a8, 0x12a7);
        if (r4) func_0207fd90(r0, &l.x);
    }
}

extern "C" void func_020756ec() {
    struct { u16 x; u8 y[4]; } l;
    u32 id;
    l.x = 0xfff1;
    func_02072770(data_020cbb18, l.y, 4);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        func_0207e268();
        void *r5 = func_0209a60c();
        void *r4 = func_0209a940(r5);
        if (func_0209ad68(r4)) {
            if (func_0209ac64(r4) == 0) {
                if (Unk_02075680_R(&l.x, 0x12b0, 0x12e7)) goto set;
            }
            if (func_0209ac64(r4) == 1) {
                if (Unk_02075680_R(&l.x, 0x12e8, 0x131f)) {
                set:
                    u16 *p = func_0209a8e8(r5);
                    *p = l.x;
                }
            }
        }
    }
}

extern "C" void func_020757ac() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 buf;
    u32 id;
    s32 n;
    l.a = 0x16;
    l.c = 0xfff1;
    n = 4;
    l.b = 0;
    func_02072770(data_020cbb18, &buf, 4);
    func_0207764c(&id, &l.a, &l.c, &n, &l.b, &buf);
    void *r6 = func_0207bf60(data_021dfd8c, id);
    if (r6 != NULL) {
        func_0207e268();
        void *r7 = func_0209a60c();
        void *r4 = NULL;
        BOOL t = l.b ? TRUE : FALSE;
        BOOL r5 = t ? TRUE : FALSE;
        func_0207e310(r6);
        func_02078578();
        func_0209ad80();
        if (n < 4) {
            void *q = func_02097520((void *)n);
            if (q != NULL) {
                r4 = func_0209888c(q);
            }
        }
        func_0209a9f0(r7, l.a, &l.c, r4, r5);
    }
}

extern "C" void func_02075860() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 id;
    l.a = 6;
    l.b = 0;
    func_02072770(data_020cbb18, &l.c, 2);
    func_02077780(&id, &l.a, &l.b, &l.c);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        func_0207e268();
        u8 *r4 = (u8 *)func_0209a60c();
        switch (l.a) {
        case 0:
            if (func_0209ad68(func_0209a940(r4))) {
                func_0209abb4(func_0209a940(r4), l.b);
            }
            break;
        case 1:
            func_0209aaa0(r4);
            break;
        case 2:
            if (func_0209ad68(func_0209a940(r4))) {
                func_0209a944(r4);
            }
            break;
        case 3:
            if (func_0209ad68(func_0209a940(r4))) {
                func_0209a8c8(r4, l.b);
            }
            break;
        case 4:
            if (func_0209ad68(func_0209a940(r4))) {
                func_0209a8b4(r4, l.b);
            }
        case 5:
            if (func_0209ad68(func_0209a940(r4))) {
                *(r4 + 0x26) = l.b;
            }
            break;
        }
    }
}

extern "C" void func_02075950() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    u32 k;
    l.x = 0xfff1;
    func_02072770(data_020cbb18, l.y, 3);
    func_0207783c(&id, &k, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, k);
        if (r4 != NULL) {
            if (func_02080f94(r4) != 0) {
                func_02080b78(r4, &l.x);
            }
        }
    }
}

extern "C" void func_020759b4() {
    s8 b[2];
    u32 id, x;
    void *r5 = data_020cbb18;
    func_02072770(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, x);
        if (r4 != NULL) {
            func_02072770(r5, b + 1, 1);
            func_02080dd0(r4, b[1]);
        }
    }
}

extern "C" void func_02075a10() {
    u8 b[2];
    u32 id, x;
    void *r5 = data_020cbb18;
    func_02072770(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, x);
        if (r4 != NULL) {
            func_02072770(r5, b + 1, 1);
            func_02080b38(r4, b[1]);
        }
    }
}

extern "C" void func_02075a6c(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    func_02072770(data_020cbb18, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = func_0207f86c(r0, x);
        if (r5 != NULL) {
            void *r1 = func_0209888c(func_02097520(d));
            func_02080ecc(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void func_02075acc(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    func_02072770(data_020cbb18, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = func_0207f86c(r0, x);
        if (r5 != NULL) {
            void *r1 = func_0209888c(func_02097520(d));
            func_02080f4c(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void func_02075b2c(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    func_02072770(data_020cbb18, &buf, 1);
    func_0209c4a8(&buf, d);
}

extern "C" void func_02075b54() {
    u32 buf;
    func_02072770(data_020cbb18, &buf, 1);
    func_0209c4bc(&buf);
}

extern "C" void func_02075b74(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    func_02072770(data_020cbb18, &buf, 1);
    func_0209c4e4(&buf, d);
}

extern "C" void func_02075b9c(s32 a, s32 b, s32 c) {
    u8 buf[14];
    func_02072770(data_020cbb18, buf, 0xe);
    func_02044490(buf, c);
}

extern "C" void func_02075ca0(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, n);
    func_020945b4(buf[0], d);
}

extern "C" void func_02075cc8(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    func_02072770(data_020cbb18, buf, n);
    func_020945d4(buf[0], d);
}

extern "C" void func_02075cf0(s32 n, s32 b, s32 c, void *d) {
    u8 buf[3];
    func_02072770(data_020cbb18, buf, n);
    func_0209549c(&buf[0], &buf[1], &buf[2]);
    void *r4 = func_02097520(d);
    func_02098824(r4, buf[1]);
    func_020987fc(r4, buf[2]);
}

extern "C" void func_02075df4(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[8];
    func_02072770(data_020cbb18, buf, n);
    func_0204fe7c(buf, d);
}

static inline BOOL Unk_02075d38_Same(BOOL a) {
    return a;
}

extern "C" void func_02075d38(s32 n, s32 b, s32 c, void *d) {
    u16 h, v;
    u8 buf[4];
    u32 k;
    func_02072770(data_020cbb18, buf, n);
    func_020954c8(buf, &h, &k);
    v = h;
    switch (k) {
    case 0:
    case 1:
    case 2:
        func_0209463c(&v, k, d);
        break;
    case 3: {
        void *r7 = func_02097520(d);
        u16 *r5 = (u16 *)func_02098744(r7);
        BOOL same;
        if (func_0204b2d4(&v) != 0) {
            s32 r6 = func_0204b25c(&v);
            if (r6 == func_0204b25c(r5)) same = TRUE; else same = FALSE;
        } else {
            if (v == *r5) same = TRUE; else same = FALSE;
        }
        if (!same) {
            u16 r = func_02061794(&v);
            func_02098738(r7, &v);
            func_020946f0(r + 1, d);
        }
        break;
    }
    }
}

static inline BOOL Unk_02075e1c_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void func_02075e1c(u32 n) {
    u8 buf;
    func_02072770(data_020cbb18, &buf, n);
    if (Unk_02075e1c_IsZero(data_020e416c)) {
        if (buf < 4) {
            func_ov003_02227074(buf, 0);
        } else {
            func_ov003_022271a8(buf);
        }
    }
}

extern "C" void func_02075bc4(s32 a, s32 b, s32 c, void *d) {
    void *grid;
    volatile u16 c1, b1, c2, b2, a1, a2;
    Unk_02075bc4_Buf buf;
    Unk_02075bc4_Pt pt, pt2;
    grid = func_0204da0c();
    if (grid != NULL) {
        BOOL ok;
        func_02072770(data_020cbb18, &buf, 8);
        ok = FALSE;
        a1 = buf.pos;
        u16 t1 = a1;
        b1 = t1;
        c1 = t1;
        s32 x = c1 >> 8;
        s32 y = b1 & 0xff;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), buf.flag);
        if (cell != NULL) {
            if (*cell == buf.id) {
                a2 = buf.pos;
                u16 t2 = a2;
                b2 = t2;
                c2 = t2;
                s32 x2, y2;
                pt.x = x2 = c2 >> 8;
                pt.y = y2 = b2 & 0xff;
                if (func_020453e8(&pt, buf.flag) < 0) {
                    pt2.x = x2;
                    pt2.y = y2;
                    if (func_0204510c(&pt2, d) != 0) ok = TRUE;
                } else {
                    Unk_02075bc4_Q *q = func_02045214();
                    if (q->a == buf.kind) {
                        if (q->b != 0) {
                            if (q->c == 0) ok = TRUE;
                        }
                    }
                }
            }
        }
        func_02044774(&buf, ok, d);
    }
}
