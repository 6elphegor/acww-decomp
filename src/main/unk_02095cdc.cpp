#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02095774_Ent {
    u8 pad_00[0x5c];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_0209579c_Rec {
    u8 pad_00[0xe];
    u8 unk_0e;
};

struct Unk_02095dcc_Grid {
    u8 pad_00[0xc];
    s32 unk_0c;
    s32 unk_10;
};

struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

struct Unk_0209579c_Pos {
    s32 x, y, z;
    Unk_0209579c_Pos() {}
};

struct Unk_0209579c_L {
    u8 a, b;
    s16 c;
    s16 r1[3];
    s16 pad;
    s32 v1, x1, y1;
    s16 r2[3];
    s16 r3[3];
    s32 v2, x2, y2;
};

struct Unk_02096354_Arg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_020966f8_Rec {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
};

struct Unk_02096484_Base {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
    Unk_02096484_Base() { a = 0; b = 0; }
};
struct Unk_02096484_Rec : Unk_02096484_Base {
    Unk_02096484_Rec() { a = 0; b = 0; }
};
class Unk_02065554 {
public:
    u8 func_02065578();
    u8 pad[0xf4];
};

class Letter {
public:
    Letter();
    virtual ~Letter();

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

// Array of ten elements, indexed table getter at 0x02097020.
class Unk_02097020 {
public:
    Unk_02097020();
    ~Unk_02097020();
    Letter *func_02097020(s32 i);
    void func_02096fd4();
    BOOL func_02096fa0(u32 mask);
    void func_02096fb8(u32 mask);
    u8 *func_02096fc8();

    /* 0x000 */ Letter unk_00[10];
    /* 0x988 */ u8 unk_988;
    /* 0x989 */ u8 unk_989;
    /* 0x98a */ u8 unk_98a;
    /* 0x98b */ u8 unk_98b;
    /* 0x98c */ u16 unk_98c;
    /* 0x98e */ u16 pad_98e;
};

class Unk_020970b8 {
public:
    Unk_020970b8();
    ~Unk_020970b8();
    Letter *func_020970b8(s32 i);
    void func_02097078(u32 v);
    u32 func_02097084();
    void func_02097090();

    /* 0x000 */ Letter unk_00[10];
    /* 0x988 */ u16 unk_988;
    /* 0x98a */ u16 pad_98a;
};

class Unk_02096d10 {
public:
    void func_02096d10(u32 v);
    u8 func_02096d1c();
    BOOL func_02096d28(s32 i);
    void func_02096d4c(s32 i);
    void func_02096d6c(s32 i);
    BOOL func_02096d8c(u32 mask);
    void func_02096d9c(u32 mask);
    void func_02096da4(s32 *v);
    BOOL func_02096dbc(s32 *v);
    void func_02096e00();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04[15];
    /* 0x13 */ u8 pad_13;
};

class Unk_02096e28 : public Letter {
public:
    void func_02096e28();
    u8 *func_02096e50();

    /* 0xf4 */ u8 unk_f4;
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
};

class Unk_02096e78 : public Letter {
public:
    s32 func_02096e78();
    void func_02096ed4();
    BOOL func_02096ee8(s32 i);
    void func_02096f10(s32 i);
    void func_02096f30();

    /* 0xf4 */ u8 unk_f4[5];
};

class LetterStorage {
public:
    void func_02096f68();
    Letter *func_02096f88(s32 i);

    /* 0x000 */ Letter unk_00[75];
};

struct Unk_02095f38_G {
    u8 pad_00[0x58];
    u32 unk_58;
};

inline BOOL Unk_0209579c_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

inline u16 Unk_02095f38_F(u32 v) {
    if (v < 5) return (u16)(v + 0x1518);
    return 0x1518;
}
extern Unk_020cbb18 *data_020cbb18;
extern u32 data_020d03d8[];
extern u32 data_020d03e8[];
extern u32 data_020d03f8[];
extern const u8 data_020d043c[];
extern u8 gPlayerSessionTable[];
extern u8 data_021e7f8c[];
extern u8 data_021eceac[];
extern u8 data_021edb68[];
extern Unk_02095f38_G data_021ed150;
extern u8 data_020e1d34[];
extern u8 data_020e1d28[];
extern u8 data_021ecfa8[];
extern const u32 data_020d0444[];
extern const u8 *data_020e1d40[];
extern const u32 data_020d0454[];
extern const u8 *data_020e1d50[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern u8 data_021d7352[];
extern u8 data_020e1dfc[];
extern u8 data_020e1e00[];
extern u8 data_020e1e04[];
extern u8 data_020e1e08[];
extern u8 data_020e1e0c[];
extern u8 data_020e1e10[];
extern u8 data_020e1df8[];
extern Unk_02097020 data_021eb98c;
extern Unk_020970b8 data_021e935c[];

extern "C" {
Unk_0209579c_Rec *func_02002d3c(s32 a, s32 b);
void func_02003100(void *);
void func_02003130(void *);
void func_0200315c(void *, void *);
void func_0203c42c(void *a, u16 *b, s32 c, s32 d);
void MailText_SetSlot(s32, void *);
void func_02045de4();
s32 func_020464bc();
Unk_02095dcc_Grid *func_0204da0c();
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void ItemPick_FromRange(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063388(ItemPickSpec *o);
void func_0206338c(s32 a, s32 b);
void func_02063870(void *);
void func_02063888(void *);
void func_020638d0(void *, void *);
s32 func_02063b8c(u32 n);
s32 _ZN12Unk_0206555413func_02065578Ev(void *p);
void _ZN12Unk_0206555413func_02065588Etj(void *, u32, s32);
void *func_0206561c(void);
void *func_02065628(void);
void func_02065640(void *a, void *b, void *c);
s32 func_020656dc(void *, void *, u8 *, void *, void *, void *);
void func_02065ac0(void *);
void func_02065b28(void *p);
void func_02065ba4(void *, void *);
void func_02065c94(void *p);
void _ZN6LetterD1Ev(void *);
void _ZN6LetterC1Ev(void *);
void func_02065e70(void *p, void *q);
s32 func_0206e844(void);
void func_0206f604(s32 a, s32 b);
u32 func_02072970(Unk_020cbb18 *p, u32 v);
BOOL func_020729bc(Unk_020cbb18 *p, s32 v);
u32 func_020729cc(Unk_020cbb18 *p, s32 v);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *p);
u32 func_02072e88(Unk_020cbb18 *p, s32 v);
void func_02076280(s32 a, void *b, s32 c, s32 d);
void func_02076a2c(u32 a, s32 *x, s32 *y);
void func_02076ae8(u32 a, u8 *b, s32 c);
void func_020795c4(void *, void *);
s32 func_0207bfb4(void *, void *);
s32 func_0207c014(s32);
void *func_0208f05c(void *);
s32 func_0208f070(void *);
void *func_0208f088(void *);
void *func_0208f158(void *p);
s32 _ZN12Unk_0208f23813func_0208f15cEv(void *p);
void _ZN12Unk_0208f23813func_0208f168Ev(void *p);
s32 _ZN12Unk_0208f23813func_0208f198Ev(void *p);
s32 _ZN12Unk_0208f23813func_0208f1c0Ev(void *p);
void _ZN8PlayerId13func_02094264EPS_(void *, void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN8PlayerIdC1EPv(void *);
void func_02094308(s32 idx, void *pos, void *rot, u32 flags);
s32 func_02094348();
void func_02094360(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
Unk_02095774_Ent *func_02095204(s32 idx);
u32 PlayerSession_FindFreeGfxSlot();
void PlayerSession_SetGfxSlot(s32 idx, u32 v);
s16 *func_02095294(s32 idx);
s32 *func_020952a0(s32 idx);
u8 *func_020952b0(s32 idx);
s32 *func_020952bc(s32 idx);
s32 func_02095478(void *p, s32 i);
BOOL PlayerActor_GetSlotAction(s32 *out, s32 a, s32 idx);
BOOL PlayerActor_GetSlotAngle(s16 *out, s32 a, s32 idx);
BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);
u32 func_02095720(s32 idx);
u32 func_02095758(s32 idx);
Unk_02095774_Ent *PlayerActor_Get(s32 idx);
void func_02095cdc();
void func_02095d64(s32 a);
s32 func_02095dcc();
s32 func_02095e34();
s32 func_02095e48(u8 *p);
s32 func_02095e8c();
u8 func_02095f10(s32 x);
u16 func_02095f38(s32 code);
u8 *func_020960f8(s32 a);
s32 func_02096120(s32 a, s32 b);
s32 func_020961dc(s32 a, s32 b, s32 c, s32 d);
void func_02096258(s32 a, s32 n);
s32 func_02096288(s32 a, s32 n, s32 k);
s32 func_020962d0(s32 a, s32 n);
void func_02096308(s32 x);
u8 func_02096338(u8 v);
u32 func_02096344(u8 v);
s32 func_02096354(Unk_02096354_Arg *p);
s32 func_020963d0(Unk_02096354_Arg *p);
s32 func_02096484(Unk_02096354_Arg *p);
void func_02096570(Unk_02096354_Arg *p, s32 n);
void func_02096618(void);
u8 func_02096670(u32 x);
u8 func_020966b0(u32 i);
u8 func_020966d0(u32 a, u32 b);
void func_020966f8(void);
s32 func_02096880(void);
s32 func_020968b8(void *p);
void func_020968e0(void);
s32 func_020968e4(void *base, s32 n);
s32 func_02096914(void *base, s32 n);
s32 func_02096960(Letter *);
s32 func_020969b8(Letter *);
BOOL func_02096a0c(Letter *e);
BOOL func_02096a50(Letter *e, BOOL flag);
void func_02096a9c(Letter *e);
BOOL func_02096aac(Letter *e);
BOOL func_02096acc(Letter *e, s32 idx, u32 flag);
BOOL func_02096b24(s32 idx);
s32 func_02096b74(void);
void func_02096c58(u32 mask);
void func_02096c68(u32 mask);
BOOL func_02096c78(u32 mask);
void func_02096c8c();
void _ZN12Unk_02096d1013func_02096d10Ej(void *, u32);
u32 _ZN12Unk_02096d1013func_02096d1cEv(void *);
s32 _ZN12Unk_02096d1013func_02096d28Ei(void *, s32);
void _ZN12Unk_02096d1013func_02096d4cEi(void *, s32);
void _ZN12Unk_02096d1013func_02096d6cEi(void *, s32);
BOOL func_02096d8c(u32 mask);
void func_02096d9c(u32 mask);
void _ZN12Unk_02096d1013func_02096da4EPi(void *, void *);
s32 _ZN12Unk_02096d1013func_02096dbcEPi(void *, void *);
void func_02096e00();
void _ZN12Unk_02096e2813func_02096e28Ev(void *);
u8 *_ZN12Unk_02096e2813func_02096e50Ev(void *);
Unk_02065554 *func_02096e54(void *);
s32 _ZN12Unk_02096e7813func_02096e78Ev(void *p);
void func_02096ed4();
BOOL func_02096ee8(s32 i);
void _ZN12Unk_02096e7813func_02096f10Ei(void *p, s32 v);
void func_02096f30();
void *func_02096f44(void *p);
void func_02096f68();
Letter *func_02096f88(s32 i);
s32 _ZN12Unk_0209702013func_02096fa0Ej(void *, u32);
void _ZN12Unk_0209702013func_02096fb8Ej(void *, u32);
u8 *_ZN12Unk_0209702013func_02096fc8Ev(void *);
void func_02096fd4();
void *_ZN12Unk_0209702013func_02097020Ei(void *, s32);
void func_02097078(u32 v);
u32 func_02097084();
void func_02097090();
Letter *func_020970b8(s32 i);
u32 func_020973e8(s32);
s32 func_02097410(s32, s32);
s32 func_02097414(s32);
void *PlayerData_GetCurrent();
s32 func_02097740(void *, void *);
u8 *PlayerData_GetResident(void *, s32);
s32 func_020978c8(void *, s32);
s32 func_020978fc(s32);
void *func_02097a30(void *);
void *func_02097a3c(void *);
s32 func_02097ff4(s32, s32);
s32 func_0209801c(s32, s32);
s32 func_02098044(s32, s32);
u8 *_ZN12Unk_02097ff413func_02098308Ev(void *);
s32 func_02098320(s32);
void *_ZN10PlayerData10getCatalogEv(void *a);
void *_ZN10PlayerData8getIndexEv(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void *func_020991e4();
u32 func_0209ce68(u32, u32, u32, u32);
void func_0209d2c0(void *, s32);
s32 func_0209d3d0(void *, void *, u32);
void func_0209d498(void *);
s32 func_020a03f0();
s32 func_020a0414();
s32 func_020a5ef8();
u8 func_020a6358(s32 idx);
void String_FormatNumber(void *, s32, s32, s32, s32, s32);
void func_020b413c(void *);
void func_020b4154(void *);
s32 func_020b50e8();
s32 func_020b50f4(void);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *, void *, u32);
s32 func_02133150(s32, s32);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern const u8 data_020d042c[0x4];
extern const u8 data_020d0430[0x4];
extern const u8 data_020d0434[0x4];
extern const u8 data_020d0438[0x4];
extern const u8 data_020d043c[0x8];
extern const u32 data_020d0444[4];
extern const u32 data_020d0454[6];
extern const u8 data_020d046c[0x1c];
extern const u8 data_020d0488[0x20];
extern const u8 data_020d04a8[0x24];
extern const u8 data_020d04cc[0x24];
extern const u8 data_020d04f0[0x24];
extern const u8 data_020d0514[0x24];

extern "C" s32 func_02096b74(void) {
    Letter *base = data_021eb98c.func_02097020(0);
    s32 n = func_02096914(base, 10);
    s32 i;
    volatile s32 flag = 0;
    volatile s32 zero = 0;
    for (i = 0; i < n; i++) {
        Letter *p = &base[i];
        if (((Unk_02065554 *)p)->func_02065578() != 0) {
            s32 idx = func_020969b8(p);
            if (idx == -2) {
                func_02065c94(p);
            } else if (idx != ~zero) {
                if (func_02096acc(p, idx, flag) != 0) {
                    func_02065c94(p);
                }
            } else {
                if (func_02096960(p) < 0) {
                    func_02065c94(p);
                } else {
                    func_02096a9c(p);
                    func_02065c94(p);
                }
            }
        }
    }
    return func_02096914(base, 10);
}

extern "C" BOOL func_02096b24(s32 idx) {
    if (idx == -1) {
        idx = (s32)_ZN10PlayerData8getIndexEv(PlayerData_GetCurrent());
    }
    Letter *p = data_021e935c[idx].func_020970b8(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_02096acc(Letter *e, s32 idx, u32 flag) {
    Letter *p = data_021e935c[idx].func_020970b8(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            func_02065e70(p, e);
            if (flag) {
                func_02065b28(p);
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02096aac(Letter *e) {
    s32 i = func_020969b8(e);
    if (i < 0) {
        return FALSE;
    }
    return func_02096acc(e, i, 0);
}

extern "C" void func_02096a9c(Letter *e) {
    func_020795c4(data_021dfd8c, e);
}

extern "C" BOOL func_02096a50(Letter *e, BOOL flag) {
    s32 i;
    Letter *p = data_021eb98c.func_02097020(0);
    for (i = 0; i < 10; p++, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            func_02065e70(p, e);
            if (flag) {
                func_02065b28(p);
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02096a0c(Letter *e) {
    s32 r = func_020969b8(e);
    if (r == -2) {
        return FALSE;
    }
    if (r == -1) {
        r = func_02096960(e);
        if (r == -2) {
            return FALSE;
        }
        if (r == -1) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" s32 func_020969b8(Letter *) {
    void *r4 = func_02065628();
    u8 tmp[0x18];
    s32 res;
    if (r4 == 0) return -1;
    _ZN8PlayerIdC1EPv(tmp);
    _ZN8PlayerId13func_02094264EPS_(tmp, r4);
    res = func_02097740(data_021d735c, tmp);
    if (func_020978fc(res)) {
        _ZN8PlayerIdC1Ev(tmp);
        return res;
    }
    _ZN8PlayerIdC1Ev(tmp);
    return -2;
}

extern "C" s32 func_02096960(Letter *) {
    void *r5 = data_021dfd8c;
    void *r4 = func_0206561c();
    u8 tmp[12];
    s32 res;
    if (r4 == 0) return -1;
    func_02003130(tmp);
    func_0200315c(tmp, r4);
    res = func_0207bfb4(r5, tmp);
    if (func_0207c014(res)) {
        func_02003100(tmp);
        return res;
    }
    func_02003100(tmp);
    return -2;
}

extern "C" s32 func_02096914(void *base, s32 n) {
    s32 i = 0, j = i;
    for (; i < n; i++) {
        u8 *e = (u8 *)base + i * 0xf4;
        if (((Unk_02065554 *)e)->func_02065578()) {
            if (i != j) {
                func_02065e70((u8 *)base + j * 0xf4, e);
                func_02065c94(e);
            }
            j++;
        }
    }
    return j;
}

extern "C" s32 func_020968e4(void *base, s32 n) {
    s32 i, cnt;
    cnt = 0;
    i = cnt;
    for (; i < n; i++) {
        if (((Unk_02065554 *)((u8 *)base + i * 0xf4))->func_02065578()) cnt++;
    }
    return cnt;
}

extern "C" void func_020968e0(void) {}

extern "C" s32 func_020968b8(void *p) {
    if (p == 0) p = PlayerData_GetCurrent();
    if (func_02096e54(func_02097a3c(p))->func_02065578() != 0) return 1;
    return 0;
}

extern "C" s32 func_02096880(void) {
    s32 i;
    u8 *p = (u8 *)_ZN12Unk_0209702013func_02097020Ei(&data_021eb98c, 0);
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) return 1;
    }
    return 0;
}

extern "C" void func_020966f8(void) {
    u8 *r5;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) return;
    u8 *const g = (u8 *)&data_021eb98c;
    r5 = _ZN12Unk_0209702013func_02096fc8Ev(g);
    Unk_020966f8_Rec LampLights;
    Unk_020966f8_Rec Y, Z;
    s32 z0, z1, z2;
    s32 i;
    u8 *r6;
    void *s0;
    Unk_02065554 *s4;
    LampLights.a = 0; LampLights.b = 0;
    func_0209d498(&LampLights);
    Y.a = 0; Y.b = 0; Z.a = 0; Z.b = 0;
    if (_ZN12Unk_0209702013func_02096fa0Ej(g, 1)) {
        Y.a = 0; Y.b = 0;
        Y.d5 = r5[2];
        Y.d4 = r5[1];
        Y.d3 = r5[0];
        MI_CpuCopy8(&Y, &Z, 8);
        if (r5[3] < 9) {
            r5[3] = 9;
            Z.d2 = 0x11;
        } else if (r5[3] < 0x11) {
            r5[3] = 0x11;
            Z.d2 = 9;
            func_0209d2c0(&Z, 1);
        } else {
            r5[3] = 9;
            func_0209d2c0(&Y, 1);
            Z.d2 = 0x11;
            func_0209d2c0(&Z, 1);
        }
        Y.d2 = r5[3];
        if (func_0209d3d0(&LampLights, &Y, 0x3c) != -1) {
            func_02096b74();
            if (func_0209d3d0(&LampLights, &Z, 0x3c) != -1) func_02096b74();
        }
    } else {
        _ZN12Unk_0209702013func_02096fb8Ej(g, 1);
    }
    z2 = 0; z1 = 0; z0 = 0;
    for (i = 0; i < 4; i++) {
        if (func_020978c8(data_021d735c, i)) {
            s0 = PlayerData_GetResident(data_021d735c, i);
            r6 = _ZN12Unk_02096e2813func_02096e50Ev(func_02097a3c(s0));
            s4 = func_02096e54(func_02097a3c(s0));
            if (((Unk_02065554 *)s4)->func_02065578()) {
                Y.a = z0; Y.b = z0;
                Y.d5 = r6[2];
                Y.d4 = r6[1];
                Y.d3 = r6[0];
                Y.d2 = 9;
                if (func_0209d3d0(&LampLights, &Y, 0x3c) != ~z2) {
                    if (func_02096acc((Letter *)s4, i, z1)) _ZN12Unk_02096e2813func_02096e28Ev(func_02097a3c(s0));
                }
            }
        }
    }
    r5[2] = LampLights.d5;
    r5[1] = LampLights.d4;
    r5[0] = LampLights.d3;
    r5[3] = LampLights.d2;
}

extern "C" u8 func_020966d0(u32 a, u32 b) {
    if (func_02063b8c(10) < 3) return func_02096670(b);
    return func_020966b0(a);
}

extern "C" u8 func_020966b0(u32 i) {
    return data_020e1d50[i][func_02063b8c(data_020d0454[i])];
}

extern "C" u8 func_02096670(u32 x) {
    s32 i;
    if (x <= 2 || x == 12) i = 3;
    else if (x <= 5) i = 0;
    else if (x <= 8) i = 1;
    else i = 2;
    return data_020e1d40[i][func_02063b8c(data_020d0444[i])];
}

extern "C" void func_02096618(void) {
    void *r6 = data_021ecfa8;
    if (func_0208f070(r6) != 0) {
        if (func_02096b24(-1) == 0) {
            void *r5 = func_0208f05c(r6);
            void *r4 = _ZN10PlayerData8getIndexEv(PlayerData_GetCurrent());
            func_02065ba4(r5, r4);
            func_02065ac0(r5);
            if (func_02096acc((Letter *)r5, (s32)r4, 0) != 0) func_0208f088(r6);
        }
    }
}

extern "C" void func_02096570(Unk_02096354_Arg *p, s32 n) {
    void *r6 = PlayerData_GetCurrent();
    void *r4;
    if (r6 == 0) return;
    if (n < 1) return;
    if (func_02096880() == 0) {
        if (func_02096b24(-1) == 1) return;
    }
    r4 = func_02097a30(r6);
    func_02096308((u8)p->unk_04);
    if (_ZN12Unk_02096d1013func_02096dbcEPi(r4, p) != 0) return;
    if (func_02096484(p) != 0) {
        _ZN12Unk_02096d1013func_02096d10Ej(r4, (u8)p->unk_00);
        _ZN12Unk_02096d1013func_02096da4EPi(r4, p);
        return;
    }
    if (func_020963d0(p) != 0) {
        _ZN12Unk_02096d1013func_02096da4EPi(r4, p);
        return;
    }
    if (func_02063b8c(10) < 2) {
        if (func_02096354(p) != 0) {
            _ZN12Unk_02096d1013func_02096da4EPi(r4, p);
            return;
        }
    }
    _ZN12Unk_02096d1013func_02096da4EPi(r4, p);
}

extern "C" s32 func_02096484(Unk_02096354_Arg *p) {
    void *r5 = PlayerData_GetCurrent();
    void *r6 = func_02097a30(r5);
    u8 *q = _ZN12Unk_02097ff413func_02098308Ev(r5);
    if (*(u16 *)q == 0) return 0;
    if (p->unk_00 == _ZN12Unk_02096d1013func_02096d1cEv(r6)) return 0;
    s32 r;
    Unk_02096484_Rec LampLights;
    LampLights.d5 = p->unk_00;
    LampLights.d4 = q[1];
    LampLights.d3 = q[0];
    Unk_02096484_Rec LightLevel;
    LightLevel.d5 = p->unk_00;
    LightLevel.d4 = p->unk_04;
    LightLevel.d3 = p->unk_08;
    Unk_02096484_Base C;
    MI_CpuCopy8(&LampLights, &C, 8);
    func_0209d2c0(&C, 7);
    r = 0;
    if (C.d5 != LampLights.d5) {
        C.d5 = LampLights.d5;
        if (func_0209d3d0(&LightLevel, &C, 0x38) == 1) {
            if (func_0209d3d0(&LightLevel, &LampLights, 0x38) == -1) goto end;
        }
        r = 1;
    } else {
        if (func_0209d3d0(&LightLevel, &C, 0x38) == 1) goto end;
        if (func_0209d3d0(&LightLevel, &LampLights, 0x38) == -1) goto end;
        r = 1;
    }
end:
    if (r) r = func_020961dc(0x20, 2, (u8)p->unk_04, 1);
    return r;
}

extern "C" s32 func_020963d0(Unk_02096354_Arg *p) {
    s32 c = p->unk_08;
    s32 b = p->unk_04;
    if (b == c) return func_020961dc(c * 2 - 2, 2, (u8)b, 1);
    if (b == 4 && c == 1) return func_020961dc(0x1c, 2, (u8)b, 1);
    if (b == 12 && c == 0x18) return func_020961dc(0x1e, 2, (u8)b, 1);
    if (b == 6) {
        if (p->unk_08 == func_0209ce68((u8)p->unk_00, (u8)b, 0, 3))
            return func_020961dc(0x1a, 2, (u8)p->unk_04, 1);
    }
    if (p->unk_04 == 5) {
        if (p->unk_08 == func_0209ce68((u8)p->unk_00, (u8)p->unk_04, 0, 2))
            return func_020961dc(0x18, 2, (u8)p->unk_04, 1);
    }
    return 0;
}

extern "C" s32 func_02096354(Unk_02096354_Arg *p) {
    s32 r6 = func_02096344((u8)p->unk_04);
    s32 r7 = func_02096338((u8)p->unk_04);
    s32 r4 = func_020962d0(r6, r7);
    if (r4 == r7) {
        return func_020961dc(r6, r7, (u8)p->unk_04, 0);
    }
    if (func_02063b8c(r4 + func_020962d0(0x22, 0x38)) < r4) {
        return func_020961dc(r6, r7, (u8)p->unk_04, 0);
    }
    return func_020961dc(0x22, 0x38, (u8)p->unk_04, 1);
}

extern "C" u32 func_02096344(u8 v) { return data_020e1d28[v - 1] + 0x5a; }

extern "C" u8 func_02096338(u8 v) { return data_020e1d34[v - 1]; }

extern "C" void func_02096308(s32 x) {
    s32 i;
    for (i = 1; i <= 12; i++) {
        if (i != x) {
            s32 t = func_02096344((u8)i);
            func_02096258(t, func_02096338((u8)i));
        }
    }
}

extern "C" s32 func_020962d0(s32 a, s32 n) {
    void *g = func_02097a30(PlayerData_GetCurrent());
    s32 cnt = 0, i = cnt;
    for (; i < n; a++, i++) {
        if (_ZN12Unk_02096d1013func_02096d28Ei(g, a) == 0) cnt++;
    }
    return cnt;
}

extern "C" s32 func_02096288(s32 a, s32 n, s32 k) {
    void *g = func_02097a30(PlayerData_GetCurrent());
    s32 cnt = 0, idx = a, i = cnt;
    for (; i < n; idx++, i++) {
        if (_ZN12Unk_02096d1013func_02096d28Ei(g, idx) == 0) {
            if (cnt == k) return idx;
            cnt++;
        }
    }
    return a;
}

extern "C" void func_02096258(s32 a, s32 n) {
    void *g = func_02097a30(PlayerData_GetCurrent());
    s32 i;
    for (i = 0; i < n; a++, i++) _ZN12Unk_02096d1013func_02096d4cEi(g, a);
}

extern "C" s32 func_020961dc(s32 a, s32 b, s32 c, s32 d) {
    void *g;
    s32 v8, vc;
    s32 r7;
    g = func_02097a30(PlayerData_GetCurrent());
    r7 = func_020962d0(a, b);
    if (r7 == 0) {
        if (d == 0) return 0;
        r7 = b;
        func_02096258(a, b);
        d = 0;
    }
    v8 = func_02096288(a, b, func_02063b8c(r7));
    vc = func_02096120(v8, c);
    if (vc != 0) {
        if (r7 == 1 && d == 1) func_02096258(a, b);
        else _ZN12Unk_02096d1013func_02096d6cEi(g, v8);
    }
    return vc;
}

extern "C" s32 func_02096120(s32 a, s32 b) {
    u8 rec[3];
    u32 buf[0xf4 / 4];
    s32 r4;
    _ZN6LetterC1Ev(buf);
    func_02065c94(buf);
    r4 = (s32)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    rec[0] = data_021edb68[0];
    rec[0] = func_02095f10(a);
    rec[1] = 1;
    if (a == 0x1a) rec[1] = 0x12;
    rec[2] = func_020966d0(3, b);
    func_020656dc(buf, rec, func_020960f8(a), rec + 1, rec + 2, (void *)r4);
    u32 t = func_02095f38(a);
    if (t != 0xfff1) _ZN12Unk_0206555413func_02065588Etj(buf, t, 1);
    if (func_02096aac((Letter *)buf)) {
        _ZN6LetterD1Ev(buf);
        return 1;
    }
    if (func_02096a50((Letter *)buf, 0)) {
        _ZN6LetterD1Ev(buf);
        return 1;
    }
    _ZN6LetterD1Ev(buf);
    return 0;
}

extern "C" u8 *func_020960f8(s32 a) {
    if (a >= 0 && a < 0x22) return (u8 *)"mother_day";
    if (a >= 0x22 && a < 0x5a) return (u8 *)"mother_always";
    return (u8 *)"mother_season";
}

extern "C" u16 func_02095f38(s32 code) {
    u16 buf[4];
    ItemPickSpec o1;
    ItemPickSpec o2;
    buf[0] = 0xfff1;
    switch (code) {
    case 0x23:
    case 0x32:
    case 0x5f:
    case 0x73:
        o1.set(2, 0);
        ItemPick_One(&buf[1], &o1, 0, 0, 1, 1, 0);
        buf[0] = buf[1];
        func_02063388(&o1);
        return buf[0];
    case 0x4a:
        ItemPick_FromRange(&buf[2], 0x1380, 0x20, 0, 0, 0, 1, 10, 0, 1);
        buf[0] = buf[2];
        return buf[0];
    case 0x1e:
    case 0x1f:
        o2.set(0, 0);
        ItemPick_One(&buf[3], &o2, 0, 0, 1, 1, 0);
        buf[0] = buf[3];
        func_02063388(&o2);
        return buf[0];
    case 0x25:
    case 0x37:
    case 0x38:
    case 0x51: {
        u16 r4 = Unk_02095f38_F(data_021ed150.unk_58);
        s32 n = func_02063b8c(4);
        u32 j;
        for (j = 0; j < 5; j++) {
            u16 k = Unk_02095f38_F(j);
            if (k == r4) continue;
            if (n > 0) {
                n--;
            } else {
                return k;
            }
        }
        return 0x1518;
    }
    case 0x2e:
        return 0x149b;
    case 0:
    case 1:
        return 0x14a4;
    case 0x6e:
    case 0x6f:
        return 0x1542;
    case 0x72:
        return 0x1518;
    case 0x48:
        return 0x3648;
    case 0x47:
        return 0x3420;
    }
    return 0xfff1;
}

extern "C" u8 func_02095f10(s32 x) {
    if (x >= 0 && x < 0x22) return x;
    if (x >= 0x22 && x < 0x5a) return x - 0x22;
    return x - 0x5a;
}

extern "C" s32 func_02095e8c() {
    void *r5 = func_020991e4();
    if (r5 == NULL) return FALSE;
    void *o = func_02096f44(data_021eceac);
    if (!_ZN12Unk_0206555413func_02065578Ev(o)) {
        func_02065c94(o);
        return TRUE;
    }
    void *t = PlayerData_GetCurrent();
    u16 buf = 0x1033;
    func_0203c42c(_ZN10PlayerData10getCatalogEv(t), &buf, 0, 1);
    func_02065e70(r5, o);
    func_02065c94(o);
    Unk_020cbb18 *g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(g) && g->unk_64 != 0) func_0206f604(7, 0);
    return TRUE;
}

extern "C" s32 func_02095e48(u8 *p) {
    void *o = func_02096f44(data_021eceac);
    if (_ZN12Unk_0206555413func_02065578Ev(o)) return FALSE;
    if (func_02095e34() == 0) return FALSE;
    func_02065640(o, p, (void *)"ev_bottle");
    return TRUE;
}

extern "C" s32 func_02095e34() {
    func_02045de4();
    func_020464bc();
}

extern "C" s32 func_02095dcc() {
    Unk_02095dcc_Grid *g = func_0204da0c();
    s32 y, x, hx, hy;
    u16 *c;
    for (y = 0; y < g->unk_10; y++) {
        x = 0;
        goto test0;
    loop0:
        hx = x >> 4;
        hy = y >> 4;
        c = (u16 *)func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c) {
            if (Unk_02095dcc_R(c, 0x1520, 0x1520)) return TRUE;
        }
        x++;
        hy = y;
        y = hy;
    test0:
        if (x < g->unk_0c) goto loop0;
    }
    return FALSE;
}

extern "C" void func_02095d64(s32 a) {
    if (a > 0) {
        if (func_02095dcc() == 0) {
            void *const o = data_021eceac;
            if (_ZN12Unk_0206555413func_02065578Ev(func_02096f44(o))) {
                func_02095e34();
            } else if (func_02063b8c(10) == 7) {
                u8 v = data_021edb68[0];
                s32 r = _ZN12Unk_02096e7813func_02096e78Ev(o);
                v = r;
                if (func_02095e48(&v)) _ZN12Unk_02096e7813func_02096f10Ei(o, r);
            }
        }
    }
}

extern "C" void func_02095cdc() {
    void *const o = data_021e7f8c;
    if (_ZN12Unk_0208f23813func_0208f1c0Ev(o)) {
        void *r4 = func_0208f158(o);
        if (_ZN12Unk_0206555413func_02065578Ev(r4)) {
            s32 t = _ZN12Unk_0208f23813func_0208f198Ev(o);
            switch (t) {
            case 0: {
                s32 u = _ZN12Unk_0208f23813func_0208f15cEv(o);
                if (u == 0) return;
                if (u < 5) {
                    if (func_02063b8c(data_020d043c[u]) != 1) return;
                }
                break;
            }
            case 1:
                break;
            }
            _ZN12Unk_0208f23813func_0208f168Ev(o);
            func_02065b28(r4);
            func_02065e70(func_02096f44(data_021eceac), r4);
            func_02065c94(r4);
            if (func_02095dcc() == 0) func_02095e34();
        }
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern u8 data_020e1d34[0xc];
extern const u8 data_020d0430[0x4];
extern const s32 data_020d0428;
extern const u8 data_020d0434[0x4];
extern const u8 data_020d042c[0x4];
extern const u8 data_020d0438[0x4];
extern const u8 data_020d043c[0x8];
extern const u32 data_020d0444[4];
extern const u32 data_020d0454[6];
extern const u8 data_020d046c[0x1c];
extern const u8 data_020d0488[0x20];
extern const u8 data_020d04a8[0x24];
extern const u8 data_020d04cc[0x24];
extern const u8 data_020d04f0[0x24];
extern const u8 data_020d0514[0x24];
extern u8 data_020e1d28[0xc];
extern const u8 *data_020e1d40[4];
extern const u8 *data_020e1d50[6];

u8 data_020e1d34[0xc] = {0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x02, 0x02, 0x02, 0x02};

// 0x020d0428: first .rodata object of this file; read by the previous unit (0x02095130, src/main/unk_02094810.cpp)
const s32 data_020d0428 = 0x2000;

const u8 data_020d0434[0x4] = {0x00, 0x05, 0x1b, 0x00};

const u8 data_020d042c[0x4] = {0x07, 0x2d, 0x00, 0x00};

const u8 data_020d0438[0x4] = {0x00, 0x04, 0x1b, 0x2b};

const u8 data_020d043c[0x8] = {0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00};

const u32 data_020d0444[4] = {0x3, 0x4, 0x2, 0x2};

const u8 data_020d0430[0x4] = {0x06, 0x0e, 0x00, 0x00};

const u32 data_020d0454[6] = {0x22, 0x1b, 0x1d, 0x23, 0x22, 0x24};

const u8 data_020d046c[0x1c] = {0x08, 0x09, 0x0f, 0x13, 0x14, 0x15, 0x16, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x38, 0x39, 0x3b, 0x3c, 0x3f, 0x00};

const u8 data_020d0488[0x20] = {0x08, 0x09, 0x0f, 0x12, 0x13, 0x14, 0x15, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x33, 0x34, 0x36, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x00, 0x00};

const u8 data_020d04a8[0x24] = {0x08, 0x09, 0x0a, 0x0b, 0x0d, 0x0f, 0x14, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3b, 0x3c, 0x3d, 0x3f, 0x00, 0x00};

const u8 data_020d04cc[0x24] = {0x08, 0x09, 0x0b, 0x0d, 0x0f, 0x14, 0x15, 0x16, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x00};

const u8 data_020d04f0[0x24] = {0x08, 0x09, 0x0a, 0x0b, 0x0d, 0x03, 0x0f, 0x14, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3a, 0x3c, 0x3d, 0x3e, 0x3f, 0x00};

const u8 data_020d0514[0x24] = {0x08, 0x09, 0x0a, 0x0d, 0x03, 0x0f, 0x12, 0x13, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3a, 0x3c, 0x3d, 0x3e, 0x3f};

u8 data_020e1d28[0xc] = {0x1a, 0x1c, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0a, 0x12, 0x14, 0x16, 0x18};

const u8 *data_020e1d40[4] = {data_020d0434, data_020d0438, data_020d042c, data_020d0430};

const u8 *data_020e1d50[6] = {data_020d04cc, data_020d046c, data_020d0488, data_020d04f0, data_020d04a8, data_020d0514};
