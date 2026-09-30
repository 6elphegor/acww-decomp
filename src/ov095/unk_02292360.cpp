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
};

extern "C" {
extern volatile u16 data_020ca488;
extern s32 data_ov095_02295454[];
extern s32 data_ov095_02295464[];
extern s32 data_ov095_02295474[];
extern s32 data_ov095_02295484[];

s32 func_020501d4(s32 a);
void func_02003f2c(u32 a);
void func_0200402c(s32 a);
s32 func_ov090_02291944(s32 a);
BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);

s32 func_ov095_022952c4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022952b4(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022952a0(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02295270(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_02294a2c(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_0229309c(Unk_ov095_02292360 *s, void *p);
s32 func_ov095_02292e50(Unk_ov095_02292360 *s, void *p);
s32 func_ov095_022933d4(Unk_ov095_02292360 *s);
s32 func_ov095_022933a4(Unk_ov095_02292360 *s);
s32 func_ov095_02293350(Unk_ov095_02292360 *s);
s32 func_ov095_022935bc(Unk_ov095_02292360 *s);
s32 func_ov095_022934f8(Unk_ov095_02292360 *s);
s32 func_ov095_02293470(Unk_ov095_02292360 *s);
s32 func_ov095_02293410(Unk_ov095_02292360 *s);
s32 func_ov095_022937a8(Unk_ov095_02292360 *s, s32 a);
s32 func_ov095_022936f4(Unk_ov095_02292360 *s, s32 a);

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m);
BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m);
void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a);
void func_ov095_022923ec();
void func_ov095_022923f8();
s32 func_ov095_02292404(Unk_ov095_02292360 *s);
s32 func_ov095_02292458(Unk_ov095_02292360 *s, void *p);
void func_ov095_022924f0(Unk_ov095_02292360 *s);
void func_ov095_0229253c(Unk_ov095_02292360 *s, s32 a, s32 b);
s32 func_ov095_02292544(Unk_ov095_02292360 *s);
s32 func_ov095_02292580(Unk_ov095_02292360 *s);
BOOL func_ov095_022925b4(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_02292614(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_022926dc(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_02292830(Unk_ov095_02292360 *s, void *p);
BOOL func_ov095_022928dc(Unk_ov095_02292360 *s, void *p);
void func_ov095_02292ab8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292acc(Unk_ov095_02292360 *s);
void func_ov095_02292ad8(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292af4(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292b08(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292b6c(Unk_ov095_02292360 *s);
void func_ov095_02292b84(Unk_ov095_02292360 *s, s32 a);
void func_ov095_02292c0c(Unk_ov095_02292360 *s);
void func_ov095_02292c5c(Unk_ov095_02292360 *s, void *p);

void func_ov095_02292380(Unk_ov095_02292360 *s, s32 a)
{
    if (func_ov095_02292370(s, 0x200) == 0) {
        func_ov095_02292368(s, 0x200);
        s32 r = func_020501d4(a);
        switch (r) {
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
            r = data_020ca488;
        }
        if (r != data_020ca488) {
            func_02003f2c(r);
        } else {
            func_02003f2c(0x2c);
        }
    }
}

void func_ov095_022923ec()
{
    func_0200402c(0x17);
}

void func_ov095_022923f8()
{
    func_0200402c(0x16);
}

s32 func_ov095_02292404(Unk_ov095_02292360 *s)
{
    s32 st;
    if (func_ov095_022952c4(s, s->unk_14) != 0) {
        return -1;
    }
    st = s->unk_14;
    switch (st) {
    case 0xca:
        if (s->unk_02 == 1) return -1;
        break;
    case 0xcc:
        if (s->unk_02 == 2) return -1;
        break;
    case 0xcb:
        if (s->unk_02 == 3) return -1;
        break;
    }
    s->unk_10 = st;
    return s->unk_14;
}

s32 func_ov095_02292458(Unk_ov095_02292360 *s, void *p)
{
    s32 old = s->unk_14;
    s->unk_2f = 0;
    func_ov095_02292360(s, 0x10);
    switch (s->unk_02) {
    case 0:
        break;
    case 1:
        func_ov095_0229309c(s, p);
        break;
    case 2:
        func_ov095_02292e50(s, p);
        break;
    case 3:
        func_ov095_02292c5c(s, p);
        break;
    }
    if (func_ov095_02292370(s, 0x10) != 0) {
        return 4;
    }
    if (old != s->unk_14) {
        func_ov095_022933d4(s);
        if (func_ov095_022952a0(s, s->unk_14) != 0) {
            return 2;
        }
        if (func_ov095_02295270(s, s->unk_14) != 0) {
            return 3;
        }
        return 1;
    }
    return 0;
}

void func_ov095_022924f0(Unk_ov095_02292360 *s)
{
    switch (s->unk_02) {
    case 0:
        s->unk_14 = 0;
        func_ov095_022935bc(s);
        break;
    case 1:
        s->unk_14 = 0x3b;
        func_ov095_022934f8(s);
        break;
    case 2:
        s->unk_14 = 0x70;
        func_ov095_02293470(s);
        break;
    case 3:
        s->unk_14 = 0x92;
        func_ov095_02293410(s);
        break;
    }
}

void func_ov095_0229253c(Unk_ov095_02292360 *s, s32 a, s32 b)
{
    s->unk_20 = a;
    s->unk_24 = b;
}

s32 func_ov095_02292544(Unk_ov095_02292360 *s)
{
    if (s->unk_14 == 0xd5) {
        s->unk_1c = s->unk_24;
        return s->unk_1c;
    }
    if (func_ov095_02294a2c(s, s->unk_14) != -1) {
        return s->unk_1c;
    }
    if (func_ov095_02292370(s, 4) == 0) {
        return s->unk_1c - 8;
    }
    return s->unk_1c;
}

s32 func_ov095_02292580(Unk_ov095_02292360 *s)
{
    if (s->unk_14 == 0xd5) {
        s->unk_18 = s->unk_20;
    }
    switch (s->unk_2f) {
    case 1:
        return s->unk_18 - 0x100;
    case 2:
        return s->unk_18 + 0x100;
    }
    return s->unk_18;
}

BOOL func_ov095_022925b4(Unk_ov095_02292360 *s, void *p)
{
    BOOL r;
    if (func_ov095_022928dc(s, p) != 0) {
        return TRUE;
    }
    r = FALSE;
    switch (s->unk_2e) {
    case 0:
        r = func_ov095_02292830(s, p);
        break;
    case 1:
    case 2:
        r = func_ov095_022926dc(s, p);
        break;
    case 3:
        break;
    case 4:
    case 5:
        r = func_ov095_02292614(s, p);
        break;
    }
    return r;
}

BOOL func_ov095_02292614(Unk_ov095_02292360 *s, void *p)
{
    if (s->unk_14 == 0xd9) {
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x2c;
                break;
            case 1:
                s->unk_14 = 0x6e;
                break;
            case 2:
                s->unk_14 = 0x90;
                break;
            case 3:
                s->unk_14 = 0xc8;
                break;
            }
        } else if (s->unk_2e == 5) {
            if (func_ov002_0220126c(p) != 0) {
                s->unk_14 = 0xda;
            }
        }
        return TRUE;
    } else if (s->unk_14 == 0xda) {
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x18;
                break;
            case 1:
                s->unk_14 = 0x6b;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc3;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd9;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022926dc(Unk_ov095_02292360 *s, void *p)
{
    s32 st = s->unk_14;
    if (st == 0xd5) {
        if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0xdc;
        }
        return TRUE;
    }
    switch (st) {
    case 0xd6:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x2c;
                break;
            case 1:
                s->unk_14 = 0x6e;
                break;
            case 2:
                s->unk_14 = 0x90;
                break;
            case 3:
                s->unk_14 = 0xc8;
                break;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            func_ov095_02293350(s);
        }
        return TRUE;
    case 0xd7:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0xe;
                break;
            case 1:
                s->unk_14 = 0x69;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc0;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd6;
        }
        return TRUE;
    case 0xd8:
        if (func_ov002_0220128c(p) != 0) {
            switch (s->unk_02) {
            case 0:
                s->unk_14 = 0x13;
                break;
            case 1:
                s->unk_14 = 0x6b;
                break;
            case 2:
                s->unk_14 = 0x91;
                break;
            case 3:
                s->unk_14 = 0xc2;
                break;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xd6;
        }
        return TRUE;
    default:
        if (st == 0xd7 || st == 0xd8) {
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xd5;
            } else if (func_ov002_0220125c(p) != 0) {
                s->unk_14 = 0xd6;
            }
            return TRUE;
        }
        return FALSE;
    }
}

BOOL func_ov095_02292830(Unk_ov095_02292360 *s, void *p)
{
    if (s->unk_14 == 0xc9) {
        if (func_ov002_0220127c(p) != 0) {
            s->unk_14 = 0xdc;
        } else if (func_ov002_0220128c(p) != 0) {
            s->unk_14 = func_ov090_02291944(s->unk_18) + 0xcd;
        } else if (func_ov002_0220126c(p) != 0) {
            func_ov095_02292368(s, 0x10);
        }
        return TRUE;
    }
    if (func_ov095_022952b4(s, s->unk_14) != 0) {
        if (func_ov002_0220127c(p) != 0) {
            if (s->unk_14 >= 0xd3) {
                s->unk_14 = 0xc9;
            } else {
                func_ov095_02292368(s, 0x10);
            }
            return TRUE;
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < 0xd4) {
                s->unk_14++;
            }
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xcd) {
                s->unk_14--;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov095_022928dc(Unk_ov095_02292360 *s, void *p)
{
    switch (s->unk_14) {
    case 0xca:
    case 0xcb:
    case 0xcc:
        if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < 0xcc) {
                s->unk_14++;
            } else if (s->unk_04 != 0) {
                s->unk_14 = 0xde;
            } else {
                s->unk_14 = 0xdc;
            }
            return TRUE;
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xca) {
                s->unk_14--;
            } else {
                s->unk_14 = 0xdb;
            }
            return TRUE;
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        }
        return TRUE;
    case 0xdb:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xca;
        } else if (func_ov002_0220126c(p) != 0) {
            s->unk_14 = 0xdc;
            s->unk_2f = 1;
        }
        return TRUE;
    case 0xdc:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_04 != 0) {
                s->unk_14 = s->unk_04 + 0xdd;
            } else {
                s->unk_14 = 0xcc;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            s->unk_14 = 0xdb;
            s->unk_2f = 2;
        }
        return TRUE;
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
        if (func_ov002_0220128c(p) != 0) {
            func_ov095_02292c0c(s);
        } else if (func_ov002_0220127c(p) != 0) {
            func_ov095_02292b08(s, s->unk_18);
        } else if (func_ov002_0220126c(p) != 0) {
            if (s->unk_14 > 0xde) {
                s->unk_14--;
            } else {
                s->unk_14 = 0xcc;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (s->unk_14 < s->unk_04 + 0xdd) {
                s->unk_14++;
            } else {
                s->unk_14 = 0xdc;
            }
        }
        return TRUE;
    }
    return FALSE;
}

void func_ov095_02292ab8(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02292b84(s, a);
    func_ov095_022933d4(s);
}

void func_ov095_02292acc(Unk_ov095_02292360 *s)
{
    s->unk_14 = 0xc9;
    func_ov095_022933d4(s);
}

void func_ov095_02292ad8(Unk_ov095_02292360 *s, s32 a)
{
    s->unk_14 = func_ov090_02291944(a) + 0xcd;
    func_ov095_022933d4(s);
}

void func_ov095_02292af4(Unk_ov095_02292360 *s, s32 a)
{
    func_ov095_02292b84(s, a);
    func_ov095_022933d4(s);
}

void func_ov095_02292b08(Unk_ov095_02292360 *s, s32 a)
{
    u32 mode = s->unk_02;
    u32 off = mode << 2;
    s32 lo = *(s32 *)((u8 *)data_ov095_02295484 + off);
    s32 v;
    if (a < lo) {
        if (mode == 0) {
            s->unk_14 = 0x32;
            func_ov095_022933d4(s);
            return;
        }
        a = lo;
    }
    v = (a - lo) / 0x14;
    if (mode == 0) {
        v *= 5;
    }
    a = v + data_ov095_02295474[mode];
    if (a > data_ov095_02295454[mode]) {
        a = *(s32 *)((u8 *)data_ov095_02295464 + off);
    }
    s->unk_14 = a;
    func_ov095_022933d4(s);
}

void func_ov095_02292b6c(Unk_ov095_02292360 *s)
{
    func_ov095_02292b84(s, func_ov095_02292580(s));
}

void func_ov095_02292b84(Unk_ov095_02292360 *s, s32 a)
{
    s32 best, d, i;
    if (a < 0x80) {
        s->unk_14 = 0xdb;
        best = a - 0x18;
    } else {
        s->unk_14 = 0xdc;
        best = a - 0xe8;
    }
    for (i = 0; i < 3; i++) {
        d = a - func_ov095_022937a8(s, i + 0xca);
        if (d < 0) d = -d;
        if (d < best) {
            best = d;
            s->unk_14 = i + 0xca;
        }
    }
    if (func_ov095_02292370(s, 4) != 0) {
        if (best < 0) best = -best;
        for (i = 0; i < s->unk_04; i++) {
            d = a - func_ov095_022936f4(s, i + 0xde);
            if (d < 0) d = -d;
            if (d < best) {
                best = d;
                s->unk_14 = i + 0xde;
            }
        }
    }
}

void func_ov095_02292c0c(Unk_ov095_02292360 *s)
{
    switch (s->unk_2e) {
    case 0:
        if (s->unk_14 == 0xdc) {
            s->unk_14 = 0xc9;
        } else {
            func_ov095_02292368(s, 0x10);
        }
        break;
    case 1:
    case 2:
        s->unk_14 = 0xd5;
        break;
    case 3:
    case 4:
    case 5:
        func_ov095_02292368(s, 0x10);
        break;
    }
}

void func_ov095_02292c5c(Unk_ov095_02292360 *s, void *p)
{
    s32 st, lo;
    if (p == NULL) return;
    if (func_ov095_022925b4(s, p) != 0) return;
    st = s->unk_14;
    if (st < 0x92) return;
    if (st > 0xc8) return;
    if (st <= 0xc5) {
        st -= 0x92;
        lo = st % 0xb;
        st = st / 0xb;
        if (func_ov002_0220128c(p) != 0) {
            if (st > 0) {
                st--;
            } else {
                func_ov095_02292b6c(s);
                return;
            }
        } else if (func_ov002_0220127c(p) != 0) {
            if (st < 4) {
                st++;
            } else {
                func_ov095_02293350(s);
                return;
            }
        }
        if (func_ov002_0220126c(p) != 0) {
            if (lo > 0) {
                lo--;
            } else {
                s->unk_2f = 1;
                if (st < 2) {
                    s->unk_14 = 0xc6;
                } else if (st < 4) {
                    s->unk_14 = 0xc7;
                } else {
                    s->unk_14 = 0xc8;
                }
                return;
            }
        } else if (func_ov002_0220125c(p) != 0) {
            if (lo < 10) {
                lo++;
            } else {
                if (st < 2) {
                    s->unk_14 = 0xc6;
                } else if (st < 4) {
                    s->unk_14 = 0xc7;
                } else {
                    s->unk_14 = 0xc8;
                }
                return;
            }
        }
        st = lo + st * 0xb + 0x92;
        if (st > 0xc5) st = 0xc8;
        s->unk_14 = st;
        return;
    }
    if (func_ov002_0220125c(p) != 0) {
        s->unk_2f = 2;
        switch (s->unk_14) {
        case 0xc6:
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0x9d;
            } else {
                s->unk_14 = 0x92;
            }
            break;
        case 0xc7:
            if (func_ov002_0220128c(p) != 0) {
                s->unk_14 = 0x9d;
            } else if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xb3;
            } else {
                s->unk_14 = 0xa8;
            }
            break;
        case 0xc8:
            s->unk_14 = 0xbe;
            break;
        }
    } else if (func_ov002_0220126c(p) != 0) {
        switch (s->unk_14) {
        case 0xc6:
            if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xa7;
            } else {
                s->unk_14 = 0x9c;
            }
            break;
        case 0xc7:
            if (func_ov002_0220128c(p) != 0) {
                s->unk_14 = 0xa7;
            } else if (func_ov002_0220127c(p) != 0) {
                s->unk_14 = 0xbd;
            } else {
                s->unk_14 = 0xb2;
            }
            break;
        case 0xc8:
            s->unk_14 = 0xc5;
            break;
        }
    } else if (func_ov002_0220128c(p) != 0) {
        st = s->unk_14;
        if (st == 0xc6) {
            func_ov095_02292b6c(s);
        } else if (st == 0xc7) {
            s->unk_14 = 0xc6;
        } else {
            s->unk_14 = 0xbd;
        }
    } else if (func_ov002_0220127c(p) != 0) {
        if (s->unk_14 < 0xc8) {
            s->unk_14++;
        } else {
            func_ov095_022933a4(s);
        }
    }
}

void func_ov095_02292360(Unk_ov095_02292360 *s, u32 m)
{
    s->flags &= ~m;
}

void func_ov095_02292368(Unk_ov095_02292360 *s, u32 m)
{
    s->flags |= m;
}

BOOL func_ov095_02292370(Unk_ov095_02292360 *s, u32 m)
{
    if (s->flags & m) return TRUE;
    return FALSE;
}
}
