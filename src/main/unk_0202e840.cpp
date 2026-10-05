#include "types.h"
#include "gfx/VecFx32.h"
#include "game/HitSphere.h"
#include "game/Unk_0202f2ac_V3.h"
#include "game/CollisionSegment.h"
#include "sys/ProcBase.h"




extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(...);
s32 Ground_GetUnitAttr(s32 x, s32 y);
s32 VEC_DotProduct(void *a, void *b);
void VEC_Add(void *o, void *a, void *b);
void Vec_Add(void *o, void *a, void *b);
s64 Vec_DistSq(void *a, void *b);
void Vec_RotateY(void *v, s16 a);
void Vec_Sub(void *o, void *a, void *b);
void Vec_CrossCopy(void *o, void *a, void *b, void *c);
s32 Vec_SafeNormalize(void *v);
void Vec_Scale(void *v, s32 s);
s32 Vec_Distance(void *a, void *b);
s32 Vec_DistXZ(void *a, void *b);
s32 _ZN16CollisionSegment10distanceToEP7VecFx32(void *a, void *b);
void Proc_CreateRoot();
s32 Proc_CreateChild(u32 a, void *b, u32 c, u32 d);
s32 PM_GetBattery(s32 *out);
void ProcBase_RequestDelete();
void _ZN8ProcBase10postCreateEi(void *self, int a);
}





u8 sLowBatteryWarned;
s32 sLowBatteryPollTimer;

HitSphere::HitSphere() {
    centerX = 0;
    centerY = 0;
    centerZ = 0;
    radius = 0;
}

HitSphere::~HitSphere() {}

void HitSphere::set(VecFx32Ctor *p, s32 r) {
    centerX = p->x;
    centerY = p->y;
    centerZ = p->z;
    radius = r;
}

BOOL HitSphere::intersectSegment(VecFx32Ctor *out, CollisionSegment *cap) {
    s32 z;
    s32 r = radius;
    if (_ZN16CollisionSegment10distanceToEP7VecFx32(cap, this) <= r) {
        z = centerZ + func_01ffcb0c(cap->dir.z, radius);
        s32 y = centerY + func_01ffcb0c(cap->dir.y, radius);
        s32 x = centerX + func_01ffcb0c(cap->dir.x, radius);
        VecFx32Ctor a(x, y, z);
        VecFx32Ctor b(centerX - x, centerY - y, centerZ - z);
        s64 s1 = Vec_DistSq(cap, &a);
        s64 s2 = Vec_DistSq(cap, &b);
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
            if (PM_GetBattery(&v) == 0 && v == 1) {
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
