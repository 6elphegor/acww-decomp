// mwcc-flags: -O4,p
#include "types.h"

// ov065_032: DWC connection state machine / error-code helpers (0x02272734..0x02272fe0)

struct Unk_ov065_02290814_Ctx {
    u8 unk_00[0x0d];
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17[3];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[0x20];
    u8 unk_174;
    u8 unk_175[3];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u8 unk_184[0x14];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[0x0d];
    u16 unk_1aa;
    u32 unk_1ac;
    u8 unk_1b0[0x38];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0xc8];
    u8 unk_2b8[8];
    u8 unk_2c0[0xf4];
    u8 unk_3b4;
    u8 unk_3b5[0xa7];
    s32 (*unk_45c)(s32, u32);
    u32 unk_460;
};

struct Unk_ov065_02290818_Sm {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_02290840_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[6];
    s32 *unk_08;
};

extern "C" {
extern Unk_ov065_02290814_Ctx *data_ov065_02290814;
extern Unk_ov065_02290818_Sm *data_ov065_02290818;
extern Unk_ov065_02290840_Ent data_ov065_02290840[];
extern u8 data_ov065_0228c868[];
extern u8 data_ov065_0228c870[];

// callees outside this group
s32 func_ov065_022754f0(s32 a, u32 b, u32 c);
void func_ov065_022880fc(u32 a, u32 b);
void func_ov065_022880d8(u32 a, s32 b);
void func_ov065_02288094(u32 a, s32 *b);
s32 func_ov065_02289268(u32 list);
u32 func_ov065_02289274(u32 list, s32 i);
u32 func_ov065_022890b8(u32 e, void *a, u32 b);
void func_ov065_022892c8(u32 list, u32 e);
void func_ov065_0228914c(u32 e, void *a, u32 b);
void func_ov065_02289258(u32 list, u32 a, void *b, u32 c);
u32 func_ov065_022778b0(u32 a);
s32 func_ov065_0227330c(u32 e);
s32 func_ov065_02275764(u32 a);
s32 func_ov065_022745bc(u32 a, u32 b);
s32 func_ov065_022746e4(s32 a);
u32 func_ov065_02289098(u32 e);
u32 func_ov065_0228907c(u32 e);
s32 func_ov065_022740a4(u32 a);
s32 func_ov065_02274308(u32 a);
s32 func_ov065_022743e0(u32 a, u32 b);
s32 func_ov065_02270508(void);
void func_ov065_02271440(s32 a, s32 b);
void func_ov065_02271fc8(s32 a, s32 b);
void func_ov065_02270e34(s32 a, s32 b);
void func_ov065_0227627c(s32 a, s32 b);
u64 func_ov065_02277974(void);
u64 func_01ffa6b4(void);
s32 func_ov065_02273274(u32 a);
s32 func_ov065_02273d38(u32 a);
void func_ov065_02273230(u32 a);
void func_ov065_02273a40(void);
s32 func_ov065_02273b88(u32 a);
s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

// in this group
s32 func_ov065_02272e18(s32 a);
s32 func_ov065_02272e60(s32 a);
s32 func_ov065_02272f0c(s32 a);
BOOL func_ov065_0227295c(u32 a);
void func_ov065_02272aac(u32 a);

enum Unk_ov065_02272734_Z { Unk_ov065_02272734_Z_0 = 0 };

void func_ov065_02272734(u32 a)
{
    if (data_ov065_02290814->unk_198 == 1) {
        data_ov065_02290814->unk_198 = 6;
    } else if (data_ov065_02290814->unk_198 != 6 && data_ov065_02290814->unk_198 != 0xb) {
        return;
    }
    if (data_ov065_02290814->unk_178 == a) {
        data_ov065_02290814->unk_174++;
    } else {
        data_ov065_02290814->unk_174 = 0;
        data_ov065_02290814->unk_178 = a;
    }
    Unk_ov065_02272734_Z z = Unk_ov065_02272734_Z_0;
    {
        Unk_ov065_02290814_Ctx *c = data_ov065_02290814;
        c->unk_17c = z;
        c->unk_180 = z;
    }
    if (func_ov065_02272e18(func_ov065_022754f0(1, a, z)) == 0) {
        data_ov065_02290814->unk_3b4 = 0xff;
    }
}

void func_ov065_022727c4(u32 a, u32 b)
{
    data_ov065_02290814->unk_1c = a;
    data_ov065_02290814->unk_1a = b;
}

s32 func_ov065_022727d4(s32 a)
{
    return func_ov065_02272e60(a);
}

s32 func_ov065_022727dc(void)
{
    return 0;
}

void func_ov065_022727e0(s32 a, u32 b)
{
    switch (a) {
    case 0: {
        s32 i;
        Unk_ov065_02290840_Ent *e;
        func_ov065_022880fc(b, 8);
        func_ov065_022880fc(b, 10);
        func_ov065_022880fc(b, 0x32);
        func_ov065_022880fc(b, 0x33);
        func_ov065_022880fc(b, 0x34);
        func_ov065_022880fc(b, 0x35);
        func_ov065_022880fc(b, 0x36);
        for (i = 0, e = data_ov065_02290840; i < 0x9a; e++, i++) {
            if (e->unk_00 != 0) {
                func_ov065_022880fc(b, e->unk_00);
            }
        }
        break;
    }
    case 1:
        break;
    case 2:
        break;
    }
}

void func_ov065_02272850(void)
{
}

void func_ov065_02272854(void)
{
}

void func_ov065_02272858(s32 a, u32 b)
{
    switch (a) {
    case 8:
        func_ov065_022880d8(b, data_ov065_02290814->unk_14);
        break;
    case 10:
        func_ov065_022880d8(b, data_ov065_02290814->unk_16);
        break;
    case 0x32:
        func_ov065_022880d8(b, *(s32 *)((u8 *)data_ov065_02290814 + 0x1e8));
        break;
    case 0x33:
        func_ov065_022880d8(b, data_ov065_02290814->unk_15);
        break;
    case 0x34:
        func_ov065_022880d8(b, data_ov065_02290814->unk_20);
        break;
    case 0x35:
        func_ov065_022880d8(b, 3);
        break;
    case 0x36:
        func_ov065_022880d8(b, 1);
        break;
    default: {
        s32 i = a - 0x64;
        if (data_ov065_02290840[i].unk_00 != 0) {
            if (data_ov065_02290840[i].unk_01 != 0) {
                func_ov065_02288094(b, data_ov065_02290840[i].unk_08);
            } else {
                func_ov065_022880d8(b, *data_ov065_02290840[i].unk_08);
            }
        }
        break;
    }
    }
}

BOOL func_ov065_0227295c(u32 a)
{
    BOOL flag2 = FALSE;
    s32 i = 0;
    if (func_ov065_02289268(data_ov065_02290814->unk_e4) > 0) {
        do {
            u32 e = func_ov065_02289274(data_ov065_02290814->unk_e4, i);
            BOOL found;
            if (data_ov065_02290814->unk_15 == 0) {
                u32 h = func_ov065_022890b8(e, data_ov065_0228c868, 0);
                s32 j;
                found = FALSE;
                for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                    if (h == data_ov065_02290814->unk_f4[j]) {
                        func_ov065_022892c8(data_ov065_02290814->unk_e4, e);
                        i--;
                        found = TRUE;
                        break;
                    }
                }
                if (found) {
                    goto next;
                }
            }
            if (data_ov065_02290814->unk_45c != 0) {
                s32 v = data_ov065_02290814->unk_45c(i, data_ov065_02290814->unk_460);
                if (v > 0) {
                    if (v > 0x7fffff) {
                        v = 0x7fffff;
                    }
                    func_ov065_0228914c(e, data_ov065_0228c870, (v << 8) | func_ov065_022778b0(0x100));
                } else {
                    func_ov065_022892c8(data_ov065_02290814->unk_e4, e);
                    i--;
                    flag2 = TRUE;
                }
            } else {
                func_ov065_0228914c(e, data_ov065_0228c870, func_ov065_022778b0(0x80));
            }
        next:
            i++;
        } while (i < func_ov065_02289268(data_ov065_02290814->unk_e4));
    }
    if (a != 0) {
        if (func_ov065_02289268(data_ov065_02290814->unk_e4) != 0) {
            func_ov065_02289258(data_ov065_02290814->unk_e4, 0, data_ov065_0228c870, 0);
        }
    }
    if (flag2 != 0) {
        if (func_ov065_02289268(data_ov065_02290814->unk_e4) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void func_ov065_02272aac(u32 a)
{
}

void func_ov065_02272ab0(u32 list, s32 mode, u32 c)
{
    switch (mode) {
    case 0:
        func_ov065_02272aac(c);
        break;
    case 4: {
        s32 i = 0;
        if (func_ov065_02289268(list) > 0) {
            do {
                u32 e = func_ov065_02289274(list, i);
                if (func_ov065_0227330c(e) == 0) {
                    func_ov065_022892c8(list, e);
                    i--;
                }
                i++;
            } while (i < func_ov065_02289268(list));
        }
        switch (data_ov065_02290814->unk_198) {
        case 2: {
            i = 0;
            if (func_ov065_02289268(list) > 0) {
                do {
                    u32 e = func_ov065_02289274(list, i);
                    Unk_ov065_02290814_Ctx *cx = data_ov065_02290814;
                    if (cx->unk_1c != 0) {
                        if (cx->unk_1c == func_ov065_02289098(e)) {
                            if (cx->unk_1a != 0) {
                                if (data_ov065_02290814->unk_1a == func_ov065_0228907c(e)) {
                                    break;
                                }
                            }
                        }
                    }
                    i++;
                } while (i < func_ov065_02289268(list));
            }
            if (i < func_ov065_02289268(list)) {
                data_ov065_02290814->unk_198 = 3;
                data_ov065_02290814->unk_1ec = 0;
                if (func_ov065_02272f0c(func_ov065_02275764(data_ov065_02290814->unk_1ec)) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = func_01ffa6b4();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        }
        case 3:
            func_ov065_0227295c(1);
            if (func_ov065_02289268(list) != 0) {
                if (func_ov065_022746e4(func_ov065_022745bc(0, 0)) == 0) {
                    data_ov065_02290814->unk_198 = 4;
                    data_ov065_02290814->unk_e8 = 0;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = func_01ffa6b4();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        case 5: {
            if (func_ov065_02289268(list) != 0) {
                do {
                    u32 e = func_ov065_02289274(list, 0);
                    if (data_ov065_02290814->unk_1ac == func_ov065_02289098(e)) {
                        if (data_ov065_02290814->unk_1aa == func_ov065_0228907c(e)) {
                            break;
                        }
                    }
                    func_ov065_022892c8(list, e);
                } while (func_ov065_02289268(list) != 0);
            }
            if (func_ov065_02289268(list) != 0) {
                u32 e = func_ov065_02289274(list, 0);
                u32 h = func_ov065_022890b8(e, data_ov065_0228c868, 0);
                Unk_ov065_02290814_Ctx *cx = data_ov065_02290814;
                if (cx->unk_15 == 1 && h == cx->unk_f4[0]) {
                    if (func_ov065_0227295c(0) != 0) {
                        if (data_ov065_02290814->unk_0d != 0) {
                            if (func_ov065_022746e4(func_ov065_022740a4(data_ov065_02290814->unk_0d)) != 0) {
                                return;
                            }
                        }
                    } else {
                        if (func_ov065_022746e4(func_ov065_02274308(data_ov065_02290814->unk_f4[0])) != 0) {
                            return;
                        }
                        data_ov065_02290814->unk_198 = 4;
                        if (func_ov065_022746e4(func_ov065_022743e0(0, 0)) != 0) {
                            return;
                        }
                        return;
                    }
                }
                data_ov065_02290814->unk_198 = 6;
                if (func_ov065_02272e18(func_ov065_022754f0(0, 0, func_ov065_02289274(list, 0))) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_e8 = 2;
                t = func_01ffa6b4();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        }
        }
        break;
    }
    case 5:
        break;
    }
}

s32 func_ov065_02272d5c(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
    case 5:
        t = 0;
        c = 0;
        a = 0;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x1d;
        break;
    case 6:
        t = 6;
        c = ~0x45;
        break;
    case 7:
        t = 6;
        c = ~0x4f;
        break;
    }
    if (t != 0) {
        func_ov065_0227627c(t, c - 0x153d8);
    }
    return a;
}

enum Unk_ov065_02272dd4_E { Unk_ov065_02272dd4_E_6 = 6 };

s32 func_ov065_02272dd4(s32 a)
{
    Unk_ov065_02272dd4_E t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        t = Unk_ov065_02272dd4_E_6;
        break;
    }
    if (t != 0) {
        func_ov065_0227627c(t, -0x14ff9);
    }
    return a;
}

s32 func_ov065_02272e18(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 6;
        c = ~0x31;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    }
    func_ov065_0227627c(t, c - 0x14ff0);
    return a;
}

s32 func_ov065_02272e60(s32 a)
{
    s32 c, t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x3b;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    case 4:
        t = 6;
        c = ~0x4f;
        break;
    case 5:
        t = 6;
        c = ~0x13;
        break;
    }
    switch (func_ov065_02270508()) {
    case 2:
        func_ov065_02271440(t, c - 0xfa00);
        break;
    case 4:
        func_ov065_02271fc8(t, c - 0x12110);
        break;
    case 5:
        func_ov065_0227627c(t, c - 0x14820);
        break;
    default:
        func_ov065_02270e34(t, c - 0x16f30);
        break;
    }
    return a;
}

s32 func_ov065_02272f0c(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x1d;
        break;
    case 3:
        t = 6;
        c = ~0x13;
        break;
    case 4:
        t = 6;
        c = ~0x27;
        break;
    case 5:
        t = 8;
        c = -1;
        break;
    case 6:
        t = 8;
        c = ~1;
        break;
    }
    func_ov065_0227627c(t, c - 0x14c08);
    return a;
}

s32 func_ov065_02272f80(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 8;
        c = ~1;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x13;
        break;
    }
    func_ov065_0227627c(t, c - 0x13c68);
    return a;
}

void func_ov065_02272fe0(void)
{
    Unk_ov065_02290818_Sm *s = data_ov065_02290818;
    Unk_ov065_02290814_Ctx *cx;
    s32 st;
    s32 j;
    if (s == 0) {
        goto end;
    }
    if (s->unk_00 == 0) {
        goto end;
    }
    cx = data_ov065_02290814;
    if (cx->unk_15 == 2) {
        goto end;
    }
    if (*(volatile u8 *)&cx->unk_15 == 3) {
        goto end;
    }
    st = cx->unk_198;
    if (st == 0x13) {
        s32 t = func_ov065_02273274(0);
        u32 five;
        s = data_ov065_02290818;
        if (s->unk_08 == t) {
            if (s->unk_0c == t) {
                data_ov065_02290814->unk_16 = data_ov065_02290814->unk_0d;
                data_ov065_02290814->unk_19c = data_ov065_02290814->unk_0d - 1;
                func_ov065_02273d38(0);
                goto end;
            }
            s->unk_18 = func_ov065_02277974();
            s->unk_08 = 0;
            if (data_ov065_02290814->unk_15 == 0) {
                u64 t2;
                Unk_ov065_02290814_Ctx *cw;
                data_ov065_02290814->unk_198 = 3;
                data_ov065_02290814->unk_e8 = 2;
                t2 = func_01ffa6b4();
                cw = data_ov065_02290814;
                cw->unk_ec = (u32)t2;
                cw->unk_f0 = (u32)(t2 >> 32);
                goto end;
            }
            data_ov065_02290814->unk_198 = 4;
            func_ov065_022743e0(1, 0);
            goto end;
        }
        five = s->unk_02;
        if ((u64)(func_ov065_02277974() - s->unk_18) < (u64)(s64)(s32)(five * 0x1770)) {
            goto end;
        }
        if (five > 5) {
            func_ov065_02273230(1);
            func_ov065_02273a40();
            func_ov065_02273b88(1);
            goto end;
        }
        {
            for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                u32 bits = data_ov065_02290818->unk_08;
                Unk_ov065_02290814_Ctx *c2;
                if ((bits & (1 << (((u8 *)data_ov065_02290814) + j)[0x2b8])) == 0) {
                    c2 = data_ov065_02290814;
                    if (func_ov065_022746e4(func_ov065_0227532c(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
                        goto end;
                    }
                }
            }
            data_ov065_02290818->unk_02++;
        }
    } else {
        if ((u32)(st - 3) > 1) {
            goto end;
        }
        if ((s32)cx->unk_0d < (s32)s->unk_01 - 1) {
            goto end;
        }
        if (s->unk_02 == 0) {
            if (func_ov065_02277974() - s->unk_10 >= (u64)s->unk_04) {
                goto proceed;
            }
        }
        if (s->unk_02 == 0) {
            goto end;
        }
        s = data_ov065_02290818;
        if (func_ov065_02277974() - s->unk_18 < (u64)(s->unk_04 >> 2)) {
            goto end;
        }
    proceed:
        if (data_ov065_02290814->unk_1ec != 0) {
            if (func_ov065_022746e4(func_ov065_02274308(data_ov065_02290814->unk_1ec)) != 0) {
                goto end;
            }
        }
        data_ov065_02290814->unk_198 = 0x13;
        {
            for (j = 1; j <= data_ov065_02290814->unk_0d; j++) {
                Unk_ov065_02290814_Ctx *c2 = data_ov065_02290814;
                if (func_ov065_022746e4(func_ov065_0227532c(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
                    goto end;
                }
            }
        }
        s = data_ov065_02290818;
        s->unk_18 = func_ov065_02277974();
        s->unk_02 = 1;
    }
end:;
}
}
