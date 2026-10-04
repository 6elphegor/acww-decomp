// mwcc-flags: -nothumb -O4,p
// RC_020f44f0: autoload_2 0x020f44f0-0x020f4904 (11 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL, unchanged code of G012a
// (src/autoload_2/unk_020f3e50.cpp) minus the channel-object classes 0x020f3e50-0x020f44f0, which RC_020f3e50 now builds as real
// classes. This is the start of the NEXT source file (sound-position pan / volume curve, listener callbacks; its .data byte
// data_0213b9d8, bss 0x021f5bfc-0x021f5c2c and main's __sinit 0x020c6094 (FX_Div constants, Ramp clear SndVolumeCurve_Clear) belong to it, see PLAN.md); it stays
// PARTIAL until that file is reconstructed whole (it continues with G012b 0x020f4a5c-0x020f5b9c and needs func_020f4904).
#include "types.h"
#include "game/Vec3.h"
#include "snd/PlayCtx.h"



struct Ramp {
    s32 w0, w4, w8, wc, w10, w14, w18;
};

extern "C" {
extern Ramp gSndVolumeCurve;
extern s32 data_021f5c00;
extern s32 data_021f5c04;
extern s32 data_021f5c08;
extern u8 data_021f5bfc;

s32 FX_Div(s32 a, s32 b);
s32 Snd_ListenerDistanceCallback(PlayCtx *p);
s32 Snd_ListenerVolumeCallback(PlayCtx *p);
s32 Snd_ListenerPanCallback(PlayCtx *p);
s32 Snd_DistanceToVolume(s32 x);
s32 Snd_CalcPan(Vec3 *p, s32 m);
s32 func_020f4904(Vec3 *p, s32 m);
s32 SndVolumeCurve_Eval(Ramp *r, s32 x);
}


static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

// listener callback: distance of the listener at p->source (mode 0)
extern "C" s32 Snd_ListenerDistanceCallback(PlayCtx *p) {
    return func_020f4904((Vec3 *)p->source, 0);
}

// volume of the pan curve at x
extern "C" s32 Snd_DistanceToVolume(s32 x) {
    return SndVolumeCurve_Eval(&gSndVolumeCurve, x);
}

// listener callback: volume from the distance w10
extern "C" s32 Snd_ListenerVolumeCallback(PlayCtx *p) {
    return Snd_DistanceToVolume(p->distance);
}

// left / right volume (0..127) from the depth z
extern "C" void Snd_CalcDepthVolumes(s32 z, s32 *a, s32 *b) {
    s32 l;
    s32 r;
    if (z <= 0) {
        l = 0;
    } else if (z <= 0x99a) {
        l = FX_Mul(data_021f5c00, z) >> 12;
    } else if (z > 0x1000) {
        l = 0;
    } else {
        l = (0x7f000 - FX_Mul(data_021f5c08, z - 0x99a)) >> 12;
    }
    if (z <= 0x99a) {
        r = 0;
    } else if (z >= 0xccd) {
        r = 127;
    } else {
        r = FX_Mul(data_021f5c04, z - 0x99a) >> 12;
    }
    if (l > 127) {
        l = 127;
    } else if (l < 0) {
        l = 0;
    }
    *a = l;
    if (r > 127) {
        r = 127;
    } else if (r < 0) {
        r = 0;
    }
    *b = r;
}

// pan value (-128..127) of a position: mode 0 spread, 1 sign, 2 offset from the screen centre
extern "C" s32 Snd_CalcPan(Vec3 *p, s32 m) {
    s32 r;
    s32 x;
    if (p == 0) return 0;
    x = p->x >> 12;
    switch (m) {
    case 0:
        r = (x + 42) * 221 / 83 - 111;
        break;
    case 1:
        if (x > 0) {
            r = 1;
        } else {
            r = -(x < 0);
        }
        break;
    case 2:
        r = x - 128;
        break;
    }
    if (r < -128) {
        r = -128;
    } else if (r > 127) {
        r = 127;
    }
    return r;
}

// listener callback: pan of the listener at p->source (mode 0)
extern "C" s32 Snd_ListenerPanCallback(PlayCtx *p) {
    return Snd_CalcPan((Vec3 *)p->source, 0);
}

// clear the Ramp
extern "C" void SndVolumeCurve_Clear(Ramp *r) {
    r->w4 = r->w8 = r->wc = r->w10 = 0;
    r->w14 = r->w18 = 0;
}

// rebuild the pan curve Ramp for a new centre value (cached in w0)
extern "C" void SndVolumeCurve_Set(Ramp *r, s32 v) {
    s32 t;
    if (r->w0 == v) return;
    r->w0 = v;
    t = r->w0 - 0xb000;
    r->w4 = 0x7f000 - FX_Mul(t, 0x3000);
    r->w8 = 0x68000 - FX_Mul(t, 0x4000);
    r->wc = FX_Mul(FX_Div(0x2000, 0x3000), t) + 0x4000;
    r->w10 = FX_Mul(FX_Div(0x4000, 0x3000), t) + 0x11000;
    r->w14 = FX_Div(r->w4 - r->w8, r->wc - r->w0);
    r->w18 = FX_Div(r->w8, r->w0 - r->w10);
}

// pan curve: piecewise-linear mapping of x (fixed point) through the Ramp points, clamped to 0..127
extern "C" s32 SndVolumeCurve_Eval(Ramp *r, s32 x) {
    s32 v;
    if (x >= (r->w10 >> 12)) {
        v = 0;
    } else if (x <= (r->wc >> 12)) {
        v = r->w4 >> 12;
    } else if (x <= (r->w0 >> 12)) {
        v = (r->w4 + FX_Mul((x << 12) - r->wc, r->w14)) >> 12;
    } else {
        v = (r->w8 + FX_Mul((x << 12) - r->w0, r->w18)) >> 12;
    }
    if (v > 127) return 127;
    if (v < 0) return 0;
    return v;
}

// address of the pan curve gSndVolumeCurve (Ramp)
extern "C" Ramp *Snd_GetVolumeCurve(void) {
    return &gSndVolumeCurve;
}

// set data_021f5bfc (byte flag)
extern "C" void func_020f44f0(u8 v) {
    data_021f5bfc = v;
}

