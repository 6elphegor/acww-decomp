// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 *unk_10[5];
    u32 *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[3];
    u8 pad_4e[3];
    u8 unk_51;
    u8 pad_52;
    u8 unk_53;
    u8 pad_54[2];
    u8 unk_56;
    u8 pad_57[2];
    u8 unk_59;
};

extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 func_02111a6c[];
extern u8 data_ov001_0222de68;
extern u8 data_ov001_0222aea8;
extern u8 data_ov001_0222de6c;
extern u16 data_ov001_0222de70;
extern Unk_ov001_0222de74 *data_ov001_0222de74;
extern u16 data_ov001_0222a030[];
extern u16 data_ov001_0222a032[];
extern u16 data_ov001_0222a034[];

s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_022088f8();
s32 func_ov001_02208478(u32 a);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_022206f8();
s32 func_ov001_02208088();
s32 func_ov001_0221d5d0();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_0221ce08(void *a, u32 b, u32 c);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02226fdc(s32, s32);
s32 func_ov001_022123e4();
s32 func_ov001_0221d5e8(u32 a);
s32 func_ov001_0221d5b8();
s32 func_ov001_0220864c();
void func_ov001_02208780(u32 a, u32 b, u32 c, u32 d);
s32 func_01ffc2c4(s32, s32);
s32 func_01ffc31c(s32, s32);
s32 func_ov001_02226c24(void *a, u32 b);
void func_ov001_02225290(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
void *func_02115fb4(void *, s32, u32);

void func_ov001_022118f0();
void func_ov001_022119c8();
void func_ov001_022119e4();
void func_ov001_02211a1c();
void func_ov001_02212e84();
void func_ov001_02211b2c();
void func_ov001_02211f78(u32 a);
void func_ov001_02212020(u32 a);
void func_ov001_02211ea0();
void func_ov001_02211be8();
void func_ov001_022118a8();
void func_ov001_02212108();
}

#pragma thumb off
extern "C" {

void func_ov001_0221197c() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_022118f0);
}

void func_ov001_022119c4() {}

void func_ov001_022119c8() {
    func_ov001_022118a8();
    func_ov001_022119c4();
}

void func_ov001_022119e4() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_022119c8);
}

void func_ov001_02211a1c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022119e4);
}

void func_ov001_02211a5c() {
    func_ov001_02208594(data_ov001_0222ae94, func_02111a6c);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void func_ov001_02211ae4() {
    data_ov001_0222de68 = 0;
    func_ov001_02211a5c();
    func_ov001_022088f8();
    func_ov001_02208478(0x68);
    func_ov001_0221e9a0(0x10);
    func_ov001_0220c668((void *)func_ov001_02211a1c);
}

void func_ov001_02211b2c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_02208088();
    func_ov001_0221d5d0();
    func_ov001_0220c668((void *)func_ov001_02212e84);
}

void func_ov001_02211b68() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02211b2c);
}

void func_ov001_02211ba8() {
    volatile u8 v = data_ov001_0222aea8;
    u8 t = v;
    func_ov001_0221ce08(data_ov001_0222de74->unk_08, t, t);
}

void func_ov001_02211be8() {
    Unk_ov001_0222de74 *o = data_ov001_0222de74;
    if (data_ov001_0222de70 == o->unk_40 || o->unk_51 <= 4) {
        if (o->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02211f78, 0, 0x78);
    }
}

void func_ov001_02211c90() {
    if (data_ov001_0222de70 == 0) {
        if (data_ov001_0222de74->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
    }
}

void func_ov001_02211d28(s32 a) {
    s32 r = 1;
    switch (data_ov001_0222de6c) {
    case 0:
        if (a == 1) {
            if (data_ov001_0222de70 == 0) {
                data_ov001_0222de6c = 4;
            } else {
                func_ov001_0221e9a0(0x13);
                data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
                return;
            }
        } else {
            if (data_ov001_0222de74->unk_51 > 1) data_ov001_0222de6c = data_ov001_0222de6c + 1;
            else r = 0;
        }
        break;
    case 1:
    case 2:
        if (a == 1) {
            data_ov001_0222de6c = data_ov001_0222de6c - 1;
        } else {
            u32 n = data_ov001_0222de6c + 1;
            if (data_ov001_0222de74->unk_51 > (s32)n) data_ov001_0222de6c = n;
            else r = 0;
        }
        break;
    case 3:
        if (a == 1) {
            data_ov001_0222de6c = data_ov001_0222de6c - 1;
        } else {
            func_ov001_02211be8();
            return;
        }
        break;
    case 4:
        if (a == 1) {
            r = 0;
        } else {
            data_ov001_0222de70 = 0;
            data_ov001_0222de6c = 0;
            func_ov001_022123e4();
            func_ov001_0221d5e8(0);
        }
        break;
    }
    if (r == 0) {
        if (data_ov001_0222de74->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(8);
        func_ov001_02211ea0();
    }
}

void func_ov001_02211ea0() {
    u32 i = data_ov001_0222de6c;
    func_ov001_02208780(i < 4 ? 2 : 3, data_ov001_0222a030[i * 4], data_ov001_0222a034[i * 4], data_ov001_0222a032[i * 4]);
}

void func_ov001_02211ef8() {
    if (data_ov001_0222de74->unk_56 == 0) return;
    u32 v = func_01ffc2c4(data_ov001_0222de70, 0x1c) - 0x32;
    v = (v << 16) & 0x1ff0000;
    *(volatile u32 *)0x4000010 = v;
    *(volatile u32 *)0x4000018 = v;
    data_ov001_0222de74->unk_56 = 0;
}

void func_ov001_02211f78(u32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    data_ov001_0222de70 += 4;
    s32 n = func_01ffc2c4(data_ov001_0222de70, 0x1c);
    if (n >= 4) {
        func_ov001_02212108();
        return;
    }
    data_ov001_0222de70 = data_ov001_0222de70 - n;
    func_ov001_022123e4();
    func_ov001_0221d5e8(func_01ffc31c(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40));
    func_ov001_0221d5d0();
    func_ov001_02211ea0();
    data_ov001_0222de74->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

void func_ov001_02212020(u32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    if (data_ov001_0222de70 > 4) data_ov001_0222de70 = data_ov001_0222de70 - 4;
    else data_ov001_0222de70 = 0;
    s32 n = func_01ffc2c4(data_ov001_0222de70, 0x1c);
    if (n == 0x18) {
        func_ov001_022123e4();
        return;
    }
    if (n > 0x18) {
        data_ov001_0222de70 = data_ov001_0222de70 + (0x1c - n);
        n = 0;
    }
    func_ov001_02212108();
    if (n != 0) return;
    func_ov001_0221d5e8(func_01ffc31c(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40));
    func_ov001_0221d5d0();
    func_ov001_02211ea0();
    data_ov001_0222de74->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

void func_ov001_02212108() {
    s32 n = func_01ffc2c4(data_ov001_0222de70, 0x1c);
    s32 y = 0x36 - n;
    s32 cnt = data_ov001_0222de74->unk_51;
    s32 i;
    if (cnt > 5) cnt = 5;
    for (i = 0; i < cnt; i++) {
        u32 *p = data_ov001_0222de74->unk_10[i];
        *p = (*p & 0xfe00ff00) | (u8)(y - 2) | 0xb30000;
        u32 *q = data_ov001_0222de74->unk_24[i];
        *q = (*q & 0xfe00ff00) | (u8)(y + 1) | 0xd20000;
        y += 0x1c;
    }
    data_ov001_0222de74->unk_56 = 1;
}

void func_ov001_022121cc(s32 a, s32 b) {
    Unk_ov001_0222de74 *o = data_ov001_0222de74;
    if (a >= o->unk_51) return;
    u8 *rec = o->unk_00 + a * 0x2a;
    u16 *p = (u16 *)o->unk_10[b];
    p[2] = (p[2] & ~0x3ff) | o->unk_42[rec[0x28]];
    o = data_ov001_0222de74;
    rec = o->unk_00 + a * 0x2a;
    u16 *q = (u16 *)o->unk_24[b];
    q[2] = (q[2] & ~0x3ff) | o->unk_48[*(u16 *)(rec + 0x26)];
}

void func_ov001_02212260(s32 a, s32 b) {
    u16 buf[17];
    u32 r4 = a * 0x2a;
    s32 n = func_ov001_02226c24(data_ov001_0222de74->unk_00 + r4, 0x20);
    u32 r5 = b * 0x1c;
    s32 i, j;
    if (a >= data_ov001_0222de74->unk_51) return;
    if (n <= 0x10) r5 += 6;
    func_02115fb4(buf, 0, 0x22);
    s32 cnt = n <= 0x10 ? n : 0x10;
    for (i = 0; i < cnt; i++) buf[i] = (data_ov001_0222de74->unk_00 + r4)[i];
    func_ov001_02225290(data_ov001_0222de74->unk_0c, 0xa, r5, 2, 0xa, buf, 1);
    if (n > 0x10) {
        func_02115fb4(buf, 0, 0x22);
        n = n - 0x10;
        for (i = 0; i < n; i++) buf[i] = (data_ov001_0222de74->unk_00 + r4)[i + 0x10];
        func_ov001_02225290(data_ov001_0222de74->unk_0c, 0xa, r5 + 0xc, 2, 0xa, buf, 1);
    }
}
}
#pragma thumb reset
