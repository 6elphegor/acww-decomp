// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df30 {
    void *unk_00;
    u8 unk_04[0x80];
    void *unk_84;
    u8 unk_88[0x5c];
    u16 unk_e4;
};

struct Unk_ov001_02224074_Obj {
    u8 pad_00[0x24];
    u32 unk_24;
    u32 unk_28;
    u8 pad_2c[0x1c];
};

struct Unk_ov001_022242e8_Obj {
    u8 pad_00[0x48];
};

struct Unk_ov001_022242e8_Obj2 {
    u8 pad_00[0x80];
};

extern "C" {
void func_ov001_02225d58(void *);
void func_ov001_02224cfc(void *, void *);
void func_ov001_02224ca0(void *);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02225db0(s32, s32);
void *func_ov001_02224d84(s32, void *, s32);

s32 func_0212a438(void *);
s32 func_02128930(void *, void *, s32);
void func_02119d78(void *);
s32 func_02119a28(void *, void *);
void func_0206d49c();
void func_021198b4(void *, void *, s32);
void func_021199e0(void *);
void func_02116190(void *, void *);
s32 func_02118be8(void *, s32);
void func_0211e130(s32, void *, s32, s32, void *, void *, s32);
void func_0211d6c0(u32);
void func_0211d6a0(u32);
void func_021197f4(void *);
void func_02118d94(void *);
void func_02118f58(void *);
void func_02119098(void *);
void func_02112428(u32);
u32 func_021123d0();
void func_02119240(void *);
s32 func_02119130(void *, void *, s32);
void func_02118c68(void *, void *, s32);
s32 func_02119020(void *, u32, u32, u32, u32, u32, void *, void *);
void *func_02118e2c(void *, void *, void *);
void func_021130d0(void *, void *, void *);

BOOL func_ov001_02223fc4(void *a, void *b, s32 n);
s32 func_ov001_02224178(void *a);
s32 func_ov001_02224188(u8 *self, s32 x, s32 y, s32 z);
s32 func_ov001_022241d0(void *self, s32 code);
BOOL func_ov001_02224170();
}

extern "C" const char data_ov001_0222a450[4];
extern "C" const char data_ov001_0222a450[4] = "dwc";
extern "C" Unk_ov001_0222df30 *data_ov001_0222df30 = 0;

extern "C" void func_ov001_022242e8() {
    u32 a[2];
    u32 b[2];
    Unk_ov001_022242e8_Obj o;
    Unk_ov001_022242e8_Obj2 o2;
    u32 r4;
    data_ov001_0222df30 = (Unk_ov001_0222df30 *)func_ov001_02225db0(0xe8, 4);
    func_02119d78(&o);
    if (func_02119a28(&o, (void *)"rom:/dwc/utility.bin") == 0) {
        func_0206d49c();
    }
    data_ov001_0222df30->unk_e4 = func_021123d0();
    r4 = *(u32 *)((u8 *)&o + 0x24);
    func_021198b4(&o, a, 8);
    func_021198b4(&o, b, 8);
    func_021199e0(&o);
    func_02119240(data_ov001_0222df30->unk_88);
    if (func_02119130(data_ov001_0222df30->unk_88, (void *)data_ov001_0222a450, 3) == 0) {
        func_0206d49c();
    }
    func_02118c68(data_ov001_0222df30->unk_88, (void *)func_ov001_022241d0, 0x602);
    if (func_02119020(data_ov001_0222df30->unk_88, r4, b[0], b[1], a[0], a[1], (void *)func_ov001_02224188, (void *)func_ov001_02224170) == 0) {
        func_0206d49c();
    }
    void *r4b = func_02118e2c(data_ov001_0222df30->unk_88, 0, 0);
    data_ov001_0222df30->unk_00 = func_ov001_02225dd8((s32)r4b, 4);
    func_02118e2c(data_ov001_0222df30->unk_88, data_ov001_0222df30->unk_00, r4b);
    data_ov001_0222df30->unk_84 = func_ov001_02224d84(0x20, data_ov001_0222df30->unk_04, 4);
    func_021130d0(&o2, (void *)"%s:/", (void *)data_ov001_0222a450);
    func_021197f4(&o2);
}

extern "C" void func_ov001_02224258() {
    func_021197f4((void *)"rom:/");
    func_02118d94(data_ov001_0222df30->unk_88);
    func_02118f58(data_ov001_0222df30->unk_88);
    func_02119098(data_ov001_0222df30->unk_88);
    func_02112428(data_ov001_0222df30->unk_e4);
    data_ov001_0222df30->unk_e4 = 0;
    func_ov001_02225d58(data_ov001_0222df30);
    data_ov001_0222df30->unk_00 = 0;
    func_ov001_02225d58(&data_ov001_0222df30);
}

extern "C" s32 func_ov001_022241d0(void *self, s32 code) {
    switch (code) {
    case 9:
        func_0211d6c0(data_ov001_0222df30->unk_e4);
        return 0;
    case 10:
        func_0211d6a0(data_ov001_0222df30->unk_e4);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}

extern "C" s32 func_ov001_02224188(u8 *self, s32 x, s32 y, s32 z) {
    func_0211e130(-1, (void *)(y + *(s32 *)(self + 0x28)), x, z, (void *)func_ov001_02224178, self, 1);
    return 6;
}

extern "C" s32 func_ov001_02224178(void *a) {
    return func_02118be8(a, 0);
}

extern "C" BOOL func_ov001_02224170() {
    return TRUE;
}

extern "C" void *func_ov001_02224074(void *name, u32 *outSize, s32 c) {
    void *p;
    Unk_ov001_02224074_Obj o;
    s32 r6;
    u32 n;
    func_ov001_02224ca0(data_ov001_0222df30->unk_84);
    func_02119d78(&o);
    if (func_02119a28(&o, name) == 0) {
        func_0206d49c();
    }
    n = o.unk_28 - o.unk_24;
    if (outSize != 0) {
        *outSize = n;
    }
    if (func_ov001_02223fc4(name, (void *)".l", 2) != 0) {
        r6 = -4;
    } else {
        r6 = c;
    }
    p = func_ov001_02225dd8(n, r6);
    func_021198b4(&o, p, n);
    func_021199e0(&o);
    if (r6 > 0) {
        return p;
    }
    u32 v = *(u32 *)p >> 8;
    if (outSize != 0) {
        *outSize = v;
    }
    void *q = func_ov001_02225dd8(v, c);
    func_02116190(p, q);
    func_ov001_02225d58(&p);
    return q;
}

extern "C" void func_ov001_02224038(void *p, ...) {
    func_ov001_02225d58(&p);
    func_ov001_02224cfc(data_ov001_0222df30->unk_84, p);
}

extern "C" BOOL func_ov001_02223fc4(void *a, void *b, s32 n) {
    s32 la = func_0212a438(a);
    s32 lb = func_0212a438(b);
    if (la < n || lb < n) {
        return FALSE;
    }
    return func_02128930((u8 *)a + (la - n), (u8 *)b + (lb - n), n) == 0;
}

