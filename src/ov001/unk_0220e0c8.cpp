// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_ov001_0222acb0[];
extern u8 data_ov001_0222acc4[];
extern u8 data_ov001_0222de28;
extern u16 data_ov001_02229fb0[4];
extern u16 data_ov001_02229fb8[4];
extern u8 data_ov001_0222acd8[];
extern u8 data_ov001_0222ad14[];
extern u8 data_ov001_0222ad3c[];

extern s32 func_ov001_022261cc(s32);
extern void func_ov001_022080e0(s32);
extern void func_ov001_0220e044();
extern s32 func_ov001_02208100();
extern void func_ov001_02208088();
extern void func_ov001_0220c668(void *);
extern s32 func_ov001_022250e0(s32);
extern void func_ov001_022084f8(s32);
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern s32 func_ov001_02208594(void *, void *);
extern void func_02111a6c();
extern s32 func_ov001_0220891c(s32);
extern void func_ov001_02208290(s32, s32, s32);
extern void func_ov001_02208478(s32);
extern void func_01ffa494(u32);
extern void func_0211c670();
extern void func_ov001_02208070();
extern void func_ov001_02224e4c(s32);
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0221df10();
extern s32 func_ov001_022080a0();
extern void func_ov001_022253d4(s32);
extern void func_ov001_02208244();
extern void func_ov001_02225c58(s32, s32);
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_0220f304();
extern void func_ov001_02208114();
extern void *func_ov001_0222558c(s32, s32);
extern void func_02115640(void *);
extern void func_0212c234(void *, s32, void *, ...);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void func_020ff0bc(u64 *);
extern void func_ov001_0222516c(void *);

void func_ov001_0220e0c8();
void func_ov001_0220e0cc();
void func_ov001_0220e118();
void func_ov001_0220e138();
void func_ov001_0220e174();
void func_ov001_0220e1cc();
void func_ov001_0220e22c();
void func_ov001_0220e2cc();
void func_ov001_0220e320();
void func_ov001_0220e370();
void func_ov001_0220e3d0();
void func_ov001_0220e3fc();
void func_ov001_0220e438();
void func_ov001_0220e43c();
void func_ov001_0220e470();
void func_ov001_0220e490();
void func_ov001_0220e4cc();
void func_ov001_0220e50c();
void func_ov001_0220e54c();
void func_ov001_0220e5ec();
void func_ov001_0220e61c();
void func_ov001_0220e6b0();
void func_ov001_0220e714();
void func_ov001_0220e740();
void func_ov001_0220e77c();
void func_ov001_0220e780();
void func_ov001_0220e7b4();
void func_ov001_0220e7d4();
void func_ov001_0220e810();
void func_ov001_0220e868();

#pragma thumb off

void func_ov001_0220e0c8() {}

void func_ov001_0220e0cc() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    }
}

void func_ov001_0220e118() {
    func_ov001_0220e0cc();
    func_ov001_0220e0c8();
    func_ov001_0220e044();
}

void func_ov001_0220e138() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e118);
}

void func_ov001_0220e174() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_0220e138);
}

void func_ov001_0220e1cc() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e174);
}

void func_ov001_0220e22c() {
    func_ov001_02208594(data_ov001_0222acb0, (void *)func_02111a6c);
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

void func_ov001_0220e2cc() {
    data_ov001_0222de28 = 0;
    func_ov001_0220e22c();
    func_ov001_0220891c(0x12);
    func_ov001_02208290(0x8c, -1, 0);
    func_ov001_02208478(0x55);
    func_ov001_0220c668((void *)func_ov001_0220e1cc);
}

void func_ov001_0220e320() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_01ffa494(0x1000000);
    func_0211c670();
}

void func_ov001_0220e370() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 0x3f, 0x40);
    func_ov001_02224ff8(3, 0, 0x3f, 0x40);
    func_ov001_0220c668((void *)func_ov001_0220e320);
}

void func_ov001_0220e3d0() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220e370);
}

void func_ov001_0220e3fc() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_0220c668((void *)func_ov001_0220e3d0);
}

void func_ov001_0220e438() {}

void func_ov001_0220e43c() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(0);
    }
}

void func_ov001_0220e470() {
    func_ov001_0220e43c();
    func_ov001_0220e438();
    func_ov001_0220e3fc();
}

void func_ov001_0220e490() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e470);
}

void func_ov001_0220e4cc() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(5);
    func_ov001_0220c668((void *)func_ov001_0220e490);
}

void func_ov001_0220e50c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e4cc);
}

void func_ov001_0220e54c() {
    func_ov001_02208594(data_ov001_0222acc4, (void *)func_02111a6c);
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

void func_ov001_0220e5ec() {
    func_ov001_0220e54c();
    func_ov001_02208478(0x57);
    func_ov001_0221df10();
    func_ov001_0220c668((void *)func_ov001_0220e50c);
}

void func_ov001_0220e61c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 1);
    func_ov001_0220c668((void *)func_ov001_0220f304);
}

void func_ov001_0220e6b0() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220e61c);
}

void func_ov001_0220e714() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220e6b0);
}

void func_ov001_0220e740() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_0220e714);
}

void func_ov001_0220e77c() {}

void func_ov001_0220e780() {
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    }
}

void func_ov001_0220e7b4() {
    func_ov001_0220e780();
    func_ov001_0220e77c();
    func_ov001_0220e740();
}

void func_ov001_0220e7d4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e7b4);
}

void func_ov001_0220e810() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(2);
    func_ov001_0220c668((void *)func_ov001_0220e7d4);
}

void func_ov001_0220e868() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e810);
}

struct Unk_ov001_0220e8c8_Pad {
    u32 v[3];
    Unk_ov001_0220e8c8_Pad() {}
    ~Unk_ov001_0220e8c8_Pad() {}
};

void func_ov001_0220e8c8() {
    void *obj = func_ov001_0222558c(0, 0);
    u8 dt[8];
    u64 tick;
    Unk_ov001_0220e8c8_Pad pad;
    u32 d[4];
    char buf[0x2c];
    func_02115640(dt);
    func_0212c234(buf, 0x14, data_ov001_0222acd8, dt[0], dt[1], dt[2], dt[3], dt[4], dt[5]);
    func_ov001_02225254(obj, data_ov001_02229fb0[0], data_ov001_02229fb0[1], data_ov001_02229fb0[2], data_ov001_02229fb0[3], 2, 0x480, buf);
    func_020ff0bc(&tick);
    u64 t = tick;
    if (t != 0) {
        s32 i;
        d[3] = (u32)((t % 10) * 1000);
        t = t / 10;
        for (i = 0; i < 3; i++) {
            d[2 - i] = (u32)(t % 10000);
            t = t / 10000;
        }
        func_0212c234(buf, 0x14, data_ov001_0222ad14, d[0], d[1], d[2], d[3]);
    } else {
        func_0212c234(buf, 0x14, data_ov001_0222ad3c);
    }
    func_ov001_02225254(obj, data_ov001_02229fb8[0], data_ov001_02229fb8[1], data_ov001_02229fb8[2], data_ov001_02229fb8[3], 2, 0x480, buf);
    func_ov001_0222516c(obj);
}
}
