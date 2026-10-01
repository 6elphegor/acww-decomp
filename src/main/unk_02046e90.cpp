#include "types.h"

struct Unk_020473cc_Date {
    u32 w0, w1;
    Unk_020473cc_Date() { w0 = 0; w1 = 0; }
};
struct Unk_020473cc_Rgb { u8 b[3]; };
struct Unk_02046e90_Pair { u32 a, b; };
struct Unk_02046f04_Entry { u16 type; u16 pad; u32 lo; u32 hi; };
struct Unk_020470b8_Pos { s32 x, z; };

extern u8 data_020da2a0[];
extern u8 data_021ed1a4[];
extern u8 data_020c910c[];
extern u8 data_021c4110[];
extern volatile u32 data_021c40cc[];

extern "C" {
s32 func_0209ea50(u32);
void func_0209d498(void *);
void func_02116048(void *, void *, u32);
s32 func_0203f2e0(u32, void *, u32);
void func_020b1b7c();
void func_020b1b5c();
void func_020b1b3c();
void func_020b1b1c();
Unk_02046f04_Entry *func_0203f2d8();
void func_0209cfa0(void *);
void func_0204c148(void *, u32);
void func_02045ce8();
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204edf8(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02049854(void *m, s32 x, s32 z, u32 t, s32 f);
s32 func_0204af08(void *);
s32 func_02063b8c(s32);
void func_02045d08(s32, s32);
void func_02047e64(void *, void *, s32, s32);
s32 func_0204c188(u32, s32);
s32 func_0209d3a4(void *, void *);
s32 func_0209cd00(void *, u32);
s32 func_0204e8b0(void *, s32, s32, s32, s32);
void func_020497f8(void *, void *, s32, s32, s32, s32, s32, s32);
s32 func_020b8fd8();
s32 func_02062ad4(u16 *, u32, u32, u32, u32, u32, u32, u32, u32, u32);
s32 func_02133150_dummy();
void func_020482b0(void *, void *, s32, s32, s32, void *, s32);
void func_0204744c(void *a, void *b, s32 c, s32 d);
void func_02047714(void *a, void *b);
void func_020474e0(void *a, void *b, s32 c, s32 d, u8 e);
void func_020475a4(void *a, void *b, s32 c);
void func_0204844c();
void func_02048444();
void *func_0204da0c(void *);
void func_0204ee10(s32 *, s32 *, void *);
s32 func_020453e8(void *, s32);

void func_020471c0(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g);
void func_02047214(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void func_020471f0(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i);
void func_02047214(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void func_02047290(void *a, void *b, s32 c, s32 d);
u32 func_020473b0(void *a);
s32 func_020473cc(void *a, s32 b, u8 *c, u8 *d, s32 e, s32 f, s32 g);
void func_02047020(void *a, void *m, s32 x, s32 z);
void func_020470b8(void *a, void *m, s32 x, s32 z);
void func_02047084(void *a, void *m, s32 n);
void func_02046fd8(void *a, u32 b);
}

extern "C" void func_02046e90(u32 a, u32 b, u32 c) {
    if (func_0209ea50(b + 0x15fc5) == 0) {
        Unk_02046e90_Pair d;
        u8 buf[8];
        d.a = 0;
        d.b = 0;
        func_0209d498(&d);
        for (s32 i = 0; i < 3; i++) {
            func_02116048(&d, buf, 8);
            s32 r = func_0203f2e0(data_020da2a0[i], buf, c);
            switch (r) {
            case 2:
            case 3:
                switch (i) {
                case 0: func_020b1b7c(); break;
                case 1: func_020b1b5c(); break;
                case 2: func_020b1b3c(); break;
                }
                break;
            }
        }
    }
}

extern "C" void func_02046f04(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g) {
    Unk_02046f04_Entry *p = func_0203f2d8();
    u32 t;
    func_0209cfa0(&t);
    s32 h = func_0209ea50(g + 0x15fc5);
    for (s32 i = 0; i < 7; p++, i++) {
        s32 ok;
        if (p->type == 99) continue;
        if (p->lo > t) continue;
        if (p->hi <= t) continue;
        ok = 0;
        switch (p->type) {
        case 0x10:
            func_020471f0(a, b, p, c, d, e, f, h, g);
            ok = 1;
            break;
        case 0x11:
        case 0x61:
            func_02047084(a, b, (s32)c);
            ok = 1;
            break;
        case 0x62:
            func_020b1b1c();
            ok = 1;
            break;
        case 0xe:
            func_020471c0(a, b, p, (void *)e, f, h, g);
            ok = 1;
            break;
        }
        if (ok) func_02046fd8(a, p->type);
    }
}


extern "C" void func_02046fd8(void *a, u32 b) {
    func_0204c148(data_021ed1a4, b);
}

extern "C" void func_02046fe8(void *a, void *b, s32 c) {
    s32 j, i;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < c; j++) {
            func_02047020(a, b, j, i);
        }
    }
    func_02045ce8();
}

extern "C" void func_02047020(void *a, void *m, s32 x, s32 z) {
    s32 j, i;
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            u16 *p = func_0204ebd8(m, x + 1, z + 1, j, i, 0);
            if (p != 0 && *p == 0x6d) {
                s32 bx, bz;
                func_0204edf8(&bx, &bz, x + 1, z + 1, j, i);
                func_02049854(m, bx, bz, 0x61, 0);
            }
        }
    }
}

extern "C" void func_02047084(void *a, void *m, s32 n) {
    s32 j, i;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n; j++) {
            func_020470b8(a, m, j, i);
        }
    }
}

static inline BOOL Unk_020470b8_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_020470b8(void *a, void *m, s32 x, s32 z) {
    Unk_020470b8_Pos arr[256];
    s32 j, i, n, k;
    Unk_020470b8_Pos *q = arr;
    do { q->x = 0; q->z = 0; q++; } while (q != arr + 256);
    n = 0;
    k = 0;
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            u16 *p = func_0204ebd8(m, x + 1, z + 1, j, i, 0);
            if (p != 0) {
                if (Unk_020470b8_R(p, 0x5d, 0x61) && func_0204af08(p) != 0) {
                    s32 bx, bz;
                    func_0204edf8(&bx, &bz, x + 1, z + 1, j, i);
                    arr[n].x = bx;
                    arr[n].z = bz;
                    n++;
                } else if (*p == 0x6d) {
                    k++;
                }
            }
        }
    }
    for (s32 t = 3 - k; t != 0; t--) {
        if (n > 0) {
            s32 idx = func_02063b8c(n);
            Unk_020470b8_Pos *pick = arr + idx;
            func_02049854(m, arr[idx].x, pick->z, 0x6d, 0);
            func_02045d08(arr[idx].x, pick->z);
            arr[idx].x = arr[n - 1].x;
            pick->z = arr[n - 1].z;
            n--;
        }
    }
}


extern "C" void func_020471c0(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g) {
    s32 r = func_020473cc(a, 0xe, (u8 *)c, (u8 *)d, e, f, g);
    func_02047e64(a, b, 1, r);
}

extern "C" void func_020471f0(void *a, void *b, void *c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i) {
    func_02047214(a, b, (s32)c, (s32)d, e, f, g, h, i);
}

extern "C" void func_02047214(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i) {
    s32 cnt = func_020473cc(a, 0x10, (u8 *)c, (u8 *)f, g, h, i);
    for (; cnt != 0; cnt--) {
        s32 x, y;
        for (y = 0; y < e; y++) {
            for (x = 0; x < d; x++) {
                if (((s32)(*(u32 *)(data_021c4110 + x * 0x90 + y * 0x24 + 0x20) << 20) >> 31) != 0) {
                    func_02047290(a, b, x, y);
                }
            }
        }
    }
}

extern "C" void func_02047290(void *a, void *b, s32 x, s32 z) {
    Unk_020470b8_Pos arr[256];
    s32 j, i, n;
    Unk_020470b8_Pos *q = arr;
    do { q->x = 0; q->z = 0; q++; } while (q != arr + 256);
    n = 0;
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            u16 *p = func_0204ebd8(b, x + 1, z + 1, j, i, 0);
            if (p != 0) {
                if (Unk_020470b8_R(p, 0x26, 0x2a) || (*p >= 0x66 && *p <= 0x68)) {
                    if (func_0204af08(p) != 0) {
                        s32 bx, bz;
                        func_0204edf8(&bx, &bz, x + 1, z + 1, j, i);
                        arr[n].x = bx;
                        arr[n].z = bz;
                        n++;
                    }
                }
            }
        }
    }
    if (n > 0) {
        s32 idx = func_02063b8c(n);
        Unk_020470b8_Pos *pick = arr + idx;
        u8 *d = data_020c910c;
        for (s32 k = 0; k < 3; d++, k++) {
            s32 px = pick->x + (((s32)*d >> 4) - 8);
            s32 pz = pick->z + ((*d & 0xf) - 8);
            s32 tx = px >> 4;
            s32 tz = pz >> 4;
            u16 *p = func_0204ebd8(b, tx, tz, px - (tx << 4), pz - (tz << 4), 0);
            if (p != 0 && *p == 0xfff1) {
                func_02049854(b, px, pz, func_020473b0(a), 0);
            }
        }
    }
}


extern "C" u32 func_020473b0(void *a) {
    u32 b = 0x1542;
    b += func_02063b8c(5);
    return (u16)b;
}

extern "C" s32 func_020473cc(void *a, s32 b, u8 *c, u8 *d, s32 e, s32 f, s32 g) {
    s32 r;
    if (e != 0) {
        if (func_0204c188(g + 0x15e54, b) < 0) {
            if (f != 0) {
                r = 1;
            } else {
                Unk_020473cc_Date t;
                t.w0 = 0;
                t.w1 = 0;
                ((u8 *)&t)[5] = d[5];
                ((u8 *)&t)[4] = c[7];
                ((u8 *)&t)[3] = c[6];
                r = func_0209d3a4(&t, d) + 1;
            }
        } else {
            Unk_020473cc_Rgb t;
            t.b[2] = d[5];
            t.b[1] = d[4];
            t.b[0] = d[3];
            r = func_0209cd00(&t, g + 0x15ea8);
            if (r < 0) r = 0;
        }
    } else {
        r = 1;
    }
    return r;
}

extern "C" void func_0204744c(void *a, void *b, s32 c, s32 d) {
    s32 y, x, i, j;
    for (y = 1; y < d + 1; y++) {
        for (x = 1; x < c + 1; x++) {
            for (i = 0; i < 16; i++) {
                for (j = 0; j < 16; j++) {
                    u16 *p = func_0204ebd8(b, x, y, j, i, 0);
                    if (p != 0 && *p == 0x1369) {
                        if (func_0204e8b0(b, x, y, j, i) != 0) {
                            func_020497f8(a, b, x, y, j, i, 0x136a, 1);
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_020474e0(void *a, void *b, s32 c, s32 d, u8 e) {
    if (e != 0) {
        s32 r = func_020b8fd8();
        switch (r) {
        case 0:
        case 1:
        case 2: {
            u16 v[2];
            s32 px, py;
            v[0] = 0xfff1;
            px = func_02063b8c(c - 1);
            py = func_02063b8c(d - 1);
            for (s32 i = 0; i < 3; i++) {
                func_02062ad4(&v[1], 0x45dc, 0x7f, 0, 0, 0, 1, 10, 0, 1);
                v[0] = v[1];
                px = (px + 1 + func_02063b8c(c - 1)) % c;
                py = (py + 1 + func_02063b8c(d - 1)) % d;
                func_020482b0(a, b, px + 1, py + 1, v[0], (void *)func_0204844c, 1);
            }
            break;
        }
        }
    }
}

extern "C" void func_020475a4(void *a, void *b, s32 c) {
    if (((s32)(data_021c40cc[0x30 / 4] << 27) >> 31) == 0) {
        if (func_02063b8c(100) < 10) {
            s32 t = func_02063b8c(c) + 1;
            func_020482b0(a, b, t, 4, 0x1548, (void *)func_02048444, 0);
        }
    }
}

struct Unk_020475f8_Map { u32 pad; s32 v[2]; };

extern "C" void func_020475f8(void *a, Unk_020475f8_Map *b, s32 c) {
    s32 *s = b->v;
    s32 w = s[0] << 4;
    s32 h = s[1] << 4;
    s32 x, y;
    for (y = 0; y < h; y++) {
        x = 0;
        if (x < w) {
            goto L_test;
        L_loop:
            {
            s32 tx = x >> 4;
            s32 ty = y >> 4;
            u16 *p = func_0204ebd8(b, tx, ty, x - (tx << 4), y - (ty << 4), 0);
            if (p != 0) {
                BOOL r = Unk_020470b8_R(p, 0xd4, 0xda);
                u16 t = *p;
                if (r) {
                    func_02049854(b, x, y, 0xe2, 0);
                } else if (t >= 0xdb && t <= 0xe1) {
                    if (c > 1) {
                        func_02049854(b, x, y, 0xe2, 0);
                    } else if (t != 0xe1) {
                        func_02049854(b, x, y, (u16)(t - 6), 0);
                    } else {
                        func_02049854(b, x, y, (u16)(t - 7), 0);
                    }
                } else if (t == 0xe2) {
                    func_02049854(b, x, y, 0xfff1, 0);
                } else if (t >= 0x154a && t <= 0x1553) {
                    func_02049854(b, x, y, 0xfff1, 0);
                }
            }
        }
            x++;
        L_test:
            if (x < w) goto L_loop;
        }
    }
}


extern "C" void func_02047714(void *a, void *b) {
    void *m = func_0204da0c(a);
    if (m != 0) {
        Unk_020470b8_Pos v;
        v.x = 0;
        v.z = 0;
        func_0204ee10(&v.x, &v.z, b);
        long x = v.x, z = v.z;
        s32 tx = x >> 4, tz = z >> 4;
        u16 *p = func_0204ebd8(m, tx, tz, x - (tx << 4), z - (tz << 4), 0);
        if (p != 0) {
            if (Unk_020470b8_R(p, 0xfc, 0xfd)) {
                Unk_020470b8_Pos pos;
                pos.x = v.x;
                pos.z = v.z;
                if (func_020453e8(&pos, 0) < 0) {
                    func_02049854(m, v.x, v.z, 0xfff1, 0);
                }
            }
        }
    }
}
