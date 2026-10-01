#include "types.h"

extern "C" {
extern u8 data_0213c6ec[];
void func_02111ec8(void *p, u32 a, u32 b);
void func_02111e60(void *p, u32 a, u32 b);
void func_02116048(const void *src, void *dst, u32 size);
void func_020014f4(u32 a);
void func_020014bc(u32 a);
void func_020014e4(u32 a);
void func_020014ac(u32 a);
void func_02001674(u32 a, u32 b, u32 c, u32 d);
void func_02001650(u32 a, u32 b, u32 c, u32 d);
void func_0200162c(u32 a, u32 b, u32 c, u32 d);
void func_02001608(u32 a, u32 b, u32 c, u32 d);
void func_02001824(u32 a, u32 b);
void func_02001804(u32 a, u32 b);
void func_020017e4(u32 a, u32 b);
void func_020017c4(u32 a, u32 b);
void func_020017a4(u32 a, u32 b);
void func_02001784(u32 a, u32 b);
void func_02001768(u32 a, u32 b);
void func_0200212c(u32 a);
void func_020021fc(u32 a, u32 b, u32 c);

void *func_020641ec(u32 a, u32 b, s32 c, s32 *out);
void func_020e85fc(u32 a, void *b);
void func_021145cc(void *p, u32 size);
void func_021117fc(void *a, u32 b, u32 c);
void func_0211172c(void *a, u32 b, u32 c);
void func_0211165c(void *a, u32 b, u32 c);
void func_02111864(void *a, u32 b, u32 c);
void func_02111794(void *a, u32 b, u32 c);
void func_021116c4(void *a, u32 b, u32 c);
void func_021115f4(void *a, u32 b, u32 c);
void func_02111c6c(void *a, u32 b, u32 c);
void func_02111c0c(void *a, u32 b, u32 c);
void func_02111b3c(void *a, u32 b, u32 c);
void func_02111a6c(void *a, u32 b, u32 c);
void func_0211199c(void *a, u32 b, u32 c);
void func_02111ba4(void *a, u32 b, u32 c);
void func_02111ad4(void *a, u32 b, u32 c);
void func_02111a04(void *a, u32 b, u32 c);
void func_02111934(void *a, u32 b, u32 c);
void func_02111df8(void *a, u32 b, u32 c);
void func_02111d90(void *a, u32 b, u32 c);
void func_02111ec8(void *a, u32 b, u32 c);
void func_02111e60(void *a, u32 b, u32 c);

void func_02001e7c(void) {
    func_02111ec8(data_0213c6ec, 0, 2);
    func_02111e60(data_0213c6ec, 0, 2);
}

void func_02001ea0(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                u32 t = src[idx];
                dst[k] = t;
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

void func_02001f0c(u32 *src, u32 *dst, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = 0;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += w * 8;
    }
}

void func_02001f74(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0;
    base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[idx] = src[k];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

void func_02001fd8(u32 *src, u32 *dst, s32 x, s32 w, s32 h) {
    s32 k, row, s, j, c, base, idx;
    k = 0; base = x * 8;
    for (row = 0; row < h; row++) {
        s = base;
        for (j = 0; j < 8; j++) {
            idx = s;
            for (c = 0; c < w; c++) {
                dst[k] = src[idx];
                k++;
                idx += 8;
            }
            s++;
        }
        base += 0x100;
    }
}

void func_02116048(const void *src, void *dst, u32 size);
void func_0200203c(u8 *src, u8 *dst, s32 w, s32 h) {
    s32 k, col, row, j, base, p, q;
    k = 0;
    base = 0;
    for (row = 0; row < h; row++) {
        p = base;
        for (col = 0; col < w; col++) {
            q = p;
            for (j = 0; j < 8; j++) {
                func_02116048(src + q, dst + k, 4);
                k += 4;
                q += w * 4;
            }
            p += 4;
        }
        base += w << 5;
    }
}

void func_020020b8(u32 n) {
    switch (n) {
    case 0: func_020014f4(2); break;
    case 1: func_020014f4(4); break;
    case 2: func_020014f4(8); break;
    case 7: func_020014f4(0x10); break;
    case 3: func_020014bc(1); break;
    case 4: func_020014bc(2); break;
    case 5: func_020014bc(4); break;
    case 6: func_020014bc(8); break;
    case 8: func_020014bc(0x10); break;
    }
}

void func_0200212c(u32 n) {
    switch (n) {
    case 0: func_020014e4(2); break;
    case 1: func_020014e4(4); break;
    case 2: func_020014e4(8); break;
    case 7: func_020014e4(0x10); break;
    case 3: func_020014ac(1); break;
    case 4: func_020014ac(2); break;
    case 5: func_020014ac(4); break;
    case 6: func_020014ac(8); break;
    case 8: func_020014ac(0x10); break;
    }
}

void func_020021a0(u32 n) {
    func_0200212c(n);
    func_020021fc(n, 0, 0);
}

void func_020021b8(u32 n, u32 a, u32 b, u32 c, u32 d) {
    switch (n) {
    case 0: func_02001674(a, b, c, d); break;
    case 1: func_02001650(a, b, c, d); break;
    case 2: func_0200162c(a, b, c, d); break;
    case 3: func_02001608(a, b, c, d); break;
    }
}

void func_020021fc(u32 n, u32 a, u32 b) {
    switch (n) {
    case 0: func_02001824(a, b); break;
    case 1: func_02001804(a, b); break;
    case 2: func_020017e4(a, b); break;
    case 3: func_020017c4(a, b); break;
    case 4: func_020017a4(a, b); break;
    case 5: func_02001784(a, b); break;
    case 6: func_02001768(a, b); break;
    }
}

s32 func_02002700(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

s32 func_0200273c(u32 n) {
    switch (n) {
    case 3: return 1;
    case 0: case 4: return 2;
    case 1: case 5: return 4;
    case 2: case 6: return 8;
    case 7: case 8: return 0x10;
    default: return 1;
    }
}

s32 func_02002778(u32 n) {
    switch (n) {
    case 3: return 0;
    case 0: case 4: return 1;
    case 1: case 5: return 2;
    case 2: case 6: return 3;
    case 7: case 8: return 4;
    default: return 0;
    }
}

s32 func_02002438(u8 *dst, u32 n, s32 a, s32 b, s32 c);
s32 func_020024f0(u8 *dst, u32 n, s32 size, s32 x);
s32 func_02002580(u8 *dst, u32 n, s32 a, s32 b, u8 c);
s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);

void func_0200226c(u32 n, u32 a, u32 b, u32 c) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000a & 0x43) | (a << 14)) | 0x500); break;
    case 1: *(vu16 *)0x0400000c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000c & 0x43) | (a << 14)) | 0x600); break;
    case 2: *(vu16 *)0x0400000e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400000e & 0x43) | (a << 14)) | 0x700); break;
    case 3: *(vu16 *)0x04001008 = (c << 2) | ((b << 7) | ((*(vu16 *)0x04001008 & 0x43) | (a << 14)) | 0xc00); break;
    case 4: *(vu16 *)0x0400100a = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100a & 0x43) | (a << 14)) | 0xd00); break;
    case 5: *(vu16 *)0x0400100c = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100c & 0x43) | (a << 14)) | 0xe00); break;
    case 6: *(vu16 *)0x0400100e = (c << 2) | ((b << 7) | ((*(vu16 *)0x0400100e & 0x43) | (a << 14)) | 0xf00); break;
    }
}

void func_02002398(u32 n, u32 v) {
    switch (n) {
    case 0: *(vu16 *)0x0400000a = (*(vu16 *)0x0400000a & ~3) | v; break;
    case 1: *(vu16 *)0x0400000c = (*(vu16 *)0x0400000c & ~3) | v; break;
    case 2: *(vu16 *)0x0400000e = (*(vu16 *)0x0400000e & ~3) | v; break;
    case 3: *(vu16 *)0x04001008 = (*(vu16 *)0x04001008 & ~3) | v; break;
    case 4: *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & ~3) | v; break;
    case 5: *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & ~3) | v; break;
    case 6: *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & ~3) | v; break;
    }
}

s32 func_02002438(u8 *dst, u32 n, s32 a, s32 b, s32 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (*(volatile s32 *)&c - b + 1) * 32;
    off = b * 32;
    func_021145cc(p, len);
    switch (n) {
    case 0: func_021117fc(p, off, len); break;
    case 1: func_0211172c(p, off, len); break;
    case 2: func_0211165c(p, off, len); break;
    case 3: func_02111864(p, off, len); break;
    case 4: func_02111794(p, off, len); break;
    case 5: func_021116c4(p, off, len); break;
    case 6: func_021115f4(p, off, len); break;
    case 7: func_02111c6c(p, off, len); break;
    case 8: func_02111c0c(p, off, len); break;
    }
    return 1;
}

s32 func_020024f0(u8 *dst, u32 n, s32 size, s32 x) {
    func_021145cc(dst, size);
    switch (n) {
    case 0: func_02111b3c(dst, x, size); break;
    case 1: func_02111a6c(dst, x, size); break;
    case 2: func_0211199c(dst, x, size); break;
    case 3: func_02111ba4(dst, x, size); break;
    case 4: func_02111ad4(dst, x, size); break;
    case 5: func_02111a04(dst, x, size); break;
    case 6: func_02111934(dst, x, size); break;
    }
    return 1;
}

s32 func_02002580(u8 *dst, u32 n, s32 a, s32 b, u8 c) {
    u8 *p = dst + (b - a) * 32;
    s32 off, len;
    len = (c - b + 1) * 32;
    off = b * 32;
    func_021145cc(p, len);
    if (n == 7) {
        func_02111df8(p, off, len);
    } else if (n == 8) {
        func_02111d90(p, off, len);
    } else if (n <= 2) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        func_02111ec8(p, off, len);
    } else if (n <= 6) {
        if (off == 0) {
            off = 2;
            len -= 2;
            p += 2;
        }
        func_02111e60(p, off, len);
    }
    return 1;
}

s32 func_020025fc(u32 p0, u32 p1, u32 p2, s32 p3, s32 a, s32 b) {
    return func_0200261c(p0, p1, p2, p3 << 1, a << 1, (b << 1) + 1);
}

s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    s32 r = func_02002438(buf, p2, p3, e, f);
    func_020e85fc(p1, buf);
    return r;
}

s32 func_02002654(u32 p0, u32 p1, u32 p2) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    s32 r = func_020024f0(buf, p2, out, 0);
    func_020e85fc(p1, buf);
    return r;
}

s32 func_02002688(u32 p0, u32 p1, u32 p2, s32 p3, u8 e) {
    s32 out;
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, &out);
    u8 *q = buf;
    q += p3 * 32;
    s32 r = func_02002580(q, p2, e, e, e);
    func_020e85fc(p1, buf);
    return r;
}

s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f) {
    u8 *buf = (u8 *)func_020641ec(p0, p1, -4, 0);
    s32 r = func_02002580(buf, p2, p3, e, f);
    func_020e85fc(p1, buf);
    return r;
}
}
