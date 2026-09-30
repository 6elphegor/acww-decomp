#include "types.h"

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x224c sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    u8 unk_4b[0x64 - 0x4b];
};

struct Unk_ov107_02295eb8 {
    u8 pad_000[0x8c];
    u8 unk_8c;
    u8 pad_8d[7];
    s32 unk_94;
    s32 unk_98;
    s32 unk_9c;
    s32 unk_a0;
    u8 pad_a4[0xb5 - 0xa4];
    u8 unk_b5;
    u8 unk_b6;
    u8 unk_b7;
    u8 unk_b8;
    u8 pad_b9[2];
    u8 unk_bb;
    u8 unk_bc;
    u8 unk_bd;
    u8 unk_be;
    u8 unk_bf;
    u8 pad_c0[0x10c - 0xc0];
    u8 unk_10c[0xb6c - 0x10c];
    u8 unk_b6c[0xb94 - 0xb6c];
    u8 unk_b94[0x2174 - 0xb94];
    u8 unk_2174[0x2234 - 0x2174];
    u8 unk_2234[0x224c - 0x2234];
    Unk_ov002_02204630 unk_224c;
    u8 unk_22b0[0x25a9 - 0x22b0];
    u8 unk_25a9[7];
    u8 unk_25b0[0x26b8 - 0x25b0];
    u8 unk_26b8[0x40];
};

typedef Unk_ov107_02295eb8 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];

static inline BOOL Unk_ov107_02296270_Both()
{
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_0206ecf8(s32 a);
BOOL func_020951a0();
void func_0200402c(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
s32 func_0208d644(void *p);

void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006a4(void *p, s32 a);
BOOL func_ov002_0220071c(void *p);
void func_ov002_02200980(void *self);
BOOL func_ov002_02200680(void *p);
BOOL func_ov002_02200a14(void *self, s32 a);
BOOL func_ov002_022008fc(void *self, s32 a);
void func_ov002_02200840(void *self, s32 a, s32 b, s32 c);
s32 func_ov002_02200920(void *self);
u32 func_ov002_022009d4(void *self);
u32 func_ov002_022009c8(void *self);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 x, s32 y);
void func_ov002_02202b68(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
void func_ov002_02202064(void *p, s32 x);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203900(void *p);

void func_ov094_0229238c();
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02294644(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
s32 func_ov003_02227434();

void func_ov107_02294d54(S *s, u32 v);
void func_ov107_02294d64(S *s, u32 v);
void func_ov107_02294e14();
BOOL func_ov107_02295070(S *s);
void func_ov107_02295450(S *s, u32 a, u32 b);
void func_ov107_022955d4(S *s);
s32 func_ov107_022955fc(S *s);
void func_ov107_02295638(S *s);
void func_ov107_022956d4(S *s);
void func_ov107_02295768(S *s);
void func_ov107_02295788(S *s);
void func_ov107_022957a8(S *s);
void func_ov107_022957dc(S *s);
void func_ov107_02295828(S *s);
void func_ov107_0229588c(S *s);
void func_ov107_022958dc(S *s);
void func_ov107_02295950(S *s);
void func_ov107_022959c8(S *s);
void func_ov107_02295a50(S *s);
void func_ov107_02295aa4(S *s);
void func_ov107_02295b14(S *s, u32 a);
void func_ov107_02295b58(S *s);
BOOL func_ov107_02295be8(S *s, u32 a);
BOOL func_ov107_02295c1c(S *s, u32 a);
s32 func_ov107_02295d20(S *s, u32 a);
s32 func_ov107_02295d5c(S *s, u32 a);
s32 func_ov107_02295ddc(S *s, s32 a, s32 b, s32 c);
BOOL func_ov107_02295e48(S *s, u32 a);
void func_ov107_02295e54(S *s);
BOOL func_ov107_022952e4(S *s, u32 a);
void func_ov107_02296964(S *s);
}

extern "C" {

void func_ov107_02295eb8(S *s, u32 a);
void func_ov107_02295f40(S *s);
void func_ov107_02295f60(S *s);
void func_ov107_02295f94(S *s);
void func_ov107_0229663c(S *s);

void func_ov107_02295eb8(S *s, u32 a)
{
    s->unk_b6 = a;
    func_ov002_02200a58(s, 1);
    u32 x = data_021ef5f0;
    u32 y = data_021ef5ec;
    s->unk_9c = func_ov107_02295d5c(s, s->unk_b6) - x;
    s->unk_a0 = func_ov107_02295d20(s, s->unk_b6) - y;
    s->unk_b7 = a;
    func_ov002_022006b8(s->unk_2174);
    func_ov002_022006c0(s->unk_2174);
    s->unk_bf = 2;
    if (func_ov107_02295c1c(s, a) == 0) {
        func_ov094_0229238c();
    }
}

void func_ov107_02295f40(S *s)
{
    if (func_0206ef0c()) {
        func_ov107_02295f94(s);
    } else {
        func_ov107_02295f60(s);
    }
}

void func_ov107_02295f60(S *s)
{
    s->unk_b7 = 0x10;
    func_ov107_022959c8(s);
    func_ov002_02200980(s);
    func_ov107_02295a50(s);
    func_ov002_02200a58(s, 5);
    func_ov107_02295b14(s, s->unk_b8);
}

void func_ov107_02295f94(S *s)
{
    func_ov107_02295950(s);
    func_ov107_02295b58(s);
    func_ov002_02200a58(s, 0);
}

void func_ov107_02295fb0(S *s)
{
    if (func_020951a0()) {
        func_ov107_022955fc(s);
    }
}

void func_ov107_02295fc8(S *s)
{
    if (s->unk_be != 0) {
        s->unk_be = *(volatile u8 *)&s->unk_be - 1;
    } else {
        func_ov107_022955fc(s);
    }
}

void func_ov107_02295ff0(S *s)
{
    func_ov107_02294e14();
    if (func_ov003_02227434() != 3) {
        s->unk_be = 5;
        func_ov002_02200a58(s, 0x13);
    }
}

void func_ov107_02296018(S *s)
{
    if (func_ov002_0220308c(s->unk_26b8)) {
        if (func_0208d534(&s->unk_224c)) {
            s32 a = func_ov002_0220306c(s->unk_26b8);
            s32 b = func_ov002_022030f4(s->unk_26b8, -1);
            s32 c = func_ov002_022030b8(s->unk_26b8, -1);
            func_ov002_02202a40(&s->unk_224c, a + b, a + c);
        }
    } else {
        func_0206ecf8(0);
        s->unk_8c = 3;
        func_ov002_02200a60(s, 1);
        func_ov002_022006e4(s->unk_2174, 1);
        func_ov107_02295950(s);
    }
}

void func_ov107_022960a0(S *s)
{
    if (func_ov002_02204234(s->unk_25b0, 0)) {
        func_ov002_02200a58(s, s->unk_bb);
        func_0208d644(&s->unk_224c);
    }
}

void func_ov107_022960d4(S *s)
{
    if (func_ov002_022017a4(s->unk_22b0)) {
        func_ov107_022956d4(s);
    }
}

void func_ov107_022960f4(S *s)
{
    if (func_ov002_02201a28(s->unk_22b0)) {
        func_ov002_02202064(s->unk_22b0, 0);
        func_ov002_022006e4(s->unk_2174, 1);
        if (func_0208d534(&s->unk_224c)) {
            func_ov107_022957a8(s);
        }
        func_ov002_02200a58(s, 0xd);
    }
}

void func_ov107_02296144(S *s)
{
    if (func_ov002_022017b4(s->unk_22b0)) {
        if (func_0206ef00()) {
            func_ov107_022957dc(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov002_02200a58(s, 4);
        }
    }
}

void func_ov107_02296180(S *s)
{
    if (func_0208d4fc(&s->unk_224c)) {
        func_ov107_02295788(s);
        func_ov002_02200a58(s, 5);
    }
}

void func_ov107_022961a8(S *s)
{
    if (func_0208d4fc(&s->unk_224c)) {
        func_ov002_022030ac(s->unk_26b8, 9);
        func_ov002_02200a58(s, 0xf);
        func_0200402c(0x28);
    }
}

void func_ov107_022961e0(S *s)
{
    if (!func_ov002_022028f0(&s->unk_224c)) {
        func_ov002_02200a58(s, s->unk_bb);
        if (s->unk_bb == 5) {
            func_ov107_02295b14(s, s->unk_b8);
        }
        func_ov107_02296964(s);
    }
}

void func_ov107_02296224(S *s)
{
    if (func_0208d4fc(&s->unk_224c)) {
        func_ov002_02201aa0(s->unk_22b0, s->unk_bd, 1);
        s->unk_bc = s->unk_25a9[s->unk_bd];
        func_ov002_02200a58(s, 0xc);
    }
}

void func_ov107_02296270(S *s)
{
    if (func_ov002_022009d4(s)) {
        func_ov107_02295638(s);
    } else if (func_ov002_022019d0(s->unk_22b0, func_ov002_022009c8(s), &s->unk_bd, 0)) {
        func_ov107_0229588c(s);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            func_ov002_02202b68(&s->unk_224c);
            func_ov002_02200a58(s, 7);
        } else if ((f & 2) != 0) {
            func_ov107_02295828(s);
        }
    }
}

void func_ov107_022962e8(S *s)
{
    if (func_ov002_022009d4(s)) {
        func_ov107_02295f94(s);
        func_ov002_022006e4(s->unk_2174, 1);
    } else if (func_ov107_022952e4(s, func_ov002_022009c8(s))) {
        func_ov107_02295a50(s);
        func_ov107_022958dc(s);
        func_ov002_022006e4(s->unk_2174, 0);
    } else if (func_ov107_02295c1c(s, s->unk_b8) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov107_02295e48(s, s->unk_b8)) {
            if (!func_ov107_02295be8(s, s->unk_b8)) {
                func_ov107_02295450(s, s->unk_b8, 0);
            }
        } else if (s->unk_b8 == 0xf) {
            func_ov107_02295768(s);
        }
    } else if ((data_021f47d8[1] & 2) != 0) {
        func_ov107_02295950(s);
        func_ov107_022955d4(s);
        func_ov002_022006e4(s->unk_2174, 0);
    } else {
        func_ov002_022006c0(s->unk_2174);
    }
}

void func_ov107_022963c8(S *s)
{
    if (func_ov002_022017b4(s->unk_22b0)) {
        if (func_ov002_02200a14(s, 1)) {
            func_ov107_02295638(s);
        } else if (Unk_ov107_02296270_Both()) {
            s32 r = func_ov002_022014c0(s->unk_22b0, data_021ef5f0, data_021ef5ec);
            if (r >= 0) {
                func_ov002_02201aa0(s->unk_22b0, r, 1);
                s->unk_bc = s->unk_25a9[r];
                func_ov002_02200a58(s, 0xc);
            }
        }
    }
}

void func_ov107_02296460(S *s)
{
    if (func_ov002_02200680(s->unk_2174)) {
        if (s->unk_bf != 0) {
            s->unk_bf = *(volatile u8 *)&s->unk_bf - 1;
        } else {
            func_ov107_02295450(s, s->unk_b6, 1);
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov107_022964a8(S *s)
{
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 4);
    }
}

void func_ov107_022964c4(S *s)
{
    if (data_021f4770 == 0) {
        if (func_ov107_02295c1c(s, s->unk_b6)) {
            func_ov002_02200a58(s, 0);
            func_ov002_022006a4(s->unk_2174, 0x3c);
        } else {
            func_ov002_02200a58(s, 3);
            func_ov107_02296964(s);
        }
    } else if (func_ov107_02295c1c(s, s->unk_b6) == 0 && func_ov002_02200680(s->unk_2174)) {
        if (s->unk_bf != 0) {
            s->unk_bf = *(volatile u8 *)&s->unk_bf - 1;
        } else {
            func_ov107_02295450(s, s->unk_b6, 1);
            func_ov002_02200a58(s, 2);
        }
    } else {
        func_ov002_022006c0(s->unk_2174);
    }
}

void func_ov107_02296564(S *s)
{
    if (func_ov002_02200a14(s, 1)) {
        func_ov107_02295f60(s);
    } else if (Unk_ov107_02296270_Both()) {
        s32 r = func_ov107_02295ddc(s, data_021ef5f0, data_021ef5ec + 0x10, 1);
        if (r != 0x10) {
            func_ov107_02295eb8(s, r);
        } else if (func_ov002_02203110(s->unk_26b8, 9)) {
            func_ov107_022955d4(s);
        }
    }
}

void func_ov107_022965e4(S *s)
{
    func_ov094_02292ae0(s->unk_b94);
    func_ov002_02203920(s->unk_26b8);
}

void func_ov107_02296608(S *s)
{
    func_ov094_02292d1c(s->unk_b94, 0);
}

void func_ov107_0229661c(S *s)
{
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void func_ov107_022966b4(S *s);
void func_ov107_022966b4(S *s)
{
    func_ov107_0229663c(s);
}

void func_ov107_0229663c(S *s)
{
    func_ov002_02201b58(s->unk_22b0);
    func_ov094_02292aa4(s->unk_b94);
    if (func_ov002_0220071c(s->unk_2174)) {
        func_ov107_02295aa4(s);
    }
}

void func_ov107_02296674(S *s)
{
    func_ov107_02295e54(s);
    func_ov094_02292acc(s->unk_b94);
    func_ov094_022939a0(s->unk_10c);
    func_ov094_0229462c(s->unk_b6c);
    func_ov002_02203900(s->unk_26b8);
}

void func_ov107_022966bc(S *s)
{
    func_ov107_02296674(s);
    s->unk_224c.vfunc_0c();
}

void func_ov107_022966d8(S *s)
{
    func_ov107_02295e54(s);
    func_ov094_02292a80(s->unk_b94);
    func_ov094_02293998(s->unk_10c);
    func_ov002_02201b04(s->unk_22b0);
    func_ov002_02203900(s->unk_26b8);
}

void func_ov107_02296718(S *s)
{
    s->unk_94 = 0;
    func_ov094_022939c0(s->unk_10c, 2);
    func_ov094_02294644(s->unk_b6c, 2);
    func_ov094_02292d30(s->unk_b94, 6);
    s->unk_b7 = 0x10;
    func_ov002_022027a4(s->unk_2234);
    s->unk_b5 = 0;
    s->unk_b8 = 0;
    func_ov002_02202310(s->unk_22b0, 3, 1, 0);
    if (func_ov107_02295070(s)) {
        func_ov107_02294d64(s, 0x40);
    }
    s->unk_bf = 0;
}

void func_ov107_0229679c(S *s)
{
    if (func_ov002_022008fc(s, 0)) {
        func_020021a0(6);
        func_ov002_02200a60(s, 5);
        func_ov107_02294d54(s, 1);
        func_ov107_02294d54(s, 2);
    } else {
        func_ov002_02200840(s, 6, 0, -16);
    }
    s->unk_98 = func_ov002_02200920(s);
}

}
