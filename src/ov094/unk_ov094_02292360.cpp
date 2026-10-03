#include "types.h"

struct Unk_ov094_02292360_Obj {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16[0x1c];
    u16 unk_32;
};

struct Unk_ov094_022923a4_Pad {
    s32 v[2];
    Unk_ov094_022923a4_Pad() {}
    ~Unk_ov094_022923a4_Pad() {}
};

#define IN(x, lo, hi) ((x) >= (lo) && (x) <= (hi))
struct Unk_ov094_02292d6c_Ent8 {
    u8 b[8];
};

struct Unk_ov094_02292d6c_Obj38 {
    u8 b[0x38];
};

struct Unk_ov094_02292d6c_Rec {
    u32 unk_00;
    u32 id : 10;
    u32 pad : 2;
    u32 c : 4;
    u32 hi : 16;
};

struct Unk_ov094_02292d6c {
    /* 0x000 */ u32 unk_00;
    /* 0x004 */ u8 unk_04[0x4];
    /* 0x008 */ u16 unk_08;
    /* 0x00a */ u8 unk_0a[4];
    /* 0x00e */ u8 unk_0e;
    /* 0x00f */ u8 unk_0f;
    /* 0x010 */ u8 unk_10;
    /* 0x011 */ u8 unk_11[3];
    /* 0x014 */ u8 unk_14;
    /* 0x015 */ u8 unk_15[0x23];
    /* 0x038 */ u8 unk_38[0xa8];
    /* 0x0e0 */ u8 unk_e0[0x80];
    /* 0x160 */ u8 unk_160[0x24];
    /* 0x184 */ u8 unk_184[0x808];
    /* 0x98c */ Unk_ov094_02292d6c_Obj38 unk_98c[3];
    /* 0xa34 */ u16 *unk_a34;
    /* 0xa38 */ u32 unk_a38[2];
    /* 0xa40 */ u32 unk_a40[2];
    /* 0xa48 */ u32 unk_a48[2];
    /* 0xa50 */ s32 unk_a50;
    /* 0xa54 */ u16 unk_a54;
    /* 0xa56 */ u8 unk_a56;
    /* 0xa57 */ u8 unk_a57;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ u8 unk_a59;
    /* 0xa5a */ u8 unk_a5a;
    /* 0xa5b */ u8 unk_a5b;
    /* 0xa5c */ u8 unk_a5c;
};

typedef Unk_ov094_02292d6c S;
typedef Unk_ov094_02292d6c_Ent8 Ent8;
typedef Unk_ov094_02292d6c_Rec Rec;

void operator delete(void *p);

struct Unk_ov094_02294a40 {
    u8 unk_04[0x800];
    u8 unk_804;

    Unk_ov094_02294a40();
    virtual ~Unk_ov094_02294a40();
    u8 *func_ov094_02293ac8(s32 idx);
    u8 *func_ov094_02293b08(s32 idx);
    void func_ov094_02293b54();
};

struct Unk_ov094_02294a50 {
    u8 unk_04[0x180];
    Unk_ov094_02294a40 unk_184;
    u8 unk_98c[0xa8];
    u16 *unk_a34;
    u8 unk_a38[8];
    u8 unk_a40[8];
    u8 unk_a48[8];
    u32 unk_a50;
    u8 unk_a54[2];
    u8 unk_a56;
    u8 unk_a57;
    u8 unk_a58;
    u8 unk_a59;
    u8 unk_a5a[2];
    u8 unk_a5c;

    Unk_ov094_02294a50();
    virtual ~Unk_ov094_02294a50();
};

struct Unk_ov094_02293c04_Rec {
    u8 unk_00[0x26];
    volatile u8 unk_26;
    u8 unk_27;
};

struct Unk_ov094_02293ca0_Obj {
    s32 unk_00;
    u8 *volatile unk_04;
    u32 unk_08[2];
};

struct Unk_ov094_022937e4_Ent {
    s32 unk_00;
    u32 unk_04;
};
struct Unk_ov094_02294bb4_Bits {
    u32 pad;
    u16 v;
};

struct Unk_ov094_Bits8 {
    u32 unk_00[2];
};

// Vtable 0x02294bd4
class Unk_ov094_02294bd4 {
public:
    Unk_ov094_02294bd4();
    virtual ~Unk_ov094_02294bd4();

    void func_ov094_02293f34(s32 a, s32 b, s32 c);
    void func_ov094_02293f64(s32 a, s32 b, s32 c, void *d);
    void func_ov094_02293f94(s32 a, s32 b);
    void func_ov094_02293fc4(s32 a, s32 b, u32 c, void *e, void *f);
    s32 func_ov094_0229403c(void *o);
    void func_ov094_0229405c(s32 a, s32 b, void *o);
    void func_ov094_02294104(s32 a, s32 b);
    void func_ov094_02294138(s32 a, s32 b);
    void func_ov094_0229416c(s32 a, s32 b);
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_022941e0(s32 i);
    BOOL func_ov094_022941ec(s32 i);
    void func_ov094_022941f8(u32 flags);
    void func_ov094_022942f4(s32 i);
    void func_ov094_02294318(s32 i, s32 x);
    void *func_ov094_0229433c(s32 i);
    void func_ov094_022943a4(s32 i);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 v);
    void func_ov094_022943f8();
    u32 func_ov094_02294400();
    BOOL func_ov094_02294410(s32 v);
    void func_ov094_02294420(void *out, s32 idx);
    void func_ov094_02294440(void *out, void *o);
    u32 func_ov094_02294570(s32 a, s32 b, s32 start, u8 end);
    u32 func_ov094_022945c8(s32 a, s32 b);
    u32 func_ov094_022945dc(s32 a, s32 b);
    u32 func_ov094_022945f0(s32 a, s32 b);
    u32 func_ov094_02294610(s32 a, s32 b);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 x);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ Unk_ov094_Bits8 unk_08;
    /* 0x10 */ Unk_ov094_Bits8 unk_10;
    /* 0x18 */ Unk_ov094_Bits8 unk_18;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 unk_24;
    /* 0x25 */ u8 unk_25;
    /* 0x26 */ u8 unk_26;
    /* 0x27 */ u8 unk_27;
};

// symbols.txt names of main functions (called with the object first)
#define func_02062564 _ZN12Unk_020dd32413func_02062564EPt
#define func_0206260c _ZN12Unk_020dd324D1Ev
#define func_0206267c _ZN12Unk_020dd324C1Ev
#define func_02063870 _ZN12Unk_020dd38cD1Ev
#define func_02063888 _ZN12Unk_020dd38cC1Ev
#define func_02065578 _ZN12Unk_0206555413func_02065578Ev
#define func_020655d0 _ZN12Unk_0206555413func_020655d0Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define func_02089ac0 _ZN12Unk_020e0d9813func_02089ac0EP6StrBuf
#define func_02089f30 _ZN12Unk_020e0d80D1Ev
#define func_02089f44 _ZN12Unk_020e0d80C1Ev
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78
#define func_0209411c _ZN12Unk_020940a013func_0209411cEv
#define func_02097d1c _ZN12Unk_02097d1c13func_02097d1cEi
#define func_02097e68 _ZN12Unk_02097d1c13func_02097e68Ei
#define func_02097eb0 _ZN12Unk_02097d1c13func_02097eb0Ei
#define func_02097f6c _ZN12Unk_02097d1c13func_02097f6cEi
#define func_02098744 _ZN12Unk_0209865c13func_02098744Ev
#define func_02098750 _ZN12Unk_0209865c13func_02098750Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_020a7bd8 _ZN12Unk_020e2a7813func_020a7bd8EPS_
#define func_020b851c _ZN12Unk_020e460813func_020b851cEjjhjjjj
#define func_020b85f8 _ZN12Unk_020e4608C1Ev
#define func_020b8670 _ZN12Unk_020e45f813func_020b8670Ejhj
#define func_020b86c0 _ZN12Unk_020e45f813func_020b86c0Ejhjj
#define func_020b8714 _ZN12Unk_020e45f813func_020b8714Ejhjjj
#define func_020b87d0 _ZN12Unk_020e45f813func_020b87d0Ev
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

void operator delete(void *p);

extern "C" {
void func_0200402c(s32 a);
void func_02003ff4(s32 a, s32 b);
void func_02004008(s32 a);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_020024f0(void *a, u32 b, u32 c, s32 d);
void func_0200261c(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0204bcb0(void *p);
void func_020510d8(void *a, void *b);
void func_02062564(void *a, void *b);
void func_0206260c(void *p);
void func_0206267c(void *p);
void func_02063870(void *p);
void func_02063888(void *p);
void func_020638d0(s32 a, void *p);
s32 func_020639e8(char *buf, const void *fmt, ...);
void func_020641b4(const void *src, void *dst, s32 n);
s32 func_02065578(void *o);
s32 func_020655d0(s32 a);
s32 func_020655d8(void *o);
void func_020655e4(void *o, void *buf);
void func_020655f0(void *o, void *buf);
s32 func_020655fc(void *o);
void func_02065c94(void *o);
void func_02065e70(void *o, s32 x);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0206eed4(s32 a);
BOOL func_0206ef0c();
void func_0206f9fc(void *p, s32 a);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fc44(void *p);
void func_0206fca8(void *p);
void func_0206fcc8(void *p);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
s32 func_02088730(s32 a, const void *b, s32 c, s32 d, ...);
void func_02089ac0(void *a, void *b);
void func_02089f30(void *p);
void func_02089f44(void *p);
void func_02094018(void *p);
void func_02094030(void *p);
s32 func_0209409c(s32 a);
void func_020940d0(s32 a, void *p);
s32 func_0209411c();
s32 func_0209750c();
s32 func_02097d1c(s32 a, s32 b);
void *func_02097e68(s32 a, s32 b);
u32 func_02097eb0(s32 a, s32 b);
u16 *func_02097f6c(s32 a, s32 b);
u16 *func_02098744(s32 a);
s32 func_02098750(s32 a);
s32 func_0209888c(...);
void func_02098e90(void *a, void *b);
void func_0209909c(u16 *a, s32 b, s32 c);
void func_020a7bd8(void *a, void *b);
void func_020b3544(s32 a, void *p);
void func_020b851c(void *a, void *b, void *c, s32 d, u32 e, u32 f, u32 g, u32 h);
void func_020b85f8(void *p);
s32 func_020b8670(void *a, void *b, s32 c, s32 d);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020b8714(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020b87d0(void *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_021355f0(void *p, s32 n, u32 sz, void *dtor);
s32 func_02135714(void *p, s32 n, u32 sz, void *ctor, void *dtor);
extern u32 data_021f482c;
s32 _ZN18Unk_ov094_02294a4019func_ov094_02293ac8Ei(void *self, s32 i, s32 j);

extern const u8 data_ov094_022946b4[];
extern const u8 data_ov094_022946bc[];
extern const u32 data_ov094_022946c4[];
extern const s32 data_ov094_022946d0[];
extern const u8 data_ov094_022946f8[];
extern const u8 data_ov094_02294848[];
extern const u32 data_ov094_0229484c[];
extern const u8 data_ov094_02294858[];
extern u8 data_ov094_02294880[];
extern u8 data_ov094_02294a30[];
extern u8 data_ov094_02294a58[];
extern Unk_ov094_02292d6c_Ent8 data_ov094_02294a70[];
extern u8 data_ov094_02294bac[];
extern u8 data_ov094_02294bb4[];
extern u8 data_ov094_02294bbc[];
extern u8 data_ov094_02294bdc[];
extern u16 data_ov094_02294bf4[];
}

extern "C" {
void func_ov094_02292c84(S *s, s32 flag);
void func_ov094_02292d1c(S *s, s32 flag);
S *_ZN18Unk_ov094_02292d6cC1Ev(S *s) {
    u8 *p = s->unk_38;
    u8 *e = s->unk_e0;
    do {
        func_020b85f8(p);
        p += 0x38;
    } while (p != e);
    func_02135714(e, 2, 0x40, (void *)func_0206fcc8, (void *)func_0206fca8);
    return s;
}

S *_ZN18Unk_ov094_02292d6cD1Ev(S *s) {
    func_021355f0(s->unk_e0, 2, 0x40, (void *)func_0206fca8);
    return s;
}

void func_ov094_02292d30(S *s, u32 v);
S *_ZN18Unk_ov094_02292d6cD1Ev(S *s);
S *_ZN18Unk_ov094_02292d6cC1Ev(S *s);
BOOL func_ov094_02292da8(u32 *bits, s32 i);
void func_ov094_02292dcc(u32 *bits, s32 i);
void func_ov094_02292dec(u32 *bits, s32 i);
void func_ov094_02292e0c(u32 *bits);
s32 func_ov094_02292e1c(S *s);
BOOL func_ov094_02292e30(S *s);
void func_ov094_02292ee4(S *s);
void func_ov094_02292efc(S *s, u32 v, s32 m);
u32 func_ov094_02292f40(S *s);
void func_ov094_02292f58(S *s);
u32 func_ov094_02292f8c(u32 i);
Ent8 *func_ov094_02292fa4(S *s, s32 i);
void func_ov094_02292fb0(S *s, Ent8 *e, s32 idx, s32 x, s32 y);
void func_ov094_02293080(S *s, s32 a, s32 b);
void func_ov094_022930b4(S *s, s32 a, s32 b, s32 c);
void func_ov094_022930e8(S *s, s32 a, s32 b);
BOOL func_ov094_0229311c(S *s, s32 i);
void func_ov094_0229313c(S *s, s32 x, s32 y);
void func_ov094_022931e8(S *s, s32 x, s32 y);
void func_ov094_0229324c(S *s, s32 x, s32 y);
void func_ov094_02293284(S *s, s32 x, s32 y, s32 w);
void func_ov094_022932d0(S *s, s32 x, s32 y);
void func_ov094_02293308(S *s, s32 i);
void func_ov094_02293318(S *s, u8 i, u8 e);
BOOL func_ov094_0229333c(S *s, s32 i);
void func_ov094_0229334c(S *s, Rec *r, void *dst, s32 c);
void func_ov094_022933d8(S *s, Rec *r, u32 v, s32 m);
void func_ov094_0229341c(S *s, Rec *r, s32 m);
void func_ov094_02293434(S *s, s32 i);
void func_ov094_02293494(S *s, s32 i, u32 v, s32 x);
void func_ov094_022934d8(S *s, s32 i);
u32 func_ov094_02293504(S *s, s32 i);
u16 func_ov094_0229352c(S *s, s32 i);
void func_ov094_0229357c(S *s, s32 i);
void func_ov094_0229358c(S *s);
void func_ov094_0229359c(Unk_ov094_02294a50 *o, u32 v);
void func_ov094_022935dc(Unk_ov094_02294a50 *o);
s32 func_ov094_022935e8(Unk_ov094_02294a50 *o);
BOOL func_ov094_022935fc(Unk_ov094_02294a50 *o, s32 v);
s32 func_ov094_02293610(void *o, s32 i);
s32 func_ov094_02293624(void *o, s32 i);
void func_ov094_02293638(void *o, s32 a, s32 b);
void func_ov094_02293678(void *o, void *dst, u16 *p, s32 mode);
s32 func_ov094_02293730(void *o, u16 *p, s32 mode);
void func_ov094_02293764(Unk_ov094_02294a50 *o, u16 *arr);
void func_ov094_022937a0(Unk_ov094_02294a50 *o);
void func_ov094_022937e4(Unk_ov094_02294a50 *o, s32 k, u16 *p, s32 a);
s32 func_ov094_02293890(void *o, s32 a, s32 b, s32 c);
u32 func_ov094_022938d4(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e);
s32 func_ov094_02293928(void *o, s32 a, s32 b);
u32 func_ov094_02293938(void *o, s32 a, s32 b);
u32 func_ov094_02293968(void *o, s32 a, s32 b);
void func_ov094_02293998(void *o);
void func_ov094_022939a0(Unk_ov094_02294a50 *o);
void func_ov094_022939c0(Unk_ov094_02294a50 *o, u32 a);
u8 func_ov094_02293abc(void *o, s32 i);
BOOL func_ov094_02293b90(u32 *bits, s32 i);
void func_ov094_02293bb4(u32 *bits, s32 i);
void func_ov094_02293bd4(u32 *bits, s32 i);
void func_ov094_02293bf4(u32 *bits);
u8 func_ov094_02293c04(Unk_ov094_02293c04_Rec *o);
BOOL func_ov094_02293c1c(Unk_ov094_02293c04_Rec *o);
void func_ov094_02293c50(Unk_ov094_02293c04_Rec *o);
void func_ov094_02293c58(Unk_ov094_02293c04_Rec *o);
s32 func_ov094_02293c68(void *o, s32 h);
void func_ov094_02293ca0(Unk_ov094_02293ca0_Obj *o, u8 *p, s32 m, s32 n);
void func_ov094_02293cf0(void *o, u8 *p);
void func_ov094_02293d04(void *o, u8 *p);
void func_ov094_02293d18(void *o, u8 *p);
void func_ov094_02293d2c(Unk_ov094_02293ca0_Obj *o);
BOOL func_ov094_02293d80(Unk_ov094_02293ca0_Obj *o, s32 i);
s32 func_ov094_02293d9c(void *o, s32 i);
s32 func_ov094_02293df8(void *o, s32 i);
void func_ov094_02293e64(Unk_ov094_02294a50 *o, s32 a1, s32 idx, s32 x, s32 y0);
void func_ov094_02292360(void *o, u32 m);
void func_ov094_02292368(void *o, u32 m);
s32 func_ov094_02292370(void *o, u32 m);
void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
BOOL func_ov094_022923a4(u32 v);
BOOL func_ov094_02292414(u32 v);
BOOL func_ov094_02292430(u32 v);
BOOL func_ov094_02292450(u32 v);
void func_ov094_02292484(void *o);
void func_ov094_0229248c(void *o, u32 v);
void func_ov094_02292490(void *o);
BOOL func_ov094_022924c4(u32 v);
void func_ov094_02292534(void *o);
void func_ov094_0229260c(void *o);
s32 func_ov094_02292628();
void func_ov094_02292640(void *o, u32 n);
void func_ov094_022926c8(void *o, u32 v);
void func_ov094_0229272c(void *o);
BOOL func_ov094_02292738(void *o);
void func_ov094_02292774(void *o, u32 v);
void func_ov094_0229277c(s32 a, void *o);
void func_ov094_022927a4(void *o);
void func_ov094_022927d4(void *o);
void func_ov094_02292814(void *o, s32 a, s32 b);
void func_ov094_02292864(void *o);
void func_ov094_02292988(void *o);
void func_ov094_022929ac(void *o);
void func_ov094_022929d0(void *o);
void func_ov094_02292a00(void *o);
void func_ov094_02292a40(void *o);
void func_ov094_02292a60(void *o);
void func_ov094_02292a80(void *o);
void func_ov094_02292aa4(void *o);
void func_ov094_02292acc(void *o);
void func_ov094_02292ae0();
void func_ov094_02292b58(void *o);
void func_ov094_02292c08(void *o);
}

struct Unk_ov094_0229313c_L {
    s32 v[4];
};

struct Unk_ov094_0229334c_Blk {
    u8 a[0x40];
    u8 b[0x40];
};

static inline void Unk_ov094_SetPal(Unk_ov094_02294bb4_Bits *o, s32 pal) {
    o->v = (u16)((o->v & 0xffff0fff) | ((pal & 0xf) << 12));
}

static inline void Unk_ov094_SetName(Unk_ov094_02294bb4_Bits *o, s32 name) {
    o->v = (u16)((o->v & 0xfffffc00) | (name & 0x3ff));
}

#define data_ov094_02294888 "menu/inventory/itmp/m%d.bch"
#define data_ov094_022948a4 "menu/inventory/itmp/w%d.bch"
#define data_ov094_022948c0 "menu/inventory/b_obj_itm.bpl"
#define data_ov094_022948e0 "menu/icon/b_obj_itm.bpl"
#define data_ov094_022948f8 "menu/inventory/obj0.bch"
#define data_ov094_02294910 "menu/inventory/obj1.bch"
#define data_ov094_02294928 "menu/inventory/b_itm2.bch"
#define data_ov094_02294944 "menu/inventory/b_itm9.bpl"
#define data_ov094_02294960 "menu/inventory/b_itmb.bpl"
#define data_ov094_0229497c "menu/inventory/b_obj_itm6.bpl"
#define data_ov094_0229499c "menu/inventory/b_itm.bpl"
#define data_ov094_022949b8 "menu/inventory/b_itm_bg_a.bsc"
#define data_ov094_022949d8 "menu/inventory/b_itm_bg_c.bsc"
#define data_ov094_022949f8 "menu/inventory/b_itm0.bch"
#define data_ov094_02294a14 "menu/inventory/b_itm1.bch"
#define data_ov094_02294b80 "menu/icon/pre%d.bch"
#define data_ov094_02294b94 "menu/icon/icon%02d.bch"
#define data_ov094_02294a60 (data_ov094_02294a58 + 8)
#define data_ov094_02294a68 (data_ov094_02294a58 + 16)
#define data_ov094_02294be4 (data_ov094_02294bdc + 8)
#define data_ov094_02294bec (data_ov094_02294bdc + 16)

extern "C" u8 data_ov094_02294880[8] = {0xf8, 0x00, 0xc3, 0x01, 0xfa, 0x61, 0xff, 0xff};

void func_ov094_02292d30(S *s, u32 v) {
    s->unk_0e = v;
    s->unk_08 = 0;
    func_ov094_0229260c(s);
    s->unk_0f = 2;
    s->unk_10 = 2;
    s->unk_14 = 8;
}

void func_ov094_02292d1c(S *s, s32 flag) {
    func_ov094_02292c84(s, flag);
    func_ov094_02292c08(s);
}

void func_ov094_02292c84(S *s, s32 flag) {
    u32 h = data_021f482c;
    func_020026c4(data_ov094_0229499c, h, s->unk_0e, 0, 1, 0xd);
    func_020641b4(flag ? data_ov094_022949b8 : data_ov094_022949d8, s->unk_160, 0x800);
    func_020024f0(s->unk_160, s->unk_0e, 0x800, 0);
    func_0200261c(data_ov094_022949f8, h, s->unk_0e, 0, 0x10, 0xff);
    func_0200261c(data_ov094_02294a14, h, s->unk_0e, 0x100, 0x100, 0x1ff);
}

void func_ov094_02292c08(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    func_0200261c(data_ov094_02294928, data_021f482c, p->unk_0e, 0x200, 0x200, 0x2ff);
    func_ov094_02292b58(p);
    func_ov094_0229260c(p);
    func_ov094_02292864(p);
    func_020641b4(data_ov094_02294944, p->unk_16, 0x20);
    p->unk_0a = p->unk_32;
    func_020641b4(data_ov094_02294960, p->unk_16, 0x20);
    p->unk_0c = p->unk_32;
    func_020641b4(data_ov094_0229497c, p->unk_16, 0x20);
}

void func_ov094_02292b58(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    u8 buf[0x1c];
    u8 buf2[0x1c];
    func_0209750c();
    s32 r = func_0209888c();
    func_02063888(buf);
    func_020638d0(func_0209409c(r), buf);
    func_020b3544(0, buf);
    func_0206fb9c((u8 *)p + 0xe0, p->unk_0e, 0x11, 0xa, 0xf, 0xc, 0);
    func_0206f9fc((u8 *)p + 0xe0, 0x66);
    func_0206fab4((u8 *)p + 0xe0, 1, 0);
    func_02094030(buf2);
    func_020940d0(r, buf2);
    func_0206fb9c((u8 *)p + 0x120, p->unk_0e, 0x25, 8, 0xf, 0xc, 0);
    func_020a7bd8((u8 *)p + 0x120, buf2);
    func_0206fab4((u8 *)p + 0x120, 1, 0);
    func_02094018(buf2);
    func_02063870(buf);
}

void func_ov094_02292ae0()
{
    s32 g = data_021f482c;
    func_020026c4(data_ov094_022948c0, g, 8, 4, 4, 6);
    func_020026c4(data_ov094_022948e0, g, 8, 7, 7, 0xe);
    func_0200261c(data_ov094_022948f8, g, 8, 0xc0, 0xc0, 0x15f);
    func_0200261c(data_ov094_02294910, g, 8, 0x160, 0x160, 0x1ff);
}

void func_ov094_02292acc(void *o)
{
    func_ov094_02292a60(o);
    func_ov094_02292a40(o);
}

void func_ov094_02292aa4(void *o)
{
    func_ov094_02292534(o);
    func_ov094_02292490(o);
    func_ov094_02292a00(o);
    func_ov094_022927d4(o);
    func_ov094_022927a4(o);
}

void func_ov094_02292a80(void *o)
{
    func_ov094_02292a60(o);
    func_ov094_02292a40(o);
    if (((Unk_ov094_02292360_Obj *)o)->unk_13 != 0) {
        func_02003ff4(0x2d, 1);
    }
}

void func_ov094_02292a60(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0x38;
    for (; i < 3; i++) {
        func_020b87d0(b + i * 0x38);
    }
}

void func_ov094_02292a40(void *o)
{
    s32 i = 0;
    u8 *b = (u8 *)o + 0xe0;
    for (; i < 2; i++) {
        func_0206fc44(b + (i << 6));
    }
}

void func_ov094_02292a00(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (func_ov094_02292370(p, 1)) {
        if (func_020b86c0((u8 *)p + 0x38, (u8 *)p + 0x160, p->unk_0e, 0x800, 0)) {
            func_ov094_02292360(p, 1);
        }
    }
}

void func_ov094_022929d0(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 2);
    func_ov094_02292368(o, 1);
}

void func_ov094_022929ac(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 7);
}

void func_ov094_02292988(void *o)
{
    func_0206ee80((u8 *)o + 0x160, 0xe, 3, 0x17, 0xc, 6);
}

void func_ov094_02292864(void *o)
{
    s32 a = func_0209750c();
    func_0209888c();
    s32 b = func_0209411c();
    u16 *pv = func_02098744(a);
    s32 idx = 0;
    BOOL fl = FALSE;
    u32 v = *pv;
    if (IN(v, 0x1369, 0x1369)) {
        fl = TRUE;
    }
    if (fl || IN(v, 0x136a, 0x136a)) {
        idx = 1;
    } else if (IN(v, 0x136b, 0x1372) || IN(v, 0x1373, 0x1373)) {
        idx = 2;
    } else if (IN(v, 0x1374, 0x1374) || IN(v, 0x1375, 0x1375)) {
        idx = 3;
    } else if (IN(v, 0x1380, 0x139f) || IN(v, 0x13a0, 0x13a7)) {
        idx = 4;
    } else if (IN(v, 0x1377, 0x1377) || IN(v, 0x1376, 0x1376)) {
        idx = 5;
    } else if (IN(v, 0x1379, 0x1379) || IN(v, 0x1378, 0x1378)) {
        idx = 6;
    } else if (IN(v, 0x137a, 0x137a) || IN(v, 0x137b, 0x137b)) {
        idx = 7;
    }
    func_ov094_02292814(o, idx, b);
}

void func_ov094_02292814(void *o, s32 a, s32 b)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    char buf[0x2c];
    if (b == 0) {
        func_020639e8(buf, data_ov094_02294888, a);
    } else {
        func_020639e8(buf, data_ov094_022948a4, a);
    }
    func_020641b4(buf, (u8 *)p + 0x960, 0xc80);
    p->unk_14 = a;
    func_ov094_02292368(p, 4);
}

void func_ov094_022927d4(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (func_ov094_02292370(p, 4)) {
        if (func_020b8714((u8 *)p + 0x70, (u8 *)p + 0x960, p->unk_0e, 0x35, 0x35, 0x98)) {
            func_ov094_02292360(p, 4);
        }
    }
}

void func_ov094_022927a4(void *o)
{
    if (func_ov094_02292370(o, 8)) {
        if (func_020b8670((u8 *)o + 0xa8, (u8 *)o + 0x16, 8, 6)) {
            func_ov094_02292360(o, 8);
        }
    }
}

void func_ov094_0229277c(s32 a, void *o)
{
    func_02088730(1, data_ov094_02294880, 0x80, (s32)((u8 *)o + 0x60), -1, 2, 0);
}

void func_ov094_02292774(void *o, u32 v)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_11 = v;
    p->unk_12 = 14;
}

BOOL func_ov094_02292738(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (p->unk_12 != 0) {
        p->unk_12 = p->unk_12 - 1;
        switch (p->unk_12 % 5) {
        case 3:
            func_ov094_0229248c(p, p->unk_11);
            break;
        case 0:
            func_ov094_02292484(p);
            break;
        }
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}

void func_ov094_0229272c(void *o)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_12 = 0;
    func_ov094_02292484(o);
}

void func_ov094_022926c8(void *o, u32 v)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 t = func_ov094_02292628();
    s32 c = p->unk_00;
    if (t != c) {
        s32 d;
        if (t > c) {
            d = t - c;
        } else {
            d = c - t;
        }
        if (d < 30) {
            p->unk_13 = 1;
        } else {
            p->unk_13 = 14;
            p->unk_04 = d / 13;
            if (p->unk_04 % 5 == 0) {
                p->unk_04 = p->unk_04 - 1;
            }
            if (p->unk_04 <= 1) {
                p->unk_13 = 1;
            }
            func_ov094_02292640(p, v);
            func_02004008(0x2d);
        }
    }
}

void func_ov094_02292640(void *o, u32 n)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 x = 7;
    s32 y = 9;
    s32 z = 9;
    switch (n) {
    case 0:
        break;
    case 1:
        z = 8;
        x = y;
        break;
    case 2:
        z = 8;
        x = z;
        break;
    case 3:
        z = 8;
        break;
    }
    func_0206ee80((u8 *)p + 0x160, x, 10, 11, 11, z);
    func_ov094_02292368(p, 8);
    switch (n) {
    case 0:
    case 1:
        p->unk_32 = p->unk_0a;
        break;
    case 2:
    case 3:
        p->unk_32 = p->unk_0c;
        break;
    }
    func_ov094_02292368(p, 1);
}

s32 func_ov094_02292628()
{
    return func_02097d1c(func_02098750(func_0209750c()), 0);
}

void func_ov094_0229260c(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_00 = func_ov094_02292628();
    p->unk_13 = 0;
    func_ov094_02292368(p, 2);
}

void func_ov094_02292534(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    s32 t = func_ov094_02292628();
    if (p->unk_13 != 0) {
        p->unk_13 = p->unk_13 - 1;
        if (p->unk_13 == 0) {
            p->unk_00 = t;
            func_ov094_02292640(p, 0);
            func_02003ff4(0x2d, 1);
            func_0200402c(0x3e);
        } else {
            s32 c = p->unk_00;
            if (c < t) {
                p->unk_00 = c + p->unk_04;
            } else {
                p->unk_00 = c - p->unk_04;
            }
        }
        func_ov094_02292368(p, 2);
    }
    if (func_ov094_02292370(p, 2)) {
        s32 v = p->unk_00;
        func_ov094_02292368(p, 1);
        u16 *q = (u16 *)((u8 *)p + 0x3f6);
        s32 i;
        for (i = 0; i < 5; i++) {
            s32 base;
            if (i < 3) {
                base = 0x2ec;
            } else {
                base = 0x2d8;
            }
            s32 d = v % 10 * 2;
            d += base;
            *q = (*q & 0xfc00) | d;
            q[0x20] = (q[0x20] & 0xfc00) | (d + 1);
            q--;
            v = v / 10;
        }
        func_ov094_02292360(p, 2);
    }
}

BOOL func_ov094_022924c4(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x1531, 0x153a) || IN(v, 0x153b, 0x1541) || IN(v, 0x154a, 0x1553) ||
        IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292490(void *o)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    u32 a = p->unk_10;
    if (a != p->unk_0f) {
        p->unk_0f = a;
        func_ov094_022929d0(p);
        u32 b = p->unk_0f;
        switch (b) {
        case 0:
            func_ov094_022929ac(p);
            break;
        case 1:
            func_ov094_02292988(p);
            break;
        }
    }
}

void func_ov094_0229248c(void *o, u32 v)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_10 = v;
}

void func_ov094_02292484(void *o)
{
    ((Unk_ov094_02292360_Obj *)o)->unk_10 = 2;
}

BOOL func_ov094_02292450(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155f, 0x1560) || IN(v, 0x1561, 0x1564)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov094_02292430(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155f, 0x1560)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov094_02292414(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x155d, 0x155d)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov094_022923a4(u32 v)
{
    Unk_ov094_022923a4_Pad pad;
    if (IN(v, 0x12e8, 0x131f) || IN(v, 0x12b0, 0x12e7)) {
        return FALSE;
    }
    if (IN(v, 0x137c, 0x137c) || IN(v, 0x1408, 0x1428) || IN(v, 0x1471, 0x1491)) {
        return FALSE;
    }
    return TRUE;
}

void func_ov094_02292398()
{
    func_0200402c(14);
}

void func_ov094_0229238c()
{
    func_0200402c(12);
}

void func_ov094_02292380()
{
    func_0200402c(13);
}

s32 func_ov094_02292370(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    if (p->unk_08 & m) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292368(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_08 = p->unk_08 | m;
}

void func_ov094_02292360(void *o, u32 m)
{
    Unk_ov094_02292360_Obj *p = (Unk_ov094_02292360_Obj *)o;
    p->unk_08 = p->unk_08 & ~m;
}
