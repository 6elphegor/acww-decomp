// mwcc-version: 1.2/base
#include "types.h"

// TU18 of ov003: ground helper class Unk_ov003_02217b10 (0x02217b10-0x02217be8) and the six colour constants of its header

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_020553f8_Res;

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();

    u8 pad_04[0x64 - 4];
    Unk_ov003_02215c7c_Blk unk_64;
    u8 pad_94[4];
    u32 unk_98;
};

class Model : public Unk_020dbd34 {
public:
    void setResourceAndBind(Unk_020553f8_Res *r, u32 a);
};

struct Unk_ov003_02217910_V3 {
    s32 x, y, z;
};

struct Unk_ov003_02217910_V3D {
    s32 x, y, z;
    Unk_ov003_02217910_V3D() {}
    ~Unk_ov003_02217910_V3D() {}
};

struct Unk_ov003_02217b78_Ent {
    u8 pad_00[8];
    Unk_020553f8_Res *unk_08;
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_02235478_Col {
    u8 r, g, b, a;
    Unk_ov003_02235478_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

class Unk_ov003_02217b10 {
public:
    Unk_ov003_02217b10();
    ~Unk_ov003_02217b10();
    BOOL func_02217b10();
    BOOL func_02217b78();
    void func_02217bb8();

    /* 0x00 */ Unk_020dbd34 unk_00;
    /* 0x9c */ Unk_020553f8_Res *unk_9c;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define func_02036ce0 _ZN12Unk_02036cec13func_02036ce0Ev
#define func_02036d54 _ZN12Unk_02036cec13func_02036d54Ei
#define Unk_020d93b8_getEyeCurveAngle _ZN12Unk_020d93b816getEyeCurveAngleEv

extern "C" {
extern void *gCamera;
extern s32 data_020c8cb4;
extern u8 data_021f47e0[];
extern Unk_ov003_02217910_V3 gCameraLookAt;

void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 Unk_020d93b8_getEyeCurveAngle(void *self);
void *func_02036c58();
void *func_02036d54(void *self, s32 i);
s32 func_02036ce0(void *self);
}

extern "C" {
Unk_ov003_02235478_Col data_ov003_02235478(31, 20, 20, 31);
Unk_ov003_02235478_Col data_ov003_0223547c(20, 20, 31, 31);
// Data order: this unit is placed object by object (see object_order.txt).
Unk_ov003_02235478_Col data_ov003_02235488(31, 31, 20, 31);
Unk_ov003_02235478_Col data_ov003_02235484(20, 31, 20, 31);
Unk_ov003_02235478_Col data_ov003_02235480(20, 31, 31, 31);
Unk_ov003_02235478_Col data_ov003_0223548c(20, 24, 24, 31);
}

// ---- functions ----

Unk_ov003_02217b10::Unk_ov003_02217b10() {
    func_02217bb8();
}

Unk_ov003_02217b10::~Unk_ov003_02217b10() {
}

void Unk_ov003_02217b10::func_02217bb8() {
    unk_9c = 0;
}

BOOL Unk_ov003_02217b10::func_02217b78() {
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)func_02036d54(func_02036c58(), 0x83);
    s32 t = func_02036ce0(func_02036c58());
    unk_9c = e->unk_08;
    ((Model *)&unk_00)->setResourceAndBind(unk_9c, t);
    func_02217b10();
    return TRUE;
}

BOOL Unk_ov003_02217b10::func_02217b10() {
    Unk_ov003_02217910_V3D v;
    void *cam = gCamera;
    if (cam != 0) {
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        func_020e8388(data_021f47e0, v.x - data_020c8cb4, 0, 0);
        func_020e8434(data_021f47e0, Unk_020d93b8_getEyeCurveAngle(cam));
        unk_00.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}
