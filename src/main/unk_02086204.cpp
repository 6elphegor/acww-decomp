#include "types.h"

struct Unk_02086340_T {
    u32 w0, w1;
};

struct Unk_020868cc_Vec3 {
    s32 x, y, z;
};

struct Unk_020868e4_Ctx {
    s32 unk_00;
    s32 v[2];
};

extern "C" {
void func_02085fb4(void *);
void *func_02115fb4(void *d, s32 v, u32 n);
void func_02116048(void *, void *, u32);
u32 func_02094294(void *p);
void func_020942c8(void *);
void func_020942f8(void *);
void func_0209d498(void *);
void func_0209d164(void *, s32 v);
void func_0209cffc(void *a, void *b, u32 c, u32 d, u32 e);
s32 func_0209d3d0(void *a, void *b, s32 n);
s32 func_0209d3a4(void *a, void *b);
void func_0209e120(void *p, u32 n);
s32 func_0209ceac(s32 a, s32 b, s32 c);
s32 func_0209cef4();
s32 func_0206e844();
s32 func_0206e850();
s32 func_02063b8c(s32 a);
s32 func_02063b74(s32 a);
void *func_0204da0c();
void func_0204edf8(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
s32 func_0204ed8c(Unk_020868cc_Vec3 *out, s32 x, s32 z);
void func_0204edd8(void *a, void *b);
BOOL func_0208709c(s32 x, s32 y, void *ctx);
void func_02086ba8(void *);
extern u8 data_021d7350[];
}

// ---- bitfield byte objects ----
struct Unk_0208620c {
    u8 a : 1;
    u8 b : 3;
    u8 c : 3;
    u8 d : 1;
    void func_0208620c();
};

void Unk_0208620c::func_0208620c() {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
}

struct Unk_02086238 {
    u8 cnt : 3;
    u8 flag : 1;
    void func_02086238();
    BOOL func_02086244();
    void func_02086258();
    s32 func_02086274();
};

void Unk_02086238::func_02086238() {
    flag = 1;
}

BOOL Unk_02086238::func_02086244() {
    if (flag == 1) return TRUE;
    return FALSE;
}

void Unk_02086238::func_02086258() {
    cnt = cnt + 1;
}

s32 Unk_02086238::func_02086274() {
    return cnt;
}

extern "C" {
void func_02086204(void *p) {
    func_02085fb4(p);
}
void func_02086230() {}
void func_02086234() {}
void func_02086290() {}
void func_02086294() {}
void func_020862f4() {}
void func_020868c4() {}
void func_020868c8() {}
void func_02086ae8() {}
void func_02086aec() {}
}

extern "C" void func_02086284(void *p);
extern "C" void func_0208627c(void *p) {
    func_02086284(p);
}
extern "C" void func_02086284(void *p) {
    func_02115fb4(p, 0, 1);
}
extern "C" void func_02086adc(void *p) {
    func_02115fb4(p, 0, 8);
}

// ---- 0x18-byte record ----
struct Unk_02086328_B8 {
    u8 b[8];
};

struct Unk_02086328 {
    u16 unk_00;
    Unk_02086328_B8 unk_02;
    u16 unk_0a;
    Unk_02086328_B8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    u16 unk_16;
    void func_02086298(const Unk_02086328 *o);
    void func_020862a0(const Unk_02086328 *o);
    void func_020862a8(const Unk_02086328 *o);
    void func_02086300();
    Unk_02086328();
    ~Unk_02086328();
};

void Unk_02086328::func_02086298(const Unk_02086328 *o) {
    unk_00 = o->unk_16;
}

void Unk_02086328::func_020862a0(const Unk_02086328 *o) {
    unk_16 = o->unk_00;
}

void Unk_02086328::func_020862a8(const Unk_02086328 *o) {
    unk_00 = o->unk_00;
    unk_02 = o->unk_02;
    unk_0a = o->unk_0a;
    unk_0c = o->unk_0c;
    unk_14 = o->unk_14;
    unk_15 = o->unk_15;
}

void Unk_02086328::func_02086300() {
    func_02094294(this);
    unk_16 = 0xfff1;
}

Unk_02086328::~Unk_02086328() {
    func_020942c8(this);
}

Unk_02086328::Unk_02086328() {
    func_020942f8(this);
    unk_16 = 0xfff1;
}

// ---- generator object ----
struct Unk_02086340 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05, unk_06, unk_07;
    u16 unk_08;
    u8 unk_0a[14];
    u8 unk_18;
    void func_02086340(void *src);
    void func_02086388();
    void func_020863fc(void *src);
    void func_02086444(s32 d);
    void func_020864f8();
    u16 func_0208653c();
    void func_02086578(s32 flag);
    s32 func_02086740();
    void func_02086768();
    u8 func_020867e8();
    u8 func_020867fc();
    u8 func_02086810();
    void func_02086824(s32 i, s32 n);
    u8 func_02086854(s32 k, s32 z);
    void func_02086878();
    void func_020868a8();
};

void Unk_02086340::func_02086340(void *src) {
    Unk_02086340_T t;
    t.w0 = 0;
    t.w1 = 0;
    if (src == NULL) {
        func_0209d498(&t);
    } else {
        func_02116048(src, &t, 8);
    }
    if (((u8 *)&t)[2] < 6) func_0209d164(&t, 1);
    unk_06 = ((u8 *)&t)[5];
    unk_05 = ((u8 *)&t)[4];
    unk_04 = ((u8 *)&t)[3];
}

void Unk_02086340::func_02086388() {
    struct {
        Unk_02086340_T a, b;
    } l;
#define LB(o) (((u8 *)&l)[o])
    func_0209cffc(&l.a, &unk_04, 6, 0, 0);
    l.b.w0 = 0;
    l.b.w1 = 0;
    func_0209d498(&l.b);
    if (LB(0xa) < 6) {
        func_0209d164(&l.b, 1);
        LB(0xa) = 6;
        LB(9) = 0;
        LB(8) = 0;
    }
    if (func_0209d3d0(&l.b, &l.a, 0x38) == 1) {
        if (func_0209d3a4(&l.a, &l.b) >= 7) {
            func_0209e120(data_021d7350, 4);
            func_02086340(&l.b);
        }
    }
}

void Unk_02086340::func_020863fc(void *src) {
    Unk_02086340_T t;
    t.w0 = 0;
    t.w1 = 0;
    if (src == NULL) {
        func_0209d498(&t);
    } else {
        func_02116048(src, &t, 8);
    }
    if (((u8 *)&t)[2] < 6) func_0209d164(&t, 1);
    unk_02 = ((u8 *)&t)[5];
    unk_01 = ((u8 *)&t)[4];
    unk_00 = ((u8 *)&t)[3];
}

void Unk_02086340::func_02086444(s32 d) {
    struct {
        Unk_02086340_T a, b;
    } l;
    func_0209cffc(&l.a, this, 6, 0, 0);
    l.b.w0 = 0;
    l.b.w1 = 0;
    func_0209d498(&l.b);
    if (LB(0xa) < 6) {
        func_0209d164(&l.b, 1);
        LB(0xa) = 6;
        LB(9) = 0;
        LB(8) = 0;
    }
    s32 r = func_0209d3d0(&l.b, &l.a, 0x38);
    func_02086388();
    if (r == 1) {
        s32 t = func_0209ceac(LB(5), LB(4), LB(3));
        s32 u = func_0209ceac(LB(0xd), LB(0xc), LB(0xb));
        if (u < t || func_0209d3a4(&l.a, &l.b) >= 7) {
            func_02086578(0);
            func_020863fc(&l.b);
        }
    } else if (d < 0) {
        func_02086578(1);
        func_020863fc(&l.b);
        func_02086340(&l.b);
    }
}

void Unk_02086340::func_020864f8() {
    Unk_02086340_T t;
    if (func_0206e844() != 0 || func_0206e850() != 0) {
        t.w0 = 0;
        t.w1 = 0;
        func_0209d498(&t);
        func_02086578(1);
        func_020863fc(&t);
        func_02086340(&t);
    }
}

u16 Unk_02086340::func_0208653c() {
    Unk_02086340_T t;
    s32 i = 0;
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    if (((u8 *)&t)[2] >= 12) i++;
    s32 k = func_0209cef4();
    u8 b = unk_0a[k + k + i];
    u16 r = b;
    if (r == 0) {
        u16 v = unk_08;
        if (v != 0) r = v;
    }
    return r;
}

void Unk_02086340::func_02086578(s32 flag) {
    if (unk_18 != 0xff) {
        s32 r = func_02063b8c(0x65);
        switch (unk_18) {
        case 0:
            if (r < 0x1e) unk_18 = 1;
            else if (r < 0x41) unk_18 = 3;
            else if (r < 0x50) unk_18 = 2;
            break;
        case 1:
            if (r < 0x14) unk_18 = 3;
            else if (r < 0x41) unk_18 = 0;
            else if (r < 0x55) unk_18 = 2;
            break;
        case 2:
            if (r < 0x2d) unk_18 = 1;
            else if (r < 0x46) unk_18 = 3;
            else if (r < 0x5f) unk_18 = 0;
            break;
        case 3:
            if (r < 0x19) unk_18 = 1;
            else if (r < 0x46) unk_18 = 0;
            else if (r < 0x55) unk_18 = 2;
            break;
        }
        if (flag != 0) unk_18 = 2;
    } else {
        unk_18 = func_02063b8c(4);
    }
    unk_08 = 0;
    func_02115fb4(&unk_0a[0], 0, 0xe);
    unk_0a[0] = func_02063b8c(0x15) + 0x5a;
    unk_0a[1] = unk_0a[0];
    switch (unk_18) {
    case 0:
        unk_0a[2] = func_020867fc();
        unk_0a[3] = func_02086810();
        unk_0a[4] = func_02086810();
        unk_0a[5] = func_02086810();
        unk_0a[6] = func_020867fc();
        unk_0a[7] = func_020867fc();
        unk_0a[8] = func_020867fc();
        unk_0a[9] = func_02086810();
        unk_0a[10] = func_02086810();
        unk_0a[11] = func_020867fc();
        unk_0a[12] = func_020867fc();
        unk_0a[13] = func_020867fc();
        break;
    case 1: {
        s32 n = func_02063b8c(4) + 8;
        unk_0a[n] = func_02086740();
        func_02086824(2, n - 2);
        unk_0a[n - 1] = func_020867e8();
        unk_0a[n + 1] = func_020867e8();
        unk_0a[n - 2] = func_020867fc();
        unk_0a[n + 2] = func_020867fc();
        func_02086824(n + 3, 0xe);
        break;
    }
    case 2:
        func_02086824(2, 0xe);
        break;
    case 3:
        func_02086768();
        break;
    }
}

s32 Unk_02086340::func_02086740() {
    s32 t = func_02063b74(0x419a);
    unk_08 = (unk_0a[0] * (t + 0x2000)) >> 12;
    return 0;
}

void Unk_02086340::func_02086768() {
    s32 n = func_02063b8c(6) + 7;
    func_02086824(2, n - 3);
    unk_0a[n - 3] = func_020867fc();
    unk_0a[n - 2] = func_020867fc();
    unk_0a[n] = func_02086854(0x1b33, 0x4f6);
    unk_0a[n - 1] = func_02086854(0x168f, 0x4a4);
    unk_0a[n + 1] = func_02086854(0x168f, 0x4a4);
    func_02086824(n + 2, 0xe);
}

u8 Unk_02086340::func_020867e8() {
    return func_02086854(0x1666, 0x9c3);
}

u8 Unk_02086340::func_020867fc() {
    return func_02086854(0xccd, 0x9c3);
}

u8 Unk_02086340::func_02086810() {
    return func_02086854(0x666, 0x68f);
}

void Unk_02086340::func_02086824(s32 i, s32 n) {
    s32 k = 0xca4;
    for (; i < n; k -= 0x66, i++) {
        unk_0a[i] = func_02086854(k, 0x29);
    }
}

u8 Unk_02086340::func_02086854(s32 k, s32 z) {
    s32 t = func_02063b74(z);
    return (u8)((unk_0a[0] * (k + t)) >> 12);
}

void Unk_02086340::func_02086878() {
    Unk_02086340_T t;
    func_02086578(0);
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    func_020863fc(&t);
    func_02086340(&t);
}

void Unk_02086340::func_020868a8() {
    unk_18 = 0xff;
    unk_08 = 0;
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
    unk_04 = 1;
    unk_05 = 1;
    unk_06 = 0;
    unk_07 = 0;
}

// ---- position pair ----
struct Unk_020868cc {
    s32 x, z;
    void func_020868cc(Unk_020868cc_Vec3 *out) const;
    void func_020868dc(s32 a, s32 b);
    BOOL func_020868e4();
    BOOL func_020869c8(Unk_020868cc_Vec3 *out, s32 *pos, void *ctx);
    s32 func_02086a80(s32 *pos, void *ctx);
};

void Unk_020868cc::func_020868cc(Unk_020868cc_Vec3 *out) const {
    out->x = x;
    out->z = z;
    out->y = 0;
}

void Unk_020868cc::func_020868dc(s32 a, s32 b) {
    x = a;
    z = b;
}

BOOL Unk_020868cc::func_020868e4() {
    u8 buf[4];
    s32 xy[2];
    Unk_020868cc_Vec3 out;
    s32 n;
    Unk_020868e4_Ctx *o = (Unk_020868e4_Ctx *)func_0204da0c();
    if (o != NULL) {
        n = 0;
        xy[0] = 0;
        xy[1] = 0;
        s32 *s = o->v;
        s32 w = s[0];
        s32 h = s[1];
        func_02115fb4(buf, 0, 4);
        for (xy[1] = 1; xy[1] < h - 1; xy[1]++) {
            for (xy[0] = 1; xy[0] < w - 1; xy[0]++) {
                if (func_02086a80(xy, o)) {
                    buf[xy[1] - 1] |= 1 << (xy[0] - 1);
                    n++;
                }
            }
        }
        if (n > 0) {
            s32 r = func_02063b8c(n);
            for (xy[1] = 1; xy[1] < h - 1; xy[1]++) {
                for (xy[0] = 1; xy[0] < w - 1; xy[0]++) {
                    if ((buf[xy[1] - 1] >> (xy[0] - 1)) & 1) {
                        if (r == 0) {
                            func_020869c8(&out, xy, o);
                            func_020868dc(out.x, out.z);
                            return TRUE;
                        }
                        r--;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_020868cc::func_020869c8(Unk_020868cc_Vec3 *out, s32 *pos, void *ctx) {
    s32 n = 0;
    s32 bx = 0, by = 0;
    u16 arr[16];
    s32 x, y;
    func_02115fb4(arr, 0, 0x20);
    func_0204edf8(&bx, &by, pos[0], pos[1], 0, 0);
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_0208709c(bx + x, by + y, ctx)) {
                arr[y] |= 1 << x;
                n++;
            }
        }
    }
    if (n > 0) {
        s32 r = func_02063b8c(n);
        for (x = 0; x < 16; x++) {
            for (y = 0; y < 16; y++) {
                if ((arr[x] >> y) & 1) {
                    if (r == 0) {
                        func_0204ed8c(out, bx + y, by + x);
                        return TRUE;
                    }
                    r--;
                }
            }
        }
    }
    return FALSE;
}

s32 Unk_020868cc::func_02086a80(s32 *pos, void *ctx) {
    s32 bx = 0, by = 0;
    s32 n = 0;
    s32 x, y;
    func_0204edf8(&bx, &by, pos[0], pos[1], 0, 0);
    s32 xe = bx + 16;
    s32 ye = by + 16;
    for (y = by; y < ye; y++) {
        for (x = bx; x < xe; x++) {
            if (func_0208709c(x, y, ctx)) n++;
        }
    }
    return n;
}

// ---- tail ----
struct Unk_02086af0 {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 c : 2;
    u8 d : 2;
    u8 e : 2;
    void func_02086af0(void *v, u16 *out, Unk_020868cc_Vec3 *p);
};

struct Unk_02086af0_Off {
    s32 x, z;
};
extern Unk_02086af0_Off data_020cf270[];
extern s16 data_020cf268[];
extern Unk_02086238 data_021e58a6;

void Unk_02086af0::func_02086af0(void *v, u16 *out, Unk_020868cc_Vec3 *p) {
    if (f1 == 0) func_02086ba8(this);
    Unk_020868cc_Vec3 t;
    Unk_02086af0_Off *tb = data_020cf270;
    Unk_02086af0_Off *e = &tb[c];
    s32 z = p->z + e->z;
    s32 x = p->x + tb[c].x;
    t.x = x;
    t.y = 0;
    t.z = z;
    func_0204edd8(v, &t);
    if (data_021e58a6.func_02086274() >= 5) {
        *out = data_020cf268[c];
    } else if (data_021e58a6.func_02086244()) {
        *out = 0;
    } else {
        *out = d << 14;
    }
}

extern "C" void func_020862f8(Unk_02086328 *p) {
    p->func_02086300();
}
