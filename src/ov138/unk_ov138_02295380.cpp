#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov138_02296284[];
extern u8 data_ov138_0229628c[];
extern u8 data_ov138_02296294[];
extern u8 data_ov138_0229629c[];
extern s32 data_ov138_022962a4[];
extern s32 data_ov138_022962b8[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
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
    BOOL func_ov002_02200a14(s32 a);

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
class Unk_ov138_02204614 {
public:
    Unk_ov138_02204614();
    virtual ~Unk_ov138_02204614();
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
class Unk_ov138_022046cc {
public:
    Unk_ov138_022046cc();
    ~Unk_ov138_022046cc();
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u32 unk_00[0x108 / 4];
};

// ov134 sub-object at +0x260 (class Unk_ov134_02291f60 in ov134_000; opaque here)
class Unk_ov138_ov134_02291f60 {
public:
    void func_ov134_02294bac();
    s32 func_ov134_02292c54(u32 a, u32 b);
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

// Vtable 0x02296380
class Unk_ov138_02296380 : public Unk_ov002_022044e4 {
public:
    Unk_ov138_02296380() {}
    virtual ~Unk_ov138_02296380();

    // in range
    void func_ov138_022953f4(u32 m);
    void func_ov138_02295404(u32 m);
    BOOL func_ov138_02295414(u32 m);
    BOOL func_ov138_02295428(u32 pad);
    void func_ov138_022954d0();
    void func_ov138_022954f4();
    void func_ov138_0229550c();
    void func_ov138_02295528(s32 a, s32 b);
    void func_ov138_02295588();
    void func_ov138_022955d8();
    s32 func_ov138_022955f4();
    s32 func_ov138_02295648();
    void func_ov138_0229569c();
    void func_ov138_022956f8();
    void func_ov138_02295718();
    void func_ov138_02295754();
    void func_ov138_0229576c();
    void func_ov138_02295798();
    void func_ov138_022957c4(u32 a);
    void func_ov138_022957f0();
    void func_ov138_02295818();
    void func_ov138_02295860();
    void func_ov138_02295880();
    void func_ov138_0229589c();
    void func_ov138_022958b4();
    void func_ov138_022958f0();
    void func_ov138_02295910();
    void func_ov138_02295974();
    void func_ov138_02295998();
    void func_ov138_02295a1c();
    void func_ov138_02295a44();
    void func_ov138_02295a8c();
    void func_ov138_02295ae4();
    void func_ov138_02295b7c();
    void func_ov138_02295bf8();
    void func_ov138_02295c34();
    void func_ov138_02295c70();

    // callees in other groups
    void func_ov138_0229600c();

    /* 0x091 */ u8 unk_91;
    /* 0x092 */ u16 unk_92;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 unk_95;
    /* 0x096 */ u8 unk_96[2];
    /* 0x098 */ Unk_ov138_02204614 unk_98;
    /* 0x0fc */ Unk_ov138_022046cc unk_fc;
    /* 0x204 */ u8 unk_204[0x5c];
    /* 0x260 */ Unk_ov138_ov134_02291f60 unk_260;
};

Unk_ov138_02296380::~Unk_ov138_02296380() {
    unk_260.func_ov134_02294bac();
}

void Unk_ov138_02296380::func_ov138_022953f4(u32 m) { unk_92 = unk_92 & ~m; }

void Unk_ov138_02296380::func_ov138_02295404(u32 m) { unk_92 = unk_92 | m; }

BOOL Unk_ov138_02296380::func_ov138_02295414(u32 m) {
    if (unk_92 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov138_02296380::func_ov138_02295428(u32 pad) {
    u32 old = unk_95;
    if (func_ov002_0220126c(pad)) {
        unk_95 = data_ov138_02296284[unk_95];
    } else if (func_ov002_0220125c(pad)) {
        unk_95 = data_ov138_0229628c[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_95 = data_ov138_0229629c[unk_95];
    } else if (func_ov002_0220127c(pad)) {
        unk_95 = data_ov138_02296294[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov138_02296380::func_ov138_022954d0() {
    unk_98.func_ov002_02202af0();
    unk_94 = unk_8d;
    func_ov002_02200a58(0xa);
}

void Unk_ov138_02296380::func_ov138_022954f4() {
    unk_98.func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov138_02296380::func_ov138_0229550c() {
    unk_98.func_ov002_02202a78();
    unk_98.vfunc_0c();
}

void Unk_ov138_02296380::func_ov138_02295528(s32 a, s32 b) {
    if (func_ov138_02295414(4)) {
        unk_98.func_ov002_022029e8(a, b, 2, 1);
    } else {
        unk_98.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_94 = unk_8d;
    func_ov002_02200a58(8);
    func_ov138_022953f4(4);
}

void Unk_ov138_02296380::func_ov138_02295588() {
    if (func_ov138_02295414(2) != 0) {
        goto els;
    }
    {
        u32 c = unk_95;
        if (c == 3) {
            goto hit;
        }
        if (c == 4) {
            goto hit;
        }
    }
els:
    unk_98.func_ov002_02202c40();
    goto out;
hit:
    unk_98.func_ov002_02202ca0();
out:
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    func_ov138_02295528(b, c);
}

void Unk_ov138_02296380::func_ov138_022955d8() {
    unk_98.func_ov002_02202d00(0);
    unk_98.vfunc_0c();
}

s32 Unk_ov138_02296380::func_ov138_022955f4() {
    if (func_ov138_02295414(2)) {
        return unk_260.func_ov134_0229236c();
    }
    switch (unk_95) {
    case 3:
        return unk_fc.func_ov002_022030b8(6);
    case 4:
        return unk_fc.func_ov002_022030b8(7);
    default:
        return data_ov138_022962b8[unk_95];
    }
}

s32 Unk_ov138_02296380::func_ov138_02295648() {
    if (func_ov138_02295414(2)) {
        return unk_260.func_ov134_022923a0();
    }
    switch (unk_95) {
    case 3:
        return unk_fc.func_ov002_022030f4(6);
    case 4:
        return unk_fc.func_ov002_022030f4(7);
    default:
        return data_ov138_022962a4[unk_95];
    }
}

void Unk_ov138_02296380::func_ov138_0229569c() {
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    unk_98.func_ov002_02202a40(b, c);
    if (func_ov138_02295414(2) != 0) {
        goto els;
    }
    {
        u32 v = unk_95;
        if (v == 3) {
            goto hit;
        }
        if (v == 4) {
            goto hit;
        }
    }
els:
    unk_98.func_ov002_02202d00(1);
    goto out;
hit:
    unk_98.func_ov002_02202d00(7);
out:
    func_ov138_0229550c();
}

void Unk_ov138_02296380::func_ov138_022956f8() {
    if (func_0206ef0c()) {
        func_ov138_02295754();
    } else {
        func_ov138_02295718();
    }
}

void Unk_ov138_02296380::func_ov138_02295718() {
    s32 t = unk_260.func_ov134_0229236c();
    unk_260.func_ov134_02292340(t);
    func_ov138_02295404(2);
    func_ov138_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void Unk_ov138_02296380::func_ov138_02295754() {
    func_ov138_022955d8();
    func_ov002_02200a58(1);
}

void Unk_ov138_02296380::func_ov138_0229576c() {
    func_ov138_022955d8();
    func_ov138_022953f4(2);
    unk_260.func_ov134_02292df4();
    func_ov002_02200a58(0xd);
}

void Unk_ov138_02296380::func_ov138_02295798() {
    func_ov138_022955d8();
    func_ov138_022953f4(2);
    unk_260.func_ov134_02292e40();
    func_ov002_02200a58(0xd);
}

void Unk_ov138_02296380::func_ov138_022957c4(u32 a) {
    func_ov138_022955d8();
    unk_260.func_ov134_02293024(a);
    func_ov002_02200a58(0xc);
}

void Unk_ov138_02296380::func_ov138_022957f0() {
    unk_fc.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    func_0206ecf8(0);
}

void Unk_ov138_02296380::func_ov138_02295818() {
    unk_fc.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    unk_260.func_ov134_022948d8(v);
    func_0206e8cc(v);
    func_0206ecf8(1);
}

void Unk_ov138_02296380::func_ov138_02295860() {
    if (func_0206ef0c()) {
        func_ov138_0229589c();
    } else {
        func_ov138_02295880();
    }
}

void Unk_ov138_02296380::func_ov138_02295880() {
    func_ov138_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov138_02296380::func_ov138_0229589c() {
    func_ov138_022955d8();
    func_ov002_02200a58(0);
}

void Unk_ov138_02296380::func_ov138_022958b4() {
    if (unk_260.func_ov134_02292cb0()) {
        s32 r = unk_260.func_ov134_022932d8();
        if (r == 6) {
            unk_95 = 3;
        } else {
            unk_95 = r;
        }
        func_ov138_02295860();
    }
}

void Unk_ov138_02296380::func_ov138_022958f0() {
    if (unk_260.func_ov134_02292f40()) {
        func_ov138_022956f8();
    }
}

void Unk_ov138_02296380::func_ov138_02295910() {
    if (unk_fc.func_ov002_0220308c()) {
        if (unk_98.func_0208d534()) {
            s32 a = unk_fc.func_ov002_0220306c();
            s32 b = unk_fc.func_ov002_022030f4(-1);
            s32 c = unk_fc.func_ov002_022030b8(-1);
            unk_98.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov138_022955d8();
        func_ov002_02200a60(1);
    }
}

void Unk_ov138_02296380::func_ov138_02295974() {
    if (unk_98.func_0208d4fc()) {
        func_ov138_0229550c();
        func_ov002_02200a58(unk_94);
    }
}

void Unk_ov138_02296380::func_ov138_02295998() {
    if (unk_98.func_0208d4fc()) {
        if (func_ov138_02295414(2)) {
            if (unk_260.func_ov134_02292530()) {
                func_ov002_02200a58(6);
            } else if (unk_260.func_ov134_02292170()) {
                func_ov138_02295798();
            } else {
                func_ov002_02200a58(5);
                func_ov138_022954d0();
            }
        } else {
            u32 v = unk_95;
            if (v == 3) {
                func_ov138_02295818();
            } else if (v == 4) {
                func_ov138_022957f0();
            } else {
                func_ov138_022957c4(v);
            }
        }
    }
}

void Unk_ov138_02296380::func_ov138_02295a1c() {
    if (!unk_98.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_94);
        func_ov138_0229600c();
    }
}

void Unk_ov138_02296380::func_ov138_02295a44() {
    if (unk_260.func_ov134_02292420()) {
        func_ov002_02200a58(5);
        func_ov138_022954d0();
    }
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    unk_98.func_ov002_02202a40(b, c);
}

void Unk_ov138_02296380::func_ov138_02295a8c() {
    if (data_021f47d8[0] & 1) {
        unk_260.func_ov134_02292450();
        s32 b = func_ov138_02295648();
        s32 c = func_ov138_022955f4();
        unk_98.func_ov002_02202a40(b, c);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(7);
    }
}

void Unk_ov138_02296380::func_ov138_02295ae4() {
    if (func_ov002_022009d4()) {
        func_ov138_02295754();
        return;
    }
    s32 r = unk_260.func_ov134_0229219c(func_ov002_022009c8());
    switch (r) {
    case 2:
        func_ov138_02295404(4);
        goto dflt;
    case 3: {
        s32 b = func_ov138_02295648();
        s32 c = func_ov138_022955f4();
        unk_98.func_ov002_02202a40(b, c);
        return;
    }
    default:
    dflt:
        func_ov138_02295588();
        return;
    case 0: {
        u32 v = data_021f47d8[1];
        if (v & 1) {
            func_ov138_022954f4();
        } else if (v & 2) {
            func_ov138_0229576c();
        }
        return;
    }
    }
}

void Unk_ov138_02296380::func_ov138_02295b7c() {
    if (func_ov002_022009d4()) {
        func_ov138_0229589c();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov138_02295428(x)) {
        func_ov138_02295588();
        return;
    }
    u32 v = data_021f47d8[1];
    if (v & 1) {
        func_ov138_022954f4();
    } else if (v & 8) {
        func_ov138_022955d8();
        func_ov138_02295818();
    } else if (v & 2) {
        func_ov138_022955d8();
        func_ov138_022957f0();
    }
}

void Unk_ov138_02296380::func_ov138_02295bf8() {
    if (data_021f4770) {
        unk_260.func_ov134_022924b0(data_021ef5ec);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov138_02296380::func_ov138_02295c34() {
    if (data_021f4770) {
        unk_260.func_ov134_022924d8(data_021ef5ec);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov138_02296380::func_ov138_02295c70() {
    if (func_ov002_02200a14(1)) {
        func_ov138_02295718();
        return;
    }
    BOOL ok;
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        switch (unk_260.func_ov134_02292c54(data_021ef5f0, data_021ef5ec)) {
        case 0:
            func_ov138_02295798();
            break;
        case 1:
            func_ov138_0229576c();
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
