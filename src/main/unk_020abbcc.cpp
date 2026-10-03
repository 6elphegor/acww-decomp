#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Col {
    u16 v;
};

struct Unk_02033914 {
    u8 unk_00[0x40];
};

struct Mtx43 {
    s32 m[12];
};

struct Unk_021ede90 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10;
};

class Model {
public:
    Model();
    virtual ~Model();
    u8 pad_04[0x58];
    void *unk_5c;
    u8 pad_60[4];
    void drawScaled(s32 *scale);
};

class CachedModel : public Model {
public:
    CachedModel();
    virtual ~CachedModel();
    u8 unk_64[0x34];
    u32 unk_98;
    BOOL release(void);
    BOOL load(void *res, void *name);
};

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
u8 func_020ac2c8(Vec3 *p, s32 q);
extern u8 gFieldSceneKind;
extern u8 data_021f47e0[];
}

extern "C" void func_020abc10(Vec3 *pos, s32 a, s32 b, s32 c);

u32 data_020e2dc4 = 1;

Unk_021ede90 *data_021ede90;
CachedModel data_021edea0;

extern "C" BOOL func_020abe58() {
    BOOL ret;
    if (data_021edea0.load((void *)"/shadow/chara_shadow.nsbmd", 0)) {
        ret = TRUE;
    } else {
        ret = FALSE;
    }
    u8 *p = (u8 *)data_021edea0.unk_5c;
    u8 *q = p + *(s32 *)(p + 8);
    q = q + *(s32 *)(q + *(u16 *)(q + 0xa) + 8);
    data_021ede90 = (Unk_021ede90 *)q;
    data_020e2dc4 = 1;
    NNSi_G3dModifyMatFlag((u32)data_021edea0.unk_5c, 1, 0x40);
    return ret;
}

extern "C" void func_020abe28() {
    Col c0, c1;
    data_020e2dc4 = 1;
    c0 = SceneLights_GetRoomColor();
    c1 = c0;
    NNS_G3dMdlSetMdlDiff((u32)data_021edea0.unk_5c, 0, c1.v);
}

extern "C" void func_020abe10() {
    data_021ede90 = 0;
    data_021edea0.release();
}

extern "C" void func_020abdd0(Vec3 *pos, s32 a, s32 b, s32 c) {
    if (c == 0) {
        c = 1;
    }
    s32 r6 = 0x1000;
    if (c != 0x1f) {
        r6 = FX_Div((c - 1) << 12, 0x1e000);
    }
    func_020abc10(pos, a, b, r6);
}

extern "C" void func_020abc10(Vec3 *pos, s32 a, s32 b, s32 c) {
    Unk_02033914 buf1;
    Unk_02033914 buf2;
    Vec3 pos2;
    Vec3 out;
    Vec3 scale;
    s32 off, d, absd;
    if (a == 0) {
        return;
    }
    s32 lvl = func_020ac2c8(pos, a);
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
            *(Mtx43 *)data_021edea0.unk_64 = *(Mtx43 *)data_021f47e0;
            scale.x = a;
            scale.y = 0x1000;
            scale.z = a;
            if (data_021ede90 != 0) {
                data_021ede90->unk_0c &= 0xffe0ffff;
                data_021ede90->unk_0c |= (lvl & 0x1f) << 16;
                data_021ede90->unk_0c &= 0xc0ffffff;
                data_021ede90->unk_0c |= data_020e2dc4 << 24;
                data_021ede90->unk_10 |= 0x3f1f0000;
            }
            data_021edea0.drawScaled((s32 *)&scale);
            data_020e2dc4++;
            if (data_020e2dc4 > 0xb) {
                data_020e2dc4 = 1;
            }
        }
    }
}

extern "C" void func_020abbcc(Vec3 *pos, s32 a) {
    Vec3 v;
    v = *pos;
    v.y = v.y - (Ground_GetDefaultY(0) + 0x800);
    func_020abc10(&v, a, 0xe00, 0x1000);
}
