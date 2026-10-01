#include "types.h"

// 2-byte element (0xfff1 = none), constructed by __sinit; destructor is in another unit (0x02004b60)
class Unk_0203442c {
public:
    u16 unk_00;

    Unk_0203442c() { unk_00 = 0xfff1; }
    ~Unk_0203442c();
};

struct Unk_02034250_Id {
    u16 v;
};

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_021d735c[];
extern u8 data_021e58a8[];

void *func_ov004_0222aa74();
void *func_ov004_0222aa1c();
void *func_ov004_0222aacc(u16 *id, s32 a, s32 b);
void *func_ov004_0222ab80(u16 *id, s32 a, s32 b);
s32 func_0204b640(u16 *out, s32 a, s32 b);
BOOL func_0209750c();
u32 _ZN12Unk_0209865c13func_0209888cEv();
u32 func_02097740(void *a, u32 b);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
s32 func_020b50e8();
BOOL func_020b530c(s32 a);
void _ZN12Unk_020cbb1813func_020728d4Ev(void *p);
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *p, void *q, s32 n);
void _ZN12Unk_020cbb1813func_02072824Ejj(void *p, s32 a, s32 b);
void *_ZN12Unk_0206022c13func_02060550Ei(void *a, s32 b);
void _ZN12Unk_02060a9013func_02060808EPtj(void *a, void *b, s32 c);
void _ZN12Unk_02060a9013func_020607e0EPtj(void *a, void *b, s32 c);

BOOL func_0203411c(u32 i, u16 *v);
BOOL func_0203414c(u32 i, u16 *v);
void func_02034320(u16 *id, s32 a, s32 b, s32 c);
void func_020343b0(u16 *out, s32 a);
void *func_02034250(u16 *id, s32 a, s32 b, s32 c);
void *func_020342cc(u16 *id, s32 a, s32 b, s32 c);
void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e);
}

extern Unk_0203442c data_021c1a44;
extern Unk_0203442c data_021c1a6c[0x33];
extern Unk_0203442c data_021c1ad4[0x33];

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

struct Unk_02034320_Pkt {
    u16 a;
    u16 b;
};

struct Unk_02034048_Pkt {
    u16 unk_00;
    u16 id : 6;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
};

extern "C" void func_020343b0(u16 *out, s32 a) {
    u32 x = a & 7;
    u32 y = 0;
    if (func_0209750c()) {
        y = func_02097740(data_021d735c, _ZN12Unk_0209865c13func_0209888cEv()) & 3;
    }
    func_0204b640(out, y, x);
}

extern "C" void func_02034320(u16 *id, s32 a, s32 b, s32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        Unk_02034320_Pkt pkt;
        pkt.a = *id;
        pkt.b = (pkt.b & ~0x3f) | (func_020b50e8() & 0x3f);
        pkt.b = (pkt.b & ~0x40) | ((b & 1) << 6);
        pkt.b = (pkt.b & ~0x80) | (((u16)a & 1) << 7);
        pkt.b = (pkt.b & ~0x100) | ((c & 1) << 8);
        void *obj = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(obj);
        _ZN12Unk_020cbb1813func_020728a4EPhj(obj, &pkt, 4);
        _ZN12Unk_020cbb1813func_02072824Ejj(obj, 0x14, 4);
    }
}

extern "C" void *func_020342cc(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(data_020e416c)) {
        r = func_ov004_0222ab80(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 1, b);
        }
        return r;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void *func_020342a4(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_020342cc(&id, b, c, d);
}

extern "C" void *func_02034250(u16 *id, s32 a, s32 b, s32 c) {
    u16 t = *id;
    void *r;
    if (Unk_020341c0_IsOne(data_020e416c)) {
        r = func_ov004_0222aacc(&t, a, b);
        if (c != 0) {
            func_02034320(&t, a, 0, b);
        }
        return r;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void *func_02034228(s32 a, s32 b, s32 c, s32 d) {
    u16 id;
    func_020343b0(&id, a);
    return func_02034250(&id, b, c, d);
}

extern "C" BOOL func_020341f4(s32 a) {
    if (Unk_020341c0_IsOne(data_020e416c)) {
        func_020342cc((u16 *)func_ov004_0222aa1c(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020341c0(s32 a) {
    if (Unk_020341c0_IsOne(data_020e416c)) {
        func_02034250((u16 *)func_ov004_0222aa74(), 0, 0, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02034194(u16 *a, s32 b, s32 c, s32 d, u8 e)
{
    if (c != 0) {
        func_020342cc(a, b, d, e);
    } else {
        func_02034250(a, b, d, e);
    }
}

extern "C" void func_02034164()
{
    u32 i;
    for (i = 0; i < 0x33; i++) {
        data_021c1ad4[i].unk_00 = 0xfff1;
        data_021c1a6c[i].unk_00 = data_021c1ad4[i].unk_00;
    }
}

extern "C" BOOL func_0203414c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1a6c[i].unk_00 = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *func_02034134(u32 i)
{
    if (i < 0x33) {
        return &data_021c1a6c[i].unk_00;
    }
    return &data_021c1a44.unk_00;
}

extern "C" BOOL func_0203411c(u32 i, u16 *v)
{
    if (i < 0x33) {
        data_021c1ad4[i].unk_00 = *v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u16 *func_02034104(u32 i)
{
    if (i < 0x33) {
        return &data_021c1ad4[i].unk_00;
    }
    return &data_021c1a44.unk_00;
}

extern "C" void func_02034048(Unk_02034048_Pkt *p)
{
    u16 tmp = p->unk_00;
    u8 id = p->id;
    u32 f7 = p->f7;
    BOOL f6;
    if (p->f6 != 0) {
        f6 = TRUE;
    } else {
        f6 = FALSE;
    }
    s32 f8;
    if (p->f8 != 0) {
        f8 = 1;
    } else {
        f8 = 0;
    }
    if (p->id == func_020b50e8()) {
        func_02034194(&tmp, f7, f6, f8, 0);
    } else if (func_020b530c(id)) {
        void *r = _ZN12Unk_0206022c13func_02060550Ei(data_021e58a8, id);
        if (r != NULL) {
            if (f6) {
                _ZN12Unk_02060a9013func_02060808EPtj(r, &tmp, f7);
                func_0203414c(id, &tmp);
            } else {
                _ZN12Unk_02060a9013func_020607e0EPtj(r, &tmp, f7);
                func_0203411c(id, &tmp);
            }
        }
    } else if (f6) {
        func_0203414c(id, &tmp);
    } else {
        func_0203411c(id, &tmp);
    }
}

Unk_0203442c data_021c1a44;
Unk_0203442c data_021c1a6c[0x33];
Unk_0203442c data_021c1ad4[0x33];
