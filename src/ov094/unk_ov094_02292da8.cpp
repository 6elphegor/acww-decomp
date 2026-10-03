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

extern "C" u8 data_ov094_02294a30[8] = {0x00, 0x00, 0x00, 0x40, 0x1c, 0x61, 0xff, 0xff};
extern "C" const u8 data_ov094_022946b4[8] = {0x08, 0x04, 0x00, 0x03, 0x07, 0x0a, 0x00, 0x00};
extern "C" const u8 data_ov094_022946bc[8] = {0x00, 0xff, 0x01, 0x02, 0x03, 0xff, 0x00, 0x00};
extern "C" const u32 data_ov094_022946c4[3] = {0xfffffffe, 0xfffffffd, 0xfffffffb};
extern "C" const s32 data_ov094_022946d0[10] = {0x0, 0xa000, 0x5000, 0x3555, 0x2800, 0x2000, 0x1aaa, 0x16db, 0x1400, 0x11c7};
extern "C" u8 data_ov094_02294a58[24] = {0x00, 0x00, 0x00, 0x80, 0x44, 0x51, 0x00, 0x00, 0x02, 0x00, 0x02, 0x80, 0x44, 0x11, 0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0x4c, 0x61, 0xff, 0xff};
extern "C" const u8 data_ov094_022946f8[336] = {0x07, 0x0c, 0x07, 0x0c, 0x08, 0x07, 0x07, 0x07, 0x07, 0x09, 0x0a, 0x0a, 0x08, 0x07, 0x08, 0x07, 0x07, 0x07, 0x08, 0x09, 0x08, 0x07, 0x08, 0x07, 0x08, 0x0c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0a, 0x08, 0x08, 0x0d, 0x0b, 0x07, 0x0c, 0x07, 0x0c, 0x0c, 0x0c, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x09, 0x0c, 0x0c, 0x09, 0x09, 0x0c, 0x0c, 0x0c, 0x09, 0x0c, 0x0c, 0x0b, 0x0c, 0x0c, 0x08, 0x0c, 0x08, 0x08, 0x08, 0x0c, 0x08, 0x07, 0x09, 0x07, 0x0a, 0x0c, 0x0d, 0x0c, 0x0c, 0x0a, 0x0c, 0x08, 0x0a, 0x0a, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x07, 0x07, 0x07, 0x08, 0x0c, 0x0d, 0x0d, 0x0c, 0x0c, 0x0a, 0x07, 0x0c, 0x0c, 0x0b, 0x0c, 0x0c, 0x0c, 0x07, 0x0c, 0x0d, 0x0b, 0x07, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0b, 0x0c, 0x0b, 0x0b, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x09, 0x0c, 0x09, 0x0d, 0x0c, 0x0c, 0x0c, 0x0a, 0x0d, 0x0d, 0x0c, 0x0a, 0x07, 0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0a, 0x0d, 0x0d, 0x0c, 0x0d, 0x0d, 0x0c, 0x0d, 0x0c, 0x09, 0x0b, 0x08, 0x0c, 0x0d, 0x0a, 0x0a, 0x0c, 0x0d, 0x0d, 0x0b, 0x0a, 0x08, 0x08, 0x0c, 0x09, 0x0c, 0x0d, 0x0a, 0x0c, 0x07, 0x09, 0x0a, 0x0c, 0x09, 0x09, 0x0c, 0x0c, 0x0c, 0x0d, 0x0a, 0x0c, 0x08, 0x09, 0x08, 0x09, 0x08, 0x08, 0x0a, 0x08, 0x08, 0x0a, 0x0a, 0x08, 0x0a, 0x09, 0x08, 0x09, 0x0a, 0x0c, 0x08, 0x09, 0x0a, 0x08, 0x09, 0x0a, 0x08, 0x07, 0x08, 0x07, 0x07, 0x09, 0x0a, 0x08};
extern "C" Unk_ov094_02292d6c_Ent8 data_ov094_02294a70[34] = {{{0x14, 0x00, 0x8c, 0x41, 0xc0, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xac, 0x41, 0xc2, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xcc, 0x41, 0xc4, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0xec, 0x41, 0xc6, 0x70, 0x00, 0x00}}, {{0x14, 0x00, 0x0c, 0x40, 0xc8, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0x9c, 0x41, 0xca, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xbc, 0x41, 0xcc, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xdc, 0x41, 0xce, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0xfc, 0x41, 0xd0, 0x70, 0x00, 0x00}}, {{0x2c, 0x00, 0x1c, 0x40, 0xd2, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xac, 0x41, 0xd4, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xcc, 0x41, 0xd6, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0xec, 0x41, 0xd8, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0x0c, 0x40, 0xda, 0x70, 0x00, 0x00}}, {{0x44, 0x00, 0x2c, 0x40, 0xdc, 0x70, 0x00, 0x00}}, {{0xb4, 0x00, 0x8c, 0x41, 0xde, 0x70, 0x00, 0x00}}, {{0xb4, 0x00, 0xac, 0x41, 0x00, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0xcc, 0x41, 0x02, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0xec, 0x41, 0x04, 0x71, 0x00, 0x00}}, {{0xb4, 0x00, 0x0c, 0x40, 0x06, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0x9c, 0x41, 0x08, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xbc, 0x41, 0x0a, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xdc, 0x41, 0x0c, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0xfc, 0x41, 0x0e, 0x71, 0x00, 0x00}}, {{0xcc, 0x00, 0x1c, 0x40, 0x10, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xac, 0x41, 0x12, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xcc, 0x41, 0x14, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0xec, 0x41, 0x16, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0x0c, 0x40, 0x18, 0x71, 0x00, 0x00}}, {{0xe4, 0x00, 0x2c, 0x40, 0x1a, 0x71, 0x00, 0x00}}, {{0xef, 0x00, 0xf7, 0x41, 0x1e, 0x71, 0x00, 0x00}}, {{0xef, 0x00, 0x2a, 0x40, 0x1e, 0x71, 0x00, 0x00}}, {{0xd8, 0x00, 0x10, 0x40, 0x1e, 0x71, 0x00, 0x00}}, {{0xf0, 0x00, 0xa0, 0x41, 0x1e, 0x61, 0xff, 0xff}}};

Unk_ov094_02294a40::Unk_ov094_02294a40() {}

Unk_ov094_02294a40::~Unk_ov094_02294a40() {}

void Unk_ov094_02294a40::func_ov094_02293b54()
{
    unk_804 = 0xff;
}

u8 *Unk_ov094_02294a40::func_ov094_02293b08(s32 idx)
{
    char buf[0x28];
    s32 page = idx >> 4;
    if (page != unk_804) {
        unk_804 = page;
        func_020639e8(buf, (const char *)data_ov094_02294b94, page);
        func_020641b4(buf, unk_04, 0x800);
    }
    u8 *r = unk_04;
    r += func_0206eed4(idx & 0xf) << 5;
    return r;
}

u8 *Unk_ov094_02294a40::func_ov094_02293ac8(s32 idx)
{
    char buf[0x28];
    func_020639e8(buf, (const char *)data_ov094_02294b80);
    func_020641b4(buf, unk_04, 0x800);
    u8 *r = unk_04;
    r += func_0206eed4(idx) << 5;
    unk_804 = 0xff;
    return r;
}

u8 func_ov094_02293abc(void *o, s32 i)
{
    return data_ov094_022946f8[i];
}

Unk_ov094_02294a50::Unk_ov094_02294a50()
{
    u8 *e = unk_98c;
    do {
        func_020b85f8(e);
        e += 0x38;
    } while (e != (u8 *)&unk_a34);
}

Unk_ov094_02294a50::~Unk_ov094_02294a50() {}

void func_ov094_022939c0(Unk_ov094_02294a50 *o, u32 a)
{
    o->unk_184.func_ov094_02293b54();
    func_ov094_02292e0c((u32 *)(o->unk_a38));
    func_ov094_02292e0c((u32 *)(o->unk_a40));
    func_ov094_02292e0c((u32 *)(o->unk_a48));
    o->unk_a56 = 0x23;
    o->unk_a57 = 0;
    o->unk_a50 = a;
    o->unk_a34 = 0;
    o->unk_a59 = 0xa;
    o->unk_a5c = 1;
}

void func_ov094_022939a0(Unk_ov094_02294a50 *o)
{
    func_ov094_02292f58((S *)o);
    u8 v = o->unk_a57;
    if (v != 0) {
        o->unk_a57 = v - 1;
    }
}

void func_ov094_02293998(void *o)
{
    func_ov094_02292f58((S *)o);
}

u32 func_ov094_02293968(void *o, s32 a, s32 b)
{
    if (b < 0x68) {
        return 0x23;
    }
    return func_ov094_022938d4(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0, 0xe);
}

u32 func_ov094_02293938(void *o, s32 a, s32 b)
{
    if (b > 0x68) {
        return 0x23;
    }
    return func_ov094_022938d4(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0xf, 0x1d);
}

s32 func_ov094_02293928(void *o, s32 a, s32 b)
{
    return func_ov094_02293890(o, a, b, 0x21);
}

u32 func_ov094_022938d4(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e)
{
    s32 i = s;
    for (; i <= e; i++) {
        void *p = func_ov094_02292fa4((S *)o, i);
        s32 x = func_02087e14(p);
        if (a < x && x < c) {
            s32 y = func_02087e0c(p);
            if (b < y && y < d) {
                return (u8)i;
            }
        }
    }
    return 0x23;
}

s32 func_ov094_02293890(void *o, s32 a, s32 b, s32 c)
{
    s32 a1 = a - 0x7c;
    s32 b1 = b - 0x74;
    s32 b2 = b - 0x5c;
    void *e = func_ov094_02292fa4((S *)o, c);
    s32 x = func_02087e14(e);
    if (a - 0x94 < x && x < a1) {
        s32 y = func_02087e0c(e);
        if (b1 < y && y < b2) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_ov094_022937e4(Unk_ov094_02294a50 *o, s32 k, u16 *p, s32 a)
{
    if (*p == 0xfff1) {
        func_ov094_02292dcc((u32 *)(o->unk_a38), k);
    } else {
        func_ov094_02292dec((u32 *)(o->unk_a38), k);
        s32 r = func_ov094_02293730(o, p, a);
        Unk_ov094_022937e4_Ent *e = (Unk_ov094_022937e4_Ent *)func_ov094_02292fa4((S *)o, k);
        s32 c = (u32)(e->unk_04 << 22) >> 22;
        u8 *q = o->unk_184.func_ov094_02293b08(r);
        func_02002438(q, 8, c, c, c + 1);
        func_02002438(q + 0x400, 8, c + 0x20, c + 0x20, c + 0x21);
        u32 n = func_ov094_02293abc(&o->unk_184, r);
        e->unk_04 = (e->unk_04 & 0xffff0fff) | ((n & 0xf) << 12);
    }
}

void func_ov094_022937a0(Unk_ov094_02294a50 *o)
{
    s32 h = func_02098750(func_0209750c());
    s32 base = (s32)func_02097f6c(h, 0);
    s32 i;
    s32 k;
    k = 0;
    i = 0;
    do {
        func_ov094_022937e4(o, k, (u16 *)(base + i * 2), func_02097eb0(h, i));
        k++;
        i++;
    } while (i < 0xf);
}

void func_ov094_02293764(Unk_ov094_02294a50 *o, u16 *arr)
{
    s32 i;
    s32 k;
    s32 z = 0;
    k = 0xf;
    i = 0;
    do {
        u16 v = arr[i];
        func_ov094_022937e4(o, k, &v, z);
        k++;
        i++;
    } while (i < 0xf);
    o->unk_a34 = arr;
}

s32 func_ov094_02293730(void *o, u16 *p, s32 mode)
{
    switch (mode) {
    case 1:
        return 0xb3;
    case 2:
        if (func_ov094_02292450(*p)) {
            return func_0204bcb0(p);
        }
        return 0xb4;
    default:
        return func_0204bcb0(p);
    }
}

void func_ov094_02293678(void *o, void *dst, u16 *p, s32 mode)
{
    u32 a[16];
    u32 b[10];
    u32 c[9];
    u32 d[7];
    func_0206fcc8(a);
    func_02089f44(b);
    func_0206267c(c);
    func_02094030(d);
    switch (mode) {
    case 1:
        func_0206f9fc(a, 0x18);
        func_020510d8(b, a);
        break;
    case 2:
        if (func_ov094_02292430(*p)) {
            func_02062564(c, p);
            func_020510d8(b, c);
        } else {
            func_02098e90(d, p);
            func_020b3544(0, d);
            func_0206f9fc(a, 0x40);
            func_020510d8(b, a);
        }
        break;
    case 0:
    default:
        func_02062564(c, p);
        func_020510d8(b, c);
        break;
    }
    func_02089ac0(dst, b);
    func_02094018(d);
    func_0206260c(c);
    func_02089f30(b);
    func_0206fca8(a);
}

void func_ov094_02293638(void *o, s32 a, s32 b)
{
    u32 r = func_ov094_0229352c((S *)o, b);
    volatile u16 t = 0xfff1;
    t = r;
    if (t != 0xfff1) {
        func_ov094_02293678(o, (void *)a, (u16 *)&t, func_ov094_02293504((S *)o, b));
    }
}

s32 func_ov094_02293624(void *o, s32 i)
{
    return func_02087e14(func_ov094_02292fa4((S *)o, i)) + 0x80;
}

s32 func_ov094_02293610(void *o, s32 i)
{
    return func_02087e0c(func_ov094_02292fa4((S *)o, i)) + 0x60;
}

BOOL func_ov094_022935fc(Unk_ov094_02294a50 *o, s32 v)
{
    if (v == o->unk_a56) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov094_022935e8(Unk_ov094_02294a50 *o)
{
    return data_ov094_022946c4[o->unk_a57];
}

void func_ov094_022935dc(Unk_ov094_02294a50 *o)
{
    o->unk_a56 = 0x23;
}

void func_ov094_0229359c(Unk_ov094_02294a50 *o, u32 v)
{
    if (func_ov094_0229333c((S *)o, (u8)v)) {
        func_ov094_022935dc(o);
    } else if (o->unk_a56 != v) {
        o->unk_a56 = v;
        o->unk_a57 = 2;
    }
}

void func_ov094_0229358c(S *s) {
    func_ov094_02292e0c((u32 *)(s->unk_a40));
}

void func_ov094_0229357c(S *s, s32 i) {
    func_ov094_02292dec((u32 *)(s->unk_a40), i);
}

u16 func_ov094_0229352c(S *s, s32 i) {
    s32 t = func_02098750(func_0209750c());
    if (i >= 0 && i <= 0xe) {
        return func_02097f6c(t, 0)[i];
    }
    if (i >= 0xf && i <= 0x1d) {
        u16 *p = s->unk_a34;
        if (p) {
            return p[i - 0xf];
        }
    }
    return 0xfff1;
}

u32 func_ov094_02293504(S *s, s32 i) {
    if (i >= 0 && i <= 0xe) {
        return (u8)func_02097eb0(func_02098750(func_0209750c()), i);
    }
    return 0;
}

void func_ov094_022934d8(S *s, s32 i) {
    func_ov094_02293494(s, i, 0xfff1, 0);
    func_ov094_02292dcc((u32 *)(s->unk_a38), i);
}

void func_ov094_02293494(S *s, s32 i, u32 v, s32 x) {
    volatile u16 w = 0xfff1;
    w = v;
    if (i >= 0 && i <= 0xe) {
        func_0209909c((u16 *)&w, x, i);
    } else if (i >= 0xf && i <= 0x1d) {
        s->unk_a34[i - 0xf] = v;
    }
}

void func_ov094_02293434(S *s, s32 i) {
    Ent8 *e = func_ov094_02292fa4(s, i);
    u16 v = func_ov094_0229352c(s, i);
    u32 c = func_ov094_02293504(s, i);
    volatile u16 t = v;
    if (t == 0xfff1) {
        func_ov094_02292dcc((u32 *)(s->unk_a38), i);
    } else {
        func_ov094_02292dec((u32 *)(s->unk_a38), i);
        func_ov094_022933d8(s, (Rec *)e, v, c);
    }
}

void func_ov094_0229341c(S *s, Rec *r, s32 m) {
    func_ov094_022933d8(s, (Rec *)data_ov094_02294a30, (u32)r, m);
}

void func_ov094_022933d8(S *s, Rec *r, u32 v, s32 m) {
    u16 w = v;
    s32 idx = func_ov094_02293730(s, &w, m);
    void *d = ((Unk_ov094_02294a40 *)s->unk_184)->func_ov094_02293b08(idx);
    u32 c = func_ov094_02293abc(s->unk_184, idx);
    func_ov094_0229334c(s, r, d, c);
}

void func_ov094_0229334c(S *s, Rec *r, void *dst, s32 c) {
    u32 t = r->id;
    u32 k = func_ov094_02292f40(s);
    Unk_ov094_0229334c_Blk *e = (Unk_ov094_0229334c_Blk *)((u8 *)s + 4) + k;
    u8 *p = e->a;
    u8 *q = e->b;
    MI_CpuCopy8(dst, p, 0x40);
    MI_CpuCopy8((u8 *)dst + 0x400, q, 0x40);
    k *= 0x38;
    func_020b851c((u8 *)s->unk_98c + k, p, q, 8, t, t + 1, t + 0x20, t + 0x21);
    c &= 0xf;
    ((u32 *)r)[1] = (((u32 *)r)[1] & 0xffff0fff) | (c << 12);
}

BOOL func_ov094_0229333c(S *s, s32 i) {
    return func_ov094_02292da8((u32 *)(s->unk_a48), i);
}

void func_ov094_02293318(S *s, u8 i, u8 e) {
    while (i <= e) {
        func_ov094_02293308(s, i);
        i++;
    }
}

void func_ov094_02293308(S *s, s32 i) {
    func_ov094_02292dec((u32 *)(s->unk_a48), i);
}

void func_ov094_022932d0(S *s, s32 x, s32 y) {
    Ent8 *e = func_ov094_02292fa4(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
    }
}

void func_ov094_02293284(S *s, s32 x, s32 y, s32 w) {
    Ent8 *e = func_ov094_02292fa4(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        if (func_ov094_02293624(s, (u8)i) + 0x18 > w) {
            func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
        }
    }
}

void func_ov094_0229324c(S *s, s32 x, s32 y) {
    Ent8 *e = func_ov094_02292fa4(s, 0xf);
    s32 i;
    for (i = 0xf; i <= 0x1d; e++, i++) {
        func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
    }
}

void func_ov094_022931e8(S *s, s32 x, s32 y) {
    if (func_ov094_02292da8((u32 *)(s->unk_a40), 0x21)) {
        Ent8 *e = func_ov094_02292fa4(s, 0x21);
        s32 a = x + func_02087e14(e) + 0x80;
        s32 b = y + func_02087e0c(e) + 0x60;
        func_ov094_022930e8(s, a, b);
    }
    if (func_ov094_02292da8((u32 *)(s->unk_a40), 0x22)) {
        func_ov094_022930e8(s, x + 4, y + 0xac);
    }
}

void func_ov094_0229313c(S *s, s32 x, s32 y) {
    s32 a = x + func_02087e14(data_ov094_02294a30);
    s32 b = y + func_02087e0c(data_ov094_02294a30);
    u32 v = func_ov094_02292f8c(s->unk_a59);
    if (v != 0) {
        if (v == 0x1000) {
            func_02088730(1, data_ov094_02294a30, x, y, -1, s->unk_a50, 0);
        } else {
            Unk_ov094_0229313c_L l;
            l.v[0] = v;
            l.v[1] = 0;
            l.v[2] = 0;
            l.v[3] = v;
            func_02088730(1, data_ov094_02294a30, x, y, -1, s->unk_a50, &l);
        }
    }
    func_ov094_022930b4(s, a, b, -1);
    if (s->unk_a5c) {
        func_ov094_02293080(s, a, b);
    }
}

BOOL func_ov094_0229311c(S *s, s32 i) {
    BOOL r;
    if (func_ov094_02292da8((u32 *)(s->unk_a38), i)) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

void func_ov094_022930e8(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a68, a - 8, b - 8, -1, s->unk_a50, 0);
}

void func_ov094_022930b4(S *s, s32 a, s32 b, s32 c) {
    func_02088730(1, data_ov094_02294a58, a - 8, b - 8, c, s->unk_a50, 0);
}

void func_ov094_02293080(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a60, a - 8, b - 8, -1, s->unk_a50, 0);
}

void func_ov094_02292fb0(S *s, Ent8 *e, s32 idx, s32 x, s32 y) {
    s32 a = x + func_02087e14(e);
    s32 b = y + func_02087e0c(e);
    s32 off = 0;
    if (func_ov094_022935fc((Unk_ov094_02294a50 *)s, idx)) {
        off = func_ov094_022935e8((Unk_ov094_02294a50 *)s);
        a += off;
        b += off;
    }
    if (func_ov094_02292da8((u32 *)(s->unk_a40), idx)) {
        func_ov094_022930e8(s, a, b);
    }
    if (func_ov094_02292da8((u32 *)(s->unk_a38), idx)) {
        s32 c = -1;
        if (func_ov094_0229333c(s, (u8)idx)) {
            c = 0xe;
        }
        func_02088730(1, e, x + off, y + off, c, s->unk_a50, 0);
        func_ov094_022930b4(s, a, b, c);
        if (func_ov094_022935fc((Unk_ov094_02294a50 *)s, idx)) {
            func_ov094_02293080(s, a, b);
        }
    }
}

Ent8 *func_ov094_02292fa4(S *s, s32 i) {
    return &data_ov094_02294a70[i];
}

u32 func_ov094_02292f8c(u32 i) {
    if (i >= 10) {
        return 0x1000;
    }
    return data_ov094_022946d0[i];
}

void func_ov094_02292f58(S *s) {
    s32 i;
    for (i = 0; i < 3; i++) {
        func_020b87d0(&s->unk_98c[i]);
    }
    s->unk_a58 = 0;
}

u32 func_ov094_02292f40(S *s) {
    u32 v = s->unk_a58;
    if (v >= 3) {
        return 2;
    }
    s->unk_a58 = v + 1;
    return v;
}

void func_ov094_02292efc(S *s, u32 v, s32 m) {
    s->unk_a54 = v;
    s->unk_a5a = 0;
    if (m == 1) {
        s->unk_a5b = 0;
    } else {
        s->unk_a5b = 1;
    }
    if (func_0206ef0c()) {
        s->unk_a5c = 0;
    }
}

void func_ov094_02292ee4(S *s) {
    s->unk_a59 = 10;
    s->unk_a5c = 1;
}

BOOL func_ov094_02292e30(S *s) {
    u32 st = s->unk_a5a;
    if (st < 6) {
        u32 v = data_ov094_022946bc[st];
        if (v != 0xff) {
            s32 r = _ZN18Unk_ov094_02294a4019func_ov094_02293ac8Ei(s->unk_184, v, s->unk_a5b);
            func_ov094_0229334c(s, (Rec *)data_ov094_02294a30, (void *)r, 8);
        }
        s->unk_a5a++;
    } else if (st < 8) {
        s->unk_a59 = func_ov094_02292e1c(s);
        s->unk_a5a++;
    } else if (st == 8) {
        func_ov094_0229341c(s, (Rec *)s->unk_a54, 0);
        s->unk_a59 = 0;
        s->unk_a5a++;
    } else if (st < 0xc) {
        s->unk_a59 = func_ov094_02292e1c(s);
        s->unk_a5a++;
    } else {
        func_ov094_02292ee4(s);
        return TRUE;
    }
    return FALSE;
}

s32 func_ov094_02292e1c(S *s) {
    return data_ov094_022946b4[s->unk_a5a - 6];
}

void func_ov094_02292e0c(u32 *bits) {
    s32 i;
    u32 z;
    i = 0;
    z = i;
    for (; i < 2; i++) {
        bits[i] = z;
    }
}

void func_ov094_02292dec(u32 *bits, s32 i) {
    bits[i >> 5] |= 1 << (i & 0x1f);
}

void func_ov094_02292dcc(u32 *bits, s32 i) {
    bits[i >> 5] &= ~(1 << (i & 0x1f));
}

BOOL func_ov094_02292da8(u32 *bits, s32 i) {
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & bits[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

