#include "text/Unk_02050288.h"

extern "C" {
void func_020e8558(void *ptr);
void *func_02063ffc(const char *fmt, ...);
void func_02116048(const void *src, void *dst, u32 size);
void func_02115fb4(void *dst, u32 value, u32 size);
char *func_0212a2ec(char *dst, const char *src, u32 n);
BOOL func_0205026c(u8 *out, const u8 *c);
BOOL func_02050278(char *out, u32 index);

extern const char data_020dbcb4[];
extern const char data_020dbcc8[];
extern const char *const data_020ca4a0[];

u32 func_02050d9c(Unk_02050288_Font *font, u32 c);
const u8 *func_02050d54(Unk_02050288_Font *font, u32 c);
void func_02050dd8(Unk_02050288_Font *font);
BOOL func_020510f4(StrBuf *buf, const char *src);
}

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

extern "C" {

void func_0205113c(StrBuf *buf) {
    u32 size = buf->size();
    func_02115fb4(buf->data(), 0, size);
}

BOOL func_020510f4(StrBuf *buf, const char *src) {
    u32 size = buf->size();
    char *data = (char *)buf->data();
    s32 last = size - 1;
    char *end = data + last;
    BOOL ok;
    data[last] = 0;
    func_0212a2ec(data, src, size);
    ok = data[last] == 0;
    if (!ok) {
        *end = 0;
    }
    return ok;
}

BOOL func_020510d8(StrBuf *dst, StrBuf *src) {
    return func_020510f4(dst, (const char *)src->data());
}

BOOL func_02050ff8(StrBuf *out, StrBuf *in) {
    s32 inLen = in->size();
    const u8 *s = in->data();
    char *o = (char *)out->data();
    u32 outLen = out->size();
    u32 pos = 0;
    BOOL overflow = FALSE;
    BOOL terminated = FALSE;
    s32 i;

    for (i = 0; i < inLen; i++, s++) {
        char tmp[4];
        char *p = o + pos;
        s32 n = func_02050278(tmp, *s);
        if (pos + n <= outLen) {
            if (n == 1) {
                *p = tmp[0];
                if (tmp[0] == 0) {
                    terminated = TRUE;
                }
            } else if (n == 2) {
                p[0] = tmp[0];
                p[1] = tmp[1];
            }
        } else {
            overflow = TRUE;
            break;
        }
        pos += n;
        if (terminated) {
            break;
        }
    }
    if (!overflow && pos < outLen) {
        terminated = TRUE;
        while (pos < outLen) {
            o[pos++] = 0;
        }
    }
    if (!terminated) {
        *(o + outLen - 1) = 0;
    }
    return !overflow && terminated;
}

void func_02050fd0(StrBuf *buf) {
    u32 size = buf->size();
    func_02115fb4(buf->data(), 0, size);
}

BOOL func_02050f7c(StrBuf *buf, const void *src, s32 len) {
    s32 size = buf->size();
    u8 *data = buf->data();
    s32 rest = size - len;
    BOOL ok = rest >= 0;
    if (!ok) {
        len = size;
    }
    func_02116048(src, data, len);
    if (rest > 0) {
        func_02115fb4(data + len, 0, rest);
    }
    return ok;
}

BOOL func_02050ee0(StrBuf *dst, StrBuf *src) {
    const u8 *s = src->data();
    u32 srcLen = src->size();
    u32 i = 0;
    u8 *d = dst->data();
    u32 dstLen = dst->size();
    u32 j = 0;
    BOOL result = TRUE;
    u8 c;

    while (i < srcLen && j < dstLen) {
        s32 n;
        if (*s == 0) {
            break;
        }
        n = func_0205026c(&c, s);
        if (n == 0) {
            n = 1;
            result = FALSE;
        } else {
            *d++ = c;
            j++;
        }
        s += n;
        i += n;
    }
    if (j >= dstLen && *s != 0) {
        result = FALSE;
    }
    while (j < dstLen) {
        *d = 0;
        j++;
        d++;
    }
    return result;
}

BOOL func_02050e90(StrBuf *obj, u8 *dst, s32 size) {
    const u8 *src = obj->data();
    s32 len = obj->size();
    BOOL fits = size >= len;
    s32 i;
    if (!fits) {
        len = size;
    }
    for (i = 0; i < len; i++) {
        dst[i] = src[i];
    }
    for (; i < size; i++) {
        dst[i] = 0;
    }
    return fits;
}

Unk_02050288_Font *func_02050e84(Unk_02050288_Font *font) {
    font->unk_00 = NULL;
    font->unk_04 = NULL;
    font->unk_08 = NULL;
    return font;
}

Unk_02050288_Font *func_02050e74(Unk_02050288_Font *font) {
    func_02050dd8(font);
    return font;
}

void func_02050e0c(Unk_02050288_Font *font, const char *name, void *arg2, Unk_02050288_Font *ext, u8 arg4) {
    void *files[3];
    s32 i;
    for (i = 0; i < 3; i++) {
        files[i] = arg2 != NULL ? func_02063ffc(data_020dbcb4, name, data_020ca4a0[i], arg2)
                                : func_02063ffc(data_020dbcc8, name, data_020ca4a0[i]);
    }
    font->unk_00 = (Unk_02050288_FontInfo *)files[0];
    font->unk_04 = (Unk_02050288_Glyph *)files[1];
    font->unk_08 = (u8 *)files[2];
    font->unk_0c = ext;
    font->unk_10 = arg4;
}

void func_02050dd8(Unk_02050288_Font *font) {
    if (font->unk_00 != NULL) {
        func_020e8558(font->unk_00);
        font->unk_00 = NULL;
    }
    if (font->unk_04 != NULL) {
        func_020e8558(font->unk_04);
        font->unk_04 = NULL;
    }
    if (font->unk_08 != NULL) {
        func_020e8558(font->unk_08);
        font->unk_08 = NULL;
    }
}

u32 func_02050d9c(Unk_02050288_Font *font, u32 c) {
    u32 width = 0;
    if (c & 0x80000000) {
        width = func_02050d9c(font->unk_0c, c & 0x7fffffff);
    } else if (c < font->unk_00->unk_00) {
        width = font->unk_04[c].unk_02;
    }
    return width;
}

const u8 *func_02050d54(Unk_02050288_Font *font, u32 c) {
    const u8 *glyph = NULL;
    if (c & 0x80000000) {
        glyph = func_02050d54(font->unk_0c, c & 0x7fffffff);
    } else {
        Unk_02050288_FontInfo *info = font->unk_00;
        if (c < info->unk_00) {
            u32 size = (u32)(info->unk_04 * info->unk_06) >> 3;
            glyph = font->unk_08 + size * c;
        }
    }
    return glyph;
}

}
