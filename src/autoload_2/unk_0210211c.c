// mwcc-flags: -nothumb -O4,p


typedef unsigned int u32;

// number of OBJs (64/32/16/8 pixel sizes) needed to cover an area of x by y characters
u32 NNSi_G2dCalcRequiredOBJ(u32 x, u32 y) {
    u32 a = x >> 3;
    u32 b = y >> 3;
    u32 xh = (x & 4) >> 2;
    u32 yh = (y & 4) >> 2;
    u32 xl = ((x & 2) >> 1) + (x & 1);
    u32 yl = ((y & 2) >> 1) + (y & 1);
    u32 n = 0;
    n += a * b;
    n += b * (xh + (xl << 1));
    n += a * (yh + (yl << 1));
    n += (xl + xh) * (yl + yh);
    return n;
}
