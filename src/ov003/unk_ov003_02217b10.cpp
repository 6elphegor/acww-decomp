// mwcc-version: 1.2/base
#include "types.h"

// TU18 of ov003: ground helper class FieldGroundBackdrop (0x02217b10-0x02217be8) and the six colour constants of its header

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_020553f8_Res;

class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();

    u8 pad_04[0x64 - 4];
    Unk_ov003_02215c7c_Blk unk_64;
    u8 pad_94[4];
    u32 unk_98;
};

class Model : public CachedModel {
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
    Unk_020553f8_Res *modelRes;
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

class FieldGroundBackdrop {
public:
    FieldGroundBackdrop();
    ~FieldGroundBackdrop();
    BOOL followCamera();
    BOOL init();
    void clear();

    /* 0x00 */ CachedModel unk_00;
    /* 0x9c */ Unk_020553f8_Res *unk_9c;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define BgModelCache_getGroundTex _ZN12BgModelCache12getGroundTexEv
#define BgModelCache_getAcre _ZN12BgModelCache7getAcreEi
#define Unk_020d93b8_getEyeCurveAngle _ZN12Unk_020d93b816getEyeCurveAngleEv

extern "C" {
extern void *gCamera;
extern s32 data_020c8cb4;
extern u8 data_021f47e0[];
extern Unk_ov003_02217910_V3 gCameraLookAt;

void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 Unk_020d93b8_getEyeCurveAngle(void *self);
void *BgModelCache_Get();
void *BgModelCache_getAcre(void *self, s32 i);
s32 BgModelCache_getGroundTex(void *self);
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

FieldGroundBackdrop::FieldGroundBackdrop() {
    clear();
}

FieldGroundBackdrop::~FieldGroundBackdrop() {
}

void FieldGroundBackdrop::clear() {
    unk_9c = 0;
}

BOOL FieldGroundBackdrop::init() {
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)BgModelCache_getAcre(BgModelCache_Get(), 0x83);
    s32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    unk_9c = e->modelRes;
    ((Model *)&unk_00)->setResourceAndBind(unk_9c, t);
    followCamera();
    return TRUE;
}

BOOL FieldGroundBackdrop::followCamera() {
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
