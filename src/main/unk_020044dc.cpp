// mwcc-version: 1.2/sp2
#include "Unk_020d8c7c.h"

extern "C" {
void func_0206d988(void);
void func_0206d9b4(void);
void func_020f0e3c(void *a);
void func_020f0e68(void *a, void *b, u32 c, void *d, s32 e);
void func_020e85fc(void *heap, void *p);
void *func_020e8628(void *heap, unsigned long size, s32 align);
s32 func_0209433c(void);
void func_0212899c(void *p, s32 v, unsigned long n);
BOOL func_0200dde0(void *self);
void func_02005294(void *self);
void func_020902f8(s32 v);
void func_02095314(s32 v);
void func_0209523c(s32 v);
void func_02034d84(s32 v);
void func_020b78b8(void);
BOOL func_02072e44(void *p);
BOOL func_020729bc(void *p, s32 v);
void func_02076280(s32 v, s32 a, s32 b, s32 c);
void func_02003e50(void *p);
void func_020b8930(void *p);
void func_02055eec(void *p);
void func_02054b14(void *p);
void func_020546ec(void *p);
void func_0205e274(void *p);
void func_0205d5bc(void *p);
void func_0205db70(void *p);
void func_0205cba8(void *p);
void func_0205c744(void *p);
s32 func_ov003_0221cfdc(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
s32 func_ov004_0222c4d8(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
extern u8 data_021f5b80[];
extern void *data_021c619c;
extern u8 data_0213c8f0[];
extern u8 data_020d5e20[];
extern s32 data_021c3070;
extern s32 data_021c3068;
extern s32 data_021bc8f0;
extern u8 data_020e416c;
extern void *data_020cbb18;
}

struct Unk_020044e0_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 v);
};
extern Unk_020044e0_Obj *data_0213c8ec;

struct Unk_0203e7a4 : Unk_020d8c7c_Base {
    u8 unk_04[0xe6];
    Unk_0203e7a4();
    virtual ~Unk_0203e7a4();
};

// second base at 0xec
struct Unk_020d6e6c {
    u8 unk_04[0x7c];
    s32 unk_80;
    Unk_020d6e6c();
    virtual ~Unk_020d6e6c();
};


#define MEMBER(name) \
    struct name { \
        name(); \
        ~name(); \
    }
MEMBER(Unk_02088c4c);
MEMBER(Unk_020b6a0c);
MEMBER(Unk_0205426c);
MEMBER(Unk_0205ee34);
MEMBER(Unk_0205c780);
MEMBER(Unk_02054e3c);
MEMBER(Unk_0205dbb0);
MEMBER(Unk_0205d5dc);
MEMBER(Unk_0205e66c);
MEMBER(Unk_0205c3a8);
MEMBER(Unk_0205d398);
MEMBER(Unk_0205cfac);
MEMBER(Unk_0205d230);
MEMBER(Unk_02055fe8);
MEMBER(Unk_02063cfc);
MEMBER(Unk_0205cbe0);
MEMBER(Unk_020323b0);
MEMBER(Unk_020f3ee4);
MEMBER(Unk_0201a13c);
struct Unk_020b895c {
    Unk_020b895c();
};
struct Unk_0205ef98 {
    Unk_0205ef98();
    ~Unk_0205ef98();
};
struct Unk_0200e2e0 {
    u8 unk_00[0x1c];
    Unk_0200e2e0();
    ~Unk_0200e2e0();
};
struct Unk_020f43c8_Base {
    virtual ~Unk_020f43c8_Base();
};
struct Unk_020d6f54 : Unk_020f43c8_Base {
    u8 unk_04[0x4c];
    Unk_020d6f54();
    virtual ~Unk_020d6f54() {}
};

class Unk_020d6df4 : public Unk_0203e7a4, public Unk_020d6e6c {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    Unk_020d6df4();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020d6df4();

    BOOL func_02004b64();
    void func_02004ce8();
    void func_02005294();
    BOOL func_0200ec44(s32 id);
    void func_0200ec1c(s32 id);

    Unk_02088c4c unk_170;
    u8 pad_171[0x4f];
    Unk_02088c4c unk_1c0;
    u8 pad_1c1[0x4f];
    Unk_020b6a0c unk_210;
    u8 pad_211[0x1f];
    Unk_0205426c unk_230;
    u8 pad_231[0x153];
    Unk_0205ee34 unk_384;
    Unk_0205c780 unk_385;
    u8 pad_386[0x2];
    Unk_02054e3c unk_388;
    u8 pad_389[0x9b];
    Unk_0205dbb0 unk_424;
    u8 pad_425[0x3b];
    Unk_02054e3c unk_460;
    u8 pad_461[0x9b];
    Unk_02054e3c unk_4fc;
    u8 pad_4fd[0x9b];
    Unk_0205d5dc unk_598;
    u8 pad_599[0x3];
    Unk_0205e66c unk_59c;
    u8 pad_59d[0x15f];
    Unk_0205c3a8 unk_6fc;
    Unk_0205c3a8 unk_6fd;
    u8 pad_6fe[0x2];
    s32 unk_700;
    s32 unk_704;
    u8 pad_708[0x1];
    Unk_0205d398 unk_709;
    Unk_0205cfac unk_70a;
    Unk_0205d230 unk_70b;
    Unk_02055fe8 unk_70c;
    u8 pad_70d[0x2b];
    Unk_02055fe8 unk_738;
    u8 pad_739[0x2b];
    Unk_02063cfc unk_764;
    u8 pad_765[0x3];
    s32 unk_768;
    s32 unk_76c;
    Unk_0205cbe0 unk_770;
    u8 pad_771[0x3];
    Unk_020b895c unk_774;
    u8 pad_775[0x27];
    Unk_0205ef98 unk_79c;
    u8 pad_79d[0x3];
    Unk_020323b0 unk_7a0;
    u8 pad_7a1[0x2f];
    s32 unk_7d0;
    u8 pad_7d4[0x18];
    s32 unk_7ec;
    u8 pad_7f0[0x4];
    s32 unk_7f4;
    u8 pad_7f8[0x4];
    s32 unk_7fc;
    u8 pad_800[0x1c];
    u16 unk_81c;
    u16 unk_81e;
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    Unk_020f3ee4 unk_838;
    u8 pad_839[0x43];
    Unk_020d6f54 unk_87c;
    s32 unk_8cc;
    s32 unk_8d0;
    s32 unk_8d4;
    s32 unk_8d8;
    s32 unk_8dc;
    s32 unk_8e0;
    u8 pad_8e4[0x10];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    u8 pad_900[0x8];
    Unk_0201a13c unk_908;
    u8 pad_909[0x27];
    Unk_0200e2e0 unk_930[30];
    u8 pad_c78[0x4];
    s32 unk_c7c;
    u16 unk_c80;
    u8 pad_c82[0x2];
    s32 unk_c84;
    s32 unk_c88;
    u8 pad_c8c[0x4];
    s32 unk_c90;
};

void Unk_020d6df4::func_02004ce8() {
    typedef void (Unk_020d6df4::*Fn)();
    static Fn table[2] = {(Fn)&Unk_020d6df4::func_02004ce8, (Fn)&Unk_020d6df4::func_02004ce8};
    Fn fn = table[unk_7f4];
    (this->*fn)();
    if (func_0200ec44(0xd)) {
        BOOL c = data_020e416c == 0 ? TRUE : FALSE;
        if (c == TRUE) {
            s32 a[6];
            a[0] = unk_820;
            a[1] = unk_824;
            a[2] = unk_828;
            a[3] = unk_82c;
            a[4] = unk_830;
            a[5] = unk_834;
            func_ov003_0221cfdc(unk_81e, &a[0], &a[3], 0, 0, 0);
        } else {
            s32 b[6];
            b[0] = unk_820;
            b[1] = unk_824;
            b[2] = unk_828;
            b[3] = unk_82c;
            b[4] = unk_830;
            b[5] = unk_834;
            func_ov004_0222c4d8(unk_81e, &b[0], &b[3], 0, 0, 0);
        }
    }
}

BOOL Unk_020d6df4::func_02004b64() {
    if (unk_7ec == 0x6d && unk_7d0 != -1) {
        func_020902f8(unk_7d0);
    }
    func_02095314(unk_7fc);
    void *r5 = data_020cbb18;
    if (func_02072e44(r5) && func_020729bc(r5, unk_7fc)) {
        func_02076280(unk_7fc + 8, 0, 0, 0);
    }
    func_020b8930(&unk_774);
    func_02055eec(&unk_70c);
    func_02055eec(&unk_738);
    func_02054b14(&unk_4fc);
    func_02054b14(&unk_388);
    func_02054b14(&unk_460);
    func_020546ec(&unk_230);
    func_02054b14(&unk_230);
    func_0205e274(&unk_59c);
    func_0205d5bc(&unk_598);
    unk_c88 = 2;
    func_0205db70(&unk_424);
    func_0205cba8(&unk_770);
    func_0205c744(&unk_385);
    func_0209523c(unk_7fc);
    if (func_0200ec44(0x1a)) {
        func_02034d84(0x3f);
        func_0200ec1c(0x1a);
    }
    if (func_0200ec44(0xa)) {
        if (func_0200ec44(0x19)) {
            func_02003e50(&unk_838);
        } else {
            func_02003e50(&unk_87c);
        }
        func_0200ec1c(0xa);
    }
    if (func_0200ec44(0x1b)) {
        func_0200ec1c(0x1b);
        func_020b78b8();
    }
    return TRUE;
}

extern "C" void func_02004b60() {}

Unk_020d6df4::Unk_020d6df4()
    : unk_81c(0xfff1), unk_81e(0xfff1), unk_8cc(0), unk_8d0(0), unk_8d4(0), unk_8d8(0), unk_8dc(0), unk_8e0(0),
      unk_8f8(0), unk_8fc(0) {
    unk_7fc = 4;
    unk_700 = 0xa1;
    unk_704 = 0x144;
    unk_768 = 0x16f;
    unk_76c = 0x16f;
    unk_80 = 2;
    enum Unk_020d6df4_M1 { Unk_020d6df4_M1_V = -1 };
    Unk_020d6df4_M1 m1 = Unk_020d6df4_M1_V;
    unk_c7c = m1;
    unk_c88 = 2;
    unk_c90 = 2;
    unk_8f4 = 0x93;
    unk_c80 = m1;
    unk_c84 = 0x93;
}

Unk_020d6df4::~Unk_020d6df4() {}

BOOL Unk_020d6df4::vfunc_24() {
    func_02004ce8();
    return TRUE;
}

BOOL Unk_020d6df4::vfunc_18() {
    func_02005294();
    return TRUE;
}

BOOL Unk_020d6df4::vfunc_0c() {
    return func_02004b64();
}

BOOL Unk_020d6df4::vfunc_00() {
    return func_0200dde0(this);
}

void *Unk_020d6df4::operator new(unsigned long size) {
    void *heap = data_021c619c;
    void *p = func_020e8628(heap, size, func_0209433c());
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void Unk_020d6df4::operator delete(void *p) {
    func_020e85fc(data_021c619c, p);
}

extern "C" void func_02004520() {
    data_0213c8ec = 0;
    func_020f0e68(data_021f5b80, data_0213c8f0, 0x80000, data_020d5e20, 1);
    func_0206d9b4();
}

extern "C" void func_020044e0() {
    func_0206d988();
    func_020f0e3c(data_021f5b80);
    if (data_0213c8ec != 0 && data_021c3070 != 0) {
        data_0213c8ec->vfunc_10(data_021c3068);
    }
}

extern "C" void func_020044dc() {}
