// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222de78_Hw {
    u32 flags;
    u16 unk_04;
};

struct Unk_ov001_0222de78 {
    void *unk_00;
    Unk_ov001_0222de78_Hw *unk_04;
    u8 unk_08[0x20];
    u8 unk_28;
    u8 unk_29;
    u8 unk_2a;
};

static inline void Unk_ov001_0221381c_Clr(volatile u16 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

extern "C" {
extern Unk_ov001_0222de78 *data_ov001_0222de78;
extern u8 data_ov001_0222a058[];
extern u16 data_ov001_0222a05c[];
extern u8 data_ov001_0222a060[];
extern u8 data_ov001_0222af0c[];
extern u8 data_ov001_0222af24[];
extern u8 data_ov001_0222af38[];
extern u8 data_ov001_0222af50[];
extern u8 data_ov001_0222af68[];
extern u32 data_ov001_0222aefc[];
extern u8 data_ov001_0222aef8[];
extern u8 func_02111df8[];
extern u8 func_0211172c[];
extern u8 func_02111ec8[];
extern u8 func_02111a6c[];

s32 func_ov001_02225238(void *a);
s32 func_ov001_02225254(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
s32 func_ov001_0222516c(void *a);
s32 func_ov001_02208244();
s32 func_ov001_022267c8(void *a);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_0220c5f0(u32 *a, u32 *b);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_0220c618(u32 a, u32 b);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_02225d58(void *a);
s32 func_ov001_0220a758();
s32 func_ov001_02220778(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_0220a7b0();
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_0220a79c();
s32 func_ov001_0220a788(u32 a);
s32 func_ov001_0220a774(u32 a);
s32 func_ov001_022134bc();
s32 func_ov001_0220a7f0();
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_02225cb4(u32 a, u32 b);
void *func_ov001_02225db0(u32 a, u32 b);
s32 func_ov001_0221e5cc(void *a);
s32 func_ov001_02226c24(void *a, u32 b);
s32 func_ov001_0220891c(u32 a);
s32 func_ov001_02208290(u32 a, s32 b, u32 c);
s32 func_ov001_02208538(u32 a);
void *func_ov001_0222558c(u32 a, u32 b);
void *func_ov001_02224b60(u32 a, u32 b);

void func_ov001_02217e40();
void func_ov001_02213338();
void func_ov001_0221be7c();
void func_ov001_0221347c();
void func_ov001_0221372c();
void func_ov001_02213930();
void func_ov001_02213a38();
void func_ov001_02213b20();
void func_ov001_02213b64();
void func_ov001_02213d60();
void func_ov001_02213d7c();
void func_ov001_02213db0();
void func_ov001_02213e48();
void func_ov001_02213ea8();
}

#pragma thumb off
extern "C" {

void func_ov001_0221379c() {
    Unk_ov001_0222de78 *g = data_ov001_0222de78;
    s32 n = g->unk_29;
    s32 a = n & 0xf;
    s32 b = n >> 4;
    if ((u32)n >= 0x20) { a = 0xf; b = 1; }
    u32 x = data_ov001_0222a060[a];
    u32 y = data_ov001_0222a058[b];
    Unk_ov001_0222de78_Hw *hw = g->unk_04;
    hw->flags = (hw->flags & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

void func_ov001_0221381c() {
    u16 v[4] = {0, 0, 0, 0};
    u16 w[2];
    s32 j, i;
    v[1] = data_ov001_0222a058[0];
    v[2] = data_ov001_0222a05c[0];
    v[3] = data_ov001_0222a05c[1];
    func_ov001_02225238(data_ov001_0222de78->unk_00);
    w[1] = 0;
    u8 hi = data_ov001_0222a058[1];
    i = 0; j = 0;
    for (; i < 0x20; i++, j++) {
        Unk_ov001_0222de78 *g = data_ov001_0222de78;
        if (i == 0x10) {
            j = 0;
            v[1] = hi;
        }
        u32 c = g->unk_08[i];
        if (c == 0x20) w[0] = 0xe01d; else w[0] = c;
        u32 t = data_ov001_0222a060[j];
        v[0] = t;
        func_ov001_02225254(g->unk_00, v[0], v[1], v[2], v[3], 2, 0x480, w);
    }
    func_ov001_0222516c(data_ov001_0222de78->unk_00);
}

void func_ov001_02213930() {
    u32 a, b;
    func_ov001_02208244();
    func_ov001_022267c8(data_ov001_0222de78->unk_04);
    func_ov001_022253d4(0);
    func_ov001_02208594(data_ov001_0222af0c, func_02111df8);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c5f0(&a, &b);
    if (b == 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c618(0, a);
        func_ov001_0220c668((void *)func_ov001_02217e40);
    } else if (data_ov001_0222de78->unk_2a == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c618(1, 0);
        func_ov001_0220c668((void *)func_ov001_02213338);
    } else {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c618(0, 1);
        func_ov001_0220c668((void *)func_ov001_0221be7c);
    }
    func_ov001_02225d58(&data_ov001_0222de78);
}

void func_ov001_02213a38() {
    u32 v[2];
    u32 idx;
    v[0] = data_ov001_0222aefc[0];
    v[1] = data_ov001_0222aefc[1];
    if (func_ov001_0220a758() != 0) return;
    u32 t = data_ov001_0222de78->unk_2a;
    if (t == 0) {
        func_ov001_0220c668((void *)func_ov001_02213930);
    } else if (t == 2) {
        func_ov001_02220778(0x2f, 3, 1, -1, 0);
        func_ov001_0220c668((void *)func_ov001_0221347c);
    } else {
        func_ov001_0220c5f0(0, &idx);
        func_ov001_02220778(v[idx], 2, 1, -1, 0);
        func_ov001_0220c668((void *)func_ov001_0221372c);
    }
}

void func_ov001_02213b20() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_0220a7b0();
    func_ov001_0221e9a0(0x15);
    func_ov001_0220c668((void *)func_ov001_02213a38);
}

void func_ov001_02213b64() {
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02213b20);
}

void func_ov001_02213b8c() {}

void func_ov001_02213b90() {
    s32 r = func_ov001_0220a79c();
    switch (r) {
    case 0x80:
        if (data_ov001_0222de78->unk_29 != 0) {
            func_ov001_0221e9a0(3);
            data_ov001_0222de78->unk_29--;
            data_ov001_0222de78->unk_08[data_ov001_0222de78->unk_29] = 0;
            if (data_ov001_0222de78->unk_29 == 0) func_ov001_0220a788(0);
            func_ov001_0220a774(1);
        }
        break;
    case 0x82:
        func_ov001_0221e9a0(7);
        data_ov001_0222de78->unk_2a = 0;
        func_ov001_0220c668((void *)func_ov001_02213b64);
        return;
    case 0x83:
        if (func_ov001_022134bc() != 0) {
            func_ov001_0221e9a0(6);
            data_ov001_0222de78->unk_2a = 1;
        } else {
            data_ov001_0222de78->unk_2a = 2;
            func_ov001_0221e9a0(9);
        }
        data_ov001_0222de78->unk_04->flags = (data_ov001_0222de78->unk_04->flags & 0xc1fffcff) | 0x200;
        func_ov001_0220c668((void *)func_ov001_02213b64);
        return;
    case 0:
        break;
    case 0xe01d:
    default:
        if (data_ov001_0222de78->unk_29 != 0x20) {
            func_ov001_0221e9a0(1);
            data_ov001_0222de78->unk_08[data_ov001_0222de78->unk_29] = r;
            data_ov001_0222de78->unk_29++;
            func_ov001_0220a788(1);
            if (data_ov001_0222de78->unk_29 == 0x20) func_ov001_0220a774(0);
        }
        break;
    }
    func_ov001_0221381c();
    func_ov001_0221379c();
}

void func_ov001_02213d60() {
    func_ov001_02213b90();
    func_ov001_02213b8c();
}

void func_ov001_02213d7c() {
    if (func_ov001_0220a79c() == 0xff) return;
    func_ov001_0220c668((void *)func_ov001_02213d60);
}

void func_ov001_02213db0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220a7f0();
    func_ov001_0221e9a0(0x14);
    if (data_ov001_0222de78->unk_29 == 0) func_ov001_0220a788(0);
    if (data_ov001_0222de78->unk_29 == 0x20) func_ov001_0220a774(0);
    func_ov001_0220c668((void *)func_ov001_02213d7c);
}

void func_ov001_02213e48() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02213db0);
}

void func_ov001_02213ea8() {
    func_ov001_02208594(data_ov001_0222af24, func_02111df8);
    func_ov001_02208594(data_ov001_0222af38, func_0211172c);
    func_ov001_02208594(data_ov001_0222af50, func_02111ec8);
    func_ov001_02208594(data_ov001_0222af68, func_02111a6c);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x4000008 = (*(volatile u16 *)0x4000008 & ~3) | 2;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void func_ov001_02213f84() {
    u8 b[2];
    u32 idx[2];
    b[0] = data_ov001_0222aef8[0];
    b[1] = data_ov001_0222aef8[1];
    data_ov001_0222de78 = (Unk_ov001_0222de78 *)func_ov001_02225db0(0x2c, 4);
    func_ov001_0220c5f0(&idx[0], &idx[1]);
    if (idx[0] == 0) {
        func_ov001_0221e5cc(data_ov001_0222de78->unk_08);
        data_ov001_0222de78->unk_29 = func_ov001_02226c24(data_ov001_0222de78->unk_08, 0x20);
    }
    func_ov001_02213ea8();
    func_ov001_0220891c(idx[0] + 9);
    if (idx[1] == 1) {
        func_ov001_02208290(0x81, -1, 0);
    } else {
        func_ov001_02208290(b[idx[0]], -1, 0);
    }
    func_ov001_02208538(2);
    data_ov001_0222de78->unk_00 = func_ov001_0222558c(0, 0);
    data_ov001_0222de78->unk_04 = (Unk_ov001_0222de78_Hw *)func_ov001_02224b60(0, 0x3e);
    data_ov001_0222de78->unk_04->unk_04 = (data_ov001_0222de78->unk_04->unk_04 & ~0xc00) | 0xc00;
    func_ov001_0221379c();
    func_ov001_0221381c();
    func_ov001_0220c668((void *)func_ov001_02213e48);
}

}
#pragma thumb reset
