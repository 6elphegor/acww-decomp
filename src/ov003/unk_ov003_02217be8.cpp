// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// TU19 of ov003: ground part classes 0x02217be8 / 0x02217dbc and the scene 0x02232418 (0x02217be8-0x022187f8)

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_020553f8_Res;

struct Unk_ov003_02217910_V3 {
    s32 x, y, z;
};

// ---- main-module helper classes ----
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
    void setInitCallback(s32 a, s32 b);
    u32 getRenderObj();
    void drawScaled(s32 *p);
    void clearResource();
    void setResourceAndBind(Unk_020553f8_Res *r, u32 a);
};

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void step();

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
    void addToRenderObj(u32 a);
    void init(s32 a, s32 b, s32 c, u16 d);
    BOOL allocMatAnm(u32 a, void *c);

    s32 *unk_18;
    u32 unk_1c;
};

class TexPatVramAnim {
public:
    u32 pad[0x90 / 4];
    TexPatVramAnim();
    ~TexPatVramAnim();
    BOOL update();
};

// ---- this overlay's part classes ----
struct Unk_ov003_02217b78_Ent {
    u8 pad_00[8];
    Unk_020553f8_Res *unk_08;
};

struct Unk_ov003_02217c3c_P {
    u8 pad_00[8];
    Unk_020553f8_Res *unk_08;
    u8 pad_0c[0x14];
    u32 unk_20;
};

struct Unk_ov003_02217c3c_Obj {
    u8 pad_00[0x20];
    Unk_ov003_02217c3c_P *unk_20;
};

class Unk_ov003_02217b10 {
public:
    Unk_ov003_02217b10();
    ~Unk_ov003_02217b10();
    BOOL func_02217b10();
    BOOL func_02217b78();
    void func_02217bb8();

    /* 0x00 */ CachedModel unk_00;
    /* 0x9c */ void *unk_9c;
};

class Unk_ov003_02217be8 {
public:
    static void *operator new(unsigned long, void *p) { return p; }
    Unk_ov003_02217be8();
    BOOL func_02217be8();
    BOOL func_02217bfc();
    BOOL func_02217c10();
    BOOL func_02217c3c(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ CachedModel unk_04;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ ModelAnim unk_a8[2];
    /* 0xe8 */ s8 unk_e8;
};

class Unk_ov003_02217dbc {
public:
    Unk_ov003_02217dbc();
    ~Unk_ov003_02217dbc();
    BOOL func_02217dbc();
    BOOL func_02217df0();
    BOOL func_02217e10();
    BOOL func_02217e48(Unk_ov003_02217910_V3 *pos, s32 idx);
    BOOL func_02217f78();
    s32 func_02217fa4();
    s32 func_02217fac();
    Unk_ov003_02217910_V3 *func_02217fb4();
    s32 func_02217fb8();

    /* 0x00 */ CachedModel unk_00;
    /* 0x9c */ Unk_ov003_02217910_V3 unk_9c;
    /* 0xa8 */ s16 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ ModelAnim unk_b4[2];
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_02235498_Col {
    u8 r, g, b, a;
    Unk_ov003_02235498_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

// ---- scene ----
struct Unk_ov003_02218478_V3 {
    s32 x, y, z;
    Unk_ov003_02218478_V3() {}
};

struct Unk_ov003_02218478_Cell {
    u8 pad[0x28];
};

struct Unk_ov003_02218478_Grid {
    Unk_ov003_02218478_Cell *cells;
    u32 w, h;
};

struct Unk_ov003_02217948 {
    u32 pad[0xc / 4];
};

struct Unk_ov003_022179b8_Rec {
    u32 pad[0x1c / 4];
};

class Unk_ov003_02232418 : public GameProc {
public:
    /* 0x50 */ Unk_ov003_02217be8 *unk_50;
    /* 0x54 */ Unk_ov003_02217dbc unk_54;
    /* 0x148 */ s32 unk_148;
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ Unk_ov003_02217b10 unk_150;
    /* 0x1f0 */ TexPatVramAnim unk_1f0;
    /* 0x280 */ TexPatVramAnim unk_280;
    /* 0x310 */ Unk_ov003_02217948 unk_310;

    Unk_ov003_02232418();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_ov003_02232418();
    void func_ov003_022180a8();
};

struct Unk_ov003_02218034_Obj {
    u8 pad_00[0x5c];
    u8 *unk_5c;
};

struct Unk_ov003_02218784_Obj {
    u8 pad_00[0x1c];
    void (*unk_1c)(struct Unk_ov003_02218794_Obj *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
};

struct Unk_ov003_02218794_Inner {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_ov003_02218794_A {
    u8 pad_00[1];
    u8 unk_01;
};

struct Unk_ov003_02218794_B {
    u8 pad_00[0x28];
    u32 unk_28;
};

struct Unk_ov003_02218794_Obj {
    Unk_ov003_02218794_A *unk_00;
    Unk_ov003_02218794_Inner *unk_04;
    u8 pad_08[0xb0 - 0x8];
    struct Unk_ov003_02218794_B *unk_b0;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define MapBlockAcre_getAcreId _ZN12MapBlockAcre9getAcreIdEv
#define BgModelCache_getGroundTex _ZN12BgModelCache12getGroundTexEv
#define BgModelCache_getRiverPatTex _ZN12BgModelCache14getRiverPatTexEv
#define BgModelCache_getRiverPatAnm _ZN12BgModelCache14getRiverPatAnmEv
#define BgModelCache_getBeBPatTex _ZN12BgModelCache12getBeBPatTexEv
#define BgModelCache_getBeBPatAnm _ZN12BgModelCache12getBeBPatAnmEv
#define BgModelCache_getAcre _ZN12BgModelCache7getAcreEi
#define BgModelCache_getGroundMatAnm _ZN12BgModelCache15getGroundMatAnmEv
#define BgModelCache_getGroundTexSrtAnm _ZN12BgModelCache18getGroundTexSrtAnmEv
#define Unk_020d93b8_getEyeCurveAngle _ZN12Unk_020d93b816getEyeCurveAngleEv
#define TexPatVramAnim_init _ZN14TexPatVramAnim4initEPhPKcS2_S0_S0_h

extern "C" {
extern void *gCamera;
extern Unk_ov003_02218478_V3 gCameraLookAt;
extern void *gBgHeap;
extern Unk_ov003_02218478_Grid *gSceneBlockMap;
extern s32 data_021ce63c;
extern s32 data_020c8cbc;
extern u8 data_021f47e0[];

s32 G3dResAccess_findMatIdx(void *self, s32 a);
s32 func_020ac40c();
s32 func_020abe28();
void *BgModelCache_Get();
s32 BgModelCache_getGroundTex(void *self);
s32 BgModelCache_getRiverPatTex(void *self);
s32 BgModelCache_getRiverPatAnm(void *self);
s32 BgModelCache_getGroundMatAnm(void *self);
s32 BgModelCache_getGroundTexSrtAnm(void *self);
s32 BgModelCache_getBeBPatTex(void *self);
s32 BgModelCache_getBeBPatAnm(void *self);
void *BgModelCache_getAcre(void *self, s32 i);
s32 MapBlockAcre_getAcreId(void *self);
s32 Acre_GetAttr(s32 a);
s32 Unk_020d93b8_getEyeCurveAngle(void *self);
void func_0203bac4(void *, s32 *, s32 *);
s32 func_0203efec(s32);
s16 WorldCurve_ToCurved(Unk_ov003_02218478_V3 *out, Unk_ov003_02218478_V3 *v);
s32 func_0203edc8();
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02030bc4(s32, s32);
void FieldPos_FromBlockUnitCenter(Unk_ov003_02218478_V3 *, s32, s32, s32, s32);
void *Heap_Alloc(void *, s32);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 func_020302cc();
s32 FX_Div(s32 a, s32 b);
s32 TexPatVramAnim_init(void *self, void *hdr, const char *n1, const char *n2, s32 x, s32 y, s32 flag);

// TU17 functions (the nearest-record class, sound handle helpers)
void func_ov003_02217908(void *p);
void func_ov003_02217910(void *p, void *a, u16 b);
void func_ov003_0221793c(void *p);
void func_ov003_02217944(void *p);
void func_ov003_02217948(void *p);
s32 func_ov003_0221795c(void *p);
void *func_ov003_02217960(void *p);
void func_ov003_0221798c(void *p);
void func_ov003_022179b8(void *out, Unk_ov003_02218478_V3 *pos);
s32 func_ov003_02217adc(void *p);
s32 func_ov003_02217aec(void *p);

}

// scene registration entry {factory, 0xd, 0x9}
struct Unk_ov003_022323ec_Entry {
    void *factory;
    u16 a, b;
};

extern "C" Unk_ov003_02232418 *func_ov003_022187dc();

extern "C" {
// the six header colours first (in __sinit store order), then the unit's own data
Unk_ov003_02235498_Col data_ov003_022354a4(31, 20, 20, 31);
Unk_ov003_02235498_Col data_ov003_022354a8(20, 20, 31, 31);
Unk_ov003_02235498_Col data_ov003_02235498(31, 31, 20, 31);
Unk_ov003_02235498_Col data_ov003_022354a0(20, 31, 20, 31);
Unk_ov003_02235498_Col data_ov003_0223549c(20, 31, 31, 31);
Unk_ov003_02235498_Col data_ov003_022354ac(20, 24, 24, 31);
const s32 data_ov003_0222f010[2] = {0x84, 0x85};
u8 data_ov003_02235490;
s32 data_ov003_02235494;
char data_ov003_022323f4[0xc] = "m_grd_riv";
char data_ov003_02232400[0x10] = "m_grd_sea085";
u32 data_ov003_022323e4[2] = {(u32)data_ov003_022323f4, (u32)data_ov003_02232400};
Unk_ov003_022323ec_Entry data_ov003_022323ec = {(void *)func_ov003_022187dc, 0xd, 0x9};
}

// ---- functions ----

extern "C" Unk_ov003_02232418 *func_ov003_022187dc() {
    return new Unk_ov003_02232418;
}

extern "C" void func_ov003_02218794(Unk_ov003_02218794_Obj *o) {
    if (data_ov003_02235494 == 0) {
        Unk_ov003_02218794_Inner *in = o->unk_04;
        u8 *r3 = in->unk_2c;
        u8 b = o->unk_00->unk_01;
        if (r3 != 0) {
            if (*(s8 *)(r3 + 0xe8) == b) {
                FX_Div(o->unk_b0->unk_28 + 0xda2, 0xda2);
                func_020302cc();
                data_ov003_02235494 = 1;
            }
        }
    }
}

extern "C" void func_ov003_02218784(Unk_ov003_02218784_Obj *o) {
    o->unk_1c = func_ov003_02218794;
    o->unk_90 = 2;
}

Unk_ov003_02232418::Unk_ov003_02232418() {
    func_ov003_02217948(&unk_310);
}

Unk_ov003_02232418::~Unk_ov003_02232418() {
    func_ov003_02217944(&unk_310);
}

BOOL Unk_ov003_02232418::vfunc_00() {
    unk_150.func_02217bb8();
    unk_150.func_02217b78();
    s32 r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    s32 r4 = BgModelCache_getRiverPatTex(BgModelCache_Get());
    s32 r0 = BgModelCache_getRiverPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&unk_1f0, (void *)r6, "grd_riv.0", "grd_riv_pl", r4, r0, 0);
    r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    r4 = BgModelCache_getBeBPatTex(BgModelCache_Get());
    r0 = BgModelCache_getBeBPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&unk_280, (void *)r6, "grd_beB", "grd_beB_pl", r4, r0, 1);
    Unk_ov003_02218478_Grid *g = gSceneBlockMap;
    unk_148 = g->w;
    unk_14c = g->h;
    unk_50 = (Unk_ov003_02217be8 *)Heap_Alloc(gBgHeap, unk_14c * (unk_148 * 0xec));
    {
        Unk_ov003_02217be8 *e = unk_50;
        for (; e < unk_50 + unk_148 * unk_14c; e++) {
            e = new (e) Unk_ov003_02217be8;
        }
    }
    u32 by, bx;
    u32 tx, ty;
    for (by = 0; by < unk_14c; by++) {
        for (bx = 0; bx < unk_148; bx++) {
            for (ty = 0; ty < 16; ty++) {
                for (tx = 0; tx < 16; tx++) {
                    s32 o1, o2;
                    FieldUnit_FromBlockUnit(&o1, &o2, bx, by, tx, ty);
                    s32 t = func_02030bc4(o1, o2);
                    if (t != -1) {
                        Unk_ov003_02217910_V3 v;
                        v.x = 0;
                        v.y = 0;
                        v.z = 0;
                        FieldPos_FromBlockUnitCenter((Unk_ov003_02218478_V3 *)&v, bx, by, tx, ty);
                        unk_54.func_02217e48(&v, t);
                    }
                }
            }
        }
    }
    s32 idx = 0;
    for (bx = 0; bx < unk_14c; bx++) {
        for (by = 0; by < unk_148; by++) {
            Unk_ov003_02218478_Cell *c;
            if (by < g->w && bx < g->h && g->cells != 0) {
                c = &g->cells[bx * g->w + by];
            } else {
                c = 0;
            }
            (unk_50 + idx++)->func_02217c3c((Unk_ov003_02217c3c_Obj *)c, by, bx);
        }
    }
    func_ov003_0221793c(&unk_310);
    return TRUE;
}

BOOL Unk_ov003_02232418::onExecute() {
    Unk_ov003_02217be8 *e;
    s32 i, j;
    unk_150.func_02217b10();
    unk_54.func_02217e10();
    e = unk_50;
    i = 0;
    goto test0;
loop0:
    {
        j = 0;
        s32 *volatile pw = &unk_148;
        goto test1;
    loop1:
        e->func_02217c10();
        e++;
        j++;
    test1:
        if (j < *pw) goto loop1;
    }
    i++;
test0:
    if (i < unk_14c) goto loop0;
    unk_1f0.update();
    unk_280.update();
    func_ov003_022180a8();
    data_021ce63c = 0;
    return TRUE;
}

static inline BOOL Unk_ov003_022181bc_Chk(s32 x, s32 y, s32 cx, s32 cy) {
    if (x >= cx - 1 && x <= cx + 1 && y >= cy - 2 && y <= cy + 1) return TRUE;
    return FALSE;
}

BOOL Unk_ov003_02232418::onDraw() {
    s32 a, cx, cy, b, cam_r, found;
    s32 x, y, idx;
    void *cam;
    data_ov003_02235494 = 0;
    func_020ac40c();
    func_020abe28();
    a = 0;
    cx = 0;
    cy = 0;
    b = ((s32 *)unk_54.func_02217fb4())[2];
    cam_r = 0;
    cam = gCamera;
    if (cam != 0) {
        cam_r = Unk_020d93b8_getEyeCurveAngle(cam);
        func_0203bac4(cam, &cx, &cy);
        a = func_0203efec(cam_r);
    }
    found = 0;
    for (y = 0; y < unk_14c; y++) {
        for (x = 0; x < unk_148; x++) {
            BOOL r = FALSE;
            r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
            if (r) {
                if (x == unk_54.func_02217fac() && y == unk_54.func_02217fa4()) {
                    found = 1;
                }
            }
        }
    }
    if (found == 0) {
        func_ov003_02217aec(&unk_150);
    }
    if (found == 0) {
        idx = 0;
        for (y = 0; y < unk_14c; y++) {
            for (x = 0; x < unk_148; x++) {
                BOOL r = FALSE;
                r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                if (r) (unk_50 + idx)->func_02217bfc();
                idx++;
            }
        }
    } else {
        if (unk_54.func_02217fb8() < cam_r) {
            if (b < a) {
                unk_54.func_02217df0();
                func_ov003_02217aec(&unk_150);
            } else {
                func_ov003_02217aec(&unk_150);
                unk_54.func_02217df0();
            }
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (unk_50 + idx)->func_02217bfc();
                    idx++;
                }
            }
        } else {
            func_ov003_02217aec(&unk_150);
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (unk_50 + idx)->func_02217bfc();
                    idx++;
                }
            }
            unk_54.func_02217df0();
        }
    }
    return TRUE;
}

BOOL Unk_ov003_02232418::vfunc_0c() {
    s32 i, j;
    s32 idx;
    unk_54.func_02217dbc();
    idx = 0;
    for (i = 0; i < unk_14c; i++) {
        for (j = 0; j < unk_148; j++) {
            (unk_50 + idx++)->func_02217be8();
        }
    }
    func_ov003_02217adc(&unk_150);
    func_ov003_02217908(&unk_310);
    return TRUE;
}

void Unk_ov003_02232418::func_ov003_022180a8() {
    data_ov003_02235490 = 0;
    if (gCamera != 0) {
        Unk_ov003_02218478_V3 v = gCameraLookAt;
        Unk_ov003_022179b8_Rec q;
        func_ov003_022179b8(&q, &v);
        void *r6 = (void *)func_ov003_02217960(&q);
        if (r6 != 0) {
            u32 r4 = 0x80d;
            switch (func_ov003_0221795c(&q)) {
            case 0x11:
                r4 = 0x80b;
                break;
            case 0x12:
                data_ov003_02235490 = 1;
                break;
            case 5:
                r4 = 0x80e;
                break;
            case 0xf:
                r4 = 0x80c;
                break;
            }
            func_ov003_02217910(&unk_310, r6, r4);
        }
        func_ov003_0221798c(&q);
    }
}

extern "C" void func_ov003_02218034(void *op, s32 flag) {
    Unk_ov003_02218034_Obj *o = (Unk_ov003_02218034_Obj *)op;
    u32 i;
    u8 *base = o->unk_5c;
    u8 *r4 = base + *(s32 *)(base + 8);
    for (i = 0; i < 2; i++) {
        u32 t = G3dResAccess_findMatIdx(o->unk_5c, data_ov003_022323e4[i]);
        if (t != (u32)-1) {
            u8 *r1 = r4 + 4;
            u32 hw = *(u16 *)(r4 + 0xa);
            u8 *r2 = r1 + hw;
            u32 st = *(u16 *)(r1 + hw);
            u8 *e = r4 + *(s32 *)(r2 + st * t + 4);
            if (e != 0) {
                *(u32 *)(e + 0x10) |= 0x800;
                if (flag != 0) {
                    *(u32 *)(e + 0xc) |= 0x800;
                } else {
                    *(u32 *)(e + 0xc) &= ~0x800;
                }
            }
        }
    }
}

Unk_ov003_02217dbc::Unk_ov003_02217dbc() {
    unk_ac = -1;
    unk_b0 = -1;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
}

Unk_ov003_02217dbc::~Unk_ov003_02217dbc() {
}

s32 Unk_ov003_02217dbc::func_02217fb8() {
    return unk_a8;
}

Unk_ov003_02217910_V3 *Unk_ov003_02217dbc::func_02217fb4() {
    return &unk_9c;
}

s32 Unk_ov003_02217dbc::func_02217fac() {
    return unk_ac;
}

s32 Unk_ov003_02217dbc::func_02217fa4() {
    return unk_b0;
}

BOOL Unk_ov003_02217dbc::func_02217f78() {
    if (func_02217fac() != -1 && func_02217fa4() != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217e48(Unk_ov003_02217910_V3 *pos, s32 idx) {
    if (func_02217f78()) {
        return FALSE;
    }
    unk_9c.x = pos->x;
    unk_9c.y = pos->y;
    unk_9c.z = pos->z;
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)BgModelCache_getAcre(BgModelCache_Get(), data_ov003_0222f010[idx]);
    s32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    Unk_020553f8_Res *res = e->unk_08;
    ((Model *)&unk_00)->setResourceAndBind(res, t);
    if (unk_b4[0].allocMatAnm((u32)res, gBgHeap)) {
        unk_b4[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_b4[0].addToRenderObj(((Model *)&unk_00)->getRenderObj());
    }
    if (unk_b4[1].allocMatAnm((u32)res, gBgHeap)) {
        unk_b4[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_b4[1].addToRenderObj(((Model *)&unk_00)->getRenderObj());
    }
    Unk_ov003_02217910_V3 tmp;
    unk_a8 = WorldCurve_ToCurved((Unk_ov003_02218478_V3 *)&tmp, (Unk_ov003_02218478_V3 *)&unk_9c);
    func_020e8388(data_021f47e0, unk_9c.x, 0, 0);
    func_020e8434(data_021f47e0, unk_a8);
    unk_00.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    unk_ac = pos->x >> 17;
    unk_b0 = pos->z >> 17;
    return TRUE;
}

BOOL Unk_ov003_02217dbc::func_02217e10() {
    if (func_02217f78()) {
        ModelAnim *p = &unk_b4[0];
        ModelAnim *e = &unk_b4[2];
        for (; p < e; p++) {
            p->step();
            *p->unk_18 = p->unk_08;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217df0() {
    if (func_02217f78()) {
        ((Model *)&unk_00)->drawScaled(0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02217dbc::func_02217dbc() {
    if (func_02217f78()) {
        ((Model *)&unk_00)->clearResource();
        unk_b0 = -1;
        unk_ac = unk_b0;
        return TRUE;
    }
    return FALSE;
}

Unk_ov003_02217be8::Unk_ov003_02217be8() {
    unk_00 = 0;
    unk_a0 = 0;
    unk_a4 = 0;
}

BOOL Unk_ov003_02217be8::func_02217c3c(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b) {
    unk_a0 = a;
    unk_a4 = b;
    unk_00 = MapBlockAcre_getAcreId(o);
    u32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    Unk_ov003_02217c3c_P *p = o->unk_20;
    u32 q = p->unk_20;
    if (q != 0) t = q;
    Unk_020553f8_Res *res = p->unk_08;
    ((Model *)&unk_04)->setResourceAndBind(res, t);
    if (unk_a8[0].allocMatAnm((u32)res, gBgHeap)) {
        unk_a8[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_a8[0].addToRenderObj(((Model *)&unk_04)->getRenderObj());
    }
    if (unk_a8[1].allocMatAnm((u32)res, gBgHeap)) {
        unk_a8[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_a8[1].addToRenderObj(((Model *)&unk_04)->getRenderObj());
    }
    func_020e8388(data_021f47e0, a * data_020c8cbc, 0, 0);
    s16 ang = b * func_0203edc8();
    func_020e8434(data_021f47e0, ang);
    unk_04.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    if (Acre_GetAttr(unk_00) & 8) {
        unk_e8 = G3dResAccess_findMatIdx(res, (s32)"m_grd_beA");
        if (unk_e8 != -1) {
            ((Model *)&unk_04)->setInitCallback((s32)func_ov003_02218784, (s32)this);
        }
    }
    func_ov003_02218034(&unk_04, 1);
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217c10() {
    ModelAnim *e;
    ModelAnim *p;
    p = &unk_a8[0];
    e = &unk_a8[2];
    for (; p < e; p++) {
        p->step();
        *p->unk_18 = p->unk_08;
    }
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217bfc() {
    ((Model *)&unk_04)->drawScaled(0);
    return TRUE;
}

BOOL Unk_ov003_02217be8::func_02217be8() {
    ((Model *)&unk_04)->clearResource();
    return TRUE;
}
