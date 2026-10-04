#include "types.h"

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)

// FS file object, 0x48 bytes
struct Unk_02063d18_File {
    u8 unk_00[0x14];
    s32 error;
    u8 unk_18[8];
    s32 unk_20;
    s32 start;
    s32 end;
    s32 pos;
    u8 unk_30[0x18];
};

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 OS_VSNPrintf(char *buf, u32 n, const char *fmt, va_list va);
void Fatal_Panic(const char *fmt, ...);
void FS_InitFile(void *f);
BOOL FS_OpenFile(void *f, const char *path);
BOOL FS_LoadOverlay(void *f);
BOOL FS_CloseFile(void *f);
s32 FS_SeekFile(void *f, s32 off, s32 z);
s32 FS_ReadFile(void *f, void *dst, u32 n);
void MI_UncompressLZ8(const void *src, void *dst);
u32 func_020e86fc(void *h, u32 flags);
void *Heap_Alloc(void *h, u32 size);
u32 func_020e8a90(void *h);
void Heap_Free(void *h, void *p);
void *Heap_AllocAligned(void *heap, u32 size, s32 align);
void DC_StoreAll();
void DC_FlushAll();
void func_021163b0(void *st, void *dst, void *src);
s32 func_021162b0(void *st, void *p, s32 n);
s32 func_020639c0(char *buf, u32 n, const char *fmt, va_list va);
extern void *gCurrentHeap;
extern void *gRootHeap;

void File_OpenOrPanic(void *file, const char *path);
BOOL File_Open(void *file, const char *path);
void *File_LoadAlloc(u32 path, void *heap, s32 align, u32 *outSize);
s32 File_GetDecodedSizeByPath(u32 a);
void File_LoadToBufferF(u32 a, u32 b, const char *fmt, ...);
void File_LoadF(const char *fmt, ...);
void File_LoadAllocF(s32 a, s32 b, const char *fmt, ...);
void File_Load(u32 a);
BOOL File_LoadOverlayEx(void *file);
s32 File_GetDecodedSize(Unk_02063d18_File *f);
s32 File_ReadAll(Unk_02063d18_File *f, void *dst, u32 n);
s32 File_LoadAllocV(s32 a, s32 b, s32 c, const char *fmt, va_list va);
s32 File_LoadToBuffer(const char *buf, void *a, u32 b);
}

BOOL File_LoadOverlayEx(void *file) {
    return FS_LoadOverlay(file);
}

BOOL File_Open(void *file, const char *path) {
    FS_InitFile(file);
    return FS_OpenFile(file, path);
}

void File_OpenOrPanic(void *file, const char *path) {
    if (!File_Open(file, path)) {
        Fatal_Panic("File can't open. [%s]", path);
    }
}

void *File_LoadAlloc(u32 path, void *heap, s32 align, u32 *outSize) {
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
    h = gRootHeap;
    if (heap == 0) heap = gCurrentHeap;
    File_OpenOrPanic(&f, (const char *)path);
    path = f.end - f.start;
    size = path;
    if (size < 8) {
        ret = Heap_AllocAligned(heap, size, align);
        if (ret) FS_ReadFile(&f, ret, size);
    } else if (FS_ReadFile(&f, hdr, 8) != -1) {
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) {
            usize = hdr[1] >> 8;
            ret = Heap_AllocAligned(heap, usize, align);
            if (ret) {
                flags = func_020e86fc(h, 0);
                func_020e86fc(h, flags & 0xffffbfff);
                p = Heap_Alloc(h, size - 4);
                if (p) {
                    MI_CpuCopy8(&hdr[1], p, 4);
                    DC_StoreAll();
                    DC_FlushAll();
                    size -= 8;
                    if (FS_ReadFile(&f, (u8 *)p + 4, size) != -1) MI_UncompressLZ8(p, ret);
                } else {
                    size = func_020e8a90(h);
                    p = Heap_Alloc(h, size);
                    if (p) {
                        func_021163b0(st, ret, &hdr[1]);
                        do {
                            r = FS_ReadFile(&f, p, size);
                            if (r == -1) break;
                            if (func_021162b0(st, p, r) == 0) break;
                        } while (1);
                    }
                }
                if (p) Heap_Free(h, p);
                func_020e86fc(h, flags);
                size = usize;
            }
        } else {
            ret = Heap_AllocAligned(heap, size, align);
            if (ret) {
                MI_CpuCopy8(hdr, ret, 8);
                if (FS_ReadFile(&f, (u8 *)ret + 8, size - 8) == -1) {
                    Heap_Free(heap, ret);
                    ret = 0;
                }
            }
        }
    }
    if (outSize) *outSize = size;
    if (f.error != 0 && ret) {
        Heap_Free(heap, ret);
        ret = 0;
    }
    FS_CloseFile(&f);
    return ret;
}

void File_Load(u32 a) {
    File_LoadAlloc(a, 0, 4, 0);
}

s32 File_LoadToBuffer(const char *buf, void *a, u32 b) {
    Unk_02063d18_File f;
    File_OpenOrPanic(&f, buf);
    return File_ReadAll(&f, a, b);
}

s32 File_ReadAll(Unk_02063d18_File *f, void *dst, u32 n) {
    s32 ret;
    u32 flags;
    u32 hdr[2];
    u32 st[4];
    u32 size = f->end - f->start;
    ret = size;
    if (size < 8) {
        if (size <= n) {
            FS_ReadFile(f, dst, size);
        } else {
            ret = 0;
        }
    } else if (FS_ReadFile(f, &hdr, 8) != -1) {
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) {
            ret = hdr[1] >> 8;
            void *h = gRootHeap;
            flags = func_020e86fc(h, 0);
            func_020e86fc(h, flags & 0xffffbfff);
            n = (u32)Heap_Alloc(h, size - 4);
            if (n) {
                MI_CpuCopy8(&hdr[1], (void *)n, 4);
                DC_StoreAll();
                DC_FlushAll();
                size -= 8;
                if (FS_ReadFile(f, (u8 *)n + 4, size) != -1) MI_UncompressLZ8((void *)n, dst);
            } else {
                size = func_020e8a90(h);
                n = (u32)Heap_Alloc(h, size);
                if (n) {
                    func_021163b0(st, dst, &hdr[1]);
                    do {
                        s32 r = FS_ReadFile(f, (void *)n, size);
                        if (r == -1) break;
                        if (func_021162b0(st, (void *)n, r) == 0) break;
                    } while (1);
                }
            }
            if (n) Heap_Free(h, (void *)n);
            func_020e86fc(h, flags);
        } else if (size <= n) {
            MI_CpuCopy8(hdr, dst, 8);
            u8 *d8 = (u8 *)dst + 8;
            dst = d8;
            size -= 8;
            FS_ReadFile(f, d8, size);
        } else {
            ret = 0;
        }
    }
    if (f->error != 0) ret = 0;
    FS_CloseFile(f);
    return ret;
}

s32 File_LoadAllocV(s32 a, s32 b, s32 c, const char *fmt, va_list va) {
    char buf[0x80];
    func_020639c0(buf, 0x80, fmt, va);
    File_LoadAlloc((u32)buf, (void *)a, b, (u32 *)c);
}

void File_LoadAllocF(s32 a, s32 b, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    File_LoadAllocV(a, b, 0, fmt, va);
}

void File_LoadF(const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    File_LoadAllocV(0, 4, 0, fmt, va);
}

void File_LoadToBufferF(u32 a, u32 b, const char *fmt, ...) {
    char buf[0x80];
    va_list va;
    va_start(va, fmt);
    func_020639c0(buf, 0x80, fmt, va);
    File_LoadToBuffer(buf, (void *)a, b);
}

s32 File_GetDecodedSize(Unk_02063d18_File *f) {
    u32 hdr[2];
    s32 e;
    u32 size = f->end - f->start;
    if (size >= 8) {
        u32 base = f->pos - f->start;
        FS_SeekFile(f, 0, 0);
        e = -1;
        if (FS_ReadFile(f, hdr, 8) == e) goto fail;
        if (hdr[0] == 0x37375a4c || hdr[0] == 0x4c5a3737) size = hdr[1] >> 8;
        FS_SeekFile(f, base, 0);
    }
    if (f->error != 0) size = -1;
    return size;
fail:
    return e;
}

s32 File_GetDecodedSizeByPath(u32 a) {
    Unk_02063d18_File f;
    File_OpenOrPanic(&f, (const char *)a);
    s32 r = File_GetDecodedSize(&f);
    FS_CloseFile(&f);
    return r;
}

