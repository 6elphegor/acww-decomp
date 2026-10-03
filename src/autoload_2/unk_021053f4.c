// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d SBC command handlers: BB, BBY (billboards) + node flag collector.
// autoload_2 0x021053f4-0x02105b3c. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef unsigned long long u64;
typedef int BOOL;
#define NULL 0


typedef struct RS RS;
struct RS {
    u8 *c;              // 0x00 SBC command pointer
    void *obj;          // 0x04
    u32 flag;           // 0x08
    u8 pad0c[0x1c];
    void (*cb28)(RS *); // 0x28
    void (*cb2c)(RS *); // 0x2c
    u8 pad30[4];
    void (*cb34)(RS *); // 0x34
    u8 pad38[4];
    void (*cb3c)(RS *); // 0x3c
    u8 pad40[0x53];
    u8 t93, t94, t95, t96, t97, t98;
    u8 pad99[0x17];
    u32 *mat_b0;       // 0xb0
    u8 padb4[0x24];
    u8 *mat_d8;        // 0xd8
};
extern void NNS_G3dGeBufferOP_N(u32, void *, u32);

typedef struct V3 { s32 x, y, z; } V3;
typedef union Glb {
    u32 w[0x99 + 1];
    struct {
    u32 w0, w4;
    u8 pad8[0x90];
    u32 ctl98;
    u8 pad9c[0x44];
    V3 e0;
    V3 scale;
    u32 pad_f8;
    u32 flag;
    } n;
} Glb;
extern Glb data_027e00c8;
extern u8 data_027e0114[], data_027e0184[];
extern void NNS_G3dGeFlushBuffer(void);
extern BOOL G3X_GetClipMtx(void *);
typedef struct Cb {
    u8 pad0[0x10];
    struct Cb *next;    // 0x10
    u8 pad14[5];
    u8 n;               // 0x19
    u16 tbl[1];         // 0x1a
} Cb;
extern u8 *NNS_G3dGlbGetWV(void);
extern u8 *NNS_G3dGlbGetInvWV(void);
extern u8 *NNS_G3dGlbGetInvV(void);
extern void MTX_Copy43To44_(void *, void *);
extern void MTX_Concat44(void *, void *, void *);
extern s32 VEC_Mag(void *);
extern void VEC_Normalize(void *, void *);
extern void MIi_CpuSend32(void *, void *, u32);
extern s32 data_0213be38[3];
extern s32 data_0213be44[3];
extern s32 data_0213be14[9];
extern u8 data_0213be0c[], data_0213be08[];
extern s32 data_0213bdf0[3], data_0213bdfc[3];
extern u8 data_0213bdc4[], data_0213bdcc[], data_0213bdc0[];

// marks (in a bit set) every table slot flagged 0x100 in a linked list of nodes
void updateHintVec_(u32 *bits, Cb *n)
{
    s32 i;
    if (n == NULL) {
        return;
    }
    do {
        for (i = 0; i < n->n; i++) {
            if (n->tbl[i] & 0x100) {
                bits[i >> 5] |= 1 << (i & 31);
            }
        }
        n = n->next;
    } while (n != NULL);
}

// NNS_G3dFuncSbc_BBY
void NNSi_G3dFuncSbc_BB(RS *rs, u32 opt)
{
    u32 cmdlen = 2;
    s32 *trans = data_0213bdf0;
    s32 *scale = data_0213bdfc;
    u32 timing;
    u32 skip;
    if (rs->flag & 0x200) {
        if (opt == 0x40 || opt == 0x60) cmdlen++;
        if (opt == 0x20 || opt == 0x60) cmdlen++;
        rs->c += cmdlen;
        return;
    }
    if (opt == 0x40 || opt == 0x60) {
        cmdlen++;
        if ((rs->flag & 0x100) == 0) {
            u32 v;
            if (opt == 0x40) v = rs->c[2]; else v = rs->c[3];
            NNS_G3dGeBufferOP_N(0x14, &v, 1);
        }
    }
    timing = rs->cb28 ? rs->t93 : 0;
    if (timing == 1) {
        rs->flag &= ~0x40;
        rs->cb28(rs);
        timing = rs->cb28 ? rs->t93 : 0;
        skip = rs->flag & 0x40;
    } else {
        skip = 0;
    }
    if ((rs->flag & 0x100) == 0 && skip == 0) {
        s32 m[16];
        s32 m2[16];
        s32 m3[16];
        NNS_G3dGeFlushBuffer();
        *(volatile u32 *)0x04000400 = 0x00151110;
        *(volatile u32 *)0x04000400 = 0;
        *(volatile u32 *)0x04000400 = 0;
        while (G3X_GetClipMtx(m) != 0) {
        }
        if (data_027e00c8.n.flag & 1) {
            MTX_Copy43To44_(NNS_G3dGlbGetWV(), m2);
            MTX_Concat44(m, m2, m);
        } else if (data_027e00c8.n.flag & 2) {
            MTX_Copy43To44_(data_027e0114, m3);
            MTX_Concat44(m, m3, m);
        }
        trans[0] = m[12];
        trans[1] = m[13];
        trans[2] = m[14];
        scale[0] = VEC_Mag(&m[0]);
        scale[1] = VEC_Mag(&m[4]);
        scale[2] = VEC_Mag(&m[8]);
        if (data_027e00c8.n.flag & 1) {
            *(volatile u32 *)0x04000400 = 0x00171012;
            MIi_CpuSend32(data_0213bdc4, (void *)0x04000400, 8);
            MIi_CpuSend32(NNS_G3dGlbGetInvWV(), (void *)0x04000400, 0x30);
            *(volatile u32 *)0x04000400 = 0x1b19;
            MIi_CpuSend32(data_0213bdcc, (void *)0x04000400, 0x3c);
        } else if (data_027e00c8.n.flag & 2) {
            *(volatile u32 *)0x04000400 = 0x00171012;
            MIi_CpuSend32(data_0213bdc4, (void *)0x04000400, 8);
            MIi_CpuSend32(NNS_G3dGlbGetInvV(), (void *)0x04000400, 0x30);
            *(volatile u32 *)0x04000400 = 0x1b19;
            MIi_CpuSend32(data_0213bdcc, (void *)0x04000400, 0x3c);
        } else {
            MIi_CpuSend32(data_0213bdc0, (void *)0x04000400, 0x48);
        }
    }
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cb28(rs);
        skip = rs->flag & 0x40;
    } else {
        skip = 0;
    }
    if (opt == 0x20 || opt == 0x60) {
        cmdlen++;
        if (skip == 0 && (rs->flag & 0x100) == 0) {
            u32 v = rs->c[2];
            NNS_G3dGeBufferOP_N(0x13, &v, 1);
        }
    }
    rs->c += cmdlen;
}

// NNS_G3dFuncSbc_BB
void NNSi_G3dFuncSbc_BBY(RS *rs, u32 opt)
{
    u32 cmdlen = 2;
    s32 *trans = data_0213be38;
    s32 *scale = data_0213be44;
    s32 *rot = data_0213be14;
    u32 timing;
    u32 skip;
    if (rs->flag & 0x200) {
        if (opt == 0x40 || opt == 0x60) cmdlen++;
        if (opt == 0x20 || opt == 0x60) cmdlen++;
        rs->c += cmdlen;
        return;
    }
    if (opt == 0x40 || opt == 0x60) {
        cmdlen++;
        if ((rs->flag & 0x100) == 0) {
            u32 v;
            if (opt == 0x40) v = rs->c[2]; else v = rs->c[3];
            NNS_G3dGeBufferOP_N(0x14, &v, 1);
        }
    }
    timing = rs->cb2c ? rs->t94 : 0;
    if (timing == 1) {
        rs->flag &= ~0x40;
        rs->cb2c(rs);
        timing = rs->cb2c ? rs->t94 : 0;
        skip = rs->flag & 0x40;
    } else {
        skip = 0;
    }
    if ((rs->flag & 0x100) == 0 && skip == 0) {
        s32 m[16];
        s32 m2[16];
        s32 m3[16];
        NNS_G3dGeFlushBuffer();
        *(volatile u32 *)0x04000400 = 0x00151110;
        *(volatile u32 *)0x04000400 = 0;
        *(volatile u32 *)0x04000400 = 0;
        while (G3X_GetClipMtx(m) != 0) {
        }
        if (data_027e00c8.n.flag & 1) {
            MTX_Copy43To44_(NNS_G3dGlbGetWV(), m2);
            MTX_Concat44(m, m2, m);
        } else if (data_027e00c8.n.flag & 2) {
            MTX_Copy43To44_(data_027e0114, m3);
            MTX_Concat44(m, m3, m);
        }
        trans[0] = m[12];
        trans[1] = m[13];
        trans[2] = m[14];
        scale[0] = VEC_Mag(&m[0]);
        scale[1] = VEC_Mag(&m[4]);
        scale[2] = VEC_Mag(&m[8]);
        if (m[5] != 0 || m[6] != 0) {
            VEC_Normalize(&m[4], rot + 3);
            rot[7] = -rot[5];
            rot[8] = rot[4];
        } else {
            VEC_Normalize(&m[8], rot + 6);
            rot[5] = -rot[7];
            rot[4] = rot[8];
        }
        if (data_027e00c8.n.flag & 1) {
            *(volatile u32 *)0x04000400 = 0x00171012;
            MIi_CpuSend32(data_0213be0c, (void *)0x04000400, 8);
            MIi_CpuSend32(NNS_G3dGlbGetInvWV(), (void *)0x04000400, 0x30);
            *(volatile u32 *)0x04000400 = 0x1b19;
            MIi_CpuSend32(data_0213be14, (void *)0x04000400, 0x3c);
        } else if (data_027e00c8.n.flag & 2) {
            *(volatile u32 *)0x04000400 = 0x00171012;
            MIi_CpuSend32(data_0213be0c, (void *)0x04000400, 8);
            MIi_CpuSend32(NNS_G3dGlbGetInvV(), (void *)0x04000400, 0x30);
            *(volatile u32 *)0x04000400 = 0x1b19;
            MIi_CpuSend32(data_0213be14, (void *)0x04000400, 0x3c);
        } else {
            MIi_CpuSend32(data_0213be08, (void *)0x04000400, 0x48);
        }
    }
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cb2c(rs);
        skip = rs->flag & 0x40;
    } else {
        skip = 0;
    }
    if (opt == 0x20 || opt == 0x60) {
        cmdlen++;
        if (skip == 0 && (rs->flag & 0x100) == 0) {
            u32 v = rs->c[2];
            NNS_G3dGeBufferOP_N(0x13, &v, 1);
        }
    }
    rs->c += cmdlen;
}
