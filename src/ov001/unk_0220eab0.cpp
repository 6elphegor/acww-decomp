// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0220ebc4_Pos { u16 v0; u16 v2; u16 v4; u16 v6; };
struct Unk_ov001_0220f164_Reg { u32 w0; u16 h4; };

extern "C" {
extern u8 data_ov001_0222de2c;
extern u8 data_ov001_0222de30;
extern void *data_ov001_0222de34;
extern Unk_ov001_0220f164_Reg *data_ov001_0222de38;
extern u8 data_ov001_02229fc0[];
extern u16 data_ov001_02229fc4[];
extern Unk_ov001_0220ebc4_Pos data_ov001_02229fc8[];
extern u8 data_ov001_02229fe0[];
extern u8 data_ov001_02229fe2[];
extern u8 data_ov001_02229fe4[];
extern u8 data_ov001_02229fe6[];
extern u8 data_ov001_0222ad64[];
extern u8 data_ov001_0222ad78[];
extern u8 data_ov001_0222ad90[];
extern u8 data_ov001_0222ada8[];
extern u8 data_ov001_0222adc0[];
extern void func_02111a6c(void);
extern void func_0211172c(void);

s32 func_ov001_02208594(void *, void *);
void *func_ov001_022085e0(void *);
void func_ov001_02208690(u32, u32, u32, u32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208290(s32, s32, s32);
void func_ov001_0220e8c8();
void func_ov001_0220c668(void *);
s32 func_ov001_0221ce08(void *, u32, u32);
s32 func_01ffc2c4(s32, s32);
void func_ov001_0221e9a0(s32);
s32 func_ov001_022080a0();
void func_ov001_022267c8(void *);
void func_ov001_0220864c();
void func_ov001_02208244();
void func_ov001_02224038(void *);
void func_ov001_02225c58(s32, s32);
void func_ov001_02225cb4(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220dd94();
void func_ov001_0220e2cc();
void func_ov001_022100bc();
void func_ov001_02208114();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
void func_020ff0bc(void *);
void func_ov001_022080cc(s32);
void func_ov001_0220eb90();
s32 func_ov001_022260ac(void *);
void func_ov001_022080e0(s32);
s32 func_ov001_022261cc(s32);
s32 func_ov001_022261a8(s32);
void func_ov001_02208088();
void func_ov001_022084f8(s32);
void *func_ov001_02224074(void *, s32, s32);
void func_02116048(void *, void *, s32);
void func_021145cc(void *, s32);
void func_02111ec8(void *, s32, s32);
Unk_ov001_0220f164_Reg *func_ov001_02224b60(s32, s32);
s32 func_ov001_0221eae4(s32);

void func_ov001_0220e868();
void func_ov001_0220eb50();
void func_ov001_0220ec68();
void func_ov001_0220edc8();
void func_ov001_0220ee40();
void func_ov001_0220ee6c();
void func_ov001_0220f050();
void func_ov001_0220f070();
void func_ov001_0220f0ac();
void func_ov001_0220f104();

#define BGCNT(a) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3)

void func_ov001_0220eab0() {
    func_ov001_02208594(data_ov001_0222ad64, (void *)func_02111a6c);
    BGCNT(0x4001008);
    BGCNT(0x400100a);
    BGCNT(0x4000008);
    BGCNT(0x400000a);
    BGCNT(0x400000c);
}

void func_ov001_0220eb50() {
    func_ov001_0220eab0();
    func_ov001_0220891c(0x11);
    func_ov001_02208290(0x89, -1, 0);
    func_ov001_0220e8c8();
    func_ov001_0220c668((void *)func_ov001_0220e868);
}

void func_ov001_0220eb90() {
    u32 b = data_ov001_02229fc0[data_ov001_0222de2c];
    func_ov001_0221ce08(data_ov001_0222de34, b, b);
}

void func_ov001_0220ebc4(s32 a) {
    if (a == 1) {
        data_ov001_0222de2c = func_01ffc2c4(data_ov001_0222de2c + 2, 3);
    } else {
        data_ov001_0222de2c = func_01ffc2c4(data_ov001_0222de2c + 1, 3);
    }
    func_ov001_0221e9a0(8);
    func_ov001_02208690(*(u16 *)(data_ov001_02229fe0 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe4 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe2 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe6 + (data_ov001_0222de2c << 3)));
}

void func_ov001_0220ec68() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022267c8(data_ov001_0222de38);
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222de34);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    if (data_ov001_0222de30 == 0) {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0220dd94);
        return;
    }
    switch (data_ov001_0222de2c) {
    case 0:
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220eb50);
        return;
    case 1:
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220e2cc);
        return;
    case 2:
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_022100bc);
        return;
    }
}

void func_ov001_0220edc8() {
    if (func_ov001_022250e0(1) != 0) return;
    if (data_ov001_0222de30 != 0) {
        func_ov001_02208114();
    }
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0220ec68);
}

void func_ov001_0220ee40() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220edc8);
}

void func_ov001_0220ee6c() {
    u64 t[2];
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_020ff0bc(&t[0]);
        if (data_ov001_0222de2c != 0 && t[0] == 0) {
            func_ov001_0221e9a0(9);
            func_ov001_022080cc(-1);
            return;
        }
        func_ov001_0221e9a0(6);
        func_ov001_0220eb90();
        data_ov001_0222de30 = 1;
        break;
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_0220ee40);
}

void func_ov001_0220ef24() {}

void func_ov001_0220ef28() {
    u32 i;
    Unk_ov001_0220ebc4_Pos *q = data_ov001_02229fc8;
    for (i = 0; i < 3; i++, q++) {
        if (func_ov001_022260ac(q) != 0) {
            func_ov001_022080e0(1);
            data_ov001_0222de2c = i;
            func_ov001_02208690(*(u16 *)(data_ov001_02229fe0 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe4 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe2 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe6 + (data_ov001_0222de2c << 3)));
            return;
        }
    }
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    } else if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    } else if (func_ov001_022261a8(0x40) != 0) {
        func_ov001_0220ebc4(1);
    } else if (func_ov001_022261a8(0x80) != 0) {
        func_ov001_0220ebc4(3);
    }
}

void func_ov001_0220f050() {
    func_ov001_0220ef28();
    func_ov001_0220ef24();
    func_ov001_0220ee6c();
}

void func_ov001_0220f070() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220f050);
}

void func_ov001_0220f0ac() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0220f070);
}

void func_ov001_0220f104() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220f0ac);
}

struct Unk_ov001_0220f164_Cp { u8 v[0x16]; };
struct Unk_ov001_0220f164_Cq { u8 v[0x17]; };
struct Unk_ov001_0220f164_Buf { u8 a[0x16]; u8 b[0x17]; u64 t; u32 pad[4]; };

void func_ov001_0220f164() {
    Unk_ov001_0220f164_Buf buf;
    u8 *d, *s;
    s32 i;
    u8 *e;
    u8 *src;
    src = data_ov001_0222ad78;
    *(Unk_ov001_0220f164_Cp *)buf.a = *(Unk_ov001_0220f164_Cp *)src;
    *(Unk_ov001_0220f164_Cq *)buf.b = *(Unk_ov001_0220f164_Cq *)data_ov001_0222ad90;
    func_ov001_02208594(data_ov001_0222ada8, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222adc0, (void *)func_02111a6c);
    data_ov001_0222de34 = func_ov001_02224074(func_ov001_022085e0(buf.b), 0, 4);
    e = (u8 *)func_ov001_02224074(func_ov001_022085e0(buf.a), 0, 4);
    func_020ff0bc(&buf.t);
    if (buf.t == 0) {
        d = e + 0xc0;
        s = e + 0x40;
        for (i = 0; i < 2; i++) {
            func_02116048(d, s, 0x20);
            d += 0x20;
            s += 0x20;
        }
    }
    func_021145cc(e, 0x200);
    func_02111ec8(e, 0, 0x200);
    func_ov001_02224038(e);
    BGCNT(0x4001008);
    BGCNT(0x400100a);
    BGCNT(0x400000a);
    BGCNT(0x400000c);
}

void func_ov001_0220f304() {
    data_ov001_0222de30 = 0;
    func_ov001_0220f164();
    func_ov001_0220891c(0x10);
    func_ov001_0221eae4(3);
    func_ov001_02208290(0x88, -1, 0);
    data_ov001_0222de38 = func_ov001_02224b60(0, 0x5b);
    data_ov001_0222de38->w0 = (data_ov001_0222de38->w0 & 0xfe00ff00) | (data_ov001_02229fc4[1] & 0xff) | ((data_ov001_02229fc4[0] & 0x1ff) << 16);
    data_ov001_0222de38->h4 = (data_ov001_0222de38->h4 & ~0xc00) | 0xc00;
    func_ov001_02208690(*(u16 *)(data_ov001_02229fe0 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe4 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe2 + (data_ov001_0222de2c << 3)), *(u16 *)(data_ov001_02229fe6 + (data_ov001_0222de2c << 3)));
    func_ov001_0220c668((void *)func_ov001_0220f104);
}
}
