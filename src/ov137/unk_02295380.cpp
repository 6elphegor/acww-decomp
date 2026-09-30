#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov137_022961f8[];
extern u8 data_ov137_022961fc[];
extern u8 data_ov137_02296200[];
extern u8 data_ov137_02296204[];
extern s32 data_ov137_02296208[];
extern s32 data_ov137_02296214[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;

BOOL func_0206ef0c();
void *func_0209750c();
void func_020982f4(void *p, u32 a, u32 b);
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
    BOOL func_ov002_02200a14(u32 v);
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
class Unk_ov137_02204614 {
public:
    Unk_ov137_02204614();
    virtual ~Unk_ov137_02204614();
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

// Sub-object at +0xf8 (vtable 0x022046cc, size 0x108)
class Unk_ov137_022046cc {
public:
    Unk_ov137_022046cc();
    ~Unk_ov137_022046cc();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u32 unk_00[0x108 / 4];
};

// ov134 sub-object at +0x25c (class Unk_ov134_02291f60 in ov134_000)
class Unk_ov137_ov134_02291f60 {
public:
    void func_ov134_02294bac();
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    void func_ov134_02292df4();
    void func_ov134_02292e40();
    void func_ov134_02293024(u32 a);
    void func_ov134_022948d8(void *out);
    BOOL func_ov134_02292cb0();
    s32 func_ov134_022932d8();
    BOOL func_ov134_02292f40();
    BOOL func_ov134_02292530();
    BOOL func_ov134_02292170();
    BOOL func_ov134_02292420();
    void func_ov134_02292450();
    void func_ov134_02292444();
    s32 func_ov134_0229219c(u32 pad);
    s32 func_ov134_02292c54(u32 a, u32 b);
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    u8 unk_00[0x25c4];
};

// Vtable 0x022962e0
class Unk_ov137_022962e0 : public Unk_ov002_022044e4 {
public:
    Unk_ov137_022962e0() {}
    virtual ~Unk_ov137_022962e0();

    void func_ov137_022953f4(u32 m);
    void func_ov137_02295404(u32 m);
    BOOL func_ov137_02295414(u32 m);
    BOOL func_ov137_0229542c(u32 a);
    void func_ov137_022954c8();
    void func_ov137_022954f0();
    void func_ov137_02295508();
    void func_ov137_02295524(s32 a, s32 b);
    void func_ov137_02295584();
    void func_ov137_022955d4();
    s32 func_ov137_022955f0();
    s32 func_ov137_02295634();
    void func_ov137_02295678();
    void func_ov137_022956d4();
    void func_ov137_022956f4();
    void func_ov137_02295730();
    void func_ov137_02295748();
    void func_ov137_02295774();
    void func_ov137_022957a0(u32 a);
    void func_ov137_022957cc();
    void func_ov137_02295818();
    void func_ov137_02295838();
    void func_ov137_02295854();
    void func_ov137_0229586c();
    void func_ov137_022958ac();
    void func_ov137_022958cc();
    void func_ov137_02295930();
    void func_ov137_02295958();
    void func_ov137_022959c0();
    void func_ov137_022959e8();
    void func_ov137_02295a30();
    void func_ov137_02295a88();
    void func_ov137_02295b20();
    void func_ov137_02295b84();
    void func_ov137_02295bc0();
    void func_ov137_02295bfc();

    // callee in another group
    void func_ov137_02295f80();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov137_02204614 unk_94;
    /* 0x0f8 */ Unk_ov137_022046cc unk_f8;
    /* 0x200 */ u8 unk_200[0x5c];
    /* 0x25c */ Unk_ov137_ov134_02291f60 unk_25c;
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

static inline BOOL Unk_ov137_02295bfc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_ov137_022962e0::~Unk_ov137_022962e0() {
    unk_25c.func_ov134_02294bac();
}

void Unk_ov137_022962e0::func_ov137_022953f4(u32 m) { unk_2820 = unk_2820 & ~m; }

void Unk_ov137_022962e0::func_ov137_02295404(u32 m) { unk_2820 = unk_2820 | m; }

BOOL Unk_ov137_022962e0::func_ov137_02295414(u32 m) {
    if (unk_2820 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov137_022962e0::func_ov137_0229542c(u32 a) {
    u8 old = unk_2823;
    if (func_ov002_0220126c(a)) {
        unk_2823 = data_ov137_022961fc[unk_2823];
    } else if (func_ov002_0220125c(a)) {
        unk_2823 = data_ov137_022961f8[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    if (func_ov002_0220128c(a)) {
        unk_2823 = data_ov137_02296204[unk_2823];
    } else if (func_ov002_0220127c(a)) {
        unk_2823 = data_ov137_02296200[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov137_022962e0::func_ov137_022954c8() {
    unk_94.func_ov002_02202af0();
    unk_2822 = unk_8d;
    func_ov002_02200a58(10);
}

void Unk_ov137_022962e0::func_ov137_022954f0() {
    unk_94.func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov137_022962e0::func_ov137_02295508() {
    unk_94.func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov137_022962e0::func_ov137_02295524(s32 a, s32 b) {
    if (func_ov137_02295414(4)) {
        unk_94.func_ov002_022029e8(a, b, 2, 1);
    } else {
        unk_94.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_2822 = unk_8d;
    func_ov002_02200a58(8);
    func_ov137_022953f4(4);
}

void Unk_ov137_022962e0::func_ov137_02295584() {
    if (func_ov137_02295414(2) || unk_2823 != 2) {
        unk_94.func_ov002_02202c40();
    } else {
        unk_94.func_ov002_02202ca0();
    }
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    func_ov137_02295524(a, b);
}

void Unk_ov137_022962e0::func_ov137_022955d4() {
    unk_94.func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

s32 Unk_ov137_022962e0::func_ov137_022955f0() {
    if (func_ov137_02295414(2)) {
        return unk_25c.func_ov134_0229236c();
    }
    if (unk_2823 == 2) {
        return unk_f8.func_ov002_022030b8(6);
    }
    return data_ov137_02296214[unk_2823];
}

s32 Unk_ov137_022962e0::func_ov137_02295634() {
    if (func_ov137_02295414(2)) {
        return unk_25c.func_ov134_022923a0();
    }
    if (unk_2823 == 2) {
        return unk_f8.func_ov002_022030f4(6);
    }
    return data_ov137_02296208[unk_2823];
}

void Unk_ov137_022962e0::func_ov137_02295678() {
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    unk_94.func_ov002_02202a40(a, b);
    if (func_ov137_02295414(2) || unk_2823 != 2) {
        unk_94.func_ov002_02202d00(1);
    } else {
        unk_94.func_ov002_02202d00(7);
    }
    func_ov137_02295508();
}

void Unk_ov137_022962e0::func_ov137_022956d4() {
    if (func_0206ef0c()) {
        func_ov137_02295730();
    } else {
        func_ov137_022956f4();
    }
}

void Unk_ov137_022962e0::func_ov137_022956f4() {
    s32 t = unk_25c.func_ov134_0229236c();
    unk_25c.func_ov134_02292340(t);
    func_ov137_02295404(2);
    func_ov137_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void Unk_ov137_022962e0::func_ov137_02295730() {
    func_ov137_022955d4();
    func_ov002_02200a58(1);
}

void Unk_ov137_022962e0::func_ov137_02295748() {
    func_ov137_022955d4();
    func_ov137_022953f4(2);
    unk_25c.func_ov134_02292df4();
    func_ov002_02200a58(0xd);
}

void Unk_ov137_022962e0::func_ov137_02295774() {
    func_ov137_022955d4();
    func_ov137_022953f4(2);
    unk_25c.func_ov134_02292e40();
    func_ov002_02200a58(0xd);
}

void Unk_ov137_022962e0::func_ov137_022957a0(u32 a) {
    func_ov137_022955d4();
    unk_25c.func_ov134_02293024(a);
    func_ov002_02200a58(0xc);
}

void Unk_ov137_022962e0::func_ov137_022957cc() {
    u32 w[2];
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    void *obj = func_0209750c();
    w[0] = 0;
    w[1] = 0;
    unk_25c.func_ov134_022948d8(w);
    func_020982f4(obj, ((u8 *)w)[4], ((u8 *)w)[3]);
}

void Unk_ov137_022962e0::func_ov137_02295818() {
    if (func_0206ef0c()) {
        func_ov137_02295854();
    } else {
        func_ov137_02295838();
    }
}

void Unk_ov137_022962e0::func_ov137_02295838() {
    func_ov137_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov137_022962e0::func_ov137_02295854() {
    func_ov137_022955d4();
    func_ov002_02200a58(0);
}

void Unk_ov137_022962e0::func_ov137_0229586c() {
    if (unk_25c.func_ov134_02292cb0()) {
        s32 r = unk_25c.func_ov134_022932d8();
        if (r == 6) {
            unk_2823 = 2;
        } else {
            unk_2823 = r - 1;
        }
        func_ov137_02295818();
    }
}

void Unk_ov137_022962e0::func_ov137_022958ac() {
    if (unk_25c.func_ov134_02292f40()) {
        func_ov137_022956d4();
    }
}

void Unk_ov137_022962e0::func_ov137_022958cc() {
    if (unk_f8.func_ov002_0220308c()) {
        if (unk_94.func_0208d534()) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            unk_94.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov137_022955d4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov137_022962e0::func_ov137_02295930() {
    if (unk_94.func_0208d4fc()) {
        func_ov137_02295508();
        func_ov002_02200a58(unk_2822);
    }
}

void Unk_ov137_022962e0::func_ov137_02295958() {
    if (unk_94.func_0208d4fc()) {
        if (func_ov137_02295414(2)) {
            if (unk_25c.func_ov134_02292530()) {
                func_ov002_02200a58(6);
            } else {
                unk_25c.func_ov134_02292170();
                func_ov137_02295774();
            }
        } else {
            u32 s = unk_2823;
            if (s == 2) {
                func_ov137_022957cc();
            } else {
                func_ov137_022957a0(s + 1);
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_022959c0() {
    if (!unk_94.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2822);
        func_ov137_02295f80();
    }
}

void Unk_ov137_022962e0::func_ov137_022959e8() {
    if (unk_25c.func_ov134_02292420()) {
        func_ov002_02200a58(5);
        func_ov137_022954c8();
    }
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    unk_94.func_ov002_02202a40(a, b);
}

void Unk_ov137_022962e0::func_ov137_02295a30() {
    if (data_021f47d8[0] & 1) {
        unk_25c.func_ov134_02292450();
        s32 a = func_ov137_02295634();
        s32 b = func_ov137_022955f0();
        unk_94.func_ov002_02202a40(a, b);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(7);
    }
}

void Unk_ov137_022962e0::func_ov137_02295a88() {
    if (func_ov002_022009d4()) {
        func_ov137_02295730();
    } else {
        s32 r = unk_25c.func_ov134_0229219c(func_ov002_022009c8());
        switch (r) {
        case 2:
            func_ov137_02295404(4);
            goto dflt;
        case 3: {
            s32 a = func_ov137_02295634();
            s32 b = func_ov137_022955f0();
            unk_94.func_ov002_02202a40(a, b);
            break;
        }
        default:
        dflt:
            func_ov137_02295584();
            break;
        case 0: {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                func_ov137_022954f0();
            } else if (t & 2) {
                func_ov137_02295748();
            }
            break;
        }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295b20() {
    if (func_ov002_022009d4()) {
        func_ov137_02295854();
    } else {
        s32 r = func_ov002_022009c8();
        if (func_ov137_0229542c(r)) {
            func_ov137_02295584();
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                func_ov137_022954f0();
            } else if (t & 8) {
                func_ov137_022955d4();
                func_ov137_022957cc();
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295b84() {
    if (data_021f4770 != 0) {
        unk_25c.func_ov134_022924b0(data_021ef5ec);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov137_022962e0::func_ov137_02295bc0() {
    if (data_021f4770 != 0) {
        unk_25c.func_ov134_022924d8(data_021ef5ec);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov137_022962e0::func_ov137_02295bfc() {
    if (func_ov002_02200a14(1)) {
        func_ov137_022956f4();
        return;
    }
    if (Unk_ov137_02295bfc_Both()) {
        switch (unk_25c.func_ov134_02292c54(data_021ef5f0, data_021ef5ec)) {
        case 0:
            func_ov137_02295774();
            break;
        case 1:
            func_ov137_02295748();
            break;
        case 3:
            func_ov002_02200a58(2);
            break;
        case 2:
            func_ov002_02200a58(3);
            break;
        }
    }
}
