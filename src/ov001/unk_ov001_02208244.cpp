// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_02208594_Fn)(void *, s32, u32);

extern "C" u8 data_ov001_0222dd8c = 0;
extern "C" const u16 data_ov001_02229b74[4] = {0x14, 0, 0xd8, 0x40};

extern "C" {
extern void *data_ov001_0222de1c;
extern void func_02111ba4(void *, s32, u32);
extern void func_ov001_022253d4(s32);
extern void *func_ov001_0222558c(s32, s32);
extern void *func_ov001_0220cbd0(void *, s32, s32, s32);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void func_ov001_0222516c(void *);
s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn);
u32 func_ov001_02208388();
}

#pragma thumb off

extern "C" void func_ov001_02208374() {
    data_ov001_0222dd8c = 0;
}

extern "C" s32 func_ov001_02208290(s32 a, s32 b, s32 c) {
    void *r4, *r5;
    if (data_ov001_0222dd8c != 0) return 0;
    func_ov001_02208594((void *)"char/jtNull.nsc.l", func_02111ba4);
    *(volatile u32 *)0x4001010 = 0x1920000;
    r4 = func_ov001_0222558c(1, 0);
    r5 = func_ov001_0220cbd0(data_ov001_0222de1c, a, b, c);
    u32 t = func_ov001_02208388();
    const u16 *s = data_ov001_02229b74;
    func_ov001_02225254(r4, s[0], s[1], s[2], s[3], 2, t, r5);
    func_ov001_0222516c(r4);
    data_ov001_0222dd8c = 1;
    return 1;
}

extern "C" s32 func_ov001_02208244() {
    if (data_ov001_0222dd8c == 0) return 0;
    func_ov001_022253d4(1);
    data_ov001_0222dd8c = 0;
    return 1;
}

#pragma thumb reset
