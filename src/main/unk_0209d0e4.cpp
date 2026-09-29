#include "types.h"

struct Unk_0209d0e4 {
    u8 unk_00; // seconds
    u8 unk_01; // minutes
    u8 unk_02; // hours
    u8 unk_03; // day
    u8 unk_04; // month
    u8 unk_05; // year (0..99)
    u8 unk_06;
    u8 unk_07;
};

struct Unk_0209d4c0_Date {
    s32 year, month, day, week;
};
struct Unk_0209d4c0_Time {
    s32 hour, min, sec;
};
struct Unk_0209d4c0_Out {
    Unk_0209d4c0_Date date;
    Unk_0209d4c0_Time time;
};

class Unk_0209d5f8;
typedef void (Unk_0209d5f8::*Unk_0209d70c_Fn)();

class Unk_0209d5f8 {
public:
    u32 pad[0x11df0 / 4];
    u8 unk_11df0;
};

extern Unk_0209d70c_Fn data_020e234c;
extern Unk_0209d70c_Fn data_020e2354;
extern Unk_0209d70c_Fn data_020e235c;
extern Unk_0209d70c_Fn data_020e2364;
extern Unk_0209d70c_Fn data_020e236c;
extern Unk_0209d70c_Fn data_020e2374;
extern Unk_0209d70c_Fn data_020e237c;
extern s32 data_021d72ec[];
extern s32 data_021d72fc[];
extern u8 data_021ed2d0[];

extern "C" {
u32 func_0209ce48(u32 year, u32 month);
s32 func_0209ceac(u8 year, u8 month, u8 day);
s32 func_0209cd00(void *a, void *b);
void func_0209cf88(void *p);
void func_0209cfe4(void);
s32 func_0209cbd8(void *p);
u32 func_0209cb9c(void *p, void *q);
u16 func_0209cb74(void *p, void *q);
void func_0211d20c(void *date, void *time);
void func_02116048(void *src, void *dst, u32 size);
void func_0209d0a4(Unk_0209d0e4 *p, s32 n);
void func_0209d124(Unk_0209d0e4 *p, s32 n);
void func_0209d164(Unk_0209d0e4 *p, s32 n);
void func_0209d1d0(Unk_0209d0e4 *p, s32 n);
void func_0209d214(Unk_0209d0e4 *p, s32 n);
void func_0209d224(Unk_0209d0e4 *p, s32 n);
void func_0209d258(Unk_0209d0e4 *p, s32 n);
void func_0209d28c(Unk_0209d0e4 *p, s32 n);
void func_0209d2c0(Unk_0209d0e4 *p, s32 n);
void func_0209d2f4(Unk_0209d0e4 *p, s32 n);
void func_0209d328(Unk_0209d0e4 *p, s32 n);
s32 func_0209d3a4(Unk_0209d0e4 *a, Unk_0209d0e4 *b);
void func_0209d5d4(Unk_0209d4c0_Date *d, Unk_0209d4c0_Time *t);

void func_0209ea60(void *);
void func_02084f48(void);
void func_02084ecc(void);
void func_02079c7c(void *);
void func_020850e0(void);
void func_020851e4(void);
void func_0205267c(void);
void func_0209c408(void);
void func_020b1dc0(void);
void func_020b11fc(void);
void func_02034164(void);
void func_020407fc(void *);
void func_020c0270(void *);
void func_02045e98(void);
void func_020ae3a4(void *, s32);
void func_0206daec(void *);
void func_02085178(void);
void func_02086fd0(void);
void func_02085174(void);
void func_02086edc(void);
void func_020850e8(void);
void func_0208516c(void);
void func_020868e4(void);
s32 func_0208a578(void);
void func_0208c134(s32, s32, s32);
void func_0202e8b0(void);
void func_0207a038(void *);
void func_0206e6c4(void);
void func_020b101c(void);
void *func_0209750c(void);
void func_02079f1c(void *, void *);
void func_020781ec(void);
void func_02078308(void);
void func_020782e0(void);
void func_02078328(void);
void func_0206e8b8(void *);
void *func_0204da0c(void);
void func_0204dab4(void *);
void func_0204da24(void *);
void func_0204c6a4(void *);
void func_0209eb84(void *);
void func_0207b814(void *);
void func_0207ac60(void *);
void func_0207a80c(void);
void func_0207a63c(void *);
void func_020b23a8(void *);
void func_0206058c(void *);
void func_0204d42c(void);
void func_0204d3d8(void);
void func_02071b10(void *);
void func_0205b470(void);
void func_02063578(void *);
void func_0207723c(void *);
void func_020ae880(void *);
void func_020ada20(void *);
void func_020ad3d8(void *);
void func_0204c45c(void *);
void func_020c02fc(void *);
void func_02040864(void *);
void func_020872c0(void *);
void func_02086878(void *);
void func_020862f8(void *);
void func_0208627c(void *);
void func_02085908(void *);
void func_0205b648(void *);
void func_0206db04(void *);
void func_02039cf4(void *);
void func_02086204(void *);
void func_0208f200(void *);
void *func_0209888c(void *);
void *func_0209409c(void);
void *func_0209832c(void *);
void func_02094094(void *, void *);
void *func_020986d4(void *);
void func_02071c98(void *, void *, void *);
void func_02097ff4(void *, s32);
void *func_0209868c(void *);
void func_02087b38(void *);
void func_02087b18(void *);
void *func_020986a4(void *);
void func_02087368(void *);
void func_020983d8(void *);
void func_020639b8(void *);
}

static inline s32 Unk_0209d0e4_Abs(s32 v) {
    if (v < 0) {
        v = -v;
    }
    return v;
}

extern "C" {

void func_0209d0e4(Unk_0209d0e4 *p, s32 n) {
    s32 r = p->unk_01 - n;
    if (r < 0) {
        s32 q;
        r = Unk_0209d0e4_Abs(r);
        q = r / 60 + 1;
        r = 60 - r % 60;
        if (r == 60) {
            r = 0;
            q--;
        }
        func_0209d124(p, q);
    }
    p->unk_01 = r;
}

void func_0209d124(Unk_0209d0e4 *p, s32 n) {
    s32 r = p->unk_02 - n;
    if (r < 0) {
        s32 q;
        r = Unk_0209d0e4_Abs(r);
        q = r / 24 + 1;
        r = 24 - r % 24;
        if (r == 24) {
            r = 0;
            q--;
        }
        func_0209d164(p, q);
    }
    p->unk_02 = r;
}

void func_0209d164(Unk_0209d0e4 *p, s32 n) {
    s32 d = p->unk_03;
    s32 dim;
    if (p->unk_04 == 1) {
        dim = func_0209ce48(p->unk_05, 12);
    } else {
        dim = func_0209ce48(p->unk_05, (u8)(p->unk_04 - 1));
    }
    d -= n;
    while (d <= 0) {
        if (d == 0) {
            d = dim;
        } else {
            d += dim;
        }
        func_0209d1d0(p, 1);
        if (p->unk_04 == 1) {
            dim = func_0209ce48(p->unk_05, 12);
        } else {
            dim = func_0209ce48(p->unk_05, (u8)(p->unk_04 - 1));
        }
    }
    p->unk_03 = d;
}

void func_0209d1d0(Unk_0209d0e4 *p, s32 n) {
    s32 m = p->unk_04 - n;
    if (m < 1) {
        s32 k;
        if (m == 0) {
            m = 12;
            k = 1;
        } else {
            m = Unk_0209d0e4_Abs(m);
            k = m / 12 + 1;
            m = 12 - m % 12;
        }
        func_0209d214(p, k);
    }
    p->unk_04 = m;
}

void func_0209d214(Unk_0209d0e4 *p, s32 n) {
    s32 y = p->unk_05 - n;
    if (y < 0) {
        y += 100;
    }
    p->unk_05 = y;
}

void func_0209d224(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_00 + n;
    if (s >= 60) {
        func_0209d258(p, s / 60);
        s = s % 60;
    }
    p->unk_00 = s;
}

void func_0209d258(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_01 + n;
    if (s >= 60) {
        func_0209d28c(p, s / 60);
        s = s % 60;
    }
    p->unk_01 = s;
}

void func_0209d28c(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_02 + n;
    if (s >= 24) {
        func_0209d2c0(p, s / 24);
        s = s % 24;
    }
    p->unk_02 = s;
}

void func_0209d2c0(Unk_0209d0e4 *p, s32 n) {
    s32 dim = func_0209ce48(p->unk_05, p->unk_04);
    s32 d = p->unk_03 + n;
    while (d > dim) {
        d -= dim;
        func_0209d2f4(p, 1);
        dim = func_0209ce48(p->unk_05, p->unk_04);
    }
    p->unk_03 = d;
}

void func_0209d2f4(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_04 + n;
    if (s > 12) {
        func_0209d328(p, s / 12);
        s = s % 12;
    }
    p->unk_04 = s;
}

void func_0209d328(Unk_0209d0e4 *p, s32 n) {
    s32 y = p->unk_05 + n;
    if (y > 99) {
        y -= 100;
    }
    p->unk_05 = y;
}

void func_0209d338(Unk_0209d0e4 *p, Unk_0209d0e4 *q) {
    if (q) {
        s32 dow = func_0209ceac(p->unk_05, p->unk_04, p->unk_03);
        if (q != p) {
            func_02116048(p, q, 8);
        }
        func_0209d164(q, dow);
        q->unk_02 = 0;
        q->unk_01 = 0;
        q->unk_00 = 0;
    }
}

s32 func_0209d374(Unk_0209d0e4 *a, Unk_0209d0e4 *b) {
    s32 days = func_0209d3a4(a, b);
    s32 t = (b->unk_02 - a->unk_02) * 60 - a->unk_01;
    t += days * 0x5a0;
    return t + b->unk_01;
}

s32 func_0209d3a4(Unk_0209d0e4 *a, Unk_0209d0e4 *b) {
    struct L {
        u8 x[3];
        u8 pad;
        u8 y[3];
    } l;
    l.x[2] = b->unk_05;
    l.x[1] = b->unk_04;
    l.x[0] = b->unk_03;
    l.y[2] = a->unk_05;
    l.y[1] = a->unk_04;
    l.y[0] = a->unk_03;
    return func_0209cd00(&l.x, &l.y);
}

s32 func_0209d3d0(Unk_0209d0e4 *a, Unk_0209d0e4 *b, u32 mask) {
    if (mask & 0x20) {
        if (a->unk_05 < b->unk_05) return -1;
        if (a->unk_05 > b->unk_05) return 1;
    }
    if (mask & 0x10) {
        if (a->unk_04 < b->unk_04) return -1;
        if (a->unk_04 > b->unk_04) return 1;
    }
    if (mask & 0x8) {
        if (a->unk_03 < b->unk_03) return -1;
        if (a->unk_03 > b->unk_03) return 1;
    }
    if (mask & 0x4) {
        if (a->unk_02 < b->unk_02) return -1;
        if (a->unk_02 > b->unk_02) return 1;
    }
    if (mask & 0x2) {
        if (a->unk_01 < b->unk_01) return -1;
        if (a->unk_01 > b->unk_01) return 1;
    }
    if (mask & 0x1) {
        if (a->unk_00 < b->unk_00) return -1;
        if (a->unk_00 > b->unk_00) return 1;
    }
    return 0;
}

void func_0209d498(Unk_0209d0e4 *p) {
    s32 *t = (s32 *)((u32)data_021d72fc);
    u8 *g = (u8 *)data_021d72fc;
    s32 *d = data_021d72ec;
    p->unk_05 = d[0];
    p->unk_04 = d[1];
    p->unk_03 = d[2];
    p->unk_02 = t[0];
    p->unk_01 = t[1];
    p->unk_00 = t[2];
}

struct Unk_0209d4c0_V4 { s32 v[4]; };
struct Unk_0209d4c0_V3 { s32 v[3]; };
struct Unk_0209d4c0_B : Unk_0209d0e4 {
    Unk_0209d4c0_B() { ((u32 *)this)[0] = 0; ((u32 *)this)[1] = 0; }
};
struct Unk_0209d4c0_Dt : Unk_0209d4c0_B {
    Unk_0209d4c0_Dt() { ((u32 *)this)[0] = 0; ((u32 *)this)[1] = 0; }
};
static inline s16 Unk_0209d4c0_Abs16(s16 v) {
    if (v < 0) {
        v = -v;
    }
    return v;
}
void func_0209d4c0(s32 *out) {
    Unk_0209d4c0_V4 d;
    Unk_0209d4c0_V3 t;
    func_0209d5d4((Unk_0209d4c0_Date*)&d, (Unk_0209d4c0_Time*)&t);
    Unk_0209d4c0_V4 d2 = d;
    out[0] = d2.v[0]; out[1] = d2.v[1]; out[2] = d2.v[2]; out[3] = d2.v[3];
    Unk_0209d4c0_V3 t2 = t;
    out[4] = t2.v[0]; out[5] = t2.v[1]; out[6] = t2.v[2];
    s32 a = *(s32 *)(data_021ed2d0 + 0x34);
    s16 b = *(s16 *)(data_021ed2d0 + 0x38);
    Unk_0209d4c0_Dt dtl;
    dtl.unk_05 = d.v[0];
    dtl.unk_04 = d.v[1];
    dtl.unk_03 = d.v[2];
    dtl.unk_02 = t.v[0];
    dtl.unk_01 = t.v[1];
    dtl.unk_00 = t.v[2];
    if (a < 0) {
        func_0209d0e4(&dtl, Unk_0209d0e4_Abs(a));
    } else {
        func_0209d258(&dtl, a);
    }
    if (b < 0) {
        b = Unk_0209d4c0_Abs16(b);
        func_0209d0a4(&dtl, b);
    } else {
        func_0209d224(&dtl, b);
    }
    d.v[0] = dtl.unk_05;
    d.v[1] = dtl.unk_04;
    d.v[2] = dtl.unk_03;
    t.v[0] = dtl.unk_02;
    t.v[1] = dtl.unk_01;
    t.v[2] = dtl.unk_00;
    d.v[3] = func_0209ceac(d.v[0], d.v[1], d.v[2]);
    Unk_0209d4c0_V4 d3 = d;
    out[0] = d3.v[0]; out[1] = d3.v[1]; out[2] = d3.v[2]; out[3] = d3.v[3];
    Unk_0209d4c0_V3 t3 = t;
    out[4] = t3.v[0]; out[5] = t3.v[1]; out[6] = t3.v[2];
}

void func_0209d5d4(Unk_0209d4c0_Date *d, Unk_0209d4c0_Time *t) {
    func_0211d20c(d, t);
    if (d->year == 0 && d->month == 1 && d->day == 1) {
        d->week = 6;
    }
}

void func_0209d5f8(Unk_0209d5f8 *p) {
    p->unk_11df0 = 2;
}

void func_0209d604(Unk_0209d5f8 *p) {
    p->unk_11df0 = 0x1c;
}

BOOL func_0209d610(Unk_0209d5f8 *p) {
    if (p->unk_11df0 == 2) {
        return TRUE;
    }
    return FALSE;
}

void func_0209d624(u8 *p) {
    func_0209ea60(p + 0x15fc5);
    func_02084f48();
    func_02084ecc();
    func_02079c7c(p + 0x8a3c);
    func_020850e0();
    func_020851e4();
    func_0205267c();
    func_0209c408();
    func_020b1dc0();
    func_020b11fc();
    func_02034164();
    func_020407fc(p + 0x15e18);
    func_020c0270(p + 0x15f66);
    func_02045e98();
    func_020ae3a4(p + 0x15db4, 0);
    func_0206daec(p + 0x15fa8);
    func_020850e0();
    func_02085178();
    func_02086fd0();
    func_020850e0();
    func_02085174();
    func_02086edc();
    func_020850e0();
    func_020850e8();
    func_020850e0();
    func_0208516c();
    func_020868e4();
    func_0208c134(func_0208a578(), 0, 1);
    func_0202e8b0();
    func_0207a038(p + 0x8a3c);
    func_0206e6c4();
    func_020b101c();
    func_02079f1c(p + 0x8a3c, func_0209750c());
    func_020781ec();
    func_02078308();
    func_020782e0();
    func_02078328();
}

void func_0209d70c(Unk_0209d5f8 *p, u32 idx) {
    static Unk_0209d70c_Fn tbl[7] = {data_020e237c, data_020e2374, data_020e236c, data_020e234c,
                                     data_020e235c, data_020e2354, data_020e2364};
    (p->*tbl[idx])();
}

void func_0209d7bc(u8 *p) {
    u32 a[2];
    u32 b[2];
    u32 c[2];
    func_0209cbd8(p + 0x15fb4);
    a[0] = 0;
    a[1] = 0;
    func_0206e8b8(a);
    func_02116048(a, b, 8);
    u32 r4 = func_0209cb9c(p + 0x15fb4, b);
    func_02116048(a, c, 8);
    u16 r0 = func_0209cb74(p + 0x15fb4, c);
    *(u32 *)(p + 0x15fb4) = r4;
    *(u16 *)(p + 0x15fb8) = r0;
    func_0209cfe4();
}

void func_0209d81c(void) {
    if (func_0204da0c()) {
        func_0204dab4(func_0204da0c());
        func_0204da24(func_0204da0c());
        func_0204c6a4(func_0204da0c());
    }
}

void func_0209d848(u8 *p) {
    p[0] = 0x8a;
    func_0209eb84(p + 0x15fdc);
    func_0207b814(p + 0x8a3c);
    func_0207ac60(p + 0x8a3c);
    func_0207a80c();
    if (func_0209750c()) {
        func_0207a63c(p + 0x8a3c);
    }
    func_020b23a8(p + 0x1592c);
    func_0206058c(p + 0xe558);
    func_0204d42c();
    func_0204d3d8();
    func_02071b10(p + 0xfafc);
    func_0205b470();
    func_02063578(p + 0x15fbc);
    func_0207723c(p + 0x11488);
    func_020ae880(p + 0x15db4);
    func_020ada20(p + 0x15f84);
    func_020ad3d8(p + 0x15f70);
    func_0204c45c(p + 0x15e54);
    func_020c02fc(p + 0x15f66);
    func_02040864(p + 0x15e18);
    func_020872c0(p + 0x15700);
    func_02086878(p + 0x15f4c);
    func_020862f8(p + 0x15f34);
    func_0208627c(p + 0xe556);
    func_02085908(p + 0x15efc);
    func_0205b648(p + 0x15fb0);
    func_0206db04(p + 0x15fa8);
    func_02039cf4(p + 0x15ec0);
    func_02086204(p + 0xe557);
    func_0208f200(p + 0x10c3c);
}

struct Unk_0209d994_Buf {
    u16 h;
    u8 b[8];
};

void func_0209d994(u8 *p) {
    void *r4 = func_0209750c();
    Unk_0209d994_Buf l;
    func_0209888c(r4);
    l = *(Unk_0209d994_Buf *)func_0209409c();
    func_0209cf88(func_0209832c(r4));
    func_02094094(func_0209888c(r4), p + 2);
    void *r5 = func_020986d4(r4);
    func_02071c98(r5, func_0209888c(r4), &l);
    func_02097ff4(r4, 0x24);
    func_02097ff4(r4, 0x25);
    func_02097ff4(r4, 0x26);
    func_02087b38(func_0209868c(r4));
    func_02097ff4(r4, 0xf);
    func_02087b18(func_0209868c(r4));
    func_02087368(func_020986a4(r4));
    func_020983d8(r4);
    func_020639b8(&l);
}

}
