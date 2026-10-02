// mwcc-flags: -nothumb -O4,p


// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef long long s64;
typedef struct MatAnmResult {
    u32 flag;               // 0x00
    u32 prm[5];             // 0x04
    s32 scaleS, scaleT;     // 0x18
    s16 sinR, cosR;         // 0x20
    s32 transS, transT;     // 0x24
    u16 origWidth, origHeight;  // 0x2c
    s32 magW, magH;         // 0x30
} MatAnmResult;

// NNS g3d texture SRT matrix: scale + translation
void func_02108aac(s32 *m, const MatAnmResult *anm)
{
    s32 A, B;
    m[0] = anm->scaleS;
    m[5] = anm->scaleT;
    m[1] = 0;
    A = (-(s32)anm->origWidth << 11) - anm->transS * anm->origWidth;
    B = anm->transT * anm->origHeight + (-(s32)anm->origHeight << 11);
    m[12] = (s32)(((s64)anm->scaleS * A) >> 8) + (anm->origWidth << 15);
    m[13] = (s32)(((s64)anm->scaleT * B) >> 8) + (anm->origHeight << 15);
    m[4] = 0;
}
