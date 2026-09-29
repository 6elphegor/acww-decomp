#include "types.h"

struct Unk_020cbb18 {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06;
    u8 unk_07;
    u8 *unk_08;
    u32 unk_0c[3];
    u8 pad_18[0x64 - 0x18];
    s32 unk_64;
    s32 unk_68;
    u8 unk_6c;

    void func_02072e28(u32 v);
    BOOL func_02072e44();
    u8 func_02072e24();
    u32 func_02072e88(s32 i);
    void func_02072e94(s32 i, u32 v);
    void func_020729a8(u32 v);
    BOOL func_020729cc(u32 v);
    BOOL func_02072d44(s32 v);
    void func_020728d4();
    void func_020728a4(u8 *src, u32 n);
    void func_02072824(u32 a, u32 b);
};

struct Unk_0204da18 {
    void func_0204da24();
    void func_0204dab4();
};

struct Unk_020a25d8 {
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0xc8 - 0x9e];
    u32 unk_c8;
    u8 pad_cc[2];
    u16 unk_ce;
    u16 unk_d0;
    u8 unk_d2;
    u8 unk_d3;
    u8 unk_d4;
    u8 unk_d5;
    u8 unk_d6;
    u8 pad_d7;
    u8 unk_d8[8];
    u8 unk_e0;
    u8 unk_e1;
    u8 pad_e2[0xf0 - 0xe2];
    u8 unk_f0[8];
    u8 unk_f8[4];
};

struct Unk_020a2ecc_Reg {
    u8 pad_00[0x38];
    u16 unk_38;
};

extern Unk_020cbb18 *data_020cbb18;
extern u8 data_020e24ec;
extern u8 data_021ed3a8;
extern u8 data_021c3cb8;
extern u32 data_021ed304;
extern void *data_021ed3b4;
extern u8 data_021d7350[];
extern Unk_020a2ecc_Reg data_021ed2d0;

extern "C" {
void func_0209f2d4(Unk_020a25d8 *p, s32 v);
BOOL func_02073090(u32 v);
void func_0207312c();
u32 func_02073190();
u32 func_02073168();
BOOL func_020a15c8(Unk_020a25d8 *p, s32 v);
void func_0209fffc(Unk_020a25d8 *p);
void func_0209ff4c(Unk_020a25d8 *p);
void func_0209f390(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c);
BOOL func_0209f344(Unk_020a25d8 *p);
BOOL func_0209fb48(Unk_020a25d8 *p);
s32 func_020a5ef8();
u32 func_020a1484(Unk_020a25d8 *p, s32 v);
void *func_0208f0b0(u32 v);
void func_02116048(void *src, void *dst, u32 n);
void func_0208f1dc(void *p);
void func_020a14ac(Unk_020a25d8 *p);
void func_0209ec20(u32 v);
void func_0209f638(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
BOOL func_02074960(u32 v);
void func_02073e14(u32 v);
void func_020720f8();
BOOL func_020eaca0();
u32 func_020eb004();
void func_020b8e80();
void func_02045e98();
void func_0209f898(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d);
void func_020a15f8(Unk_020a25d8 *p);
void func_020a3ebc(Unk_020a25d8 *p, s32 v);
void func_0209f304(Unk_020a25d8 *p, u8 *st, u32 a);
BOOL func_020a1470(Unk_020a25d8 *p, s32 v);
void func_0209f430(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL func_020749cc();
void func_020a0088(Unk_020a25d8 *p, u32 a, u32 b);
void func_0209f1c4();
void *func_0209750c();
void func_0209801c(void *p, s32 v);
void func_020a5ee8(s32 v);
void func_020a63bc(u32 a, s32 b, u32 c, u32 d, u32 e);
void func_020741b8(u32 v);
BOOL func_02074e80(u8 *p, u32 v);
BOOL func_020a5cec();
BOOL func_02075170(u32 v);
BOOL func_02076744(u32 v);
BOOL func_02074df4(u32 v);
BOOL func_02074e50(u8 *p, u32 v);
BOOL func_02074a94(u32 v);
void func_0209f08c(u32 a, s32 b);
BOOL func_0209f080(u32 a);
void func_02114560();
BOOL func_02075078(u8 *p, u32 v);
BOOL func_02074bc8(u32 v);
void func_0209ec60(u32 v);
void func_02096b74();
void func_020b013c();
void func_0209ec0c();
BOOL func_02074d18();
BOOL func_02074ff0(u8 *p);
BOOL func_02097444(s32 v);
BOOL func_020a03f0();
void *func_02095204(u32 v);
void func_020ed188();
BOOL func_02074c4c();
u32 func_020eaf90();
u32 func_020952e0(u32 v);
void *func_020974a0(u32 v);
void func_02095300(u32 a, u32 b);
u32 func_0209cb9c(u32 *a, void *b);
u32 func_0209cb74(u32 *a, void *b);
Unk_0204da18 *func_0204da0c();
void func_0204c6a4(Unk_0204da18 *p);
void func_0204d42c();
void func_0204d3d8();
void func_0206daec(u8 *p);
BOOL func_02074cb4(u32 v);
BOOL func_ov048_0225b8a8();
void *func_020b4934();
void func_020b4bbc(void *p, u32 v);
void func_020b4940(void *p, u32 v);
}

extern "C" {

void func_020a25d8(Unk_020a25d8 *p) {
    func_0209f2d4(p, 0);
}

void func_020a25e4(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_020a15c8(p, 0)) {
            p->unk_ce = func_02073168();
            func_0209fffc(p);
            func_0209ff4c(p);
            p->unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            func_0209f390(p, &p->unk_9d, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_0209f344(p)) {
            p->unk_9d = 4;
        }
        break;
    case 4:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_0209fb48(p)) {
            s32 r5 = func_020a5ef8();
            u32 r7 = func_020a1484(p, r5);
            void *r6 = func_0208f0b0(r5);
            func_02116048(r6, func_0208f0b0(r7), 0x84c);
            func_0208f1dc(r6);
            func_020a14ac(p);
            func_0209ec20((u8)r5);
            p->unk_9d = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        u32 t = func_02073190();
        func_0209f638(p, &p->unk_9d, 1, 5, 0xf, 0x15, 4, 1, t);
        break;
    }
    case 12:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (p->unk_f8[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (g->func_02072d44(func_020a5ef8())) {
                    r6 = FALSE;
                }
            }
            if (r6) {
                if (func_02074960((u16)(1 << func_020a5ef8()))) {
                    p->unk_9d = 0xd;
                }
            }
        }
        break;
    case 13: {
        u32 r5 = func_02073190();
        r5 ^= (u16)(1 << func_020a5ef8());
        if (func_02073090(r5)) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0() || func_020eb004() <= 1) {
                func_02073e14(func_020a5ef8());
                Unk_020cbb18 *g = data_020cbb18;
                g->func_02072e28(2);
                if (g->func_02072e44()) {
                    u8 b = func_020a5ef8();
                    g = data_020cbb18;
                    g->func_020728d4();
                    g->func_020728a4(&b, 1);
                    g->func_02072824(5, 5);
                }
                p->unk_9d = 0xe;
            }
        }
        break;
    }
    case 14:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (p->unk_f0[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                func_020b8e80();
                g = data_020cbb18;
                g->func_020728d4();
                g->func_02072824(7, 5);
                if (g->unk_6c == 1) {
                    func_02045e98();
                }
                p->unk_9d = 0x1a;
            }
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        func_0209f898(p, &p->unk_9d, 0xf, 0x15, func_02073190(), 1);
        break;
    default:
        func_020a15f8(p);
        func_020a3ebc(p, 10);
        break;
    }
}

void func_020a28fc(Unk_020a25d8 *p) {
    func_0209f2d4(p, 0);
}

void func_020a2908(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a15c8(p, 0)) {
            p->unk_ce = func_02073168();
            p->unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_0209f304(p, &p->unk_9d, 1);
        }
        break;
    case 3:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a1470(p, data_020cbb18->unk_64)) {
            func_020a14ac(p);
            p->unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        func_0209f430(p, &p->unk_9d, 4, 0xe, 0x14, 1, 0, 1);
        break;
    case 12:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (g->func_02072d44(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (func_020749cc()) {
                    p->unk_9d = 0xd;
                }
            }
        }
        break;
    case 13:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (p->unk_e1 != 0) {
            func_020a0088(p, data_020e24ec, 0);
            data_020e24ec = 7;
            func_0209f1c4();
            func_020b8e80();
            p->unk_9d = 0x19;
        }
        break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        func_0209f898(p, &p->unk_9d, 0xe, 0x14, 1, 1);
        break;
    default:
        func_020a15f8(p);
        func_020a3ebc(p, 8);
        break;
    }
}

void func_020a2abc(Unk_020a25d8 *p) {
    func_0209f2d4(p, 0);
    func_0209801c(func_0209750c(), 2);
    func_020a5ee8(data_020cbb18->unk_64);
}

void func_020a2ae4(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (data_020cbb18->func_02072e24() == 1) {
            func_020a63bc(data_021ed3a8, 0xc, 1, 0, 7);
            Unk_020cbb18 *g = data_020cbb18;
            g->func_020729a8((u8)(g->unk_6c + 1));
            g->func_02072e94(data_021ed3a8, 1);
            func_020741b8(data_021ed3a8);
            p->unk_9d = 1;
        }
        break;
    case 1:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074e80(&p->unk_d4, (u16)(1 << data_021ed3a8))) {
            p->unk_9d = 2;
        }
        break;
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                if (p->unk_e0 != 0) {
                    data_020cbb18->func_02072e28(2);
                    p->unk_d2 = 1;
                    p->unk_9d = 3;
                }
            }
        }
        break;
    }
}

void func_020a2bdc(Unk_020a25d8 *p) {
    func_0209f2d4(p, 1);
}

void func_020a2be8(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0: {
        u32 r5 = func_02073190();
        r5 |= 1 << func_020a5ef8();
        if (func_02073090(r5)) {
            func_0207312c();
        } else if (func_020a5cec()) {
            p->unk_9d = 1;
        }
        break;
    }
    case 1:
    case 2: {
        u32 r5 = func_02073190();
        r5 |= 1 << func_020a5ef8();
        if (func_02073090(r5)) {
            func_0207312c();
        } else {
            func_0209f390(p, &p->unk_9d, 1, 0xd, 0x2f);
            if (p->unk_9d > 2) {
                func_020a63bc(data_021ed3a8, 0xc, 1, 0, 7);
                Unk_020cbb18 *g = data_020cbb18;
                g->func_020729a8((u8)(g->unk_6c + 1));
                g->func_02072e94(data_021ed3a8, 1);
                func_020741b8(data_021ed3a8);
            }
        }
        break;
    }
    case 3:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_02075170((u16)(1 << data_021ed3a8))) {
            p->unk_9d = 4;
        }
        break;
    case 4:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_02076744(data_021ed3a8)) {
            p->unk_9d = 5;
        }
        break;
    case 5:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_02074df4((u16)(1 << data_021ed3a8))) {
            p->unk_d4 = 0;
            p->unk_9d = 6;
        }
        break;
    case 6:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_02074e50(&p->unk_d4, (u16)(1 << data_021ed3a8))) {
            p->unk_9d = 7;
        }
        break;
    case 7:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_02074a94(data_021ed3a8)) {
            func_0209f08c(p->unk_c8, 1);
            p->unk_d4 = 0;
            p->unk_9d = 8;
        }
        break;
    case 8:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_0209f080(p->unk_c8)) {
            func_02114560();
            if (func_02075078(&p->unk_d4, (u16)(1 << data_021ed3a8))) {
                p->unk_9d = 9;
            }
        }
        break;
    case 9:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (p->unk_d5 != 0) {
            if (func_02074bc8((u16)(1 << data_021ed3a8))) {
                p->unk_9d = 10;
            }
        }
        break;
    case 10:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                if (p->unk_e0 != 0) {
                    data_020cbb18->func_02072e28(2);
                    p->unk_d2 = 1;
                    func_0209ec60(data_021ed3a8);
                    p->unk_9d = 11;
                }
            }
        }
        break;
    }
}

void func_020a2e9c(Unk_020a25d8 *p) {
    func_0209f2d4(p, 1);
    if (data_020cbb18->unk_6c == 1) {
        func_02096b74();
        func_02096b74();
        func_020b013c();
        func_0209ec0c();
    }
}

void func_020a2ecc(Unk_020a25d8 *p) {
    switch (p->unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074d18()) {
            p->unk_9d = 1;
        }
        break;
    case 1:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (p->unk_d0 != 0) {
            p->unk_d4 = 0;
            p->unk_9d = 2;
        }
        break;
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074ff0(&p->unk_d4)) {
            p->unk_d4 = 0;
            p->unk_9d = 3;
        }
        break;
    case 3:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_0209f080(p->unk_c8)) {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            for (; r5 >= 0; r5--) {
                if (r5 != 0) {
                    u32 m = (u16)(1 << r5);
                    if (m == (m & p->unk_d0)) {
                        if (func_02097444(r5 + 3) == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (!r6) {
                p->unk_9d = 4;
            }
        }
        break;
    case 4:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a03f0()) {
            func_02095204(4);
            func_020ed188();
            p->unk_9d = 5;
        }
        break;
    case 5:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02095204(4) == 0) {
            if (func_02074c4c()) {
                p->unk_9d = 6;
            }
        }
        break;
    case 6:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (p->unk_d6 != 0) {
            u32 r7 = func_020eaf90();
            Unk_020cbb18 *r5 = data_020cbb18;
            r5->unk_64 = r7;
            void *r6 = func_020974a0(func_020952e0(r5->unk_68));
            func_02116048(r6, func_020974a0(r5->unk_64 + 3), 0x228c);
            data_020e24ec = func_020952e0(r5->unk_68);
            r5->unk_68 = r7;
            u32 cnt = 0;
            u32 zero = 0;
            s32 i = 3;
            for (; i >= 0; i--) {
                if (p->unk_d0 & (1 << i)) {
                    r5->func_02072e94(i, 1);
                    cnt = (u8)(cnt + 1);
                } else {
                    r5->func_02072e94(i, zero);
                }
            }
            r5->func_020729a8(cnt);
            func_020a63bc(r7, 0xc, 1, 0, 7);
            func_02095300(0, p->unk_d3);
            func_02095300(r7, r7 + 3);
            func_02116048(data_021ed3b4, data_021d7350, 0x15fe0);
            u8 buf1[8];
            u8 buf2[8];
            func_02116048(p->unk_d8, buf1, 8);
            u32 *const r7p = &data_021ed304;
            u32 r6b = func_0209cb9c(r7p, buf1);
            func_02116048(p->unk_d8, buf2, 8);
            u32 h = func_0209cb74(r7p, buf2);
            *r7p = r6b;
            data_021ed2d0.unk_38 = h;
            if (func_0204da0c()) {
                func_0204da0c()->func_0204dab4();
                func_0204da0c()->func_0204da24();
                func_0204c6a4(func_0204da0c());
            }
            func_0204d42c();
            func_0204d3d8();
            func_020741b8(4);
            func_0206daec((u8 *)((u32)data_021d7350 + 0x15fa8));
            func_020b8e80();
            p->unk_d2 = 1;
            r5->func_02072e28(1);
            p->unk_9d = 7;
        }
        break;
    case 7:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_02074cb4(func_02073190())) {
            p->unk_9d = 8;
        }
        break;
    case 8:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                data_020cbb18->func_02072e28(2);
                if (func_ov048_0225b8a8()) {
                    func_020b4bbc(func_020b4934(), 2);
                    func_020b4940(func_020b4934(), 3);
                } else {
                    func_020b4bbc(func_020b4934(), 0);
                    func_020b4940(func_020b4934(), 3);
                }
                data_021c3cb8 = 1;
                p->unk_9d = 9;
            }
        }
        break;
    }
}

}
