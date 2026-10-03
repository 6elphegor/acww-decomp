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
#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_02063870 _ZN12Unk_020dd38cD1Ev
#define func_02063888 _ZN12Unk_020dd38cC1Ev
#define func_02065578 _ZN12Unk_0206555413func_02065578Ev
#define func_020655d0 _ZN12Unk_0206555413func_020655d0Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define LabelBalloon_setText _ZN12LabelBalloon7setTextEP6StrBuf
#define func_02089f30 _ZN12Unk_020e0d80D1Ev
#define func_02089f44 _ZN12Unk_020e0d80C1Ev
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN8PlayerId13func_020940d0EP9MsgString
#define PlayerId_getGender _ZN8PlayerId9getGenderEv
#define PlayerInventory_getTotalBells _ZN15PlayerInventory13getTotalBellsEi
#define PlayerInventory_getLetter _ZN15PlayerInventory9getLetterEi
#define PlayerInventory_getPocketFlags _ZN15PlayerInventory14getPocketFlagsEi
#define PlayerInventory_getPocket _ZN15PlayerInventory9getPocketEi
#define PlayerData_getHeldItem _ZN10PlayerData11getHeldItemEv
#define func_02098750 _ZN10PlayerData13func_02098750Ev
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define MsgString_copy _ZN9MsgString4copyEPS_
#define BgVramTaskPair_requestCharPair _ZN14BgVramTaskPair15requestCharPairEjjhjjjj
#define func_020b85f8 _ZN14BgVramTaskPairC1Ev
#define BgVramTask_requestPalette _ZN10BgVramTask14requestPaletteEjhj
#define BgVramTask_requestScreen _ZN10BgVramTask13requestScreenEjhjj
#define BgVramTask_requestChars _ZN10BgVramTask12requestCharsEjhjjj
#define BgVramTask_cancel _ZN10BgVramTask6cancelEv
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

void operator delete(void *p);

extern "C" {
void Snd_PlaySe(s32 a);
void Snd_StopSe(s32 a, s32 b);
void func_02004008(s32 a);
void Gfx2d_LoadCharRange(void *a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadScreen(void *a, u32 b, u32 c, s32 d);
void Gfx2d_LoadCharFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadPaletteFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Item_GetInfoUnk02(void *p);
void StrBuf_Copy(void *a, void *b);
void ItemName_setFromItem(void *a, void *b);
void func_0206260c(void *p);
void func_0206267c(void *p);
void func_02063870(void *p);
void func_02063888(void *p);
void func_020638d0(s32 a, void *p);
s32 func_020639e8(char *buf, const void *fmt, ...);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
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
BOOL MenuCtrl_IsTouch();
void func_0206f9fc(void *p, s32 a);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fc44(void *p);
void func_0206fca8(void *p);
void func_0206fcc8(void *p);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
s32 func_02088730(s32 a, const void *b, s32 c, s32 d, ...);
void LabelBalloon_setText(void *a, void *b);
void func_02089f30(void *p);
void func_02089f44(void *p);
void func_02094018(void *p);
void func_02094030(void *p);
s32 func_0209409c(s32 a);
void func_020940d0(s32 a, void *p);
s32 PlayerId_getGender();
s32 PlayerData_GetCurrent();
s32 PlayerInventory_getTotalBells(s32 a, s32 b);
void *PlayerInventory_getLetter(s32 a, s32 b);
u32 PlayerInventory_getPocketFlags(s32 a, s32 b);
u16 *PlayerInventory_getPocket(s32 a, s32 b);
u16 *PlayerData_getHeldItem(s32 a);
s32 func_02098750(s32 a);
s32 PlayerData_getPlayerId(...);
void func_02098e90(void *a, void *b);
void func_0209909c(u16 *a, s32 b, s32 c);
void MsgString_copy(void *a, void *b);
void String_SetSlot(s32 a, void *p);
void BgVramTaskPair_requestCharPair(void *a, void *b, void *c, s32 d, u32 e, u32 f, u32 g, u32 h);
void func_020b85f8(void *p);
s32 BgVramTask_requestPalette(void *a, void *b, s32 c, s32 d);
s32 BgVramTask_requestScreen(void *a, void *b, s32 c, s32 d, s32 e);
s32 BgVramTask_requestChars(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void BgVramTask_cancel(void *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_021355f0(void *p, s32 n, u32 sz, void *dtor);
s32 func_02135714(void *p, s32 n, u32 sz, void *ctor, void *dtor);
extern u32 gCurrentHeap;
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

extern "C" const u8 data_ov094_02294848[4] = {0x02, 0x04, 0x06, 0x08};
extern "C" const u32 data_ov094_0229484c[3] = {0xfffffffe, 0xfffffffd, 0xfffffffb};
extern "C" const u8 data_ov094_02294858[20] = {0x00, 0x3e, 0x3f, 0x9e, 0x9f, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xb9, 0xba, 0xbb, 0x9b, 0x4b, 0xa4, 0x00};
extern "C" u8 data_ov094_02294bac[5] = {0x2c, 0x44, 0x5c, 0x74, 0x8c};
extern "C" u8 data_ov094_02294bb4[8] = {0x00, 0x00, 0x00, 0x40, 0x5a, 0x61, 0xff, 0xff};
extern "C" u8 data_ov094_02294bbc[16] = {0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06};
extern "C" u8 data_ov094_02294bdc[24] = {0x00, 0x00, 0x00, 0x80, 0x48, 0x41, 0x00, 0x00, 0x02, 0x00, 0x02, 0x80, 0x48, 0x11, 0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0x50, 0x61, 0xff, 0xff};
extern "C" u16 data_ov094_02294bf4[16] = {0x140, 0x142, 0x140, 0x142, 0x180, 0x182, 0x1d2, 0x1d6, 0x1d2, 0x1d6, 0x1d4, 0x1d8, 0x140, 0x142, 0x180, 0x182};
extern "C" char data_ov094_02294c14[] = "menu/inventory/b_itm_ten0_obj.bpl";

Unk_ov094_02294bd4::Unk_ov094_02294bd4() {
}

Unk_ov094_02294bd4::~Unk_ov094_02294bd4() {
}

void Unk_ov094_02294bd4::func_ov094_02294644(s32 x) {
    func_ov094_02293bf4((u32 *)&unk_08);
    func_ov094_02293bf4((u32 *)&unk_10);
    func_ov094_02293bf4((u32 *)&unk_18);
    unk_24 = 0x37;
    unk_25 = 0;
    unk_20 = x;
    unk_04 = 0;
    unk_27 = 10;
}

void Unk_ov094_02294bd4::func_ov094_0229462c() {
    if (*(volatile u8 *)&unk_25 != 0) {
        unk_25 = *(volatile u8 *)&unk_25 - 1;
    }
}

u32 Unk_ov094_02294bd4::func_ov094_02294610(s32 a, s32 b) {
    if (a < 0xc0) {
        return 0x37;
    }
    return func_ov094_02294570(a, b, 0, 9);
}

u32 Unk_ov094_02294bd4::func_ov094_022945f0(s32 a, s32 b) {
    if (a > 0xa0 || a < 0x60) {
        return 0x37;
    }
    return func_ov094_02294570(a, b, 0x2d, 0x36);
}

u32 Unk_ov094_02294bd4::func_ov094_022945dc(s32 a, s32 b) {
    return func_ov094_02294570(a, b, 0xa, 0x22);
}

u32 Unk_ov094_02294bd4::func_ov094_022945c8(s32 a, s32 b) {
    return func_ov094_02294570(a, b, 0x23, 0x2c);
}

u32 Unk_ov094_02294bd4::func_ov094_02294570(s32 a, s32 b, s32 start, u8 end) {
    s32 i;
    s32 x0 = a - 0x14;
    s32 x1 = a + 4;
    s32 y0 = b - 0x14;
    s32 y1 = b + 4;
    for (i = start; i <= end; i++) {
        s32 x = func_ov094_02293df8((void *)this, i);
        if (x0 < x && x < x1) {
            s32 y = func_ov094_02293d9c((void *)this, i);
            if (y0 < y && y < y1) {
                return (u8)i;
            }
        }
    }
    return 0x37;
}

void Unk_ov094_02294bd4::func_ov094_02294440(void *out, void *o) {
    u32 b0[0x40 / 4];
    u32 b1[0x1c / 4];
    u32 b2[0x28 / 4];
    u32 b3[0x28 / 4];
    s32 t = func_02065578(o);
    func_0206fcc8(b0);
    func_02094030(b1);
    func_02089f44(b2);
    func_02089f44(b3);
    s32 k = func_020655fc(o);
    if (k == 0x11) {
        func_020655f0(o, b1);
        String_SetSlot(1, b1);
        func_0206f9fc(b0, 0x4b);
    } else if (k == 0) {
        func_020655f0(o, b1);
        String_SetSlot(1, b1);
        if (t == 4) {
            func_0206f9fc(b0, 0x4b);
        } else {
            func_0206f9fc(b0, 0x3d);
        }
    } else {
        func_0206f9fc(b0, data_ov094_02294858[k]);
    }
    StrBuf_Copy(b3, b0);
    if (func_020655d8(o) != 0) {
        u32 b4[0x40 / 4];
        func_0206fcc8(b4);
        func_0206f9fc(b4, 0x43);
        String_SetSlot(0, b4);
        func_0206fca8(b4);
    } else {
        func_020655e4(o, b1);
        String_SetSlot(0, b1);
    }
    func_0206f9fc(b0, 0x3c);
    StrBuf_Copy(b2, b0);
    switch (t) {
    case 1:
    case 4:
    case 7:
    case 8:
        LabelBalloon_setText(out, b2);
        break;
    default:
        LabelBalloon_setText(out, b3);
        break;
    }
    func_02089f30(b3);
    func_02089f30(b2);
    func_02094018(b1);
    func_0206fca8(b0);
}

void Unk_ov094_02294bd4::func_ov094_02294420(void *out, s32 idx) {
    func_ov094_02294440(out, func_ov094_0229433c(idx));
}

BOOL Unk_ov094_02294bd4::func_ov094_02294410(s32 v) {
    if (v == unk_24) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov094_02294bd4::func_ov094_02294400() {
    return data_ov094_0229484c[unk_25];
}

void Unk_ov094_02294bd4::func_ov094_022943f8() {
    unk_24 = 0x37;
}

void Unk_ov094_02294bd4::func_ov094_022943bc(u32 v) {
    if (func_ov094_022941ec((u8)v)) {
        func_ov094_022943f8();
    } else if (unk_24 != v) {
        unk_24 = v;
        unk_25 = 2;
    }
}

void Unk_ov094_02294bd4::func_ov094_022943b0() {
    func_ov094_02293bf4((u32 *)&unk_10);
}

void Unk_ov094_02294bd4::func_ov094_022943a4(s32 i) {
    func_ov094_02293bd4((u32 *)&unk_10, i);
}

void *Unk_ov094_02294bd4::func_ov094_0229433c(s32 i) {
    void *r = (void *)func_02098750(PlayerData_GetCurrent());
    if (i >= 0 && i <= 9) {
        return PlayerInventory_getLetter((s32)r, i);
    }
    if (i >= 10 && i <= 0x22) {
        return unk_04 + (i - 10) * 0xf4;
    }
    if (i >= 0x23 && i <= 0x2c) {
        return unk_04 + (i - 0x23) * 0xf4;
    }
    if (i >= 0x2d && i <= 0x36) {
        return unk_04 + (i - 0x2d) * 0xf4;
    }
    return 0;
}

void Unk_ov094_02294bd4::func_ov094_02294318(s32 i, s32 x) {
    func_02065e70(func_ov094_0229433c(i), x);
    func_ov094_02293bd4((u32 *)&unk_08, i);
}

void Unk_ov094_02294bd4::func_ov094_022942f4(s32 i) {
    func_02065c94(func_ov094_0229433c(i));
    func_ov094_02293bb4((u32 *)&unk_08, i);
}

void Unk_ov094_02294bd4::func_ov094_022941f8(u32 flags) {
    u8 i;
    u32 f1, f8, f2, f4;
    func_ov094_02293bf4((u32 *)&unk_18);
    i = 0;
    f1 = flags & 1;
    f8 = flags & 8;
    f2 = flags & 2;
    f4 = flags & 4;
    do {
        s32 t = func_02065578(func_ov094_0229433c(i));
        switch (t) {
        case 1:
            if (f1 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 4:
            if (f8 != 0 || f1 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 2:
        case 3:
        case 5:
        case 6:
            if (f2 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        case 7:
        case 8:
            if (f4 != 0) {
                func_ov094_022941e0(i);
            }
            break;
        }
        i++;
    } while (i <= 9);
    s32 *g = (s32 *)gCurrentHeap;
    if (f1 != 0) {
        Gfx2d_LoadPaletteFile(data_ov094_02294c14, (s32)g, 8, 4, 4, 4);
    }
    if (f2 != 0) {
        Gfx2d_LoadPaletteFile(data_ov094_02294c14, (s32)g, 8, 4, 5, 5);
    }
    if (f4 != 0) {
        Gfx2d_LoadPaletteFile(data_ov094_02294c14, (s32)g, 8, 4, 6, 6);
    }
}

BOOL Unk_ov094_02294bd4::func_ov094_022941ec(s32 i) {
    return func_ov094_02293b90((u32 *)&unk_18, i);
}

void Unk_ov094_02294bd4::func_ov094_022941e0(s32 i) {
    func_ov094_02293bd4((u32 *)&unk_18, i);
}

void Unk_ov094_02294bd4::func_ov094_022941a0(s32 a, s32 b) {
    u8 *rec = (u8 *)PlayerInventory_getLetter(func_02098750(PlayerData_GetCurrent()), 0);
    s32 idx = 0;
    s32 i = idx;
    for (; i < 10; i++) {
        func_ov094_02293e64((Unk_ov094_02294a50 *)this, (s32)rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_0229416c(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 10;
    s32 i = 0;
    for (; i < 0x19; i++) {
        func_ov094_02293e64((Unk_ov094_02294a50 *)this, (s32)rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_02294138(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 0x23;
    s32 i = 0;
    for (; i < 10; i++) {
        func_ov094_02293e64((Unk_ov094_02294a50 *)this, (s32)rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_02294104(s32 a, s32 b) {
    u8 *rec = unk_04;
    s32 idx = 0x2d;
    s32 i = 0;
    for (; i < 10; i++) {
        func_ov094_02293e64((Unk_ov094_02294a50 *)this, (s32)rec, idx, a, b);
        rec += 0xf4;
        idx++;
    }
}

void Unk_ov094_02294bd4::func_ov094_0229405c(s32 a, s32 b, void *o) {
    if (unk_27 != 0) {
        s32 t = func_ov094_02292f8c(unk_27);
        if (t == 0x1000) {
            func_ov094_02293fc4(a, b, func_ov094_0229403c(o), o, 0);
            func_ov094_02293f64(a, b, func_ov094_0229403c(o), 0);
            func_ov094_02293f34(a, b, 0);
        } else {
            s32 v[4];
            v[0] = t;
            v[1] = 0;
            v[2] = 0;
            v[3] = t;
            func_ov094_02293fc4(a, b, func_ov094_0229403c(o), o, v);
            func_ov094_02293f64(a, b, func_ov094_0229403c(o), v);
        }
    }
}

s32 Unk_ov094_02294bd4::func_ov094_0229403c(void *o) {
    s32 t = func_ov094_02293c68((void *)this, (s32)o);
    s32 r = -1;
    if (t != r) {
        r = data_ov094_02294bbc[t];
    }
    return r;
}

void Unk_ov094_02294bd4::func_ov094_02293fc4(s32 a, s32 b, u32 c, void *e, void *f) {
    s32 idx = func_ov094_02293c68((void *)this, (s32)e);
    s32 m1 = -1;
    if (idx != m1) {
        Unk_ov094_SetPal((Unk_ov094_02294bb4_Bits *)data_ov094_02294bb4, (u8)c);
        Unk_ov094_SetName((Unk_ov094_02294bb4_Bits *)data_ov094_02294bb4, data_ov094_02294bf4[idx]);
        func_02088730(1, data_ov094_02294bb4, a, b, m1, unk_20, f);
    }
}

void Unk_ov094_02294bd4::func_ov094_02293f94(s32 a, s32 b) {
    func_02088730(1, data_ov094_02294bec, a - 8, b - 8, -1, unk_20, 0);
}

void Unk_ov094_02294bd4::func_ov094_02293f64(s32 a, s32 b, s32 c, void *d) {
    func_02088730(1, data_ov094_02294bdc, a - 8, b - 8, c, unk_20, d);
}

void Unk_ov094_02294bd4::func_ov094_02293f34(s32 a, s32 b, s32 c) {
    func_02088730(1, data_ov094_02294be4, a - 8, b - 8, -1, unk_20, c);
}

void func_ov094_02293e64(Unk_ov094_02294a50 *o, s32 a1, s32 idx, s32 x, s32 y0)
{
    volatile s32 t;
    s32 y;
    x += func_ov094_02293df8(o, idx);
    y = y0 + func_ov094_02293d9c(o, idx);
    if (x >= -0x18) {
        if (func_ov094_02293b90((u32 *)((u8 *)o + 0x10), idx) != 0) {
            ((Unk_ov094_02294bd4 *)o)->func_ov094_02293f94(x, y);
        }
        if (func_ov094_02293b90((u32 *)((u8 *)o + 8), idx) != 0) {
            if (((Unk_ov094_02294bd4 *)o)->func_ov094_02294410(idx) != 0) {
                s32 w = ((Unk_ov094_02294bd4 *)o)->func_ov094_02294400();
                x += w;
                y += w;
            }
            if (((Unk_ov094_02294bd4 *)o)->func_ov094_022941ec((u8)idx) != 0 && func_02065578((void *)a1) == 4) {
                t = 0xe;
            } else {
                t = ((Unk_ov094_02294bd4 *)o)->func_ov094_0229403c((void *)a1);
            }
            ((Unk_ov094_02294bd4 *)o)->func_ov094_02293fc4(x, y, t, (void *)a1, 0);
            ((Unk_ov094_02294bd4 *)o)->func_ov094_02293f64(x, y, t, 0);
            if (((Unk_ov094_02294bd4 *)o)->func_ov094_02294410(idx) != 0) {
                ((Unk_ov094_02294bd4 *)o)->func_ov094_02293f34(x, y, 0);
            }
        }
    }
}

s32 func_ov094_02293df8(void *o, s32 i)
{
    if (i >= 0 && i <= 9) {
        if (i & 1) {
            return 0xe4;
        }
        return 0xcc;
    }
    if (i >= 0xa && i <= 0x22) {
        i -= 0xa;
        while (i >= 5) {
            i -= 5;
        }
        return data_ov094_02294bac[i];
    }
    if (i >= 0x23 && i <= 0x2c) {
        i -= 0x23;
        if (i & 1) {
            return 0x84;
        }
        return 0x6c;
    }
    if (i >= 0x2d && i <= 0x36) {
        i -= 0x2d;
        if (i & 1) {
            return 0x84;
        }
        return 0x6c;
    }
    return 0;
}

s32 func_ov094_02293d9c(void *o, s32 i)
{
    if (i >= 0 && i <= 9) {
        return (i >> 1) * 0x18 + 0x3c;
    }
    if (i >= 0xa && i <= 0x22) {
        s32 n;
        i -= 0xa;
        n = 0;
        while (i >= 5) {
            i -= 5;
            n++;
        }
        return n * 0x18 + 0x3c;
    }
    if (i >= 0x23 && i <= 0x2c) {
        i -= 0x23;
        return (i >> 1) * 0x18 + 0x3c;
    }
    if (i >= 0x2d && i <= 0x36) {
        i -= 0x2d;
        return (i >> 1) * 0x18 + 0x3c;
    }
    return 0;
}

BOOL func_ov094_02293d80(Unk_ov094_02293ca0_Obj *o, s32 i)
{
    if (func_ov094_02293b90(o->unk_08, i) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02293d2c(Unk_ov094_02293ca0_Obj *o)
{
    s32 q = (s32)PlayerInventory_getLetter(func_02098750(PlayerData_GetCurrent()), 0);
    s32 k = 0;
    s32 i = 0;
    do {
        if (func_ov094_02293c68(o, q) != -1) {
            func_ov094_02293bd4(o->unk_08, k);
        } else {
            func_ov094_02293bb4(o->unk_08, k);
        }
        q += 0xf4;
        k++;
        i++;
    } while (i < 10);
}

void func_ov094_02293d18(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0x2d, 0xa);
}

void func_ov094_02293d04(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0xa, 0x19);
}

void func_ov094_02293cf0(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0x23, 0xa);
}

void func_ov094_02293ca0(Unk_ov094_02293ca0_Obj *o, u8 *p, s32 m, s32 n)
{
    s32 i;
    o->unk_04 = p;
    u8 *q = o->unk_04;
    for (i = 0; i < n; i++) {
        if (func_ov094_02293c68(o, (s32)q) != -1) {
            func_ov094_02293bd4(o->unk_08, m);
        } else {
            func_ov094_02293bb4(o->unk_08, m);
        }
        q += 0xf4;
        m++;
    }
}

s32 func_ov094_02293c68(void *o, s32 h)
{
    s32 r = func_02065578((void *)h);
    if (r == 0) {
        return -1;
    }
    s32 t = (r - 1) * 2;
    if (func_020655d0(h) != 0xfff1) {
        t = t + 1;
    }
    return t;
}

void func_ov094_02293c58(Unk_ov094_02293c04_Rec *o)
{
    o->unk_26 = 4;
    o->unk_27 = 10;
}

void func_ov094_02293c50(Unk_ov094_02293c04_Rec *o)
{
    o->unk_27 = 10;
}

BOOL func_ov094_02293c1c(Unk_ov094_02293c04_Rec *o)
{
    if (o->unk_26 != 0) {
        o->unk_26 = o->unk_26 - 1;
        o->unk_27 = func_ov094_02293c04(o);
        return FALSE;
    }
    func_ov094_02293c50(o);
    return TRUE;
}

u8 func_ov094_02293c04(Unk_ov094_02293c04_Rec *o)
{
    u32 v = o->unk_26;
    if (v >= 4) {
        return 10;
    }
    return data_ov094_02294848[v];
}

void func_ov094_02293bf4(u32 *bits)
{
    s32 i;
    for (i = 0; i < 2; i++) {
        bits[i] = 0;
    }
}

void func_ov094_02293bd4(u32 *bits, s32 i)
{
    bits[i >> 5] |= (1 << (i & 0x1f));
}

void func_ov094_02293bb4(u32 *bits, s32 i)
{
    bits[i >> 5] &= ~(1 << (i & 0x1f));
}

BOOL func_ov094_02293b90(u32 *bits, s32 i)
{
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & bits[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

