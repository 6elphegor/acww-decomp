// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: animation value readers (single value with/without frame blending), joint SRT from the render state, anm-object init.
// autoload_2 0x02106f90-0x02107564. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef long long s64;
typedef int BOOL;
#define NULL 0

typedef struct RS {
    u8 *node;                 // 0x00
    u8 pad4[0xd0];
    u8 *jnt;                  // 0xd4
    u8 pad_d8[0x10];
    void (*fn)(void *, void *, void *, void *);   // 0xe8
} RS;

typedef struct TexObj {
    u32 pad0, pad4;
    u8 *res;         // 0x08
    u32 w0c;         // 0x0c
    u8 pad10[9];
    u8 cnt;          // 0x19
    u16 tbl[1];      // 0x1a
} TexObj;

typedef struct JOut {
    u32 flags;
    u8 pad4[0x24];
    s32 m[9];     // 0x28
    s32 trans[3]; // 0x4c
} JOut;

extern RS *data_021f5cc0;
extern u32 data_0213bcbc;
extern const u8 data_02135e5c[9][4], data_02135e5d[][4], data_02135e5e[][4], data_02135e5f[][4]; // e5d..e5f: interior labels
extern void MI_Zero36B(void *);
extern void MIi_CpuClear16(u32, void *, u32);   // MI_CpuClear16 (data, dest, size)

static inline u8 *JntEnt(RS *rs)
{
    u8 *jnt = rs->jnt;
    u32 id = rs->node[1];
    u8 *t = jnt + *(u16 *)(jnt + 6);
    return jnt + *(u32 *)(t + *(u16 *)t * id + 4);
}

typedef struct P16 { s16 x, y; } P16;

// anm object init from a joint anim: tbl[i] = node id | 0x100 (node map cleared with MI_CpuClear16)
void func_021074c8(TexObj *o, u8 *res, u8 *src)
{
    u32 i;
    u16 *offs;
    o->res = res;
    o->w0c = data_0213bcbc;
    o->cnt = src[0x17];
    {
        volatile u16 zero = 0;
        MIi_CpuClear16(zero, o->tbl, o->cnt * 2);
    }
    offs = (u16 *)(res + 20);
    for (i = 0; i < *(u16 *)(res + 6); i++) {
        o->tbl[i] = (*(u32 *)(res + offs[i]) >> 24) | 0x100;
    }
}

// joint translation from the render state node
void getMdlTrans_(JOut *out)
{
    RS *rs = data_021f5cc0;
    u8 *ent = JntEnt(rs);
    if (*(u16 *)ent & 1) {
        out->flags |= 4;
    } else {
        u32 *p = (u32 *)(ent + 4);
        out->trans[0] = p[0];
        out->trans[1] = p[1];
        out->trans[2] = p[2];
    }
}

// joint scale from the render state node (calls the RS callback with the data pointer)
void getMdlScale_(void *out)
{
    RS *rs = data_021f5cc0;
    u8 *jnt = rs->jnt;
    u8 *node = rs->node;
    u8 *t = jnt + *(u16 *)(jnt + 6);
    u8 *ent = jnt + *(u32 *)(t + *(u16 *)t * node[1] + 4);
    u32 flag = *(u16 *)ent;
    u8 *p = ent + 4;
    if (!(flag & 1)) {
        p += 12;
    }
    if (!(flag & 2)) {
        if (flag & 8) {
            p += 4;
        } else {
            p += 16;
        }
    }
    rs->fn(out, p, node, (void *)flag);
}

// joint rotation from the render state node (identity flag / pivot matrix / 8 stored values)
void getMdlRot_(JOut *out)
{
    RS *rs = data_021f5cc0;
    u8 *ent = JntEnt(rs);
    u32 flag = *(u16 *)ent;
    s16 *p = (s16 *)(ent + 4);
    if (!(flag & 1)) {
        p = (s16 *)((u8 *)p + 12);
    }
    if (!(flag & 2)) {
        if (flag & 8) {
            s32 a = p[0];
            s32 b = p[1];
            s32 k = (s32)(flag & 0xf0) >> 4;
            MI_Zero36B(out->m);
            out->m[k] = (*(u16 *)ent & 0x100) ? -0x1000 : 0x1000;
            out->m[data_02135e5c[k][0]] = a;
            out->m[data_02135e5d[k][0]] = b;
            if (*(u16 *)ent & 0x200) {
                b = -b;
            }
            out->m[data_02135e5e[k][0]] = b;
            if (*(u16 *)ent & 0x400) {
                a = -a;
            }
            out->m[data_02135e5f[k][0]] = a;
        } else {
            out->m[0] = *(s16 *)(ent + 2);
            out->m[1] = p[0];
            out->m[2] = p[1];
            out->m[3] = p[2];
            out->m[4] = p[3];
            out->m[5] = p[4];
            out->m[6] = p[5];
            out->m[7] = p[6];
            out->m[8] = p[7];
        }
    } else {
        out->flags |= 2;
    }
}

// same as 02106f90 but without frame blending
void getTransData_(s32 *out, u32 f, u32 *ent, u8 *base)
{
    u8 *d;
    u32 info;
    u32 lim, q;
    f = (s32)f >> 12;
    d = base + ent[1];
    info = ent[0];
    if ((info & 0xc0000000) != 0) {
        lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (f & 1) {
                if (f > lim) {
                    f = (lim >> 1) + 1;
                    goto fetch;
                }
                q = f >> 1;
                goto avg;
            }
            f = f >> 1;
            goto fetch;
        } else {
            u32 r = f & 3;
            if (r != 0) {
            if (f > lim) {
                f = (lim >> 2) + r;
                goto fetch;
            }
            if (f & 1) {
                u32 ib, ia;
                if (f & 2) {
                    ib = f >> 2;
                    ia = ib + 1;
                } else {
                    ia = f >> 2;
                    ib = ia + 1;
                }
                if (info & 0x20000000) {
                    *out = (((s16 *)d)[ia] + ((s16 *)d)[ia] + ((s16 *)d)[ia] + ((s16 *)d)[ib]) >> 2;
                } else {
                    *out = (s32)(((s64)((s32 *)d)[ia] + ((s32 *)d)[ia] + ((s32 *)d)[ia] + ((s32 *)d)[ib]) >> 2);
                }
                return;
            }
            q = f >> 2;
            goto avg;
            }
            f = f >> 2;
            goto fetch;
        }
    }
    goto fetch;
avg:
    if (info & 0x20000000) {
        *out = (((s16 *)d)[q] + ((s16 *)d + q)[1]) >> 1;
    } else {
        *out = (((s32 *)d)[q] >> 1) + (((s32 *)d + q)[1] >> 1);
    }
    return;
fetch:
    if (info & 0x20000000) {
        *out = ((s16 *)d)[f];
    } else {
        *out = ((s32 *)d)[f];
    }
}

// joint animation: interpolated single value (s16 or s32, with frame blending)
void getTransDataEx_(s32 *out, s32 frame, u32 *ent, u8 *hdr)
{
    u8 *d = hdr + ent[1];
    u32 info = ent[0];
    s32 f = frame >> 12;
    if (f == *(u16 *)(hdr + 4) - 1) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                f = (f & 1) + ((u32)f >> 1);
            } else {
                f = (f & 3) + ((u32)f >> 2);
            }
        }
        if (*(u32 *)(hdr + 8) & 2) {
            s32 t = frame & 0xfff;
            s32 a, b;
            if (info & 0x20000000) {
                a = ((s16 *)d)[f];
                b = ((s16 *)d)[0];
            } else {
                a = ((s32 *)d)[f];
                b = ((s32 *)d)[0];
            }
            *out = a + ((t * (b - a)) >> 12);
        } else {
            if (info & 0x20000000) {
                *out = ((s16 *)d)[f];
            } else {
                *out = ((s32 *)d)[f];
            }
        }
    } else {
        s32 mul, sh;
        s32 a, b;
        s32 t;
        if (info & 0xc0000000) {
            u32 lim = (info & 0x1fff0000) >> 16;
            if (info & 0x40000000) {
                if ((u32)f >= lim) {
                    f = lim >> 1;
                    goto one;
                }
                f = (u32)f >> 1;
                t = frame & 0x1fff;
                mul = 2;
                sh = 1;
            } else {
                if ((u32)f >= lim) {
                    f = (f & 3) + ((u32)f >> 2);
                    goto one;
                }
                f = (u32)f >> 2;
                t = frame & 0x3fff;
                mul = 4;
                sh = 2;
            }
            goto fin;
        }
    one:
        t = frame & 0xfff;
        mul = 1;
        sh = 0;
    fin:
        if (info & 0x20000000) {
            a = ((s16 *)d)[f];
            b = ((s16 *)d + f)[1];
        } else {
            a = ((s32 *)d)[f];
            b = ((s32 *)d + f)[1];
        }
        *out = (a * mul + ((t * (b - a)) >> 12)) >> sh;
    }
}

// ---- file-scope objects (.rodata 0x02135e5c-0x02135e80): for each of the 9 compressed-rotation kinds the matrix
// element indices of its four entries (also read by getRotDataByIdx_ in ITCM). data_02135e5d / e5e / e5f are interior
// labels (autoload_2 lcf_symbols.txt).
const u8 data_02135e5c[9][4] = {
    {4, 5, 7, 8}, {3, 5, 6, 8}, {3, 4, 6, 7},
    {1, 2, 7, 8}, {0, 2, 6, 8}, {0, 1, 6, 7},
    {1, 2, 4, 5}, {0, 2, 3, 5}, {0, 1, 3, 4},
};
