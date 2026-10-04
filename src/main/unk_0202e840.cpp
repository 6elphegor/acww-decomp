#include "types.h"
#include "game/HitSphere.h"
#include "sys/ProcBase.h"




extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(...);
s32 func_01ffcb2c(s32 x, s32 y);
s32 VEC_DotProduct(void *a, void *b);
void VEC_Add(void *o, void *a, void *b);
void func_01ffd070(void *o, void *a, void *b);
s64 func_01ffd028(void *a, void *b);
void Vec_RotateY(void *v, s16 a);
void Vec_Sub(void *o, void *a, void *b);
void Vec_CrossCopy(void *o, void *a, void *b, void *c);
s32 Vec_SafeNormalize(void *v);
void Vec_Scale(void *v, s32 s);
s32 Vec_Distance(void *a, void *b);
s32 Vec_DistXZ(void *a, void *b);
s32 _ZN16CollisionSegment10distanceToEP15Unk_0202f660_V3(void *a, void *b);
void Proc_CreateRoot();
s32 Proc_CreateChild(u32 a, void *b, u32 c, u32 d);
s32 func_0211c618(s32 *out);
void ProcBase_RequestDelete();
void _ZN8ProcBase10postCreateEi(void *self, int a);
}

// ---- sphere (position + radius), vtable-less ----
struct Unk_0202e918_Vec3 {
    s32 x, y, z;
    Unk_0202e918_Vec3(s32 px, s32 py, s32 pz) { x = px; y = py; z = pz; }
};

struct Unk_0202e918_Cap {
    u8 pad_00[0x18];
    s32 dirX, dirY, dirZ;
};



u8 sLowBatteryWarned;
s32 sLowBatteryPollTimer;

HitSphere::HitSphere() {
    centerX = 0;
    centerY = 0;
    centerZ = 0;
    radius = 0;
}

HitSphere::~HitSphere() {}

void HitSphere::set(Unk_0202e918_Vec3 *p, s32 r) {
    centerX = p->x;
    centerY = p->y;
    centerZ = p->z;
    radius = r;
}

BOOL HitSphere::intersectSegment(Unk_0202e918_Vec3 *out, Unk_0202e918_Cap *cap) {
    s32 z;
    s32 r = radius;
    if (_ZN16CollisionSegment10distanceToEP15Unk_0202f660_V3(cap, this) <= r) {
        z = centerZ + func_01ffcb0c(cap->dirZ, radius);
        s32 y = centerY + func_01ffcb0c(cap->dirY, radius);
        s32 x = centerX + func_01ffcb0c(cap->dirX, radius);
        Unk_0202e918_Vec3 a(x, y, z);
        Unk_0202e918_Vec3 b(centerX - x, centerY - y, centerZ - z);
        s64 s1 = func_01ffd028(cap, &a);
        s64 s2 = func_01ffd028(cap, &b);
        if (s1 < s2) {
            out->x = a.x;
            out->y = a.y;
            out->z = a.z;
        } else {
            out->x = b.x;
            out->y = b.y;
            out->z = b.z;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL LowBattery_Poll() {
    BOOL r = FALSE;
    if (sLowBatteryWarned == 0) {
        if (--sLowBatteryPollTimer <= 0) {
            s32 v;
            sLowBatteryPollTimer = 0x14;
            if (func_0211c618(&v) == 0 && v == 1) {
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void LowBattery_SetWarned() { sLowBatteryWarned = 1; }

extern "C" void LowBattery_Reset() {
    sLowBatteryWarned = 0;
    sLowBatteryPollTimer = 0x14;
}

void GameProc::postCreate(int a) {
    if (a == 1) {
        ProcBase_RequestDelete();
    }
    _ZN8ProcBase10postCreateEi(this, a);
}

extern "C" void GameProc_CreateChild(u32 a, void *b, u32 c, u32 d) { Proc_CreateChild(a, b, c, d); }

extern "C" void GameProc_CreateRoot() { Proc_CreateRoot(); }
