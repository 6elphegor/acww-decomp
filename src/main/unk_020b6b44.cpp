#include "types.h"
#include "game/Unk_0202f2ac_V3.h"
#include "game/Vec3.h"
#include "game/Basis.h"


struct Mtx43 {
    s32 m[12];
};




// base class (symbols.txt: CollisionTriangle); its destructor is called through its D1 symbol (0x0202f620)
struct CollisionTriangle {
    CollisionTriangle();
    virtual void pushOutFace(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void pushBackCrossing(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void pushOutEdges(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    u8 pad[0x34];
};

struct TouchPickTriangle : CollisionTriangle {
    TouchPickTriangle();
    ~TouchPickTriangle();
    BOOL setupCurved(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x38 */ TouchPickTriangle *next;
    /* 0x3c */ s32 kind;
    /* 0x40 */ u8 index;
};

struct TouchPickBox {
    TouchPickBox();
    ~TouchPickBox();
    BOOL build(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f);
    /* 0x00 */ TouchPickTriangle triangles[10];
};

struct CollisionCylinder {
    CollisionCylinder(Unk_0202f660_V3 *c, s32 a, s32 b);
    BOOL clipSegmentCaps(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
    BOOL clipSegmentSideBounded(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
    u8 pad[0x14];
};

// the original calls the D2 copy (0x0202fdb4) of the destructor, which a declared ~CollisionCylinder() would not
extern "C" void _ZN17CollisionCylinderD2Ev(CollisionCylinder *self);
// base destructor: the original derived destructor calls the D1 copy (0x0202f620)
extern "C" void _ZN17CollisionTriangleD1Ev(CollisionTriangle *self);

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
extern s16 data_02135f44[];
extern s32 gCamera;
extern s32 data_020c8cb8;
extern Mtx43 gViewMtx;
s32 _ZN12Unk_0203b3509getFovTanEv(s32 a);
s32 FX_Div(s32 a, s32 b);
void func_020e94f8(Vec3 *v);
void func_020e9888(Vec3 *v, s32 s);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
void MTX_Inverse43(Mtx43 *a, Mtx43 *b);
void MTX_MultVec43(Vec3 *v, Mtx43 *m, Vec3 *out);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
void func_020e93a0(Vec3 *v, s32 angle);
void func_020e944c(Vec3 *v, s32 angle);
s32 WorldCurve_ToCurved(Vec3 *out, Vec3 *in);
}

struct Pair {
    Vec3 p, q;
};

extern "C" BOOL TouchPick_HitCylinder(Vec3 *p, Vec3 *q, Vec3 *r, s32 a, s32 b) {
    Vec3 v28;
    s32 ang = WorldCurve_ToCurved(&v28, r);
    s32 sn, cs;
    s32 z;
    s32 y, y2, y3;
    Vec3 v34, v40, v4c;
    z = q->z;
    y = q->y;
    v34.x = q->x;
    v34.y = y;
    v34.z = z;
    s32 pz = p->z, py = p->y, px = p->x;
    v40.x = px;
    v40.y = py;
    v40.z = pz;
    v4c = v28;
    u32 idx = ((u16)(s16)-ang) >> 4;
    sn = data_02135f44[idx * 2];
    cs = data_02135f44[idx * 2 + 1];
    v34.y = func_01ffcb0c(cs, y) - func_01ffcb0c(sn, z);
    v34.z = func_01ffcb0c(sn, y) + func_01ffcb0c(cs, z);
    z = v40.z;
    y2 = v40.y;
    v40.y = func_01ffcb0c(cs, y2) - func_01ffcb0c(sn, z);
    v40.z = func_01ffcb0c(sn, y2) + func_01ffcb0c(cs, z);
    z = v4c.z;
    y3 = v4c.y;
    v4c.y = func_01ffcb0c(cs, y3) - func_01ffcb0c(sn, z);
    v4c.z = func_01ffcb0c(sn, y3) + func_01ffcb0c(cs, z);
    CollisionCylinder o((Unk_0202f660_V3 *)&v4c, a, b);
    if (o.clipSegmentCaps((Unk_0202f660_V3 *)&v40, (Unk_0202f660_V3 *)&v34) ||
        o.clipSegmentSideBounded((Unk_0202f660_V3 *)&v40, (Unk_0202f660_V3 *)&v34)) {
        func_020e944c(&v40, ang);
        s32 rz = v40.z, ry = v40.y, rx = v40.x;
        p->x = rx;
        p->y = ry;
        p->z = rz;
        _ZN17CollisionCylinderD2Ev(&o);
        return TRUE;
    }
    _ZN17CollisionCylinderD2Ev(&o);
    return FALSE;
}

extern "C" void TouchPick_CalcRay(Basis *out, s32 x, s32 z) {
    Vec3 zero;
    Pair t;
    Vec3 c, d, e;
    Mtx43 m;
    Vec3 f;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    s32 k = -FX_Div(0x60000, _ZN12Unk_0203b3509getFovTanEv(gCamera));
    t.p.x = (x << 12) - 0x80000;
    t.p.y = -((z << 12) - 0x60000);
    t.p.z = k;
    t.q = t.p;
    func_020e94f8(&t.q);
    func_020e9888(&t.q, data_020c8cb8);
    func_01ffd070(&c, &zero, &t.q);
    m = gViewMtx;
    MTX_Inverse43(&m, &m);
    MTX_MultVec43(&zero, &m, &d);
    MTX_MultVec43(&c, &m, &e);
    out->a = d;
    out->b = e;
    func_020e9960(&f, &out->b, &out->a);
    out->c = f;
    func_020e94f8(&out->c);
}

TouchPickBox::TouchPickBox() {
}

TouchPickBox::~TouchPickBox() {
}

BOOL TouchPickBox::build(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f) {
    Vec3 c[8];
    s32 hw = w >> 1;
    c[0].x = c[4].x = c[1].x = c[5].x = -hw;
    c[2].x = c[6].x = c[3].x = c[7].x = hw;
    s32 hd = h >> 1;
    c[0].z = c[4].z = c[3].z = c[7].z = -hd;
    c[1].z = c[5].z = c[2].z = c[6].z = hd;
    if (angle != 0) {
        func_020e93a0(&c[0], angle);
        func_020e93a0(&c[1], angle);
        func_020e93a0(&c[2], angle);
        func_020e93a0(&c[3], angle);
        c[4] = c[0];
        c[5] = c[1];
        c[6] = c[2];
        c[7] = c[3];
    }
    c[0].x += pos->x;
    c[1].x += pos->x;
    c[2].x += pos->x;
    c[3].x += pos->x;
    c[4].x += pos->x;
    c[5].x += pos->x;
    c[6].x += pos->x;
    c[7].x += pos->x;
    c[0].z += pos->z;
    c[1].z += pos->z;
    c[2].z += pos->z;
    c[3].z += pos->z;
    c[4].z += pos->z;
    c[5].z += pos->z;
    c[6].z += pos->z;
    c[7].z += pos->z;
    c[0].y = c[1].y = c[2].y = c[3].y = pos->y;
    c[4].y = c[5].y = c[6].y = c[7].y = pos->y + d;
    BOOL ok = TRUE;
    ok = (ok | triangles[0].setup(&c[4], &c[5], &c[6], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[1].setup(&c[4], &c[6], &c[7], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[2].setup(&c[5], &c[1], &c[2], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[3].setup(&c[5], &c[2], &c[6], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[4].setup(&c[6], &c[2], &c[3], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[5].setup(&c[6], &c[3], &c[7], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[6].setup(&c[4], &c[0], &c[1], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[7].setup(&c[4], &c[1], &c[5], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[8].setup(&c[7], &c[3], &c[0], e, f)) ? TRUE : FALSE;
    ok = (ok | triangles[9].setup(&c[7], &c[0], &c[4], e, f)) ? TRUE : FALSE;
    return ok;
}

TouchPickTriangle::TouchPickTriangle() {
    kind = 0;
    next = 0;
    index = 0xff;
}

TouchPickTriangle::~TouchPickTriangle() {
    _ZN17CollisionTriangleD1Ev(this);
}

