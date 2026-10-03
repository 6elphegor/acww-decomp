#include "types.h"

struct Counter {
    Counter();
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};
struct Counter2 {
    Counter2();
    u8 unk_00;
    u8 unk_01;
};

struct Elem2a { Elem2a(); u16 d; };
struct Elem2b { Elem2b(); ~Elem2b(); u16 d; };
struct ArrA { u32 vt; u16 e[0x25]; ArrA(); };
struct ArrB { u32 vt; Elem2b e[0x25]; ArrB(); };

struct Str { Str(const u16 *s); ~Str(); u8 d[0x24]; };
struct Obj30 { Obj30(); ~Obj30(); u8 d[0x30]; };
struct Obj12 { Obj12(u32 a, u32 b); ~Obj12(); u32 d[3]; };
struct Big { Big(); ~Big(); u8 d[0xf4]; };

struct Bits5a {
    u16 unk_00 : 5;
    u16 unk_05 : 4;
    u16 unk_09 : 2;
    u16 unk_0b : 5;
};
struct Unk_020aebbc {
    /* 0x00 */ u32 unk_00;
    u8 pad[0x51 - 4];
    /* 0x51 */ u8 unk_51;
    u8 pad2[7];
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ Bits5a unk_5a;
};
struct Unk_020aec74_Out {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05;
    u16 unk_06;
};
struct Unk_021c47c4 {
    u32 unk_00, unk_04, unk_08;
};

extern "C" {
void *func_021355f0(void *p, s32 n, s32 size, void *ctor);
}

extern "C" {
void func_020ae870(void *p);
}

extern "C" {
u8 *func_020aeac4(void *p);
}

extern "C" {
u8 *func_020ae02c(void *p);
}

extern "C" {
s32 func_02076fc8(u8 *a, const void *b);
}

extern "C" {
void func_0203ce38(s32 a, s32 b);
}

extern "C" {
void func_0203ce24(s32 a, s32 b);
}

extern "C" {
void func_0203ce4c(s32 a, void *b);
}

extern "C" {
u8 *func_02063b8c(s32 a);
}

extern "C" {
BOOL func_02072e44(void *p);
}

extern "C" {
u32 func_020b50e8();
}

extern "C" {
void *func_02037558(void *a, s32 b, s32 c, s32 d);
}

extern "C" {
BOOL func_0204b2d4(void *p);
}

extern "C" {
u32 func_0204b25c(void *p);
}

extern "C" {
void *func_0204ebd8(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
BOOL func_0204b288();
}

extern "C" {
BOOL func_0204b300(void *p);
}

extern "C" {
void func_0204eb30(void *a, void *b, s32 c, s32 d, s32 e);
}

extern "C" {
s32 func_0200402c(s32 a);
}

extern "C" {
void func_02004054();
}

extern "C" {
void func_02004064();
}

extern "C" {
void *func_0223xxxx();
}

extern "C" {
void func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void func_02062e90(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, const void *h, s32 i);
}

extern "C" {
void func_02061168(void *a, void *b, s32 c);
}

extern "C" {
void func_02062f70(void *a, s32 b, void *c, s32 d, const void *e, s32 f, s32 g, s32 h);
}

extern "C" {
s32 PM_GetLCDPower();
}

extern "C" {
s32 PM_SetLCDPower(s32 a);
}

extern "C" {
void func_0211c6c4(s32 a, s32 b);
}

extern "C" {
void PM_GetBackLight(void *a, void *b);
}

extern "C" {
void *func_0209750c();
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
BOOL func_0203c4cc(void *a, void *b);
}

extern "C" {
void func_020af488(u32 a);
}

extern "C" {
void *func_ov004_02235718();
}

extern "C" {
void *func_ov004_022355d8(void *a, s32 b, s32 c, s32 d);
}

extern "C" {
void *func_ov004_0223584c();
}

extern "C" {
void func_ov004_02235740(void *a, void *b);
}

extern "C" {
void func_ov004_022344dc();
}

extern "C" {
void func_020aee90(s32 x, s32 y, u32 a, s32 b);
}

extern "C" {
u32 func_0209888c(void *a);
}

extern "C" {
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}

extern "C" {
void func_02065588(void *a, u32 b, s32 c);
}

extern "C" {
void func_02096a50(void *a, s32 b);
}

extern "C" {
void func_02065cd4(void *a);
}

extern "C" {
void func_02065cc8(void *a);
}

extern "C" {
s32 func_ov003_0222eb68(s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
BOOL func_020af0a4(u32 i, u32 n, u8 *bits);
}

extern "C" {
u16 *func_020af034(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out);
}

extern "C" {
BOOL func_020af278(s32 m);
}

extern "C" {
void func_020af258(s32 m);
}

extern "C" {
void func_020af268(s32 m);
}

extern "C" {
void func_020af2fc();
}

extern "C" {
void func_020af2c4();
}

extern "C" {
void func_020af290();
}

extern "C" {
void func_020af230(Counter *p);
}

extern "C" {
BOOL func_020af1ec(Counter *p);
}

extern "C" {
extern u8 data_021ed104[];
}

extern "C" {
extern u8 data_020e2e9c[];
}

extern "C" {
extern u8 data_020e2ea8[];
}

extern "C" {
extern u8 data_020cbb18[];
}

extern "C" {
extern u8 data_021ee160[];
}

extern "C" {
extern u16 data_021ee164;
}

extern "C" {
extern u16 data_021ee168;
}

extern "C" {
extern u8 data_021ee1f4[];
}

extern "C" {
u8 data_021ee240;
}

extern "C" {
u8 data_021ee244;
}

extern "C" {
u32 data_021ee248;
}

extern "C" {
u32 data_021ee24c;
}

extern "C" {
extern u8 data_021ee25c[];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern Unk_021c47c4 *data_021c47c4;
}

extern "C" {
extern u16 data_020d09cc[];
}

extern "C" {
extern u8 data_020e2ebc[], data_020e2ec0[], data_020e2eb8[];
}

extern "C" {
void func_02004b60(void *p);
}

extern "C" {
static inline BOOL R1(u16 *p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
}

extern "C" {
static inline BOOL R2(u16 *p, u32 lo, u32 hi) { if (*p >= lo && *p <= hi) return TRUE; return FALSE; }
}

extern "C" {
static inline BOOL InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
}

extern "C" {
static inline BOOL IsEq(u32 c, u32 v) { if (c >= v && c <= v) return TRUE; return FALSE; }
}

extern "C" {
static inline BOOL IsZ() { if (data_020e416c == 0) return TRUE; return FALSE; }
}
// prototypes
extern "C" s32 func_020af3bc(s32 a, s32 b, s32 c, s32 d, s16 e);
extern "C" void func_020af3a8();
extern "C" void func_020af33c();
extern "C" void func_020af330();
extern "C" void func_020af2fc();
extern "C" void func_020af2c4();
extern "C" void func_020af290();
extern "C" BOOL func_020af278(s32 m);
extern "C" void func_020af268(s32 m);
extern "C" void func_020af258(s32 m);


extern "C" s32 func_020af3bc(s32 a, s32 b, s32 c, s32 d, s16 e) {
    BOOL z = data_020e416c == 0;
    if (z && d > 0) return func_ov003_0222eb68(a, b, c, d, e);
    return 0;
}

extern "C" void func_020af3a8() {
    data_021ee240 = 0;
    data_021ee244 = 0;
}

extern "C" void func_020af33c() {
    switch (data_021ee244) {
    case 0:
        if ((*(vu16 *)0x27fffa8 & 0x8000) >> 15) {
            data_021ee244 = 1;
            func_020af2fc();
            PM_SetLCDPower(0);
            func_02004064();
        }
        break;
    case 1:
        if (!((*(vu16 *)0x27fffa8 & 0x8000) >> 15)) {
            data_021ee244 = 2;
            func_020af2c4();
            func_020af290();
        }
        break;
    case 2:
        func_020af290();
        break;
    }
}

extern "C" void func_020af330() { func_020af268(2); }

extern "C" void func_020af2fc() {
    if (!func_020af278(1)) {
        PM_GetBackLight(&data_021ee24c, &data_021ee248);
        func_0211c6c4(2, 0);
        func_020af268(1);
    }
}

extern "C" void func_020af2c4() {
    if (func_020af278(1)) {
        func_0211c6c4(0, data_021ee24c);
        func_0211c6c4(1, data_021ee248);
        func_020af258(1);
    }
}

extern "C" void func_020af290() {
    if (PM_GetLCDPower() == 1 || PM_SetLCDPower(1)) {
        if (!func_020af278(2)) func_02004054();
        data_021ee244 = 0;
    }
}

extern "C" BOOL func_020af278(s32 m) {
    if (data_021ee240 & m) return TRUE;
    return FALSE;
}

extern "C" void func_020af268(s32 m) { data_021ee240 |= m; }

extern "C" void func_020af258(s32 m) { data_021ee240 &= ~m; }

extern "C" {
struct Loc488 { u8 a; u8 pad; u16 b; };
}

