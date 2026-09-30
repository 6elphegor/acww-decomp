#include "types.h"

struct Unk_ov111_02296840 {
    u8 pad_000[0x8c];
    u8 unk_08c;
    u8 unk_08d;
    u8 pad_08e[0x98 - 0x8e];
    u8 unk_098;
    u8 pad_099[0x9e - 0x99];
    u8 unk_09e;
    u8 unk_09f;
    u8 unk_0a0;
    u8 pad_0a1;
    u8 unk_0a2;
    u8 pad_0a3[0xac - 0xa3];
    u8 unk_0ac[0x3caa - 0xac];
    u8 unk_3caa[0x3ccc - 0x3caa];
    u8 unk_3ccc[0x64];
};

typedef Unk_ov111_02296840 S;

extern u8 data_021edb68;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[2];
extern u32 data_021f482c;
extern u8 data_ov111_022989c8[];
extern u8 data_ov111_02298aa8[];
extern u8 data_ov111_02298ac0[];

static inline BOOL Both()
{
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
void func_ov002_02200a58(S *s, s32 v);
void func_ov002_02200a60(S *s, s32 v);
void func_ov002_02200a50(S *s, s32 v);
void func_ov002_02200a68(S *s);
s32 func_ov002_02200a14(S *s, s32 v);
s32 func_ov002_022009c8(S *s);
s32 func_ov002_022009d4(S *s);
void func_ov002_02200980(S *s);
s32 func_ov002_022008fc(S *s, s32 v);
s32 func_ov002_02200908(S *s, s32 v);
void func_ov002_02200840(S *s, s32 a, s32 b, s32 c);
void func_ov002_022008c4(S *s, s32 a, s32 b, s32 c, s32 d);
void func_ov002_022008e0(S *s, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02204394(void *p, void *q, u32 w, s32 z);
s32 func_ov002_0220288c(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202c40(void *p);
s32 func_ov002_022028f0(void *p);

u32 func_ov095_02293924(void *p);
void func_ov095_02293dc0(void *p);
void func_ov094_02292acc(void *p);
void func_ov095_02292ad8(void *p, s32 v);
void func_ov095_02292af4(void *p, s32 v);
s32 func_ov095_022942e8(void *p);
s32 func_ov095_02294a40(void *p);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02295194(void *p);
s32 func_ov095_02292404(void *p);
void func_ov094_02294318(void *p);
s32 func_ov095_02292458(void *p, s32 v);
s32 func_ov095_02294324(void *p);
s32 func_ov095_02293990(void *p);
s32 func_ov095_0229394c(void *p);
void func_ov095_0229483c(void *p, s32 v);
void func_ov094_02293c1c(void *p);
void func_ov095_02293cc0(void *p);
void func_ov095_022943dc(void *p, void *q);
void func_ov095_022943b4(void *p, s32 v);
void func_ov095_02293944(void *p);

s32 func_ov090_02291a38(s32 v);
s32 func_ov090_02291a58(s32 v);
s32 func_ov090_02291aa0();
void func_ov090_02291d8c(void *p, u32 v);

s32 func_ov111_02296958(S *s, s32 v);
s32 func_ov111_02296968(S *s, s32 v);
s32 func_ov111_02296978(S *s, s32 v);
s32 func_ov111_02296a24(S *s);
s32 func_ov111_02296a30(S *s, s32 v);
s32 func_ov111_02296a44(S *s);
s32 func_ov111_02296a6c(S *s);
s32 func_ov111_02296aac(S *s);
s32 func_ov111_02296b04(S *s);
s32 func_ov111_02296b78(S *s);
s32 func_ov111_02296b9c(S *s);
s32 func_ov111_02296bec(S *s);
s32 func_ov111_02296c28(S *s);
s32 func_ov111_02296c88(S *s);
s32 func_ov111_02296cf0(S *s);
s32 func_ov111_02296d4c(S *s);
s32 func_ov111_02296dd0(S *s, s32 v);
s32 func_ov111_02296e64(S *s);
s32 func_ov111_02296ec0(S *s);
s32 func_ov111_02296f58(S *s);
s32 func_ov111_02296f9c(S *s);
s32 func_ov111_0229698c(S *s);
s32 func_ov111_022970cc(S *s, s32 v);
s32 func_ov111_02297044(S *s);
s32 func_ov111_02297070(S *s);
s32 func_ov111_022976bc(S *s);
s32 func_ov111_02298620(S *s);

s32 func_0206ef0c();
void func_0206e5a4(void *p);
void func_0206e594();
void func_0206e63c();
s32 func_0206e61c();
void func_0200402c(s32 v);
void func_02094810(void *p);
s32 func_0208d4fc(void *p);
void func_0200212c(s32 v);
void func_020020b8(s32 v);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void *func_020ed174(void *p);

void func_ov111_02297c58(S *s);
void func_ov111_02297c30(S *s);
void func_ov111_02297bec(S *s);
void func_ov111_02297c10(S *s);
void func_ov111_02298310(S *s);
void func_ov111_02298364(S *s);
void func_ov111_022983c4(S *s);
void func_ov111_0229842c();
BOOL func_ov111_0229844c(S *s, s32 a, u32 b);
}

extern "C" {

void func_ov111_02297bb0(S *s, u32 v, u32 w)
{
    volatile u8 b = data_021edb68;
    b = v;
    func_ov002_02204394(s->unk_3ccc + 0x64, (void *)&b, w, 0);
    func_ov002_02200a58(s, 0xf);
    func_ov111_02296b78(s);
}

void func_ov111_02297bec(S *s)
{
    u8 b = func_ov095_02293924(s->unk_0ac);
    func_02094810(&b);
    s->unk_0a2 = 0x14;
}

void func_ov111_02297c10(S *s)
{
    if (func_0206ef0c() != 0) {
        func_ov111_02297c58(s);
    } else {
        func_ov111_02297c30(s);
    }
}

void func_ov111_02297c30(S *s)
{
    func_ov002_02200980(s);
    func_ov111_02296b9c(s);
    func_ov002_02200a58(s, 3);
    func_ov111_022976bc(s);
    func_ov111_0229698c(s);
}

void func_ov111_02297c58(S *s)
{
    func_ov111_02296b78(s);
    func_ov002_02200a58(s, 0);
}

void func_ov111_02297c70(S *s)
{
    if ((data_021f47d8[0] & 0x100) == 0) {
        func_ov002_02200a58(s, s->unk_098);
        func_ov111_0229698c(s);
    }
}

void func_ov111_02297ca0(S *s)
{
    if ((data_021f47d8[0] & 0x200) == 0) {
        func_ov002_02200a58(s, s->unk_098);
        func_ov111_0229698c(s);
    }
}

void func_ov111_02297cd0(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(s, 9);
        if (s->unk_09f == s->unk_0a0) {
            func_ov111_02296958(s, 1);
        }
    } else if (func_ov111_02296dd0(s, func_ov002_022009c8(s)) == 1) {
        func_ov095_02293dc0(s->unk_0ac);
        func_ov111_02296ec0(s);
        s->unk_0a0 = s->unk_09e;
        func_ov111_02296aac(s);
        func_0200402c(0x15);
    }
    func_ov111_022976bc(s);
    func_ov111_0229698c(s);
}

void func_ov111_02297d4c(S *s)
{
    if (func_ov002_022009d4(s) != 0) {
        func_ov111_02297c58(s);
        return;
    }
    switch (func_ov111_02296dd0(s, func_ov002_022009c8(s))) {
    case 1:
        func_ov095_02293dc0(s->unk_0ac);
        func_ov111_02296e64(s);
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
        func_ov111_02296aac(s);
        func_0200402c(0xb);
        break;
    case 4:
        func_ov094_02292acc(s->unk_0ac);
        func_ov111_02296958(s, 2);
        func_ov002_02200a58(s, 3);
        func_ov111_02296b04(s);
        break;
    case 2:
        func_ov095_02292ad8(s->unk_0ac, func_ov002_0220288c(s->unk_3ccc));
        func_ov111_02296958(s, 2);
        func_ov002_02200a58(s, 3);
        func_ov002_02202be0(s->unk_3ccc);
        func_ov111_02296b04(s);
        break;
    case 3:
        func_ov095_02292af4(s->unk_0ac, func_ov002_0220288c(s->unk_3ccc));
        func_ov111_02296958(s, 2);
        func_ov002_02200a58(s, 3);
        func_ov111_02296b04(s);
        break;
    case 0:
    default:
        if (func_ov111_02296c28(s) != 0) {
            return;
        }
        if (func_ov111_02296c88(s) != 0) {
            return;
        }
        {
            u8 old = s->unk_09e;
            if (func_ov111_02296cf0(s) != 0) {
                if (old != s->unk_09e) {
                    func_ov111_02296aac(s);
                }
            } else if ((data_021f47d8[1] & 1) != 0) {
                func_ov002_02200a58(s, 0xa);
                func_ov111_02296968(s, 1);
                s->unk_09f = s->unk_09e;
                s->unk_0a0 = s->unk_09e;
            } else if (func_ov111_02296bec(s) != 0) {
                return;
            }
        }
        break;
    }
}

void func_ov111_02297eb4(S *s)
{
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov002_02200a58(s, s->unk_098);
    } else if (func_ov095_022942e8(s->unk_0ac) != 0) {
        func_ov111_022970cc(s, 0x100);
        if (func_ov111_02296978(s, 2) != 0) {
            func_ov111_02296aac(s);
        }
    }
}

void func_ov111_02297f00(S *s)
{
    if (func_0208d4fc(s->unk_3ccc) != 0) {
        func_ov111_02296a44(s);
    }
}

void func_ov111_02297f20(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov095_02295194(s->unk_0ac);
        func_ov111_02296a6c(s);
    } else if (func_ov095_022942e8(s->unk_0ac) != 0) {
        s32 r5 = func_ov095_02294a40(s->unk_0ac);
        func_ov111_022970cc(s, func_ov095_02294864(s->unk_0ac, r5, 8));
        func_ov095_02294d40(s->unk_0ac, r5);
    }
}

void func_ov111_02297f84(S *s)
{
    if (func_0208d4fc(s->unk_3ccc) != 0) {
        s32 r6 = func_ov095_02292404(s->unk_0ac);
        s32 r4 = func_ov111_022970cc(s, func_ov095_02294864(s->unk_0ac, r6, 8));
        if (r4 != 3) {
            if (r4 == 1 && (data_021f47d8[0] & 1) != 0) {
                func_ov094_02294318(s->unk_0ac);
                func_ov002_02200a58(s, 6);
                func_ov095_02294d40(s->unk_0ac, r6);
            } else {
                func_ov095_02295194(s->unk_0ac);
                if (r4 != 4) {
                    func_ov111_02296a6c(s);
                }
            }
        }
    }
}

void func_ov111_02298004(S *s)
{
    if (func_ov002_022028f0(s->unk_3ccc) == 0) {
        func_ov002_02200a58(s, s->unk_098);
        func_ov111_02298620(s);
    }
}

void func_ov111_02298030(S *s)
{
    if (func_ov002_022009d4(s) != 0) {
        func_ov111_02297c58(s);
        return;
    }
    switch (func_ov095_02292458(s->unk_0ac, func_ov002_022009c8(s))) {
    case 1:
        func_ov002_02202c40(s->unk_3ccc);
        func_ov111_02296b04(s);
        break;
    case 2:
        func_ov002_02202be0(s->unk_3ccc);
        func_ov111_02296b04(s);
        break;
    case 4:
        func_ov002_02202c40(s->unk_3ccc);
        func_ov111_02296968(s, 2);
        func_ov002_02200a58(s, 9);
        func_ov111_02296b04(s);
        break;
    case 0:
    case 3:
    default:
        if (func_ov111_02296d4c(s) != 0) {
            return;
        }
        if (func_ov111_02296cf0(s) != 0) {
            return;
        }
        if (func_ov111_02296bec(s) != 0) {
            return;
        }
        {
            u32 t = data_021f47d8[1];
            if ((t & 0x100) != 0) {
                func_ov111_0229844c(s, func_ov090_02291a38(4), 0);
            } else if ((t & 0x200) != 0) {
                func_ov111_0229844c(s, func_ov090_02291a58(4), 0);
            }
        }
        break;
    }
}

void func_ov111_0229811c(S *s)
{
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
        if (s->unk_09f == s->unk_0a0) {
            func_ov111_02296958(s, 1);
        }
    } else {
        func_ov111_02296f58(s);
    }
    func_ov111_022976bc(s);
}

void func_ov111_0229815c(S *s)
{
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
    } else if (func_ov095_022942e8(s->unk_0ac) != 0) {
        s32 r5 = func_ov095_02294a40(s->unk_0ac);
        func_ov111_022970cc(s, func_ov095_02294864(s->unk_0ac, r5, 8));
        func_ov095_02294d40(s->unk_0ac, r5);
    }
}

void func_ov111_022981b0(S *s)
{
    if (func_ov002_02200a14(s, 1) != 0) {
        func_ov111_02297c30(s);
    } else if (func_ov095_02294324(s->unk_0ac) == 0) {
        if (Both()) {
            s32 r = func_ov111_02297070(s);
            if (r != 0) {
                if (r == 1) {
                    func_ov002_02200a58(s, 1);
                }
            } else {
                if (func_ov095_02293990(s->unk_0ac) != 0) {
                    func_ov111_02296a30(s, 8);
                    func_ov111_022976bc(s);
                } else if (func_ov111_02297044(s) != 0) {
                    func_ov002_02200a58(s, 0xd);
                } else if (s->unk_0a2 == 0 && func_ov095_0229394c(s->unk_0ac) != 0) {
                    func_ov111_02297bec(s);
                    func_ov002_02200a58(s, 0);
                } else if (func_ov111_02296f9c(s) != 0) {
                    func_ov111_0229698c(s);
                    func_ov002_02200a58(s, 2);
                }
            }
        }
    }
}

void func_ov111_02298280(S *s)
{
    if (func_ov002_022008fc(s, 0) != 0) {
        func_0200212c(6);
        func_ov002_02200a60(s, 5);
    } else {
        func_ov002_02200840(s, 6, 0, 0);
    }
}

void func_ov111_022982b0(S *s)
{
    func_ov002_022008c4(s, 8, 0, 0, 0x30);
    func_ov002_02200840(s, 6, 0, 0);
    s->unk_08c = 5;
}

void func_ov111_022982e0(S *s)
{
    if (func_ov002_02200908(s, 0) != 0) {
        func_ov002_02200a60(s, 2);
        func_ov111_02297c10(s);
    }
    func_ov002_02200840(s, 6, 0, 0);
}

void func_ov111_02298310(S *s)
{
    func_ov095_0229483c(s->unk_0ac, 6);
    func_ov111_02296a24(s);
    func_ov111_02296968(s, 4);
    func_ov002_022008e0(s, 8, 3, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(s, 6, 0, 0);
    func_ov002_02200a50(s, 3);
    func_ov111_022976bc(s);
}

void func_ov111_02298364(S *s)
{
    func_ov094_02293c1c(s->unk_0ac);
    func_ov111_022983c4(s);
    func_ov002_02200a50(s, 2);
    if (func_ov111_02296978(s, 0x20) == 0) {
        func_ov111_02298310(s);
    }
}

void func_ov111_02298394(S *s)
{
    func_ov111_0229842c();
    func_ov095_02293cc0(s->unk_0ac);
    func_ov002_02200a50(s, 1);
    if (func_ov111_02296978(s, 0x20) == 0) {
        func_ov111_02298364(s);
    }
}

void func_ov111_022983c4(S *s)
{
    u32 r4 = data_021f482c;
    func_020026c4(data_ov111_02298aa8, r4, 6, 1, 1, 9);
    func_ov095_022943dc(s->unk_0ac, data_ov111_022989c8);
    func_ov111_0229698c(s);
    func_ov095_022943b4(s->unk_0ac, 6);
    func_0200261c(data_ov111_02298ac0, r4, 6, 0x13d, 0x13d, 0x1e9);
}

void func_ov111_0229842c()
{
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

BOOL func_ov111_0229844c(S *s, s32 a, u32 b)
{
    void *p = func_020ed174(s);
    if (a != -1 && a != 4) {
        func_ov090_02291d8c(p, (u8)a);
        func_ov111_02296b78(s);
        s->unk_08c = 4;
        func_ov002_02200a60(s, 1);
        if (a == 7) {
            func_ov111_02296968(s, 0x10);
        }
        if (b != 0) {
            func_0206e5a4(s->unk_3caa);
        } else {
            func_0206e594();
        }
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov111_022984b0(S *s)
{
    func_0206e63c();
    if (func_0206e61c() != 0) {
        switch (s->unk_08d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            return func_ov111_0229844c(s, 7, 1);
        case 4:
        default:
            break;
        }
    }
    if (s->unk_08d != 0 && s->unk_08d != 3 && s->unk_08d != 9) {
        return FALSE;
    }
    s32 r5 = -1;
    if (func_0206ef0c() != 0) {
        r5 = func_ov090_02291aa0();
    } else {
        u32 t = data_021f47d8[1];
        if ((t & 4) != 0) {
            r5 = 7;
        } else if ((t & 0x800) != 0) {
            r5 = 0;
        } else if ((t & 0x400) != 0) {
            r5 = 5;
        }
    }
    return func_ov111_0229844c(s, r5, 0);
}

}
