#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

// Declaration-only twins (same layout and virtuals as ActorCollider / ActorFollowCollider): the original vtable order in .data
// is a heapsort of the class declaration order that cannot be reached with the real bases declared first.
// aliases.txt maps the twins' constructor/destructor/method names onto the real functions.
class ActorColliderView {
public:
    ActorColliderView();
    ~ActorColliderView();
    virtual Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    void setup(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g);
    u8 pad[0x3c];
};

class ActorFollowColliderView : public ActorColliderView {
public:
    ActorFollowColliderView();
    ~ActorFollowColliderView();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void setupForActor(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class ActorPlacedCollider : public ActorFollowColliderView {
public:
    ActorPlacedCollider();
    ~ActorPlacedCollider();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void setupForActorAt(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x44 */ Vec3 unk_44;
};

class StaticCollider : public ActorColliderView {
public:
    StaticCollider();
    ~StaticCollider();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void setupAtPos(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ Vec3 unk_40;
};

class ActorFollowCollider : public ActorColliderView {
public:
    ActorFollowCollider();
    ~ActorFollowCollider();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void setupForActor(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class ActorCollider {
public:
    ActorCollider();
    ~ActorCollider();
    virtual Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    void submit();
    void resetHit();
    BOOL isHitByGroup(u32 mask);
    BOOL canCollideWith(ActorCollider *o);
    void setup(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g);
    s32 getHitActor();
    BOOL isPushedFromAngle(s32 a);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ ActorCollider *unk_38;
    /* 0x3c */ u8 unk_3c;
};

struct SpriteAnimFrame {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0a */ s16 unk_0a;
};

struct SpriteAnimSeq {
    /* 0x00 */ SpriteAnimFrame *unk_00;
    /* 0x04 */ s32 unk_04;
};

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    /* 0x00 */ SpriteAnimSeq *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

extern "C" {
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 _ZN5Actor8findByIdEj(s32 v);
void _ZN19ActorFollowCollider8vfunc_04Ev(void *p);
void ActorCollider_ClearList(void);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e9688(Vec3 *v);
}

ActorCollider *gActorColliderList;

void SpriteAnim::update() {
    if (unk_10 == 0) {
        unk_08 = unk_08 + unk_0c;
        s32 f = unk_08 >> 12;
        if (f >= unk_00->unk_00[unk_04].unk_04) {
            unk_08 = 0;
            s32 n = unk_00->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 >= n) {
                unk_04 = 0;
            }
        }
    } else {
        unk_08 = unk_08 + unk_0c;
        SpriteAnimSeq *t = unk_00;
        s32 f = unk_08 >> 12;
        if (f >= t->unk_00[unk_04].unk_04) {
            s32 n = t->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 < n) {
                unk_08 = 0;
            } else {
                unk_04 = n - 1;
            }
        }
    }
}

u32 StaticCollider::vfunc_04() { return FALSE; }

Vec3 *StaticCollider::vfunc_00() { return &unk_40; }

u32 ActorPlacedCollider::vfunc_04() { _ZN19ActorFollowCollider8vfunc_04Ev(this); }

Vec3 *ActorPlacedCollider::vfunc_00() { return &unk_44; }

extern "C" void ActorCollider_InitList(void) { ActorCollider_ClearList(); }

extern "C" void ActorCollider_ClearList(void) { gActorColliderList = 0; }

ActorCollider::ActorCollider() {
    resetHit();
}

ActorCollider::~ActorCollider() {}

void ActorCollider::vfunc_08(u32 a, u32 b, u32 c) {}

BOOL ActorCollider::isPushedFromAngle(s32 a) {
    if (unk_3c != 0) {
        s32 t = func_020e7b98(unk_10, unk_18);
        if (func_020e780c(t, (s16)(a + 0x8000)) <= 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 ActorCollider::getHitActor() {
    if (unk_2c != 0) {
        return _ZN5Actor8findByIdEj(unk_2c);
    }
    return 0;
}

void ActorCollider::setup(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g) {
    unk_04 = a;
    unk_08 = b;
    unk_1c = c;
    unk_20 = d;
    unk_0c = e;
    unk_0d = f;
    unk_34 = g;
}

void ActorCollider::resetHit() {
    unk_38 = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_3c = 0;
    unk_2c = 0;
    unk_28 = 0;
    unk_0e = 0;
    unk_0f = 0xff;
}

void ActorCollider::submit() {
    resetHit();
    unk_38 = gActorColliderList;
    gActorColliderList = this;
}

BOOL ActorCollider::canCollideWith(ActorCollider *o) {
    BOOL r;
    if ((unk_1c & o->unk_20) && (unk_20 & o->unk_1c)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        u32 a = vfunc_04();
        if (a != 0) {
            if (a == o->vfunc_04()) {
                return FALSE;
            }
        }
        if (this != o) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" void ActorCollider_ResolveAll() {
    ActorCollider *o;
    Vec3 *cv;
    Vec3 d;
    s32 len;
    s32 pen;
    s32 t;
    s32 sumM, w1, k, w0;
    for (o = gActorColliderList; o; o = o->unk_38) {
        if (o->unk_1c & 1) {
            o->unk_30 = -0x1000;
        }
    }
    while (gActorColliderList) {
        cv = gActorColliderList->vfunc_00();
        for (o = gActorColliderList->unk_38; o; o = o->unk_38) {
            if (!gActorColliderList->canCollideWith(o)) {
                continue;
            }
            func_020e9960(&d, o->vfunc_00(), cv);
            if (d.y < 0) {
                t = o->unk_08 + d.y;
            } else {
                t = gActorColliderList->unk_08 - d.y;
            }
            if (t <= 0) {
                continue;
            }
            len = func_020e9688(&d);
            if (len == 0) {
                d.x = 0x1000;
                len = 0x1000;
            }
            pen = gActorColliderList->unk_04 + o->unk_04 - len;
            if (pen <= 0) {
                continue;
            }
            o->unk_3c = 1;
            gActorColliderList->unk_3c = o->unk_3c;
            if (gActorColliderList->unk_1c & 1) {
                if (pen >= gActorColliderList->unk_30) {
                    gActorColliderList->unk_30 = pen;
                    gActorColliderList->unk_28 = o->unk_1c;
                    gActorColliderList->unk_2c = o->vfunc_04();
                    gActorColliderList->unk_0e = o->unk_0c;
                    gActorColliderList->unk_0f = o->unk_0d;
                }
            } else {
                gActorColliderList->unk_28 = o->unk_1c;
                gActorColliderList->unk_2c = o->vfunc_04();
                gActorColliderList->unk_0e = o->unk_0c;
                gActorColliderList->unk_0f = o->unk_0d;
            }
            if (o->unk_1c & 1) {
                if (pen >= o->unk_30) {
                    o->unk_28 = gActorColliderList->unk_1c;
                    o->unk_2c = gActorColliderList->vfunc_04();
                    o->unk_0e = gActorColliderList->unk_0c;
                    o->unk_0f = gActorColliderList->unk_0d;
                }
            } else {
                o->unk_28 = gActorColliderList->unk_1c;
                o->unk_2c = gActorColliderList->vfunc_04();
                o->unk_0e = gActorColliderList->unk_0c;
                o->unk_0f = gActorColliderList->unk_0d;
            }
            gActorColliderList->vfunc_08(o->unk_0c, o->unk_0d, o->unk_1c);
            o->vfunc_08(gActorColliderList->unk_0c, gActorColliderList->unk_0d, gActorColliderList->unk_1c);
            if (gActorColliderList->unk_1c & 1) {
                continue;
            }
            if (o->unk_1c & 1) {
                continue;
            }
            if (gActorColliderList->unk_1c & 2) {
                if (o->unk_1c & 2) {
                    continue;
                }
            }
            if (gActorColliderList->unk_1c & 2) {
                o->unk_14 = 0;
                pen = FX_Div(pen, len);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            } else if (o->unk_1c & 2) {
                gActorColliderList->unk_14 = 0;
                pen = FX_Div(pen, len);
                gActorColliderList->unk_10 -= func_01ffcb0c(d.x, pen);
                gActorColliderList->unk_18 -= func_01ffcb0c(d.z, pen);
            } else {
                w0 = gActorColliderList->unk_34;
                w1 = o->unk_34;
                k = FX_Div(pen, len) >> 1;
                sumM = w0 + w1;
                s32 f1 = func_01ffcb0c(k, FX_Div(w1, sumM));
                pen = func_01ffcb0c(k, FX_Div(w0, sumM));
                o->unk_14 = 0;
                gActorColliderList->unk_14 = 0;
                gActorColliderList->unk_10 -= func_01ffcb0c(d.x, f1);
                gActorColliderList->unk_18 -= func_01ffcb0c(d.z, f1);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            }
        }
        gActorColliderList = gActorColliderList->unk_38;
    }
}

BOOL ActorCollider::isHitByGroup(u32 mask) {
    if (unk_3c) {
        if (unk_28 & mask) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

ActorFollowCollider::ActorFollowCollider() {
    unk_40 = 0;
}

ActorFollowCollider::~ActorFollowCollider() {
}

Vec3 *ActorFollowCollider::vfunc_00() { return (Vec3 *)(unk_40 + 0x5c); }

u32 ActorFollowCollider::vfunc_04() { return *(u32 *)(unk_40 + 4); }

void ActorFollowCollider::setupForActor(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = (u8 *)p;
    setup(a, b, c, d, e, f, g);
}

void StaticCollider::setupAtPos(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = *v;
    setup(a, b, c, d, e, f, g);
}

ActorPlacedCollider::ActorPlacedCollider() {
}

ActorPlacedCollider::~ActorPlacedCollider() {
}

void ActorPlacedCollider::setupForActorAt(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    setupForActor(p, a, b, c, d, e, f, g);
    unk_44 = *v;
}

StaticCollider::StaticCollider() {
}

StaticCollider::~StaticCollider() {
}

