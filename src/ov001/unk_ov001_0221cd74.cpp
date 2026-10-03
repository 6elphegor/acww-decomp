// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221ce48_S { s32 unk_00; u8 unk_04[0x600]; u8 unk_604; };
struct Unk_ov001_0221cd74_D { void *unk_00; void *unk_04; };

extern "C" {
void GX_LoadBG2Scr(void *, s32, u32);
void MIi_CpuCopyFast(void *, void *, u32);
void MIi_CpuCopy16(void *, void *, u32);
void DC_FlushRange(void *, s32);
void func_ov001_02226fdc(s32, s32);
u32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02226fd0(s32, s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);

void func_ov001_0221cd74(s32);
void func_ov001_0221cda8(s32);
void func_ov001_0221cdd4(s32);
void func_ov001_0221ce08(s32, s32, s32);
void func_ov001_0221ce48();
void func_ov001_0221ceb0(u8 *, s32, s32, s32);
void func_ov001_0221cf10();
void func_ov001_0221cf28();
void func_ov001_0221cf5c(void *);
}

extern "C" Unk_ov001_0221ce48_S *data_ov001_0222dedc = 0;
extern "C" Unk_ov001_0221cd74_D data_ov001_0222dee0 = {0, 0};

extern "C" void func_ov001_0221cf5c(void *a) {
    Unk_ov001_0221ce48_S *p = (Unk_ov001_0221ce48_S *)func_ov001_02225db0(0x608, 4);
    data_ov001_0222dedc = p;
    MIi_CpuCopyFast(a, p->unk_04, 0x600);
    data_ov001_0222dedc->unk_00 = func_ov001_02227094(1, (void *)func_ov001_0221ce48, 0, 0x78);
}

extern "C" void func_ov001_0221cf28() {
    func_ov001_02226fd0(1, data_ov001_0222dedc->unk_00);
    func_ov001_02225d58(&data_ov001_0222dedc);
}

extern "C" void func_ov001_0221cf10() {
    data_ov001_0222dedc->unk_604 = 1;
}

extern "C" void func_ov001_0221ceb0(u8 *a, s32 b, s32 c, s32 d) {
    u8 *src = data_ov001_0222dedc->unk_04 + b * 2;
    s32 i;
    for (i = 0; i < d; a += 0x40, src += 0x40, i++) {
        MIi_CpuCopy16(a, src, c * 2);
    }
}

extern "C" void func_ov001_0221ce48() {
    if (data_ov001_0222dedc->unk_604 == 0) return;
    DC_FlushRange(data_ov001_0222dedc->unk_04, 0x600);
    GX_LoadBG2Scr(data_ov001_0222dedc->unk_04, 0, 0x600);
    data_ov001_0222dedc->unk_604 = 0;
}

extern "C" void func_ov001_0221ce08(s32 a, s32 b, s32 c) {
    data_ov001_0222dee0.unk_00 = (void *)(a + (b << 5));
    data_ov001_0222dee0.unk_04 = (void *)((c << 5) + 0x5000000);
    func_ov001_02227094(1, (void *)func_ov001_0221cdd4, 0, 0x78);
}

extern "C" void func_ov001_0221cdd4(s32 a) {
    MIi_CpuCopy16(data_ov001_0222dee0.unk_00, data_ov001_0222dee0.unk_04, 0x20);
    func_ov001_02226fdc(1, a);
}

extern "C" void func_ov001_0221cda8(s32 a) {
    data_ov001_0222dee0.unk_00 = (void *)a;
    func_ov001_02227094(1, (void *)func_ov001_0221cd74, 0, 0x78);
}

extern "C" void func_ov001_0221cd74(s32 a) {
    MIi_CpuCopy16(data_ov001_0222dee0.unk_00, (void *)0x5000000, 0x200);
    func_ov001_02226fdc(1, a);
}
