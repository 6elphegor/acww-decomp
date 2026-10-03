// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned int u32;

// strlen
u32 func_0212a438(const char *s) {
    const u8 *p = (const u8 *)s;
    u32 len = -1;
    do {
        len++;
    } while (*p++);
    return len;
}

// strcpy
char *func_0212a360(char *dst, const char *src) {
    register u8 *destb, *fromb = (u8 *)src;
    register u32 w, t, align;
    destb = (u8 *)dst;
    if ((align = ((u32)fromb & 3)) != ((u32)destb & 3)) goto bytecopy;
    if (align) {
        if ((*destb = *fromb) == 0) return dst;
        for (align = 3 - align; align; align--) {
            if ((*(++destb) = *(++fromb)) == 0) return dst;
        }
        ++destb;
        ++fromb;
    }
    w = *(u32 *)fromb;
    t = w + 0xfefefeff;
    t &= 0x80808080;
    if (!t) {
        destb -= 4;
        do {
            *(u32 *)(destb += 4) = w;
            w = *(u32 *)(fromb += 4);
            t = w + 0xfefefeff;
            t &= 0x80808080;
        } while (!t);
        destb += 4;
    }
bytecopy:
    if ((*destb = *fromb) == 0) return dst;
    do {
        if ((*(++destb) = *(++fromb)) == 0) return dst;
    } while (1);
}

// strncpy
char *func_0212a2ec(char *d, const char *s0, u32 n) {
    const u8 *s = (const u8 *)s0;
    u8 *p = (u8 *)d;
    u8 *t;
    if (n == 0) return d;
    do {
        t = p;
        *p++ = *s++;
        if (*t == 0) {
            while (--n) *p++ = 0;
            return d;
        }
    } while (--n);
    return d;
}

// strcat
char *func_0212a2bc(char *d, const char *s0) {
    const u8 *s = (const u8 *)s0;
    u8 *p = (u8 *)d;
    u32 c;
    do { c = *p++; } while (c);
    p--;
    do {
        u8 *q = p;
        c = *s++;
        *p++ = c;
        c = *q;
    } while (c);
    return d;
}

// strcmp
int func_0212a190(const char *s1, const char *s2) {
    register u8 *left = (u8 *)s1, *right = (u8 *)s2;
    register u32 l, r, align, mask1, mask2, t;
    if ((l = *left) - (r = *right)) return l - r;
    if ((align = ((u32)left & 3)) != ((u32)right & 3)) goto bytecompare;
    if (align) {
        if (!l) return 0;
        for (align = 3 - align; align; align--) {
            l = *++left;
            r = *++right;
            if (l - r) return l - r;
            if (!l) return 0;
        }
        ++left;
        ++right;
    }
    l = *(u32 *)left;
    mask1 = 0xfefefeff;
    mask2 = 0x80808080;
    t = l + mask1;
    t &= mask2;
    r = *(u32 *)right;
    if (!t) {
        while (l == r) {
            l = *(u32 *)(left += 4);
            r = *(u32 *)(right += 4);
            t = l + mask1;
            t &= mask2;
            if (t) goto zero;
        }
        --left;
        --right;
        goto bytecompare;
    }
zero:
    l = *left;
    r = *right;
    if (l - r) return l - r;
bytecompare:
    if (!l) return 0;
    do {
        l = *++left;
        r = *++right;
        if (l - r) return l - r;
    } while (l);
    return 0;
}

// strncmp
int strncmp(const char *a, const char *b, u32 n) {
    const u8 *p1 = (const u8 *)a, *p2 = (const u8 *)b;
    u32 c1, c2;
    if (n) {
        do {
            c2 = *p2++;
            c1 = *p1++;
            if (c1 != c2) return c1 - c2;
            if (c1 == 0) break;
        } while (--n);
    }
    return 0;
}

// strchr
char *func_0212a120(const char *s, int c) {
    const u8 *p = (const u8 *)s;
    u32 ch = (u8)c;
    u32 t;
    t = *p++;
    while (t != 0) {
        if (t == ch) return (char *)(p - 1);
        t = *p++;
    }
    return ch ? 0 : (char *)(p - 1);
}
