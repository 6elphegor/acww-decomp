// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222de94_G {
    u32 unk_00;
    u32 unk_04;
    void *unk_08;
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

struct Unk_ov001_02217c24_A23 { u8 b[23]; };
struct Unk_ov001_02217c24_A21 { u8 b[21]; };
struct Unk_ov001_02217c24_A22 { u8 b[22]; };

extern "C" {
extern u8 data_ov001_0222b090[];
extern u8 data_ov001_0222b060[];
extern u8 data_ov001_0222b078[];
extern u8 data_ov001_0222b0e0[];
extern u8 data_ov001_0222b0f4[];
extern u8 data_ov001_0222b10c[];
extern u8 data_ov001_0222b124[];
extern u8 data_ov001_0222a0e4[];
extern u8 data_ov001_0222de84;
extern u8 data_ov001_0222de8c;
extern u16 data_ov001_0222de90;
extern Unk_ov001_0222de94_G *data_ov001_0222de94;

extern u8 *func_ov001_0221e8b4();
extern void func_ov001_0221e88c(u32);
extern void func_ov001_0221e8a0(u32);
extern void func_ov001_02216d8c();
extern s32 func_ov001_022169cc();
extern void func_ov001_0221e9a0(s32);
extern s32 func_ov001_0221595c();
extern s32 func_ov001_02215778();
extern void func_ov001_02220778(s32, s32, s32, s32, s32);
extern void func_ov001_0220c668(void *);
extern void func_ov001_02215724();
extern u32 func_ov001_02216178(u32);
extern void func_ov001_022168a0(s32, s32, u32);
extern void func_ov001_02216474();
extern void func_ov001_0221d5b8();
extern void func_ov001_022171d4();
extern u32 func_ov001_022161c4();
extern void func_ov001_02215d08(u32);
extern void func_ov001_02215830();
extern s32 func_ov001_022261cc(s32);
extern s32 func_ov001_022261a8(s32);
extern s32 func_ov001_02226184(s32);
extern void *func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_02215fa8();
extern void func_ov001_0221605c();
extern void func_ov001_02215998(s32);
extern void func_ov001_02217200();
extern s32 func_ov001_022250e0(s32);
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_0220c5f0(s32, void *);
extern s32 func_ov001_02208594(void *, void *);
extern u8 *func_ov001_022085e0(void *);
extern void *func_ov001_02224074(void *, s32, s32);
extern void func_ov001_0221cf5c(void *);
extern void func_ov001_0221cf10();
extern void func_02111df8();
extern void func_0211165c();
extern void func_0211172c();
extern void func_02111ec8();
extern void func_0211199c();

void func_ov001_022174ec(u32 a);
void func_ov001_0221752c(u32 a);
void func_ov001_022175ac(u32 a);
BOOL func_ov001_02217740();
void func_ov001_022177d0();
void func_ov001_02217af8();
void func_ov001_02217b14();
void func_ov001_02217b64();
void func_ov001_02217bc4();
void func_ov001_02217c24();

#pragma thumb off

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_022174ec(u32 a) {
    u32 c = func_ov001_0221e8b4()[0xf6];
    if (c == a) return;
    data_ov001_0222de94->unk_43 = a;
    func_ov001_0221e88c(a);
    func_ov001_02216d8c();
}

void func_ov001_0221752c(u32 a) {
    u32 r;
    u8 *o = func_ov001_0221e8b4();
    u32 c = o[0xf5];
    if (c == a) return;
    if (a != 0) {
        r = data_ov001_0222de94->unk_43 != 0;
    } else {
        r = 0;
        data_ov001_0222de94->unk_43 = o[0xf6];
    }
    func_ov001_0221e8a0(a);
    func_ov001_0221e88c(r);
    func_ov001_02216d8c();
}

void func_ov001_022175ac(u32 a) {
    if (func_ov001_022169cc() == 0) {
        func_ov001_0221e9a0(9);
        return;
    }
    switch (a) {
    case 0: case 1: break;
    case 2: case 3:
        func_ov001_0221e9a0(6);
        func_ov001_0221752c((a - 2) ^ 1 ? 1 : 0);
        return;
    case 4: case 5: case 6: break;
    case 7: case 8:
        func_ov001_0221e9a0(6);
        func_ov001_022174ec((a - 7) ^ 1 ? 1 : 0);
        return;
    }
    data_ov001_0222de94->unk_40 = a;
    if (a - 11 <= 1) {
        func_ov001_0221595c();
        if (func_ov001_02215778() == 0) {
            func_ov001_0221e9a0(9);
            func_ov001_02220778(0x2f, 1, 1, -1, 0);
            func_ov001_0220c668((void *)func_ov001_02215724);
            return;
        }
        if (a == 11) {
            func_ov001_0221e9a0(6);
        } else {
            func_ov001_0221e9a0(14);
        }
    } else if (a == 13) {
        func_ov001_0221595c();
        func_ov001_0221e9a0(7);
    } else {
        func_ov001_0221e9a0(6);
        func_ov001_022168a0(0, 1, func_ov001_02216178(data_ov001_0222a0e4[a]));
        func_ov001_02216474();
    }
    func_ov001_0221d5b8();
    func_ov001_0220c668((void *)func_ov001_022171d4);
}

BOOL func_ov001_02217740() {
    u32 r;
    func_ov001_0221e8b4();
    r = func_ov001_022161c4();
    if (r == 14) return 0;
    if (func_ov001_022169cc() == 0) {
        func_ov001_0221e9a0(9);
        return 1;
    }
    func_ov001_02215d08(r);
    switch (r) {
    case 0: case 1: case 4: case 5: case 6: break;
    case 2: case 3: case 7: case 8: func_ov001_02215830(); break;
    }
    func_ov001_022175ac(r);
    return 1;
}

void func_ov001_022177d0() {
    if (data_ov001_0222de94->unk_38 != 0) return;
    if (data_ov001_0222de94->unk_45 != 0) return;
    if (func_ov001_02217740() != 0) return;
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022175ac(data_ov001_0222de84);
        return;
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_0221e9a0(7);
        data_ov001_0222de94->unk_40 = 13;
        func_ov001_0220c668((void *)func_ov001_022171d4);
        return;
    }
    if (func_ov001_022261a8(0x200) != 0) {
        if (data_ov001_0222de90 == 0x91) {
            if (data_ov001_0222de94->unk_47 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_47 = 1;
            return;
        }
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de94->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02215fa8, 0, 0x78);
        return;
    }
    if (func_ov001_02226184(0x200) != 0) {
        data_ov001_0222de94->unk_47 = 0;
        return;
    }
    if (func_ov001_022261a8(0x100) != 0) {
        if (data_ov001_0222de90 == 0) {
            if (data_ov001_0222de94->unk_47 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_47 = 1;
            return;
        }
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de94->unk_38 = func_ov001_02227094(0, (void *)func_ov001_0221605c, 0, 0x78);
        return;
    }
    if (func_ov001_02226184(0x100) != 0) {
        data_ov001_0222de94->unk_47 = 0;
        return;
    }
    if (func_ov001_022261a8(0x40) != 0) {
        func_ov001_02215998(1);
        return;
    }
    if (func_ov001_02226184(0x40) != 0) {
        data_ov001_0222de94->unk_47 = 0;
        return;
    }
    if (func_ov001_022261a8(0x80) != 0) {
        func_ov001_02215998(3);
        return;
    }
    if (func_ov001_02226184(0x80) != 0) {
        data_ov001_0222de94->unk_47 = 0;
        return;
    }
    if (func_ov001_022261a8(0x20) != 0) {
        func_ov001_02215998(0);
        return;
    }
    if (func_ov001_022261a8(0x10) == 0) return;
    func_ov001_02215998(2);
}

void func_ov001_02217af8() {
    func_ov001_022177d0();
    func_ov001_02217200();
}

void func_ov001_02217b14() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_02217af8);
}

void func_ov001_02217b64() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x1d, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x1d);
    func_ov001_0220c668((void *)func_ov001_02217b14);
}

void func_ov001_02217bc4() {
    u32 l;
    func_ov001_0221e8b4();
    func_ov001_0220c5f0(0, &l);
    if (l != 0) return;
    data_ov001_0222de90 = 0;
    data_ov001_0222de84 = 0;
    data_ov001_0222de8c = 0;
}

void func_ov001_02217c24() {
    Unk_ov001_02217c24_A23 lb;
    Unk_ov001_02217c24_A21 lc;
    Unk_ov001_02217c24_A22 ld;
    lb = *(Unk_ov001_02217c24_A23 *)data_ov001_0222b090;
    lc = *(Unk_ov001_02217c24_A21 *)data_ov001_0222b060;
    ld = *(Unk_ov001_02217c24_A22 *)data_ov001_0222b078;
    {
        u32 t = *(volatile u16 *)0x400000c;
        t &= 0x43;
        t |= 0xe18;
        *(volatile u16 *)0x400000c = t;
    }
    func_ov001_02208594(data_ov001_0222b0e0, (void *)func_02111df8);
    func_ov001_02208594(data_ov001_0222b0f4, (void *)func_0211165c);
    func_ov001_02208594(data_ov001_0222b10c, (void *)func_0211172c);
    func_ov001_02208594(lc.b, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b124, (void *)func_0211199c);
    data_ov001_0222de94->unk_08 = func_ov001_02224074(func_ov001_022085e0(lb.b), 0, 4);
    func_ov001_0221cf5c(data_ov001_0222de94->unk_08);
    func_ov001_0221cf10();
    data_ov001_0222de94->unk_0c = func_ov001_02224074(func_ov001_022085e0(lc.b), 0, 4);
    data_ov001_0222de94->unk_10 = func_ov001_02224074(func_ov001_022085e0(ld.b), 0, 4);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x4000008, 3);
    REGSET(0x400000a, 2);
    REGSET(0x400000c, 3);
    REGSET(0x400000e, 2);
}
}
