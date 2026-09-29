#include "types.h"

struct Unk_02045f6c_Rgb {
    u8 a, b, c;
};

struct Unk_02045c18_Bits {
    u8 unk_00_lo : 3;
    u8 unk_00_hi : 5;
    u8 unk_01_a : 2;
    u8 unk_01_b : 3;
    u8 unk_01_c : 2;
    u8 unk_01_d : 1;
    u8 unk_02_a : 1;
    u8 unk_02_b : 1;
    s8 unk_02_c : 4;
    u8 unk_02_d : 2;
    u8 pad[5];
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_02045d40_Ent {
    s32 a;
    s32 b;
};

struct Unk_02045d98_Src {
    u8 pad[0x34];
    s32 unk_34, unk_38, unk_3c, unk_40;
};

struct Unk_02046a0_Ts {
    s32 w[4];
};

struct Unk_02045e34_Map {
    u8 pad[4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_020463fc_Sz {
    s32 w, h;
};

struct Unk_020463fc_Map {
    u8 pad[0xc];
    Unk_020463fc_Sz sz;
};

struct Unk_02046514_Ent {
    u8 pad[0x88];
    u8 unk_88;
    u8 pad2[7];
};

struct Unk_02046230_Ts {
    s32 a, b;
};

struct Unk_020460dc_Obj {
    u8 b[0x14];
};

struct Unk_0204625c_Obj {
    u8 pad[0x20];
    s32 unk_20;
};

static inline BOOL Unk_02046358_R1(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1531 && *p <= 0x153a) {
        r = TRUE;
    }
    return r;
}

static inline void Unk_02045f6c_Fill(Unk_02046a0_Ts *t, Unk_02045f6c_Rgb *src, s32 z) {
    t->w[2] = z;
    t->w[3] = z;
    ((u8 *)t)[0xd] = src->c;
    ((u8 *)t)[0xc] = src->b;
    ((u8 *)t)[0xb] = src->a;
    ((u8 *)t)[0xa] = 6;
}

extern "C" {
extern u8 data_021c4350[];
extern u8 data_021c3e74[];
extern u8 data_021c3f88[];
extern u8 data_021c3ea4[];
extern u8 data_021c3e90[];
extern u8 data_021c47bc[];
extern void *data_020cbb18;
extern Unk_02045d98_Src data_021c40cc;
extern Unk_02045f6c_Rgb data_021ed1a4;
extern u8 data_021c3ec8[];
extern u8 data_021c40e4[];

s32 func_02042340(void *);
s32 func_02041880(void *);
s32 func_02042350(void *);
s32 func_020451a4(void *);
s32 func_02046fd8(void *, void *);
s32 func_02072e44(void *);
s32 func_020422a8(void *);
s32 func_02047798(void *);
s32 func_02133150(s32, s32);
void *func_0204da0c();
s32 func_0204ed70(void *, s32, s32, s32, s32);
s32 func_020499c4(void *, void *);
s32 func_020418d4(void *);
s32 func_020453dc();

Unk_02045d40_Ent *func_02045d40();
extern u8 data_021c4110[];
s32 func_02049bcc(void *, void *, s32, s32);
s32 func_02047a10(void *, void *, s32, s32);
s32 func_020479bc(void *, void *, s32, s32);
s32 func_02048078(void *, void *, s32, s32);
s32 func_02047830(void *, void *, s32, s32);
s32 func_0209cfc8(s32);
s32 func_02049e40(void *, void *, s32, s32);
void func_02046514(void *, void *);
void func_02045fc4();
void func_02046230();
s32 func_02045f6c();
void func_02046294(void *);
s32 func_020b50e8();
s32 func_02046c34(void *, s32);
void func_02046230();
s32 func_02045f6c();
void func_02046294(void *);
s32 func_020b50e8();
s32 func_02046c34(void *, s32);
void func_020460dc(s32);
s32 func_02042290(void *);
s32 func_02042570(void *);
s32 func_0206e850();
extern u8 data_021ed22e[];
extern u8 data_021d735c[];
void *func_0204d528(s32);
s32 func_020978c8(void *, s32);
void *func_02097868(void *, s32);
void *func_02098750(void *);
u16 *func_02097f6c(void *, s32);
s32 func_02097f30(void *, void *, s32, s32);
s32 func_02063b8c(s32);
s32 func_020482b0(void *, void *, s32, s32, s32, void *, s32);
s32 func_0204842c(void *);
s32 func_02046714(void *);
s32 func_0209cf18(void *);
s32 func_0204eb30(void *, void *, s32, s32, s32);
void func_020463fc(void *, Unk_02045e34_Map *);
s32 func_020b5184();
s32 func_020b5164();
s32 func_020402e8();
s32 func_02041b68();
s32 func_020c00c0();
s32 func_0209ea60(void *);
s32 func_0209d124(void *, s32);
s32 func_0204c22c(void *, void *);
s32 func_0205b124(void *);
s32 func_0205afa0(void *);
s32 func_0205b120(void *);
s32 func_02086444(void *, s32);
s32 func_020981f8();
extern u8 data_021d7350[];
extern u8 data_021ed29c[];
s32 func_0204c084(u32);
s32 func_0209cc6c(void *);
s32 func_02041a54(void *, void *, s32, s32);
s32 func_0204674c(void *, void *, void *, s32, s32, s32);
void func_02046358();
void func_02046340(void *);
void func_0204631c(void *);
void func_020462b4(void *);
void func_0204625c(void *, void *, s32, s32, s32);
u16 *func_0204ebd8(void *, s32, s32, s32, s32, s32);
s32 func_0204edf8(void *, void *, s32, s32, s32, s32);
s32 func_02040d80();
s32 func_02040974(s32, s32, s32);
s32 func_0204657c(void *);
s32 func_0209d498(void *);
s32 func_0209d374(void *, void *);

void func_02045c18(Unk_02045c18_Bits *p) {
    p->unk_00_lo = 7;
    p->unk_08 = 0xffff;
    p->unk_0a = 0xfff1;
    p->unk_01_a = 0;
    p->unk_01_d = 0;
    p->unk_02_a = 0;
    p->unk_01_b = 7;
    p->unk_02_b = 0;
    p->unk_02_c = 15;
}

void func_02045c68() {
    func_02042340(data_021c4350);
    func_02041880(data_021c3e74);
}

void func_02045c88() {
    func_02042350(data_021c4350);
    func_020451a4(data_021c3f88);
}

void func_02045ca8(void *p) {
    func_02046fd8(data_021c3ea4, p);
}

void func_02045cb8() {
    if (func_02072e44(data_020cbb18) == 0) {
        func_020422a8(data_021c4350);
        func_02047798(data_021c3ea4);
    }
}

void func_02045ce8() {
    Unk_02045d40_Ent *p = func_02045d40();
    s32 i;
    for (i = 0; i < 24; i++) {
        p->a = -1;
        p->b = -1;
        p++;
    }
}

void func_02045d08(s32 a, s32 b) {
    Unk_02045d40_Ent *p = func_02045d40();
    s32 i;
    for (i = 0; i < 24; i++) {
        if (p->a == -1 && p->b == -1) {
            p->a = a;
            p->b = b;
            break;
        }
        p++;
    }
}

Unk_02045d40_Ent *func_02045d40() {
    return (Unk_02045d40_Ent *)data_021c3ec8;
}

s32 func_02045d48(s32 a, s32 b) {
    s32 r = -1;
    if (func_02072e44(data_020cbb18) == 0) {
        Unk_02045d40_Ent *p = func_02045d40();
        s32 i;
        for (i = 0; i < 24; i++) {
            if (p->a == a && p->b == b) {
                r = i;
                break;
            }
            p++;
        }
    } else {
        r = (a + b) % 24;
    }
    return r;
}

BOOL func_02045d98(void *out) {
    BOOL r = FALSE;
    s32 a = data_021c40cc.unk_34;
    s32 b = data_021c40cc.unk_38;
    s32 c = data_021c40cc.unk_3c;
    s32 d = data_021c40cc.unk_40;
    if (a != -1 && b != -1 && c != -1 && d != -1) {
        if (func_0204da0c() != 0) {
            func_0204ed70(out, a + 1, b + 1, c, d);
            r = TRUE;
        }
    }
    return r;
}

void *func_02045de4() {
    return data_021c3ea4;
}

void *func_02045dec() {
    return data_021c40e4;
}

s32 func_02045df4() {
    void *p = func_0204da0c();
    s32 r = 5;
    if (p != 0) {
        r = func_020499c4(&data_021c40cc, p);
    }
    return r;
}

void func_02045e14() {
    func_02045df4();
    func_020418d4(data_021c3e74);
    func_02045cb8();
    func_020453dc();
}

void func_02045e34() {
    Unk_02045e34_Map *p = (Unk_02045e34_Map *)func_0204da0c();
    if (p != 0) {
        s32 w = p->unk_04 - 2;
        s32 h = p->unk_08 - 2;
        func_02049bcc(&data_021c40cc, p, w, h);
        func_02047a10(data_021c3ea4, p, w, h);
        func_020479bc(data_021c3ea4, p, w, h);
        func_02048078(data_021c3ea4, p, w, h);
        func_02047830(data_021c3ea4, p, w, h);
        func_02045cb8();
    }
}

void func_02045e98() {
    Unk_02045e34_Map *p = (Unk_02045e34_Map *)func_0204da0c();
    func_0209cfc8(0);
    if (p != 0) {
        s32 w = p->unk_04 - 2;
        s32 h = p->unk_08 - 2;
        s32 i, j;
        s32 z = 0;
        for (i = 0; i < w; i++) {
            u8 *row;
            j = z;
            row = data_021c4110 + i * 0x90;
            for (; j < h; j++) {
                func_02049e40(row + j * 0x24, p, i + 1, j + 1);
            }
        }
        func_02046514(data_021c3ea4, p);
    }
    func_02045fc4();
    func_02046230();
    if (func_02072e44(data_020cbb18) == 0) {
        if (func_02045f6c() != 0) {
            func_02046294(data_021c3ea4);
        }
        if (func_020b50e8() == 0x3f) {
            func_02046c34(data_021c3ea4, 1);
        } else {
            func_020460dc(1);
        }
    }
    func_020422a8(data_021c4350);
    func_020451a4(data_021c3f88);
    func_02042290(data_021c3e90);
    func_02042570(data_021c47bc);
}

BOOL func_02045f6c() {
    BOOL r = FALSE;
    if (func_0206e850() != 0) {
        r = TRUE;
    } else {
        Unk_02046a0_Ts t;
        t.w[0] = r;
        t.w[1] = r;
        t.w[2] = r;
        t.w[3] = r;
        func_0209d498(&t);
        Unk_02045f6c_Rgb *const src = &data_021ed1a4;
        t.w[2] = r;
        t.w[3] = r;
        ((u8 *)&t)[0xd] = src->c;
        ((u8 *)&t)[0xc] = src->b;
        ((u8 *)&t)[0xb] = src->a;
        ((u8 *)&t)[0xa] = 6;
        if (func_0209d374(&t, &t.w[2]) > 0) {
            r = TRUE;
        }
    }
    return r;
}

void func_02045fc4() {
    s32 z;
    Unk_02045d40_Ent *q;
    s32 i;
    s32 w;
    u16 *e;
    s32 k;
    s32 j;
    Unk_02045e34_Map *p;
    p = (Unk_02045e34_Map *)func_0204da0c();
    func_02045ce8();
    if (p != 0) {
        w = p->unk_04 - 2;
        q = func_02045d40();
        j = 0; z = 0; k = 0;
        for (; j < 2; j++) {
            i = z;
            for (; i < w; i++) {
                e = func_0204ebd8(p, i + 1, j + 1, z, z, z);
                k = 0;
                for (; k < 0x100; e++, k++) {
                    if (*e == 0x6d) {
                        func_0204edf8(&q->a, &q->b, i + 1, j + 1, k % 16, k / 16);
                        q++;
                    }
                }
            }
        }
    }
}

void func_0204605c() {
    if (func_02040d80() != 0) {
        if (func_02072e44(data_020cbb18) == 0) {
            Unk_02046a0_Ts t;
            t.w[0] = 0;
            t.w[1] = 0;
            t.w[2] = 0;
            t.w[3] = 0;
            Unk_02045f6c_Rgb *const src = &data_021ed1a4;
            func_0209d498(&t);
            t.w[2] = 0;
            t.w[3] = 0;
            ((u8 *)&t)[0xd] = src->c;
            ((u8 *)&t)[0xc] = src->b;
            ((u8 *)&t)[0xb] = src->a;
            ((u8 *)&t)[0xa] = 6;
            s32 d = func_0209d374(&t.w[2], &t) / 60 / 24;
            if (d >= 1) {
                func_02040974(-1, 99, 0);
            }
        }
        func_0204657c(data_021c3ea4);
    }
}

void func_020460dc(s32 flag) {
    struct {
        Unk_02046a0_Ts t;
        Unk_02045f6c_Rgb c3;
    } l;
    Unk_020460dc_Obj o;
    Unk_02045f6c_Rgb *src;
    u8 *base = data_021d7350;
    s32 dt, days, hours;
    l.t.w[0] = 0;
    l.t.w[1] = 0;
    l.t.w[2] = 0;
    l.t.w[3] = 0;
    func_0209d498(&l.t);
    src = &data_021ed1a4;
    l.t.w[2] = 0;
    l.t.w[3] = 0;
    ((u8 *)&l.t)[0xd] = src->c;
    ((u8 *)&l.t)[0xc] = src->b;
    ((u8 *)&l.t)[0xb] = src->a;
    ((u8 *)&l.t)[0xa] = 6;
    dt = func_0209d374(&l.t.w[2], &l.t);
    days = dt / 60 / 24;
    func_02046230();
    if (days >= 1 && flag == 0) {
        if (func_020b5184() != 0 || func_020b5164() != 0) {
            func_020402e8();
        }
    }
    func_02041b68();
    if (days >= 1) {
        dt = func_020c00c0();
        if (flag == 0) {
            if (func_020b5184() != 0 || func_020b5164() != 0) {
                func_0209ea60(base + 0x15fc5);
            }
        }
        if (flag != 0 || func_020b5184() != 0 || func_020b5164() != 0) {
            func_0204625c(&l.t.w[2], &l.t, days, dt, flag);
            func_0209d124(&l.t, 6);
            src->c = ((u8 *)&l.t)[5];
            src->b = ((u8 *)&l.t)[4];
            src->a = ((u8 *)&l.t)[3];
        }
    } else {
        if (flag != 0) {
            func_02046c34(data_021c3ea4, 1);
        }
        if (dt < 0) {
            l.c3.c = ((u8 *)&l.t)[5];
            l.c3.b = ((u8 *)&l.t)[4];
            l.c3.a = ((u8 *)&l.t)[3];
            func_02046294(data_021c3ea4);
            func_0204c22c(base + 0x15e54, &l.c3);
            func_0205b124(&o);
            func_0205afa0(&o);
            func_0205b120(&o);
        }
        func_0209d124(&l.t, 6);
        src->c = ((u8 *)&l.t)[5];
        src->b = ((u8 *)&l.t)[4];
        src->a = ((u8 *)&l.t)[3];
    }
    func_02086444(data_021ed29c, days);
    func_020981f8();
}

void func_02046230() {
    Unk_02046230_Ts t;
    t.a = 0;
    t.b = 0;
    func_0209d498(&t);
    func_0209d124(&t, 6);
    func_0204c084((u8)func_0209cc6c(&t));
}

void func_0204625c(void *a, void *b, s32 c, s32 d, s32 e) {
    s32 t = ((Unk_0204625c_Obj *)data_021c3ea4)->unk_20;
    if (t != 0) {
        func_02041a54(a, b, c, d);
    } else {
        func_0204674c(data_021c3ea4, a, b, c, d, e);
    }
}

void func_02046294(void *p) {
    func_02046358();
    func_02046340(p);
    func_0204631c(p);
    func_020462b4(p);
}

void func_020462b4(void *unused) {
    u8 *base = data_021d7350;
    u16 *p = (u16 *)data_021ed22e;
    s32 i;
    for (i = 0; i < 15; p++, i++) {
        u32 v = *p;
        if (v >= 0x1531 && v <= 0x153a) {
            u16 r;
            s32 t;
            if (v >= 0x1531 && v <= 0x153a) {
                t = v - 0x1531;
            } else {
                t = -1;
            }
            if ((u32)t < 10) {
                r = 0x154a + t;
            } else {
                r = 0x154a;
            }
            *(u16 *)(base + i * 2 + 0x15ede) = r;
        }
    }
}

void func_0204631c(void *p) {
    s32 i;
    for (i = 0; i < 5; i++) {
        func_020463fc(p, (Unk_02045e34_Map *)func_0204d528(i));
    }
}

void func_02046340(void *p) {
    func_020463fc(p, (Unk_02045e34_Map *)func_0204da0c());
}

void func_02046358() {
    s32 i, j;
    s32 z = 0;
    s32 z2 = 0;
    for (i = 0; i < 4; i++) {
        if (func_020978c8(data_021d735c, i) != 0) {
            void *q = func_02097868(data_021d735c, i);
            for (j = z; j < 15; j++) {
                void *r = func_02098750(q);
                u16 *e = func_02097f6c(r, j);
                if (e != 0) {
                    if (Unk_02046358_R1(e)) {
                        s32 t;
                        u16 w, x;
                        if (*e >= 0x1531 && *e <= 0x153a) {
                            t = *e - 0x1531;
                        } else {
                            t = -1;
                        }
                        if ((u32)t < 10) {
                            x = 0x154a + t;
                        } else {
                            x = 0x154a;
                        }
                        w = x;
                        func_02097f30(r, &w, j, z2);
                    }
                }
            }
        }
    }
}

void func_020463fc(void *p, Unk_02045e34_Map *q) {
    if (q != 0) {
        Unk_020463fc_Sz *sp = &((Unk_020463fc_Map *)q)->sz;
        s32 h, j, i, w, ih;
        w = sp->w;
        h = sp->h;
        for (i = 0; i < h; i++) {
            j = 0;
            if (w > 0) {
                goto test;
            loop:
                {
                    s32 jh = j >> 4;
                    ih = i >> 4;
                    u16 *e = func_0204ebd8(q, jh, ih, j - (jh << 4), i - (ih << 4), 0);
                    if (e != 0) {
                        if (Unk_02046358_R1(e)) {
                            s32 t;
                            u16 v, x;
                            if (*e >= 0x1531 && *e <= 0x153a) {
                                t = *e - 0x1531;
                            } else {
                                t = -1;
                            }
                            if ((u32)t < 10) {
                                x = 0x154a + t;
                            } else {
                                x = 0x154a;
                            }
                            v = x;
                            func_0204eb30(q, &v, j, i, 0);
                        }
                    }
                }
                j++;
            test:
                if (j < w) goto loop;
            }
        }
    }
}

s32 func_020464bc(void *p) {
    s32 r5 = func_02063b8c(4);
    void *q = func_0204da0c();
    s32 i;
    for (i = 0; i < 4; i++) {
        if (func_020482b0(p, q, r5 + 1, 4, 0x1520, func_0204842c, 0) != 0) {
            return 1;
        }
        r5 = (r5 + 1) & 3;
    }
    return 0;
}

void func_02046514(void *p, void *q) {
    Unk_02045e34_Map *m = (Unk_02045e34_Map *)q;
    s32 h = m->unk_04 - 2;
    s32 i;
    for (i = 0; i < h; i++) {
        s32 n = 2 - ((Unk_02046514_Ent *)data_021c4110)[i].unk_88;
        while (n > 0) {
            func_020482b0(p, q, i + 1, 4, func_02046714(p), func_0204842c, 0);
            n--;
        }
    }
    func_0209cf18(data_021c3ea4);
}
}
