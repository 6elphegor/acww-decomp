// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d BG screen helpers (fill rectangle of screen entries): autoload_2 0x0210217c-0x021022ac. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

void func_0210217c(u16 *dst, s32 w, s32 h, s32 stride, s32 idx, s32 pal);

// NNS g2d screen helper: same fill at (x, y) of a screen that is scrW entries wide; screens wider than 32 are stored as
// 32x32-entry blocks (256x256 BG pages), handled by the wrap logic in the else branch
void func_021021e8(u16 *scrn, s32 w, s32 h, s32 x, s32 y, s32 scrW, s32 idx, s32 pal) {
    if (scrW <= 32) {
        func_0210217c(scrn + (scrW * y + x), w, h, scrW, idx, pal);
    } else {
        u16 pl;
        s32 xe, ye, xx;
        ye = y + h;
        xe = x + w;
        pl = (u16)(pal << 12);
        for (; y < ye; y++) {
            u16 *row;
            row = scrn + ((y < 32) ? y : y + 32) * 32;
            for (xx = x; xx < xe; xx++) {
                row[(xx < 32) ? xx : xx + 992] = pl | idx;
                idx++;
            }
        }
    }
}

// NNS g2d screen helper: fill a w x h rectangle of u16 BG screen entries (stride in entries) with consecutive char numbers
// starting at idx, OR-ed with the palette number (pal << 12)
void func_0210217c(u16 *dst, s32 w, s32 h, s32 stride, s32 idx, s32 pal) {
    u16 pl = (u16)(pal << 12);
    s32 j, i;
    for (i = 0; i < h; i++) {
        u16 *p = dst;
        for (j = 0; j < w; j++) {
            *p++ = pl | idx++;
        }
        dst += stride;
    }
}

