// mwcc-flags: -nothumb -O4,p
// MSL C library (wide string functions), autoload_2 0x0212dc60-0x0212dcd0. ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned short u16;
typedef unsigned int u32;
typedef u16 wchar_t;
#define NULL ((void *)0)

// wcslen
u32 wcslen(const wchar_t *s) {
    const wchar_t *p = s;
    u32 len = -1;
    do {
        len++;
    } while (*p++);
    return len;
}

// wcscpy
wchar_t *wcscpy(wchar_t *dst, const wchar_t *src) {
    wchar_t *d = dst;
    while ((*d++ = *src++) != 0) {
    }
    return dst;
}

// wcschr
wchar_t *wcschr(const wchar_t *s, wchar_t c) {
    wchar_t ch;
    while ((ch = *s++) != 0) {
        if (ch == c) return (wchar_t *)(s - 1);
    }
    if (c != 0) return NULL;
    return (wchar_t *)(s - 1);
}
