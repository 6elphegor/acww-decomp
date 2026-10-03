#include "types.h"

class TexVramSlot {
public:
    TexVramSlot();
    virtual ~TexVramSlot();
    void clear(void);
    void alloc(void *a, void *b, void *c);
    void relocateTexture(void *p);
    u8 pad_04[0x10];
};

class TexVramTask {
public:
    TexVramTask();
    virtual BOOL vfunc_00();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
    void clear(void);
    u8 pad[9];
    u8 unk_0d;
    u8 pad2[0xe];
};

struct Unk_0205c788 {
    u32 unk_00[4];
    TexVramSlot unk_10[4];
    TexVramTask unk_60[4];

    Unk_0205c788();
    ~Unk_0205c788();
    TexVramTask *func_0205c788(s32 i);
    void *func_0205c794(s32 i);
    u32 func_0205c7a0(s32 i);
    void func_0205c7a8();
    void func_0205c7ec();
};

extern "C" {
extern Unk_0205c788 data_021c6314;
extern void *data_021c61d0;
extern u8 *gCommManager;

void *Heap_AllocAligned(void *, u32, s32);
void func_020e885c(void *);
void func_020e877c(void *);
s32 File_LoadToBuffer(char *, void *, u32);
s32 func_0205bd54();
s32 func_0205bd70();
s32 NNS_G3dGetTex(void *);
u32 func_0205c8c0();
u32 func_0205c8bc();
u32 func_0205c8b8();
u32 func_0205c8c8();
char *func_0205c8d0(u32 i);
TexVramTask *func_0205c66c(u8 *p);
void *func_0205c680(u8 *p);
void *func_0205c694(u8 *p);
}

extern "C" void func_0205c8f4() {
    func_0205bd70();
    data_021c6314.func_0205c7ec();
    if (data_021c61d0) func_020e877c(data_021c61d0);
}

extern "C" void func_0205c8dc() {
    data_021c6314.func_0205c7a8();
    func_0205bd54();
}

extern char *data_020dc3b8[];

extern "C" char *func_0205c8d0(u32 i) { return data_020dc3b8[i]; }
extern "C" u32 func_0205c8c8() { return 0x2380; }
extern "C" u32 func_0205c8c0() { return 0x440; }
extern "C" u32 func_0205c8bc() { return 0; }
extern "C" u32 func_0205c8b8() { return 0x60; }

Unk_0205c788::Unk_0205c788() {
}

Unk_0205c788::~Unk_0205c788() {
}

void Unk_0205c788::func_0205c7ec() {
    u32 cnt = gCommManager[0x6c];
    u32 i;
    for (i = 0; i < cnt; i++) {
        u32 a = func_0205c8c0();
        u32 b = func_0205c8bc();
        u32 c = func_0205c8b8();
        unk_10[i].alloc((void *)a, (void *)b, (void *)c);
    }
    void *heap = data_021c61d0;
    for (i = 0; i < cnt; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, func_0205c8c8(), 4);
}

void Unk_0205c788::func_0205c7a8() {
    for (s32 i = 0; i < 4; i++) unk_10[i].clear();
    s32 j;
    for (j = 0; j < 4; j++) unk_00[j] = 0;
    if (data_021c61d0) func_020e885c(data_021c61d0);
}

u32 Unk_0205c788::func_0205c7a0(s32 i) { return unk_00[i]; }
void *Unk_0205c788::func_0205c794(s32 i) { return &unk_10[i]; }
TexVramTask *Unk_0205c788::func_0205c788(s32 i) { return &unk_60[i]; }

extern "C" void func_0205c780(u8 *p) { *p = 4; }
extern "C" void func_0205c77c() {}
extern "C" void func_0205c778(u8 *p, u32 v) { *p = v; }

extern "C" void func_0205c744(u8 *p) {
    u32 s = func_0205c66c(p)->unk_0d;
    BOOL a = s == 1 ? TRUE : FALSE;
    if (a) func_0205c66c(p)->cancel();
    else func_0205c66c(p)->clear();
}

extern "C" s32 func_0205c718(u8 *p, u32 idx) {
    void *buf = func_0205c694(p);
    char *name = func_0205c8d0(idx);
    return File_LoadToBuffer(name, buf, func_0205c8c8());
}

extern "C" void func_0205c6f4(u8 *p) {
    s32 x = NNS_G3dGetTex(func_0205c694(p));
    ((TexVramSlot *)func_0205c680(p))->relocateTexture((void *)x);
}

extern "C" s32 func_0205c6a8(u8 *p) {
    TexVramTask *e = func_0205c66c(p);
    u32 s = e->unk_0d;
    BOOL a = s == 2 ? TRUE : FALSE;
    if (a) return TRUE;
    BOOL b = s == 1 ? TRUE : FALSE;
    if (!b) {
        e->requestTexResource((u32 *)NNS_G3dGetTex(func_0205c694(p)), 1);
    }
    return FALSE;
}

extern "C" void *func_0205c694(u8 *p) { return (void *)data_021c6314.func_0205c7a0(*p); }
extern "C" void *func_0205c680(u8 *p) { return data_021c6314.func_0205c794(*p); }
extern "C" TexVramTask *func_0205c66c(u8 *p) { return data_021c6314.func_0205c788(*p); }
// Declarations for data defined further down (definition order sets the data layout)
extern Unk_0205c788 data_021c6314;
extern char *data_020dc3b8[];

Unk_0205c788 data_021c6314;

char *data_020dc3b8[] = {"/PBody/boy.nsbmd", "/PBody/grl.nsbmd"};

