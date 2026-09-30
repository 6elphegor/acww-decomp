#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov135_0229639c[];
extern u8 data_ov135_022963a4[];
extern u8 data_ov135_022963ac[];
extern u8 data_ov135_022963b4[];
extern s32 data_ov135_022963bc[];
extern s32 data_ov135_022963d8[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021ef5ec;
extern u8 data_021d7350[];

BOOL func_0206ef0c();
void func_0206e814();
void func_0206ecf8(u32 v);
void func_0206e8cc(void *p);
void func_0206e82c();
void func_0206e820();
void func_02116048(void *dst, void *src, u32 n);
s32 func_0209cb9c(void *p, void *q);
u16 func_0209cb74(void *p, void *q);
void func_0209cfe4();
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
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

// Sub-object at +0x98 (vtable 0x02204614, size 0x64)
class Unk_ov135_02204614 {
public:
    Unk_ov135_02204614();
    virtual ~Unk_ov135_02204614();
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

// Sub-object at +0xfc (vtable 0x022046cc, size 0x108)
class Unk_ov135_022046cc {
public:
    Unk_ov135_022046cc();
    ~Unk_ov135_022046cc();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u32 unk_00[0x108 / 4];
};

// ov134 sub-object at +0x260 (class Unk_ov134_02291f60 in ov134_000; opaque here)
class Unk_ov135_ov134_02291f60 {
public:
    void func_ov134_02294bac();
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    void func_ov134_02292df4();
    void func_ov134_02292e40();
    void func_ov134_02293024(u32 a);
    void func_ov134_022948d8(void *out);
    BOOL func_ov134_022948b8();
    BOOL func_ov134_02292cb0();
    s32 func_ov134_022932d8();
    BOOL func_ov134_02292f40();
    BOOL func_ov134_02292530();
    BOOL func_ov134_02292170();
    BOOL func_ov134_02292420();
    void func_ov134_02292450();
    void func_ov134_02292444();
    s32 func_ov134_0229219c(u32 pad);
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    u8 unk_00[0x25c4];
};

// Vtable 0x022964b0
class Unk_ov135_022964b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov135_022964b0() {}
    virtual ~Unk_ov135_022964b0();

    // in range
    void func_ov135_022953f4(u32 m);
    void func_ov135_02295404(u32 m);
    BOOL func_ov135_02295414(u32 m);
    BOOL func_ov135_02295428(u32 pad);
    void func_ov135_022954d0();
    void func_ov135_022954f4();
    void func_ov135_0229550c();
    void func_ov135_02295528(s32 a, s32 b);
    void func_ov135_02295588();
    void func_ov135_022955d8();
    s32 func_ov135_022955f4();
    s32 func_ov135_02295648();
    void func_ov135_0229569c();
    void func_ov135_022956f8();
    void func_ov135_02295718();
    void func_ov135_02295754();
    void func_ov135_0229576c();
    void func_ov135_02295798();
    void func_ov135_022957c4(u32 a);
    void func_ov135_022957f4();
    void func_ov135_0229581c();
    void func_ov135_022958bc();
    void func_ov135_022958dc();
    void func_ov135_022958f8();
    void func_ov135_02295910();
    void func_ov135_0229594c();
    void func_ov135_0229596c();
    void func_ov135_022959d0();
    void func_ov135_022959f4();
    void func_ov135_02295a78();
    void func_ov135_02295aa0();
    void func_ov135_02295ae8();
    void func_ov135_02295b40();
    void func_ov135_02295bd8();
    void func_ov135_02295c54();
    void func_ov135_02295c90();

    // callees in other groups
    void func_ov135_02296108();

    /* 0x091 */ u8 unk_91;
    /* 0x092 */ u16 unk_92;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 unk_95;
    /* 0x096 */ u8 unk_96[2];
    /* 0x098 */ Unk_ov135_02204614 unk_98;
    /* 0x0fc */ Unk_ov135_022046cc unk_fc;
    /* 0x204 */ u8 unk_204[0x5c];
    /* 0x260 */ Unk_ov135_ov134_02291f60 unk_260;
};

Unk_ov135_022964b0::~Unk_ov135_022964b0() {
    unk_260.func_ov134_02294bac();
}

void Unk_ov135_022964b0::func_ov135_022953f4(u32 m) { unk_92 = unk_92 & ~m; }

void Unk_ov135_022964b0::func_ov135_02295404(u32 m) { unk_92 = unk_92 | m; }

BOOL Unk_ov135_022964b0::func_ov135_02295414(u32 m) {
    if (unk_92 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov135_022964b0::func_ov135_02295428(u32 pad) {
    u32 old = unk_95;
    if (func_ov002_0220126c(pad)) {
        unk_95 = data_ov135_0229639c[unk_95];
    } else if (func_ov002_0220125c(pad)) {
        unk_95 = data_ov135_022963a4[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_95 = data_ov135_022963b4[unk_95];
    } else if (func_ov002_0220127c(pad)) {
        unk_95 = data_ov135_022963ac[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov135_022964b0::func_ov135_022954d0() {
    unk_98.func_ov002_02202af0();
    unk_94 = unk_8d;
    func_ov002_02200a58(0xc);
}

void Unk_ov135_022964b0::func_ov135_022954f4() {
    unk_98.func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov135_022964b0::func_ov135_0229550c() {
    unk_98.func_ov002_02202a78();
    unk_98.vfunc_0c();
}

void Unk_ov135_022964b0::func_ov135_02295528(s32 a, s32 b) {
    if (func_ov135_02295414(4)) {
        unk_98.func_ov002_022029e8(a, b, 2, 1);
    } else {
        unk_98.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_94 = unk_8d;
    func_ov002_02200a58(0xa);
    func_ov135_022953f4(4);
}

void Unk_ov135_022964b0::func_ov135_02295588() {
    u32 k;
    if (func_ov135_02295414(2) != 0 || ((k = unk_95) != 5 && k != 6)) {
        unk_98.func_ov002_02202c40();
    } else {
        unk_98.func_ov002_02202ca0();
    }
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    func_ov135_02295528(b, c);
}

void Unk_ov135_022964b0::func_ov135_022955d8() {
    unk_98.func_ov002_02202d00(0);
    unk_98.vfunc_0c();
}

s32 Unk_ov135_022964b0::func_ov135_022955f4() {
    if (func_ov135_02295414(2)) {
        return unk_260.func_ov134_0229236c();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.func_ov002_022030b8(6);
    case 6:
        return unk_fc.func_ov002_022030b8(7);
    default:
        return data_ov135_022963d8[unk_95];
    }
}

s32 Unk_ov135_022964b0::func_ov135_02295648() {
    if (func_ov135_02295414(2)) {
        return unk_260.func_ov134_022923a0();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.func_ov002_022030f4(6);
    case 6:
        return unk_fc.func_ov002_022030f4(7);
    default:
        return data_ov135_022963bc[unk_95];
    }
}

void Unk_ov135_022964b0::func_ov135_0229569c() {
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    unk_98.func_ov002_02202a40(b, c);
    u32 v;
    if (func_ov135_02295414(2) != 0 || ((v = unk_95) != 5 && v != 6)) {
        unk_98.func_ov002_02202d00(1);
    } else {
        unk_98.func_ov002_02202d00(7);
    }
    func_ov135_0229550c();
}

void Unk_ov135_022964b0::func_ov135_022956f8() {
    if (func_0206ef0c()) {
        func_ov135_02295754();
    } else {
        func_ov135_02295718();
    }
}

void Unk_ov135_022964b0::func_ov135_02295718() {
    s32 t = unk_260.func_ov134_0229236c();
    unk_260.func_ov134_02292340(t);
    func_ov135_02295404(2);
    func_ov135_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(7);
}

void Unk_ov135_022964b0::func_ov135_02295754() {
    func_ov135_022955d8();
    func_ov002_02200a58(3);
}

void Unk_ov135_022964b0::func_ov135_0229576c() {
    func_ov135_022955d8();
    func_ov135_022953f4(2);
    unk_260.func_ov134_02292df4();
    func_ov002_02200a58(0xf);
}

void Unk_ov135_022964b0::func_ov135_02295798() {
    func_ov135_022955d8();
    func_ov135_022953f4(2);
    unk_260.func_ov134_02292e40();
    func_ov002_02200a58(0xf);
}

void Unk_ov135_022964b0::func_ov135_022957c4(u32 a) {
    func_ov135_022955d8();
    unk_260.func_ov134_02293024(a);
    func_ov002_02200a58(0xe);
    func_0206e814();
}

void Unk_ov135_022964b0::func_ov135_022957f4() {
    unk_fc.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    func_0206ecf8(0);
}

void Unk_ov135_022964b0::func_ov135_0229581c() {
    unk_fc.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    func_0206ecf8(1);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    unk_260.func_ov134_022948d8(v);
    func_0206e8cc(v);
    u8 *g = data_021d7350;
    if (unk_260.func_ov134_022948b8()) {
        func_0206e82c();
    } else {
        func_0206e820();
    }
    u32 a[2];
    func_02116048(v, a, 8);
    s32 r4 = func_0209cb9c(g + 0x15fb4, a);
    u32 b[2];
    func_02116048(v, b, 8);
    u16 r = func_0209cb74(g + 0x15fb4, b);
    *(s32 *)(g + 0x15fb4) = r4;
    *(u16 *)(g + 0x15fb8) = r;
    func_0209cfe4();
}

void Unk_ov135_022964b0::func_ov135_022958bc() {
    if (func_0206ef0c()) {
        func_ov135_022958f8();
    } else {
        func_ov135_022958dc();
    }
}

void Unk_ov135_022964b0::func_ov135_022958dc() {
    func_ov135_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(6);
}

void Unk_ov135_022964b0::func_ov135_022958f8() {
    func_ov135_022955d8();
    func_ov002_02200a58(0);
}

void Unk_ov135_022964b0::func_ov135_02295910() {
    if (unk_260.func_ov134_02292cb0()) {
        s32 r = unk_260.func_ov134_022932d8();
        if (r == 6) {
            unk_95 = 5;
        } else {
            unk_95 = r;
        }
        func_ov135_022958bc();
    }
}

void Unk_ov135_022964b0::func_ov135_0229594c() {
    if (unk_260.func_ov134_02292f40()) {
        func_ov135_022956f8();
    }
}

void Unk_ov135_022964b0::func_ov135_0229596c() {
    if (unk_fc.func_ov002_0220308c()) {
        if (unk_98.func_0208d534()) {
            s32 a = unk_fc.func_ov002_0220306c();
            s32 b = unk_fc.func_ov002_022030f4(-1);
            s32 c = unk_fc.func_ov002_022030b8(-1);
            unk_98.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov135_022955d8();
        func_ov002_02200a60(1);
    }
}

void Unk_ov135_022964b0::func_ov135_022959d0() {
    if (unk_98.func_0208d4fc()) {
        func_ov135_0229550c();
        func_ov002_02200a58(unk_94);
    }
}

void Unk_ov135_022964b0::func_ov135_022959f4() {
    if (unk_98.func_0208d4fc()) {
        if (func_ov135_02295414(2)) {
            if (unk_260.func_ov134_02292530()) {
                func_ov002_02200a58(8);
            } else if (unk_260.func_ov134_02292170()) {
                func_ov135_02295798();
            } else {
                func_ov002_02200a58(7);
                func_ov135_022954d0();
            }
        } else {
            u32 v = unk_95;
            if (v == 5) {
                func_ov135_0229581c();
            } else if (v == 6) {
                func_ov135_022957f4();
            } else {
                func_ov135_022957c4(v);
            }
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295a78() {
    if (!unk_98.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_94);
        func_ov135_02296108();
    }
}

void Unk_ov135_022964b0::func_ov135_02295aa0() {
    if (unk_260.func_ov134_02292420()) {
        func_ov002_02200a58(7);
        func_ov135_022954d0();
    }
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    unk_98.func_ov002_02202a40(b, c);
}

void Unk_ov135_022964b0::func_ov135_02295ae8() {
    if (data_021f47d8[0] & 1) {
        unk_260.func_ov134_02292450();
        s32 b = func_ov135_02295648();
        s32 c = func_ov135_022955f4();
        unk_98.func_ov002_02202a40(b, c);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(9);
    }
}

void Unk_ov135_022964b0::func_ov135_02295b40() {
    if (func_ov002_022009d4()) {
        func_ov135_02295754();
        return;
    }
    s32 r = unk_260.func_ov134_0229219c(func_ov002_022009c8());
    switch (r) {
    case 0:
        goto zero;
    case 2:
        func_ov135_02295404(4);
        break;
    case 3: {
        s32 b = func_ov135_02295648();
        s32 c = func_ov135_022955f4();
        unk_98.func_ov002_02202a40(b, c);
        return;
    }
    default:
        break;
    }
    func_ov135_02295588();
    return;
zero: {
        u32 v = data_021f47d8[1];
        if (v & 1) {
            func_ov135_022954f4();
        } else if (v & 2) {
            func_ov135_0229576c();
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295bd8() {
    if (func_ov002_022009d4()) {
        func_ov135_022958f8();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov135_02295428(x)) {
        func_ov135_02295588();
        return;
    }
    u32 v = data_021f47d8[1];
    if (v & 1) {
        func_ov135_022954f4();
    } else if (v & 8) {
        func_ov135_022955d8();
        func_ov135_0229581c();
    } else if (v & 2) {
        func_ov135_022955d8();
        func_ov135_022957f4();
    }
}

void Unk_ov135_022964b0::func_ov135_02295c54() {
    if (data_021f4770) {
        unk_260.func_ov134_022924b0(data_021ef5ec);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}

void Unk_ov135_022964b0::func_ov135_02295c90() {
    if (data_021f4770) {
        unk_260.func_ov134_022924d8(data_021ef5ec);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}
