#include "types.h"

struct Unk_0202f2ac_V3 {
    s32 x, y, z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
};
struct Unk_0202f660_V3 { s32 x, y, z; };
struct Unk_0202f7b8_V3 : Unk_0202f660_V3 {
    Unk_0202f7b8_V3() {}
    Unk_0202f7b8_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(...);
s32 func_01ffcb2c(s32 x, s32 y);
s32 VEC_DotProduct(void *a, void *b);
void VEC_Add(void *o, void *a, void *b);
void func_01ffd070(void *o, void *a, void *b);
void func_020e93a0(void *v, s16 a);
void func_020e9960(void *o, void *a, void *b);
void func_020e9588(void *o, void *a, void *b, void *c);
s32 func_020e94f8(void *v);
void func_020e9888(void *v, s32 s);
s32 func_020e96a4(void *a, void *b);
s32 func_020e9650(void *a, void *b);
}

static inline s32 Unk_0202f2ac_Abs(s32 v) { return v < 0 ? -v : v; }

// ---- 2D line segment with normal (vtable 0x020d8ce4) ----
class CollisionVec2 {
public:
    s32 x, y;
    CollisionVec2() {}
    CollisionVec2(s32 a, s32 b);
    ~CollisionVec2() {}
    void operator=(const CollisionVec2 &o) { x = o.x; y = o.y; }
    CollisionVec2(const CollisionVec2 &o) { x = o.x; y = o.y; }
    void set(s32 a, s32 b);
    CollisionVec2 *setFrom(CollisionVec2 *p);
    void add(CollisionVec2 *p);
    void setSum(CollisionVec2 *a, CollisionVec2 *b);
    void setDiff(CollisionVec2 *a, CollisionVec2 *b);
    CollisionVec2 *scale(s32 k);
    s64 distSq(CollisionVec2 *p);
    BOOL normalize();
    void rotate(s16 a);
    void setEdgeNormal(CollisionVec2 *a, CollisionVec2 *b);
};

CollisionVec2 gCollisionVec2Zero(0, 0);

class CollisionEdge {
public:
    CollisionEdge(CollisionVec2 *a, CollisionVec2 *b);
    CollisionEdge(CollisionVec2 *a, CollisionVec2 *b, CollisionVec2 *c);
    ~CollisionEdge();
    virtual BOOL vfunc_00() { return TRUE; }

    BOOL pushBackCrossing(CollisionVec2 *a, CollisionVec2 *b, s32 c);
    BOOL pushOutEnds(CollisionVec2 *a, CollisionVec2 *b, s32 c);
    BOOL pushOutFace(CollisionVec2 *a, CollisionVec2 *b, s32 c);
    BOOL isBetweenEnds(CollisionVec2 *a);
    BOOL intersectSegment(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b);
    BOOL intersectLine(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b);
    s32 distanceTo(CollisionVec2 *p);
    s32 calcOffset();
    void set(CollisionVec2 *a, CollisionVec2 *b, CollisionVec2 *c);

    /* 0x04 */ CollisionVec2 unk_04;
    /* 0x0c */ CollisionVec2 unk_0c;
    /* 0x14 */ CollisionVec2 unk_14;
    /* 0x1c */ s32 unk_1c;
};

// ---- triangle (vtable 0x020d8ccc) ----
class CollisionTriangle {
public:
    CollisionTriangle();
    CollisionTriangle(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
    ~CollisionTriangle();
    virtual BOOL vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    Unk_0202f2ac_V3 unk_04, unk_10, unk_1c, unk_28;
    s32 unk_34;
    BOOL intersectLine(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);
    BOOL intersectSegment(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);
    BOOL containsYZ(Unk_0202f2ac_V3 *p);
    BOOL containsXY(Unk_0202f2ac_V3 *p);
    s32 distanceTo(Unk_0202f2ac_V3 *p);
    s32 calcOffset();
    BOOL func_0202f2d8(Unk_0202f2ac_V3 *p);
    BOOL set(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
};

class CollisionSegment {
public:
    Unk_0202f660_V3 unk_00;
    Unk_0202f660_V3 unk_0c;
    Unk_0202f660_V3 unk_18;

    BOOL isBetweenEnds(Unk_0202f660_V3 *pt);
    void projectPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    s32 closestPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    void set(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
    s32 distanceTo(Unk_0202f660_V3 *pt);
    s32 calcDir(Unk_0202f660_V3 *out);
    ~CollisionSegment();
    CollisionSegment(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
};

class CollisionCircle {
public:
    Unk_0202f660_V3 unk_00;
    s32 unk_0c;

    BOOL containsXZ(Unk_0202f660_V3 *pt);
    void setCircle(Unk_0202f660_V3 *pos, s32 radius);
    ~CollisionCircle();
    CollisionCircle(Unk_0202f660_V3 *pos, s32 radius);
    CollisionCircle();
};

class CollisionCylinder : public CollisionCircle {
public:
    s32 unk_10;

    BOOL clipSegmentSideBounded(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL clipSegmentCaps(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    ~CollisionCylinder();
    CollisionCylinder(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    CollisionCylinder();
};

BOOL CollisionCylinder::clipSegmentCaps(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 t1, t2;
    s32 y, z, y2, z2;
    struct { Unk_0202f7b8_V3 LampLights, LightLevel, WindowLight, P1, P2; } l;
    l.LampLights = Unk_0202f7b8_V3(a->x, a->y, a->z);
    l.LightLevel = Unk_0202f7b8_V3(out->x, out->y, out->z);
    func_020e9960(&l.WindowLight, &l.LightLevel, &l.LampLights);
    if (func_020e94f8(&l.WindowLight)) {
        s32 dy = l.WindowLight.y;
        if ((dy < 0 ? -dy : dy) >= 4) {
            s32 top = unk_00.y + unk_10;
            s32 ay = l.LampLights.y;
            if (ay > top && l.LightLevel.y < top) {
                t1 = FX_Div(top - ay, l.WindowLight.y);
                z = l.LampLights.z + func_01ffcb0c(l.WindowLight.z, t1);
                y = l.LampLights.y + func_01ffcb0c(l.WindowLight.y, t1);
                l.P1.x = l.LampLights.x + func_01ffcb0c(l.WindowLight.x, t1);
                l.P1.y = y;
                l.P1.z = z;
                if (containsXZ(&l.P1)) {
                    *out = l.P1;
                    return TRUE;
                }
            } else if (ay < 0 && l.LightLevel.y > 0) {
                t2 = FX_Div(-ay, l.WindowLight.y);
                z2 = l.LampLights.z + func_01ffcb0c(l.WindowLight.z, t2);
                y2 = l.LampLights.y + func_01ffcb0c(l.WindowLight.y, t2);
                l.P2.x = l.LampLights.x + func_01ffcb0c(l.WindowLight.x, t2);
                l.P2.y = y2;
                l.P2.z = z2;
                if (containsXZ(&l.P2)) {
                    *out = l.P2;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL CollisionCylinder::clipSegmentSideBounded(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 ymin, ymax, z;
    if (!containsXZ(a)) {
        struct { Unk_0202f7b8_V3 LampLights, LightLevel, C, WindowLight; u32 pad[6]; } l;
        l.LampLights = Unk_0202f7b8_V3(a->x, a->y, a->z);
        l.LightLevel = Unk_0202f7b8_V3(out->x, out->y, out->z);
        l.C = Unk_0202f7b8_V3(unk_00.x, unk_00.y, unk_00.z);
        s32 r = unk_0c;
        func_020e9960(&l.WindowLight, &l.LightLevel, &l.LampLights);
        s32 t = func_01ffcb0c(l.WindowLight.z, l.WindowLight.z);
        s32 q = func_01ffcb0c(l.WindowLight.x, l.WindowLight.x);
        q += t;
        s32 aq = q < 0 ? -q : q;
        if (aq < 4) {
            return FALSE;
        }
        s32 b = FX_Div(func_01ffcb0c(l.WindowLight.x, l.LampLights.x - l.C.x) + func_01ffcb0c(l.WindowLight.z, l.LampLights.z - l.C.z), q) << 1;
        s32 zz = func_01ffcb0c(l.LampLights.z - l.C.z, l.LampLights.z - l.C.z);
        s32 xx = func_01ffcb0c(l.LampLights.x - l.C.x, l.LampLights.x - l.C.x);
        s32 c = FX_Div(xx + zz - func_01ffcb0c(r, r), q);
        s32 disc = func_01ffcb0c(b, b) - (c << 2);
        if (disc < 0) {
            return FALSE;
        }
        s32 s = FX_Sqrt(disc);
        if (s < 0) {
            s = -s;
        }
        s32 t1 = -(b + s) >> 1;
        s32 t2 = (s - b) >> 1;
        ymin = unk_00.y;
        ymax = ymin + unk_10;
        s32 y, x;
        if ((t1 < 0 ? -t1 : t1) < 4 || (t1 >= 0 && t1 <= 0x1000)) {
            z = l.LampLights.z + func_01ffcb0c(t1, l.WindowLight.z);
            y = l.LampLights.y + func_01ffcb0c(t1, l.WindowLight.y);
            x = l.LampLights.x + func_01ffcb0c(t1, l.WindowLight.x);
            if (y >= ymin && y <= ymax) {
                out->x = x;
                out->y = y;
                out->z = z;
                return TRUE;
            }
        }
        if ((t2 < 0 ? -t2 : t2) < 4 || (t2 >= 0 && t2 <= 0x1000)) {
            z = l.LampLights.z + func_01ffcb0c(t2, l.WindowLight.z);
            y = l.LampLights.y + func_01ffcb0c(t2, l.WindowLight.y);
            x = l.LampLights.x + func_01ffcb0c(t2, l.WindowLight.x);
            if (y >= ymin && y <= ymax) {
                out->x = x;
                out->y = y;
                out->z = z;
                return TRUE;
            }
        }
    }
    return FALSE;
}

CollisionSegment::CollisionSegment(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) { set(a, b); }

CollisionSegment::~CollisionSegment() {}

s32 CollisionSegment::calcDir(Unk_0202f660_V3 *out) {
    Unk_0202f660_V3 tmp;
    func_020e9960(&tmp, &unk_0c, &unk_00);
    *out = tmp;
    return func_020e94f8(out);
}

s32 CollisionSegment::distanceTo(Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    projectPoint(&tmp, pt);
    return func_020e96a4(&tmp, pt);
}

void CollisionSegment::set(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) {
    unk_00 = *a;
    unk_0c = *b;
    calcDir(&unk_18);
}

s32 CollisionSegment::closestPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    projectPoint(&tmp, pt);
    *out = tmp;
    return func_020e96a4(&tmp, pt);
}

void CollisionSegment::projectPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    s32 a = VEC_DotProduct(&unk_18, pt);
    s32 t = -(VEC_DotProduct(&unk_18, &unk_00) - a);
    s32 y, z;
    z = func_01ffcb0c(unk_18.z, t);
    z += unk_00.z;
    y = func_01ffcb0c(unk_18.y, t);
    y += unk_00.y;
    s32 x = func_01ffcb0c(unk_18.x, t);
    out->x = x + unk_00.x;
    out->y = y;
    out->z = z;
}

BOOL CollisionSegment::isBetweenEnds(Unk_0202f660_V3 *pt) {
    s32 a = VEC_DotProduct(&unk_18, &unk_00);
    s32 b = VEC_DotProduct(&unk_18, pt);
    s32 c = VEC_DotProduct(&unk_18, &unk_0c);
    s32 d = VEC_DotProduct(&unk_18, pt);
    if (func_01ffcb0c(b - a, d - c) > 0) {
        return FALSE;
    }
    return TRUE;
}




CollisionTriangle::CollisionTriangle() {
    unk_28.x = 0;
    unk_28.y = 0;
    unk_28.z = 0;
    unk_34 = 0;
}

CollisionTriangle::~CollisionTriangle() {}

CollisionTriangle::CollisionTriangle(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d) { set((Unk_0202f2ac_V3 *)a, (Unk_0202f2ac_V3 *)b, (Unk_0202f2ac_V3 *)c, (Unk_0202f2ac_V3 *)d); }

BOOL CollisionTriangle::collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    BOOL r = FALSE;
    if (vfunc_04(a, b, c)) r = TRUE;
    if (vfunc_00(a, b, c)) r = TRUE;
    if (vfunc_08(a, b, c)) r = TRUE;
    return r;
}

BOOL CollisionTriangle::vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    Unk_0202f2ac_V3 o;
    BOOL r = FALSE;
    if (distanceTo(a) <= 0 && distanceTo(b) > 0 && intersectSegment(&o, a, b)) {
        a->x = o.x + func_01ffcb0c(c, unk_28.x);
        a->y = o.y + func_01ffcb0c(c, unk_28.y);
        a->z = o.z + func_01ffcb0c(c, unk_28.z);
        r = TRUE;
    }
    return r;
}

BOOL CollisionTriangle::vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    BOOL result = FALSE;
    s32 d = distanceTo(a);
    if (d >= 0 && d <= c + 0x200) {
        if (d < c) {
            Unk_0202f2ac_V3 t, o;
            func_01ffd070(&t, a, &unk_28);
            if (!intersectLine(&o, a, &t)) {
                goto end;
            }
            if (d < c) {
                s32 e = c - d;
                a->x = a->x + func_01ffcb0c(e, unk_28.x);
                a->y = a->y + func_01ffcb0c(e, unk_28.y);
                a->z = a->z + func_01ffcb0c(e, unk_28.z);
            }
            result = TRUE;
        } else {
            result = TRUE;
        }
    }
end:
    return result;
}

BOOL CollisionTriangle::vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    Unk_0202f2ac_V3 w, v;
    BOOL result;
    s32 d;
    if (distanceTo(b) < 0) {
        return FALSE;
    }
    s32 e = distanceTo(a);
    if (e < 0) {
        return FALSE;
    }
    result = FALSE;
    if (e < c) {
        CollisionSegment t0((Unk_0202f660_V3 *)&unk_04, (Unk_0202f660_V3 *)&unk_10);
        CollisionSegment t1((Unk_0202f660_V3 *)&unk_10, (Unk_0202f660_V3 *)&unk_1c);
        CollisionSegment t2((Unk_0202f660_V3 *)&unk_1c, (Unk_0202f660_V3 *)&unk_04);
        CollisionSegment *p = &t0;
        for (; p < &t0 + 3; p++) {
            d = p->closestPoint((Unk_0202f660_V3 *)&w, (Unk_0202f660_V3 *)a);
            if (d < c && p->isBetweenEnds((Unk_0202f660_V3 *)a)) {
                func_020e9960(&v, a, &w);
                if (func_020e94f8(&v) == 0) {
                    Unk_0202f2ac_V3 *q = &unk_28;
                    v = *q;
                    func_020e9888(&v, c);
                } else {
                    func_020e9888(&v, c - d);
                }
                VEC_Add(a, &v, a);
                result = TRUE;
                break;
            }
        }
    }
    return result;
}

extern "C" s32 Collision_CalcTriangleNormal(Unk_0202f2ac_V3 *n, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b) {
    Unk_0202f2ac_V3 u, v, t;
    func_020e9960(&u, a, p);
    func_020e9960(&v, b, p);
    func_020e9588(&t, n, &u, &v);
    return func_020e94f8(n);
}

BOOL CollisionTriangle::set(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d) {
    unk_04 = *a;
    unk_10 = *b;
    unk_1c = *c;
    unk_28 = *d;
    unk_34 = calcOffset();
    return TRUE;
}

BOOL CollisionTriangle::func_0202f2d8(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.z, b.x) - func_01ffcb0c(a.x, b.z);
    s32 r4 = func_01ffcb0c(b.z, c.x) - func_01ffcb0c(b.x, c.z);
    s32 r0 = func_01ffcb0c(c.z, a.x) - func_01ffcb0c(c.x, a.z);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

s32 CollisionTriangle::calcOffset() {
    s32 z = func_01ffcb0c(unk_28.z, unk_04.z);
    s32 x = func_01ffcb0c(unk_28.x, unk_04.x);
    s32 y = func_01ffcb0c(unk_28.y, unk_04.y);
    return -(z + (x + y));
}

s32 CollisionTriangle::distanceTo(Unk_0202f2ac_V3 *p) {
    s32 d = unk_34;
    s32 z = func_01ffcb0c(unk_28.z, p->z);
    s32 x = func_01ffcb0c(unk_28.x, p->x);
    s32 y = func_01ffcb0c(unk_28.y, p->y);
    return d + (z + (x + y));
}

BOOL CollisionTriangle::containsXY(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.x, b.y) - func_01ffcb0c(a.y, b.x);
    s32 r4 = func_01ffcb0c(b.x, c.y) - func_01ffcb0c(b.y, c.x);
    s32 r0 = func_01ffcb0c(c.x, a.y) - func_01ffcb0c(c.y, a.x);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL CollisionTriangle::containsYZ(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.y, b.z) - func_01ffcb0c(a.z, b.y);
    s32 r4 = func_01ffcb0c(b.y, c.z) - func_01ffcb0c(b.z, c.y);
    s32 r0 = func_01ffcb0c(c.y, a.z) - func_01ffcb0c(c.z, a.y);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL CollisionTriangle::intersectSegment(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 a = distanceTo(p);
    if (func_01ffcb0c(a, distanceTo(q)) < 0) {
        return intersectLine(out, p, q);
    }
    return FALSE;
}

BOOL CollisionTriangle::intersectLine(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 s = distanceTo(p);
    s32 d = s - distanceTo(q);
    if (Unk_0202f2ac_Abs(d) >= 4) {
        Unk_0202f2ac_V3 v;
        s32 t, y, z;
        func_020e9960(&v, q, p);
        t = FX_Div(s, d);
        z = p->z + func_01ffcb0c(t, v.z);
        y = p->y + func_01ffcb0c(t, v.y);
        out->x = p->x + func_01ffcb0c(t, v.x);
        out->y = y;
        out->z = z;
        if (Unk_0202f2ac_Abs(unk_28.y) >= 4) {
            if (func_0202f2d8(out)) {
                return TRUE;
            }
        }
        if (Unk_0202f2ac_Abs(unk_28.x) >= 4) {
            if (containsYZ(out)) {
                return TRUE;
            }
        }
        if (Unk_0202f2ac_Abs(unk_28.z) >= 4) {
            if (containsXY(out)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void CollisionVec2::set(s32 a, s32 b) {
    x = a;
    y = b;
}

CollisionVec2 *CollisionVec2::setFrom(CollisionVec2 *p) {
    set(p->x, p->y);
    return this;
}

void CollisionVec2::setSum(CollisionVec2 *a, CollisionVec2 *b) {
    set(a->x + b->x, a->y + b->y);
}

void CollisionVec2::add(CollisionVec2 *p) {
    x = x + p->x;
    y = y + p->y;
}

void CollisionVec2::setDiff(CollisionVec2 *a, CollisionVec2 *b) {
    set(a->x - b->x, a->y - b->y);
}

CollisionVec2 *CollisionVec2::scale(s32 k) {
    x = func_01ffcb0c(x, k);
    y = func_01ffcb0c(y, k);
    return this;
}

s64 CollisionVec2::distSq(CollisionVec2 *p) {
    CollisionVec2 d;
    d.set(x - p->x, y - p->y);
    s32 b = d.y;
    s32 a = func_01ffcb0c(d.x, d.x);
    s32 c = func_01ffcb0c(b, b);
    return a + c;
}

BOOL CollisionVec2::normalize() {
    s32 r = FX_Sqrt(distSq(&gCollisionVec2Zero));
    if (Unk_0202f2ac_Abs(r) < 4) {
        return FALSE;
    }
    x = FX_Div(x, r);
    y = FX_Div(y, r);
    return TRUE;
}

void CollisionVec2::rotate(s16 a) {
    Unk_0202f2ac_V3 v(y, x);
    func_020e93a0(&v, a);
    x = v.x;
    y = v.z;
}

void CollisionVec2::setEdgeNormal(CollisionVec2 *a, CollisionVec2 *b) {
    CollisionVec2 d;
    d.setDiff(b, a);
    x = -d.y;
    y = d.x;
    normalize();
}

CollisionEdge::CollisionEdge(CollisionVec2 *a, CollisionVec2 *b) {
    CollisionVec2 n;
    unk_04.set(0, 0);
    unk_0c.set(0, 0);
    unk_14.set(0, 0);
    n.set(0, 0);
    n.setEdgeNormal(a, b);
    set(a, b, &n);
}

CollisionEdge::CollisionEdge(CollisionVec2 *a, CollisionVec2 *b, CollisionVec2 *c) {
    unk_04.set(0, 0);
    unk_0c.set(0, 0);
    unk_14.set(0, 0);
    set(a, b, c);
}


CollisionEdge::~CollisionEdge() {}

void CollisionEdge::set(CollisionVec2 *a, CollisionVec2 *b, CollisionVec2 *c) {
    unk_04.setFrom(a);
    unk_0c.setFrom(b);
    unk_14.setFrom(c);
    unk_1c = calcOffset();
}

s32 CollisionEdge::calcOffset() {
    s32 a = func_01ffcb0c(unk_14.x, unk_04.x);
    s32 b = func_01ffcb0c(unk_14.y, unk_04.y);
    return -(a + b);
}

s32 CollisionEdge::distanceTo(CollisionVec2 *p) {
    s32 d = unk_1c;
    s32 a = func_01ffcb0c(unk_14.x, p->x);
    s32 b = func_01ffcb0c(unk_14.y, p->y);
    return d + (a + b);
}

BOOL CollisionEdge::intersectLine(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b) {
    CollisionEdge t(a, b);
    s32 det = func_01ffcb0c(unk_14.x, t.unk_14.y) - func_01ffcb0c(t.unk_14.x, unk_14.y);
    if (Unk_0202f2ac_Abs(det) >= 4) {
        s32 c = t.unk_1c;
        s32 g = unk_1c;
        out->y = FX_Div(func_01ffcb0c(t.unk_14.x, g) - func_01ffcb0c(unk_14.x, c), det);
        s32 d = unk_14.x;
        if (Unk_0202f2ac_Abs(d) >= 4) {
            s32 e = unk_1c;
            s32 m = func_01ffcb0c(unk_14.y, out->y);
            out->x = FX_Div(-(m + e), d);
            return TRUE;
        } else {
            s32 f = t.unk_14.x;
            if (Unk_0202f2ac_Abs(f) >= 4) {
                s32 e = t.unk_1c;
                s32 m = func_01ffcb0c(t.unk_14.y, out->y);
                out->x = FX_Div(-(m + e), f);
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL CollisionEdge::intersectSegment(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b) {
    s32 x = distanceTo(a);
    if (func_01ffcb0c(x, distanceTo(b)) < 0) {
        CollisionEdge seg(a, b);
        s32 y = seg.distanceTo(&unk_04);
        if (func_01ffcb0c(y, seg.distanceTo(&unk_0c)) < 0) {
            return intersectLine(out, a, b);
        }
    }
    return FALSE;
}

BOOL CollisionEdge::isBetweenEnds(CollisionVec2 *p) {
    CollisionVec2 d;
    d.setDiff(&unk_04, &unk_0c);
    if (d.normalize()) {
        CollisionVec2 n(-d.x, -d.y);
        CollisionVec2 e;
        e.setSum(&unk_04, &unk_14);
        CollisionEdge sa(&unk_04, &e, &d);
        CollisionVec2 f;
        f.setSum(&unk_0c, &unk_14);
        CollisionEdge sb(&unk_0c, &f, &n);
        s32 x = sa.distanceTo(p);
        s32 y = sb.distanceTo(p);
        if (x >= 0 && y >= 0) {
            return TRUE;
        }
        if (x <= 0 && y <= 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL CollisionEdge::pushOutFace(CollisionVec2 *a, CollisionVec2 *b, s32 c) {
    s32 d = distanceTo(a);
    if (distanceTo(b) >= 0) {
        s32 ad = d < 0 ? -d : d;
        if (ad <= c) {
            if (isBetweenEnds(b) || isBetweenEnds(a)) {
                CollisionVec2 *q = &unk_14;
                CollisionVec2 t = *q;
                t.scale(c - d);
                a->add(&t);
                return TRUE;
            }
        } else if (d < c + 0x200) {
            return TRUE;
        }
    }
    return FALSE;
}


BOOL CollisionEdge::pushOutEnds(CollisionVec2 *a, CollisionVec2 *b, s32 c) {
    CollisionVec2 *q;
    if (!vfunc_00()) {
        return FALSE;
    }
    s32 d = distanceTo(a);
    if (d >= 0 && d < c + 0x200 && distanceTo(b) > 0) {
        if (d < c) {
            if (distanceTo(b) <= 0) {
                return FALSE;
            }
            CollisionVec2 arr[2];
            q = &unk_04;
            arr[0] = *q;
            q = &unk_0c;
            CollisionVec2 *dd = &arr[1];
            *dd = *q;
            for (CollisionVec2 *p = arr; p < arr + 2; p++) {
                s32 dist = FX_Sqrt(p->distSq(a));
                if (dist < c) {
                    CollisionVec2 t;
                    t.setDiff(a, p);
                    if (!t.normalize()) {
                        q = &unk_14;
                        t.set(q->x, q->y);
                    } else {
                        c -= dist;
                    }
                    t.x = func_01ffcb0c(t.x, c);
                    t.y = func_01ffcb0c(t.y, c);
                    a->x += t.x;
                    a->y += t.y;
                    return TRUE;
                }
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

CollisionVec2::CollisionVec2(s32 a, s32 b) {
    x = a;
    y = b;
}



BOOL CollisionEdge::pushBackCrossing(CollisionVec2 *a, CollisionVec2 *b, s32 c) {
    if (distanceTo(b) > 0) {
        CollisionVec2 v(0, 0);
        if (intersectSegment(&v, a, b)) {
            s32 d = c - distanceTo(a);
            if (d < 0) {
                d = -d;
            }
            CollisionVec2 *q = &unk_14;
            CollisionVec2 t = *q;
            t.scale(d);
            a->add(&t);
            return TRUE;
        }
    }
    return FALSE;
}


