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
};

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern u8 data_020d0408[];
}

extern "C" {
extern u32 data_020e1c74;
}

extern "C" {
extern Unk_020cbb18_Data *data_020cbb18;
}

extern "C" {
extern void *data_021c47c4;
}

extern "C" {
Unk_02006d14 *func_02095774(u32 idx);
}

extern "C" {
void *func_02097520(u32 idx);
}

extern "C" {
void _ZN12Unk_0209865c13func_020987d0Eh(void *p, u32 v);
}

extern "C" {
void func_0209875c(void *p, s32 v);
}

extern "C" {
u8 *_ZN12Unk_0209865c13func_02098868Ev(void *p);
}

extern "C" {
void _ZN12Unk_0209865c13func_02098720EPt(void *p, u16 *v);
}

extern "C" {
void _ZN12Unk_0209865c13func_020986f0EPt(void *p, u16 *v);
}

extern "C" {
void _ZN12Unk_0209865c13func_02098708EPt(void *p, u16 *v);
}

extern "C" {
void _ZN12Unk_0209865c13func_02098738EPt(void *p, u16 *v);
}

extern "C" {
void _ZN12Unk_0205d34013func_0205d354Ej(u8 *p, u8 *v);
}

extern "C" {
void func_0203ee38(Unk_02006d14_Vec *a, Unk_02006d14_Vec *b);
}

extern "C" {
void func_0200f3ec(void *out, void *a, void *b, void *c, void *d);
}

extern "C" {
s32 func_020b52f8();
}

extern "C" {
s32 func_ov004_02234588(s32 *a, s32 *b, s32 c, s32 d);
}

extern "C" {
u16 *func_0204eba0(void *g, void *v, s32 z);
}

extern "C" {
s32 func_0204e858(void *g, void *v);
}

extern "C" {
void _ZN12Unk_02006d1413func_02010050EPv(Unk_02006d14 *o, u16 *p);
}

extern "C" {
void _ZN12Unk_02006d1413func_0201000cEv(Unk_02006d14 *o);
}

extern "C" {
s32 func_0206187c();
}

extern "C" {
void func_02061820(u16 *out, u32 v);
}

extern "C" {
void func_0205e24c(u8 *p, u16 *v, void *z);
}

extern "C" {
void func_0205e120(u8 *p);
}

extern "C" {
s32 func_0203d878();
}

extern "C" {
void func_02010a7c(void *out, Unk_02006d14 *o);
}

extern "C" {
s32 func_0204b2d4(void *p);
}

extern "C" {
s32 func_0204b25c(void *p);
}

extern "C" {
s32 func_02063c18(s32 v);
}

extern "C" {
void *func_020b4934();
}

extern "C" {
void func_020b4b68(void *a, s32 b, void *c, void *d);
}

extern "C" {
s32 func_ov003_02210628(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
}

extern "C" {
s32 func_ov003_0220dff0(Unk_02006d14 *o, u32 a, u32 b, s32 c);
}

extern "C" {
s32 func_02094c04(u16 *p, s32 a, s32 b);
}

// members of Unk_02006d14 whose symbols.txt names do not fit the method declarations (taken `this` first)
extern "C" {
s32 _ZN12Unk_02006d1413func_0200fab8EPthhh(Unk_02006d14 *o, u16 *p, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020102ecEv(Unk_02006d14 *o);
s32 func_02010c9c(Unk_02006d14 *o);
s32 func_02010c88(Unk_02006d14 *o);
}

u32 data_020e1c74 = 0xccd;

extern "C" u8 *func_020947f0(u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) return o->unk_6f0;
    return 0;
}

extern "C" void func_020947c0(u16 *out, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    u16 v[4];
    *out = 0xfff1;
    if (o) {
        func_02010a7c(v, o);
        *out = v[0];
    }
}

extern "C" BOOL func_020946f0(u32 a, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    u16 v[8];
    if (!o) return FALSE;
    void *p = func_02097520(idx);
    if (o->unk_700 >= 0xa1) {
        if (a == 0 || func_0206187c() < a) {
            v[1] = 0xfff1;
            _ZN12Unk_0209865c13func_02098738EPt(p, &v[1]);
        } else {
            func_02061820(&v[2], a - 1);
            _ZN12Unk_0209865c13func_02098738EPt(p, &v[2]);
        }
        return FALSE;
    }
    if (a == 0 || func_0206187c() < a) {
        v[3] = 0xfff1;
        _ZN12Unk_0209865c13func_02098738EPt(p, &v[3]);
        v[4] = 0xfff1;
        func_0205e24c(o->unk_59c, &v[4], 0);
        _ZN12Unk_020102ec13func_020102ecEv(o);
    } else {
        func_02061820(&v[0], a - 1);
        _ZN12Unk_0209865c13func_02098738EPt(p, &v[0]);
        func_0205e24c(o->unk_59c, &v[0], p);
        _ZN12Unk_020102ec13func_020102ecEv(o);
        func_0205e120(o->unk_59c);
    }
    return TRUE;
}

extern "C" BOOL func_0209463c(u16 *p, s32 kind, u32 idx) {
    void *q = func_02097520(idx);
    u16 v1, v2;
    if (!q) return FALSE;
    switch (kind) {
    case 0:
        _ZN12Unk_0209865c13func_02098720EPt(q, p);
        break;
    case 1:
        _ZN12Unk_0209865c13func_020986f0EPt(q, p);
        break;
    case 2:
        _ZN12Unk_0209865c13func_02098708EPt(q, p);
        break;
    }
    Unk_02006d14 *o = func_02095774(idx);
    if (!o) return FALSE;
    if (o->unk_700 >= 0xa1) return FALSE;
    switch (kind) {
    case 0:
        _ZN12Unk_02006d1413func_02010050EPv(o, p);
        _ZN12Unk_02006d1413func_0201000cEv(o);
        break;
    case 1:
        v1 = *p;
        o->func_0200fd90(&v1);
        break;
    case 2: {
        v2 = *p;
        s32 r4 = func_02010c9c(o);
        s32 r3 = func_02010c88(o);
        _ZN12Unk_02006d1413func_0200fab8EPthhh(o, &v2, r4, r3, 0);
        break;
    }
    }
    return TRUE;
}

extern "C" BOOL func_020945d4(s32 a, u32 idx) {
    void *p = func_02097520(idx);
    if (!p) return FALSE;
    func_0209875c(p, a);
    Unk_02006d14 *o = func_02095774(idx);
    if (!o) return FALSE;
    if (o->unk_700 >= 0xa1) return FALSE;
    u8 *v;
    if (a) {
        v = _ZN12Unk_0209865c13func_02098868Ev(p) + 0x10;
    } else {
        v = _ZN12Unk_0209865c13func_02098868Ev(p);
    }
    _ZN12Unk_0205d34013func_0205d354Ej(&o->unk_709[0], v);
    return TRUE;
}

extern "C" BOOL func_020945b4(u32 x, u32 idx) {
    void *p = func_02097520(idx);
    if (!p) return FALSE;
    _ZN12Unk_0209865c13func_020987d0Eh(p, x);
    return TRUE;
}

extern "C" BOOL func_02094574(u32 a, u32 b, u32 idx) {
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

extern "C" BOOL func_0209451c(Unk_02006d14_Vec *out, u32 idx) {
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

extern "C" void func_020944f8(Unk_02006d14_Blk *out, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    *out = o->unk_694;
}

extern "C" u16 *func_02094440() {
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

extern "C" void func_02094420(s32 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_800 = *p;
    }
}

extern "C" void func_02094400(s32 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_804 = *p;
    }
}

extern "C" void func_020943fc() {}

extern "C" void func_020943f8() {}

extern "C" void func_020943dc(u32 x) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->func_0200ecdc(x);
    }
}

