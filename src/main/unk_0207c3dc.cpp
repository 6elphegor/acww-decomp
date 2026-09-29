#include "types.h"

struct Unk_0207c67c {
    u8 pad[0x6ac];
    u16 unk_6ac[10];
    u16 pad2[(0x6ea - 0x6c0) / 2];
    u16 unk_6ea;
};

struct Unk_0207ccd0_Rec {
    u8 pad[0x21];
    u8 unk_21_0 : 1;
};

extern u8 data_021cc984[];
extern u8 data_021cc95c[];
extern u8 data_021d7352[];
extern u8 data_021dfd8c[];

extern "C" {
s32 func_02094218(void *);
s32 func_020030b4(void *);
void func_02065cd4(void *);
void func_02065cc8(void *);
u32 func_02003098(void *);
u32 func_020966b0(void);
void func_0200301c(void *, void *, s32, void *);
void func_02065920(void *, u8 *, void *, u8 *, void *, void *, s32);
void func_020658a8(void *, u8 *, u8 *, u8 *, u8 *, void *, u8 *, void *, void *, s32);
void func_02065588(void *, u32, s32);
s32 func_02096a50(void *, s32);
u32 func_02063b8c(u32);
void *func_020805c4(void *);
void *func_0209750c(void);
void *func_0209888c(void *);
s32 func_02094058(void *);
void *func_0207f854(void *, void *);
void *func_0209817c(void *);
void *func_02080dd8(void *);
s32 func_02098d20(void *, void *, void *, void *);
s32 func_02080978(void);
void func_0209d498(void *);
s32 func_02081288(u32, void *);
void func_02080a88(void *);
s32 func_0207f040(void *);
s32 func_0204b2d4(void *);
s32 func_0207bcfc(u32, s32, s32);
s32 func_0207e1f0(void *);
void *func_0207a4b8(void *);
void *func_02099788(void);
s32 func_02128930(void *, void *, u32);
void *func_0207e268(void *);
void *func_0209a60c(void *);
void *func_0209a940(void);
s32 func_0209ad68(void *);
s32 func_0209ad28(void *);
s32 func_0209abc4(void *);
s32 func_0209ac64(void *);
s32 func_0209ab18(void *);
void *func_0209a610(void *);
s32 func_0209b294(void *);
s32 func_0207cd94(void *);
s32 func_0209b2e4(void *);
s32 func_0209b394(void *);
s32 func_0209b354(void *);
s32 func_0209b0c4(void *, void *);
s32 func_0209b044(void *, void *);
void func_0207e4b4(void *, s32, s32);
void func_02116048(void *, void *, u32);
s32 func_0207cbe8(void *, void *);
s32 func_0209b12c(void *);
void func_0207ca74(void *, void *);
s32 func_0209b18c(void *);
s32 func_0209b3b0(s32);
void *func_0207e310(void *);
void *func_02078578(void *);
s32 func_0209ad80(void *);
s32 func_0209b334(s32);
void func_0209ad54(void *, s32, void *, s32);
void *func_0209b00c(void *);
void *func_0209b010(void *);
s32 func_0209d020(void *);
s32 func_0209d3d0(void *, void *, s32);
void *func_0207f8cc(void *);
s32 func_0209d374(void *, void *);
void func_0209d2c0(void *, s32);
s32 func_0209b3a4(void *);
s32 func_0209b1e4(void *, s32);
s32 func_0209af4c(void *, void *);
void func_0209afa4(void *, void *);
void func_0209af0c(void *, s32, s32);
void func_0209aed4(void *, void *, void *);
void *func_020812e0(u32);
s32 func_0207c8e0(void *, void *);
void func_0209b350(void *, s32);
}

extern "C" {

s32 func_0207c3dc(void *a, u32 b, void *c, void *d, u16 *e) {
    u8 buf[2];
    u32 obj[0x3d];
    if (func_02094218(c) && func_020030b4(d)) {
        func_02065cd4(obj);
        func_02003098(d);
        buf[0] = func_020966b0();
        func_0200301c(d, data_021cc984, 0x28, a);
        buf[1] = b;
        func_02065920(obj, &buf[1], data_021cc984, buf, d, c, 1);
        if (e) {
            u32 v = *e;
            if (v != 0xfff1) func_02065588(obj, v, 1);
        }
        if (func_02096a50(obj, 0)) {
            func_02065cc8(obj);
            return TRUE;
        }
        func_02065cc8(obj);
    }
    return FALSE;
}

s32 func_0207c47c(void *a, u32 b, void *c, void *d, void *e, u16 *f) {
    u8 buf[5];
    u32 obj[0x3d];
    u32 v1, v2, v3, v4;
    if (func_02094218(d) && func_020030b4(e)) {
        func_02065cd4(obj);
        func_02003098(e);
        buf[0] = func_020966b0();
        v1 = b + func_02063b8c((u32)c);
        v2 = b + func_02063b8c((u32)c);
        v3 = b + func_02063b8c((u32)c);
        v4 = b + func_02063b8c((u32)c);
        func_0200301c(e, data_021cc95c, 0x28, a);
        buf[1] = v1;
        buf[2] = v2;
        buf[3] = v3;
        buf[4] = v4;
        func_020658a8(obj, &buf[1], &buf[2], &buf[3], &buf[4], data_021cc95c, buf, e, d, 1);
        if (f) {
            u32 v = *f;
            if (v != 0xfff1) func_02065588(obj, v, 1);
        }
        if (func_02096a50(obj, 0)) {
            func_02065cc8(obj);
            return TRUE;
        }
        func_02065cc8(obj);
    }
    return FALSE;
}

s32 func_0207c55c(void *a, void *b) {
    if (func_020030b4(func_020805c4(a))) {
        u8 *tbl = data_021d7352;
        if (b == 0) b = func_0209750c();
        if (b != 0 && (u32)tbl != 0) {
            void *r6;
            if (func_02094218(r6 = func_0209888c(b)) && func_02094058(r6) == 1) {
                r6 = func_0207f854(a, r6);
                if (r6 != 0) {
                    b = func_0209817c(b);
                    a = func_020805c4(a);
                    return func_02098d20(b, a, func_02080dd8(r6), tbl);
                }
            }
        }
    }
    return 0;
}

void func_0207c5e0(void *a, void *b) {
    if (func_020030b4(func_020805c4(a)) && func_02094218(b) && func_0207f854(a, b)) func_02080978();
}

s32 func_0207c618(void *a, void *b) {
    if (func_020030b4(func_020805c4(a))) {
        u32 v[2];
        v[0] = 0;
        v[1] = 0;
        if (b == 0) {
            func_0209d498(v);
            b = v;
        }
        return func_02081288(func_02003098(func_020805c4(a)), b);
    }
    return 0;
}

void func_0207c65c(u8 *p) {
    s32 i;
    for (i = 0; i < 8; p += 0x68, i++) func_02080a88(p);
}

void func_0207c67c(Unk_0207c67c *p, s32 n) {
    if (func_0207f040(p)) p->unk_6ea &= ~(1 << n);
}

s32 func_0207c6a8(Unk_0207c67c *p, s32 n) {
    if (func_0207f040(p)) {
        if ((p->unk_6ea >> n) & 1) return TRUE;
    }
    return FALSE;
}

void func_0207c6d4(Unk_0207c67c *p) {
    u16 *q = p->unk_6ac;
    u32 mask = 0;
    s32 cnt = 0;
    s32 i;
    s32 n, t;
    p->unk_6ea = 0;
    i = 0;
    do {
        if (func_0204b2d4(q)) {
            mask |= 1 << i;
            mask = (u16)mask;
            cnt++;
        }
        q++;
        t = i + 1;
        i = t;
    } while (t < 10);
    n = cnt;
    if (n > 5) n = 5;
    if (n > 3) n = func_02063b8c(n - 2) + 3;
    if (cnt > 0) {
        for (; n > 0; n--) {
            s32 r = func_0207bcfc(mask, cnt, 10);
            if (r != -1) {
                p->unk_6ea |= 1 << r;
                mask &= ~(1 << r);
                mask = (u16)mask;
                cnt--;
            }
        }
    }
}

s32 func_0207c764(void *a) {
    u16 *r5 = (u16 *)func_020805c4(a);
    s32 r = FALSE;
    if (func_020030b4(r5) && func_0207e1f0(a) == 3) {
        func_0207a4b8(data_021dfd8c);
        u16 *r4 = (u16 *)func_02099788();
        if (r5[0] == r4[0] && func_02128930(r5 + 1, r4 + 1, 8) == 0 && ((u8 *)r5)[0xb] == ((u8 *)r4)[0xb]) {
        } else {
            r = TRUE;
        }
    }
    return r;
}

void func_0207c7bc(void *a) {
    if (func_020030b4(func_020805c4(a))) {
        void *r6 = func_0207e268(a);
        void *r7 = func_0209a60c(r6);
        void *r4 = func_0209a940();
        if (func_0209ad68(r4)) {
            if (func_0209ad28(r4) == 0) {
                if (func_0209abc4(r4) == 3) {
                    if (func_0209ac64(r4) == 4) func_0207cd94(a);
                    func_0209ab18(r7);
                    func_0209b294(func_0209a610(r6));
                }
            }
        }
    }
}

s32 func_0207c828(void *a, void *b, void *c, void *d) {
    void *r6 = a;
    void *r5 = d;
    void *r8 = func_020805c4(a);
    void *r7 = func_0209a610(func_0207e268(a));
    s32 r4 = 12;
    s32 t = func_0209b2e4(r7);
    if (func_020030b4(r8) && func_0209b394(r7)) {
        switch (func_0209b354(r7)) {
        case 11:
            r4 = func_0209b0c4(r7, r5);
            if (r4 != 12) func_0207e4b4(r6, r4, t);
            if (r4 != 12) {
                func_02116048(r5, b, 8);
                if (*(long long *)c != 0) func_02116048(r5, c, 8);
            }
            break;
        case 10:
            r4 = func_0209b044(r7, r5);
            if (r4 != 12) func_0207e4b4(r6, r4, t);
            break;
        default:
            r4 = func_0207c8e0(r6, r5);
            break;
        }
    }
    return r4;
}

s32 func_0207c8e0(void *a, void *b) {
    void *r8 = func_020805c4(a);
    void *r6 = func_0209a610(func_0207e268(a));
    s32 r4 = 12;
    s32 r7 = func_0209b354(r6);
    s32 t;
    if (func_020030b4(r8) && func_0209b394(r6)) {
        t = func_0209b2e4(r6);
        if (func_0209b354(r6) == 8) {
            if (func_0207cbe8(a, b)) r4 = func_0209b12c(r6);
        } else {
            func_0207ca74(a, b);
            r4 = func_0209b18c(r6);
        }
        if (r4 != 12) {
            if (func_0209b3b0(r7) == 0 || r7 != r4) {
                func_0209ab18(func_0209a60c(func_0207e268(a)));
                void *r6b = func_02078578(func_0207e310(a));
                func_0209ad80(r6b);
                if (func_0209b334(r4) == 0) {
                    u16 v = 0xfff1;
                    func_0209ad54(r6b, r4, &v, 0);
                }
                if (func_0209b3b0(r4)) func_0207e4b4(a, r4, t);
            }
        }
    }
    return r4;
}

void func_0207c9bc(void *a, void *b) {
    void *r4 = func_0209a610(func_0207e268(a));
    if (func_020030b4(func_020805c4(a)) && func_0209b394(r4)) {
        r4 = func_0209b00c(r4);
        if (func_0209d020(r4) != 0 || func_0209d3d0(b, r4, 0x3f) == -1) func_02116048(b, r4, 8);
    }
}

void func_0207ca18(void *a, void *b) {
    void *r4 = func_0209a610(func_0207e268(a));
    if (func_020030b4(func_020805c4(a)) && func_0209b394(r4)) {
        r4 = func_0209b010(r4);
        if (func_0209d020(r4) != 0 || func_0209d3d0(b, r4, 0x3f) == -1) func_02116048(b, r4, 8);
    }
}

void func_0207ca74(void *a, void *b) {
    void *r5 = func_0209a610(func_0207e268(a));
    if (func_020030b4(func_020805c4(a)) && func_0209b394(r5) && func_0209b3a4(r5)) {
        void *r6 = func_0209b00c(r5);
        void *r7 = func_0207f8cc(a);
        s32 r4;
        s32 cnt;
        u32 tmp[2];
        if (func_0209d020(r6) == 0 && r7 != 0) {
            s32 d = func_0209d374(r6, b);
            if (d < 0) d = -d;
            cnt = d / 0x5a0;
            if (cnt > 0) {
                if (func_0209b1e4(r5, (s32)b)) {
                    tmp[0] = 0;
                    tmp[1] = 0;
                    r4 = cnt;
                    func_02116048(func_0209b010(r5), tmp, 8);
                    d = func_0209d374(tmp, r6);
                    if (d < 0) d = -d;
                    if (d / 0x5a0 < 7) {
                        func_0209d2c0(tmp, 6);
                        d = func_0209d374(tmp, b);
                        if (d < 0) d = -d;
                        r4 = d / 0x5a0;
                    }
                    for (; r4 > 0; ) {
                        if (func_0209af4c(r5, r7) == 0) break;
                        r4--;
                    }
                    func_0209afa4(r5, r7);
                }
                func_0209d2c0(r6, cnt);
            }
        }
    }
}

void func_0207cb68(void *a, void *b, void *c) {
    if (func_020030b4(func_020805c4(a))) func_0209af0c(func_0209a610(func_0207e268(a)), (s32)b, (s32)c);
}

void func_0207cb94(void *a, void *b) {
    if (func_020030b4(func_020805c4(a)) && func_020030b4(func_020805c4(b))) {
        void *r6 = func_0207f8cc(a);
        if (r6) {
            void *r4 = func_0209a610(func_0207e268(a));
            func_0209aed4(r4, func_0209a610(func_0207e268(b)), r6);
        }
    }
}

s32 func_0207cbe8(void *a, void *b) {
    void *r5 = func_020805c4(a);
    u8 *r4 = (u8 *)func_0209a610(func_0207e268(a));
    if (func_020030b4(r5) && func_0209b394(r4)) {
        u8 *r5b = (u8 *)func_020812e0(func_02003098(r5));
        r4 = (u8 *)func_0209b010(r4);
        if (func_0209d020(r4) == 0) {
            u32 tmpw[2];
#define TMP ((u8 *)tmpw)
            tmpw[0] = 0;
            tmpw[1] = 0;
            func_02116048(r4, TMP, 8);
            TMP[2] = r5b[2];
            TMP[1] = r5b[3];
            if (r4[2] > r5b[2] || (r5b[2] == r4[2] && r5b[3] == r4[1])) func_0209d2c0(TMP, 1);
            if (func_0209d3d0(b, TMP, 0x3e) == 1) return TRUE;
            return FALSE;
        }
    }
    return FALSE;
}

void func_0207cc88(void *a, void *b) {
    if (func_020030b4(func_020805c4(a))) {
        void *r6 = func_0209a610(func_0207e268(a));
        func_0209b350(r6, 10);
        func_02116048(b, func_0209b010(r6), 8);
        func_0209ab18(func_0209a60c(func_0207e268(a)));
    }
}

void func_0207ccd0(void *a, void *b) {
    if (func_020030b4(func_020805c4(a))) {
        Unk_0207ccd0_Rec *r4 = (Unk_0207ccd0_Rec *)func_0209a610(func_0207e268(a));
        if (func_0209b354(r4) == 2 || (func_0209b354(r4) == 8 && func_0209b2e4(r4) != 0)) {
            r4->unk_21_0 = 1;
        }
        func_0209b350(r4, 9);
        func_02116048(b, func_0209b010(r4), 8);
        func_0209ab18(func_0209a60c(func_0207e268(a)));
    }
}

}
