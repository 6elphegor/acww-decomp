// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222de94_Rec {
    u8 pad_00[0xf4];
    u8 unk_f4;
};

struct Unk_ov001_0222de94 {
    void *unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    void *unk_08;
    void *unk_0c[2];
    void *unk_14;
    void *unk_18[7];
    void *unk_34;
    void *unk_38;
    void *unk_3c;
    u8 unk_40;
    u8 unk_41;
    u8 pad_42[3];
    u8 unk_45;
    u8 unk_46;
};

struct Unk_ov001_022169cc_Bits {
    u8 pad_00[0xe6];
    u8 lo : 2;
    u8 hi : 6;
};

extern "C" {
extern Unk_ov001_0222de94 *data_ov001_0222de94;
extern u16 data_ov001_0222de90;
extern u8 data_ov001_0222de88;
extern u8 data_ov001_0222b0c8[];
extern u16 data_ov001_0222a100[];

u8 *func_ov001_0221e8b4();
s32 func_01ffc31c(s32, s32);
s32 func_01ffc2c4(s32, s32);
s32 func_02115fb4(void *, s32, s32);
s32 func_0212899c(void *, s32, s32);
s32 func_020fee84(void *);
s32 func_02111df8();
s32 func_ov001_022168a0(s32, s32, s32);
s32 func_ov001_0221673c(void *, s32);
s32 func_ov001_022166b0(void *, s32);
s32 func_ov001_02225238(void *, s32);
s32 func_ov001_0221ceb0(void *, s32, s32, s32);
s32 func_ov001_0221cf10();
s32 func_ov001_0222516c(void *);
s32 func_ov001_02216474();
s32 func_ov001_022250e0(s32);
s32 func_ov001_02226fd0(s32, void *);
s32 func_ov001_022267c8(void *);
s32 func_ov001_0221d61c();
s32 func_ov001_022253d4(s32);
s32 func_ov001_0220864c();
s32 func_ov001_02208244();
s32 func_ov001_0221cf28();
s32 func_ov001_02224038(void *);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0221e348(s32);
s32 func_ov001_02225d58(void *);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_0221d5b8();
s32 func_ov001_0221d5f4();
s32 func_ov001_0221d608();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_02215d48();
s32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02213f84();
void func_ov001_02214dd8();
void func_ov001_0221b85c();
void func_ov001_022182d4();
void func_ov001_0221aae4();
void func_ov001_0221b318();
void func_ov001_0221605c();
void func_ov001_02215fa8();
void func_ov001_02216e54();
void func_ov001_02217174();
s32 func_ov001_02216d8c();
s32 func_ov001_02216a64(s32, s32);
s32 func_ov001_02216bbc(s32, s32);

s32 func_ov001_022169cc(s32 idx) {
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

s32 func_ov001_02216a64(s32 idx, s32 arg) {
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
        if (data_ov001_0222de94->unk_04 != 0) b = 1;
        if (data_ov001_0222de94->unk_05 != 0) c = 1;
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
        if (data_ov001_0222de94->unk_06 != 0) b = 1;
        if (data_ov001_0222de94->unk_07 != 0) c = 1;
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
    return func_ov001_022168a0(a, b, arg);
}

s32 func_ov001_02216bbc(s32 idx, s32 arg) {
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

s32 func_ov001_02216d8c() {
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

void func_ov001_02216e54() {
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
    func_ov001_02208594(data_ov001_0222b0c8, (void *)func_02111df8);
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

void func_ov001_02217174() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x1d, 8);
    func_ov001_0220c668((void *)func_ov001_02216e54);
}

void func_ov001_022171d4() {
    func_ov001_0221d5b8();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02217174);
}

void func_ov001_02217200() {
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
}
