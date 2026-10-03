// mwcc-flags: -str reuse
#include "types.h"

// ---- helper classes (declared elsewhere) ----
class ItemId {
public:
    u16 unk_00;
    ItemId();
    ~ItemId();
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
    void clear(void);
    void relocateTexture(void *p);
    void alloc(void *a, void *b, void *c);
};

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    VramTask();
    virtual BOOL execute() = 0;
};

struct TexTransfer {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class TexVramTask : public VramTask {
public:
    TexTransfer unk_10;
    TexVramTask();
    virtual BOOL execute();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
    void clear(void);
};

class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    u8 pad_04[0x94];
    u32 unk_98;
    BOOL release(void);
};

class BlendAnimModel : public CachedModel {
public:
    BlendAnimModel();
    virtual ~BlendAnimModel();
    u8 pad_9c[0x58];
    void playBlend(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void onJointCalcPre(BlendAnimModel *x);
};

class Model {
public:
    void *getRenderObj();
};

class AnimFrameCtrl {
public:
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~AnimFrameCtrl();
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void replace(s32 a, s32 b, s32 c, s32 e, u16 f);
    u32 unk_18;
    u32 unk_1c;
};

class Unk_020dc44c : public ModelAnim {
public:
    Unk_020dc44c();
    virtual ~Unk_020dc44c();
};

class Unk_0205f8d4 {
public:
    u8 pad[0x40];
    void func_0205fd7c();
    void func_0205fd80();
};

// ---- manager singleton (data_021c6854) ----
class Unk_0205ec30 {
public:
    Unk_0205ec30();
    ~Unk_0205ec30();
    void *unk_00[9];
    void *unk_24[9];
    void *unk_48[9];
    u16 unk_6c[9];
    u16 pad_7e;
    void *unk_80[9];
    u16 unk_a4[9];
    u16 pad_b6;
    u32 unk_b8[9];
    TexVramSlot unk_dc[9];
    TexVramTask unk_190[9];
    BlendAnimModel unk_28c[9];
    ModelAnim *unk_b20[9];
    ItemId unk_b44[9];
};

struct Unk_0205e61c_Q { u8 unk_00; };
struct Unk_0205e61c_P { u8 pad[0x2c]; Unk_0205e61c_Q *unk_2c; };
struct Unk_0205e61c_Obj {
    u32 unk_00;
    Unk_0205e61c_P *unk_04;
    u8 pad_08[0x1c];
    void *unk_24;
    u8 pad_28[0x6a];
    u8 unk_92;
};

struct Unk_0205f6f8_Cfg { u8 pad[0x6c]; u8 unk_6c; };

struct Unk_0205e310_P {
    u32 pad[6];
    u32 unk_18;
    u32 unk_1c;
};

struct Unk_0205dfb8_Out {
    s32 v[12];
};

struct Unk_0205dfb8_Vec {
    s32 x, y, z;
};

struct Unk_0205dfb8_P {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_0205dfb8_Obj {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u8 pad_08[8];
    u32 unk_10;
    u8 pad_14[0xc];
    u32 *unk_20;
    u32 unk_24;
    u8 unk_28[4];
    u32 unk_2c;
    u8 pad_30[0x92 - 0x30];
    u8 unk_92;
};

struct Unk_0205e184_Pre {
    u8 pad[0x9c];
};
struct Unk_0205e184_Sub {
    u32 pad[4];
    u32 unk_10;
    void set(u32 v) { unk_10 = v; }
};
struct Unk_0205e184_Big : Unk_0205e184_Pre, Unk_0205e184_Sub {};

class Unk_0205e66c {
public:
    u8 unk_00;
    u32 unk_04;
    Unk_020dc44c unk_08;
    Unk_0205f8d4 unk_28;
    Unk_0205e66c();
    ~Unk_0205e66c();
};

static inline BOOL Unk_0205e6e4_Is(u8 v, u8 k) { return v == k ? TRUE : FALSE; }

static inline BOOL Unk_0205ddc8_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi)
        r = TRUE;
    return r;
}

extern "C" {
extern const u8 data_020cb450[0x40];
extern const u8 data_020cb490[0x40];
extern const u16 data_020cb4d0[0x40];
extern char data_021c6808[0x18];
extern char data_021c6820[0x18];
extern char data_021c6838[0x1c];
extern Unk_0205ec30 data_021c6854;
extern void *data_021c61b4;
extern void *data_021c61c0;
extern Unk_0205f6f8_Cfg *gCommManager;

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 File_LoadToBuffer(void *path, void *dst, u32 size);
void *NNS_G3dGetTex(void *p);
void *func_02106654(void);
void *func_02106670(void *p, s32 a);
void *func_021065dc(void);
void *func_021065f8(void *p, s32 a);
void func_020e885c(void *p);
void func_020e877c(void *p);
void *FrameHeap_Create(u32 size, void *heap);
void *Heap_AllocAligned(void *heap, u32 size, u32 align);
void *func_020b50e8(void);
u32 func_020b4928(void *p);
u32 func_020b491c(void *p);
s32 func_02084fbc(void);
u32 ItemInfo_GetHoldableIndex(u16 *p);
u32 ItemInfo_GetHoldableCount(void);
void func_0205bae4(void);
s32 func_0205bc04(void);
void func_0205bc20(void);
void func_0205bb00(u32 x);

void func_0205e5e8(Unk_0205dfb8_Obj *o);
void func_0205e120(Unk_0205dfb8_Obj *o);
void func_0205e61c(Unk_0205e61c_Obj *self);

void Model_GetJointWorldMtx(void *slot, Unk_0205dfb8_Out *out, u32 a);
void _ZN9AnimModel12drawAnimatedEPv(void *slot, Unk_0205dfb8_Vec *v);
void func_0205f7f4(void *sub, Unk_0205dfb8_Out *o, Unk_0205dfb8_Vec *v);
void WorldCurve_FromCurved(Unk_0205dfb8_Vec *o, Unk_0205dfb8_Vec *v);
void _ZN12Unk_0205f8d413func_0205faf8EP16Unk_0205f8d4_Vec(void *sub, Unk_0205dfb8_Vec *v);
void _ZN13AnimFrameCtrl4stepEv(void *p);
void _ZN12Unk_0205f8d413func_0205f8d4Ev(void *p);
void _ZN14BlendAnimModel9stepBlendEv(void *slot);
void _ZN12Unk_0205f8d413func_0205f92cEi(void *p, u32 k);
void _ZN12Unk_0205f8d413func_0205fcccEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *slot);
void _ZN14BlendAnimModel15onJointCalcPostEPS_(void *slot, void *o);
u32 func_0205cdbc(void);
void _ZN12Unk_0205ca9413func_0205ca94EPtiii(u32 a, u16 *code, u32 b, u32 c, u32 d);
u32 func_0205c91c(u32 a);
void func_0205dfb8(Unk_0205dfb8_Out *out, Unk_0205dfb8_Obj *o, u32 a);
void func_02063a5c(u32 a, u32 b, char *c, char *d);
void func_02063a1c(u32 a, u32 b, char *c, char *d);
void _ZN11CachedModel11setFromFileEPv(void *slot, u32 a);
void _ZN9AnimModel11allocAnmObjEPv(void *slot, u32 a);
void _ZN11CachedModel16allocJointRecordEPv(void *slot, u32 a);
u32 func_020e8af4(u32 a);
void _ZN9ModelAnim11allocMatAnmEjPv(u32 *p, u32 a, u32 b);
void _ZN9ModelAnim4initEiiit(u32 *p, u32 a, u32 b, u32 c, u32 d);
void _ZN9ModelAnim14addToRenderObjEj(u32 *p, u32 a);
void _ZN9AnimModel10attachAnimEv(void *slot);
void _ZN5Model11setCallbackEiiiii(void *slot, void (*fn)(void *), u32 a, u32 b, void *o, u32 c);
void _ZN12Unk_0205f8d413func_0205fd0cEjP9Characterj(void *p, u32 id, u32 x, u32 k);
void func_0205fba8(void *p);

u32 func_0205ecec(void);
u32 func_0205ecf0(void);
u32 func_0205ecf4(void);
u32 func_0205ecfc(void);
u32 func_0205ed04(void);
char *func_0205ecac(u32 x);
char *func_0205eccc(u32 x);
char *func_0205ed7c(u32 x);
s32 func_0205ed0c(u16 *p);
u16 func_0205ed30(u16 *p);
s32 func_0205ed58(u16 *p);
void *func_0205e9b0(Unk_0205ec30 *self, u32 idx);
void *func_0205e970(Unk_0205ec30 *self, u32 idx);
void *func_0205e9a0(Unk_0205ec30 *self, u32 idx);
void *func_0205e9a8(Unk_0205ec30 *self, u32 idx);
u32 func_0205e94c(Unk_0205ec30 *self, u32 idx);
u32 func_0205e97c(Unk_0205ec30 *self, u32 idx);
void func_0205e934(Unk_0205ec30 *self, u32 idx, u32 v);
u32 func_0205e940(Unk_0205ec30 *self, u32 idx);
void func_0205e958(Unk_0205ec30 *self, u32 idx, void *v, u16 w);
void func_0205e988(Unk_0205ec30 *self, u32 idx, void *v, u16 w);
u16 *func_0205e7c0(Unk_0205ec30 *self, u32 idx);
ModelAnim *func_0205e7d0(Unk_0205ec30 *self, u32 idx);
void func_0205e7e0(Unk_0205ec30 *self, u32 idx, ModelAnim *v);
BlendAnimModel *func_0205e7f0(Unk_0205ec30 *self, u32 idx);
TexVramTask *func_0205e800(Unk_0205ec30 *self, u32 idx);
TexVramSlot *func_0205e810(Unk_0205ec30 *self, u32 idx);
void func_0205e730(Unk_0205ec30 *self, u32 idx);
void func_0205e754(Unk_0205ec30 *self, u32 idx, u32 x);
void func_0205e780(Unk_0205ec30 *self, u32 idx);
s32 func_0205e6e4(Unk_0205ec30 *self, u32 idx);
void func_0205e81c(Unk_0205ec30 *self, u32 idx, u32 x, u32 y);
void func_0205e87c(Unk_0205ec30 *self, u32 idx, u32 x, u32 y, u8 z);
s32 func_0205e8cc(Unk_0205ec30 *self, u32 idx, u32 x);
s32 func_0205e900(Unk_0205ec30 *self, u32 idx, u32 x);
void func_0205e9b8(Unk_0205ec30 *self);
void func_0205ea74(Unk_0205ec30 *self);
void func_0205eaf4(Unk_0205ec30 *self);
}

const u8 data_020cb450[0x40] = {
    0x10, 0x04, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x08, 0x08, 0x00, 0x0f, 0x03, 0x0d, 0x02, 0x0b,
    0x01, 0x11, 0x05, 0x0e, 0x09, 0x0a, 0x0a, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a,
    0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a,
    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00};

const u8 data_020cb490[0x40] = {
    0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x13, 0x13, 0x00, 0x00, 0x2b,
    0x2b, 0x21, 0x21, 0x29, 0x2b, 0x27, 0x27, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x00};

const u16 data_020cb4d0[0x40] = {
    0x0137, 0x0137, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x0138, 0x013a, 0x013a, 0x013b, 0x013b, 0x013c,
    0x013c, 0x0144, 0x0144, 0x013e, 0x0144, 0x0144, 0x0144, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d,
    0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d,
    0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x013d, 0x0000};

char data_021c6808[0x18];
char data_021c6820[0x18];
char data_021c6838[0x1c];
Unk_0205ec30 data_021c6854;

extern "C" void func_0205edb8(u32 x) {
    func_0205bc20();
    func_0205eaf4(&data_021c6854);
    if (data_021c61c0) {
        func_020e877c(data_021c61c0);
    }
    func_0205bb00(x);
    func_0205ea74(&data_021c6854);
    if (data_021c61b4) {
        func_020e877c(data_021c61b4);
    }
}

extern "C" void func_0205ed9c(void) {
    func_0205e9b8(&data_021c6854);
    func_0205bae4();
    func_0205bc04();
}

extern "C" char *func_0205ed7c(u32 x) {
    func_020639e8(data_021c6808, "/PItm/Mdl%d/%d.nsbmd", x >> 5, x);
    return data_021c6808;
}

extern "C" s32 func_0205ed58(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return data_020cb450[i];
    }
    return 0x32;
}

extern "C" u16 func_0205ed30(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return data_020cb4d0[i];
    }
    return 0x144;
}

extern "C" s32 func_0205ed0c(u16 *p) {
    u32 i = ItemInfo_GetHoldableIndex(p);
    if (i < ItemInfo_GetHoldableCount()) {
        return data_020cb490[i];
    }
    return 0x2b;
}

extern "C" u32 func_0205ed04(void) { return 0xf24; }
extern "C" u32 func_0205ecfc(void) { return 0x89c; }
extern "C" u32 func_0205ecf4(void) { return 0x600; }
extern "C" u32 func_0205ecf0(void) { return 0; }
extern "C" u32 func_0205ecec(void) { return 0x50; }

extern "C" char *func_0205eccc(u32 x) {
    func_020639e8(data_021c6820, "/PItm/Anm%d/%d.nsbca", x >> 5, x);
    return data_021c6820;
}

extern "C" char *func_0205ecac(u32 x) {
    func_020639e8(data_021c6838, "/PItm/ItaAnm%d/%d.nsbta", x >> 5, x);
    return data_021c6838;
}

Unk_0205ec30::Unk_0205ec30() {}

Unk_0205ec30::~Unk_0205ec30() {}

extern "C" void func_0205eaf4(Unk_0205ec30 *self) {
    u32 cfg = gCommManager->unk_6c;
    u32 n = func_020b4928(func_020b50e8());
    u32 m, i, end;
    void *heap;
    if (cfg < n) {
        n = cfg;
    }
    m = n ? n : 1;
    end = func_020b491c(func_020b50e8()) + func_02084fbc() - m;
    for (i = 0; i < n; i++) {
        self->unk_dc[i].alloc((void *)func_0205ecf4(), (void *)func_0205ecf0(), (void *)func_0205ecec());
    }
    for (i = 4; i < end + 4; i++) {
        self->unk_dc[i].alloc((void *)func_0205ecf4(), (void *)func_0205ecf0(), (void *)func_0205ecec());
    }
    heap = data_021c61c0;
    for (i = 0; i < n; i++) {
        self->unk_00[i] = Heap_AllocAligned(heap, func_0205ed04(), 4);
    }
    u32 al = 4;
    for (i = 4; i < end + 4; i++) {
        self->unk_00[i] = Heap_AllocAligned(heap, func_0205ed04(), al);
    }
}

extern "C" void func_0205ea74(Unk_0205ec30 *self) {
    void *heap = data_021c61b4;
    u32 n;
    u32 i = gCommManager->unk_6c;
    n = func_020b4928(func_020b50e8());
    if (i < n) {
        n = i;
    }
    for (i = 0; i < n; i++) {
        self->unk_24[i] = FrameHeap_Create(func_0205ecfc(), heap);
    }
    if (n == 0) {
        n = 1;
    }
    u32 t = func_020b491c(func_020b50e8());
    n = t + func_02084fbc() - n;
    n += 4;
    for (i = 4; i < n; i++) {
        self->unk_24[i] = FrameHeap_Create(func_0205ecfc(), heap);
    }
}

extern "C" void func_0205e9b8(Unk_0205ec30 *self) {
    s32 i, j, k;
    for (i = 0; i < 9; i++) {
        self->unk_28c[i].release();
        func_0205e780(self, i);
        self->unk_dc[i].clear();
        self->unk_b44[i].unk_00 = 0xfff1;
    }
    for (j = 0; j < 9; j++) {
        if (self->unk_24[j]) {
            func_020e885c(self->unk_24[j]);
            self->unk_24[j] = 0;
            self->unk_48[j] = 0;
            self->unk_6c[j] = 0;
            self->unk_80[j] = 0;
            self->unk_a4[j] = 0;
            self->unk_b20[j] = 0;
        }
    }
    if (data_021c61b4) {
        func_020e885c(data_021c61b4);
    }
    for (k = 0; k < 9; k++) {
        self->unk_00[k] = 0;
    }
    if (data_021c61c0) {
        func_020e885c(data_021c61c0);
    }
}

extern "C" void *func_0205e9b0(Unk_0205ec30 *self, u32 idx) {
    return self->unk_00[idx];
}

extern "C" void *func_0205e9a8(Unk_0205ec30 *self, u32 idx) {
    return self->unk_24[idx];
}

extern "C" void *func_0205e9a0(Unk_0205ec30 *self, u32 idx) {
    return self->unk_48[idx];
}

extern "C" void func_0205e988(Unk_0205ec30 *self, u32 idx, void *v, u16 w) {
    self->unk_48[idx] = v;
    self->unk_6c[idx] = w;
}

extern "C" u32 func_0205e97c(Unk_0205ec30 *self, u32 idx) {
    return self->unk_6c[idx];
}

extern "C" void *func_0205e970(Unk_0205ec30 *self, u32 idx) {
    return self->unk_80[idx];
}

extern "C" void func_0205e958(Unk_0205ec30 *self, u32 idx, void *v, u16 w) {
    self->unk_80[idx] = v;
    self->unk_a4[idx] = w;
}

extern "C" u32 func_0205e94c(Unk_0205ec30 *self, u32 idx) {
    return self->unk_a4[idx];
}

extern "C" u32 func_0205e940(Unk_0205ec30 *self, u32 idx) {
    return self->unk_b8[idx];
}

extern "C" void func_0205e934(Unk_0205ec30 *self, u32 idx, u32 v) {
    self->unk_b8[idx] = v;
}

extern "C" s32 func_0205e900(Unk_0205ec30 *self, u32 idx, u32 x) {
    void *dst = func_0205e9a0(&data_021c6854, idx);
    u32 size = func_0205e97c(&data_021c6854, idx);
    return size - File_LoadToBuffer(func_0205eccc(x), dst, size);
}

extern "C" s32 func_0205e8cc(Unk_0205ec30 *self, u32 idx, u32 x) {
    void *dst = func_0205e970(&data_021c6854, idx);
    u32 size = func_0205e94c(&data_021c6854, idx);
    return size - File_LoadToBuffer(func_0205ecac(x), dst, size);
}

extern "C" void func_0205e87c(Unk_0205ec30 *self, u32 idx, u32 x, u32 y, u8 z) {
    func_0205e900(&data_021c6854, idx, x);
    func_0205e9a0(&data_021c6854, idx);
    void *a = func_021065dc();
    void *b = func_021065f8(a, 0);
    func_0205e7f0(&data_021c6854, idx)->playBlend((s32)b, (s32)y, z, 0x1000, 0, 0);
}

extern "C" void func_0205e81c(Unk_0205ec30 *self, u32 idx, u32 x, u32 y) {
    func_0205e8cc(&data_021c6854, idx, x);
    func_0205e970(&data_021c6854, idx);
    void *a = func_02106654();
    void *b = func_02106670(a, 0);
    ModelAnim *e = func_0205e7d0(self, idx);
    void *m = ((Model *)func_0205e7f0(self, idx))->getRenderObj();
    e->replace((s32)m, (s32)b, (s32)y, 0x1000, 0);
}

extern "C" TexVramSlot *func_0205e810(Unk_0205ec30 *self, u32 idx) {
    return &self->unk_dc[idx];
}

extern "C" TexVramTask *func_0205e800(Unk_0205ec30 *self, u32 idx) {
    return &self->unk_190[idx];
}

extern "C" BlendAnimModel *func_0205e7f0(Unk_0205ec30 *self, u32 idx) {
    return &self->unk_28c[idx];
}

extern "C" void func_0205e7e0(Unk_0205ec30 *self, u32 idx, ModelAnim *v) {
    self->unk_b20[idx] = v;
}

extern "C" ModelAnim *func_0205e7d0(Unk_0205ec30 *self, u32 idx) {
    return self->unk_b20[idx];
}

extern "C" u16 *func_0205e7c0(Unk_0205ec30 *self, u32 idx) {
    return &self->unk_b44[idx].unk_00;
}

extern "C" void func_0205e780(Unk_0205ec30 *self, u32 idx) {
    u32 off = idx * 0x1c;
    if (Unk_0205e6e4_Is(*((u8 *)self + off + 0x19d), 1)) {
        ((TexVramTask *)((u8 *)self + 0x190 + off))->cancel();
    } else {
        ((TexVramTask *)((u8 *)self + 0x190 + off))->clear();
    }
}

extern "C" void func_0205e754(Unk_0205ec30 *self, u32 idx, u32 x) {
    char *path = func_0205ed7c(x);
    void *dst = func_0205e9b0(self, idx);
    File_LoadToBuffer(path, dst, func_0205ed04());
}

extern "C" void func_0205e730(Unk_0205ec30 *self, u32 idx) {
    void *r = NNS_G3dGetTex(func_0205e9b0(self, idx));
    func_0205e810(self, idx)->relocateTexture(r);
}

extern "C" s32 func_0205e6e4(Unk_0205ec30 *self, u32 idx) {
    TexVramTask *e = func_0205e800(self, idx);
    u8 s = e->unk_0d;
    if (Unk_0205e6e4_Is(s, 2)) {
        return 1;
    }
    if (!Unk_0205e6e4_Is(s, 1)) {
        e->requestTexResource((u32 *)NNS_G3dGetTex(func_0205e9b0(self, idx)), 1);
    }
    return 0;
}

Unk_020dc44c::Unk_020dc44c() {}

Unk_020dc44c::~Unk_020dc44c() {}

Unk_0205e66c::Unk_0205e66c() {
    unk_28.func_0205fd80();
    unk_00 = 9;
    unk_04 = 0x1000;
}

Unk_0205e66c::~Unk_0205e66c() {
    unk_28.func_0205fd7c();
}

extern "C" void func_0205e61c(Unk_0205e61c_Obj *self) {
    Unk_0205e61c_Q *q = self->unk_04->unk_2c;
    if (q) {
        func_0205e7f0(&data_021c6854, q->unk_00)->onJointCalcPre((BlendAnimModel *)self);
    }
    self->unk_24 = (void *)func_0205e5e8;
    self->unk_92 = 2;
}

extern "C" void func_0205e5e8(Unk_0205dfb8_Obj *o) {
    Unk_0205dfb8_P *p = (Unk_0205dfb8_P *)o->unk_04;
    if (p->unk_2c != 0) {
        _ZN14BlendAnimModel15onJointCalcPostEPS_(func_0205e7f0(&data_021c6854, *p->unk_2c), o);
    }
    o->unk_24 = (u32)func_0205e61c;
    o->unk_92 = 1;
}

extern "C" void func_0205e310(Unk_0205dfb8_Obj *o, u32 id, u32 x, u16 *code, u32 a5, s32 flag) {
    u32 idx;
    u32 s, t;
    o->unk_00 = id;
    func_0205e7e0(&data_021c6854, id, (ModelAnim *)&o->pad_08);
    if (*code == 0xfff1) {
        *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    } else {
        idx = ItemInfo_GetHoldableIndex(code);
        if ((s32)idx < 0)
            goto err;
        if (idx >= ItemInfo_GetHoldableCount())
            goto err;
        *func_0205e7c0(&data_021c6854, id) = *code;
        func_0205e754(&data_021c6854, id, func_0205ed58(code));
        s = (u32)func_0205e9b0(&data_021c6854, id);
        if (flag == 0) {
            if (Unk_0205ddc8_In(code, 0x13a0, 0x13a7)) {
                u32 f = func_0205cdbc();
                _ZN12Unk_0205ca9413func_0205ca94EPtiii(f, code, a5, 0, 0);
                u32 h = (u32)NNS_G3dGetTex((void *)func_0205c91c(f));
                u32 h2 = (u32)NNS_G3dGetTex((void *)s);
                func_02063a5c(h, h2, (char *)"cloth", (char *)"myD");
                func_02063a1c(h, h2, (char *)"cloth", (char *)"myD");
            }
        }
        func_0205e730(&data_021c6854, id);
        u8 *slot = (u8 *)func_0205e7f0(&data_021c6854, id);
        _ZN11CachedModel11setFromFileEPv(slot, s);
        s32 kind = func_0205ed0c(code);
        if (kind == 0x2b)
            goto done;
        _ZN9AnimModel11allocAnmObjEPv(slot, (u32)func_0205e9a8(&data_021c6854, id));
        _ZN11CachedModel16allocJointRecordEPv(slot, (u32)func_0205e9a8(&data_021c6854, id));
        if (kind == 0x27) {
            void *a1 = func_0205e9a8(&data_021c6854, id);
            func_0205e958(&data_021c6854, id, Heap_AllocAligned(a1, 0x210, 4), 0x210);
            func_0205e934(&data_021c6854, id, (u32)a1);
            Heap_AllocAligned(a1, 0x1c, 4);
            u32 *p = (u32 *)func_0205e7d0(&data_021c6854, id);
            Unk_0205e310_P *pp = (Unk_0205e310_P *)p;
            pp->unk_18 = 0;
            pp->unk_1c = 0;
            func_0205e8cc(&data_021c6854, id, 0);
            func_0205e970(&data_021c6854, id);
            u32 q = (u32)func_02106670(func_02106654(), 0);
            u32 w = *(u32 *)(slot + 0x5c);
            _ZN9ModelAnim11allocMatAnmEjPv(p, w, func_0205e940(&data_021c6854, id));
            _ZN9ModelAnim4initEiiit(p, q, 1, 0x1000, 0);
            _ZN9ModelAnim14addToRenderObjEj(p, (u32)((Model *)slot)->getRenderObj());
        }
        void *a2 = func_0205e9a8(&data_021c6854, id);
        u32 n = func_020e8af4((u32)a2);
        ((void (*)(Unk_0205ec30 *, u32, void *, u32))func_0205e988)(&data_021c6854, id, Heap_AllocAligned(a2, n, 4), n);
        func_0205e87c(&data_021c6854, id, kind, 0, 0);
        _ZN9AnimModel10attachAnimEv(slot);
        if (flag == 0)
            _ZN5Model11setCallbackEiiiii(slot, (void (*)(void *))func_0205e61c, 6, 1, o, 0);
        goto done;
    err:
        *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    }
done:
    if (Unk_0205ddc8_In(code, 0x1375, 0x1375)) {
        _ZN12Unk_0205f8d413func_0205fd0cEjP9Characterj(o->unk_28, id, x, 1);
    } else if (*code >= 0x1374 && *code <= 0x1374) {
        _ZN12Unk_0205f8d413func_0205fd0cEjP9Characterj(o->unk_28, id, x, 0);
    } else if ((*code >= 0x137a && *code <= 0x137a) || (*code >= 0x137b && *code <= 0x137b)) {
        _ZN12Unk_0205f8d413func_0205fd0cEjP9Characterj(o->unk_28, id, x, 2);
    } else {
        _ZN12Unk_0205f8d413func_0205fd0cEjP9Characterj(o->unk_28, id, x, 3);
    }
    if (Unk_0205ddc8_In(code, 0x1374, 0x1374) || (*code >= 0x1375 && *code <= 0x1375))
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 1);
}

extern "C" void func_0205e274(Unk_0205dfb8_Obj *o) {
    _ZN12Unk_0205f8d413func_0205fcccEv(o->unk_28);
    u32 id = o->unk_00;
    if (func_0205ed0c(func_0205e7c0(&data_021c6854, id)) != 0x2b) {
        _ZN9AnimModel15detachJointAnimEv(func_0205e7f0(&data_021c6854, id));
        o->unk_20 = 0;
        o->unk_24 = 0;
    }
    func_0205e7e0(&data_021c6854, id, 0);
    func_0205e7f0(&data_021c6854, id)->release();
    func_0205e780(&data_021c6854, id);
    func_020e885c(func_0205e9a8(&data_021c6854, id));
    func_0205e988(&data_021c6854, id, 0, 0);
    func_0205e958(&data_021c6854, id, 0, 0);
    func_0205e934(&data_021c6854, id, 0);
    *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    o->unk_00 = 9;
}

extern "C" void func_0205e24c(Unk_0205dfb8_Obj *o, u16 *code, u32 c) {
    u32 id = o->unk_00;
    func_0205e274(o);
    func_0205e310(o, id, 0, code, c, 0);
}

extern "C" void func_0205e1a0(Unk_0205dfb8_Obj *o, s32 a, u32 b, u32 c) {
    ((void (*)(Unk_0205ec30 *, u32, u32, u32, u32))func_0205e87c)(&data_021c6854, o->unk_00, a, b, c);
    switch (a) {
    case 0x13:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 1);
        break;
    case 0x15:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 3);
        break;
    case 0x16:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 2);
        break;
    case 0x18:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 6);
        break;
    case 0x19:
    case 0x1b:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 7);
        break;
    case 0x1a:
        _ZN12Unk_0205f8d413func_0205f92cEi(o->unk_28, 8);
        break;
    case 0x28:
        func_0205e81c(&data_021c6854, o->unk_00, 1, c);
        break;
    }
}

extern "C" void func_0205e184(Unk_0205dfb8_Obj *o, u32 v) {
    Unk_0205e184_Sub &r = *(Unk_0205e184_Big *)func_0205e7f0(&data_021c6854, o->unk_00);
    r.set(v);
}

extern "C" void func_0205e120(Unk_0205dfb8_Obj *o) {
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        func_0205e6e4(&data_021c6854, id);
        s32 t = func_0205ed0c(func_0205e7c0(&data_021c6854, id));
        if (t != 0x2b) {
            _ZN14BlendAnimModel9stepBlendEv(func_0205e7f0(&data_021c6854, id));
            if (t == 0x27) {
                _ZN13AnimFrameCtrl4stepEv(&o->pad_08);
                *o->unk_20 = o->unk_10;
            }
        }
    }
    _ZN12Unk_0205f8d413func_0205f8d4Ev(o->unk_28);
}

extern "C" void func_0205e014(Unk_0205dfb8_Obj *o, Unk_0205dfb8_Out *src) {
    Unk_0205dfb8_Vec LampLights;
    Unk_0205dfb8_Out LightLevel;
    Unk_0205dfb8_Vec C;
    Unk_0205dfb8_Out WindowLight;
    Unk_0205dfb8_Out E;
    Unk_0205dfb8_Vec F;
    Unk_0205dfb8_Vec G;
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        u8 *slot = (u8 *)func_0205e7f0(&data_021c6854, id);
        *(Unk_0205dfb8_Out *)(slot + 0x64) = *src;
        u32 t0 = o->unk_04;
        LampLights.x = t0;
        LampLights.y = t0;
        LampLights.z = t0;
        _ZN9AnimModel12drawAnimatedEPv(slot, &LampLights);
        if (Unk_0205ddc8_In(func_0205e7c0(&data_021c6854, id), 0x1374, 0x1374) ||
            Unk_0205ddc8_In(func_0205e7c0(&data_021c6854, id), 0x1375, 0x1375)) {
            func_0205dfb8(&WindowLight, o, 2);
            LightLevel = WindowLight;
        } else {
            func_0205dfb8(&E, o, 0);
            LightLevel = E;
        }
        func_0205f7f4(o->unk_28, &LightLevel, &LampLights);
        F.x = LightLevel.v[9];
        F.y = LightLevel.v[10];
        F.z = LightLevel.v[11];
        WorldCurve_FromCurved(&C, &F);
        switch (o->unk_2c) {
        case 7:
        case 8:
            G.x = C.x;
            G.y = C.y;
            G.z = C.z;
            _ZN12Unk_0205f8d413func_0205faf8EP16Unk_0205f8d4_Vec(o->unk_28, &G);
            break;
        }
    }
}

extern "C" void func_0205dfb8(Unk_0205dfb8_Out *out, Unk_0205dfb8_Obj *o, u32 a) {
    Unk_0205dfb8_Out t;
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        Model_GetJointWorldMtx(func_0205e7f0(&data_021c6854, id), &t, a);
    } else {
        for (s32 i = 0; i < 12; i++)
            t.v[i] = 0;
    }
    *out = t;
}

extern "C" void *func_0205dfa4(u8 *p) {
    return func_0205e7f0(&data_021c6854, *p);
}
