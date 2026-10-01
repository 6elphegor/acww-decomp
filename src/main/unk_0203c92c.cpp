#include "types.h"

extern "C" {
void func_02116048(void *src, void *dst, u32 n);
}

// ---- flag object at 0x021c3264
struct Unk_0203c92c_Bits0 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b23 : 2;
};
struct Unk_0203c92c_Bits1 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
};
class Unk_0203c92c {
public:
    Unk_0203c92c();
    ~Unk_0203c92c();
    void func_0203c92c();
    void func_0203c938();
    void func_0203c944();
    BOOL func_0203c950();
    BOOL func_0203c964();
    BOOL func_0203c978();
    void func_0203c98c();
    void func_0203c9d4(u32 v);
    u32 func_0203c9ec();
    void func_0203c9f4();
    void func_0203ca00();
    BOOL func_0203ca0c();
    void func_0203ca20();
    void func_0203ca2c();
    BOOL func_0203ca38();
    void func_0203ca68();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

Unk_0203c92c data_021c3264;
extern "C" void func_0203ca5c(void *src, void *dst);
extern "C" void func_0203ca4c(void *dst, void *src);
extern "C" void func_0203ca84();
extern "C" void func_0203ca90();

extern "C" {
void func_0209750c();
}

extern "C" {
Unk_0203c92c *_ZN12Unk_0209865c13func_02098668Ev();
}

extern "C" {
Unk_0203c92c *func_0203cbb8();
}

extern "C" {
s32 func_0203cba8();
}

extern "C" {
s32 func_0203cb70();
}

extern "C" {
u32 func_0203cb38();
}
extern "C" Unk_0203c92c *func_0203cbb8() { return &data_021c3264; }

extern "C" BOOL func_0203cba8() { return data_021c3264.func_0203ca38(); }

extern "C" void func_0203cb80(s32 x) {
    if (x == 1) data_021c3264.func_0203ca2c();
    else data_021c3264.func_0203ca20();
    data_021c3264.func_0203c944();
}

extern "C" BOOL func_0203cb70() { return data_021c3264.func_0203ca0c(); }

extern "C" void func_0203cb48(s32 x) {
    if (x == 1) data_021c3264.func_0203ca00();
    else data_021c3264.func_0203c9f4();
    data_021c3264.func_0203c938();
}

extern "C" u32 func_0203cb38() { return data_021c3264.func_0203c9ec(); }

extern "C" void func_0203cb1c(u32 v) {
    data_021c3264.func_0203c9d4(v);
    data_021c3264.func_0203c92c();
}

extern "C" void func_0203ca94() {
    Unk_0203c92c *r5, *r4;
    u8 l;
    func_0209750c();
    r5 = _ZN12Unk_0209865c13func_02098668Ev();
    r4 = func_0203cbb8();
    if (r4->func_0203c978()) {
        if (func_0203cba8() == 1) r5->func_0203ca2c();
        else r5->func_0203ca20();
    }
    if (r4->func_0203c964()) {
        if (func_0203cb70() == 1) r5->func_0203ca00();
        else r5->func_0203c9f4();
    }
    if (r4->func_0203c950()) {
        r5->func_0203c9d4(func_0203cb38());
    }
    func_0203ca5c(r5, &l);
    r4->func_0203c98c();
    func_0203ca4c(r4, &l);
}

extern "C" void func_0203ca90() {}

extern "C" void func_0203ca8c() {}

extern "C" void func_0203ca88() {}

extern "C" void func_0203ca84() {}

void Unk_0203c92c::func_0203ca68() {
    func_0203ca20();
    func_0203c9f4();
    func_0203c9d4(0);
}

extern "C" void func_0203ca5c(void *src, void *dst) { func_02116048(src, dst, 1); }

extern "C" void func_0203ca4c(void *dst, void *src) { func_02116048(src, dst, 1); }

BOOL Unk_0203c92c::func_0203ca38() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b0) return TRUE;
    return FALSE;
}

void Unk_0203c92c::func_0203ca2c() { unk_00 = (unk_00 & ~1) | 1; }

void Unk_0203c92c::func_0203ca20() { unk_00 &= ~1; }

BOOL Unk_0203c92c::func_0203ca0c() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b1) return TRUE;
    return FALSE;
}

void Unk_0203c92c::func_0203ca00() { unk_00 |= 2; }

void Unk_0203c92c::func_0203c9f4() { unk_00 &= ~2; }

u32 Unk_0203c92c::func_0203c9ec() { return ((Unk_0203c92c_Bits0 *)&unk_00)->b23; }

void Unk_0203c92c::func_0203c9d4(u32 v) {
    unk_00 = (unk_00 & ~0xc) | (((u8)v & 3) << 2);
}

Unk_0203c92c::Unk_0203c92c() { func_0203ca90(); }

Unk_0203c92c::~Unk_0203c92c() { func_0203ca84(); }

void Unk_0203c92c::func_0203c98c() {
    func_0203ca68();
    unk_01 &= ~1;
    unk_01 &= ~2;
    unk_01 &= ~4;
}

BOOL Unk_0203c92c::func_0203c978() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b0) return TRUE;
    return FALSE;
}

BOOL Unk_0203c92c::func_0203c964() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b1) return TRUE;
    return FALSE;
}

BOOL Unk_0203c92c::func_0203c950() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b2) return TRUE;
    return FALSE;
}

void Unk_0203c92c::func_0203c944() { unk_01 = (unk_01 & ~1) | 1; }

void Unk_0203c92c::func_0203c938() { unk_01 |= 2; }

void Unk_0203c92c::func_0203c92c() { unk_01 |= 4; }

