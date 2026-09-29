#include "types.h"

struct Unk_0200dde0_Vec3 {
    s32 x, y, z;
};
struct Unk_0200e2c8 {
    Unk_0200e2c8();
    ~Unk_0200e2c8();
};
struct Unk_0200e248_Blob {
    s32 v[4];
};
class Unk_0200e2c0 : public Unk_0200e2c8 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(s32 a, s32 b, s16 c);

    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    Unk_0200e248_Blob unk_0c;
};
typedef Unk_0200e2c0 Unk_0200e248_Rec;

extern "C" {
s32 func_020951e4(s32);
s32 func_020951dc(s32);
void func_02095324(s32, void *);
s32 func_0209522c(s32);
void func_0205ef8c(void *, u32);
void func_0205d20c(void *, u32);
void func_0205cf84(void *, u32);
void func_0205d38c(void *, u32);
void func_0205d354(void *, s32);
void func_0205e310(void *, u32, void *, void *, s32, s32);
void func_0205fbc0(void *, s32);
void func_02005f04(void *);
void func_0205d5d4(void *, u32);
void func_0205dba8(void *, u32);
void func_0205c778(void *, u32);
void func_0205c718(void *, s32);
void func_0205cbb0(void *, u32);
s32 func_0205c694(void *);
s32 func_0205c91c(void *);
s32 func_0205ef74(void *);
void func_0205c6f4(void *);
s32 func_0210629c(s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02095670(void *a, void *b, void *c, s32 d, s32 e);
s32 func_020955e8(void *a, s32 b, s32 c);
void func_02034d84(u32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_020679b4(s32 a);
s32 func_020aa514();
void func_02067a84(s32 a, u8 *b, s32 c);
void func_02062650(void *obj, u16 *p);
void func_0206260c(void *obj);
void func_020679ec(s32 a, s32 b, void *c, s32 d);
void func_02010a7c(u16 *out, void *obj);
void func_02010af0(u16 *out, void *obj);
void func_02010cb0(u16 *out, void *obj);
void func_02010cd4(u16 *out, void *obj);
}
extern u8 data_020c6194[], data_020c6198[], data_020c619c[], data_020c61a0[], data_020c61a4[], data_020c61a8[], data_020c61ac[], data_020c61b0[], data_020c61b4[];
extern u8 data_020e416c;
extern u8 data_020c6684[];
struct Unk_021c1b3c {
    u8 unk_00[0x248];
    s32 unk_248;
};
extern Unk_021c1b3c *data_021c1b3c;
extern u8 data_021edb5c;
extern char data_020d6f28[], data_020d6f30[];

class Unk_020d6df4 {
public:
    void func_0203e624(u32 v);
    void func_0200d568(s32 a, s32 b, s32 c);
    void func_02005f04();
    BOOL func_0200ec30(s32 v);
    s32 func_02010c88();
    s32 func_02010b08(s32 v);
    void func_02010078(s32 a, s32 b);
    s32 func_02010aa0();
    s32 func_02010d20();
    BOOL func_0200fd90(u16 *v);
    BOOL func_0200fdf4();
    void func_0200e0b8();
    void func_0200e058();
    void func_0200e008();
    BOOL func_02010cf8();
    void func_02010050(void *v);
    void func_0200faa0(s32 a, s32 b, const char *c, const char *d);
    void func_0200fa88(s32 a, s32 b, const char *c, const char *d);
    s32 func_02010c9c();
    BOOL func_0200fab8(u16 *a, s32 b, s32 c, s32 d);

    BOOL func_0200dde0();
    s32 func_0200e1ac();
    s32 func_0200e1dc();
    void func_0200e208();
    Unk_0200e248_Rec *func_0200e220(s32 i);
    BOOL func_0200e248(Unk_0200e248_Rec *r);
    BOOL func_0200f660();
    BOOL func_0200e35c(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 func_0200e3c0(u32 i);
    void vfunc_6c();
    void vfunc_68();
    void vfunc_64();

    /* 0x000 */ u8 unk_000[8];
    /* 0x008 */ s32 unk_08;
    /* 0x00c */ u8 unk_0c[0x5c - 0xc];
    /* 0x05c */ Unk_0200dde0_Vec3 unk_5c;
    /* 0x068 */ u8 unk_068[0x9c - 0x68];
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ u8 unk_0a4[0x128 - 0xa4];
    /* 0x128 */ s32 unk_128;
    /* 0x12c */ u8 unk_12c[0x164 - 0x12c];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ u8 unk_168;
    /* 0x169 */ u8 unk_169[0x385 - 0x169];
    /* 0x385 */ u8 unk_385[0x424 - 0x385];
    /* 0x424 */ u8 unk_424[0x598 - 0x424];
    /* 0x598 */ u8 unk_598[4];
    /* 0x59c */ u8 unk_59c[0x5c4 - 0x59c];
    /* 0x5c4 */ u8 unk_5c4[0x6e8 - 0x5c4];
    /* 0x6e8 */ s32 unk_6e8;
    /* 0x6ec */ u8 unk_6ec[4];
    /* 0x6f0 */ Unk_0200dde0_Vec3 unk_6f0;
    /* 0x6fc */ u8 unk_6fc[0x709 - 0x6fc];
    /* 0x709 */ u8 unk_709;
    /* 0x70a */ u8 unk_70a;
    /* 0x70b */ u8 unk_70b;
    /* 0x70c */ u8 unk_70c[0x770 - 0x70c];
    /* 0x770 */ u8 unk_770[0x79c - 0x770];
    /* 0x79c */ u8 unk_79c[0x7d0 - 0x79c];
    /* 0x7d0 */ u16 unk_7d0;
    /* 0x7d2 */ u8 unk_7d2;
    /* 0x7d3 */ u8 unk_7d3;
    /* 0x7d4 */ u16 unk_7d4;
    /* 0x7d6 */ u8 unk_7d6[2];
    /* 0x7d8 */ u8 unk_7d8;
    /* 0x7d9 */ u8 unk_7d9[0x7ec - 0x7d9];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 unk_7f0[8];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ s32 unk_800;
    /* 0x804 */ s32 unk_804;
    /* 0x808 */ s32 unk_808;
    /* 0x80c */ s32 unk_80c;
    /* 0x810 */ s32 unk_810;
    /* 0x814 */ s32 unk_814;
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u8 unk_81c[0x8e4 - 0x81c];
    /* 0x8e4 */ u8 unk_8e4;
    /* 0x8e5 */ u8 unk_8e5;
    /* 0x8e6 */ u8 unk_8e6[0x900 - 0x8e6];
    /* 0x900 */ u8 unk_900;
    /* 0x901 */ u8 unk_901[0x930 - 0x901];
    /* 0x930 */ Unk_0200e248_Rec unk_930[30];
    /* 0xc78 */ s32 unk_c78;
    /* 0xc7c */ s32 unk_c7c;
};

BOOL Unk_020d6df4::func_0200dde0() {
    s32 r6 = unk_08;
    s32 r5;
    unk_7fc = func_020951e4(r6);
    func_0203e624((u16)unk_7fc);
    func_02095324(unk_7fc, this);
    func_0205ef8c(&unk_79c, data_020c6194[func_0209522c(unk_7fc)]);
    r5 = func_02010c88();
    func_02010078(r5, func_02010b08(1));
    func_0200e0b8();
    func_0205d20c(&unk_70b, data_020c61a4[func_0209522c(unk_7fc)]);
    func_0205cf84(&unk_70a, data_020c61ac[func_0209522c(unk_7fc)]);
    func_0205d38c(&unk_709, data_020c619c[func_0209522c(unk_7fc)]);
    func_0205d354(&unk_709, func_02010aa0());
    func_0200e058();
    func_0200e008();
    r5 = func_0209522c(unk_7fc);
    u16 t;
    func_02010a7c(&t, this);
    func_0205e310(&unk_59c, data_020c61b0[r5], this, &t, func_02010d20(), 0);
    func_0205fbc0(&unk_5c4, unk_7fc);
    unk_9c = 0xffffb000;
    unk_a0 = 0xffff6000;
    func_0200d568(func_020951dc(r6), 9, -1);
    unk_900 &= ~0x80;
    func_02005f04();
    unk_6e8 = 0;
    func_0200ec30(1);
    BOOL b = (data_020e416c == 0);
    if (b) func_0200ec30(0);
    Unk_0200dde0_Vec3 *p = &unk_5c;
    unk_6f0.x = p->x;
    unk_6f0.y = p->y;
    unk_6f0.z = p->z;
    unk_808 = -1;
    unk_80c = -1;
    unk_800 = -1;
    unk_804 = 0;
    unk_810 = 0;
    unk_814 = 0;
    unk_818 = 0xf;
    unk_8e5 = 0x1f;
    unk_8e4 = 0;
    unk_164 = 0;
    unk_168 = 0;
    return TRUE;
}

void Unk_020d6df4::func_0200e008() {
    u16 v[2];
    func_0205d5d4(&unk_598, data_020c6198[func_0209522c(unk_7fc)]);
    func_02010af0(&v[0], this);
    v[1] = v[0];
    func_0200fd90(&v[1]);
    func_0200fdf4();
}

void Unk_020d6df4::func_0200e058() {
    u16 v[2];
    s32 r4, r3;
    func_0205dba8(&unk_424, data_020c61b4[func_0209522c(unk_7fc)]);
    func_02010cb0(&v[1], this);
    v[0] = v[1];
    r4 = func_02010c9c();
    r3 = func_02010c88();
    func_0200fab8(v, r4, r3, 1);
}

void Unk_020d6df4::func_0200e0b8() {
    u16 v;
    s32 r4, r6;
    func_0205c778(&unk_385, data_020c61a8[func_0209522c(unk_7fc)]);
    if (func_02010cf8() == 0) {
        func_0205c718(&unk_385, 0);
    } else {
        func_0205c718(&unk_385, 1);
    }
    func_0205cbb0(&unk_770, data_020c61a0[func_0209522c(unk_7fc)]);
    func_02010cd4(&v, this);
    func_02010050(&v);
    r4 = func_0210629c(func_0205c694(&unk_385));
    r6 = func_0210629c(func_0205c91c(&unk_770));
    func_0200faa0(r6, r4, data_020d6f28, data_020d6f28);
    func_0200fa88(r6, r4, data_020d6f28, data_020d6f28);
    r4 = func_0210629c(func_0205ef74(&unk_79c));
    func_0200fa88(r4, func_0210629c(func_0205c694(&unk_385)), data_020d6f30, data_020d6f30);
    func_0205c6f4(&unk_385);
}

s32 Unk_020d6df4::func_0200e1ac() {
    s32 r2 = 0;
    if (unk_c7c >= 0) {
        r2 = func_0200e220(unk_c7c)->unk_04;
    }
    s32 r0 = unk_7f8 + 1;
    if (r0 <= r2) r0 = r2;
    return r0;
}

s32 Unk_020d6df4::func_0200e1dc() {
    s32 r2 = 0;
    if (unk_c7c >= 0) {
        r2 = func_0200e220(unk_c7c)->unk_04;
    }
    s32 r0 = unk_7f8;
    if (r0 <= r2) r0 = r2;
    return r0;
}

void Unk_020d6df4::func_0200e208() {
    unk_c78 = 0;
    unk_c7c = -1;
}

Unk_0200e248_Rec *Unk_020d6df4::func_0200e220(s32 i) {
    if (i >= 0 && i < 0x1e && i < unk_c78) {
        return &unk_930[i];
    }
    return NULL;
}

BOOL Unk_020d6df4::func_0200e248(Unk_0200e248_Rec *r) {
    s32 n = unk_c78;
    if (n < 0x1e) {
        if (unk_c7c >= 0) {
            s32 t = r->unk_04;
            if (func_0200e220(unk_c7c)->unk_04 < t) {
                unk_c7c = unk_c78;
            }
        } else {
            unk_c7c = n;
        }
        Unk_0200e248_Rec *d = &unk_930[unk_c78];
        d->unk_00 = r->unk_00;
        d->unk_04 = r->unk_04;
        d->unk_08 = r->unk_08;
        d->unk_0c = r->unk_0c;
        unk_c78++;
        return TRUE;
    }
    return FALSE;
}

void Unk_0200e2c0::func_0200e2c0(s32 a, s32 b, s16 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

Unk_0200e2c8::Unk_0200e2c8() {}
Unk_0200e2c8::~Unk_0200e2c8() {}
Unk_0200e2c0::Unk_0200e2c0() {}
Unk_0200e2c0::~Unk_0200e2c0() {}

extern "C" BOOL func_0200e2f0(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out) {
    s32 r5;
    BOOL r;
    if (c < func_01ffcb0c(0x108, 0x108)) return FALSE;
    r5 = func_020e7b98(a, b);
    if (c >= func_01ffcb0c(0x2666, 0x2666)) {
        r = TRUE;
    } else {
        s32 diff = (s16)(r5 - d);
        if (diff < 0) diff = -diff;
        if (diff < 0x4000) r = TRUE; else r = FALSE;
    }
    if (r) *out = r5;
    return r;
}

BOOL Unk_020d6df4::func_0200e35c(u8 *a, s32 *b, s32 *c, u16 *d) {
    struct {
        u8 a;
        s16 b;
    } t;
    s32 t8, tc;
    if (!func_02095670(&t, &t8, &tc, -1, unk_7fc)) return FALSE;
    if (!func_020955e8(&t.b, -1, unk_7fc)) return FALSE;
    *a = t.a;
    *b = t8;
    *c = tc;
    *d = t.b;
    return TRUE;
}

u8 Unk_020d6df4::func_0200e3c0(u32 i) {
    return data_020c6684[i];
}

void Unk_020d6df4::vfunc_6c() {
    s32 st = unk_818;
    s32 r5;
    if (st >= 0xf) return;
    r5 = 6;
    switch (st) {
    case 11:
        r5 = 0x23;
    case 10:
        func_02034d84(0x39);
        func_02034dd0(0xc, r5, r5 + 5);
        unk_818 = 0xf;
        break;
    case 7: {
        u16 v[2];
        u16 r6 = unk_7d0;
        BOOL ok;
        func_02034d84(r6);
        func_02010a7c(v, this);
        if (func_0204b2d4(v)) {
            v[1] = 0xfff1;
            s32 r7 = func_0204b25c(v);
            if (r7 == func_0204b25c(&v[1])) ok = TRUE; else ok = FALSE;
        } else {
            if (v[0] == 0xfff1) ok = TRUE; else ok = FALSE;
        }
        if (!ok && !func_0200f660()) {
            BOOL b = (data_020e416c == 0);
            if (b) r5 += 0x15;
        }
        if ((u16)(r6 + 0xffc4) <= 1) {
            func_02034dd0(5, r5, r5 + 5);
        } else {
            func_02034dd0(0xc, r5, r5 + 5);
        }
        unk_818 = 0xf;
        break;
    }
    case 5:
    case 8: {
        u32 arg;
        r5 = 0xc;
        if (unk_7ec == 0x57) {
            arg = unk_7d4;
            if (arg == 0x3b) r5 = 5;
        } else if (unk_7ec == 0x54) {
            arg = unk_7d0;
            if (arg == 0x3a) r5 = 5;
        } else if (unk_7ec == 0x1c) {
            break;
        } else if (unk_7ec == 0x19) {
            break;
        } else if (unk_7ec == 0x5f) {
            arg = 0x39;
        } else {
            break;
        }
        func_02034d84(arg);
        func_02034dd0(r5, 0x14, 0x19);
        if (unk_818 != 5) unk_818 = 0xf;
        break;
    }
    case 9: {
        u32 arg;
        if (unk_7ec == 0x57) {
            arg = unk_7d4;
            r5 += 0x1e;
        } else {
            arg = unk_7d0;
        }
        func_02034d84(arg);
        func_02034dd0(0xc, r5, r5 + 5);
        unk_818 = 0xf;
        break;
    }
    case 12:
        func_02034d84(0x42);
        func_02034dd0(0xc, r5, 0xb);
        unk_818 = 0xf;
        break;
    }
}

void Unk_020d6df4::vfunc_68() {
    s32 st = unk_818;
    if (st >= 0xf) return;
    switch (st) {
    case 0:
    case 2:
    case 3:
    case 4: {
        s32 r5;
        u8 b;
        func_020679b4(unk_128);
        r5 = func_020aa514();
        b = data_021edb5c;
        func_02067a84(unk_128, &b, 0);
        if (r5 == 0) {
            unk_818 = 5;
        } else {
            switch (unk_818) {
            case 0:
            case 4:
                unk_818 = 9;
                break;
            case 2:
                unk_818 = 0xb;
                break;
            default:
                unk_818 = 0xf;
                break;
            }
        }
        break;
    }
    }
}

void Unk_020d6df4::vfunc_64() {
    u8 buf[12];
    if (unk_818 >= 0xf) return;
    switch (unk_818) {
    case 0:
        buf[0] = 0x3d;
        func_02067a84(unk_128, &buf[0], 0);
        break;
    case 4:
        buf[1] = 0x3e;
        func_02067a84(unk_128, &buf[1], 0);
        break;
    case 2:
        buf[2] = 3;
        func_02067a84(unk_128, &buf[2], 0);
        break;
    case 1:
        buf[3] = 0x3c;
        func_02067a84(unk_128, &buf[3], 0);
        unk_818 = 9;
        break;
    case 5:
    case 6:
        data_021c1b3c->unk_248 = 0xb;
        break;
    case 13: {
        u32 obj[9];
        buf[4] = 0x3f;
        func_02067a84(unk_128, &buf[4], 0);
        *(u16 *)&buf[6] = unk_7d8 + 0x12b0;
        func_02062650(obj, (u16 *)&buf[6]);
        func_020679ec(unk_128, 0, obj, 7);
        func_0206260c(obj);
        unk_818 = 8;
        break;
    }
    case 14: {
        u32 obj[9];
        buf[5] = 0x3f;
        func_02067a84(unk_128, &buf[5], 0);
        unk_818 = 8;
        *(u16 *)&buf[8] = unk_7d3 + 0x12e8;
        func_02062650(obj, (u16 *)&buf[8]);
        func_020679ec(unk_128, 0, obj, 7);
        func_0206260c(obj);
        break;
    }
    }
}
