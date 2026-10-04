#include "types.h"
#include "game/Unk_02033914.h"
#include "gfx/Unk_021ede90.h"
#include "game/Vec3.h"
#include "gfx/SceneLightsCol.h"
#include "gfx/Mtx43.h"
#include "gfx/Model.h"
#include "gfx/CachedModel.h"








extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void NNS_G3dMdlSetMdlDiff(u32 a, u32 b, u32 c);
void NNSi_G3dModifyMatFlag(u32 a, u32 b, u32 c);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
s32 Ground_GetDefaultY(s32 a);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_02033914 *p, Vec3 *pos, s32 a, s32 b);
s32 _ZN14GroundInfoBase9getHeightEi(Unk_02033914 *p, s32 a);
void GroundInfo_Destruct(Unk_02033914 *p);
BOOL Scene_InMuseumRoom(void);
s32 WorldCurve_ToCurved(Vec3 *out, Vec3 *in);
Col SceneLights_GetRoomColor(void);
u8 ObjShadow_GetCharaAlpha(Vec3 *p, s32 q);
extern u8 gFieldSceneKind;
extern u8 data_021f47e0[];
}

extern "C" void CharaShadow_Draw(Vec3 *pos, s32 a, s32 b, s32 c);

u32 sCharaShadowPolyId = 1;

Unk_021ede90 *sCharaShadowMatData;
CachedModel sCharaShadowModel;

extern "C" BOOL CharaShadow_Load() {
    BOOL ret;
    if (sCharaShadowModel.load((void *)"/shadow/chara_shadow.nsbmd", 0)) {
        ret = TRUE;
    } else {
        ret = FALSE;
    }
    u8 *p = (u8 *)sCharaShadowModel.unk_5c;
    u8 *q = p + *(s32 *)(p + 8);
    q = q + *(s32 *)(q + *(u16 *)(q + 0xa) + 8);
    sCharaShadowMatData = (Unk_021ede90 *)q;
    sCharaShadowPolyId = 1;
    NNSi_G3dModifyMatFlag((u32)sCharaShadowModel.unk_5c, 1, 0x40);
    return ret;
}

extern "C" void CharaShadow_UpdateColor() {
    Col c0, c1;
    sCharaShadowPolyId = 1;
    c0 = SceneLights_GetRoomColor();
    c1 = c0;
    NNS_G3dMdlSetMdlDiff((u32)sCharaShadowModel.unk_5c, 0, c1.v);
}

extern "C" void CharaShadow_Unload() {
    sCharaShadowMatData = 0;
    sCharaShadowModel.release();
}

extern "C" void CharaShadow_DrawFaded(Vec3 *pos, s32 a, s32 b, s32 c) {
    if (c == 0) {
        c = 1;
    }
    s32 r6 = 0x1000;
    if (c != 0x1f) {
        r6 = FX_Div((c - 1) << 12, 0x1e000);
    }
    CharaShadow_Draw(pos, a, b, r6);
}

extern "C" void CharaShadow_Draw(Vec3 *pos, s32 a, s32 b, s32 c) {
    Unk_02033914 buf1;
    Unk_02033914 buf2;
    Vec3 pos2;
    Vec3 out;
    Vec3 scale;
    s32 off, d, absd;
    if (a == 0) {
        return;
    }
    s32 lvl = ObjShadow_GetCharaAlpha(pos, a);
    off = 0;
    if (gFieldSceneKind == 0 ? 1 : off) {
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf1, pos, 0, 0);
        off = _ZN14GroundInfoBase9getHeightEi(&buf1, 0);
        if (off > 0) {
            off = 0;
        }
        GroundInfo_Destruct(&buf1);
    } else if (Scene_InMuseumRoom()) {
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf2, pos, 0, 0);
        off = _ZN14GroundInfoBase9getHeightEi(&buf2, 0);
        GroundInfo_Destruct(&buf2);
    }
    d = pos->y - off;
    if (d < 0) {
        absd = -d;
    } else {
        absd = d;
    }
    if (d != 0) {
        lvl -= func_01ffcb0c(absd, FX_Div(0x1f000, b)) >> 12;
    }
    if (c != 0x1000) {
        lvl = (lvl * c) >> 12;
    }
    if (lvl > 1) {
        if (d != 0) {
            s32 k = func_01ffcb0c(FX_Div(-0x1000, b), absd) + 0x1000;
            if (k >= 0xf33) {
                k = 0x1000;
            }
            a = func_01ffcb0c(a, k);
        }
        if (a > 0) {
            s32 t;
            pos2 = *pos;
            pos2.y = off + Ground_GetDefaultY(0);
            t = WorldCurve_ToCurved(&out, &pos2);
            func_020e8388(data_021f47e0, out.x, out.y, out.z);
            func_020e8434(data_021f47e0, t);
            *(Mtx43 *)sCharaShadowModel.unk_64 = *(Mtx43 *)data_021f47e0;
            scale.x = a;
            scale.y = 0x1000;
            scale.z = a;
            if (sCharaShadowMatData != 0) {
                sCharaShadowMatData->unk_0c &= 0xffe0ffff;
                sCharaShadowMatData->unk_0c |= (lvl & 0x1f) << 16;
                sCharaShadowMatData->unk_0c &= 0xc0ffffff;
                sCharaShadowMatData->unk_0c |= sCharaShadowPolyId << 24;
                sCharaShadowMatData->unk_10 |= 0x3f1f0000;
            }
            sCharaShadowModel.drawScaled((s32 *)&scale);
            sCharaShadowPolyId++;
            if (sCharaShadowPolyId > 0xb) {
                sCharaShadowPolyId = 1;
            }
        }
    }
}

extern "C" void CharaShadow_DrawPlayer(Vec3 *pos, s32 a) {
    Vec3 v;
    v = *pos;
    v.y = v.y - (Ground_GetDefaultY(0) + 0x800);
    CharaShadow_Draw(&v, a, 0xe00, 0x1000);
}
