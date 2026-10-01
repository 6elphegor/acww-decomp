#include "types.h"

struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_020cbb18_Data { u8 pad_00[0x68]; s32 unk_68; };

// An enum-typed local keeps the constant in a callee-saved register across the call.
// func_020085f0 is declared with the enum parameter (real type u32) so the argument is
// passed with `movs r1, r5` instead of `adds r1, r5, #0`.
enum Unk_02094a08_Limit { Unk_02094a08_LIMIT_5 = 5 };

struct Unk_02006d14 {
    u8 pad_00[0x5c];
    Unk_02006d14_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x44c - 0x90];
    s32 unk_44c;
    s32 unk_450;
    s32 unk_454;
    u8 pad_458[4];
    u16 unk_45c;
    u16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[4];
    u8 pad_5a0[0x5c8 - 0x5a0];
    s32 unk_5c8;
    u8 pad_5cc[0x694 - 0x5cc];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    u8 unk_6f0[0x10];
    s32 unk_700;
    u8 pad_704[0x709 - 0x704];
    u8 unk_709[0x7ec - 0x709];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    u32 unk_7f8;
    u8 pad_7fc[4];
    s32 unk_800;
    s32 unk_804;
    u8 pad_808[0x8e7 - 0x808];
    s8 unk_8e7;

    void func_0200ecdc(u32 a);
    void func_0200ec30(u32 a);
    BOOL func_0200ec44(u32 a);
    u32 func_02007c08(u32 a);
    s32 func_0200ba8c(u32 a, u32 b, u32 c, s32 d);
    s32 func_0200bb68(u32 a, s32 b);
    s32 func_0200bd60(u32 a, u32 b, s32 c);
    s32 func_0200fd90(u16 *p);
    s32 func_0200fab8(u16 *p, u32 a, u32 b, u32 c);
    s32 func_0200f5b0();
    s32 func_0200f660();
    s32 func_0200e1ac();
    s32 func_020085f0(Unk_02094a08_Limit a, s32 b);
    s32 func_02009c04(u32 a, s32 b);
    s32 func_02009df8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
    s32 func_02008f60(s32 a, u32 b, s32 c);
    s32 func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s32 c);
    s32 func_02008100(u16 *p, u32 a, s32 b);
    s32 func_020096e8(u32 a, u32 b, s32 c);
    s32 func_0200c2b4(u32 a, u32 b, u32 c, u32 d, s32 e);
    s32 func_02008e50(u32 a, u32 b, u32 c, u32 d, s32 e);
    s32 func_0200ce98(u32 a, u32 b, s32 c);
    s32 func_ov004_0221efa4(Unk_02006d14_Vec *v, u32 a, s32 b);
    s32 func_02010c9c();
    s32 func_02010c88();
    s32 func_020102ec();
};

extern "C" {
extern u8 data_020e416c;
extern u8 data_020d0408[];
extern u8 data_020e1c74;
extern Unk_020cbb18_Data *data_020cbb18;
extern void *data_021c47c4;

Unk_02006d14 *func_02095774(u32 idx);
void *func_02097520(u32 idx);
void func_020987d0(void *p, u32 v);
void func_0209875c(void *p, s32 v);
u8 *func_02098868(void *p);
void func_02098720(void *p, u16 *v);
void func_020986f0(void *p, u16 *v);
void func_02098708(void *p, u16 *v);
void func_02098738(void *p, u16 *v);
void func_0205d354(u8 *p, u8 *v);
void func_0203ee38(Unk_02006d14_Vec *a, Unk_02006d14_Vec *b);
void func_0200f3ec(void *out, void *a, void *b, void *c, void *d);
s32 func_020b52f8();
s32 func_ov004_02234588(s32 *a, s32 *b, s32 c, s32 d);
u16 *func_0204eba0(void *g, void *v, s32 z);
s32 func_0204e858(void *g, void *v);
void func_02010050(Unk_02006d14 *o, u16 *p);
void func_0201000c(Unk_02006d14 *o);
s32 func_0206187c();
void func_02061820(u16 *out, u32 v);
void func_0205e24c(u8 *p, u16 *v, void *z);
void func_0205e120(u8 *p);
s32 func_0203d878();
void func_02010a7c(void *out, Unk_02006d14 *o);
s32 func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
s32 func_02063c18(s32 v);
void *func_020b4934();
void func_020b4b68(void *a, s32 b, void *c, void *d);
s32 func_ov003_02210628(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 func_ov003_0220dff0(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 func_02094c04(u16 *p, s32 a, s32 b);

void func_020943dc(u32 x) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->func_0200ecdc(x);
    }
}

void func_020943f8() {}
void func_020943fc() {}

void func_02094400(s32 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_804 = *p;
    }
}

void func_02094420(s32 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_800 = *p;
    }
}

u16 *func_02094440() {
    Unk_02006d14 *o = func_02095774(4);
    u16 *r = 0;
    u32 buf[3];
    s32 a, b;
    if (!o) return 0;
    if (o->unk_7ec != 2) return 0;
    func_0200f3ec(buf, o, &o->unk_5c, (u8 *)o + 0x8e, &data_020e1c74);
    BOOL t = data_020e416c == 1 ? TRUE : FALSE;
    if (t) {
        if (func_020b52f8()) {
            if (data_020cbb18->unk_68 == 0) {
                if (func_ov004_02234588(&a, &b, 0, 0) < 0) {
                    r = func_0204eba0(data_021c47c4, buf, 0);
                }
            }
        }
    } else {
        void *g = data_021c47c4;
        if (func_0204e858(g, buf)) return 0;
        r = func_0204eba0(g, buf, 0);
    }
    return r;
}

void func_020944f8(Unk_02006d14_Blk *out, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    *out = o->unk_694;
}

BOOL func_0209451c(Unk_02006d14_Vec *out, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) {
        s32 a = o->unk_44c;
        if (a == 0 && o->unk_450 == 0 && o->unk_454 == 0) return FALSE;
        out->x = a;
        out->y = o->unk_450;
        out->z = o->unk_454;
        func_0203ee38(out, out);
        return TRUE;
    }
    return FALSE;
}

BOOL func_02094574(u32 a, u32 b, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) {
        if (!o->func_0200ec44(0x15)) {
            o->func_0200ec30(0x15);
        }
        o->unk_45c = a;
        o->unk_45e = b;
        return TRUE;
    }
    return FALSE;
}

BOOL func_020945b4(u32 x, u32 idx) {
    void *p = func_02097520(idx);
    if (!p) return FALSE;
    func_020987d0(p, x);
    return TRUE;
}

BOOL func_020945d4(s32 a, u32 idx) {
    void *p = func_02097520(idx);
    if (!p) return FALSE;
    func_0209875c(p, a);
    Unk_02006d14 *o = func_02095774(idx);
    if (!o) return FALSE;
    if (o->unk_700 >= 0xa1) return FALSE;
    u8 *v;
    if (a) {
        v = func_02098868(p) + 0x10;
    } else {
        v = func_02098868(p);
    }
    func_0205d354(&o->unk_709[0], v);
    return TRUE;
}

BOOL func_0209463c(u16 *p, s32 kind, u32 idx) {
    void *q = func_02097520(idx);
    u16 v1, v2;
    if (!q) return FALSE;
    switch (kind) {
    case 0:
        func_02098720(q, p);
        break;
    case 1:
        func_020986f0(q, p);
        break;
    case 2:
        func_02098708(q, p);
        break;
    }
    Unk_02006d14 *o = func_02095774(idx);
    if (!o) return FALSE;
    if (o->unk_700 >= 0xa1) return FALSE;
    switch (kind) {
    case 0:
        func_02010050(o, p);
        func_0201000c(o);
        break;
    case 1:
        v1 = *p;
        o->func_0200fd90(&v1);
        break;
    case 2: {
        v2 = *p;
        s32 r4 = o->func_02010c9c();
        s32 r3 = o->func_02010c88();
        o->func_0200fab8(&v2, r4, r3, 0);
        break;
    }
    }
    return TRUE;
}

BOOL func_020946f0(u32 a, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    u16 v[8];
    if (!o) return FALSE;
    void *p = func_02097520(idx);
    if (o->unk_700 >= 0xa1) {
        if (a == 0 || func_0206187c() < a) {
            v[1] = 0xfff1;
            func_02098738(p, &v[1]);
        } else {
            func_02061820(&v[2], a - 1);
            func_02098738(p, &v[2]);
        }
        return FALSE;
    }
    if (a == 0 || func_0206187c() < a) {
        v[3] = 0xfff1;
        func_02098738(p, &v[3]);
        v[4] = 0xfff1;
        func_0205e24c(o->unk_59c, &v[4], 0);
        o->func_020102ec();
    } else {
        func_02061820(&v[0], a - 1);
        func_02098738(p, &v[0]);
        func_0205e24c(o->unk_59c, &v[0], p);
        o->func_020102ec();
        func_0205e120(o->unk_59c);
    }
    return TRUE;
}

void func_020947c0(u16 *out, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    u16 v[4];
    *out = 0xfff1;
    if (o) {
        func_02010a7c(v, o);
        *out = v[0];
    }
}

u8 *func_020947f0(u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) return o->unk_6f0;
    return 0;
}

s32 func_02094810(u8 *p) {
    Unk_02006d14 *o = func_02095774(4);
    u32 v = *p;
    u8 t = data_020d0408[v - 1];
    if (o) {
        o->unk_7f8 = o->func_02007c08(o->unk_7ec);
        return o->func_0200ba8c(*p, t, 5, -1);
    }
    return 0;
}

s32 func_02094860() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = o->func_02007c08(o->unk_7ec);
        return o->func_0200bb68(5, -1);
    }
    return 0;
}

s32 func_02094898() {
    Unk_02006d14 *o = func_02095774(4);
    s16 h;
    s32 pad;
    Unk_02006d14_Vec v;
    if (o) {
        o->unk_7f8 = o->func_02007c08(o->unk_7ec);
        if (o->unk_804 == 3) {
            s32 r5 = o->unk_800;
            h = o->unk_8e;
            if (r5 != -1) {
                func_020b4b68(func_020b4934(), r5, &pad, &h);
            }
            s32 t = func_02063c18(h);
            Unk_02006d14_Vec *pv = &o->unk_5c;
            v.x = o->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            switch (t) {
            case 2: v.z -= 0x6000; break;
            case 0: v.z += 0x6000; break;
            case 3: v.x -= 0x6000; break;
            case 1: v.x += 0x6000; break;
            }
            return o->func_ov004_0221efa4(&v, 6, -1);
        }
    }
    return 0;
}

s32 func_02094960() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 0x28) {
            if (o->func_0200ec44(0xb)) return 1;
        }
        return o->func_0200bd60(3, 5, -1);
    }
    return 0;
}

void func_020949a0(u32 a) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 t = o->func_0200f5b0();
        if (t == 0) goto A;
        if (t == 0xa) {
            if (a == 1) goto A;
        }
        if (a < 2) goto B;
    A:
        o->func_0200ec30(1);
        o->func_0200bd60(3, 5, -1);
        return;
    B:
        func_ov003_02210628(o, 0x10, a, o->unk_5c.x, o->unk_5c.z, o->unk_8e, 6, -1);
    }
}

s32 func_02094a08() {
    if (func_0203d878()) return 0;
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (o->func_0200ec44(0xb)) return 0;
        Unk_02094a08_Limit k = Unk_02094a08_LIMIT_5;
        if (!(k > o->func_0200e1ac())) {
            if (o->unk_7ec == 0x4f && o->unk_5c8 != 5) {
                func_ov003_0220dff0(o, 1, 6, -1);
                return 1;
            }
            return 0;
        }
        return o->func_020085f0(k, -1);
    }
    return 0;
}

s32 func_02094a84() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return o->func_02009c04(6, -1);
    return 0;
}

s32 func_02094aa8(u16 *a, u32 *b, u8 *c, u32 *d, u32 e) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return o->func_02009df8((u32)a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

s32 func_02094ae8(s32 a, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) return o->func_02008f60(a, 5, -1);
    return 0;
}

s32 func_02094b0c(Unk_02006d14_Vec *v, u32 b, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) {
        Unk_02006d14_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return o->func_020093f4(&t, b, 5, -1);
    }
    return 0;
}

s32 func_02094b48(u16 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        u16 h = *p;
        return o->func_02008100(&h, 6, -1);
    }
    return 0;
}

s32 func_02094b78(u16 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return o->func_020096e8(*p, 6, -1);
    return 0;
}

s32 func_02094b9c(u16 *p) { return func_02094c04(p, 2, 0x10); }
s32 func_02094ba8(u16 *p) { return func_02094c04(p, 1, 0x10); }
s32 func_02094bb4(u16 *p) { return func_02094c04(p, 0, 0x10); }

s32 func_02094bc0() {
    u16 v = 0xfff1;
    return func_02094c04(&v, 3, 5);
}

s32 func_02094be0(u16 *p) { return func_02094c04(p, 2, 5); }
s32 func_02094bec(u16 *p) { return func_02094c04(p, 1, 5); }
s32 func_02094bf8(u16 *p) { return func_02094c04(p, 0, 5); }

s32 func_02094c04(u16 *p, s32 a, s32 b) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return o->func_0200c2b4(*p, a, b, 6, -1);
    return 0;
}

s32 func_02094c38() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 r4 = o->unk_7ec;
        s32 r6 = o->unk_8e7;
        o->unk_8e7 = 0;
        if (r4 == 0x2c || (u32)(r4 - 0x29) <= 1) return 1;
        o->unk_7f8 = o->func_02007c08(r4);
        if (r6 > 0) {
            return o->func_02008e50((u8)(r6 + 3), 0, 0, 6, -1);
        }
        u16 buf[2];
        BOOL c = data_020e416c == 0 ? TRUE : FALSE;
        if (c) {
            func_02010a7c(buf, o);
            BOOL c2;
            if (func_0204b2d4(buf)) {
                buf[1] = 0xfff1;
                c2 = func_0204b25c(buf) == func_0204b25c(&buf[1]) ? TRUE : FALSE;
            } else {
                c2 = buf[0] == 0xfff1 ? TRUE : FALSE;
            }
            if (!c2 && !o->func_0200f660() && r4 != 0x39) {
                return func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            }
        }
        return o->func_0200ce98(3, 5, -1);
    }
    return 0;
}
}
