// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {
char data_ov065_0228bbc4[0x44] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.-";
char *data_ov065_0228bbc0 = data_ov065_0228bbc4;

void func_02115fb4(void *, u32, u32);
void func_02116048(void *, void *, u32);

s32 func_ov065_0226fb08(u8 *in, u32 len, u8 *out, u32 cap) {
    u32 pad;
    u32 need;
    u8 *end;
    s32 n;
    u8 *o;
    s32 bits;
    s32 rem;
    s32 cnt;
    u8 t[3];

    if (len % 3 != 0) {
        pad = 4;
    } else {
        pad = 0;
    }
    need = len / 3 * 4;
    need += pad;
    if (out != 0) {
        if (cap < need) {
            return -1;
        }
        end = in + len;
        o = out;
        if (in != end) {
            do {
                n = end - in;
                bits = n * 8;
                if (bits % 6 != 0) {
                    rem = 1;
                } else {
                    rem = 0;
                }
                cnt = bits / 6 + rem;
                if (n >= 3) {
                    n = 3;
                }
                func_02115fb4(t, 0, 3);
                func_02116048(in, t, n);
                o[0] = data_ov065_0228bbc0[t[0] >> 2];
                if (cnt >= 2) {
                    o[1] = data_ov065_0228bbc0[((t[0] << 4) & 0x3f) | (t[1] >> 4)];
                } else {
                    o[1] = 0x2a;
                }
                if (cnt >= 3) {
                    o[2] = data_ov065_0228bbc0[((t[1] << 2) & 0x3f) | (t[2] >> 6)];
                } else {
                    o[2] = 0x2a;
                }
                if (cnt >= 4) {
                    o[3] = data_ov065_0228bbc0[t[2] & 0x3f];
                } else {
                    o[3] = 0x2a;
                }
                o += 4;
                in += n;
            } while (in != end);
        }
        need = o - out;
    }
    return need;
}

s32 func_ov065_0226f9e0(s8 *in, u32 len, u8 *out, u32 cap) {
    s32 bits;
    u32 i;
    s32 max;
    s8 *q;
    s8 c;
    u8 *p;
    s32 n;
    s32 j;
    s8 tmp[4];

    if ((len & 3) != 0) {
        return -1;
    }
    bits = 0;
    for (i = 0; i < len; i++) {
        if (in[i] != 0x2a) {
            bits += 6;
        }
    }
    if (out == 0) {
        return bits / 8;
    }
    max = bits / 8;
    if (cap < (u32)max) {
        return -1;
    }
    if (len == 0) {
        *out = 0;
        return 0;
    }
    p = out;
    do {
        for (j = 0, q = tmp; j < 4; q++, j++) {
            c = in[j];
            if (c >= 0x41 && c <= 0x5a) {
                *q = c - 0x41;
            } else if (c >= 0x61 && c <= 0x7a) {
                *q = c - 0x47;
            } else if (c >= 0x30 && c <= 0x39) {
                *q = c + 4;
            } else if (c == 0x2e) {
                *q = 0x3e;
            } else if (c == 0x2d) {
                *q = 0x3f;
            } else {
                *q = 0;
            }
        }
        in += 4;
        p[0] = (tmp[0] << 2) | (tmp[1] >> 4);
        n = p + 1 - out;
        if (n >= max) {
            break;
        }
        p[1] = (tmp[1] << 4) | (tmp[2] >> 2);
        n = p + 2 - out;
        if (n >= max) {
            break;
        }
        p[2] = (tmp[2] << 6) | tmp[3];
        p += 3;
        n = p - out;
    } while (n < max);
    return n;
}
}
