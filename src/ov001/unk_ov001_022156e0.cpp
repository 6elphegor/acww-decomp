// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02217e40_E { u8 pad_00[4]; u16 unk_04; };

struct Unk_ov001_0222de94 {
    void *unk_00;
    u8 unk_04[4];
    void *unk_08;
    void *unk_0c[2];
    void *unk_14;
    u32 *unk_18[7];
    u32 *unk_34;
    void *unk_38;
    void *unk_3c;
    u8 unk_40;
    u8 unk_41;
    u8 unk_42;
    u8 unk_43;
    u8 unk_44;
    u8 unk_45;
    u8 unk_46;
    u8 unk_47;
};

struct Unk_ov001_022169cc_Bits {
    u8 pad_00[0xe6];
    u8 lo : 2;
    u8 hi : 6;
};

struct Unk_ov001_02215830_L { u8 b[4]; };
struct Unk_ov001_02215e1c_E { u16 a, b, c, d; };
struct Unk_ov001_02215e1c_L { u8 b[14]; };
struct Unk_ov001_02217c24_A23 { u8 b[23]; };
struct Unk_ov001_02217c24_A21 { u8 b[21]; };
struct Unk_ov001_02217c24_A22 { u8 b[22]; };

#define E34 ((Unk_ov001_02217e40_E *)data_ov001_0222de94->unk_34)
#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))
#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

extern "C" {
extern const u8 data_ov001_0222a460[];

extern const u8 data_ov001_0222a0a8[3] = {6, 8, 7};
extern const s8 data_ov001_0222a0ac[6] = {-1, 0x23, 0x27, -1, 0x23, 0x2f};
extern const u16 data_ov001_0222a0b4[4] = {0xcc, 0x34, 0x1c, 0x18};
extern const u16 data_ov001_0222a0bc[4] = {0x8f, 0x34, 0x2c, 0x18};
extern const u16 data_ov001_0222a0c4[4] = {0xc0, 0x34, 0x2c, 0x18};
extern const u8 data_ov001_0222a0cc[9] = {0, 1, 0xe, 4, 5, 6, 0xe, 9, 0xa};
extern const u8 data_ov001_0222a0d8[9] = {0, 5, 2, 7, 4, 1, 6, 3, 0};
extern const u8 data_ov001_0222a0e4[11] = {0, 1, 2, 2, 3, 4, 5, 6, 6, 7, 8};
extern const u8 data_ov001_0222a0f0[15] = {0, 0x29, 0x2c, 0x52, 0x53, 0x30, 0, 0x2a, 0x30, 0x54, 0x55, 0, 0, 0x2b, 0};
extern const u16 data_ov001_0222a100[10] = {0, 0x60, 0xe0, 0x140, 0x1c0, 0x240, 0x2a0, 0x320, 0x3a0, 0};
extern const u16 data_ov001_0222a114[3][4] = {{0x84, 0x1b, 0xfc, 0x2c}, {0x84, 0xac, 0xfc, 0xbd}, {0x04, 0xac, 0x7c, 0xbd}};
extern const Unk_ov001_02215e1c_E data_ov001_0222a12c[6] = {{0xc8, 0x31, 0xe0, 0x4d}, {0xbc, 0x31, 0xe0, 0x4d}, {0x8b, 0x31, 0xaf, 0x4d}, {0x82, 0x18, 0xee, 0x2c}, {0x82, 0xa9, 0xee, 0xbd}, {0x02, 0xa9, 0x6e, 0xbd}};

u8 data_ov001_0222b04c[4] = {2, 3, 7, 8};
u8 data_ov001_0222b050[14] = {0, 0, 1, 2, 0, 0, 0, 1, 2, 0, 0, 3, 4, 5};
char data_ov001_0222b060[] = "char/ybBgStep2.ncl.l";
char data_ov001_0222b078[] = "char/ybBgStep21.ncl.l";
char data_ov001_0222b090[] = "char/jb3ListBack.nsc.l";
u16 data_ov001_0222b0a8[16] = {0x25, 0x33, 0x64, 0x2e, 0x25, 0x33, 0x64, 0x2e, 0x25, 0x33, 0x64, 0x2e, 0x25, 0x33, 0x64, 0};

u8 data_ov001_0222de84;
u8 data_ov001_0222de88;
u8 data_ov001_0222de8c;
u16 data_ov001_0222de90;
Unk_ov001_0222de94 *data_ov001_0222de94;
}

extern "C" {
s32 func_01ffc2c4(u32, s32);
s32 func_01ffc31c(u32, s32);
s32 func_020fedcc(void *);
s32 func_020fedec(void *, void *);
s32 func_020fee84(void *);
void func_0211165c();
void func_0211172c();
void func_0211199c();
s32 func_02111df8();
void func_02111ec8();
void * func_02115fb4(void *, s32, u32);
s32 func_0212899c(void *, s32, s32);
void func_0212c234(void *, s32, void *, ...);
s32 func_ov001_02208244();
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
s32 func_ov001_02208594(void *, void *);
u8 * func_ov001_022085e0(void *);
s32 func_ov001_0220864c();
void func_ov001_02208780(s32, u32, u32, u32);
void func_ov001_022088d4();
s32 func_ov001_0220c5e0();
void func_ov001_0220c5f0(s32, void *);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
void func_ov001_02213f84();
void func_ov001_02214dd8();
void func_ov001_022156e0(u32 v);
void func_ov001_022156f0();
void func_ov001_02215724();
BOOL func_ov001_02215778();
void func_ov001_02215830();
void func_ov001_022158fc();
void func_ov001_0221595c();
void func_ov001_02215998(s32 a);
void func_ov001_02215d08(u32 a);
void func_ov001_02215d48();
void func_ov001_02215e1c();
void func_ov001_02215f0c();
void func_ov001_02215fa8(s32 a);
void func_ov001_0221605c(s32 a);
s32 func_ov001_02216150(s32 a);
s32 func_ov001_02216178(s32 a);
s32 func_ov001_022161c4();
void func_ov001_02216474();
void func_ov001_022166b0(u8 *a, s32 b);
void func_ov001_0221673c(u8 *a, s32 b);
void func_ov001_022168a0(s32 a, s32 b, s32 c);
s32 func_ov001_022169cc(s32 idx);
s32 func_ov001_02216a64(s32 idx, s32 arg);
s32 func_ov001_02216bbc(s32 idx, s32 arg);
s32 func_ov001_02216d8c();
void func_ov001_02216e54();
void func_ov001_02217174();
void func_ov001_022171d4();
void func_ov001_02217200();
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
void func_ov001_02217e40();
void func_ov001_022182d4();
void func_ov001_0221aae4();
s32 func_ov001_0221b318();
void func_ov001_0221b85c();
void func_ov001_0221cda8(void *);
void func_ov001_0221ce08(void *, u32, u32);
s32 func_ov001_0221ceb0(void *, s32, s32, s32);
s32 func_ov001_0221cf10();
s32 func_ov001_0221cf28();
void func_ov001_0221cf5c(void *);
s32 func_ov001_0221d5b8();
s32 func_ov001_0221d5d0();
s32 func_ov001_0221d5e8(s32);
s32 func_ov001_0221d5f4();
s32 func_ov001_0221d608();
s32 func_ov001_0221d61c();
void func_ov001_0221d660(s32, s32, s32, s32, s32);
s32 func_ov001_0221e348(s32);
void func_ov001_0221e88c(u32);
void func_ov001_0221e8a0(u32);
u8 * func_ov001_0221e8b4();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_02224038(void *);
void * func_ov001_02224074(void *, s32, s32);
Unk_ov001_02217e40_E * func_ov001_02224b60(s32, s32);
void func_ov001_02224b9c(s32, u32, void *);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_0222516c(void *);
s32 func_ov001_02225238(void *, s32);
void func_ov001_02225290(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
s32 func_ov001_022253d4(s32);
void * func_ov001_0222558c(s32, s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02225d58(void *);
void * func_ov001_02225db0(s32, s32);
s32 func_ov001_02225f88(void *);
s32 func_ov001_022260ac(void *);
s32 func_ov001_02226184(s32);
s32 func_ov001_022261a8(s32);
s32 func_ov001_022261cc(s32);
s32 func_ov001_022267c8(void *);
s32 func_ov001_02226c24(void *, u32);
s32 func_ov001_02226fd0(s32, void *);
void func_ov001_02226fdc(s32, s32);
void * func_ov001_02227094(s32, void *, s32, s32);
}

// NitroSDK-style OAM position accessors (attr01: y in bits 0-7, x in bits 16-24)
static inline void Unk_ov001_02216474_GetPos(const u32 *p, u32 *x, u32 *y) {
    *x = (*p & 0x1ff0000) >> 16;
    *y = (*p & 0xff) >> 0;
}

static inline void Unk_ov001_02216474_SetPos(u32 *p, s32 x, s32 y) {
    *p = (*p & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

static inline void Unk_ov001_02216474_Hide(u32 *p) {
    *p = (*p & 0xfe00ff00) | 0x1000000;
}

extern "C" void func_ov001_02217e40() {
    u8 *p = func_ov001_0221e8b4();
    s32 i;
    BOOL z = FALSE;
    u32 b;
    data_ov001_0222de94 = (Unk_ov001_0222de94 *)func_ov001_02225db0(0x48, 4);
    data_ov001_0222de94->unk_43 = p[0xf6];
    data_ov001_0222de94->unk_42 = 0xc;
    func_ov001_02217bc4();
    func_ov001_02217c24();
    if (data_ov001_0222de88 == 0) {
        func_ov001_02208290(0x7c, data_ov001_0222a0ac[func_ov001_0220c5e0()], p[0xf4] + 1);
    } else {
        func_ov001_02208290(0x97, -1, 0);
    }
    func_ov001_02208538(1);
    func_ov001_022088d4();
    func_ov001_0221d660(2, 0x55, 0xf1, 0x41, (data_ov001_0222de90 * 0x37) / 0x91);
    data_ov001_0222de94->unk_14 = func_ov001_0222558c(0, 1);
    i = 0;
    b = data_ov001_0222a0f0[1];
    z = i;
    for (; i < 7; i++) {
        data_ov001_0222de94->unk_18[i] = (u32 *)func_ov001_02224b60(z, b);
    }
    switch (p[0xe7]) {
    case 1:
        data_ov001_0222de94->unk_34 = (u32 *)func_ov001_02224b60(0, 0x50);
        E34->unk_04 = (E34->unk_04 & ~0xc00) | 0xc00;
        break;
    case 2:
        data_ov001_0222de94->unk_34 = (u32 *)func_ov001_02224b60(0, 0x51);
        E34->unk_04 = (E34->unk_04 & ~0xc00) | 0xc00;
        break;
    }
    data_ov001_0222de94->unk_3c = func_ov001_02227094(1, (void *)func_ov001_02215f0c, 0, 0x6e);
    data_ov001_0222de94->unk_00 = func_ov001_02227094(0, (void *)func_ov001_022158fc, 0, 0x78);
    func_ov001_02216d8c();
    func_ov001_02215e1c();
    func_ov001_0220c668((void *)func_ov001_02217b64);
}

extern "C" void func_ov001_02217c24() {
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
    func_ov001_02208594((void *)"char/ybObjKb.ncl.l", (void *)func_02111df8);
    func_ov001_02208594((void *)"char/jbBgStep2.ncg.l", (void *)func_0211165c);
    func_ov001_02208594((void *)"char/jbBgStep21.ncg.l", (void *)func_0211172c);
    func_ov001_02208594(lc.b, (void *)func_02111ec8);
    func_ov001_02208594((void *)"char/jb3List.nsc.l", (void *)func_0211199c);
    data_ov001_0222de94->unk_08 = func_ov001_02224074(func_ov001_022085e0(lb.b), 0, 4);
    func_ov001_0221cf5c(data_ov001_0222de94->unk_08);
    func_ov001_0221cf10();
    data_ov001_0222de94->unk_0c[0] = func_ov001_02224074(func_ov001_022085e0(lc.b), 0, 4);
    data_ov001_0222de94->unk_0c[1] = func_ov001_02224074(func_ov001_022085e0(ld.b), 0, 4);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x4000008, 3);
    REGSET(0x400000a, 2);
    REGSET(0x400000c, 3);
    REGSET(0x400000e, 2);
}

extern "C" void func_ov001_02217bc4() {
    u32 l;
    func_ov001_0221e8b4();
    func_ov001_0220c5f0(0, &l);
    if (l != 0) return;
    data_ov001_0222de90 = 0;
    data_ov001_0222de84 = 0;
    data_ov001_0222de8c = 0;
}

extern "C" void func_ov001_02217b64() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x1d, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x1d);
    func_ov001_0220c668((void *)func_ov001_02217b14);
}

extern "C" void func_ov001_02217b14() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_02217af8);
}

extern "C" void func_ov001_02217af8() {
    func_ov001_022177d0();
    func_ov001_02217200();
}

extern "C" void func_ov001_022177d0() {
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

extern "C" BOOL func_ov001_02217740() {
    u32 r;
    func_ov001_0221e8b4();
    r = func_ov001_022161c4();
    if (r == 14) return 0;
    if (((s32 (*)())func_ov001_022169cc)() == 0) {
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

extern "C" void func_ov001_022175ac(u32 a) {
    if (((s32 (*)())func_ov001_022169cc)() == 0) {
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

extern "C" void func_ov001_0221752c(u32 a) {
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

extern "C" void func_ov001_022174ec(u32 a) {
    u32 c = func_ov001_0221e8b4()[0xf6];
    if (c == a) return;
    data_ov001_0222de94->unk_43 = a;
    func_ov001_0221e88c(a);
    func_ov001_02216d8c();
}

extern "C" void func_ov001_02217200() {
    if (data_ov001_0222de94->unk_38 != 0) return;
    if (data_ov001_0222de94->unk_41 != 0) data_ov001_0222de94->unk_41--;
    switch (func_ov001_0221d5f4()) {
    case 0:
        break;
    case 1:
        data_ov001_0222de94->unk_45 = 1;
        break;
    case 2:
        if (data_ov001_0222de94->unk_41 != 0) return;
        func_ov001_0220864c();
        data_ov001_0222de90 = func_ov001_0221d608() * 0x91 / 0x37;
        func_ov001_02216d8c();
        data_ov001_0222de94->unk_41 = 4;
        break;
    case 3: {
        data_ov001_0222de94->unk_45 = 0;
        data_ov001_0222de90 = func_ov001_0221d608() * 0x91 / 0x37;
        func_ov001_0221e9a0(0x13);
        func_ov001_02216d8c();
        s32 r = func_01ffc2c4(data_ov001_0222de90, 0x1d);
        if (r == 0) {
            func_ov001_02215d48();
            return;
        }
        if (r < 0x10) data_ov001_0222de94->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_0221605c, 0, 0x78);
        else data_ov001_0222de94->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02215fa8, 0, 0x78);
        break;
    }
    case 4:
        if (data_ov001_0222de90 == 0) {
            if (data_ov001_0222de94->unk_46 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_46 = 1;
        } else {
            func_ov001_0221e9a0(0x13);
            data_ov001_0222de94->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_0221605c, 0, 0x78);
        }
        break;
    case 6:
        if (data_ov001_0222de90 == 0x91) {
            if (data_ov001_0222de94->unk_46 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de94->unk_46 = 1;
        } else {
            func_ov001_0221e9a0(0x13);
            data_ov001_0222de94->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02215fa8, 0, 0x78);
        }
        break;
    case 5:
    case 7:
        data_ov001_0222de94->unk_46 = 0;
        break;
    }
}

extern "C" void func_ov001_022171d4() {
    func_ov001_0221d5b8();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02217174);
}

extern "C" void func_ov001_02217174() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x1d, 8);
    func_ov001_0220c668((void *)func_ov001_02216e54);
}

extern "C" void func_ov001_02216e54() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_02226fd0(0, data_ov001_0222de94->unk_00);
    func_ov001_02226fd0(1, data_ov001_0222de94->unk_3c);
    s32 i;
    for (i = 0; i < 7; i++) func_ov001_022267c8(data_ov001_0222de94->unk_18[i]);
    if (data_ov001_0222de94->unk_34 != 0) func_ov001_022267c8(data_ov001_0222de94->unk_34);
    func_ov001_0221d61c();
    func_ov001_022253d4(0);
    func_ov001_0220864c();
    if (data_ov001_0222de94->unk_40 != 0xc) func_ov001_02208244();
    func_ov001_0221cf28();
    func_ov001_02224038(data_ov001_0222de94->unk_08);
    for (i = 0; i < 2; i++) func_ov001_02224038(data_ov001_0222de94->unk_0c[i]);
    func_ov001_02208594((void *)"char/ybObjMain.ncl.l", (void *)func_02111df8);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x1d);
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000018 = 0;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & 0x43) | 0xe10;
    u32 t = data_ov001_0222de94->unk_40;
    switch (t) {
    case 0:
    case 1:
        func_ov001_0220c618(t, 0);
        func_ov001_0220c654(2, 0);
        func_ov001_0220c668((void *)func_ov001_02213f84);
        break;
    case 4:
    case 5:
    case 6:
    case 9:
    case 10: {
        s32 r = t - 4;
        if (t >= 9) r -= 2;
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(r, 0);
        func_ov001_0220c668((void *)func_ov001_02214dd8);
        break;
    }
    case 11: {
        u8 *p = func_ov001_0221e8b4();
        p[0xd0] = func_020fee84(p + 0xf0);
        if (p[0xf5] != 0) {
            func_02115fb4(p + 0xc0, 0, 4);
            func_02115fb4(p + 0xc4, 0, 4);
            func_02115fb4(p + 0xf0, 0, 4);
            p[0xd0] = 0;
        }
        if (p[0xf6] != 0) func_02115fb4(p + 0xc8, 0, 8);
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(0, 0);
        func_ov001_0220c668((void *)func_ov001_0221b85c);
        break;
    }
    case 12:
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_022182d4);
        break;
    case 13:
        if (data_ov001_0222de88 == 0) {
            func_ov001_0220c654(2, 1);
            func_ov001_0220c668((void *)func_ov001_0221aae4);
        } else {
            func_ov001_0221e348(func_ov001_0221e8b4()[0xf4]);
            func_ov001_0220c654(0, 1);
            func_ov001_0220c668((void *)func_ov001_0221b318);
        }
        break;
    }
    func_ov001_02225d58(&data_ov001_0222de94);
}

extern "C" s32 func_ov001_02216d8c() {
    s32 base = func_01ffc31c(data_ov001_0222de90, 0x1d);
    func_ov001_02225238(data_ov001_0222de94->unk_14, 0);
    s32 p, i;
    for (i = 0, p = base; i < 5; i++, p++) func_ov001_02216bbc(p, i);
    func_ov001_0221ceb0((u8 *)data_ov001_0222de94->unk_08 + data_ov001_0222a100[base] * 2, 0, 0x1e, 0x13);
    for (i = 0; i < 5; i++, base++) func_ov001_02216a64(base, i);
    func_ov001_0221cf10();
    func_ov001_0222516c(data_ov001_0222de94->unk_14);
    func_ov001_02216474();
}

extern "C" s32 func_ov001_02216bbc(s32 idx, s32 arg) {
    u8 buf[0x28];
    u8 *p = func_ov001_0221e8b4();
    s32 n;
    switch (idx) {
    case 0:
        func_ov001_0221673c(p + 0x40, arg);
        return;
    case 1: {
        Unk_ov001_022169cc_Bits *bits = (Unk_ov001_022169cc_Bits *)p;
        switch (bits->lo) {
        case 0:
            return;
        case 1:
            n = 10;
            break;
        case 2:
            n = 0x1a;
            break;
        case 3:
            n = 0x20;
            break;
        }
        if (bits->hi == 1) n = n / 2;
        func_02115fb4(buf, 0, 0x21);
        func_0212899c(buf, 0x2a, n);
        func_ov001_0221673c(buf, arg);
        return;
    }
    case 3:
        if (p[0xf5] != 0) return;
        func_ov001_022166b0(p + 0xc0, arg);
        return;
    case 4:
        if (p[0xf5] != 0) return;
        func_ov001_022166b0(p + 0xf0, arg);
        return;
    case 5:
        if (p[0xf5] != 0) return;
        func_ov001_022166b0(p + 0xc4, arg);
        return;
    case 7:
        if (p[0xf6] != 0) return;
        func_ov001_022166b0(p + 0xc8, arg);
        return;
    case 8:
        if (p[0xf6] != 0) return;
        func_ov001_022166b0(p + 0xcc, arg);
        break;
    }
}

extern "C" s32 func_ov001_02216a64(s32 idx, s32 arg) {
    u8 *p = func_ov001_0221e8b4();
    s32 a, b, c, k;
    switch (idx) {
    case 0:
    case 1:
        a = 0;
        b = a;
        if (func_ov001_022169cc(a) == 0) b = 2;
        break;
    case 2:
        b = c = 0;
        if (p[0xf5] != 0) { a = 1; k = 4; }
        else { a = 2; k = 3; }
        if (data_ov001_0222de94->unk_04[0] != 0) b = 1;
        if (data_ov001_0222de94->unk_04[1] != 0) c = 1;
        func_ov001_022168a0(k, c, arg);
        break;
    case 3:
    case 4:
    case 5:
        a = 0;
        if (p[0xf5] != 0) b = 2;
        else b = a;
        break;
    case 6:
        c = 0;
        b = c;
        if (p[0xf6] != 0) { a = 1; k = 4; }
        else {
            if (p[0xf5] == 0) b = 2;
            a = 2;
            k = 3;
        }
        if (data_ov001_0222de94->unk_04[2] != 0) b = 1;
        if (data_ov001_0222de94->unk_04[3] != 0) c = 1;
        func_ov001_022168a0(k, c, arg);
        break;
    case 7:
    case 8:
        a = 0;
        if (p[0xf6] != 0) b = 2;
        else b = a;
        break;
    default:
        a = 0;
        b = 2;
        break;
    }
    func_ov001_022168a0(a, b, arg);
}

extern "C" s32 func_ov001_022169cc(s32 idx) {
    u8 *p = func_ov001_0221e8b4();
    s32 r = 1;
    switch (idx) {
    case 7:
        if (p[0xf5] == 0) r = 0;
        break;
    case 0:
    case 1:
        if ((u8)(p[0xe7] + 0xff) <= 1) r = 0;
        break;
    case 4:
    case 5:
    case 6:
        if (p[0xf5] != 0) r = 0;
        break;
    case 2:
    case 3:
    case 8:
        break;
    case 9:
    case 10:
        if (p[0xf6] != 0) r = 0;
        break;
    }
    return r;
}

extern "C" void func_ov001_022168a0(s32 a, s32 b, s32 c) {
    u16 v[5];
    u32 **q;
    v[0] = data_ov001_0222a0b4[0];
    v[1] = data_ov001_0222a0c4[0];
    v[2] = data_ov001_0222a0c4[0];
    v[3] = data_ov001_0222a0bc[0];
    v[4] = data_ov001_0222a0bc[0];
    q = (u32 **)&data_ov001_0222de94->unk_18[c];
    if ((u32)(a - 1) <= 1) {
        if (func_ov001_02216150(c) == 2) q = (u32 **)&data_ov001_0222de94->unk_18[5];
        else q = (u32 **)&data_ov001_0222de94->unk_18[6];
    }
    const u8 *row = data_ov001_0222a0f0 + a * 3;
    u8 f = row[b];
    if (f != 0) {
        func_ov001_02224b9c(0, f, *q);
        u32 *p = *q;
        u32 t = (v[a] & 0x1ff) << 16;
        *p = t | (*p & 0xfe00ff00);
        u16 *h = (u16 *)*q;
        h[2] = (h[2] & ~0xc00) | 0xc00;
    } else {
        Unk_ov001_02216474_Hide(*q);
    }
}

extern "C" void func_ov001_0221673c(u8 *a, s32 b) {
    u16 buf[17];
    s32 n;
    u32 r4;
    s32 i;
    s32 cnt;
    func_02115fb4(buf, 0, 0x22);
    n = func_ov001_02226c24(a, 0x20);
    cnt = n <= 0x10 ? n : 0x10;
    for (i = 0; i < cnt; i++) {
        u32 c = a[i];
        if (c == 0x20) buf[i] = 0xe01d;
        else buf[i] = c;
    }
    r4 = b * 0x1d + 2;
    if (n <= 0x10) r4 += 5;
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x48, r4, 2, 8, buf, 1);
    if (n <= 0x10) return;
    func_02115fb4(buf, 0, 0x22);
    s32 rem = n - 0x10;
    for (n = 0; n < rem; n++) {
        u32 c = a[n + 0x10];
        if (c == 0x20) buf[n] = 0xe01d;
        else buf[n] = c;
    }
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x48, r4 + 0xc, 2, 8, buf, 1);
}

extern "C" void func_ov001_022166b0(u8 *a, s32 b) {
    u16 buf[17];
    func_0212c234(buf, 0x10, data_ov001_0222b0a8, a[0], a[1], a[2], a[3]);
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x5f, b * 0x1d + 8, 2, 7, buf, 1);
}

extern "C" void func_ov001_02216474() {
    s32 x, y;
    s32 n;
    s32 ip;
    s32 yy;
    s32 i;
    n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    ip = 0x34 - func_01ffc2c4(data_ov001_0222de90, 0x1d);
    if (data_ov001_0222de94->unk_34 != 0) {
        if (n == 0) x = 0x26;
        else x = 0x100;
        Unk_ov001_02216474_SetPos(data_ov001_0222de94->unk_34, x, ip);
    }
    yy = ip;
    for (i = 0; i < 5; i++) {
        // the s32 locals are passed through a (u32 *) cast: that keeps them in memory
        Unk_ov001_02216474_GetPos(data_ov001_0222de94->unk_18[i], (u32 *)&x, (u32 *)&y);
        Unk_ov001_02216474_SetPos(data_ov001_0222de94->unk_18[i], x, yy);
        yy += 0x1d;
    }
    if (n <= 2) {
        Unk_ov001_02216474_GetPos(data_ov001_0222de94->unk_18[5], (u32 *)&x, (u32 *)&y);
        Unk_ov001_02216474_SetPos(data_ov001_0222de94->unk_18[5], x, ip + (2 - n) * 0x1d);
    } else {
        Unk_ov001_02216474_Hide(data_ov001_0222de94->unk_18[5]);
    }
    if (n >= 2 && n <= 6) {
        Unk_ov001_02216474_GetPos(data_ov001_0222de94->unk_18[6], (u32 *)&x, (u32 *)&y);
        Unk_ov001_02216474_SetPos(data_ov001_0222de94->unk_18[6], x, ip + (6 - n) * 0x1d);
    } else {
        Unk_ov001_02216474_Hide(data_ov001_0222de94->unk_18[6]);
    }
    data_ov001_0222de94->unk_44 = 1;
}

extern "C" s32 func_ov001_022161c4() {
    u16 v[4];
    s32 i;
    s32 n;
    s32 r;
    u16 *vp;
    const u8 *p;
    if (func_ov001_022260ac((void *)data_ov001_0222a460) == 0) return 0xe;
    r = func_01ffc31c(data_ov001_0222de90, 0x1d);
    vp = v;
    v[0] = data_ov001_0222a0b4[0];
    v[1] = data_ov001_0222a0b4[1];
    v[2] = data_ov001_0222a0b4[2];
    v[3] = data_ov001_0222a0b4[3];
    for (i = 0; i < 4; i++, r++) {
        if (r != 2 && r != 6) {
            if (func_ov001_02225f88(vp) != 0) return data_ov001_0222a0cc[r];
        }
        v[1] = v[1] + 0x1d;
    }
    n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    for (i = 0; i < 4; i++, n++) {
        if (n == 2) {
            s32 off = i * 0x1d;
            v[1] = data_ov001_0222a0c4[1];
            v[0] = data_ov001_0222a0c4[0];
            v[2] = data_ov001_0222a0c4[2];
            v[3] = data_ov001_0222a0c4[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 2;
            v[1] = data_ov001_0222a0bc[1];
            v[0] = data_ov001_0222a0bc[0];
            v[2] = data_ov001_0222a0bc[2];
            v[3] = data_ov001_0222a0bc[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 3;
            break;
        }
    }
    n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    for (i = 0; i < 4; i++, n++) {
        if (n == 6) {
            s32 off = i * 0x1d;
            v[1] = data_ov001_0222a0c4[1];
            v[0] = data_ov001_0222a0c4[0];
            v[2] = data_ov001_0222a0c4[2];
            v[3] = data_ov001_0222a0c4[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 7;
            v[1] = data_ov001_0222a0bc[1];
            v[0] = data_ov001_0222a0bc[0];
            v[2] = data_ov001_0222a0bc[2];
            v[3] = data_ov001_0222a0bc[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 8;
            break;
        }
    }
    p = (const u8 *)data_ov001_0222a114;
    for (i = 0; i < 3; i++, p += 8) {
        if (func_ov001_022260ac((void *)p) != 0) return i + 0xb;
    }
    return 0xe;
}

extern "C" s32 func_ov001_02216178(s32 a) {
    s32 base = func_01ffc31c(data_ov001_0222de90, 0x1d);
    s32 i;
    for (i = 0; i < 4; i++, base++) {
        if (base == a) return i;
    }
    return -1;
}

extern "C" s32 func_ov001_02216150(s32 a) {
    s32 r = func_01ffc31c(data_ov001_0222de90, 0x1d);
    r += a;
    return r;
}

extern "C" void func_ov001_0221605c(s32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    if (data_ov001_0222de90 > 6) data_ov001_0222de90 = data_ov001_0222de90 - 6;
    else data_ov001_0222de90 = 0;
    s32 n = func_01ffc2c4(data_ov001_0222de90, 0x1d);
    if (n == 0x17) {
        func_ov001_02216d8c();
        return;
    }
    if (n > 0x17) {
        data_ov001_0222de90 = data_ov001_0222de90 + (0x1d - n);
        n = 0;
    }
    func_ov001_02216474();
    if (n != 0) return;
    func_ov001_0221d5e8((data_ov001_0222de90 * 0x37) / 0x91);
    func_ov001_0221d5d0();
    func_ov001_02215d48();
    data_ov001_0222de94->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

extern "C" void func_ov001_02215fa8(s32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    data_ov001_0222de90 += 6;
    s32 n = func_01ffc2c4(data_ov001_0222de90, 0x1d);
    if (n >= 6) {
        func_ov001_02216474();
        return;
    }
    data_ov001_0222de90 = data_ov001_0222de90 - n;
    func_ov001_02216d8c();
    func_ov001_0221d5e8((data_ov001_0222de90 * 0x37) / 0x91);
    func_ov001_0221d5d0();
    func_ov001_02215d48();
    data_ov001_0222de94->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

extern "C" void func_ov001_02215f0c() {
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

extern "C" void func_ov001_02215e1c() {
    Unk_ov001_02215e1c_L l;
    u8 *src = data_ov001_0222b050;
    s32 v;
    l = *(Unk_ov001_02215e1c_L *)src;
    v = l.b[data_ov001_0222de84];
    if (v >= 3) {
        func_ov001_02208780(3, data_ov001_0222a12c[v].a, data_ov001_0222a12c[v].c, data_ov001_0222a12c[v].b);
        return;
    }
    {
        Unk_ov001_02215e1c_E e = data_ov001_0222a12c[v];
        e.b += data_ov001_0222de8c * 0x1d;
        func_ov001_02208780(1, e.a, e.c, e.b);
    }
}

extern "C" void func_ov001_02215d48() {
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

extern "C" void func_ov001_02215d08(u32 a) {
    data_ov001_0222de84 = a;
    data_ov001_0222de8c = func_ov001_02216178(data_ov001_0222a0e4[a]);
    func_ov001_02215e1c();
}

extern "C" void func_ov001_02215998(s32 a) {
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

extern "C" void func_ov001_0221595c() {
    u32 t = data_ov001_0222a0a8[data_ov001_0222de84 - 0xb];
    func_ov001_0221ce08(data_ov001_0222de94->unk_0c[1], t, t);
}

extern "C" void func_ov001_022158fc() {
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

extern "C" void func_ov001_02215830() {
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
            Unk_ov001_0222de94 *g = data_ov001_0222de94;
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

extern "C" BOOL func_ov001_02215778() {
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

extern "C" void func_ov001_02215724() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0221cda8(data_ov001_0222de94->unk_0c[0]);
    func_ov001_0220c668((void *)func_ov001_022156f0);
}

extern "C" void func_ov001_022156f0() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_02217af8);
}

extern "C" void func_ov001_022156e0(u32 v) {
    data_ov001_0222de88 = v;
}
