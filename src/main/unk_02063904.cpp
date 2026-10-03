#include "types.h"

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)

struct Unk_02063eac_FileId {
    u32 unk_00;
    u32 unk_04;
};

// FS file object, 0x48 bytes
struct Unk_02063d18_File {
    u8 unk_00[0x14];
    s32 unk_14;
    u8 unk_18[8];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
    u8 unk_30[0x18];
};

struct Unk_02063d18_Hdr {
    u32 magic;
    union {
        u32 w;
        struct {
            u32 lg : 4;
            u32 rest : 28;
        } b;
    };
};

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}

extern "C" {
u32 func_02063b8c(u32 n);
}

extern "C" {
s32 OS_VSNPrintf(char *buf, u32 n, const char *fmt, va_list va);
}

extern "C" {
s32 memcmp();
}

extern "C" {
void *_ZN12Unk_02056fd813func_02057030Ev(void *a, s32 b);
}

extern "C" {
s32 _ZN12Unk_02056fd813func_02057078Ei(void *a, s32 b);
}

extern "C" {
void *_ZN12Unk_02056fd813func_02057048Ei(void *a, s32 b);
}

extern "C" {
u32 _ZN12Unk_02056fd813func_02056fd8Ei(void *a, s32 b);
}

extern "C" {
void *_ZN12Unk_02056fd813func_020570e0Ev(void *a, s32 b);
}

extern "C" {
s32 _ZN12Unk_02056fd813func_02057100Ei(void *a, s32 b);
}

extern "C" {
void *_ZN12Unk_02056fd813func_020570b0Ei(void *a, s32 b);
}

extern "C" {
u32 _ZN12Unk_02056fd813func_02057084Ei(void *a, s32 b);
}

extern "C" {
s32 FX_Div(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
u32 func_020e7f90(void *state, u32 n);
}

extern "C" {
u32 func_020e7fa8(void *state);
}

extern "C" {
s32 FS_UnloadOverlay(s32 a, s32 b);
}

extern "C" {
s32 func_020643d4(s32 a, s32 b);
}

extern "C" {
extern u8 data_021c7c88[];
}

extern "C" {
void func_02064398(Unk_02063d18_File *f, u32 a);
}

extern "C" {
BOOL func_020643b8(Unk_02063d18_File *f, u32 a);
}

extern "C" {
void *func_020641ec(u32 path, void *heap, s32 align, u32 *outSize);
}

extern "C" {
void *func_020e8628(void *heap, u32 size, s32 align);
}

extern "C" {
extern void *data_021f482c;
}

extern "C" {
s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va);
}

extern "C" {
s32 func_020639d0(char *buf, const char *fmt, va_list va);
}

extern "C" {
void FS_InitFile(void *f);
}

extern "C" {
BOOL FS_OpenFileFast(void *f, Unk_02063eac_FileId id);
}

extern "C" {
BOOL FS_CloseFile(void *f);
}

extern "C" {
s32 FS_SeekFile(void *f, s32 off, s32 z);
}

extern "C" {
s32 FS_ReadFile(void *f, void *dst, u32 n);
}

extern "C" {
void MI_UncompressLZ8(const void *src, void *dst);
}

extern "C" {
u32 _u32_div_f(u32 a, u32 b);
}

extern "C" {
u16 func_0206392c(void *p);
}

extern "C" {
void func_020639a0(u16 *p);
}

extern "C" {
void func_02063cdc(u8 *p);
}

extern "C" {
s32 func_02063f60(Unk_02063d18_File *f);
}

extern "C" {
void func_02063d18(Unk_02063d18_File *f, void *dst, u32 size, u32 off);
}

extern "C" {
s32 func_0206406c(Unk_02063d18_File *f, void *dst, u32 n);
}

extern "C" {
u32 func_020e86fc(void *h, u32 flags);
}

extern "C" {
void *func_020e8608(void *h, u32 size);
}

extern "C" {
u32 func_020e8a90(void *h);
}

extern "C" {
void func_020e85fc(void *h, void *p);
}

extern "C" {
void DC_StoreAll();
}

extern "C" {
void DC_FlushAll();
}

extern "C" {
void func_021163b0(void *st, void *dst, void *src);
}

extern "C" {
s32 func_021162b0(void *st, void *p, s32 n);
}

extern "C" {
extern void *data_021f4824;
}

extern "C" {
s32 func_02064040(s32 a, s32 b, s32 c, const char *fmt, va_list va);
}

extern "C" {
s32 func_020641b4(const char *buf, void *a, u32 b);
}

struct Unk_021c7d40_Buf {
    u16 tbl[0x100];
    u32 raw[0x400];
    u8 out[0x1000];
};

extern Unk_021c7d40_Buf data_021c7d40;
extern u16 data_021c7d3c;
extern u8 data_021c7d38;

extern "C" {
enum Unk_02063d18_Type { Unk_02063d18_T0 = 0, Unk_02063d18_T10 = 0x10, Unk_02063d18_TF0 = 0xf0 };
}

extern "C" BOOL func_02063f18(u32 a);
extern "C" void func_02063ee8(u32 a, void *dst, u32 size, u32 off);
extern "C" void func_02063eac(Unk_02063eac_FileId id, s32 a, s32 b, s32 c);
extern "C" void func_02063d18(Unk_02063d18_File *f, void *dst, u32 size, u32 off);
extern "C" s32 func_02063d0c(s32 x);
extern "C" s32 func_02063d00(s32 x);
extern "C" void func_02063cfc();
extern "C" void func_02063cf8();
extern "C" void func_02063cdc(u8 *p);
extern "C" BOOL func_02063ca0(u8 *p);
extern "C" void func_02063c94(u8 *p);
extern "C" void func_02063c7c(u8 *p);
extern "C" s32 func_02063c54(s32 x);
extern "C" s32 func_02063c18(s32 x);
extern "C" s32 func_02063ba4(s32 x);
extern "C" u32 func_02063b8c(u32 n);
extern "C" u32 func_02063b74(u32 n);
extern "C" s32 func_02063a9c(s32 x, s32 lo, s32 hi, s32 a, s32 b);
extern "C" void func_02063a5c(void *a, void *b, s32 c, s32 d);
extern "C" void func_02063a1c(void *a, void *b, s32 c, s32 d);
extern "C" BOOL func_02063a04();
extern "C" s32 func_020639e8(char *buf, const char *fmt, ...);
extern "C" s32 func_020639d0(char *buf, const char *fmt, va_list va);
extern "C" s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va);
extern "C" void func_020639bc();
extern "C" void func_020639b8();
extern "C" void func_020639a0(u16 *p);
extern "C" void func_02063990(void *dst, void *src);
extern "C" void func_0206397c(u16 *dst, u16 *src);
extern "C" void func_02063968(u16 *src, u16 *dst);
extern "C" u16 *func_02063964(u16 *p);
extern "C" BOOL func_02063954(u16 *p);
extern "C" void func_02063950(u16 *p, u16 v);
extern "C" u16 func_0206392c(void *p);
extern "C" void func_02063904(u16 *p, const void *src);



extern "C" BOOL func_02063f18(u32 a) {
    Unk_02063d18_File f;
    BOOL r = func_020643b8(&f, a);
    if (r) FS_CloseFile(&f);
    return r;
}

extern "C" void func_02063ee8(u32 a, void *dst, u32 size, u32 off) {
    Unk_02063d18_File f;
    func_02064398(&f, a);
    func_02063d18(&f, dst, size, off);
    FS_CloseFile(&f);
}

extern "C" void func_02063eac(Unk_02063eac_FileId id, s32 a, s32 b, s32 c) {
    Unk_02063d18_File f;
    FS_InitFile(&f);
    if (FS_OpenFileFast(&f, id)) {
        func_02063d18(&f, (void *)a, b, c);
        FS_CloseFile(&f);
    }
}

extern "C" void func_02063d18(Unk_02063d18_File *f, void *dst, u32 size, u32 off) {
    Unk_02063d18_Hdr hdr;
    u32 n, nblk, base;
    s32 len, c;
    u32 end, lo, hi;
    u32 blk, i;
    s32 a, b;

    FS_SeekFile(f, 0, 0);
    if (FS_ReadFile(f, &hdr, 8) == -1) return;
    if (hdr.magic == 0x37375a4c || hdr.magic == 0x4c5a3737) {
        if ((hdr.w & 0xf0) != 0xf0) return;
        if ((u32)(f->unk_28 - f->unk_24) > 0xffff) return;
        blk = 0x20 << hdr.b.lg;
        data_021c7d40.tbl[0] = 0;
        n = ((_u32_div_f((hdr.w >> 8) - 1, blk) + 1)) * 2;
        FS_ReadFile(f, (u8 *)data_021c7d40.tbl + 2, n);
        base = n + 8;
        end = off + size;
        nblk = _u32_div_f(end - 1, blk) + 1;
        for (i = _u32_div_f(off, blk); i < nblk; i++) {
            hi = blk * (i + 1);
            if (off >= hi) continue;
            lo = blk * i;
            if (end <= lo) continue;
            if (f->unk_20 != data_021c7d3c || i != data_021c7d38) {
                data_021c7d3c = f->unk_20;
                data_021c7d38 = i;
                u16 *tp = data_021c7d40.tbl + i;
                u32 t0 = tp[0];
                len = tp[1] - t0;
                FS_SeekFile(f, base + t0, 0);
                FS_ReadFile(f, data_021c7d40.raw, len);
                u32 w = data_021c7d40.raw[0];
                Unk_02063d18_Type ty = (Unk_02063d18_Type)(w & 0xf0);
                u32 sz = w >> 8;
                if (ty == Unk_02063d18_T0) {
                    MI_CpuCopy8((u8 *)data_021c7d40.raw + 4, data_021c7d40.out, sz);
                } else {
                    MI_UncompressLZ8(data_021c7d40.raw, data_021c7d40.out);
                }
            }
            a = off - lo;
            if (a < 0) a = 0;
            b = hi - end;
            if (b < 0) b = 0;
            c = blk - a - b;
            MI_CpuCopy8(data_021c7d40.out + a, dst, c);
            dst = (u8 *)dst + c;
        }
    } else {
        FS_SeekFile(f, off, 0);
        FS_ReadFile(f, dst, size);
    }
}

extern "C" s32 func_02063d0c(s32 x) { return func_020643d4(0, x); }

extern "C" s32 func_02063d00(s32 x) { return FS_UnloadOverlay(0, x); }

extern "C" void func_02063cfc() {}

extern "C" void func_02063cf8() {}

extern "C" void func_02063cdc(u8 *p) {
    p[1] = (func_020e7fa8(data_021c7c88) >> 31) + 1;
}

extern "C" BOOL func_02063ca0(u8 *p) {
    u32 t = p[0];
    if (t == 0) {
        t = p[1];
        if (t == 0) {
            func_02063cdc(p);
            p[0] = func_020e7f90(data_021c7c88, 0x5a) + 0x1e;
        } else {
            p[1] = t - 1;
            return TRUE;
        }
    } else {
        p[0] = t - 1;
    }
    return FALSE;
}

extern "C" void func_02063c94(u8 *p) {
    p[1] = 0;
    p[0] = p[1];
}

extern "C" void func_02063c7c(u8 *p) {
    p[0] = 0;
    if (p[1] == 0) func_02063cdc(p);
}

extern "C" s32 func_02063c54(s32 x) {
    if (x > 0 && x < 0x8000) return 0;
    if (x > -0x8000 && x < 0) return 1;
    return 2;
}

extern "C" s32 func_02063c18(s32 x) {
    if (x <= -0x6000) return 2;
    if (x <= -0x2000) return 3;
    if (x <= 0x2000) return 0;
    if (x <= 0x6000) return 1;
    return 2;
}

extern "C" s32 func_02063ba4(s32 x) {
    if (x <= -0x7556) return 4;
    if (x <= -0x4aaa) return 5;
    if (x <= -0x3556) return 6;
    if (x <= -0xaaa) return 7;
    if (x <= 0xaaa) return 0;
    if (x <= 0x3556) return 1;
    if (x <= 0x4aaa) return 2;
    if (x <= 0x7556) return 3;
    return 4;
}

#pragma thumb off
extern "C" u32 func_02063b8c(u32 n) { return func_020e7f90(data_021c7c88, n); }

extern "C" u32 func_02063b74(u32 n) { return func_020e7f90(data_021c7c88, n); }
#pragma thumb reset

extern "C" s32 func_02063a9c(s32 x, s32 lo, s32 hi, s32 a, s32 b) {
    if (x >= hi) return 0x1000;
    if (x <= lo) return 0;
    s32 w = hi - lo;
    s32 t = x - lo;
    if (w < a + b) return 0;
    s32 k = FX_Div(0x1000, w * 2 - a - b);
    s32 r = 0;
    if (a != 0) {
        if (t <= a) {
            s32 v = FX_Div(func_01ffcb0c(k, func_01ffcb0c(t, t)), a);
            if (v > 0x1000) return 0x1000;
            return v;
        }
        r = func_01ffcb0c(k, a);
    }
    if (t <= w - b) {
        r = r + (func_01ffcb0c(k, t - a) << 1);
        if (r > 0x1000) return 0x1000;
        return r;
    }
    r += func_01ffcb0c(k, w - a - b) << 1;
    if (b != 0) {
        r += func_01ffcb0c(k, b);
        if (t < w) {
            r -= FX_Div(func_01ffcb0c(k, func_01ffcb0c(w - t, w - t)), b);
        }
    }
    if (r > 0x1000) r = 0x1000;
    return r;
}

extern "C" void func_02063a5c(void *a, void *b, s32 c, s32 d) {
    void *p = _ZN12Unk_02056fd813func_020570e0Ev(a, c);
    s32 i = _ZN12Unk_02056fd813func_02057100Ei(b, d);
    void *q = _ZN12Unk_02056fd813func_020570b0Ei(b, i);
    u32 n = _ZN12Unk_02056fd813func_02057084Ei(b, i);
    MI_CpuCopy8(p, q, n);
}

extern "C" void func_02063a1c(void *a, void *b, s32 c, s32 d) {
    void *p = _ZN12Unk_02056fd813func_02057030Ev(a, c);
    s32 i = _ZN12Unk_02056fd813func_02057078Ei(b, d);
    void *q = _ZN12Unk_02056fd813func_02057048Ei(b, i);
    u32 n = _ZN12Unk_02056fd813func_02056fd8Ei(b, i);
    MI_CpuCopy8(p, q, n);
}

extern "C" BOOL func_02063a04() {
    if (memcmp()) return TRUE;
    return FALSE;
}

extern "C" s32 func_020639e8(char *buf, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    return func_020639d0(buf, fmt, va);
}

extern "C" s32 func_020639d0(char *buf, const char *fmt, va_list va) { func_020639c0(buf, 0x7fffffff, fmt, va); }

extern "C" s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va) { OS_VSNPrintf(buf, n, fmt, va); }

extern "C" void func_020639bc() {}

extern "C" void func_020639b8() {}

extern "C" void func_020639a0(u16 *p) {
    MI_CpuFill8(p + 1, 0, 8);
    *p = 0;
}

extern "C" void func_02063990(void *dst, void *src) { MI_CpuCopy8(src, dst, 10); }

extern "C" void func_0206397c(u16 *dst, u16 *src) {
    *dst = *src;
    MI_CpuCopy8(src + 1, dst + 1, 8);
}

extern "C" void func_02063968(u16 *src, u16 *dst) {
    *dst = *src;
    MI_CpuCopy8(src + 1, dst + 1, 8);
}

extern "C" u16 *func_02063964(u16 *p) { return p + 1; }

extern "C" BOOL func_02063954(u16 *p) {
    BOOL r = FALSE;
    if (*p != 0) r = TRUE;
    return r;
}

extern "C" void func_02063950(u16 *p, u16 v) { *p = v; }

extern "C" u16 func_0206392c(void *p) {
    u32 r = (u16)func_02063b8c(0x7fff);
    r |= 0x8000;
    return (u16)r;
}

extern "C" void func_02063904(u16 *p, const void *src) {
    func_020639a0(p);
    MI_CpuCopy8(src, p + 1, 8);
    *p = func_0206392c(p);
}


u8 data_021c7d38;

u16 data_021c7d3c;

Unk_021c7d40_Buf data_021c7d40;
