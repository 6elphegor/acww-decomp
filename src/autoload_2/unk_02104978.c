// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d SBC command handlers: ENVMAP, CALLDL.
// autoload_2 0x02104978-0x02104d80. ARM, mwcc 1.2/base, -O4,p.
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
extern void func_01ff8bd0(u32, void *, u32);
extern void func_01ff8d4c(void *, u32);

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
extern u32 data_0213bd58[2];
extern u32 data_0213bd5c;
extern void func_02105e5c(void *, void *);

// NNS_G3dFuncSbc_CALLDL (9-byte SBC command: display list offset + size, sent via func_01ff8d4c)
static inline u32 rd32(u8 *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24); }
void func_02104c9c(RS *rs)
{
    u32 timing;
    u32 skip;
    timing = rs->cb34 ? rs->t96 : 0;
    if (timing == 1) {
        rs->flag &= ~0x40;
        rs->cb34(rs);
        timing = rs->cb34 ? rs->t96 : 0;
        skip = rs->flag & 0x40;
    } else {
        skip = 0;
    }
    if (!(rs->flag & 0x100) && !skip) {
        u8 *c = rs->c;
        func_01ff8d4c(c + rd32(c + 1), rd32(c + 5));
    }
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cb34(rs);
    }
    rs->c += 9;
}

// NNS_G3dFuncSbc_ENVMAP (3-byte SBC command: material id; texgen = normal source, texture matrix from camera)
#define CB_TIMING(rs, cb, t) ((rs)->cb ? (rs)->t : 0)
void func_02104978(RS *rs)
{
    u32 timing;
    u32 skip;
    u32 mode;
    u32 st;
    u32 m1;
    u32 m3;
    u32 m4;
    s32 mtx[9];
    V3 sc;
    if ((rs->flag & 0x200) == 0 && (rs->flag & 1)) {
        u32 w = rs->mat_b0[4];
        if ((w & 0xc0000000) != 0x80000000) {
            rs->mat_b0[4] &= ~0xc0000000;
            rs->mat_b0[4] |= 0x80000000;
            data_0213bd58[1] = rs->mat_b0[4];
            func_01ff8bd0(data_0213bd58[0], &data_0213bd5c, 1);
        }
        mode = 3;
        func_01ff8bd0(0x10, &mode, 1);
        timing = CB_TIMING(rs, cb3c, t98);
        if (timing == 1) {
            rs->flag &= ~0x40;
            rs->cb3c(rs);
            timing = CB_TIMING(rs, cb3c, t98);
            skip = rs->flag & 0x40;
        } else {
            skip = 0;
        }
        if (skip == 0) {
            u16 *m = (u16 *)rs->mat_b0;
            u32 t = m[0x2c / 2];
            u32 s = m[0x2e / 2];
            sc.x = t << 15;
            sc.y = -s << 15;
            sc.z = 0x10000;
            func_01ff8bd0(0x1b, &sc, 3);
            st = (u16)(s16)(t << 3) | ((u16)(s16)(s << 3) << 16);
            func_01ff8bd0(0x22, &st, 1);
        }
        if (timing == 2) {
            rs->flag &= ~0x40;
            rs->cb3c(rs);
            timing = CB_TIMING(rs, cb3c, t98);
            skip = rs->flag & 0x40;
        } else {
            skip = 0;
        }
        if (skip == 0) {
            u8 *d = rs->mat_d8 + 4;
            u8 *dict = d + *(u16 *)(rs->mat_d8 + 10);
            u8 *mat = rs->mat_d8 + *(u32 *)(dict + *(u16 *)dict * rs->c[1] + 4);
            u16 f = *(u16 *)(mat + 0x1e);
            if (f & 0x2000) {
                u8 *p = mat + 0x2c;
                if ((f & 2) == 0) p += 8;
                if ((f & 4) == 0) p += 4;
                if ((f & 8) == 0) p += 8;
                func_01ff8bd0(0x18, p, 16);
            }
        }
        if (timing == 3) {
            rs->flag &= ~0x40;
            rs->cb3c(rs);
            skip = rs->flag & 0x40;
        } else {
            skip = 0;
        }
        if (skip == 0) {
            m1 = 2;
            func_01ff8bd0(0x10, &m1, 1);
            func_02105e5c(0, mtx);
            m3 = 3;
            func_01ff8bd0(0x10, &m3, 1);
            if (data_027e00c8.n.flag & 1) {
                func_01ff8bd0(0x1a, data_027e0114, 9);
                func_01ff8bd0(0x1a, data_027e0184, 9);
                func_01ff8bd0(0x1a, mtx, 9);
            } else if (data_027e00c8.n.flag & 2) {
                func_01ff8bd0(0x1a, data_027e0114, 9);
                func_01ff8bd0(0x1a, mtx, 9);
            } else {
                func_01ff8bd0(0x1a, mtx, 9);
            }
        }
        m4 = 2;
        func_01ff8bd0(0x10, &m4, 1);
    }
    rs->c += 3;
}
