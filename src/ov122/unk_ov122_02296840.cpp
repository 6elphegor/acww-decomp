// ov122: scene overlay (class Unk_ov122_0229a1b8, vtable 0x0229a1b8, 0x4664 bytes): chat keyboard/text-entry list screen.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_020e2a60;

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
};

class Unk_020e2a60 {
public:
    virtual ~Unk_020e2a60();
};

class Unk_020ddefc : public Unk_020e2a78 {
public:
    Unk_020ddefc();
    virtual ~Unk_020ddefc();
    u32 unk_04[(0x94 - 4) / 4];
};

class Unk_020dd468 : public Unk_020e2a60 {
public:
    Unk_020dd468();
    virtual ~Unk_020dd468();
    u32 unk_04[(0x90 - 4) / 4];
    u8 unk_90[0x28];
    u8 unk_b8[0x80];
};

// text window, 0x40 bytes
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    u32 unk_04[(0x40 - 4) / 4];
};

// screen upload helper, 0x24 bytes
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    u32 unk_04[8];
};

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    u32 unk_00[0x210 / 4];
};

class Unk_020e100c {
public:
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_020e1028 : public Unk_020e100c {
public:
};

class Unk_ov002_022046b0 : public Unk_020e1028 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    u32 unk_04[0x44 / 4];
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_022013ac {
public:
    u32 unk_00[0x2f4 / 4];
};

class Unk_ov002_02204558 : public Unk_ov002_022013ac {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
};

class Unk_ov002_02202fac {
public:
    u32 unk_00[0x164 / 4];
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    u32 unk_00[0x108 / 4];
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    BOOL func_ov002_022009a4();
    u8 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
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

// 0xc0: ov095 list/text object, size 0x23bc
class Unk_ov122_ov095_02293b60 {
public:
    Unk_ov122_ov095_02293b60() : unk_22f4(), unk_233c() {}
    inline ~Unk_ov122_ov095_02293b60() {}
    u32 unk_00[0x22f4 / 4];
    Unk_020e45f8 unk_22f4[2];
    Unk_020e0488 unk_233c[2];
};

class Unk_ov122_0229a1b8;
typedef void (Unk_ov122_0229a1b8::*Unk_ov122_0229a1b8_Fn)();

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
void func_0200402c(u32 v);
s32 func_020512e0(void *p, s32 n);
void func_02050e90(void *p, void *q, u32 n);
void func_020a78a4(void *p);
void _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(void *p, void *q, s32 a, s32 b);
s32 func_020b30bc(void *p);
void _ZN12Unk_020e2a6013func_020a77f8EP12Unk_020e2a78(void *p, void *q);
void func_0209750c();
void _ZN12Unk_0209865c13func_02098750Ev();
void *_ZN12Unk_02097d1c13func_02097e00Ev();
void func_02065470(void *a, void *b);
s32 _ZN12Unk_0206ce9813func_0206cf34Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev(void *p);
void _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(void *p);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(void *p, s32 a, s32 b);
void _ZN18Unk_ov002_02202d9819func_ov002_0220298cEiiih(void *p, s32 a, s32 b, u32 c, u32 d);
void _ZN18Unk_ov002_02202d9819func_ov002_02202a18Eiii(void *p, s32 a, s32 b, u32 c);
void _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(void *p, u32 v);
void func_ov002_02202064(void *p, u32 v);
void func_ov002_022020cc(void *p, u32 a, u32 b);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(void *p);
s32 _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(void *p, u32 v);
void _ZN18Unk_ov002_02202fac19func_ov002_022030acEh(void *p, u32 v);
void func_ov002_02202e54(void *p);
BOOL _ZN18Unk_ov002_022046b019func_ov002_02202f18Eii(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov095_022924f0(void *s);
s32 func_ov095_02292580(void *s);
s32 func_ov095_02292544(void *s);
s32 func_ov095_02295194(void *s);
extern u8 data_021edb68;
s32 func_02051348(void *p, s32 v);
s32 _ZN12Unk_0206ce9813func_0206cefcEi(void *p, s32 v);
s32 *_ZN12Unk_0206ce9813func_0206cf40Ev(void *p);
s32 _ZN12Unk_0206d0a013func_0206d2d4Ev(void *p);
BOOL func_0206ef0c();
u32 func_ov095_02293fb4(void *st, u8 *a, u32 b, u32 c, s32 d);
s32 func_ov095_02293f2c(void *st, void *a, s32 b, s32 c, u32 d, u8 *out);
void func_ov095_022951e4(void *st);
BOOL func_ov095_02295440(void *st, s32 v);
void func_ov095_02294d40(void *st, s32 v);
BOOL func_ov095_02295270(void *st, s32 v);
s32 _ZN18Unk_ov002_022013ac19func_ov002_02201494Ev(void *p);
s32 _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei(void *p, s32 v);
s32 _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei(void *p, s32 v);
void _ZN18Unk_ov002_022040ec19func_ov002_02204340EPhij(void *p, void *q, s32 a, s32 b);
void _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev(void *p);
void _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev(void *p);
extern u8 data_021f4770;
extern u8 data_021f4774;
s32 func_0205125c(void *p, s32 n);
s32 func_02051268(void *dst, void *src, u32 n);
BOOL func_0206e61c();
s32 func_ov095_02292404(void *st);
u32 func_ov095_02292458(void *st, u32 v);
s32 func_ov095_02293dc8(void *st, s32 k, s32 v);
BOOL func_ov095_0229423c(void *st, s32 v);
BOOL func_ov095_02295264(void *st);
BOOL func_ov095_02295258(void *st);
s32 func_ov095_02293dc0(void *st);
s32 func_ov095_02293d94(void *st);
s32 func_ov095_02293d88(void *st);
s32 func_ov095_022923ec(void *st);
s32 func_ov095_022923f8(void *st);
BOOL func_ov095_02293ff0(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
BOOL func_ov095_022940f0(void *st, u8 *a, s32 b, u8 *out, s32 c, s32 d, s32 e, s32 f);
u8 *func_ov095_02293f90(void *st, u8 *p);
u8 *func_ov095_02293f8c(void *st, u8 *p);
u8 *func_ov095_02293f88(void *st, u8 *p);
BOOL func_ov095_02293f94(void *st, u8 *a, u8 *b, s32 c, s32 d, s32 e);
s32 func_ov095_02294a44(void *st, s32 a, s32 b);
s32 func_ov095_02294864(void *st, s32 a, s32 b);
s32 func_ov095_02294318(void *st);
BOOL func_ov095_022942e8(void *st);
s32 func_ov095_02294a40(void *st);
BOOL func_ov095_02294324(void *st);
BOOL func_ov095_02293990(void *st);
s32 func_ov095_02294648(void *st, s32 a, s32 b, s32 c);
void _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(void *p);
void _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(void *p);
void _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev(void *p);
s32 _ZN18Unk_ov002_02202fac19func_ov002_02203110Ei(void *p, s32 v);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022014acEii(void *p, s32 a, s32 b);
void func_ov002_02201a3c(void *p, s32 v);
u32 _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(void *p, s32 a, u32 b);
extern u32 data_021f482c;
void func_0200212c(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020026c4(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(const char *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_02065c8c(void *p);
void func_ov002_02202dd4(void *p, s32 a);
s32 func_0206ed68();
s32 func_020655d8(void *p);
void _ZN12Unk_020e102813func_0208d9d4Ei(void *p, s32 v);
void func_ov095_02293cc0(void *p);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, s32 a);
void func_ov095_02294358(void *p, s32 a);
void func_ov095_022943b4(void *p, s32 a);
void func_ov095_022943dc(void *p, const char *q);
void func_ov095_0229442c(void *p);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
void func_ov095_02294624(void *p, s32 a);
void func_ov095_0229483c(void *p, s32 a);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022953c0(void *p, s32 a);
u32 func_ov095_02293da0(void *p);
void func_020ed188(void *p);
u32 func_020ed174();
void _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(u32 a, u32 b);
void _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv(u32 a);
void _ZN18Unk_ov090_022921e019func_ov090_02291a90Ev(u32 a);
u32 func_0206ec48();
void func_0206ec54(u32 a);
void func_0206e63c();
BOOL func_0206ef00();
void func_0200152c(u32 a);
void func_0200151c(u32 a);
void func_02001724(u32 a, u32 b);
void func_020016b0(u32 a);
void func_020021b8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02087e70(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_02088730(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
void _ZN12Unk_020e102813func_0208dae8Eii(void *a, u32 b, u32 c);
void func_ov002_02201b28(void *p);
void func_0206fca8(void *p);
void _ZN12Unk_0206d0a013func_0206d288EPv(void *p, u32 a);
BOOL _ZN12Unk_020e100c13func_0208d534Ev(void *p);
BOOL _ZN12Unk_020e100c13func_0208d4fcEv(void *p);
BOOL _ZN12Unk_020e102813func_0208d9a8Ev(void *p);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
s32 func_ov002_022009d4(void *self);
s32 func_ov002_022009c8(void *self);
void func_ov002_02202e48(void *p);
BOOL _ZN18Unk_ov002_022040ec19func_ov002_02204234Ei(void *p, s32 a);
BOOL _ZN18Unk_ov002_02202fac19func_ov002_0220308cEv(void *p);
s32 _ZN18Unk_ov002_02202fac19func_ov002_0220306cEv(void *p);
BOOL _ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev(void *p);
s32 _ZN18Unk_ov002_022013ac19func_ov002_022013e4EPvj(void *p, u32 a, u32 b);
u32 _ZN18Unk_ov002_022013ac19func_ov002_02201490Ev(void *p);
BOOL func_ov002_02201a28(void *p);
BOOL _ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev(void *p);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
BOOL _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev(void *p);
void _ZN12Unk_0206ce9813func_0206d018Ejjj(void *self, s32 a, s32 b, s32 c);
void _ZN12Unk_0206d0a013func_0206d0a0Ejj(void *self, s32 a, s32 b, s32 c);
void _ZN12Unk_0206d0a013func_0206d0b8EPh(void *self, void *p);
void _ZN12Unk_0206d0a013func_0206d0fcEPhi(void *self, void *p, u32 b);
void _ZN12Unk_0206d0a013func_0206d1d4EP16Unk_0206d1d4_SrcPh(void *self, void *p, void *q);
void _ZN12Unk_0206d0a013func_0206d380Ev(void *self);
void _ZN12Unk_0206d0a013func_0206d394Ev(void *self);
void _ZN12Unk_0206d0a013func_0206d39cEi(void *self, s32 a);
void _ZN12Unk_0206d0a013func_0206d3f4Ej(void *self, s32 a);
void _ZN18Unk_ov002_022013ac19func_ov002_022017c4Ev(void *self);
void _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev(void *self);
void _ZN18Unk_ov002_02202fac19func_ov002_02203268Ev(void *self);
void _ZN18Unk_ov002_02202fac19func_ov002_02203458Ei(void *self, s32 a);
void _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc(void *self, s32 a, s32 b, s32 c);
s32 _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev(void *self);
s32 _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev(void *self);
void _ZN18Unk_ov002_022046cc19func_ov002_022035d8Ev(void *self);
void _ZN18Unk_ov002_022046cc19func_ov002_02203608Ev(void *self);
void _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei(void *self, s32 a);
void _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev(void *self);
void func_0206d000(void *self, s32 a, s32 b, s32 c);
void func_ov002_02201b04(void *self);
void func_ov002_02201b58(void *self);
void func_ov002_02202144(void *self);
void func_ov095_0229253c(void *self, s32 a, s32 b);
void func_ov095_022937d0(void *self, u32 a, void *b, u32 c);
void func_ov095_02293824(void *self, u32 a, void *b);
void func_ov095_022938f8(void *self, s32 a, s32 b, s32 c);
void func_ov095_02293b60(void *self, u32 a, void *b, u32 c);
}

// Vtable 0x0229a1b8, size 0x4664
class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    Unk_ov122_0229a1b8()
        : unk_c0(), unk_3c7c(), unk_3e8c(), unk_3ed4(), unk_3f38(), unk_3fcc(),
          unk_4104(), unk_43f8(), unk_455c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov122_02296968(u32 mask);
    void func_ov122_02296978(u32 mask);
    BOOL func_ov122_02296988(u32 mask);
    void func_ov122_0229699c();
    void func_ov122_022969d4(u8 *src, u32 n);
    void func_ov122_02296a28();
    void func_ov122_02296a48();
    void func_ov122_02296a7c(u32 a);
    void func_ov122_02296aa4();
    void func_ov122_02296af0();
    void func_ov122_02296b10();
    void func_ov122_02296b34();
    void func_ov122_02296b54();
    void func_ov122_02296bbc(s32 a, s32 b);
    void func_ov122_02296bf0();
    void func_ov122_02296c70();
    void func_ov122_02296c94();
    void func_ov122_02296ce8(u32 i);
    void func_ov122_02296d28();
    void func_ov122_02296d34();
    void func_ov122_02296d68();
    BOOL func_ov122_02296de4();
    void func_ov122_02296df4(s32 v);
    void func_ov122_02296e08(s32 v);
    void func_ov122_02296e28();
    void func_ov122_02296e80();
    BOOL func_ov122_02296ee0();
    void func_ov122_02296f30(u32 v);
    u8 func_ov122_02296f40();
    u32 func_ov122_02296f68();
    u8 *func_ov122_02296f98();
    u8 *func_ov122_02296fd4();
    BOOL func_ov122_02297020(void *pad, s32 flag);
    void func_ov122_02297238();
    void func_ov122_022972dc();
    BOOL func_ov122_022972f4();
    u8 func_ov122_0229731c();
    void func_ov122_02297340();
    void func_ov122_02297380();
    void func_ov122_022973cc();
    void func_ov122_02297424();
    void func_ov122_0229747c(s32 a, s32 b, s32 c);
    BOOL func_ov122_022974e8();
    void func_ov122_022975c0();
    BOOL func_ov122_022975c4();
    u8 func_ov122_02297630(u32 *p);
    void func_ov122_02297690();
    u8 func_ov122_022976c8(s32 idx, u32 *p);
    void func_ov122_0229771c(s32 flag);
    u8 func_ov122_022977bc(s32 a, u8 *p);
    void func_ov122_02297838();
    void func_ov122_02297870();
    void func_ov122_022978c0();
    void func_ov122_02297928();
    void func_ov122_02297940();
    void func_ov122_02297994();
    void func_ov122_022979ac(u8 a, s32 b);
    void func_ov122_022979e8();
    void func_ov122_02297a08();
    void func_ov122_02297a24();
    BOOL func_ov122_02297a3c();
    BOOL func_ov122_02297a68();
    BOOL func_ov122_02297ac8();
    BOOL func_ov122_02297b30();
    BOOL func_ov122_02297bcc();
    BOOL func_ov122_02297c14();
    void func_ov122_02297c68();
    void func_ov122_02297c90();
    void func_ov122_02297d78();
    void func_ov122_02297e50();
    void func_ov122_02297e84();
    void func_ov122_02297eb4();
    void func_ov122_02297f04();
    void func_ov122_02297f98();
    void func_ov122_022980b0();
    void func_ov122_022980dc();
    void func_ov122_02298118();
    void func_ov122_0229813c();
    void func_ov122_0229816c();
    void func_ov122_0229819c();
    void func_ov122_02298210();
    void func_ov122_02298320();
    void func_ov122_0229836c();
    void func_ov122_02298394();
    void func_ov122_022983ec();
    void func_ov122_022984c8();
    void func_ov122_022984f4();
    s32 func_ov122_022985d8(s32 key);
    void func_ov122_02298714();
    void func_ov122_022987ac();
    void func_ov122_02298814();
    void func_ov122_02298820();
    void func_ov122_0229882c();
    BOOL func_ov122_02298874(u32 key);
    BOOL func_ov122_022988b8(u32 a, u32 b);
    BOOL func_ov122_0229899c(u32 key);
    BOOL func_ov122_02298a54(BOOL flag);
    s32 func_ov122_02298b14();
    void func_ov122_02298b70();
    void func_ov122_02298c24();
    void func_ov122_02298c94();
    void func_ov122_02298cf4();
    void func_ov122_02298d30();
    void func_ov122_02298d84();
    void func_ov122_02298ec4();
    void func_ov122_02298fbc(u32 a, u32 b);
    void func_ov122_02299130();
    void func_ov122_02299150();
    void func_ov122_0229917c();
    void func_ov122_02299188();
    void func_ov122_02299268();
    void func_ov122_022992c4();
    void func_ov122_022992d4();
    void func_ov122_02299308();
    void func_ov122_02299334();
    void func_ov122_02299368();
    void func_ov122_02299408();
    void func_ov122_02299474();
    void func_ov122_022994c8();
    void func_ov122_022994f4();
    void func_ov122_02299534();
    void func_ov122_02299594();
    void func_ov122_022995c0();
    void func_ov122_022995d0();
    void func_ov122_02299614();
    void func_ov122_02299644();
    void func_ov122_02299694();
    void func_ov122_022996d8();
    void func_ov122_02299738();
    void func_ov122_02299774();
    void func_ov122_022997d0();
    void func_ov122_02299870();
    BOOL func_ov122_022998b0(s32 a);
    BOOL func_ov122_02299900();
    void func_ov122_022999b0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 *unk_bc;
    /* 0xc0 */ Unk_ov122_ov095_02293b60 unk_c0;
    /* 0x247c */ u32 unk_247c[(0x3c7c - 0x247c) / 4];
    /* 0x3c7c */ Unk_0206d0a0 unk_3c7c;
    /* 0x3e8c */ Unk_ov002_022046b0 unk_3e8c;
    /* 0x3ed4 */ Unk_ov002_02204614 unk_3ed4;
    /* 0x3f38 */ Unk_020ddefc unk_3f38;
    /* 0x3fcc */ Unk_020dd468 unk_3fcc;
    /* 0x4104 */ Unk_ov002_02204558 unk_4104;
    /* 0x43f8 */ Unk_ov002_022046cc unk_43f8;
    /* 0x455c */ Unk_ov002_022040ec unk_455c;
};

extern "C" void func_ov122_02299220();
struct Unk_ov122_SceneEntry {
    Unk_ov122_0229a1b8 *(*create)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov122_0229a1b8 *func_ov122_02299f40();
// Scene registration entry read by main: factory, then two ids
// Named data: their definition order sets the .data order (compiler-generated constants would not reproduce it).
extern "C" const u8 data_ov122_0229a004[4] = {3, 4, 0, 0};

extern "C" const u16 data_ov122_0229a010[6] = {0x27, 0x29, 0x29, 0x27, 0x2a, 0};

extern "C" Unk_ov122_SceneEntry data_ov122_0229a130 = {func_ov122_02299f40, 0xa5, 0xa9};

extern "C" const u8 data_ov122_0229a008[8] = {0, 9, 9, 3, 4, 0, 0, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299774Ev();
extern "C" void *data_ov122_0229a178[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299774Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022997d0Ev();
extern "C" void *data_ov122_0229a170[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022997d0Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022996d8Ev();
extern "C" void *data_ov122_0229a168[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022996d8Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299694Ev();
extern "C" void *data_ov122_0229a160[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299694Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299644Ev();
extern "C" void *data_ov122_0229a158[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299644Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299614Ev();
extern "C" void *data_ov122_0229a150[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299614Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022995d0Ev();
extern "C" void *data_ov122_0229a148[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022995d0Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022995c0Ev();
extern "C" void *data_ov122_0229a140[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022995c0Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299594Ev();
extern "C" void *data_ov122_0229a138[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299594Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299534Ev();
extern "C" void *data_ov122_0229a090[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299534Ev, 0};

extern "C" u32 data_ov122_0229a180[12] = {0x006880b4, 0x0000a0c0, 0x206880e4, 0x0000a0c0, 0x006800c4, 0x0000a0e0, 0x006800cc, 0x0000a0e0,
                                          0x006800d4, 0x0000a0e0, 0x006800dc, 0xffffa0e0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022994c8Ev();
extern "C" void *data_ov122_0229a120[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022994c8Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299474Ev();
extern "C" void *data_ov122_0229a118[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299474Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297c90Ev();
extern "C" void *data_ov122_0229a080[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297c90Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298118Ev();
extern "C" void *data_ov122_0229a108[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298118Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022980dcEv();
extern "C" void *data_ov122_0229a100[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022980dcEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297d78Ev();
extern "C" void *data_ov122_0229a078[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297d78Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298d84Ev();
extern "C" void *data_ov122_0229a0f0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298d84Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298cf4Ev();
extern "C" void *data_ov122_0229a0e8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298cf4Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298c94Ev();
extern "C" void *data_ov122_0229a0e0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298c94Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298c24Ev();
extern "C" void *data_ov122_0229a0d8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298c24Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297c68Ev();
extern "C" void *data_ov122_0229a0d0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297c68Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022984f4Ev();
extern "C" void *data_ov122_0229a0c8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022984f4Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297eb4Ev();
extern "C" void *data_ov122_0229a020[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297eb4Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022983ecEv();
extern "C" void *data_ov122_0229a0b8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022983ecEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299738Ev();
extern "C" void *data_ov122_0229a0b0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299738Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_0229836cEv();
extern "C" void *data_ov122_0229a0a8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_0229836cEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298320Ev();
extern "C" void *data_ov122_0229a0a0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298320Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298210Ev();
extern "C" void *data_ov122_0229a098[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298210Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297e50Ev();
extern "C" void *data_ov122_0229a040[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297e50Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022994f4Ev();
extern "C" void *data_ov122_0229a128[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022994f4Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_0229819cEv();
extern "C" void *data_ov122_0229a038[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_0229819cEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_0229813cEv();
extern "C" void *data_ov122_0229a070[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_0229813cEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298d30Ev();
extern "C" void *data_ov122_0229a0f8[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298d30Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022980b0Ev();
extern "C" void *data_ov122_0229a068[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022980b0Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298b70Ev();
extern "C" void *data_ov122_0229a060[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298b70Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297f04Ev();
extern "C" void *data_ov122_0229a0c0[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297f04Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02298394Ev();
extern "C" void *data_ov122_0229a050[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02298394Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297e84Ev();
extern "C" void *data_ov122_0229a048[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297e84Ev, 0};

extern "C" u32 data_ov122_0229a030[2] = {0x802a40e6, 0xffffc0c1};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_0229816cEv();
extern "C" void *data_ov122_0229a088[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_0229816cEv, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02299408Ev();
extern "C" void *data_ov122_0229a110[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02299408Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_02297f98Ev();
extern "C" void *data_ov122_0229a028[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_02297f98Ev, 0};

extern "C" void _ZN18Unk_ov122_0229a1b819func_ov122_022984c8Ev();
extern "C" void *data_ov122_0229a058[2] = {(void *)_ZN18Unk_ov122_0229a1b819func_ov122_022984c8Ev, 0};

#define C Unk_ov122_0229a1b8

static inline BOOL Unk_ov122_02298b70_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov122_0229a1b8 *func_ov122_02299f40() { return new Unk_ov122_0229a1b8(); }

BOOL Unk_ov122_0229a1b8::vfunc_00() {
    func_ov122_02299368();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_0c() {
    u32 t = func_020ed174();
    _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv(t);
    _ZN18Unk_ov090_022921e019func_ov090_02291a90Ev(t);
    func_ov122_02299334();
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_24() {
    func_ov002_02201b28(&unk_4104);
    if (func_ov122_02296988(1)) {
        u8 *p = unk_94 + 0x60;
        func_02087e70(1, data_ov122_0229a180, 0x80, p - 0x10, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_ov095_02293b60(&unk_c0, 0x80, p, 1);
        func_ov095_02293824(&unk_c0, 0x80, p);
        if (func_0206ef00()) {
            func_02088730(1, data_ov122_0229a030, 0x80, p, -1, 1, 0);
        }
        func_ov095_022937d0(&unk_c0, 0x80, p, unk_a4);
    }
    if (func_ov122_02296de4()) {
        func_ov122_02296d68();
        func_020021fc(4, 0, unk_b2);
        func_020021fc(3, 0, unk_b2);
        if (unk_b2 > 0x40) {
            if (!func_ov122_02296988(0x20)) {
                func_ov122_02296978(0x20);
                func_0200152c(1);
                func_02001724(0x1d, 1);
                func_020016b0(0x1f);
                func_020021b8(2, 0, 0xb0, 0xfe, 0xc0);
            }
        } else if (func_ov122_02296988(0x20)) {
            func_ov122_02296968(0x20);
            func_0200151c(1);
        }
    }
    if (func_ov122_02296988(1)) {
        _ZN12Unk_020e102813func_0208dae8Eii(&unk_3e8c, 0x64, (u32)(unk_94 - 0x58) + (unk_b2 >> 1));
        s32 t = _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev(&unk_3e8c);
        func_ov095_0229253c(&unk_c0, t, _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev(&unk_3e8c));
        unk_3e8c.vfunc_08();
    }
    if (func_0206ef00()) {
        if (func_ov122_02296988(0x200)) {
            s32 t = _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev(&unk_3e8c);
            _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, t, _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev(&unk_3e8c));
        }
        _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev(&unk_3ed4);
    }
    if (func_ov122_02296988(1)) {
        _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei(&unk_43f8, (s32)unk_94);
    }
    if (func_ov122_02296988(2)) {
        _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei(&unk_43f8, unk_98);
    }
    if (func_ov122_02296988(4)) {
        s32 a = unk_9c;
        s32 b = unk_a0 - unk_b2;
        unk_ab = unk_ab + 1;
        if ((unk_ab & 0x10) != 0) {
            func_ov095_022938f8(&unk_c0, a, b, 3);
        }
    }
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_4c() {
    static Unk_ov122_0229a1b8_Fn tbl[15] = {
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a170, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a178,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0b0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a168,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a160, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a158,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a150, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a148,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a140, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a138,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a090, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a128,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a120, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a118,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a110};
    func_ov122_022992c4();
    (this->*tbl[unk_8c])();
    func_ov122_02299268();
    return TRUE;
}

void Unk_ov122_0229a1b8::func_ov122_022999b0() {
    static Unk_ov122_0229a1b8_Fn tbl[27] = {
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0f0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0f8,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0e8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0e0,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0d8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a060,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0c8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a058,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0b8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a050,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0a8, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0a0,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a098, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a038,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a088, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a070,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a108, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a100,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a068, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a028,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0c0, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a020,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a048, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a040,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a078, *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a080,
        *(Unk_ov122_0229a1b8_Fn *)data_ov122_0229a0d0};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov122_0229a1b8::vfunc_50() {
    if (func_ov122_02299900()) {
        return TRUE;
    }
    func_ov122_02299308();
    func_ov122_022999b0();
    func_ov122_022992d4();
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_54() { return TRUE; }

BOOL Unk_ov122_0229a1b8::vfunc_58() { return TRUE; }

BOOL Unk_ov122_0229a1b8::vfunc_5c() {
    func_ov122_02296a28();
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::func_ov122_02299900() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            func_ov122_02299870();
            return TRUE;
        case 5:
        case 7:
        case 8:
        case 10:
            break;
        }
    }
    return FALSE;
}

BOOL Unk_ov122_0229a1b8::func_ov122_022998b0(s32 a) {
    u32 r6 = func_020ed174();
    if (a != -1 && a != 8) {
        u32 r7 = func_0206ec48();
        _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(r6, (u8)a);
        func_0206ec54(r7);
        unk_8c = 2;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov122_0229a1b8::func_ov122_02299870() {
    _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj(func_020ed174(), 7);
    func_ov122_02296df4(0);
    func_ov122_02296968(4);
    unk_8c = 0xd;
    func_ov002_02200a60(1);
    func_ov122_02296c70();
    func_ov122_0229699c();
}

void Unk_ov122_0229a1b8::func_ov122_022997d0() {
    func_ov122_02299220();
    func_ov122_02299188();
    func_ov095_0229483c(&unk_c0, 6);
    func_ov095_02294358(&unk_c0, 6);
    func_ov002_022008e0(0xb, 0, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_020020b8(3);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, -16);
    func_ov002_02200840(3, 0, -16);
    func_ov122_0229917c();
    func_ov122_02299150();
    func_ov122_02296978(1);
    unk_94 = (u8 *)func_ov002_02200920();
    func_ov002_02200a50(1);
}

void Unk_ov122_0229a1b8::func_ov122_02299774() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov122_02297870();
        func_ov122_022979e8();
    }
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, -16);
    func_ov002_02200840(3, 0, -16);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov122_0229a1b8::func_ov122_02299738() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200a50(3);
}

void Unk_ov122_0229a1b8::func_ov122_022996d8() {
    if (func_ov002_022008fc(0)) {
        func_0200212c(4);
        func_0200212c(3);
        func_020021fc(4, 0, 0);
        func_020021fc(3, 0, 0);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        unk_98 = func_ov002_02200920();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299694() {
    if (func_ov122_02296988(0x20) == 0) {
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200840(6, 0, 0);
        unk_8c = 5;
    } else {
        func_ov122_02296df4(0);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299644() {
    if (func_ov002_022008fc(0)) {
        func_0200212c(6);
        func_020021fc(6, 0, 0);
        func_ov122_02296968(1);
        unk_8c = unk_b5;
    } else {
        func_ov002_02200840(6, 0, 0);
        unk_94 = (u8 *)func_ov002_02200920();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299614() {
    if (func_ov122_02296de4() == 0) {
        func_ov122_02299130();
        func_ov122_02296978(2);
        unk_98 = 0xc0;
        unk_8c = 7;
    }
}

void Unk_ov122_0229a1b8::func_ov122_022995d0() {
    if (unk_98 > 0x20) {
        unk_98 = unk_98 - 0x20;
    } else {
        unk_98 = 0;
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov122_02297994();
        } else {
            func_ov122_02297940();
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_022995c0() {
    unk_98 = 0;
    unk_8c = 9;
}

void Unk_ov122_0229a1b8::func_ov122_02299594() {
    if (unk_98 < 0xa0) {
        unk_98 = unk_98 + 0x20;
    } else {
        func_ov122_02296968(2);
        unk_8c = 0xa;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299534() {
    func_ov095_02294624(&unk_c0, 6);
    func_02002398(6, 1);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov122_02299150();
    func_ov122_02296978(1);
    unk_94 = (u8 *)func_ov002_02200920();
    unk_8c = 0xb;
}

void Unk_ov122_0229a1b8::func_ov122_022994f4() {
    if (func_ov002_02200908(0)) {
        func_ov122_02297870();
        func_ov002_02200a60(2);
        func_ov122_022979e8();
    }
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov122_0229a1b8::func_ov122_022994c8() {
    unk_b7 = 0;
    func_ov002_02202144(&unk_4104);
    func_ov122_02296a7c(1);
    func_ov002_02200a60(2);
}

void Unk_ov122_0229a1b8::func_ov122_02299474() {
    if (func_ov122_02296de4() == 0) {
        func_ov002_022008c4(0xb, 0, 0, 0x30);
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200a50(0xe);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299408() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_020021a0(3);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        unk_94 = (u8 *)func_ov002_02200920();
        unk_98 = (s32)unk_94;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299368() {
    unk_bc = (u8 *)func_0206ed68();
    func_ov095_02294478(&unk_c0, 1);
    _ZN12Unk_0206d0a013func_0206d39cEi(&unk_3c7c, 3);
    _ZN12Unk_0206d0a013func_0206d288EPv(&unk_3c7c, (u32)unk_bc);
    func_ov122_02296e08(0x10);
    func_ov122_02296df4(0x10);
    unk_a8 = 0;
    _ZN12Unk_020e102813func_0208d9d4Ei(&unk_3e8c, 1);
    _ZN18Unk_ov002_0220455819func_ov002_02202310EiiPKc(&unk_4104, 6, 1, 0);
    _ZN18Unk_ov002_022013ac19func_ov002_022017c4Ev(&unk_4104);
    unk_a4 = 0;
    if (func_020655d8(unk_bc)) {
        func_ov095_0229442c(&unk_c0);
        func_ov122_02296978(0x10);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299334() {
    func_ov095_02294438(&unk_c0);
    _ZN12Unk_0206d0a013func_0206d394Ev(&unk_3c7c);
    func_ov002_02201b04(&unk_4104);
    _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev(&unk_43f8);
}

void Unk_ov122_0229a1b8::func_ov122_02299308() {
    func_ov122_022992c4();
    unk_3e8c.vfunc_0c();
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_022992d4() {
    _ZN12Unk_0206d0a013func_0206d380Ev(&unk_3c7c);
    func_ov095_02294358(&unk_c0, 6);
    func_ov002_02201b58(&unk_4104);
    func_ov122_02299268();
}

void Unk_ov122_0229a1b8::func_ov122_022992c4() { _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev(&unk_43f8); }

void Unk_ov122_0229a1b8::func_ov122_02299268() {
    if (func_ov122_02296988(0x1000)) {
        u32 n = func_ov122_02296f68();
        unk_a4 = func_020512e0(func_ov122_02296f98(), n) * 0x1f / (s32)n;
        if (unk_a4 > 0x1f) {
            unk_a4 = 0x1f;
        }
        func_ov122_02296968(0x1000);
    }
}

extern "C" void func_ov122_02299220() {
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 3);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov122_0229a1b8::func_ov122_02299188() {
    u32 h = data_021f482c;
    func_020026c4("menu/chat2/b_cht_bg.bpl", h, 6, 1, 1, 9);
    func_ov095_022943dc(&unk_c0, "menu/chat2/b_key0.bsc");
    func_ov122_02298ec4();
    func_ov095_022943b4(&unk_c0, 6);
    func_0200261c("menu/chat2/b_cht.bch", h, 6, 0x13d, 0x13d, 0x1e9);
    func_ov002_02202dd4(func_02065c8c(unk_bc), 4);
    _ZN12Unk_0206d0a013func_0206d3f4Ej(&unk_3c7c, 3);
    func_ov122_02298fbc(1, 1);
    _ZN12Unk_0206d0a013func_0206d380Ev(&unk_3c7c);
}

void Unk_ov122_0229a1b8::func_ov122_0229917c() { func_ov095_02293cc0(&unk_c0); }

void Unk_ov122_0229a1b8::func_ov122_02299150() {
    if (func_ov122_02296988(0x10)) {
        _ZN18Unk_ov002_022046cc19func_ov002_022035d8Ev(&unk_43f8);
    } else {
        _ZN18Unk_ov002_022046cc19func_ov002_02203608Ev(&unk_43f8);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299130() {
    _ZN18Unk_ov002_02202fac19func_ov002_02203458Ei(&unk_43f8, 0x22);
    _ZN18Unk_ov002_02202fac19func_ov002_02203268Ev(&unk_43f8);
}

void Unk_ov122_0229a1b8::func_ov122_02298fbc(u32 a, u32 b) {
    u32 lo;
    u32 n;
    u32 flag;
    func_ov122_02296978(0x1000);
    if (a != 0) {
        _ZN12Unk_0206d0a013func_0206d1d4EP16Unk_0206d1d4_SrcPh(&unk_3c7c, unk_bc, unk_3fcc.unk_90);
        _ZN12Unk_0206d0a013func_0206d0fcEPhi(&unk_3c7c, unk_bc + 0x4c, b);
        _ZN12Unk_0206d0a013func_0206d0b8EPh(&unk_3c7c, unk_bc + 0xcc);
    } else {
        switch (unk_aa) {
        case 0:
        case 1:
            _ZN12Unk_0206d0a013func_0206d1d4EP16Unk_0206d1d4_SrcPh(&unk_3c7c, unk_bc, unk_3fcc.unk_90);
            break;
        case 2:
            _ZN12Unk_0206d0a013func_0206d0fcEPhi(&unk_3c7c, unk_bc + 0x4c, b);
            break;
        case 3:
            _ZN12Unk_0206d0a013func_0206d0b8EPh(&unk_3c7c, unk_bc + 0xcc);
            break;
        }
    }
    if (func_ov122_022972f4()) {
        flag = 0;
        u32 y = unk_ae;
        u32 x = unk_ad;
        if (x > y) {
            lo = y;
            n = x - y;
        } else {
            lo = x;
            n = y - x;
        }
    } else {
        flag = 1;
        n = func_ov095_02293da0(&unk_c0);
        if (n != 0) {
            lo = unk_ac - n;
        }
    }
    if (n != 0) {
        switch (unk_aa) {
        case 0:
            _ZN12Unk_0206d0a013func_0206d0a0Ejj(&unk_3c7c, lo, n, flag);
            break;
        case 1:
            lo += unk_bc[0xec] + _ZN12Unk_0206d0a013func_0206d2d4Ev(&unk_3c7c);
            _ZN12Unk_0206d0a013func_0206d0a0Ejj(&unk_3c7c, lo, n, flag);
            break;
        case 2:
            _ZN12Unk_0206ce9813func_0206d018Ejjj(&unk_3c7c, lo, n, flag);
            break;
        case 3:
            func_0206d000(&unk_3c7c, lo, n, flag);
            break;
        }
    }
    func_ov122_02298ec4();
}

void Unk_ov122_0229a1b8::func_ov122_02298ec4() {
    if (unk_aa == 2) {
        u8 c = unk_ac;
        if (func_ov095_02293ff0(&unk_c0, unk_bc + 0x4c, 0x86, &c, 0x80, 0x28, 4, 0x96, 1, 1)) {
            func_ov095_02295340(&unk_c0, 0);
        } else {
            func_ov095_022953c0(&unk_c0, 0);
        }
    } else {
        func_ov095_022953c0(&unk_c0, 0);
    }
    if (func_ov122_022972f4()) {
        func_ov095_02295340(&unk_c0, 0xb);
    } else {
        func_ov095_022953c0(&unk_c0, 0xb);
    }
    if (func_ov122_02296988(0x400)) {
        func_ov095_02295340(&unk_c0, 0xc);
    } else {
        func_ov095_022953c0(&unk_c0, 0xc);
    }
    if (func_ov122_022972f4()) {
        func_ov095_022942c0(&unk_c0);
        func_ov095_02295340(&unk_c0, 6);
    } else if (unk_ac == 0) {
        func_ov095_022942c0(&unk_c0);
    } else {
        func_ov095_02294250(&unk_c0, func_ov122_0229731c());
    }
}

void C::func_ov122_02298d84() {
    if (func_ov002_02200a14(1)) {
        func_ov122_02297a08();
        return;
    }
    BOOL hit = FALSE;
    if (func_ov095_02294324(&unk_c0)) {
        hit = TRUE;
    }
    if (Unk_ov122_02298b70_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        if (_ZN18Unk_ov002_02202fac19func_ov002_02203110Ei(&unk_43f8, 9)) {
            func_ov122_02298820();
            return;
        }
        if (!func_ov122_02296988(0x10)) {
            if (_ZN18Unk_ov002_02202fac19func_ov002_02203110Ei(&unk_43f8, 0)) {
                func_ov122_02298814();
                return;
            }
        }
        if (func_ov095_02293990(&unk_c0)) {
            func_ov095_02294648(&unk_c0, 8, 6, 1);
            func_ov122_02298fbc(0, 1);
            return;
        }
        if (y < 0x48) {
            if (x < 0xe0) {
                if (func_ov122_022975c4()) {
                    func_ov002_02200a58(3);
                    func_ov095_02293dc0(&unk_c0);
                    func_ov122_02298fbc(1, 1);
                    return;
                }
            } else {
                if (func_ov122_02296ee0()) {
                    _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev(&unk_3e8c);
                    func_ov002_02200a58(2);
                    func_ov122_022972dc();
                    func_ov122_02298fbc(1, 1);
                    return;
                }
            }
        }
        if (y >= 0x48) {
            if (!hit) {
                s32 r = func_ov122_02298b14();
                if (r == 0) {
                } else if (r == 1) {
                    func_ov002_02200a58(1);
                }
            }
        }
    }
}

void C::func_ov122_02298d30() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(&unk_c0)) {
        s32 t = func_ov095_02294a40(&unk_c0);
        s32 h = func_ov095_02294864(&unk_c0, t, 8);
        func_ov122_022985d8(h);
        func_ov095_02294d40(&unk_c0, t);
    }
}

void C::func_ov122_02298cf4() {
    unk_ab = 0;
    if (data_021f4770 == 0) {
        func_ov122_022975c0();
        _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(&unk_3e8c);
        func_ov122_02297a24();
    } else {
        func_ov122_02296e80();
    }
}

void C::func_ov122_02298c94() {
    BOOL r;
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        if (unk_ad == unk_ae) {
            func_ov122_02296968(8);
        }
        r = TRUE;
    } else {
        r = func_ov122_022974e8();
        if (r) {
            func_0200402c(0x15);
        }
    }
    if (r) {
        func_ov122_02296d34();
        func_ov122_02298fbc(0, 1);
    }
}

void C::func_ov122_02298c24() {
    if (func_ov002_02200a14(1)) {
        func_ov122_02297940();
    } else if (Unk_ov122_02298b70_Both()) {
        if (_ZN18Unk_ov002_02202fac19func_ov002_02203110Ei(&unk_43f8, 3)) {
            func_ov122_02296ce8(3);
        } else if (_ZN18Unk_ov002_02202fac19func_ov002_02203110Ei(&unk_43f8, 4)) {
            func_ov122_02296ce8(4);
        }
    }
}

void C::func_ov122_02298b70() {
    if (func_0206e61c()) {
        func_ov122_02296978(0x2000);
        func_ov122_02296a48();
    } else if (func_ov002_02200a14(1)) {
        func_ov122_022978c0();
    } else if (Unk_ov122_02298b70_Both()) {
        s32 t = _ZN18Unk_ov002_022013ac19func_ov002_022014acEii(&unk_4104, data_021ef5f0, data_021ef5ec);
        if (t >= 0) {
            func_ov002_02201a3c(&unk_4104, t);
            unk_b6 = _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(&unk_4104, unk_b7, (u8)t);
            func_ov002_02200a58(0x17);
        } else {
            func_ov122_02296a48();
        }
    }
}

s32 C::func_ov122_02298b14() {
    func_ov095_02295194(&unk_c0);
    s32 t = func_ov095_02294a44(&unk_c0, data_021ef5f0, data_021ef5ec);
    if (t == -1) {
        return 0;
    }
    s32 h = func_ov095_02294864(&unk_c0, t, 8);
    s32 r = func_ov122_022985d8(h);
    func_ov095_02294d40(&unk_c0, t);
    func_ov095_02294318(&unk_c0);
    return r;
}

BOOL C::func_ov122_02298a54(BOOL flag) {
    if (func_ov122_022972f4()) {
        func_ov095_02293dc0(&unk_c0);
        func_0200402c(0x35);
    } else {
        u8 a = unk_ac;
        if (a != 0) {
            unk_ad = a;
            unk_ae = unk_ac - 1;
            func_0200402c(0x35);
        } else {
            u8 *q = func_ov122_02296fd4();
            u8 m = unk_aa;
            if ((m == 0 && unk_bc[0xec] == 0) || (m == 1 && unk_bc[0xec] == 0x18) || q[0] == 0) {
                if (flag) {
                    func_ov122_02296d28();
                }
                return FALSE;
            }
            unk_ad = 0;
            unk_ae = 1;
            func_0200402c(0x35);
        }
    }
    func_ov122_02297238();
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return TRUE;
}

BOOL C::func_ov122_0229899c(u32 key) {
    u8 *p = (u8 *)func_ov122_0229731c();
    if (p == 0) {
        return FALSE;
    }
    switch (key) {
    case 0x103:
        p = func_ov095_02293f90(&unk_c0, p);
        break;
    case 0x104:
        p = func_ov095_02293f8c(&unk_c0, p);
        break;
    case 0x105:
        p = func_ov095_02293f88(&unk_c0, p);
        break;
    }
    if (p == 0) {
        return FALSE;
    }
    u8 v = func_ov122_02296f40();
    u8 *q = func_ov122_02296f98();
    u32 sz = func_ov122_02296f68();
    if (!func_ov095_02293f94(&unk_c0, q, p, v, sz, 0x2710)) {
        return FALSE;
    }
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return TRUE;
}

BOOL C::func_ov122_022988b8(u32 a, u32 b) {
    u8 v;
    v = func_ov122_02296f40();
    u8 old = v;
    u8 *p = func_ov122_02296f98();
    u32 sz = func_ov122_02296f68();
    if (unk_aa == 2) {
        if (func_ov095_02293ff0(&unk_c0, p, a, &v, 0x80, 0x28, 4, 0x96, 0, b)) {
            func_ov122_02296f30(v);
            goto ok;
        }
        return FALSE;
    }
    s32 h = 0xa0;
    if (unk_aa != 3) {
        h = h - 0x40;
    }
    if (func_ov095_022940f0(&unk_c0, p, a, &v, sz, h, 0, 1)) {
        switch (unk_aa) {
        case 0:
            if (old != v) {
                unk_bc[0xec] = unk_bc[0xec] + v - old;
            }
            break;
        case 1:
            v = v - unk_bc[0xec];
            break;
        }
        func_ov122_02296f30(v);
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL C::func_ov122_02298874(u32 key) {
    if (func_ov122_022972f4()) {
        func_ov122_02297238();
        func_ov095_02293dc0(&unk_c0);
    }
    BOOL r = func_ov122_022988b8(key, 1);
    func_ov122_02298fbc(0, 1);
    func_ov122_02297340();
    return r;
}

void C::func_ov122_0229882c() {
    unk_8c = 4;
    func_ov002_02200a60(1);
    func_ov122_02296df4(0);
    func_ov122_02296968(4);
    func_ov122_022972dc();
    func_ov095_02293dc0(&unk_c0);
    func_ov122_02298fbc(1, 0);
    func_ov122_02296c70();
}

void C::func_ov122_02298820() { func_ov122_02296ce8(1); }

void C::func_ov122_02298814() { func_ov122_02296ce8(0); }

void C::func_ov122_022987ac() {
    if (func_ov122_022972f4()) {
        u32 a = unk_ae;
        u32 b = unk_ad;
        u32 lo, n;
        if (b > a) {
            lo = a;
            n = b - a;
        } else {
            lo = b;
            n = a - b;
        }
        func_0205125c(unk_3fcc.unk_b8, 0x80);
        func_02051268(func_ov122_02296fd4() + lo, unk_3fcc.unk_b8, n);
        func_ov122_02296978(0x400);
        func_ov095_022923f8(&unk_c0);
        func_ov122_02298ec4();
    }
}

void C::func_ov122_02298714() {
    if (func_ov122_02296988(0x400)) {
        if (func_ov122_022972f4()) {
            func_ov122_02297238();
        }
        func_ov095_02293dc0(&unk_c0);
        func_ov095_02293d94(&unk_c0);
        s32 n = func_020512e0(unk_3fcc.unk_b8, 0x80);
        s32 i;
        for (i = 0; i < n; i++) {
            if (!func_ov122_022988b8(*((u8 *)this + i + 0x4084), 0)) {
                if (i == 0) {
                    func_ov122_02296d28();
                }
                i = n;
            }
        }
        func_ov095_022923ec(&unk_c0);
        func_ov122_02298fbc(0, 1);
        func_ov122_02297340();
        func_ov095_02293d88(&unk_c0);
    }
}

s32 C::func_ov122_022985d8(s32 key) {
    s32 r = 1;
    s32 t = func_ov095_02293dc8(&unk_c0, key, 6);
    if (t != 0) {
        func_ov122_02298fbc(0, r);
        return t;
    }
    if (func_ov095_0229423c(&unk_c0, key)) {
        switch (key) {
        case 0x100:
            func_ov122_02298a54(r);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (!func_ov122_0229899c(key)) {
                func_ov122_02296d28();
            }
            r = 2;
            break;
        case 0x113:
            func_ov122_02298820();
            r = 3;
            break;
        case 0x114:
            func_ov122_02298814();
            r = 3;
            break;
        case 0x118:
            func_ov122_022987ac();
            r = 2;
            break;
        case 0x119:
            func_ov122_02298714();
            r = 2;
            break;
        }
    } else {
        BOOL ok = func_ov122_02298874((u8)key);
        if (func_ov095_02295264(&unk_c0)) {
            func_ov122_022979ac(0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(&unk_c0)) {
            func_ov122_022979ac(0x1c, r);
            return 4;
        }
        if (!ok) {
            func_ov122_02296d28();
        }
        if (key == 0x86) {
            r = 2;
        }
    }
    return r;
}

void C::func_ov122_022984f4() {
    if (func_ov002_022009d4()) {
        func_ov122_02297a24();
        return;
    }
    u8 b = func_ov002_022009c8();
    if (func_ov122_02296988(0x10) == 1) {
        if (func_ov095_02292404(&unk_c0) == 0xd6) {
            if (func_ov002_022009a4()) {
                b &= ~0x20;
            }
        }
    }
    switch (func_ov095_02292458(&unk_c0, b)) {
    case 1:
        _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev(&unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 2:
        _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev(&unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 3:
        _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev(&unk_3ed4);
        func_ov122_02296bf0();
        break;
    case 0:
    default:
        if (func_ov122_02297c14()) return;
        if (func_ov122_02297bcc()) return;
        if (func_ov122_02297b30()) return;
        if (func_ov122_02297a68()) return;
        if (func_ov122_02297ac8()) return;
        if (func_ov122_02297a3c()) return;
        break;
    }
}

void Unk_ov122_0229a1b8::func_ov122_022984c8()
{
    if (!_ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev(&unk_3ed4)) {
        func_ov002_02200a58(unk_b4);
        func_ov122_022999b0();
    }
}

void Unk_ov122_0229a1b8::func_ov122_022983ec()
{
    s32 r4;
    s32 t;
    s32 r;

    if (!_ZN12Unk_020e100c13func_0208d4fcEv(&unk_3ed4)) {
        return;
    }
    r4 = func_ov095_02292404(&unk_c0);
    t = func_ov095_02294864(&unk_c0, r4, 8);
    if (t == 0x112) {
        func_ov002_02200a58(0x10);
        _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev(&unk_3e8c);
        func_ov002_02202e48(&unk_3e8c);
        if (func_ov122_022972f4()) {
            func_ov122_022972dc();
            func_ov122_02298fbc(1, 1);
        } else {
            func_ov122_022972dc();
        }
        func_ov122_02296978(0x200);
        return;
    }
    r = func_ov122_022985d8(t);
    if (r == 1 && (data_021f47d8[0] & 1)) {
        func_ov095_02294318(&unk_c0);
        func_ov002_02200a58(9);
        func_ov095_02294d40(&unk_c0, r4);
    } else if (r == 3) {
    } else if (r == 4) {
        func_ov095_02295194(&unk_c0);
    } else {
        func_ov122_02296b10();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02298394()
{
    s32 r5;

    if ((data_021f47d8[0] & 1) == 0) {
        func_ov122_02296b10();
    } else if (func_ov095_022942e8(&unk_c0)) {
        r5 = func_ov095_02294a40(&unk_c0);
        func_ov122_022985d8(func_ov095_02294864(&unk_c0, r5, 8));
        func_ov095_02294d40(&unk_c0, r5);
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229836c()
{
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_3ed4)) {
        func_ov122_02296af0();
        func_ov002_02200a58(6);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02298320()
{
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov002_02200a58(unk_b4);
    } else if (func_ov095_022942e8(&unk_c0)) {
        func_ov122_022985d8(0x100);
        if (func_ov122_02296988(0x100)) {
            func_ov122_02296b54();
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02298210()
{
    u32 a;
    u32 b;
    if (func_ov002_022009d4()) {
        func_ov122_02297a24();
        return;
    }
    if (func_ov122_02297020((void *)func_ov002_022009c8(), 1)) {
        if (func_ov095_02293da0(&unk_c0) || func_ov122_022972f4()) {
            func_ov095_02293dc0(&unk_c0);
            func_ov122_022972dc();
            func_ov122_02298fbc(1, 1);
        } else {
            func_ov122_022972dc();
        }
        func_ov122_02297340();
        func_ov122_02296b54();
        func_ov122_02298ec4();
        func_0200402c(0xb);
    } else if (!func_ov122_02297b30()) {
        a = unk_9c;
        b = unk_a0;
        if (func_ov122_02297bcc()) {
            if (a != unk_9c || b != unk_a0) {
                func_ov122_02296b54();
            }
        } else {
            if (data_021f47d8[1] & 1) {
                func_ov002_02200a58(0xd);
                func_ov122_02296978(8);
                unk_ad = unk_ac;
                unk_ae = unk_ac;
            }
            if (func_ov122_02297a68()) {
                return;
            }
            if (func_ov122_02297ac8()) {
                return;
            }
            if (func_ov122_02297a3c()) {
                return;
            }
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229819c()
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(0xc);
        if (unk_ad == unk_ae) {
            func_ov122_02296968(8);
        }
    } else {
        if (func_ov122_02297020((void *)func_ov002_022009c8(), 0)) {
            unk_ae = unk_ac;
            func_ov122_02298fbc(0, 1);
            func_ov122_02297340();
            func_ov122_02296b54();
            func_0200402c(0x15);
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229816c()
{
    if ((data_021f47d8[0] & 0x200) == 0) {
        func_ov002_02200a58(unk_b4);
        func_ov122_02298ec4();
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229813c()
{
    if ((data_021f47d8[0] & 0x100) == 0) {
        func_ov002_02200a58(unk_b4);
        func_ov122_02298ec4();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02298118()
{
    if (_ZN12Unk_020e102813func_0208d9a8Ev(&unk_3e8c)) {
        func_ov002_02200a58(0x11);
    }
}

void Unk_ov122_0229a1b8::func_ov122_022980dc()
{
    if ((data_021f47d8[0] & 1) == 0) {
        _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(&unk_3e8c);
        func_ov002_02200a58(0x12);
        func_ov122_022975c0();
    } else {
        func_ov122_02296e28();
    }
}

void Unk_ov122_0229a1b8::func_ov122_022980b0()
{
    if (_ZN12Unk_020e102813func_0208d9a8Ev(&unk_3e8c)) {
        func_ov122_02296b10();
        func_ov122_02296968(0x200);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297f98()
{
    s32 r4;
    s32 r6;
    s32 r5;
    u32 f;

    if (func_ov002_022009d4()) {
        func_ov122_02297994();
        return;
    }
    r4 = func_ov002_022009c8();
    if (data_021f47d8[1] & 1) {
        switch (unk_b6) {
        case 0:
            func_ov122_02296ce8(3);
            break;
        case 1:
            func_ov122_02296ce8(4);
            break;
        }
        _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(&unk_3ed4);
        return;
    }
    r6 = unk_b6;
    if (func_ov002_0220126c((void *)r4)) {
        if (unk_b6 != 0) {
            unk_b6 = *(volatile u8 *)&unk_b6 - 1;
        }
    } else if (func_ov002_0220125c((void *)r4)) {
        if (unk_b6 < 1) {
            unk_b6 = *(volatile u8 *)&unk_b6 + 1;
        }
    }
    r4 = unk_b6;
    if (r6 != r4) {
        r6 = _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei(&unk_43f8, data_ov122_0229a004[r4]);
        r5 = _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei(&unk_43f8, *(u8 *)((u32)data_ov122_0229a004 + r4));
        func_ov122_02296bbc(r6, r5);
    } else {
        f = data_021f47d8[1];
        if (f & 8) {
            func_ov122_02296c70();
            func_ov122_02296ce8(3);
        } else if (f & 2) {
            func_ov122_02296c70();
            func_ov122_02296ce8(4);
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297f04()
{
    u32 f;

    if (func_0206e61c()) {
        func_ov122_02296978(0x2000);
        func_ov122_02296a48();
    } else if (func_ov002_022009d4()) {
        func_ov122_02297928();
    } else {
        if (func_ov002_022019d0(&unk_4104, func_ov002_022009c8(), &unk_b6, 0)) {
            func_ov122_02296aa4();
        }
        f = data_021f47d8[1];
        if (f & 1) {
            _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(&unk_3ed4);
            func_ov002_02200a58(0x15);
        } else if (f & 2) {
            func_ov122_02296a48();
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297eb4()
{
    if (_ZN12Unk_020e100c13func_0208d4fcEv(&unk_3ed4)) {
        func_ov002_02201a3c(&unk_4104, unk_b6);
        unk_b6 = _ZN18Unk_ov002_022013ac19func_ov002_0220144cEjj(&unk_4104, unk_b7, unk_b6);
        func_ov002_02200a58(0x17);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297e84()
{
    if (_ZN18Unk_ov002_022013ac19func_ov002_022017b4Ev(&unk_4104)) {
        if (func_0206ef00()) {
            func_ov122_022978c0();
        } else {
            func_ov122_02297928();
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297e50()
{
    if (func_ov002_02201a28(&unk_4104)) {
        func_ov002_02202064(&unk_4104, 0);
        func_ov002_02200a58(0x18);
        func_ov122_02296c70();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297d78()
{
    s32 r;

    if (!_ZN18Unk_ov002_022013ac19func_ov002_022017a4Ev(&unk_4104)) {
        return;
    }
    r = _ZN18Unk_ov002_022013ac19func_ov002_022013e4EPvj(&unk_4104, (u32)unk_bc, unk_b6);
    switch (r) {
    case 1:
        _ZN12Unk_0206d0a013func_0206d288EPv(&unk_3c7c, (u32)unk_bc);
        func_ov122_02298fbc(1, 0);
        unk_8c = 0xa;
        func_ov002_02200a60(1);
        break;
    case 2:
        unk_b7 = unk_b7 + 1;
        if (unk_b7 >= _ZN18Unk_ov002_022013ac19func_ov002_02201490Ev(&unk_4104)) {
            unk_b7 = 0;
        }
        func_ov122_02296a7c(0);
        break;
    case 3:
        if (func_ov122_02296988(0x2000)) {
            func_ov122_02299870();
        } else {
            unk_8c = 0xa;
            func_ov002_02200a60(1);
        }
        break;
    default:
        unk_8c = 0xa;
        func_ov002_02200a60(1);
        break;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02297c90()
{
    s32 a;
    s32 b;
    s32 c;

    if (_ZN12Unk_020e100c13func_0208d534Ev(&unk_3ed4)) {
        if (!_ZN12Unk_020e100c13func_0208d4fcEv(&unk_3ed4)) {
            return;
        }
    }
    if (_ZN18Unk_ov002_02202fac19func_ov002_0220308cEv(&unk_43f8)) {
        if (!_ZN12Unk_020e100c13func_0208d534Ev(&unk_3ed4)) {
            return;
        }
        a = _ZN18Unk_ov002_02202fac19func_ov002_0220306cEv(&unk_43f8);
        b = _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei(&unk_43f8, -1);
        c = _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei(&unk_43f8, -1);
        _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, a + b, a + c);
        return;
    }
    switch (unk_b8) {
    case 0:
        unk_b5 = 0xc;
        func_ov122_0229882c();
        break;
    case 1:
        unk_b5 = 6;
        func_ov122_0229699c();
        func_ov122_0229882c();
        break;
    case 2:
        break;
    case 3:
        func_ov122_022998b0(0);
        break;
    case 4:
        unk_8c = 8;
        func_ov002_02200a60(1);
        func_ov122_02298fbc(1, 1);
        break;
    }
    func_ov122_02296c70();
}

void Unk_ov122_0229a1b8::func_ov122_02297c68()
{
    func_ov095_02294324(&unk_c0);
    if (_ZN18Unk_ov002_022040ec19func_ov002_02204234Ei(&unk_455c, 1)) {
        func_ov122_022979e8();
    }
}

BOOL Unk_ov122_0229a1b8::func_ov122_02297c14()
{
    s32 r4;

    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    r4 = func_ov095_02292404(&unk_c0);
    if (r4 == -1) {
        return FALSE;
    }
    func_ov095_02294864(&unk_c0, r4, 8);
    func_ov095_02294d40(&unk_c0, r4);
    func_ov122_02296b34();
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::func_ov122_02297bcc()
{
    if ((data_021f47d8[0] & 2) == 0) {
        return FALSE;
    }
    func_ov122_022985d8(0x100);
    func_ov095_02294318(&unk_c0);
    unk_b4 = unk_8d;
    func_ov002_02200a58(0xb);
    return TRUE;
}

BOOL C::func_ov122_02297b30() {
    if ((data_021f47d8[1] & 0x800) == 0) return FALSE;
    if (func_ov122_02296988(0x100)) {
        func_ov122_02296968(0x100);
    } else {
        func_ov122_02296978(0x100);
        func_ov122_02296d34();
    }
    if (func_ov095_02295270(&unk_c0, -1)) {
        if (func_ov122_02296988(0x100)) {
            _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev(&unk_3ed4);
            func_ov002_02200a58(0xc);
        } else {
            _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev(&unk_3ed4);
            func_ov002_02200a58(6);
        }
        func_ov122_02296bf0();
    } else {
        func_ov122_02296bf0();
    }
    return TRUE;
}

BOOL C::func_ov122_02297ac8() {
    if ((data_021f47d8[1] & 0x100) == 0) return FALSE;
    if (func_ov095_02295440(&unk_c0, 0xc)) return FALSE;
    func_ov122_022985d8(0x119);
    func_ov095_02294d40(&unk_c0, 0xdc);
    func_ov122_02296b54();
    unk_b4 = unk_8d;
    func_ov002_02200a58(0xf);
    return TRUE;
}

BOOL C::func_ov122_02297a68() {
    if ((data_021f47d8[1] & 0x200) == 0) return FALSE;
    if (func_ov095_02295440(&unk_c0, 0xb)) return FALSE;
    func_ov122_022985d8(0x118);
    func_ov095_02294d40(&unk_c0, 0xdb);
    unk_b4 = unk_8d;
    func_ov002_02200a58(0xe);
    return TRUE;
}

BOOL C::func_ov122_02297a3c() {
    if ((data_021f47d8[1] & 8) == 0) return FALSE;
    func_ov122_02296c70();
    func_ov122_02298820();
    return TRUE;
}

void C::func_ov122_02297a24() {
    func_ov122_02296c70();
    func_ov002_02200a58(0);
}

void C::func_ov122_02297a08() {
    func_ov002_02200980();
    func_ov122_02296c94();
    func_ov002_02200a58(6);
}

void C::func_ov122_022979e8() {
    if (func_0206ef0c()) {
        func_ov122_02297a24();
    } else {
        func_ov122_02297a08();
    }
}

void C::func_ov122_022979ac(u8 a, s32 b) {
    volatile u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = a;
    _ZN18Unk_ov002_022040ec19func_ov002_02204340EPhij(&unk_455c, (void *)buf, b, 0);
    func_ov002_02200a58(0x1a);
    func_ov122_02296c70();
}

void C::func_ov122_02297994() {
    func_ov122_02296c70();
    func_ov002_02200a58(4);
}

void C::func_ov122_02297940() {
    func_ov002_02200980();
    func_ov122_02296c94();
    s32 a = _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei(&unk_43f8, 4);
    s32 b = _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei(&unk_43f8, 4);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, a, b);
    unk_b6 = 1;
    func_ov002_02200a58(0x13);
}

void C::func_ov122_02297928() {
    func_ov122_02296c70();
    func_ov002_02200a58(5);
}

void C::func_ov122_022978c0() {
    func_ov002_02200980();
    func_ov122_02296c94();
    unk_b6 = _ZN18Unk_ov002_022013ac19func_ov002_02201494Ev(&unk_4104) - 1;
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(&unk_4104);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(&unk_4104, unk_b6);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, a, b);
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(&unk_3ed4, 7);
    func_ov002_02200a58(0x14);
}

void C::func_ov122_02297870() {
    func_ov122_02296978(4);
    unk_9c = 0x30;
    unk_a0 = 0x40;
    unk_aa = 2;
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(0);
    func_ov122_022972dc();
    func_ov095_022951e4(&unk_c0);
    func_ov122_02298ec4();
}

void C::func_ov122_02297838() {
    u8 r = func_ov122_022977bc(unk_9c, &unk_aa);
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(r);
    func_ov122_02297424();
}

u8 C::func_ov122_022977bc(s32 a, u8 *p) {
    u8 out;
    func_ov095_02293f2c(&unk_c0, unk_3fcc.unk_90, 0x28, 0xa0, (u8)(a - 0x30), &out);
    s32 e = unk_bc[0xec];
    s32 s = e + _ZN12Unk_0206d0a013func_0206d2d4Ev(&unk_3c7c);
    s32 h = (e + s) >> 1;
    if (out < h) {
        *p = 0;
        if (out > e) out = e;
    } else {
        *p = 1;
        if (out < s) out = 0;
        else out = out - s;
    }
    return out;
}

void C::func_ov122_0229771c(s32 flag) {
    unk_aa = 2;
    func_ov122_02296978(0x1000);
    if (unk_a0 < 0x40) unk_a0 = 0x40;
    if (unk_a0 >= 0x80) unk_a0 = 0x7f;
    s32 i = (unk_a0 - 0x40) >> 4;
    s32 m = _ZN12Unk_0206ce9813func_0206cf34Ev(&unk_3c7c);
    if (i > m) i = m;
    else flag = 0;
    unk_a0 = i * 16 + 0x40;
    if (flag != 0 && unk_a0 - unk_b2 < 8) {
        func_ov122_02297690();
    } else {
        u8 r = func_ov122_022976c8(i, (u32 *)&unk_9c);
        func_ov122_02296f30(r);
    }
}

u8 C::func_ov122_022976c8(s32 idx, u32 *p) {
    s32 o = _ZN12Unk_0206ce9813func_0206cf40Ev(&unk_3c7c)[idx];
    u8 out;
    s32 t = func_ov095_02293f2c(&unk_c0, unk_bc + 0x4c + o, 0x28, 0x96, (u8)(*p - 0x30), &out);
    *p = t + 0x30;
    return (u8)(out + o);
}

void C::func_ov122_02297690() {
    unk_aa = 3;
    func_ov122_02296978(0x1000);
    unk_a0 = 0x88;
    u8 r = func_ov122_02297630((u32 *)&unk_9c);
    func_ov122_02296f30(r);
}

u8 C::func_ov122_02297630(u32 *p) {
    u8 v = (u8)(*p - 0x30);
    s32 r4 = 0xa0 - func_02051348(unk_bc + 0xcc, 0x20);
    u8 out;
    if (r4 > v) {
        out = 0;
        *p = r4 + 0x30;
    } else {
        s32 t = func_ov095_02293f2c(&unk_c0, unk_bc + 0xcc, 0x20, 0xa0, (u8)(v - r4), &out);
        *p = r4 + (t + 0x30);
    }
    return out;
}

BOOL C::func_ov122_022975c4() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    if (y < 0) return FALSE;
    if (y > 0x4f) y = 0x4f;
    y += unk_b3;
    if (x < 0x20 || x >= 0xe0) return FALSE;
    if (x < 0x30) x = 0x30;
    func_ov122_0229747c(x, y, 1);
    func_ov122_02296978(8);
    unk_ad = unk_ac;
    unk_ae = unk_ac;
    return TRUE;
}

void C::func_ov122_022975c0() {
}

BOOL C::func_ov122_022974e8() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    u8 old = unk_ac;
    if (a < 0x30) a = 0x30;
    b += unk_b3;
    u8 m = unk_aa;
    switch (m) {
    case 0:
    case 1:
        unk_9c = a;
        func_ov122_02297838();
        if (unk_aa != m) {
            unk_aa = m;
            func_ov122_02296978(0x1000);
            if (m == 0) {
                func_ov122_02296f30(unk_bc[0xec]);
            } else {
                func_ov122_02296f30(0);
            }
            func_ov122_02297424();
        }
        break;
    case 2:
        unk_9c = a;
        unk_a0 = b;
        func_ov122_0229771c(0);
        break;
    case 3:
        unk_9c = a;
        func_ov122_02297690();
        break;
    }
    unk_ae = unk_ac;
    if (unk_ac != old) return TRUE;
    return FALSE;
}

void C::func_ov122_0229747c(s32 a, s32 b, s32 c) {
    if (!func_ov122_02296988(0x10) && b < 0x3c) {
        unk_9c = a;
        func_ov122_02297838();
    } else if (b < 0x84) {
        if (b < 0x40) b = 0x40;
        else if (b >= 0x80) b = 0x7f;
        unk_9c = a;
        unk_a0 = b;
        func_ov122_0229771c(c);
    } else {
        unk_9c = a;
        func_ov122_02297690();
    }
    func_ov122_02296d34();
}

void C::func_ov122_02297424() {
    u32 v = unk_ac;
    if (unk_aa == 1) {
        s32 t = _ZN12Unk_0206d0a013func_0206d2d4Ev(&unk_3c7c);
        v += unk_bc[0xec] + t;
    }
    unk_9c = (u8)(func_02051348(unk_3fcc.unk_90, v) + 0x30);
    unk_a0 = 0x28;
}

void C::func_ov122_022973cc() {
    s32 t = _ZN12Unk_0206ce9813func_0206cefcEi(&unk_3c7c, unk_ac);
    unk_a0 = t * 16 + 0x40;
    s32 o = _ZN12Unk_0206ce9813func_0206cf40Ev(&unk_3c7c)[t];
    unk_9c = (u8)(func_02051348(unk_bc + 0x4c + o, unk_ac - o) + 0x30);
}

void C::func_ov122_02297380() {
    u8 t = (u8)(func_02051348(unk_bc + 0xcc, unk_ac) + 0x30);
    unk_9c = t;
    unk_9c = unk_9c + (0xa0 - func_02051348(unk_bc + 0xcc, 0x20));
    unk_a0 = 0x88;
}

void C::func_ov122_02297340() {
    switch (unk_aa) {
    case 0:
    case 1:
        func_ov122_02297424();
        break;
    case 2:
        func_ov122_022973cc();
        break;
    case 3:
        func_ov122_02297380();
        break;
    }
    func_ov122_02296d34();
}

u8 C::func_ov122_0229731c() {
    if (unk_ac == 0) return 0;
    return func_ov122_02296fd4()[unk_ac - 1];
}

BOOL C::func_ov122_022972f4() {
    if (!func_ov122_02296988(8) || unk_ad == unk_ae) return FALSE;
    return TRUE;
}

void C::func_ov122_022972dc() {
    unk_ad = 0;
    unk_ae = 0;
    func_ov122_02296968(8);
}

void C::func_ov122_02297238() {
    u32 a = unk_ae;
    u32 b = unk_ad;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    u8 *p = func_ov122_02296f98();
    s32 q = func_ov122_02296f68();
    switch (unk_aa) {
    case 0:
        unk_bc[0xec] = unk_bc[0xec] - (hi - lo);
        break;
    case 1: {
        u32 o = unk_bc[0xec];
        lo += o;
        hi += o;
        break;
    }
    }
    u8 r = (u8)func_ov095_02293fb4(&unk_c0, p, lo, hi, q);
    if (unk_aa == 1) {
        r = (u8)(r - unk_bc[0xec]);
    }
    func_ov122_02296f30(r);
    func_ov122_022972dc();
}

BOOL Unk_ov122_0229a1b8::func_ov122_02297020(void *pad, s32 flag) {
    if (pad == 0) {
        return FALSE;
    }
    u8 mode = unk_aa;
    u8 idx = unk_ac;
    s32 cnt = _ZN12Unk_0206ce9813func_0206cf34Ev(&unk_3c7c);
    s32 lim;
    s32 sel;
    s32 n;
    u32 saved;
    switch (mode) {
    case 0:
    case 1:
        sel = -1;
        lim = sel;
        if (func_ov002_0220127c(pad)) {
            sel = 0;
        }
        break;
    case 2:
        sel = (unk_a0 - 0x40) >> 4;
        lim = sel;
        if (func_ov002_0220128c(pad)) {
            sel = sel - 1;
        } else if (func_ov002_0220127c(pad)) {
            sel = sel + 1;
            if (sel > cnt) {
                sel = 4;
            }
        }
        break;
    case 3:
        sel = 4;
        lim = sel;
        if (func_ov002_0220128c(pad)) {
            sel = sel - 1;
        }
        break;
    default:
        sel = 0;
        lim = sel;
        break;
    }
    saved = unk_9c;
    if (func_ov122_02296988(0x10)) {
        if (sel == -1) {
            sel = 0;
        }
    }
    if (sel != lim) {
        if (sel == -1) {
            idx = func_ov122_022977bc(saved, &mode);
        } else if (sel >= 4) {
            mode = 3;
            idx = func_ov122_02297630(&saved);
        } else {
            mode = 2;
            idx = func_ov122_022976c8(sel, &saved);
        }
    }
    if (func_ov002_0220126c(pad)) {
        if (idx != 0) {
            idx = idx - 1;
        } else if (mode == 1) {
            idx = unk_bc[0xec];
            mode = 0;
        }
    } else if (func_ov002_0220125c(pad)) {
        switch (mode) {
        case 0:
            n = unk_bc[0xec];
            break;
        case 1:
            n = func_020512e0(unk_bc + 0x34, 0x18) - unk_bc[0xec];
            break;
        case 2:
            n = func_020512e0(unk_bc + 0x4c, 0x80);
            break;
        case 3:
            n = func_020512e0(unk_bc + 0xcc, 0x20);
            break;
        }
        if (idx + 1 <= n) {
            idx = idx + 1;
        } else if (mode == 0) {
            idx = 0;
            mode = 1;
        }
    }
    if (mode != unk_aa && flag == 0) {
        return FALSE;
    }
    if (mode == unk_aa && idx == unk_ac) {
        return FALSE;
    }
    unk_aa = mode;
    func_ov122_02296978(0x1000);
    func_ov122_02296f30(idx);
    return TRUE;
}

u8 *Unk_ov122_0229a1b8::func_ov122_02296fd4() {
    switch (unk_aa) {
    case 0:
        return unk_bc + 0x34;
    case 1:
        return unk_bc + 0x34 + unk_bc[0xec];
    case 2:
        return unk_bc + 0x4c;
    case 3:
        return unk_bc + 0xcc;
    default:
        return 0;
    }
}

u8 *Unk_ov122_0229a1b8::func_ov122_02296f98() {
    switch (unk_aa) {
    case 0:
    case 1:
        return unk_bc + 0x34;
    case 2:
        return unk_bc + 0x4c;
    case 3:
        return unk_bc + 0xcc;
    default:
        return 0;
    }
}

u32 Unk_ov122_0229a1b8::func_ov122_02296f68() {
    switch (unk_aa) {
    case 0:
    case 1:
        return 0x18;
    case 2:
        return 0x80;
    case 3:
        return 0x20;
    default:
        return 0;
    }
}

u8 Unk_ov122_0229a1b8::func_ov122_02296f40() {
    if (unk_aa == 1) {
        return unk_ac + unk_bc[0xec];
    }
    return unk_ac;
}

void Unk_ov122_0229a1b8::func_ov122_02296f30(u32 v) {
    unk_ac = v;
    unk_ab = 0x10;
}

BOOL Unk_ov122_0229a1b8::func_ov122_02296ee0() {
    if (_ZN18Unk_ov002_022046b019func_ov002_02202f18Eii(&unk_3e8c, data_021ef5f0, data_021ef5ec)) {
        unk_b0 = data_021ef5ec;
        unk_b1 = unk_b2;
        unk_af = unk_b2;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov122_0229a1b8::func_ov122_02296e80() {
    s32 n = unk_b1 + (((s32)(data_021ef5ec - unk_b0) >> 1) << 2);
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    func_ov122_02296e08(n);
    s32 d = unk_af - n;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_3e8c);
        unk_af = n;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02296e28() {
    s32 n;
    s32 old = unk_b2;
    n = old;
    u32 k = data_021f47d8[0];
    if (k & 0x40) {
        n = old - 4;
    } else if (k & 0x80) {
        n = old + 4;
    }
    if (n < 0) {
        n = 0;
    }
    if (n > 0x58) {
        n = 0x58;
    }
    if (n != old) {
        func_ov002_02202e54(&unk_3e8c);
    }
    func_ov122_02296e08(n);
}

void Unk_ov122_0229a1b8::func_ov122_02296e08(s32 v) {
    unk_b2 = v;
    unk_b3 = unk_b2;
    func_ov122_02296978(0x800);
}

void Unk_ov122_0229a1b8::func_ov122_02296df4(s32 v) {
    unk_b3 = v;
    func_ov122_02296978(0x800);
}

BOOL Unk_ov122_0229a1b8::func_ov122_02296de4() { return func_ov122_02296988(0x800); }

void Unk_ov122_0229a1b8::func_ov122_02296d68() {
    u32 b3 = unk_b3;
    u32 b2 = unk_b2;
    if (b2 == b3) {
        func_ov122_02296968(0x800);
    } else if (b2 < b3) {
        *(volatile u8 *)&unk_b2 = *(volatile u8 *)&unk_b2 + 8;
        u32 t3 = *(volatile u8 *)&unk_b3;
        if (*(volatile u8 *)&unk_b2 > t3) {
            unk_b2 = t3;
        }
    } else if (b2 < 8) {
        unk_b2 = b3;
    } else {
        *(volatile u8 *)&unk_b2 = *(volatile u8 *)&unk_b2 - 8;
        u32 t3 = *(volatile u8 *)&unk_b3;
        if (*(volatile u8 *)&unk_b2 < t3) {
            unk_b2 = t3;
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02296d34() {
    s32 v = unk_a0 - unk_b3;
    if (v < 0x18) {
        func_ov122_02296df4(unk_b3 - (0x18 - v));
    } else if (v > 0x30) {
        func_ov122_02296df4(unk_b3 + (v - 0x30));
    }
}

void Unk_ov122_0229a1b8::func_ov122_02296d28() { func_0200402c(0x34); }

void Unk_ov122_0229a1b8::func_ov122_02296ce8(u32 i) {
    _ZN18Unk_ov002_02202fac19func_ov002_022030acEh(&unk_43f8, data_ov122_0229a008[i]);
    unk_b8 = i;
    func_ov002_02200a58(0x19);
    func_0200402c(data_ov122_0229a010[i]);
}

void Unk_ov122_0229a1b8::func_ov122_02296c94() {
    func_ov122_02296968(0x100);
    func_ov095_022924f0(&unk_c0);
    s32 a = func_ov095_02292580(&unk_c0);
    s32 b = func_ov095_02292544(&unk_c0);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, a, b);
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(&unk_3ed4, 1);
    func_ov122_02296af0();
}

void Unk_ov122_0229a1b8::func_ov122_02296c70() {
    _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei(&unk_3ed4, 0);
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296bf0() {
    if (func_ov122_02296988(0x100)) {
        _ZN18Unk_ov002_02202d9819func_ov002_0220298cEiiih(&unk_3ed4, unk_9c, unk_a0 - unk_b3, 3, 2);
        unk_b4 = 0xc;
    } else {
        s32 a = func_ov095_02292580(&unk_c0);
        s32 b = func_ov095_02292544(&unk_c0);
        _ZN18Unk_ov002_02202d9819func_ov002_0220298cEiiih(&unk_3ed4, a, b, 3, 2);
        unk_b4 = 6;
    }
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296bbc(s32 a, s32 b) {
    _ZN18Unk_ov002_02202d9819func_ov002_0220298cEiiih(&unk_3ed4, a, b, 3, 2);
    unk_b4 = unk_8d;
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296b54() {
    if (func_ov122_02296988(0x100)) {
        _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, unk_9c, unk_a0 - unk_b3);
    } else {
        s32 a = func_ov095_02292580(&unk_c0);
        s32 b = func_ov095_02292544(&unk_c0);
        _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii(&unk_3ed4, a, b);
    }
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296b34() {
    _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev(&unk_3ed4);
    func_ov002_02200a58(8);
}

void Unk_ov122_0229a1b8::func_ov122_02296b10() {
    func_ov095_02295194(&unk_c0);
    _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev(&unk_3ed4);
    func_ov002_02200a58(0xa);
}

void Unk_ov122_0229a1b8::func_ov122_02296af0() {
    _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev(&unk_3ed4);
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02296aa4() {
    s32 a = _ZN18Unk_ov002_022013ac19func_ov002_022014a4Ev(&unk_4104);
    s32 b = _ZN18Unk_ov002_022013ac19func_ov002_02201498Ei(&unk_4104, unk_b6);
    _ZN18Unk_ov002_02202d9819func_ov002_02202a18Eiii(&unk_3ed4, a, b, 2);
    unk_b4 = 0x14;
    func_ov002_02200a58(7);
}

void Unk_ov122_0229a1b8::func_ov122_02296a7c(u32 a) {
    func_ov002_022020cc(&unk_4104, unk_b7, a);
    func_ov002_02200a58(0x16);
}

void Unk_ov122_0229a1b8::func_ov122_02296a48() {
    func_0200402c(0x28);
    unk_b6 = 0xf;
    func_ov002_02202064(&unk_4104, 1);
    func_ov002_02200a58(0x18);
    func_ov122_02296c70();
}

void Unk_ov122_0229a1b8::func_ov122_02296a28() {
    func_0209750c();
    _ZN12Unk_0209865c13func_02098750Ev();
    func_02065470(_ZN12Unk_02097d1c13func_02097e00Ev(), unk_bc);
}

void Unk_ov122_0229a1b8::func_ov122_022969d4(u8 *src, u32 n) {
    func_020a78a4(&unk_3fcc);
    _ZN12Unk_020e2a7813func_020a7aa0EP12Unk_020e2a60ii(&unk_3f38, &unk_3fcc, 0, 0);
    if (func_020b30bc(&unk_3f38)) {
        _ZN12Unk_020e2a6013func_020a77f8EP12Unk_020e2a78(&unk_3fcc, &unk_3f38);
        func_02050e90(&unk_3fcc, src, n);
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229699c() {
    func_ov122_022969d4(unk_bc + 0x34, 0x18);
    func_ov122_022969d4(unk_bc + 0xcc, 0x20);
    func_ov122_022969d4(unk_bc + 0x4c, 0x80);
}

BOOL Unk_ov122_0229a1b8::func_ov122_02296988(u32 mask) {
    if (unk_a8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov122_0229a1b8::func_ov122_02296978(u32 mask) { unk_a8 = unk_a8 | mask; }

void Unk_ov122_0229a1b8::func_ov122_02296968(u32 mask) { unk_a8 = unk_a8 & ~mask; }

