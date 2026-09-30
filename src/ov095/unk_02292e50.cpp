#include "types.h"

struct Unk_ov095_02292360 {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05[0xb];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[6];
    u8 unk_2e;
    u8 unk_2f;
    u8 *unk_30;
};

extern "C" {
extern s32 data_ov095_0229560c[];
extern s32 data_ov095_02295634[];
extern u8 data_ov095_02295588[];
extern u8 data_ov095_02295e48[];

s32 func_02087e14(void *p);
s32 func_02087e0c(void *p);
s32 func_ov090_02291a78(s32 a);
BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);

s32 func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022937a8(Unk_ov095_02292360 *s, s32 a);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_022925b4(Unk_ov095_02292360 *s, void *p);
void func_ov095_02292b6c(Unk_ov095_02292360 *s);

void func_ov095_02293350(Unk_ov095_02292360 *s);
s32 func_ov095_022933a4(Unk_ov095_02292360 *s);
s32 func_ov095_022935bc(Unk_ov095_02292360 *s);
void func_ov095_022934f8(Unk_ov095_02292360 *s);
void func_ov095_02293470(Unk_ov095_02292360 *s);
void func_ov095_02293410(Unk_ov095_02292360 *s);
s32 func_ov095_022935c0(Unk_ov095_02292360 *s);
s32 func_ov095_02293620(Unk_ov095_02292360 *s);
s32 func_ov095_02293648(Unk_ov095_02292360 *s);
s32 func_ov095_02293688(Unk_ov095_02292360 *s);
s32 func_ov095_022936f4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229371c(Unk_ov095_02292360 *s);

void func_ov095_02292e50(Unk_ov095_02292360 *s, void *p)
{
    s32 r7, v;
    if (func_ov095_022925b4(s, p) != 0) {
        return;
    }
    v = s->unk_14;
    if (v < 0x70) {
        return;
    }
    if (v <= 0x8d) {
        v -= 0x70;
        r7 = v % 10;
        v = v / 10;
        if (func_ov002_0220128c(p) != 0) {
            if (v > 0) {
                v--;
                s->unk_14 -= 10;
            } else {
                func_ov095_02292b6c(s);
                return;
            }
        } else if (func_ov002_0220127c(p) != 0) {
            if (v < 2) {
                v++;
                s->unk_14 += 10;
            } else {
                s->unk_14 = 0x91;
                return;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (r7 > 0) {
                s->unk_14--;
                return;
            }
            s->unk_2f = 1;
            if (v == 0) {
                s->unk_14 = 0x8f;
            } else {
                s->unk_14 = 0x90;
            }
            return;
        }
        if (func_ov002_0220125c(p) == 0) {
            return;
        }
        if (r7 < 9) {
            s->unk_14++;
            return;
        }
        if (v == 0) {
            s->unk_14 = 0x8e;
        } else {
            s->unk_14 = 0x90;
        }
        return;
    }
    v -= 0x8e;
    switch (v) {
    case 0:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292b6c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x83;
            } else {
                s->unk_14 = 0x90;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x79;
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0x8f;
        }
        break;
    case 1:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292b6c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0x90;
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x8e;
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_2f = 2;
            s->unk_14 = 0x70;
        }
        break;
    case 2:
        if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = 0x8f;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            }
            break;
        }
        if (func_ov002_0220127c(p) != 0) {
            func_ov095_022933a4(s);
            if (s->unk_14 != 0x90) {
                break;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x8d;
            } else {
                s->unk_14 = 0x83;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_2f = 2;
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x84;
            } else {
                s->unk_14 = 0x7a;
            }
        }
        break;
    case 3:
        if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = 0x8a;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            func_ov095_022933a4(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02293350(s);
        }
        break;
    }
}

void func_ov095_0229309c(Unk_ov095_02292360 *s, void *p)
{
    s32 c, st, lo, hi, lo2, hi2, hc, v;
    if (func_ov095_022925b4(s, p) != 0) {
        return;
    }
    st = s->unk_14;
    if (st < 0x3b) {
        goto common;
    }
    if (st <= 0x46) {
        c = 0;
        goto common;
    }
    if (st <= 0x51) {
        c = 1;
        if (st != 0x51) {
            goto common;
        }
        if (func_ov002_0220128c(p) != 0) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x45;
            } else {
                s->unk_14 = 0x46;
            }
            return;
        }
        if (func_ov002_0220127c(p) == 0) {
            goto common;
        }
        s->unk_14 = 0x5c;
        return;
    }
    if (st <= 0x5c) {
        c = 2;
        if (st != 0x5c) {
            goto common;
        }
        if (func_ov002_0220128c(p) == 0) {
            goto common;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0x50;
        } else {
            s->unk_14 = 0x51;
        }
        return;
    }
    if (st <= 0x67) {
        c = 3;
        if (func_ov002_0220127c(p) == 0) {
            goto common;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14--;
        }
        if (s->unk_14 < 0x5d) {
            s->unk_14 = 0x5d;
        }
        v = s->unk_14;
        if (v <= 0x5e) {
            s->unk_14 = v + 0xb;
        } else if (v <= 0x65) {
            s->unk_14 = 0x6b;
        } else {
            s->unk_14 = v + 8;
        }
        return;
    }
    if (st > 0x6f) {
        return;
    }
    c = 4;
    if (func_ov002_0220128c(p) != 0) {
        v = s->unk_14;
        if (v == 0x6b) {
            s->unk_14 = 0x63;
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14--;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14++;
            }
            return;
        }
        if (v > 0x6b) {
            s->unk_14 = v - 8;
            if (func_ov002_0220125c(p) == 0) {
                return;
            }
            v = s->unk_14;
            if (v >= 0x67) {
                return;
            }
            s->unk_14 = v + 1;
            return;
        }
        goto common;
    }
    if (func_ov002_0220127c(p) != 0) {
        if (s->unk_14 < 0x6c) {
            func_ov095_02293350(s);
        } else {
            func_ov095_022933a4(s);
        }
        return;
    }
common:
    if (func_ov002_0220128c(p) != 0) {
        if (c == 0) {
            func_ov095_02292b6c(s);
            return;
        }
        lo = data_ov095_0229560c[c - 1];
        hi = data_ov095_02295634[c - 1];
        s->unk_14 = s->unk_14 - (hi - lo + 1);
        if (c == 2) {
            s->unk_14--;
        }
        if (func_ov002_0220125c(p) != 0) {
            s->unk_14++;
        }
        v = s->unk_14;
        if (v < lo) {
            s->unk_14 = lo;
        } else if (v > hi) {
            s->unk_14 = hi;
        }
    } else if (func_ov002_0220127c(p) != 0 && c < 3) {
        lo2 = data_ov095_0229560c[c + 1];
        hi2 = data_ov095_02295634[c + 1];
        hc = data_ov095_02295634[c];
        s->unk_14 = s->unk_14 + (hc - data_ov095_0229560c[c] + 1);
        if (c == 1) {
            s->unk_14++;
        }
        if (func_ov002_0220126c(p) != 0) {
            s->unk_14--;
        }
        v = s->unk_14;
        if (v > hi2) {
            s->unk_14 = hi2;
        } else if (v < lo2) {
            s->unk_14 = lo2;
        }
    } else {
        if (s->unk_14 == 0x6b) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0x69;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14 = 0x6e;
            }
            return;
        }
        if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > data_ov095_0229560c[c]) {
                s->unk_14 = s->unk_14 - 1;
            } else {
                s->unk_2f = 1;
                s->unk_14 = data_ov095_02295634[c];
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < data_ov095_02295634[c]) {
                s->unk_14 = s->unk_14 + 1;
            } else {
                s->unk_2f = 2;
                s->unk_14 = data_ov095_0229560c[c];
            }
        }
        v = s->unk_14;
        if (v == 0x6a || (u32)(v - 0x6c) <= 1) {
            s->unk_14 = 0x6b;
        }
    }
}

void func_ov095_02293350(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 1:
        if (func_ov095_02292370(s, 8) != 0) {
            s->unk_14 = 0xd6;
        } else {
            s->unk_14 = 0xd7;
        }
        break;
    case 2:
        s->unk_14 = 0xd8;
        break;
    case 5:
        s->unk_14 = 0xda;
        break;
    case 4:
        s->unk_14 = 0xd9;
        break;
    }
}

s32 func_ov095_022933a4(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 1:
    case 2:
        s->unk_14 = 0xd6;
        break;
    case 4:
    case 5:
        s->unk_14 = 0xd9;
        break;
    }
}

void func_ov095_022933d4(Unk_ov095_02292360 *s)
{
    switch (s->unk_02) {
    case 0:
        func_ov095_022935bc(s);
        break;
    case 1:
        func_ov095_022934f8(s);
        break;
    case 2:
        func_ov095_02293470(s);
        break;
    case 3:
        func_ov095_02293410(s);
        break;
    }
}

void func_ov095_02293410(Unk_ov095_02292360 *s)
{
    s32 c, x, y;
    if (func_ov095_022935c0(s) == 0) {
        c = s->unk_14;
        if (c <= 0xc5) {
            x = ((c - 0x92) % 11) * 0x14 + 0x12;
            c -= 0x92;
            y = c / 11;
            y = y * 2 + 0xd;
            y *= 8;
        } else {
            x = 0xee;
            switch (c) {
            case 0xc6:
                y = 0x6c;
                break;
            case 0xc7:
                y = 0x8c;
                break;
            case 0xc8:
                x = 0xd0;
                y = 0xa8;
                break;
            }
        }
        s->unk_18 = x;
        s->unk_1c = y;
    }
}

void func_ov095_02293470(Unk_ov095_02292360 *s)
{
    s32 c;
    if (func_ov095_022935c0(s) == 0) {
        c = s->unk_14;
        if (c >= 0x70) {
            if (c <= 0x8d) {
                s32 d = c - 0x70;
                c = d;
                s->unk_18 = (c % 10) * 0x14 + 0x12;
                s->unk_1c = ((c / 10) * 2 + 0xe) * 8;
            } else {
                switch (c - 0x8e) {
                case 0:
                    s->unk_18 = 0xda;
                    s->unk_1c = 0x70;
                    break;
                case 1:
                    s->unk_18 = 0xee;
                    s->unk_1c = 0x70;
                    break;
                case 2:
                    s->unk_18 = 0xe4;
                    s->unk_1c = 0x88;
                    break;
                case 3:
                    s->unk_18 = 0x80;
                    s->unk_1c = 0xa0;
                    break;
                }
            }
        }
    }
}

void func_ov095_022934f8(Unk_ov095_02292360 *s)
{
    s32 v;
    if (func_ov095_022935c0(s) == 0) {
        v = s->unk_14;
        if (v >= 0x3b) {
            if (v <= 0x46) {
                s->unk_1c = 0x68;
                s->unk_18 = (s->unk_14 - 0x3b) * 0x14 + 0xe;
            } else if (v <= 0x51) {
                s->unk_1c = 0x78;
                s->unk_18 = (s->unk_14 - 0x47) * 0x14 + 0x16;
                if (s->unk_14 == 0x51) {
                    s->unk_18 += 0xa;
                }
            } else if (v <= 0x5c) {
                s->unk_1c = 0x88;
                s->unk_18 = (s->unk_14 - 0x52) * 0x14 + 0xe;
                if (s->unk_14 == 0x5c) {
                    s->unk_18 += 0xe;
                }
            } else if (v <= 0x67) {
                s->unk_1c = 0x98;
                s->unk_18 = (s->unk_14 - 0x5d) * 0x14 + 0x16;
                if (s->unk_14 == 0x5d) {
                    s->unk_18 -= 3;
                }
            } else if (v <= 0x6f) {
                s->unk_1c = 0xa8;
                v = s->unk_14;
                if (v < 0x6b) {
                    s->unk_18 = (v - 0x68) * 0x14 + 0x22;
                } else if (v == 0x6b) {
                    s->unk_18 = 0x86;
                } else {
                    s->unk_18 = (v - 0x6c) * 0x14 + 0xae;
                }
            }
        }
    }
}

s32 func_ov095_022935bc(Unk_ov095_02292360 *s)
{
}

s32 func_ov095_022935c0(Unk_ov095_02292360 *s)
{
    s32 r = 0;
    if (func_ov095_0229371c(s) != 0) {
        return 1;
    }
    switch (s->unk_2e) {
    case 0:
        r = func_ov095_02293688(s);
        break;
    case 1:
    case 2:
        r = func_ov095_02293648(s);
        break;
    case 3:
    case 4:
    case 5:
        r = func_ov095_02293620(s);
        break;
    }
    return r;
}

s32 func_ov095_02293620(Unk_ov095_02292360 *s)
{
    switch (s->unk_14) {
    case 0xd9:
        s->unk_18 = 0xc4;
        s->unk_1c = 0xb6;
        return 1;
    case 0xda:
        s->unk_18 = 0x7c;
        s->unk_1c = 0xb6;
        return 1;
    }
    return 0;
}

s32 func_ov095_02293648(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    if (v == 0xd5) {
        return 1;
    }
    switch (v) {
    case 0xd6:
        s->unk_18 = 0xca;
        s->unk_1c = 0xb6;
        return 1;
    case 0xd7:
        s->unk_18 = 0x58;
        s->unk_1c = 0xb6;
        return 1;
    case 0xd8:
        s->unk_18 = 0x74;
        s->unk_1c = 0xb6;
        return 1;
    }
    return 0;
}

s32 func_ov095_02293688(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    if (v == 0xc9) {
        s->unk_18 = func_02087e14(data_ov095_02295588) + 0x98;
        s->unk_1c = func_02087e0c(data_ov095_02295588) + 0x70;
        return 1;
    }
    if (v >= 0xde && v <= 0xe1) {
        s->unk_18 = func_ov095_022936f4(s, v);
        s->unk_1c = func_02087e0c(data_ov095_02295e48) + 0x68;
        return 1;
    }
    if (func_ov095_022952b4(s, v) != 0) {
        s->unk_18 = func_ov090_02291a78(s->unk_14 - 0xcd);
        s->unk_1c = 8;
        return 1;
    }
    return 0;
}

s32 func_ov095_022936f4(Unk_ov095_02292360 *s, s32 a)
{
    if (a >= 0xde && a <= 0xe1) {
        return func_02087e14(data_ov095_02295e48 + (a - 0xde) * 8) + 0x88;
    }
    return 0x80;
}

s32 func_ov095_0229371c(Unk_ov095_02292360 *s)
{
    s32 v = s->unk_14;
    switch (v) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        s->unk_18 = func_ov095_022937a8(s, v);
        s->unk_1c = func_02087e0c(s->unk_30 + (v - 0xca) * 8) + 0x68;
        return 1;
    case 0xdb:
        s->unk_18 = 0x18;
        s->unk_1c = 0x54;
        if (func_ov095_02292370(s, 4) == 0) {
            s->unk_1c -= 8;
        }
        return 1;
    case 0xdc:
        s->unk_18 = 0xe8;
        s->unk_1c = 0x54;
        if (func_ov095_02292370(s, 4) == 0) {
            s->unk_1c -= 8;
        }
        return 1;
    }
    return 0;
}
}
