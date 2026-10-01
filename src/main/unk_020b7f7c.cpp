#include "types.h"

extern "C" {
void func_0210171c(u32 a, u32 b);
void func_0210197c(u32 a, u32 b);
u32 func_0210f460(void);
u32 func_0210f4cc(void);
void func_0206d49c(void);
void func_021127c0(char *buf, u32 size, const char *fmt, char *ap);
}

extern "C" {
extern u32 (*data_0213bc10)(u32, u32);
extern u32 (*data_0213bc18)(u32);
}

extern u32 data_021ef608, data_021ef60c, data_021ef610, data_021ef614, data_021ef618, data_021ef61c, data_021ef620;
extern u32 data_021ef624, data_021ef628, data_021ef62c;

struct Unk_020b82b8_Str {
    u16 unk_00;
    u16 unk_02;
};

extern "C" void func_020b8338(u16 *dst, u32 base, s32 c);
extern "C" void func_020b830c(u16 *dst, u32 base, const char *s);
extern "C" void func_020b82e8(u16 *a, u32 b, const char *fmt, char *ap);
extern "C" void func_020b82d8(Unk_020b82b8_Str *self, u16 *dst, const char *s);
extern "C" void func_020b82b8(Unk_020b82b8_Str *self, u16 *a, const char *fmt, ...);
extern "C" void func_020b81fc(u32 *o0, u32 *o1, u32 size);
extern "C" void func_020b8130(u32 *o, u32 size);
extern "C" u32 func_020b80f8(u32 a);
extern "C" u32 func_020b80b8(u32 a, u32 b);
extern "C" u32 func_020b8090(u32 a);
extern "C" void func_020b7f80(void);
extern "C" void func_020b7f7c(void);

extern "C" void func_020b8338(u16 *dst, u32 base, s32 c) {
    *dst = base + c;
}

extern "C" void func_020b830c(u16 *dst, u32 base, const char *s) {
    s32 i = 0;
    while (s[i] != 0) {
        func_020b8338(dst, base, (s++)[i]);
        dst++;
    }
}

extern "C" void func_020b82e8(u16 *a, u32 b, const char *fmt, char *ap) {
    char buf[0x81];
    func_021127c0(buf, 0x81, fmt, ap);
    func_020b830c(a, b, buf);
}

extern "C" void func_020b82d8(Unk_020b82b8_Str *self, u16 *dst, const char *s) {
    func_020b830c(dst, self->unk_02, s);
}

extern "C" void func_020b82b8(Unk_020b82b8_Str *self, u16 *a, const char *fmt, ...) {
    char *ap = (char *)(((u32)&fmt) & ~3) + 4;
    func_020b82e8(a, self->unk_02, fmt, ap);
}

extern "C" void func_020b81fc(u32 *o0, u32 *o1, u32 size) {
    u32 v = data_021ef628;
    if (v + size <= data_021ef618 && data_021ef624 + (size >> 1) <= data_021ef614) {
        *o0 = v;
        *o1 = data_021ef624;
        data_021ef628 = data_021ef628 + size;
        data_021ef624 = data_021ef624 + (size >> 1);
    } else {
        v = data_021ef61c;
        u32 e = v + size;
        if (e <= data_021ef60c && e <= 0x60000 && data_021ef620 + (size >> 1) <= data_021ef610) {
            *o0 = v;
            *o1 = data_021ef620;
            data_021ef61c = data_021ef61c + size;
            data_021ef620 = data_021ef620 + (size >> 1);
        } else {
            func_020b7f7c();
            func_0206d49c();
            *o0 = 0;
            *o1 = 0x20000;
        }
    }
}

extern "C" void func_020b8130(u32 *o, u32 size) {
    u32 a = data_021ef60c;
    u32 avail1 = a - data_021ef61c;
    u32 c = data_021ef610;
    u32 avail2 = c - data_021ef620;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef610 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef60c = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef610 = *o;
        return;
    }
    a = data_021ef618;
    avail1 = a - data_021ef628;
    c = data_021ef614;
    avail2 = c - data_021ef624;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef614 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef618 = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef614 = *o;
        return;
    }
    func_020b7f7c();
    func_0206d49c();
    *o = 0;
}

extern "C" u32 func_020b80f8(u32 a) {
    u32 p = data_021ef608;
    a = (a + 0xf) & 0xfff0;
    u32 n = p + a;
    data_021ef608 = n;
    if (n >= data_021ef62c) {
        data_021ef608 = p;
        func_0206d49c();
        return 0;
    }
    return p;
}

extern "C" u32 func_020b80b8(u32 a, u32 b) {
    u32 x, y;
    if (b != 0) {
        func_020b81fc(&x, &y, a);
    } else {
        func_020b8130(&x, a);
    }
    return (b << 31) | (((a >> 4) << 16) | ((x >> 3) & 0xffff));
}

extern "C" u32 func_020b8090(u32 a) {
    a = (a + 7) & ~7;
    u32 r = func_020b80f8(a);
    return ((a >> 3) << 16) | ((r >> 3) & 0xffff);
}

extern "C" void func_020b7f80(void) {
    func_0210171c(4, 1);
    func_0210197c(0x8000, 1);
    data_0213bc10 = func_020b80b8;
    data_0213bc18 = func_020b8090;
    data_021ef608 = 0;
    data_021ef62c = func_0210f460();
    data_021ef61c = 0;
    data_021ef620 = 0;
    data_021ef624 = 0;
    data_021ef628 = 0;
    data_021ef60c = 0;
    data_021ef610 = 0;
    data_021ef614 = 0;
    data_021ef618 = 0;
    u32 r = func_0210f4cc();
    switch (r) {
    case 0xf:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x80000;
        break;
    case 7:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x60000;
        break;
    default:
        func_0206d49c();
        break;
    }
}

extern "C" void func_020b7f7c(void) {
}

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_021ef628;
extern u32 data_021ef624;
extern u32 data_021ef620;
extern u32 data_021ef61c;
extern u32 data_021ef618;
extern u32 data_021ef614;
extern u32 data_021ef610;
extern u32 data_021ef60c;
extern u32 data_021ef608;
extern u32 data_021ef62c;

u32 data_021ef628;

u32 data_021ef624;

u32 data_021ef620;

u32 data_021ef61c;

u32 data_021ef618;

u32 data_021ef614;

u32 data_021ef610;

u32 data_021ef60c;

u32 data_021ef608;

u32 data_021ef62c;
