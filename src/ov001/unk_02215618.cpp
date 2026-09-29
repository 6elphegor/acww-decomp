// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02215618_G {
    u32 unk_00;
    u8 unk_04[4];
    u32 unk_08;
    void *unk_0c;
    void *unk_10;
    u8 pad_14[0x24];
    void *unk_38;
    u32 unk_3c;
    u8 unk_40;
    u8 unk_41;
    u8 unk_42;
    u8 unk_43;
    u8 unk_44;
    u8 unk_45;
    u8 unk_46;
    u8 unk_47;
};

struct Unk_ov001_02215830_L { u8 b[4]; };
struct Unk_ov001_02215e1c_E { u16 a, b, c, d; };
struct Unk_ov001_02215e1c_L { u8 b[14]; };

extern "C" {
extern u8 data_ov001_0222b038[];
extern u8 data_ov001_0222b04c[];
extern u8 data_ov001_0222b050[];
extern u8 data_ov001_0222de84;
extern u8 data_ov001_0222de88;
extern u8 data_ov001_0222de8c;
extern u16 data_ov001_0222de90;
extern Unk_ov001_02215618_G *data_ov001_0222de94;
extern u8 data_ov001_0222a0a8[];
extern u8 data_ov001_0222a0cc[];
extern u8 data_ov001_0222a0d8[];
extern u8 data_ov001_0222a0e4[];
extern Unk_ov001_02215e1c_E data_ov001_0222a12c[];

extern void func_02111a6c(void *, s32, u32);
extern s32 func_ov001_02208594(void *, void *);
extern s32 func_ov001_0221523c();
extern s32 func_ov001_0220c668(void *);
extern void func_ov001_022151fc();
extern s32 func_ov001_022206f8();
extern void func_ov001_02217af8();
extern s32 func_ov001_02220714();
extern void func_ov001_0221e9a0(s32);
extern s32 func_ov001_02220728();
extern void func_ov001_0221cda8(void *);
extern u8 *func_ov001_0221e8b4();
extern s32 func_020fedcc(void *);
extern s32 func_020fedec(void *, void *);
extern void func_ov001_02216d8c();
extern void func_ov001_0221ce08(void *, u32, u32);
extern void func_ov001_0221d5e8(s32);
extern void *func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_0221605c();
extern void func_ov001_02215fa8();
extern u32 func_ov001_02216178(u32);
extern s32 func_01ffc31c(u32, s32);
extern s32 func_01ffc2c4(u32, s32);
extern void func_ov001_02208780(s32, u32, u32, u32);

void func_ov001_02215618();
void func_ov001_022156b8();
void func_ov001_022156e0(u32);
void func_ov001_022156f0();
void func_ov001_02215724();
BOOL func_ov001_02215778();
void func_ov001_02215830();
void func_ov001_022158fc();
void func_ov001_0221595c();
void func_ov001_02215998(s32);
void func_ov001_02215d08(u32);
void func_ov001_02215d48();
void func_ov001_02215e1c();
void func_ov001_02215f0c();

#pragma thumb off

#define REGSET(a) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= 3; *(volatile u16 *)(a) = t; } while (0)

void func_ov001_02215618() {
    func_ov001_02208594(data_ov001_0222b038, (void *)func_02111a6c);
    REGSET(0x4001008);
    REGSET(0x400100a);
    REGSET(0x4000008);
    REGSET(0x400000a);
    REGSET(0x400000c);
}

void func_ov001_022156b8() {
    func_ov001_02215618();
    func_ov001_0221523c();
    func_ov001_0220c668((void *)func_ov001_022151fc);
}

void func_ov001_022156e0(u32 v) {
    data_ov001_0222de88 = v;
}

void func_ov001_022156f0() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_02217af8);
}

void func_ov001_02215724() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0221cda8(data_ov001_0222de94->unk_0c);
    func_ov001_0220c668((void *)func_ov001_022156f0);
}

BOOL func_ov001_02215778() {
    u8 *o = func_ov001_0221e8b4();
    if (o[0x40] == 0) return FALSE;
    if (o[0xf6] == 0 && func_020fedcc(o + 0xc8) == 0 && func_020fedcc(o + 0xcc) == 0) return FALSE;
    if (o[0xf5] == 0) {
        if (func_020fedcc(o + 0xc0) == 0) return FALSE;
        if (func_020fedcc(o + 0xc4) == 0) return FALSE;
        if (func_020fedec(o + 0xc0, o + 0xf0) == 0) return FALSE;
    }
    return TRUE;
}

void func_ov001_02215830() {
    Unk_ov001_02215830_L l;
    u8 *q;
    s32 i;
    u8 s;
    u8 *src = data_ov001_0222b04c;
    l.b[0] = src[0];
    l.b[1] = src[1];
    l.b[2] = src[2];
    l.b[3] = src[3];
    s = data_ov001_0222de84;
    for (i = 0, q = l.b; i < 4; i++, q++) {
        if (s == *q) {
            Unk_ov001_02215618_G *g = data_ov001_0222de94;
            g->unk_04[i] = 0x14;
            if ((i & 1) != 0) {
                data_ov001_0222de94->unk_04[i - 1] = 0;
                return;
            }
            data_ov001_0222de94->unk_04[i + 1] = 0;
            return;
        }
    }
}

void func_ov001_022158fc() {
    s32 i;
    for (i = 0; i < 4; i++) {
        u8 *p = (u8 *)data_ov001_0222de94 + i;
        if (p[4] != 0) {
            p[4] = p[4] - 1;
            if (((u8 *)data_ov001_0222de94 + i)[4] == 0) {
                func_ov001_02216d8c();
            }
        }
    }
}

void func_ov001_0221595c() {
    u32 t = data_ov001_0222a0a8[data_ov001_0222de84 - 0xb];
    func_ov001_0221ce08(data_ov001_0222de94->unk_10, t, t);
}

void func_ov001_02215998(s32 a) {
    u8 *o;
    s32 r4;
    s32 s;
    o = func_ov001_0221e8b4();
    r4 = 0;
    s = data_ov001_0222de84;
    if (s == 8 && o[0xf5] == 0) {
        if (a == 0) return;
        if (a == 2) return;
    }
    switch (s) {
    case 0:
        if (a == 1) {
            data_ov001_0222de84 = 0xb;
        } else if (a == 3) {
            data_ov001_0222de8c = data_ov001_0222de8c + 1;
        } else {
            r4 = 2;
        }
        break;
    case 10:
        if (a == 1) {
            data_ov001_0222de8c = data_ov001_0222de8c - 1;
        } else if (a != 3) {
            r4 = 2;
        } else {
            data_ov001_0222de84 = data_ov001_0222de94->unk_42;
        }
        break;
    case 11:
        if (a == 1) {
            if (data_ov001_0222de94->unk_47 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_47 = 1;
            return;
        } else if (a != 3) {
            r4 = 2;
        } else {
            data_ov001_0222de84 = 0;
            data_ov001_0222de8c = 0;
            data_ov001_0222de90 = 0;
            func_ov001_02216d8c();
            func_ov001_0221d5e8(0);
        }
        break;
    case 12:
    case 13:
        data_ov001_0222de94->unk_42 = s;
        if (a == 1) {
            data_ov001_0222de84 = 10;
            data_ov001_0222de8c = 3;
            data_ov001_0222de90 = 0x91;
            func_ov001_02216d8c();
            func_ov001_0221d5e8(0x37);
        } else if (a == 3) {
            if (data_ov001_0222de94->unk_47 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_47 = 1;
            return;
        } else if (s == 12) {
            data_ov001_0222de84 = 13;
        } else {
            data_ov001_0222de84 = 12;
        }
        break;
    default:
        if (a == 1) {
            if (data_ov001_0222de8c != 0) {
                data_ov001_0222de8c = data_ov001_0222de8c - 1;
            } else {
                func_ov001_0221e9a0(0x13);
                data_ov001_0222de94->unk_38 = func_ov001_02227094(0, (void *)func_ov001_0221605c, 0, 0x78);
                return;
            }
        } else if (a == 3) {
            if (data_ov001_0222de8c < 3) {
                data_ov001_0222de8c = data_ov001_0222de8c + 1;
            } else {
                func_ov001_0221e9a0(0x13);
                data_ov001_0222de94->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02215fa8, 0, 0x78);
                return;
            }
        } else {
            r4 = 2;
            if (s == 2) {
                data_ov001_0222de84 = 3;
                goto redo;
            }
            if (s == 3) {
                data_ov001_0222de84 = 2;
                goto redo;
            }
            if (s == 7) {
                data_ov001_0222de84 = 8;
                goto redo;
            }
            if (s == 8) {
                data_ov001_0222de84 = 7;
            redo:
                func_ov001_0221e9a0(8);
                func_ov001_02215e1c();
            }
        }
        break;
    }
    if (r4 == 2) return;
    func_ov001_0221e9a0(8);
    if (r4 != 0) return;
    func_ov001_02215d48();
}

void func_ov001_02215d08(u32 a) {
    data_ov001_0222de84 = a;
    data_ov001_0222de8c = func_ov001_02216178(data_ov001_0222a0e4[a]);
    func_ov001_02215e1c();
}

void func_ov001_02215d48() {
    u8 *o;
    s32 q;
    s32 r;
    if ((u8)(data_ov001_0222de84 + 0xf5) <= 2) {
        func_ov001_02215e1c();
        return;
    }
    o = func_ov001_0221e8b4();
    q = func_01ffc31c(data_ov001_0222de90, 0x1d);
    r = data_ov001_0222de8c + q;
    switch (r) {
    case 2:
        if (o[0xf5] != 0) {
            data_ov001_0222de84 = 2;
        } else {
            data_ov001_0222de84 = 3;
        }
        break;
    case 6:
        if (o[0xf6] != 0) {
            data_ov001_0222de84 = 7;
        } else {
            data_ov001_0222de84 = 8;
        }
        break;
    default:
        data_ov001_0222de84 = data_ov001_0222a0cc[r];
        break;
    }
    func_ov001_02215e1c();
}

void func_ov001_02215e1c() {
    Unk_ov001_02215e1c_L l;
    volatile u16 h[4];
    u8 *src = data_ov001_0222b050;
    s32 v;
    l = *(Unk_ov001_02215e1c_L *)src;
    v = l.b[data_ov001_0222de84];
    if (v >= 3) {
        func_ov001_02208780(3, data_ov001_0222a12c[v].a, data_ov001_0222a12c[v].c, data_ov001_0222a12c[v].b);
        return;
    }
    {
        Unk_ov001_02215e1c_E *e = &data_ov001_0222a12c[v];
        h[1] = e->b;
        h[0] = data_ov001_0222a12c[v].a;
        h[2] = e->c;
        h[1] = data_ov001_0222de8c * 0x1d + h[1];
        h[3] = e->d;
        func_ov001_02208780(1, h[0], h[2], h[1]);
    }
}

void func_ov001_02215f0c() {
    u32 q;
    s32 r;
    s32 ip;
    if (data_ov001_0222de94->unk_44 == 0) return;
    q = func_01ffc31c(data_ov001_0222de90, 0x1d);
    r = func_01ffc2c4(data_ov001_0222de90, 0x1d);
    ip = r - 0x33;
    *(volatile u32 *)0x4000010 = 0x1ff0000 & (ip << 16);
    *(volatile u32 *)0x4000018 = 0x1ff0000 & ((ip + data_ov001_0222a0d8[q]) << 16);
    data_ov001_0222de94->unk_44 = 0;
}

#pragma thumb reset
}
