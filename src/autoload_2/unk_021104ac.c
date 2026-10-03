// mwcc-flags: -nothumb -O4,p
// NitroSDK graphics (G2/G3/GX), autoload_2 0x021104ac-0x02110c04. ARM code, mwcc 1.2/base with -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;

#define R8(a) (*(volatile u8 *)(a))
#define R16(a) (*(volatile u16 *)(a))
#define R32(a) (*(volatile u32 *)(a))

extern void MI_Copy36B(const void *src, void *dst);
extern void GX_SendFifo48B(const void *src, void *dst);

// G3_LoadMtx43
void G3_LoadMtx43(const void *m) {
    R32(0x04000400) = 0x17;
    GX_SendFifo48B(m, (void *)0x04000400);
}
// G3_MultMtx43
void G3_MultMtx43(const void *m) {
    R32(0x04000400) = 0x19;
    GX_SendFifo48B(m, (void *)0x04000400);
}
// G3_MultMtx33
void G3_MultMtx33(const void *m) {
    R32(0x04000400) = 0x1a;
    MI_Copy36B(m, (void *)0x04000400);
}
// G2x_SetBGyAffine_ (PA/PB/PC/PD/DX/DY from a MtxFx22 plus centre and position)
void G2x_SetBGyAffine_(u32 *out, const s32 *m, s32 cx, s32 cy, s32 x, s32 y) {
    s32 dx, dy, px, py;
    out[0] = (u16)(s16)(m[0] >> 4) | ((u16)(s16)(m[1] >> 4) << 16);
    out[1] = (u16)(s16)(m[2] >> 4) | ((u16)(s16)(m[3] >> 4) << 16);
    dx = x - cx;
    dy = y - cy;
    px = m[0] * dx + m[1] * dy + (cx << 12);
    py = m[2] * dx + m[3] * dy + (cy << 12);
    out[2] = px >> 4;
    out[3] = py >> 4;
}
// BG control helper (G2x_SetBGyControl-like, exact name unverified): builds a packed control word
void G2x_SetBlendAlpha_(u32 *p, u32 a, u32 b, u32 c, u32 d) {
    *p = ((a | 0x40) | (b << 8)) | ((c | (d << 8)) << 16);
}
// BG control helper (G2x_SetBGyControl-like, exact name unverified)
void G2x_SetBlendBrightness_(u16 *p, u32 a, s32 v) {
    if (v < 0) {
        p[0] = a | 0xc0;
        p[2] = -v;
    } else {
        p[0] = a | 0x80;
        p[2] = v;
    }
}
// BG control helper (G2x_SetBGyControl-like, exact name unverified)
void G2x_SetBlendBrightnessExt_(u16 *p, u32 a, u32 b, u32 c, u32 d, s32 v) {
    p[1] = c | (d << 8);
    if (v < 0) {
        p[0] = a | 0xc0 | (b << 8);
        p[2] = -v;
    } else {
        p[0] = a | 0x80 | (b << 8);
        p[2] = v;
    }
}
// BG control helper (G2x_SetBGyControl family, exact name unverified): sets the 0x80/0xc0 bits by the sign of the value
void G2x_ChangeBlendBrightness_(u16 *p, s32 v) {
    u16 c = p[0];
    if (v < 0) {
        if ((c & 0xc0) == 0x80) p[0] = (c & ~0xc0) | 0xc0;
        p[2] = -v;
    } else {
        if ((c & 0xc0) == 0xc0) p[0] = (c & ~0xc0) | 0x80;
        p[2] = v;
    }
}
// G2_GetBG0ScrPtr
void *G2_GetBG0ScrPtr(void) {
    u32 scr = (R16(0x04000008) & 0x1f00) >> 8;
    u32 base = ((R32(0x04000000) & 0x38000000) >> 27) << 16;
    return (void *)(0x06000000 + base + (scr << 11));
}
// G2S_GetBG0ScrPtr
void *G2S_GetBG0ScrPtr(void) {
    return (void *)(0x06200000 + (((R16(0x04001008) & 0x1f00) >> 8) << 11));
}
// G2_GetBG1ScrPtr
void *G2_GetBG1ScrPtr(void) {
    u32 scr = (R16(0x0400000a) & 0x1f00) >> 8;
    u32 base = ((R32(0x04000000) & 0x38000000) >> 27) << 16;
    return (void *)(0x06000000 + base + (scr << 11));
}
// G2S_GetBG1ScrPtr
void *G2S_GetBG1ScrPtr(void) {
    return (void *)(0x06200000 + (((R16(0x0400100a) & 0x1f00) >> 8) << 11));
}
// G2_GetBG2ScrPtr
void *G2_GetBG2ScrPtr(void) {
    u32 mode = R32(0x04000000) & 7;
    u32 cnt = R16(0x0400000c);
    u32 base = ((R32(0x04000000) & 0x38000000) >> 27) << 16;
    u32 scr = (cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0: case 1: case 2: case 3: case 4:
        return (void *)(0x06000000 + base + (scr << 11));
    case 5:
        if (cnt & 0x80) return (void *)(0x06000000 + (scr << 14));
        return (void *)(0x06000000 + base + (scr << 11));
    case 6:
        return (void *)0x06000000;
    default:
        return 0;
    }
}
// G2S_GetBG2ScrPtr
void *G2S_GetBG2ScrPtr(void) {
    u32 mode = R32(0x04001000) & 7;
    u32 cnt = R16(0x0400100c);
    u32 scr = (cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0: case 1: case 2: case 3: case 4:
        return (void *)(0x06200000 + (scr << 11));
    case 5:
        if (cnt & 0x80) return (void *)(0x06200000 + (scr << 14));
        return (void *)(0x06200000 + (scr << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
// G2_GetBG3ScrPtr
void *G2_GetBG3ScrPtr(void) {
    u32 mode = R32(0x04000000) & 7;
    u32 cnt = R16(0x0400000e);
    u32 base = ((R32(0x04000000) & 0x38000000) >> 27) << 16;
    u32 scr = (cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0: case 1: case 2:
        return (void *)(0x06000000 + base + (scr << 11));
    case 3: case 4: case 5:
        if (cnt & 0x80) return (void *)(0x06000000 + (scr << 14));
        return (void *)(0x06000000 + base + (scr << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
// G2S_GetBG3ScrPtr
void *G2S_GetBG3ScrPtr(void) {
    u32 mode = R32(0x04001000) & 7;
    u32 cnt = R16(0x0400100e);
    u32 scr = (cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0: case 1: case 2:
        return (void *)(0x06200000 + (scr << 11));
    case 3: case 4: case 5:
        if (cnt & 0x80) return (void *)(0x06200000 + (scr << 14));
        return (void *)(0x06200000 + (scr << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
// G2_GetBG0CharPtr
void *G2_GetBG0CharPtr(void) {
    u32 cnt = (R16(0x04000008) & 0x3c) >> 2;
    u32 base = ((R32(0x04000000) & 0x07000000) >> 24) << 16;
    return (void *)(0x06000000 + base + (cnt << 14));
}
// G2S_GetBG0CharPtr
void *G2S_GetBG0CharPtr(void) {
    return (void *)(0x06200000 + (((R16(0x04001008) & 0x3c) >> 2) << 14));
}
// G2_GetBG1CharPtr
void *G2_GetBG1CharPtr(void) {
    u32 cnt = (R16(0x0400000a) & 0x3c) >> 2;
    u32 base = ((R32(0x04000000) & 0x07000000) >> 24) << 16;
    return (void *)(0x06000000 + base + (cnt << 14));
}
// G2S_GetBG1CharPtr
void *G2S_GetBG1CharPtr(void) {
    return (void *)(0x06200000 + (((R16(0x0400100a) & 0x3c) >> 2) << 14));
}
// G2_GetBG2CharPtr
void *G2_GetBG2CharPtr(void) {
    s32 mode = R32(0x04000000) & 7;
    u32 cnt = R16(0x0400000c);
    if (mode < 5 || !(cnt & 0x80)) {
        u32 base = ((R32(0x04000000) & 0x07000000) >> 24) << 16;
        return (void *)(0x06000000 + base + (((cnt & 0x3c) >> 2) << 14));
    }
    return 0;
}
// G2S_GetBG2CharPtr
void *G2S_GetBG2CharPtr(void) {
    s32 mode = R32(0x04001000) & 7;
    u32 cnt = R16(0x0400100c);
    if (mode < 5 || !(cnt & 0x80)) return (void *)(0x06200000 + (((cnt & 0x3c) >> 2) << 14));
    return 0;
}
// G2_GetBG3CharPtr
void *G2_GetBG3CharPtr(void) {
    s32 mode = R32(0x04000000) & 7;
    u32 cnt = R16(0x0400000e);
    if (mode < 3 || (mode < 6 && !(cnt & 0x80))) {
        u32 base = ((R32(0x04000000) & 0x07000000) >> 24) << 16;
        return (void *)(0x06000000 + base + (((cnt & 0x3c) >> 2) << 14));
    }
    return 0;
}
// G2S_GetBG3CharPtr
void *G2S_GetBG3CharPtr(void) {
    s32 mode = R32(0x04001000) & 7;
    u32 cnt = R16(0x0400100e);
    if (mode < 3 || (mode < 6 && !(cnt & 0x80))) return (void *)(0x06200000 + (((cnt & 0x3c) >> 2) << 14));
    return 0;
}
// GX_ResetBank-style (writes the VRAMCNT enable bit 0x80 for each bank bit in the mask; exact SDK name unverified)
void GX_VRAMCNT_SetLCDC_(u32 mask) {
    if (mask & 0x001) R8(0x04000240) = 0x80;
    if (mask & 0x002) R8(0x04000241) = 0x80;
    if (mask & 0x004) R8(0x04000242) = 0x80;
    if (mask & 0x008) R8(0x04000243) = 0x80;
    if (mask & 0x010) R8(0x04000244) = 0x80;
    if (mask & 0x020) R8(0x04000245) = 0x80;
    if (mask & 0x040) R8(0x04000246) = 0x80;
    if (mask & 0x080) R8(0x04000248) = 0x80;
    if (mask & 0x100) R8(0x04000249) = 0x80;
}
