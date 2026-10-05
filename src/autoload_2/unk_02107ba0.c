// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d texture SRT animation (nsbta.c): fetch the rotation of one frame as a packed sin/cos pair,
// with the 1:1 average and 3:1 interpolation of step-2/step-4 data (GetTexSRTAnmSinCosVal_). autoload_2
// 0x02107ba0-0x02107cac. ARM, mwcc 1.2/base, -O4,p.
// Follows NitroSystem's nsbta.c. The later NitroSystem (071126) indexes the fx16 data as
// `pDataHead + 2 * idx (+ 1)`; this version reads the pairs as {sin, cos} records (the original scales the index
// once, `lsl #2`), and the 1:1 average takes record idx + 1 as `[1]` of a pointer to record idx (one base register
// for three loads).
typedef unsigned char u8;
typedef short fx16;
typedef int fx32;
typedef unsigned int u32;

typedef struct NNSG3dResTexSRTAnm NNSG3dResTexSRTAnm;

typedef struct SinCos {     // one rotation key
    fx16 sin;
    fx16 cos;
} SinCos;

enum {
    NNS_G3D_TEXSRTANM_ELEM_FX16 = 0x10000000,
    NNS_G3D_TEXSRTANM_ELEM_CONST = 0x20000000,
    NNS_G3D_TEXSRTANM_ELEM_STEP_1 = 0x00000000,
    NNS_G3D_TEXSRTANM_ELEM_STEP_2 = 0x40000000,
    NNS_G3D_TEXSRTANM_ELEM_STEP_4 = 0x80000000,
    NNS_G3D_TEXSRTANM_ELEM_STEP_MASK = 0xc0000000,
    NNS_G3D_TEXSRTANM_ELEM_LAST_INTERP_MASK = 0x0000ffff,
    NNS_G3D_TEXSRTANM_ELEM_LAST_INTERP_SHIFT = 0
};

u32 GetTexSRTAnmSinCosVal_ (const NNSG3dResTexSRTAnm * pTexAnm, u32 info, u32 data, u32 frame)
{
    u32 idx, idx_sub;
    u32 last_interp;
    const void * pDataHead;

    if (info & NNS_G3D_TEXSRTANM_ELEM_CONST) {
        return data;
    }

    pDataHead = (const void *)((u8 *)pTexAnm + data);

    if (!(info & NNS_G3D_TEXSRTANM_ELEM_STEP_MASK)) {
        idx = frame;
        goto TEXSRT_SINCOS_NONINTERP;
    }

    last_interp = (NNS_G3D_TEXSRTANM_ELEM_LAST_INTERP_MASK & info) >>
                  NNS_G3D_TEXSRTANM_ELEM_LAST_INTERP_SHIFT;

    if (info & NNS_G3D_TEXSRTANM_ELEM_STEP_2) {
        if (frame & 1) {
            if (frame > last_interp) {
                idx = (last_interp >> 1) + 1;
                goto TEXSRT_SINCOS_NONINTERP;
            } else {
                idx = frame >> 1;
                goto TEXSRT_SINCOS_INTERP_2;
            }
        } else {
            idx = frame >> 1;
            goto TEXSRT_SINCOS_NONINTERP;
        }
    } else {
        if (frame & 3) {
            if (frame > last_interp) {
                idx = (last_interp >> 2) + (frame & 3);
                goto TEXSRT_SINCOS_NONINTERP;
            }

            if (frame & 1) {
                fx32 s, s_sub;
                fx32 c, c_sub;

                if (frame & 2) {
                    idx_sub = (frame >> 2);
                    idx = idx_sub + 1;
                } else {
                    idx = (frame >> 2);
                    idx_sub = idx + 1;
                }

                s = ((const SinCos *)pDataHead + idx)->sin;
                c = ((const SinCos *)pDataHead + idx)->cos;
                s_sub = ((const SinCos *)pDataHead + idx_sub)->sin;
                c_sub = ((const SinCos *)pDataHead + idx_sub)->cos;

                s = (s + s + s + s_sub) >> 2;
                c = (c + c + c + c_sub) >> 2;
                return (u32)((s & 0xffff) | (c << 16));
            } else {
                idx = frame >> 2;
                goto TEXSRT_SINCOS_INTERP_2;
            }
        } else {
            idx = frame >> 2;
            goto TEXSRT_SINCOS_NONINTERP;
        }
    }
TEXSRT_SINCOS_NONINTERP:
    return *((const u32 *)pDataHead + idx);
TEXSRT_SINCOS_INTERP_2:
    {
        fx32 s0, s1;
        fx32 c0, c1;
        s0 = ((const SinCos *)pDataHead + idx)->sin;
        c0 = ((const SinCos *)pDataHead + idx)->cos;
        s1 = ((const SinCos *)pDataHead + idx)[1].sin;
        c1 = ((const SinCos *)pDataHead + idx)[1].cos;
        return (u32)((((s0 + s1) >> 1) & 0xffff) | (((c0 + c1) >> 1) << 16));
    }
}
