#include "types.h"

struct Unk_0204674c_P {
    u32 f0;
    s32 f4;
    s32 f8;
};

struct Unk_02046650_O {
    u8 pad[0x5c];
    u32 f5c;
    u32 f60;
    u32 f64;
};

struct Unk_02046c80_T {
    union {
        struct {
            u32 a;
            u32 b;
        };
        u8 bytes[8];
    };
};

extern "C" {
extern void *data_020cbb18;
extern u16 data_021c3ea4[];
extern char data_021c40cc[];
extern char data_021c4110[];
extern s32 data_020c982c[];
extern char data_021ed1a4[];
extern char data_021ed24c[];
extern char data_021ed0a0[];
extern char data_021e58a8[];
extern char data_021ed210[];
extern char data_021ed22e[];
extern char data_021e3680[];
extern char data_021e58a7[];
extern char data_021ed104[];
extern char data_021eca50[];
extern char data_021dfd8c[];
extern char data_021c4350[];
extern u8 data_021ed1f8[];
extern char data_021d7350[];

s32 func_02072e44(void *);
s32 func_020729cc(void *, s32);
void func_0209cf18(void *);
s32 func_02095670(void *, void *, void *, s32, s32);
s32 func_020b5198(u32);
s32 func_020b5178(u32);
Unk_0204674c_P *func_0204da0c();
s32 func_02063b8c(s32);
void func_020466c0(void *, void *, s32);
Unk_02046650_O *func_02095204(s32);
void func_02049968(void *, void *, s32, s32);
s32 func_020482b0(void *, void *, s32, s32, u32, void *, s32);
s32 func_0204842c();
u16 func_02046714(void *);
void *func_0204ebd8(void *, s32, s32, s32, s32, s32);
void func_0204edf8(void *, void *, s32, s32, s32, s32);
void func_02049854(void *, s32, s32, s32, s32);
u16 func_02046ba8(void *, u16 *, s32);
s32 func_02046c34(void *, s32);
void func_0209d498(void *);
void func_020499c4(void *, void *);
void func_02046c80(void *, void *, s32, s32, void *, s32);
s32 func_0203f14c();
s32 func_0209750c();
void func_0209cf5c(void *);
void func_0209d124(void *, s32);
void func_02046ddc(void *, void *, s32, s32, void *);
void func_02046f04(void *, void *, s32, s32, void *, s32, void *);
void func_02046d28(void *, s32);
void func_02046e90(void *, void *, s32);
s32 func_02116048(void *, void *, s32);
s32 func_0203f2e0(s32, void *, s32);
void func_020b1b6c();
void func_020b1b4c();
void func_020b1b2c();
void func_020b16e4();
void func_0209cfa0(void *);
u16 *func_0204c1fc(s32);
s32 func_0209cf0c();
void func_0204c1b8(void *, s32);
s32 func_02046e4c(void *, s32, void *, s32, s32);
void func_02046fe8(void *, void *, s32);
void func_020b1b0c();

void func_0204c6a4(void *);
void func_02046af8(void *, void *, s32, s32);
void func_02049bcc(void *, void *, s32, s32);
void func_0204c0b8(void *, s32, s32);
void func_020485d4(void *, void *, s32, s32);
void func_0209d164(void *, s32);
s32 func_0209cc6c(void *);
void func_0209d2c0(void *, s32);
void func_02047fbc(void *, void *);
void func_02047c44(void *, void *, s32, s32);
void func_02047c90(void *, void *, s32, s32);
void func_020490c8(void *, void *);
void func_02047cd0(void *, void *, s32, s32);
void func_02047dd0(void *, void *, s32, s32);
void func_02048fc4(void *, void *, s32);
void func_02047e1c(void *, void *, void *, s32);
void func_02048078(void *, void *, s32, s32);
void func_02047b54(void *, void *, s32, s32);
void func_02047a90(void *, void *, s32, s32);
void func_02047a10(void *, void *, s32, s32);
void func_020479bc(void *, void *, s32, s32);
void func_02047830(void *, void *, s32, s32);
void func_020475f8(void *, void *, s32);
void func_020475a4(void *, void *, s32);
void func_020474e0(void *, void *, s32, s32, u32);
void func_0204744c(void *, void *, s32, s32);
void func_020859b4(void *);
void func_020702ec(void *);
void func_020605a8(void *);
void func_020ada88();
void func_02060394(void *, s32);
void func_02060e3c();
void func_02039c08(void *, s32);
void func_02039b6c(void *, void *, s32);
void func_0205b124(void *);
void func_0205afa0(void *);
void func_0205b120(void *);
void func_0204df30(void *);
void func_020b8e70(s32);
void func_02095d64(s32);
void func_02096570(void *, s32);
void func_02085fb4(void *);
void func_020ae3a4(void *, s32);
void func_0208747c(s32);
s32 func_02087280(void *);
void func_0208728c(void *, s32);
void func_02078150(void *, void *);
s32 func_0209ceac(s32, s32, s32);
void func_02046294(void *);
void func_020422a8(void *);
s32 func_02047798(void *);

namespace Unk_0204657c_N {
s32 func_020465a4(void *a);
s32 func_02046650(void *a);
}

void func_0204657c(void *a) {
    if (func_02072e44(data_020cbb18)) {
        Unk_0204657c_N::func_020465a4(a);
    } else {
        Unk_0204657c_N::func_02046650(a);
    }
}

struct Unk_020465a4_L {
    u8 a;
    u8 b;
    u16 t;
};

void func_020465a4(void *a) {
    if (func_020729cc(data_020cbb18, 0)) {
        Unk_020465a4_L l;
        u32 x[2];
        u32 y;
        func_0209cf18(&l.t);
        if (l.t != data_021c3ea4[0]) {
            if ((s32)(*(u8 *)&l.t) % 10 == 3) {
                s32 found = 0;
                s32 i;
                for (i = 0; i < 4; i++) {
                    if (func_02095670(&l, x, &y, -1, i)) {
                        if (func_020b5198(l.a) || func_020b5178(l.a)) {
                            if ((s32)y >> 17 == 4) {
                                found = 1;
                                break;
                            }
                        }
                    }
                }
                if (!found) {
                    Unk_0204674c_P *p = func_0204da0c();
                    s32 r = func_02063b8c(4);
                    func_020466c0(a, p, r);
                }
                *(a ? data_021c3ea4 : data_021c3ea4) = l.t;
            }
        }
    }
}

void func_02046650(void *a) {
    u16 t;
    func_0209cf18(&t);
    if (t != data_021c3ea4[0]) {
        if ((s32)(*(u8 *)&t) % 10 == 3) {
            Unk_02046650_O *o = func_02095204(4);
            if (o) {
                Unk_0204674c_P *p = func_0204da0c();
                u32 *o2 = &o->f5c;
                s32 r = func_02063b8c(4);
                s32 x = (s32)o2[0] >> 17;
                if (!((s32)o2[2] >> 17 == 4 && x == r + 1)) {
                    func_020466c0(a, p, r);
                }
            }
            *(a ? data_021c3ea4 : data_021c3ea4) = t;
        }
    }
}

void func_020466c0(void *a, void *b, s32 c) {
    func_02049968(data_021c40cc, b, c, 3);
    s32 lv = *(u8 *)(data_021c4110 + c * 0x90 + 0x88);
    if (lv < 4) {
        func_020482b0(a, b, c + 1, 4, func_02046714(a), (void *)func_0204842c, 0);
    }
}

u16 func_02046714(void *a) {
    u16 n = 0x1554;
    s32 r = func_02063b8c(100);
    s32 *q = data_020c982c;
    s32 i;
    for (i = 0; i < 9; q++, i++) {
        r -= *q;
        if (r < 0) break;
        n++;
    }
    return n;
}

void func_02046af8(void *a, void *p, s32 w, s32 h) {
    s32 j;
    s32 i = 0, j0 = 0, z30 = 0, z28 = 0, z20 = 0, z24 = 0;
    for (; i < h; i++) {
        for (j = j0; j < w; j++) {
            u16 *q = (u16 *)func_0204ebd8(p, j + 1, i + 1, z20, z20, z20);
            s32 k;
            for (k = z24; k < 0x100; q++, k++) {
                if (q && *q != 0xfff1) {
                    u16 v = func_02046ba8(a, q, z28);
                    if (v != 0xfff1) {
                        s32 o1, o2;
                        s32 rem = k % 16;
                        s32 quo = k / 16;
                        func_0204edf8(&o1, &o2, j + 1, i + 1, rem, quo);
                        func_02049854(p, o1, o2, v, z30);
                    }
                }
            }
        }
    }
}

static inline BOOL Unk_02046ba8_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

u16 func_02046ba8(void *a, u16 *q, s32 flag) {
    u16 r = 0xfff1;
    BOOL x6 = TRUE, x5 = TRUE, x4 = TRUE;
    BOOL x3 = FALSE;
    u16 v = *q;
    if (v >= 0x6e && v <= 0x73) x3 = TRUE;
    if (!x3) {
        if (!(v >= 0x74 && v <= 0x79)) x4 = FALSE;
    }
    if (!x4) {
        if (!(v >= 0x7a && v <= 0x7f)) x5 = FALSE;
    }
    if (!x5) {
        if (!(v >= 0x80 && v <= 0x87)) x6 = FALSE;
    }
    if (x6) {
        if (v == 0x86 && flag) {
            r = 0xa5;
        } else {
            r = (u16)(v + 0x1c);
        }
    } else if (v == 0x88) {
        r = 0xa4;
    } else if (v >= 0xd4 && v <= 0xda) {
        r = (u16)(v + 7);
    }
    return r;
}

void func_02046c24() {
    func_02046c34(data_021c3ea4, 0);
}

s32 func_02046c34(void *a, s32 b) {
    Unk_0204674c_P *p = func_0204da0c();
    if (p) {
        Unk_02046c80_T s;
        s32 x, y;
        s.a = 0;
        s.b = 0;
        func_0209d498(&s);
        x = p->f4 - 2;
        y = p->f8 - 2;
        func_020499c4(data_021c40cc, p);
        func_02046c80(a, p, x, y, &s, b);
    }
}

struct Unk_02046c80_D {
    u32 a;
    u32 b;
};

void func_02046c80(void *a, void *p, s32 x, s32 y, void *c, s32 f) {
    if (!func_0203f14c() || (f && !func_0209750c())) {
        Unk_02046c80_T s;
        u8 *q;
        s.a = 0;
        s.b = 0;
        func_0209cf5c(&s);
        func_0209d124(&s, 6);
        q = data_021ed1f8;
        if (q[2] != s.bytes[5] || q[1] != s.bytes[4] || q[0] != s.bytes[3]) {
            func_02046ddc(a, p, x, y, data_021d7350);
            func_02046f04(a, p, x, y, c, f, data_021d7350);
            q[2] = s.bytes[5];
            q[1] = s.bytes[4];
            q[0] = s.bytes[3];
        }
        func_02046d28(a, f);
        func_02046e90(a, data_021d7350, f);
    }
}

static inline BOOL Unk_02046d28_Z(s32 v) {
    return v == 0 ? TRUE : FALSE;
}

void func_02046d28(void *a, s32 b) {
    Unk_02046c80_T s;
    Unk_02046c80_T t1, t2, t3, t4;
    s.a = 0;
    s.b = 0;
    func_0209d498(&s);
    func_02116048(&s, &t1, 8);
    if (Unk_02046d28_Z(func_0203f2e0(0x3d, &t1, b))) func_020b1b6c();
    func_02116048(&s, &t2, 8);
    if (Unk_02046d28_Z(func_0203f2e0(0x3f, &t2, b))) func_020b1b4c();
    func_02116048(&s, &t3, 8);
    if (Unk_02046d28_Z(func_0203f2e0(0x60, &t3, b))) func_020b1b2c();
    func_02116048(&s, &t4, 8);
    if (Unk_02046d28_Z(func_0203f2e0(0x44, &t4, b))) func_020b16e4();
}

struct Unk_02046ddc_E {
    u16 id;
    u8 kind;
    u8 pad;
    u32 lo;
    u32 hi;
};

void func_02046ddc(void *a, void *p, s32 x, s32 y, void *d) {
    u32 now;
    Unk_02046ddc_E *q;
    s32 i;
    func_0209cfa0(&now);
    q = (Unk_02046ddc_E *)func_0204c1fc(0);
    for (i = 0; i < 4; q++, i++) {
        u32 id = q->id;
        if (id != 0x63) {
            u32 k = q->kind;
            if (k == func_0209cf0c() && q->lo <= now && q->hi >= now) {
            } else {
                if (func_02046e4c(a, id, p, x, y)) {
                    func_0204c1b8((char *)d + 0x15e54, id);
                }
            }
        }
    }
}

s32 func_02046e4c(void *a, s32 id, void *p, s32 x, s32 y) {
    BOOL r = FALSE;
    switch (id) {
    case 0x10:
        r = TRUE;
        break;
    case 0x11:
    case 0x61:
        func_02046fe8(a, p, x);
        r = TRUE;
        break;
    case 0x62:
        func_020b1b0c();
        r = TRUE;
        break;
    }
    return r;
}

struct Unk_0204674c_V {
    u32 a, b, c, d;
};

struct Unk_0204674c_O {
    u32 v[6];
};

void func_0204674c(void *a, u8 *b, u8 *c, s32 n, u8 e, s32 f) {
    Unk_0204674c_P *p = func_0204da0c();
    if (p) {
        s32 x = p->f4 - 2;
        s32 y = p->f8 - 2;
        s32 lim1, i, lim4, lim3, lim2, l, k, j, m;
        Unk_02046c80_T s1, s2;
        Unk_0204674c_V t3;
        Unk_0204674c_O obj;
        func_0204c6a4(p);
        if (e) func_02046af8(a, p, x, y);
        func_02049bcc(data_021c40cc, p, x, y);
        func_0204c0b8(data_021ed1a4, *(s32 *)data_021c40cc, n);
        lim1 = n;
        if (lim1 > 5) lim1 = 5;
        for (i = 0; i < lim1; i++) func_020485d4(a, p, x, y);

        s1.a = 0;
        s1.b = 0;
        func_02116048(c, &s1, 8);
        lim2 = n;
        if (lim2 > 0x16d) lim2 = 0x16d;
        func_0209d164(&s1, lim2);
        for (j = 0; j < lim2; j++) {
            s32 r = func_0209cc6c(&s1);
            switch (r) {
            case 0:
            case 1:
            case 2:
            case 0x16:
                func_02047fbc(a, p);
                break;
            default:
                func_02047fbc(a, p);
                if (func_02063b8c(100) < 50) func_02047c44(a, p, x, y);
                break;
            }
            func_0209d2c0(&s1, 1);
        }

        s2.a = 0;
        s2.b = 0;
        func_02116048(c, &s2, 8);
        lim3 = n;
        if (lim3 > 0x1e) lim3 = 0x1e;
        func_0209d164(&s2, lim3);
        for (k = 0; k < lim3; k++) {
            s32 r = func_0209cc6c(&s2);
            switch (r) {
            case 0:
            case 1:
            case 2:
            case 0x16:
                break;
            default:
                if (func_02063b8c(100) < 20) func_02047c90(a, p, x, y);
                break;
            }
            func_0209d2c0(&s2, 1);
        }

        lim4 = n;
        if (lim4 > 0x3c) lim4 = 0x3c;
        func_020490c8(a, p);
        func_02047cd0(a, p, x, y);
        func_02047dd0(a, p, x, y);
        if (lim4 > 1) {
            for (l = 1; l < lim4; l++) {
                func_02048fc4(a, p, l);
                func_02047cd0(a, p, x, y);
                func_02047dd0(a, p, x, y);
            }
        }
        func_02047e1c(a, p, c, n);
        t3.a = c[5];
        t3.b = c[4];
        t3.c = c[3];
        func_02046c80(a, p, x, y, c, f);
        func_02048078(a, p, x, y);
        func_02047b54(a, p, x, y);
        func_02047a90(a, p, x, y);
        func_02047a10(a, p, x, y);
        func_020479bc(a, p, x, y);
        func_02047830(a, p, x, y);
        func_020475f8(a, p, n);
        func_020475a4(a, p, x);
        func_020474e0(a, p, x, y, e);
        func_0204744c(a, p, x, y);
        func_020859b4(data_021ed24c);
        func_020702ec(data_021ed0a0);
        char *const g = data_021e58a8;
        func_020605a8(g);
        func_020ada88();
        func_02060394(g, n);
        func_02060e3c();
        func_02039c08(data_021ed210, n);
        func_02039b6c(data_021ed22e, c, n);
        func_0205b124(&obj);
        func_0205afa0(&obj);
        func_0204df30(data_021e3680);
        func_020b8e70(n);
        func_02095d64(n);
        func_02096570(&t3, n);
        func_02085fb4(data_021e58a7);
        func_020ae3a4(data_021ed104, 0);
        func_0208747c(n);
        if (n > 0) {
            char *g2 = data_021eca50;
            if (func_02087280(g2) == 1) func_0208728c(g2, 2);
        }
        func_02078150(data_021dfd8c, c);
        m = func_0209ceac(b[5], b[4], b[3]);
        s32 q2 = func_0209ceac(c[5], c[4], c[3]);
        s32 d = q2 - m;
        if (q2 == 0 || n >= 7 || d < 0) func_02046294(a);
        func_0205b120(&obj);
    }
    func_020422a8(data_021c4350);
    func_02047798(a);
}

}
