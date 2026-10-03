#include "types.h"

extern "C" {
void *Heap_AllocAligned(void *heap, s32 size, s32 align);
void func_020e877c(void *p);
void func_020e885c(void *p);
void *NNS_G3dGetTex(void *h);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 File_LoadToBuffer(const char *path, void *buf, s32 size);
s32 func_0205bc60();
s32 func_0205bc7c();
extern void *data_021c61c4;
extern u8 *data_020cbb18;
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020e45ec();
    virtual BOOL vfunc_00();
    void func_020b89c8(void);
    BOOL func_020b89f0(u32 *a, u8 b);
    void func_020b8b08(void);
};

class TexVramSlot {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    TexVramSlot();
    virtual ~TexVramSlot();
    void func_020551f4(u32 a, u32 b, u32 c);
    void func_02055200(void);
    void func_02055210(void *p);
    u32 func_0205526c(u32 a, u32 b);
    u32 func_02055298(u32 a, u32 b, u32 c);
    u32 func_020552d8(u32 a, u32 b);
    u32 func_020552ec(u32 a, u32 b);
    u32 func_02055300(u32 a);
    u32 func_02055314(u32 a, u32 b);
    u32 func_02055328(u32 a);
    u32 func_02055334(u32 a);
    void func_02055340(void *a, void *b, void *c);
};

static inline BOOL Unk_0205d4e4_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

static inline BOOL Unk_0205d4e4_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

class Unk_0205d5e4 {
public:
    void *unk_00[4];
    TexVramSlot unk_10[4];
    Unk_020e45ec unk_60[4];
    u8 unk_d0[4];

    Unk_0205d5e4();
    ~Unk_0205d5e4();
    void func_0205d5e4(u32 i, u32 v);
    u8 func_0205d5ec(u32 i);
    Unk_020e45ec *func_0205d5f4(u32 i);
    TexVramSlot *func_0205d600(u32 i);
    void *func_0205d60c(u32 i);
    void func_0205d614(void);
    void func_0205d668(void);
};

extern "C" {
extern const u8 data_020cb364[0xc];
extern const u8 data_020cb370[0x40];
extern char data_021c653c[0x14];

void func_0205d7b0();
void func_0205d798();
char *func_0205d778(s32 x);
s32 func_0205d770();
u8 func_0205d764(u32 i);
u8 func_0205d758(u32 i);
s32 func_0205d750();
s32 func_0205d74c();
s32 func_0205d748();
void func_0205d5dc(u8 *p);
void func_0205d5d8();
void func_0205d5d4(u8 *p, u8 v);
void func_0205d5bc(u8 *p);
void func_0205d588(u8 *p);
void func_0205d554(u8 *p, s32 idx);
void func_0205d530(u8 *p);
BOOL func_0205d4e4(u8 *p);
void *func_0205d4d0(u8 *p);
TexVramSlot *func_0205d4bc(u8 *p);
Unk_020e45ec *func_0205d4a8(u8 *p);
u8 func_0205d494(u8 *p);
void func_0205d480(u8 *p, s32 v);
}

const u8 data_020cb364[0xc] = {0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x00};
const u8 data_020cb370[0x40] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f};

char data_021c653c[0x14];
Unk_0205d5e4 data_021c6550;

extern "C" void func_0205d7b0() {
    func_0205bc7c();
    data_021c6550.func_0205d668();
    if (data_021c61c4) {
        func_020e877c(data_021c61c4);
    }
}

extern "C" void func_0205d798() {
    data_021c6550.func_0205d614();
    func_0205bc60();
}

extern "C" char *func_0205d778(s32 x) {
    func_020639e8(data_021c653c, "/PGls/%d/%d.nsbmd", (u32)x >> 5, x);
    return data_021c653c;
}

extern "C" s32 func_0205d770() { return 0xc74; }

extern "C" u8 func_0205d764(u32 i) {
    return data_020cb370[i];
}

extern "C" u8 func_0205d758(u32 i) {
    return data_020cb364[i];
}

extern "C" s32 func_0205d750() { return 0x600; }
extern "C" s32 func_0205d74c() { return 0; }
extern "C" s32 func_0205d748() { return 0x60; }

Unk_0205d5e4::Unk_0205d5e4() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
        unk_d0[i] = 0x4b;
    }
}

Unk_0205d5e4::~Unk_0205d5e4() {}

void Unk_0205d5e4::func_0205d668(void) {
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        unk_10[i].func_02055340((void *)func_0205d750(), (void *)func_0205d74c(), (void *)func_0205d748());
    }
    void *heap = data_021c61c4;
    for (i = 0; i < n; i++) {
        unk_00[i] = Heap_AllocAligned(heap, func_0205d770(), 4);
    }
}

void Unk_0205d5e4::func_0205d614(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_10[i].func_02055200();
    }
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
    }
    if (data_021c61c4) {
        func_020e885c(data_021c61c4);
    }
    for (i = 0; i < 4; i++) {
        unk_d0[i] = 0x4b;
    }
}

void *Unk_0205d5e4::func_0205d60c(u32 i) { return unk_00[i]; }
TexVramSlot *Unk_0205d5e4::func_0205d600(u32 i) { return &unk_10[i]; }
Unk_020e45ec *Unk_0205d5e4::func_0205d5f4(u32 i) { return &unk_60[i]; }
u8 Unk_0205d5e4::func_0205d5ec(u32 i) { return unk_d0[i]; }
void Unk_0205d5e4::func_0205d5e4(u32 i, u32 v) { unk_d0[i] = v; }

extern "C" void func_0205d5dc(u8 *p) {
    *p = 4;
}
extern "C" void func_0205d5d8() {}
extern "C" void func_0205d5d4(u8 *p, u8 v) {
    *p = v;
}

extern "C" void func_0205d5bc(u8 *p) {
    func_0205d588(p);
    func_0205d480(p, 0x4b);
}

extern "C" void func_0205d588(u8 *p) {
    if (Unk_0205d4e4_IsOne(func_0205d4a8(p)->unk_0d)) {
        func_0205d4a8(p)->func_020b89c8();
    } else {
        func_0205d4a8(p)->func_020b8b08();
    }
}

extern "C" void func_0205d554(u8 *p, s32 idx) {
    void *r6 = func_0205d4d0(p);
    func_0205d480(p, idx);
    if (idx < 0x4b) {
        char *path = func_0205d778(idx);
        File_LoadToBuffer(path, r6, func_0205d770());
    }
}

extern "C" void func_0205d530(u8 *p) {
    void *q = NNS_G3dGetTex(func_0205d4d0(p));
    func_0205d4bc(p)->func_02055210(q);
}

extern "C" BOOL func_0205d4e4(u8 *p) {
    Unk_020e45ec *o = func_0205d4a8(p);
    u8 st = o->unk_0d;
    if (Unk_0205d4e4_IsTwo(st)) {
        return TRUE;
    }
    if (!Unk_0205d4e4_IsOne(st)) {
        o->func_020b89f0((u32 *)NNS_G3dGetTex(func_0205d4d0(p)), 1);
    }
    return FALSE;
}

extern "C" void *func_0205d4d0(u8 *p) {
    return data_021c6550.func_0205d60c(*p);
}
extern "C" TexVramSlot *func_0205d4bc(u8 *p) {
    return data_021c6550.func_0205d600(*p);
}
extern "C" Unk_020e45ec *func_0205d4a8(u8 *p) {
    return data_021c6550.func_0205d5f4(*p);
}
extern "C" u8 func_0205d494(u8 *p) {
    return data_021c6550.func_0205d5ec(*p);
}
extern "C" void func_0205d480(u8 *p, s32 v) {
    data_021c6550.func_0205d5e4(*p, v);
}
