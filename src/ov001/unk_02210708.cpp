// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_ov001_0222de48;
extern u8 data_ov001_0222de50;
extern u8 data_ov001_0222de54;
extern u8 data_ov001_0222de58;
extern u8 data_ov001_0222ae14[];
extern u8 data_ov001_0222ae28[];
extern u16 data_ov001_02229ff8[];
extern u8 func_02111a6c[];

s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_02208478(u32 a);
s32 func_ov001_02208290(u32 a, s32 b, u32 c);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_02208244();
s32 func_ov001_0220d064();
s32 func_ov001_0220d040();
s32 func_ov001_0220d0c4();
s32 func_ov001_0220d04c(void *a);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_022206f8();
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_0221e93c();
void *func_ov001_0220d024();
void *func_ov001_0222558c(s32 a, s32 b);
s32 func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
s32 func_ov001_0222516c(void *);
s32 func_ov001_022080a0();
s32 func_ov001_022079fc();
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_02208100();
s32 func_ov001_022261cc(u32 a);
s32 func_ov001_022080e0(u32 a);
s32 func_ov001_022111a8();
void func_02115e30(u32 a, void *b, u32 c);
void func_02115e48(void *a, void *b, u32 c);

void func_ov001_02210694();
void func_ov001_0220f304();
void func_ov001_0220f6cc();

void func_ov001_02210708();
void func_ov001_022107a8();
void func_ov001_022107f0();
void func_ov001_02210804();
void func_ov001_022108fc();
void func_ov001_02210980();
void func_ov001_022109f0();
void func_ov001_022109f4();
void func_ov001_022109f8();
void func_ov001_02210a7c();
void func_ov001_02210ab4();
void func_ov001_02210b04();
void func_ov001_02210b44();
void func_ov001_02210be4();
void func_ov001_02210cc0(s32 a);
void func_ov001_02210d20();
void func_ov001_02210e60();
void func_ov001_02210efc();
void func_ov001_02210f40();
void func_ov001_02210f80();
void func_ov001_02210f84();
void func_ov001_02210fd8();
void func_ov001_02210ff8();

#pragma thumb off

void func_ov001_02210708() {
    func_ov001_02208594(data_ov001_0222ae14, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void func_ov001_022107a8() {
    func_ov001_02210708();
    func_ov001_02208478(0x62);
    data_ov001_0222de48 = func_ov001_02208290(0x8d, -1, 0);
    func_ov001_0220c668((void *)func_ov001_02210694);
}

void func_ov001_022107f0() {
    data_ov001_0222de50 = 1;
}

void func_ov001_02210804() {
    if (data_ov001_0222de50 != 0 || data_ov001_0222de54 == 0) {
        if (func_ov001_0220d064() == 0) return;
    }
    func_ov001_022253d4(0);
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de54 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_0220c654(0, 1);
    if (data_ov001_0222de50 != 0) {
        func_ov001_0220c668((void *)func_ov001_022107a8);
    } else if (data_ov001_0222de54 == 0) {
        func_ov001_02225c58(1, 1);
        func_ov001_0220c668((void *)func_ov001_0220f304);
    } else {
        func_ov001_0220c668((void *)func_ov001_0220f6cc);
    }
}

void func_ov001_022108fc() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    if (data_ov001_0222de50 == 0 && data_ov001_0222de54 == 1) {
        func_ov001_0220d040();
    } else {
        func_ov001_0220d0c4();
    }
    func_ov001_0220c668((void *)func_ov001_02210804);
}

void func_ov001_02210980() {
    if (func_ov001_022206f8()) return;
    if (data_ov001_0222de54 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_022108fc);
}

void func_ov001_022109f0() {
}

void func_ov001_022109f4() {
}

void func_ov001_022109f8() {
    func_ov001_022109f4();
    func_ov001_022109f0();
    switch (func_ov001_02220714()) {
    case 0:
        data_ov001_0222de54 = 0;
        func_ov001_0221e9a0(7);
        break;
    case 1:
        data_ov001_0222de54 = 1;
        func_ov001_0221e9a0(0xe);
        break;
    default:
        return;
    }
    func_ov001_0220d04c(0);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02210980);
}

void func_ov001_02210a7c() {
    if (func_ov001_02220714() == -2) return;
    func_ov001_0220c668((void *)func_ov001_022109f8);
}

void func_ov001_02210ab4() {
    if (func_ov001_022250e0(0)) return;
    func_ov001_02220778(0x5f, 4, 0, -1, 0);
    func_ov001_0220c668((void *)func_ov001_02210a7c);
}

void func_ov001_02210b04() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02210ab4);
}

void func_ov001_02210b44() {
    func_ov001_02208594(data_ov001_0222ae28, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void func_ov001_02210be4() {
    u8 *p = (u8 *)func_ov001_0220d024();
    void *w = func_ov001_0222558c(0, 0);
    data_ov001_0222de54 = 0;
    data_ov001_0222de50 = 0;
    func_ov001_02210b44();
    volatile u16 v = 0;
    u16 buf[11];
    func_02115e30(v, buf, 0x16);
    func_02115e48(p + 2, buf, p[1] * 2);
    u16 *h = data_ov001_02229ff8;
    func_ov001_02225254(w, h[0], h[1], h[2] - h[0], h[3] - h[1], 2, 0x480, buf);
    func_ov001_0222516c(w);
    func_ov001_0220d04c((void *)func_ov001_022107f0);
    func_ov001_0220c668((void *)func_ov001_02210b04);
}

void func_ov001_02210cc0(s32 a) {
    func_ov001_0221e93c();
    if (a == 0) {
        data_ov001_0222de58 = 1;
        func_ov001_0221e9a0(0x10);
    } else {
        data_ov001_0222de58 = 2;
        func_ov001_0221e9a0(0x12);
    }
    func_ov001_0220d04c(0);
    func_ov001_0220c668((void *)func_ov001_02210efc);
}

void func_ov001_02210d20() {
    if (func_ov001_022250e0(0)) return;
    if (data_ov001_0222de58 == 0) {
        if (func_ov001_022250e0(1)) return;
    }
    if (func_ov001_022080a0() == 0) return;
    if (data_ov001_0222de58 == 0) {
        if (func_ov001_0220d064() == 0) return;
    }
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222de58 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de58 == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220f304);
    } else if (data_ov001_0222de58 == 2) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_022107a8);
    } else {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_02210be4);
    }
}

void func_ov001_02210e60() {
    if (func_ov001_022250e0(1)) return;
    if (data_ov001_0222de58 == 0) {
        if (func_ov001_0220d064() == 0) return;
    }
    func_ov001_02208114();
    if (data_ov001_0222de58 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02210d20);
}

void func_ov001_02210efc() {
    if (data_ov001_0222de58 == 0) {
        func_ov001_0220d0c4();
    }
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02210e60);
}

void func_ov001_02210f40() {
    if (func_ov001_02208100()) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_02210efc);
}

void func_ov001_02210f80() {
}

void func_ov001_02210f84() {
    if (func_ov001_022261cc(2)) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_022111a8() == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02210fd8() {
    func_ov001_02210f84();
    func_ov001_02210f80();
    func_ov001_02210f40();
}

void func_ov001_02210ff8() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_0220c668((void *)func_ov001_02210fd8);
}

#pragma thumb reset
}
