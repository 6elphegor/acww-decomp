// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d binary-resource accessors: material setters/getters (NNS_G3dMdlSet*) and file block accessors.
// autoload_2 0x02106020-0x02106300. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef long long s64;
typedef int BOOL;
#define NULL 0

// material accessors: res = NNSG3dResMdl-like model set (res+8 -> material dict at +4/+10)
static inline u32 *MatEnt(u8 *res, u32 i)
{
    u8 *b = res + *(u32 *)(res + 8);
    u8 *p = b + 4 + *(u16 *)(b + 10);
    return (u32 *)(b + *(u32 *)(p + *(u16 *)p * i + 4));
}

static inline u32 *MatEntI(u8 *b, u32 i)
{
    u8 *p = b + 4 + *(u16 *)(b + 10);
    return (u32 *)(b + *(u32 *)(p + *(u16 *)p * i + 4));
}

// NNSi_G3dGetBlockByIdx-like: file header + offset table[idx] (u32 table at hdr+hdr[12])
u8 *func_021062ec(u8 *p, u32 i)
{
    u8 *b = p + *(u16 *)(p + 12);
    return p + ((u32 *)b)[i];
}

// first data block of a resource file (NNS_G3dGetMdlSet)
u8 *func_021062dc(u8 *p)
{
    return p + *(u32 *)(p + *(u16 *)(p + 12));
}

// NNS_G3dGetTex: TEX0 block of a BTX0 file / second block of a BMD0 file
u8 *func_0210629c(u8 *p)
{
    u8 *b = p + *(u16 *)(p + 12);
    if (*(u16 *)(p + 14) == 1) {
        if (*(u32 *)p == 0x30585442) {
            return p + *(u32 *)b;
        }
        return NULL;
    }
    return p + ((u32 *)b)[1];
}

// set/clear bits in the material flag (u16 at +0x1e) of every material (NNS_G3dMdlUse*/NotUse*)
void func_0210622c(u8 *res, BOOL on, u32 mask)
{
    u32 n = res[0x18];
    u32 i;
    u8 *b = res + *(u32 *)(res + 8);
    for (i = 0; i < n; i++) {
        u16 *m = (u16 *)MatEntI(b, i);
        if (on) {
            m[15] |= mask;
        } else {
            m[15] &= ~mask;
        }
    }
}

// set/clear bits in the material polyAttrMask (+0x10) of every material
void func_021061bc(u8 *res, BOOL on, u32 mask)
{
    u32 n = res[0x18];
    u32 i;
    u8 *b = res + *(u32 *)(res + 8);
    for (i = 0; i < n; i++) {
        u32 *m = MatEntI(b, i);
        if (on) {
            m[4] |= mask;
        } else {
            m[4] &= ~mask;
        }
    }
}

// NNS_G3dMdlSetMdlDiffuse (diffAmb bits 0-14)
void func_02106174(u8 *res, u32 i, u32 v)
{
    u32 *m = MatEnt(res, i);
    m[1] = (m[1] & ~0x7fff) | v;
}

// NNS_G3dMdlSetMdlEmission (specEmi bits 16-30)
void func_0210612c(u8 *res, u32 i, u32 v)
{
    u32 *m = MatEnt(res, i);
    m[2] = (m[2] & 0x8000ffff) | (v << 16);
}

// NNS_G3dMdlSetMdlLightEnableFlag (polyAttr bits 0-3)
void func_021060e4(u8 *res, u32 i, u32 v)
{
    u32 *m = MatEnt(res, i);
    m[3] = (m[3] & ~0xf) | v;
}

// NNS_G3dMdlSetMdlPolygonID (polyAttr bits 24-29)
void func_0210609c(u8 *res, u32 i, u32 v)
{
    u32 *m = MatEnt(res, i);
    m[3] = (m[3] & ~0x3f000000) | (v << 24);
}

// NNS_G3dMdlSetMdlAlpha (polyAttr bits 16-20)
void func_02106054(u8 *res, u32 i, u32 v)
{
    u32 *m = MatEnt(res, i);
    m[3] = (m[3] & ~0x1f0000) | (v << 16);
}

// NNS_G3dMdlGetMdlAlpha (polyAttr bits 16-20)
u32 func_02106020(u8 *res, u32 i)
{
    u32 *m = MatEnt(res, i);
    return (m[3] & 0x1f0000) >> 16;
}
