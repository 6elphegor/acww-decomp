#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Mtx43 {
    s32 m[12];
};

struct Basis {
    Vec3 a, b, c;
};

struct Plane {
    s32 v[4];
};

// object of size 0x44 (vtable data_020e44d4)
struct Unk_0202f64c {
    Unk_0202f64c();
    ~Unk_0202f64c();
    virtual void pushOutFace();
    virtual void pushBackCrossing();
    virtual void pushOutEdges();
    virtual void collide();
    u8 pad[0x34];
};

struct TouchPickTriangle : Unk_0202f64c {
    TouchPickTriangle();
    ~TouchPickTriangle();
    BOOL setupCurved(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x38 */ TouchPickTriangle *next;
    /* 0x3c */ s32 kind;
    /* 0x40 */ u8 index;
};

struct Unk_0202f660_V3;
struct Unk_0202e918_Vec3;

// base of TouchPickCylinder: symbols.txt names its base-object constructor/destructor and func_0202fd8c with the class
// name CollisionCylinderX and these parameter types (labels at 0x0202fddc / 0x0202fda4 / 0x0202fd8c)
struct CollisionCylinderX {
    CollisionCylinderX();
    ~CollisionCylinderX();
    void setCylinder(Unk_0202f660_V3 *a, s32 b, s32 c);
    u8 pad[0x14];
};

struct TouchPickCylinder : CollisionCylinderX {
    TouchPickCylinder();
    ~TouchPickCylinder();
    BOOL setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x14 */ s32 kind;
    /* 0x18 */ u8 index;
    /* 0x1c */ TouchPickCylinder *next;
};

struct HitSphere {
    HitSphere();
    ~HitSphere();
    void set(Unk_0202e918_Vec3 *a, s32 b);
    u8 pad[0x10];
};

struct TouchPickSphere : HitSphere {
    TouchPickSphere();
    ~TouchPickSphere();
    BOOL setupCurved(Vec3 *a, Vec3 *b, s32 c, u8 d);
    BOOL setup(Vec3 *a, Vec3 *b, s32 c, u8 d);
    /* 0x10 */ u8 index;
    /* 0x14 */ s32 kind;
    /* 0x18 */ TouchPickSphere *next;
};

struct TouchPickResult {
    TouchPickResult();
    ~TouchPickResult();
    void resetResult(u8 a);
    /* 0x00 */ s32 groundX;
    /* 0x04 */ s32 groundY;
    /* 0x08 */ s32 groundZ;
    /* 0x0c */ s32 targetX;
    /* 0x10 */ s32 targetY;
    /* 0x14 */ s32 targetZ;
    /* 0x18 */ u8 targetKind;
    /* 0x19 */ u8 targetIndex;
    /* 0x1a */ u8 enabled;
};

struct TouchPickBox {
    TouchPickBox();
    ~TouchPickBox();
    BOOL build(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f);
    /* 0x00 */ TouchPickTriangle unk_00[10];
};

struct TouchPicker : TouchPickResult {
    TouchPicker();
    ~TouchPicker();
    void reset();
    BOOL addTriangle(TouchPickTriangle *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL pushTriangle(TouchPickTriangle *o);
    BOOL addCylinder(TouchPickCylinder *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL pushCylinder(TouchPickCylinder *o);
    BOOL addSphere(TouchPickSphere *o, Vec3 *a, Vec3 *b, s32 c, u8 d);
    BOOL pushSphere(TouchPickSphere *o);
    BOOL addBox(TouchPickBox *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
    BOOL pushBox(TouchPickBox *box);
    /* 0x1c */ TouchPickTriangle *triangles;
    /* 0x20 */ TouchPickSphere *spheres;
    /* 0x24 */ TouchPickCylinder *cylinders;
};

struct TouchPickerView : TouchPickResult {
    void reset();
    TouchPickTriangle *triangles;
    TouchPickSphere *spheres;
    TouchPickCylinder *cylinders;
};

extern "C" {
s32 WorldCurve_ToCurved(Vec3 *out, Vec3 *in);
s32 func_01ffcb0c(s32 a, s32 b);
extern s16 data_02135f44[];
extern s16 data_02136f44[];
extern s16 data_02138f44[];
void func_020e944c(Vec3 *v, s32 angle);
extern s32 gCamera;
extern s32 data_020c8cb8;
extern Mtx43 gViewMtx;
s32 func_0203bc3c(s32 a);
s32 FX_Div(s32 a, s32 b);
void func_020e94f8(Vec3 *v);
void func_020e9888(Vec3 *v, s32 s);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
void MTX_Inverse43(Mtx43 *a, Mtx43 *b);
void MTX_MultVec43(Vec3 *v, Mtx43 *m, Vec3 *out);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
void func_020e93a0(Vec3 *v, s32 angle);
void WorldCurve_Apply(Vec3 *out, Vec3 *in);
s32 Collision_CalcTriangleNormal(Plane *p);
BOOL _ZN17CollisionTriangle3setEP15Unk_0202f2ac_V3S1_S1_S1_(TouchPickTriangle *t, Vec3 *a, Vec3 *b, Vec3 *c, Plane *p);
}

struct Unk_020b69e0_Pad {
    s32 v[4];
    Unk_020b69e0_Pad() {}
    ~Unk_020b69e0_Pad() {}
};

BOOL TouchPickTriangle::setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Vec3 va, vb, vc;
    WorldCurve_Apply(&va, a);
    WorldCurve_Apply(&vb, b);
    WorldCurve_Apply(&vc, c);
    return setupCurved(&va, &vb, &vc, d, e);
}

BOOL TouchPickTriangle::setupCurved(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Plane p;
    if (Collision_CalcTriangleNormal(&p) != 0) {
        kind = d;
        index = e;
        return _ZN17CollisionTriangle3setEP15Unk_0202f2ac_V3S1_S1_S1_(this, a, b, c, &p);
    }
    return FALSE;
}

TouchPickSphere::TouchPickSphere() {
    kind = 0;
    index = 0;
    next = 0;
}

TouchPickSphere::~TouchPickSphere() {
}

BOOL TouchPickSphere::setup(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    Vec3 v;
    WorldCurve_Apply(&v, a);
    return setupCurved(&v, b, c, d);
}

BOOL TouchPickSphere::setupCurved(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    kind = c;
    index = d;
    set((Unk_0202e918_Vec3 *)a, (s32)b);
    return TRUE;
}

TouchPickCylinder::TouchPickCylinder() {
    kind = 0;
    next = 0;
    index = 0xff;
}

TouchPickCylinder::~TouchPickCylinder() {
}

BOOL TouchPickCylinder::setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Unk_020b69e0_Pad pad;
    kind = d;
    index = e;
    setCylinder((Unk_0202f660_V3 *)a, (s32)b, (s32)c);
    return TRUE;
}

void TouchPickResult::resetResult(u8 a) {
    groundX = 0;
    groundY = 0;
    groundZ = 0;
    groundX = (s32)0xffed4000;
    targetKind = 0;
    targetIndex = 0;
    targetX = 0;
    targetY = 0;
    targetZ = 0;
    enabled = a;
}

void TouchPickerView::reset() {
    resetResult(0);
    triangles = 0;
    spheres = 0;
    cylinders = 0;
}

void TouchPicker::reset() {
    resetResult(0);
    triangles = 0;
    spheres = 0;
    cylinders = 0;
}

TouchPicker::~TouchPicker() {
}

TouchPicker::TouchPicker() {
    resetResult(0);
    triangles = 0;
    spheres = 0;
    cylinders = 0;
}

BOOL TouchPicker::pushBox(TouchPickBox *box) {
    BOOL ok = TRUE;
    TouchPickTriangle *p = box->unk_00;
    for (u32 i = 0; i < 10; i++) {
        BOOL r = pushTriangle(p);
        p++;
        ok = (ok | r) ? TRUE : FALSE;
    }
    return ok;
}

BOOL TouchPicker::addBox(TouchPickBox *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f) {
    box->build(pos, w, h, d, angle, e, f);
    return pushBox(box);
}

BOOL TouchPicker::pushSphere(TouchPickSphere *o) {
    o->next = 0;
    if (spheres == 0) {
        spheres = o;
        return TRUE;
    }
    o->next = spheres;
    spheres = o;
    return TRUE;
}

BOOL TouchPicker::addSphere(TouchPickSphere *o, Vec3 *a, Vec3 *b, s32 c, u8 d) {
    o->setup(a, b, c, d);
    return pushSphere(o);
}

BOOL TouchPicker::pushCylinder(TouchPickCylinder *o) {
    o->next = 0;
    if (cylinders == 0) {
        cylinders = o;
        return TRUE;
    }
    o->next = cylinders;
    cylinders = o;
    return TRUE;
}

BOOL TouchPicker::addCylinder(TouchPickCylinder *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->setup(a, b, c, d, e);
    return pushCylinder(o);
}

BOOL TouchPicker::pushTriangle(TouchPickTriangle *o) {
    o->next = 0;
    if (triangles == 0) {
        triangles = o;
        return TRUE;
    }
    o->next = triangles;
    triangles = o;
    return TRUE;
}

BOOL TouchPicker::addTriangle(TouchPickTriangle *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->setup(a, b, c, d, e);
    return pushTriangle(o);
}

// six file-scope 4-byte objects built by the unit's __sinit (nothing reads them)
struct Unk_021ef474 {
    u8 red, green, blue, alpha;
    Unk_021ef474(u8 a, u8 b, u8 c, u8 d) {
        red = a;
        green = b;
        blue = c;
        alpha = d;
    }
};

Unk_021ef474 sColorPaleRed(31, 20, 20, 31);
Unk_021ef474 sColorPaleBlue(20, 20, 31, 31);
Unk_021ef474 sColorPaleYellow(31, 31, 20, 31);
Unk_021ef474 sColorPaleGreen(20, 31, 20, 31);
Unk_021ef474 sColorPaleCyan(20, 31, 31, 31);
Unk_021ef474 sColorGreyCyan(20, 24, 24, 31);

// Data order: this unit is placed object by object (see object_order.txt).

namespace Unk_020b60dc_NS {

struct Unk_020b60dc_Cfg {
    u32 unk_00;
    u8 unk_04;
};

// Triangle / plane test object (0x38 bytes)
struct Unk_020b60dc_Tri {
    u32 pad[0x38 / 4];
};

struct Unk_020b60dc_Line {
    u32 pad[0x24 / 4];
};

struct Unk_020b60dc_Cell {
    u32 pad[0x30 / 4];
    u32 waterKind;
    u32 pad_34[0xc / 4];
};

// ActorCollider (unk_02088b98.cpp), the fields TouchPick_Cast reads
class ActorCollider {
public:
    virtual Vec3 *getPos();
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 pad_0e[0x38 - 0xe];
    ActorCollider *unk_38;
};

struct Unk_020b60dc_Rec {
    Vec3 center;
    s32 circleRadius;
    s32 cylinderHeight;
    s32 kind;
    u8 index;
    Unk_020b60dc_Rec *next;
};

extern "C" {
void _ZN17CollisionTriangleC1EP15Unk_0202f660_V3S1_S1_S1_(void *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d);
void _ZN17CollisionTriangleD2Ev(void *t);
void _ZN17CollisionTriangleC1Ev(void *t);
BOOL _ZN17CollisionTriangle3setEP15Unk_0202f2ac_V3S1_S1_S1_(void *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *n);
s32 _ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(void *t, Vec3 *p);
BOOL _ZN17CollisionTriangle16intersectSegmentEP15Unk_0202f2ac_V3S1_S1_(void *t, Vec3 *out, Vec3 *a, Vec3 *b);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_020b60dc_Cell *x, Vec3 *v, s32 a, s32 b);
void _ZN10GroundInfo10initAtUnitEiiii(Unk_020b60dc_Cell *x, s32 a, s32 b, s32 c, s32 d);
void GroundInfo_Destruct(Unk_020b60dc_Cell *x);
s32 _ZN14GroundInfoBase9getHeightEi(Unk_020b60dc_Cell *x, s32 k);
void _ZN16CollisionSegmentC1EP15Unk_0202f660_V3S1_(Unk_020b60dc_Line *l, Vec3 *a, Vec3 *b);
void _ZN16CollisionSegmentD1Ev(Unk_020b60dc_Line *l);
BOOL _ZN9HitSphere16intersectSegmentEP17Unk_0202e918_Vec3P16Unk_0202e918_Cap(void *n, Vec3 *out, Unk_020b60dc_Line *l);
void TouchPick_CalcRay(Basis *out, s32 a, s32 b);
BOOL TouchPick_HitCylinder(Vec3 *out, Vec3 *in, void *node, s32 a, s32 b);
BOOL TouchPick_HitWorldDrum(Vec3 *out, Vec3 *a, Vec3 *b, s32 c, s32 d);
BOOL TouchPickKind_HasTarget(u8 v);
BOOL TouchPick_GetGroundPos(void *obj, Vec3 *out);
void WorldCurve_FromCurved(Vec3 *out, Vec3 *in);
s32 WorldCurve_GetRadius(void);
void *_ZN12Unk_020d93b816getEyeCurveAngleEv(void *cam);
void func_020e8344(Mtx43 *m, void *p);
void func_020e8528(Mtx43 *m, s32 a, s32 b, s32 c);
void func_020e8434(Mtx43 *m, s32 a);
void Collision_CalcTriangleNormal(Vec3 *out, Vec3 *a, Vec3 *b, Vec3 *c);
BOOL Collision_GetUnitShape(s32 x, s32 z, s32 *a, s32 *b, s32 *c);
void FieldPos_ToUnit(s32 *a, s32 *b, Vec3 *v);
s32 BuildingList_FindByGrid(s32 a, s32 b);
s32 BuildingList_IndexOf(s32 a);

extern s32 gGfxMainOnTop;
extern Unk_020b60dc_Cfg *gCurSceneInfo;
extern s32 data_020c8cbc;
extern s32 data_020c8cb8;
extern s32 data_020c7c1c;
extern void *gCamera;
extern Vec3 gCameraLookAt;
extern ActorCollider *gActorColliderList;
extern u8 gFieldSceneKind;
}

inline BOOL Unk_020b60dc_IsMode0() {
    return gFieldSceneKind == 0;
}

extern "C" void TouchPick_Cast(TouchPicker *self, s32 sx, s32 sy, u8 flag) {
    Vec3 t[3];
    Vec3 p0, p1, r, v;

    self->resetResult(flag);
    if (flag == 0 || gGfxMainOnTop == 1) {
        self->spheres = 0;
        self->cylinders = 0;
        self->triangles = 0;
        return;
    }
    TouchPick_CalcRay((Basis *)t, sx, sy);
    p0 = t[0];
    Vec3 *pb = &t[1];
    p1 = *pb;
    if (gCurSceneInfo->unk_04 == 1) {
        static s32 k1 = data_020c8cbc * 6;
        static s32 k2 = data_020c7c1c + WorldCurve_GetRadius();
        s32 kk = k1;
        if (TouchPick_HitWorldDrum(&r, &p0, &p1, k2, kk)) {
            WorldCurve_FromCurved(&v, &r);
            Unk_020b60dc_Cell x;
            _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&x, &v, 0, 0);
            if (x.waterKind != 0) {
                p1 = r;
                v.y = data_020c7c1c;
                self->groundX = v.x;
                self->groundY = v.y;
                self->groundZ = v.z;
            }
            GroundInfo_Destruct(&x);
        }
        if (!TouchPick_GetGroundPos(self, 0)) {
            if (TouchPick_HitWorldDrum(&r, &p0, &p1, WorldCurve_GetRadius(), kk)) {
                p1 = r;
                Vec3 w;
                WorldCurve_FromCurved(&w, &r);
                w.y = 0;
                self->groundX = w.x;
                self->groundY = w.y;
                self->groundZ = w.z;
            }
        }
        if (!TouchPick_GetGroundPos(self, 0)) {
            void *cam = gCamera;
            if (cam != 0) {
                struct { Vec3 a, b, c; } l;
                l.a = gCameraLookAt;
                Vec3 *pc = &t[2];
                l.b = *pc;
                s32 h = data_020c8cb8;
                func_020e9888(&l.b, h << 2);
                func_01ffd070(&l.c, &p0, &l.b);
                s32 k = data_020c8cbc;
                Vec3 q[4];
                q[0].x = l.a.x - k;
                q[0].y = h;
                q[0].z = 0;
                q[1].x = q[0].x;
                q[1].y = -0x2000;
                q[1].z = 0;
                q[2].x = l.a.x + k;
                q[2].y = -0x2000;
                q[2].z = 0;
                q[3].x = q[2].x;
                q[3].y = h;
                q[3].z = 0;
                Mtx43 m;
                func_020e8344(&m, _ZN12Unk_020d93b816getEyeCurveAngleEv(cam));
                func_020e8528(&m, 0, WorldCurve_GetRadius(), 0);
                func_020e8434(&m, -0x1000);
                func_020e8434(&m, 0);
                Vec3 rr[4];
                MTX_MultVec43(&q[0], &m, &rr[0]);
                MTX_MultVec43(&q[1], &m, &rr[1]);
                MTX_MultVec43(&q[2], &m, &rr[2]);
                MTX_MultVec43(&q[3], &m, &rr[3]);
                Vec3 pl;
                Collision_CalcTriangleNormal(&pl, &rr[0], &rr[1], &rr[2]);
                Unk_020b60dc_Tri tri[2];
                _ZN17CollisionTriangleC1EP15Unk_0202f660_V3S1_S1_S1_(&tri[0], &rr[0], &rr[1], &rr[2], &pl);
                _ZN17CollisionTriangleC1EP15Unk_0202f660_V3S1_S1_S1_(&tri[1], &rr[0], &rr[2], &rr[3], &pl);
                Unk_020b60dc_Tri *tp = &tri[0];
                for (u32 i = 0; i < 2; tp++, i++) {
                    if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(tp, &p0) >= 0) {
                        BOOL in;
                        if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(tp, &l.c) >= 0) {
                            in = TRUE;
                        } else {
                            in = FALSE;
                        }
                        if (!in) {
                            Vec3 ip;
                            if (_ZN17CollisionTriangle16intersectSegmentEP15Unk_0202f2ac_V3S1_S1_(tp, &ip, &p0, &l.c)) {
                                p1 = ip;
                                Vec3 j;
                                WorldCurve_FromCurved(&j, &ip);
                                self->groundX = j.x;
                                self->groundY = j.y;
                                self->groundZ = j.z;
                                self->groundY = 0;
                            }
                        }
                    }
                }
                _ZN17CollisionTriangleD2Ev(&tri[1]);
                _ZN17CollisionTriangleD2Ev(&tri[0]);
            }
        }
    } else {
        s32 x0 = p0.x >> 13;
        s32 z0 = p0.z >> 13;
        s32 x1 = p1.x >> 13;
        s32 z1 = p1.z >> 13;
        s32 xlo, zhi, zlo, xhi;
        xhi = x1;
        if (x0 <= x1) {
            xlo = x0;
        } else {
            xlo = x1;
            xhi = x0;
        }
        zhi = z1;
        if (z0 <= z1) {
            zlo = z0;
        } else {
            zlo = z1;
            zhi = z0;
        }
        s32 found = 0;
        for (s32 gx = xlo; gx <= xhi; gx++) {
            for (s32 gz = zlo; gz <= zhi; gz++) {
                Unk_020b60dc_Cell y;
                _ZN10GroundInfo10initAtUnitEiiii(&y, gx, gz, 0, 0);
                s32 h = _ZN14GroundInfoBase9getHeightEi(&y, 0);
                if (h < 0x4000 && h != 0) {
                    s32 cx = (gx << 13) + 0x1000;
                    Vec3 s[5];
                    s[0].x = cx; s[0].y = 0;
                    s32 cz = (gz << 13) + 0x1000;
                    s[0].z = cz;
                    s[1].x = cx; s[1].y = 0; s[1].z = cz;
                    s[2].x = cx; s[2].y = 0; s[2].z = cz;
                    s[3].x = cx; s[3].y = 0; s[3].z = cz;
                    s[4].x = cx; s[4].y = 0; s[4].z = cz;
                    s[1].x = cx - 0x1000; s[1].y = h; s[1].z = cz - 0x1000;
                    s[2].x = cx - 0x1000; s[2].y = h; s[2].z = cz + 0x1000;
                    s[3].x = cx + 0x1000; s[3].y = h; s[3].z = cz + 0x1000;
                    s[4].x = cx + 0x1000; s[4].y = h; s[4].z = cz - 0x1000;
                    Vec3 n;
                    n.x = 0; n.y = 0x1000; n.z = 0;
                    Unk_020b60dc_Tri ua[2];
                    _ZN17CollisionTriangleC1Ev(&ua[0]);
                    _ZN17CollisionTriangleC1Ev(&ua[1]);
                    _ZN17CollisionTriangle3setEP15Unk_0202f2ac_V3S1_S1_S1_(&ua[0], &s[1], &s[2], &s[4], &n);
                    _ZN17CollisionTriangle3setEP15Unk_0202f2ac_V3S1_S1_S1_(&ua[1], &s[2], &s[3], &s[4], &n);
                    Unk_020b60dc_Tri *up = &ua[0];
                    for (u32 i = 0; i < 2; up++, i++) {
                        if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(up, &p0) >= 0) {
                            BOOL in;
                            if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(up, &p1) >= 0) {
                                in = TRUE;
                            } else {
                                in = FALSE;
                            }
                            if (!in) {
                                Vec3 ip;
                                if (_ZN17CollisionTriangle16intersectSegmentEP15Unk_0202f2ac_V3S1_S1_(up, &ip, &p0, &p1)) {
                                    p1 = ip;
                                    self->groundX = p1.x;
                                    self->groundY = p1.y;
                                    self->groundZ = p1.z;
                                    found = 1;
                                }
                            }
                        }
                    }
                    _ZN17CollisionTriangleD2Ev(&ua[1]);
                    _ZN17CollisionTriangleD2Ev(&ua[0]);
                }
                GroundInfo_Destruct(&y);
            }
        }
        if (found == 0 && p0.y > 0 && p1.y <= 0) {
            struct { Vec3 d, dd; } dl;
            func_020e9960(&dl.d, &p1, &p0);
            s32 ay = p0.y < 0 ? -p0.y : p0.y;
            s32 dy = p0.y - p1.y;
            if (dy < 0) {
                dy = -dy;
            }
            s32 ratio = FX_Div(ay, dy);
            r.x = p0.x + func_01ffcb0c(dl.d.x, ratio);
            r.y = p0.y + func_01ffcb0c(dl.d.y, ratio);
            r.z = p0.z + func_01ffcb0c(dl.d.z, ratio);
            p1.x = r.x;
            p1.y = r.y;
            p1.z = r.z;
            Unk_020b60dc_Cell z;
            _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&z, &r, 0, 0);
            self->groundX = r.x;
            self->groundY = r.y;
            self->groundZ = r.z;
            GroundInfo_Destruct(&z);
        }
    }

    for (Unk_020b60dc_Rec *n = (Unk_020b60dc_Rec *)self->cylinders; n != 0; n = n->next) {
        if (TouchPick_HitCylinder(&p1, &p0, n, n->circleRadius, n->cylinderHeight)) {
            self->targetX = n->center.x;
            self->targetY = n->center.y;
            self->targetZ = n->center.z;
            self->targetKind = n->kind;
            self->targetIndex = n->index;
        }
    }
    for (ActorCollider *col = gActorColliderList; col != 0; col = col->unk_38) {
        if (TouchPickKind_HasTarget(col->unk_0c)) {
            if (TouchPick_HitCylinder(&p1, &p0, col->getPos(), col->unk_04, col->unk_08)) {
                Vec3 *vp = col->getPos();
                self->targetX = vp->x;
                self->targetY = vp->y;
                self->targetZ = vp->z;
                self->targetKind = col->unk_0c;
                self->targetIndex = col->unk_0d;
            }
        }
    }

    struct { Vec3 e0, e1, lo, hi; } el;
    WorldCurve_FromCurved(&el.e0, &p0);
    WorldCurve_FromCurved(&el.e1, &p1);
    if (el.e0.x < el.e1.x) {
        el.lo.x = el.e0.x;
        el.hi.x = el.e1.x;
    } else {
        el.lo.x = el.e1.x;
        el.hi.x = el.e0.x;
    }
    el.e1.y = 0;
    el.e0.y = 0;
    if (el.e0.z < el.e1.z) {
        el.lo.z = el.e0.z;
        el.hi.z = el.e1.z;
    } else {
        el.lo.z = el.e1.z;
        el.hi.z = el.e0.z;
    }
    s32 bxl, bxh, bzl, bzh;
    bxl = el.lo.x >> 13;
    bzl = el.lo.z >> 13;
    bxh = el.hi.x >> 13;
    bzh = el.hi.z >> 13;
    s32 gx, gz;
    for (gz = bzh; gz >= bzl; gz--) {
        for (gx = bxh; gx >= bxl; gx--) {
            s32 ta, tb, tc;
            tc = 0;
            if (Collision_GetUnitShape(gx, gz, &ta, &tb, &tc) && tc != 0) {
                Vec3 f;
                f.x = (gx << 13) + 0x1000;
                f.y = 0;
                f.z = (gz << 13) + 0x1000;
                if (TouchPick_HitCylinder(&p1, &p0, &f, ta, tb)) {
                    self->targetX = f.x;
                    self->targetY = f.y;
                    self->targetZ = f.z;
                    self->targetIndex = 0;
                    if (Unk_020b60dc_IsMode0()) {
                        if (tc == 10) {
                            self->targetKind = 6;
                            s32 g1, g2;
                            FieldPos_ToUnit(&g1, &g2, (Vec3 *)&self->targetX);
                            self->targetIndex = BuildingList_IndexOf(BuildingList_FindByGrid(g1, g2));
                        } else {
                            self->targetKind = 5;
                        }
                    } else {
                        self->targetKind = 5;
                    }
                }
            }
        }
    }
    Vec3 ip;
    for (TouchPickTriangle *n = self->triangles; n != 0; n = n->next) {
        if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(n, &p0) >= 0) {
            BOOL in;
            if (_ZN17CollisionTriangle10distanceToEP15Unk_0202f2ac_V3(n, &p1) >= 0) {
                in = TRUE;
            } else {
                in = FALSE;
            }
            if (!in) {
                if (_ZN17CollisionTriangle16intersectSegmentEP15Unk_0202f2ac_V3S1_S1_(n, &ip, &p0, &p1)) {
                    p1 = ip;
                    Vec3 kk;
                    WorldCurve_FromCurved(&kk, &p1);
                    self->targetX = kk.x;
                    self->targetY = kk.y;
                    self->targetZ = kk.z;
                    self->targetKind = n->kind;
                    self->targetIndex = *(u8 *)((u8 *)n + 0x40);
                }
            }
        }
    }
    TouchPickSphere *n = self->spheres;
    while (n != 0) {
        Unk_020b60dc_Line l;
        _ZN16CollisionSegmentC1EP15Unk_0202f660_V3S1_(&l, &p0, &p1);
        if (_ZN9HitSphere16intersectSegmentEP17Unk_0202e918_Vec3P16Unk_0202e918_Cap(n, &ip, &l)) {
            Vec3 m2;
            WorldCurve_FromCurved(&m2, (Vec3 *)n);
            self->targetX = m2.x;
            self->targetY = m2.y;
            self->targetZ = m2.z;
            self->targetKind = n->kind;
            self->targetIndex = n->index;
        }
        n = n->next;
        _ZN16CollisionSegmentD1Ev(&l);
    }
    self->spheres = 0;
    self->cylinders = 0;
    self->triangles = 0;
}

}

extern "C" void func_020b60d8(void) {}

extern "C" void func_020b60d4(void) {}

extern "C" BOOL TouchPick_GetGroundPos(Vec3 *obj, Vec3 *out) {
    if (out) {
        out->x = obj->x;
        out->y = obj->y;
        out->z = obj->z;
    }
    if (obj->x != 0xffed4000) {
        return TRUE;
    }
    return FALSE;
}
