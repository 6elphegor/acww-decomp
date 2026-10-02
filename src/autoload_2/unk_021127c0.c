// mwcc-flags: -nothumb -O4,p
// NitroSDK os_printf.c: OS_VSNPrintf, autoload_2 0x021127c0-0x02113088. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
typedef short s16;
typedef signed char s8;

typedef struct { s32 rest; char *cur; char *base; } VsnCtx; // dst_string { len, cur, base }
void func_021131c8(VsnCtx *ctx, char c);               // string_put_char
void func_02113160(VsnCtx *ctx, char c, s32 n);        // string_fill_char
void func_02113100(VsnCtx *ctx, const char *s, s32 n); // string_put_string

// OS_VSNPrintf
int func_021127c0(char *dst, int len, const char *fmt, char *vl) {
    char prefix[2];
    char digits[26];
    VsnCtx ctx;
    char c;
    s32 n;
    s32 radix;
    s32 plen;
    u32 flags;
    s32 prec;
    s32 width;
    u64 v;
    s32 hexbase;
    const char *start;
    ctx.rest = len;
    ctx.base = dst;
    ctx.cur = dst;
    while (*fmt) {
        c = *(s8 *)fmt;
        if ((u32)(((u8)c ^ 0x20) - 0xa1) < 0x3c) {
            func_021131c8(&ctx, c);
            c = *++fmt;
            if (c != 0) {
                fmt++;
                func_021131c8(&ctx, c);
            }
        } else if (c != '%') {
            fmt++;
            func_021131c8(&ctx, c);
        } else {
            flags = 0;
            prec = -1;
            radix = 10;
            hexbase = 'a' - 10;
            width = 0;
            start = fmt;
            for (;;) {
                c = *++fmt;
                switch (c) {
                case '+':
                    if (fmt[-1] == ' ') {
                        flags |= 2;
                        continue;
                    }
                    break;
                case ' ':
                    flags |= 1;
                    continue;
                case '-':
                    flags |= 8;
                    continue;
                case '0':
                    flags |= 16;
                    continue;
                }
                break;
            }
            if (c == '*') {
                width = *(s32 *)((vl += 4) - 4);
                fmt++;
                if (width < 0) {
                    width = -width;
                    flags |= 8;
                }
            } else {
                while (*fmt >= '0' && *fmt <= '9') {
                    c = *fmt++;
                    width = width * 10 + c - '0';
                }
            }
            if (*fmt == '.') {
                c = *++fmt;
                prec = 0;
                if (c == '*') {
                    prec = *(s32 *)((vl += 4) - 4);
                    fmt++;
                    if (prec < 0) {
                        prec = -1;
                    }
                } else {
                    while (*fmt >= '0' && *fmt <= '9') {
                        c = *fmt++;
                        prec = prec * 10 + c - '0';
                    }
                }
            }
            switch (*fmt) {
            case 'h':
                if (*++fmt != 'h') {
                    flags |= 0x40;
                } else {
                    fmt++;
                    flags |= 0x100;
                }
                break;
            case 'l':
                if (*++fmt != 'l') {
                    flags |= 0x20;
                } else {
                    fmt++;
                    flags |= 0x80;
                }
                break;
            }
            switch (*fmt) {
            case 'o':
                radix = 8;
                flags |= 0x1000;
                break;
            case 'u':
                flags |= 0x1000;
                break;
            case 'X':
                hexbase = 'A' - 10;
                goto hex;
            case 'p':
                flags |= 4;
                prec = 8;
                goto hex;
            case 'c':
                if (prec >= 0) {
                    goto deflt;
                } else {
                    s32 ch = *(s32 *)((vl += 4) - 4);
                    if (flags & 8) {
                        func_021131c8(&ctx, ch);
                        func_02113160(&ctx, ' ', width - 1);
                    } else {
                        func_02113160(&ctx, (flags & 16) ? '0' : ' ', width - 1);
                        func_021131c8(&ctx, ch);
                    }
                    fmt++;
                }
                continue;
            case 'd':
            case 'i':
                break;
            case 's': {
                s32 sl;
                char *s;
                sl = 0;
                s = *(char **)((vl += 4) - 4);
                if (prec < 0) {
                    if (s[0] != 0) {
                        do {
                            sl++;
                        } while (s[sl] != 0);
                    }
                } else {
                    while (sl < prec && s[sl] != 0) {
                        sl++;
                    }
                }
                width -= sl;
                if (flags & 8) {
                    func_02113100(&ctx, s, sl);
                    func_02113160(&ctx, ' ', width);
                } else {
                    func_02113160(&ctx, (flags & 16) ? '0' : ' ', width);
                    func_02113100(&ctx, s, sl);
                }
                fmt++;
                continue;
            }
            case 'n': {
                s32 count = ctx.cur - ctx.base;
                if (!(flags & 0x100)) {
                    if (flags & 0x40) {
                        **(s16 **)((vl += 4) - 4) = count;
                    } else if (flags & 0x80) {
                        s64 *p = *(s64 **)((vl += 4) - 4);
                        *p = count;
                    } else {
                        **(s32 **)((vl += 4) - 4) = count;
                    }
                }
                fmt++;
                continue;
            }
            case '%':
                if (start + 1 == fmt) {
                    func_021131c8(&ctx, *fmt++);
                    continue;
                }
                goto deflt;
            default:
            deflt:
                func_02113100(&ctx, start, fmt - start);
                continue;
            case 'x':
            hex:
                radix = 16;
                flags |= 0x1000;
                break;
            }
            plen = 0;
            if (flags & 8) {
                flags &= ~16;
            }
            if (prec >= 0) {
                flags &= ~16;
            } else {
                prec = 1;
            }
            if (flags & 0x1000) {
                if (flags & 0x100) {
                    v = *(u8 *)((vl += 4) - 4);
                } else if (flags & 0x40) {
                    v = *(u16 *)((vl += 4) - 4);
                } else if (flags & 0x80) {
                    v = *(u64 *)((vl += 8) - 8);
                } else {
                    v = *(u32 *)((vl += 4) - 4);
                }
                flags &= ~3;
                if (flags & 4) {
                    if (radix == 16) {
                        if (v != 0) {
                            prefix[1] = '0';
                            plen = 2;
                            prefix[0] = hexbase + 33;
                        }
                    } else if (radix == 8) {
                        prefix[0] = '0';
                        plen = 1;
                    }
                }
            } else {
                s64 sv;
                if (flags & 0x100) {
                    sv = *(s8 *)((vl += 4) - 4);
                } else if (flags & 0x40) {
                    sv = *(s16 *)((vl += 4) - 4);
                } else if (flags & 0x80) {
                    sv = *(s64 *)((vl += 8) - 8);
                } else {
                    sv = *(s32 *)((vl += 4) - 4);
                }
                v = sv;
                if ((v >> 32) & 0x80000000) {
                    prefix[0] = '-';
                    v = ~v + 1;
                    plen = 1;
                } else if (v == 0 && prec == 0) {
                } else if (flags & 2) {
                    prefix[0] = '+';
                    plen = 1;
                } else if (flags & 1) {
                    prefix[0] = ' ';
                    plen = 1;
                }
            }
            n = 0;
            switch (radix) {
            case 8:
                while (v != 0) {
                    s32 d = (s32)(v & 7);
                    v >>= 3;
                    digits[n++] = '0' + d;
                }
                break;
            case 10:
                if ((v >> 32) == 0) {
                    u32 lo = (u32)v;
                    while (lo != 0) {
                        u32 q = lo / 10;
                        u32 r = lo - q * 10;
                        lo = q;
                        digits[n++] = '0' + r;
                    }
                } else {
                    while (v != 0) {
                        u64 q = v / 10;
                        digits[n++] = '0' + (u32)(v - q * 10);
                        v = q;
                    }
                }
                break;
            case 16:
                while (v != 0) {
                    s32 d = (u32)v & 15;
                    v >>= 4;
                    digits[n++] = (d < 10) ? d + '0' : d + hexbase;
                }
                break;
            }
            if (plen > 0) {
                if (prefix[0] == '0') {
                    digits[n++] = '0';
                    plen = 0;
                }
            }
            {
                s32 pad = prec - n;
                if (flags & 16) {
                    if (pad < width - n - plen) {
                        pad = width - n - plen;
                    }
                }
                if (pad > 0) {
                    width -= pad;
                }
                width -= plen + n;
                if (!(flags & 8)) {
                    func_02113160(&ctx, ' ', width);
                }
                while (plen > 0) {
                    func_021131c8(&ctx, prefix[--plen]);
                }
                func_02113160(&ctx, '0', pad);
                while (n > 0) {
                    func_021131c8(&ctx, digits[--n]);
                }
                if (flags & 8) {
                    func_02113160(&ctx, ' ', width);
                }
            }
            fmt++;
        }
    }
    if (ctx.rest != 0) {
        *ctx.cur = 0;
    } else if (len != 0) {
        (ctx.base + len)[-1] = 0;
    }
    return ctx.cur - ctx.base;
}

