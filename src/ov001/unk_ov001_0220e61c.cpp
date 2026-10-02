// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" u16 data_ov001_0222acd8[30] = {'%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', '-', '%', '0', '2', 'X', 0};
extern "C" u16 data_ov001_0222ad14[40] = {'%', '0', '4', 'd', '-', '%', '0', '4', 'd', '-', '%', '0', '4', 'd', '-', '%', '0', '4', 'd', 0, '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0};
#define data_ov001_0222ad3c (data_ov001_0222ad14 + 20)
extern "C" const u16 data_ov001_02229fb0[4] = {0x0008, 0x0040, 0x00f0, 0x001c};
extern "C" const u16 data_ov001_02229fb8[4] = {0x0008, 0x0078, 0x00f0, 0x001c};

struct Unk_ov001_0220e8c8_Pad {
    u32 v[3];
    Unk_ov001_0220e8c8_Pad() {}
    ~Unk_ov001_0220e8c8_Pad() {}
};

#define BGCNT(a) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3)

extern "C" {
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
void func_ov001_0220e044();
s32 func_ov001_02208100();
void func_ov001_02208088();
void func_ov001_0220c668(void *);
s32 func_ov001_022250e0(s32);
void func_ov001_022084f8(s32);
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02225cb4(s32, s32);
s32 func_ov001_02208594(void *, void *);
void func_02111a6c();
s32 func_ov001_0220891c(s32);
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208478(s32);
void func_01ffa494(u32);
void func_0211c670();
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
void func_ov001_0221e9a0(s32);
void func_ov001_0221df10();
s32 func_ov001_022080a0();
void func_ov001_022253d4(s32);
void func_ov001_02208244();
void func_ov001_02225c58(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220f304();
void func_ov001_02208114();
void *func_ov001_0222558c(s32, s32);
void func_02115640(void *);
void func_0212c234(void *, s32, void *, ...);
void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
void func_020ff0bc(void *);
void func_ov001_0222516c(void *);
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
void func_ov001_0220eab0();
void func_ov001_0220eb50();
void func_0211172c(void);
void *func_ov001_022085e0(void *);
void func_ov001_02208690(u32, u32, u32, u32);
void func_ov001_0220e8c8();
s32 func_ov001_0221ce08(void *, u32, u32);
s32 func_01ffc2c4(s32, s32);
void func_ov001_022267c8(void *);
void func_ov001_0220864c();
void func_ov001_02224038(void *);
void func_ov001_0220dd94();
void func_ov001_022100bc();
void func_ov001_022080cc(s32);
void func_ov001_0220eb90();
s32 func_ov001_022260ac(void *);
s32 func_ov001_022261a8(s32);
void *func_ov001_02224074(void *, s32, s32);
void func_02116048(void *, void *, s32);
void func_021145cc(void *, s32);
void func_02111ec8(void *, s32, s32);
s32 func_ov001_0221eae4(s32);
void func_ov001_0220eb50();
void func_ov001_0220ec68();
void func_ov001_0220edc8();
void func_ov001_0220ee40();
void func_ov001_0220ee6c();
void func_ov001_0220f050();
void func_ov001_0220f070();
void func_ov001_0220f0ac();
void func_ov001_0220f104();
}

extern "C" void func_ov001_0220eb50() {
    func_ov001_0220eab0();
    func_ov001_0220891c(0x11);
    func_ov001_02208290(0x89, -1, 0);
    func_ov001_0220e8c8();
    func_ov001_0220c668((void *)func_ov001_0220e868);
}

extern "C" void func_ov001_0220eab0() {
    func_ov001_02208594((void *)"char/jb5Info.nsc.l", (void *)func_02111a6c);
    BGCNT(0x4001008);
    BGCNT(0x400100a);
    BGCNT(0x4000008);
    BGCNT(0x400000a);
    BGCNT(0x400000c);
}

extern "C" void func_ov001_0220e8c8() {
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

extern "C" void func_ov001_0220e868() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e810);
}

extern "C" void func_ov001_0220e810() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(2);
    func_ov001_0220c668((void *)func_ov001_0220e7d4);
}

extern "C" void func_ov001_0220e7d4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e7b4);
}

extern "C" void func_ov001_0220e7b4() {
    func_ov001_0220e780();
    func_ov001_0220e77c();
    func_ov001_0220e740();
}

extern "C" void func_ov001_0220e780() {
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    }
}

extern "C" void func_ov001_0220e77c() {}

extern "C" void func_ov001_0220e740() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_0220e714);
}

extern "C" void func_ov001_0220e714() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220e6b0);
}

extern "C" void func_ov001_0220e6b0() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220e61c);
}

extern "C" void func_ov001_0220e61c() {
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

