#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov136_022962b8[];
extern u8 data_ov136_022962bc[];
extern u8 data_ov136_022962c0[];
extern u8 data_ov136_022962c4[];
extern s32 data_ov136_022962c8[];
extern s32 data_ov136_022962d4[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;

BOOL func_0206ef0c();
void func_0206ecf8(u32 v);
void func_0206e8cc(void *p);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);

// ov134 library functions (object at +0x25c)
void func_ov134_02294bac(void *p);
void func_ov134_02292340(void *p, s32 y);
s32 func_ov134_0229236c(void *p);
s32 func_ov134_022923a0(void *p);
void func_ov134_02292df4(void *p);
void func_ov134_02292e40(void *p);
void func_ov134_02293024(void *p, u32 a);
void func_ov134_022948d8(void *p, void *out);
BOOL func_ov134_02292cb0(void *p);
s32 func_ov134_022932d8(void *p);
BOOL func_ov134_02292f40(void *p);
BOOL func_ov134_02292530(void *p);
BOOL func_ov134_02292170(void *p);
BOOL func_ov134_02292420(void *p);
void func_ov134_02292450(void *p);
void func_ov134_02292444(void *p);
s32 func_ov134_0229219c(void *p, u32 pad);
void func_ov134_022924b0(void *p, s32 x);
void func_ov134_022924d8(void *p, s32 x);
s32 func_ov134_02292c54(void *p, s32 a, s32 b);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Sub-object at +0x94 (vtable 0x02204614, size 0x64)
class Unk_ov136_02204614 {
public:
    Unk_ov136_02204614();
    virtual ~Unk_ov136_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_0208d534();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
    u32 unk_04[0x60 / 4];
};

// Sub-object at +0xf8 (D1 func_ov002_02203968, size 0x108)
class Unk_ov136_022046cc {
public:
    Unk_ov136_022046cc();
    ~Unk_ov136_022046cc();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u32 unk_00[0x108 / 4];
};

static inline BOOL Unk_ov136_02295c0c_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022963b0
class Unk_ov136_022963b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov136_022963b0() {}
    virtual ~Unk_ov136_022963b0();

    // in range
    void func_ov136_022953f4(u32 m);
    void func_ov136_02295404(u32 m);
    BOOL func_ov136_02295414(u32 m);
    BOOL func_ov136_0229542c(u32 pad);
    void func_ov136_022954c8();
    void func_ov136_022954f0();
    void func_ov136_02295508();
    void func_ov136_02295524(s32 a, s32 b);
    void func_ov136_02295584();
    void func_ov136_022955d4();
    s32 func_ov136_022955f0();
    s32 func_ov136_02295634();
    void func_ov136_02295678();
    void func_ov136_022956d4();
    void func_ov136_022956f4();
    void func_ov136_02295730();
    void func_ov136_02295748();
    void func_ov136_02295774();
    void func_ov136_022957a0(u32 a);
    void func_ov136_022957cc();
    void func_ov136_02295814();
    void func_ov136_02295834();
    void func_ov136_02295850();
    void func_ov136_02295868();
    void func_ov136_022958a8();
    void func_ov136_022958c8();
    void func_ov136_0229592c();
    void func_ov136_02295954();
    void func_ov136_022959d0();
    void func_ov136_022959f8();
    void func_ov136_02295a40();
    void func_ov136_02295a98();
    void func_ov136_02295b30();
    void func_ov136_02295b94();
    void func_ov136_02295bd0();
    void func_ov136_02295c0c();

    // callees in other groups
    void func_ov136_02296024();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov136_02204614 unk_94;
    /* 0x0f8 */ Unk_ov136_022046cc unk_f8;
    /* 0x200 */ u8 unk_200[0x5c];
    /* 0x25c */ u8 unk_25c[0x25c4];
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

Unk_ov136_022963b0::~Unk_ov136_022963b0() {
    func_ov134_02294bac(unk_25c);
}

void Unk_ov136_022963b0::func_ov136_022953f4(u32 m) { unk_2820 = unk_2820 & ~m; }

void Unk_ov136_022963b0::func_ov136_02295404(u32 m) { unk_2820 = unk_2820 | m; }

BOOL Unk_ov136_022963b0::func_ov136_02295414(u32 m) {
    if (unk_2820 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov136_022963b0::func_ov136_0229542c(u32 pad) {
    u32 old = unk_2823;
    if (func_ov002_0220126c(pad)) {
        unk_2823 = data_ov136_022962bc[unk_2823];
    } else if (func_ov002_0220125c(pad)) {
        unk_2823 = data_ov136_022962b8[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_2823 = data_ov136_022962c4[unk_2823];
    } else if (func_ov002_0220127c(pad)) {
        unk_2823 = data_ov136_022962c0[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov136_022963b0::func_ov136_022954c8() {
    unk_94.func_ov002_02202af0();
    unk_2822 = unk_8d;
    func_ov002_02200a58(0xc);
}

void Unk_ov136_022963b0::func_ov136_022954f0() {
    unk_94.func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov136_022963b0::func_ov136_02295508() {
    unk_94.func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov136_022963b0::func_ov136_02295524(s32 a, s32 b) {
    if (func_ov136_02295414(4)) {
        unk_94.func_ov002_022029e8(a, b, 2, 1);
    } else {
        unk_94.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_2822 = unk_8d;
    func_ov002_02200a58(0xa);
    func_ov136_022953f4(4);
}

void Unk_ov136_022963b0::func_ov136_02295584() {
    if (func_ov136_02295414(2) != 0 || unk_2823 != 2) {
        unk_94.func_ov002_02202c40();
    } else {
        unk_94.func_ov002_02202ca0();
    }
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    func_ov136_02295524(b, c);
}

void Unk_ov136_022963b0::func_ov136_022955d4() {
    unk_94.func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

s32 Unk_ov136_022963b0::func_ov136_022955f0() {
    if (func_ov136_02295414(2)) {
        return func_ov134_0229236c(unk_25c);
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.func_ov002_022030b8(6);
    }
    return data_ov136_022962d4[c];
}

s32 Unk_ov136_022963b0::func_ov136_02295634() {
    if (func_ov136_02295414(2)) {
        return func_ov134_022923a0(unk_25c);
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.func_ov002_022030f4(6);
    }
    return data_ov136_022962c8[c];
}

void Unk_ov136_022963b0::func_ov136_02295678() {
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    unk_94.func_ov002_02202a40(b, c);
    if (func_ov136_02295414(2) != 0 || unk_2823 != 2) {
        unk_94.func_ov002_02202d00(1);
    } else {
        unk_94.func_ov002_02202d00(7);
    }
    func_ov136_02295508();
}

void Unk_ov136_022963b0::func_ov136_022956d4() {
    if (func_0206ef0c()) {
        func_ov136_02295730();
    } else {
        func_ov136_022956f4();
    }
}

void Unk_ov136_022963b0::func_ov136_022956f4() {
    s32 t = func_ov134_0229236c(unk_25c);
    func_ov134_02292340(unk_25c, t);
    func_ov136_02295404(2);
    func_ov136_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(7);
}

void Unk_ov136_022963b0::func_ov136_02295730() {
    func_ov136_022955d4();
    func_ov002_02200a58(3);
}

void Unk_ov136_022963b0::func_ov136_02295748() {
    func_ov136_022955d4();
    func_ov136_022953f4(2);
    func_ov134_02292df4(unk_25c);
    func_ov002_02200a58(0xf);
}

void Unk_ov136_022963b0::func_ov136_02295774() {
    func_ov136_022955d4();
    func_ov136_022953f4(2);
    func_ov134_02292e40(unk_25c);
    func_ov002_02200a58(0xf);
}

void Unk_ov136_022963b0::func_ov136_022957a0(u32 a) {
    func_ov136_022955d4();
    func_ov134_02293024(unk_25c, a);
    func_ov002_02200a58(0xe);
}

void Unk_ov136_022963b0::func_ov136_022957cc() {
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    func_ov134_022948d8(unk_25c, v);
    func_0206e8cc(v);
    func_0206ecf8(1);
}

void Unk_ov136_022963b0::func_ov136_02295814() {
    if (func_0206ef0c()) {
        func_ov136_02295850();
    } else {
        func_ov136_02295834();
    }
}

void Unk_ov136_022963b0::func_ov136_02295834() {
    func_ov136_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(6);
}

void Unk_ov136_022963b0::func_ov136_02295850() {
    func_ov136_022955d4();
    func_ov002_02200a58(0);
}

void Unk_ov136_022963b0::func_ov136_02295868() {
    if (func_ov134_02292cb0(unk_25c)) {
        s32 r = func_ov134_022932d8(unk_25c);
        if (r == 6) {
            unk_2823 = 2;
        } else {
            unk_2823 = r - 3;
        }
        func_ov136_02295814();
    }
}

void Unk_ov136_022963b0::func_ov136_022958a8() {
    if (func_ov134_02292f40(unk_25c)) {
        func_ov136_022956d4();
    }
}

void Unk_ov136_022963b0::func_ov136_022958c8() {
    if (unk_f8.func_ov002_0220308c()) {
        if (unk_94.func_0208d534()) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            unk_94.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov136_022955d4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov136_022963b0::func_ov136_0229592c() {
    if (unk_94.func_0208d4fc()) {
        func_ov136_02295508();
        func_ov002_02200a58(unk_2822);
    }
}

void Unk_ov136_022963b0::func_ov136_02295954() {
    if (unk_94.func_0208d4fc()) {
        if (func_ov136_02295414(2)) {
            if (func_ov134_02292530(unk_25c)) {
                func_ov002_02200a58(8);
            } else if (func_ov134_02292170(unk_25c)) {
                func_ov136_02295774();
            } else {
                func_ov002_02200a58(7);
                func_ov136_022954c8();
            }
        } else {
            u32 v = unk_2823;
            if (v == 2) {
                func_ov136_022957cc();
            } else {
                func_ov136_022957a0(v + 3);
            }
        }
    }
}

void Unk_ov136_022963b0::func_ov136_022959d0() {
    if (!unk_94.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2822);
        func_ov136_02296024();
    }
}

void Unk_ov136_022963b0::func_ov136_022959f8() {
    if (func_ov134_02292420(unk_25c)) {
        func_ov002_02200a58(7);
        func_ov136_022954c8();
    }
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    unk_94.func_ov002_02202a40(b, c);
}

void Unk_ov136_022963b0::func_ov136_02295a40() {
    if (data_021f47d8[0] & 1) {
        func_ov134_02292450(unk_25c);
        s32 b = func_ov136_02295634();
        s32 c = func_ov136_022955f0();
        unk_94.func_ov002_02202a40(b, c);
    } else {
        func_ov134_02292444(unk_25c);
        func_ov002_02200a58(9);
    }
}

void Unk_ov136_022963b0::func_ov136_02295a98() {
    if (func_ov002_022009d4()) {
        func_ov136_02295730();
        return;
    }
    s32 r = func_ov134_0229219c(unk_25c, func_ov002_022009c8());
    switch (r) {
    case 2:
        func_ov136_02295404(4);
        goto rest;
    case 3: {
        s32 b = func_ov136_02295634();
        s32 c = func_ov136_022955f0();
        unk_94.func_ov002_02202a40(b, c);
        return;
    }
    default:
    rest:
        func_ov136_02295584();
        return;
    case 0: {
        u32 v = data_021f47d8[1];
        if (v & 1) {
            func_ov136_022954f0();
        } else if (v & 2) {
            func_ov136_02295748();
        }
        return;
    }
    }
}

void Unk_ov136_022963b0::func_ov136_02295b30() {
    if (func_ov002_022009d4()) {
        func_ov136_02295850();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov136_0229542c(x)) {
        func_ov136_02295584();
        return;
    }
    u32 v = data_021f47d8[1];
    if (v & 1) {
        func_ov136_022954f0();
    } else if (v & 8) {
        func_ov136_022955d4();
        func_ov136_022957cc();
    }
}

void Unk_ov136_022963b0::func_ov136_02295b94() {
    if (data_021f4770) {
        func_ov134_022924b0(unk_25c, data_021ef5ec);
    } else {
        func_ov134_02292444(unk_25c);
        func_ov002_02200a58(3);
    }
}

void Unk_ov136_022963b0::func_ov136_02295bd0() {
    if (data_021f4770) {
        func_ov134_022924d8(unk_25c, data_021ef5ec);
    } else {
        func_ov134_02292444(unk_25c);
        func_ov002_02200a58(3);
    }
}

void Unk_ov136_022963b0::func_ov136_02295c0c() {
    if (func_ov002_02200a14(1)) {
        func_ov136_022956f4();
        return;
    }
    if (Unk_ov136_02295c0c_Both()) {
        s32 r = func_ov134_02292c54(unk_25c, data_021ef5f0, data_021ef5ec);
        switch (r) {
        case 0:
            func_ov136_02295774();
            break;
        case 1:
            func_ov136_02295748();
            break;
        case 3:
            func_ov002_02200a58(4);
            break;
        case 2:
            func_ov002_02200a58(5);
            break;
        }
    }
}
