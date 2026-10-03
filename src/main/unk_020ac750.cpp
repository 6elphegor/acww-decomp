// mwcc-flags: -str reuse
#include "types.h"
struct Unk_0203442c {
    u16 v;
    Unk_0203442c();
    Unk_0203442c(u16 x) : v(x) {}
    ~Unk_0203442c();
};
struct Unk_02063380 {
    Unk_02063380(s32 a, s32 b);
    ~Unk_02063380();
    s32 unk_00, unk_04;
};
struct Unk_020dd458 {
    Unk_020dd458();
    ~Unk_020dd458();
    u8 unk_00[0xf4];
};
struct Unk_020e3efc {
    Unk_020e3efc();
    ~Unk_020e3efc();
    u8 d[0x30];
};

class Unk_020dd35c {
public:
    Unk_020dd35c();
    ~Unk_020dd35c();
    virtual u8 vfunc_00();
    virtual u8 vfunc_04();
    virtual u8 vfunc_08();
    virtual u32 vfunc_0c(u32 n);
};

class Unk_020dd344 : public Unk_020dd35c {
public:
    Unk_020dd344();
    ~Unk_020dd344();
    virtual u8 vfunc_00();
    virtual u8 vfunc_04();
    virtual u8 vfunc_08();
    virtual u32 vfunc_0c(u32 n);
    void func_020633a0(u8 a, u8 b, u8 c);
    void func_02063474();

    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
};
struct Unk_020dd324 {
    Unk_020dd324(u16 *s);
    ~Unk_020dd324();
    u8 d[0x24];
};

// ======== types of unk_020abbcc.cpp ========

struct Vec3 {
    s32 x, y, z;
};

struct Vec3Z2 {
    s32 x, y, z;
    Vec3Z2() {
        x = 0;
        y = 0;
        z = 0x1000;
    }
    ~Vec3Z2();
};

struct Unk_020d094c {
    char *unk_00;
    u8 unk_04, unk_05, unk_06, unk_07;
};

struct Vec3Z {
    s32 x, y, z;
    Vec3Z() {
        x = 0;
        y = 0;
        z = 0;
    }
    ~Vec3Z();
};

struct Col {
    u16 v;
};

struct RGB {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};

struct Unk_020ac0c4_Entry {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15[3];
};

struct Unk_02033914 {
    u8 unk_00[0x40];
};

struct Mtx43 {
    s32 m[12];
};

struct Unk_021ede90 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10;
};

class Unk_020abea8 {
public:
    void func_020abea8(s32 heap);
    void func_020abed4(Vec3 *pos);
    BOOL func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    void func_020ac1e0();

    /* 0x00 */ Vec3 unk_00;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 *unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 *unk_28;
    /* 0x2c */ Vec3 *unk_2c;
    /* 0x30 */ Unk_020ac0c4_Entry *unk_30;
};

struct Pack {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

struct Bits {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

struct Unk_020ac500_DictHdr {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
};
struct Unk_020ac500_Dict {
    u8 rev;
    u8 num;
    u16 size;
    u16 pad;
    u16 ofsEntry;
};
struct Unk_020ac500_Tex {
    u8 pad_00[8];
    u32 texKey;
    u8 pad_0c[0x20];
    u32 plttKey;
    u8 pad_30[4];
    u16 ofsPlttDict;
    u8 pad_36[6];
    Unk_020ac500_Dict dict;
};
struct Unk_020ac500_Pltt {
    u16 offset;
    u16 flag;
};

struct Unk_020ac2e8_V : Vec3 {
    Unk_020ac2e8_V() {}
    ~Unk_020ac2e8_V() {}
};
// ======== types of unk_020acf38.cpp ========

// ---- externs ----
// element with out-of-line ctor/dtor (0203442c / 02004b60)
struct Unk_02062f94_Ret {
    u16 v;
    Unk_02062f94_Ret();
};

class Unk_020e2a78 {  // base of Unk_020e2e54
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    void func_020a7c3c();
    u8 unk_04[0x30];
};

// ---- Unk_020e2e54 : Unk_020e2a78 ----
class Unk_020e2e54 : public Unk_020e2a78 {
public:
    Unk_020e2e54();
    virtual ~Unk_020e2e54();
    virtual u32 vfunc_08();
    virtual void *vfunc_0c();
};

struct Unk_020ad700 {
    /* 0x00 */ u32 bits;
    /* 0x04 */ volatile s8 slot;
    /* 0x05 */ u8 flags;

    Unk_020ad700();
    ~Unk_020ad700();
    inline s8 getSlot() { return slot; }
    void func_020ad700();
    void func_020ad444(u32 i);
    BOOL func_020ad45c(u32 i);
    u32 func_020ad474();
    BOOL func_020ad498();
    void func_020ad500(u32 i);
    void func_020ad518(u32 i);
    BOOL func_020ad53c(u32 i);
    void func_020ad568();
    void func_020ad570();
    BOOL func_020ad594();
    u32 func_020ad5c0(void *w);
    u8 func_020ad5f8();
    u32 func_020ad618(void *w);
    BOOL func_020ad650();
    BOOL func_020ad680();
};

class Unk_021ed2c0 {
public:
    /* 0x00 */ Unk_0203442c arr[3];
    /* 0x08 */ Unk_020ad700 s;
    /* 0x10 */ u16 tbl[3];

    Unk_021ed2c0();
    ~Unk_021ed2c0();
    void func_020ad040();
    Unk_020ad700 *func_020ad3bc();
    void func_020ad3c8();
    void func_020ad3d8();
};

// ---- Unk_020acf38 group (u16 at +0) ----
struct Unk_020acf38 {
    u16 v;
};
// ======== types of unk_020ad818.cpp ========

// Two unrelated-looking classes share this range (no vtables found).
// Unk_020ad818: date/time-like slot object; 0xc..0xe = 3 date bytes, 0xf = flag, 0x10 = u16[6]
struct V8 { u8 b0, b1, b2, b3, b4, b5, b6, b7; };
struct B4 { u8 b[4]; };
struct E12 { u16 h; u8 pad[10]; };
struct G { u8 p0, p1, p2, p3; };
struct S1 { u8 pad[0xc]; u8 c, d, e, f; u16 arr[6]; };
// Unk_020adb70: text-entry object; 0x4 = u16 str[0x24], 0x52..0x55 = date bytes, 0x5a = flag bitfield
struct S { u8 pad0[4]; u16 str[0x24]; u8 pad1[6]; u8 f52, f53, f54, f55; u8 pad2[4]; u16 lo : 5; u16 cnt : 4; u16 kind : 2; u16 rest : 5; };
// ======== types of unk_020ae290.cpp ========

struct D {
    u8 a, b, c, d, e, f;
    u16 g;
};

struct Z {
    u16 v;
    Z();
};

struct Flags {
    u16 v : 5;
    u16 rest : 11;
};

struct S4 {
    u8 a, b, c, flag;
};

struct Obj {
    u32 timer;
    u16 items[0x25];
    u8 date[4];
    u8 date2[3];
    u8 pad;
    S4 s;
    Flags flags;
    u8 mask[5];
};
// ======== types of unk_020aebbc.cpp ========

struct Counter {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};
struct Counter2 {
    Counter2();
    ~Counter2();
    u8 unk_00;
    u8 unk_01;
};

struct Elem2a { Elem2a(); u16 d; };
struct ArrA { u32 vt; u16 e[0x25]; ArrA(); };
struct ArrB { u32 vt; Unk_0203442c e[0x25]; ArrB(); };

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
extern const s32 data_020d0964;
extern const u8 data_020d0968[4];
extern const u8 data_020d096c[4];
extern const u8 data_020d0970[4];
extern const u8 data_020d0974[4];
extern const u8 data_020d0978[4];
extern const u8 data_020d097c[4];
extern const u8 data_020d0980[4];
extern const u8 data_020d0984[4];
extern const u8 data_020d0988[4];
extern const u16 data_020d098c[4];
extern const u16 data_020d0994[6];
extern const u8 data_020d09a0[6][3];
extern const u16 data_020d09b4[12];

// ======== unk_020aebbc.cpp ========
namespace n5 {
extern "C" {
void *__cxa_vec_cleanup(void *p, s32 n, s32 size, void *ctor);
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
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
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
void PM_SetBackLight(s32 a, s32 b);
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
void *_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(void *a, s32 b, s32 c, s32 d);
}
extern "C" {
void *func_ov004_0223584c();
}
extern "C" {
void _ZN18Unk_ov004_0223583c19func_ov004_02235740EPv(void *a, void *b);
}
extern "C" {
void func_ov004_022344dc();
}
extern "C" {
void func_020aee90(s32 x, s32 y, u32 a, s32 b);
}
extern "C" {
u32 _ZN12Unk_0209865c13func_0209888cEv(void *a);
}
extern "C" {
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}
extern "C" {
void _ZN12Unk_0206555413func_02065588Etj(void *a, u32 b, s32 c);
}
extern "C" {
void func_02096a50(void *a, s32 b);
}
extern "C" {
void _ZN12Unk_020dd458C1Ev(void *a);
}
extern "C" {
void _ZN12Unk_020dd458D1Ev(void *a);
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
extern u8 data_021ee240;
}
extern "C" {
extern u8 data_021ee244;
}
extern "C" {
extern u32 data_021ee248;
}
extern "C" {
extern u32 data_021ee24c;
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
void _ZN12Unk_0203442cD1Ev(void *p);
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
extern "C" {
struct Loc488 { u8 a; u8 pad; u16 b; };
}

extern "C" void func_020aebbc(Unk_020aebbc *p);

}
extern "C" Counter2::Counter2() {
    using namespace n5; func_020af230((Counter *)this); }

namespace n5 {
}
extern "C" Counter2::~Counter2() {
    using namespace n5; func_020af230((Counter *)this); }

namespace n5 {
extern "C" void func_020af230(Counter *c) {
    c->unk_00 = 0;
    c->unk_01 = 0;
}
extern "C" void func_020af1fc(Counter *c) {
    c->unk_01 = 0;
    u8 *p = *(u8 **)data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(p)) c->unk_00 = p[0x6c] - 1;
    else c->unk_00 = 0;
}
extern "C" BOOL func_020af1ec(Counter *c) {
    if (c->unk_01 >= c->unk_00) return TRUE;
    return FALSE;
}
extern "C" void func_020af1d8(Counter *c) {
    if (c->unk_01 < c->unk_00) c->unk_01++;
    func_020af1ec(c);
}
extern "C" void func_020af160(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        {
            Unk_02063380 o(r2, r3);
            func_02062f70((u8 *)buf + *pos * 2, n, &o, 0, data_021ee1f4, 0, 1, 0);
        }
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                func_02061168(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}
extern "C" void func_020af0f8(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        func_02062e90((u8 *)buf + *pos * 2, n, r2, r3, 0, 0, 10, data_021ee1f4, 0);
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                func_02061168(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}
extern "C" void func_020af0c4(u16 *a, u8 *b, u32 n) {
    for (u32 i = 0; i < n; i++) a[i] = 0xfff1;
    u32 m = n / 8 + 1;
    for (u32 j = 0; j < m; j++) b[j] = 0;
}
extern "C" BOOL func_020af0a4(u32 i, u32 n, u8 *bits) {
    if (i < n) {
        if ((bits[i >> 3] >> (i & 7)) & 1) return TRUE;
        return FALSE;
    }
    return TRUE;
}
extern "C" BOOL func_020af070(u32 i, u32 n, u8 *bits) {
    if (i < n && !func_020af0a4(i, n, bits)) {
        bits[i >> 3] |= 1 << (i & 7);
        return TRUE;
    }
    return FALSE;
}
extern "C" u16 *func_020af034(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out) {
    if (i < n) {
        u16 *p = arr + i;
        if (out) *out = *p;
        if (func_020af0a4(i, n, bits)) return &data_021ee168;
        return p;
    }
    return &data_021ee164;
}
extern "C" s32 func_020aef80(u16 *key, u16 *arr, u8 *bits, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u16 *p = func_020af034(i, arr, bits, n, 0);
        BOOL eq;
        if (func_0204b2d4(p)) eq = func_0204b25c(p) == func_0204b25c(key);
        else eq = *p == *key;
        if (eq) {
            BOOL eq2;
            if (func_0204b2d4(key)) eq2 = func_0204b25c(key) == func_0204b25c(&data_021ee168);
            else eq2 = *key == data_021ee168;
            if (!eq2) return i;
        }
    }
    return -1;
}
extern "C" void func_020aee90(s32 x, s32 y, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != func_020b50e8()) return;
    void *w = data_021c47c4;
    s32 bx = x >> 4;
    s32 by = y >> 4;
    void *o = func_0204ebd8(w, bx, by, x - (bx << 4), y - (by << 4), 0);
    if (o == 0) return;
    if (func_0204b288()) {
        void *r = func_ov004_02235718();
        void *t = _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(r, x, y, 0);
        if (t != 0) {
            _ZN18Unk_ov004_0223583c19func_ov004_02235740EPv(func_ov004_0223584c(), t);
            func_ov004_022344dc();
        }
        if (b != 0) func_0200402c(0x2e);
    } else if (func_0204b300(o)) {
        u16 *pc = (u16 *)o;
        if (!R1(pc, 0x1000, 0x10ff)) {
            if (!R2(pc, 0x151f, 0x151f)) func_0204eb30(w, &data_021ee168, x, y, 0);
        }
        if (b != 0) func_0200402c(0x2e);
    }
}
extern "C" void func_020aedc4(u16 *p, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != func_020b50e8()) return;
    Unk_021c47c4 *s = data_021c47c4;
    if (s == 0) return;
    void *q; u32 k = 0;
    if (s->unk_04 > k && s->unk_08 > k && s->unk_00 != 0) q = (void *)s->unk_00;
    else q = 0;
    if (q == 0) return;
    for (s32 y = 0; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            u16 *e = (u16 *)func_02037558(q, x, y, 0);
            if (e == 0) continue;
            BOOL eq;
            if (func_0204b2d4(e)) eq = func_0204b25c(e) == func_0204b25c(p);
            else eq = *e == *p;
            if (eq) {
                func_020aee90(x, y, a, b);
                return;
            }
        }
    }
}
extern "C" void func_020aed98(s32 a, s32 b) {
    func_0203ce38(0, a);
    func_0203ce24(1, b);
    func_02076fc8(func_02063b8c(2), "bbs_shopinfo");
}
extern "C" void func_020aed48(s32 x) {
    Unk_020e3efc o;
    s32 m = x % 12;
    m = (u8)m;
    func_020b3270(&o, m, 10, 0, 0, 0);
    func_0203ce4c(2, &o);
    func_02076fc8(func_02063b8c(2) + 2, "bbs_shopinfo");
}
extern "C" void func_020aed14(u16 *s) {
    Unk_020dd324 str(s);
    func_0203ce4c(3, &str);
    func_02076fc8(func_02063b8c(2) + 4, "bbs_shopinfo");
}
extern "C" void func_020aece4(s32 a, s32 b) {
    func_0203ce38(2, a);
    func_0203ce24(3, b);
    func_02076fc8(func_020ae02c(data_021ed104), "bbs_raccoon");
}
extern "C" s32 func_020aecc4() {
    return func_02076fc8(func_020ae02c(data_021ed104) + 3, "bbs_raccoon");
}
extern "C" BOOL func_020aec74(Unk_020aec74_Out *out) {
    u8 *h = data_021ed104;
    if (func_020aeac4(h)[3] != 0) {
        out->unk_05 = func_020aeac4(h)[2];
        out->unk_04 = func_020aeac4(h)[1];
        out->unk_03 = func_020aeac4(h)[0];
        out->unk_02 = 6;
        out->unk_01 = 0;
        out->unk_00 = 0;
        out->unk_06 = 0;
        return TRUE;
    }
    return FALSE;
}
extern "C" BOOL func_020aec4c() {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(*(void **)data_020cbb18)) {
        return func_020af1ec((Counter *)data_021ee160);
    }
    return TRUE;
}
}
extern "C" ArrB::ArrB() {
    using namespace n5; func_020aebbc((Unk_020aebbc *)this); }

namespace n5 {
}
extern "C" ArrA::ArrA() {
    using namespace n5; __cxa_vec_cleanup(&e, 0x25, 2, (void *)_ZN12Unk_0203442cD1Ev); }

namespace n5 {
extern "C" void func_020aebbc(Unk_020aebbc *p) {
    func_020ae870(p);
    p->unk_5a.unk_09 = 0;
    p->unk_00 = 0;
    p->unk_5a.unk_00 = 0;
    p->unk_51 = 1;
    p->unk_59 = 0;
}
}

// ======== unk_020ae290.cpp ========
namespace n4 {
extern "C" {
extern u8 data_021ed2d4[], data_020cbb18[], data_021d735c[], data_021ee1f4[], data_021ee17c[], data_021ee180[],
    data_021ee20c[], data_021d7350[], data_021ed104[];
}
extern "C" {
void MI_CpuCopy8(void*, void*, int);
}
extern "C" {
void func_020ad9c4(void*);
}
extern "C" {
int func_020ac79c();
}
extern "C" {
void func_020ac790(int);
}
extern "C" {
void func_020b4994();
}
extern "C" {
int func_020b5268();
}
extern "C" {
int func_020b50e8();
}
extern "C" {
void func_0209d498(D*);
}
extern "C" {
void func_0209d164(D*, int);
}
extern "C" {
void func_0209d2c0(D*, int);
}
extern "C" {
int func_0209d3d0(D*, D*, int);
}
extern "C" {
int _ZN12Unk_020cbb1813func_02072e44Ev(int);
}
extern "C" {
void func_020ace7c();
}
extern "C" {
int func_020978a4(void*);
}
extern "C" {
void* func_02097868(void*, int);
}
extern "C" {
int _ZN12Unk_0209865c13func_02098a48Ev(void*);
}
extern "C" {
int _ZN12Unk_02097ff413func_02098044Ej(void*, int);
}
extern "C" {
int _ZN12Unk_020dd3448vfunc_0cEj(void*, int);
}
extern "C" {
void func_020aed48(u8);
}
extern "C" {
void func_020aed14(u16*);
}
extern "C" {
void func_020aece4(u8, u8);
}
extern "C" {
int func_0204b2d4(u16*);
}
extern "C" {
Z func_02062f94(Unk_02063380, int, void*, int, int, int);
}
extern "C" {
int func_020626cc(u16*, int);
}
extern "C" {
int func_020aec74(D*);
}
extern "C" {
void _ZN12Unk_020dd34413func_020633a0Ehhh(void*, int, int, int);
}
extern "C" {
void func_020add64(Obj*, int*);
}
extern "C" {
void func_020add3c(Obj*, int*);
}
extern "C" {
void func_020adcec(Obj*, int*);
}
extern "C" {
void func_020adcbc(Obj*, int*);
}
extern "C" {
void func_020adc94(Obj*, int*);
}
extern "C" {
void func_020adc6c(Obj*, int*);
}
extern "C" {
void func_020adc44(Obj*, int*);
}
extern "C" {
void func_020adbd0(Obj*, int*);
}
extern "C" {
void func_020adba0(Obj*, int*);
}
extern "C" {
void func_020adb70(Obj*, int*);
}
extern "C" {
int func_020ae02c(Obj*);
}
extern "C" {
void func_020ae03c(Obj*);
}
extern "C" {
void func_020ae040(Obj*, D*);
}
extern "C" {
int _ZN12Unk_0209da4413func_0209e170Ej(void*, int);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e148Ej(void*, int);
}
extern "C" {
int func_020aef80(int, u16*, u8*, int);
}
extern "C" {
u16* func_020af034(int, u16*, u8*, int, u16*);
}
extern "C" {
int func_020af0a4(int, int, u8*);
}
extern "C" {
int func_020aebbc(int);
}
extern "C" {
void func_020af0c4(u16*, u8*, int);
}


static inline BOOL inRange(u16 v, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}extern "C" {
S4* func_020aeac4(Obj* self);
}
extern "C" {
void func_020ae778(Obj* self);
}
extern "C" {
u16* func_020ae844(Obj* self, int idx, u16* p);
}
extern "C" {
int func_020ae860(Obj* self, int idx);
}
extern "C" {
void func_020ae870(Obj* self);
}
extern "C" {
u32 func_020ae8d0(Obj* self, int mode);
}
extern "C" {
int func_020ae888(Obj* self);
}
extern "C" {
int func_020ae964(Obj* self, D* d);
}
extern "C" {
int func_020aeb38(Obj* self, D* d);
}
extern "C" {
int func_020ae920(Obj* self, D* d);
}
extern "C" {
void func_020ae648(Obj* self, int f);
}
extern "C" {
void func_020aece4(u8, u8);
}
extern "C" {
int func_020aea04(Obj* self, D* d);
}
extern "C" {
int func_020ae8fc(Obj*);
}
extern "C" {
int func_020ae638(void*);
}
extern "C" {
void func_020ae320(Obj* self, int a, int b, int c);
}
extern "C" {
int func_020ae2d4(Obj* self, D* d);
}
extern "C" {
void func_020ae29c(Obj* self, D* d);
}
extern "C" {
static inline BOOL inRangeP(u16* p, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
}
extern "C" {
struct Rgba {
    u8 a, b, c, d;
};
}


extern "C" BOOL func_020aeb80(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    int v = self->flags.v;
    if (v != 0) {
        if (d.c >= v && d.c < 0x17) return TRUE;
        return FALSE;
    }
    return FALSE;
}
extern "C" int func_020aeb38(Obj* self, D* d) {
    if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 5) != 0 && self->date2[2] == d->f && self->date2[1] == d->e &&
        self->date2[0] == d->d)
        return TRUE;
    return FALSE;
}
extern "C" int func_020aeb14(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020aeb38(self, &d);
}
extern "C" BOOL func_020aeac8(Obj* self) {
    int z = 0;
    u32 i;
    for (i = 0; i < 0x25; i++) {
        u16 v = 0xfff1;
        u16* p = func_020ae844(self, i, &v);
        if (func_0204b2d4(p) != 0 && func_020626cc(p, z) == 4) return TRUE;
    }
    return FALSE;
}
extern "C" S4* func_020aeac4(Obj* self) {
    return &self->s;
}
extern "C" Rgba func_020aea38(Obj* self) {
    Rgba r;
    D d;
    r.d = 0;
    r.a = r.d;
    r.b = r.a;
    r.c = r.b;
    if (func_020aeac4(self)->flag != 0) {
        ((u32*)&d)[0] = 0;
        ((u32*)&d)[1] = 0;
        d.f = func_020aeac4(self)->c;
        d.e = func_020aeac4(self)->b;
        d.d = func_020aeac4(self)->a;
        d.c = 6;
        d.b = 0;
        d.a = 0;
        d.g = 0;
        func_0209d164(&d, 1);
        r.c = d.f;
        r.b = d.e;
        r.a = d.d;
    }
    return r;
}
extern "C" int func_020aea04(Obj* self, D* d) {
    D t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    if (func_020aec74(&t) != 0) {
        if ((u32)(func_0209d3d0(&t, d, 0x3c) + 1) <= 1) return TRUE;
    }
    return FALSE;
}
extern "C" int func_020ae9e0(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020aea04(self, &d);
}
extern "C" int func_020ae964(Obj* self, D* d) {
    D t;
    if (func_020aeac4(self)->flag != 0) {
        ((u32*)&t)[0] = 0;
        ((u32*)&t)[1] = 0;
        t.f = func_020aeac4(self)->c;
        t.e = func_020aeac4(self)->b;
        t.d = func_020aeac4(self)->a;
        t.c = 6;
        t.b = 0;
        t.a = 0;
        t.g = 0;
        func_0209d164(&t, 1);
        if (t.f == d->f && t.e == d->e && t.d == d->d) return TRUE;
        return FALSE;
    }
    return FALSE;
}
extern "C" int func_020ae940(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020ae964(self, &d);
}
extern "C" int func_020ae920(Obj* self, D* d) {
    func_0209d2c0(d, 1);
    return func_020ae964(self, d);
}
extern "C" int func_020ae8fc(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    return func_020ae920(self, &d);
}
extern "C" u32 func_020ae8d0(Obj* self, int mode) {
    switch (mode) {
    case 0: return 0x61a8;
    case 1: return 0x15f90;
    case 2: return 0x3a980;
    default: return 0x3a980;
    }
}
extern "C" int func_020ae888(Obj* self) {
    int t = func_020ae02c(self);
    if (t == 3) return t;
    if (self->timer >= func_020ae8d0(self, t)) {
        int r = func_020ae638(data_021ed104);
        if (t == 2) {
            if (r != 0) return t + 1;
        } else {
            return t + 1;
        }
    }
    return func_020ae02c(self);
}
extern "C" int func_020ae880(int a) {
    return func_020aebbc(a);
}
extern "C" void func_020ae870(Obj* self) {
    func_020af0c4(self->items, self->mask, 0x25);
}
extern "C" int func_020ae860(Obj* self, int idx) {
    return func_020af0a4(idx, 0x25, self->mask);
}
extern "C" u16* func_020ae844(Obj* self, int idx, u16* p) {
    return func_020af034(idx, self->items, self->mask, 0x25, p);
}
extern "C" int func_020ae82c(Obj* self, int arg) {
    return func_020aef80(arg, self->items, self->mask, 0x25);
}
extern "C" void func_020ae778(Obj* self) {
    D d;
    D t;
    int r4 = func_020ae888(self);
    if (_ZN12Unk_020cbb1813func_02072e44Ev(*(int*)data_020cbb18) != 0) return;
    if (func_020ae02c(self) >= r4) return;
    if (func_020aeac4(self)->flag != 0) return;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    func_0209d2c0(&d, 2);
    MI_CpuCopy8(&d, &t, 8);
    func_0209d164(&t, 1);
    if (func_020aeb38(self, &t) != 0) func_0209d2c0(&d, 1);
    func_020aeac4(self)->flag = 1;
    u8 u;
    u = d.f;
    func_020aeac4(self)->c = u;
    u = d.e;
    func_020aeac4(self)->b = u;
    u = d.d;
    func_020aeac4(self)->a = u;
    func_0209d164(&d, 1);
    func_020aece4(d.e, d.d);
}
extern "C" void func_020ae740(Obj* self, int add, int arg) {
    u32 lim = func_020ae8d0(self, func_020ae02c(self));
    self->timer += add;
    if (self->timer > lim) self->timer = lim;
    func_020ae648(self, arg);
    func_020ae778(self);
}
extern "C" BOOL func_020ae664(Obj* self, u32 idx, int add, int arg) {
    if (idx < 0x25) {
        u32 lim = func_020ae8d0(self, func_020ae02c(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        if (func_020ae860(self, idx) == 0) {
            u32 byte = idx >> 3;
            u32 bit = idx & 7;
            if (!inRangeP(func_020ae844(self, idx, 0), 0x1000, 0x10ff)) {
                if (!inRangeP(func_020ae844(self, idx, 0), 0x151f, 0x151f)) {
                    self->mask[byte] |= 1 << bit;
                }
            }
        }
        func_020ae648(self, arg);
        func_020ae778(self);
        return TRUE;
    } else {
        u32 lim = func_020ae8d0(self, func_020ae02c(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        func_020ae648(self, arg);
        func_020ae778(self);
        return FALSE;
    }
}
extern "C" void func_020ae648(Obj* self, int flag) {
    if (flag == 0) _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 7);
}
extern "C" int func_020ae638(void*) {
    return _ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 7);
}
}
u32 data_020e2e34 = 3;
Unk_020dd344 data_021ee1f4;
const u8 data_020d0984[4] = {0, 1, 2, 3};
namespace n4 {
extern "C" void func_020ae3a4(Obj* self, int force) {
    int fresh;
    D d;
    int ok;
    int i;
    int n;
    void* p;

    func_020ad9c4(data_021ed2d4);
    if (func_020ac79c() == 1) {
        func_020ac790(2);
        return;
    }
    func_020b4994();
    if (func_020b5268() == 0) {
        int r = func_020b50e8();
        if (r == 0x2c) return;
        if (r == 0x3f) return;
    }
    fresh = 1;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    func_0209d498(&d);
    if (d.c < 6) {
        func_0209d164(&d, fresh);
        fresh = 0;
    }
    if (force == 0 && func_020ae2d4(self, &d) == 0) return;
    self->flags.v = 0;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(*(int*)data_020cbb18) != 0) return;
    func_020ace7c();
    func_020ae29c(self, &d);
    func_020ae320(self, d.f, d.e, d.d);
    ok = 1;
    int cnt = func_020978a4(data_021d735c);
    if (cnt != 0 && cnt != 1) {
        for (i = 0; i < 4; i++) {
            p = func_02097868(data_021d735c, i);
            if (p != 0 && _ZN12Unk_0209865c13func_02098a48Ev(p) != 0 && _ZN12Unk_02097ff413func_02098044Ej(p, 1) == 0) {
                ok = 0;
                break;
            }
        }
    }
    if (ok == 0 && func_020aeac4(self)->flag == 0) {
        func_020ae040(self, &d);
        if (_ZN12Unk_020dd3448vfunc_0cEj(data_021ee1f4, 0xe) == 0) {
            self->flags.v = (u8)(_ZN12Unk_020dd3448vfunc_0cEj(data_021ee1f4, 4) + 0x11);
            if (fresh != 0) func_020aed48(self->flags.v);
        }
        if (self->flags.v == 0 && func_020aeb38(self, &d) == 0) {
            static Unk_02063380 sx(0, 4);
            if (_ZN12Unk_020dd3448vfunc_0cEj(data_021ee1f4, 5) == 0) {
                for (i = 0; (u32)i < 0x25; i++) {
                    u16* q = &self->items[i];
                    if (func_0204b2d4(q) != 0) {
                        *q = func_02062f94(sx, 0, data_021ee1f4, 0, 1, 0).v;
                        if (fresh != 0) func_020aed14(q);
                        break;
                    }
                }
            }
        }
    }
    if (d.e == 0xc) {
        u8 v = d.d;
        int t = 0x2e;
        if (v >= 0xa && v <= 0x18)
            t = 0x2b;
        else if (v >= 0x1a && v <= 0x1f)
            t = 0x2c;
        if (t == 0x2e) return;
        n = 0;
        for (i = 0; (u32)i < 0x25; i++) {
            u16* q = &self->items[i];
            if (func_0204b2d4(q) != 0) {
                if (n == 1) {
                    Unk_02063380 tmp(0, t);
                    *q = func_02062f94(tmp, 0, data_021ee1f4, 0, 1, 0).v;
                    break;
                }
                n++;
            }
        }
    }
}
extern "C" void func_020ae320(Obj* self, int a, int b, int c) {
    int z;
    func_020ae870(self);
    z = 0;
    _ZN12Unk_020dd34413func_020633a0Ehhh(data_021ee1f4, a, b, c);
    func_020add64(self, &z);
    func_020add3c(self, &z);
    func_020adcec(self, &z);
    func_020adcbc(self, &z);
    func_020adc94(self, &z);
    func_020adc6c(self, &z);
    func_020adc44(self, &z);
    func_020adbd0(self, &z);
    func_020adba0(self, &z);
    func_020adb70(self, &z);
    func_020ae03c(self);
}
extern "C" int func_020ae2d4(Obj* self, D* d) {
    D t;
    MI_CpuCopy8(d, &t, 8);
    if (self->date[2] != t.f || self->date[1] != t.e || self->date[0] != t.d || self->date[3] != 0) return TRUE;
    return FALSE;
}
extern "C" void func_020ae29c(Obj* self, D* d) {
    D t;
    MI_CpuCopy8(d, &t, 8);
    self->date[2] = t.f;
    self->date[1] = t.e;
    self->date[0] = t.d;
    self->date[3] = 0;
}
extern "C" BOOL func_020ae290(int x) {
    if (x < 0x1c) return TRUE;
    return FALSE;
}
}

// ======== unk_020ad818.cpp ========
namespace n3 {
extern "C" {
extern u8 data_020d0988[], data_020d096c[], data_020d0974[], data_020d0968[], data_020d0970[], data_020d0984[], data_020d0980[], data_020d097c[], data_020d0978[];
}
extern "C" {
extern u16 data_020d09b4[];
}
extern "C" {
extern u8 data_021ed104[];
}
extern "C" {
extern u8 data_021ee1f4[];
}
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
extern u32 data_020cbb18;
}
extern "C" {
void _ZN12Unk_0203442cD1Ev(void*);
}
extern "C" {
void _ZN12Unk_0203442cC1Ev(void*);
}
extern "C" {
void __cxa_vec_cleanup(void*, u32, u32, void (*)(void*));
}
extern "C" {
void __cxa_vec_ctor(void*, u32, u32, void (*)(void*), void (*)(void*));
}
extern "C" {
void MI_CpuCopy8(const void*, void*, u32);
}
extern "C" {
u32 func_020af070(u32, u32, void*);
}
extern "C" {
void func_020aef80(u32, void*, void*, u32);
}
extern "C" {
u16* func_020af034(u32, void*, void*, u32, u32);
}
extern "C" {
void func_020af0c4(void*, void*, u32);
}
extern "C" {
void func_020af0f8(void*, void*, u32, u32, u32, u32, u32);
}
extern "C" {
void func_020af160(void*, void*, u32, u32, u32, u32, u32);
}
extern "C" {
void func_0209d498(V8*);
}
extern "C" {
void func_0209d164(V8*, u32);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_02072e44Ev(u32);
}
extern "C" {
void _ZN12Unk_020dd34413func_020633a0Ehhh(void*, u32, u32, u32);
}
extern "C" {
u32 func_0204b2d4(void);
}
extern "C" {
u32 func_0204b25c(u16*);
}
extern "C" {
u32 func_02063b8c(u32);
}
extern "C" {
void func_020ad798(S1*);
}
extern "C" {
void func_020ad79c(S1*, u32*);
}
extern "C" {
void func_020ad7b8(S1*, u32*);
}
extern "C" {
u32 func_020ac79c(void);
}
extern "C" {
u32 func_020ae9e0(void*);
}
extern "C" {
u32 func_020ae888(void*);
}
extern "C" {
void* func_0204da0c(u32);
}
extern "C" {
void* func_0204ec8c(void*, u32);
}
extern "C" {
u32 func_02037558(void*, u32, u32, u32);
}
extern "C" {
u32 func_0204b1a0(void);
}
extern "C" {
u16 func_0204b160(u32);
}
extern "C" {
void func_02037590(void*, void*, u32, u32, u32);
}
extern "C" {
u32 func_020aec74(void*);
}
extern "C" {
void func_020aecc4(void);
}
extern "C" {
G* func_020aeac4(void*);
}
extern "C" {
void func_020ae3a4(void*, u32);
}
extern "C" {
s32 _ZN12Unk_020dd3448vfunc_0cEj(void*, u32);
}
extern "C" {
BOOL _ZN12Unk_0209da4413func_0209e170Ej(void*, u32);
}
extern "C" {
void func_0209cf88(B4*);
}
extern "C" {
s32 func_0209cd00(B4*, u8*);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e120Ej(void*, u32);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e148Ej(void*, u32);
}
extern "C" {
s32 func_0209ceac(u32, u32, u32);
}
extern "C" {
void func_0209d2c0(V8*, s32);
}
extern "C" {
s32 func_0203f508(E12*, V8*);
}
extern "C" {
BOOL func_020ae290(u16);
}
extern "C" {
s32 func_0209d3d0(V8*, V8*, u32);
}
extern "C" {
void func_020aed98(u32, u32);
}
extern "C" {
u32 func_020ae02c(S*);
}
extern "C" {
void func_020ae008(S*, u32);
}
extern "C" {
u32 func_020adff0(S*);
}
extern "C" {
u32 func_020adfd8(S*);
}
extern "C" {
u32 func_020adfc0(S*);
}
extern "C" {
u32 func_020adfa8(S*);
}
extern "C" {
u32 func_020adf90(S*);
}
extern "C" {
u32 func_020adf78(S*);
}
extern "C" {
u32 func_020adf60(S*);
}
extern "C" {
u32 func_020adf48(S*);
}
extern "C" {
u32 func_020adf30(S*);
}
extern "C" {
u32 func_020adf2c(S*);
}
extern "C" {
void func_020ada2c(S1*);
}
extern "C" {
u32 func_020ad8c0(S1*, u32);
}
extern "C" {
u16* func_020ad8e8(S1*, u32, u32);
}
extern "C" {
void func_020ad904(S1*, void*);
}
extern "C" {
u32 func_020ad930(S1*, void*);
}
extern "C" {
void func_020ad970(S1*, u32, u32, u32);
}
extern "C" {
void func_020ad838(S1*, u32*);
}
extern "C" {
void func_020ad818(S1*, u32*);
}


extern "C" // mwcc emits functions in reverse order: highest address first.

void func_020ae040(S *s, V8 *p) {
    V8 A;
    B4 B;
    V8 C, D, E, F, G, H, I;
    E12 arr1[7];
    E12 arr2[7];
    s32 mode;
    u8 d5;
    u8 e5;
    s32 n1;
    s32 n2;
    u8 d4;
    u8 d3;
    u8 e4;
    u8 e3;
    s32 k, i, cnt1, cnt2, r, r5;
    MI_CpuCopy8(p, &A, 8);
    mode = _ZN12Unk_020dd3448vfunc_0cEj(data_021ee1f4, 2);
    if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 5)) {
        func_0209cf88(&B);
        r = func_0209cd00(&B, &s->f52);
        if (r >= 1) {
            _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 5);
        } else if (r <= -7) {
            _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 5);
        }
    }
    if (!_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 5)) {
        MI_CpuCopy8(p, &C, 8);
        k = func_0209ceac(C.b5, C.b4, C.b3);
        if (k != 6 && k != 0) {
            r5 = 6 - k;
            if (r5 < 0) r5 = -r5;
            MI_CpuCopy8(&C, &D, 8);
            MI_CpuCopy8(&C, &E, 8);
            func_0209d2c0(&D, r5);
            func_0209d2c0(&E, r5 + 1);
            d4 = D.b4;
            d3 = D.b3;
            d5 = D.b5;
            e4 = E.b4;
            e3 = E.b3;
            e5 = E.b5;
            MI_CpuCopy8(&D, &H, 8);
            n1 = func_0203f508(arr1, &H);
            MI_CpuCopy8(&E, &I, 8);
            n2 = func_0203f508(arr2, &I);
            cnt1 = 0;
            cnt2 = 0;
            for (i = 0; i < n1; i++) {
                if (func_020ae290(arr1[i].h)) cnt1++;
            }
            for (i = 0; i < n2; i++) {
                if (func_020ae290(arr2[i].h)) cnt2++;
            }
            if (cnt1 == 0 && cnt2 == 0) {
                if (mode == 0) {
                    s->f54 = d5;
                    s->f53 = d4;
                    s->f52 = d3;
                    s->f55 = 0;
                } else {
                    s->f54 = e5;
                    s->f53 = e4;
                    s->f52 = e3;
                    s->f55 = 0;
                }
                _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 6);
                _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 5);
            }
        }
    }
    if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 5)) {
        ((u32*)&F)[0] = 0;
        ((u32*)&F)[1] = 0;
        F.b5 = s->f54;
        F.b4 = s->f53;
        F.b3 = s->f52;
        F.b2 = 6;
        F.b1 = 0;
        if (func_0209d3d0(&F, &A, 0x38) == -1) {
            _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 5);
        } else {
            MI_CpuCopy8(&F, &G, 8);
            func_0209d164(&G, 4);
            if (func_0209d3d0(&G, &A, 0x38) == -1) {
                if (func_0209d3d0(&A, &F, 0x38) == -1) {
                    if (!_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 6)) {
                        func_020aed98(s->f53, s->f52);
                        _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 6);
                    }
                }
            }
        }
    }
}
extern "C" void func_020ae03c(S *s) {}
extern "C" u32 func_020ae02c(S *s) { return s->kind & 3; }
extern "C" void func_020ae008(S *s, u32 v) { s->kind = (u16)(v & 3); }
extern "C" u32 func_020adff0(S *s) { return data_020d0978[func_020ae02c(s)]; }
extern "C" u32 func_020adfd8(S *s) { return data_020d097c[func_020ae02c(s)]; }
extern "C" u32 func_020adfc0(S *s) { return data_020d0980[func_020ae02c(s)]; }
extern "C" u32 func_020adfa8(S *s) { return data_020d0984[func_020ae02c(s)]; }
extern "C" u32 func_020adf90(S *s) { return data_020d0970[func_020ae02c(s)]; }
extern "C" u32 func_020adf78(S *s) { return data_020d0968[func_020ae02c(s)]; }
extern "C" u32 func_020adf60(S *s) { return data_020d0974[func_020ae02c(s)]; }
extern "C" u32 func_020adf48(S *s) { return data_020d096c[func_020ae02c(s)]; }
extern "C" u32 func_020adf30(S *s) { return data_020d0988[func_020ae02c(s)]; }
extern "C" u32 func_020adf2c(S *s) { return 1; }
}
const u16 data_020d098c[4] = {0x3860, 0x3864, 0x3868, 0x386c};
const u8 data_020d097c[4] = {2, 3, 5, 8};
const u8 data_020d09a0[6][3] = {{0, 1, 2}, {0, 2, 1}, {1, 2, 0}, {1, 0, 2}, {2, 0, 1}, {2, 1, 0}};
const u8 data_020d0968[4] = {1, 1, 2, 3};
u32 data_020e2e48 = 0x19;
const u8 data_020d0988[4] = {1, 1, 1, 1};
const u16 data_020d09b4[12] = {0x14fe, 0x14ff, 0x1500, 0x1504, 0x1505, 0x1506, 0x150a, 0x150b, 0x150c, 0x1510, 0x1511, 0x1512};
const u8 data_020d096c[4] = {0, 0, 0, 1};
s32 data_021ee178;
const s32 data_020d0964 = 5;
namespace n3 {
extern "C" void func_020add64(S *s, s32 *p) {
    static Unk_0203442c tbl[7] = {Unk_0203442c(0x1369), Unk_0203442c(0x1378), Unk_0203442c(0x1376), Unk_0203442c(0x1374), Unk_0203442c(0x156c), Unk_0203442c(0x136b), Unk_0203442c(0x137a)};
    s32 t = (func_020ae02c(s) == 0) ? ~2 : 0;
    u32 start = *p;
    u32 i;
    func_020af0f8(s->str, p, 0, t + 7, func_020adff0(s), 0x25, 0);
    if (func_020ae02c(s) == 0) {
        u32 cnt = 0;
        u32 j = 0;
        S *base = (S*)((u16*)s + start);
        for (; j < func_020adff0(s); j++) {
            u16 *q = &s->str[start + j];
            u32 m;
            if (func_0204b2d4()) {
                u16 three = 3;
                u32 a = func_0204b25c(q);
                m = (a == func_0204b25c(&three)) ? 1 : 0;
            } else {
                m = (base->str[j] == 3) ? 1 : 0;
            }
            if (m) cnt++;
        }
        if (cnt == 0) {
            u16 *d = &s->str[start + func_02063b8c(2)];
            *d = 3;
        }
    }
    S *base2;
    i = 0;
    base2 = (S*)((u16*)s + start);
    for (; i < func_020adff0(s); i++) {
        base2->str[i] = tbl[base2->str[i]].v;
    }
}
extern "C" void func_020add3c(S *s, void *p) {
    func_020af160(s->str, p, 0, 0, func_020adfd8(s), 0x25, 0);
}
extern "C" void func_020adcec(S *s, s32 *p) {
    u32 start = *p;
    u32 i;
    func_020af0f8(s->str, p, 0, 0xc, func_020adfc0(s), 0x25, 0);
    for (i = start; i < start + func_020adfc0(s); i++) {
        s->str[i] = data_020d09b4[s->str[i]];
    }
}
extern "C" void func_020adcbc(S *s, void *p) {
    func_020af0f8(s->str, p, 0x151d, 2, func_020adfa8(s), 0x25, 0);
}
extern "C" void func_020adc94(S *s, void *p) {
    func_020af160(s->str, p, 4, 0, func_020adf90(s), 0x25, 0);
}
extern "C" void func_020adc6c(S *s, void *p) {
    func_020af160(s->str, p, 3, 0, func_020adf78(s), 0x25, 0);
}
extern "C" void func_020adc44(S *s, void *p) {
    func_020af160(s->str, p, 1, 0, func_020adf60(s), 0x25, 0);
}
extern "C" void func_020adbd0(S *s, s32 *p) {
    u32 i;
    for (i = 0; i < func_020adf48(s); i++) {
        u32 c = s->cnt & 0xf;
        u16 v;
        if (c < 16) v = 0x1521 + c; else v = 0x1521;
        s->str[(*p)++] = v;
        s->cnt++;
    }
}
extern "C" void func_020adba0(S *s, void *p) {
    func_020af0f8(s->str, p, 0x151f, 1, func_020adf30(s), 0x25, 0);
}
extern "C" void func_020adb70(S *s, void *p) {
    func_020af0f8(s->str, p, 0x155e, 1, func_020adf2c(s), 0x25, 0);
}
extern "C" u32 func_020ada88(void) {
    u32 r6;
    void *r7;
    u32 y, x;
    if (func_020ac79c() == 1) return 0;
    if (func_020ae9e0(data_021ed104)) {
        r6 = func_020ae888(data_021ed104);
        void *t = func_0204da0c(r6);
        if (t) {
            r7 = func_0204ec8c(t, 2);
            if (r7) {
                for (y = 0; y < 16; y++) {
                    for (x = 0; x < 16; x++) {
                        if (func_02037558(r7, x, y, 0) && func_0204b1a0()) {
                            u16 name;
                            u32 a[2];
                            V8 b;
                            name = func_0204b160(r6);
                            func_02037590(r7, &name, x, y, 0);
                            func_020ae008((S*)data_021ed104, r6);
                            a[0] = 0; a[1] = 0;
                            if (func_020aec74(a)) {
                                ((u32*)&b)[0] = 0; ((u32*)&b)[1] = 0;
                                func_0209d498(&b);
                                if (b.b5 == ((V8*)a)->b5 && b.b4 == ((V8*)a)->b4 && b.b3 == ((V8*)a)->b3) func_020aecc4();
                            }
                            func_020aeac4(data_021ed104)->p3 = 0;
                            func_020ae3a4(data_021ed104, 1);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
extern "C" void* func_020ada60(void *p) {
    __cxa_vec_ctor(p, 6, 2, _ZN12Unk_0203442cC1Ev, _ZN12Unk_0203442cD1Ev);
    return p;
}
extern "C" void* func_020ada44(void *p) {
    __cxa_vec_cleanup(p, 6, 2, _ZN12Unk_0203442cD1Ev);
    return p;
}
extern "C" void func_020ada2c(S1 *s) {
    func_020af0c4(s, s->arr, 6);
    s->f = 1;
}
extern "C" void func_020ada24(S1 *s) { func_020ada2c(s); }
extern "C" void func_020ada20() {}
extern "C" void func_020ad9c4(S1 *s) {
    V8 t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    func_0209d498(&t);
    if (t.b2 < 6) func_0209d164(&t, 1);
    if (!_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) && func_020ad930(s, &t)) {
        func_020ad970(s, t.b5, t.b4, t.b3);
        func_020ad904(s, &t);
    }
}
extern "C" void func_020ad970(S1 *s, u32 a, u32 b, u32 c) {
    u32 x;
    func_020ada2c(s);
    _ZN12Unk_020dd34413func_020633a0Ehhh(&data_021ee1f4, a, b, c);
    x = 0;
    func_020ad838(s, &x);
    func_020ad818(s, &x);
    func_020ad7b8(s, &x);
    func_020ad79c(s, &x);
    func_020ad798(s);
}
extern "C" u32 func_020ad930(S1 *s, void *p) {
    V8 buf;
    MI_CpuCopy8(p, &buf, 8);
    if (s->e != buf.b5 || s->d != buf.b4 || s->c != buf.b3 || s->f != 0) return 1;
    return 0;
}
extern "C" void func_020ad904(S1 *s, void *p) {
    V8 buf;
    MI_CpuCopy8(p, &buf, 8);
    s->e = buf.b5;
    s->d = buf.b4;
    s->c = buf.b3;
    s->f = 0;
}
extern "C" u16* func_020ad8e8(S1 *s, u32 a, u32 c) {
    return func_020af034(a, s, s->arr, 6, c);
}
extern "C" void func_020ad8d0(S1 *s, u32 a) {
    func_020aef80(a, s, s->arr, 6);
}
extern "C" u32 func_020ad8c0(S1 *s, u32 a) {
    return func_020af070(a, 6, s->arr);
}
extern "C" u32 func_020ad854(S1 *s, u16 *key) {
    u32 i;
    for (i = 0; i < 6; i++) {
        u16 *p = func_020ad8e8(s, i, 0);
        BOOL m;
        if (func_0204b2d4()) {
            m = (func_0204b25c(p) == func_0204b25c(key)) ? TRUE : FALSE;
        } else {
            m = (*p == *key) ? TRUE : FALSE;
        }
        if (m) {
            return func_020ad8c0(s, i);
        }
    }
    return 0;
}
extern "C" void func_020ad838(S1 *a, u32 *b) {
    func_020af160(a, b, 7, 0x1d, 1, 6, 1);
}
extern "C" void func_020ad818(S1 *a, u32 *b) {
    func_020af160(a, b, 2, 0, 3, 6, 1);
}
}

// ======== unk_020acf38.cpp ========
namespace n2 {
extern "C" {
u32 func_0205b504();
}
extern "C" {
s32 func_0205b4e0();
}
extern "C" {
s32 func_0205b4ec();
}
extern "C" {
u32 func_02063b8c(u32 n);
}
extern "C" {
Unk_02062f94_Ret func_02062f94(Unk_02063380 *q, u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
u32 _ZN12Unk_020dd3448vfunc_0cEj(void *p, u32 v);
}
extern "C" {
u32 func_02061764();
}
extern "C" {
u32 func_02061770();
}
extern "C" {
void func_020af0c4(void *a, void *b, u32 n);
}
extern "C" {
void func_020af160(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g);
}
extern "C" {
void func_020862f8(void *p);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e120Ej(void *p, u32 n);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e148Ej(void *p, u32 n);
}
extern "C" {
u32 _ZN12Unk_0209da4413func_0209e170Ej(void *p, u32 n);
}
extern "C" {
void *func_0209750c();
}
extern "C" {
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
}
extern "C" {
u32 _ZN12Unk_0206395413func_02094058Ev(void *p);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_02072e44Ev(u32 v);
}
extern "C" {
void func_0203ce4c(u32 a, void *b);
}
extern "C" {
void *func_02097868(void *p, u32 i);
}
extern "C" {
u32 _ZN12Unk_0209865c13func_02098a48Ev();
}
extern "C" {
u32 _ZN12Unk_02097ff413func_02098044Ej(void *p, u32 n);
}
extern "C" {
u32 func_02097740(void *p, void *q);
}
extern "C" {
void func_020656dc(Unk_020dd458 *c, u8 *a, const char *s, const u32 *p, const u32 *q, void *r);
}
extern "C" {
u32 func_02096aac(Unk_020dd458 *c);
}
extern "C" {
void func_02096a50(Unk_020dd458 *c, u32 i);
}
extern "C" {
u32 func_020b35ac(void *w, u8 *b, const char *s);
}
extern "C" {
u32 func_0204da0c();
}
extern "C" {
u32 func_0204ec8c(u32 a, u32 b);
}
extern "C" {
void func_02135558x();
}
extern "C" {
u32 func_020374f4(u32 a, void *b, void *c, void *d, void *e, u32 f);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
void func_02135558(void *a, void *b, void *c);
}
extern "C" {
void _ZN12Unk_0203442cD1Ev();
}
extern "C" {
u32 func_0204b2d4();
}
extern "C" {
u32 func_0204b25c(void *p);
}
extern "C" {
void *func_020aef80(u32 a, void *b, void *c, u32 d);
}
extern "C" {
void *func_020af034(u32 a, void *b, void *c, u32 d, u32 e);
}
extern "C" {
u32 func_020af070(u32 a, u32 b, void *c);
}
extern "C" {
extern u8 data_021ee15c;
}
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
extern u8 data_021d735c[];
}
extern "C" {
extern u8 data_021ed284[];
}
extern "C" {
extern u8 data_021ee1f4[];
}
extern "C" {
extern u32 data_020cbb18;
}
extern "C" {
extern const u32 data_020e2e44;
}
extern "C" {
extern const u32 data_020e2e48;
}
extern "C" {
extern const char data_020e2e80[];
}
extern "C" {
extern const char data_020e2e90[];
}
extern "C" {
extern u8 data_020d09a0[][3];
}
extern "C" {
extern u32 data_021ee170;
}
extern "C" {
extern void *data_021ee188x;
}
extern "C" {
extern u16 data_021ee16c;
}
extern "C" {
extern u8 data_021ee188[];
}


extern "C" { extern Unk_021ed2c0 data_021ed2c0; }
extern "C" {
void func_020acf38(Unk_020acf38 *p);
}
extern "C" {
void func_020acf40(Unk_020acf38 *p);
}
extern "C" {
Unk_020acf38 *func_020acf44(Unk_020acf38 *p);
}
extern "C" {
void func_020acf58(Unk_020acf38 *p);
}
extern "C" {
void func_020acf60(Unk_020acf38 *p);
}

extern "C" void *func_020acfa8(Unk_021ed2c0 *g, u32 a, u32 b);



extern "C" void func_020ad7b8(void *a, void *b) {
    u32 x = func_02061770();
    u32 y = func_02061764();
    if (_ZN12Unk_020dd3448vfunc_0cEj(data_021ee1f4, x + y) < func_02061770()) {
        func_020af160(a, b, 6, 0x1d, 1, 6, 1);
    } else {
        func_020af160(a, b, 8, 0x1d, 1, 6, 1);
    }
}

extern "C" void func_020ad79c(void *a, void *b) {
    func_020af160(a, b, 5, 0x1d, 1, 6, 1);
}

extern "C" void func_020ad798() {}}


Unk_020e2e54::Unk_020e2e54() {
    using namespace n2;
    func_020a7c3c();
}
namespace n2 {
}


Unk_020e2e54::~Unk_020e2e54() {
    using namespace n2;}
namespace n2 {
}


void *Unk_020e2e54::vfunc_0c() {
    using namespace n2;
    return (u8 *)this + 0x12;
}
namespace n2 {
}


u32 Unk_020e2e54::vfunc_08() {
    using namespace n2;
    return 0x21;
}
namespace n2 {
}


Unk_020ad700::Unk_020ad700() {
    using namespace n2;
    func_020ad700();
}
namespace n2 {
}


Unk_020ad700::~Unk_020ad700() {
    using namespace n2;}
namespace n2 {
}


// ---- Unk_020ad700 ----
void Unk_020ad700::func_020ad700() {
    using namespace n2;
    bits = 0;
    slot = -1;
    func_020ad568();
    _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 8);
}
namespace n2 {
}


BOOL Unk_020ad700::func_020ad680() {
    using namespace n2;
    if (slot == -1) {
        u32 cnt = func_020ad474();
        if (cnt != 0) {
            u32 target = func_02063b8c(cnt);
            u32 n = 0;
            u32 i;
            for (i = 0; i < 32; i++) {
                if (!func_020ad45c(i)) {
                    if (target == n) {
                        slot = i;
                        func_020ad444(i);
                        func_020862f8(data_021ed284);
                        data_021ed2c0.func_020ad040();
                        func_020ad568();
                        _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 8);
                        return TRUE;
                    }
                    n++;
                }
            }
        }
        return FALSE;
    }
    return TRUE;
}
namespace n2 {
}


BOOL Unk_020ad700::func_020ad650() {
    using namespace n2;
    slot = -1;
    if (func_020ad474() == 0) {
        bits = 0;
    }
    func_020ad568();
    _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 8);
    return TRUE;
}
namespace n2 {
}


u32 Unk_020ad700::func_020ad618(void *w) {
    using namespace n2;
    if (slot != -1) {
        u8 b = (slot & 0x1f) << 1;
        return func_020b35ac(w, &b, "st_password");
    }
    return 0;
}
namespace n2 {
}


u8 Unk_020ad700::func_020ad5f8() {
    using namespace n2;
    if (slot != -1) {
        return slot * 2 + 1;
    }
    return 0;
}
namespace n2 {
}


u32 Unk_020ad700::func_020ad5c0(void *w) {
    using namespace n2;
    if (slot != -1) {
        u8 b = ((slot & 0x1f) << 1) + 1;
        return func_020b35ac(w, &b, "st_password");
    }
    return 0;
}
namespace n2 {
}


BOOL Unk_020ad700::func_020ad594() {
    using namespace n2;
    if (slot != -1) {
        if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 8) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}
namespace n2 {
}


void Unk_020ad700::func_020ad570() {
    using namespace n2;
    if (slot != -1) {
        _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 8);
    }
}
namespace n2 {
}


void Unk_020ad700::func_020ad568() {
    using namespace n2;
    flags = 0;
}
namespace n2 {
}


BOOL Unk_020ad700::func_020ad53c(u32 i) {
    using namespace n2;
    if (slot != -1) {
        return ((flags >> (i & 3)) & 1) != 0;
    }
    return FALSE;
}
namespace n2 {
}


void Unk_020ad700::func_020ad518(u32 i) {
    using namespace n2;
    if (slot != -1) {
        flags |= 1 << (i & 3);
    }
}
namespace n2 {
}


void Unk_020ad700::func_020ad500(u32 i) {
    using namespace n2;
    flags &= ~(1 << (i & 3));
}
namespace n2 {


extern "C" void func_020ad4f4() {
    data_021ee15c = 0;
}

extern "C" BOOL func_020ad4cc() {
    if (_ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 1) {
        return data_021ee15c;
    }
    return FALSE;
}}


BOOL Unk_020ad700::func_020ad498() {
    using namespace n2;
    if (slot != -1) {
        if (_ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 1) {
            n2::data_021ee15c = 1;
            return TRUE;
        }
    }
    return FALSE;
}
namespace n2 {
}


u32 Unk_020ad700::func_020ad474() {
    using namespace n2;
    u32 n = 0;
    u32 i;
    for (i = 0; i < 32; i++) {
        if (!func_020ad45c(i)) {
            n++;
        }
    }
    return n;
}
namespace n2 {
}


BOOL Unk_020ad700::func_020ad45c(u32 i) {
    using namespace n2;
    return (bits & (1 << (i & 0x1f))) != 0;
}
namespace n2 {
}


void Unk_020ad700::func_020ad444(u32 i) {
    using namespace n2;
    bits |= 1 << (i & 0x1f);
}
namespace n2 {
}


Unk_021ed2c0::Unk_021ed2c0() {
    using namespace n2;}
namespace n2 {
}


Unk_021ed2c0::~Unk_021ed2c0() {
    using namespace n2;}
namespace n2 {
}


void Unk_021ed2c0::func_020ad3d8() {
    using namespace n2;
    func_020ad3c8();
    s.func_020ad700();
}
namespace n2 {
}


void Unk_021ed2c0::func_020ad3c8() {
    using namespace n2;
    func_020af0c4(this, tbl, 3);
}
namespace n2 {


extern "C" void func_020ad3c0(Unk_021ed2c0 *g) {
    g->func_020ad3d8();
}}


// ---- Unk_021ed2c0 ----
Unk_020ad700 *Unk_021ed2c0::func_020ad3bc() {
    using namespace n2;
    return &s;
}
namespace n2 {


}
u32 data_020e2e38 = 0x18;
const u8 data_020d0970[4] = {1, 1, 2, 3};
u32 data_020e2e44 = 0xb;
u8 data_021ee15c;
namespace n2 {
extern "C" BOOL func_020ad330() {
    u32 v[4];
    u32 a = func_0204da0c();
    if (a != 0) {
        u32 b = func_0204ec8c(a, 0x200);
        if (b != 0) {
            static Unk_0203442c tmp(0x5012);
            if (func_020374f4(b, &v[0], &v[1], &tmp, &tmp, 0) != 0) {
                v[2] = 0;
                v[3] = 0;
                func_0209d498(&v[2]);
                if (((u8 *)v)[0xa] >= 6) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_020ad314(u32 i) {
    data_021ed2c0.func_020ad3bc()->func_020ad500((u8)i);
}

extern "C" BOOL func_020ad2c8() {
    void *p = func_0209750c();
    if (p != NULL) {
        void *q = _ZN12Unk_0209865c13func_0209888cEv(p);
        if (_ZN12Unk_0206395413func_02094058Ev(q) == 1) {
            return func_020ad4cc();
        }
        u8 v = func_02097740(data_021d735c, q) & 3;
        return data_021ed2c0.func_020ad3bc()->func_020ad53c(v);
    }
    return FALSE;
}

extern "C" BOOL func_020ad274() {
    void *p = func_0209750c();
    if (p != NULL) {
        void *q = _ZN12Unk_0209865c13func_0209888cEv(p);
        if (_ZN12Unk_0206395413func_02094058Ev(q) == 1) {
            return data_021ed2c0.func_020ad3bc()->func_020ad498();
        }
        u8 v = func_02097740(data_021d735c, q) & 3;
        data_021ed2c0.func_020ad3bc()->func_020ad518(v);
        return TRUE;
    }
    return FALSE;
}

// ---- misc ----
extern "C" void func_020ad194() {
    data_021ed2c0.func_020ad3bc()->func_020ad680();
    if (data_021ed2c0.func_020ad3bc()->func_020ad594()) {
        if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0) {
            Unk_020dd458 ctx;
            u8 r = func_02063b8c(3);
            Unk_020e2e54 w;
            data_021ed2c0.func_020ad3bc()->func_020ad5c0(&w);
            func_0203ce4c(2, &w);
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = func_02097868(data_021d735c, i);
                if (p != NULL && _ZN12Unk_0209865c13func_02098a48Ev() != 0 && _ZN12Unk_02097ff413func_02098044Ej(p, 12) != 0) {
                    func_020656dc(&ctx, &r, "sp_npc_foxmail", &data_020e2e44, &data_020e2e48, _ZN12Unk_0209865c13func_0209888cEv(p));
                    if (func_02096aac(&ctx) == 0) {
                        func_02096a50(&ctx, 0);
                    }
                }
            }
            data_021ed2c0.func_020ad3bc()->func_020ad570();
        }
    }
}}


void Unk_021ed2c0::func_020ad040() {
    using namespace n2;
    u16 buf[3];
    u16 *p;
    u32 a, b;
    u32 i;
    func_020ad3c8();
    a = func_0205b504() / 10 + 0x32;
    if (func_02063b8c(100) < a) {
        Unk_02063380 q(0, 0x26);
        arr[0].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
    } else {
        Unk_02063380 q(0, 0x27);
        arr[0].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
    }
    b = (func_0205b4e0() + func_0205b4ec()) / 10 + 0x32;
    for (i = 1; i < 3; i++) {
        if (func_02063b8c(100) < b) {
            Unk_02063380 q(0, 5);
            arr[i].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
        } else {
            Unk_02063380 q(0, 0);
            arr[i].v = func_02062f94(&q, 0, 0, 0, 1, 0).v;
        }
    }
    buf[0] = 0xfff1;
    buf[1] = 0xfff1;
    buf[2] = 0xfff1;
    for (i = 0; i < 3; i++) {
        buf[i] = arr[i].v;
    }
    u32 r = func_02063b8c(6);
    for (i = 0; i < 3; i++) {
        arr[i].v = buf[n2::data_020d09a0[r][i]];
    }
}
namespace n2 {


extern "C" u32 func_020ad030(Unk_021ed2c0 *g, u32 a) {
    return func_020af070(a, 3, g->tbl);
}

extern "C" u32 func_020acfc4(Unk_021ed2c0 *g, u16 *ptr) {
    u32 i;
    for (i = 0; i < 3; i++) {
        u16 *p = (u16 *)func_020acfa8(g, i, 0);
        BOOL eq;
        if (func_0204b2d4() != 0) {
            eq = func_0204b25c(p) == func_0204b25c(ptr);
        } else {
            eq = *p == *ptr;
        }
        if (eq) {
            return func_020ad030(g, i);
        }
    }
    return 0;
}

extern "C" void *func_020acfa8(Unk_021ed2c0 *g, u32 a, u32 b) {
    return func_020af034(a, g, g->tbl, 3, b);
}

extern "C" void func_020acf90(Unk_021ed2c0 *g, u32 a) {
    func_020aef80(a, g, g->tbl, 3);
}

extern "C" Unk_020acf38 *func_020acf78(Unk_020acf38 *p) {
    func_020acf44(p);
    func_020acf58(p);
    return p;
}

extern "C" Unk_020acf38 *func_020acf68(Unk_020acf38 *p) {
    func_020acf40(p);
    return p;
}

extern "C" void func_020acf60(Unk_020acf38 *p) {
    func_020acf38(p);
}

extern "C" void func_020acf58(Unk_020acf38 *p) {
    func_020acf60(p);
}

extern "C" void func_020acf54(Unk_020acf38 *p) {}

extern "C" Unk_020acf38 *func_020acf44(Unk_020acf38 *p) {
    func_020acf38(p);
    return p;
}

extern "C" void func_020acf40(Unk_020acf38 *p) {}

extern "C" void func_020acf38(Unk_020acf38 *p) {
    p->v = 0;
}
}
// ======== unk_020abbcc.cpp ========
namespace n1 {
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
void NNS_G3dGeFlushBuffer(void);
}
extern "C" {
void G3_LoadMtx43(void *p);
}
extern "C" {
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
}
extern "C" {
u32 _s32_div_f(u32 a, u32 b);
}
extern "C" {
void *func_020e8608(s32 heap, u32 size);
}
extern "C" {
void func_020e85fc(s32 heap, void *p);
}
extern "C" {
void func_02135558(void (*f)(), void *p);
}
extern "C" {
void NNS_G3dMdlSetMdlDiff(u32 a, u32 b, u32 c);
}
extern "C" {
void NNSi_G3dModifyMatFlag(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020e8388(void *m, s32 a, s32 b, s32 c);
}
extern "C" {
void func_020e8434(void *m, s32 a);
}
extern "C" {
void func_020e84f8(void *m, s32 a, s32 b, s32 c);
}
extern "C" {
void MTX_Concat43(void *a, void *b, void *c);
}
extern "C" {
void VEC_Normalize(void *a, void *b);
}
extern "C" {
s32 func_02030814(s32 a);
}
extern "C" {
void func_020339bc(Unk_02033914 *p, Vec3 *pos, s32 a, s32 b);
}
extern "C" {
s32 func_02033914(Unk_02033914 *p, s32 a);
}
extern "C" {
void func_02033988(Unk_02033914 *p);
}
extern "C" {
BOOL func_020b51fc(void);
}
extern "C" {
s32 func_0203ef38(Vec3 *out, Vec3 *in);
}
extern "C" {
void func_0203eeac(Vec3 *out, Vec3 *in);
}
extern "C" {
void func_0205553c(void *a, Vec3 *scale);
}
extern "C" {
void func_02054b14(void *a);
}
extern "C" {
Col func_02064cc4(void);
}
extern "C" {
RGB func_02064f2c(void);
}
extern "C" {
s32 func_02064c84(s32 a);
}
extern "C" {
void func_0209cf18(void *p);
}
extern "C" {
BOOL func_02054c88(void *a, void *b, s32 c);
}
extern "C" {
void func_02000c8c();
}
extern "C" {
extern u8 data_020e416c;
}
extern "C" {
extern u32 data_020e2dc4;
}
extern "C" {
extern u8 data_020e2de4;
}
extern "C" {
extern u8 data_020e2de8;
}
extern "C" {
extern u32 data_020e2dc8;
}
extern "C" {
extern s32 data_021f482c;
}
extern "C" {
extern s32 data_021c620c;
}
extern "C" {
extern u8 data_021f47e0[];
}
extern "C" {
extern u8 data_021edf04[];
}
extern "C" {
extern Unk_021ede90 *data_021ede90;
}
extern "C" {
extern u8 data_021edea0[];
}
extern "C" {
extern s32 data_021edf44;
}
extern "C" {
extern s32 data_020d0964;
}
extern "C" {
extern Unk_020ac0c4_Entry data_021ee114[];
}
extern "C" {
extern Unk_020abea8 data_021ee010, data_021ee044, data_021ee078, data_021ee0ac, data_021ee0e0;
}
extern "C" {
extern u32 data_021edf3c;
}
extern "C" {
extern Unk_020d094c data_020d094c[];
}
extern "C" {
extern u8 data_020e2e10[];
}
extern "C" {
extern u8 data_020e2e2c[];
}
extern "C" {
void *func_020641d8(void *p);
}
extern "C" {
u8 *NNS_G3dGetTex(void *p);
}
extern "C" {
void func_02055724(void *p, s32 a);
}
extern "C" {
u8 *func_0205588c(void *p, s32 heap);
}
extern "C" {
void func_020e8558(void *p);
}
extern "C" {
void func_020639e8(char *buf, const void *fmt, ...);
}
extern "C" {
u32 func_02057100(u8 *base, char *name);
}
extern "C" {
u32 func_02057078(u8 *base, char *name);
}
extern "C" {
extern u32 data_021edf40;
}
extern "C" {
extern s32 data_021edf48;
}
extern "C" {
extern s32 data_021c3070;
}
extern "C" {
extern Vec3 data_021c309c;
}
extern "C" {
extern u8 data_021edfe0[];
}
extern "C" {
extern u8 data_021edfbc[];
}
extern "C" {
extern u8 data_0213c7e0[];
}
extern "C" {
BOOL func_020b5184(void);
}
extern "C" {
int func_020ac79c(void);
}
extern "C" {
void func_020ac790(int v);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072e44Ev(void *h);
}
extern "C" {
void func_020ada88(void);
}
extern "C" {
void func_020ae3a4(void *p, int v);
}
extern "C" {
u32 func_02063b8c(u32 n);
}
extern "C" {
u32 func_020af1d8(void *p);
}
extern "C" {
void func_020af1fc(void *p);
}
extern "C" {
void func_020acb74(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e);
}
extern "C" {
void func_020ac8d4(u32 a, u32 b, u8 c, u32 d);
}
extern "C" {
BOOL func_020b5268(u32 v);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728d4Ev(void *h);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *h, void *p, u32 n);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072824Ejj(void *h, u32 a, u32 b);
}
extern "C" {
u32 func_020aec4c(void);
}
extern "C" {
u32 _ZN18Unk_ov004_0223e9bc19func_ov004_0223e9c0Ev(u32 a, u32 b);
}
extern "C" {
u16 *func_ov004_0223ea90(u32 a, u32 b);
}
extern "C" {
u16 *func_ov004_0223ed40(void);
}
extern "C" {
u32 func_020acf90(void *p, u32 v);
}
extern "C" {
u32 func_020ad8d0(void *p, u16 *v);
}
extern "C" {
BOOL func_020aca18(void);
}
extern "C" {
void func_02061478(void *a, void *b);
}
extern "C" {
void _ZN12Unk_020dd324C1EPt(void *a, void *b);
}
extern "C" {
void func_0203ce4c(u32 a, void *b);
}
extern "C" {
void _ZN12Unk_020dd458C1Ev(void *p);
}
extern "C" {
void *func_0209750c(void);
}
extern "C" {
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
}
extern "C" {
u32 func_020ae02c(void *p);
}
extern "C" {
void func_020656dc(void *o, void *a, const void *b, void *c, void *d, void *e);
}
extern "C" {
void _ZN12Unk_0206555413func_02065588Etj(void *o, u32 a, u32 b);
}
extern "C" {
u32 func_0204bde8(void *p);
}
extern "C" {
BOOL func_02096a50(void *o, int z);
}
extern "C" {
void func_020ae740(void *p, u32 a, u32 b);
}
extern "C" {
void *_ZN12Unk_0209865c13func_020986bcEv(void *p);
}
extern "C" {
u16 *func_020acf54(void *p);
}
extern "C" {
void func_020ace10(u16 *p, u32 v);
}
extern "C" {
void _ZN12Unk_020dd458D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020dd324D1Ev(void *p);
}
extern "C" {
BOOL func_02096880(void);
}
extern "C" {
u32 func_020b50e8(void);
}
extern "C" {
u16 *func_020ae844(void *p, u32 i, u16 *v);
}
extern "C" {
u32 func_020ae82c(void *p, u16 *v);
}
extern "C" {
u32 func_ov004_0223ecf4(u32 a, u32 b);
}
extern "C" {
u32 _ZN12Unk_0206395413func_02094058Ev(void *p);
}
extern "C" {
u32 func_020ae664(void *p, u32 a, u32 b, u32 c);
}
extern "C" {
BOOL func_ov004_0223ec44(u32 *x, u32 *y, u32 a);
}
extern "C" {
void func_020aee90(u32 x, u32 y, u32 c, u32 e);
}
extern "C" {
BOOL func_0204b2d4(u16 *p);
}
extern "C" {
u32 func_0204b25c(u16 *p);
}
extern "C" {
u16 *func_020ad8e8(void *p, u32 a, u32 b);
}
extern "C" {
u16 *func_020acfa8(void *p, u32 a, u32 b);
}
extern "C" {
void func_020ad854(void *p, u16 *v);
}
extern "C" {
void func_020acfc4(void *p, u16 *v);
}
extern "C" {
void func_020aedc4(u16 *p, u32 c, u32 e);
}
extern "C" {
BOOL func_020aeb14(void *p);
}
extern "C" {
u32 func_020acde8(u32 v);
}
extern "C" {
u32 func_020acdd4(u32 i);
}
extern "C" {
void func_020ace48(u16 *p, u32 add);
}
extern "C" {
void func_020ace7c(void);
}
extern "C" {
BOOL _ZN12Unk_02097ff413func_02098044Ej(void *p, u32 i);
}
extern "C" {
void _ZN12Unk_02097ff413func_0209801cEj(void *p, u32 i);
}
extern "C" {
extern void *data_020cbb18;
}
extern "C" {
extern u8 data_021ed104[];
}
extern "C" {
extern u8 data_021ed2c0[];
}
extern "C" {
extern u8 data_021ed2d4[];
}
extern "C" {
extern u8 data_021ee160[];
}
extern "C" {
extern int data_021ee178;
}
extern "C" {
extern u16 data_021ee168;
}
extern "C" {
extern u16 data_020d09b4[];
}
extern "C" {
extern u16 data_020d0994[];
}
extern "C" {
extern u16 data_020d098c[];
}
extern "C" {
extern u8 data_020e2e38[];
}
extern "C" {
extern u8 data_020e2e3c[];
}
extern "C" {
extern u8 data_020e2e40[];
}
extern "C" {
extern u8 data_020e2e64[];
}
extern "C" {
extern u8 data_020e2e34[];
}
extern "C" {
extern u8 data_020e2e74[];
}
extern "C" {
void func_020ac724(void *a, void *b);
}
extern "C" {
u8 func_020ac2e8(Vec3 *p, s32 q, u8 c);
}
extern "C" {
u8 func_020ac2c8(Vec3 *p, s32 q);
}
extern "C" {
u8 func_020ac2d8(Vec3 *p, s32 q);
}
extern "C" {
void func_020abc10(Vec3 *pos, s32 a, s32 b, s32 c);
}

static inline BOOL inRange2(const u16 &a, const u16 &b) {
    BOOL r = FALSE;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL inRange2v(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL cmp16(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        return func_0204b25c(a) == func_0204b25c(b);
    }
    return *a == *b;
}

static inline BOOL isOne() {
    if (data_020e416c == 1) {
        return TRUE;
    }
    return FALSE;
}
static inline void *Unk_020ac500_Data(const Unk_020ac500_Dict *dict, u32 idx) {
    Unk_020ac500_DictHdr *hdr = (Unk_020ac500_DictHdr *)((u8 *)dict + dict->ofsEntry);
    return &hdr->data[hdr->sizeUnit * idx];
}
static inline u32 *Unk_020ac500_TexData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (u32 *)Unk_020ac500_Data(&tex->dict, idx);
}
static inline Unk_020ac500_Pltt *Unk_020ac500_PlttData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (Unk_020ac500_Pltt *)Unk_020ac500_Data((const Unk_020ac500_Dict *)((u8 *)tex + tex->ofsPlttDict), idx);
}




extern "C" void func_020ace7c(void) {
    if (!_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        void *r5 = func_0209750c();
        if (r5) {
            u32 n = func_020acde8(*func_020acf54(_ZN12Unk_0209865c13func_020986bcEv(r5)));
            if (n) {
                u32 i;
                int z = 0;
                for (i = 0; i < n; i++) {
                    u32 j = i + 0x1c;
                    if (i < 4 && !_ZN12Unk_02097ff413func_02098044Ej(r5, j)) {
                        u32 obj[0x3d];
                        u8 ib;
                        _ZN12Unk_020dd458C1Ev(obj);
                        ib = i;
                        func_020656dc(obj, &ib, "sp_npc_atm", data_020e2e34, data_020e2e38, _ZN12Unk_0209865c13func_0209888cEv(r5));
                        _ZN12Unk_0206555413func_02065588Etj(obj, data_020d098c[i & 3], 1);
                        if (func_02096a50(obj, z)) {
                            _ZN12Unk_02097ff413func_0209801cEj(r5, j);
                        }
                        _ZN12Unk_020dd458D1Ev(obj);
                    }
                }
            }
        }
    }
}

extern "C" void func_020ace48(u16 *p, u32 add) {
    u32 k = func_020acde8(*p);
    int s = add + *p;
    if (s >= 0xc350) {
        s = 0xc350;
    }
    *p = s;
    if (k != func_020acde8(*p)) {
        func_020ace7c();
    }
}

extern "C" void func_020ace10(u16 *p, u32 v) {
    u16 t = _s32_div_f(v, 100);
    if (func_020aeb14(data_021ed104)) {
        t = t * 5;
    }
    func_020ace48(p, t);
}

extern "C" u32 func_020acde8(u32 v) {
    int i;
    for (i = 4; i >= 0; i--) {
        if (v >= func_020acdd4(i)) {
            return i;
        }
    }
    return 0;
}

extern "C" u32 func_020acdd4(u32 i) {
    if (i < 5) {
        return data_020d0994[i];
    }
    return 0;
}

extern "C" u16 func_020acdac(u16 *p) {
    u32 k = func_020acde8(*p);
    if (k != 4) {
        return func_020acdd4(k + 1) - *p;
    }
    return 0;
}

extern "C" void func_020acb74(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e) {
    u16 cur;
    Pack p1;
    u32 x, y;
    Pack p2;
    e = e;
    if (a == 0x3f) {
        func_020ae740(data_021ed104, b, d);
        if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) && flag) {
            p1.a = a;
            p1.b = b;
            p1.c = d;
            p1.d = c;
            void *h = data_020cbb18;
            _ZN12Unk_020cbb1813func_020728d4Ev(h);
            _ZN12Unk_020cbb1813func_020728a4EPhj(h, &p1, 4);
            _ZN12Unk_020cbb1813func_02072824Ejj(h, 0x26, 4);
        }
    } else {
        cur = data_021ee168;
        switch (mode) {
        case 0:
            cur = *func_020ae844(data_021ed104, a, 0);
            break;
        case 1:
            cur = *func_020ad8e8(data_021ed2d4, a, 0);
            break;
        case 2:
            cur = *func_020acfa8(data_021ed2c0, a, 0);
            break;
        }
        if (!cmp16(&cur, &data_021ee168)) {
            switch (mode) {
            case 0:
                func_020ae664(data_021ed104, a, b, d);
                if (flag) {
                    func_020ace10(func_020acf54(_ZN12Unk_0209865c13func_020986bcEv(func_0209750c())), b);
                }
                if (isOne()) {
                    if (func_ov004_0223ec44(&x, &y, a)) {
                        if (a == 0x3f) {
                            e = 0;
                        }
                        func_020aee90(x, y, c, e);
                    }
                }
                break;
            case 1:
                func_020ad854(data_021ed2d4, &cur);
                func_020aedc4(&cur, c, e);
                break;
            case 2:
                func_020acfc4(data_021ed2c0, &cur);
                func_020aedc4(&cur, c, e);
                break;
            }
            if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) && flag) {
                p2.a = a;
                p2.b = b;
                p2.c = d;
                p2.d = c;
                void *h = data_020cbb18;
                _ZN12Unk_020cbb1813func_020728d4Ev(h);
                _ZN12Unk_020cbb1813func_020728a4EPhj(h, &p2, 4);
                _ZN12Unk_020cbb1813func_02072824Ejj(h, 0x26, 4);
            }
        }
    }
}

extern "C" void func_020acb28(int a) {
    BOOL x = _ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 0;
    if (a > 0x249f0) {
        a = 0x249f0;
    }
    func_020acb74(0x3f, a, func_020b50e8(), x, 0, 1, 0);
}

extern "C" void func_020aca4c(u32 a, u32 b, u32 c, u32 d) {
    u16 v[2];
    u32 r;
    v[0] = *func_ov004_0223ed40();
    if (inRange2(v[0], v[0]) && func_020b50e8() == 0x1d) {
        u32 i;
        v[1] = 0xfff1;
        for (i = 0; i < 0x25; i++) {
            func_020ae844(data_021ed104, i, &v[1]);
            if (inRange2v(&v[1])) {
                break;
            }
        }
        r = i + func_ov004_0223ecf4(a, b);
    } else {
        r = func_020ae82c(data_021ed104, v);
    }
    if (r != (u32)-1) {
        BOOL x = _ZN12Unk_0206395413func_02094058Ev(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 0;
        func_020af1fc(data_021ee160);
        func_020acb74(r, c, d, x, 0, 1, 0);
    }
}

extern "C" u32 func_020aca44(void) {
    return func_020aec4c();
}

extern "C" BOOL func_020aca18(void) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        return FALSE;
    }
    if (func_02096880()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020ac948(void *name) {
    if (func_020aca18()) {
        u16 id;
        u8 by;
        u32 s1[9];
        u32 obj[0x3d];
        func_02061478(&id, name);
        _ZN12Unk_020dd324C1EPt(s1, &id);
        func_0203ce4c(1, s1);
        _ZN12Unk_020dd458C1Ev(obj);
        void *r4 = func_0209750c();
        u8 *d = data_021ed104;
        by = func_020ae02c(d);
        func_020656dc(obj, &by, "sp_npc_raccoon", data_020e2e40, data_020e2e3c, _ZN12Unk_0209865c13func_0209888cEv(r4));
        _ZN12Unk_0206555413func_02065588Etj(obj, id, 1);
        u32 r = func_0204bde8(&id);
        if (func_02096a50(obj, 0)) {
            func_020ae740(d, r, 1);
            func_020ace10(func_020acf54(_ZN12Unk_0209865c13func_020986bcEv(func_0209750c())), r);
            _ZN12Unk_020dd458D1Ev(obj);
            _ZN12Unk_020dd324D1Ev(s1);
            return TRUE;
        }
        _ZN12Unk_020dd458D1Ev(obj);
        _ZN12Unk_020dd324D1Ev(s1);
    }
    return FALSE;
}

extern "C" void func_020ac8fc(u32 a, u32 b, u32 c) {
    u16 v = *func_ov004_0223ea90(a, b);
    u32 r = func_020ad8d0(data_021ed2d4, &v);
    if (r != (u32)-1) {
        func_020af1fc(data_021ee160);
        func_020acb74(r, 0, c, 1, 1, 1, 0);
    }
}

extern "C" u32 func_020ac8f4(void) {
    return func_020aec4c();
}

extern "C" void func_020ac8d4(u32 a, u32 b, u8 c, u32 d) {
    func_020acb74(a, 0, b, 1, 2, c, d);
}

extern "C" void func_020ac894(u32 a, u32 b, u32 c) {
    u32 r = func_020acf90(data_021ed2c0, _ZN18Unk_ov004_0223e9bc19func_ov004_0223e9c0Ev(a, b));
    if (r != (u32)-1) {
        func_020af1fc(data_021ee160);
        func_020ac8d4(r, c, 1, 0);
    }
}

extern "C" u32 func_020ac88c(void) {
    return func_020aec4c();
}

extern "C" void func_020ac7f8(Bits *p, u32 arg) {
    u32 a = p->a;
    u8 d = p->d;
    BOOL c = p->c ? TRUE : FALSE;
    if (d == 10) {
        func_020acb74(a, 0, d, 1, 1, 0, 1);
    } else if (d == 15) {
        func_020ac8d4(a, d, 0, 1);
    } else if (func_020b5268(d)) {
        func_020acb74(a, p->b, d, c, 0, 0, 1);
    }
    if (a != 0x3f) {
        void *h = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(h);
        _ZN12Unk_020cbb1813func_02072824Ejj(h, 0x27, arg);
    }
}

extern "C" u32 func_020ac7e8(void) {
    return func_020af1d8(data_021ee160);
}

extern "C" void func_020ac7cc(u16 *p) {
    *p = data_020d09b4[func_02063b8c(12)];
}

extern "C" BOOL func_020ac7a8(void) {
    struct { u8 a; u8 b; u8 c; u8 d; } s;
    func_0209cf18(&s);
    if (s.b >= 8 && s.b < 0x17) {
        return TRUE;
    }
    return FALSE;
}

extern "C" int func_020ac79c(void) {
    return data_021ee178;
}

extern "C" void func_020ac790(int v) {
    data_021ee178 = v;
}

extern "C" void func_020ac750(void) {
    if (func_020b5184()) {
        if (func_020ac79c() == 2) {
            if (!_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
                func_020ada88();
                func_020ae3a4(data_021ed104, 0);
            }
        }
        func_020ac790(0);
    }
}}


// ======== data (last gap) ========
Unk_0203442c data_021ee164(0xfff1);
u32 data_020e2e40 = 3;
const u8 data_020d0974[4] = {1, 2, 3, 4};
const u8 data_020d0980[4] = {1, 2, 4, 7};
Unk_0203442c data_021ee168(0x1547);
const u8 data_020d0978[4] = {2, 3, 4, 6};
u32 data_020e2e3c = 0x18;
const u16 data_020d0994[6] = {0, 0x12c, 0x1388, 0x2710, 0x4e20, 0};
Counter2 data_021ee160;
