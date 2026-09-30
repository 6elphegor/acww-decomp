#include "types.h"

struct Unk_ov122_02296840 {
    u8 pad_000[0x8c];
    u8 unk_08c;
    u8 unk_08d;
    u8 pad_08e[0x9c - 0x8e];
    u32 unk_09c;
    u32 unk_0a0;
    u8 pad_0a4[0xac - 0xa4];
    u8 unk_0ac;
    u8 unk_0ad;
    u8 unk_0ae;
    u8 pad_0af[0xb4 - 0xaf];
    u8 unk_0b4;
    u8 unk_0b5;
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 pad_0b9[0xbc - 0xb9];
    u32 unk_0bc;
    u8 unk_0c0[0x3c7c - 0xc0];
    u8 unk_3c7c[0x3e8c - 0x3c7c];
    u8 unk_3e8c[0x3ed4 - 0x3e8c];
    u8 unk_3ed4[0x4104 - 0x3ed4];
    u8 unk_4104[0x43f8 - 0x4104];
    u8 unk_43f8[0x455c - 0x43f8];
    u8 unk_455c[0x40];
};

typedef Unk_ov122_02296840 S;

extern u16 data_021f47d8[];
extern u8 data_ov122_0229a004[];

extern "C" {
void func_0200402c(s32 a);
BOOL func_0206e61c();
BOOL func_0206ef00();
void func_0206d288(void *p, u32 a);
BOOL func_0208d534(void *p);
BOOL func_0208d4fc(void *p);
BOOL func_0208d9a8(void *p);

s32 func_ov095_02292404(void *p);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02294318(void *p);
void func_ov095_02294324(void *p);
BOOL func_ov095_02293da0(void *p);
void func_ov095_02293dc0(void *p);
BOOL func_ov095_022942e8(void *p);
s32 func_ov095_02294a40(void *p);
void func_ov095_02295194(void *p);

void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
s32 func_ov002_022009d4(void *self);
s32 func_ov002_022009c8(void *self);
BOOL func_ov002_0220125c(s32 p);
BOOL func_ov002_0220126c(s32 p);
void func_ov002_02202b68(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202f00(void *p);
void func_ov002_02202e48(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
s32 func_ov002_022013e4(void *p, u32 a, u32 b);
u32 func_ov002_02201490(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, s32 a);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02201a3c(void *p, u32 a);
u32 func_ov002_0220144c(void *p, u32 a, u32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
BOOL func_ov002_022028f0(void *p);

s32 func_ov122_022985d8(S *s, s32 a);
s32 func_ov122_02296b34(S *s);
s32 func_ov122_022979e8(S *s);
s32 func_ov122_0229882c(S *s);
s32 func_ov122_0229699c(S *s);
s32 func_ov122_022998b0(S *s, s32 a);
s32 func_ov122_02298fbc(S *s, s32 a, s32 b);
s32 func_ov122_02296c70(S *s);
s32 func_ov122_02296a7c(S *s, s32 a);
BOOL func_ov122_02296988(S *s, s32 a);
s32 func_ov122_02299870(S *s);
s32 func_ov122_022978c0(S *s);
s32 func_ov122_02297928(S *s);
s32 func_ov122_02296978(S *s, s32 a);
s32 func_ov122_02296a48(S *s);
s32 func_ov122_02296aa4(S *s);
s32 func_ov122_02297994(S *s);
s32 func_ov122_02296ce8(S *s, s32 a);
s32 func_ov122_02296bbc(S *s, s32 a, s32 b);
s32 func_ov122_02296b10(S *s);
s32 func_ov122_02296968(S *s, s32 a);
s32 func_ov122_022975c0(S *s);
s32 func_ov122_02296e28(S *s);
s32 func_ov122_02298ec4(S *s);
BOOL func_ov122_02297020(S *s, s32 a, s32 b);
s32 func_ov122_02297340(S *s);
s32 func_ov122_02296b54(S *s);
s32 func_ov122_02297a24(S *s);
s32 func_ov122_022972f4(S *s);
s32 func_ov122_022972dc(S *s);
BOOL func_ov122_02297b30(S *s);
s32 func_ov122_02297a68(S *s);
s32 func_ov122_02297ac8(S *s);
s32 func_ov122_02297a3c(S *s);
s32 func_ov122_02296af0(S *s);
s32 func_ov122_022999b0(S *s);
}

extern "C" {

BOOL func_ov122_02297bcc(S *s)
{
    if ((data_021f47d8[0] & 2) == 0) {
        return FALSE;
    }
    func_ov122_022985d8(s, 0x100);
    func_ov095_02294318(s->unk_0c0);
    s->unk_0b4 = s->unk_08d;
    func_ov002_02200a58(s, 0xb);
    return TRUE;
}

BOOL func_ov122_02297c14(S *s)
{
    s32 r4;

    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    r4 = func_ov095_02292404(s->unk_0c0);
    if (r4 == -1) {
        return FALSE;
    }
    func_ov095_02294864(s->unk_0c0, r4, 8);
    func_ov095_02294d40(s->unk_0c0, r4);
    func_ov122_02296b34(s);
    return TRUE;
}

void func_ov122_02297c68(S *s)
{
    func_ov095_02294324(s->unk_0c0);
    if (func_ov002_02204234(s->unk_455c, 1)) {
        func_ov122_022979e8(s);
    }
}

void func_ov122_02297c90(S *s)
{
    s32 a;
    s32 b;
    s32 c;

    if (func_0208d534(s->unk_3ed4)) {
        if (!func_0208d4fc(s->unk_3ed4)) {
            return;
        }
    }
    if (func_ov002_0220308c(s->unk_43f8)) {
        if (!func_0208d534(s->unk_3ed4)) {
            return;
        }
        a = func_ov002_0220306c(s->unk_43f8);
        b = func_ov002_022030f4(s->unk_43f8, -1);
        c = func_ov002_022030b8(s->unk_43f8, -1);
        func_ov002_02202a40(s->unk_3ed4, a + b, a + c);
        return;
    }
    switch (s->unk_0b8) {
    case 0:
        s->unk_0b5 = 0xc;
        func_ov122_0229882c(s);
        break;
    case 1:
        s->unk_0b5 = 6;
        func_ov122_0229699c(s);
        func_ov122_0229882c(s);
        break;
    case 2:
        break;
    case 3:
        func_ov122_022998b0(s, 0);
        break;
    case 4:
        s->unk_08c = 8;
        func_ov002_02200a60(s, 1);
        func_ov122_02298fbc(s, 1, 1);
        break;
    }
    func_ov122_02296c70(s);
}

void func_ov122_02297d78(S *s)
{
    s32 r;

    if (!func_ov002_022017a4(s->unk_4104)) {
        return;
    }
    r = func_ov002_022013e4(s->unk_4104, s->unk_0bc, s->unk_0b6);
    switch (r) {
    case 1:
        func_0206d288(s->unk_3c7c, s->unk_0bc);
        func_ov122_02298fbc(s, 1, 0);
        s->unk_08c = 0xa;
        func_ov002_02200a60(s, 1);
        break;
    case 2:
        s->unk_0b7 = s->unk_0b7 + 1;
        if (s->unk_0b7 >= func_ov002_02201490(s->unk_4104)) {
            s->unk_0b7 = 0;
        }
        func_ov122_02296a7c(s, 0);
        break;
    case 3:
        if (func_ov122_02296988(s, 0x2000)) {
            func_ov122_02299870(s);
        } else {
            s->unk_08c = 0xa;
            func_ov002_02200a60(s, 1);
        }
        break;
    default:
        s->unk_08c = 0xa;
        func_ov002_02200a60(s, 1);
        break;
    }
}

void func_ov122_02297e50(S *s)
{
    if (func_ov002_02201a28(s->unk_4104)) {
        func_ov002_02202064(s->unk_4104, 0);
        func_ov002_02200a58(s, 0x18);
        func_ov122_02296c70(s);
    }
}

void func_ov122_02297e84(S *s)
{
    if (func_ov002_022017b4(s->unk_4104)) {
        if (func_0206ef00()) {
            func_ov122_022978c0(s);
        } else {
            func_ov122_02297928(s);
        }
    }
}

void func_ov122_02297eb4(S *s)
{
    if (func_0208d4fc(s->unk_3ed4)) {
        func_ov002_02201a3c(s->unk_4104, s->unk_0b6);
        s->unk_0b6 = func_ov002_0220144c(s->unk_4104, s->unk_0b7, s->unk_0b6);
        func_ov002_02200a58(s, 0x17);
    }
}

void func_ov122_02297f04(S *s)
{
    u32 f;

    if (func_0206e61c()) {
        func_ov122_02296978(s, 0x2000);
        func_ov122_02296a48(s);
    } else if (func_ov002_022009d4(s)) {
        func_ov122_02297928(s);
    } else {
        if (func_ov002_022019d0(s->unk_4104, func_ov002_022009c8(s), &s->unk_0b6, 0)) {
            func_ov122_02296aa4(s);
        }
        f = data_021f47d8[1];
        if (f & 1) {
            func_ov002_02202b68(s->unk_3ed4);
            func_ov002_02200a58(s, 0x15);
        } else if (f & 2) {
            func_ov122_02296a48(s);
        }
    }
}

void func_ov122_02297f98(S *s)
{
    s32 r4;
    s32 r6;
    s32 r5;
    u32 f;

    if (func_ov002_022009d4(s)) {
        func_ov122_02297994(s);
        return;
    }
    r4 = func_ov002_022009c8(s);
    if (data_021f47d8[1] & 1) {
        switch (s->unk_0b6) {
        case 0:
            func_ov122_02296ce8(s, 3);
            break;
        case 1:
            func_ov122_02296ce8(s, 4);
            break;
        }
        func_ov002_02202b68(s->unk_3ed4);
        return;
    }
    r6 = s->unk_0b6;
    if (func_ov002_0220126c(r4)) {
        if (s->unk_0b6 != 0) {
            s->unk_0b6 = *(volatile u8 *)&s->unk_0b6 - 1;
        }
    } else if (func_ov002_0220125c(r4)) {
        if (s->unk_0b6 < 1) {
            s->unk_0b6 = *(volatile u8 *)&s->unk_0b6 + 1;
        }
    }
    r4 = s->unk_0b6;
    if (r6 != r4) {
        r6 = func_ov002_022030f4(s->unk_43f8, data_ov122_0229a004[r4]);
        r5 = func_ov002_022030b8(s->unk_43f8, *(u8 *)((u32)data_ov122_0229a004 + r4));
        func_ov122_02296bbc(s, r6, r5);
    } else {
        f = data_021f47d8[1];
        if (f & 8) {
            func_ov122_02296c70(s);
            func_ov122_02296ce8(s, 3);
        } else if (f & 2) {
            func_ov122_02296c70(s);
            func_ov122_02296ce8(s, 4);
        }
    }
}

void func_ov122_022980b0(S *s)
{
    if (func_0208d9a8(s->unk_3e8c)) {
        func_ov122_02296b10(s);
        func_ov122_02296968(s, 0x200);
    }
}

void func_ov122_022980dc(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02202ef4(s->unk_3e8c);
        func_ov002_02200a58(s, 0x12);
        func_ov122_022975c0(s);
    } else {
        func_ov122_02296e28(s);
    }
}

void func_ov122_02298118(S *s)
{
    if (func_0208d9a8(s->unk_3e8c)) {
        func_ov002_02200a58(s, 0x11);
    }
}

void func_ov122_0229813c(S *s)
{
    if ((data_021f47d8[0] & 0x100) == 0) {
        func_ov002_02200a58(s, s->unk_0b4);
        func_ov122_02298ec4(s);
    }
}

void func_ov122_0229816c(S *s)
{
    if ((data_021f47d8[0] & 0x200) == 0) {
        func_ov002_02200a58(s, s->unk_0b4);
        func_ov122_02298ec4(s);
    }
}

void func_ov122_0229819c(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(s, 0xc);
        if (s->unk_0ad == s->unk_0ae) {
            func_ov122_02296968(s, 8);
        }
    } else {
        if (func_ov122_02297020(s, func_ov002_022009c8(s), 0)) {
            s->unk_0ae = s->unk_0ac;
            func_ov122_02298fbc(s, 0, 1);
            func_ov122_02297340(s);
            func_ov122_02296b54(s);
            func_0200402c(0x15);
        }
    }
}

void func_ov122_02298210(S *s)
{
    u32 a;
    u32 b;
    if (func_ov002_022009d4(s)) {
        func_ov122_02297a24(s);
        return;
    }
    if (func_ov122_02297020(s, func_ov002_022009c8(s), 1)) {
        if (func_ov095_02293da0(s->unk_0c0) || func_ov122_022972f4(s)) {
            func_ov095_02293dc0(s->unk_0c0);
            func_ov122_022972dc(s);
            func_ov122_02298fbc(s, 1, 1);
        } else {
            func_ov122_022972dc(s);
        }
        func_ov122_02297340(s);
        func_ov122_02296b54(s);
        func_ov122_02298ec4(s);
        func_0200402c(0xb);
    } else if (!func_ov122_02297b30(s)) {
        a = s->unk_09c;
        b = s->unk_0a0;
        if (func_ov122_02297bcc(s)) {
            if (a != s->unk_09c || b != s->unk_0a0) {
                func_ov122_02296b54(s);
            }
        } else {
            if (data_021f47d8[1] & 1) {
                func_ov002_02200a58(s, 0xd);
                func_ov122_02296978(s, 8);
                s->unk_0ad = s->unk_0ac;
                s->unk_0ae = s->unk_0ac;
            }
            if (func_ov122_02297a68(s)) {
                return;
            }
            if (func_ov122_02297ac8(s)) {
                return;
            }
            if (func_ov122_02297a3c(s)) {
                return;
            }
        }
    }
}

void func_ov122_02298320(S *s)
{
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov002_02200a58(s, s->unk_0b4);
    } else if (func_ov095_022942e8(s->unk_0c0)) {
        func_ov122_022985d8(s, 0x100);
        if (func_ov122_02296988(s, 0x100)) {
            func_ov122_02296b54(s);
        }
    }
}

void func_ov122_0229836c(S *s)
{
    if (func_0208d4fc(s->unk_3ed4)) {
        func_ov122_02296af0(s);
        func_ov002_02200a58(s, 6);
    }
}

void func_ov122_02298394(S *s)
{
    s32 r5;

    if ((data_021f47d8[0] & 1) == 0) {
        func_ov122_02296b10(s);
    } else if (func_ov095_022942e8(s->unk_0c0)) {
        r5 = func_ov095_02294a40(s->unk_0c0);
        func_ov122_022985d8(s, func_ov095_02294864(s->unk_0c0, r5, 8));
        func_ov095_02294d40(s->unk_0c0, r5);
    }
}

void func_ov122_022983ec(S *s)
{
    s32 r4;
    s32 t;
    s32 r;

    if (!func_0208d4fc(s->unk_3ed4)) {
        return;
    }
    r4 = func_ov095_02292404(s->unk_0c0);
    t = func_ov095_02294864(s->unk_0c0, r4, 8);
    if (t == 0x112) {
        func_ov002_02200a58(s, 0x10);
        func_ov002_02202f00(s->unk_3e8c);
        func_ov002_02202e48(s->unk_3e8c);
        if (func_ov122_022972f4(s)) {
            func_ov122_022972dc(s);
            func_ov122_02298fbc(s, 1, 1);
        } else {
            func_ov122_022972dc(s);
        }
        func_ov122_02296978(s, 0x200);
        return;
    }
    r = func_ov122_022985d8(s, t);
    if (r == 1 && (data_021f47d8[0] & 1)) {
        func_ov095_02294318(s->unk_0c0);
        func_ov002_02200a58(s, 9);
        func_ov095_02294d40(s->unk_0c0, r4);
    } else if (r == 3) {
    } else if (r == 4) {
        func_ov095_02295194(s->unk_0c0);
    } else {
        func_ov122_02296b10(s);
    }
}

void func_ov122_022984c8(S *s)
{
    if (!func_ov002_022028f0(s->unk_3ed4)) {
        func_ov002_02200a58(s, s->unk_0b4);
        func_ov122_022999b0(s);
    }
}

}
