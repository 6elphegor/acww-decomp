#include "types.h"

struct Unk_02049e40_Out {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 unk_04[2][2];
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u16 unk_0e;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u16 unk_18;
    /* 0x1a */ u16 unk_1a;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 unk_1d;
    /* 0x20 */ u32 unk_20;
};

struct Unk_0204a1c0_Bits {
    u32 lo : 6;
    s32 mid : 4;
    u32 hi : 22;
};

static inline BOOL Unk_02049e40_InRange(u32 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

extern "C" {
u16 *func_0204ebd8(void *map, s32 x, s32 z, s32 a, s32 b, s32 c);
BOOL func_0204e8b0(void *map, s32 x, s32 z, s32 a, s32 b);
BOOL func_0204af08(u16 *p);
BOOL func_0204af90(u16 *p);
void func_0204edf8(s32 *o1, s32 *o2, s32 x, s32 z, s32 a, s32 b);
s32 func_02049854(void *map, s32 x, s32 z, s32 v, s32 w);
void func_0204a630(Unk_02049e40_Out *out);
void func_0204a1c0(Unk_02049e40_Out *out, void *map, s32 x, s32 z);
void func_0204a5e8(Unk_02049e40_Out *out, void *map, s32 x, s32 z, s32 n);

s32 func_02049e1c(s32 a, s32 v) {
    if (v < 0x4b) return 0;
    if (v < 0x50) return 1;
    if (v < 0x5f) return 2;
    if (v < 0x65) return 3;
    return 4;
}

void func_02049e40(Unk_02049e40_Out *out, void *map, s32 x, s32 z) {
    s32 j, i;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            out->unk_04[j][i] = 0;
        }
    }
    out->unk_08 = 0;
    out->unk_0a = 0;
    out->unk_0c = 0;
    out->unk_0e = 0;
    out->unk_20 = 0;
    out->unk_10 = -1;
    out->unk_14 = -1;
    out->unk_18 = 0;
    out->unk_1a = 0;
    out->unk_1c = 0;
    out->unk_1d = 0;
    u16 *p = func_0204ebd8(map, x, z, 0, 0, 0);
    i = 0;
    BOOL fl[3];
    fl[0] = FALSE;
    fl[1] = FALSE;
    fl[2] = FALSE;
    for (; i < 0x100; p++, i++) {
        u16 v = *p;
        switch ((v & 0xf000) >> 12) {
        case 0:
            if ((v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) || (v >= 0x2f && v <= 0x56) ||
                (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 || (v >= 0x6a && v <= 0x6c) ||
                v == 0x6d || (v >= 0xc8 && v <= 0xcf)) {
                out->unk_04[(i & 0xf) >> 3][i >> 7]++;
                switch (*p - 0x66) {
                case 0:
                case 4:
                    out->unk_20 |= 0x10;
                    break;
                case 1:
                case 5:
                    out->unk_20 |= 8;
                    break;
                case 2:
                case 6:
                    out->unk_20 |= 0x20;
                    break;
                case 3:
                    break;
                }
                BOOL x1 = fl[0];
                u32 t = *p;
                if (t >= 0x26 && t <= 0x2a) x1 = TRUE;
                if (x1 || (t >= 0x66 && t <= 0x68)) {
                    out->unk_20 |= 0x800;
                } else if (t >= 0x5d && t <= 0x61 && func_0204af08(p)) {
                    out->unk_20 |= 0x1000;
                } else if (*p == 0x6d) {
                    out->unk_1a++;
                }
            } else if (v >= 0x21 && v <= 0x24) {
                out->unk_08++;
            } else {
                BOOL x2 = fl[1];
                if (v <= 0x1d) x2 = TRUE;
                if (x2) {
                    switch (v - 0x1a) {
                    case 1:
                        out->unk_10 = i % 16;
                        out->unk_14 = i / 16;
                        out->unk_20 = (out->unk_20 & ~1) | 1;
                        break;
                    case 0:
                        out->unk_20 |= 2;
                        out->unk_0e++;
                        break;
                    case 2:
                    case 3:
                        out->unk_0e++;
                        break;
                    default:
                        out->unk_20 |= 4;
                        out->unk_0e++;
                        break;
                    }
                } else if ((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) ||
                           (v >= 0x9c && v <= 0xa3) || v == 0xa5 || (v >= 0x6e && v <= 0x73) ||
                           (v >= 0x74 && v <= 0x79) || (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87)) {
                    out->unk_20 |= 4;
                    out->unk_0e++;
                }
            }
            break;
        case 1:
            if (v >= 0x1320 && v <= 0x1322) {
                out->unk_0c++;
            } else {
                s32 r = i % 16;
                s32 q = i / 16;
                if (!func_0204e8b0(map, x, z, r, q)) {
                    BOOL x3 = fl[2];
                    u32 t = *p;
                    if (t >= 0x1554 && t <= 0x155c) x3 = TRUE;
                    if (x3) {
                        out->unk_1c++;
                    } else if (t >= 0x154a && t <= 0x1553) {
                        out->unk_20 |= 0x4000;
                    } else if (t >= 0x1518 && t <= 0x151c) {
                    } else if (t >= 0x1542 && t <= 0x1546) {
                    } else {
                        out->unk_0a++;
                    }
                } else {
                    switch (*p) {
                    case 0x1549:
                        out->unk_1d++;
                        break;
                    case 0x1566:
                        out->unk_20 |= 0x2000;
                        break;
                    }
                }
            }
            break;
        case 2: {
            s32 r = i % 16;
            s32 q = i / 16;
            if (!func_0204e8b0(map, x, z, r, q)) out->unk_0a++;
            break;
        }
        case 3:
        case 4:
            out->unk_0a++;
            break;
        }
    }
    func_0204a630(out);
}

void func_0204a1c0(Unk_02049e40_Out *out, void *map, s32 x, s32 z) {
    s32 j, i;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            out->unk_04[j][i] = 0;
        }
    }
    out->unk_08 = 0;
    out->unk_0a = 0;
    out->unk_0c = 0;
    out->unk_0e = 0;
    out->unk_20 = 0;
    out->unk_10 = -1;
    out->unk_14 = -1;
    out->unk_18 = 0;
    out->unk_1a = 0;
    out->unk_1c = 0;
    out->unk_1d = 0;
    u16 *p = func_0204ebd8(map, x, z, 0, 0, 0);
    i = 0;
    BOOL fl[3];
    fl[0] = FALSE;
    fl[1] = FALSE;
    fl[2] = FALSE;
    for (; i < 0x100; p++, i++) {
        u16 v = *p;
        switch ((v & 0xf000) >> 12) {
        case 0:
            if ((v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) || (v >= 0x2f && v <= 0x56) ||
                (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 || (v >= 0x6a && v <= 0x6c) ||
                v == 0x6d || (v >= 0xc8 && v <= 0xcf)) {
                out->unk_04[(i & 0xf) >> 3][i >> 7]++;
                switch (*p - 0x66) {
                case 0:
                case 4:
                    out->unk_20 |= 0x10;
                    break;
                case 1:
                case 5:
                    out->unk_20 |= 8;
                    break;
                case 2:
                case 6:
                    out->unk_20 |= 0x20;
                    break;
                case 3:
                    break;
                }
                BOOL x1 = fl[0];
                u32 t = *p;
                if (t >= 0x26 && t <= 0x2a) x1 = TRUE;
                if (x1 || (t >= 0x66 && t <= 0x68)) {
                    out->unk_20 |= 0x800;
                } else if (t >= 0x5d && t <= 0x61 && (func_0204af90(p) || func_0204af08(p))) {
                    out->unk_20 |= 0x1000;
                } else if (*p == 0x6d) {
                    out->unk_1a++;
                }
            } else if (v == 0x25 || v == 0x5c || v == 0xc7 || (v >= 0x6e && v <= 0x73) || (v >= 0x74 && v <= 0x79) ||
                       (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87) || v == 0x89) {
                func_0204a5e8(out, map, x, z, i);
            } else if (v >= 0x21 && v <= 0x24) {
                out->unk_08++;
            } else {
                BOOL x2 = fl[1];
                if (v <= 0x1d) x2 = TRUE;
                if (x2) {
                    switch (v - 0x1a) {
                    case 1:
                        out->unk_10 = i % 16;
                        out->unk_14 = i / 16;
                        out->unk_20 = (out->unk_20 & ~1) | 1;
                        break;
                    case 0:
                        out->unk_20 |= 2;
                        out->unk_0e++;
                        break;
                    case 2:
                    case 3:
                        out->unk_0e++;
                        break;
                    default:
                        out->unk_20 |= 4;
                        out->unk_0e++;
                        break;
                    }
                } else if ((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) ||
                           (v >= 0x9c && v <= 0xa3) || v == 0xa5) {
                    out->unk_20 |= 4;
                    out->unk_0e++;
                } else if (v >= 0xe3 && v <= 0xe7) {
                    out->unk_18++;
                } else if (v >= 0xe8 && v <= 0xfb) {
                    s32 k = (v - 0xe8) / 5;
                    ((Unk_0204a1c0_Bits *)&out->unk_20)->mid |= 1 << k;
                }
            }
            break;
        case 1:
            if (v == 0x1548) {
                out->unk_20 |= 0x400;
            } else if (v >= 0x1320 && v <= 0x1322) {
                out->unk_0c++;
            } else if (v == 0x1568) {
                func_0204a5e8(out, map, x, z, i);
            } else {
                s32 r = i % 16;
                s32 q = i / 16;
                if (!func_0204e8b0(map, x, z, r, q)) {
                    BOOL x3 = fl[2];
                    u32 t = *p;
                    if (t >= 0x1554 && t <= 0x155c) x3 = TRUE;
                    if (x3) {
                        out->unk_1c++;
                    } else if (t >= 0x154a && t <= 0x1553) {
                        out->unk_20 |= 0x4000;
                    } else if (t >= 0x1518 && t <= 0x151c) {
                    } else if (t >= 0x1542 && t <= 0x1546) {
                    } else {
                        out->unk_0a++;
                    }
                } else {
                    switch (*p) {
                    case 0x1549:
                        out->unk_1d++;
                        break;
                    case 0x1566:
                        out->unk_20 |= 0x2000;
                        break;
                    }
                }
            }
            break;
        case 2: {
            s32 r = i % 16;
            s32 q = i / 16;
            if (!func_0204e8b0(map, x, z, r, q)) out->unk_0a++;
            break;
        }
        case 3:
        case 4:
            out->unk_0a++;
            break;
        }
    }
    func_0204a630(out);
}

void func_0204a5e8(Unk_02049e40_Out *out, void *map, s32 x, s32 z, s32 n) {
    s32 a = n % 16;
    s32 b = n / 16;
    s32 ox, oz;
    func_0204edf8(&ox, &oz, x, z, a, b);
    func_02049854(map, ox, oz, 0xfff1, 0);
}

void func_0204a630(Unk_02049e40_Out *out) {
    s32 n = out->unk_04[0][0] + out->unk_04[1][0] + out->unk_04[0][1] + out->unk_04[1][1];
    out->unk_00 = 100;
    if (n > 15) {
        out->unk_00 += (n - 15) * -2;
    } else if (n < 12) {
        out->unk_00 += (12 - n) * -2;
    }
    if (out->unk_08 >= 3) out->unk_00 -= out->unk_08 - 2;
    if (out->unk_0a >= 3) out->unk_00 -= out->unk_0a - 2;
    out->unk_00 += out->unk_0c * -10;
    if (((s32)(out->unk_20 << 31) >> 31) == 1) out->unk_00 -= 50;
    if (out->unk_0e >= 3) out->unk_00 += out->unk_0e - 2;
}

struct Unk_0204a6b8_Out {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_0204a6b8_In {
    s32 unk_00;
    s32 unk_04;
};

void func_0204a6b8(Unk_0204a6b8_Out *out, Unk_0204a6b8_In *in, Unk_02049e40_Out *res) {
    out->unk_00 = in->unk_00;
    out->unk_04 = in->unk_04;
    if (out->unk_00 < 0) {
        out->unk_08 = -1;
    } else {
        s32 sc[6];
        s32 *q, i;
        q = sc;
        for (i = 0; i < 6; i++) *q++ = 0;
        s32 n = res->unk_04[0][0] + res->unk_04[1][0] + res->unk_04[0][1] + res->unk_04[1][1];
        if (n > 15) {
            sc[0] = (n - 15) * 2;
        } else if (n < 12) {
            sc[1] = (12 - n) * 2;
        }
        s32 a = res->unk_08;
        if (a >= 3) sc[2] = a - 2;
        s32 b = res->unk_0a;
        if (b >= 3) sc[3] = b - 2;
        sc[4] = res->unk_0c * 10;
        if (((s32)(res->unk_20 << 31) >> 31) != 0) sc[5] = 50;
        s32 best = -1;
        s32 bi = -1;
        q = sc;
        for (i = 0; i < 6; q++, i++) {
            if (*q > best) {
                best = *q;
                bi = i;
            }
        }
        out->unk_08 = bi;
    }
}
}
