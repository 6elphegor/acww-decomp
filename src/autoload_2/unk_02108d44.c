// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef int BOOL;
#define NULL 0

typedef struct GeBuf4 {
    u32 cmd;
    s32 w[18];
} GeBuf4;

extern void func_01ff8bd0(u32 cmd, void *args, u32 n);
extern void func_01ffc374(s32 num, s32 den);
extern s32 func_01ffc464(void);
extern void (*data_0213bef0[8])(s32 *, u32 *);


static inline s32 FxMul(s32 a, s32 b)
{
    return (s32)(((long long)a * b) >> 12);
}

// NNS g3d material SRT (Maya-style): scale + rotation
void func_02108fe8(s32 *o, u8 *s)
{
    u32 w = *(u16 *)(s + 44);
    u32 h = *(u16 *)(s + 46);
    s32 num = w << 12;
    s32 den = h << 12;
    s32 sn, sy, r, t, cs, sx;
    func_01ffc374(den, num);
    cs = *(s16 *)(s + 34);
    sx = *(s32 *)(s + 24);
    sn = *(s16 *)(s + 32);
    sy = *(s32 *)(s + 28);
    r = FxMul(sx, sn);
    t = FxMul(sy, cs);
    o[0] = FxMul(sx, cs);
    o[5] = t;
    o[1] = FxMul(sy, sn) * func_01ffc464() >> 12;
    func_01ffc374(num, den);
    o[12] = (*(u16 *)(s + 44) * r) << 4;
    o[13] = (-(s32)*(u16 *)(s + 46) * (t - 0x1000)) << 4;
    o[4] = (-r * func_01ffc464()) >> 12;
}

// NNS g3d material SRT (Maya-style): rotation only
void func_02108f38(s32 *o, u8 *s)
{
    u32 w = *(u16 *)(s + 44);
    u32 h = *(u16 *)(s + 46);
    s32 num = w << 12;
    s32 den = h << 12;
    func_01ffc374(den, num);
    o[0] = *(s16 *)(s + 34);
    o[5] = *(s16 *)(s + 34);
    o[1] = (*(s16 *)(s + 32) * func_01ffc464()) >> 12;
    func_01ffc374(num, den);
    o[12] = (*(u16 *)(s + 44) * *(s16 *)(s + 32)) << 4;
    o[13] = (-(s32)*(u16 *)(s + 46) * (*(s16 *)(s + 34) - 0x1000)) << 4;
    o[4] = (-*(s16 *)(s + 32) * func_01ffc464()) >> 12;
}

// NNS g3d material SRT (Maya-style): scale only
void func_02108ef8(s32 *o, u8 *s)
{
    o[0] = *(s32 *)(s + 24);
    o[5] = *(s32 *)(s + 28);
    o[1] = 0;
    o[12] = 0;
    o[13] = (-(s32)*(u16 *)(s + 46) * (*(s32 *)(s + 28) - 0x1000)) << 4;
    o[4] = 0;
}

// NNS g3d material SRT (Maya-style): identity
void func_02108ed4(s32 *o)
{
    o[0] = 0x1000;
    o[1] = 0;
    o[4] = 0;
    o[5] = 0x1000;
    o[12] = 0;
    o[13] = 0;
}

// NNS g3d: build the 4x4 texture matrix, variant that forces unit scale / zero rotation / zero translation per flag bits
void func_02108d44(u32 *a)
{
    GeBuf4 s;
    if (a[0] & 8) {
        s.cmd = 0x00101610;
    } else {
        s.cmd = 0x00101810;
    }
    s.w[0] = 3;
    s.w[17] = 2;
    s.w[16] = 0x1000;
    s.w[15] = 0;
    s.w[12] = 0;
    s.w[11] = 0;
    s.w[10] = 0;
    s.w[9] = 0;
    s.w[8] = 0;
    s.w[7] = 0;
    s.w[4] = 0;
    s.w[3] = 0;
    if (a[0] & 1) {
        a[7] = 0x1000;
        a[6] = a[7];
    }
    if (a[0] & 2) {
        *(u16 *)((u8 *)a + 34) = 0x1000;
        *(u16 *)((u8 *)a + 32) = 0;
    }
    if (a[0] & 4) {
        a[10] = 0;
        a[9] = a[10];
    }
    data_0213bef0[a[0] & 7](&s.w[1], a);
    if (a[12] != 0x1000) {
        s.w[1] = FxMul(a[12], s.w[1]);
        s.w[2] = FxMul(a[12], s.w[2]);
        s.w[13] = FxMul(a[12], s.w[13]);
    }
    if (a[13] != 0x1000) {
        s.w[5] = FxMul(a[13], s.w[5]);
        s.w[6] = FxMul(a[13], s.w[6]);
        s.w[14] = FxMul(a[13], s.w[14]);
    }
    func_01ff8bd0(s.cmd, (u32 *)&s + 1, 18);
}

