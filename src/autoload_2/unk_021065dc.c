// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: animation resource accessors (anm sets by magic, anm by index, pattern-anm key search) and joint rotation/scale/trans animation evaluation.
// autoload_2 0x021065dc-0x02106d60. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef long long s64;
typedef int BOOL;
#define NULL 0

typedef struct V3 { s32 x, y, z; } V3;
typedef union M33 { s32 m[9]; V3 r[3]; } M33;
typedef struct KF { u16 frame; u16 val; } KF;
typedef struct P16 { s16 x, y; } P16;
typedef struct P32 { s32 x, y; } P32;

extern BOOL func_01ffaea0(M33 *, void *, void *, u32);   // itcm: decode compressed rotation matrix (tblA, tblB, index)
extern void VEC_Normalize(s32 *, s32 *);                 // itcm: normalise a 3-vector (src, dst)
extern u8 *func_021062ec(u8 *, u32);                     // block by index (N005a)
u8 *NNSi_G3dGetTexPatAnmDataByIdx(u8 *, u32);
u8 *func_021067c4(u8 *, u32, u32);

static inline void Cross(V3 *a, V3 *b, V3 *c)
{
    s32 x, y, z;
    x = (a->y * b->z - a->z * b->y) >> 12;
    y = (a->z * b->x - a->x * b->z) >> 12;
    z = (a->x * b->y - a->y * b->x) >> 12;
    c->x = x;
    c->y = y;
    c->z = z;
}

// joint animation: interpolated pair of values (s16 or s32 pairs, with frame blending, 1/2/4 frame rate)
void func_02106ba8(s32 *out, s32 frame, u32 *ent, u8 *hdr)
{
    u8 *d = hdr + ent[1];
    u32 info = ent[0];
    s32 f = frame >> 12;
    s32 fb;
    s32 t;
    s32 mul, sh;
    if (f == *(u16 *)(hdr + 4) - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                f = (f & 1) + ((u32)f >> 1);
            } else {
                f = (f & 3) + ((u32)f >> 2);
            }
        }
        if (*(u32 *)(hdr + 8) & 2) {
            fb = 0;
            goto one;
        }
        if (info & 0x20000000) {
            P16 *p = (P16 *)d;
            out[0] = p[f].x;
            out[1] = p[f].y;
        } else {
            P32 *p = (P32 *)d;
            out[0] = p[f].x;
            out[1] = p[f].y;
        }
        return;
    }
    if (info & 0xc0000000) {
        u32 lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if ((u32)f >= lim) {
                f = lim >> 1;
                fb = f + 1;
                goto one;
            }
            f = (u32)f >> 1;
            fb = f + 1;
            t = frame & 0x1fff;
            mul = 2;
            sh = 1;
        } else {
            if ((u32)f >= lim) {
                f = (f & 3) + ((u32)f >> 2);
                fb = f + 1;
                goto one;
            }
            f = (u32)f >> 2;
            fb = f + 1;
            t = frame & 0x3fff;
            mul = 4;
            sh = 2;
        }
        goto fin;
    }
    fb = f + 1;
one:
    t = frame & 0xfff;
    mul = 1;
    sh = 0;
fin:
    {
        s32 xa, ya, xb, yb;
        if (info & 0x20000000) {
            P16 *p = (P16 *)d;
            xa = p[f].x;
            ya = p[f].y;
            xb = p[fb].x;
            yb = p[fb].y;
        } else {
            P32 *p = (P32 *)d;
            xa = p[f].x;
            ya = p[f].y;
            xb = p[fb].x;
            yb = p[fb].y;
        }
        out[0] = (xa * mul + ((t * (xb - xa)) >> 12)) >> sh;
        out[1] = (ya * mul + ((t * (yb - ya)) >> 12)) >> sh;
    }
}

// joint rotation animation with frame blending (getRotData): two compressed rotation matrices are decoded (func_01ffaea0),
// interpolated, rows normalised (VEC_Normalize), third row by cross product when the decoder says so
void func_0210685c(M33 *out, s32 frame, u32 *ent, u8 *hdr)
{
    M33 a, b;
    u8 *tblA;
    u32 info;
    u8 *tblB;
    s32 f;
    s32 fb;
    s32 t;
    u16 n;
    s32 mul;
    u8 *d;
    BOOL r;
    n = *(u16 *)(hdr + 4);
    tblA = hdr + *(u32 *)(hdr + 12);
    tblB = hdr + *(u32 *)(hdr + 16);
    d = hdr + ent[1];
    info = ent[0];
    f = frame >> 12;
    if (f == n - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                f = (f & 1) + ((u32)f >> 1);
            } else {
                f = (f & 3) + ((u32)f >> 2);
            }
        }
        if (*(u32 *)(hdr + 8) & 2) {
            fb = 0;
            goto one;
        }
        if (func_01ffaea0(out, tblA, tblB, ((u16 *)d)[f]) == 0) {
            return;
        }
        Cross(&out->r[0], &out->r[1], &out->r[2]);
        return;
    }
    if (info & 0xc0000000) {
        u32 lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if ((u32)f >= lim) {
                f = lim >> 1;
                fb = f + 1;
                goto one;
            }
            f = (u32)f >> 1;
            fb = f + 1;
            t = frame & 0x1fff;
            mul = 2;
        } else {
            if ((u32)f >= lim) {
                f = (f & 3) + ((u32)f >> 2);
                fb = f + 1;
                goto one;
            }
            f = (u32)f >> 2;
            fb = f + 1;
            t = frame & 0x3fff;
            mul = 4;
        }
        goto fin;
    }
    fb = f + 1;
one:
    t = frame & 0xfff;
    mul = 1;
fin:
    {
        r = 0;
        r |= func_01ffaea0(&a, tblA, tblB, ((u16 *)d)[f]);
        r |= func_01ffaea0(&b, tblA, tblB, ((u16 *)d)[fb]);
        out->m[0] = a.m[0] * mul + ((t * (b.m[0] - a.m[0])) >> 12);
        out->m[1] = a.m[1] * mul + ((t * (b.m[1] - a.m[1])) >> 12);
        out->m[2] = a.m[2] * mul + ((t * (b.m[2] - a.m[2])) >> 12);
        out->m[3] = a.m[3] * mul + ((t * (b.m[3] - a.m[3])) >> 12);
        out->m[4] = a.m[4] * mul + ((t * (b.m[4] - a.m[4])) >> 12);
        out->m[5] = a.m[5] * mul + ((t * (b.m[5] - a.m[5])) >> 12);
        VEC_Normalize(&out->m[0], &out->m[0]);
        VEC_Normalize(&out->m[3], &out->m[3]);
        if (r == 0) {
            out->m[6] = a.m[6] * mul + ((t * (b.m[6] - a.m[6])) >> 12);
            out->m[7] = a.m[7] * mul + ((t * (b.m[7] - a.m[7])) >> 12);
            out->m[8] = a.m[8] * mul + ((t * (b.m[8] - a.m[8])) >> 12);
            VEC_Normalize(&out->m[6], &out->m[6]);
        } else {
            Cross(&out->r[0], &out->r[1], &out->r[2]);
        }
    }
}

// NNS_G3dGetMdlByIdx (model from model set, NULL if the entry is NULL)
u8 *NNS_G3dGetAnmByIdx(u8 *p, u32 i)
{
    u8 *base = p + *(u32 *)(p + *(u16 *)(p + 12));
    u8 *d = base + 8 + *(u16 *)(base + 14);
    u32 *e = (u32 *)(d + 4 + *(u16 *)d * i);
    if (e != NULL) {
        return base + *e;
    }
    return NULL;
}

// find a data block (4-char magic) in a resource file whose header has the given file magic
u8 *func_021067c4(u8 *p, u32 sig, u32 blk)
{
    if (*(u32 *)p == sig) {
        u32 i;
        for (i = 0; i < *(u16 *)(p + 14); i++) {
            u8 *b = func_021062ec(p, i);
            if (*(u32 *)b == blk) {
                return b;
            }
        }
    }
    return NULL;
}

// anm by index from a VIS0 block
u8 *func_021067a4(u8 *p, u32 i)
{
    u8 *d = p + 8 + *(u16 *)(p + 14);
    return p + *(u32 *)(d + 4 + *(u16 *)d * i);
}

// NNS_G3dGetVisAnmSet ('BVA0', 'VIS0')
u8 *func_02106788(u8 *p)
{
    return func_021067c4(p, 0x30415642, 0x30534956);
}

// name/data table entry (+0x8) by index (16-byte entries)
u8 *NNSi_G3dGetTexPatAnmTexNameByIdx(u8 *p, u32 i)
{
    return p + *(u16 *)(p + 8) + i * 16;
}

// name/data table entry (+0xa) by index (16-byte entries)
u8 *NNSi_G3dGetTexPatAnmPlttNameByIdx(u8 *p, u32 i)
{
    return p + *(u16 *)(p + 10) + i * 16;
}

// pattern-anm key search: last key with frame <= frame (guess from the scaled frame, then walk)
KF *func_021066e8(u8 *p, u32 i, u32 frame)
{
    u16 *e = (u16 *)NNSi_G3dGetTexPatAnmDataByIdx(p, i);
    KF *tbl;
    u32 k;
    tbl = (KF *)(p + e[3]);
    k = ((s32)(s16)e[2] * frame) >> 12;
    while (k != 0 && tbl[k].frame >= frame) {
        k--;
    }
    while (k + 1 < e[0] && (tbl + k)[1].frame <= frame) {
        k++;
    }
    return &tbl[k];
}

// pattern-anm entry by index (dictionary at +0x12)
u8 *NNSi_G3dGetTexPatAnmDataByIdx(u8 *p, u32 i)
{
    u8 *d = p + 12 + *(u16 *)(p + 18);
    return d + 4 + *(u16 *)d * i;
}

// anm by index from a PAT0 block
u8 *func_021066ac(u8 *p, u32 i)
{
    u8 *d = p + 8 + *(u16 *)(p + 14);
    return p + *(u32 *)(d + 4 + *(u16 *)d * i);
}

// NNS_G3dGetTexPatAnmSet ('BTP0', 'PAT0')
u8 *func_02106690(u8 *p)
{
    return func_021067c4(p, 0x30505442, 0x30544150);
}

// anm by index from a SRT0 block
u8 *func_02106670(u8 *p, u32 i)
{
    u8 *d = p + 8 + *(u16 *)(p + 14);
    return p + *(u32 *)(d + 4 + *(u16 *)d * i);
}

// NNS_G3dGetTexSrtAnmSet ('BTA0', 'SRT0')
u8 *func_02106654(u8 *p)
{
    return func_021067c4(p, 0x30415442, 0x30545253);
}

// anm by index from a MAT0 block
u8 *func_02106634(u8 *p, u32 i)
{
    u8 *d = p + 8 + *(u16 *)(p + 14);
    return p + *(u32 *)(d + 4 + *(u16 *)d * i);
}

// NNS_G3dGetMatAnmSet ('BMA0', 'MAT0')
u8 *func_02106618(u8 *p)
{
    return func_021067c4(p, 0x30414d42, 0x3054414d);
}

// anm by index from a JNT0 block
u8 *func_021065f8(u8 *p, u32 i)
{
    u8 *d = p + 8 + *(u16 *)(p + 14);
    return p + *(u32 *)(d + 4 + *(u16 *)d * i);
}

// NNS_G3dGetJntAnmSet ('BCA0' file, 'JNT0' block)
u8 *func_021065dc(u8 *p)
{
    return func_021067c4(p, 0x30414342, 0x30544e4a);
}
