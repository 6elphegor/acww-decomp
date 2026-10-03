#include "types.h"

struct Unk_0205ce0c {
    u8 v;
    Unk_0205ce0c();
    ~Unk_0205ce0c();
    void func_0205ce0c(s32 a, s32 b, s32 c, s32 d);
    s32 func_0205ce78(s32 a, s32 b, s32 c);
    void func_0205cf54();
    void func_0205cf60();
    void func_0205cf6c(u32 j);
    void func_0205cf80(u32 x);
    void func_0205cf84(u32 x);
};

struct Unk_0205cfb4 {
    u32 ptr[9];
    u16 a[2][9];
    u16 b[2][9];
    Unk_0205cfb4();
    ~Unk_0205cfb4();
    void func_0205cfb4(u32 i, u32 j, u32 val);
    u32 func_0205cfc8(u32 i, u32 j);
    u32 func_0205cfd8(u32 x);
    void func_0205d010(u32 i, u32 j, u32 val);
    u32 func_0205d028(u32 i, u32 j);
    u32 func_0205d038(u32 i, u32 j);
    void func_0205d054();
    void func_0205d0ac();
};

extern "C" {
extern Unk_0205cfb4 data_021c6464;
extern void *data_021c61d4;
extern u8 *gCommManager;
extern const u8 data_020cb1ec[];
extern u8 data_021c6450[];

void func_0205bda8();
void func_0205bdc4();
void *Heap_AllocAligned(void *heap, u32 size, u32 align);
void func_020e885c(void *p);
void func_020e877c(void *p);
u32 func_020b50e8();
u32 func_020b4928(u32 a);
u32 func_020b491c(u32 a);
u32 func_02084fbc();
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 File_LoadToBuffer(void *name, void *buf, s32 size);
void func_020639e8(void *buf, const char *fmt, u32 a, u32 b);

u32 func_0205d16c(u32 x);
u32 func_0205d178();
u32 func_0205d190();
u8 *func_0205d198(u32 x);
}

extern "C" void func_0205d1d0() {
    func_0205bdc4();
    data_021c6464.func_0205d0ac();
    if (data_021c61d4) func_020e877c(data_021c61d4);
}

extern "C" void func_0205d1b8() {
    data_021c6464.func_0205d054();
    func_0205bda8();
}

extern "C" u8 *func_0205d198(u32 x) {
    func_020639e8(data_021c6450, "/FcAnm/%d/%d.nsbtp", x >> 5, x);
    return data_021c6450;
}

extern "C" u32 func_0205d190() { return 0x118; }
extern "C" u32 func_0205d178() { return func_0205d190() + 0x118; }
extern "C" u32 func_0205d16c(u32 x) { return data_020cb1ec[x]; }

Unk_0205cfb4::Unk_0205cfb4() {
    for (s32 i = 0; i < 9; i++) {
        for (s32 j = 0; j < 2; j++) b[j][i] = 0x16f;
    }
}

Unk_0205cfb4::~Unk_0205cfb4() {}

void Unk_0205cfb4::func_0205d0ac() {
    void *heap = data_021c61d4;
    u32 n, i, m;
    n = gCommManager[0x6c];
    m = func_020b4928(func_020b50e8());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = (u32)Heap_AllocAligned(heap, func_0205d178(), 4);
    }
    if (m == 0) m = 1;
    u32 q = func_020b491c(func_020b50e8());
    m = (q + func_02084fbc()) - m;
    u32 al = 4;
    for (i = al; i < m + 4; i++) {
        ptr[i] = (u32)Heap_AllocAligned(heap, func_0205d178(), al);
    }
}

void Unk_0205cfb4::func_0205d054() {
    for (s32 i = 0; i < 9; i++) {
        ptr[i] = 0;
        for (s32 j = 0; j < 2; j++) {
            b[j][i] = 0x16f;
            a[j][i] = 0;
        }
    }
    if (data_021c61d4) func_020e885c(data_021c61d4);
}

u32 Unk_0205cfb4::func_0205d038(u32 i, u32 j) {
    if (j == 1) {
        u32 t = ptr[i];
        return t + func_0205d190();
    }
    return ptr[i];
}

u32 Unk_0205cfb4::func_0205d028(u32 i, u32 j) { return b[j][i]; }
void Unk_0205cfb4::func_0205d010(u32 i, u32 j, u32 val) { b[j][i] = val; }

u32 Unk_0205cfb4::func_0205cfd8(u32 x) {
    u32 j = func_0205d16c(x);
    s32 i;
    for (i = 0; i < 9; i++) {
        s32 c = func_0205d028(i, j);
        if (c == x) return i;
    }
    return 9;
}

u32 Unk_0205cfb4::func_0205cfc8(u32 i, u32 j) { return a[j][i]; }
void Unk_0205cfb4::func_0205cfb4(u32 i, u32 j, u32 val) { a[j][i] = val; }

Unk_0205ce0c::Unk_0205ce0c() { v = 9; }
Unk_0205ce0c::~Unk_0205ce0c() {}

void Unk_0205ce0c::func_0205cf84(u32 x) {
    func_0205cf80(x);
    func_0205ce0c(0x16f, 0x16f, 0, 0);
}

void Unk_0205ce0c::func_0205cf80(u32 x) { v = x; }
void Unk_0205ce0c::func_0205cf6c(u32 j) { data_021c6464.func_0205d038(v, j); }
void Unk_0205ce0c::func_0205cf60() { func_0205cf6c(0); }
void Unk_0205ce0c::func_0205cf54() { func_0205cf6c(1); }

s32 Unk_0205ce0c::func_0205ce78(s32 a, s32 b, s32 c) {
    u32 st = v;
    u32 j = func_0205d16c(a);
    if (c == 0) {
        if (a == data_021c6464.func_0205d028(st, j)) return;
    }
    u32 buf = data_021c6464.func_0205d038(st, j);
    s32 size;
    if (j == 0) {
        size = func_0205d190();
    } else {
        size = func_0205d178() - func_0205d190();
    }
    if (b != 0) {
        u32 k = data_021c6464.func_0205cfd8(a);
        if (k != 9) {
            u32 src = data_021c6464.func_0205d038(k, j);
            u32 n = data_021c6464.func_0205cfc8(k, j);
            if (src != 0 && n != 0) {
                MI_CpuCopy8((void *)src, (void *)buf, n);
                data_021c6464.func_0205d010(st, j, a);
                data_021c6464.func_0205cfb4(st, j, n);
            }
        }
    }
    s32 got = File_LoadToBuffer(func_0205d198(a), (void *)buf, size);
    if (got != 0) {
        data_021c6464.func_0205d010(st, j, a);
        data_021c6464.func_0205cfb4(st, j, got);
    }
}

void Unk_0205ce0c::func_0205ce0c(s32 a, s32 b, s32 c, s32 d) {
    u32 st = v;
    if (a >= 0x16f) {
        data_021c6464.func_0205d010(st, 0, 0x16f);
        data_021c6464.func_0205cfb4(st, 0, 0);
    } else {
        func_0205ce78(a, c, d);
    }
    if (b >= 0x16f) {
        data_021c6464.func_0205d010(st, 1, 0x16f);
        data_021c6464.func_0205cfb4(st, 1, 0);
    } else {
        func_0205ce78(b, c, d);
    }
}

extern const u8 data_020cb1ec[0x170];
const u8 data_020cb1ec[0x170] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
};

u8 data_021c6450[0x14];
Unk_0205cfb4 data_021c6464;
