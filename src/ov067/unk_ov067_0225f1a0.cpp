// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov067_0225f1a0_Ent {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[8];
};

struct Unk_ov067_0225f1a0_Cb {
    u32 unk_00;
    void (*unk_04)(u32, void *);
};

struct Unk_ov067_0225f1a0_W {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u16 unk_24;
    u16 unk_26;
    u32 unk_28[0x56];
    u16 unk_180;
    u16 unk_182;
    u32 unk_184;
    u32 unk_188;
    u16 unk_18c[2];
    Unk_ov067_0225f1a0_Cb *unk_190;
    Unk_ov067_0225f1a0_Ent unk_194[16];
};

struct Unk_ov067_0225f3fc_Hdr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};

struct Unk_ov067_0225f3fc_Pair {
    u16 a;
    u16 b;
};

struct Unk_ov067_0225f3fc_Wrap {
    Unk_ov067_0225f3fc_Pair p;
};

struct Unk_ov067_0225f3fc_Msg {
    Unk_ov067_0225f3fc_Hdr *unk_00;
    u16 unk_04;
};

struct Unk_ov067_0225fa80_X {
    u32 pad[0x50f0 / 4];
    u32 unk_50f0;
    u32 unk_50f4;
};

extern "C" {
u32 func_0211f800(void);
void func_0206d49c(void);
u32 func_0213335c(u32, u32);
void func_02115e64(u32, void *, u32);
void func_02116048(void *, void *, u32);
u16 func_021276e0(u32, u32);
void func_ov067_02260a4c(Unk_ov067_0225fa80_X *, u32, u32);

extern char data_ov067_02262028[];
extern char data_ov067_0226203c[];
extern char data_ov067_02262064[];
extern char data_ov067_02262078[];
extern char data_ov067_02262088[];
extern char data_ov067_0226209c[];
extern char data_ov067_022620b0[];
extern char data_ov067_022620c4[];
extern char data_ov067_022620d8[];
extern char data_ov067_022620ec[];
extern char data_ov067_022620fc[];
extern char data_ov067_02262108[];
extern char data_ov067_02262134[];
extern char data_ov067_02262148[];
extern char *data_ov067_02261f28[];
extern char *data_ov067_02261f78[];

char *func_ov067_0225f370(s32 n);
char *func_ov067_0225f38c(s32 n);
void func_ov067_0225f3e8(const char *fmt, ...);
void func_ov067_0225f618(Unk_ov067_0225f1a0_W *w, s32 idx, void *src);
void func_ov067_0225f8e4(Unk_ov067_0225f1a0_W *w, void *p);
void *func_ov067_0225f8ec(Unk_ov067_0225f1a0_W *w);
void *func_ov067_0225f8f4(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag);
}

#pragma thumb off

extern "C" u16 func_ov067_0225f1a0(s32 n) {
    u32 m = func_0211f800();
    if (m == 0) {
        func_0206d49c();
    } else if (m == 0x8000) {
        func_0206d49c();
    } else {
        n++;
        if (((1 << (n - 1)) & m) == 0) {
            do {
                n++;
                if (n > 16) {
                    n = 1;
                }
            } while (((1 << (n - 1)) & m) == 0);
        }
    }
    return (u16)n;
}

extern "C" BOOL func_ov067_0225f210(u16 *m) {
    u32 r5 = m[1];
    u32 c = m[0];
    BOOL r6 = r5 == 0 ? TRUE : FALSE;
    if (r6) {
        if (c == 0x80) {
            goto end;
        }
        if (c == 0xe) {
            if (m[2] != 0xa) {
                goto end;
            }
        }
        if (c == 0xc) {
            if (m[4] != 6) {
                goto end;
            }
        }
        func_ov067_0225f3e8(data_ov067_02262028, func_ov067_0225f38c(c));
    } else {
        if (c == 0xe) {
            if (r5 == 9 || r5 == 0xd || r5 == 0xf) {
                r6 = TRUE;
            }
        }
        if (r6 == 0) {
            char *n = func_ov067_0225f38c(c);
            char *e = func_ov067_0225f370(r5);
            func_ov067_0225f3e8(data_ov067_0226203c, n, e, m[2], m[3]);
        }
    }
end:
    return r6;
}

extern "C" BOOL func_ov067_0225f2ec(s32 code, s32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        func_ov067_0225f3e8(data_ov067_02262064, func_ov067_0225f38c(code));
    } else if (x == 2) {
        func_ov067_0225f3e8(data_ov067_02262078, func_ov067_0225f38c(code));
    } else {
        char *n = func_ov067_0225f38c(code);
        func_ov067_0225f3e8(data_ov067_02262088, n, func_ov067_0225f370(x));
        r = FALSE;
    }
    return r;
}

extern "C" char *func_ov067_0225f370(s32 n) {
    if (n < 0x14) {
        return data_ov067_02261f28[n];
    }
    return data_ov067_0226209c;
}

extern "C" char *func_ov067_0225f38c(s32 n) {
    if (n < 0x2c) {
        return data_ov067_02261f78[n];
    }
    if (n == 0x80) {
        return data_ov067_022620b0;
    }
    if (n == 0x81) {
        return data_ov067_022620c4;
    }
    if (n == 0x82) {
        return data_ov067_022620d8;
    }
    if (n == 0x83) {
        return data_ov067_022620ec;
    }
    return data_ov067_022620fc;
}

extern "C" void func_ov067_0225f3e8(const char *fmt, ...) {
}

extern "C" void func_ov067_0225f3f4(void) {
}

extern "C" void func_ov067_0225f3f8(void) {
}

extern "C" BOOL func_ov067_0225f3fc(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h;
    BOOL r6;
    h = msg->unk_00;
    r6 = FALSE;
    if (msg->unk_04 >= w->unk_182) {
        func_ov067_0225f3e8(data_ov067_02262108, h->unk_00, h->unk_01, h->unk_02, h->unk_04, h->unk_05, h->unk_06);
        if (h->unk_00 == w->unk_00) {
            *(Unk_ov067_0225f3fc_Wrap *)&w->unk_04 = *(Unk_ov067_0225f3fc_Wrap *)&h->unk_00;
        }
        if (h->unk_04 == w->unk_00) {
            u16 *p2 = (u16 *)((u8 *)msg->unk_00 + 8);
            switch (h->unk_05) {
            case 1:
                w->unk_1c = p2[0];
                w->unk_24 = p2[1];
                w->unk_184 = (u16)func_0213335c(w->unk_1c + w->unk_182 - 1, w->unk_182);
                w->unk_188 = w->unk_184;
                w->unk_02 = 0;
                w->unk_01 = 2;
                func_ov067_0225f3e8(data_ov067_02262134, w->unk_1c);
                break;
            case 2:
                func_ov067_0225f618(w, h->unk_06, p2);
                break;
            case 5:
                r6 = TRUE;
                break;
            }
        }
        if (h->unk_04 == w->unk_00) {
            if (h->unk_05 == 4) {
                if (w->unk_05 == 4) {
                    Unk_ov067_0225f1a0_Cb *cb = w->unk_190;
                    void (*fn)(u32, void *) = cb->unk_04;
                    u32 *e = (u32 *)func_ov067_0225f8ec(w);
                    struct {
                        u32 a;
                        u32 b;
                        u32 c;
                        u16 d;
                    } l;
                    volatile u32 tmp;
                    func_ov067_0225f8e4(w, 0);
                    l.a = w->unk_18;
                    l.b = w->unk_1c;
                    l.c = w->unk_20;
                    l.d = w->unk_24;
                    w->unk_00 = w->unk_00 + 1;
                    w->unk_01 = 0;
                    w->unk_08 = 0;
                    w->unk_0c = 0;
                    tmp = 0;
                    func_02115e64(tmp, &w->unk_28, 0x158);
                    w->unk_18 = 0;
                    w->unk_1c = 0;
                    w->unk_20 = 0;
                    w->unk_184 = 0;
                    if (fn != 0) {
                        fn(5, &l);
                    }
                    if (e[0] != 0) {
                        func_ov067_0225f8e4(w, e);
                    }
                    if (w->unk_08 == 0) {
                        w->unk_01 = 5;
                    } else {
                        w->unk_01 = 1;
                    }
                }
            }
        }
    }
    return r6;
}

extern "C" void func_ov067_0225f618(Unk_ov067_0225f1a0_W *w, s32 idx, void *src) {
    u32 *bm;
    u32 rem;
    s32 j;
    u32 off;
    u32 seg;
    u32 r5;
    s32 k;
    s32 n;
    u32 *slot;
    s32 i0;
    u32 total;
    if (w->unk_18 == 0) {
        return;
    }
    if ((u32)idx >= w->unk_184) {
        return;
    }
    bm = w->unk_28;
    u32 bit = 1 << (idx & 0x1f);
    slot = &bm[idx >> 5];
    u32 t = bm[idx >> 5];
    if (t & bit) {
        return;
    }
    seg = w->unk_182;
    off = idx * seg;
    rem = w->unk_1c - off;
    if (rem > seg) {
        rem = seg;
    }
    func_02116048(src, (void *)(w->unk_18 + off), rem);
    *slot |= bit;
    w->unk_188 = w->unk_188 - 1;
    if (w->unk_188 == 0) {
        w->unk_01 = 4;
        return;
    }
    i0 = w->unk_18c[0];
    total = w->unk_184;
    r5 = i0;
    if (i0 >= total) {
        r5 = total - 1;
    }
    for (;;) {
        i0++;
        if (i0 >= total) {
            i0 = 0;
        }
        if (i0 == r5) {
            i0 = w->unk_18c[1];
            break;
        }
        if (w->unk_28[i0 >> 5] & (1 << (i0 & 0x1f))) {
            continue;
        }
        for (j = 0; j < 2; j++) {
            if (i0 == w->unk_18c[j]) {
                break;
            }
        }
        if (j < 2) {
            continue;
        }
        break;
    }
    n = 2; k = n; k = k - 1; while (k > 0) { w->unk_18c[k] = w->unk_18c[k - 1]; k = k - 1; }
    w->unk_18c[0] = i0;
    w->unk_02 = w->unk_18c[0];
}

extern "C" void func_ov067_0225f78c(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h = msg->unk_00;
    func_ov067_0225f3e8(data_ov067_02262148, w->unk_04, w->unk_05, w->unk_06, w->unk_00, w->unk_01, w->unk_02);
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_00 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_00;
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_04 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_04;
    if (w->unk_04 == w->unk_00) {
        u16 *p = (u16 *)((u8 *)msg->unk_00 + 8);
        switch (w->unk_05) {
        case 1:
            func_ov067_0225f3e8(data_ov067_02262134, w->unk_0c);
            p[0] = w->unk_0c;
            p[1] = w->unk_14;
            break;
        case 2: {
            u32 seg = w->unk_180;
            u32 off = w->unk_06 * seg;
            u32 rem = w->unk_0c - off;
            if (rem > seg) {
                rem = seg;
            }
            func_02116048((void *)(w->unk_08 + off), p, rem);
            break;
        }
        }
    }
    msg->unk_04 = (w->unk_180 + 9) & ~1;
}

extern "C" BOOL func_ov067_0225f894(Unk_ov067_0225f1a0_W *w, u32 *x) {
    BOOL r = FALSE;
    if (x[0x44 / 4] != 0) {
        void *p = func_ov067_0225f8f4(w, 0, x[0x44 / 4], 1);
        if (p != 0) {
            func_ov067_0225f8e4(w, p);
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_ov067_0225f8e0(void) {
}

extern "C" void func_ov067_0225f8e4(Unk_ov067_0225f1a0_W *w, void *p) {
    w->unk_190 = (Unk_ov067_0225f1a0_Cb *)p;
}

extern "C" void *func_ov067_0225f8ec(Unk_ov067_0225f1a0_W *w) {
    return w->unk_190;
}

extern "C" void *func_ov067_0225f8f4(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag) {
    Unk_ov067_0225f1a0_Ent *s = (Unk_ov067_0225f1a0_Ent *)start;
    Unk_ov067_0225f1a0_Ent *e;
    Unk_ov067_0225f1a0_Ent *b;
    Unk_ov067_0225f1a0_Ent *p;
    if (s == 0) {
        s = &w->unk_194[15];
    }
    e = &w->unk_194[16];
    b = &w->unk_194[0];
    p = s;
    do {
        BOOL m;
        p++;
        if (p >= e) {
            p = b;
        }
        m = p->unk_00 == key ? TRUE : FALSE;
        if (flag != 0) {
            if (m != 0) {
                goto done;
            }
        }
        if (flag == 0) {
            if (m == 0) {
                goto done;
            }
        }
    } while (p != s);
    p = 0;
done:
    return p;
}

extern "C" void func_ov067_0225f970(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s) {
    if (w->unk_01 != 0) {
        return;
    }
    w->unk_01 = 1;
    w->unk_08 = p;
    w->unk_0c = (u16)q;
    w->unk_14 = func_021276e0(p, q);
    w->unk_18 = r;
    w->unk_20 = (u16)s;
}

extern "C" void func_ov067_0225f9dc(Unk_ov067_0225f1a0_W *w, u32 a, u32 b) {
    volatile u32 tmp;
    w->unk_180 = a - 8;
    w->unk_182 = b - 8;
    w->unk_00 = 0;
    w->unk_01 = 0;
    w->unk_04 = 0;
    w->unk_05 = 0;
    w->unk_08 = 0;
    w->unk_0c = 0;
    w->unk_14 = 0;
    tmp = 0;
    func_02115e64(tmp, &w->unk_28, 0x158);
    w->unk_18 = 0;
    w->unk_1c = 0;
    w->unk_20 = 0;
    w->unk_184 = 0;
}

extern "C" void func_ov067_0225fa50(Unk_ov067_0225f1a0_W *w) {
    volatile u32 tmp;
    w->unk_190 = 0;
    tmp = 0;
    func_02115e64(tmp, w, 4);
}

extern "C" void func_ov067_0225fa80(Unk_ov067_0225fa80_X *x, u32 v) {
    x->unk_50f4 = v;
    u32 cur = x->unk_50f0;
    if (cur == 1) {
        return;
    }
    if (cur == x->unk_50f4) {
        return;
    }
    func_ov067_02260a4c(x, cur, 0);
}

#pragma thumb reset
