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
void func_02116048(const void *src, void *dst, u32 n);
void func_02115fb4(void *p, u32 v, u32 n);
u32 func_02063b8c(u32 n);
s32 func_021127c0(char *buf, u32 n, const char *fmt, va_list va);
s32 func_02128930();
void *func_02057030(void *a, s32 b);
s32 func_02057078(void *a, s32 b);
void *func_02057048(void *a, s32 b);
u32 func_02056fd8(void *a, s32 b);
void *func_020570e0(void *a, s32 b);
s32 func_02057100(void *a, s32 b);
void *func_020570b0(void *a, s32 b);
u32 func_02057084(void *a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
u32 func_020e7f90(void *state, u32 n);
u32 func_020e7fa8(void *state);
s32 func_0211a088(s32 a, s32 b);
s32 func_020643d4(s32 a, s32 b);
extern u8 data_021c7c88[];
extern u16 data_021c7d40[];
extern u16 data_021c7d3c;
extern u8 data_021c7d38;
extern u32 data_021c7f40[];
extern u8 data_021c8f40[];

void func_02064398(Unk_02063d18_File *f, u32 a);
BOOL func_020643b8(Unk_02063d18_File *f, u32 a);
void *func_020641ec(u32 path, void *heap, s32 align, u32 *outSize);
void *func_020e8628(void *heap, u32 size, s32 align);
extern void *data_021f482c;
s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va);
s32 func_020639d0(char *buf, const char *fmt, va_list va);
void func_02119d78(void *f);
BOOL func_02119a78(void *f, Unk_02063eac_FileId id);
BOOL func_021199e0(void *f);
s32 func_02119848(void *f, s32 off, s32 z);
s32 func_021198b4(void *f, void *dst, u32 n);
void func_02116190(const void *src, void *dst);
u32 func_0213335c(u32 a, u32 b);
u16 func_0206392c(void *p);
void func_020639a0(u16 *p);
void func_02063cdc(u8 *p);
s32 func_02063f60(Unk_02063d18_File *f);
void func_02063d18(Unk_02063d18_File *f, void *dst, u32 size, u32 off);
s32 func_0206406c(Unk_02063d18_File *f, void *dst, u32 n);
u32 func_020e86fc(void *h, u32 flags);
void *func_020e8608(void *h, u32 size);
u32 func_020e8a90(void *h);
void func_020e85fc(void *h, void *p);
void func_02114534();
void func_02114560();
void func_021163b0(void *st, void *dst, void *src);
s32 func_021162b0(void *st, void *p, s32 n);
extern void *data_021f4824;
s32 func_02064040(s32 a, s32 b, s32 c, const char *fmt, va_list va);
s32 func_020641b4(const char *buf, void *a, u32 b);

void func_02063904(u16 *p, const void *src) {
    func_020639a0(p);
    func_02116048(src, p + 1, 8);
    *p = func_0206392c(p);
}

u16 func_0206392c(void *p) {
    u32 r = (u16)func_02063b8c(0x7fff);
    r |= 0x8000;
    return (u16)r;
}

void func_02063950(u16 *p, u16 v) { *p = v; }

BOOL func_02063954(u16 *p) {
    BOOL r = FALSE;
    if (*p != 0) r = TRUE;
    return r;
}

u16 *func_02063964(u16 *p) { return p + 1; }

void func_02063968(u16 *src, u16 *dst) {
    *dst = *src;
    func_02116048(src + 1, dst + 1, 8);
}

void func_0206397c(u16 *dst, u16 *src) {
    *dst = *src;
    func_02116048(src + 1, dst + 1, 8);
}

void func_02063990(void *dst, void *src) { func_02116048(src, dst, 10); }

void func_020639a0(u16 *p) {
    func_02115fb4(p + 1, 0, 8);
    *p = 0;
}

void func_020639b8() {}
void func_020639bc() {}

s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va) { func_021127c0(buf, n, fmt, va); }

s32 func_020639d0(char *buf, const char *fmt, va_list va) { func_020639c0(buf, 0x7fffffff, fmt, va); }

s32 func_020639e8(char *buf, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    return func_020639d0(buf, fmt, va);
}

BOOL func_02063a04() {
    if (func_02128930()) return TRUE;
    return FALSE;
}

void func_02063a1c(void *a, void *b, s32 c, s32 d) {
    void *p = func_02057030(a, c);
    s32 i = func_02057078(b, d);
    void *q = func_02057048(b, i);
    u32 n = func_02056fd8(b, i);
    func_02116048(p, q, n);
}

void func_02063a5c(void *a, void *b, s32 c, s32 d) {
    void *p = func_020570e0(a, c);
    s32 i = func_02057100(b, d);
    void *q = func_020570b0(b, i);
    u32 n = func_02057084(b, i);
    func_02116048(p, q, n);
}

#pragma thumb off
u32 func_02063b74(u32 n) { return func_020e7f90(data_021c7c88, n); }
u32 func_02063b8c(u32 n) { return func_020e7f90(data_021c7c88, n); }
#pragma thumb reset

s32 func_02063a9c(s32 x, s32 lo, s32 hi, s32 a, s32 b) {
    if (x >= hi) return 0x1000;
    if (x <= lo) return 0;
    s32 w = hi - lo;
    s32 t = x - lo;
    if (w < a + b) return 0;
    s32 k = func_01ffc5a4(0x1000, w * 2 - a - b);
    s32 r = 0;
    if (a != 0) {
        if (t <= a) {
            s32 v = func_01ffc5a4(func_01ffcb0c(k, func_01ffcb0c(t, t)), a);
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
            r -= func_01ffc5a4(func_01ffcb0c(k, func_01ffcb0c(w - t, w - t)), b);
        }
    }
    if (r > 0x1000) r = 0x1000;
    return r;
}

s32 func_02063ba4(s32 x) {
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

s32 func_02063c18(s32 x) {
    if (x <= -0x6000) return 2;
    if (x <= -0x2000) return 3;
    if (x <= 0x2000) return 0;
    if (x <= 0x6000) return 1;
    return 2;
}

s32 func_02063c54(s32 x) {
    if (x > 0 && x < 0x8000) return 0;
    if (x > -0x8000 && x < 0) return 1;
    return 2;
}

void func_02063c7c(u8 *p) {
    p[0] = 0;
    if (p[1] == 0) func_02063cdc(p);
}

void func_02063c94(u8 *p) {
    p[1] = 0;
    p[0] = p[1];
}

BOOL func_02063ca0(u8 *p) {
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

void func_02063cdc(u8 *p) {
    p[1] = (func_020e7fa8(data_021c7c88) >> 31) + 1;
}

void func_02063cf8() {}
void func_02063cfc() {}

s32 func_02063d00(s32 x) { return func_0211a088(0, x); }
s32 func_02063d0c(s32 x) { return func_020643d4(0, x); }


enum Unk_02063d18_Type { Unk_02063d18_T0 = 0, Unk_02063d18_T10 = 0x10, Unk_02063d18_TF0 = 0xf0 };
void func_02063d18(Unk_02063d18_File *f, void *dst, u32 size, u32 off) {
    Unk_02063d18_Hdr hdr;
    u32 n, nblk, base;
    s32 len, c;
    u32 end, lo, hi;
    u32 blk, i;
    s32 a, b;

    func_02119848(f, 0, 0);
    if (func_021198b4(f, &hdr, 8) == -1) return;
    if (hdr.magic == 0x37375a4c || hdr.magic == 0x4c5a3737) {
        if ((hdr.w & 0xf0) != 0xf0) return;
        if ((u32)(f->unk_28 - f->unk_24) > 0xffff) return;
        blk = 0x20 << hdr.b.lg;
        data_021c7d40[0] = 0;
        n = ((func_0213335c((hdr.w >> 8) - 1, blk) + 1)) * 2;
        func_021198b4(f, (u8 *)data_021c7d40 + 2, n);
        base = n + 8;
        end = off + size;
        nblk = func_0213335c(end - 1, blk) + 1;
        for (i = func_0213335c(off, blk); i < nblk; i++) {
            hi = blk * (i + 1);
            if (off >= hi) continue;
            lo = blk * i;
            if (end <= lo) continue;
            if (f->unk_20 != data_021c7d3c || i != data_021c7d38) {
                data_021c7d3c = f->unk_20;
                data_021c7d38 = i;
                u16 *tp = data_021c7d40 + i;
                u32 t0 = tp[0];
                len = tp[1] - t0;
                func_02119848(f, base + t0, 0);
                func_021198b4(f, data_021c7f40, len);
                u32 w = data_021c7f40[0];
                Unk_02063d18_Type ty = (Unk_02063d18_Type)(w & 0xf0);
                u32 sz = w >> 8;
                if (ty == Unk_02063d18_T0) {
                    func_02116048((u8 *)data_021c7f40 + 4, data_021c8f40, sz);
                } else {
                    func_02116190(data_021c7f40, data_021c8f40);
                }
            }
            a = off - lo;
            if (a < 0) a = 0;
            b = hi - end;
            if (b < 0) b = 0;
            c = blk - a - b;
            func_02116048(data_021c8f40 + a, dst, c);
            dst = (u8 *)dst + c;
        }
    } else {
        func_02119848(f, off, 0);
        func_021198b4(f, dst, size);
    }
}


void func_02063eac(Unk_02063eac_FileId id, s32 a, s32 b, s32 c) {
    Unk_02063d18_File f;
    func_02119d78(&f);
    if (func_02119a78(&f, id)) {
        func_02063d18(&f, (void *)a, b, c);
        func_021199e0(&f);
    }
}

void func_02063ee8(u32 a, void *dst, u32 size, u32 off) {
    Unk_02063d18_File f;
    func_02064398(&f, a);
    func_02063d18(&f, dst, size, off);
    func_021199e0(&f);
}

BOOL func_02063f18(u32 a) {
    Unk_02063d18_File f;
    BOOL r = func_020643b8(&f, a);
    if (r) func_021199e0(&f);
    return r;
}

s32 func_02063f3c(u32 a) {
    Unk_02063d18_File f;
    func_02064398(&f, a);
    s32 r = func_02063f60(&f);
    func_021199e0(&f);
    return r;
}

s32 func_02063f60(Unk_02063d18_File *f) {
    u32 hdr[2];
    s32 e;
    u32 size = f->unk_28 - f->unk_24;
    if (size >= 8) {
        u32 base = f->unk_2c - f->unk_24;
        func_02119848(f, 0, 0);
        e = -1;
        if (func_021198b4(f, hdr, 8) == e) goto fail;
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) size = hdr[1] >> 8;
        func_02119848(f, base, 0);
    }
    if (f->unk_14 != 0) size = -1;
    return size;
fail:
    return e;
}

void func_02063fcc(u32 a, u32 b, const char *fmt, ...) {
    char buf[0x80];
    va_list va;
    va_start(va, fmt);
    func_020639c0(buf, 0x80, fmt, va);
    func_020641b4(buf, (void *)a, b);
}

void func_02063ffc(const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_02064040(0, 4, 0, fmt, va);
}

void func_02064020(s32 a, s32 b, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_02064040(a, b, 0, fmt, va);
}

s32 func_02064040(s32 a, s32 b, s32 c, const char *fmt, va_list va) {
    char buf[0x80];
    func_020639c0(buf, 0x80, fmt, va);
    func_020641ec((u32)buf, (void *)a, b, (u32 *)c);
}

s32 func_0206406c(Unk_02063d18_File *f, void *dst, u32 n) {
    s32 ret;
    u32 flags;
    u32 hdr[2];
    u32 st[4];
    u32 size = f->unk_28 - f->unk_24;
    ret = size;
    if (size < 8) {
        if (size <= n) {
            func_021198b4(f, dst, size);
        } else {
            ret = 0;
        }
    } else if (func_021198b4(f, &hdr, 8) != -1) {
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) {
            ret = hdr[1] >> 8;
            void *h = data_021f4824;
            flags = func_020e86fc(h, 0);
            func_020e86fc(h, flags & 0xffffbfff);
            n = (u32)func_020e8608(h, size - 4);
            if (n) {
                func_02116048(&hdr[1], (void *)n, 4);
                func_02114534();
                func_02114560();
                size -= 8;
                if (func_021198b4(f, (u8 *)n + 4, size) != -1) func_02116190((void *)n, dst);
            } else {
                size = func_020e8a90(h);
                n = (u32)func_020e8608(h, size);
                if (n) {
                    func_021163b0(st, dst, &hdr[1]);
                    do {
                        s32 r = func_021198b4(f, (void *)n, size);
                        if (r == -1) break;
                        if (func_021162b0(st, (void *)n, r) == 0) break;
                    } while (1);
                }
            }
            if (n) func_020e85fc(h, (void *)n);
            func_020e86fc(h, flags);
        } else if (size <= n) {
            func_02116048(hdr, dst, 8);
            u8 *d8 = (u8 *)dst + 8;
            dst = d8;
            size -= 8;
            func_021198b4(f, d8, size);
        } else {
            ret = 0;
        }
    }
    if (f->unk_14 != 0) ret = 0;
    func_021199e0(f);
    return ret;
}

s32 func_020641b4(const char *buf, void *a, u32 b) {
    Unk_02063d18_File f;
    func_02064398(&f, (u32)buf);
    return func_0206406c(&f, a, b);
}

void func_020641d8(u32 a) {
    func_020641ec(a, 0, 4, 0);
}


void *func_020641ec(u32 path, void *heap, s32 align, u32 *outSize) {
    void *ret;
    u32 flags;
    void *h;
    u32 usize;
    u32 hdr[2];
    u32 st[4];
    Unk_02063d18_File f;
    u32 size;
    void *p;
    s32 r;

    ret = 0;
    h = data_021f4824;
    if (heap == 0) heap = data_021f482c;
    func_02064398(&f, path);
    path = f.unk_28 - f.unk_24;
    size = path;
    if (size < 8) {
        ret = func_020e8628(heap, size, align);
        if (ret) func_021198b4(&f, ret, size);
    } else if (func_021198b4(&f, hdr, 8) != -1) {
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) {
            usize = hdr[1] >> 8;
            ret = func_020e8628(heap, usize, align);
            if (ret) {
                flags = func_020e86fc(h, 0);
                func_020e86fc(h, flags & 0xffffbfff);
                p = func_020e8608(h, size - 4);
                if (p) {
                    func_02116048(&hdr[1], p, 4);
                    func_02114534();
                    func_02114560();
                    size -= 8;
                    if (func_021198b4(&f, (u8 *)p + 4, size) != -1) func_02116190(p, ret);
                } else {
                    size = func_020e8a90(h);
                    p = func_020e8608(h, size);
                    if (p) {
                        func_021163b0(st, ret, &hdr[1]);
                        do {
                            r = func_021198b4(&f, p, size);
                            if (r == -1) break;
                            if (func_021162b0(st, p, r) == 0) break;
                        } while (1);
                    }
                }
                if (p) func_020e85fc(h, p);
                func_020e86fc(h, flags);
                size = usize;
            }
        } else {
            ret = func_020e8628(heap, size, align);
            if (ret) {
                func_02116048(hdr, ret, 8);
                if (func_021198b4(&f, (u8 *)ret + 8, size - 8) == -1) {
                    func_020e85fc(heap, ret);
                    ret = 0;
                }
            }
        }
    }
    if (outSize) *outSize = size;
    if (f.unk_14 != 0 && ret) {
        func_020e85fc(heap, ret);
        ret = 0;
    }
    func_021199e0(&f);
    return ret;
}

}
