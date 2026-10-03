// mwcc-flags: -nothumb -O4,p


// mwcc-flags: -nothumb -O4,p
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
extern s8 data_02135d5c[];
extern void G3X_Init(void);
extern void func_02104338(void);
extern void func_01ff8ccc(void);
extern BOOL G3X_GetClipMtx(void *);
extern BOOL G3X_GetVectorMtx(void *);
extern void MTX_Copy44To43_(void *, void *);
extern void func_02106054(void *, u32, void *);
extern void func_0210609c(void *, u32, void *);
extern void func_021060e4(void *, u32, void *);
extern void func_0210612c(void *, u32, void *);
typedef struct Cb {
    u8 pad0[0x10];
    struct Cb *next;    // 0x10
    u8 pad14[5];
    u8 n;               // 0x19
    u16 tbl[1];         // 0x1a
} Cb;
extern void (*data_0213bd40[])(void *);
extern u8 *func_02104140(void);
extern u8 *func_021040fc(void);
extern u8 *func_021041e8(void);
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
typedef struct MtxEnt { s32 m[25]; } MtxEnt;
extern MtxEnt data_021f70c4[];
extern MtxEnt data_021f7104[];
extern void MIi_CpuClearFast(u32, void *, u32);
extern void G3_MultMtx43(void *);
extern void G3_MultMtx33(void *);
extern void G3_LoadMtx43(void *);
typedef struct RSBits { u8 pad[0xcc]; u32 bits[8]; } RSBits;
static inline BOOL BitVecCheck(const u32 *vec, u32 idx) { return (BOOL)(vec[idx >> 5] & (1 << (idx & 31))); }
static inline void BitVecSet(u32 *vec, u32 idx) { vec[idx >> 5] |= 1 << (idx & 31); }
// NNS_G3dFuncSbc_NODEMIX
#define ACC(d, w, v) d += ((s64)(w) * (v)) >> 12
void func_02104d80(RS *rs)
{
    u32 had;
    s64 pw;
    u8 *e;
    u32 i;
    MtxEnt *cur;
    MtxEnt *prev;
    u32 idx;
    s32 w;
    u32 off;
    u8 *mdl = *(u8 **)((u8 *)rs->obj + 4);
    u8 *c = rs->c;
    u8 *inv = mdl + *(u32 *)(mdl + 0x10);
    u32 n = c[2];
    s32 pos[12];
    s32 nrm[9];
    volatile u32 zero = 0;
    e = c + 3;
    pw = 0;
    MIi_CpuClearFast(zero, pos, 0x54);
    func_01ff8ccc();
    *(volatile u32 *)0x04000440 = 0;
    *(volatile u32 *)0x0400044c = 1;
    *(volatile u32 *)0x04000454 = 0;
    *(volatile u32 *)0x04000440 = 2;
    for (i = 0; i < n; i++) {
        idx = e[1];
        off = idx * 100;
        had = BitVecCheck(((RSBits *)rs)->bits, idx);
        cur = (MtxEnt *)((u8 *)data_021f70c4 + off);
        if (had == 0) {
            BitVecSet(((RSBits *)rs)->bits, idx);
            *(volatile u32 *)0x04000450 = e[0];
            *(volatile u32 *)0x04000440 = 1;
            G3_MultMtx43(inv + idx * 0x54);
        }
        if (i != 0) {
            ACC(nrm[0], pw, prev->m[0]);
            ACC(nrm[1], pw, prev->m[1]);
            ACC(nrm[2], pw, prev->m[2]);
            ACC(nrm[3], pw, prev->m[3]);
            ACC(nrm[4], pw, prev->m[4]);
            ACC(nrm[5], pw, prev->m[5]);
            ACC(nrm[6], pw, prev->m[6]);
            ACC(nrm[7], pw, prev->m[7]);
            ACC(nrm[8], pw, prev->m[8]);
        }
        if (had == 0) {
            while (G3X_GetClipMtx(cur) != 0) {
            }
            *(volatile u32 *)0x04000440 = 2;
            G3_MultMtx33(inv + idx * 0x54 + 0x30);
        }
        prev = (MtxEnt *)((u8 *)data_021f7104 + off);
        w = e[2] << 4;
        ACC(pos[0], w, cur->m[0]);
        ACC(pos[1], w, cur->m[1]);
        ACC(pos[2], w, cur->m[2]);
        ACC(pos[3], w, cur->m[4]);
        ACC(pos[4], w, cur->m[5]);
        ACC(pos[5], w, cur->m[6]);
        ACC(pos[6], w, cur->m[8]);
        ACC(pos[7], w, cur->m[9]);
        ACC(pos[8], w, cur->m[10]);
        ACC(pos[9], w, cur->m[12]);
        ACC(pos[10], w, cur->m[13]);
        ACC(pos[11], w, cur->m[14]);
        pw = w;
        e += 3;
        if (had == 0) {
            while (G3X_GetVectorMtx(prev) != 0) {
            }
        }
    }
    ACC(nrm[0], pw, prev->m[0]);
    ACC(nrm[1], pw, prev->m[1]);
    ACC(nrm[2], pw, prev->m[2]);
    ACC(nrm[3], pw, prev->m[3]);
    ACC(nrm[4], pw, prev->m[4]);
    ACC(nrm[5], pw, prev->m[5]);
    ACC(nrm[6], pw, prev->m[6]);
    ACC(nrm[7], pw, prev->m[7]);
    ACC(nrm[8], pw, prev->m[8]);
    G3_LoadMtx43(nrm);
    *(volatile u32 *)0x04000440 = 1;
    G3_LoadMtx43(pos);
    *(volatile u32 *)0x04000440 = 0;
    *(volatile u32 *)0x04000450 = 1;
    *(volatile u32 *)0x04000440 = 2;
    *(volatile u32 *)0x0400044c = rs->c[1];
    rs->c += (rs->c[2] + 1) * 3;
}
