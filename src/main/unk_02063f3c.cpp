#include "types.h"

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)

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

extern "C" {
void func_02116048(const void *src, void *dst, u32 n);
s32 func_021127c0(char *buf, u32 n, const char *fmt, va_list va);
void func_02001314(const char *fmt, ...);
void func_02119d78(void *f);
BOOL func_02119a28(void *f, const char *path);
BOOL func_0211a0dc(void *f);
BOOL func_021199e0(void *f);
s32 func_02119848(void *f, s32 off, s32 z);
s32 func_021198b4(void *f, void *dst, u32 n);
void func_02116190(const void *src, void *dst);
u32 func_020e86fc(void *h, u32 flags);
void *func_020e8608(void *h, u32 size);
u32 func_020e8a90(void *h);
void func_020e85fc(void *h, void *p);
void *func_020e8628(void *heap, u32 size, s32 align);
void func_02114534();
void func_02114560();
void func_021163b0(void *st, void *dst, void *src);
s32 func_021162b0(void *st, void *p, s32 n);
s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va);
extern void *data_021f482c;
extern void *data_021f4824;

void func_02064398(void *file, const char *path);
BOOL func_020643b8(void *file, const char *path);
void *func_020641ec(u32 path, void *heap, s32 align, u32 *outSize);
s32 func_02063f3c(u32 a);
void func_02063fcc(u32 a, u32 b, const char *fmt, ...);
void func_02063ffc(const char *fmt, ...);
void func_02064020(s32 a, s32 b, const char *fmt, ...);
void func_020641d8(u32 a);
BOOL func_020643d4(void *file);
s32 func_02063f60(Unk_02063d18_File *f);
s32 func_0206406c(Unk_02063d18_File *f, void *dst, u32 n);
s32 func_02064040(s32 a, s32 b, s32 c, const char *fmt, va_list va);
s32 func_020641b4(const char *buf, void *a, u32 b);
}

BOOL func_020643d4(void *file) {
    return func_0211a0dc(file);
}

BOOL func_020643b8(void *file, const char *path) {
    func_02119d78(file);
    return func_02119a28(file, path);
}

void func_02064398(void *file, const char *path) {
    if (!func_020643b8(file, path)) {
        func_02001314("File can't open. [%s]", path);
    }
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
    func_02064398(&f, (const char *)path);
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

void func_020641d8(u32 a) {
    func_020641ec(a, 0, 4, 0);
}

s32 func_020641b4(const char *buf, void *a, u32 b) {
    Unk_02063d18_File f;
    func_02064398(&f, buf);
    return func_0206406c(&f, a, b);
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

s32 func_02064040(s32 a, s32 b, s32 c, const char *fmt, va_list va) {
    char buf[0x80];
    func_020639c0(buf, 0x80, fmt, va);
    func_020641ec((u32)buf, (void *)a, b, (u32 *)c);
}

void func_02064020(s32 a, s32 b, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_02064040(a, b, 0, fmt, va);
}

void func_02063ffc(const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_02064040(0, 4, 0, fmt, va);
}

void func_02063fcc(u32 a, u32 b, const char *fmt, ...) {
    char buf[0x80];
    va_list va;
    va_start(va, fmt);
    func_020639c0(buf, 0x80, fmt, va);
    func_020641b4(buf, (void *)a, b);
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

s32 func_02063f3c(u32 a) {
    Unk_02063d18_File f;
    func_02064398(&f, (const char *)a);
    s32 r = func_02063f60(&f);
    func_021199e0(&f);
    return r;
}

