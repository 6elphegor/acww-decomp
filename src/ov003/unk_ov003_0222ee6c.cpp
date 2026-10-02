// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// TU28 of ov003: scene 0x02234f10 (+ the camera update 0x0222ef10) and the six colour constants of its header
struct Unk_ov003_0222ef10_Cam {
    u8 pad_00[0x110];
    u8 unk_110[8];
    u32 unk_118;
    u8 pad_11c[0x1ca - 0x11c];
    u8 unk_1ca;
    u8 pad_1cb;
    u8 unk_1cc[0xc];
    u8 unk_1d8[0xc];
    s32 unk_1e4;
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_0225b738_Col {
    u8 r, g, b, a;
    Unk_ov003_0225b738_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

class Unk_ov003_02234f10 : public Unk_020d8c7c {
public:
    Unk_ov003_02234f10();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov003_02234f10();
};

// ---- externs ----
// other modules' methods are reached through their real mangled symbols (object first)
#define func_0203c0b0 _ZN12Unk_020d93b813func_0203c0b0Eiii

extern "C" {
void *func_020947f0(u32);
s32 func_0203a6fc(void *a, void *b, void *c, void *d, s32 *e);
s32 func_0203a7b8(void *a, void *b, void *c, s32 *d);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_0203c0b0(void *self, s32 a, s32 b, s32 c);
void func_ov003_0222ec20(void *self);
void func_ov003_0222ed20(void *self);
Unk_ov003_02234f10 *func_ov003_0222eef8();
}

// scene registration entry {factory, 0xf, 0x11}
struct Unk_ov003_02234f00_Entry {
    void *factory;
    u16 a, b;
};

extern "C" {
// Data order: this unit is placed object by object (see object_order.txt).
Unk_ov003_02234f00_Entry data_ov003_02234f00 = {(void *)func_ov003_0222eef8, 0xf, 0x11};
Unk_ov003_0225b738_Col data_ov003_0225b748(31, 20, 20, 31);
Unk_ov003_0225b738_Col data_ov003_0225b744(20, 20, 31, 31);
Unk_ov003_0225b738_Col data_ov003_0225b740(31, 31, 20, 31);
Unk_ov003_0225b738_Col data_ov003_0225b73c(20, 31, 20, 31);
Unk_ov003_0225b738_Col data_ov003_0225b738(20, 31, 31, 31);
Unk_ov003_0225b738_Col data_ov003_0225b74c(20, 24, 24, 31);
}

// ---- functions ----

extern "C" void func_ov003_0222ef10(Unk_ov003_0222ef10_Cam *cam) {
    void *c = func_020947f0(4);
    s32 t;
    s32 v;
    if (cam->unk_1ca != 0) {
        v = func_0203a6fc(c, cam->unk_1cc, cam->unk_1d8, cam->unk_110, &t);
    } else {
        v = func_0203a7b8(c, cam->unk_1cc, cam->unk_110, &t);
    }
    cam->unk_118 = cam->unk_118 + t;
    if (v < 0x4800) {
        v = 0x4800;
    } else if (v > 0xb000) {
        v = 0xb000;
    }
    u32 q = func_01ffc5a4(v - 0x4800, 0x6800);
    cam->unk_1e4 = 0x1000 - q;
    func_0203c0b0(cam, 0xa, 0, q);
}

extern "C" Unk_ov003_02234f10 *func_ov003_0222eef8() {
    return new Unk_ov003_02234f10;
}

Unk_ov003_02234f10::Unk_ov003_02234f10() {}

Unk_ov003_02234f10::~Unk_ov003_02234f10() {}

BOOL Unk_ov003_02234f10::vfunc_00() {
    func_ov003_0222ec20(this);
    func_ov003_0222ed20(this);
    return TRUE;
}

BOOL Unk_ov003_02234f10::vfunc_18() { return TRUE; }
BOOL Unk_ov003_02234f10::vfunc_24() { return TRUE; }
BOOL Unk_ov003_02234f10::vfunc_0c() { return TRUE; }
