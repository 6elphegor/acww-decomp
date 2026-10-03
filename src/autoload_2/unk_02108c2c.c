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
extern void FX_DivAsync(s32, s32);    // FX_DivAsync
extern s32 FX_GetDivResult(void);         // FX_GetDivResult
static inline s32 FxMul(s32 a, s32 b) { return (s32)(((s64)a * b) >> 12); }

void func_02108c2c(s32 *m, const MatAnmResult *anm)
{
    s32 ss_cos, ss_sin, st_cos, st_sin;
    s32 LampLights, LightLevel;
    s32 tmpW = anm->origWidth << 12;
    s32 tmpH = anm->origHeight << 12;
    FX_DivAsync(tmpH, tmpW);
    ss_cos = FxMul(anm->scaleS, anm->cosR);
    ss_sin = FxMul(anm->scaleS, anm->sinR);
    st_cos = FxMul(anm->scaleT, anm->cosR);
    st_sin = FxMul(anm->scaleT, anm->sinR);
    m[0] = ss_cos;
    m[5] = st_cos;
    m[1] = st_sin * FX_GetDivResult() >> 12;
    FX_DivAsync(tmpW, tmpH);
    LampLights = (-(s32)anm->origWidth << 11) - anm->transS * anm->origWidth;
    LightLevel = anm->transT * anm->origHeight + (-(s32)anm->origHeight << 11);
    m[12] = (s32)(((s64)ss_cos * LampLights - (s64)ss_sin * LightLevel) >> 8) + (anm->origWidth << 15);
    m[13] = (s32)(((s64)st_sin * LampLights + (s64)st_cos * LightLevel) >> 8) + (anm->origHeight << 15);
    m[4] = (-ss_sin * FX_GetDivResult()) >> 12;
}
