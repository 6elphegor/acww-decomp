#include "types.h"


struct Unk_0203442c {
    u16 v;
    Unk_0203442c();
    Unk_0203442c(u32 x);
    Unk_0203442c(u16 *src);
    ~Unk_0203442c();
};


struct Unk_0204b598_Elem {
    u16 v;
    Unk_0204b598_Elem() {}
    ~Unk_0204b598_Elem();
};

// ---- unk_0204a754.cpp
namespace nA {
extern "C" {

BOOL func_0204a7d0(u16 *p);
BOOL func_0204a800(u16 *p);
BOOL func_0204a830(u16 *p);
BOOL func_0204a860(u16 *p);
BOOL func_0204a890(u16 *p);
BOOL func_0204a8c0(u16 *p);
BOOL func_0204a8f0(u16 *p);
BOOL func_0204a920(u16 *p);
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi);
s32 func_0204aa24(u16 *p);
BOOL func_0204aab0(u16 *p);
BOOL func_0204aaa4(u16 *p);
BOOL func_0204aa98(u16 *p);
BOOL func_0204aa60(u16 *p);
BOOL func_0204aa28(u16 *p);
BOOL func_0204aabc(u16 *p);
BOOL func_0204aaf4(u16 *p);
BOOL func_0204ab18(u16 *p);
BOOL func_0204ab24(u16 *p);
BOOL func_0204ab30(u16 *p);
BOOL func_0204ab3c(u16 *p);
BOOL func_0204ab74(u16 *p);
BOOL func_0204ab80(u16 *p);
BOOL func_0204ab8c(u16 *p);
BOOL func_0204ab98(u16 *p);
BOOL func_0204abec(u16 *p);
BOOL func_0204ac18(u16 *p);
BOOL func_0204ac24(u16 *p);
BOOL func_0204ac30(u16 *p);
BOOL func_0204ac54(u16 *p);
BOOL func_0204ac64(u16 *p);
BOOL func_0204ac70(u16 *p);
BOOL func_0204aca4(u16 *p);
BOOL func_0204acd8(u16 *p);
BOOL func_0204ad58(u16 *p);
BOOL func_0204ad64(u16 *p);
BOOL func_0204ad70(u16 *p);
BOOL func_0204ad7c(u16 *p);
BOOL func_0204ad88(u16 *p);
BOOL func_0204adf0(u16 *p);
BOOL func_0204ae58(u16 *p);
BOOL func_0204ae64(u16 *p);
BOOL func_0204ae74(u16 *p);
BOOL func_0204ae80(u16 *p);
BOOL func_0204ae90(u16 *p);
BOOL func_0204ae9c(u16 *p);
BOOL func_0204aea8(u16 *p);
BOOL func_0204aeb4(u16 *p);
BOOL func_0204aec0(u16 *p);
BOOL func_0204af90(u16 *p);
BOOL func_0204afe4(u16 *p);
BOOL func_0204b038(u16 *p);
BOOL func_0204b08c(u16 *p);
u16 func_0204a780(u32 x);
u16 func_0204a798(u32 x);
u16 func_0204a7b0(u32 x);
u16 func_0204a948(u32 x);
u16 func_0204a97c(u32 x);
u16 func_0204a994(u32 x);
u16 func_0204a9ac(u32 x);
u16 func_0204a960(u32 x);
static inline BOOL Unk_0204a7d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
BOOL func_0204a7c8(u16 *p);
BOOL func_0204a7d0(u16 *p);
BOOL func_0204a7f8(u16 *p);
BOOL func_0204a800(u16 *p);
BOOL func_0204a828(u16 *p);
BOOL func_0204a830(u16 *p);
BOOL func_0204a858(u16 *p);
BOOL func_0204a860(u16 *p);
BOOL func_0204a888(u16 *p);
BOOL func_0204a890(u16 *p);
BOOL func_0204a8b8(u16 *p);
BOOL func_0204a8c0(u16 *p);
BOOL func_0204a8e8(u16 *p);
BOOL func_0204a8f0(u16 *p);
BOOL func_0204a918(u16 *p);
BOOL func_0204a920(u16 *p);
void func_0204a9c4(u16 *p, u32 v);
void func_0204ad94(u16 *p, u32 v);
BOOL func_0204a9c8(u16 *p);
s32 func_0204aa24(u16 *p);
BOOL func_0204aa28(u16 *p);
BOOL func_0204aa60(u16 *p);
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi);
BOOL func_0204aa98(u16 *p);
BOOL func_0204aaa4(u16 *p);
BOOL func_0204aab0(u16 *p);
BOOL func_0204aabc(u16 *p);
BOOL func_0204aaf4(u16 *p);
BOOL func_0204ab18(u16 *p);
BOOL func_0204ab24(u16 *p);
BOOL func_0204ab30(u16 *p);
BOOL func_0204ab3c(u16 *p);
BOOL func_0204ab74(u16 *p);
BOOL func_0204ab80(u16 *p);
BOOL func_0204ab8c(u16 *p);
BOOL func_0204ab98(u16 *p);
s32 func_0204aba4(u16 *p);
BOOL func_0204abec(u16 *p);
BOOL func_0204ac18(u16 *p);
BOOL func_0204ac24(u16 *p);
BOOL func_0204ac30(u16 *p);
BOOL func_0204ac54(u16 *p);
BOOL func_0204ac64(u16 *p);
BOOL func_0204ac70(u16 *p);
BOOL func_0204aca4(u16 *p);
BOOL func_0204acd8(u16 *p);
s32 func_0204ad08(u16 *p);
BOOL func_0204ad58(u16 *p);
BOOL func_0204ad64(u16 *p);
BOOL func_0204ad70(u16 *p);
BOOL func_0204ad7c(u16 *p);
BOOL func_0204ad88(u16 *p);
s32 func_0204ad98(u16 *p);
BOOL func_0204adf0(u16 *p);
BOOL func_0204ae58(u16 *p);
BOOL func_0204ae64(u16 *p);
BOOL func_0204ae74(u16 *p);
BOOL func_0204ae80(u16 *p);
BOOL func_0204ae90(u16 *p);
BOOL func_0204ae9c(u16 *p);
BOOL func_0204aea8(u16 *p);
BOOL func_0204aeb4(u16 *p);
BOOL func_0204aec0(u16 *p);
BOOL func_0204aecc(u16 *p);
BOOL func_0204af08(u16 *p);
BOOL func_0204af90(u16 *p);
BOOL func_0204afe4(u16 *p);
BOOL func_0204b038(u16 *p);
}
}

// ---- unk_0204b08c.cpp
namespace nB {
extern "C" {

BOOL func_0204a860(u16 *p);
BOOL func_0204a8c0(u16 *p);
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi);
s32 func_0204aa24(u16 *p);
void func_0204a9c4(u16 *p, u32 v);
void func_0204ad94(u16 *p, u32 v);
u32 func_0206177c();
u32 func_02061788();
BOOL func_02061bf0(u16 *p);
s32 func_02061914(u16 *p);
s32 func_0206198c(u16 *p);
BOOL func_02061a58(u16 *p);
BOOL func_02052d2c(u16 *p);
BOOL func_02052d8c(u16 *p);
u32 func_02060c70(u32 x);
s32 func_0204f34c(s32 x);
void func_02061478(void *p, u32 x);
s32 func_0204be70(void *p);
BOOL func_0204b08c(u16 *p);
u16 func_0204b0e0(u32 x);
BOOL func_0204b0f8(u16 *p);
u16 func_0204b10c(u32 x);
s32 func_0204b124(u16 *p);
BOOL func_0204b14c(u16 *p);
u16 func_0204b160(u32 x);
s32 func_0204b178(u16 *p);
BOOL func_0204b1a0(u16 *p);
u16 func_0204b1b4(u32 x);
u16 func_0204b1cc(u32 x);
BOOL func_0204b1e4(u16 *p);
BOOL func_0204b20c(u16 *p);
void func_0204b220(u16 *p, s32 y);
u16 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(u16 *p);
s32 func_0204b274(u16 *p);
BOOL func_0204b288(u16 *p);
BOOL func_0204b2ac(u16 *p);
BOOL func_0204b2cc(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b2f0(u16 *p);
BOOL func_0204b300(u16 *p);
u16 func_0204b318(u32 a, s32 b);
s32 func_0204b338(u16 *p);
s32 func_0204b354(u16 *p);
BOOL func_0204b37c(u16 *p);
u16 func_0204b3c8(u32 x);
s32 func_0204b3e0(u16 *p);
BOOL func_0204b408(u16 *p);
BOOL func_0204b430(u16 *p);
s32 func_0204b458(u16 *p);
BOOL func_0204b480(u16 *p);
void func_0204b4a8(u16 *out, u32 n);
void func_0204b510(u16 *dst, u16 *src);
u16 func_0204b518(u32 x);
void func_0204b530(u16 *out, u32 n);
s32 func_0204b598(u16 *p);
s32 func_0204b5ec(u16 *p);
void func_0204b640(u16 *out, u32 a, u32 b);
u16 func_0204b65c(u32 a, u32 b);
u16 func_0204b670(u32 x);
s32 func_0204b688(u16 *p);
s32 func_0204b6a8(u16 *p);
BOOL func_0204b6d0(u16 *p);
s32 func_0204b6f8(u16 *p);
s32 func_0204b718(s32 a, BOOL up, s32 *out);
u16 func_0204b808(u32 x);
BOOL func_0204b820(u16 *p);
BOOL func_0204b858(u32 x);
BOOL func_0204b8ac(u32 x);
u16 func_0204b900(u16 *p);
s32 func_0204b928(u16 *p);
BOOL func_0204b950(u16 *p);
s32 func_0204b978(u16 *p);
s32 func_0204b998(u16 *p);
BOOL func_0204b9c0(u16 *p);
BOOL func_0204b08c(u16 *p);
u16 func_0204b0e0(u32 x);
BOOL func_0204b0f8(u16 *p);
u16 func_0204b10c(u32 x);
s32 func_0204b124(u16 *p);
BOOL func_0204b14c(u16 *p);
u16 func_0204b160(u32 x);
s32 func_0204b178(u16 *p);
BOOL func_0204b1a0(u16 *p);
u16 func_0204b1b4(u32 x);
u16 func_0204b1cc(u32 x);
BOOL func_0204b1e4(u16 *p);
BOOL func_0204b20c(u16 *p);
void func_0204b220(u16 *p, s32 y);
u16 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(u16 *p);
s32 func_0204b274(u16 *p);
BOOL func_0204b288(u16 *p);
BOOL func_0204b2ac(u16 *p);
BOOL func_0204b2cc(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b2f0(u16 *p);
BOOL func_0204b300(u16 *p);
u16 func_0204b318(u32 a, s32 b);
s32 func_0204b338(u16 *p);
s32 func_0204b354(u16 *p);
BOOL func_0204b37c(u16 *p);
u16 func_0204b3c8(u32 x);
s32 func_0204b3e0(u16 *p);
static inline BOOL Unk_0204b408_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
BOOL func_0204b408(u16 *p);
BOOL func_0204b430(u16 *p);
s32 func_0204b458(u16 *p);
BOOL func_0204b480(u16 *p);
void func_0204b4a8(u16 *out, u32 n);
void func_0204b510(u16 *dst, u16 *src);
u16 func_0204b518(u32 x);
void func_0204b530(u16 *out, u32 n);
s32 func_0204b598(u16 *p);
s32 func_0204b5ec(u16 *p);
void func_0204b640(u16 *out, u32 a, u32 b);
u16 func_0204b65c(u32 a, u32 b);
u16 func_0204b670(u32 x);
s32 func_0204b688(u16 *p);
s32 func_0204b6a8(u16 *p);
BOOL func_0204b6d0(u16 *p);
s32 func_0204b6f8(u16 *p);
s32 func_0204b718(s32 a, BOOL up, s32 *out);
u16 func_0204b808(u32 x);
BOOL func_0204b820(u16 *p);
BOOL func_0204b858(u32 x);
BOOL func_0204b8ac(u32 x);
u16 func_0204b900(u16 *p);
s32 func_0204b928(u16 *p);
BOOL func_0204b950(u16 *p);
s32 func_0204b978(u16 *p);
s32 func_0204b998(u16 *p);
}
}

// ---- unk_0204b9c0.cpp
namespace nC {
extern "C" {

struct Unk_0204c0f4_Date {
    u8 a, b, c, d;
};
struct Unk_0204c1fc_Entry {
    u16 unk_00;
    u8 unk_02;
    s32 unk_04;
    s32 unk_08;
};
struct Unk_0204c084_Data {
    u8 pad[0x15];
    s8 unk_15;
    u8 pad16;
    u8 unk_17;
};
struct Unk_0204c0b8_S {
    u8 pad[0x21];
    s8 unk_21;
};
struct Unk_0204c20c_S {
    u8 pad[0x16];
    u8 unk_16[11];
};
struct Unk_0204c21c_S {
    u8 pad[0xc];
    u8 unk_0c[10];
};
struct Unk_0204c290_W {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};
BOOL func_0204a7d0(u16 *p);
s32 func_0204aa24(u16 *p);
void func_0204b950_dummy();
BOOL func_0204b950(u16 *p);
BOOL func_0204b2d4(u16 *p);
BOOL func_0204b300(u16 *p);
s32 func_0204b2f0(u16 *p);
s32 func_0204b25c(u16 *p);
u32 func_0204f060(s32 x);
void func_0204bab0(u16 *dst, u16 *src);
s32 func_02061cbc(u16 *p);
s32 func_02061ec0(u16 *p);
s32 func_02061dd0(u16 *p);
s32 func_020620a4(u16 *p);
s32 func_02061efc(const Unk_0203442c &p);
s32 func_020aeb80(void *p);
s32 func_020acde8(u32 x);
u16 *func_020acf54(u16 *p);
u16 *_ZN12Unk_0209865c13func_020986bcEv(void *p);
void *func_0209750c();
s32 func_020534d8(s32 x);
s32 func_020974f8();
s32 func_0209cf88(Unk_0204c0f4_Date *d);
s32 func_0209cd00(Unk_0204c0f4_Date *a, Unk_0204c0f4_Date *b);
s32 func_0209cf0c();
void func_0203f1e8(s32 *a, s32 *b, u32 c);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
s32 _s32_div_f(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_0209d2c0(void *p, s32 n);
s32 func_02063b8c(s32 n);
Unk_0204c290_W *func_0204da0c();
u16 *func_0204ebd8(Unk_0204c290_W *w, s32 cx, s32 cy, s32 ix, s32 iy, u32 z);
void func_0204eb30(Unk_0204c290_W *w, u16 *item, s32 x, s32 y, u32 z);
extern void *data_020cbb18;
extern u8 data_021d7350[];
extern Unk_0204c084_Data data_021ed1b0;
extern Unk_0204c1fc_Entry data_021ed1c8[];
BOOL func_0204b9c0(u16 *p);
s32 func_0204b998(u16 *p);
BOOL func_0204bbe4(u16 *p);
BOOL func_0204bc0c(u16 *p);
BOOL func_0204bbbc(u16 *p);
BOOL func_0204bdc0(u16 *p);
s32 func_0204bde8(u16 *p);
s32 func_0204be70(u16 *p);
s32 func_0204bc34(u16 *p);
BOOL func_0204bd6c(u16 *p);
u8 *func_0204bdb8();
BOOL func_0204c05c(u16 *p);
s32 func_0204c058(u8 *p);
u16 func_0204c040(s32 n);
BOOL func_0204c000(u16 *a, u16 *b);
s32 func_0204be64(u16 *p);
s32 func_0204c188(s32 x, u32 id);
Unk_0204c1fc_Entry *func_0204c1fc(s32 i);
Unk_0204c0f4_Date *func_0204c140(u8 *p, s32 i);
static inline BOOL Unk_0204b9c0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
BOOL func_0204b9c0(u16 *p);
s32 func_0204b9e8(u16 *p);
BOOL func_0204ba30(u16 *a, u16 *out);
void func_0204bab0(u16 *dst, u16 *src);
BOOL func_0204bab8(u16 *p);
s32 func_0204bae0(u16 *p);
s32 func_0204bb18(u16 *p);
BOOL func_0204bbbc(u16 *p);
BOOL func_0204bbe4(u16 *p);
BOOL func_0204bc0c(u16 *p);
s32 func_0204bc34(u16 *p);
s32 func_0204bcb0(u16 *p);
static inline BOOL Unk_0204bd14_A(u16 *p) {
    BOOL r = TRUE;
    if (!(*p == 0xf030 || *p == 0xf031)) r = FALSE;
    return r;
}
static inline BOOL Unk_0204bd14_B(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_A(p) || *p == 0xfffd)) r = FALSE;
    return r;
}
static inline BOOL Unk_0204bd14_C(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_B(p) || *p == 0xfffe)) r = FALSE;
    return r;
}
BOOL func_0204bd14(u16 *p);
BOOL func_0204bd6c(u16 *p);
s32 func_0204bd80(u16 *p);
BOOL func_0204bdc0(u16 *p);
s32 func_0204bde8(u16 *p);
s32 func_0204be64(u16 *p);
s32 func_0204be70(u16 *p);
BOOL func_0204c000(u16 *a, u16 *b);
u16 func_0204c040(s32 n);
s32 func_0204c058(u8 *p);
BOOL func_0204c05c(u16 *p);
void func_0204c084(u32 n);
u32 func_0204c0ac();
void func_0204c0b8(Unk_0204c0b8_S *p, s32 k, s32 add);
BOOL func_0204c0e0();
BOOL func_0204c0f4(u8 *p);
void func_0204c124(u8 *p);
Unk_0204c0f4_Date *func_0204c140(u8 *p, s32 i);
s32 func_0204c148(s32 x, u32 id);
s32 func_0204c188(s32 x, u32 id);
void func_0204c1b8(s32 x, u32 id);
void func_0204c1d8();
Unk_0204c1fc_Entry *func_0204c1fc(s32 i);
void func_0204c20c(Unk_0204c20c_S *p);
void func_0204c21c(Unk_0204c21c_S *p);
void func_0204c22c(u8 *dst, u8 *src);
struct Unk_0204c290_V {
    u16 v;
    u16 pad;
};
void func_0204c290();
u8 *func_0204bdb8();
}
}

namespace nC {
extern "C" void func_0204c290() {
    Unk_0204c290_W *w;
    s32 wd, ht, x, y;
    s32 cx, cy;
    w = func_0204da0c();
    if (w) {
        s32 *q = &w->unk_04;
        wd = q[0] << 4;
        ht = q[1] << 4;
        for (y = 0x30; y < ht; y++) {
            x = 0;
            if (x < wd) {
                goto test;
            loop:
                {
                    cx = x >> 4; cy = y >> 4;
                    u16 *it = func_0204ebd8(w, cx, cy, x - (cx << 4), y - (cy << 4), 0);
                    if (it) {
                        if (Unk_0204b9c0_R(it, 0x5d, 0x61)) {
                            u16 v = 0x2a;
                            func_0204eb30(w, &v, x, y, 0);
                        }
                    }
                }
                x++;
            test:
                if (x < wd) goto loop;
            }
        }
    }
}
}

namespace nC {
extern "C" void func_0204c22c(u8 *dst, u8 *src) {
    u32 l[2];
    l[0] = 0;
    l[1] = 0;
    s32 d = func_0209ceac(src[2], src[1], src[0]);
    s32 r;
    do {
        r = func_02063b8c(7);
    } while (r == 1 || r == 2);
    l[0] = 0;
    l[1] = 0;
    ((u8 *)l)[5] = src[2];
    ((u8 *)l)[4] = src[1];
    ((u8 *)l)[3] = src[0];
    func_0209d2c0(l, (7 - d) + r);
    dst[10] = ((u8 *)l)[5];
    dst[9] = ((u8 *)l)[4];
    dst[8] = ((u8 *)l)[3];
}
}

namespace nC {
extern "C" void func_0204c21c(Unk_0204c21c_S *p) { for (s32 i = 0; i < 10; i++) p->unk_0c[i] = 0; }
}

namespace nC {
extern "C" void func_0204c20c(Unk_0204c20c_S *p) { for (s32 i = 0; i < 11; i++) p->unk_16[i] = 0; }
}

namespace nC {
extern "C" Unk_0204c1fc_Entry *func_0204c1fc(s32 i) { return &data_021ed1c8[i]; }
}

namespace nC {
extern "C" void func_0204c1d8() {
    Unk_0204c1fc_Entry *e = func_0204c1fc(0);
    for (s32 i = 0; i < 4; e++, i++) {
        e->unk_00 = 0x63;
        e->unk_04 = 1;
        e->unk_08 = 1;
    }
}
}

namespace nC {
extern "C" void func_0204c1b8(s32 x, u32 id) {
    s32 i = func_0204c188(x, id);
    if (i >= 0) {
        Unk_0204c1fc_Entry *e = func_0204c1fc(i);
        e->unk_00 = 0x63;
        e->unk_04 = 1;
        e->unk_08 = 1;
    }
}
}

namespace nC {
extern "C" s32 func_0204c188(s32 x, u32 id) {
    s32 r = -1;
    Unk_0204c1fc_Entry *e = func_0204c1fc(0);
    for (s32 i = 0; i < 4; e++, i++) {
        if (id == e->unk_00) { r = i; break; }
    }
    return r;
}
}

namespace nC {
extern "C" s32 func_0204c148(s32 x, u32 id) {
    s32 i = func_0204c188(x, id);
    if (i < 0) {
        i = func_0204c188(x, 0x63);
        if (i >= 0) {
            Unk_0204c1fc_Entry *e = func_0204c1fc(i);
            e->unk_00 = id;
            func_0203f1e8(&e->unk_04, &e->unk_08, id);
            e->unk_02 = func_0209cf0c();
        }
    }
    return i;
}
}

namespace nC {
extern "C" Unk_0204c0f4_Date *func_0204c140(u8 *p, s32 i) { return (Unk_0204c0f4_Date *)(p + 0x58) + i; }
}

namespace nC {
extern "C" void func_0204c124(u8 *p) { func_0209cf88(func_0204c140(p, func_020974f8())); }
}

namespace nC {
extern "C" BOOL func_0204c0f4(u8 *p) {
    BOOL r = FALSE;
    s32 i = func_020974f8();
    Unk_0204c0f4_Date t;
    func_0209cf88(&t);
    p += 0x58;
    if (func_0209cd00(&t, (Unk_0204c0f4_Date *)p + i)) r = TRUE;
    return r;
}
}

namespace nC {
extern "C" BOOL func_0204c0e0() {
    BOOL r = FALSE;
    if (data_021ed1b0.unk_15 >= 0xf) r = TRUE;
    return r;
}
}

namespace nC {
extern "C" void func_0204c0b8(Unk_0204c0b8_S *p, s32 k, s32 add) {
    if (k == 4) {
        s32 v = p->unk_21;
        if (v < 0) p->unk_21 = 1;
        else p->unk_21 = v + add;
    } else {
        p->unk_21 = -1;
    }
}
}

namespace nC {
extern "C" u32 func_0204c0ac() { return data_021ed1b0.unk_17; }
}

namespace nC {
extern "C" void func_0204c084(u32 n) {
    if (!_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        if (n >= 0x17) n = 0x16;
        data_021ed1b0.unk_17 = n;
    }
}
}

namespace nC {
extern "C" BOOL func_0204c05c(u16 *p) { if (Unk_0204b9c0_R(p, 0x1518, 0x151c)) return TRUE; return FALSE; }
}

namespace nC {
extern "C" s32 func_0204c058(u8 *p) { return *(s32 *)(p + 4); }
}

namespace nC {
extern "C" u16 func_0204c040(s32 n) { if ((u32)n < 5) return n + 0x1518; return 0x1518; }
}

namespace nC {
extern "C" BOOL func_0204c000(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        if (func_0204b25c(a) == func_0204b25c(b)) return TRUE;
        return FALSE;
    }
    if (*a == *b) return TRUE;
    return FALSE;
}
}

namespace nC {
extern "C" s32 func_0204be70(u16 *p) {
    Unk_0203442c a(p);
    switch (func_0204b2f0(&a.v)) {
    case 1:
        if (func_0204bdc0(&a.v)) {
            return func_02061efc(Unk_0203442c(func_0204aa24(&a.v))) * 10;
        } else if (func_0204c05c(&a.v)) {
            Unk_0203442c c(func_0204c040(func_0204c058(func_0204bdb8() + 0x15e54)));
            if (func_0204c000(&a.v, &c.v)) {
                return func_02061efc(Unk_0203442c(func_0204aa24(&a.v))) / 5;
            }
        } else if (func_0204aa24(p) == 0x1406 || func_0204aa24(p) == 0x1407) {
            return func_02061efc(Unk_0203442c(func_0204aa24(&a.v))) * 100;
        }
        return func_02061efc(Unk_0203442c(func_0204aa24(&a.v)));
    case 3:
    case 4: {
        s32 x = func_0204b25c(&a.v);
        if (x == 0x208) return func_020534d8(x) * 100;
        return func_020534d8(x);
    }
    default:
        return 0;
    }
}
}

#pragma dont_inline on
namespace nC {
extern "C" s32 func_0204be64(u16 *p) { return func_020acde8(*p); }
}
#pragma dont_inline reset

namespace nC {
extern "C" s32 func_0204bde8(u16 *p) {
    s32 a = func_0204be70(p);
    if (func_0204bdc0(p)) return a;
    void *g = func_0209750c();
    if (g) {
        s32 c = func_0204be64(func_020acf54(_ZN12Unk_0209865c13func_020986bcEv(g)));
        s32 k = 0;
        switch (c) {
        case 2: k = 5; break;
        case 3: k = 10; break;
        case 4: k = 20; break;
        }
        if (k == 0) return a;
        a = a * (100 - k);
        if (a >= 100) return _s32_div_f(a, 100);
        return FX_Div(a << 12, 0x64000) >> 12;
    }
    return a;
}
}

namespace nC {
extern "C" BOOL func_0204bdc0(u16 *p) { if (Unk_0204b9c0_R(p, 0x1492, 0x14fd)) return TRUE; return FALSE; }
}

#pragma dont_inline on
namespace nC {
extern "C" u8 *func_0204bdb8() { return data_021d7350; }
}
#pragma dont_inline reset

namespace nC {
extern "C" s32 func_0204bd80(u16 *p) {
    s32 a = func_0204bde8(p);
    if (func_0204bdc0(p)) return a;
    a >>= func_020aeb80(func_0204bdb8() + 0x15db4);
    return a;
}
}

namespace nC {
extern "C" BOOL func_0204bd6c(u16 *p) { if (*p == 0xffff) return TRUE; return FALSE; }
}

namespace nC {
extern "C" BOOL func_0204bd14(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_C(p) || func_0204bd6c(p))) r = FALSE;
    return r;
}
}

namespace nC {
extern "C" s32 func_0204bcb0(u16 *p) {
    switch (func_0204b2f0(p)) {
    case 1: {
        Unk_0203442c e(func_0204aa24(p));
        return func_020620a4(&e.v);
    }
    case 3:
    case 4:
        if (func_0204bc0c(p)) return 0xa7;
        if (func_0204bbe4(p)) return 1;
        return 0;
    default:
        return 0;
    }
}
}

namespace nC {
extern "C" s32 func_0204bc34(u16 *p) {
    Unk_0203442c a(p);
    switch (func_0204b2f0(&a.v)) {
    case 1: {
        Unk_0203442c b(func_0204aa24(&a.v));
        return func_02061dd0(&b.v);
    }
    case 3:
    case 4:
        if (func_0204bbe4(&a.v)) return 1;
        return 0;
    default:
        return 0;
    }
}
}

namespace nC {
extern "C" BOOL func_0204bc0c(u16 *p) { if (Unk_0204b9c0_R(p, 0x450c, 0x45db)) return TRUE; return FALSE; }
}

namespace nC {
extern "C" BOOL func_0204bbe4(u16 *p) { if (Unk_0204b9c0_R(p, 0x45dc, 0x47d7)) return TRUE; return FALSE; }
}

namespace nC {
extern "C" BOOL func_0204bbbc(u16 *p) { if (Unk_0204b9c0_R(p, 0x3894, 0x38e3)) return TRUE; return FALSE; }
}

namespace nC {
extern "C" s32 func_0204bb18(u16 *p) {
    Unk_0203442c a(p);
    if (func_0204b2f0(&a.v) == 1) {
        Unk_0203442c b(func_0204aa24(p));
        return func_02061ec0(&b.v);
    } else if (func_0204b2d4(&a.v)) {
        if (func_0204bc0c(&a.v)) return 0x39;
        if (func_0204bbe4(&a.v)) return 0x3a;
        if (func_0204bbbc(&a.v)) return 0x3a;
        return 0x3b;
    }
    return 0;
}
}

namespace nC {
extern "C" s32 func_0204bae0(u16 *p) {
    if (func_0204b2f0(p) == 1) {
        Unk_0203442c e(func_0204aa24(p));
        return func_02061cbc(&e.v);
    }
    return 0;
}
}

namespace nC {
extern "C" BOOL func_0204bab8(u16 *p) {
    if (func_0204a7d0(p)) {
        if (func_0204bc34(p) == 8) return TRUE;
        return FALSE;
    }
    return FALSE;
}
}

namespace nC {
extern "C" void func_0204bab0(u16 *dst, u16 *src) { *dst = *src; }
}

namespace nC {
extern "C" BOOL func_0204ba30(u16 *a, u16 *out) {
    Unk_0203442c e1(0xfff1);
    BOOL r = FALSE;
    Unk_0203442c e2(a);
    if ((func_0204b300(&e2.v) || func_0204b2d4(&e2.v)) && !func_0204b950(&e2.v) && !func_0204b9c0(&e2.v)) {
        func_0204bab0(&e1.v, &e2.v);
        r = TRUE;
    }
    if (out) func_0204bab0(out, &e1.v);
    return r;
}
}

namespace nC {
extern "C" s32 func_0204b9e8(u16 *p) {
    if (func_0204b9c0(p)) {
        switch (func_0204f060(func_0204b998(p))) {
        case 1: return 0;
        case 3: return 1;
        case 2: return 2;
        case 0: return 3;
        }
    }
    return 4;
}
}

namespace nC {
extern "C" BOOL func_0204b9c0(u16 *p) { if (Unk_0204b9c0_R(p, 0x12e8, 0x131f)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b998(u16 *p) { if (func_0204b9c0(p)) return func_0204aa24(p) - 0x12e8; return -1; }
}

namespace nB {
extern "C" s32 func_0204b978(u16 *p) {
    if (func_0204b9c0(p)) return func_0204f34c(func_0204b998(p));
    return 10;
}
}

namespace nB {
extern "C" BOOL func_0204b950(u16 *p) { if (Unk_0204b408_R(p, 0x12b0, 0x12e7)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b928(u16 *p) { if (func_0204b950(p)) return func_0204aa24(p) - 0x12b0; return -1; }
}

namespace nB {
extern "C" u16 func_0204b900(u16 *p) {
    if (func_0204b950(p)) return func_02060c70((u8)func_0204b928(p));
    return 0;
}
}

namespace nB {
extern "C" BOOL func_0204b8ac(u32 x) {
    Unk_0204b598_Elem e;
    func_02061478(&e, x);
    if (func_0204b2f0(&e.v) == 1) return func_02061a58(&e.v);
    if (func_0204b2d4(&e.v)) return func_02052d8c(&e.v);
    return FALSE;
}
}

namespace nB {
extern "C" BOOL func_0204b858(u32 x) {
    Unk_0204b598_Elem e;
    func_02061478(&e, x);
    if (func_0204b2f0(&e.v) == 1) return func_0206198c(&e.v);
    if (func_0204b2d4(&e.v)) return func_02052d2c(&e.v);
    return TRUE;
}
}

namespace nB {
extern "C" BOOL func_0204b820(u16 *p) {
    if (func_0204a8c0(p)) {
        Unk_0203442c e(func_0204aa24(p));
        return func_02061914(&e.v);
    }
    return FALSE;
}
}

namespace nB {
extern "C" u16 func_0204b808(u32 x) { if (x < 0x6c) return x + 0x1492; return 0x1492; }
}

namespace nB {
extern "C" s32 func_0204b718(s32 a, BOOL up, s32 *out) {
    Unk_0203442c e;
    u32 i;
    if (out) *out = 0;
    if (up) {
        func_0204ad94(&e.v, 0x14fd);
        if (func_0204be70(&e) < a) return 0xfff1;
        for (i = 0; i < 0x6c; i++) {
            func_0204ad94(&e.v, func_0204b808(i));
            s32 v = func_0204be70(&e);
            if (v >= a) {
                if (out) *out = v - a;
                return func_0204aa24(&e.v);
            }
        }
    } else {
        func_0204ad94(&e.v, 0x1492);
        if (func_0204be70(&e) > a) return 0xfff1;
        for (i = 0x6c; i != 0; i--) {
            func_0204ad94(&e.v, func_0204b808(i - 1));
            s32 v = func_0204be70(&e);
            if (a >= v) {
                if (out) *out = a - v;
                return func_0204aa24(&e.v);
            }
        }
    }
    return 0xfff1;
}
}

namespace nB {
extern "C" s32 func_0204b6f8(u16 *p) {
    s32 t = func_0204b6a8(p);
    s32 r = -1;
    if (t != r) r = (t >> 3) & 3;
    return r;
}
}

namespace nB {
extern "C" BOOL func_0204b6d0(u16 *p) { if (Unk_0204b408_R(p, 0x1188, 0x11a7)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b6a8(u16 *p) { if (func_0204b6d0(p)) return func_0204aa24(p) - 0x1188; return -1; }
}

namespace nB {
extern "C" s32 func_0204b688(u16 *p) {
    s32 t = func_0204b6a8(p);
    s32 r = -1;
    if (t != r) t &= 7;
    else t = r;
    return t;
}
}

namespace nB {
extern "C" u16 func_0204b670(u32 x) { if (x < 0x20) return x + 0x1188; return 0x1188; }
}

namespace nB {
extern "C" u16 func_0204b65c(u32 a, u32 b) { u32 x = (a & 3) * 8; return func_0204b670(x + (b & 7)); }
}

namespace nB {
extern "C" void func_0204b640(u16 *out, u32 a, u32 b) { func_0204a9c4(out, func_0204b65c(a, b)); }
}

namespace nB {
extern "C" s32 func_0204b5ec(u16 *p) {
    if (func_0204b430(p)) {
        u32 i;
        for (i = 0; i < func_02061788(); i++) {
            Unk_0204b598_Elem e;
            func_0204b530(&e.v, i);
            s32 c = func_0204aa24(p);
            if (c == func_0204aa24(&e.v)) return i;
        }
    }
    return -1;
}
}

namespace nB {
extern "C" s32 func_0204b598(u16 *p) {
    if (func_0204b37c(p)) {
        u32 i;
        for (i = 0; i < func_0206177c(); i++) {
            Unk_0204b598_Elem e;
            func_0204b4a8(&e.v, i);
            s32 c = func_0204aa24(p);
            if (c == func_0204aa24(&e.v)) return i;
        }
    }
    return -1;
}
}

namespace nB {
extern "C" void func_0204b530(u16 *out, u32 n) {
    u32 count, i;
    if (n >= func_02061788()) n = 0;
    count = 0;
    for (i = 0; i < 0x21; i++) {
        Unk_0203442c e(func_0204b3c8(i));
        if (func_0204b430(&e.v)) {
            if (n == count) {
                func_0204b510(out, &e.v);
                return;
            }
            count++;
        }
    }
    func_0204a9c4(out, func_0204b3c8(0));
}
}

namespace nB {
extern "C" u16 func_0204b518(u32 x) { if (x < 0x21) return x + 0x1471; return 0x1471; }
}

namespace nB {
extern "C" void func_0204b510(u16 *dst, u16 *src) { *dst = *src; }
}

namespace nB {
extern "C" void func_0204b4a8(u16 *out, u32 n) {
    u32 count, i;
    if (n >= func_0206177c()) n = 0;
    count = 0;
    for (i = 0; i < 0x21; i++) {
        Unk_0203442c e(func_0204b518(i));
        if (func_0204b37c(&e.v)) {
            if (n == count) {
                func_0204b510(out, &e.v);
                return;
            }
            count++;
        }
    }
    func_0204a9c4(out, func_0204b518(0));
}
}

namespace nB {
extern "C" BOOL func_0204b480(u16 *p) { if (Unk_0204b408_R(p, 0x1408, 0x1428)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b458(u16 *p) { if (func_0204b480(p)) return func_0204aa24(p) - 0x1408; return -1; }
}

namespace nB {
extern "C" BOOL func_0204b430(u16 *p) {
    if (func_0204b480(p) && func_0204b458(p) != 0x1e) return func_02061bf0(p);
    return FALSE;
}
}

namespace nB {
extern "C" BOOL func_0204b408(u16 *p) { if (Unk_0204b408_R(p, 0x1471, 0x1491)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b3e0(u16 *p) { if (func_0204b408(p)) return func_0204aa24(p) - 0x1471; return -1; }
}

namespace nB {
extern "C" u16 func_0204b3c8(u32 x) { if (x < 0x21) return x + 0x1408; return 0x1408; }
}

namespace nB {
extern "C" BOOL func_0204b37c(u16 *p) {
    if (func_0204b408(p)) {
        s32 t = func_0204b3e0(p);
        if (t != 0x1e) {
            Unk_0203442c e(func_0204b3c8(t));
            if (func_0204b430(&e.v)) return FALSE;
            return TRUE;
        }
    }
    return FALSE;
}
}

namespace nB {
extern "C" s32 func_0204b354(u16 *p) {
    if (func_0204a860(p)) return (func_0204aa24(p) - 0x1000) >> 2;
    return -1;
}
}

namespace nB {
extern "C" s32 func_0204b338(u16 *p) { return ((func_0204aa24(p) - 0x1000) & 3) + 1; }
}

namespace nB {
extern "C" u16 func_0204b318(u32 a, s32 b) {
    u32 base;
    if (a < 0x40) base = 0x1000 + a * 4;
    else base = 0x1000;
    return ((b - 1) & 3) + base;
}
}

namespace nB {
extern "C" BOOL func_0204b300(u16 *p) { if (func_0204b2f0(p) == 1) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b2f0(u16 *p) { return (*p & 0xf000) >> 12; }
}

namespace nB {
extern "C" BOOL func_0204b2d4(u16 *p) { switch (func_0204b2f0(p)) { case 3: case 4: return TRUE; } return FALSE; }
}

namespace nB {
extern "C" BOOL func_0204b2cc(u16 *p) { return func_0204b2d4(p); }
}

namespace nB {
extern "C" BOOL func_0204b2ac(u16 *p) { if (func_0204aa24(p) == 0xf031) return TRUE; return FALSE; }
}

namespace nB {
extern "C" BOOL func_0204b288(u16 *p) { if (func_0204b2ac(p) || func_0204b2d4(p)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" s32 func_0204b274(u16 *p) { return func_0204aa24(p) & 3; }
}

namespace nB {
extern "C" s32 func_0204b25c(u16 *p) { return (func_0204aa24(p) - 0x3000) >> 2; }
}

namespace nB {
extern "C" u16 func_0204b248(s32 a, s32 b) { return 0x3000 + a * 4 + b; }
}

namespace nB {
extern "C" void func_0204b220(u16 *p, s32 y) {
    if (func_0204b2d4(p)) *p = func_0204b248(func_0204b25c(p), y);
}
}

namespace nB {
extern "C" BOOL func_0204b20c(u16 *p) { return func_0204aa84(p, 0x5000, 0x5021); }
}

namespace nB {
extern "C" BOOL func_0204b1e4(u16 *p) { if (func_0204aa24(p) == 0xf030 || func_0204b20c(p)) return TRUE; return FALSE; }
}

namespace nB {
extern "C" u16 func_0204b1cc(u32 x) { return x < 0x22 ? x + 0x5000 : 0x5000; }
}

namespace nB {
extern "C" u16 func_0204b1b4(u32 x) { return x < 0x8 ? x + 0x5001 : 0x5001; }
}

namespace nB {
extern "C" BOOL func_0204b1a0(u16 *p) { return func_0204aa84(p, 0x500d, 0x5010); }
}

namespace nB {
extern "C" s32 func_0204b178(u16 *p) { if (func_0204b1a0(p)) return func_0204aa24(p) - 0x500d; return -1; }
}

namespace nB {
extern "C" u16 func_0204b160(u32 x) { return x < 0x4 ? x + 0x500d : 0x500d; }
}

namespace nB {
extern "C" BOOL func_0204b14c(u16 *p) { return func_0204aa84(p, 0xb001, 0xb003); }
}

namespace nB {
extern "C" s32 func_0204b124(u16 *p) { if (func_0204b14c(p)) return func_0204aa24(p) - 0xb001; return -1; }
}

namespace nB {
extern "C" u16 func_0204b10c(u32 x) { return x < 0x3 ? x + 0xb001 : 0xb001; }
}

namespace nB {
extern "C" BOOL func_0204b0f8(u16 *p) { return func_0204aa84(p, 0x5014, 0x501a); }
}

namespace nB {
extern "C" u16 func_0204b0e0(u32 x) { return x < 0x7 ? x + 0x5014 : 0x5014; }
}

namespace nB {
extern "C" BOOL func_0204b08c(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x26: case 0x2f: case 0x37: case 0x3f: case 0x47: case 0x4f: case 0x57: case 0x5d: case 0xc8:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204b038(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x27: case 0x30: case 0x38: case 0x40: case 0x48: case 0x50: case 0x58: case 0x5e: case 0xc9:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204afe4(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x28: case 0x31: case 0x39: case 0x41: case 0x49: case 0x51: case 0x59: case 0x5f: case 0xca:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204af90(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x29: case 0x32: case 0x3a: case 0x42: case 0x4a: case 0x52: case 0x5a: case 0x60: case 0xcb:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204af08(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2a: case 0x33: case 0x3b: case 0x43: case 0x4b:
    case 0x53: case 0x5b: case 0x61:
    case 0x66: case 0x67: case 0x68: case 0x69: case 0x6a: case 0x6b: case 0x6c: case 0x6d:
    case 0xcc:
        r = TRUE;
        break;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204aecc(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x36: case 0x3e: case 0x46: case 0x4e: case 0x56: case 0xcf:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204aec0(u16 *p) { return func_0204aa84(p, 0x26, 0x2a); }
}

namespace nA {
extern "C" BOOL func_0204aeb4(u16 *p) { return func_0204aa84(p, 0x5d, 0x61); }
}

namespace nA {
extern "C" BOOL func_0204aea8(u16 *p) { return func_0204aa84(p, 0x2f, 0x56); }
}

namespace nA {
extern "C" BOOL func_0204ae9c(u16 *p) { return func_0204aa84(p, 0x57, 0x5b); }
}

namespace nA {
extern "C" BOOL func_0204ae90(u16 *p) { return func_0204aa84(p, 0x66, 0x68); }
}

namespace nA {
extern "C" BOOL func_0204ae80(u16 *p) { if (*p == 0x69) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204ae74(u16 *p) { return func_0204aa84(p, 0x6a, 0x6c); }
}

namespace nA {
extern "C" BOOL func_0204ae64(u16 *p) { if (*p == 0x6d) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204ae58(u16 *p) { return func_0204aa84(p, 0xc8, 0xcf); }
}

namespace nA {
extern "C" BOOL func_0204adf0(u16 *p) {
    if (func_0204aec0(p) || func_0204aeb4(p) || func_0204aea8(p) || func_0204ae9c(p) || func_0204ae90(p) || func_0204ae80(p) || func_0204ae74(p) || func_0204ae64(p) || func_0204ae58(p)) return TRUE;
    return FALSE;
}
}

namespace nA {
extern "C" s32 func_0204ad98(u16 *p) {
    s32 r = -1;
    if (func_0204adf0(p)) {
        if (func_0204b08c(p)) r = 0;
        else if (func_0204b038(p)) r = 1;
        else if (func_0204afe4(p)) r = 2;
        else if (func_0204af90(p)) r = 3;
        else r = 4;
    }
    return r;
}
}

namespace nA {
extern "C" void func_0204ad94(u16 *p, u32 v) { *p = v; }
}

namespace nA {
extern "C" BOOL func_0204ad88(u16 *p) { return func_0204aa84(p, 0x37, 0x3e); }
}

namespace nA {
extern "C" BOOL func_0204ad7c(u16 *p) { return func_0204aa84(p, 0x3f, 0x46); }
}

namespace nA {
extern "C" BOOL func_0204ad70(u16 *p) { return func_0204aa84(p, 0x47, 0x4e); }
}

namespace nA {
extern "C" BOOL func_0204ad64(u16 *p) { return func_0204aa84(p, 0x2f, 0x36); }
}

namespace nA {
extern "C" BOOL func_0204ad58(u16 *p) { return func_0204aa84(p, 0x4f, 0x56); }
}

namespace nA {
extern "C" s32 func_0204ad08(u16 *p) {
    s32 r = 0;
    if (func_0204ad88(p)) {
    } else if (func_0204ad7c(p)) r = 1;
    else if (func_0204ad70(p)) r = 2;
    else if (func_0204ad64(p)) r = 3;
    else if (func_0204ad58(p)) r = 4;
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204acd8(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2b: case 0x62: case 0xd0: case 0xff:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204aca4(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2c: case 0x63: case 0xd1: case 0x100:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204ac70(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2d: case 0x64: case 0xd2: case 0x101:
        r = TRUE;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204ac64(u16 *p) { return func_0204aa84(p, 0x2b, 0x2e); }
}

namespace nA {
extern "C" BOOL func_0204ac54(u16 *p) { return func_0204aa84(p, 0xff, 0x102); }
}

namespace nA {
extern "C" BOOL func_0204ac30(u16 *p) { if (func_0204ac64(p) || func_0204ac54(p)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204ac24(u16 *p) { return func_0204aa84(p, 0x62, 0x65); }
}

namespace nA {
extern "C" BOOL func_0204ac18(u16 *p) { return func_0204aa84(p, 0xd0, 0xd3); }
}

namespace nA {
extern "C" BOOL func_0204abec(u16 *p) { if (func_0204ac30(p) || func_0204ac24(p) || func_0204ac18(p)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" s32 func_0204aba4(u16 *p) {
    s32 r = -1;
    if (func_0204abec(p)) {
        if (func_0204acd8(p)) r = 1;
        else if (func_0204aca4(p)) r = 2;
        else if (func_0204ac70(p)) r = 3;
        else r = 4;
    }
    return r;
}
}

namespace nA {
extern "C" BOOL func_0204ab98(u16 *p) { return func_0204aa84(p, 0x6e, 0x73); }
}

namespace nA {
extern "C" BOOL func_0204ab8c(u16 *p) { return func_0204aa84(p, 0x74, 0x79); }
}

namespace nA {
extern "C" BOOL func_0204ab80(u16 *p) { return func_0204aa84(p, 0x7a, 0x7f); }
}

namespace nA {
extern "C" BOOL func_0204ab74(u16 *p) { return func_0204aa84(p, 0x80, 0x87); }
}

namespace nA {
extern "C" BOOL func_0204ab3c(u16 *p) { if (func_0204ab98(p) || func_0204ab8c(p) || func_0204ab80(p) || func_0204ab74(p)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204ab30(u16 *p) { return func_0204aa84(p, 0x0, 0x5); }
}

namespace nA {
extern "C" BOOL func_0204ab24(u16 *p) { return func_0204aa84(p, 0x6, 0xb); }
}

namespace nA {
extern "C" BOOL func_0204ab18(u16 *p) { return func_0204aa84(p, 0xc, 0x11); }
}

namespace nA {
extern "C" BOOL func_0204aaf4(u16 *p) { if (func_0204aa84(p, 0x12, 0x19) || *p == 0x1c) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204aabc(u16 *p) { if (func_0204ab30(p) || func_0204ab24(p) || func_0204ab18(p) || func_0204aaf4(p)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204aab0(u16 *p) { return func_0204aa84(p, 0x8a, 0x8f); }
}

namespace nA {
extern "C" BOOL func_0204aaa4(u16 *p) { return func_0204aa84(p, 0x90, 0x95); }
}

namespace nA {
extern "C" BOOL func_0204aa98(u16 *p) { return func_0204aa84(p, 0x96, 0x9b); }
}

namespace nA {
extern "C" BOOL func_0204aa84(u16 *p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
}

namespace nA {
extern "C" BOOL func_0204aa60(u16 *p) { if (func_0204aa84(p, 0x9c, 0xa3) || *p == 0xa5) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204aa28(u16 *p) { if (func_0204aab0(p) || func_0204aaa4(p) || func_0204aa98(p) || func_0204aa60(p)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" s32 func_0204aa24(u16 *p) { return *p; }
}

namespace nA {
extern "C" BOOL func_0204a9c8(u16 *p) {
    BOOL r = FALSE;
    if (func_0204ab3c(p) || func_0204aabc(p) || func_0204aa28(p)) {
        r = TRUE;
    } else {
        switch (func_0204aa24(p)) {
        case 0x1a: case 0x1d: case 0x1e: case 0x88: case 0xa4:
            r = TRUE;
        }
    }
    return r;
}
}

namespace nA {
extern "C" void func_0204a9c4(u16 *p, u32 v) { *p = v; }
}

namespace nA {
extern "C" u16 func_0204a9ac(u32 x) { if (x < 0x38) return x + 0x12b0; return 0x12b0; }
}

namespace nA {
extern "C" u16 func_0204a994(u32 x) { if (x < 0x40) return x + 0x13c8; return 0x13c8; }
}

namespace nA {
extern "C" u16 func_0204a97c(u32 x) { if (x < 0x44) return x + 0x1144; return 0x1144; }
}

namespace nA {
extern "C" u16 func_0204a960(u32 x) { if (x < 0x100) return x + 0x11a8; return 0x11a8; }
}

namespace nA {
extern "C" u16 func_0204a948(u32 x) { if (x < 0x40) return x + 0x1431; return 0x1431; }
}

namespace nA {
extern "C" BOOL func_0204a920(u16 *p) { if (Unk_0204a7d0_R(p, 0x13c8, 0x1407)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a918(u16 *p) { return func_0204a920(p); }
}

namespace nA {
extern "C" BOOL func_0204a8f0(u16 *p) { if (Unk_0204a7d0_R(p, 0x1144, 0x1187)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a8e8(u16 *p) { return func_0204a8f0(p); }
}

namespace nA {
extern "C" BOOL func_0204a8c0(u16 *p) { if (Unk_0204a7d0_R(p, 0x11a8, 0x12a7)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a8b8(u16 *p) { return func_0204a8c0(p); }
}

namespace nA {
extern "C" BOOL func_0204a890(u16 *p) { if (Unk_0204a7d0_R(p, 0x1431, 0x1470)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a888(u16 *p) { return func_0204a890(p); }
}

namespace nA {
extern "C" BOOL func_0204a860(u16 *p) { if (Unk_0204a7d0_R(p, 0x1000, 0x10ff)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a858(u16 *p) { return func_0204a860(p); }
}

namespace nA {
extern "C" BOOL func_0204a830(u16 *p) { if (Unk_0204a7d0_R(p, 0x1380, 0x139f)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a828(u16 *p) { return func_0204a830(p); }
}

namespace nA {
extern "C" BOOL func_0204a800(u16 *p) { if (Unk_0204a7d0_R(p, 0x1100, 0x1143)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a7f8(u16 *p) { return func_0204a800(p); }
}

namespace nA {
extern "C" BOOL func_0204a7d0(u16 *p) { if (Unk_0204a7d0_R(p, 0x13a8, 0x13c7)) return TRUE; return FALSE; }
}

namespace nA {
extern "C" BOOL func_0204a7c8(u16 *p) { return func_0204a7d0(p); }
}

namespace nA {
extern "C" u16 func_0204a7b0(u32 x) { if (x < 0x20) return x + 0x1380; return 0x1380; }
}

namespace nA {
extern "C" u16 func_0204a798(u32 x) { if (x < 0x44) return x + 0x1100; return 0x1100; }
}

namespace nA {
extern "C" u16 func_0204a780(u32 x) { if (x < 0x20) return x + 0x13a8; return 0x13a8; }
}
