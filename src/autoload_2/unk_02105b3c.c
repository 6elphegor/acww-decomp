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
typedef struct MatArg {
    u32 flag;           // 0x00
    u8 pad04[0x14];
    s32 scaleS, scaleT; // 0x18
    s16 rotSin, rotCos; // 0x20
    s32 transS, transT; // 0x24
    u16 w, h;           // 0x2c
    u32 texParam;       // 0x30
    u32 plttBase;       // 0x34
} MatArg;

// NNS_G3dDraw1Mat1Shp
void func_02105b3c(u8 *mdl, u32 matIdx, u32 shpIdx, BOOL sendMat)
{
    u32 buf[7];
    MatArg a;
    s32 sc1[3];
    s32 sc2[3];
    s32 ps = *(s32 *)(mdl + 0x1c);
    if (ps != 0x1000) {
        sc1[0] = ps;
        sc1[1] = ps;
        sc1[2] = ps;
        func_01ff8bd0(0x1b, sc1, 3);
    }
    if (sendMat != 0) {
        u8 *m = mdl + *(u32 *)(mdl + 8);
        u8 *d = m + 4;
        u8 *dict = d + *(u16 *)(m + 10);
        u8 *mat = m + *(u32 *)(dict + *(u16 *)dict * matIdx + 4);
        if ((*(u32 *)(mat + 12) & 0x1f0000) == 0) {
            return;
        }
        buf[0] = 0x00293130;
        buf[1] = *(u32 *)(mat + 4);
        buf[2] = *(u32 *)(mat + 8);
        {
            u32 pa = *(u32 *)(mat + 12);
            buf[3] = pa;
            if (*(u16 *)(mat + 0x1e) & 0x20) {
                buf[3] = pa & ~0x1f0000;
            }
        }
        buf[4] = 0x2b2a;
        buf[5] = *(u32 *)(mat + 0x14);
        buf[6] = *(u16 *)(mat + 0x1c);
        func_01ff8bd0(buf[0], &buf[1], 6);
        if (*(u16 *)(mat + 0x1e) & 1) {
            void (*fn)(void *) = data_0213bd40[mdl[0x16]];
            u8 *p;
            a.flag = 8;
            a.w = *(u16 *)(mat + 0x20);
            a.h = *(u16 *)(mat + 0x22);
            a.texParam = *(u32 *)(mat + 0x24);
            a.plttBase = *(u32 *)(mat + 0x28);
            p = mat + 0x2c;
            if (!(*(u16 *)(mat + 0x1e) & 2)) {
                const s32 *q = (const s32 *)p;
                a.scaleS = *(q + 0);
                a.scaleT = *(q + 1);
                p += 2 * sizeof(s32);
            } else {
                a.flag |= 1;
            }
            if (!(*(u16 *)(mat + 0x1e) & 4)) {
                const s16 *q = (const s16 *)p;
                a.rotSin = *(q + 0);
                a.rotCos = *(q + 1);
                p += 2 * sizeof(s16);
            } else {
                a.flag |= 2;
            }
            if ((*(u16 *)(mat + 0x1e) & 8) == 0) {
                a.transS = *(s32 *)p;
                a.transT = *(s32 *)(p + 4);
            } else {
                a.flag |= 4;
            }
            fn(&a);
        }
    }
    {
        u8 *s = mdl + *(u32 *)(mdl + 12);
        u8 *dict = s + *(u16 *)(s + 6);
        u8 *shp = s + *(u32 *)(dict + *(u16 *)dict * shpIdx + 4);
        func_01ff8d4c(shp + *(u32 *)(shp + 8), *(u32 *)(shp + 12));
    }
    ps = *(s32 *)(mdl + 0x20);
    if (ps != 0x1000) {
        sc2[0] = ps;
        sc2[1] = ps;
        sc2[2] = ps;
        func_01ff8bd0(0x1b, sc2, 3);
    }
}
