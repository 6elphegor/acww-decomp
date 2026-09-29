#include "types.h"

struct Unk_ov004_02227228_Mtx {
    s32 v[12];
};

struct Unk_ov004_02227228_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_022275fc_Sess {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    s8 unk_03;
    u8 pad_04[0xc];
    u32 unk_10;
};

typedef Unk_ov004_02227228_Mtx Mtx;
typedef Unk_ov004_02227228_Bits Bits;

class Unk_ov004_0224d80c {
public:
    typedef BOOL (Unk_ov004_0224d80c::*Fn)();
    u8 pad_000[0x150];
    Mtx unk_150;
    u8 pad_180[0x190 - 0x180];
    s32 unk_190;
    u8 pad_194[4];
    s32 unk_198;
    u8 pad_19c[0x2f4 - 0x19c];
    Mtx unk_2f4;
    u8 pad_324[0x334 - 0x324];
    s32 unk_334;
    u8 pad_338[4];
    s32 unk_33c;
    u8 pad_340[0x3ac - 0x340];
    Mtx unk_3ac;
    u8 pad_3dc[0x3e8 - 0x3dc];
    Bits unk_3e8;
    Bits unk_3ec;
    u8 pad_3f0[0x464 - 0x3f0];
    Mtx unk_464;
    u8 pad_494[0x4a0 - 0x494];
    Bits unk_4a0;
    Bits unk_4a4;
    u8 pad_4a8[0x51c - 0x4a8];
    Mtx unk_51c;
    u8 pad_54c[0x55c - 0x54c];
    Bits unk_55c;
    u8 pad_560[0x5d4 - 0x560];
    Mtx unk_5d4;
    u8 pad_604[0x68c - 0x604];
    Mtx unk_68c;
    u8 pad_6bc[0x744 - 0x6bc];
    Mtx unk_744;
    u8 pad_774[0x7fc - 0x774];
    Mtx unk_7fc;
    u8 pad_82c[0x8b4 - 0x82c];
    Mtx unk_8b4;
    u8 pad_8e4[0xef0 - 0x8e4];
    u8 unk_ef0[4];
    u8 unk_ef4;
    u8 pad_ef5;
    u8 unk_ef6;
    u8 pad_ef7[2];
    u8 unk_ef9;
    u8 pad_efa[2];
    s32 unk_efc;
    u8 pad_f00[0xf10 - 0xf00];
    s32 unk_f10;
    s32 unk_f14;
    s32 unk_f18;
    u8 pad_f1c[0xf38 - 0xf1c];
    s32 unk_f38;
    s32 unk_f3c;
    s32 unk_f40;
};

extern "C" {
extern Mtx data_021f47e0;
extern Unk_ov004_0224d80c *volatile data_ov004_02250cd0;
extern Unk_ov004_0224d80c::Fn data_ov004_0224d8c8, data_ov004_0224d8d0, data_ov004_0224d8d8, data_ov004_0224d8e0,
    data_ov004_0224d8e8, data_ov004_0224d8f0, data_ov004_0224d8f8, data_ov004_0224d900, data_ov004_0224d908,
    data_ov004_0224d910, data_ov004_0224d918, data_ov004_0224d920, data_ov004_0224d928, data_ov004_0224d930,
    data_ov004_0224d938, data_ov004_0224d940, data_ov004_0224d948, data_ov004_0224d950, data_ov004_0224d958,
    data_ov004_0224d960;
extern s32 data_ov004_02250d2c[3], data_ov004_02250d5c[3], data_ov004_02250cd8[3], data_ov004_02250cf0[3],
    data_ov004_02250d08[3];

u32 func_ov004_0221c08c(void);
u32 func_ov004_0221c070(void);
void *func_ov004_0221c0a4(void);
void *func_ov004_0221c0b8(void);
s32 func_ov004_022264dc(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u16 a7, u16 a8);
s32 func_ov004_02224f60(void *p);
s32 func_ov004_022267a8(Unk_ov004_0224d80c *o, u32 idx);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020547cc(void *p, void *q);
void func_020547e4(void *p);
void *func_02034d2c(void);
s32 func_020e77cc(void *p, u32 a, u32 b);
Unk_ov004_022275fc_Sess *func_02003bbc(void);
s32 func_020902d4(s32 a, void *b, u32 c, u32 d);
s32 func_02090268(u32 a, void *b, void *c, u32 d);
}

typedef Unk_ov004_0224d80c Obj;

extern "C" {

BOOL func_ov004_02226e14(Obj *o) {
    return TRUE;
}

void func_ov004_02226e18(Obj *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf3) {
        func_ov004_022264dc(o, 3, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        func_ov004_022264dc(o, 4, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

BOOL func_ov004_02226ec0(Obj *o) {
    return TRUE;
}

void func_ov004_02226ec4(Obj *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf3) {
        func_ov004_022264dc(o, 0, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        func_ov004_022264dc(o, 1, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

BOOL func_ov004_02226f68(Obj *o) {
    return TRUE;
}

void func_ov004_02226f6c(Obj *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf2) {
        func_ov004_022264dc(o, 0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf4) {
        func_ov004_022264dc(o, 1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    }
}

BOOL func_ov004_0222700c(Obj *o) {
    o->unk_ef9 = 1;
    o->unk_ef0[0] = 1;
    return TRUE;
}

void func_ov004_02227024(Obj *o) {
    static Obj::Fn tbl[10] = {data_ov004_0224d908, data_ov004_0224d900, data_ov004_0224d8f8, data_ov004_0224d8f0,
                              data_ov004_0224d938, data_ov004_0224d8e8, data_ov004_0224d920, data_ov004_0224d8d8,
                              data_ov004_0224d8e0, data_ov004_0224d918};
    s32 i = o->unk_efc;
    if (i < 10) {
        (o->*tbl[i])();
    }
}

BOOL func_ov004_02227104(Obj *o, s32 n) {
    static Obj::Fn tbl[10] = {data_ov004_0224d8c8, data_ov004_0224d960, data_ov004_0224d958, data_ov004_0224d950,
                              data_ov004_0224d948, data_ov004_0224d940, data_ov004_0224d8d0, data_ov004_0224d928,
                              data_ov004_0224d930, data_ov004_0224d910};
    if (n < 10) {
        if ((o->*tbl[n])()) {
            o->unk_efc = n;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_ov004_022271f4(Obj *o) {
    u8 i;
    func_ov004_02224f60(o);
    for (i = 0; i < 9; i++) {
        func_ov004_022267a8(o, i);
    }
    data_ov004_02250cd0 = NULL;
    return TRUE;
}

void func_ov004_02227228(Obj *o) {
    u8 i;
    data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
    o->unk_150 = data_021f47e0;
    data_021f47e0 = *(Mtx *)func_ov004_0221c0b8();
    o->unk_2f4 = data_021f47e0;
    s32 st = o->unk_efc;
    if ((u32)(st - 8) <= 1) {
        func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
        o->unk_3ac = data_021f47e0;
    } else if (st == 5) {
        if (o->unk_3ec.mid >= 0x10) {
            func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
            o->unk_f10 = 0x16a00;
            o->unk_f14 = 0x1900;
            o->unk_f18 = 0x15000;
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
            o->unk_f10 = data_021f47e0.v[9];
            o->unk_f14 = data_021f47e0.v[10];
            o->unk_f18 = data_021f47e0.v[11];
        }
    } else if (st == 6) {
        if ((s32)o->unk_3ec.mid >= (s32)o->unk_3e8.mid - 0x2d) {
            func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
            o->unk_f10 = 0x16a00;
            o->unk_f14 = 0x1900;
            o->unk_f18 = 0x15000;
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
            o->unk_f10 = data_021f47e0.v[9];
            o->unk_f14 = data_021f47e0.v[10];
            o->unk_f18 = data_021f47e0.v[11];
        }
    } else {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        o->unk_f10 = data_021f47e0.v[9];
        o->unk_f14 = data_021f47e0.v[10];
        o->unk_f18 = data_021f47e0.v[11];
    }
    o->unk_3ac = data_021f47e0;
    st = o->unk_efc;
    if ((u32)(st - 8) <= 1) {
        func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
        o->unk_464 = data_021f47e0;
    } else if (st == 5) {
        if (o->unk_4a4.mid >= 0x10) {
            func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        }
    } else if (st == 6) {
        if ((s32)o->unk_4a4.mid >= (s32)o->unk_4a0.mid - 0x2d) {
            func_020e8388(&data_021f47e0, data_ov004_02250d2c[0], data_ov004_02250d2c[1], data_ov004_02250d2c[2]);
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        }
    } else {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
    }
    o->unk_464 = data_021f47e0;
    if (o->unk_55c.mid >= 0xf && o->unk_55c.mid <= 0x48) {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0b8();
    } else {
        func_020e8388(&data_021f47e0, data_ov004_02250d5c[0], data_ov004_02250d5c[1], data_ov004_02250d5c[2]);
    }
    o->unk_51c = data_021f47e0;
    func_020e8388(&data_021f47e0, data_ov004_02250cd8[0], data_ov004_02250cd8[1], data_ov004_02250cd8[2]);
    o->unk_5d4 = data_021f47e0;
    o->unk_68c = data_021f47e0;
    func_020e8388(&data_021f47e0, data_ov004_02250cf0[0], data_ov004_02250cf0[1], data_ov004_02250cf0[2]);
    o->unk_744 = data_021f47e0;
    o->unk_7fc = data_021f47e0;
    func_020e8388(&data_021f47e0, data_ov004_02250d08[0], data_ov004_02250d08[1], data_ov004_02250d08[2]);
    o->unk_8b4 = data_021f47e0;
    if (o->unk_ef9 != 0) {
        func_020547cc((u8 *)o + 0xec, NULL);
    }
    for (i = 0; i < 9; i++) {
        if (o->unk_ef0[i] != 0) {
            func_020547cc((u8 *)o + 0x290 + i * 0xb8, NULL);
        }
    }
}

BOOL func_ov004_022275f8(Obj *o) {
    return TRUE;
}

BOOL func_ov004_022275fc(Obj *o) {
    u8 i;
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab)) {
        Unk_ov004_022275fc_Sess *t = func_02003bbc();
        if (t != NULL) {
            if (t->unk_03 != 1) {
                o->unk_190 = 0;
                o->unk_198 = t->unk_10;
                func_020547e4((u8 *)o + 0xec);
                o->unk_198 = 0;
                o->unk_334 = 0;
                o->unk_33c = t->unk_10;
                func_020547e4((u8 *)o + 0x290);
                o->unk_33c = 0;
            }
        }
    }
    func_020547e4((u8 *)o + 0xec);
    for (i = 0; i < 9; i++) {
        func_020547e4((u8 *)o + 0x290 + i * 0xb8);
    }
    func_ov004_02227024(o);
    if (o->unk_f38 != -1) {
        func_020902d4(o->unk_f38, (u8 *)o + 0xf10, 0, 0);
    }
    if (o->unk_ef4 != 0) {
        if (o->unk_f3c == -1) {
            o->unk_f3c = func_02090268(0x6b, (u8 *)o + 0xf1c, (u8 *)o + 0xf34, 0);
        }
    }
    if (o->unk_ef6 != 0) {
        if (o->unk_f40 == -1) {
            o->unk_f40 = func_02090268(0x6b, (u8 *)o + 0xf28, (u8 *)o + 0xf36, 0);
        }
    }
    return TRUE;
}

}
